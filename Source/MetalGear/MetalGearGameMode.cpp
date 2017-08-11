// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MetalGear.h"
#include "MetalGearGameMode.h"
#include "MetalGearHUD.h"
#include "MetalGearCharacter.h"

AMetalGearGameMode::AMetalGearGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMetalGearHUD::StaticClass();
}
