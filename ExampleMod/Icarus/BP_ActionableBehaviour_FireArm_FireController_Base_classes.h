// BlueprintGeneratedClass BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C
// Size: 0xb04 (Inherited: 0xa22)
struct UBP_ActionableBehaviour_FireArm_FireController_Base_C : UBP_ActionableBehaviour_Firearm_Base_C {
	char pad_A22[0x6]; // 0xa22(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa28(0x08)
	bool WantsFire; // 0xa30(0x01)
	bool IsFiring; // 0xa31(0x01)
	char pad_A32[0x6]; // 0xa32(0x06)
	struct FMulticastInlineDelegate OnWeaponFired; // 0xa38(0x10)
	float LastFireTime; // 0xa48(0x04)
	char pad_A4C[0x4]; // 0xa4c(0x04)
	struct FTimerHandle RefireTimer; // 0xa50(0x08)
	struct TArray<struct UObject*> LoadedAssets; // 0xa58(0x10)
	bool AssetsLoaded; // 0xa68(0x01)
	char pad_A69[0x7]; // 0xa69(0x07)
	struct TMap<struct UFMODAudioComponent*, struct FFirearmSoundData> PersistentAudioComponents; // 0xa70(0x50)
	struct UFXSystemComponent* MuzzleFlashComp; // 0xac0(0x08)
	bool LoadingMuzzleFlash; // 0xac8(0x01)
	char pad_AC9[0x3]; // 0xac9(0x03)
	int32_t ChanceToNotConsumeAmmoSeed; // 0xacc(0x04)
	struct FRandomStream ChanceToNotConsumeAmmoStream; // 0xad0(0x08)
	bool FireAnimPlaying; // 0xad8(0x01)
	bool FirePressed; // 0xad9(0x01)
	char pad_ADA[0x2]; // 0xada(0x02)
	struct FName FireAnimationCallbackId; // 0xadc(0x08)
	char pad_AE4[0x4]; // 0xae4(0x04)
	struct FTimerHandle FireAnimPlayingTimer; // 0xae8(0x08)
	struct FMulticastInlineDelegate OnShotRollback; // 0xaf0(0x10)
	int32_t HoldModifierUID; // 0xb00(0x04)

	void GetTargetPosition(float Distance, struct FVector& HitLocation, struct FVector& CrosshairEndPoint); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.GetTargetPosition // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsCloseToWall(float DistanceToCheck, bool& CloseToWall, struct FHitResult& OutHit); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.IsCloseToWall // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckIfWeaponIsObstructed(struct FVector WeaponBarrelPosition, float CheckDistance, bool& IsObstructed, struct FHitResult& ObstructingHitResult); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.CheckIfWeaponIsObstructed // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetWeaponFireTransform(struct FName FallbackFireSocketName, bool& Valid, struct FTransform& FireTransform); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.GetWeaponFireTransform // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FRotator ApplySpread(struct FRotator BaseAim, float CurrentShakeScale); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.ApplySpread // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RemoveHoldModifier(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.RemoveHoldModifier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddHoldModifier(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.AddHoldModifier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HandleRep_WantsFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.HandleRep_WantsFire // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_ChanceToNotConsumeAmmoSeed(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.OnRep_ChanceToNotConsumeAmmoSeed // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(struct AIcarusActor* ForOwner); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayFPWeaponAnimInstanceFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.PlayFPWeaponAnimInstanceFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AIStimulus(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.AIStimulus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	float GetLaunchForce(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.GetLaunchForce // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct FTransform ApplyProjectileSpread(struct FTransform& InTransform, struct FVector2D InVec); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.ApplyProjectileSpread // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CalcAmmoToConsume(int32_t& AmmoToConsume); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.CalcAmmoToConsume // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsReloading(bool& IsReloading); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.IsReloading // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetCurrentAmmo(int32_t& CurrentAmmoCount); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.GetCurrentAmmo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void IsAiming(bool& IsAiming); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.IsAiming // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void PlayFiringCameraShake(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.PlayFiringCameraShake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetProjectileSpawnTransform(float CameraShakeScale, struct FBallisticData BallisticData, struct FTransform& NewProjectileTransform); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.GetProjectileSpawnTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetFirePositionAndRotation(struct FBallisticData BallisticData, struct FVector& FirePosition, struct FRotator& FireRotation); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.GetFirePositionAndRotation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayNoFireAudio(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.PlayNoFireAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayFireAudio(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.PlayFireAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateAudioPerspective(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.UpdateAudioPerspective // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StopPersistentAudio(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.StopPersistentAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StartPersistentAudio(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.StartPersistentAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SpawnProjectile(struct FProjectileFireParams ProjectileParams); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.SpawnProjectile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DoFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.DoFire // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_WantsFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.OnRep_WantsFire // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ConvertRoundsPerMinuteToFireRate(int32_t RoundsPerMinute, float& FireRate); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.ConvertRoundsPerMinuteToFireRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetRefireRate(float& RefireRate); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.GetRefireRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetFireRate(float& FireRate); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.GetFireRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	enum class CanFireReturnType CanFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.CanFire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void FinishFiring(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.FinishFiring // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckRefire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.CheckRefire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EndFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.EndFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BeginFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.BeginFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_2B8B2B624CE5F97DAE6892B79E7605F8(struct UObject* Loaded); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.OnLoaded_2B8B2B624CE5F97DAE6892B79E7605F8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_6AEAFDFE4BB14A1620E931B275F3002A(struct UObject* Loaded); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.OnLoaded_6AEAFDFE4BB14A1620E931B275F3002A // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void MC_PlayFireEffects(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.MC_PlayFireEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Local_PlayFireEffects(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.Local_PlayFireEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayFireEffects(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.PlayFireEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayFireFailed(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.PlayFireFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PreloadAssets(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.PreloadAssets // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayMuzzleFlash(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.PlayMuzzleFlash // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayFireAnims(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.PlayFireAnims // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Server_BeginFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.Server_BeginFire // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Server_EndFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.Server_EndFire // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LateSetup(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.LateSetup // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void NotifyReloadEnd(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.NotifyReloadEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFirstPersonAnimationStart(struct FName AnimationId); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.OnFirstPersonAnimationStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFirstPersonAnimationEnd(struct FName AnimationId); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.OnFirstPersonAnimationEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnActionInsufficientDurability(enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.OnActionInsufficientDurability // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ClearFireAnimPlaying(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.ClearFireAnimPlaying // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Client_RejectShot(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.Client_RejectShot // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SprintToBeginFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.SprintToBeginFire // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FinishSprintToFireDelay(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.FinishSprintToFireDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RetryPostReloadFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.RetryPostReloadFire // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_Base(int32_t EntryPoint); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void OnShotRollback__DelegateSignature(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.OnShotRollback__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnWeaponFired__DelegateSignature(); // Function BP_ActionableBehaviour_FireArm_FireController_Base.BP_ActionableBehaviour_FireArm_FireController_Base_C.OnWeaponFired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

