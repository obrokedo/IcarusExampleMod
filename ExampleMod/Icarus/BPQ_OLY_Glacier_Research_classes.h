// BlueprintGeneratedClass BPQ_OLY_Glacier_Research.BPQ_OLY_Glacier_Research_C
// Size: 0x330 (Inherited: 0x320)
struct ABPQ_OLY_Glacier_Research_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)

	bool Check(); // Function BPQ_OLY_Glacier_Research.BPQ_OLY_Glacier_Research_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_OLY_Glacier_Research.BPQ_OLY_Glacier_Research_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void RunOperations(float DeltaSeconds); // Function BPQ_OLY_Glacier_Research.BPQ_OLY_Glacier_Research_C.RunOperations // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void RunFlow(); // Function BPQ_OLY_Glacier_Research.BPQ_OLY_Glacier_Research_C.RunFlow // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_OLY_Glacier_Research(int32_t EntryPoint); // Function BPQ_OLY_Glacier_Research.BPQ_OLY_Glacier_Research_C.ExecuteUbergraph_BPQ_OLY_Glacier_Research // (Final|UbergraphFunction) // @ game+0x1be0000
};

