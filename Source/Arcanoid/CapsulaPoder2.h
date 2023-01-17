// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "CapsulaPoder2.generated.h"

/**
 * 
 */
UCLASS()
class ARCANOID_API ACapsulaPoder2 : public ACapsula
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	//Brew the potion
	virtual void desplegar() override;
};
