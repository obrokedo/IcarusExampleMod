// BlueprintGeneratedClass BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C
// Size: 0x458 (Inherited: 0x308)
struct UBP_ActionableBehaviour_Throwable_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	bool IsFiring; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	float LastFireDrawPower; // 0x314(0x04)
	struct AIcarusPlayerCharacter* OwningPlayer; // 0x318(0x08)
	struct FRangedWeaponData RangedWeaponData; // 0x320(0xd0)
	float DrawPower; // 0x3f0(0x04)
	float ThrowOffset; // 0x3f4(0x04)
	struct AIcarusItem* IcarusItemRef; // 0x3f8(0x08)
	bool IsDrawing; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct AIcarusItem* ThrownItem; // 0x408(0x08)
	struct TArray<struct UObject*> StoredAnimMontages; // 0x410(0x10)
	float CachedDrawPower; // 0x420(0x04)
	bool ReadyToThrow; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	struct FName ThrowAnimSection; // 0x428(0x08)
	struct FName IdleAnimSection; // 0x430(0x08)
	struct UPostProcessComponent* ActionablePostProcess; // 0x438(0x08)
	float FullDrawPowerTimeStamp; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct UCameraComponent* FPCamera; // 0x448(0x08)
	bool Thrown; // 0x450(0x01)
	enum class EActionableEventType ThrowEventType; // 0x451(0x01)
	char pad_452[0x2]; // 0x452(0x02)
	int32_t HoldModifierUID; // 0x454(0x04)

	void RemoveAimingStat(); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.RemoveAimingStat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddAimingStat(); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.AddAimingStat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	int32_t GetStat(struct FStatsEnum Stat); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.GetStat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void RemoveHoldModifier(); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.RemoveHoldModifier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddHoldModifier(); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.AddHoldModifier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool BP_ShouldApplyEndStaminaCost(enum class EActionableEventType EventType); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.BP_ShouldApplyEndStaminaCost // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StopAimAnim(); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.StopAimAnim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool HasIdleAnim(); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.HasIdleAnim // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void HasThrowAnim(bool& HasThrowAnim); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.HasThrowAnim // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void UpdatePostProcessAndShake(); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.UpdatePostProcessAndShake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsCharging(bool& Charging); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.IsCharging // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void RequestThrow(); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.RequestThrow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetFiring(bool IsFiring); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.SetFiring // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetCurrentDrawPercentage(float& Percentage); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.GetCurrentDrawPercentage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void CanThrow(bool& CanThrow); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.CanThrow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void DoThrow(struct FTransform SpawnTransform, float Power); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.DoThrow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(struct AActor* OwningActor); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_2B8B2B624CE5F97DAE6892B75088DB11(struct UObject* Loaded); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.OnLoaded_2B8B2B624CE5F97DAE6892B75088DB11 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnActionAborted(enum class EActionableEventType EventType); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.OnActionAborted // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Server_RequestThrow(struct FTransform SpawnTransform, float Power); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.Server_RequestThrow // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Multicast_PostThrow(); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.Multicast_PostThrow // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnTraitAnimNotify(struct FAnimNotifyEvent& Notify, struct AActor* AnimInstancePawn); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.OnTraitAnimNotify // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_ActionableBehaviour_Throwable(int32_t EntryPoint); // Function BP_ActionableBehaviour_Throwable.BP_ActionableBehaviour_Throwable_C.ExecuteUbergraph_BP_ActionableBehaviour_Throwable // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

