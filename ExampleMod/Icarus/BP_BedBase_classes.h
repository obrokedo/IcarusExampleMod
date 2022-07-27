// BlueprintGeneratedClass BP_BedBase.BP_BedBase_C
// Size: 0x5f8 (Inherited: 0x5c3)
struct ABP_BedBase_C : ABP_DeployableBase_C {
	char pad_5C3[0x5]; // 0x5c3(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c8(0x08)
	struct USceneComponent* SeatAttachPoint; // 0x5d0(0x08)
	struct UBP_UIProjectionComponent_C* BP_UIProjectionComponent; // 0x5d8(0x08)
	struct TArray<struct FString> AssignedPlayerUIDs; // 0x5e0(0x10)
	struct ABP_Seat_Bed_C* SeatRef; // 0x5f0(0x08)

	struct TArray<struct FString> GetPlayerUIDArray(); // Function BP_BedBase.BP_BedBase_C.GetPlayerUIDArray // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	void GetWidgetClass(struct UUserWidget*& Widget); // Function BP_BedBase.BP_BedBase_C.GetWidgetClass // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Deployable_Interact(struct AActor* Interactor); // Function BP_BedBase.BP_BedBase_C.Deployable_Interact // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EnterBed(struct AIcarusPlayerCharacter* Player); // Function BP_BedBase.BP_BedBase_C.EnterBed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CheckTimeSkip(); // Function BP_BedBase.BP_BedBase_C.CheckTimeSkip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitSeat(); // Function BP_BedBase.BP_BedBase_C.InitSeat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateInWorldIcon(); // Function BP_BedBase.BP_BedBase_C.UpdateInWorldIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	struct FVector FindExitSpot(); // Function BP_BedBase.BP_BedBase_C.FindExitSpot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_AssignedPlayerUIDs(); // Function BP_BedBase.BP_BedBase_C.OnRep_AssignedPlayerUIDs // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool HasPlayerUID(struct FString& PlayerUID); // Function BP_BedBase.BP_BedBase_C.HasPlayerUID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void SanitzeAllBedUIDs(); // Function BP_BedBase.BP_BedBase_C.SanitzeAllBedUIDs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RemovePlayerUID(struct FString& PlayerUID); // Function BP_BedBase.BP_BedBase_C.RemovePlayerUID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddPlayerUID(struct FString& PlayerUID); // Function BP_BedBase.BP_BedBase_C.AddPlayerUID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_BedBase.BP_BedBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void SetPlayerUIDArray(struct TArray<struct FString>& PlayerUIDArray); // Function BP_BedBase.BP_BedBase_C.SetPlayerUIDArray // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_BedBase(int32_t EntryPoint); // Function BP_BedBase.BP_BedBase_C.ExecuteUbergraph_BP_BedBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

