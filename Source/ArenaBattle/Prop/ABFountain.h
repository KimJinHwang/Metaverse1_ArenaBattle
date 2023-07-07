// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ABFountain.generated.h"

UCLASS()
class ARENABATTLE_API AABFountain : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AABFountain();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	/*
		Visible / Edit : 읽기 전용, 수정 가능
		Anywhere / DefaultsOnly / InstanceOnly : 런타임에서만 읽기 전용으로 사용, 인스턴스에만 속하도록 지정하고 클래스 수준에서는 공유하지 않는다.
		BlueprintReadOnly / BlueprintReadWrite
		Category : 카테고리 지정
	*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh)
	TObjectPtr<class UStaticMeshComponent> Body;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh)
	TObjectPtr<class UStaticMeshComponent> Water;

};
