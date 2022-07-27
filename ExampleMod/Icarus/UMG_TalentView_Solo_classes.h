// WidgetBlueprintGeneratedClass UMG_TalentView_Solo.UMG_TalentView_Solo_C
// Size: 0x3f8 (Inherited: 0x270)
struct UUMG_TalentView_Solo_C : UTalentViewInterface {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBorder* ActiveMessage; // 0x278(0x08)
	struct UHorizontalBox* ArchetypeBox; // 0x280(0x08)
	struct UImage* bot; // 0x288(0x08)
	struct UImage* bot_2; // 0x290(0x08)
	struct UImage* bot_3; // 0x298(0x08)
	struct UImage* corner_5; // 0x2a0(0x08)
	struct UImage* corner_6; // 0x2a8(0x08)
	struct UImage* corner_7; // 0x2b0(0x08)
	struct UImage* corner_8; // 0x2b8(0x08)
	struct UImage* corner_9; // 0x2c0(0x08)
	struct UImage* corner_10; // 0x2c8(0x08)
	struct UImage* corner_11; // 0x2d0(0x08)
	struct UImage* corner_12; // 0x2d8(0x08)
	struct UImage* Gradient; // 0x2e0(0x08)
	struct UWidgetSwitcher* GraphWidgetSwitcher; // 0x2e8(0x08)
	struct UImage* Image; // 0x2f0(0x08)
	struct UImage* Image_2; // 0x2f8(0x08)
	struct UImage* Image_3; // 0x300(0x08)
	struct UImage* Image_114; // 0x308(0x08)
	struct UBorder* InactiveMessage; // 0x310(0x08)
	struct UTextBlock* Message_2; // 0x318(0x08)
	struct UTextBlock* Message_3; // 0x320(0x08)
	struct UImage* Mid; // 0x328(0x08)
	struct UImage* Mid_2; // 0x330(0x08)
	struct UImage* Mid_3; // 0x338(0x08)
	struct UImage* Noise; // 0x340(0x08)
	struct UImage* Pattern; // 0x348(0x08)
	struct UUMG_ButtonIcon_C* RefreshButton; // 0x350(0x08)
	struct UOverlay* SoloActiveState; // 0x358(0x08)
	struct UTextBlock* TextBlock_93; // 0x360(0x08)
	struct UImage* Top; // 0x368(0x08)
	struct UImage* Top_2; // 0x370(0x08)
	struct UImage* Top_3; // 0x378(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; // 0x380(0x08)
	struct UUMG_RefundPoints_C* UMG_RefundPoints; // 0x388(0x08)
	struct UUMG_TalentSwitcher_C* UMG_TalentSwitcher; // 0x390(0x08)
	struct UUMG_TreePoints_C* UMG_TreePoints; // 0x398(0x08)
	struct UTextBlock* Warning_2; // 0x3a0(0x08)
	struct UTextBlock* Warning_3; // 0x3a8(0x08)
	struct TArray<struct UUMG_TalentArchetype_Player_C*> Buttons; // 0x3b0(0x10)
	struct FText AvailableTalents; // 0x3c0(0x18)
	struct FLinearColor FALSE; // 0x3d8(0x10)
	struct FMulticastInlineDelegate SwitchTalents; // 0x3e8(0x10)

	struct UTalentGraphWidget* GetGraphWidget(); // Function UMG_TalentView_Solo.UMG_TalentView_Solo_C.GetGraphWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void ShowSoloWarning(bool SoloTree); // Function UMG_TalentView_Solo.UMG_TalentView_Solo_C.ShowSoloWarning // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct TArray<struct UTalentTreeWidget*> GetTalentTreeWidgets(); // Function UMG_TalentView_Solo.UMG_TalentView_Solo_C.GetTalentTreeWidgets // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(); // Function UMG_TalentView_Solo.UMG_TalentView_Solo_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnClick(struct FTalentArchetypesRowHandle Archetype); // Function UMG_TalentView_Solo.UMG_TalentView_Solo_C.OnClick // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnModelViewChanged(struct UTalentModelInterface* InModel, struct UTalentViewInterface* InView); // Function UMG_TalentView_Solo.UMG_TalentView_Solo_C.OnModelViewChanged // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_TalentView_Solo_UMG_TalentSwitcher_K2Node_ComponentBoundEvent_1_SwitchTalents__DelegateSignature(bool Solo); // Function UMG_TalentView_Solo.UMG_TalentView_Solo_C.BndEvt__UMG_TalentView_Solo_UMG_TalentSwitcher_K2Node_ComponentBoundEvent_1_SwitchTalents__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_TalentView_Solo_RefreshButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // Function UMG_TalentView_Solo.UMG_TalentView_Solo_C.BndEvt__UMG_TalentView_Solo_RefreshButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_TalentView_Solo.UMG_TalentView_Solo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void UpdateTalentNotifiers(struct UTalentModelInterface_Const* Model); // Function UMG_TalentView_Solo.UMG_TalentView_Solo_C.UpdateTalentNotifiers // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_TalentView_Solo(int32_t EntryPoint); // Function UMG_TalentView_Solo.UMG_TalentView_Solo_C.ExecuteUbergraph_UMG_TalentView_Solo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void SwitchTalents__DelegateSignature(bool Solo); // Function UMG_TalentView_Solo.UMG_TalentView_Solo_C.SwitchTalents__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

