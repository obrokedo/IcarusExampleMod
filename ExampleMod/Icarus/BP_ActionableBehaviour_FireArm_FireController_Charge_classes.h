// BlueprintGeneratedClass BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C
// Size: 0xb45 (Inherited: 0xb04)
struct UBP_ActionableBehaviour_FireArm_FireController_Charge_C : UBP_ActionableBehaviour_FireArm_FireController_Base_C {
	char pad_B04[0x4]; // 0xb04(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb08(0x08)
	float ChargePower; // 0xb10(0x04)
	bool StaminaUsed; // 0xb14(0x01)
	char pad_B15[0x3]; // 0xb15(0x03)
	float FullChargePowerTimeStamp; // 0xb18(0x04)
	char pad_B1C[0x4]; // 0xb1c(0x04)
	struct UMatineeCameraShake* CameraShake; // 0xb20(0x08)
	bool LocalChargeCancel; // 0xb28(0x01)
	char pad_B29[0x7]; // 0xb29(0x07)
	struct FTimerHandle ChargeShakeTimer; // 0xb30(0x08)
	bool IsDoingChargeShake; // 0xb38(0x01)
	char pad_B39[0x3]; // 0xb39(0x03)
	float LastChargePower; // 0xb3c(0x04)
	float AcceptableClientPowerDifference; // 0xb40(0x04)
	bool LocalIsFiring; // 0xb44(0x01)

	void GetFiring(bool& Firing); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.GetFiring // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void HandleRep_WantsFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.HandleRep_WantsFire // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FinishFiring(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.FinishFiring // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BeginFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.BeginFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsChargedForFiring(bool& Charged); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.IsChargedForFiring // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void EndFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.EndFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CancelCharging(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.CancelCharging // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckCancelCharge(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.CheckCancelCharge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TickCameraEffects(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.TickCameraEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	float GetChargeTimeMultiplier(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.GetChargeTimeMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void TickCharge(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.TickCharge // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	float GetLaunchForce(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.GetLaunchForce // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void IsCharging(bool& IsCharging); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.IsCharging // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void UpdatePersistentAudioCharge(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.UpdatePersistentAudioCharge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetCurrentChargePower(float& ChargePower); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.GetCurrentChargePower // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnReloadPressed(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.OnReloadPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ChargeShakeBegin(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.ChargeShakeBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ChargeShakeEnd(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.ChargeShakeEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LateSetup(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.LateSetup // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Server_CancelCharge(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.Server_CancelCharge // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Server_OnReleasedShot(bool ClientFired, float ClientChargePower); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.Server_OnReleasedShot // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_Charge(int32_t EntryPoint); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_Charge // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

