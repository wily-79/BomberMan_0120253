// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABloque::ABloque()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    MallaBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
    //RootComponent = MeshComp;
    MallaBloque->SetupAttachment(RootComponent);
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloque(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (ObjetoMallaBloque.Succeeded())
    {
        MallaBloque->SetStaticMesh(ObjetoMallaBloque.Object);
        MallaBloque->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
    }
    /* if (ObjetoMallaBloque.Succeeded())
     {
         MallaBloque->SetStaticMesh(ObjetoMallaBloque.Object);
         MallaBloque->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
     }
     TipoMovimiento = -1;
     FloatSpeed = 100.0f;
     bPuedeMoverse = false;
     DireccionMovimientoX = 1;
     DireccionMovimientoY = 1;
     DireccionMovimientoZ = 1;
     AlturaMaxima = 200.0f;*/

}

// Called when the game starts or when spawned
void ABloque::BeginPlay()
{
	Super::BeginPlay();

    PosicionInicial = GetActorLocation();
    // Guardar específicamente la posición Z inicial
    PosicionInicialZ = PosicionInicial.Z;
}

// Called every frame
void ABloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

