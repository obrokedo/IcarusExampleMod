// BlueprintGeneratedClass BP_WeatherAudioComponent_BuildingWindDamage.BP_WeatherAudioComponent_BuildingWindDamage_C
// Size: 0x254 (Inherited: 0x244)
struct UBP_WeatherAudioComponent_BuildingWindDamage_C : UBP_WeatherAudioComponent_C {
	char pad_244[0x4]; // 0x244(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	int32_t MaxDestructionPoints; // 0x250(0x04)

	void ForceStopAndDestroy(); // Function BP_WeatherAudioComponent_BuildingWindDamage.BP_WeatherAudioComponent_BuildingWindDamage_C.ForceStopAndDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StopWeatherAudio(); // Function BP_WeatherAudioComponent_BuildingWindDamage.BP_WeatherAudioComponent_BuildingWindDamage_C.StopWeatherAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckExposure(float& Exposure); // Function BP_WeatherAudioComponent_BuildingWindDamage.BP_WeatherAudioComponent_BuildingWindDamage_C.CheckExposure // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_WeatherAudioComponent_BuildingWindDamage.BP_WeatherAudioComponent_BuildingWindDamage_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_WeatherAudioComponent_BuildingWindDamage(int32_t EntryPoint); // Function BP_WeatherAudioComponent_BuildingWindDamage.BP_WeatherAudioComponent_BuildingWindDamage_C.ExecuteUbergraph_BP_WeatherAudioComponent_BuildingWindDamage // (Final|UbergraphFunction) // @ game+0x1be0000
};

