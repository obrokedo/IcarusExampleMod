// BlueprintGeneratedClass BPQ_STYX_B_Expedition_Collect_Radar.BPQ_STYX_B_Expedition_Collect_Radar_C
// Size: 0x3b8 (Inherited: 0x364)
struct ABPQ_STYX_B_Expedition_Collect_Radar_C : ABPQ_Common_Collect_Drophip_C {
	char pad_364[0x4]; // 0x364(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct FDialogueRowHandle Dialogue; // 0x370(0x18)
	struct FDialogueRowHandle Dialogue_1; // 0x388(0x18)
	struct FDialogueRowHandle Dialogue_2; // 0x3a0(0x18)

	void Setup(bool bFirstTime); // Function BPQ_STYX_B_Expedition_Collect_Radar.BPQ_STYX_B_Expedition_Collect_Radar_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void CustomEvent_1(); // Function BPQ_STYX_B_Expedition_Collect_Radar.BPQ_STYX_B_Expedition_Collect_Radar_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CustomEvent(); // Function BPQ_STYX_B_Expedition_Collect_Radar.BPQ_STYX_B_Expedition_Collect_Radar_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CustomEvent_2(); // Function BPQ_STYX_B_Expedition_Collect_Radar.BPQ_STYX_B_Expedition_Collect_Radar_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_STYX_B_Expedition_Collect_Radar(int32_t EntryPoint); // Function BPQ_STYX_B_Expedition_Collect_Radar.BPQ_STYX_B_Expedition_Collect_Radar_C.ExecuteUbergraph_BPQ_STYX_B_Expedition_Collect_Radar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

