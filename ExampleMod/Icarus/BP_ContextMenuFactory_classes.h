// BlueprintGeneratedClass BP_ContextMenuFactory.BP_ContextMenuFactory_C
// Size: 0x298 (Inherited: 0x238)
struct ABP_ContextMenuFactory_C : AContextMenuFactory {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct UUMG_ContextMenu_List_C* ContextMenuClass; // 0x248(0x08)
	struct UUMG_ContextMenu_Radial_C* RadialMenuClass; // 0x250(0x08)
	struct FText ContextMenuName; // 0x258(0x18)
	struct TSoftObjectPtr<UTexture2D> ContextMenuIcon; // 0x270(0x28)

	void ShouldShow(bool& ShouldShow); // Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.ShouldShow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct UContextMenuWidget* ShowAsRadialMenu(); // Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.ShowAsRadialMenu // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct UContextMenuWidget* ShowAsContextMenu(struct FVector2D ScreenPosition); // Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.ShowAsContextMenu // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FinaliseMenu(struct UUMG_ContextMenu_Base_C* MenuClass, struct FVector2D ScreenPosition, struct UUMG_ContextMenu_Base_C*& ContextMenu); // Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.FinaliseMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetContextMenuData(struct FText& Name, struct TSoftObjectPtr<UTexture2D>& Icon); // Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.SetContextMenuData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_ContextMenuFactory(int32_t EntryPoint); // Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.ExecuteUbergraph_BP_ContextMenuFactory // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

