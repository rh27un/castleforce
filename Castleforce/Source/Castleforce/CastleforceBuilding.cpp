// Copyright Rhun Jones 2019

#include "CastleforceBuilding.h"
#include "Kismet/GameplayStatics.h"

void ACastleforceBuilding::BeginPlay() {
	Super::BeginPlay();
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACastleforceHexGrid::StaticClass(), FoundActors);
	grid = Cast<ACastleforceHexGrid>(FoundActors[0]);
}

void ACastleforceBuilding::TeleportToTile(ACastleforceHexTile* tile) {
	currentTile = tile;
	tile->Occupy(this);
	visibleTiles = grid->GetTileSight(currentTile, sightRange);
}

