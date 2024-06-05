// 0x0 bytes (sizeof)
typedef struct _ADAPTER_OBJECT {
} _ADAPTER_OBJECT;

typedef char CHAR;

// 0x8 bytes (sizeof)
typedef struct _QUAD {
  double DoNotUseThisField; // offset: 0x0 ordinal: 0x0
} _QUAD;

typedef unsigned long long ULONGLONG;

typedef long long LONGLONG;

typedef unsigned char UCHAR;

// 0x0 bytes (sizeof)
typedef struct _SCSI_REQUEST_BLOCK {
} _SCSI_REQUEST_BLOCK;

typedef unsigned long ULONG;

// 0x4 bytes (sizeof)
typedef struct _MMVAD_FLAGS2 {
  ULONG FileOffset : 24;     // offset: 0x0 ordinal: 0x0
  ULONG SecNoChange : 1;     // offset: 0x0 ordinal: 0x1
  ULONG OneSecured : 1;      // offset: 0x0 ordinal: 0x2
  ULONG MultipleSecured : 1; // offset: 0x0 ordinal: 0x3
  ULONG ReadOnly : 1;        // offset: 0x0 ordinal: 0x4
  ULONG LongVad : 1;         // offset: 0x0 ordinal: 0x5
  ULONG ExtendableFile : 1;  // offset: 0x0 ordinal: 0x6
  ULONG Inherit : 1;         // offset: 0x0 ordinal: 0x7
  ULONG CopyOnWrite : 1;     // offset: 0x0 ordinal: 0x8
} _MMVAD_FLAGS2;

// 0x4 bytes (sizeof)
typedef struct _MMSUBSECTION_FLAGS {
  ULONG ReadOnly : 1;            // offset: 0x0 ordinal: 0x0
  ULONG ReadWrite : 1;           // offset: 0x0 ordinal: 0x1
  ULONG SubsectionStatic : 1;    // offset: 0x0 ordinal: 0x2
  ULONG GlobalMemory : 1;        // offset: 0x0 ordinal: 0x3
  ULONG Protection : 5;          // offset: 0x0 ordinal: 0x4
  ULONG LargePages : 1;          // offset: 0x0 ordinal: 0x5
  ULONG StartingSector4132 : 10; // offset: 0x0 ordinal: 0x6
  ULONG SectorEndOffset : 12;    // offset: 0x0 ordinal: 0x7
} _MMSUBSECTION_FLAGS;

// 0x4 bytes (sizeof)
typedef struct _MMSECTION_FLAGS {
  ULONG BeingDeleted : 1;             // offset: 0x0 ordinal: 0x0
  ULONG BeingCreated : 1;             // offset: 0x0 ordinal: 0x1
  ULONG BeingPurged : 1;              // offset: 0x0 ordinal: 0x2
  ULONG NoModifiedWriting : 1;        // offset: 0x0 ordinal: 0x3
  ULONG FailAllIo : 1;                // offset: 0x0 ordinal: 0x4
  ULONG Image : 1;                    // offset: 0x0 ordinal: 0x5
  ULONG Based : 1;                    // offset: 0x0 ordinal: 0x6
  ULONG File : 1;                     // offset: 0x0 ordinal: 0x7
  ULONG Networked : 1;                // offset: 0x0 ordinal: 0x8
  ULONG NoCache : 1;                  // offset: 0x0 ordinal: 0x9
  ULONG PhysicalMemory : 1;           // offset: 0x0 ordinal: 0xa
  ULONG CopyOnWrite : 1;              // offset: 0x0 ordinal: 0xb
  ULONG Reserve : 1;                  // offset: 0x0 ordinal: 0xc
  ULONG Commit : 1;                   // offset: 0x0 ordinal: 0xd
  ULONG FloppyMedia : 1;              // offset: 0x0 ordinal: 0xe
  ULONG WasPurged : 1;                // offset: 0x0 ordinal: 0xf
  ULONG UserReference : 1;            // offset: 0x0 ordinal: 0x10
  ULONG GlobalMemory : 1;             // offset: 0x0 ordinal: 0x11
  ULONG DeleteOnClose : 1;            // offset: 0x0 ordinal: 0x12
  ULONG FilePointerNull : 1;          // offset: 0x0 ordinal: 0x13
  ULONG DebugSymbolsLoaded : 1;       // offset: 0x0 ordinal: 0x14
  ULONG SetMappedFileIoComplete : 1;  // offset: 0x0 ordinal: 0x15
  ULONG CollidedFlush : 1;            // offset: 0x0 ordinal: 0x16
  ULONG NoChange : 1;                 // offset: 0x0 ordinal: 0x17
  ULONG HadUserReference : 1;         // offset: 0x0 ordinal: 0x18
  ULONG ImageMappedInSystemSpace : 1; // offset: 0x0 ordinal: 0x19
  ULONG UserWritable : 1;             // offset: 0x0 ordinal: 0x1a
  ULONG Accessed : 1;                 // offset: 0x0 ordinal: 0x1b
  ULONG GlobalOnlyPerSession : 1;     // offset: 0x0 ordinal: 0x1c
  ULONG Rom : 1;                      // offset: 0x0 ordinal: 0x1d
  ULONG filler : 2;                   // offset: 0x0 ordinal: 0x1e
} _MMSECTION_FLAGS;

// 0x4 bytes (sizeof)
typedef struct _MMSUPPORT_FLAGS {
  ULONG SessionSpace : 1;              // offset: 0x0 ordinal: 0x0
  ULONG BeingTrimmed : 1;              // offset: 0x0 ordinal: 0x1
  ULONG SessionLeader : 1;             // offset: 0x0 ordinal: 0x2
  ULONG TrimHard : 1;                  // offset: 0x0 ordinal: 0x3
  ULONG WorkingSetHard : 1;            // offset: 0x0 ordinal: 0x4
  ULONG AddressSpaceBeingDeleted : 1;  // offset: 0x0 ordinal: 0x5
  ULONG Available : 10;                // offset: 0x0 ordinal: 0x6
  ULONG AllowWorkingSetAdjustment : 8; // offset: 0x0 ordinal: 0x7
  ULONG MemoryPriority : 8;            // offset: 0x0 ordinal: 0x8
} _MMSUPPORT_FLAGS;

typedef long LONG;

typedef enum _MMSYSTEM_PTE_POOL_TYPE {
  SystemPteSpace = 0,        // ordinal: 0x0
  NonPagedPoolExpansion = 1, // ordinal: 0x1
  MaximumPtePoolTypes = 2,   // ordinal: 0x2
} _MMSYSTEM_PTE_POOL_TYPE;

typedef enum _PS_QUOTA_TYPE {
  PsNonPagedPool = 0, // ordinal: 0x0
  PsPagedPool = 1,    // ordinal: 0x1
  PsPageFile = 2,     // ordinal: 0x2
  PsQuotaTypes = 3,   // ordinal: 0x3
} _PS_QUOTA_TYPE;

typedef enum _MEMORY_TYPE {
  MemoryExceptionBlock = 0,    // ordinal: 0x0
  MemorySystemBlock = 1,       // ordinal: 0x1
  MemoryFree = 2,              // ordinal: 0x2
  MemoryBad = 3,               // ordinal: 0x3
  MemoryLoadedProgram = 4,     // ordinal: 0x4
  MemoryFirmwareTemporary = 5, // ordinal: 0x5
  MemoryFirmwarePermanent = 6, // ordinal: 0x6
  MemoryFreeContiguous = 7,    // ordinal: 0x7
  MemorySpecialMemory = 8,     // ordinal: 0x8
  MemoryMaximum = 9,           // ordinal: 0x9
} _MEMORY_TYPE;

typedef enum ReplacesCorHdrNumericDefines {
  COMIMAGE_FLAGS_ILONLY = 1,                  // ordinal: 0x0
  COMIMAGE_FLAGS_32BITREQUIRED = 2,           // ordinal: 0x1
  COMIMAGE_FLAGS_IL_LIBRARY = 4,              // ordinal: 0x2
  COMIMAGE_FLAGS_STRONGNAMESIGNED = 8,        // ordinal: 0x3
  COMIMAGE_FLAGS_TRACKDEBUGDATA = 65536,      // ordinal: 0x4
  COR_VERSION_MAJOR_V2 = 2,                   // ordinal: 0x5
  COR_VERSION_MAJOR = 2,                      // ordinal: 0x6
  COR_VERSION_MINOR = 0,                      // ordinal: 0x7
  COR_DELETED_NAME_LENGTH = 8,                // ordinal: 0x8
  COR_VTABLEGAP_NAME_LENGTH = 8,              // ordinal: 0x9
  NATIVE_TYPE_MAX_CB = 1,                     // ordinal: 0xa
  COR_ILMETHOD_SECT_SMALL_MAX_DATASIZE = 255, // ordinal: 0xb
  IMAGE_COR_MIH_METHODRVA = 1,                // ordinal: 0xc
  IMAGE_COR_MIH_EHRVA = 2,                    // ordinal: 0xd
  IMAGE_COR_MIH_BASICBLOCK = 8,               // ordinal: 0xe
  COR_VTABLE_32BIT = 1,                       // ordinal: 0xf
  COR_VTABLE_64BIT = 2,                       // ordinal: 0x10
  COR_VTABLE_FROM_UNMANAGED = 4,              // ordinal: 0x11
  COR_VTABLE_CALL_MOST_DERIVED = 16,          // ordinal: 0x12
  IMAGE_COR_EATJ_THUNK_SIZE = 32,             // ordinal: 0x13
  MAX_CLASS_NAME = 1024,                      // ordinal: 0x14
  MAX_PACKAGE_NAME = 1024,                    // ordinal: 0x15
} ReplacesCorHdrNumericDefines;

typedef enum _POLICY_AUDIT_EVENT_TYPE {
  AuditCategorySystem = 0,                 // ordinal: 0x0
  AuditCategoryLogon = 1,                  // ordinal: 0x1
  AuditCategoryObjectAccess = 2,           // ordinal: 0x2
  AuditCategoryPrivilegeUse = 3,           // ordinal: 0x3
  AuditCategoryDetailedTracking = 4,       // ordinal: 0x4
  AuditCategoryPolicyChange = 5,           // ordinal: 0x5
  AuditCategoryAccountManagement = 6,      // ordinal: 0x6
  AuditCategoryDirectoryServiceAccess = 7, // ordinal: 0x7
  AuditCategoryAccountLogon = 8,           // ordinal: 0x8
} _POLICY_AUDIT_EVENT_TYPE;

typedef enum _MODE {
  KernelMode = 0,  // ordinal: 0x0
  UserMode = 1,    // ordinal: 0x1
  MaximumMode = 2, // ordinal: 0x2
} _MODE;

typedef enum _MEMORY_CACHING_TYPE_ORIG {
  MmFrameBufferCached = 2, // ordinal: 0x0
} _MEMORY_CACHING_TYPE_ORIG;

typedef enum _KWAIT_REASON {
  Executive = 0,          // ordinal: 0x0
  FreePage = 1,           // ordinal: 0x1
  PageIn = 2,             // ordinal: 0x2
  PoolAllocation = 3,     // ordinal: 0x3
  DelayExecution = 4,     // ordinal: 0x4
  Suspended = 5,          // ordinal: 0x5
  UserRequest = 6,        // ordinal: 0x6
  WrExecutive = 7,        // ordinal: 0x7
  WrFreePage = 8,         // ordinal: 0x8
  WrPageIn = 9,           // ordinal: 0x9
  WrPoolAllocation = 10,  // ordinal: 0xa
  WrDelayExecution = 11,  // ordinal: 0xb
  WrSuspended = 12,       // ordinal: 0xc
  WrUserRequest = 13,     // ordinal: 0xd
  WrEventPair = 14,       // ordinal: 0xe
  WrQueue = 15,           // ordinal: 0xf
  WrLpcReceive = 16,      // ordinal: 0x10
  WrLpcReply = 17,        // ordinal: 0x11
  WrVirtualMemory = 18,   // ordinal: 0x12
  WrPageOut = 19,         // ordinal: 0x13
  WrRendezvous = 20,      // ordinal: 0x14
  Spare2 = 21,            // ordinal: 0x15
  Spare3 = 22,            // ordinal: 0x16
  Spare4 = 23,            // ordinal: 0x17
  Spare5 = 24,            // ordinal: 0x18
  Spare6 = 25,            // ordinal: 0x19
  WrKernel = 26,          // ordinal: 0x1a
  MaximumWaitReason = 27, // ordinal: 0x1b
} _KWAIT_REASON;

typedef enum LSA_FOREST_TRUST_RECORD_TYPE {
  ForestTrustTopLevelName = 0,   // ordinal: 0x0
  ForestTrustTopLevelNameEx = 1, // ordinal: 0x1
  ForestTrustDomainInfo = 2,     // ordinal: 0x2
  ForestTrustRecordTypeLast = 2, // ordinal: 0x3
} LSA_FOREST_TRUST_RECORD_TYPE;

typedef enum CPU_VENDORS {
  CPU_NONE = 0,      // ordinal: 0x0
  CPU_INTEL = 1,     // ordinal: 0x1
  CPU_AMD = 2,       // ordinal: 0x2
  CPU_CYRIX = 3,     // ordinal: 0x3
  CPU_TRANSMETA = 4, // ordinal: 0x4
  CPU_CENTAUR = 5,   // ordinal: 0x5
  CPU_RISE = 6,      // ordinal: 0x6
  CPU_UNKNOWN = 7,   // ordinal: 0x7
} CPU_VENDORS;

typedef enum _PF_SCENARIO_TYPE {
  PfApplicationLaunchScenarioType = 0, // ordinal: 0x0
  PfSystemBootScenarioType = 1,        // ordinal: 0x1
  PfMaxScenarioType = 2,               // ordinal: 0x2
} _PF_SCENARIO_TYPE;

typedef enum _MI_PFN_CACHE_ATTRIBUTE {
  MiNonCached = 0,     // ordinal: 0x0
  MiCached = 1,        // ordinal: 0x1
  MiWriteCombined = 2, // ordinal: 0x2
  MiNotMapped = 3,     // ordinal: 0x3
} _MI_PFN_CACHE_ATTRIBUTE;

typedef enum _MEMORY_CACHING_TYPE {
  MmNonCached = 0,              // ordinal: 0x0
  MmCached = 1,                 // ordinal: 0x1
  MmWriteCombined = 2,          // ordinal: 0x2
  MmHardwareCoherentCached = 3, // ordinal: 0x3
  MmNonCachedUnordered = 4,     // ordinal: 0x4
  MmUSWCCached = 5,             // ordinal: 0x5
  MmMaximumCacheType = 6,       // ordinal: 0x6
} _MEMORY_CACHING_TYPE;

typedef enum _PP_NPAGED_LOOKASIDE_NUMBER {
  LookasideSmallIrpList = 0,   // ordinal: 0x0
  LookasideLargeIrpList = 1,   // ordinal: 0x1
  LookasideMdlList = 2,        // ordinal: 0x2
  LookasideCreateInfoList = 3, // ordinal: 0x3
  LookasideNameBufferList = 4, // ordinal: 0x4
  LookasideTwilightList = 5,   // ordinal: 0x5
  LookasideCompletionList = 6, // ordinal: 0x6
  LookasideMaximumList = 7,    // ordinal: 0x7
} _PP_NPAGED_LOOKASIDE_NUMBER;

typedef enum _KSPIN_LOCK_QUEUE_NUMBER {
  LockQueueDispatcherLock = 0,    // ordinal: 0x0
  LockQueueContextSwapLock = 1,   // ordinal: 0x1
  LockQueuePfnLock = 2,           // ordinal: 0x2
  LockQueueSystemSpaceLock = 3,   // ordinal: 0x3
  LockQueueVacbLock = 4,          // ordinal: 0x4
  LockQueueMasterLock = 5,        // ordinal: 0x5
  LockQueueNonPagedPoolLock = 6,  // ordinal: 0x6
  LockQueueIoCancelLock = 7,      // ordinal: 0x7
  LockQueueWorkQueueLock = 8,     // ordinal: 0x8
  LockQueueIoVpbLock = 9,         // ordinal: 0x9
  LockQueueIoDatabaseLock = 10,   // ordinal: 0xa
  LockQueueIoCompletionLock = 11, // ordinal: 0xb
  LockQueueNtfsStructLock = 12,   // ordinal: 0xc
  LockQueueAfdWorkQueueLock = 13, // ordinal: 0xd
  LockQueueBcbLock = 14,          // ordinal: 0xe
  LockQueueMaximumLock = 15,      // ordinal: 0xf
} _KSPIN_LOCK_QUEUE_NUMBER;

typedef enum _PLUGPLAY_EVENT_CATEGORY {
  HardwareProfileChangeEvent = 0, // ordinal: 0x0
  TargetDeviceChangeEvent = 1,    // ordinal: 0x1
  DeviceClassChangeEvent = 2,     // ordinal: 0x2
  CustomDeviceEvent = 3,          // ordinal: 0x3
  DeviceInstallEvent = 4,         // ordinal: 0x4
  DeviceArrivalEvent = 5,         // ordinal: 0x5
  PowerEvent = 6,                 // ordinal: 0x6
  VetoEvent = 7,                  // ordinal: 0x7
  BlockedDriverEvent = 8,         // ordinal: 0x8
  MaxPlugEventCategory = 9,       // ordinal: 0x9
} _PLUGPLAY_EVENT_CATEGORY;

typedef enum _PNP_VETO_TYPE {
  PNP_VetoTypeUnknown = 0,          // ordinal: 0x0
  PNP_VetoLegacyDevice = 1,         // ordinal: 0x1
  PNP_VetoPendingClose = 2,         // ordinal: 0x2
  PNP_VetoWindowsApp = 3,           // ordinal: 0x3
  PNP_VetoWindowsService = 4,       // ordinal: 0x4
  PNP_VetoOutstandingOpen = 5,      // ordinal: 0x5
  PNP_VetoDevice = 6,               // ordinal: 0x6
  PNP_VetoDriver = 7,               // ordinal: 0x7
  PNP_VetoIllegalDeviceRequest = 8, // ordinal: 0x8
  PNP_VetoInsufficientPower = 9,    // ordinal: 0x9
  PNP_VetoNonDisableable = 10,      // ordinal: 0xa
  PNP_VetoLegacyDriver = 11,        // ordinal: 0xb
  PNP_VetoInsufficientRights = 12,  // ordinal: 0xc
} _PNP_VETO_TYPE;

typedef enum _PROXY_CLASS {
  ProxyFull = 0,      // ordinal: 0x0
  ProxyService = 1,   // ordinal: 0x1
  ProxyTree = 2,      // ordinal: 0x2
  ProxyDirectory = 3, // ordinal: 0x3
} _PROXY_CLASS;

typedef enum _TOKEN_TYPE {
  TokenPrimary = 1,       // ordinal: 0x0
  TokenImpersonation = 2, // ordinal: 0x1
} _TOKEN_TYPE;

typedef enum _ARBITER_RESULT {
  ArbiterResultUndefined = -1,       // ordinal: 0x0
  ArbiterResultSuccess = 0,          // ordinal: 0x1
  ArbiterResultExternalConflict = 1, // ordinal: 0x2
  ArbiterResultNullRequest = 2,      // ordinal: 0x3
} _ARBITER_RESULT;

typedef enum _ARBITER_REQUEST_SOURCE {
  ArbiterRequestUndefined = -1,     // ordinal: 0x0
  ArbiterRequestLegacyReported = 0, // ordinal: 0x1
  ArbiterRequestHalReported = 1,    // ordinal: 0x2
  ArbiterRequestLegacyAssigned = 2, // ordinal: 0x3
  ArbiterRequestPnpDetected = 3,    // ordinal: 0x4
  ArbiterRequestPnpEnumerated = 4,  // ordinal: 0x5
} _ARBITER_REQUEST_SOURCE;

typedef enum _KINTERRUPT_MODE {
  LevelSensitive = 0, // ordinal: 0x0
  Latched = 1,        // ordinal: 0x1
} _KINTERRUPT_MODE;

typedef enum _MMLISTS {
  ZeroedPageList = 0,          // ordinal: 0x0
  FreePageList = 1,            // ordinal: 0x1
  StandbyPageList = 2,         // ordinal: 0x2
  ModifiedPageList = 3,        // ordinal: 0x3
  ModifiedNoWritePageList = 4, // ordinal: 0x4
  BadPageList = 5,             // ordinal: 0x5
  ActiveAndValid = 6,          // ordinal: 0x6
  TransitionPage = 7,          // ordinal: 0x7
} _MMLISTS;

typedef enum _ARBITER_ACTION {
  ArbiterActionTestAllocation = 0,          // ordinal: 0x0
  ArbiterActionRetestAllocation = 1,        // ordinal: 0x1
  ArbiterActionCommitAllocation = 2,        // ordinal: 0x2
  ArbiterActionRollbackAllocation = 3,      // ordinal: 0x3
  ArbiterActionQueryAllocatedResources = 4, // ordinal: 0x4
  ArbiterActionWriteReservedResources = 5,  // ordinal: 0x5
  ArbiterActionQueryConflict = 6,           // ordinal: 0x6
  ArbiterActionQueryArbitrate = 7,          // ordinal: 0x7
  ArbiterActionAddReserved = 8,             // ordinal: 0x8
  ArbiterActionBootAllocation = 9,          // ordinal: 0x9
} _ARBITER_ACTION;

typedef enum _BUS_DATA_TYPE {
  ConfigurationSpaceUndefined = -1, // ordinal: 0x0
  Cmos = 0,                         // ordinal: 0x1
  EisaConfiguration = 1,            // ordinal: 0x2
  Pos = 2,                          // ordinal: 0x3
  CbusConfiguration = 3,            // ordinal: 0x4
  PCIConfiguration = 4,             // ordinal: 0x5
  VMEConfiguration = 5,             // ordinal: 0x6
  NuBusConfiguration = 6,           // ordinal: 0x7
  PCMCIAConfiguration = 7,          // ordinal: 0x8
  MPIConfiguration = 8,             // ordinal: 0x9
  MPSAConfiguration = 9,            // ordinal: 0xa
  PNPISAConfiguration = 10,         // ordinal: 0xb
  SgiInternalConfiguration = 11,    // ordinal: 0xc
  MaximumBusDataType = 12,          // ordinal: 0xd
} _BUS_DATA_TYPE;

typedef enum _PCI_DISPATCH_STYLE {
  IRP_COMPLETE = 0, // ordinal: 0x0
  IRP_DOWNWARD = 1, // ordinal: 0x1
  IRP_UPWARD = 2,   // ordinal: 0x2
  IRP_DISPATCH = 3, // ordinal: 0x3
} _PCI_DISPATCH_STYLE;

typedef enum PCI_SIGNATURE {
  PciPdoExtensionType = 1768116272,                // ordinal: 0x0
  PciFdoExtensionType = 1768116273,                // ordinal: 0x1
  PciArb_Io = 1768116274,                          // ordinal: 0x2
  PciArb_Memory = 1768116275,                      // ordinal: 0x3
  PciArb_Interrupt = 1768116276,                   // ordinal: 0x4
  PciArb_BusNumber = 1768116277,                   // ordinal: 0x5
  PciTrans_Interrupt = 1768116278,                 // ordinal: 0x6
  PciInterface_BusHandler = 1768116279,            // ordinal: 0x7
  PciInterface_IntRouteHandler = 1768116280,       // ordinal: 0x8
  PciInterface_PciCb = 1768116281,                 // ordinal: 0x9
  PciInterface_LegacyDeviceDetection = 1768116282, // ordinal: 0xa
  PciInterface_PmeHandler = 1768116283,            // ordinal: 0xb
  PciInterface_DevicePresent = 1768116284,         // ordinal: 0xc
  PciInterface_NativeIde = 1768116285,             // ordinal: 0xd
  PciInterface_AgpTarget = 1768116286,             // ordinal: 0xe
} PCI_SIGNATURE;

typedef enum _ALTERNATIVE_ARCHITECTURE_TYPE {
  StandardDesign = 0,  // ordinal: 0x0
  NEC98x86 = 1,        // ordinal: 0x1
  EndAlternatives = 2, // ordinal: 0x2
} _ALTERNATIVE_ARCHITECTURE_TYPE;

typedef enum _NT_PRODUCT_TYPE {
  NtProductWinNt = 1,    // ordinal: 0x0
  NtProductLanManNt = 2, // ordinal: 0x1
  NtProductServer = 3,   // ordinal: 0x2
} _NT_PRODUCT_TYPE;

typedef enum POP_POLICY_DEVICE_TYPE {
  PolicyDeviceSystemButton = 0,     // ordinal: 0x0
  PolicyDeviceThermalZone = 1,      // ordinal: 0x1
  PolicyDeviceBattery = 2,          // ordinal: 0x2
  PolicyInitiatePowerActionAPI = 3, // ordinal: 0x3
  PolicySetPowerStateAPI = 4,       // ordinal: 0x4
  PolicyImmediateDozeS4 = 5,        // ordinal: 0x5
  PolicySystemIdle = 6,             // ordinal: 0x6
} POP_POLICY_DEVICE_TYPE;

typedef enum PROFILE_STATUS {
  DOCK_NOTDOCKDEVICE = 0,      // ordinal: 0x0
  DOCK_QUIESCENT = 1,          // ordinal: 0x1
  DOCK_ARRIVING = 2,           // ordinal: 0x2
  DOCK_DEPARTING = 3,          // ordinal: 0x3
  DOCK_EJECTIRP_COMPLETED = 4, // ordinal: 0x4
} PROFILE_STATUS;

typedef enum _PNP_DEVNODE_STATE {
  DeviceNodeUnspecified = 768,            // ordinal: 0x0
  DeviceNodeUninitialized = 769,          // ordinal: 0x1
  DeviceNodeInitialized = 770,            // ordinal: 0x2
  DeviceNodeDriversAdded = 771,           // ordinal: 0x3
  DeviceNodeResourcesAssigned = 772,      // ordinal: 0x4
  DeviceNodeStartPending = 773,           // ordinal: 0x5
  DeviceNodeStartCompletion = 774,        // ordinal: 0x6
  DeviceNodeStartPostWork = 775,          // ordinal: 0x7
  DeviceNodeStarted = 776,                // ordinal: 0x8
  DeviceNodeQueryStopped = 777,           // ordinal: 0x9
  DeviceNodeStopped = 778,                // ordinal: 0xa
  DeviceNodeRestartCompletion = 779,      // ordinal: 0xb
  DeviceNodeEnumeratePending = 780,       // ordinal: 0xc
  DeviceNodeEnumerateCompletion = 781,    // ordinal: 0xd
  DeviceNodeAwaitingQueuedDeletion = 782, // ordinal: 0xe
  DeviceNodeAwaitingQueuedRemoval = 783,  // ordinal: 0xf
  DeviceNodeQueryRemoved = 784,           // ordinal: 0x10
  DeviceNodeRemovePendingCloses = 785,    // ordinal: 0x11
  DeviceNodeRemoved = 786,                // ordinal: 0x12
  DeviceNodeDeletePendingCloses = 787,    // ordinal: 0x13
  DeviceNodeDeleted = 788,                // ordinal: 0x14
} _PNP_DEVNODE_STATE;

typedef enum _VI_DEADLOCK_RESOURCE_TYPE {
  VfDeadlockUnknown = 0,         // ordinal: 0x0
  VfDeadlockMutex = 1,           // ordinal: 0x1
  VfDeadlockFastMutex = 2,       // ordinal: 0x2
  VfDeadlockFastMutexUnsafe = 3, // ordinal: 0x3
  VfDeadlockSpinLock = 4,        // ordinal: 0x4
  VfDeadlockQueuedSpinLock = 5,  // ordinal: 0x5
  VfDeadlockTypeMaximum = 6,     // ordinal: 0x6
} _VI_DEADLOCK_RESOURCE_TYPE;

typedef enum _SECURITY_OPERATION_CODE {
  SetSecurityDescriptor = 0,    // ordinal: 0x0
  QuerySecurityDescriptor = 1,  // ordinal: 0x1
  DeleteSecurityDescriptor = 2, // ordinal: 0x2
  AssignSecurityDescriptor = 3, // ordinal: 0x3
} _SECURITY_OPERATION_CODE;

typedef enum _OB_OPEN_REASON {
  ObCreateHandle = 0,    // ordinal: 0x0
  ObOpenHandle = 1,      // ordinal: 0x1
  ObDuplicateHandle = 2, // ordinal: 0x2
  ObInheritHandle = 3,   // ordinal: 0x3
  ObMaxOpenReason = 4,   // ordinal: 0x4
} _OB_OPEN_REASON;

typedef enum _FS_FILTER_SECTION_SYNC_TYPE {
  SyncTypeOther = 0,         // ordinal: 0x0
  SyncTypeCreateSection = 1, // ordinal: 0x1
} _FS_FILTER_SECTION_SYNC_TYPE;

typedef enum _INTERFACE_TYPE {
  InterfaceTypeUndefined = -1, // ordinal: 0x0
  Internal = 0,                // ordinal: 0x1
  Isa = 1,                     // ordinal: 0x2
  Eisa = 2,                    // ordinal: 0x3
  MicroChannel = 3,            // ordinal: 0x4
  TurboChannel = 4,            // ordinal: 0x5
  PCIBus = 5,                  // ordinal: 0x6
  VMEBus = 6,                  // ordinal: 0x7
  NuBus = 7,                   // ordinal: 0x8
  PCMCIABus = 8,               // ordinal: 0x9
  CBus = 9,                    // ordinal: 0xa
  MPIBus = 10,                 // ordinal: 0xb
  MPSABus = 11,                // ordinal: 0xc
  ProcessorInternal = 12,      // ordinal: 0xd
  InternalPowerBus = 13,       // ordinal: 0xe
  PNPISABus = 14,              // ordinal: 0xf
  PNPBus = 15,                 // ordinal: 0x10
  MaximumInterfaceType = 16,   // ordinal: 0x11
} _INTERFACE_TYPE;

typedef enum POWER_ACTION {
  PowerActionNone = 0,          // ordinal: 0x0
  PowerActionReserved = 1,      // ordinal: 0x1
  PowerActionSleep = 2,         // ordinal: 0x2
  PowerActionHibernate = 3,     // ordinal: 0x3
  PowerActionShutdown = 4,      // ordinal: 0x4
  PowerActionShutdownReset = 5, // ordinal: 0x5
  PowerActionShutdownOff = 6,   // ordinal: 0x6
  PowerActionWarmEject = 7,     // ordinal: 0x7
} POWER_ACTION;

typedef enum _POWER_STATE_TYPE {
  SystemPowerState = 0, // ordinal: 0x0
  DevicePowerState = 1, // ordinal: 0x1
} _POWER_STATE_TYPE;

typedef enum _SYSTEM_POWER_STATE {
  PowerSystemUnspecified = 0, // ordinal: 0x0
  PowerSystemWorking = 1,     // ordinal: 0x1
  PowerSystemSleeping1 = 2,   // ordinal: 0x2
  PowerSystemSleeping2 = 3,   // ordinal: 0x3
  PowerSystemSleeping3 = 4,   // ordinal: 0x4
  PowerSystemHibernate = 5,   // ordinal: 0x5
  PowerSystemShutdown = 6,    // ordinal: 0x6
  PowerSystemMaximum = 7,     // ordinal: 0x7
} _SYSTEM_POWER_STATE;

typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE {
  DeviceUsageTypeUndefined = 0,   // ordinal: 0x0
  DeviceUsageTypePaging = 1,      // ordinal: 0x1
  DeviceUsageTypeHibernation = 2, // ordinal: 0x2
  DeviceUsageTypeDumpFile = 3,    // ordinal: 0x3
} _DEVICE_USAGE_NOTIFICATION_TYPE;

typedef enum DEVICE_TEXT_TYPE {
  DeviceTextDescription = 0,         // ordinal: 0x0
  DeviceTextLocationInformation = 1, // ordinal: 0x1
} DEVICE_TEXT_TYPE;

typedef enum BUS_QUERY_ID_TYPE {
  BusQueryDeviceID = 0,           // ordinal: 0x0
  BusQueryHardwareIDs = 1,        // ordinal: 0x1
  BusQueryCompatibleIDs = 2,      // ordinal: 0x2
  BusQueryInstanceID = 3,         // ordinal: 0x3
  BusQueryDeviceSerialNumber = 4, // ordinal: 0x4
} BUS_QUERY_ID_TYPE;

typedef enum _DEVICE_RELATION_TYPE {
  BusRelations = 0,         // ordinal: 0x0
  EjectionRelations = 1,    // ordinal: 0x1
  PowerRelations = 2,       // ordinal: 0x2
  RemovalRelations = 3,     // ordinal: 0x3
  TargetDeviceRelation = 4, // ordinal: 0x4
  SingleBusRelations = 5,   // ordinal: 0x5
} _DEVICE_RELATION_TYPE;

typedef enum _FSINFOCLASS {
  FileFsVolumeInformation = 1,     // ordinal: 0x0
  FileFsLabelInformation = 2,      // ordinal: 0x1
  FileFsSizeInformation = 3,       // ordinal: 0x2
  FileFsDeviceInformation = 4,     // ordinal: 0x3
  FileFsAttributeInformation = 5,  // ordinal: 0x4
  FileFsControlInformation = 6,    // ordinal: 0x5
  FileFsFullSizeInformation = 7,   // ordinal: 0x6
  FileFsObjectIdInformation = 8,   // ordinal: 0x7
  FileFsDriverPathInformation = 9, // ordinal: 0x8
  FileFsMaximumInformation = 10,   // ordinal: 0x9
} _FSINFOCLASS;

typedef enum _FILE_INFORMATION_CLASS {
  FileDirectoryInformation = 1,        // ordinal: 0x0
  FileFullDirectoryInformation = 2,    // ordinal: 0x1
  FileBothDirectoryInformation = 3,    // ordinal: 0x2
  FileBasicInformation = 4,            // ordinal: 0x3
  FileStandardInformation = 5,         // ordinal: 0x4
  FileInternalInformation = 6,         // ordinal: 0x5
  FileEaInformation = 7,               // ordinal: 0x6
  FileAccessInformation = 8,           // ordinal: 0x7
  FileNameInformation = 9,             // ordinal: 0x8
  FileRenameInformation = 10,          // ordinal: 0x9
  FileLinkInformation = 11,            // ordinal: 0xa
  FileNamesInformation = 12,           // ordinal: 0xb
  FileDispositionInformation = 13,     // ordinal: 0xc
  FilePositionInformation = 14,        // ordinal: 0xd
  FileFullEaInformation = 15,          // ordinal: 0xe
  FileModeInformation = 16,            // ordinal: 0xf
  FileAlignmentInformation = 17,       // ordinal: 0x10
  FileAllInformation = 18,             // ordinal: 0x11
  FileAllocationInformation = 19,      // ordinal: 0x12
  FileEndOfFileInformation = 20,       // ordinal: 0x13
  FileAlternateNameInformation = 21,   // ordinal: 0x14
  FileStreamInformation = 22,          // ordinal: 0x15
  FilePipeInformation = 23,            // ordinal: 0x16
  FilePipeLocalInformation = 24,       // ordinal: 0x17
  FilePipeRemoteInformation = 25,      // ordinal: 0x18
  FileMailslotQueryInformation = 26,   // ordinal: 0x19
  FileMailslotSetInformation = 27,     // ordinal: 0x1a
  FileCompressionInformation = 28,     // ordinal: 0x1b
  FileObjectIdInformation = 29,        // ordinal: 0x1c
  FileCompletionInformation = 30,      // ordinal: 0x1d
  FileMoveClusterInformation = 31,     // ordinal: 0x1e
  FileQuotaInformation = 32,           // ordinal: 0x1f
  FileReparsePointInformation = 33,    // ordinal: 0x20
  FileNetworkOpenInformation = 34,     // ordinal: 0x21
  FileAttributeTagInformation = 35,    // ordinal: 0x22
  FileTrackingInformation = 36,        // ordinal: 0x23
  FileIdBothDirectoryInformation = 37, // ordinal: 0x24
  FileIdFullDirectoryInformation = 38, // ordinal: 0x25
  FileValidDataLengthInformation = 39, // ordinal: 0x26
  FileShortNameInformation = 40,       // ordinal: 0x27
  FileMaximumInformation = 41,         // ordinal: 0x28
} _FILE_INFORMATION_CLASS;

typedef enum _DEVICE_POWER_STATE {
  PowerDeviceUnspecified = 0, // ordinal: 0x0
  PowerDeviceD0 = 1,          // ordinal: 0x1
  PowerDeviceD1 = 2,          // ordinal: 0x2
  PowerDeviceD2 = 3,          // ordinal: 0x3
  PowerDeviceD3 = 4,          // ordinal: 0x4
  PowerDeviceMaximum = 5,     // ordinal: 0x5
} _DEVICE_POWER_STATE;

// 0x4 bytes (sizeof)
typedef union _POWER_STATE {
  enum _SYSTEM_POWER_STATE SystemState; // offset: 0x0 ordinal: 0x0
  enum _DEVICE_POWER_STATE DeviceState; // offset: 0x0 ordinal: 0x1
} _POWER_STATE;

typedef enum _IO_ALLOCATION_ACTION {
  KeepObject = 1,                    // ordinal: 0x0
  DeallocateObject = 2,              // ordinal: 0x1
  DeallocateObjectKeepRegisters = 3, // ordinal: 0x2
} _IO_ALLOCATION_ACTION;

typedef enum _SECURITY_IMPERSONATION_LEVEL {
  SecurityAnonymous = 0,      // ordinal: 0x0
  SecurityIdentification = 1, // ordinal: 0x1
  SecurityImpersonation = 2,  // ordinal: 0x2
  SecurityDelegation = 3,     // ordinal: 0x3
} _SECURITY_IMPERSONATION_LEVEL;

typedef enum _POOL_TYPE {
  NonPagedPool = 0,                          // ordinal: 0x0
  PagedPool = 1,                             // ordinal: 0x1
  NonPagedPoolMustSucceed = 2,               // ordinal: 0x2
  DontUseThisType = 3,                       // ordinal: 0x3
  NonPagedPoolCacheAligned = 4,              // ordinal: 0x4
  PagedPoolCacheAligned = 5,                 // ordinal: 0x5
  NonPagedPoolCacheAlignedMustS = 6,         // ordinal: 0x6
  MaxPoolType = 7,                           // ordinal: 0x7
  NonPagedPoolSession = 32,                  // ordinal: 0x8
  PagedPoolSession = 33,                     // ordinal: 0x9
  NonPagedPoolMustSucceedSession = 34,       // ordinal: 0xa
  DontUseThisTypeSession = 35,               // ordinal: 0xb
  NonPagedPoolCacheAlignedSession = 36,      // ordinal: 0xc
  PagedPoolCacheAlignedSession = 37,         // ordinal: 0xd
  NonPagedPoolCacheAlignedMustSSession = 38, // ordinal: 0xe
} _POOL_TYPE;

typedef enum _EXCEPTION_DISPOSITION {
  ExceptionContinueExecution = 0, // ordinal: 0x0
  ExceptionContinueSearch = 1,    // ordinal: 0x1
  ExceptionNestedException = 2,   // ordinal: 0x2
  ExceptionCollidedUnwind = 3,    // ordinal: 0x3
} _EXCEPTION_DISPOSITION;

// 0x4 bytes (sizeof)
typedef struct _SINGLE_LIST_ENTRY {
  struct _SINGLE_LIST_ENTRY *Next; // offset: 0x0 ordinal: 0x0
} _SINGLE_LIST_ENTRY;

typedef void VOID;

typedef VOID (*__anon_315)(struct _DEVICE_OBJECT *, struct _DEVICE_OBJECT *);

typedef VOID (*__anon_314)(struct _FILE_OBJECT *);

typedef VOID (*__anon_256)();

// 0x8 bytes (sizeof)
typedef struct _OBJECT_DIRECTORY_ENTRY {
  struct _OBJECT_DIRECTORY_ENTRY *ChainLink; // offset: 0x0 ordinal: 0x0
  VOID *Object;                              // offset: 0x4 ordinal: 0x1
} _OBJECT_DIRECTORY_ENTRY;

typedef VOID (*__anon_682)(VOID *, VOID *);

// 0x10 bytes (sizeof)
typedef struct _SECURITY_SUBJECT_CONTEXT {
  VOID *ClientToken; // offset: 0x0 ordinal: 0x0
  enum _SECURITY_IMPERSONATION_LEVEL
      ImpersonationLevel; // offset: 0x4 ordinal: 0x1
  VOID *PrimaryToken;     // offset: 0x8 ordinal: 0x2
  VOID *ProcessAuditId;   // offset: 0xc ordinal: 0x3
} _SECURITY_SUBJECT_CONTEXT;

// 0x8 bytes (sizeof)
typedef struct _IO_COMPLETION_CONTEXT {
  VOID *Port; // offset: 0x0 ordinal: 0x0
  VOID *Key;  // offset: 0x4 ordinal: 0x1
} _IO_COMPLETION_CONTEXT;

// 0xc bytes (sizeof)
typedef struct _SECTION_OBJECT_POINTERS {
  VOID *DataSectionObject;  // offset: 0x0 ordinal: 0x0
  VOID *SharedCacheMap;     // offset: 0x4 ordinal: 0x1
  VOID *ImageSectionObject; // offset: 0x8 ordinal: 0x2
} _SECTION_OBJECT_POINTERS;

// 0x8 bytes (sizeof)
typedef struct _IO_CLIENT_EXTENSION {
  struct _IO_CLIENT_EXTENSION *NextExtension; // offset: 0x0 ordinal: 0x0
  VOID *ClientIdentificationAddress;          // offset: 0x4 ordinal: 0x1
} _IO_CLIENT_EXTENSION;

// 0x8 bytes (sizeof)
typedef struct _PROCESS_WS_WATCH_INFORMATION {
  VOID *FaultingPc; // offset: 0x0 ordinal: 0x0
  VOID *FaultingVa; // offset: 0x4 ordinal: 0x1
} _PROCESS_WS_WATCH_INFORMATION;

typedef VOID (*__anon_242)(struct _DEVICE_OBJECT *, VOID *);

// 0x8 bytes (sizeof)
typedef struct _TERMINATION_PORT {
  struct _TERMINATION_PORT *Next; // offset: 0x0 ordinal: 0x0
  VOID *Port;                     // offset: 0x4 ordinal: 0x1
} _TERMINATION_PORT;

// 0x8 bytes (sizeof)
typedef struct _CLIENT_ID {
  VOID *UniqueProcess; // offset: 0x0 ordinal: 0x0
  VOID *UniqueThread;  // offset: 0x4 ordinal: 0x1
} _CLIENT_ID;

typedef VOID (*__anon_141)(VOID *);

// 0xc bytes (sizeof)
typedef struct PCI_SECONDARY_EXTENSION {
  struct _SINGLE_LIST_ENTRY List;   // offset: 0x0 ordinal: 0x0
  enum PCI_SIGNATURE ExtensionType; // offset: 0x4 ordinal: 0x1
  VOID (*Destructor)(VOID *);       // offset: 0x8 ordinal: 0x2
} PCI_SECONDARY_EXTENSION;

typedef VOID (*__anon_113)(VOID *, VOID *, VOID *, VOID *);

typedef VOID (*__anon_32)(VOID *, VOID *, VOID *);

typedef short SHORT;

typedef LONGLONG (*__anon_664)();

// 0x8 bytes (sizeof)
typedef struct _VACB_LEVEL_REFERENCE {
  LONG Reference;        // offset: 0x0 ordinal: 0x0
  LONG SpecialReference; // offset: 0x4 ordinal: 0x1
} _VACB_LEVEL_REFERENCE;

// 0x4 bytes (sizeof)
typedef struct _DBGKD_CONTINUE {
  LONG ContinueStatus; // offset: 0x0 ordinal: 0x0
} _DBGKD_CONTINUE;

typedef LONG (*__anon_324)(struct _FILE_OBJECT *, struct _DEVICE_OBJECT *);

// 0x1 bytes (sizeof)
typedef struct _PM_SUPPORT {
  UCHAR Rsvd2 : 1;     // offset: 0x0 ordinal: 0x0
  UCHAR D1 : 1;        // offset: 0x0 ordinal: 0x1
  UCHAR D2 : 1;        // offset: 0x0 ordinal: 0x2
  UCHAR PMED0 : 1;     // offset: 0x0 ordinal: 0x3
  UCHAR PMED1 : 1;     // offset: 0x0 ordinal: 0x4
  UCHAR PMED2 : 1;     // offset: 0x0 ordinal: 0x5
  UCHAR PMED3Hot : 1;  // offset: 0x0 ordinal: 0x6
  UCHAR PMED3Cold : 1; // offset: 0x0 ordinal: 0x7
} _PM_SUPPORT;

// 0x4 bytes (sizeof)
typedef union PCI_HEADER_TYPE_DEPENDENT {
  struct {
    UCHAR Spare[4]; // offset: 0x0 ordinal: 0x0
  } type0;          // offset: 0x0 ordinal: 0x0
  struct {
    UCHAR PrimaryBus;              // offset: 0x0 ordinal: 0x0
    UCHAR SecondaryBus;            // offset: 0x1 ordinal: 0x1
    UCHAR SubordinateBus;          // offset: 0x2 ordinal: 0x2
    UCHAR SubtractiveDecode : 1;   // offset: 0x3 ordinal: 0x3
    UCHAR IsaBitSet : 1;           // offset: 0x3 ordinal: 0x4
    UCHAR VgaBitSet : 1;           // offset: 0x3 ordinal: 0x5
    UCHAR WeChangedBusNumbers : 1; // offset: 0x3 ordinal: 0x6
    UCHAR IsaBitRequired : 1;      // offset: 0x3 ordinal: 0x7
  } type1;                         // offset: 0x0 ordinal: 0x1
  struct {
    UCHAR PrimaryBus;              // offset: 0x0 ordinal: 0x0
    UCHAR SecondaryBus;            // offset: 0x1 ordinal: 0x1
    UCHAR SubordinateBus;          // offset: 0x2 ordinal: 0x2
    UCHAR SubtractiveDecode : 1;   // offset: 0x3 ordinal: 0x3
    UCHAR IsaBitSet : 1;           // offset: 0x3 ordinal: 0x4
    UCHAR VgaBitSet : 1;           // offset: 0x3 ordinal: 0x5
    UCHAR WeChangedBusNumbers : 1; // offset: 0x3 ordinal: 0x6
    UCHAR IsaBitRequired : 1;      // offset: 0x3 ordinal: 0x7
  } type2;                         // offset: 0x0 ordinal: 0x2
} PCI_HEADER_TYPE_DEPENDENT;

// 0x2 bytes (sizeof)
typedef struct _PCI_PMC {
  UCHAR Version : 3;                      // offset: 0x0 ordinal: 0x0
  UCHAR PMEClock : 1;                     // offset: 0x0 ordinal: 0x1
  UCHAR Rsvd1 : 1;                        // offset: 0x0 ordinal: 0x2
  UCHAR DeviceSpecificInitialization : 1; // offset: 0x0 ordinal: 0x3
  UCHAR Rsvd2 : 2;                        // offset: 0x0 ordinal: 0x4
  struct _PM_SUPPORT Support;             // offset: 0x1 ordinal: 0x5
} _PCI_PMC;

// 0x2024 bytes (sizeof)
typedef struct _KiIoAccessMap {
  UCHAR DirectionMap[32]; // offset: 0x0 ordinal: 0x0
  UCHAR IoMap[8196];      // offset: 0x20 ordinal: 0x1
} _KiIoAccessMap;

typedef UCHAR (*__anon_572)(VOID *, UCHAR);

// 0x10 bytes (sizeof)
typedef struct _CACHE_MANAGER_CALLBACKS {
  UCHAR (*AcquireForLazyWrite)(VOID *, UCHAR); // offset: 0x0 ordinal: 0x0
  VOID (*ReleaseFromLazyWrite)(VOID *);        // offset: 0x4 ordinal: 0x1
  UCHAR (*AcquireForReadAhead)(VOID *, UCHAR); // offset: 0x8 ordinal: 0x2
  VOID (*ReleaseFromReadAhead)(VOID *);        // offset: 0xc ordinal: 0x3
} _CACHE_MANAGER_CALLBACKS;

// 0x6 bytes (sizeof)
typedef struct _SID_IDENTIFIER_AUTHORITY {
  UCHAR Value[6]; // offset: 0x0 ordinal: 0x0
} _SID_IDENTIFIER_AUTHORITY;

typedef UCHAR (*__anon_319)(struct _FILE_OBJECT *, struct _MDL *,
                            struct _DEVICE_OBJECT *);

// 0xc bytes (sizeof)
typedef struct _PS_IMPERSONATION_INFORMATION {
  VOID *Token;         // offset: 0x0 ordinal: 0x0
  UCHAR CopyOnOpen;    // offset: 0x4 ordinal: 0x1
  UCHAR EffectiveOnly; // offset: 0x5 ordinal: 0x2
  enum _SECURITY_IMPERSONATION_LEVEL
      ImpersonationLevel; // offset: 0x8 ordinal: 0x3
} _PS_IMPERSONATION_INFORMATION;

typedef LONG (*__anon_132)(UCHAR);

// 0x1 bytes (sizeof)
typedef struct _flags {
  UCHAR Removable; // offset: 0x0 ordinal: 0x0
} _flags;

// 0x1 bytes (sizeof)
typedef struct _KEXECUTE_OPTIONS {
  UCHAR ExecuteDisable : 1;        // offset: 0x0 ordinal: 0x0
  UCHAR ExecuteEnable : 1;         // offset: 0x0 ordinal: 0x1
  UCHAR DisableThunkEmulation : 1; // offset: 0x0 ordinal: 0x2
  UCHAR Permanent : 1;             // offset: 0x0 ordinal: 0x3
  UCHAR ExecuteDispatchEnable : 1; // offset: 0x0 ordinal: 0x4
  UCHAR ImageDispatchEnable : 1;   // offset: 0x0 ordinal: 0x5
  UCHAR Spare : 2;                 // offset: 0x0 ordinal: 0x6
} _KEXECUTE_OPTIONS;

typedef unsigned short USHORT;

// 0x4 bytes (sizeof)
typedef struct _HEAP_FREE_ENTRY_EXTRA {
  USHORT TagIndex;           // offset: 0x0 ordinal: 0x0
  USHORT FreeBackTraceIndex; // offset: 0x2 ordinal: 0x1
} _HEAP_FREE_ENTRY_EXTRA;

// 0x8 bytes (sizeof)
typedef struct _ACL {
  UCHAR AclRevision; // offset: 0x0 ordinal: 0x0
  UCHAR Sbz1;        // offset: 0x1 ordinal: 0x1
  USHORT AclSize;    // offset: 0x2 ordinal: 0x2
  USHORT AceCount;   // offset: 0x4 ordinal: 0x3
  USHORT Sbz2;       // offset: 0x6 ordinal: 0x4
} _ACL;

// 0x14 bytes (sizeof)
typedef struct _SECURITY_DESCRIPTOR {
  UCHAR Revision;    // offset: 0x0 ordinal: 0x0
  UCHAR Sbz1;        // offset: 0x1 ordinal: 0x1
  USHORT Control;    // offset: 0x2 ordinal: 0x2
  VOID *Owner;       // offset: 0x4 ordinal: 0x3
  VOID *Group;       // offset: 0x8 ordinal: 0x4
  struct _ACL *Sacl; // offset: 0xc ordinal: 0x5
  struct _ACL *Dacl; // offset: 0x10 ordinal: 0x6
} _SECURITY_DESCRIPTOR;

// 0x40 bytes (sizeof)
typedef struct _IMAGE_DOS_HEADER {
  USHORT e_magic;    // offset: 0x0 ordinal: 0x0
  USHORT e_cblp;     // offset: 0x2 ordinal: 0x1
  USHORT e_cp;       // offset: 0x4 ordinal: 0x2
  USHORT e_crlc;     // offset: 0x6 ordinal: 0x3
  USHORT e_cparhdr;  // offset: 0x8 ordinal: 0x4
  USHORT e_minalloc; // offset: 0xa ordinal: 0x5
  USHORT e_maxalloc; // offset: 0xc ordinal: 0x6
  USHORT e_ss;       // offset: 0xe ordinal: 0x7
  USHORT e_sp;       // offset: 0x10 ordinal: 0x8
  USHORT e_csum;     // offset: 0x12 ordinal: 0x9
  USHORT e_ip;       // offset: 0x14 ordinal: 0xa
  USHORT e_cs;       // offset: 0x16 ordinal: 0xb
  USHORT e_lfarlc;   // offset: 0x18 ordinal: 0xc
  USHORT e_ovno;     // offset: 0x1a ordinal: 0xd
  USHORT e_res[4];   // offset: 0x1c ordinal: 0xe
  USHORT e_oemid;    // offset: 0x24 ordinal: 0xf
  USHORT e_oeminfo;  // offset: 0x26 ordinal: 0x10
  USHORT e_res2[10]; // offset: 0x28 ordinal: 0x11
  LONG e_lfanew;     // offset: 0x3c ordinal: 0x12
} _IMAGE_DOS_HEADER;

// 0x4 bytes (sizeof)
typedef struct _WMI_CLIENT_CONTEXT {
  UCHAR ProcessorNumber; // offset: 0x0 ordinal: 0x0
  UCHAR Alignment;       // offset: 0x1 ordinal: 0x1
  USHORT LoggerId;       // offset: 0x2 ordinal: 0x2
} _WMI_CLIENT_CONTEXT;

// 0x4 bytes (sizeof)
typedef struct _TRACE_ENABLE_FLAG_EXTENSION {
  USHORT Offset; // offset: 0x0 ordinal: 0x0
  UCHAR Length;  // offset: 0x2 ordinal: 0x1
  UCHAR Flag;    // offset: 0x3 ordinal: 0x2
} _TRACE_ENABLE_FLAG_EXTENSION;

// 0x8 bytes (sizeof)
typedef struct _INTERLOCK_SEQ {
  USHORT Depth;           // offset: 0x0 ordinal: 0x0
  USHORT FreeEntryOffset; // offset: 0x2 ordinal: 0x1
  ULONG OffsetAndDepth;   // offset: 0x0 ordinal: 0x2
  ULONG Sequence;         // offset: 0x4 ordinal: 0x3
  LONGLONG Exchg;         // offset: 0x0 ordinal: 0x4
} _INTERLOCK_SEQ;

// 0x8 bytes (sizeof)
typedef struct _HEAP_ENTRY {
  USHORT Size;          // offset: 0x0 ordinal: 0x0
  USHORT PreviousSize;  // offset: 0x2 ordinal: 0x1
  VOID *SubSegmentCode; // offset: 0x0 ordinal: 0x2
  UCHAR SmallTagIndex;  // offset: 0x4 ordinal: 0x3
  UCHAR Flags;          // offset: 0x5 ordinal: 0x4
  UCHAR UnusedBytes;    // offset: 0x6 ordinal: 0x5
  UCHAR SegmentIndex;   // offset: 0x7 ordinal: 0x6
} _HEAP_ENTRY;

// 0x10 bytes (sizeof)
typedef struct _RTL_ATOM_TABLE_ENTRY {
  struct _RTL_ATOM_TABLE_ENTRY *HashLink; // offset: 0x0 ordinal: 0x0
  USHORT HandleIndex;                     // offset: 0x4 ordinal: 0x1
  USHORT Atom;                            // offset: 0x6 ordinal: 0x2
  USHORT ReferenceCount;                  // offset: 0x8 ordinal: 0x3
  UCHAR Flags;                            // offset: 0xa ordinal: 0x4
  UCHAR NameLength;                       // offset: 0xb ordinal: 0x5
  USHORT Name[1];                         // offset: 0xc ordinal: 0x6
} _RTL_ATOM_TABLE_ENTRY;

// 0x10 bytes (sizeof)
typedef struct _INTERFACE {
  USHORT Size;                          // offset: 0x0 ordinal: 0x0
  USHORT Version;                       // offset: 0x2 ordinal: 0x1
  VOID *Context;                        // offset: 0x4 ordinal: 0x2
  VOID (*InterfaceReference)(VOID *);   // offset: 0x8 ordinal: 0x3
  VOID (*InterfaceDereference)(VOID *); // offset: 0xc ordinal: 0x4
} _INTERFACE;

typedef LONG (*__anon_1016)(VOID *, VOID *, VOID *, USHORT, USHORT,
                            struct _INTERFACE *);

// 0x8 bytes (sizeof)
typedef struct _STRING {
  USHORT Length;        // offset: 0x0 ordinal: 0x0
  USHORT MaximumLength; // offset: 0x2 ordinal: 0x1
  CHAR *Buffer;         // offset: 0x4 ordinal: 0x2
} _STRING;

// 0x8 bytes (sizeof)
typedef struct _UNICODE_STRING {
  USHORT Length;        // offset: 0x0 ordinal: 0x0
  USHORT MaximumLength; // offset: 0x2 ordinal: 0x1
  USHORT *Buffer;       // offset: 0x4 ordinal: 0x2
} _UNICODE_STRING;

// 0xc bytes (sizeof)
typedef struct _CURDIR {
  struct _UNICODE_STRING DosPath; // offset: 0x0 ordinal: 0x0
  VOID *Handle;                   // offset: 0x8 ordinal: 0x1
} _CURDIR;

// 0x8 bytes (sizeof)
typedef struct _OBJECT_NAME_INFORMATION {
  struct _UNICODE_STRING Name; // offset: 0x0 ordinal: 0x0
} _OBJECT_NAME_INFORMATION;

// 0x4 bytes (sizeof)
typedef struct _SE_AUDIT_PROCESS_CREATION_INFO {
  struct _OBJECT_NAME_INFORMATION *ImageFileName; // offset: 0x0 ordinal: 0x0
} _SE_AUDIT_PROCESS_CREATION_INFO;

// 0x8 bytes (sizeof)
typedef struct _KIDTENTRY {
  USHORT Offset;         // offset: 0x0 ordinal: 0x0
  USHORT Selector;       // offset: 0x2 ordinal: 0x1
  USHORT Access;         // offset: 0x4 ordinal: 0x2
  USHORT ExtendedOffset; // offset: 0x6 ordinal: 0x3
} _KIDTENTRY;

// 0x8 bytes (sizeof)
typedef struct _LIST_ENTRY {
  struct _LIST_ENTRY *Flink; // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY *Blink; // offset: 0x4 ordinal: 0x1
} _LIST_ENTRY;

// 0x10 bytes (sizeof)
typedef struct _OBJECT_HEADER_CREATOR_INFO {
  struct _LIST_ENTRY TypeList;  // offset: 0x0 ordinal: 0x0
  VOID *CreatorUniqueProcess;   // offset: 0x8 ordinal: 0x1
  USHORT CreatorBackTraceIndex; // offset: 0xc ordinal: 0x2
  USHORT Reserved;              // offset: 0xe ordinal: 0x3
} _OBJECT_HEADER_CREATOR_INFO;

// 0x10 bytes (sizeof)
typedef struct _HEAP_FREE_ENTRY {
  USHORT Size;                 // offset: 0x0 ordinal: 0x0
  USHORT PreviousSize;         // offset: 0x2 ordinal: 0x1
  VOID *SubSegmentCode;        // offset: 0x0 ordinal: 0x2
  UCHAR SmallTagIndex;         // offset: 0x4 ordinal: 0x3
  UCHAR Flags;                 // offset: 0x5 ordinal: 0x4
  UCHAR UnusedBytes;           // offset: 0x6 ordinal: 0x5
  UCHAR SegmentIndex;          // offset: 0x7 ordinal: 0x6
  struct _LIST_ENTRY FreeList; // offset: 0x8 ordinal: 0x7
} _HEAP_FREE_ENTRY;

// 0x10 bytes (sizeof)
typedef struct _WORK_QUEUE_ITEM {
  struct _LIST_ENTRY List;       // offset: 0x0 ordinal: 0x0
  VOID (*WorkerRoutine)(VOID *); // offset: 0x8 ordinal: 0x1
  VOID *Parameter;               // offset: 0xc ordinal: 0x2
} _WORK_QUEUE_ITEM;

// 0x18 bytes (sizeof)
typedef struct _IO_TIMER {
  SHORT Type;                   // offset: 0x0 ordinal: 0x0
  SHORT TimerFlag;              // offset: 0x2 ordinal: 0x1
  struct _LIST_ENTRY TimerList; // offset: 0x4 ordinal: 0x2
  VOID(*TimerRoutine)
  (struct _DEVICE_OBJECT *, VOID *);   // offset: 0xc ordinal: 0x3
  VOID *Context;                       // offset: 0x10 ordinal: 0x4
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x14 ordinal: 0x5
} _IO_TIMER;

// 0x10 bytes (sizeof)
typedef struct _DISPATCHER_HEADER {
  UCHAR Type;                      // offset: 0x0 ordinal: 0x0
  UCHAR Absolute;                  // offset: 0x1 ordinal: 0x1
  UCHAR Size;                      // offset: 0x2 ordinal: 0x2
  UCHAR Inserted;                  // offset: 0x3 ordinal: 0x3
  LONG SignalState;                // offset: 0x4 ordinal: 0x4
  struct _LIST_ENTRY WaitListHead; // offset: 0x8 ordinal: 0x5
} _DISPATCHER_HEADER;

// 0x10 bytes (sizeof)
typedef struct _KEVENT {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 ordinal: 0x0
} _KEVENT;

// 0x18 bytes (sizeof)
typedef struct _MMMOD_WRITER_LISTHEAD {
  struct _LIST_ENTRY ListHead; // offset: 0x0 ordinal: 0x0
  struct _KEVENT Event;        // offset: 0x8 ordinal: 0x1
} _MMMOD_WRITER_LISTHEAD;

// 0x14 bytes (sizeof)
typedef struct _CACHE_UNINITIALIZE_EVENT {
  struct _CACHE_UNINITIALIZE_EVENT *Next; // offset: 0x0 ordinal: 0x0
  struct _KEVENT Event;                   // offset: 0x4 ordinal: 0x1
} _CACHE_UNINITIALIZE_EVENT;

// 0x14 bytes (sizeof)
typedef struct _KSEMAPHORE {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 ordinal: 0x0
  LONG Limit;                       // offset: 0x10 ordinal: 0x1
} _KSEMAPHORE;

// 0x18 bytes (sizeof)
typedef struct _LPCP_NONPAGED_PORT_QUEUE {
  struct _KSEMAPHORE Semaphore;          // offset: 0x0 ordinal: 0x0
  struct _LPCP_PORT_OBJECT *BackPointer; // offset: 0x14 ordinal: 0x1
} _LPCP_NONPAGED_PORT_QUEUE;

// 0x10 bytes (sizeof)
typedef struct _LPCP_PORT_QUEUE {
  struct _LPCP_NONPAGED_PORT_QUEUE
      *NonPagedPortQueue;         // offset: 0x0 ordinal: 0x0
  struct _KSEMAPHORE *Semaphore;  // offset: 0x4 ordinal: 0x1
  struct _LIST_ENTRY ReceiveHead; // offset: 0x8 ordinal: 0x2
} _LPCP_PORT_QUEUE;

// 0x8 bytes (sizeof)
typedef struct _TEB_ACTIVE_FRAME_CONTEXT {
  ULONG Flags;     // offset: 0x0 ordinal: 0x0
  CHAR *FrameName; // offset: 0x4 ordinal: 0x1
} _TEB_ACTIVE_FRAME_CONTEXT;

// 0x44 bytes (sizeof)
typedef struct _CM_KEY_BODY {
  ULONG Type;                                    // offset: 0x0 ordinal: 0x0
  struct _CM_KEY_CONTROL_BLOCK *KeyControlBlock; // offset: 0x4 ordinal: 0x1
  struct _CM_NOTIFY_BLOCK *NotifyBlock;          // offset: 0x8 ordinal: 0x2
  VOID *ProcessID;                               // offset: 0xc ordinal: 0x3
  ULONG Callers;                                 // offset: 0x10 ordinal: 0x4
  VOID *CallerAddress[10];                       // offset: 0x14 ordinal: 0x5
  struct _LIST_ENTRY KeyBodyList;                // offset: 0x3c ordinal: 0x6
} _CM_KEY_BODY;

// 0x2c bytes (sizeof)
typedef struct _CM_NOTIFY_BLOCK {
  struct _LIST_ENTRY HiveList;                     // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY PostList;                     // offset: 0x8 ordinal: 0x1
  struct _CM_KEY_CONTROL_BLOCK *KeyControlBlock;   // offset: 0x10 ordinal: 0x2
  struct _CM_KEY_BODY *KeyBody;                    // offset: 0x14 ordinal: 0x3
  ULONG Filter : 30;                               // offset: 0x18 ordinal: 0x4
  ULONG WatchTree : 1;                             // offset: 0x18 ordinal: 0x5
  ULONG NotifyPending : 1;                         // offset: 0x18 ordinal: 0x6
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // offset: 0x1c ordinal: 0x7
} _CM_NOTIFY_BLOCK;

// 0x10 bytes (sizeof)
typedef struct _VI_POOL_ENTRY_INUSE {
  VOID *VirtualAddress; // offset: 0x0 ordinal: 0x0
  VOID *CallingAddress; // offset: 0x4 ordinal: 0x1
  ULONG NumberOfBytes;  // offset: 0x8 ordinal: 0x2
  ULONG Tag;            // offset: 0xc ordinal: 0x3
} _VI_POOL_ENTRY_INUSE;

// 0x10 bytes (sizeof)
typedef struct _VI_POOL_ENTRY {
  union {
    struct _VI_POOL_ENTRY_INUSE InUse; // offset: 0x0 ordinal: 0x0
    ULONG FreeListNext;                // offset: 0x0 ordinal: 0x1
  };
} _VI_POOL_ENTRY;

// 0x60 bytes (sizeof)
typedef struct _MI_VERIFIER_DRIVER_ENTRY {
  struct _LIST_ENTRY Links;             // offset: 0x0 ordinal: 0x0
  ULONG Loads;                          // offset: 0x8 ordinal: 0x1
  ULONG Unloads;                        // offset: 0xc ordinal: 0x2
  struct _UNICODE_STRING BaseName;      // offset: 0x10 ordinal: 0x3
  VOID *StartAddress;                   // offset: 0x18 ordinal: 0x4
  VOID *EndAddress;                     // offset: 0x1c ordinal: 0x5
  ULONG Flags;                          // offset: 0x20 ordinal: 0x6
  ULONG Signature;                      // offset: 0x24 ordinal: 0x7
  ULONG Reserved;                       // offset: 0x28 ordinal: 0x8
  ULONG VerifierPoolLock;               // offset: 0x2c ordinal: 0x9
  struct _VI_POOL_ENTRY *PoolHash;      // offset: 0x30 ordinal: 0xa
  ULONG PoolHashSize;                   // offset: 0x34 ordinal: 0xb
  ULONG PoolHashFree;                   // offset: 0x38 ordinal: 0xc
  ULONG PoolHashReserved;               // offset: 0x3c ordinal: 0xd
  ULONG CurrentPagedPoolAllocations;    // offset: 0x40 ordinal: 0xe
  ULONG CurrentNonPagedPoolAllocations; // offset: 0x44 ordinal: 0xf
  ULONG PeakPagedPoolAllocations;       // offset: 0x48 ordinal: 0x10
  ULONG PeakNonPagedPoolAllocations;    // offset: 0x4c ordinal: 0x11
  ULONG PagedBytes;                     // offset: 0x50 ordinal: 0x12
  ULONG NonPagedBytes;                  // offset: 0x54 ordinal: 0x13
  ULONG PeakPagedBytes;                 // offset: 0x58 ordinal: 0x14
  ULONG PeakNonPagedBytes;              // offset: 0x5c ordinal: 0x15
} _MI_VERIFIER_DRIVER_ENTRY;

// 0x8 bytes (sizeof)
typedef struct _MI_VERIFIER_POOL_HEADER {
  ULONG ListIndex;                            // offset: 0x0 ordinal: 0x0
  struct _MI_VERIFIER_DRIVER_ENTRY *Verifier; // offset: 0x4 ordinal: 0x1
} _MI_VERIFIER_POOL_HEADER;

// 0x4 bytes (sizeof)
typedef struct _HANDLE_TABLE_ENTRY_INFO {
  ULONG AuditMask; // offset: 0x0 ordinal: 0x0
} _HANDLE_TABLE_ENTRY_INFO;

// 0x8 bytes (sizeof)
typedef struct _HANDLE_TABLE_ENTRY {
  union {
    VOID *Object;                               // offset: 0x0 ordinal: 0x0
    ULONG ObAttributes;                         // offset: 0x0 ordinal: 0x1
    struct _HANDLE_TABLE_ENTRY_INFO *InfoTable; // offset: 0x0 ordinal: 0x2
    ULONG Value;                                // offset: 0x0 ordinal: 0x3
  };
  union {
    ULONG GrantedAccess;       // offset: 0x4 ordinal: 0x4
    USHORT GrantedAccessIndex; // offset: 0x4 ordinal: 0x5
  };
  USHORT CreatorBackTraceIndex; // offset: 0x6 ordinal: 0x6
  LONG NextFreeTableEntry;      // offset: 0x4 ordinal: 0x7
} _HANDLE_TABLE_ENTRY;

// 0x18 bytes (sizeof)
typedef struct _PORT_MESSAGE {
  union {
    struct {
      SHORT DataLength;  // offset: 0x0 ordinal: 0x0
      SHORT TotalLength; // offset: 0x2 ordinal: 0x1
    } s1;                // offset: 0x0 ordinal: 0x0
    ULONG Length;        // offset: 0x0 ordinal: 0x1
  } u1;                  // offset: 0x0 ordinal: 0x0
  union {
    struct {
      SHORT Type;           // offset: 0x0 ordinal: 0x0
      SHORT DataInfoOffset; // offset: 0x2 ordinal: 0x1
    } s2;                   // offset: 0x0 ordinal: 0x0
    ULONG ZeroInit;         // offset: 0x0 ordinal: 0x1
  } u2;                     // offset: 0x4 ordinal: 0x1
  union {
    struct _CLIENT_ID ClientId; // offset: 0x8 ordinal: 0x2
    double DoNotUseThisField;   // offset: 0x8 ordinal: 0x3
  };
  ULONG MessageId; // offset: 0x10 ordinal: 0x4
  union {
    ULONG ClientViewSize; // offset: 0x14 ordinal: 0x5
    ULONG CallbackId;     // offset: 0x14 ordinal: 0x6
  };
} _PORT_MESSAGE;

// 0x30 bytes (sizeof)
typedef struct _LPCP_MESSAGE {
  union {
    struct _LIST_ENTRY Entry;            // offset: 0x0 ordinal: 0x0
    struct _SINGLE_LIST_ENTRY FreeEntry; // offset: 0x0 ordinal: 0x1
  };
  ULONG Reserved0;                  // offset: 0x4 ordinal: 0x2
  VOID *SenderPort;                 // offset: 0x8 ordinal: 0x3
  struct _ETHREAD *RepliedToThread; // offset: 0xc ordinal: 0x4
  VOID *PortContext;                // offset: 0x10 ordinal: 0x5
  struct _PORT_MESSAGE Request;     // offset: 0x18 ordinal: 0x6
} _LPCP_MESSAGE;

typedef VOID (*__anon_1117)(ULONG);

// 0x10 bytes (sizeof)
typedef struct _PO_MEMORY_RANGE_ARRAY {
  union {
    struct {
      ULONG PageNo;    // offset: 0x0 ordinal: 0x0
      ULONG StartPage; // offset: 0x4 ordinal: 0x1
      ULONG EndPage;   // offset: 0x8 ordinal: 0x2
      ULONG CheckSum;  // offset: 0xc ordinal: 0x3
    } Range;           // offset: 0x0 ordinal: 0x0
    struct {
      struct _PO_MEMORY_RANGE_ARRAY *Next; // offset: 0x0 ordinal: 0x0
      ULONG NextTable;                     // offset: 0x4 ordinal: 0x1
      ULONG CheckSum;                      // offset: 0x8 ordinal: 0x2
      ULONG EntryCount;                    // offset: 0xc ordinal: 0x3
    } Link;                                // offset: 0x0 ordinal: 0x1
  };
} _PO_MEMORY_RANGE_ARRAY;

// 0x48 bytes (sizeof)
typedef struct _PO_NOTIFY_ORDER_LEVEL {
  struct _KEVENT LevelReady;     // offset: 0x0 ordinal: 0x0
  ULONG DeviceCount;             // offset: 0x10 ordinal: 0x1
  ULONG ActiveCount;             // offset: 0x14 ordinal: 0x2
  struct _LIST_ENTRY WaitSleep;  // offset: 0x18 ordinal: 0x3
  struct _LIST_ENTRY ReadySleep; // offset: 0x20 ordinal: 0x4
  struct _LIST_ENTRY Pending;    // offset: 0x28 ordinal: 0x5
  struct _LIST_ENTRY Complete;   // offset: 0x30 ordinal: 0x6
  struct _LIST_ENTRY ReadyS0;    // offset: 0x38 ordinal: 0x7
  struct _LIST_ENTRY WaitS0;     // offset: 0x40 ordinal: 0x8
} _PO_NOTIFY_ORDER_LEVEL;

// 0x248 bytes (sizeof)
typedef struct _PO_DEVICE_NOTIFY_ORDER {
  ULONG DevNodeSequence;                       // offset: 0x0 ordinal: 0x0
  struct _DEVICE_OBJECT **WarmEjectPdoPointer; // offset: 0x4 ordinal: 0x1
  struct _PO_NOTIFY_ORDER_LEVEL OrderLevel[8]; // offset: 0x8 ordinal: 0x2
} _PO_DEVICE_NOTIFY_ORDER;

// 0x14 bytes (sizeof)
typedef struct _POP_SHUTDOWN_BUG_CHECK {
  ULONG Code;       // offset: 0x0 ordinal: 0x0
  ULONG Parameter1; // offset: 0x4 ordinal: 0x1
  ULONG Parameter2; // offset: 0x8 ordinal: 0x2
  ULONG Parameter3; // offset: 0xc ordinal: 0x3
  ULONG Parameter4; // offset: 0x10 ordinal: 0x4
} _POP_SHUTDOWN_BUG_CHECK;

// 0x1c bytes (sizeof)
typedef struct _IMAGE_DEBUG_DIRECTORY {
  ULONG Characteristics;  // offset: 0x0 ordinal: 0x0
  ULONG TimeDateStamp;    // offset: 0x4 ordinal: 0x1
  USHORT MajorVersion;    // offset: 0x8 ordinal: 0x2
  USHORT MinorVersion;    // offset: 0xa ordinal: 0x3
  ULONG Type;             // offset: 0xc ordinal: 0x4
  ULONG SizeOfData;       // offset: 0x10 ordinal: 0x5
  ULONG AddressOfRawData; // offset: 0x14 ordinal: 0x6
  ULONG PointerToRawData; // offset: 0x18 ordinal: 0x7
} _IMAGE_DEBUG_DIRECTORY;

// 0x1c bytes (sizeof)
typedef struct _POOL_TRACKER_TABLE {
  ULONG Key;            // offset: 0x0 ordinal: 0x0
  ULONG NonPagedAllocs; // offset: 0x4 ordinal: 0x1
  ULONG NonPagedFrees;  // offset: 0x8 ordinal: 0x2
  ULONG NonPagedBytes;  // offset: 0xc ordinal: 0x3
  ULONG PagedAllocs;    // offset: 0x10 ordinal: 0x4
  ULONG PagedFrees;     // offset: 0x14 ordinal: 0x5
  ULONG PagedBytes;     // offset: 0x18 ordinal: 0x6
} _POOL_TRACKER_TABLE;

// 0xc bytes (sizeof)
typedef struct _TEB_ACTIVE_FRAME {
  ULONG Flags;                               // offset: 0x0 ordinal: 0x0
  struct _TEB_ACTIVE_FRAME *Previous;        // offset: 0x4 ordinal: 0x1
  struct _TEB_ACTIVE_FRAME_CONTEXT *Context; // offset: 0x8 ordinal: 0x2
} _TEB_ACTIVE_FRAME;

// 0x4e0 bytes (sizeof)
typedef struct _GDI_TEB_BATCH {
  ULONG Offset;      // offset: 0x0 ordinal: 0x0
  ULONG HDC;         // offset: 0x4 ordinal: 0x1
  ULONG Buffer[310]; // offset: 0x8 ordinal: 0x2
} _GDI_TEB_BATCH;

// 0x14 bytes (sizeof)
typedef struct _ACTIVATION_CONTEXT_STACK {
  ULONG Flags;                       // offset: 0x0 ordinal: 0x0
  ULONG NextCookieSequenceNumber;    // offset: 0x4 ordinal: 0x1
  VOID *ActiveFrame;                 // offset: 0x8 ordinal: 0x2
  struct _LIST_ENTRY FrameListCache; // offset: 0xc ordinal: 0x3
} _ACTIVATION_CONTEXT_STACK;

// 0xc bytes (sizeof)
typedef struct _SECURITY_TOKEN_AUDIT_DATA {
  ULONG Length;    // offset: 0x0 ordinal: 0x0
  ULONG GrantMask; // offset: 0x4 ordinal: 0x1
  ULONG DenyMask;  // offset: 0x8 ordinal: 0x2
} _SECURITY_TOKEN_AUDIT_DATA;

// 0x18 bytes (sizeof)
typedef struct _SECURITY_TOKEN_PROXY_DATA {
  ULONG Length;                    // offset: 0x0 ordinal: 0x0
  enum _PROXY_CLASS ProxyClass;    // offset: 0x4 ordinal: 0x1
  struct _UNICODE_STRING PathInfo; // offset: 0x8 ordinal: 0x2
  ULONG ContainerMask;             // offset: 0x10 ordinal: 0x3
  ULONG ObjectMask;                // offset: 0x14 ordinal: 0x4
} _SECURITY_TOKEN_PROXY_DATA;

// 0x8 bytes (sizeof)
typedef struct _SEP_AUDIT_POLICY_CATEGORIES {
  ULONG System : 4;                 // offset: 0x0 ordinal: 0x0
  ULONG Logon : 4;                  // offset: 0x0 ordinal: 0x1
  ULONG ObjectAccess : 4;           // offset: 0x0 ordinal: 0x2
  ULONG PrivilegeUse : 4;           // offset: 0x0 ordinal: 0x3
  ULONG DetailedTracking : 4;       // offset: 0x0 ordinal: 0x4
  ULONG PolicyChange : 4;           // offset: 0x0 ordinal: 0x5
  ULONG AccountManagement : 4;      // offset: 0x0 ordinal: 0x6
  ULONG DirectoryServiceAccess : 4; // offset: 0x0 ordinal: 0x7
  ULONG AccountLogon : 4;           // offset: 0x4 ordinal: 0x8
} _SEP_AUDIT_POLICY_CATEGORIES;

// 0xc bytes (sizeof)
typedef struct _KSYSTEM_TIME {
  ULONG LowPart;  // offset: 0x0 ordinal: 0x0
  LONG High1Time; // offset: 0x4 ordinal: 0x1
  LONG High2Time; // offset: 0x8 ordinal: 0x2
} _KSYSTEM_TIME;

// 0x8 bytes (sizeof)
typedef struct BATTERY_REPORTING_SCALE {
  ULONG Granularity; // offset: 0x0 ordinal: 0x0
  ULONG Capacity;    // offset: 0x4 ordinal: 0x1
} BATTERY_REPORTING_SCALE;

// 0x4c bytes (sizeof)
typedef struct SYSTEM_POWER_CAPABILITIES {
  UCHAR PowerButtonPresent;                       // offset: 0x0 ordinal: 0x0
  UCHAR SleepButtonPresent;                       // offset: 0x1 ordinal: 0x1
  UCHAR LidPresent;                               // offset: 0x2 ordinal: 0x2
  UCHAR SystemS1;                                 // offset: 0x3 ordinal: 0x3
  UCHAR SystemS2;                                 // offset: 0x4 ordinal: 0x4
  UCHAR SystemS3;                                 // offset: 0x5 ordinal: 0x5
  UCHAR SystemS4;                                 // offset: 0x6 ordinal: 0x6
  UCHAR SystemS5;                                 // offset: 0x7 ordinal: 0x7
  UCHAR HiberFilePresent;                         // offset: 0x8 ordinal: 0x8
  UCHAR FullWake;                                 // offset: 0x9 ordinal: 0x9
  UCHAR VideoDimPresent;                          // offset: 0xa ordinal: 0xa
  UCHAR ApmPresent;                               // offset: 0xb ordinal: 0xb
  UCHAR UpsPresent;                               // offset: 0xc ordinal: 0xc
  UCHAR ThermalControl;                           // offset: 0xd ordinal: 0xd
  UCHAR ProcessorThrottle;                        // offset: 0xe ordinal: 0xe
  UCHAR ProcessorMinThrottle;                     // offset: 0xf ordinal: 0xf
  UCHAR ProcessorMaxThrottle;                     // offset: 0x10 ordinal: 0x10
  UCHAR spare2[4];                                // offset: 0x11 ordinal: 0x11
  UCHAR DiskSpinDown;                             // offset: 0x15 ordinal: 0x12
  UCHAR spare3[8];                                // offset: 0x16 ordinal: 0x13
  UCHAR SystemBatteriesPresent;                   // offset: 0x1e ordinal: 0x14
  UCHAR BatteriesAreShortTerm;                    // offset: 0x1f ordinal: 0x15
  struct BATTERY_REPORTING_SCALE BatteryScale[3]; // offset: 0x20 ordinal: 0x16
  enum _SYSTEM_POWER_STATE AcOnLineWake;          // offset: 0x38 ordinal: 0x17
  enum _SYSTEM_POWER_STATE SoftLidWake;           // offset: 0x3c ordinal: 0x18
  enum _SYSTEM_POWER_STATE RtcWake;               // offset: 0x40 ordinal: 0x19
  enum _SYSTEM_POWER_STATE MinDeviceWakeState;    // offset: 0x44 ordinal: 0x1a
  enum _SYSTEM_POWER_STATE DefaultLowLatencyWake; // offset: 0x48 ordinal: 0x1b
} SYSTEM_POWER_CAPABILITIES;

// 0x204 bytes (sizeof)
typedef struct _CALL_PERFORMANCE_DATA {
  ULONG SpinLock;                   // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY HashTable[64]; // offset: 0x4 ordinal: 0x1
} _CALL_PERFORMANCE_DATA;

// 0x44 bytes (sizeof)
typedef struct _PI_BUS_EXTENSION {
  ULONG Flags;                                // offset: 0x0 ordinal: 0x0
  ULONG NumberCSNs;                           // offset: 0x4 ordinal: 0x1
  UCHAR *ReadDataPort;                        // offset: 0x8 ordinal: 0x2
  UCHAR DataPortMapped;                       // offset: 0xc ordinal: 0x3
  UCHAR *AddressPort;                         // offset: 0x10 ordinal: 0x4
  UCHAR AddrPortMapped;                       // offset: 0x14 ordinal: 0x5
  UCHAR *CommandPort;                         // offset: 0x18 ordinal: 0x6
  UCHAR CmdPortMapped;                        // offset: 0x1c ordinal: 0x7
  ULONG NextSlotNumber;                       // offset: 0x20 ordinal: 0x8
  struct _SINGLE_LIST_ENTRY DeviceList;       // offset: 0x24 ordinal: 0x9
  struct _SINGLE_LIST_ENTRY CardList;         // offset: 0x28 ordinal: 0xa
  struct _DEVICE_OBJECT *PhysicalBusDevice;   // offset: 0x2c ordinal: 0xb
  struct _DEVICE_OBJECT *FunctionalBusDevice; // offset: 0x30 ordinal: 0xc
  struct _DEVICE_OBJECT *AttachedDevice;      // offset: 0x34 ordinal: 0xd
  ULONG BusNumber;                            // offset: 0x38 ordinal: 0xe
  enum _SYSTEM_POWER_STATE SystemPowerState;  // offset: 0x3c ordinal: 0xf
  enum _DEVICE_POWER_STATE DevicePowerState;  // offset: 0x40 ordinal: 0x10
} _PI_BUS_EXTENSION;

// 0x8 bytes (sizeof)
typedef struct _BUS_EXTENSION_LIST {
  VOID *Next;                             // offset: 0x0 ordinal: 0x0
  struct _PI_BUS_EXTENSION *BusExtension; // offset: 0x4 ordinal: 0x1
} _BUS_EXTENSION_LIST;

// 0x14 bytes (sizeof)
typedef struct _RTL_RANGE_LIST {
  struct _LIST_ENTRY ListHead; // offset: 0x0 ordinal: 0x0
  ULONG Flags;                 // offset: 0x8 ordinal: 0x1
  ULONG Count;                 // offset: 0xc ordinal: 0x2
  ULONG Stamp;                 // offset: 0x10 ordinal: 0x3
} _RTL_RANGE_LIST;

// 0x10 bytes (sizeof)
typedef struct _MMPFNLIST {
  ULONG Total;            // offset: 0x0 ordinal: 0x0
  enum _MMLISTS ListName; // offset: 0x4 ordinal: 0x1
  ULONG Flink;            // offset: 0x8 ordinal: 0x2
  ULONG Blink;            // offset: 0xc ordinal: 0x3
} _MMPFNLIST;

// 0x28 bytes (sizeof)
typedef struct _IMAGE_SECTION_HEADER {
  UCHAR Name[8]; // offset: 0x0 ordinal: 0x0
  union {
    ULONG PhysicalAddress;    // offset: 0x0 ordinal: 0x0
    ULONG VirtualSize;        // offset: 0x0 ordinal: 0x1
  } Misc;                     // offset: 0x8 ordinal: 0x1
  ULONG VirtualAddress;       // offset: 0xc ordinal: 0x2
  ULONG SizeOfRawData;        // offset: 0x10 ordinal: 0x3
  ULONG PointerToRawData;     // offset: 0x14 ordinal: 0x4
  ULONG PointerToRelocations; // offset: 0x18 ordinal: 0x5
  ULONG PointerToLinenumbers; // offset: 0x1c ordinal: 0x6
  USHORT NumberOfRelocations; // offset: 0x20 ordinal: 0x7
  USHORT NumberOfLinenumbers; // offset: 0x22 ordinal: 0x8
  ULONG Characteristics;      // offset: 0x24 ordinal: 0x9
} _IMAGE_SECTION_HEADER;

// 0xc bytes (sizeof)
typedef struct _SYSPTES_HEADER {
  struct _LIST_ENTRY ListHead; // offset: 0x0 ordinal: 0x0
  ULONG Count;                 // offset: 0x8 ordinal: 0x1
} _SYSPTES_HEADER;

// 0x4 bytes (sizeof)
typedef struct _HEAP_STOP_ON_TAG {
  union {
    ULONG HeapAndTagIndex; // offset: 0x0 ordinal: 0x0
    USHORT TagIndex;       // offset: 0x0 ordinal: 0x1
  };
  USHORT HeapIndex; // offset: 0x2 ordinal: 0x2
} _HEAP_STOP_ON_TAG;

// 0x18 bytes (sizeof)
typedef struct _HEAP_STOP_ON_VALUES {
  ULONG AllocAddress;                  // offset: 0x0 ordinal: 0x0
  struct _HEAP_STOP_ON_TAG AllocTag;   // offset: 0x4 ordinal: 0x1
  ULONG ReAllocAddress;                // offset: 0x8 ordinal: 0x2
  struct _HEAP_STOP_ON_TAG ReAllocTag; // offset: 0xc ordinal: 0x3
  ULONG FreeAddress;                   // offset: 0x10 ordinal: 0x4
  struct _HEAP_STOP_ON_TAG FreeTag;    // offset: 0x14 ordinal: 0x5
} _HEAP_STOP_ON_VALUES;

// 0x20 bytes (sizeof)
typedef struct _SUPPORTED_RANGE {
  struct _SUPPORTED_RANGE *Next; // offset: 0x0 ordinal: 0x0
  ULONG SystemAddressSpace;      // offset: 0x4 ordinal: 0x1
  LONGLONG SystemBase;           // offset: 0x8 ordinal: 0x2
  LONGLONG Base;                 // offset: 0x10 ordinal: 0x3
  LONGLONG Limit;                // offset: 0x18 ordinal: 0x4
} _SUPPORTED_RANGE;

// 0x30 bytes (sizeof)
typedef struct _PCI_HEADER_TYPE_2 {
  ULONG SocketRegistersBaseAddress; // offset: 0x0 ordinal: 0x0
  UCHAR CapabilitiesPtr;            // offset: 0x4 ordinal: 0x1
  UCHAR Reserved;                   // offset: 0x5 ordinal: 0x2
  USHORT SecondaryStatus;           // offset: 0x6 ordinal: 0x3
  UCHAR PrimaryBus;                 // offset: 0x8 ordinal: 0x4
  UCHAR SecondaryBus;               // offset: 0x9 ordinal: 0x5
  UCHAR SubordinateBus;             // offset: 0xa ordinal: 0x6
  UCHAR SecondaryLatency;           // offset: 0xb ordinal: 0x7
  struct {
    ULONG Base;         // offset: 0x0 ordinal: 0x0
    ULONG Limit;        // offset: 0x4 ordinal: 0x1
  } Range[4];           // offset: 0xc ordinal: 0x8
  UCHAR InterruptLine;  // offset: 0x2c ordinal: 0x9
  UCHAR InterruptPin;   // offset: 0x2d ordinal: 0xa
  USHORT BridgeControl; // offset: 0x2e ordinal: 0xb
} _PCI_HEADER_TYPE_2;

typedef ULONG (*__anon_906)(struct _BUS_HANDLER *, struct _BUS_HANDLER *, ULONG,
                            VOID *, ULONG, ULONG);

// 0xa0 bytes (sizeof)
typedef struct _SUPPORTED_RANGES {
  USHORT Version;                         // offset: 0x0 ordinal: 0x0
  UCHAR Sorted;                           // offset: 0x2 ordinal: 0x1
  UCHAR Reserved;                         // offset: 0x3 ordinal: 0x2
  ULONG NoIO;                             // offset: 0x4 ordinal: 0x3
  struct _SUPPORTED_RANGE IO;             // offset: 0x8 ordinal: 0x4
  ULONG NoMemory;                         // offset: 0x28 ordinal: 0x5
  struct _SUPPORTED_RANGE Memory;         // offset: 0x30 ordinal: 0x6
  ULONG NoPrefetchMemory;                 // offset: 0x50 ordinal: 0x7
  struct _SUPPORTED_RANGE PrefetchMemory; // offset: 0x58 ordinal: 0x8
  ULONG NoDma;                            // offset: 0x78 ordinal: 0x9
  struct _SUPPORTED_RANGE Dma;            // offset: 0x80 ordinal: 0xa
} _SUPPORTED_RANGES;

typedef ULONG (*__anon_902)(VOID *, UCHAR, ULONG, VOID *, ULONG, ULONG);

// 0x4 bytes (sizeof)
typedef struct _PCI_SLOT_NUMBER {
  union {
    struct {
      ULONG DeviceNumber : 5;   // offset: 0x0 ordinal: 0x0
      ULONG FunctionNumber : 3; // offset: 0x0 ordinal: 0x1
      ULONG Reserved : 24;      // offset: 0x0 ordinal: 0x2
    } bits;                     // offset: 0x0 ordinal: 0x0
    ULONG AsULONG;              // offset: 0x0 ordinal: 0x1
  } u;                          // offset: 0x0 ordinal: 0x0
} _PCI_SLOT_NUMBER;

// 0x8 bytes (sizeof)
typedef struct _PCI_LOCK {
  ULONG Atom;    // offset: 0x0 ordinal: 0x0
  UCHAR OldIrql; // offset: 0x4 ordinal: 0x1
} _PCI_LOCK;

// 0xc bytes (sizeof)
typedef struct _POOL_TRACKER_BIG_PAGES {
  VOID *Va;            // offset: 0x0 ordinal: 0x0
  ULONG Key;           // offset: 0x4 ordinal: 0x1
  ULONG NumberOfPages; // offset: 0x8 ordinal: 0x2
} _POOL_TRACKER_BIG_PAGES;

typedef VOID (*__anon_849)(ULONG, ULONG, VOID *);

// 0x8 bytes (sizeof)
typedef struct _MMADDRESS_LIST {
  ULONG StartVpn; // offset: 0x0 ordinal: 0x0
  ULONG EndVpn;   // offset: 0x4 ordinal: 0x1
} _MMADDRESS_LIST;

// 0x4 bytes (sizeof)
typedef struct _MMVAD_FLAGS {
  ULONG CommitCharge : 19;     // offset: 0x0 ordinal: 0x0
  ULONG PhysicalMapping : 1;   // offset: 0x0 ordinal: 0x1
  ULONG ImageMap : 1;          // offset: 0x0 ordinal: 0x2
  ULONG UserPhysicalPages : 1; // offset: 0x0 ordinal: 0x3
  ULONG NoChange : 1;          // offset: 0x0 ordinal: 0x4
  ULONG WriteWatch : 1;        // offset: 0x0 ordinal: 0x5
  ULONG Protection : 5;        // offset: 0x0 ordinal: 0x6
  ULONG LargePages : 1;        // offset: 0x0 ordinal: 0x7
  ULONG MemCommit : 1;         // offset: 0x0 ordinal: 0x8
  ULONG PrivateMemory : 1;     // offset: 0x0 ordinal: 0x9
} _MMVAD_FLAGS;

// 0x18 bytes (sizeof)
typedef struct _MMVAD_SHORT {
  ULONG StartingVpn;         // offset: 0x0 ordinal: 0x0
  ULONG EndingVpn;           // offset: 0x4 ordinal: 0x1
  struct _MMVAD *Parent;     // offset: 0x8 ordinal: 0x2
  struct _MMVAD *LeftChild;  // offset: 0xc ordinal: 0x3
  struct _MMVAD *RightChild; // offset: 0x10 ordinal: 0x4
  union {
    ULONG LongFlags;              // offset: 0x0 ordinal: 0x0
    struct _MMVAD_FLAGS VadFlags; // offset: 0x0 ordinal: 0x1
  } u;                            // offset: 0x14 ordinal: 0x5
} _MMVAD_SHORT;

// 0x14 bytes (sizeof)
typedef struct _MMFREE_POOL_ENTRY {
  struct _LIST_ENTRY List;          // offset: 0x0 ordinal: 0x0
  ULONG Size;                       // offset: 0x8 ordinal: 0x1
  ULONG Signature;                  // offset: 0xc ordinal: 0x2
  struct _MMFREE_POOL_ENTRY *Owner; // offset: 0x10 ordinal: 0x3
} _MMFREE_POOL_ENTRY;

// 0x4 bytes (sizeof)
typedef struct _RTL_HANDLE_TABLE_ENTRY {
  union {
    ULONG Flags;                              // offset: 0x0 ordinal: 0x0
    struct _RTL_HANDLE_TABLE_ENTRY *NextFree; // offset: 0x0 ordinal: 0x1
  };
} _RTL_HANDLE_TABLE_ENTRY;

// 0x14 bytes (sizeof)
typedef struct _PROCESSOR_POWER_POLICY_INFO {
  ULONG TimeCheck;          // offset: 0x0 ordinal: 0x0
  ULONG DemoteLimit;        // offset: 0x4 ordinal: 0x1
  ULONG PromoteLimit;       // offset: 0x8 ordinal: 0x2
  UCHAR DemotePercent;      // offset: 0xc ordinal: 0x3
  UCHAR PromotePercent;     // offset: 0xd ordinal: 0x4
  UCHAR Spare[2];           // offset: 0xe ordinal: 0x5
  ULONG AllowDemotion : 1;  // offset: 0x10 ordinal: 0x6
  ULONG AllowPromotion : 1; // offset: 0x10 ordinal: 0x7
  ULONG Reserved : 30;      // offset: 0x10 ordinal: 0x8
} _PROCESSOR_POWER_POLICY_INFO;

// 0x4c bytes (sizeof)
typedef struct _PROCESSOR_POWER_POLICY {
  ULONG Revision;                                // offset: 0x0 ordinal: 0x0
  UCHAR DynamicThrottle;                         // offset: 0x4 ordinal: 0x1
  UCHAR Spare[3];                                // offset: 0x5 ordinal: 0x2
  ULONG DisableCStates : 1;                      // offset: 0x8 ordinal: 0x3
  ULONG Reserved : 31;                           // offset: 0x8 ordinal: 0x4
  ULONG PolicyCount;                             // offset: 0xc ordinal: 0x5
  struct _PROCESSOR_POWER_POLICY_INFO Policy[3]; // offset: 0x10 ordinal: 0x6
} _PROCESSOR_POWER_POLICY;

// 0xc bytes (sizeof)
typedef struct _POP_ACTION_TRIGGER {
  enum POP_POLICY_DEVICE_TYPE Type; // offset: 0x0 ordinal: 0x0
  UCHAR Flags;                      // offset: 0x4 ordinal: 0x1
  UCHAR Spare[3];                   // offset: 0x5 ordinal: 0x2
  union {
    struct {
      ULONG Level;                  // offset: 0x0 ordinal: 0x0
    } Battery;                      // offset: 0x8 ordinal: 0x3
    struct _POP_TRIGGER_WAIT *Wait; // offset: 0x8 ordinal: 0x4
  };
} _POP_ACTION_TRIGGER;

// 0x20 bytes (sizeof)
typedef struct _POP_TRIGGER_WAIT {
  struct _KEVENT Event;                // offset: 0x0 ordinal: 0x0
  LONG Status;                         // offset: 0x10 ordinal: 0x1
  struct _LIST_ENTRY Link;             // offset: 0x14 ordinal: 0x2
  struct _POP_ACTION_TRIGGER *Trigger; // offset: 0x1c ordinal: 0x3
} _POP_TRIGGER_WAIT;

// 0xc bytes (sizeof)
typedef struct POWER_ACTION_POLICY {
  enum POWER_ACTION Action; // offset: 0x0 ordinal: 0x0
  ULONG Flags;              // offset: 0x4 ordinal: 0x1
  ULONG EventCode;          // offset: 0x8 ordinal: 0x2
} POWER_ACTION_POLICY;

// 0x18 bytes (sizeof)
typedef struct SYSTEM_POWER_LEVEL {
  UCHAR Enable;                            // offset: 0x0 ordinal: 0x0
  UCHAR Spare[3];                          // offset: 0x1 ordinal: 0x1
  ULONG BatteryLevel;                      // offset: 0x4 ordinal: 0x2
  struct POWER_ACTION_POLICY PowerPolicy;  // offset: 0x8 ordinal: 0x3
  enum _SYSTEM_POWER_STATE MinSystemState; // offset: 0x14 ordinal: 0x4
} SYSTEM_POWER_LEVEL;

// 0x8 bytes (sizeof)
typedef struct _MMVIEW {
  ULONG Entry;                       // offset: 0x0 ordinal: 0x0
  struct _CONTROL_AREA *ControlArea; // offset: 0x4 ordinal: 0x1
} _MMVIEW;

// 0x1028 bytes (sizeof)
typedef struct _POOL_DESCRIPTOR {
  enum _POOL_TYPE PoolType;          // offset: 0x0 ordinal: 0x0
  ULONG PoolIndex;                   // offset: 0x4 ordinal: 0x1
  ULONG RunningAllocs;               // offset: 0x8 ordinal: 0x2
  ULONG RunningDeAllocs;             // offset: 0xc ordinal: 0x3
  ULONG TotalPages;                  // offset: 0x10 ordinal: 0x4
  ULONG TotalBigPages;               // offset: 0x14 ordinal: 0x5
  ULONG Threshold;                   // offset: 0x18 ordinal: 0x6
  VOID *LockAddress;                 // offset: 0x1c ordinal: 0x7
  VOID *PendingFrees;                // offset: 0x20 ordinal: 0x8
  LONG PendingFreeDepth;             // offset: 0x24 ordinal: 0x9
  struct _LIST_ENTRY ListHeads[512]; // offset: 0x28 ordinal: 0xa
} _POOL_DESCRIPTOR;

// 0x4 bytes (sizeof)
typedef struct _MM_SESSION_SPACE_FLAGS {
  ULONG Initialized : 1;   // offset: 0x0 ordinal: 0x0
  ULONG Filler0 : 3;       // offset: 0x0 ordinal: 0x1
  ULONG HasWsLock : 1;     // offset: 0x0 ordinal: 0x2
  ULONG DeletePending : 1; // offset: 0x0 ordinal: 0x3
  ULONG Filler : 26;       // offset: 0x0 ordinal: 0x4
} _MM_SESSION_SPACE_FLAGS;

// 0x4 bytes (sizeof)
typedef struct _MMPFNENTRY {
  ULONG Modified : 1;         // offset: 0x0 ordinal: 0x0
  ULONG ReadInProgress : 1;   // offset: 0x0 ordinal: 0x1
  ULONG WriteInProgress : 1;  // offset: 0x0 ordinal: 0x2
  ULONG PrototypePte : 1;     // offset: 0x0 ordinal: 0x3
  ULONG PageColor : 3;        // offset: 0x0 ordinal: 0x4
  ULONG ParityError : 1;      // offset: 0x0 ordinal: 0x5
  ULONG PageLocation : 3;     // offset: 0x0 ordinal: 0x6
  ULONG RemovalRequested : 1; // offset: 0x0 ordinal: 0x7
  ULONG CacheAttribute : 2;   // offset: 0x0 ordinal: 0x8
  ULONG Rom : 1;              // offset: 0x0 ordinal: 0x9
  ULONG LockCharged : 1;      // offset: 0x0 ordinal: 0xa
  ULONG DontUse : 16;         // offset: 0x0 ordinal: 0xb
} _MMPFNENTRY;

// 0x8 bytes (sizeof)
typedef struct _PHYSICAL_MEMORY_RUN {
  ULONG BasePage;  // offset: 0x0 ordinal: 0x0
  ULONG PageCount; // offset: 0x4 ordinal: 0x1
} _PHYSICAL_MEMORY_RUN;

// 0x10 bytes (sizeof)
typedef struct _PHYSICAL_MEMORY_DESCRIPTOR {
  ULONG NumberOfRuns;                 // offset: 0x0 ordinal: 0x0
  ULONG NumberOfPages;                // offset: 0x4 ordinal: 0x1
  struct _PHYSICAL_MEMORY_RUN Run[1]; // offset: 0x8 ordinal: 0x2
} _PHYSICAL_MEMORY_DESCRIPTOR;

// 0xc bytes (sizeof)
typedef struct _MMCOLOR_TABLES {
  ULONG Flink; // offset: 0x0 ordinal: 0x0
  VOID *Blink; // offset: 0x4 ordinal: 0x1
  ULONG Count; // offset: 0x8 ordinal: 0x2
} _MMCOLOR_TABLES;

// 0x1c bytes (sizeof)
typedef struct _NT_TIB {
  struct _EXCEPTION_REGISTRATION_RECORD
      *ExceptionList; // offset: 0x0 ordinal: 0x0
  VOID *StackBase;    // offset: 0x4 ordinal: 0x1
  VOID *StackLimit;   // offset: 0x8 ordinal: 0x2
  VOID *SubSystemTib; // offset: 0xc ordinal: 0x3
  union {
    VOID *FiberData; // offset: 0x10 ordinal: 0x4
    ULONG Version;   // offset: 0x10 ordinal: 0x5
  };
  VOID *ArbitraryUserPointer; // offset: 0x14 ordinal: 0x6
  struct _NT_TIB *Self;       // offset: 0x18 ordinal: 0x7
} _NT_TIB;

// 0x28 bytes (sizeof)
typedef struct _PO_DEVICE_NOTIFY {
  struct _LIST_ENTRY Link;             // offset: 0x0 ordinal: 0x0
  struct _DEVICE_OBJECT *TargetDevice; // offset: 0x8 ordinal: 0x1
  UCHAR WakeNeeded;                    // offset: 0xc ordinal: 0x2
  UCHAR OrderLevel;                    // offset: 0xd ordinal: 0x3
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x10 ordinal: 0x4
  VOID *Node;                          // offset: 0x14 ordinal: 0x5
  USHORT *DeviceName;                  // offset: 0x18 ordinal: 0x6
  USHORT *DriverName;                  // offset: 0x1c ordinal: 0x7
  ULONG ChildCount;                    // offset: 0x20 ordinal: 0x8
  ULONG ActiveChild;                   // offset: 0x24 ordinal: 0x9
} _PO_DEVICE_NOTIFY;

// 0x8 bytes (sizeof)
typedef struct _DEVICE_RELATIONS {
  ULONG Count;                       // offset: 0x0 ordinal: 0x0
  struct _DEVICE_OBJECT *Objects[1]; // offset: 0x4 ordinal: 0x1
} _DEVICE_RELATIONS;

// 0x8 bytes (sizeof)
typedef struct _CM_KEY_REFERENCE {
  ULONG KeyCell;          // offset: 0x0 ordinal: 0x0
  struct _HHIVE *KeyHive; // offset: 0x4 ordinal: 0x1
} _CM_KEY_REFERENCE;

// 0x8 bytes (sizeof)
typedef struct _CHILD_LIST {
  ULONG Count; // offset: 0x0 ordinal: 0x0
  ULONG List;  // offset: 0x4 ordinal: 0x1
} _CHILD_LIST;

// 0x8 bytes (sizeof)
typedef struct _CM_BIG_DATA {
  USHORT Signature; // offset: 0x0 ordinal: 0x0
  USHORT Count;     // offset: 0x2 ordinal: 0x1
  ULONG List;       // offset: 0x4 ordinal: 0x2
} _CM_BIG_DATA;

// 0x18 bytes (sizeof)
typedef struct _CM_KEY_VALUE {
  USHORT Signature;  // offset: 0x0 ordinal: 0x0
  USHORT NameLength; // offset: 0x2 ordinal: 0x1
  ULONG DataLength;  // offset: 0x4 ordinal: 0x2
  ULONG Data;        // offset: 0x8 ordinal: 0x3
  ULONG Type;        // offset: 0xc ordinal: 0x4
  USHORT Flags;      // offset: 0x10 ordinal: 0x5
  USHORT Spare;      // offset: 0x12 ordinal: 0x6
  USHORT Name[1];    // offset: 0x14 ordinal: 0x7
} _CM_KEY_VALUE;

// 0xc bytes (sizeof)
typedef struct _CM_NAME_HASH {
  ULONG ConvKey;                  // offset: 0x0 ordinal: 0x0
  struct _CM_NAME_HASH *NextHash; // offset: 0x4 ordinal: 0x1
  USHORT NameLength;              // offset: 0x8 ordinal: 0x2
  USHORT Name[1];                 // offset: 0xa ordinal: 0x3
} _CM_NAME_HASH;

// 0x14 bytes (sizeof)
typedef struct _SECURITY_DESCRIPTOR_RELATIVE {
  UCHAR Revision; // offset: 0x0 ordinal: 0x0
  UCHAR Sbz1;     // offset: 0x1 ordinal: 0x1
  USHORT Control; // offset: 0x2 ordinal: 0x2
  ULONG Owner;    // offset: 0x4 ordinal: 0x3
  ULONG Group;    // offset: 0x8 ordinal: 0x4
  ULONG Sacl;     // offset: 0xc ordinal: 0x5
  ULONG Dacl;     // offset: 0x10 ordinal: 0x6
} _SECURITY_DESCRIPTOR_RELATIVE;

// 0x28 bytes (sizeof)
typedef struct _CM_KEY_SECURITY {
  USHORT Signature;                                // offset: 0x0 ordinal: 0x0
  USHORT Reserved;                                 // offset: 0x2 ordinal: 0x1
  ULONG Flink;                                     // offset: 0x4 ordinal: 0x2
  ULONG Blink;                                     // offset: 0x8 ordinal: 0x3
  ULONG ReferenceCount;                            // offset: 0xc ordinal: 0x4
  ULONG DescriptorLength;                          // offset: 0x10 ordinal: 0x5
  struct _SECURITY_DESCRIPTOR_RELATIVE Descriptor; // offset: 0x14 ordinal: 0x6
} _CM_KEY_SECURITY;

// 0xc bytes (sizeof)
typedef struct CMP_OFFSET_ARRAY {
  ULONG FileOffset; // offset: 0x0 ordinal: 0x0
  VOID *DataBuffer; // offset: 0x4 ordinal: 0x1
  ULONG DataLength; // offset: 0x8 ordinal: 0x2
} CMP_OFFSET_ARRAY;

// 0x10 bytes (sizeof)
typedef struct _CM_NAME_CONTROL_BLOCK {
  UCHAR Compressed; // offset: 0x0 ordinal: 0x0
  USHORT RefCount;  // offset: 0x2 ordinal: 0x1
  union {
    struct _CM_NAME_HASH NameHash; // offset: 0x4 ordinal: 0x2
    ULONG ConvKey;                 // offset: 0x4 ordinal: 0x3
  };
  struct _CM_KEY_HASH *NextHash; // offset: 0x8 ordinal: 0x4
  USHORT NameLength;             // offset: 0xc ordinal: 0x5
  USHORT Name[1];                // offset: 0xe ordinal: 0x6
} _CM_NAME_CONTROL_BLOCK;

// 0x28 bytes (sizeof)
typedef struct _CM_KEY_SECURITY_CACHE {
  ULONG Cell;                                      // offset: 0x0 ordinal: 0x0
  ULONG ConvKey;                                   // offset: 0x4 ordinal: 0x1
  struct _LIST_ENTRY List;                         // offset: 0x8 ordinal: 0x2
  ULONG DescriptorLength;                          // offset: 0x10 ordinal: 0x3
  struct _SECURITY_DESCRIPTOR_RELATIVE Descriptor; // offset: 0x14 ordinal: 0x4
} _CM_KEY_SECURITY_CACHE;

// 0x8 bytes (sizeof)
typedef struct _CACHED_CHILD_LIST {
  ULONG Count; // offset: 0x0 ordinal: 0x0
  union {
    ULONG ValueList;                       // offset: 0x4 ordinal: 0x1
    struct _CM_KEY_CONTROL_BLOCK *RealKcb; // offset: 0x4 ordinal: 0x2
  };
} _CACHED_CHILD_LIST;

// 0x10 bytes (sizeof)
typedef struct _CM_KEY_HASH {
  ULONG ConvKey;                 // offset: 0x0 ordinal: 0x0
  struct _CM_KEY_HASH *NextHash; // offset: 0x4 ordinal: 0x1
  struct _HHIVE *KeyHive;        // offset: 0x8 ordinal: 0x2
  ULONG KeyCell;                 // offset: 0xc ordinal: 0x3
} _CM_KEY_HASH;

typedef UCHAR (*__anon_713)(struct _HHIVE *, ULONG, ULONG, ULONG);

typedef VOID (*__anon_712)(VOID *, ULONG);

typedef VOID *(*__anon_711)(ULONG, UCHAR, ULONG);

typedef VOID (*__anon_710)(struct _HHIVE *, ULONG);

// 0x8 bytes (sizeof)
typedef struct _CM_CELL_REMAP_BLOCK {
  ULONG OldCell; // offset: 0x0 ordinal: 0x0
  ULONG NewCell; // offset: 0x4 ordinal: 0x1
} _CM_CELL_REMAP_BLOCK;

// 0x8 bytes (sizeof)
typedef struct _CM_KEY_SECURITY_CACHE_ENTRY {
  ULONG Cell;                                    // offset: 0x0 ordinal: 0x0
  struct _CM_KEY_SECURITY_CACHE *CachedSecurity; // offset: 0x4 ordinal: 0x1
} _CM_KEY_SECURITY_CACHE_ENTRY;

// 0x28 bytes (sizeof)
typedef struct _DEFERRED_WRITE {
  SHORT NodeTypeCode;                    // offset: 0x0 ordinal: 0x0
  SHORT NodeByteSize;                    // offset: 0x2 ordinal: 0x1
  struct _FILE_OBJECT *FileObject;       // offset: 0x4 ordinal: 0x2
  ULONG BytesToWrite;                    // offset: 0x8 ordinal: 0x3
  struct _LIST_ENTRY DeferredWriteLinks; // offset: 0xc ordinal: 0x4
  struct _KEVENT *Event;                 // offset: 0x14 ordinal: 0x5
  VOID (*PostRoutine)(VOID *, VOID *);   // offset: 0x18 ordinal: 0x6
  VOID *Context1;                        // offset: 0x1c ordinal: 0x7
  VOID *Context2;                        // offset: 0x20 ordinal: 0x8
  UCHAR LimitModifiedPages;              // offset: 0x24 ordinal: 0x9
} _DEFERRED_WRITE;

// 0x14 bytes (sizeof)
typedef struct _CALL_HASH_ENTRY {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 ordinal: 0x0
  VOID *CallersAddress;         // offset: 0x8 ordinal: 0x1
  VOID *CallersCaller;          // offset: 0xc ordinal: 0x2
  ULONG CallCount;              // offset: 0x10 ordinal: 0x3
} _CALL_HASH_ENTRY;

// 0x4 bytes (sizeof)
typedef union EX_QUEUE_WORKER_INFO {
  ULONG QueueDisabled : 1;          // offset: 0x0 ordinal: 0x0
  ULONG MakeThreadsAsNecessary : 1; // offset: 0x0 ordinal: 0x1
  ULONG WaitMode : 1;               // offset: 0x0 ordinal: 0x2
  ULONG WorkerCount : 29;           // offset: 0x0 ordinal: 0x3
  LONG QueueWorkerInfo;             // offset: 0x0 ordinal: 0x4
} EX_QUEUE_WORKER_INFO;

// 0x4 bytes (sizeof)
typedef struct _WMI_BUFFER_STATE {
  ULONG Free : 1;    // offset: 0x0 ordinal: 0x0
  ULONG InUse : 1;   // offset: 0x0 ordinal: 0x1
  ULONG Flush : 1;   // offset: 0x0 ordinal: 0x2
  ULONG Unused : 29; // offset: 0x0 ordinal: 0x3
} _WMI_BUFFER_STATE;

// 0x10 bytes (sizeof)
typedef struct _GUID {
  ULONG Data1;    // offset: 0x0 ordinal: 0x0
  USHORT Data2;   // offset: 0x4 ordinal: 0x1
  USHORT Data3;   // offset: 0x6 ordinal: 0x2
  UCHAR Data4[8]; // offset: 0x8 ordinal: 0x3
} _GUID;

// 0x4 bytes (sizeof)
typedef struct _WMI_LOGGER_MODE {
  ULONG SequentialFile : 1;    // offset: 0x0 ordinal: 0x0
  ULONG CircularFile : 1;      // offset: 0x0 ordinal: 0x1
  ULONG AppendFile : 1;        // offset: 0x0 ordinal: 0x2
  ULONG Unused1 : 5;           // offset: 0x0 ordinal: 0x3
  ULONG RealTime : 1;          // offset: 0x0 ordinal: 0x4
  ULONG DelayOpenFile : 1;     // offset: 0x0 ordinal: 0x5
  ULONG BufferOnly : 1;        // offset: 0x0 ordinal: 0x6
  ULONG PrivateLogger : 1;     // offset: 0x0 ordinal: 0x7
  ULONG AddHeader : 1;         // offset: 0x0 ordinal: 0x8
  ULONG UseExisting : 1;       // offset: 0x0 ordinal: 0x9
  ULONG UseGlobalSequence : 1; // offset: 0x0 ordinal: 0xa
  ULONG UseLocalSequence : 1;  // offset: 0x0 ordinal: 0xb
  ULONG Unused2 : 16;          // offset: 0x0 ordinal: 0xc
} _WMI_LOGGER_MODE;

// 0x18 bytes (sizeof)
typedef struct _EVENT_COUNTER {
  struct _SINGLE_LIST_ENTRY ListEntry; // offset: 0x0 ordinal: 0x0
  ULONG RefCount;                      // offset: 0x4 ordinal: 0x1
  struct _KEVENT Event;                // offset: 0x8 ordinal: 0x2
} _EVENT_COUNTER;

// 0x4c bytes (sizeof)
typedef struct _THERMAL_INFORMATION {
  ULONG ThermalStamp;         // offset: 0x0 ordinal: 0x0
  ULONG ThermalConstant1;     // offset: 0x4 ordinal: 0x1
  ULONG ThermalConstant2;     // offset: 0x8 ordinal: 0x2
  ULONG Processors;           // offset: 0xc ordinal: 0x3
  ULONG SamplingPeriod;       // offset: 0x10 ordinal: 0x4
  ULONG CurrentTemperature;   // offset: 0x14 ordinal: 0x5
  ULONG PassiveTripPoint;     // offset: 0x18 ordinal: 0x6
  ULONG CriticalTripPoint;    // offset: 0x1c ordinal: 0x7
  UCHAR ActiveTripPointCount; // offset: 0x20 ordinal: 0x8
  ULONG ActiveTripPoint[10];  // offset: 0x24 ordinal: 0x9
} _THERMAL_INFORMATION;

// 0x50 bytes (sizeof)
typedef struct _LDR_DATA_TABLE_ENTRY {
  struct _LIST_ENTRY InLoadOrderLinks;           // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY InMemoryOrderLinks;         // offset: 0x8 ordinal: 0x1
  struct _LIST_ENTRY InInitializationOrderLinks; // offset: 0x10 ordinal: 0x2
  VOID *DllBase;                                 // offset: 0x18 ordinal: 0x3
  VOID *EntryPoint;                              // offset: 0x1c ordinal: 0x4
  ULONG SizeOfImage;                             // offset: 0x20 ordinal: 0x5
  struct _UNICODE_STRING FullDllName;            // offset: 0x24 ordinal: 0x6
  struct _UNICODE_STRING BaseDllName;            // offset: 0x2c ordinal: 0x7
  ULONG Flags;                                   // offset: 0x34 ordinal: 0x8
  USHORT LoadCount;                              // offset: 0x38 ordinal: 0x9
  USHORT TlsIndex;                               // offset: 0x3a ordinal: 0xa
  union {
    struct _LIST_ENTRY HashLinks; // offset: 0x3c ordinal: 0xb
    VOID *SectionPointer;         // offset: 0x3c ordinal: 0xc
  };
  ULONG CheckSum; // offset: 0x40 ordinal: 0xd
  union {
    ULONG TimeDateStamp; // offset: 0x44 ordinal: 0xe
    VOID *LoadedImports; // offset: 0x44 ordinal: 0xf
  };
  VOID *EntryPointActivationContext; // offset: 0x48 ordinal: 0x10
  VOID *PatchInformation;            // offset: 0x4c ordinal: 0x11
} _LDR_DATA_TABLE_ENTRY;

// 0xc bytes (sizeof)
typedef struct _HEAP_PSEUDO_TAG_ENTRY {
  ULONG Allocs; // offset: 0x0 ordinal: 0x0
  ULONG Frees;  // offset: 0x4 ordinal: 0x1
  ULONG Size;   // offset: 0x8 ordinal: 0x2
} _HEAP_PSEUDO_TAG_ENTRY;

// 0x10 bytes (sizeof)
typedef struct _HEAP_UNCOMMMTTED_RANGE {
  struct _HEAP_UNCOMMMTTED_RANGE *Next; // offset: 0x0 ordinal: 0x0
  ULONG Address;                        // offset: 0x4 ordinal: 0x1
  ULONG Size;                           // offset: 0x8 ordinal: 0x2
  ULONG filler;                         // offset: 0xc ordinal: 0x3
} _HEAP_UNCOMMMTTED_RANGE;

// 0x10 bytes (sizeof)
typedef struct _HEAP_UCR_SEGMENT {
  struct _HEAP_UCR_SEGMENT *Next; // offset: 0x0 ordinal: 0x0
  ULONG ReservedSize;             // offset: 0x4 ordinal: 0x1
  ULONG CommittedSize;            // offset: 0x8 ordinal: 0x2
  ULONG filler;                   // offset: 0xc ordinal: 0x3
} _HEAP_UCR_SEGMENT;

// 0x40 bytes (sizeof)
typedef struct _HEAP_TAG_ENTRY {
  ULONG Allocs;                 // offset: 0x0 ordinal: 0x0
  ULONG Frees;                  // offset: 0x4 ordinal: 0x1
  ULONG Size;                   // offset: 0x8 ordinal: 0x2
  USHORT TagIndex;              // offset: 0xc ordinal: 0x3
  USHORT CreatorBackTraceIndex; // offset: 0xe ordinal: 0x4
  USHORT TagName[24];           // offset: 0x10 ordinal: 0x5
} _HEAP_TAG_ENTRY;

// 0x4 bytes (sizeof)
typedef struct _PRIVATE_CACHE_MAP_FLAGS {
  ULONG DontUse : 16;         // offset: 0x0 ordinal: 0x0
  ULONG ReadAheadActive : 1;  // offset: 0x0 ordinal: 0x1
  ULONG ReadAheadEnabled : 1; // offset: 0x0 ordinal: 0x2
  ULONG Available : 14;       // offset: 0x0 ordinal: 0x3
} _PRIVATE_CACHE_MAP_FLAGS;

// 0x28 bytes (sizeof)
typedef struct _DBGKD_GET_VERSION32 {
  USHORT MajorVersion;            // offset: 0x0 ordinal: 0x0
  USHORT MinorVersion;            // offset: 0x2 ordinal: 0x1
  USHORT ProtocolVersion;         // offset: 0x4 ordinal: 0x2
  USHORT Flags;                   // offset: 0x6 ordinal: 0x3
  ULONG KernBase;                 // offset: 0x8 ordinal: 0x4
  ULONG PsLoadedModuleList;       // offset: 0xc ordinal: 0x5
  USHORT MachineType;             // offset: 0x10 ordinal: 0x6
  USHORT ThCallbackStack;         // offset: 0x12 ordinal: 0x7
  USHORT NextCallback;            // offset: 0x14 ordinal: 0x8
  USHORT FramePointer;            // offset: 0x16 ordinal: 0x9
  ULONG KiCallUserMode;           // offset: 0x18 ordinal: 0xa
  ULONG KeUserCallbackDispatcher; // offset: 0x1c ordinal: 0xb
  ULONG BreakpointWithStatus;     // offset: 0x20 ordinal: 0xc
  ULONG DebuggerDataList;         // offset: 0x24 ordinal: 0xd
} _DBGKD_GET_VERSION32;

// 0x10 bytes (sizeof)
typedef struct _X86_DBGKD_CONTROL_SET {
  ULONG TraceFlag;          // offset: 0x0 ordinal: 0x0
  ULONG Dr7;                // offset: 0x4 ordinal: 0x1
  ULONG CurrentSymbolStart; // offset: 0x8 ordinal: 0x2
  ULONG CurrentSymbolEnd;   // offset: 0xc ordinal: 0x3
} _X86_DBGKD_CONTROL_SET;

// 0x14 bytes (sizeof)
typedef struct _DBGKD_GET_SET_BUS_DATA {
  ULONG BusDataType; // offset: 0x0 ordinal: 0x0
  ULONG BusNumber;   // offset: 0x4 ordinal: 0x1
  ULONG SlotNumber;  // offset: 0x8 ordinal: 0x2
  ULONG Offset;      // offset: 0xc ordinal: 0x3
  ULONG Length;      // offset: 0x10 ordinal: 0x4
} _DBGKD_GET_SET_BUS_DATA;

// 0xc bytes (sizeof)
typedef struct _DBGKD_READ_WRITE_MSR {
  ULONG Msr;           // offset: 0x0 ordinal: 0x0
  ULONG DataValueLow;  // offset: 0x4 ordinal: 0x1
  ULONG DataValueHigh; // offset: 0x8 ordinal: 0x2
} _DBGKD_READ_WRITE_MSR;

// 0x8 bytes (sizeof)
typedef struct _DBGKD_BREAKPOINTEX {
  ULONG BreakPointCount; // offset: 0x0 ordinal: 0x0
  LONG ContinueStatus;   // offset: 0x4 ordinal: 0x1
} _DBGKD_BREAKPOINTEX;

// 0x4 bytes (sizeof)
typedef struct _DBGKD_QUERY_SPECIAL_CALLS {
  ULONG NumberOfSpecialCalls; // offset: 0x0 ordinal: 0x0
} _DBGKD_QUERY_SPECIAL_CALLS;

// 0x4 bytes (sizeof)
typedef struct _DBGKD_RESTORE_BREAKPOINT {
  ULONG BreakPointHandle; // offset: 0x0 ordinal: 0x0
} _DBGKD_RESTORE_BREAKPOINT;

// 0x4 bytes (sizeof)
typedef struct _DBGKD_SET_CONTEXT {
  ULONG ContextFlags; // offset: 0x0 ordinal: 0x0
} _DBGKD_SET_CONTEXT;

// 0x4 bytes (sizeof)
typedef struct _DBGKD_GET_CONTEXT {
  ULONG Unused; // offset: 0x0 ordinal: 0x0
} _DBGKD_GET_CONTEXT;

// 0x1c bytes (sizeof)
typedef struct _DBGKD_GET_INTERNAL_BREAKPOINT32 {
  ULONG BreakpointAddress; // offset: 0x0 ordinal: 0x0
  ULONG Flags;             // offset: 0x4 ordinal: 0x1
  ULONG Calls;             // offset: 0x8 ordinal: 0x2
  ULONG MaxCallsPerPeriod; // offset: 0xc ordinal: 0x3
  ULONG MinInstructions;   // offset: 0x10 ordinal: 0x4
  ULONG MaxInstructions;   // offset: 0x14 ordinal: 0x5
  ULONG TotalInstructions; // offset: 0x18 ordinal: 0x6
} _DBGKD_GET_INTERNAL_BREAKPOINT32;

// 0x8 bytes (sizeof)
typedef struct _DBGKD_SET_INTERNAL_BREAKPOINT32 {
  ULONG BreakpointAddress; // offset: 0x0 ordinal: 0x0
  ULONG Flags;             // offset: 0x4 ordinal: 0x1
} _DBGKD_SET_INTERNAL_BREAKPOINT32;

// 0x4 bytes (sizeof)
typedef struct _DBGKD_SET_SPECIAL_CALL32 {
  ULONG SpecialCall; // offset: 0x0 ordinal: 0x0
} _DBGKD_SET_SPECIAL_CALL32;

// 0x18 bytes (sizeof)
typedef struct _DBGKD_READ_WRITE_IO_EXTENDED32 {
  ULONG DataSize;      // offset: 0x0 ordinal: 0x0
  ULONG InterfaceType; // offset: 0x4 ordinal: 0x1
  ULONG BusNumber;     // offset: 0x8 ordinal: 0x2
  ULONG AddressSpace;  // offset: 0xc ordinal: 0x3
  ULONG IoAddress;     // offset: 0x10 ordinal: 0x4
  ULONG DataValue;     // offset: 0x14 ordinal: 0x5
} _DBGKD_READ_WRITE_IO_EXTENDED32;

// 0xc bytes (sizeof)
typedef struct _DBGKD_READ_WRITE_IO32 {
  ULONG DataSize;  // offset: 0x0 ordinal: 0x0
  ULONG IoAddress; // offset: 0x4 ordinal: 0x1
  ULONG DataValue; // offset: 0x8 ordinal: 0x2
} _DBGKD_READ_WRITE_IO32;

// 0x8 bytes (sizeof)
typedef struct _DBGKD_WRITE_BREAKPOINT32 {
  ULONG BreakPointAddress; // offset: 0x0 ordinal: 0x0
  ULONG BreakPointHandle;  // offset: 0x4 ordinal: 0x1
} _DBGKD_WRITE_BREAKPOINT32;

// 0xc bytes (sizeof)
typedef struct _DBGKD_WRITE_MEMORY32 {
  ULONG TargetBaseAddress;  // offset: 0x0 ordinal: 0x0
  ULONG TransferCount;      // offset: 0x4 ordinal: 0x1
  ULONG ActualBytesWritten; // offset: 0x8 ordinal: 0x2
} _DBGKD_WRITE_MEMORY32;

// 0xc bytes (sizeof)
typedef struct _DBGKD_READ_MEMORY32 {
  ULONG TargetBaseAddress; // offset: 0x0 ordinal: 0x0
  ULONG TransferCount;     // offset: 0x4 ordinal: 0x1
  ULONG ActualBytesRead;   // offset: 0x8 ordinal: 0x2
} _DBGKD_READ_MEMORY32;

// 0x18 bytes (sizeof)
typedef struct _DBGKD_LOAD_SYMBOLS32 {
  ULONG PathNameLength; // offset: 0x0 ordinal: 0x0
  ULONG BaseOfDll;      // offset: 0x4 ordinal: 0x1
  ULONG ProcessId;      // offset: 0x8 ordinal: 0x2
  ULONG CheckSum;       // offset: 0xc ordinal: 0x3
  ULONG SizeOfImage;    // offset: 0x10 ordinal: 0x4
  UCHAR UnloadSymbols;  // offset: 0x14 ordinal: 0x5
} _DBGKD_LOAD_SYMBOLS32;

// 0x4 bytes (sizeof)
typedef struct _MMPTE_LIST {
  ULONG Valid : 1;      // offset: 0x0 ordinal: 0x0
  ULONG OneEntry : 1;   // offset: 0x0 ordinal: 0x1
  ULONG filler0 : 8;    // offset: 0x0 ordinal: 0x2
  ULONG Prototype : 1;  // offset: 0x0 ordinal: 0x3
  ULONG filler1 : 1;    // offset: 0x0 ordinal: 0x4
  ULONG NextEntry : 20; // offset: 0x0 ordinal: 0x5
} _MMPTE_LIST;

// 0x4 bytes (sizeof)
typedef struct _MMPTE_SUBSECTION {
  ULONG Valid : 1;                  // offset: 0x0 ordinal: 0x0
  ULONG SubsectionAddressLow : 4;   // offset: 0x0 ordinal: 0x1
  ULONG Protection : 5;             // offset: 0x0 ordinal: 0x2
  ULONG Prototype : 1;              // offset: 0x0 ordinal: 0x3
  ULONG SubsectionAddressHigh : 20; // offset: 0x0 ordinal: 0x4
  ULONG WhichPool : 1;              // offset: 0x0 ordinal: 0x5
} _MMPTE_SUBSECTION;

// 0x4 bytes (sizeof)
typedef struct _MMPTE_TRANSITION {
  ULONG Valid : 1;            // offset: 0x0 ordinal: 0x0
  ULONG Write : 1;            // offset: 0x0 ordinal: 0x1
  ULONG Owner : 1;            // offset: 0x0 ordinal: 0x2
  ULONG WriteThrough : 1;     // offset: 0x0 ordinal: 0x3
  ULONG CacheDisable : 1;     // offset: 0x0 ordinal: 0x4
  ULONG Protection : 5;       // offset: 0x0 ordinal: 0x5
  ULONG Prototype : 1;        // offset: 0x0 ordinal: 0x6
  ULONG Transition : 1;       // offset: 0x0 ordinal: 0x7
  ULONG PageFrameNumber : 20; // offset: 0x0 ordinal: 0x8
} _MMPTE_TRANSITION;

// 0x4 bytes (sizeof)
typedef struct _MMPTE_SOFTWARE {
  ULONG Valid : 1;         // offset: 0x0 ordinal: 0x0
  ULONG PageFileLow : 4;   // offset: 0x0 ordinal: 0x1
  ULONG Protection : 5;    // offset: 0x0 ordinal: 0x2
  ULONG Prototype : 1;     // offset: 0x0 ordinal: 0x3
  ULONG Transition : 1;    // offset: 0x0 ordinal: 0x4
  ULONG PageFileHigh : 20; // offset: 0x0 ordinal: 0x5
} _MMPTE_SOFTWARE;

// 0x4 bytes (sizeof)
typedef struct _MMPTE_PROTOTYPE {
  ULONG Valid : 1;             // offset: 0x0 ordinal: 0x0
  ULONG ProtoAddressLow : 7;   // offset: 0x0 ordinal: 0x1
  ULONG ReadOnly : 1;          // offset: 0x0 ordinal: 0x2
  ULONG WhichPool : 1;         // offset: 0x0 ordinal: 0x3
  ULONG Prototype : 1;         // offset: 0x0 ordinal: 0x4
  ULONG ProtoAddressHigh : 21; // offset: 0x0 ordinal: 0x5
} _MMPTE_PROTOTYPE;

// 0x4 bytes (sizeof)
typedef struct _MMPTE_HARDWARE {
  ULONG Valid : 1;            // offset: 0x0 ordinal: 0x0
  ULONG Writable : 1;         // offset: 0x0 ordinal: 0x1
  ULONG Owner : 1;            // offset: 0x0 ordinal: 0x2
  ULONG WriteThrough : 1;     // offset: 0x0 ordinal: 0x3
  ULONG CacheDisable : 1;     // offset: 0x0 ordinal: 0x4
  ULONG Accessed : 1;         // offset: 0x0 ordinal: 0x5
  ULONG Dirty : 1;            // offset: 0x0 ordinal: 0x6
  ULONG LargePage : 1;        // offset: 0x0 ordinal: 0x7
  ULONG Global : 1;           // offset: 0x0 ordinal: 0x8
  ULONG CopyOnWrite : 1;      // offset: 0x0 ordinal: 0x9
  ULONG Prototype : 1;        // offset: 0x0 ordinal: 0xa
  ULONG Write : 1;            // offset: 0x0 ordinal: 0xb
  ULONG PageFrameNumber : 20; // offset: 0x0 ordinal: 0xc
} _MMPTE_HARDWARE;

// 0x8 bytes (sizeof)
typedef struct _OBJECT_HANDLE_INFORMATION {
  ULONG HandleAttributes; // offset: 0x0 ordinal: 0x0
  ULONG GrantedAccess;    // offset: 0x4 ordinal: 0x1
} _OBJECT_HANDLE_INFORMATION;

// 0x8 bytes (sizeof)
typedef struct _OBJECT_DUMP_CONTROL {
  VOID *Stream; // offset: 0x0 ordinal: 0x0
  ULONG Detail; // offset: 0x4 ordinal: 0x1
} _OBJECT_DUMP_CONTROL;

typedef VOID (*__anon_484)(VOID *, struct _OBJECT_DUMP_CONTROL *);

// 0x10 bytes (sizeof)
typedef struct _GENERIC_MAPPING {
  ULONG GenericRead;    // offset: 0x0 ordinal: 0x0
  ULONG GenericWrite;   // offset: 0x4 ordinal: 0x1
  ULONG GenericExecute; // offset: 0x8 ordinal: 0x2
  ULONG GenericAll;     // offset: 0xc ordinal: 0x3
} _GENERIC_MAPPING;

// 0x18 bytes (sizeof)
typedef struct _OBJECT_ATTRIBUTES {
  ULONG Length;                       // offset: 0x0 ordinal: 0x0
  VOID *RootDirectory;                // offset: 0x4 ordinal: 0x1
  struct _UNICODE_STRING *ObjectName; // offset: 0x8 ordinal: 0x2
  ULONG Attributes;                   // offset: 0xc ordinal: 0x3
  VOID *SecurityDescriptor;           // offset: 0x10 ordinal: 0x4
  VOID *SecurityQualityOfService;     // offset: 0x14 ordinal: 0x5
} _OBJECT_ATTRIBUTES;

// 0xc bytes (sizeof)
typedef struct _SECURITY_QUALITY_OF_SERVICE {
  ULONG Length; // offset: 0x0 ordinal: 0x0
  enum _SECURITY_IMPERSONATION_LEVEL
      ImpersonationLevel;    // offset: 0x4 ordinal: 0x1
  UCHAR ContextTrackingMode; // offset: 0x8 ordinal: 0x2
  UCHAR EffectiveOnly;       // offset: 0x9 ordinal: 0x3
} _SECURITY_QUALITY_OF_SERVICE;

// 0x30 bytes (sizeof)
typedef struct _OBJECT_CREATE_INFORMATION {
  ULONG Attributes;                                 // offset: 0x0 ordinal: 0x0
  VOID *RootDirectory;                              // offset: 0x4 ordinal: 0x1
  VOID *ParseContext;                               // offset: 0x8 ordinal: 0x2
  CHAR ProbeMode;                                   // offset: 0xc ordinal: 0x3
  ULONG PagedPoolCharge;                            // offset: 0x10 ordinal: 0x4
  ULONG NonPagedPoolCharge;                         // offset: 0x14 ordinal: 0x5
  ULONG SecurityDescriptorCharge;                   // offset: 0x18 ordinal: 0x6
  VOID *SecurityDescriptor;                         // offset: 0x1c ordinal: 0x7
  struct _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // offset: 0x20 ordinal: 0x8
  struct _SECURITY_QUALITY_OF_SERVICE
      SecurityQualityOfService; // offset: 0x24 ordinal: 0x9
} _OBJECT_CREATE_INFORMATION;

// 0xc bytes (sizeof)
typedef struct _POWER_SEQUENCE {
  ULONG SequenceD1; // offset: 0x0 ordinal: 0x0
  ULONG SequenceD2; // offset: 0x4 ordinal: 0x1
  ULONG SequenceD3; // offset: 0x8 ordinal: 0x2
} _POWER_SEQUENCE;

// 0x40 bytes (sizeof)
typedef struct _DEVICE_CAPABILITIES {
  USHORT Size;                             // offset: 0x0 ordinal: 0x0
  USHORT Version;                          // offset: 0x2 ordinal: 0x1
  ULONG DeviceD1 : 1;                      // offset: 0x4 ordinal: 0x2
  ULONG DeviceD2 : 1;                      // offset: 0x4 ordinal: 0x3
  ULONG LockSupported : 1;                 // offset: 0x4 ordinal: 0x4
  ULONG EjectSupported : 1;                // offset: 0x4 ordinal: 0x5
  ULONG Removable : 1;                     // offset: 0x4 ordinal: 0x6
  ULONG DockDevice : 1;                    // offset: 0x4 ordinal: 0x7
  ULONG UniqueID : 1;                      // offset: 0x4 ordinal: 0x8
  ULONG SilentInstall : 1;                 // offset: 0x4 ordinal: 0x9
  ULONG RawDeviceOK : 1;                   // offset: 0x4 ordinal: 0xa
  ULONG SurpriseRemovalOK : 1;             // offset: 0x4 ordinal: 0xb
  ULONG WakeFromD0 : 1;                    // offset: 0x4 ordinal: 0xc
  ULONG WakeFromD1 : 1;                    // offset: 0x4 ordinal: 0xd
  ULONG WakeFromD2 : 1;                    // offset: 0x4 ordinal: 0xe
  ULONG WakeFromD3 : 1;                    // offset: 0x4 ordinal: 0xf
  ULONG HardwareDisabled : 1;              // offset: 0x4 ordinal: 0x10
  ULONG NonDynamic : 1;                    // offset: 0x4 ordinal: 0x11
  ULONG WarmEjectSupported : 1;            // offset: 0x4 ordinal: 0x12
  ULONG NoDisplayInUI : 1;                 // offset: 0x4 ordinal: 0x13
  ULONG Reserved : 14;                     // offset: 0x4 ordinal: 0x14
  ULONG Address;                           // offset: 0x8 ordinal: 0x15
  ULONG UINumber;                          // offset: 0xc ordinal: 0x16
  enum _DEVICE_POWER_STATE DeviceState[7]; // offset: 0x10 ordinal: 0x17
  enum _SYSTEM_POWER_STATE SystemWake;     // offset: 0x2c ordinal: 0x18
  enum _DEVICE_POWER_STATE DeviceWake;     // offset: 0x30 ordinal: 0x19
  ULONG D1Latency;                         // offset: 0x34 ordinal: 0x1a
  ULONG D2Latency;                         // offset: 0x38 ordinal: 0x1b
  ULONG D3Latency;                         // offset: 0x3c ordinal: 0x1c
} _DEVICE_CAPABILITIES;

// 0x4 bytes (sizeof)
typedef struct _MMWSLENTRY {
  ULONG Valid : 1;              // offset: 0x0 ordinal: 0x0
  ULONG LockedInWs : 1;         // offset: 0x0 ordinal: 0x1
  ULONG LockedInMemory : 1;     // offset: 0x0 ordinal: 0x2
  ULONG Protection : 5;         // offset: 0x0 ordinal: 0x3
  ULONG Hashed : 1;             // offset: 0x0 ordinal: 0x4
  ULONG Direct : 1;             // offset: 0x0 ordinal: 0x5
  ULONG Age : 2;                // offset: 0x0 ordinal: 0x6
  ULONG VirtualPageNumber : 20; // offset: 0x0 ordinal: 0x7
} _MMWSLENTRY;

// 0x4 bytes (sizeof)
typedef struct _MMWSLE {
  union {
    VOID *VirtualAddress;  // offset: 0x0 ordinal: 0x0
    ULONG Long;            // offset: 0x0 ordinal: 0x1
    struct _MMWSLENTRY e1; // offset: 0x0 ordinal: 0x2
  } u1;                    // offset: 0x0 ordinal: 0x0
} _MMWSLE;

// 0x10 bytes (sizeof)
typedef struct _RTL_DRIVE_LETTER_CURDIR {
  USHORT Flags;           // offset: 0x0 ordinal: 0x0
  USHORT Length;          // offset: 0x2 ordinal: 0x1
  ULONG TimeStamp;        // offset: 0x4 ordinal: 0x2
  struct _STRING DosPath; // offset: 0x8 ordinal: 0x3
} _RTL_DRIVE_LETTER_CURDIR;

// 0x8 bytes (sizeof)
typedef struct _SID_AND_ATTRIBUTES {
  VOID *Sid;        // offset: 0x0 ordinal: 0x0
  ULONG Attributes; // offset: 0x4 ordinal: 0x1
} _SID_AND_ATTRIBUTES;

// 0x50 bytes (sizeof)
typedef struct _HANDLE_TRACE_DB_ENTRY {
  struct _CLIENT_ID ClientId; // offset: 0x0 ordinal: 0x0
  VOID *Handle;               // offset: 0x8 ordinal: 0x1
  ULONG Type;                 // offset: 0xc ordinal: 0x2
  VOID *StackTrace[16];       // offset: 0x10 ordinal: 0x3
} _HANDLE_TRACE_DB_ENTRY;

// 0x8 bytes (sizeof)
typedef struct _MMWSLE_HASH {
  VOID *Key;   // offset: 0x0 ordinal: 0x0
  ULONG Index; // offset: 0x4 ordinal: 0x1
} _MMWSLE_HASH;

// 0x8 bytes (sizeof)
typedef struct _OWNER_ENTRY {
  ULONG OwnerThread; // offset: 0x0 ordinal: 0x0
  union {
    LONG OwnerCount; // offset: 0x4 ordinal: 0x1
    ULONG TableSize; // offset: 0x4 ordinal: 0x2
  };
} _OWNER_ENTRY;

// 0x14 bytes (sizeof)
typedef struct _POWER_CHANNEL_SUMMARY {
  ULONG Signature;               // offset: 0x0 ordinal: 0x0
  ULONG TotalCount;              // offset: 0x4 ordinal: 0x1
  ULONG D0Count;                 // offset: 0x8 ordinal: 0x2
  struct _LIST_ENTRY NotifyList; // offset: 0xc ordinal: 0x3
} _POWER_CHANNEL_SUMMARY;

// 0x8 bytes (sizeof)
typedef struct _PEB_FREE_BLOCK {
  struct _PEB_FREE_BLOCK *Next; // offset: 0x0 ordinal: 0x0
  ULONG Size;                   // offset: 0x4 ordinal: 0x1
} _PEB_FREE_BLOCK;

// 0x290 bytes (sizeof)
typedef struct _RTL_USER_PROCESS_PARAMETERS {
  ULONG MaximumLength;                  // offset: 0x0 ordinal: 0x0
  ULONG Length;                         // offset: 0x4 ordinal: 0x1
  ULONG Flags;                          // offset: 0x8 ordinal: 0x2
  ULONG DebugFlags;                     // offset: 0xc ordinal: 0x3
  VOID *ConsoleHandle;                  // offset: 0x10 ordinal: 0x4
  ULONG ConsoleFlags;                   // offset: 0x14 ordinal: 0x5
  VOID *StandardInput;                  // offset: 0x18 ordinal: 0x6
  VOID *StandardOutput;                 // offset: 0x1c ordinal: 0x7
  VOID *StandardError;                  // offset: 0x20 ordinal: 0x8
  struct _CURDIR CurrentDirectory;      // offset: 0x24 ordinal: 0x9
  struct _UNICODE_STRING DllPath;       // offset: 0x30 ordinal: 0xa
  struct _UNICODE_STRING ImagePathName; // offset: 0x38 ordinal: 0xb
  struct _UNICODE_STRING CommandLine;   // offset: 0x40 ordinal: 0xc
  VOID *Environment;                    // offset: 0x48 ordinal: 0xd
  ULONG StartingX;                      // offset: 0x4c ordinal: 0xe
  ULONG StartingY;                      // offset: 0x50 ordinal: 0xf
  ULONG CountX;                         // offset: 0x54 ordinal: 0x10
  ULONG CountY;                         // offset: 0x58 ordinal: 0x11
  ULONG CountCharsX;                    // offset: 0x5c ordinal: 0x12
  ULONG CountCharsY;                    // offset: 0x60 ordinal: 0x13
  ULONG FillAttribute;                  // offset: 0x64 ordinal: 0x14
  ULONG WindowFlags;                    // offset: 0x68 ordinal: 0x15
  ULONG ShowWindowFlags;                // offset: 0x6c ordinal: 0x16
  struct _UNICODE_STRING WindowTitle;   // offset: 0x70 ordinal: 0x17
  struct _UNICODE_STRING DesktopInfo;   // offset: 0x78 ordinal: 0x18
  struct _UNICODE_STRING ShellInfo;     // offset: 0x80 ordinal: 0x19
  struct _UNICODE_STRING RuntimeData;   // offset: 0x88 ordinal: 0x1a
  struct _RTL_DRIVE_LETTER_CURDIR
      CurrentDirectores[32]; // offset: 0x90 ordinal: 0x1b
} _RTL_USER_PROCESS_PARAMETERS;

// 0x28 bytes (sizeof)
typedef struct _PEB_LDR_DATA {
  ULONG Length;                               // offset: 0x0 ordinal: 0x0
  UCHAR Initialized;                          // offset: 0x4 ordinal: 0x1
  VOID *SsHandle;                             // offset: 0x8 ordinal: 0x2
  struct _LIST_ENTRY InLoadOrderModuleList;   // offset: 0xc ordinal: 0x3
  struct _LIST_ENTRY InMemoryOrderModuleList; // offset: 0x14 ordinal: 0x4
  struct _LIST_ENTRY
      InInitializationOrderModuleList; // offset: 0x1c ordinal: 0x5
  VOID *EntryInProgress;               // offset: 0x24 ordinal: 0x6
} _PEB_LDR_DATA;

// 0x10 bytes (sizeof)
typedef struct _EPROCESS_QUOTA_ENTRY {
  ULONG Usage;  // offset: 0x0 ordinal: 0x0
  ULONG Limit;  // offset: 0x4 ordinal: 0x1
  ULONG Peak;   // offset: 0x8 ordinal: 0x2
  ULONG Return; // offset: 0xc ordinal: 0x3
} _EPROCESS_QUOTA_ENTRY;

// 0x50004 bytes (sizeof)
typedef struct _HANDLE_TRACE_DEBUG_INFO {
  ULONG CurrentStackIndex;                     // offset: 0x0 ordinal: 0x0
  struct _HANDLE_TRACE_DB_ENTRY TraceDb[4096]; // offset: 0x4 ordinal: 0x1
} _HANDLE_TRACE_DEBUG_INFO;

// 0x4c bytes (sizeof)
typedef struct _DEVICE_OBJECT_POWER_EXTENSION {
  ULONG IdleCount;                     // offset: 0x0 ordinal: 0x0
  ULONG ConservationIdleTime;          // offset: 0x4 ordinal: 0x1
  ULONG PerformanceIdleTime;           // offset: 0x8 ordinal: 0x2
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0xc ordinal: 0x3
  struct _LIST_ENTRY IdleList;         // offset: 0x10 ordinal: 0x4
  UCHAR DeviceType;                    // offset: 0x18 ordinal: 0x5
  enum _DEVICE_POWER_STATE State;      // offset: 0x1c ordinal: 0x6
  struct _LIST_ENTRY NotifySourceList; // offset: 0x20 ordinal: 0x7
  struct _LIST_ENTRY NotifyTargetList; // offset: 0x28 ordinal: 0x8
  struct _POWER_CHANNEL_SUMMARY
      PowerChannelSummary;   // offset: 0x30 ordinal: 0x9
  struct _LIST_ENTRY Volume; // offset: 0x44 ordinal: 0xa
} _DEVICE_OBJECT_POWER_EXTENSION;

// 0x69c bytes (sizeof)
typedef struct _MMWSL {
  ULONG Quota;                       // offset: 0x0 ordinal: 0x0
  ULONG FirstFree;                   // offset: 0x4 ordinal: 0x1
  ULONG FirstDynamic;                // offset: 0x8 ordinal: 0x2
  ULONG LastEntry;                   // offset: 0xc ordinal: 0x3
  ULONG NextSlot;                    // offset: 0x10 ordinal: 0x4
  struct _MMWSLE *Wsle;              // offset: 0x14 ordinal: 0x5
  ULONG LastInitializedWsle;         // offset: 0x18 ordinal: 0x6
  ULONG NonDirectCount;              // offset: 0x1c ordinal: 0x7
  struct _MMWSLE_HASH *HashTable;    // offset: 0x20 ordinal: 0x8
  ULONG HashTableSize;               // offset: 0x24 ordinal: 0x9
  ULONG NumberOfCommittedPageTables; // offset: 0x28 ordinal: 0xa
  VOID *HashTableStart;              // offset: 0x2c ordinal: 0xb
  VOID *HighestPermittedHashAddress; // offset: 0x30 ordinal: 0xc
  ULONG NumberOfImageWaiters;        // offset: 0x34 ordinal: 0xd
  ULONG VadBitMapHint;               // offset: 0x38 ordinal: 0xe
  USHORT UsedPageTableEntries[768];  // offset: 0x3c ordinal: 0xf
  ULONG CommittedPageTables[24];     // offset: 0x63c ordinal: 0x10
} _MMWSL;

// 0x38 bytes (sizeof)
typedef struct _ERESOURCE {
  struct _LIST_ENTRY SystemResourcesList; // offset: 0x0 ordinal: 0x0
  struct _OWNER_ENTRY *OwnerTable;        // offset: 0x8 ordinal: 0x1
  SHORT ActiveCount;                      // offset: 0xc ordinal: 0x2
  USHORT Flag;                            // offset: 0xe ordinal: 0x3
  struct _KSEMAPHORE *SharedWaiters;      // offset: 0x10 ordinal: 0x4
  struct _KEVENT *ExclusiveWaiters;       // offset: 0x14 ordinal: 0x5
  struct _OWNER_ENTRY OwnerThreads[2];    // offset: 0x18 ordinal: 0x6
  ULONG ContentionCount;                  // offset: 0x28 ordinal: 0x7
  USHORT NumberOfSharedWaiters;           // offset: 0x2c ordinal: 0x8
  USHORT NumberOfExclusiveWaiters;        // offset: 0x2e ordinal: 0x9
  union {
    VOID *Address;               // offset: 0x30 ordinal: 0xa
    ULONG CreatorBackTraceIndex; // offset: 0x30 ordinal: 0xb
  };
  ULONG SpinLock; // offset: 0x34 ordinal: 0xc
} _ERESOURCE;

typedef LONG (*__anon_323)(struct _FILE_OBJECT *, struct _ERESOURCE *,
                           struct _DEVICE_OBJECT *);

// 0x10 bytes (sizeof)
typedef struct _KDEVICE_QUEUE_ENTRY {
  struct _LIST_ENTRY DeviceListEntry; // offset: 0x0 ordinal: 0x0
  ULONG SortKey;                      // offset: 0x8 ordinal: 0x1
  UCHAR Inserted;                     // offset: 0xc ordinal: 0x2
} _KDEVICE_QUEUE_ENTRY;

// 0x8 bytes (sizeof)
typedef struct _IO_STATUS_BLOCK {
  union {
    LONG Status;   // offset: 0x0 ordinal: 0x0
    VOID *Pointer; // offset: 0x0 ordinal: 0x1
  };
  ULONG Information; // offset: 0x4 ordinal: 0x2
} _IO_STATUS_BLOCK;

typedef VOID (*__anon_325)(VOID *, struct _IO_STATUS_BLOCK *, ULONG);

typedef UCHAR (*__anon_313)(struct _FILE_OBJECT *, UCHAR, VOID *, ULONG, VOID *,
                            ULONG, ULONG, struct _IO_STATUS_BLOCK *,
                            struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_312)(struct _FILE_OBJECT *, VOID *, ULONG,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

// 0x18 bytes (sizeof)
typedef struct _PAGEFAULT_HISTORY {
  ULONG CurrentIndex; // offset: 0x0 ordinal: 0x0
  ULONG MaxIndex;     // offset: 0x4 ordinal: 0x1
  ULONG SpinLock;     // offset: 0x8 ordinal: 0x2
  VOID *Reserved;     // offset: 0xc ordinal: 0x3
  struct _PROCESS_WS_WATCH_INFORMATION
      WatchInfo[1]; // offset: 0x10 ordinal: 0x4
} _PAGEFAULT_HISTORY;

// 0x40 bytes (sizeof)
typedef struct _EPROCESS_QUOTA_BLOCK {
  struct _EPROCESS_QUOTA_ENTRY QuotaEntry[3]; // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY QuotaList;               // offset: 0x30 ordinal: 0x1
  ULONG ReferenceCount;                       // offset: 0x38 ordinal: 0x2
  ULONG ProcessCount;                         // offset: 0x3c ordinal: 0x3
} _EPROCESS_QUOTA_BLOCK;

// 0x58 bytes (sizeof)
typedef struct _VPB {
  SHORT Type;                          // offset: 0x0 ordinal: 0x0
  SHORT Size;                          // offset: 0x2 ordinal: 0x1
  USHORT Flags;                        // offset: 0x4 ordinal: 0x2
  USHORT VolumeLabelLength;            // offset: 0x6 ordinal: 0x3
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x8 ordinal: 0x4
  struct _DEVICE_OBJECT *RealDevice;   // offset: 0xc ordinal: 0x5
  ULONG SerialNumber;                  // offset: 0x10 ordinal: 0x6
  ULONG ReferenceCount;                // offset: 0x14 ordinal: 0x7
  USHORT VolumeLabel[32];              // offset: 0x18 ordinal: 0x8
} _VPB;

// 0x2c bytes (sizeof)
typedef struct _DEVOBJ_EXTENSION {
  SHORT Type;                                  // offset: 0x0 ordinal: 0x0
  USHORT Size;                                 // offset: 0x2 ordinal: 0x1
  struct _DEVICE_OBJECT *DeviceObject;         // offset: 0x4 ordinal: 0x2
  ULONG PowerFlags;                            // offset: 0x8 ordinal: 0x3
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // offset: 0xc ordinal: 0x4
  ULONG ExtensionFlags;                        // offset: 0x10 ordinal: 0x5
  VOID *DeviceNode;                            // offset: 0x14 ordinal: 0x6
  struct _DEVICE_OBJECT *AttachedTo;           // offset: 0x18 ordinal: 0x7
  LONG StartIoCount;                           // offset: 0x1c ordinal: 0x8
  LONG StartIoKey;                             // offset: 0x20 ordinal: 0x9
  ULONG StartIoFlags;                          // offset: 0x24 ordinal: 0xa
  struct _VPB *Vpb;                            // offset: 0x28 ordinal: 0xb
} _DEVOBJ_EXTENSION;

// 0x4 bytes (sizeof)
typedef struct _HARDWARE_PTE {
  ULONG Valid : 1;            // offset: 0x0 ordinal: 0x0
  ULONG Write : 1;            // offset: 0x0 ordinal: 0x1
  ULONG Owner : 1;            // offset: 0x0 ordinal: 0x2
  ULONG WriteThrough : 1;     // offset: 0x0 ordinal: 0x3
  ULONG CacheDisable : 1;     // offset: 0x0 ordinal: 0x4
  ULONG Accessed : 1;         // offset: 0x0 ordinal: 0x5
  ULONG Dirty : 1;            // offset: 0x0 ordinal: 0x6
  ULONG LargePage : 1;        // offset: 0x0 ordinal: 0x7
  ULONG Global : 1;           // offset: 0x0 ordinal: 0x8
  ULONG CopyOnWrite : 1;      // offset: 0x0 ordinal: 0x9
  ULONG Prototype : 1;        // offset: 0x0 ordinal: 0xa
  ULONG reserved : 1;         // offset: 0x0 ordinal: 0xb
  ULONG PageFrameNumber : 20; // offset: 0x0 ordinal: 0xc
} _HARDWARE_PTE;

// 0x4 bytes (sizeof)
typedef struct _MMPTE {
  union {
    ULONG Long;                       // offset: 0x0 ordinal: 0x0
    struct _MMPTE_HARDWARE Hard;      // offset: 0x0 ordinal: 0x1
    struct _HARDWARE_PTE Flush;       // offset: 0x0 ordinal: 0x2
    struct _MMPTE_PROTOTYPE Proto;    // offset: 0x0 ordinal: 0x3
    struct _MMPTE_SOFTWARE Soft;      // offset: 0x0 ordinal: 0x4
    struct _MMPTE_TRANSITION Trans;   // offset: 0x0 ordinal: 0x5
    struct _MMPTE_SUBSECTION Subsect; // offset: 0x0 ordinal: 0x6
    struct _MMPTE_LIST List;          // offset: 0x0 ordinal: 0x7
  } u;                                // offset: 0x0 ordinal: 0x0
} _MMPTE;

// 0x28 bytes (sizeof)
typedef struct _MMVAD {
  ULONG StartingVpn;         // offset: 0x0 ordinal: 0x0
  ULONG EndingVpn;           // offset: 0x4 ordinal: 0x1
  struct _MMVAD *Parent;     // offset: 0x8 ordinal: 0x2
  struct _MMVAD *LeftChild;  // offset: 0xc ordinal: 0x3
  struct _MMVAD *RightChild; // offset: 0x10 ordinal: 0x4
  union {
    ULONG LongFlags;                 // offset: 0x0 ordinal: 0x0
    struct _MMVAD_FLAGS VadFlags;    // offset: 0x0 ordinal: 0x1
  } u;                               // offset: 0x14 ordinal: 0x5
  struct _CONTROL_AREA *ControlArea; // offset: 0x18 ordinal: 0x6
  struct _MMPTE *FirstPrototypePte;  // offset: 0x1c ordinal: 0x7
  struct _MMPTE *LastContiguousPte;  // offset: 0x20 ordinal: 0x8
  union {
    ULONG LongFlags2;               // offset: 0x0 ordinal: 0x0
    struct _MMVAD_FLAGS2 VadFlags2; // offset: 0x0 ordinal: 0x1
  } u2;                             // offset: 0x24 ordinal: 0x9
} _MMVAD;

// 0x20 bytes (sizeof)
typedef struct _MMBANKED_SECTION {
  ULONG BasePhysicalPage;                      // offset: 0x0 ordinal: 0x0
  struct _MMPTE *BasedPte;                     // offset: 0x4 ordinal: 0x1
  ULONG BankSize;                              // offset: 0x8 ordinal: 0x2
  ULONG BankShift;                             // offset: 0xc ordinal: 0x3
  VOID (*BankedRoutine)(ULONG, ULONG, VOID *); // offset: 0x10 ordinal: 0x4
  VOID *Context;                               // offset: 0x14 ordinal: 0x5
  struct _MMPTE *CurrentMappedPte;             // offset: 0x18 ordinal: 0x6
  struct _MMPTE BankTemplate[1];               // offset: 0x1c ordinal: 0x7
} _MMBANKED_SECTION;

// 0x18 bytes (sizeof)
typedef struct _MMPFN {
  union {
    ULONG Flink;                            // offset: 0x0 ordinal: 0x0
    ULONG WsIndex;                          // offset: 0x0 ordinal: 0x1
    struct _KEVENT *Event;                  // offset: 0x0 ordinal: 0x2
    LONG ReadStatus;                        // offset: 0x0 ordinal: 0x3
    struct _SINGLE_LIST_ENTRY NextStackPfn; // offset: 0x0 ordinal: 0x4
  } u1;                                     // offset: 0x0 ordinal: 0x0
  struct _MMPTE *PteAddress;                // offset: 0x4 ordinal: 0x1
  union {
    ULONG Blink;      // offset: 0x0 ordinal: 0x0
    ULONG ShareCount; // offset: 0x0 ordinal: 0x1
  } u2;               // offset: 0x8 ordinal: 0x2
  union {
    struct _MMPFNENTRY e1; // offset: 0x0 ordinal: 0x0
    struct {
      USHORT ShortFlags;     // offset: 0x0 ordinal: 0x0
      USHORT ReferenceCount; // offset: 0x2 ordinal: 0x1
    } e2;                    // offset: 0x0 ordinal: 0x1
  } u3;                      // offset: 0xc ordinal: 0x3
  struct _MMPTE OriginalPte; // offset: 0x10 ordinal: 0x4
  union {
    ULONG EntireFrame;            // offset: 0x0 ordinal: 0x0
    ULONG PteFrame : 26;          // offset: 0x0 ordinal: 0x1
    ULONG InPageError : 1;        // offset: 0x0 ordinal: 0x2
    ULONG VerifierAllocation : 1; // offset: 0x0 ordinal: 0x3
    ULONG AweAllocation : 1;      // offset: 0x0 ordinal: 0x4
    ULONG LockCharged : 1;        // offset: 0x0 ordinal: 0x5
    ULONG KernelStack : 1;        // offset: 0x0 ordinal: 0x6
    ULONG Reserved : 1;           // offset: 0x0 ordinal: 0x7
  } u4;                           // offset: 0x14 ordinal: 0x5
} _MMPFN;

// 0x20 bytes (sizeof)
typedef struct _SUBSECTION {
  struct _CONTROL_AREA *ControlArea; // offset: 0x0 ordinal: 0x0
  union {
    ULONG LongFlags;                            // offset: 0x0 ordinal: 0x0
    struct _MMSUBSECTION_FLAGS SubsectionFlags; // offset: 0x0 ordinal: 0x1
  } u;                                          // offset: 0x4 ordinal: 0x1
  ULONG StartingSector;                         // offset: 0x8 ordinal: 0x2
  ULONG NumberOfFullSectors;                    // offset: 0xc ordinal: 0x3
  struct _MMPTE *SubsectionBase;                // offset: 0x10 ordinal: 0x4
  ULONG UnusedPtes;                             // offset: 0x14 ordinal: 0x5
  ULONG PtesInSubsection;                       // offset: 0x18 ordinal: 0x6
  struct _SUBSECTION *NextSubsection;           // offset: 0x1c ordinal: 0x7
} _SUBSECTION;

// 0x14 bytes (sizeof)
typedef struct _KDEVICE_QUEUE {
  SHORT Type;                        // offset: 0x0 ordinal: 0x0
  SHORT Size;                        // offset: 0x2 ordinal: 0x1
  struct _LIST_ENTRY DeviceListHead; // offset: 0x4 ordinal: 0x2
  ULONG Lock;                        // offset: 0xc ordinal: 0x3
  UCHAR Busy;                        // offset: 0x10 ordinal: 0x4
} _KDEVICE_QUEUE;

// 0x1c bytes (sizeof)
typedef struct _EX_PUSH_LOCK_WAIT_BLOCK {
  struct _KEVENT WakeEvent;              // offset: 0x0 ordinal: 0x0
  struct _EX_PUSH_LOCK_WAIT_BLOCK *Next; // offset: 0x10 ordinal: 0x1
  ULONG ShareCount;                      // offset: 0x14 ordinal: 0x2
  UCHAR Exclusive;                       // offset: 0x18 ordinal: 0x3
} _EX_PUSH_LOCK_WAIT_BLOCK;

// 0x4 bytes (sizeof)
typedef struct _EX_PUSH_LOCK {
  ULONG Waiting : 1;   // offset: 0x0 ordinal: 0x0
  ULONG Exclusive : 1; // offset: 0x0 ordinal: 0x1
  ULONG Shared : 30;   // offset: 0x0 ordinal: 0x2
  union {
    ULONG Value; // offset: 0x0 ordinal: 0x3
    VOID *Ptr;   // offset: 0x0 ordinal: 0x4
  };
} _EX_PUSH_LOCK;

// 0xa4 bytes (sizeof)
typedef struct _OBJECT_DIRECTORY {
  struct _OBJECT_DIRECTORY_ENTRY *HashBuckets[37]; // offset: 0x0 ordinal: 0x0
  struct _EX_PUSH_LOCK Lock;                       // offset: 0x94 ordinal: 0x1
  struct _DEVICE_MAP *DeviceMap;                   // offset: 0x98 ordinal: 0x2
  ULONG SessionId;                                 // offset: 0x9c ordinal: 0x3
  USHORT Reserved;                                 // offset: 0xa0 ordinal: 0x4
  USHORT SymbolicLinkUsageCount;                   // offset: 0xa2 ordinal: 0x5
} _OBJECT_DIRECTORY;

// 0x30 bytes (sizeof)
typedef struct _DEVICE_MAP {
  struct _OBJECT_DIRECTORY *DosDevicesDirectory; // offset: 0x0 ordinal: 0x0
  struct _OBJECT_DIRECTORY
      *GlobalDosDevicesDirectory; // offset: 0x4 ordinal: 0x1
  ULONG ReferenceCount;           // offset: 0x8 ordinal: 0x2
  ULONG DriveMap;                 // offset: 0xc ordinal: 0x3
  UCHAR DriveType[32];            // offset: 0x10 ordinal: 0x4
} _DEVICE_MAP;

// 0x10 bytes (sizeof)
typedef struct _OBJECT_HEADER_NAME_INFO {
  struct _OBJECT_DIRECTORY *Directory; // offset: 0x0 ordinal: 0x0
  struct _UNICODE_STRING Name;         // offset: 0x4 ordinal: 0x1
  ULONG QueryReferences;               // offset: 0xc ordinal: 0x2
} _OBJECT_HEADER_NAME_INFO;

// 0x80 bytes (sizeof)
typedef struct _EX_PUSH_LOCK_CACHE_AWARE {
  struct _EX_PUSH_LOCK *Locks[32]; // offset: 0x0 ordinal: 0x0
} _EX_PUSH_LOCK_CACHE_AWARE;

// 0x4 bytes (sizeof)
typedef struct _EX_FAST_REF {
  union {
    VOID *Object;     // offset: 0x0 ordinal: 0x0
    ULONG RefCnt : 3; // offset: 0x0 ordinal: 0x1
  };
  ULONG Value; // offset: 0x0 ordinal: 0x2
} _EX_FAST_REF;

// 0x4 bytes (sizeof)
typedef struct _EX_RUNDOWN_REF {
  union {
    ULONG Count; // offset: 0x0 ordinal: 0x0
    VOID *Ptr;   // offset: 0x0 ordinal: 0x1
  };
} _EX_RUNDOWN_REF;

typedef VOID *(*__anon_140)(enum _POOL_TYPE, ULONG, ULONG);

// 0x38 bytes (sizeof)
typedef struct _IMAGE_ROM_OPTIONAL_HEADER {
  USHORT Magic;                  // offset: 0x0 ordinal: 0x0
  UCHAR MajorLinkerVersion;      // offset: 0x2 ordinal: 0x1
  UCHAR MinorLinkerVersion;      // offset: 0x3 ordinal: 0x2
  ULONG SizeOfCode;              // offset: 0x4 ordinal: 0x3
  ULONG SizeOfInitializedData;   // offset: 0x8 ordinal: 0x4
  ULONG SizeOfUninitializedData; // offset: 0xc ordinal: 0x5
  ULONG AddressOfEntryPoint;     // offset: 0x10 ordinal: 0x6
  ULONG BaseOfCode;              // offset: 0x14 ordinal: 0x7
  ULONG BaseOfData;              // offset: 0x18 ordinal: 0x8
  ULONG BaseOfBss;               // offset: 0x1c ordinal: 0x9
  ULONG GprMask;                 // offset: 0x20 ordinal: 0xa
  ULONG CprMask[4];              // offset: 0x24 ordinal: 0xb
  ULONG GpValue;                 // offset: 0x34 ordinal: 0xc
} _IMAGE_ROM_OPTIONAL_HEADER;

// 0x20ac bytes (sizeof)
typedef struct _KTSS {
  USHORT Backlink;                 // offset: 0x0 ordinal: 0x0
  USHORT Reserved0;                // offset: 0x2 ordinal: 0x1
  ULONG Esp0;                      // offset: 0x4 ordinal: 0x2
  USHORT Ss0;                      // offset: 0x8 ordinal: 0x3
  USHORT Reserved1;                // offset: 0xa ordinal: 0x4
  ULONG NotUsed1[4];               // offset: 0xc ordinal: 0x5
  ULONG CR3;                       // offset: 0x1c ordinal: 0x6
  ULONG Eip;                       // offset: 0x20 ordinal: 0x7
  ULONG EFlags;                    // offset: 0x24 ordinal: 0x8
  ULONG Eax;                       // offset: 0x28 ordinal: 0x9
  ULONG Ecx;                       // offset: 0x2c ordinal: 0xa
  ULONG Edx;                       // offset: 0x30 ordinal: 0xb
  ULONG Ebx;                       // offset: 0x34 ordinal: 0xc
  ULONG Esp;                       // offset: 0x38 ordinal: 0xd
  ULONG Ebp;                       // offset: 0x3c ordinal: 0xe
  ULONG Esi;                       // offset: 0x40 ordinal: 0xf
  ULONG Edi;                       // offset: 0x44 ordinal: 0x10
  USHORT Es;                       // offset: 0x48 ordinal: 0x11
  USHORT Reserved2;                // offset: 0x4a ordinal: 0x12
  USHORT Cs;                       // offset: 0x4c ordinal: 0x13
  USHORT Reserved3;                // offset: 0x4e ordinal: 0x14
  USHORT Ss;                       // offset: 0x50 ordinal: 0x15
  USHORT Reserved4;                // offset: 0x52 ordinal: 0x16
  USHORT Ds;                       // offset: 0x54 ordinal: 0x17
  USHORT Reserved5;                // offset: 0x56 ordinal: 0x18
  USHORT Fs;                       // offset: 0x58 ordinal: 0x19
  USHORT Reserved6;                // offset: 0x5a ordinal: 0x1a
  USHORT Gs;                       // offset: 0x5c ordinal: 0x1b
  USHORT Reserved7;                // offset: 0x5e ordinal: 0x1c
  USHORT LDT;                      // offset: 0x60 ordinal: 0x1d
  USHORT Reserved8;                // offset: 0x62 ordinal: 0x1e
  USHORT Flags;                    // offset: 0x64 ordinal: 0x1f
  USHORT IoMapBase;                // offset: 0x66 ordinal: 0x20
  struct _KiIoAccessMap IoMaps[1]; // offset: 0x68 ordinal: 0x21
  UCHAR IntDirectionMap[32];       // offset: 0x208c ordinal: 0x22
} _KTSS;

// 0x208 bytes (sizeof)
typedef struct _FXSAVE_FORMAT {
  USHORT ControlWord;      // offset: 0x0 ordinal: 0x0
  USHORT StatusWord;       // offset: 0x2 ordinal: 0x1
  USHORT TagWord;          // offset: 0x4 ordinal: 0x2
  USHORT ErrorOpcode;      // offset: 0x6 ordinal: 0x3
  ULONG ErrorOffset;       // offset: 0x8 ordinal: 0x4
  ULONG ErrorSelector;     // offset: 0xc ordinal: 0x5
  ULONG DataOffset;        // offset: 0x10 ordinal: 0x6
  ULONG DataSelector;      // offset: 0x14 ordinal: 0x7
  ULONG MXCsr;             // offset: 0x18 ordinal: 0x8
  ULONG MXCsrMask;         // offset: 0x1c ordinal: 0x9
  UCHAR RegisterArea[128]; // offset: 0x20 ordinal: 0xa
  UCHAR Reserved3[128];    // offset: 0xa0 ordinal: 0xb
  UCHAR Reserved4[224];    // offset: 0x120 ordinal: 0xc
  UCHAR Align16Byte[8];    // offset: 0x200 ordinal: 0xd
} _FXSAVE_FORMAT;

// 0x6c bytes (sizeof)
typedef struct _FNSAVE_FORMAT {
  ULONG ControlWord;      // offset: 0x0 ordinal: 0x0
  ULONG StatusWord;       // offset: 0x4 ordinal: 0x1
  ULONG TagWord;          // offset: 0x8 ordinal: 0x2
  ULONG ErrorOffset;      // offset: 0xc ordinal: 0x3
  ULONG ErrorSelector;    // offset: 0x10 ordinal: 0x4
  ULONG DataOffset;       // offset: 0x14 ordinal: 0x5
  ULONG DataSelector;     // offset: 0x18 ordinal: 0x6
  UCHAR RegisterArea[80]; // offset: 0x1c ordinal: 0x7
} _FNSAVE_FORMAT;

// 0x8 bytes (sizeof)
typedef struct _KSPIN_LOCK_QUEUE {
  struct _KSPIN_LOCK_QUEUE *Next; // offset: 0x0 ordinal: 0x0
  ULONG *Lock;                    // offset: 0x4 ordinal: 0x1
} _KSPIN_LOCK_QUEUE;

// 0xc bytes (sizeof)
typedef struct _KLOCK_QUEUE_HANDLE {
  struct _KSPIN_LOCK_QUEUE LockQueue; // offset: 0x0 ordinal: 0x0
  UCHAR OldIrql;                      // offset: 0x8 ordinal: 0x1
} _KLOCK_QUEUE_HANDLE;

// 0x8 bytes (sizeof)
typedef struct _DESCRIPTOR {
  USHORT Pad;   // offset: 0x0 ordinal: 0x0
  USHORT Limit; // offset: 0x2 ordinal: 0x1
  ULONG Base;   // offset: 0x4 ordinal: 0x2
} _DESCRIPTOR;

// 0xe8 bytes (sizeof)
typedef struct _SYSTEM_POWER_POLICY {
  ULONG Revision;                               // offset: 0x0 ordinal: 0x0
  struct POWER_ACTION_POLICY PowerButton;       // offset: 0x4 ordinal: 0x1
  struct POWER_ACTION_POLICY SleepButton;       // offset: 0x10 ordinal: 0x2
  struct POWER_ACTION_POLICY LidClose;          // offset: 0x1c ordinal: 0x3
  enum _SYSTEM_POWER_STATE LidOpenWake;         // offset: 0x28 ordinal: 0x4
  ULONG Reserved;                               // offset: 0x2c ordinal: 0x5
  struct POWER_ACTION_POLICY Idle;              // offset: 0x30 ordinal: 0x6
  ULONG IdleTimeout;                            // offset: 0x3c ordinal: 0x7
  UCHAR IdleSensitivity;                        // offset: 0x40 ordinal: 0x8
  UCHAR DynamicThrottle;                        // offset: 0x41 ordinal: 0x9
  UCHAR Spare2[2];                              // offset: 0x42 ordinal: 0xa
  enum _SYSTEM_POWER_STATE MinSleep;            // offset: 0x44 ordinal: 0xb
  enum _SYSTEM_POWER_STATE MaxSleep;            // offset: 0x48 ordinal: 0xc
  enum _SYSTEM_POWER_STATE ReducedLatencySleep; // offset: 0x4c ordinal: 0xd
  ULONG WinLogonFlags;                          // offset: 0x50 ordinal: 0xe
  ULONG Spare3;                                 // offset: 0x54 ordinal: 0xf
  ULONG DozeS4Timeout;                          // offset: 0x58 ordinal: 0x10
  ULONG BroadcastCapacityResolution;            // offset: 0x5c ordinal: 0x11
  struct SYSTEM_POWER_LEVEL DischargePolicy[4]; // offset: 0x60 ordinal: 0x12
  ULONG VideoTimeout;                           // offset: 0xc0 ordinal: 0x13
  UCHAR VideoDimDisplay;                        // offset: 0xc4 ordinal: 0x14
  ULONG VideoReserved[3];                       // offset: 0xc8 ordinal: 0x15
  ULONG SpindownTimeout;                        // offset: 0xd4 ordinal: 0x16
  UCHAR OptimizeForPower;                       // offset: 0xd8 ordinal: 0x17
  UCHAR FanThrottleTolerance;                   // offset: 0xd9 ordinal: 0x18
  UCHAR ForcedThrottle;                         // offset: 0xda ordinal: 0x19
  UCHAR MinThrottle;                            // offset: 0xdb ordinal: 0x1a
  struct POWER_ACTION_POLICY OverThrottled;     // offset: 0xdc ordinal: 0x1b
} _SYSTEM_POWER_POLICY;

// 0x210 bytes (sizeof)
typedef struct _FX_SAVE_AREA {
  union {
    struct _FNSAVE_FORMAT FnArea; // offset: 0x0 ordinal: 0x0
    struct _FXSAVE_FORMAT FxArea; // offset: 0x0 ordinal: 0x1
  } U;                            // offset: 0x0 ordinal: 0x0
  ULONG NpxSavedCpu;              // offset: 0x208 ordinal: 0x1
  ULONG Cr0NpxState;              // offset: 0x20c ordinal: 0x2
} _FX_SAVE_AREA;

// 0x30 bytes (sizeof)
typedef struct _PCI_HEADER_TYPE_0 {
  ULONG BaseAddresses[6]; // offset: 0x0 ordinal: 0x0
  ULONG CIS;              // offset: 0x18 ordinal: 0x1
  USHORT SubVendorID;     // offset: 0x1c ordinal: 0x2
  USHORT SubSystemID;     // offset: 0x1e ordinal: 0x3
  ULONG ROMBaseAddress;   // offset: 0x20 ordinal: 0x4
  UCHAR CapabilitiesPtr;  // offset: 0x24 ordinal: 0x5
  UCHAR Reserved1[3];     // offset: 0x25 ordinal: 0x6
  ULONG Reserved2;        // offset: 0x28 ordinal: 0x7
  UCHAR InterruptLine;    // offset: 0x2c ordinal: 0x8
  UCHAR InterruptPin;     // offset: 0x2d ordinal: 0x9
  UCHAR MinimumGrant;     // offset: 0x2e ordinal: 0xa
  UCHAR MaximumLatency;   // offset: 0x2f ordinal: 0xb
} _PCI_HEADER_TYPE_0;

// 0x54 bytes (sizeof)
typedef struct _KSPECIAL_REGISTERS {
  ULONG Cr0;               // offset: 0x0 ordinal: 0x0
  ULONG Cr2;               // offset: 0x4 ordinal: 0x1
  ULONG Cr3;               // offset: 0x8 ordinal: 0x2
  ULONG Cr4;               // offset: 0xc ordinal: 0x3
  ULONG KernelDr0;         // offset: 0x10 ordinal: 0x4
  ULONG KernelDr1;         // offset: 0x14 ordinal: 0x5
  ULONG KernelDr2;         // offset: 0x18 ordinal: 0x6
  ULONG KernelDr3;         // offset: 0x1c ordinal: 0x7
  ULONG KernelDr6;         // offset: 0x20 ordinal: 0x8
  ULONG KernelDr7;         // offset: 0x24 ordinal: 0x9
  struct _DESCRIPTOR Gdtr; // offset: 0x28 ordinal: 0xa
  struct _DESCRIPTOR Idtr; // offset: 0x30 ordinal: 0xb
  USHORT Tr;               // offset: 0x38 ordinal: 0xc
  USHORT Ldtr;             // offset: 0x3a ordinal: 0xd
  ULONG Reserved[6];       // offset: 0x3c ordinal: 0xe
} _KSPECIAL_REGISTERS;

// 0x8 bytes (sizeof)
typedef struct _CM_KEY_INDEX {
  USHORT Signature; // offset: 0x0 ordinal: 0x0
  USHORT Count;     // offset: 0x2 ordinal: 0x1
  ULONG List[1];    // offset: 0x4 ordinal: 0x2
} _CM_KEY_INDEX;

// 0x8 bytes (sizeof)
typedef struct _CM_INDEX_HINT_BLOCK {
  ULONG Count;      // offset: 0x0 ordinal: 0x0
  ULONG HashKey[1]; // offset: 0x4 ordinal: 0x1
} _CM_INDEX_HINT_BLOCK;

// 0x30 bytes (sizeof)
typedef struct _SECTION_IMAGE_INFORMATION {
  VOID *TransferAddress;        // offset: 0x0 ordinal: 0x0
  ULONG ZeroBits;               // offset: 0x4 ordinal: 0x1
  ULONG MaximumStackSize;       // offset: 0x8 ordinal: 0x2
  ULONG CommittedStackSize;     // offset: 0xc ordinal: 0x3
  ULONG SubSystemType;          // offset: 0x10 ordinal: 0x4
  USHORT SubSystemMinorVersion; // offset: 0x14 ordinal: 0x5
  USHORT SubSystemMajorVersion; // offset: 0x16 ordinal: 0x6
  ULONG SubSystemVersion;       // offset: 0x14 ordinal: 0x7
  ULONG GpValue;                // offset: 0x18 ordinal: 0x8
  USHORT ImageCharacteristics;  // offset: 0x1c ordinal: 0x9
  USHORT DllCharacteristics;    // offset: 0x1e ordinal: 0xa
  USHORT Machine;               // offset: 0x20 ordinal: 0xb
  UCHAR ImageContainsCode;      // offset: 0x22 ordinal: 0xc
  UCHAR Spare1;                 // offset: 0x23 ordinal: 0xd
  ULONG LoaderFlags;            // offset: 0x24 ordinal: 0xe
  ULONG ImageFileSize;          // offset: 0x28 ordinal: 0xf
  ULONG Reserved[1];            // offset: 0x2c ordinal: 0x10
} _SECTION_IMAGE_INFORMATION;

// 0xc bytes (sizeof)
typedef struct _SID {
  UCHAR Revision;          // offset: 0x0 ordinal: 0x0
  UCHAR SubAuthorityCount; // offset: 0x1 ordinal: 0x1
  struct _SID_IDENTIFIER_AUTHORITY
      IdentifierAuthority; // offset: 0x2 ordinal: 0x2
  ULONG SubAuthority[1];   // offset: 0x8 ordinal: 0x3
} _SID;

// 0x14 bytes (sizeof)
typedef struct _FILE_GET_QUOTA_INFORMATION {
  ULONG NextEntryOffset; // offset: 0x0 ordinal: 0x0
  ULONG SidLength;       // offset: 0x4 ordinal: 0x1
  struct _SID Sid;       // offset: 0x8 ordinal: 0x2
} _FILE_GET_QUOTA_INFORMATION;

// 0xc bytes (sizeof)
typedef struct _COMPRESSED_DATA_INFO {
  USHORT CompressionFormatAndEngine; // offset: 0x0 ordinal: 0x0
  UCHAR CompressionUnitShift;        // offset: 0x2 ordinal: 0x1
  UCHAR ChunkShift;                  // offset: 0x3 ordinal: 0x2
  UCHAR ClusterShift;                // offset: 0x4 ordinal: 0x3
  UCHAR Reserved;                    // offset: 0x5 ordinal: 0x4
  USHORT NumberOfChunks;             // offset: 0x6 ordinal: 0x5
  ULONG CompressedChunkSizes[1];     // offset: 0x8 ordinal: 0x6
} _COMPRESSED_DATA_INFO;

// 0x70 bytes (sizeof)
typedef struct _FLOATING_SAVE_AREA {
  ULONG ControlWord;      // offset: 0x0 ordinal: 0x0
  ULONG StatusWord;       // offset: 0x4 ordinal: 0x1
  ULONG TagWord;          // offset: 0x8 ordinal: 0x2
  ULONG ErrorOffset;      // offset: 0xc ordinal: 0x3
  ULONG ErrorSelector;    // offset: 0x10 ordinal: 0x4
  ULONG DataOffset;       // offset: 0x14 ordinal: 0x5
  ULONG DataSelector;     // offset: 0x18 ordinal: 0x6
  UCHAR RegisterArea[80]; // offset: 0x1c ordinal: 0x7
  ULONG Cr0NpxState;      // offset: 0x6c ordinal: 0x8
} _FLOATING_SAVE_AREA;

// 0x50 bytes (sizeof)
typedef struct _EXCEPTION_RECORD32 {
  LONG ExceptionCode;             // offset: 0x0 ordinal: 0x0
  ULONG ExceptionFlags;           // offset: 0x4 ordinal: 0x1
  ULONG ExceptionRecord;          // offset: 0x8 ordinal: 0x2
  ULONG ExceptionAddress;         // offset: 0xc ordinal: 0x3
  ULONG NumberParameters;         // offset: 0x10 ordinal: 0x4
  ULONG ExceptionInformation[15]; // offset: 0x14 ordinal: 0x5
} _EXCEPTION_RECORD32;

// 0x54 bytes (sizeof)
typedef struct _DBGKM_EXCEPTION32 {
  struct _EXCEPTION_RECORD32 ExceptionRecord; // offset: 0x0 ordinal: 0x0
  ULONG FirstChance;                          // offset: 0x50 ordinal: 0x1
} _DBGKM_EXCEPTION32;

// 0x2cc bytes (sizeof)
typedef struct _CONTEXT {
  ULONG ContextFlags;                   // offset: 0x0 ordinal: 0x0
  ULONG Dr0;                            // offset: 0x4 ordinal: 0x1
  ULONG Dr1;                            // offset: 0x8 ordinal: 0x2
  ULONG Dr2;                            // offset: 0xc ordinal: 0x3
  ULONG Dr3;                            // offset: 0x10 ordinal: 0x4
  ULONG Dr6;                            // offset: 0x14 ordinal: 0x5
  ULONG Dr7;                            // offset: 0x18 ordinal: 0x6
  struct _FLOATING_SAVE_AREA FloatSave; // offset: 0x1c ordinal: 0x7
  ULONG SegGs;                          // offset: 0x8c ordinal: 0x8
  ULONG SegFs;                          // offset: 0x90 ordinal: 0x9
  ULONG SegEs;                          // offset: 0x94 ordinal: 0xa
  ULONG SegDs;                          // offset: 0x98 ordinal: 0xb
  ULONG Edi;                            // offset: 0x9c ordinal: 0xc
  ULONG Esi;                            // offset: 0xa0 ordinal: 0xd
  ULONG Ebx;                            // offset: 0xa4 ordinal: 0xe
  ULONG Edx;                            // offset: 0xa8 ordinal: 0xf
  ULONG Ecx;                            // offset: 0xac ordinal: 0x10
  ULONG Eax;                            // offset: 0xb0 ordinal: 0x11
  ULONG Ebp;                            // offset: 0xb4 ordinal: 0x12
  ULONG Eip;                            // offset: 0xb8 ordinal: 0x13
  ULONG SegCs;                          // offset: 0xbc ordinal: 0x14
  ULONG EFlags;                         // offset: 0xc0 ordinal: 0x15
  ULONG Esp;                            // offset: 0xc4 ordinal: 0x16
  ULONG SegSs;                          // offset: 0xc8 ordinal: 0x17
  UCHAR ExtendedRegisters[512];         // offset: 0xcc ordinal: 0x18
} _CONTEXT;

// 0x320 bytes (sizeof)
typedef struct _KPROCESSOR_STATE {
  struct _CONTEXT ContextFrame;                // offset: 0x0 ordinal: 0x0
  struct _KSPECIAL_REGISTERS SpecialRegisters; // offset: 0x2cc ordinal: 0x1
} _KPROCESSOR_STATE;

// 0x8 bytes (sizeof)
typedef struct _EXCEPTION_POINTERS {
  struct _EXCEPTION_RECORD *ExceptionRecord; // offset: 0x0 ordinal: 0x0
  struct _CONTEXT *ContextRecord;            // offset: 0x4 ordinal: 0x1
} _EXCEPTION_POINTERS;

typedef enum _EXCEPTION_DISPOSITION (*__anon_72)(struct _EXCEPTION_RECORD *,
                                                 VOID *, struct _CONTEXT *,
                                                 VOID *);

// 0x8 bytes (sizeof)
typedef struct _EXCEPTION_REGISTRATION_RECORD {
  struct _EXCEPTION_REGISTRATION_RECORD *Next; // offset: 0x0 ordinal: 0x0
  enum _EXCEPTION_DISPOSITION (*Handler)(struct _EXCEPTION_RECORD *, VOID *,
                                         struct _CONTEXT *,
                                         VOID *); // offset: 0x4 ordinal: 0x1
} _EXCEPTION_REGISTRATION_RECORD;

// 0x50 bytes (sizeof)
typedef struct _EXCEPTION_RECORD {
  LONG ExceptionCode;                        // offset: 0x0 ordinal: 0x0
  ULONG ExceptionFlags;                      // offset: 0x4 ordinal: 0x1
  struct _EXCEPTION_RECORD *ExceptionRecord; // offset: 0x8 ordinal: 0x2
  VOID *ExceptionAddress;                    // offset: 0xc ordinal: 0x3
  ULONG NumberParameters;                    // offset: 0x10 ordinal: 0x4
  ULONG ExceptionInformation[15];            // offset: 0x14 ordinal: 0x5
} _EXCEPTION_RECORD;

// 0x8 bytes (sizeof)
typedef struct _KGDTENTRY {
  USHORT LimitLow; // offset: 0x0 ordinal: 0x0
  USHORT BaseLow;  // offset: 0x2 ordinal: 0x1
  union {
    struct {
      UCHAR BaseMid; // offset: 0x0 ordinal: 0x0
      UCHAR Flags1;  // offset: 0x1 ordinal: 0x1
      UCHAR Flags2;  // offset: 0x2 ordinal: 0x2
      UCHAR BaseHi;  // offset: 0x3 ordinal: 0x3
    } Bytes;         // offset: 0x0 ordinal: 0x0
    struct {
      ULONG BaseMid : 8;     // offset: 0x0 ordinal: 0x0
      ULONG Type : 5;        // offset: 0x0 ordinal: 0x1
      ULONG Dpl : 2;         // offset: 0x0 ordinal: 0x2
      ULONG Pres : 1;        // offset: 0x0 ordinal: 0x3
      ULONG LimitHi : 4;     // offset: 0x0 ordinal: 0x4
      ULONG Sys : 1;         // offset: 0x0 ordinal: 0x5
      ULONG Reserved_0 : 1;  // offset: 0x0 ordinal: 0x6
      ULONG Default_Big : 1; // offset: 0x0 ordinal: 0x7
      ULONG Granularity : 1; // offset: 0x0 ordinal: 0x8
      ULONG BaseHi : 8;      // offset: 0x0 ordinal: 0x9
    } Bits;                  // offset: 0x0 ordinal: 0x1
  } HighWord;                // offset: 0x4 ordinal: 0x2
} _KGDTENTRY;

// 0x38 bytes (sizeof)
typedef struct _PLUGPLAY_EVENT_BLOCK {
  struct _GUID EventGuid;                      // offset: 0x0 ordinal: 0x0
  enum _PLUGPLAY_EVENT_CATEGORY EventCategory; // offset: 0x10 ordinal: 0x1
  ULONG *Result;                               // offset: 0x14 ordinal: 0x2
  ULONG Flags;                                 // offset: 0x18 ordinal: 0x3
  ULONG TotalSize;                             // offset: 0x1c ordinal: 0x4
  VOID *DeviceObject;                          // offset: 0x20 ordinal: 0x5
  union {
    struct {
      struct _GUID ClassGuid;     // offset: 0x0 ordinal: 0x0
      USHORT SymbolicLinkName[1]; // offset: 0x10 ordinal: 0x1
    } DeviceClass;                // offset: 0x0 ordinal: 0x0
    struct {
      USHORT DeviceIds[1]; // offset: 0x0 ordinal: 0x0
    } TargetDevice;        // offset: 0x0 ordinal: 0x1
    struct {
      USHORT DeviceId[1]; // offset: 0x0 ordinal: 0x0
    } InstallDevice;      // offset: 0x0 ordinal: 0x2
    struct {
      VOID *NotificationStructure; // offset: 0x0 ordinal: 0x0
      USHORT DeviceIds[1];         // offset: 0x4 ordinal: 0x1
    } CustomNotification;          // offset: 0x0 ordinal: 0x3
    struct {
      VOID *Notification;  // offset: 0x0 ordinal: 0x0
    } ProfileNotification; // offset: 0x0 ordinal: 0x4
    struct {
      ULONG NotificationCode; // offset: 0x0 ordinal: 0x0
      ULONG NotificationData; // offset: 0x4 ordinal: 0x1
    } PowerNotification;      // offset: 0x0 ordinal: 0x5
    struct {
      enum _PNP_VETO_TYPE VetoType;     // offset: 0x0 ordinal: 0x0
      USHORT DeviceIdVetoNameBuffer[1]; // offset: 0x4 ordinal: 0x1
    } VetoNotification;                 // offset: 0x0 ordinal: 0x6
    struct {
      struct _GUID BlockedDriverGuid; // offset: 0x0 ordinal: 0x0
    } BlockedDriverNotification;      // offset: 0x0 ordinal: 0x7
  } u;                                // offset: 0x24 ordinal: 0x6
} _PLUGPLAY_EVENT_BLOCK;

// 0x58 bytes (sizeof)
typedef struct _PNP_DEVICE_EVENT_ENTRY {
  struct _LIST_ENTRY ListEntry;      // offset: 0x0 ordinal: 0x0
  ULONG Argument;                    // offset: 0x8 ordinal: 0x1
  struct _KEVENT *CallerEvent;       // offset: 0xc ordinal: 0x2
  VOID (*Callback)(VOID *);          // offset: 0x10 ordinal: 0x3
  VOID *Context;                     // offset: 0x14 ordinal: 0x4
  enum _PNP_VETO_TYPE *VetoType;     // offset: 0x18 ordinal: 0x5
  struct _UNICODE_STRING *VetoName;  // offset: 0x1c ordinal: 0x6
  struct _PLUGPLAY_EVENT_BLOCK Data; // offset: 0x20 ordinal: 0x7
} _PNP_DEVICE_EVENT_ENTRY;

// 0xc bytes (sizeof)
typedef struct _Wx86ThreadState {
  ULONG *CallBx86Eip;    // offset: 0x0 ordinal: 0x0
  VOID *DeallocationCpu; // offset: 0x4 ordinal: 0x1
  UCHAR UseKnownWx86Dll; // offset: 0x8 ordinal: 0x2
  CHAR OleStubInvoked;   // offset: 0x9 ordinal: 0x3
} _Wx86ThreadState;

// 0x1e4 bytes (sizeof)
typedef struct _KINTERRUPT {
  SHORT Type;                            // offset: 0x0 ordinal: 0x0
  SHORT Size;                            // offset: 0x2 ordinal: 0x1
  struct _LIST_ENTRY InterruptListEntry; // offset: 0x4 ordinal: 0x2
  UCHAR(*ServiceRoutine)
  (struct _KINTERRUPT *, VOID *); // offset: 0xc ordinal: 0x3
  VOID *ServiceContext;           // offset: 0x10 ordinal: 0x4
  ULONG SpinLock;                 // offset: 0x14 ordinal: 0x5
  ULONG TickCount;                // offset: 0x18 ordinal: 0x6
  ULONG *ActualLock;              // offset: 0x1c ordinal: 0x7
  VOID (*DispatchAddress)();      // offset: 0x20 ordinal: 0x8
  ULONG Vector;                   // offset: 0x24 ordinal: 0x9
  UCHAR Irql;                     // offset: 0x28 ordinal: 0xa
  UCHAR SynchronizeIrql;          // offset: 0x29 ordinal: 0xb
  UCHAR FloatingSave;             // offset: 0x2a ordinal: 0xc
  UCHAR Connected;                // offset: 0x2b ordinal: 0xd
  CHAR Number;                    // offset: 0x2c ordinal: 0xe
  UCHAR ShareVector;              // offset: 0x2d ordinal: 0xf
  enum _KINTERRUPT_MODE Mode;     // offset: 0x30 ordinal: 0x10
  ULONG ServiceCount;             // offset: 0x34 ordinal: 0x11
  ULONG DispatchCount;            // offset: 0x38 ordinal: 0x12
  ULONG DispatchCode[106];        // offset: 0x3c ordinal: 0x13
} _KINTERRUPT;

typedef UCHAR (*__anon_975)(struct _KINTERRUPT *, VOID *);

typedef ULONG (*__anon_909)(struct _BUS_HANDLER *, struct _BUS_HANDLER *, ULONG,
                            ULONG, UCHAR *, ULONG *);

typedef UCHAR (*__anon_715)(struct _HHIVE *, ULONG, ULONG *, VOID *, ULONG);

typedef UCHAR (*__anon_714)(struct _HHIVE *, ULONG, struct CMP_OFFSET_ARRAY *,
                            ULONG, ULONG *);

// 0x8 bytes (sizeof)
typedef struct _RTL_BITMAP {
  ULONG SizeOfBitMap; // offset: 0x0 ordinal: 0x0
  ULONG *Buffer;      // offset: 0x4 ordinal: 0x1
} _RTL_BITMAP;

// 0x24 bytes (sizeof)
typedef struct _MM_PAGED_POOL_INFO {
  struct _RTL_BITMAP *PagedPoolAllocationMap; // offset: 0x0 ordinal: 0x0
  struct _RTL_BITMAP *EndOfPagedPoolBitmap;   // offset: 0x4 ordinal: 0x1
  struct _RTL_BITMAP
      *PagedPoolLargeSessionAllocationMap;     // offset: 0x8 ordinal: 0x2
  struct _MMPTE *FirstPteForPagedPool;         // offset: 0xc ordinal: 0x3
  struct _MMPTE *LastPteForPagedPool;          // offset: 0x10 ordinal: 0x4
  struct _MMPTE *NextPdeForPagedPoolExpansion; // offset: 0x14 ordinal: 0x5
  ULONG PagedPoolHint;                         // offset: 0x18 ordinal: 0x6
  ULONG PagedPoolCommit;                       // offset: 0x1c ordinal: 0x7
  ULONG AllocatedPagedPool;                    // offset: 0x20 ordinal: 0x8
} _MM_PAGED_POOL_INFO;

// 0x24 bytes (sizeof)
typedef struct _CM_VIEW_OF_FILE {
  struct _LIST_ENTRY LRUViewList; // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY PinViewList; // offset: 0x8 ordinal: 0x1
  ULONG FileOffset;               // offset: 0x10 ordinal: 0x2
  ULONG Size;                     // offset: 0x14 ordinal: 0x3
  ULONG *ViewAddress;             // offset: 0x18 ordinal: 0x4
  VOID *Bcb;                      // offset: 0x1c ordinal: 0x5
  ULONG UseCount;                 // offset: 0x20 ordinal: 0x6
} _CM_VIEW_OF_FILE;

// 0x10 bytes (sizeof)
typedef struct _HMAP_ENTRY {
  ULONG BlockAddress;              // offset: 0x0 ordinal: 0x0
  ULONG BinAddress;                // offset: 0x4 ordinal: 0x1
  struct _CM_VIEW_OF_FILE *CmView; // offset: 0x8 ordinal: 0x2
  ULONG MemAlloc;                  // offset: 0xc ordinal: 0x3
} _HMAP_ENTRY;

// 0x2000 bytes (sizeof)
typedef struct _HMAP_TABLE {
  struct _HMAP_ENTRY Table[512]; // offset: 0x0 ordinal: 0x0
} _HMAP_TABLE;

// 0x1000 bytes (sizeof)
typedef struct _HMAP_DIRECTORY {
  struct _HMAP_TABLE *Directory[1024]; // offset: 0x0 ordinal: 0x0
} _HMAP_DIRECTORY;

// 0xdc bytes (sizeof)
typedef struct _DUAL {
  ULONG Length;                       // offset: 0x0 ordinal: 0x0
  struct _HMAP_DIRECTORY *Map;        // offset: 0x4 ordinal: 0x1
  struct _HMAP_TABLE *SmallDir;       // offset: 0x8 ordinal: 0x2
  ULONG Guard;                        // offset: 0xc ordinal: 0x3
  struct _RTL_BITMAP FreeDisplay[24]; // offset: 0x10 ordinal: 0x4
  ULONG FreeSummary;                  // offset: 0xd0 ordinal: 0x5
  struct _LIST_ENTRY FreeBins;        // offset: 0xd4 ordinal: 0x6
} _DUAL;

typedef LONG (*__anon_593)(VOID *, VOID **, ULONG *);

// 0x20 bytes (sizeof)
typedef struct _BITMAP_RANGE {
  struct _LIST_ENTRY Links; // offset: 0x0 ordinal: 0x0
  LONGLONG BasePage;        // offset: 0x8 ordinal: 0x1
  ULONG FirstDirtyPage;     // offset: 0x10 ordinal: 0x2
  ULONG LastDirtyPage;      // offset: 0x14 ordinal: 0x3
  ULONG DirtyPages;         // offset: 0x18 ordinal: 0x4
  ULONG *Bitmap;            // offset: 0x1c ordinal: 0x5
} _BITMAP_RANGE;

// 0x80 bytes (sizeof)
typedef struct _MBCB {
  SHORT NodeTypeCode;                // offset: 0x0 ordinal: 0x0
  SHORT NodeIsInZone;                // offset: 0x2 ordinal: 0x1
  ULONG PagesToWrite;                // offset: 0x4 ordinal: 0x2
  ULONG DirtyPages;                  // offset: 0x8 ordinal: 0x3
  ULONG Reserved;                    // offset: 0xc ordinal: 0x4
  struct _LIST_ENTRY BitmapRanges;   // offset: 0x10 ordinal: 0x5
  LONGLONG ResumeWritePage;          // offset: 0x18 ordinal: 0x6
  struct _BITMAP_RANGE BitmapRange1; // offset: 0x20 ordinal: 0x7
  struct _BITMAP_RANGE BitmapRange2; // offset: 0x40 ordinal: 0x8
  struct _BITMAP_RANGE BitmapRange3; // offset: 0x60 ordinal: 0x9
} _MBCB;

typedef LONG (*__anon_489)(VOID *, UCHAR, struct _OBJECT_NAME_INFORMATION *,
                           ULONG, ULONG *);

typedef LONG (*__anon_488)(VOID *, enum _SECURITY_OPERATION_CODE, ULONG *,
                           VOID *, ULONG *, VOID **, enum _POOL_TYPE,
                           struct _GENERIC_MAPPING *, CHAR);

// 0x20 bytes (sizeof)
typedef struct _KDPC {
  SHORT Type;                      // offset: 0x0 ordinal: 0x0
  UCHAR Number;                    // offset: 0x2 ordinal: 0x1
  UCHAR Importance;                // offset: 0x3 ordinal: 0x2
  struct _LIST_ENTRY DpcListEntry; // offset: 0x4 ordinal: 0x3
  VOID(*DeferredRoutine)
  (struct _KDPC *, VOID *, VOID *, VOID *); // offset: 0xc ordinal: 0x4
  VOID *DeferredContext;                    // offset: 0x10 ordinal: 0x5
  VOID *SystemArgument1;                    // offset: 0x14 ordinal: 0x6
  VOID *SystemArgument2;                    // offset: 0x18 ordinal: 0x7
  ULONG *Lock;                              // offset: 0x1c ordinal: 0x8
} _KDPC;

typedef VOID (*__anon_68)(struct _KDPC *, VOID *, VOID *, VOID *);

// 0x30 bytes (sizeof)
typedef struct _PCI_HEADER_TYPE_1 {
  ULONG BaseAddresses[2];     // offset: 0x0 ordinal: 0x0
  UCHAR PrimaryBus;           // offset: 0x8 ordinal: 0x1
  UCHAR SecondaryBus;         // offset: 0x9 ordinal: 0x2
  UCHAR SubordinateBus;       // offset: 0xa ordinal: 0x3
  UCHAR SecondaryLatency;     // offset: 0xb ordinal: 0x4
  UCHAR IOBase;               // offset: 0xc ordinal: 0x5
  UCHAR IOLimit;              // offset: 0xd ordinal: 0x6
  USHORT SecondaryStatus;     // offset: 0xe ordinal: 0x7
  USHORT MemoryBase;          // offset: 0x10 ordinal: 0x8
  USHORT MemoryLimit;         // offset: 0x12 ordinal: 0x9
  USHORT PrefetchBase;        // offset: 0x14 ordinal: 0xa
  USHORT PrefetchLimit;       // offset: 0x16 ordinal: 0xb
  ULONG PrefetchBaseUpper32;  // offset: 0x18 ordinal: 0xc
  ULONG PrefetchLimitUpper32; // offset: 0x1c ordinal: 0xd
  USHORT IOBaseUpper16;       // offset: 0x20 ordinal: 0xe
  USHORT IOLimitUpper16;      // offset: 0x22 ordinal: 0xf
  UCHAR CapabilitiesPtr;      // offset: 0x24 ordinal: 0x10
  UCHAR Reserved1[3];         // offset: 0x25 ordinal: 0x11
  ULONG ROMBaseAddress;       // offset: 0x28 ordinal: 0x12
  UCHAR InterruptLine;        // offset: 0x2c ordinal: 0x13
  UCHAR InterruptPin;         // offset: 0x2d ordinal: 0x14
  USHORT BridgeControl;       // offset: 0x2e ordinal: 0x15
} _PCI_HEADER_TYPE_1;

// 0x100 bytes (sizeof)
typedef struct _PCI_COMMON_CONFIG {
  USHORT VendorID;     // offset: 0x0 ordinal: 0x0
  USHORT DeviceID;     // offset: 0x2 ordinal: 0x1
  USHORT Command;      // offset: 0x4 ordinal: 0x2
  USHORT Status;       // offset: 0x6 ordinal: 0x3
  UCHAR RevisionID;    // offset: 0x8 ordinal: 0x4
  UCHAR ProgIf;        // offset: 0x9 ordinal: 0x5
  UCHAR SubClass;      // offset: 0xa ordinal: 0x6
  UCHAR BaseClass;     // offset: 0xb ordinal: 0x7
  UCHAR CacheLineSize; // offset: 0xc ordinal: 0x8
  UCHAR LatencyTimer;  // offset: 0xd ordinal: 0x9
  UCHAR HeaderType;    // offset: 0xe ordinal: 0xa
  UCHAR BIST;          // offset: 0xf ordinal: 0xb
  union {
    struct _PCI_HEADER_TYPE_0 type0; // offset: 0x0 ordinal: 0x0
    struct _PCI_HEADER_TYPE_1 type1; // offset: 0x0 ordinal: 0x1
    struct _PCI_HEADER_TYPE_2 type2; // offset: 0x0 ordinal: 0x2
  } u;                               // offset: 0x10 ordinal: 0xc
  UCHAR DeviceSpecific[192];         // offset: 0x40 ordinal: 0xd
} _PCI_COMMON_CONFIG;

typedef VOID (*__anon_904)(VOID *, struct _PCI_COMMON_CONFIG *,
                           struct _PCI_COMMON_CONFIG *);

typedef VOID (*__anon_903)(VOID *, struct _PCI_COMMON_CONFIG *);

// 0x20 bytes (sizeof)
typedef struct _PCI_BUS_INTERFACE_STANDARD {
  USHORT Size;                          // offset: 0x0 ordinal: 0x0
  USHORT Version;                       // offset: 0x2 ordinal: 0x1
  VOID *Context;                        // offset: 0x4 ordinal: 0x2
  VOID (*InterfaceReference)(VOID *);   // offset: 0x8 ordinal: 0x3
  VOID (*InterfaceDereference)(VOID *); // offset: 0xc ordinal: 0x4
  ULONG(*ReadConfig)
  (VOID *, UCHAR, ULONG, VOID *, ULONG, ULONG); // offset: 0x10 ordinal: 0x5
  ULONG(*WriteConfig)
  (VOID *, UCHAR, ULONG, VOID *, ULONG, ULONG); // offset: 0x14 ordinal: 0x6
  VOID(*PinToLine)
  (VOID *, struct _PCI_COMMON_CONFIG *); // offset: 0x18 ordinal: 0x7
  VOID(*LineToPin)
  (VOID *, struct _PCI_COMMON_CONFIG *,
   struct _PCI_COMMON_CONFIG *); // offset: 0x1c ordinal: 0x8
} _PCI_BUS_INTERFACE_STANDARD;

// 0x20 bytes (sizeof)
typedef struct _RTL_HANDLE_TABLE {
  ULONG MaximumNumberOfHandles;                     // offset: 0x0 ordinal: 0x0
  ULONG SizeOfHandleTableEntry;                     // offset: 0x4 ordinal: 0x1
  ULONG Reserved[2];                                // offset: 0x8 ordinal: 0x2
  struct _RTL_HANDLE_TABLE_ENTRY *FreeHandles;      // offset: 0x10 ordinal: 0x3
  struct _RTL_HANDLE_TABLE_ENTRY *CommittedHandles; // offset: 0x14 ordinal: 0x4
  struct _RTL_HANDLE_TABLE_ENTRY
      *UnCommittedHandles; // offset: 0x18 ordinal: 0x5
  struct _RTL_HANDLE_TABLE_ENTRY
      *MaxReservedHandles; // offset: 0x1c ordinal: 0x6
} _RTL_HANDLE_TABLE;

// 0x70 bytes (sizeof)
typedef struct _MM_DRIVER_VERIFIER_DATA {
  ULONG Level;                              // offset: 0x0 ordinal: 0x0
  ULONG RaiseIrqls;                         // offset: 0x4 ordinal: 0x1
  ULONG AcquireSpinLocks;                   // offset: 0x8 ordinal: 0x2
  ULONG SynchronizeExecutions;              // offset: 0xc ordinal: 0x3
  ULONG AllocationsAttempted;               // offset: 0x10 ordinal: 0x4
  ULONG AllocationsSucceeded;               // offset: 0x14 ordinal: 0x5
  ULONG AllocationsSucceededSpecialPool;    // offset: 0x18 ordinal: 0x6
  ULONG AllocationsWithNoTag;               // offset: 0x1c ordinal: 0x7
  ULONG TrimRequests;                       // offset: 0x20 ordinal: 0x8
  ULONG Trims;                              // offset: 0x24 ordinal: 0x9
  ULONG AllocationsFailed;                  // offset: 0x28 ordinal: 0xa
  ULONG AllocationsFailedDeliberately;      // offset: 0x2c ordinal: 0xb
  ULONG Loads;                              // offset: 0x30 ordinal: 0xc
  ULONG Unloads;                            // offset: 0x34 ordinal: 0xd
  ULONG UnTrackedPool;                      // offset: 0x38 ordinal: 0xe
  ULONG UserTrims;                          // offset: 0x3c ordinal: 0xf
  ULONG CurrentPagedPoolAllocations;        // offset: 0x40 ordinal: 0x10
  ULONG CurrentNonPagedPoolAllocations;     // offset: 0x44 ordinal: 0x11
  ULONG PeakPagedPoolAllocations;           // offset: 0x48 ordinal: 0x12
  ULONG PeakNonPagedPoolAllocations;        // offset: 0x4c ordinal: 0x13
  ULONG PagedBytes;                         // offset: 0x50 ordinal: 0x14
  ULONG NonPagedBytes;                      // offset: 0x54 ordinal: 0x15
  ULONG PeakPagedBytes;                     // offset: 0x58 ordinal: 0x16
  ULONG PeakNonPagedBytes;                  // offset: 0x5c ordinal: 0x17
  ULONG BurstAllocationsFailedDeliberately; // offset: 0x60 ordinal: 0x18
  ULONG SessionTrims;                       // offset: 0x64 ordinal: 0x19
  ULONG Reserved[2];                        // offset: 0x68 ordinal: 0x1a
} _MM_DRIVER_VERIFIER_DATA;

// 0x110 bytes (sizeof)
typedef struct _VI_DEADLOCK_GLOBALS {
  ULONG Nodes[2];                            // offset: 0x0 ordinal: 0x0
  ULONG Resources[2];                        // offset: 0x8 ordinal: 0x1
  ULONG Threads[2];                          // offset: 0x10 ordinal: 0x2
  LONGLONG TimeAcquire;                      // offset: 0x18 ordinal: 0x3
  LONGLONG TimeRelease;                      // offset: 0x20 ordinal: 0x4
  ULONG BytesAllocated;                      // offset: 0x28 ordinal: 0x5
  struct _LIST_ENTRY *ResourceDatabase;      // offset: 0x2c ordinal: 0x6
  struct _LIST_ENTRY *ThreadDatabase;        // offset: 0x30 ordinal: 0x7
  ULONG AllocationFailures;                  // offset: 0x34 ordinal: 0x8
  ULONG NodesTrimmedBasedOnAge;              // offset: 0x38 ordinal: 0x9
  ULONG NodesTrimmedBasedOnCount;            // offset: 0x3c ordinal: 0xa
  ULONG NodesSearched;                       // offset: 0x40 ordinal: 0xb
  ULONG MaxNodesSearched;                    // offset: 0x44 ordinal: 0xc
  ULONG SequenceNumber;                      // offset: 0x48 ordinal: 0xd
  ULONG RecursionDepthLimit;                 // offset: 0x4c ordinal: 0xe
  ULONG SearchedNodesLimit;                  // offset: 0x50 ordinal: 0xf
  ULONG DepthLimitHits;                      // offset: 0x54 ordinal: 0x10
  ULONG SearchLimitHits;                     // offset: 0x58 ordinal: 0x11
  ULONG ABC_ACB_Skipped;                     // offset: 0x5c ordinal: 0x12
  struct _LIST_ENTRY FreeResourceList;       // offset: 0x60 ordinal: 0x13
  struct _LIST_ENTRY FreeThreadList;         // offset: 0x68 ordinal: 0x14
  struct _LIST_ENTRY FreeNodeList;           // offset: 0x70 ordinal: 0x15
  ULONG FreeResourceCount;                   // offset: 0x78 ordinal: 0x16
  ULONG FreeThreadCount;                     // offset: 0x7c ordinal: 0x17
  ULONG FreeNodeCount;                       // offset: 0x80 ordinal: 0x18
  VOID *Instigator;                          // offset: 0x84 ordinal: 0x19
  ULONG NumberOfParticipants;                // offset: 0x88 ordinal: 0x1a
  struct _VI_DEADLOCK_NODE *Participant[32]; // offset: 0x8c ordinal: 0x1b
  ULONG CacheReductionInProgress;            // offset: 0x10c ordinal: 0x1c
} _VI_DEADLOCK_GLOBALS;

// 0x20 bytes (sizeof)
typedef struct _HEAP_SUBSEGMENT {
  VOID *Bucket;                             // offset: 0x0 ordinal: 0x0
  struct _HEAP_USERDATA_HEADER *UserBlocks; // offset: 0x4 ordinal: 0x1
  struct _INTERLOCK_SEQ AggregateExchg;     // offset: 0x8 ordinal: 0x2
  USHORT BlockSize;                         // offset: 0x10 ordinal: 0x3
  USHORT FreeThreshold;                     // offset: 0x12 ordinal: 0x4
  USHORT BlockCount;                        // offset: 0x14 ordinal: 0x5
  UCHAR SizeIndex;                          // offset: 0x16 ordinal: 0x6
  UCHAR AffinityIndex;                      // offset: 0x17 ordinal: 0x7
  ULONG Alignment[2];                       // offset: 0x10 ordinal: 0x8
  struct _SINGLE_LIST_ENTRY SFreeListEntry; // offset: 0x18 ordinal: 0x9
  ULONG Lock;                               // offset: 0x1c ordinal: 0xa
} _HEAP_SUBSEGMENT;

// 0x10 bytes (sizeof)
typedef struct _HEAP_USERDATA_HEADER {
  union {
    struct _SINGLE_LIST_ENTRY SFreeListEntry; // offset: 0x0 ordinal: 0x0
    struct _HEAP_SUBSEGMENT *SubSegment;      // offset: 0x0 ordinal: 0x1
  };
  VOID *HeapHandle; // offset: 0x4 ordinal: 0x2
  ULONG SizeIndex;  // offset: 0x8 ordinal: 0x3
  ULONG Signature;  // offset: 0xc ordinal: 0x4
} _HEAP_USERDATA_HEADER;

// 0x20 bytes (sizeof)
typedef struct _RTL_CRITICAL_SECTION_DEBUG {
  USHORT Type;                                   // offset: 0x0 ordinal: 0x0
  USHORT CreatorBackTraceIndex;                  // offset: 0x2 ordinal: 0x1
  struct _RTL_CRITICAL_SECTION *CriticalSection; // offset: 0x4 ordinal: 0x2
  struct _LIST_ENTRY ProcessLocksList;           // offset: 0x8 ordinal: 0x3
  ULONG EntryCount;                              // offset: 0x10 ordinal: 0x4
  ULONG ContentionCount;                         // offset: 0x14 ordinal: 0x5
  ULONG Spare[2];                                // offset: 0x18 ordinal: 0x6
} _RTL_CRITICAL_SECTION_DEBUG;

// 0x18 bytes (sizeof)
typedef struct _RTL_CRITICAL_SECTION {
  struct _RTL_CRITICAL_SECTION_DEBUG *DebugInfo; // offset: 0x0 ordinal: 0x0
  LONG LockCount;                                // offset: 0x4 ordinal: 0x1
  LONG RecursionCount;                           // offset: 0x8 ordinal: 0x2
  VOID *OwningThread;                            // offset: 0xc ordinal: 0x3
  VOID *LockSemaphore;                           // offset: 0x10 ordinal: 0x4
  ULONG SpinCount;                               // offset: 0x14 ordinal: 0x5
} _RTL_CRITICAL_SECTION;

// 0x44 bytes (sizeof)
typedef struct _RTL_ATOM_TABLE {
  ULONG Signature;                              // offset: 0x0 ordinal: 0x0
  struct _RTL_CRITICAL_SECTION CriticalSection; // offset: 0x4 ordinal: 0x1
  struct _RTL_HANDLE_TABLE RtlHandleTable;      // offset: 0x1c ordinal: 0x2
  ULONG NumberOfBuckets;                        // offset: 0x3c ordinal: 0x3
  struct _RTL_ATOM_TABLE_ENTRY *Buckets[1];     // offset: 0x40 ordinal: 0x4
} _RTL_ATOM_TABLE;

// 0x38 bytes (sizeof)
typedef struct _HEAP_LOCK {
  union {
    struct _RTL_CRITICAL_SECTION CriticalSection; // offset: 0x0 ordinal: 0x0
    struct _ERESOURCE Resource;                   // offset: 0x0 ordinal: 0x1
  } Lock;                                         // offset: 0x0 ordinal: 0x0
} _HEAP_LOCK;

// 0x588 bytes (sizeof)
typedef struct _HEAP {
  struct _HEAP_ENTRY Entry;              // offset: 0x0 ordinal: 0x0
  ULONG Signature;                       // offset: 0x8 ordinal: 0x1
  ULONG Flags;                           // offset: 0xc ordinal: 0x2
  ULONG ForceFlags;                      // offset: 0x10 ordinal: 0x3
  ULONG VirtualMemoryThreshold;          // offset: 0x14 ordinal: 0x4
  ULONG SegmentReserve;                  // offset: 0x18 ordinal: 0x5
  ULONG SegmentCommit;                   // offset: 0x1c ordinal: 0x6
  ULONG DeCommitFreeBlockThreshold;      // offset: 0x20 ordinal: 0x7
  ULONG DeCommitTotalFreeThreshold;      // offset: 0x24 ordinal: 0x8
  ULONG TotalFreeSize;                   // offset: 0x28 ordinal: 0x9
  ULONG MaximumAllocationSize;           // offset: 0x2c ordinal: 0xa
  USHORT ProcessHeapsListIndex;          // offset: 0x30 ordinal: 0xb
  USHORT HeaderValidateLength;           // offset: 0x32 ordinal: 0xc
  VOID *HeaderValidateCopy;              // offset: 0x34 ordinal: 0xd
  USHORT NextAvailableTagIndex;          // offset: 0x38 ordinal: 0xe
  USHORT MaximumTagIndex;                // offset: 0x3a ordinal: 0xf
  struct _HEAP_TAG_ENTRY *TagEntries;    // offset: 0x3c ordinal: 0x10
  struct _HEAP_UCR_SEGMENT *UCRSegments; // offset: 0x40 ordinal: 0x11
  struct _HEAP_UNCOMMMTTED_RANGE
      *UnusedUnCommittedRanges;           // offset: 0x44 ordinal: 0x12
  ULONG AlignRound;                       // offset: 0x48 ordinal: 0x13
  ULONG AlignMask;                        // offset: 0x4c ordinal: 0x14
  struct _LIST_ENTRY VirtualAllocdBlocks; // offset: 0x50 ordinal: 0x15
  struct _HEAP_SEGMENT *Segments[64];     // offset: 0x58 ordinal: 0x16
  union {
    ULONG FreeListsInUseUlong[4];  // offset: 0x0 ordinal: 0x0
    UCHAR FreeListsInUseBytes[16]; // offset: 0x0 ordinal: 0x1
  } u;                             // offset: 0x158 ordinal: 0x17
  union {
    USHORT FreeListsInUseTerminate; // offset: 0x0 ordinal: 0x0
    USHORT DecommitCount;           // offset: 0x0 ordinal: 0x1
  } u2;                             // offset: 0x168 ordinal: 0x18
  USHORT AllocatorBackTraceIndex;   // offset: 0x16a ordinal: 0x19
  ULONG NonDedicatedListLength;     // offset: 0x16c ordinal: 0x1a
  VOID *LargeBlocksIndex;           // offset: 0x170 ordinal: 0x1b
  struct _HEAP_PSEUDO_TAG_ENTRY
      *PseudoTagEntries;             // offset: 0x174 ordinal: 0x1c
  struct _LIST_ENTRY FreeLists[128]; // offset: 0x178 ordinal: 0x1d
  struct _HEAP_LOCK *LockVariable;   // offset: 0x578 ordinal: 0x1e
  LONG(*CommitRoutine)
  (VOID *, VOID **, ULONG *); // offset: 0x57c ordinal: 0x1f
  VOID *FrontEndHeap;         // offset: 0x580 ordinal: 0x20
  USHORT FrontHeapLockCount;  // offset: 0x584 ordinal: 0x21
  UCHAR FrontEndHeapType;     // offset: 0x586 ordinal: 0x22
  UCHAR LastSegmentIndex;     // offset: 0x587 ordinal: 0x23
} _HEAP;

// 0x3c bytes (sizeof)
typedef struct _HEAP_SEGMENT {
  struct _HEAP_ENTRY Entry;           // offset: 0x0 ordinal: 0x0
  ULONG Signature;                    // offset: 0x8 ordinal: 0x1
  ULONG Flags;                        // offset: 0xc ordinal: 0x2
  struct _HEAP *Heap;                 // offset: 0x10 ordinal: 0x3
  ULONG LargestUnCommittedRange;      // offset: 0x14 ordinal: 0x4
  VOID *BaseAddress;                  // offset: 0x18 ordinal: 0x5
  ULONG NumberOfPages;                // offset: 0x1c ordinal: 0x6
  struct _HEAP_ENTRY *FirstEntry;     // offset: 0x20 ordinal: 0x7
  struct _HEAP_ENTRY *LastValidEntry; // offset: 0x24 ordinal: 0x8
  ULONG NumberOfUnCommittedPages;     // offset: 0x28 ordinal: 0x9
  ULONG NumberOfUnCommittedRanges;    // offset: 0x2c ordinal: 0xa
  struct _HEAP_UNCOMMMTTED_RANGE
      *UnCommittedRanges;                 // offset: 0x30 ordinal: 0xb
  USHORT AllocatorBackTraceIndex;         // offset: 0x34 ordinal: 0xc
  USHORT Reserved;                        // offset: 0x36 ordinal: 0xd
  struct _HEAP_ENTRY *LastEntryInSegment; // offset: 0x38 ordinal: 0xe
} _HEAP_SEGMENT;

// 0x6c bytes (sizeof)
typedef struct _KPROCESS {
  struct _DISPATCHER_HEADER Header;        // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY ProfileListHead;      // offset: 0x10 ordinal: 0x1
  ULONG DirectoryTableBase[2];             // offset: 0x18 ordinal: 0x2
  struct _KGDTENTRY LdtDescriptor;         // offset: 0x20 ordinal: 0x3
  struct _KIDTENTRY Int21Descriptor;       // offset: 0x28 ordinal: 0x4
  USHORT IopmOffset;                       // offset: 0x30 ordinal: 0x5
  UCHAR Iopl;                              // offset: 0x32 ordinal: 0x6
  UCHAR Unused;                            // offset: 0x33 ordinal: 0x7
  ULONG ActiveProcessors;                  // offset: 0x34 ordinal: 0x8
  ULONG KernelTime;                        // offset: 0x38 ordinal: 0x9
  ULONG UserTime;                          // offset: 0x3c ordinal: 0xa
  struct _LIST_ENTRY ReadyListHead;        // offset: 0x40 ordinal: 0xb
  struct _SINGLE_LIST_ENTRY SwapListEntry; // offset: 0x48 ordinal: 0xc
  VOID *VdmTrapcHandler;                   // offset: 0x4c ordinal: 0xd
  struct _LIST_ENTRY ThreadListHead;       // offset: 0x50 ordinal: 0xe
  ULONG ProcessLock;                       // offset: 0x58 ordinal: 0xf
  ULONG Affinity;                          // offset: 0x5c ordinal: 0x10
  USHORT StackCount;                       // offset: 0x60 ordinal: 0x11
  CHAR BasePriority;                       // offset: 0x62 ordinal: 0x12
  CHAR ThreadQuantum;                      // offset: 0x63 ordinal: 0x13
  UCHAR AutoAlignment;                     // offset: 0x64 ordinal: 0x14
  UCHAR State;                             // offset: 0x65 ordinal: 0x15
  UCHAR ThreadSeed;                        // offset: 0x66 ordinal: 0x16
  UCHAR DisableBoost;                      // offset: 0x67 ordinal: 0x17
  UCHAR PowerState;                        // offset: 0x68 ordinal: 0x18
  UCHAR DisableQuantum;                    // offset: 0x69 ordinal: 0x19
  UCHAR IdealNode;                         // offset: 0x6a ordinal: 0x1a
  union {
    struct _KEXECUTE_OPTIONS Flags; // offset: 0x6b ordinal: 0x1b
    UCHAR ExecuteOptions;           // offset: 0x6b ordinal: 0x1c
  };
} _KPROCESS;

// 0x18 bytes (sizeof)
typedef struct _KAPC_STATE {
  struct _LIST_ENTRY ApcListHead[2]; // offset: 0x0 ordinal: 0x0
  struct _KPROCESS *Process;         // offset: 0x10 ordinal: 0x1
  UCHAR KernelApcInProgress;         // offset: 0x14 ordinal: 0x2
  UCHAR KernelApcPending;            // offset: 0x15 ordinal: 0x3
  UCHAR UserApcPending;              // offset: 0x16 ordinal: 0x4
} _KAPC_STATE;

// 0x8c bytes (sizeof)
typedef struct _KTRAP_FRAME {
  ULONG DbgEbp;               // offset: 0x0 ordinal: 0x0
  ULONG DbgEip;               // offset: 0x4 ordinal: 0x1
  ULONG DbgArgMark;           // offset: 0x8 ordinal: 0x2
  ULONG DbgArgPointer;        // offset: 0xc ordinal: 0x3
  ULONG TempSegCs;            // offset: 0x10 ordinal: 0x4
  ULONG TempEsp;              // offset: 0x14 ordinal: 0x5
  ULONG Dr0;                  // offset: 0x18 ordinal: 0x6
  ULONG Dr1;                  // offset: 0x1c ordinal: 0x7
  ULONG Dr2;                  // offset: 0x20 ordinal: 0x8
  ULONG Dr3;                  // offset: 0x24 ordinal: 0x9
  ULONG Dr6;                  // offset: 0x28 ordinal: 0xa
  ULONG Dr7;                  // offset: 0x2c ordinal: 0xb
  ULONG SegGs;                // offset: 0x30 ordinal: 0xc
  ULONG SegEs;                // offset: 0x34 ordinal: 0xd
  ULONG SegDs;                // offset: 0x38 ordinal: 0xe
  ULONG Edx;                  // offset: 0x3c ordinal: 0xf
  ULONG Ecx;                  // offset: 0x40 ordinal: 0x10
  ULONG Eax;                  // offset: 0x44 ordinal: 0x11
  ULONG PreviousPreviousMode; // offset: 0x48 ordinal: 0x12
  struct _EXCEPTION_REGISTRATION_RECORD
      *ExceptionList;  // offset: 0x4c ordinal: 0x13
  ULONG SegFs;         // offset: 0x50 ordinal: 0x14
  ULONG Edi;           // offset: 0x54 ordinal: 0x15
  ULONG Esi;           // offset: 0x58 ordinal: 0x16
  ULONG Ebx;           // offset: 0x5c ordinal: 0x17
  ULONG Ebp;           // offset: 0x60 ordinal: 0x18
  ULONG ErrCode;       // offset: 0x64 ordinal: 0x19
  ULONG Eip;           // offset: 0x68 ordinal: 0x1a
  ULONG SegCs;         // offset: 0x6c ordinal: 0x1b
  ULONG EFlags;        // offset: 0x70 ordinal: 0x1c
  ULONG HardwareEsp;   // offset: 0x74 ordinal: 0x1d
  ULONG HardwareSegSs; // offset: 0x78 ordinal: 0x1e
  ULONG V86Es;         // offset: 0x7c ordinal: 0x1f
  ULONG V86Ds;         // offset: 0x80 ordinal: 0x20
  ULONG V86Fs;         // offset: 0x84 ordinal: 0x21
  ULONG V86Gs;         // offset: 0x88 ordinal: 0x22
} _KTRAP_FRAME;

// 0x28 bytes (sizeof)
typedef struct _KQUEUE {
  struct _DISPATCHER_HEADER Header;  // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY EntryListHead;  // offset: 0x10 ordinal: 0x1
  ULONG CurrentCount;                // offset: 0x18 ordinal: 0x2
  ULONG MaximumCount;                // offset: 0x1c ordinal: 0x3
  struct _LIST_ENTRY ThreadListHead; // offset: 0x20 ordinal: 0x4
} _KQUEUE;

// 0x3c bytes (sizeof)
typedef struct _EX_WORK_QUEUE {
  struct _KQUEUE WorkerQueue;       // offset: 0x0 ordinal: 0x0
  ULONG DynamicThreadCount;         // offset: 0x28 ordinal: 0x1
  ULONG WorkItemsProcessed;         // offset: 0x2c ordinal: 0x2
  ULONG WorkItemsProcessedLastPass; // offset: 0x30 ordinal: 0x3
  ULONG QueueDepthLastPass;         // offset: 0x34 ordinal: 0x4
  union EX_QUEUE_WORKER_INFO Info;  // offset: 0x38 ordinal: 0x5
} _EX_WORK_QUEUE;

// 0x30 bytes (sizeof)
typedef struct _KAPC {
  SHORT Type;                      // offset: 0x0 ordinal: 0x0
  SHORT Size;                      // offset: 0x2 ordinal: 0x1
  ULONG Spare0;                    // offset: 0x4 ordinal: 0x2
  struct _KTHREAD *Thread;         // offset: 0x8 ordinal: 0x3
  struct _LIST_ENTRY ApcListEntry; // offset: 0xc ordinal: 0x4
  VOID(*KernelRoutine)
  (struct _KAPC *, VOID (**)(VOID *, VOID *, VOID *), VOID **, VOID **,
   VOID **);                                     // offset: 0x14 ordinal: 0x5
  VOID (*RundownRoutine)(struct _KAPC *);        // offset: 0x18 ordinal: 0x6
  VOID (*NormalRoutine)(VOID *, VOID *, VOID *); // offset: 0x1c ordinal: 0x7
  VOID *NormalContext;                           // offset: 0x20 ordinal: 0x8
  VOID *SystemArgument1;                         // offset: 0x24 ordinal: 0x9
  VOID *SystemArgument2;                         // offset: 0x28 ordinal: 0xa
  CHAR ApcStateIndex;                            // offset: 0x2c ordinal: 0xb
  CHAR ApcMode;                                  // offset: 0x2d ordinal: 0xc
  UCHAR Inserted;                                // offset: 0x2e ordinal: 0xd
} _KAPC;

typedef VOID (*__anon_31)(struct _KAPC *);

typedef VOID (*__anon_30)(struct _KAPC *, VOID (**)(VOID *, VOID *, VOID *),
                          VOID **, VOID **, VOID **);

// 0x8 bytes (sizeof)
typedef struct _LUID {
  ULONG LowPart; // offset: 0x0 ordinal: 0x0
  LONG HighPart; // offset: 0x4 ordinal: 0x1
} _LUID;

// 0x10 bytes (sizeof)
typedef struct _TOKEN_SOURCE {
  CHAR SourceName[8];            // offset: 0x0 ordinal: 0x0
  struct _LUID SourceIdentifier; // offset: 0x8 ordinal: 0x1
} _TOKEN_SOURCE;

// 0x28 bytes (sizeof)
typedef struct _TOKEN_CONTROL {
  struct _LUID TokenId;             // offset: 0x0 ordinal: 0x0
  struct _LUID AuthenticationId;    // offset: 0x8 ordinal: 0x1
  struct _LUID ModifiedId;          // offset: 0x10 ordinal: 0x2
  struct _TOKEN_SOURCE TokenSource; // offset: 0x18 ordinal: 0x3
} _TOKEN_CONTROL;

// 0x3c bytes (sizeof)
typedef struct _SECURITY_CLIENT_CONTEXT {
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // offset: 0x0 ordinal: 0x0
  VOID *ClientToken;                               // offset: 0xc ordinal: 0x1
  UCHAR DirectlyAccessClientToken;                 // offset: 0x10 ordinal: 0x2
  UCHAR DirectAccessEffectiveOnly;                 // offset: 0x11 ordinal: 0x3
  UCHAR ServerIsRemote;                            // offset: 0x12 ordinal: 0x4
  struct _TOKEN_CONTROL ClientTokenControl;        // offset: 0x14 ordinal: 0x5
} _SECURITY_CLIENT_CONTEXT;

// 0xc bytes (sizeof)
typedef struct _LUID_AND_ATTRIBUTES {
  struct _LUID Luid; // offset: 0x0 ordinal: 0x0
  ULONG Attributes;  // offset: 0x8 ordinal: 0x1
} _LUID_AND_ATTRIBUTES;

// 0x14 bytes (sizeof)
typedef struct _PRIVILEGE_SET {
  ULONG PrivilegeCount;                     // offset: 0x0 ordinal: 0x0
  ULONG Control;                            // offset: 0x4 ordinal: 0x1
  struct _LUID_AND_ATTRIBUTES Privilege[1]; // offset: 0x8 ordinal: 0x2
} _PRIVILEGE_SET;

// 0x2c bytes (sizeof)
typedef struct _INITIAL_PRIVILEGE_SET {
  ULONG PrivilegeCount;                     // offset: 0x0 ordinal: 0x0
  ULONG Control;                            // offset: 0x4 ordinal: 0x1
  struct _LUID_AND_ATTRIBUTES Privilege[3]; // offset: 0x8 ordinal: 0x2
} _INITIAL_PRIVILEGE_SET;

// 0x74 bytes (sizeof)
typedef struct _ACCESS_STATE {
  struct _LUID OperationID;      // offset: 0x0 ordinal: 0x0
  UCHAR SecurityEvaluated;       // offset: 0x8 ordinal: 0x1
  UCHAR GenerateAudit;           // offset: 0x9 ordinal: 0x2
  UCHAR GenerateOnClose;         // offset: 0xa ordinal: 0x3
  UCHAR PrivilegesAllocated;     // offset: 0xb ordinal: 0x4
  ULONG Flags;                   // offset: 0xc ordinal: 0x5
  ULONG RemainingDesiredAccess;  // offset: 0x10 ordinal: 0x6
  ULONG PreviouslyGrantedAccess; // offset: 0x14 ordinal: 0x7
  ULONG OriginalDesiredAccess;   // offset: 0x18 ordinal: 0x8
  struct _SECURITY_SUBJECT_CONTEXT
      SubjectSecurityContext; // offset: 0x1c ordinal: 0x9
  VOID *SecurityDescriptor;   // offset: 0x2c ordinal: 0xa
  VOID *AuxData;              // offset: 0x30 ordinal: 0xb
  union {
    struct _INITIAL_PRIVILEGE_SET
        InitialPrivilegeSet;             // offset: 0x0 ordinal: 0x0
    struct _PRIVILEGE_SET PrivilegeSet;  // offset: 0x0 ordinal: 0x1
  } Privileges;                          // offset: 0x34 ordinal: 0xc
  UCHAR AuditPrivileges;                 // offset: 0x60 ordinal: 0xd
  struct _UNICODE_STRING ObjectName;     // offset: 0x64 ordinal: 0xe
  struct _UNICODE_STRING ObjectTypeName; // offset: 0x6c ordinal: 0xf
} _ACCESS_STATE;

typedef LONG (*__anon_487)(VOID *, VOID *, struct _ACCESS_STATE *, CHAR, ULONG,
                           struct _UNICODE_STRING *, struct _UNICODE_STRING *,
                           VOID *, struct _SECURITY_QUALITY_OF_SERVICE *,
                           VOID **);

// 0x10 bytes (sizeof)
typedef struct _IO_SECURITY_CONTEXT {
  struct _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // offset: 0x0 ordinal: 0x0
  struct _ACCESS_STATE *AccessState;                // offset: 0x4 ordinal: 0x1
  ULONG DesiredAccess;                              // offset: 0x8 ordinal: 0x2
  ULONG FullCreateOptions;                          // offset: 0xc ordinal: 0x3
} _IO_SECURITY_CONTEXT;

// 0x24 bytes (sizeof)
typedef struct _PS_JOB_TOKEN_FILTER {
  ULONG CapturedSidCount;                          // offset: 0x0 ordinal: 0x0
  struct _SID_AND_ATTRIBUTES *CapturedSids;        // offset: 0x4 ordinal: 0x1
  ULONG CapturedSidsLength;                        // offset: 0x8 ordinal: 0x2
  ULONG CapturedGroupCount;                        // offset: 0xc ordinal: 0x3
  struct _SID_AND_ATTRIBUTES *CapturedGroups;      // offset: 0x10 ordinal: 0x4
  ULONG CapturedGroupsLength;                      // offset: 0x14 ordinal: 0x5
  ULONG CapturedPrivilegeCount;                    // offset: 0x18 ordinal: 0x6
  struct _LUID_AND_ATTRIBUTES *CapturedPrivileges; // offset: 0x1c ordinal: 0x7
  ULONG CapturedPrivilegesLength;                  // offset: 0x20 ordinal: 0x8
} _PS_JOB_TOKEN_FILTER;

// 0x8 bytes (sizeof)
typedef union _LARGE_INTEGER {
  ULONG LowPart; // offset: 0x0 ordinal: 0x0
  LONG HighPart; // offset: 0x4 ordinal: 0x1
  struct {
    ULONG LowPart;   // offset: 0x0 ordinal: 0x0
    LONG HighPart;   // offset: 0x4 ordinal: 0x1
  } u;               // offset: 0x0 ordinal: 0x2
  LONGLONG QuadPart; // offset: 0x0 ordinal: 0x3
} _LARGE_INTEGER;

typedef UCHAR (*__anon_1118)(union _LARGE_INTEGER);

// 0x50 bytes (sizeof)
typedef struct _CM_KEY_NODE {
  USHORT Signature;                            // offset: 0x0 ordinal: 0x0
  USHORT Flags;                                // offset: 0x2 ordinal: 0x1
  union _LARGE_INTEGER LastWriteTime;          // offset: 0x4 ordinal: 0x2
  ULONG Spare;                                 // offset: 0xc ordinal: 0x3
  ULONG Parent;                                // offset: 0x10 ordinal: 0x4
  ULONG SubKeyCounts[2];                       // offset: 0x14 ordinal: 0x5
  ULONG SubKeyLists[2];                        // offset: 0x1c ordinal: 0x6
  struct _CHILD_LIST ValueList;                // offset: 0x24 ordinal: 0x7
  struct _CM_KEY_REFERENCE ChildHiveReference; // offset: 0x1c ordinal: 0x8
  ULONG Security;                              // offset: 0x2c ordinal: 0x9
  ULONG Class;                                 // offset: 0x30 ordinal: 0xa
  ULONG MaxNameLen : 16;                       // offset: 0x34 ordinal: 0xb
  ULONG UserFlags : 4;                         // offset: 0x34 ordinal: 0xc
  ULONG VirtControlFlags : 4;                  // offset: 0x34 ordinal: 0xd
  ULONG Debug : 8;                             // offset: 0x34 ordinal: 0xe
  ULONG MaxClassLen;                           // offset: 0x38 ordinal: 0xf
  ULONG MaxValueNameLen;                       // offset: 0x3c ordinal: 0x10
  ULONG MaxValueDataLen;                       // offset: 0x40 ordinal: 0x11
  ULONG WorkVar;                               // offset: 0x44 ordinal: 0x12
  USHORT NameLength;                           // offset: 0x48 ordinal: 0x13
  USHORT ClassLength;                          // offset: 0x4a ordinal: 0x14
  USHORT Name[1];                              // offset: 0x4c ordinal: 0x15
} _CM_KEY_NODE;

// 0x50 bytes (sizeof)
typedef union _u {
  struct _CM_KEY_NODE KeyNode;         // offset: 0x0 ordinal: 0x0
  struct _CM_KEY_VALUE KeyValue;       // offset: 0x0 ordinal: 0x1
  struct _CM_KEY_SECURITY KeySecurity; // offset: 0x0 ordinal: 0x2
  struct _CM_KEY_INDEX KeyIndex;       // offset: 0x0 ordinal: 0x3
  struct _CM_BIG_DATA ValueData;       // offset: 0x0 ordinal: 0x4
  ULONG KeyList[1];                    // offset: 0x0 ordinal: 0x5
  USHORT KeyString[1];                 // offset: 0x0 ordinal: 0x6
} _u;

// 0x50 bytes (sizeof)
typedef struct _CELL_DATA {
  union _u u; // offset: 0x0 ordinal: 0x0
} _CELL_DATA;

// 0x54 bytes (sizeof)
typedef struct _CM_CACHED_VALUE_INDEX {
  ULONG CellIndex; // offset: 0x0 ordinal: 0x0
  union {
    struct _CELL_DATA CellData; // offset: 0x0 ordinal: 0x0
    ULONG List[1];              // offset: 0x0 ordinal: 0x1
  } Data;                       // offset: 0x4 ordinal: 0x1
} _CM_CACHED_VALUE_INDEX;

typedef struct _CELL_DATA *(*__anon_709)(struct _HHIVE *, ULONG);

// 0x1000 bytes (sizeof)
typedef struct _HBASE_BLOCK {
  ULONG Signature;                // offset: 0x0 ordinal: 0x0
  ULONG Sequence1;                // offset: 0x4 ordinal: 0x1
  ULONG Sequence2;                // offset: 0x8 ordinal: 0x2
  union _LARGE_INTEGER TimeStamp; // offset: 0xc ordinal: 0x3
  ULONG Major;                    // offset: 0x14 ordinal: 0x4
  ULONG Minor;                    // offset: 0x18 ordinal: 0x5
  ULONG Type;                     // offset: 0x1c ordinal: 0x6
  ULONG Format;                   // offset: 0x20 ordinal: 0x7
  ULONG RootCell;                 // offset: 0x24 ordinal: 0x8
  ULONG Length;                   // offset: 0x28 ordinal: 0x9
  ULONG Cluster;                  // offset: 0x2c ordinal: 0xa
  UCHAR FileName[64];             // offset: 0x30 ordinal: 0xb
  ULONG Reserved1[99];            // offset: 0x70 ordinal: 0xc
  ULONG CheckSum;                 // offset: 0x1fc ordinal: 0xd
  ULONG Reserved2[894];           // offset: 0x200 ordinal: 0xe
  ULONG BootType;                 // offset: 0xff8 ordinal: 0xf
  ULONG BootRecover;              // offset: 0xffc ordinal: 0x10
} _HBASE_BLOCK;

// 0x50 bytes (sizeof)
typedef struct _CM_KEY_CONTROL_BLOCK {
  ULONG RefCount;               // offset: 0x0 ordinal: 0x0
  ULONG ExtFlags : 8;           // offset: 0x4 ordinal: 0x1
  ULONG PrivateAlloc : 1;       // offset: 0x4 ordinal: 0x2
  ULONG Delete : 1;             // offset: 0x4 ordinal: 0x3
  ULONG DelayedCloseIndex : 12; // offset: 0x4 ordinal: 0x4
  ULONG TotalLevels : 10;       // offset: 0x4 ordinal: 0x5
  union {
    struct _CM_KEY_HASH KeyHash; // offset: 0x8 ordinal: 0x6
    ULONG ConvKey;               // offset: 0x8 ordinal: 0x7
  };
  struct _CM_KEY_HASH *NextHash;                 // offset: 0xc ordinal: 0x8
  struct _HHIVE *KeyHive;                        // offset: 0x10 ordinal: 0x9
  ULONG KeyCell;                                 // offset: 0x14 ordinal: 0xa
  struct _CM_KEY_CONTROL_BLOCK *ParentKcb;       // offset: 0x18 ordinal: 0xb
  struct _CM_NAME_CONTROL_BLOCK *NameBlock;      // offset: 0x1c ordinal: 0xc
  struct _CM_KEY_SECURITY_CACHE *CachedSecurity; // offset: 0x20 ordinal: 0xd
  struct _CACHED_CHILD_LIST ValueCache;          // offset: 0x24 ordinal: 0xe
  union {
    struct _CM_INDEX_HINT_BLOCK *IndexHint; // offset: 0x2c ordinal: 0xf
    ULONG HashKey;                          // offset: 0x2c ordinal: 0x10
    ULONG SubKeyCount;                      // offset: 0x2c ordinal: 0x11
  };
  union {
    struct _LIST_ENTRY KeyBodyListHead; // offset: 0x30 ordinal: 0x12
    struct _LIST_ENTRY FreeListEntry;   // offset: 0x30 ordinal: 0x13
  };
  union _LARGE_INTEGER KcbLastWriteTime; // offset: 0x38 ordinal: 0x14
  USHORT KcbMaxNameLen;                  // offset: 0x40 ordinal: 0x15
  USHORT KcbMaxValueNameLen;             // offset: 0x42 ordinal: 0x16
  ULONG KcbMaxValueDataLen;              // offset: 0x44 ordinal: 0x17
  ULONG KcbUserFlags : 4;                // offset: 0x48 ordinal: 0x18
  ULONG KcbVirtControlFlags : 4;         // offset: 0x48 ordinal: 0x19
  ULONG KcbDebug : 8;                    // offset: 0x48 ordinal: 0x1a
  ULONG Flags : 16;                      // offset: 0x48 ordinal: 0x1b
} _CM_KEY_CONTROL_BLOCK;

// 0x20 bytes (sizeof)
typedef struct _OBJECT_SYMBOLIC_LINK {
  union _LARGE_INTEGER CreationTime;          // offset: 0x0 ordinal: 0x0
  struct _UNICODE_STRING LinkTarget;          // offset: 0x8 ordinal: 0x1
  struct _UNICODE_STRING LinkTargetRemaining; // offset: 0x10 ordinal: 0x2
  VOID *LinkTargetObject;                     // offset: 0x18 ordinal: 0x3
  ULONG DosDeviceDriveIndex;                  // offset: 0x1c ordinal: 0x4
} _OBJECT_SYMBOLIC_LINK;

typedef VOID (*__anon_566)(VOID *, union _LARGE_INTEGER);

// 0x58 bytes (sizeof)
typedef struct _PRIVATE_CACHE_MAP {
  union {
    SHORT NodeTypeCode;                    // offset: 0x0 ordinal: 0x0
    struct _PRIVATE_CACHE_MAP_FLAGS Flags; // offset: 0x0 ordinal: 0x1
    ULONG UlongFlags;                      // offset: 0x0 ordinal: 0x2
  };
  ULONG ReadAheadMask;                     // offset: 0x4 ordinal: 0x3
  struct _FILE_OBJECT *FileObject;         // offset: 0x8 ordinal: 0x4
  union _LARGE_INTEGER FileOffset1;        // offset: 0x10 ordinal: 0x5
  union _LARGE_INTEGER BeyondLastByte1;    // offset: 0x18 ordinal: 0x6
  union _LARGE_INTEGER FileOffset2;        // offset: 0x20 ordinal: 0x7
  union _LARGE_INTEGER BeyondLastByte2;    // offset: 0x28 ordinal: 0x8
  union _LARGE_INTEGER ReadAheadOffset[2]; // offset: 0x30 ordinal: 0x9
  ULONG ReadAheadLength[2];                // offset: 0x40 ordinal: 0xa
  ULONG ReadAheadSpinLock;                 // offset: 0x48 ordinal: 0xb
  struct _LIST_ENTRY PrivateLinks;         // offset: 0x4c ordinal: 0xc
} _PRIVATE_CACHE_MAP;

// 0x18 bytes (sizeof)
typedef struct _VACB {
  VOID *BaseAddress;                        // offset: 0x0 ordinal: 0x0
  struct _SHARED_CACHE_MAP *SharedCacheMap; // offset: 0x4 ordinal: 0x1
  union {
    union _LARGE_INTEGER FileOffset; // offset: 0x0 ordinal: 0x0
    USHORT ActiveCount;              // offset: 0x0 ordinal: 0x1
  } Overlay;                         // offset: 0x8 ordinal: 0x2
  struct _LIST_ENTRY LruList;        // offset: 0x10 ordinal: 0x3
} _VACB;

// 0x130 bytes (sizeof)
typedef struct _SHARED_CACHE_MAP {
  SHORT NodeTypeCode;                         // offset: 0x0 ordinal: 0x0
  SHORT NodeByteSize;                         // offset: 0x2 ordinal: 0x1
  ULONG OpenCount;                            // offset: 0x4 ordinal: 0x2
  union _LARGE_INTEGER FileSize;              // offset: 0x8 ordinal: 0x3
  struct _LIST_ENTRY BcbList;                 // offset: 0x10 ordinal: 0x4
  union _LARGE_INTEGER SectionSize;           // offset: 0x18 ordinal: 0x5
  union _LARGE_INTEGER ValidDataLength;       // offset: 0x20 ordinal: 0x6
  union _LARGE_INTEGER ValidDataGoal;         // offset: 0x28 ordinal: 0x7
  struct _VACB *InitialVacbs[4];              // offset: 0x30 ordinal: 0x8
  struct _VACB **Vacbs;                       // offset: 0x40 ordinal: 0x9
  struct _FILE_OBJECT *FileObject;            // offset: 0x44 ordinal: 0xa
  struct _VACB *ActiveVacb;                   // offset: 0x48 ordinal: 0xb
  VOID *NeedToZero;                           // offset: 0x4c ordinal: 0xc
  ULONG ActivePage;                           // offset: 0x50 ordinal: 0xd
  ULONG NeedToZeroPage;                       // offset: 0x54 ordinal: 0xe
  ULONG ActiveVacbSpinLock;                   // offset: 0x58 ordinal: 0xf
  ULONG VacbActiveCount;                      // offset: 0x5c ordinal: 0x10
  ULONG DirtyPages;                           // offset: 0x60 ordinal: 0x11
  struct _LIST_ENTRY SharedCacheMapLinks;     // offset: 0x64 ordinal: 0x12
  ULONG Flags;                                // offset: 0x6c ordinal: 0x13
  LONG Status;                                // offset: 0x70 ordinal: 0x14
  struct _MBCB *Mbcb;                         // offset: 0x74 ordinal: 0x15
  VOID *Section;                              // offset: 0x78 ordinal: 0x16
  struct _KEVENT *CreateEvent;                // offset: 0x7c ordinal: 0x17
  struct _KEVENT *WaitOnActiveCount;          // offset: 0x80 ordinal: 0x18
  ULONG PagesToWrite;                         // offset: 0x84 ordinal: 0x19
  LONGLONG BeyondLastFlush;                   // offset: 0x88 ordinal: 0x1a
  struct _CACHE_MANAGER_CALLBACKS *Callbacks; // offset: 0x90 ordinal: 0x1b
  VOID *LazyWriteContext;                     // offset: 0x94 ordinal: 0x1c
  struct _LIST_ENTRY PrivateList;             // offset: 0x98 ordinal: 0x1d
  VOID *LogHandle;                            // offset: 0xa0 ordinal: 0x1e
  VOID(*FlushToLsnRoutine)
  (VOID *, union _LARGE_INTEGER); // offset: 0xa4 ordinal: 0x1f
  ULONG DirtyPageThreshold;       // offset: 0xa8 ordinal: 0x20
  ULONG LazyWritePassCount;       // offset: 0xac ordinal: 0x21
  struct _CACHE_UNINITIALIZE_EVENT
      *UninitializeEvent;                    // offset: 0xb0 ordinal: 0x22
  struct _VACB *NeedToZeroVacb;              // offset: 0xb4 ordinal: 0x23
  ULONG BcbSpinLock;                         // offset: 0xb8 ordinal: 0x24
  VOID *Reserved;                            // offset: 0xbc ordinal: 0x25
  struct _KEVENT Event;                      // offset: 0xc0 ordinal: 0x26
  struct _EX_PUSH_LOCK VacbPushLock;         // offset: 0xd0 ordinal: 0x27
  struct _PRIVATE_CACHE_MAP PrivateCacheMap; // offset: 0xd8 ordinal: 0x28
} _SHARED_CACHE_MAP;

// 0x10 bytes (sizeof)
typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR {
  UCHAR Type;             // offset: 0x0 ordinal: 0x0
  UCHAR ShareDisposition; // offset: 0x1 ordinal: 0x1
  USHORT Flags;           // offset: 0x2 ordinal: 0x2
  union {
    struct {
      union _LARGE_INTEGER Start; // offset: 0x0 ordinal: 0x0
      ULONG Length;               // offset: 0x8 ordinal: 0x1
    } Generic;                    // offset: 0x0 ordinal: 0x0
    struct {
      union _LARGE_INTEGER Start; // offset: 0x0 ordinal: 0x0
      ULONG Length;               // offset: 0x8 ordinal: 0x1
    } Port;                       // offset: 0x0 ordinal: 0x1
    struct {
      ULONG Level;    // offset: 0x0 ordinal: 0x0
      ULONG Vector;   // offset: 0x4 ordinal: 0x1
      ULONG Affinity; // offset: 0x8 ordinal: 0x2
    } Interrupt;      // offset: 0x0 ordinal: 0x2
    struct {
      union _LARGE_INTEGER Start; // offset: 0x0 ordinal: 0x0
      ULONG Length;               // offset: 0x8 ordinal: 0x1
    } Memory;                     // offset: 0x0 ordinal: 0x3
    struct {
      ULONG Channel;   // offset: 0x0 ordinal: 0x0
      ULONG Port;      // offset: 0x4 ordinal: 0x1
      ULONG Reserved1; // offset: 0x8 ordinal: 0x2
    } Dma;             // offset: 0x0 ordinal: 0x4
    struct {
      ULONG Data[3]; // offset: 0x0 ordinal: 0x0
    } DevicePrivate; // offset: 0x0 ordinal: 0x5
    struct {
      ULONG Start;    // offset: 0x0 ordinal: 0x0
      ULONG Length;   // offset: 0x4 ordinal: 0x1
      ULONG Reserved; // offset: 0x8 ordinal: 0x2
    } BusNumber;      // offset: 0x0 ordinal: 0x6
    struct {
      ULONG DataSize;     // offset: 0x0 ordinal: 0x0
      ULONG Reserved1;    // offset: 0x4 ordinal: 0x1
      ULONG Reserved2;    // offset: 0x8 ordinal: 0x2
    } DeviceSpecificData; // offset: 0x0 ordinal: 0x7
  } u;                    // offset: 0x4 ordinal: 0x3
} _CM_PARTIAL_RESOURCE_DESCRIPTOR;

// 0x18 bytes (sizeof)
typedef struct _CM_PARTIAL_RESOURCE_LIST {
  USHORT Version;  // offset: 0x0 ordinal: 0x0
  USHORT Revision; // offset: 0x2 ordinal: 0x1
  ULONG Count;     // offset: 0x4 ordinal: 0x2
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
      PartialDescriptors[1]; // offset: 0x8 ordinal: 0x3
} _CM_PARTIAL_RESOURCE_LIST;

// 0x20 bytes (sizeof)
typedef struct _CM_FULL_RESOURCE_DESCRIPTOR {
  enum _INTERFACE_TYPE InterfaceType; // offset: 0x0 ordinal: 0x0
  ULONG BusNumber;                    // offset: 0x4 ordinal: 0x1
  struct _CM_PARTIAL_RESOURCE_LIST
      PartialResourceList; // offset: 0x8 ordinal: 0x2
} _CM_FULL_RESOURCE_DESCRIPTOR;

// 0x24 bytes (sizeof)
typedef struct _CM_RESOURCE_LIST {
  ULONG Count;                                 // offset: 0x0 ordinal: 0x0
  struct _CM_FULL_RESOURCE_DESCRIPTOR List[1]; // offset: 0x4 ordinal: 0x1
} _CM_RESOURCE_LIST;

// 0x20 bytes (sizeof)
typedef struct _IO_RESOURCE_DESCRIPTOR {
  UCHAR Option;           // offset: 0x0 ordinal: 0x0
  UCHAR Type;             // offset: 0x1 ordinal: 0x1
  UCHAR ShareDisposition; // offset: 0x2 ordinal: 0x2
  UCHAR Spare1;           // offset: 0x3 ordinal: 0x3
  USHORT Flags;           // offset: 0x4 ordinal: 0x4
  USHORT Spare2;          // offset: 0x6 ordinal: 0x5
  union {
    struct {
      ULONG Length;                        // offset: 0x0 ordinal: 0x0
      ULONG Alignment;                     // offset: 0x4 ordinal: 0x1
      union _LARGE_INTEGER MinimumAddress; // offset: 0x8 ordinal: 0x2
      union _LARGE_INTEGER MaximumAddress; // offset: 0x10 ordinal: 0x3
    } Port;                                // offset: 0x0 ordinal: 0x0
    struct {
      ULONG Length;                        // offset: 0x0 ordinal: 0x0
      ULONG Alignment;                     // offset: 0x4 ordinal: 0x1
      union _LARGE_INTEGER MinimumAddress; // offset: 0x8 ordinal: 0x2
      union _LARGE_INTEGER MaximumAddress; // offset: 0x10 ordinal: 0x3
    } Memory;                              // offset: 0x0 ordinal: 0x1
    struct {
      ULONG MinimumVector; // offset: 0x0 ordinal: 0x0
      ULONG MaximumVector; // offset: 0x4 ordinal: 0x1
    } Interrupt;           // offset: 0x0 ordinal: 0x2
    struct {
      ULONG MinimumChannel; // offset: 0x0 ordinal: 0x0
      ULONG MaximumChannel; // offset: 0x4 ordinal: 0x1
    } Dma;                  // offset: 0x0 ordinal: 0x3
    struct {
      ULONG Length;                        // offset: 0x0 ordinal: 0x0
      ULONG Alignment;                     // offset: 0x4 ordinal: 0x1
      union _LARGE_INTEGER MinimumAddress; // offset: 0x8 ordinal: 0x2
      union _LARGE_INTEGER MaximumAddress; // offset: 0x10 ordinal: 0x3
    } Generic;                             // offset: 0x0 ordinal: 0x4
    struct {
      ULONG Data[3]; // offset: 0x0 ordinal: 0x0
    } DevicePrivate; // offset: 0x0 ordinal: 0x5
    struct {
      ULONG Length;       // offset: 0x0 ordinal: 0x0
      ULONG MinBusNumber; // offset: 0x4 ordinal: 0x1
      ULONG MaxBusNumber; // offset: 0x8 ordinal: 0x2
      ULONG Reserved;     // offset: 0xc ordinal: 0x3
    } BusNumber;          // offset: 0x0 ordinal: 0x6
    struct {
      ULONG Priority;  // offset: 0x0 ordinal: 0x0
      ULONG Reserved1; // offset: 0x4 ordinal: 0x1
      ULONG Reserved2; // offset: 0x8 ordinal: 0x2
    } ConfigData;      // offset: 0x0 ordinal: 0x7
  } u;                 // offset: 0x8 ordinal: 0x6
} _IO_RESOURCE_DESCRIPTOR;

// 0x38 bytes (sizeof)
typedef struct _ARBITER_LIST_ENTRY {
  struct _LIST_ENTRY ListEntry;                 // offset: 0x0 ordinal: 0x0
  ULONG AlternativeCount;                       // offset: 0x8 ordinal: 0x1
  struct _IO_RESOURCE_DESCRIPTOR *Alternatives; // offset: 0xc ordinal: 0x2
  struct _DEVICE_OBJECT *PhysicalDeviceObject;  // offset: 0x10 ordinal: 0x3
  enum _ARBITER_REQUEST_SOURCE RequestSource;   // offset: 0x14 ordinal: 0x4
  ULONG Flags;                                  // offset: 0x18 ordinal: 0x5
  LONG WorkSpace;                               // offset: 0x1c ordinal: 0x6
  enum _INTERFACE_TYPE InterfaceType;           // offset: 0x20 ordinal: 0x7
  ULONG SlotNumber;                             // offset: 0x24 ordinal: 0x8
  ULONG BusNumber;                              // offset: 0x28 ordinal: 0x9
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
      *Assignment; // offset: 0x2c ordinal: 0xa
  struct _IO_RESOURCE_DESCRIPTOR
      *SelectedAlternative;    // offset: 0x30 ordinal: 0xb
  enum _ARBITER_RESULT Result; // offset: 0x34 ordinal: 0xc
} _ARBITER_LIST_ENTRY;

typedef LONG (*__anon_1006)(struct _IO_RESOURCE_DESCRIPTOR *);

// 0x150 bytes (sizeof)
typedef struct PCI_FUNCTION_RESOURCES {
  struct _IO_RESOURCE_DESCRIPTOR Limit[7]; // offset: 0x0 ordinal: 0x0
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
      Current[7]; // offset: 0xe0 ordinal: 0x1
} PCI_FUNCTION_RESOURCES;

// 0x28 bytes (sizeof)
typedef struct _IO_RESOURCE_LIST {
  USHORT Version;                                // offset: 0x0 ordinal: 0x0
  USHORT Revision;                               // offset: 0x2 ordinal: 0x1
  ULONG Count;                                   // offset: 0x4 ordinal: 0x2
  struct _IO_RESOURCE_DESCRIPTOR Descriptors[1]; // offset: 0x8 ordinal: 0x3
} _IO_RESOURCE_LIST;

// 0x48 bytes (sizeof)
typedef struct _IO_RESOURCE_REQUIREMENTS_LIST {
  ULONG ListSize;                     // offset: 0x0 ordinal: 0x0
  enum _INTERFACE_TYPE InterfaceType; // offset: 0x4 ordinal: 0x1
  ULONG BusNumber;                    // offset: 0x8 ordinal: 0x2
  ULONG SlotNumber;                   // offset: 0xc ordinal: 0x3
  ULONG Reserved[3];                  // offset: 0x10 ordinal: 0x4
  ULONG AlternativeLists;             // offset: 0x1c ordinal: 0x5
  struct _IO_RESOURCE_LIST List[1];   // offset: 0x20 ordinal: 0x6
} _IO_RESOURCE_REQUIREMENTS_LIST;

typedef LONG (*__anon_907)(struct _BUS_HANDLER *, struct _BUS_HANDLER *,
                           struct _IO_RESOURCE_REQUIREMENTS_LIST **);

// 0x18 bytes (sizeof)
typedef struct _MAILSLOT_CREATE_PARAMETERS {
  ULONG MailslotQuota;              // offset: 0x0 ordinal: 0x0
  ULONG MaximumMessageSize;         // offset: 0x4 ordinal: 0x1
  union _LARGE_INTEGER ReadTimeout; // offset: 0x8 ordinal: 0x2
  UCHAR TimeoutSpecified;           // offset: 0x10 ordinal: 0x3
} _MAILSLOT_CREATE_PARAMETERS;

// 0x28 bytes (sizeof)
typedef struct _NAMED_PIPE_CREATE_PARAMETERS {
  ULONG NamedPipeType;                 // offset: 0x0 ordinal: 0x0
  ULONG ReadMode;                      // offset: 0x4 ordinal: 0x1
  ULONG CompletionMode;                // offset: 0x8 ordinal: 0x2
  ULONG MaximumInstances;              // offset: 0xc ordinal: 0x3
  ULONG InboundQuota;                  // offset: 0x10 ordinal: 0x4
  ULONG OutboundQuota;                 // offset: 0x14 ordinal: 0x5
  union _LARGE_INTEGER DefaultTimeout; // offset: 0x18 ordinal: 0x6
  UCHAR TimeoutSpecified;              // offset: 0x20 ordinal: 0x7
} _NAMED_PIPE_CREATE_PARAMETERS;

// 0x38 bytes (sizeof)
typedef struct _FILE_NETWORK_OPEN_INFORMATION {
  union _LARGE_INTEGER CreationTime;   // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER LastAccessTime; // offset: 0x8 ordinal: 0x1
  union _LARGE_INTEGER LastWriteTime;  // offset: 0x10 ordinal: 0x2
  union _LARGE_INTEGER ChangeTime;     // offset: 0x18 ordinal: 0x3
  union _LARGE_INTEGER AllocationSize; // offset: 0x20 ordinal: 0x4
  union _LARGE_INTEGER EndOfFile;      // offset: 0x28 ordinal: 0x5
  ULONG FileAttributes;                // offset: 0x30 ordinal: 0x6
} _FILE_NETWORK_OPEN_INFORMATION;

typedef UCHAR (*__anon_316)(struct _FILE_OBJECT *, UCHAR,
                            struct _FILE_NETWORK_OPEN_INFORMATION *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

// 0x18 bytes (sizeof)
typedef struct _FILE_STANDARD_INFORMATION {
  union _LARGE_INTEGER AllocationSize; // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER EndOfFile;      // offset: 0x8 ordinal: 0x1
  ULONG NumberOfLinks;                 // offset: 0x10 ordinal: 0x2
  UCHAR DeletePending;                 // offset: 0x14 ordinal: 0x3
  UCHAR Directory;                     // offset: 0x15 ordinal: 0x4
} _FILE_STANDARD_INFORMATION;

typedef UCHAR (*__anon_308)(struct _FILE_OBJECT *, UCHAR,
                            struct _FILE_STANDARD_INFORMATION *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

// 0x28 bytes (sizeof)
typedef struct _FILE_BASIC_INFORMATION {
  union _LARGE_INTEGER CreationTime;   // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER LastAccessTime; // offset: 0x8 ordinal: 0x1
  union _LARGE_INTEGER LastWriteTime;  // offset: 0x10 ordinal: 0x2
  union _LARGE_INTEGER ChangeTime;     // offset: 0x18 ordinal: 0x3
  ULONG FileAttributes;                // offset: 0x20 ordinal: 0x4
} _FILE_BASIC_INFORMATION;

typedef UCHAR (*__anon_307)(struct _FILE_OBJECT *, UCHAR,
                            struct _FILE_BASIC_INFORMATION *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef LONG (*__anon_1121)(LONG, union _LARGE_INTEGER *, struct _MDL *,
                            VOID *);

typedef LONG (*__anon_1119)(union _LARGE_INTEGER *, struct _MDL *);

// 0x70 bytes (sizeof)
typedef struct _DUMP_INITIALIZATION_CONTEXT {
  ULONG Length;                               // offset: 0x0 ordinal: 0x0
  ULONG Reserved;                             // offset: 0x4 ordinal: 0x1
  VOID *MemoryBlock;                          // offset: 0x8 ordinal: 0x2
  VOID *CommonBuffer[2];                      // offset: 0xc ordinal: 0x3
  union _LARGE_INTEGER PhysicalAddress[2];    // offset: 0x18 ordinal: 0x4
  VOID (*StallRoutine)(ULONG);                // offset: 0x28 ordinal: 0x5
  UCHAR (*OpenRoutine)(union _LARGE_INTEGER); // offset: 0x2c ordinal: 0x6
  LONG(*WriteRoutine)
  (union _LARGE_INTEGER *, struct _MDL *); // offset: 0x30 ordinal: 0x7
  VOID (*FinishRoutine)();                 // offset: 0x34 ordinal: 0x8
  struct _ADAPTER_OBJECT *AdapterObject;   // offset: 0x38 ordinal: 0x9
  VOID *MappedRegisterBase;                // offset: 0x3c ordinal: 0xa
  VOID *PortConfiguration;                 // offset: 0x40 ordinal: 0xb
  UCHAR CrashDump;                         // offset: 0x44 ordinal: 0xc
  ULONG MaximumTransferSize;               // offset: 0x48 ordinal: 0xd
  ULONG CommonBufferSize;                  // offset: 0x4c ordinal: 0xe
  VOID *TargetAddress;                     // offset: 0x50 ordinal: 0xf
  LONG(*WritePendingRoutine)
  (LONG, union _LARGE_INTEGER *, struct _MDL *,
   VOID *);             // offset: 0x54 ordinal: 0x10
  ULONG PartitionStyle; // offset: 0x58 ordinal: 0x11
  union {
    struct {
      ULONG Signature; // offset: 0x0 ordinal: 0x0
      ULONG CheckSum;  // offset: 0x4 ordinal: 0x1
    } Mbr;             // offset: 0x0 ordinal: 0x0
    struct {
      struct _GUID DiskId; // offset: 0x0 ordinal: 0x0
    } Gpt;                 // offset: 0x0 ordinal: 0x1
  } DiskInfo;              // offset: 0x5c ordinal: 0x12
} _DUMP_INITIALIZATION_CONTEXT;

// 0xb0 bytes (sizeof)
typedef struct _DUMP_STACK_CONTEXT {
  struct _DUMP_INITIALIZATION_CONTEXT Init;       // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER PartitionOffset;           // offset: 0x70 ordinal: 0x1
  VOID *DumpPointers;                             // offset: 0x78 ordinal: 0x2
  ULONG PointersLength;                           // offset: 0x7c ordinal: 0x3
  USHORT *ModulePrefix;                           // offset: 0x80 ordinal: 0x4
  struct _LIST_ENTRY DriverList;                  // offset: 0x84 ordinal: 0x5
  struct _STRING InitMsg;                         // offset: 0x8c ordinal: 0x6
  struct _STRING ProgMsg;                         // offset: 0x94 ordinal: 0x7
  struct _STRING DoneMsg;                         // offset: 0x9c ordinal: 0x8
  VOID *FileObject;                               // offset: 0xa4 ordinal: 0x9
  enum _DEVICE_USAGE_NOTIFICATION_TYPE UsageType; // offset: 0xa8 ordinal: 0xa
} _DUMP_STACK_CONTEXT;

typedef UCHAR (*__anon_910)(struct _BUS_HANDLER *, struct _BUS_HANDLER *,
                            union _LARGE_INTEGER, ULONG *,
                            union _LARGE_INTEGER *);

typedef UCHAR (*__anon_716)(struct _HHIVE *, ULONG, union _LARGE_INTEGER *,
                            ULONG);

// 0x210 bytes (sizeof)
typedef struct _HHIVE {
  ULONG Signature; // offset: 0x0 ordinal: 0x0
  struct _CELL_DATA *(*GetCellRoutine)(struct _HHIVE *,
                                       ULONG); // offset: 0x4 ordinal: 0x1
  VOID(*ReleaseCellRoutine)
  (struct _HHIVE *, ULONG);               // offset: 0x8 ordinal: 0x2
  VOID *(*Allocate)(ULONG, UCHAR, ULONG); // offset: 0xc ordinal: 0x3
  VOID (*Free)(VOID *, ULONG);            // offset: 0x10 ordinal: 0x4
  UCHAR(*FileSetSize)
  (struct _HHIVE *, ULONG, ULONG, ULONG); // offset: 0x14 ordinal: 0x5
  UCHAR(*FileWrite)
  (struct _HHIVE *, ULONG, struct CMP_OFFSET_ARRAY *, ULONG,
   ULONG *); // offset: 0x18 ordinal: 0x6
  UCHAR(*FileRead)
  (struct _HHIVE *, ULONG, ULONG *, VOID *, ULONG); // offset: 0x1c ordinal: 0x7
  UCHAR(*FileFlush)
  (struct _HHIVE *, ULONG, union _LARGE_INTEGER *,
   ULONG);                        // offset: 0x20 ordinal: 0x8
  struct _HBASE_BLOCK *BaseBlock; // offset: 0x24 ordinal: 0x9
  struct _RTL_BITMAP DirtyVector; // offset: 0x28 ordinal: 0xa
  ULONG DirtyCount;               // offset: 0x30 ordinal: 0xb
  ULONG DirtyAlloc;               // offset: 0x34 ordinal: 0xc
  UCHAR RealWrites;               // offset: 0x38 ordinal: 0xd
  ULONG Cluster;                  // offset: 0x3c ordinal: 0xe
  UCHAR Flat;                     // offset: 0x40 ordinal: 0xf
  UCHAR ReadOnly;                 // offset: 0x41 ordinal: 0x10
  UCHAR Log;                      // offset: 0x42 ordinal: 0x11
  ULONG HiveFlags;                // offset: 0x44 ordinal: 0x12
  ULONG LogSize;                  // offset: 0x48 ordinal: 0x13
  ULONG RefreshCount;             // offset: 0x4c ordinal: 0x14
  ULONG StorageTypeCount;         // offset: 0x50 ordinal: 0x15
  ULONG Version;                  // offset: 0x54 ordinal: 0x16
  struct _DUAL Storage[2];        // offset: 0x58 ordinal: 0x17
} _HHIVE;

// 0x14 bytes (sizeof)
typedef union _FS_FILTER_PARAMETERS {
  struct {
    union _LARGE_INTEGER *EndingOffset;    // offset: 0x0 ordinal: 0x0
    struct _ERESOURCE **ResourceToRelease; // offset: 0x4 ordinal: 0x1
  } AcquireForModifiedPageWriter;          // offset: 0x0 ordinal: 0x0
  struct {
    struct _ERESOURCE *ResourceToRelease; // offset: 0x0 ordinal: 0x0
  } ReleaseForModifiedPageWriter;         // offset: 0x0 ordinal: 0x1
  struct {
    enum _FS_FILTER_SECTION_SYNC_TYPE SyncType; // offset: 0x0 ordinal: 0x0
    ULONG PageProtection;                       // offset: 0x4 ordinal: 0x1
  } AcquireForSectionSynchronization;           // offset: 0x0 ordinal: 0x2
  struct {
    VOID *Argument1; // offset: 0x0 ordinal: 0x0
    VOID *Argument2; // offset: 0x4 ordinal: 0x1
    VOID *Argument3; // offset: 0x8 ordinal: 0x2
    VOID *Argument4; // offset: 0xc ordinal: 0x3
    VOID *Argument5; // offset: 0x10 ordinal: 0x4
  } Others;          // offset: 0x0 ordinal: 0x3
} _FS_FILTER_PARAMETERS;

// 0x24 bytes (sizeof)
typedef struct _FS_FILTER_CALLBACK_DATA {
  ULONG SizeOfFsFilterCallbackData;       // offset: 0x0 ordinal: 0x0
  UCHAR Operation;                        // offset: 0x4 ordinal: 0x1
  UCHAR Reserved;                         // offset: 0x5 ordinal: 0x2
  struct _DEVICE_OBJECT *DeviceObject;    // offset: 0x8 ordinal: 0x3
  struct _FILE_OBJECT *FileObject;        // offset: 0xc ordinal: 0x4
  union _FS_FILTER_PARAMETERS Parameters; // offset: 0x10 ordinal: 0x5
} _FS_FILTER_CALLBACK_DATA;

typedef VOID (*__anon_352)(struct _FS_FILTER_CALLBACK_DATA *, LONG, VOID *);

typedef LONG (*__anon_351)(struct _FS_FILTER_CALLBACK_DATA *, VOID **);

// 0x38 bytes (sizeof)
typedef struct _FS_FILTER_CALLBACKS {
  ULONG SizeOfFsFilterCallbacks; // offset: 0x0 ordinal: 0x0
  ULONG Reserved;                // offset: 0x4 ordinal: 0x1
  LONG(*PreAcquireForSectionSynchronization)
  (struct _FS_FILTER_CALLBACK_DATA *, VOID **); // offset: 0x8 ordinal: 0x2
  VOID(*PostAcquireForSectionSynchronization)
  (struct _FS_FILTER_CALLBACK_DATA *, LONG, VOID *); // offset: 0xc ordinal: 0x3
  LONG(*PreReleaseForSectionSynchronization)
  (struct _FS_FILTER_CALLBACK_DATA *, VOID **); // offset: 0x10 ordinal: 0x4
  VOID(*PostReleaseForSectionSynchronization)
  (struct _FS_FILTER_CALLBACK_DATA *, LONG,
   VOID *); // offset: 0x14 ordinal: 0x5
  LONG(*PreAcquireForCcFlush)
  (struct _FS_FILTER_CALLBACK_DATA *, VOID **); // offset: 0x18 ordinal: 0x6
  VOID(*PostAcquireForCcFlush)
  (struct _FS_FILTER_CALLBACK_DATA *, LONG,
   VOID *); // offset: 0x1c ordinal: 0x7
  LONG(*PreReleaseForCcFlush)
  (struct _FS_FILTER_CALLBACK_DATA *, VOID **); // offset: 0x20 ordinal: 0x8
  VOID(*PostReleaseForCcFlush)
  (struct _FS_FILTER_CALLBACK_DATA *, LONG,
   VOID *); // offset: 0x24 ordinal: 0x9
  LONG(*PreAcquireForModifiedPageWriter)
  (struct _FS_FILTER_CALLBACK_DATA *, VOID **); // offset: 0x28 ordinal: 0xa
  VOID(*PostAcquireForModifiedPageWriter)
  (struct _FS_FILTER_CALLBACK_DATA *, LONG,
   VOID *); // offset: 0x2c ordinal: 0xb
  LONG(*PreReleaseForModifiedPageWriter)
  (struct _FS_FILTER_CALLBACK_DATA *, VOID **); // offset: 0x30 ordinal: 0xc
  VOID(*PostReleaseForModifiedPageWriter)
  (struct _FS_FILTER_CALLBACK_DATA *, LONG,
   VOID *); // offset: 0x34 ordinal: 0xd
} _FS_FILTER_CALLBACKS;

typedef UCHAR (*__anon_321)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            ULONG, ULONG, VOID *, struct _MDL **,
                            struct _IO_STATUS_BLOCK *,
                            struct _COMPRESSED_DATA_INFO *, ULONG,
                            struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_320)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            struct _MDL *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_318)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            ULONG, ULONG, struct _MDL **,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef LONG (*__anon_317)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                           struct _ERESOURCE **, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_306)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            ULONG, UCHAR, ULONG, VOID *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_305)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            ULONG, UCHAR, ULONG, UCHAR,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

// 0x70 bytes (sizeof)
typedef struct _FILE_OBJECT {
  SHORT Type;                          // offset: 0x0 ordinal: 0x0
  SHORT Size;                          // offset: 0x2 ordinal: 0x1
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x4 ordinal: 0x2
  struct _VPB *Vpb;                    // offset: 0x8 ordinal: 0x3
  VOID *FsContext;                     // offset: 0xc ordinal: 0x4
  VOID *FsContext2;                    // offset: 0x10 ordinal: 0x5
  struct _SECTION_OBJECT_POINTERS
      *SectionObjectPointer;              // offset: 0x14 ordinal: 0x6
  VOID *PrivateCacheMap;                  // offset: 0x18 ordinal: 0x7
  LONG FinalStatus;                       // offset: 0x1c ordinal: 0x8
  struct _FILE_OBJECT *RelatedFileObject; // offset: 0x20 ordinal: 0x9
  UCHAR LockOperation;                    // offset: 0x24 ordinal: 0xa
  UCHAR DeletePending;                    // offset: 0x25 ordinal: 0xb
  UCHAR ReadAccess;                       // offset: 0x26 ordinal: 0xc
  UCHAR WriteAccess;                      // offset: 0x27 ordinal: 0xd
  UCHAR DeleteAccess;                     // offset: 0x28 ordinal: 0xe
  UCHAR SharedRead;                       // offset: 0x29 ordinal: 0xf
  UCHAR SharedWrite;                      // offset: 0x2a ordinal: 0x10
  UCHAR SharedDelete;                     // offset: 0x2b ordinal: 0x11
  ULONG Flags;                            // offset: 0x2c ordinal: 0x12
  struct _UNICODE_STRING FileName;        // offset: 0x30 ordinal: 0x13
  union _LARGE_INTEGER CurrentByteOffset; // offset: 0x38 ordinal: 0x14
  ULONG Waiters;                          // offset: 0x40 ordinal: 0x15
  ULONG Busy;                             // offset: 0x44 ordinal: 0x16
  VOID *LastLock;                         // offset: 0x48 ordinal: 0x17
  struct _KEVENT Lock;                    // offset: 0x4c ordinal: 0x18
  struct _KEVENT Event;                   // offset: 0x5c ordinal: 0x19
  struct _IO_COMPLETION_CONTEXT
      *CompletionContext; // offset: 0x6c ordinal: 0x1a
} _FILE_OBJECT;

// 0x70 bytes (sizeof)
typedef struct _IRP {
  SHORT Type;              // offset: 0x0 ordinal: 0x0
  USHORT Size;             // offset: 0x2 ordinal: 0x1
  struct _MDL *MdlAddress; // offset: 0x4 ordinal: 0x2
  ULONG Flags;             // offset: 0x8 ordinal: 0x3
  union {
    struct _IRP *MasterIrp;           // offset: 0x0 ordinal: 0x0
    LONG IrpCount;                    // offset: 0x0 ordinal: 0x1
    VOID *SystemBuffer;               // offset: 0x0 ordinal: 0x2
  } AssociatedIrp;                    // offset: 0xc ordinal: 0x4
  struct _LIST_ENTRY ThreadListEntry; // offset: 0x10 ordinal: 0x5
  struct _IO_STATUS_BLOCK IoStatus;   // offset: 0x18 ordinal: 0x6
  CHAR RequestorMode;                 // offset: 0x20 ordinal: 0x7
  UCHAR PendingReturned;              // offset: 0x21 ordinal: 0x8
  CHAR StackCount;                    // offset: 0x22 ordinal: 0x9
  CHAR CurrentLocation;               // offset: 0x23 ordinal: 0xa
  UCHAR Cancel;                       // offset: 0x24 ordinal: 0xb
  UCHAR CancelIrql;                   // offset: 0x25 ordinal: 0xc
  CHAR ApcEnvironment;                // offset: 0x26 ordinal: 0xd
  UCHAR AllocationFlags;              // offset: 0x27 ordinal: 0xe
  struct _IO_STATUS_BLOCK *UserIosb;  // offset: 0x28 ordinal: 0xf
  struct _KEVENT *UserEvent;          // offset: 0x2c ordinal: 0x10
  union {
    struct {
      VOID(*UserApcRoutine)
      (VOID *, struct _IO_STATUS_BLOCK *, ULONG); // offset: 0x0 ordinal: 0x0
      VOID *UserApcContext;                       // offset: 0x4 ordinal: 0x1
    } AsynchronousParameters;                     // offset: 0x0 ordinal: 0x0
    union _LARGE_INTEGER AllocationSize;          // offset: 0x0 ordinal: 0x1
  } Overlay;                                      // offset: 0x30 ordinal: 0x11
  VOID(*CancelRoutine)
  (struct _DEVICE_OBJECT *, struct _IRP *); // offset: 0x38 ordinal: 0x12
  VOID *UserBuffer;                         // offset: 0x3c ordinal: 0x13
  union {
    struct {
      union {
        struct _KDEVICE_QUEUE_ENTRY
            DeviceQueueEntry;   // offset: 0x0 ordinal: 0x0
        VOID *DriverContext[4]; // offset: 0x0 ordinal: 0x1
      };
      struct _ETHREAD *Thread;      // offset: 0x10 ordinal: 0x2
      CHAR *AuxiliaryBuffer;        // offset: 0x14 ordinal: 0x3
      struct _LIST_ENTRY ListEntry; // offset: 0x18 ordinal: 0x4
      union {
        struct _IO_STACK_LOCATION
            *CurrentStackLocation; // offset: 0x20 ordinal: 0x5
        ULONG PacketType;          // offset: 0x20 ordinal: 0x6
      };
      struct _FILE_OBJECT *OriginalFileObject; // offset: 0x24 ordinal: 0x7
    } Overlay;                                 // offset: 0x0 ordinal: 0x0
    struct _KAPC Apc;                          // offset: 0x0 ordinal: 0x1
    VOID *CompletionKey;                       // offset: 0x0 ordinal: 0x2
  } Tail;                                      // offset: 0x40 ordinal: 0x14
} _IRP;

// 0x2c bytes (sizeof)
typedef struct _POP_DEVICE_POWER_IRP {
  struct _SINGLE_LIST_ENTRY Free;   // offset: 0x0 ordinal: 0x0
  struct _IRP *Irp;                 // offset: 0x4 ordinal: 0x1
  struct _PO_DEVICE_NOTIFY *Notify; // offset: 0x8 ordinal: 0x2
  struct _LIST_ENTRY Pending;       // offset: 0xc ordinal: 0x3
  struct _LIST_ENTRY Complete;      // offset: 0x14 ordinal: 0x4
  struct _LIST_ENTRY Abort;         // offset: 0x1c ordinal: 0x5
  struct _LIST_ENTRY Failed;        // offset: 0x24 ordinal: 0x6
} _POP_DEVICE_POWER_IRP;

// 0x40 bytes (sizeof)
typedef struct PCI_POWER_STATE {
  enum _SYSTEM_POWER_STATE CurrentSystemState;    // offset: 0x0 ordinal: 0x0
  enum _DEVICE_POWER_STATE CurrentDeviceState;    // offset: 0x4 ordinal: 0x1
  enum _SYSTEM_POWER_STATE SystemWakeLevel;       // offset: 0x8 ordinal: 0x2
  enum _DEVICE_POWER_STATE DeviceWakeLevel;       // offset: 0xc ordinal: 0x3
  enum _DEVICE_POWER_STATE SystemStateMapping[7]; // offset: 0x10 ordinal: 0x4
  struct _IRP *WaitWakeIrp;                       // offset: 0x2c ordinal: 0x5
  VOID(*SavedCancelRoutine)
  (struct _DEVICE_OBJECT *, struct _IRP *); // offset: 0x30 ordinal: 0x6
  LONG Paging;                              // offset: 0x34 ordinal: 0x7
  LONG Hibernate;                           // offset: 0x38 ordinal: 0x8
  LONG CrashDump;                           // offset: 0x3c ordinal: 0x9
} PCI_POWER_STATE;

// 0x118 bytes (sizeof)
typedef struct _DEVICE_NODE {
  struct _DEVICE_NODE *Sibling;                // offset: 0x0 ordinal: 0x0
  struct _DEVICE_NODE *Child;                  // offset: 0x4 ordinal: 0x1
  struct _DEVICE_NODE *Parent;                 // offset: 0x8 ordinal: 0x2
  struct _DEVICE_NODE *LastChild;              // offset: 0xc ordinal: 0x3
  ULONG Level;                                 // offset: 0x10 ordinal: 0x4
  struct _PO_DEVICE_NOTIFY *Notify;            // offset: 0x14 ordinal: 0x5
  enum _PNP_DEVNODE_STATE State;               // offset: 0x18 ordinal: 0x6
  enum _PNP_DEVNODE_STATE PreviousState;       // offset: 0x1c ordinal: 0x7
  enum _PNP_DEVNODE_STATE StateHistory[20];    // offset: 0x20 ordinal: 0x8
  ULONG StateHistoryEntry;                     // offset: 0x70 ordinal: 0x9
  LONG CompletionStatus;                       // offset: 0x74 ordinal: 0xa
  struct _IRP *PendingIrp;                     // offset: 0x78 ordinal: 0xb
  ULONG Flags;                                 // offset: 0x7c ordinal: 0xc
  ULONG UserFlags;                             // offset: 0x80 ordinal: 0xd
  ULONG Problem;                               // offset: 0x84 ordinal: 0xe
  struct _DEVICE_OBJECT *PhysicalDeviceObject; // offset: 0x88 ordinal: 0xf
  struct _CM_RESOURCE_LIST *ResourceList;      // offset: 0x8c ordinal: 0x10
  struct _CM_RESOURCE_LIST
      *ResourceListTranslated;         // offset: 0x90 ordinal: 0x11
  struct _UNICODE_STRING InstancePath; // offset: 0x94 ordinal: 0x12
  struct _UNICODE_STRING ServiceName;  // offset: 0x9c ordinal: 0x13
  struct _DEVICE_OBJECT *DuplicatePDO; // offset: 0xa4 ordinal: 0x14
  struct _IO_RESOURCE_REQUIREMENTS_LIST
      *ResourceRequirements;               // offset: 0xa8 ordinal: 0x15
  enum _INTERFACE_TYPE InterfaceType;      // offset: 0xac ordinal: 0x16
  ULONG BusNumber;                         // offset: 0xb0 ordinal: 0x17
  enum _INTERFACE_TYPE ChildInterfaceType; // offset: 0xb4 ordinal: 0x18
  ULONG ChildBusNumber;                    // offset: 0xb8 ordinal: 0x19
  USHORT ChildBusTypeIndex;                // offset: 0xbc ordinal: 0x1a
  UCHAR RemovalPolicy;                     // offset: 0xbe ordinal: 0x1b
  UCHAR HardwareRemovalPolicy;             // offset: 0xbf ordinal: 0x1c
  struct _LIST_ENTRY TargetDeviceNotify;   // offset: 0xc0 ordinal: 0x1d
  struct _LIST_ENTRY DeviceArbiterList;    // offset: 0xc8 ordinal: 0x1e
  struct _LIST_ENTRY DeviceTranslatorList; // offset: 0xd0 ordinal: 0x1f
  USHORT NoTranslatorMask;                 // offset: 0xd8 ordinal: 0x20
  USHORT QueryTranslatorMask;              // offset: 0xda ordinal: 0x21
  USHORT NoArbiterMask;                    // offset: 0xdc ordinal: 0x22
  USHORT QueryArbiterMask;                 // offset: 0xde ordinal: 0x23
  union {
    struct _DEVICE_NODE *LegacyDeviceNode; // offset: 0x0 ordinal: 0x0
    struct _DEVICE_RELATIONS
        *PendingDeviceRelations; // offset: 0x0 ordinal: 0x1
  } OverUsed1;                   // offset: 0xe0 ordinal: 0x24
  union {
    struct _DEVICE_NODE *NextResourceDeviceNode; // offset: 0x0 ordinal: 0x0
  } OverUsed2;                                   // offset: 0xe4 ordinal: 0x25
  struct _CM_RESOURCE_LIST *BootResources;       // offset: 0xe8 ordinal: 0x26
  ULONG CapabilityFlags;                         // offset: 0xec ordinal: 0x27
  struct {
    enum PROFILE_STATUS DockStatus;           // offset: 0x0 ordinal: 0x0
    struct _LIST_ENTRY ListEntry;             // offset: 0x4 ordinal: 0x1
    USHORT *SerialNumber;                     // offset: 0xc ordinal: 0x2
  } DockInfo;                                 // offset: 0xf0 ordinal: 0x28
  ULONG DisableableDepends;                   // offset: 0x100 ordinal: 0x29
  struct _LIST_ENTRY PendedSetInterfaceState; // offset: 0x104 ordinal: 0x2a
  struct _LIST_ENTRY LegacyBusListEntry;      // offset: 0x10c ordinal: 0x2b
  ULONG DriverUnloadRetryCount;               // offset: 0x114 ordinal: 0x2c
} _DEVICE_NODE;

typedef LONG (*__anon_391)(struct _DEVICE_OBJECT *, struct _IRP *, VOID *);

// 0x24 bytes (sizeof)
typedef struct _IO_STACK_LOCATION {
  UCHAR MajorFunction; // offset: 0x0 ordinal: 0x0
  UCHAR MinorFunction; // offset: 0x1 ordinal: 0x1
  UCHAR Flags;         // offset: 0x2 ordinal: 0x2
  UCHAR Control;       // offset: 0x3 ordinal: 0x3
  union {
    struct {
      struct _IO_SECURITY_CONTEXT *SecurityContext; // offset: 0x0 ordinal: 0x0
      ULONG Options;                                // offset: 0x4 ordinal: 0x1
      USHORT FileAttributes;                        // offset: 0x8 ordinal: 0x2
      USHORT ShareAccess;                           // offset: 0xa ordinal: 0x3
      ULONG EaLength;                               // offset: 0xc ordinal: 0x4
    } Create;                                       // offset: 0x0 ordinal: 0x0
    struct {
      struct _IO_SECURITY_CONTEXT *SecurityContext; // offset: 0x0 ordinal: 0x0
      ULONG Options;                                // offset: 0x4 ordinal: 0x1
      USHORT Reserved;                              // offset: 0x8 ordinal: 0x2
      USHORT ShareAccess;                           // offset: 0xa ordinal: 0x3
      struct _NAMED_PIPE_CREATE_PARAMETERS
          *Parameters; // offset: 0xc ordinal: 0x4
    } CreatePipe;      // offset: 0x0 ordinal: 0x1
    struct {
      struct _IO_SECURITY_CONTEXT *SecurityContext; // offset: 0x0 ordinal: 0x0
      ULONG Options;                                // offset: 0x4 ordinal: 0x1
      USHORT Reserved;                              // offset: 0x8 ordinal: 0x2
      USHORT ShareAccess;                           // offset: 0xa ordinal: 0x3
      struct _MAILSLOT_CREATE_PARAMETERS
          *Parameters; // offset: 0xc ordinal: 0x4
    } CreateMailslot;  // offset: 0x0 ordinal: 0x2
    struct {
      ULONG Length;                    // offset: 0x0 ordinal: 0x0
      ULONG Key;                       // offset: 0x4 ordinal: 0x1
      union _LARGE_INTEGER ByteOffset; // offset: 0x8 ordinal: 0x2
    } Read;                            // offset: 0x0 ordinal: 0x3
    struct {
      ULONG Length;                    // offset: 0x0 ordinal: 0x0
      ULONG Key;                       // offset: 0x4 ordinal: 0x1
      union _LARGE_INTEGER ByteOffset; // offset: 0x8 ordinal: 0x2
    } Write;                           // offset: 0x0 ordinal: 0x4
    struct {
      ULONG Length;             // offset: 0x0 ordinal: 0x0
      struct _STRING *FileName; // offset: 0x4 ordinal: 0x1
      enum _FILE_INFORMATION_CLASS
          FileInformationClass; // offset: 0x8 ordinal: 0x2
      ULONG FileIndex;          // offset: 0xc ordinal: 0x3
    } QueryDirectory;           // offset: 0x0 ordinal: 0x5
    struct {
      ULONG Length;           // offset: 0x0 ordinal: 0x0
      ULONG CompletionFilter; // offset: 0x4 ordinal: 0x1
    } NotifyDirectory;        // offset: 0x0 ordinal: 0x6
    struct {
      ULONG Length; // offset: 0x0 ordinal: 0x0
      enum _FILE_INFORMATION_CLASS
          FileInformationClass; // offset: 0x4 ordinal: 0x1
    } QueryFile;                // offset: 0x0 ordinal: 0x7
    struct {
      ULONG Length; // offset: 0x0 ordinal: 0x0
      enum _FILE_INFORMATION_CLASS
          FileInformationClass;        // offset: 0x4 ordinal: 0x1
      struct _FILE_OBJECT *FileObject; // offset: 0x8 ordinal: 0x2
      UCHAR ReplaceIfExists;           // offset: 0xc ordinal: 0x3
      UCHAR AdvanceOnly;               // offset: 0xd ordinal: 0x4
      union {
        ULONG ClusterCount; // offset: 0xc ordinal: 0x5
        VOID *DeleteHandle; // offset: 0xc ordinal: 0x6
      };
    } SetFile; // offset: 0x0 ordinal: 0x8
    struct {
      ULONG Length;       // offset: 0x0 ordinal: 0x0
      VOID *EaList;       // offset: 0x4 ordinal: 0x1
      ULONG EaListLength; // offset: 0x8 ordinal: 0x2
      ULONG EaIndex;      // offset: 0xc ordinal: 0x3
    } QueryEa;            // offset: 0x0 ordinal: 0x9
    struct {
      ULONG Length; // offset: 0x0 ordinal: 0x0
    } SetEa;        // offset: 0x0 ordinal: 0xa
    struct {
      ULONG Length;                         // offset: 0x0 ordinal: 0x0
      enum _FSINFOCLASS FsInformationClass; // offset: 0x4 ordinal: 0x1
    } QueryVolume;                          // offset: 0x0 ordinal: 0xb
    struct {
      ULONG Length;                         // offset: 0x0 ordinal: 0x0
      enum _FSINFOCLASS FsInformationClass; // offset: 0x4 ordinal: 0x1
    } SetVolume;                            // offset: 0x0 ordinal: 0xc
    struct {
      ULONG OutputBufferLength; // offset: 0x0 ordinal: 0x0
      ULONG InputBufferLength;  // offset: 0x4 ordinal: 0x1
      ULONG FsControlCode;      // offset: 0x8 ordinal: 0x2
      VOID *Type3InputBuffer;   // offset: 0xc ordinal: 0x3
    } FileSystemControl;        // offset: 0x0 ordinal: 0xd
    struct {
      union _LARGE_INTEGER *Length;    // offset: 0x0 ordinal: 0x0
      ULONG Key;                       // offset: 0x4 ordinal: 0x1
      union _LARGE_INTEGER ByteOffset; // offset: 0x8 ordinal: 0x2
    } LockControl;                     // offset: 0x0 ordinal: 0xe
    struct {
      ULONG OutputBufferLength; // offset: 0x0 ordinal: 0x0
      ULONG InputBufferLength;  // offset: 0x4 ordinal: 0x1
      ULONG IoControlCode;      // offset: 0x8 ordinal: 0x2
      VOID *Type3InputBuffer;   // offset: 0xc ordinal: 0x3
    } DeviceIoControl;          // offset: 0x0 ordinal: 0xf
    struct {
      ULONG SecurityInformation; // offset: 0x0 ordinal: 0x0
      ULONG Length;              // offset: 0x4 ordinal: 0x1
    } QuerySecurity;             // offset: 0x0 ordinal: 0x10
    struct {
      ULONG SecurityInformation; // offset: 0x0 ordinal: 0x0
      VOID *SecurityDescriptor;  // offset: 0x4 ordinal: 0x1
    } SetSecurity;               // offset: 0x0 ordinal: 0x11
    struct {
      struct _VPB *Vpb;                    // offset: 0x0 ordinal: 0x0
      struct _DEVICE_OBJECT *DeviceObject; // offset: 0x4 ordinal: 0x1
    } MountVolume;                         // offset: 0x0 ordinal: 0x12
    struct {
      struct _VPB *Vpb;                    // offset: 0x0 ordinal: 0x0
      struct _DEVICE_OBJECT *DeviceObject; // offset: 0x4 ordinal: 0x1
    } VerifyVolume;                        // offset: 0x0 ordinal: 0x13
    struct {
      struct _SCSI_REQUEST_BLOCK *Srb; // offset: 0x0 ordinal: 0x0
    } Scsi;                            // offset: 0x0 ordinal: 0x14
    struct {
      ULONG Length;                                // offset: 0x0 ordinal: 0x0
      VOID *StartSid;                              // offset: 0x4 ordinal: 0x1
      struct _FILE_GET_QUOTA_INFORMATION *SidList; // offset: 0x8 ordinal: 0x2
      ULONG SidListLength;                         // offset: 0xc ordinal: 0x3
    } QueryQuota;                                  // offset: 0x0 ordinal: 0x15
    struct {
      ULONG Length; // offset: 0x0 ordinal: 0x0
    } SetQuota;     // offset: 0x0 ordinal: 0x16
    struct {
      enum _DEVICE_RELATION_TYPE Type; // offset: 0x0 ordinal: 0x0
    } QueryDeviceRelations;            // offset: 0x0 ordinal: 0x17
    struct {
      struct _GUID *InterfaceType;  // offset: 0x0 ordinal: 0x0
      USHORT Size;                  // offset: 0x4 ordinal: 0x1
      USHORT Version;               // offset: 0x6 ordinal: 0x2
      struct _INTERFACE *Interface; // offset: 0x8 ordinal: 0x3
      VOID *InterfaceSpecificData;  // offset: 0xc ordinal: 0x4
    } QueryInterface;               // offset: 0x0 ordinal: 0x18
    struct {
      struct _DEVICE_CAPABILITIES *Capabilities; // offset: 0x0 ordinal: 0x0
    } DeviceCapabilities;                        // offset: 0x0 ordinal: 0x19
    struct {
      struct _IO_RESOURCE_REQUIREMENTS_LIST
          *IoResourceRequirementList; // offset: 0x0 ordinal: 0x0
    } FilterResourceRequirements;     // offset: 0x0 ordinal: 0x1a
    struct {
      ULONG WhichSpace; // offset: 0x0 ordinal: 0x0
      VOID *Buffer;     // offset: 0x4 ordinal: 0x1
      ULONG Offset;     // offset: 0x8 ordinal: 0x2
      ULONG Length;     // offset: 0xc ordinal: 0x3
    } ReadWriteConfig;  // offset: 0x0 ordinal: 0x1b
    struct {
      UCHAR Lock; // offset: 0x0 ordinal: 0x0
    } SetLock;    // offset: 0x0 ordinal: 0x1c
    struct {
      enum BUS_QUERY_ID_TYPE IdType; // offset: 0x0 ordinal: 0x0
    } QueryId;                       // offset: 0x0 ordinal: 0x1d
    struct {
      enum DEVICE_TEXT_TYPE DeviceTextType; // offset: 0x0 ordinal: 0x0
      ULONG LocaleId;                       // offset: 0x4 ordinal: 0x1
    } QueryDeviceText;                      // offset: 0x0 ordinal: 0x1e
    struct {
      UCHAR InPath;                              // offset: 0x0 ordinal: 0x0
      UCHAR Reserved[3];                         // offset: 0x1 ordinal: 0x1
      enum _DEVICE_USAGE_NOTIFICATION_TYPE Type; // offset: 0x4 ordinal: 0x2
    } UsageNotification;                         // offset: 0x0 ordinal: 0x1f
    struct {
      enum _SYSTEM_POWER_STATE PowerState; // offset: 0x0 ordinal: 0x0
    } WaitWake;                            // offset: 0x0 ordinal: 0x20
    struct {
      struct _POWER_SEQUENCE *PowerSequence; // offset: 0x0 ordinal: 0x0
    } PowerSequence;                         // offset: 0x0 ordinal: 0x21
    struct {
      ULONG SystemContext;            // offset: 0x0 ordinal: 0x0
      enum _POWER_STATE_TYPE Type;    // offset: 0x4 ordinal: 0x1
      union _POWER_STATE State;       // offset: 0x8 ordinal: 0x2
      enum POWER_ACTION ShutdownType; // offset: 0xc ordinal: 0x3
    } Power;                          // offset: 0x0 ordinal: 0x22
    struct {
      struct _CM_RESOURCE_LIST *AllocatedResources; // offset: 0x0 ordinal: 0x0
      struct _CM_RESOURCE_LIST
          *AllocatedResourcesTranslated; // offset: 0x4 ordinal: 0x1
    } StartDevice;                       // offset: 0x0 ordinal: 0x23
    struct {
      ULONG ProviderId; // offset: 0x0 ordinal: 0x0
      VOID *DataPath;   // offset: 0x4 ordinal: 0x1
      ULONG BufferSize; // offset: 0x8 ordinal: 0x2
      VOID *Buffer;     // offset: 0xc ordinal: 0x3
    } WMI;              // offset: 0x0 ordinal: 0x24
    struct {
      VOID *Argument1;                 // offset: 0x0 ordinal: 0x0
      VOID *Argument2;                 // offset: 0x4 ordinal: 0x1
      VOID *Argument3;                 // offset: 0x8 ordinal: 0x2
      VOID *Argument4;                 // offset: 0xc ordinal: 0x3
    } Others;                          // offset: 0x0 ordinal: 0x25
  } Parameters;                        // offset: 0x4 ordinal: 0x4
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x14 ordinal: 0x5
  struct _FILE_OBJECT *FileObject;     // offset: 0x18 ordinal: 0x6
  LONG(*CompletionRoutine)
  (struct _DEVICE_OBJECT *, struct _IRP *, VOID *); // offset: 0x1c ordinal: 0x7
  VOID *Context;                                    // offset: 0x20 ordinal: 0x8
} _IO_STACK_LOCATION;

typedef LONG (*__anon_884)(struct _IRP *, struct _IO_STACK_LOCATION *,
                           struct _PCI_COMMON_EXTENSION *);

// 0x8 bytes (sizeof)
typedef struct _PCI_MN_DISPATCH_TABLE {
  enum _PCI_DISPATCH_STYLE DispatchStyle; // offset: 0x0 ordinal: 0x0
  LONG(*DispatchFunction)
  (struct _IRP *, struct _IO_STACK_LOCATION *,
   struct _PCI_COMMON_EXTENSION *); // offset: 0x4 ordinal: 0x1
} _PCI_MN_DISPATCH_TABLE;

// 0x20 bytes (sizeof)
typedef struct _PCI_MJ_DISPATCH_TABLE {
  ULONG PnpIrpMaximumMinorFunction; // offset: 0x0 ordinal: 0x0
  struct _PCI_MN_DISPATCH_TABLE
      *PnpIrpDispatchTable;           // offset: 0x4 ordinal: 0x1
  ULONG PowerIrpMaximumMinorFunction; // offset: 0x8 ordinal: 0x2
  struct _PCI_MN_DISPATCH_TABLE
      *PowerIrpDispatchTable; // offset: 0xc ordinal: 0x3
  enum _PCI_DISPATCH_STYLE
      SystemControlIrpDispatchStyle; // offset: 0x10 ordinal: 0x4
  LONG(*SystemControlIrpDispatchFunction)
  (struct _IRP *, struct _IO_STACK_LOCATION *,
   struct _PCI_COMMON_EXTENSION *);               // offset: 0x14 ordinal: 0x5
  enum _PCI_DISPATCH_STYLE OtherIrpDispatchStyle; // offset: 0x18 ordinal: 0x6
  LONG(*OtherIrpDispatchFunction)
  (struct _IRP *, struct _IO_STACK_LOCATION *,
   struct _PCI_COMMON_EXTENSION *); // offset: 0x1c ordinal: 0x7
} _PCI_MJ_DISPATCH_TABLE;

// 0x20 bytes (sizeof)
typedef struct _PCI_COMMON_EXTENSION {
  VOID *Next;                                      // offset: 0x0 ordinal: 0x0
  enum PCI_SIGNATURE ExtensionType;                // offset: 0x4 ordinal: 0x1
  struct _PCI_MJ_DISPATCH_TABLE *IrpDispatchTable; // offset: 0x8 ordinal: 0x2
  UCHAR DeviceState;                               // offset: 0xc ordinal: 0x3
  UCHAR TentativeNextState;                        // offset: 0xd ordinal: 0x4
  struct _KEVENT SecondaryExtLock;                 // offset: 0x10 ordinal: 0x5
} _PCI_COMMON_EXTENSION;

// 0xc0 bytes (sizeof)
typedef struct _PCI_FDO_EXTENSION {
  struct _SINGLE_LIST_ENTRY List;                  // offset: 0x0 ordinal: 0x0
  enum PCI_SIGNATURE ExtensionType;                // offset: 0x4 ordinal: 0x1
  struct _PCI_MJ_DISPATCH_TABLE *IrpDispatchTable; // offset: 0x8 ordinal: 0x2
  UCHAR DeviceState;                               // offset: 0xc ordinal: 0x3
  UCHAR TentativeNextState;                        // offset: 0xd ordinal: 0x4
  struct _KEVENT SecondaryExtLock;                 // offset: 0x10 ordinal: 0x5
  struct _DEVICE_OBJECT *PhysicalDeviceObject;     // offset: 0x20 ordinal: 0x6
  struct _DEVICE_OBJECT *FunctionalDeviceObject;   // offset: 0x24 ordinal: 0x7
  struct _DEVICE_OBJECT *AttachedDeviceObject;     // offset: 0x28 ordinal: 0x8
  struct _KEVENT ChildListLock;                    // offset: 0x2c ordinal: 0x9
  struct _PCI_PDO_EXTENSION *ChildPdoList;         // offset: 0x3c ordinal: 0xa
  struct _PCI_FDO_EXTENSION *BusRootFdoExtension;  // offset: 0x40 ordinal: 0xb
  struct _PCI_FDO_EXTENSION *ParentFdoExtension;   // offset: 0x44 ordinal: 0xc
  struct _PCI_PDO_EXTENSION *ChildBridgePdoList;   // offset: 0x48 ordinal: 0xd
  struct _PCI_BUS_INTERFACE_STANDARD
      *PciBusInterface;                         // offset: 0x4c ordinal: 0xe
  UCHAR MaxSubordinateBus;                      // offset: 0x50 ordinal: 0xf
  struct _BUS_HANDLER *BusHandler;              // offset: 0x54 ordinal: 0x10
  UCHAR BaseBus;                                // offset: 0x58 ordinal: 0x11
  UCHAR Fake;                                   // offset: 0x59 ordinal: 0x12
  UCHAR ChildDelete;                            // offset: 0x5a ordinal: 0x13
  UCHAR Scanned;                                // offset: 0x5b ordinal: 0x14
  UCHAR ArbitersInitialized;                    // offset: 0x5c ordinal: 0x15
  UCHAR BrokenVideoHackApplied;                 // offset: 0x5d ordinal: 0x16
  UCHAR Hibernated;                             // offset: 0x5e ordinal: 0x17
  struct PCI_POWER_STATE PowerState;            // offset: 0x60 ordinal: 0x18
  struct _SINGLE_LIST_ENTRY SecondaryExtension; // offset: 0xa0 ordinal: 0x19
  ULONG ChildWaitWakeCount;                     // offset: 0xa4 ordinal: 0x1a
  struct _PCI_COMMON_CONFIG *PreservedConfig;   // offset: 0xa8 ordinal: 0x1b
  struct _PCI_LOCK Lock;                        // offset: 0xac ordinal: 0x1c
  struct {
    UCHAR Acquired;      // offset: 0x0 ordinal: 0x0
    UCHAR CacheLineSize; // offset: 0x1 ordinal: 0x1
    UCHAR LatencyTimer;  // offset: 0x2 ordinal: 0x2
    UCHAR EnablePERR;    // offset: 0x3 ordinal: 0x3
    UCHAR EnableSERR;    // offset: 0x4 ordinal: 0x4
  } HotPlugParameters;   // offset: 0xb4 ordinal: 0x1d
  ULONG BusHackFlags;    // offset: 0xbc ordinal: 0x1e
} _PCI_FDO_EXTENSION;

typedef UCHAR (*__anon_322)(struct _IRP *,
                            struct _FILE_NETWORK_OPEN_INFORMATION *,
                            struct _DEVICE_OBJECT *);

typedef LONG (*__anon_284)(struct _DEVICE_OBJECT *, struct _IRP *);

typedef enum _IO_ALLOCATION_ACTION (*__anon_243)(struct _DEVICE_OBJECT *,
                                                 struct _IRP *, VOID *, VOID *);

// 0x28 bytes (sizeof)
typedef struct _WAIT_CONTEXT_BLOCK {
  struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry; // offset: 0x0 ordinal: 0x0
  enum _IO_ALLOCATION_ACTION (*DeviceRoutine)(
      struct _DEVICE_OBJECT *, struct _IRP *, VOID *,
      VOID *);                     // offset: 0x10 ordinal: 0x1
  VOID *DeviceContext;             // offset: 0x14 ordinal: 0x2
  ULONG NumberOfMapRegisters;      // offset: 0x18 ordinal: 0x3
  VOID *DeviceObject;              // offset: 0x1c ordinal: 0x4
  VOID *CurrentIrp;                // offset: 0x20 ordinal: 0x5
  struct _KDPC *BufferChainingDpc; // offset: 0x24 ordinal: 0x6
} _WAIT_CONTEXT_BLOCK;

typedef VOID (*__anon_236)(struct _DEVICE_OBJECT *, struct _IRP *);

// 0x40 bytes (sizeof)
typedef struct _MMSUPPORT {
  union _LARGE_INTEGER LastTrimTime;           // offset: 0x0 ordinal: 0x0
  struct _MMSUPPORT_FLAGS Flags;               // offset: 0x8 ordinal: 0x1
  ULONG PageFaultCount;                        // offset: 0xc ordinal: 0x2
  ULONG PeakWorkingSetSize;                    // offset: 0x10 ordinal: 0x3
  ULONG WorkingSetSize;                        // offset: 0x14 ordinal: 0x4
  ULONG MinimumWorkingSetSize;                 // offset: 0x18 ordinal: 0x5
  ULONG MaximumWorkingSetSize;                 // offset: 0x1c ordinal: 0x6
  struct _MMWSL *VmWorkingSetList;             // offset: 0x20 ordinal: 0x7
  struct _LIST_ENTRY WorkingSetExpansionLinks; // offset: 0x24 ordinal: 0x8
  ULONG Claim;                                 // offset: 0x2c ordinal: 0x9
  ULONG NextEstimationSlot;                    // offset: 0x30 ordinal: 0xa
  ULONG NextAgingSlot;                         // offset: 0x34 ordinal: 0xb
  ULONG EstimatedAvailable;                    // offset: 0x38 ordinal: 0xc
  ULONG GrowthSinceLastEstimate;               // offset: 0x3c ordinal: 0xd
} _MMSUPPORT;

// 0x8 bytes (sizeof)
typedef struct _IMAGE_DATA_DIRECTORY {
  ULONG VirtualAddress; // offset: 0x0 ordinal: 0x0
  ULONG Size;           // offset: 0x4 ordinal: 0x1
} _IMAGE_DATA_DIRECTORY;

// 0xe0 bytes (sizeof)
typedef struct _IMAGE_OPTIONAL_HEADER {
  USHORT Magic;                                   // offset: 0x0 ordinal: 0x0
  UCHAR MajorLinkerVersion;                       // offset: 0x2 ordinal: 0x1
  UCHAR MinorLinkerVersion;                       // offset: 0x3 ordinal: 0x2
  ULONG SizeOfCode;                               // offset: 0x4 ordinal: 0x3
  ULONG SizeOfInitializedData;                    // offset: 0x8 ordinal: 0x4
  ULONG SizeOfUninitializedData;                  // offset: 0xc ordinal: 0x5
  ULONG AddressOfEntryPoint;                      // offset: 0x10 ordinal: 0x6
  ULONG BaseOfCode;                               // offset: 0x14 ordinal: 0x7
  ULONG BaseOfData;                               // offset: 0x18 ordinal: 0x8
  ULONG ImageBase;                                // offset: 0x1c ordinal: 0x9
  ULONG SectionAlignment;                         // offset: 0x20 ordinal: 0xa
  ULONG FileAlignment;                            // offset: 0x24 ordinal: 0xb
  USHORT MajorOperatingSystemVersion;             // offset: 0x28 ordinal: 0xc
  USHORT MinorOperatingSystemVersion;             // offset: 0x2a ordinal: 0xd
  USHORT MajorImageVersion;                       // offset: 0x2c ordinal: 0xe
  USHORT MinorImageVersion;                       // offset: 0x2e ordinal: 0xf
  USHORT MajorSubsystemVersion;                   // offset: 0x30 ordinal: 0x10
  USHORT MinorSubsystemVersion;                   // offset: 0x32 ordinal: 0x11
  ULONG Win32VersionValue;                        // offset: 0x34 ordinal: 0x12
  ULONG SizeOfImage;                              // offset: 0x38 ordinal: 0x13
  ULONG SizeOfHeaders;                            // offset: 0x3c ordinal: 0x14
  ULONG CheckSum;                                 // offset: 0x40 ordinal: 0x15
  USHORT Subsystem;                               // offset: 0x44 ordinal: 0x16
  USHORT DllCharacteristics;                      // offset: 0x46 ordinal: 0x17
  ULONG SizeOfStackReserve;                       // offset: 0x48 ordinal: 0x18
  ULONG SizeOfStackCommit;                        // offset: 0x4c ordinal: 0x19
  ULONG SizeOfHeapReserve;                        // offset: 0x50 ordinal: 0x1a
  ULONG SizeOfHeapCommit;                         // offset: 0x54 ordinal: 0x1b
  ULONG LoaderFlags;                              // offset: 0x58 ordinal: 0x1c
  ULONG NumberOfRvaAndSizes;                      // offset: 0x5c ordinal: 0x1d
  struct _IMAGE_DATA_DIRECTORY DataDirectory[16]; // offset: 0x60 ordinal: 0x1e
} _IMAGE_OPTIONAL_HEADER;

// 0x14 bytes (sizeof)
typedef struct _IMAGE_FILE_HEADER {
  USHORT Machine;              // offset: 0x0 ordinal: 0x0
  USHORT NumberOfSections;     // offset: 0x2 ordinal: 0x1
  ULONG TimeDateStamp;         // offset: 0x4 ordinal: 0x2
  ULONG PointerToSymbolTable;  // offset: 0x8 ordinal: 0x3
  ULONG NumberOfSymbols;       // offset: 0xc ordinal: 0x4
  USHORT SizeOfOptionalHeader; // offset: 0x10 ordinal: 0x5
  USHORT Characteristics;      // offset: 0x12 ordinal: 0x6
} _IMAGE_FILE_HEADER;

// 0xf8 bytes (sizeof)
typedef struct _IMAGE_NT_HEADERS {
  ULONG Signature;                              // offset: 0x0 ordinal: 0x0
  struct _IMAGE_FILE_HEADER FileHeader;         // offset: 0x4 ordinal: 0x1
  struct _IMAGE_OPTIONAL_HEADER OptionalHeader; // offset: 0x18 ordinal: 0x2
} _IMAGE_NT_HEADERS;

// 0x8 bytes (sizeof)
typedef struct LIST_ENTRY32 {
  ULONG Flink; // offset: 0x0 ordinal: 0x0
  ULONG Blink; // offset: 0x4 ordinal: 0x1
} LIST_ENTRY32;

// 0x48 bytes (sizeof)
typedef struct _PO_HIBER_PERF {
  ULONGLONG IoTicks;    // offset: 0x0 ordinal: 0x0
  ULONGLONG InitTicks;  // offset: 0x8 ordinal: 0x1
  ULONGLONG CopyTicks;  // offset: 0x10 ordinal: 0x2
  ULONGLONG StartCount; // offset: 0x18 ordinal: 0x3
  ULONG ElapsedTime;    // offset: 0x20 ordinal: 0x4
  ULONG IoTime;         // offset: 0x24 ordinal: 0x5
  ULONG CopyTime;       // offset: 0x28 ordinal: 0x6
  ULONG InitTime;       // offset: 0x2c ordinal: 0x7
  ULONG PagesWritten;   // offset: 0x30 ordinal: 0x8
  ULONG PagesProcessed; // offset: 0x34 ordinal: 0x9
  ULONG BytesCopied;    // offset: 0x38 ordinal: 0xa
  ULONG DumpCount;      // offset: 0x3c ordinal: 0xb
  ULONG FileRuns;       // offset: 0x40 ordinal: 0xc
} _PO_HIBER_PERF;

// 0xa8 bytes (sizeof)
typedef struct PO_MEMORY_IMAGE {
  ULONG Signature;                 // offset: 0x0 ordinal: 0x0
  ULONG Version;                   // offset: 0x4 ordinal: 0x1
  ULONG CheckSum;                  // offset: 0x8 ordinal: 0x2
  ULONG LengthSelf;                // offset: 0xc ordinal: 0x3
  ULONG PageSelf;                  // offset: 0x10 ordinal: 0x4
  ULONG PageSize;                  // offset: 0x14 ordinal: 0x5
  ULONG ImageType;                 // offset: 0x18 ordinal: 0x6
  union _LARGE_INTEGER SystemTime; // offset: 0x20 ordinal: 0x7
  ULONGLONG InterruptTime;         // offset: 0x28 ordinal: 0x8
  ULONG FeatureFlags;              // offset: 0x30 ordinal: 0x9
  UCHAR HiberFlags;                // offset: 0x34 ordinal: 0xa
  UCHAR spare[3];                  // offset: 0x35 ordinal: 0xb
  ULONG NoHiberPtes;               // offset: 0x38 ordinal: 0xc
  ULONG HiberVa;                   // offset: 0x3c ordinal: 0xd
  union _LARGE_INTEGER HiberPte;   // offset: 0x40 ordinal: 0xe
  ULONG NoFreePages;               // offset: 0x48 ordinal: 0xf
  ULONG FreeMapCheck;              // offset: 0x4c ordinal: 0x10
  ULONG WakeCheck;                 // offset: 0x50 ordinal: 0x11
  ULONG TotalPages;                // offset: 0x54 ordinal: 0x12
  ULONG FirstTablePage;            // offset: 0x58 ordinal: 0x13
  ULONG LastFilePage;              // offset: 0x5c ordinal: 0x14
  struct _PO_HIBER_PERF PerfInfo;  // offset: 0x60 ordinal: 0x15
} PO_MEMORY_IMAGE;

// 0xe0 bytes (sizeof)
typedef struct _POP_HIBER_CONTEXT {
  UCHAR WriteToFile;                        // offset: 0x0 ordinal: 0x0
  UCHAR ReserveLoaderMemory;                // offset: 0x1 ordinal: 0x1
  UCHAR ReserveFreeMemory;                  // offset: 0x2 ordinal: 0x2
  UCHAR VerifyOnWake;                       // offset: 0x3 ordinal: 0x3
  UCHAR Reset;                              // offset: 0x4 ordinal: 0x4
  UCHAR HiberFlags;                         // offset: 0x5 ordinal: 0x5
  UCHAR LinkFile;                           // offset: 0x6 ordinal: 0x6
  VOID *LinkFileHandle;                     // offset: 0x8 ordinal: 0x7
  ULONG Lock;                               // offset: 0xc ordinal: 0x8
  UCHAR MapFrozen;                          // offset: 0x10 ordinal: 0x9
  struct _RTL_BITMAP MemoryMap;             // offset: 0x14 ordinal: 0xa
  struct _LIST_ENTRY ClonedRanges;          // offset: 0x1c ordinal: 0xb
  ULONG ClonedRangeCount;                   // offset: 0x24 ordinal: 0xc
  struct _LIST_ENTRY *NextCloneRange;       // offset: 0x28 ordinal: 0xd
  ULONG NextPreserve;                       // offset: 0x2c ordinal: 0xe
  struct _MDL *LoaderMdl;                   // offset: 0x30 ordinal: 0xf
  struct _MDL *Clones;                      // offset: 0x34 ordinal: 0x10
  UCHAR *NextClone;                         // offset: 0x38 ordinal: 0x11
  ULONG NoClones;                           // offset: 0x3c ordinal: 0x12
  struct _MDL *Spares;                      // offset: 0x40 ordinal: 0x13
  ULONGLONG PagesOut;                       // offset: 0x48 ordinal: 0x14
  VOID *IoPage;                             // offset: 0x50 ordinal: 0x15
  VOID *CurrentMcb;                         // offset: 0x54 ordinal: 0x16
  struct _DUMP_STACK_CONTEXT *DumpStack;    // offset: 0x58 ordinal: 0x17
  struct _KPROCESSOR_STATE *WakeState;      // offset: 0x5c ordinal: 0x18
  ULONG NoRanges;                           // offset: 0x60 ordinal: 0x19
  ULONG HiberVa;                            // offset: 0x64 ordinal: 0x1a
  union _LARGE_INTEGER HiberPte;            // offset: 0x68 ordinal: 0x1b
  LONG Status;                              // offset: 0x70 ordinal: 0x1c
  struct PO_MEMORY_IMAGE *MemoryImage;      // offset: 0x74 ordinal: 0x1d
  struct _PO_MEMORY_RANGE_ARRAY *TableHead; // offset: 0x78 ordinal: 0x1e
  UCHAR *CompressionWorkspace;              // offset: 0x7c ordinal: 0x1f
  UCHAR *CompressedWriteBuffer;             // offset: 0x80 ordinal: 0x20
  ULONG *PerformanceStats;                  // offset: 0x84 ordinal: 0x21
  VOID *CompressionBlock;                   // offset: 0x88 ordinal: 0x22
  VOID *DmaIO;                              // offset: 0x8c ordinal: 0x23
  VOID *TemporaryHeap;                      // offset: 0x90 ordinal: 0x24
  struct _PO_HIBER_PERF PerfInfo;           // offset: 0x98 ordinal: 0x25
} _POP_HIBER_CONTEXT;

// 0x8 bytes (sizeof)
typedef struct _SEP_AUDIT_POLICY_OVERLAY {
  ULONGLONG PolicyBits : 36; // offset: 0x0 ordinal: 0x0
  ULONGLONG SetBit : 1;      // offset: 0x0 ordinal: 0x1
} _SEP_AUDIT_POLICY_OVERLAY;

// 0x8 bytes (sizeof)
typedef struct _SEP_AUDIT_POLICY {
  union {
    struct _SEP_AUDIT_POLICY_CATEGORIES
        PolicyElements;                             // offset: 0x0 ordinal: 0x0
    struct _SEP_AUDIT_POLICY_OVERLAY PolicyOverlay; // offset: 0x0 ordinal: 0x1
    ULONGLONG Overlay;                              // offset: 0x0 ordinal: 0x2
  };
} _SEP_AUDIT_POLICY;

// 0xa8 bytes (sizeof)
typedef struct _TOKEN {
  struct _TOKEN_SOURCE TokenSource;           // offset: 0x0 ordinal: 0x0
  struct _LUID TokenId;                       // offset: 0x10 ordinal: 0x1
  struct _LUID AuthenticationId;              // offset: 0x18 ordinal: 0x2
  struct _LUID ParentTokenId;                 // offset: 0x20 ordinal: 0x3
  union _LARGE_INTEGER ExpirationTime;        // offset: 0x28 ordinal: 0x4
  struct _ERESOURCE *TokenLock;               // offset: 0x30 ordinal: 0x5
  struct _SEP_AUDIT_POLICY AuditPolicy;       // offset: 0x38 ordinal: 0x6
  struct _LUID ModifiedId;                    // offset: 0x40 ordinal: 0x7
  ULONG SessionId;                            // offset: 0x48 ordinal: 0x8
  ULONG UserAndGroupCount;                    // offset: 0x4c ordinal: 0x9
  ULONG RestrictedSidCount;                   // offset: 0x50 ordinal: 0xa
  ULONG PrivilegeCount;                       // offset: 0x54 ordinal: 0xb
  ULONG VariableLength;                       // offset: 0x58 ordinal: 0xc
  ULONG DynamicCharged;                       // offset: 0x5c ordinal: 0xd
  ULONG DynamicAvailable;                     // offset: 0x60 ordinal: 0xe
  ULONG DefaultOwnerIndex;                    // offset: 0x64 ordinal: 0xf
  struct _SID_AND_ATTRIBUTES *UserAndGroups;  // offset: 0x68 ordinal: 0x10
  struct _SID_AND_ATTRIBUTES *RestrictedSids; // offset: 0x6c ordinal: 0x11
  VOID *PrimaryGroup;                         // offset: 0x70 ordinal: 0x12
  struct _LUID_AND_ATTRIBUTES *Privileges;    // offset: 0x74 ordinal: 0x13
  ULONG *DynamicPart;                         // offset: 0x78 ordinal: 0x14
  struct _ACL *DefaultDacl;                   // offset: 0x7c ordinal: 0x15
  enum _TOKEN_TYPE TokenType;                 // offset: 0x80 ordinal: 0x16
  enum _SECURITY_IMPERSONATION_LEVEL
      ImpersonationLevel;                       // offset: 0x84 ordinal: 0x17
  ULONG TokenFlags;                             // offset: 0x88 ordinal: 0x18
  UCHAR TokenInUse;                             // offset: 0x8c ordinal: 0x19
  struct _SECURITY_TOKEN_PROXY_DATA *ProxyData; // offset: 0x90 ordinal: 0x1a
  struct _SECURITY_TOKEN_AUDIT_DATA *AuditData; // offset: 0x94 ordinal: 0x1b
  struct _LUID OriginatingLogonSession;         // offset: 0x98 ordinal: 0x1c
  ULONG VariablePart;                           // offset: 0xa0 ordinal: 0x1d
} _TOKEN;

// 0x20 bytes (sizeof)
typedef struct _RTL_RANGE {
  ULONGLONG Start;  // offset: 0x0 ordinal: 0x0
  ULONGLONG End;    // offset: 0x8 ordinal: 0x1
  VOID *UserData;   // offset: 0x10 ordinal: 0x2
  VOID *Owner;      // offset: 0x14 ordinal: 0x3
  UCHAR Attributes; // offset: 0x18 ordinal: 0x4
  UCHAR Flags;      // offset: 0x19 ordinal: 0x5
} _RTL_RANGE;

typedef UCHAR (*__anon_1015)(VOID *, struct _RTL_RANGE *);

// 0x30 bytes (sizeof)
typedef struct _ARBITER_ALTERNATIVE {
  ULONGLONG Minimum;                          // offset: 0x0 ordinal: 0x0
  ULONGLONG Maximum;                          // offset: 0x8 ordinal: 0x1
  ULONG Length;                               // offset: 0x10 ordinal: 0x2
  ULONG Alignment;                            // offset: 0x14 ordinal: 0x3
  LONG Priority;                              // offset: 0x18 ordinal: 0x4
  ULONG Flags;                                // offset: 0x1c ordinal: 0x5
  struct _IO_RESOURCE_DESCRIPTOR *Descriptor; // offset: 0x20 ordinal: 0x6
  ULONG Reserved[3];                          // offset: 0x24 ordinal: 0x7
} _ARBITER_ALTERNATIVE;

typedef LONG (*__anon_1005)(struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *,
                            ULONGLONG *, ULONG *);

typedef LONG (*__anon_1003)(struct _IO_RESOURCE_DESCRIPTOR *, ULONGLONG *,
                            ULONGLONG *, ULONG *, ULONG *);

// 0x10 bytes (sizeof)
typedef struct _ARBITER_ORDERING {
  ULONGLONG Start; // offset: 0x0 ordinal: 0x0
  ULONGLONG End;   // offset: 0x8 ordinal: 0x1
} _ARBITER_ORDERING;

// 0x8 bytes (sizeof)
typedef struct _ARBITER_ORDERING_LIST {
  USHORT Count;                        // offset: 0x0 ordinal: 0x0
  USHORT Maximum;                      // offset: 0x2 ordinal: 0x1
  struct _ARBITER_ORDERING *Orderings; // offset: 0x4 ordinal: 0x2
} _ARBITER_ORDERING_LIST;

typedef LONG (*__anon_1004)(struct _IO_RESOURCE_DESCRIPTOR *, ULONGLONG,
                            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *);

// 0x38 bytes (sizeof)
typedef struct _ARBITER_ALLOCATION_STATE {
  ULONGLONG Start;                                 // offset: 0x0 ordinal: 0x0
  ULONGLONG End;                                   // offset: 0x8 ordinal: 0x1
  ULONGLONG CurrentMinimum;                        // offset: 0x10 ordinal: 0x2
  ULONGLONG CurrentMaximum;                        // offset: 0x18 ordinal: 0x3
  struct _ARBITER_LIST_ENTRY *Entry;               // offset: 0x20 ordinal: 0x4
  struct _ARBITER_ALTERNATIVE *CurrentAlternative; // offset: 0x24 ordinal: 0x5
  ULONG AlternativeCount;                          // offset: 0x28 ordinal: 0x6
  struct _ARBITER_ALTERNATIVE *Alternatives;       // offset: 0x2c ordinal: 0x7
  USHORT Flags;                                    // offset: 0x30 ordinal: 0x8
  UCHAR RangeAttributes;                           // offset: 0x32 ordinal: 0x9
  UCHAR RangeAvailableAttributes;                  // offset: 0x33 ordinal: 0xa
  ULONG WorkSpace;                                 // offset: 0x34 ordinal: 0xb
} _ARBITER_ALLOCATION_STATE;

// 0x18 bytes (sizeof)
typedef struct _ARBITER_CONFLICT_INFO {
  struct _DEVICE_OBJECT *OwningObject; // offset: 0x0 ordinal: 0x0
  ULONGLONG Start;                     // offset: 0x8 ordinal: 0x1
  ULONGLONG End;                       // offset: 0x10 ordinal: 0x2
} _ARBITER_CONFLICT_INFO;

// 0x10 bytes (sizeof)
typedef struct _ARBITER_PARAMETERS {
  union {
    struct {
      struct _LIST_ENTRY *ArbitrationList; // offset: 0x0 ordinal: 0x0
      ULONG AllocateFromCount;             // offset: 0x4 ordinal: 0x1
      struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
          *AllocateFrom; // offset: 0x8 ordinal: 0x2
    } TestAllocation;    // offset: 0x0 ordinal: 0x0
    struct {
      struct _LIST_ENTRY *ArbitrationList; // offset: 0x0 ordinal: 0x0
      ULONG AllocateFromCount;             // offset: 0x4 ordinal: 0x1
      struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
          *AllocateFrom; // offset: 0x8 ordinal: 0x2
    } RetestAllocation;  // offset: 0x0 ordinal: 0x1
    struct {
      struct _LIST_ENTRY *ArbitrationList; // offset: 0x0 ordinal: 0x0
    } BootAllocation;                      // offset: 0x0 ordinal: 0x2
    struct {
      struct _CM_PARTIAL_RESOURCE_LIST *
          *AllocatedResources; // offset: 0x0 ordinal: 0x0
    } QueryAllocatedResources; // offset: 0x0 ordinal: 0x3
    struct {
      struct _DEVICE_OBJECT *PhysicalDeviceObject; // offset: 0x0 ordinal: 0x0
      struct _IO_RESOURCE_DESCRIPTOR
          *ConflictingResource;                  // offset: 0x4 ordinal: 0x1
      ULONG *ConflictCount;                      // offset: 0x8 ordinal: 0x2
      struct _ARBITER_CONFLICT_INFO **Conflicts; // offset: 0xc ordinal: 0x3
    } QueryConflict;                             // offset: 0x0 ordinal: 0x4
    struct {
      struct _LIST_ENTRY *ArbitrationList; // offset: 0x0 ordinal: 0x0
    } QueryArbitrate;                      // offset: 0x0 ordinal: 0x5
    struct {
      struct _DEVICE_OBJECT *ReserveDevice; // offset: 0x0 ordinal: 0x0
    } AddReserved;                          // offset: 0x0 ordinal: 0x6
  } Parameters;                             // offset: 0x0 ordinal: 0x0
} _ARBITER_PARAMETERS;

typedef LONG (*__anon_940)(VOID *, enum _ARBITER_ACTION,
                           struct _ARBITER_PARAMETERS *);

// 0x18 bytes (sizeof)
typedef struct _ARBITER_INTERFACE {
  USHORT Size;                          // offset: 0x0 ordinal: 0x0
  USHORT Version;                       // offset: 0x2 ordinal: 0x1
  VOID *Context;                        // offset: 0x4 ordinal: 0x2
  VOID (*InterfaceReference)(VOID *);   // offset: 0x8 ordinal: 0x3
  VOID (*InterfaceDereference)(VOID *); // offset: 0xc ordinal: 0x4
  LONG(*ArbiterHandler)
  (VOID *, enum _ARBITER_ACTION,
   struct _ARBITER_PARAMETERS *); // offset: 0x10 ordinal: 0x5
  ULONG Flags;                    // offset: 0x14 ordinal: 0x6
} _ARBITER_INTERFACE;

// 0x9c bytes (sizeof)
typedef struct _ARBITER_INSTANCE {
  ULONG Signature;                            // offset: 0x0 ordinal: 0x0
  struct _KEVENT *MutexEvent;                 // offset: 0x4 ordinal: 0x1
  USHORT *Name;                               // offset: 0x8 ordinal: 0x2
  LONG ResourceType;                          // offset: 0xc ordinal: 0x3
  struct _RTL_RANGE_LIST *Allocation;         // offset: 0x10 ordinal: 0x4
  struct _RTL_RANGE_LIST *PossibleAllocation; // offset: 0x14 ordinal: 0x5
  struct _ARBITER_ORDERING_LIST OrderingList; // offset: 0x18 ordinal: 0x6
  struct _ARBITER_ORDERING_LIST ReservedList; // offset: 0x20 ordinal: 0x7
  LONG ReferenceCount;                        // offset: 0x28 ordinal: 0x8
  struct _ARBITER_INTERFACE *Interface;       // offset: 0x2c ordinal: 0x9
  ULONG AllocationStackMaxSize;               // offset: 0x30 ordinal: 0xa
  struct _ARBITER_ALLOCATION_STATE
      *AllocationStack; // offset: 0x34 ordinal: 0xb
  LONG(*UnpackRequirement)
  (struct _IO_RESOURCE_DESCRIPTOR *, ULONGLONG *, ULONGLONG *, ULONG *,
   ULONG *); // offset: 0x38 ordinal: 0xc
  LONG(*PackResource)
  (struct _IO_RESOURCE_DESCRIPTOR *, ULONGLONG,
   struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *); // offset: 0x3c ordinal: 0xd
  LONG(*UnpackResource)
  (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *, ULONGLONG *,
   ULONG *); // offset: 0x40 ordinal: 0xe
  LONG(*ScoreRequirement)
  (struct _IO_RESOURCE_DESCRIPTOR *); // offset: 0x44 ordinal: 0xf
  LONG(*TestAllocation)
  (struct _ARBITER_INSTANCE *,
   struct _LIST_ENTRY *); // offset: 0x48 ordinal: 0x10
  LONG(*RetestAllocation)
  (struct _ARBITER_INSTANCE *,
   struct _LIST_ENTRY *); // offset: 0x4c ordinal: 0x11
  LONG(*CommitAllocation)
  (struct _ARBITER_INSTANCE *); // offset: 0x50 ordinal: 0x12
  LONG(*RollbackAllocation)
  (struct _ARBITER_INSTANCE *); // offset: 0x54 ordinal: 0x13
  LONG(*BootAllocation)
  (struct _ARBITER_INSTANCE *,
   struct _LIST_ENTRY *); // offset: 0x58 ordinal: 0x14
  LONG(*QueryArbitrate)
  (struct _ARBITER_INSTANCE *,
   struct _LIST_ENTRY *); // offset: 0x5c ordinal: 0x15
  LONG(*QueryConflict)
  (struct _ARBITER_INSTANCE *, struct _DEVICE_OBJECT *,
   struct _IO_RESOURCE_DESCRIPTOR *, ULONG *,
   struct _ARBITER_CONFLICT_INFO **); // offset: 0x60 ordinal: 0x16
  LONG(*AddReserved)
  (struct _ARBITER_INSTANCE *, struct _IO_RESOURCE_DESCRIPTOR *,
   struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *); // offset: 0x64 ordinal: 0x17
  LONG(*StartArbiter)
  (struct _ARBITER_INSTANCE *,
   struct _CM_RESOURCE_LIST *); // offset: 0x68 ordinal: 0x18
  LONG(*PreprocessEntry)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *); // offset: 0x6c ordinal: 0x19
  LONG(*AllocateEntry)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *); // offset: 0x70 ordinal: 0x1a
  UCHAR(*GetNextAllocationRange)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *); // offset: 0x74 ordinal: 0x1b
  UCHAR(*FindSuitableRange)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *); // offset: 0x78 ordinal: 0x1c
  VOID(*AddAllocation)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *); // offset: 0x7c ordinal: 0x1d
  VOID(*BacktrackAllocation)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *); // offset: 0x80 ordinal: 0x1e
  UCHAR(*OverrideConflict)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *);   // offset: 0x84 ordinal: 0x1f
  UCHAR TransactionInProgress;            // offset: 0x88 ordinal: 0x20
  VOID *Extension;                        // offset: 0x8c ordinal: 0x21
  struct _DEVICE_OBJECT *BusDeviceObject; // offset: 0x90 ordinal: 0x22
  VOID *ConflictCallbackContext;          // offset: 0x94 ordinal: 0x23
  UCHAR(*ConflictCallback)
  (VOID *, struct _RTL_RANGE *); // offset: 0x98 ordinal: 0x24
} _ARBITER_INSTANCE;

typedef VOID (*__anon_1014)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_ALLOCATION_STATE *);

typedef UCHAR (*__anon_1013)(struct _ARBITER_INSTANCE *,
                             struct _ARBITER_ALLOCATION_STATE *);

typedef LONG (*__anon_1012)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_ALLOCATION_STATE *);

typedef LONG (*__anon_1011)(struct _ARBITER_INSTANCE *,
                            struct _CM_RESOURCE_LIST *);

typedef LONG (*__anon_1010)(struct _ARBITER_INSTANCE *,
                            struct _IO_RESOURCE_DESCRIPTOR *,
                            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *);

typedef LONG (*__anon_1009)(struct _ARBITER_INSTANCE *, struct _DEVICE_OBJECT *,
                            struct _IO_RESOURCE_DESCRIPTOR *, ULONG *,
                            struct _ARBITER_CONFLICT_INFO **);

typedef LONG (*__anon_1008)(struct _ARBITER_INSTANCE *);

typedef LONG (*__anon_1007)(struct _ARBITER_INSTANCE *, struct _LIST_ENTRY *);

// 0xe0 bytes (sizeof)
typedef struct _PCI_ARBITER_INSTANCE {
  struct PCI_SECONDARY_EXTENSION Header;      // offset: 0x0 ordinal: 0x0
  struct _PCI_INTERFACE *Interface;           // offset: 0xc ordinal: 0x1
  struct _PCI_FDO_EXTENSION *BusFdoExtension; // offset: 0x10 ordinal: 0x2
  USHORT InstanceName[24];                    // offset: 0x14 ordinal: 0x3
  struct _ARBITER_INSTANCE CommonInstance;    // offset: 0x44 ordinal: 0x4
} _PCI_ARBITER_INSTANCE;

typedef LONG (*__anon_1017)(struct _PCI_ARBITER_INSTANCE *);

// 0x1c bytes (sizeof)
typedef struct _PCI_INTERFACE {
  struct _GUID *InterfaceType;  // offset: 0x0 ordinal: 0x0
  USHORT MinSize;               // offset: 0x4 ordinal: 0x1
  USHORT MinVersion;            // offset: 0x6 ordinal: 0x2
  USHORT MaxVersion;            // offset: 0x8 ordinal: 0x3
  USHORT Flags;                 // offset: 0xa ordinal: 0x4
  LONG ReferenceCount;          // offset: 0xc ordinal: 0x5
  enum PCI_SIGNATURE Signature; // offset: 0x10 ordinal: 0x6
  LONG(*Constructor)
  (VOID *, VOID *, VOID *, USHORT, USHORT,
   struct _INTERFACE *); // offset: 0x14 ordinal: 0x7
  LONG(*Initializer)
  (struct _PCI_ARBITER_INSTANCE *); // offset: 0x18 ordinal: 0x8
} _PCI_INTERFACE;

// 0x38 bytes (sizeof)
typedef struct _PI_RESOURCE_ARBITER_ENTRY {
  struct _LIST_ENTRY DeviceArbiterList;        // offset: 0x0 ordinal: 0x0
  UCHAR ResourceType;                          // offset: 0x8 ordinal: 0x1
  struct _ARBITER_INTERFACE *ArbiterInterface; // offset: 0xc ordinal: 0x2
  ULONG Level;                                 // offset: 0x10 ordinal: 0x3
  struct _LIST_ENTRY ResourceList;             // offset: 0x14 ordinal: 0x4
  struct _LIST_ENTRY BestResourceList;         // offset: 0x1c ordinal: 0x5
  struct _LIST_ENTRY BestConfig;               // offset: 0x24 ordinal: 0x6
  struct _LIST_ENTRY ActiveArbiterList;        // offset: 0x2c ordinal: 0x7
  UCHAR State;                                 // offset: 0x34 ordinal: 0x8
  UCHAR ResourcesChanged;                      // offset: 0x35 ordinal: 0x9
} _PI_RESOURCE_ARBITER_ENTRY;

// 0x28 bytes (sizeof)
typedef struct _RTLP_RANGE_LIST_ENTRY {
  ULONGLONG Start; // offset: 0x0 ordinal: 0x0
  ULONGLONG End;   // offset: 0x8 ordinal: 0x1
  union {
    struct {
      VOID *UserData; // offset: 0x0 ordinal: 0x0
      VOID *Owner;    // offset: 0x4 ordinal: 0x1
    } Allocated;      // offset: 0x10 ordinal: 0x2
    struct {
      struct _LIST_ENTRY ListHead; // offset: 0x0 ordinal: 0x0
    } Merged;                      // offset: 0x10 ordinal: 0x3
  };
  UCHAR Attributes;             // offset: 0x18 ordinal: 0x4
  UCHAR PublicFlags;            // offset: 0x19 ordinal: 0x5
  USHORT PrivateFlags;          // offset: 0x1a ordinal: 0x6
  struct _LIST_ENTRY ListEntry; // offset: 0x1c ordinal: 0x7
} _RTLP_RANGE_LIST_ENTRY;

// 0xc8 bytes (sizeof)
typedef struct _PCI_PDO_EXTENSION {
  struct _PCI_PDO_EXTENSION *Next;                 // offset: 0x0 ordinal: 0x0
  enum PCI_SIGNATURE ExtensionType;                // offset: 0x4 ordinal: 0x1
  struct _PCI_MJ_DISPATCH_TABLE *IrpDispatchTable; // offset: 0x8 ordinal: 0x2
  UCHAR DeviceState;                               // offset: 0xc ordinal: 0x3
  UCHAR TentativeNextState;                        // offset: 0xd ordinal: 0x4
  struct _KEVENT SecondaryExtLock;                 // offset: 0x10 ordinal: 0x5
  struct _PCI_SLOT_NUMBER Slot;                    // offset: 0x20 ordinal: 0x6
  struct _DEVICE_OBJECT *PhysicalDeviceObject;     // offset: 0x24 ordinal: 0x7
  struct _PCI_FDO_EXTENSION *ParentFdoExtension;   // offset: 0x28 ordinal: 0x8
  struct _SINGLE_LIST_ENTRY SecondaryExtension;    // offset: 0x2c ordinal: 0x9
  ULONG BusInterfaceReferenceCount;                // offset: 0x30 ordinal: 0xa
  ULONG AgpInterfaceReferenceCount;                // offset: 0x34 ordinal: 0xb
  USHORT VendorId;                                 // offset: 0x38 ordinal: 0xc
  USHORT DeviceId;                                 // offset: 0x3a ordinal: 0xd
  USHORT SubsystemVendorId;                        // offset: 0x3c ordinal: 0xe
  USHORT SubsystemId;                              // offset: 0x3e ordinal: 0xf
  UCHAR RevisionId;                                // offset: 0x40 ordinal: 0x10
  UCHAR ProgIf;                                    // offset: 0x41 ordinal: 0x11
  UCHAR SubClass;                                  // offset: 0x42 ordinal: 0x12
  UCHAR BaseClass;                                 // offset: 0x43 ordinal: 0x13
  UCHAR AdditionalResourceCount;                   // offset: 0x44 ordinal: 0x14
  UCHAR AdjustedInterruptLine;                     // offset: 0x45 ordinal: 0x15
  UCHAR InterruptPin;                              // offset: 0x46 ordinal: 0x16
  UCHAR RawInterruptLine;                          // offset: 0x47 ordinal: 0x17
  UCHAR CapabilitiesPtr;                           // offset: 0x48 ordinal: 0x18
  UCHAR SavedLatencyTimer;                         // offset: 0x49 ordinal: 0x19
  UCHAR SavedCacheLineSize;                        // offset: 0x4a ordinal: 0x1a
  UCHAR HeaderType;                                // offset: 0x4b ordinal: 0x1b
  UCHAR NotPresent;                                // offset: 0x4c ordinal: 0x1c
  UCHAR ReportedMissing;                           // offset: 0x4d ordinal: 0x1d
  UCHAR ExpectedWritebackFailure;                  // offset: 0x4e ordinal: 0x1e
  UCHAR NoTouchPmeEnable;                          // offset: 0x4f ordinal: 0x1f
  UCHAR LegacyDriver;                              // offset: 0x50 ordinal: 0x20
  UCHAR UpdateHardware;                            // offset: 0x51 ordinal: 0x21
  UCHAR MovedDevice;                               // offset: 0x52 ordinal: 0x22
  UCHAR DisablePowerDown;                          // offset: 0x53 ordinal: 0x23
  UCHAR NeedsHotPlugConfiguration;                 // offset: 0x54 ordinal: 0x24
  UCHAR SwitchedIDEToNativeMode;                   // offset: 0x55 ordinal: 0x25
  UCHAR BIOSAllowsIDESwitchToNativeMode;           // offset: 0x56 ordinal: 0x26
  UCHAR IoSpaceUnderNativeIdeControl;              // offset: 0x57 ordinal: 0x27
  UCHAR OnDebugPath;                               // offset: 0x58 ordinal: 0x28
  struct PCI_POWER_STATE PowerState;               // offset: 0x5c ordinal: 0x29
  union PCI_HEADER_TYPE_DEPENDENT Dependent;       // offset: 0x9c ordinal: 0x2a
  ULONGLONG HackFlags;                             // offset: 0xa0 ordinal: 0x2b
  struct PCI_FUNCTION_RESOURCES *Resources;        // offset: 0xa8 ordinal: 0x2c
  struct _PCI_FDO_EXTENSION *BridgeFdoExtension;   // offset: 0xac ordinal: 0x2d
  struct _PCI_PDO_EXTENSION *NextBridge;           // offset: 0xb0 ordinal: 0x2e
  struct _PCI_PDO_EXTENSION *NextHashEntry;        // offset: 0xb4 ordinal: 0x2f
  struct _PCI_LOCK Lock;                           // offset: 0xb8 ordinal: 0x30
  struct _PCI_PMC PowerCapabilities;               // offset: 0xc0 ordinal: 0x31
  UCHAR TargetAgpCapabilityId;                     // offset: 0xc2 ordinal: 0x32
  USHORT CommandEnables;                           // offset: 0xc4 ordinal: 0x33
  USHORT InitialCommand;                           // offset: 0xc6 ordinal: 0x34
} _PCI_PDO_EXTENSION;

// 0x8 bytes (sizeof)
typedef struct _HEAP_ENTRY_EXTRA {
  USHORT AllocatorBackTraceIndex; // offset: 0x0 ordinal: 0x0
  USHORT TagIndex;                // offset: 0x2 ordinal: 0x1
  ULONG Settable;                 // offset: 0x4 ordinal: 0x2
  ULONGLONG ZeroInit;             // offset: 0x0 ordinal: 0x3
} _HEAP_ENTRY_EXTRA;

// 0x20 bytes (sizeof)
typedef struct _HEAP_VIRTUAL_ALLOC_ENTRY {
  struct _LIST_ENTRY Entry;            // offset: 0x0 ordinal: 0x0
  struct _HEAP_ENTRY_EXTRA ExtraStuff; // offset: 0x8 ordinal: 0x1
  ULONG CommitSize;                    // offset: 0x10 ordinal: 0x2
  ULONG ReserveSize;                   // offset: 0x14 ordinal: 0x3
  struct _HEAP_ENTRY BusyBlock;        // offset: 0x18 ordinal: 0x4
} _HEAP_VIRTUAL_ALLOC_ENTRY;

// 0x30 bytes (sizeof)
typedef struct _WNODE_HEADER {
  ULONG BufferSize; // offset: 0x0 ordinal: 0x0
  ULONG ProviderId; // offset: 0x4 ordinal: 0x1
  union {
    ULONGLONG HistoricalContext; // offset: 0x8 ordinal: 0x2
    ULONG Version;               // offset: 0x8 ordinal: 0x3
  };
  ULONG Linkage; // offset: 0xc ordinal: 0x4
  union {
    ULONG CountLost;                // offset: 0x10 ordinal: 0x5
    VOID *KernelHandle;             // offset: 0x10 ordinal: 0x6
    union _LARGE_INTEGER TimeStamp; // offset: 0x10 ordinal: 0x7
  };
  struct _GUID Guid;   // offset: 0x18 ordinal: 0x8
  ULONG ClientContext; // offset: 0x28 ordinal: 0x9
  ULONG Flags;         // offset: 0x2c ordinal: 0xa
} _WNODE_HEADER;

// 0x48 bytes (sizeof)
typedef struct _WMI_BUFFER_HEADER {
  union {
    struct _WNODE_HEADER Wnode; // offset: 0x0 ordinal: 0x0
    ULONGLONG Reserved1;        // offset: 0x0 ordinal: 0x1
  };
  ULONGLONG Reserved2;                      // offset: 0x8 ordinal: 0x2
  union _LARGE_INTEGER Reserved3;           // offset: 0x10 ordinal: 0x3
  VOID *Alignment;                          // offset: 0x18 ordinal: 0x4
  struct _SINGLE_LIST_ENTRY SlistEntry;     // offset: 0x1c ordinal: 0x5
  struct _LIST_ENTRY Entry;                 // offset: 0x18 ordinal: 0x6
  LONG ReferenceCount;                      // offset: 0x0 ordinal: 0x7
  ULONG SavedOffset;                        // offset: 0x4 ordinal: 0x8
  ULONG CurrentOffset;                      // offset: 0x8 ordinal: 0x9
  ULONG UsePerfClock;                       // offset: 0xc ordinal: 0xa
  union _LARGE_INTEGER TimeStamp;           // offset: 0x10 ordinal: 0xb
  struct _GUID Guid;                        // offset: 0x18 ordinal: 0xc
  struct _WMI_CLIENT_CONTEXT ClientContext; // offset: 0x28 ordinal: 0xd
  union {
    struct _WMI_BUFFER_STATE State; // offset: 0x2c ordinal: 0xe
    ULONG Flags;                    // offset: 0x2c ordinal: 0xf
  };
  ULONG Offset;     // offset: 0x30 ordinal: 0x10
  ULONG EventsLost; // offset: 0x34 ordinal: 0x11
  union {
    struct _GUID InstanceGuid; // offset: 0x38 ordinal: 0x12
    VOID *LoggerContext;       // offset: 0x38 ordinal: 0x13
  };
  struct _SINGLE_LIST_ENTRY GlobalEntry; // offset: 0x3c ordinal: 0x14
} _WMI_BUFFER_HEADER;

typedef VOID (*__anon_666)(struct _WMI_BUFFER_HEADER *, VOID *);

// 0x10 bytes (sizeof)
typedef struct _MMEXTEND_INFO {
  ULONGLONG CommittedSize; // offset: 0x0 ordinal: 0x0
  ULONG ReferenceCount;    // offset: 0x8 ordinal: 0x1
} _MMEXTEND_INFO;

// 0x34 bytes (sizeof)
typedef struct _MMVAD_LONG {
  ULONG StartingVpn;         // offset: 0x0 ordinal: 0x0
  ULONG EndingVpn;           // offset: 0x4 ordinal: 0x1
  struct _MMVAD *Parent;     // offset: 0x8 ordinal: 0x2
  struct _MMVAD *LeftChild;  // offset: 0xc ordinal: 0x3
  struct _MMVAD *RightChild; // offset: 0x10 ordinal: 0x4
  union {
    ULONG LongFlags;                 // offset: 0x0 ordinal: 0x0
    struct _MMVAD_FLAGS VadFlags;    // offset: 0x0 ordinal: 0x1
  } u;                               // offset: 0x14 ordinal: 0x5
  struct _CONTROL_AREA *ControlArea; // offset: 0x18 ordinal: 0x6
  struct _MMPTE *FirstPrototypePte;  // offset: 0x1c ordinal: 0x7
  struct _MMPTE *LastContiguousPte;  // offset: 0x20 ordinal: 0x8
  union {
    ULONG LongFlags2;               // offset: 0x0 ordinal: 0x0
    struct _MMVAD_FLAGS2 VadFlags2; // offset: 0x0 ordinal: 0x1
  } u2;                             // offset: 0x24 ordinal: 0x9
  union {
    struct _LIST_ENTRY List;        // offset: 0x0 ordinal: 0x0
    struct _MMADDRESS_LIST Secured; // offset: 0x0 ordinal: 0x1
  } u3;                             // offset: 0x28 ordinal: 0xa
  union {
    struct _MMBANKED_SECTION *Banked;    // offset: 0x0 ordinal: 0x0
    struct _MMEXTEND_INFO *ExtendedInfo; // offset: 0x0 ordinal: 0x1
  } u4;                                  // offset: 0x30 ordinal: 0xb
} _MMVAD_LONG;

// 0x1c bytes (sizeof)
typedef struct _AMD64_DBGKD_CONTROL_SET {
  ULONG TraceFlag;              // offset: 0x0 ordinal: 0x0
  ULONGLONG Dr7;                // offset: 0x4 ordinal: 0x1
  ULONGLONG CurrentSymbolStart; // offset: 0xc ordinal: 0x2
  ULONGLONG CurrentSymbolEnd;   // offset: 0x14 ordinal: 0x3
} _AMD64_DBGKD_CONTROL_SET;

// 0x14 bytes (sizeof)
typedef struct _IA64_DBGKD_CONTROL_SET {
  ULONG Continue;               // offset: 0x0 ordinal: 0x0
  ULONGLONG CurrentSymbolStart; // offset: 0x4 ordinal: 0x1
  ULONGLONG CurrentSymbolEnd;   // offset: 0xc ordinal: 0x2
} _IA64_DBGKD_CONTROL_SET;

// 0x1c bytes (sizeof)
typedef struct _DBGKD_ANY_CONTROL_SET {
  union {
    struct _X86_DBGKD_CONTROL_SET X86ControlSet;     // offset: 0x0 ordinal: 0x0
    ULONG AlphaControlSet;                           // offset: 0x0 ordinal: 0x1
    struct _IA64_DBGKD_CONTROL_SET IA64ControlSet;   // offset: 0x0 ordinal: 0x2
    struct _AMD64_DBGKD_CONTROL_SET Amd64ControlSet; // offset: 0x0 ordinal: 0x3
  };
} _DBGKD_ANY_CONTROL_SET;

// 0x20 bytes (sizeof)
typedef struct _DBGKD_CONTINUE2 {
  LONG ContinueStatus; // offset: 0x0 ordinal: 0x0
  union {
    struct _X86_DBGKD_CONTROL_SET ControlSet;    // offset: 0x4 ordinal: 0x1
    struct _DBGKD_ANY_CONTROL_SET AnyControlSet; // offset: 0x4 ordinal: 0x2
  };
} _DBGKD_CONTINUE2;

// 0x18 bytes (sizeof)
typedef struct _DBGKD_QUERY_MEMORY {
  ULONGLONG Address;  // offset: 0x0 ordinal: 0x0
  ULONGLONG Reserved; // offset: 0x8 ordinal: 0x1
  ULONG AddressSpace; // offset: 0x10 ordinal: 0x2
  ULONG Flags;        // offset: 0x14 ordinal: 0x3
} _DBGKD_QUERY_MEMORY;

// 0x10 bytes (sizeof)
typedef struct _DBGKD_FILL_MEMORY {
  ULONGLONG Address;    // offset: 0x0 ordinal: 0x0
  ULONG Length;         // offset: 0x8 ordinal: 0x1
  USHORT Flags;         // offset: 0xc ordinal: 0x2
  USHORT PatternLength; // offset: 0xe ordinal: 0x3
} _DBGKD_FILL_MEMORY;

// 0x18 bytes (sizeof)
typedef struct _DBGKD_SEARCH_MEMORY {
  union {
    ULONGLONG SearchAddress; // offset: 0x0 ordinal: 0x0
    ULONGLONG FoundAddress;  // offset: 0x0 ordinal: 0x1
  };
  ULONGLONG SearchLength; // offset: 0x8 ordinal: 0x2
  ULONG PatternLength;    // offset: 0x10 ordinal: 0x3
} _DBGKD_SEARCH_MEMORY;

// 0x28 bytes (sizeof)
typedef struct _DBGKD_GET_VERSION64 {
  USHORT MajorVersion;          // offset: 0x0 ordinal: 0x0
  USHORT MinorVersion;          // offset: 0x2 ordinal: 0x1
  USHORT ProtocolVersion;       // offset: 0x4 ordinal: 0x2
  USHORT Flags;                 // offset: 0x6 ordinal: 0x3
  USHORT MachineType;           // offset: 0x8 ordinal: 0x4
  UCHAR MaxPacketType;          // offset: 0xa ordinal: 0x5
  UCHAR MaxStateChange;         // offset: 0xb ordinal: 0x6
  UCHAR MaxManipulate;          // offset: 0xc ordinal: 0x7
  UCHAR Simulation;             // offset: 0xd ordinal: 0x8
  USHORT Unused[1];             // offset: 0xe ordinal: 0x9
  ULONGLONG KernBase;           // offset: 0x10 ordinal: 0xa
  ULONGLONG PsLoadedModuleList; // offset: 0x18 ordinal: 0xb
  ULONGLONG DebuggerDataList;   // offset: 0x20 ordinal: 0xc
} _DBGKD_GET_VERSION64;

// 0x20 bytes (sizeof)
typedef struct _DBGKD_GET_INTERNAL_BREAKPOINT64 {
  ULONGLONG BreakpointAddress; // offset: 0x0 ordinal: 0x0
  ULONG Flags;                 // offset: 0x8 ordinal: 0x1
  ULONG Calls;                 // offset: 0xc ordinal: 0x2
  ULONG MaxCallsPerPeriod;     // offset: 0x10 ordinal: 0x3
  ULONG MinInstructions;       // offset: 0x14 ordinal: 0x4
  ULONG MaxInstructions;       // offset: 0x18 ordinal: 0x5
  ULONG TotalInstructions;     // offset: 0x1c ordinal: 0x6
} _DBGKD_GET_INTERNAL_BREAKPOINT64;

// 0x10 bytes (sizeof)
typedef struct _DBGKD_SET_INTERNAL_BREAKPOINT64 {
  ULONGLONG BreakpointAddress; // offset: 0x0 ordinal: 0x0
  ULONG Flags;                 // offset: 0x8 ordinal: 0x1
} _DBGKD_SET_INTERNAL_BREAKPOINT64;

// 0x8 bytes (sizeof)
typedef struct _DBGKD_SET_SPECIAL_CALL64 {
  ULONGLONG SpecialCall; // offset: 0x0 ordinal: 0x0
} _DBGKD_SET_SPECIAL_CALL64;

// 0x20 bytes (sizeof)
typedef struct _DBGKD_READ_WRITE_IO_EXTENDED64 {
  ULONG DataSize;      // offset: 0x0 ordinal: 0x0
  ULONG InterfaceType; // offset: 0x4 ordinal: 0x1
  ULONG BusNumber;     // offset: 0x8 ordinal: 0x2
  ULONG AddressSpace;  // offset: 0xc ordinal: 0x3
  ULONGLONG IoAddress; // offset: 0x10 ordinal: 0x4
  ULONG DataValue;     // offset: 0x18 ordinal: 0x5
} _DBGKD_READ_WRITE_IO_EXTENDED64;

// 0x10 bytes (sizeof)
typedef struct _DBGKD_READ_WRITE_IO64 {
  ULONGLONG IoAddress; // offset: 0x0 ordinal: 0x0
  ULONG DataSize;      // offset: 0x8 ordinal: 0x1
  ULONG DataValue;     // offset: 0xc ordinal: 0x2
} _DBGKD_READ_WRITE_IO64;

// 0x10 bytes (sizeof)
typedef struct _DBGKD_WRITE_BREAKPOINT64 {
  ULONGLONG BreakPointAddress; // offset: 0x0 ordinal: 0x0
  ULONG BreakPointHandle;      // offset: 0x8 ordinal: 0x1
} _DBGKD_WRITE_BREAKPOINT64;

// 0x10 bytes (sizeof)
typedef struct _DBGKD_WRITE_MEMORY64 {
  ULONGLONG TargetBaseAddress; // offset: 0x0 ordinal: 0x0
  ULONG TransferCount;         // offset: 0x8 ordinal: 0x1
  ULONG ActualBytesWritten;    // offset: 0xc ordinal: 0x2
} _DBGKD_WRITE_MEMORY64;

// 0x10 bytes (sizeof)
typedef struct _DBGKD_READ_MEMORY64 {
  ULONGLONG TargetBaseAddress; // offset: 0x0 ordinal: 0x0
  ULONG TransferCount;         // offset: 0x8 ordinal: 0x1
  ULONG ActualBytesRead;       // offset: 0xc ordinal: 0x2
} _DBGKD_READ_MEMORY64;

// 0x34 bytes (sizeof)
typedef struct _DBGKD_MANIPULATE_STATE32 {
  ULONG ApiNumber;       // offset: 0x0 ordinal: 0x0
  USHORT ProcessorLevel; // offset: 0x4 ordinal: 0x1
  USHORT Processor;      // offset: 0x6 ordinal: 0x2
  LONG ReturnStatus;     // offset: 0x8 ordinal: 0x3
  union {
    struct _DBGKD_READ_MEMORY32 ReadMemory;     // offset: 0x0 ordinal: 0x0
    struct _DBGKD_WRITE_MEMORY32 WriteMemory;   // offset: 0x0 ordinal: 0x1
    struct _DBGKD_READ_MEMORY64 ReadMemory64;   // offset: 0x0 ordinal: 0x2
    struct _DBGKD_WRITE_MEMORY64 WriteMemory64; // offset: 0x0 ordinal: 0x3
    struct _DBGKD_GET_CONTEXT GetContext;       // offset: 0x0 ordinal: 0x4
    struct _DBGKD_SET_CONTEXT SetContext;       // offset: 0x0 ordinal: 0x5
    struct _DBGKD_WRITE_BREAKPOINT32
        WriteBreakPoint; // offset: 0x0 ordinal: 0x6
    struct _DBGKD_RESTORE_BREAKPOINT
        RestoreBreakPoint;                     // offset: 0x0 ordinal: 0x7
    struct _DBGKD_CONTINUE Continue;           // offset: 0x0 ordinal: 0x8
    struct _DBGKD_CONTINUE2 Continue2;         // offset: 0x0 ordinal: 0x9
    struct _DBGKD_READ_WRITE_IO32 ReadWriteIo; // offset: 0x0 ordinal: 0xa
    struct _DBGKD_READ_WRITE_IO_EXTENDED32
        ReadWriteIoExtended; // offset: 0x0 ordinal: 0xb
    struct _DBGKD_QUERY_SPECIAL_CALLS
        QuerySpecialCalls;                           // offset: 0x0 ordinal: 0xc
    struct _DBGKD_SET_SPECIAL_CALL32 SetSpecialCall; // offset: 0x0 ordinal: 0xd
    struct _DBGKD_SET_INTERNAL_BREAKPOINT32
        SetInternalBreakpoint; // offset: 0x0 ordinal: 0xe
    struct _DBGKD_GET_INTERNAL_BREAKPOINT32
        GetInternalBreakpoint;                 // offset: 0x0 ordinal: 0xf
    struct _DBGKD_GET_VERSION32 GetVersion32;  // offset: 0x0 ordinal: 0x10
    struct _DBGKD_BREAKPOINTEX BreakPointEx;   // offset: 0x0 ordinal: 0x11
    struct _DBGKD_READ_WRITE_MSR ReadWriteMsr; // offset: 0x0 ordinal: 0x12
    struct _DBGKD_SEARCH_MEMORY SearchMemory;  // offset: 0x0 ordinal: 0x13
  } u;                                         // offset: 0xc ordinal: 0x4
} _DBGKD_MANIPULATE_STATE32;

// 0x38 bytes (sizeof)
typedef struct _DBGKD_MANIPULATE_STATE64 {
  ULONG ApiNumber;       // offset: 0x0 ordinal: 0x0
  USHORT ProcessorLevel; // offset: 0x4 ordinal: 0x1
  USHORT Processor;      // offset: 0x6 ordinal: 0x2
  LONG ReturnStatus;     // offset: 0x8 ordinal: 0x3
  union {
    struct _DBGKD_READ_MEMORY64 ReadMemory;   // offset: 0x0 ordinal: 0x0
    struct _DBGKD_WRITE_MEMORY64 WriteMemory; // offset: 0x0 ordinal: 0x1
    struct _DBGKD_GET_CONTEXT GetContext;     // offset: 0x0 ordinal: 0x2
    struct _DBGKD_SET_CONTEXT SetContext;     // offset: 0x0 ordinal: 0x3
    struct _DBGKD_WRITE_BREAKPOINT64
        WriteBreakPoint; // offset: 0x0 ordinal: 0x4
    struct _DBGKD_RESTORE_BREAKPOINT
        RestoreBreakPoint;                     // offset: 0x0 ordinal: 0x5
    struct _DBGKD_CONTINUE Continue;           // offset: 0x0 ordinal: 0x6
    struct _DBGKD_CONTINUE2 Continue2;         // offset: 0x0 ordinal: 0x7
    struct _DBGKD_READ_WRITE_IO64 ReadWriteIo; // offset: 0x0 ordinal: 0x8
    struct _DBGKD_READ_WRITE_IO_EXTENDED64
        ReadWriteIoExtended; // offset: 0x0 ordinal: 0x9
    struct _DBGKD_QUERY_SPECIAL_CALLS
        QuerySpecialCalls;                           // offset: 0x0 ordinal: 0xa
    struct _DBGKD_SET_SPECIAL_CALL64 SetSpecialCall; // offset: 0x0 ordinal: 0xb
    struct _DBGKD_SET_INTERNAL_BREAKPOINT64
        SetInternalBreakpoint; // offset: 0x0 ordinal: 0xc
    struct _DBGKD_GET_INTERNAL_BREAKPOINT64
        GetInternalBreakpoint;                    // offset: 0x0 ordinal: 0xd
    struct _DBGKD_GET_VERSION64 GetVersion64;     // offset: 0x0 ordinal: 0xe
    struct _DBGKD_BREAKPOINTEX BreakPointEx;      // offset: 0x0 ordinal: 0xf
    struct _DBGKD_READ_WRITE_MSR ReadWriteMsr;    // offset: 0x0 ordinal: 0x10
    struct _DBGKD_SEARCH_MEMORY SearchMemory;     // offset: 0x0 ordinal: 0x11
    struct _DBGKD_GET_SET_BUS_DATA GetSetBusData; // offset: 0x0 ordinal: 0x12
    struct _DBGKD_FILL_MEMORY FillMemory;         // offset: 0x0 ordinal: 0x13
    struct _DBGKD_QUERY_MEMORY QueryMemory;       // offset: 0x0 ordinal: 0x14
  } u;                                            // offset: 0x10 ordinal: 0x4
} _DBGKD_MANIPULATE_STATE64;

// 0x28 bytes (sizeof)
typedef struct _DBGKD_LOAD_SYMBOLS64 {
  ULONG PathNameLength; // offset: 0x0 ordinal: 0x0
  ULONGLONG BaseOfDll;  // offset: 0x8 ordinal: 0x1
  ULONGLONG ProcessId;  // offset: 0x10 ordinal: 0x2
  ULONG CheckSum;       // offset: 0x18 ordinal: 0x3
  ULONG SizeOfImage;    // offset: 0x1c ordinal: 0x4
  UCHAR UnloadSymbols;  // offset: 0x20 ordinal: 0x5
} _DBGKD_LOAD_SYMBOLS64;

// 0x98 bytes (sizeof)
typedef struct _EXCEPTION_RECORD64 {
  LONG ExceptionCode;                 // offset: 0x0 ordinal: 0x0
  ULONG ExceptionFlags;               // offset: 0x4 ordinal: 0x1
  ULONGLONG ExceptionRecord;          // offset: 0x8 ordinal: 0x2
  ULONGLONG ExceptionAddress;         // offset: 0x10 ordinal: 0x3
  ULONG NumberParameters;             // offset: 0x18 ordinal: 0x4
  ULONG __unusedAlignment;            // offset: 0x1c ordinal: 0x5
  ULONGLONG ExceptionInformation[15]; // offset: 0x20 ordinal: 0x6
} _EXCEPTION_RECORD64;

// 0xa0 bytes (sizeof)
typedef struct _DBGKM_EXCEPTION64 {
  struct _EXCEPTION_RECORD64 ExceptionRecord; // offset: 0x0 ordinal: 0x0
  ULONG FirstChance;                          // offset: 0x98 ordinal: 0x1
} _DBGKM_EXCEPTION64;

// 0x30 bytes (sizeof)
typedef struct _IO_COUNTERS {
  ULONGLONG ReadOperationCount;  // offset: 0x0 ordinal: 0x0
  ULONGLONG WriteOperationCount; // offset: 0x8 ordinal: 0x1
  ULONGLONG OtherOperationCount; // offset: 0x10 ordinal: 0x2
  ULONGLONG ReadTransferCount;   // offset: 0x18 ordinal: 0x3
  ULONGLONG WriteTransferCount;  // offset: 0x20 ordinal: 0x4
  ULONGLONG OtherTransferCount;  // offset: 0x28 ordinal: 0x5
} _IO_COUNTERS;

// 0x20 bytes (sizeof)
typedef struct PROCESSOR_PERF_STATE {
  UCHAR PercentFrequency;    // offset: 0x0 ordinal: 0x0
  UCHAR MinCapacity;         // offset: 0x1 ordinal: 0x1
  USHORT Power;              // offset: 0x2 ordinal: 0x2
  UCHAR IncreaseLevel;       // offset: 0x4 ordinal: 0x3
  UCHAR DecreaseLevel;       // offset: 0x5 ordinal: 0x4
  USHORT Flags;              // offset: 0x6 ordinal: 0x5
  ULONG IncreaseTime;        // offset: 0x8 ordinal: 0x6
  ULONG DecreaseTime;        // offset: 0xc ordinal: 0x7
  ULONG IncreaseCount;       // offset: 0x10 ordinal: 0x8
  ULONG DecreaseCount;       // offset: 0x14 ordinal: 0x9
  ULONGLONG PerformanceTime; // offset: 0x18 ordinal: 0xa
} PROCESSOR_PERF_STATE;

// 0x8 bytes (sizeof)
typedef union _SLIST_HEADER {
  ULONGLONG Alignment;            // offset: 0x0 ordinal: 0x0
  struct _SINGLE_LIST_ENTRY Next; // offset: 0x0 ordinal: 0x1
  USHORT Depth;                   // offset: 0x4 ordinal: 0x2
  USHORT Sequence;                // offset: 0x6 ordinal: 0x3
} _SLIST_HEADER;

// 0x30 bytes (sizeof)
typedef struct _HEAP_LOOKASIDE {
  union _SLIST_HEADER ListHead; // offset: 0x0 ordinal: 0x0
  USHORT Depth;                 // offset: 0x8 ordinal: 0x1
  USHORT MaximumDepth;          // offset: 0xa ordinal: 0x2
  ULONG TotalAllocates;         // offset: 0xc ordinal: 0x3
  ULONG AllocateMisses;         // offset: 0x10 ordinal: 0x4
  ULONG TotalFrees;             // offset: 0x14 ordinal: 0x5
  ULONG FreeMisses;             // offset: 0x18 ordinal: 0x6
  ULONG LastTotalAllocates;     // offset: 0x1c ordinal: 0x7
  ULONG LastAllocateMisses;     // offset: 0x20 ordinal: 0x8
  ULONG Counters[2];            // offset: 0x24 ordinal: 0x9
} _HEAP_LOOKASIDE;

// 0x80 bytes (sizeof)
typedef struct _GENERAL_LOOKASIDE {
  union _SLIST_HEADER ListHead; // offset: 0x0 ordinal: 0x0
  USHORT Depth;                 // offset: 0x8 ordinal: 0x1
  USHORT MaximumDepth;          // offset: 0xa ordinal: 0x2
  ULONG TotalAllocates;         // offset: 0xc ordinal: 0x3
  union {
    ULONG AllocateMisses; // offset: 0x10 ordinal: 0x4
    ULONG AllocateHits;   // offset: 0x10 ordinal: 0x5
  };
  ULONG TotalFrees; // offset: 0x14 ordinal: 0x6
  union {
    ULONG FreeMisses; // offset: 0x18 ordinal: 0x7
    ULONG FreeHits;   // offset: 0x18 ordinal: 0x8
  };
  enum _POOL_TYPE Type;                             // offset: 0x1c ordinal: 0x9
  ULONG Tag;                                        // offset: 0x20 ordinal: 0xa
  ULONG Size;                                       // offset: 0x24 ordinal: 0xb
  VOID *(*Allocate)(enum _POOL_TYPE, ULONG, ULONG); // offset: 0x28 ordinal: 0xc
  VOID (*Free)(VOID *);                             // offset: 0x2c ordinal: 0xd
  struct _LIST_ENTRY ListEntry;                     // offset: 0x30 ordinal: 0xe
  ULONG LastTotalAllocates;                         // offset: 0x38 ordinal: 0xf
  union {
    ULONG LastAllocateMisses; // offset: 0x3c ordinal: 0x10
    ULONG LastAllocateHits;   // offset: 0x3c ordinal: 0x11
  };
  ULONG Future[2]; // offset: 0x40 ordinal: 0x12
} _GENERAL_LOOKASIDE;

// 0x100 bytes (sizeof)
typedef struct _NPAGED_LOOKASIDE_LIST {
  struct _GENERAL_LOOKASIDE L;        // offset: 0x0 ordinal: 0x0
  ULONG Lock__ObsoleteButDoNotDelete; // offset: 0x80 ordinal: 0x1
} _NPAGED_LOOKASIDE_LIST;

// 0x8 bytes (sizeof)
typedef struct _PP_LOOKASIDE_LIST {
  struct _GENERAL_LOOKASIDE *P; // offset: 0x0 ordinal: 0x0
  struct _GENERAL_LOOKASIDE *L; // offset: 0x4 ordinal: 0x1
} _PP_LOOKASIDE_LIST;

// 0x30 bytes (sizeof)
typedef struct _KNODE {
  ULONG ProcessorMask;                         // offset: 0x0 ordinal: 0x0
  ULONG Color;                                 // offset: 0x4 ordinal: 0x1
  ULONG MmShiftedColor;                        // offset: 0x8 ordinal: 0x2
  ULONG FreeCount[2];                          // offset: 0xc ordinal: 0x3
  union _SLIST_HEADER DeadStackList;           // offset: 0x18 ordinal: 0x4
  union _SLIST_HEADER PfnDereferenceSListHead; // offset: 0x20 ordinal: 0x5
  struct _SINGLE_LIST_ENTRY *PfnDeferredList;  // offset: 0x28 ordinal: 0x6
  UCHAR Seed;                                  // offset: 0x2c ordinal: 0x7
  struct _flags Flags;                         // offset: 0x2d ordinal: 0x8
} _KNODE;

// 0x338 bytes (sizeof)
typedef struct _KUSER_SHARED_DATA {
  ULONG TickCountLow;                  // offset: 0x0 ordinal: 0x0
  ULONG TickCountMultiplier;           // offset: 0x4 ordinal: 0x1
  struct _KSYSTEM_TIME InterruptTime;  // offset: 0x8 ordinal: 0x2
  struct _KSYSTEM_TIME SystemTime;     // offset: 0x14 ordinal: 0x3
  struct _KSYSTEM_TIME TimeZoneBias;   // offset: 0x20 ordinal: 0x4
  USHORT ImageNumberLow;               // offset: 0x2c ordinal: 0x5
  USHORT ImageNumberHigh;              // offset: 0x2e ordinal: 0x6
  USHORT NtSystemRoot[260];            // offset: 0x30 ordinal: 0x7
  ULONG MaxStackTraceDepth;            // offset: 0x238 ordinal: 0x8
  ULONG CryptoExponent;                // offset: 0x23c ordinal: 0x9
  ULONG TimeZoneId;                    // offset: 0x240 ordinal: 0xa
  ULONG Reserved2[8];                  // offset: 0x244 ordinal: 0xb
  enum _NT_PRODUCT_TYPE NtProductType; // offset: 0x264 ordinal: 0xc
  UCHAR ProductTypeIsValid;            // offset: 0x268 ordinal: 0xd
  ULONG NtMajorVersion;                // offset: 0x26c ordinal: 0xe
  ULONG NtMinorVersion;                // offset: 0x270 ordinal: 0xf
  UCHAR ProcessorFeatures[64];         // offset: 0x274 ordinal: 0x10
  ULONG Reserved1;                     // offset: 0x2b4 ordinal: 0x11
  ULONG Reserved3;                     // offset: 0x2b8 ordinal: 0x12
  ULONG TimeSlip;                      // offset: 0x2bc ordinal: 0x13
  enum _ALTERNATIVE_ARCHITECTURE_TYPE
      AlternativeArchitecture;               // offset: 0x2c0 ordinal: 0x14
  union _LARGE_INTEGER SystemExpirationDate; // offset: 0x2c8 ordinal: 0x15
  ULONG SuiteMask;                           // offset: 0x2d0 ordinal: 0x16
  UCHAR KdDebuggerEnabled;                   // offset: 0x2d4 ordinal: 0x17
  UCHAR NXSupportPolicy;                     // offset: 0x2d5 ordinal: 0x18
  ULONG ActiveConsoleId;                     // offset: 0x2d8 ordinal: 0x19
  ULONG DismountCount;                       // offset: 0x2dc ordinal: 0x1a
  ULONG ComPlusPackage;                      // offset: 0x2e0 ordinal: 0x1b
  ULONG LastSystemRITEventTickCount;         // offset: 0x2e4 ordinal: 0x1c
  ULONG NumberOfPhysicalPages;               // offset: 0x2e8 ordinal: 0x1d
  UCHAR SafeBootMode;                        // offset: 0x2ec ordinal: 0x1e
  ULONG TraceLogging;                        // offset: 0x2f0 ordinal: 0x1f
  ULONGLONG TestRetInstruction;              // offset: 0x2f8 ordinal: 0x20
  ULONG SystemCall;                          // offset: 0x300 ordinal: 0x21
  ULONG SystemCallReturn;                    // offset: 0x304 ordinal: 0x22
  ULONGLONG SystemCallPad[3];                // offset: 0x308 ordinal: 0x23
  union {
    struct _KSYSTEM_TIME TickCount; // offset: 0x320 ordinal: 0x24
    ULONGLONG TickCountQuad;        // offset: 0x320 ordinal: 0x25
  };
  ULONG Cookie; // offset: 0x330 ordinal: 0x26
} _KUSER_SHARED_DATA;

// 0x20 bytes (sizeof)
typedef struct PROCESSOR_IDLE_TIMES {
  ULONGLONG StartTime;          // offset: 0x0 ordinal: 0x0
  ULONGLONG EndTime;            // offset: 0x8 ordinal: 0x1
  ULONG IdleHandlerReserved[4]; // offset: 0x10 ordinal: 0x2
} PROCESSOR_IDLE_TIMES;

typedef UCHAR (*__anon_1045)(struct PROCESSOR_IDLE_TIMES *);

// 0x20 bytes (sizeof)
typedef struct _POP_IDLE_HANDLER {
  ULONG Latency;        // offset: 0x0 ordinal: 0x0
  ULONG TimeCheck;      // offset: 0x4 ordinal: 0x1
  ULONG DemoteLimit;    // offset: 0x8 ordinal: 0x2
  ULONG PromoteLimit;   // offset: 0xc ordinal: 0x3
  ULONG PromoteCount;   // offset: 0x10 ordinal: 0x4
  UCHAR Demote;         // offset: 0x14 ordinal: 0x5
  UCHAR Promote;        // offset: 0x15 ordinal: 0x6
  UCHAR PromotePercent; // offset: 0x16 ordinal: 0x7
  UCHAR DemotePercent;  // offset: 0x17 ordinal: 0x8
  UCHAR State;          // offset: 0x18 ordinal: 0x9
  UCHAR Spare[3];       // offset: 0x19 ordinal: 0xa
  UCHAR(*IdleFunction)
  (struct PROCESSOR_IDLE_TIMES *); // offset: 0x1c ordinal: 0xb
} _POP_IDLE_HANDLER;

// 0x8 bytes (sizeof)
typedef union _ULARGE_INTEGER {
  ULONG LowPart;  // offset: 0x0 ordinal: 0x0
  ULONG HighPart; // offset: 0x4 ordinal: 0x1
  struct {
    ULONG LowPart;    // offset: 0x0 ordinal: 0x0
    ULONG HighPart;   // offset: 0x4 ordinal: 0x1
  } u;                // offset: 0x0 ordinal: 0x2
  ULONGLONG QuadPart; // offset: 0x0 ordinal: 0x3
} _ULARGE_INTEGER;

// 0x210 bytes (sizeof)
typedef struct _PEB {
  UCHAR InheritedAddressSpace;    // offset: 0x0 ordinal: 0x0
  UCHAR ReadImageFileExecOptions; // offset: 0x1 ordinal: 0x1
  UCHAR BeingDebugged;            // offset: 0x2 ordinal: 0x2
  UCHAR SpareBool;                // offset: 0x3 ordinal: 0x3
  VOID *Mutant;                   // offset: 0x4 ordinal: 0x4
  VOID *ImageBaseAddress;         // offset: 0x8 ordinal: 0x5
  struct _PEB_LDR_DATA *Ldr;      // offset: 0xc ordinal: 0x6
  struct _RTL_USER_PROCESS_PARAMETERS
      *ProcessParameters;                      // offset: 0x10 ordinal: 0x7
  VOID *SubSystemData;                         // offset: 0x14 ordinal: 0x8
  VOID *ProcessHeap;                           // offset: 0x18 ordinal: 0x9
  struct _RTL_CRITICAL_SECTION *FastPebLock;   // offset: 0x1c ordinal: 0xa
  VOID *FastPebLockRoutine;                    // offset: 0x20 ordinal: 0xb
  VOID *FastPebUnlockRoutine;                  // offset: 0x24 ordinal: 0xc
  ULONG EnvironmentUpdateCount;                // offset: 0x28 ordinal: 0xd
  VOID *KernelCallbackTable;                   // offset: 0x2c ordinal: 0xe
  ULONG SystemReserved[1];                     // offset: 0x30 ordinal: 0xf
  ULONG AtlThunkSListPtr32;                    // offset: 0x34 ordinal: 0x10
  struct _PEB_FREE_BLOCK *FreeList;            // offset: 0x38 ordinal: 0x11
  ULONG TlsExpansionCounter;                   // offset: 0x3c ordinal: 0x12
  VOID *TlsBitmap;                             // offset: 0x40 ordinal: 0x13
  ULONG TlsBitmapBits[2];                      // offset: 0x44 ordinal: 0x14
  VOID *ReadOnlySharedMemoryBase;              // offset: 0x4c ordinal: 0x15
  VOID *ReadOnlySharedMemoryHeap;              // offset: 0x50 ordinal: 0x16
  VOID **ReadOnlyStaticServerData;             // offset: 0x54 ordinal: 0x17
  VOID *AnsiCodePageData;                      // offset: 0x58 ordinal: 0x18
  VOID *OemCodePageData;                       // offset: 0x5c ordinal: 0x19
  VOID *UnicodeCaseTableData;                  // offset: 0x60 ordinal: 0x1a
  ULONG NumberOfProcessors;                    // offset: 0x64 ordinal: 0x1b
  ULONG NtGlobalFlag;                          // offset: 0x68 ordinal: 0x1c
  union _LARGE_INTEGER CriticalSectionTimeout; // offset: 0x70 ordinal: 0x1d
  ULONG HeapSegmentReserve;                    // offset: 0x78 ordinal: 0x1e
  ULONG HeapSegmentCommit;                     // offset: 0x7c ordinal: 0x1f
  ULONG HeapDeCommitTotalFreeThreshold;        // offset: 0x80 ordinal: 0x20
  ULONG HeapDeCommitFreeBlockThreshold;        // offset: 0x84 ordinal: 0x21
  ULONG NumberOfHeaps;                         // offset: 0x88 ordinal: 0x22
  ULONG MaximumNumberOfHeaps;                  // offset: 0x8c ordinal: 0x23
  VOID **ProcessHeaps;                         // offset: 0x90 ordinal: 0x24
  VOID *GdiSharedHandleTable;                  // offset: 0x94 ordinal: 0x25
  VOID *ProcessStarterHelper;                  // offset: 0x98 ordinal: 0x26
  ULONG GdiDCAttributeList;                    // offset: 0x9c ordinal: 0x27
  VOID *LoaderLock;                            // offset: 0xa0 ordinal: 0x28
  ULONG OSMajorVersion;                        // offset: 0xa4 ordinal: 0x29
  ULONG OSMinorVersion;                        // offset: 0xa8 ordinal: 0x2a
  USHORT OSBuildNumber;                        // offset: 0xac ordinal: 0x2b
  USHORT OSCSDVersion;                         // offset: 0xae ordinal: 0x2c
  ULONG OSPlatformId;                          // offset: 0xb0 ordinal: 0x2d
  ULONG ImageSubsystem;                        // offset: 0xb4 ordinal: 0x2e
  ULONG ImageSubsystemMajorVersion;            // offset: 0xb8 ordinal: 0x2f
  ULONG ImageSubsystemMinorVersion;            // offset: 0xbc ordinal: 0x30
  ULONG ImageProcessAffinityMask;              // offset: 0xc0 ordinal: 0x31
  ULONG GdiHandleBuffer[34];                   // offset: 0xc4 ordinal: 0x32
  VOID (*PostProcessInitRoutine)();            // offset: 0x14c ordinal: 0x33
  VOID *TlsExpansionBitmap;                    // offset: 0x150 ordinal: 0x34
  ULONG TlsExpansionBitmapBits[32];            // offset: 0x154 ordinal: 0x35
  ULONG SessionId;                             // offset: 0x1d4 ordinal: 0x36
  union _ULARGE_INTEGER AppCompatFlags;        // offset: 0x1d8 ordinal: 0x37
  union _ULARGE_INTEGER AppCompatFlagsUser;    // offset: 0x1e0 ordinal: 0x38
  VOID *pShimData;                             // offset: 0x1e8 ordinal: 0x39
  VOID *AppCompatInfo;                         // offset: 0x1ec ordinal: 0x3a
  struct _UNICODE_STRING CSDVersion;           // offset: 0x1f0 ordinal: 0x3b
  VOID *ActivationContextData;                 // offset: 0x1f8 ordinal: 0x3c
  VOID *ProcessAssemblyStorageMap;             // offset: 0x1fc ordinal: 0x3d
  VOID *SystemDefaultActivationContextData;    // offset: 0x200 ordinal: 0x3e
  VOID *SystemAssemblyStorageMap;              // offset: 0x204 ordinal: 0x3f
  ULONG MinimumStackCommit;                    // offset: 0x208 ordinal: 0x40
} _PEB;

// 0xfb8 bytes (sizeof)
typedef struct _TEB {
  struct _NT_TIB NtTib;                 // offset: 0x0 ordinal: 0x0
  VOID *EnvironmentPointer;             // offset: 0x1c ordinal: 0x1
  struct _CLIENT_ID ClientId;           // offset: 0x20 ordinal: 0x2
  VOID *ActiveRpcHandle;                // offset: 0x28 ordinal: 0x3
  VOID *ThreadLocalStoragePointer;      // offset: 0x2c ordinal: 0x4
  struct _PEB *ProcessEnvironmentBlock; // offset: 0x30 ordinal: 0x5
  ULONG LastErrorValue;                 // offset: 0x34 ordinal: 0x6
  ULONG CountOfOwnedCriticalSections;   // offset: 0x38 ordinal: 0x7
  VOID *CsrClientThread;                // offset: 0x3c ordinal: 0x8
  VOID *Win32ThreadInfo;                // offset: 0x40 ordinal: 0x9
  ULONG User32Reserved[26];             // offset: 0x44 ordinal: 0xa
  ULONG UserReserved[5];                // offset: 0xac ordinal: 0xb
  VOID *WOW32Reserved;                  // offset: 0xc0 ordinal: 0xc
  ULONG CurrentLocale;                  // offset: 0xc4 ordinal: 0xd
  ULONG FpSoftwareStatusRegister;       // offset: 0xc8 ordinal: 0xe
  VOID *SystemReserved1[54];            // offset: 0xcc ordinal: 0xf
  LONG ExceptionCode;                   // offset: 0x1a4 ordinal: 0x10
  struct _ACTIVATION_CONTEXT_STACK
      ActivationContextStack;                 // offset: 0x1a8 ordinal: 0x11
  UCHAR SpareBytes1[24];                      // offset: 0x1bc ordinal: 0x12
  struct _GDI_TEB_BATCH GdiTebBatch;          // offset: 0x1d4 ordinal: 0x13
  struct _CLIENT_ID RealClientId;             // offset: 0x6b4 ordinal: 0x14
  VOID *GdiCachedProcessHandle;               // offset: 0x6bc ordinal: 0x15
  ULONG GdiClientPID;                         // offset: 0x6c0 ordinal: 0x16
  ULONG GdiClientTID;                         // offset: 0x6c4 ordinal: 0x17
  VOID *GdiThreadLocalInfo;                   // offset: 0x6c8 ordinal: 0x18
  ULONG Win32ClientInfo[62];                  // offset: 0x6cc ordinal: 0x19
  VOID *glDispatchTable[233];                 // offset: 0x7c4 ordinal: 0x1a
  ULONG glReserved1[29];                      // offset: 0xb68 ordinal: 0x1b
  VOID *glReserved2;                          // offset: 0xbdc ordinal: 0x1c
  VOID *glSectionInfo;                        // offset: 0xbe0 ordinal: 0x1d
  VOID *glSection;                            // offset: 0xbe4 ordinal: 0x1e
  VOID *glTable;                              // offset: 0xbe8 ordinal: 0x1f
  VOID *glCurrentRC;                          // offset: 0xbec ordinal: 0x20
  VOID *glContext;                            // offset: 0xbf0 ordinal: 0x21
  ULONG LastStatusValue;                      // offset: 0xbf4 ordinal: 0x22
  struct _UNICODE_STRING StaticUnicodeString; // offset: 0xbf8 ordinal: 0x23
  USHORT StaticUnicodeBuffer[261];            // offset: 0xc00 ordinal: 0x24
  VOID *DeallocationStack;                    // offset: 0xe0c ordinal: 0x25
  VOID *TlsSlots[64];                         // offset: 0xe10 ordinal: 0x26
  struct _LIST_ENTRY TlsLinks;                // offset: 0xf10 ordinal: 0x27
  VOID *Vdm;                                  // offset: 0xf18 ordinal: 0x28
  VOID *ReservedForNtRpc;                     // offset: 0xf1c ordinal: 0x29
  VOID *DbgSsReserved[2];                     // offset: 0xf20 ordinal: 0x2a
  ULONG HardErrorsAreDisabled;                // offset: 0xf28 ordinal: 0x2b
  VOID *Instrumentation[16];                  // offset: 0xf2c ordinal: 0x2c
  VOID *WinSockData;                          // offset: 0xf6c ordinal: 0x2d
  ULONG GdiBatchCount;                        // offset: 0xf70 ordinal: 0x2e
  UCHAR InDbgPrint;                           // offset: 0xf74 ordinal: 0x2f
  UCHAR FreeStackOnTermination;               // offset: 0xf75 ordinal: 0x30
  UCHAR HasFiberData;                         // offset: 0xf76 ordinal: 0x31
  UCHAR IdealProcessor;                       // offset: 0xf77 ordinal: 0x32
  ULONG Spare3;                               // offset: 0xf78 ordinal: 0x33
  VOID *ReservedForPerf;                      // offset: 0xf7c ordinal: 0x34
  VOID *ReservedForOle;                       // offset: 0xf80 ordinal: 0x35
  ULONG WaitingOnLoaderLock;                  // offset: 0xf84 ordinal: 0x36
  struct _Wx86ThreadState Wx86Thread;         // offset: 0xf88 ordinal: 0x37
  VOID **TlsExpansionSlots;                   // offset: 0xf94 ordinal: 0x38
  ULONG ImpersonationLocale;                  // offset: 0xf98 ordinal: 0x39
  ULONG IsImpersonating;                      // offset: 0xf9c ordinal: 0x3a
  VOID *NlsCache;                             // offset: 0xfa0 ordinal: 0x3b
  VOID *pShimData;                            // offset: 0xfa4 ordinal: 0x3c
  ULONG HeapVirtualAffinity;                  // offset: 0xfa8 ordinal: 0x3d
  VOID *CurrentTransactionHandle;             // offset: 0xfac ordinal: 0x3e
  struct _TEB_ACTIVE_FRAME *ActiveFrame;      // offset: 0xfb0 ordinal: 0x3f
  UCHAR SafeThunkCall;                        // offset: 0xfb4 ordinal: 0x40
  UCHAR BooleanSpare[3];                      // offset: 0xfb5 ordinal: 0x41
} _TEB;

// 0x28 bytes (sizeof)
typedef struct _KTIMER {
  struct _DISPATCHER_HEADER Header;  // offset: 0x0 ordinal: 0x0
  union _ULARGE_INTEGER DueTime;     // offset: 0x10 ordinal: 0x1
  struct _LIST_ENTRY TimerListEntry; // offset: 0x18 ordinal: 0x2
  struct _KDPC *Dpc;                 // offset: 0x20 ordinal: 0x3
  LONG Period;                       // offset: 0x24 ordinal: 0x4
} _KTIMER;

// 0x98 bytes (sizeof)
typedef struct _ETIMER {
  struct _KTIMER KeTimer;                  // offset: 0x0 ordinal: 0x0
  struct _KAPC TimerApc;                   // offset: 0x28 ordinal: 0x1
  struct _KDPC TimerDpc;                   // offset: 0x58 ordinal: 0x2
  struct _LIST_ENTRY ActiveTimerListEntry; // offset: 0x78 ordinal: 0x3
  ULONG Lock;                              // offset: 0x80 ordinal: 0x4
  LONG Period;                             // offset: 0x84 ordinal: 0x5
  UCHAR ApcAssociated;                     // offset: 0x88 ordinal: 0x6
  UCHAR WakeTimer;                         // offset: 0x89 ordinal: 0x7
  struct _LIST_ENTRY WakeTimerListEntry;   // offset: 0x8c ordinal: 0x8
} _ETIMER;

// 0xd0 bytes (sizeof)
typedef struct _POP_THERMAL_ZONE {
  struct _LIST_ENTRY Link;                  // offset: 0x0 ordinal: 0x0
  UCHAR State;                              // offset: 0x8 ordinal: 0x1
  UCHAR Flags;                              // offset: 0x9 ordinal: 0x2
  UCHAR Mode;                               // offset: 0xa ordinal: 0x3
  UCHAR PendingMode;                        // offset: 0xb ordinal: 0x4
  UCHAR ActivePoint;                        // offset: 0xc ordinal: 0x5
  UCHAR PendingActivePoint;                 // offset: 0xd ordinal: 0x6
  LONG Throttle;                            // offset: 0x10 ordinal: 0x7
  ULONGLONG LastTime;                       // offset: 0x18 ordinal: 0x8
  ULONG SampleRate;                         // offset: 0x20 ordinal: 0x9
  ULONG LastTemp;                           // offset: 0x24 ordinal: 0xa
  struct _KTIMER PassiveTimer;              // offset: 0x28 ordinal: 0xb
  struct _KDPC PassiveDpc;                  // offset: 0x50 ordinal: 0xc
  struct _POP_ACTION_TRIGGER OverThrottled; // offset: 0x70 ordinal: 0xd
  struct _IRP *Irp;                         // offset: 0x7c ordinal: 0xe
  struct _THERMAL_INFORMATION Info;         // offset: 0x80 ordinal: 0xf
} _POP_THERMAL_ZONE;

// 0x120 bytes (sizeof)
typedef struct _PROCESSOR_POWER_STATE {
  VOID(*IdleFunction)
  (struct _PROCESSOR_POWER_STATE *);         // offset: 0x0 ordinal: 0x0
  ULONG Idle0KernelTimeLimit;                // offset: 0x4 ordinal: 0x1
  ULONG Idle0LastTime;                       // offset: 0x8 ordinal: 0x2
  VOID *IdleHandlers;                        // offset: 0xc ordinal: 0x3
  VOID *IdleState;                           // offset: 0x10 ordinal: 0x4
  ULONG IdleHandlersCount;                   // offset: 0x14 ordinal: 0x5
  ULONGLONG LastCheck;                       // offset: 0x18 ordinal: 0x6
  struct PROCESSOR_IDLE_TIMES IdleTimes;     // offset: 0x20 ordinal: 0x7
  ULONG IdleTime1;                           // offset: 0x40 ordinal: 0x8
  ULONG PromotionCheck;                      // offset: 0x44 ordinal: 0x9
  ULONG IdleTime2;                           // offset: 0x48 ordinal: 0xa
  UCHAR CurrentThrottle;                     // offset: 0x4c ordinal: 0xb
  UCHAR ThermalThrottleLimit;                // offset: 0x4d ordinal: 0xc
  UCHAR CurrentThrottleIndex;                // offset: 0x4e ordinal: 0xd
  UCHAR ThermalThrottleIndex;                // offset: 0x4f ordinal: 0xe
  ULONG LastKernelUserTime;                  // offset: 0x50 ordinal: 0xf
  ULONG LastIdleThreadKernelTime;            // offset: 0x54 ordinal: 0x10
  ULONG PackageIdleStartTime;                // offset: 0x58 ordinal: 0x11
  ULONG PackageIdleTime;                     // offset: 0x5c ordinal: 0x12
  ULONG DebugCount;                          // offset: 0x60 ordinal: 0x13
  ULONG LastSysTime;                         // offset: 0x64 ordinal: 0x14
  ULONGLONG TotalIdleStateTime[3];           // offset: 0x68 ordinal: 0x15
  ULONG TotalIdleTransitions[3];             // offset: 0x80 ordinal: 0x16
  ULONGLONG PreviousC3StateTime;             // offset: 0x90 ordinal: 0x17
  UCHAR KneeThrottleIndex;                   // offset: 0x98 ordinal: 0x18
  UCHAR ThrottleLimitIndex;                  // offset: 0x99 ordinal: 0x19
  UCHAR PerfStatesCount;                     // offset: 0x9a ordinal: 0x1a
  UCHAR ProcessorMinThrottle;                // offset: 0x9b ordinal: 0x1b
  UCHAR ProcessorMaxThrottle;                // offset: 0x9c ordinal: 0x1c
  UCHAR EnableIdleAccounting;                // offset: 0x9d ordinal: 0x1d
  UCHAR LastC3Percentage;                    // offset: 0x9e ordinal: 0x1e
  UCHAR LastAdjustedBusyPercentage;          // offset: 0x9f ordinal: 0x1f
  ULONG PromotionCount;                      // offset: 0xa0 ordinal: 0x20
  ULONG DemotionCount;                       // offset: 0xa4 ordinal: 0x21
  ULONG ErrorCount;                          // offset: 0xa8 ordinal: 0x22
  ULONG RetryCount;                          // offset: 0xac ordinal: 0x23
  ULONG Flags;                               // offset: 0xb0 ordinal: 0x24
  union _LARGE_INTEGER PerfCounterFrequency; // offset: 0xb8 ordinal: 0x25
  ULONG PerfTickCount;                       // offset: 0xc0 ordinal: 0x26
  struct _KTIMER PerfTimer;                  // offset: 0xc8 ordinal: 0x27
  struct _KDPC PerfDpc;                      // offset: 0xf0 ordinal: 0x28
  struct PROCESSOR_PERF_STATE *PerfStates;   // offset: 0x110 ordinal: 0x29
  LONG (*PerfSetThrottle)(UCHAR);            // offset: 0x114 ordinal: 0x2a
  ULONG LastC3KernelUserTime;                // offset: 0x118 ordinal: 0x2b
  ULONG LastPackageIdleTime;                 // offset: 0x11c ordinal: 0x2c
} _PROCESSOR_POWER_STATE;

typedef VOID (*__anon_129)(struct _PROCESSOR_POWER_STATE *);

// 0x18 bytes (sizeof)
typedef struct _KWAIT_BLOCK {
  struct _LIST_ENTRY WaitListEntry;   // offset: 0x0 ordinal: 0x0
  struct _KTHREAD *Thread;            // offset: 0x8 ordinal: 0x1
  VOID *Object;                       // offset: 0xc ordinal: 0x2
  struct _KWAIT_BLOCK *NextWaitBlock; // offset: 0x10 ordinal: 0x3
  USHORT WaitKey;                     // offset: 0x14 ordinal: 0x4
  USHORT WaitType;                    // offset: 0x16 ordinal: 0x5
} _KWAIT_BLOCK;

// 0x1c0 bytes (sizeof)
typedef struct _KTHREAD {
  struct _DISPATCHER_HEADER Header;   // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY MutantListHead;  // offset: 0x10 ordinal: 0x1
  VOID *InitialStack;                 // offset: 0x18 ordinal: 0x2
  VOID *StackLimit;                   // offset: 0x1c ordinal: 0x3
  VOID *Teb;                          // offset: 0x20 ordinal: 0x4
  VOID *TlsArray;                     // offset: 0x24 ordinal: 0x5
  VOID *KernelStack;                  // offset: 0x28 ordinal: 0x6
  UCHAR DebugActive;                  // offset: 0x2c ordinal: 0x7
  UCHAR State;                        // offset: 0x2d ordinal: 0x8
  UCHAR Alerted[2];                   // offset: 0x2e ordinal: 0x9
  UCHAR Iopl;                         // offset: 0x30 ordinal: 0xa
  UCHAR NpxState;                     // offset: 0x31 ordinal: 0xb
  CHAR Saturation;                    // offset: 0x32 ordinal: 0xc
  CHAR Priority;                      // offset: 0x33 ordinal: 0xd
  struct _KAPC_STATE ApcState;        // offset: 0x34 ordinal: 0xe
  ULONG ContextSwitches;              // offset: 0x4c ordinal: 0xf
  UCHAR IdleSwapBlock;                // offset: 0x50 ordinal: 0x10
  UCHAR Spare0[3];                    // offset: 0x51 ordinal: 0x11
  LONG WaitStatus;                    // offset: 0x54 ordinal: 0x12
  UCHAR WaitIrql;                     // offset: 0x58 ordinal: 0x13
  CHAR WaitMode;                      // offset: 0x59 ordinal: 0x14
  UCHAR WaitNext;                     // offset: 0x5a ordinal: 0x15
  UCHAR WaitReason;                   // offset: 0x5b ordinal: 0x16
  struct _KWAIT_BLOCK *WaitBlockList; // offset: 0x5c ordinal: 0x17
  union {
    struct _LIST_ENTRY WaitListEntry;        // offset: 0x60 ordinal: 0x18
    struct _SINGLE_LIST_ENTRY SwapListEntry; // offset: 0x60 ordinal: 0x19
  };
  ULONG WaitTime;                         // offset: 0x68 ordinal: 0x1a
  CHAR BasePriority;                      // offset: 0x6c ordinal: 0x1b
  UCHAR DecrementCount;                   // offset: 0x6d ordinal: 0x1c
  CHAR PriorityDecrement;                 // offset: 0x6e ordinal: 0x1d
  CHAR Quantum;                           // offset: 0x6f ordinal: 0x1e
  struct _KWAIT_BLOCK WaitBlock[4];       // offset: 0x70 ordinal: 0x1f
  VOID *LegoData;                         // offset: 0xd0 ordinal: 0x20
  ULONG KernelApcDisable;                 // offset: 0xd4 ordinal: 0x21
  ULONG UserAffinity;                     // offset: 0xd8 ordinal: 0x22
  UCHAR SystemAffinityActive;             // offset: 0xdc ordinal: 0x23
  UCHAR PowerState;                       // offset: 0xdd ordinal: 0x24
  UCHAR NpxIrql;                          // offset: 0xde ordinal: 0x25
  UCHAR InitialNode;                      // offset: 0xdf ordinal: 0x26
  VOID *ServiceTable;                     // offset: 0xe0 ordinal: 0x27
  struct _KQUEUE *Queue;                  // offset: 0xe4 ordinal: 0x28
  ULONG ApcQueueLock;                     // offset: 0xe8 ordinal: 0x29
  struct _KTIMER Timer;                   // offset: 0xf0 ordinal: 0x2a
  struct _LIST_ENTRY QueueListEntry;      // offset: 0x118 ordinal: 0x2b
  ULONG SoftAffinity;                     // offset: 0x120 ordinal: 0x2c
  ULONG Affinity;                         // offset: 0x124 ordinal: 0x2d
  UCHAR Preempted;                        // offset: 0x128 ordinal: 0x2e
  UCHAR ProcessReadyQueue;                // offset: 0x129 ordinal: 0x2f
  UCHAR KernelStackResident;              // offset: 0x12a ordinal: 0x30
  UCHAR NextProcessor;                    // offset: 0x12b ordinal: 0x31
  VOID *CallbackStack;                    // offset: 0x12c ordinal: 0x32
  VOID *Win32Thread;                      // offset: 0x130 ordinal: 0x33
  struct _KTRAP_FRAME *TrapFrame;         // offset: 0x134 ordinal: 0x34
  struct _KAPC_STATE *ApcStatePointer[2]; // offset: 0x138 ordinal: 0x35
  CHAR PreviousMode;                      // offset: 0x140 ordinal: 0x36
  UCHAR EnableStackSwap;                  // offset: 0x141 ordinal: 0x37
  UCHAR LargeStack;                       // offset: 0x142 ordinal: 0x38
  UCHAR ResourceIndex;                    // offset: 0x143 ordinal: 0x39
  ULONG KernelTime;                       // offset: 0x144 ordinal: 0x3a
  ULONG UserTime;                         // offset: 0x148 ordinal: 0x3b
  struct _KAPC_STATE SavedApcState;       // offset: 0x14c ordinal: 0x3c
  UCHAR Alertable;                        // offset: 0x164 ordinal: 0x3d
  UCHAR ApcStateIndex;                    // offset: 0x165 ordinal: 0x3e
  UCHAR ApcQueueable;                     // offset: 0x166 ordinal: 0x3f
  UCHAR AutoAlignment;                    // offset: 0x167 ordinal: 0x40
  VOID *StackBase;                        // offset: 0x168 ordinal: 0x41
  struct _KAPC SuspendApc;                // offset: 0x16c ordinal: 0x42
  struct _KSEMAPHORE SuspendSemaphore;    // offset: 0x19c ordinal: 0x43
  struct _LIST_ENTRY ThreadListEntry;     // offset: 0x1b0 ordinal: 0x44
  CHAR FreezeCount;                       // offset: 0x1b8 ordinal: 0x45
  CHAR SuspendCount;                      // offset: 0x1b9 ordinal: 0x46
  UCHAR IdealProcessor;                   // offset: 0x1ba ordinal: 0x47
  UCHAR DisableBoost;                     // offset: 0x1bb ordinal: 0x48
} _KTHREAD;

// 0x620 bytes (sizeof)
typedef struct _POP_DEVICE_SYS_STATE {
  UCHAR IrpMinor;                                 // offset: 0x0 ordinal: 0x0
  enum _SYSTEM_POWER_STATE SystemState;           // offset: 0x4 ordinal: 0x1
  struct _KEVENT Event;                           // offset: 0x8 ordinal: 0x2
  ULONG SpinLock;                                 // offset: 0x18 ordinal: 0x3
  struct _KTHREAD *Thread;                        // offset: 0x1c ordinal: 0x4
  UCHAR GetNewDeviceList;                         // offset: 0x20 ordinal: 0x5
  struct _PO_DEVICE_NOTIFY_ORDER Order;           // offset: 0x24 ordinal: 0x6
  LONG Status;                                    // offset: 0x26c ordinal: 0x7
  struct _DEVICE_OBJECT *FailedDevice;            // offset: 0x270 ordinal: 0x8
  UCHAR Waking;                                   // offset: 0x274 ordinal: 0x9
  UCHAR Cancelled;                                // offset: 0x275 ordinal: 0xa
  UCHAR IgnoreErrors;                             // offset: 0x276 ordinal: 0xb
  UCHAR IgnoreNotImplemented;                     // offset: 0x277 ordinal: 0xc
  UCHAR WaitAny;                                  // offset: 0x278 ordinal: 0xd
  UCHAR WaitAll;                                  // offset: 0x279 ordinal: 0xe
  struct _LIST_ENTRY PresentIrpQueue;             // offset: 0x27c ordinal: 0xf
  struct _POP_DEVICE_POWER_IRP Head;              // offset: 0x284 ordinal: 0x10
  struct _POP_DEVICE_POWER_IRP PowerIrpState[20]; // offset: 0x2b0 ordinal: 0x11
} _POP_DEVICE_SYS_STATE;

// 0x40 bytes (sizeof)
typedef struct _POP_POWER_ACTION {
  UCHAR Updates;                                   // offset: 0x0 ordinal: 0x0
  UCHAR State;                                     // offset: 0x1 ordinal: 0x1
  UCHAR Shutdown;                                  // offset: 0x2 ordinal: 0x2
  enum POWER_ACTION Action;                        // offset: 0x4 ordinal: 0x3
  enum _SYSTEM_POWER_STATE LightestState;          // offset: 0x8 ordinal: 0x4
  ULONG Flags;                                     // offset: 0xc ordinal: 0x5
  LONG Status;                                     // offset: 0x10 ordinal: 0x6
  UCHAR IrpMinor;                                  // offset: 0x14 ordinal: 0x7
  enum _SYSTEM_POWER_STATE SystemState;            // offset: 0x18 ordinal: 0x8
  enum _SYSTEM_POWER_STATE NextSystemState;        // offset: 0x1c ordinal: 0x9
  struct _POP_SHUTDOWN_BUG_CHECK *ShutdownBugCode; // offset: 0x20 ordinal: 0xa
  struct _POP_DEVICE_SYS_STATE *DevState;          // offset: 0x24 ordinal: 0xb
  struct _POP_HIBER_CONTEXT *HiberContext;         // offset: 0x28 ordinal: 0xc
  enum _SYSTEM_POWER_STATE LastWakeState;          // offset: 0x2c ordinal: 0xd
  ULONGLONG WakeTime;                              // offset: 0x30 ordinal: 0xe
  ULONGLONG SleepTime;                             // offset: 0x38 ordinal: 0xf
} _POP_POWER_ACTION;

// 0x20 bytes (sizeof)
typedef struct _KMUTANT {
  struct _DISPATCHER_HEADER Header;   // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY MutantListEntry; // offset: 0x10 ordinal: 0x1
  struct _KTHREAD *OwnerThread;       // offset: 0x18 ordinal: 0x2
  UCHAR Abandoned;                    // offset: 0x1c ordinal: 0x3
  UCHAR ApcDisable;                   // offset: 0x1d ordinal: 0x4
} _KMUTANT;

// 0x1c8 bytes (sizeof)
typedef struct _WMI_LOGGER_CONTEXT {
  ULONG BufferSpinLock;                  // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER StartTime;        // offset: 0x8 ordinal: 0x1
  VOID *LogFileHandle;                   // offset: 0x10 ordinal: 0x2
  struct _KSEMAPHORE LoggerSemaphore;    // offset: 0x14 ordinal: 0x3
  struct _ETHREAD *LoggerThread;         // offset: 0x28 ordinal: 0x4
  struct _KEVENT LoggerEvent;            // offset: 0x2c ordinal: 0x5
  struct _KEVENT FlushEvent;             // offset: 0x3c ordinal: 0x6
  LONG LoggerStatus;                     // offset: 0x4c ordinal: 0x7
  ULONG LoggerId;                        // offset: 0x50 ordinal: 0x8
  LONG BuffersAvailable;                 // offset: 0x54 ordinal: 0x9
  ULONG UsePerfClock;                    // offset: 0x58 ordinal: 0xa
  ULONG WriteFailureLimit;               // offset: 0x5c ordinal: 0xb
  ULONG BuffersDirty;                    // offset: 0x60 ordinal: 0xc
  ULONG BuffersInUse;                    // offset: 0x64 ordinal: 0xd
  ULONG SwitchingInProgress;             // offset: 0x68 ordinal: 0xe
  union _SLIST_HEADER FreeList;          // offset: 0x70 ordinal: 0xf
  union _SLIST_HEADER FlushList;         // offset: 0x78 ordinal: 0x10
  union _SLIST_HEADER GlobalList;        // offset: 0x80 ordinal: 0x11
  union _SLIST_HEADER *ProcessorBuffers; // offset: 0x88 ordinal: 0x12
  struct _UNICODE_STRING LoggerName;     // offset: 0x8c ordinal: 0x13
  struct _UNICODE_STRING LogFileName;    // offset: 0x94 ordinal: 0x14
  struct _UNICODE_STRING LogFilePattern; // offset: 0x9c ordinal: 0x15
  struct _UNICODE_STRING NewLogFileName; // offset: 0xa4 ordinal: 0x16
  UCHAR *EndPageMarker;                  // offset: 0xac ordinal: 0x17
  LONG CollectionOn;                     // offset: 0xb0 ordinal: 0x18
  ULONG KernelTraceOn;                   // offset: 0xb4 ordinal: 0x19
  LONG PerfLogInTransition;              // offset: 0xb8 ordinal: 0x1a
  ULONG RequestFlag;                     // offset: 0xbc ordinal: 0x1b
  ULONG EnableFlags;                     // offset: 0xc0 ordinal: 0x1c
  ULONG MaximumFileSize;                 // offset: 0xc4 ordinal: 0x1d
  union {
    ULONG LoggerMode;                        // offset: 0xc8 ordinal: 0x1e
    struct _WMI_LOGGER_MODE LoggerModeFlags; // offset: 0xc8 ordinal: 0x1f
  };
  ULONG LastFlushedBuffer;                // offset: 0xcc ordinal: 0x20
  ULONG RefCount;                         // offset: 0xd0 ordinal: 0x21
  ULONG FlushTimer;                       // offset: 0xd4 ordinal: 0x22
  union _LARGE_INTEGER FirstBufferOffset; // offset: 0xd8 ordinal: 0x23
  union _LARGE_INTEGER ByteOffset;        // offset: 0xe0 ordinal: 0x24
  union _LARGE_INTEGER BufferAgeLimit;    // offset: 0xe8 ordinal: 0x25
  ULONG MaximumBuffers;                   // offset: 0xf0 ordinal: 0x26
  ULONG MinimumBuffers;                   // offset: 0xf4 ordinal: 0x27
  ULONG EventsLost;                       // offset: 0xf8 ordinal: 0x28
  ULONG BuffersWritten;                   // offset: 0xfc ordinal: 0x29
  ULONG LogBuffersLost;                   // offset: 0x100 ordinal: 0x2a
  ULONG RealTimeBuffersLost;              // offset: 0x104 ordinal: 0x2b
  ULONG BufferSize;                       // offset: 0x108 ordinal: 0x2c
  LONG NumberOfBuffers;                   // offset: 0x10c ordinal: 0x2d
  LONG *SequencePtr;                      // offset: 0x110 ordinal: 0x2e
  struct _GUID InstanceGuid;              // offset: 0x114 ordinal: 0x2f
  VOID *LoggerHeader;                     // offset: 0x124 ordinal: 0x30
  LONGLONG (*GetCpuClock)();              // offset: 0x128 ordinal: 0x31
  struct _SECURITY_CLIENT_CONTEXT
      ClientSecurityContext; // offset: 0x12c ordinal: 0x32
  VOID *LoggerExtension;     // offset: 0x168 ordinal: 0x33
  LONG ReleaseQueue;         // offset: 0x16c ordinal: 0x34
  struct _TRACE_ENABLE_FLAG_EXTENSION
      EnableFlagExtension;     // offset: 0x170 ordinal: 0x35
  ULONG LocalSequence;         // offset: 0x174 ordinal: 0x36
  ULONG MaximumIrql;           // offset: 0x178 ordinal: 0x37
  ULONG *EnableFlagArray;      // offset: 0x17c ordinal: 0x38
  struct _KMUTANT LoggerMutex; // offset: 0x180 ordinal: 0x39
  LONG MutexCount;             // offset: 0x1a0 ordinal: 0x3a
  ULONG FileCounter;           // offset: 0x1a4 ordinal: 0x3b
  VOID(*BufferCallback)
  (struct _WMI_BUFFER_HEADER *, VOID *);    // offset: 0x1a8 ordinal: 0x3c
  VOID *CallbackContext;                    // offset: 0x1ac ordinal: 0x3d
  enum _POOL_TYPE PoolType;                 // offset: 0x1b0 ordinal: 0x3e
  union _LARGE_INTEGER ReferenceSystemTime; // offset: 0x1b8 ordinal: 0x3f
  union _LARGE_INTEGER ReferenceTimeStamp;  // offset: 0x1c0 ordinal: 0x40
} _WMI_LOGGER_CONTEXT;

// 0x1c bytes (sizeof)
typedef struct _VI_DEADLOCK_THREAD {
  struct _KTHREAD *Thread;                    // offset: 0x0 ordinal: 0x0
  struct _VI_DEADLOCK_NODE *CurrentSpinNode;  // offset: 0x4 ordinal: 0x1
  struct _VI_DEADLOCK_NODE *CurrentOtherNode; // offset: 0x8 ordinal: 0x2
  union {
    struct _LIST_ENTRY ListEntry;     // offset: 0xc ordinal: 0x3
    struct _LIST_ENTRY FreeListEntry; // offset: 0xc ordinal: 0x4
  };
  ULONG NodeCount;   // offset: 0x14 ordinal: 0x5
  ULONG PagingCount; // offset: 0x18 ordinal: 0x6
} _VI_DEADLOCK_THREAD;

// 0x80 bytes (sizeof)
typedef struct _VI_DEADLOCK_RESOURCE {
  enum _VI_DEADLOCK_RESOURCE_TYPE Type;    // offset: 0x0 ordinal: 0x0
  ULONG NodeCount : 16;                    // offset: 0x4 ordinal: 0x1
  ULONG RecursionCount : 16;               // offset: 0x4 ordinal: 0x2
  VOID *ResourceAddress;                   // offset: 0x8 ordinal: 0x3
  struct _VI_DEADLOCK_THREAD *ThreadOwner; // offset: 0xc ordinal: 0x4
  struct _LIST_ENTRY ResourceList;         // offset: 0x10 ordinal: 0x5
  union {
    struct _LIST_ENTRY HashChainList; // offset: 0x18 ordinal: 0x6
    struct _LIST_ENTRY FreeListEntry; // offset: 0x18 ordinal: 0x7
  };
  VOID *StackTrace[8];       // offset: 0x20 ordinal: 0x8
  VOID *LastAcquireTrace[8]; // offset: 0x40 ordinal: 0x9
  VOID *LastReleaseTrace[8]; // offset: 0x60 ordinal: 0xa
} _VI_DEADLOCK_RESOURCE;

// 0x68 bytes (sizeof)
typedef struct _VI_DEADLOCK_NODE {
  struct _VI_DEADLOCK_NODE *Parent; // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY ChildrenList;  // offset: 0x4 ordinal: 0x1
  struct _LIST_ENTRY SiblingsList;  // offset: 0xc ordinal: 0x2
  union {
    struct _LIST_ENTRY ResourceList;  // offset: 0x14 ordinal: 0x3
    struct _LIST_ENTRY FreeListEntry; // offset: 0x14 ordinal: 0x4
  };
  struct _VI_DEADLOCK_RESOURCE *Root;      // offset: 0x1c ordinal: 0x5
  struct _VI_DEADLOCK_THREAD *ThreadEntry; // offset: 0x20 ordinal: 0x6
  ULONG Active : 1;                        // offset: 0x24 ordinal: 0x7
  ULONG OnlyTryAcquireUsed : 1;            // offset: 0x24 ordinal: 0x8
  ULONG SequenceNumber : 30;               // offset: 0x24 ordinal: 0x9
  VOID *StackTrace[8];                     // offset: 0x28 ordinal: 0xa
  VOID *ParentStackTrace[8];               // offset: 0x48 ordinal: 0xb
} _VI_DEADLOCK_NODE;

// 0x20 bytes (sizeof)
typedef struct _FAST_MUTEX {
  LONG Count;             // offset: 0x0 ordinal: 0x0
  struct _KTHREAD *Owner; // offset: 0x4 ordinal: 0x1
  ULONG Contention;       // offset: 0x8 ordinal: 0x2
  struct _KEVENT Event;   // offset: 0xc ordinal: 0x3
  ULONG OldIrql;          // offset: 0x1c ordinal: 0x4
} _FAST_MUTEX;

// 0x4c bytes (sizeof)
typedef struct _PNP_DEVICE_EVENT_LIST {
  LONG Status;                     // offset: 0x0 ordinal: 0x0
  struct _KMUTANT EventQueueMutex; // offset: 0x4 ordinal: 0x1
  struct _FAST_MUTEX Lock;         // offset: 0x24 ordinal: 0x2
  struct _LIST_ENTRY List;         // offset: 0x44 ordinal: 0x3
} _PNP_DEVICE_EVENT_LIST;

// 0x3c bytes (sizeof)
typedef struct _MMSESSION {
  struct _FAST_MUTEX SystemSpaceViewLock;         // offset: 0x0 ordinal: 0x0
  struct _FAST_MUTEX *SystemSpaceViewLockPointer; // offset: 0x20 ordinal: 0x1
  CHAR *SystemSpaceViewStart;                     // offset: 0x24 ordinal: 0x2
  struct _MMVIEW *SystemSpaceViewTable;           // offset: 0x28 ordinal: 0x3
  ULONG SystemSpaceHashSize;                      // offset: 0x2c ordinal: 0x4
  ULONG SystemSpaceHashEntries;                   // offset: 0x30 ordinal: 0x5
  ULONG SystemSpaceHashKey;                       // offset: 0x34 ordinal: 0x6
  struct _RTL_BITMAP *SystemSpaceBitMap;          // offset: 0x38 ordinal: 0x7
} _MMSESSION;

// 0x49c bytes (sizeof)
typedef struct _CMHIVE {
  struct _HHIVE Hive;                  // offset: 0x0 ordinal: 0x0
  VOID *FileHandles[3];                // offset: 0x210 ordinal: 0x1
  struct _LIST_ENTRY NotifyList;       // offset: 0x21c ordinal: 0x2
  struct _LIST_ENTRY HiveList;         // offset: 0x224 ordinal: 0x3
  struct _FAST_MUTEX *HiveLock;        // offset: 0x22c ordinal: 0x4
  struct _FAST_MUTEX *ViewLock;        // offset: 0x230 ordinal: 0x5
  struct _LIST_ENTRY LRUViewListHead;  // offset: 0x234 ordinal: 0x6
  struct _LIST_ENTRY PinViewListHead;  // offset: 0x23c ordinal: 0x7
  struct _FILE_OBJECT *FileObject;     // offset: 0x244 ordinal: 0x8
  struct _UNICODE_STRING FileFullPath; // offset: 0x248 ordinal: 0x9
  struct _UNICODE_STRING FileUserName; // offset: 0x250 ordinal: 0xa
  USHORT MappedViews;                  // offset: 0x258 ordinal: 0xb
  USHORT PinnedViews;                  // offset: 0x25a ordinal: 0xc
  ULONG UseCount;                      // offset: 0x25c ordinal: 0xd
  ULONG SecurityCount;                 // offset: 0x260 ordinal: 0xe
  ULONG SecurityCacheSize;             // offset: 0x264 ordinal: 0xf
  LONG SecurityHitHint;                // offset: 0x268 ordinal: 0x10
  struct _CM_KEY_SECURITY_CACHE_ENTRY
      *SecurityCache;                          // offset: 0x26c ordinal: 0x11
  struct _LIST_ENTRY SecurityHash[64];         // offset: 0x270 ordinal: 0x12
  struct _KEVENT *UnloadEvent;                 // offset: 0x470 ordinal: 0x13
  struct _CM_KEY_CONTROL_BLOCK *RootKcb;       // offset: 0x474 ordinal: 0x14
  UCHAR Frozen;                                // offset: 0x478 ordinal: 0x15
  struct _WORK_QUEUE_ITEM *UnloadWorkItem;     // offset: 0x47c ordinal: 0x16
  UCHAR GrowOnlyMode;                          // offset: 0x480 ordinal: 0x17
  ULONG GrowOffset;                            // offset: 0x484 ordinal: 0x18
  struct _LIST_ENTRY KcbConvertListHead;       // offset: 0x488 ordinal: 0x19
  struct _LIST_ENTRY KnodeConvertListHead;     // offset: 0x490 ordinal: 0x1a
  struct _CM_CELL_REMAP_BLOCK *CellRemapArray; // offset: 0x498 ordinal: 0x1b
} _CMHIVE;

// 0x18 bytes (sizeof)
typedef struct _HIVE_LIST_ENTRY {
  USHORT *Name;            // offset: 0x0 ordinal: 0x0
  USHORT *BaseName;        // offset: 0x4 ordinal: 0x1
  struct _CMHIVE *CmHive;  // offset: 0x8 ordinal: 0x2
  ULONG Flags;             // offset: 0xc ordinal: 0x3
  struct _CMHIVE *CmHive2; // offset: 0x10 ordinal: 0x4
  UCHAR ThreadFinished;    // offset: 0x14 ordinal: 0x5
  UCHAR ThreadStarted;     // offset: 0x15 ordinal: 0x6
  UCHAR Allocate;          // offset: 0x16 ordinal: 0x7
} _HIVE_LIST_ENTRY;

// 0x180 bytes (sizeof)
typedef struct _EJOB {
  struct _KEVENT Event;                           // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY JobLinks;                    // offset: 0x10 ordinal: 0x1
  struct _LIST_ENTRY ProcessListHead;             // offset: 0x18 ordinal: 0x2
  struct _ERESOURCE JobLock;                      // offset: 0x20 ordinal: 0x3
  union _LARGE_INTEGER TotalUserTime;             // offset: 0x58 ordinal: 0x4
  union _LARGE_INTEGER TotalKernelTime;           // offset: 0x60 ordinal: 0x5
  union _LARGE_INTEGER ThisPeriodTotalUserTime;   // offset: 0x68 ordinal: 0x6
  union _LARGE_INTEGER ThisPeriodTotalKernelTime; // offset: 0x70 ordinal: 0x7
  ULONG TotalPageFaultCount;                      // offset: 0x78 ordinal: 0x8
  ULONG TotalProcesses;                           // offset: 0x7c ordinal: 0x9
  ULONG ActiveProcesses;                          // offset: 0x80 ordinal: 0xa
  ULONG TotalTerminatedProcesses;                 // offset: 0x84 ordinal: 0xb
  union _LARGE_INTEGER PerProcessUserTimeLimit;   // offset: 0x88 ordinal: 0xc
  union _LARGE_INTEGER PerJobUserTimeLimit;       // offset: 0x90 ordinal: 0xd
  ULONG LimitFlags;                               // offset: 0x98 ordinal: 0xe
  ULONG MinimumWorkingSetSize;                    // offset: 0x9c ordinal: 0xf
  ULONG MaximumWorkingSetSize;                    // offset: 0xa0 ordinal: 0x10
  ULONG ActiveProcessLimit;                       // offset: 0xa4 ordinal: 0x11
  ULONG Affinity;                                 // offset: 0xa8 ordinal: 0x12
  UCHAR PriorityClass;                            // offset: 0xac ordinal: 0x13
  ULONG UIRestrictionsClass;                      // offset: 0xb0 ordinal: 0x14
  ULONG SecurityLimitFlags;                       // offset: 0xb4 ordinal: 0x15
  VOID *Token;                                    // offset: 0xb8 ordinal: 0x16
  struct _PS_JOB_TOKEN_FILTER *Filter;            // offset: 0xbc ordinal: 0x17
  ULONG EndOfJobTimeAction;                       // offset: 0xc0 ordinal: 0x18
  VOID *CompletionPort;                           // offset: 0xc4 ordinal: 0x19
  VOID *CompletionKey;                            // offset: 0xc8 ordinal: 0x1a
  ULONG SessionId;                                // offset: 0xcc ordinal: 0x1b
  ULONG SchedulingClass;                          // offset: 0xd0 ordinal: 0x1c
  ULONGLONG ReadOperationCount;                   // offset: 0xd8 ordinal: 0x1d
  ULONGLONG WriteOperationCount;                  // offset: 0xe0 ordinal: 0x1e
  ULONGLONG OtherOperationCount;                  // offset: 0xe8 ordinal: 0x1f
  ULONGLONG ReadTransferCount;                    // offset: 0xf0 ordinal: 0x20
  ULONGLONG WriteTransferCount;                   // offset: 0xf8 ordinal: 0x21
  ULONGLONG OtherTransferCount;                   // offset: 0x100 ordinal: 0x22
  struct _IO_COUNTERS IoInfo;                     // offset: 0x108 ordinal: 0x23
  ULONG ProcessMemoryLimit;                       // offset: 0x138 ordinal: 0x24
  ULONG JobMemoryLimit;                           // offset: 0x13c ordinal: 0x25
  ULONG PeakProcessMemoryUsed;                    // offset: 0x140 ordinal: 0x26
  ULONG PeakJobMemoryUsed;                        // offset: 0x144 ordinal: 0x27
  ULONG CurrentJobMemoryUsed;                     // offset: 0x148 ordinal: 0x28
  struct _FAST_MUTEX MemoryLimitsLock;            // offset: 0x14c ordinal: 0x29
  struct _LIST_ENTRY JobSetLinks;                 // offset: 0x16c ordinal: 0x2a
  ULONG MemberLevel;                              // offset: 0x174 ordinal: 0x2b
  ULONG JobFlags;                                 // offset: 0x178 ordinal: 0x2c
} _EJOB;

// 0x260 bytes (sizeof)
typedef struct _EPROCESS {
  struct _KPROCESS Pcb;                       // offset: 0x0 ordinal: 0x0
  struct _EX_PUSH_LOCK ProcessLock;           // offset: 0x6c ordinal: 0x1
  union _LARGE_INTEGER CreateTime;            // offset: 0x70 ordinal: 0x2
  union _LARGE_INTEGER ExitTime;              // offset: 0x78 ordinal: 0x3
  struct _EX_RUNDOWN_REF RundownProtect;      // offset: 0x80 ordinal: 0x4
  VOID *UniqueProcessId;                      // offset: 0x84 ordinal: 0x5
  struct _LIST_ENTRY ActiveProcessLinks;      // offset: 0x88 ordinal: 0x6
  ULONG QuotaUsage[3];                        // offset: 0x90 ordinal: 0x7
  ULONG QuotaPeak[3];                         // offset: 0x9c ordinal: 0x8
  ULONG CommitCharge;                         // offset: 0xa8 ordinal: 0x9
  ULONG PeakVirtualSize;                      // offset: 0xac ordinal: 0xa
  ULONG VirtualSize;                          // offset: 0xb0 ordinal: 0xb
  struct _LIST_ENTRY SessionProcessLinks;     // offset: 0xb4 ordinal: 0xc
  VOID *DebugPort;                            // offset: 0xbc ordinal: 0xd
  VOID *ExceptionPort;                        // offset: 0xc0 ordinal: 0xe
  struct _HANDLE_TABLE *ObjectTable;          // offset: 0xc4 ordinal: 0xf
  struct _EX_FAST_REF Token;                  // offset: 0xc8 ordinal: 0x10
  struct _FAST_MUTEX WorkingSetLock;          // offset: 0xcc ordinal: 0x11
  ULONG WorkingSetPage;                       // offset: 0xec ordinal: 0x12
  struct _FAST_MUTEX AddressCreationLock;     // offset: 0xf0 ordinal: 0x13
  ULONG HyperSpaceLock;                       // offset: 0x110 ordinal: 0x14
  struct _ETHREAD *ForkInProgress;            // offset: 0x114 ordinal: 0x15
  ULONG HardwareTrigger;                      // offset: 0x118 ordinal: 0x16
  VOID *VadRoot;                              // offset: 0x11c ordinal: 0x17
  VOID *VadHint;                              // offset: 0x120 ordinal: 0x18
  VOID *CloneRoot;                            // offset: 0x124 ordinal: 0x19
  ULONG NumberOfPrivatePages;                 // offset: 0x128 ordinal: 0x1a
  ULONG NumberOfLockedPages;                  // offset: 0x12c ordinal: 0x1b
  VOID *Win32Process;                         // offset: 0x130 ordinal: 0x1c
  struct _EJOB *Job;                          // offset: 0x134 ordinal: 0x1d
  VOID *SectionObject;                        // offset: 0x138 ordinal: 0x1e
  VOID *SectionBaseAddress;                   // offset: 0x13c ordinal: 0x1f
  struct _EPROCESS_QUOTA_BLOCK *QuotaBlock;   // offset: 0x140 ordinal: 0x20
  struct _PAGEFAULT_HISTORY *WorkingSetWatch; // offset: 0x144 ordinal: 0x21
  VOID *Win32WindowStation;                   // offset: 0x148 ordinal: 0x22
  VOID *InheritedFromUniqueProcessId;         // offset: 0x14c ordinal: 0x23
  VOID *LdtInformation;                       // offset: 0x150 ordinal: 0x24
  VOID *VadFreeHint;                          // offset: 0x154 ordinal: 0x25
  VOID *VdmObjects;                           // offset: 0x158 ordinal: 0x26
  VOID *DeviceMap;                            // offset: 0x15c ordinal: 0x27
  struct _LIST_ENTRY PhysicalVadList;         // offset: 0x160 ordinal: 0x28
  union {
    struct _HARDWARE_PTE PageDirectoryPte; // offset: 0x168 ordinal: 0x29
    ULONGLONG Filler;                      // offset: 0x168 ordinal: 0x2a
  };
  VOID *Session;                            // offset: 0x170 ordinal: 0x2b
  UCHAR ImageFileName[16];                  // offset: 0x174 ordinal: 0x2c
  struct _LIST_ENTRY JobLinks;              // offset: 0x184 ordinal: 0x2d
  VOID *LockedPagesList;                    // offset: 0x18c ordinal: 0x2e
  struct _LIST_ENTRY ThreadListHead;        // offset: 0x190 ordinal: 0x2f
  VOID *SecurityPort;                       // offset: 0x198 ordinal: 0x30
  VOID *PaeTop;                             // offset: 0x19c ordinal: 0x31
  ULONG ActiveThreads;                      // offset: 0x1a0 ordinal: 0x32
  ULONG GrantedAccess;                      // offset: 0x1a4 ordinal: 0x33
  ULONG DefaultHardErrorProcessing;         // offset: 0x1a8 ordinal: 0x34
  LONG LastThreadExitStatus;                // offset: 0x1ac ordinal: 0x35
  struct _PEB *Peb;                         // offset: 0x1b0 ordinal: 0x36
  struct _EX_FAST_REF PrefetchTrace;        // offset: 0x1b4 ordinal: 0x37
  union _LARGE_INTEGER ReadOperationCount;  // offset: 0x1b8 ordinal: 0x38
  union _LARGE_INTEGER WriteOperationCount; // offset: 0x1c0 ordinal: 0x39
  union _LARGE_INTEGER OtherOperationCount; // offset: 0x1c8 ordinal: 0x3a
  union _LARGE_INTEGER ReadTransferCount;   // offset: 0x1d0 ordinal: 0x3b
  union _LARGE_INTEGER WriteTransferCount;  // offset: 0x1d8 ordinal: 0x3c
  union _LARGE_INTEGER OtherTransferCount;  // offset: 0x1e0 ordinal: 0x3d
  ULONG CommitChargeLimit;                  // offset: 0x1e8 ordinal: 0x3e
  ULONG CommitChargePeak;                   // offset: 0x1ec ordinal: 0x3f
  VOID *AweInfo;                            // offset: 0x1f0 ordinal: 0x40
  struct _SE_AUDIT_PROCESS_CREATION_INFO
      SeAuditProcessCreationInfo; // offset: 0x1f4 ordinal: 0x41
  struct _MMSUPPORT Vm;           // offset: 0x1f8 ordinal: 0x42
  ULONG LastFaultCount;           // offset: 0x238 ordinal: 0x43
  ULONG ModifiedPageCount;        // offset: 0x23c ordinal: 0x44
  ULONG NumberOfVads;             // offset: 0x240 ordinal: 0x45
  ULONG JobStatus;                // offset: 0x244 ordinal: 0x46
  union {
    ULONG Flags;              // offset: 0x248 ordinal: 0x47
    ULONG CreateReported : 1; // offset: 0x248 ordinal: 0x48
  };
  ULONG NoDebugInherit : 1;          // offset: 0x248 ordinal: 0x49
  ULONG ProcessExiting : 1;          // offset: 0x248 ordinal: 0x4a
  ULONG ProcessDelete : 1;           // offset: 0x248 ordinal: 0x4b
  ULONG Wow64SplitPages : 1;         // offset: 0x248 ordinal: 0x4c
  ULONG VmDeleted : 1;               // offset: 0x248 ordinal: 0x4d
  ULONG OutswapEnabled : 1;          // offset: 0x248 ordinal: 0x4e
  ULONG Outswapped : 1;              // offset: 0x248 ordinal: 0x4f
  ULONG ForkFailed : 1;              // offset: 0x248 ordinal: 0x50
  ULONG HasPhysicalVad : 1;          // offset: 0x248 ordinal: 0x51
  ULONG AddressSpaceInitialized : 2; // offset: 0x248 ordinal: 0x52
  ULONG SetTimerResolution : 1;      // offset: 0x248 ordinal: 0x53
  ULONG BreakOnTermination : 1;      // offset: 0x248 ordinal: 0x54
  ULONG SessionCreationUnderway : 1; // offset: 0x248 ordinal: 0x55
  ULONG WriteWatch : 1;              // offset: 0x248 ordinal: 0x56
  ULONG ProcessInSession : 1;        // offset: 0x248 ordinal: 0x57
  ULONG OverrideAddressSpace : 1;    // offset: 0x248 ordinal: 0x58
  ULONG HasAddressSpace : 1;         // offset: 0x248 ordinal: 0x59
  ULONG LaunchPrefetched : 1;        // offset: 0x248 ordinal: 0x5a
  ULONG InjectInpageErrors : 1;      // offset: 0x248 ordinal: 0x5b
  ULONG VmTopDown : 1;               // offset: 0x248 ordinal: 0x5c
  ULONG Unused3 : 1;                 // offset: 0x248 ordinal: 0x5d
  ULONG Unused4 : 1;                 // offset: 0x248 ordinal: 0x5e
  ULONG VdmAllowed : 1;              // offset: 0x248 ordinal: 0x5f
  ULONG Unused : 5;                  // offset: 0x248 ordinal: 0x60
  ULONG Unused1 : 1;                 // offset: 0x248 ordinal: 0x61
  ULONG Unused2 : 1;                 // offset: 0x248 ordinal: 0x62
  LONG ExitStatus;                   // offset: 0x24c ordinal: 0x63
  USHORT NextPageColor;              // offset: 0x250 ordinal: 0x64
  UCHAR SubSystemMinorVersion;       // offset: 0x252 ordinal: 0x65
  UCHAR SubSystemMajorVersion;       // offset: 0x253 ordinal: 0x66
  USHORT SubSystemVersion;           // offset: 0x252 ordinal: 0x67
  UCHAR PriorityClass;               // offset: 0x254 ordinal: 0x68
  UCHAR WorkingSetAcquiredUnsafe;    // offset: 0x255 ordinal: 0x69
  ULONG Cookie;                      // offset: 0x258 ordinal: 0x6a
} _EPROCESS;

// 0xa4 bytes (sizeof)
typedef struct _LPCP_PORT_OBJECT {
  struct _LPCP_PORT_OBJECT *ConnectionPort;        // offset: 0x0 ordinal: 0x0
  struct _LPCP_PORT_OBJECT *ConnectedPort;         // offset: 0x4 ordinal: 0x1
  struct _LPCP_PORT_QUEUE MsgQueue;                // offset: 0x8 ordinal: 0x2
  struct _CLIENT_ID Creator;                       // offset: 0x18 ordinal: 0x3
  VOID *ClientSectionBase;                         // offset: 0x20 ordinal: 0x4
  VOID *ServerSectionBase;                         // offset: 0x24 ordinal: 0x5
  VOID *PortContext;                               // offset: 0x28 ordinal: 0x6
  struct _ETHREAD *ClientThread;                   // offset: 0x2c ordinal: 0x7
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // offset: 0x30 ordinal: 0x8
  struct _SECURITY_CLIENT_CONTEXT StaticSecurity;  // offset: 0x3c ordinal: 0x9
  struct _LIST_ENTRY LpcReplyChainHead;            // offset: 0x78 ordinal: 0xa
  struct _LIST_ENTRY LpcDataInfoChainHead;         // offset: 0x80 ordinal: 0xb
  union {
    struct _EPROCESS *ServerProcess;  // offset: 0x88 ordinal: 0xc
    struct _EPROCESS *MappingProcess; // offset: 0x88 ordinal: 0xd
  };
  USHORT MaxMessageLength;        // offset: 0x8c ordinal: 0xe
  USHORT MaxConnectionInfoLength; // offset: 0x8e ordinal: 0xf
  ULONG Flags;                    // offset: 0x90 ordinal: 0x10
  struct _KEVENT WaitEvent;       // offset: 0x94 ordinal: 0x11
} _LPCP_PORT_OBJECT;

// 0x40 bytes (sizeof)
typedef struct _SEGMENT {
  struct _CONTROL_AREA *ControlArea; // offset: 0x0 ordinal: 0x0
  ULONG TotalNumberOfPtes;           // offset: 0x4 ordinal: 0x1
  ULONG NonExtendedPtes;             // offset: 0x8 ordinal: 0x2
  ULONG WritableUserReferences;      // offset: 0xc ordinal: 0x3
  ULONGLONG SizeOfSegment;           // offset: 0x10 ordinal: 0x4
  struct _MMPTE SegmentPteTemplate;  // offset: 0x18 ordinal: 0x5
  ULONG NumberOfCommittedPages;      // offset: 0x1c ordinal: 0x6
  struct _MMEXTEND_INFO *ExtendInfo; // offset: 0x20 ordinal: 0x7
  VOID *SystemImageBase;             // offset: 0x24 ordinal: 0x8
  VOID *BasedAddress;                // offset: 0x28 ordinal: 0x9
  union {
    ULONG ImageCommitment;             // offset: 0x0 ordinal: 0x0
    struct _EPROCESS *CreatingProcess; // offset: 0x0 ordinal: 0x1
  } u1;                                // offset: 0x2c ordinal: 0xa
  union {
    struct _SECTION_IMAGE_INFORMATION
        *ImageInformation;     // offset: 0x0 ordinal: 0x0
    VOID *FirstMappedVa;       // offset: 0x0 ordinal: 0x1
  } u2;                        // offset: 0x30 ordinal: 0xb
  struct _MMPTE *PrototypePte; // offset: 0x34 ordinal: 0xc
  struct _MMPTE ThePtes[1];    // offset: 0x38 ordinal: 0xd
} _SEGMENT;

// 0x40 bytes (sizeof)
typedef struct _LARGE_CONTROL_AREA {
  struct _SEGMENT *Segment;           // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY DereferenceList; // offset: 0x4 ordinal: 0x1
  ULONG NumberOfSectionReferences;    // offset: 0xc ordinal: 0x2
  ULONG NumberOfPfnReferences;        // offset: 0x10 ordinal: 0x3
  ULONG NumberOfMappedViews;          // offset: 0x14 ordinal: 0x4
  USHORT NumberOfSubsections;         // offset: 0x18 ordinal: 0x5
  USHORT FlushInProgressCount;        // offset: 0x1a ordinal: 0x6
  ULONG NumberOfUserReferences;       // offset: 0x1c ordinal: 0x7
  union {
    ULONG LongFlags;                         // offset: 0x0 ordinal: 0x0
    struct _MMSECTION_FLAGS Flags;           // offset: 0x0 ordinal: 0x1
  } u;                                       // offset: 0x20 ordinal: 0x8
  struct _FILE_OBJECT *FilePointer;          // offset: 0x24 ordinal: 0x9
  struct _EVENT_COUNTER *WaitingForDeletion; // offset: 0x28 ordinal: 0xa
  USHORT ModifiedWriteCount;                 // offset: 0x2c ordinal: 0xb
  USHORT NumberOfSystemCacheViews;           // offset: 0x2e ordinal: 0xc
  ULONG StartingFrame;                       // offset: 0x30 ordinal: 0xd
  struct _LIST_ENTRY UserGlobalList;         // offset: 0x34 ordinal: 0xe
  ULONG SessionId;                           // offset: 0x3c ordinal: 0xf
} _LARGE_CONTROL_AREA;

// 0x30 bytes (sizeof)
typedef struct _SEGMENT_OBJECT {
  VOID *BaseAddress;                             // offset: 0x0 ordinal: 0x0
  ULONG TotalNumberOfPtes;                       // offset: 0x4 ordinal: 0x1
  union _LARGE_INTEGER SizeOfSegment;            // offset: 0x8 ordinal: 0x2
  ULONG NonExtendedPtes;                         // offset: 0x10 ordinal: 0x3
  ULONG ImageCommitment;                         // offset: 0x14 ordinal: 0x4
  struct _CONTROL_AREA *ControlArea;             // offset: 0x18 ordinal: 0x5
  struct _SUBSECTION *Subsection;                // offset: 0x1c ordinal: 0x6
  struct _LARGE_CONTROL_AREA *LargeControlArea;  // offset: 0x20 ordinal: 0x7
  struct _MMSECTION_FLAGS *MmSectionFlags;       // offset: 0x24 ordinal: 0x8
  struct _MMSUBSECTION_FLAGS *MmSubSectionFlags; // offset: 0x28 ordinal: 0x9
} _SEGMENT_OBJECT;

// 0x18 bytes (sizeof)
typedef struct _SECTION_OBJECT {
  VOID *StartingVa;                // offset: 0x0 ordinal: 0x0
  VOID *EndingVa;                  // offset: 0x4 ordinal: 0x1
  VOID *Parent;                    // offset: 0x8 ordinal: 0x2
  VOID *LeftChild;                 // offset: 0xc ordinal: 0x3
  VOID *RightChild;                // offset: 0x10 ordinal: 0x4
  struct _SEGMENT_OBJECT *Segment; // offset: 0x14 ordinal: 0x5
} _SECTION_OBJECT;

// 0x30 bytes (sizeof)
typedef struct _CONTROL_AREA {
  struct _SEGMENT *Segment;           // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY DereferenceList; // offset: 0x4 ordinal: 0x1
  ULONG NumberOfSectionReferences;    // offset: 0xc ordinal: 0x2
  ULONG NumberOfPfnReferences;        // offset: 0x10 ordinal: 0x3
  ULONG NumberOfMappedViews;          // offset: 0x14 ordinal: 0x4
  USHORT NumberOfSubsections;         // offset: 0x18 ordinal: 0x5
  USHORT FlushInProgressCount;        // offset: 0x1a ordinal: 0x6
  ULONG NumberOfUserReferences;       // offset: 0x1c ordinal: 0x7
  union {
    ULONG LongFlags;                         // offset: 0x0 ordinal: 0x0
    struct _MMSECTION_FLAGS Flags;           // offset: 0x0 ordinal: 0x1
  } u;                                       // offset: 0x20 ordinal: 0x8
  struct _FILE_OBJECT *FilePointer;          // offset: 0x24 ordinal: 0x9
  struct _EVENT_COUNTER *WaitingForDeletion; // offset: 0x28 ordinal: 0xa
  USHORT ModifiedWriteCount;                 // offset: 0x2c ordinal: 0xb
  USHORT NumberOfSystemCacheViews;           // offset: 0x2e ordinal: 0xc
} _CONTROL_AREA;

// 0x8 bytes (sizeof)
typedef struct _POOL_HEADER {
  USHORT PreviousSize : 9; // offset: 0x0 ordinal: 0x0
  USHORT PoolIndex : 7;    // offset: 0x0 ordinal: 0x1
  USHORT BlockSize : 9;    // offset: 0x2 ordinal: 0x2
  USHORT PoolType : 7;     // offset: 0x2 ordinal: 0x3
  ULONG Ulong1;            // offset: 0x0 ordinal: 0x4
  union {
    struct _EPROCESS *ProcessBilled; // offset: 0x4 ordinal: 0x5
    ULONG PoolTag;                   // offset: 0x4 ordinal: 0x6
    USHORT AllocatorBackTraceIndex;  // offset: 0x4 ordinal: 0x7
  };
  USHORT PoolTagHash; // offset: 0x6 ordinal: 0x8
} _POOL_HEADER;

// 0x28 bytes (sizeof)
typedef struct _POOL_HACKER {
  struct _POOL_HEADER Header; // offset: 0x0 ordinal: 0x0
  ULONG Contents[8];          // offset: 0x8 ordinal: 0x1
} _POOL_HACKER;

// 0x10 bytes (sizeof)
typedef struct _POOL_BLOCK_HEAD {
  struct _POOL_HEADER Header; // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY List;    // offset: 0x8 ordinal: 0x1
} _POOL_BLOCK_HEAD;

typedef UCHAR (*__anon_490)(struct _EPROCESS *, VOID *, VOID *, CHAR);

typedef VOID (*__anon_486)(struct _EPROCESS *, VOID *, ULONG, ULONG, ULONG);

typedef LONG (*__anon_485)(enum _OB_OPEN_REASON, struct _EPROCESS *, VOID *,
                           ULONG, ULONG);

// 0x4c bytes (sizeof)
typedef struct _OBJECT_TYPE_INITIALIZER {
  USHORT Length;                          // offset: 0x0 ordinal: 0x0
  UCHAR UseDefaultObject;                 // offset: 0x2 ordinal: 0x1
  UCHAR CaseInsensitive;                  // offset: 0x3 ordinal: 0x2
  ULONG InvalidAttributes;                // offset: 0x4 ordinal: 0x3
  struct _GENERIC_MAPPING GenericMapping; // offset: 0x8 ordinal: 0x4
  ULONG ValidAccessMask;                  // offset: 0x18 ordinal: 0x5
  UCHAR SecurityRequired;                 // offset: 0x1c ordinal: 0x6
  UCHAR MaintainHandleCount;              // offset: 0x1d ordinal: 0x7
  UCHAR MaintainTypeList;                 // offset: 0x1e ordinal: 0x8
  enum _POOL_TYPE PoolType;               // offset: 0x20 ordinal: 0x9
  ULONG DefaultPagedPoolCharge;           // offset: 0x24 ordinal: 0xa
  ULONG DefaultNonPagedPoolCharge;        // offset: 0x28 ordinal: 0xb
  VOID(*DumpProcedure)
  (VOID *, struct _OBJECT_DUMP_CONTROL *); // offset: 0x2c ordinal: 0xc
  LONG(*OpenProcedure)
  (enum _OB_OPEN_REASON, struct _EPROCESS *, VOID *, ULONG,
   ULONG); // offset: 0x30 ordinal: 0xd
  VOID(*CloseProcedure)
  (struct _EPROCESS *, VOID *, ULONG, ULONG,
   ULONG);                         // offset: 0x34 ordinal: 0xe
  VOID (*DeleteProcedure)(VOID *); // offset: 0x38 ordinal: 0xf
  LONG(*ParseProcedure)
  (VOID *, VOID *, struct _ACCESS_STATE *, CHAR, ULONG,
   struct _UNICODE_STRING *, struct _UNICODE_STRING *, VOID *,
   struct _SECURITY_QUALITY_OF_SERVICE *,
   VOID **); // offset: 0x3c ordinal: 0x10
  LONG(*SecurityProcedure)
  (VOID *, enum _SECURITY_OPERATION_CODE, ULONG *, VOID *, ULONG *, VOID **,
   enum _POOL_TYPE, struct _GENERIC_MAPPING *,
   CHAR); // offset: 0x40 ordinal: 0x11
  LONG(*QueryNameProcedure)
  (VOID *, UCHAR, struct _OBJECT_NAME_INFORMATION *, ULONG,
   ULONG *); // offset: 0x44 ordinal: 0x12
  UCHAR(*OkayToCloseProcedure)
  (struct _EPROCESS *, VOID *, VOID *, CHAR); // offset: 0x48 ordinal: 0x13
} _OBJECT_TYPE_INITIALIZER;

// 0x190 bytes (sizeof)
typedef struct _OBJECT_TYPE {
  struct _ERESOURCE Mutex;                  // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY TypeList;              // offset: 0x38 ordinal: 0x1
  struct _UNICODE_STRING Name;              // offset: 0x40 ordinal: 0x2
  VOID *DefaultObject;                      // offset: 0x48 ordinal: 0x3
  ULONG Index;                              // offset: 0x4c ordinal: 0x4
  ULONG TotalNumberOfObjects;               // offset: 0x50 ordinal: 0x5
  ULONG TotalNumberOfHandles;               // offset: 0x54 ordinal: 0x6
  ULONG HighWaterNumberOfObjects;           // offset: 0x58 ordinal: 0x7
  ULONG HighWaterNumberOfHandles;           // offset: 0x5c ordinal: 0x8
  struct _OBJECT_TYPE_INITIALIZER TypeInfo; // offset: 0x60 ordinal: 0x9
  ULONG Key;                                // offset: 0xac ordinal: 0xa
  struct _ERESOURCE ObjectLocks[4];         // offset: 0xb0 ordinal: 0xb
} _OBJECT_TYPE;

// 0x20 bytes (sizeof)
typedef struct _OBJECT_HEADER {
  LONG PointerCount; // offset: 0x0 ordinal: 0x0
  union {
    LONG HandleCount; // offset: 0x4 ordinal: 0x1
    VOID *NextToFree; // offset: 0x4 ordinal: 0x2
  };
  struct _OBJECT_TYPE *Type; // offset: 0x8 ordinal: 0x3
  UCHAR NameInfoOffset;      // offset: 0xc ordinal: 0x4
  UCHAR HandleInfoOffset;    // offset: 0xd ordinal: 0x5
  UCHAR QuotaInfoOffset;     // offset: 0xe ordinal: 0x6
  UCHAR Flags;               // offset: 0xf ordinal: 0x7
  union {
    struct _OBJECT_CREATE_INFORMATION
        *ObjectCreateInfo;   // offset: 0x10 ordinal: 0x8
    VOID *QuotaBlockCharged; // offset: 0x10 ordinal: 0x9
  };
  VOID *SecurityDescriptor; // offset: 0x14 ordinal: 0xa
  struct _QUAD Body;        // offset: 0x18 ordinal: 0xb
} _OBJECT_HEADER;

typedef UCHAR (*__anon_311)(struct _FILE_OBJECT *, struct _EPROCESS *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_310)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            union _LARGE_INTEGER *, struct _EPROCESS *, ULONG,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_309)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            union _LARGE_INTEGER *, struct _EPROCESS *, ULONG,
                            UCHAR, UCHAR, struct _IO_STATUS_BLOCK *,
                            struct _DEVICE_OBJECT *);

// 0x70 bytes (sizeof)
typedef struct _FAST_IO_DISPATCH {
  ULONG SizeOfFastIoDispatch; // offset: 0x0 ordinal: 0x0
  UCHAR(*FastIoCheckIfPossible)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, ULONG, UCHAR, ULONG, UCHAR,
   struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x4 ordinal: 0x1
  UCHAR(*FastIoRead)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, ULONG, UCHAR, ULONG, VOID *,
   struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x8 ordinal: 0x2
  UCHAR(*FastIoWrite)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, ULONG, UCHAR, ULONG, VOID *,
   struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0xc ordinal: 0x3
  UCHAR(*FastIoQueryBasicInfo)
  (struct _FILE_OBJECT *, UCHAR, struct _FILE_BASIC_INFORMATION *,
   struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x10 ordinal: 0x4
  UCHAR(*FastIoQueryStandardInfo)
  (struct _FILE_OBJECT *, UCHAR, struct _FILE_STANDARD_INFORMATION *,
   struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x14 ordinal: 0x5
  UCHAR(*FastIoLock)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, union _LARGE_INTEGER *,
   struct _EPROCESS *, ULONG, UCHAR, UCHAR, struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x18 ordinal: 0x6
  UCHAR(*FastIoUnlockSingle)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, union _LARGE_INTEGER *,
   struct _EPROCESS *, ULONG, struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x1c ordinal: 0x7
  UCHAR(*FastIoUnlockAll)
  (struct _FILE_OBJECT *, struct _EPROCESS *, struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x20 ordinal: 0x8
  UCHAR(*FastIoUnlockAllByKey)
  (struct _FILE_OBJECT *, VOID *, ULONG, struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x24 ordinal: 0x9
  UCHAR(*FastIoDeviceControl)
  (struct _FILE_OBJECT *, UCHAR, VOID *, ULONG, VOID *, ULONG, ULONG,
   struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x28 ordinal: 0xa
  VOID(*AcquireFileForNtCreateSection)
  (struct _FILE_OBJECT *); // offset: 0x2c ordinal: 0xb
  VOID(*ReleaseFileForNtCreateSection)
  (struct _FILE_OBJECT *); // offset: 0x30 ordinal: 0xc
  VOID(*FastIoDetachDevice)
  (struct _DEVICE_OBJECT *,
   struct _DEVICE_OBJECT *); // offset: 0x34 ordinal: 0xd
  UCHAR(*FastIoQueryNetworkOpenInfo)
  (struct _FILE_OBJECT *, UCHAR, struct _FILE_NETWORK_OPEN_INFORMATION *,
   struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x38 ordinal: 0xe
  LONG(*AcquireForModWrite)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, struct _ERESOURCE **,
   struct _DEVICE_OBJECT *); // offset: 0x3c ordinal: 0xf
  UCHAR(*MdlRead)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, ULONG, ULONG, struct _MDL **,
   struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x40 ordinal: 0x10
  UCHAR(*MdlReadComplete)
  (struct _FILE_OBJECT *, struct _MDL *,
   struct _DEVICE_OBJECT *); // offset: 0x44 ordinal: 0x11
  UCHAR(*PrepareMdlWrite)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, ULONG, ULONG, struct _MDL **,
   struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x48 ordinal: 0x12
  UCHAR(*MdlWriteComplete)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, struct _MDL *,
   struct _DEVICE_OBJECT *); // offset: 0x4c ordinal: 0x13
  UCHAR(*FastIoReadCompressed)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, ULONG, ULONG, VOID *,
   struct _MDL **, struct _IO_STATUS_BLOCK *, struct _COMPRESSED_DATA_INFO *,
   ULONG, struct _DEVICE_OBJECT *); // offset: 0x50 ordinal: 0x14
  UCHAR(*FastIoWriteCompressed)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, ULONG, ULONG, VOID *,
   struct _MDL **, struct _IO_STATUS_BLOCK *, struct _COMPRESSED_DATA_INFO *,
   ULONG, struct _DEVICE_OBJECT *); // offset: 0x54 ordinal: 0x15
  UCHAR(*MdlReadCompleteCompressed)
  (struct _FILE_OBJECT *, struct _MDL *,
   struct _DEVICE_OBJECT *); // offset: 0x58 ordinal: 0x16
  UCHAR(*MdlWriteCompleteCompressed)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, struct _MDL *,
   struct _DEVICE_OBJECT *); // offset: 0x5c ordinal: 0x17
  UCHAR(*FastIoQueryOpen)
  (struct _IRP *, struct _FILE_NETWORK_OPEN_INFORMATION *,
   struct _DEVICE_OBJECT *); // offset: 0x60 ordinal: 0x18
  LONG(*ReleaseForModWrite)
  (struct _FILE_OBJECT *, struct _ERESOURCE *,
   struct _DEVICE_OBJECT *); // offset: 0x64 ordinal: 0x19
  LONG(*AcquireForCcFlush)
  (struct _FILE_OBJECT *,
   struct _DEVICE_OBJECT *); // offset: 0x68 ordinal: 0x1a
  LONG(*ReleaseForCcFlush)
  (struct _FILE_OBJECT *,
   struct _DEVICE_OBJECT *); // offset: 0x6c ordinal: 0x1b
} _FAST_IO_DISPATCH;

// 0xa8 bytes (sizeof)
typedef struct _DRIVER_OBJECT {
  SHORT Type;                                // offset: 0x0 ordinal: 0x0
  SHORT Size;                                // offset: 0x2 ordinal: 0x1
  struct _DEVICE_OBJECT *DeviceObject;       // offset: 0x4 ordinal: 0x2
  ULONG Flags;                               // offset: 0x8 ordinal: 0x3
  VOID *DriverStart;                         // offset: 0xc ordinal: 0x4
  ULONG DriverSize;                          // offset: 0x10 ordinal: 0x5
  VOID *DriverSection;                       // offset: 0x14 ordinal: 0x6
  struct _DRIVER_EXTENSION *DriverExtension; // offset: 0x18 ordinal: 0x7
  struct _UNICODE_STRING DriverName;         // offset: 0x1c ordinal: 0x8
  struct _UNICODE_STRING *HardwareDatabase;  // offset: 0x24 ordinal: 0x9
  struct _FAST_IO_DISPATCH *FastIoDispatch;  // offset: 0x28 ordinal: 0xa
  LONG(*DriverInit)
  (struct _DRIVER_OBJECT *,
   struct _UNICODE_STRING *); // offset: 0x2c ordinal: 0xb
  VOID(*DriverStartIo)
  (struct _DEVICE_OBJECT *, struct _IRP *);      // offset: 0x30 ordinal: 0xc
  VOID (*DriverUnload)(struct _DRIVER_OBJECT *); // offset: 0x34 ordinal: 0xd
  LONG(*MajorFunction[28])
  (struct _DEVICE_OBJECT *, struct _IRP *); // offset: 0x38 ordinal: 0xe
} _DRIVER_OBJECT;

// 0x1278 bytes (sizeof)
typedef struct _MM_SESSION_SPACE {
  ULONG ReferenceCount; // offset: 0x0 ordinal: 0x0
  union {
    ULONG LongFlags;                              // offset: 0x0 ordinal: 0x0
    struct _MM_SESSION_SPACE_FLAGS Flags;         // offset: 0x0 ordinal: 0x1
  } u;                                            // offset: 0x4 ordinal: 0x1
  ULONG SessionId;                                // offset: 0x8 ordinal: 0x2
  ULONG SessionPageDirectoryIndex;                // offset: 0xc ordinal: 0x3
  struct _MM_SESSION_SPACE *GlobalVirtualAddress; // offset: 0x10 ordinal: 0x4
  struct _LIST_ENTRY ProcessList;                 // offset: 0x14 ordinal: 0x5
  ULONG NonPagedPoolBytes;                        // offset: 0x1c ordinal: 0x6
  ULONG PagedPoolBytes;                           // offset: 0x20 ordinal: 0x7
  ULONG NonPagedPoolAllocations;                  // offset: 0x24 ordinal: 0x8
  ULONG PagedPoolAllocations;                     // offset: 0x28 ordinal: 0x9
  ULONG NonPagablePages;                          // offset: 0x2c ordinal: 0xa
  ULONG CommittedPages;                           // offset: 0x30 ordinal: 0xb
  union _LARGE_INTEGER LastProcessSwappedOutTime; // offset: 0x38 ordinal: 0xc
  struct _MMPTE *PageTables;                      // offset: 0x40 ordinal: 0xd
  struct _FAST_MUTEX PagedPoolMutex;              // offset: 0x44 ordinal: 0xe
  VOID *PagedPoolStart;                           // offset: 0x64 ordinal: 0xf
  VOID *PagedPoolEnd;                             // offset: 0x68 ordinal: 0x10
  struct _MMPTE *PagedPoolBasePde;                // offset: 0x6c ordinal: 0x11
  struct _MM_PAGED_POOL_INFO PagedPoolInfo;       // offset: 0x70 ordinal: 0x12
  ULONG Color;                                    // offset: 0x94 ordinal: 0x13
  ULONG ProcessOutSwapCount;                      // offset: 0x98 ordinal: 0x14
  struct _LIST_ENTRY ImageList;                   // offset: 0x9c ordinal: 0x15
  struct _MMPTE *GlobalPteEntry;                  // offset: 0xa4 ordinal: 0x16
  ULONG CopyOnWriteCount;                         // offset: 0xa8 ordinal: 0x17
  ULONG SessionPoolAllocationFailures[4];         // offset: 0xac ordinal: 0x18
  ULONG AttachCount;                              // offset: 0xbc ordinal: 0x19
  struct _KEVENT AttachEvent;                     // offset: 0xc0 ordinal: 0x1a
  struct _EPROCESS *LastProcess;                  // offset: 0xd0 ordinal: 0x1b
  struct _MMSUPPORT Vm;                           // offset: 0xd8 ordinal: 0x1c
  struct _MMWSLE *Wsle;                           // offset: 0x118 ordinal: 0x1d
  struct _ERESOURCE WsLock;                       // offset: 0x11c ordinal: 0x1e
  struct _LIST_ENTRY WsListEntry;                 // offset: 0x154 ordinal: 0x1f
  struct _MMSESSION Session;                      // offset: 0x15c ordinal: 0x20
  struct _DRIVER_OBJECT Win32KDriverObject;       // offset: 0x198 ordinal: 0x21
  struct _ETHREAD *WorkingSetLockOwner;           // offset: 0x240 ordinal: 0x22
  struct _POOL_DESCRIPTOR PagedPool;              // offset: 0x244 ordinal: 0x23
  LONG ProcessReferenceToSession; // offset: 0x126c ordinal: 0x24
  ULONG LocaleId;                 // offset: 0x1270 ordinal: 0x25
} _MM_SESSION_SPACE;

typedef LONG (*__anon_908)(struct _BUS_HANDLER *, struct _BUS_HANDLER *,
                           struct _UNICODE_STRING *, struct _UNICODE_STRING *,
                           struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *,
                           ULONG, struct _CM_RESOURCE_LIST **);

// 0x6c bytes (sizeof)
typedef struct _BUS_HANDLER {
  ULONG Version;                          // offset: 0x0 ordinal: 0x0
  enum _INTERFACE_TYPE InterfaceType;     // offset: 0x4 ordinal: 0x1
  enum _BUS_DATA_TYPE ConfigurationType;  // offset: 0x8 ordinal: 0x2
  ULONG BusNumber;                        // offset: 0xc ordinal: 0x3
  struct _DEVICE_OBJECT *DeviceObject;    // offset: 0x10 ordinal: 0x4
  struct _BUS_HANDLER *ParentHandler;     // offset: 0x14 ordinal: 0x5
  VOID *BusData;                          // offset: 0x18 ordinal: 0x6
  ULONG DeviceControlExtensionSize;       // offset: 0x1c ordinal: 0x7
  struct _SUPPORTED_RANGES *BusAddresses; // offset: 0x20 ordinal: 0x8
  ULONG Reserved[4];                      // offset: 0x24 ordinal: 0x9
  ULONG(*GetBusData)
  (struct _BUS_HANDLER *, struct _BUS_HANDLER *, ULONG, VOID *, ULONG,
   ULONG); // offset: 0x34 ordinal: 0xa
  ULONG(*SetBusData)
  (struct _BUS_HANDLER *, struct _BUS_HANDLER *, ULONG, VOID *, ULONG,
   ULONG); // offset: 0x38 ordinal: 0xb
  LONG(*AdjustResourceList)
  (struct _BUS_HANDLER *, struct _BUS_HANDLER *,
   struct _IO_RESOURCE_REQUIREMENTS_LIST **); // offset: 0x3c ordinal: 0xc
  LONG(*AssignSlotResources)
  (struct _BUS_HANDLER *, struct _BUS_HANDLER *, struct _UNICODE_STRING *,
   struct _UNICODE_STRING *, struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *,
   ULONG, struct _CM_RESOURCE_LIST **); // offset: 0x40 ordinal: 0xd
  ULONG(*GetInterruptVector)
  (struct _BUS_HANDLER *, struct _BUS_HANDLER *, ULONG, ULONG, UCHAR *,
   ULONG *); // offset: 0x44 ordinal: 0xe
  UCHAR(*TranslateBusAddress)
  (struct _BUS_HANDLER *, struct _BUS_HANDLER *, union _LARGE_INTEGER, ULONG *,
   union _LARGE_INTEGER *); // offset: 0x48 ordinal: 0xf
  VOID *Spare1;             // offset: 0x4c ordinal: 0x10
  VOID *Spare2;             // offset: 0x50 ordinal: 0x11
  VOID *Spare3;             // offset: 0x54 ordinal: 0x12
  VOID *Spare4;             // offset: 0x58 ordinal: 0x13
  VOID *Spare5;             // offset: 0x5c ordinal: 0x14
  VOID *Spare6;             // offset: 0x60 ordinal: 0x15
  VOID *Spare7;             // offset: 0x64 ordinal: 0x16
  VOID *Spare8;             // offset: 0x68 ordinal: 0x17
} _BUS_HANDLER;

typedef LONG (*__anon_302)(struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *);

typedef VOID (*__anon_237)(struct _DRIVER_OBJECT *);

typedef LONG (*__anon_235)(struct _DRIVER_OBJECT *, struct _UNICODE_STRING *);

// 0x1c bytes (sizeof)
typedef struct _DRIVER_EXTENSION {
  struct _DRIVER_OBJECT *DriverObject; // offset: 0x0 ordinal: 0x0
  LONG(*AddDevice)
  (struct _DRIVER_OBJECT *,
   struct _DEVICE_OBJECT *);             // offset: 0x4 ordinal: 0x1
  ULONG Count;                           // offset: 0x8 ordinal: 0x2
  struct _UNICODE_STRING ServiceKeyName; // offset: 0xc ordinal: 0x3
  struct _IO_CLIENT_EXTENSION
      *ClientDriverExtension;                     // offset: 0x14 ordinal: 0x4
  struct _FS_FILTER_CALLBACKS *FsFilterCallbacks; // offset: 0x18 ordinal: 0x5
} _DRIVER_EXTENSION;

// 0xb8 bytes (sizeof)
typedef struct _DEVICE_OBJECT {
  SHORT Type;                            // offset: 0x0 ordinal: 0x0
  USHORT Size;                           // offset: 0x2 ordinal: 0x1
  LONG ReferenceCount;                   // offset: 0x4 ordinal: 0x2
  struct _DRIVER_OBJECT *DriverObject;   // offset: 0x8 ordinal: 0x3
  struct _DEVICE_OBJECT *NextDevice;     // offset: 0xc ordinal: 0x4
  struct _DEVICE_OBJECT *AttachedDevice; // offset: 0x10 ordinal: 0x5
  struct _IRP *CurrentIrp;               // offset: 0x14 ordinal: 0x6
  struct _IO_TIMER *Timer;               // offset: 0x18 ordinal: 0x7
  ULONG Flags;                           // offset: 0x1c ordinal: 0x8
  ULONG Characteristics;                 // offset: 0x20 ordinal: 0x9
  struct _VPB *Vpb;                      // offset: 0x24 ordinal: 0xa
  VOID *DeviceExtension;                 // offset: 0x28 ordinal: 0xb
  ULONG DeviceType;                      // offset: 0x2c ordinal: 0xc
  CHAR StackSize;                        // offset: 0x30 ordinal: 0xd
  union {
    struct _LIST_ENTRY ListEntry;                  // offset: 0x0 ordinal: 0x0
    struct _WAIT_CONTEXT_BLOCK Wcb;                // offset: 0x0 ordinal: 0x1
  } Queue;                                         // offset: 0x34 ordinal: 0xe
  ULONG AlignmentRequirement;                      // offset: 0x5c ordinal: 0xf
  struct _KDEVICE_QUEUE DeviceQueue;               // offset: 0x60 ordinal: 0x10
  struct _KDPC Dpc;                                // offset: 0x74 ordinal: 0x11
  ULONG ActiveThreadCount;                         // offset: 0x94 ordinal: 0x12
  VOID *SecurityDescriptor;                        // offset: 0x98 ordinal: 0x13
  struct _KEVENT DeviceLock;                       // offset: 0x9c ordinal: 0x14
  USHORT SectorSize;                               // offset: 0xac ordinal: 0x15
  USHORT Spare1;                                   // offset: 0xae ordinal: 0x16
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // offset: 0xb0 ordinal: 0x17
  VOID *Reserved;                                  // offset: 0xb4 ordinal: 0x18
} _DEVICE_OBJECT;

// 0x1c bytes (sizeof)
typedef struct _MDL {
  struct _MDL *Next;         // offset: 0x0 ordinal: 0x0
  SHORT Size;                // offset: 0x4 ordinal: 0x1
  SHORT MdlFlags;            // offset: 0x6 ordinal: 0x2
  struct _EPROCESS *Process; // offset: 0x8 ordinal: 0x3
  VOID *MappedSystemVa;      // offset: 0xc ordinal: 0x4
  VOID *StartVa;             // offset: 0x10 ordinal: 0x5
  ULONG ByteCount;           // offset: 0x14 ordinal: 0x6
  ULONG ByteOffset;          // offset: 0x18 ordinal: 0x7
} _MDL;

// 0x58 bytes (sizeof)
typedef struct _MMMOD_WRITER_MDL_ENTRY {
  struct _LIST_ENTRY Links;         // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER WriteOffset; // offset: 0x8 ordinal: 0x1
  union {
    struct _IO_STATUS_BLOCK IoStatus;            // offset: 0x0 ordinal: 0x0
    union _LARGE_INTEGER LastByte;               // offset: 0x0 ordinal: 0x1
  } u;                                           // offset: 0x10 ordinal: 0x2
  struct _IRP *Irp;                              // offset: 0x18 ordinal: 0x3
  ULONG LastPageToWrite;                         // offset: 0x1c ordinal: 0x4
  struct _MMMOD_WRITER_LISTHEAD *PagingListHead; // offset: 0x20 ordinal: 0x5
  struct _LIST_ENTRY *CurrentList;               // offset: 0x24 ordinal: 0x6
  struct _MMPAGING_FILE *PagingFile;             // offset: 0x28 ordinal: 0x7
  struct _FILE_OBJECT *File;                     // offset: 0x2c ordinal: 0x8
  struct _CONTROL_AREA *ControlArea;             // offset: 0x30 ordinal: 0x9
  struct _ERESOURCE *FileResource;               // offset: 0x34 ordinal: 0xa
  struct _MDL Mdl;                               // offset: 0x38 ordinal: 0xb
  ULONG Page[1];                                 // offset: 0x54 ordinal: 0xc
} _MMMOD_WRITER_MDL_ENTRY;

// 0x44 bytes (sizeof)
typedef struct _MMPAGING_FILE {
  ULONG Size;                               // offset: 0x0 ordinal: 0x0
  ULONG MaximumSize;                        // offset: 0x4 ordinal: 0x1
  ULONG MinimumSize;                        // offset: 0x8 ordinal: 0x2
  ULONG FreeSpace;                          // offset: 0xc ordinal: 0x3
  ULONG CurrentUsage;                       // offset: 0x10 ordinal: 0x4
  ULONG PeakUsage;                          // offset: 0x14 ordinal: 0x5
  ULONG Hint;                               // offset: 0x18 ordinal: 0x6
  ULONG HighestPage;                        // offset: 0x1c ordinal: 0x7
  struct _MMMOD_WRITER_MDL_ENTRY *Entry[2]; // offset: 0x20 ordinal: 0x8
  struct _RTL_BITMAP *Bitmap;               // offset: 0x28 ordinal: 0x9
  struct _FILE_OBJECT *File;                // offset: 0x2c ordinal: 0xa
  struct _UNICODE_STRING PageFileName;      // offset: 0x30 ordinal: 0xb
  ULONG PageFileNumber;                     // offset: 0x38 ordinal: 0xc
  UCHAR Extended;                           // offset: 0x3c ordinal: 0xd
  UCHAR HintSetToZero;                      // offset: 0x3d ordinal: 0xe
  UCHAR BootPartition;                      // offset: 0x3e ordinal: 0xf
  VOID *FileHandle;                         // offset: 0x40 ordinal: 0x10
} _MMPAGING_FILE;

// 0x44 bytes (sizeof)
typedef struct _HANDLE_TABLE {
  ULONG TableCode;                            // offset: 0x0 ordinal: 0x0
  struct _EPROCESS *QuotaProcess;             // offset: 0x4 ordinal: 0x1
  VOID *UniqueProcessId;                      // offset: 0x8 ordinal: 0x2
  struct _EX_PUSH_LOCK HandleTableLock[4];    // offset: 0xc ordinal: 0x3
  struct _LIST_ENTRY HandleTableList;         // offset: 0x1c ordinal: 0x4
  struct _EX_PUSH_LOCK HandleContentionEvent; // offset: 0x24 ordinal: 0x5
  struct _HANDLE_TRACE_DEBUG_INFO *DebugInfo; // offset: 0x28 ordinal: 0x6
  LONG ExtraInfoPages;                        // offset: 0x2c ordinal: 0x7
  ULONG FirstFree;                            // offset: 0x30 ordinal: 0x8
  ULONG LastFree;                             // offset: 0x34 ordinal: 0x9
  ULONG NextHandleNeedingPool;                // offset: 0x38 ordinal: 0xa
  LONG HandleCount;                           // offset: 0x3c ordinal: 0xb
  union {
    ULONG Flags;          // offset: 0x40 ordinal: 0xc
    UCHAR StrictFIFO : 1; // offset: 0x40 ordinal: 0xd
  };
} _HANDLE_TABLE;

// 0x258 bytes (sizeof)
typedef struct _ETHREAD {
  struct _KTHREAD Tcb; // offset: 0x0 ordinal: 0x0
  union {
    union _LARGE_INTEGER CreateTime; // offset: 0x1c0 ordinal: 0x1
    ULONG NestedFaultCount : 2;      // offset: 0x1c0 ordinal: 0x2
  };
  ULONG ApcNeeded : 1; // offset: 0x1c0 ordinal: 0x3
  union {
    union _LARGE_INTEGER ExitTime;     // offset: 0x1c8 ordinal: 0x4
    struct _LIST_ENTRY LpcReplyChain;  // offset: 0x1c8 ordinal: 0x5
    struct _LIST_ENTRY KeyedWaitChain; // offset: 0x1c8 ordinal: 0x6
  };
  union {
    LONG ExitStatus; // offset: 0x1d0 ordinal: 0x7
    VOID *OfsChain;  // offset: 0x1d0 ordinal: 0x8
  };
  struct _LIST_ENTRY PostBlockList; // offset: 0x1d4 ordinal: 0x9
  union {
    struct _TERMINATION_PORT *TerminationPort; // offset: 0x1dc ordinal: 0xa
    struct _ETHREAD *ReaperLink;               // offset: 0x1dc ordinal: 0xb
    VOID *KeyedWaitValue;                      // offset: 0x1dc ordinal: 0xc
  };
  ULONG ActiveTimerListLock;              // offset: 0x1e0 ordinal: 0xd
  struct _LIST_ENTRY ActiveTimerListHead; // offset: 0x1e4 ordinal: 0xe
  struct _CLIENT_ID Cid;                  // offset: 0x1ec ordinal: 0xf
  union {
    struct _KSEMAPHORE LpcReplySemaphore;  // offset: 0x1f4 ordinal: 0x10
    struct _KSEMAPHORE KeyedWaitSemaphore; // offset: 0x1f4 ordinal: 0x11
  };
  union {
    VOID *LpcReplyMessage;  // offset: 0x208 ordinal: 0x12
    VOID *LpcWaitingOnPort; // offset: 0x208 ordinal: 0x13
  };
  struct _PS_IMPERSONATION_INFORMATION
      *ImpersonationInfo;                // offset: 0x20c ordinal: 0x14
  struct _LIST_ENTRY IrpList;            // offset: 0x210 ordinal: 0x15
  ULONG TopLevelIrp;                     // offset: 0x218 ordinal: 0x16
  struct _DEVICE_OBJECT *DeviceToVerify; // offset: 0x21c ordinal: 0x17
  struct _EPROCESS *ThreadsProcess;      // offset: 0x220 ordinal: 0x18
  VOID *StartAddress;                    // offset: 0x224 ordinal: 0x19
  union {
    VOID *Win32StartAddress;    // offset: 0x228 ordinal: 0x1a
    ULONG LpcReceivedMessageId; // offset: 0x228 ordinal: 0x1b
  };
  struct _LIST_ENTRY ThreadListEntry;    // offset: 0x22c ordinal: 0x1c
  struct _EX_RUNDOWN_REF RundownProtect; // offset: 0x234 ordinal: 0x1d
  struct _EX_PUSH_LOCK ThreadLock;       // offset: 0x238 ordinal: 0x1e
  ULONG LpcReplyMessageId;               // offset: 0x23c ordinal: 0x1f
  ULONG ReadClusterSize;                 // offset: 0x240 ordinal: 0x20
  ULONG GrantedAccess;                   // offset: 0x244 ordinal: 0x21
  union {
    ULONG CrossThreadFlags; // offset: 0x248 ordinal: 0x22
    ULONG Terminated : 1;   // offset: 0x248 ordinal: 0x23
  };
  ULONG DeadThread : 1;              // offset: 0x248 ordinal: 0x24
  ULONG HideFromDebugger : 1;        // offset: 0x248 ordinal: 0x25
  ULONG ActiveImpersonationInfo : 1; // offset: 0x248 ordinal: 0x26
  ULONG SystemThread : 1;            // offset: 0x248 ordinal: 0x27
  ULONG HardErrorsAreDisabled : 1;   // offset: 0x248 ordinal: 0x28
  ULONG BreakOnTermination : 1;      // offset: 0x248 ordinal: 0x29
  ULONG SkipCreationMsg : 1;         // offset: 0x248 ordinal: 0x2a
  ULONG SkipTerminationMsg : 1;      // offset: 0x248 ordinal: 0x2b
  union {
    ULONG SameThreadPassiveFlags; // offset: 0x24c ordinal: 0x2c
    ULONG ActiveExWorker : 1;     // offset: 0x24c ordinal: 0x2d
  };
  ULONG ExWorkerCanWaitUser : 1; // offset: 0x24c ordinal: 0x2e
  ULONG MemoryMaker : 1;         // offset: 0x24c ordinal: 0x2f
  union {
    ULONG SameThreadApcFlags;        // offset: 0x250 ordinal: 0x30
    UCHAR LpcReceivedMsgIdValid : 1; // offset: 0x250 ordinal: 0x31
  };
  UCHAR LpcExitThreadCalled : 1;    // offset: 0x250 ordinal: 0x32
  UCHAR AddressSpaceOwner : 1;      // offset: 0x250 ordinal: 0x33
  UCHAR ForwardClusterOnly;         // offset: 0x254 ordinal: 0x34
  UCHAR DisablePageFaultClustering; // offset: 0x255 ordinal: 0x35
} _ETHREAD;

// 0x100 bytes (sizeof)
typedef struct _PAGED_LOOKASIDE_LIST {
  struct _GENERAL_LOOKASIDE L;                     // offset: 0x0 ordinal: 0x0
  struct _FAST_MUTEX Lock__ObsoleteButDoNotDelete; // offset: 0x80 ordinal: 0x1
} _PAGED_LOOKASIDE_LIST;

// 0xc50 bytes (sizeof)
typedef struct _KPRCB {
  USHORT MinorVersion;                           // offset: 0x0 ordinal: 0x0
  USHORT MajorVersion;                           // offset: 0x2 ordinal: 0x1
  struct _KTHREAD *CurrentThread;                // offset: 0x4 ordinal: 0x2
  struct _KTHREAD *NextThread;                   // offset: 0x8 ordinal: 0x3
  struct _KTHREAD *IdleThread;                   // offset: 0xc ordinal: 0x4
  CHAR Number;                                   // offset: 0x10 ordinal: 0x5
  CHAR Reserved;                                 // offset: 0x11 ordinal: 0x6
  USHORT BuildType;                              // offset: 0x12 ordinal: 0x7
  ULONG SetMember;                               // offset: 0x14 ordinal: 0x8
  CHAR CpuType;                                  // offset: 0x18 ordinal: 0x9
  CHAR CpuID;                                    // offset: 0x19 ordinal: 0xa
  USHORT CpuStep;                                // offset: 0x1a ordinal: 0xb
  struct _KPROCESSOR_STATE ProcessorState;       // offset: 0x1c ordinal: 0xc
  ULONG KernelReserved[16];                      // offset: 0x33c ordinal: 0xd
  ULONG HalReserved[16];                         // offset: 0x37c ordinal: 0xe
  UCHAR PrcbPad0[92];                            // offset: 0x3bc ordinal: 0xf
  struct _KSPIN_LOCK_QUEUE LockQueue[16];        // offset: 0x418 ordinal: 0x10
  UCHAR PrcbPad1[8];                             // offset: 0x498 ordinal: 0x11
  struct _KTHREAD *NpxThread;                    // offset: 0x4a0 ordinal: 0x12
  ULONG InterruptCount;                          // offset: 0x4a4 ordinal: 0x13
  ULONG KernelTime;                              // offset: 0x4a8 ordinal: 0x14
  ULONG UserTime;                                // offset: 0x4ac ordinal: 0x15
  ULONG DpcTime;                                 // offset: 0x4b0 ordinal: 0x16
  ULONG DebugDpcTime;                            // offset: 0x4b4 ordinal: 0x17
  ULONG InterruptTime;                           // offset: 0x4b8 ordinal: 0x18
  ULONG AdjustDpcThreshold;                      // offset: 0x4bc ordinal: 0x19
  ULONG PageColor;                               // offset: 0x4c0 ordinal: 0x1a
  ULONG SkipTick;                                // offset: 0x4c4 ordinal: 0x1b
  UCHAR MultiThreadSetBusy;                      // offset: 0x4c8 ordinal: 0x1c
  UCHAR Spare2[3];                               // offset: 0x4c9 ordinal: 0x1d
  struct _KNODE *ParentNode;                     // offset: 0x4cc ordinal: 0x1e
  ULONG MultiThreadProcessorSet;                 // offset: 0x4d0 ordinal: 0x1f
  struct _KPRCB *MultiThreadSetMaster;           // offset: 0x4d4 ordinal: 0x20
  ULONG ThreadStartCount[2];                     // offset: 0x4d8 ordinal: 0x21
  ULONG CcFastReadNoWait;                        // offset: 0x4e0 ordinal: 0x22
  ULONG CcFastReadWait;                          // offset: 0x4e4 ordinal: 0x23
  ULONG CcFastReadNotPossible;                   // offset: 0x4e8 ordinal: 0x24
  ULONG CcCopyReadNoWait;                        // offset: 0x4ec ordinal: 0x25
  ULONG CcCopyReadWait;                          // offset: 0x4f0 ordinal: 0x26
  ULONG CcCopyReadNoWaitMiss;                    // offset: 0x4f4 ordinal: 0x27
  ULONG KeAlignmentFixupCount;                   // offset: 0x4f8 ordinal: 0x28
  ULONG KeContextSwitches;                       // offset: 0x4fc ordinal: 0x29
  ULONG KeDcacheFlushCount;                      // offset: 0x500 ordinal: 0x2a
  ULONG KeExceptionDispatchCount;                // offset: 0x504 ordinal: 0x2b
  ULONG KeFirstLevelTbFills;                     // offset: 0x508 ordinal: 0x2c
  ULONG KeFloatingEmulationCount;                // offset: 0x50c ordinal: 0x2d
  ULONG KeIcacheFlushCount;                      // offset: 0x510 ordinal: 0x2e
  ULONG KeSecondLevelTbFills;                    // offset: 0x514 ordinal: 0x2f
  ULONG KeSystemCalls;                           // offset: 0x518 ordinal: 0x30
  ULONG SpareCounter0[1];                        // offset: 0x51c ordinal: 0x31
  struct _PP_LOOKASIDE_LIST PPLookasideList[16]; // offset: 0x520 ordinal: 0x32
  struct _PP_LOOKASIDE_LIST
      PPNPagedLookasideList[32]; // offset: 0x5a0 ordinal: 0x33
  struct _PP_LOOKASIDE_LIST
      PPPagedLookasideList[32]; // offset: 0x6a0 ordinal: 0x34
  ULONG PacketBarrier;          // offset: 0x7a0 ordinal: 0x35
  ULONG ReverseStall;           // offset: 0x7a4 ordinal: 0x36
  VOID *IpiFrame;               // offset: 0x7a8 ordinal: 0x37
  UCHAR PrcbPad2[52];           // offset: 0x7ac ordinal: 0x38
  VOID *CurrentPacket[3];       // offset: 0x7e0 ordinal: 0x39
  ULONG TargetSet;              // offset: 0x7ec ordinal: 0x3a
  VOID(*WorkerRoutine)
  (VOID *, VOID *, VOID *, VOID *);            // offset: 0x7f0 ordinal: 0x3b
  ULONG IpiFrozen;                             // offset: 0x7f4 ordinal: 0x3c
  UCHAR PrcbPad3[40];                          // offset: 0x7f8 ordinal: 0x3d
  ULONG RequestSummary;                        // offset: 0x820 ordinal: 0x3e
  struct _KPRCB *SignalDone;                   // offset: 0x824 ordinal: 0x3f
  UCHAR PrcbPad4[56];                          // offset: 0x828 ordinal: 0x40
  struct _LIST_ENTRY DpcListHead;              // offset: 0x860 ordinal: 0x41
  VOID *DpcStack;                              // offset: 0x868 ordinal: 0x42
  ULONG DpcCount;                              // offset: 0x86c ordinal: 0x43
  ULONG DpcQueueDepth;                         // offset: 0x870 ordinal: 0x44
  ULONG DpcRoutineActive;                      // offset: 0x874 ordinal: 0x45
  ULONG DpcInterruptRequested;                 // offset: 0x878 ordinal: 0x46
  ULONG DpcLastCount;                          // offset: 0x87c ordinal: 0x47
  ULONG DpcRequestRate;                        // offset: 0x880 ordinal: 0x48
  ULONG MaximumDpcQueueDepth;                  // offset: 0x884 ordinal: 0x49
  ULONG MinimumDpcRate;                        // offset: 0x888 ordinal: 0x4a
  ULONG QuantumEnd;                            // offset: 0x88c ordinal: 0x4b
  UCHAR PrcbPad5[16];                          // offset: 0x890 ordinal: 0x4c
  ULONG DpcLock;                               // offset: 0x8a0 ordinal: 0x4d
  UCHAR PrcbPad6[28];                          // offset: 0x8a4 ordinal: 0x4e
  struct _KDPC CallDpc;                        // offset: 0x8c0 ordinal: 0x4f
  VOID *ChainedInterruptList;                  // offset: 0x8e0 ordinal: 0x50
  LONG LookasideIrpFloat;                      // offset: 0x8e4 ordinal: 0x51
  ULONG SpareFields0[6];                       // offset: 0x8e8 ordinal: 0x52
  UCHAR VendorString[13];                      // offset: 0x900 ordinal: 0x53
  UCHAR InitialApicId;                         // offset: 0x90d ordinal: 0x54
  UCHAR LogicalProcessorsPerPhysicalProcessor; // offset: 0x90e ordinal: 0x55
  ULONG MHz;                                   // offset: 0x910 ordinal: 0x56
  ULONG FeatureBits;                           // offset: 0x914 ordinal: 0x57
  union _LARGE_INTEGER UpdateSignature;        // offset: 0x918 ordinal: 0x58
  struct _FX_SAVE_AREA NpxSaveArea;            // offset: 0x920 ordinal: 0x59
  struct _PROCESSOR_POWER_STATE PowerState;    // offset: 0xb30 ordinal: 0x5a
} _KPRCB;

// 0xd70 bytes (sizeof)
typedef struct _KPCR {
  struct _NT_TIB NtTib;                // offset: 0x0 ordinal: 0x0
  struct _KPCR *SelfPcr;               // offset: 0x1c ordinal: 0x1
  struct _KPRCB *Prcb;                 // offset: 0x20 ordinal: 0x2
  UCHAR Irql;                          // offset: 0x24 ordinal: 0x3
  ULONG IRR;                           // offset: 0x28 ordinal: 0x4
  ULONG IrrActive;                     // offset: 0x2c ordinal: 0x5
  ULONG IDR;                           // offset: 0x30 ordinal: 0x6
  VOID *KdVersionBlock;                // offset: 0x34 ordinal: 0x7
  struct _KIDTENTRY *IDT;              // offset: 0x38 ordinal: 0x8
  struct _KGDTENTRY *GDT;              // offset: 0x3c ordinal: 0x9
  struct _KTSS *TSS;                   // offset: 0x40 ordinal: 0xa
  USHORT MajorVersion;                 // offset: 0x44 ordinal: 0xb
  USHORT MinorVersion;                 // offset: 0x46 ordinal: 0xc
  ULONG SetMember;                     // offset: 0x48 ordinal: 0xd
  ULONG StallScaleFactor;              // offset: 0x4c ordinal: 0xe
  UCHAR DebugActive;                   // offset: 0x50 ordinal: 0xf
  UCHAR Number;                        // offset: 0x51 ordinal: 0x10
  UCHAR Spare0;                        // offset: 0x52 ordinal: 0x11
  UCHAR SecondLevelCacheAssociativity; // offset: 0x53 ordinal: 0x12
  ULONG VdmAlert;                      // offset: 0x54 ordinal: 0x13
  ULONG KernelReserved[14];            // offset: 0x58 ordinal: 0x14
  ULONG SecondLevelCacheSize;          // offset: 0x90 ordinal: 0x15
  ULONG HalReserved[16];               // offset: 0x94 ordinal: 0x16
  ULONG InterruptMode;                 // offset: 0xd4 ordinal: 0x17
  UCHAR Spare1;                        // offset: 0xd8 ordinal: 0x18
  ULONG KernelReserved2[17];           // offset: 0xdc ordinal: 0x19
  struct _KPRCB PrcbData;              // offset: 0x120 ordinal: 0x1a
} _KPCR;

// 0x10 bytes (sizeof)
typedef struct LIST_ENTRY64 {
  ULONGLONG Flink; // offset: 0x0 ordinal: 0x0
  ULONGLONG Blink; // offset: 0x8 ordinal: 0x1
} LIST_ENTRY64;
