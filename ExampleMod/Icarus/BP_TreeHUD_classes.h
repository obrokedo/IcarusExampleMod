// BlueprintGeneratedClass BP_TreeHUD.BP_TreeHUD_C
// Size: 0x390 (Inherited: 0x310)
struct ABP_TreeHUD_C : AIcarusHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x318(0x08)
	struct ABP_ActorPreview_C* PlayerPreview; // 0x320(0x08)
	bool ShouldDrawWeather; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct ABP_TooltipProjectionActor_C* ToolTipActor; // 0x330(0x08)
	struct ABP_CardPreview_C* CardPreview; // 0x338(0x08)
	struct TMap<struct FWeatherBiomeGroupsEnum, struct FWeatherBiomeGroupForecast> Biome Group Forecast; // 0x340(0x50)

	void DrawWeather(int32_t SizeX, int32_t SizeY); // Function BP_TreeHUD.BP_TreeHUD_C.DrawWeather // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetEventEndTime(struct FWeatherEventsRowHandle Event, int32_t StartTime, int32_t& EndTime); // Function BP_TreeHUD.BP_TreeHUD_C.GetEventEndTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY); // Function BP_TreeHUD.BP_TreeHUD_C.ReceiveDrawHUD // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_TreeHUD.BP_TreeHUD_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void SetBiomeWeatherData(struct TMap<struct FWeatherBiomeGroupsEnum, struct FWeatherBiomeGroupForecast>& BiomeGroupForecast); // Function BP_TreeHUD.BP_TreeHUD_C.SetBiomeWeatherData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ToggleDrawWeather(); // Function BP_TreeHUD.BP_TreeHUD_C.ToggleDrawWeather // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_TreeHUD(int32_t EntryPoint); // Function BP_TreeHUD.BP_TreeHUD_C.ExecuteUbergraph_BP_TreeHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

