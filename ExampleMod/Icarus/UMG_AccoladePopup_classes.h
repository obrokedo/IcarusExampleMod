// WidgetBlueprintGeneratedClass UMG_AccoladePopup.UMG_AccoladePopup_C
// Size: 0x2f8 (Inherited: 0x260)
struct UUMG_AccoladePopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* SlideOut; // 0x268(0x08)
	struct UWidgetAnimation* SlideIn; // 0x270(0x08)
	struct UTextBlock* AccoladeDescription; // 0x278(0x08)
	struct UTextBlock* AccoladeTitle; // 0x280(0x08)
	struct UImage* Image_257; // 0x288(0x08)
	struct UImage* Line; // 0x290(0x08)
	struct UBorder* MainBorder; // 0x298(0x08)
	struct USizeBox* Medal; // 0x2a0(0x08)
	struct UImage* MedalImage; // 0x2a8(0x08)
	struct UOverlay* Overlay_5; // 0x2b0(0x08)
	struct USizeBox* Ribbon; // 0x2b8(0x08)
	struct UImage* RibbonImage; // 0x2c0(0x08)
	struct UImage* TickBox; // 0x2c8(0x08)
	struct TArray<struct FAccoladesRowHandle> QueuedAccolades; // 0x2d0(0x10)
	float PopupTime; // 0x2e0(0x04)
	float TimeBetweenPopups; // 0x2e4(0x04)
	float InitialDelayTime; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct UFMODEvent* FMODEvent_Popup; // 0x2f0(0x08)

	void PlayPopupSound(); // Function UMG_AccoladePopup.UMG_AccoladePopup_C.PlayPopupSound // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateState(struct FAccoladesRowHandle Accolade); // Function UMG_AccoladePopup.UMG_AccoladePopup_C.UpdateState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Finished_A1C5DA234732A9E7D3855CA0319F1CEA(); // Function UMG_AccoladePopup.UMG_AccoladePopup_C.Finished_A1C5DA234732A9E7D3855CA0319F1CEA // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Finished_3BB1A4E9422B43C9055CF99036EF0D9F(); // Function UMG_AccoladePopup.UMG_AccoladePopup_C.Finished_3BB1A4E9422B43C9055CF99036EF0D9F // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnAccoladeCompleted(struct FAccoladeCompletedState Accolade); // Function UMG_AccoladePopup.UMG_AccoladePopup_C.OnAccoladeCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateAccolades(); // Function UMG_AccoladePopup.UMG_AccoladePopup_C.UpdateAccolades // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitAccoladePopup(); // Function UMG_AccoladePopup.UMG_AccoladePopup_C.InitAccoladePopup // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_AccoladePopup(int32_t EntryPoint); // Function UMG_AccoladePopup.UMG_AccoladePopup_C.ExecuteUbergraph_UMG_AccoladePopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

