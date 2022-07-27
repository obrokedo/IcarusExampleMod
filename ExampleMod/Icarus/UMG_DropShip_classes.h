// WidgetBlueprintGeneratedClass UMG_DropShip.UMG_DropShip_C
// Size: 0x2e0 (Inherited: 0x268)
struct UUMG_DropShip_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* AnglePiece; // 0x270(0x08)
	struct UUMG_Inventory_C* Backpack; // 0x278(0x08)
	struct UUMG_BasicButton_2_C* CloseButton; // 0x280(0x08)
	struct UTextBlock* DropshipInventoryPrompt; // 0x288(0x08)
	struct UUMG_Inventory_C* Equipment; // 0x290(0x08)
	struct UImage* Gradient; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image_107; // 0x2a8(0x08)
	struct UUMG_Inventory_C* Loadout; // 0x2b0(0x08)
	struct UTextBlock* MissionEndPrompt; // 0x2b8(0x08)
	struct UUMG_BasicButton_2_C* Return; // 0x2c0(0x08)
	struct UUMG_IconTextButton_C* TakeAllButton; // 0x2c8(0x08)
	struct FInventoryIDEnum Inventory ID; // 0x2d0(0x10)

	void IsHostWithClients(bool& Result); // Function UMG_DropShip.UMG_DropShip_C.IsHostWithClients // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void Construct(); // Function UMG_DropShip.UMG_DropShip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_DropShip.UMG_DropShip_C.BndEvt__Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_DropShip.UMG_DropShip_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ReturnToStation(); // Function UMG_DropShip.UMG_DropShip_C.ReturnToStation // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HostConfirmation(); // Function UMG_DropShip.UMG_DropShip_C.HostConfirmation // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DoNothing(); // Function UMG_DropShip.UMG_DropShip_C.DoNothing // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_DropShip_TakeAllButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function UMG_DropShip.UMG_DropShip_C.BndEvt__UMG_DropShip_TakeAllButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_DropShip(int32_t EntryPoint); // Function UMG_DropShip.UMG_DropShip_C.ExecuteUbergraph_UMG_DropShip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

