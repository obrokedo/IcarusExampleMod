// BlueprintGeneratedClass BPQ_OLY_Riverlands_Deploy_Beacon.BPQ_OLY_Riverlands_Deploy_Beacon_C
// Size: 0x330 (Inherited: 0x320)
struct ABPQ_OLY_Riverlands_Deploy_Beacon_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)

	bool Check(); // Function BPQ_OLY_Riverlands_Deploy_Beacon.BPQ_OLY_Riverlands_Deploy_Beacon_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_OLY_Riverlands_Deploy_Beacon.BPQ_OLY_Riverlands_Deploy_Beacon_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void DeployNotify(struct AIcarusPlayerCharacter* Player, struct AIcarusActor* Deployable); // Function BPQ_OLY_Riverlands_Deploy_Beacon.BPQ_OLY_Riverlands_Deploy_Beacon_C.DeployNotify // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_OLY_Riverlands_Deploy_Beacon(int32_t EntryPoint); // Function BPQ_OLY_Riverlands_Deploy_Beacon.BPQ_OLY_Riverlands_Deploy_Beacon_C.ExecuteUbergraph_BPQ_OLY_Riverlands_Deploy_Beacon // (Final|UbergraphFunction) // @ game+0x1be0000
};

