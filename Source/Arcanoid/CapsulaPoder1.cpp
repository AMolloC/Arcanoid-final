// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaPoder1.h"

void ACapsulaPoder1::BeginPlay()
{
	Super::BeginPlay();

	Nombre = "Crecimiento";
	TipoCapsula = "Consumible";
	TipoEfecto = "Incrementa el tamaño horizontal";
	TipoDuracion = "Permanente";
}

void ACapsulaPoder1::desplegar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Generando la capsula poder1"));
}