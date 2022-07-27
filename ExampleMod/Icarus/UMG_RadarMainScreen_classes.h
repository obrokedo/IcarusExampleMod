// WidgetBlueprintGeneratedClass UMG_RadarMainScreen.UMG_RadarMainScreen_C
// Size: 0x6a8 (Inherited: 0x269)
struct UUMG_RadarMainScreen_C : UUMG_RadarMainScreenBase_C {
	char pad_269[0x7]; // 0x269(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UUMG_ButtonIcon_C* ButtonMapCombined; // 0x278(0x08)
	struct UUMG_ButtonIcon_C* ButtonMapTopo; // 0x280(0x08)
	struct UUMG_ButtonIcon_C* ButtonMapVisual; // 0x288(0x08)
	struct UUMG_ButtonIcon_C* CenterMapButton; // 0x290(0x08)
	struct UCanvasPanel* DepositLocationsPanel; // 0x298(0x08)
	struct UImage* FOWImage; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image_2; // 0x2b0(0x08)
	struct UImage* Image_3; // 0x2b8(0x08)
	struct UImage* Image_4; // 0x2c0(0x08)
	struct UImage* Image_5; // 0x2c8(0x08)
	struct UImage* Image_6; // 0x2d0(0x08)
	struct UImage* Image_7; // 0x2d8(0x08)
	struct UImage* Image_8; // 0x2e0(0x08)
	struct UImage* Image_9; // 0x2e8(0x08)
	struct UImage* Image_10; // 0x2f0(0x08)
	struct UImage* Image_11; // 0x2f8(0x08)
	struct UImage* Image_12; // 0x300(0x08)
	struct UImage* Image_13; // 0x308(0x08)
	struct UImage* Image_14; // 0x310(0x08)
	struct UImage* Image_547; // 0x318(0x08)
	struct UImage* Image_715; // 0x320(0x08)
	struct UImage* Image_730; // 0x328(0x08)
	struct UHorizontalBox* legendActiveArea; // 0x330(0x08)
	struct UHorizontalBox* legendBuilding; // 0x338(0x08)
	struct UHorizontalBox* LegendCompletedArea; // 0x340(0x08)
	struct UHorizontalBox* legendDowned; // 0x348(0x08)
	struct UHorizontalBox* legendDropship; // 0x350(0x08)
	struct UHorizontalBox* legendemptytiles; // 0x358(0x08)
	struct UHorizontalBox* legendgoodtiles; // 0x360(0x08)
	struct UImage* LegendGradientShadow; // 0x368(0x08)
	struct UImage* LegendGradientShadow_2; // 0x370(0x08)
	struct UHorizontalBox* legendMeta; // 0x378(0x08)
	struct UHorizontalBox* legendplayer; // 0x380(0x08)
	struct UHorizontalBox* legendRadar; // 0x388(0x08)
	struct UCanvasPanel* MapRadarCanvas; // 0x390(0x08)
	struct UCanvasPanel* MapSpaceCanvas_2; // 0x398(0x08)
	struct UUniformGridPanel* MapTileUniformGrid_Heightmap; // 0x3a0(0x08)
	struct UUniformGridPanel* MapTileUniformGrid_Visual; // 0x3a8(0x08)
	struct UScaleBox* MapZoomScaleBox; // 0x3b0(0x08)
	struct USizeBox* ObjectiveListSizeBox; // 0x3b8(0x08)
	struct UImage* OutOfBoundsImage; // 0x3c0(0x08)
	struct UImage* RadarHeatmapImage; // 0x3c8(0x08)
	struct UCanvasPanel* RadarLocationsPanel; // 0x3d0(0x08)
	struct URetainerBox* RetainerBox_191; // 0x3d8(0x08)
	struct UCanvasPanel* TileCanvas; // 0x3e0(0x08)
	struct UUMG_ButtonIcon_C* ToggleRadarButton; // 0x3e8(0x08)
	struct UCanvasPanel* TranslationCanvas; // 0x3f0(0x08)
	struct UImage* TranslationCanvasBackgroundcolor; // 0x3f8(0x08)
	struct UImage* TranslationCanvasBackgroundPattern; // 0x400(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_CenterMap; // 0x408(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Combined; // 0x410(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_ToggleRadar; // 0x418(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Topographical; // 0x420(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Visual; // 0x428(0x08)
	struct UUMG_ProspectObjectiveList_C* UMG_ProspectObjectiveList; // 0x430(0x08)
	struct UUMG_RadarMapGrid_C* UMG_RadarMapGrid; // 0x438(0x08)
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> RadarLocationWidgets; // 0x440(0x10)
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> DepositLocationWidgets; // 0x450(0x10)
	struct AMapManager_C* MapManager; // 0x460(0x08)
	struct UUMG_RadarIcon_C* debugmarker; // 0x468(0x08)
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> PlayerLocationWidgets; // 0x470(0x10)
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> UnsortedActorLocationWidgets; // 0x480(0x10)
	struct TArray<struct UUMG_RadarSquare_C*> ScannedRadarTiles; // 0x490(0x10)
	struct TArray<struct UUMG_RadarSquare_C*> RadarRadius; // 0x4a0(0x10)
	struct TArray<struct UUMG_RadarSquare_C*> OrphanedScannedRadarTiles; // 0x4b0(0x10)
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> DropshipLocationWidgets; // 0x4c0(0x10)
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> GraveLocationWidgets; // 0x4d0(0x10)
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> GridLocationWidgets; // 0x4e0(0x10)
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> WaypointLocationWidgets; // 0x4f0(0x10)
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> EquipmentPodLocationsWidgets; // 0x500(0x10)
	float MapIconGlobalSizeMultiplier; // 0x510(0x04)
	float MapIconGlobalMinSizeClamp; // 0x514(0x04)
	float MapIconGlobalMaxSizeClamp; // 0x518(0x04)
	float MapMaxZoomOut; // 0x51c(0x04)
	float MapMaxZoomIn; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	struct TArray<struct FMapIconsStruct> MapIconSettings; // 0x528(0x10)
	float FirstTimeOpenZoom; // 0x538(0x04)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct UMaterialInstanceDynamic* RadarHeatmapMaskDMI; // 0x540(0x08)
	struct UMaterialInstanceDynamic* RadarHeatmapMetaLayerDMI; // 0x548(0x08)
	bool ShiftIsDown; // 0x550(0x01)
	bool CtrlIsDown; // 0x551(0x01)
	bool AltIsDown; // 0x552(0x01)
	char pad_553[0x1]; // 0x553(0x01)
	int32_t V2ScansProcessed; // 0x554(0x04)
	bool MapTickedOnce; // 0x558(0x01)
	char pad_559[0x3]; // 0x559(0x03)
	int32_t V3ScansProcessed; // 0x55c(0x04)
	struct TArray<struct UUMG_RadarSquare_C*> RadarV3Radius; // 0x560(0x10)
	float MapZoomRateOfChange; // 0x570(0x04)
	char pad_574[0x4]; // 0x574(0x04)
	struct TMap<struct UObject*, struct UUMG_QuestWidget_C*> QuestWidgetMap; // 0x578(0x50)
	struct FSlateColor Purple; // 0x5c8(0x28)
	struct FVector ContextMenuCachedWorldLocation; // 0x5f0(0x0c)
	struct FVector MouseDownCachedWorldLocation; // 0x5fc(0x0c)
	bool DragOperationOccurred; // 0x608(0x01)
	char pad_609[0x3]; // 0x609(0x03)
	int32_t TileSize; // 0x60c(0x04)
	struct UMaterialInstanceDynamic* FowMaskDMI; // 0x610(0x08)
	struct UObject* AsyncOOBImageCache; // 0x618(0x08)
	struct TSoftObjectPtr<UGameplayTexture> FullBoundsGameplayTexture; // 0x620(0x28)
	struct TArray<struct UUMG_RadarSquare_C*> QuestCircles; // 0x648(0x10)
	float GameTimeOfLastTick; // 0x658(0x04)
	int32_t RenderCountThisFrame; // 0x65c(0x04)
	float MapIconGlobalSizeMultiplierNew; // 0x660(0x04)
	char pad_664[0x4]; // 0x664(0x04)
	struct FText ContextMenuHeadingText; // 0x668(0x18)
	struct TArray<struct FVector> PendingFOWDrawLocations; // 0x680(0x10)
	int32_t NewVar_0_1; // 0x690(0x04)
	char pad_694[0x4]; // 0x694(0x04)
	struct TArray<struct FVector> OldFOWDrawLocations; // 0x698(0x10)

	struct FMinimapData GetMinimapData(bool& Valid); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.GetMinimapData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateMapIcons(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.UpdateMapIcons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BatchDrawFOW(float DrawSizeOverride); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.BatchDrawFOW // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FOWRevealCircle(struct FVector WorldLocation, float RadiusInKM); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.FOWRevealCircle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateFogOfWarVisibility(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.UpdateFogOfWarVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IsMapOpen(bool& Open); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.IsMapOpen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void RemoveQuestSearchArea(struct UUMG_RadarSquare_C* SearchArea); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.RemoveQuestSearchArea // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddQuestSearchArea(float Radius, struct FVector WorldSpaceCenter, struct AIcarusActor* Actor, struct UTexture2D* TextureOverride, struct FLinearColor Specified Color, struct UUMG_RadarSquare_C*& Widget); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.AddQuestSearchArea // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitObjectiveList(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.InitObjectiveList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitTileSize(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.InitTileSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetMouseWorldLocation(struct FVector& World Location); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.GetMouseWorldLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RadarCircleRadiusUpdate(int32_t X, int32_t Y, int32_t Radius, struct FVector WorldSpaceTileCenter, struct ABP_Radar_C* Radar); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.RadarCircleRadiusUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateIcon(struct UUserWidget* IconWidget, struct AActor* LinkedActor, bool ShouldRotate, float ScaleFactor); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.UpdateIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CanUseTopoMap(bool& HasStat); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.CanUseTopoMap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CanUseVisualMap(bool& HasStat); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.CanUseVisualMap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CanUseRadar(bool& HasStat); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.CanUseRadar // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CanSeeOwnLocation(bool& HasStat); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.CanSeeOwnLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void IconStatCheck(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.IconStatCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RotateMapIcon(struct UUserWidget* IconWidget, struct AActor* LinkedActor); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.RotateMapIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ConfigureMapIconSettings(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.ConfigureMapIconSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OffsetLabels(struct TArray<struct UUserWidget*>& IconWidgets); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OffsetLabels // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Moved Translation Canvas to World Location(struct FVector WorldLocation); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.Moved Translation Canvas to World Location // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void MapCanvasSpaceToWorldSpace(struct FVector2D MapLocation, struct FVector& World Location); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.MapCanvasSpaceToWorldSpace // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LoadVisualmapsIntoMapTiles(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.LoadVisualmapsIntoMapTiles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LoadHeightmapsIntoMapTiles(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.LoadHeightmapsIntoMapTiles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CompletedRadarTileCleanup(struct ABP_Radar_C* CompletedRadar); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.CompletedRadarTileCleanup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitCompletedRadarSquares(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.InitCompletedRadarSquares // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RadarSquareRadiusUpdate(int32_t X, int32_t Y, int32_t Radius, struct FVector WorldSpaceTileCenter, struct ABP_Radar_C* Radar); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.RadarSquareRadiusUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Rotate Player Widgets(struct TArray<struct UUMG_IcarusLinkedActorPanel_C*>& Player Icons); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.Rotate Player Widgets // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitScannedRadarSquares(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.InitScannedRadarSquares // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TileScannedUpdate(int32_t X, int32_t Y, enum class EMapTileRadarFlag Flag, struct FVector WorldSpaceTileCenter, struct ABP_Radar_C* LinkedRadar); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.TileScannedUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddMarkersForAllActorsWithIcon(struct AActor* ActorClass, struct UObject* NewImage, struct TArray<struct UUMG_IcarusLinkedActorPanel_C*>& NewWidgets, struct UImage*& IconImage); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.AddMarkersForAllActorsWithIcon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateLinkedActorWidgetsLocations(struct UUserWidget* LinkedActorWidget, struct AActor* LinkedActor, bool ScaleIcon, float ScaleFactor); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.UpdateLinkedActorWidgetsLocations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnPaint(struct FPaintContext& Context); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	void WorldSpaceToMapCanvasSpace(struct FVector WorldLocation, struct FVector2D& MapLocation); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.WorldSpaceToMapCanvasSpace // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateRadarWidgets(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.UpdateRadarWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnLoaded_170E4BB94C9E0BCCC204CD833F0BCCC2(struct UObject* Loaded); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.OnLoaded_170E4BB94C9E0BCCC204CD833F0BCCC2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Destruct(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReinitMap(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.ReinitMap // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowVisualMap(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.ShowVisualMap // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowHeightmap(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.ShowHeightmap // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ShowCombinedMap(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.ShowCombinedMap // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ToggleRadarDisplay(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.ToggleRadarDisplay // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__UMG_BasicButton_FocusOnPlayer_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.BndEvt__UMG_BasicButton_FocusOnPlayer_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void HideAllMaps(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.HideAllMaps // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RadarV2MaskReveal(struct FVector WorldLocation, float KMradius, float Intensity); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.RadarV2MaskReveal // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FakeMeta(struct FLinearColor In 2); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.FakeMeta // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void NewScanCheck(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.NewScanCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitRadarV2(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.InitRadarV2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StatsUpdated(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.StatsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void StatBindings(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.StatBindings // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__CenterMapButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.BndEvt__CenterMapButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ToggleRadarButton_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.BndEvt__ToggleRadarButton_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ButtonMapVisual_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.BndEvt__ButtonMapVisual_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ButtonMapTopo_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.BndEvt__ButtonMapTopo_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void BndEvt__ButtonMapCombined_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.BndEvt__ButtonMapCombined_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ContextMenuSetGridLocation(struct FName ItemIdentifier, int32_t ItemPayload); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.ContextMenuSetGridLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitialiseOutOfBoundsImage(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.InitialiseOutOfBoundsImage // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ContextMenuCopyGridLocation(struct FName ItemIdentifier, int32_t ItemPayload); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.ContextMenuCopyGridLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GenerateFOWDrawLocations(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.GenerateFOWDrawLocations // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FOWUpdate(); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.FOWUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_RadarMainScreen(int32_t EntryPoint); // Function UMG_RadarMainScreen.UMG_RadarMainScreen_C.ExecuteUbergraph_UMG_RadarMainScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

