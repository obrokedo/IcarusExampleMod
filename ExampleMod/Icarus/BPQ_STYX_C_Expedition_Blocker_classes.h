// BlueprintGeneratedClass BPQ_STYX_C_Expedition_Blocker.BPQ_STYX_C_Expedition_Blocker_C
// Size: 0x330 (Inherited: 0x320)
struct ABPQ_STYX_C_Expedition_Blocker_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)

	bool Check(); // Function BPQ_STYX_C_Expedition_Blocker.BPQ_STYX_C_Expedition_Blocker_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_STYX_C_Expedition_Blocker.BPQ_STYX_C_Expedition_Blocker_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void HandleQuestEvent(struct FQuestEventsEnum Event, struct AQuest* Quest); // Function BPQ_STYX_C_Expedition_Blocker.BPQ_STYX_C_Expedition_Blocker_C.HandleQuestEvent // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ClearFirstBlocker(); // Function BPQ_STYX_C_Expedition_Blocker.BPQ_STYX_C_Expedition_Blocker_C.ClearFirstBlocker // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunFlow(); // Function BPQ_STYX_C_Expedition_Blocker.BPQ_STYX_C_Expedition_Blocker_C.RunFlow // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveQuestEnded(); // Function BPQ_STYX_C_Expedition_Blocker.BPQ_STYX_C_Expedition_Blocker_C.ReceiveQuestEnded // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_STYX_C_Expedition_Blocker(int32_t EntryPoint); // Function BPQ_STYX_C_Expedition_Blocker.BPQ_STYX_C_Expedition_Blocker_C.ExecuteUbergraph_BPQ_STYX_C_Expedition_Blocker // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

