// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueAcero.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_0120253_API ABloqueAcero : public ABloque
{
	GENERATED_BODY()
	
public:
	ABloqueAcero();

	//virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay() override;


};
