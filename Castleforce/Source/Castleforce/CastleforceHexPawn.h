// Copyright Rhun Jones 2019

#pragma once

#include "CoreMinimal.h"
#include "CastleforcePawn.h"
#include "CastleforceHexGrid.h"
#include "CastleforceHexTile.h"
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

	void BeginPlay() override;
	void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<ACastleforceUnit> KnightClass;

protected:
	void Click();
	void RightClick();
	void TraceForBlock(const FVector& Start, const FVector& End, bool bDrawDebugHelpers);
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	class ACastleforceHexTile* CurrentTileFocus;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ACastleforceUnit* SelectedUnit;

	ACastleforceHexGrid* grid;

};
