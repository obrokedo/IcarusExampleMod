// WidgetBlueprintGeneratedClass UMG_LoadoutSelection.UMG_LoadoutSelection_C
// Size: 0x2a0 (Inherited: 0x260)
struct UUMG_LoadoutSelection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_BasicButton_2_C* BackButton; // 0x268(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; // 0x270(0x08)
	struct UUMG_SpaceMenu_Cargo_C* UMG_SpaceMenu_Cargo; // 0x278(0x08)
	struct FMulticastInlineDelegate ConfirmLoadout; // 0x280(0x10)
	struct FMulticastInlineDelegate Back; // 0x290(0x10)

	void BndEvt__UMG_LoadoutSelection_UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_LoadoutSelection.UMG_LoadoutSelection_C.BndEvt__UMG_LoadoutSelection_UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_LoadoutSelection_UMG_BasicButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_LoadoutSelection.UMG_LoadoutSelection_C.BndEvt__UMG_LoadoutSelection_UMG_BasicButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_LoadoutSelection(int32_t EntryPoint); // Function UMG_LoadoutSelection.UMG_LoadoutSelection_C.ExecuteUbergraph_UMG_LoadoutSelection // (Final|UbergraphFunction) // @ game+0x1be0000
	void Back__DelegateSignature(); // Function UMG_LoadoutSelection.UMG_LoadoutSelection_C.Back__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ConfirmLoadout__DelegateSignature(); // Function UMG_LoadoutSelection.UMG_LoadoutSelection_C.ConfirmLoadout__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

