// Copyright Rhun Jones 2019

#pragma once

#include "CoreMinimal.h"
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
		AActor* HexMetrics;
	UPROPERTY(Category = HexGrid, EditAnywhere, BlueprintReadOnly)
		int Radius;
	UPROPERTY(Category = HexGrid, EditAnywhere, BlueprintReadOnly)
		int32 Size;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
