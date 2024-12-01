//ddsdasd
#include "PlayerCharacter.h"
#include "Fit/AbilitySystem/FitAbilitySystemComponent.h"
#include "Fit/AbilitySystem/FitAttributeSet.h"
#include "Fit/Player/FitPlayerState.h"
#include "Fit/UI/FitHUD.h"


APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APlayerCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	
	InitAbilitySystemComponent();
	GiveDefaultAbilities();
	InitDefaultAttributes();
	InitHUD();
}

void APlayerCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	
	InitAbilitySystemComponent();
	InitDefaultAttributes();
	InitHUD();
}

void APlayerCharacter::InitAbilitySystemComponent()
{
	AFitPlayerState* FitPlayerState = GetPlayerState<AFitPlayerState>();
	check(FitPlayerState);
	AbilitySystemComponent =  CastChecked<UFitAbilitySystemComponent>(
		FitPlayerState->GetAbilitySystemComponent());
	AbilitySystemComponent->InitAbilityActorInfo(FitPlayerState, this);
	AttributeSet = FitPlayerState->GetAttributeSet();
}

void APlayerCharacter::InitHUD() const
{
	if(const APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		 if(AFitHUD* FitHUD = Cast<AFitHUD>(PlayerController->GetHUD()))
		 {
		 	FitHUD->Init();
		 }
	}
}