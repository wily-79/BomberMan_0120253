// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_0120253GameMode.h"
#include "BomberMan_0120253Character.h"
#include "UObject/ConstructorHelpers.h"
#include "LaberintoAleatorioBuilder.h"
#include "LaberintoDirector.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"


ABomberMan_0120253GameMode::ABomberMan_0120253GameMode()
{
	// set default pawn class to our Blueprinted character
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
    if (PlayerPawnBPClass.Class != NULL)
    {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }

    static ConstructorHelpers::FClassFinder<ALaberintoAleatorioBuilder> BuilderBPClass(TEXT("/Game/Blueprints/BP_LaberintoAleatorioBuilder"));
    if (BuilderBPClass.Class)
    {
        BuilderClass = BuilderBPClass.Class;
    }

    static ConstructorHelpers::FClassFinder<ALaberintoDirector> DirectorBPClass(TEXT("/Game/Blueprints/BP_LaberintoDirector"));
    if (DirectorBPClass.Class)
    {
        DirectorClass = DirectorBPClass.Class;
    }
}

void ABomberMan_0120253GameMode::BeginPlay()
{
    Super::BeginPlay();

    if (!BuilderClass || !DirectorClass) return;

    UWorld* World = GetWorld();
    if (!World) return;

    ALaberintoAleatorioBuilder* Builder = World->SpawnActor<ALaberintoAleatorioBuilder>(BuilderClass, FVector::ZeroVector, FRotator::ZeroRotator);
    ALaberintoDirector* Director = World->SpawnActor<ALaberintoDirector>(DirectorClass, FVector(0, 0, 100), FRotator::ZeroRotator);

    if (Builder && Director)
    {
        Director->SetBuilder(Builder);
        Director->ConstruirLaberinto();
    }
}
