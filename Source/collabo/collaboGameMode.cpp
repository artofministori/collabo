// Copyright Epic Games, Inc. All Rights Reserved.

#include "collaboGameMode.h"
#include "collaboCharacter.h"
#include "UObject/ConstructorHelpers.h"

AcollaboGameMode::AcollaboGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
