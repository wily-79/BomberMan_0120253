// Fill out your copyright notice in the Description page of Project Settings.


#include "LaberintoDirector.h"

// Sets default values
ALaberintoDirector::ALaberintoDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALaberintoDirector::BeginPlay()
{
	Super::BeginPlay();
	
	if (Builder)
	{
		ConstruirLaberinto();
	}
}

// Called every frame
void ALaberintoDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALaberintoDirector::SetBuilder(ILaberintoBuilder* NuevoBuilder)
{
	Builder = NuevoBuilder;
}


void ALaberintoDirector::ConstruirLaberinto()
{
	if (!Builder) return;

		Builder->CrearMapa(AnchoMapa, AltoMapa);
		Builder->ConstruirBordes();
		Builder->ConstruirBloquesFijos();
		Builder->ConstruirBloquesAleatorios();
		Builder->CrearEspaciosParaJugadores();

}
