// BlueprintGeneratedClass MapManager.MapManager_C
// Size: 0x380 (Inherited: 0x270)
struct AMapManager_C : AMapManagerBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct USceneCaptureComponent2D* OrthoCapture; // 0x278(0x08)
	struct UCameraComponent* OrthoCamera; // 0x280(0x08)
	struct USceneComponent* ClientsideGridTiles; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct AActor* MapCameraLocationActor; // 0x298(0x08)
	int32_t XTileCount; // 0x2a0(0x04)
	int32_t YTileCount; // 0x2a4(0x04)
	struct TArray<struct FMapRow> TileRadarStates; // 0x2a8(0x10)
	struct TArray<struct FIntVector> AdjacencyMatrix; // 0x2b8(0x10)
	struct TArray<struct AResourceDeposit*> RadarDetectedDeposits; // 0x2c8(0x10)
	struct TMap<struct FIntVector, struct UStaticMeshComponent*> 3dTiles; // 0x2d8(0x50)
	struct TArray<struct FIntVector> LocalDirtyTileBuffer; // 0x328(0x10)
	struct TArray<struct FIntVector> PlacedRadarLocations; // 0x338(0x10)
	struct TArray<int32_t> PlacedRadarRadius; // 0x348(0x10)
	struct TArray<struct FGlobalEquippableStats> GlobalStats; // 0x358(0x10)
	struct TArray<struct FRadarV2ScanData> RadarV2Scans; // 0x368(0x10)
	int32_t RadarV2ScanCount; // 0x378(0x04)
	int32_t RadarV3ScanCount; // 0x37c(0x04)

	void SetFOWMapTileFlags(struct TMap<struct FIntPoint, int32_t>& TileFlags); // Function MapManager.MapManager_C.SetFOWMapTileFlags // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetFOWMapTileFlags(struct TMap<struct FIntPoint, int32_t>& TileFlags); // Function MapManager.MapManager_C.GetFOWMapTileFlags // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RestoreFromDatabase(struct TMap<struct FIntPoint, int32_t>& TileFlags, struct TArray<struct FRadarV3ScanData>& RadarScans); // Function MapManager.MapManager_C.RestoreFromDatabase // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SaveToDatabase(struct TMap<struct FIntPoint, int32_t>& TileFlags); // Function MapManager.MapManager_C.SaveToDatabase // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetColumnTilesFromBitmask(); // Function MapManager.MapManager_C.SetColumnTilesFromBitmask // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_TileRadarStates(); // Function MapManager.MapManager_C.OnRep_TileRadarStates // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetMapTileForFOW(int32_t X, int32_t Y, bool& FoundUnscanned, int32_t& Unscanned X, int32_t& Unscanned Y); // Function MapManager.MapManager_C.SetMapTileForFOW // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_RadarV3ScanCount(); // Function MapManager.MapManager_C.OnRep_RadarV3ScanCount // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_RadarV2ScanCount(); // Function MapManager.MapManager_C.OnRep_RadarV2ScanCount // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RadarV3ScanFinished(struct FRadarV3ScanData Scan); // Function MapManager.MapManager_C.RadarV3ScanFinished // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_RadarV2Scans(); // Function MapManager.MapManager_C.OnRep_RadarV2Scans // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RadarV2ScanFinished(struct FVector WorldLocation, float DistanceInKM, float Intensity); // Function MapManager.MapManager_C.RadarV2ScanFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RemoveSingleGlobalStatFromActors(int32_t StatIndex); // Function MapManager.MapManager_C.RemoveSingleGlobalStatFromActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RecheckActorsForSingleGlobalStat(int32_t StatIndex); // Function MapManager.MapManager_C.RecheckActorsForSingleGlobalStat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EquipableRemoveGlobalStat(struct UBP_EquippableModifier_C* Equippable Instance); // Function MapManager.MapManager_C.EquipableRemoveGlobalStat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EquipableApplyGlobalStat(struct UBP_EquippableModifier_C* Equippable Instance); // Function MapManager.MapManager_C.EquipableApplyGlobalStat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Radar Radius Update(struct ABP_Radar_C* Radar); // Function MapManager.MapManager_C.Radar Radius Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RadarTileToWorld(int32_t X, int32_t Y, struct FVector& TileCenterWorldSpace); // Function MapManager.MapManager_C.RadarTileToWorld // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LineSubsectionCheck(struct FVectorPair TestLine, struct FVectorPair CheckAgainstLine, enum class LineSegmentRelationship& NewParam); // Function MapManager.MapManager_C.LineSubsectionCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetTileAtGridspaceVector(struct FVector TileCoords, enum class EMapTileRadarFlag& Radar Flag, bool& Failed); // Function MapManager.MapManager_C.GetTileAtGridspaceVector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TryToGetUnscannedTileAtCoords(int32_t X, int32_t Y, bool& FoundUnscanned, int32_t& Unscanned X, int32_t& Unscanned Y); // Function MapManager.MapManager_C.TryToGetUnscannedTileAtCoords // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ConfigureCamera(); // Function MapManager.MapManager_C.ConfigureCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WorldSpaceToTile(struct FVector WorldSpaceLocation, int32_t& X, int32_t& Y); // Function MapManager.MapManager_C.WorldSpaceToTile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CompleteTileScan(int32_t X, int32_t Y, struct ABP_Radar_C* Radar); // Function MapManager.MapManager_C.CompleteTileScan // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsValidTileCoord(int32_t X, int32_t Y, bool& Valid); // Function MapManager.MapManager_C.IsValidTileCoord // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetNearestUnscannedTileInRangeOf1(int32_t X, int32_t Y, int32_t& Unscanned X, int32_t& Unscanned Y); // Function MapManager.MapManager_C.GetNearestUnscannedTileInRangeOf1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddTilesHelper(); // Function MapManager.MapManager_C.AddTilesHelper // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetTileRadarFlag(int32_t X, int32_t Y, enum class EMapTileRadarFlag Flag); // Function MapManager.MapManager_C.SetTileRadarFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RemoveTilesHelper(); // Function MapManager.MapManager_C.RemoveTilesHelper // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MapFlagToMaterial(enum class EMapTileRadarFlag MapTileFlag, struct UMaterial*& Material); // Function MapManager.MapManager_C.MapFlagToMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetTileMaterial(struct UStaticMeshComponent* StaticMesh, int32_t X, int32_t Y); // Function MapManager.MapManager_C.SetTileMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitMapTiles(); // Function MapManager.MapManager_C.InitMapTiles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UserConstructionScript(); // Function MapManager.MapManager_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function MapManager.MapManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ClientSpawnTiles(); // Function MapManager.MapManager_C.ClientSpawnTiles // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ClientRemoveTiles(); // Function MapManager.MapManager_C.ClientRemoveTiles // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ClientUpdateTileMaterials(int32_t X, int32_t Y); // Function MapManager.MapManager_C.ClientUpdateTileMaterials // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ClientUpdateRadarMapTile(int32_t X, int32_t Y, enum class EMapTileRadarFlag Flag, struct FVector WorldPosition, struct ABP_Radar_C* Radar); // Function MapManager.MapManager_C.ClientUpdateRadarMapTile // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ClientUpdateRadarRadius(int32_t X, int32_t Y, int32_t Radius, struct FVector TileWorldSpace, struct ABP_Radar_C* Radar); // Function MapManager.MapManager_C.ClientUpdateRadarRadius // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function MapManager.MapManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ServerOnlyUpdate(); // Function MapManager.MapManager_C.ServerOnlyUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_MapManager(int32_t EntryPoint); // Function MapManager.MapManager_C.ExecuteUbergraph_MapManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

