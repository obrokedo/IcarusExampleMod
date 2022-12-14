// WidgetBlueprintGeneratedClass UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C
// Size: 0x5d0 (Inherited: 0x398)
struct UUMG_UserInterfaceSpace_C : UUMG_UserInterface_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UOverlay* ConfirmationOverlay; // 0x3a0(0x08)
	struct USizeBox* ConfirmationSizeBox; // 0x3a8(0x08)
	struct USizeBox* CursorItemSize; // 0x3b0(0x08)
	struct UScaleBox* CursorScaleBox; // 0x3b8(0x08)
	struct UCanvasPanel* Debug; // 0x3c0(0x08)
	struct UBorder* ErrorCodeBox; // 0x3c8(0x08)
	struct UScaleBox* ErrorCodeScaleBox; // 0x3d0(0x08)
	struct UTextBlock* GameVersionNumber; // 0x3d8(0x08)
	struct UUMG_ButtonIcon_C* HUDUnreadNotificationIcon; // 0x3e0(0x08)
	struct UScaleBox* JoiningGameScaleBox; // 0x3e8(0x08)
	struct UScaleBox* LoadingScreenScaleBox; // 0x3f0(0x08)
	struct USizeBox* Loadout; // 0x3f8(0x08)
	struct UScaleBox* LoadoutConfirmationBox; // 0x400(0x08)
	struct UBorder* LoadoutOverlay; // 0x408(0x08)
	struct UScaleBox* MainDisplayScaleBox; // 0x410(0x08)
	struct UUMG_ButtonIcon_C* MenuNotificationButton; // 0x418(0x08)
	struct UOverlay* Menus; // 0x420(0x08)
	struct UWidgetSwitcher* ProspectSumarySwitcher; // 0x428(0x08)
	struct UBorder* ProspectSummary; // 0x430(0x08)
	struct UScaleBox* RadialScaleBox; // 0x438(0x08)
	struct URetainerBox* RetainerBox_1; // 0x440(0x08)
	struct UHorizontalBox* TABhint; // 0x448(0x08)
	struct UImage* Target; // 0x450(0x08)
	struct UBorder* TemporaryMouseWidget; // 0x458(0x08)
	struct UUMG_CharacterInitialization_C* UMG_CharacterInitialization; // 0x460(0x08)
	struct UUMG_Chatbox_C* UMG_Chatbox; // 0x468(0x08)
	struct UUMG_ConfirmationPopup_C* UMG_ConfirmationPopup; // 0x470(0x08)
	struct UUMG_CursorWidget_C* UMG_CursorWidget; // 0x478(0x08)
	struct UUMG_ErrorCodeDisplay_C* UMG_ErrorCodeDisplay; // 0x480(0x08)
	struct UUMG_EscapeMenu_C* UMG_EscapeMenu; // 0x488(0x08)
	struct UUMG_InteractionPrompt_C* UMG_InteractionPrompt; // 0x490(0x08)
	struct UUMG_IntroTips_Space_C* UMG_IntroTips_Space; // 0x498(0x08)
	struct UUMG_Inventory_C* UMG_Inventory; // 0x4a0(0x08)
	struct UUMG_JoiningGame_C* UMG_JoiningGame; // 0x4a8(0x08)
	struct UUMG_LoadingScreen_C* UMG_LoadingScreen; // 0x4b0(0x08)
	struct UUMG_LoadoutSelection_C* UMG_LoadoutSelection; // 0x4b8(0x08)
	struct UUMG_MainMenu_Space_C* UMG_MainMenu_Space; // 0x4c0(0x08)
	struct UUMG_Party_C* UMG_Party; // 0x4c8(0x08)
	struct UUMG_Target_C* UMG_Target; // 0x4d0(0x08)
	struct UW_ProjectionInterface_C* W_ProjectionInterface; // 0x4d8(0x08)
	struct ABP_IcarusPlayerControllerSpace_C* PlayerController; // 0x4e0(0x08)
	struct UUserWidget* CurrentDynamicWidget; // 0x4e8(0x08)
	bool VerboseStatDebugging; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct UMaterialInstanceDynamic* CurvedHudDynMat; // 0x4f8(0x08)
	struct FRotator LastViewRot; // 0x500(0x0c)
	struct FVector DeltaRotation; // 0x50c(0x0c)
	float ScreenWarpAmount; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct UMaterialInstanceDynamic* SwayHudDynMat; // 0x520(0x08)
	float ScreenSwayAmount; // 0x528(0x04)
	float CADistance; // 0x52c(0x04)
	int32_t CASteps; // 0x530(0x04)
	bool PendingProspectReward; // 0x534(0x01)
	char pad_535[0x3]; // 0x535(0x03)
	struct FResGetLastProspect ProspectReward; // 0x538(0x98)

	void GetConfirmationOverlay(struct UOverlay*& Overlay); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.GetConfirmationOverlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void CheckForProspectRewards(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.CheckForProspectRewards // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateMissionSummaryVisibility(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.UpdateMissionSummaryVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSessionInviteAccepted(struct FIcarusSession IcarusSession); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.OnSessionInviteAccepted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HideProspectSummary(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.HideProspectSummary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ToggleEscapeMenu(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.ToggleEscapeMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsSpace?(bool& InSpace); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.IsSpace? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void HideLoadingScreen(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.HideLoadingScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowLoadingScreen(struct FText Optional Message); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.ShowLoadingScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowErrorCode(struct FErrorCodesEnum ErrorCode); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.ShowErrorCode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HideErrorCode(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.HideErrorCode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EscapeKeyPressed(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.EscapeKeyPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowMissionSummary(struct FNotification Notification, bool ShowCloseButton); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.ShowMissionSummary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCharacterSelected(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.OnCharacterSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowMailbox(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.ShowMailbox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowMainMenu(enum class ESpaceMainMenuOptions Option, bool& Success); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.ShowMainMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Toggle Inventory(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.Toggle Inventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetCheatContext(enum class ECheatContext& Context); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.GetCheatContext // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct UW_ProjectionInterface_C* GetProjectionInterface(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.GetProjectionInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetConfirmationWindow(struct UUMG_ConfirmationPopup_C*& ConfirmationWidget); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.GetConfirmationWindow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetCursorWidget(struct UUMG_CursorWidget_C*& CursorWidget); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.GetCursorWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void FocusStaticWidget(enum class EStaticUIWidgets Panel); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.FocusStaticWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HidePanelDisplay(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.HidePanelDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Reset(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsMenuVisible_1(bool& Visible); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.IsMenuVisible_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdatePlayerHighlighting(bool Active); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.UpdatePlayerHighlighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HideStaticWidgets(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.HideStaticWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FocusDynamicWidget(struct UUserWidget* DynamicWidget); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.FocusDynamicWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowTipsMenu(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.ShowTipsMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetHUDVisibility(bool Visible); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.SetHUDVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowEscapeMenu(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.ShowEscapeMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Initialise(struct ABP_IcarusPlayerControllerSpace_C* Controller); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitialiseHandInventory(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.InitialiseHandInventory // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnItemAdded_Event_1(struct UInventory* Inventory, int32_t Location); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.OnItemAdded_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnItemRemoved_Event_1(struct UInventory* Inventory, int32_t Location); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.OnItemRemoved_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void JoinSessionInvitedSession(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.JoinSessionInvitedSession // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DoNothing_Confirmation(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.DoNothing_Confirmation // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_UserInterfaceSpace_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_0_ConfirmLoadout__DelegateSignature(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.BndEvt__UMG_UserInterfaceSpace_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_0_ConfirmLoadout__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_UserInterfaceSpace_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_1_Back__DelegateSignature(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.BndEvt__UMG_UserInterfaceSpace_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_1_Back__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.OnConnectedPlayerInitialised // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_UserInterfaceSpace(int32_t EntryPoint); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.ExecuteUbergraph_UMG_UserInterfaceSpace // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

