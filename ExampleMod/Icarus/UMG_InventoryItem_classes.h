// WidgetBlueprintGeneratedClass UMG_InventoryItem.UMG_InventoryItem_C
// Size: 0x718 (Inherited: 0x260)
struct UUMG_InventoryItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* AngleImage; // 0x268(0x08)
	struct UImage* AssociatedItem; // 0x270(0x08)
	struct UBorder* AssociatedItemContainer; // 0x278(0x08)
	struct UImage* backdetails; // 0x280(0x08)
	struct UImage* backdetails_2; // 0x288(0x08)
	struct UOverlay* BackpackDetails; // 0x290(0x08)
	struct UBorder* BaseBorder; // 0x298(0x08)
	struct UBorder* BrokenIconContainer; // 0x2a0(0x08)
	struct UImage* BrokenIconImage; // 0x2a8(0x08)
	struct UBorder* CountContainer; // 0x2b0(0x08)
	struct UProgressBar* DurabilityBar; // 0x2b8(0x08)
	struct UImage* Frame; // 0x2c0(0x08)
	struct UImage* Frame_2; // 0x2c8(0x08)
	struct UImage* HoveredHandles; // 0x2d0(0x08)
	struct UOverlay* HoverImage; // 0x2d8(0x08)
	struct UImage* ImprovedItem; // 0x2e0(0x08)
	struct UBorder* InteractableFrame; // 0x2e8(0x08)
	struct UBorder* InteractableFrameLarge; // 0x2f0(0x08)
	struct UImage* ItemIcon; // 0x2f8(0x08)
	struct UOverlay* ItemSlot; // 0x300(0x08)
	struct UBorder* LastItem; // 0x308(0x08)
	struct UImage* LastItemIcon; // 0x310(0x08)
	struct UBorder* LightKey; // 0x318(0x08)
	struct UOverlay* LightSlotDetails; // 0x320(0x08)
	struct UBorder* LockedState; // 0x328(0x08)
	struct UOverlay* MasterOverlay; // 0x330(0x08)
	struct UBorder* SpoilContainerDebug; // 0x338(0x08)
	struct UProgressBar* SpoilPercentage; // 0x340(0x08)
	struct UTextBlock* SpoilTime; // 0x348(0x08)
	struct UTextBlock* Stack; // 0x350(0x08)
	struct UUMG_FillableProgressBar_C* UMG_FillableProgressBar; // 0x358(0x08)
	struct FItemData Item; // 0x360(0xa0)
	struct UInventory* Inventory; // 0x400(0x08)
	int32_t CurrentLocation; // 0x408(0x04)
	int32_t Hotkey_Number; // 0x40c(0x04)
	enum class E_SlotState State; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct UTexture2D* Image_Normal; // 0x418(0x08)
	struct UTexture2D* Image_Pressed; // 0x420(0x08)
	struct UTexture2D* Image_Hovered; // 0x428(0x08)
	struct UTexture2D* Image_Valid; // 0x430(0x08)
	struct UTexture2D* Image_Invalid; // 0x438(0x08)
	bool HiddenForDrag; // 0x440(0x01)
	bool RightClick; // 0x441(0x01)
	char pad_442[0x6]; // 0x442(0x06)
	struct FMulticastInlineDelegate QuickShift; // 0x448(0x10)
	bool Locked; // 0x458(0x01)
	bool BeingMoved; // 0x459(0x01)
	char pad_45A[0x2]; // 0x45a(0x02)
	int32_t MovingCount; // 0x45c(0x04)
	bool ShowLastItem; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)
	struct UCurveLinearColor* SpoiltColourCurve; // 0x468(0x08)
	bool LockOverride; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
	struct UFMODEvent* SFX_SocketItem; // 0x478(0x08)
	struct UUMG_ItemPopup_C* Tooltip; // 0x480(0x08)
	struct FName ContextMenuUseItemId; // 0x488(0x08)
	struct FItemData CachedItem; // 0x490(0xa0)
	struct UFMODEvent* SFX_SocketItemFail; // 0x530(0x08)
	struct UFMODEvent* SFX_DestroyItemDefault; // 0x538(0x08)
	struct UFMODEvent* SFX_HoverItem; // 0x540(0x08)
	struct UFMODEvent* SFX_HoverEmpty; // 0x548(0x08)
	struct UFMODEvent* SFX_HoverDragItemValid; // 0x550(0x08)
	struct UFMODEvent* SFX_HoverDragItemInvalid; // 0x558(0x08)
	struct UFMODEvent* SFX_DragItem; // 0x560(0x08)
	struct UFMODEvent* SFX_QuickMoveItem; // 0x568(0x08)
	struct UUserWidget* HighlightWidget; // 0x570(0x08)
	struct FSlateBrush BackpackFrame; // 0x578(0x88)
	struct FSlateBrush RegularFrame; // 0x600(0x88)
	int32_t CachedItemMaximumHealth; // 0x688(0x04)
	char pad_68C[0x4]; // 0x68c(0x04)
	struct FSlateBrush LightFrame; // 0x690(0x88)

	bool IsQuestItem(); // Function UMG_InventoryItem.UMG_InventoryItem_C.IsQuestItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void SetItemStyle(bool IsExotic, bool IsQuest); // Function UMG_InventoryItem.UMG_InventoryItem_C.SetItemStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool IsExoticItem(); // Function UMG_InventoryItem.UMG_InventoryItem_C.IsExoticItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void LightSlotStyle(bool IsEquipped); // Function UMG_InventoryItem.UMG_InventoryItem_C.LightSlotStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool IsLightSlot(); // Function UMG_InventoryItem.UMG_InventoryItem_C.IsLightSlot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void SetForceLocked(bool IsLocked); // Function UMG_InventoryItem.UMG_InventoryItem_C.SetForceLocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool IsBackpackSlot(); // Function UMG_InventoryItem.UMG_InventoryItem_C.IsBackpackSlot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetCraftingBenchRequired(struct FItemData& ItemData, bool& RequiresCraftingBench, struct FRecipeSetsRowHandle& CraftingBenchType); // Function UMG_InventoryItem.UMG_InventoryItem_C.GetCraftingBenchRequired // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetUseWidgets(struct FItemData Item, struct FUsesEnum Use, struct TArray<struct UWidget*>& Array); // Function UMG_InventoryItem.UMG_InventoryItem_C.GetUseWidgets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void ShouldShowHighlight(struct UInventory* Inventory, bool& Show); // Function UMG_InventoryItem.UMG_InventoryItem_C.ShouldShowHighlight // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void OnCursorCleared(); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnCursorCleared // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCursorUpdated(struct FItemData Item); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnCursorUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetDestroyItemSound(struct FItemData& ItemData, struct UFMODEvent*& Sound); // Function UMG_InventoryItem.UMG_InventoryItem_C.GetDestroyItemSound // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void DestroyItemConfirmed(); // Function UMG_InventoryItem.UMG_InventoryItem_C.DestroyItemConfirmed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DestroyItemCancelled(); // Function UMG_InventoryItem.UMG_InventoryItem_C.DestroyItemCancelled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CanDestroyItem(struct FItemData Item, bool& CanDestroy); // Function UMG_InventoryItem.UMG_InventoryItem_C.CanDestroyItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void HasStackContextMenuItems(struct FItemData Item, struct FItemableData& ItemableData, bool& HasStackActions, bool& SplitStackEnabled); // Function UMG_InventoryItem.UMG_InventoryItem_C.HasStackContextMenuItems // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void HasUseContextMenuItems(struct FItemData& Item, bool& HasUseItems); // Function UMG_InventoryItem.UMG_InventoryItem_C.HasUseContextMenuItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void OnContextMenuDropClicked(struct FName ID, int32_t Payload); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnContextMenuDropClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnContextMenuItemClicked(struct FName ID, int32_t Payload); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnContextMenuItemClicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnContextMenuSplitStackClicked(struct FName ID, int32_t Payload); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnContextMenuSplitStackClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnContextMenuDestroyItemClicked(struct FName ID, int32_t Payload); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnContextMenuDestroyItemClicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryShowContextMenu(); // Function UMG_InventoryItem.UMG_InventoryItem_C.TryShowContextMenu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Get Meta Inventory ID(struct UInventory* Inventory, enum class EMetaInventoryID& Meta ID); // Function UMG_InventoryItem.UMG_InventoryItem_C.Get Meta Inventory ID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void UpdateSpoilColour(float SpoilPercent); // Function UMG_InventoryItem.UMG_InventoryItem_C.UpdateSpoilColour // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetDropShipMode(); // Function UMG_InventoryItem.UMG_InventoryItem_C.SetDropShipMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FLinearColor DurabilityBarColour(); // Function UMG_InventoryItem.UMG_InventoryItem_C.DurabilityBarColour // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void Set Being Moved(int32_t MovingCount); // Function UMG_InventoryItem.UMG_InventoryItem_C.Set Being Moved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetCursorInfo(struct UInventory* CurrentInventory, int32_t Location); // Function UMG_InventoryItem.UMG_InventoryItem_C.SetCursorInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateState(enum class E_SlotState NewState); // Function UMG_InventoryItem.UMG_InventoryItem_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetCursorInfo(struct UInventory*& Inventory, int32_t& Location, bool& Success, int32_t& Count); // Function UMG_InventoryItem.UMG_InventoryItem_C.GetCursorInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Unfocus(); // Function UMG_InventoryItem.UMG_InventoryItem_C.Unfocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Focus(); // Function UMG_InventoryItem.UMG_InventoryItem_C.Focus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Update(struct FItemData Item Reference, struct FItemsStaticRowHandle Last Item); // Function UMG_InventoryItem.UMG_InventoryItem_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Initialise (struct UInventory* BoundInventory, int32_t Location); // Function UMG_InventoryItem.UMG_InventoryItem_C.Initialise  // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void DragOff(); // Function UMG_InventoryItem.UMG_InventoryItem_C.DragOff // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_InventoryItem.UMG_InventoryItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_InventoryItem.UMG_InventoryItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Trigger Hover(); // Function UMG_InventoryItem.UMG_InventoryItem_C.Trigger Hover // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnInventoryItemUpdated(struct UInventory* Inventory, int32_t Location); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnInventoryItemUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnInventoryUpdated(struct UInventory* Inventory); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnInventoryUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryUpdate(); // Function UMG_InventoryItem.UMG_InventoryItem_C.TryUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_InventoryItem(int32_t EntryPoint); // Function UMG_InventoryItem.UMG_InventoryItem_C.ExecuteUbergraph_UMG_InventoryItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void QuickShift__DelegateSignature(int32_t CurrentLocation, struct UInventory* Inventory); // Function UMG_InventoryItem.UMG_InventoryItem_C.QuickShift__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

