// RedRuins Softworks (c)

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MySubObjectClass.generated.h"

/**
 * 
 */
UCLASS()
class REDRUINS_TT_2024_API UMySubObjectClass : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(Replicated)
	int32 Counter = 0;
};
