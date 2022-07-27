// WidgetBlueprintGeneratedClass UMG_ConnectingOverlay.UMG_ConnectingOverlay_C
// Size: 0x389 (Inherited: 0x260)
struct UUMG_ConnectingOverlay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ShowCompetitionPanel; // 0x268(0x08)
	struct UWidgetAnimation* HideConnectingPrompt; // 0x270(0x08)
	struct UWidgetAnimation* ShowSidePanel; // 0x278(0x08)
	struct UWidgetAnimation* ShowAnnouncementPanel; // 0x280(0x08)
	struct UWidgetAnimation* ShowMenuButtons; // 0x288(0x08)
	struct UWidgetAnimation* FadeOut; // 0x290(0x08)
	struct UImage* AnnouncementBlack; // 0x298(0x08)
	struct UUMG_CloseButton_2_C* AnnouncementScreenCloseButton; // 0x2a0(0x08)
	struct UUMG_BasicButton_2_C* ButtonCredits; // 0x2a8(0x08)
	struct UUMG_BasicButton_2_C* ButtonExit; // 0x2b0(0x08)
	struct UUMG_BasicButton_2_C* ButtonOffline; // 0x2b8(0x08)
	struct UUMG_BasicButton_2_C* ButtonPlay; // 0x2c0(0x08)
	struct UUMG_BasicButton_2_C* ButtonSettings; // 0x2c8(0x08)
	struct UHorizontalBox* ConnectingHbox; // 0x2d0(0x08)
	struct UBorder* ConnectingPromptBorder; // 0x2d8(0x08)
	struct UUMG_ExternalTitleButton_C* Discord; // 0x2e0(0x08)
	struct UUMG_ExternalTitleButton_C* Feedback; // 0x2e8(0x08)
	struct UImage* Gradient; // 0x2f0(0x08)
	struct UImage* Logo; // 0x2f8(0x08)
	struct UVerticalBox* MainButtonVertBox; // 0x300(0x08)
	struct UUMG_ExternalTitleButton_C* PatchNotes; // 0x308(0x08)
	struct UUMG_BasicButton_2_C* ShowRoadmapButton; // 0x310(0x08)
	struct UImage* SpaceFiller; // 0x318(0x08)
	struct UTextBlock* TextBlock_RetryStatus; // 0x320(0x08)
	struct UTextBlock* TextBlock_Status; // 0x328(0x08)
	struct UUMG_AnnouncementPanel_C* UMG_AnnouncementPanel; // 0x330(0x08)
	struct UUMG_AnnouncementScreenBetaOffline_C* UMG_AnnouncementScreenBetaOffline; // 0x338(0x08)
	struct UUMG_CompetitionPanel_C* UMG_CompetitionPanel; // 0x340(0x08)
	struct UUMG_CreditsPage_C* UMG_CreditsPage_C_3; // 0x348(0x08)
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; // 0x350(0x08)
	struct UUMG_SettingsMenu_C* UMG_SettingsMenu; // 0x358(0x08)
	struct UUMG_TitleScreenTrailerButton_C* UMG_TitleScreenTrailerButton; // 0x360(0x08)
	struct UIcarusMessageListeners* IcarusMessageListener; // 0x368(0x08)
	struct FText RetryStatusFormat; // 0x370(0x18)
	bool ContentServerConnectionComplete; // 0x388(0x01)

	void IsEscapeMenuDisabled(bool& Disabled); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.IsEscapeMenuDisabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Log(struct FString Description); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Log // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowCharacterSelectScreen(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.ShowCharacterSelectScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateRetryStatus(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.UpdateRetryStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Initialise(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFail_2E20AAC94911EA94788DB58E9DB4C4EF(struct FResGetUserProfile& Response); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnFail_2E20AAC94911EA94788DB58E9DB4C4EF // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSuccess_2E20AAC94911EA94788DB58E9DB4C4EF(struct FResGetUserProfile& Response); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnSuccess_2E20AAC94911EA94788DB58E9DB4C4EF // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Finished_E78F06674F46BAE2FA5469B944A0976A(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Finished_E78F06674F46BAE2FA5469B944A0976A // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFail_B258E6774F9DF3D30C8A0C9EE05D0E5C(struct FResGetUserProfile& Response); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnFail_B258E6774F9DF3D30C8A0C9EE05D0E5C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSuccess_B258E6774F9DF3D30C8A0C9EE05D0E5C(struct FResGetUserProfile& Response); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnSuccess_B258E6774F9DF3D30C8A0C9EE05D0E5C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EscapeKeyPressed(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.EscapeKeyPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ButtonPlay_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__ButtonPlay_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void OnContentServerConnectionSuccess(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnContentServerConnectionSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckIfConnectionFinished(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.CheckIfConnectionFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void QuitGame(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.QuitGame // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void CloseSettings(struct UUMG_ButtonBase_C* Button); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.CloseSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ShowRoadmapButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__ShowRoadmapButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void MoveToCharacterSelection(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.MoveToCharacterSelection // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LoginFailed(enum class ELoginFailure ErrorCode); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.LoginFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ButtonOffline_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__ButtonOffline_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void UpdateConnectingProgress(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.UpdateConnectingProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Nothing(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Nothing // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_ConnectingOverlay_ButtonCredits_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__UMG_ConnectingOverlay_ButtonCredits_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void CloseCredits(struct UUMG_ButtonBase_C* Button); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.CloseCredits // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnConnectMessageEvent(bool bSuccess); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnConnectMessageEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CacheOfflineAccountFlags(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.CacheOfflineAccountFlags // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_ConnectingOverlay_Discord_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__UMG_ConnectingOverlay_Discord_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_ConnectingOverlay_PatchNotes_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__UMG_ConnectingOverlay_PatchNotes_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_ConnectingOverlay_Feedback_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__UMG_ConnectingOverlay_Feedback_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_ConnectingOverlay(int32_t EntryPoint); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.ExecuteUbergraph_UMG_ConnectingOverlay // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

