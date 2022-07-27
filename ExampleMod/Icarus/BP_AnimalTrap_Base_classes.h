// BlueprintGeneratedClass BP_AnimalTrap_Base.BP_AnimalTrap_Base_C
// Size: 0x5e8 (Inherited: 0x5c3)
struct ABP_AnimalTrap_Base_C : ABP_DeployableBase_C {
	char pad_5C3[0x5]; // 0x5c3(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c8(0x08)
	struct UBoxComponent* Box; // 0x5d0(0x08)
	float AttractionRadius; // 0x5d8(0x04)
	bool IsTrapOccupied; // 0x5dc(0x01)
	char pad_5DD[0x3]; // 0x5dd(0x03)
	struct UInventory* InventoryRef; // 0x5e0(0x08)

	void Deployable_Interact(struct AActor* Interactor); // Function BP_AnimalTrap_Base.BP_AnimalTrap_Base_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnAnimalTrapped(struct FItemsStaticRowHandle Item Static Data); // Function BP_AnimalTrap_Base.BP_AnimalTrap_Base_C.OnAnimalTrapped // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(); // Function BP_AnimalTrap_Base.BP_AnimalTrap_Base_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_AnimalTrap_Base.BP_AnimalTrap_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_AnimalTrap_Base.BP_AnimalTrap_Base_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void OnItemRemoved(struct UInventory* Inventory, int32_t Location); // Function BP_AnimalTrap_Base.BP_AnimalTrap_Base_C.OnItemRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnItemAdded(struct UInventory* Inventory, int32_t Location); // Function BP_AnimalTrap_Base.BP_AnimalTrap_Base_C.OnItemAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Multi_TrapTriggered(bool ItemAdded); // Function BP_AnimalTrap_Base.BP_AnimalTrap_Base_C.Multi_TrapTriggered // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_AnimalTrap_Base(int32_t EntryPoint); // Function BP_AnimalTrap_Base.BP_AnimalTrap_Base_C.ExecuteUbergraph_BP_AnimalTrap_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

