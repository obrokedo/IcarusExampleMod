// WidgetBlueprintGeneratedClass UMG_SettingsSection.UMG_SettingsSection_C
// Size: 0x358 (Inherited: 0x2e8)
struct UUMG_SettingsSection_C : USettingsSection {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UHorizontalBox* ApplyBox; // 0x2f0(0x08)
	struct UUMG_BasicButton_2_C* ApplyButton; // 0x2f8(0x08)
	struct UUMG_SettingTooltipHover_C* Help; // 0x300(0x08)
	struct UUMG_BasicButton_2_C* ResetButton; // 0x308(0x08)
	struct UVerticalBox* SettingArea; // 0x310(0x08)
	struct UVerticalBox* SettingBox; // 0x318(0x08)
	struct UTextBlock* Title; // 0x320(0x08)
	struct FMulticastInlineDelegate SettingOptionHovered; // 0x328(0x10)
	struct FMulticastInlineDelegate SettingOptionUnhovered; // 0x338(0x10)
	bool Odd; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct UNamedSlot* ConfirmationSlot; // 0x350(0x08)

	void Set Requirements(); // Function UMG_SettingsSection.UMG_SettingsSection_C.Set Requirements // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct UUMG_SettingRowBorder_C* CreateOptionBorder(struct APlayerController* OwningPlayer); // Function UMG_SettingsSection.UMG_SettingsSection_C.CreateOptionBorder // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddNewWidget(struct USettingWidget* SettingWidget); // Function UMG_SettingsSection.UMG_SettingsSection_C.AddNewWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetDisplayName(struct FText& DisplayName); // Function UMG_SettingsSection.UMG_SettingsSection_C.SetDisplayName // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void PostSetup(); // Function UMG_SettingsSection.UMG_SettingsSection_C.PostSetup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Setting Option Hovered(struct UUMG_SettingRowBorder_C* Setting Option); // Function UMG_SettingsSection.UMG_SettingsSection_C.Setting Option Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setting Option Unhovered(struct UUMG_SettingRowBorder_C* Setting Option); // Function UMG_SettingsSection.UMG_SettingsSection_C.Setting Option Unhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_SettingsSection.UMG_SettingsSection_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_SettingsSection.UMG_SettingsSection_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void DirtySection(); // Function UMG_SettingsSection.UMG_SettingsSection_C.DirtySection // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnRefresh(); // Function UMG_SettingsSection.UMG_SettingsSection_C.OnRefresh // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void On Settings Updated(); // Function UMG_SettingsSection.UMG_SettingsSection_C.On Settings Updated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ApplySettings(); // Function UMG_SettingsSection.UMG_SettingsSection_C.ApplySettings // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void On Confirmation Result(bool Result); // Function UMG_SettingsSection.UMG_SettingsSection_C.On Confirmation Result // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RevertSettings(); // Function UMG_SettingsSection.UMG_SettingsSection_C.RevertSettings // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void AddWidgetToSection(struct USettingWidget* Widget); // Function UMG_SettingsSection.UMG_SettingsSection_C.AddWidgetToSection // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ConfirmSettings(); // Function UMG_SettingsSection.UMG_SettingsSection_C.ConfirmSettings // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_SettingsSection(int32_t EntryPoint); // Function UMG_SettingsSection.UMG_SettingsSection_C.ExecuteUbergraph_UMG_SettingsSection // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void SettingOptionUnhovered__DelegateSignature(struct UUMG_SettingRowBorder_C* Setting Option); // Function UMG_SettingsSection.UMG_SettingsSection_C.SettingOptionUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SettingOptionHovered__DelegateSignature(struct UUMG_SettingRowBorder_C* Setting Option); // Function UMG_SettingsSection.UMG_SettingsSection_C.SettingOptionHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

