
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/StaticMesh.h"
#include "DA_1.generated.h"
#include "DA_2.generated.h"



UENUM(BlueprintType)
enum class EStatus
{
    value_true,
    value_false,
    value_n      
};

UCLASS(BlueprintType)
class REDRUINS_TT_2024_API UDA_2 : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	EStatus Status = EStatus::value_true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (EditCondition = "Status == EStatus::value_true", EditConditionHides))
	TObjectPtr<UDA_1> DA_1;


};
