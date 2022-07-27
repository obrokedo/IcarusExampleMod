// WidgetBlueprintGeneratedClass UMG_ToolDamage.UMG_ToolDamage_C
// Size: 0x320 (Inherited: 0x260)
struct UUMG_ToolDamage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_DamageVariation_C* UMG_DamageVariation_Melee; // 0x268(0x08)
	struct UUMG_DamageVariation_C* UMG_DamageVariation_Projectile; // 0x270(0x08)
	bool IsSetBonus; // 0x278(0x01)
	bool IsSetBonusActive; // 0x279(0x01)
	char pad_27A[0x6]; // 0x27a(0x06)
	struct FItemData Item; // 0x280(0xa0)

	void Update(struct FItemData Item); // Function UMG_ToolDamage.UMG_ToolDamage_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BP_OnEntryReleased(); // Function UMG_ToolDamage.UMG_ToolDamage_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG_ToolDamage.UMG_ToolDamage_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG_ToolDamage.UMG_ToolDamage_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_ToolDamage(int32_t EntryPoint); // Function UMG_ToolDamage.UMG_ToolDamage_C.ExecuteUbergraph_UMG_ToolDamage // (Final|UbergraphFunction) // @ game+0x1be0000
};

