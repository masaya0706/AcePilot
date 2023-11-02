// Copyright Epic Games, Inc. All Rights Reserved.

#include "AcePilotGameMode.h"
#include "AcePilotPawn.h"

AAcePilotGameMode::AAcePilotGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AAcePilotPawn::StaticClass();
}
