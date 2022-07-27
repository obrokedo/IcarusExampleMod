// BlueprintGeneratedClass BP_Modifier_TemperatureClear.BP_Modifier_TemperatureClear_C
// Size: 0x381 (Inherited: 0x378)
struct UBP_Modifier_TemperatureClear_C : UBP_Modifier_Base_C {
	bool Healing; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	float HealTime; // 0x37c(0x04)
	bool HealingEnabled; // 0x380(0x01)

	void TemperatureUpdated(int32_t NewTemperature); // Function BP_Modifier_TemperatureClear.BP_Modifier_TemperatureClear_C.TemperatureUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void TriggerCheck(); // Function BP_Modifier_TemperatureClear.BP_Modifier_TemperatureClear_C.TriggerCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CanHeal(bool& CanHeal); // Function BP_Modifier_TemperatureClear.BP_Modifier_TemperatureClear_C.CanHeal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	bool ModifierApplied(); // Function BP_Modifier_TemperatureClear.BP_Modifier_TemperatureClear_C.ModifierApplied // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

