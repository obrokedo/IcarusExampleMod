// BlueprintGeneratedClass BPQ_OLY_Omni_Recovery_Launch.BPQ_OLY_Omni_Recovery_Launch_C
// Size: 0x330 (Inherited: 0x320)
struct ABPQ_OLY_Omni_Recovery_Launch_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)

	bool Check(); // Function BPQ_OLY_Omni_Recovery_Launch.BPQ_OLY_Omni_Recovery_Launch_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_OLY_Omni_Recovery_Launch.BPQ_OLY_Omni_Recovery_Launch_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Launched(); // Function BPQ_OLY_Omni_Recovery_Launch.BPQ_OLY_Omni_Recovery_Launch_C.Launched // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_OLY_Omni_Recovery_Launch(int32_t EntryPoint); // Function BPQ_OLY_Omni_Recovery_Launch.BPQ_OLY_Omni_Recovery_Launch_C.ExecuteUbergraph_BPQ_OLY_Omni_Recovery_Launch // (Final|UbergraphFunction) // @ game+0x1be0000
};

