// WidgetBlueprintGeneratedClass UMG_TalentView_Outpost.UMG_TalentView_Outpost_C
// Size: 0x3e0 (Inherited: 0x270)
struct UUMG_TalentView_Outpost_C : UTalentViewInterface {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UHorizontalBox* ArchetypeBox; // 0x278(0x08)
	struct UWidgetSwitcher* GraphWidgetSwitcher; // 0x280(0x08)
	struct UImage* invertedarrow; // 0x288(0x08)
	struct UImage* invertedarrow_2; // 0x290(0x08)
	struct UImage* invertedarrow_3; // 0x298(0x08)
	struct UImage* invertedarrow_4; // 0x2a0(0x08)
	struct UImage* Noise; // 0x2a8(0x08)
	struct UUMG_PhysicalKeyPrompt_C* Pan; // 0x2b0(0x08)
	struct UImage* Pattern; // 0x2b8(0x08)
	struct UUMG_PhysicalKeyPrompt_C* Select; // 0x2c0(0x08)
	struct UImage* Shadow; // 0x2c8(0x08)
	struct UImage* Shadow_2; // 0x2d0(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; // 0x2d8(0x08)
	struct UUMG_SpacePlayerInfo_C* UMG_SpacePlayerInfo; // 0x2e0(0x08)
	struct TArray<struct UUMG_TalentArchetype_Player_C*> Buttons; // 0x2e8(0x10)
	struct FText AvailableTalents; // 0x2f8(0x18)
	struct FLinearColor FALSE; // 0x310(0x10)
	struct FMulticastInlineDelegate ProspectSelected; // 0x320(0x10)
	struct TMap<struct FTalentsRowHandle, struct FProspectInfo> ProspectInfos; // 0x330(0x50)
	struct TMap<struct FString, struct FTalentsRowHandle> ProspectDTKeys; // 0x380(0x50)
	struct FMulticastInlineDelegate ProspectListUpdated; // 0x3d0(0x10)

	struct UTalentGraphWidget* GetGraphWidget(); // Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.GetGraphWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void CanAddTalent(struct FRowHandle TalentRowHandle, bool& CanAddTalent); // Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.CanAddTalent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct TArray<struct UTalentTreeWidget*> GetTalentTreeWidgets(); // Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.GetTalentTreeWidgets // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(struct UTalentModelInterface* TalentModel); // Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFail_DE41FEFE44CE6B2F6450E9AB88178931(struct FResGenerateProspects& Response); // Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.OnFail_DE41FEFE44CE6B2F6450E9AB88178931 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSuccess_DE41FEFE44CE6B2F6450E9AB88178931(struct FResGenerateProspects& Response); // Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.OnSuccess_DE41FEFE44CE6B2F6450E9AB88178931 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnClick(struct FTalentArchetypesRowHandle Archetype); // Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.OnClick // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnModelViewChanged(struct UTalentModelInterface* InModel, struct UTalentViewInterface* InView); // Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.OnModelViewChanged // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ProspectClicked(struct FTalentsRowHandle Talent); // Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.ProspectClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GenerateProspectsFromTalents(struct TArray<struct FTalentsRowHandle>& ProspectTalentRowHandles); // Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.GenerateProspectsFromTalents // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_TalentView_Outpost(int32_t EntryPoint); // Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.ExecuteUbergraph_UMG_TalentView_Outpost // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void ProspectListUpdated__DelegateSignature(); // Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.ProspectListUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ProspectSelected__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // Function UMG_TalentView_Outpost.UMG_TalentView_Outpost_C.ProspectSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

