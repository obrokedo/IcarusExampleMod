// WidgetBlueprintGeneratedClass UMG_Hearing.UMG_Hearing_C
// Size: 0x309 (Inherited: 0x260)
struct UUMG_Hearing_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* HearingLevels; // 0x268(0x08)
	struct UImage* Hearing1; // 0x270(0x08)
	struct UImage* Hearing10; // 0x278(0x08)
	struct UImage* Hearing11; // 0x280(0x08)
	struct UImage* Hearing12; // 0x288(0x08)
	struct UImage* Hearing13; // 0x290(0x08)
	struct UImage* Hearing14; // 0x298(0x08)
	struct UImage* Hearing15; // 0x2a0(0x08)
	struct UImage* Hearing16; // 0x2a8(0x08)
	struct UImage* Hearing17; // 0x2b0(0x08)
	struct UImage* Hearing2; // 0x2b8(0x08)
	struct UImage* Hearing3; // 0x2c0(0x08)
	struct UImage* Hearing4; // 0x2c8(0x08)
	struct UImage* Hearing5; // 0x2d0(0x08)
	struct UImage* Hearing6; // 0x2d8(0x08)
	struct UImage* Hearing7; // 0x2e0(0x08)
	struct UImage* Hearing8; // 0x2e8(0x08)
	struct UImage* Hearing9; // 0x2f0(0x08)
	struct UImage* HearingBase; // 0x2f8(0x08)
	int32_t DetectionValue; // 0x300(0x04)
	float LerpedDetectionPercentage; // 0x304(0x04)
	bool WantsVisible; // 0x308(0x01)

	void UpdateDetectionValue(int32_t NewDetectionValue); // Function UMG_Hearing.UMG_Hearing_C.UpdateDetectionValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Hearing.UMG_Hearing_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void Construct(); // Function UMG_Hearing.UMG_Hearing_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_UMG_Hearing(int32_t EntryPoint); // Function UMG_Hearing.UMG_Hearing_C.ExecuteUbergraph_UMG_Hearing // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

