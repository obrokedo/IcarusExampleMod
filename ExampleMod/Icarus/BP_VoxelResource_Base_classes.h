// BlueprintGeneratedClass BP_VoxelResource_Base.BP_VoxelResource_Base_C
// Size: 0x4fc (Inherited: 0x4d0)
struct ABP_VoxelResource_Base_C : AVoxelResource {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d0(0x08)
	struct UShelteredModifierComponent* ShelteredModifier; // 0x4d8(0x08)
	struct UStaticMeshComponent* NavModifyingCube; // 0x4e0(0x08)
	struct UBP_HitableBehaviour_VoxelResource_C* BP_HitableBehaviour_VoxelResource; // 0x4e8(0x08)
	struct UExperienceComponent* Experience; // 0x4f0(0x08)
	float InstantVoxelMineResourceMulti; // 0x4f8(0x04)

	void GetResourceType(struct FItemTemplateRowHandle& ItemRow); // Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.GetResourceType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void SetResourceMaterial(struct UMaterialInterface* Material); // Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.SetResourceMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UserConstructionScript(); // Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_8958B2EF4B89B0201A7725B6A14919B0(struct UObject* Loaded); // Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.OnLoaded_8958B2EF4B89B0201A7725B6A14919B0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReInitVoxel(); // Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.ReInitVoxel // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetupResourceMaterials(struct TSoftObjectPtr<UMaterialInterface>& Material); // Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.SetupResourceMaterials // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void PlayFullyMinedFX(); // Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.PlayFullyMinedFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__FLODActorComponent_K2Node_ComponentBoundEvent_1_OnActorRevealing__DelegateSignature(struct UFLODActorComponent* Component, struct AActor* Actor, struct FTransform& Transform); // Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.BndEvt__FLODActorComponent_K2Node_ComponentBoundEvent_1_OnActorRevealing__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void ConsumeHit(struct FIcarusDamagePacket DamagePacket); // Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.ConsumeHit // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ResourcesMined(float ResourceMinedCount, struct AIcarusPlayerController* LastHitPlayerController); // Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.ResourcesMined // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_VoxelResource_Base(int32_t EntryPoint); // Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.ExecuteUbergraph_BP_VoxelResource_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

