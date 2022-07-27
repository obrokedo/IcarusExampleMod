// BlueprintGeneratedClass BP_DeployableBase.BP_DeployableBase_C
// Size: 0x5c3 (Inherited: 0x420)
struct ABP_DeployableBase_C : ADeployable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x08)
	struct UBP_IcarusSplineConnectionComponent_Fuel_C* BP_IcarusSplineConnectionComponent_Fuel; // 0x428(0x08)
	struct UBP_IcarusSplineConnectionComponent_Electric_C* BP_IcarusSplineConnectionComponent_Electric; // 0x430(0x08)
	struct UBP_IcarusSplineConnectionComponent_Water_C* BP_IcarusSplineConnectionComponent_Water; // 0x438(0x08)
	struct USceneComponent* SplineConnectors; // 0x440(0x08)
	struct UShelteredModifierComponent* ShelteredModifier; // 0x448(0x08)
	struct UAudioContextComponent* AudioContext; // 0x450(0x08)
	struct UBoxComponent* WeightColliderBox; // 0x458(0x08)
	struct USceneComponent* ProxyMeshes; // 0x460(0x08)
	struct UBP_ShelteredComponent_C* BP_ShelteredComponent; // 0x468(0x08)
	struct UStaticMeshComponent* DeployableSM; // 0x470(0x08)
	struct USkeletalMeshComponent* DeployableSK; // 0x478(0x08)
	struct TArray<struct ABP_IcarusSplineActor_C*> LinkedSplines; // 0x480(0x10)
	int32_t LastHealth; // 0x490(0x04)
	float LastShelter; // 0x494(0x04)
	struct UFMODEvent* DamagedAudio; // 0x498(0x08)
	struct UFMODEvent* BrokenAudio; // 0x4a0(0x08)
	struct UDestructibleMesh* DestructibleMesh; // 0x4a8(0x08)
	struct FTransform RelativeTransform; // 0x4b0(0x30)
	struct TMap<struct FItemsStaticRowHandle, struct FDeployableProxyMeshConditionArray> ProxyMeshMapping; // 0x4e0(0x50)
	bool OverflowBagHandled; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
	struct TArray<struct USceneComponent*> NetProxyMeshesToShow; // 0x538(0x10)
	struct TArray<struct USceneComponent*> NetProxyMeshesToHide; // 0x548(0x10)
	float AudioOcclusion; // 0x558(0x04)
	bool IsInteractedWith; // 0x55c(0x01)
	char pad_55D[0x3]; // 0x55d(0x03)
	struct TSet<struct AActor*> CurrentInteractors; // 0x560(0x50)
	struct FVector ItemSlottedAudioLocationOffset; // 0x5b0(0x0c)
	bool GeneratorStateActive; // 0x5bc(0x01)
	bool ProcessorStateActive; // 0x5bd(0x01)
	bool ServerIsInCave; // 0x5be(0x01)
	bool InvolvedInQuest; // 0x5bf(0x01)
	bool EnergyStateActive; // 0x5c0(0x01)
	bool WaterStateActive; // 0x5c1(0x01)
	bool FuelStateActive; // 0x5c2(0x01)

	void GetWidgetClass(struct UUserWidget*& Widget); // Function BP_DeployableBase.BP_DeployableBase_C.GetWidgetClass // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayItemAddedAudio(struct FItemsStaticRowHandle Item); // Function BP_DeployableBase.BP_DeployableBase_C.PlayItemAddedAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayRepairedAudio(); // Function BP_DeployableBase.BP_DeployableBase_C.PlayRepairedAudio // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FuelNetworkStateUpdated(bool Active); // Function BP_DeployableBase.BP_DeployableBase_C.FuelNetworkStateUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WaterNetworkStateUpdated(bool Active); // Function BP_DeployableBase.BP_DeployableBase_C.WaterNetworkStateUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_FuelStateActive(); // Function BP_DeployableBase.BP_DeployableBase_C.OnRep_FuelStateActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_WaterStateActive(); // Function BP_DeployableBase.BP_DeployableBase_C.OnRep_WaterStateActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_EnergyStateActive(); // Function BP_DeployableBase.BP_DeployableBase_C.OnRep_EnergyStateActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool GetIsInCave(); // Function BP_DeployableBase.BP_DeployableBase_C.GetIsInCave // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void EnergyNetworkStateUpdate(bool Active); // Function BP_DeployableBase.BP_DeployableBase_C.EnergyNetworkStateUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetDeployableSetup(struct FDeployableSetupRowHandle& DeployableSetup); // Function BP_DeployableBase.BP_DeployableBase_C.GetDeployableSetup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ProcessorStateUpdate(bool Active); // Function BP_DeployableBase.BP_DeployableBase_C.ProcessorStateUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GeneratorStateUpdate(bool Active); // Function BP_DeployableBase.BP_DeployableBase_C.GeneratorStateUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_ProcessorStateActive(); // Function BP_DeployableBase.BP_DeployableBase_C.OnRep_ProcessorStateActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_GeneratorStateActive(); // Function BP_DeployableBase.BP_DeployableBase_C.OnRep_GeneratorStateActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayItemSlottedAudio(struct FVector Location, struct FItemsStaticRowHandle Item); // Function BP_DeployableBase.BP_DeployableBase_C.PlayItemSlottedAudio // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayBrokenAudio(); // Function BP_DeployableBase.BP_DeployableBase_C.PlayBrokenAudio // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayDamagedAudio(struct UActorState* ActorState, int32_t DamageTaken, enum class EIcarusDamageType DamageType); // Function BP_DeployableBase.BP_DeployableBase_C.PlayDamagedAudio // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Deployable_StopInteract(struct AActor* Interactor); // Function BP_DeployableBase.BP_DeployableBase_C.Deployable_StopInteract // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Deployable_Interact(struct AActor* Interactor); // Function BP_DeployableBase.BP_DeployableBase_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_IsInteractedWith(); // Function BP_DeployableBase.BP_DeployableBase_C.OnRep_IsInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void VacuumItems(struct AActor* Instigator, struct FItemsStaticRowHandle ItemsStaticRowHandle, int32_t Count, struct FInventoryIDEnum InventoryID); // Function BP_DeployableBase.BP_DeployableBase_C.VacuumItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetComponentAndChildrenMobility(struct USceneComponent* Component, enum class EComponentMobility Mobility); // Function BP_DeployableBase.BP_DeployableBase_C.SetComponentAndChildrenMobility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_NetProxyMeshesToHide(); // Function BP_DeployableBase.BP_DeployableBase_C.OnRep_NetProxyMeshesToHide // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_NetProxyMeshesToShow(); // Function BP_DeployableBase.BP_DeployableBase_C.OnRep_NetProxyMeshesToShow // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddProxyMeshCondition(struct FItemsStaticRowHandle ItemStatic, struct USceneComponent* ComponentToShow, int32_t MinimumStackSize, bool RequiresASlotableSlot); // Function BP_DeployableBase.BP_DeployableBase_C.AddProxyMeshCondition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ProxyMeshRemoveCheck(struct UInventory* Inventory, int32_t Index, struct FItemData RemovedData); // Function BP_DeployableBase.BP_DeployableBase_C.ProxyMeshRemoveCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ProxyMeshAddCheck(struct UInventory* Inventory, int32_t Index, struct FItemData ItemData); // Function BP_DeployableBase.BP_DeployableBase_C.ProxyMeshAddCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CleanupSplineConnections(); // Function BP_DeployableBase.BP_DeployableBase_C.CleanupSplineConnections // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CreateOverflowBag(bool IncludeSelf); // Function BP_DeployableBase.BP_DeployableBase_C.CreateOverflowBag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetNewFoundationActor(struct AActor* NewFoundation); // Function BP_DeployableBase.BP_DeployableBase_C.SetNewFoundationActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddSplineNetConnection(struct ABP_IcarusSplineActor_C* Spline, struct AResourceNetwork* Network, bool& ConnectionEstablished); // Function BP_DeployableBase.BP_DeployableBase_C.AddSplineNetConnection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsFunctional(bool& bFunctional); // Function BP_DeployableBase.BP_DeployableBase_C.IsFunctional // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void Deployable_Pickup(struct AActor* Instigator, bool& PickedUp); // Function BP_DeployableBase.BP_DeployableBase_C.Deployable_Pickup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_DeployableBase.BP_DeployableBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ReceiveDestroyed(); // Function BP_DeployableBase.BP_DeployableBase_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Event Actor Broken(); // Function BP_DeployableBase.BP_DeployableBase_C.Event Actor Broken // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Event Damaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent& DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // Function BP_DeployableBase.BP_DeployableBase_C.Event Damaged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_DeployableBase.BP_DeployableBase_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void MULTI_BrokenEffects(); // Function BP_DeployableBase.BP_DeployableBase_C.MULTI_BrokenEffects // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RefreshFoundationBinds(); // Function BP_DeployableBase.BP_DeployableBase_C.RefreshFoundationBinds // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EventOnDestroyed(struct AActor* DestroyedActor); // Function BP_DeployableBase.BP_DeployableBase_C.EventOnDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRestoreFoundationFromDatabase(struct AIcarusActor* FoundationFromDatabase); // Function BP_DeployableBase.BP_DeployableBase_C.OnRestoreFoundationFromDatabase // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ItemAdded(struct UInventory* Inventory, int32_t Location); // Function BP_DeployableBase.BP_DeployableBase_C.ItemAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ItemRemovedVerbose(struct UInventory* Inventory, int32_t Location, struct FItemData& Item); // Function BP_DeployableBase.BP_DeployableBase_C.ItemRemovedVerbose // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void itemremovedfuel(struct UInventory* Inventory, int32_t Location, struct FItemData& Item); // Function BP_DeployableBase.BP_DeployableBase_C.itemremovedfuel // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ItemRemovedProcessor(struct UInventory* Inventory, int32_t Location, struct FItemData& Item); // Function BP_DeployableBase.BP_DeployableBase_C.ItemRemovedProcessor // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RepairObject(); // Function BP_DeployableBase.BP_DeployableBase_C.RepairObject // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnBecomeInteractedWith(); // Function BP_DeployableBase.BP_DeployableBase_C.OnBecomeInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnNoLongerInteractedWith(); // Function BP_DeployableBase.BP_DeployableBase_C.OnNoLongerInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EventItemAddedToSlot(struct FVector Slot, struct AIcarusItem* NewItem); // Function BP_DeployableBase.BP_DeployableBase_C.EventItemAddedToSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MULTI_ItemAddedToSlot(struct FVector SlotLocation, struct FItemsStaticRowHandle Item); // Function BP_DeployableBase.BP_DeployableBase_C.MULTI_ItemAddedToSlot // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnGeneratorActiveStateUpdated(bool IsActive); // Function BP_DeployableBase.BP_DeployableBase_C.OnGeneratorActiveStateUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnProcessorStateUpdated(bool bIsActive); // Function BP_DeployableBase.BP_DeployableBase_C.OnProcessorStateUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnEnergyStateUpdated(bool IsActive); // Function BP_DeployableBase.BP_DeployableBase_C.OnEnergyStateUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EventFoundationDestroyed(struct ABuildingBase* Building, enum class EBuildingDestroyReason DestroyReason); // Function BP_DeployableBase.BP_DeployableBase_C.EventFoundationDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EventFoundationReplaced(struct ABuildingBase* NewBuilding); // Function BP_DeployableBase.BP_DeployableBase_C.EventFoundationReplaced // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetCaveState(bool IsInCave, struct AActor* CaveActor); // Function BP_DeployableBase.BP_DeployableBase_C.SetCaveState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CustomEvent(bool IsActive); // Function BP_DeployableBase.BP_DeployableBase_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CustomEvent_2(bool IsActive); // Function BP_DeployableBase.BP_DeployableBase_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MULTI_OnRepaired(); // Function BP_DeployableBase.BP_DeployableBase_C.MULTI_OnRepaired // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MULTI_OnItemVacuumed(struct FItemsStaticRowHandle Item); // Function BP_DeployableBase.BP_DeployableBase_C.MULTI_OnItemVacuumed // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_DeployableBase(int32_t EntryPoint); // Function BP_DeployableBase.BP_DeployableBase_C.ExecuteUbergraph_BP_DeployableBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

