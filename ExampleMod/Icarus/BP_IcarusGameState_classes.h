// BlueprintGeneratedClass BP_IcarusGameState.BP_IcarusGameState_C
// Size: 0x490 (Inherited: 0x450)
struct ABP_IcarusGameState_C : AIcarusGameStateSurvival {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UBP_VoxelResourceDistribution_C* BP_VoxelResourceDistribution; // 0x458(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x460(0x08)
	struct AIcarusPlayerCharacter* Host; // 0x468(0x08)
	struct FText Text; // 0x470(0x18)
	struct ABP_DialogueManager_C* DialogueManager; // 0x488(0x08)

	bool IsInLastMomentsOfSession(); // Function BP_IcarusGameState.BP_IcarusGameState_C.IsInLastMomentsOfSession // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetSessionSpawnGroup(int32_t& PlayerSpawnGroup, bool& Initialised); // Function BP_IcarusGameState.BP_IcarusGameState_C.GetSessionSpawnGroup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Log(struct FString Description); // Function BP_IcarusGameState.BP_IcarusGameState_C.Log // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_IcarusGameState.BP_IcarusGameState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void Multi_SpawnFloatingDamageNumbers(struct FVector Location, enum class EIcarusDamageType DamageType, int32_t Value, bool CriticalHit); // Function BP_IcarusGameState.BP_IcarusGameState_C.Multi_SpawnFloatingDamageNumbers // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SpawnFloatingDamageNumbers(struct AActor* Actor, struct FIcarusDamagePacket& DamagePacket); // Function BP_IcarusGameState.BP_IcarusGameState_C.SpawnFloatingDamageNumbers // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void Multi_DamageLogging(struct AActor* Actor, struct FIcarusDamagePacket DamagePacket); // Function BP_IcarusGameState.BP_IcarusGameState_C.Multi_DamageLogging // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_IcarusGameState(int32_t EntryPoint); // Function BP_IcarusGameState.BP_IcarusGameState_C.ExecuteUbergraph_BP_IcarusGameState // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

