// RedRuins Softworks (c)

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OffscreenMarkers.generated.h"

/**
 * 
 */
UCLASS()
class REDRUINS_TT_2024_API UOffscreenMarkers : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintPure, Category = "UI Math")
	static void FindScreenEdgeLocation(APlayerController* PlayerController, APawn* PlayerCharacter, const FVector& InLocation, FVector2D& OutScreenPosition, float& OutRotationAngleDegrees, bool& bIsOnScreen);
};
