// BlueprintGeneratedClass BP_ManualAISpawnerBasic.BP_ManualAISpawnerBasic_C
// Size: 0x309 (Inherited: 0x2b0)
struct ABP_ManualAISpawnerBasic_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b8(0x08)
	struct FAISetupRowHandle AISetup; // 0x2c0(0x18)
	struct FEpicCreaturesRowHandle EpicCreature; // 0x2d8(0x18)
	int32_t Level; // 0x2f0(0x04)
	float RespawnTime; // 0x2f4(0x04)
	float CurrentTime; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct AActor* CurrentAI; // 0x300(0x08)
	bool FirstTime; // 0x308(0x01)

	void ReceiveTick(float DeltaSeconds); // Function BP_ManualAISpawnerBasic.BP_ManualAISpawnerBasic_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ActorDeath(struct UActorState* ActorState); // Function BP_ManualAISpawnerBasic.BP_ManualAISpawnerBasic_C.ActorDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_ManualAISpawnerBasic(int32_t EntryPoint); // Function BP_ManualAISpawnerBasic.BP_ManualAISpawnerBasic_C.ExecuteUbergraph_BP_ManualAISpawnerBasic // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

