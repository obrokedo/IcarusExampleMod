// WidgetBlueprintGeneratedClass UMG_MainMenu.UMG_MainMenu_C
// Size: 0x388 (Inherited: 0x260)
struct UUMG_MainMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* OpenMenu; // 0x268(0x08)
	struct UWidgetAnimation* AttributePointsGlow; // 0x270(0x08)
	struct UWidgetAnimation* BlueprintPointGlow; // 0x278(0x08)
	struct UWidgetAnimation* MenuGlowPulse; // 0x280(0x08)
	struct UOverlay* APPointBox; // 0x288(0x08)
	struct UImage* AttributeGlow; // 0x290(0x08)
	struct UImage* Backglow; // 0x298(0x08)
	struct UNamedSlot* BlueprintMenuSlot; // 0x2a0(0x08)
	struct UTextBlock* BlueprintPoints; // 0x2a8(0x08)
	struct UTextBlock* BlueprintPoints_2; // 0x2b0(0x08)
	struct UImage* BPGlow; // 0x2b8(0x08)
	struct UOverlay* BPPointBox; // 0x2c0(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* ButtonAccolades; // 0x2c8(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* ButtonCrafting; // 0x2d0(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* ButtonInventory; // 0x2d8(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* ButtonMap; // 0x2e0(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* ButtonTalents; // 0x2e8(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* ButtonTechtree; // 0x2f0(0x08)
	struct UUMG_CloseButton_2_C* CloseButton; // 0x2f8(0x08)
	struct UImage* EdgeLights; // 0x300(0x08)
	struct UBorder* MainContentBorder; // 0x308(0x08)
	struct UWidgetSwitcher* MenuSwitcher; // 0x310(0x08)
	struct UImage* Noise; // 0x318(0x08)
	struct UHorizontalBox* PointNotifiers; // 0x320(0x08)
	struct UNamedSlot* SoloMenuSlot; // 0x328(0x08)
	struct UNamedSlot* TalentMenuSlot; // 0x330(0x08)
	struct UWidgetSwitcher* TalentSwitcher; // 0x338(0x08)
	struct UUMG_AccoladeScreen_C* UMG_AccoladeScreen; // 0x340(0x08)
	struct UUMG_CharacterInfo_C* UMG_CharacterInfo; // 0x348(0x08)
	struct UUMG_Crafting_C* UMG_Crafting; // 0x350(0x08)
	struct UUMG_MainInventory_C* UMG_MainInventory; // 0x358(0x08)
	struct UUMG_MainMap_C* UMG_MainMap; // 0x360(0x08)
	struct UInventory* Inventory; // 0x368(0x08)
	struct UUMG_UserInterface_C* UserInterface; // 0x370(0x08)
	bool TalentsInitialized; // 0x378(0x01)
	enum class UDLSSMode Old DLSS Mode; // 0x379(0x01)
	char pad_37A[0x6]; // 0x37a(0x06)
	struct FTimerHandle TimerHandle; // 0x380(0x08)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG_MainMenu.UMG_MainMenu_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowOption(enum class EMainMenuOptions Option); // Function UMG_MainMenu.UMG_MainMenu_C.ShowOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Get Shown Menu(enum class EMainMenuOptions& Menu); // Function UMG_MainMenu.UMG_MainMenu_C.Get Shown Menu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void Setup Player Crafting (struct UInventory* Inventory, struct UProcessingComponent* Processing); // Function UMG_MainMenu.UMG_MainMenu_C.Setup Player Crafting  // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Toggle Menu(enum class EMainMenuOptions MenuOption); // Function UMG_MainMenu.UMG_MainMenu_C.Toggle Menu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup Main Inventory(struct UInventory* Bound Inventory, struct UInventory* Envirosuit Inventory, struct UInventory* Equipment Inventory, struct UInventory* UpgradeInventory, struct UInventory* VisionInventory, struct UUMG_UserInterface_C* Parent); // Function UMG_MainMenu.UMG_MainMenu_C.Setup Main Inventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Initialise(); // Function UMG_MainMenu.UMG_MainMenu_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ResetContentSwitcher(); // Function UMG_MainMenu.UMG_MainMenu_C.ResetContentSwitcher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetContentState(enum class EMainMenuOptions State); // Function UMG_MainMenu.UMG_MainMenu_C.SetContentState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ButtonTalents_K2Node_ComponentBoundEvent_11_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__ButtonTalents_K2Node_ComponentBoundEvent_11_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ButtonTalents_K2Node_ComponentBoundEvent_13_Untoggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__ButtonTalents_K2Node_ComponentBoundEvent_13_Untoggled__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ButtonMap_K2Node_ComponentBoundEvent_7_Untoggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__ButtonMap_K2Node_ComponentBoundEvent_7_Untoggled__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ButtonTechtree_K2Node_ComponentBoundEvent_6_Untoggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__ButtonTechtree_K2Node_ComponentBoundEvent_6_Untoggled__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ButtonCrafting_K2Node_ComponentBoundEvent_5_Untoggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__ButtonCrafting_K2Node_ComponentBoundEvent_5_Untoggled__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_4_Untoggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_4_Untoggled__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ButtonCrafting_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__ButtonCrafting_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ButtonTechtree_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__ButtonTechtree_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ButtonMap_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__ButtonMap_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void UpdateBlueprintIndicator(struct UTalentModelInterface_Const* Model); // Function UMG_MainMenu.UMG_MainMenu_C.UpdateBlueprintIndicator // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateTalentIndicator(struct UTalentModelInterface_Const* Model); // Function UMG_MainMenu.UMG_MainMenu_C.UpdateTalentIndicator // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayerModelViewChanged(struct UTalentControllerComponent* Controller); // Function UMG_MainMenu.UMG_MainMenu_C.PlayerModelViewChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BlueprintModelViewChanged(struct UTalentControllerComponent* Controller); // Function UMG_MainMenu.UMG_MainMenu_C.BlueprintModelViewChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Visbility_Changed(enum class ESlateVisibility InVisibility); // Function UMG_MainMenu.UMG_MainMenu_C.Visbility_Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer); // Function UMG_MainMenu.UMG_MainMenu_C.ConnectedPlayerInitialised // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnAliveStateChanged(struct UActorState* ActorState); // Function UMG_MainMenu.UMG_MainMenu_C.OnAliveStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_MainMenu_ButtonAccolades_K2Node_ComponentBoundEvent_8_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__UMG_MainMenu_ButtonAccolades_K2Node_ComponentBoundEvent_8_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_MainMenu_ButtonAccolades_K2Node_ComponentBoundEvent_9_Untoggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MainMenu.UMG_MainMenu_C.BndEvt__UMG_MainMenu_ButtonAccolades_K2Node_ComponentBoundEvent_9_Untoggled__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_MainMenu.UMG_MainMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnSoloModelViewChanged(struct UTalentControllerComponent* Controller); // Function UMG_MainMenu.UMG_MainMenu_C.OnSoloModelViewChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SwitchTalentView(bool Solo); // Function UMG_MainMenu.UMG_MainMenu_C.SwitchTalentView // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SwitchTalents(bool Solo); // Function UMG_MainMenu.UMG_MainMenu_C.SwitchTalents // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_MainMenu(int32_t EntryPoint); // Function UMG_MainMenu.UMG_MainMenu_C.ExecuteUbergraph_UMG_MainMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

