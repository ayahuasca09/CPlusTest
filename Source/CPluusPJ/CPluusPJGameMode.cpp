// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPluusPJGameMode.h"
#include "CPluusPJHUD.h"
#include "CPluusPJCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPluusPJGameMode::ACPluusPJGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACPluusPJHUD::StaticClass();
}
