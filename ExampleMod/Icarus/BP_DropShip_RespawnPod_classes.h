// BlueprintGeneratedClass BP_DropShip_RespawnPod.BP_DropShip_RespawnPod_C
// Size: 0x470 (Inherited: 0x468)
struct ABP_DropShip_RespawnPod_C : ABP_DropShip_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)

	void SetInteraction(bool Active); // Function BP_DropShip_RespawnPod.BP_DropShip_RespawnPod_C.SetInteraction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetDropshipLoadoutItems(struct FItemData& TopPart, struct FItemData& MidPart, struct FItemData& BottomPart); // Function BP_DropShip_RespawnPod.BP_DropShip_RespawnPod_C.GetDropshipLoadoutItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void CheckClientPartsReady(bool& PartsReady); // Function BP_DropShip_RespawnPod.BP_DropShip_RespawnPod_C.CheckClientPartsReady // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_DropShip_RespawnPod.BP_DropShip_RespawnPod_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void SpawnShipParts(); // Function BP_DropShip_RespawnPod.BP_DropShip_RespawnPod_C.SpawnShipParts // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_DropShip_RespawnPod(int32_t EntryPoint); // Function BP_DropShip_RespawnPod.BP_DropShip_RespawnPod_C.ExecuteUbergraph_BP_DropShip_RespawnPod // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

