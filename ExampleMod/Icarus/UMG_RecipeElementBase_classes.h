// WidgetBlueprintGeneratedClass UMG_RecipeElementBase.UMG_RecipeElementBase_C
// Size: 0x328 (Inherited: 0x260)
struct UUMG_RecipeElementBase_C : UUserWidget {
	struct FItemData Item; // 0x260(0xa0)
	int32_t CurrentAmount; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	struct AActor* LinkedActor; // 0x308(0x08)
	struct UUMG_RecipeElementTooltip_C* HolographicPreview; // 0x310(0x08)
	bool DisableTooltip; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	int32_t Multiplier; // 0x31c(0x04)
	enum class EIcarusResourceType ResourceType; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	int32_t RequiredResourceAmount; // 0x324(0x04)

	void GetPlayerInventories(struct TArray<struct UInventory*>& Array); // Function UMG_RecipeElementBase.UMG_RecipeElementBase_C.GetPlayerInventories // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool IsOutput(); // Function UMG_RecipeElementBase.UMG_RecipeElementBase_C.IsOutput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	bool IsResource(); // Function UMG_RecipeElementBase.UMG_RecipeElementBase_C.IsResource // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void CurrentAmountUpdated(); // Function UMG_RecipeElementBase.UMG_RecipeElementBase_C.CurrentAmountUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetCurrentAmount(int32_t CurrentAmount); // Function UMG_RecipeElementBase.UMG_RecipeElementBase_C.SetCurrentAmount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateBackgroundImage(struct UTexture2D* Texture, enum class ProcessorPreview Selected); // Function UMG_RecipeElementBase.UMG_RecipeElementBase_C.UpdateBackgroundImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateStateRecipe(); // Function UMG_RecipeElementBase.UMG_RecipeElementBase_C.UpdateStateRecipe // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

