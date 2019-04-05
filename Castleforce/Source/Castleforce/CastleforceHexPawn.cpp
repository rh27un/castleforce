// Copyright Rhun Jones 2019

#include "CastleforceHexPawn.h"
#include "Kismet/GameplayStatics.h"

ACastleforceHexPawn::ACastleforceHexPawn() {
	AutoPossessPlayer = EAutoReceiveInput::Player0;
	AutoReceiveInput = EAutoReceiveInput::Player0;
}

void ACastleforceHexPawn::Tick(float DeltaSeconds) {
	Super::Tick(DeltaSeconds);

	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		//get mouse hover position
		FVector Start, Dir, End;
		PC->DeprojectMousePositionToWorld(Start, Dir);
		End = Start + (Dir * 8000.0f);
		TraceForBlock(Start, End, false);
	}
	if (!MovementInput.IsZero()) {
		//pan camera
		MovementInput = MovementInput * Speed;
		//MovementInput.Normalize();
		SetActorLocation(GetActorLocation() + (MovementInput));
	}
	//find visible tiles
	//should probably not do this every tick
	//mayhaps check if a unit has moved before bothering to do this
	TArray<ACastleforceHexTile*> visibleTiles;
	for (int i = 0; i < myUnits.Num(); i++) {
		visibleTiles.Append(myUnits[i]->visibleTiles);
	}
	for (int i = 0; i < myBuildings.Num(); i++) {
		visibleTiles.Append(myBuildings[i]->visibleTiles);
	}
	grid->UpdateVisibleTiles(visibleTiles);
}

void ACastleforceHexPawn::BeginPlay() {
	Super::BeginPlay();
	//setup
	TArray<AActor*> foundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACastleforceHexGrid::StaticClass(), foundActors);
	grid = Cast<ACastleforceHexGrid>(foundActors[0]);

	//spawn player castle
	ACastleforceHexTile* spawnLoc = grid->SpawnRandom(0, 0);
	if(!spawnLoc)
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Spawn failed"));
	else
		Build(Castle, spawnLoc);

	GetWorld()->GetTimerManager().SetTimer(PawnTimerHandle, this, &ACastleforceHexPawn::AddResources, BuildingTicks, true);
}

void ACastleforceHexPawn::SetupPlayerInputComponent(UInputComponent * PlayerInputComponent)
{
	//Mouse Inputs
	PlayerInputComponent->BindAction("Click", EInputEvent::IE_Pressed, this, &ACastleforceHexPawn::Click);
	PlayerInputComponent->BindAction("RightClick", EInputEvent::IE_Pressed, this, &ACastleforceHexPawn::RightClick);
	PlayerInputComponent->BindAction("MiddleClick", EInputEvent::IE_Pressed, this, &ACastleforceHexPawn::MiddleDown);
	PlayerInputComponent->BindAction("MiddleClick", EInputEvent::IE_Released, this, &ACastleforceHexPawn::MiddleUp);

	//Movement axes
	PlayerInputComponent->BindAxis("Vertical", this, &ACastleforceHexPawn::MoveForward);
	PlayerInputComponent->BindAxis("Horizontal", this, &ACastleforceHexPawn::MoveRight);
	PlayerInputComponent->BindAxis("MVert", this, &ACastleforceHexPawn::MouseForward);
	PlayerInputComponent->BindAxis("MHor", this, &ACastleforceHexPawn::MouseRight);

	//Hotkeys
	PlayerInputComponent->BindAction("KnightHotkey", EInputEvent::IE_Pressed, this, &ACastleforceHexPawn::SelectKnight);
	PlayerInputComponent->BindAction("MythicHotkey", EInputEvent::IE_Pressed, this, &ACastleforceHexPawn::SelectMythic);
	PlayerInputComponent->BindAction("PriestHotkey", EInputEvent::IE_Pressed, this, &ACastleforceHexPawn::SelectPriest);
	PlayerInputComponent->BindAction("MineHotkey", EInputEvent::IE_Pressed, this, &ACastleforceHexPawn::SelectMine);
	PlayerInputComponent->BindAction("WorkshopHotkey", EInputEvent::IE_Pressed, this, &ACastleforceHexPawn::SelectWorkshop);
	PlayerInputComponent->BindAction("ExcavationHotkey", EInputEvent::IE_Pressed, this, &ACastleforceHexPawn::SelectExcavation);
}

void ACastleforceHexPawn::SetBuildType(int type)
{
	selectedBuildType = (BuildType)type;
}

void ACastleforceHexPawn::Click()
{
	if (CurrentTileFocus) {
		ACastleforceObject* newObject = (CurrentTileFocus->GetOccupyingObject());
		//
		if (newObject) {
			if (Cast<ACastleforceUnit>(newObject)) {
				ACastleforceUnit* newUnit = Cast<ACastleforceUnit>(newObject);
				//UNITS
				if (SelectedUnit) {
					if (SelectedUnit != newUnit) {
						SelectedUnit = newUnit;
					}
				} else {
					SelectedUnit = newUnit;
				}
			} else {
				//BUILDINGS
			}
		} else {
			if(!CurrentTileFocus->IsTileHidden())
				Build(selectedBuildType, CurrentTileFocus);
		}
	}
}

void ACastleforceHexPawn::RightClick() {
	if (CurrentTileFocus) {
		//GEngine->AddOnScreenDebugMessage(-1, 50.f, FColor::Red, FString::Printf(TEXT("Index of Cell at %d, %d: %d"), CurrentTileFocus->X, CurrentTileFocus->Y, CurrentTileFocus->I));
		if (SelectedUnit) {
			SelectedUnit->NavigateTo(CurrentTileFocus);
		} else {
			TArray<ACastleforceHexTile*> visibleTiles = grid->GetTileSight(CurrentTileFocus, 2);
			for (int i = 0; i < visibleTiles.Num(); i++) {
				visibleTiles[i]->MakeVisible(true);
			}
		}
	}
}

void ACastleforceHexPawn::MiddleDown() {
	if (!bIsDragging) {
		bIsDragging = true;
	}
}

void ACastleforceHexPawn::MiddleUp() {
	if (bIsDragging) {
		bIsDragging = false;
	}
}

void ACastleforceHexPawn::MouseForward(float AxisValue) {
	if (bIsDragging) {
		MovementInput.X = - AxisValue;
	}
}

void ACastleforceHexPawn::MouseRight(float AxisValue) {
	if (bIsDragging) {
		MovementInput.Y = - AxisValue;
	}
}

void ACastleforceHexPawn::MoveForward(float AxisValue) {
	//UE_LOG(LogTemp, Warning, TEXT("Move Forward"));
	if(!bIsDragging)
		MovementInput.X = FMath::Clamp(AxisValue, -1.0f, 1.0f);
}

void ACastleforceHexPawn::MoveRight(float AxisValue) {
	//UE_LOG(LogTemp, Warning, TEXT("Move Right"));
	if(!bIsDragging)
		MovementInput.Y = FMath::Clamp(AxisValue, -1.0f, 1.0f);
}

void ACastleforceHexPawn::AddResources() {
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Tick"));
	for (int i = 0; i < myBuildings.Num(); i++) {

		switch (myBuildings[i]->currentTile->tileRes) {
		case NoneRes:
			break;
		case Iron:
			iron++;
			break;
		case Crystals:
			crystals++;
			break;
		case Relics:
			relics++;
			break;
		}
	}
}

void ACastleforceHexPawn::SelectKnight()
{
	selectedBuildType = Knight;
}

void ACastleforceHexPawn::SelectMythic()
{
	selectedBuildType = Mythic;
}

void ACastleforceHexPawn::SelectPriest()
{
	selectedBuildType = Priest;
}

void ACastleforceHexPawn::SelectMine()
{
	selectedBuildType = Mine;
}

void ACastleforceHexPawn::SelectWorkshop()
{
	selectedBuildType = Workshop;
}

void ACastleforceHexPawn::SelectExcavation()
{
	selectedBuildType = Excavation;
}

void ACastleforceHexPawn::TraceForBlock(const FVector & Start, const FVector & End, bool bDrawDebugHelpers)
{
	FHitResult HitResult;
	GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility);

	if (HitResult.Actor.IsValid())
	{
		ACastleforceHexTile* HitTile = Cast<ACastleforceHexTile>(HitResult.Actor.Get());
		if (CurrentTileFocus != HitTile)
		{
			if (CurrentTileFocus)
			{
				CurrentTileFocus->Highlight(false);
				CurrentTileFocus = nullptr;
			}
			if (HitTile)
			{
				if (HitTile->walkable) {
					CurrentTileFocus = HitTile;
					HitTile->Highlight(true);
				}
			}
		}
	}
	else if (CurrentTileFocus)
	{
		CurrentTileFocus->Highlight(false);
		CurrentTileFocus = nullptr;
	}
}

void ACastleforceHexPawn::Build(TEnumAsByte<BuildType> buildType, ACastleforceHexTile* location){
	const FVector* NewLocation = new FVector(0.f);
	const FRotator* NewRotation = new FRotator(0.f);
	AActor* NewObject;
	switch (buildType) {
	case NoneBuild:
		break;
	case Knight:
		if (iron >= 10) {
			iron -= 10;
			NewObject = GetWorld()->SpawnActor(KnightClass, NewLocation, NewRotation);
			if (Cast<ACastleforceUnit>(NewObject)) {
				Cast<ACastleforceUnit>(NewObject)->currentTile = location;
				Cast<ACastleforceUnit>(NewObject)->SetOwner(0);
				myUnits.Add(Cast<ACastleforceUnit>(NewObject));
				Cast<ACastleforceUnit>(NewObject)->TeleportToTile(location);
			}
		} else {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Not Enough Iron!"));
		}
		break;
	case Mythic:
		if (crystals >= 10) {
			crystals -= 10;
			NewObject = GetWorld()->SpawnActor(MythicClass, NewLocation, NewRotation);
			if (Cast<ACastleforceUnit>(NewObject)) {
				Cast<ACastleforceUnit>(NewObject)->currentTile = location;
				Cast<ACastleforceUnit>(NewObject)->SetOwner(0);
				myUnits.Add(Cast<ACastleforceUnit>(NewObject));
				Cast<ACastleforceUnit>(NewObject)->TeleportToTile(location);
			}
		} else {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Not enough crystals!"));
		}
		break;
	case Priest:
		if (relics >= 10) {
			relics -= 10;
			NewObject = GetWorld()->SpawnActor(PriestClass, NewLocation, NewRotation);
			if (Cast<ACastleforceUnit>(NewObject)) {
				Cast<ACastleforceUnit>(NewObject)->currentTile = location;
				Cast<ACastleforceUnit>(NewObject)->SetOwner(0);
				myUnits.Add(Cast<ACastleforceUnit>(NewObject));
				Cast<ACastleforceUnit>(NewObject)->TeleportToTile(location);
			}
		} else {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Not enough relics!"));
		}
		break;
	case Mine:
		if (location->tileRes == Iron) {
			NewObject = GetWorld()->SpawnActor(MineClass, NewLocation, NewRotation);
			if (Cast<ACastleforceBuilding>(NewObject)) {
				Cast<ACastleforceBuilding>(NewObject)->currentTile = location;
				Cast<ACastleforceBuilding>(NewObject)->SetOwner(0);
				myBuildings.Add(Cast<ACastleforceBuilding>(NewObject));
				Cast<ACastleforceBuilding>(NewObject)->TeleportToTile(location);
			}
		} else {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Can't build here!"));
		}
		break;
	case Workshop:
		if (location->tileRes == Crystals) {
			NewObject = GetWorld()->SpawnActor(WorkshopClass, NewLocation, NewRotation);
			if (Cast<ACastleforceBuilding>(NewObject)) {
				Cast<ACastleforceBuilding>(NewObject)->currentTile = location;
				Cast<ACastleforceBuilding>(NewObject)->SetOwner(0);
				myBuildings.Add(Cast<ACastleforceBuilding>(NewObject));
				Cast<ACastleforceBuilding>(NewObject)->TeleportToTile(location);
			}
		} else {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Can't build here!"));
		}
		break;
	case Excavation:
		if (location->tileRes == Relics) {
			NewObject = GetWorld()->SpawnActor(ExcavationClass, NewLocation, NewRotation);
			if (Cast<ACastleforceBuilding>(NewObject)) {
				Cast<ACastleforceBuilding>(NewObject)->currentTile = location;
				Cast<ACastleforceBuilding>(NewObject)->SetOwner(0);
				myBuildings.Add(Cast<ACastleforceBuilding>(NewObject));
				Cast<ACastleforceBuilding>(NewObject)->TeleportToTile(location);
			}
		} else {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Can't build here!"));
		}
		break;
	case Castle:
		NewObject = GetWorld()->SpawnActor(CastleClass, NewLocation, NewRotation);
		if(Cast<ACastleforceBuilding>(NewObject)){
			Cast<ACastleforceBuilding>(NewObject)->SetOwner(0);
			myBuildings.Add(Cast<ACastleforceBuilding>(NewObject));
			Cast<ACastleforceBuilding>(NewObject)->TeleportToTile(location);
		}
		break;
	default:
		break;
	}
}
