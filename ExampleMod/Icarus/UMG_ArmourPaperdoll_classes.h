// WidgetBlueprintGeneratedClass UMG_ArmourPaperdoll.UMG_ArmourPaperdoll_C
// Size: 0x324 (Inherited: 0x260)
struct UUMG_ArmourPaperdoll_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UOverlay* MainOverlay; // 0x268(0x08)
	struct UUMG_ArmourHealth_C* UMG_ArmourHealth_ArmL; // 0x270(0x08)
	struct UUMG_ArmourHealth_C* UMG_ArmourHealth_ArmR; // 0x278(0x08)
	struct UUMG_ArmourHealth_C* UMG_ArmourHealth_Chest; // 0x280(0x08)
	struct UUMG_ArmourHealth_C* UMG_ArmourHealth_Feet; // 0x288(0x08)
	struct UUMG_ArmourHealth_C* UMG_ArmourHealth_Helmet; // 0x290(0x08)
	struct UUMG_ArmourHealth_C* UMG_ArmourHealth_Legs; // 0x298(0x08)
	enum class E_ArmourHealth EArmourHealth; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct FSlateColor HealthyOpacity; // 0x2a8(0x28)
	struct FSlateColor DamagedOpacity; // 0x2d0(0x28)
	struct FSlateColor BrokenOpacity; // 0x2f8(0x28)
	float DamgedArmourThreshold; // 0x320(0x04)

	void UpdateElement(int32_t Slot, float Durability); // Function UMG_ArmourPaperdoll.UMG_ArmourPaperdoll_C.UpdateElement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void SetPaperdollStyle(struct UInventory* EquipmentInventory); // Function UMG_ArmourPaperdoll.UMG_ArmourPaperdoll_C.SetPaperdollStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_ArmourPaperdoll.UMG_ArmourPaperdoll_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_ArmourPaperdoll(int32_t EntryPoint); // Function UMG_ArmourPaperdoll.UMG_ArmourPaperdoll_C.ExecuteUbergraph_UMG_ArmourPaperdoll // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

