// WidgetBlueprintGeneratedClass UMG_TooltipInworld.UMG_TooltipInworld_C
// Size: 0x3bb (Inherited: 0x2b5)
struct UUMG_TooltipInworld_C : UW_ProjectionWidget_C {
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x2c0(0x08)
	struct UOverlay* DecayOverlay; // 0x2c8(0x08)
	struct UTextBlock* DecayPercent; // 0x2d0(0x08)
	struct UProgressBar* DecayProgress; // 0x2d8(0x08)
	struct UTextBlock* Description; // 0x2e0(0x08)
	struct UProgressBar* Durability; // 0x2e8(0x08)
	struct UOverlay* DurabilityOverlay; // 0x2f0(0x08)
	struct UTextBlock* DurabilityPercent; // 0x2f8(0x08)
	struct UUMG_FillableProgressBar_C* Fillable; // 0x300(0x08)
	struct UImage* Image; // 0x308(0x08)
	struct UImage* Image_2; // 0x310(0x08)
	struct UImage* Image_3; // 0x318(0x08)
	struct UImage* Image_4; // 0x320(0x08)
	struct UImage* Image_77; // 0x328(0x08)
	struct UImage* Image_130; // 0x330(0x08)
	struct UImage* Image_193; // 0x338(0x08)
	struct UOverlay* MainOverlay; // 0x340(0x08)
	struct UTextBlock* Name; // 0x348(0x08)
	struct UBorder* NotOwner; // 0x350(0x08)
	struct UBorder* Owner; // 0x358(0x08)
	struct UImage* Pointer; // 0x360(0x08)
	struct UBorder* ShelterBorder; // 0x368(0x08)
	struct UImage* ShelterImage; // 0x370(0x08)
	struct UOverlay* ShelterOverlay; // 0x378(0x08)
	struct UCanvasPanel* ShipOwnerDisplay; // 0x380(0x08)
	struct UTextBlock* Stack; // 0x388(0x08)
	struct UBorder* StackBorder; // 0x390(0x08)
	struct UTextBlock* TextBlock_Capacity; // 0x398(0x08)
	struct UUMG_InteractionPrompt_C* UMG_InteractionPrompt; // 0x3a0(0x08)
	struct TArray<struct FInteractableRowHandle> InteractablesToShowStatic; // 0x3a8(0x10)
	bool ShowShelteredIcon; // 0x3b8(0x01)
	bool ShowElectricIcon; // 0x3b9(0x01)
	bool ShowWaterIcon; // 0x3ba(0x01)

	void ProjectionItemChanged(); // Function UMG_TooltipInworld.UMG_TooltipInworld_C.ProjectionItemChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetProjectionActor(struct UBP_UIProjectionComponent_C* ProjectionActor); // Function UMG_TooltipInworld.UMG_TooltipInworld_C.SetProjectionActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool ShouldUseOverride(); // Function UMG_TooltipInworld.UMG_TooltipInworld_C.ShouldUseOverride // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetOverridePlacement(struct FVector2D& Location, float& ScaleAlpha, struct FVector2D& Alignment, bool& UseOpacity); // Function UMG_TooltipInworld.UMG_TooltipInworld_C.GetOverridePlacement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateVisuals(); // Function UMG_TooltipInworld.UMG_TooltipInworld_C.UpdateVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FLinearColor Get_Durability_FillColor(); // Function UMG_TooltipInworld.UMG_TooltipInworld_C.Get_Durability_FillColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void UpdateToolTip(struct AIcarusActor* InputItem); // Function UMG_TooltipInworld.UMG_TooltipInworld_C.UpdateToolTip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TickWidget(); // Function UMG_TooltipInworld.UMG_TooltipInworld_C.TickWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_TooltipInworld.UMG_TooltipInworld_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_TooltipInworld(int32_t EntryPoint); // Function UMG_TooltipInworld.UMG_TooltipInworld_C.ExecuteUbergraph_UMG_TooltipInworld // (Final|UbergraphFunction) // @ game+0x1be0000
};

