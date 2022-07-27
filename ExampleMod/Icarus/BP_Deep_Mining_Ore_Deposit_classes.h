// BlueprintGeneratedClass BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C
// Size: 0x3e0 (Inherited: 0x2e0)
struct ABP_Deep_Mining_Ore_Deposit_C : ABP_OreDeposit_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UHighlightableComponent* Highlightable; // 0x2e8(0x08)
	struct TMap<struct FOreDepositRowHandle, float> RandomDesiredRatios; // 0x2f0(0x50)
	float CachedTotalWeight; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct TMap<struct FOreDepositRowHandle, float> CachedCurrentRatios; // 0x348(0x50)
	struct TArray<struct FVector> TransformsToVector; // 0x398(0x10)
	struct AActor* HighestDropship; // 0x3a8(0x08)
	struct UMaterialInterface* NodeMaterial; // 0x3b0(0x08)
	struct FOreDepositRowHandle LocalMaterialType; // 0x3b8(0x18)
	bool IsDesertDeposit; // 0x3d0(0x01)
	bool IsInCave; // 0x3d1(0x01)
	char pad_3D2[0x6]; // 0x3d2(0x06)
	struct UMaterialInterface* RockMaterial; // 0x3d8(0x08)

	struct TSoftObjectPtr<UMaterialInterface> GetNodeMaterial(struct FOreDeposit& OreDeposit); // Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.GetNodeMaterial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BiomeUpdated(); // Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.BiomeUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_LocalMaterialType(); // Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.OnRep_LocalMaterialType // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddRollToCachedRatios(); // Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.AddRollToCachedRatios // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Calculate Already Rolled Ratios(); // Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.Calculate Already Rolled Ratios // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_86CD52A24289457079E06B9B6B8EE0DB(struct UObject* Loaded); // Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.OnLoaded_86CD52A24289457079E06B9B6B8EE0DB // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_7A08DCE545D5B147504667BA88769DFC(struct UObject* Loaded); // Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.OnLoaded_7A08DCE545D5B147504667BA88769DFC // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IcarusBeginPlay(); // Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.IcarusBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void SetMaterialType(struct FOreDepositRowHandle Row); // Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.SetMaterialType // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Deep_Mining_Ore_Deposit(int32_t EntryPoint); // Function BP_Deep_Mining_Ore_Deposit.BP_Deep_Mining_Ore_Deposit_C.ExecuteUbergraph_BP_Deep_Mining_Ore_Deposit // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

