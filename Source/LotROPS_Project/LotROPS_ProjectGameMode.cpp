// Copyright Epic Games, Inc. All Rights Reserved.

#include "LotROPS_ProjectGameMode.h"
#include "LotROPS_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALotROPS_ProjectGameMode::ALotROPS_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
