// WidgetBlueprintGeneratedClass CF_SetPlayerTracker.CF_SetPlayerTracker_C
// Size: 0x318 (Inherited: 0x30c)
struct UCF_SetPlayerTracker_C : UCF_BaseComboInteger_C {
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)

	void OnConstruction(); // Function CF_SetPlayerTracker.CF_SetPlayerTracker_C.OnConstruction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function CF_SetPlayerTracker.CF_SetPlayerTracker_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Handle Execute(struct UUserWidget* Widget, int32_t Amount); // Function CF_SetPlayerTracker.CF_SetPlayerTracker_C.Handle Execute // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Handle On Item Set(struct UUserWidget* Widget); // Function CF_SetPlayerTracker.CF_SetPlayerTracker_C.Handle On Item Set // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_CF_SetPlayerTracker(int32_t EntryPoint); // Function CF_SetPlayerTracker.CF_SetPlayerTracker_C.ExecuteUbergraph_CF_SetPlayerTracker // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

