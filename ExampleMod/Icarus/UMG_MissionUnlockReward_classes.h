// WidgetBlueprintGeneratedClass UMG_MissionUnlockReward.UMG_MissionUnlockReward_C
// Size: 0x2c8 (Inherited: 0x260)
struct UUMG_MissionUnlockReward_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* divider; // 0x268(0x08)
	struct UImage* Frame; // 0x270(0x08)
	struct UBorder* UnlockBorder; // 0x278(0x08)
	struct UImage* UnlockIcon; // 0x280(0x08)
	struct UTextBlock* UnlockText; // 0x288(0x08)
	struct FLinearColor Content Colour; // 0x290(0x10)
	struct FLinearColor Background Colour; // 0x2a0(0x10)
	struct FText Text; // 0x2b0(0x18)

	void UpdateText(struct FText Text); // Function UMG_MissionUnlockReward.UMG_MissionUnlockReward_C.UpdateText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Style Box(struct FLinearColor ContentColour, struct FLinearColor BackgroundColour); // Function UMG_MissionUnlockReward.UMG_MissionUnlockReward_C.Style Box // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_MissionUnlockReward.UMG_MissionUnlockReward_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_MissionUnlockReward.UMG_MissionUnlockReward_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_MissionUnlockReward(int32_t EntryPoint); // Function UMG_MissionUnlockReward.UMG_MissionUnlockReward_C.ExecuteUbergraph_UMG_MissionUnlockReward // (Final|UbergraphFunction) // @ game+0x1be0000
};

