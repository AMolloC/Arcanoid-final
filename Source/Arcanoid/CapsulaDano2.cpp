// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaDano2.h"

void ACapsulaDano2::BeginPlay()
{
	Super::BeginPlay();

	Nombre = "Veneno";
	TipoCapsula = "Pocion";
	TipoEfecto = "Dano envenenamiento";
	TipoDuracion = "Temporal";
}

void ACapsulaDano2::desplegar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Generando la capsula dano2"));
}