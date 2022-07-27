// WidgetBlueprintGeneratedClass UMG_FarmingShelterState.UMG_FarmingShelterState_C
// Size: 0x2f0 (Inherited: 0x260)
struct UUMG_FarmingShelterState_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* BaseBacking; // 0x268(0x08)
	struct UTextBlock* BonusText; // 0x270(0x08)
	struct UBorder* CheckBacking; // 0x278(0x08)
	struct UImage* CheckIcon; // 0x280(0x08)
	struct UImage* Icon; // 0x288(0x08)
	struct FSlateColor Red; // 0x290(0x28)
	struct FSlateColor Green; // 0x2b8(0x28)
	struct UMaterialInterface* FALSE; // 0x2e0(0x08)
	struct UUMG_UnlockTooltip_C* Tooltip; // 0x2e8(0x08)

	void SetHoverText(bool IsOutdoors, bool IsGreenHouse, bool Powered); // Function UMG_FarmingShelterState.UMG_FarmingShelterState_C.SetHoverText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetStateStyle(bool IsOutdoor, bool IsGreenHouse, bool Powered, float Multiplier); // Function UMG_FarmingShelterState.UMG_FarmingShelterState_C.SetStateStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_FarmingShelterState.UMG_FarmingShelterState_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_FarmingShelterState(int32_t EntryPoint); // Function UMG_FarmingShelterState.UMG_FarmingShelterState_C.ExecuteUbergraph_UMG_FarmingShelterState // (Final|UbergraphFunction) // @ game+0x1be0000
};

