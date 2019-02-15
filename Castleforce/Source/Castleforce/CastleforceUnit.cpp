// Copyright Rhun Jones 2019

#include "CastleforceUnit.h"
#include "Kismet/GameplayStatics.h"
#include "CastleforceHexGrid.h"


void ACastleforceUnit::NavigateTo(ACastleforceHexTile* tile) {
	//probably do some pathfinding here idk
	if (tile != currentTile) {
		TArray<AActor*> FoundActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACastleforceHexGrid::StaticClass(), FoundActors);
		currentPath = Cast<ACastleforceHexGrid>(FoundActors[0])->AStar(currentTile, tile);
		
	}
	GetWorldTimerManager().SetTimer(UnitTimerHandle, this, &ACastleforceUnit::ContinuePath, currentPath[0]->walkTime);
	//TeleportToTile(tile);
}

void ACastleforceUnit::ContinuePath() {
	if (currentPath.Num() >= 0) {
		TeleportToTile(currentPath[0]);
		currentPath.RemoveAt(0);
		
		if (currentPath.Num() == 0) {
			GetWorldTimerManager().ClearTimer(UnitTimerHandle);
		} else {
			GetWorldTimerManager().SetTimer(UnitTimerHandle, this, &ACastleforceUnit::ContinuePath, currentPath[0]->walkTime);
		}
	}
}

void ACastleforceUnit::TeleportToTile(ACastleforceHexTile* tile) {
	currentTile = tile;
	tile->Occupy(this);
}
