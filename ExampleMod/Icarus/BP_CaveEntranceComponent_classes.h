// BlueprintGeneratedClass BP_CaveEntranceComponent.BP_CaveEntranceComponent_C
// Size: 0x220 (Inherited: 0x200)
struct UBP_CaveEntranceComponent_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x200(0x08)
	struct UCurveFloat* DistanceCurve; // 0x208(0x08)
	struct UFMODAudioComponent* Audio; // 0x210(0x08)
	struct UCurveFloat* DistanceCurve_Entrance; // 0x218(0x08)

	void GetEntranceDepthForAtmos(struct FVector Location, float& EntranceDepth); // Function BP_CaveEntranceComponent.BP_CaveEntranceComponent_C.GetEntranceDepthForAtmos // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ToggleAudio(bool ShouldPlay); // Function BP_CaveEntranceComponent.BP_CaveEntranceComponent_C.ToggleAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetSpelunkingDepth(struct FVector Location, float& Depth); // Function BP_CaveEntranceComponent.BP_CaveEntranceComponent_C.GetSpelunkingDepth // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_CaveEntranceComponent.BP_CaveEntranceComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_CaveEntranceComponent.BP_CaveEntranceComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_CaveEntranceComponent(int32_t EntryPoint); // Function BP_CaveEntranceComponent.BP_CaveEntranceComponent_C.ExecuteUbergraph_BP_CaveEntranceComponent // (Final|UbergraphFunction) // @ game+0x1be0000
};

