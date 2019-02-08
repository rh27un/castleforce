// Copyright Rhun Jones 2019

#pragma once

#include "CoreMinimal.h"
#include "CastleforcePawn.h"
#include "CastleforceHexPawn.generated.h"

/**
 * 
 */
UCLASS()
class CASTLEFORCE_API ACastleforceHexPawn : public APawn
{
	GENERATED_BODY()
public:

	virtual void Tick(float DeltaSeconds) override;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	virtual void CalcCamera(float DeltaTime, struct FMinimalViewInfo& OutResult) override;

protected:
	void OnResetVR();
	void TriggerClick();
	void TraceForBlock(const FVector& Start, const FVector& End, bool bDrawDebugHelpers);
};
