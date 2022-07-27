// WidgetBlueprintGeneratedClass UMG_FarmingPlot.UMG_FarmingPlot_C
// Size: 0x2c0 (Inherited: 0x268)
struct UUMG_FarmingPlot_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* OpenMenu; // 0x270(0x08)
	struct UVerticalBox* InventoryVertBox; // 0x278(0x08)
	struct UBorder* MainBorder; // 0x280(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; // 0x288(0x08)
	struct UUMG_DeployableModifiersList_C* UMG_DeployableModifiersList_C_1; // 0x290(0x08)
	struct UUMG_DeviceInventory_C* UMG_DeviceInventory; // 0x298(0x08)
	struct UUMG_FarmingPlot_Fertilizer_C* UMG_FarmingPlot_Fertilizer; // 0x2a0(0x08)
	struct UUMG_FarmingPlot_Seed_C* UMG_FarmingPlot_Seed; // 0x2a8(0x08)
	struct UUMG_PlayerInventory_C* UMG_PlayerInventory; // 0x2b0(0x08)
	struct UInventory* Inventory; // 0x2b8(0x08)

	void LinkedActorDestroyed(struct AActor* DestroyedActor); // Function UMG_FarmingPlot.UMG_FarmingPlot_C.LinkedActorDestroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetupObjectInventory(struct UInventory* ContainerInventory); // Function UMG_FarmingPlot.UMG_FarmingPlot_C.SetupObjectInventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_FarmingPlot.UMG_FarmingPlot_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_FarmingPlot.UMG_FarmingPlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_FarmingPlot(int32_t EntryPoint); // Function UMG_FarmingPlot.UMG_FarmingPlot_C.ExecuteUbergraph_UMG_FarmingPlot // (Final|UbergraphFunction) // @ game+0x1be0000
};

