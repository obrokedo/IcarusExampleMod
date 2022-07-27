// BlueprintGeneratedClass BP_RP_Command_Base.BP_RP_Command_Base_C
// Size: 0x499 (Inherited: 0x462)
struct ABP_RP_Command_Base_C : ABP_PartBase_C {
	char pad_462[0x6]; // 0x462(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct UChildActorComponent* Container; // 0x470(0x08)
	struct UChildActorComponent* Seat; // 0x478(0x08)
	struct UChildActorComponent* Bottom; // 0x480(0x08)
	struct UChildActorComponent* Top; // 0x488(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x490(0x08)
	bool Open; // 0x498(0x01)

	void ReadyCheck(bool& Success); // Function BP_RP_Command_Base.BP_RP_Command_Base_C.ReadyCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetSeat(struct ABP_DropshipSeat_C*& Dropship Seat); // Function BP_RP_Command_Base.BP_RP_Command_Base_C.GetSeat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void TriggerEvent(struct FDropShipActionsEnum Actions); // Function BP_RP_Command_Base.BP_RP_Command_Base_C.TriggerEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExitSeat(bool& Success); // Function BP_RP_Command_Base.BP_RP_Command_Base_C.ExitSeat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void EnterSeat(struct AIcarusPlayerCharacterSurvival* Character, bool& Success); // Function BP_RP_Command_Base.BP_RP_Command_Base_C.EnterSeat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetMesh(struct UPrimitiveComponent*& Mesh); // Function BP_RP_Command_Base.BP_RP_Command_Base_C.GetMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_RP_Command_Base.BP_RP_Command_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_RP_Command_Base(int32_t EntryPoint); // Function BP_RP_Command_Base.BP_RP_Command_Base_C.ExecuteUbergraph_BP_RP_Command_Base // (Final|UbergraphFunction) // @ game+0x1be0000
};

