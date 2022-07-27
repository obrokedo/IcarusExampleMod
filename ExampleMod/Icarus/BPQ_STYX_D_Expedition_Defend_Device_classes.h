// BlueprintGeneratedClass BPQ_STYX_D_Expedition_Defend_Device.BPQ_STYX_D_Expedition_Defend_Device_C
// Size: 0x380 (Inherited: 0x320)
struct ABPQ_STYX_D_Expedition_Defend_Device_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* Sp6; // 0x328(0x08)
	struct USceneComponent* Sp5; // 0x330(0x08)
	struct USceneComponent* Sp4; // 0x338(0x08)
	struct USceneComponent* Sp3; // 0x340(0x08)
	struct USceneComponent* Sp2; // 0x348(0x08)
	struct USceneComponent* Sp1; // 0x350(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x358(0x08)
	struct TArray<struct FQuestQueriesRowHandle> Tag Queries Row Handle; // 0x360(0x10)
	struct TArray<struct ABP_ManualAISpawnerBasic_C*> Spawners; // 0x370(0x10)

	void SpawnSpawer(struct USceneComponent* Target); // Function BPQ_STYX_D_Expedition_Defend_Device.BPQ_STYX_D_Expedition_Defend_Device_C.SpawnSpawer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool Check(); // Function BPQ_STYX_D_Expedition_Defend_Device.BPQ_STYX_D_Expedition_Defend_Device_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunFlow(); // Function BPQ_STYX_D_Expedition_Defend_Device.BPQ_STYX_D_Expedition_Defend_Device_C.RunFlow // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveQuestEnded(); // Function BPQ_STYX_D_Expedition_Defend_Device.BPQ_STYX_D_Expedition_Defend_Device_C.ReceiveQuestEnded // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_STYX_D_Expedition_Defend_Device.BPQ_STYX_D_Expedition_Defend_Device_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_STYX_D_Expedition_Defend_Device(int32_t EntryPoint); // Function BPQ_STYX_D_Expedition_Defend_Device.BPQ_STYX_D_Expedition_Defend_Device_C.ExecuteUbergraph_BPQ_STYX_D_Expedition_Defend_Device // (Final|UbergraphFunction) // @ game+0x1be0000
};

