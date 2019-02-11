// Copyright Rhun Jones 2019

#include "CastleforceHexGrid.h"

// Sets default values
ACastleforceHexGrid::ACastleforceHexGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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
	float InnerRadius = (Radius * 0.866025404);
	for (int i = 0; i < NumCells; i++) {
		int X = (i % Size);
		int Y = (i / Size);

		float YOffset = (Y + X * 0.5f - X / 2)  * (InnerRadius * 2);
		float XOffset =  X * (Radius * 1.5);

		const FVector* NewLocation = new FVector(XOffset, YOffset, 0.f);
		const FRotator* NewRotation = new FRotator(0.f, 90.f, 0.f);
		AActor* NewCell = GetWorld()->SpawnActor(CellClass, NewLocation, NewRotation);
		if (Cast<ACastleforceHexTile>(NewCell)) {
			tiles.Add(Cast<ACastleforceHexTile>(NewCell));
			Cast<ACastleforceHexTile>(NewCell)->CreateHexagon(corners, triangles);
			Cast<ACastleforceHexTile>(NewCell)->SetCoords(Y - X / 2, X);
		}
	}
}

// Called every frame
void ACastleforceHexGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ACastleforceHexTile * ACastleforceHexGrid::GetTileAt(int X, int Y)
{
	return tiles[(Y - X / 2) * Size + X];
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

/*
up right = x, y + 1
right = x + 1, y
down right = x + 1, y - 1
down left = x, y - 1
left = x - 1, y
up left = x - 1, y + 1
*/