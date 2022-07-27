// BlueprintGeneratedClass BPQ_Styx_A_Expedition_Boss.BPQ_Styx_A_Expedition_Boss_C
// Size: 0x330 (Inherited: 0x320)
struct ABPQ_Styx_A_Expedition_Boss_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)

	bool Check(); // Function BPQ_Styx_A_Expedition_Boss.BPQ_Styx_A_Expedition_Boss_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetDescription(struct FText& InDescription, struct FText& OutDescription, bool& bOutComplete); // Function BPQ_Styx_A_Expedition_Boss.BPQ_Styx_A_Expedition_Boss_C.GetDescription // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveQuestStarted(); // Function BPQ_Styx_A_Expedition_Boss.BPQ_Styx_A_Expedition_Boss_C.ReceiveQuestStarted // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_Styx_A_Expedition_Boss(int32_t EntryPoint); // Function BPQ_Styx_A_Expedition_Boss.BPQ_Styx_A_Expedition_Boss_C.ExecuteUbergraph_BPQ_Styx_A_Expedition_Boss // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

