#pragma once
#include "QuestTask.h"

#include "TaskFindNPC.generated.h"

USTRUCT(BlueprintType)
struct FTaskFindNPC: public FQuestTask
{
	GENERATED_BODY()

	FTaskFindNPC()
	{
	}
/*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Task Name"))
	FText TaskName;
//*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="NPC Name"))
	FName NPCToFind;
/*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Task Completed"))
	bool TaskCompleted;
//*/
};
