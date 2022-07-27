// BlueprintGeneratedClass BP_IcarusNPCGOAPController.BP_IcarusNPCGOAPController_C
// Size: 0x504 (Inherited: 0x4e0)
struct ABP_IcarusNPCGOAPController_C : AIcarusNPCGOAPController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UCurveFloat* ThreatOverDistanceCurve; // 0x4e8(0x08)
	float MaximumThreatRadius; // 0x4f0(0x04)
	bool GOAP Debugging; // 0x4f4(0x01)
	char pad_4F5[0x3]; // 0x4f5(0x03)
	struct UIcarusGOAPAIMemory* Memory; // 0x4f8(0x08)
	float BaseStealthThreatModifier; // 0x500(0x04)

	void ShouldReactToPerceivedDamageNoise(struct AActor* PerceivedActor, bool& ShouldReact); // Function BP_IcarusNPCGOAPController.BP_IcarusNPCGOAPController_C.ShouldReactToPerceivedDamageNoise // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool OnProcessedNoise(struct AActor* PerceivedActor, struct FAIStimulus EventStimulus); // Function BP_IcarusNPCGOAPController.BP_IcarusNPCGOAPController_C.OnProcessedNoise // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool OnProcessedDamage(struct AActor* PerceivedActor, struct FAIStimulus EventStimulus); // Function BP_IcarusNPCGOAPController.BP_IcarusNPCGOAPController_C.OnProcessedDamage // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool RecalculateGOAPState(); // Function BP_IcarusNPCGOAPController.BP_IcarusNPCGOAPController_C.RecalculateGOAPState // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool MoveToAction(struct UIcarusGOAPAction* Action); // Function BP_IcarusNPCGOAPController.BP_IcarusNPCGOAPController_C.MoveToAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	float GetActorThreat(struct AActor* PerceivedActor, bool bIgnoreRelationships); // Function BP_IcarusNPCGOAPController.BP_IcarusNPCGOAPController_C.GetActorThreat // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceivePossess(struct APawn* PossessedPawn); // Function BP_IcarusNPCGOAPController.BP_IcarusNPCGOAPController_C.ReceivePossess // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_IcarusNPCGOAPController(int32_t EntryPoint); // Function BP_IcarusNPCGOAPController.BP_IcarusNPCGOAPController_C.ExecuteUbergraph_BP_IcarusNPCGOAPController // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

