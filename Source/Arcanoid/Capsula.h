// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsula.generated.h"

UCLASS()
class ARCANOID_API ACapsula : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapsula();

protected:
	UPROPERTY()
		class UStaticMeshComponent* CapsulaMesh;
	/** Pointer to white material used on the focused block */
	UPROPERTY()
		class UMaterial* BaseMaterial;

	/** Pointer to blue material used on inactive blocks */
	UPROPERTY()
		class UMaterialInstance* BlueMaterial;

	/** Pointer to orange material used on active blocks */
	UPROPERTY()
		class UMaterialInstance* OrangeMaterial;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FString Nombre;
	FString TipoCapsula;
	FString TipoEfecto;
	FString TipoDuracion;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void generar();
	void cargar();
	virtual void desplegar();
	void destruir();

	FString GetNombre() { return Nombre; }
};
