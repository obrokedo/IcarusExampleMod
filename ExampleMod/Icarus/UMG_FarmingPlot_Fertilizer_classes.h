// WidgetBlueprintGeneratedClass UMG_FarmingPlot_Fertilizer.UMG_FarmingPlot_Fertilizer_C
// Size: 0x298 (Inherited: 0x260)
struct UUMG_FarmingPlot_Fertilizer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* AvailableFuel; // 0x268(0x08)
	struct UUMG_SimpleProgressbar_C* FertilizerDurability; // 0x270(0x08)
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar_Fertiziler; // 0x278(0x08)
	struct UUMG_Inventory_C* UMG_Inventory; // 0x280(0x08)
	struct UUMG_ItemStats_C* UMG_ItemStats; // 0x288(0x08)
	struct AActor* LinkedActor; // 0x290(0x08)

	void UpdateTitleBarText(); // Function UMG_FarmingPlot_Fertilizer.UMG_FarmingPlot_Fertilizer_C.UpdateTitleBarText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Initialise(struct AActor* LinkedActor); // Function UMG_FarmingPlot_Fertilizer.UMG_FarmingPlot_Fertilizer_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_FarmingPlot_Fertilizer.UMG_FarmingPlot_Fertilizer_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ItemModified(struct UInventory* Inventory, int32_t Location); // Function UMG_FarmingPlot_Fertilizer.UMG_FarmingPlot_Fertilizer_C.ItemModified // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ItemChanged(struct UInventory* Inventory); // Function UMG_FarmingPlot_Fertilizer.UMG_FarmingPlot_Fertilizer_C.ItemChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_FarmingPlot_Fertilizer(int32_t EntryPoint); // Function UMG_FarmingPlot_Fertilizer.UMG_FarmingPlot_Fertilizer_C.ExecuteUbergraph_UMG_FarmingPlot_Fertilizer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

