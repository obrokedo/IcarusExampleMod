// WidgetBlueprintGeneratedClass UMG_SettingRowBorder.UMG_SettingRowBorder_C
// Size: 0x331 (Inherited: 0x288)
struct UUMG_SettingRowBorder_C : USettingRowBorder {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UBorder* Border_84; // 0x290(0x08)
	struct UImage* DarkTint; // 0x298(0x08)
	struct UUMG_SettingTooltipHover_C* Help; // 0x2a0(0x08)
	struct UButton* HoverButton; // 0x2a8(0x08)
	struct UBorder* NameBorder; // 0x2b0(0x08)
	struct USizeBox* OuterSizeBox; // 0x2b8(0x08)
	struct UUMG_SettingTooltipRestart_C* Restart; // 0x2c0(0x08)
	struct UNamedSlot* SettingsControlSlot; // 0x2c8(0x08)
	struct UTextBlock* SettingText; // 0x2d0(0x08)
	struct FText SettingOptionText; // 0x2d8(0x18)
	struct FText SettingOptionDescription; // 0x2f0(0x18)
	float SettingControlFill; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FMulticastInlineDelegate SettingOptionHovered; // 0x310(0x10)
	struct FMulticastInlineDelegate SettingOptionUnhovered; // 0x320(0x10)
	bool ManualMode; // 0x330(0x01)

	void Set Requirements(); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.Set Requirements // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.GetFocusWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Post Setup(); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.Post Setup // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Update Enabled State(); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.Update Enabled State // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HideName(); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.HideName // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup Restart Widget(); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.Setup Restart Widget // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void On Restart Requested(struct FName SettingName); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.On Restart Requested // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Connect To Restart Events(); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.Connect To Restart Events // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_SettingRowBorder(int32_t EntryPoint); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.ExecuteUbergraph_UMG_SettingRowBorder // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void SettingOptionUnhovered__DelegateSignature(struct UUMG_SettingRowBorder_C* SettingOption); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.SettingOptionUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SettingOptionHovered__DelegateSignature(struct UUMG_SettingRowBorder_C* SettingOption); // Function UMG_SettingRowBorder.UMG_SettingRowBorder_C.SettingOptionHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

