// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPPEnhancedInputGameMode.h"
#include "CPPEnhancedInputCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPPEnhancedInputGameMode::ACPPEnhancedInputGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
