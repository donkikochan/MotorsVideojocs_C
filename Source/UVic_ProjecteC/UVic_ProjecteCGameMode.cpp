// Copyright Epic Games, Inc. All Rights Reserved.

#include "UVic_ProjecteCGameMode.h"
#include "UVic_ProjecteCCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUVic_ProjecteCGameMode::AUVic_ProjecteCGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
