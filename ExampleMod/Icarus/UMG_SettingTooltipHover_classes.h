// WidgetBlueprintGeneratedClass UMG_SettingTooltipHover.UMG_SettingTooltipHover_C
// Size: 0x298 (Inherited: 0x260)
struct UUMG_SettingTooltipHover_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* HoverButton; // 0x268(0x08)
	struct UUMG_SettingTooltipText_C* TextWidget; // 0x270(0x08)
	struct TArray<bool> States; // 0x278(0x10)
	struct TArray<struct FText> Descriptions; // 0x288(0x10)

	void Construct(); // Function UMG_SettingTooltipHover.UMG_SettingTooltipHover_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_SettingTooltipHover.UMG_SettingTooltipHover_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_SettingTooltipHover.UMG_SettingTooltipHover_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void Set Requirements(struct TArray<struct FText>& Descriptions, struct TArray<bool>& States); // Function UMG_SettingTooltipHover.UMG_SettingTooltipHover_C.Set Requirements // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_SettingTooltipHover(int32_t EntryPoint); // Function UMG_SettingTooltipHover.UMG_SettingTooltipHover_C.ExecuteUbergraph_UMG_SettingTooltipHover // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

