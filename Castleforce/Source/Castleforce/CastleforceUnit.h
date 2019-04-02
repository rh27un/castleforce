// Copyright Rhun Jones 2019

#pragma once

#include "CoreMinimal.h"
#include "CastleforceObject.h"
#include "CastleforceHexGrid.h"
#include "CastleforceHexTile.h"

#include "CastleforceUnit.generated.h"

/**
 * 
 */
UCLASS()
class CASTLEFORCE_API ACastleforceUnit : public ACastleforceObject
{
	GENERATED_BODY()

public:
	void NavigateTo(ACastleforceHexTile* tile);
	ACastleforceHexTile* currentTile;
	TArray<ACastleforceHexTile*> currentPath;
	
	ACastleforceHexGrid* grid;
	void TeleportToTile(ACastleforceHexTile* tile);
	TArray<ACastleforceHexTile*> visibleTiles;
protected:
	virtual void BeginPlay() override;
	void ContinuePath();
	
	FTimerHandle UnitTimerHandle;
	
};
