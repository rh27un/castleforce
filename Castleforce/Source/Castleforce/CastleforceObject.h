 // Copyright Rhun Jones 2019

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "CastleforceObject.generated.h"

UCLASS()
class CASTLEFORCE_API ACastleforceObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACastleforceObject();
	UPROPERTY(Category = Object, EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* ObjectMesh;
	UPROPERTY(Category = Object, EditAnywhere, BlueprintReadWrite)
		int sightRange;
	int owner;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void SetCastleforceOwner(int newOwner);
	int GetCastleforceOwner();
	
	
};
