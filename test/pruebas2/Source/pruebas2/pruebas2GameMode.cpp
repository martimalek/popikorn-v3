// Copyright Epic Games, Inc. All Rights Reserved.

#include "pruebas2GameMode.h"
#include "pruebas2Character.h"
#include "UObject/ConstructorHelpers.h"

Apruebas2GameMode::Apruebas2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
