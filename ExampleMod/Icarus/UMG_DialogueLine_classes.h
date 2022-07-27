// WidgetBlueprintGeneratedClass UMG_DialogueLine.UMG_DialogueLine_C
// Size: 0x288 (Inherited: 0x260)
struct UUMG_DialogueLine_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeIn; // 0x268(0x08)
	struct UWidgetAnimation* FadeOut; // 0x270(0x08)
	struct UTextBlock* Dialogue; // 0x278(0x08)
	struct UTextBlock* Name; // 0x280(0x08)

	void Start(struct FText Name, struct FText Dialogue, float AudioLength); // Function UMG_DialogueLine.UMG_DialogueLine_C.Start // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_DialogueLine(int32_t EntryPoint); // Function UMG_DialogueLine.UMG_DialogueLine_C.ExecuteUbergraph_UMG_DialogueLine // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

