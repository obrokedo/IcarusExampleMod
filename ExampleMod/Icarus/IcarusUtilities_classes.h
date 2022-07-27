// Class IcarusUtilities.RowLibrary
// Size: 0x28 (Inherited: 0x28)
struct URowLibrary : UBlueprintFunctionLibrary {

	bool IsRowHandleValid(struct FRowHandle& RowHandle); // Function IcarusUtilities.RowLibrary.IsRowHandleValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x37bbd30
	bool IsRowHandleNone(struct FRowHandle& RowHandle); // Function IcarusUtilities.RowLibrary.IsRowHandleNone // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x37bbc90
	bool IsRowEnumValid(struct FRowEnum& Enum); // Function IcarusUtilities.RowLibrary.IsRowEnumValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x37bbbf0
	bool IsRowEnumNone(struct FRowEnum& Enum); // Function IcarusUtilities.RowLibrary.IsRowEnumNone // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x37bbb50
	int32_t GetRowIndex(struct FRowHandle& Row); // Function IcarusUtilities.RowLibrary.GetRowIndex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x37bbab0
	struct FRowMetadata GetMetadata(struct FRowHandle RowHandle); // Function IcarusUtilities.RowLibrary.GetMetadata // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37bb910
	struct FFeatureLevelsRowHandle GetFeatureLevel(struct FRowHandle RowHandle); // Function IcarusUtilities.RowLibrary.GetFeatureLevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37bb850
	struct FName GetDataTableName(struct FRowHandle RowHandle); // Function IcarusUtilities.RowLibrary.GetDataTableName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37bb7a0
	struct UIcarusDataTable* GetDataTableForEdit(struct FRowHandle RowHandle); // Function IcarusUtilities.RowLibrary.GetDataTableForEdit // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37bb6f0
	struct UIcarusDataTable* GetDataTable(struct FRowHandle RowHandle); // Function IcarusUtilities.RowLibrary.GetDataTable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37bb640
	bool EqualEqual_FRowHandleFRowHandle(struct FRowHandle RowHandleA, struct FRowHandle RowHandleB); // Function IcarusUtilities.RowLibrary.EqualEqual_FRowHandleFRowHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37bb530
};

// Class IcarusUtilities.IcarusDataTable
// Size: 0xb8 (Inherited: 0xb0)
struct UIcarusDataTable : UDataTable {
	struct UIcarusMetaTable* MetaTable; // 0xb0(0x08)
};

// Class IcarusUtilities.FeatureLevelsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFeatureLevelsLibrary : URowLibrary {

	struct FFeatureLevelsRowHandle StructToRowHandle(struct FFeatureLevelsEnum EnumValue); // Function IcarusUtilities.FeatureLevelsLibrary.StructToRowHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37b92d0
	struct FName StructToName(struct FFeatureLevelsEnum EnumValue); // Function IcarusUtilities.FeatureLevelsLibrary.StructToName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37b9230
	int32_t StructToInt(struct FFeatureLevelsEnum EnumValue); // Function IcarusUtilities.FeatureLevelsLibrary.StructToInt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37b9190
	struct FFeatureLevelsEnum RowHandleToStruct(struct FFeatureLevelsRowHandle RowHandle); // Function IcarusUtilities.FeatureLevelsLibrary.RowHandleToStruct // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37b90d0
	void RemoveRowFromFeatureLevelsTable(struct FName Name); // Function IcarusUtilities.FeatureLevelsLibrary.RemoveRowFromFeatureLevelsTable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x37b9050
	void RefreshConstants(); // Function IcarusUtilities.FeatureLevelsLibrary.RefreshConstants // (Final|Native|Static|Public) // @ game+0x37b9030
	int32_t NumRows(); // Function IcarusUtilities.FeatureLevelsLibrary.NumRows // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37b9000
	bool NotEqual_EnumName(struct FFeatureLevelsEnum A, struct FName B); // Function IcarusUtilities.FeatureLevelsLibrary.NotEqual_EnumName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37b8f10
	bool NotEqual_EnumEnum(struct FFeatureLevelsEnum A, struct FFeatureLevelsEnum B); // Function IcarusUtilities.FeatureLevelsLibrary.NotEqual_EnumEnum // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37b8e20
	struct FFeatureLevelsEnum NameToStruct(struct FName NameValue); // Function IcarusUtilities.FeatureLevelsLibrary.NameToStruct // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37b8d90
	int32_t NameToInt(struct FName NameValue); // Function IcarusUtilities.FeatureLevelsLibrary.NameToInt // (Final|Native|Static|Public) // @ game+0x37b8d00
	struct FFeatureLevelsRowHandle MakeLiteralFeatureLevels(struct FFeatureLevelsRowHandle RowHandle); // Function IcarusUtilities.FeatureLevelsLibrary.MakeLiteralFeatureLevels // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37b8c30
	struct FFeatureLevelsRowHandle MakeFeatureLevelsFromIndex(int32_t Index); // Function IcarusUtilities.FeatureLevelsLibrary.MakeFeatureLevelsFromIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37b8ba0
	struct FFeatureLevelsEnum MakeFeatureLevelsEnum(struct FFeatureLevelsEnum Enum); // Function IcarusUtilities.FeatureLevelsLibrary.MakeFeatureLevelsEnum // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37b8b20
	struct FFeatureLevelsRowHandle MakeFeatureLevels(struct FName RowName); // Function IcarusUtilities.FeatureLevelsLibrary.MakeFeatureLevels // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37b8a80
	bool IsValidName(struct FName NameValue); // Function IcarusUtilities.FeatureLevelsLibrary.IsValidName // (Final|Native|Static|Public) // @ game+0x37b89f0
	struct FFeatureLevelsEnum IntToStruct(int32_t IntValue); // Function IcarusUtilities.FeatureLevelsLibrary.IntToStruct // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37b8960
	struct FName IntToName(int32_t IntValue); // Function IcarusUtilities.FeatureLevelsLibrary.IntToName // (Final|Native|Static|Public) // @ game+0x37b88d0
	void GetFeatureLevelsStruct(struct FFeatureLevelsRowHandle RowHandle, struct FFeatureLevelData& FeatureLevels, enum class EValid& Paths); // Function IcarusUtilities.FeatureLevelsLibrary.GetFeatureLevelsStruct // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x37b86b0
	bool EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle(struct FFeatureLevelsRowHandle RowHandleA, struct FFeatureLevelsRowHandle RowHandleB); // Function IcarusUtilities.FeatureLevelsLibrary.EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37b8570
	bool EqualEqual_EnumEnum(struct FFeatureLevelsEnum A, struct FFeatureLevelsEnum B); // Function IcarusUtilities.FeatureLevelsLibrary.EqualEqual_EnumEnum // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37b8480
	struct FFeatureLevelsRowHandle CastToFeatureLevelsRowHandle(struct FRowHandle RowHandle, enum class EValid& Paths); // Function IcarusUtilities.FeatureLevelsLibrary.CastToFeatureLevelsRowHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x37b8360
	void BreakFeatureLevelsEnum(struct FFeatureLevelsEnum Enum, struct FName& Name, int32_t& Index); // Function IcarusUtilities.FeatureLevelsLibrary.BreakFeatureLevelsEnum // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x37b8200
	void AddRowToFeatureLevelsTable(struct FName Name, struct FFeatureLevelData Data, struct FFeatureLevelsRowHandle& NewRow, bool bOverrideExistingRow); // Function IcarusUtilities.FeatureLevelsLibrary.AddRowToFeatureLevelsTable // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x37b7eb0
};

// Class IcarusUtilities.FeatureLevelsTable
// Size: 0xb8 (Inherited: 0xb8)
struct UFeatureLevelsTable : UIcarusDataTable {
};

// Class IcarusUtilities.IcarusContainerLibrary
// Size: 0x28 (Inherited: 0x28)
struct UIcarusContainerLibrary : UBlueprintFunctionLibrary {
};

// Class IcarusUtilities.IcarusFeatureLevelFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UIcarusFeatureLevelFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsFeatureLevelEnabled(struct FFeatureLevelsRowHandle InFeatureLevel); // Function IcarusUtilities.IcarusFeatureLevelFunctionLibrary.IsFeatureLevelEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37b99f0
	struct FFeatureLevelsRowHandle GetCurrentFeatureLevel(); // Function IcarusUtilities.IcarusFeatureLevelFunctionLibrary.GetCurrentFeatureLevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37b99b0
};

// Class IcarusUtilities.IcarusHashesFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UIcarusHashesFunctionLibrary : UBlueprintFunctionLibrary {

	int32_t NameToHash(struct FName& Name); // Function IcarusUtilities.IcarusHashesFunctionLibrary.NameToHash // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x37b9cc0
	struct FName HashToName(int32_t Hash); // Function IcarusUtilities.IcarusHashesFunctionLibrary.HashToName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37b9c30
};

// Class IcarusUtilities.IcarusMetaTable
// Size: 0xb0 (Inherited: 0xb0)
struct UIcarusMetaTable : UDataTable {
};

// Class IcarusUtilities.IcarusStringFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UIcarusStringFunctionLibrary : UBlueprintFunctionLibrary {

	struct TArray<struct FString> ParseIntoLines(struct FString MultiLineInput); // Function IcarusUtilities.IcarusStringFunctionLibrary.ParseIntoLines // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37ba500
	bool LexicalLess_Text(struct FText& TextA, struct FText& TextB); // Function IcarusUtilities.IcarusStringFunctionLibrary.LexicalLess_Text // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x37ba390
	bool LexicalLess_String(struct FString StringA, struct FString StringB); // Function IcarusUtilities.IcarusStringFunctionLibrary.LexicalLess_String // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37ba2a0
	bool LexicalLess_Name(struct FName& NameA, struct FName& NameB); // Function IcarusUtilities.IcarusStringFunctionLibrary.LexicalLess_Name // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x37ba1c0
	bool FastLess_Name(struct FName& NameA, struct FName& NameB); // Function IcarusUtilities.IcarusStringFunctionLibrary.FastLess_Name // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x37ba0e0
};

// Class IcarusUtilities.LessInterface
// Size: 0x28 (Inherited: 0x28)
struct ULessInterface : UInterface {

	bool LessThan(struct UObject* Other); // Function IcarusUtilities.LessInterface.LessThan // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x37ba9e0
};

// Class IcarusUtilities.PanningPanel
// Size: 0x638 (Inherited: 0x120)
struct UPanningPanel : UPanelWidget {
	char pad_120[0x10]; // 0x120(0x10)
	struct FScrollBarStyle ScrollBarStyle; // 0x130(0x4d0)
	enum class EPanningDirection PanningDirection; // 0x600(0x01)
	char pad_601[0x3]; // 0x601(0x03)
	struct FVector2D ScrollBarThickness; // 0x604(0x08)
	struct FVector2D ScrollbarPadding; // 0x60c(0x08)
	struct FVector2D Size; // 0x614(0x08)
	struct FVector2D ZoomRange; // 0x61c(0x08)
	float ZoomOverride; // 0x624(0x04)
	struct FVector2D PositionOverride; // 0x628(0x08)
	bool bAllowScroll; // 0x630(0x01)
	char pad_631[0x3]; // 0x631(0x03)
	int32_t OverscrollAmount; // 0x634(0x04)

	void SetZoomOverride(float Value); // Function IcarusUtilities.PanningPanel.SetZoomOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x37baf10
	void SetPositionOverride(struct FVector2D position); // Function IcarusUtilities.PanningPanel.SetPositionOverride // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x37bae90
	void Refresh(); // Function IcarusUtilities.PanningPanel.Refresh // (Final|Native|Public|BlueprintCallable) // @ game+0x37bae70
	struct FVector2D GetPosition(); // Function IcarusUtilities.PanningPanel.GetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x37bae30
	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // Function IcarusUtilities.PanningPanel.AddChildToOverlay // (Final|Native|Public|BlueprintCallable) // @ game+0x2c5da10
};

