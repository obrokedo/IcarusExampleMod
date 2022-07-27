// WidgetBlueprintGeneratedClass UMG_AccoladeMissionProgress.UMG_AccoladeMissionProgress_C
// Size: 0x2c9 (Inherited: 0x260)
struct UUMG_AccoladeMissionProgress_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Achieved; // 0x268(0x08)
	struct UImage* AccoladeImage; // 0x270(0x08)
	struct UProgressBar* AchievedBar; // 0x278(0x08)
	struct UImage* BadgeGlow; // 0x280(0x08)
	struct UTextBlock* CountText; // 0x288(0x08)
	struct UTextBlock* DisplayName; // 0x290(0x08)
	struct USizeBox* Icon; // 0x298(0x08)
	struct UProgressBar* ProgressBar_46; // 0x2a0(0x08)
	struct FAccoladesRowHandle Accolade; // 0x2a8(0x18)
	struct UUMG_AccoladeTooltip_C* Tooltip; // 0x2c0(0x08)
	bool Complete; // 0x2c8(0x01)

	void InitAccolade(); // Function UMG_AccoladeMissionProgress.UMG_AccoladeMissionProgress_C.InitAccolade // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateState(); // Function UMG_AccoladeMissionProgress.UMG_AccoladeMissionProgress_C.UpdateState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Finished_ECE88B094DF845745D1F47869C29E97C(); // Function UMG_AccoladeMissionProgress.UMG_AccoladeMissionProgress_C.Finished_ECE88B094DF845745D1F47869C29E97C // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_AccoladeMissionProgress.UMG_AccoladeMissionProgress_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void PlayCompleteAnimation(); // Function UMG_AccoladeMissionProgress.UMG_AccoladeMissionProgress_C.PlayCompleteAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_AccoladeMissionProgress(int32_t EntryPoint); // Function UMG_AccoladeMissionProgress.UMG_AccoladeMissionProgress_C.ExecuteUbergraph_UMG_AccoladeMissionProgress // (Final|UbergraphFunction) // @ game+0x1be0000
};

