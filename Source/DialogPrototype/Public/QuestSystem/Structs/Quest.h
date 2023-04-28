#pragma once
#include "CoreMinimal.h"
#include "TaskFindNPC.h"
#include "Engine/DataTable.h"

#include "Quest.generated.h"

USTRUCT(BlueprintType)
struct FQuest: public FTableRowBase
{
	GENERATED_BODY()

	FQuest()
	{
	}

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Quest Name"))
	FText QuestName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Quest Summary"))
	FText QuestSummary;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Quest Tasks"))
	TArray<FQuestTask> Tasks;
};
