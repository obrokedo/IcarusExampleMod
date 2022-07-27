// BlueprintGeneratedClass BPQ_OLY_Forest_Recon.BPQ_OLY_Forest_Recon_C
// Size: 0x330 (Inherited: 0x320)
struct ABPQ_OLY_Forest_Recon_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)

	bool Check(); // Function BPQ_OLY_Forest_Recon.BPQ_OLY_Forest_Recon_C.Check // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Setup(bool bFirstTime); // Function BPQ_OLY_Forest_Recon.BPQ_OLY_Forest_Recon_C.Setup // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Custom(struct AIcarusPlayerCharacter* Player, struct AIcarusRocket* Dropship); // Function BPQ_OLY_Forest_Recon.BPQ_OLY_Forest_Recon_C.Custom // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RunFlow(); // Function BPQ_OLY_Forest_Recon.BPQ_OLY_Forest_Recon_C.RunFlow // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BPQ_OLY_Forest_Recon(int32_t EntryPoint); // Function BPQ_OLY_Forest_Recon.BPQ_OLY_Forest_Recon_C.ExecuteUbergraph_BPQ_OLY_Forest_Recon // (Final|UbergraphFunction) // @ game+0x1be0000
};

