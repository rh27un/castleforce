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
		SetActorRotation(FRotator(0.f, directions[WhichNeighbour(currentPath[0])], 0.f));
		TeleportToTile(currentPath[0]);
		currentPath.RemoveAt(0);
		
		if (currentPath.Num() == 0) {
			GetWorldTimerManager().ClearTimer(UnitTimerHandle);
		} else {
			GetWorldTimerManager().SetTimer(UnitTimerHandle, this, &ACastleforceUnit::ContinuePath, currentPath[0]->walkTime);
		}
	}
}

int ACastleforceUnit::WhichNeighbour(ACastleforceHexTile * tile) {
	int currentX = currentTile->X;
	int currentY = currentTile->Y;
	int tileX = tile->X;
	int tileY = tile->Y;

	if (tileX == currentX && tileY == currentY + 1) {
		//up right
		return 0;
	} else if (tileX == currentX + 1 && tileY == currentY) {
		//right
		return 1;
	} else if (tileX == currentX + 1 && tileY == currentY - 1) {
		//down right
		return 2;
	} else if (tileX == currentX && tileY == currentY - 1) {
		//down left
		return 3;
	} else if (tileX == currentX - 1 && tileY == currentY) {
		//left
		return 4;
	} else if (tileX == currentX - 1 && tileY == currentY + 1) {
		//up left
		return 5;
	}
	return 0;
}

void ACastleforceUnit::TeleportToTile(ACastleforceHexTile* tile) {
	currentTile = tile;
	tile->Occupy(this);
	visibleTiles = grid->GetTileSight(currentTile, sightRange);
}
