// BlueprintGeneratedClass BP_Operable.BP_Operable_C
// Size: 0x340 (Inherited: 0x301)
struct ABP_Operable_C : ABP_WorldObject_C {
	char pad_301[0x7]; // 0x301(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UBP_InputCaptureComponent_C* BP_InputCaptureComponent; // 0x310(0x08)
	struct FMulticastInlineDelegate OnBeginInteract; // 0x318(0x10)
	struct FText InstructionsText; // 0x328(0x18)

	void EndInputCapture(struct UBP_InputCaptureComponent_C* CaptureComponent); // Function BP_Operable.BP_Operable_C.EndInputCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void WorldObject_Interact(struct AActor* Instigator); // Function BP_Operable.BP_Operable_C.WorldObject_Interact // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LookX(float Scale); // Function BP_Operable.BP_Operable_C.LookX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void LookY(float Scale); // Function BP_Operable.BP_Operable_C.LookY // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PrimaryFire(bool Press); // Function BP_Operable.BP_Operable_C.PrimaryFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AltFire(bool Press); // Function BP_Operable.BP_Operable_C.AltFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Jump(); // Function BP_Operable.BP_Operable_C.Jump // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void BndEvt__BP_InputCaptureComponent_K2Node_ComponentBoundEvent_1_OnEndInputCapture__DelegateSignature(struct UBP_InputCaptureComponent_C* CaptureComponent); // Function BP_Operable.BP_Operable_C.BndEvt__BP_InputCaptureComponent_K2Node_ComponentBoundEvent_1_OnEndInputCapture__DelegateSignature // (BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Operable(int32_t EntryPoint); // Function BP_Operable.BP_Operable_C.ExecuteUbergraph_BP_Operable // (Final|UbergraphFunction) // @ game+0x1be0000
	void OnBeginInteract__DelegateSignature(); // Function BP_Operable.BP_Operable_C.OnBeginInteract__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

