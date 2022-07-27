// BlueprintGeneratedClass BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C
// Size: 0x778 (Inherited: 0x3f0)
struct UBP_BallisticBehaviour_Base_C : UBallisticComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UBallisticComponent* BallisticComponent; // 0x3f8(0x08)
	struct FBallisticData BallisticData; // 0x400(0x1d8)
	bool Killcam; // 0x5d8(0x01)
	char pad_5D9[0x7]; // 0x5d9(0x07)
	struct UObject* PayloadClass; // 0x5e0(0x08)
	bool OnBreak; // 0x5e8(0x01)
	bool DeployPayloadOnLoad; // 0x5e9(0x01)
	char pad_5EA[0x2]; // 0x5ea(0x02)
	struct FHitResult PreviousHitResult; // 0x5ec(0x8c)
	struct UFMODAudioComponent* FlightSound; // 0x678(0x08)
	struct UParticleSystemComponent* TrailParticle; // 0x680(0x08)
	bool DebugBallistic; // 0x688(0x01)
	char pad_689[0x7]; // 0x689(0x07)
	struct UPhysicsAsset* InitialPhysicsAsset; // 0x690(0x08)
	bool HasProjectileSettled; // 0x698(0x01)
	bool HasValidHit; // 0x699(0x01)
	char pad_69A[0x6]; // 0x69a(0x06)
	struct USkeletalMesh* InitialSkeletalMesh; // 0x6a0(0x08)
	struct FProjectileFireParams AdvancedParams; // 0x6a8(0x08)
	struct FVector Bounds; // 0x6b0(0x0c)
	char pad_6BC[0x4]; // 0x6bc(0x04)
	struct FBallisticAudioData AudioData; // 0x6c0(0x50)
	struct AActor* TargetActor; // 0x710(0x08)
	struct FMulticastInlineDelegate PayloadClassLoaded; // 0x718(0x10)
	bool ProjectileFrozen; // 0x728(0x01)
	char pad_729[0x7]; // 0x729(0x07)
	struct FTimerHandle PostPayloadDestroyTimer; // 0x730(0x08)
	struct FVector LaunchImpulse; // 0x738(0x0c)
	char pad_744[0x4]; // 0x744(0x04)
	struct FTimerHandle TryStopFlightSoundTimerHandle; // 0x748(0x08)
	struct USceneComponent* ReplicatedHomingComponent; // 0x750(0x08)
	struct FName ReplicatedHomingBone; // 0x758(0x08)
	struct UStaticMesh* InitialStaticMesh; // 0x760(0x08)
	struct TArray<struct UObject*> AsyncLoadedObjects; // 0x768(0x10)

	void DisableCosmetics(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.DisableCosmetics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StopFlightSound(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.StopFlightSound // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayFlightSound(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.PlayFlightSound // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateTrailLocation(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.UpdateTrailLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct UBP_CriticalHitComponent_C* GetCriticalHitComponent(bool& Success); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.GetCriticalHitComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	enum class ECollisionChannel GetTraceChannel(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.GetTraceChannel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	float GetHomingMagnitude(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.GetHomingMagnitude // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	bool CanKillcam(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.CanKillcam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	bool CanAimAssist(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.CanAimAssist // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void ApplyKillCam(struct AActor* InActor); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.ApplyKillCam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ApplyAimAssist(struct AActor* InActor, struct FName TargetBone, struct USceneComponent* TargetComponent); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.ApplyAimAssist // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool CheckKillCamOnTarget(struct AActor* HitActor, struct FName CriticalHitBone, struct FPredictProjectilePathResult InPredictedHit); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.CheckKillCamOnTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool CheckKillCam(struct AActor*& Target, struct FName& HitBone, struct UPrimitiveComponent*& HitComponent); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.CheckKillCam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool CheckAimAssist(struct AActor*& HitActor, struct FName& HitBone, struct USceneComponent*& HitComponent, struct FPredictProjectilePathResult& PredictResults); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.CheckAimAssist // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckSpecialMovement(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.CheckSpecialMovement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LogCurrentHomingTarget(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.LogCurrentHomingTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnAttachParentUpdated(struct AActor* NewParent); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnAttachParentUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DamageBlackListTagsCheck(struct AActor* Actor, bool& Blacklisted); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.DamageBlackListTagsCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool CleanupBallistic(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.CleanupBallistic // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DestroyBallisticItem(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.DestroyBallisticItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_ProjectileFrozen(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnRep_ProjectileFrozen // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnProjectileFrozen(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnProjectileFrozen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetProjectileDamage(struct FHitResult HitInfo); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.GetProjectileDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Check Stealth Attack(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.Check Stealth Attack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayHitEffects(struct FHitResult Hit, bool ValidHit); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.PlayHitEffects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnPayloadDeploy(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnPayloadDeploy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnHitActorEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnHitActorEndPlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SpawnPayload(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.SpawnPayload // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_OnBreak(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnRep_OnBreak // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DoProjectileHit(struct FHitResult HitResult); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.DoProjectileHit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_BC74464F40A013B4C602FDBDB44FD47D(struct UObject* Loaded); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnLoaded_BC74464F40A013B4C602FDBDB44FD47D // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_65DBCD26461857A86035D28F5CD97DF7(struct UObject* Loaded); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnLoaded_65DBCD26461857A86035D28F5CD97DF7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_2B8B2B624CE5F97DAE6892B7B9A50C8A(struct UObject* Loaded); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnLoaded_2B8B2B624CE5F97DAE6892B7B9A50C8A // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnProjectileFired(struct FVector Impulse, struct FVector InstigatorVelocity, struct FProjectileFireParams AdvancedParameters); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnProjectileFired // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnProjectileActivated(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnProjectileActivated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnProjectileDeactivated(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.OnProjectileDeactivated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Multi_PlayHitFX(struct FHitResult Hit, bool ValidHit); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.Multi_PlayHitFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryStopFlightSound(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.TryStopFlightSound // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckStopFlightSoundValid(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.CheckStopFlightSoundValid // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BlockLoadAndDeployPayload(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.BlockLoadAndDeployPayload // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_BallisticBehaviour_Base(int32_t EntryPoint); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.ExecuteUbergraph_BP_BallisticBehaviour_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void PayloadClassLoaded__DelegateSignature(); // Function BP_BallisticBehaviour_Base.BP_BallisticBehaviour_Base_C.PayloadClassLoaded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

