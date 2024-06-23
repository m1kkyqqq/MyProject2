// Fill out your copyright notice in the Description page of Project Settings.


#include "foodspeed.h"
#include "snakebase.h"
// Sets default values
Afoodspeed::Afoodspeed()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Afoodspeed::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Afoodspeed::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void activateSpeedBoost()
{
    originalTickInterval = GetTickInterval(); // Сохраняем изначальное значение TickInterval
    SetTickInterval(originalTickInterval / 2); // Устанавливаем ускоренное значение TickInterval
    speedBoostDuration = 100; // Продолжительность ускорения (в примере - 100 обновлений экрана)
}

void deactivateSpeedBoost()
{
    SetTickInterval(originalTickInterval); // Восстанавливаем изначальное значение TickInterval
}