// WidgetBlueprintGeneratedClass UMG_ContextMenu_List.UMG_ContextMenu_List_C
// Size: 0x338 (Inherited: 0x2a8)
struct UUMG_ContextMenu_List_C : UUMG_ContextMenu_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UImage* BackFill; // 0x2b0(0x08)
	struct UBorder* ItemBorder; // 0x2b8(0x08)
	struct UVerticalBox* ItemContainer; // 0x2c0(0x08)
	struct UUMG_ContextMenu_List_Item_C* DefaultListItemClass; // 0x2c8(0x08)
	struct UUMG_ContextMenu_List_Group_C* DefaultListGroupClass; // 0x2d0(0x08)
	bool UseGroupContainers; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct TMap<struct FContextMenuGroupTypesRowHandle, struct UUMG_ContextMenu_List_Group_C*> GroupWidgets; // 0x2e0(0x50)
	struct FVector2D ScreenPadding; // 0x330(0x08)

	void FitPositionToScreen(struct FVector2D InPosition, struct FVector2D& OutPosition); // Function UMG_ContextMenu_List.UMG_ContextMenu_List_C.FitPositionToScreen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCloseInventory(); // Function UMG_ContextMenu_List.UMG_ContextMenu_List_C.OnCloseInventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetOrCreateGroup(struct FContextMenuGroupTypesRowHandle GroupRowHandle, struct UUMG_ContextMenu_List_Group_C*& GroupWidget); // Function UMG_ContextMenu_List.UMG_ContextMenu_List_C.GetOrCreateGroup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void NeedsAnyGroups(struct TArray<struct FContextMenuItemData>& ContextMenuItems, bool& NeedsGroups); // Function UMG_ContextMenu_List.UMG_ContextMenu_List_C.NeedsAnyGroups // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct FEventReply OnMouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG_ContextMenu_List.UMG_ContextMenu_List_C.OnMouseButtonDown_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnWidgetSelected(struct UUMG_ContextMenu_List_Item_C* ItemClicked); // Function UMG_ContextMenu_List.UMG_ContextMenu_List_C.OnWidgetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowMenu(struct FVector2D ScreenPosition, struct FText& MenuName, struct TSoftObjectPtr<UTexture2D>& MenuIcon); // Function UMG_ContextMenu_List.UMG_ContextMenu_List_C.ShowMenu // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CreateItem(int32_t Index, struct FContextMenuItemData ContextMenuItem); // Function UMG_ContextMenu_List.UMG_ContextMenu_List_C.CreateItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddItems(struct TArray<struct FContextMenuItemData>& ContextMenuItems); // Function UMG_ContextMenu_List.UMG_ContextMenu_List_C.AddItems // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CloseMenu(); // Function UMG_ContextMenu_List.UMG_ContextMenu_List_C.CloseMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_ContextMenu_List(int32_t EntryPoint); // Function UMG_ContextMenu_List.UMG_ContextMenu_List_C.ExecuteUbergraph_UMG_ContextMenu_List // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

