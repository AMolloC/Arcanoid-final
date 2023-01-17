// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaArma1.h"

void ACapsulaArma1::BeginPlay()
{
	Super::BeginPlay();
	Nombre = "Capsula arma";
	TipoCapsula = "caja municion";
	TipoEfecto = "Incrementacion";
	TipoDuracion = "Ponga mensaje aqui";
}

void ACapsulaArma1::desplegar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Generando la capsula arma1 mamaGUEVO"));
}
