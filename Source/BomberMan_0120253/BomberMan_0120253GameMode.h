// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BomberMan_0120253GameMode.generated.h"

class ALaberintoAleatorioBuilder;
class ALaberintoDirector;

UCLASS(minimalapi)
class ABomberMan_0120253GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberMan_0120253GameMode();

protected:

	virtual void BeginPlay() override;

private:
	//UPROPERTY(EditAnywhere, Category = "Laberinto")
	TSubclassOf<ALaberintoAleatorioBuilder> BuilderClass;

	//UPROPERTY(EditAnywhere, Category = "Laberinto")
	TSubclassOf<ALaberintoDirector> DirectorClass;
};




