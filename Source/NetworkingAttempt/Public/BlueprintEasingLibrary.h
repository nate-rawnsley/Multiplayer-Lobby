

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlueprintEasingLibrary.generated.h"

/**
 * Easings for use in blueprint classes.
 * Also has a function to make a rotator displayed consistently.
 */
UCLASS()
class NETWORKINGATTEMPT_API UBlueprintEasingLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	/** Ease a linear interpolaton time. */
	UFUNCTION(BlueprintCallable, Category = CustomEasing)
	static float SineInOut(float time);

	UFUNCTION(BlueprintCallable, Category = CustomEasing)
	static float EaseOutBounce(float time);

	UFUNCTION(BlueprintCallable, Category = CustomEasing)
	static float EaseOutCirc(float time);

	/** Makes all values in a rotator positive, for smooth lerping. */
	UFUNCTION(BlueprintCallable, Category = CustomEasing)
	static FRotator PositiveRotator(FRotator rotator);
};
