// WidgetBlueprintGeneratedClass UMG_DisconnectionPopup.UMG_DisconnectionPopup_C
// Size: 0x2e0 (Inherited: 0x260)
struct UUMG_DisconnectionPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* SlideIn; // 0x268(0x08)
	struct UTextBlock* ContentText; // 0x270(0x08)
	struct UImage* divider; // 0x278(0x08)
	struct UImage* divider_2; // 0x280(0x08)
	struct UImage* Gradient; // 0x288(0x08)
	struct UImage* Icon; // 0x290(0x08)
	struct UBorder* PromptBorder; // 0x298(0x08)
	struct UTextBlock* RetryingTimer; // 0x2a0(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt; // 0x2a8(0x08)
	struct FText In Text; // 0x2b0(0x18)
	struct FTimerHandle TimerHandle; // 0x2c8(0x08)
	bool bShowingWarning; // 0x2d0(0x01)
	bool bShowEscapePrompt; // 0x2d1(0x01)
	bool bShowRetryTimer; // 0x2d2(0x01)
	char pad_2D3[0x5]; // 0x2d3(0x05)
	struct FTimerHandle RetryTimerHandle; // 0x2d8(0x08)

	void UpdateRetryTimer(); // Function UMG_DisconnectionPopup.UMG_DisconnectionPopup_C.UpdateRetryTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HideWarningMessage(); // Function UMG_DisconnectionPopup.UMG_DisconnectionPopup_C.HideWarningMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowWarningMessage(); // Function UMG_DisconnectionPopup.UMG_DisconnectionPopup_C.ShowWarningMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateWarningMessage(); // Function UMG_DisconnectionPopup.UMG_DisconnectionPopup_C.UpdateWarningMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_DisconnectionPopup.UMG_DisconnectionPopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_DisconnectionPopup.UMG_DisconnectionPopup_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_DisconnectionPopup(int32_t EntryPoint); // Function UMG_DisconnectionPopup.UMG_DisconnectionPopup_C.ExecuteUbergraph_UMG_DisconnectionPopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

