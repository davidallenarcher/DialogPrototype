#pragma once
#include "Engine/DataTable.h"

#include "TaskGoToLocation.generated.h"

USTRUCT(BlueprintType)
struct FTaskGoToLocation: public FTableRowBase
{
	GENERATED_BODY()

	FTaskGoToLocation():
		TaskCompleted(false)
	{
	}

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Task Name"))
	FText TaskName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Location Name"))
	FName LocationName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Task Completed"))
	bool TaskCompleted;
};
