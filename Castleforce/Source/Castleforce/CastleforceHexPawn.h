// Copyright Rhun Jones 2019

#pragma once

#include "CoreMinimal.h"
#include "CastleforcePawn.h"
#include "CastleforceHexGrid.h"
#include "CastleforceHexTile.h"
#include "CastleforceUnit.h"
#include "CastleforceHexPawn.generated.h"


UENUM() enum BuildType { NoneBuild UMETA(DisplayName = "None"), Knight UMETA(DisplayName = "Knight"), Mythic UMETA(DisplayName = "Mythic"), Priest UMETA(DisplayName = "Priest"),
						Mine UMETA(DisplayName = "Mine"), Workshop UMETA(DisplayName = "Crystal Workshop"), Excavation UMETA(DisplayName = "Relic Excavation")};

/**
 * 
 */
UCLASS()
class CASTLEFORCE_API ACastleforceHexPawn : public APawn
{
	GENERATED_BODY()
public:
	ACastleforceHexPawn();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TEnumAsByte<BuildType> selectedBuildType;
	void BeginPlay() override;
	void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		TSubclassOf<ACastleforceUnit> KnightClass;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		TSubclassOf<ACastleforceUnit> MythicClass;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		TSubclassOf<ACastleforceUnit> PriestClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Speed;

	UFUNCTION(BlueprintCallable)
		void SetBuildType(int type);
protected:
	void Click();
	void RightClick();

	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);

	void TraceForBlock(const FVector& Start, const FVector& End, bool bDrawDebugHelpers);
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	class ACastleforceHexTile* CurrentTileFocus;

	TArray<ACastleforceUnit*> myUnits;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ACastleforceUnit* SelectedUnit;

	ACastleforceHexGrid* grid;

	FVector MovementInput;

	void Build();

	TArray<ACastleforceHexTile*> visibleTiles;
};
