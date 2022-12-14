// WidgetBlueprintGeneratedClass UMG_KeybindHints.UMG_KeybindHints_C
// Size: 0x341 (Inherited: 0x260)
struct UUMG_KeybindHints_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* AmmoType; // 0x268(0x08)
	struct UVerticalBox* BuildingControls; // 0x270(0x08)
	struct UHorizontalBox* CancelGrid; // 0x278(0x08)
	struct UHorizontalBox* Consume; // 0x280(0x08)
	struct UHorizontalBox* Deconstruct; // 0x288(0x08)
	struct UHorizontalBox* Deployable; // 0x290(0x08)
	struct UHorizontalBox* Drop; // 0x298(0x08)
	struct UVerticalBox* FirearmControls; // 0x2a0(0x08)
	struct USizeBox* FocusedItemBox; // 0x2a8(0x08)
	struct UVerticalBox* HintBox; // 0x2b0(0x08)
	struct UHorizontalBox* Place; // 0x2b8(0x08)
	struct UHorizontalBox* Reload; // 0x2c0(0x08)
	struct UHorizontalBox* Rotate; // 0x2c8(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt; // 0x2d0(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_2; // 0x2d8(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_3; // 0x2e0(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_180; // 0x2e8(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_319; // 0x2f0(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_477; // 0x2f8(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_595; // 0x300(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_745; // 0x308(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_935; // 0x310(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_C_7; // 0x318(0x08)
	struct UUMG_PhysicalKeyPrompt_C* UMG_PhysicalKeyPrompt; // 0x320(0x08)
	struct UUMG_PhysicalKeyPrompt_C* UMG_PhysicalKeyPrompt_C_5; // 0x328(0x08)
	struct UHorizontalBox* Variants; // 0x330(0x08)
	struct UVerticalBox* WireTool; // 0x338(0x08)
	bool Initialised; // 0x340(0x01)

	void SetRangedDamage(); // Function UMG_KeybindHints.UMG_KeybindHints_C.SetRangedDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitializeFocusedItems(); // Function UMG_KeybindHints.UMG_KeybindHints_C.InitializeFocusedItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetShownHints(); // Function UMG_KeybindHints.UMG_KeybindHints_C.SetShownHints // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* GetAmmoController(); // Function UMG_KeybindHints.UMG_KeybindHints_C.GetAmmoController // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct UBP_ActionableBehaviour_Firearm_C* GetFirearmActionable(); // Function UMG_KeybindHints.UMG_KeybindHints_C.GetFirearmActionable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FItemsStaticRowHandle GetAmmoType(bool& Valid); // Function UMG_KeybindHints.UMG_KeybindHints_C.GetAmmoType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	int32_t GetCurrentAmmo(); // Function UMG_KeybindHints.UMG_KeybindHints_C.GetCurrentAmmo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	int32_t GetTotalAmmo(struct FItemsStaticRowHandle& AmmoType); // Function UMG_KeybindHints.UMG_KeybindHints_C.GetTotalAmmo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFocusedItemUpdate(struct AIcarusItem* FocusedItem); // Function UMG_KeybindHints.UMG_KeybindHints_C.OnFocusedItemUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_KeybindHints.UMG_KeybindHints_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_KeybindHints(int32_t EntryPoint); // Function UMG_KeybindHints.UMG_KeybindHints_C.ExecuteUbergraph_UMG_KeybindHints // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

