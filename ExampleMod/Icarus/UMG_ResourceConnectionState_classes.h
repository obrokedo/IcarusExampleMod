// WidgetBlueprintGeneratedClass UMG_ResourceConnectionState.UMG_ResourceConnectionState_C
// Size: 0x3c1 (Inherited: 0x260)
struct UUMG_ResourceConnectionState_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* NotActiveAnimation; // 0x268(0x08)
	struct UWidgetAnimation* ProvidingAnimation; // 0x270(0x08)
	struct UWidgetAnimation* RecievingAnimation; // 0x278(0x08)
	struct UBorder* BaseBacking; // 0x280(0x08)
	struct UBorder* CheckBacking; // 0x288(0x08)
	struct UImage* CheckIcon; // 0x290(0x08)
	struct UProgressBar* RecievingProgressBar; // 0x298(0x08)
	struct UTextBlock* RequiresAmountText; // 0x2a0(0x08)
	struct UImage* ResourceIcon; // 0x2a8(0x08)
	struct FSlateColor Red; // 0x2b0(0x28)
	struct FSlateColor WaterBlue; // 0x2d8(0x28)
	struct UMaterialInterface* FALSE; // 0x300(0x08)
	struct UUMG_UnlockTooltip_C* Tooltip; // 0x308(0x08)
	struct AActor* Actor; // 0x310(0x08)
	enum class EIcarusResourceType Type; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct UTraitComponent* Trait; // 0x320(0x08)
	struct UResourceNetworkComponent* ResourceComponent; // 0x328(0x08)
	struct FSlateColor EnergyYellow; // 0x330(0x28)
	struct FSlateColor FuelGreen; // 0x358(0x28)
	struct FSlateColor OxygenWhite; // 0x380(0x28)
	struct FText Tooltip Text; // 0x3a8(0x18)
	bool Provider; // 0x3c0(0x01)

	void UpdateTooltipText(struct FText ToolTipText); // Function UMG_ResourceConnectionState.UMG_ResourceConnectionState_C.UpdateTooltipText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ResourceComponentUpdated(); // Function UMG_ResourceConnectionState.UMG_ResourceConnectionState_C.ResourceComponentUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ResourceComponentActiveStateChanged(bool IsActive); // Function UMG_ResourceConnectionState.UMG_ResourceConnectionState_C.ResourceComponentActiveStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(struct AActor* Actor, enum class EIcarusResourceType Type); // Function UMG_ResourceConnectionState.UMG_ResourceConnectionState_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetHoverText(bool IsOutdoors, bool IsGreenHouse); // Function UMG_ResourceConnectionState.UMG_ResourceConnectionState_C.SetHoverText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetStateStyle(bool Connected, float Multiplier); // Function UMG_ResourceConnectionState.UMG_ResourceConnectionState_C.SetStateStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_ResourceConnectionState.UMG_ResourceConnectionState_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_ResourceConnectionState(int32_t EntryPoint); // Function UMG_ResourceConnectionState.UMG_ResourceConnectionState_C.ExecuteUbergraph_UMG_ResourceConnectionState // (Final|UbergraphFunction) // @ game+0x1be0000
};

