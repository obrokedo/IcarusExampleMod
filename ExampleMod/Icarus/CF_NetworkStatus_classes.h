// WidgetBlueprintGeneratedClass CF_NetworkStatus.CF_NetworkStatus_C
// Size: 0x308 (Inherited: 0x2f9)
struct UCF_NetworkStatus_C : UCF_BaseBool_C {
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)

	void OnCheckboxStateChanged(bool NewState); // Function CF_NetworkStatus.CF_NetworkStatus_C.OnCheckboxStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_CF_NetworkStatus(int32_t EntryPoint); // Function CF_NetworkStatus.CF_NetworkStatus_C.ExecuteUbergraph_CF_NetworkStatus // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

