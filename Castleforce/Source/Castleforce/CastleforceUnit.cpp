// Copyright Rhun Jones 2019

#include "CastleforceUnit.h"
#include "Kismet/GameplayStatics.h"



void ACastleforceUnit::NavigateTo(ACastleforceHexTile* tile) {
	//probably do some pathfinding here idk
	if (tile != currentTile) {
		
		currentPath = grid->AStar(currentTile, tile);
		if (currentPath.Num() == 0) {
			return;
		}
	}
	GetWorldTimerManager().SetTimer(UnitTimerHandle, this, &ACastleforceUnit::ContinuePath, currentPath[0]->walkTime);
	//TeleportToTile(tile);
}

void ACastleforceUnit::BeginPlay() {
	Super::BeginPlay();
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACastleforceHexGrid::StaticClass(), FoundActors);
	grid = Cast<ACastleforceHexGrid>(FoundActors[0]);
	
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
	visibleTiles = grid->GetTileSight(currentTile, 2);
}
