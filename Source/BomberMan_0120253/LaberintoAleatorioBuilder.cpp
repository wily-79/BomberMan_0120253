// Fill out your copyright notice in the Description page of Project Settings.


#include "LaberintoAleatorioBuilder.h"

// Sets default values
ALaberintoAleatorioBuilder::ALaberintoAleatorioBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ALaberintoAleatorioBuilder::CrearMapa(int32 Ancho, int32 Alto)
{
	MapaAlto = Alto;
	MapaAncho = Ancho;
	Laberinto.Empty();
	PosicionesOcupadas.Empty();
}

void ALaberintoAleatorioBuilder::ConstruirBordes()
{
    for (int32 x = 0; x < MapaAncho; ++x)
    {
        for (int32 y = 0; y < MapaAlto; ++y)
        {
            if (x == 0 || y == 0 || x == MapaAncho - 1 || y == MapaAlto - 1)
            {
                FVector Pos = FVector(x * TamanoBloque, y * TamanoBloque, 0);
                InstanciarBloque(BloqueAcero, Pos);
                Laberinto.Add(Pos);
                PosicionesOcupadas.Add(Pos);
            }
        }
    }
}

void ALaberintoAleatorioBuilder::ConstruirBloquesFijos()
{
    for (int32 x = 2; x < MapaAncho - 2; x += 2)
    {
        for (int32 y = 2; y < MapaAlto - 2; y += 2)
        {
            FVector Pos = FVector(x * TamanoBloque, y * TamanoBloque, 0);
            InstanciarBloque(BloqueConcreto, Pos);
            Laberinto.Add(Pos);
            PosicionesOcupadas.Add(Pos);
        }
    }
}

void ALaberintoAleatorioBuilder::ConstruirBloquesAleatorios()
{
    for (int32 x = 1; x < MapaAncho - 1; ++x)
    {
        for (int32 y = 1; y < MapaAlto - 1; ++y)
        {
            FVector Pos = FVector(x * TamanoBloque, y * TamanoBloque, 0);
            if (!PosicionesOcupadas.Contains(Pos) && FMath::RandRange(0, 100) < 50)
            {
                InstanciarBloque(BloqueLadrillo, Pos);
                Laberinto.Add(Pos);
                PosicionesOcupadas.Add(Pos);
            }
        }
    }
}

void ALaberintoAleatorioBuilder::CrearEspaciosParaJugadores()
{
    TArray<FVector> PosicionesIniciales = {
    FVector(1 * TamanoBloque, 1 * TamanoBloque, 0),
    FVector(1 * TamanoBloque, 2 * TamanoBloque, 0),
    FVector(2 * TamanoBloque, 1 * TamanoBloque, 0)
    };

    for (const FVector& Pos : PosicionesIniciales)
    {
        PosicionesOcupadas.Remove(Pos);
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
    GetWorld()->SpawnActor<AActor>(ClaseBloque, Posicion, FRotator::ZeroRotator);

}

bool ALaberintoAleatorioBuilder::EsCeldaLibre(const FVector& Posicion) const
{
	return false;
}

