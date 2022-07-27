// BlueprintGeneratedClass BPQ_STYX_D_Expedition_Activate_Device.BPQ_STYX_D_Expedition_Activate_Device_C
// Size: 0x348 (Inherited: 0x320)
struct ABPQ_STYX_D_Expedition_Activate_Device_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	struct FDialogueRowHandle Initial; // 0x330(0x18)

	bool Check(); // Function BPQ_STYX_D_Expedition_Activate_Device.BPQ_STYX_D_Expedition_Activate_Device_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunOperations(float DeltaSeconds); // Function BPQ_STYX_D_Expedition_Activate_Device.BPQ_STYX_D_Expedition_Activate_Device_C.RunOperations // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveQuestEnded(); // Function BPQ_STYX_D_Expedition_Activate_Device.BPQ_STYX_D_Expedition_Activate_Device_C.ReceiveQuestEnded // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_STYX_D_Expedition_Activate_Device(int32_t EntryPoint); // Function BPQ_STYX_D_Expedition_Activate_Device.BPQ_STYX_D_Expedition_Activate_Device_C.ExecuteUbergraph_BPQ_STYX_D_Expedition_Activate_Device // (Final|UbergraphFunction) // @ game+0x1be0000
};

