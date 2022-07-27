// WidgetBlueprintGeneratedClass UMG_NotificationPopup_Mission.UMG_NotificationPopup_Mission_C
// Size: 0x478 (Inherited: 0x3e9)
struct UUMG_NotificationPopup_Mission_C : UUMG_NotificationPopup_C {
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UWidgetAnimation* Fade_In; // 0x3f8(0x08)
	struct UUMG_BasicButton_2_C* ClaimButton; // 0x400(0x08)
	struct UUMG_ButtonIcon_C* CloseButton; // 0x408(0x08)
	struct UUMG_BasicButton_2_C* DeleteButton; // 0x410(0x08)
	struct UImage* Image_120; // 0x418(0x08)
	struct UBorder* LoadingScreen; // 0x420(0x08)
	struct URetainerBox* Mask; // 0x428(0x08)
	struct UImage* ProspectImage; // 0x430(0x08)
	struct UTextBlock* ProspectName; // 0x438(0x08)
	struct UTextBlock* ProspectName_2; // 0x440(0x08)
	struct URetainerBox* RetainerBox_1; // 0x448(0x08)
	struct UImage* Trim2; // 0x450(0x08)
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; // 0x458(0x08)
	struct UUMG_MissionCompleteFaction_C* UMG_MissionCompleteFaction; // 0x460(0x08)
	struct UUMG_NotificationAttachments_C* UMG_NotificationAttachments; // 0x468(0x08)
	struct UUMG_ProspectObjectiveList_C* UMG_ProspectObjectiveList; // 0x470(0x08)

	void UpdateAttachments(); // Function UMG_NotificationPopup_Mission.UMG_NotificationPopup_Mission_C.UpdateAttachments // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateProspect(); // Function UMG_NotificationPopup_Mission.UMG_NotificationPopup_Mission_C.UpdateProspect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetLoadingWidget(struct UWidget*& Loading); // Function UMG_NotificationPopup_Mission.UMG_NotificationPopup_Mission_C.GetLoadingWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void Update(); // Function UMG_NotificationPopup_Mission.UMG_NotificationPopup_Mission_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ClaimButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_NotificationPopup_Mission.UMG_NotificationPopup_Mission_C.BndEvt__ClaimButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_NotificationPopup_Mission.UMG_NotificationPopup_Mission_C.BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // Function UMG_NotificationPopup_Mission.UMG_NotificationPopup_Mission_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void PlayShowEffects(); // Function UMG_NotificationPopup_Mission.UMG_NotificationPopup_Mission_C.PlayShowEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_NotificationPopup_Mission(int32_t EntryPoint); // Function UMG_NotificationPopup_Mission.UMG_NotificationPopup_Mission_C.ExecuteUbergraph_UMG_NotificationPopup_Mission // (Final|UbergraphFunction) // @ game+0x1be0000
};

