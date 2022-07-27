// WidgetBlueprintGeneratedClass UMG_ItemPopup.UMG_ItemPopup_C
// Size: 0x392 (Inherited: 0x260)
struct UUMG_ItemPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Description; // 0x268(0x08)
	struct UTextBlock* DescriptionText; // 0x270(0x08)
	struct UTextBlock* DevelopmentText; // 0x278(0x08)
	struct UImage* divider; // 0x280(0x08)
	struct UImage* divider_2; // 0x288(0x08)
	struct UTextBlock* Durability; // 0x290(0x08)
	struct UTextBlock* FlavourText; // 0x298(0x08)
	struct UBorder* FunctionBorder; // 0x2a0(0x08)
	struct UBorder* FunctionBorder_2; // 0x2a8(0x08)
	struct UTextBlock* FunctionText; // 0x2b0(0x08)
	struct UBorder* Header; // 0x2b8(0x08)
	struct UTextBlock* Name; // 0x2c0(0x08)
	struct UTextBlock* SpoilText; // 0x2c8(0x08)
	struct UBorder* SpoilTimer; // 0x2d0(0x08)
	struct UTextBlock* Stack; // 0x2d8(0x08)
	struct UUMG_ItemStats_C* UMG_ItemStats_C_1; // 0x2e0(0x08)
	struct UTextBlock* Weight; // 0x2e8(0x08)
	struct FVector2D CalculatedSize; // 0x2f0(0x08)
	struct FSlateColor RegularItemColour; // 0x2f8(0x28)
	struct FSlateColor MetaItemColour; // 0x320(0x28)
	struct TArray<struct FStatsEnum> Blacklist; // 0x348(0x10)
	struct UInventory* Inventory; // 0x358(0x08)
	int32_t Slot_1; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
	struct FSlateColor MissionItemColour; // 0x368(0x28)
	bool MetaItem; // 0x390(0x01)
	bool QuestItem; // 0x391(0x01)

	void GramsToOutputString(int32_t Weight, struct FText& WeightString); // Function UMG_ItemPopup.UMG_ItemPopup_C.GramsToOutputString // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetDamageVariation(struct FItemData Item, bool Melee); // Function UMG_ItemPopup.UMG_ItemPopup_C.GetDamageVariation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdatePopupColour(); // Function UMG_ItemPopup.UMG_ItemPopup_C.UpdatePopupColour // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetSize(struct FVector2D& Size); // Function UMG_ItemPopup.UMG_ItemPopup_C.GetSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Show for Item(struct FItemData Item, int32_t Slot, struct UInventory* Inventory, bool& Shown); // Function UMG_ItemPopup.UMG_ItemPopup_C.Show for Item // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_ItemPopup.UMG_ItemPopup_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_ItemPopup(int32_t EntryPoint); // Function UMG_ItemPopup.UMG_ItemPopup_C.ExecuteUbergraph_UMG_ItemPopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

