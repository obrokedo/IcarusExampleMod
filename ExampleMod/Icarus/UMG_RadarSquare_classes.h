// WidgetBlueprintGeneratedClass UMG_RadarSquare.UMG_RadarSquare_C
// Size: 0x299 (Inherited: 0x268)
struct UUMG_RadarSquare_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* IconImage; // 0x270(0x08)
	struct UScaleBox* IconScaleBox; // 0x278(0x08)
	struct FVector WorldSpaceCenter; // 0x280(0x0c)
	struct FVector WorldSpaceSize; // 0x28c(0x0c)
	enum class EMapTileRadarFlag RadarTileFlag; // 0x298(0x01)

	void Construct(); // Function UMG_RadarSquare.UMG_RadarSquare_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_RadarSquare(int32_t EntryPoint); // Function UMG_RadarSquare.UMG_RadarSquare_C.ExecuteUbergraph_UMG_RadarSquare // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

