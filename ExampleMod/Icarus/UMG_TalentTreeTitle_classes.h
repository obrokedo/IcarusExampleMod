// WidgetBlueprintGeneratedClass UMG_TalentTreeTitle.UMG_TalentTreeTitle_C
// Size: 0x2c0 (Inherited: 0x260)
struct UUMG_TalentTreeTitle_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* CurrentRankTitle; // 0x268(0x08)
	struct URetainerBox* Desaturator; // 0x270(0x08)
	struct UImage* NextRank; // 0x278(0x08)
	struct UOverlay* RankBox; // 0x280(0x08)
	struct UUMG_ProgressBar_C* RankProgress; // 0x288(0x08)
	struct UProgressBar* RankProgressPreview; // 0x290(0x08)
	struct UTextBlock* Title; // 0x298(0x08)
	struct FTalentTreesRowHandle TalentTree; // 0x2a0(0x18)
	struct UTalentModelInterface_Const* Model; // 0x2b8(0x08)

	void RefreshRankBar(struct UTalentModelInterface_Const* Model); // Function UMG_TalentTreeTitle.UMG_TalentTreeTitle_C.RefreshRankBar // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_TalentTreeTitle.UMG_TalentTreeTitle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Talent Hovered(struct UUMG_Talent_Base_C* Talent); // Function UMG_TalentTreeTitle.UMG_TalentTreeTitle_C.Talent Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Talent Unhovered(); // Function UMG_TalentTreeTitle.UMG_TalentTreeTitle_C.Talent Unhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CreateTooltips(); // Function UMG_TalentTreeTitle.UMG_TalentTreeTitle_C.CreateTooltips // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_TalentTreeTitle(int32_t EntryPoint); // Function UMG_TalentTreeTitle.UMG_TalentTreeTitle_C.ExecuteUbergraph_UMG_TalentTreeTitle // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

