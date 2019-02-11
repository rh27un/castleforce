// Copyright Rhun Jones 2019

#pragma once

#include "CoreMinimal.h"
#include "CastleforceObject.h"
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

protected:

	void TeleportTo(ACastleforceHexTile* tile);
	
	
};
