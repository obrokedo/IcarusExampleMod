// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
// Size: 0x3d8 (Inherited: 0x308)
struct AMagicLeapSharedWorldGameMode : AGameMode {
	struct FMagicLeapSharedWorldSharedData SharedWorldData; // 0x308(0x10)
	struct FMulticastInlineDelegate OnNewLocalDataFromClients; // 0x318(0x10)
	float PinSelectionConfidenceThreshold; // 0x328(0x04)
	char pad_32C[0xa4]; // 0x32c(0xa4)
	struct AMagicLeapSharedWorldPlayerController* ChosenOne; // 0x3d0(0x08)

	bool SendSharedWorldDataToClients(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1175230
	void SelectChosenOne(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1175210
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature(); // DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1be0000
	void DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData& NewSharedWorldData); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData // (BlueprintAuthorityOnly|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x11750f0
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
// Size: 0x2d0 (Inherited: 0x290)
struct AMagicLeapSharedWorldGameState : AGameState {
	struct FMagicLeapSharedWorldSharedData SharedWorldData; // 0x290(0x10)
	struct FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnSharedWorldDataUpdated; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnAlignmentTransformsUpdated; // 0x2c0(0x10)

	void OnReplicate_SharedWorldData(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData // (Final|Native|Private) // @ game+0x11751f0
	void OnReplicate_AlignmentTransforms(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms // (Final|Native|Private) // @ game+0x11751d0
	void MagicLeapSharedWorldEvent__DelegateSignature(); // DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1be0000
	struct FTransform CalculateXRCameraRootTransform(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1174fa0
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
// Size: 0x5a8 (Inherited: 0x590)
struct AMagicLeapSharedWorldPlayerController : APlayerController {
	char pad_590[0x18]; // 0x590(0x18)

	void ServerSetLocalWorldData(struct FMagicLeapSharedWorldLocalData LocalWorldReplicationData); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1175300
	void ServerSetAlignmentTransforms(struct FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x1175260
	bool IsChosenOne(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11751a0
	void ClientSetChosenOne(bool bChosenOne); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1175060
	void ClientMarkReadyForSendingLocalData(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1175040
	bool CanSendLocalDataToServer(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1175010
};

