// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Singleton_Main.generated.h"

UCLASS()
class ARCANOID_API ASingleton_Main : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASingleton_Main();
private:
	//The Inventory of this Actor
	UPROPERTY()
		class APaddle* Paddle;
	FTimerHandle MemberTimerSingleton;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void singleton_spawner();

	int i = 0;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
