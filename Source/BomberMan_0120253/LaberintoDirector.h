// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LaberintoBuilder.h"
#include "LaberintoDirector.generated.h"

UCLASS()
class BOMBERMAN_0120253_API ALaberintoDirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaberintoDirector();

	void SetBuilder(ILaberintoBuilder* NuevoBuilder);
	void ConstruirLaberinto();

protected:
	// Called when the game starts or when spawned

public:	
	// Called every frame
	ILaberintoBuilder* Builder;

};
