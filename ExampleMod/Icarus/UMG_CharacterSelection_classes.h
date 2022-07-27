// WidgetBlueprintGeneratedClass UMG_CharacterSelection.UMG_CharacterSelection_C
// Size: 0x5e4 (Inherited: 0x260)
struct UUMG_CharacterSelection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* CharacterAbandonedText; // 0x268(0x08)
	struct UUniformGridPanel* CharacterContainer; // 0x270(0x08)
	struct UVerticalBox* CharacterSelectionBox; // 0x278(0x08)
	struct UUMG_BasicButton_2_C* DeleteButton; // 0x280(0x08)
	struct UImage* Dividers; // 0x288(0x08)
	struct UImage* Dividers_2; // 0x290(0x08)
	struct UTextBlock* DurationTime; // 0x298(0x08)
	struct UTextBlock* Insurance; // 0x2a0(0x08)
	struct UTextBlock* NoRespawns; // 0x2a8(0x08)
	struct UUMG_BasicButton_2_C* PlayButton; // 0x2b0(0x08)
	struct UVerticalBox* PlayerList; // 0x2b8(0x08)
	struct UBorder* PlayFrame; // 0x2c0(0x08)
	struct UTextBlock* ProspectDifficulty; // 0x2c8(0x08)
	struct UVerticalBox* ProspectInfoBox; // 0x2d0(0x08)
	struct UTextBlock* ProspectName; // 0x2d8(0x08)
	struct UTextBlock* ProspectName_2; // 0x2e0(0x08)
	struct UUMG_BasicButton_2_C* ResetCharacter; // 0x2e8(0x08)
	struct USizeBox* SelectedCharacterInfo; // 0x2f0(0x08)
	struct UImage* Shadow; // 0x2f8(0x08)
	struct UImage* SuitImage; // 0x300(0x08)
	struct UUMG_CreateNewCharacterButton_C* UMG_CreateNewCharacterButton; // 0x308(0x08)
	struct FMulticastInlineDelegate OnRequestCharacterSelect; // 0x310(0x10)
	int32_t SelectedCharacterIndex; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct FMulticastInlineDelegate OnRequestCharacterDelete; // 0x328(0x10)
	int32_t NumColumns; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct FMulticastInlineDelegate CreateCharacter; // 0x340(0x10)
	int32_t MaxNumCharacters; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct FOnlineProfileCharacter SelectedCharacter; // 0x358(0xa0)
	bool HasSelectedCharacter; // 0x3f8(0x01)
	bool SelectedCharacterLockedToProspect; // 0x3f9(0x01)
	char pad_3FA[0x6]; // 0x3fa(0x06)
	struct FMulticastInlineDelegate SelectedCharacterUpdated; // 0x400(0x10)
	struct ABP_PlayerPreview_HAB_Selection_C* PlayerPreview; // 0x410(0x08)
	struct FPreviewCameraSettingsEnum CurrentCameraFocus; // 0x418(0x10)
	int32_t ProspectEndTime; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct FString JoinLobbyName; // 0x430(0x10)
	struct FFProspectServerInfo ProspectInfo; // 0x440(0x198)
	struct UUMG_DeleteCharacterName_C* DeleteCharacterInputField; // 0x5d8(0x08)
	int32_t RemainingTime; // 0x5e0(0x04)

	void GetCameraFocus(struct FPreviewCameraSettingsEnum& CameraFocus); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.GetCameraFocus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetCosmeticData(struct FCharacterCosmetics& CosmeticData); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.GetCosmeticData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateLobby(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.UpdateLobby // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FindActiveProspectForCharacter(struct FOnlineProfileCharacter OnlineCharacterProfile, struct TArray<struct FProspectInfo>& ProspectArray, struct FProspectInfo& ProspectInfo); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.FindActiveProspectForCharacter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct FText Get_DurationTime_Text(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.Get_DurationTime_Text // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void SetCharacterVoiceParam(struct FCharacterVoicesRowHandle Voice); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.SetCharacterVoiceParam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ClearSelectedCharacter(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.ClearSelectedCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetCreationRowFromItem(struct FMetaItem Item, struct FCharacterCreationDataRowHandle& Row); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.GetCreationRowFromItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void CharacterPlay(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.CharacterPlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CalculatePlayerLevelFromExp(int32_t Experience, int32_t& Level); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.CalculatePlayerLevelFromExp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetButtonRowIndex(struct UWidget* Button, int32_t& RowIndex, bool& Found); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.GetButtonRowIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DeleteSelectedCharacter(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.DeleteSelectedCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CharacterSelected(struct UUMG_CharacterProfileSlot_C* Button); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.CharacterSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GenerateCharacterSelectList(struct TArray<struct FOnlineProfileCharacter>& CharacterArray, struct TArray<struct FProspectInfo>& ActiveProspectArray); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.GenerateCharacterSelectList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFailure_C114BFB749A23B1B26FC30A1C3BB6795(struct FErrorCodesEnum Result); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnFailure_C114BFB749A23B1B26FC30A1C3BB6795 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSuccess_C114BFB749A23B1B26FC30A1C3BB6795(struct FErrorCodesEnum Result); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnSuccess_C114BFB749A23B1B26FC30A1C3BB6795 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature(struct UUMG_CreateNewCharacterButton_C* Input); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.BndEvt__UMG_CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void CancelDeleteCharacter(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.CancelDeleteCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TogglePlayButtonEnabled(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.TogglePlayButtonEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ResetCharacter_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.BndEvt__ResetCharacter_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void Cancel Reset Character(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.Cancel Reset Character // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RemoveCharacterFromProspects(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.RemoveCharacterFromProspects // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ConfirmDeleteSelectedCharacter(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.ConfirmDeleteSelectedCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateDeleteCharacterPrompt(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.UpdateDeleteCharacterPrompt // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnDeleteCharacterInputFieldTextChanged(struct FText& Text); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnDeleteCharacterInputFieldTextChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_CharacterSelection(int32_t EntryPoint); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.ExecuteUbergraph_UMG_CharacterSelection // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void SelectedCharacterUpdated__DelegateSignature(struct FOnlineProfileCharacter SelectedCharacter); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.SelectedCharacterUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CreateCharacter__DelegateSignature(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.CreateCharacter__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRequestCharacterDelete__DelegateSignature(struct FOnlineProfileCharacter Character); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnRequestCharacterDelete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRequestCharacterSelect__DelegateSignature(struct FOnlineProfileCharacter Character); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnRequestCharacterSelect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

