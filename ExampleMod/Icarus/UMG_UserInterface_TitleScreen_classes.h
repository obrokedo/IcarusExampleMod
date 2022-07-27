// WidgetBlueprintGeneratedClass UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C
// Size: 0x418 (Inherited: 0x398)
struct UUMG_UserInterface_TitleScreen_C : UUMG_UserInterface_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UScaleBox* ConfirmationScaleBox; // 0x3a0(0x08)
	struct UBorder* ErrorCodeBox; // 0x3a8(0x08)
	struct UScaleBox* ErrorCodeScaleBox; // 0x3b0(0x08)
	struct UOverlay* Menus; // 0x3b8(0x08)
	struct USizeBox* TickerSizeBox; // 0x3c0(0x08)
	struct UUMG_ButtonIcon_C* UMG_ButtonIcon_C_1; // 0x3c8(0x08)
	struct UUMG_ConfirmationPopup_C* UMG_ConfirmationPopup; // 0x3d0(0x08)
	struct UUMG_ConnectingOverlay_C* UMG_ConnectingOverlay; // 0x3d8(0x08)
	struct UUMG_ErrorCodeDisplay_C* UMG_ErrorCodeDisplay; // 0x3e0(0x08)
	struct UUMG_FeatureLevelIndicator_C* UMG_FeatureLevelIndicator; // 0x3e8(0x08)
	struct UUMG_QueueWindow_C* UMG_QueueWindow; // 0x3f0(0x08)
	struct UUMG_RevisionNumber_C* UMG_RevisionNumber; // 0x3f8(0x08)
	struct UUMG_ServerMessageTicker_C* UMG_ServerMessageTicker; // 0x400(0x08)
	struct UUMG_TitleScreen_Background_C* UMG_TitleScreen_Background; // 0x408(0x08)
	struct UUserWidget* CurrentDynamicWidget; // 0x410(0x08)

	void GetConfirmationWindow(struct UUMG_ConfirmationPopup_C*& ConfirmationWidget); // Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.GetConfirmationWindow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void UpdateQueue(); // Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.UpdateQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateMaintenaceText(); // Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.UpdateMaintenaceText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HideErrorCode(); // Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.HideErrorCode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FocusDynamicWidget(struct UUserWidget* FocusedWidget); // Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.FocusDynamicWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DisplayIcarusError(struct FErrorCodesEnum OutgoingError); // Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.DisplayIcarusError // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_QueueWindow_K2Node_ComponentBoundEvent_0_Close__DelegateSignature(); // Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.BndEvt__UMG_QueueWindow_K2Node_ComponentBoundEvent_0_Close__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_ButtonIcon_C_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.BndEvt__UMG_ButtonIcon_C_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_UserInterface_TitleScreen(int32_t EntryPoint); // Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.ExecuteUbergraph_UMG_UserInterface_TitleScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

