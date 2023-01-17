// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaPoder2.h"

void ACapsulaPoder2::BeginPlay()
{
	Super::BeginPlay();

	Nombre = "Fuerza";
	TipoCapsula = "Consumible";
	TipoEfecto = "Rompe barreras";
	TipoDuracion = "Temporal";
}

void ACapsulaPoder2::desplegar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Generando la capsula poder2"));
}