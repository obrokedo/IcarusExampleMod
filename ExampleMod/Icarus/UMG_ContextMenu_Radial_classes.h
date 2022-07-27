// WidgetBlueprintGeneratedClass UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C
// Size: 0x330 (Inherited: 0x2a8)
struct UUMG_ContextMenu_Radial_C : UUMG_ContextMenu_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UImage* BackgroundFade; // 0x2b0(0x08)
	struct UTextBlock* ContentText; // 0x2b8(0x08)
	struct UImage* ContextImage; // 0x2c0(0x08)
	struct UBorder* InteractionFrame; // 0x2c8(0x08)
	struct UOverlay* RadialMenu; // 0x2d0(0x08)
	struct UTextBlock* TitleText; // 0x2d8(0x08)
	struct UUMG_ContextMenu_Radial_Item_C* HighlightedSegment; // 0x2e0(0x08)
	struct FMulticastInlineDelegate SegmentHighlightedChanged; // 0x2e8(0x10)
	int32_t NumItems; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct UUMG_ContextMenu_Radial_Item_C* DefaultSegmentWidgetClass; // 0x300(0x08)
	bool IsOpen; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct TArray<struct UUMG_ContextMenu_Radial_Item_C*> Items; // 0x310(0x10)
	float ControllerDistanceMultiplier; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct UUMG_ContextMenu_Radial_Item_C* LastHighlightedSegment; // 0x328(0x08)

	void UpdateHighlight(); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.UpdateHighlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetAngleAndDistance_Controller(float& Angle, float& Distance); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.GetAngleAndDistance_Controller // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetTotalAngleAndDistance(float& Angle, float& Distance); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.GetTotalAngleAndDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetDistanceFromCentre_Mouse(float& InteractionLength); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.GetDistanceFromCentre_Mouse // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetAngle_Mouse(float& Angle); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.GetAngle_Mouse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CreateItem(int32_t Index, struct FContextMenuItemData ContextMenuItem); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.CreateItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Radial Menu Select(); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.Radial Menu Select // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SegmentHighlightedHandler(struct UUMG_ContextMenu_Radial_Item_C* NewHighlightedSegment); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.SegmentHighlightedHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ListenForActions(); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.ListenForActions // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StopListeningForActions(); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.StopListeningForActions // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnClickedInput(); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.OnClickedInput // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowMenu(struct FVector2D ScreenPosition, struct FText& MenuName, struct TSoftObjectPtr<UTexture2D>& MenuIcon); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.ShowMenu // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddItems(struct TArray<struct FContextMenuItemData>& ContextMenuItems); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.AddItems // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CloseMenu(); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.CloseMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnMenuOpened(); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.OnMenuOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_ContextMenu_Radial(int32_t EntryPoint); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.ExecuteUbergraph_UMG_ContextMenu_Radial // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void SegmentHighlightedChanged__DelegateSignature(struct UUMG_ContextMenu_Radial_Item_C* Segment); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.SegmentHighlightedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

