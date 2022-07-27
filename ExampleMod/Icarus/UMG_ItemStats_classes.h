// WidgetBlueprintGeneratedClass UMG_ItemStats.UMG_ItemStats_C
// Size: 0x378 (Inherited: 0x260)
struct UUMG_ItemStats_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* BuffBorder; // 0x268(0x08)
	struct UTextBlock* BuffName; // 0x270(0x08)
	struct USpacer* BuffSpacer; // 0x278(0x08)
	struct UVerticalBox* BuffStatList; // 0x280(0x08)
	struct UBorder* SetBonus; // 0x288(0x08)
	struct UVerticalBox* SetBonusList; // 0x290(0x08)
	struct USpacer* SetBonusSpacer; // 0x298(0x08)
	struct UVerticalBox* StatList; // 0x2a0(0x08)
	struct UBorder* StatsBorder; // 0x2a8(0x08)
	struct USpacer* StatsSpacer; // 0x2b0(0x08)
	struct UUMG_ToolDamage_C* UMG_ToolDamage; // 0x2b8(0x08)
	bool IsSetBonus; // 0x2c0(0x01)
	bool IsSetBonusActive; // 0x2c1(0x01)
	char pad_2C2[0x6]; // 0x2c2(0x06)
	struct FItemData Item; // 0x2c8(0xa0)
	struct TArray<struct FStatsEnum> Blacklist; // 0x368(0x10)

	void Update(struct FItemData Item); // Function UMG_ItemStats.UMG_ItemStats_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BP_OnEntryReleased(); // Function UMG_ItemStats.UMG_ItemStats_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG_ItemStats.UMG_ItemStats_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG_ItemStats.UMG_ItemStats_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_ItemStats(int32_t EntryPoint); // Function UMG_ItemStats.UMG_ItemStats_C.ExecuteUbergraph_UMG_ItemStats // (Final|UbergraphFunction) // @ game+0x1be0000
};

