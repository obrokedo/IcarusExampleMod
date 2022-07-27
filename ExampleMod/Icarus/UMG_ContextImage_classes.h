// WidgetBlueprintGeneratedClass UMG_ContextImage.UMG_ContextImage_C
// Size: 0x399 (Inherited: 0x260)
struct UUMG_ContextImage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct URetainerBox* ContextImageBox; // 0x268(0x08)
	struct UCanvasPanel* Crosshair; // 0x270(0x08)
	struct UImage* Image; // 0x278(0x08)
	struct UUMG_Crosshair_C* UMG_Crosshair; // 0x280(0x08)
	struct AIcarusActor* LastObject; // 0x288(0x08)
	struct FSlateColor ValidColour; // 0x290(0x28)
	struct FSlateColor InvalidColour; // 0x2b8(0x28)
	struct FItemData HeldItem; // 0x2e0(0xa0)
	float CurrentAlpha; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct TArray<struct FFContextImageConditions> ContextImageQueries; // 0x388(0x10)
	bool ForceShowCrosshair; // 0x398(0x01)

	void SetForceShowCrosshair(bool ForceShowCrosshair); // Function UMG_ContextImage.UMG_ContextImage_C.SetForceShowCrosshair // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	enum class EViewTraceResultPriority GetContextResultPriority(struct FViewTraceResult& Result); // Function UMG_ContextImage.UMG_ContextImage_C.GetContextResultPriority // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateContext(); // Function UMG_ContextImage.UMG_ContextImage_C.UpdateContext // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateTarget(float Alpha); // Function UMG_ContextImage.UMG_ContextImage_C.UpdateTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_ContextImage.UMG_ContextImage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_ContextImage.UMG_ContextImage_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_ContextImage(int32_t EntryPoint); // Function UMG_ContextImage.UMG_ContextImage_C.ExecuteUbergraph_UMG_ContextImage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

