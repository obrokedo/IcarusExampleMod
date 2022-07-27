// BlueprintGeneratedClass BPQ_OLY_Riverlands_Research.BPQ_OLY_Riverlands_Research_C
// Size: 0x330 (Inherited: 0x320)
struct ABPQ_OLY_Riverlands_Research_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)

	bool Check(); // Function BPQ_OLY_Riverlands_Research.BPQ_OLY_Riverlands_Research_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunFlow(); // Function BPQ_OLY_Riverlands_Research.BPQ_OLY_Riverlands_Research_C.RunFlow // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void HandleQuestEvent(struct FQuestEventsEnum Event, struct AQuest* Quest); // Function BPQ_OLY_Riverlands_Research.BPQ_OLY_Riverlands_Research_C.HandleQuestEvent // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_OLY_Riverlands_Research(int32_t EntryPoint); // Function BPQ_OLY_Riverlands_Research.BPQ_OLY_Riverlands_Research_C.ExecuteUbergraph_BPQ_OLY_Riverlands_Research // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

