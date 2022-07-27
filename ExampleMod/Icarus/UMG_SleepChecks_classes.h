// WidgetBlueprintGeneratedClass UMG_SleepChecks.UMG_SleepChecks_C
// Size: 0x2f0 (Inherited: 0x260)
struct UUMG_SleepChecks_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* BaseColourBorder; // 0x268(0x08)
	struct UTextBlock* BoxText; // 0x270(0x08)
	struct UButton* ButtonCheck; // 0x278(0x08)
	struct UBorder* CheckboxBorder; // 0x280(0x08)
	struct UImage* CheckIcon; // 0x288(0x08)
	struct UImage* Icon; // 0x290(0x08)
	struct FLinearColor ValidGreen; // 0x298(0x10)
	struct FLinearColor InValidRed; // 0x2a8(0x10)
	struct FText SleepText; // 0x2b8(0x18)
	struct FText Tooltip Text Field; // 0x2d0(0x18)
	struct UObject* IconImage; // 0x2e8(0x08)

	void UpdateSleepCount(int32_t Count, int32_t Total); // Function UMG_SleepChecks.UMG_SleepChecks_C.UpdateSleepCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetValidStyle(bool IsValid); // Function UMG_SleepChecks.UMG_SleepChecks_C.SetValidStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_SleepChecks.UMG_SleepChecks_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_SleepChecks(int32_t EntryPoint); // Function UMG_SleepChecks.UMG_SleepChecks_C.ExecuteUbergraph_UMG_SleepChecks // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

