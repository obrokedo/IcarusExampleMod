// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary {

	void UpdateExternalTrackingHMDPosition(struct FTransform& ExternalTrackingTransform); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x27a87a0
	void SetXRTimedInputActionDelegate(struct FName& ActionName, struct FDelegate& InDelegate); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x27a8680
	void SetXRDisconnectDelegate(struct FDelegate& InDisconnectedDelegate); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x27a85e0
	void SetWorldToMetersScale(struct UObject* WorldContext, float NewScale); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a8520
	void SetTrackingOrigin(enum class EHMDTrackingOrigin Origin); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a8430
	void SetSpectatorScreenTexture(struct UTexture* InTexture); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a8320
	void SetSpectatorScreenModeTexturePlusEyeLayout(struct FVector2D EyeRectMin, struct FVector2D EyeRectMax, struct FVector2D TextureRectMin, struct FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x27a8110
	void SetSpectatorScreenMode(enum class ESpectatorScreenMode Mode); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a80a0
	void SetClippingPlanes(float Near, float Far); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a7bf0
	void ResetOrientationAndPosition(float Yaw, enum class EOrientPositionSelector Options); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a7aa0
	bool IsSpectatorScreenModeControllable(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x27a7a70
	bool IsInLowPersistenceMode(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xe2a010
	bool IsHeadMountedDisplayEnabled(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x27a7710
	bool IsHeadMountedDisplayConnected(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x27a76e0
	bool IsDeviceTracking(struct FXRDeviceId& XRDeviceId); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x27a7640
	bool HasValidTrackingPosition(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x27a75f0
	int32_t GetXRSystemFlags(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x27a75c0
	float GetWorldToMetersScale(struct UObject* WorldContext); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x27a7530
	void GetVRFocusState(bool& bUseFocus, bool& bHasFocus); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x27a73d0
	struct FString GetVersionString(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x27a74b0
	struct FTransform GetTrackingToWorldTransform(struct UObject* WorldContext); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x27a7310
	void GetTrackingSensorParameters(struct FVector& Origin, struct FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x27a6f30
	enum class EHMDTrackingOrigin GetTrackingOrigin(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x27a6ef0
	float GetScreenPercentage(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x27a6ec0
	void GetPositionalTrackingCameraParameters(struct FVector& CameraOrigin, struct FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x27a6c50
	float GetPixelDensity(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x27a6c20
	void GetOrientationAndPosition(struct FRotator& DeviceRotation, struct FVector& DevicePosition); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x27a6a70
	int32_t GetNumOfTrackingSensors(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x27a6a40
	void GetMotionControllerData(struct UObject* WorldContext, enum class EControllerHand Hand, struct FXRMotionControllerData& MotionControllerData); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x27a68a0
	enum class EHMDWornState GetHMDWornState(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x27a6750
	struct FName GetHMDDeviceName(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x27a6710
	void GetHMDData(struct UObject* WorldContext, struct FXRHMDData& HMDData); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x27a6630
	void GetDeviceWorldPose(struct UObject* WorldContext, struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& position); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x27a6400
	void GetDevicePose(struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& position); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x27a6210
	bool GetControllerTransformForTime(struct UObject* WorldContext, int32_t ControllerIndex, struct FName MotionSource, struct FTimespan Time, bool& bTimeWasUsed, struct FRotator& Orientation, struct FVector& position, bool& bProvidedLinearVelocity, struct FVector& LinearVelocity, bool& bProvidedAngularVelocity, struct FVector& AngularVelocityRadPerSec); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x27a5e90
	struct TArray<struct FXRDeviceId> EnumerateTrackedDevices(struct FName SystemId, enum class EXRTrackedDeviceType DeviceType); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a5d40
	void EnableLowPersistenceMode(bool bEnable); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1757c10
	bool EnableHMD(bool bEnable); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a5a00
	void DisconnectRemoteXRDevice(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a59e0
	enum class EXRDeviceConnectionResult ConnectRemoteXRDevice(struct FString IpAddress, int32_t BitRate); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a5660
	bool ConfigureGestures(struct FXRGestureConfig& GestureConfig); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x27a55c0
	void ClearXRTimedInputActionDelegate(struct FName& ActionPath); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x27a5540
	void CalibrateExternalTrackingToHMD(struct FTransform& ExternalTrackingTransform); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x27a5450
};

// Class HeadMountedDisplay.MotionControllerComponent
// Size: 0x500 (Inherited: 0x440)
struct UMotionControllerComponent : UPrimitiveComponent {
	int32_t PlayerIndex; // 0x440(0x04)
	enum class EControllerHand Hand; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	struct FName MotionSource; // 0x448(0x08)
	char bDisableLowLatencyUpdate : 1; // 0x450(0x01)
	char pad_450_1 : 7; // 0x450(0x01)
	char pad_451[0x3]; // 0x451(0x03)
	enum class ETrackingStatus CurrentTrackingStatus; // 0x454(0x01)
	bool bDisplayDeviceModel; // 0x455(0x01)
	char pad_456[0x2]; // 0x456(0x02)
	struct FName DisplayModelSource; // 0x458(0x08)
	struct UStaticMesh* CustomDisplayMesh; // 0x460(0x08)
	struct TArray<struct UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x468(0x10)
	char pad_478[0x68]; // 0x478(0x68)
	struct UPrimitiveComponent* DisplayComponent; // 0x4e0(0x08)
	char pad_4E8[0x18]; // 0x4e8(0x18)

	void SetTrackingSource(enum class EControllerHand NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource // (Final|Native|Public|BlueprintCallable) // @ game+0x27a84a0
	void SetTrackingMotionSource(struct FName NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource // (Final|Native|Public|BlueprintCallable) // @ game+0x27a83a0
	void SetShowDeviceModel(bool bShowControllerModel); // Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel // (Final|Native|Public|BlueprintCallable) // @ game+0x27a8010
	void SetDisplayModelSource(struct FName NewDisplayModelSource); // Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource // (Final|Native|Public|BlueprintCallable) // @ game+0x27a7d40
	void SetCustomDisplayMesh(struct UStaticMesh* NewDisplayMesh); // Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x27a7cb0
	void SetAssociatedPlayerIndex(int32_t NewPlayer); // Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x27a7b60
	void OnMotionControllerUpdated(); // Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	bool IsTracked(); // Function HeadMountedDisplay.MotionControllerComponent.IsTracked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x276d040
	enum class EControllerHand GetTrackingSource(); // Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27a72e0
	float GetParameterValue(struct FName InName, bool& bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x27a6b40
	struct FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x27a6780
};

// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMotionTrackedDeviceFunctionLibrary : UBlueprintFunctionLibrary {

	void SetIsControllerMotionTrackingEnabledByDefault(bool enable); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a7dd0
	bool IsMotionTrackingEnabledForSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x27a79a0
	bool IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, enum class EControllerHand Hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x27a78d0
	bool IsMotionTrackingEnabledForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x27a7840
	bool IsMotionTrackedDeviceCountManagementNecessary(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x27a7810
	bool IsMotionSourceTracking(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a7740
	int32_t GetMotionTrackingEnabledControllerCount(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x27a6a10
	int32_t GetMaximumMotionTrackedControllerCount(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x27a6870
	struct FName GetActiveTrackingSystemName(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a5e50
	struct TArray<struct FName> EnumerateMotionSources(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a5cc0
	bool EnableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a5bf0
	bool EnableMotionTrackingOfDevice(int32_t PlayerIndex, enum class EControllerHand Hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a5b20
	bool EnableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a5a90
	void DisableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a5920
	void DisableMotionTrackingOfDevice(int32_t PlayerIndex, enum class EControllerHand Hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a5860
	void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a57e0
	void DisableMotionTrackingOfAllControllers(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a57c0
	void DisableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a5740
};

// Class HeadMountedDisplay.VRNotificationsComponent
// Size: 0x140 (Inherited: 0xb0)
struct UVRNotificationsComponent : UActorComponent {
	struct FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xb0(0x10)
	struct FMulticastInlineDelegate HMDTrackingInitializedDelegate; // 0xc0(0x10)
	struct FMulticastInlineDelegate HMDRecenteredDelegate; // 0xd0(0x10)
	struct FMulticastInlineDelegate HMDLostDelegate; // 0xe0(0x10)
	struct FMulticastInlineDelegate HMDReconnectedDelegate; // 0xf0(0x10)
	struct FMulticastInlineDelegate HMDConnectCanceledDelegate; // 0x100(0x10)
	struct FMulticastInlineDelegate HMDPutOnHeadDelegate; // 0x110(0x10)
	struct FMulticastInlineDelegate HMDRemovedFromHeadDelegate; // 0x120(0x10)
	struct FMulticastInlineDelegate VRControllerRecenteredDelegate; // 0x130(0x10)
};

// Class HeadMountedDisplay.XRAssetFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UXRAssetFunctionLibrary : UBlueprintFunctionLibrary {

	struct UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId); // Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x27a5210
	struct UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(struct AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform); // Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x27a4ba0
};

// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// Size: 0x60 (Inherited: 0x30)
struct UAsyncTask_LoadXRDeviceVisComponent : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnModelLoaded; // 0x30(0x10)
	struct FMulticastInlineDelegate OnLoadFailure; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	struct UPrimitiveComponent* SpawnedComponent; // 0x58(0x08)

	struct UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId, struct UPrimitiveComponent*& NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x27a4f70
	struct UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(struct AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform, struct UPrimitiveComponent*& NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x27a4970
};

// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UXRLoadingScreenFunctionLibrary : UBlueprintFunctionLibrary {

	void ShowLoadingScreen(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a8780
	void SetLoadingScreen(struct UTexture* Texture, struct FVector2D Scale, struct FVector Offset, bool bShowLoadingMovie, bool bShowOnSet); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x27a7e50
	void HideLoadingScreen(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a7620
	void ClearLoadingScreenSplashes(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x27a5520
	void AddLoadingScreenSplash(struct UTexture* Texture, struct FVector Translation, struct FRotator Rotation, struct FVector2D Size, struct FRotator DeltaRotation, bool bClearBeforeAdd); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x27a4d70
};

