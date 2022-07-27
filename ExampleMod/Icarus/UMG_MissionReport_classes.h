// WidgetBlueprintGeneratedClass UMG_MissionReport.UMG_MissionReport_C
// Size: 0x489 (Inherited: 0x260)
struct UUMG_MissionReport_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* RewardAnimation; // 0x268(0x08)
	struct UWidgetAnimation* FadeIn; // 0x270(0x08)
	struct UScrollBox* BadgeScrollbox; // 0x278(0x08)
	struct UUMG_DifficultyModifiers_C* BaseReward; // 0x280(0x08)
	struct UUMG_BasicButton_2_C* ContinueButton; // 0x288(0x08)
	struct UHorizontalBox* Currency; // 0x290(0x08)
	struct UVerticalBox* CurrencyRewards; // 0x298(0x08)
	struct UUMG_DifficultyModifiers_C* Difficulty; // 0x2a0(0x08)
	struct UImage* divider; // 0x2a8(0x08)
	struct UImage* divider_2; // 0x2b0(0x08)
	struct UImage* divider_3; // 0x2b8(0x08)
	struct UImage* divider_4; // 0x2c0(0x08)
	struct UImage* divider_5; // 0x2c8(0x08)
	struct UImage* divider_6; // 0x2d0(0x08)
	struct UImage* divider_7; // 0x2d8(0x08)
	struct UImage* divider_8; // 0x2e0(0x08)
	struct UTextBlock* Error; // 0x2e8(0x08)
	struct UUMG_MissionUnlockReward_C* ExoticUnlocks; // 0x2f0(0x08)
	struct UVerticalBox* FactionMissionList; // 0x2f8(0x08)
	struct UBorder* FailedGradient; // 0x300(0x08)
	struct UImage* Frame; // 0x308(0x08)
	struct UUMG_DifficultyModifiers_C* Hardcore; // 0x310(0x08)
	struct UUMG_DifficultyModifiers_C* Insurance; // 0x318(0x08)
	struct UBorder* LoadingScreen; // 0x320(0x08)
	struct UVerticalBox* MissionRewards; // 0x328(0x08)
	struct UTextBlock* NoRewards; // 0x330(0x08)
	struct UVerticalBox* PlayerList; // 0x338(0x08)
	struct UTextBlock* ProspectTitle; // 0x340(0x08)
	struct UBorder* RewardsBorder; // 0x348(0x08)
	struct UUMG_MissionUnlockReward_C* RewardUnlocks; // 0x350(0x08)
	struct UScrollBox* RibbonsScrollbox; // 0x358(0x08)
	struct UOverlay* SpecialUnlocks; // 0x360(0x08)
	struct UUMG_DifficultyModifiers_C* Subtotal; // 0x368(0x08)
	struct UWidgetSwitcher* Switcher; // 0x370(0x08)
	struct UBorder* titledetail_2; // 0x378(0x08)
	struct UBorder* titledetail_3; // 0x380(0x08)
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; // 0x388(0x08)
	struct UUMG_MissionCompleteFaction_C* UMG_MissionCompleteFaction; // 0x390(0x08)
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer; // 0x398(0x08)
	struct UUMG_MissionTimer_C* UMG_MissionTimer; // 0x3a0(0x08)
	struct UUMG_WorkshopCostLarge_C* UMG_WorkshopCostLarge; // 0x3a8(0x08)
	struct UUMG_WorkshopCostLarge_C* UMG_WorkshopCostLarge_2; // 0x3b0(0x08)
	struct FProspectInfo Prospect Info; // 0x3b8(0x88)
	struct FAttachment Current Rewards; // 0x440(0x28)
	struct TArray<struct UUMG_AccoladeMissionProgress_C*> RibbonAccolades; // 0x468(0x10)
	struct TArray<struct UUMG_AccoladeMissionProgress_C*> BadgeAccolades; // 0x478(0x10)
	bool Mission Complete; // 0x488(0x01)

	void UpdateRewards(); // Function UMG_MissionReport.UMG_MissionReport_C.UpdateRewards // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddAccoladeToList(struct FAccoladesRowHandle Accolade, bool Complete); // Function UMG_MissionReport.UMG_MissionReport_C.AddAccoladeToList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitAccoladeList(); // Function UMG_MissionReport.UMG_MissionReport_C.InitAccoladeList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(); // Function UMG_MissionReport.UMG_MissionReport_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFail_26DCCB094F15ED9B889AF28EC15E3C63(struct FResGetProspectReport& Response); // Function UMG_MissionReport.UMG_MissionReport_C.OnFail_26DCCB094F15ED9B889AF28EC15E3C63 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSuccess_26DCCB094F15ED9B889AF28EC15E3C63(struct FResGetProspectReport& Response); // Function UMG_MissionReport.UMG_MissionReport_C.OnSuccess_26DCCB094F15ED9B889AF28EC15E3C63 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowForProspect(struct FString ProspectUID); // Function UMG_MissionReport.UMG_MissionReport_C.ShowForProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_MissionReport.UMG_MissionReport_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void TriggerError(); // Function UMG_MissionReport.UMG_MissionReport_C.TriggerError // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Close(); // Function UMG_MissionReport.UMG_MissionReport_C.Close // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AnimateCompletedAccolades(); // Function UMG_MissionReport.UMG_MissionReport_C.AnimateCompletedAccolades // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_MissionReport(int32_t EntryPoint); // Function UMG_MissionReport.UMG_MissionReport_C.ExecuteUbergraph_UMG_MissionReport // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

