// WidgetBlueprintGeneratedClass UMG_DifficultyModifiers.UMG_DifficultyModifiers_C
// Size: 0x312 (Inherited: 0x260)
struct UUMG_DifficultyModifiers_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Enter; // 0x268(0x08)
	struct UBorder* BackgroundColour; // 0x270(0x08)
	struct UBorder* ContentColour; // 0x278(0x08)
	struct UImage* corner; // 0x280(0x08)
	struct UImage* corner_2; // 0x288(0x08)
	struct UImage* corner_3; // 0x290(0x08)
	struct UImage* corner_4; // 0x298(0x08)
	struct UImage* HardcoreIcon; // 0x2a0(0x08)
	struct UImage* InsuranceIcon; // 0x2a8(0x08)
	struct URichTextBlock* RewardRichText; // 0x2b0(0x08)
	struct UTextBlock* Text; // 0x2b8(0x08)
	struct FLinearColor Colour_Background; // 0x2c0(0x10)
	struct FLinearColor Colour_Content; // 0x2d0(0x10)
	struct FText MultiplierText; // 0x2e0(0x18)
	struct FText BoxText; // 0x2f8(0x18)
	bool Insured; // 0x310(0x01)
	bool Harcore; // 0x311(0x01)

	void UpdateText(struct FText Reason, struct FText Modifier); // Function UMG_DifficultyModifiers.UMG_DifficultyModifiers_C.UpdateText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Initialize(struct FLinearColor BackgroundColour, struct FLinearColor ContentColour, struct FText RewardMultiplier, struct FText MainText, bool Insurance, bool Harcore); // Function UMG_DifficultyModifiers.UMG_DifficultyModifiers_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_DifficultyModifiers.UMG_DifficultyModifiers_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_DifficultyModifiers.UMG_DifficultyModifiers_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void PlayEnterAnimation(); // Function UMG_DifficultyModifiers.UMG_DifficultyModifiers_C.PlayEnterAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_DifficultyModifiers(int32_t EntryPoint); // Function UMG_DifficultyModifiers.UMG_DifficultyModifiers_C.ExecuteUbergraph_UMG_DifficultyModifiers // (Final|UbergraphFunction) // @ game+0x1be0000
};

