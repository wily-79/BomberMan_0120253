// Fill out your copyright notice in the Description page of Project Settings.


#include "LaberintoAleatorioBuilder.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"

// Sets default values
ALaberintoAleatorioBuilder::ALaberintoAleatorioBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

    ClaseBloqueAcero = ABloqueAcero::StaticClass();
    ClaseBloqueConcreto = ABloqueConcreto::StaticClass();
    ClaseBloqueLadrillo = ABloqueLadrillo::StaticClass();

    AnchoBloque = 100.f;
    LargoBloque = 100.f;
    XInicial = 500.f;
    YInicial = 500.f;
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



void ALaberintoAleatorioBuilder::CrearMapa()
{
    const int32 limiteX = 10;
    const int32 limiteY = 10;

    aMapaBloques.Empty();
    aMapaBloques.SetNum(limiteY);

    for (int32 fila = 0; fila < limiteY; ++fila)
    {
        aMapaBloques[fila].SetNum(limiteX);

        for (int32 columna = 0; columna < limiteX; ++columna)
        {
            if (fila == 0 || fila == limiteY - 1 || columna == 0 || columna == limiteX - 1)
            {
                aMapaBloques[fila][columna] = 1; // Borde (bloque de acero)
            }
            else
            {
                int32 valorAleatorio;
                do
                {
                    valorAleatorio = FMath::RandRange(0, 3);
                } while (valorAleatorio == 1);

                aMapaBloques[fila][columna] = valorAleatorio;
            }
        }
    }

    for (int32 fila = 0; fila < aMapaBloques.Num(); ++fila)
    {
        for (int32 columna = 0; columna < aMapaBloques[fila].Num(); ++columna)
        {
            int32 valor = aMapaBloques[fila][columna];

            FVector posicionBloque = FVector(
                XInicial + columna * AnchoBloque,
                YInicial + fila * LargoBloque,
                20.0f);

            SpawnBloque(posicionBloque, valor);
        }
    }
}

void ALaberintoAleatorioBuilder::SpawnBloque(const FVector& Posicion, int32 TipoBloque)
{
    UWorld* World = GetWorld();
    if (!World) return;

    switch (TipoBloque)
    {
    case 0:
    case 1:
        World->SpawnActor<AActor>(ClaseBloqueAcero, Posicion, FRotator::ZeroRotator);
        break;
    case 2:
        World->SpawnActor<AActor>(ClaseBloqueLadrillo, Posicion, FRotator::ZeroRotator);
        break;
    case 3:
        World->SpawnActor<AActor>(ClaseBloqueConcreto, Posicion, FRotator::ZeroRotator);
        break;
    default:
        break;
    }
}

TArray<FVector> ALaberintoAleatorioBuilder::ObtenerLaberinto() const
{
    return {};
}





