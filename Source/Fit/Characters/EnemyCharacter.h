
#pragma once

#include "CoreMinimal.h"
#include "FitCharacterBase.h"
#include "EnemyCharacter.generated.h"

UCLASS()
class FIT_API AEnemyCharacter : public AFitCharacterBase
{
	GENERATED_BODY()

public:
	AEnemyCharacter();

protected:
	virtual void BeginPlay() override;
};