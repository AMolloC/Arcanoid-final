// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaArma.h"

void ACapsulaArma::BeginPlay()
{
	Super::BeginPlay();

	Nombre = "Capsula arma";
	TipoCapsula = "Caja";
	TipoEfecto = "Incrementa las ball";
	TipoDuracion = "Permanente";
}

void ACapsulaArma::desplegar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,TEXT("Generando obstaculo"));
}
