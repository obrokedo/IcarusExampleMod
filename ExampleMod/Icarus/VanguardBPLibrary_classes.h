// Class VanguardBPLibrary.VanguardBPFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UVanguardBPFunctionLibrary : UBlueprintFunctionLibrary {

	void SpawnActorOfClass(struct AActor* WorldContext, struct AActor* Class, struct FTransform SpawnTransform, enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct AActor* Owner, struct AActor*& OutActor); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SpawnActorOfClass // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x966210
	struct TArray<struct FVector> SortVectorArrayByDistanceFromOrigin(struct TArray<struct FVector>& Locations, struct FVector& Origin, bool bUseMinDistance, float MinDistance, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortVectorArrayByDistanceFromOrigin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x965f60
	struct TArray<struct FTransform> SortTransformArrayByDistanceFromOrigin(struct TArray<struct FTransform>& Transforms, struct FVector& Origin, bool bUseMinDistance, float MinDistance, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortTransformArrayByDistanceFromOrigin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x965cb0
	struct TArray<struct FString> SortStringArrayAlphabetically(struct TArray<struct FString>& InStringArray); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortStringArrayAlphabetically // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x965b20
	struct TArray<struct USceneComponent*> SortComponentsByDistanceFromOrigin(struct TArray<struct USceneComponent*>& SceneComponents, struct FVector& Origin); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortComponentsByDistanceFromOrigin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x9659e0
	struct TArray<struct AActor*> SortActorsByPathCostFromOrigin(struct UObject* WorldContextObject, struct TArray<struct AActor*>& Actors, struct FVector& Origin); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortActorsByPathCostFromOrigin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x965860
	struct TArray<struct AActor*> SortActorsByDistanceFromOrigin(struct TArray<struct AActor*>& Actors, struct FVector& Origin, bool bUseMinDistance, float MinDistance, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortActorsByDistanceFromOrigin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x9655b0
	struct TArray<struct UActorComponent*> SortActorComponentsByDistanceFromOrigin(struct TArray<struct UActorComponent*>& ActorComponents, struct FVector& Origin, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SortActorComponentsByDistanceFromOrigin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x9653a0
	void SetRenderInDepthPass(struct UPrimitiveComponent* Component, bool Value); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetRenderInDepthPass // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9652e0
	void SetRenderFocusOutline(bool bEnable); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetRenderFocusOutline // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x965260
	void SetLandscapeRVTSettings(struct ALandscapeProxy* LandscapeProxy, struct TArray<struct URuntimeVirtualTexture*>& VirtualTextures, int32_t NumLOD, int32_t LODBias); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetLandscapeRVTSettings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9650f0
	void SetCanEverAffectNavigation(struct UActorComponent* InActorComponent, bool bCanEverAffect); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetCanEverAffectNavigation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x965030
	void SetAllowAnyoneToDestroyComponent(struct UActorComponent* InComponent, bool AllowAnyone); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.SetAllowAnyoneToDestroyComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x964f70
	void ReconstructActor(struct AActor* Target); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.ReconstructActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x964ef0
	void QuickLog(struct FName LogCategory, struct FString Message); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.QuickLog // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x964dd0
	bool ProjectWorldToScreenOrEdge(struct APlayerController* Player, struct FVector& WorldPosition, struct FVector2D& ScreenOrEdgePosition, struct FVector2D& DirFromCentre, bool& IsOffScreen, bool& IsBehindCamera); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.ProjectWorldToScreenOrEdge // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x964b90
	bool ProjectReachablePointAtLocation(struct AActor* WorldContext, struct FVector& StartPoint, struct FVector& EndPoint, struct FVector& OutProjectedPoint, struct FVector ProjectionExtent, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.ProjectReachablePointAtLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x964940
	bool ProjectOrTraceToNavigablePoint(struct AActor* WorldContextObject, struct FVector& InLocation, struct FVector& OutProjectedPoint, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, bool bIgnoreSelf, struct FVector ProjectionExtent, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.ProjectOrTraceToNavigablePoint // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x964600
	struct TArray<struct TSoftObjectPtr<UWorld>> ObjectsToWorlds(struct TArray<struct UObject*>& Objects); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.ObjectsToWorlds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9644b0
	float MaxInt(); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.MaxInt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x964480
	float MaxFloat(); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.MaxFloat // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x964450
	void MarkObjectDirty(struct UObject* Object); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.MarkObjectDirty // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9643d0
	struct TArray<struct ULevelStreaming*> LoadAllStreamingLevels(struct UObject* WorldContextObject); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.LoadAllStreamingLevels // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x963f50
	bool IsWithEditor(); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.IsWithEditor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9643a0
	bool IsInEditorViewport(struct UObject* WorldContextObject); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.IsInEditorViewport // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x964310
	struct TSoftObjectPtr<UWorld> GetWorldFromStreamingAsset(struct ULevelStreaming* StreamingLevel); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetWorldFromStreamingAsset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x964250
	bool GetTileInfoFromStreamingLevel(struct UObject* WorldContextObject, struct ULevelStreaming* StreamingLevel, struct FVector& OutLocation); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetTileInfoFromStreamingLevel // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x964130
	void GetStreamingLevelFromActor(struct UObject* WorldContextObject, struct AActor* Actor, struct ULevelStreaming*& OutStreamingLevel); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetStreamingLevelFromActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x964020
	struct TArray<struct FName> GetStreamedLevelPackageNames(struct UObject* WorldContextObject); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetStreamedLevelPackageNames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x963f50
	struct TArray<struct FName> GetStreamedLevelNames(struct UObject* WorldContextObject); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetStreamedLevelNames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x963f50
	struct TArray<struct UObject*> GetLoadedChildClasses(struct UObject* ParentClass); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetLoadedChildClasses // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x963e80
	struct FName GetLevelNameFromStreamingAsset(struct ULevelStreaming* StreamingLevel); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetLevelNameFromStreamingAsset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x963df0
	int32_t GetHashFromString(struct FString& String); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetHashFromString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x963d40
	float GetClosestPlayerDistanceFromLocation(struct UObject* WorldContextObject, struct FVector Location, enum class EFunctionResult& Result); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetClosestPlayerDistanceFromLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x963c10
	struct UObject* GetClassDefaultObject(struct UObject* ObjectClass, bool& IsValid); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetClassDefaultObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x963b30
	void GetChildWidgetsOfClass(struct UWidget* WidgetClass, struct UPanelWidget* InParent, struct TArray<struct UWidget*>& ChildWidgets, bool SearchRecursively); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetChildWidgetsOfClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9639c0
	struct TArray<struct UObject*> GetChildClassesInPath(struct FName& FolderPath, struct UObject* ParentClass); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetChildClassesInPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9638a0
	struct TArray<struct FString> GetAllMapNames(struct FString OverrideSearchPath); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetAllMapNames // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x963750
	void GetActorsOfClassInWorld(struct AActor* WorldContext, struct AActor* ActorClass, struct TArray<struct AActor*>& OutActors); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetActorsOfClassInWorld // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x963630
	struct TArray<struct AActor*> GetActorsInWorld(struct UWorld* World); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.GetActorsInWorld // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x963560
	bool FindSocketOrTagOnActor(struct AActor* InActor, struct FName& SocketOrTagName, struct UActorComponent*& FoundComponent, struct FTransform& FoundWorldTransform); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.FindSocketOrTagOnActor // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x963390
	void FilterActorsByTags(struct TArray<struct AActor*>& InActorArray, struct TArray<struct FName>& Tags); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.FilterActorsByTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x963280
	struct AActor* DuplicateActor(struct AActor* InputActor, bool bDetachOriginal); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.DuplicateActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9631b0
	void DebugLog(enum class EBPLogVerbosity Verbosity, struct FName LogCategory, struct FString Message, bool bOutputToMessageLog); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.DebugLog // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x963010
	bool ComponentOverlapComponentsAgainstObjectType(struct UPrimitiveComponent* Component, struct FTransform& ComponentTransform, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, struct UObject* ComponentClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct UPrimitiveComponent*>& OutComponents); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.ComponentOverlapComponentsAgainstObjectType // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x962d80
	bool BlueprintSuggestProjectileVelocityByChannel(struct UObject* WorldContextObject, struct FVector& TossVelocity, struct FVector StartLocation, struct FVector EndLocation, float LaunchSpeed, float OverrideGravityZ, enum class ESuggestProjVelocityTraceOption TraceOption, float CollisionRadius, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, bool bFavorHighArc, bool bDrawDebug); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.BlueprintSuggestProjectileVelocityByChannel // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x962950
	void AddActorComponent(struct AActor* Owner, struct UActorComponent* ActorComponentClass, struct UActorComponent*& OutComponent); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.AddActorComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x962840
	bool ActorLineTraceSingle(struct UObject* WorldContextObject, struct AActor* TargetActor, struct FVector Start, struct FVector End, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, enum class EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function VanguardBPLibrary.VanguardBPFunctionLibrary.ActorLineTraceSingle // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x962460
};

