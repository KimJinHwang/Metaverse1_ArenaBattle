// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ABCharacterBase.generated.h"

UENUM()
enum class ECharacterControlType : uint8
{
	Shoulder,
	Quater
};


UCLASS()
class ARENABATTLE_API AABCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AABCharacterBase();

public:	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	UPROPERTY(EditAnywhere, Categroy = CharacterControl, Meta = (AllowPrivateAccess = "true"))
	TMap<ECharacterControlType, class UABCharacterControlDataAsset*> CharacterControlManager;

	void SetCharacterControlData(const UABCharacterControlDataAsset* CharacterControlData);
};
