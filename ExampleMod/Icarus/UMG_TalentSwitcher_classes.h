// WidgetBlueprintGeneratedClass UMG_TalentSwitcher.UMG_TalentSwitcher_C
// Size: 0x2b0 (Inherited: 0x260)
struct UUMG_TalentSwitcher_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* ButtonsHBox; // 0x268(0x08)
	struct UImage* divider; // 0x270(0x08)
	struct UImage* divider_2; // 0x278(0x08)
	struct UUMG_TalentSwitcher_Notifier_C* Solo_Notifier; // 0x280(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* SoloButton; // 0x288(0x08)
	struct UUMG_TalentSwitcher_Notifier_C* Talent_Notifier; // 0x290(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* TalentsButton; // 0x298(0x08)
	struct FMulticastInlineDelegate SwitchTalents; // 0x2a0(0x10)

	void Construct(); // Function UMG_TalentSwitcher.UMG_TalentSwitcher_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_TalentSwitcher_PlayerTalents_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_TalentSwitcher.UMG_TalentSwitcher_C.BndEvt__UMG_TalentSwitcher_PlayerTalents_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_TalentSwitcher_SoloTalents_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_TalentSwitcher.UMG_TalentSwitcher_C.BndEvt__UMG_TalentSwitcher_SoloTalents_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_TalentSwitcher(int32_t EntryPoint); // Function UMG_TalentSwitcher.UMG_TalentSwitcher_C.ExecuteUbergraph_UMG_TalentSwitcher // (Final|UbergraphFunction) // @ game+0x1be0000
	void SwitchTalents__DelegateSignature(bool Solo); // Function UMG_TalentSwitcher.UMG_TalentSwitcher_C.SwitchTalents__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

