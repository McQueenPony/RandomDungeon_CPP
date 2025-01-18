// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DungeonGenerator.generated.h"

UCLASS()
class RANDOMDUNGEON_CPP_API ADungeonGenerator : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADungeonGenerator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void SpawnFirstRoom();

	UFUNCTION()
	void SpawnNextRoom();

	UFUNCTION()
	void CheckForOverlaps();

	UFUNCTION()
	void AddOverlapRoomToList();

	UFUNCTION()
	void AddNodeToGraph();

	UFUNCTION()
	void AddRoomToList();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
