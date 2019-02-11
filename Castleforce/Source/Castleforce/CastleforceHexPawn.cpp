// Copyright Rhun Jones 2019

#include "CastleforceHexPawn.h"

void ACastleforceHexPawn::Tick(float DeltaSeconds) {
	Super::Tick(DeltaSeconds);

	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		FVector Start, Dir, End;
		PC->DeprojectMousePositionToWorld(Start, Dir);
		End = Start + (Dir * 8000.0f);
		TraceForBlock(Start, End, false);
	}
}

void ACastleforceHexPawn::SetupPlayerInputComponent(UInputComponent * PlayerInputComponent)
{
	PlayerInputComponent->BindAction("Click", EInputEvent::IE_Pressed, this, &ACastleforceHexPawn::Click);
	PlayerInputComponent->BindAction("RightClick", EInputEvent::IE_Pressed, this, &ACastleforceHexPawn::RightClick);
}

void ACastleforceHexPawn::Click()
{
	if (CurrentTileFocus) {
		ACastleforceUnit* newUnit = Cast<ACastleforceUnit>(CurrentTileFocus->GetOccupyingObject());
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is an on screen message!"));
		if (SelectedUnit) {
			if (newUnit && newUnit != SelectedUnit) {
				SelectedUnit = newUnit;
			}
		} else {
			if (newUnit) {
				SelectedUnit = newUnit;
			} else {
				const FVector* NewLocation = new FVector();
				const FRotator* NewRotation = new FRotator();
				AActor* NewUnit = GetWorld()->SpawnActor(KnightClass, NewLocation, NewRotation);
				CurrentTileFocus->Occupy(Cast<ACastleforceUnit>(NewUnit));
			}
		}
	}
}

void ACastleforceHexPawn::RightClick() {
	if (CurrentTileFocus) {
		if (SelectedUnit) {
			SelectedUnit->NavigateTo(CurrentTileFocus);
		}
	}
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
			}
			if (HitTile)
			{
				HitTile->Highlight(true);
			}
			CurrentTileFocus = HitTile;
		}
	}
	else if (CurrentTileFocus)
	{
		CurrentTileFocus->Highlight(false);
		CurrentTileFocus = nullptr;
	}
}
