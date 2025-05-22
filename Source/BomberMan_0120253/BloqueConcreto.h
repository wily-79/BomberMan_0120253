// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueConcreto.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_0120253_API ABloqueConcreto : public ABloque
{
	GENERATED_BODY()
	
public:
	ABloqueConcreto();

	//virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay() override;

};
