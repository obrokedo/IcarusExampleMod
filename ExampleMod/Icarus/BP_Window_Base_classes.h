// BlueprintGeneratedClass BP_Window_Base.BP_Window_Base_C
// Size: 0x600 (Inherited: 0x5c3)
struct ABP_Window_Base_C : ABP_DeployableBase_C {
	char pad_5C3[0x5]; // 0x5c3(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c8(0x08)
	struct UAudioOcclusionComponent* AudioOcclusion1; // 0x5d0(0x08)
	struct UBP_WeatherAudioComponent_WindowShutter_C* BP_WeatherAudioComponent_WindowShutter; // 0x5d8(0x08)
	bool Open; // 0x5e0(0x01)
	bool CanChangeState; // 0x5e1(0x01)
	char pad_5E2[0x6]; // 0x5e2(0x06)
	struct FMulticastInlineDelegate OpenStateChanged; // 0x5e8(0x10)
	struct FTimerHandle DelayedDirtyTimer; // 0x5f8(0x08)

	float GetOcclusionValue(); // Function BP_Window_Base.BP_Window_Base_C.GetOcclusionValue // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	void SetOpenableStateOnFoundationActor(); // Function BP_Window_Base.BP_Window_Base_C.SetOpenableStateOnFoundationActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_Open(); // Function BP_Window_Base.BP_Window_Base_C.OnRep_Open // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Open Close Window(struct FHitResult Interaction, bool& Success); // Function BP_Window_Base.BP_Window_Base_C.Open Close Window // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_Window_Base.BP_Window_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Window_Base.BP_Window_Base_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void DirtyShelter(); // Function BP_Window_Base.BP_Window_Base_C.DirtyShelter // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Window_Base(int32_t EntryPoint); // Function BP_Window_Base.BP_Window_Base_C.ExecuteUbergraph_BP_Window_Base // (Final|UbergraphFunction) // @ game+0x1be0000
	void OpenStateChanged__DelegateSignature(bool Open); // Function BP_Window_Base.BP_Window_Base_C.OpenStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

