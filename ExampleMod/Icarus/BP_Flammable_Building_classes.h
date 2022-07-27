// BlueprintGeneratedClass BP_Flammable_Building.BP_Flammable_Building_C
// Size: 0x148 (Inherited: 0x12c)
struct UBP_Flammable_Building_C : UBP_Flammable_Actor_C {
	char pad_12C[0x4]; // 0x12c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x130(0x08)
	struct ABP_Building_Base_C* OwnerBuilding; // 0x138(0x08)
	struct UModifierStateComponent* ModiferStateComponent; // 0x140(0x08)

	struct FBoxSphereBounds GetLocalBounds(); // Function BP_Flammable_Building.BP_Flammable_Building_C.GetLocalBounds // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	bool CanPropagate(enum class EFlammablePropagationType PropagationType); // Function BP_Flammable_Building.BP_Flammable_Building_C.CanPropagate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void TeardownCosmetics(); // Function BP_Flammable_Building.BP_Flammable_Building_C.TeardownCosmetics // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetupCosmetics(); // Function BP_Flammable_Building.BP_Flammable_Building_C.SetupCosmetics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_Flammable_Building.BP_Flammable_Building_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void SetupBuildingCosmetics(); // Function BP_Flammable_Building.BP_Flammable_Building_C.SetupBuildingCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFlammableInstanceAttached(struct UFlammableInstance* Instance); // Function BP_Flammable_Building.BP_Flammable_Building_C.OnFlammableInstanceAttached // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnFlammableInstanceDetached(struct UFlammableInstance* Instance); // Function BP_Flammable_Building.BP_Flammable_Building_C.OnFlammableInstanceDetached // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnFlammableInstanceState_Combusting_Tick(struct UFlammableInstance* Instance, struct UFlammableState* State, float DeltaSeconds); // Function BP_Flammable_Building.BP_Flammable_Building_C.OnFlammableInstanceState_Combusting_Tick // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Flammable_Building(int32_t EntryPoint); // Function BP_Flammable_Building.BP_Flammable_Building_C.ExecuteUbergraph_BP_Flammable_Building // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

