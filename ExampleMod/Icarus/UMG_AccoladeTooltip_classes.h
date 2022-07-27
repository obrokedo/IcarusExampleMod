// WidgetBlueprintGeneratedClass UMG_AccoladeTooltip.UMG_AccoladeTooltip_C
// Size: 0x368 (Inherited: 0x260)
struct UUMG_AccoladeTooltip_C : UUserWidget {
	struct UImage* AccoladeImage; // 0x260(0x08)
	struct UTextBlock* CompleteDate; // 0x268(0x08)
	struct UTextBlock* Description; // 0x270(0x08)
	struct UImage* divider; // 0x278(0x08)
	struct UBorder* Gradient; // 0x280(0x08)
	struct UTextBlock* ProgressText; // 0x288(0x08)
	struct UProgressBar* RankProgressBar; // 0x290(0x08)
	struct USizeBox* SizeBox_1; // 0x298(0x08)
	struct UTextBlock* Status; // 0x2a0(0x08)
	struct UBorder* StatusBorder; // 0x2a8(0x08)
	struct UTextBlock* TalentName; // 0x2b0(0x08)
	struct FAccoladesRowHandle Accolade; // 0x2b8(0x18)
	struct FSlateColor CompletedTitle_Colour; // 0x2d0(0x28)
	struct FF_ChallengeState Base; // 0x2f8(0x70)

	void UpdateState(int32_t CurrentValue, int32_t MaxValue, struct FDateTime CompletedTime, bool Complete); // Function UMG_AccoladeTooltip.UMG_AccoladeTooltip_C.UpdateState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Init(struct FAccoladesRowHandle Accolade); // Function UMG_AccoladeTooltip.UMG_AccoladeTooltip_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

