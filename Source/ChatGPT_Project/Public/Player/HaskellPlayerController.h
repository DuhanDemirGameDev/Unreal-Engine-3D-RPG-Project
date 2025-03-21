// Copyright DuhanDemirGameGev

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HaskellPlayerController.generated.h"

class UInputMappingContext;
UCLASS()
class CHATGPT_PROJECT_API AHaskellPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AHaskellPlayerController();
protected:
	virtual void BeginPlay() override;
private:
	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputMappingContext> HaskellContext;
};
