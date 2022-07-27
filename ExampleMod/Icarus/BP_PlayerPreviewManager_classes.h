// BlueprintGeneratedClass BP_PlayerPreviewManager.BP_PlayerPreviewManager_C
// Size: 0x2dc (Inherited: 0x220)
struct ABP_PlayerPreviewManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct ULevelStreamingDynamic* LoadedStreamingLevel; // 0x230(0x08)
	struct TSoftObjectPtr<UWorld> CurrentWorld; // 0x238(0x28)
	struct ABP_PlayerPreview_HAB_Selection_C* PreviewCharacter; // 0x260(0x08)
	struct FCharacterCosmetics CosmeticData; // 0x268(0x34)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct FPreviewCameraSettingsEnum CameraFocus; // 0x2a0(0x10)
	struct TSoftObjectPtr<UWorld> DesiredDiorama; // 0x2b0(0x28)
	float CurrentFadeAmount; // 0x2d8(0x04)

	void EndLevelLoadEffects(); // Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.EndLevelLoadEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BeginLevelLoadEffects(); // Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.BeginLevelLoadEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateCharacterPreview(struct FCharacterCosmetics CosmeticData, struct FPreviewCameraSettingsEnum NewCameraFocus, struct TSoftObjectPtr<UWorld> Diorama, bool ForceWearSpacesuit); // Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.UpdateCharacterPreview // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CharacterPreviewUpdated(struct FCharacterCosmetics CosmeticData); // Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.CharacterPreviewUpdated // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateCurrentDiorama(); // Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.UpdateCurrentDiorama // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLevelLoaded(); // Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.OnLevelLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DisableDioramaPreview(bool IsEndingPlay); // Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.DisableDioramaPreview // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_PlayerPreviewManager(int32_t EntryPoint); // Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.ExecuteUbergraph_BP_PlayerPreviewManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

