// Fill out your copyright notice in the Description page of Project Settings.

#include "FitAbilitySystemComponent.h"

UFitAbilitySystemComponent::UFitAbilitySystemComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicated(true);
}

void UFitAbilitySystemComponent::BeginPlay()
{
	Super::BeginPlay();

}

