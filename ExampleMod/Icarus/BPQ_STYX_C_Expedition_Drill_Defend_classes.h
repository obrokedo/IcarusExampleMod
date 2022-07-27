// BlueprintGeneratedClass BPQ_STYX_C_Expedition_Drill_Defend.BPQ_STYX_C_Expedition_Drill_Defend_C
// Size: 0x390 (Inherited: 0x320)
struct ABPQ_STYX_C_Expedition_Drill_Defend_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* Sp3; // 0x328(0x08)
	struct USceneComponent* Sp1; // 0x330(0x08)
	struct USceneComponent* Sp6; // 0x338(0x08)
	struct USceneComponent* Sp5; // 0x340(0x08)
	struct USceneComponent* Sp4; // 0x348(0x08)
	struct USceneComponent* Sp2; // 0x350(0x08)
	struct UBPQC_PawnSwarm_C* BPQC_TeenageWormSwarm; // 0x358(0x08)
	struct UBPQC_PawnSwarm_C* BPQC_CaveWormSwarm; // 0x360(0x08)
	struct UBPQC_PersistantBlocker_C* BPQC_PersistantBlocker; // 0x368(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x370(0x08)
	struct TArray<struct ABP_ManualAISpawnerBasic_C*> Spawners; // 0x378(0x10)
	struct UCurveFloat* WormSpawnTime; // 0x388(0x08)

	void SpawnSpawer(struct USceneComponent* Target); // Function BPQ_STYX_C_Expedition_Drill_Defend.BPQ_STYX_C_Expedition_Drill_Defend_C.SpawnSpawer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool Check(); // Function BPQ_STYX_C_Expedition_Drill_Defend.BPQ_STYX_C_Expedition_Drill_Defend_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_STYX_C_Expedition_Drill_Defend.BPQ_STYX_C_Expedition_Drill_Defend_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ManualWormSpawn(); // Function BPQ_STYX_C_Expedition_Drill_Defend.BPQ_STYX_C_Expedition_Drill_Defend_C.ManualWormSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveQuestEnded(); // Function BPQ_STYX_C_Expedition_Drill_Defend.BPQ_STYX_C_Expedition_Drill_Defend_C.ReceiveQuestEnded // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void RunFlow(); // Function BPQ_STYX_C_Expedition_Drill_Defend.BPQ_STYX_C_Expedition_Drill_Defend_C.RunFlow // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_STYX_C_Expedition_Drill_Defend(int32_t EntryPoint); // Function BPQ_STYX_C_Expedition_Drill_Defend.BPQ_STYX_C_Expedition_Drill_Defend_C.ExecuteUbergraph_BPQ_STYX_C_Expedition_Drill_Defend // (Final|UbergraphFunction) // @ game+0x1be0000
};

