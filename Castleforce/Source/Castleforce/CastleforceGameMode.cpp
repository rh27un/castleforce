// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "CastleforceGameMode.h"
#include "CastleforcePlayerController.h"
#include "CastleforcePawn.h"

ACastleforceGameMode::ACastleforceGameMode()
{
	// no pawn by default
	DefaultPawnClass = ACastleforcePawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = ACastleforcePlayerController::StaticClass();
}
