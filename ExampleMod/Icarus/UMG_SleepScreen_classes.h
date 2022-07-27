// WidgetBlueprintGeneratedClass UMG_SleepScreen.UMG_SleepScreen_C
// Size: 0x311 (Inherited: 0x260)
struct UUMG_SleepScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Fade; // 0x268(0x08)
	struct UUMG_SleepChecks_C* CampfireCheck; // 0x270(0x08)
	struct UTextBlock* CurrentTimeText; // 0x278(0x08)
	struct UTextBlock* ExitText; // 0x280(0x08)
	struct UBorder* FadeBorder; // 0x288(0x08)
	struct UImage* Image; // 0x290(0x08)
	struct UImage* Image_2; // 0x298(0x08)
	struct UImage* Image_3; // 0x2a0(0x08)
	struct UImage* Image_71; // 0x2a8(0x08)
	struct UTextBlock* ModifierWarningText; // 0x2b0(0x08)
	struct UOverlay* Overlay_SleepScreen; // 0x2b8(0x08)
	struct UUMG_SleepChecks_C* PlayersSleepingCheck; // 0x2c0(0x08)
	struct UUMG_Keybind_C* PressFKeybind; // 0x2c8(0x08)
	struct UUMG_SleepChecks_C* TimeCheck; // 0x2d0(0x08)
	struct UImage* TimeIcon; // 0x2d8(0x08)
	struct TSoftClassPtr<UObject> BedSeatClass; // 0x2e0(0x28)
	float FadeAlpha; // 0x308(0x04)
	float FadeSpeed; // 0x30c(0x04)
	bool Sleeping; // 0x310(0x01)

	void UpdateSleepModifiers(); // Function UMG_SleepScreen.UMG_SleepScreen_C.UpdateSleepModifiers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetAudioSleepParameter(float FadeValue); // Function UMG_SleepScreen.UMG_SleepScreen_C.SetAudioSleepParameter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	int32_t GetSleepingPlayerCount(); // Function UMG_SleepScreen.UMG_SleepScreen_C.GetSleepingPlayerCount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateSleepingState(bool Sleeping); // Function UMG_SleepScreen.UMG_SleepScreen_C.UpdateSleepingState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AttachedSeatChanged(); // Function UMG_SleepScreen.UMG_SleepScreen_C.AttachedSeatChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_SleepScreen.UMG_SleepScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_SleepScreen.UMG_SleepScreen_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_SleepScreen(int32_t EntryPoint); // Function UMG_SleepScreen.UMG_SleepScreen_C.ExecuteUbergraph_UMG_SleepScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

