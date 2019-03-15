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
		FVector Start, Dir, End;
		PC->DeprojectMousePositionToWorld(Start, Dir);
		End = Start + (Dir * 8000.0f);
		TraceForBlock(Start, End, false);
	}
	if (!MovementInput.IsZero()) {
		SetActorLocation(GetActorLocation() + (MovementInput * Speed));
	}
	TArray<ACastleforceHexTile*> visibleTiles;
	for (int i = 0; i < myUnits.Num(); i++) {
		visibleTiles.Append(myUnits[i]->visibleTiles);
	}
	grid->UpdateVisibleTiles(visibleTiles);
}

void ACastleforceHexPawn::BeginPlay() {
	Super::BeginPlay();
	TArray<AActor*> foundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACastleforceHexGrid::StaticClass(), foundActors);
	grid = Cast<ACastleforceHexGrid>(foundActors[0]);
}

void ACastleforceHexPawn::SetupPlayerInputComponent(UInputComponent * PlayerInputComponent)
{
	PlayerInputComponent->BindAction("Click", EInputEvent::IE_Pressed, this, &ACastleforceHexPawn::Click);
	PlayerInputComponent->BindAction("RightClick", EInputEvent::IE_Pressed, this, &ACastleforceHexPawn::RightClick);
	PlayerInputComponent->BindAxis("Vertical", this, &ACastleforceHexPawn::MoveForward);
	PlayerInputComponent->BindAxis("Horizontal", this, &ACastleforceHexPawn::MoveRight);

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
			Build();
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

void ACastleforceHexPawn::MoveForward(float AxisValue) {
	MovementInput.X = FMath::Clamp(AxisValue, -1.0f, 1.0f);
}

void ACastleforceHexPawn::MoveRight(float AxisValue) {
	MovementInput.Y = FMath::Clamp(AxisValue, -1.0f, 1.0f);
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

void ACastleforceHexPawn::Build(){
	const FVector* NewLocation = new FVector(0.f);
	const FRotator* NewRotation = new FRotator(0.f);
	AActor* NewObject;
	switch (selectedBuildType) {
	case NoneBuild:
		break;
	case Knight:
		NewObject = GetWorld()->SpawnActor(KnightClass, NewLocation, NewRotation);
		if (Cast<ACastleforceUnit>(NewObject)) {
			Cast<ACastleforceUnit>(NewObject)->currentTile = CurrentTileFocus;
			Cast<ACastleforceUnit>(NewObject)->SetOwner(0);
			myUnits.Add(Cast<ACastleforceUnit>(NewObject));
			Cast<ACastleforceUnit>(NewObject)->TeleportToTile(CurrentTileFocus);
		}
		break;
	case Mythic:
		NewObject = GetWorld()->SpawnActor(MythicClass, NewLocation, NewRotation);
		if (Cast<ACastleforceUnit>(NewObject)) {
			Cast<ACastleforceUnit>(NewObject)->currentTile = CurrentTileFocus;
			Cast<ACastleforceUnit>(NewObject)->SetOwner(0);
			myUnits.Add(Cast<ACastleforceUnit>(NewObject));
			Cast<ACastleforceUnit>(NewObject)->TeleportToTile(CurrentTileFocus);
		}
		break;
	case Priest:
		NewObject = GetWorld()->SpawnActor(PriestClass, NewLocation, NewRotation);
		if (Cast<ACastleforceUnit>(NewObject)) {
			Cast<ACastleforceUnit>(NewObject)->currentTile = CurrentTileFocus;
			Cast<ACastleforceUnit>(NewObject)->SetOwner(0);
			myUnits.Add(Cast<ACastleforceUnit>(NewObject));
			Cast<ACastleforceUnit>(NewObject)->TeleportToTile(CurrentTileFocus);
		}
		break;
	case Mine:
		break;
	case Workshop:
		break;
	case Excavation:
		break;
	default:
		break;
	}
}
