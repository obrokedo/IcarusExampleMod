// WidgetBlueprintGeneratedClass UMG_SettingControl_Continuous.
// Size: 0x3b5 (Inherited: 0x380)
struct U : USettingWidget_ContinuousRange {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct UTextBlock* SettingText; // 0x388(0x08)
	struct USlider* ; // 0x390(0x08)
	struct UProgressBar* ; // 0x398(0x08)
	float MinValue; // 0x3a0(0x04)
	float MaxValue; // 0x3a4(0x04)
	int32_t ; // 0x3a8(0x04)
	float StepSize; // 0x3ac(0x04)
	float CurrentValue; // 0x3b0(0x04)
	bool ; // 0x3b4(0x01)

	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // Function UMG_SettingControl_Continuous..GetFocusWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void (bool ForceRefresh); // Function UMG_SettingControl_Continuous.. // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void (float Value); // Function UMG_SettingControl_Continuous.. // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void (float Value); // Function UMG_SettingControl_Continuous.. // (BlueprintEvent) // @ game+0x1be0000
	void (); // Function UMG_SettingControl_Continuous.. // (BlueprintEvent) // @ game+0x1be0000
	void SetStepSize(float StepSize); // Function UMG_SettingControl_Continuous..SetStepSize // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void SetRange(float MinVal, float MaxVal); // Function UMG_SettingControl_Continuous..SetRange // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Setup(); // Function UMG_SettingControl_Continuous..Setup // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetValue(float Value, bool bForceRefresh); // Function UMG_SettingControl_Continuous..SetValue // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Apply(); // Function UMG_SettingControl_Continuous..Apply // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetApplyDuringDrag(bool bApplyDuringDrag); // Function UMG_SettingControl_Continuous..SetApplyDuringDrag // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void (int32_t EntryPoint); // Function UMG_SettingControl_Continuous.. // (Final|UbergraphFunction) // @ game+0x1be0000
};

