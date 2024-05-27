// RedRuins Softworks (c)

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/StaticMesh.h"
#include "DA_2.generated.h"
#include "DA_1.generated.h"



USTRUCT(BlueprintType)
struct FMyStruct
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Fnumber;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMesh* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UDA_2> DA_2;



};


UCLASS(BlueprintType)
class REDRUINS_TT_2024_API UDA_1 : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FMyStruct Struct;
};




