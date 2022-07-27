// BlueprintGeneratedClass BP_PlayerPreview_HAB_Selection.BP_PlayerPreview_HAB_Selection_C
// Size: 0x318 (Inherited: 0x30c)
struct ABP_PlayerPreview_HAB_Selection_C : ABP_PlayerPreview_HAB_C {
	char pad_30C[0x4]; // 0x30c(0x04)
	struct UUMG_CharacterSelection_C* CharacterSelectionWidget; // 0x310(0x08)

	void ResolveVisibility(bool& Visible); // Function BP_PlayerPreview_HAB_Selection.BP_PlayerPreview_HAB_Selection_C.ResolveVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void SetCharacterSelectionWidget(struct UUMG_CharacterSelection_C* CharacterSelection); // Function BP_PlayerPreview_HAB_Selection.BP_PlayerPreview_HAB_Selection_C.SetCharacterSelectionWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

