// WidgetBlueprintGeneratedClass CF_UnlockTalent_Base.CF_UnlockTalent_Base_C
// Size: 0x350 (Inherited: 0x30c)
struct UCF_UnlockTalent_Base_C : UCF_BaseComboInteger_C {
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct TArray<struct UTalentControllerComponent*> TalentControllerClasses; // 0x318(0x10)
	struct FString TalentContext; // 0x328(0x10)
	struct FTalentsRowHandle UnlockTalentRow; // 0x338(0x18)

	void OnTalentsSynced(); // Function CF_UnlockTalent_Base.CF_UnlockTalent_Base_C.OnTalentsSynced // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryUnlockTalent(struct FTalentsRowHandle Talent); // Function CF_UnlockTalent_Base.CF_UnlockTalent_Base_C.TryUnlockTalent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool CanModifyNumber(); // Function CF_UnlockTalent_Base.CF_UnlockTalent_Base_C.CanModifyNumber // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetAllTalentRowHandles(struct TArray<struct FTalentsRowHandle>& Rows); // Function CF_UnlockTalent_Base.CF_UnlockTalent_Base_C.GetAllTalentRowHandles // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FindTalentModelData(struct FTalentsRowHandle TalentRow, bool& Found, struct FTalentModelData& TalentModelData); // Function CF_UnlockTalent_Base.CF_UnlockTalent_Base_C.FindTalentModelData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void Construct(); // Function CF_UnlockTalent_Base.CF_UnlockTalent_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Handle Execute(struct UUserWidget* Widget, int32_t Amount); // Function CF_UnlockTalent_Base.CF_UnlockTalent_Base_C.Handle Execute // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Handle On Item Set(struct UUserWidget* Widget); // Function CF_UnlockTalent_Base.CF_UnlockTalent_Base_C.Handle On Item Set // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_CF_UnlockTalent_Base(int32_t EntryPoint); // Function CF_UnlockTalent_Base.CF_UnlockTalent_Base_C.ExecuteUbergraph_CF_UnlockTalent_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

