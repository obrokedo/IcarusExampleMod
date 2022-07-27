// WidgetBlueprintGeneratedClass UMG_FuelElement.UMG_FuelElement_C
// Size: 0x329 (Inherited: 0x260)
struct UUMG_FuelElement_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* IconImage; // 0x268(0x08)
	struct FMulticastInlineDelegate Selected; // 0x270(0x10)
	struct FItemData Item; // 0x280(0xa0)
	struct AActor* NewLinkedActor; // 0x320(0x08)
	enum class EIcarusResourceType ResourceType; // 0x328(0x01)

	void UpdateState(enum class ProcessorPreview Selected); // Function UMG_FuelElement.UMG_FuelElement_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Intialise(struct FItemData NewItem, enum class EIcarusResourceType NewResourceType); // Function UMG_FuelElement.UMG_FuelElement_C.Intialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_FuelElement.UMG_FuelElement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_FuelElement(int32_t EntryPoint); // Function UMG_FuelElement.UMG_FuelElement_C.ExecuteUbergraph_UMG_FuelElement // (Final|UbergraphFunction) // @ game+0x1be0000
	void Selected__DelegateSignature(struct UUMG_RecipeInput_C* SelectedRecipe); // Function UMG_FuelElement.UMG_FuelElement_C.Selected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

