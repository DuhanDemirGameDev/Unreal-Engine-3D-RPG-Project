// Copyright DuhanDemirGameGev


#include "Player/HaskellPlayerController.h"
#include "EnhancedInputSubsystems.h"

AHaskellPlayerController::AHaskellPlayerController()
{
	bReplicates=true;
}

void AHaskellPlayerController::BeginPlay()
{
	Super::BeginPlay();
	check(HaskellContext);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	check(Subsystem);
	Subsystem->AddMappingContext(HaskellContext, 0);

}
