#pragma once
#include "Mod/Mod.h"
// ScriptStruct IcarusEngineUtilities.IntEnum
// Size: 0x10 (Inherited: 0x00)
struct FIntEnum {
	char pad_0[0x8]; // 0x00(0x08)
	struct UE4::FName Value; // 0x08(0x08)
};

// ScriptStruct IcarusUtilities.RowEnum
// Size: 0x10 (Inherited: 0x10)
struct FRowEnum : FIntEnum {
};

// ScriptStruct Icarus.StatsEnum
// Size: 0x10 (Inherited: 0x10)
struct FStatsEnum : FRowEnum {
};

// ScriptStruct Icarus.IcarusStatReplicated
// Size: 0x18 (Inherited: 0x00)
struct FIcarusStatReplicated {
	struct FStatsEnum Stat; // 0x00(0x10)
	int32_t Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};


// ScriptStruct Engine.TableRowBase
// Size: 0x08 (Inherited: 0x00)
struct FTableRowBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct IcarusUtilities.IcarusTableRowBase
// Size: 0x18 (Inherited: 0x08)
struct FIcarusTableRowBase : FTableRowBase {
	struct UE4::TArray<struct UE4::UObject*> CachedHardReferences; // 0x08(0x10)
};


// ScriptStruct Icarus.ItemStats
// Size: 0x30 (Inherited: 0x00)
struct FItemStats {
	struct UE4::TArray<struct FIcarusStatReplicated> StaticWorldStats; // 0x00(0x10)
	struct UE4::TArray<struct FIcarusStatReplicated> StaticWorldHeldStats; // 0x10(0x10)
	struct UE4::TArray<struct FIcarusStatReplicated> AdditionalStats; // 0x20(0x10)
};

// ScriptStruct Icarus.ItemData
// Size: 0xa0 (Inherited: 0x18)
struct FItemData : FIcarusTableRowBase {
	char undefined1[0x18];
	// struct FItemsStaticRowHandle ItemStaticData; // 0x18(0x18)
	struct UE4::TArray<struct FItemDynamicData> ItemDynamicData; // 0x30(0x10)
	struct FItemStats ItemStats; // 0x40(0x30)
	struct UE4::FString DatabaseGUID; // 0x70(0x10)
	// struct FGameplayTagContainer RuntimeTags; // 0x80(0x20)
	char undefined2[0x20];
};


