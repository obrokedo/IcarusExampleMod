// WidgetBlueprintGeneratedClass CF_AddPlayerTracker.CF_AddPlayerTracker_C
// Size: 0x318 (Inherited: 0x30c)
struct UCF_AddPlayerTracker_C : UCF_BaseComboInteger_C {
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)

	void OnConstruction(); // Function CF_AddPlayerTracker.CF_AddPlayerTracker_C.OnConstruction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function CF_AddPlayerTracker.CF_AddPlayerTracker_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Handle Execute(struct UUserWidget* Widget, int32_t Amount); // Function CF_AddPlayerTracker.CF_AddPlayerTracker_C.Handle Execute // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Handle On Item Set(struct UUserWidget* Widget); // Function CF_AddPlayerTracker.CF_AddPlayerTracker_C.Handle On Item Set // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_CF_AddPlayerTracker(int32_t EntryPoint); // Function CF_AddPlayerTracker.CF_AddPlayerTracker_C.ExecuteUbergraph_CF_AddPlayerTracker // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

