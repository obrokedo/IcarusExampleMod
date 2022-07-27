// BlueprintGeneratedClass BPQ_OLY_Omni_Research_2_Formation_Melt.BPQ_OLY_Omni_Research_2_Formation_Melt_C
// Size: 0x334 (Inherited: 0x320)
struct ABPQ_OLY_Omni_Research_2_Formation_Melt_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	float MaxHeat; // 0x330(0x04)

	int32_t GetNearbyHeat(); // Function BPQ_OLY_Omni_Research_2_Formation_Melt.BPQ_OLY_Omni_Research_2_Formation_Melt_C.GetNearbyHeat // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool Check(); // Function BPQ_OLY_Omni_Research_2_Formation_Melt.BPQ_OLY_Omni_Research_2_Formation_Melt_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunFlow(); // Function BPQ_OLY_Omni_Research_2_Formation_Melt.BPQ_OLY_Omni_Research_2_Formation_Melt_C.RunFlow // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void RunOperations(float DeltaSeconds); // Function BPQ_OLY_Omni_Research_2_Formation_Melt.BPQ_OLY_Omni_Research_2_Formation_Melt_C.RunOperations // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_OLY_Omni_Research_2_Formation_Melt(int32_t EntryPoint); // Function BPQ_OLY_Omni_Research_2_Formation_Melt.BPQ_OLY_Omni_Research_2_Formation_Melt_C.ExecuteUbergraph_BPQ_OLY_Omni_Research_2_Formation_Melt // (Final|UbergraphFunction) // @ game+0x1be0000
};

