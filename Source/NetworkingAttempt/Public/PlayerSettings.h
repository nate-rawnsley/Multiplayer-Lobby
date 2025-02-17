// https://www.armandyilinkou.com/blog/saving-game-and-settings-in-unreal-engine-5-with-c

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PlayerSettings.generated.h"

/**
*Class to store a player's settings in a save game slot, to persist between sessions.
*/
UCLASS()
class NETWORKINGATTEMPT_API UPlayerSettings : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite) int resolutionIndex = 0;
	UPROPERTY(BlueprintReadWrite) bool fullscreen = false;
	UPROPERTY(BlueprintReadWrite) bool simpleText = false;
	UPROPERTY(BlueprintReadWrite) float fontScale = 1;
	UPROPERTY(BlueprintReadWrite) float SFXVolume = 1;
	//Value for a scrapped Text-To-Speech menu accessibity setting.
	UPROPERTY(BlueprintReadWrite) float TTSVolume = 1;
};
