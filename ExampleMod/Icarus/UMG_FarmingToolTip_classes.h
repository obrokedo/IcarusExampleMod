// WidgetBlueprintGeneratedClass UMG_FarmingToolTip.UMG_FarmingToolTip_C
// Size: 0x2f0 (Inherited: 0x2b5)
struct UUMG_FarmingToolTip_C : UW_ProjectionWidget_C {
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UBackgroundBlur* BackgroundBlur_1; // 0x2c0(0x08)
	struct UOverlay* MainOverlay; // 0x2c8(0x08)
	struct UImage* Pointer; // 0x2d0(0x08)
	struct URetainerBox* RetainerBox_1; // 0x2d8(0x08)
	struct AIcarusActor* Cached Current Item; // 0x2e0(0x08)
	struct UUMG_DeployableModifiersList_C* ModifierList; // 0x2e8(0x08)

	void UpdateVisuals(); // Function UMG_FarmingToolTip.UMG_FarmingToolTip_C.UpdateVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TickWidget(); // Function UMG_FarmingToolTip.UMG_FarmingToolTip_C.TickWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_FarmingToolTip.UMG_FarmingToolTip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_FarmingToolTip(int32_t EntryPoint); // Function UMG_FarmingToolTip.UMG_FarmingToolTip_C.ExecuteUbergraph_UMG_FarmingToolTip // (Final|UbergraphFunction) // @ game+0x1be0000
};

