// BlueprintGeneratedClass BP_Farming_Plot_Base.BP_Farming_Plot_Base_C
// Size: 0x690 (Inherited: 0x5c3)
struct ABP_Farming_Plot_Base_C : ABP_DeployableBase_C {
	char pad_5C3[0x5]; // 0x5c3(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c8(0x08)
	struct UStaticMeshComponent* Crop; // 0x5d0(0x08)
	bool IsSeeded; // 0x5d8(0x01)
	bool IsHarvestable; // 0x5d9(0x01)
	char pad_5DA[0x2]; // 0x5da(0x02)
	int32_t CurrentGrowthStage; // 0x5dc(0x04)
	float CurrentGrowthStageTImer; // 0x5e0(0x04)
	struct FFarmingSeedsRowHandle CurrentSeedRow; // 0x5e4(0x18)
	float NextStageTime; // 0x5fc(0x04)
	struct UInventory* Inventory_Output; // 0x600(0x08)
	int32_t TotalStages; // 0x608(0x04)
	float TotalGrowthTime; // 0x60c(0x04)
	float CurrentTotalTimePassed; // 0x610(0x04)
	char pad_614[0x4]; // 0x614(0x04)
	struct ABP_IcarusPlayerCharacterSurvival_C* LastInteractPlayer; // 0x618(0x08)
	float GrowthTickTime; // 0x620(0x04)
	bool OutdoorCheckPass; // 0x624(0x01)
	bool GreenHouseCheckPass; // 0x625(0x01)
	char pad_626[0x2]; // 0x626(0x02)
	struct FVector OutsideTestPushoutAmount; // 0x628(0x0c)
	bool GreenHouse_InteriorUse; // 0x634(0x01)
	char pad_635[0x3]; // 0x635(0x03)
	int32_t FailedLoopCounter; // 0x638(0x04)
	bool GrowthCompleted; // 0x63c(0x01)
	char pad_63D[0x3]; // 0x63d(0x03)
	float GrowthCompleteTime; // 0x640(0x04)
	bool GrowthDecayed; // 0x644(0x01)
	bool DecayStateHandled; // 0x645(0x01)
	char pad_646[0x2]; // 0x646(0x02)
	int32_t GreenHouseInternalCounter; // 0x648(0x04)
	int32_t GreenHousePieceCount; // 0x64c(0x04)
	int32_t MaxGreenHousePieceRequirment; // 0x650(0x04)
	float GreenHouseCompletionMultiplier; // 0x654(0x04)
	float BaseGreenHouseGrowthBonus; // 0x658(0x04)
	float NoSkyPenalty; // 0x65c(0x04)
	float FertilizerConsumptionRate; // 0x660(0x04)
	float FertilizerPartial; // 0x664(0x04)
	int32_t WateredModifierUID; // 0x668(0x04)
	float GreenhouseRadius; // 0x66c(0x04)
	struct UMaterialInterface* SoilMatDry; // 0x670(0x08)
	struct UMaterialInterface* SoilMatWet; // 0x678(0x08)
	int32_t SoilMatID; // 0x680(0x04)
	bool SoilWet; // 0x684(0x01)
	char pad_685[0x3]; // 0x685(0x03)
	struct UFMODEvent* FMODEvent_Watering; // 0x688(0x08)

	void GetFarmingPlotValues(bool& bIsSeededRecord, bool& bIsHarvestableRecord, int32_t& CurrentGrowthStageRecord, float& CurrentTimeRecord, struct FFarmingSeedsRowHandle& CurrentSeedRowRecord, float& NextStageTimeRecord, float& GrowthCompleteTimeRecord); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GetFarmingPlotValues // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	void GetWidgetClass(struct UUserWidget*& Widget); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GetWidgetClass // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_SoilWet(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnRep_SoilWet // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateSoilMaterial(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.UpdateSoilMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetGreenhouseEffect(float& Multiplier); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GetGreenhouseEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void PostLoad(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PostLoad // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RecalculateTotalElapsedTime(float& ElapsedTime); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.RecalculateTotalElapsedTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateTimeOfDayStat(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.UpdateTimeOfDayStat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ConsumeFertilizer(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ConsumeFertilizer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FertilizerUpdated(struct UInventory* Inventory, int32_t Location); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.FertilizerUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetAdditionalStats(struct TArray<struct FIcarusStatReplicated>& Array); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GetAdditionalStats // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void ModifyByGrowthSpeed(float Time, float& ModifiedTime); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ModifyByGrowthSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void CalculateTotalGrowthTime(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.CalculateTotalGrowthTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SeedAddedToInventory(struct UInventory* Inventory, int32_t Location); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.SeedAddedToInventory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ProcessItemRewards(bool CropsDecayed); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ProcessItemRewards // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetAudioData(struct FFarmingSeedAudioData& Data); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GetAudioData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void OnRep_CurrentSeedRow(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnRep_CurrentSeedRow // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateMesh(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.UpdateMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_CurrentGrowthStage(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnRep_CurrentGrowthStage // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DebugPlot(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.DebugPlot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlaySound(struct UFMODEvent* FMODEvent); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PlaySound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ResetPlot(bool WasHarvested); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ResetPlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Deployable_Interact(struct AActor* Interactor); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GrowthComplete(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GrowthComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateGrowthStage(int32_t SetGrowthStage, bool& Success); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.UpdateGrowthStage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetSeedType(struct FItemData InputItem, struct FFarmingSeedsRowHandle& SeedRow); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GetSeedType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlantSeed(struct FItemData PlantSeedItem); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PlantSeed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsValidSeedTypes(struct FItemData SeedValidCheck, bool& Success); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.IsValidSeedTypes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_F380CEBD4EFB81B062277E990A5C4EF4(struct UObject* Loaded); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnLoaded_F380CEBD4EFB81B062277E990A5C4EF4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Snow(float Intensity); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.Snow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LoadMesh(struct TSoftObjectPtr<UStaticMesh> StaticMeshSoft, struct FVector Scale); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.LoadMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ClearMesh(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ClearMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlaySeedPlantedFX(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PlaySeedPlantedFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayHarvestFX(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PlayHarvestFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayClearPlotFX(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PlayClearPlotFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetFarmingPlotValues(bool bIsSeededRecord, bool bIsHarvestableRecord, int32_t CurrentGrowthStageRecord, float CurrentTimeRecord, struct FFarmingSeedsRowHandle CurrentSeedRowRecord, float NextStageTimeRecord, float GrowthCompleteTimeRecord); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.SetFarmingPlotValues // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void MULTI_PlaySound(struct UFMODEvent* FMODEvent); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.MULTI_PlaySound // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void OnItemAdded(struct UInventory* Inventory, int32_t Location); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnItemAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnItemRemovedVerbose(struct UInventory* Inventory, int32_t Location, struct FItemData& Item); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnItemRemovedVerbose // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GrowthTick(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GrowthTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AsyncOutdoorCheck(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.AsyncOutdoorCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Rain(int32_t Millilitres); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.Rain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WaterComponentActive(bool IsActive); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.WaterComponentActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnFertilizerAdded(struct UInventory* Inventory, int32_t Location); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnFertilizerAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MULTI_PlayItemAddedAudio(struct FItemsStaticRowHandle Item); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.MULTI_PlayItemAddedAudio // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayFertilizerFX(struct FItemsStaticRowHandle Item); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PlayFertilizerFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnModifierUpdated(struct UModifierStateComponent* Component, bool bRemoved); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnModifierUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayWateringFX(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PlayWateringFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ManuallyWater(); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ManuallyWater // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Farming_Plot_Base(int32_t EntryPoint); // Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ExecuteUbergraph_BP_Farming_Plot_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

