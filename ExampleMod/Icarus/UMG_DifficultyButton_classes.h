// WidgetBlueprintGeneratedClass UMG_DifficultyButton.UMG_DifficultyButton_C
// Size: 0x2a9 (Inherited: 0x260)
struct UUMG_DifficultyButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button1; // 0x268(0x08)
	struct UImage* ButtonImage; // 0x270(0x08)
	struct UTextBlock* DifficultyName; // 0x278(0x08)
	struct UTextBlock* RewardMultiplier; // 0x280(0x08)
	struct UBorder* SelectedImage; // 0x288(0x08)
	bool Checked; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FMulticastInlineDelegate Updated; // 0x298(0x10)
	enum class EMissionDifficulty New Difficulty; // 0x2a8(0x01)

	void SetDifficulty(enum class EMissionDifficulty NewDifficulty); // Function UMG_DifficultyButton.UMG_DifficultyButton_C.SetDifficulty // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ManuallyCheck(bool Checked); // Function UMG_DifficultyButton.UMG_DifficultyButton_C.ManuallyCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_Checkbox_Button1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UMG_DifficultyButton.UMG_DifficultyButton_C.BndEvt__UMG_Checkbox_Button1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ManualCheckNoEvents(bool Checked); // Function UMG_DifficultyButton.UMG_DifficultyButton_C.ManualCheckNoEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_DifficultyButton(int32_t EntryPoint); // Function UMG_DifficultyButton.UMG_DifficultyButton_C.ExecuteUbergraph_UMG_DifficultyButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void Updated__DelegateSignature(bool Checked, struct UUMG_DifficultyButton_C* Widget); // Function UMG_DifficultyButton.UMG_DifficultyButton_C.Updated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

