// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbilitySystemComponent.h"
#include "FitAbilitySystemComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class FIT_API UFitAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	UFitAbilitySystemComponent();

protected:
	virtual void BeginPlay() override;
	
};
