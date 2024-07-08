// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "blocksnake.generated.h"
#include "MyInterface.h"


UCLASS()
class MYPROJECT2_API Ablocksnake : public AActor, public IMyInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Ablocksnake();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Interact(AActor* interactor, bool bIsHead, float SpeedCoeff);

};
