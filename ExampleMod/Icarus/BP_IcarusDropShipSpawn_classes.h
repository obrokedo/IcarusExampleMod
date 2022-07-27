// BlueprintGeneratedClass BP_IcarusDropShipSpawn.BP_IcarusDropShipSpawn_C
// Size: 0x320 (Inherited: 0x2e8)
struct ABP_IcarusDropShipSpawn_C : AIcarusRocketSpawnBase {
	struct UStaticMeshComponent* SM_DS_Podhopper; // 0x2e8(0x08)
	struct UStaticMeshComponent* LocatorBeacon; // 0x2f0(0x08)
	struct USceneComponent* TempDPPosition; // 0x2f8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x300(0x08)
	int32_t Group; // 0x308(0x04)
	bool ShowEditorLocator; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	struct TArray<struct FColor> GroupColor; // 0x310(0x10)

	int32_t GetGroupIndex(); // Function BP_IcarusDropShipSpawn.BP_IcarusDropShipSpawn_C.GetGroupIndex // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void UserConstructionScript(); // Function BP_IcarusDropShipSpawn.BP_IcarusDropShipSpawn_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

