// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_7_SinsGameMode.h"
#include "Project_7_SinsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_7_SinsGameMode::AProject_7_SinsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
