// WidgetBlueprintGeneratedClass UMG_Survival.UMG_Survival_C
// Size: 0x9ca (Inherited: 0x260)
struct UUMG_Survival_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeOutHealthBar; // 0x268(0x08)
	struct UWidgetAnimation* WarningHPPulse; // 0x270(0x08)
	struct UUMG_ProgressBar_C* AnimatedHealthBar; // 0x278(0x08)
	struct UBorder* BG; // 0x280(0x08)
	struct UUMG_SurvivalProgress_C* Food; // 0x288(0x08)
	struct USizeBox* HealthBarSizeBox; // 0x290(0x08)
	struct UImage* HealthBoxBorder; // 0x298(0x08)
	struct UCanvasPanel* HealthFoodLineCanvas; // 0x2a0(0x08)
	struct UImage* HealthIcon; // 0x2a8(0x08)
	struct USpacer* HealthSpacerAnchor; // 0x2b0(0x08)
	struct UOverlay* HPBox; // 0x2b8(0x08)
	struct UUMG_SurvivalProgress_C* Oxygen; // 0x2c0(0x08)
	struct UUMG_HealthBar_C* UMG_HealthBar_2; // 0x2c8(0x08)
	struct UUMG_Hearing_C* UMG_Hearing; // 0x2d0(0x08)
	struct UUMG_TempAndHome_C* UMG_TempAndHome; // 0x2d8(0x08)
	struct UUMG_SurvivalProgress_C* Water; // 0x2e0(0x08)
	struct FProgressBarStyle NormalHealthBarStyle; // 0x2e8(0x1a0)
	bool LowImage; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)
	struct FProgressBarStyle WarninglHealthBarStyle; // 0x490(0x1a0)
	bool HealthFull; // 0x630(0x01)
	bool StaminaFull; // 0x631(0x01)
	bool LowStamina; // 0x632(0x01)
	char pad_633[0x5]; // 0x633(0x05)
	struct FProgressBarStyle WarningStaminaBarStyle; // 0x638(0x1a0)
	struct FProgressBarStyle NormalStaminaBarStyle; // 0x7d8(0x1a0)
	struct TArray<int32_t> StaminaLinePositions; // 0x978(0x10)
	struct TArray<int32_t> HealthLinePositions; // 0x988(0x10)
	float LineStart_VerticalOffset; // 0x998(0x04)
	float LineEnd_VerticalOffset; // 0x99c(0x04)
	struct FLinearColor White; // 0x9a0(0x10)
	struct FLinearColor Black; // 0x9b0(0x10)
	struct UCurveLinearColor* HealthColourCurve; // 0x9c0(0x08)
	bool Initialised; // 0x9c8(0x01)
	bool TriggerSegmentUpdate; // 0x9c9(0x01)

	void OnPaint(struct FPaintContext& Context); // Function UMG_Survival.UMG_Survival_C.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	void HideHealthBar(); // Function UMG_Survival.UMG_Survival_C.HideHealthBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LowHealthWarning(); // Function UMG_Survival.UMG_Survival_C.LowHealthWarning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FText GetHealthPercent(); // Function UMG_Survival.UMG_Survival_C.GetHealthPercent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	float GetHealth(); // Function UMG_Survival.UMG_Survival_C.GetHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct FText Get_RemoteGridFocusText_Text_1(); // Function UMG_Survival.UMG_Survival_C.Get_RemoteGridFocusText_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	float GetFood(); // Function UMG_Survival.UMG_Survival_C.GetFood // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	float GetAir(); // Function UMG_Survival.UMG_Survival_C.GetAir // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	float GetWater(); // Function UMG_Survival.UMG_Survival_C.GetWater // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct FText GetAirText(); // Function UMG_Survival.UMG_Survival_C.GetAirText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct FText GetFoodText(); // Function UMG_Survival.UMG_Survival_C.GetFoodText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct FText GetWaterText(); // Function UMG_Survival.UMG_Survival_C.GetWaterText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_Survival.UMG_Survival_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Update Health Bar(); // Function UMG_Survival.UMG_Survival_C.Update Health Bar // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_Survival.UMG_Survival_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnStatContainerUpdated(); // Function UMG_Survival.UMG_Survival_C.OnStatContainerUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // Function UMG_Survival.UMG_Survival_C.ConnectedPlayerInitialised // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AttemptInitialisation(); // Function UMG_Survival.UMG_Survival_C.AttemptInitialisation // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HealthUpdated(struct UActorState* ActorState, float NewHealth); // Function UMG_Survival.UMG_Survival_C.HealthUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateSegments(); // Function UMG_Survival.UMG_Survival_C.UpdateSegments // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SurvivalVariablesUpdated(); // Function UMG_Survival.UMG_Survival_C.SurvivalVariablesUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Survival.UMG_Survival_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_Survival(int32_t EntryPoint); // Function UMG_Survival.UMG_Survival_C.ExecuteUbergraph_UMG_Survival // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

