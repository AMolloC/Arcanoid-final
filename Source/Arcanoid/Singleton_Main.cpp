// Fill out your copyright notice in the Description page of Project Settings.


#include "Singleton_Main.h"
#include "Paddle.h"
#include "Engine/World.h"
#include "TimerManager.h"

// Sets default values
ASingleton_Main::ASingleton_Main()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASingleton_Main::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(MemberTimerSingleton, this, &ASingleton_Main::singleton_spawner, 1.f, true, 1.f);
}

void ASingleton_Main::singleton_spawner()
{
	UE_LOG(LogTemp, Warning, TEXT("Se creo paddle"));
	i++;
	if (i <= 4) {
		APaddle* SpawnedPaddle = GetWorld()->SpawnActor<APaddle>(APaddle::StaticClass());
		if (SpawnedPaddle)
		{
			//If the Spawn succeeds, set the Spawned inventory to the local one and log the success string
			Paddle = SpawnedPaddle;
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("%s has been created"), *Paddle->GetName()));
		}
	}
}

// Called every frame
void ASingleton_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Create 4 Inventory
}

