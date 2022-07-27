// WidgetBlueprintGeneratedClass UMG_ListElement.UMG_ListElement_C
// Size: 0x2e8 (Inherited: 0x260)
struct UUMG_ListElement_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	bool Selected; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	struct FProcessorRecipesRowHandle ProcessorRecipe; // 0x26c(0x18)
	char pad_284[0x4]; // 0x284(0x04)
	struct UUMG_RecipeToolTip_C* RecipeToolTip; // 0x288(0x08)
	struct AActor* LinkedActor; // 0x290(0x08)
	enum class E_ButtonState ButtonState; // 0x298(0x01)
	bool Valid; // 0x299(0x01)
	bool AlwaysValid; // 0x29a(0x01)
	bool MouseInteraction; // 0x29b(0x01)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct FMulticastInlineDelegate RecipeSelected; // 0x2a0(0x10)
	bool UseInput; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	struct FSessionFlagsRowHandle HighlightFlag; // 0x2b4(0x18)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct UUMG_WidgetHighlightBase_C* QuestHelper; // 0x2d0(0x08)
	struct TArray<struct FTagQueriesRowHandle> CachedQueries; // 0x2d8(0x10)

	void FullUpdate(); // Function UMG_ListElement.UMG_ListElement_C.FullUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct UOverlay* GetOverlay(); // Function UMG_ListElement.UMG_ListElement_C.GetOverlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateTrigger(); // Function UMG_ListElement.UMG_ListElement_C.UpdateTrigger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG_ListElement.UMG_ListElement_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateVisibility(struct FTagQueriesRowHandle& ItemQuery); // Function UMG_ListElement.UMG_ListElement_C.UpdateVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetState(bool Valid); // Function UMG_ListElement.UMG_ListElement_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Initialise(); // Function UMG_ListElement.UMG_ListElement_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitialiseIcons(); // Function UMG_ListElement.UMG_ListElement_C.InitialiseIcons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct UUMG_RecipeElementImage_C* CreateResourceWidget(struct FResourceItem& ResourceItem); // Function UMG_ListElement.UMG_ListElement_C.CreateResourceWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CreateOutputItem(struct FItemData& CraftingOutput, struct FText& Name, struct TSoftObjectPtr<UTexture2D>& Icon); // Function UMG_ListElement.UMG_ListElement_C.CreateOutputItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CreateInputItem(struct FItemData& CraftingInput, struct FText& Name, struct TSoftObjectPtr<UTexture2D>& Icon); // Function UMG_ListElement.UMG_ListElement_C.CreateInputItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitialiseToolTip(); // Function UMG_ListElement.UMG_ListElement_C.InitialiseToolTip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct UOverlay* GetHoverCornerWidget(); // Function UMG_ListElement.UMG_ListElement_C.GetHoverCornerWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct UTexture2D* GetResourceImage(enum class EIcarusResourceType Type); // Function UMG_ListElement.UMG_ListElement_C.GetResourceImage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct TArray<struct FResourceItem> GetResourceOutputs(); // Function UMG_ListElement.UMG_ListElement_C.GetResourceOutputs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct TArray<struct FResourceItem> GetResourceInputs(); // Function UMG_ListElement.UMG_ListElement_C.GetResourceInputs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct TArray<struct FItemData> GetProcessorOutputs(); // Function UMG_ListElement.UMG_ListElement_C.GetProcessorOutputs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct TArray<struct FItemData> GetProcessorInputs(); // Function UMG_ListElement.UMG_ListElement_C.GetProcessorInputs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct FProcessorRecipesRowHandle GetProcessorRecipe(); // Function UMG_ListElement.UMG_ListElement_C.GetProcessorRecipe // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG_ListElement.UMG_ListElement_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_ListElement.UMG_ListElement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG_ListElement.UMG_ListElement_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UMG_ListElement.UMG_ListElement_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_ListElement(int32_t EntryPoint); // Function UMG_ListElement.UMG_ListElement_C.ExecuteUbergraph_UMG_ListElement // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void RecipeSelected__DelegateSignature(struct FProcessorRecipesRowHandle Recipe); // Function UMG_ListElement.UMG_ListElement_C.RecipeSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

