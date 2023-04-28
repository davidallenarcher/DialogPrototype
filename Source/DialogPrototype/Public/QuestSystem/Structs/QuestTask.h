#pragma once
#include "Engine/DataTable.h"

#include "QuestTask.generated.h"

USTRUCT(BlueprintType)
struct FQuestTask: public FTableRowBase
{
	GENERATED_BODY()

	FQuestTask():
		TaskCompleted(false)
	{
	}

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Task Name"))
	FText TaskName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Task Completed"))
	bool TaskCompleted;
};
