// Enum Icarus.EGOAPCharacterStance
enum class EGOAPCharacterStance : uint8 {
	Standing = 0,
	Sitting = 1,
	Lying = 2,
	EGOAPCharacterStance_MAX = 3
};

// Enum Icarus.EViewTraceResultPriority
enum class EViewTraceResultPriority : uint8 {
	Blocking = 0,
	Ignore = 1,
	Low = 2,
	Normal = 3,
	High = 4,
	EViewTraceResultPriority_MAX = 5
};

// Enum Icarus.EViewTraceHitType
enum class EViewTraceHitType : uint8 {
	None = 0,
	LineTrace = 1,
	VolumeTrace = 2,
	EViewTraceHitType_MAX = 3
};

// Enum Icarus.EDynamicItemProperties
enum class EDynamicItemProperties : uint8 {
	AssociatedItemInventoryId = 0,
	AssociatedItemInventorySlot = 1,
	DynamicState = 2,
	GunCurrentMagSize = 3,
	CurrentAmmoType = 4,
	BuildingVariation = 5,
	Durability = 6,
	ItemableStack = 7,
	MillijoulesRemaining = 8,
	TransmutableUnits = 9,
	Fillable_StoredUnits = 10,
	Fillable_Type = 11,
	Decayable_CurrentSpoilTime = 12,
	InventoryContainer_LinkedInventoryId = 13,
	MaxDynamicItemProperties = 14,
	EDynamicItemProperties_MAX = 15
};

// Enum Icarus.EEndProspectSessionContext
enum class EEndProspectSessionContext : uint8 {
	Undefined = 0,
	HostLeavingSession = 1,
	ExpiredProspect = 2,
	Error_InvalidHost = 3,
	Error_FailedToHostSession = 4,
	EEndProspectSessionContext_MAX = 5
};

// Enum Icarus.EOverallSetting
enum class EOverallSetting : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	NumSettings = 5,
	Custom = 255,
	EOverallSetting_MAX = 256
};

// Enum Icarus.EViewDistanceSetting
enum class EViewDistanceSetting : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	NumSettings = 5,
	Custom = 255,
	EViewDistanceSetting_MAX = 256
};

// Enum Icarus.EPostProcessingSetting
enum class EPostProcessingSetting : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	NumSettings = 5,
	Custom = 255,
	EPostProcessingSetting_MAX = 256
};

// Enum Icarus.EShadowsSetting
enum class EShadowsSetting : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	NumSettings = 5,
	Custom = 255,
	EShadowsSetting_MAX = 256
};

// Enum Icarus.ETexturesSetting
enum class ETexturesSetting : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	NumSettings = 5,
	Custom = 255,
	ETexturesSetting_MAX = 256
};

// Enum Icarus.EEffectsSetting
enum class EEffectsSetting : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	NumSettings = 5,
	Custom = 255,
	EEffectsSetting_MAX = 256
};

// Enum Icarus.EFoliageSetting
enum class EFoliageSetting : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	NumSettings = 5,
	Custom = 255,
	EFoliageSetting_MAX = 256
};

// Enum Icarus.EShadingSetting
enum class EShadingSetting : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	NumSettings = 5,
	Custom = 255,
	EShadingSetting_MAX = 256
};

// Enum Icarus.EAntiAliasingSetting
enum class EAntiAliasingSetting : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	NumSettings = 5,
	Custom = 255,
	EAntiAliasingSetting_MAX = 256
};

// Enum Icarus.EShadowFilterMethodSetting
enum class EShadowFilterMethodSetting : uint8 {
	PCF = 0,
	PCSS = 1,
	NumSettings = 2,
	Custom = 255,
	EShadowFilterMethodSetting_MAX = 256
};

// Enum Icarus.EDLSSModeSetting
enum class EDLSSModeSetting : uint8 {
	Off = 0,
	Performance = 1,
	Balanced = 2,
	Quality = 3,
	NumSettings = 4,
	Custom = 255,
	EDLSSModeSetting_MAX = 256
};

// Enum Icarus.EFSRModeSetting
enum class EFSRModeSetting : uint8 {
	Off = 0,
	Performance = 1,
	Balanced = 2,
	Quality = 3,
	Ultra_Quality = 4,
	NumSettings = 5,
	Custom = 255,
	EFSRModeSetting_MAX = 256
};

// Enum Icarus.EDisplayTemperatureSetting
enum class EDisplayTemperatureSetting : uint8 {
	Celsius = 0,
	Fahrenheit = 1,
	NumSettings = 2,
	Custom = 255,
	EDisplayTemperatureSetting_MAX = 256
};

// Enum Icarus.EInputTypeSetting
enum class EInputTypeSetting : uint8 {
	Keyboard = 0,
	Controller = 1,
	NumSettings = 2,
	Custom = 255,
	EInputTypeSetting_MAX = 256
};

// Enum Icarus.EControllerIconsSetting
enum class EControllerIconsSetting : uint8 {
	Xbox = 0,
	Playstation = 1,
	Switch = 2,
	NumSettings = 3,
	Custom = 255,
	EControllerIconsSetting_MAX = 256
};

// Enum Icarus.EEventEndReason
enum class EEventEndReason : uint8 {
	InvalidReason = 0,
	Completed = 1,
	Timeout = 2,
	Aborted = 3,
	EEventEndReason_MAX = 4
};

// Enum Icarus.EBuildingDestroyReason
enum class EBuildingDestroyReason : uint8 {
	Stability = 0,
	Player = 1,
	Damaged = 2,
	Replaced = 3,
	EBuildingDestroyReason_MAX = 4
};

// Enum Icarus.ETalentState
enum class ETalentState : uint8 {
	Locked = 0,
	Available = 1,
	Unlocked = 2,
	Completed = 3,
	ETalentState_MAX = 4
};

// Enum Icarus.EActionableEventType
enum class EActionableEventType : uint8 {
	Undefined = 0,
	Primary = 1,
	Secondary = 2,
	Tertiary = 3,
	Reload = 4,
	MAX_VALUE = 5,
	EActionableEventType_MAX = 6
};

// Enum Icarus.EActionableTrigger
enum class EActionableTrigger : uint8 {
	ActionPressed = 0,
	ActionReleased = 1,
	ActionHeld = 2,
	EActionableTrigger_MAX = 3
};

// Enum Icarus.EStealthAttackType
enum class EStealthAttackType : uint8 {
	NoStealth = 0,
	PartialStealth = 1,
	FullStealth = 2,
	EStealthAttackType_MAX = 3
};

// Enum Icarus.EProjectileBreakModifier
enum class EProjectileBreakModifier : uint8 {
	NoChange = 0,
	Unbreakable = 1,
	MustBreak = 2,
	EProjectileBreakModifier_MAX = 3
};

// Enum Icarus.EProcessorStoppedReason
enum class EProcessorStoppedReason : uint8 {
	GenericFailure = 0,
	NoEnergy = 1,
	NoResources = 2,
	NoRecipe = 3,
	NoQueue = 4,
	NoSpace = 5,
	NotTurnedOn = 6,
	NoResourceRemaining = 7,
	PlayerStopped = 8,
	EProcessorStoppedReason_MAX = 9
};

// Enum Icarus.EAliveState
enum class EAliveState : uint8 {
	Alive = 0,
	Dead = 1,
	EAliveState_MAX = 2
};

// Enum Icarus.EAIAudioState
enum class EAIAudioState : uint8 {
	Undefined = 0,
	Idle = 1,
	Fleeing = 2,
	Attacking = 3,
	Dead = 4,
	Relaxing = 5,
	EAIAudioState_MAX = 6
};

// Enum Icarus.EHeatmapColorChannel
enum class EHeatmapColorChannel : uint8 {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	AnyChannel = 4,
	EHeatmapColorChannel_MAX = 5
};

// Enum Icarus.ERelationshipType
enum class ERelationshipType : uint8 {
	Neutral = 0,
	Hostile = 1,
	Friendly = 2,
	ERelationshipType_MAX = 3
};

// Enum Icarus.EAIVocalisationType
enum class EAIVocalisationType : uint8 {
	Attack = 0,
	Flinch = 1,
	Death = 2,
	EAIVocalisationType_MAX = 3
};

// Enum Icarus.EAnimStateFMODParam
enum class EAnimStateFMODParam : uint8 {
	NotAnimating = 0,
	Animating = 1,
	EAnimStateFMODParam_MAX = 2
};

// Enum Icarus.EGenderedArmourType
enum class EGenderedArmourType : uint8 {
	Invalid = 0,
	MaleThirdPerson = 1,
	FemaleThirdPerson = 2,
	GenericFirstPerson = 3,
	EGenderedArmourType_MAX = 4
};

// Enum Icarus.EArmourType
enum class EArmourType : uint8 {
	Undefined = 0,
	Head = 1,
	Chest = 2,
	Hands = 3,
	Legs = 4,
	Feet = 5,
	Undersuit = 6,
	Skin_Head = 7,
	Undersuit_Helmet = 8,
	Skin_Head_Hair = 9,
	Backpack = 10,
	EArmourType_MAX = 11
};

// Enum Icarus.EAssetType
enum class EAssetType : uint8 {
	Object = 0,
	Class = 1,
	EAssetType_MAX = 2
};

// Enum Icarus.EAudioOcclusionMode
enum class EAudioOcclusionMode : uint8 {
	Complex = 0,
	SourceSimple = 1,
	SourceAndListenerSimple = 2,
	EAudioOcclusionMode_MAX = 3
};

// Enum Icarus.EAudioShelterState
enum class EAudioShelterState : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	EAudioShelterState_MAX = 3
};

// Enum Icarus.EAuthorityType
enum class EAuthorityType : uint8 {
	ClientOnly = 0,
	ServerOnly = 1,
	Both = 2,
	EAuthorityType_MAX = 3
};

// Enum Icarus.ERateLimitedRequests
enum class ERateLimitedRequests : uint8 {
	None = 0,
	GetDropships = 1,
	GetMetaResources = 2,
	GetMetaInventory = 3,
	GetDropInventory = 4,
	GetWorkshopPacks = 5,
	GetCredits = 6,
	GetNotifications = 7,
	SyncTalents = 8,
	ERateLimitedRequests_MAX = 9
};

// Enum Icarus.EPayloadDeploymentType
enum class EPayloadDeploymentType : uint8 {
	OnProjectileMovementComplete = 0,
	OnLaunch = 1,
	OnBounceImmediate = 2,
	OnBounceWaitForHalt = 3,
	OnTimerElapsed = 4,
	EPayloadDeploymentType_MAX = 5
};

// Enum Icarus.EBuildingOpenFMODParam
enum class EBuildingOpenFMODParam : uint8 {
	Closed = 0,
	Open = 1,
	EBuildingOpenFMODParam_MAX = 2
};

// Enum Icarus.EBuildingUnzipFMODParam
enum class EBuildingUnzipFMODParam : uint8 {
	Normal = 0,
	Unzipping = 1,
	EBuildingUnzipFMODParam_MAX = 2
};

// Enum Icarus.ECaveContextFMODParam
enum class ECaveContextFMODParam : uint8 {
	None = 0,
	ListenerOutSourceOut = 1,
	ListenerOutSourceInCave = 2,
	ListenerInCaveSourceOut = 3,
	ListenerInCaveSourceInCave = 4,
	ECaveContextFMODParam_MAX = 5
};

// Enum Icarus.ECaveLightType
enum class ECaveLightType : uint8 {
	Spot = 0,
	Rect = 1,
	ECaveLightType_MAX = 2
};

// Enum Icarus.EChallengeTypes
enum class EChallengeTypes : uint8 {
	Character = 0,
	Player = 1,
	Seasonal = 2,
	MaxChallengeTypes = 3,
	EChallengeTypes_MAX = 4
};

// Enum Icarus.ECharacterCustomisationContext
enum class ECharacterCustomisationContext : uint8 {
	Undefined = 0,
	CharacterCreation = 1,
	HABCustomisation = 2,
	ECharacterCustomisationContext_MAX = 3
};

// Enum Icarus.ECharacterBodyType
enum class ECharacterBodyType : uint8 {
	Masculine = 0,
	Feminine = 1,
	Neutral = 2,
	ECharacterBodyType_MAX = 3
};

// Enum Icarus.ECharacterOptionCategory
enum class ECharacterOptionCategory : uint8 {
	Head = 0,
	Body = 1,
	BodyColor = 2,
	HairStyle = 3,
	HairColor = 4,
	Head_Tattoo = 5,
	Head_Scar = 6,
	Head_FacialHair = 7,
	SkinTone = 8,
	Color = 9,
	EyeColor = 10,
	Decal = 11,
	ECharacterOptionCategory_MAX = 12
};

// Enum Icarus.EControllerIconSet
enum class EControllerIconSet : uint8 {
	None = 0,
	Xbox = 1,
	Playstation = 2,
	NintendoSwitch = 3,
	EControllerIconSet_MAX = 4
};

// Enum Icarus.ERefundPermission
enum class ERefundPermission : uint8 {
	Inherit = 0,
	Block = 1,
	Allow = 2,
	ERefundPermission_MAX = 3
};

// Enum Icarus.ECreatureAudioThreatTargetType
enum class ECreatureAudioThreatTargetType : uint8 {
	Invalid = 0,
	OtherPlayer = 1,
	LocalPlayer = 2,
	OtherCreature = 3,
	Stimulus = 4,
	ECreatureAudioThreatTargetType_MAX = 5
};

// Enum Icarus.ECreatureFoliageFMODParam
enum class ECreatureFoliageFMODParam : uint8 {
	NotInFoliage = 0,
	InFoliage = 1,
	ECreatureFoliageFMODParam_MAX = 2
};

// Enum Icarus.ECreatureFootstepTypeFMODParam
enum class ECreatureFootstepTypeFMODParam : uint8 {
	FrontFoot = 0,
	RearFoot = 1,
	ECreatureFootstepTypeFMODParam_MAX = 2
};

// Enum Icarus.EDamageTypeFMODParam
enum class EDamageTypeFMODParam : uint8 {
	Undefined = 0,
	Pure = 1,
	Physical = 2,
	Melee = 3,
	Ranged = 4,
	Fire = 5,
	FallDamage = 6,
	Collision = 7,
	Poison = 8,
	Wind = 9,
	EDamageTypeFMODParam_MAX = 10
};

// Enum Icarus.EWorldPlacementType
enum class EWorldPlacementType : uint8 {
	GroundPlacement = 0,
	WallPlacement = 1,
	WaterPlacement = 2,
	GroundOrWallPlacement = 3,
	CeilingPlacement = 4,
	EWorldPlacementType_MAX = 5
};

// Enum Icarus.EDeployableSnapBehaviour
enum class EDeployableSnapBehaviour : uint8 {
	WorldPlacementOnly = 0,
	SnapPlacementOnly = 1,
	WorldAndSnap = 2,
	EDeployableSnapBehaviour_MAX = 3
};

// Enum Icarus.EDropshipDescentStateFMODParam
enum class EDropshipDescentStateFMODParam : uint8 {
	MainEngines = 0,
	Booster = 1,
	Freefall = 2,
	Landed = 3,
	EnterSeat = 4,
	EDropshipDescentStateFMODParam_MAX = 5
};

// Enum Icarus.EEnvironmentLightningTargetFMODParam
enum class EEnvironmentLightningTargetFMODParam : uint8 {
	Random = 0,
	Player = 1,
	Tree = 2,
	Building = 3,
	EEnvironmentLightningTargetFMODParam_MAX = 4
};

// Enum Icarus.EExperienceSource
enum class EExperienceSource : uint8 {
	XP_None = 0,
	XP_OnAction = 1,
	XP_OnInteract = 2,
	XP_OnHit = 3,
	XP_OnDamaged = 4,
	XP_OnDeath = 5,
	XP_OnCraft = 6,
	XP_OnAchievement = 7,
	XP_Misc = 8,
	XP_MAX = 9
};

// Enum Icarus.EFirearmAttachType
enum class EFirearmAttachType : uint8 {
	Weapon = 0,
	Player = 1,
	EFirearmAttachType_MAX = 2
};

// Enum Icarus.EFireExtinguishResult
enum class EFireExtinguishResult : uint8 {
	Failed = 0,
	ExtinguishedCombustion = 1,
	ExtinguishedPyrolysis = 2,
	EFireExtinguishResult_MAX = 3
};

// Enum Icarus.EFireMode
enum class EFireMode : uint8 {
	Semiauto = 0,
	Burst = 1,
	Auto = 2,
	EFireMode_MAX = 3
};

// Enum Icarus.EFireStateFMODParam
enum class EFireStateFMODParam : uint8 {
	NotOnFire = 0,
	OnFire = 1,
	EFireStateFMODParam_MAX = 2
};

// Enum Icarus.EFlagsTableType
enum class EFlagsTableType : uint8 {
	D_CharacterFlags = 0,
	D_SessionFlags = 1,
	D_AccountFlags = 2,
	None = 255,
	EFlagsTableType_MAX = 256
};

// Enum Icarus.EFlammableAudioLocationType
enum class EFlammableAudioLocationType : uint8 {
	ActorLocation = 0,
	BoundsOrigin = 1,
	BoundsBase = 2,
	EFlammableAudioLocationType_MAX = 3
};

// Enum Icarus.EFlammablePropagationType
enum class EFlammablePropagationType : uint8 {
	None = 0,
	Self = 1,
	FireInstance = 2,
	EFlammablePropagationType_MAX = 3
};

// Enum Icarus.EFlammableState
enum class EFlammableState : uint8 {
	None = 0,
	Detached = 1,
	Pyrolysis = 2,
	Combusting = 3,
	Combusted = 4,
	Destroyed = 5,
	EFlammableState_MAX = 6
};

// Enum Icarus.EFLODActorState
enum class EFLODActorState : uint8 {
	Undefined = 0,
	Revealing = 2,
	Revealed = 4,
	Concealing = 8,
	Concealed = 16,
	EFLODActorState_MAX = 17
};

// Enum Icarus.EFLODLevelInfluenceType
enum class EFLODLevelInfluenceType : uint8 {
	None = 0,
	ViewTrace = 1,
	Distance = 2,
	EFLODLevelInfluenceType_MAX = 3
};

// Enum Icarus.EAnimOverlayState
enum class EAnimOverlayState : uint8 {
	Default = 0,
	OneHanded = 1,
	Bow = 2,
	TwoHandedRifle = 3,
	Driving = 4,
	Spear = 5,
	Carrying = 6,
	Firearm = 7,
	Fishing = 8,
	EAnimOverlayState_MAX = 9
};

// Enum Icarus.EGlobalDropStateFMODParam
enum class EGlobalDropStateFMODParam : uint8 {
	Hab = 0,
	Dropship = 1,
	Prospect = 2,
	LoadingProspect = 3,
	EGlobalDropStateFMODParam_MAX = 4
};

// Enum Icarus.EGlobalEnvironmentBiomeFMODParam
enum class EGlobalEnvironmentBiomeFMODParam : uint8 {
	None = 0,
	Conifer = 1,
	Arctic = 2,
	Desert = 3,
	EGlobalEnvironmentBiomeFMODParam_MAX = 4
};

// Enum Icarus.EGlobalLoadingScreenStateFMODParam
enum class EGlobalLoadingScreenStateFMODParam : uint8 {
	LoadingScreen_Inactive = 0,
	LoadingScreen_Active = 1,
	LoadingScreen_MAX = 2
};

// Enum Icarus.EGlobalPlayerCharacterVoiceFMODParam
enum class EGlobalPlayerCharacterVoiceFMODParam : uint8 {
	None = 0,
	VoiceA = 1,
	VoiceB = 2,
	EGlobalPlayerCharacterVoiceFMODParam_MAX = 3
};

// Enum Icarus.EActionRangeCheckBehaviour
enum class EActionRangeCheckBehaviour : uint8 {
	ValidMove = 0,
	CustomFunction = 1,
	Both = 2,
	EActionRangeCheckBehaviour_MAX = 3
};

// Enum Icarus.EHuntingClueType
enum class EHuntingClueType : uint8 {
	Footprint = 0,
	BloodTrail = 1,
	EHuntingClueType_MAX = 2
};

// Enum Icarus.EProgressState
enum class EProgressState : uint8 {
	Prototype = 0,
	Review = 1,
	Complete = 2,
	NumStates = 3,
	EProgressState_MAX = 4
};

// Enum Icarus.EAtmosphereType
enum class EAtmosphereType : uint8 {
	CF = 0,
	AC = 1,
	DC = 2,
	LC = 3,
	WL = 4,
	Cave = 5,
	EAtmosphereType_MAX = 6
};

// Enum Icarus.ECheatsEnabled
enum class ECheatsEnabled : uint8 {
	Enabled = 0,
	NotEnabled = 1,
	ECheatsEnabled_MAX = 2
};

// Enum Icarus.EIcarusClaimLaunchConfirmationStep
enum class EIcarusClaimLaunchConfirmationStep : uint8 {
	ClaimingProspect = 0,
	LoadingProspect = 1,
	EIcarusClaimLaunchConfirmationStep_MAX = 2
};

// Enum Icarus.ELookAtType
enum class ELookAtType : uint8 {
	PitchAndYaw = 0,
	VectorLocation = 1,
	ELookAtType_MAX = 2
};

// Enum Icarus.EIcarusDamageType
enum class EIcarusDamageType : uint8 {
	Undefined = 0,
	Pure = 1,
	Physical = 2,
	Fire = 3,
	FallDamage = 4,
	Collision = 5,
	Poison = 6,
	Wind = 7,
	EIcarusDamageType_MAX = 8
};

// Enum Icarus.EErrorTarget
enum class EErrorTarget : uint8 {
	Log = 0,
	Widget = 1,
	Dialog = 2,
	EErrorTarget_MAX = 3
};

// Enum Icarus.EErrorAction
enum class EErrorAction : uint8 {
	Immediate = 0,
	Kick = 1,
	Queue = 2,
	AppClose = 3,
	EErrorAction_MAX = 4
};

// Enum Icarus.ECanHitResult
enum class ECanHitResult : uint8 {
	CantHit = 0,
	Miss = 1,
	Hit = 2,
	ECanHitResult_MAX = 3
};

// Enum Icarus.EFound
enum class EFound : uint8 {
	Found = 0,
	NotFound = 1,
	EFound_MAX = 2
};

// Enum Icarus.ESettingsCategory
enum class ESettingsCategory : uint8 {
	Display = 0,
	Audio = 1,
	Gameplay = 2,
	Controls = 3,
	ESettingsCategory_MAX = 4
};

// Enum Icarus.EDisplayMode
enum class EDisplayMode : uint8 {
	Fullscreen = 0,
	Borderless = 1,
	Windowed = 2,
	EDisplayMode_MAX = 3
};

// Enum Icarus.ESettingType
enum class ESettingType : uint8 {
	Bool = 0,
	Int = 1,
	Float = 2,
	Enum = 3,
	String = 4,
	ESettingType_MAX = 5
};

// Enum Icarus.EGOAPFactSource
enum class EGOAPFactSource : uint8 {
	VisionPerception = 0,
	SoundPerception = 1,
	DamagePerception = 2,
	ProtectiveMotivation = 3,
	EGOAPFactSource_MAX = 4
};

// Enum Icarus.EGOAPObjectType
enum class EGOAPObjectType : uint8 {
	Food = 0,
	Water = 1,
	Enemy = 2,
	MaxObjectTypes = 3,
	EGOAPObjectType_MAX = 4
};

// Enum Icarus.EGOAPProperty
enum class EGOAPProperty : uint8 {
	Hungry = 0,
	Thirsty = 1,
	HasFood = 2,
	HasWater = 3,
	FoundFood = 4,
	FoundWater = 5,
	Wander = 6,
	Scared = 7,
	RunForSafety = 8,
	MaxProperties = 9,
	EGOAPProperty_MAX = 10
};

// Enum Icarus.EHostMigrationStatus
enum class EHostMigrationStatus : uint8 {
	Inactive = 0,
	Active_BecomingNewHost = 1,
	Active_WaitingToJoinNewHost = 2,
	EHostMigrationStatus_MAX = 3
};

// Enum Icarus.EIcarusItemContext
enum class EIcarusItemContext : uint8 {
	None = 0,
	World = 1,
	EquipHand = 2,
	EquipBack = 3,
	Vehicle = 4,
	Deployable = 5,
	Slotable = 6,
	Buildable = 7,
	DropshipPart = 8,
	Gravestone = 9,
	Light = 10,
	EIcarusItemContext_MAX = 11
};

// Enum Icarus.EIcarusJoinConfirmationStep
enum class EIcarusJoinConfirmationStep : uint8 {
	FindingSession = 0,
	JoiningProspect = 1,
	LoadingProspect = 2,
	EIcarusJoinConfirmationStep_MAX = 3
};

// Enum Icarus.EDirtierMode
enum class EDirtierMode : uint8 {
	OwningActor = 0,
	AffectedObjectsList = 1,
	EDirtierMode_MAX = 2
};

// Enum Icarus.EGOAPControllerState
enum class EGOAPControllerState : uint8 {
	Idle = 0,
	GetNewAction = 1,
	MoveToAction = 2,
	PerformAction = 3,
	EGOAPControllerState_MAX = 4
};

// Enum Icarus.EIcarusOrchestrationStateFlag
enum class EIcarusOrchestrationStateFlag : uint8 {
	None = 0,
	DatabaseReloadRequired = 1,
	DatabaseReloadBegin = 2,
	DatabaseReloadComplete = 3,
	ActorsReloadedToDatabaseState = 4,
	IcarusBeginPlay = 5,
	ClearedAllConcerns = 6,
	RaiseCurtain = 7,
	GameModeBeginPlay = 8,
	AllRequiredActorsSpawned = 9,
	EIcarusOrchestrationStateFlag_MAX = 10
};

// Enum Icarus.EInteractableHitLookupType
enum class EInteractableHitLookupType : uint8 {
	None = 0,
	FLOD_Instance = 1,
	EInteractableHitLookupType_MAX = 2
};

// Enum Icarus.EDataValidity
enum class EDataValidity : uint8 {
	Valid = 0,
	Invalid = 1,
	EDataValidity_MAX = 2
};

// Enum Icarus.ESurvivalConsumableType
enum class ESurvivalConsumableType : uint8 {
	Food = 0,
	Water = 1,
	Oxygen = 2,
	ESurvivalConsumableType_MAX = 3
};

// Enum Icarus.EForceRemovePlayerReason
enum class EForceRemovePlayerReason : uint8 {
	Initialisation_NotApproved = 0,
	KickedByHostingPlayer = 1,
	EForceRemovePlayerReason_MAX = 2
};

// Enum Icarus.ELeaveProspectSessionType
enum class ELeaveProspectSessionType : uint8 {
	None = 0,
	Quit = 1,
	ReturnToCharacterSelect = 2,
	LeaveByDropship = 3,
	ReturnToTitlescreen = 4,
	Disconnected = 5,
	ELeaveProspectSessionType_MAX = 6
};

// Enum Icarus.EIcarusResourceType
enum class EIcarusResourceType : uint8 {
	None = 0,
	Energy = 1,
	Water = 2,
	Fuel = 3,
	Oxygen = 4,
	Chute = 5,
	MaxResourceTypes = 6,
	EIcarusResourceType_MAX = 7
};

// Enum Icarus.EIcarusResumeConfirmationStep
enum class EIcarusResumeConfirmationStep : uint8 {
	ResumeRequest = 0,
	ConfirmationHost = 1,
	ConfirmationJoin = 2,
	LoadingProspectHost = 3,
	FindingSessionJoin = 4,
	LoadingProspectJoin = 5,
	Mismatch = 6,
	EIcarusResumeConfirmationStep_MAX = 7
};

// Enum Icarus.EResumeStep
enum class EResumeStep : uint8 {
	None = 0,
	AskHost = 1,
	AskJoin = 2,
	ShouldHost = 3,
	ShouldJoin = 4,
	ShouldMismatch = 5,
	EResumeStep_MAX = 6
};

// Enum Icarus.ERocketState
enum class ERocketState : uint8 {
	Inactive = 0,
	Descending = 1,
	Landed = 2,
	Ascending = 3,
	ERocketState_MAX = 4
};

// Enum Icarus.ERocketPartConnectionType
enum class ERocketPartConnectionType : uint8 {
	Undefined = 0,
	MK1_TOP = 1,
	MK1_BOTTOM = 2,
	MK2_TOP = 3,
	MK2_BOTTOM = 4,
	ERocketPartConnectionType_MAX = 5
};

// Enum Icarus.ENavigationType
enum class ENavigationType : uint8 {
	Jump = 0,
	Teleport = 1,
	MaxNavigationTypes = 2,
	ENavigationType_MAX = 3
};

// Enum Icarus.EStatDisplayOperation
enum class EStatDisplayOperation : uint8 {
	None = 0,
	Multiply = 1,
	Division = 2,
	Addition = 3,
	EStatDisplayOperation_MAX = 4
};

// Enum Icarus.EStateRecorderOwnerResolvePolicy
enum class EStateRecorderOwnerResolvePolicy : uint8 {
	FindOnly = 0,
	RespawnOnly = 1,
	FindOrRespawn = 2,
	ManuallyResolved = 3,
	EStateRecorderOwnerResolvePolicy_MAX = 4
};

// Enum Icarus.ETestRailState
enum class ETestRailState : uint8 {
	Inactive = 0,
	Initialising = 1,
	Running = 2,
	Complete = 3,
	ETestRailState_MAX = 4
};

// Enum Icarus.EIcarusWeatherDifficulty
enum class EIcarusWeatherDifficulty : uint8 {
	Light = 0,
	Medium = 1,
	Heavy = 2,
	Extreme = 3,
	EIcarusWeatherDifficulty_MAX = 4
};

// Enum Icarus.EInteractType
enum class EInteractType : uint8 {
	Undefined = 0,
	WorldPress = 1,
	WorldHold = 2,
	WorldAltHold = 3,
	EInteractType_MAX = 4
};

// Enum Icarus.EItemDestructionContext
enum class EItemDestructionContext : uint8 {
	Decayed = 0,
	Dismantled = 1,
	FellOutOfWorld = 2,
	EItemDestructionContext_MAX = 3
};

// Enum Icarus.ESetDataSuccess
enum class ESetDataSuccess : uint8 {
	Success = 0,
	Failed = 1,
	ESetDataSuccess_MAX = 2
};

// Enum Icarus.EDataValid
enum class EDataValid : uint8 {
	DataValid = 0,
	DataInvalid = 1,
	EDataValid_MAX = 2
};

// Enum Icarus.EHandedness
enum class EHandedness : uint8 {
	Right = 0,
	Left = 1,
	Both = 2,
	EHandedness_MAX = 3
};

// Enum Icarus.EItemCraftingTypeFMODParam
enum class EItemCraftingTypeFMODParam : uint8 {
	Player = 0,
	World = 1,
	EItemCraftingTypeFMODParam_MAX = 2
};

// Enum Icarus.ECanUseItemResult
enum class ECanUseItemResult : uint8 {
	VisibleAndEnabled = 0,
	VisibleAndDisabled = 1,
	Hidden = 2,
	ECanUseItemResult_MAX = 3
};

// Enum Icarus.ESecondaryItemTypes
enum class ESecondaryItemTypes : uint8 {
	Generic = 0,
	Helmet = 1,
	Chest = 2,
	Gloves = 3,
	Pants = 4,
	Boots = 5,
	Envirosuit = 6,
	FoodResource = 7,
	WaterResource = 8,
	OxygenResource = 9,
	Utility = 10,
	FuelA = 11,
	FuelB = 12,
	FuelC = 13,
	ESecondaryItemTypes_MAX = 14
};

// Enum Icarus.EPrimaryItemTypes
enum class EPrimaryItemTypes : uint8 {
	Generic = 0,
	Actionable = 1,
	Armor = 2,
	Ballistic = 3,
	Buildable = 4,
	Consumable = 5,
	Combustible = 6,
	Deployable = 7,
	Energy = 8,
	Equippable = 9,
	Highlightable = 10,
	Interactable = 11,
	Itemable = 12,
	Meshable = 13,
	Processing = 14,
	Useable = 15,
	Weight = 16,
	Tool = 17,
	Resource = 18,
	Rocketable = 19,
	EPrimaryItemTypes_MAX = 20
};

// Enum Icarus.EKeybindVisibility
enum class EKeybindVisibility : uint8 {
	VisibleRemap = 0,
	VisibleNoRemap = 1,
	Invisible = 2,
	EKeybindVisibility_MAX = 3
};

// Enum Icarus.EInputContext
enum class EInputContext : uint8 {
	Both = 0,
	KeyboardOnly = 1,
	ControllerOnly = 2,
	EInputContext_MAX = 3
};

// Enum Icarus.ELineDrawMethod
enum class ELineDrawMethod : uint8 {
	Unspecified = 0,
	NoLine = 1,
	ShortestDistance = 2,
	XThenY = 3,
	YThenX = 4,
	ELineDrawMethod_MAX = 5
};

// Enum Icarus.ELobbyPrivacy
enum class ELobbyPrivacy : uint8 {
	Unknown = 0,
	FriendsOnly = 1,
	Private = 2,
	ELobbyPrivacy_MAX = 3
};

// Enum Icarus.EMapTileRadarFlag
enum class EMapTileRadarFlag : uint8 {
	NotScanned = 0,
	NoResource = 1,
	FoundResource = 2,
	Scanning = 3,
	FogOfWar = 4,
	EMapTileRadarFlag_MAX = 5
};

// Enum Icarus.EModifierMergeType
enum class EModifierMergeType : uint8 {
	Stack = 0,
	LongestDuration = 1,
	Replace = 2,
	Count = 3,
	EModifierMergeType_MAX = 4
};

// Enum Icarus.EModifierType
enum class EModifierType : uint8 {
	Buff = 0,
	Debuff = 1,
	EModifierType_MAX = 2
};

// Enum Icarus.EMovementState
enum class EMovementState : uint8 {
	Undefined = 0,
	Stationary = 1,
	Sneak = 2,
	Walk = 3,
	Jog = 4,
	Run = 5,
	Sprint = 6,
	Attacking = 7,
	EMovementState_MAX = 8
};

// Enum Icarus.EMusicConditionCombatState
enum class EMusicConditionCombatState : uint8 {
	None = 0,
	Idle = 1,
	InCombat = 2,
	InCombat_Boss = 4,
	InCombat_EpicBoss = 8,
	EMusicConditionCombatState_MAX = 9
};

// Enum Icarus.EMusicConditionDisaster
enum class EMusicConditionDisaster : uint8 {
	None = 0,
	Normal = 1,
	Fire = 2,
	EMusicConditionDisaster_MAX = 3
};

// Enum Icarus.EMusicConditionDropState
enum class EMusicConditionDropState : uint8 {
	None = 0,
	DropShipDescending = 1,
	Prospect = 2,
	DropShipAscending = 4,
	Hab = 8,
	LoadingProspect = 16,
	EMusicConditionDropState_MAX = 17
};

// Enum Icarus.EMusicConditionDropTime
enum class EMusicConditionDropTime : uint8 {
	None = 0,
	Normal = 1,
	TimeRunningOut = 2,
	EMusicConditionDropTime_MAX = 3
};

// Enum Icarus.EMusicConditionGameplayEvent
enum class EMusicConditionGameplayEvent : uint8 {
	None = 0,
	DiscoveredMetaResource = 1,
	Revived = 2,
	EMusicConditionGameplayEvent_MAX = 3
};

// Enum Icarus.EMusicConditionLocation
enum class EMusicConditionLocation : uint8 {
	None = 0,
	ConiferForest = 1,
	Arctic = 2,
	Desert = 4,
	Cave = 8,
	OutOfBounds = 16,
	EMusicConditionLocation_MAX = 17
};

// Enum Icarus.EMusicConditionPlayerState
enum class EMusicConditionPlayerState : uint8 {
	None = 0,
	Alive = 1,
	Dead = 2,
	LowHealth = 4,
	EMusicConditionPlayerState_MAX = 5
};

// Enum Icarus.EMusicConditionTimeOfDay
enum class EMusicConditionTimeOfDay : uint8 {
	None = 0,
	Dawn = 1,
	Day = 2,
	Dusk = 4,
	Night = 8,
	EMusicConditionTimeOfDay_MAX = 9
};

// Enum Icarus.EMusicConditionWeather
enum class EMusicConditionWeather : uint8 {
	None = 0,
	Normal = 1,
	Storm_Ramp = 2,
	Storm_Damage = 4,
	Storm_Chaos = 8,
	EMusicConditionWeather_MAX = 9
};

// Enum Icarus.EObjectSlotType
enum class EObjectSlotType : uint8 {
	ObjectSlotInput = 0,
	ObjectSlotOutput = 1,
	ObjectSlotStorage = 2,
	EObjectSlotType_MAX = 3
};

// Enum Icarus.EOcclusionShelterContextFMODParam
enum class EOcclusionShelterContextFMODParam : uint8 {
	None = 0,
	ListenerLowSourceLow = 1,
	ListenerLowSourceMed = 2,
	ListenerLowSourceHigh = 3,
	ListenerMedSourceLow = 4,
	ListenerMedSourceMed = 5,
	ListenerMedSourceHigh = 6,
	ListenerHighSourceLow = 7,
	ListenerHighSourceMed = 8,
	ListenerHighSourceHigh = 9,
	EOcclusionShelterContextFMODParam_MAX = 10
};

// Enum Icarus.EPlayerArmourTypeFMODParam
enum class EPlayerArmourTypeFMODParam : uint8 {
	None = 0,
	Fiber = 1,
	Fur = 2,
	Leather = 3,
	Ghillie = 4,
	Carbon = 5,
	Composite = 6,
	Polar = 7,
	Scale = 8,
	EPlayerArmourTypeFMODParam_MAX = 9
};

// Enum Icarus.EPlayerAudioFoliageType
enum class EPlayerAudioFoliageType : uint8 {
	Undefined = 0,
	Tree = 1,
	Bush = 2,
	EPlayerAudioFoliageType_MAX = 3
};

// Enum Icarus.EPlayerFoliageFMODParam
enum class EPlayerFoliageFMODParam : uint8 {
	None = 0,
	Bush = 1,
	BushDry = 2,
	BushLow = 3,
	BushTwiggy = 4,
	Flower = 5,
	EPlayerFoliageFMODParam_MAX = 6
};

// Enum Icarus.EPlayerGroundStateFMODParam
enum class EPlayerGroundStateFMODParam : uint8 {
	Earth = 0,
	Air = 1,
	Water = 2,
	EPlayerGroundStateFMODParam_MAX = 3
};

// Enum Icarus.EPlayerStanceFMODParam
enum class EPlayerStanceFMODParam : uint8 {
	Jogging = 0,
	Sprinting = 1,
	Crouching = 2,
	Walking = 3,
	EPlayerStanceFMODParam_MAX = 4
};

// Enum Icarus.ETagRequirement
enum class ETagRequirement : uint8 {
	HasAllTags = 0,
	HasAnyTags = 1,
	ETagRequirement_MAX = 2
};

// Enum Icarus.EPlayerTypeFMODParam
enum class EPlayerTypeFMODParam : uint8 {
	LocalPlayerFirstPerson = 0,
	LocalPlayerThirdPerson = 1,
	OtherPlayer = 2,
	EPlayerTypeFMODParam_MAX = 3
};

// Enum Icarus.EProcessorPurpose
enum class EProcessorPurpose : uint8 {
	Crafting = 0,
	Repairing = 1,
	EProcessorPurpose_MAX = 2
};

// Enum Icarus.EIcarusProspectDifficulty
enum class EIcarusProspectDifficulty : uint8 {
	Easy = 0,
	Normal = 1,
	Hard = 2,
	Extreme = 3,
	EIcarusProspectDifficulty_MAX = 4
};

// Enum Icarus.EQuestModifiersTableType
enum class EQuestModifiersTableType : uint8 {
	D_QuestWeatherModifiers = 0,
	D_QuestEnemyModifiers = 1,
	D_QuestVocalisationModifiers = 2,
	None = 255,
	EQuestModifiersTableType_MAX = 256
};

// Enum Icarus.EDialogueEvents
enum class EDialogueEvents : uint8 {
	None = 0,
	QuestStart = 1,
	QuestEnd = 2,
	EDialogueEvents_MAX = 3
};

// Enum Icarus.EQuestActorState
enum class EQuestActorState : uint8 {
	Valid = 0,
	Invalid = 1,
	EQuestActorState_MAX = 2
};

// Enum Icarus.EQuestState
enum class EQuestState : uint8 {
	Complete = 0,
	Incomplete = 1,
	EQuestState_MAX = 2
};

// Enum Icarus.EQuestVocalisationType
enum class EQuestVocalisationType : uint8 {
	InitialAudio = 0,
	UpdateAudio = 1,
	FinishAudio = 2,
	EQuestVocalisationType_MAX = 3
};

// Enum Icarus.EReloadType
enum class EReloadType : uint8 {
	Magazine = 0,
	Chambered = 1,
	EReloadType_MAX = 2
};

// Enum Icarus.EClassRepPolicy
enum class EClassRepPolicy : uint8 {
	NotRouted = 0,
	ManuallyRouted = 1,
	RelevantAllConnections = 2,
	Spatialize_Static = 3,
	Spatialize_Dynamic = 4,
	Spatialize_Dormancy = 5,
	EClassRepPolicy_MAX = 6
};

// Enum Icarus.RiverAudioState
enum class RiverAudioState : uint8 {
	InfrequentlyChecking = 0,
	FrequentlyChecking = 1,
	ActivelyUpdating = 2,
	RiverAudioState_MAX = 3
};

// Enum Icarus.ERocketPartType
enum class ERocketPartType : uint8 {
	Undefined = 0,
	ERocketPartType_MAX = 1
};

// Enum Icarus.ESplineLoopDirection
enum class ESplineLoopDirection : uint8 {
	Undetermined = 0,
	Anticlockwise = 1,
	Clockwise = 2,
	ESplineLoopDirection_MAX = 3
};

// Enum Icarus.EComparisonType
enum class EComparisonType : uint8 {
	Equals = 0,
	NotEquals = 1,
	LessThan = 2,
	LessThanOrEqual = 3,
	GreaterThan = 4,
	GreaterThanOrEqual = 5,
	EComparisonType_MAX = 6
};

// Enum Icarus.EFunctionOutcome
enum class EFunctionOutcome : uint8 {
	Success = 0,
	Failure = 1,
	EFunctionOutcome_MAX = 2
};

// Enum Icarus.EInputStatSourceType
enum class EInputStatSourceType : uint8 {
	Aiming = 0,
	EInputStatSourceType_MAX = 1
};

// Enum Icarus.EStatSources
enum class EStatSources : uint8 {
	Base = 0,
	FromServer = 1,
	Armour = 2,
	Buff = 3,
	Item = 4,
	Durable = 5,
	Buildable = 6,
	DropShip = 7,
	Attributes = 8,
	Perks = 9,
	Projectile = 10,
	GOAP = 11,
	EquippedItems = 12,
	MapManager = 13,
	ArmourSetBonus = 14,
	AIManager = 15,
	Talents = 16,
	Biome = 17,
	TimeOfDay = 18,
	Weather = 19,
	BackingStatsContainer = 20,
	Weight = 21,
	World = 22,
	Ruleset = 23,
	AISetup = 24,
	AISpawner = 25,
	EpicCreature = 26,
	DamageEnabledAnimNotify = 27,
	BTTaskPerformAction = 28,
	Input = 29,
	GOAPAction = 30,
	CriticalHit = 31,
	GenericBehaviourTree = 32,
	EStatSources_MAX = 33
};

// Enum Icarus.ESurfaceFMODParam
enum class ESurfaceFMODParam : uint8 {
	Default = 0,
	Dirt = 1,
	Sand = 2,
	Grass = 3,
	Wood = 4,
	Rock = 5,
	Plastic = 6,
	Metal = 7,
	Carpet = 8,
	Snow = 9,
	Water = 10,
	Gravel = 11,
	Flesh = 12,
	Concrete = 13,
	Mud = 14,
	Ice = 15,
	Tree = 16,
	VoxelRock = 17,
	VoxelMetal = 18,
	Bush = 19,
	Glass = 20,
	Thatch = 21,
	Cactus = 22,
	Bone = 23,
	CorrugatedIron = 24,
	ESurfaceFMODParam_MAX = 25
};

// Enum Icarus.ESurveyLaserFMODParam
enum class ESurveyLaserFMODParam : uint8 {
	LaserOff = 0,
	LaserOn = 1,
	ESurveyLaserFMODParam_MAX = 2
};

// Enum Icarus.ESurveyTransmitFMODParam
enum class ESurveyTransmitFMODParam : uint8 {
	NotTransmitting = 0,
	Transmitting = 1,
	ESurveyTransmitFMODParam_MAX = 2
};

// Enum Icarus.ETalentModelStorage
enum class ETalentModelStorage : uint8 {
	None = 0,
	Character = 1,
	Account = 2,
	ETalentModelStorage_MAX = 3
};

// Enum Icarus.ERefundTalentResponse
enum class ERefundTalentResponse : uint8 {
	Invalid = 0,
	Success = 1,
	NullModel = 2,
	NotUnlocked = 3,
	IsDependency = 4,
	InvalidatesRank = 5,
	ERefundTalentResponse_MAX = 6
};

// Enum Icarus.ETerrainAnchorState
enum class ETerrainAnchorState : uint8 {
	Undefined = 0,
	Valid = 1,
	Invalid = 2,
	ETerrainAnchorState_MAX = 3
};

// Enum Icarus.ESleepResult
enum class ESleepResult : uint8 {
	Valid = 0,
	InvalidTime = 1,
	StormActive = 2,
	ESleepResult_MAX = 3
};

// Enum Icarus.ETreeDetachContextFMODParam
enum class ETreeDetachContextFMODParam : uint8 {
	Collision = 0,
	PlayerCollision = 1,
	PlayerActionIndirect = 2,
	PlayerActionDirect = 3,
	ETreeDetachContextFMODParam_MAX = 4
};

// Enum Icarus.ETreePrimitiveDetachContext
enum class ETreePrimitiveDetachContext : uint8 {
	None = 0,
	PlayerAction_Direct = 1,
	PlayerAction_Indirect = 2,
	Collision = 3,
	Fire = 4,
	Storm = 5,
	ETreePrimitiveDetachContext_MAX = 6
};

// Enum Icarus.ETreePrimitiveItemReplaceMethod
enum class ETreePrimitiveItemReplaceMethod : uint8 {
	None = 0,
	SpawnWorldItem = 1,
	DirectIntoInventory = 2,
	ETreePrimitiveItemReplaceMethod_MAX = 3
};

// Enum Icarus.ETreePrimitiveType
enum class ETreePrimitiveType : uint8 {
	None = 0,
	Root = 1,
	Trunk = 2,
	Branch = 3,
	Leaf = 4,
	Socketable = 5,
	ETreePrimitiveType_MAX = 6
};

// Enum Icarus.EVehicleComponentType
enum class EVehicleComponentType : uint8 {
	None = 0,
	Engine = 1,
	Gearbox = 2,
	Drivetrain = 3,
	Fueltank = 4,
	Wheel = 5,
	Suspension = 6,
	Tire = 7,
	EVehicleComponentType_MAX = 8
};

// Enum Icarus.EIcarusGameVersionFlags
enum class EIcarusGameVersionFlags : uint8 {
	None = 0,
	Major = 1,
	Minor = 2,
	Patch = 4,
	Changelist = 8,
	BuildType = 16,
	FeatureLevel = 32,
	Numbers = 15,
	All = 63,
	EIcarusGameVersionFlags_MAX = 64
};

// Enum Icarus.EVocalisationPlayResult
enum class EVocalisationPlayResult : uint8 {
	Cancelled = 0,
	Played = 1,
	Queued = 2,
	EVocalisationPlayResult_MAX = 3
};

// Enum Icarus.EVocalisationPriority
enum class EVocalisationPriority : uint8 {
	Lowest = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Highest = 4,
	EVocalisationPriority_MAX = 5
};

// Enum Icarus.EVocalisationInterruptType
enum class EVocalisationInterruptType : uint8 {
	Interrupt = 0,
	Cancel = 1,
	Queue = 2,
	EVocalisationInterruptType_MAX = 3
};

// Enum Icarus.EUVWrapMethod
enum class EUVWrapMethod : uint8 {
	UV_TripleProjection = 0,
	UV_ZProjection = 1,
	UV_Spherical = 2,
	UV_MAX = 3
};

// Enum Icarus.EVoxelResourceCategory
enum class EVoxelResourceCategory : uint8 {
	None = 0,
	Stone = 1,
	Metal = 2,
	Oxite = 3,
	Copper = 4,
	Gold = 5,
	Bauxite = 6,
	Sulfur = 7,
	Silica = 8,
	Ice = 9,
	Platinum = 10,
	Titanium = 11,
	Coal = 12,
	Exotic_A = 13,
	EVoxelResourceCategory_MAX = 14
};

// Enum Icarus.EWeaponAimingFMODParam
enum class EWeaponAimingFMODParam : uint8 {
	NotAiming = 0,
	Aiming = 1,
	EWeaponAimingFMODParam_MAX = 2
};

// Enum Icarus.EWeaponChargingFMODParam
enum class EWeaponChargingFMODParam : uint8 {
	NotCharging = 0,
	Charging = 1,
	EWeaponChargingFMODParam_MAX = 2
};

// Enum Icarus.EWeaponReloadingFMODParam
enum class EWeaponReloadingFMODParam : uint8 {
	NotReloading = 0,
	Reloading = 1,
	EWeaponReloadingFMODParam_MAX = 2
};

// ScriptStruct Icarus.IcarusDamagePacket
// Size: 0xc8 (Inherited: 0x00)
struct FIcarusDamagePacket {
	struct FDamageEvent DamageEvent; // 0x00(0x10)
	int32_t TotalDamage; // 0x10(0x04)
	int32_t AppliedDamage; // 0x14(0x04)
	bool bSuppressDamageNumbers; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct AController* EventInstigator; // 0x20(0x08)
	struct AActor* DamageCauser; // 0x28(0x08)
	struct FHitResult HitResult; // 0x30(0x8c)
	float Timestamp; // 0xbc(0x04)
	bool bWasRadialDamage; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// ScriptStruct Icarus.ExperienceEventsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FExperienceEventsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ViewTraceResult
// Size: 0x90 (Inherited: 0x00)
struct FViewTraceResult {
	struct FHitResult Hit; // 0x00(0x8c)
	enum class EViewTraceHitType Type; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
};

// ScriptStruct Icarus.GOAPPropertiesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FGOAPPropertiesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FLODInstanceID
// Size: 0x10 (Inherited: 0x00)
struct FFLODInstanceID {
	struct TWeakObjectPtr<struct AFLODTile> FLODTile; // 0x00(0x08)
	int32_t RecordIndex; // 0x08(0x04)
	int32_t InstanceIndex; // 0x0c(0x04)
};

// ScriptStruct Icarus.FLODActorRecordInstance
// Size: 0x1c (Inherited: 0x10)
struct FFLODActorRecordInstance : FFLODInstanceID {
	int32_t LevelIndex; // 0x10(0x04)
	struct FName TileName; // 0x14(0x08)
};

// ScriptStruct Icarus.TalentsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FTalentsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ChallengesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FChallengesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.WeatherEventsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FWeatherEventsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ItemData
// Size: 0xa0 (Inherited: 0x18)
struct FItemData : FIcarusTableRowBase {
	struct FItemsStaticRowHandle ItemStaticData; // 0x18(0x18)
	struct TArray<struct FItemDynamicData> ItemDynamicData; // 0x30(0x10)
	struct FItemStats ItemStats; // 0x40(0x30)
	struct FString DatabaseGUID; // 0x70(0x10)
	struct FGameplayTagContainer RuntimeTags; // 0x80(0x20)
};

// ScriptStruct Icarus.ItemStats
// Size: 0x30 (Inherited: 0x00)
struct FItemStats {
	struct TArray<struct FIcarusStatReplicated> StaticWorldStats; // 0x00(0x10)
	struct TArray<struct FIcarusStatReplicated> StaticWorldHeldStats; // 0x10(0x10)
	struct TArray<struct FIcarusStatReplicated> AdditionalStats; // 0x20(0x10)
};

// ScriptStruct Icarus.IcarusStatReplicated
// Size: 0x18 (Inherited: 0x00)
struct FIcarusStatReplicated {
	struct FStatsEnum Stat; // 0x00(0x10)
	int32_t Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Icarus.StatsEnum
// Size: 0x10 (Inherited: 0x10)
struct FStatsEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemDynamicData
// Size: 0x20 (Inherited: 0x18)
struct FItemDynamicData : FIcarusTableRowBase {
	enum class EDynamicItemProperties PropertyType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t Value; // 0x1c(0x04)
};

// ScriptStruct Icarus.ItemsStaticRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FItemsStaticRowHandle : FRowHandle {
};

// ScriptStruct Icarus.IcarusPlayerChatMessage
// Size: 0x40 (Inherited: 0x00)
struct FIcarusPlayerChatMessage {
	struct FString PlayerID; // 0x00(0x10)
	struct FString PlayerName; // 0x10(0x10)
	struct UTexture2D* PlayerIcon; // 0x20(0x08)
	struct FColor PlayerColour; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString Message; // 0x30(0x10)
};

// ScriptStruct Icarus.DialogueRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FDialogueRowHandle : FRowHandle {
};

// ScriptStruct Icarus.StatsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FStatsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.StatAfflictionsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FStatAfflictionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TalentModelData
// Size: 0x10 (Inherited: 0x00)
struct FTalentModelData {
	enum class ETalentState State; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Rank; // 0x04(0x04)
	int32_t MaxRank; // 0x08(0x04)
	bool bLocked; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Icarus.HostMigrationInfo
// Size: 0x28 (Inherited: 0x00)
struct FHostMigrationInfo {
	struct FString PlayerName; // 0x00(0x10)
	struct FPlayerCharacterID PlayerCharacterID; // 0x10(0x18)
};

// ScriptStruct Icarus.PlayerCharacterID
// Size: 0x18 (Inherited: 0x00)
struct FPlayerCharacterID {
	struct FString PlayerID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Icarus.ErrorCodesEnum
// Size: 0x10 (Inherited: 0x10)
struct FErrorCodesEnum : FRowEnum {
};

// ScriptStruct Icarus.AccoladeCompletedState
// Size: 0x30 (Inherited: 0x00)
struct FAccoladeCompletedState {
	struct FAccoladesRowHandle Accolade; // 0x00(0x18)
	struct FDateTime TimeCompleted; // 0x18(0x08)
	struct FString ProspectID; // 0x20(0x10)
};

// ScriptStruct Icarus.AccoladesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FAccoladesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ConnectedPlayer
// Size: 0x30 (Inherited: 0x00)
struct FConnectedPlayer {
	struct FPlayerCharacterID PlayerCharacterID; // 0x00(0x18)
	struct AIcarusPlayerController* PlayerController; // 0x18(0x08)
	struct AIcarusPlayerCharacter* PlayerCharacter; // 0x20(0x08)
	struct AIcarusPlayerState* PlayerState; // 0x28(0x08)
};

// ScriptStruct Icarus.PlayerTrackersRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FPlayerTrackersRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BiomesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FBiomesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ProjectileFireParams
// Size: 0x08 (Inherited: 0x00)
struct FProjectileFireParams {
	float RangedWeaponDamageMultiplier; // 0x00(0x04)
	bool bUnbreakable; // 0x04(0x01)
	enum class EProjectileBreakModifier ProjectileBreakModifier; // 0x05(0x01)
	enum class EStealthAttackType StealthAttack; // 0x06(0x01)
	bool bOwnerHighlightProjectile; // 0x07(0x01)
};

// ScriptStruct Icarus.ProcessingItem
// Size: 0x28 (Inherited: 0x00)
struct FProcessingItem {
	struct AIcarusPlayerCharacter* CraftingPlayer; // 0x00(0x08)
	struct FProcessorRecipesRowHandle Recipe; // 0x08(0x18)
	int32_t CraftCount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Icarus.ProcessorRecipesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FProcessorRecipesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AccoladeData
// Size: 0xf8 (Inherited: 0x18)
struct FAccoladeData : FIcarusTableRowBase {
	struct FText DisplayName; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x48(0x28)
	struct TSoftClassPtr<UObject> AccoladeImpl; // 0x70(0x28)
	struct FPlayerAccoladeCategoriesEnum Category; // 0x98(0x10)
	struct FPlayerTrackersRowHandle Tracker; // 0xa8(0x18)
	struct FGameplayTagContainer Tags; // 0xc0(0x20)
	struct TArray<struct FRowHandle> ExtraDatas; // 0xe0(0x10)
	int32_t GoalCount; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct Icarus.PlayerAccoladeCategoriesEnum
// Size: 0x10 (Inherited: 0x10)
struct FPlayerAccoladeCategoriesEnum : FRowEnum {
};

// ScriptStruct Icarus.AccoladesEnum
// Size: 0x10 (Inherited: 0x10)
struct FAccoladesEnum : FRowEnum {
};

// ScriptStruct Icarus.AccountFlag
// Size: 0x18 (Inherited: 0x18)
struct FAccountFlag : FIcarusTableRowBase {
};

// ScriptStruct Icarus.AccountFlagsEnum
// Size: 0x10 (Inherited: 0x10)
struct FAccountFlagsEnum : FRowEnum {
};

// ScriptStruct Icarus.AccountFlagsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FAccountFlagsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ActionStaminaCostEventPairing
// Size: 0x1c (Inherited: 0x00)
struct FActionStaminaCostEventPairing {
	enum class EActionableEventType Event; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FStaminaActionCostsRowHandle StaminaCost; // 0x04(0x18)
};

// ScriptStruct Icarus.StaminaActionCostsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FStaminaActionCostsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ActionableData
// Size: 0x80 (Inherited: 0x18)
struct FActionableData : FIcarusTableRowBase {
	struct TMap<struct FActionsRowHandle, struct FActionList> ActionMapping; // 0x18(0x50)
	bool bUseClientPrediction; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct FRowHandle> GenericData; // 0x70(0x10)
};

// ScriptStruct Icarus.ActionsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FActionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ActionList
// Size: 0x68 (Inherited: 0x00)
struct FActionList {
	struct TMap<enum class EActionableEventType, struct FStaminaActionCostsRowHandle> InputTypes; // 0x00(0x50)
	struct FModifierStatesRowHandle ModifierState; // 0x50(0x18)
};

// ScriptStruct Icarus.ModifierStatesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FModifierStatesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ActionableEnum
// Size: 0x10 (Inherited: 0x10)
struct FActionableEnum : FRowEnum {
};

// ScriptStruct Icarus.ActionableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FActionableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ActionData
// Size: 0x100 (Inherited: 0x18)
struct FActionData : FIcarusTableRowBase {
	struct UActionableBehaviour* Behaviour; // 0x18(0x08)
	struct TSoftObjectPtr<UAnimMontage> TP_ActionMontage; // 0x20(0x28)
	struct TArray<struct FSuccessAnimSet> TP_SuccessAnimations; // 0x48(0x10)
	struct TArray<struct FName> TP_ActionFailMontageVariations; // 0x58(0x10)
	struct TArray<struct FName> TP_ActionMissMontageVariations; // 0x68(0x10)
	struct TSoftObjectPtr<UAnimMontage> FP_ActionMontage; // 0x78(0x28)
	struct TArray<struct FSuccessAnimSet> FP_SuccessAnimations; // 0xa0(0x10)
	struct TArray<struct FName> FP_ActionFailMontageVariations; // 0xb0(0x10)
	struct TArray<struct FName> FP_ActionMissMontageVariations; // 0xc0(0x10)
	struct FName BeginStaminaActionNotify; // 0xd0(0x08)
	bool WaitForActionComplete; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float ActionCooldown; // 0xdc(0x04)
	struct TArray<struct FStatsEnum> CooldownMultipliers; // 0xe0(0x10)
	struct FStatsEnum RequiredStat; // 0xf0(0x10)
};

// ScriptStruct Icarus.SuccessAnimSet
// Size: 0x28 (Inherited: 0x00)
struct FSuccessAnimSet {
	struct FValidHitTypesRowHandle SuccessType; // 0x00(0x18)
	struct TArray<struct FName> SuccessMontageVariations; // 0x18(0x10)
};

// ScriptStruct Icarus.ValidHitTypesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FValidHitTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ActionsEnum
// Size: 0x10 (Inherited: 0x10)
struct FActionsEnum : FRowEnum {
};

// ScriptStruct Icarus.ModifierStateSaveData
// Size: 0x0c (Inherited: 0x00)
struct FModifierStateSaveData {
	struct FName RowName; // 0x00(0x08)
	float TimeRemaining; // 0x08(0x04)
};

// ScriptStruct Icarus.SerializedActorArray
// Size: 0x20 (Inherited: 0x00)
struct FSerializedActorArray {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Icarus.SerializedIcarusActorRef
// Size: 0x10 (Inherited: 0x00)
struct FSerializedIcarusActorRef {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Icarus.FLODActorComponentSaveData
// Size: 0x1c (Inherited: 0x00)
struct FFLODActorComponentSaveData {
	struct FName TileName; // 0x00(0x08)
	int32_t LevelIndex; // 0x08(0x04)
	int32_t RecordIndex; // 0x0c(0x04)
	int32_t InstanceIndex; // 0x10(0x04)
	bool bSpawnedFromPool; // 0x14(0x01)
	bool bIsReservingInstance; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	int32_t CurrentFLODState; // 0x18(0x04)
};

// ScriptStruct Icarus.InventorySaveData
// Size: 0x18 (Inherited: 0x00)
struct FInventorySaveData {
	struct TArray<struct FInventorySlotSaveData> Slots; // 0x00(0x10)
	int32_t InventoryID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Icarus.InventorySlotSaveData
// Size: 0x40 (Inherited: 0x00)
struct FInventorySlotSaveData {
	int32_t Location; // 0x00(0x04)
	struct FName ItemStaticData; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString ItemGuid; // 0x10(0x10)
	struct TArray<struct FInventorySlotDynamicData> DynamicData; // 0x20(0x10)
	struct TArray<struct FInventorySlotStatData> AdditionalStats; // 0x30(0x10)
};

// ScriptStruct Icarus.InventorySlotStatData
// Size: 0x08 (Inherited: 0x00)
struct FInventorySlotStatData {
	int32_t Index; // 0x00(0x04)
	int32_t Value; // 0x04(0x04)
};

// ScriptStruct Icarus.InventorySlotDynamicData
// Size: 0x08 (Inherited: 0x00)
struct FInventorySlotDynamicData {
	int32_t Index; // 0x00(0x04)
	int32_t Value; // 0x04(0x04)
};

// ScriptStruct Icarus.AfflictionChance
// Size: 0x30 (Inherited: 0x18)
struct FAfflictionChance : FIcarusTableRowBase {
	struct TArray<struct FModifierStatesRowHandle> Afflictions; // 0x18(0x10)
	int32_t ChanceInPercent; // 0x28(0x04)
	int32_t DurationInSeconds; // 0x2c(0x04)
};

// ScriptStruct Icarus.AfflictionChanceEnum
// Size: 0x10 (Inherited: 0x10)
struct FAfflictionChanceEnum : FRowEnum {
};

// ScriptStruct Icarus.AfflictionChanceRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FAfflictionChanceRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AIAudioData
// Size: 0x1c8 (Inherited: 0x18)
struct FAIAudioData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> FootstepSound; // 0x18(0x28)
	struct FName FrontFootSocket; // 0x40(0x08)
	struct FName RearFootSocket; // 0x48(0x08)
	struct TSoftObjectPtr<UFMODEvent> MovementSound; // 0x50(0x28)
	struct TSoftObjectPtr<UFMODEvent> DeathCollisionSound; // 0x78(0x28)
	struct FName DeathCollisionSocket; // 0xa0(0x08)
	struct TSoftObjectPtr<UFMODEvent> WaterDeathSound; // 0xa8(0x28)
	struct FName VocalisationSocket; // 0xd0(0x08)
	struct FVocalisationsRowHandle AttackVocalisation; // 0xd8(0x18)
	struct FVocalisationsRowHandle FlinchVocalisation; // 0xf0(0x18)
	struct FVocalisationsRowHandle DeathVocalisation; // 0x108(0x18)
	struct TMap<enum class EAIAudioState, struct FAIStateVocalisation> StateVocalisations; // 0x120(0x50)
	struct TSoftClassPtr<UObject> ThreatComponentClass; // 0x170(0x28)
	int32_t ThreatLevel; // 0x198(0x04)
	struct FCreatureAudioThreatDataRowHandle ThreatConfig; // 0x19c(0x18)
	enum class EMusicConditionCombatState CombatMusicConditionOverride; // 0x1b4(0x01)
	char pad_1B5[0x3]; // 0x1b5(0x03)
	int32_t MusicConditionOverrideMinThreatLevel; // 0x1b8(0x04)
	float FootstepMaxDistance; // 0x1bc(0x04)
	float FoliageCheckMaxDistance; // 0x1c0(0x04)
	bool bUsesShelter; // 0x1c4(0x01)
	char pad_1C5[0x3]; // 0x1c5(0x03)
};

// ScriptStruct Icarus.CreatureAudioThreatDataRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FCreatureAudioThreatDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AIStateVocalisation
// Size: 0x48 (Inherited: 0x00)
struct FAIStateVocalisation {
	struct FVocalisationsRowHandle StateEnteredVocalisation; // 0x00(0x18)
	struct FVocalisationsRowHandle StatePersistentVocalisation; // 0x18(0x18)
	struct FVocalisationsRowHandle StateExitedVocalisation; // 0x30(0x18)
};

// ScriptStruct Icarus.VocalisationsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FVocalisationsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AIAudioDataEnum
// Size: 0x10 (Inherited: 0x10)
struct FAIAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.AIAudioDataRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FAIAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AICreatureType
// Size: 0x60 (Inherited: 0x18)
struct FAICreatureType : FIcarusTableRowBase {
	struct FText CreatureName; // 0x18(0x18)
	struct FGameplayTag Tag; // 0x30(0x08)
	struct FVirtualStatsEnum SpawnStat; // 0x38(0x10)
	struct FExperienceEventsRowHandle SkinningXPEvent; // 0x48(0x18)
};

// ScriptStruct Icarus.VirtualStatsEnum
// Size: 0x10 (Inherited: 0x10)
struct FVirtualStatsEnum : FStatsEnum {
};

// ScriptStruct Icarus.AICreatureTypeEnum
// Size: 0x10 (Inherited: 0x10)
struct FAICreatureTypeEnum : FRowEnum {
};

// ScriptStruct Icarus.AICreatureTypeRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FAICreatureTypeRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AIDescriptor
// Size: 0x48 (Inherited: 0x18)
struct FAIDescriptor : FIcarusTableRowBase {
	struct FGameplayTagContainer Tags; // 0x18(0x20)
	struct TArray<struct FStatsEnum> DescriptorStats; // 0x38(0x10)
};

// ScriptStruct Icarus.AIDescriptorsEnum
// Size: 0x10 (Inherited: 0x10)
struct FAIDescriptorsEnum : FRowEnum {
};

// ScriptStruct Icarus.AIDescriptorsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FAIDescriptorsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AIGrowth
// Size: 0xa0 (Inherited: 0x18)
struct FAIGrowth : FIcarusTableRowBase {
	struct TMap<struct FBaseStatsEnum, int32_t> Base; // 0x18(0x50)
	struct UCurveFloat* Health; // 0x68(0x08)
	struct UCurveFloat* MeleeDamage; // 0x70(0x08)
	struct UCurveFloat* MovementSpeed; // 0x78(0x08)
	struct TArray<struct FCustomScaledStat> CustomStats; // 0x80(0x10)
	struct UCurveFloat* ExperienceMultiplier; // 0x90(0x08)
	struct UCurveFloat* ProtectiveThreatOverDistance; // 0x98(0x08)
};

// ScriptStruct Icarus.CustomScaledStat
// Size: 0x18 (Inherited: 0x00)
struct FCustomScaledStat {
	struct FBaseStatsEnum Stat; // 0x00(0x10)
	struct UCurveFloat* Curve; // 0x10(0x08)
};

// ScriptStruct Icarus.BaseStatsEnum
// Size: 0x10 (Inherited: 0x10)
struct FBaseStatsEnum : FStatsEnum {
};

// ScriptStruct Icarus.AIGrowthEnum
// Size: 0x10 (Inherited: 0x10)
struct FAIGrowthEnum : FRowEnum {
};

// ScriptStruct Icarus.AIGrowthRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FAIGrowthRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AIRelationshipData
// Size: 0x48 (Inherited: 0x18)
struct FAIRelationshipData : FIcarusTableRowBase {
	struct TArray<struct FAIRelationshipsRowHandle> HostileRelationships; // 0x18(0x10)
	struct TArray<struct FAIRelationshipsRowHandle> NeutralRelationships; // 0x28(0x10)
	struct TArray<struct FAIRelationshipsRowHandle> FriendlyRelationships; // 0x38(0x10)
};

// ScriptStruct Icarus.AIRelationshipsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FAIRelationshipsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AIRelationshipsEnum
// Size: 0x10 (Inherited: 0x10)
struct FAIRelationshipsEnum : FRowEnum {
};

// ScriptStruct Icarus.AISetup
// Size: 0x200 (Inherited: 0x18)
struct FAISetup : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> ActorClass; // 0x18(0x28)
	struct TSoftClassPtr<UObject> ControllerClass; // 0x40(0x28)
	struct FAICreatureTypeRowHandle CreatureType; // 0x68(0x18)
	struct TArray<struct FAIDescriptorsRowHandle> Descriptors; // 0x80(0x10)
	struct FItemsStaticRowHandle DeadItem; // 0x90(0x18)
	struct FGOAPSetupRowHandle GOAPSetup; // 0xa8(0x18)
	struct UNavigationQueryFilter* DefaultNavigationFilter; // 0xc0(0x08)
	struct FAIRelationshipsRowHandle Relationships; // 0xc8(0x18)
	struct TArray<struct FTagQueriesRowHandle> NotifiedNPCTypes; // 0xe0(0x10)
	bool bNotifySelfType; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FAIGrowthRowHandle AIGrowth; // 0xf4(0x18)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct TMap<enum class EMovementState, struct FMovementStateData> MovementMapping; // 0x110(0x50)
	struct FHuntingSetupRowHandle HuntingSetup; // 0x160(0x18)
	struct TArray<struct FCriticalHitLocation> CriticalHitBones; // 0x178(0x10)
	struct FAIAudioDataRowHandle Audio; // 0x188(0x18)
	struct TArray<struct FName> CollisionHitEventBones; // 0x1a0(0x10)
	int32_t LatentDeathDuration; // 0x1b0(0x04)
	struct FItemRewardsRowHandle Trophy; // 0x1b4(0x18)
	struct FItemRewardsRowHandle Loot; // 0x1cc(0x18)
	struct FItemRewardsRowHandle Hitable; // 0x1e4(0x18)
	char pad_1FC[0x4]; // 0x1fc(0x04)
};

// ScriptStruct Icarus.ItemRewardsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FItemRewardsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CriticalHitLocation
// Size: 0x0c (Inherited: 0x00)
struct FCriticalHitLocation {
	struct FName BoneName; // 0x00(0x08)
	bool AffectsChildren; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Icarus.HuntingSetupRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FHuntingSetupRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MovementStateData
// Size: 0x1c (Inherited: 0x00)
struct FMovementStateData {
	float MaxWalkSpeed; // 0x00(0x04)
	float GroundFriction; // 0x04(0x04)
	float BrakingFriction; // 0x08(0x04)
	float MaxAcceleration; // 0x0c(0x04)
	float BrakingDeceleration; // 0x10(0x04)
	float RotationRate; // 0x14(0x04)
	float MaxSwimSpeed; // 0x18(0x04)
};

// ScriptStruct Icarus.TagQueriesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FTagQueriesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.GOAPSetupRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FGOAPSetupRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AISetupEnum
// Size: 0x10 (Inherited: 0x10)
struct FAISetupEnum : FRowEnum {
};

// ScriptStruct Icarus.AISetupRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FAISetupRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AISpawnConfigData
// Size: 0xa0 (Inherited: 0x18)
struct FAISpawnConfigData : FIcarusTableRowBase {
	struct TMap<struct FAISetupEnum, struct FAISpawnRulesList> AISpawnRules; // 0x18(0x50)
	struct TSoftObjectPtr<UGameplayTexture> SpawnMap; // 0x68(0x28)
	struct TArray<struct FAISpawnZoneSetup> SpawnZones; // 0x90(0x10)
};

// ScriptStruct Icarus.AISpawnZoneSetup
// Size: 0x1c (Inherited: 0x00)
struct FAISpawnZoneSetup {
	struct FColor Color; // 0x00(0x04)
	struct FAISpawnZonesRowHandle SpawnZone; // 0x04(0x18)
};

// ScriptStruct Icarus.AISpawnZonesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FAISpawnZonesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AISpawnRulesList
// Size: 0x10 (Inherited: 0x00)
struct FAISpawnRulesList {
	struct TArray<struct FAISpawnRulesEnum> SpawnRules; // 0x00(0x10)
};

// ScriptStruct Icarus.AISpawnRulesEnum
// Size: 0x10 (Inherited: 0x10)
struct FAISpawnRulesEnum : FRowEnum {
};

// ScriptStruct Icarus.HeatmapAISpawnData
// Size: 0x30 (Inherited: 0x00)
struct FHeatmapAISpawnData {
	struct TSoftObjectPtr<UGameplayTexture> HeatmapTexture; // 0x00(0x28)
	enum class EHeatmapColorChannel HeatmapTextureChannel; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t HeatmapSpawnWeight; // 0x2c(0x04)
};

// ScriptStruct Icarus.BiomeAISpawnData
// Size: 0x68 (Inherited: 0x00)
struct FBiomeAISpawnData {
	struct TMap<struct FAISetupEnum, int32_t> SpawnList; // 0x00(0x50)
	int32_t BiomeSpawnDensity; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct FAutonomousSpawnsRowHandle> RelevantAutonomousSpawners; // 0x58(0x10)
};

// ScriptStruct Icarus.AutonomousSpawnsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FAutonomousSpawnsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AISpawnConfigEnum
// Size: 0x10 (Inherited: 0x10)
struct FAISpawnConfigEnum : FRowEnum {
};

// ScriptStruct Icarus.AISpawnConfigRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FAISpawnConfigRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SpawnBlocker
// Size: 0x18 (Inherited: 0x00)
struct FSpawnBlocker {
	struct FVector BlockerLocation; // 0x00(0x0c)
	float ExpirationTime; // 0x0c(0x04)
	float Duration; // 0x10(0x04)
	bool bHasPlayerLeftArea; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Icarus.TileSpawnData
// Size: 0x10 (Inherited: 0x00)
struct FTileSpawnData {
	struct TArray<struct FVector> SpawnPoints; // 0x00(0x10)
};

// ScriptStruct Icarus.AISpawnRuleData
// Size: 0x98 (Inherited: 0x18)
struct FAISpawnRuleData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> SpawnFilter; // 0x18(0x28)
	bool InverseCondition; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TMap<struct FString, int32_t> FilterParams; // 0x48(0x50)
};

// ScriptStruct Icarus.AISpawnRulesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FAISpawnRulesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AISpawnZones
// Size: 0x90 (Inherited: 0x18)
struct FAISpawnZones : FIcarusTableRowBase {
	struct FBiomeAISpawnData Creatures; // 0x18(0x68)
	int32_t MinLevel; // 0x80(0x04)
	int32_t MedianLevel; // 0x84(0x04)
	int32_t MaxLevel; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct Icarus.AISpawnZonesEnum
// Size: 0x10 (Inherited: 0x10)
struct FAISpawnZonesEnum : FRowEnum {
};

// ScriptStruct Icarus.AmmoTypeData
// Size: 0x78 (Inherited: 0x18)
struct FAmmoTypeData : FIcarusTableRowBase {
	int32_t ProjectileCount; // 0x18(0x04)
	int32_t ProjectileDamage; // 0x1c(0x04)
	struct FVector2D ProjectileAccuracy; // 0x20(0x08)
	struct TMap<struct FStatsEnum, int32_t> Stats; // 0x28(0x50)
};

// ScriptStruct Icarus.AmmoTypesEnum
// Size: 0x10 (Inherited: 0x10)
struct FAmmoTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.AmmoTypesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FAmmoTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AnimNode_ExtensionLimit
// Size: 0xd8 (Inherited: 0xc8)
struct FAnimNode_ExtensionLimit : FAnimNode_SkeletalControlBase {
	struct TArray<struct FExtensionLimitLimbDefinition> LimbDefinitions; // 0xc8(0x10)
};

// ScriptStruct Icarus.ExtensionLimitLimbDefinition
// Size: 0x24 (Inherited: 0x00)
struct FExtensionLimitLimbDefinition {
	struct FBoneReference IKLimbBone; // 0x00(0x10)
	struct FBoneReference FKLimbBone; // 0x10(0x10)
	int32_t NumBonesInLimb; // 0x20(0x04)
};

// ScriptStruct Icarus.AnimNode_SpeedWarping3D
// Size: 0xf0 (Inherited: 0xc8)
struct FAnimNode_SpeedWarping3D : FAnimNode_SkeletalControlBase {
	struct TArray<struct FSpeedWarping3DLimbDefinition> LimbDefinitions; // 0xc8(0x10)
	enum class EBoneControlSpace Space; // 0xd8(0x01)
	enum class ECollisionChannel TraceProfile; // 0xd9(0x01)
	char pad_DA[0x2]; // 0xda(0x02)
	struct FVector Direction; // 0xdc(0x0c)
	float SpeedScaling; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct Icarus.SpeedWarping3DLimbDefinition
// Size: 0x34 (Inherited: 0x00)
struct FSpeedWarping3DLimbDefinition {
	struct FBoneReference IKLimbBone; // 0x00(0x10)
	struct FBoneReference FKLimbBone; // 0x10(0x10)
	struct FBoneReference IKLimbTargetBone; // 0x20(0x10)
	int32_t NumBonesInLimb; // 0x30(0x04)
};

// ScriptStruct Icarus.ArmourSet
// Size: 0x30 (Inherited: 0x18)
struct FArmourSet : FIcarusTableRowBase {
	struct TArray<struct FArmourSetBonusRowHandle> SetBonus; // 0x18(0x10)
	enum class EPlayerArmourTypeFMODParam FMODParam; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Icarus.ArmourSetBonusRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FArmourSetBonusRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ArmourSetBonus
// Size: 0x88 (Inherited: 0x18)
struct FArmourSetBonus : FIcarusTableRowBase {
	int32_t RequiredGear; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText Description; // 0x20(0x18)
	struct TMap<struct FBaseStatsEnum, int32_t> StatsGranted; // 0x38(0x50)
};

// ScriptStruct Icarus.ArmourData
// Size: 0x2b0 (Inherited: 0x18)
struct FArmourData : FIcarusTableRowBase {
	struct TSoftObjectPtr<USkeletalMesh> ArmourMesh; // 0x18(0x28)
	struct TSoftObjectPtr<USkeletalMesh> HabArmourMesh; // 0x40(0x28)
	struct TSoftObjectPtr<USkeletalMesh> FemaleMeshVariant; // 0x68(0x28)
	struct TSoftObjectPtr<USkeletalMesh> FirstPersonMeshVariant; // 0x90(0x28)
	bool bHideFirstPersonUndersuit; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct TSoftClassPtr<UObject> AnimBlueprintClass; // 0xc0(0x28)
	struct TSoftClassPtr<UObject> FemaleAnimBlueprintClass; // 0xe8(0x28)
	struct TSoftClassPtr<UObject> FirstPersonAnimBlueprintClass; // 0x110(0x28)
	struct TMap<struct FBaseStatsEnum, int32_t> ArmourStats; // 0x138(0x50)
	enum class EArmourType ArmourType; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	struct FArmourSetsRowHandle ArmourSet; // 0x18c(0x18)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct TArray<struct FArmourRowHandle> ImplicitDefaultArmour; // 0x1a8(0x10)
	bool bOverrideDefaultMaterials; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> ArmourMeshMaterialOverrides; // 0x1c0(0x50)
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> FemaleArmourMeshMaterialOverrides; // 0x210(0x50)
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> FPArmourMeshMaterialOverrides; // 0x260(0x50)
};

// ScriptStruct Icarus.ArmourRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FArmourRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ArmourSetsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FArmourSetsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ArmourEnum
// Size: 0x10 (Inherited: 0x10)
struct FArmourEnum : FRowEnum {
};

// ScriptStruct Icarus.ArmourSetBonusEnum
// Size: 0x10 (Inherited: 0x10)
struct FArmourSetBonusEnum : FRowEnum {
};

// ScriptStruct Icarus.ArmourSetsEnum
// Size: 0x10 (Inherited: 0x10)
struct FArmourSetsEnum : FRowEnum {
};

// ScriptStruct Icarus.AssetReferenceData
// Size: 0x88 (Inherited: 0x18)
struct FAssetReferenceData : FIcarusTableRowBase {
	enum class EAssetType AssetType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TSoftClassPtr<UObject> SoftClassPtr; // 0x20(0x28)
	struct TSoftObjectPtr<UObject> SoftObjectPtr; // 0x48(0x28)
	struct UObject* HardClassPtr; // 0x70(0x08)
	struct UObject* HardObjectPtr; // 0x78(0x08)
	bool bHardReference; // 0x80(0x01)
	bool bPreload; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
};

// ScriptStruct Icarus.AssetReferencesEnum
// Size: 0x10 (Inherited: 0x10)
struct FAssetReferencesEnum : FRowEnum {
};

// ScriptStruct Icarus.AssetReferencesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FAssetReferencesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AudioContextCaveColliderSet
// Size: 0x50 (Inherited: 0x00)
struct FAudioContextCaveColliderSet {
	struct TSet<struct UPrimitiveComponent*> Colliders; // 0x00(0x50)
};

// ScriptStruct Icarus.AudioContextSubscriber
// Size: 0x20 (Inherited: 0x00)
struct FAudioContextSubscriber {
	struct UFMODAudioComponent* AudioComponent; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct Icarus.AudioOcclusionSocketTracePoint
// Size: 0x18 (Inherited: 0x00)
struct FAudioOcclusionSocketTracePoint {
	struct FName TraceName; // 0x00(0x08)
	struct FName TargetSocket; // 0x08(0x08)
	struct USceneComponent* Target; // 0x10(0x08)
};

// ScriptStruct Icarus.AudioOcclusionTracePoint
// Size: 0x14 (Inherited: 0x00)
struct FAudioOcclusionTracePoint {
	struct FName Name; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
};

// ScriptStruct Icarus.AudioOcclusionTraceResult
// Size: 0x08 (Inherited: 0x00)
struct FAudioOcclusionTraceResult {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Icarus.AuraInfo
// Size: 0x40 (Inherited: 0x18)
struct FAuraInfo : FIcarusTableRowBase {
	struct FModifierStatesRowHandle Modifier; // 0x18(0x18)
	struct FStatsEnum Stat; // 0x30(0x10)
};

// ScriptStruct Icarus.FindAuraResult
// Size: 0x20 (Inherited: 0x00)
struct FFindAuraResult {
	struct FModifierStatesRowHandle AuraType; // 0x00(0x18)
	struct UModifierStateComponent* Component; // 0x18(0x08)
};

// ScriptStruct Icarus.AuraInstances
// Size: 0x10 (Inherited: 0x00)
struct FAuraInstances {
	struct TArray<struct FAuraInstance> Instances; // 0x00(0x10)
};

// ScriptStruct Icarus.AuraInstance
// Size: 0x2b0 (Inherited: 0x00)
struct FAuraInstance {
	struct FModifierStateData AuraModifier; // 0x00(0x240)
	struct FModifierStatesRowHandle ModifierRow; // 0x240(0x18)
	struct UModifierStateComponent* OwningStateComp; // 0x258(0x08)
	struct TMap<struct AActor*, int32_t> CurrentAffectedActors; // 0x260(0x50)
};

// ScriptStruct Icarus.ModifierStateData
// Size: 0x240 (Inherited: 0x18)
struct FModifierStateData : FIcarusTableRowBase {
	struct UTexture2D* ModifierIcon; // 0x18(0x08)
	enum class EModifierType Type; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FText ModifierName; // 0x28(0x18)
	struct FText ModifierDescription; // 0x40(0x18)
	bool VisibleToPlayer; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TSoftClassPtr<UObject> CosmeticAttachComponent; // 0x60(0x28)
	struct FModifierStateAudioDataRowHandle AudioData; // 0x88(0x18)
	struct TMap<struct FStatsEnum, int32_t> GrantedStats; // 0xa0(0x50)
	bool bAura; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	int32_t AuraRange; // 0xf4(0x04)
	struct FAuraFlags AuraFlags; // 0xf8(0x03)
	char pad_FB[0x1]; // 0xfb(0x01)
	struct FModifierStatesRowHandle ModifierGrantedByAura; // 0xfc(0x18)
	bool bEscalates; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	struct FAfflictionChanceRowHandle Escalation; // 0x118(0x18)
	float EscalationTime; // 0x130(0x04)
	bool bRemovedOnEscalation; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
	struct TSoftClassPtr<UObject> Behaviour; // 0x138(0x28)
	struct TMap<struct FString, struct FRandomRangeValue> ModifierVariables; // 0x160(0x50)
	bool ShouldTick; // 0x1b0(0x01)
	bool TickOnApply; // 0x1b1(0x01)
	char pad_1B2[0x2]; // 0x1b2(0x02)
	float ModifierTickRate; // 0x1b4(0x04)
	struct TArray<struct FStatsEnum> ModifierLifetimeAffectors; // 0x1b8(0x10)
	bool RemovedOnDeath; // 0x1c8(0x01)
	enum class EModifierMergeType MergeType; // 0x1c9(0x01)
	char pad_1CA[0x2]; // 0x1ca(0x02)
	int32_t MaxStackNum; // 0x1cc(0x04)
	struct FGameplayTagContainer ModifierTags; // 0x1d0(0x20)
	struct FGameplayTagQuery ModifierAllowedQuery; // 0x1f0(0x48)
	bool bEffectsObjects; // 0x238(0x01)
	bool bEffectsNPCs; // 0x239(0x01)
	bool bEffectsPlayers; // 0x23a(0x01)
	bool SaveToDatabase; // 0x23b(0x01)
	char pad_23C[0x4]; // 0x23c(0x04)
};

// ScriptStruct Icarus.RandomRangeValue
// Size: 0x08 (Inherited: 0x00)
struct FRandomRangeValue {
	float BaseValue; // 0x00(0x04)
	float Deviation; // 0x04(0x04)
};

// ScriptStruct Icarus.AuraFlags
// Size: 0x03 (Inherited: 0x00)
struct FAuraFlags {
	bool EffectsSelf; // 0x00(0x01)
	bool EffectsPlayers; // 0x01(0x01)
	bool EffectsNPCs; // 0x02(0x01)
};

// ScriptStruct Icarus.ModifierStateAudioDataRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FModifierStateAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AutonomousSpawnData
// Size: 0x60 (Inherited: 0x18)
struct FAutonomousSpawnData : FIcarusTableRowBase {
	struct FAISetupEnum AISetup; // 0x18(0x10)
	struct TSoftClassPtr<UObject> AISpawnBehaviour; // 0x28(0x28)
	int32_t MaxNumAroundPlayers; // 0x50(0x04)
	int32_t MaxSpawnCount; // 0x54(0x04)
	int32_t MaxDistanceToPlayers; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Icarus.AutonomousSpawnsEnum
// Size: 0x10 (Inherited: 0x10)
struct FAutonomousSpawnsEnum : FRowEnum {
};

// ScriptStruct Icarus.PendingInventorySwap
// Size: 0x20 (Inherited: 0x00)
struct FPendingInventorySwap {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Icarus.BallisticData
// Size: 0x1d8 (Inherited: 0x18)
struct FBallisticData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; // 0x18(0x28)
	float Damage; // 0x40(0x04)
	int32_t DamageVariationPercentage; // 0x44(0x04)
	bool bCanStealthAttack; // 0x48(0x01)
	bool bHomingProjectile; // 0x49(0x01)
	bool bCanKillCam; // 0x4a(0x01)
	bool bUnbreakableDuringKillCam; // 0x4b(0x01)
	float Weight; // 0x4c(0x04)
	float GravityScale; // 0x50(0x04)
	bool AllowPickupAfterSettle; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct TSoftClassPtr<UObject> PayloadClass; // 0x58(0x28)
	enum class EPayloadDeploymentType PayloadDeploymentType; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float PayloadDeploymentTimerDelay; // 0x84(0x04)
	struct TSoftObjectPtr<UParticleSystem> TrailParticle; // 0x88(0x28)
	float BreakChance; // 0xb0(0x04)
	int32_t DurabilityDamage; // 0xb4(0x04)
	float PostDeployLifetime; // 0xb8(0x04)
	int32_t CullDistanceSquared; // 0xbc(0x04)
	bool AttachOnHit; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	struct FBounceSettings ProjectileBounceSettings; // 0xc4(0x18)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TSoftObjectPtr<UStaticMesh> OverrideStaticMesh; // 0xe0(0x28)
	struct TSoftObjectPtr<USkeletalMesh> OverrideSkeletalMesh; // 0x108(0x28)
	struct TSoftObjectPtr<UPhysicsAsset> OverridePhysicsAsset; // 0x130(0x28)
	bool RotationFollowsVelocity; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	struct FRotator VelocityRotationOffset; // 0x15c(0x0c)
	struct FRotator AngularRotation; // 0x168(0x0c)
	struct FVector SpawnPositionOffset; // 0x174(0x0c)
	struct FBallisticAudioData AudioData; // 0x180(0x50)
	bool bUseActorPooling; // 0x1d0(0x01)
	char pad_1D1[0x3]; // 0x1d1(0x03)
	float OnHitAINoiseEventRange; // 0x1d4(0x04)
};

// ScriptStruct Icarus.BallisticAudioData
// Size: 0x50 (Inherited: 0x00)
struct FBallisticAudioData {
	struct TSoftObjectPtr<UFMODEvent> FlySound; // 0x00(0x28)
	struct TSoftObjectPtr<UFMODEvent> ImpactSound; // 0x28(0x28)
};

// ScriptStruct Icarus.BounceSettings
// Size: 0x18 (Inherited: 0x00)
struct FBounceSettings {
	bool bBounceAngleAffectsFriction; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Bounciness; // 0x04(0x04)
	float Friction; // 0x08(0x04)
	float BounceVelocityStopSimulatingThreshold; // 0x0c(0x04)
	float MinFrictionFraction; // 0x10(0x04)
	float MinTimeBetweenBounces; // 0x14(0x04)
};

// ScriptStruct Icarus.BallisticEnum
// Size: 0x10 (Inherited: 0x10)
struct FBallisticEnum : FRowEnum {
};

// ScriptStruct Icarus.BallisticRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FBallisticRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BiomeAudioData
// Size: 0x70 (Inherited: 0x18)
struct FBiomeAudioData : FIcarusTableRowBase {
	enum class EGlobalEnvironmentBiomeFMODParam BiomeFMODParam; // 0x18(0x01)
	enum class EMusicConditionLocation LocationMusicCondition; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct TSoftObjectPtr<UFMODEvent> AudioAmbienceBase; // 0x20(0x28)
	struct TSoftObjectPtr<UFMODEvent> AudioAmbienceTransitional; // 0x48(0x28)
};

// ScriptStruct Icarus.BiomeAudioDataEnum
// Size: 0x10 (Inherited: 0x10)
struct FBiomeAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.BiomeAudioDataRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FBiomeAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BiomesEnum
// Size: 0x10 (Inherited: 0x10)
struct FBiomesEnum : FRowEnum {
};

// ScriptStruct Icarus.PersistentBlockerRecord
// Size: 0x20 (Inherited: 0x00)
struct FPersistentBlockerRecord {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString BlockerActorClassName; // 0x08(0x10)
	int32_t BlockerActorIcarusUID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Icarus.BlueprintUnlock
// Size: 0x58 (Inherited: 0x18)
struct FBlueprintUnlock : FIcarusTableRowBase {
	struct FItemableRowHandle Itemable; // 0x18(0x18)
	struct TArray<struct FCharacterFlagsRowHandle> Requirements; // 0x30(0x10)
	struct TArray<struct FCharacterFlagsRowHandle> Unlocks; // 0x40(0x10)
	int32_t RequiredPointsToUnlock; // 0x50(0x04)
	int32_t RequiredLevel; // 0x54(0x04)
};

// ScriptStruct Icarus.CharacterFlagsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FCharacterFlagsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ItemableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FItemableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BlueprintUnlocksEnum
// Size: 0x10 (Inherited: 0x10)
struct FBlueprintUnlocksEnum : FRowEnum {
};

// ScriptStruct Icarus.BlueprintUnlocksRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FBlueprintUnlocksRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FunctionContext
// Size: 0x18 (Inherited: 0x00)
struct FFunctionContext {
	struct UObject* ContextClass; // 0x00(0x08)
	struct FString FunctionToExecute; // 0x08(0x10)
};

// ScriptStruct Icarus.BuildableAudioData
// Size: 0x188 (Inherited: 0x18)
struct FBuildableAudioData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> BuildingPlacedSound; // 0x18(0x28)
	struct TSoftObjectPtr<UFMODEvent> BuildingStressDamageSound; // 0x40(0x28)
	struct TSoftObjectPtr<UFMODEvent> BuildingDestroyedSound; // 0x68(0x28)
	struct TSoftObjectPtr<UFMODEvent> BuildingDamagedSound; // 0x90(0x28)
	struct TSoftObjectPtr<UFMODEvent> BuildingDestructibleDamagedSound; // 0xb8(0x28)
	struct TSoftObjectPtr<UFMODEvent> BuildingWeatherDamageSound; // 0xe0(0x28)
	struct TSoftObjectPtr<UFMODEvent> BuildingWeatherDamageStrippedSound; // 0x108(0x28)
	struct TSoftObjectPtr<UFMODEvent> BuildingWeatherUnzippingSound; // 0x130(0x28)
	struct TSoftObjectPtr<UFMODEvent> BuildingRepairedSound; // 0x158(0x28)
	float BuildingOcclusionValue; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
};

// ScriptStruct Icarus.BuildableAudioDataEnum
// Size: 0x10 (Inherited: 0x10)
struct FBuildableAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.BuildableAudioDataRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FBuildableAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BuildableData
// Size: 0xb0 (Inherited: 0x18)
struct FBuildableData : FIcarusTableRowBase {
	struct UBuildableComponent* Behaviour; // 0x18(0x08)
	struct FBuildingStabilityRowHandle Stability; // 0x20(0x18)
	struct FBuildingTypesRowHandle Type; // 0x38(0x18)
	struct TArray<struct FBuildingVariation> Variations; // 0x50(0x10)
	struct TMap<struct FStatsEnum, int32_t> Stats; // 0x60(0x50)
};

// ScriptStruct Icarus.BuildingVariation
// Size: 0x98 (Inherited: 0x00)
struct FBuildingVariation {
	struct FText Name; // 0x00(0x18)
	struct FTalentsRowHandle Requirement; // 0x18(0x18)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x30(0x28)
	struct TSoftClassPtr<UObject> Blueprint; // 0x58(0x28)
	struct FBuildableAudioDataRowHandle Audio; // 0x80(0x18)
};

// ScriptStruct Icarus.BuildingTypesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FBuildingTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BuildingStabilityRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FBuildingStabilityRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BuildableEnum
// Size: 0x10 (Inherited: 0x10)
struct FBuildableEnum : FRowEnum {
};

// ScriptStruct Icarus.BuildableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FBuildableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SerializedGrid
// Size: 0x60 (Inherited: 0x00)
struct FSerializedGrid {
	struct FTransform GridTrans; // 0x00(0x30)
	struct TArray<struct ABuildingBase*> BuildingClasses; // 0x30(0x10)
	struct TArray<struct FTransform> BuildingTrans; // 0x40(0x10)
	struct TArray<struct FItemData> BuildingItemData; // 0x50(0x10)
};

// ScriptStruct Icarus.DatabaseBuildingGrid
// Size: 0x40 (Inherited: 0x00)
struct FDatabaseBuildingGrid {
	struct FTransform GridTransform; // 0x00(0x30)
	struct TArray<struct FDatabaseBuildingType> BuildingTypes; // 0x30(0x10)
};

// ScriptStruct Icarus.DatabaseBuildingType
// Size: 0x20 (Inherited: 0x00)
struct FDatabaseBuildingType {
	struct FName BuildableRowName; // 0x00(0x08)
	struct FName BuildingItemStaticRowName; // 0x08(0x08)
	struct TArray<struct FBuildingInstance> BuildingInstances; // 0x10(0x10)
};

// ScriptStruct Icarus.BuildingInstance
// Size: 0x40 (Inherited: 0x00)
struct FBuildingInstance {
	struct FTransform Transform; // 0x00(0x30)
	int32_t Variation; // 0x30(0x04)
	int32_t IcarusUID; // 0x34(0x04)
	float BurnTimeRemaining; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Icarus.BuildingGridSaveData
// Size: 0x50 (Inherited: 0x00)
struct FBuildingGridSaveData {
	char pad_0[0x10]; // 0x00(0x10)
	struct FTransform GridTransform; // 0x10(0x30)
	struct TArray<struct FDatabaseBuildingData> BuildingTypes; // 0x40(0x10)
};

// ScriptStruct Icarus.DatabaseBuildingData
// Size: 0x20 (Inherited: 0x00)
struct FDatabaseBuildingData {
	struct FName BuildableRowName; // 0x00(0x08)
	struct FName BuildingItemStaticRowName; // 0x08(0x08)
	struct TArray<struct FBuildingInfo> BuildingInstances; // 0x10(0x10)
};

// ScriptStruct Icarus.BuildingInfo
// Size: 0x60 (Inherited: 0x00)
struct FBuildingInfo {
	struct FTransform Transform; // 0x00(0x30)
	int32_t Variation; // 0x30(0x04)
	int32_t IcarusUID; // 0x34(0x04)
	float BurnTimeRemaining; // 0x38(0x04)
	int32_t HealthPercentage; // 0x3c(0x04)
	struct TArray<struct FBuildingRecordStatData> AdditionalStats; // 0x40(0x10)
	bool bIsInCave; // 0x50(0x01)
	bool bSupportedByGround; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	float AnchorStrength; // 0x54(0x04)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct Icarus.BuildingRecordStatData
// Size: 0x0c (Inherited: 0x00)
struct FBuildingRecordStatData {
	struct FName Stat; // 0x00(0x08)
	int32_t Value; // 0x08(0x04)
};

// ScriptStruct Icarus.BuildingStability
// Size: 0x40 (Inherited: 0x18)
struct FBuildingStability : FIcarusTableRowBase {
	float BuildingTier; // 0x18(0x04)
	float MaxHardStability; // 0x1c(0x04)
	int32_t HardStabilityMaxRange; // 0x20(0x04)
	float MinimumUnstableStability; // 0x24(0x04)
	float StabilityPassMultiplier; // 0x28(0x04)
	float MaxAnchoredStability; // 0x2c(0x04)
	float LowestGreenStability; // 0x30(0x04)
	float YellowStability; // 0x34(0x04)
	float HighestRedStability; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Icarus.BuildingStabilityEnum
// Size: 0x10 (Inherited: 0x10)
struct FBuildingStabilityEnum : FRowEnum {
};

// ScriptStruct Icarus.BuildingTypesEnum
// Size: 0x10 (Inherited: 0x10)
struct FBuildingTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.CaveDeepMiningOreDeposit
// Size: 0x30 (Inherited: 0x00)
struct FCaveDeepMiningOreDeposit {
	struct FTransform Transform; // 0x00(0x30)
};

// ScriptStruct Icarus.CaveExoticVoxel
// Size: 0x30 (Inherited: 0x00)
struct FCaveExoticVoxel {
	struct FTransform Transform; // 0x00(0x30)
};

// ScriptStruct Icarus.CaveEntranceActor
// Size: 0x40 (Inherited: 0x00)
struct FCaveEntranceActor {
	struct AActor* EntranceClass; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct Icarus.CaveFoliage
// Size: 0x38 (Inherited: 0x00)
struct FCaveFoliage {
	struct TSoftObjectPtr<UFoliageType> FoliageType; // 0x00(0x28)
	struct TArray<struct FCaveFoliageInstance> Instances; // 0x28(0x10)
};

// ScriptStruct Icarus.CaveFoliageInstance
// Size: 0x40 (Inherited: 0x00)
struct FCaveFoliageInstance {
	struct FTransform Transform; // 0x00(0x30)
	int32_t AttachedMeshIndex; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct Icarus.CaveLake
// Size: 0x70 (Inherited: 0x00)
struct FCaveLake {
	struct FTransform Transform; // 0x00(0x30)
	struct FWaterSetupRowHandle WaterSetup; // 0x30(0x18)
	enum class ESplineLoopDirection SplineDirection; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FVector> EdgeSplinePoints; // 0x50(0x10)
	float EdgeSplineDensity; // 0x60(0x04)
	char pad_64[0xc]; // 0x64(0x0c)
};

// ScriptStruct Icarus.WaterSetupRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FWaterSetupRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CaveVolume
// Size: 0x30 (Inherited: 0x00)
struct FCaveVolume {
	struct FTransform Transform; // 0x00(0x30)
};

// ScriptStruct Icarus.CaveVoid
// Size: 0x30 (Inherited: 0x00)
struct FCaveVoid {
	struct FTransform Transform; // 0x00(0x30)
};

// ScriptStruct Icarus.CaveEntrance
// Size: 0x30 (Inherited: 0x00)
struct FCaveEntrance {
	struct FTransform Transform; // 0x00(0x30)
};

// ScriptStruct Icarus.CaveLight
// Size: 0x80 (Inherited: 0x00)
struct FCaveLight {
	struct FTransform Transform; // 0x00(0x30)
	enum class ECaveLightType LightType; // 0x30(0x01)
	bool bTrackSun; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float SunlightPercentage; // 0x34(0x04)
	struct FColor LightTint; // 0x38(0x04)
	float Intensity; // 0x3c(0x04)
	bool bCastShadows; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float VolumetricScatteringIntensity; // 0x44(0x04)
	bool bCastVolumetricShadow; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float MaxDrawDistance; // 0x4c(0x04)
	float Temperature; // 0x50(0x04)
	bool bUseTemperature; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float AttenuationRadius; // 0x58(0x04)
	float InnerConeAngle; // 0x5c(0x04)
	float OuterConeAngle; // 0x60(0x04)
	float SourceRadius; // 0x64(0x04)
	float SourceWidth; // 0x68(0x04)
	float SourceHeight; // 0x6c(0x04)
	float BarnDoorAngle; // 0x70(0x04)
	char pad_74[0xc]; // 0x74(0x0c)
};

// ScriptStruct Icarus.CaveMesh
// Size: 0xb0 (Inherited: 0x00)
struct FCaveMesh {
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x00(0x28)
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> MaterialOverrides; // 0x28(0x50)
	char pad_78[0x8]; // 0x78(0x08)
	struct FTransform Transform; // 0x80(0x30)
};

// ScriptStruct Icarus.Challenge
// Size: 0x90 (Inherited: 0x18)
struct FChallenge : FIcarusTableRowBase {
	struct FText Name; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x48(0x28)
	struct FExperienceInfo ExperienceGranted; // 0x70(0x1c)
	enum class EChallengeTypes Type; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
};

// ScriptStruct Icarus.ExperienceInfo
// Size: 0x1c (Inherited: 0x00)
struct FExperienceInfo {
	struct FExperienceEventsRowHandle ExperienceEvent; // 0x00(0x18)
	int32_t GainedExperience; // 0x18(0x04)
};

// ScriptStruct Icarus.ChallengesEnum
// Size: 0x10 (Inherited: 0x10)
struct FChallengesEnum : FRowEnum {
};

// ScriptStruct Icarus.CharacterCreationData
// Size: 0x128 (Inherited: 0x18)
struct FCharacterCreationData : FIcarusTableRowBase {
	struct FText DisplayName; // 0x18(0x18)
	enum class ECharacterOptionCategory Category; // 0x30(0x01)
	enum class ECharacterBodyType BodyType; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x38(0x28)
	struct FItemTemplateRowHandle Item; // 0x60(0x18)
	struct TArray<struct FColor> Color; // 0x78(0x10)
	float ScalarParamValue; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TSoftObjectPtr<UTexture2D> TextureParamValue; // 0x90(0x28)
	struct TMap<struct TSoftObjectPtr<UMaterialInterface>, struct TSoftObjectPtr<UMaterialInterface>> MaterialOverrides; // 0xb8(0x50)
	bool bEnabled; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	struct FDLCPackageDataRowHandle RequiredPackageID; // 0x10c(0x18)
	char pad_124[0x4]; // 0x124(0x04)
};

// ScriptStruct Icarus.DLCPackageDataRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FDLCPackageDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ItemTemplateRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FItemTemplateRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CharacterCreationDataEnum
// Size: 0x10 (Inherited: 0x10)
struct FCharacterCreationDataEnum : FRowEnum {
};

// ScriptStruct Icarus.CharacterCreationDataRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FCharacterCreationDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CharacterFlag
// Size: 0x30 (Inherited: 0x18)
struct FCharacterFlag : FIcarusTableRowBase {
	struct FText Description; // 0x18(0x18)
};

// ScriptStruct Icarus.CharacterFlagsEnum
// Size: 0x10 (Inherited: 0x10)
struct FCharacterFlagsEnum : FRowEnum {
};

// ScriptStruct Icarus.CharacterGrowth
// Size: 0x48 (Inherited: 0x18)
struct FCharacterGrowth : FIcarusTableRowBase {
	struct UCurveFloat* ExperienceCurve; // 0x18(0x08)
	struct UCurveFloat* AttributeCurve; // 0x20(0x08)
	struct UCurveFloat* BlueprintPointsPerLevel; // 0x28(0x08)
	struct UCurveFloat* TalentPointsPerLevel; // 0x30(0x08)
	struct UCurveFloat* SoloPointsPerLevel; // 0x38(0x08)
	int32_t MaxDisplayLevel; // 0x40(0x04)
	int32_t MaxLevel; // 0x44(0x04)
};

// ScriptStruct Icarus.CharacterGrowthEnum
// Size: 0x10 (Inherited: 0x10)
struct FCharacterGrowthEnum : FRowEnum {
};

// ScriptStruct Icarus.CharacterGrowthRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FCharacterGrowthRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CharacterPerk
// Size: 0xc8 (Inherited: 0x18)
struct FCharacterPerk : FIcarusTableRowBase {
	struct FText Name; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x48(0x28)
	enum class ECharacterAttribute Attribute; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t RequiredAttributeLevel; // 0x74(0x04)
	struct TMap<struct FStatsEnum, int32_t> StatsGranted; // 0x78(0x50)
};

// ScriptStruct Icarus.CharacterPerksEnum
// Size: 0x10 (Inherited: 0x10)
struct FCharacterPerksEnum : FRowEnum {
};

// ScriptStruct Icarus.CharacterPerksRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FCharacterPerksRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CharacterStartingStatsEnum
// Size: 0x10 (Inherited: 0x10)
struct FCharacterStartingStatsEnum : FRowEnum {
};

// ScriptStruct Icarus.CharacterStartingStatsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FCharacterStartingStatsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CharacterTimeline
// Size: 0x60 (Inherited: 0x18)
struct FCharacterTimeline : FIcarusTableRowBase {
	int32_t Level; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TSoftObjectPtr<UTexture2D> Image; // 0x20(0x28)
	struct TArray<struct FTimelineRanksRowHandle> TimelineRanks; // 0x48(0x10)
	bool FeatureLocked; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct Icarus.TimelineRanksRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FTimelineRanksRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CharacterTimelineEnum
// Size: 0x10 (Inherited: 0x10)
struct FCharacterTimelineEnum : FRowEnum {
};

// ScriptStruct Icarus.CharacterTimelineRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FCharacterTimelineRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CharacterVoiceData
// Size: 0x38 (Inherited: 0x18)
struct FCharacterVoiceData : FIcarusTableRowBase {
	struct FText DisplayName; // 0x18(0x18)
	enum class EGlobalPlayerCharacterVoiceFMODParam VoiceFMODParam; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Icarus.CharacterVoicesEnum
// Size: 0x10 (Inherited: 0x10)
struct FCharacterVoicesEnum : FRowEnum {
};

// ScriptStruct Icarus.CharacterVoicesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FCharacterVoicesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CombustibleData
// Size: 0x40 (Inherited: 0x18)
struct FCombustibleData : FIcarusTableRowBase {
	int32_t MillijoulesProvided; // 0x18(0x04)
	struct FItemTemplateRowHandle ProducesItem; // 0x1c(0x18)
	struct FName DescriptionText; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Icarus.CombustibleEnum
// Size: 0x10 (Inherited: 0x10)
struct FCombustibleEnum : FRowEnum {
};

// ScriptStruct Icarus.CombustibleRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FCombustibleRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ConfirmationPopupDetails
// Size: 0x98 (Inherited: 0x00)
struct FConfirmationPopupDetails {
	struct FText Description; // 0x00(0x18)
	struct FText OptionA; // 0x18(0x18)
	struct FText OptionB; // 0x30(0x18)
	struct UFMODEvent* OptionAAudioOverride; // 0x48(0x08)
	struct UFMODEvent* OptionBAudioOverride; // 0x50(0x08)
	struct UUserWidget* ContentWidget; // 0x58(0x08)
	struct UUserWidget* ContentWidgetClass; // 0x60(0x08)
	struct UTexture2D* OptionAIcon; // 0x68(0x08)
	struct UTexture2D* OptionBIcon; // 0x70(0x08)
	struct FLinearColor OptionATint; // 0x78(0x10)
	struct FLinearColor OptionBTint; // 0x88(0x10)
};

// ScriptStruct Icarus.ConsumableData
// Size: 0xa0 (Inherited: 0x18)
struct FConsumableData : FIcarusTableRowBase {
	struct TMap<struct FStatsEnum, int32_t> Stats; // 0x18(0x50)
	struct FModifier Modifier; // 0x68(0x1c)
	struct FName DescriptionText; // 0x84(0x08)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct FItemTemplateRowHandle> Byproducts; // 0x90(0x10)
};

// ScriptStruct Icarus.Modifier
// Size: 0x1c (Inherited: 0x00)
struct FModifier {
	struct FModifierStatesRowHandle Modifier; // 0x00(0x18)
	float ModifierLifetime; // 0x18(0x04)
};

// ScriptStruct Icarus.ConsumableEnum
// Size: 0x10 (Inherited: 0x10)
struct FConsumableEnum : FRowEnum {
};

// ScriptStruct Icarus.ConsumableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FConsumableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ContextMenuItemData
// Size: 0xb0 (Inherited: 0x00)
struct FContextMenuItemData {
	struct FName ItemIdentifier; // 0x00(0x08)
	int32_t ItemPayload; // 0x08(0x04)
	struct FContextMenuGroupTypesRowHandle GroupType; // 0x0c(0x18)
	char pad_24[0x4]; // 0x24(0x04)
	struct FText Label; // 0x28(0x18)
	int32_t StackCount; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x48(0x28)
	bool bEnabled; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FFeatureLevelsRowHandle FeatureLevel; // 0x74(0x18)
	struct FDelegate ItemClickedDelegate; // 0x8c(0x10)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct UWidget*> ContextWidgets; // 0xa0(0x10)
};

// ScriptStruct Icarus.ContextMenuGroupTypesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FContextMenuGroupTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ContextMenuGroupType
// Size: 0x38 (Inherited: 0x18)
struct FContextMenuGroupType : FIcarusTableRowBase {
	struct FText GroupName; // 0x18(0x18)
	struct UTexture2D* GroupIcon; // 0x30(0x08)
};

// ScriptStruct Icarus.ContextMenuGroupTypesEnum
// Size: 0x10 (Inherited: 0x10)
struct FContextMenuGroupTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.CraftingAudioData
// Size: 0x98 (Inherited: 0x18)
struct FCraftingAudioData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> RecipeCraftedSound; // 0x18(0x28)
	struct TMap<struct FProcessingRowHandle, struct TSoftObjectPtr<UFMODEvent>> ProcessorOverrideSounds; // 0x40(0x50)
	bool bOnlyPlayForLastItemInQueue; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct Icarus.ProcessingRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FProcessingRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CraftingAudioDataEnum
// Size: 0x10 (Inherited: 0x10)
struct FCraftingAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.CraftingAudioDataRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FCraftingAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ProcessorRecipe
// Size: 0xf0 (Inherited: 0x18)
struct FProcessorRecipe : FIcarusTableRowBase {
	bool bForceDisableRecipe; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FTalentsRowHandle Requirement; // 0x1c(0x18)
	char pad_34[0x4]; // 0x34(0x04)
	struct FFlagsMultiRowHandle SessionRequirement; // 0x38(0x18)
	struct FCharacterFlagsRowHandle CharacterRequirement; // 0x50(0x18)
	int32_t RequiredMillijoules; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FRecipeSetsRowHandle> RecipeSets; // 0x70(0x10)
	struct TArray<struct FStatsEnum> ResourceCostMultipliers; // 0x80(0x10)
	struct TArray<struct FCraftingInput> Inputs; // 0x90(0x10)
	struct TArray<struct FResourceItem> ResourceInputs; // 0xa0(0x10)
	struct TArray<struct FCraftingOutput> Outputs; // 0xb0(0x10)
	struct TArray<struct FResourceItem> ResourceOutputs; // 0xc0(0x10)
	enum class ERefundPermission Refundable; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float ExperienceMultiplier; // 0xd4(0x04)
	struct FCraftingAudioDataRowHandle Audio; // 0xd8(0x18)
};

// ScriptStruct Icarus.ResourceItem
// Size: 0x08 (Inherited: 0x00)
struct FResourceItem {
	enum class EIcarusResourceType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t RequiredUnits; // 0x04(0x04)
};

// ScriptStruct Icarus.CraftingOutput
// Size: 0x48 (Inherited: 0x18)
struct FCraftingOutput : FIcarusTableRowBase {
	struct FItemTemplateRowHandle Element; // 0x18(0x18)
	int32_t Count; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FItemDynamicData> DynamicProperties; // 0x38(0x10)
};

// ScriptStruct Icarus.CraftingInput
// Size: 0x48 (Inherited: 0x18)
struct FCraftingInput : FIcarusTableRowBase {
	struct FItemsStaticRowHandle Element; // 0x18(0x18)
	int32_t Count; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FItemDynamicData> DynamicProperties; // 0x38(0x10)
};

// ScriptStruct Icarus.RecipeSetsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FRecipeSetsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FlagsMultiRowHandle
// Size: 0x18 (Inherited: 0x10)
struct FFlagsMultiRowHandle : FMultiRowHandle {
	enum class EFlagsTableType DataTableName; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Icarus.RecipeSet
// Size: 0x60 (Inherited: 0x18)
struct FRecipeSet : FIcarusTableRowBase {
	struct FText RecipeSetName; // 0x18(0x18)
	struct TSoftObjectPtr<UTexture2D> RecipeSetIcon; // 0x30(0x28)
	float ExperienceMultiplier; // 0x58(0x04)
	bool bAllowRefundOfRecipesOnDestroy; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// ScriptStruct Icarus.CraftingModifications
// Size: 0x40 (Inherited: 0x18)
struct FCraftingModifications : FIcarusTableRowBase {
	struct FTagQueriesRowHandle Query; // 0x18(0x18)
	struct TArray<struct FStatPair> RequiredStat; // 0x30(0x10)
};

// ScriptStruct Icarus.StatPair
// Size: 0x20 (Inherited: 0x00)
struct FStatPair {
	struct FStatsEnum RequiredStat; // 0x00(0x10)
	struct FStatsEnum GrantedStat; // 0x10(0x10)
};

// ScriptStruct Icarus.CraftingModificationsEnum
// Size: 0x10 (Inherited: 0x10)
struct FCraftingModificationsEnum : FRowEnum {
};

// ScriptStruct Icarus.CraftingModificationsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FCraftingModificationsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CreatureAudioThreatData
// Size: 0x68 (Inherited: 0x18)
struct FCreatureAudioThreatData : FIcarusTableRowBase {
	struct TMap<enum class ECreatureAudioThreatTargetType, struct FCreatureAudioThreatSetting> ThreatSettings; // 0x18(0x50)
};

// ScriptStruct Icarus.CreatureAudioThreatSetting
// Size: 0x10 (Inherited: 0x00)
struct FCreatureAudioThreatSetting {
	struct UCurveFloat* DistanceModifierCurve; // 0x00(0x08)
	float GracePeriod; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Icarus.CreatureAudioThreatDataEnum
// Size: 0x10 (Inherited: 0x10)
struct FCreatureAudioThreatDataEnum : FRowEnum {
};

// ScriptStruct Icarus.CriticalHitSetup
// Size: 0x100 (Inherited: 0x18)
struct FCriticalHitSetup : FIcarusTableRowBase {
	struct FCriticalHitPlayer PlayerConfig; // 0x18(0x50)
	struct FCriticalHitProjectile ProjectileConfig; // 0x68(0x40)
	struct FCritialHitTarget TargetConfig; // 0xa8(0x50)
	float FinishTime; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct Icarus.CritialHitTarget
// Size: 0x50 (Inherited: 0x18)
struct FCritialHitTarget : FIcarusTableRowBase {
	float TimeScale; // 0x18(0x04)
	float TimeLength; // 0x1c(0x04)
	float FOV; // 0x20(0x04)
	float RotationOffset; // 0x24(0x04)
	struct FVector PivotOffset; // 0x28(0x0c)
	struct FVector CameraOffset; // 0x34(0x0c)
	struct FRotator CameraRotationOffset; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Icarus.CriticalHitProjectile
// Size: 0x40 (Inherited: 0x18)
struct FCriticalHitProjectile : FIcarusTableRowBase {
	float TimeScale; // 0x18(0x04)
	struct FVector CameraOffset; // 0x1c(0x0c)
	struct FRotator CameraRotationOffset; // 0x28(0x0c)
	float FOV; // 0x34(0x04)
	struct UMatineeCameraShake* CameraShake; // 0x38(0x08)
};

// ScriptStruct Icarus.CriticalHitPlayer
// Size: 0x50 (Inherited: 0x18)
struct FCriticalHitPlayer : FIcarusTableRowBase {
	float TimeScale; // 0x18(0x04)
	float TimeLength; // 0x1c(0x04)
	float FOV; // 0x20(0x04)
	float RotationOffset; // 0x24(0x04)
	struct FVector PivotOffset; // 0x28(0x0c)
	struct FVector CameraOffset; // 0x34(0x0c)
	struct FRotator CameraRotationOffset; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Icarus.CriticalHitSetupEnum
// Size: 0x10 (Inherited: 0x10)
struct FCriticalHitSetupEnum : FRowEnum {
};

// ScriptStruct Icarus.CriticalHitSetupRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FCriticalHitSetupRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CurrencyConversion
// Size: 0x50 (Inherited: 0x18)
struct FCurrencyConversion : FIcarusTableRowBase {
	struct FMetaCurrencyRowHandle StartingCurrency; // 0x18(0x18)
	int32_t StartingAmount; // 0x30(0x04)
	struct FMetaCurrencyRowHandle ConvertedCurrency; // 0x34(0x18)
	int32_t ConvertedAmount; // 0x4c(0x04)
};

// ScriptStruct Icarus.MetaCurrencyRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FMetaCurrencyRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CurrencyConversionsEnum
// Size: 0x10 (Inherited: 0x10)
struct FCurrencyConversionsEnum : FRowEnum {
};

// ScriptStruct Icarus.CurrencyConversionsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FCurrencyConversionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DecayableData
// Size: 0x40 (Inherited: 0x18)
struct FDecayableData : FIcarusTableRowBase {
	int32_t DecayTime; // 0x18(0x04)
	int32_t SpoilTime; // 0x1c(0x04)
	struct FItemTemplateRowHandle SpoiledItem; // 0x20(0x18)
	int32_t ResourceLeakage; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Icarus.DecayableEnum
// Size: 0x10 (Inherited: 0x10)
struct FDecayableEnum : FRowEnum {
};

// ScriptStruct Icarus.DecayableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FDecayableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DeployableData
// Size: 0xa8 (Inherited: 0x18)
struct FDeployableData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; // 0x18(0x28)
	struct TMap<struct FStatsEnum, int32_t> Stats; // 0x40(0x50)
	struct TArray<struct FDeployableSetupRowHandle> Variants; // 0x90(0x10)
	float AudioOcclusionAmount; // 0xa0(0x04)
	bool EffectedByWeather; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
};

// ScriptStruct Icarus.DeployableSetupRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FDeployableSetupRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DeployableEnum
// Size: 0x10 (Inherited: 0x10)
struct FDeployableEnum : FRowEnum {
};

// ScriptStruct Icarus.DeployableRecord
// Size: 0x20 (Inherited: 0x00)
struct FDeployableRecord {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString FoundationActorClassName; // 0x08(0x10)
	int32_t FoundationActorIcarusUID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Icarus.DeployableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FDeployableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DeployableSetup
// Size: 0x188 (Inherited: 0x18)
struct FDeployableSetup : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> DeployableBlueprint; // 0x18(0x28)
	struct TSoftObjectPtr<UTexture2D> DeployableIcon; // 0x40(0x28)
	struct FText DeployableName; // 0x68(0x18)
	struct TSoftObjectPtr<UStaticMesh> PreviewStaticMesh; // 0x80(0x28)
	struct TSoftObjectPtr<UFMODEvent> DeployedSound; // 0xa8(0x28)
	struct TMap<struct FItemsStaticRowHandle, struct TSoftObjectPtr<UFMODEvent>> ItemAddedSounds; // 0xd0(0x50)
	float AudioOcclusionAmount; // 0x120(0x04)
	bool SnapToSurfaceNormal; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	float MaxSurfaceSnapAngle; // 0x128(0x04)
	bool SupportsCustomRotation; // 0x12c(0x01)
	enum class EWorldPlacementType WorldPlacementType; // 0x12d(0x01)
	bool HideInvalidPlacementPreview; // 0x12e(0x01)
	enum class EDeployableSnapBehaviour SnapBehaviour; // 0x12f(0x01)
	struct TArray<struct FName> SnapActorTags; // 0x130(0x10)
	struct TArray<struct FName> SnapSocketsOrTags; // 0x140(0x10)
	bool IgnoreCollisionWhenSnapped; // 0x150(0x01)
	bool UseSnapSocketRotation; // 0x151(0x01)
	bool UseSnapSocketScale; // 0x152(0x01)
	bool bCanAffectNavigation; // 0x153(0x01)
	char pad_154[0x4]; // 0x154(0x04)
	struct UNavArea* NavAreaClass; // 0x158(0x08)
	struct FVector NavigationFallbackExtents; // 0x160(0x0c)
	int32_t MaxRestackingAmount; // 0x16c(0x04)
	struct FVector DeployCollisionExtentOffset; // 0x170(0x0c)
	struct FVector DeployCollisionLocationOffset; // 0x17c(0x0c)
};

// ScriptStruct Icarus.DeployableSetupEnum
// Size: 0x10 (Inherited: 0x10)
struct FDeployableSetupEnum : FRowEnum {
};

// ScriptStruct Icarus.DeployableTypesEnum
// Size: 0x10 (Inherited: 0x10)
struct FDeployableTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.DeployableTypesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FDeployableTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.Dialogue
// Size: 0x78 (Inherited: 0x18)
struct FDialogue : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> Audio; // 0x18(0x28)
	float AudioLength; // 0x40(0x04)
	float Delay; // 0x44(0x04)
	int32_t Priority; // 0x48(0x04)
	struct FDialogueSpeakerRowHandle Speaker; // 0x4c(0x18)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FText> Text; // 0x68(0x10)
};

// ScriptStruct Icarus.DialogueSpeakerRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FDialogueSpeakerRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DialogueEnum
// Size: 0x10 (Inherited: 0x10)
struct FDialogueEnum : FRowEnum {
};

// ScriptStruct Icarus.DialoguePool
// Size: 0x28 (Inherited: 0x18)
struct FDialoguePool : FIcarusTableRowBase {
	struct TArray<struct FDialogueRowHandle> Pool; // 0x18(0x10)
};

// ScriptStruct Icarus.DialoguePoolEnum
// Size: 0x10 (Inherited: 0x10)
struct FDialoguePoolEnum : FRowEnum {
};

// ScriptStruct Icarus.DialoguePoolRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FDialoguePoolRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DialogueSpeaker
// Size: 0x30 (Inherited: 0x18)
struct FDialogueSpeaker : FIcarusTableRowBase {
	struct FText Speaker; // 0x18(0x18)
};

// ScriptStruct Icarus.DialogueSpeakerEnum
// Size: 0x10 (Inherited: 0x10)
struct FDialogueSpeakerEnum : FRowEnum {
};

// ScriptStruct Icarus.DLCPackageData
// Size: 0x38 (Inherited: 0x18)
struct FDLCPackageData : FIcarusTableRowBase {
	int32_t PackageID; // 0x18(0x04)
	struct FAccountFlagsRowHandle LinkedAccountFlag; // 0x1c(0x18)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Icarus.DLCPackageDataEnum
// Size: 0x10 (Inherited: 0x10)
struct FDLCPackageDataEnum : FRowEnum {
};

// ScriptStruct Icarus.DropShipActionsEnum
// Size: 0x10 (Inherited: 0x10)
struct FDropShipActionsEnum : FRowEnum {
};

// ScriptStruct Icarus.DropShipActionsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FDropShipActionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DropShipEvent
// Size: 0x38 (Inherited: 0x18)
struct FDropShipEvent : FIcarusTableRowBase {
	struct FDropShipActionsRowHandle Action; // 0x18(0x18)
	float TriggerTime; // 0x30(0x04)
	bool Complete; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct Icarus.DropShipAction
// Size: 0x18 (Inherited: 0x18)
struct FDropShipAction : FIcarusTableRowBase {
};

// ScriptStruct Icarus.DropShipSequence
// Size: 0x30 (Inherited: 0x18)
struct FDropShipSequence : FIcarusTableRowBase {
	struct TArray<struct FDropShipEvent> Events; // 0x18(0x10)
	struct UCurveFloat* Trajectory; // 0x28(0x08)
};

// ScriptStruct Icarus.DropShipSequencesEnum
// Size: 0x10 (Inherited: 0x10)
struct FDropShipSequencesEnum : FRowEnum {
};

// ScriptStruct Icarus.DropShipSequencesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FDropShipSequencesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DurableData
// Size: 0x40 (Inherited: 0x18)
struct FDurableData : FIcarusTableRowBase {
	int32_t Max_Durability; // 0x18(0x04)
	bool Destroyed_At_Zero; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct TArray<struct FRepairData> ItemsForRepair; // 0x20(0x10)
	struct TArray<struct FRecipeSetsRowHandle> NoRecipe_RequiredRecipeSet; // 0x30(0x10)
};

// ScriptStruct Icarus.RepairData
// Size: 0x1c (Inherited: 0x00)
struct FRepairData {
	struct FItemsStaticRowHandle Item; // 0x00(0x18)
	int32_t Amount; // 0x18(0x04)
};

// ScriptStruct Icarus.DurableEnum
// Size: 0x10 (Inherited: 0x10)
struct FDurableEnum : FRowEnum {
};

// ScriptStruct Icarus.DurableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FDurableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ResourceNetworkData
// Size: 0x20 (Inherited: 0x18)
struct FResourceNetworkData : FIcarusTableRowBase {
	bool Provider; // 0x18(0x01)
	bool Receiver; // 0x19(0x01)
	bool AutoActivate; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	int32_t ResourceFlowRate; // 0x1c(0x04)
};

// ScriptStruct Icarus.EnergyData
// Size: 0x20 (Inherited: 0x20)
struct FEnergyData : FResourceNetworkData {
};

// ScriptStruct Icarus.EnergyEnum
// Size: 0x10 (Inherited: 0x10)
struct FEnergyEnum : FRowEnum {
};

// ScriptStruct Icarus.EnergyRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FEnergyRowHandle : FRowHandle {
};

// ScriptStruct Icarus.EpicCreatures
// Size: 0x90 (Inherited: 0x18)
struct FEpicCreatures : FIcarusTableRowBase {
	struct TArray<struct FText> CreatureNames; // 0x18(0x10)
	struct FAISetupRowHandle AISetup; // 0x28(0x18)
	struct TMap<struct FBaseStatsEnum, int32_t> AdditionalStats; // 0x40(0x50)
};

// ScriptStruct Icarus.EpicCreaturesEnum
// Size: 0x10 (Inherited: 0x10)
struct FEpicCreaturesEnum : FRowEnum {
};

// ScriptStruct Icarus.EpicCreaturesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FEpicCreaturesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.EquippableData
// Size: 0x108 (Inherited: 0x18)
struct FEquippableData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> EquippableModifier; // 0x18(0x28)
	struct TMap<struct FStatsEnum, int32_t> GrantedStats; // 0x40(0x50)
	struct TSoftClassPtr<UObject> GlobalStat_ActorClass; // 0x90(0x28)
	struct TMap<struct FStatsEnum, int32_t> GlobalStat_GrantedStats; // 0xb8(0x50)
};

// ScriptStruct Icarus.EquippableEnum
// Size: 0x10 (Inherited: 0x10)
struct FEquippableEnum : FRowEnum {
};

// ScriptStruct Icarus.EquippableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FEquippableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ErrorCode
// Size: 0x48 (Inherited: 0x18)
struct FErrorCode : FIcarusTableRowBase {
	struct FText Code; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
};

// ScriptStruct Icarus.ErrorCodesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FErrorCodesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ExoticSpawn
// Size: 0x18 (Inherited: 0x18)
struct FExoticSpawn : FIcarusTableRowBase {
};

// ScriptStruct Icarus.ExoticSpawnEnum
// Size: 0x10 (Inherited: 0x10)
struct FExoticSpawnEnum : FRowEnum {
};

// ScriptStruct Icarus.ExoticSpawnRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FExoticSpawnRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ExperienceData
// Size: 0x68 (Inherited: 0x18)
struct FExperienceData : FIcarusTableRowBase {
	struct TMap<enum class EExperienceSource, struct FExperienceInfo> ExperienceEvents; // 0x18(0x50)
};

// ScriptStruct Icarus.ExperienceEnum
// Size: 0x10 (Inherited: 0x10)
struct FExperienceEnum : FRowEnum {
};

// ScriptStruct Icarus.ExperienceEvent
// Size: 0x38 (Inherited: 0x18)
struct FExperienceEvent : FIcarusTableRowBase {
	struct FText EventDescription; // 0x18(0x18)
	bool SharedExperience; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t ExperienceGranted; // 0x34(0x04)
};

// ScriptStruct Icarus.ExperienceEventsEnum
// Size: 0x10 (Inherited: 0x10)
struct FExperienceEventsEnum : FRowEnum {
};

// ScriptStruct Icarus.ExperienceRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FExperienceRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FactionInfo
// Size: 0x98 (Inherited: 0x18)
struct FFactionInfo : FIcarusTableRowBase {
	struct UTexture2D* Icon; // 0x18(0x08)
	struct FText FactionName; // 0x20(0x18)
	struct FText Description; // 0x38(0x18)
	struct FDialoguePoolRowHandle BriefingPool; // 0x50(0x18)
	struct FDialoguePoolRowHandle LandingPool; // 0x68(0x18)
	struct FDialoguePoolRowHandle MissionCompletePool; // 0x80(0x18)
};

// ScriptStruct Icarus.FactionInfoEnum
// Size: 0x10 (Inherited: 0x10)
struct FFactionInfoEnum : FRowEnum {
};

// ScriptStruct Icarus.FactionInfoRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FFactionInfoRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FactionMission
// Size: 0xe8 (Inherited: 0x18)
struct FFactionMission : FIcarusTableRowBase {
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x18(0x28)
	struct TArray<struct FMissionObjectiveEntry> MissionObjectives; // 0x40(0x10)
	struct FFactionInfoRowHandle Faction; // 0x50(0x18)
	struct TArray<struct FWorkshopCost> CurrencyCost; // 0x68(0x10)
	struct FQuestsRowHandle InitialQuest; // 0x78(0x18)
	struct TArray<struct FRulesetsRowHandle> AdditionalRulesets; // 0x90(0x10)
	struct TArray<struct FItemTemplateRowHandle> ItemsRewarded; // 0xa0(0x10)
	struct TArray<struct FCharacterFlagsRowHandle> CharacterFlagsRewarded; // 0xb0(0x10)
	struct TArray<struct FTalentsRowHandle> TalentsRewarded; // 0xc0(0x10)
	struct TArray<struct FWorkshopCost> CurrencyRewarded; // 0xd0(0x10)
	int32_t AccountExperience; // 0xe0(0x04)
	int32_t FactionExperience; // 0xe4(0x04)
};

// ScriptStruct Icarus.WorkshopCost
// Size: 0x1c (Inherited: 0x00)
struct FWorkshopCost {
	struct FMetaCurrencyRowHandle Meta; // 0x00(0x18)
	int32_t Amount; // 0x18(0x04)
};

// ScriptStruct Icarus.RulesetsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FRulesetsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.QuestsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FQuestsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MissionObjectiveEntry
// Size: 0x1c (Inherited: 0x00)
struct FMissionObjectiveEntry {
	struct FQuestsRowHandle QuestRow; // 0x00(0x18)
	int32_t Depth; // 0x18(0x04)
};

// ScriptStruct Icarus.FactionMissionsEnum
// Size: 0x10 (Inherited: 0x10)
struct FFactionMissionsEnum : FRowEnum {
};

// ScriptStruct Icarus.FactionMissionsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FFactionMissionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FarmableData
// Size: 0x28 (Inherited: 0x18)
struct FFarmableData : FIcarusTableRowBase {
	struct TArray<struct FFarmingSeedsRowHandle> AllowedSeeds; // 0x18(0x10)
};

// ScriptStruct Icarus.FarmingSeedsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FFarmingSeedsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FarmableEnum
// Size: 0x10 (Inherited: 0x10)
struct FFarmableEnum : FRowEnum {
};

// ScriptStruct Icarus.FarmableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FFarmableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FarmingGrowthState
// Size: 0x58 (Inherited: 0x18)
struct FFarmingGrowthState : FIcarusTableRowBase {
	float TimeToNextState; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TSoftObjectPtr<UStaticMesh> StageMesh; // 0x20(0x28)
	struct FVector MeshScale; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Icarus.FarmingGrowthStatesEnum
// Size: 0x10 (Inherited: 0x10)
struct FFarmingGrowthStatesEnum : FRowEnum {
};

// ScriptStruct Icarus.FarmingGrowthStatesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FFarmingGrowthStatesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FarmingSeedData
// Size: 0xf0 (Inherited: 0x18)
struct FFarmingSeedData : FIcarusTableRowBase {
	struct FItemsStaticRowHandle Seed; // 0x18(0x18)
	struct TArray<struct FFarmingGrowthStatesRowHandle> GrowthStates; // 0x30(0x10)
	struct FItemRewardsRowHandle CropRewards; // 0x40(0x18)
	struct FFarmingSeedAudioData Audio; // 0x58(0x78)
	float DecayTime; // 0xd0(0x04)
	struct FFarmingGrowthStatesRowHandle DeadState; // 0xd4(0x18)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct Icarus.FarmingSeedAudioData
// Size: 0x78 (Inherited: 0x00)
struct FFarmingSeedAudioData {
	struct TSoftObjectPtr<UFMODEvent> PlantedSound; // 0x00(0x28)
	struct TSoftObjectPtr<UFMODEvent> HarvestedSound; // 0x28(0x28)
	struct TSoftObjectPtr<UFMODEvent> ClearedSound; // 0x50(0x28)
};

// ScriptStruct Icarus.CropRewards
// Size: 0x1c (Inherited: 0x00)
struct FCropRewards {
	int32_t Amount; // 0x00(0x04)
	struct FItemsStaticRowHandle ItemType; // 0x04(0x18)
};

// ScriptStruct Icarus.FarmingSeedsEnum
// Size: 0x10 (Inherited: 0x10)
struct FFarmingSeedsEnum : FRowEnum {
};

// ScriptStruct Icarus.FillableData
// Size: 0x58 (Inherited: 0x18)
struct FFillableData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; // 0x18(0x28)
	struct TArray<enum class EIcarusResourceType> ResourceTypes; // 0x40(0x10)
	int32_t MaximumStoredUnits; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Icarus.FillableEnum
// Size: 0x10 (Inherited: 0x10)
struct FFillableEnum : FRowEnum {
};

// ScriptStruct Icarus.FillableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FFillableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FindItemSlotInfo
// Size: 0x10 (Inherited: 0x00)
struct FFindItemSlotInfo {
	struct UInventory* Inventory; // 0x00(0x08)
	int32_t Slot; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Icarus.FirearmAudioData
// Size: 0x48 (Inherited: 0x18)
struct FFirearmAudioData : FIcarusTableRowBase {
	struct TArray<struct FFirearmSoundData> FireSounds; // 0x18(0x10)
	struct TArray<struct FFirearmSoundData> PersistentSounds; // 0x28(0x10)
	struct TArray<struct FFirearmSoundData> NoFireSounds; // 0x38(0x10)
};

// ScriptStruct Icarus.FirearmSoundData
// Size: 0x38 (Inherited: 0x00)
struct FFirearmSoundData {
	struct TSoftObjectPtr<UFMODEvent> Event; // 0x00(0x28)
	struct FName AttachPoint; // 0x28(0x08)
	bool bUseChargeParameter; // 0x30(0x01)
	bool bUseChargingParameter; // 0x31(0x01)
	bool bUseAmmoCountParameter; // 0x32(0x01)
	bool bUseReloadingParameter; // 0x33(0x01)
	bool bUseAimingParameter; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct Icarus.FirearmAudioDataEnum
// Size: 0x10 (Inherited: 0x10)
struct FFirearmAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.FirearmAudioDataRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FFirearmAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FirearmData
// Size: 0x6f0 (Inherited: 0x18)
struct FFirearmData : FIcarusTableRowBase {
	struct FVector2D HipAccuracy; // 0x18(0x08)
	struct FVector2D AimAccuracy; // 0x20(0x08)
	int32_t LaunchForce; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FFirearmChargeData ChargeData; // 0x30(0x38)
	struct FFirearmVisualData VisualData; // 0x68(0x5b0)
	struct FFirearmStaminaData StaminaData; // 0x618(0x20)
	struct FVector2D RecoilAmount; // 0x638(0x08)
	float DamageMultiplier; // 0x640(0x04)
	char pad_644[0x4]; // 0x644(0x04)
	struct TArray<enum class EFireMode> FireModes; // 0x648(0x10)
	enum class EReloadType ReloadType; // 0x658(0x01)
	char pad_659[0x7]; // 0x659(0x07)
	struct TArray<struct FItemsStaticRowHandle> ValidAmmoTypes; // 0x660(0x10)
	bool bUnlimitedAmmo; // 0x670(0x01)
	char pad_671[0x3]; // 0x671(0x03)
	int32_t AmmoCapacity; // 0x674(0x04)
	int32_t RoundsPerMinute; // 0x678(0x04)
	float ReloadTime; // 0x67c(0x04)
	struct TMap<struct FStatsEnum, int32_t> Stats; // 0x680(0x50)
	struct FFirearmAudioDataRowHandle AudioData; // 0x6d0(0x18)
	float WeaponLoudness; // 0x6e8(0x04)
	char pad_6EC[0x4]; // 0x6ec(0x04)
};

// ScriptStruct Icarus.FirearmStaminaData
// Size: 0x20 (Inherited: 0x18)
struct FFirearmStaminaData : FIcarusTableRowBase {
	int32_t StaminaChargeCost; // 0x18(0x04)
	int32_t StaminaChargeHoldCost; // 0x1c(0x04)
};

// ScriptStruct Icarus.FirearmVisualData
// Size: 0x5b0 (Inherited: 0x18)
struct FFirearmVisualData : FIcarusTableRowBase {
	bool bUsesPreviewItem; // 0x18(0x01)
	enum class EFirearmAttachType PreviewItemAttachType; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	struct FName PreviewItemAttachSocket1P; // 0x1c(0x08)
	struct FName PreviewItemAttachSocket3P; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UMatineeCameraShake* FireShake; // 0x30(0x08)
	bool bFireShakeHold; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float FireShakeScale; // 0x3c(0x04)
	float FireShakeAimScale; // 0x40(0x04)
	float FireShakeCrouchScale; // 0x44(0x04)
	struct UMatineeCameraShake* ChargeShake; // 0x48(0x08)
	float ChargeShakeScale; // 0x50(0x04)
	float ChargeShakeAimScale; // 0x54(0x04)
	float ChargeShakeCrouchScale; // 0x58(0x04)
	float ChargeShakeStartDelay; // 0x5c(0x04)
	float ChargeShakeApplyDelay; // 0x60(0x04)
	float ChargeShakeAccuracyMultiplier; // 0x64(0x04)
	struct TSoftObjectPtr<UFXSystemAsset> FireParticle; // 0x68(0x28)
	float VisualRecoil; // 0x90(0x04)
	float IdleFOVMultiplier; // 0x94(0x04)
	float AimFOVMultiplier; // 0x98(0x04)
	float ChargeFOVMultiplier; // 0x9c(0x04)
	struct FFirearmAnimData SkeletalItemAnimData; // 0xa0(0x130)
	struct FFirearmAnimData FirstPersonAnimData; // 0x1d0(0x130)
	struct FFirearm3PAnimData ThirdPersonAnimData; // 0x300(0x158)
	struct FFirearm3PNewAnimData NewThirdPersonAnimData; // 0x458(0x158)
};

// ScriptStruct Icarus.Firearm3PNewAnimData
// Size: 0x158 (Inherited: 0x18)
struct FFirearm3PNewAnimData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UAnimSequence> Poses; // 0x18(0x28)
	struct TSoftObjectPtr<UAnimSequence> Run; // 0x40(0x28)
	struct TSoftObjectPtr<UAnimSequence> Sprint; // 0x68(0x28)
	struct TSoftObjectPtr<UAnimSequence> Impulse; // 0x90(0x28)
	struct TSoftObjectPtr<UAnimSequence> Aim_Sweep; // 0xb8(0x28)
	struct TSoftObjectPtr<UAnimSequence> Crouch_Aim_Sweep; // 0xe0(0x28)
	struct TSoftObjectPtr<UAnimMontage> Reload; // 0x108(0x28)
	struct TSoftObjectPtr<UAnimMontage> Fire; // 0x130(0x28)
};

// ScriptStruct Icarus.Firearm3PAnimData
// Size: 0x158 (Inherited: 0x18)
struct FFirearm3PAnimData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UAnimSequence> Idle; // 0x18(0x28)
	struct TSoftObjectPtr<UAnimSequence> Charge; // 0x40(0x28)
	struct TSoftObjectPtr<UAnimSequence> Aim; // 0x68(0x28)
	struct TSoftObjectPtr<UAnimSequence> AimCharge; // 0x90(0x28)
	struct TSoftObjectPtr<UBlendSpace1D> Fire; // 0xb8(0x28)
	struct TSoftObjectPtr<UBlendSpace1D> AimFire; // 0xe0(0x28)
	struct TSoftObjectPtr<UBlendSpace1D> Reload; // 0x108(0x28)
	struct TSoftObjectPtr<UAnimMontage> ReloadMontage; // 0x130(0x28)
};

// ScriptStruct Icarus.FirearmAnimData
// Size: 0x130 (Inherited: 0x18)
struct FFirearmAnimData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UAnimSequence> Idle; // 0x18(0x28)
	struct TSoftObjectPtr<UAnimSequence> Charge; // 0x40(0x28)
	struct TSoftObjectPtr<UAnimSequence> Aim; // 0x68(0x28)
	struct TSoftObjectPtr<UAnimSequence> AimCharge; // 0x90(0x28)
	struct TSoftObjectPtr<UAnimMontage> Fire; // 0xb8(0x28)
	struct TSoftObjectPtr<UAnimMontage> AimFire; // 0xe0(0x28)
	struct TSoftObjectPtr<UAnimMontage> Reload; // 0x108(0x28)
};

// ScriptStruct Icarus.FirearmChargeData
// Size: 0x38 (Inherited: 0x18)
struct FFirearmChargeData : FIcarusTableRowBase {
	bool bCanCharge; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float ChargeSpeed; // 0x1c(0x04)
	float UnchargeSpeed; // 0x20(0x04)
	float MinimumChargeRequired; // 0x24(0x04)
	bool bFireCanCharge; // 0x28(0x01)
	bool bAimCanCharge; // 0x29(0x01)
	bool bReloadCanCancel; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct UCurveFloat* LaunchForceMultiplier; // 0x30(0x08)
};

// ScriptStruct Icarus.FirearmDataEnum
// Size: 0x10 (Inherited: 0x10)
struct FFirearmDataEnum : FRowEnum {
};

// ScriptStruct Icarus.FirearmDataRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FFirearmDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FishSetup
// Size: 0xc8 (Inherited: 0x18)
struct FFishSetup : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> FishActor; // 0x18(0x28)
	float MovementSpeed; // 0x40(0x04)
	struct FVector2D SizeRange; // 0x44(0x08)
	struct FItemRewardsRowHandle ItemReward; // 0x4c(0x18)
	bool bAwarenessEnabled; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float AwarenessMovementSpeed; // 0x68(0x04)
	float MaxAwarenessDistance; // 0x6c(0x04)
	bool bAggressive; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float AttackDamage; // 0x74(0x04)
	struct TSoftObjectPtr<UFMODEvent> MovementSound; // 0x78(0x28)
	struct TSoftObjectPtr<UFMODEvent> AttackSound; // 0xa0(0x28)
};

// ScriptStruct Icarus.FishSetupEnum
// Size: 0x10 (Inherited: 0x10)
struct FFishSetupEnum : FRowEnum {
};

// ScriptStruct Icarus.FishSetupRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FFishSetupRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FlammableAudioData
// Size: 0x08 (Inherited: 0x00)
struct FFlammableAudioData {
	float Weighting; // 0x00(0x04)
	enum class EFlammableAudioLocationType LocationType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Icarus.FlammableData
// Size: 0x88 (Inherited: 0x18)
struct FFlammableData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; // 0x18(0x28)
	struct FFlammableAudioData AudioData; // 0x40(0x08)
	float CombustionFuelDensity; // 0x48(0x04)
	float CombustionFuelDensityVariance; // 0x4c(0x04)
	bool bInfiniteCombustionFuel; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float ThermalConductivity; // 0x54(0x04)
	float HeatCapacity; // 0x58(0x04)
	float SurfaceAreaMultiplier; // 0x5c(0x04)
	struct FVector CombustingBoundsScale; // 0x60(0x0c)
	float HeatOfCombustion; // 0x6c(0x04)
	float HeatReleaseRate; // 0x70(0x04)
	bool bDetachAfterCombusted; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float MinCombustionTemperature; // 0x78(0x04)
	float MaxCombustionTemperature; // 0x7c(0x04)
	bool bAffectsTemperature; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float TemperatureFalloffStrength; // 0x84(0x04)
};

// ScriptStruct Icarus.FlammableEnum
// Size: 0x10 (Inherited: 0x10)
struct FFlammableEnum : FRowEnum {
};

// ScriptStruct Icarus.FlammableFISMVQueuedVisualData
// Size: 0x02 (Inherited: 0x00)
struct FFlammableFISMVQueuedVisualData {
	bool bFISMDirty; // 0x00(0x01)
	bool bEffectsMeshDirty; // 0x01(0x01)
};

// ScriptStruct Icarus.FlammableFISMVisualData
// Size: 0x0c (Inherited: 0x00)
struct FFlammableFISMVisualData {
	float MainFireSpread; // 0x00(0x04)
	float MainFireTemperature; // 0x04(0x04)
	float EffectsMeshFireSpread; // 0x08(0x04)
};

// ScriptStruct Icarus.FlammableRepStateArray
// Size: 0x148 (Inherited: 0x108)
struct FFlammableRepStateArray : FFastArraySerializer {
	struct TArray<struct FFlammableRepState> States; // 0x108(0x10)
	char pad_118[0x30]; // 0x118(0x30)
};

// ScriptStruct Icarus.FlammableRepState
// Size: 0x18 (Inherited: 0x0c)
struct FFlammableRepState : FFastArraySerializerItem {
	enum class EFlammableState FlammableState; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float DesiredTemperature; // 0x10(0x04)
	int32_t InstanceIndex; // 0x14(0x04)
};

// ScriptStruct Icarus.FlammableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FFlammableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FlammableTarget
// Size: 0x28 (Inherited: 0x00)
struct FFlammableTarget {
	struct AActor* Actor; // 0x00(0x08)
	struct UFLODFISMComponent* FISM; // 0x08(0x08)
	int32_t FISMInstanceIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct AActor* Causer; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct Icarus.FlammableTargetExtinguish
// Size: 0x38 (Inherited: 0x28)
struct FFlammableTargetExtinguish : FFlammableTarget {
	float ExtinguishRampTime; // 0x28(0x04)
	float ExtinguishTime; // 0x2c(0x04)
	bool bStopCombustionImmediately; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Icarus.FlammableTargetIgnite
// Size: 0x30 (Inherited: 0x28)
struct FFlammableTargetIgnite : FFlammableTarget {
	float DesiredTemperatureValue; // 0x28(0x04)
	bool bFromPropagation; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Icarus.FloatableData
// Size: 0x58 (Inherited: 0x18)
struct FFloatableData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; // 0x18(0x28)
	float MeshDensity; // 0x40(0x04)
	float FluidDensity; // 0x44(0x04)
	float FluidLinearDamping; // 0x48(0x04)
	float FluidAngularDamping; // 0x4c(0x04)
	bool bClampMaxVelocity; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float MaxUnderwaterVelocity; // 0x54(0x04)
};

// ScriptStruct Icarus.FloatableEnum
// Size: 0x10 (Inherited: 0x10)
struct FFloatableEnum : FRowEnum {
};

// ScriptStruct Icarus.FloatableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FFloatableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PendingRegisterFISM
// Size: 0x0c (Inherited: 0x00)
struct FPendingRegisterFISM {
	int32_t CachedDescriptionIndex; // 0x00(0x04)
	struct TWeakObjectPtr<struct UFLODFISMComponent> FISM; // 0x04(0x08)
};

// ScriptStruct Icarus.FLODDescriptionsEnum
// Size: 0x10 (Inherited: 0x10)
struct FFLODDescriptionsEnum : FRowEnum {
};

// ScriptStruct Icarus.FLODDescriptionsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FFLODDescriptionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FLODInstanceInfluence
// Size: 0x20 (Inherited: 0x00)
struct FFLODInstanceInfluence {
	struct FFLODInstanceID InfluencedInstance; // 0x00(0x10)
	int32_t InfluenceLevelIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FTimerHandle TimeoutHandle; // 0x18(0x08)
};

// ScriptStruct Icarus.FLODRecordPendingInstanceChange
// Size: 0x0c (Inherited: 0x00)
struct FFLODRecordPendingInstanceChange {
	int32_t InstanceIndex; // 0x00(0x04)
	int32_t FromLevelIndex; // 0x04(0x04)
	int32_t ToLevelIndex; // 0x08(0x04)
};

// ScriptStruct Icarus.FLODRecordInstanceChangeSet
// Size: 0x30 (Inherited: 0x00)
struct FFLODRecordInstanceChangeSet {
	struct TArray<int32_t> ConcealIndices; // 0x00(0x10)
	struct TArray<int32_t> RevealIndices; // 0x10(0x10)
	struct TArray<struct FFLODRecordInstanceChange> InstanceChanges; // 0x20(0x10)
};

// ScriptStruct Icarus.FLODRecordInstanceChange
// Size: 0x2c (Inherited: 0x00)
struct FFLODRecordInstanceChange {
	int32_t InstanceIndex; // 0x00(0x04)
	struct FFLODRecordInstanceChangeDetails From; // 0x04(0x10)
	struct FFLODRecordInstanceChangeDetails To; // 0x14(0x10)
	int32_t TransitionFrame; // 0x24(0x04)
	int32_t TransitionFinishFrame; // 0x28(0x04)
};

// ScriptStruct Icarus.FLODRecordInstanceChangeDetails
// Size: 0x10 (Inherited: 0x00)
struct FFLODRecordInstanceChangeDetails {
	int32_t LevelIndex; // 0x00(0x04)
	struct TWeakObjectPtr<struct AActor> Actor; // 0x04(0x08)
	uint32_t AddedFrame; // 0x0c(0x04)
};

// ScriptStruct Icarus.FLODRecordInstanceIndices
// Size: 0x50 (Inherited: 0x00)
struct FFLODRecordInstanceIndices {
	struct TSet<int32_t> InstanceIndices; // 0x00(0x50)
};

// ScriptStruct Icarus.FLODRecordStateView
// Size: 0xc0 (Inherited: 0x50)
struct FFLODRecordStateView : FFLODRecordInstanceIndices {
	struct TArray<struct FFLODRecordInstance> Instances; // 0x50(0x10)
	struct TArray<struct FFLODRecordInstanceIndices> LevelStateViews; // 0x60(0x10)
	struct TSet<int32_t> DestroyedIndices; // 0x70(0x50)
};

// ScriptStruct Icarus.FLODRecordInstance
// Size: 0x20 (Inherited: 0x0c)
struct FFLODRecordInstance : FFastArraySerializerItem {
	int32_t InstanceIndex; // 0x0c(0x04)
	int32_t LevelIndex; // 0x10(0x04)
	struct TWeakObjectPtr<struct AActor> Actor; // 0x14(0x08)
	uint32_t AddedFrame; // 0x1c(0x04)
};

// ScriptStruct Icarus.FLODRecordDynamicInstanceArray
// Size: 0x148 (Inherited: 0x108)
struct FFLODRecordDynamicInstanceArray : FFastArraySerializer {
	struct TArray<struct FFLODRecordDynamicInstance> Instances; // 0x108(0x10)
	char pad_118[0x30]; // 0x118(0x30)
};

// ScriptStruct Icarus.FLODRecordDynamicInstance
// Size: 0x34 (Inherited: 0x0c)
struct FFLODRecordDynamicInstance : FFastArraySerializerItem {
	int32_t InstanceIndex; // 0x0c(0x04)
	struct FVector_NetQuantize100 WorldLocation; // 0x10(0x0c)
	struct FVector_NetQuantize100 WorldRotation; // 0x1c(0x0c)
	struct FVector_NetQuantize100 WorldScale; // 0x28(0x0c)
};

// ScriptStruct Icarus.FLODRecordInstanceArray
// Size: 0x148 (Inherited: 0x108)
struct FFLODRecordInstanceArray : FFastArraySerializer {
	struct TArray<struct FFLODRecordInstance> Instances; // 0x108(0x10)
	char pad_118[0x30]; // 0x118(0x30)
};

// ScriptStruct Icarus.FLODRecorderRecord
// Size: 0x04 (Inherited: 0x00)
struct FFLODRecorderRecord {
	int32_t NumTiles; // 0x00(0x04)
};

// ScriptStruct Icarus.FLODDescriptionDVInfo
// Size: 0x10 (Inherited: 0x00)
struct FFLODDescriptionDVInfo {
	struct UFoliageInstancedStaticMeshComponent* FoliageClass; // 0x00(0x08)
	struct FName FoliageCollisionProfile; // 0x08(0x08)
};

// ScriptStruct Icarus.FLODDescription
// Size: 0x138 (Inherited: 0x18)
struct FFLODDescription : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFoliageType> FoliageType; // 0x18(0x28)
	struct FGameplayTagContainer FoliageTags; // 0x40(0x20)
	bool bDisabled; // 0x60(0x01)
	bool bUseViewTraceInfluence; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct TSoftClassPtr<UObject> ViewTraceActor; // 0x68(0x28)
	struct FItemTemplateRowHandle ViewTraceActorItemTemplate; // 0x90(0x18)
	struct FItemableRowHandle ViewTraceActorItemable; // 0xa8(0x18)
	struct FItemRewardsRowHandle ViewTraceActorItemRewards; // 0xc0(0x18)
	bool bViewTraceClientPredictive; // 0xd8(0x01)
	bool bUseDistanceInfluence; // 0xd9(0x01)
	char pad_DA[0x6]; // 0xda(0x06)
	struct TArray<struct FFLODDistanceLevelDescription> DistanceLevels; // 0xe0(0x10)
	bool bIsFlammable; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FFlammableRowHandle Flammable; // 0xf4(0x18)
	struct FFLODDescriptionsRowHandle BurntFLODEntry; // 0x10c(0x18)
	int32_t RecordIndex; // 0x124(0x04)
	struct TArray<struct FFLODLevelDescription> Levels; // 0x128(0x10)
};

// ScriptStruct Icarus.FLODLevelDescription
// Size: 0x50 (Inherited: 0x00)
struct FFLODLevelDescription {
	int32_t LevelIndex; // 0x00(0x04)
	enum class EFLODLevelInfluenceType InfluenceType; // 0x04(0x01)
	bool bClientPredictive; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float InfluenceDistance; // 0x08(0x04)
	int32_t ActorPoolBufferSize; // 0x0c(0x04)
	struct AActor* ActorReplacementClass; // 0x10(0x08)
	struct FItemTemplateRowHandle ItemTemplate; // 0x18(0x18)
	struct FItemRewardsRowHandle ItemRewards; // 0x30(0x18)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct Icarus.FLODDistanceLevelDescription
// Size: 0x60 (Inherited: 0x00)
struct FFLODDistanceLevelDescription {
	struct TSoftClassPtr<UObject> Actor; // 0x00(0x28)
	float InfluenceDistance; // 0x28(0x04)
	struct FItemTemplateRowHandle ActorItemTemplate; // 0x2c(0x18)
	struct FItemRewardsRowHandle ActorItemRewards; // 0x44(0x18)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Icarus.FLODTileRecorderRecord
// Size: 0x60 (Inherited: 0x00)
struct FFLODTileRecorderRecord {
	struct FName TileName; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	float RelevancyRadius; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FFLODTileRecordRecord> Records; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct Icarus.FLODTileRecordRecord
// Size: 0x40 (Inherited: 0x00)
struct FFLODTileRecordRecord {
	int32_t RecordIndex; // 0x00(0x04)
	struct FName RecorderName; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FFLODTileRecordRecordInstance> Instances; // 0x10(0x10)
	struct TArray<struct FFLODTileRecordRecordInstanceDynamic> DynamicInstances; // 0x20(0x10)
	struct TArray<int32_t> DestroyedInstanceIndices; // 0x30(0x10)
};

// ScriptStruct Icarus.FLODTileRecordRecordInstanceDynamic
// Size: 0x40 (Inherited: 0x00)
struct FFLODTileRecordRecordInstanceDynamic {
	int32_t InstanceIndex; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct Icarus.FLODTileRecordRecordInstance
// Size: 0x08 (Inherited: 0x00)
struct FFLODTileRecordRecordInstance {
	int32_t InstanceIndex; // 0x00(0x04)
	int32_t LevelIndex; // 0x04(0x04)
};

// ScriptStruct Icarus.FocusableData
// Size: 0x1f0 (Inherited: 0x18)
struct FFocusableData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; // 0x18(0x28)
	struct FItemAttachmentRowHandle AttachmentData; // 0x40(0x18)
	char pad_58[0x8]; // 0x58(0x08)
	struct FTransform AttachmentOffset; // 0x60(0x30)
	enum class EAnimOverlayState AnimOverlayType; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FItemAnimationsRowHandle AnimationData; // 0x94(0x18)
	bool bApplyAutomaticSpineBend; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct TSoftObjectPtr<UAnimMontage> FPFocusedMontage; // 0xb0(0x28)
	struct TSoftObjectPtr<UBlendSpace1D> FPLocoBlendSpaceOverride; // 0xd8(0x28)
	struct TSoftObjectPtr<UAnimSequence> FPIdleAnim; // 0x100(0x28)
	struct TSoftObjectPtr<UAnimMontage> TPFocusedMontage; // 0x128(0x28)
	struct TSoftObjectPtr<UAnimSequence> TPUprightIdle; // 0x150(0x28)
	struct TSoftObjectPtr<UAnimSequence> TPCrouchedIdle; // 0x178(0x28)
	struct TSoftObjectPtr<UAnimSequence> TPPoses; // 0x1a0(0x28)
	struct TSoftObjectPtr<UAnimMontage> ItemFocusedMontage; // 0x1c8(0x28)
};

// ScriptStruct Icarus.ItemAnimationsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FItemAnimationsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ItemAttachmentRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FItemAttachmentRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FocusableEnum
// Size: 0x10 (Inherited: 0x10)
struct FFocusableEnum : FRowEnum {
};

// ScriptStruct Icarus.FocusableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FFocusableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FoodTypesEnum
// Size: 0x10 (Inherited: 0x10)
struct FFoodTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.FoodTypesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FFoodTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FoundItemEntry
// Size: 0x10 (Inherited: 0x00)
struct FFoundItemEntry {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Icarus.FuelData
// Size: 0x20 (Inherited: 0x20)
struct FFuelData : FResourceNetworkData {
};

// ScriptStruct Icarus.FuelEnum
// Size: 0x10 (Inherited: 0x10)
struct FFuelEnum : FRowEnum {
};

// ScriptStruct Icarus.FuelRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FFuelRowHandle : FRowHandle {
};

// ScriptStruct Icarus.GameModeRecord
// Size: 0x30 (Inherited: 0x00)
struct FGameModeRecord {
	int32_t GameStateSeed; // 0x00(0x04)
	float TimeOfDay; // 0x04(0x04)
	float ProspectGameTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FString> ApprovedPlayerIDs; // 0x10(0x10)
	struct TArray<struct FName> SessionFlagRecords; // 0x20(0x10)
};

// ScriptStruct Icarus.GeneratorData
// Size: 0x50 (Inherited: 0x18)
struct FGeneratorData : FIcarusTableRowBase {
	enum class EIcarusResourceType Resource; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t GenerationRate; // 0x1c(0x04)
	float GenerationRatio; // 0x20(0x04)
	float ResourceUnitsRequired; // 0x24(0x04)
	struct TArray<struct FItemsStaticRowHandle> TransmutableItems; // 0x28(0x10)
	struct TArray<enum class EIcarusResourceType> TransmutableResources; // 0x38(0x10)
	bool RequiresManualActivation; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Icarus.GeneratorEnum
// Size: 0x10 (Inherited: 0x10)
struct FGeneratorEnum : FRowEnum {
};

// ScriptStruct Icarus.GeneratorRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FGeneratorRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PoseSnapshotRecorder
// Size: 0x38 (Inherited: 0x00)
struct FPoseSnapshotRecorder {
	struct TArray<struct FTransform> LocalTransforms; // 0x00(0x10)
	struct TArray<struct FName> BoneNames; // 0x10(0x10)
	struct FName SkeletalMeshName; // 0x20(0x08)
	struct FName SnapshotName; // 0x28(0x08)
	bool bIsValid; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Icarus.CharacterCosmeticsRecorder
// Size: 0xc8 (Inherited: 0x00)
struct FCharacterCosmeticsRecorder {
	struct FString Customization_Head; // 0x00(0x10)
	struct FString Customization_Hair; // 0x10(0x10)
	struct FString Customization_HairColor; // 0x20(0x10)
	struct FString Customization_Body; // 0x30(0x10)
	struct FString Customization_BodyColor; // 0x40(0x10)
	struct FString Customization_SkinTone; // 0x50(0x10)
	struct FString Customization_HeadTattoo; // 0x60(0x10)
	struct FString Customization_HeadScar; // 0x70(0x10)
	struct FString Customization_HeadFacialHair; // 0x80(0x10)
	struct FString Customization_CapLogo; // 0x90(0x10)
	bool IsMale; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FString Customization_Voice; // 0xa8(0x10)
	struct FString Customization_EyeColor; // 0xb8(0x10)
};

// ScriptStruct Icarus.GlobalCheatData
// Size: 0x02 (Inherited: 0x00)
struct FGlobalCheatData {
	bool bBuildingIntegrityDisabled; // 0x00(0x01)
	bool bShelteredRequiredDisabled; // 0x01(0x01)
};

// ScriptStruct Icarus.GOAPActionsEnum
// Size: 0x10 (Inherited: 0x10)
struct FGOAPActionsEnum : FRowEnum {
};

// ScriptStruct Icarus.GOAPActionsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FGOAPActionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.GOAPGoalsEnum
// Size: 0x10 (Inherited: 0x10)
struct FGOAPGoalsEnum : FRowEnum {
};

// ScriptStruct Icarus.GOAPGoalsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FGOAPGoalsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.GOAPMotivationsEnum
// Size: 0x10 (Inherited: 0x10)
struct FGOAPMotivationsEnum : FRowEnum {
};

// ScriptStruct Icarus.GOAPMotivationsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FGOAPMotivationsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.GOAPPropertiesEnum
// Size: 0x10 (Inherited: 0x10)
struct FGOAPPropertiesEnum : FRowEnum {
};

// ScriptStruct Icarus.GOAPSetupEnum
// Size: 0x10 (Inherited: 0x10)
struct FGOAPSetupEnum : FRowEnum {
};

// ScriptStruct Icarus.GOAPSetup
// Size: 0x70 (Inherited: 0x18)
struct FGOAPSetup : FIcarusTableRowBase {
	struct TArray<struct FGOAPMotivationsRowHandle> Motivations; // 0x18(0x10)
	struct TArray<struct FGOAPActionsRowHandle> Actions; // 0x28(0x10)
	struct TArray<struct FGOAPGoalsRowHandle> Goals; // 0x38(0x10)
	struct FGOAPGoalsRowHandle DefaultGoal; // 0x48(0x18)
	struct FGOAPState DefaultState; // 0x60(0x10)
};

// ScriptStruct Icarus.GOAPState
// Size: 0x10 (Inherited: 0x00)
struct FGOAPState {
	struct TArray<struct FGOAPProperty> Properties; // 0x00(0x10)
};

// ScriptStruct Icarus.GOAPProperty
// Size: 0x1c (Inherited: 0x00)
struct FGOAPProperty {
	struct FGOAPPropertiesRowHandle Property; // 0x00(0x18)
	bool Value; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Icarus.GOAPMotivation
// Size: 0x70 (Inherited: 0x18)
struct FGOAPMotivation : FIcarusTableRowBase {
	struct FName Description; // 0x18(0x08)
	float UpdateTick; // 0x20(0x04)
	int32_t MinValue; // 0x24(0x04)
	int32_t MaxValue; // 0x28(0x04)
	int32_t StartingValue; // 0x2c(0x04)
	int32_t StartingValueDeviation; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FGOAPMotivationTrigger> MotivationTriggers; // 0x38(0x10)
	struct TSoftClassPtr<UObject> MotivationBP; // 0x48(0x28)
};

// ScriptStruct Icarus.GOAPMotivationTrigger
// Size: 0x68 (Inherited: 0x00)
struct FGOAPMotivationTrigger {
	int32_t TriggerThreshold; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FGOAPState ThresholdOutcome; // 0x08(0x10)
	struct TMap<struct FStatsEnum, int32_t> ThresholdStats; // 0x18(0x50)
};

// ScriptStruct Icarus.GOAPGoal
// Size: 0x68 (Inherited: 0x18)
struct FGOAPGoal : FIcarusTableRowBase {
	struct FName Description; // 0x18(0x08)
	struct FGOAPState State; // 0x20(0x10)
	int32_t Priority; // 0x30(0x04)
	bool bIsRepeatable; // 0x34(0x01)
	bool bRepeatOnlyOnSuccess; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float CooldownTime; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TSoftClassPtr<UObject> GoalBP; // 0x40(0x28)
};

// ScriptStruct Icarus.GOAPAction
// Size: 0x108 (Inherited: 0x18)
struct FGOAPAction : FIcarusTableRowBase {
	struct FName Description; // 0x18(0x08)
	struct TArray<struct FGOAPProperty> Preconditions; // 0x20(0x10)
	struct TArray<struct FGOAPProperty> Effects; // 0x30(0x10)
	int32_t Cost; // 0x40(0x04)
	float Timeout; // 0x44(0x04)
	float TickRate; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UNavigationQueryFilter* DefaultNavFilterOverride; // 0x50(0x08)
	enum class EMovementState AssociatedMovementState; // 0x58(0x01)
	enum class EActionRangeCheckBehaviour RangeCheckBehaviour; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct TSoftClassPtr<UObject> ActionBP; // 0x60(0x28)
	struct TSoftObjectPtr<UBehaviorTree> BehaviourTree; // 0x88(0x28)
	enum class EAIAudioState AudioState; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TMap<struct FBaseStatsEnum, int32_t> ActionStats; // 0xb8(0x50)
};

// ScriptStruct Icarus.GOAPProperties
// Size: 0x20 (Inherited: 0x18)
struct FGOAPProperties : FIcarusTableRowBase {
	struct FName Description; // 0x18(0x08)
};

// ScriptStruct Icarus.GrantedAurasEnum
// Size: 0x10 (Inherited: 0x10)
struct FGrantedAurasEnum : FRowEnum {
};

// ScriptStruct Icarus.GrantedAurasRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FGrantedAurasRowHandle : FRowHandle {
};

// ScriptStruct Icarus.GravestoneData
// Size: 0x88 (Inherited: 0x00)
struct FGravestoneData {
	struct FPoseSnapshot DeathPose; // 0x00(0x38)
	struct FVector DeathVelocity; // 0x38(0x0c)
	struct FCharacterCosmetics PlayerCosmetics; // 0x44(0x34)
	struct FName UserID; // 0x78(0x08)
	bool bHasSettled; // 0x80(0x01)
	bool bIsDataValid; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
};

// ScriptStruct Icarus.GravestoneDataRecord
// Size: 0x120 (Inherited: 0x00)
struct FGravestoneDataRecord {
	struct FPoseSnapshotRecorder DeathPose; // 0x00(0x38)
	struct FVector DeathVelocity; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct FCharacterCosmeticsRecorder PlayerCosmetics; // 0x48(0xc8)
	struct FName UserID; // 0x110(0x08)
	bool bHasSettled; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
};

// ScriptStruct Icarus.HighlightableData
// Size: 0x78 (Inherited: 0x18)
struct FHighlightableData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; // 0x18(0x28)
	struct FText DisplayName; // 0x40(0x18)
	struct FText Description; // 0x58(0x18)
	bool bDisableMeshOutline; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct Icarus.HighlightableEnum
// Size: 0x10 (Inherited: 0x10)
struct FHighlightableEnum : FRowEnum {
};

// ScriptStruct Icarus.HighlightableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FHighlightableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.HintsData
// Size: 0x30 (Inherited: 0x18)
struct FHintsData : FIcarusTableRowBase {
	struct FText Text; // 0x18(0x18)
};

// ScriptStruct Icarus.HintsEnum
// Size: 0x10 (Inherited: 0x10)
struct FHintsEnum : FRowEnum {
};

// ScriptStruct Icarus.HintsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FHintsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.HitableData
// Size: 0x40 (Inherited: 0x18)
struct FHitableData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; // 0x18(0x28)
};

// ScriptStruct Icarus.HitableEnum
// Size: 0x10 (Inherited: 0x10)
struct FHitableEnum : FRowEnum {
};

// ScriptStruct Icarus.HitableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FHitableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.HuntingClueSetup
// Size: 0x90 (Inherited: 0x18)
struct FHuntingClueSetup : FIcarusTableRowBase {
	enum class EHuntingClueType ClueType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float ClueLifespan; // 0x1c(0x04)
	float MaxClueDistance; // 0x20(0x04)
	float MinDistanceBetweenClues; // 0x24(0x04)
	float MaxDistanceBetweenClues; // 0x28(0x04)
	float MinTimeBetweenClues; // 0x2c(0x04)
	float MaxTimeBetweenClues; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TSoftClassPtr<UObject> HuntingClue; // 0x38(0x28)
	struct TSoftClassPtr<UObject> HuntingWidget; // 0x60(0x28)
	bool HasTrail; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float TrailSegmentLength; // 0x8c(0x04)
};

// ScriptStruct Icarus.HuntingClueSetupEnum
// Size: 0x10 (Inherited: 0x10)
struct FHuntingClueSetupEnum : FRowEnum {
};

// ScriptStruct Icarus.HuntingClueSetupRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FHuntingClueSetupRowHandle : FRowHandle {
};

// ScriptStruct Icarus.HuntingSetup
// Size: 0x28 (Inherited: 0x18)
struct FHuntingSetup : FIcarusTableRowBase {
	struct TArray<struct FHuntingClueSetupRowHandle> HuntingClues; // 0x18(0x10)
};

// ScriptStruct Icarus.HuntingSetupEnum
// Size: 0x10 (Inherited: 0x10)
struct FHuntingSetupEnum : FRowEnum {
};

// ScriptStruct Icarus.IcarusBiome
// Size: 0x50 (Inherited: 0x18)
struct FIcarusBiome : FIcarusTableRowBase {
	struct FName BiomeName; // 0x18(0x08)
	struct FColor Color; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UCurveFloat* BiomeTemperatureCurve; // 0x28(0x08)
	int32_t WeatherFrequency; // 0x30(0x04)
	enum class EAtmosphereType AtmosphereType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FBiomeAudioDataRowHandle Audio; // 0x38(0x18)
};

// ScriptStruct Icarus.IcarusBuildingType
// Size: 0x80 (Inherited: 0x18)
struct FIcarusBuildingType : FIcarusTableRowBase {
	struct FTagQueriesRowHandle TagQuery; // 0x18(0x18)
	struct TMap<struct FStatsEnum, int32_t> Stats; // 0x30(0x50)
};

// ScriptStruct Icarus.CaveSpawnConfig
// Size: 0x38 (Inherited: 0x00)
struct FCaveSpawnConfig {
	int32_t MinSpawnNumber; // 0x00(0x04)
	int32_t MaxSpawnNumber; // 0x04(0x04)
	struct TArray<struct FTransform> SpawnPoints; // 0x08(0x10)
	struct TArray<struct AActor*> SpawnedActors; // 0x18(0x10)
	struct TArray<float> DeathTimestamps; // 0x28(0x10)
};

// ScriptStruct Icarus.SavedInventoryContainerData
// Size: 0x28 (Inherited: 0x00)
struct FSavedInventoryContainerData {
	int32_t InventoryIndex; // 0x00(0x04)
	struct FName InventoryInfo; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FInventorySaveData InventorySaveData; // 0x10(0x18)
};

// ScriptStruct Icarus.IcarusDeployableType
// Size: 0x30 (Inherited: 0x18)
struct FIcarusDeployableType : FIcarusTableRowBase {
	struct FTagQueriesRowHandle TagQuery; // 0x18(0x18)
};

// ScriptStruct Icarus.IcarusFoodType
// Size: 0x30 (Inherited: 0x18)
struct FIcarusFoodType : FIcarusTableRowBase {
	struct FTagQueriesRowHandle TagQuery; // 0x18(0x18)
};

// ScriptStruct Icarus.StaticMeshCapsuleCollider
// Size: 0x20 (Inherited: 0x00)
struct FStaticMeshCapsuleCollider {
	struct FVector Center; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float Radius; // 0x18(0x04)
	float Length; // 0x1c(0x04)
};

// ScriptStruct Icarus.RefreshData
// Size: 0x50 (Inherited: 0x00)
struct FRefreshData {
	struct UObject* Object; // 0x00(0x08)
	char pad_8[0x48]; // 0x08(0x48)
};

// ScriptStruct Icarus.IcarusGOAPAIFact
// Size: 0x60 (Inherited: 0x00)
struct FIcarusGOAPAIFact {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* Target; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	enum class EGOAPObjectType ObjectType; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FAIStimulus LastAIStimulus; // 0x20(0x3c)
	enum class EGOAPFactSource FactSource; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// ScriptStruct Icarus.IcarusGOAPProperty
// Size: 0x02 (Inherited: 0x00)
struct FIcarusGOAPProperty {
	enum class EGOAPProperty Key; // 0x00(0x01)
	bool bValue; // 0x01(0x01)
};

// ScriptStruct Icarus.IcarusGOAPSearchNode
// Size: 0x30 (Inherited: 0x00)
struct FIcarusGOAPSearchNode {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Icarus.IcarusGOAPState
// Size: 0x10 (Inherited: 0x00)
struct FIcarusGOAPState {
	struct TArray<struct FIcarusGOAPProperty> Properties; // 0x00(0x10)
};

// ScriptStruct Icarus.IcarusIntRange
// Size: 0x08 (Inherited: 0x00)
struct FIcarusIntRange {
	int32_t Min; // 0x00(0x04)
	int32_t Max; // 0x04(0x04)
};

// ScriptStruct Icarus.IcarusItemConstructionParameters
// Size: 0x28 (Inherited: 0x00)
struct FIcarusItemConstructionParameters {
	bool bSimulatePhysics; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString MeshAssetPath; // 0x08(0x10)
	struct FName CollisionProfile; // 0x18(0x08)
	enum class EComponentMobility Mobility; // 0x20(0x01)
	bool bHiddenInGame; // 0x21(0x01)
	bool bDisableItemStaticDataTraits; // 0x22(0x01)
	bool bReplicateStatArray; // 0x23(0x01)
	bool bForceNoReplication; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Icarus.IcarusItemSpawnParameters
// Size: 0x88 (Inherited: 0x00)
struct FIcarusItemSpawnParameters {
	struct FName Name; // 0x00(0x08)
	struct AActor* Template; // 0x08(0x08)
	struct AActor* Owner; // 0x10(0x08)
	struct APawn* Instigator; // 0x18(0x08)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FIcarusItemConstructionParameters ConstructionParameters; // 0x28(0x28)
	struct FIcarusItemSpawnParametersAdvanced Advanced; // 0x50(0x38)
};

// ScriptStruct Icarus.IcarusItemSpawnParametersAdvanced
// Size: 0x38 (Inherited: 0x00)
struct FIcarusItemSpawnParametersAdvanced {
	struct AIcarusItem* OverrideActorClass; // 0x00(0x08)
	struct TSoftObjectPtr<UStreamableRenderAsset> OverrideMeshPtr; // 0x08(0x28)
	bool bNoFail; // 0x30(0x01)
	bool bDeferConstruction; // 0x31(0x01)
	bool bAllowDuringConstructionScript; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
};

// ScriptStruct Icarus.ActionAnimData
// Size: 0x80 (Inherited: 0x00)
struct FActionAnimData {
	struct TSoftObjectPtr<UAnimMontage> ActionMontage; // 0x00(0x28)
	struct TMap<struct FName, float> PossibleMontageSections; // 0x28(0x50)
	struct FName ActionNotify; // 0x78(0x08)
};

// ScriptStruct Icarus.InteractableHitLookup
// Size: 0xa0 (Inherited: 0x00)
struct FInteractableHitLookup {
	enum class EInteractableHitLookupType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FHitResult Hit; // 0x04(0x8c)
	struct AFLODTile* Tile; // 0x90(0x08)
	int32_t RecordIndex; // 0x98(0x04)
	int32_t InstanceIndex; // 0x9c(0x04)
};

// ScriptStruct Icarus.ArmourComponentData
// Size: 0x50 (Inherited: 0x00)
struct FArmourComponentData {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct FArmourRowHandle> AssociatedRowHandles; // 0x10(0x10)
	struct TArray<struct USkeletalMeshComponent*> ArmourComponents; // 0x20(0x10)
	struct TArray<struct USkeletalMeshComponent*> SimpleTPArmourComponents; // 0x30(0x10)
	struct TArray<struct USkeletalMeshComponent*> FPArmourComponents; // 0x40(0x10)
};

// ScriptStruct Icarus.FocusedItemData
// Size: 0x10 (Inherited: 0x00)
struct FFocusedItemData {
	struct UInventory* FocusedItemInventory; // 0x00(0x08)
	int32_t FocusedItemSlot; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Icarus.ItemPriority
// Size: 0x28 (Inherited: 0x00)
struct FItemPriority {
	struct FTagQueriesRowHandle QueryRow; // 0x00(0x18)
	struct FInventoryIDEnum InventoryID; // 0x18(0x10)
};

// ScriptStruct Icarus.InventoryIDEnum
// Size: 0x10 (Inherited: 0x10)
struct FInventoryIDEnum : FRowEnum {
};

// ScriptStruct Icarus.IcarusProjectileType
// Size: 0x30 (Inherited: 0x18)
struct FIcarusProjectileType : FIcarusTableRowBase {
	struct FTagQueriesRowHandle TagQuery; // 0x18(0x18)
};

// ScriptStruct Icarus.InitialQuestRecord
// Size: 0x18 (Inherited: 0x00)
struct FInitialQuestRecord {
	struct FString QuestActorName; // 0x00(0x10)
	int32_t RelevantActorIcarusUID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Icarus.QuestVariableRecord
// Size: 0x20 (Inherited: 0x00)
struct FQuestVariableRecord {
	struct FString VariableName; // 0x00(0x10)
	bool bVariable; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float fVariable; // 0x14(0x04)
	int32_t iVariable; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Icarus.SubQuestRecord
// Size: 0x20 (Inherited: 0x00)
struct FSubQuestRecord {
	struct FString SubQuestName; // 0x00(0x10)
	struct FName SubQuestRowName; // 0x10(0x08)
	int32_t RelevantActorIcarusUID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Icarus.RelevantQuestActorRecord
// Size: 0x28 (Inherited: 0x00)
struct FRelevantQuestActorRecord {
	struct FString RelevantActorClassName; // 0x00(0x10)
	struct FString Key; // 0x10(0x10)
	int32_t RelevantActorIcarusUID; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Icarus.IcarusSession
// Size: 0x198 (Inherited: 0x00)
struct FIcarusSession {
	struct FProspectInfo ProspectInfo; // 0x00(0x88)
	struct FBlueprintSessionResult Session; // 0x88(0x108)
	bool FromServer; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
};

// ScriptStruct Icarus.IcarusStat
// Size: 0x1c (Inherited: 0x00)
struct FIcarusStat {
	struct FStatsRowHandle Stat; // 0x00(0x18)
	int32_t Value; // 0x18(0x04)
};

// ScriptStruct Icarus.IcarusStatDescription
// Size: 0xf0 (Inherited: 0x18)
struct FIcarusStatDescription : FIcarusTableRowBase {
	struct FText Title; // 0x18(0x18)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x30(0x28)
	struct FText PositiveTitleFormat; // 0x58(0x18)
	struct FText NegativeTitleFormat; // 0x70(0x18)
	struct FText PositiveDescription; // 0x88(0x18)
	struct FText NegativeDescription; // 0xa0(0x18)
	bool bIsReplicated; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct TArray<struct FStatDisplayCalculation> DisplayOperations; // 0xc0(0x10)
	bool bIsWorldStat; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	struct FStatCategoriesRowHandle StatCategory; // 0xd4(0x18)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct Icarus.StatCategoriesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FStatCategoriesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.StatDisplayCalculation
// Size: 0x08 (Inherited: 0x00)
struct FStatDisplayCalculation {
	enum class EStatDisplayOperation Operation; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
};

// ScriptStruct Icarus.StatContainer
// Size: 0x108 (Inherited: 0x00)
struct FStatContainer {
	char pad_0[0xf8]; // 0x00(0xf8)
	struct UIcarusStatContainer* IcarusStatComponent; // 0xf8(0x08)
	char pad_100[0x8]; // 0x100(0x08)
};

// ScriptStruct Icarus.BackingStatContainer
// Size: 0x20 (Inherited: 0x00)
struct FBackingStatContainer {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Icarus.StatList
// Size: 0x10 (Inherited: 0x00)
struct FStatList {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Icarus.StatSource
// Size: 0x08 (Inherited: 0x00)
struct FStatSource {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Icarus.StatsRepArray
// Size: 0x118 (Inherited: 0x108)
struct FStatsRepArray : FFastArraySerializer {
	struct TArray<struct FStatPairRepState> StatList; // 0x108(0x10)
};

// ScriptStruct Icarus.StatPairRepState
// Size: 0x14 (Inherited: 0x0c)
struct FStatPairRepState : FFastArraySerializerItem {
	int32_t Stat; // 0x0c(0x04)
	int32_t Value; // 0x10(0x04)
};

// ScriptStruct Icarus.IcarusTerrain
// Size: 0xe8 (Inherited: 0x18)
struct FIcarusTerrain : FIcarusTableRowBase {
	struct FText TerrainName; // 0x18(0x18)
	struct TSoftObjectPtr<UWorld> Level; // 0x30(0x28)
	struct TSoftObjectPtr<UGameplayTexture> TemperatureMap; // 0x58(0x28)
	struct TSoftObjectPtr<UGameplayTexture> BiomeMap; // 0x80(0x28)
	struct TSoftObjectPtr<UGameplayTexture> Bounds; // 0xa8(0x28)
	struct FAISpawnConfigRowHandle SpawnConfig; // 0xd0(0x18)
};

// ScriptStruct Icarus.TestProfileData
// Size: 0x60 (Inherited: 0x00)
struct FTestProfileData {
	char pad_0[0x10]; // 0x00(0x10)
	float LatestWindowedFrameAverage; // 0x10(0x04)
	float MinWindowedFrameAverage; // 0x14(0x04)
	float MaxWindowedFrameAverage; // 0x18(0x04)
	float MaxWindowedFrametimeRailPosition; // 0x1c(0x04)
	float MinFrametime; // 0x20(0x04)
	float MaxFrametime; // 0x24(0x04)
	float MaxFrametimeRailPosition; // 0x28(0x04)
	char pad_2C[0x34]; // 0x2c(0x34)
};

// ScriptStruct Icarus.IcarusTimeSpan
// Size: 0x20 (Inherited: 0x00)
struct FIcarusTimeSpan {
	struct FIcarusIntRange Days; // 0x00(0x08)
	struct FIcarusIntRange Hours; // 0x08(0x08)
	struct FIcarusIntRange Mins; // 0x10(0x08)
	struct FIcarusIntRange Seconds; // 0x18(0x08)
};

// ScriptStruct Icarus.IcarusToolType
// Size: 0x30 (Inherited: 0x18)
struct FIcarusToolType : FIcarusTableRowBase {
	struct FTagQueriesRowHandle TagQuery; // 0x18(0x18)
};

// ScriptStruct Icarus.IcarusWeatherActionData
// Size: 0x300 (Inherited: 0x18)
struct FIcarusWeatherActionData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> WeatherActionComponent; // 0x18(0x28)
	bool bIsRampingUp; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TSoftObjectPtr<UTexture2D> TimelineIcon; // 0x48(0x28)
	struct FSlateColor TimelineTailBrush; // 0x70(0x28)
	float ExposureMultiplier; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TMap<float, struct FModifier> ExposureModifiers; // 0xa0(0x50)
	bool bEnableVisuals_Rain; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float Severity_RainStart; // 0xf4(0x04)
	float Severity_RainEnd; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct TSoftObjectPtr<UCurveFloat> Curve_Rain; // 0x100(0x28)
	bool bEnableFillable_Rain; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float Rainfall_Millilitre_Start; // 0x12c(0x04)
	float Rainfall_Millilitre_End; // 0x130(0x04)
	bool bEnableVisuals_Clouds; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
	float Severity_CloudsStart; // 0x138(0x04)
	float Severity_CloudsEnd; // 0x13c(0x04)
	struct TSoftObjectPtr<UCurveFloat> Curve_Clouds; // 0x140(0x28)
	bool bGeneratesLightning; // 0x168(0x01)
	char pad_169[0x3]; // 0x169(0x03)
	float MinLightningInterval; // 0x16c(0x04)
	float MaxLightningInterval; // 0x170(0x04)
	bool bGeneratesThunder; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	float ThunderIntensity; // 0x178(0x04)
	bool bEnableVisuals_Debris; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	float Severity_DebrisStart; // 0x180(0x04)
	float Severity_DebrisEnd; // 0x184(0x04)
	struct TSoftObjectPtr<UCurveFloat> Curve_Debris; // 0x188(0x28)
	bool bEnableAction_Temperature; // 0x1b0(0x01)
	char pad_1B1[0x3]; // 0x1b1(0x03)
	float Temperature_Start; // 0x1b4(0x04)
	float Temperature_End; // 0x1b8(0x04)
	int32_t Perception_Percentage; // 0x1bc(0x04)
	bool bEnableVisuals_Wind; // 0x1c0(0x01)
	bool bEnableAction_Wind; // 0x1c1(0x01)
	char pad_1C2[0x2]; // 0x1c2(0x02)
	float Severity_WindStart; // 0x1c4(0x04)
	float Severity_WindEnd; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct TSoftObjectPtr<UCurveFloat> Curve_Wind; // 0x1d0(0x28)
	float StormTier; // 0x1f8(0x04)
	float StormWindDamagePeriod; // 0x1fc(0x04)
	float UnzipChance; // 0x200(0x04)
	float UnzipbuildingCountMultiplier; // 0x204(0x04)
	float UnzipbuildingDamageMultiplier; // 0x208(0x04)
	bool bEnableEndAllWindDamageTrigger; // 0x20c(0x01)
	char pad_20D[0x3]; // 0x20d(0x03)
	struct TSoftObjectPtr<UCurveFloat> Curve_EndAllWindDamageTrigger; // 0x210(0x28)
	bool bWindTopplesTrees; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	float TreeToppleMinInterval; // 0x23c(0x04)
	float TreeToppleMaxInterval; // 0x240(0x04)
	float TreeToppleStrengthThreshold; // 0x244(0x04)
	bool bEnableDamage_Deployables; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	float Damage_Deployables_MinInterval; // 0x24c(0x04)
	float Damage_Deployables_MaxInterval; // 0x250(0x04)
	float Damage_Deployables_Intensity; // 0x254(0x04)
	bool bEnableDamage_Players; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	float Damage_Players_MinInterval; // 0x25c(0x04)
	float Damage_Players_MaxInterval; // 0x260(0x04)
	float Damage_Players_Intensity; // 0x264(0x04)
	bool bEnableFireExtinguish; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	float FireExtinguish_RollChanceMulti; // 0x26c(0x04)
	float FireExtinguish_MinInterval; // 0x270(0x04)
	float FireExtinguish_MaxInterval; // 0x274(0x04)
	bool bEnableVisuals_Sand; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	float Severity_SandStart; // 0x27c(0x04)
	float Severity_SandEnd; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct TSoftObjectPtr<UCurveFloat> Curve_Sand; // 0x288(0x28)
	bool bEnableVisuals_Snow; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	float Severity_SnowStart; // 0x2b4(0x04)
	float Severity_SnowEnd; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct TSoftObjectPtr<UCurveFloat> Curve_Snow; // 0x2c0(0x28)
	bool bEnableVisuals_Snow_Buildup; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	float Severity_Snow_BuildupStart; // 0x2ec(0x04)
	float Severity_Snow_BuildupEnd; // 0x2f0(0x04)
	bool bEnableVisuals_Snow_Storm; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	float Severity_Snow_StormStart; // 0x2f8(0x04)
	float Severity_Snow_StormEnd; // 0x2fc(0x04)
};

// ScriptStruct Icarus.IcarusWeatherBiomeGroup
// Size: 0x28 (Inherited: 0x18)
struct FIcarusWeatherBiomeGroup : FIcarusTableRowBase {
	struct TArray<struct FBiomesRowHandle> AvaliableBiomes; // 0x18(0x10)
};

// ScriptStruct Icarus.IcarusWeatherEvent
// Size: 0xa0 (Inherited: 0x18)
struct FIcarusWeatherEvent : FIcarusTableRowBase {
	enum class EIcarusWeatherDifficulty Difficulty; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t Weighting; // 0x1c(0x04)
	struct TArray<struct FWeatherBiomeGroupsRowHandle> BiomeGroups; // 0x20(0x10)
	struct UTexture2D* WeatherImage; // 0x30(0x08)
	struct FText WeatherName; // 0x38(0x18)
	struct FText WeatherDescription; // 0x50(0x18)
	struct TArray<struct FWeatherAction> WeatherActions; // 0x68(0x10)
	struct TArray<struct FWeatherMusicCue> MusicCues; // 0x78(0x10)
	struct TArray<struct FScriptedEventSetup> ScriptedEventConfig; // 0x88(0x10)
	float ChanceToActivateScriptedEvent; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct Icarus.ScriptedEventSetup
// Size: 0x70 (Inherited: 0x00)
struct FScriptedEventSetup {
	struct FScriptedEventsRowHandle ScriptedEvent; // 0x00(0x18)
	int32_t RandomChanceWeight; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TSet<int32_t> ActiveWeatherStages; // 0x20(0x50)
};

// ScriptStruct Icarus.ScriptedEventsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FScriptedEventsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.WeatherMusicCue
// Size: 0x08 (Inherited: 0x00)
struct FWeatherMusicCue {
	enum class EMusicConditionWeather MusicCondition; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t TriggerTime; // 0x04(0x04)
};

// ScriptStruct Icarus.WeatherAction
// Size: 0x1c (Inherited: 0x00)
struct FWeatherAction {
	struct FWeatherActionsRowHandle Action; // 0x00(0x18)
	float TimeInSeconds; // 0x18(0x04)
};

// ScriptStruct Icarus.WeatherActionsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FWeatherActionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.WeatherBiomeGroupsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FWeatherBiomeGroupsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.IcarusWeatherPoolData
// Size: 0x28 (Inherited: 0x18)
struct FIcarusWeatherPoolData : FIcarusTableRowBase {
	struct TArray<struct FWeatherPoolEntry> WeatherEvents; // 0x18(0x10)
};

// ScriptStruct Icarus.WeatherPoolEntry
// Size: 0x24 (Inherited: 0x00)
struct FWeatherPoolEntry {
	struct FWeatherEventsRowHandle Event; // 0x00(0x18)
	float Weight; // 0x18(0x04)
	float StormTimeScalarForWeightedSelection; // 0x1c(0x04)
	float MinimumSecondsBeforeUse; // 0x20(0x04)
};

// ScriptStruct Icarus.CaveLocation
// Size: 0x38 (Inherited: 0x00)
struct FCaveLocation {
	struct FVector Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TSoftObjectPtr<UCaveTemplateAsset> Template; // 0x10(0x28)
};

// ScriptStruct Icarus.InteractStack
// Size: 0x10 (Inherited: 0x00)
struct FInteractStack {
	struct TArray<struct UInteractableBehaviour*> Stack; // 0x00(0x10)
};

// ScriptStruct Icarus.InteractData
// Size: 0x78 (Inherited: 0x18)
struct FInteractData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; // 0x18(0x28)
	enum class EAuthorityType AuthorityType; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float InteractCooldown; // 0x44(0x04)
	struct FText InteractionText; // 0x48(0x18)
	struct FStaminaActionCostsRowHandle InteractStaminaCost; // 0x60(0x18)
};

// ScriptStruct Icarus.InteractableData
// Size: 0x58 (Inherited: 0x18)
struct FInteractableData : FIcarusTableRowBase {
	struct TArray<struct FInteractionHandleWithRequiredTag> WorldPressInteracts; // 0x18(0x10)
	struct TArray<struct FInteractionHandleWithRequiredTag> WorldHoldInteracts; // 0x28(0x10)
	struct TArray<struct FInteractionHandleWithRequiredTag> WorldAltHoldInteracts; // 0x38(0x10)
	struct TArray<struct FRowHandle> GenericData; // 0x48(0x10)
};

// ScriptStruct Icarus.InteractionHandleWithRequiredTag
// Size: 0x28 (Inherited: 0x00)
struct FInteractionHandleWithRequiredTag {
	struct FInteractionsRowHandle InteractionRow; // 0x00(0x18)
	struct FString Tag; // 0x18(0x10)
};

// ScriptStruct Icarus.InteractionsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FInteractionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.InteractableEnum
// Size: 0x10 (Inherited: 0x10)
struct FInteractableEnum : FRowEnum {
};

// ScriptStruct Icarus.InteractableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FInteractableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.InteractionsEnum
// Size: 0x10 (Inherited: 0x10)
struct FInteractionsEnum : FRowEnum {
};

// ScriptStruct Icarus.FindAllStacksResult
// Size: 0xb8 (Inherited: 0x00)
struct FFindAllStacksResult {
	struct UInventory* Inventory; // 0x00(0x08)
	int32_t InventorySlotIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FItemData ItemTypeInstance; // 0x10(0xa0)
	int32_t TotalStacksCount; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct Icarus.ManuallyAddedInventoryItems
// Size: 0x10 (Inherited: 0x00)
struct FManuallyAddedInventoryItems {
	struct TArray<struct FItemRewardEntry> ItemRewards; // 0x00(0x10)
};

// ScriptStruct Icarus.ItemRewardEntry
// Size: 0x84 (Inherited: 0x00)
struct FItemRewardEntry {
	struct FItemTemplateRowHandle Item; // 0x00(0x18)
	float DropChance; // 0x18(0x04)
	struct FStatsRowHandle DropChanceAdditiveStat; // 0x1c(0x18)
	struct FStatsRowHandle RequiredStatToDrop; // 0x34(0x18)
	int32_t MinRandomStackCount; // 0x4c(0x04)
	int32_t MaxRandomStackCount; // 0x50(0x04)
	struct FStatsRowHandle StackAdditiveStat; // 0x54(0x18)
	struct FStatsRowHandle StackMultiplicativeStat; // 0x6c(0x18)
};

// ScriptStruct Icarus.InventoryContainerData
// Size: 0x30 (Inherited: 0x18)
struct FInventoryContainerData : FIcarusTableRowBase {
	struct FInventoryInfoRowHandle InventoryInfo; // 0x18(0x18)
};

// ScriptStruct Icarus.InventoryInfoRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FInventoryInfoRowHandle : FRowHandle {
};

// ScriptStruct Icarus.InventoryContainerEnum
// Size: 0x10 (Inherited: 0x10)
struct FInventoryContainerEnum : FRowEnum {
};

// ScriptStruct Icarus.InventoryContainerRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FInventoryContainerRowHandle : FRowHandle {
};

// ScriptStruct Icarus.InventoryData
// Size: 0x28 (Inherited: 0x18)
struct FInventoryData : FIcarusTableRowBase {
	struct TArray<struct FInventoryInfoRowHandle> Inventories; // 0x18(0x10)
};

// ScriptStruct Icarus.InventoryInfo
// Size: 0x60 (Inherited: 0x18)
struct FInventoryInfo : FIcarusTableRowBase {
	struct FInventoryIDEnum InventoryID; // 0x18(0x10)
	struct FTagQueriesRowHandle SlotTemplate; // 0x28(0x18)
	int32_t StartingSlots; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FInventorySlotOverride> SlotOverrides; // 0x48(0x10)
	bool RemoveOnly; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct Icarus.InventorySlotOverride
// Size: 0x38 (Inherited: 0x18)
struct FInventorySlotOverride : FIcarusTableRowBase {
	struct FTagQueriesRowHandle Query; // 0x18(0x18)
	int32_t Location; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Icarus.InventorySlotsFastArray
// Size: 0x158 (Inherited: 0x108)
struct FInventorySlotsFastArray : FFastArraySerializer {
	struct TArray<struct FInventorySlot> Slots; // 0x108(0x10)
	char pad_118[0x40]; // 0x118(0x40)
};

// ScriptStruct Icarus.InventorySlot
// Size: 0xf0 (Inherited: 0x0c)
struct FInventorySlot : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FItemData ItemData; // 0x10(0xa0)
	struct FTagQueriesRowHandle Query; // 0xb0(0x18)
	bool Locked; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	struct FItemsStaticRowHandle LastItem; // 0xcc(0x18)
	bool Slotable; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	int32_t Index; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct Icarus.InventoryIdentification
// Size: 0x10 (Inherited: 0x00)
struct FInventoryIdentification {
	struct FInventoryIDEnum ID; // 0x00(0x10)
};

// ScriptStruct Icarus.InventoryEnum
// Size: 0x10 (Inherited: 0x10)
struct FInventoryEnum : FRowEnum {
};

// ScriptStruct Icarus.InventoryID
// Size: 0x20 (Inherited: 0x18)
struct FInventoryID : FIcarusTableRowBase {
	bool PlayerInventory; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Icarus.InventoryIDRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FInventoryIDRowHandle : FRowHandle {
};

// ScriptStruct Icarus.InventoryInfoEnum
// Size: 0x10 (Inherited: 0x10)
struct FInventoryInfoEnum : FRowEnum {
};

// ScriptStruct Icarus.ProcessorRecipeResult
// Size: 0x28 (Inherited: 0x00)
struct FProcessorRecipeResult {
	struct FProcessorRecipesRowHandle Recipe; // 0x00(0x18)
	struct TArray<struct FTagQueriesRowHandle> SuccessfulQueries; // 0x18(0x10)
};

// ScriptStruct Icarus.RefundResult
// Size: 0x10 (Inherited: 0x00)
struct FRefundResult {
	struct TArray<struct FRefundItem> RefundedItems; // 0x00(0x10)
};

// ScriptStruct Icarus.RefundItem
// Size: 0x1c (Inherited: 0x00)
struct FRefundItem {
	struct FItemsStaticRowHandle ItemType; // 0x00(0x18)
	int32_t StackSize; // 0x18(0x04)
};

// ScriptStruct Icarus.InventoryRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FInventoryRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ItemableData
// Size: 0xb8 (Inherited: 0x18)
struct FItemableData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; // 0x18(0x28)
	struct FText DisplayName; // 0x40(0x18)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x58(0x28)
	struct FText Description; // 0x80(0x18)
	struct FText FlavorText; // 0x98(0x18)
	int32_t Weight; // 0xb0(0x04)
	int32_t MaxStack; // 0xb4(0x04)
};

// ScriptStruct Icarus.ItemableEnum
// Size: 0x10 (Inherited: 0x10)
struct FItemableEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemAnimationData
// Size: 0x360 (Inherited: 0x18)
struct FItemAnimationData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UAnimSequence> FPJumpStart; // 0x18(0x28)
	struct TSoftObjectPtr<UAnimSequence> FPJumpLoop; // 0x40(0x28)
	struct TSoftObjectPtr<UAnimSequence> FPJumpEnd; // 0x68(0x28)
	struct TSoftObjectPtr<UBlendSpace1D> FPLocoBlendSpace; // 0x90(0x28)
	struct TSoftObjectPtr<UAnimSequence> TPJumpStart; // 0xb8(0x28)
	struct TSoftObjectPtr<UAnimSequence> TPJumpLoop; // 0xe0(0x28)
	struct TSoftObjectPtr<UAnimSequence> TPJumpEnd; // 0x108(0x28)
	struct FLocomotionAnims TPLocomotionAnims; // 0x130(0x208)
	struct TSoftObjectPtr<UBlendSpace1D> UpToDownBlendSpace; // 0x338(0x28)
};

// ScriptStruct Icarus.LocomotionAnims
// Size: 0x208 (Inherited: 0x00)
struct FLocomotionAnims {
	struct TSoftObjectPtr<UAnimSequence> WalkF; // 0x00(0x28)
	struct TSoftObjectPtr<UAnimSequence> WalkR; // 0x28(0x28)
	struct TSoftObjectPtr<UAnimSequence> WalkB; // 0x50(0x28)
	struct TSoftObjectPtr<UAnimSequence> WalkL; // 0x78(0x28)
	struct TSoftObjectPtr<UAnimSequence> RunF; // 0xa0(0x28)
	struct TSoftObjectPtr<UAnimSequence> RunR; // 0xc8(0x28)
	struct TSoftObjectPtr<UAnimSequence> RunB; // 0xf0(0x28)
	struct TSoftObjectPtr<UAnimSequence> RunL; // 0x118(0x28)
	struct TSoftObjectPtr<UAnimSequence> SprintF; // 0x140(0x28)
	struct TSoftObjectPtr<UAnimSequence> CrouchWalkF; // 0x168(0x28)
	struct TSoftObjectPtr<UAnimSequence> CrouchWalkR; // 0x190(0x28)
	struct TSoftObjectPtr<UAnimSequence> CrouchWalkB; // 0x1b8(0x28)
	struct TSoftObjectPtr<UAnimSequence> CrouchWalkL; // 0x1e0(0x28)
};

// ScriptStruct Icarus.ItemAnimationsEnum
// Size: 0x10 (Inherited: 0x10)
struct FItemAnimationsEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemAttachmentData
// Size: 0x38 (Inherited: 0x18)
struct FItemAttachmentData : FIcarusTableRowBase {
	struct FName TPAttachmentSocketName; // 0x18(0x08)
	struct FName FPAttachmentSocketName; // 0x20(0x08)
	struct FName BackAttachmentSocketName; // 0x28(0x08)
	enum class EHandedness EquippableHandedness; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Icarus.ItemAttachmentEnum
// Size: 0x10 (Inherited: 0x10)
struct FItemAttachmentEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemAudioData
// Size: 0x2c0 (Inherited: 0x18)
struct FItemAudioData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> PickUpSound; // 0x18(0x28)
	struct TSoftObjectPtr<UFMODEvent> DropSound; // 0x40(0x28)
	struct TSoftObjectPtr<UFMODEvent> HitSound; // 0x68(0x28)
	struct TSoftObjectPtr<UFMODEvent> DamagedSound; // 0x90(0x28)
	struct TSoftObjectPtr<UFMODEvent> BrokenSound; // 0xb8(0x28)
	struct TSoftObjectPtr<UFMODEvent> UseWhenBrokenSound; // 0xe0(0x28)
	struct TSoftObjectPtr<UFMODEvent> RepairedSound; // 0x108(0x28)
	struct TSoftObjectPtr<UFMODEvent> DestroyedSound; // 0x130(0x28)
	struct TSoftObjectPtr<UFMODEvent> SlottedSound; // 0x158(0x28)
	struct TSoftObjectPtr<UFMODEvent> ConsumedSound; // 0x180(0x28)
	struct TSoftObjectPtr<UFMODEvent> ConsumeFailedSound; // 0x1a8(0x28)
	struct TSoftObjectPtr<UFMODEvent> ConsumableExpiredSound; // 0x1d0(0x28)
	struct TSoftObjectPtr<UFMODEvent> BackpackSound; // 0x1f8(0x28)
	struct TSoftObjectPtr<UFMODEvent> BackpackFootstepSound; // 0x220(0x28)
	struct TSoftObjectPtr<UFMODEvent> WeatherSound; // 0x248(0x28)
	struct TMap<struct FName, struct FItemAudioAnimData> AnimSounds; // 0x270(0x50)
};

// ScriptStruct Icarus.ItemAudioAnimData
// Size: 0x10 (Inherited: 0x00)
struct FItemAudioAnimData {
	struct TArray<struct TSoftObjectPtr<UFMODEvent>> FMODEvents; // 0x00(0x10)
};

// ScriptStruct Icarus.ItemAudioDataEnum
// Size: 0x10 (Inherited: 0x10)
struct FItemAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemAudioDataRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FItemAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ItemClassificationsIconsData
// Size: 0x50 (Inherited: 0x18)
struct FItemClassificationsIconsData : FIcarusTableRowBase {
	struct FTagQueriesRowHandle TagQuery; // 0x18(0x18)
	struct UTexture2D* Icon; // 0x30(0x08)
	struct FText Tooltip; // 0x38(0x18)
};

// ScriptStruct Icarus.ItemClassificationsIconsEnum
// Size: 0x10 (Inherited: 0x10)
struct FItemClassificationsIconsEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemClassificationsIconsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FItemClassificationsIconsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ItemConstructionData
// Size: 0x40 (Inherited: 0x18)
struct FItemConstructionData : FIcarusTableRowBase {
	struct FItemsStaticRowHandle ItemStatic; // 0x18(0x18)
	struct TArray<struct FItemDynamicContainer> ItemDynamic; // 0x30(0x10)
};

// ScriptStruct Icarus.ItemDynamicContainer
// Size: 0x30 (Inherited: 0x18)
struct FItemDynamicContainer : FIcarusTableRowBase {
	struct UTraitComponent* Component; // 0x18(0x08)
	struct TArray<struct FItemDynamicData> Properties; // 0x20(0x10)
};

// ScriptStruct Icarus.ItemStaticData
// Size: 0x4a0 (Inherited: 0x18)
struct FItemStaticData : FIcarusTableRowBase {
	struct FMeshableRowHandle Meshable; // 0x18(0x18)
	struct FItemableRowHandle Itemable; // 0x30(0x18)
	struct FInteractableRowHandle Interactable; // 0x48(0x18)
	struct FHitableRowHandle Hitable; // 0x60(0x18)
	struct FEquippableRowHandle Equippable; // 0x78(0x18)
	struct FFocusableRowHandle Focusable; // 0x90(0x18)
	struct FHighlightableRowHandle Highlightable; // 0xa8(0x18)
	struct FActionableRowHandle Actionable; // 0xc0(0x18)
	struct FBuildableRowHandle Buildable; // 0xd8(0x18)
	struct FConsumableRowHandle Consumable; // 0xf0(0x18)
	struct FUsableRowHandle Usable; // 0x108(0x18)
	struct FCombustibleRowHandle Combustible; // 0x120(0x18)
	struct FDeployableRowHandle Deployable; // 0x138(0x18)
	struct FArmourRowHandle Armour; // 0x150(0x18)
	struct FBallisticRowHandle Ballistic; // 0x168(0x18)
	struct FVehicularRowHandle Vehicular; // 0x180(0x18)
	struct FFillableRowHandle Fillable; // 0x198(0x18)
	struct FDurableRowHandle Durable; // 0x1b0(0x18)
	struct FFloatableRowHandle Floatable; // 0x1c8(0x18)
	struct FRocketableRowHandle Rocketable; // 0x1e0(0x18)
	struct FInventoryRowHandle Inventory; // 0x1f8(0x18)
	struct FProcessingRowHandle Processing; // 0x210(0x18)
	struct FThermalRowHandle Thermal; // 0x228(0x18)
	struct FExperienceRowHandle Experience; // 0x240(0x18)
	struct FSlotableRowHandle Slotable; // 0x258(0x18)
	struct FDecayableRowHandle Decayable; // 0x270(0x18)
	struct FFlammableRowHandle Flammable; // 0x288(0x18)
	struct FTransmutableRowHandle Transmutable; // 0x2a0(0x18)
	struct FGeneratorRowHandle Generator; // 0x2b8(0x18)
	struct FWeightRowHandle Weight; // 0x2d0(0x18)
	struct FFarmableRowHandle Farmable; // 0x2e8(0x18)
	struct FInventoryContainerRowHandle InventoryContainer; // 0x300(0x18)
	struct FEnergyRowHandle Energy; // 0x318(0x18)
	struct FWaterRowHandle Water; // 0x330(0x18)
	struct FOxygenRowHandle Oxygen; // 0x348(0x18)
	struct FFuelRowHandle Fuel; // 0x360(0x18)
	struct FToolDamageRowHandle ToolDamage; // 0x378(0x18)
	struct FAmmoTypesRowHandle AmmoType; // 0x390(0x18)
	struct FItemAudioDataRowHandle Audio; // 0x3a8(0x18)
	struct FRangedWeaponDataRowHandle RangedWeaponData; // 0x3c0(0x18)
	struct FFirearmDataRowHandle FirearmData; // 0x3d8(0x18)
	struct FFLODDescriptionsRowHandle FLODData; // 0x3f0(0x18)
	struct TMap<struct FBaseStatsEnum, int32_t> AdditionalStats; // 0x408(0x50)
	int32_t CraftingExperience; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct FGameplayTagContainer Manual_Tags; // 0x460(0x20)
	struct FGameplayTagContainer Generated_Tags; // 0x480(0x20)
};

// ScriptStruct Icarus.RangedWeaponDataRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FRangedWeaponDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ToolDamageRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FToolDamageRowHandle : FRowHandle {
};

// ScriptStruct Icarus.OxygenRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FOxygenRowHandle : FRowHandle {
};

// ScriptStruct Icarus.WaterRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FWaterRowHandle : FRowHandle {
};

// ScriptStruct Icarus.WeightRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FWeightRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TransmutableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FTransmutableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SlotableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FSlotableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ThermalRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FThermalRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RocketableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FRocketableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.VehicularRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FVehicularRowHandle : FRowHandle {
};

// ScriptStruct Icarus.UsableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FUsableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MeshableRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FMeshableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ItemRewards
// Size: 0x28 (Inherited: 0x18)
struct FItemRewards : FIcarusTableRowBase {
	struct TArray<struct FItemRewardEntry> Rewards; // 0x18(0x10)
};

// ScriptStruct Icarus.ItemReward
// Size: 0x24 (Inherited: 0x00)
struct FItemReward {
	struct FItemTemplateRowHandle ItemTemplate; // 0x00(0x18)
	bool bUseRandomStackCount; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t MinRandomStackCount; // 0x1c(0x04)
	int32_t MaxRandomStackCount; // 0x20(0x04)
};

// ScriptStruct Icarus.ItemRewardsEnum
// Size: 0x10 (Inherited: 0x10)
struct FItemRewardsEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemsStaticEnum
// Size: 0x10 (Inherited: 0x10)
struct FItemsStaticEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemStack
// Size: 0x1c (Inherited: 0x00)
struct FItemStack {
	struct FItemsStaticRowHandle Item; // 0x00(0x18)
	int32_t Count; // 0x18(0x04)
};

// ScriptStruct Icarus.ItemRecordStatData
// Size: 0x0c (Inherited: 0x00)
struct FItemRecordStatData {
	struct FName Stat; // 0x00(0x08)
	int32_t Value; // 0x08(0x04)
};

// ScriptStruct Icarus.ItemRecordDynamicData
// Size: 0x08 (Inherited: 0x00)
struct FItemRecordDynamicData {
	int32_t Type; // 0x00(0x04)
	int32_t Value; // 0x04(0x04)
};

// ScriptStruct Icarus.ItemTemplateEnum
// Size: 0x10 (Inherited: 0x10)
struct FItemTemplateEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemTraitMask
// Size: 0x40 (Inherited: 0x18)
struct FItemTraitMask : FIcarusTableRowBase {
	bool bMeshable; // 0x18(0x01)
	bool bItemable; // 0x19(0x01)
	bool bInteractable; // 0x1a(0x01)
	bool bHitable; // 0x1b(0x01)
	bool bEquippable; // 0x1c(0x01)
	bool bFocusable; // 0x1d(0x01)
	bool bHighlightable; // 0x1e(0x01)
	bool bActionable; // 0x1f(0x01)
	bool bBuildable; // 0x20(0x01)
	bool bConsumable; // 0x21(0x01)
	bool bUsable; // 0x22(0x01)
	bool bCombustible; // 0x23(0x01)
	bool bDeployable; // 0x24(0x01)
	bool bArmour; // 0x25(0x01)
	bool bBallistic; // 0x26(0x01)
	bool bVehicular; // 0x27(0x01)
	bool bFillable; // 0x28(0x01)
	bool bDurable; // 0x29(0x01)
	bool bFloatable; // 0x2a(0x01)
	bool bRocketable; // 0x2b(0x01)
	bool bInventory; // 0x2c(0x01)
	bool bProcessing; // 0x2d(0x01)
	bool bEnergy; // 0x2e(0x01)
	bool bWater; // 0x2f(0x01)
	bool bOxygen; // 0x30(0x01)
	bool bFuel; // 0x31(0x01)
	bool bThermal; // 0x32(0x01)
	bool bExperience; // 0x33(0x01)
	bool bSlotable; // 0x34(0x01)
	bool bDecayable; // 0x35(0x01)
	bool bFlammable; // 0x36(0x01)
	bool bTransmutable; // 0x37(0x01)
	bool bGenerator; // 0x38(0x01)
	bool bWeight; // 0x39(0x01)
	bool bFarmable; // 0x3a(0x01)
	bool bInventoryContainer; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Icarus.ItemTraitMasksEnum
// Size: 0x10 (Inherited: 0x10)
struct FItemTraitMasksEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemTraitMasksRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FItemTraitMasksRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ItemWeightStatQueries
// Size: 0x40 (Inherited: 0x18)
struct FItemWeightStatQueries : FIcarusTableRowBase {
	struct FStatsEnum WeightStatToApply; // 0x18(0x10)
	struct FTagQueriesRowHandle ItemTagQuery; // 0x28(0x18)
};

// ScriptStruct Icarus.ItemWeightStatQueriesEnum
// Size: 0x10 (Inherited: 0x10)
struct FItemWeightStatQueriesEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemWeightStatQueriesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FItemWeightStatQueriesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.KeybindContextsEnum
// Size: 0x10 (Inherited: 0x10)
struct FKeybindContextsEnum : FRowEnum {
};

// ScriptStruct Icarus.KeybindContextsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FKeybindContextsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.KeybindData
// Size: 0x108 (Inherited: 0x18)
struct FKeybindData : FIcarusTableRowBase {
	struct FName ActionName; // 0x18(0x08)
	bool bOverrideActionName; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FName ActionNameOverride; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FText DisplayName; // 0x30(0x18)
	struct FKeybindContextsRowHandle BindContext; // 0x48(0x18)
	enum class EInputContext InputContext; // 0x60(0x01)
	bool bIsAxis; // 0x61(0x01)
	enum class EKeybindVisibility Visibility; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)
	struct FInputActionKeyMapping KeyboardActionMapping; // 0x68(0x28)
	struct FInputAxisKeyMapping KeyboardAxisMapping; // 0x90(0x28)
	struct FInputActionKeyMapping GamepadActionMapping; // 0xb8(0x28)
	struct FInputAxisKeyMapping GamepadAxisMapping; // 0xe0(0x28)
};

// ScriptStruct Icarus.KeybindContext
// Size: 0x40 (Inherited: 0x18)
struct FKeybindContext : FIcarusTableRowBase {
	struct FText DisplayName; // 0x18(0x18)
	struct TArray<struct FKeybindContextsRowHandle> SharedWithContexts; // 0x30(0x10)
};

// ScriptStruct Icarus.KeybindingsEnum
// Size: 0x10 (Inherited: 0x10)
struct FKeybindingsEnum : FRowEnum {
};

// ScriptStruct Icarus.KeybindingsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FKeybindingsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.KeyData
// Size: 0x48 (Inherited: 0x18)
struct FKeyData : FIcarusTableRowBase {
	struct FKey Key; // 0x18(0x18)
	struct FText DisplayNameOverride; // 0x30(0x18)
};

// ScriptStruct Icarus.KeyIconData
// Size: 0x60 (Inherited: 0x18)
struct FKeyIconData : FIcarusTableRowBase {
	struct TArray<struct FKey> Keys; // 0x18(0x10)
	bool bHideText; // 0x28(0x01)
	enum class EControllerIconSet IconSet; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct UTexture2D* IconPress; // 0x30(0x08)
	struct UTexture2D* IconHold; // 0x38(0x08)
	struct FLinearColor IconTint; // 0x40(0x10)
	struct FLinearColor TextColor; // 0x50(0x10)
};

// ScriptStruct Icarus.KeyIconsEnum
// Size: 0x10 (Inherited: 0x10)
struct FKeyIconsEnum : FRowEnum {
};

// ScriptStruct Icarus.KeyIconsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FKeyIconsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.KeysEnum
// Size: 0x10 (Inherited: 0x10)
struct FKeysEnum : FRowEnum {
};

// ScriptStruct Icarus.KeysRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FKeysRowHandle : FRowHandle {
};

// ScriptStruct Icarus.LanguagesData
// Size: 0x20 (Inherited: 0x18)
struct FLanguagesData : FIcarusTableRowBase {
	bool bEnabled; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t Coverage; // 0x1c(0x04)
};

// ScriptStruct Icarus.LanguagesEnum
// Size: 0x10 (Inherited: 0x10)
struct FLanguagesEnum : FRowEnum {
};

// ScriptStruct Icarus.LanguagesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FLanguagesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.LevelSequencesData
// Size: 0x90 (Inherited: 0x18)
struct FLevelSequencesData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UWorld> Level; // 0x18(0x28)
	struct TMap<struct FName, struct ULevelSequence*> LevelSequences; // 0x40(0x50)
};

// ScriptStruct Icarus.LevelSequencesEnum
// Size: 0x10 (Inherited: 0x10)
struct FLevelSequencesEnum : FRowEnum {
};

// ScriptStruct Icarus.LevelSequencesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FLevelSequencesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MapIconsData
// Size: 0x90 (Inherited: 0x18)
struct FMapIconsData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> WidgetClass; // 0x18(0x28)
	struct UTexture2D* MapIcon; // 0x40(0x08)
	struct FColor Color; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FStatsEnum RequiredPlayerStatToShow; // 0x50(0x10)
	struct FStatsEnum RequiredActorStatToShow; // 0x60(0x10)
	bool RequireOwnershipToShow; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float ZOrder; // 0x74(0x04)
	float ScaleFactor; // 0x78(0x04)
	bool GetsRotation; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	struct FVector2D BrushSize; // 0x80(0x08)
	bool UpdateOnTick; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// ScriptStruct Icarus.MapIconsEnum
// Size: 0x10 (Inherited: 0x10)
struct FMapIconsEnum : FRowEnum {
};

// ScriptStruct Icarus.MapIconsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FMapIconsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MapRow
// Size: 0x10 (Inherited: 0x00)
struct FMapRow {
	struct TArray<enum class EMapTileRadarFlag> ColumnTiles; // 0x00(0x10)
};

// ScriptStruct Icarus.RadarV3ScanData
// Size: 0x28 (Inherited: 0x00)
struct FRadarV3ScanData {
	struct FVector Location; // 0x00(0x0c)
	float SizeInKM; // 0x0c(0x04)
	float Direction; // 0x10(0x04)
	float ArcLengthInPercent; // 0x14(0x04)
	float RandomOffset; // 0x18(0x04)
	float Distance; // 0x1c(0x04)
	float Intensity; // 0x20(0x04)
	int32_t UID; // 0x24(0x04)
};

// ScriptStruct Icarus.MapManagerRecord
// Size: 0x60 (Inherited: 0x00)
struct FMapManagerRecord {
	struct TMap<struct FIntPoint, int32_t> TileFlags; // 0x00(0x50)
	struct TArray<struct FRadarV3ScanData> RadarV3Scans; // 0x50(0x10)
};

// ScriptStruct Icarus.MapSearchArea
// Size: 0x50 (Inherited: 0x18)
struct FMapSearchArea : FIcarusTableRowBase {
	struct TSoftObjectPtr<UTexture2D> Image; // 0x18(0x28)
	struct FLinearColor Color; // 0x40(0x10)
};

// ScriptStruct Icarus.MapSearchAreaEnum
// Size: 0x10 (Inherited: 0x10)
struct FMapSearchAreaEnum : FRowEnum {
};

// ScriptStruct Icarus.MapSearchAreaRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FMapSearchAreaRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MeshableData
// Size: 0x180 (Inherited: 0x18)
struct FMeshableData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UStreamableRenderAsset> ItemMesh; // 0x18(0x28)
	struct TSoftClassPtr<UObject> ItemActor; // 0x40(0x28)
	struct TSoftObjectPtr<UStreamableRenderAsset> EquipHandMesh; // 0x68(0x28)
	struct TSoftClassPtr<UObject> EquipHandActor; // 0x90(0x28)
	struct TSoftObjectPtr<UStreamableRenderAsset> EquipBackMesh; // 0xb8(0x28)
	struct TSoftClassPtr<UObject> EquipBackActor; // 0xe0(0x28)
	struct TSoftObjectPtr<UStreamableRenderAsset> VehicleMesh; // 0x108(0x28)
	struct TSoftClassPtr<UObject> VehicleActor; // 0x130(0x28)
	struct TSoftClassPtr<UObject> DeployableActor; // 0x158(0x28)
};

// ScriptStruct Icarus.MeshableEnum
// Size: 0x10 (Inherited: 0x10)
struct FMeshableEnum : FRowEnum {
};

// ScriptStruct Icarus.MetaCurrency
// Size: 0xb8 (Inherited: 0x18)
struct FMetaCurrency : FIcarusTableRowBase {
	struct FText DisplayName; // 0x18(0x18)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x30(0x28)
	struct FColor Color; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FText Description; // 0x60(0x18)
	struct FItemsStaticRowHandle ItemStaticData; // 0x78(0x18)
	struct FString DecoratorText; // 0x90(0x10)
	struct FString DecoratorImage; // 0xa0(0x10)
	bool bDisplayOnMainScreen; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// ScriptStruct Icarus.MetaCurrencyEnum
// Size: 0x10 (Inherited: 0x10)
struct FMetaCurrencyEnum : FRowEnum {
};

// ScriptStruct Icarus.MetaResourceNodeInfo
// Size: 0x58 (Inherited: 0x18)
struct FMetaResourceNodeInfo : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> ResourceBP; // 0x18(0x28)
	struct FOreDepositRowHandle Resource; // 0x40(0x18)
};

// ScriptStruct Icarus.OreDepositRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FOreDepositRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MetaResourceNodesEnum
// Size: 0x10 (Inherited: 0x10)
struct FMetaResourceNodesEnum : FRowEnum {
};

// ScriptStruct Icarus.MetaResourceNodesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FMetaResourceNodesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MetaSpawn
// Size: 0x18 (Inherited: 0x00)
struct FMetaSpawn {
	struct FExoticSpawnEnum SpawnLocation; // 0x00(0x10)
	int32_t MinMetaAmount; // 0x10(0x04)
	int32_t MaxMetaAmount; // 0x14(0x04)
};

// ScriptStruct Icarus.WorkshopItem
// Size: 0x68 (Inherited: 0x18)
struct FWorkshopItem : FIcarusTableRowBase {
	struct FItemTemplateRowHandle Item; // 0x18(0x18)
	struct TArray<struct FWorkshopCost> ResearchCost; // 0x30(0x10)
	struct TArray<struct FWorkshopCost> ReplicationCost; // 0x40(0x10)
	struct FTalentsRowHandle RequiredMission; // 0x50(0x18)
};

// ScriptStruct Icarus.ModifierStateAudioData
// Size: 0xa8 (Inherited: 0x18)
struct FModifierStateAudioData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> PlayerModifierAddedSound; // 0x18(0x28)
	bool bReplayOnStack; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float CooldownTime; // 0x44(0x04)
	struct TSoftObjectPtr<UFMODEvent> PlayerModifierLoopSound; // 0x48(0x28)
	bool bApplyStackCountParameterToLoop; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TSoftObjectPtr<UFMODEvent> PlayerModifierRemovedSound; // 0x78(0x28)
	bool bApplyExposedVocalisation; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// ScriptStruct Icarus.ModifierStateAudioDataEnum
// Size: 0x10 (Inherited: 0x10)
struct FModifierStateAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.AuraActor
// Size: 0x10 (Inherited: 0x00)
struct FAuraActor {
	struct AActor* Actor; // 0x00(0x08)
	int32_t ModifierUID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Icarus.ModifierStatesEnum
// Size: 0x10 (Inherited: 0x10)
struct FModifierStatesEnum : FRowEnum {
};

// ScriptStruct Icarus.MultiPointAudioNode
// Size: 0x20 (Inherited: 0x00)
struct FMultiPointAudioNode {
	struct UObject* TargetObject; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct Icarus.MusicSubsystemConfig
// Size: 0x08 (Inherited: 0x00)
struct FMusicSubsystemConfig {
	float MinWaitTimeBetweenTracks; // 0x00(0x04)
	float MaxWaitTimeBetweenTracks; // 0x04(0x04)
};

// ScriptStruct Icarus.MusicTrack
// Size: 0x78 (Inherited: 0x18)
struct FMusicTrack : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> Event; // 0x18(0x28)
	struct UCurveFloat* FadeInCurve; // 0x40(0x08)
	struct UCurveFloat* FadeOutCurve; // 0x48(0x08)
	struct UCurveFloat* PrevTrackOverrideFadeOutCurve; // 0x50(0x08)
	bool bTrackCanBePaused; // 0x58(0x01)
	char PlayerStateFlags; // 0x59(0x01)
	char LocationFlags; // 0x5a(0x01)
	char CombatFlags; // 0x5b(0x01)
	char TimeOfDayFlags; // 0x5c(0x01)
	char WeatherFlags; // 0x5d(0x01)
	char DropTimeFlags; // 0x5e(0x01)
	char DropStateFlags; // 0x5f(0x01)
	char GameplayEventFlags; // 0x60(0x01)
	char DisasterFlags; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	float Tempo; // 0x64(0x04)
	struct FName Key; // 0x68(0x08)
	struct FName TimeSignature; // 0x70(0x08)
};

// ScriptStruct Icarus.MusicTracksEnum
// Size: 0x10 (Inherited: 0x10)
struct FMusicTracksEnum : FRowEnum {
};

// ScriptStruct Icarus.MusicTracksRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FMusicTracksRowHandle : FRowHandle {
};

// ScriptStruct Icarus.NetworkingStatus
// Size: 0x60 (Inherited: 0x00)
struct FNetworkingStatus {
	struct FString CurrentHostPlayerName; // 0x00(0x10)
	struct FString BackupHostPlayerName; // 0x10(0x10)
	struct TArray<struct FString> PlayerNames; // 0x20(0x10)
	struct TArray<int32_t> PlayerPing; // 0x30(0x10)
	bool bSavedLocally; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float TimeBetweenStateSaves; // 0x44(0x04)
	float TimeSinceDatabaseSave; // 0x48(0x04)
	float TimeBetweenHeartbeats; // 0x4c(0x04)
	float TimeSinceHeartbeat; // 0x50(0x04)
	float EndProspectUpdateTimeout; // 0x54(0x04)
	int32_t UpdateProspectStateFailedCounter; // 0x58(0x04)
	int32_t UpdateUnrealSessionFailedCounter; // 0x5c(0x04)
};

// ScriptStruct Icarus.OrchestrationEventDescription
// Size: 0x80 (Inherited: 0x18)
struct FOrchestrationEventDescription : FIcarusTableRowBase {
	struct TSet<struct FOrchestrationStateFlagsRowHandle> RequiredFlags; // 0x18(0x50)
	struct FOrchestrationStateFlagsRowHandle StateFlagToSetOnExecute; // 0x68(0x18)
};

// ScriptStruct Icarus.OrchestrationStateFlagsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FOrchestrationStateFlagsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.OrchestrationEventsEnum
// Size: 0x10 (Inherited: 0x10)
struct FOrchestrationEventsEnum : FRowEnum {
};

// ScriptStruct Icarus.OrchestrationEventsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FOrchestrationEventsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.OrchestrationStateFlag
// Size: 0x28 (Inherited: 0x18)
struct FOrchestrationStateFlag : FIcarusTableRowBase {
	struct FString FlagDescriptor; // 0x18(0x10)
};

// ScriptStruct Icarus.OrchestrationStateFlagsEnum
// Size: 0x10 (Inherited: 0x10)
struct FOrchestrationStateFlagsEnum : FRowEnum {
};

// ScriptStruct Icarus.OreDeposit
// Size: 0x108 (Inherited: 0x18)
struct FOreDeposit : FIcarusTableRowBase {
	struct FItemTemplateRowHandle ResourceType; // 0x18(0x18)
	struct TSoftObjectPtr<UMaterialInterface> RVTNodeMaterial_CF; // 0x30(0x28)
	struct TSoftObjectPtr<UMaterialInterface> RVTNodeMaterial_DC; // 0x58(0x28)
	struct TSoftObjectPtr<UMaterialInterface> NodeMaterial_CF; // 0x80(0x28)
	struct TSoftObjectPtr<UMaterialInterface> NodeMaterial_DC; // 0xa8(0x28)
	struct TSoftObjectPtr<UMaterialInterface> RockMaterial; // 0xd0(0x28)
	int32_t MinOreAvailable; // 0xf8(0x04)
	int32_t MaxOreAvailable; // 0xfc(0x04)
	int32_t MiningTimeSeconds; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct Icarus.OreDepositEnum
// Size: 0x10 (Inherited: 0x10)
struct FOreDepositEnum : FRowEnum {
};

// ScriptStruct Icarus.OutOfBoundsArray
// Size: 0x10 (Inherited: 0x00)
struct FOutOfBoundsArray {
	struct TArray<struct AActor*> OverlappedVolumes; // 0x00(0x10)
};

// ScriptStruct Icarus.OxygenData
// Size: 0x20 (Inherited: 0x20)
struct FOxygenData : FResourceNetworkData {
};

// ScriptStruct Icarus.OxygenEnum
// Size: 0x10 (Inherited: 0x10)
struct FOxygenEnum : FRowEnum {
};

// ScriptStruct Icarus.PerPlayerCheatData
// Size: 0x04 (Inherited: 0x00)
struct FPerPlayerCheatData {
	bool bGodMode; // 0x00(0x01)
	bool bUnlimitedResources; // 0x01(0x01)
	bool bAllRecipesUnlocked; // 0x02(0x01)
	bool bVerboseDamageLogging; // 0x03(0x01)
};

// ScriptStruct Icarus.PlayerAccoladeCategory
// Size: 0x30 (Inherited: 0x18)
struct FPlayerAccoladeCategory : FIcarusTableRowBase {
	struct FText DisplayName; // 0x18(0x18)
};

// ScriptStruct Icarus.PlayerAccoladeCategoriesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FPlayerAccoladeCategoriesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PlayerAudioShelterRecord
// Size: 0x18 (Inherited: 0x00)
struct FPlayerAudioShelterRecord {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Icarus.PlayerFootstepAudioData
// Size: 0x90 (Inherited: 0x18)
struct FPlayerFootstepAudioData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> FootstepSound; // 0x18(0x28)
	struct TSoftObjectPtr<UFMODEvent> JumpUpSound; // 0x40(0x28)
	struct TSoftObjectPtr<UFMODEvent> JumpLandSound; // 0x68(0x28)
};

// ScriptStruct Icarus.PlayerFootstepAudioDataEnum
// Size: 0x10 (Inherited: 0x10)
struct FPlayerFootstepAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.PlayerFootstepAudioDataRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FPlayerFootstepAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PlayerIdentityData
// Size: 0x28 (Inherited: 0x18)
struct FPlayerIdentityData : FIcarusTableRowBase {
	struct FColor Color; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UTexture2D* Icon; // 0x20(0x08)
};

// ScriptStruct Icarus.PlayerIdentityEnum
// Size: 0x10 (Inherited: 0x10)
struct FPlayerIdentityEnum : FRowEnum {
};

// ScriptStruct Icarus.PlayerIdentityRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FPlayerIdentityRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PlayerStartingStats
// Size: 0x80 (Inherited: 0x18)
struct FPlayerStartingStats : FIcarusTableRowBase {
	struct TMap<struct FStatsEnum, int32_t> StatsGranted; // 0x18(0x50)
	struct FSurvivalTriggersRowHandle SurvivalTriggers; // 0x68(0x18)
};

// ScriptStruct Icarus.SurvivalTriggersRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FSurvivalTriggersRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PlayerTracker
// Size: 0x78 (Inherited: 0x18)
struct FPlayerTracker : FIcarusTableRowBase {
	struct FText DisplayName; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct FPlayerTrackerCategoriesRowHandle TrackerCategory; // 0x48(0x18)
	struct TArray<struct FGameplayTag> TagsToTrack; // 0x60(0x10)
	enum class ETagRequirement TagRequirement; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct Icarus.PlayerTrackerCategoriesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FPlayerTrackerCategoriesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PlayerTrackerCategory
// Size: 0x28 (Inherited: 0x18)
struct FPlayerTrackerCategory : FIcarusTableRowBase {
	struct FString CategoryDescriptor; // 0x18(0x10)
};

// ScriptStruct Icarus.PlayerTrackerCategoriesEnum
// Size: 0x10 (Inherited: 0x10)
struct FPlayerTrackerCategoriesEnum : FRowEnum {
};

// ScriptStruct Icarus.PlayerTrackersEnum
// Size: 0x10 (Inherited: 0x10)
struct FPlayerTrackersEnum : FRowEnum {
};

// ScriptStruct Icarus.PreviewCameraSettings
// Size: 0x60 (Inherited: 0x18)
struct FPreviewCameraSettings : FIcarusTableRowBase {
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform RelativeOffset; // 0x20(0x30)
	float CameraFOV; // 0x50(0x04)
	char pad_54[0xc]; // 0x54(0x0c)
};

// ScriptStruct Icarus.PreviewCameraSettingsEnum
// Size: 0x10 (Inherited: 0x10)
struct FPreviewCameraSettingsEnum : FRowEnum {
};

// ScriptStruct Icarus.PreviewCameraSettingsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FPreviewCameraSettingsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ProcessingData
// Size: 0x68 (Inherited: 0x18)
struct FProcessingData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; // 0x18(0x28)
	struct FRecipeSetsRowHandle DefaultRecipeSet; // 0x40(0x18)
	bool RequiresEnergy; // 0x58(0x01)
	bool bRequiresShelter; // 0x59(0x01)
	bool AutoSelectRecipe; // 0x5a(0x01)
	bool ManualActivation; // 0x5b(0x01)
	int32_t QueueSize; // 0x5c(0x04)
	int32_t MaxMilliwattage; // 0x60(0x04)
	bool EffectedByPlayerStats; // 0x64(0x01)
	bool SendOutputDirectlyToPlayer; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
};

// ScriptStruct Icarus.ProcessingEnum
// Size: 0x10 (Inherited: 0x10)
struct FProcessingEnum : FRowEnum {
};

// ScriptStruct Icarus.ProcessorRecipesEnum
// Size: 0x10 (Inherited: 0x10)
struct FProcessorRecipesEnum : FRowEnum {
};

// ScriptStruct Icarus.ProjectileTypesEnum
// Size: 0x10 (Inherited: 0x10)
struct FProjectileTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.ProjectileTypesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FProjectileTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.IcarusProspect
// Size: 0x2c8 (Inherited: 0x18)
struct FIcarusProspect : FIcarusTableRowBase {
	struct FText DropName; // 0x18(0x18)
	struct FString DesignNotes; // 0x30(0x10)
	struct FText Description; // 0x40(0x18)
	struct FText FlavourText; // 0x58(0x18)
	struct UTexture2D* ProspectImage; // 0x70(0x08)
	struct TMap<enum class EMissionDifficulty, struct FDifficultySetup> DifficultySetup; // 0x78(0x50)
	enum class EIcarusProspectDifficulty Difficulty; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	struct FDialogueRowHandle BriefingDialogue; // 0xcc(0x18)
	struct FDialogueRowHandle LandingDialogue; // 0xe4(0x18)
	struct FDialogueRowHandle MissionCompleteDialogue; // 0xfc(0x18)
	int32_t RequiredLevel; // 0x114(0x04)
	struct TArray<struct FCharacterFlagsEnum> RequiredCharacterFlags; // 0x118(0x10)
	struct TArray<struct FCharacterFlagsEnum> ForbiddenCharacterFlags; // 0x128(0x10)
	struct TArray<struct FFlagsMultiRowHandle> RequiredFlags; // 0x138(0x10)
	struct TMap<struct FWorldBossesRowHandle, struct FVector2D> WorldBosses; // 0x148(0x50)
	struct TSoftObjectPtr<UCurveFloat> WeatherPercentageCurve; // 0x198(0x28)
	float FallbackWeatherPercentage; // 0x1c0(0x04)
	struct FWeatherPoolsRowHandle WeatherPool; // 0x1c4(0x18)
	bool bDisabled; // 0x1dc(0x01)
	char pad_1DD[0x3]; // 0x1dd(0x03)
	struct FTerrainsRowHandle Terrain; // 0x1e0(0x18)
	struct FFactionMissionsRowHandle FactionMission; // 0x1f8(0x18)
	bool bIsPersistent; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	struct FIcarusTimeSpan TimeDuration; // 0x214(0x20)
	int32_t StartingTime; // 0x234(0x04)
	struct UCurveFloat* TimeScaleCurve; // 0x238(0x08)
	struct TArray<struct FRulesetsRowHandle> AdditionalRulesets; // 0x240(0x10)
	int32_t PlayerSpawnGroupIndex; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct TArray<struct FMetaSpawn> MetaDepositSpawns; // 0x258(0x10)
	int32_t NumMetaSpawnsMin; // 0x268(0x04)
	int32_t NumMetaSpawnsMax; // 0x26c(0x04)
	struct TArray<struct FProspectStatsRowHandle> WorldStatList; // 0x270(0x10)
	struct TSoftObjectPtr<UGameplayTexture> BoundsOverride; // 0x280(0x28)
	struct FAISpawnConfigRowHandle AISpawnConfigOverride; // 0x2a8(0x18)
	bool bAbandonOnProspectExpiry; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
};

// ScriptStruct Icarus.ProspectStatsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FProspectStatsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TerrainsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FTerrainsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.WeatherPoolsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FWeatherPoolsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.WorldBossesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FWorldBossesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DifficultySetup
// Size: 0x60 (Inherited: 0x00)
struct FDifficultySetup {
	struct TArray<struct FProspectStatsRowHandle> DifficultyStats; // 0x00(0x10)
	bool bOverrideWeather; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TSoftObjectPtr<UCurveFloat> OverrideWeatherPercentageCurve; // 0x18(0x28)
	float OverrideFallbackWeatherPercentage; // 0x40(0x04)
	struct FWeatherPoolsRowHandle OverrideWeatherPool; // 0x44(0x18)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Icarus.ProspectListEnum
// Size: 0x10 (Inherited: 0x10)
struct FProspectListEnum : FRowEnum {
};

// ScriptStruct Icarus.ProspectListRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FProspectListRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ProspectCompletionCondition
// Size: 0x1c (Inherited: 0x00)
struct FProspectCompletionCondition {
	struct FMetaCurrencyRowHandle MetaCurrency; // 0x00(0x18)
	int32_t Amount; // 0x18(0x04)
};

// ScriptStruct Icarus.ProspectSaveStateHeader
// Size: 0xd0 (Inherited: 0x00)
struct FProspectSaveStateHeader {
	char pad_0[0x8]; // 0x00(0x08)
	int32_t Version; // 0x08(0x04)
	enum class ELobbyPrivacy LobbyPrivacy; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FProspectInfo ProspectInfo; // 0x10(0x88)
	struct FString ProspectMapName; // 0x98(0x10)
	struct FDateTime LastSavedDateTime; // 0xa8(0x08)
	struct FString ProspectID; // 0xb0(0x10)
	struct FString ProspectDTKey; // 0xc0(0x10)
};

// ScriptStruct Icarus.ProspectSaveState
// Size: 0xe0 (Inherited: 0xd0)
struct FProspectSaveState : FProspectSaveStateHeader {
	struct TArray<struct FStateRecorderBlob> StateRecorderBlobs; // 0xd0(0x10)
};

// ScriptStruct Icarus.StateRecorderBlob
// Size: 0x20 (Inherited: 0x00)
struct FStateRecorderBlob {
	struct FString ComponentClassName; // 0x00(0x10)
	struct TArray<char> BinaryData; // 0x10(0x10)
};

// ScriptStruct Icarus.ProspectStat
// Size: 0x68 (Inherited: 0x18)
struct FProspectStat : FIcarusTableRowBase {
	struct TMap<struct FWorldStatsEnum, int32_t> WorldStats; // 0x18(0x50)
};

// ScriptStruct Icarus.WorldStatsEnum
// Size: 0x10 (Inherited: 0x10)
struct FWorldStatsEnum : FStatsEnum {
};

// ScriptStruct Icarus.ProspectStatsEnum
// Size: 0x10 (Inherited: 0x10)
struct FProspectStatsEnum : FRowEnum {
};

// ScriptStruct Icarus.SubQuest
// Size: 0x18 (Inherited: 0x00)
struct FSubQuest {
	struct FQuestsEnum QuestEnum; // 0x00(0x10)
	struct AQuest* Quest; // 0x10(0x08)
};

// ScriptStruct Icarus.QuestsEnum
// Size: 0x10 (Inherited: 0x10)
struct FQuestsEnum : FRowEnum {
};

// ScriptStruct Icarus.QuestDescription
// Size: 0x40 (Inherited: 0x18)
struct FQuestDescription : FIcarusTableRowBase {
	struct FText Description; // 0x18(0x18)
	int32_t Depth; // 0x30(0x04)
	bool bComplete; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct AQuest* Quest; // 0x38(0x08)
};

// ScriptStruct Icarus.QuestVariable
// Size: 0x20 (Inherited: 0x00)
struct FQuestVariable {
	struct FString VariableName; // 0x00(0x10)
	bool bVariable; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float fVariable; // 0x14(0x04)
	int32_t iVariable; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Icarus.QuestActor
// Size: 0x18 (Inherited: 0x00)
struct FQuestActor {
	struct FString ActorName; // 0x00(0x10)
	struct AIcarusActor* RelevantActor; // 0x10(0x08)
};

// ScriptStruct Icarus.QuestModifierData
// Size: 0x40 (Inherited: 0x18)
struct FQuestModifierData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> OverrideClass; // 0x18(0x28)
};

// ScriptStruct Icarus.QuestEnemyModifier
// Size: 0x60 (Inherited: 0x40)
struct FQuestEnemyModifier : FQuestModifierData {
	struct TArray<struct FAISetupRowHandle> PossibleEnemies; // 0x40(0x10)
	int32_t MaxEnemies; // 0x50(0x04)
	bool bSpawnAllInitially; // 0x54(0x01)
	bool bRespawnEnemies; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	float SpawnInterval; // 0x58(0x04)
	float SpawnDistance; // 0x5c(0x04)
};

// ScriptStruct Icarus.QuestEnemyModifiersEnum
// Size: 0x10 (Inherited: 0x10)
struct FQuestEnemyModifiersEnum : FRowEnum {
};

// ScriptStruct Icarus.QuestEnemyModifiersRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FQuestEnemyModifiersRowHandle : FRowHandle {
};

// ScriptStruct Icarus.QuestEvent
// Size: 0x18 (Inherited: 0x18)
struct FQuestEvent : FIcarusTableRowBase {
};

// ScriptStruct Icarus.QuestEventsEnum
// Size: 0x10 (Inherited: 0x10)
struct FQuestEventsEnum : FRowEnum {
};

// ScriptStruct Icarus.QuestEventsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FQuestEventsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.QuestModifiersMultiRowHandle
// Size: 0x18 (Inherited: 0x10)
struct FQuestModifiersMultiRowHandle : FMultiRowHandle {
	enum class EQuestModifiersTableType DataTableName; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Icarus.QuestQueries
// Size: 0x60 (Inherited: 0x18)
struct FQuestQueries : FIcarusTableRowBase {
	struct FGameplayTagQuery Query; // 0x18(0x48)
};

// ScriptStruct Icarus.QuestQueriesEnum
// Size: 0x10 (Inherited: 0x10)
struct FQuestQueriesEnum : FRowEnum {
};

// ScriptStruct Icarus.QuestQueriesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FQuestQueriesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.QuestSetup
// Size: 0x128 (Inherited: 0x18)
struct FQuestSetup : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Class; // 0x18(0x28)
	int32_t Variation; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FText Description; // 0x48(0x18)
	struct FQuestQueriesRowHandle LocationQuery; // 0x60(0x18)
	struct TMap<enum class EDialogueEvents, struct FDialogueRowHandle> DialogueEvents; // 0x78(0x50)
	struct TMap<enum class EDialogueEvents, struct FDialoguePoolRowHandle> DialoguePoolEvents; // 0xc8(0x50)
	struct TArray<struct FQuestModifiersMultiRowHandle> Modifiers; // 0x118(0x10)
};

// ScriptStruct Icarus.QuestVocalisationModifier
// Size: 0x70 (Inherited: 0x40)
struct FQuestVocalisationModifier : FQuestModifierData {
	struct FDialogueRowHandle InitialDialogue; // 0x40(0x18)
	struct FDialogueRowHandle FinishDialogue; // 0x58(0x18)
};

// ScriptStruct Icarus.QuestVocalisationModifiersEnum
// Size: 0x10 (Inherited: 0x10)
struct FQuestVocalisationModifiersEnum : FRowEnum {
};

// ScriptStruct Icarus.QuestVocalisationModifiersRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FQuestVocalisationModifiersRowHandle : FRowHandle {
};

// ScriptStruct Icarus.QuestWeatherModifier
// Size: 0x40 (Inherited: 0x40)
struct FQuestWeatherModifier : FQuestModifierData {
};

// ScriptStruct Icarus.QuestWeatherModifiersEnum
// Size: 0x10 (Inherited: 0x10)
struct FQuestWeatherModifiersEnum : FRowEnum {
};

// ScriptStruct Icarus.QuestWeatherModifiersRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FQuestWeatherModifiersRowHandle : FRowHandle {
};

// ScriptStruct Icarus.QueueItem
// Size: 0x30 (Inherited: 0x00)
struct FQueueItem {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Icarus.QuickMove
// Size: 0x38 (Inherited: 0x18)
struct FQuickMove : FIcarusTableRowBase {
	struct FInventoryIDEnum Source; // 0x18(0x10)
	struct TArray<struct FInventoryIDEnum> Destinations; // 0x28(0x10)
};

// ScriptStruct Icarus.QuickMoveEnum
// Size: 0x10 (Inherited: 0x10)
struct FQuickMoveEnum : FRowEnum {
};

// ScriptStruct Icarus.QuickMoveRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FQuickMoveRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RadialMenuData
// Size: 0x28 (Inherited: 0x18)
struct FRadialMenuData : FIcarusTableRowBase {
	struct TArray<struct FRadialMenuOption> RadialOptions; // 0x18(0x10)
};

// ScriptStruct Icarus.RadialMenuOption
// Size: 0x70 (Inherited: 0x18)
struct FRadialMenuOption : FIcarusTableRowBase {
	struct FRadialOptionsRowHandle RadialOption; // 0x18(0x18)
	struct FText DisplayText; // 0x30(0x18)
	struct TSoftObjectPtr<UTexture2D> Image; // 0x48(0x28)
};

// ScriptStruct Icarus.RadialOptionsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FRadialOptionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RadialOption
// Size: 0x18 (Inherited: 0x18)
struct FRadialOption : FIcarusTableRowBase {
};

// ScriptStruct Icarus.RadialMenuDataEnum
// Size: 0x10 (Inherited: 0x10)
struct FRadialMenuDataEnum : FRowEnum {
};

// ScriptStruct Icarus.RadialMenuDataRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FRadialMenuDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RadialOptionsEnum
// Size: 0x10 (Inherited: 0x10)
struct FRadialOptionsEnum : FRowEnum {
};

// ScriptStruct Icarus.RangedWeaponData
// Size: 0xd0 (Inherited: 0x18)
struct FRangedWeaponData : FIcarusTableRowBase {
	struct FVector2D HipAccuracy; // 0x18(0x08)
	struct FVector2D AdsAccuracy; // 0x20(0x08)
	struct UCurveFloat* SwayCurve_X; // 0x28(0x08)
	struct UCurveFloat* SwayCurve_Y; // 0x30(0x08)
	float AdsSwayMultiplier; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UMatineeCameraShake* WeaponFireShake; // 0x40(0x08)
	float WeaponFireShakeAdsScale; // 0x48(0x04)
	float WeaponFireShakeCrouchScale; // 0x4c(0x04)
	float WeaponReloadTime; // 0x50(0x04)
	float HipFOVMultiplier; // 0x54(0x04)
	float AdsFOVMultiplier; // 0x58(0x04)
	float MinRequiredCharge; // 0x5c(0x04)
	float MinThrowCharge; // 0x60(0x04)
	float ChargeSpeed; // 0x64(0x04)
	struct UCurveFloat* LaunchForceCurve; // 0x68(0x08)
	struct TArray<struct FItemsStaticRowHandle> ValidAmmoItems; // 0x70(0x10)
	struct TMap<struct FStatsEnum, int32_t> Stats; // 0x80(0x50)
};

// ScriptStruct Icarus.RangedWeaponDataEnum
// Size: 0x10 (Inherited: 0x10)
struct FRangedWeaponDataEnum : FRowEnum {
};

// ScriptStruct Icarus.RecipeSetsEnum
// Size: 0x10 (Inherited: 0x10)
struct FRecipeSetsEnum : FRowEnum {
};

// ScriptStruct Icarus.RepGraphClassPoliciesEnum
// Size: 0x10 (Inherited: 0x10)
struct FRepGraphClassPoliciesEnum : FRowEnum {
};

// ScriptStruct Icarus.RepGraphClassPoliciesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FRepGraphClassPoliciesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RepGraphClassSettingsEnum
// Size: 0x10 (Inherited: 0x10)
struct FRepGraphClassSettingsEnum : FRowEnum {
};

// ScriptStruct Icarus.RepGraphClassSettingsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FRepGraphClassSettingsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RepGraphClassSettings
// Size: 0x40 (Inherited: 0x18)
struct FRepGraphClassSettings : FIcarusTableRowBase {
	struct FString Description; // 0x18(0x10)
	float DistancePriorityScale; // 0x28(0x04)
	float StarvationPriorityScale; // 0x2c(0x04)
	float AccumulatedNetPriorityBias; // 0x30(0x04)
	int32_t ReplicationPeriodFrame; // 0x34(0x04)
	int32_t ActorChannelFrameTimeout; // 0x38(0x04)
	float NetCullDistance; // 0x3c(0x04)
};

// ScriptStruct Icarus.RepGraphClassPolicy
// Size: 0x70 (Inherited: 0x18)
struct FRepGraphClassPolicy : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Class; // 0x18(0x28)
	struct FString Description; // 0x40(0x10)
	enum class EClassRepPolicy Policy; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FRepGraphClassSettingsRowHandle Settings; // 0x54(0x18)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Icarus.ResourceFlow
// Size: 0x28 (Inherited: 0x18)
struct FResourceFlow : FIcarusTableRowBase {
	struct UTraitComponent* Source; // 0x18(0x08)
	enum class EIcarusResourceType Resource; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float Flow; // 0x24(0x04)
};

// ScriptStruct Icarus.ResourceNodeAudioData
// Size: 0x68 (Inherited: 0x18)
struct FResourceNodeAudioData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> HarvestSound; // 0x18(0x28)
	struct TSoftObjectPtr<UFMODEvent> NodeDepletedSound; // 0x40(0x28)
};

// ScriptStruct Icarus.ResourceNodeAudioDataEnum
// Size: 0x10 (Inherited: 0x10)
struct FResourceNodeAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.ResourceNodeAudioDataRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FResourceNodeAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RigUnit_SphereTraceCustom
// Size: 0x48 (Inherited: 0x08)
struct FRigUnit_SphereTraceCustom : FRigUnit {
	struct FVector Start; // 0x08(0x0c)
	struct FVector End; // 0x14(0x0c)
	enum class ECollisionChannel Channel; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float Radius; // 0x24(0x04)
	bool bHit; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FVector HitLocation; // 0x2c(0x0c)
	struct FVector HitNormal; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Icarus.ItemConversion
// Size: 0x20 (Inherited: 0x00)
struct FItemConversion {
	struct FItemTemplateRowHandle ItemData; // 0x00(0x18)
	struct FName Tag; // 0x18(0x08)
};

// ScriptStruct Icarus.RocketableData
// Size: 0x90 (Inherited: 0x18)
struct FRocketableData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UTexture2D> Image; // 0x18(0x28)
	struct TMap<struct FStatsEnum, int32_t> StatsGranted; // 0x40(0x50)
};

// ScriptStruct Icarus.RocketableEnum
// Size: 0x10 (Inherited: 0x10)
struct FRocketableEnum : FRowEnum {
};

// ScriptStruct Icarus.RocketSpawnStateRecord
// Size: 0x18 (Inherited: 0x00)
struct FRocketSpawnStateRecord {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString AssignedPlayerID; // 0x08(0x10)
};

// ScriptStruct Icarus.RTXGIVolumes
// Size: 0xe0 (Inherited: 0x18)
struct FRTXGIVolumes : FIcarusTableRowBase {
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform BoxTransform; // 0x20(0x30)
	bool EnableVolume; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float UpdatePriority; // 0x54(0x04)
	int32_t LightingPriority; // 0x58(0x04)
	float BlendingDistance; // 0x5c(0x04)
	float BlendingCutoffDistance; // 0x60(0x04)
	bool RuntimeStatic; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct FVector LastOrigin; // 0x68(0x0c)
	enum class EDDGIRaysPerProbe RaysPerProbe; // 0x74(0x04)
	struct FIntVector ProbeCounts; // 0x78(0x0c)
	float ProbeMaxRayDistance; // 0x84(0x04)
	float ProbeHistoryWeight; // 0x88(0x04)
	struct FProbeRelocation ProbeRelocation; // 0x8c(0x0c)
	bool ScrollProbesInfinitely; // 0x98(0x01)
	bool VisualizeProbes; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	struct FIntVector ProbeScrollOffset; // 0x9c(0x0c)
	float probeDistanceExponent; // 0xa8(0x04)
	float probeIrradianceEncodingGamma; // 0xac(0x04)
	float probeChangeThreshold; // 0xb0(0x04)
	float probeBrightnessThreshold; // 0xb4(0x04)
	enum class EDDGISkyLightType SkyLightTypeOnRayMiss; // 0xb8(0x04)
	float ViewBias; // 0xbc(0x04)
	float NormalBias; // 0xc0(0x04)
	float LightMultiplier; // 0xc4(0x04)
	float EmissiveMultiplier; // 0xc8(0x04)
	float IrradianceScalar; // 0xcc(0x04)
	struct FLightingChannels LightingChannels; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)
};

// ScriptStruct Icarus.RTXGIVolumesEnum
// Size: 0x10 (Inherited: 0x10)
struct FRTXGIVolumesEnum : FRowEnum {
};

// ScriptStruct Icarus.RTXGIVolumesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FRTXGIVolumesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RulesetData
// Size: 0x28 (Inherited: 0x18)
struct FRulesetData : FIcarusTableRowBase {
	struct URuleset* RulesetClass; // 0x18(0x08)
	bool bEnabledByDefault; // 0x20(0x01)
	bool bSpawnOnClient; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct Icarus.RulesetsEnum
// Size: 0x10 (Inherited: 0x10)
struct FRulesetsEnum : FRowEnum {
};

// ScriptStruct Icarus.ScriptedEventData
// Size: 0x58 (Inherited: 0x18)
struct FScriptedEventData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> EventClass; // 0x18(0x28)
	struct FText EventName; // 0x40(0x18)
};

// ScriptStruct Icarus.ScriptedEventsEnum
// Size: 0x10 (Inherited: 0x10)
struct FScriptedEventsEnum : FRowEnum {
};

// ScriptStruct Icarus.SessionFlag
// Size: 0x18 (Inherited: 0x18)
struct FSessionFlag : FIcarusTableRowBase {
};

// ScriptStruct Icarus.SessionFlagsEnum
// Size: 0x10 (Inherited: 0x10)
struct FSessionFlagsEnum : FRowEnum {
};

// ScriptStruct Icarus.SessionFlagsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FSessionFlagsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SlotableData
// Size: 0x50 (Inherited: 0x18)
struct FSlotableData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; // 0x18(0x28)
	struct TArray<struct FSocketStringIDQuery> StringIDQueries; // 0x40(0x10)
};

// ScriptStruct Icarus.SocketStringIDQuery
// Size: 0x68 (Inherited: 0x00)
struct FSocketStringIDQuery {
	struct FString SocketStringID; // 0x00(0x10)
	struct FVector SlotVisualizerScale; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TSoftObjectPtr<UStaticMesh> SlotVisualizerMesh; // 0x20(0x28)
	float AmountOfPhysicsTime; // 0x48(0x04)
	struct FTagQueriesRowHandle SlotQuery; // 0x4c(0x18)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct Icarus.SlotWrapper
// Size: 0xe0 (Inherited: 0x00)
struct FSlotWrapper {
	struct FVector SocketWorldLocation; // 0x00(0x0c)
	struct FRotator SocketRotation; // 0x0c(0x0c)
	struct FVector SocketScale; // 0x18(0x0c)
	struct FName SocketName; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct AIcarusItem* HeldItem; // 0x30(0x08)
	int32_t SlotableInventoryLocation; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UStaticMeshComponent* SocketVisualizer; // 0x40(0x08)
	struct TSoftObjectPtr<UStaticMesh> SlotVisualizerMesh; // 0x48(0x28)
	float AmountOfPhysicsTime; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FSocketStringIDQuery Query; // 0x78(0x68)
};

// ScriptStruct Icarus.SlotableEnum
// Size: 0x10 (Inherited: 0x10)
struct FSlotableEnum : FRowEnum {
};

// ScriptStruct Icarus.RecordedSplineActorStruct
// Size: 0x88 (Inherited: 0x00)
struct FRecordedSplineActorStruct {
	struct TMap<int32_t, struct FRecordedSplineIndexStructArray> ConnectionMap; // 0x00(0x50)
	struct TArray<int32_t> StartAtActorIDs; // 0x50(0x10)
	struct TArray<int32_t> EndAtActorIDs; // 0x60(0x10)
	int32_t SplineTypeEnum; // 0x70(0x04)
	int32_t UniqueSplineID; // 0x74(0x04)
	struct TArray<struct FRecordedSplinePoint> SplinePoints; // 0x78(0x10)
};

// ScriptStruct Icarus.RecordedSplinePoint
// Size: 0x40 (Inherited: 0x00)
struct FRecordedSplinePoint {
	struct FVector Location; // 0x00(0x0c)
	bool HasNode; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FTransform NodeTransform; // 0x10(0x30)
};

// ScriptStruct Icarus.RecordedSplineIndexStructArray
// Size: 0x10 (Inherited: 0x00)
struct FRecordedSplineIndexStructArray {
	struct TArray<struct FRecordedSplineIndexStruct> IndexArray; // 0x00(0x10)
};

// ScriptStruct Icarus.RecordedSplineIndexStruct
// Size: 0x08 (Inherited: 0x00)
struct FRecordedSplineIndexStruct {
	int32_t SplineActorID; // 0x00(0x04)
	int32_t SplineIndex; // 0x04(0x04)
};

// ScriptStruct Icarus.StaminaActionCostsEnum
// Size: 0x10 (Inherited: 0x10)
struct FStaminaActionCostsEnum : FRowEnum {
};

// ScriptStruct Icarus.StaminaCost
// Size: 0x38 (Inherited: 0x18)
struct FStaminaCost : FIcarusTableRowBase {
	int32_t BeginActionCost; // 0x18(0x04)
	int32_t EndActionCost; // 0x1c(0x04)
	int32_t PerSecondCost; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FVirtualStatsEnum EffectingStat; // 0x28(0x10)
};

// ScriptStruct Icarus.StatAfflictions
// Size: 0x58 (Inherited: 0x18)
struct FStatAfflictions : FIcarusTableRowBase {
	struct FStatsEnum AfflictionStat; // 0x18(0x10)
	struct FStatsEnum ResistanceStat; // 0x28(0x10)
	int32_t DurationInSeconds; // 0x38(0x04)
	struct FModifierStatesRowHandle Modifier; // 0x3c(0x18)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Icarus.StatAfflictionsEnum
// Size: 0x10 (Inherited: 0x10)
struct FStatAfflictionsEnum : FRowEnum {
};

// ScriptStruct Icarus.StatCategoriesEnum
// Size: 0x10 (Inherited: 0x10)
struct FStatCategoriesEnum : FRowEnum {
};

// ScriptStruct Icarus.StatCategory
// Size: 0x30 (Inherited: 0x18)
struct FStatCategory : FIcarusTableRowBase {
	struct FText Title; // 0x18(0x18)
};

// ScriptStruct Icarus.StatComparison
// Size: 0x18 (Inherited: 0x00)
struct FStatComparison {
	struct FStatsEnum Stat; // 0x00(0x10)
	enum class EComparisonType ComparisonType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t Value; // 0x14(0x04)
};

// ScriptStruct Icarus.StatGameplayTag
// Size: 0x30 (Inherited: 0x18)
struct FStatGameplayTag : FIcarusTableRowBase {
	struct FStatsEnum Stat; // 0x18(0x10)
	struct FGameplayTag GameplayTag; // 0x28(0x08)
};

// ScriptStruct Icarus.StatGameplayTagsEnum
// Size: 0x10 (Inherited: 0x10)
struct FStatGameplayTagsEnum : FRowEnum {
};

// ScriptStruct Icarus.StatGameplayTagsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FStatGameplayTagsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.Statistic
// Size: 0x30 (Inherited: 0x18)
struct FStatistic : FIcarusTableRowBase {
	struct FText DisplayName; // 0x18(0x18)
};

// ScriptStruct Icarus.StatisticsEnum
// Size: 0x10 (Inherited: 0x10)
struct FStatisticsEnum : FRowEnum {
};

// ScriptStruct Icarus.StatisticsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FStatisticsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PlayerStatistics
// Size: 0x50 (Inherited: 0x00)
struct FPlayerStatistics {
	struct TMap<struct FStatisticsRowHandle, int32_t> StatisticsMap; // 0x00(0x50)
};

// ScriptStruct Icarus.StatCollection
// Size: 0x10 (Inherited: 0x00)
struct FStatCollection {
	struct TArray<struct FIcarusStatReplicated> Stats; // 0x00(0x10)
};

// ScriptStruct Icarus.BarSegment
// Size: 0x30 (Inherited: 0x00)
struct FBarSegment {
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x00(0x28)
	int32_t SegmentSize; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Icarus.StomachContent
// Size: 0x1c (Inherited: 0x00)
struct FStomachContent {
	struct FItemsStaticRowHandle Food; // 0x00(0x18)
	int32_t ModifierID; // 0x18(0x04)
};

// ScriptStruct Icarus.SurfacesData
// Size: 0xa0 (Inherited: 0x18)
struct FSurfacesData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UPhysicalMaterial> PhysicalMaterial; // 0x18(0x28)
	enum class EPhysicalSurface SurfaceType; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TSoftObjectPtr<UParticleSystem> ParticleSystem; // 0x48(0x28)
	struct UNiagaraSystem* NiagaraSystem; // 0x70(0x08)
	struct FPlayerFootstepAudioDataRowHandle PlayerFootstepAudioData; // 0x78(0x18)
	enum class ESurfaceFMODParam FMODParam; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float AudioReflectionMultiplier; // 0x94(0x04)
	float AIPerceptionVolumeMultiplier; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct Icarus.SurfacesEnum
// Size: 0x10 (Inherited: 0x10)
struct FSurfacesEnum : FRowEnum {
};

// ScriptStruct Icarus.SurfacesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FSurfacesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SurvivalTriggers
// Size: 0xc0 (Inherited: 0x18)
struct FSurvivalTriggers : FIcarusTableRowBase {
	struct TArray<struct FModifierTrigger> Food; // 0x18(0x10)
	struct TArray<struct FModifierTrigger> Water; // 0x28(0x10)
	struct TArray<struct FModifierTrigger> Oxygen; // 0x38(0x10)
	struct FTemperatureTrigger Cold; // 0x48(0x30)
	struct FTemperatureTrigger Heat; // 0x78(0x30)
	struct FModifierStatesRowHandle Weight; // 0xa8(0x18)
};

// ScriptStruct Icarus.TemperatureTrigger
// Size: 0x30 (Inherited: 0x00)
struct FTemperatureTrigger {
	struct FModifierStatesRowHandle Modifier; // 0x00(0x18)
	struct FTagQueriesRowHandle Query; // 0x18(0x18)
};

// ScriptStruct Icarus.ModifierTrigger
// Size: 0x1c (Inherited: 0x00)
struct FModifierTrigger {
	struct FModifierStatesRowHandle Modifier; // 0x00(0x18)
	float PercentTrigger; // 0x18(0x04)
};

// ScriptStruct Icarus.SurvivalTriggersEnum
// Size: 0x10 (Inherited: 0x10)
struct FSurvivalTriggersEnum : FRowEnum {
};

// ScriptStruct Icarus.TagQueries
// Size: 0x60 (Inherited: 0x18)
struct FTagQueries : FIcarusTableRowBase {
	struct FGameplayTagQuery Query; // 0x18(0x48)
};

// ScriptStruct Icarus.TagQueriesEnum
// Size: 0x10 (Inherited: 0x10)
struct FTagQueriesEnum : FRowEnum {
};

// ScriptStruct Icarus.Talent
// Size: 0x130 (Inherited: 0x18)
struct FTalent : FIcarusTableRowBase {
	bool bIsReroute; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FText DisplayName; // 0x20(0x18)
	struct FText Description; // 0x38(0x18)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x50(0x28)
	struct FRowHandle ExtraData; // 0x78(0x18)
	struct FTalentTreesRowHandle TalentTree; // 0x90(0x18)
	struct FVector2D position; // 0xa8(0x08)
	struct FVector2D Size; // 0xb0(0x08)
	struct TArray<struct FTalentReward> Rewards; // 0xb8(0x10)
	struct TArray<struct FTalentsRowHandle> RequiredTalents; // 0xc8(0x10)
	struct TArray<struct FFlagsMultiRowHandle> RequiredFlags; // 0xd8(0x10)
	struct TArray<struct FFlagsMultiRowHandle> ForbiddenFlags; // 0xe8(0x10)
	struct FTalentRanksRowHandle RequiredRank; // 0xf8(0x18)
	int32_t RequiredLevel; // 0x110(0x04)
	bool bDefaultUnlocked; // 0x114(0x01)
	enum class ELineDrawMethod DrawMethodOverride; // 0x115(0x01)
	char pad_116[0x1a]; // 0x116(0x1a)
};

// ScriptStruct Icarus.TalentRanksRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FTalentRanksRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TalentReward
// Size: 0x60 (Inherited: 0x00)
struct FTalentReward {
	struct TMap<struct FBaseStatsEnum, int32_t> GrantedStats; // 0x00(0x50)
	struct TArray<struct FCharacterFlagsRowHandle> GrantedFlags; // 0x50(0x10)
};

// ScriptStruct Icarus.TalentTreesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FTalentTreesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TalentArchetype
// Size: 0xa0 (Inherited: 0x18)
struct FTalentArchetype : FIcarusTableRowBase {
	struct FTalentModelsRowHandle Model; // 0x18(0x18)
	struct FText DisplayName; // 0x30(0x18)
	struct TSoftObjectPtr<UTexture2D> BackgroundTexture; // 0x48(0x28)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x70(0x28)
	int32_t RequiredLevel; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct Icarus.TalentModelsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FTalentModelsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TalentArchetypesEnum
// Size: 0x10 (Inherited: 0x10)
struct FTalentArchetypesEnum : FRowEnum {
};

// ScriptStruct Icarus.TalentArchetypesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FTalentArchetypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TalentModel
// Size: 0x40 (Inherited: 0x18)
struct FTalentModel : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> ModelClass; // 0x18(0x28)
};

// ScriptStruct Icarus.TalentModelsEnum
// Size: 0x10 (Inherited: 0x10)
struct FTalentModelsEnum : FRowEnum {
};

// ScriptStruct Icarus.TalentModelView
// Size: 0x48 (Inherited: 0x18)
struct FTalentModelView : FIcarusTableRowBase {
	struct FTalentViewsRowHandle ViewData; // 0x18(0x18)
	struct FTalentModelsRowHandle ModelData; // 0x30(0x18)
};

// ScriptStruct Icarus.TalentViewsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FTalentViewsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TalentModelViewsEnum
// Size: 0x10 (Inherited: 0x10)
struct FTalentModelViewsEnum : FRowEnum {
};

// ScriptStruct Icarus.TalentModelViewsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FTalentModelViewsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TalentRank
// Size: 0x78 (Inherited: 0x18)
struct FTalentRank : FIcarusTableRowBase {
	struct FText DisplayName; // 0x18(0x18)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x30(0x28)
	int32_t Investment; // 0x58(0x04)
	struct FTalentRanksRowHandle NextRank; // 0x5c(0x18)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Icarus.TalentRanksEnum
// Size: 0x10 (Inherited: 0x10)
struct FTalentRanksEnum : FRowEnum {
};

// ScriptStruct Icarus.TalentsEnum
// Size: 0x10 (Inherited: 0x10)
struct FTalentsEnum : FRowEnum {
};

// ScriptStruct Icarus.TalentTree
// Size: 0xb8 (Inherited: 0x18)
struct FTalentTree : FIcarusTableRowBase {
	struct FText DisplayName; // 0x18(0x18)
	struct TSoftObjectPtr<UTexture2D> BackgroundTexture; // 0x30(0x28)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x58(0x28)
	struct FTalentArchetypesRowHandle Archetype; // 0x80(0x18)
	struct FTalentRanksRowHandle FirstRank; // 0x98(0x18)
	int32_t RequiredLevel; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct Icarus.TalentTreesEnum
// Size: 0x10 (Inherited: 0x10)
struct FTalentTreesEnum : FRowEnum {
};

// ScriptStruct Icarus.TalentView
// Size: 0x1b88 (Inherited: 0x18)
struct FTalentView : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> ViewClass; // 0x18(0x28)
	struct TSoftClassPtr<UObject> TalentClass; // 0x40(0x28)
	struct FSlateBrush PanningBrush; // 0x68(0x88)
	enum class EPanningDirection PanningDirection; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FVector2D InitialPosition; // 0xf4(0x08)
	int32_t OverscrollAmount; // 0xfc(0x04)
	struct FMargin TreePadding; // 0x100(0x10)
	struct TArray<float> ZoomLevels; // 0x110(0x10)
	int32_t InitialZoomLevel; // 0x120(0x04)
	enum class ELineDrawMethod LineMethod; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	float LineThickness; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct FScrollBarStyle ScrollBarStyle; // 0x130(0x4d0)
	struct FVector2D ScrollBarThickness; // 0x600(0x08)
	struct FTalentHoverConfig Locked; // 0x608(0x560)
	struct FTalentHoverConfig Available; // 0xb68(0x560)
	struct FTalentHoverConfig Unlocked; // 0x10c8(0x560)
	struct FTalentHoverConfig Completed; // 0x1628(0x560)
};

// ScriptStruct Icarus.TalentHoverConfig
// Size: 0x560 (Inherited: 0x00)
struct FTalentHoverConfig {
	struct FSlateColor NormalTextColor; // 0x00(0x28)
	struct FSlateColor HoveredTextColor; // 0x28(0x28)
	struct FSlateColor PressedTextColor; // 0x50(0x28)
	struct FSlateColor DisabledTextColor; // 0x78(0x28)
	struct FSlateColor NormalIconColor; // 0xa0(0x28)
	struct FSlateColor HoveredIconColor; // 0xc8(0x28)
	struct FSlateColor PressedIconColor; // 0xf0(0x28)
	struct FSlateColor DisabledIconColor; // 0x118(0x28)
	struct FButtonStyle ButtonStyle; // 0x140(0x278)
	struct FLinearColor LineColor; // 0x3b8(0x10)
	struct FSlateBrush NormalCountBrush; // 0x3c8(0x88)
	struct FSlateBrush HoveredCountBrush; // 0x450(0x88)
	struct FSlateBrush PressedCountBrush; // 0x4d8(0x88)
};

// ScriptStruct Icarus.TalentViewsEnum
// Size: 0x10 (Inherited: 0x10)
struct FTalentViewsEnum : FRowEnum {
};

// ScriptStruct Icarus.TechTreeReference
// Size: 0x10 (Inherited: 0x00)
struct FTechTreeReference {
	struct UPanelWidget* Panel; // 0x00(0x08)
	struct FName WidgetName; // 0x08(0x08)
};

// ScriptStruct Icarus.TerrainsEnum
// Size: 0x10 (Inherited: 0x10)
struct FTerrainsEnum : FRowEnum {
};

// ScriptStruct Icarus.ThermalData
// Size: 0x60 (Inherited: 0x18)
struct FThermalData : FIcarusTableRowBase {
	int32_t InnerRadius; // 0x18(0x04)
	int32_t OuterRadius; // 0x1c(0x04)
	float EffectFalloff; // 0x20(0x04)
	int32_t TemperatureChange; // 0x24(0x04)
	bool bCanBeObstructed; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FVector OcclusionTraceOffset; // 0x2c(0x0c)
	struct FVector EffectOriginOffset; // 0x38(0x0c)
	bool bStartsEnabled; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct UNavAreaBase* FireNavigationModifierClass; // 0x48(0x08)
	float FireNavigationModifierRadius; // 0x50(0x04)
	char pad_54[0xc]; // 0x54(0x0c)
};

// ScriptStruct Icarus.ThermalEnum
// Size: 0x10 (Inherited: 0x10)
struct FThermalEnum : FRowEnum {
};

// ScriptStruct Icarus.ThreatAudioResult
// Size: 0x08 (Inherited: 0x00)
struct FThreatAudioResult {
	int32_t ThreatLevel; // 0x00(0x04)
	enum class EMusicConditionCombatState MusicConditionOverride; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Icarus.TimelineRanks
// Size: 0x70 (Inherited: 0x18)
struct FTimelineRanks : FIcarusTableRowBase {
	struct FText TitleText; // 0x18(0x18)
	struct FText ToolTipText; // 0x30(0x18)
	struct TSoftObjectPtr<UTexture2D> Image; // 0x48(0x28)
};

// ScriptStruct Icarus.TimelineRanksEnum
// Size: 0x10 (Inherited: 0x10)
struct FTimelineRanksEnum : FRowEnum {
};

// ScriptStruct Icarus.TimeOfDay
// Size: 0x20 (Inherited: 0x18)
struct FTimeOfDay : FIcarusTableRowBase {
	int32_t StartingHour; // 0x18(0x04)
	int32_t EndingHour; // 0x1c(0x04)
};

// ScriptStruct Icarus.TimeOfDayEnum
// Size: 0x10 (Inherited: 0x10)
struct FTimeOfDayEnum : FRowEnum {
};

// ScriptStruct Icarus.TimeOfDayRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FTimeOfDayRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ToolDamage
// Size: 0x38 (Inherited: 0x18)
struct FToolDamage : FIcarusTableRowBase {
	int32_t Melee_Damage; // 0x18(0x04)
	int32_t DamageVariationPercentage; // 0x1c(0x04)
	int32_t Felling_Damage; // 0x20(0x04)
	float Felling_Efficiency; // 0x24(0x04)
	int32_t Mining_Radius; // 0x28(0x04)
	float Mining_Efficiency; // 0x2c(0x04)
	float Skinning_Efficiency; // 0x30(0x04)
	float Reaping_Efficiency; // 0x34(0x04)
};

// ScriptStruct Icarus.ToolDamageEnum
// Size: 0x10 (Inherited: 0x10)
struct FToolDamageEnum : FRowEnum {
};

// ScriptStruct Icarus.ToolTypesEnum
// Size: 0x10 (Inherited: 0x10)
struct FToolTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.ToolTypesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FToolTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TransmutableData
// Size: 0x50 (Inherited: 0x18)
struct FTransmutableData : FIcarusTableRowBase {
	int32_t UnitsProvided; // 0x18(0x04)
	struct FItemTemplateRowHandle ByProductItem; // 0x1c(0x18)
	char pad_34[0x4]; // 0x34(0x04)
	struct FText DescriptionText; // 0x38(0x18)
};

// ScriptStruct Icarus.TransmutableEnum
// Size: 0x10 (Inherited: 0x10)
struct FTransmutableEnum : FRowEnum {
};

// ScriptStruct Icarus.TreeAudioData
// Size: 0x1a8 (Inherited: 0x18)
struct FTreeAudioData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> DetachTrunkSound; // 0x18(0x28)
	struct TSoftObjectPtr<UFMODEvent> DetachBranchSound; // 0x40(0x28)
	struct TSoftObjectPtr<UFMODEvent> DetachLeafSound; // 0x68(0x28)
	struct TSoftObjectPtr<UFMODEvent> InitialBreakTopSound; // 0x90(0x28)
	struct TSoftObjectPtr<UFMODEvent> InitialBreakTrunkSound; // 0xb8(0x28)
	struct TSoftObjectPtr<UFMODEvent> FallSound; // 0xe0(0x28)
	struct TSoftObjectPtr<UFMODEvent> TrunkLandSound; // 0x108(0x28)
	struct TSoftObjectPtr<UFMODEvent> HitSound; // 0x130(0x28)
	struct TSoftObjectPtr<UFMODEvent> HitBuildingSound; // 0x158(0x28)
	struct TSoftObjectPtr<UFMODEvent> InstantFellSound; // 0x180(0x28)
};

// ScriptStruct Icarus.TreeAudioDataEnum
// Size: 0x10 (Inherited: 0x10)
struct FTreeAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.TreeAudioDataRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FTreeAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TreeRuntimeConstructArguments
// Size: 0x38 (Inherited: 0x00)
struct FTreeRuntimeConstructArguments {
	struct ATreePrefab* TreePrefabClass; // 0x00(0x08)
	struct FName RootName; // 0x08(0x08)
	struct TArray<int32_t> TreePrimitivesMask; // 0x10(0x10)
	bool bIsPhysicsDynamic; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UStaticMesh* ProxyMesh; // 0x28(0x08)
	struct ATreeBase* InstigatorTree; // 0x30(0x08)
};

// ScriptStruct Icarus.TreeRuntimeCreateArguments
// Size: 0x80 (Inherited: 0x00)
struct FTreeRuntimeCreateArguments {
	struct AActor* Owner; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FTreeRuntimeConstructArguments ConstructArgs; // 0x40(0x38)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct Icarus.TreePrimitivePersistentData
// Size: 0x04 (Inherited: 0x00)
struct FTreePrimitivePersistentData {
	float AccumulatedDamage; // 0x00(0x04)
};

// ScriptStruct Icarus.TreePrimitiveReplacementDescription
// Size: 0x1c (Inherited: 0x00)
struct FTreePrimitiveReplacementDescription {
	enum class ETreePrimitiveDetachContext DetachContext; // 0x00(0x01)
	enum class ETreePrimitiveItemReplaceMethod ReplaceMethod; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FItemRewardsRowHandle ReplaceRewardsRowHandle; // 0x04(0x18)
};

// ScriptStruct Icarus.TreePrimitiveDetachContext
// Size: 0x18 (Inherited: 0x00)
struct FTreePrimitiveDetachContext {
	enum class ETreePrimitiveDetachContext DetachContext; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AActor* CollisionActor; // 0x08(0x08)
	struct AIcarusPlayerCharacter* ActionPlayer; // 0x10(0x08)
};

// ScriptStruct Icarus.Uses
// Size: 0x48 (Inherited: 0x18)
struct FUses : FIcarusTableRowBase {
	struct FName DescriptionText; // 0x18(0x08)
	struct TSoftObjectPtr<UTexture2D> Image; // 0x20(0x28)
};

// ScriptStruct Icarus.UsableData
// Size: 0x30 (Inherited: 0x18)
struct FUsableData : FIcarusTableRowBase {
	struct TArray<struct FUseCondition> Uses; // 0x18(0x10)
	bool bAlwaysShowContextMenu; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Icarus.UseCondition
// Size: 0x50 (Inherited: 0x00)
struct FUseCondition {
	struct FUsesRowHandle Use; // 0x00(0x18)
	struct FGameplayTagContainer RequiredTags; // 0x18(0x20)
	struct TArray<struct FStatComparison> RequiredStats; // 0x38(0x10)
	bool bMustOwnInventory; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Icarus.UsesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FUsesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.UsableEnum
// Size: 0x10 (Inherited: 0x10)
struct FUsableEnum : FRowEnum {
};

// ScriptStruct Icarus.PerInputUserBindings
// Size: 0x80 (Inherited: 0x00)
struct FPerInputUserBindings {
	struct FUserBindings Controller; // 0x00(0x40)
	struct FUserBindings Keyboard; // 0x40(0x40)
};

// ScriptStruct Icarus.UserBindings
// Size: 0x40 (Inherited: 0x00)
struct FUserBindings {
	struct TArray<struct FInputActionKeyMapping> UserActionMappings; // 0x00(0x10)
	struct TArray<struct FInputAxisKeyMapping> UserAxisMappings; // 0x10(0x10)
	char pad_20[0x20]; // 0x20(0x20)
};

// ScriptStruct Icarus.UsesEnum
// Size: 0x10 (Inherited: 0x10)
struct FUsesEnum : FRowEnum {
};

// ScriptStruct Icarus.ValidHitQueriesEnum
// Size: 0x10 (Inherited: 0x10)
struct FValidHitQueriesEnum : FRowEnum {
};

// ScriptStruct Icarus.ValidHitQueriesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FValidHitQueriesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ValidHitQuery
// Size: 0x60 (Inherited: 0x18)
struct FValidHitQuery : FIcarusTableRowBase {
	struct FTagQueriesRowHandle HitSource; // 0x18(0x18)
	struct FTagQueriesRowHandle HitTarget; // 0x30(0x18)
	struct FValidHitTypesRowHandle HitSuccessType; // 0x48(0x18)
};

// ScriptStruct Icarus.ValidHitType
// Size: 0x18 (Inherited: 0x18)
struct FValidHitType : FIcarusTableRowBase {
};

// ScriptStruct Icarus.ValidHitTypesEnum
// Size: 0x10 (Inherited: 0x10)
struct FValidHitTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.ValidInteractQueriesEnum
// Size: 0x10 (Inherited: 0x10)
struct FValidInteractQueriesEnum : FRowEnum {
};

// ScriptStruct Icarus.ValidInteractQueriesRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FValidInteractQueriesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ValidInteractQuery
// Size: 0x70 (Inherited: 0x18)
struct FValidInteractQuery : FIcarusTableRowBase {
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x18(0x28)
	struct FTagQueriesRowHandle Source; // 0x40(0x18)
	struct FTagQueriesRowHandle Target; // 0x58(0x18)
};

// ScriptStruct Icarus.VehicleConstraintAttachment
// Size: 0x18 (Inherited: 0x00)
struct FVehicleConstraintAttachment {
	struct UPrimitiveComponent* AttachParent; // 0x00(0x08)
	struct UPrimitiveComponent* AttachChild; // 0x08(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x10(0x08)
};

// ScriptStruct Icarus.VehicleDebugSwapComponent
// Size: 0x20 (Inherited: 0x00)
struct FVehicleDebugSwapComponent {
	enum class EVehicleComponentType ComponentSwapFromType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ComponentSwapFromIndex; // 0x04(0x04)
	struct FItemTemplateRowHandle ComponentSwapToItem; // 0x08(0x18)
};

// ScriptStruct Icarus.VehicleSeatSetupData
// Size: 0x10 (Inherited: 0x00)
struct FVehicleSeatSetupData {
	struct FName AttachSocketName; // 0x00(0x08)
	struct ASeatBase* SeatClass; // 0x08(0x08)
};

// ScriptStruct Icarus.VehicleMovementModel
// Size: 0x380 (Inherited: 0x00)
struct FVehicleMovementModel {
	struct FVehicleSetupData VehicleSetupData; // 0x00(0x270)
	struct FVehicleEngineData EngineData; // 0x270(0xa0)
	struct FVehicleTransmissionData TransmissionData; // 0x310(0x30)
	struct FVehicleDifferential4WData DifferentialData; // 0x340(0x1c)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct TArray<struct FVehicleWheelSetupData> WheelsData; // 0x360(0x10)
	struct TArray<struct FWheelSetup> LocalWheelSetups; // 0x370(0x10)
};

// ScriptStruct Icarus.VehicleWheelSetupData
// Size: 0x68 (Inherited: 0x00)
struct FVehicleWheelSetupData {
	struct FName SocketName; // 0x00(0x08)
	struct FVector Offset; // 0x08(0x0c)
	float MaxSteerAngle; // 0x14(0x04)
	bool bAffectedByHandbrake; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float SuspensionForceOffset; // 0x1c(0x04)
	float SuspensionMaxRaise; // 0x20(0x04)
	float SuspensionMaxDrop; // 0x24(0x04)
	struct FVehicleWheelData WheelData; // 0x28(0x20)
	struct FVehicleTireData TireData; // 0x48(0x18)
	struct FVehicleSuspensionData SuspensionData; // 0x60(0x08)
};

// ScriptStruct Icarus.VehicleSuspensionData
// Size: 0x08 (Inherited: 0x00)
struct FVehicleSuspensionData {
	float SuspensionNaturalFrequency; // 0x00(0x04)
	float SuspensionDampingRatio; // 0x04(0x04)
};

// ScriptStruct Icarus.VehicleTireData
// Size: 0x18 (Inherited: 0x00)
struct FVehicleTireData {
	struct UTireConfig* TireConfig; // 0x00(0x08)
	float TireThickness; // 0x08(0x04)
	float LatStiffMaxLoad; // 0x0c(0x04)
	float LatStiffValue; // 0x10(0x04)
	float LongStiffValue; // 0x14(0x04)
};

// ScriptStruct Icarus.VehicleWheelData
// Size: 0x20 (Inherited: 0x00)
struct FVehicleWheelData {
	float ShapeRadius; // 0x00(0x04)
	float ShapeWidth; // 0x04(0x04)
	float Mass; // 0x08(0x04)
	float MOIRatio; // 0x0c(0x04)
	float DampingRate; // 0x10(0x04)
	float SteerAngle; // 0x14(0x04)
	float MaxBrakeTorque; // 0x18(0x04)
	float MaxHandBrakeTorque; // 0x1c(0x04)
};

// ScriptStruct Icarus.VehicleSetupData
// Size: 0x270 (Inherited: 0x00)
struct FVehicleSetupData {
	float Mass; // 0x00(0x04)
	char bReverseAsBrake : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float DragCoefficient; // 0x08(0x04)
	float ChassisWidth; // 0x0c(0x04)
	float ChassisHeight; // 0x10(0x04)
	struct FVector InertiaTensorScale; // 0x14(0x0c)
	float MinNormalizedTireLoad; // 0x20(0x04)
	float MinNormalizedTireLoadFiltered; // 0x24(0x04)
	float MaxNormalizedTireLoad; // 0x28(0x04)
	float MaxNormalizedTireLoadFiltered; // 0x2c(0x04)
	float ThresholdLongitudinalSpeed; // 0x30(0x04)
	int32_t LowForwardSpeedSubStepCount; // 0x34(0x04)
	int32_t HighForwardSpeedSubStepCount; // 0x38(0x04)
	float IdleBrakeInput; // 0x3c(0x04)
	float StopThreshold; // 0x40(0x04)
	float WrongDirectionThreshold; // 0x44(0x04)
	struct FVehicleInputRate ThrottleInputRate; // 0x48(0x08)
	struct FVehicleInputRate BrakeInputRate; // 0x50(0x08)
	struct FVehicleInputRate HandbrakeInputRate; // 0x58(0x08)
	struct FVehicleInputRate SteeringInputRate; // 0x60(0x08)
	float AckermannAccuracy; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FRuntimeFloatCurve SteeringCurve; // 0x70(0x88)
	struct FBodyInstance WheelCollision; // 0xf8(0x158)
	enum class EWheelSweepType WheelSweepType; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct TArray<struct FVehicleWheelSetupData> WheelSetupData; // 0x258(0x10)
	struct UTireConfig* NoTireConfig; // 0x268(0x08)
};

// ScriptStruct Icarus.VehicleSetup
// Size: 0x2f8 (Inherited: 0x18)
struct FVehicleSetup : FIcarusTableRowBase {
	struct FVehicleSetupData VehicleSetupData; // 0x18(0x270)
	struct TArray<struct FVehicleComponentSlot> Engines; // 0x288(0x10)
	struct TArray<struct FVehicleComponentSlot> Gearboxes; // 0x298(0x10)
	struct TArray<struct FVehicleComponentSlot> Drivetrains; // 0x2a8(0x10)
	struct TArray<struct FVehicleComponentSlot> Fueltanks; // 0x2b8(0x10)
	struct TArray<struct FVehicleComponentSlot> Wheels; // 0x2c8(0x10)
	struct TArray<struct FVehicleComponentSlot> Suspensions; // 0x2d8(0x10)
	struct TArray<struct FVehicleComponentSlot> Tires; // 0x2e8(0x10)
};

// ScriptStruct Icarus.VehicleComponentSlot
// Size: 0x60 (Inherited: 0x00)
struct FVehicleComponentSlot {
	enum class EVehicleComponentType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t TypeIndex; // 0x04(0x04)
	struct FName SocketName; // 0x08(0x08)
	struct FTransform SocketOffset; // 0x10(0x30)
	struct FItemTemplateRowHandle DefaultItem; // 0x40(0x18)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct Icarus.VehicleSetupsEnum
// Size: 0x10 (Inherited: 0x10)
struct FVehicleSetupsEnum : FRowEnum {
};

// ScriptStruct Icarus.VehicleSetupsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FVehicleSetupsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.VehicularData
// Size: 0x1a0 (Inherited: 0x18)
struct FVehicularData : FIcarusTableRowBase {
	enum class EVehicleComponentType ComponentType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TSoftClassPtr<UObject> Behaviour; // 0x20(0x28)
	float Durability; // 0x48(0x04)
	struct FName CollisionProfile; // 0x4c(0x08)
	char pad_54[0x4]; // 0x54(0x04)
	struct FVehicleEngineData EngineData; // 0x58(0xa0)
	struct FVehicleTransmissionData TransmissionData; // 0xf8(0x30)
	struct FVehicleDifferential4WData DifferentialData; // 0x128(0x1c)
	struct FItemsStaticRowHandle FuelItem; // 0x144(0x18)
	float FuelCapacity; // 0x15c(0x04)
	struct FVehicleWheelData WheelData; // 0x160(0x20)
	struct FVehicleSuspensionData SuspensionData; // 0x180(0x08)
	struct FVehicleTireData TireData; // 0x188(0x18)
};

// ScriptStruct Icarus.VehicularEnum
// Size: 0x10 (Inherited: 0x10)
struct FVehicularEnum : FRowEnum {
};

// ScriptStruct Icarus.IcarusBackendVersion
// Size: 0x0c (Inherited: 0x00)
struct FIcarusBackendVersion {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Icarus.IcarusGameVersion
// Size: 0x30 (Inherited: 0x00)
struct FIcarusGameVersion {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Icarus.ViewTraceRegistration
// Size: 0x04 (Inherited: 0x00)
struct FViewTraceRegistration {
	float MaxDistance; // 0x00(0x04)
};

// ScriptStruct Icarus.ViewTraceParams
// Size: 0x30 (Inherited: 0x00)
struct FViewTraceParams {
	struct TArray<struct AActor*> IgnoredActors; // 0x00(0x10)
	struct TArray<struct UPrimitiveComponent*> IgnoredComponents; // 0x10(0x10)
	bool bTraceComplex; // 0x20(0x01)
	bool bReturnPhysicalMaterial; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	float TraceDistance; // 0x24(0x04)
	struct FName DebugTraceFlag; // 0x28(0x08)
};

// ScriptStruct Icarus.VocalisationData
// Size: 0x58 (Inherited: 0x18)
struct FVocalisationData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> Sound; // 0x18(0x28)
	struct FVocalisationSettingsRowHandle Setting; // 0x40(0x18)
};

// ScriptStruct Icarus.VocalisationSettingsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FVocalisationSettingsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.VocalisationsEnum
// Size: 0x10 (Inherited: 0x10)
struct FVocalisationsEnum : FRowEnum {
};

// ScriptStruct Icarus.VocalisationSetting
// Size: 0x28 (Inherited: 0x18)
struct FVocalisationSetting : FIcarusTableRowBase {
	enum class EVocalisationInterruptType InterruptType; // 0x18(0x01)
	bool bCanInterruptSelf; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float QueueTimeoutLength; // 0x1c(0x04)
	enum class EVocalisationPriority Priority; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Icarus.VocalisationSettingsEnum
// Size: 0x10 (Inherited: 0x10)
struct FVocalisationSettingsEnum : FRowEnum {
};

// ScriptStruct Icarus.VoxelDistributionRegion
// Size: 0x80 (Inherited: 0x18)
struct FVoxelDistributionRegion : FIcarusTableRowBase {
	struct TMap<struct FVoxelSetupDataRowHandle, int32_t> VoxelDistribution; // 0x18(0x50)
	struct FLinearColor VoxelColor; // 0x68(0x10)
	float Brightness; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Icarus.VoxelSetupDataRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FVoxelSetupDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.VoxelDistributionRegionEnum
// Size: 0x10 (Inherited: 0x10)
struct FVoxelDistributionRegionEnum : FRowEnum {
};

// ScriptStruct Icarus.VoxelDistributionRegionRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FVoxelDistributionRegionRowHandle : FRowHandle {
};

// ScriptStruct Icarus.VoxelMaterialMap
// Size: 0x90 (Inherited: 0x18)
struct FVoxelMaterialMap : FIcarusTableRowBase {
	struct TSoftObjectPtr<UStaticMesh> Mesh; // 0x18(0x28)
	struct TMap<enum class EVoxelResourceCategory, struct TSoftObjectPtr<UMaterialInterface>> Materials; // 0x40(0x50)
};

// ScriptStruct Icarus.VoxelMaterialMapEnum
// Size: 0x10 (Inherited: 0x10)
struct FVoxelMaterialMapEnum : FRowEnum {
};

// ScriptStruct Icarus.VoxelMaterialMapRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FVoxelMaterialMapRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MinedSphere
// Size: 0x14 (Inherited: 0x00)
struct FMinedSphere {
	struct FVector Center; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	char pad_10[0x4]; // 0x10(0x04)
};

// ScriptStruct Icarus.VoxelSetupData
// Size: 0xa8 (Inherited: 0x18)
struct FVoxelSetupData : FIcarusTableRowBase {
	enum class EVoxelResourceCategory ResourceCategory; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FItemTemplateRowHandle ResourceType; // 0x1c(0x18)
	struct FItemTemplateRowHandle SecondaryResourceType; // 0x34(0x18)
	float DensityMultiplier; // 0x4c(0x04)
	struct TSoftObjectPtr<UFMODEvent> FullyMinedSound; // 0x50(0x28)
	struct FExperienceEventsRowHandle ExperienceForMining; // 0x78(0x18)
	struct FStatsEnum RewardStat; // 0x90(0x10)
	struct FGameplayTag VoxelTag; // 0xa0(0x08)
};

// ScriptStruct Icarus.VoxelSetupDataEnum
// Size: 0x10 (Inherited: 0x10)
struct FVoxelSetupDataEnum : FRowEnum {
};

// ScriptStruct Icarus.VoxelCorner
// Size: 0x30 (Inherited: 0x00)
struct FVoxelCorner {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Icarus.VoxelSaveData
// Size: 0x30 (Inherited: 0x00)
struct FVoxelSaveData {
	struct TArray<struct FVoxelMinedSphere> MinedSpheres; // 0x00(0x10)
	bool bIsVoxelFullyMined; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t TotalUnminedVoxels; // 0x14(0x04)
	int32_t CurrentUnminedVoxels; // 0x18(0x04)
	int32_t NumResourcesGranted; // 0x1c(0x04)
	struct FVector VoxelActorLocation; // 0x20(0x0c)
	float TotalResourceCount; // 0x2c(0x04)
};

// ScriptStruct Icarus.VoxelMinedSphere
// Size: 0x10 (Inherited: 0x00)
struct FVoxelMinedSphere {
	struct FVector Location; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
};

// ScriptStruct Icarus.WaterPoint
// Size: 0x10 (Inherited: 0x00)
struct FWaterPoint {
	struct FIntVector Top; // 0x00(0x0c)
	int32_t Bottom; // 0x0c(0x04)
};

// ScriptStruct Icarus.WaterSetup
// Size: 0x88 (Inherited: 0x18)
struct FWaterSetup : FIcarusTableRowBase {
	struct TSoftObjectPtr<UMaterialInterface> Material; // 0x18(0x28)
	struct TArray<struct FFishSetupRowHandle> Fish; // 0x40(0x10)
	float FishDensity; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TSoftObjectPtr<UFMODEvent> Sound; // 0x58(0x28)
	bool IsInCave; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct Icarus.WaterData
// Size: 0x20 (Inherited: 0x20)
struct FWaterData : FResourceNetworkData {
};

// ScriptStruct Icarus.WaterEnum
// Size: 0x10 (Inherited: 0x10)
struct FWaterEnum : FRowEnum {
};

// ScriptStruct Icarus.WaterSetupEnum
// Size: 0x10 (Inherited: 0x10)
struct FWaterSetupEnum : FRowEnum {
};

// ScriptStruct Icarus.WeatherActionsEnum
// Size: 0x10 (Inherited: 0x10)
struct FWeatherActionsEnum : FRowEnum {
};

// ScriptStruct Icarus.WeatherBiomeGroupsEnum
// Size: 0x10 (Inherited: 0x10)
struct FWeatherBiomeGroupsEnum : FRowEnum {
};

// ScriptStruct Icarus.ActiveWeatherInfo
// Size: 0x48 (Inherited: 0x00)
struct FActiveWeatherInfo {
	struct FWeatherEventsRowHandle WeatherEvent; // 0x00(0x18)
	struct FBiomesRowHandle Biome; // 0x18(0x18)
	struct TArray<struct UIcarusWeatherAction*> Actions; // 0x30(0x10)
	int32_t StartTime; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Icarus.ActorCollection
// Size: 0x10 (Inherited: 0x00)
struct FActorCollection {
	struct TArray<struct AIcarusActor*> Actors; // 0x00(0x10)
};

// ScriptStruct Icarus.RecordedWeatherEvent
// Size: 0x14 (Inherited: 0x00)
struct FRecordedWeatherEvent {
	struct FName WeatherRowName; // 0x00(0x08)
	struct FName BiomeRowName; // 0x08(0x08)
	int32_t TimeElapsed; // 0x10(0x04)
};

// ScriptStruct Icarus.WeatherEventsEnum
// Size: 0x10 (Inherited: 0x10)
struct FWeatherEventsEnum : FRowEnum {
};

// ScriptStruct Icarus.WeatherVisualData
// Size: 0x30 (Inherited: 0x00)
struct FWeatherVisualData {
	float Rain; // 0x00(0x04)
	float Sand; // 0x04(0x04)
	float Snow; // 0x08(0x04)
	float Cloudy; // 0x0c(0x04)
	float Thunder; // 0x10(0x04)
	float SnowStorm; // 0x14(0x04)
	float WindSpeed; // 0x18(0x04)
	float WindStrength; // 0x1c(0x04)
	float WindGust; // 0x20(0x04)
	float Debris; // 0x24(0x04)
	float FogDensity; // 0x28(0x04)
	float FogExtinction; // 0x2c(0x04)
};

// ScriptStruct Icarus.WeatherGameplayData
// Size: 0x40 (Inherited: 0x00)
struct FWeatherGameplayData {
	struct FBiomesEnum Biome; // 0x00(0x10)
	struct FVector WindDirection; // 0x10(0x0c)
	float WindForce; // 0x1c(0x04)
	int32_t TemperatureModifier; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FText CurrentWeatherWarningMessage; // 0x28(0x18)
};

// ScriptStruct Icarus.WeatherPoolsEnum
// Size: 0x10 (Inherited: 0x10)
struct FWeatherPoolsEnum : FRowEnum {
};

// ScriptStruct Icarus.WeatherBiomeGroupForecast
// Size: 0x50 (Inherited: 0x00)
struct FWeatherBiomeGroupForecast {
	struct TMap<int32_t, struct FWeatherEventsRowHandle> PlannedEvents; // 0x00(0x50)
};

// ScriptStruct Icarus.BiomeWeatherForecast
// Size: 0x60 (Inherited: 0x00)
struct FBiomeWeatherForecast {
	struct FBiomesEnum Biome; // 0x00(0x10)
	struct TMap<int32_t, struct FWeatherEventsRowHandle> PlannedEvents; // 0x10(0x50)
};

// ScriptStruct Icarus.WeightData
// Size: 0x50 (Inherited: 0x18)
struct FWeightData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; // 0x18(0x28)
	float Weight; // 0x40(0x04)
	bool AddInventoryWeight; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float InventoryWeightScale; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Icarus.StoredElement
// Size: 0x28 (Inherited: 0x00)
struct FStoredElement {
	struct FWeightedListElement Element; // 0x00(0x20)
	float Roll; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Icarus.WeightedListElement
// Size: 0x20 (Inherited: 0x00)
struct FWeightedListElement {
	int32_t Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString String; // 0x08(0x10)
	struct UObject* Object; // 0x18(0x08)
};

// ScriptStruct Icarus.WeightEnum
// Size: 0x10 (Inherited: 0x10)
struct FWeightEnum : FRowEnum {
};

// ScriptStruct Icarus.WorkshopItemsEnum
// Size: 0x10 (Inherited: 0x10)
struct FWorkshopItemsEnum : FRowEnum {
};

// ScriptStruct Icarus.WorkshopItemsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FWorkshopItemsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.WorldBossData
// Size: 0x100 (Inherited: 0x18)
struct FWorldBossData : FIcarusTableRowBase {
	struct FAISetupRowHandle AISetup; // 0x18(0x18)
	struct FEpicCreaturesRowHandle EpicCreature; // 0x30(0x18)
	struct TSoftClassPtr<UObject> SpawnerClass; // 0x48(0x28)
	struct FGameplayTagQuery SpawnerTagQuery; // 0x70(0x48)
	struct TSoftClassPtr<UObject> BehaviourClass; // 0xb8(0x28)
	bool bReloadDeadBoss; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FMapIconsRowHandle BossMapMarker; // 0xe4(0x18)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct Icarus.WorldBossesEnum
// Size: 0x10 (Inherited: 0x10)
struct FWorldBossesEnum : FRowEnum {
};

// ScriptStruct Icarus.SpawnedWorldBossData
// Size: 0x60 (Inherited: 0x00)
struct FSpawnedWorldBossData {
	struct FWorldBossesRowHandle WorldBoss; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform InitialSpawnTransform; // 0x20(0x30)
	bool bHasBeenKilled; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32_t BossID; // 0x54(0x04)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct Icarus.WorldData
// Size: 0x148 (Inherited: 0x18)
struct FWorldData : FIcarusTableRowBase {
	struct FString TerrainName; // 0x18(0x10)
	struct FString FileTag; // 0x28(0x10)
	struct TSoftObjectPtr<UWorld> MainLevel; // 0x38(0x28)
	struct TSoftObjectPtr<UWorld> DeveloperNotesLevel; // 0x60(0x28)
	struct TArray<struct TSoftObjectPtr<UWorld>> PersistentLevels; // 0x88(0x10)
	struct TArray<struct TSoftObjectPtr<UWorld>> HeightmapLevels; // 0x98(0x10)
	struct TArray<struct TSoftObjectPtr<UWorld>> GeneratedLevels; // 0xa8(0x10)
	struct TSoftObjectPtr<UWorld> GeneratedVistaLevel; // 0xb8(0x28)
	struct TArray<struct TSoftObjectPtr<UWorld>> DeveloperLevels; // 0xe0(0x10)
	struct TArray<struct FBoxSphereBounds> GridBounds; // 0xf0(0x10)
	struct TArray<struct FWorldCollection> WorldCollections; // 0x100(0x10)
	struct FMinimapData MinimapData; // 0x110(0x38)
};

// ScriptStruct Icarus.MinimapData
// Size: 0x38 (Inherited: 0x00)
struct FMinimapData {
	struct TArray<struct TSoftObjectPtr<UTexture2D>> MapTextures; // 0x00(0x10)
	struct TArray<struct TSoftObjectPtr<UTexture2D>> HeightMapTextures; // 0x10(0x10)
	struct FVector WorldBoundaryMin; // 0x20(0x0c)
	struct FVector WorldBoundaryMax; // 0x2c(0x0c)
};

// ScriptStruct Icarus.WorldCollection
// Size: 0x60 (Inherited: 0x18)
struct FWorldCollection : FIcarusTableRowBase {
	struct FString CollectionName; // 0x18(0x10)
	struct TArray<struct TSoftObjectPtr<UWorld>> HeightmapLevels; // 0x28(0x10)
	struct TSoftObjectPtr<UWorld> DeveloperLevel; // 0x38(0x28)
};

// ScriptStruct Icarus.LevelArray
// Size: 0x28 (Inherited: 0x18)
struct FLevelArray : FIcarusTableRowBase {
	struct TArray<struct TSoftObjectPtr<UWorld>> Levels; // 0x18(0x10)
};

// ScriptStruct Icarus.WorldDataEnum
// Size: 0x10 (Inherited: 0x10)
struct FWorldDataEnum : FRowEnum {
};

// ScriptStruct Icarus.WorldDataRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FWorldDataRowHandle : FRowHandle {
};

