// Copyright Rhun Jones 2019

#pragma once

#include "CoreMinimal.h"
#include "CastleforcePawn.h"
#include "CastleforceHexGrid.h"
#include "CastleforceHexTile.h"
#include "CastleforceUnit.h"
#include "CastleforceHexPawn.generated.h"

enum BuildMode { NoneMode, BuildUnits, BuildBuildings };
enum UnitType { NoneUnit, Knight, Priest, Mythic };
enum BuildingType { NoneBuilding, Mine, WatchTower, Town };

/**
 * 
 */
UCLASS()
class CASTLEFORCE_API ACastleforceHexPawn : public APawn
{
	GENERATED_BODY()
public:
	ACastleforceHexPawn();

	BuildMode currentMode = BuildMode::NoneMode;
	UnitType unitType = UnitType::NoneUnit;
	BuildingType buildingType = BuildingType::NoneBuilding;

	void BeginPlay() override;
	void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<ACastleforceUnit> KnightClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Speed;
protected:
	void Click();
	void RightClick();

	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);

	void TraceForBlock(const FVector& Start, const FVector& End, bool bDrawDebugHelpers);
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	class ACastleforceHexTile* CurrentTileFocus;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ACastleforceUnit* SelectedUnit;

	ACastleforceHexGrid* grid;

	FVector MovementInput;
};
