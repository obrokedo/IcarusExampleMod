// BlueprintGeneratedClass BPQ_Omni_OLY_Research_Analyzer_Sample_Deposit.BPQ_Omni_OLY_Research_Analyzer_Sample_Deposit_C
// Size: 0x334 (Inherited: 0x320)
struct ABPQ_Omni_OLY_Research_Analyzer_Sample_Deposit_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	float RequiredScales; // 0x330(0x04)

	void GetDescription(struct FText& InDescription, struct FText& OutDescription, bool& bOutComplete); // Function BPQ_Omni_OLY_Research_Analyzer_Sample_Deposit.BPQ_Omni_OLY_Research_Analyzer_Sample_Deposit_C.GetDescription // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool Check(); // Function BPQ_Omni_OLY_Research_Analyzer_Sample_Deposit.BPQ_Omni_OLY_Research_Analyzer_Sample_Deposit_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunOperations(float DeltaSeconds); // Function BPQ_Omni_OLY_Research_Analyzer_Sample_Deposit.BPQ_Omni_OLY_Research_Analyzer_Sample_Deposit_C.RunOperations // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_Omni_OLY_Research_Analyzer_Sample_Deposit(int32_t EntryPoint); // Function BPQ_Omni_OLY_Research_Analyzer_Sample_Deposit.BPQ_Omni_OLY_Research_Analyzer_Sample_Deposit_C.ExecuteUbergraph_BPQ_Omni_OLY_Research_Analyzer_Sample_Deposit // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

