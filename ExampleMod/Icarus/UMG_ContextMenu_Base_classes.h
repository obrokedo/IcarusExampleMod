// WidgetBlueprintGeneratedClass UMG_ContextMenu_Base.UMG_ContextMenu_Base_C
// Size: 0x2a8 (Inherited: 0x260)
struct UUMG_ContextMenu_Base_C : UContextMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct FText MenuName; // 0x268(0x18)
	struct TSoftObjectPtr<UTexture2D> MenuIcon; // 0x280(0x28)

	void CreateItem(int32_t Index, struct FContextMenuItemData ContextMenuItem); // Function UMG_ContextMenu_Base.UMG_ContextMenu_Base_C.CreateItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowMenu(struct FVector2D ScreenPosition, struct FText& MenuName, struct TSoftObjectPtr<UTexture2D>& MenuIcon); // Function UMG_ContextMenu_Base.UMG_ContextMenu_Base_C.ShowMenu // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CloseMenu(); // Function UMG_ContextMenu_Base.UMG_ContextMenu_Base_C.CloseMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddItems(struct TArray<struct FContextMenuItemData>& ContextMenuItems); // Function UMG_ContextMenu_Base.UMG_ContextMenu_Base_C.AddItems // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_ContextMenu_Base.UMG_ContextMenu_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void HidePanelDisplay(); // Function UMG_ContextMenu_Base.UMG_ContextMenu_Base_C.HidePanelDisplay // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_ContextMenu_Base(int32_t EntryPoint); // Function UMG_ContextMenu_Base.UMG_ContextMenu_Base_C.ExecuteUbergraph_UMG_ContextMenu_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

