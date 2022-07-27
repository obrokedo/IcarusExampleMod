// BlueprintGeneratedClass BPQ_OLY_Omni_Recovery_Search.BPQ_OLY_Omni_Recovery_Search_C
// Size: 0x348 (Inherited: 0x320)
struct ABPQ_OLY_Omni_Recovery_Search_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	bool Thruster; // 0x330(0x01)
	bool Navigation; // 0x331(0x01)
	char pad_332[0x6]; // 0x332(0x06)
	struct TArray<struct ABP_Mission_Crashed_Base_C*> Out Actors; // 0x338(0x10)

	void AddObjects(bool Navigation, bool Thruster); // Function BPQ_OLY_Omni_Recovery_Search.BPQ_OLY_Omni_Recovery_Search_C.AddObjects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetDescription(struct FText& InDescription, struct FText& OutDescription, bool& bOutComplete); // Function BPQ_OLY_Omni_Recovery_Search.BPQ_OLY_Omni_Recovery_Search_C.GetDescription // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool Check(); // Function BPQ_OLY_Omni_Recovery_Search.BPQ_OLY_Omni_Recovery_Search_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunOperations(float DeltaSeconds); // Function BPQ_OLY_Omni_Recovery_Search.BPQ_OLY_Omni_Recovery_Search_C.RunOperations // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_OLY_Omni_Recovery_Search.BPQ_OLY_Omni_Recovery_Search_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_OLY_Omni_Recovery_Search(int32_t EntryPoint); // Function BPQ_OLY_Omni_Recovery_Search.BPQ_OLY_Omni_Recovery_Search_C.ExecuteUbergraph_BPQ_OLY_Omni_Recovery_Search // (Final|UbergraphFunction) // @ game+0x1be0000
};

