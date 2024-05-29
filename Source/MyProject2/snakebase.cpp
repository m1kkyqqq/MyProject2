// Fill out your copyright notice in the Description page of Project Settings.


#include "snakebase.h"
#include "SnakeElementBase"

// Sets default values
Asnakebase::Asnakebase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Asnakebase::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->SpawnActor<ASnakeElementBase>(SnakeElementClass, GetActorTransform()); 
	
}

// Called every frame
void Asnakebase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

