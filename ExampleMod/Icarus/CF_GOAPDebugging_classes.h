// WidgetBlueprintGeneratedClass CF_GOAPDebugging.CF_GOAPDebugging_C
// Size: 0x308 (Inherited: 0x2f9)
struct UCF_GOAPDebugging_C : UCF_BaseBool_C {
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)

	bool GetCheckboxState(); // Function CF_GOAPDebugging.CF_GOAPDebugging_C.GetCheckboxState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void OnCheckboxStateChanged(bool NewState); // Function CF_GOAPDebugging.CF_GOAPDebugging_C.OnCheckboxStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_CF_GOAPDebugging(int32_t EntryPoint); // Function CF_GOAPDebugging.CF_GOAPDebugging_C.ExecuteUbergraph_CF_GOAPDebugging // (Final|UbergraphFunction) // @ game+0x1be0000
};

