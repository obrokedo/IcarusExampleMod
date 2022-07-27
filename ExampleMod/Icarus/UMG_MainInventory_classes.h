// WidgetBlueprintGeneratedClass UMG_MainInventory.UMG_MainInventory_C
// Size: 0x339 (Inherited: 0x260)
struct UUMG_MainInventory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* OpenStats; // 0x268(0x08)
	struct UWidgetAnimation* AnimatePointers; // 0x270(0x08)
	struct UUMG_Titlebar_C* Character_Titlebar; // 0x278(0x08)
	struct UImage* Dropshadow; // 0x280(0x08)
	struct UUMG_Titlebar_C* Inventory_Titlebar; // 0x288(0x08)
	struct UHorizontalBox* KeyPrompts; // 0x290(0x08)
	struct UButton* ShowMoreButton; // 0x298(0x08)
	struct UTextBlock* ShowMoreText; // 0x2a0(0x08)
	struct UOverlay* StatsWindow; // 0x2a8(0x08)
	struct UImage* SuitImage; // 0x2b0(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; // 0x2b8(0x08)
	struct UUMG_EncumbranceBarLight_C* UMG_EncumbranceBarLight; // 0x2c0(0x08)
	struct UUMG_EnvirosuitSlots_C* UMG_EnvirosuitSlots; // 0x2c8(0x08)
	struct UUMG_Inventory_C* UMG_Inventory; // 0x2d0(0x08)
	struct UUMG_InventoryAuxilarySlots_C* UMG_InventoryAuxilarySlots; // 0x2d8(0x08)
	struct UUMG_InventoryDropZone_C* UMG_InventoryDropZone; // 0x2e0(0x08)
	struct UUMG_InventoryEnvirosuit_C* UMG_InventoryEnvirosuit; // 0x2e8(0x08)
	struct UUMG_InventoryPaperDoll_C* UMG_InventoryPaperDoll; // 0x2f0(0x08)
	struct UUMG_InventoryStatusBox_C* UMG_InventoryStatusBox; // 0x2f8(0x08)
	struct UUMG_StatDisplay_C* UMG_StatDisplay; // 0x300(0x08)
	struct UUMG_StatsWindow_C* UMG_StatsWindow; // 0x308(0x08)
	struct UInventory* Inventory; // 0x310(0x08)
	struct UUMG_UserInterface_C* UserInterface; // 0x318(0x08)
	struct ABP_PlayerPreview_Survival_C* PlayerPreview; // 0x320(0x08)
	enum class UDLSSMode Old DLSS Mode; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct FTimerHandle TimerHandle; // 0x330(0x08)
	enum class EBPLogVerbosity DebugVerbosity; // 0x338(0x01)

	void IsInventoryVisibile(bool& Visible); // Function UMG_MainInventory.UMG_MainInventory_C.IsInventoryVisibile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void QuickShiftInventoryHandler(int32_t Location, struct UInventory* Inventory); // Function UMG_MainInventory.UMG_MainInventory_C.QuickShiftInventoryHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Initialise(struct UInventory* BoundInventory, struct UInventory* EnvirosuitInventory, struct UInventory* EquipmentInventory, struct UInventory* UpgradeInventory, struct UInventory* VisionInventory, struct UUMG_UserInterface_C* Parent); // Function UMG_MainInventory.UMG_MainInventory_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_MainInventory.UMG_MainInventory_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void VisibilityChanged(enum class ESlateVisibility NewVisbility); // Function UMG_MainInventory.UMG_MainInventory_C.VisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_MainInventory_Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_MainInventory.UMG_MainInventory_C.BndEvt__UMG_MainInventory_Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_MainInventory_ShowMoreButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_MainInventory.UMG_MainInventory_C.BndEvt__UMG_MainInventory_ShowMoreButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_MainInventory_ShowMoreButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UMG_MainInventory.UMG_MainInventory_C.BndEvt__UMG_MainInventory_ShowMoreButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_MainInventory_UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_MainInventory.UMG_MainInventory_C.BndEvt__UMG_MainInventory_UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_MainInventory(int32_t EntryPoint); // Function UMG_MainInventory.UMG_MainInventory_C.ExecuteUbergraph_UMG_MainInventory // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

