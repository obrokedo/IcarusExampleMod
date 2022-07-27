// BlueprintGeneratedClass BP_IcarusRespawnShipSpawn.BP_IcarusRespawnShipSpawn_C
// Size: 0x320 (Inherited: 0x2b0)
struct ABP_IcarusRespawnShipSpawn_C : AIcarusActor {
	struct UStaticMeshComponent* SM_DS_Podhopper; // 0x2b0(0x08)
	struct UStaticMeshComponent* LocatorBeacon; // 0x2b8(0x08)
	struct USceneComponent* TempDPPosition; // 0x2c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c8(0x08)
	bool Assigned; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	int32_t Group; // 0x2d4(0x04)
	bool ShowEditorLocator; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct TArray<struct FColor> GroupColor; // 0x2e0(0x10)
	struct FString PlayerUID; // 0x2f0(0x10)
	bool DebugWithoutBackend; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	float CooldownTime; // 0x304(0x04)
	struct FBiomesRowHandle Biome; // 0x308(0x18)

	void UpdateBiomeValue(); // Function BP_IcarusRespawnShipSpawn.BP_IcarusRespawnShipSpawn_C.UpdateBiomeValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UnassignSpawn(); // Function BP_IcarusRespawnShipSpawn.BP_IcarusRespawnShipSpawn_C.UnassignSpawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AssignSpawn(struct FString PlayerID); // Function BP_IcarusRespawnShipSpawn.BP_IcarusRespawnShipSpawn_C.AssignSpawn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UserConstructionScript(); // Function BP_IcarusRespawnShipSpawn.BP_IcarusRespawnShipSpawn_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

