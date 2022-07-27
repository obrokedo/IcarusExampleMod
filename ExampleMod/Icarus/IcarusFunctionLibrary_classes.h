// BlueprintGeneratedClass IcarusFunctionLibrary.IcarusFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UIcarusFunctionLibrary_C : UBlueprintFunctionLibrary {

	void FormatRawSecondsToTimeLength(int32_t SecondsInput, struct UObject* __WorldContext, struct FString& Formatted); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.FormatRawSecondsToTimeLength // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FormatRawSecondsToTimeLengthDigital(int32_t SecondsInput, struct UObject* __WorldContext, struct TArray<struct FString>& Time); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.FormatRawSecondsToTimeLengthDigital // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FText GetResourceName(enum class EIcarusResourceType Type, struct UObject* __WorldContext); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.GetResourceName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct TSoftObjectPtr<UTexture2D> GetResourceImage(enum class EIcarusResourceType Type, struct UObject* __WorldContext); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.GetResourceImage // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void GetItemName_Static(struct FItemStaticData ItemStatic, struct UObject* __WorldContext, struct FText& Name); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.GetItemName_Static // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetItemName(struct FItemData ItemData, struct UObject* __WorldContext, struct FText& Name); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.GetItemName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetAllLightsHiddenInGame(bool HiddenInGame, struct TArray<struct AActor*>& ActorIgnoreList, struct TArray<struct ULightComponent*>& ComponentIgnoreList, struct UObject* __WorldContext); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.SetAllLightsHiddenInGame // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetLocalSelectedChrSlot(struct UObject* __WorldContext, int32_t& ChrSlot); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.GetLocalSelectedChrSlot // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	struct AIcarusPlayerController* GetIcarusController(int32_t Index, struct UObject* __WorldContext, bool& Valid); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.GetIcarusController // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void MakeItem(struct FMetaItem MetaItem, struct UObject* __WorldContext, struct FItemData& Item); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.MakeItem // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetPlayerIdentityData(int32_t Index, struct UObject* __WorldContext, struct FPlayerIdentityData& PlayerIdentity); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.GetPlayerIdentityData // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ResolveSoftClassReferenceArray(struct TArray<struct TSoftClassPtr<UObject>>& InSoftReferences, struct UObject* __WorldContext, struct TArray<struct AActor*>& OutClasses); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.ResolveSoftClassReferenceArray // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FilterActorListBySoftClasses(struct TArray<struct AActor*>& InActors, struct TArray<struct TSoftClassPtr<UObject>>& InClassFilter, struct UObject* __WorldContext, struct TArray<struct AActor*>& OutActors); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.FilterActorListBySoftClasses // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Get Icon or Missing(struct TSoftObjectPtr<UTexture2D> Icon, struct UObject* __WorldContext, struct TSoftObjectPtr<UTexture2D>& Output); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.Get Icon or Missing // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FormatTimeLengthDigital(int32_t SecondsInput, struct UObject* __WorldContext, struct TArray<struct FString>& Time); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.FormatTimeLengthDigital // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PrintDebug(struct FString Category, struct FString Log, struct UObject* __WorldContext); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.PrintDebug // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetItemIcon_Static(struct FItemStaticData ItemStatic, struct UObject* __WorldContext, struct TSoftObjectPtr<UTexture2D>& Icon); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.GetItemIcon_Static // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetItemIcon(struct FItemData ItemData, struct UObject* __WorldContext, struct TSoftObjectPtr<UTexture2D>& Icon); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.GetItemIcon // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FormatTimeLength(int32_t SecondsInput, struct UObject* __WorldContext, struct FString& Formatted); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.FormatTimeLength // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RoundVector(struct FVector Vector, struct UObject* __WorldContext, struct FVector& Rounded); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.RoundVector // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void AddReverseLinesToVectorPairArray(struct TArray<struct FVectorPair>& VectorPairs, struct UObject* __WorldContext, struct TArray<struct FVectorPair>& PairsWithReversed); // Function IcarusFunctionLibrary.IcarusFunctionLibrary_C.AddReverseLinesToVectorPairArray // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

