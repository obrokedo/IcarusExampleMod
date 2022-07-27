// WidgetBlueprintGeneratedClass UMG_ArmourHealth.UMG_ArmourHealth_C
// Size: 0x420 (Inherited: 0x260)
struct UUMG_ArmourHealth_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* BrokenFlashing; // 0x268(0x08)
	struct UImage* ArmourPiece; // 0x270(0x08)
	struct FSlateBrush Healthy; // 0x278(0x88)
	struct FSlateBrush damaged; // 0x300(0x88)
	struct FSlateBrush Broken; // 0x388(0x88)
	int32_t ArmourDurability; // 0x410(0x04)
	float HealthyArmourThreshold; // 0x414(0x04)
	float DamagedArmourThreshold; // 0x418(0x04)
	float BrokenArmourThreshold; // 0x41c(0x04)

	void SetArmourHealth(float ArmourDurability); // Function UMG_ArmourHealth.UMG_ArmourHealth_C.SetArmourHealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetArmourVisuals(enum class E_ArmourHealth ArmourHealth); // Function UMG_ArmourHealth.UMG_ArmourHealth_C.SetArmourVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function UMG_ArmourHealth.UMG_ArmourHealth_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_ArmourHealth.UMG_ArmourHealth_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_ArmourHealth(int32_t EntryPoint); // Function UMG_ArmourHealth.UMG_ArmourHealth_C.ExecuteUbergraph_UMG_ArmourHealth // (Final|UbergraphFunction) // @ game+0x1be0000
};

