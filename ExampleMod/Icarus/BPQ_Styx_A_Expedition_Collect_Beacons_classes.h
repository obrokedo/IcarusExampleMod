// BlueprintGeneratedClass BPQ_Styx_A_Expedition_Collect_Beacons.BPQ_Styx_A_Expedition_Collect_Beacons_C
// Size: 0x3b8 (Inherited: 0x364)
struct ABPQ_Styx_A_Expedition_Collect_Beacons_C : ABPQ_Common_Collect_Drophip_C {
	char pad_364[0x4]; // 0x364(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct FDialogueRowHandle Dialogue; // 0x370(0x18)
	struct FDialogueRowHandle Dialogue_1; // 0x388(0x18)
	struct FDialogueRowHandle Dialogue_2; // 0x3a0(0x18)

	void Setup(bool bFirstTime); // Function BPQ_Styx_A_Expedition_Collect_Beacons.BPQ_Styx_A_Expedition_Collect_Beacons_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void CustomEvent_1(); // Function BPQ_Styx_A_Expedition_Collect_Beacons.BPQ_Styx_A_Expedition_Collect_Beacons_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CustomEvent(); // Function BPQ_Styx_A_Expedition_Collect_Beacons.BPQ_Styx_A_Expedition_Collect_Beacons_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CustomEvent_2(); // Function BPQ_Styx_A_Expedition_Collect_Beacons.BPQ_Styx_A_Expedition_Collect_Beacons_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_Styx_A_Expedition_Collect_Beacons(int32_t EntryPoint); // Function BPQ_Styx_A_Expedition_Collect_Beacons.BPQ_Styx_A_Expedition_Collect_Beacons_C.ExecuteUbergraph_BPQ_Styx_A_Expedition_Collect_Beacons // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

