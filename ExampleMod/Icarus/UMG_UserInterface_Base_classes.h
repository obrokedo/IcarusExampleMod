// WidgetBlueprintGeneratedClass UMG_UserInterface_Base.UMG_UserInterface_Base_C
// Size: 0x398 (Inherited: 0x260)
struct UUMG_UserInterface_Base_C : UUserInterfaceBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct TMap<struct FKey, struct FStaticWidget> StaticWidgets; // 0x268(0x50)
	struct TMap<struct FKey, bool> ImportantKeys; // 0x2b8(0x50)
	struct TMap<enum class EModifierKeys, struct FFModifierKeyValues> ModifierKeys; // 0x308(0x50)
	struct UWidget* FocusedWidget; // 0x358(0x08)
	struct UIcarusWidget* OldFocusedWidget; // 0x360(0x08)
	struct UUMG_CheatOverlay_C* CheatOverlay; // 0x368(0x08)
	bool CreatedCheatOverlay; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct FMulticastInlineDelegate OnHidePanelDisplay; // 0x378(0x10)
	struct FMulticastInlineDelegate OnMenuOpened; // 0x388(0x10)

	void SetForceShowCrosshair(bool ForceShowCrosshair); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.SetForceShowCrosshair // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetConfirmationOverlay(struct UOverlay*& Overlay); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetConfirmationOverlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void ToggleStatDebugger(); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ToggleStatDebugger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsShowingRadialMenu(bool& ShowingRadialMenu); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.IsShowingRadialMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void RemoveRadialMenu(struct UUserWidget* RadialMenu); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.RemoveRadialMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddRadialMenu(struct UUserWidget* RadialMenu); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.AddRadialMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetSize(struct FVector2D& Size); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct UConfirmationPopupBase* GetConfirmationPopup(); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetConfirmationPopup // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetMaxProjectionWidgets(int32_t& MaxProjectionWidgetCount); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetMaxProjectionWidgets // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetMaxProjectionWidgets(int32_t NewMaxWidgetCount); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.SetMaxProjectionWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetDialogue(struct UUMG_Dialogue_C*& Dialogue); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetDialogue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetCheatOverlay(struct UUMG_CheatOverlay_C*& Overlay); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetCheatOverlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void Show Game Message(bool Error, struct FText Message, float LifeTimeOverride); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.Show Game Message // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WidgetFocusGained(struct UIcarusWidget* Widget); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.WidgetFocusGained // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WidgetFocusLost(struct UIcarusWidget* Widget); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.WidgetFocusLost // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ToggleEscapeMenu(); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ToggleEscapeMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsSpace?(bool& InSpace); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.IsSpace? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void HideLoadingScreen(); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.HideLoadingScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowLoadingScreen(struct FText Optional Message); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ShowLoadingScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HideErrorCode(); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.HideErrorCode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowErrorCode(struct FErrorCodesEnum ErrorCode); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ShowErrorCode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OpenEscapeMenu(); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.OpenEscapeMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsMenuVisible(bool& Visible); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.IsMenuVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EscapeKeyPressed(); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.EscapeKeyPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetCheatContext(enum class ECheatContext& Context); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetCheatContext // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ToggleCheatMenu(); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ToggleCheatMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct UW_ProjectionInterface_C* GetProjectionInterface(); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetProjectionInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetConfirmationWindow(struct UUMG_ConfirmationPopup_C*& ConfirmationWidget); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetConfirmationWindow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void FixFocus(); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.FixFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetFocusWidget(); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.SetFocusWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetCursorWidget(struct UUMG_CursorWidget_C*& CursorWidget); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetCursorWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void FocusStaticWidget(enum class EStaticUIWidgets Panel); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.FocusStaticWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Reset(); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HidePanelDisplay(); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.HidePanelDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ClearModifierKeys(); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ClearModifierKeys // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsKeyDown(enum class EModifierKeys Key, bool& KeyHeld); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.IsKeyDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InputTypeApplied(enum class EInputTypeSetting Value); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.InputTypeApplied // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnWindowReceivedFocus(); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.OnWindowReceivedFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ErrorRequested(struct FErrorCodesEnum ErrorCode); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ErrorRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CreateCheatOverlay(); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.CreateCheatOverlay // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DisplayIcarusError(struct FErrorCodesEnum OutgoingError); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.DisplayIcarusError // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_UserInterface_Base(int32_t EntryPoint); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ExecuteUbergraph_UMG_UserInterface_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void OnMenuOpened__DelegateSignature(); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.OnMenuOpened__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnHidePanelDisplay__DelegateSignature(); // Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.OnHidePanelDisplay__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

