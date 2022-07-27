// WidgetBlueprintGeneratedClass UMG_DifficultySelect.UMG_DifficultySelect_C
// Size: 0x288 (Inherited: 0x260)
struct UUMG_DifficultySelect_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* DifficultyOptions; // 0x268(0x08)
	enum class EMissionDifficulty Difficulty; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct FMulticastInlineDelegate DifficultyUpdated; // 0x278(0x10)

	void Select(enum class EMissionDifficulty Difficulty); // Function UMG_DifficultySelect.UMG_DifficultySelect_C.Select // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WidgetChecked(bool Checked, struct UUMG_DifficultyButton_C* Widget); // Function UMG_DifficultySelect.UMG_DifficultySelect_C.WidgetChecked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(struct TArray<enum class EMissionDifficulty>& Difficulty); // Function UMG_DifficultySelect.UMG_DifficultySelect_C.Setup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_DifficultySelect.UMG_DifficultySelect_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_DifficultySelect(int32_t EntryPoint); // Function UMG_DifficultySelect.UMG_DifficultySelect_C.ExecuteUbergraph_UMG_DifficultySelect // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void DifficultyUpdated__DelegateSignature(enum class EMissionDifficulty Difficulty); // Function UMG_DifficultySelect.UMG_DifficultySelect_C.DifficultyUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

