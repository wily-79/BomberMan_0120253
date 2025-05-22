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

	virtual void CrearMapa(int32 Ancho, int32 Alto) override;
	virtual void ConstruirBordes() override;
	virtual void ConstruirBloquesFijos() override;
	virtual void ConstruirBloquesAleatorios() override;
	virtual void CrearEspaciosParaJugadores() override;
	virtual TArray<FVector> ObtenerLaberinto() const override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Configuración de Bloques")
	TSubclassOf<AActor> BloqueAcero;

	UPROPERTY(EditAnywhere, Category = "Configuración de Bloques")
	TSubclassOf<AActor> BloqueConcreto;

	UPROPERTY(EditAnywhere, Category = "Configuración de Bloques")
	TSubclassOf<AActor> BloqueLadrillo;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	int32 MapaAncho;
	int32 MapaAlto;
	float TamanoBloque = 100.0f;

	TArray<FVector> Laberinto;
	TArray<FVector> PosicionesOcupadas;

	void InstanciarBloque(UClass* ClaseBloque, const FVector& Posicion);
	bool EsCeldaLibre(const FVector& Posicion) const;
};
