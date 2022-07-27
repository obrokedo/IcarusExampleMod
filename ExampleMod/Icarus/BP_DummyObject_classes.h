// BlueprintGeneratedClass BP_DummyObject.BP_DummyObject_C
// Size: 0x429 (Inherited: 0x2b0)
struct ABP_DummyObject_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2b8(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2c0(0x08)
	struct USceneComponent* Scene; // 0x2c8(0x08)
	struct FItemData Item; // 0x2d0(0xa0)
	int32_t ItemLocation; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct UInventory* ItemInventory; // 0x378(0x08)
	struct UMaterialInterface* NewMaterial; // 0x380(0x08)
	struct FItemData LocalItem; // 0x388(0xa0)
	bool SkeletalSet; // 0x428(0x01)

	void UpdateVisibility(bool Visibility); // Function BP_DummyObject.BP_DummyObject_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CreateLocal(struct FItemData Item); // Function BP_DummyObject.BP_DummyObject_C.CreateLocal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Create(); // Function BP_DummyObject.BP_DummyObject_C.Create // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetState(enum class ProcessorPreview Preview); // Function BP_DummyObject.BP_DummyObject_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_Item(); // Function BP_DummyObject.BP_DummyObject_C.OnRep_Item // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_F290FD0849F356AD3452B8A99B8E0F60(struct UObject* Loaded); // Function BP_DummyObject.BP_DummyObject_C.OnLoaded_F290FD0849F356AD3452B8A99B8E0F60 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LoadItemMesh(struct TSoftObjectPtr<UObject> MeshToLoad); // Function BP_DummyObject.BP_DummyObject_C.LoadItemMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_DummyObject.BP_DummyObject_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void Initilaise(struct FItemData Item, int32_t Location, struct UInventory* Inventory); // Function BP_DummyObject.BP_DummyObject_C.Initilaise // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_DummyObject(int32_t EntryPoint); // Function BP_DummyObject.BP_DummyObject_C.ExecuteUbergraph_BP_DummyObject // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

