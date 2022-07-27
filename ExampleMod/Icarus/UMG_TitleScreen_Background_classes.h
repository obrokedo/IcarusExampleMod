// WidgetBlueprintGeneratedClass UMG_TitleScreen_Background.UMG_TitleScreen_Background_C
// Size: 0x2a8 (Inherited: 0x260)
struct UUMG_TitleScreen_Background_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* BackgroundParallax; // 0x268(0x08)
	struct UImage* Background; // 0x270(0x08)
	struct UCanvasPanel* BackLayer; // 0x278(0x08)
	struct UCanvasPanel* FrontLayer; // 0x280(0x08)
	struct UCanvasPanel* MiddleLayer; // 0x288(0x08)
	struct UImage* person; // 0x290(0x08)
	struct UImage* PolarBear; // 0x298(0x08)
	struct FVector2D SmoothingMousePosition; // 0x2a0(0x08)

	void Update Smooth Mouse Position(struct FVector2D MousePosition, float DeltaTime); // Function UMG_TitleScreen_Background.UMG_TitleScreen_Background_C.Update Smooth Mouse Position // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Mouse Parallax(); // Function UMG_TitleScreen_Background.UMG_TitleScreen_Background_C.Mouse Parallax // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_TitleScreen_Background.UMG_TitleScreen_Background_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_TitleScreen_Background.UMG_TitleScreen_Background_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_TitleScreen_Background(int32_t EntryPoint); // Function UMG_TitleScreen_Background.UMG_TitleScreen_Background_C.ExecuteUbergraph_UMG_TitleScreen_Background // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

