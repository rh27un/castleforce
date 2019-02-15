// Copyright Rhun Jones 2019

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "CastleforceObject.h"
#include "GameFramework/Actor.h"
#include "CastleForceHexTile.generated.h"

UENUM() enum TileHeight {NoneHeight UMETA(DisplayName = "None"), Flat UMETA(DisplayName = "Flat"), Hill UMETA(DisplayName = "Hill"), Mountain UMETA(DisplayName = "Mountain")};
UCLASS()
class CASTLEFORCE_API ACastleforceHexTile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACastleforceHexTile();

	UPROPERTY(Category = Hex, VisibleAnywhere, BlueprintReadOnly)
		UProceduralMeshComponent* hexMesh;

	UPROPERTY(Category = Hex, VisibleAnywhere, BlueprintReadOnly)
		UTextRenderComponent* text;
		
	UPROPERTY(Category = Hex, EditAnywhere, BlueprintReadWrite)
		UMaterialInterface* highlitMat;
	void CreateHexagon(TArray<FVector> vertices, TArray<int> triangles);
	void SetCoords(int x, int y);
	UPROPERTY(Category = Hex, VisibleAnywhere, BlueprintReadOnly)
	int X;
	UPROPERTY(Category = Hex, VisibleAnywhere, BlueprintReadOnly)
	int Y;
	int Z;
	int I;


	TEnumAsByte<TileHeight> tileHeight = NoneHeight;
	UPROPERTY(Category = Hex, EditAnywhere, BlueprintReadWrite)
		TMap<TEnumAsByte<TileHeight>, UMaterialInterface*> materials;
	UPROPERTY(Category = Hex, EditAnywhere, BlueprintReadWrite)
		bool walkable = true;
	UPROPERTY(Category = Hex, VisibleAnywhere, BlueprintReadOnly)
		float walkTime = 0.5f;
	ACastleforceObject* occupyingObject;

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UMaterialInterface* normalMat;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Highlight(bool highlit);
	ACastleforceObject* GetOccupyingObject();
	void SetHeightType(TEnumAsByte<TileHeight> type);
	void Occupy(ACastleforceObject* occupier);
};
