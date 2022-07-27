// WidgetBlueprintGeneratedClass UMG_TalentView_Prospect.UMG_TalentView_Prospect_C
// Size: 0x3f1 (Inherited: 0x270)
struct UUMG_TalentView_Prospect_C : UTalentViewInterface {
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
	struct UUMG_PhysicalKeyPrompt_C* Select_2; // 0x2c0(0x08)
	struct UImage* Shadow; // 0x2c8(0x08)
	struct UImage* Shadow_2; // 0x2d0(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; // 0x2d8(0x08)
	struct UUMG_PhysicalKeyPrompt_C* UMG_PhysicalKeyPrompt; // 0x2e0(0x08)
	struct UUMG_SpacePlayerInfo_C* UMG_SpacePlayerInfo; // 0x2e8(0x08)
	struct UUMG_TerrainSelection_C* UMG_TerrainSelection; // 0x2f0(0x08)
	struct TArray<struct UUMG_TalentArchetype_Player_C*> Buttons; // 0x2f8(0x10)
	struct FText AvailableTalents; // 0x308(0x18)
	struct FLinearColor FALSE; // 0x320(0x10)
	struct FMulticastInlineDelegate ProspectSelected; // 0x330(0x10)
	struct TMap<struct FTalentsRowHandle, struct FProspectInfo> ProspectInfos; // 0x340(0x50)
	struct TMap<struct FString, struct FTalentsRowHandle> ProspectDTKeys; // 0x390(0x50)
	struct FMulticastInlineDelegate ProspectListUpdated; // 0x3e0(0x10)
	bool SelectingTerrain; // 0x3f0(0x01)

	struct UTalentGraphWidget* GetGraphWidget(); // Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.GetGraphWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	struct UTalentGraphWidget* GetGraphWidget_1(); // Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.GetGraphWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	struct TArray<struct UTalentTreeWidget*> GetTalentTreeWidgets(); // Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.GetTalentTreeWidgets // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(struct UTalentModelInterface* TalentModel); // Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFail_FEA0825340002E0EB468BBA81BA64A6F(struct FResGenerateProspects& Response); // Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.OnFail_FEA0825340002E0EB468BBA81BA64A6F // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnSuccess_FEA0825340002E0EB468BBA81BA64A6F(struct FResGenerateProspects& Response); // Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.OnSuccess_FEA0825340002E0EB468BBA81BA64A6F // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnClick(struct FTalentArchetypesRowHandle Archetype); // Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.OnClick // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnModelViewChanged(struct UTalentModelInterface* InModel, struct UTalentViewInterface* InView); // Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.OnModelViewChanged // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ProspectClicked(struct FTalentsRowHandle Talent); // Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.ProspectClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GenerateProspects(struct TArray<struct FTalentsRowHandle>& ProspectTalentRowHandles); // Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.GenerateProspects // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_TalentView_Prospect_UMG_TerrainSelection_K2Node_ComponentBoundEvent_4_TalentArchetypeSelected__DelegateSignature(struct FTalentArchetypesRowHandle Archetype); // Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.BndEvt__UMG_TalentView_Prospect_UMG_TerrainSelection_K2Node_ComponentBoundEvent_4_TalentArchetypeSelected__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void UpdateTerrainSelection(); // Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.UpdateTerrainSelection // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReturnToTerrainSelection(); // Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.ReturnToTerrainSelection // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_TalentView_Prospect(int32_t EntryPoint); // Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.ExecuteUbergraph_UMG_TalentView_Prospect // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void ProspectListUpdated__DelegateSignature(); // Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.ProspectListUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ProspectSelected__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // Function UMG_TalentView_Prospect.UMG_TalentView_Prospect_C.ProspectSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

