// Copyright Rhun Jones 2019

#include "CastleforceHexTile.h"

// Sets default values
ACastleforceHexTile::ACastleforceHexTile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	hexMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Hex Mesh"));
	fogMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Fog Mesh"));
	resMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Resource Mesh"));

	resMesh->SetVisibility(false);
	RootComponent = hexMesh;
	fogMesh->SetupAttachment(RootComponent);
	resMesh->SetupAttachment(RootComponent);
	//fogMesh->SetRelativeLocation(FVector(0.f, 0.f, 0.1f));
}

ACastleforceObject* ACastleforceHexTile::GetOccupyingObject()
{
	if (occupyingObject) {
		return occupyingObject;
	} else {
		return nullptr;
	}
}

void ACastleforceHexTile::SetHeightType(TEnumAsByte<TileHeight> type) {
	normalMat = materials[type];
	hexMesh->SetMaterial(0, normalMat);
	if (type == Mountain) {
		walkable = false;
	}
	if (type == Hill) {
		walkTime = 1.f;
	}
}

void ACastleforceHexTile::Occupy(ACastleforceObject * occupier) {
	if (occupier) {
		occupier->SetActorLocation(GetActorLocation());
		occupyingObject = occupier;
	}
}

bool ACastleforceHexTile::IsTileHidden() {
	return fogMesh->IsVisible();
}

FString ACastleforceHexTile::PrintCoords()
{
	FString coordString = FString::FromInt(X) + ", " + FString::FromInt(Y) + ", " + FString::FromInt(Z);
	return coordString;
}

// Called when the game starts or when spawned
void ACastleforceHexTile::BeginPlay()
{
	Super::BeginPlay();
	fogMesh->SetMaterial(0, invisibleMat);
	hexMesh->SetMaterial(0, normalMat);
	
	hexMesh->SetCastShadow(false);
	fogMesh->SetCastShadow(false);
	resMesh->SetCastShadow(false);

	fogMesh->SetRelativeLocation(FVector(0.f, 0.f, 0.1f));
	resMesh->SetRelativeLocation(FVector(0.f, 0.f, 0.05f));//(RootComponent->GetComponentLocation() + FVector(0.f, 0.f, 0.05f)); //because apparently that's how relative locations work now
	//i know something is broken but it's 1 am and i want to go to bed
	//like what could even be going wrong here
	//i'm setting the component's parent
	//setrelativelocation sets the location relative to its parent
	//so either i'm not using setupattachment correctly (difficult for even me to do)
	//the parent component is at 0,0,0 (which unless my eyes are broken, it isn't)
	//or apparently relativity is a fucking myth
	//because how
	//the
	//fuck
	//does
	//this
	//work
}

void ACastleforceHexTile::CreateHexagon(TArray<FVector> vertices, TArray<int> triangles){
	TArray<FVector> normals;
	TArray<FVector2D> UV0;
	TArray<FLinearColor> vertexColors;
	TArray<FProcMeshTangent> tangents;

	normals.Init(FVector(0.0f, 0.0f, 1.0f), vertices.Num());
	UV0.Init(FVector2D(0.0f, 0.0f), vertices.Num());
	vertexColors.Init(FLinearColor(0.0f, 0.0f, 0.0f, 1.0f), vertices.Num());
	tangents.Init(FProcMeshTangent(1.0f, 0.0f, 0.0f), vertices.Num());

	hexMesh->CreateMeshSection_LinearColor(0, vertices, triangles, normals, UV0,  vertexColors, tangents, true);
	fogMesh->CreateMeshSection_LinearColor(0, vertices, triangles, normals, UV0, vertexColors, tangents, true);
	//
}

void ACastleforceHexTile::SetCoords(int x, int y){
	X = x;
	Y = y;
	Z = -x - y;
	
}


void ACastleforceHexTile::SetResource(TEnumAsByte<TileResource> resource) {
	resMesh->SetVisibility(true);
	tileRes = resource;
	resMesh->SetMaterial(0, resourceMaterials[resource]);
}

void ACastleforceHexTile::Highlight(bool highlit)
{
	if (highlit) {
		hexMesh->SetMaterial(0, highlitMat);
	}
	else {
		hexMesh->SetMaterial(0, normalMat);
	}
}

void ACastleforceHexTile::MakeVisible(bool visible) {
	fogMesh->SetVisibility(!visible);
	/*
	if (visible) {
		hexMesh->SetMaterial(0, normalMat);
	} else {
		hexMesh->SetMaterial(0, invisibleMat);
	}
	*/
}

