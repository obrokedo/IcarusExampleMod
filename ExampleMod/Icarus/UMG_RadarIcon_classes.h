// WidgetBlueprintGeneratedClass UMG_RadarIcon.UMG_RadarIcon_C
// Size: 0x2e1 (Inherited: 0x268)
struct UUMG_RadarIcon_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* HitBox; // 0x270(0x08)
	struct UImage* IconImage; // 0x278(0x08)
	struct UScaleBox* IconScaleBox; // 0x280(0x08)
	struct UCanvasPanel* LabelCanvas; // 0x288(0x08)
	struct UImage* LabelLineImage; // 0x290(0x08)
	struct UScaleBox* LabelScaleBox_1; // 0x298(0x08)
	struct UTextBlock* LabelText; // 0x2a0(0x08)
	struct URetainerBox* RetainerBox_2; // 0x2a8(0x08)
	struct USizeBox* SizeBox_1; // 0x2b0(0x08)
	bool DrawLabel; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	struct FVector2D DirectionalOffset; // 0x2bc(0x08)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct UUMG_RadarIcon_C* MasterIcon; // 0x2c8(0x08)
	struct FString LabelString; // 0x2d0(0x10)
	bool IsPlayer; // 0x2e0(0x01)

	bool ShouldOverrideWidgetLocation(struct FVector& Location); // Function UMG_RadarIcon.UMG_RadarIcon_C.ShouldOverrideWidgetLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool ShouldOverrideVisibility(enum class ESlateVisibility& ForcedVisibility); // Function UMG_RadarIcon.UMG_RadarIcon_C.ShouldOverrideVisibility // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetShouldDrawLabel(bool DrawLabel); // Function UMG_RadarIcon.UMG_RadarIcon_C.SetShouldDrawLabel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ApplyLabelPosition(enum class RotationalDirections RelativePosition); // Function UMG_RadarIcon.UMG_RadarIcon_C.ApplyLabelPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_RadarIcon.UMG_RadarIcon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_RadarIcon.UMG_RadarIcon_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void InitialiseIconWidget(struct FMapIconsRowHandle MapIconData, struct AActor* OwningActor); // Function UMG_RadarIcon.UMG_RadarIcon_C.InitialiseIconWidget // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_RadarIcon(int32_t EntryPoint); // Function UMG_RadarIcon.UMG_RadarIcon_C.ExecuteUbergraph_UMG_RadarIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

