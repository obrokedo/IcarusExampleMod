// BlueprintGeneratedClass BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C
// Size: 0x560 (Inherited: 0x400)
struct ABP_StaticItem_TreePrimitive_C : AStaticItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UExperienceComponent* Experience; // 0x408(0x08)
	float KillFireTimeline_FireTemperatureMultiplier_A5931A634B2ED32ECBDFACA3307BB127; // 0x410(0x04)
	enum class ETimelineDirection KillFireTimeline__Direction_A5931A634B2ED32ECBDFACA3307BB127; // 0x414(0x01)
	char pad_415[0x3]; // 0x415(0x03)
	struct UTimelineComponent* KillFireTimeline; // 0x418(0x08)
	bool RequiresSubdivide; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	float AngularDampingZ; // 0x424(0x04)
	struct FItemRewardsRowHandle RewardsRowHandle; // 0x428(0x18)
	bool SubdivideImmediately; // 0x440(0x01)
	bool SubdivideCopyMeshTransform; // 0x441(0x01)
	char pad_442[0x6]; // 0x442(0x06)
	struct FTreePrimitiveSubdivideMeshes SubdivideMeshes; // 0x448(0x30)
	struct FVector2D AudioCooldownLengthRange; // 0x478(0x08)
	float AudioImpulseThreshold; // 0x480(0x04)
	float AudioImpulseRangeMax; // 0x484(0x04)
	float AudioCooldownEndTime; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct UFMODEvent* CollisionFMODEvent; // 0x490(0x08)
	float HitEventsLifespan; // 0x498(0x04)
	float DefaultMass; // 0x49c(0x04)
	struct UFMODEvent* FMODEvent_Split; // 0x4a0(0x08)
	float RewardMultiplier; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	struct FItemData ScaledItem; // 0x4b0(0xa0)
	bool SubdivideRaycastPosition; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct UPhysicalMaterial* PhysicalMaterialOverride; // 0x558(0x08)

	void OnRep_RequiresSubdivide(); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.OnRep_RequiresSubdivide // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ResolveSubdivideTraits(); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.ResolveSubdivideTraits // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_PhysicalMaterialOverride(); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.OnRep_PhysicalMaterialOverride // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ScaleItemReward(struct FItemData In, float AdditionalMultiplier, struct FItemData& Out); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.ScaleItemReward // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryPlaySubdivideFX(); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.TryPlaySubdivideFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TrySubdivide(); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.TrySubdivide // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateAngularDamping(float DeltaSeconds); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.UpdateAngularDamping // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryPlayCollisionSound(struct FVector Impulse, struct FHitResult& Hit); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.TryPlayCollisionSound // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Initialize(struct FItemRewardsRowHandle RewardsRowHandle, bool SubdivideImmediately, bool SubdivideCopyMeshTransform, struct FTreePrimitiveSubdivideMeshes SubdivideMeshes, struct UStaticMeshComponent* Instigator, bool EnableHitEvents, float AngularDampingZ, float MaxHealth, bool SubdivideRaycastPosition, struct UPhysicalMaterial* PhysicalMaterialOverride); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UserConstructionScript(); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void KillFireTimeline__FinishedFunc(); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.KillFireTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1be0000
	void KillFireTimeline__UpdateFunc(); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.KillFireTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void SetupFireParams(float FireSpread, float FireTemperature, struct FVector LocalFireOrigin, struct FVector LocalBoundsSize); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.SetupFireParams // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__StaticMeshRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.BndEvt__StaticMeshRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void DisableHitEvents(); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.DisableHitEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnActorStateDeath(struct UActorState* ActorState); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.OnActorStateDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MULTI_PlaySubdivideFX(float Mass, int32_t Pieces); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.MULTI_PlaySubdivideFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_StaticItem_TreePrimitive(int32_t EntryPoint); // Function BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C.ExecuteUbergraph_BP_StaticItem_TreePrimitive // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

