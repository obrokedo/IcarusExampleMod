// BlueprintGeneratedClass BP_ContainerBase.BP_ContainerBase_C
// Size: 0x320 (Inherited: 0x301)
struct ABP_ContainerBase_C : ABP_WorldObject_C {
	char pad_301[0x7]; // 0x301(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UInventoryComponent* Inventory; // 0x310(0x08)
	struct UFMODEvent* ItemRemovedSound; // 0x318(0x08)

	void OnItemRemoved(struct UInventory* Inventory, int32_t Location, struct FItemData& Item); // Function BP_ContainerBase.BP_ContainerBase_C.OnItemRemoved // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WorldObject_Interact(struct AActor* Instigator); // Function BP_ContainerBase.BP_ContainerBase_C.WorldObject_Interact // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_ContainerBase.BP_ContainerBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_ContainerBase(int32_t EntryPoint); // Function BP_ContainerBase.BP_ContainerBase_C.ExecuteUbergraph_BP_ContainerBase // (Final|UbergraphFunction) // @ game+0x1be0000
};

