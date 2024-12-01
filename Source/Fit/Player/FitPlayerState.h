//FIT MULTIPLAYER RPG
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "FitPlayerState.generated.h"

class UFitAbilitySystemComponent;
class UFitAttributeSet;

UCLASS()
class FIT_API AFitPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AFitPlayerState();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	virtual UFitAttributeSet* GetAttributeSet() const;

protected:	
	UPROPERTY()
	TObjectPtr<UFitAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UFitAttributeSet> AttributeSet;
};