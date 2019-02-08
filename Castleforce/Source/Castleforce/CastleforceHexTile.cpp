// Copyright Rhun Jones 2019

#include "CastleForceHexTile.h"


// Sets default values
ACastleForceHexTile::ACastleForceHexTile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	hexMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Hex Mesh"));
	RootComponent = hexMesh;

	text = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));
	text->SetupAttachment(hexMesh);
}

void ACastleForceHexTile::HandleClicked()
{
}

// Called when the game starts or when spawned
void ACastleForceHexTile::BeginPlay()
{
	Super::BeginPlay();
	hexMesh->SetMaterial(0, normalMat);
}

void ACastleForceHexTile::CreateHexagon(TArray<FVector> vertices, TArray<int> triangles){
	TArray<FVector> normals;
	TArray<FVector2D> UV0;
	TArray<FLinearColor> vertexColors;
	TArray<FProcMeshTangent> tangents;

	normals.Init(FVector(0.0f, 0.0f, 1.0f), vertices.Num());
	UV0.Init(FVector2D(0.0f, 0.0f), vertices.Num());
	vertexColors.Init(FLinearColor(0.0f, 0.0f, 0.0f, 1.0f), vertices.Num());
	tangents.Init(FProcMeshTangent(1.0f, 0.0f, 0.0f), vertices.Num());

	hexMesh->CreateMeshSection_LinearColor(0, vertices, triangles, normals, UV0,  vertexColors, tangents, true);
}

void ACastleForceHexTile::SetCoords(int x, int y){
	X = x;
	Y = y;
	Z = -x - y;
	FString coordString = FString::FromInt(X) + ", " + FString::FromInt(Y) + ", " + FString::FromInt(Z);
	text->SetText(coordString);
}


// Called every frame
void ACastleForceHexTile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACastleForceHexTile::Highlight(bool highlit)
{
	if (highlit) {
		hexMesh->SetMaterial(0, highlitMat);
	}
	else {
		hexMesh->SetMaterial(0, normalMat);
	}
}

