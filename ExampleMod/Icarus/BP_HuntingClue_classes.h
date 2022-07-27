// BlueprintGeneratedClass BP_HuntingClue.BP_HuntingClue_C
// Size: 0x341 (Inherited: 0x2b0)
struct ABP_HuntingClue_C : AHuntingClue {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UBoxComponent* InteractionBox; // 0x2b8(0x08)
	struct UInteractableComponent* Interactable; // 0x2c0(0x08)
	struct UHighlightableComponent* Highlightable; // 0x2c8(0x08)
	struct USplineComponent* Spline; // 0x2d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d8(0x08)
	struct FMulticastInlineDelegate ClueUpdated; // 0x2e0(0x10)
	float LifeTime; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct ABP_HuntingClue_C* NextHuntingClue; // 0x2f8(0x08)
	struct TArray<struct FVector> SplineLocations; // 0x300(0x10)
	struct ACharacter* AIReference; // 0x310(0x08)
	bool Focused; // 0x318(0x01)
	enum class EHuntingClueState CurrentState; // 0x319(0x01)
	bool Highlighted; // 0x31a(0x01)
	char pad_31B[0x1]; // 0x31b(0x01)
	struct FHuntingClueSetupRowHandle HuntingClueRow; // 0x31c(0x18)
	char pad_334[0x4]; // 0x334(0x04)
	struct UBP_HuntingManager_C* HuntingManagerRef; // 0x338(0x08)
	bool UseTrail; // 0x340(0x01)

	void GetHuntingWidgetLocation(struct FVector& Location); // Function BP_HuntingClue.BP_HuntingClue_C.GetHuntingWidgetLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GatherSplineLocations(bool& Return, struct TArray<struct FVector>& Locations); // Function BP_HuntingClue.BP_HuntingClue_C.GatherSplineLocations // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdatePerceptionState(); // Function BP_HuntingClue.BP_HuntingClue_C.UpdatePerceptionState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateStateVisuals(); // Function BP_HuntingClue.BP_HuntingClue_C.UpdateStateVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitVisuals(); // Function BP_HuntingClue.BP_HuntingClue_C.InitVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateState(bool Highlight); // Function BP_HuntingClue.BP_HuntingClue_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void FocusUpdated(struct AActor* Actor); // Function BP_HuntingClue.BP_HuntingClue_C.FocusUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_SplineLocations(); // Function BP_HuntingClue.BP_HuntingClue_C.OnRep_SplineLocations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RequestSplineLocations(); // Function BP_HuntingClue.BP_HuntingClue_C.RequestSplineLocations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateTrail(); // Function BP_HuntingClue.BP_HuntingClue_C.UpdateTrail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_NextHuntingClue(); // Function BP_HuntingClue.BP_HuntingClue_C.OnRep_NextHuntingClue // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateVisuals(); // Function BP_HuntingClue.BP_HuntingClue_C.UpdateVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetNextClue(struct ABP_HuntingClue_C* Clue); // Function BP_HuntingClue.BP_HuntingClue_C.SetNextClue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RegisterHuntingWidget(); // Function BP_HuntingClue.BP_HuntingClue_C.RegisterHuntingWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetNextClueDistance(float& Distance); // Function BP_HuntingClue.BP_HuntingClue_C.GetNextClueDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void SendSplineLocations(struct TArray<struct FVector>& Locations); // Function BP_HuntingClue.BP_HuntingClue_C.SendSplineLocations // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__Highlightable_K2Node_ComponentBoundEvent_1_HighlightChangedSignature__DelegateSignature(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // Function BP_HuntingClue.BP_HuntingClue_C.BndEvt__Highlightable_K2Node_ComponentBoundEvent_1_HighlightChangedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_HuntingClue.BP_HuntingClue_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_HuntingClue(int32_t EntryPoint); // Function BP_HuntingClue.BP_HuntingClue_C.ExecuteUbergraph_BP_HuntingClue // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
	void ClueUpdated__DelegateSignature(); // Function BP_HuntingClue.BP_HuntingClue_C.ClueUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

