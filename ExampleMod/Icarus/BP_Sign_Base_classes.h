// BlueprintGeneratedClass BP_Sign_Base.BP_Sign_Base_C
// Size: 0x5fc (Inherited: 0x5c3)
struct ABP_Sign_Base_C : ABP_DeployableBase_C {
	char pad_5C3[0x5]; // 0x5c3(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c8(0x08)
	struct UWidgetComponent* Widget_SignDisplay; // 0x5d0(0x08)
	struct UCameraComponent* Camera; // 0x5d8(0x08)
	struct FText Text; // 0x5e0(0x18)
	int32_t MaxCharacters; // 0x5f8(0x04)

	struct FText GetSignText(); // Function BP_Sign_Base.BP_Sign_Base_C.GetSignText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1be0000
	void Deployable_Interact(struct AActor* Interactor); // Function BP_Sign_Base.BP_Sign_Base_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void OnRep_Text(); // Function BP_Sign_Base.BP_Sign_Base_C.OnRep_Text // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void UpdateTextRender(struct FText& Text); // Function BP_Sign_Base.BP_Sign_Base_C.UpdateTextRender // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetSignText(struct FText& Text); // Function BP_Sign_Base.BP_Sign_Base_C.SetSignText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Sign_Base(int32_t EntryPoint); // Function BP_Sign_Base.BP_Sign_Base_C.ExecuteUbergraph_BP_Sign_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

