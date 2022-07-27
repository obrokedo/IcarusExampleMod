// BlueprintGeneratedClass BP_IcarusSplineNet.BP_IcarusSplineNet_C
// Size: 0x355 (Inherited: 0x320)
struct ABP_IcarusSplineNet_C : AResourceNetwork {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	struct TArray<struct ABP_IcarusSplineActor_C*> LinkedSplines; // 0x330(0x10)
	struct FLinearColor DebugLineColour; // 0x340(0x10)
	bool TempActive; // 0x350(0x01)
	bool TempBoolPower; // 0x351(0x01)
	bool TempBoolWater; // 0x352(0x01)
	bool TempBoolFuel; // 0x353(0x01)
	bool TempBoolFuellessPower; // 0x354(0x01)

	void RemoveLinkedDevice2(struct ABP_DeployableBase_C* LinkedActor); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.RemoveLinkedDevice2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckOverdraw(int32_t AdditionalConsumer, int32_t AdditionalProvider, bool& Overdraw); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.CheckOverdraw // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool DeactivateDevice(struct ADeployable* Device); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.DeactivateDevice // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool ActivateDevice(struct ADeployable* Device, int32_t Rate); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.ActivateDevice // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Overdraw(); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.Overdraw // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PowerTick(float DeltaTime); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.PowerTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddLinkedDevice(struct ABP_DeployableBase_C* LinkedActor); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.AddLinkedDevice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CreateNewNetworkAtSpline(struct ABP_IcarusSplineActor_C* Spline); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.CreateNewNetworkAtSpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MergeNetwork(struct ABP_IcarusSplineNet_C* NetworkToMerge); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.MergeNetwork // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AreTwoSplinesConnected(struct ABP_IcarusSplineActor_C* SplineA, struct ABP_IcarusSplineActor_C* Spline B, bool& Connected); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.AreTwoSplinesConnected // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RemoveSpline(struct ABP_IcarusSplineActor_C* SplineToRemove); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.RemoveSpline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddSpline(struct ABP_IcarusSplineActor_C* Added Spline); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.AddSpline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Cleanup(); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.Cleanup // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DelayedCleanupCheck(); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.DelayedCleanupCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_IcarusSplineNet(int32_t EntryPoint); // Function BP_IcarusSplineNet.BP_IcarusSplineNet_C.ExecuteUbergraph_BP_IcarusSplineNet // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

