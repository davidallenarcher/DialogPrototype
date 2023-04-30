// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "QuestSystem/Structs/QuestDetails.h"
#include "QuestBase.generated.h"

UCLASS()
class DIALOGPROTOTYPE_API AQuestBase : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Quest ID"))
	FName QuestID;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(DisplayName="Quest Details"))
	FQuestDetails QuestDetails;

	UPROPERTY(BlueprintReadOnly, meta=(DisplayName="Current Stage"))
	int32 CurrentStage;
	
public:	
	// Sets default values for this actor's properties
	AQuestBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
