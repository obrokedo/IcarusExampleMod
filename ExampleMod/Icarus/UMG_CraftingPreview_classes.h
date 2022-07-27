// WidgetBlueprintGeneratedClass UMG_CraftingPreview.UMG_CraftingPreview_C
// Size: 0x298 (Inherited: 0x260)
struct UUMG_CraftingPreview_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_55; // 0x268(0x08)
	struct UVerticalBox* NoRecipeSelected; // 0x270(0x08)
	struct UTextBlock* RecipeName; // 0x278(0x08)
	struct UUMG_RecipeElement_C* UMG_RecipeElement; // 0x280(0x08)
	struct FMulticastInlineDelegate Clicked; // 0x288(0x10)

	void Recipe(struct FProcessorRecipesRowHandle& Recipe); // Function UMG_CraftingPreview.UMG_CraftingPreview_C.Recipe // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetRecipe(struct FProcessorRecipesRowHandle& Recipe); // Function UMG_CraftingPreview.UMG_CraftingPreview_C.GetRecipe // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Set Recipe(struct FProcessorRecipesRowHandle Recipe); // Function UMG_CraftingPreview.UMG_CraftingPreview_C.Set Recipe // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_CraftingPreview.UMG_CraftingPreview_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void RecipeClicked(struct FProcessorRecipesRowHandle Recipe); // Function UMG_CraftingPreview.UMG_CraftingPreview_C.RecipeClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_CraftingPreview(int32_t EntryPoint); // Function UMG_CraftingPreview.UMG_CraftingPreview_C.ExecuteUbergraph_UMG_CraftingPreview // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void Clicked__DelegateSignature(); // Function UMG_CraftingPreview.UMG_CraftingPreview_C.Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

