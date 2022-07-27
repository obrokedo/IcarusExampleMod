// WidgetBlueprintGeneratedClass UMG_TalentGraph.UMG_TalentGraph_C
// Size: 0x348 (Inherited: 0x298)
struct UUMG_TalentGraph_C : UTalentGraphWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UBorder* Border_1; // 0x2a0(0x08)
	struct UPanningPanel* Panner; // 0x2a8(0x08)
	struct UHorizontalBox* TalentTreeHorizontalBox; // 0x2b0(0x08)
	struct UHorizontalBox* TitleWidgets; // 0x2b8(0x08)
	struct FSlateBrush BackgroundBrush; // 0x2c0(0x88)

	void OnZoomChanged(int32_t Level, float Scale); // Function UMG_TalentGraph.UMG_TalentGraph_C.OnZoomChanged // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup Panner(); // Function UMG_TalentGraph.UMG_TalentGraph_C.Setup Panner // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnTalentTreeAdded(struct UTalentTreeWidget* TalentTree); // Function UMG_TalentGraph.UMG_TalentGraph_C.OnTalentTreeAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PostSetup(); // Function UMG_TalentGraph.UMG_TalentGraph_C.PostSetup // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_TalentGraph(int32_t EntryPoint); // Function UMG_TalentGraph.UMG_TalentGraph_C.ExecuteUbergraph_UMG_TalentGraph // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

