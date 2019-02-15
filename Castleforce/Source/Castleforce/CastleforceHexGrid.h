// Copyright Rhun Jones 2019

#pragma once

#include "CoreMinimal.h"
#include "CastleforceHexTile.h"
#include "GameFramework/Actor.h"

#include "CastleforceHexGrid.generated.h"

UCLASS()
class CASTLEFORCE_API ACastleforceHexGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACastleforceHexGrid();
	UPROPERTY(Category = HexGrid, EditAnywhere, BlueprintReadOnly)
		TSubclassOf<AActor> CellClass;
	UPROPERTY(Category = HexGrid, EditAnywhere, BlueprintReadOnly)
		float Radius = 100.f;
	UPROPERTY(Category = HexGrid, EditAnywhere, BlueprintReadOnly)
		int32 Size;
	UPROPERTY(Category = HexGrid, EditAnywhere, BlueprintReadOnly)
		int32 HeightMultiplier;
	UPROPERTY(Category = HexGrid, EditAnywhere, BlueprintReadOnly)
		TMap<TEnumAsByte<TileHeight>, float> HeightTypes;
	UPROPERTY(Category = HexGrid, EditAnywhere, BlueprintReadOnly)
		float Scale;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	TArray<ACastleforceHexTile*> tiles;
	float innerRadius = Radius * 0.866025404f;
	TArray<FVector> corners;
	TArray<int> triangles = {
		0, 1, 2,
		0, 2, 3,
		0, 3, 4,
		0, 4, 5,
		0, 5, 6,
		0, 6, 1
	};
	TArray<ACastleforceHexTile*> ReconstructPath(TMap<ACastleforceHexTile*, ACastleforceHexTile*> cameFrom, ACastleforceHexTile* end);

	TEnumAsByte<TileHeight> GetHeightType(float height);
public:	
	ACastleforceHexTile* GetTileAt(int X, int Y);
	TArray<ACastleforceHexTile*> GetTileNeighbours(int X, int Y);
	TArray<ACastleforceHexTile*> GetTileNeighbours(ACastleforceHexTile* tile);
	TArray<ACastleforceHexTile*> AStar(ACastleforceHexTile* start, ACastleforceHexTile* goal);
	
};
