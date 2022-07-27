// WidgetBlueprintGeneratedClass UMG_FocusedItemInfo.UMG_FocusedItemInfo_C
// Size: 0x3f8 (Inherited: 0x260)
struct UUMG_FocusedItemInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ShowHints; // 0x268(0x08)
	struct UHorizontalBox* AmmoCount; // 0x270(0x08)
	struct UImage* AmmoImage; // 0x278(0x08)
	struct UTextBlock* AmmoNumber; // 0x280(0x08)
	struct UTextBlock* AmmoSpacer; // 0x288(0x08)
	struct UHorizontalBox* AmmoType; // 0x290(0x08)
	struct UVerticalBox* BuildingControls; // 0x298(0x08)
	struct UHorizontalBox* CancelGrid; // 0x2a0(0x08)
	struct UVerticalBox* CaveScanner; // 0x2a8(0x08)
	struct UHorizontalBox* Consume; // 0x2b0(0x08)
	struct UHorizontalBox* Deconstruct; // 0x2b8(0x08)
	struct UHorizontalBox* Deployable; // 0x2c0(0x08)
	struct UHorizontalBox* DeployableVariants; // 0x2c8(0x08)
	struct UHorizontalBox* Drop; // 0x2d0(0x08)
	struct UVerticalBox* FirearmControls; // 0x2d8(0x08)
	struct USizeBox* FocusedItemBox; // 0x2e0(0x08)
	struct UVerticalBox* HintBox; // 0x2e8(0x08)
	struct UImage* ItemImage; // 0x2f0(0x08)
	struct UTextBlock* ItemName; // 0x2f8(0x08)
	struct UOverlay* MainContainer; // 0x300(0x08)
	struct UUMG_StatTitleSmall_C* Melee; // 0x308(0x08)
	struct UVerticalBox* MetaScanner; // 0x310(0x08)
	struct UHorizontalBox* Place; // 0x318(0x08)
	struct UUMG_StatTitleSmall_C* Projectile; // 0x320(0x08)
	struct UHorizontalBox* Reload; // 0x328(0x08)
	struct UHorizontalBox* Rotate; // 0x330(0x08)
	struct URetainerBox* ShadowRetainer; // 0x338(0x08)
	struct UTextBlock* TotalAmmoNumber; // 0x340(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt; // 0x348(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_2; // 0x350(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_3; // 0x358(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_4; // 0x360(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_5; // 0x368(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_6; // 0x370(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_7; // 0x378(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_180; // 0x380(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_319; // 0x388(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_477; // 0x390(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_595; // 0x398(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_745; // 0x3a0(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_935; // 0x3a8(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_C; // 0x3b0(0x08)
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt_C_7; // 0x3b8(0x08)
	struct UUMG_PhysicalKeyPrompt_C* UMG_PhysicalKeyPrompt; // 0x3c0(0x08)
	struct UUMG_PhysicalKeyPrompt_C* UMG_PhysicalKeyPrompt_C_5; // 0x3c8(0x08)
	struct UHorizontalBox* Variants; // 0x3d0(0x08)
	struct UHorizontalBox* WaterPlots; // 0x3d8(0x08)
	struct UVerticalBox* WireTool; // 0x3e0(0x08)
	bool IsFirearm; // 0x3e8(0x01)
	bool Initialised; // 0x3e9(0x01)
	char pad_3EA[0x6]; // 0x3ea(0x06)
	struct UTraitBehaviour* CachedAmmoDisplayProvider; // 0x3f0(0x08)

	void UpdateCachedAmmoProvider(struct AIcarusItem* Item); // Function UMG_FocusedItemInfo.UMG_FocusedItemInfo_C.UpdateCachedAmmoProvider // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckIfFirearm(struct AIcarusItem* Item, bool& IsFirearm); // Function UMG_FocusedItemInfo.UMG_FocusedItemInfo_C.CheckIfFirearm // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Firearm Tick(); // Function UMG_FocusedItemInfo.UMG_FocusedItemInfo_C.Firearm Tick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetRangedDamage(); // Function UMG_FocusedItemInfo.UMG_FocusedItemInfo_C.SetRangedDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitializeFocusedItems(); // Function UMG_FocusedItemInfo.UMG_FocusedItemInfo_C.InitializeFocusedItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetShownHints(); // Function UMG_FocusedItemInfo.UMG_FocusedItemInfo_C.SetShownHints // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* GetAmmoController(); // Function UMG_FocusedItemInfo.UMG_FocusedItemInfo_C.GetAmmoController // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct UBP_ActionableBehaviour_Firearm_C* GetFirearmActionable(); // Function UMG_FocusedItemInfo.UMG_FocusedItemInfo_C.GetFirearmActionable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FItemsStaticRowHandle GetAmmoType(bool& Valid); // Function UMG_FocusedItemInfo.UMG_FocusedItemInfo_C.GetAmmoType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	int32_t GetCurrentAmmo(); // Function UMG_FocusedItemInfo.UMG_FocusedItemInfo_C.GetCurrentAmmo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	int32_t GetTotalAmmo(struct FItemsStaticRowHandle& AmmoType); // Function UMG_FocusedItemInfo.UMG_FocusedItemInfo_C.GetTotalAmmo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFocusedItemUpdate(struct AIcarusItem* FocusedItem); // Function UMG_FocusedItemInfo.UMG_FocusedItemInfo_C.OnFocusedItemUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_FocusedItemInfo.UMG_FocusedItemInfo_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_FocusedItemInfo(int32_t EntryPoint); // Function UMG_FocusedItemInfo.UMG_FocusedItemInfo_C.ExecuteUbergraph_UMG_FocusedItemInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

