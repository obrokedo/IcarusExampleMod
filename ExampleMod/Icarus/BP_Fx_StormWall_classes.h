// BlueprintGeneratedClass BP_Fx_StormWall.BP_Fx_StormWall_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_Fx_StormWall_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	bool UsingDesert; // 0x238(0x01)
	bool UsingSnow; // 0x239(0x01)
	char pad_23A[0x6]; // 0x23a(0x06)
	struct UMaterialInstanceDynamic* StormWallMaterialInstance; // 0x240(0x08)

	void ActivateWall(bool UseDesert, bool UseSnow); // Function BP_Fx_StormWall.BP_Fx_StormWall_C.ActivateWall // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DeactivateWall(); // Function BP_Fx_StormWall.BP_Fx_StormWall_C.DeactivateWall // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_Fx_StormWall.BP_Fx_StormWall_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Fx_StormWall(int32_t EntryPoint); // Function BP_Fx_StormWall.BP_Fx_StormWall_C.ExecuteUbergraph_BP_Fx_StormWall // (Final|UbergraphFunction) // @ game+0x1be0000
};

