// Fill out your copyright notice in the Description page of Project Settings.


#include "snakebase.h"
#include "SnakeElementBase.h"

// Sets default values
Asnakebase::Asnakebase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ElementSize = 100.f;
}

// Called when the game starts or when spawned
void Asnakebase::BeginPlay()
{
	Super::BeginPlay();
	AddSnakeElement(4);
	
}

// Called every frame
void Asnakebase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Asnakebase::AddSnakeElement(int ElementsNum)
{
	for (int i = 0; i < ElementsNum; ++i)
	{
		FVector NewLocation(SnakeElements.Num() * ElementSize, 0, 0);
		FTransform NewTransform(NewLocation);
		auto NewSnakeElem = GetWorld()->SpawnActor<ASnakeElementBase>(SnakeElementClass, NewTransform);
		SnakeElements.Add(NewSnakeElem);
	}
}

