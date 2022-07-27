// WidgetBlueprintGeneratedClass UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C
// Size: 0x2a9 (Inherited: 0x260)
struct UUMG_SpaceMenu_Cargo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* AnimateIn; // 0x268(0x08)
	struct UWidgetAnimation* AnimatePointers; // 0x270(0x08)
	struct UUMG_Inventory_C* MainInventory; // 0x278(0x08)
	struct UUMG_BasicButton_2_C* SuitClearButton; // 0x280(0x08)
	struct UUMG_DropshipSelector_C* UMG_DropshipSelector; // 0x288(0x08)
	struct UUMG_LoadoutEnvirosuit_C* UMG_LoadoutEnvirosuit; // 0x290(0x08)
	struct UUMG_DropCargo_C* UMG_LoadoutSelection; // 0x298(0x08)
	struct UInventory* Inventory; // 0x2a0(0x08)
	bool Initialised; // 0x2a8(0x01)

	void Initialise(struct UInventory* Main, struct UInventory* Loadout); // Function UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__SuitClearButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C.BndEvt__SuitClearButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void PlayOpenAnimation(); // Function UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C.PlayOpenAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_SpaceMenu_Cargo(int32_t EntryPoint); // Function UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C.ExecuteUbergraph_UMG_SpaceMenu_Cargo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

