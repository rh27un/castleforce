// Copyright Rhun Jones 2019

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CastleForceHexTile.generated.h"

UCLASS()
class CASTLEFORCE_API ACastleForceHexTile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACastleForceHexTile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
