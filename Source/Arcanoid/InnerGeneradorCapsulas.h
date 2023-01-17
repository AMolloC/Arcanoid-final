// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneradorCapsulas.h"
#include "InnerGeneradorCapsulas.generated.h"

/**
 * 
 */
UCLASS()
class ARCANOID_API AInnerGeneradorCapsulas : public AGeneradorCapsulas
{
	GENERATED_BODY()
	
public:
	//Concoct the selected potion
	//virtual APotion* ConcoctPotion(FString PotionSKU) override;
private:
	virtual ACapsula* FabricarCapsula(FString NombreTipoCapsula) override;
};
