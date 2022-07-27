// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C
// Size: 0xa37 (Inherited: 0xa22)
struct UBP_ActionableBehaviour_Firearm_AimController_Base_C : UBP_ActionableBehaviour_Firearm_Base_C {
	char pad_A22[0x6]; // 0xa22(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa28(0x08)
	float AimAlpha; // 0xa30(0x04)
	bool UseExtraVignetteStrength; // 0xa34(0x01)
	bool AllowAimWhileReloading; // 0xa35(0x01)
	bool AimPressed; // 0xa36(0x01)

	void WantsBowMode(bool& bWantsBowMode); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.WantsBowMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WantsShowCrosshair(bool& bShowCrosshair); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.WantsShowCrosshair // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetCrosshairAimAlpha(float& AimAlpha); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.GetCrosshairAimAlpha // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateCosmetics(); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.UpdateCosmetics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetExtraVignetteStrengthEnabled(bool Enabled); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.SetExtraVignetteStrengthEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TickCameraEffects(); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.TickCameraEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateAim(); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.UpdateAim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	float GetADSTimeMultiplier(); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.GetADSTimeMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void CanAim(bool& CanAim); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.CanAim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void ToggleAim(); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.ToggleAim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetAim(bool NewAim); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.SetAim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsAiming(bool& IsAiming); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.IsAiming // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void IsToggleAim(bool& IsToggleAim); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.IsToggleAim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void LateSetup(); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.LateSetup // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void NotifyReloadStart(); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.NotifyReloadStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void NotifyReloadEnd(); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.NotifyReloadEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void SprintToAim(); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.SprintToAim // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FinishSprintToAimDelay(); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.FinishSprintToAimDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AimController_Base(int32_t EntryPoint); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AimController_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

