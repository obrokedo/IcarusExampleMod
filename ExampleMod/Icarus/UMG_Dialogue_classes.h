// WidgetBlueprintGeneratedClass UMG_Dialogue.UMG_Dialogue_C
// Size: 0x2e8 (Inherited: 0x260)
struct UUMG_Dialogue_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* LineBox; // 0x268(0x08)
	struct FFDialogueStruct CurrentDialogue; // 0x270(0x48)
	struct TArray<float> Times; // 0x2b8(0x10)
	struct TArray<struct FText> Dialogues; // 0x2c8(0x10)
	struct TArray<float> Lenghts; // 0x2d8(0x10)

	void AddDialogue(struct FText Name, struct TArray<struct FText>& Dialogue, float Length); // Function UMG_Dialogue.UMG_Dialogue_C.AddDialogue // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddLine(struct FText Name, struct FText Dialogue, float Length); // Function UMG_Dialogue.UMG_Dialogue_C.AddLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Dialogue.UMG_Dialogue_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_Dialogue(int32_t EntryPoint); // Function UMG_Dialogue.UMG_Dialogue_C.ExecuteUbergraph_UMG_Dialogue // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

