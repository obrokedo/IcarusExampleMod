// BlueprintGeneratedClass BPQ_OLY_Bedroll.BPQ_OLY_Bedroll_C
// Size: 0x331 (Inherited: 0x320)
struct ABPQ_OLY_Bedroll_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	bool IsSheltered; // 0x330(0x01)

	bool Check(); // Function BPQ_OLY_Bedroll.BPQ_OLY_Bedroll_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunOperations(float DeltaSeconds); // Function BPQ_OLY_Bedroll.BPQ_OLY_Bedroll_C.RunOperations // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_OLY_Bedroll(int32_t EntryPoint); // Function BPQ_OLY_Bedroll.BPQ_OLY_Bedroll_C.ExecuteUbergraph_BPQ_OLY_Bedroll // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

