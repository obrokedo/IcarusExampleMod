// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C
// Size: 0xa22 (Inherited: 0x308)
struct UBP_ActionableBehaviour_Firearm_Base_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct AIcarusActor* OwningActor; // 0x310(0x08)
	struct AIcarusPlayerCharacterSurvival* OwningPlayer; // 0x318(0x08)
	struct FFirearmData FirearmData; // 0x320(0x6f0)
	struct FTimerHandle LateSetupTimer; // 0xa10(0x08)
	struct UBP_FirearmCosmeticController_C* CosmeticController; // 0xa18(0x08)
	bool WeaponIsReady; // 0xa20(0x01)
	bool ComponentInitComplete; // 0xa21(0x01)

	void GetTimeStamp(float& Timestamp); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.GetTimeStamp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	int32_t GetAdjustedDurabilityDamage(int32_t DurabilityLost); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.GetAdjustedDurabilityDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetupCosmeticController(); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.SetupCosmeticController // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StopAllAnimations(); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.StopAllAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TickCameraEffects(); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.TickCameraEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RollBoolStat(struct FStatsEnum Stat, bool& RollResult); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.RollBoolStat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DamageItemDurability(int32_t Amount); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.DamageItemDurability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetOwnerMeshComponent(struct USkeletalMeshComponent*& AsSkeletal Mesh Component, bool& Valid); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.GetOwnerMeshComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayFirearmSound(struct FFirearmSoundData& FirearmSoundData); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.PlayFirearmSound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetStat(struct FStatsEnum Stat, bool ErrorIfZero, int32_t& Value); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.GetStat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetAimController(struct UBP_ActionableBehaviour_Firearm_AimController_Base_C*& AimController); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.GetAimController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetFireController(struct UBP_ActionableBehaviour_FireArm_FireController_Base_C*& FireController); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.GetFireController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetAmmoController(struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C*& AmmoController); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.GetAmmoController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void LocalOrServer(bool& Local, bool& Server); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.LocalOrServer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetupFirearmData(); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.SetupFirearmData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetupPlayer(); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.SetupPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetupOwner(struct AIcarusActor* Owner); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.SetupOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(struct AIcarusActor* ForOwner); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void PreloadAssets(); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.PreloadAssets // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void LateSetup(); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.LateSetup // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnStatContainerUpdated(); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.OnStatContainerUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_Base(int32_t EntryPoint); // Function BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C.ExecuteUbergraph_BP_ActionableBehaviour_Firearm_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

