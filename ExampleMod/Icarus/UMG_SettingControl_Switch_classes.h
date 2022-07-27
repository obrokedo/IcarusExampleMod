// WidgetBlueprintGeneratedClass UMG_SettingControl_Switch.
// Size: 0x3c8 (Inherited: 0x380)
struct U : USettingWidget_Switch {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct UHorizontalBox* ToggleContainer; // 0x388(0x08)
	struct TArray<struct FText> ToggleOptions; // 0x390(0x10)
	struct TArray<struct FText> OptionToolTips; // 0x3a0(0x10)
	int32_t DefaultToggleIndex; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct UUMG_ToggleButtonBase_C* ToggleWidgetClass; // 0x3b8(0x08)
	int32_t ActiveToggleIndex; // 0x3c0(0x04)
	float WidthOverride; // 0x3c4(0x04)

	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // Function UMG_SettingControl_Switch..GetFocusWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetToggleOption(int32_t ToggleIndex); // Function UMG_SettingControl_Switch..SetToggleOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ConstructToggles(); // Function UMG_SettingControl_Switch..ConstructToggles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ToggleButtonToggled(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_SettingControl_Switch..ToggleButtonToggled // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetLabels(struct TArray<struct FText>& Labels); // Function UMG_SettingControl_Switch..SetLabels // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void SetValueIndex(int32_t Index); // Function UMG_SettingControl_Switch..SetValueIndex // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Apply(); // Function UMG_SettingControl_Switch..Apply // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void (int32_t EntryPoint); // Function UMG_SettingControl_Switch.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

