// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "CastleforcePlayerController.h"

ACastleforcePlayerController::ACastleforcePlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
