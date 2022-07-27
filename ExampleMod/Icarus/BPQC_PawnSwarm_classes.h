// BlueprintGeneratedClass BPQC_PawnSwarm.BPQC_PawnSwarm_C
// Size: 0xe8 (Inherited: 0xb0)
struct UBPQC_PawnSwarm_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	int32_t MaxCreatures; // 0xb8(0x04)
	struct FAISetupRowHandle Creature; // 0xbc(0x18)
	float TimeBetweenSpawns; // 0xd4(0x04)
	struct TArray<struct AIcarusPawn*> NPCs; // 0xd8(0x10)

	bool CanSpawn(); // Function BPQC_PawnSwarm.BPQC_PawnSwarm_C.CanSpawn // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void CreatureDeath(struct UActorState* ActorState); // Function BPQC_PawnSwarm.BPQC_PawnSwarm_C.CreatureDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SpawnPawn(); // Function BPQC_PawnSwarm.BPQC_PawnSwarm_C.SpawnPawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BPQC_PawnSwarm.BPQC_PawnSwarm_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Setup(struct FAISetupRowHandle Creature, int32_t MaxCreatures, float TimeBetweenSpawns); // Function BPQC_PawnSwarm.BPQC_PawnSwarm_C.Setup // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQC_PawnSwarm(int32_t EntryPoint); // Function BPQC_PawnSwarm.BPQC_PawnSwarm_C.ExecuteUbergraph_BPQC_PawnSwarm // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

