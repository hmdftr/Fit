
#pragma once

#include "CoreMinimal.h"
#include "FitCharacterBase.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class FIT_API APlayerCharacter : public AFitCharacterBase
{
	GENERATED_BODY()

public:
	APlayerCharacter();
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

private:
	void InitAbilitySystemComponent();
	void InitHUD() const;
};