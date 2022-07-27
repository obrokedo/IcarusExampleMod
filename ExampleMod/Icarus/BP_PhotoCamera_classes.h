// BlueprintGeneratedClass BP_PhotoCamera.BP_PhotoCamera_C
// Size: 0x524 (Inherited: 0x4c0)
struct ABP_PhotoCamera_C : ACharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	struct UCameraComponent* Camera; // 0x4c8(0x08)
	struct UPostProcessComponent* PostProcess; // 0x4d0(0x08)
	struct UBoxComponent* Box; // 0x4d8(0x08)
	struct UStaticMeshComponent* FocalCube; // 0x4e0(0x08)
	struct USpringArmComponent* SpringArm; // 0x4e8(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* OwnerCharacter; // 0x4f0(0x08)
	bool KeepRelativeControllerRotation; // 0x4f8(0x01)
	bool MaintainHeight; // 0x4f9(0x01)
	bool LookAtPlayer; // 0x4fa(0x01)
	char pad_4FB[0x1]; // 0x4fb(0x01)
	struct FVector LookAtPlayerOffset; // 0x4fc(0x0c)
	struct UUMG_PhotoUI_C* PhotoCameraUI; // 0x508(0x08)
	float ResolutionMultiplier; // 0x510(0x04)
	float MaxDistanceToPlayer; // 0x514(0x04)
	float VerticalInputAxis; // 0x518(0x04)
	float SprintSpeedMultiplier; // 0x51c(0x04)
	float BaseCameraSpeed; // 0x520(0x04)

	void CanMoveInDirection(struct FVector InputDirection, float InputScale, bool& CanMove); // Function BP_PhotoCamera.BP_PhotoCamera_C.CanMoveInDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ResolutionMultiplierChanged(float Multiplier); // Function BP_PhotoCamera.BP_PhotoCamera_C.ResolutionMultiplierChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LookAtPlayerChanged(bool bIsChecked); // Function BP_PhotoCamera.BP_PhotoCamera_C.LookAtPlayerChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MaintainHeightChanged(bool bIsChecked); // Function BP_PhotoCamera.BP_PhotoCamera_C.MaintainHeightChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CameraLagChanged(float Value); // Function BP_PhotoCamera.BP_PhotoCamera_C.CameraLagChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CameraSpeedChanged(float Value); // Function BP_PhotoCamera.BP_PhotoCamera_C.CameraSpeedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExposureChanged(float Value); // Function BP_PhotoCamera.BP_PhotoCamera_C.ExposureChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FOVChanged(float Value); // Function BP_PhotoCamera.BP_PhotoCamera_C.FOVChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_LeftAlt_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_PhotoCamera.BP_PhotoCamera_C.InpActEvt_LeftAlt_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Interact_K2Node_InputActionEvent_9(struct FKey Key); // Function BP_PhotoCamera.BP_PhotoCamera_C.InpActEvt_Interact_K2Node_InputActionEvent_9 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Jump_K2Node_InputActionEvent_8(struct FKey Key); // Function BP_PhotoCamera.BP_PhotoCamera_C.InpActEvt_Jump_K2Node_InputActionEvent_8 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Jump_K2Node_InputActionEvent_7(struct FKey Key); // Function BP_PhotoCamera.BP_PhotoCamera_C.InpActEvt_Jump_K2Node_InputActionEvent_7 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Crouch_K2Node_InputActionEvent_6(struct FKey Key); // Function BP_PhotoCamera.BP_PhotoCamera_C.InpActEvt_Crouch_K2Node_InputActionEvent_6 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Crouch_K2Node_InputActionEvent_5(struct FKey Key); // Function BP_PhotoCamera.BP_PhotoCamera_C.InpActEvt_Crouch_K2Node_InputActionEvent_5 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Sprint_K2Node_InputActionEvent_4(struct FKey Key); // Function BP_PhotoCamera.BP_PhotoCamera_C.InpActEvt_Sprint_K2Node_InputActionEvent_4 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Sprint_K2Node_InputActionEvent_3(struct FKey Key); // Function BP_PhotoCamera.BP_PhotoCamera_C.InpActEvt_Sprint_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_HotbarForward_K2Node_InputActionEvent_2(struct FKey Key); // Function BP_PhotoCamera.BP_PhotoCamera_C.InpActEvt_HotbarForward_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_HotbarBack_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_PhotoCamera.BP_PhotoCamera_C.InpActEvt_HotbarBack_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x1be0000
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_4(float AxisValue); // Function BP_PhotoCamera.BP_PhotoCamera_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_4 // (BlueprintEvent) // @ game+0x1be0000
	void InpAxisEvt_LookRight_K2Node_InputAxisEvent_2(float AxisValue); // Function BP_PhotoCamera.BP_PhotoCamera_C.InpAxisEvt_LookRight_K2Node_InputAxisEvent_2 // (BlueprintEvent) // @ game+0x1be0000
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3(float AxisValue); // Function BP_PhotoCamera.BP_PhotoCamera_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3 // (BlueprintEvent) // @ game+0x1be0000
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_5(float AxisValue); // Function BP_PhotoCamera.BP_PhotoCamera_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_5 // (BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_PhotoCamera.BP_PhotoCamera_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void BindToUIEvents(); // Function BP_PhotoCamera.BP_PhotoCamera_C.BindToUIEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SettingsUpdated(struct FPostProcessSettings Settings); // Function BP_PhotoCamera.BP_PhotoCamera_C.SettingsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceivePossessed(struct AController* NewController); // Function BP_PhotoCamera.BP_PhotoCamera_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveUnpossessed(struct AController* OldController); // Function BP_PhotoCamera.BP_PhotoCamera_C.ReceiveUnpossessed // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ClientPossessed(); // Function BP_PhotoCamera.BP_PhotoCamera_C.ClientPossessed // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ClientUnpossessed(); // Function BP_PhotoCamera.BP_PhotoCamera_C.ClientUnpossessed // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ServerSetFlySpeed(float FlySpeed); // Function BP_PhotoCamera.BP_PhotoCamera_C.ServerSetFlySpeed // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_PhotoCamera(int32_t EntryPoint); // Function BP_PhotoCamera.BP_PhotoCamera_C.ExecuteUbergraph_BP_PhotoCamera // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

