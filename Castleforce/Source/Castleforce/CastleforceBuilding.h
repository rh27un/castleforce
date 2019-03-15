// Copyright Rhun Jones 2019

#pragma once

#include "CoreMinimal.h"
#include "CastleforceObject.h"
#include "CastleforceHexGrid.h"
#include "CastleforceHexTile.h"
#include "CastleforceBuilding.generated.h"

/**
 * 
 */
UCLASS()
class CASTLEFORCE_API ACastleforceBuilding : public ACastleforceObject
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;
	ACastleforceHexGrid* grid;
	ACastleforceHexTile* currentTile;
	TArray<ACastleforceHexTile*> visibleTiles;
	void TeleportToTile(ACastleforceHexTile* tile);
	
};
