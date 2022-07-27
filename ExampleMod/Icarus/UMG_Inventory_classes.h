// WidgetBlueprintGeneratedClass UMG_Inventory.UMG_Inventory_C
// Size: 0x2e0 (Inherited: 0x260)
struct UUMG_Inventory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UOverlay* HighlightFlagOverlay; // 0x268(0x08)
	struct UVerticalBox* InventoryDisplay; // 0x270(0x08)
	int32_t PreviewSlotCount; // 0x278(0x04)
	int32_t SlotsX; // 0x27c(0x04)
	struct UInventory* Inventory; // 0x280(0x08)
	struct TArray<struct UUMG_InventoryItem_C*> Slots; // 0x288(0x10)
	struct UUMG_InventoryGrid_C* CurrentGrid; // 0x298(0x08)
	bool PreviousSlotable; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	struct FTagQueriesRowHandle PreviousQuery; // 0x2a4(0x18)
	struct FSessionFlagsRowHandle HighlightFlag; // 0x2bc(0x18)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct UUMG_QuestHelper_C* QuestHelper; // 0x2d8(0x08)

	void Re-Initialise(); // Function UMG_Inventory.UMG_Inventory_C.Re-Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG_Inventory.UMG_Inventory_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddToGrid(struct UUMG_InventoryItem_C* WidgetSlot, struct FInventorySlot SlotInfo); // Function UMG_Inventory.UMG_Inventory_C.AddToGrid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddInventorySlots(); // Function UMG_Inventory.UMG_Inventory_C.AddInventorySlots // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnInventoryMove(int32_t Location, struct UInventory* Inventory); // Function UMG_Inventory.UMG_Inventory_C.OnInventoryMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Initialise(struct UInventory* NewInventory); // Function UMG_Inventory.UMG_Inventory_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Inventory.UMG_Inventory_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_Inventory.UMG_Inventory_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_Inventory.UMG_Inventory_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void BindToInventorySlotChange(); // Function UMG_Inventory.UMG_Inventory_C.BindToInventorySlotChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Reinit(struct UInventory* Inventory); // Function UMG_Inventory.UMG_Inventory_C.Reinit // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_Inventory(int32_t EntryPoint); // Function UMG_Inventory.UMG_Inventory_C.ExecuteUbergraph_UMG_Inventory // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

