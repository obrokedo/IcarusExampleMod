// BlueprintGeneratedClass BPQ_OLY_Omni_Recovery_Progress.BPQ_OLY_Omni_Recovery_Progress_C
// Size: 0x331 (Inherited: 0x320)
struct ABPQ_OLY_Omni_Recovery_Progress_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	bool Is Active; // 0x330(0x01)

	bool Check(); // Function BPQ_OLY_Omni_Recovery_Progress.BPQ_OLY_Omni_Recovery_Progress_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetDescription(struct FText& InDescription, struct FText& OutDescription, bool& bOutComplete); // Function BPQ_OLY_Omni_Recovery_Progress.BPQ_OLY_Omni_Recovery_Progress_C.GetDescription // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnActiveStateUpdated(bool IsActive); // Function BPQ_OLY_Omni_Recovery_Progress.BPQ_OLY_Omni_Recovery_Progress_C.OnActiveStateUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunOperations(float DeltaSeconds); // Function BPQ_OLY_Omni_Recovery_Progress.BPQ_OLY_Omni_Recovery_Progress_C.RunOperations // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_OLY_Omni_Recovery_Progress.BPQ_OLY_Omni_Recovery_Progress_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_OLY_Omni_Recovery_Progress(int32_t EntryPoint); // Function BPQ_OLY_Omni_Recovery_Progress.BPQ_OLY_Omni_Recovery_Progress_C.ExecuteUbergraph_BPQ_OLY_Omni_Recovery_Progress // (Final|UbergraphFunction) // @ game+0x1be0000
};

