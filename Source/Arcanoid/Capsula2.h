// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "Capsula2.generated.h"

/**
 * 
 */
UCLASS()
class ARCANOID_API ACapsula2 : public ACapsula
{
	GENERATED_BODY()

public:
		ACapsula2();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	//Brew the potion
	virtual void desplegar() override;
};
