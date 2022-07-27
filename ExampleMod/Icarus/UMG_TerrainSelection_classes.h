// WidgetBlueprintGeneratedClass UMG_TerrainSelection.UMG_TerrainSelection_C
// Size: 0x2a8 (Inherited: 0x260)
struct UUMG_TerrainSelection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_BasicButton_2_C* DevelopmentProspects; // 0x268(0x08)
	struct UHorizontalBox* HorizontalBox_Terrains; // 0x270(0x08)
	struct UImage* Noise; // 0x278(0x08)
	struct UImage* Pattern; // 0x280(0x08)
	struct UUMG_TerrainButton_C* TerrainButton_OLY; // 0x288(0x08)
	struct UUMG_TerrainButton_C* TerrainButton_STYX; // 0x290(0x08)
	struct FMulticastInlineDelegate TalentArchetypeSelected; // 0x298(0x10)

	void Construct(); // Function UMG_TerrainSelection.UMG_TerrainSelection_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_TerrainSelection_DevelopmentProspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_TerrainSelection.UMG_TerrainSelection_C.BndEvt__UMG_TerrainSelection_DevelopmentProspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void TerrainSelected(struct FTalentArchetypesRowHandle Terrain); // Function UMG_TerrainSelection.UMG_TerrainSelection_C.TerrainSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_TerrainSelection(int32_t EntryPoint); // Function UMG_TerrainSelection.UMG_TerrainSelection_C.ExecuteUbergraph_UMG_TerrainSelection // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void TalentArchetypeSelected__DelegateSignature(struct FTalentArchetypesRowHandle Archetype); // Function UMG_TerrainSelection.UMG_TerrainSelection_C.TalentArchetypeSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

