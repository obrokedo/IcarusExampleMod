// WidgetBlueprintGeneratedClass UMG_ArrowSelectionWidget_Text.UMG_ArrowSelectionWidget_Text_C
// Size: 0x2f0 (Inherited: 0x2c0)
struct UUMG_ArrowSelectionWidget_Text_C : UUMG_ArrowSelectionWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UImage* divider_4; // 0x2c8(0x08)
	struct UUMG_BasicButton_2_C* LeftButton; // 0x2d0(0x08)
	struct UUMG_BasicButton_2_C* RightButton; // 0x2d8(0x08)
	struct UTextBlock* Text; // 0x2e0(0x08)
	struct UTextBlock* Text_SettingName; // 0x2e8(0x08)

	void UpdateVisuals(); // Function UMG_ArrowSelectionWidget_Text.UMG_ArrowSelectionWidget_Text_C.UpdateVisuals // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_ArrowSelectionWidget_Text.UMG_ArrowSelectionWidget_Text_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__RightButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_ArrowSelectionWidget_Text.UMG_ArrowSelectionWidget_Text_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_ArrowSelectionWidget_Text.UMG_ArrowSelectionWidget_Text_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_ArrowSelectionWidget_Text(int32_t EntryPoint); // Function UMG_ArrowSelectionWidget_Text.UMG_ArrowSelectionWidget_Text_C.ExecuteUbergraph_UMG_ArrowSelectionWidget_Text // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

