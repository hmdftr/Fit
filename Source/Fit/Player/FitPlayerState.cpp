
#include "FitPlayerState.h"
#include "Fit/AbilitySystem/FitAbilitySystemComponent.h"
#include "Fit/AbilitySystem/FitAttributeSet.h"

AFitPlayerState::AFitPlayerState()
{
	NetUpdateFrequency = 100.f;
	
	AbilitySystemComponent = CreateDefaultSubobject<UFitAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	AttributeSet = CreateDefaultSubobject<UFitAttributeSet>("AttributeSet");
}

UAbilitySystemComponent* AFitPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UFitAttributeSet* AFitPlayerState::GetAttributeSet() const
{
	return AttributeSet;
}