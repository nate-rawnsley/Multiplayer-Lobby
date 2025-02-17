// Easings from easings.net


#include "BlueprintEasingLibrary.h"

float UBlueprintEasingLibrary::SineInOut(float time) {
	return -(cosf(PI * time) - 1) / 2;
}

float UBlueprintEasingLibrary::EaseOutBounce(float time) {
	const float n1 = 7.5625;
	const float d1 = 2.75;

	if (time < 1 / d1) {
		return n1 * time * time;
	} else if (time < 2 / d1) {
		return n1 * (time -= 1.5 / d1) * time + 0.75;
	} else if (time < 2.5 / d1) {
		return n1 * (time -= 2.25 / d1) * time + 0.9375;
	} else {
		return n1 * (time -= 2.625 / d1) * time + 0.984375;
	}
}

float UBlueprintEasingLibrary::EaseOutCirc(float time) {
	return sqrt(1 - pow(time - 1, 2));
}

//Ensures all rotators have positive values for more consistent rotating.
FRotator UBlueprintEasingLibrary::PositiveRotator(FRotator rotator) {
	rotator.Roll += rotator.Roll < 0 ? 360 : 0;
	rotator.Pitch += rotator.Pitch < 0 ? 360 : 0;
	rotator.Yaw += rotator.Yaw < 0 ? 360 : 0;
	return rotator;
}
