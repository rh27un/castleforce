// Copyright Rhun Jones 2019

#include "CastleforceUnit.h"
#include "Kismet/GameplayStatics.h"
#include "CastleforceHexGrid.h"


void ACastleforceUnit::NavigateTo(ACastleforceHexTile* tile) {
	//probably do some pathfinding here idk
	TeleportTo(tile);
}

void ACastleforceUnit::TeleportTo(ACastleforceHexTile* tile) {
	tile->Occupy(this);
}
