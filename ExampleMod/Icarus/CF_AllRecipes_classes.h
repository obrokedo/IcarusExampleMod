// WidgetBlueprintGeneratedClass CF_AllRecipes.CF_AllRecipes_C
// Size: 0x308 (Inherited: 0x2f9)
struct UCF_AllRecipes_C : UCF_BaseBool_C {
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)

	bool GetCheckboxState(); // Function CF_AllRecipes.CF_AllRecipes_C.GetCheckboxState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void OnCheckboxStateChanged(bool NewState); // Function CF_AllRecipes.CF_AllRecipes_C.OnCheckboxStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_CF_AllRecipes(int32_t EntryPoint); // Function CF_AllRecipes.CF_AllRecipes_C.ExecuteUbergraph_CF_AllRecipes // (Final|UbergraphFunction) // @ game+0x1be0000
};

