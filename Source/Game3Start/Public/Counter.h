// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Counter.generated.h"

UCLASS()
class GAME3START_API ACounter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACounter();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="CountersAndStuff")
	int32 counter = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CountersAndStuff") float = 3.4f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CountersAndStuff") FString playername = "Tomm";

	UFUNCTION(BlueprintCallable) void DoubleSpeed();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
