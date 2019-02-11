// Copyright Rhun Jones 2019

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "CastleforceObject.h"
#include "GameFramework/Actor.h"
#include "CastleForceHexTile.generated.h"

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
		UMaterialInterface* normalMat;
	UPROPERTY(Category = Hex, EditAnywhere, BlueprintReadWrite)
		UMaterialInterface* highlitMat;
	void CreateHexagon(TArray<FVector> vertices, TArray<int> triangles);
	void SetCoords(int x, int y);
	UPROPERTY(Category = Hex, VisibleAnywhere, BlueprintReadOnly)
	int X;
	UPROPERTY(Category = Hex, VisibleAnywhere, BlueprintReadOnly)
	int Y;
	int Z;

	ACastleforceObject* occupyingObject;

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Highlight(bool highlit);
	ACastleforceObject* GetOccupyingObject();

	void Occupy(ACastleforceObject* occupier);
};
