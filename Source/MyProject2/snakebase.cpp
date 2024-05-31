// Fill out your copyright notice in the Description page of Project Settings.


#include "snakebase.h"
#include "SnakeElementBase.h"

// Sets default values
Asnakebase::Asnakebase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ElemntSize = 100.f;
}

// Called when the game starts or when spawned
void Asnakebase::BeginPlay()
{
	Super::BeginPlay();
	 
	
}

// Called every frame
void Asnakebase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Asnakebase::AddSnakeElement()
{
	SnakeElements.Num();
	auto NewSnakeElem = GetWorld()->SpawnActor<ASnakeElementBase>(SnakeElementClass, GetActorTransform());
	SnakeElements.Add(NewSnakeElem);
}

