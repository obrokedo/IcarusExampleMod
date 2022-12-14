// WidgetBlueprintGeneratedClass UMG_RewardDisplay.UMG_RewardDisplay_C
// Size: 0x358 (Inherited: 0x280)
struct UUMG_RewardDisplay_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* Icon; // 0x288(0x08)
	struct USizeBox* IconSizeBox; // 0x290(0x08)
	struct USizeBox* MetaPlaceholder; // 0x298(0x08)
	struct UHorizontalBox* Resources; // 0x2a0(0x08)
	struct UTextBlock* RewardAmountText; // 0x2a8(0x08)
	struct UTextBlock* RewardNameText; // 0x2b0(0x08)
	struct FText RewardName; // 0x2b8(0x18)
	struct FSlateBrush RewardIcon; // 0x2d0(0x88)

	void SetRewardColor(struct FLinearColor Color); // Function UMG_RewardDisplay.UMG_RewardDisplay_C.SetRewardColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetRewardIcon(struct TSoftObjectPtr<UTexture2D> Icon); // Function UMG_RewardDisplay.UMG_RewardDisplay_C.SetRewardIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetCoinReward(int32_t Amount); // Function UMG_RewardDisplay.UMG_RewardDisplay_C.SetCoinReward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetExoticReward(struct FMetaResource Exotic); // Function UMG_RewardDisplay.UMG_RewardDisplay_C.SetExoticReward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetItemReward(struct FMetaItem MetaItem); // Function UMG_RewardDisplay.UMG_RewardDisplay_C.SetItemReward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Initialise(); // Function UMG_RewardDisplay.UMG_RewardDisplay_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_RewardDisplay(int32_t EntryPoint); // Function UMG_RewardDisplay.UMG_RewardDisplay_C.ExecuteUbergraph_UMG_RewardDisplay // (Final|UbergraphFunction) // @ game+0x1be0000
};

