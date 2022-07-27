// BlueprintGeneratedClass BPQ_STYX_C_Expedition.BPQ_STYX_C_Expedition_C
// Size: 0x338 (Inherited: 0x320)
struct ABPQ_STYX_C_Expedition_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UBPQC_PersistantBlocker_C* BPQC_PersistantBlocker; // 0x328(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x330(0x08)

	bool Check(); // Function BPQ_STYX_C_Expedition.BPQ_STYX_C_Expedition_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_STYX_C_Expedition.BPQ_STYX_C_Expedition_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void RunFlow(); // Function BPQ_STYX_C_Expedition.BPQ_STYX_C_Expedition_C.RunFlow // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_STYX_C_Expedition(int32_t EntryPoint); // Function BPQ_STYX_C_Expedition.BPQ_STYX_C_Expedition_C.ExecuteUbergraph_BPQ_STYX_C_Expedition // (Final|UbergraphFunction) // @ game+0x1be0000
};

