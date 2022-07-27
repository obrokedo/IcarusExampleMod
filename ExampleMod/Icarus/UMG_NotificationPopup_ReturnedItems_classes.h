// WidgetBlueprintGeneratedClass UMG_NotificationPopup_ReturnedItems.UMG_NotificationPopup_ReturnedItems_C
// Size: 0x4b8 (Inherited: 0x3e9)
struct UUMG_NotificationPopup_ReturnedItems_C : UUMG_NotificationPopup_C {
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UWidgetAnimation* Fade_In; // 0x3f8(0x08)
	struct UUMG_BasicButton_2_C* ClaimButton; // 0x400(0x08)
	struct UUMG_ButtonIcon_C* CloseButton; // 0x408(0x08)
	struct UUMG_BasicButton_2_C* DeleteButton; // 0x410(0x08)
	struct USizeBox* DeleteSizebox; // 0x418(0x08)
	struct UImage* divider_3; // 0x420(0x08)
	struct UImage* divider_4; // 0x428(0x08)
	struct UImage* Gradient; // 0x430(0x08)
	struct UImage* Image_120; // 0x438(0x08)
	struct URetainerBox* Mask; // 0x440(0x08)
	struct UTextBlock* NotificationDescription; // 0x448(0x08)
	struct UTextBlock* NotificationName; // 0x450(0x08)
	struct UVerticalBox* PlayerList; // 0x458(0x08)
	struct UTextBlock* ProspectName; // 0x460(0x08)
	struct UOverlay* RightSideOverlay; // 0x468(0x08)
	struct UImage* Trim2; // 0x470(0x08)
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer; // 0x478(0x08)
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_2; // 0x480(0x08)
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_3; // 0x488(0x08)
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_4; // 0x490(0x08)
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_5; // 0x498(0x08)
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_6; // 0x4a0(0x08)
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_7; // 0x4a8(0x08)
	struct UUMG_NotificationAttachmentsReturnedItems_C* UMG_NotificationAttachmentsReturnedItems; // 0x4b0(0x08)

	void UpdateAttachments(); // Function UMG_NotificationPopup_ReturnedItems.UMG_NotificationPopup_ReturnedItems_C.UpdateAttachments // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Update(); // Function UMG_NotificationPopup_ReturnedItems.UMG_NotificationPopup_ReturnedItems_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ClaimButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_NotificationPopup_ReturnedItems.UMG_NotificationPopup_ReturnedItems_C.BndEvt__ClaimButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_NotificationPopup_ReturnedItems.UMG_NotificationPopup_ReturnedItems_C.BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // Function UMG_NotificationPopup_ReturnedItems.UMG_NotificationPopup_ReturnedItems_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void PlayShowEffects(); // Function UMG_NotificationPopup_ReturnedItems.UMG_NotificationPopup_ReturnedItems_C.PlayShowEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_NotificationPopup_ReturnedItems(int32_t EntryPoint); // Function UMG_NotificationPopup_ReturnedItems.UMG_NotificationPopup_ReturnedItems_C.ExecuteUbergraph_UMG_NotificationPopup_ReturnedItems // (Final|UbergraphFunction) // @ game+0x1be0000
};

