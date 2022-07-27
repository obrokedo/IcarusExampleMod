// BlueprintGeneratedClass BP_Radar.BP_Radar_C
// Size: 0x638 (Inherited: 0x5c3)
struct ABP_Radar_C : ABP_DeployableBase_C {
	char pad_5C3[0x5]; // 0x5c3(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c8(0x08)
	struct UIcarusMapIconComponent* IcarusMapIcon; // 0x5d0(0x08)
	struct UFMODAudioComponent* FMOD_Radar_Audio; // 0x5d8(0x08)
	struct UPointLightComponent* PointLight; // 0x5e0(0x08)
	struct UStaticMeshComponent* Cube; // 0x5e8(0x08)
	bool IsOn; // 0x5f0(0x01)
	char pad_5F1[0x3]; // 0x5f1(0x03)
	int32_t ScanningTileX; // 0x5f4(0x04)
	int32_t ScanningTileY; // 0x5f8(0x04)
	float Progress; // 0x5fc(0x04)
	float SecondsToScan; // 0x600(0x04)
	char pad_604[0x4]; // 0x604(0x04)
	struct AMapManager_C* MapManager; // 0x608(0x08)
	int32_t SpiralRadiusMax; // 0x610(0x04)
	int32_t SpiralRadiusCurrent; // 0x614(0x04)
	int32_t SpiralLastX; // 0x618(0x04)
	int32_t SpiralLastY; // 0x61c(0x04)
	bool Completed; // 0x620(0x01)
	char pad_621[0x7]; // 0x621(0x07)
	struct FMulticastInlineDelegate RadarActivated; // 0x628(0x10)

	void Deployable_Interact(struct AActor* Interactor); // Function BP_Radar.BP_Radar_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_IsOn(); // Function BP_Radar.BP_Radar_C.OnRep_IsOn // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void NextSpiralScanLocation(bool& Success); // Function BP_Radar.BP_Radar_C.NextSpiralScanLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_Radar.BP_Radar_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_Radar.BP_Radar_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void Activate(struct AActor* Instigator); // Function BP_Radar.BP_Radar_C.Activate // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Radar(int32_t EntryPoint); // Function BP_Radar.BP_Radar_C.ExecuteUbergraph_BP_Radar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void RadarActivated__DelegateSignature(); // Function BP_Radar.BP_Radar_C.RadarActivated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

