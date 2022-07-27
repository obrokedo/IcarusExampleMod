// WidgetBlueprintGeneratedClass UMG_ConfirmationPopup.UMG_ConfirmationPopup_C
// Size: 0x308 (Inherited: 0x280)
struct UUMG_ConfirmationPopup_C : UConfirmationPopupBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetSwitcher* ContentSlot; // 0x288(0x08)
	struct UImage* Image; // 0x290(0x08)
	struct UImage* Image_2; // 0x298(0x08)
	struct UImage* Image_3; // 0x2a0(0x08)
	struct UImage* Image_97; // 0x2a8(0x08)
	struct UUMG_IconTextButton_C* OptionAButton; // 0x2b0(0x08)
	struct UUMG_IconTextButton_C* OptionBButton; // 0x2b8(0x08)
	struct URichTextBlock* RichText; // 0x2c0(0x08)
	struct UFMODEvent* ClickSoundDefault_A; // 0x2c8(0x08)
	struct UFMODEvent* ClickSoundDefault_B; // 0x2d0(0x08)
	struct UTexture2D* CachedOptionAImage; // 0x2d8(0x08)
	struct UTexture2D* CachedOptionBImage; // 0x2e0(0x08)
	struct FLinearColor CachedOptionATint; // 0x2e8(0x10)
	struct FLinearColor CachedOptionBTint; // 0x2f8(0x10)

	void GetDefaultClickSound(struct UUMG_IconTextButton_C* Button, struct UFMODEvent*& ClickSound); // Function UMG_ConfirmationPopup.UMG_ConfirmationPopup_C.GetDefaultClickSound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void SetOption(struct UUMG_IconTextButton_C* Button, struct FText Text, struct UFMODEvent* FMODEvent, struct UTexture2D* Image, struct FLinearColor Tint); // Function UMG_ConfirmationPopup.UMG_ConfirmationPopup_C.SetOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CallCancel(); // Function UMG_ConfirmationPopup.UMG_ConfirmationPopup_C.CallCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__OptionAButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function UMG_ConfirmationPopup.UMG_ConfirmationPopup_C.BndEvt__OptionAButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__OptionBButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function UMG_ConfirmationPopup.UMG_ConfirmationPopup_C.BndEvt__OptionBButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void SetPromptDetails(struct FConfirmationPopupDetails& ConfirmationPopupDetails); // Function UMG_ConfirmationPopup.UMG_ConfirmationPopup_C.SetPromptDetails // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void OnInitialized(); // Function UMG_ConfirmationPopup.UMG_ConfirmationPopup_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_ConfirmationPopup(int32_t EntryPoint); // Function UMG_ConfirmationPopup.UMG_ConfirmationPopup_C.ExecuteUbergraph_UMG_ConfirmationPopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

