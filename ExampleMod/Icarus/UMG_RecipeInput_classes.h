// WidgetBlueprintGeneratedClass UMG_RecipeInput.UMG_RecipeInput_C
// Size: 0x359 (Inherited: 0x328)
struct UUMG_RecipeInput_C : UUMG_RecipeElementBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UImage* BackgroundImage; // 0x330(0x08)
	struct UImage* IconImage; // 0x338(0x08)
	struct UUMG_RecipeItemAmount_C* UMG_RecipeItemAmount; // 0x340(0x08)
	struct FMulticastInlineDelegate Selected; // 0x348(0x10)
	bool Output; // 0x358(0x01)

	bool IsOutput(); // Function UMG_RecipeInput.UMG_RecipeInput_C.IsOutput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void CurrentAmountUpdated(); // Function UMG_RecipeInput.UMG_RecipeInput_C.CurrentAmountUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateBackgroundImage(struct UTexture2D* Texture, enum class ProcessorPreview Selected); // Function UMG_RecipeInput.UMG_RecipeInput_C.UpdateBackgroundImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Intialise(struct FItemData NewItem, enum class EIcarusResourceType NewResourceType, int32_t Multiplier, bool Output); // Function UMG_RecipeInput.UMG_RecipeInput_C.Intialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_RecipeInput.UMG_RecipeInput_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_RecipeInput.UMG_RecipeInput_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_RecipeInput(int32_t EntryPoint); // Function UMG_RecipeInput.UMG_RecipeInput_C.ExecuteUbergraph_UMG_RecipeInput // (Final|UbergraphFunction) // @ game+0x1be0000
	void Selected__DelegateSignature(struct UUMG_RecipeInput_C* SelectedRecipe); // Function UMG_RecipeInput.UMG_RecipeInput_C.Selected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

