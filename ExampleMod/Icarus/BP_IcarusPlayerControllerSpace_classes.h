// BlueprintGeneratedClass BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C
// Size: 0xbd8 (Inherited: 0x790)
struct ABP_IcarusPlayerControllerSpace_C : AIcarusPlayerControllerSpace {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x790(0x08)
	float MoveToOperable_NewTrack_0_AE7BB1BA4A6ECAA53003F08A62920011; // 0x798(0x04)
	enum class ETimelineDirection MoveToOperable__Direction_AE7BB1BA4A6ECAA53003F08A62920011; // 0x79c(0x01)
	char pad_79D[0x3]; // 0x79d(0x03)
	struct UTimelineComponent* MoveToOperable; // 0x7a0(0x08)
	struct UUMG_UserInterfaceSpace_C* UserInterface; // 0x7a8(0x08)
	bool FocusedOnObject; // 0x7b0(0x01)
	char pad_7B1[0x7]; // 0x7b1(0x07)
	struct FFProspectServerInfo ProspectInfo; // 0x7b8(0x198)
	bool Requested_Prospect_Info; // 0x950(0x01)
	char pad_951[0x7]; // 0x951(0x07)
	struct UBP_InputCaptureComponent_C* InputCapture; // 0x958(0x08)
	struct AIcarusPlayerCharacter* PlayerCharacterClass; // 0x960(0x08)
	bool bTransitioningPossession; // 0x968(0x01)
	char pad_969[0x7]; // 0x969(0x07)
	struct ABP_IcarusCharacterDummy_C* DefaultCharacterDummy; // 0x970(0x08)
	struct ABP_IcarusCameraPawn_C* CharacterSelectionCamera; // 0x978(0x08)
	struct TMap<enum class ESpaceMenuScene, struct ABP_SpaceMenuCamera_C*> MenuScreenCameras; // 0x980(0x50)
	struct FOnlineProfileCharacter SelectedCharacter; // 0x9d0(0xa0)
	struct AExponentialHeightFog* FxInteriorFogComponent; // 0xa70(0x08)
	struct FCharacterLoadout Retrieved Character Loadout; // 0xa78(0x138)
	bool bLoadoutTutorialShown; // 0xbb0(0x01)
	bool RequiresBackendInitialisation; // 0xbb1(0x01)
	char pad_BB2[0x6]; // 0xbb2(0x06)
	struct TArray<struct FMetaItem> Meta Inventory; // 0xbb8(0x10)
	struct TArray<struct FMetaItem> Loadout Inventory; // 0xbc8(0x10)

	void GetUserInterface(struct UUMG_UserInterface_Base_C*& UserInterface); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.GetUserInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	struct UUserInterfaceBase* GetUserInterfaceInternal(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.GetUserInterfaceInternal // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	void Return to Character Select(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.Return to Character Select // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BackendConnection_PostInitialise(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.BackendConnection_PostInitialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct UCheatOverlayBase* GetCheatOverlay(struct UObject* WorldContextObject); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.GetCheatOverlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	bool GetIsThirdPerson(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.GetIsThirdPerson // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void HasActiveSelectedCharacter(bool& HasSelectedCharacter); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.HasActiveSelectedCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetProspectInfo(struct FFProspectServerInfo& ProspectServerInfo); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.GetProspectInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void OnRep_ProspectInfo(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnRep_ProspectInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MoveToOperable__FinishedFunc(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.MoveToOperable__FinishedFunc // (BlueprintEvent) // @ game+0x1be0000
	void MoveToOperable__UpdateFunc(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.MoveToOperable__UpdateFunc // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Escape_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_Escape_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Fire_K2Node_InputActionEvent_7(struct FKey Key); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_Fire_K2Node_InputActionEvent_7 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Fire_K2Node_InputActionEvent_6(struct FKey Key); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_Fire_K2Node_InputActionEvent_6 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_AltFire_K2Node_InputActionEvent_5(struct FKey Key); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_AltFire_K2Node_InputActionEvent_5 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_AltFire_K2Node_InputActionEvent_4(struct FKey Key); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_AltFire_K2Node_InputActionEvent_4 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Interact_K2Node_InputActionEvent_3(struct FKey Key); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_Interact_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Jump_K2Node_InputActionEvent_2(struct FKey Key); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_Jump_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x1be0000
	void InpActEvt_Jump_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_Jump_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x1be0000
	void OnFail_80826B944ED42E3EB4C97F96C9FB62DA(struct FResGetLastProspect& Response); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnFail_80826B944ED42E3EB4C97F96C9FB62DA // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSuccess_80826B944ED42E3EB4C97F96C9FB62DA(struct FResGetLastProspect& Response); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnSuccess_80826B944ED42E3EB4C97F96C9FB62DA // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFailure_153E3E574849CADDC230B4BDF276D6E3(struct FErrorCodesEnum Result); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnFailure_153E3E574849CADDC230B4BDF276D6E3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSuccess_153E3E574849CADDC230B4BDF276D6E3(struct FErrorCodesEnum Result); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnSuccess_153E3E574849CADDC230B4BDF276D6E3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFailure_C61F5EF443F6FA83FE9C9EBEFD43DCD9(struct FErrorCodesEnum Result); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnFailure_C61F5EF443F6FA83FE9C9EBEFD43DCD9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSuccess_C61F5EF443F6FA83FE9C9EBEFD43DCD9(struct FErrorCodesEnum Result); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnSuccess_C61F5EF443F6FA83FE9C9EBEFD43DCD9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFailure_5F9E1E7C4E38E77D32A72DAA4B267722(struct FErrorCodesEnum Result); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnFailure_5F9E1E7C4E38E77D32A72DAA4B267722 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSuccess_5F9E1E7C4E38E77D32A72DAA4B267722(struct FErrorCodesEnum Result); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnSuccess_5F9E1E7C4E38E77D32A72DAA4B267722 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnConnectedPlayerInitialised(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnConnectedPlayerInitialised // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void OnActiveCharacterSet(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnActiveCharacterSet // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ServerPushClientDynamicWidget(struct UUMG_IcarusLinkedActorPanel_C* WidgetClass, struct AActor* LinkedActorForWidget); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ServerPushClientDynamicWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OwningClientDisplayDynamicWidget(struct UUMG_IcarusLinkedActorPanel_C* WidgetClass, struct AActor* LinkedActorForWidget); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OwningClientDisplayDynamicWidget // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CreateUI(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.CreateUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnServer_ReturnFocus(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnServer_ReturnFocus // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnServer_GiveFocusToObject(struct AActor* Object); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnServer_GiveFocusToObject // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Open Drop Screen(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.Open Drop Screen // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CloseUI(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.CloseUI // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_5(float AxisValue); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_5 // (BlueprintEvent) // @ game+0x1be0000
	void BeginInputCapture(struct UBP_InputCaptureComponent_C* InputCaptureComponent, struct AActor* CapturedActor); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.BeginInputCapture // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EndInputCapture(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.EndInputCapture // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LerpToInputCaptureLocation(struct AActor* Target); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.LerpToInputCaptureLocation // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float AxisValue); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3 // (BlueprintEvent) // @ game+0x1be0000
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float AxisValue); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2 // (BlueprintEvent) // @ game+0x1be0000
	void SetCharacterUI(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.SetCharacterUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ClientUpdateSelectedCharacter(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ClientUpdateSelectedCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Get End Of Drop Screen Info(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.Get End Of Drop Screen Info // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MailRequest(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.MailRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BackendConnection_SetCharacter(struct FOnlineProfileCharacter SelectedCharacter); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.BackendConnection_SetCharacter // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetCharacterInitialisationUI(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.SetCharacterInitialisationUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void RequestSessionSettings(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.RequestSessionSettings // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateSessionSettings(struct FFProspectServerInfo ProspectInfo); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.UpdateSessionSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void NotifyOfCheater(struct FString CharacterName); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.NotifyOfCheater // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Client_CheaterAlert(struct FString Name); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.Client_CheaterAlert // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateCharacterPossession(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.UpdateCharacterPossession // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceivePossess(struct APawn* PossessedPawn); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ReceivePossess // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ClientOnPossess(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ClientOnPossess // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowLoadingScreen_Event(bool Show); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ShowLoadingScreen_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnClient_SetReadyState(bool Ready); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnClient_SetReadyState // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnServer_SetReadyState(bool Ready); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnServer_SetReadyState // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RefreshSessionSettings(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.RefreshSessionSettings // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Kick(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.Kick // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LeaveSession(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.LeaveSession // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void On Mouse Sensitivity Changed(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.On Mouse Sensitivity Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteClaimLaunchProspect(struct FProspectInfo Prospect Info, struct FOnlineProfileCharacter OnlineProfileCharacter); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ExecuteClaimLaunchProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteJoinProspect(struct FIcarusSession IcarusSession, struct FOnlineProfileCharacter OnlineProfileCharacter); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ExecuteJoinProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteResumeProspect(struct FProspectInfo ProspectInfo, struct FOnlineProfileCharacter OnlineProfileCharacter); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ExecuteResumeProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReturnToCharacterSelect(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ReturnToCharacterSelect // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AcceptInvite(struct FIcarusSession SessionToJoin); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.AcceptInvite // (BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_IcarusPlayerControllerSpace(int32_t EntryPoint); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ExecuteUbergraph_BP_IcarusPlayerControllerSpace // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

