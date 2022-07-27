// BlueprintGeneratedClass BP_ItemManipulationComponent.BP_ItemManipulationComponent_C
// Size: 0xb0 (Inherited: 0xb0)
struct UBP_ItemManipulationComponent_C : UItemManipulationComponent {

	enum class ECanUseItemResult CanUseItem(struct UInventory* SourceInventory, int32_t SourceLocation, struct FUsesEnum Use, struct FUseCondition UseCondition, struct AIcarusPlayerCharacter* Target); // Function BP_ItemManipulationComponent.BP_ItemManipulationComponent_C.CanUseItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool UseItem(struct UInventory* SourceInventory, int32_t SourceLocation, struct FUsesEnum Use, struct AIcarusPlayerCharacter* Target, struct FItemData& ItemConsumed); // Function BP_ItemManipulationComponent.BP_ItemManipulationComponent_C.UseItem // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

