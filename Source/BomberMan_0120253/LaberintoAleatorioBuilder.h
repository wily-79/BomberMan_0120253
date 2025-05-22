// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LaberintoBuilder.h"
#include "Bloque.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"
#include "LaberintoAleatorioBuilder.generated.h"

UCLASS()
class BOMBERMAN_0120253_API ALaberintoAleatorioBuilder : public AActor, public ILaberintoBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaberintoAleatorioBuilder();

	virtual void CrearMapa() override;
	virtual void ConstruirBordes() override;
	virtual void ConstruirBloquesFijos() override;
	virtual void ConstruirBloquesAleatorios() override;
	virtual void CrearEspaciosParaJugadores() override;
	virtual TArray<FVector> ObtenerLaberinto() const override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ClaseBloqueAcero;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ClaseBloqueConcreto;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ClaseBloqueLadrillo;

	int32 Ancho;
	int32 Alto;
	float TamanoBloque;
	TArray<FVector> Laberinto;

	void InstanciarBloque(UClass* ClaseBloque, const FVector& Posicion);
};
