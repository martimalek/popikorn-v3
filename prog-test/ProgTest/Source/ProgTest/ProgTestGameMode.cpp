// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProgTestGameMode.h"
#include "ProgTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProgTestGameMode::AProgTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
