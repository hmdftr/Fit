// Fab by Kai Jurgeit

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "FitCharacterBase.generated.h"

class UGameplayAbility;
class UFitAbilitySystemComponent;
class UFitAttributeSet;
class UGameplayEffect;

UCLASS()
class FIT_API AFitCharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AFitCharacterBase();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	virtual UFitAttributeSet* GetAttributeSet() const;

protected:
	void GiveDefaultAbilities();
	void InitDefaultAttributes() const;
		
	UPROPERTY()
	TObjectPtr<UFitAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UFitAttributeSet> AttributeSet;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	TArray<TSubclassOf<UGameplayAbility>> DefaultAbilities;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	TSubclassOf<UGameplayEffect> DefaultAttributeEffect;
};