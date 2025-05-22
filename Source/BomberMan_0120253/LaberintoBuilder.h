// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LaberintoBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class ULaberintoBuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN_0120253_API ILaberintoBuilder
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//virtual ~ILaberintoBuilder() = default;

	virtual void CrearMapa() = 0;
	virtual void ConstruirBordes() = 0;
	virtual void ConstruirBloquesFijos() = 0;
	virtual void ConstruirBloquesAleatorios() = 0;
	virtual void CrearEspaciosParaJugadores() = 0;

	virtual TArray<FVector> ObtenerLaberinto() const = 0;
};
