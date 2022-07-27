// WidgetBlueprintGeneratedClass CF_UnlockAllProspects.CF_UnlockAllProspects_C
// Size: 0x348 (Inherited: 0x2f8)
struct UCF_UnlockAllProspects_C : UCF_BaseCombo_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct TArray<struct UTalentControllerComponent*> TalentControllerClasses; // 0x300(0x10)
	struct FString TalentContext; // 0x310(0x10)
	struct FTalentsRowHandle UnlockTalentRow; // 0x320(0x18)
	struct FTalentTreesEnum TalentTreesEnum; // 0x338(0x10)

	void OnConstruction(); // Function CF_UnlockAllProspects.CF_UnlockAllProspects_C.OnConstruction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnTalentsSynced(); // Function CF_UnlockAllProspects.CF_UnlockAllProspects_C.OnTalentsSynced // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryUnlockAllProspectTalents(struct FTalentTreesEnum Enum); // Function CF_UnlockAllProspects.CF_UnlockAllProspects_C.TryUnlockAllProspectTalents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetAllTalentRowHandlesOfType(struct FTalentTreesEnum TalentTreeEnum, struct TArray<struct FTalentsRowHandle>& Rows); // Function CF_UnlockAllProspects.CF_UnlockAllProspects_C.GetAllTalentRowHandlesOfType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FindTalentModelData(struct FTalentsRowHandle TalentRow, bool& Found, struct FTalentModelData& TalentModelData); // Function CF_UnlockAllProspects.CF_UnlockAllProspects_C.FindTalentModelData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void Construct(); // Function CF_UnlockAllProspects.CF_UnlockAllProspects_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void HandleExecute(struct UUserWidget* Widget, int32_t Amount); // Function CF_UnlockAllProspects.CF_UnlockAllProspects_C.HandleExecute // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_CF_UnlockAllProspects(int32_t EntryPoint); // Function CF_UnlockAllProspects.CF_UnlockAllProspects_C.ExecuteUbergraph_CF_UnlockAllProspects // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

