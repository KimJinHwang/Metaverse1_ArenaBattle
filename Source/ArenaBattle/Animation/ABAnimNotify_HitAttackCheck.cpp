// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/ABAnimNotify_HitAttackCheck.h"
#include "Character/ABAnimationAttackInterface.h"

void UABAnimNotify_HitAttackCheck::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);

	if (MeshComp)
	{
		IABAnimationAttackInterface* AttackInterface = Cast<IABAnimationAttackInterface>(MeshComp->GetOwner());

		if (AttackInterface)
		{
			AttackInterface->AttackHitCheck();
		}
	}
}
