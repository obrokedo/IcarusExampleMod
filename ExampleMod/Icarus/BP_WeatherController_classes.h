// BlueprintGeneratedClass BP_WeatherController.BP_WeatherController_C
// Size: 0x418 (Inherited: 0x320)
struct ABP_WeatherController_C : AWeatherController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	int32_t ProspectFirstGenerationTime; // 0x328(0x04)
	int32_t GameStateSeed; // 0x32c(0x04)
	int32_t WeatherGenerationTime; // 0x330(0x04)
	int32_t RequiredTotalForecastTime; // 0x334(0x04)
	float Deployable_Max_Damage; // 0x338(0x04)
	float Player_Max_Damage; // 0x33c(0x04)
	float Buildable_Max_Damage; // 0x340(0x04)
	float Player_Items_Max_Damage; // 0x344(0x04)
	enum class EIcarusProspectDifficulty Difficulty; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct FMulticastInlineDelegate StormIncomingAlert; // 0x350(0x10)
	struct FMulticastInlineDelegate StormStartedAlert; // 0x360(0x10)
	bool Debug; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct FMulticastInlineDelegate AIPerceptionModifierUpdated; // 0x378(0x10)
	struct FRandomStream RandomStream; // 0x388(0x08)
	float SnowConstant; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct UCurveFloat* WeatherPercentageFloatCurve; // 0x398(0x08)
	float Fallback Weather Percentage; // 0x3a0(0x04)
	float WeatherEventScaleMinimumClamp; // 0x3a4(0x04)
	struct TArray<struct FWeatherPoolEntry> ProspectWeatherPools; // 0x3a8(0x10)
	struct TArray<struct FWeatherBiomeGroupsRowHandle> ProspectBiomeGroups; // 0x3b8(0x10)
	struct TMap<struct FWeatherBiomeGroupsRowHandle, int32_t> NextBiomeGroupGenerationTime; // 0x3c8(0x50)

	void SetupProspectWeatherData(); // Function BP_WeatherController.BP_WeatherController_C.SetupProspectWeatherData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ClearPlannedWeather(int32_t SecondsUntilNextGeneration); // Function BP_WeatherController.BP_WeatherController_C.ClearPlannedWeather // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ProcessPendingWeather(); // Function BP_WeatherController.BP_WeatherController_C.ProcessPendingWeather // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetWeatherPercentage(float& WeatherPercentage); // Function BP_WeatherController.BP_WeatherController_C.GetWeatherPercentage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetProspectWeatherPool(struct TArray<struct FWeatherPoolEntry>& WeatherPools_WeatherEvents); // Function BP_WeatherController.BP_WeatherController_C.GetProspectWeatherPool // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExtinguishFires(struct FBiomesRowHandle Biome, float Intensity); // Function BP_WeatherController.BP_WeatherController_C.ExtinguishFires // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DebugWeatherController(struct FBiomesRowHandle Biome); // Function BP_WeatherController.BP_WeatherController_C.DebugWeatherController // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayerModifiers(struct FBiomesRowHandle Biome, float Intensity, struct FGameplayTagQuery Query, struct FModifier Modifier); // Function BP_WeatherController.BP_WeatherController_C.PlayerModifiers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DrawWeatherForecast(); // Function BP_WeatherController.BP_WeatherController_C.DrawWeatherForecast // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PrintWeather(); // Function BP_WeatherController.BP_WeatherController_C.PrintWeather // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckPlannedEvents(); // Function BP_WeatherController.BP_WeatherController_C.CheckPlannedEvents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckForNewEvents(int32_t CurrentTime); // Function BP_WeatherController.BP_WeatherController_C.CheckForNewEvents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GenerateWeatherEventsForBiomeGroup(struct FWeatherBiomeGroupsRowHandle BiomeGroup, int32_t StartTime, int32_t EndTime); // Function BP_WeatherController.BP_WeatherController_C.GenerateWeatherEventsForBiomeGroup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetEventEndTime(struct FWeatherEventsRowHandle WeatherEvent, int32_t StartTime, int32_t& EndTime); // Function BP_WeatherController.BP_WeatherController_C.GetEventEndTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetEventDuration(struct FWeatherEventsRowHandle Event, float& Duration); // Function BP_WeatherController.BP_WeatherController_C.GetEventDuration // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddPlannedEventToBiomeGroup(struct FWeatherBiomeGroupsEnum BiomeGroup, struct FWeatherEventsRowHandle WeatherEventRowHandle, int32_t StartTime); // Function BP_WeatherController.BP_WeatherController_C.AddPlannedEventToBiomeGroup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlanWeather(); // Function BP_WeatherController.BP_WeatherController_C.PlanWeather // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Snow(float Intensity, struct FBiomesRowHandle Biome); // Function BP_WeatherController.BP_WeatherController_C.Snow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Rain(struct FBiomesRowHandle Biome, int32_t Rainfall (Millilitre)); // Function BP_WeatherController.BP_WeatherController_C.Rain // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Player Item Damage(struct FBiomesRowHandle Biome, float Intensity, struct FGameplayTagQuery Query); // Function BP_WeatherController.BP_WeatherController_C.Player Item Damage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Deployable Damage(struct FBiomesRowHandle Biome, float Intensity, struct FGameplayTagQuery Query); // Function BP_WeatherController.BP_WeatherController_C.Deployable Damage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Player Damage(struct FBiomesRowHandle Biome, float Intensity, struct FGameplayTagQuery Query); // Function BP_WeatherController.BP_WeatherController_C.Player Damage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UserConstructionScript(); // Function BP_WeatherController.BP_WeatherController_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_03F140C24C788945DD1CE78DE82CCD6C(struct UObject* Loaded); // Function BP_WeatherController.BP_WeatherController_C.OnLoaded_03F140C24C788945DD1CE78DE82CCD6C // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetRain(float Severity, struct FBiomesRowHandle Biome); // Function BP_WeatherController.BP_WeatherController_C.SetRain // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_WeatherController.BP_WeatherController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ClearAllWeather(); // Function BP_WeatherController.BP_WeatherController_C.ClearAllWeather // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ClearWeather(); // Function BP_WeatherController.BP_WeatherController_C.ClearWeather // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetSnow(float Severity, struct FBiomesRowHandle Biome); // Function BP_WeatherController.BP_WeatherController_C.SetSnow // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetSand(float Severity, struct FBiomesRowHandle Biome); // Function BP_WeatherController.BP_WeatherController_C.SetSand // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ClearWeatherBiome(struct FBiomesEnum Biome); // Function BP_WeatherController.BP_WeatherController_C.ClearWeatherBiome // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnCheckPlannedEvents(); // Function BP_WeatherController.BP_WeatherController_C.OnCheckPlannedEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSeedInitialised(int32_t Seed); // Function BP_WeatherController.BP_WeatherController_C.OnSeedInitialised // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetCloud(float Severity, struct FBiomesRowHandle Biome); // Function BP_WeatherController.BP_WeatherController_C.SetCloud // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetThunder(float Severity, struct FBiomesRowHandle Biome); // Function BP_WeatherController.BP_WeatherController_C.SetThunder // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetSnowStorm(float Severity, struct FBiomesRowHandle Biome); // Function BP_WeatherController.BP_WeatherController_C.SetSnowStorm // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowWeatherWarningMessage(struct FBiomesRowHandle Biome, struct FText Message); // Function BP_WeatherController.BP_WeatherController_C.ShowWeatherWarningMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HideWeatherWarningMessage(struct FBiomesRowHandle Biome); // Function BP_WeatherController.BP_WeatherController_C.HideWeatherWarningMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetBiomeWindVisuals(float WindSpeed, float WindStrength, float WindGust, struct FBiomesRowHandle BiomeRow); // Function BP_WeatherController.BP_WeatherController_C.SetBiomeWindVisuals // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetBiomeWindForce(float WindDirectionStrength, struct FBiomesRowHandle BiomeRow); // Function BP_WeatherController.BP_WeatherController_C.SetBiomeWindForce // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetBiomeWindDirection(struct FVector WindDirection, struct FBiomesRowHandle BiomeRow); // Function BP_WeatherController.BP_WeatherController_C.SetBiomeWindDirection // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetWeatherTemperatureModifier(int32_t TempModifier, struct FBiomesRowHandle BiomeRow); // Function BP_WeatherController.BP_WeatherController_C.SetWeatherTemperatureModifier // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetAIPerceptionModifier(int32_t Modifier, struct FBiomesRowHandle BiomesRowHandle); // Function BP_WeatherController.BP_WeatherController_C.SetAIPerceptionModifier // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetDebris(float Severity, struct FBiomesRowHandle BiomeRow); // Function BP_WeatherController.BP_WeatherController_C.SetDebris // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RestoreWeatherFromDatabase(struct FBiomesRowHandle& BiomeRow, struct FWeatherEventsRowHandle& WeatherRow, int32_t StartTime); // Function BP_WeatherController.BP_WeatherController_C.RestoreWeatherFromDatabase // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_WeatherController(int32_t EntryPoint); // Function BP_WeatherController.BP_WeatherController_C.ExecuteUbergraph_BP_WeatherController // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void AIPerceptionModifierUpdated__DelegateSignature(int32_t NewValue, struct FBiomesRowHandle Biome); // Function BP_WeatherController.BP_WeatherController_C.AIPerceptionModifierUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StormStartedAlert__DelegateSignature(struct FWeatherEventsRowHandle Event, struct FBiomesEnum Biome); // Function BP_WeatherController.BP_WeatherController_C.StormStartedAlert__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StormIncomingAlert__DelegateSignature(int32_t TimeUntilStorm, struct FWeatherEventsRowHandle StormRow, struct FBiomesEnum Biome); // Function BP_WeatherController.BP_WeatherController_C.StormIncomingAlert__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

