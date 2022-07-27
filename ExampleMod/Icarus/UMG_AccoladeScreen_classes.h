// WidgetBlueprintGeneratedClass UMG_AccoladeScreen.UMG_AccoladeScreen_C
// Size: 0x2c1 (Inherited: 0x260)
struct UUMG_AccoladeScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* AnimateIn; // 0x268(0x08)
	struct UHorizontalBox* Buttons; // 0x270(0x08)
	struct UWidgetSwitcher* CategorySwitcher; // 0x278(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* ConstructionButton; // 0x280(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* GeneralButton; // 0x288(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* HuntingButton; // 0x290(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* MedalsButton; // 0x298(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* SurvivalButton; // 0x2a0(0x08)
	struct UInventory* Inventory; // 0x2a8(0x08)
	struct TArray<struct UUMG_AccoladeList_C*> AccoladeLists; // 0x2b0(0x10)
	bool RequiresUpdate; // 0x2c0(0x01)

	void InitAccoladeLists(); // Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.InitAccoladeLists // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_AccoladeScreen_MedalsButton_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.BndEvt__UMG_AccoladeScreen_MedalsButton_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_AccoladeScreen_HuntingButton_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.BndEvt__UMG_AccoladeScreen_HuntingButton_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_AccoladeScreen_SurvivalButton_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.BndEvt__UMG_AccoladeScreen_SurvivalButton_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_AccoladeScreen_ConstructionButton_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.BndEvt__UMG_AccoladeScreen_ConstructionButton_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void PlayerTrackerInitialized(); // Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.PlayerTrackerInitialized // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CustomEvent_1(struct FAccoladesRowHandle Accolade); // Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_AccoladeScreen_SurvivalButton_1_K2Node_ComponentBoundEvent_4_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.BndEvt__UMG_AccoladeScreen_SurvivalButton_1_K2Node_ComponentBoundEvent_4_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_AccoladeScreen(int32_t EntryPoint); // Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.ExecuteUbergraph_UMG_AccoladeScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

