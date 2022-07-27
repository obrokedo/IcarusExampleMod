// WidgetBlueprintGeneratedClass W_CameraEntry_GenericSlider.W_CameraEntry_GenericSlider_C
// Size: 0x2e0 (Inherited: 0x2cd)
struct UW_CameraEntry_GenericSlider_C : UW_PostProcessEntry_Slider_C {
	char pad_2CD[0x3]; // 0x2cd(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	float MinValue; // 0x2d8(0x04)
	float MaxValue; // 0x2dc(0x04)

	void SetupSliderValues(); // Function W_CameraEntry_GenericSlider.W_CameraEntry_GenericSlider_C.SetupSliderValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitFromSaveGameValue(struct FFPostProcessSaveData Value); // Function W_CameraEntry_GenericSlider.W_CameraEntry_GenericSlider_C.InitFromSaveGameValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void InitFromDefaultValue(); // Function W_CameraEntry_GenericSlider.W_CameraEntry_GenericSlider_C.InitFromDefaultValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void PreConstruct(bool IsDesignTime); // Function W_CameraEntry_GenericSlider.W_CameraEntry_GenericSlider_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_W_CameraEntry_GenericSlider(int32_t EntryPoint); // Function W_CameraEntry_GenericSlider.W_CameraEntry_GenericSlider_C.ExecuteUbergraph_W_CameraEntry_GenericSlider // (Final|UbergraphFunction) // @ game+0x1be0000
};

