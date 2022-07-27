// BlueprintGeneratedClass BTS_SweepChargeDamage.BTS_SweepChargeDamage_C
// Size: 0x12c (Inherited: 0x98)
struct UBTS_SweepChargeDamage_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FVector ChargeStartLocation; // 0xa0(0x0c)
	bool Active; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct TMap<struct AActor*, float> HitActors; // 0xb0(0x50)
	struct FVector LastAttackLocation; // 0x100(0x0c)
	struct FName ChargeAbortSection; // 0x10c(0x08)
	struct FName ChargeLoopSection; // 0x114(0x08)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct AIcarusCharacter* IcarusCharacter; // 0x120(0x08)
	float SecondaryHitCooldown; // 0x128(0x04)

	void RemoveStaleHitActors(); // Function BTS_SweepChargeDamage.BTS_SweepChargeDamage_C.RemoveStaleHitActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	float GetChargeDamageRadius(); // Function BTS_SweepChargeDamage.BTS_SweepChargeDamage_C.GetChargeDamageRadius // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void ShouldStopCharging(bool& ShouldStop); // Function BTS_SweepChargeDamage.BTS_SweepChargeDamage_C.ShouldStopCharging // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void TryAttack(struct APawn* ControlledPawn, bool& WasBlockingAttack); // Function BTS_SweepChargeDamage.BTS_SweepChargeDamage_C.TryAttack // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTS_SweepChargeDamage.BTS_SweepChargeDamage_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTS_SweepChargeDamage.BTS_SweepChargeDamage_C.ReceiveActivationAI // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTS_SweepChargeDamage.BTS_SweepChargeDamage_C.ReceiveDeactivationAI // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BTS_SweepChargeDamage(int32_t EntryPoint); // Function BTS_SweepChargeDamage.BTS_SweepChargeDamage_C.ExecuteUbergraph_BTS_SweepChargeDamage // (Final|UbergraphFunction) // @ game+0x1be0000
};

