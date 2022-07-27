// WidgetBlueprintGeneratedClass UMG_Chest.UMG_Chest_C
// Size: 0x2aa (Inherited: 0x268)
struct UUMG_Chest_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* OpenMenu; // 0x270(0x08)
	struct UVerticalBox* InventoryVertBox; // 0x278(0x08)
	struct UBorder* MainBorder; // 0x280(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; // 0x288(0x08)
	struct UUMG_DeviceInventory_C* UMG_DeviceInventory; // 0x290(0x08)
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; // 0x298(0x08)
	struct UInventory* Inventory; // 0x2a0(0x08)
	bool ShowStoreAll; // 0x2a8(0x01)
	bool ShowTakeAll; // 0x2a9(0x01)

	void LinkedActorDestroyed(struct AActor* DestroyedActor); // Function UMG_Chest.UMG_Chest_C.LinkedActorDestroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetupObjectInventory(struct UInventory* ContainerInventory); // Function UMG_Chest.UMG_Chest_C.SetupObjectInventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_Chest.UMG_Chest_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_Chest.UMG_Chest_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_Chest(int32_t EntryPoint); // Function UMG_Chest.UMG_Chest_C.ExecuteUbergraph_UMG_Chest // (Final|UbergraphFunction) // @ game+0x1be0000
};

