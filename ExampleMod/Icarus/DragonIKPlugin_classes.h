// Class DragonIKPlugin.DragonIK_Library
// Size: 0x30 (Inherited: 0x28)
struct UDragonIK_Library : UObject {
	char pad_28[0x8]; // 0x28(0x08)

	struct FTransform QuatLookXatLocation(struct FTransform& LookAtFromTransform, struct FVector& LookAtTarget); // Function DragonIKPlugin.DragonIK_Library.QuatLookXatLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xb8f890
	struct FRotator LookAtVector_V2(struct FVector Source_Location, struct FVector lookAt, struct FVector upDirection); // Function DragonIKPlugin.DragonIK_Library.LookAtVector_V2 // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xb8f740
	struct FRotator LookAtRotation_V3(struct FVector Source, struct FVector Target, struct FVector UpVector); // Function DragonIKPlugin.DragonIK_Library.LookAtRotation_V3 // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xb8f5f0
	struct FRotator CustomLookRotation(struct FVector lookAt, struct FVector upDirection); // Function DragonIKPlugin.DragonIK_Library.CustomLookRotation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xb8f4f0
};

