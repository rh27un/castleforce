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

	int32 NumCells = Size * Size;
	float InnerRadius = (Radius * 0.866025404);
	for (int i = 0; i < NumCells; i++) {
		int X = (i / Size);
		int Y = (i % Size);

		float XOffset = (X + Y * 0.5f - Y / 2)  * (InnerRadius * 2);
		float YOffset =  Y * (Radius * 1.5);

		const FVector* NewLocation = new FVector(YOffset, XOffset, 0.f);
		const FRotator* NewRotation = new FRotator(0.f, 90.f, 0.f);
		AActor* NewCell = GetWorld()->SpawnActor(CellClass, NewLocation, NewRotation);
	}
}

// Called every frame
void ACastleforceHexGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

