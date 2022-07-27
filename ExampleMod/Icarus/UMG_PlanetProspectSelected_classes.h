// WidgetBlueprintGeneratedClass UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C
// Size: 0x763 (Inherited: 0x260)
struct UUMG_PlanetProspectSelected_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ShowMain; // 0x268(0x08)
	struct UWidgetAnimation* SwitchAnimation; // 0x270(0x08)
	struct UWidgetAnimation* OpenAnimation; // 0x278(0x08)
	struct UImage* B1; // 0x280(0x08)
	struct UImage* B2; // 0x288(0x08)
	struct UImage* B3; // 0x290(0x08)
	struct UImage* B4; // 0x298(0x08)
	struct USizeBox* ClaimedAnotherPrompt; // 0x2a0(0x08)
	struct UBorder* ClaimedWarningPrompt; // 0x2a8(0x08)
	struct UUMG_BasicButton_2_C* ClaimProspectButton; // 0x2b0(0x08)
	struct UBorder* ColourCornerInsurance; // 0x2b8(0x08)
	struct UImage* corner; // 0x2c0(0x08)
	struct UImage* corner_2; // 0x2c8(0x08)
	struct UImage* corner_3; // 0x2d0(0x08)
	struct UImage* corner_4; // 0x2d8(0x08)
	struct UBorder* CornerColourHardcore; // 0x2e0(0x08)
	struct UHorizontalBox* Currency; // 0x2e8(0x08)
	struct UTextBlock* Days_3; // 0x2f0(0x08)
	struct UTextBlock* Days_4; // 0x2f8(0x08)
	struct UTextBlock* Days_5; // 0x300(0x08)
	struct UTextBlock* Days_6; // 0x308(0x08)
	struct UTextBlock* DaysText; // 0x310(0x08)
	struct UTextBlock* DescriptionText; // 0x318(0x08)
	struct UTextBlock* DifficultyTitle; // 0x320(0x08)
	struct UImage* divider; // 0x328(0x08)
	struct UImage* divider_2; // 0x330(0x08)
	struct UImage* divider1; // 0x338(0x08)
	struct UImage* divider1_2; // 0x340(0x08)
	struct UTextBlock* FlagRewards; // 0x348(0x08)
	struct UTextBlock* FlavourText; // 0x350(0x08)
	struct UImage* Gradient; // 0x358(0x08)
	struct UBorder* HardcoreBG; // 0x360(0x08)
	struct UUMG_Checkbox_C* HardcoreCheck; // 0x368(0x08)
	struct UTextBlock* HardcoreHelperText; // 0x370(0x08)
	struct UOverlay* HardcoreMissionOverlay; // 0x378(0x08)
	struct UTextBlock* HardcoreTitle; // 0x380(0x08)
	struct UUMG_BasicButton_2_C* HostProspectButton; // 0x388(0x08)
	struct UTextBlock* Hours; // 0x390(0x08)
	struct UImage* Image; // 0x398(0x08)
	struct UImage* Image_2; // 0x3a0(0x08)
	struct UImage* Image_3; // 0x3a8(0x08)
	struct UImage* Image_141; // 0x3b0(0x08)
	struct UImage* Image_219; // 0x3b8(0x08)
	struct UImage* Image_336; // 0x3c0(0x08)
	struct UTextBlock* InactiveText; // 0x3c8(0x08)
	struct UBorder* InsuranceBG; // 0x3d0(0x08)
	struct UUMG_Checkbox_C* InsuranceCheck; // 0x3d8(0x08)
	struct UTextBlock* InsuranceHelperText; // 0x3e0(0x08)
	struct UTextBlock* InsuranceTitle; // 0x3e8(0x08)
	struct UVerticalBox* JoinHostButtons; // 0x3f0(0x08)
	struct UUMG_BasicButton_2_C* JoinProspectButton; // 0x3f8(0x08)
	struct USizeBox* Loadout; // 0x400(0x08)
	struct UBorder* LoadoutOverlay; // 0x408(0x08)
	struct UBorder* LobbyBorder; // 0x410(0x08)
	struct UImage* LowTimeWarningIcon; // 0x418(0x08)
	struct UOverlay* Main; // 0x420(0x08)
	struct UImage* menupattern; // 0x428(0x08)
	struct UTextBlock* Minutes; // 0x430(0x08)
	struct UVerticalBox* MissionSettings; // 0x438(0x08)
	struct UTextBlock* MoreRewards_Hardcore; // 0x440(0x08)
	struct UTextBlock* MoreRewards_Insurance; // 0x448(0x08)
	struct UVerticalBox* PlayerList; // 0x450(0x08)
	struct UTextBlock* ProspectClaimedPrompt; // 0x458(0x08)
	struct UTextBlock* ProspectName; // 0x460(0x08)
	struct UImage* ProspectTexture; // 0x468(0x08)
	struct UVerticalBox* Rewards; // 0x470(0x08)
	struct UTextBlock* Seconds; // 0x478(0x08)
	struct UOverlay* SettingsOverlay; // 0x480(0x08)
	struct UUMG_LoadingIcon_C* SettleLoading; // 0x488(0x08)
	struct UUMG_BasicButton_2_C* SettleProspectButton; // 0x490(0x08)
	struct UBorder* TimeBorder; // 0x498(0x08)
	struct UBorder* TimeColourBorder; // 0x4a0(0x08)
	struct UImage* Trim1; // 0x4a8(0x08)
	struct UImage* Trim2; // 0x4b0(0x08)
	struct UUMG_DifficultySelect_C* UMG_DifficultySelect; // 0x4b8(0x08)
	struct UUMG_LoadoutSelection_C* UMG_LoadoutSelection; // 0x4c0(0x08)
	struct UUMG_MissionDifficulty_C* UMG_MissionDifficulty; // 0x4c8(0x08)
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry; // 0x4d0(0x08)
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_2; // 0x4d8(0x08)
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_3; // 0x4e0(0x08)
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_4; // 0x4e8(0x08)
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_5; // 0x4f0(0x08)
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_6; // 0x4f8(0x08)
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_7; // 0x500(0x08)
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_8; // 0x508(0x08)
	struct UUMG_ProspectObjectiveList_C* UMG_ProspectObjectiveList; // 0x510(0x08)
	struct UUMG_WorkshopCostLarge_C* UMG_WorkshopCostLarge; // 0x518(0x08)
	struct UUMG_WorkshopCostLarge_C* UMG_WorkshopCostLarge_2; // 0x520(0x08)
	struct UTextBlock* Unlock; // 0x528(0x08)
	struct UBorder* UnlockOverlay; // 0x530(0x08)
	struct UVerticalBox* WorldStats; // 0x538(0x08)
	struct FMulticastInlineDelegate StartSelectedProspect; // 0x540(0x10)
	struct UUMG_ProspectPin_C* SelectedProspectPin; // 0x550(0x08)
	bool Settled; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	struct FFProspectServerInfo Prospect Info; // 0x560(0x198)
	struct FMulticastInlineDelegate HostProspect; // 0x6f8(0x10)
	struct FMulticastInlineDelegate ClaimProspect; // 0x708(0x10)
	struct FMulticastInlineDelegate JoinProspect; // 0x718(0x10)
	struct UUMG_CloseButton_2_C* Close Button; // 0x728(0x08)
	struct FMulticastInlineDelegate SettleProspect; // 0x730(0x10)
	bool Claim; // 0x740(0x01)
	char pad_741[0x7]; // 0x741(0x07)
	struct FMulticastInlineDelegate ShowCloseButton; // 0x748(0x10)
	struct UFMODEvent* FMODEvent_AcceptClaimProspect; // 0x758(0x08)
	bool HardcoreFlag; // 0x760(0x01)
	enum class EMissionDifficulty CachedDifficulty; // 0x761(0x01)
	enum class EMissionDifficulty LockedInDifficulty; // 0x762(0x01)

	void SetMultiplayerState(struct FFProspectServerInfo Prospect); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.SetMultiplayerState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateRewards(); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.UpdateRewards // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetSelectedProspectInfo(struct FFProspectServerInfo& Prospect Info); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.GetSelectedProspectInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void UpdateCompletionText(struct FFactionMissionsRowHandle RowHandle); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.UpdateCompletionText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateWorldStats(); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.UpdateWorldStats // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReadyCheck(); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.ReadyCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdatePlayerList(); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.UpdatePlayerList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Initialise(struct UUMG_CloseButton_2_C* CloseButton); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetTime(struct TArray<struct FString>& Time); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.SetTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowSelectedProspect(struct FFProspectServerInfo Prospect, bool Active); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.ShowSelectedProspect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFailure_6A3406D34D6989803C8B84813F106342(struct FErrorCodesEnum Result); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.OnFailure_6A3406D34D6989803C8B84813F106342 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSuccess_6A3406D34D6989803C8B84813F106342(struct FErrorCodesEnum Result); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.OnSuccess_6A3406D34D6989803C8B84813F106342 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFailure_39B8951B40750D4BA0F6A8BA5082E1DC(struct FErrorCodesEnum Result); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.OnFailure_39B8951B40750D4BA0F6A8BA5082E1DC // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSuccess_39B8951B40750D4BA0F6A8BA5082E1DC(struct FErrorCodesEnum Result); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.OnSuccess_39B8951B40750D4BA0F6A8BA5082E1DC // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SettleProspectResultHandler(bool Success, struct FProspectInfo& ProspectInfo); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.SettleProspectResultHandler // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateSettleButton(struct FProspectInfo ServerInfo); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.UpdateSettleButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__JoinProspectButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.BndEvt__JoinProspectButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_PlanetProspectSelected_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_4_ConfirmLoadout__DelegateSignature(); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.BndEvt__UMG_PlanetProspectSelected_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_4_ConfirmLoadout__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void AcceptClaim(); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.AcceptClaim // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RejectClaim(); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.RejectClaim // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_PlanetProspectSelected_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_5_Back__DelegateSignature(); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.BndEvt__UMG_PlanetProspectSelected_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_5_Back__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ClaimProspectButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.BndEvt__ClaimProspectButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__EndProspectButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.BndEvt__EndProspectButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void OnLobbyPrivacyChanged(); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.OnLobbyPrivacyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__HostProspectButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.BndEvt__HostProspectButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void HardcoreCheckboxUpdated(bool Checked); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.HardcoreCheckboxUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InsuranceCheckboxUpdated(bool Checked); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.InsuranceCheckboxUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_PlanetProspectSelected_UMG_DifficultySelect_K2Node_ComponentBoundEvent_6_DifficultyUpdated__DelegateSignature(enum class EMissionDifficulty Difficulty); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.BndEvt__UMG_PlanetProspectSelected_UMG_DifficultySelect_K2Node_ComponentBoundEvent_6_DifficultyUpdated__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ManuallyUpdateDifficulty(enum class EMissionDifficulty CachedDifficulty); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.ManuallyUpdateDifficulty // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_PlanetProspectSelected(int32_t EntryPoint); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.ExecuteUbergraph_UMG_PlanetProspectSelected // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void ShowCloseButton__DelegateSignature(); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.ShowCloseButton__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SettleProspect__DelegateSignature(struct FFProspectServerInfo Prospect Info, bool Settle); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.SettleProspect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void JoinProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.JoinProspect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ClaimProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.ClaimProspect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HostProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.HostProspect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StartSelectedProspect__DelegateSignature(); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.StartSelectedProspect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

