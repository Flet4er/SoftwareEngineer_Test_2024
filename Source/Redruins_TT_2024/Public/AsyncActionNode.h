// RedRuins Softworks (c)

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncActionNode.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTaskOutput);
/**
 * 
 */

UCLASS()
class REDRUINS_TT_2024_API UAsyncActionNode : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	UPROPERTY()
	FTaskOutput MultiThreadedWork;

	UPROPERTY()
	FTaskOutput FinishedWork;

	UFUNCTION(BlueprintCallable)
	static UAsyncActionNode* MultiThreadedNode();

	virtual void Activate() override;

};

//============================================================================================

class BP_NonAbandonableTask : public FNonAbandonableTask
{
public:

	BP_NonAbandonableTask(UAsyncActionNode* BP_TaskInstance);

	~BP_NonAbandonableTask();

	//UE5 needs this
	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(BP_NonAbandonableTask, STATGROUP_ThreadPoolAsyncTasks);
	}

	UAsyncActionNode* CallingObject = nullptr;

	void DoWork();

};
