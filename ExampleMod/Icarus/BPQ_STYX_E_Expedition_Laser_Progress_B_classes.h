// BlueprintGeneratedClass BPQ_STYX_E_Expedition_Laser_Progress_B.BPQ_STYX_E_Expedition_Laser_Progress_B_C
// Size: 0x334 (Inherited: 0x320)
struct ABPQ_STYX_E_Expedition_Laser_Progress_B_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	float MaxTime; // 0x330(0x04)

	void GetDescription(struct FText& InDescription, struct FText& OutDescription, bool& bOutComplete); // Function BPQ_STYX_E_Expedition_Laser_Progress_B.BPQ_STYX_E_Expedition_Laser_Progress_B_C.GetDescription // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool Check(); // Function BPQ_STYX_E_Expedition_Laser_Progress_B.BPQ_STYX_E_Expedition_Laser_Progress_B_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunOperations(float DeltaSeconds); // Function BPQ_STYX_E_Expedition_Laser_Progress_B.BPQ_STYX_E_Expedition_Laser_Progress_B_C.RunOperations // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_STYX_E_Expedition_Laser_Progress_B(int32_t EntryPoint); // Function BPQ_STYX_E_Expedition_Laser_Progress_B.BPQ_STYX_E_Expedition_Laser_Progress_B_C.ExecuteUbergraph_BPQ_STYX_E_Expedition_Laser_Progress_B // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

