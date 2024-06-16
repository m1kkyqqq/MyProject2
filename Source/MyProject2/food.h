// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Myinteface.h"
#include "food.generated.h"

UCLASS()
class MYPROJECT2_API Afood : public AActor, public IMyinterface 
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Afood();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Interact(AActor* interactor) override;

};
