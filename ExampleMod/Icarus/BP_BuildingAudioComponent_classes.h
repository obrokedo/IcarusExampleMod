// BlueprintGeneratedClass BP_BuildingAudioComponent.BP_BuildingAudioComponent_C
// Size: 0x258 (Inherited: 0x200)
struct UBP_BuildingAudioComponent_C : USceneComponent {
	struct TMap<struct UFMODEvent*, struct UMultiPointAudioEmitter*> Emitters; // 0x200(0x50)
	struct UFMODEvent* FireAudioEvent; // 0x250(0x08)

	void GetFireAudioData(bool& HasFireAudio, float& Weighting, struct FVector& Location); // Function BP_BuildingAudioComponent.BP_BuildingAudioComponent_C.GetFireAudioData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RemoveUnzipAudioNode(struct USceneComponent* TargetComponent, struct UFMODEvent* FMODEvent); // Function BP_BuildingAudioComponent.BP_BuildingAudioComponent_C.RemoveUnzipAudioNode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddUnzipAudioNode(struct USceneComponent* TargetComponent, struct UFMODEvent* FMODEvent); // Function BP_BuildingAudioComponent.BP_BuildingAudioComponent_C.AddUnzipAudioNode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RemoveEmitterNode(struct UObject* NodeObject, struct UFMODEvent* FMODEvent); // Function BP_BuildingAudioComponent.BP_BuildingAudioComponent_C.RemoveEmitterNode // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddEmitterNode(struct UObject* NodeObject, struct UFMODEvent* FMODEvent); // Function BP_BuildingAudioComponent.BP_BuildingAudioComponent_C.AddEmitterNode // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RemoveFireAudioNode(struct UFlammableInstance* FlammableInstance); // Function BP_BuildingAudioComponent.BP_BuildingAudioComponent_C.RemoveFireAudioNode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddFireAudioNode(struct UFlammableInstance* FlammableInstance); // Function BP_BuildingAudioComponent.BP_BuildingAudioComponent_C.AddFireAudioNode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void RemoveWeatherAudio(struct UWeatherAudioComponent* WeatherAudioComponent, struct UFMODEvent* Event); // Function BP_BuildingAudioComponent.BP_BuildingAudioComponent_C.RemoveWeatherAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Add Weather Audio(struct UWeatherAudioComponent* WeatherAudioComponent, struct UFMODEvent* Event); // Function BP_BuildingAudioComponent.BP_BuildingAudioComponent_C.Add Weather Audio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

