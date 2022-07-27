// WidgetBlueprintGeneratedClass UMG_CharacterCreation.UMG_CharacterCreation_C
// Size: 0x401 (Inherited: 0x260)
struct UUMG_CharacterCreation_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* BlackFadeIn; // 0x268(0x08)
	struct UImage* Angle; // 0x270(0x08)
	struct UImage* Angle_2; // 0x278(0x08)
	struct UImage* Angle_3; // 0x280(0x08)
	struct UImage* Angle_4; // 0x288(0x08)
	struct UImage* Angle_5; // 0x290(0x08)
	struct UImage* Angle_6; // 0x298(0x08)
	struct UBorder* BlackFadeBorder; // 0x2a0(0x08)
	struct UImage* BlackGradient; // 0x2a8(0x08)
	struct UUMG_CharacterSetting_Visual_C* BodySelection; // 0x2b0(0x08)
	struct UUMG_CharacterSetting_GridBase_C* CapColorSelectionGrid; // 0x2b8(0x08)
	struct UUMG_BasicButton_2_C* CreateButton; // 0x2c0(0x08)
	struct UEditableTextBox* CreateCharacterName; // 0x2c8(0x08)
	struct UWidgetSwitcher* CustomizationOptions; // 0x2d0(0x08)
	struct UUMG_CharacterSetting_Visual_C* DecalSelection; // 0x2d8(0x08)
	struct UImage* divider; // 0x2e0(0x08)
	struct UImage* divider_2; // 0x2e8(0x08)
	struct UImage* EditIcon; // 0x2f0(0x08)
	struct UUMG_CharacterSetting_GridBase_C* EyeColourSelectionGrid; // 0x2f8(0x08)
	struct UUMG_CharacterSetting_Visual_C* FacialHairSelection; // 0x300(0x08)
	struct UUMG_CharacterSetting_Visual_C* HairStyleSelection; // 0x308(0x08)
	struct UUMG_CharacterSetting_Visual_C* HeadSelection; // 0x310(0x08)
	struct UGridPanel* HeadSelectionGrid; // 0x318(0x08)
	struct UUMG_CharacterSetting_Visual_C* ScarSelection; // 0x320(0x08)
	struct UUMG_CharacterSetting_GridBase_C* SkinToneSelectionGrid; // 0x328(0x08)
	struct UUMG_CharacterSetting_GridBase_C* SuitColorSelectionGrid; // 0x330(0x08)
	struct UImage* SuitImage; // 0x338(0x08)
	struct UUMG_CharacterSetting_Visual_C* TattooSelection; // 0x340(0x08)
	struct UUMG_CharacterSetting_Voice_C* VoiceSelection; // 0x348(0x08)
	struct FMulticastInlineDelegate CharacterCustomizationUpdated; // 0x350(0x10)
	enum class ECharacterBodyType CurrentBodyType; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct FText TypedText; // 0x368(0x18)
	struct FPreviewCameraSettingsEnum CurrentFocus; // 0x380(0x10)
	int32_t NameLengthLimit; // 0x390(0x04)
	enum class ECharacterCustomisationContext CustomisationContext; // 0x394(0x01)
	char pad_395[0x3]; // 0x395(0x03)
	struct FMulticastInlineDelegate CustomisationCompleted; // 0x398(0x10)
	struct FCharacterCosmetics InitialCosmetics; // 0x3a8(0x34)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct FMulticastInlineDelegate CharacterCreationRequest; // 0x3e0(0x10)
	struct FMulticastInlineDelegate RequestCosmeticsUpdate; // 0x3f0(0x10)
	bool IsGeneratingCustomisationOptions; // 0x400(0x01)

	void GetCameraFocus(struct FPreviewCameraSettingsEnum& CameraFocus); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.GetCameraFocus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetCosmeticData(struct FCharacterCosmetics& CosmeticData); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.GetCosmeticData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetInitialCosmetics(struct FCharacterCosmetics InitialCosmetics); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.SetInitialCosmetics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetInitialCosmeticsForCategory(enum class ECharacterOptionCategory CategoryType, struct FCharacterCreationDataRowHandle& CosmeticDataRow); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.GetInitialCosmeticsForCategory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct UUMG_CharacterSetting_Base_C* GetSettingsWidgetForCategory(enum class ECharacterOptionCategory CategoryType); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.GetSettingsWidgetForCategory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void UpdateDefaultSelections(); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.UpdateDefaultSelections // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCharacterCosmeticsUpdated(bool Success, struct FOnlineProfileCharacter UpdatedCharacter); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.OnCharacterCosmeticsUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SendCosmeticUpdateRequest(); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.SendCosmeticUpdateRequest // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void VerifyCustomisationOptionContexts(); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.VerifyCustomisationOptionContexts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FString GetSelectedColorFromPanel(struct UPanelWidget* Target); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.GetSelectedColorFromPanel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GenerateCustomisationOptions(); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.GenerateCustomisationOptions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateBodyType(); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.UpdateBodyType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SelectionUpdated(int32_t Index, struct FPreviewCameraSettingsEnum NewFocus); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.SelectionUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GridSelectionUpdated(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.GridSelectionUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FReqCreateCharacter GetCharacterResult(); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.GetCharacterResult // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void CreateCharacterResult(bool Success); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.CreateCharacterResult // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SendCharacterCreationRequest(); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.SendCharacterCreationRequest // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void NameChanged(struct FText& Text); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.NameChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_CharacterCreation(int32_t EntryPoint); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.ExecuteUbergraph_UMG_CharacterCreation // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void RequestCosmeticsUpdate__DelegateSignature(struct FReqUpdateCosmetics Request, int32_t Retries); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.RequestCosmeticsUpdate__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CharacterCreationRequest__DelegateSignature(struct FReqCreateCharacter CharacterResult, int32_t NumRetries, bool SelectNewCharacter); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.CharacterCreationRequest__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CustomisationCompleted__DelegateSignature(bool Success, struct FOnlineProfileCharacter NewCharacterInfo); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.CustomisationCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CharacterCustomizationUpdated__DelegateSignature(struct FCharacterCosmetics CharacterData); // Function UMG_CharacterCreation.UMG_CharacterCreation_C.CharacterCustomizationUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

