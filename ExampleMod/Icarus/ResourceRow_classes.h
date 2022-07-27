// WidgetBlueprintGeneratedClass ResourceRow.ResourceRow_C
// Size: 0x289 (Inherited: 0x260)
struct UResourceRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_57; // 0x268(0x08)
	struct FText ResourceName; // 0x270(0x18)
	enum class EIcarusResourceType ResourceType; // 0x288(0x01)

	void SetResource(enum class EIcarusResourceType ResourceType); // Function ResourceRow.ResourceRow_C.SetResource // (BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ExecuteUbergraph_ResourceRow(int32_t EntryPoint); // Function ResourceRow.ResourceRow_C.ExecuteUbergraph_ResourceRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1be0000
};

