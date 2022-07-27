// BlueprintGeneratedClass BPQ_STYX_C_Extermination_DryingRack_Deploy.BPQ_STYX_C_Extermination_DryingRack_Deploy_C
// Size: 0x330 (Inherited: 0x320)
struct ABPQ_STYX_C_Extermination_DryingRack_Deploy_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)

	bool Check(); // Function BPQ_STYX_C_Extermination_DryingRack_Deploy.BPQ_STYX_C_Extermination_DryingRack_Deploy_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_STYX_C_Extermination_DryingRack_Deploy.BPQ_STYX_C_Extermination_DryingRack_Deploy_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void OnDeploy(struct AIcarusPlayerCharacter* Player, struct AIcarusActor* Deployable); // Function BPQ_STYX_C_Extermination_DryingRack_Deploy.BPQ_STYX_C_Extermination_DryingRack_Deploy_C.OnDeploy // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_STYX_C_Extermination_DryingRack_Deploy(int32_t EntryPoint); // Function BPQ_STYX_C_Extermination_DryingRack_Deploy.BPQ_STYX_C_Extermination_DryingRack_Deploy_C.ExecuteUbergraph_BPQ_STYX_C_Extermination_DryingRack_Deploy // (Final|UbergraphFunction) // @ game+0x1be0000
};

