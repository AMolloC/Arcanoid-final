// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsula1.h"

ACapsula1::ACapsula1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapMesh(TEXT("StaticMesh'/Engine/BasicShapes/Cone.Cone'"));
	// Create the mesh component
	CapsulaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CapMesh"));
	RootComponent = CapsulaMesh;
	CapsulaMesh->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	CapsulaMesh->SetStaticMesh(CapMesh.Object);
	CapsulaMesh->SetRelativeScale3D(FVector(0.4f, 0.4f, 0.4f));
	//static ConstructorHelpers::FObjectFinder<UMaterial>CapBaseMaterial(TEXT("Material'/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstance>CapBlueMaterial(TEXT("MaterialInstanceConstant'/Game/Materials/M_Powerup.M_Powerup'"));
	CapsulaMesh->SetMaterial(0, CapBlueMaterial.Object);
}

void ACapsula1::BeginPlay()
{
	Super::BeginPlay();


}

void ACapsula1::desplegar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Generando la capsula obstaculo"));
}