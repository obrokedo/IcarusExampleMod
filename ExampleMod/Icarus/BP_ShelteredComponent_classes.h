// BlueprintGeneratedClass BP_ShelteredComponent.BP_ShelteredComponent_C
// Size: 0x208 (Inherited: 0x180)
struct UBP_ShelteredComponent_C : UShelteredComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	int32_t PlanarZSteps; // 0x188(0x04)
	int32_t FirstOffPlaneZResolutionDecrease; // 0x18c(0x04)
	float PlanarTraceDistance; // 0x190(0x04)
	int32_t SecondBurstResolutionDivisor; // 0x194(0x04)
	int32_t SecondBurstFails; // 0x198(0x04)
	int32_t SecondBurstSuccess; // 0x19c(0x04)
	bool FirstBurstConsideredSuccess; // 0x1a0(0x01)
	char pad_1A1[0x3]; // 0x1a1(0x03)
	int32_t SecondOffPlaneZResolutionDecrease; // 0x1a4(0x04)
	enum class ShelteredEnum ShelteredEnum; // 0x1a8(0x01)
	char pad_1A9[0x3]; // 0x1a9(0x03)
	int32_t FailedSecondariesRequiredToFailFirstBurst; // 0x1ac(0x04)
	struct FVector TraceStartWorldOffset; // 0x1b0(0x0c)
	bool CalculateExposure; // 0x1bc(0x01)
	char pad_1BD[0x3]; // 0x1bd(0x03)
	float Exposure; // 0x1c0(0x04)
	float CalculatedShelterCache; // 0x1c4(0x04)
	float BaseSecondsToLoseExposure; // 0x1c8(0x04)
	float BaseSecondsToRecoverExposure; // 0x1cc(0x04)
	float CachedExposureMultiplier; // 0x1d0(0x04)
	char pad_1D4[0x4]; // 0x1d4(0x04)
	struct UCurveFloat* ExposureResistCurve; // 0x1d8(0x08)
	float ExposureLoopTime; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	struct AIcarusPlayerCharacter* OwningPlayer; // 0x1e8(0x08)
	struct FMulticastInlineDelegate OnExposureUpdated; // 0x1f0(0x10)
	struct FDateTime LastTraceResultTime; // 0x200(0x08)

	float GetCurrentExposureValue(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.GetCurrentExposureValue // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	bool IsSheltered(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.IsSheltered // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void OnRep_Exposure(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.OnRep_Exposure // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	float GetExposureRecoveryMultiplier(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.GetExposureRecoveryMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	float GetExposureResistanceMultiplier(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.GetExposureResistanceMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void IsShelteredInteractable(bool& IsShelteredInteractable); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.IsShelteredInteractable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	int32_t GetShelteredTemperatureEffect(int32_t CurrentExternalTemperature); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.GetShelteredTemperatureEffect // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LongCubeBurst(struct FVector Location, bool& Enclosed, struct TArray<struct ABuildingBase*>& HitActors); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.LongCubeBurst // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ProcessBurstResults(int32_t NumPrimaryTraceSuccesses, int32_t NumPrimaryTraceFailures, int32_t NumSecondaryTraceSuccesses, int32_t NumSecondaryTraceFailures); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.ProcessBurstResults // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PerformShelterTrace(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.PerformShelterTrace // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExposureTimer(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.ExposureTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExposureTick(); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.ExposureTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnShelterTracesCompleted(int32_t NumPrimaryTraceSuccesses, int32_t NumPrimaryTraceFailures, int32_t NumSecondaryTraceSuccesses, int32_t NumSecondaryTraceFailures); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.OnShelterTracesCompleted // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_ShelteredComponent(int32_t EntryPoint); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.ExecuteUbergraph_BP_ShelteredComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void OnExposureUpdated__DelegateSignature(float NewExposure); // Function BP_ShelteredComponent.BP_ShelteredComponent_C.OnExposureUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

