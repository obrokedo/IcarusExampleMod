// WidgetBlueprintGeneratedClass UMG_PhotoUI.UMG_PhotoUI_C
// Size: 0x3a1 (Inherited: 0x260)
struct UUMG_PhotoUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Flash; // 0x268(0x08)
	struct UUMG_KeybindPrompt_C* Ascend; // 0x270(0x08)
	struct UUMG_CameraSetting_LookAtPlayer_C* CameraSetting_LookAtPlayer; // 0x278(0x08)
	struct UUMG_CameraSetting_MaintainHeight_C* CameraSetting_MaintainHeight; // 0x280(0x08)
	struct UW_PostProcessEntry_ToggleCollision_C* CameraSetting_ToggleCollision; // 0x288(0x08)
	struct UHorizontalBox* Controls; // 0x290(0x08)
	struct UUMG_KeybindPrompt_C* Decend; // 0x298(0x08)
	struct UUMG_KeybindPrompt_C* Exit; // 0x2a0(0x08)
	struct UImage* FrameBottomLeft; // 0x2a8(0x08)
	struct UImage* FrameBottomRight; // 0x2b0(0x08)
	struct UImage* FrameTopLeft; // 0x2b8(0x08)
	struct UImage* FrameTopRight; // 0x2c0(0x08)
	struct UImage* Image_195; // 0x2c8(0x08)
	struct UHorizontalBox* KeyPrompts; // 0x2d0(0x08)
	struct UW_PostProcessEntry_BloomIntensity_C* PostProcessSetting_BloomIntensity; // 0x2d8(0x08)
	struct UW_PostProcessEntry_BloomThreshold_C* PostProcessSetting_BloomThreshold; // 0x2e0(0x08)
	struct UW_PostProcessEntry_DoF_C* PostProcessSetting_DoF; // 0x2e8(0x08)
	struct UW_PostProcessEntry_DofFStop_C* PostProcessSetting_DofFStop; // 0x2f0(0x08)
	struct UW_PostProcessEntry_DofRadius_C* PostProcessSetting_DofRadius; // 0x2f8(0x08)
	struct UW_PostProcessEntry_Gamma_C* PostProcessSetting_Gamma; // 0x300(0x08)
	struct UW_PostProcessEntry_MotionBlur_C* PostProcessSetting_MotionBlur; // 0x308(0x08)
	struct UW_PostProcessEntry_Saturation_C* PostProcessSetting_Saturation; // 0x310(0x08)
	struct UW_PostProcessEntry_Vinette_C* PostProcessSetting_Vignette; // 0x318(0x08)
	struct UEditableTextBox* PresetNameBox; // 0x320(0x08)
	struct UUMG_MultiToggle_C* PresetSelector; // 0x328(0x08)
	struct UScrollBox* SettingsContainer; // 0x330(0x08)
	struct UUMG_KeybindPrompt_C* TakePhoto; // 0x338(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; // 0x340(0x08)
	struct UUMG_CameraSetting_Exposure_C* UMG_CameraSetting_Exposure; // 0x348(0x08)
	struct UUMG_CameraSetting_FOV_C* UMG_CameraSetting_FOV; // 0x350(0x08)
	struct UUMG_CameraSetting_Resolution_C* UMG_CameraSetting_Resolution; // 0x358(0x08)
	struct UUMG_CameraSetting_Smoothing_C* UMG_CameraSetting_Smoothing; // 0x360(0x08)
	struct UUMG_CameraSetting_Speed_C* UMG_CameraSetting_Speed; // 0x368(0x08)
	struct APawn* SpectatorActor; // 0x370(0x08)
	struct TArray<struct UW_PostProcessEntry_C*> SettingsEntries; // 0x378(0x10)
	struct FMulticastInlineDelegate PostProcessSettingsUpdated; // 0x388(0x10)
	struct UBP_SpectatorSaveGame_C* SaveGame; // 0x398(0x08)
	bool ControlsVisible; // 0x3a0(0x01)

	void PhotoTaken(); // Function UMG_PhotoUI.UMG_PhotoUI_C.PhotoTaken // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ToggleControlsVisible(); // Function UMG_PhotoUI.UMG_PhotoUI_C.ToggleControlsVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InputChangePreset(int32_t Index); // Function UMG_PhotoUI.UMG_PhotoUI_C.InputChangePreset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ChangePreset(int32_t NewIndex); // Function UMG_PhotoUI.UMG_PhotoUI_C.ChangePreset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SaveCurrentPreset(); // Function UMG_PhotoUI.UMG_PhotoUI_C.SaveCurrentPreset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetEntryValuesFromPreset(struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset, bool Reset); // Function UMG_PhotoUI.UMG_PhotoUI_C.SetEntryValuesFromPreset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ApplySaveGame(); // Function UMG_PhotoUI.UMG_PhotoUI_C.ApplySaveGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FillEmptySaveGame(); // Function UMG_PhotoUI.UMG_PhotoUI_C.FillEmptySaveGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateCurrentPresetName(int32_t PresetIndex); // Function UMG_PhotoUI.UMG_PhotoUI_C.UpdateCurrentPresetName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetPresetName(struct FText PresetName); // Function UMG_PhotoUI.UMG_PhotoUI_C.SetPresetName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SavePresetToSaveGame(int32_t Index); // Function UMG_PhotoUI.UMG_PhotoUI_C.SavePresetToSaveGame // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetPresetFromSaveGame(int32_t Index, struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData>& Preset); // Function UMG_PhotoUI.UMG_PhotoUI_C.GetPresetFromSaveGame // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Get Preset Name from Save Game(int32_t Index, struct FText& PresetName); // Function UMG_PhotoUI.UMG_PhotoUI_C.Get Preset Name from Save Game // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitSaveGame(); // Function UMG_PhotoUI.UMG_PhotoUI_C.InitSaveGame // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EntryFunction(struct FString Param); // Function UMG_PhotoUI.UMG_PhotoUI_C.EntryFunction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSettingChanged(); // Function UMG_PhotoUI.UMG_PhotoUI_C.OnSettingChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitEntries(); // Function UMG_PhotoUI.UMG_PhotoUI_C.InitEntries // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_PhotoUI.UMG_PhotoUI_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void SpectatorDestroyed(struct AActor* DestroyedActor); // Function UMG_PhotoUI.UMG_PhotoUI_C.SpectatorDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetGameFocus(); // Function UMG_PhotoUI.UMG_PhotoUI_C.SetGameFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_MultiToggle_K2Node_ComponentBoundEvent_1_MultiToggleStateChanged__DelegateSignature(int32_t PreviousToggleIndex, int32_t CurrentToggleIndex); // Function UMG_PhotoUI.UMG_PhotoUI_C.BndEvt__UMG_MultiToggle_K2Node_ComponentBoundEvent_1_MultiToggleStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_PhotoUI_PresetNameBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function UMG_PhotoUI.UMG_PhotoUI_C.BndEvt__UMG_PhotoUI_PresetNameBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_PhotoUI_UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_PhotoUI.UMG_PhotoUI_C.BndEvt__UMG_PhotoUI_UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_PhotoUI(int32_t EntryPoint); // Function UMG_PhotoUI.UMG_PhotoUI_C.ExecuteUbergraph_UMG_PhotoUI // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void PostProcessSettingsUpdated__DelegateSignature(struct FPostProcessSettings Settings); // Function UMG_PhotoUI.UMG_PhotoUI_C.PostProcessSettingsUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

