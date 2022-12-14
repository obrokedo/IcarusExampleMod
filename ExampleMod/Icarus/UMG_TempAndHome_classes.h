// WidgetBlueprintGeneratedClass UMG_TempAndHome.UMG_TempAndHome_C
// Size: 0x338 (Inherited: 0x260)
struct UUMG_TempAndHome_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* CoolingDown; // 0x268(0x08)
	struct UWidgetAnimation* WarmingUp; // 0x270(0x08)
	struct UImage* C1; // 0x278(0x08)
	struct UImage* C2; // 0x280(0x08)
	struct UImage* c3; // 0x288(0x08)
	struct UProgressBar* ColdArea; // 0x290(0x08)
	struct UProgressBar* ColdInsulation; // 0x298(0x08)
	struct UHorizontalBox* Cooling; // 0x2a0(0x08)
	struct UImage* ExternalTempIndicator; // 0x2a8(0x08)
	struct UProgressBar* HotArea; // 0x2b0(0x08)
	struct UProgressBar* HotInsulation; // 0x2b8(0x08)
	struct UImage* InternalTempIndicator; // 0x2c0(0x08)
	struct UBorder* TemperatureBorder; // 0x2c8(0x08)
	struct UImage* TempHome; // 0x2d0(0x08)
	struct UImage* w1; // 0x2d8(0x08)
	struct UImage* w2; // 0x2e0(0x08)
	struct UImage* w3; // 0x2e8(0x08)
	struct UHorizontalBox* Warming; // 0x2f0(0x08)
	int32_t CurrentTemp; // 0x2f8(0x04)
	bool Initialised; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	struct UCurveLinearColor* TemperatureCurve; // 0x300(0x08)
	float MaxInternalTemp; // 0x308(0x04)
	float MinInternalTemp; // 0x30c(0x04)
	struct FTimerHandle AnimationTimer; // 0x310(0x08)
	bool Modified; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	int32_t PreviousTemp; // 0x31c(0x04)
	float SafeRegionMin; // 0x320(0x04)
	float SafeRegionMax; // 0x324(0x04)
	float ExternalTemp; // 0x328(0x04)
	float Insulation; // 0x32c(0x04)
	float Heat_Insulation; // 0x330(0x04)
	float Cold_Insulation; // 0x334(0x04)

	struct FSlateColor GetWorldTemperatureColor(); // Function UMG_TempAndHome.UMG_TempAndHome_C.GetWorldTemperatureColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void UpdateTemperatureColour(struct UBorder* TemperatureBorder); // Function UMG_TempAndHome.UMG_TempAndHome_C.UpdateTemperatureColour // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckAnimations(); // Function UMG_TempAndHome.UMG_TempAndHome_C.CheckAnimations // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Stop Animations(); // Function UMG_TempAndHome.UMG_TempAndHome_C.Stop Animations // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateTempIndicator(); // Function UMG_TempAndHome.UMG_TempAndHome_C.UpdateTempIndicator // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_TempAndHome.UMG_TempAndHome_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_TempAndHome.UMG_TempAndHome_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_TempAndHome(int32_t EntryPoint); // Function UMG_TempAndHome.UMG_TempAndHome_C.ExecuteUbergraph_UMG_TempAndHome // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

