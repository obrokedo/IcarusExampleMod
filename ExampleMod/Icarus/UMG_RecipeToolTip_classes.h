// WidgetBlueprintGeneratedClass UMG_RecipeToolTip.UMG_RecipeToolTip_C
// Size: 0x300 (Inherited: 0x260)
struct UUMG_RecipeToolTip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* divider; // 0x268(0x08)
	struct UImage* divider_2; // 0x270(0x08)
	struct UHorizontalBox* HorizontalBox_177; // 0x278(0x08)
	struct UTextBlock* Name; // 0x280(0x08)
	struct UBorder* NameBorder; // 0x288(0x08)
	struct USpacer* Spacer; // 0x290(0x08)
	struct USpacer* Spacer_396; // 0x298(0x08)
	struct UTextBlock* TextBlock_217; // 0x2a0(0x08)
	struct UUMG_ItemStats_C* UMG_ItemStats_C_4; // 0x2a8(0x08)
	struct FProcessingItem Recipe; // 0x2b0(0x28)
	struct AActor* LinkedActor; // 0x2d8(0x08)
	struct TArray<struct UUMG_RecipeToolTipElement_C*> ToolTipElements; // 0x2e0(0x10)
	bool UpdateStateRecipe; // 0x2f0(0x01)
	bool ShowOutput; // 0x2f1(0x01)
	char pad_2F2[0x6]; // 0x2f2(0x06)
	struct AActor* CraftingActor; // 0x2f8(0x08)

	void PreConstruct(bool IsDesignTime); // Function UMG_RecipeToolTip.UMG_RecipeToolTip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_RecipeToolTip.UMG_RecipeToolTip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void UpdateTrigger(); // Function UMG_RecipeToolTip.UMG_RecipeToolTip_C.UpdateTrigger // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_RecipeToolTip.UMG_RecipeToolTip_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void FullUpdate(); // Function UMG_RecipeToolTip.UMG_RecipeToolTip_C.FullUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_RecipeToolTip(int32_t EntryPoint); // Function UMG_RecipeToolTip.UMG_RecipeToolTip_C.ExecuteUbergraph_UMG_RecipeToolTip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

