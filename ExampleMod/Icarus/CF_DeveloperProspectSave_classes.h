// WidgetBlueprintGeneratedClass CF_DeveloperProspectSave.CF_DeveloperProspectSave_C
// Size: 0x300 (Inherited: 0x2d9)
struct UCF_DeveloperProspectSave_C : UCF_Base_C {
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UCustomComboBox* ComboBox; // 0x2e8(0x08)
	struct UEditableText* Text; // 0x2f0(0x08)
	struct UUMG_IconTextButton_C* UMG_IconTextButton_2; // 0x2f8(0x08)

	void OnHandleItemSet(struct UDebugProspectRow_C* Row); // Function CF_DeveloperProspectSave.CF_DeveloperProspectSave_C.OnHandleItemSet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Execute(); // Function CF_DeveloperProspectSave.CF_DeveloperProspectSave_C.Execute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdatePreview(struct TArray<struct FString>& Args); // Function CF_DeveloperProspectSave.CF_DeveloperProspectSave_C.UpdatePreview // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(struct FString NameString, struct UUserWidget* Widget); // Function CF_DeveloperProspectSave.CF_DeveloperProspectSave_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function CF_DeveloperProspectSave.CF_DeveloperProspectSave_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // Function CF_DeveloperProspectSave.CF_DeveloperProspectSave_C.BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_CF_DeveloperProspectSave(int32_t EntryPoint); // Function CF_DeveloperProspectSave.CF_DeveloperProspectSave_C.ExecuteUbergraph_CF_DeveloperProspectSave // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

