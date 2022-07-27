// Class RTXGI.DDGIVolume
// Size: 0x228 (Inherited: 0x220)
struct ADDGIVolume : AActor {
	struct UDDGIVolumeComponent* DDGIVolumeComponent; // 0x220(0x08)
};

// Class RTXGI.DDGIVolumeComponent
// Size: 0x340 (Inherited: 0x200)
struct UDDGIVolumeComponent : USceneComponent {
	bool EnableVolume; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	float UpdatePriority; // 0x204(0x04)
	int32_t LightingPriority; // 0x208(0x04)
	float BlendingDistance; // 0x20c(0x04)
	float BlendingCutoffDistance; // 0x210(0x04)
	bool RuntimeStatic; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
	struct FVector LastOrigin; // 0x218(0x0c)
	enum class EDDGIRaysPerProbe RaysPerProbe; // 0x224(0x04)
	struct FIntVector ProbeCounts; // 0x228(0x0c)
	float ProbeMaxRayDistance; // 0x234(0x04)
	float ProbeHistoryWeight; // 0x238(0x04)
	struct FProbeRelocation ProbeRelocation; // 0x23c(0x0c)
	bool ScrollProbesInfinitely; // 0x248(0x01)
	bool VisualizeProbes; // 0x249(0x01)
	char pad_24A[0x2]; // 0x24a(0x02)
	struct FIntVector ProbeScrollOffset; // 0x24c(0x0c)
	float probeDistanceExponent; // 0x258(0x04)
	float probeIrradianceEncodingGamma; // 0x25c(0x04)
	float probeChangeThreshold; // 0x260(0x04)
	float probeBrightnessThreshold; // 0x264(0x04)
	enum class EDDGISkyLightType SkyLightTypeOnRayMiss; // 0x268(0x04)
	float ViewBias; // 0x26c(0x04)
	float NormalBias; // 0x270(0x04)
	float LightMultiplier; // 0x274(0x04)
	float EmissiveMultiplier; // 0x278(0x04)
	float IrradianceScalar; // 0x27c(0x04)
	struct FLightingChannels LightingChannels; // 0x280(0x01)
	char pad_281[0xbf]; // 0x281(0xbf)

	void ToggleVolume(bool IsVolumeEnabled); // Function RTXGI.DDGIVolumeComponent.ToggleVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x101e4f0
	void SetLightMultiplier(float NewLightMultiplier); // Function RTXGI.DDGIVolumeComponent.SetLightMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x101e470
	void SetIrradianceScalar(float NewIrradianceScalar); // Function RTXGI.DDGIVolumeComponent.SetIrradianceScalar // (Final|Native|Public|BlueprintCallable) // @ game+0x101e3f0
	void SetEmissiveMultiplier(float NewEmissiveMultiplier); // Function RTXGI.DDGIVolumeComponent.SetEmissiveMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x101e370
	float GetLightMultiplier(); // Function RTXGI.DDGIVolumeComponent.GetLightMultiplier // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101e340
	float GetIrradianceScalar(); // Function RTXGI.DDGIVolumeComponent.GetIrradianceScalar // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101e310
	float GetEmissiveMultiplier(); // Function RTXGI.DDGIVolumeComponent.GetEmissiveMultiplier // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x101e2e0
	void DDGIClearVolumes(); // Function RTXGI.DDGIVolumeComponent.DDGIClearVolumes // (Final|Exec|Native|Public) // @ game+0x101e2c0
	void ClearProbeData(); // Function RTXGI.DDGIVolumeComponent.ClearProbeData // (Final|Native|Public|BlueprintCallable) // @ game+0x101e2a0
};

// Class RTXGI.RTXGIPluginSettings
// Size: 0x50 (Inherited: 0x38)
struct URTXGIPluginSettings : UDeveloperSettings {
	enum class EDDGIIrradianceBits IrradianceBits; // 0x38(0x01)
	enum class EDDGIDistanceBits DistanceBits; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float DebugProbeRadius; // 0x3c(0x04)
	int32_t ProbeUpdateRayBudget; // 0x40(0x04)
	enum class EDDGIProbesVisulizationMode ProbesVisualization; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float ProbesDepthScale; // 0x48(0x04)
	bool SerializeProbes; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

