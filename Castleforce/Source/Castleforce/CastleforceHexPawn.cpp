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
	PlayerInputComponent->BindAction("TriggerClick", EInputEvent::IE_Pressed, this, &ACastleforceHexPawn::TriggerClick);
}

void ACastleforceHexPawn::TriggerClick()
{
	CurrentTileFocus->HandleClicked();
}

void ACastleforceHexPawn::TraceForBlock(const FVector & Start, const FVector & End, bool bDrawDebugHelpers)
{
	FHitResult HitResult;
	GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility);

	if (HitResult.Actor.IsValid())
	{
		ACastleForceHexTile* HitTile = Cast<ACastleForceHexTile>(HitResult.Actor.Get());
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
