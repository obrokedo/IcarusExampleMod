// BlueprintGeneratedClass BP_Torch_Floor.BP_Torch_Floor_C
// Size: 0x630 (Inherited: 0x5c3)
struct ABP_Torch_Floor_C : ABP_DeployableBase_C {
	char pad_5C3[0x5]; // 0x5c3(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c8(0x08)
	struct UFMODAudioComponent* FMODAudioExtinguishFlame; // 0x5d0(0x08)
	struct UNiagaraComponent* NS_Torch_FX; // 0x5d8(0x08)
	struct UPointLightComponent* PointLight_ShadowCaster; // 0x5e0(0x08)
	struct UPointLightComponent* PointLight_Fill; // 0x5e8(0x08)
	struct USceneComponent* Scene_Niagara; // 0x5f0(0x08)
	struct USceneComponent* Scene_Lights; // 0x5f8(0x08)
	struct UStaticMeshComponent* SM_TorchRag_FireShell; // 0x600(0x08)
	struct UCapsuleComponent* FireSettingCapsule; // 0x608(0x08)
	struct UStaticMeshComponent* SM_ITM_Torch_Rag; // 0x610(0x08)
	struct UFMODAudioComponent* FMODAudio; // 0x618(0x08)
	struct UInventory* FuelInventory; // 0x620(0x08)
	struct UFMODEvent* Extinguish; // 0x628(0x08)

	void UpdateVFX(bool Active); // Function BP_Torch_Floor.BP_Torch_Floor_C.UpdateVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GetWidgetClass(struct UUserWidget*& Widget); // Function BP_Torch_Floor.BP_Torch_Floor_C.GetWidgetClass // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void GeneratorStateUpdate(bool Active); // Function BP_Torch_Floor.BP_Torch_Floor_C.GeneratorStateUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PlayAddFuelSound(); // Function BP_Torch_Floor.BP_Torch_Floor_C.PlayAddFuelSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void AddFuel(struct AActor* Instigator); // Function BP_Torch_Floor.BP_Torch_Floor_C.AddFuel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Toggle(); // Function BP_Torch_Floor.BP_Torch_Floor_C.Toggle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ReceiveBeginPlay(); // Function BP_Torch_Floor.BP_Torch_Floor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1be0000
	void Multi_OnAddedFuel(struct AActor* Instigator); // Function BP_Torch_Floor.BP_Torch_Floor_C.Multi_OnAddedFuel // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HighlightChanged(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // Function BP_Torch_Floor.BP_Torch_Floor_C.HighlightChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_BP_Torch_Floor(int32_t EntryPoint); // Function BP_Torch_Floor.BP_Torch_Floor_C.ExecuteUbergraph_BP_Torch_Floor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

