// BlueprintGeneratedClass BP_FX_ShelterCapture.BP_FX_ShelterCapture_C
// Size: 0x260 (Inherited: 0x220)
struct ABP_FX_ShelterCapture_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneCaptureComponent2D* ShelterCaptureComponent; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct TArray<struct AActor*> Show Only Actors; // 0x238(0x10)
	struct FTimerHandle RefreshActorListTimer; // 0x248(0x08)
	struct TArray<struct AActor*> StaticShowOnlyActors; // 0x250(0x10)

	void CaptureScene(); // Function BP_FX_ShelterCapture.BP_FX_ShelterCapture_C.CaptureScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_FX_ShelterCapture.BP_FX_ShelterCapture_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_FX_ShelterCapture(int32_t EntryPoint); // Function BP_FX_ShelterCapture.BP_FX_ShelterCapture_C.ExecuteUbergraph_BP_FX_ShelterCapture // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

