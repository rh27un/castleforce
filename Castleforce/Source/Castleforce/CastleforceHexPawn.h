// Copyright Rhun Jones 2019

#pragma once

#include "CoreMinimal.h"
#include "CastleforcePawn.h"
#include "CastleForceHexTile.h"
#include "CastleforceUnit.h"
#include "CastleforceHexPawn.generated.h"

/**
 * 
 */
UCLASS()
class CASTLEFORCE_API ACastleforceHexPawn : public APawn
{
	GENERATED_BODY()
public:

	void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	

protected:
	void TriggerClick();
	void TraceForBlock(const FVector& Start, const FVector& End, bool bDrawDebugHelpers);
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	class ACastleForceHexTile* CurrentTileFocus;

	TArray<ACastleforceUnit*> SelectedUnits;
};
