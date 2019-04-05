// Copyright Rhun Jones 2019

#include "CastleforceHexGrid.h"
#include "SimplexNoiseBPLibrary.h"
// Sets default values
ACastleforceHexGrid::ACastleforceHexGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ACastleforceHexGrid::BeginPlay()
{
	Super::BeginPlay();

	corners = {
		FVector(0.f,0.f,0.f),
		FVector(0.f, Radius, 0.f),
		FVector(innerRadius, Radius * 0.5f, 0.f),
		FVector(innerRadius, Radius * -0.5f, 0.f),
		FVector(0.f, -Radius, 0.f),
		FVector(-innerRadius, Radius * -0.5f, 0.f),
		FVector(-innerRadius, Radius * 0.5f, 0.f)
	};
	int32 NumCells = Size * Size;
	USimplexNoiseBPLibrary::setNoiseSeed(FMath::RandRange(-100000, 100000));
	float InnerRadius = (Radius * 0.866025404);
	for (int i = 0; i < NumCells; i++) {
		int X = (i / Size);
		int Y = (i % Size);
		//GEngine->AddOnScreenDebugMessage(-1, 120.f, FColor::Red, FString::Printf(TEXT("Coordinates of Cell %d: x: %d, y: %d"), i, (Y - X / 2), X));
		float YOffset = (Y + X * 0.5f - X / 2)  * (InnerRadius * 2);
		float XOffset =  X * (Radius * 1.5);
		
		float ZOffset = USimplexNoiseBPLibrary::SimplexNoise2D(XOffset, YOffset);// * HeightMultiplier;
		const FVector* NewLocation = new FVector(XOffset, YOffset, 0.f);//ZOffset * HeightMultiplier);
		const FRotator* NewRotation = new FRotator(0.f, 90.f, 0.f);
		AActor* NewCell = GetWorld()->SpawnActor(CellClass, NewLocation, NewRotation);
		if (Cast<ACastleforceHexTile>(NewCell)) {
			ACastleforceHexTile* NewCellAsTile = Cast<ACastleforceHexTile>(NewCell);
			tiles.Add(NewCellAsTile);
			NewCellAsTile->CreateHexagon(corners, triangles);
			NewCellAsTile->SetCoords(Y - X / 2, X);
			NewCellAsTile->I = i;
			NewCellAsTile->SetHeightType(GetHeightType(ZOffset));
			NewCellAsTile->MakeVisible(false);
			FString tileName = "Tile " + NewCellAsTile->PrintCoords();
			NewCell->SetActorLabel(tileName);
			//GetTileAt(Cast<ACastleforceHexTile>(NewCell)->X, Cast<ACastleforceHexTile>(NewCell)->Y);

			if (FMath::FRand() > resourceProb) {
				TEnumAsByte<TileResource> newRes = TileResource(FMath::RandRange(1, 3));
				NewCellAsTile->SetResource(newRes);
			}
		}
	}

	//select areas to spawn
	//select the "centres" (probably near  0,0 and Size, Size. Like 5, 5 and Size - 5, Size - 5)
	//get arrays of tiles in range (probably five)
	//randomly select one tile from each area
	//if can pathfind between the tiles, spawn castles there
	//otherwise try again
	
	
}


TArray<ACastleforceHexTile*> ACastleforceHexGrid::ReconstructPath(TMap<ACastleforceHexTile*, ACastleforceHexTile*> cameFrom, ACastleforceHexTile * end) {
	TArray<ACastleforceHexTile*> path; //the path, in order, from start to finish, not including start
	path.Add(end);//we already know the end step
	ACastleforceHexTile* nextStep = cameFrom[end];
	//if camefrom contains nextstep, nextstep must have a step after
	while (cameFrom.Contains(nextStep)) {
		path.Insert(nextStep, 0); 
		nextStep = cameFrom[nextStep];
	} 
	
	return path;
}

TEnumAsByte<TileHeight> ACastleforceHexGrid::GetHeightType(float height) {
	if (height >= HeightTypes[Mountain]) {
		return Mountain;
	} else if (height >= HeightTypes[Hill]) {
		return Hill;
	} else if (height >= HeightTypes[Flat]) {
		return Flat;
	} else {
		return NoneHeight;
	}
}

ACastleforceHexTile * ACastleforceHexGrid::GetTileAt(int X, int Y)
{
	if (Y >= 0 && Y * Size < tiles.Num()) {
		for (int i = Y * Size; i < tiles.Num(); i++) {
			if (tiles[i]->Y == Y) {
				if (tiles[i]->X == X) {
					return tiles[i];
				}
			}
		}
	}
	return nullptr;
}

TArray<ACastleforceHexTile*> ACastleforceHexGrid::GetTileNeighbours(int X, int Y)
{
	TArray<ACastleforceHexTile*> neighbours = TArray<ACastleforceHexTile*>();
	neighbours.Add(GetTileAt(X, Y + 1)); //up right
	neighbours.Add(GetTileAt(X + 1, Y)); //right
	neighbours.Add(GetTileAt(X + 1, Y - 1)); //down right
	neighbours.Add(GetTileAt(X, Y - 1)); //down left
	neighbours.Add(GetTileAt(X - 1, Y)); //left
	neighbours.Add(GetTileAt(X - 1, Y + 1)); //up left
	return neighbours;
}

TArray<ACastleforceHexTile*> ACastleforceHexGrid::GetTileNeighbours(ACastleforceHexTile * tile) {
	int X = tile->X;
	int Y = tile->Y;
	TArray<ACastleforceHexTile*> neighbours = TArray<ACastleforceHexTile*>();
	neighbours.Add(GetTileAt(X, Y + 1)); //up right
	neighbours.Add(GetTileAt(X + 1, Y)); //right
	neighbours.Add(GetTileAt(X + 1, Y - 1)); //down right
	neighbours.Add(GetTileAt(X, Y - 1)); //down left
	neighbours.Add(GetTileAt(X - 1, Y)); //left
	neighbours.Add(GetTileAt(X - 1, Y + 1)); //up left
	return neighbours;
	return TArray<ACastleforceHexTile*>();
}

TArray<ACastleforceHexTile*> ACastleforceHexGrid::AStar(ACastleforceHexTile * start, ACastleforceHexTile * goal) {
	
	//the set of nodes already evaluated, initially empty
	TArray<ACastleforceHexTile*> closedSet;
	//the set of known nodes to be evaluated, itially only the start node
	TArray<ACastleforceHexTile*> openSet;
	openSet.Add(start);
	
	//the node from which each node can be most efficiently reached from
	TMap<ACastleforceHexTile*, ACastleforceHexTile*> cameFrom;

	//the cost of getting from the start to that node
	TMap<ACastleforceHexTile*, float> gScore;
	
	//score for getting from the start to the goal via this node
	TMap<ACastleforceHexTile*, float> fScore;
	for (int i = 0; i < tiles.Num(); i++) {
		if (tiles[i]) {
			gScore.Add(tiles[i], INFINITY);
			fScore.Add(tiles[i], INFINITY);
		}
	}
	
	//initialize
	gScore.Emplace(start, 0.f);
	fScore.Emplace(start, FVector::DistXY(start->GetActorLocation(), goal->GetActorLocation()));
	
	while (openSet.Num() > 0) {
		//look at the node in the open set with the lowest f score
		ACastleforceHexTile* current = openSet[0];
		for (int i = 0; i < openSet.Num(); i++) {
			if (fScore[openSet[i]] < fScore[current]) {
				current = openSet[i];
			}
		}
		
		//if it is our goal, return the path to get there
		if (current == goal) {
			return ReconstructPath(cameFrom, current);
		}
		
		openSet.Remove(current);
		closedSet.Add(current);
		
		TArray<ACastleforceHexTile*> neighbours = GetTileNeighbours(current);
		for (int i = 0; i < neighbours.Num(); i++) {
			//ignore if nullptr
			if (neighbours[i] == nullptr) {
				continue;
			}
			//ignore if already evaluated
			if (closedSet.Contains(neighbours[i])) {
				continue;
			}
			
			//ignore if unwalkable
			if (!neighbours[i]->walkable) {
				continue;
			}
			
			//distance to neighbour from start
			float tentativeGScore  = gScore[current] + neighbours[i]->walkTime;

			//discover a new node
			
			if (!openSet.Contains(neighbours[i])) {
				openSet.Add(neighbours[i]);
			} else if (tentativeGScore >= gScore[neighbours[i]]) { //ignore if there's a better path to neighbour
				continue;
			}
			
			//save this path if it is the best so far
			cameFrom.Add(neighbours[i], current);
			gScore.Emplace(neighbours[i], tentativeGScore);
			fScore.Emplace(neighbours[i], gScore[neighbours[i]] + FVector::Dist(neighbours[i]->GetActorLocation(), goal->GetActorLocation()));
			
		}
		
	}
	return TArray<ACastleforceHexTile*>();
}

TArray<ACastleforceHexTile*> ACastleforceHexGrid::GetTileSight(ACastleforceHexTile* tile, int range) {
	/*
	if (range > 0) {
		TArray<ACastleforceHexTile*> visibleTiles;
		TArray<ACastleforceHexTile*> neighbours;
		neighbours = GetTileNeighbours(tile);

		for (int i = 0; i < neighbours.Num(); i++) {
			if (neighbours[i]) {
				//if (neighbours[i]->walkable) {
					visibleTiles.Add(neighbours[i]);
				//}
			}
		}

		if (range > 1) {
			int currentLayer = 1;
			for (int r = 0; r < range - 1; r++) {
				for (int i = 0; i < visibleTiles.Num(); i++) {
					if (visibleTiles[i]->walkable) {
						TArray<ACastleforceHexTile*> newNeighbours = GetTileNeighbours(visibleTiles[i]);
						currentLayer++;
						for (int j = 0; j < newNeighbours.Num(); j++) {
							if (newNeighbours[j]) {
								if (!neighbours.Contains(newNeighbours[j])) {
									if (newNeighbours[j]->walkable) {
										visibleTiles.Add(newNeighbours[j]);
									}
								}
							}
						}
					}
				}
			}
		}
		return visibleTiles;
	} 
	*/
	//okay so
	//each layer of range
	//layer 0 = current tile
	//layer n = neighbours of layer n - 1
	//if(range > 0){
		TArray<ACastleforceHexTile*> visibleTiles;
		TArray<ACastleforceHexTile*> currentLayer;
		TArray<ACastleforceHexTile*> nextLayer;
		visibleTiles.Add(tile);
		currentLayer.Add(tile);
		for(int r = 0; r < range; r++){
		//go through each tile in the current layer (in visibleTiles)
			for (int i = 0; i < currentLayer.Num(); i++) {
				//put the tile's neighbours in an array
				TArray<ACastleforceHexTile*> tileNeighbours = GetTileNeighbours(currentLayer[i]);
				//for each neighbour
				for (int j = 0; j < tileNeighbours.Num(); j++) {
					if (tileNeighbours[j]) { //if it exists
						if (!visibleTiles.Contains(tileNeighbours[j])) { //if this new neighbour is not already considered visible
							if (tileNeighbours[j]->walkable) { //if this bad boy is not a mountain
								nextLayer.Add(tileNeighbours[j]); //add this bad boy to the next layer
								visibleTiles.Add(tileNeighbours[j]); //and also the visible tiles
							}
						}
					}
				}
				
			}
			//replace the current layer with the next layer
			currentLayer = nextLayer;
			nextLayer.Empty();
		}
		return visibleTiles;
	//}

	//return TArray<ACastleforceHexTile*>();
	
}

void ACastleforceHexGrid::UpdateVisibleTiles(TArray<ACastleforceHexTile*> visibleTiles) {
	for (int i = 0; i < tiles.Num(); i++) {
		if (visibleTiles.Contains(tiles[i])) {
			tiles[i]->MakeVisible(true);
		} else {
			tiles[i]->MakeVisible(false);
		}
	}
}

ACastleforceHexTile * ACastleforceHexGrid::SpawnRandom(int X, int Y)
{
	while (!GetTileAt(X, Y)->walkable) {
		Y++;
	}
	ACastleforceHexTile* spawnCentre = GetTileAt(X, Y);
	TArray<ACastleforceHexTile*> spawnCircle = GetTileSight(spawnCentre, 5);
	if (spawnCircle.Num() > 0) {
		ACastleforceHexTile* spawn = spawnCircle[FMath::RandRange(0, spawnCircle.Num())];
		return spawn;
	}
	return nullptr;
}
