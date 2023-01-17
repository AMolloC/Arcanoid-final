// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaDano1.h"

void ACapsulaDano1::BeginPlay()
{
	Super::BeginPlay();

	Nombre = "Rayo";
	TipoCapsula = "Elemento";
	TipoEfecto = "Dano electrico";
	TipoDuracion = "Instantaneo";
}

void ACapsulaDano1::desplegar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Generando la capsula dano1"));
}