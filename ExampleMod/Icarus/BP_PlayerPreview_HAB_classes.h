// BlueprintGeneratedClass BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C
// Size: 0x30c (Inherited: 0x2c0)
struct ABP_PlayerPreview_HAB_C : ABP_PlayerPreview_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UDirectionalLightComponent* Light_Bottom; // 0x2c8(0x08)
	struct UPointLightComponent* Light_Rim; // 0x2d0(0x08)
	struct UPointLightComponent* Light_Fill_R; // 0x2d8(0x08)
	struct UPointLightComponent* Light_Fill_L; // 0x2e0(0x08)
	struct UChildActorComponent* Light_Key; // 0x2e8(0x08)
	struct UChildActorComponent* Light_Fill_Blue; // 0x2f0(0x08)
	struct ABP_AtmosphereController_C* AtmoController; // 0x2f8(0x08)
	float testIntensity; // 0x300(0x04)
	bool Switch; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	float NewVar_0_1; // 0x308(0x04)

	void CharacterUpdated(struct FOnlineProfileCharacter Character); // Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.CharacterUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetLightComponents(struct TArray<struct ULightComponent*>& SceneCaptureLights, struct TArray<struct ULightComponent*>& CameraComponentLights); // Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.GetLightComponents // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateCaptureMode(bool UseSceneCapture, bool UseCameraComponent); // Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.UpdateCaptureMode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ClearCurrentMeshes(); // Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.ClearCurrentMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ConstructPlayerMeshArray(struct TArray<struct USkeletalMesh*>& MeshArray, struct TArray<struct TSoftClassPtr<UObject>>& MeshAnimBPs, struct USkeletalMesh*& BodyMesh); // Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.ConstructPlayerMeshArray // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CharacterDataUpdated(struct FCharacterCosmetics CharacterData); // Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.CharacterDataUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void Intensity(); // Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.Intensity // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_PlayerPreview_HAB(int32_t EntryPoint); // Function BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C.ExecuteUbergraph_BP_PlayerPreview_HAB // (Final|UbergraphFunction) // @ game+0x1be0000
};

