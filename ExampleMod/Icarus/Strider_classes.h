// Class Strider.StriderMath
// Size: 0x28 (Inherited: 0x28)
struct UStriderMath : UBlueprintFunctionLibrary {

	float WrapAngle(float Angle); // Function Strider.StriderMath.WrapAngle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb997d0
	void MoveTowardVector(struct FVector& InStart, struct FVector& End, float MaxDelta); // Function Strider.StriderMath.MoveTowardVector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xb996a0
	float MoveTowardAngle(float StartAngle, float EndAngle, float MaxDelta); // Function Strider.StriderMath.MoveTowardAngle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb99580
	float MoveToward(float Start, float End, float MaxDelta); // Function Strider.StriderMath.MoveToward // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb99460
	void MoveComponentsToward(struct FVector& InStart, struct FVector& End, float MaxDelta); // Function Strider.StriderMath.MoveComponentsToward // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xb99330
	float GetRotationRelativeToVelocity(struct AActor* Actor); // Function Strider.StriderMath.GetRotationRelativeToVelocity // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb992a0
	int32_t GetNextCardinalDirection(int32_t CurrentCardinalDirection, float RelativeDirection, float StepDelta, float SkipDelta); // Function Strider.StriderMath.GetNextCardinalDirection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb99160
	float GetAngleDelta(float StartAngle, float EndAngle); // Function Strider.StriderMath.GetAngleDelta // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb99090
	float CalculateStrideScale(float TotalSpeedScale, float PlayRate); // Function Strider.StriderMath.CalculateStrideScale // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb98fc0
	float CalculatePlayRate(float TotalSpeedScale, float PlaybackWeight, float MinPlayRate, float MaxPlayRate); // Function Strider.StriderMath.CalculatePlayRate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb98e60
	float CalculateCircleStrafeDirectionDelta(float LastDirection, float Direction, float DeltaTime); // Function Strider.StriderMath.CalculateCircleStrafeDirectionDelta // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb98d40
	float AngleBetween(struct FVector& A, struct FVector& B); // Function Strider.StriderMath.AngleBetween // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xb98c50
};

