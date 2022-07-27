// WidgetBlueprintGeneratedClass CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C
// Size: 0x320 (Inherited: 0x2d9)
struct UCF_DeveloperProspectLoad_C : UCF_Base_C {
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UCustomComboBox* ComboBox; // 0x2e8(0x08)
	struct UTextBlock* FilePath; // 0x2f0(0x08)
	struct UTextBlock* LastSavedDate; // 0x2f8(0x08)
	struct UTextBlock* MapName; // 0x300(0x08)
	struct UTextBlock* ProspectDTKey; // 0x308(0x08)
	struct UTextBlock* ProspectID; // 0x310(0x08)
	struct UUMG_IconTextButton_C* UMG_IconTextButton_2; // 0x318(0x08)

	void CheckMapIsValid(struct FString MapName, bool& IsMapValid); // Function CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C.CheckMapIsValid // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void HandleArg(int32_t Index, struct FString Arg); // Function CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C.HandleArg // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnHandleItemSet(struct UDebugProspectRow_C* Row); // Function CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C.OnHandleItemSet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnHandleExecute(struct UDebugProspectRow_C* Row); // Function CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C.OnHandleExecute // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Execute(); // Function CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C.Execute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // Function CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C.BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void UpdatePreview(struct TArray<struct FString>& Args); // Function CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C.UpdatePreview // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__CF_DeveloperProspectLoad_ComboBox_K2Node_ComponentBoundEvent_3_OnItemSet__DelegateSignature(struct FString NameString, struct UUserWidget* Widget); // Function CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C.BndEvt__CF_DeveloperProspectLoad_ComboBox_K2Node_ComponentBoundEvent_3_OnItemSet__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_CF_DeveloperProspectLoad(int32_t EntryPoint); // Function CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C.ExecuteUbergraph_CF_DeveloperProspectLoad // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

