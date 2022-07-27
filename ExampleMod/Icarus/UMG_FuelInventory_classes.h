// WidgetBlueprintGeneratedClass UMG_FuelInventory.UMG_FuelInventory_C
// Size: 0x2e8 (Inherited: 0x260)
struct UUMG_FuelInventory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* AvailableFuel; // 0x268(0x08)
	struct UUMG_SimpleProgressbar_C* EnergyBar; // 0x270(0x08)
	struct UVerticalBox* Fuel; // 0x278(0x08)
	struct UUMG_Inventory_C* UMG_Inventory; // 0x280(0x08)
	struct UUMG_MissingRequirement_Warning_C* UMG_MissingRequirement_Warning; // 0x288(0x08)
	struct AActor* LinkedActor; // 0x290(0x08)
	struct FSlateColor FALSE; // 0x298(0x28)
	struct FSlateColor TRUE; // 0x2c0(0x28)

	float GetTransmutationEnergyRemaining(); // Function UMG_FuelInventory.UMG_FuelInventory_C.GetTransmutationEnergyRemaining // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void Initialise(struct AActor* LinkedActor); // Function UMG_FuelInventory.UMG_FuelInventory_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_FuelInventory.UMG_FuelInventory_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnOutOfFuel(); // Function UMG_FuelInventory.UMG_FuelInventory_C.OnOutOfFuel // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_FuelInventory(int32_t EntryPoint); // Function UMG_FuelInventory.UMG_FuelInventory_C.ExecuteUbergraph_UMG_FuelInventory // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

