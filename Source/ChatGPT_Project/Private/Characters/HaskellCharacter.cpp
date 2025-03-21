// Copyright DuhanDemirGameGev

#include "Characters//HaskellCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

AHaskellCharacter::AHaskellCharacter()
{
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0, 400.f,0);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
}
