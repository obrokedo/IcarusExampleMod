// BlueprintGeneratedClass BP_Gravestone.BP_Gravestone_C
// Size: 0x6c0 (Inherited: 0x4f0)
struct ABP_Gravestone_C : AGravestoneBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct UAudioContextComponent* AudioContext; // 0x4f8(0x08)
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; // 0x500(0x08)
	struct UBP_UIProjectionComponent_GraveStone_C* BP_UIProjectionComponent_GraveStone; // 0x508(0x08)
	struct UVocalisationComponent* Vocalisation; // 0x510(0x08)
	struct FName UserID; // 0x518(0x08)
	bool IsMale; // 0x520(0x01)
	char pad_521[0x7]; // 0x521(0x07)
	struct FMulticastInlineDelegate PlayerStateUpdated; // 0x528(0x10)
	struct FTimerHandle SettleTimer; // 0x538(0x08)
	float MaxCorpseSettleTime; // 0x540(0x04)
	char pad_544[0x4]; // 0x544(0x04)
	struct FPoseSnapshot RagdollPose; // 0x548(0x38)
	struct FPoseSnapshot NetworkedPose; // 0x580(0x38)
	bool NeedsArmourUpdate; // 0x5b8(0x01)
	char pad_5B9[0x7]; // 0x5b9(0x07)
	struct UHighlightableComponent* HighlightableComponent; // 0x5c0(0x08)
	struct FGravestoneData TempData; // 0x5c8(0x88)
	struct FVocalisationsRowHandle DeathVocalisation; // 0x650(0x18)
	struct UFMODEvent* RagdollAudioEvent; // 0x668(0x08)
	float RagdollAudioUpdateFrequency; // 0x670(0x04)
	char pad_674[0x4]; // 0x674(0x04)
	struct FTimerHandle RagdollAudioUpdateTimer; // 0x678(0x08)
	struct FName RagdollAudioSocket; // 0x680(0x08)
	struct UFMODAudioComponent* RagdollAudioComponent; // 0x688(0x08)
	float RagdollAudioLastCollisionTime; // 0x690(0x04)
	float RagdollAudioNoCollisionTimeoutLength; // 0x694(0x04)
	struct TSoftObjectPtr<USkeletalMesh> TPMeshSoftReference; // 0x698(0x28)

	void GetGravestoneInventory(struct UInventory*& Inventory); // Function BP_Gravestone.BP_Gravestone_C.GetGravestoneInventory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void StopRagdollAudio(); // Function BP_Gravestone.BP_Gravestone_C.StopRagdollAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateRagdollAudio(); // Function BP_Gravestone.BP_Gravestone_C.UpdateRagdollAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayRagdollAudio(struct FHitResult& Hit); // Function BP_Gravestone.BP_Gravestone_C.PlayRagdollAudio // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Scream(); // Function BP_Gravestone.BP_Gravestone_C.Scream // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ServerHandleAssignedPlayer(); // Function BP_Gravestone.BP_Gravestone_C.ServerHandleAssignedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HandleAssignedPlayer(); // Function BP_Gravestone.BP_Gravestone_C.HandleAssignedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnReloadAssignedPlayerKill(); // Function BP_Gravestone.BP_Gravestone_C.OnReloadAssignedPlayerKill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateHighlightMeshes(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // Function BP_Gravestone.BP_Gravestone_C.UpdateHighlightMeshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdatePlayerArmour(); // Function BP_Gravestone.BP_Gravestone_C.UpdatePlayerArmour // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FPoseSnapshot GetRagdollPose(); // Function BP_Gravestone.BP_Gravestone_C.GetRagdollPose // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void OnRep_NetworkedPose(); // Function BP_Gravestone.BP_Gravestone_C.OnRep_NetworkedPose // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BeginRagdoll(); // Function BP_Gravestone.BP_Gravestone_C.BeginRagdoll // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Apply Cosmetics(); // Function BP_Gravestone.BP_Gravestone_C.Apply Cosmetics // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AttachProjectiles(struct USceneComponent* CharacterRoot, struct AActor* ProjectileOwnerToIgnore); // Function BP_Gravestone.BP_Gravestone_C.AttachProjectiles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitMeshes(struct AIcarusPlayerCharacter* Player); // Function BP_Gravestone.BP_Gravestone_C.InitMeshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetPlayerGravestone(struct ABP_IcarusPlayerControllerSurvival_C* PlayerController, struct FPoseSnapshot DeathPose, struct FVector DeathVelocity); // Function BP_Gravestone.BP_Gravestone_C.SetPlayerGravestone // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Interaction_Revive(struct AActor* Instigator); // Function BP_Gravestone.BP_Gravestone_C.Interaction_Revive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Interaction_Loot(struct AActor* Instigator); // Function BP_Gravestone.BP_Gravestone_C.Interaction_Loot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Revive(float HealthRestoredPercent); // Function BP_Gravestone.BP_Gravestone_C.Revive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AttachProjectilesNextFrame(struct USceneComponent* CharacterRoot, struct AActor* ProjectileOwnerToIgnore); // Function BP_Gravestone.BP_Gravestone_C.AttachProjectilesNextFrame // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_Gravestone.BP_Gravestone_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ForceSettle(); // Function BP_Gravestone.BP_Gravestone_C.ForceSettle // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BeginDelayedSettle(); // Function BP_Gravestone.BP_Gravestone_C.BeginDelayedSettle // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HideInstigator(); // Function BP_Gravestone.BP_Gravestone_C.HideInstigator // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_Gravestone.BP_Gravestone_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void OnRep_GravestoneData(); // Function BP_Gravestone.BP_Gravestone_C.OnRep_GravestoneData // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void OnRep_AssignedPlayerCharacterID(); // Function BP_Gravestone.BP_Gravestone_C.OnRep_AssignedPlayerCharacterID // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // Function BP_Gravestone.BP_Gravestone_C.OnConnectedPlayerInitialised // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__SkeletalMeshRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_Gravestone.BP_Gravestone_C.BndEvt__SkeletalMeshRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void OnRep_PlayerArmour(); // Function BP_Gravestone.BP_Gravestone_C.OnRep_PlayerArmour // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void TerrainAnchorChanged(); // Function BP_Gravestone.BP_Gravestone_C.TerrainAnchorChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Gravestone(int32_t EntryPoint); // Function BP_Gravestone.BP_Gravestone_C.ExecuteUbergraph_BP_Gravestone // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void PlayerStateUpdated__DelegateSignature(); // Function BP_Gravestone.BP_Gravestone_C.PlayerStateUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

