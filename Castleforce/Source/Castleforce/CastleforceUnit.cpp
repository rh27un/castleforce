// Copyright Rhun Jones 2019

#include "CastleforceUnit.h"
#include "Kismet/GameplayStatics.h"
#include "CastleforceHexGrid.h"


void ACastleforceUnit::NavigateTo(ACastleforceHexTile* tile) {
	//probably do some pathfinding here idk
	if (tile != currentTile) {
		TArray<AActor*> FoundActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACastleforceHexGrid::StaticClass(), FoundActors);
		TArray<ACastleforceHexTile*> path = Cast<ACastleforceHexGrid>(FoundActors[0])->AStar(currentTile, tile);
		for (int i = 0; i < path.Num(); i++) {
			path[i]->Highlight(true);
		}
	}
	TeleportToTile(tile);
}

void ACastleforceUnit::TeleportToTile(ACastleforceHexTile* tile) {
	currentTile = tile;
	tile->Occupy(this);
}
