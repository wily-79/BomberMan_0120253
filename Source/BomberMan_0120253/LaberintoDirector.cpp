// Fill out your copyright notice in the Description page of Project Settings.


#include "LaberintoDirector.h"

// Sets default values
ALaberintoDirector::ALaberintoDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Builder = nullptr;
}

void ALaberintoDirector::SetBuilder(ILaberintoBuilder* NuevoBuilder)
{
	Builder = NuevoBuilder;
}


void ALaberintoDirector::ConstruirLaberinto()
{
	if (Builder) 
	{
		Builder->CrearMapa();
	}
}
