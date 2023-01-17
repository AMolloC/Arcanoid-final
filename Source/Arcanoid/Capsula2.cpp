// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsula2.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Materials/MaterialInstance.h"

ACapsula2::ACapsula2()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapMesh(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	// Create the mesh component
	CapsulaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CapMesh"));
	RootComponent = CapsulaMesh;
	CapsulaMesh->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	CapsulaMesh->SetStaticMesh(CapMesh.Object);
	CapsulaMesh->SetRelativeScale3D(FVector(0.4f, 0.4f, 0.4f));
	//static ConstructorHelpers::FObjectFinder<UMaterial>CapBaseMaterial(TEXT("Material'/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstance>CapBlueMaterial(TEXT("MaterialInstanceConstant'/Game/Materials/M_BrickBlue.M_BrickBlue'"));
	CapsulaMesh->SetMaterial(0,CapBlueMaterial.Object);
}

void ACapsula2::BeginPlay()
{
	Super::BeginPlay();

	Nombre = "Velocidad";
	TipoCapsula = "Consumible";
	TipoEfecto = "Mejora";
	TipoDuracion = "Temporar";
}

void ACapsula2::desplegar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Generando obstaculo 2"));
}
	/*struct FConstructorStatics {
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> CapMesh;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> BaseMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterialInstance> BlueMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterialInstance> OrangeMaterial;
		FConstructorStatics()
			: CapMesh(TEXT("/Game/Puzzle/Meshes/PuzzleCube.PuzzleCube"))
			, BaseMaterial(TEXT("/Game/Puzzle/Meshes/BaseMaterial.BaseMaterial"))
			, BlueMaterial(TEXT("/Game/Puzzle/Meshes/BlueMaterial.BlueMaterial"))
			, OrangeMaterial(TEXT("/Game/Puzzle/Meshes/OrangeMaterial.OrangeMaterial"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;
	CapsulaMesh=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh0"));*/

