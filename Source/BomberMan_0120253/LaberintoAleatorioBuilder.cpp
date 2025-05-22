// Fill out your copyright notice in the Description page of Project Settings.


#include "LaberintoAleatorioBuilder.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"

// Sets default values
ALaberintoAleatorioBuilder::ALaberintoAleatorioBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    Ancho = 15;
    Alto = 13;
    TamanoBloque = 100.f;

    ClaseBloqueAcero = ABloqueAcero::StaticClass();
    ClaseBloqueConcreto = ABloqueConcreto::StaticClass();
    ClaseBloqueLadrillo = ABloqueLadrillo::StaticClass();
}

void ALaberintoAleatorioBuilder::CrearMapa()
{
	Laberinto.Empty();
}

void ALaberintoAleatorioBuilder::ConstruirBordes()
{
    for (int x = 0; x < Ancho; ++x)
    {
        for (int y = 0; y < Alto; ++y)
        {
            if (x == 0 || y == 0 || x == Ancho - 1 || y == Alto - 1)
            {
                FVector Posicion = FVector(x * TamanoBloque, y * TamanoBloque, 0.f);
                InstanciarBloque(ClaseBloqueAcero, Posicion);
                Laberinto.Add(Posicion);
            }
        }
    }
}

void ALaberintoAleatorioBuilder::ConstruirBloquesFijos()
{
    for (int x = 2; x < Ancho - 2; x += 2)
    {
        for (int y = 2; y < Alto - 2; y += 2)
        {
            FVector Posicion = FVector(x * TamanoBloque, y * TamanoBloque, 0.f);
            InstanciarBloque(ClaseBloqueConcreto, Posicion);
            Laberinto.Add(Posicion);
        }
    }
}

void ALaberintoAleatorioBuilder::ConstruirBloquesAleatorios()
{
    for (int x = 1; x < Ancho - 1; ++x)
    {
        for (int y = 1; y < Alto - 1; ++y)
        {
            FVector Posicion = FVector(x * TamanoBloque, y * TamanoBloque, 0.f);
            if (!Laberinto.Contains(Posicion) && FMath::FRand() < 0.5f)
            {
                InstanciarBloque(ClaseBloqueLadrillo, Posicion);
                Laberinto.Add(Posicion);
            }
        }
    }
}

void ALaberintoAleatorioBuilder::CrearEspaciosParaJugadores()
{
    TArray<FVector> Posiciones = {
        FVector(1 * TamanoBloque, 1 * TamanoBloque, 0.f),
        FVector(1 * TamanoBloque, 2 * TamanoBloque, 0.f),
        FVector(2 * TamanoBloque, 1 * TamanoBloque, 0.f)
    };

    for (const FVector& Pos : Posiciones)
    {
        Laberinto.Remove(Pos);
    }
}

TArray<FVector> ALaberintoAleatorioBuilder::ObtenerLaberinto() const
{
	return TArray<FVector>();
}

// Called when the game starts or when spawned
void ALaberintoAleatorioBuilder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALaberintoAleatorioBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALaberintoAleatorioBuilder::InstanciarBloque(UClass* ClaseBloque, const FVector& Posicion)
{
    if (!ClaseBloque) return;

    GetWorld()->SpawnActor<AActor>(ClaseBloque, Posicion, FRotator::ZeroRotator);

}


