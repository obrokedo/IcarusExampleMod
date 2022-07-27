#include "ExampleMod.h"
#include "Utilities/MinHook.h"
#include "Icarus.h"

struct FPlayerCharacterID {
	struct UE4::FString PlayerID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

void sortInventory(UE4::UObject* inventory);
void respawnChar(UE4::AActor* player, UE4::APlayerController* playerController);
void returnToShip(UE4::AActor* player, UE4::APlayerController* playerController);
void directSort(UE4::AActor* player, UE4::APlayerController* playerController);

BPFUNCTION(WriteToFile)
{
	// Log::SetupMessage("Done!", "WRITE TO FILE!");
	std::cout << "WriteToFile" << std::endl;
	/*
	struct InputParams
	{
		UE4::FString NameTest;
	};
	auto Inputs = stack->GetInputParams<InputParams>();
	stack->SetOutput<UE4::FString>("OutputString", L"KboyGang");
	stack->SetOutput<bool>("ReturnValue", true);

	auto GameplayStatics = UE4::UObject::GetDefaultObjectFromArray<UE4::UGameplayStatics>(UE4::UGameplayStatics::StaticClass());
	std::vector<UE4::AActor*> actors = UE4::UObject::GetAllObjectsOfType<UE4::AActor>(UE4::AActor::StaticClass(), true);
	UE4::AActor* player = NULL;
	UE4::AActor* ship = NULL;
	for (size_t i = 0; i < actors.size(); i++)
	{
		UE4::AActor* actor = actors[i];
		if (actor->GetOuter()->GetClass() == UE4::ULevel::StaticClass())
		{
			if (actor->GetName().rfind("BP_IcarusDropShipSpawn", 0) == 0) {
				ship = actor;
			}
		}
	}
	
	*/

	UE4::APlayerController* playerController = UE4::UGameplayStatics::GetPlayerController(0);	
	printf("Player Controler %s\n", playerController->GetFullName().c_str());
	
	UE4::AActor* player = UE4::UGameplayStatics::GetPlayerPawn(0);
	printf("Player  %s\n", player->GetFullName().c_str());
	
	directSort(player, playerController);
}

void directSort(UE4::AActor* player, UE4::APlayerController* playerController) {
	printf("Retrieving inventory\n\n");
	auto inventory = *reinterpret_cast<UE4::UObject**>((byte*)player + 0x5d0);

	inventory->CallFunctionByNameWithArguments(L"SortByWeight", nullptr, NULL, true);
	printf("Direct sort\n\n");
}

void returnToShip(UE4::AActor* player, UE4::APlayerController* playerController) {
	playerController->CallFunctionByNameWithArguments(L"Server_UnstuckAtRespawnShip", nullptr, NULL, true);
}

void respawnChar(UE4::AActor* player, UE4::APlayerController* playerController) {
	auto grave = *reinterpret_cast<UE4::AActor**>((byte*)playerController + 0x868);

	// void ServerAttemptRevive(struct AGravestoneBase* Gravestone); // Function Icarus.IcarusPlayerControllerSurvival.ServerAttemptRevive // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x17653e0
	static auto fn = UE4::UObject::FindObject<UE4::UFunction>("Function Icarus.IcarusPlayerControllerSurvival.ServerAttemptRevive");

	struct
	{
		struct UE4::AActor* grave;
		char pads[50];
	} params;
	params.grave = grave;
	// printf("%s\n", grave.GetClass()->GetName().c_str());
	printf("Grave name %s\n", grave->GetFullName().c_str());
	if (fn == NULL) {
		printf("Function is not defined\n");
	}
	else
	{
		printf("Function %s\n", fn->GetFullName().c_str());
		playerController->ProcessEvent(fn, &params);
	}
}


struct FItemData getItemInInventory(int32_t Location, UE4::UObject* inventory)
{
	auto totalWeight = *reinterpret_cast<int32_t*>((byte*)inventory + 0xe0);
	printf("Got total weight %d\n", totalWeight);


	printf("Printing Inventory: %s\n", inventory->GetFullName().c_str());

	struct FItemData itemData;

	printf("Getting item in inventory\n");
	static auto fn = UE4::UObject::FindObject<UE4::UFunction>("Function Icarus.Inventory.GetItem");	
	if (fn != NULL && inventory != NULL) {
		printf("Values are not null, continuing\n");
		struct
		{
			int32_t Location;
			struct FItemData ReturnValue;
		} params;
		params.Location = Location;
		inventory->ProcessEvent(fn, &params);
		printf("Getting item in inventory return\n");
		return params.ReturnValue;
	}
	else {
		printf("VALUES ARE NULL STOPPING\n");
	}
	
	return itemData;
}

void setItemInInventory(int32_t Location, struct FItemData item, UE4::UObject* inventory)
{
	printf("Setting item in inventory\n");
	static auto fn = UE4::UObject::FindObject<UE4::UFunction>("Function Icarus.Inventory.SetItem");
	
	struct
	{
		int32_t Location;
		struct FItemData item;
		UE4::UObject ReturnValue;
	} params;
	params.Location = Location;
	params.item = item;
	inventory->ProcessEvent(fn, &params);	
	printf("Setting item in inventory return\n");
}

void sortInventory(UE4::UObject* inventory2) {
	// ScriptStruct Icarus.InventorySlotsFastArray
	// Size: 0x158 (Inherited: 0x108)
	/*
	struct FInventorySlotsFastArray : FFastArraySerializer {
		struct TArray<struct FInventorySlot> Slots; // 0x108(0x10)
		char pad_118[0x40]; // 0x118(0x40)
	};
	*/


	// Class Icarus.Inventory
	// Size: 0x2c0 (Inherited: 0xc0)
	/*
	struct UInventory : UTraitBehaviour {
		struct FMulticastInlineDelegate OnInventoryItemChanged; // 0xc0(0x10)
		struct FMulticastInlineDelegate OnAllInventoryItemsChanged; // 0xd0(0x10)
		int32_t CurrentWeight; // 0xe0(0x04)
		char pad_E4[0x4]; // 0xe4(0x04)
		struct FInventorySlotsFastArray Slots; // 0xe8(0x158)
		struct FTransform OverflowSpawnTransform; // 0x240(0x30)
		struct TArray<struct FItemData> InitialItems; // 0x270(0x10)
		struct FMulticastSparseDelegate OnItemAdded; // 0x280(0x01)
		struct FMulticastSparseDelegate OnItemRemoved; // 0x281(0x01)
		struct FMulticastSparseDelegate OnItemRemovedVerbose; // 0x282(0x01)
		struct FMulticastSparseDelegate Client_OnItemsUpdated; // 0x283(0x01)
		struct FMulticastSparseDelegate OnWeightUpdated; // 0x284(0x01)
		struct FMulticastSparseDelegate SlotCountChange; // 0x285(0x01)
		struct FMulticastSparseDelegate SlotsUpdated; // 0x286(0x01)
		struct FMulticastSparseDelegate OnDroppingOverflowItem; // 0x287(0x01)
		struct FMulticastSparseDelegate OnItemBroke; // 0x288(0x01)
		char pad_289[0x3]; // 0x289(0x03)
		struct FInventoryInfoRowHandle InventoryInfoRowHandle; // 0x28c(0x18)
		char pad_2A4[0x1c]; // 0x2a4(0x1c)

		bool TransferInventory(struct UInventory* Other); // Function Icarus.Inventory.TransferInventory // (Final|Native|Public|BlueprintCallable) // @ game+0x1781230
		void SortByWeight(); // Function Icarus.Inventory.SortByWeight // (Final|Native|Private) // @ game+0x1781150
		*/

		// Class Icarus.IcarusPlayerCharacter
		// Size: 0xa30 (Inherited: 0x5c0)
		/*
			struct AIcarusPlayerCharacter : AIcarusCharacter {
				float NextAllowedInteractTime; // 0x5c0(0x04)
				struct FMulticastSparseDelegate OnFocusedItemUpdated; // 0x5c4(0x01)
				char pad_5C5[0x3]; // 0x5c5(0x03)
				struct UInventoryComponent* InventoryComponent; // 0x5c8(0x08)
				struct UInventory* EquipmentInventory; // 0x5d0(0x08)
		*/

	UE4::AActor* player = UE4::UGameplayStatics::GetPlayerPawn(0);
	/*
	printf("Retrieving inventory\n\n");
	if (inventory2 != NULL) {
		printf("Printing Inventory from param: %s\n", inventory2->GetFullName().c_str());
	}
	else {
		printf("Inventory from param is null\n");
	}
	*/

	// struct UInventory* BackpackInventory; // 0xaa8(0x08)
	auto inventory = *reinterpret_cast<UE4::UObject**>((byte*)player + 0xaa8);
	printf("Did we get inventory?\n");
	if (inventory != NULL) {
		printf("Printing Inventory: %s\n", inventory->GetFullName().c_str());
		
		auto totalWeight = *reinterpret_cast<int32_t*>((byte*)inventory + 0xe0);
		printf("Got total weight %d\n", totalWeight);

		printf("Retrieved inventory\n\n");
		auto slots = reinterpret_cast<UE4::UObject*>((byte*) inventory + 0xe8);
		if (slots != NULL) {
			// printf("Printing FInventorySlotsFastArray: %s\n", slots->GetFullName().c_str());
			auto slotsArray = reinterpret_cast<UE4::TArray<UE4::UObject>*>((byte*)slots + 0x108);
			if (slotsArray != NULL) {
				printf("Printing TArray Count: %d\n", slotsArray->Count);
				auto slotsArrayDeref = *slotsArray;
				UE4::UObject first = slotsArrayDeref[0];
				slotsArrayDeref[0] = slotsArrayDeref[1];
				slotsArrayDeref[1] = first;
			}
			else {
				printf("SLOTS ARRAY IS NULL\n");
			}
		}
		else {
			printf("SLOTS IS NULL\n");
		}
		/*
		auto item1 = getItemInInventory(1, inventory);		
		auto item2 = getItemInInventory(2, inventory);
		setItemInInventory(1, item2, inventory);
		setItemInInventory(2, item1, inventory);
		*/
		
	}
	else {
		printf("NO INVENTORY PASSED IN\n");
	}
}

PVOID(*origSortItems)(UE4::UObject* networkProxyComponent, UE4::UObject* inventory);
PVOID hookSortItems(UE4::UObject* networkProxyComponent, UE4::UObject* inventory)
{
	printf("Made it in to hook!!!!!!!!!!!!\n");
	
	// sortInventory(inventory);
	// struct AIcarusPlayerController* GetIcarusPlayerController(); // Function Icarus.IcarusPlayerCharacter.GetIcarusPlayerController // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1757080

	/*
	UE4::APlayerController* playerController = UE4::UGameplayStatics::GetPlayerController(0);
	printf("Player Controller %s\n", playerController->GetFullName().c_str());

	UE4::AActor* player = UE4::UGameplayStatics::GetPlayerPawn(0);
	printf("Player  %s\n", player->GetFullName().c_str());

	printf("Getting the controller\n");
	static auto fn = UE4::UObject::FindObject<UE4::UFunction>("Function Icarus.IcarusPlayerCharacter.GetIcarusPlayerController");

	struct
	{
		UE4::AActor * ReturnValue;
	} params;
	
	player->ProcessEvent(fn, &params);
	printf("Got controller\n");
	printf("Retrieved Player Controller %s\n", params.ReturnValue->GetFullName().c_str());


	sortInventory(params.ReturnValue);
	*/
	return origSortItems(networkProxyComponent, inventory);
}

// Only Called Once, if you need to hook shit, declare some global non changing values
void ExampleMod::InitializeMod()
{
	printf("Initializing my mod ZACH\n\n\n\n\n");
	UE4::InitSDK();
	SetupHooks();

	REGISTER_FUNCTION(WriteToFile);

	// Global::GetGlobals()->eventSystem.registerEvent(new Event<UE4::UObject*>("SortByWeight", &sortInventory));

	MinHook::Init(); //Uncomment if you plan to do hooks
	static auto fn = UE4::UObject::FindObject<UE4::UFunction>("Function Icarus.Inventory.SortByWeight");
	// static auto fn = UE4::UObject::FindObject<UE4::UFunction>("Function Icarus.NetworkProxyComponent.Proxy_SortInventory");
	if (fn != NULL) {
		printf("Found function SortByWeight\n");
		MinHook::Add((DWORD_PTR) &fn, &hookSortItems, &origSortItems, "SortByWeight");
		
		if (MH_CreateHook(fn->GetFunction(), &hookSortItems, reinterpret_cast<LPVOID*>(&origSortItems)) != MH_OK)
		{
			Log::Error("Failed to create hook: %s", "Your dumb shit");
			return;
		}

		if (MH_EnableHook(fn->GetFunction()) != MH_OK)
		{
			Log::Error("Failed to enable hook: %s", "Your dumb shit");
			return;
		}
		Log::Info("Added hook: %s", "Your dumb shit");
		
		printf("Supposedly added hook?!?!?!?\n\n\n");
	}
	else {
		printf("Could not find the function?\n\n\n");
	}
	//UseMenuButton = true; // Allows Mod Loader To Show Button
}

void ExampleMod::InitGameState()
{
}

void ExampleMod::BeginPlay(UE4::AActor* Actor)
{
}

void ExampleMod::PostBeginPlay(std::wstring ModActorName, UE4::AActor* Actor)
{
	// Filters Out All Mod Actors Not Related To Your Mod
	std::wstring TmpModName(ModName.begin(), ModName.end());
	if (ModActorName == TmpModName)
	{
		//Sets ModActor Ref
		ModActor = Actor;
	}
}

void ExampleMod::DX11Present(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, ID3D11RenderTargetView* pRenderTargetView)
{
}

void ExampleMod::OnModMenuButtonPressed()
{
}

void ExampleMod::DrawImGui()
{
}