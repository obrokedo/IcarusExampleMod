// BlueprintGeneratedClass BP_IcarusMetaSpawn.BP_IcarusMetaSpawn_C
// Size: 0x310 (Inherited: 0x2b0)
struct ABP_IcarusMetaSpawn_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UChildActorComponent* PreviewMeta; // 0x2b8(0x08)
	struct UStaticMeshComponent* LocatorMesh; // 0x2c0(0x08)
	struct UStaticMeshComponent* MetaNode; // 0x2c8(0x08)
	struct FMetaResourceNodesRowHandle Meta Node Handle; // 0x2d0(0x18)
	struct FExoticSpawnEnum Spawn_Identifier; // 0x2e8(0x10)
	bool ShowEditorLocator; // 0x2f8(0x01)
	bool ShowMeshPreview; // 0x2f9(0x01)
	char pad_2FA[0x2]; // 0x2fa(0x02)
	int32_t Group; // 0x2fc(0x04)
	struct TArray<struct FColor> GroupColor; // 0x300(0x10)

	void CheckRowHandles(); // Function BP_IcarusMetaSpawn.BP_IcarusMetaSpawn_C.CheckRowHandles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TogglePreview(); // Function BP_IcarusMetaSpawn.BP_IcarusMetaSpawn_C.TogglePreview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UserConstructionScript(); // Function BP_IcarusMetaSpawn.BP_IcarusMetaSpawn_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_51F87C0E46A04C7697E3B98B88978D42(struct UObject* Loaded); // Function BP_IcarusMetaSpawn.BP_IcarusMetaSpawn_C.OnLoaded_51F87C0E46A04C7697E3B98B88978D42 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_IcarusMetaSpawn.BP_IcarusMetaSpawn_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void Spawn(int32_t MetaAmount); // Function BP_IcarusMetaSpawn.BP_IcarusMetaSpawn_C.Spawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_IcarusMetaSpawn(int32_t EntryPoint); // Function BP_IcarusMetaSpawn.BP_IcarusMetaSpawn_C.ExecuteUbergraph_BP_IcarusMetaSpawn // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

