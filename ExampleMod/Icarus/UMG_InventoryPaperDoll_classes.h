// WidgetBlueprintGeneratedClass UMG_InventoryPaperDoll.UMG_InventoryPaperDoll_C
// Size: 0x2b0 (Inherited: 0x260)
struct UUMG_InventoryPaperDoll_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_EquipmentSlots_C* ArmsSlot; // 0x268(0x08)
	struct UUMG_EquipmentSlots_C* BackSlot; // 0x270(0x08)
	struct UUMG_EquipmentSlots_C* ChestSlot; // 0x278(0x08)
	struct UUMG_EquipmentSlots_C* FeetSlot; // 0x280(0x08)
	struct UUMG_EquipmentSlots_C* HeadSlot; // 0x288(0x08)
	struct UUMG_EquipmentSlots_C* LegsSlot; // 0x290(0x08)
	struct FMulticastInlineDelegate QuickShiftHandler; // 0x298(0x10)
	struct UUMG_UserInterface_C* UserInterface; // 0x2a8(0x08)

	void UMG_InventoryPaperDoll_AutoGenFunc(int32_t CurrentLocation, struct UInventory* Inventory); // Function UMG_InventoryPaperDoll.UMG_InventoryPaperDoll_C.UMG_InventoryPaperDoll_AutoGenFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Initialize(struct UInventory* BoundInventory); // Function UMG_InventoryPaperDoll.UMG_InventoryPaperDoll_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_InventoryPaperDoll.UMG_InventoryPaperDoll_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_InventoryPaperDoll(int32_t EntryPoint); // Function UMG_InventoryPaperDoll.UMG_InventoryPaperDoll_C.ExecuteUbergraph_UMG_InventoryPaperDoll // (Final|UbergraphFunction) // @ game+0x1be0000
	void QuickShiftHandler__DelegateSignature(int32_t CurrentLocation, struct UInventory* Inventory); // Function UMG_InventoryPaperDoll.UMG_InventoryPaperDoll_C.QuickShiftHandler__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

