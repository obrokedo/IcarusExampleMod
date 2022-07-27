// WidgetBlueprintGeneratedClass CF_ToggleMetaTeleport.CF_ToggleMetaTeleport_C
// Size: 0x328 (Inherited: 0x2f0)
struct UCF_ToggleMetaTeleport_C : UCF_BaseButton_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	bool Spawn; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct TSoftClassPtr<UObject> MetaDepositSoftClass; // 0x300(0x28)

	void OnLoaded_5DC9A3934F59D45C92931986C319EDAB(struct UObject* Loaded); // Function CF_ToggleMetaTeleport.CF_ToggleMetaTeleport_C.OnLoaded_5DC9A3934F59D45C92931986C319EDAB // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Execute(); // Function CF_ToggleMetaTeleport.CF_ToggleMetaTeleport_C.Execute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_CF_ToggleMetaTeleport(int32_t EntryPoint); // Function CF_ToggleMetaTeleport.CF_ToggleMetaTeleport_C.ExecuteUbergraph_CF_ToggleMetaTeleport // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

