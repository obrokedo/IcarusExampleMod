// WidgetBlueprintGeneratedClass UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C
// Size: 0x468 (Inherited: 0x260)
struct UUMG_SpaceMenus_TopLevel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* InitialLoad; // 0x268(0x08)
	struct UNamedSlot* BlueprintTalentSlot; // 0x270(0x08)
	struct UUMG_BasicButton_2_C* Button_ReturnFromPlayerProgression; // 0x278(0x08)
	struct UProgressBar* CharacterLevelProgressBar; // 0x280(0x08)
	struct UUMG_TopLevelButton_C* ContractButton; // 0x288(0x08)
	struct USpacer* ContractSpacer; // 0x290(0x08)
	struct USpacer* ContractSpacer_2; // 0x298(0x08)
	struct USpacer* ContractSpacer_3; // 0x2a0(0x08)
	struct USpacer* ContractSpacer_4; // 0x2a8(0x08)
	struct USpacer* ContractSpacer_5; // 0x2b0(0x08)
	struct UUMG_IconTextButton_C* CustomizeButton; // 0x2b8(0x08)
	struct UImage* divider; // 0x2c0(0x08)
	struct UImage* divider_2; // 0x2c8(0x08)
	struct UUMG_TopLevelButton_C* LeaveSessionButton; // 0x2d0(0x08)
	struct UOverlay* MainOverlay; // 0x2d8(0x08)
	struct UUMG_TopLevelButton_C* OutpostButton; // 0x2e0(0x08)
	struct UOverlay* ParentOverlay; // 0x2e8(0x08)
	struct UImage* PlayerImage; // 0x2f0(0x08)
	struct UNamedSlot* PlayerTalentSlot; // 0x2f8(0x08)
	struct UOverlay* ProgressionBorder; // 0x300(0x08)
	struct UUMG_TopLevelButton_C* ProspectHostButton; // 0x308(0x08)
	struct UUMG_TopLevelButton_C* ProspectJoinButton; // 0x310(0x08)
	struct UUMG_TopLevelButton_C* ProspectSelectButton_3; // 0x318(0x08)
	struct UUMG_BasicButton_2_C* ReturnButton; // 0x320(0x08)
	struct UNamedSlot* SoloTalentSlot; // 0x328(0x08)
	struct UWidgetSwitcher* Talents; // 0x330(0x08)
	struct UUMG_BasicButton_2_C* TalentsButton; // 0x338(0x08)
	struct UUMG_BasicButton_2_C* TechTreeButton; // 0x340(0x08)
	struct UUMG_BasicButton_2_C* TechTreeButton_2; // 0x348(0x08)
	struct UTextBlock* TextBlock_CharacterLevel; // 0x350(0x08)
	struct UUMG_AccoladeScreen_C* UMG_AccoladeScreen_C_4; // 0x358(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; // 0x360(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt; // 0x368(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_2; // 0x370(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_3; // 0x378(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_4; // 0x380(0x08)
	struct UUMG_MetaResourceDisplay_C* UMG_MetaResourceDisplay; // 0x388(0x08)
	struct UUMG_ProspectTracker_C* UMG_ProspectTracker; // 0x390(0x08)
	struct UUMG_SettledProspectTracker_C* UMG_SettledProspectTracker; // 0x398(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_PlayerProgression; // 0x3a0(0x08)
	struct FOnlineProfileCharacter CachedActiveCharacter; // 0x3a8(0xa0)
	struct FCurrencyConversionsRowHandle ConverstionRow; // 0x448(0x18)
	struct UUMG_ConfirmationPopup_C* ConfirmationPopup; // 0x460(0x08)

	void SwitchTalents(bool Solo); // Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.SwitchTalents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitCharacterData(); // Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.InitCharacterData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ContractUpdated(); // Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.ContractUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__LeaveSessionButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.BndEvt__LeaveSessionButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__TalentsButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.BndEvt__TalentsButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__TechTreeButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.BndEvt__TechTreeButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__Button_ReturnFromPlayerProgression_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.BndEvt__Button_ReturnFromPlayerProgression_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(); // Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void CustomisationComplete(bool Success, struct FOnlineProfileCharacter NewCharacterInfo); // Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.CustomisationComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.OnConnectedPlayerInitialised // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_SpaceMenus_TopLevel_TechTreeButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.BndEvt__UMG_SpaceMenus_TopLevel_TechTreeButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_SpaceMenus_TopLevel(int32_t EntryPoint); // Function UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C.ExecuteUbergraph_UMG_SpaceMenus_TopLevel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

