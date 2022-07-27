// BlueprintGeneratedClass BP_GOAP_Corpse.BP_GOAP_Corpse_C
// Size: 0x570 (Inherited: 0x420)
struct ABP_GOAP_Corpse_C : AIcarusGOAPCorpseBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x08)
	struct UNiagaraComponent* Niagara_Flies; // 0x428(0x08)
	struct UInventoryComponent* Inventory; // 0x430(0x08)
	struct FPoseSnapshot RagdollPose; // 0x438(0x38)
	bool HasBeenSkinned; // 0x470(0x01)
	bool CurrentlyBeingHarvested; // 0x471(0x01)
	char pad_472[0x2]; // 0x472(0x02)
	struct FItemsStaticRowHandle CorpseItem; // 0x474(0x18)
	struct FName OnBackSimulateBelowBone; // 0x48c(0x08)
	struct FVector BackPositionOffset; // 0x494(0x0c)
	struct FRotator BackRotationOffset; // 0x4a0(0x0c)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	struct USkeletalMesh* SkeletonMesh; // 0x4b0(0x08)
	bool IsSkeleton; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct UPhysicsAsset* TPCarryPhysicsAsset; // 0x4c0(0x08)
	struct FTimerHandle SettleTimer; // 0x4c8(0x08)
	struct FPoseSnapshot NetworkedPose; // 0x4d0(0x38)
	float MaxCorpseSettleTime; // 0x508(0x04)
	struct FVector HackyFixForClients; // 0x50c(0x0c)
	struct UPhysicsAsset* FPCarryPhysicsAsset; // 0x518(0x08)
	struct UAnimSequence* TPCarryAnim_CHA; // 0x520(0x08)
	struct UFMODEvent* HarvestBonesSound; // 0x528(0x08)
	bool IsBabyAnimal; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
	struct TArray<struct FItemData> HittableRewards; // 0x538(0x10)
	struct TArray<int32_t> RewardCount; // 0x548(0x10)
	struct TArray<int32_t> MaxCount; // 0x558(0x10)
	struct AIcarusPlayerCharacter* LastInteractPlayer; // 0x568(0x08)

	void UpdateSkeletalMeshCarryPhysics(struct USkeletalMeshComponent* SkeletalMeshComponent); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.UpdateSkeletalMeshCarryPhysics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayBonesFullyHarvestedVFX(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.PlayBonesFullyHarvestedVFX // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ApplyRottingModifier(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.ApplyRottingModifier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCorpseFocused(bool IsThirdPerson); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.OnCorpseFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FPoseSnapshot GetRagdollPose(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.GetRagdollPose // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void HideGOAPCharacter(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.HideGOAPCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsSkeletonUpdated(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.IsSkeletonUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayBonesFullyHarvestedSound(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.PlayBonesFullyHarvestedSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HarvestBones(struct AIcarusPlayerController* PlayerController, float DamagePercent); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.HarvestBones // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EmptyCorpse(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.EmptyCorpse // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_HackyFixForClients(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.OnRep_HackyFixForClients // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_NetworkedPose(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.OnRep_NetworkedPose // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_IsSkeleton(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.OnRep_IsSkeleton // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GenerateItem(struct FItemTemplateRowHandle Item, int32_t Amount, struct FItemData& OutputItem); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.GenerateItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PickupCorpse(struct ABP_IcarusPlayerCharacterSurvival_C* TargetPlayer); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.PickupCorpse // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PopulateContents(float Multiplier, struct AIcarusPlayerCharacter* Player, bool ForcePopulateCorpse); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.PopulateContents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSkinnedStateUpdated(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.OnSkinnedStateUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_HasBeenSkinned(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.OnRep_HasBeenSkinned // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ForceSettle(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.ForceSettle // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void BeginDelayedSettle(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.BeginDelayedSettle // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnDamaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.OnDamaged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HideInstigator(); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.HideInstigator // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnItemRemovedVerbose(struct UInventory* Inventory, int32_t Location, struct FItemData& Item); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.OnItemRemovedVerbose // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetupCorpseSettleTime(float NewMaxCorpseSettleTime); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.SetupCorpseSettleTime // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_GOAP_Corpse(int32_t EntryPoint); // Function BP_GOAP_Corpse.BP_GOAP_Corpse_C.ExecuteUbergraph_BP_GOAP_Corpse // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

