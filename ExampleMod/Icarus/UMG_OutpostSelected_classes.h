// WidgetBlueprintGeneratedClass UMG_OutpostSelected.UMG_OutpostSelected_C
// Size: 0x590 (Inherited: 0x260)
struct UUMG_OutpostSelected_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ShowMain; // 0x268(0x08)
	struct UWidgetAnimation* SwitchAnimation; // 0x270(0x08)
	struct UWidgetAnimation* OpenAnimation; // 0x278(0x08)
	struct UBorder* ClaimedWarningPrompt; // 0x280(0x08)
	struct UUMG_BasicButton_2_C* CreateNewOutpostButton; // 0x288(0x08)
	struct UUMG_BasicButton_2_C* DeleteOutpostButton; // 0x290(0x08)
	struct UTextBlock* DescriptionText; // 0x298(0x08)
	struct UImage* EditIcon; // 0x2a0(0x08)
	struct UTextBlock* FlavourText; // 0x2a8(0x08)
	struct UTextBlock* InactiveText; // 0x2b0(0x08)
	struct UUMG_BasicButton_2_C* LaunchExistingOutpostButton; // 0x2b8(0x08)
	struct USizeBox* Loadout; // 0x2c0(0x08)
	struct UBorder* LoadoutOverlay; // 0x2c8(0x08)
	struct UOverlay* Main; // 0x2d0(0x08)
	struct UImage* menupattern; // 0x2d8(0x08)
	struct UTextBlock* NameInvalidWarning; // 0x2e0(0x08)
	struct UVerticalBox* OutpostList; // 0x2e8(0x08)
	struct UTextBlock* OutpostName; // 0x2f0(0x08)
	struct UTextBlock* OutpostName_2; // 0x2f8(0x08)
	struct UBorder* OutpostNameBorder; // 0x300(0x08)
	struct UVerticalBox* PlayerList; // 0x308(0x08)
	struct UTextBlock* ProspectClaimedPrompt; // 0x310(0x08)
	struct UTextBlock* ProspectName; // 0x318(0x08)
	struct UOverlay* ProspectNameOverlay; // 0x320(0x08)
	struct UEditableTextBox* ProspectNameTextbox; // 0x328(0x08)
	struct UImage* ProspectTexture; // 0x330(0x08)
	struct UUMG_LoadingIcon_C* SettleLoading; // 0x338(0x08)
	struct UImage* Trim1; // 0x340(0x08)
	struct UImage* Trim2; // 0x348(0x08)
	struct UUMG_LoadoutSelection_C* UMG_LoadoutSelection; // 0x350(0x08)
	struct FMulticastInlineDelegate StartSelectedProspect; // 0x358(0x10)
	bool Settled; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct FFProspectServerInfo Prospect Info; // 0x370(0x198)
	struct FMulticastInlineDelegate HostProspect; // 0x508(0x10)
	struct FMulticastInlineDelegate ClaimProspect; // 0x518(0x10)
	struct FMulticastInlineDelegate JoinProspect; // 0x528(0x10)
	struct UUMG_CloseButton_2_C* Close Button; // 0x538(0x08)
	struct FMulticastInlineDelegate SettleProspect; // 0x540(0x10)
	struct FString SelectedProspectID; // 0x550(0x10)
	struct UFMODEvent* FMODEvent_AcceptClaimProspect; // 0x560(0x08)
	struct TArray<struct FString> ExistingOutpostNames; // 0x568(0x10)
	struct FText NewVar_1; // 0x578(0x18)

	struct FString OnNameChanged(struct FText& InText); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.OnNameChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OutpostNameIsValid(bool& Valid); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.OutpostNameIsValid // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RefreshExistingOutpostNames(); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.RefreshExistingOutpostNames // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OutpostNameTextCommitted(struct FText& Text, enum class ETextCommit CommitMethod); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.OutpostNameTextCommitted // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OutpostNameTextChanged(struct FText& Text); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.OutpostNameTextChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateProspectInfoToSelection(); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.UpdateProspectInfoToSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExistingOutpostButtonClicked(struct UUMG_ButtonBase_C* Button); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.ExistingOutpostButtonClicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void NewOutpostButtonClicked(struct UUMG_ButtonBase_C* Button); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.NewOutpostButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ResetSelectedOutpostButtons(); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.ResetSelectedOutpostButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RefreshOutpostList(); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.RefreshOutpostList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReadyCheck(); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.ReadyCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdatePlayerList(); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.UpdatePlayerList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Initialise(struct UUMG_CloseButton_2_C* CloseButton); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowSelectedOutpostType(struct FFProspectServerInfo Prospect, bool Active); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.ShowSelectedOutpostType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_PlanetProspectSelected_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_4_ConfirmLoadout__DelegateSignature(); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.BndEvt__UMG_PlanetProspectSelected_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_4_ConfirmLoadout__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_PlanetProspectSelected_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_5_Back__DelegateSignature(); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.BndEvt__UMG_PlanetProspectSelected_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_5_Back__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void AcceptClaim(); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.AcceptClaim // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RejectClaim(); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.RejectClaim // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLobbyPrivacyChanged(); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.OnLobbyPrivacyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__HostProspectButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.BndEvt__HostProspectButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ClaimProspectButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.BndEvt__ClaimProspectButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__EndProspectButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.BndEvt__EndProspectButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ClaimAndLaunchProspect(); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.ClaimAndLaunchProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ConfirmDeleteOutpost(); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.ConfirmDeleteOutpost // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CancelDeleteOutpost(); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.CancelDeleteOutpost // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_OutpostSelected(int32_t EntryPoint); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.ExecuteUbergraph_UMG_OutpostSelected // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void SettleProspect__DelegateSignature(struct FFProspectServerInfo Prospect Info, bool Settle); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.SettleProspect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void JoinProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.JoinProspect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ClaimProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.ClaimProspect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HostProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.HostProspect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StartSelectedProspect__DelegateSignature(); // Function UMG_OutpostSelected.UMG_OutpostSelected_C.StartSelectedProspect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

