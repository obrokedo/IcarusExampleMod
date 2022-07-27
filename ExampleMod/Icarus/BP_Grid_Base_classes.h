// BlueprintGeneratedClass BP_Grid_Base.BP_Grid_Base_C
// Size: 0x590 (Inherited: 0x2c8)
struct ABP_Grid_Base_C : ABuildingGridBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UIcarusMapIconComponent* IcarusMapIcon; // 0x2d0(0x08)
	struct UBP_BuildingAudioComponent_C* BP_BuildingAudioComponent; // 0x2d8(0x08)
	struct UArrowComponent* Arrow; // 0x2e0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2e8(0x08)
	struct TMap<struct FVector, struct FGridPoint> GridPoints; // 0x2f0(0x50)
	struct FVector GridSize; // 0x340(0x0c)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct TArray<struct ABP_Building_Base_C*> BuilldingsToAnchorReinit; // 0x350(0x10)
	struct TArray<struct ABP_Building_Base_C*> BuildingsToPushHardStab; // 0x360(0x10)
	int32_t MaxBuildingSearchDistance; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct TArray<struct ABuildingBase*> BuildingsToStartDestroy; // 0x378(0x10)
	struct FMulticastInlineDelegate QueuesEmptied; // 0x388(0x10)
	bool Queued; // 0x398(0x01)
	bool AutomaticResumingDestructionEnabled; // 0x399(0x01)
	char pad_39A[0x6]; // 0x39a(0x06)
	struct TArray<struct ABP_Building_Base_C*> OnFireBuildings; // 0x3a0(0x10)
	struct TArray<struct ABP_Building_Base_C*> CurrentWindDamagedBuildings; // 0x3b0(0x10)
	struct TArray<struct ABP_Building_Base_C*> Buildings to Record; // 0x3c0(0x10)
	float Burn Time Remaining; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct TArray<struct ABP_Building_Base_C*> ActiveOverweightBuilding; // 0x3d8(0x10)
	bool DirtyTerrainChecks; // 0x3e8(0x01)
	bool Sorted; // 0x3e9(0x01)
	char pad_3EA[0x6]; // 0x3ea(0x06)
	struct TArray<struct ABP_Building_Base_C*> WeatherChoiceInternalDirtiedBuildings; // 0x3f0(0x10)
	struct TArray<struct ABP_Building_Base_C*> WeatherChoiceInternalBuffer; // 0x400(0x10)
	struct TMap<float, struct FActorArrayStruct> AltitudeMap; // 0x410(0x50)
	struct TMap<float, struct FActorArrayStruct> BuildingsByTier; // 0x460(0x50)
	struct TArray<struct ABP_Building_Base_C*> BuildingsSelectedForWindDamage; // 0x4b0(0x10)
	struct TArray<float> AscendingSortedBuildingTiers; // 0x4c0(0x10)
	struct TArray<float> DescendingSortedBuildingAltitudes; // 0x4d0(0x10)
	struct TArray<float> DescendingAltitudesQuartiles; // 0x4e0(0x10)
	int32_t MaxBuildingSelection; // 0x4f0(0x04)
	int32_t CurrentAltitudeQuartile; // 0x4f4(0x04)
	int32_t BuildingCount; // 0x4f8(0x04)
	int32_t CurrentSelectionTierMaxIndex; // 0x4fc(0x04)
	float WeatherSortingTierPercentage; // 0x500(0x04)
	char pad_504[0x4]; // 0x504(0x04)
	struct TArray<struct ABP_Building_Base_C*> StrippingBuildings; // 0x508(0x10)
	struct TArray<struct ABP_Building_Base_C*> ReloadedBuildings; // 0x518(0x10)
	float TerrainAnchorValidTime; // 0x528(0x04)
	bool WaitingForTerrainAnchor; // 0x52c(0x01)
	char pad_52D[0x3]; // 0x52d(0x03)
	struct TArray<struct ABP_Building_Base_C*> UnzippableChain; // 0x530(0x10)
	struct TArray<struct ABP_Building_Base_C*> UnzippableChainInternalWorking; // 0x540(0x10)
	struct TArray<struct ABP_Building_Base_C*> UnzippableChainInternalBest; // 0x550(0x10)
	int32_t DesiredUnzipCount; // 0x560(0x04)
	char pad_564[0x4]; // 0x564(0x04)
	struct TArray<struct ABP_Building_Base_C*> UnzippableStarterBuildingBuffer; // 0x568(0x10)
	bool PerformingUnzip; // 0x578(0x01)
	char pad_579[0x3]; // 0x579(0x03)
	float LastUnzipStormTier; // 0x57c(0x04)
	int32_t UnzipCycleCounter; // 0x580(0x04)
	int32_t UnzipCycleMaxCount; // 0x584(0x04)
	float LastUnzipCountMultiplier; // 0x588(0x04)
	float LastUnzipDamageMultiplier; // 0x58c(0x04)

	void LoadGridAndBuildingsFromRecord(struct UBuildingGridRecorderComponent* RecorderComponent); // Function BP_Grid_Base.BP_Grid_Base_C.LoadGridAndBuildingsFromRecord // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetGridBuildingDataForRecord(struct UBuildingGridRecorderComponent* RecorderComponent); // Function BP_Grid_Base.BP_Grid_Base_C.GetGridBuildingDataForRecord // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool GetIsQueued(); // Function BP_Grid_Base.BP_Grid_Base_C.GetIsQueued // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1be0000
	void AppendUniqueBuildingArray(struct TArray<struct ABuildingBase*>& Array 1, struct TArray<struct ABuildingBase*>& Array 2, struct TArray<struct ABuildingBase*>& Array1UniquelyAddedTo2); // Function BP_Grid_Base.BP_Grid_Base_C.AppendUniqueBuildingArray // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FSerializedGrid SerializeForSaveGame(); // Function BP_Grid_Base.BP_Grid_Base_C.SerializeForSaveGame // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool TryAddNewBuildingFromWorldSpace(struct FTransform WorldSpaceTransform, struct ABuildingBase* DesiredClass, bool bAlternateRotation, struct FItemData Item, struct ABuildingBase*& Building); // Function BP_Grid_Base.BP_Grid_Base_C.TryAddNewBuildingFromWorldSpace // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GatherUnzipLink(struct ABP_Building_Base_C* Building, struct TArray<struct ABP_Building_Base_C*>& NewlyGatheredLinks); // Function BP_Grid_Base.BP_Grid_Base_C.GatherUnzipLink // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GatherAllUnzipLinks(struct TArray<struct ABP_Building_Base_C*>& Building, struct TArray<struct ABP_Building_Base_C*>& NewlyGatheredLinks); // Function BP_Grid_Base.BP_Grid_Base_C.GatherAllUnzipLinks // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsBuildingPlanar(struct ABP_Building_Base_C* Building1, struct ABP_Building_Base_C* Building2, bool& IsPlanar); // Function BP_Grid_Base.BP_Grid_Base_C.IsBuildingPlanar // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitBuilding Weather Selection Size(); // Function BP_Grid_Base.BP_Grid_Base_C.InitBuilding Weather Selection Size // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WeatherSortingDebug(); // Function BP_Grid_Base.BP_Grid_Base_C.WeatherSortingDebug // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SortAltitudeKeys(); // Function BP_Grid_Base.BP_Grid_Base_C.SortAltitudeKeys // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SortTierKeys(); // Function BP_Grid_Base.BP_Grid_Base_C.SortTierKeys // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UnrecordBuildingsByTier(struct ABP_Building_Base_C* Building); // Function BP_Grid_Base.BP_Grid_Base_C.UnrecordBuildingsByTier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UnrecordZHeight(struct ABP_Building_Base_C* Building); // Function BP_Grid_Base.BP_Grid_Base_C.UnrecordZHeight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RecordBuildingsByTier(struct ABP_Building_Base_C* Building); // Function BP_Grid_Base.BP_Grid_Base_C.RecordBuildingsByTier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RecordZHeight(struct ABP_Building_Base_C* Building); // Function BP_Grid_Base.BP_Grid_Base_C.RecordZHeight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsTerrainAnchorValid(bool& TerrainLoaded); // Function BP_Grid_Base.BP_Grid_Base_C.IsTerrainAnchorValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void SelectBuildingForWindDamage(float StormTier, struct ABP_Building_Base_C*& SelectedBuilding); // Function BP_Grid_Base.BP_Grid_Base_C.SelectBuildingForWindDamage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FireSlowAmount(float& SlowAmount); // Function BP_Grid_Base.BP_Grid_Base_C.FireSlowAmount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void RemoveBuildingOnFire(struct ABP_Building_Base_C*& OnFireBuilding); // Function BP_Grid_Base.BP_Grid_Base_C.RemoveBuildingOnFire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddBuildingOnFire(struct ABP_Building_Base_C*& OnFireBuilding); // Function BP_Grid_Base.BP_Grid_Base_C.AddBuildingOnFire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DefaultShiftsFromGridSpaceRotations(struct FRotator GridSpaceRotation, struct FVector& Shift); // Function BP_Grid_Base.BP_Grid_Base_C.DefaultShiftsFromGridSpaceRotations // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Round Grid Space Rot to Valid Grid Space Rot(struct FRotator inGridSpaceRot, struct FRotator& RoundedGridSpaceRot); // Function BP_Grid_Base.BP_Grid_Base_C.Round Grid Space Rot to Valid Grid Space Rot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Round World Space Rot to Valid World Space Rot(struct FRotator WorldSpaceRot, struct FRotator& RoundedWorldSpaceRot, struct FVector& DefaultShiftsFromGridspaceRot); // Function BP_Grid_Base.BP_Grid_Base_C.Round World Space Rot to Valid World Space Rot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FString debugprint(); // Function BP_Grid_Base.BP_Grid_Base_C.debugprint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddSortedBuildingToAnchorReinit(struct ABP_Building_Base_C* BuildingToAdd); // Function BP_Grid_Base.BP_Grid_Base_C.AddSortedBuildingToAnchorReinit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetAllTouchingBuildings(struct ABP_Building_Base_C* Class, struct FTransform InTransform, struct TArray<struct ABP_Building_Base_C*>& NeighborBuildings); // Function BP_Grid_Base.BP_Grid_Base_C.GetAllTouchingBuildings // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BlockGridspaceRotatedToGridSpaceNotRotated(struct FVector Gridspace, struct FRotator WorldRot, struct FVector& GridSpaceWithNoRot); // Function BP_Grid_Base.BP_Grid_Base_C.BlockGridspaceRotatedToGridSpaceNotRotated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WorldSpaceToGridSpaceFloored(struct FTransform InWorldTransform, bool AlternateRotation, struct ABP_Building_Base_C* BuildingClass, struct FTransform& OutGridTransform); // Function BP_Grid_Base.BP_Grid_Base_C.WorldSpaceToGridSpaceFloored // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetNeighbors(struct ABP_Building_Base_C* Building, struct TArray<struct ABP_Building_Base_C*>& TouchedBuildings); // Function BP_Grid_Base.BP_Grid_Base_C.GetNeighbors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RecursiveBuildingSearch(struct ABP_Building_Base_C* StartingBuilding, int32_t StartingDepth, struct ABP_Building_Base_C* CurrentBuilding, struct TArray<struct ABP_Building_Base_C*>& BuildingArrayVariable); // Function BP_Grid_Base.BP_Grid_Base_C.RecursiveBuildingSearch // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StartBuildingSearch(struct ABP_Building_Base_C* StartingBuilding, int32_t StartingDepth, struct TArray<struct ABP_Building_Base_C*>& BuildingArray); // Function BP_Grid_Base.BP_Grid_Base_C.StartBuildingSearch // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RemoveBuildingFromGrid(struct ABP_Building_Base_C* RemovedBuilding); // Function BP_Grid_Base.BP_Grid_Base_C.RemoveBuildingFromGrid // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void DownShift(struct FTransform GridspaceLocWithWorldRot, struct FTransform& ShiftedLoc); // Function BP_Grid_Base.BP_Grid_Base_C.DownShift // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void UpShift(struct FTransform GridspaceLocWithWorldRot, struct FTransform& ShiftedLoc); // Function BP_Grid_Base.BP_Grid_Base_C.UpShift // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void BackwardsShift(struct FTransform GridspaceLocWithWorldRot, struct FTransform& ShiftedLoc); // Function BP_Grid_Base.BP_Grid_Base_C.BackwardsShift // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void ForwardShift(struct FTransform GridspaceLocWithWorldRot, struct FTransform& ShiftedLoc); // Function BP_Grid_Base.BP_Grid_Base_C.ForwardShift // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void RightShift(struct FTransform GridspaceLocWithWorldRot, struct FTransform& ShiftedLoc); // Function BP_Grid_Base.BP_Grid_Base_C.RightShift // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void LeftShift(struct FTransform GridspaceLocWithWorldRot, struct FTransform& ShiftedTrans); // Function BP_Grid_Base.BP_Grid_Base_C.LeftShift // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void DownAndReverse(struct FTransform InTrans, struct FTransform& OutTrans); // Function BP_Grid_Base.BP_Grid_Base_C.DownAndReverse // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Rotate(struct FTransform InTrans, struct FTransform& OutTrans); // Function BP_Grid_Base.BP_Grid_Base_C.Rotate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Reverse(struct FTransform InTrans, struct FTransform& OutTrans); // Function BP_Grid_Base.BP_Grid_Base_C.Reverse // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BuildingSpecificAlternateRotations(struct FTransform InTrans, struct ABuildingBase* BuildingClass, struct FTransform& OutTrans); // Function BP_Grid_Base.BP_Grid_Base_C.BuildingSpecificAlternateRotations // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GridSpaceToWorldSpace(struct FTransform InGridSpaceTransform, struct FTransform& OutWorldSpaceTransform); // Function BP_Grid_Base.BP_Grid_Base_C.GridSpaceToWorldSpace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WorldSpaceToGridSpaceRounded(struct FTransform InWorldTransform, bool AlternateRotation, struct ABuildingBase* BuildingClass, struct FTransform& OutGridTransform); // Function BP_Grid_Base.BP_Grid_Base_C.WorldSpaceToGridSpaceRounded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsVectorPairEqual(struct FVectorPair Pair1, struct FVectorPair pair2, bool& Equal); // Function BP_Grid_Base.BP_Grid_Base_C.IsVectorPairEqual // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CanAddBuilding(struct ABP_Building_Base_C* NewBuilding, struct FTransform GridSpaceTransform, bool& bLocked); // Function BP_Grid_Base.BP_Grid_Base_C.CanAddBuilding // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckBuildingLocationFromWorldspaceRounded(struct FTransform WorldSpaceTransform, struct ABP_Building_Base_C* BuildingType, bool AlternateRotation, struct FTransform& OutWorldSpaceTransform, bool& bLocked, struct FTransform& OutGridSpaceTransform); // Function BP_Grid_Base.BP_Grid_Base_C.CheckBuildingLocationFromWorldspaceRounded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Handle Try Add New Building from World Space(struct FTransform World Space Transform, struct ABP_Building_Base_C* DesiredClass, bool AlternateRotation, struct FItemData Item, bool& Success, struct ABP_Building_Base_C*& Building); // Function BP_Grid_Base.BP_Grid_Base_C.Handle Try Add New Building from World Space // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PrepareUnzip(); // Function BP_Grid_Base.BP_Grid_Base_C.PrepareUnzip // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PerformUnzip(); // Function BP_Grid_Base.BP_Grid_Base_C.PerformUnzip // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Prepare and perform Unzip(float StormTier, float UnzipCountMultiplier, float UnzipDamageMultiplier); // Function BP_Grid_Base.BP_Grid_Base_C.Prepare and perform Unzip // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WeatherSortingTick(); // Function BP_Grid_Base.BP_Grid_Base_C.WeatherSortingTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_Grid_Base.BP_Grid_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnTerrainAnchorStateChanged(); // Function BP_Grid_Base.BP_Grid_Base_C.OnTerrainAnchorStateChanged // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_Grid_Base.BP_Grid_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void AddChildBuildingToDestroy(struct ABuildingBase* BuildingToDestroy); // Function BP_Grid_Base.BP_Grid_Base_C.AddChildBuildingToDestroy // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetAutomaticResumingDestructionEnabled(bool bEnabled); // Function BP_Grid_Base.BP_Grid_Base_C.SetAutomaticResumingDestructionEnabled // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetQueued(bool bQueued); // Function BP_Grid_Base.BP_Grid_Base_C.SetQueued // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Grid_Base(int32_t EntryPoint); // Function BP_Grid_Base.BP_Grid_Base_C.ExecuteUbergraph_BP_Grid_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void QueuesEmptied__DelegateSignature(); // Function BP_Grid_Base.BP_Grid_Base_C.QueuesEmptied__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

