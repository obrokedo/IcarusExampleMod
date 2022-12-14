// BlueprintGeneratedClass BP_PlayerPreview.BP_PlayerPreview_C
// Size: 0x2c0 (Inherited: 0x24c)
struct ABP_PlayerPreview_C : ABP_ActorPreview_C {
	char pad_24C[0x4]; // 0x24c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct USkeletalMeshComponent* PlayerMesh; // 0x258(0x08)
	struct AIcarusPlayerCharacter* Player; // 0x260(0x08)
	struct TArray<struct USkeletalMeshComponent*> ArmourPieces; // 0x268(0x10)
	bool UpdateEquipment; // 0x278(0x01)
	bool UseMasterPose; // 0x279(0x01)
	char pad_27A[0x2]; // 0x27a(0x02)
	struct FCharacterCosmetics CosmeticData; // 0x27c(0x34)
	struct FPreviewCameraSettingsEnum CurrentCameraFocus; // 0x2b0(0x10)

	void ApplyDefaultMaterialOverride(struct USkeletalMeshComponent* MeshComponent); // Function BP_PlayerPreview.BP_PlayerPreview_C.ApplyDefaultMaterialOverride // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TickCameraPosition(float DeltaSeconds, bool ForceInstant); // Function BP_PlayerPreview.BP_PlayerPreview_C.TickCameraPosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetCameraFocus(struct FPreviewCameraSettingsEnum NewCameraFocus, bool InstantUpdate); // Function BP_PlayerPreview.BP_PlayerPreview_C.SetCameraFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetShowOnlyComponents(struct TArray<struct UPrimitiveComponent*>& OutComponents); // Function BP_PlayerPreview.BP_PlayerPreview_C.GetShowOnlyComponents // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ForceLOD_OnSkeletalMesh(struct USkeletalMeshComponent* InSkeletalMeshComponent, bool ForceLOD_1); // Function BP_PlayerPreview.BP_PlayerPreview_C.ForceLOD_OnSkeletalMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ClearCurrentMeshes(); // Function BP_PlayerPreview.BP_PlayerPreview_C.ClearCurrentMeshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckPlayerMeshes(); // Function BP_PlayerPreview.BP_PlayerPreview_C.CheckPlayerMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetPlayer(struct AIcarusPlayerCharacter*& Player); // Function BP_PlayerPreview.BP_PlayerPreview_C.GetPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void SetPlayer(struct AIcarusPlayerCharacter* InPlayer); // Function BP_PlayerPreview.BP_PlayerPreview_C.SetPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ConstructPreviewMeshArray(struct TArray<struct USkeletalMesh*>& MeshArray); // Function BP_PlayerPreview.BP_PlayerPreview_C.ConstructPreviewMeshArray // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ConstructPlayerMeshArray(struct TArray<struct USkeletalMesh*>& MeshArray, struct TArray<struct TSoftClassPtr<UObject>>& MeshAnimBPs, struct USkeletalMesh*& BodyMesh); // Function BP_PlayerPreview.BP_PlayerPreview_C.ConstructPlayerMeshArray // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdatePlayerMeshes(bool Force); // Function BP_PlayerPreview.BP_PlayerPreview_C.UpdatePlayerMeshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdatePreviewVisibility(); // Function BP_PlayerPreview.BP_PlayerPreview_C.UpdatePreviewVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UserConstructionScript(); // Function BP_PlayerPreview.BP_PlayerPreview_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerPreview.BP_PlayerPreview_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void UpdateActorPreview(bool Visible); // Function BP_PlayerPreview.BP_PlayerPreview_C.UpdateActorPreview // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerPreview.BP_PlayerPreview_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_PlayerPreview(int32_t EntryPoint); // Function BP_PlayerPreview.BP_PlayerPreview_C.ExecuteUbergraph_BP_PlayerPreview // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

