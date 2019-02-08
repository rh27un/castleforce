// Copyright Rhun Jones 2019

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "CastleforceUnit.h"
#include "GameFramework/Actor.h"
#include "CastleForceHexTile.generated.h"

UCLASS()
class CASTLEFORCE_API ACastleForceHexTile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACastleForceHexTile();
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
	
	int X;
	int Y;
	int Z;

	ACastleforceUnit* occupyingUnit;

	void HandleClicked();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Highlight(bool highlit);
};
