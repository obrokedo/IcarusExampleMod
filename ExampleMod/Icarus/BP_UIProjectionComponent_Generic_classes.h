// BlueprintGeneratedClass BP_UIProjectionComponent_Generic.BP_UIProjectionComponent_Generic_C
// Size: 0x148 (Inherited: 0x104)
struct UBP_UIProjectionComponent_Generic_C : UBP_UIProjectionComponent_C {
	char pad_104[0x4]; // 0x104(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	bool IsAlive; // 0x110(0x01)
	bool StatAbilityEnable; // 0x111(0x01)
	char pad_112[0x2]; // 0x112(0x02)
	float DotToSee; // 0x114(0x04)
	float RangeToDotSee; // 0x118(0x04)
	float RangeToCloseCircleSee; // 0x11c(0x04)
	bool DotSeeEnable; // 0x120(0x01)
	bool CircleCloseSee; // 0x121(0x01)
	char pad_122[0x6]; // 0x122(0x06)
	struct AIcarusActor* CurrentItem; // 0x128(0x08)
	float RightOffset; // 0x130(0x04)
	float UpOffset; // 0x134(0x04)
	bool PreviousUpdateEnabled; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct UW_ProjectionWidget_C* PreviousWidgetClass; // 0x140(0x08)

	void GatherBounds(); // Function BP_UIProjectionComponent_Generic.BP_UIProjectionComponent_Generic_C.GatherBounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FVector GetProjectionLocation(); // Function BP_UIProjectionComponent_Generic.BP_UIProjectionComponent_Generic_C.GetProjectionLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void UpdateEnabled(); // Function BP_UIProjectionComponent_Generic.BP_UIProjectionComponent_Generic_C.UpdateEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_IsAlive(); // Function BP_UIProjectionComponent_Generic.BP_UIProjectionComponent_Generic_C.OnRep_IsAlive // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_UIProjectionComponent_Generic.BP_UIProjectionComponent_Generic_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveTick(float DeltaSeconds); // Function BP_UIProjectionComponent_Generic.BP_UIProjectionComponent_Generic_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_UIProjectionComponent_Generic(int32_t EntryPoint); // Function BP_UIProjectionComponent_Generic.BP_UIProjectionComponent_Generic_C.ExecuteUbergraph_BP_UIProjectionComponent_Generic // (Final|UbergraphFunction) // @ game+0x1be0000
};

