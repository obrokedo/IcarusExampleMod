// BlueprintGeneratedClass BPSessionFunctionLibrary.BPSessionFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UBPSessionFunctionLibrary_C : UBlueprintFunctionLibrary {

	void CalculateProspectState(struct FFProspectServerInfo& FProspectServerInfo, struct AIcarusPlayerController* Target, struct UObject* __WorldContext, enum class E_ProspectState& ProspectState); // Function BPSessionFunctionLibrary.BPSessionFunctionLibrary_C.CalculateProspectState // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HaveJoinedProspect(struct FString UserID, struct TArray<struct FAssociatedMemberInfo>& Members, struct UObject* __WorldContext, bool& AssignedToProspect, enum class EProspectLocation& Status); // Function BPSessionFunctionLibrary.BPSessionFunctionLibrary_C.HaveJoinedProspect // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void HasSettled(struct AIcarusPlayerController* Target, struct FFProspectServerInfo& FProspectServerInfo, struct UObject* __WorldContext, bool& Settled); // Function BPSessionFunctionLibrary.BPSessionFunctionLibrary_C.HasSettled // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void CreateProspectServerInfoFromSession(struct FBlueprintSessionResult Session, struct UObject* __WorldContext, struct FFProspectServerInfo& ServerProspect); // Function BPSessionFunctionLibrary.BPSessionFunctionLibrary_C.CreateProspectServerInfoFromSession // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
	void ProspectInfoIsValid(struct FFProspectServerInfo Server Prospect Info, bool RequiresSession, struct UObject* __WorldContext, bool& Valid); // Function BPSessionFunctionLibrary.BPSessionFunctionLibrary_C.ProspectInfoIsValid // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1be0000
};

