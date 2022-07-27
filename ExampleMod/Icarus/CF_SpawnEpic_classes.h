// WidgetBlueprintGeneratedClass CF_SpawnEpic.CF_SpawnEpic_C
// Size: 0x318 (Inherited: 0x30c)
struct UCF_SpawnEpic_C : UCF_BaseComboInteger_C {
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)

	void OnConstruction(); // Function CF_SpawnEpic.CF_SpawnEpic_C.OnConstruction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function CF_SpawnEpic.CF_SpawnEpic_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Handle Execute(struct UUserWidget* Widget, int32_t Amount); // Function CF_SpawnEpic.CF_SpawnEpic_C.Handle Execute // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_CF_SpawnEpic(int32_t EntryPoint); // Function CF_SpawnEpic.CF_SpawnEpic_C.ExecuteUbergraph_CF_SpawnEpic // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

