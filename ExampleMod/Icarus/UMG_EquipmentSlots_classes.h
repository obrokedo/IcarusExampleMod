// WidgetBlueprintGeneratedClass UMG_EquipmentSlots.UMG_EquipmentSlots_C
// Size: 0x290 (Inherited: 0x260)
struct UUMG_EquipmentSlots_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_InventoryItem_C* Equipment; // 0x268(0x08)
	struct UTextBlock* EquipmentSlot; // 0x270(0x08)
	struct FText SlotText; // 0x278(0x18)

	void Initialize(struct UInventory* Inventory, int32_t Location); // Function UMG_EquipmentSlots.UMG_EquipmentSlots_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_EquipmentSlots.UMG_EquipmentSlots_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_EquipmentSlots(int32_t EntryPoint); // Function UMG_EquipmentSlots.UMG_EquipmentSlots_C.ExecuteUbergraph_UMG_EquipmentSlots // (Final|UbergraphFunction) // @ game+0x1be0000
};

