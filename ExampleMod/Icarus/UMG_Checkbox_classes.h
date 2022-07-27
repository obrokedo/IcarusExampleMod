// WidgetBlueprintGeneratedClass UMG_Checkbox.UMG_Checkbox_C
// Size: 0x290 (Inherited: 0x260)
struct UUMG_Checkbox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button1; // 0x268(0x08)
	struct UImage* CheckboxImage; // 0x270(0x08)
	bool Checked; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct FMulticastInlineDelegate Updated; // 0x280(0x10)

	void ManuallyCheck(bool Checked); // Function UMG_Checkbox.UMG_Checkbox_C.ManuallyCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_Checkbox_Button1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Checkbox.UMG_Checkbox_C.BndEvt__UMG_Checkbox_Button1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_Checkbox(int32_t EntryPoint); // Function UMG_Checkbox.UMG_Checkbox_C.ExecuteUbergraph_UMG_Checkbox // (Final|UbergraphFunction) // @ game+0x1be0000
	void Updated__DelegateSignature(bool Checked); // Function UMG_Checkbox.UMG_Checkbox_C.Updated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

