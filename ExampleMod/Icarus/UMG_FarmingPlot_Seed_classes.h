// WidgetBlueprintGeneratedClass UMG_FarmingPlot_Seed.UMG_FarmingPlot_Seed_C
// Size: 0x2a0 (Inherited: 0x260)
struct UUMG_FarmingPlot_Seed_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* AvailableFuel; // 0x268(0x08)
	struct UImage* divider; // 0x270(0x08)
	struct UProgressBar* GrowthProgressBar; // 0x278(0x08)
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar_Seed; // 0x280(0x08)
	struct UUMG_Inventory_C* UMG_Inventory; // 0x288(0x08)
	struct UUMG_MissingRequirement_Warning_C* UMG_MissingRequirement_Warning; // 0x290(0x08)
	struct AActor* LinkedActor; // 0x298(0x08)

	void UpdateTitleBarText(); // Function UMG_FarmingPlot_Seed.UMG_FarmingPlot_Seed_C.UpdateTitleBarText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Initialise(struct AActor* LinkedActor); // Function UMG_FarmingPlot_Seed.UMG_FarmingPlot_Seed_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_FarmingPlot_Seed.UMG_FarmingPlot_Seed_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnOutOfFuel(); // Function UMG_FarmingPlot_Seed.UMG_FarmingPlot_Seed_C.OnOutOfFuel // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_FarmingPlot_Seed(int32_t EntryPoint); // Function UMG_FarmingPlot_Seed.UMG_FarmingPlot_Seed_C.ExecuteUbergraph_UMG_FarmingPlot_Seed // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

