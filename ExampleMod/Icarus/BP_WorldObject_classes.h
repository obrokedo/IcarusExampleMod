// BlueprintGeneratedClass BP_WorldObject.BP_WorldObject_C
// Size: 0x301 (Inherited: 0x2b0)
struct ABP_WorldObject_C : AIcarusActor {
	struct USceneComponent* InteractAudioLocation; // 0x2b0(0x08)
	struct UInteractableComponent* Interactable; // 0x2b8(0x08)
	struct UStaticMeshComponent* SM_ObjectMesh; // 0x2c0(0x08)
	struct USkeletalMeshComponent* SK_ObjectMesh; // 0x2c8(0x08)
	struct UHighlightableComponent* Highlightable; // 0x2d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d8(0x08)
	struct FMulticastInlineDelegate WorldInteract; // 0x2e0(0x10)
	bool WasInteracted; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct UFMODEvent* InteractSound; // 0x2f8(0x08)
	bool CanInteractSoundRepeat; // 0x300(0x01)

	void Play Interact Sound(); // Function BP_WorldObject.BP_WorldObject_C.Play Interact Sound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnInteract(); // Function BP_WorldObject.BP_WorldObject_C.OnInteract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_WasInteracted(); // Function BP_WorldObject.BP_WorldObject_C.OnRep_WasInteracted // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WorldObject_Held_Interact(struct AActor* Instigator); // Function BP_WorldObject.BP_WorldObject_C.WorldObject_Held_Interact // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WorldObject_Interact(struct AActor* Instigator); // Function BP_WorldObject.BP_WorldObject_C.WorldObject_Interact // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WorldInteract__DelegateSignature(); // Function BP_WorldObject.BP_WorldObject_C.WorldInteract__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

