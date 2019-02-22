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

void ACastleforceHexPawn::SetUnitType(int type)
{
	unitType = (UnitType)type;
}

void ACastleforceHexPawn::Click()
{
	if (CurrentTileFocus) {
		ACastleforceUnit* newUnit = Cast<ACastleforceUnit>(CurrentTileFocus->GetOccupyingObject());
		//
		if (newUnit) {
			if (SelectedUnit) {
				if (SelectedUnit != newUnit) {
					SelectedUnit = newUnit;
				}
			}
			else {
				SelectedUnit = newUnit;
			}
		}
		else {
			if (currentMode == BuildUnits) {
				BuildUnit();
			}
		}
	}
}

void ACastleforceHexPawn::RightClick() {
	if (CurrentTileFocus) {
		//GEngine->AddOnScreenDebugMessage(-1, 50.f, FColor::Red, FString::Printf(TEXT("Index of Cell at %d, %d: %d"), CurrentTileFocus->X, CurrentTileFocus->Y, CurrentTileFocus->I));
		if (SelectedUnit) {
			SelectedUnit->NavigateTo(CurrentTileFocus);
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

void ACastleforceHexPawn::BuildUnit(){
	const FVector* NewLocation = new FVector();
	const FRotator* NewRotation = new FRotator();
	AActor* NewUnit;
	switch (unitType) {
	case NoneUnit:
		break;
	case Knight:
		NewUnit = GetWorld()->SpawnActor(KnightClass, NewLocation, NewRotation);
		if (Cast<ACastleforceUnit>(NewUnit)) {
			Cast<ACastleforceUnit>(NewUnit)->currentTile = CurrentTileFocus;
			CurrentTileFocus->Occupy(Cast<ACastleforceUnit>(NewUnit));
		}
		break;
	case Mythic:
		NewUnit = GetWorld()->SpawnActor(MythicClass, NewLocation, NewRotation);
		if (Cast<ACastleforceUnit>(NewUnit)) {
			Cast<ACastleforceUnit>(NewUnit)->currentTile = CurrentTileFocus;
			CurrentTileFocus->Occupy(Cast<ACastleforceUnit>(NewUnit));
		}
		break;
	case Priest:
		NewUnit = GetWorld()->SpawnActor(PriestClass, NewLocation, NewRotation);
		if (Cast<ACastleforceUnit>(NewUnit)) {
			Cast<ACastleforceUnit>(NewUnit)->currentTile = CurrentTileFocus;
			CurrentTileFocus->Occupy(Cast<ACastleforceUnit>(NewUnit));
		}
		break;
	default:
		break;
	}
}

void ACastleforceHexPawn::BuildBuilding()
{
}
