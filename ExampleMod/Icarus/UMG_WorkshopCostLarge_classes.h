// WidgetBlueprintGeneratedClass UMG_WorkshopCostLarge.UMG_WorkshopCostLarge_C
// Size: 0x294 (Inherited: 0x260)
struct UUMG_WorkshopCostLarge_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Icon; // 0x268(0x08)
	struct UTextBlock* Number; // 0x270(0x08)
	struct FMetaCurrencyRowHandle Currency; // 0x278(0x18)
	int32_t Amount; // 0x290(0x04)

	void Construct(); // Function UMG_WorkshopCostLarge.UMG_WorkshopCostLarge_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void UpdateValue(int32_t Amount); // Function UMG_WorkshopCostLarge.UMG_WorkshopCostLarge_C.UpdateValue // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_WorkshopCostLarge.UMG_WorkshopCostLarge_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_WorkshopCostLarge(int32_t EntryPoint); // Function UMG_WorkshopCostLarge.UMG_WorkshopCostLarge_C.ExecuteUbergraph_UMG_WorkshopCostLarge // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

