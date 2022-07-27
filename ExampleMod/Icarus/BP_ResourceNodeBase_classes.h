// BlueprintGeneratedClass BP_ResourceNodeBase.BP_ResourceNodeBase_C
// Size: 0x3bc (Inherited: 0x2c8)
struct ABP_ResourceNodeBase_C : AGenericResourceBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UBP_Flammable_FLODActor_ResourceNode_C* Flammable; // 0x2d0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2d8(0x08)
	struct UExperienceComponent* Experience; // 0x2e0(0x08)
	struct UBP_HitableBehaviour_ResourceNode_C* BP_HitableBehaviour_ResourceNode; // 0x2e8(0x08)
	struct UFLODActorComponent* FLODComponent; // 0x2f0(0x08)
	struct UHighlightableComponent* Highlightable; // 0x2f8(0x08)
	struct UInteractableComponent* Interactable; // 0x300(0x08)
	int32_t ResourceCount; // 0x308(0x04)
	int32_t MaxResourceCount; // 0x30c(0x04)
	float ReplenishDelay; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct FTimerHandle ReplenishTimer; // 0x318(0x08)
	bool HasBlockingCollision; // 0x320(0x01)
	bool DestroyOnInteract; // 0x321(0x01)
	bool ShouldReplenish; // 0x322(0x01)
	char pad_323[0x1]; // 0x323(0x01)
	struct FItemRewardsRowHandle ResourceRewardRow; // 0x324(0x18)
	struct FInteractableRowHandle InteractableRowHandle; // 0x33c(0x18)
	struct FResourceNodeAudioDataRowHandle AudioRowHandle; // 0x354(0x18)
	struct FItemRewardsRowHandle HitableRewardRow; // 0x36c(0x18)
	bool PlayHarvestFxOnRevealing; // 0x384(0x01)
	char pad_385[0x3]; // 0x385(0x03)
	struct FName HarvestFXSocket; // 0x388(0x08)
	struct FStatsEnum SecondaryResourceStat; // 0x390(0x10)
	struct FItemRewardsRowHandle SecondaryResourceRewardRow; // 0x3a0(0x18)
	float RewardsModifier; // 0x3b8(0x04)

	struct FVector GetHarvestFXLocation(); // Function BP_ResourceNodeBase.BP_ResourceNodeBase_C.GetHarvestFXLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void HitableHarvest_ByNonCharacter(int32_t ResourceTake, struct UInventoryComponent* Inventory); // Function BP_ResourceNodeBase.BP_ResourceNodeBase_C.HitableHarvest_ByNonCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayHarvestFX(struct FVector Location, struct AIcarusPlayerCharacter* Instigator); // Function BP_ResourceNodeBase.BP_ResourceNodeBase_C.PlayHarvestFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetHasBlockingCollision(bool HasBlockingCollision); // Function BP_ResourceNodeBase.BP_ResourceNodeBase_C.SetHasBlockingCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HitableHarvest(struct AIcarusPlayerCharacter* PlayerCharacter, int32_t ResourceTake, struct FToolTypesEnum Tooltype); // Function BP_ResourceNodeBase.BP_ResourceNodeBase_C.HitableHarvest // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InteractHarvest(struct FHitResult HitResult, struct AIcarusPlayerCharacter* PlayerCharacter); // Function BP_ResourceNodeBase.BP_ResourceNodeBase_C.InteractHarvest // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnResourceCountChanged(); // Function BP_ResourceNodeBase.BP_ResourceNodeBase_C.OnResourceCountChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateNodeVisuals(bool& Success); // Function BP_ResourceNodeBase.BP_ResourceNodeBase_C.UpdateNodeVisuals // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryReplenishResource(); // Function BP_ResourceNodeBase.BP_ResourceNodeBase_C.TryReplenishResource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_ResourceCount(); // Function BP_ResourceNodeBase.BP_ResourceNodeBase_C.OnRep_ResourceCount // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UserConstructionScript(); // Function BP_ResourceNodeBase.BP_ResourceNodeBase_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnModifiersUpdated(struct UModifierStateComponent* ModifiedComponent, bool Removed); // Function BP_ResourceNodeBase.BP_ResourceNodeBase_C.OnModifiersUpdated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MULTI_PlayNodeDepletedFX(struct FVector Location); // Function BP_ResourceNodeBase.BP_ResourceNodeBase_C.MULTI_PlayNodeDepletedFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MULTI_PlayHarvestFX(struct FVector Location, struct AIcarusPlayerCharacter* Instigator); // Function BP_ResourceNodeBase.BP_ResourceNodeBase_C.MULTI_PlayHarvestFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_ResourceNodeBase.BP_ResourceNodeBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__FLODComponent_K2Node_ComponentBoundEvent_1_OnActorRevealing__DelegateSignature(struct UFLODActorComponent* Component, struct AActor* Actor, struct FTransform& Transform); // Function BP_ResourceNodeBase.BP_ResourceNodeBase_C.BndEvt__FLODComponent_K2Node_ComponentBoundEvent_1_OnActorRevealing__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_ResourceNodeBase(int32_t EntryPoint); // Function BP_ResourceNodeBase.BP_ResourceNodeBase_C.ExecuteUbergraph_BP_ResourceNodeBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

