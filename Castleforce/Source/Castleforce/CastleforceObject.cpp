// Copyright Rhun Jones 2019

#include "CastleforceObject.h"


// Sets default values
ACastleforceObject::ACastleforceObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ObjectMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Object Mesh"));

}

// Called when the game starts or when spawned
void ACastleforceObject::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACastleforceObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACastleforceObject::SetCastleforceOwner(int newOwner) {
	owner = newOwner;
}

int ACastleforceObject::GetCastleforceOwner() {
	return owner;
}

