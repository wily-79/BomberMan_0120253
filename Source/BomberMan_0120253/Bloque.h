// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque.generated.h"

class UStaticMeshComponent;

UCLASS()
class BOMBERMAN_0120253_API ABloque : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ABloque();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* MallaBloque;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FVector PosicionInicial;


	// Control de movimiento
	int TipoMovimiento;            // 0=X, 1=Y, 2=Z, -1=sin movimiento
	float FloatSpeed;              // Velocidad de movimiento
	bool bPuedeMoverse;            // ÀDebe moverse?

	// Direcciones para alternar cuando llegue a los extremos

	int DireccionMovimientoX;
	int DireccionMovimientoY;
	int DireccionMovimientoZ;
	float AlturaMaxima; // Altura máxima que alcanzarán los bloques (200 unidades)
	float PosicionInicialZ; // Posición Z inicial del bloque


};
