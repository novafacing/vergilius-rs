// 0x0 bytes (sizeof)
typedef struct _ADAPTER_OBJECT {
} _ADAPTER_OBJECT;

// 0x0 bytes (sizeof)
typedef struct _ACTIVATION_CONTEXT_DATA {
} _ACTIVATION_CONTEXT_DATA;

// 0x8 bytes (sizeof)
typedef union __anon_894 {
  struct _DEVICE_NODE *NextResourceDeviceNode; // offset: 0x0 ordinal: 0x0
} __anon_894;

typedef char CHAR;

// 0x0 bytes (sizeof)
typedef struct _ACTIVATION_CONTEXT {
} _ACTIVATION_CONTEXT;

typedef long long LONGLONG;

typedef unsigned long ULONG;

// 0x4 bytes (sizeof)
typedef struct _MMSUBSECTION_FLAGS {
  ULONG ReadOnly : 1;            // offset: 0x0 ordinal: 0x0
  ULONG ReadWrite : 1;           // offset: 0x0 ordinal: 0x1
  ULONG SubsectionStatic : 1;    // offset: 0x0 ordinal: 0x2
  ULONG GlobalMemory : 1;        // offset: 0x0 ordinal: 0x3
  ULONG Protection : 5;          // offset: 0x0 ordinal: 0x4
  ULONG Spare : 1;               // offset: 0x0 ordinal: 0x5
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
  ULONG filler0 : 1;                  // offset: 0x0 ordinal: 0x18
  ULONG ImageMappedInSystemSpace : 1; // offset: 0x0 ordinal: 0x19
  ULONG UserWritable : 1;             // offset: 0x0 ordinal: 0x1a
  ULONG Accessed : 1;                 // offset: 0x0 ordinal: 0x1b
  ULONG GlobalOnlyPerSession : 1;     // offset: 0x0 ordinal: 0x1c
  ULONG Rom : 1;                      // offset: 0x0 ordinal: 0x1d
  ULONG WriteCombined : 1;            // offset: 0x0 ordinal: 0x1e
  ULONG filler : 1;                   // offset: 0x0 ordinal: 0x1f
} _MMSECTION_FLAGS;

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

// 0x0 bytes (sizeof)
typedef struct _SCSI_REQUEST_BLOCK {
} _SCSI_REQUEST_BLOCK;

// 0x8 bytes (sizeof)
typedef struct __anon_403 {
  struct _SCSI_REQUEST_BLOCK *Srb; // offset: 0x0 ordinal: 0x0
} __anon_403;

// 0x0 bytes (sizeof)
typedef struct _ASSEMBLY_STORAGE_MAP {
} _ASSEMBLY_STORAGE_MAP;

// 0x8 bytes (sizeof)
typedef struct __anon_1087 {
  struct _DEVICE_OBJECT *ReserveDevice; // offset: 0x0 ordinal: 0x0
} __anon_1087;

typedef long LONG;

typedef enum _MMSYSTEM_PTE_POOL_TYPE {
  SystemPteSpace = 0,        // ordinal: 0x0
  NonPagedPoolExpansion = 1, // ordinal: 0x1
  MaximumPtePoolTypes = 2,   // ordinal: 0x2
} _MMSYSTEM_PTE_POOL_TYPE;

typedef enum _REG_NOTIFY_CLASS {
  RegNtDeleteKey = 0,                  // ordinal: 0x0
  RegNtPreDeleteKey = 0,               // ordinal: 0x1
  RegNtSetValueKey = 1,                // ordinal: 0x2
  RegNtPreSetValueKey = 1,             // ordinal: 0x3
  RegNtDeleteValueKey = 2,             // ordinal: 0x4
  RegNtPreDeleteValueKey = 2,          // ordinal: 0x5
  RegNtSetInformationKey = 3,          // ordinal: 0x6
  RegNtPreSetInformationKey = 3,       // ordinal: 0x7
  RegNtRenameKey = 4,                  // ordinal: 0x8
  RegNtPreRenameKey = 4,               // ordinal: 0x9
  RegNtEnumerateKey = 5,               // ordinal: 0xa
  RegNtPreEnumerateKey = 5,            // ordinal: 0xb
  RegNtEnumerateValueKey = 6,          // ordinal: 0xc
  RegNtPreEnumerateValueKey = 6,       // ordinal: 0xd
  RegNtQueryKey = 7,                   // ordinal: 0xe
  RegNtPreQueryKey = 7,                // ordinal: 0xf
  RegNtQueryValueKey = 8,              // ordinal: 0x10
  RegNtPreQueryValueKey = 8,           // ordinal: 0x11
  RegNtQueryMultipleValueKey = 9,      // ordinal: 0x12
  RegNtPreQueryMultipleValueKey = 9,   // ordinal: 0x13
  RegNtPreCreateKey = 10,              // ordinal: 0x14
  RegNtPostCreateKey = 11,             // ordinal: 0x15
  RegNtPreOpenKey = 12,                // ordinal: 0x16
  RegNtPostOpenKey = 13,               // ordinal: 0x17
  RegNtKeyHandleClose = 14,            // ordinal: 0x18
  RegNtPreKeyHandleClose = 14,         // ordinal: 0x19
  RegNtPostDeleteKey = 15,             // ordinal: 0x1a
  RegNtPostSetValueKey = 16,           // ordinal: 0x1b
  RegNtPostDeleteValueKey = 17,        // ordinal: 0x1c
  RegNtPostSetInformationKey = 18,     // ordinal: 0x1d
  RegNtPostRenameKey = 19,             // ordinal: 0x1e
  RegNtPostEnumerateKey = 20,          // ordinal: 0x1f
  RegNtPostEnumerateValueKey = 21,     // ordinal: 0x20
  RegNtPostQueryKey = 22,              // ordinal: 0x21
  RegNtPostQueryValueKey = 23,         // ordinal: 0x22
  RegNtPostQueryMultipleValueKey = 24, // ordinal: 0x23
  RegNtPostKeyHandleClose = 25,        // ordinal: 0x24
  RegNtPreCreateKeyEx = 26,            // ordinal: 0x25
  RegNtPostCreateKeyEx = 27,           // ordinal: 0x26
  RegNtPreOpenKeyEx = 28,              // ordinal: 0x27
  RegNtPostOpenKeyEx = 29,             // ordinal: 0x28
} _REG_NOTIFY_CLASS;

typedef enum _WOW64_SHARED_INFORMATION {
  SharedNtdll32LdrInitializeThunk = 0,                // ordinal: 0x0
  SharedNtdll32KiUserExceptionDispatcher = 1,         // ordinal: 0x1
  SharedNtdll32KiUserApcDispatcher = 2,               // ordinal: 0x2
  SharedNtdll32KiUserCallbackDispatcher = 3,          // ordinal: 0x3
  SharedNtdll32LdrHotPatchRoutine = 4,                // ordinal: 0x4
  SharedNtdll32ExpInterlockedPopEntrySListFault = 5,  // ordinal: 0x5
  SharedNtdll32ExpInterlockedPopEntrySListResume = 6, // ordinal: 0x6
  SharedNtdll32ExpInterlockedPopEntrySListEnd = 7,    // ordinal: 0x7
  SharedNtdll32Reserved2 = 8,                         // ordinal: 0x8
  Wow64SharedPageEntriesCount = 9,                    // ordinal: 0x9
} _WOW64_SHARED_INFORMATION;

typedef enum _KTHREAD_STATE {
  Initialized = 0,   // ordinal: 0x0
  Ready = 1,         // ordinal: 0x1
  Running = 2,       // ordinal: 0x2
  Standby = 3,       // ordinal: 0x3
  Terminated = 4,    // ordinal: 0x4
  Waiting = 5,       // ordinal: 0x5
  Transition = 6,    // ordinal: 0x6
  DeferredReady = 7, // ordinal: 0x7
  GateWait = 8,      // ordinal: 0x8
} _KTHREAD_STATE;

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

typedef enum _KOBJECTS {
  EventNotificationObject = 0,    // ordinal: 0x0
  EventSynchronizationObject = 1, // ordinal: 0x1
  MutantObject = 2,               // ordinal: 0x2
  ProcessObject = 3,              // ordinal: 0x3
  QueueObject = 4,                // ordinal: 0x4
  SemaphoreObject = 5,            // ordinal: 0x5
  ThreadObject = 6,               // ordinal: 0x6
  GateObject = 7,                 // ordinal: 0x7
  TimerNotificationObject = 8,    // ordinal: 0x8
  TimerSynchronizationObject = 9, // ordinal: 0x9
  Spare2Object = 10,              // ordinal: 0xa
  Spare3Object = 11,              // ordinal: 0xb
  Spare4Object = 12,              // ordinal: 0xc
  Spare5Object = 13,              // ordinal: 0xd
  Spare6Object = 14,              // ordinal: 0xe
  Spare7Object = 15,              // ordinal: 0xf
  Spare8Object = 16,              // ordinal: 0x10
  Spare9Object = 17,              // ordinal: 0x11
  ApcObject = 18,                 // ordinal: 0x12
  DpcObject = 19,                 // ordinal: 0x13
  DeviceQueueObject = 20,         // ordinal: 0x14
  EventPairObject = 21,           // ordinal: 0x15
  InterruptObject = 22,           // ordinal: 0x16
  ProfileObject = 23,             // ordinal: 0x17
  ThreadedDpcObject = 24,         // ordinal: 0x18
  MaximumKernelObject = 25,       // ordinal: 0x19
} _KOBJECTS;

typedef enum _INTERLOCKED_RESULT {
  ResultNegative = 1, // ordinal: 0x0
  ResultZero = 0,     // ordinal: 0x1
  ResultPositive = 2, // ordinal: 0x2
} _INTERLOCKED_RESULT;

typedef enum _MODE {
  KernelMode = 0,  // ordinal: 0x0
  UserMode = 1,    // ordinal: 0x1
  MaximumMode = 2, // ordinal: 0x2
} _MODE;

typedef enum _MEMORY_CACHING_TYPE_ORIG {
  MmFrameBufferCached = 2, // ordinal: 0x0
} _MEMORY_CACHING_TYPE_ORIG;

typedef enum LSA_FOREST_TRUST_RECORD_TYPE {
  ForestTrustTopLevelName = 0,   // ordinal: 0x0
  ForestTrustTopLevelNameEx = 1, // ordinal: 0x1
  ForestTrustDomainInfo = 2,     // ordinal: 0x2
  ForestTrustRecordTypeLast = 2, // ordinal: 0x3
} LSA_FOREST_TRUST_RECORD_TYPE;

typedef enum _WAIT_TYPE {
  WaitAll = 0, // ordinal: 0x0
  WaitAny = 1, // ordinal: 0x1
} _WAIT_TYPE;

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

typedef enum _KDPC_IMPORTANCE {
  LowImportance = 0,    // ordinal: 0x0
  MediumImportance = 1, // ordinal: 0x1
  HighImportance = 2,   // ordinal: 0x2
} _KDPC_IMPORTANCE;

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
  InvalidIDEvent = 9,             // ordinal: 0x9
  MaxPlugEventCategory = 10,      // ordinal: 0xa
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
  PciInterface_Location = 1768116286,              // ordinal: 0xe
  PciInterface_AgpTarget = 1768116287,             // ordinal: 0xf
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
  MaxDeviceNodeState = 789,               // ordinal: 0x15
} _PNP_DEVNODE_STATE;

typedef enum _VI_DEADLOCK_RESOURCE_TYPE {
  VfDeadlockUnknown = 0,         // ordinal: 0x0
  VfDeadlockMutex = 1,           // ordinal: 0x1
  VfDeadlockMutexAbandoned = 2,  // ordinal: 0x2
  VfDeadlockFastMutex = 3,       // ordinal: 0x3
  VfDeadlockFastMutexUnsafe = 4, // ordinal: 0x4
  VfDeadlockSpinLock = 5,        // ordinal: 0x5
  VfDeadlockQueuedSpinLock = 6,  // ordinal: 0x6
  VfDeadlockTypeMaximum = 7,     // ordinal: 0x7
} _VI_DEADLOCK_RESOURCE_TYPE;

typedef enum _EXCEPTION_DISPOSITION {
  ExceptionContinueExecution = 0, // ordinal: 0x0
  ExceptionContinueSearch = 1,    // ordinal: 0x1
  ExceptionNestedException = 2,   // ordinal: 0x2
  ExceptionCollidedUnwind = 3,    // ordinal: 0x3
} _EXCEPTION_DISPOSITION;

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

// 0x4 bytes (sizeof)
typedef struct __anon_414 {
  enum _SYSTEM_POWER_STATE PowerState; // offset: 0x0 ordinal: 0x0
} __anon_414;

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

// 0x4 bytes (sizeof)
typedef struct __anon_411 {
  enum BUS_QUERY_ID_TYPE IdType; // offset: 0x0 ordinal: 0x0
} __anon_411;

typedef enum _DEVICE_RELATION_TYPE {
  BusRelations = 0,         // ordinal: 0x0
  EjectionRelations = 1,    // ordinal: 0x1
  PowerRelations = 2,       // ordinal: 0x2
  RemovalRelations = 3,     // ordinal: 0x3
  TargetDeviceRelation = 4, // ordinal: 0x4
  SingleBusRelations = 5,   // ordinal: 0x5
} _DEVICE_RELATION_TYPE;

// 0x4 bytes (sizeof)
typedef struct __anon_405 {
  enum _DEVICE_RELATION_TYPE Type; // offset: 0x0 ordinal: 0x0
} __anon_405;

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
  FileDirectoryInformation = 1,                 // ordinal: 0x0
  FileFullDirectoryInformation = 2,             // ordinal: 0x1
  FileBothDirectoryInformation = 3,             // ordinal: 0x2
  FileBasicInformation = 4,                     // ordinal: 0x3
  FileStandardInformation = 5,                  // ordinal: 0x4
  FileInternalInformation = 6,                  // ordinal: 0x5
  FileEaInformation = 7,                        // ordinal: 0x6
  FileAccessInformation = 8,                    // ordinal: 0x7
  FileNameInformation = 9,                      // ordinal: 0x8
  FileRenameInformation = 10,                   // ordinal: 0x9
  FileLinkInformation = 11,                     // ordinal: 0xa
  FileNamesInformation = 12,                    // ordinal: 0xb
  FileDispositionInformation = 13,              // ordinal: 0xc
  FilePositionInformation = 14,                 // ordinal: 0xd
  FileFullEaInformation = 15,                   // ordinal: 0xe
  FileModeInformation = 16,                     // ordinal: 0xf
  FileAlignmentInformation = 17,                // ordinal: 0x10
  FileAllInformation = 18,                      // ordinal: 0x11
  FileAllocationInformation = 19,               // ordinal: 0x12
  FileEndOfFileInformation = 20,                // ordinal: 0x13
  FileAlternateNameInformation = 21,            // ordinal: 0x14
  FileStreamInformation = 22,                   // ordinal: 0x15
  FilePipeInformation = 23,                     // ordinal: 0x16
  FilePipeLocalInformation = 24,                // ordinal: 0x17
  FilePipeRemoteInformation = 25,               // ordinal: 0x18
  FileMailslotQueryInformation = 26,            // ordinal: 0x19
  FileMailslotSetInformation = 27,              // ordinal: 0x1a
  FileCompressionInformation = 28,              // ordinal: 0x1b
  FileObjectIdInformation = 29,                 // ordinal: 0x1c
  FileCompletionInformation = 30,               // ordinal: 0x1d
  FileMoveClusterInformation = 31,              // ordinal: 0x1e
  FileQuotaInformation = 32,                    // ordinal: 0x1f
  FileReparsePointInformation = 33,             // ordinal: 0x20
  FileNetworkOpenInformation = 34,              // ordinal: 0x21
  FileAttributeTagInformation = 35,             // ordinal: 0x22
  FileTrackingInformation = 36,                 // ordinal: 0x23
  FileIdBothDirectoryInformation = 37,          // ordinal: 0x24
  FileIdFullDirectoryInformation = 38,          // ordinal: 0x25
  FileValidDataLengthInformation = 39,          // ordinal: 0x26
  FileShortNameInformation = 40,                // ordinal: 0x27
  FileIoCompletionNotificationInformation = 41, // ordinal: 0x28
  FileMaximumInformation = 42,                  // ordinal: 0x29
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

// 0x10 bytes (sizeof)
typedef struct _SLIST_ENTRY {
  struct _SLIST_ENTRY *Next; // offset: 0x0 ordinal: 0x0
} _SLIST_ENTRY;

typedef enum _PROCESSOR_CACHE_TYPE {
  CacheUnified = 0,     // ordinal: 0x0
  CacheInstruction = 1, // ordinal: 0x1
  CacheData = 2,        // ordinal: 0x2
  CacheTrace = 3,       // ordinal: 0x3
} _PROCESSOR_CACHE_TYPE;

typedef short SHORT;

// 0x4 bytes (sizeof)
typedef struct __anon_1219 {
  SHORT Type;           // offset: 0x0 ordinal: 0x0
  SHORT DataInfoOffset; // offset: 0x2 ordinal: 0x1
} __anon_1219;

// 0x4 bytes (sizeof)
typedef struct __anon_1218 {
  SHORT DataLength;  // offset: 0x0 ordinal: 0x0
  SHORT TotalLength; // offset: 0x2 ordinal: 0x1
} __anon_1218;

typedef void VOID;

typedef VOID (*__anon_344)(struct _DEVICE_OBJECT *, struct _DEVICE_OBJECT *);

typedef VOID (*__anon_343)(struct _FILE_OBJECT *);

typedef VOID (*__anon_284)();

typedef VOID (*__anon_265)(struct _DRIVER_OBJECT *);

typedef unsigned char UCHAR;

// 0x8 bytes (sizeof)
typedef struct _SINGLE_LIST_ENTRY {
  struct _SINGLE_LIST_ENTRY *Next; // offset: 0x0 ordinal: 0x0
} _SINGLE_LIST_ENTRY;

typedef unsigned long long ULONGLONG;

// 0x8 bytes (sizeof)
typedef struct __anon_1231 {
  VOID *Notification; // offset: 0x0 ordinal: 0x0
} __anon_1231;

// 0x10 bytes (sizeof)
typedef struct __anon_1068 {
  VOID *UserData; // offset: 0x0 ordinal: 0x0
  VOID *Owner;    // offset: 0x8 ordinal: 0x1
} __anon_1068;

typedef VOID (*__anon_813)(VOID *, VOID *);

// 0x20 bytes (sizeof)
typedef struct _SECURITY_SUBJECT_CONTEXT {
  VOID *ClientToken; // offset: 0x0 ordinal: 0x0
  enum _SECURITY_IMPERSONATION_LEVEL
      ImpersonationLevel; // offset: 0x8 ordinal: 0x1
  VOID *PrimaryToken;     // offset: 0x10 ordinal: 0x2
  VOID *ProcessAuditId;   // offset: 0x18 ordinal: 0x3
} _SECURITY_SUBJECT_CONTEXT;

// 0x28 bytes (sizeof)
typedef struct __anon_469 {
  VOID *Argument1; // offset: 0x0 ordinal: 0x0
  VOID *Argument2; // offset: 0x8 ordinal: 0x1
  VOID *Argument3; // offset: 0x10 ordinal: 0x2
  VOID *Argument4; // offset: 0x18 ordinal: 0x3
  VOID *Argument5; // offset: 0x20 ordinal: 0x4
} __anon_469;

// 0x10 bytes (sizeof)
typedef struct _IO_COMPLETION_CONTEXT {
  VOID *Port; // offset: 0x0 ordinal: 0x0
  VOID *Key;  // offset: 0x8 ordinal: 0x1
} _IO_COMPLETION_CONTEXT;

// 0x18 bytes (sizeof)
typedef struct _SECTION_OBJECT_POINTERS {
  VOID *DataSectionObject;  // offset: 0x0 ordinal: 0x0
  VOID *SharedCacheMap;     // offset: 0x8 ordinal: 0x1
  VOID *ImageSectionObject; // offset: 0x10 ordinal: 0x2
} _SECTION_OBJECT_POINTERS;

// 0x20 bytes (sizeof)
typedef struct __anon_419 {
  VOID *Argument1; // offset: 0x0 ordinal: 0x0
  VOID *Argument2; // offset: 0x8 ordinal: 0x1
  VOID *Argument3; // offset: 0x10 ordinal: 0x2
  VOID *Argument4; // offset: 0x18 ordinal: 0x3
} __anon_419;

// 0x10 bytes (sizeof)
typedef struct _IO_CLIENT_EXTENSION {
  struct _IO_CLIENT_EXTENSION *NextExtension; // offset: 0x0 ordinal: 0x0
  VOID *ClientIdentificationAddress;          // offset: 0x8 ordinal: 0x1
} _IO_CLIENT_EXTENSION;

// 0x10 bytes (sizeof)
typedef struct _PROCESS_WS_WATCH_INFORMATION {
  VOID *FaultingPc; // offset: 0x0 ordinal: 0x0
  VOID *FaultingVa; // offset: 0x8 ordinal: 0x1
} _PROCESS_WS_WATCH_INFORMATION;

typedef VOID (*__anon_270)(struct _DEVICE_OBJECT *, VOID *);

// 0x8 bytes (sizeof)
typedef struct _WOW64_PROCESS {
  VOID *Wow64; // offset: 0x0 ordinal: 0x0
} _WOW64_PROCESS;

// 0x10 bytes (sizeof)
typedef struct _TERMINATION_PORT {
  struct _TERMINATION_PORT *Next; // offset: 0x0 ordinal: 0x0
  VOID *Port;                     // offset: 0x8 ordinal: 0x1
} _TERMINATION_PORT;

// 0x10 bytes (sizeof)
typedef struct _CLIENT_ID {
  VOID *UniqueProcess; // offset: 0x0 ordinal: 0x0
  VOID *UniqueThread;  // offset: 0x8 ordinal: 0x1
} _CLIENT_ID;

typedef VOID (*__anon_155)(VOID *);

// 0x18 bytes (sizeof)
typedef struct PCI_SECONDARY_EXTENSION {
  struct _SINGLE_LIST_ENTRY List;   // offset: 0x0 ordinal: 0x0
  enum PCI_SIGNATURE ExtensionType; // offset: 0x8 ordinal: 0x1
  VOID (*Destructor)(VOID *);       // offset: 0x10 ordinal: 0x2
} PCI_SECONDARY_EXTENSION;

typedef VOID (*__anon_150)(VOID *, VOID *, VOID *, VOID *);

typedef VOID (*__anon_145)(VOID *, VOID *, VOID *);

// 0x20 bytes (sizeof)
typedef struct _KREQUEST_PACKET {
  VOID *CurrentPacket[3]; // offset: 0x0 ordinal: 0x0
  VOID(*WorkerRoutine)
  (VOID *, VOID *, VOID *, VOID *); // offset: 0x18 ordinal: 0x1
} _KREQUEST_PACKET;

// 0x30 bytes (sizeof)
typedef struct _iobuf {
  CHAR *_ptr;      // offset: 0x0 ordinal: 0x0
  LONG _cnt;       // offset: 0x8 ordinal: 0x1
  CHAR *_base;     // offset: 0x10 ordinal: 0x2
  LONG _flag;      // offset: 0x18 ordinal: 0x3
  LONG _file;      // offset: 0x1c ordinal: 0x4
  LONG _charbuf;   // offset: 0x20 ordinal: 0x5
  LONG _bufsiz;    // offset: 0x24 ordinal: 0x6
  CHAR *_tmpfname; // offset: 0x28 ordinal: 0x7
} _iobuf;

typedef LONGLONG (*__anon_799)();

// 0x8 bytes (sizeof)
typedef union __anon_565 {
  LONGLONG Balance : 2;  // offset: 0x0 ordinal: 0x0
  struct _MMVAD *Parent; // offset: 0x0 ordinal: 0x1
} __anon_565;

// 0x8 bytes (sizeof)
typedef union __anon_259 {
  LONGLONG Balance : 2;           // offset: 0x0 ordinal: 0x0
  struct _MMADDRESS_NODE *Parent; // offset: 0x0 ordinal: 0x1
} __anon_259;

// 0x8 bytes (sizeof)
typedef struct _QUAD {
  union {
    LONGLONG UseThisFieldToCopy; // offset: 0x0 ordinal: 0x0
    double DoNotUseThisField;    // offset: 0x0 ordinal: 0x1
  };
} _QUAD;

// 0x40 bytes (sizeof)
typedef struct _REQUEST_MAILBOX {
  LONGLONG RequestSummary; // offset: 0x0 ordinal: 0x0
  union {
    struct _KREQUEST_PACKET RequestPacket; // offset: 0x8 ordinal: 0x1
    VOID *Virtual[7];                      // offset: 0x8 ordinal: 0x2
  };
} _REQUEST_MAILBOX;

typedef LONG (*__anon_1137)(struct _ARBITER_INSTANCE *);

// 0x8 bytes (sizeof)
typedef struct _VACB_LEVEL_REFERENCE {
  LONG Reference;        // offset: 0x0 ordinal: 0x0
  LONG SpecialReference; // offset: 0x4 ordinal: 0x1
} _VACB_LEVEL_REFERENCE;

// 0x4 bytes (sizeof)
typedef struct _DBGKD_CONTINUE {
  LONG ContinueStatus; // offset: 0x0 ordinal: 0x0
} _DBGKD_CONTINUE;

typedef LONG (*__anon_353)(struct _FILE_OBJECT *, struct _DEVICE_OBJECT *);

typedef LONG (*__anon_331)(struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *);

// 0x8 bytes (sizeof)
typedef union __anon_231 {
  struct _IRP *MasterIrp; // offset: 0x0 ordinal: 0x0
  LONG IrpCount;          // offset: 0x0 ordinal: 0x1
  VOID *SystemBuffer;     // offset: 0x0 ordinal: 0x2
} __anon_231;

// 0x5 bytes (sizeof)
typedef struct __anon_1026 {
  UCHAR Acquired;      // offset: 0x0 ordinal: 0x0
  UCHAR CacheLineSize; // offset: 0x1 ordinal: 0x1
  UCHAR LatencyTimer;  // offset: 0x2 ordinal: 0x2
  UCHAR EnablePERR;    // offset: 0x3 ordinal: 0x3
  UCHAR EnableSERR;    // offset: 0x4 ordinal: 0x4
} __anon_1026;

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
typedef struct __anon_1016 {
  UCHAR PrimaryBus;              // offset: 0x0 ordinal: 0x0
  UCHAR SecondaryBus;            // offset: 0x1 ordinal: 0x1
  UCHAR SubordinateBus;          // offset: 0x2 ordinal: 0x2
  UCHAR SubtractiveDecode : 1;   // offset: 0x3 ordinal: 0x3
  UCHAR IsaBitSet : 1;           // offset: 0x3 ordinal: 0x4
  UCHAR VgaBitSet : 1;           // offset: 0x3 ordinal: 0x5
  UCHAR WeChangedBusNumbers : 1; // offset: 0x3 ordinal: 0x6
  UCHAR IsaBitRequired : 1;      // offset: 0x3 ordinal: 0x7
} __anon_1016;

// 0x2 bytes (sizeof)
typedef struct _PCI_PMC {
  UCHAR Version : 3;                      // offset: 0x0 ordinal: 0x0
  UCHAR PMEClock : 1;                     // offset: 0x0 ordinal: 0x1
  UCHAR Rsvd1 : 1;                        // offset: 0x0 ordinal: 0x2
  UCHAR DeviceSpecificInitialization : 1; // offset: 0x0 ordinal: 0x3
  UCHAR Rsvd2 : 2;                        // offset: 0x0 ordinal: 0x4
  struct _PM_SUPPORT Support;             // offset: 0x1 ordinal: 0x5
} _PCI_PMC;

// 0x4 bytes (sizeof)
typedef struct __anon_912 {
  UCHAR BaseMiddle; // offset: 0x0 ordinal: 0x0
  UCHAR Flags1;     // offset: 0x1 ordinal: 0x1
  UCHAR Flags2;     // offset: 0x2 ordinal: 0x2
  UCHAR BaseHigh;   // offset: 0x3 ordinal: 0x3
} __anon_912;

typedef UCHAR (*__anon_677)(VOID *, UCHAR);

// 0x20 bytes (sizeof)
typedef struct _CACHE_MANAGER_CALLBACKS {
  UCHAR (*AcquireForLazyWrite)(VOID *, UCHAR); // offset: 0x0 ordinal: 0x0
  VOID (*ReleaseFromLazyWrite)(VOID *);        // offset: 0x8 ordinal: 0x1
  UCHAR (*AcquireForReadAhead)(VOID *, UCHAR); // offset: 0x10 ordinal: 0x2
  VOID (*ReleaseFromReadAhead)(VOID *);        // offset: 0x18 ordinal: 0x3
} _CACHE_MANAGER_CALLBACKS;

typedef UCHAR (*__anon_522)(struct _EPROCESS *, VOID *, VOID *, CHAR);

// 0x6 bytes (sizeof)
typedef struct _SID_IDENTIFIER_AUTHORITY {
  UCHAR Value[6]; // offset: 0x0 ordinal: 0x0
} _SID_IDENTIFIER_AUTHORITY;

// 0x1 bytes (sizeof)
typedef struct __anon_410 {
  UCHAR Lock; // offset: 0x0 ordinal: 0x0
} __anon_410;

typedef UCHAR (*__anon_348)(struct _FILE_OBJECT *, struct _MDL *,
                            struct _DEVICE_OBJECT *);

// 0x10 bytes (sizeof)
typedef struct _PS_IMPERSONATION_INFORMATION {
  VOID *Token;         // offset: 0x0 ordinal: 0x0
  UCHAR CopyOnOpen;    // offset: 0x8 ordinal: 0x1
  UCHAR EffectiveOnly; // offset: 0x9 ordinal: 0x2
  enum _SECURITY_IMPERSONATION_LEVEL
      ImpersonationLevel; // offset: 0xc ordinal: 0x3
} _PS_IMPERSONATION_INFORMATION;

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

typedef LONG (*__anon_120)(UCHAR);

// 0x1 bytes (sizeof)
typedef struct _flags {
  UCHAR Removable : 1; // offset: 0x0 ordinal: 0x0
  UCHAR Fill : 7;      // offset: 0x0 ordinal: 0x1
} _flags;

// 0x4 bytes (sizeof)
typedef struct __anon_1015 {
  UCHAR Spare[4]; // offset: 0x0 ordinal: 0x0
} __anon_1015;

// 0x4 bytes (sizeof)
typedef union PCI_HEADER_TYPE_DEPENDENT {
  struct __anon_1015 type0; // offset: 0x0 ordinal: 0x0
  struct __anon_1016 type1; // offset: 0x0 ordinal: 0x1
  struct __anon_1016 type2; // offset: 0x0 ordinal: 0x2
} PCI_HEADER_TYPE_DEPENDENT;

// 0x10 bytes (sizeof)
typedef struct __anon_413 {
  UCHAR InPath;                              // offset: 0x0 ordinal: 0x0
  UCHAR Reserved[3];                         // offset: 0x1 ordinal: 0x1
  enum _DEVICE_USAGE_NOTIFICATION_TYPE Type; // offset: 0x8 ordinal: 0x2
} __anon_413;

typedef unsigned short USHORT;

// 0x4 bytes (sizeof)
typedef struct _HEAP_FREE_ENTRY_EXTRA {
  USHORT TagIndex;           // offset: 0x0 ordinal: 0x0
  USHORT FreeBackTraceIndex; // offset: 0x2 ordinal: 0x1
} _HEAP_FREE_ENTRY_EXTRA;

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
typedef struct _ACL {
  UCHAR AclRevision; // offset: 0x0 ordinal: 0x0
  UCHAR Sbz1;        // offset: 0x1 ordinal: 0x1
  USHORT AclSize;    // offset: 0x2 ordinal: 0x2
  USHORT AceCount;   // offset: 0x4 ordinal: 0x3
  USHORT Sbz2;       // offset: 0x6 ordinal: 0x4
} _ACL;

// 0x28 bytes (sizeof)
typedef struct _SECURITY_DESCRIPTOR {
  UCHAR Revision;    // offset: 0x0 ordinal: 0x0
  UCHAR Sbz1;        // offset: 0x1 ordinal: 0x1
  USHORT Control;    // offset: 0x2 ordinal: 0x2
  VOID *Owner;       // offset: 0x8 ordinal: 0x3
  VOID *Group;       // offset: 0x10 ordinal: 0x4
  struct _ACL *Sacl; // offset: 0x18 ordinal: 0x5
  struct _ACL *Dacl; // offset: 0x20 ordinal: 0x6
} _SECURITY_DESCRIPTOR;

// 0x8 bytes (sizeof)
typedef struct _INTERLOCK_SEQ {
  USHORT Depth;           // offset: 0x0 ordinal: 0x0
  USHORT FreeEntryOffset; // offset: 0x2 ordinal: 0x1
  ULONG OffsetAndDepth;   // offset: 0x0 ordinal: 0x2
  ULONG Sequence;         // offset: 0x4 ordinal: 0x3
  LONGLONG Exchg;         // offset: 0x0 ordinal: 0x4
} _INTERLOCK_SEQ;

// 0x2 bytes (sizeof)
typedef union __anon_680 {
  USHORT FreeListsInUseTerminate; // offset: 0x0 ordinal: 0x0
  USHORT DecommitCount;           // offset: 0x0 ordinal: 0x1
} __anon_680;

// 0x2 bytes (sizeof)
typedef struct _MMPFNENTRY {
  USHORT Modified : 1;         // offset: 0x0 ordinal: 0x0
  USHORT ReadInProgress : 1;   // offset: 0x0 ordinal: 0x1
  USHORT WriteInProgress : 1;  // offset: 0x0 ordinal: 0x2
  USHORT PrototypePte : 1;     // offset: 0x0 ordinal: 0x3
  USHORT PageColor : 4;        // offset: 0x0 ordinal: 0x4
  USHORT PageLocation : 3;     // offset: 0x0 ordinal: 0x5
  USHORT RemovalRequested : 1; // offset: 0x0 ordinal: 0x6
  USHORT CacheAttribute : 2;   // offset: 0x0 ordinal: 0x7
  USHORT Rom : 1;              // offset: 0x0 ordinal: 0x8
  USHORT ParityError : 1;      // offset: 0x0 ordinal: 0x9
} _MMPFNENTRY;

// 0x4 bytes (sizeof)
typedef struct __anon_559 {
  USHORT ReferenceCount; // offset: 0x0 ordinal: 0x0
  USHORT ShortFlags;     // offset: 0x2 ordinal: 0x1
} __anon_559;

// 0x4 bytes (sizeof)
typedef union __anon_560 {
  USHORT ReferenceCount; // offset: 0x0 ordinal: 0x0
  struct _MMPFNENTRY e1; // offset: 0x2 ordinal: 0x1
  struct __anon_559 e2;  // offset: 0x0 ordinal: 0x2
} __anon_560;

// 0x20 bytes (sizeof)
typedef struct _INTERFACE {
  USHORT Size;                          // offset: 0x0 ordinal: 0x0
  USHORT Version;                       // offset: 0x2 ordinal: 0x1
  VOID *Context;                        // offset: 0x8 ordinal: 0x2
  VOID (*InterfaceReference)(VOID *);   // offset: 0x10 ordinal: 0x3
  VOID (*InterfaceDereference)(VOID *); // offset: 0x18 ordinal: 0x4
} _INTERFACE;

typedef LONG (*__anon_1145)(VOID *, VOID *, VOID *, USHORT, USHORT,
                            struct _INTERFACE *);

// 0x10 bytes (sizeof)
typedef struct _STRING {
  USHORT Length;        // offset: 0x0 ordinal: 0x0
  USHORT MaximumLength; // offset: 0x2 ordinal: 0x1
  CHAR *Buffer;         // offset: 0x8 ordinal: 0x2
} _STRING;

// 0x4 bytes (sizeof)
typedef struct _MMSUPPORT_FLAGS {
  UCHAR SessionSpace : 1;          // offset: 0x0 ordinal: 0x0
  UCHAR BeingTrimmed : 1;          // offset: 0x0 ordinal: 0x1
  UCHAR SessionLeader : 1;         // offset: 0x0 ordinal: 0x2
  UCHAR TrimHard : 1;              // offset: 0x0 ordinal: 0x3
  UCHAR MaximumWorkingSetHard : 1; // offset: 0x0 ordinal: 0x4
  UCHAR ForceTrim : 1;             // offset: 0x0 ordinal: 0x5
  UCHAR MinimumWorkingSetHard : 1; // offset: 0x0 ordinal: 0x6
  UCHAR Available0 : 1;            // offset: 0x0 ordinal: 0x7
  UCHAR MemoryPriority : 8;        // offset: 0x1 ordinal: 0x8
  USHORT GrowWsleHash : 1;         // offset: 0x2 ordinal: 0x9
  USHORT AcquiredUnsafe : 1;       // offset: 0x2 ordinal: 0xa
  USHORT Available : 14;           // offset: 0x2 ordinal: 0xb
} _MMSUPPORT_FLAGS;

// 0x10 bytes (sizeof)
typedef struct _UNICODE_STRING {
  USHORT Length;        // offset: 0x0 ordinal: 0x0
  USHORT MaximumLength; // offset: 0x2 ordinal: 0x1
  USHORT *Buffer;       // offset: 0x8 ordinal: 0x2
} _UNICODE_STRING;

// 0x18 bytes (sizeof)
typedef struct _CURDIR {
  struct _UNICODE_STRING DosPath; // offset: 0x0 ordinal: 0x0
  VOID *Handle;                   // offset: 0x10 ordinal: 0x1
} _CURDIR;

// 0x10 bytes (sizeof)
typedef struct _OBJECT_NAME_INFORMATION {
  struct _UNICODE_STRING Name; // offset: 0x0 ordinal: 0x0
} _OBJECT_NAME_INFORMATION;

// 0x8 bytes (sizeof)
typedef struct _SE_AUDIT_PROCESS_CREATION_INFO {
  struct _OBJECT_NAME_INFORMATION *ImageFileName; // offset: 0x0 ordinal: 0x0
} _SE_AUDIT_PROCESS_CREATION_INFO;

typedef LONG (*__anon_263)(struct _DRIVER_OBJECT *, struct _UNICODE_STRING *);

// 0x2 bytes (sizeof)
typedef struct __anon_1235 {
  USHORT ParentId[1]; // offset: 0x0 ordinal: 0x0
} __anon_1235;

// 0x8 bytes (sizeof)
typedef struct __anon_1233 {
  enum _PNP_VETO_TYPE VetoType;     // offset: 0x0 ordinal: 0x0
  USHORT DeviceIdVetoNameBuffer[1]; // offset: 0x4 ordinal: 0x1
} __anon_1233;

// 0x10 bytes (sizeof)
typedef struct __anon_1230 {
  VOID *NotificationStructure; // offset: 0x0 ordinal: 0x0
  USHORT DeviceIds[1];         // offset: 0x8 ordinal: 0x1
} __anon_1230;

// 0x2 bytes (sizeof)
typedef struct __anon_1229 {
  USHORT DeviceId[1]; // offset: 0x0 ordinal: 0x0
} __anon_1229;

// 0x2 bytes (sizeof)
typedef struct __anon_1228 {
  USHORT DeviceIds[1]; // offset: 0x0 ordinal: 0x0
} __anon_1228;

// 0x18 bytes (sizeof)
typedef struct _RTL_ATOM_TABLE_ENTRY {
  struct _RTL_ATOM_TABLE_ENTRY *HashLink; // offset: 0x0 ordinal: 0x0
  USHORT HandleIndex;                     // offset: 0x8 ordinal: 0x1
  USHORT Atom;                            // offset: 0xa ordinal: 0x2
  USHORT ReferenceCount;                  // offset: 0xc ordinal: 0x3
  UCHAR Flags;                            // offset: 0xe ordinal: 0x4
  UCHAR NameLength;                       // offset: 0xf ordinal: 0x5
  USHORT Name[1];                         // offset: 0x10 ordinal: 0x6
} _RTL_ATOM_TABLE_ENTRY;

// 0x10 bytes (sizeof)
typedef struct _KDESCRIPTOR {
  USHORT Pad[3]; // offset: 0x0 ordinal: 0x0
  USHORT Limit;  // offset: 0x6 ordinal: 0x1
  VOID *Base;    // offset: 0x8 ordinal: 0x2
} _KDESCRIPTOR;

typedef LONG (*__anon_1136)(struct _ARBITER_INSTANCE *, struct _LIST_ENTRY *);

// 0x8 bytes (sizeof)
typedef struct __anon_1084 {
  struct _LIST_ENTRY *ArbitrationList; // offset: 0x0 ordinal: 0x0
} __anon_1084;

// 0x10 bytes (sizeof)
typedef struct _LIST_ENTRY {
  struct _LIST_ENTRY *Flink; // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY *Blink; // offset: 0x8 ordinal: 0x1
} _LIST_ENTRY;

// 0x10 bytes (sizeof)
typedef struct __anon_1069 {
  struct _LIST_ENTRY ListHead; // offset: 0x0 ordinal: 0x0
} __anon_1069;

// 0x20 bytes (sizeof)
typedef struct __anon_895 {
  enum PROFILE_STATUS DockStatus; // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY ListEntry;   // offset: 0x8 ordinal: 0x1
  USHORT *SerialNumber;           // offset: 0x18 ordinal: 0x2
} __anon_895;

// 0x20 bytes (sizeof)
typedef struct _WORK_QUEUE_ITEM {
  struct _LIST_ENTRY List;       // offset: 0x0 ordinal: 0x0
  VOID (*WorkerRoutine)(VOID *); // offset: 0x10 ordinal: 0x1
  VOID *Parameter;               // offset: 0x18 ordinal: 0x2
} _WORK_QUEUE_ITEM;

// 0x20 bytes (sizeof)
typedef struct _OBJECT_HEADER_CREATOR_INFO {
  struct _LIST_ENTRY TypeList;  // offset: 0x0 ordinal: 0x0
  VOID *CreatorUniqueProcess;   // offset: 0x10 ordinal: 0x1
  USHORT CreatorBackTraceIndex; // offset: 0x18 ordinal: 0x2
  USHORT Reserved;              // offset: 0x1a ordinal: 0x3
} _OBJECT_HEADER_CREATOR_INFO;

// 0x30 bytes (sizeof)
typedef struct _IO_TIMER {
  SHORT Type;                   // offset: 0x0 ordinal: 0x0
  SHORT TimerFlag;              // offset: 0x2 ordinal: 0x1
  struct _LIST_ENTRY TimerList; // offset: 0x8 ordinal: 0x2
  VOID(*TimerRoutine)
  (struct _DEVICE_OBJECT *, VOID *);   // offset: 0x18 ordinal: 0x3
  VOID *Context;                       // offset: 0x20 ordinal: 0x4
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x28 ordinal: 0x5
} _IO_TIMER;

// 0x18 bytes (sizeof)
typedef struct _DISPATCHER_HEADER {
  UCHAR Type; // offset: 0x0 ordinal: 0x0
  union {
    UCHAR Absolute; // offset: 0x1 ordinal: 0x1
    UCHAR NpxIrql;  // offset: 0x1 ordinal: 0x2
  };
  union {
    UCHAR Size; // offset: 0x2 ordinal: 0x3
    UCHAR Hand; // offset: 0x2 ordinal: 0x4
  };
  union {
    UCHAR Inserted;    // offset: 0x3 ordinal: 0x5
    UCHAR DebugActive; // offset: 0x3 ordinal: 0x6
  };
  LONG Lock;                       // offset: 0x0 ordinal: 0x7
  LONG SignalState;                // offset: 0x4 ordinal: 0x8
  struct _LIST_ENTRY WaitListHead; // offset: 0x8 ordinal: 0x9
} _DISPATCHER_HEADER;

// 0x18 bytes (sizeof)
typedef struct _KGATE {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 ordinal: 0x0
} _KGATE;

// 0x20 bytes (sizeof)
typedef struct _KSEMAPHORE {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 ordinal: 0x0
  LONG Limit;                       // offset: 0x18 ordinal: 0x1
} _KSEMAPHORE;

// 0x28 bytes (sizeof)
typedef struct _LPCP_NONPAGED_PORT_QUEUE {
  struct _KSEMAPHORE Semaphore;          // offset: 0x0 ordinal: 0x0
  struct _LPCP_PORT_OBJECT *BackPointer; // offset: 0x20 ordinal: 0x1
} _LPCP_NONPAGED_PORT_QUEUE;

// 0x20 bytes (sizeof)
typedef struct _LPCP_PORT_QUEUE {
  struct _LPCP_NONPAGED_PORT_QUEUE
      *NonPagedPortQueue;         // offset: 0x0 ordinal: 0x0
  struct _KSEMAPHORE *Semaphore;  // offset: 0x8 ordinal: 0x1
  struct _LIST_ENTRY ReceiveHead; // offset: 0x10 ordinal: 0x2
} _LPCP_PORT_QUEUE;

// 0x18 bytes (sizeof)
typedef struct _KEVENT {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 ordinal: 0x0
} _KEVENT;

// 0x20 bytes (sizeof)
typedef struct _CACHE_UNINITIALIZE_EVENT {
  struct _CACHE_UNINITIALIZE_EVENT *Next; // offset: 0x0 ordinal: 0x0
  struct _KEVENT Event;                   // offset: 0x8 ordinal: 0x1
} _CACHE_UNINITIALIZE_EVENT;

// 0x28 bytes (sizeof)
typedef struct _MMMOD_WRITER_LISTHEAD {
  struct _LIST_ENTRY ListHead; // offset: 0x0 ordinal: 0x0
  struct _KEVENT Event;        // offset: 0x10 ordinal: 0x1
} _MMMOD_WRITER_LISTHEAD;

// 0x40 bytes (sizeof)
typedef struct _EX_PUSH_LOCK_WAIT_BLOCK {
  union {
    struct _KGATE WakeGate;   // offset: 0x0 ordinal: 0x0
    struct _KEVENT WakeEvent; // offset: 0x0 ordinal: 0x1
  };
  struct _EX_PUSH_LOCK_WAIT_BLOCK *Next;     // offset: 0x18 ordinal: 0x2
  struct _EX_PUSH_LOCK_WAIT_BLOCK *Last;     // offset: 0x20 ordinal: 0x3
  struct _EX_PUSH_LOCK_WAIT_BLOCK *Previous; // offset: 0x28 ordinal: 0x4
  LONG ShareCount;                           // offset: 0x30 ordinal: 0x5
  LONG Flags;                                // offset: 0x34 ordinal: 0x6
} _EX_PUSH_LOCK_WAIT_BLOCK;

// 0x40 bytes (sizeof)
typedef struct _KDPC {
  UCHAR Type;                      // offset: 0x0 ordinal: 0x0
  UCHAR Importance;                // offset: 0x1 ordinal: 0x1
  UCHAR Number;                    // offset: 0x2 ordinal: 0x2
  UCHAR Expedite;                  // offset: 0x3 ordinal: 0x3
  struct _LIST_ENTRY DpcListEntry; // offset: 0x8 ordinal: 0x4
  VOID(*DeferredRoutine)
  (struct _KDPC *, VOID *, VOID *, VOID *); // offset: 0x18 ordinal: 0x5
  VOID *DeferredContext;                    // offset: 0x20 ordinal: 0x6
  VOID *SystemArgument1;                    // offset: 0x28 ordinal: 0x7
  VOID *SystemArgument2;                    // offset: 0x30 ordinal: 0x8
  VOID *DpcData;                            // offset: 0x38 ordinal: 0x9
} _KDPC;

typedef VOID (*__anon_111)(struct _KDPC *, VOID *, VOID *, VOID *);

// 0x4 bytes (sizeof)
typedef struct _HANDLE_TABLE_ENTRY_INFO {
  ULONG AuditMask; // offset: 0x0 ordinal: 0x0
} _HANDLE_TABLE_ENTRY_INFO;

// 0x8 bytes (sizeof)
typedef struct __anon_1232 {
  ULONG NotificationCode; // offset: 0x0 ordinal: 0x0
  ULONG NotificationData; // offset: 0x4 ordinal: 0x1
} __anon_1232;

// 0x4 bytes (sizeof)
typedef union __anon_1217 {
  struct __anon_1219 s2; // offset: 0x0 ordinal: 0x0
  ULONG ZeroInit;        // offset: 0x0 ordinal: 0x1
} __anon_1217;

// 0x4 bytes (sizeof)
typedef union __anon_1216 {
  struct __anon_1218 s1; // offset: 0x0 ordinal: 0x0
  ULONG Length;          // offset: 0x0 ordinal: 0x1
} __anon_1216;

// 0x8 bytes (sizeof)
typedef struct __anon_1212 {
  ULONG Signature; // offset: 0x0 ordinal: 0x0
  ULONG CheckSum;  // offset: 0x4 ordinal: 0x1
} __anon_1212;

typedef VOID (*__anon_1207)(ULONG);

// 0x80 bytes (sizeof)
typedef struct _PO_NOTIFY_ORDER_LEVEL {
  struct _KEVENT LevelReady;     // offset: 0x0 ordinal: 0x0
  ULONG DeviceCount;             // offset: 0x18 ordinal: 0x1
  ULONG ActiveCount;             // offset: 0x1c ordinal: 0x2
  struct _LIST_ENTRY WaitSleep;  // offset: 0x20 ordinal: 0x3
  struct _LIST_ENTRY ReadySleep; // offset: 0x30 ordinal: 0x4
  struct _LIST_ENTRY Pending;    // offset: 0x40 ordinal: 0x5
  struct _LIST_ENTRY Complete;   // offset: 0x50 ordinal: 0x6
  struct _LIST_ENTRY ReadyS0;    // offset: 0x60 ordinal: 0x7
  struct _LIST_ENTRY WaitS0;     // offset: 0x70 ordinal: 0x8
} _PO_NOTIFY_ORDER_LEVEL;

// 0x410 bytes (sizeof)
typedef struct _PO_DEVICE_NOTIFY_ORDER {
  ULONG DevNodeSequence;                       // offset: 0x0 ordinal: 0x0
  struct _DEVICE_OBJECT **WarmEjectPdoPointer; // offset: 0x8 ordinal: 0x1
  struct _PO_NOTIFY_ORDER_LEVEL OrderLevel[8]; // offset: 0x10 ordinal: 0x2
} _PO_DEVICE_NOTIFY_ORDER;

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

// 0x70 bytes (sizeof)
typedef struct _PI_BUS_EXTENSION {
  ULONG Flags;                                // offset: 0x0 ordinal: 0x0
  UCHAR NumberCSNs;                           // offset: 0x4 ordinal: 0x1
  UCHAR *ReadDataPort;                        // offset: 0x8 ordinal: 0x2
  UCHAR DataPortMapped;                       // offset: 0x10 ordinal: 0x3
  UCHAR *AddressPort;                         // offset: 0x18 ordinal: 0x4
  UCHAR AddrPortMapped;                       // offset: 0x20 ordinal: 0x5
  UCHAR *CommandPort;                         // offset: 0x28 ordinal: 0x6
  UCHAR CmdPortMapped;                        // offset: 0x30 ordinal: 0x7
  ULONG NextSlotNumber;                       // offset: 0x34 ordinal: 0x8
  struct _SINGLE_LIST_ENTRY DeviceList;       // offset: 0x38 ordinal: 0x9
  struct _SINGLE_LIST_ENTRY CardList;         // offset: 0x40 ordinal: 0xa
  struct _DEVICE_OBJECT *PhysicalBusDevice;   // offset: 0x48 ordinal: 0xb
  struct _DEVICE_OBJECT *FunctionalBusDevice; // offset: 0x50 ordinal: 0xc
  struct _DEVICE_OBJECT *AttachedDevice;      // offset: 0x58 ordinal: 0xd
  ULONG BusNumber;                            // offset: 0x60 ordinal: 0xe
  enum _SYSTEM_POWER_STATE SystemPowerState;  // offset: 0x64 ordinal: 0xf
  enum _DEVICE_POWER_STATE DevicePowerState;  // offset: 0x68 ordinal: 0x10
} _PI_BUS_EXTENSION;

// 0x10 bytes (sizeof)
typedef struct _BUS_EXTENSION_LIST {
  VOID *Next;                             // offset: 0x0 ordinal: 0x0
  struct _PI_BUS_EXTENSION *BusExtension; // offset: 0x8 ordinal: 0x1
} _BUS_EXTENSION_LIST;

// 0x20 bytes (sizeof)
typedef struct _RTL_RANGE_LIST {
  struct _LIST_ENTRY ListHead; // offset: 0x0 ordinal: 0x0
  ULONG Flags;                 // offset: 0x10 ordinal: 0x1
  ULONG Count;                 // offset: 0x14 ordinal: 0x2
  ULONG Stamp;                 // offset: 0x18 ordinal: 0x3
} _RTL_RANGE_LIST;

// 0x4 bytes (sizeof)
typedef union __anon_1095 {
  ULONG PhysicalAddress; // offset: 0x0 ordinal: 0x0
  ULONG VirtualSize;     // offset: 0x0 ordinal: 0x1
} __anon_1095;

// 0x28 bytes (sizeof)
typedef struct _IMAGE_SECTION_HEADER {
  UCHAR Name[8];              // offset: 0x0 ordinal: 0x0
  union __anon_1095 Misc;     // offset: 0x8 ordinal: 0x1
  ULONG VirtualAddress;       // offset: 0xc ordinal: 0x2
  ULONG SizeOfRawData;        // offset: 0x10 ordinal: 0x3
  ULONG PointerToRawData;     // offset: 0x14 ordinal: 0x4
  ULONG PointerToRelocations; // offset: 0x18 ordinal: 0x5
  ULONG PointerToLinenumbers; // offset: 0x1c ordinal: 0x6
  USHORT NumberOfRelocations; // offset: 0x20 ordinal: 0x7
  USHORT NumberOfLinenumbers; // offset: 0x22 ordinal: 0x8
  ULONG Characteristics;      // offset: 0x24 ordinal: 0x9
} _IMAGE_SECTION_HEADER;

// 0x4 bytes (sizeof)
typedef struct _HEAP_STOP_ON_TAG {
  union {
    ULONG HeapAndTagIndex; // offset: 0x0 ordinal: 0x0
    USHORT TagIndex;       // offset: 0x0 ordinal: 0x1
  };
  USHORT HeapIndex; // offset: 0x2 ordinal: 0x2
} _HEAP_STOP_ON_TAG;

// 0x8 bytes (sizeof)
typedef struct __anon_1066 {
  ULONG Base;  // offset: 0x0 ordinal: 0x0
  ULONG Limit; // offset: 0x4 ordinal: 0x1
} __anon_1066;

// 0x28 bytes (sizeof)
typedef struct _SUPPORTED_RANGE {
  struct _SUPPORTED_RANGE *Next; // offset: 0x0 ordinal: 0x0
  ULONG SystemAddressSpace;      // offset: 0x8 ordinal: 0x1
  LONGLONG SystemBase;           // offset: 0x10 ordinal: 0x2
  LONGLONG Base;                 // offset: 0x18 ordinal: 0x3
  LONGLONG Limit;                // offset: 0x20 ordinal: 0x4
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
  struct __anon_1066 Range[4];      // offset: 0xc ordinal: 0x8
  UCHAR InterruptLine;              // offset: 0x2c ordinal: 0x9
  UCHAR InterruptPin;               // offset: 0x2d ordinal: 0xa
  USHORT BridgeControl;             // offset: 0x2e ordinal: 0xb
} _PCI_HEADER_TYPE_2;

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

typedef ULONG (*__anon_1052)(struct _BUS_HANDLER *, struct _BUS_HANDLER *,
                             ULONG, VOID *, ULONG, ULONG);

// 0xc0 bytes (sizeof)
typedef struct _SUPPORTED_RANGES {
  USHORT Version;                         // offset: 0x0 ordinal: 0x0
  UCHAR Sorted;                           // offset: 0x2 ordinal: 0x1
  UCHAR Reserved;                         // offset: 0x3 ordinal: 0x2
  ULONG NoIO;                             // offset: 0x4 ordinal: 0x3
  struct _SUPPORTED_RANGE IO;             // offset: 0x8 ordinal: 0x4
  ULONG NoMemory;                         // offset: 0x30 ordinal: 0x5
  struct _SUPPORTED_RANGE Memory;         // offset: 0x38 ordinal: 0x6
  ULONG NoPrefetchMemory;                 // offset: 0x60 ordinal: 0x7
  struct _SUPPORTED_RANGE PrefetchMemory; // offset: 0x68 ordinal: 0x8
  ULONG NoDma;                            // offset: 0x90 ordinal: 0x9
  struct _SUPPORTED_RANGE Dma;            // offset: 0x98 ordinal: 0xa
} _SUPPORTED_RANGES;

typedef ULONG (*__anon_1048)(VOID *, UCHAR, ULONG, VOID *, ULONG, ULONG);

// 0x4 bytes (sizeof)
typedef struct __anon_1022 {
  ULONG DeviceNumber : 5;   // offset: 0x0 ordinal: 0x0
  ULONG FunctionNumber : 3; // offset: 0x0 ordinal: 0x1
  ULONG Reserved : 24;      // offset: 0x0 ordinal: 0x2
} __anon_1022;

// 0x4 bytes (sizeof)
typedef union __anon_1013 {
  struct __anon_1022 bits; // offset: 0x0 ordinal: 0x0
  ULONG AsULONG;           // offset: 0x0 ordinal: 0x1
} __anon_1013;

// 0x4 bytes (sizeof)
typedef struct _PCI_SLOT_NUMBER {
  union __anon_1013 u; // offset: 0x0 ordinal: 0x0
} _PCI_SLOT_NUMBER;

// 0x10 bytes (sizeof)
typedef struct _UNEXPECTED_INTERRUPT {
  UCHAR PushImmOp; // offset: 0x0 ordinal: 0x0
  ULONG PushImm;   // offset: 0x1 ordinal: 0x1
  UCHAR PushRbp;   // offset: 0x5 ordinal: 0x2
  UCHAR JmpOp;     // offset: 0x6 ordinal: 0x3
  LONG JmpOffset;  // offset: 0x7 ordinal: 0x4
} _UNEXPECTED_INTERRUPT;

// 0x18 bytes (sizeof)
typedef struct _POOL_TRACKER_BIG_PAGES {
  VOID *Va;            // offset: 0x0 ordinal: 0x0
  ULONG Key;           // offset: 0x8 ordinal: 0x1
  ULONG NumberOfPages; // offset: 0xc ordinal: 0x2
  VOID *QuotaObject;   // offset: 0x10 ordinal: 0x3
} _POOL_TRACKER_BIG_PAGES;

typedef VOID (*__anon_997)(ULONG, ULONG, VOID *);

// 0x8 bytes (sizeof)
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

// 0x4 bytes (sizeof)
typedef struct __anon_951 {
  ULONG Level; // offset: 0x0 ordinal: 0x0
} __anon_951;

// 0x10 bytes (sizeof)
typedef struct _POP_ACTION_TRIGGER {
  enum POP_POLICY_DEVICE_TYPE Type; // offset: 0x0 ordinal: 0x0
  UCHAR Flags;                      // offset: 0x4 ordinal: 0x1
  UCHAR Spare[3];                   // offset: 0x5 ordinal: 0x2
  union {
    struct __anon_951 Battery;      // offset: 0x8 ordinal: 0x3
    struct _POP_TRIGGER_WAIT *Wait; // offset: 0x8 ordinal: 0x4
  };
} _POP_ACTION_TRIGGER;

// 0x38 bytes (sizeof)
typedef struct _POP_TRIGGER_WAIT {
  struct _KEVENT Event;                // offset: 0x0 ordinal: 0x0
  LONG Status;                         // offset: 0x18 ordinal: 0x1
  struct _LIST_ENTRY Link;             // offset: 0x20 ordinal: 0x2
  struct _POP_ACTION_TRIGGER *Trigger; // offset: 0x30 ordinal: 0x3
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
typedef struct _STRING32 {
  USHORT Length;        // offset: 0x0 ordinal: 0x0
  USHORT MaximumLength; // offset: 0x2 ordinal: 0x1
  ULONG Buffer;         // offset: 0x4 ordinal: 0x2
} _STRING32;

// 0x8 bytes (sizeof)
typedef struct _CLIENT_ID32 {
  ULONG UniqueProcess; // offset: 0x0 ordinal: 0x0
  ULONG UniqueThread;  // offset: 0x4 ordinal: 0x1
} _CLIENT_ID32;

// 0x1c bytes (sizeof)
typedef struct _NT_TIB32 {
  ULONG ExceptionList; // offset: 0x0 ordinal: 0x0
  ULONG StackBase;     // offset: 0x4 ordinal: 0x1
  ULONG StackLimit;    // offset: 0x8 ordinal: 0x2
  ULONG SubSystemTib;  // offset: 0xc ordinal: 0x3
  union {
    ULONG FiberData; // offset: 0x10 ordinal: 0x4
    ULONG Version;   // offset: 0x10 ordinal: 0x5
  };
  ULONG ArbitraryUserPointer; // offset: 0x14 ordinal: 0x6
  ULONG Self;                 // offset: 0x18 ordinal: 0x7
} _NT_TIB32;

// 0x10 bytes (sizeof)
typedef struct _TEB_ACTIVE_FRAME_CONTEXT {
  ULONG Flags;     // offset: 0x0 ordinal: 0x0
  CHAR *FrameName; // offset: 0x8 ordinal: 0x1
} _TEB_ACTIVE_FRAME_CONTEXT;

// 0x4 bytes (sizeof)
typedef struct _MM_SESSION_SPACE_FLAGS {
  ULONG Initialized : 1;   // offset: 0x0 ordinal: 0x0
  ULONG DeletePending : 1; // offset: 0x0 ordinal: 0x1
  ULONG Filler : 30;       // offset: 0x0 ordinal: 0x2
} _MM_SESSION_SPACE_FLAGS;

// 0x4 bytes (sizeof)
typedef union __anon_916 {
  ULONG LongFlags;                      // offset: 0x0 ordinal: 0x0
  struct _MM_SESSION_SPACE_FLAGS Flags; // offset: 0x0 ordinal: 0x1
} __anon_916;

// 0x4 bytes (sizeof)
typedef struct __anon_913 {
  ULONG BaseMiddle : 8;  // offset: 0x0 ordinal: 0x0
  ULONG Type : 5;        // offset: 0x0 ordinal: 0x1
  ULONG Dpl : 2;         // offset: 0x0 ordinal: 0x2
  ULONG Present : 1;     // offset: 0x0 ordinal: 0x3
  ULONG LimitHigh : 4;   // offset: 0x0 ordinal: 0x4
  ULONG System : 1;      // offset: 0x0 ordinal: 0x5
  ULONG LongMode : 1;    // offset: 0x0 ordinal: 0x6
  ULONG DefaultBig : 1;  // offset: 0x0 ordinal: 0x7
  ULONG Granularity : 1; // offset: 0x0 ordinal: 0x8
  ULONG BaseHigh : 8;    // offset: 0x0 ordinal: 0x9
} __anon_913;

// 0x48 bytes (sizeof)
typedef struct _PO_DEVICE_NOTIFY {
  struct _LIST_ENTRY Link;             // offset: 0x0 ordinal: 0x0
  struct _DEVICE_OBJECT *TargetDevice; // offset: 0x10 ordinal: 0x1
  UCHAR WakeNeeded;                    // offset: 0x18 ordinal: 0x2
  UCHAR OrderLevel;                    // offset: 0x19 ordinal: 0x3
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x20 ordinal: 0x4
  VOID *Node;                          // offset: 0x28 ordinal: 0x5
  USHORT *DeviceName;                  // offset: 0x30 ordinal: 0x6
  USHORT *DriverName;                  // offset: 0x38 ordinal: 0x7
  ULONG ChildCount;                    // offset: 0x40 ordinal: 0x8
  ULONG ActiveChild;                   // offset: 0x44 ordinal: 0x9
} _PO_DEVICE_NOTIFY;

// 0x10 bytes (sizeof)
typedef struct _DEVICE_RELATIONS {
  ULONG Count;                       // offset: 0x0 ordinal: 0x0
  struct _DEVICE_OBJECT *Objects[1]; // offset: 0x8 ordinal: 0x1
} _DEVICE_RELATIONS;

// 0x8 bytes (sizeof)
typedef union __anon_886 {
  struct _DEVICE_NODE *LegacyDeviceNode;            // offset: 0x0 ordinal: 0x0
  struct _DEVICE_RELATIONS *PendingDeviceRelations; // offset: 0x0 ordinal: 0x1
} __anon_886;

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

// 0x30 bytes (sizeof)
typedef struct _CM_KEY_BODY {
  ULONG Type;                                    // offset: 0x0 ordinal: 0x0
  struct _CM_KEY_CONTROL_BLOCK *KeyControlBlock; // offset: 0x8 ordinal: 0x1
  struct _CM_NOTIFY_BLOCK *NotifyBlock;          // offset: 0x10 ordinal: 0x2
  VOID *ProcessID;                               // offset: 0x18 ordinal: 0x3
  struct _LIST_ENTRY KeyBodyList;                // offset: 0x20 ordinal: 0x4
} _CM_KEY_BODY;

// 0x58 bytes (sizeof)
typedef struct _CM_NOTIFY_BLOCK {
  struct _LIST_ENTRY HiveList;                     // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY PostList;                     // offset: 0x10 ordinal: 0x1
  struct _CM_KEY_CONTROL_BLOCK *KeyControlBlock;   // offset: 0x20 ordinal: 0x2
  struct _CM_KEY_BODY *KeyBody;                    // offset: 0x28 ordinal: 0x3
  ULONG Filter : 30;                               // offset: 0x30 ordinal: 0x4
  ULONG WatchTree : 1;                             // offset: 0x30 ordinal: 0x5
  ULONG NotifyPending : 1;                         // offset: 0x30 ordinal: 0x6
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // offset: 0x38 ordinal: 0x7
} _CM_NOTIFY_BLOCK;

// 0x18 bytes (sizeof)
typedef struct _CM_NAME_HASH {
  ULONG ConvKey;                  // offset: 0x0 ordinal: 0x0
  struct _CM_NAME_HASH *NextHash; // offset: 0x8 ordinal: 0x1
  USHORT NameLength;              // offset: 0x10 ordinal: 0x2
  USHORT Name[1];                 // offset: 0x12 ordinal: 0x3
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

// 0x18 bytes (sizeof)
typedef struct CMP_OFFSET_ARRAY {
  ULONG FileOffset; // offset: 0x0 ordinal: 0x0
  VOID *DataBuffer; // offset: 0x8 ordinal: 0x1
  ULONG DataLength; // offset: 0x10 ordinal: 0x2
} CMP_OFFSET_ARRAY;

// 0x20 bytes (sizeof)
typedef struct _CM_NAME_CONTROL_BLOCK {
  UCHAR Compressed; // offset: 0x0 ordinal: 0x0
  USHORT RefCount;  // offset: 0x2 ordinal: 0x1
  union {
    struct _CM_NAME_HASH NameHash; // offset: 0x8 ordinal: 0x2
    ULONG ConvKey;                 // offset: 0x8 ordinal: 0x3
  };
  struct _CM_KEY_HASH *NextHash; // offset: 0x10 ordinal: 0x4
  USHORT NameLength;             // offset: 0x18 ordinal: 0x5
  USHORT Name[1];                // offset: 0x1a ordinal: 0x6
} _CM_NAME_CONTROL_BLOCK;

// 0x38 bytes (sizeof)
typedef struct _CM_KEY_SECURITY_CACHE {
  ULONG Cell;                                      // offset: 0x0 ordinal: 0x0
  ULONG ConvKey;                                   // offset: 0x4 ordinal: 0x1
  struct _LIST_ENTRY List;                         // offset: 0x8 ordinal: 0x2
  ULONG DescriptorLength;                          // offset: 0x18 ordinal: 0x3
  ULONG RealRefCount;                              // offset: 0x1c ordinal: 0x4
  struct _SECURITY_DESCRIPTOR_RELATIVE Descriptor; // offset: 0x20 ordinal: 0x5
} _CM_KEY_SECURITY_CACHE;

typedef VOID (*__anon_841)(VOID *, ULONG);

typedef VOID *(*__anon_840)(ULONG, UCHAR, ULONG);

// 0x8 bytes (sizeof)
typedef struct _CM_CELL_REMAP_BLOCK {
  ULONG OldCell; // offset: 0x0 ordinal: 0x0
  ULONG NewCell; // offset: 0x4 ordinal: 0x1
} _CM_CELL_REMAP_BLOCK;

// 0x10 bytes (sizeof)
typedef struct _CM_KEY_SECURITY_CACHE_ENTRY {
  ULONG Cell;                                    // offset: 0x0 ordinal: 0x0
  struct _CM_KEY_SECURITY_CACHE *CachedSecurity; // offset: 0x8 ordinal: 0x1
} _CM_KEY_SECURITY_CACHE_ENTRY;

// 0x50 bytes (sizeof)
typedef struct _DEFERRED_WRITE {
  SHORT NodeTypeCode;                    // offset: 0x0 ordinal: 0x0
  SHORT NodeByteSize;                    // offset: 0x2 ordinal: 0x1
  struct _FILE_OBJECT *FileObject;       // offset: 0x8 ordinal: 0x2
  ULONG BytesToWrite;                    // offset: 0x10 ordinal: 0x3
  struct _LIST_ENTRY DeferredWriteLinks; // offset: 0x18 ordinal: 0x4
  struct _KEVENT *Event;                 // offset: 0x28 ordinal: 0x5
  VOID (*PostRoutine)(VOID *, VOID *);   // offset: 0x30 ordinal: 0x6
  VOID *Context1;                        // offset: 0x38 ordinal: 0x7
  VOID *Context2;                        // offset: 0x40 ordinal: 0x8
  UCHAR LimitModifiedPages;              // offset: 0x48 ordinal: 0x9
} _DEFERRED_WRITE;

// 0x28 bytes (sizeof)
typedef struct _CALL_HASH_ENTRY {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 ordinal: 0x0
  VOID *CallersAddress;         // offset: 0x10 ordinal: 0x1
  VOID *CallersCaller;          // offset: 0x18 ordinal: 0x2
  ULONG CallCount;              // offset: 0x20 ordinal: 0x3
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

// 0x10 bytes (sizeof)
typedef struct __anon_1234 {
  struct _GUID BlockedDriverGuid; // offset: 0x0 ordinal: 0x0
} __anon_1234;

// 0x14 bytes (sizeof)
typedef struct __anon_1227 {
  struct _GUID ClassGuid;     // offset: 0x0 ordinal: 0x0
  USHORT SymbolicLinkName[1]; // offset: 0x10 ordinal: 0x1
} __anon_1227;

// 0x18 bytes (sizeof)
typedef union __anon_1226 {
  struct __anon_1227 DeviceClass;               // offset: 0x0 ordinal: 0x0
  struct __anon_1228 TargetDevice;              // offset: 0x0 ordinal: 0x1
  struct __anon_1229 InstallDevice;             // offset: 0x0 ordinal: 0x2
  struct __anon_1230 CustomNotification;        // offset: 0x0 ordinal: 0x3
  struct __anon_1231 ProfileNotification;       // offset: 0x0 ordinal: 0x4
  struct __anon_1232 PowerNotification;         // offset: 0x0 ordinal: 0x5
  struct __anon_1233 VetoNotification;          // offset: 0x0 ordinal: 0x6
  struct __anon_1234 BlockedDriverNotification; // offset: 0x0 ordinal: 0x7
  struct __anon_1235 InvalidIDNotification;     // offset: 0x0 ordinal: 0x8
} __anon_1226;

// 0x10 bytes (sizeof)
typedef struct __anon_1213 {
  struct _GUID DiskId; // offset: 0x0 ordinal: 0x0
} __anon_1213;

// 0x10 bytes (sizeof)
typedef union __anon_1206 {
  struct __anon_1212 Mbr; // offset: 0x0 ordinal: 0x0
  struct __anon_1213 Gpt; // offset: 0x0 ordinal: 0x1
} __anon_1206;

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

// 0x98 bytes (sizeof)
typedef struct _LDR_DATA_TABLE_ENTRY {
  struct _LIST_ENTRY InLoadOrderLinks;           // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY InMemoryOrderLinks;         // offset: 0x10 ordinal: 0x1
  struct _LIST_ENTRY InInitializationOrderLinks; // offset: 0x20 ordinal: 0x2
  VOID *DllBase;                                 // offset: 0x30 ordinal: 0x3
  VOID *EntryPoint;                              // offset: 0x38 ordinal: 0x4
  ULONG SizeOfImage;                             // offset: 0x40 ordinal: 0x5
  struct _UNICODE_STRING FullDllName;            // offset: 0x48 ordinal: 0x6
  struct _UNICODE_STRING BaseDllName;            // offset: 0x58 ordinal: 0x7
  ULONG Flags;                                   // offset: 0x68 ordinal: 0x8
  USHORT LoadCount;                              // offset: 0x6c ordinal: 0x9
  USHORT TlsIndex;                               // offset: 0x6e ordinal: 0xa
  union {
    struct _LIST_ENTRY HashLinks; // offset: 0x70 ordinal: 0xb
    VOID *SectionPointer;         // offset: 0x70 ordinal: 0xc
  };
  ULONG CheckSum; // offset: 0x78 ordinal: 0xd
  union {
    ULONG TimeDateStamp; // offset: 0x80 ordinal: 0xe
    VOID *LoadedImports; // offset: 0x80 ordinal: 0xf
  };
  struct _ACTIVATION_CONTEXT
      *EntryPointActivationContext; // offset: 0x88 ordinal: 0x10
  VOID *PatchInformation;           // offset: 0x90 ordinal: 0x11
} _LDR_DATA_TABLE_ENTRY;

// 0x10 bytes (sizeof)
typedef struct _POOL_HEADER {
  ULONG PreviousSize : 8; // offset: 0x0 ordinal: 0x0
  ULONG PoolIndex : 8;    // offset: 0x0 ordinal: 0x1
  ULONG BlockSize : 8;    // offset: 0x0 ordinal: 0x2
  ULONG PoolType : 8;     // offset: 0x0 ordinal: 0x3
  ULONG Ulong1;           // offset: 0x0 ordinal: 0x4
  ULONG PoolTag;          // offset: 0x4 ordinal: 0x5
  union {
    struct _EPROCESS *ProcessBilled; // offset: 0x8 ordinal: 0x6
    USHORT AllocatorBackTraceIndex;  // offset: 0x8 ordinal: 0x7
  };
  USHORT PoolTagHash; // offset: 0xa ordinal: 0x8
} _POOL_HEADER;

// 0x20 bytes (sizeof)
typedef struct _POOL_BLOCK_HEAD {
  struct _POOL_HEADER Header; // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY List;    // offset: 0x10 ordinal: 0x1
} _POOL_BLOCK_HEAD;

// 0x18 bytes (sizeof)
typedef struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME {
  struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME
      *Previous;                                 // offset: 0x0 ordinal: 0x0
  struct _ACTIVATION_CONTEXT *ActivationContext; // offset: 0x8 ordinal: 0x1
  ULONG Flags;                                   // offset: 0x10 ordinal: 0x2
} _RTL_ACTIVATION_CONTEXT_STACK_FRAME;

// 0x18 bytes (sizeof)
typedef struct _TEB_ACTIVE_FRAME {
  ULONG Flags;                               // offset: 0x0 ordinal: 0x0
  struct _TEB_ACTIVE_FRAME *Previous;        // offset: 0x8 ordinal: 0x1
  struct _TEB_ACTIVE_FRAME_CONTEXT *Context; // offset: 0x10 ordinal: 0x2
} _TEB_ACTIVE_FRAME;

// 0x4e0 bytes (sizeof)
typedef struct _GDI_TEB_BATCH32 {
  ULONG Offset;      // offset: 0x0 ordinal: 0x0
  ULONG HDC;         // offset: 0x4 ordinal: 0x1
  ULONG Buffer[310]; // offset: 0x8 ordinal: 0x2
} _GDI_TEB_BATCH32;

// 0x28 bytes (sizeof)
typedef struct _ACTIVATION_CONTEXT_STACK {
  struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME
      *ActiveFrame;                  // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY FrameListCache; // offset: 0x8 ordinal: 0x1
  ULONG Flags;                       // offset: 0x18 ordinal: 0x2
  ULONG NextCookieSequenceNumber;    // offset: 0x1c ordinal: 0x3
  ULONG StackId;                     // offset: 0x20 ordinal: 0x4
} _ACTIVATION_CONTEXT_STACK;

// 0x38 bytes (sizeof)
typedef struct _NT_TIB {
  struct _EXCEPTION_REGISTRATION_RECORD
      *ExceptionList; // offset: 0x0 ordinal: 0x0
  VOID *StackBase;    // offset: 0x8 ordinal: 0x1
  VOID *StackLimit;   // offset: 0x10 ordinal: 0x2
  VOID *SubSystemTib; // offset: 0x18 ordinal: 0x3
  union {
    VOID *FiberData; // offset: 0x20 ordinal: 0x4
    ULONG Version;   // offset: 0x20 ordinal: 0x5
  };
  VOID *ArbitraryUserPointer; // offset: 0x28 ordinal: 0x6
  struct _NT_TIB *Self;       // offset: 0x30 ordinal: 0x7
} _NT_TIB;

// 0xc bytes (sizeof)
typedef struct _SECURITY_TOKEN_AUDIT_DATA {
  ULONG Length;    // offset: 0x0 ordinal: 0x0
  ULONG GrantMask; // offset: 0x4 ordinal: 0x1
  ULONG DenyMask;  // offset: 0x8 ordinal: 0x2
} _SECURITY_TOKEN_AUDIT_DATA;

// 0x20 bytes (sizeof)
typedef struct _SECURITY_TOKEN_PROXY_DATA {
  ULONG Length;                    // offset: 0x0 ordinal: 0x0
  enum _PROXY_CLASS ProxyClass;    // offset: 0x4 ordinal: 0x1
  struct _UNICODE_STRING PathInfo; // offset: 0x8 ordinal: 0x2
  ULONG ContainerMask;             // offset: 0x18 ordinal: 0x3
  ULONG ObjectMask;                // offset: 0x1c ordinal: 0x4
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

// 0x4 bytes (sizeof)
typedef struct _DBGKD_SWITCH_PARTITION {
  ULONG Partition; // offset: 0x0 ordinal: 0x0
} _DBGKD_SWITCH_PARTITION;

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

// 0x4 bytes (sizeof)
typedef union __anon_591 {
  ULONG LongFlags;                            // offset: 0x0 ordinal: 0x0
  struct _MMSUBSECTION_FLAGS SubsectionFlags; // offset: 0x0 ordinal: 0x1
} __anon_591;

// 0xa8 bytes (sizeof)
typedef struct _MMPTE_FLUSH_LIST {
  ULONG Count;       // offset: 0x0 ordinal: 0x0
  VOID *FlushVa[20]; // offset: 0x8 ordinal: 0x1
} _MMPTE_FLUSH_LIST;

// 0x30 bytes (sizeof)
typedef struct _EVENT_COUNTER {
  struct _SLIST_ENTRY ListEntry; // offset: 0x0 ordinal: 0x0
  ULONG RefCount;                // offset: 0x10 ordinal: 0x1
  struct _KEVENT Event;          // offset: 0x18 ordinal: 0x2
} _EVENT_COUNTER;

// 0x4 bytes (sizeof)
typedef union __anon_575 {
  ULONG LongFlags;               // offset: 0x0 ordinal: 0x0
  struct _MMSECTION_FLAGS Flags; // offset: 0x0 ordinal: 0x1
} __anon_575;

// 0x4 bytes (sizeof)
typedef union __anon_570 {
  ULONG LongFlags2;               // offset: 0x0 ordinal: 0x0
  struct _MMVAD_FLAGS2 VadFlags2; // offset: 0x0 ordinal: 0x1
} __anon_570;

// 0x30 bytes (sizeof)
typedef struct _POOL_HACKER {
  struct _POOL_HEADER Header; // offset: 0x0 ordinal: 0x0
  ULONG Contents[8];          // offset: 0x10 ordinal: 0x1
} _POOL_HACKER;

// 0x20 bytes (sizeof)
typedef struct _PERFINFO_GROUPMASK {
  ULONG Masks[8]; // offset: 0x0 ordinal: 0x0
} _PERFINFO_GROUPMASK;

// 0x8 bytes (sizeof)
typedef struct _OBJECT_HANDLE_INFORMATION {
  ULONG HandleAttributes; // offset: 0x0 ordinal: 0x0
  ULONG GrantedAccess;    // offset: 0x4 ordinal: 0x1
} _OBJECT_HANDLE_INFORMATION;

// 0x30 bytes (sizeof)
typedef struct _OBJECT_ATTRIBUTES {
  ULONG Length;                       // offset: 0x0 ordinal: 0x0
  VOID *RootDirectory;                // offset: 0x8 ordinal: 0x1
  struct _UNICODE_STRING *ObjectName; // offset: 0x10 ordinal: 0x2
  ULONG Attributes;                   // offset: 0x18 ordinal: 0x3
  VOID *SecurityDescriptor;           // offset: 0x20 ordinal: 0x4
  VOID *SecurityQualityOfService;     // offset: 0x28 ordinal: 0x5
} _OBJECT_ATTRIBUTES;

// 0x18 bytes (sizeof)
typedef struct _OBJECT_DIRECTORY_ENTRY {
  struct _OBJECT_DIRECTORY_ENTRY *ChainLink; // offset: 0x0 ordinal: 0x0
  VOID *Object;                              // offset: 0x8 ordinal: 0x1
  ULONG HashValue;                           // offset: 0x10 ordinal: 0x2
} _OBJECT_DIRECTORY_ENTRY;

// 0x10 bytes (sizeof)
typedef struct _OBJECT_HANDLE_COUNT_ENTRY {
  struct _EPROCESS *Process; // offset: 0x0 ordinal: 0x0
  ULONG HandleCount;         // offset: 0x8 ordinal: 0x1
} _OBJECT_HANDLE_COUNT_ENTRY;

// 0x18 bytes (sizeof)
typedef struct _OBJECT_HANDLE_COUNT_DATABASE {
  ULONG CountEntries; // offset: 0x0 ordinal: 0x0
  struct _OBJECT_HANDLE_COUNT_ENTRY
      HandleCountEntries[1]; // offset: 0x8 ordinal: 0x1
} _OBJECT_HANDLE_COUNT_DATABASE;

// 0x10 bytes (sizeof)
typedef struct _OBJECT_HEADER_HANDLE_INFO {
  union {
    struct _OBJECT_HANDLE_COUNT_DATABASE
        *HandleCountDataBase;                      // offset: 0x0 ordinal: 0x0
    struct _OBJECT_HANDLE_COUNT_ENTRY SingleEntry; // offset: 0x0 ordinal: 0x1
  };
} _OBJECT_HEADER_HANDLE_INFO;

// 0x10 bytes (sizeof)
typedef struct _OBJECT_DUMP_CONTROL {
  VOID *Stream; // offset: 0x0 ordinal: 0x0
  ULONG Detail; // offset: 0x8 ordinal: 0x1
} _OBJECT_DUMP_CONTROL;

typedef VOID (*__anon_516)(VOID *, struct _OBJECT_DUMP_CONTROL *);

typedef LONG (*__anon_517)(enum _OB_OPEN_REASON, struct _EPROCESS *, VOID *,
                           ULONG, ULONG);

// 0x10 bytes (sizeof)
typedef struct _GENERIC_MAPPING {
  ULONG GenericRead;    // offset: 0x0 ordinal: 0x0
  ULONG GenericWrite;   // offset: 0x4 ordinal: 0x1
  ULONG GenericExecute; // offset: 0x8 ordinal: 0x2
  ULONG GenericAll;     // offset: 0xc ordinal: 0x3
} _GENERIC_MAPPING;

// 0xc bytes (sizeof)
typedef struct __anon_500 {
  ULONG DataSize;  // offset: 0x0 ordinal: 0x0
  ULONG Reserved1; // offset: 0x4 ordinal: 0x1
  ULONG Reserved2; // offset: 0x8 ordinal: 0x2
} __anon_500;

// 0xc bytes (sizeof)
typedef struct __anon_499 {
  ULONG Start;    // offset: 0x0 ordinal: 0x0
  ULONG Length;   // offset: 0x4 ordinal: 0x1
  ULONG Reserved; // offset: 0x8 ordinal: 0x2
} __anon_499;

// 0xc bytes (sizeof)
typedef struct __anon_498 {
  ULONG Channel;   // offset: 0x0 ordinal: 0x0
  ULONG Port;      // offset: 0x4 ordinal: 0x1
  ULONG Reserved1; // offset: 0x8 ordinal: 0x2
} __anon_498;

// 0xc bytes (sizeof)
typedef struct __anon_494 {
  ULONG Priority;  // offset: 0x0 ordinal: 0x0
  ULONG Reserved1; // offset: 0x4 ordinal: 0x1
  ULONG Reserved2; // offset: 0x8 ordinal: 0x2
} __anon_494;

// 0x10 bytes (sizeof)
typedef struct __anon_493 {
  ULONG Length;       // offset: 0x0 ordinal: 0x0
  ULONG MinBusNumber; // offset: 0x4 ordinal: 0x1
  ULONG MaxBusNumber; // offset: 0x8 ordinal: 0x2
  ULONG Reserved;     // offset: 0xc ordinal: 0x3
} __anon_493;

// 0x8 bytes (sizeof)
typedef struct __anon_491 {
  ULONG MinimumChannel; // offset: 0x0 ordinal: 0x0
  ULONG MaximumChannel; // offset: 0x4 ordinal: 0x1
} __anon_491;

// 0x8 bytes (sizeof)
typedef struct __anon_490 {
  ULONG MinimumVector; // offset: 0x0 ordinal: 0x0
  ULONG MaximumVector; // offset: 0x4 ordinal: 0x1
} __anon_490;

// 0xc bytes (sizeof)
typedef struct _SECURITY_QUALITY_OF_SERVICE {
  ULONG Length; // offset: 0x0 ordinal: 0x0
  enum _SECURITY_IMPERSONATION_LEVEL
      ImpersonationLevel;    // offset: 0x4 ordinal: 0x1
  UCHAR ContextTrackingMode; // offset: 0x8 ordinal: 0x2
  UCHAR EffectiveOnly;       // offset: 0x9 ordinal: 0x3
} _SECURITY_QUALITY_OF_SERVICE;

// 0x48 bytes (sizeof)
typedef struct _OBJECT_CREATE_INFORMATION {
  ULONG Attributes;                                 // offset: 0x0 ordinal: 0x0
  VOID *RootDirectory;                              // offset: 0x8 ordinal: 0x1
  VOID *ParseContext;                               // offset: 0x10 ordinal: 0x2
  CHAR ProbeMode;                                   // offset: 0x18 ordinal: 0x3
  ULONG PagedPoolCharge;                            // offset: 0x1c ordinal: 0x4
  ULONG NonPagedPoolCharge;                         // offset: 0x20 ordinal: 0x5
  ULONG SecurityDescriptorCharge;                   // offset: 0x24 ordinal: 0x6
  VOID *SecurityDescriptor;                         // offset: 0x28 ordinal: 0x7
  struct _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // offset: 0x30 ordinal: 0x8
  struct _SECURITY_QUALITY_OF_SERVICE
      SecurityQualityOfService; // offset: 0x38 ordinal: 0x9
} _OBJECT_CREATE_INFORMATION;

// 0x8 bytes (sizeof)
typedef struct __anon_468 {
  enum _FS_FILTER_SECTION_SYNC_TYPE SyncType; // offset: 0x0 ordinal: 0x0
  ULONG PageProtection;                       // offset: 0x4 ordinal: 0x1
} __anon_468;

// 0xc bytes (sizeof)
typedef struct _POWER_SEQUENCE {
  ULONG SequenceD1; // offset: 0x0 ordinal: 0x0
  ULONG SequenceD2; // offset: 0x4 ordinal: 0x1
  ULONG SequenceD3; // offset: 0x8 ordinal: 0x2
} _POWER_SEQUENCE;

// 0x8 bytes (sizeof)
typedef struct __anon_415 {
  struct _POWER_SEQUENCE *PowerSequence; // offset: 0x0 ordinal: 0x0
} __anon_415;

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

// 0x8 bytes (sizeof)
typedef struct __anon_407 {
  struct _DEVICE_CAPABILITIES *Capabilities; // offset: 0x0 ordinal: 0x0
} __anon_407;

// 0x20 bytes (sizeof)
typedef struct __anon_406 {
  struct _GUID *InterfaceType;  // offset: 0x0 ordinal: 0x0
  USHORT Size;                  // offset: 0x8 ordinal: 0x1
  USHORT Version;               // offset: 0xa ordinal: 0x2
  struct _INTERFACE *Interface; // offset: 0x10 ordinal: 0x3
  VOID *InterfaceSpecificData;  // offset: 0x18 ordinal: 0x4
} __anon_406;

// 0x20 bytes (sizeof)
typedef struct __anon_416 {
  ULONG SystemContext;            // offset: 0x0 ordinal: 0x0
  enum _POWER_STATE_TYPE Type;    // offset: 0x8 ordinal: 0x1
  union _POWER_STATE State;       // offset: 0x10 ordinal: 0x2
  enum POWER_ACTION ShutdownType; // offset: 0x18 ordinal: 0x3
} __anon_416;

// 0x10 bytes (sizeof)
typedef struct __anon_412 {
  enum DEVICE_TEXT_TYPE DeviceTextType; // offset: 0x0 ordinal: 0x0
  ULONG LocaleId;                       // offset: 0x8 ordinal: 0x1
} __anon_412;

// 0x20 bytes (sizeof)
typedef struct __anon_409 {
  ULONG WhichSpace; // offset: 0x0 ordinal: 0x0
  VOID *Buffer;     // offset: 0x8 ordinal: 0x1
  ULONG Offset;     // offset: 0x10 ordinal: 0x2
  ULONG Length;     // offset: 0x18 ordinal: 0x3
} __anon_409;

// 0x10 bytes (sizeof)
typedef struct __anon_401 {
  ULONG SecurityInformation; // offset: 0x0 ordinal: 0x0
  VOID *SecurityDescriptor;  // offset: 0x8 ordinal: 0x1
} __anon_401;

// 0x10 bytes (sizeof)
typedef struct __anon_400 {
  ULONG SecurityInformation; // offset: 0x0 ordinal: 0x0
  ULONG Length;              // offset: 0x8 ordinal: 0x1
} __anon_400;

// 0x20 bytes (sizeof)
typedef struct __anon_399 {
  ULONG OutputBufferLength; // offset: 0x0 ordinal: 0x0
  ULONG InputBufferLength;  // offset: 0x8 ordinal: 0x1
  ULONG IoControlCode;      // offset: 0x10 ordinal: 0x2
  VOID *Type3InputBuffer;   // offset: 0x18 ordinal: 0x3
} __anon_399;

// 0x20 bytes (sizeof)
typedef struct __anon_397 {
  ULONG OutputBufferLength; // offset: 0x0 ordinal: 0x0
  ULONG InputBufferLength;  // offset: 0x8 ordinal: 0x1
  ULONG FsControlCode;      // offset: 0x10 ordinal: 0x2
  VOID *Type3InputBuffer;   // offset: 0x18 ordinal: 0x3
} __anon_397;

// 0x10 bytes (sizeof)
typedef struct __anon_396 {
  ULONG Length;                         // offset: 0x0 ordinal: 0x0
  enum _FSINFOCLASS FsInformationClass; // offset: 0x8 ordinal: 0x1
} __anon_396;

// 0x4 bytes (sizeof)
typedef struct __anon_395 {
  ULONG Length; // offset: 0x0 ordinal: 0x0
} __anon_395;

// 0x20 bytes (sizeof)
typedef struct __anon_394 {
  ULONG Length;       // offset: 0x0 ordinal: 0x0
  VOID *EaList;       // offset: 0x8 ordinal: 0x1
  ULONG EaListLength; // offset: 0x10 ordinal: 0x2
  ULONG EaIndex;      // offset: 0x18 ordinal: 0x3
} __anon_394;

// 0x20 bytes (sizeof)
typedef struct __anon_393 {
  ULONG Length;                                      // offset: 0x0 ordinal: 0x0
  enum _FILE_INFORMATION_CLASS FileInformationClass; // offset: 0x8 ordinal: 0x1
  struct _FILE_OBJECT *FileObject; // offset: 0x10 ordinal: 0x2
  UCHAR ReplaceIfExists;           // offset: 0x18 ordinal: 0x3
  UCHAR AdvanceOnly;               // offset: 0x19 ordinal: 0x4
  union {
    ULONG ClusterCount; // offset: 0x18 ordinal: 0x5
    VOID *DeleteHandle; // offset: 0x18 ordinal: 0x6
  };
} __anon_393;

// 0x10 bytes (sizeof)
typedef struct __anon_392 {
  ULONG Length;                                      // offset: 0x0 ordinal: 0x0
  enum _FILE_INFORMATION_CLASS FileInformationClass; // offset: 0x8 ordinal: 0x1
} __anon_392;

// 0x10 bytes (sizeof)
typedef struct __anon_391 {
  ULONG Length;           // offset: 0x0 ordinal: 0x0
  ULONG CompletionFilter; // offset: 0x8 ordinal: 0x1
} __anon_391;

// 0x20 bytes (sizeof)
typedef struct __anon_390 {
  ULONG Length;                     // offset: 0x0 ordinal: 0x0
  struct _UNICODE_STRING *FileName; // offset: 0x8 ordinal: 0x1
  enum _FILE_INFORMATION_CLASS
      FileInformationClass; // offset: 0x10 ordinal: 0x2
  ULONG FileIndex;          // offset: 0x18 ordinal: 0x3
} __anon_390;

// 0x18 bytes (sizeof)
typedef struct _RTL_DRIVE_LETTER_CURDIR {
  USHORT Flags;           // offset: 0x0 ordinal: 0x0
  USHORT Length;          // offset: 0x2 ordinal: 0x1
  ULONG TimeStamp;        // offset: 0x4 ordinal: 0x2
  struct _STRING DosPath; // offset: 0x8 ordinal: 0x3
} _RTL_DRIVE_LETTER_CURDIR;

// 0x10 bytes (sizeof)
typedef struct _SID_AND_ATTRIBUTES {
  VOID *Sid;        // offset: 0x0 ordinal: 0x0
  ULONG Attributes; // offset: 0x8 ordinal: 0x1
} _SID_AND_ATTRIBUTES;

// 0xa0 bytes (sizeof)
typedef struct _HANDLE_TRACE_DB_ENTRY {
  struct _CLIENT_ID ClientId; // offset: 0x0 ordinal: 0x0
  VOID *Handle;               // offset: 0x10 ordinal: 0x1
  ULONG Type;                 // offset: 0x18 ordinal: 0x2
  VOID *StackTrace[16];       // offset: 0x20 ordinal: 0x3
} _HANDLE_TRACE_DB_ENTRY;

// 0x10 bytes (sizeof)
typedef struct _MMWSLE_HASH {
  VOID *Key;   // offset: 0x0 ordinal: 0x0
  ULONG Index; // offset: 0x8 ordinal: 0x1
} _MMWSLE_HASH;

// 0x20 bytes (sizeof)
typedef struct _POWER_CHANNEL_SUMMARY {
  ULONG Signature;               // offset: 0x0 ordinal: 0x0
  ULONG TotalCount;              // offset: 0x4 ordinal: 0x1
  ULONG D0Count;                 // offset: 0x8 ordinal: 0x2
  struct _LIST_ENTRY NotifyList; // offset: 0x10 ordinal: 0x3
} _POWER_CHANNEL_SUMMARY;

// 0x10 bytes (sizeof)
typedef struct _PEB_FREE_BLOCK {
  struct _PEB_FREE_BLOCK *Next; // offset: 0x0 ordinal: 0x0
  ULONG Size;                   // offset: 0x8 ordinal: 0x1
} _PEB_FREE_BLOCK;

// 0x3f0 bytes (sizeof)
typedef struct _RTL_USER_PROCESS_PARAMETERS {
  ULONG MaximumLength;                  // offset: 0x0 ordinal: 0x0
  ULONG Length;                         // offset: 0x4 ordinal: 0x1
  ULONG Flags;                          // offset: 0x8 ordinal: 0x2
  ULONG DebugFlags;                     // offset: 0xc ordinal: 0x3
  VOID *ConsoleHandle;                  // offset: 0x10 ordinal: 0x4
  ULONG ConsoleFlags;                   // offset: 0x18 ordinal: 0x5
  VOID *StandardInput;                  // offset: 0x20 ordinal: 0x6
  VOID *StandardOutput;                 // offset: 0x28 ordinal: 0x7
  VOID *StandardError;                  // offset: 0x30 ordinal: 0x8
  struct _CURDIR CurrentDirectory;      // offset: 0x38 ordinal: 0x9
  struct _UNICODE_STRING DllPath;       // offset: 0x50 ordinal: 0xa
  struct _UNICODE_STRING ImagePathName; // offset: 0x60 ordinal: 0xb
  struct _UNICODE_STRING CommandLine;   // offset: 0x70 ordinal: 0xc
  VOID *Environment;                    // offset: 0x80 ordinal: 0xd
  ULONG StartingX;                      // offset: 0x88 ordinal: 0xe
  ULONG StartingY;                      // offset: 0x8c ordinal: 0xf
  ULONG CountX;                         // offset: 0x90 ordinal: 0x10
  ULONG CountY;                         // offset: 0x94 ordinal: 0x11
  ULONG CountCharsX;                    // offset: 0x98 ordinal: 0x12
  ULONG CountCharsY;                    // offset: 0x9c ordinal: 0x13
  ULONG FillAttribute;                  // offset: 0xa0 ordinal: 0x14
  ULONG WindowFlags;                    // offset: 0xa4 ordinal: 0x15
  ULONG ShowWindowFlags;                // offset: 0xa8 ordinal: 0x16
  struct _UNICODE_STRING WindowTitle;   // offset: 0xb0 ordinal: 0x17
  struct _UNICODE_STRING DesktopInfo;   // offset: 0xc0 ordinal: 0x18
  struct _UNICODE_STRING ShellInfo;     // offset: 0xd0 ordinal: 0x19
  struct _UNICODE_STRING RuntimeData;   // offset: 0xe0 ordinal: 0x1a
  struct _RTL_DRIVE_LETTER_CURDIR
      CurrentDirectores[32]; // offset: 0xf0 ordinal: 0x1b
} _RTL_USER_PROCESS_PARAMETERS;

// 0x48 bytes (sizeof)
typedef struct _PEB_LDR_DATA {
  ULONG Length;                               // offset: 0x0 ordinal: 0x0
  UCHAR Initialized;                          // offset: 0x4 ordinal: 0x1
  VOID *SsHandle;                             // offset: 0x8 ordinal: 0x2
  struct _LIST_ENTRY InLoadOrderModuleList;   // offset: 0x10 ordinal: 0x3
  struct _LIST_ENTRY InMemoryOrderModuleList; // offset: 0x20 ordinal: 0x4
  struct _LIST_ENTRY
      InInitializationOrderModuleList; // offset: 0x30 ordinal: 0x5
  VOID *EntryInProgress;               // offset: 0x40 ordinal: 0x6
} _PEB_LDR_DATA;

// 0x80 bytes (sizeof)
typedef struct _DEVICE_OBJECT_POWER_EXTENSION {
  LONG IdleCount;                      // offset: 0x0 ordinal: 0x0
  ULONG ConservationIdleTime;          // offset: 0x4 ordinal: 0x1
  ULONG PerformanceIdleTime;           // offset: 0x8 ordinal: 0x2
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x10 ordinal: 0x3
  struct _LIST_ENTRY IdleList;         // offset: 0x18 ordinal: 0x4
  UCHAR DeviceType;                    // offset: 0x28 ordinal: 0x5
  enum _DEVICE_POWER_STATE State;      // offset: 0x2c ordinal: 0x6
  struct _LIST_ENTRY NotifySourceList; // offset: 0x30 ordinal: 0x7
  struct _LIST_ENTRY NotifyTargetList; // offset: 0x40 ordinal: 0x8
  struct _POWER_CHANNEL_SUMMARY
      PowerChannelSummary;   // offset: 0x50 ordinal: 0x9
  struct _LIST_ENTRY Volume; // offset: 0x70 ordinal: 0xa
} _DEVICE_OBJECT_POWER_EXTENSION;

// 0x30 bytes (sizeof)
typedef struct _MDL {
  struct _MDL *Next;         // offset: 0x0 ordinal: 0x0
  SHORT Size;                // offset: 0x8 ordinal: 0x1
  SHORT MdlFlags;            // offset: 0xa ordinal: 0x2
  struct _EPROCESS *Process; // offset: 0x10 ordinal: 0x3
  VOID *MappedSystemVa;      // offset: 0x18 ordinal: 0x4
  VOID *StartVa;             // offset: 0x20 ordinal: 0x5
  ULONG ByteCount;           // offset: 0x28 ordinal: 0x6
  ULONG ByteOffset;          // offset: 0x2c ordinal: 0x7
} _MDL;

// 0x18 bytes (sizeof)
typedef struct _KDEVICE_QUEUE_ENTRY {
  struct _LIST_ENTRY DeviceListEntry; // offset: 0x0 ordinal: 0x0
  ULONG SortKey;                      // offset: 0x10 ordinal: 0x1
  UCHAR Inserted;                     // offset: 0x14 ordinal: 0x2
} _KDEVICE_QUEUE_ENTRY;

// 0x60 bytes (sizeof)
typedef struct _VPB {
  SHORT Type;                          // offset: 0x0 ordinal: 0x0
  SHORT Size;                          // offset: 0x2 ordinal: 0x1
  USHORT Flags;                        // offset: 0x4 ordinal: 0x2
  USHORT VolumeLabelLength;            // offset: 0x6 ordinal: 0x3
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x8 ordinal: 0x4
  struct _DEVICE_OBJECT *RealDevice;   // offset: 0x10 ordinal: 0x5
  ULONG SerialNumber;                  // offset: 0x18 ordinal: 0x6
  ULONG ReferenceCount;                // offset: 0x1c ordinal: 0x7
  USHORT VolumeLabel[32];              // offset: 0x20 ordinal: 0x8
} _VPB;

// 0x10 bytes (sizeof)
typedef struct __anon_402 {
  struct _VPB *Vpb;                    // offset: 0x0 ordinal: 0x0
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x8 ordinal: 0x1
} __anon_402;

// 0x50 bytes (sizeof)
typedef struct _DEVOBJ_EXTENSION {
  SHORT Type;                                  // offset: 0x0 ordinal: 0x0
  USHORT Size;                                 // offset: 0x2 ordinal: 0x1
  struct _DEVICE_OBJECT *DeviceObject;         // offset: 0x8 ordinal: 0x2
  ULONG PowerFlags;                            // offset: 0x10 ordinal: 0x3
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // offset: 0x18 ordinal: 0x4
  ULONG ExtensionFlags;                        // offset: 0x20 ordinal: 0x5
  VOID *DeviceNode;                            // offset: 0x28 ordinal: 0x6
  struct _DEVICE_OBJECT *AttachedTo;           // offset: 0x30 ordinal: 0x7
  LONG StartIoCount;                           // offset: 0x38 ordinal: 0x8
  LONG StartIoKey;                             // offset: 0x3c ordinal: 0x9
  ULONG StartIoFlags;                          // offset: 0x40 ordinal: 0xa
  struct _VPB *Vpb;                            // offset: 0x48 ordinal: 0xb
} _DEVOBJ_EXTENSION;

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

// 0x30 bytes (sizeof)
typedef union __anon_1045 {
  struct _PCI_HEADER_TYPE_0 type0; // offset: 0x0 ordinal: 0x0
  struct _PCI_HEADER_TYPE_1 type1; // offset: 0x0 ordinal: 0x1
  struct _PCI_HEADER_TYPE_2 type2; // offset: 0x0 ordinal: 0x2
} __anon_1045;

// 0x100 bytes (sizeof)
typedef struct _PCI_COMMON_CONFIG {
  USHORT VendorID;           // offset: 0x0 ordinal: 0x0
  USHORT DeviceID;           // offset: 0x2 ordinal: 0x1
  USHORT Command;            // offset: 0x4 ordinal: 0x2
  USHORT Status;             // offset: 0x6 ordinal: 0x3
  UCHAR RevisionID;          // offset: 0x8 ordinal: 0x4
  UCHAR ProgIf;              // offset: 0x9 ordinal: 0x5
  UCHAR SubClass;            // offset: 0xa ordinal: 0x6
  UCHAR BaseClass;           // offset: 0xb ordinal: 0x7
  UCHAR CacheLineSize;       // offset: 0xc ordinal: 0x8
  UCHAR LatencyTimer;        // offset: 0xd ordinal: 0x9
  UCHAR HeaderType;          // offset: 0xe ordinal: 0xa
  UCHAR BIST;                // offset: 0xf ordinal: 0xb
  union __anon_1045 u;       // offset: 0x10 ordinal: 0xc
  UCHAR DeviceSpecific[192]; // offset: 0x40 ordinal: 0xd
} _PCI_COMMON_CONFIG;

typedef VOID (*__anon_1050)(VOID *, struct _PCI_COMMON_CONFIG *,
                            struct _PCI_COMMON_CONFIG *);

typedef VOID (*__anon_1049)(VOID *, struct _PCI_COMMON_CONFIG *);

// 0x40 bytes (sizeof)
typedef struct _PCI_BUS_INTERFACE_STANDARD {
  USHORT Size;                          // offset: 0x0 ordinal: 0x0
  USHORT Version;                       // offset: 0x2 ordinal: 0x1
  VOID *Context;                        // offset: 0x8 ordinal: 0x2
  VOID (*InterfaceReference)(VOID *);   // offset: 0x10 ordinal: 0x3
  VOID (*InterfaceDereference)(VOID *); // offset: 0x18 ordinal: 0x4
  ULONG(*ReadConfig)
  (VOID *, UCHAR, ULONG, VOID *, ULONG, ULONG); // offset: 0x20 ordinal: 0x5
  ULONG(*WriteConfig)
  (VOID *, UCHAR, ULONG, VOID *, ULONG, ULONG); // offset: 0x28 ordinal: 0x6
  VOID(*PinToLine)
  (VOID *, struct _PCI_COMMON_CONFIG *); // offset: 0x30 ordinal: 0x7
  VOID(*LineToPin)
  (VOID *, struct _PCI_COMMON_CONFIG *,
   struct _PCI_COMMON_CONFIG *); // offset: 0x38 ordinal: 0x8
} _PCI_BUS_INTERFACE_STANDARD;

// 0x30 bytes (sizeof)
typedef struct _RTL_HANDLE_TABLE {
  ULONG MaximumNumberOfHandles;                     // offset: 0x0 ordinal: 0x0
  ULONG SizeOfHandleTableEntry;                     // offset: 0x4 ordinal: 0x1
  ULONG Reserved[2];                                // offset: 0x8 ordinal: 0x2
  struct _RTL_HANDLE_TABLE_ENTRY *FreeHandles;      // offset: 0x10 ordinal: 0x3
  struct _RTL_HANDLE_TABLE_ENTRY *CommittedHandles; // offset: 0x18 ordinal: 0x4
  struct _RTL_HANDLE_TABLE_ENTRY
      *UnCommittedHandles; // offset: 0x20 ordinal: 0x5
  struct _RTL_HANDLE_TABLE_ENTRY
      *MaxReservedHandles; // offset: 0x28 ordinal: 0x6
} _RTL_HANDLE_TABLE;

// 0x40 bytes (sizeof)
typedef struct _KQUEUE {
  struct _DISPATCHER_HEADER Header;  // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY EntryListHead;  // offset: 0x18 ordinal: 0x1
  ULONG CurrentCount;                // offset: 0x28 ordinal: 0x2
  ULONG MaximumCount;                // offset: 0x2c ordinal: 0x3
  struct _LIST_ENTRY ThreadListHead; // offset: 0x30 ordinal: 0x4
} _KQUEUE;

// 0x58 bytes (sizeof)
typedef struct _EX_WORK_QUEUE {
  struct _KQUEUE WorkerQueue;       // offset: 0x0 ordinal: 0x0
  ULONG DynamicThreadCount;         // offset: 0x40 ordinal: 0x1
  ULONG WorkItemsProcessed;         // offset: 0x44 ordinal: 0x2
  ULONG WorkItemsProcessedLastPass; // offset: 0x48 ordinal: 0x3
  ULONG QueueDepthLastPass;         // offset: 0x4c ordinal: 0x4
  union EX_QUEUE_WORKER_INFO Info;  // offset: 0x50 ordinal: 0x5
} _EX_WORK_QUEUE;

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

// 0x10 bytes (sizeof)
typedef union __anon_679 {
  ULONG FreeListsInUseUlong[4];  // offset: 0x0 ordinal: 0x0
  UCHAR FreeListsInUseBytes[16]; // offset: 0x0 ordinal: 0x1
} __anon_679;

// 0x58 bytes (sizeof)
typedef struct _KAPC {
  UCHAR Type;                      // offset: 0x0 ordinal: 0x0
  UCHAR SpareByte0;                // offset: 0x1 ordinal: 0x1
  UCHAR Size;                      // offset: 0x2 ordinal: 0x2
  UCHAR SpareByte1;                // offset: 0x3 ordinal: 0x3
  ULONG SpareLong0;                // offset: 0x4 ordinal: 0x4
  struct _KTHREAD *Thread;         // offset: 0x8 ordinal: 0x5
  struct _LIST_ENTRY ApcListEntry; // offset: 0x10 ordinal: 0x6
  VOID(*KernelRoutine)
  (struct _KAPC *, VOID (**)(VOID *, VOID *, VOID *), VOID **, VOID **,
   VOID **);                                     // offset: 0x20 ordinal: 0x7
  VOID (*RundownRoutine)(struct _KAPC *);        // offset: 0x28 ordinal: 0x8
  VOID (*NormalRoutine)(VOID *, VOID *, VOID *); // offset: 0x30 ordinal: 0x9
  VOID *NormalContext;                           // offset: 0x38 ordinal: 0xa
  VOID *SystemArgument1;                         // offset: 0x40 ordinal: 0xb
  VOID *SystemArgument2;                         // offset: 0x48 ordinal: 0xc
  CHAR ApcStateIndex;                            // offset: 0x50 ordinal: 0xd
  CHAR ApcMode;                                  // offset: 0x51 ordinal: 0xe
  UCHAR Inserted;                                // offset: 0x52 ordinal: 0xf
} _KAPC;

// 0x50 bytes (sizeof)
typedef struct __anon_269 {
  union {
    struct _KDEVICE_QUEUE_ENTRY DeviceQueueEntry; // offset: 0x0 ordinal: 0x0
    VOID *DriverContext[4];                       // offset: 0x0 ordinal: 0x1
  };
  struct _ETHREAD *Thread;      // offset: 0x20 ordinal: 0x2
  CHAR *AuxiliaryBuffer;        // offset: 0x28 ordinal: 0x3
  struct _LIST_ENTRY ListEntry; // offset: 0x30 ordinal: 0x4
  union {
    struct _IO_STACK_LOCATION
        *CurrentStackLocation; // offset: 0x40 ordinal: 0x5
    ULONG PacketType;          // offset: 0x40 ordinal: 0x6
  };
  struct _FILE_OBJECT *OriginalFileObject; // offset: 0x48 ordinal: 0x7
} __anon_269;

// 0x58 bytes (sizeof)
typedef union __anon_235 {
  struct __anon_269 Overlay; // offset: 0x0 ordinal: 0x0
  struct _KAPC Apc;          // offset: 0x0 ordinal: 0x1
  VOID *CompletionKey;       // offset: 0x0 ordinal: 0x2
} __anon_235;

typedef VOID (*__anon_144)(struct _KAPC *);

typedef VOID (*__anon_143)(struct _KAPC *, VOID (**)(VOID *, VOID *, VOID *),
                           VOID **, VOID **, VOID **);

// 0xc bytes (sizeof)
typedef struct _CACHE_DESCRIPTOR {
  UCHAR Level;                     // offset: 0x0 ordinal: 0x0
  UCHAR Associativity;             // offset: 0x1 ordinal: 0x1
  USHORT LineSize;                 // offset: 0x2 ordinal: 0x2
  ULONG Size;                      // offset: 0x4 ordinal: 0x3
  enum _PROCESSOR_CACHE_TYPE Type; // offset: 0x8 ordinal: 0x4
} _CACHE_DESCRIPTOR;

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

// 0xc bytes (sizeof)
typedef struct __anon_492 {
  ULONG Data[3]; // offset: 0x0 ordinal: 0x0
} __anon_492;

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

// 0x20 bytes (sizeof)
typedef struct __anon_404 {
  ULONG Length;                                // offset: 0x0 ordinal: 0x0
  VOID *StartSid;                              // offset: 0x8 ordinal: 0x1
  struct _FILE_GET_QUOTA_INFORMATION *SidList; // offset: 0x10 ordinal: 0x2
  ULONG SidListLength;                         // offset: 0x18 ordinal: 0x3
} __anon_404;

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

// 0x8 bytes (sizeof)
typedef struct _LUID {
  ULONG LowPart; // offset: 0x0 ordinal: 0x0
  LONG HighPart; // offset: 0x4 ordinal: 0x1
} _LUID;

// 0x20 bytes (sizeof)
typedef struct _SEP_LOGON_SESSION_REFERENCES {
  struct _SEP_LOGON_SESSION_REFERENCES *Next; // offset: 0x0 ordinal: 0x0
  struct _LUID LogonId;                       // offset: 0x8 ordinal: 0x1
  ULONG ReferenceCount;                       // offset: 0x10 ordinal: 0x2
  ULONG Flags;                                // offset: 0x14 ordinal: 0x3
  struct _DEVICE_MAP *pDeviceMap;             // offset: 0x18 ordinal: 0x4
} _SEP_LOGON_SESSION_REFERENCES;

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

// 0x48 bytes (sizeof)
typedef struct _SECURITY_CLIENT_CONTEXT {
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // offset: 0x0 ordinal: 0x0
  VOID *ClientToken;                               // offset: 0x10 ordinal: 0x1
  UCHAR DirectlyAccessClientToken;                 // offset: 0x18 ordinal: 0x2
  UCHAR DirectAccessEffectiveOnly;                 // offset: 0x19 ordinal: 0x3
  UCHAR ServerIsRemote;                            // offset: 0x1a ordinal: 0x4
  struct _TOKEN_CONTROL ClientTokenControl;        // offset: 0x1c ordinal: 0x5
} _SECURITY_CLIENT_CONTEXT;

// 0x100 bytes (sizeof)
typedef struct _LPCP_PORT_OBJECT {
  struct _LPCP_PORT_OBJECT *ConnectionPort;        // offset: 0x0 ordinal: 0x0
  struct _LPCP_PORT_OBJECT *ConnectedPort;         // offset: 0x8 ordinal: 0x1
  struct _LPCP_PORT_QUEUE MsgQueue;                // offset: 0x10 ordinal: 0x2
  struct _CLIENT_ID Creator;                       // offset: 0x30 ordinal: 0x3
  VOID *ClientSectionBase;                         // offset: 0x40 ordinal: 0x4
  VOID *ServerSectionBase;                         // offset: 0x48 ordinal: 0x5
  VOID *PortContext;                               // offset: 0x50 ordinal: 0x6
  struct _ETHREAD *ClientThread;                   // offset: 0x58 ordinal: 0x7
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // offset: 0x60 ordinal: 0x8
  struct _SECURITY_CLIENT_CONTEXT StaticSecurity;  // offset: 0x70 ordinal: 0x9
  struct _LIST_ENTRY LpcReplyChainHead;            // offset: 0xb8 ordinal: 0xa
  struct _LIST_ENTRY LpcDataInfoChainHead;         // offset: 0xc8 ordinal: 0xb
  union {
    struct _EPROCESS *ServerProcess;  // offset: 0xd8 ordinal: 0xc
    struct _EPROCESS *MappingProcess; // offset: 0xd8 ordinal: 0xd
  };
  USHORT MaxMessageLength;        // offset: 0xe0 ordinal: 0xe
  USHORT MaxConnectionInfoLength; // offset: 0xe2 ordinal: 0xf
  ULONG Flags;                    // offset: 0xe4 ordinal: 0x10
  struct _KEVENT WaitEvent;       // offset: 0xe8 ordinal: 0x11
} _LPCP_PORT_OBJECT;

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

// 0x2c bytes (sizeof)
typedef union __anon_477 {
  struct _INITIAL_PRIVILEGE_SET InitialPrivilegeSet; // offset: 0x0 ordinal: 0x0
  struct _PRIVILEGE_SET PrivilegeSet;                // offset: 0x0 ordinal: 0x1
} __anon_477;

// 0xa0 bytes (sizeof)
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
      SubjectSecurityContext;            // offset: 0x20 ordinal: 0x9
  VOID *SecurityDescriptor;              // offset: 0x40 ordinal: 0xa
  VOID *AuxData;                         // offset: 0x48 ordinal: 0xb
  union __anon_477 Privileges;           // offset: 0x50 ordinal: 0xc
  UCHAR AuditPrivileges;                 // offset: 0x7c ordinal: 0xd
  struct _UNICODE_STRING ObjectName;     // offset: 0x80 ordinal: 0xe
  struct _UNICODE_STRING ObjectTypeName; // offset: 0x90 ordinal: 0xf
} _ACCESS_STATE;

typedef LONG (*__anon_519)(VOID *, VOID *, struct _ACCESS_STATE *, CHAR, ULONG,
                           struct _UNICODE_STRING *, struct _UNICODE_STRING *,
                           VOID *, struct _SECURITY_QUALITY_OF_SERVICE *,
                           VOID **);

// 0x18 bytes (sizeof)
typedef struct _IO_SECURITY_CONTEXT {
  struct _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // offset: 0x0 ordinal: 0x0
  struct _ACCESS_STATE *AccessState;                // offset: 0x8 ordinal: 0x1
  ULONG DesiredAccess;                              // offset: 0x10 ordinal: 0x2
  ULONG FullCreateOptions;                          // offset: 0x14 ordinal: 0x3
} _IO_SECURITY_CONTEXT;

// 0x20 bytes (sizeof)
typedef struct __anon_386 {
  struct _IO_SECURITY_CONTEXT *SecurityContext; // offset: 0x0 ordinal: 0x0
  ULONG Options;                                // offset: 0x8 ordinal: 0x1
  USHORT FileAttributes;                        // offset: 0x10 ordinal: 0x2
  USHORT ShareAccess;                           // offset: 0x12 ordinal: 0x3
  ULONG EaLength;                               // offset: 0x18 ordinal: 0x4
} __anon_386;

// 0x38 bytes (sizeof)
typedef struct _PS_JOB_TOKEN_FILTER {
  ULONG CapturedSidCount;                          // offset: 0x0 ordinal: 0x0
  struct _SID_AND_ATTRIBUTES *CapturedSids;        // offset: 0x8 ordinal: 0x1
  ULONG CapturedSidsLength;                        // offset: 0x10 ordinal: 0x2
  ULONG CapturedGroupCount;                        // offset: 0x14 ordinal: 0x3
  struct _SID_AND_ATTRIBUTES *CapturedGroups;      // offset: 0x18 ordinal: 0x4
  ULONG CapturedGroupsLength;                      // offset: 0x20 ordinal: 0x5
  ULONG CapturedPrivilegeCount;                    // offset: 0x24 ordinal: 0x6
  struct _LUID_AND_ATTRIBUTES *CapturedPrivileges; // offset: 0x28 ordinal: 0x7
  ULONG CapturedPrivilegesLength;                  // offset: 0x30 ordinal: 0x8
} _PS_JOB_TOKEN_FILTER;

// 0x48 bytes (sizeof)
typedef struct _PLUGPLAY_EVENT_BLOCK {
  struct _GUID EventGuid;                      // offset: 0x0 ordinal: 0x0
  enum _PLUGPLAY_EVENT_CATEGORY EventCategory; // offset: 0x10 ordinal: 0x1
  ULONG *Result;                               // offset: 0x18 ordinal: 0x2
  ULONG Flags;                                 // offset: 0x20 ordinal: 0x3
  ULONG TotalSize;                             // offset: 0x24 ordinal: 0x4
  VOID *DeviceObject;                          // offset: 0x28 ordinal: 0x5
  union __anon_1226 u;                         // offset: 0x30 ordinal: 0x6
} _PLUGPLAY_EVENT_BLOCK;

// 0x88 bytes (sizeof)
typedef struct _PNP_DEVICE_EVENT_ENTRY {
  struct _LIST_ENTRY ListEntry;      // offset: 0x0 ordinal: 0x0
  ULONG Argument;                    // offset: 0x10 ordinal: 0x1
  struct _KEVENT *CallerEvent;       // offset: 0x18 ordinal: 0x2
  VOID (*Callback)(VOID *);          // offset: 0x20 ordinal: 0x3
  VOID *Context;                     // offset: 0x28 ordinal: 0x4
  enum _PNP_VETO_TYPE *VetoType;     // offset: 0x30 ordinal: 0x5
  struct _UNICODE_STRING *VetoName;  // offset: 0x38 ordinal: 0x6
  struct _PLUGPLAY_EVENT_BLOCK Data; // offset: 0x40 ordinal: 0x7
} _PNP_DEVICE_EVENT_ENTRY;

// 0x30 bytes (sizeof)
typedef struct _BITMAP_RANGE {
  struct _LIST_ENTRY Links; // offset: 0x0 ordinal: 0x0
  LONGLONG BasePage;        // offset: 0x10 ordinal: 0x1
  ULONG FirstDirtyPage;     // offset: 0x18 ordinal: 0x2
  ULONG LastDirtyPage;      // offset: 0x1c ordinal: 0x3
  ULONG DirtyPages;         // offset: 0x20 ordinal: 0x4
  ULONG *Bitmap;            // offset: 0x28 ordinal: 0x5
} _BITMAP_RANGE;

// 0xb8 bytes (sizeof)
typedef struct _MBCB {
  SHORT NodeTypeCode;                // offset: 0x0 ordinal: 0x0
  SHORT NodeIsInZone;                // offset: 0x2 ordinal: 0x1
  ULONG PagesToWrite;                // offset: 0x4 ordinal: 0x2
  ULONG DirtyPages;                  // offset: 0x8 ordinal: 0x3
  ULONG Reserved;                    // offset: 0xc ordinal: 0x4
  struct _LIST_ENTRY BitmapRanges;   // offset: 0x10 ordinal: 0x5
  LONGLONG ResumeWritePage;          // offset: 0x20 ordinal: 0x6
  struct _BITMAP_RANGE BitmapRange1; // offset: 0x28 ordinal: 0x7
  struct _BITMAP_RANGE BitmapRange2; // offset: 0x58 ordinal: 0x8
  struct _BITMAP_RANGE BitmapRange3; // offset: 0x88 ordinal: 0x9
} _MBCB;

typedef LONG (*__anon_521)(VOID *, UCHAR, struct _OBJECT_NAME_INFORMATION *,
                           ULONG, ULONG *, CHAR);

typedef LONG (*__anon_520)(VOID *, enum _SECURITY_OPERATION_CODE, ULONG *,
                           VOID *, ULONG *, VOID **, enum _POOL_TYPE,
                           struct _GENERIC_MAPPING *, CHAR);

// 0x10 bytes (sizeof)
typedef struct _RTL_BITMAP {
  ULONG SizeOfBitMap; // offset: 0x0 ordinal: 0x0
  ULONG *Buffer;      // offset: 0x8 ordinal: 0x1
} _RTL_BITMAP;

// 0x18 bytes (sizeof)
typedef struct _FREE_DISPLAY {
  ULONG RealVectorSize;       // offset: 0x0 ordinal: 0x0
  struct _RTL_BITMAP Display; // offset: 0x8 ordinal: 0x1
} _FREE_DISPLAY;

// 0x8 bytes (sizeof)
typedef struct __anon_16 {
  ULONG LowPart; // offset: 0x0 ordinal: 0x0
  LONG HighPart; // offset: 0x4 ordinal: 0x1
} __anon_16;

// 0x8 bytes (sizeof)
typedef union _LARGE_INTEGER {
  ULONG LowPart;      // offset: 0x0 ordinal: 0x0
  LONG HighPart;      // offset: 0x4 ordinal: 0x1
  struct __anon_16 u; // offset: 0x0 ordinal: 0x2
  LONGLONG QuadPart;  // offset: 0x0 ordinal: 0x3
} _LARGE_INTEGER;

typedef UCHAR (*__anon_1208)(union _LARGE_INTEGER);

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

// 0x38 bytes (sizeof)
typedef struct _OBJECT_SYMBOLIC_LINK {
  union _LARGE_INTEGER CreationTime;          // offset: 0x0 ordinal: 0x0
  struct _UNICODE_STRING LinkTarget;          // offset: 0x8 ordinal: 0x1
  struct _UNICODE_STRING LinkTargetRemaining; // offset: 0x18 ordinal: 0x2
  VOID *LinkTargetObject;                     // offset: 0x28 ordinal: 0x3
  ULONG DosDeviceDriveIndex;                  // offset: 0x30 ordinal: 0x4
} _OBJECT_SYMBOLIC_LINK;

// 0x8 bytes (sizeof)
typedef union __anon_674 {
  union _LARGE_INTEGER FileOffset; // offset: 0x0 ordinal: 0x0
  USHORT ActiveCount;              // offset: 0x0 ordinal: 0x1
} __anon_674;

typedef VOID (*__anon_669)(VOID *, union _LARGE_INTEGER);

// 0xc bytes (sizeof)
typedef struct __anon_496 {
  union _LARGE_INTEGER Start; // offset: 0x0 ordinal: 0x0
  ULONG Length;               // offset: 0x8 ordinal: 0x1
} __anon_496;

// 0x18 bytes (sizeof)
typedef struct __anon_489 {
  ULONG Length;                        // offset: 0x0 ordinal: 0x0
  ULONG Alignment;                     // offset: 0x4 ordinal: 0x1
  union _LARGE_INTEGER MinimumAddress; // offset: 0x8 ordinal: 0x2
  union _LARGE_INTEGER MaximumAddress; // offset: 0x10 ordinal: 0x3
} __anon_489;

// 0x18 bytes (sizeof)
typedef union __anon_487 {
  struct __anon_489 Port;          // offset: 0x0 ordinal: 0x0
  struct __anon_489 Memory;        // offset: 0x0 ordinal: 0x1
  struct __anon_490 Interrupt;     // offset: 0x0 ordinal: 0x2
  struct __anon_491 Dma;           // offset: 0x0 ordinal: 0x3
  struct __anon_489 Generic;       // offset: 0x0 ordinal: 0x4
  struct __anon_492 DevicePrivate; // offset: 0x0 ordinal: 0x5
  struct __anon_493 BusNumber;     // offset: 0x0 ordinal: 0x6
  struct __anon_494 ConfigData;    // offset: 0x0 ordinal: 0x7
} __anon_487;

// 0x20 bytes (sizeof)
typedef struct _IO_RESOURCE_DESCRIPTOR {
  UCHAR Option;           // offset: 0x0 ordinal: 0x0
  UCHAR Type;             // offset: 0x1 ordinal: 0x1
  UCHAR ShareDisposition; // offset: 0x2 ordinal: 0x2
  UCHAR Spare1;           // offset: 0x3 ordinal: 0x3
  USHORT Flags;           // offset: 0x4 ordinal: 0x4
  USHORT Spare2;          // offset: 0x6 ordinal: 0x5
  union __anon_487 u;     // offset: 0x8 ordinal: 0x6
} _IO_RESOURCE_DESCRIPTOR;

typedef LONG (*__anon_1135)(struct _IO_RESOURCE_DESCRIPTOR *);

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

typedef LONG (*__anon_1053)(struct _BUS_HANDLER *, struct _BUS_HANDLER *,
                            struct _IO_RESOURCE_REQUIREMENTS_LIST **);

// 0x8 bytes (sizeof)
typedef struct __anon_408 {
  struct _IO_RESOURCE_REQUIREMENTS_LIST
      *IoResourceRequirementList; // offset: 0x0 ordinal: 0x0
} __anon_408;

// 0x18 bytes (sizeof)
typedef struct _MAILSLOT_CREATE_PARAMETERS {
  ULONG MailslotQuota;              // offset: 0x0 ordinal: 0x0
  ULONG MaximumMessageSize;         // offset: 0x4 ordinal: 0x1
  union _LARGE_INTEGER ReadTimeout; // offset: 0x8 ordinal: 0x2
  UCHAR TimeoutSpecified;           // offset: 0x10 ordinal: 0x3
} _MAILSLOT_CREATE_PARAMETERS;

// 0x20 bytes (sizeof)
typedef struct __anon_388 {
  struct _IO_SECURITY_CONTEXT *SecurityContext;   // offset: 0x0 ordinal: 0x0
  ULONG Options;                                  // offset: 0x8 ordinal: 0x1
  USHORT Reserved;                                // offset: 0x10 ordinal: 0x2
  USHORT ShareAccess;                             // offset: 0x12 ordinal: 0x3
  struct _MAILSLOT_CREATE_PARAMETERS *Parameters; // offset: 0x18 ordinal: 0x4
} __anon_388;

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

// 0x20 bytes (sizeof)
typedef struct __anon_387 {
  struct _IO_SECURITY_CONTEXT *SecurityContext;     // offset: 0x0 ordinal: 0x0
  ULONG Options;                                    // offset: 0x8 ordinal: 0x1
  USHORT Reserved;                                  // offset: 0x10 ordinal: 0x2
  USHORT ShareAccess;                               // offset: 0x12 ordinal: 0x3
  struct _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // offset: 0x18 ordinal: 0x4
} __anon_387;

// 0x18 bytes (sizeof)
typedef struct __anon_389 {
  ULONG Length;                    // offset: 0x0 ordinal: 0x0
  ULONG Key;                       // offset: 0x8 ordinal: 0x1
  union _LARGE_INTEGER ByteOffset; // offset: 0x10 ordinal: 0x2
} __anon_389;

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

// 0x18 bytes (sizeof)
typedef struct _FILE_STANDARD_INFORMATION {
  union _LARGE_INTEGER AllocationSize; // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER EndOfFile;      // offset: 0x8 ordinal: 0x1
  ULONG NumberOfLinks;                 // offset: 0x10 ordinal: 0x2
  UCHAR DeletePending;                 // offset: 0x14 ordinal: 0x3
  UCHAR Directory;                     // offset: 0x15 ordinal: 0x4
} _FILE_STANDARD_INFORMATION;

// 0x28 bytes (sizeof)
typedef struct _FILE_BASIC_INFORMATION {
  union _LARGE_INTEGER CreationTime;   // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER LastAccessTime; // offset: 0x8 ordinal: 0x1
  union _LARGE_INTEGER LastWriteTime;  // offset: 0x10 ordinal: 0x2
  union _LARGE_INTEGER ChangeTime;     // offset: 0x18 ordinal: 0x3
  ULONG FileAttributes;                // offset: 0x20 ordinal: 0x4
} _FILE_BASIC_INFORMATION;

typedef LONG (*__anon_1211)(LONG, union _LARGE_INTEGER *, struct _MDL *,
                            VOID *);

typedef LONG (*__anon_1209)(union _LARGE_INTEGER *, struct _MDL *);

// 0xa0 bytes (sizeof)
typedef struct _DUMP_INITIALIZATION_CONTEXT {
  ULONG Length;                               // offset: 0x0 ordinal: 0x0
  ULONG Reserved;                             // offset: 0x4 ordinal: 0x1
  VOID *MemoryBlock;                          // offset: 0x8 ordinal: 0x2
  VOID *CommonBuffer[2];                      // offset: 0x10 ordinal: 0x3
  union _LARGE_INTEGER PhysicalAddress[2];    // offset: 0x20 ordinal: 0x4
  VOID (*StallRoutine)(ULONG);                // offset: 0x30 ordinal: 0x5
  UCHAR (*OpenRoutine)(union _LARGE_INTEGER); // offset: 0x38 ordinal: 0x6
  LONG(*WriteRoutine)
  (union _LARGE_INTEGER *, struct _MDL *); // offset: 0x40 ordinal: 0x7
  VOID (*FinishRoutine)();                 // offset: 0x48 ordinal: 0x8
  struct _ADAPTER_OBJECT *AdapterObject;   // offset: 0x50 ordinal: 0x9
  VOID *MappedRegisterBase;                // offset: 0x58 ordinal: 0xa
  VOID *PortConfiguration;                 // offset: 0x60 ordinal: 0xb
  UCHAR CrashDump;                         // offset: 0x68 ordinal: 0xc
  ULONG MaximumTransferSize;               // offset: 0x6c ordinal: 0xd
  ULONG CommonBufferSize;                  // offset: 0x70 ordinal: 0xe
  VOID *TargetAddress;                     // offset: 0x78 ordinal: 0xf
  LONG(*WritePendingRoutine)
  (LONG, union _LARGE_INTEGER *, struct _MDL *,
   VOID *);                   // offset: 0x80 ordinal: 0x10
  ULONG PartitionStyle;       // offset: 0x88 ordinal: 0x11
  union __anon_1206 DiskInfo; // offset: 0x8c ordinal: 0x12
} _DUMP_INITIALIZATION_CONTEXT;

// 0x110 bytes (sizeof)
typedef struct _DUMP_STACK_CONTEXT {
  struct _DUMP_INITIALIZATION_CONTEXT Init;       // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER PartitionOffset;           // offset: 0xa0 ordinal: 0x1
  VOID *DumpPointers;                             // offset: 0xa8 ordinal: 0x2
  ULONG PointersLength;                           // offset: 0xb0 ordinal: 0x3
  USHORT *ModulePrefix;                           // offset: 0xb8 ordinal: 0x4
  struct _LIST_ENTRY DriverList;                  // offset: 0xc0 ordinal: 0x5
  struct _STRING InitMsg;                         // offset: 0xd0 ordinal: 0x6
  struct _STRING ProgMsg;                         // offset: 0xe0 ordinal: 0x7
  struct _STRING DoneMsg;                         // offset: 0xf0 ordinal: 0x8
  VOID *FileObject;                               // offset: 0x100 ordinal: 0x9
  enum _DEVICE_USAGE_NOTIFICATION_TYPE UsageType; // offset: 0x108 ordinal: 0xa
} _DUMP_STACK_CONTEXT;

typedef UCHAR (*__anon_1056)(struct _BUS_HANDLER *, struct _BUS_HANDLER *,
                             union _LARGE_INTEGER, ULONG *,
                             union _LARGE_INTEGER *);

// 0x18 bytes (sizeof)
typedef struct __anon_398 {
  union _LARGE_INTEGER *Length;    // offset: 0x0 ordinal: 0x0
  ULONG Key;                       // offset: 0x8 ordinal: 0x1
  union _LARGE_INTEGER ByteOffset; // offset: 0x10 ordinal: 0x2
} __anon_398;

typedef UCHAR (*__anon_349)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            struct _MDL *, struct _DEVICE_OBJECT *);

// 0xb8 bytes (sizeof)
typedef struct _FILE_OBJECT {
  SHORT Type;                          // offset: 0x0 ordinal: 0x0
  SHORT Size;                          // offset: 0x2 ordinal: 0x1
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x8 ordinal: 0x2
  struct _VPB *Vpb;                    // offset: 0x10 ordinal: 0x3
  VOID *FsContext;                     // offset: 0x18 ordinal: 0x4
  VOID *FsContext2;                    // offset: 0x20 ordinal: 0x5
  struct _SECTION_OBJECT_POINTERS
      *SectionObjectPointer;              // offset: 0x28 ordinal: 0x6
  VOID *PrivateCacheMap;                  // offset: 0x30 ordinal: 0x7
  LONG FinalStatus;                       // offset: 0x38 ordinal: 0x8
  struct _FILE_OBJECT *RelatedFileObject; // offset: 0x40 ordinal: 0x9
  UCHAR LockOperation;                    // offset: 0x48 ordinal: 0xa
  UCHAR DeletePending;                    // offset: 0x49 ordinal: 0xb
  UCHAR ReadAccess;                       // offset: 0x4a ordinal: 0xc
  UCHAR WriteAccess;                      // offset: 0x4b ordinal: 0xd
  UCHAR DeleteAccess;                     // offset: 0x4c ordinal: 0xe
  UCHAR SharedRead;                       // offset: 0x4d ordinal: 0xf
  UCHAR SharedWrite;                      // offset: 0x4e ordinal: 0x10
  UCHAR SharedDelete;                     // offset: 0x4f ordinal: 0x11
  ULONG Flags;                            // offset: 0x50 ordinal: 0x12
  struct _UNICODE_STRING FileName;        // offset: 0x58 ordinal: 0x13
  union _LARGE_INTEGER CurrentByteOffset; // offset: 0x68 ordinal: 0x14
  ULONG Waiters;                          // offset: 0x70 ordinal: 0x15
  ULONG Busy;                             // offset: 0x74 ordinal: 0x16
  VOID *LastLock;                         // offset: 0x78 ordinal: 0x17
  struct _KEVENT Lock;                    // offset: 0x80 ordinal: 0x18
  struct _KEVENT Event;                   // offset: 0x98 ordinal: 0x19
  struct _IO_COMPLETION_CONTEXT
      *CompletionContext; // offset: 0xb0 ordinal: 0x1a
} _FILE_OBJECT;

// 0x8 bytes (sizeof)
typedef struct _IMAGE_DATA_DIRECTORY {
  ULONG VirtualAddress; // offset: 0x0 ordinal: 0x0
  ULONG Size;           // offset: 0x4 ordinal: 0x1
} _IMAGE_DATA_DIRECTORY;

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

// 0x8 bytes (sizeof)
typedef struct __anon_5 {
  ULONG LowPart;  // offset: 0x0 ordinal: 0x0
  ULONG HighPart; // offset: 0x4 ordinal: 0x1
} __anon_5;

// 0x8 bytes (sizeof)
typedef struct LIST_ENTRY32 {
  ULONG Flink; // offset: 0x0 ordinal: 0x0
  ULONG Blink; // offset: 0x4 ordinal: 0x1
} LIST_ENTRY32;

// 0xfbc bytes (sizeof)
typedef struct _TEB32 {
  struct _NT_TIB32 NtTib;               // offset: 0x0 ordinal: 0x0
  ULONG EnvironmentPointer;             // offset: 0x1c ordinal: 0x1
  struct _CLIENT_ID32 ClientId;         // offset: 0x20 ordinal: 0x2
  ULONG ActiveRpcHandle;                // offset: 0x28 ordinal: 0x3
  ULONG ThreadLocalStoragePointer;      // offset: 0x2c ordinal: 0x4
  ULONG ProcessEnvironmentBlock;        // offset: 0x30 ordinal: 0x5
  ULONG LastErrorValue;                 // offset: 0x34 ordinal: 0x6
  ULONG CountOfOwnedCriticalSections;   // offset: 0x38 ordinal: 0x7
  ULONG CsrClientThread;                // offset: 0x3c ordinal: 0x8
  ULONG Win32ThreadInfo;                // offset: 0x40 ordinal: 0x9
  ULONG User32Reserved[26];             // offset: 0x44 ordinal: 0xa
  ULONG UserReserved[5];                // offset: 0xac ordinal: 0xb
  ULONG WOW32Reserved;                  // offset: 0xc0 ordinal: 0xc
  ULONG CurrentLocale;                  // offset: 0xc4 ordinal: 0xd
  ULONG FpSoftwareStatusRegister;       // offset: 0xc8 ordinal: 0xe
  ULONG SystemReserved1[54];            // offset: 0xcc ordinal: 0xf
  LONG ExceptionCode;                   // offset: 0x1a4 ordinal: 0x10
  ULONG ActivationContextStackPointer;  // offset: 0x1a8 ordinal: 0x11
  UCHAR SpareBytes1[40];                // offset: 0x1ac ordinal: 0x12
  struct _GDI_TEB_BATCH32 GdiTebBatch;  // offset: 0x1d4 ordinal: 0x13
  struct _CLIENT_ID32 RealClientId;     // offset: 0x6b4 ordinal: 0x14
  ULONG GdiCachedProcessHandle;         // offset: 0x6bc ordinal: 0x15
  ULONG GdiClientPID;                   // offset: 0x6c0 ordinal: 0x16
  ULONG GdiClientTID;                   // offset: 0x6c4 ordinal: 0x17
  ULONG GdiThreadLocalInfo;             // offset: 0x6c8 ordinal: 0x18
  ULONG Win32ClientInfo[62];            // offset: 0x6cc ordinal: 0x19
  ULONG glDispatchTable[233];           // offset: 0x7c4 ordinal: 0x1a
  ULONG glReserved1[29];                // offset: 0xb68 ordinal: 0x1b
  ULONG glReserved2;                    // offset: 0xbdc ordinal: 0x1c
  ULONG glSectionInfo;                  // offset: 0xbe0 ordinal: 0x1d
  ULONG glSection;                      // offset: 0xbe4 ordinal: 0x1e
  ULONG glTable;                        // offset: 0xbe8 ordinal: 0x1f
  ULONG glCurrentRC;                    // offset: 0xbec ordinal: 0x20
  ULONG glContext;                      // offset: 0xbf0 ordinal: 0x21
  ULONG LastStatusValue;                // offset: 0xbf4 ordinal: 0x22
  struct _STRING32 StaticUnicodeString; // offset: 0xbf8 ordinal: 0x23
  USHORT StaticUnicodeBuffer[261];      // offset: 0xc00 ordinal: 0x24
  ULONG DeallocationStack;              // offset: 0xe0c ordinal: 0x25
  ULONG TlsSlots[64];                   // offset: 0xe10 ordinal: 0x26
  struct LIST_ENTRY32 TlsLinks;         // offset: 0xf10 ordinal: 0x27
  ULONG Vdm;                            // offset: 0xf18 ordinal: 0x28
  ULONG ReservedForNtRpc;               // offset: 0xf1c ordinal: 0x29
  ULONG DbgSsReserved[2];               // offset: 0xf20 ordinal: 0x2a
  ULONG HardErrorMode;                  // offset: 0xf28 ordinal: 0x2b
  ULONG Instrumentation[14];            // offset: 0xf2c ordinal: 0x2c
  ULONG SubProcessTag;                  // offset: 0xf64 ordinal: 0x2d
  ULONG EtwTraceData;                   // offset: 0xf68 ordinal: 0x2e
  ULONG WinSockData;                    // offset: 0xf6c ordinal: 0x2f
  ULONG GdiBatchCount;                  // offset: 0xf70 ordinal: 0x30
  UCHAR InDbgPrint;                     // offset: 0xf74 ordinal: 0x31
  UCHAR FreeStackOnTermination;         // offset: 0xf75 ordinal: 0x32
  UCHAR HasFiberData;                   // offset: 0xf76 ordinal: 0x33
  UCHAR IdealProcessor;                 // offset: 0xf77 ordinal: 0x34
  ULONG GuaranteedStackBytes;           // offset: 0xf78 ordinal: 0x35
  ULONG ReservedForPerf;                // offset: 0xf7c ordinal: 0x36
  ULONG ReservedForOle;                 // offset: 0xf80 ordinal: 0x37
  ULONG WaitingOnLoaderLock;            // offset: 0xf84 ordinal: 0x38
  ULONG SparePointer1;                  // offset: 0xf88 ordinal: 0x39
  ULONG SoftPatchPtr1;                  // offset: 0xf8c ordinal: 0x3a
  ULONG SoftPatchPtr2;                  // offset: 0xf90 ordinal: 0x3b
  ULONG TlsExpansionSlots;              // offset: 0xf94 ordinal: 0x3c
  ULONG ImpersonationLocale;            // offset: 0xf98 ordinal: 0x3d
  ULONG IsImpersonating;                // offset: 0xf9c ordinal: 0x3e
  ULONG NlsCache;                       // offset: 0xfa0 ordinal: 0x3f
  ULONG pShimData;                      // offset: 0xfa4 ordinal: 0x40
  ULONG HeapVirtualAffinity;            // offset: 0xfa8 ordinal: 0x41
  ULONG CurrentTransactionHandle;       // offset: 0xfac ordinal: 0x42
  ULONG ActiveFrame;                    // offset: 0xfb0 ordinal: 0x43
  ULONG FlsData;                        // offset: 0xfb4 ordinal: 0x44
  UCHAR SafeThunkCall;                  // offset: 0xfb8 ordinal: 0x45
  UCHAR BooleanSpare[3];                // offset: 0xfb9 ordinal: 0x46
} _TEB32;

// 0x20 bytes (sizeof)
typedef struct _VI_POOL_ENTRY_INUSE {
  VOID *VirtualAddress;    // offset: 0x0 ordinal: 0x0
  VOID *CallingAddress;    // offset: 0x8 ordinal: 0x1
  ULONGLONG NumberOfBytes; // offset: 0x10 ordinal: 0x2
  ULONGLONG Tag;           // offset: 0x18 ordinal: 0x3
} _VI_POOL_ENTRY_INUSE;

// 0x18 bytes (sizeof)
typedef struct _VI_POOL_PAGE_HEADER {
  struct _SLIST_ENTRY *NextPage; // offset: 0x0 ordinal: 0x0
  VOID *VerifierEntry;           // offset: 0x8 ordinal: 0x1
  ULONGLONG Signature;           // offset: 0x10 ordinal: 0x2
} _VI_POOL_PAGE_HEADER;

// 0x20 bytes (sizeof)
typedef struct _VI_POOL_ENTRY {
  union {
    struct _VI_POOL_PAGE_HEADER PageHeader; // offset: 0x0 ordinal: 0x0
    struct _VI_POOL_ENTRY_INUSE InUse;      // offset: 0x0 ordinal: 0x1
    struct _SLIST_ENTRY *NextFree;          // offset: 0x0 ordinal: 0x2
  };
} _VI_POOL_ENTRY;

// 0x8 bytes (sizeof)
typedef struct _MI_VERIFIER_POOL_HEADER {
  struct _VI_POOL_ENTRY *VerifierPoolEntry; // offset: 0x0 ordinal: 0x0
} _MI_VERIFIER_POOL_HEADER;

// 0x20 bytes (sizeof)
typedef struct _HEAP_USERDATA_HEADER {
  union {
    struct _SINGLE_LIST_ENTRY SFreeListEntry; // offset: 0x0 ordinal: 0x0
    struct _HEAP_SUBSEGMENT *SubSegment;      // offset: 0x0 ordinal: 0x1
  };
  VOID *HeapHandle;    // offset: 0x8 ordinal: 0x2
  ULONGLONG SizeIndex; // offset: 0x10 ordinal: 0x3
  ULONGLONG Signature; // offset: 0x18 ordinal: 0x4
} _HEAP_USERDATA_HEADER;

// 0x10 bytes (sizeof)
typedef struct _HANDLE_TABLE_ENTRY {
  union {
    VOID *Object;                               // offset: 0x0 ordinal: 0x0
    ULONG ObAttributes;                         // offset: 0x0 ordinal: 0x1
    struct _HANDLE_TABLE_ENTRY_INFO *InfoTable; // offset: 0x0 ordinal: 0x2
    ULONGLONG Value;                            // offset: 0x0 ordinal: 0x3
  };
  union {
    ULONG GrantedAccess;       // offset: 0x8 ordinal: 0x4
    USHORT GrantedAccessIndex; // offset: 0x8 ordinal: 0x5
  };
  USHORT CreatorBackTraceIndex; // offset: 0xa ordinal: 0x6
  LONG NextFreeTableEntry;      // offset: 0x8 ordinal: 0x7
} _HANDLE_TABLE_ENTRY;

// 0x28 bytes (sizeof)
typedef struct _PORT_MESSAGE {
  union __anon_1216 u1; // offset: 0x0 ordinal: 0x0
  union __anon_1217 u2; // offset: 0x4 ordinal: 0x1
  union {
    struct _CLIENT_ID ClientId; // offset: 0x8 ordinal: 0x2
    double DoNotUseThisField;   // offset: 0x8 ordinal: 0x3
  };
  ULONG MessageId; // offset: 0x18 ordinal: 0x4
  union {
    ULONGLONG ClientViewSize; // offset: 0x20 ordinal: 0x5
    ULONG CallbackId;         // offset: 0x20 ordinal: 0x6
  };
} _PORT_MESSAGE;

// 0x50 bytes (sizeof)
typedef struct _LPCP_MESSAGE {
  union {
    struct _LIST_ENTRY Entry;            // offset: 0x0 ordinal: 0x0
    struct _SINGLE_LIST_ENTRY FreeEntry; // offset: 0x0 ordinal: 0x1
  };
  ULONG Reserved0;                  // offset: 0x8 ordinal: 0x2
  VOID *SenderPort;                 // offset: 0x10 ordinal: 0x3
  struct _ETHREAD *RepliedToThread; // offset: 0x18 ordinal: 0x4
  VOID *PortContext;                // offset: 0x20 ordinal: 0x5
  struct _PORT_MESSAGE Request;     // offset: 0x28 ordinal: 0x6
} _LPCP_MESSAGE;

// 0x18 bytes (sizeof)
typedef struct _PO_MEMORY_RANGE_ARRAY_LINK {
  struct _PO_MEMORY_RANGE_ARRAY *Next; // offset: 0x0 ordinal: 0x0
  ULONGLONG NextTable;                 // offset: 0x8 ordinal: 0x1
  ULONG CheckSum;                      // offset: 0x10 ordinal: 0x2
  ULONG EntryCount;                    // offset: 0x14 ordinal: 0x3
} _PO_MEMORY_RANGE_ARRAY_LINK;

// 0x20 bytes (sizeof)
typedef struct _PO_MEMORY_RANGE_ARRAY_RANGE {
  ULONGLONG PageNo;    // offset: 0x0 ordinal: 0x0
  ULONGLONG StartPage; // offset: 0x8 ordinal: 0x1
  ULONGLONG EndPage;   // offset: 0x10 ordinal: 0x2
  ULONG CheckSum;      // offset: 0x18 ordinal: 0x3
} _PO_MEMORY_RANGE_ARRAY_RANGE;

// 0x20 bytes (sizeof)
typedef struct _PO_MEMORY_RANGE_ARRAY {
  union {
    struct _PO_MEMORY_RANGE_ARRAY_RANGE Range; // offset: 0x0 ordinal: 0x0
    struct _PO_MEMORY_RANGE_ARRAY_LINK Link;   // offset: 0x0 ordinal: 0x1
  };
} _PO_MEMORY_RANGE_ARRAY;

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

// 0xc0 bytes (sizeof)
typedef struct PO_MEMORY_IMAGE {
  ULONG Signature;                 // offset: 0x0 ordinal: 0x0
  ULONG Version;                   // offset: 0x4 ordinal: 0x1
  ULONG CheckSum;                  // offset: 0x8 ordinal: 0x2
  ULONG LengthSelf;                // offset: 0xc ordinal: 0x3
  ULONGLONG PageSelf;              // offset: 0x10 ordinal: 0x4
  ULONG PageSize;                  // offset: 0x18 ordinal: 0x5
  ULONG ImageType;                 // offset: 0x1c ordinal: 0x6
  union _LARGE_INTEGER SystemTime; // offset: 0x20 ordinal: 0x7
  ULONGLONG InterruptTime;         // offset: 0x28 ordinal: 0x8
  ULONG FeatureFlags;              // offset: 0x30 ordinal: 0x9
  UCHAR HiberFlags;                // offset: 0x34 ordinal: 0xa
  UCHAR spare[3];                  // offset: 0x35 ordinal: 0xb
  ULONG NoHiberPtes;               // offset: 0x38 ordinal: 0xc
  ULONGLONG HiberVa;               // offset: 0x40 ordinal: 0xd
  union _LARGE_INTEGER HiberPte;   // offset: 0x48 ordinal: 0xe
  ULONG NoFreePages;               // offset: 0x50 ordinal: 0xf
  ULONG FreeMapCheck;              // offset: 0x54 ordinal: 0x10
  ULONG WakeCheck;                 // offset: 0x58 ordinal: 0x11
  ULONGLONG TotalPages;            // offset: 0x60 ordinal: 0x12
  ULONGLONG FirstTablePage;        // offset: 0x68 ordinal: 0x13
  ULONGLONG LastFilePage;          // offset: 0x70 ordinal: 0x14
  struct _PO_HIBER_PERF PerfInfo;  // offset: 0x78 ordinal: 0x15
} PO_MEMORY_IMAGE;

// 0x28 bytes (sizeof)
typedef struct _POP_SHUTDOWN_BUG_CHECK {
  ULONG Code;           // offset: 0x0 ordinal: 0x0
  ULONGLONG Parameter1; // offset: 0x8 ordinal: 0x1
  ULONGLONG Parameter2; // offset: 0x10 ordinal: 0x2
  ULONGLONG Parameter3; // offset: 0x18 ordinal: 0x3
  ULONGLONG Parameter4; // offset: 0x20 ordinal: 0x4
} _POP_SHUTDOWN_BUG_CHECK;

// 0x28 bytes (sizeof)
typedef struct _POOL_TRACKER_TABLE {
  ULONG Key;               // offset: 0x0 ordinal: 0x0
  ULONG NonPagedAllocs;    // offset: 0x4 ordinal: 0x1
  ULONG NonPagedFrees;     // offset: 0x8 ordinal: 0x2
  ULONGLONG NonPagedBytes; // offset: 0x10 ordinal: 0x3
  ULONG PagedAllocs;       // offset: 0x18 ordinal: 0x4
  ULONG PagedFrees;        // offset: 0x1c ordinal: 0x5
  ULONGLONG PagedBytes;    // offset: 0x20 ordinal: 0x6
} _POOL_TRACKER_TABLE;

// 0x408 bytes (sizeof)
typedef struct _CALL_PERFORMANCE_DATA {
  ULONGLONG SpinLock;               // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY HashTable[64]; // offset: 0x8 ordinal: 0x1
} _CALL_PERFORMANCE_DATA;

// 0x28 bytes (sizeof)
typedef struct _RTL_RANGE {
  ULONGLONG Start;  // offset: 0x0 ordinal: 0x0
  ULONGLONG End;    // offset: 0x8 ordinal: 0x1
  VOID *UserData;   // offset: 0x10 ordinal: 0x2
  VOID *Owner;      // offset: 0x18 ordinal: 0x3
  UCHAR Attributes; // offset: 0x20 ordinal: 0x4
  UCHAR Flags;      // offset: 0x21 ordinal: 0x5
} _RTL_RANGE;

typedef UCHAR (*__anon_1144)(VOID *, struct _RTL_RANGE *);

// 0x38 bytes (sizeof)
typedef struct _ARBITER_ALTERNATIVE {
  ULONGLONG Minimum;                          // offset: 0x0 ordinal: 0x0
  ULONGLONG Maximum;                          // offset: 0x8 ordinal: 0x1
  ULONG Length;                               // offset: 0x10 ordinal: 0x2
  ULONG Alignment;                            // offset: 0x14 ordinal: 0x3
  LONG Priority;                              // offset: 0x18 ordinal: 0x4
  ULONG Flags;                                // offset: 0x1c ordinal: 0x5
  struct _IO_RESOURCE_DESCRIPTOR *Descriptor; // offset: 0x20 ordinal: 0x6
  ULONG Reserved[3];                          // offset: 0x28 ordinal: 0x7
} _ARBITER_ALTERNATIVE;

// 0x10 bytes (sizeof)
typedef struct _ARBITER_ORDERING {
  ULONGLONG Start; // offset: 0x0 ordinal: 0x0
  ULONGLONG End;   // offset: 0x8 ordinal: 0x1
} _ARBITER_ORDERING;

// 0x10 bytes (sizeof)
typedef struct _ARBITER_ORDERING_LIST {
  USHORT Count;                        // offset: 0x0 ordinal: 0x0
  USHORT Maximum;                      // offset: 0x2 ordinal: 0x1
  struct _ARBITER_ORDERING *Orderings; // offset: 0x8 ordinal: 0x2
} _ARBITER_ORDERING_LIST;

// 0x20 bytes (sizeof)
typedef struct _MMPFNLIST {
  ULONGLONG Total;        // offset: 0x0 ordinal: 0x0
  enum _MMLISTS ListName; // offset: 0x8 ordinal: 0x1
  ULONGLONG Flink;        // offset: 0x10 ordinal: 0x2
  ULONGLONG Blink;        // offset: 0x18 ordinal: 0x3
} _MMPFNLIST;

// 0x18 bytes (sizeof)
typedef struct _ARBITER_CONFLICT_INFO {
  struct _DEVICE_OBJECT *OwningObject; // offset: 0x0 ordinal: 0x0
  ULONGLONG Start;                     // offset: 0x8 ordinal: 0x1
  ULONGLONG End;                       // offset: 0x10 ordinal: 0x2
} _ARBITER_CONFLICT_INFO;

typedef LONG (*__anon_1138)(struct _ARBITER_INSTANCE *, struct _DEVICE_OBJECT *,
                            struct _IO_RESOURCE_DESCRIPTOR *, ULONG *,
                            struct _ARBITER_CONFLICT_INFO **);

// 0x20 bytes (sizeof)
typedef struct __anon_1086 {
  struct _DEVICE_OBJECT *PhysicalDeviceObject; // offset: 0x0 ordinal: 0x0
  struct _IO_RESOURCE_DESCRIPTOR
      *ConflictingResource;                  // offset: 0x8 ordinal: 0x1
  ULONG *ConflictCount;                      // offset: 0x10 ordinal: 0x2
  struct _ARBITER_CONFLICT_INFO **Conflicts; // offset: 0x18 ordinal: 0x3
} __anon_1086;

// 0x18 bytes (sizeof)
typedef struct _SYSPTES_HEADER {
  struct _LIST_ENTRY ListHead; // offset: 0x0 ordinal: 0x0
  ULONGLONG Count;             // offset: 0x10 ordinal: 0x1
} _SYSPTES_HEADER;

// 0x30 bytes (sizeof)
typedef struct _HEAP_STOP_ON_VALUES {
  ULONGLONG AllocAddress;              // offset: 0x0 ordinal: 0x0
  struct _HEAP_STOP_ON_TAG AllocTag;   // offset: 0x8 ordinal: 0x1
  ULONGLONG ReAllocAddress;            // offset: 0x10 ordinal: 0x2
  struct _HEAP_STOP_ON_TAG ReAllocTag; // offset: 0x18 ordinal: 0x3
  ULONGLONG FreeAddress;               // offset: 0x20 ordinal: 0x4
  struct _HEAP_STOP_ON_TAG FreeTag;    // offset: 0x28 ordinal: 0x5
} _HEAP_STOP_ON_VALUES;

// 0x38 bytes (sizeof)
typedef struct _RTLP_RANGE_LIST_ENTRY {
  ULONGLONG Start; // offset: 0x0 ordinal: 0x0
  ULONGLONG End;   // offset: 0x8 ordinal: 0x1
  union {
    struct __anon_1068 Allocated; // offset: 0x10 ordinal: 0x2
    struct __anon_1069 Merged;    // offset: 0x10 ordinal: 0x3
  };
  UCHAR Attributes;             // offset: 0x20 ordinal: 0x4
  UCHAR PublicFlags;            // offset: 0x21 ordinal: 0x5
  USHORT PrivateFlags;          // offset: 0x22 ordinal: 0x6
  struct _LIST_ENTRY ListEntry; // offset: 0x28 ordinal: 0x7
} _RTLP_RANGE_LIST_ENTRY;

// 0x10 bytes (sizeof)
typedef struct _PCI_LOCK {
  ULONGLONG Atom; // offset: 0x0 ordinal: 0x0
  UCHAR OldIrql;  // offset: 0x8 ordinal: 0x1
} _PCI_LOCK;

// 0x10 bytes (sizeof)
typedef struct _MMADDRESS_LIST {
  ULONGLONG StartVpn; // offset: 0x0 ordinal: 0x0
  ULONGLONG EndVpn;   // offset: 0x8 ordinal: 0x1
} _MMADDRESS_LIST;

// 0x10 bytes (sizeof)
typedef union __anon_991 {
  struct _LIST_ENTRY List;        // offset: 0x0 ordinal: 0x0
  struct _MMADDRESS_LIST Secured; // offset: 0x0 ordinal: 0x1
} __anon_991;

// 0x28 bytes (sizeof)
typedef struct _MMFREE_POOL_ENTRY {
  struct _LIST_ENTRY List;          // offset: 0x0 ordinal: 0x0
  ULONGLONG Size;                   // offset: 0x10 ordinal: 0x1
  ULONG Signature;                  // offset: 0x18 ordinal: 0x2
  struct _MMFREE_POOL_ENTRY *Owner; // offset: 0x20 ordinal: 0x3
} _MMFREE_POOL_ENTRY;

// 0x4e8 bytes (sizeof)
typedef struct _GDI_TEB_BATCH64 {
  ULONG Offset;      // offset: 0x0 ordinal: 0x0
  ULONGLONG HDC;     // offset: 0x8 ordinal: 0x1
  ULONG Buffer[310]; // offset: 0x10 ordinal: 0x2
} _GDI_TEB_BATCH64;

// 0x10 bytes (sizeof)
typedef struct _CLIENT_ID64 {
  ULONGLONG UniqueProcess; // offset: 0x0 ordinal: 0x0
  ULONGLONG UniqueThread;  // offset: 0x8 ordinal: 0x1
} _CLIENT_ID64;

// 0x38 bytes (sizeof)
typedef struct _NT_TIB64 {
  ULONGLONG ExceptionList; // offset: 0x0 ordinal: 0x0
  ULONGLONG StackBase;     // offset: 0x8 ordinal: 0x1
  ULONGLONG StackLimit;    // offset: 0x10 ordinal: 0x2
  ULONGLONG SubSystemTib;  // offset: 0x18 ordinal: 0x3
  union {
    ULONGLONG FiberData; // offset: 0x20 ordinal: 0x4
    ULONG Version;       // offset: 0x20 ordinal: 0x5
  };
  ULONGLONG ArbitraryUserPointer; // offset: 0x28 ordinal: 0x6
  ULONGLONG Self;                 // offset: 0x30 ordinal: 0x7
} _NT_TIB64;

// 0x10 bytes (sizeof)
typedef struct _HEAP_ENTRY_EXTRA {
  USHORT AllocatorBackTraceIndex; // offset: 0x0 ordinal: 0x0
  USHORT TagIndex;                // offset: 0x2 ordinal: 0x1
  ULONGLONG Settable;             // offset: 0x8 ordinal: 0x2
  ULONGLONG ZeroInit;             // offset: 0x0 ordinal: 0x3
  ULONGLONG ZeroInit1;            // offset: 0x8 ordinal: 0x4
} _HEAP_ENTRY_EXTRA;

// 0x20 bytes (sizeof)
typedef struct _HEAP_FREE_ENTRY {
  VOID *PreviousBlockPrivateData; // offset: 0x0 ordinal: 0x0
  USHORT Size;                    // offset: 0x8 ordinal: 0x1
  USHORT PreviousSize;            // offset: 0xa ordinal: 0x2
  UCHAR SmallTagIndex;            // offset: 0xc ordinal: 0x3
  UCHAR Flags;                    // offset: 0xd ordinal: 0x4
  UCHAR UnusedBytes;              // offset: 0xe ordinal: 0x5
  UCHAR SegmentIndex;             // offset: 0xf ordinal: 0x6
  ULONGLONG CompactHeader;        // offset: 0x8 ordinal: 0x7
  struct _LIST_ENTRY FreeList;    // offset: 0x10 ordinal: 0x8
} _HEAP_FREE_ENTRY;

// 0x10 bytes (sizeof)
typedef struct _MMVIEW {
  ULONGLONG Entry;                   // offset: 0x0 ordinal: 0x0
  struct _CONTROL_AREA *ControlArea; // offset: 0x8 ordinal: 0x1
} _MMVIEW;

// 0x1048 bytes (sizeof)
typedef struct _POOL_DESCRIPTOR {
  enum _POOL_TYPE PoolType;          // offset: 0x0 ordinal: 0x0
  ULONG PoolIndex;                   // offset: 0x4 ordinal: 0x1
  ULONG RunningAllocs;               // offset: 0x8 ordinal: 0x2
  ULONG RunningDeAllocs;             // offset: 0xc ordinal: 0x3
  ULONG TotalPages;                  // offset: 0x10 ordinal: 0x4
  ULONG TotalBigPages;               // offset: 0x14 ordinal: 0x5
  ULONG Threshold;                   // offset: 0x18 ordinal: 0x6
  VOID *LockAddress;                 // offset: 0x20 ordinal: 0x7
  VOID *PendingFrees;                // offset: 0x28 ordinal: 0x8
  LONG PendingFreeDepth;             // offset: 0x30 ordinal: 0x9
  ULONGLONG TotalBytes;              // offset: 0x38 ordinal: 0xa
  ULONGLONG Spare0;                  // offset: 0x40 ordinal: 0xb
  struct _LIST_ENTRY ListHeads[256]; // offset: 0x48 ordinal: 0xc
} _POOL_DESCRIPTOR;

// 0x10 bytes (sizeof)
typedef struct _PHYSICAL_MEMORY_RUN {
  ULONGLONG BasePage;  // offset: 0x0 ordinal: 0x0
  ULONGLONG PageCount; // offset: 0x8 ordinal: 0x1
} _PHYSICAL_MEMORY_RUN;

// 0x20 bytes (sizeof)
typedef struct _PHYSICAL_MEMORY_DESCRIPTOR {
  ULONG NumberOfRuns;                 // offset: 0x0 ordinal: 0x0
  ULONGLONG NumberOfPages;            // offset: 0x8 ordinal: 0x1
  struct _PHYSICAL_MEMORY_RUN Run[1]; // offset: 0x10 ordinal: 0x2
} _PHYSICAL_MEMORY_DESCRIPTOR;

// 0x18 bytes (sizeof)
typedef struct _MMCOLOR_TABLES {
  ULONGLONG Flink; // offset: 0x0 ordinal: 0x0
  VOID *Blink;     // offset: 0x8 ordinal: 0x1
  ULONGLONG Count; // offset: 0x10 ordinal: 0x2
} _MMCOLOR_TABLES;

// 0x10 bytes (sizeof)
typedef union _KGDTENTRY64 {
  USHORT LimitLow;         // offset: 0x0 ordinal: 0x0
  USHORT BaseLow;          // offset: 0x2 ordinal: 0x1
  struct __anon_912 Bytes; // offset: 0x4 ordinal: 0x2
  struct __anon_913 Bits;  // offset: 0x4 ordinal: 0x3
  ULONG BaseUpper;         // offset: 0x8 ordinal: 0x4
  ULONG MustBeZero;        // offset: 0xc ordinal: 0x5
  ULONGLONG Alignment;     // offset: 0x0 ordinal: 0x6
} _KGDTENTRY64;

// 0x10 bytes (sizeof)
typedef union _KIDTENTRY64 {
  USHORT OffsetLow;     // offset: 0x0 ordinal: 0x0
  USHORT Selector;      // offset: 0x2 ordinal: 0x1
  USHORT IstIndex : 3;  // offset: 0x4 ordinal: 0x2
  USHORT Reserved0 : 5; // offset: 0x4 ordinal: 0x3
  USHORT Type : 5;      // offset: 0x4 ordinal: 0x4
  USHORT Dpl : 2;       // offset: 0x4 ordinal: 0x5
  USHORT Present : 1;   // offset: 0x4 ordinal: 0x6
  USHORT OffsetMiddle;  // offset: 0x6 ordinal: 0x7
  ULONG OffsetHigh;     // offset: 0x8 ordinal: 0x8
  ULONG Reserved1;      // offset: 0xc ordinal: 0x9
  ULONGLONG Alignment;  // offset: 0x0 ordinal: 0xa
} _KIDTENTRY64;

// 0x10 bytes (sizeof)
typedef struct _STRING64 {
  USHORT Length;        // offset: 0x0 ordinal: 0x0
  USHORT MaximumLength; // offset: 0x2 ordinal: 0x1
  ULONGLONG Buffer;     // offset: 0x8 ordinal: 0x2
} _STRING64;

// 0x10 bytes (sizeof)
typedef struct _CACHED_CHILD_LIST {
  ULONG Count; // offset: 0x0 ordinal: 0x0
  union {
    ULONGLONG ValueList;                   // offset: 0x8 ordinal: 0x1
    struct _CM_KEY_CONTROL_BLOCK *RealKcb; // offset: 0x8 ordinal: 0x2
  };
} _CACHED_CHILD_LIST;

// 0x80 bytes (sizeof)
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
  ULONGLONG PagedBytes;                     // offset: 0x50 ordinal: 0x14
  ULONGLONG NonPagedBytes;                  // offset: 0x58 ordinal: 0x15
  ULONGLONG PeakPagedBytes;                 // offset: 0x60 ordinal: 0x16
  ULONGLONG PeakNonPagedBytes;              // offset: 0x68 ordinal: 0x17
  ULONG BurstAllocationsFailedDeliberately; // offset: 0x70 ordinal: 0x18
  ULONG SessionTrims;                       // offset: 0x74 ordinal: 0x19
  ULONG Reserved[2];                        // offset: 0x78 ordinal: 0x1a
} _MM_DRIVER_VERIFIER_DATA;

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
  struct _SINGLE_LIST_ENTRY SlistEntry;     // offset: 0x20 ordinal: 0x5
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
  ULONG Offset;      // offset: 0x30 ordinal: 0x10
  USHORT BufferFlag; // offset: 0x34 ordinal: 0x11
  USHORT BufferType; // offset: 0x36 ordinal: 0x12
  union {
    struct _GUID InstanceGuid; // offset: 0x38 ordinal: 0x13
    VOID *LoggerContext;       // offset: 0x38 ordinal: 0x14
  };
  struct _SINGLE_LIST_ENTRY GlobalEntry; // offset: 0x40 ordinal: 0x15
} _WMI_BUFFER_HEADER;

typedef VOID (*__anon_801)(struct _WMI_BUFFER_HEADER *, VOID *);

// 0x58 bytes (sizeof)
typedef struct _THERMAL_INFORMATION {
  ULONG ThermalStamp;         // offset: 0x0 ordinal: 0x0
  ULONG ThermalConstant1;     // offset: 0x4 ordinal: 0x1
  ULONG ThermalConstant2;     // offset: 0x8 ordinal: 0x2
  ULONGLONG Processors;       // offset: 0x10 ordinal: 0x3
  ULONG SamplingPeriod;       // offset: 0x18 ordinal: 0x4
  ULONG CurrentTemperature;   // offset: 0x1c ordinal: 0x5
  ULONG PassiveTripPoint;     // offset: 0x20 ordinal: 0x6
  ULONG CriticalTripPoint;    // offset: 0x24 ordinal: 0x7
  UCHAR ActiveTripPointCount; // offset: 0x28 ordinal: 0x8
  ULONG ActiveTripPoint[10];  // offset: 0x2c ordinal: 0x9
} _THERMAL_INFORMATION;

// 0x1e0 bytes (sizeof)
typedef struct _VI_DEADLOCK_GLOBALS {
  ULONG Nodes[2];                            // offset: 0x0 ordinal: 0x0
  ULONG Resources[2];                        // offset: 0x8 ordinal: 0x1
  ULONG Threads[2];                          // offset: 0x10 ordinal: 0x2
  LONGLONG TimeAcquire;                      // offset: 0x18 ordinal: 0x3
  LONGLONG TimeRelease;                      // offset: 0x20 ordinal: 0x4
  ULONGLONG BytesAllocated;                  // offset: 0x28 ordinal: 0x5
  struct _LIST_ENTRY *ResourceDatabase;      // offset: 0x30 ordinal: 0x6
  struct _LIST_ENTRY *ThreadDatabase;        // offset: 0x38 ordinal: 0x7
  ULONG AllocationFailures;                  // offset: 0x40 ordinal: 0x8
  ULONG NodesTrimmedBasedOnAge;              // offset: 0x44 ordinal: 0x9
  ULONG NodesTrimmedBasedOnCount;            // offset: 0x48 ordinal: 0xa
  ULONG NodesSearched;                       // offset: 0x4c ordinal: 0xb
  ULONG MaxNodesSearched;                    // offset: 0x50 ordinal: 0xc
  ULONG SequenceNumber;                      // offset: 0x54 ordinal: 0xd
  ULONG RecursionDepthLimit;                 // offset: 0x58 ordinal: 0xe
  ULONG SearchedNodesLimit;                  // offset: 0x5c ordinal: 0xf
  ULONG DepthLimitHits;                      // offset: 0x60 ordinal: 0x10
  ULONG SearchLimitHits;                     // offset: 0x64 ordinal: 0x11
  ULONG ABC_ACB_Skipped;                     // offset: 0x68 ordinal: 0x12
  ULONG OutOfOrderReleases;                  // offset: 0x6c ordinal: 0x13
  ULONG NodesReleasedOutOfOrder;             // offset: 0x70 ordinal: 0x14
  ULONG TotalReleases;                       // offset: 0x74 ordinal: 0x15
  ULONG RootNodesDeleted;                    // offset: 0x78 ordinal: 0x16
  ULONG ForgetHistoryCounter;                // offset: 0x7c ordinal: 0x17
  ULONG PoolTrimCounter;                     // offset: 0x80 ordinal: 0x18
  struct _LIST_ENTRY FreeResourceList;       // offset: 0x88 ordinal: 0x19
  struct _LIST_ENTRY FreeThreadList;         // offset: 0x98 ordinal: 0x1a
  struct _LIST_ENTRY FreeNodeList;           // offset: 0xa8 ordinal: 0x1b
  ULONG FreeResourceCount;                   // offset: 0xb8 ordinal: 0x1c
  ULONG FreeThreadCount;                     // offset: 0xbc ordinal: 0x1d
  ULONG FreeNodeCount;                       // offset: 0xc0 ordinal: 0x1e
  VOID *Instigator;                          // offset: 0xc8 ordinal: 0x1f
  ULONG NumberOfParticipants;                // offset: 0xd0 ordinal: 0x20
  struct _VI_DEADLOCK_NODE *Participant[32]; // offset: 0xd8 ordinal: 0x21
  ULONG CacheReductionInProgress;            // offset: 0x1d8 ordinal: 0x22
} _VI_DEADLOCK_GLOBALS;

// 0x4e8 bytes (sizeof)
typedef struct _GDI_TEB_BATCH {
  ULONG Offset;      // offset: 0x0 ordinal: 0x0
  ULONGLONG HDC;     // offset: 0x8 ordinal: 0x1
  ULONG Buffer[310]; // offset: 0x10 ordinal: 0x2
} _GDI_TEB_BATCH;

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

// 0x30 bytes (sizeof)
typedef struct _HEAP_SUBSEGMENT {
  VOID *Bucket;                             // offset: 0x0 ordinal: 0x0
  struct _HEAP_USERDATA_HEADER *UserBlocks; // offset: 0x8 ordinal: 0x1
  struct _INTERLOCK_SEQ AggregateExchg;     // offset: 0x10 ordinal: 0x2
  USHORT BlockSize;                         // offset: 0x18 ordinal: 0x3
  USHORT FreeThreshold;                     // offset: 0x1a ordinal: 0x4
  USHORT BlockCount;                        // offset: 0x1c ordinal: 0x5
  UCHAR SizeIndex;                          // offset: 0x1e ordinal: 0x6
  UCHAR AffinityIndex;                      // offset: 0x1f ordinal: 0x7
  ULONG Alignment[2];                       // offset: 0x18 ordinal: 0x8
  struct _SINGLE_LIST_ENTRY SFreeListEntry; // offset: 0x20 ordinal: 0x9
  ULONG Lock;                               // offset: 0x28 ordinal: 0xa
} _HEAP_SUBSEGMENT;

typedef LONG (*__anon_1132)(struct _IO_RESOURCE_DESCRIPTOR *, ULONGLONG *,
                            ULONGLONG *, ULONG *, ULONG *);

typedef ULONG (*__anon_1055)(struct _BUS_HANDLER *, struct _BUS_HANDLER *,
                             ULONG, ULONG, UCHAR *, ULONGLONG *);

// 0x40 bytes (sizeof)
typedef struct _CM_VIEW_OF_FILE {
  struct _LIST_ENTRY LRUViewList; // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY PinViewList; // offset: 0x10 ordinal: 0x1
  ULONG FileOffset;               // offset: 0x20 ordinal: 0x2
  ULONG Size;                     // offset: 0x24 ordinal: 0x3
  ULONGLONG *ViewAddress;         // offset: 0x28 ordinal: 0x4
  VOID *Bcb;                      // offset: 0x30 ordinal: 0x5
  ULONG UseCount;                 // offset: 0x38 ordinal: 0x6
} _CM_VIEW_OF_FILE;

// 0x20 bytes (sizeof)
typedef struct _HMAP_ENTRY {
  ULONGLONG BlockAddress;          // offset: 0x0 ordinal: 0x0
  ULONGLONG BinAddress;            // offset: 0x8 ordinal: 0x1
  struct _CM_VIEW_OF_FILE *CmView; // offset: 0x10 ordinal: 0x2
  ULONG MemAlloc;                  // offset: 0x18 ordinal: 0x3
} _HMAP_ENTRY;

// 0x4000 bytes (sizeof)
typedef struct _HMAP_TABLE {
  struct _HMAP_ENTRY Table[512]; // offset: 0x0 ordinal: 0x0
} _HMAP_TABLE;

// 0x2000 bytes (sizeof)
typedef struct _HMAP_DIRECTORY {
  struct _HMAP_TABLE *Directory[1024]; // offset: 0x0 ordinal: 0x0
} _HMAP_DIRECTORY;

// 0x278 bytes (sizeof)
typedef struct _DUAL {
  ULONG Length;                         // offset: 0x0 ordinal: 0x0
  struct _HMAP_DIRECTORY *Map;          // offset: 0x8 ordinal: 0x1
  struct _HMAP_TABLE *SmallDir;         // offset: 0x10 ordinal: 0x2
  ULONG Guard;                          // offset: 0x18 ordinal: 0x3
  struct _FREE_DISPLAY FreeDisplay[24]; // offset: 0x20 ordinal: 0x4
  ULONG FreeSummary;                    // offset: 0x260 ordinal: 0x5
  struct _LIST_ENTRY FreeBins;          // offset: 0x268 ordinal: 0x6
} _DUAL;

// 0x578 bytes (sizeof)
typedef struct _HHIVE {
  ULONG Signature; // offset: 0x0 ordinal: 0x0
  struct _CELL_DATA *(*GetCellRoutine)(struct _HHIVE *,
                                       ULONG); // offset: 0x8 ordinal: 0x1
  VOID(*ReleaseCellRoutine)
  (struct _HHIVE *, ULONG);               // offset: 0x10 ordinal: 0x2
  VOID *(*Allocate)(ULONG, UCHAR, ULONG); // offset: 0x18 ordinal: 0x3
  VOID (*Free)(VOID *, ULONG);            // offset: 0x20 ordinal: 0x4
  UCHAR(*FileSetSize)
  (struct _HHIVE *, ULONG, ULONG, ULONG); // offset: 0x28 ordinal: 0x5
  UCHAR(*FileWrite)
  (struct _HHIVE *, ULONG, struct CMP_OFFSET_ARRAY *, ULONG,
   ULONG *); // offset: 0x30 ordinal: 0x6
  UCHAR(*FileRead)
  (struct _HHIVE *, ULONG, ULONG *, VOID *, ULONG); // offset: 0x38 ordinal: 0x7
  UCHAR(*FileFlush)
  (struct _HHIVE *, ULONG, union _LARGE_INTEGER *,
   ULONG);                        // offset: 0x40 ordinal: 0x8
  struct _HBASE_BLOCK *BaseBlock; // offset: 0x48 ordinal: 0x9
  struct _RTL_BITMAP DirtyVector; // offset: 0x50 ordinal: 0xa
  ULONG DirtyCount;               // offset: 0x60 ordinal: 0xb
  ULONG DirtyAlloc;               // offset: 0x64 ordinal: 0xc
  ULONG BaseBlockAlloc;           // offset: 0x68 ordinal: 0xd
  ULONG Cluster;                  // offset: 0x6c ordinal: 0xe
  UCHAR Flat;                     // offset: 0x70 ordinal: 0xf
  UCHAR ReadOnly;                 // offset: 0x71 ordinal: 0x10
  UCHAR Log;                      // offset: 0x72 ordinal: 0x11
  UCHAR DirtyFlag;                // offset: 0x73 ordinal: 0x12
  ULONG HiveFlags;                // offset: 0x74 ordinal: 0x13
  ULONG LogSize;                  // offset: 0x78 ordinal: 0x14
  ULONG RefreshCount;             // offset: 0x7c ordinal: 0x15
  ULONG StorageTypeCount;         // offset: 0x80 ordinal: 0x16
  ULONG Version;                  // offset: 0x84 ordinal: 0x17
  struct _DUAL Storage[2];        // offset: 0x88 ordinal: 0x18
} _HHIVE;

// 0x10 bytes (sizeof)
typedef struct _CM_KEY_REFERENCE {
  ULONG KeyCell;          // offset: 0x0 ordinal: 0x0
  struct _HHIVE *KeyHive; // offset: 0x8 ordinal: 0x1
} _CM_KEY_REFERENCE;

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

// 0x20 bytes (sizeof)
typedef struct _CM_KEY_HASH {
  ULONG ConvKey;                 // offset: 0x0 ordinal: 0x0
  struct _CM_KEY_HASH *NextHash; // offset: 0x8 ordinal: 0x1
  struct _HHIVE *KeyHive;        // offset: 0x10 ordinal: 0x2
  ULONG KeyCell;                 // offset: 0x18 ordinal: 0x3
} _CM_KEY_HASH;

typedef UCHAR (*__anon_845)(struct _HHIVE *, ULONG, union _LARGE_INTEGER *,
                            ULONG);

typedef UCHAR (*__anon_844)(struct _HHIVE *, ULONG, ULONG *, VOID *, ULONG);

typedef UCHAR (*__anon_843)(struct _HHIVE *, ULONG, struct CMP_OFFSET_ARRAY *,
                            ULONG, ULONG *);

typedef UCHAR (*__anon_842)(struct _HHIVE *, ULONG, ULONG, ULONG);

typedef VOID (*__anon_839)(struct _HHIVE *, ULONG);

typedef struct _CELL_DATA *(*__anon_838)(struct _HHIVE *, ULONG);

// 0xb0 bytes (sizeof)
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
  struct _CM_KEY_HASH *NextHash;                 // offset: 0x10 ordinal: 0x8
  struct _HHIVE *KeyHive;                        // offset: 0x18 ordinal: 0x9
  ULONG KeyCell;                                 // offset: 0x20 ordinal: 0xa
  struct _CM_KEY_CONTROL_BLOCK *ParentKcb;       // offset: 0x28 ordinal: 0xb
  struct _CM_NAME_CONTROL_BLOCK *NameBlock;      // offset: 0x30 ordinal: 0xc
  struct _CM_KEY_SECURITY_CACHE *CachedSecurity; // offset: 0x38 ordinal: 0xd
  struct _CACHED_CHILD_LIST ValueCache;          // offset: 0x40 ordinal: 0xe
  union {
    struct _CM_INDEX_HINT_BLOCK *IndexHint; // offset: 0x50 ordinal: 0xf
    ULONG HashKey;                          // offset: 0x50 ordinal: 0x10
    ULONG SubKeyCount;                      // offset: 0x50 ordinal: 0x11
  };
  union {
    struct _LIST_ENTRY KeyBodyListHead; // offset: 0x58 ordinal: 0x12
    struct _LIST_ENTRY FreeListEntry;   // offset: 0x58 ordinal: 0x13
  };
  struct _CM_KEY_BODY *KeyBodyArray[4];  // offset: 0x68 ordinal: 0x14
  VOID *DelayCloseEntry;                 // offset: 0x88 ordinal: 0x15
  union _LARGE_INTEGER KcbLastWriteTime; // offset: 0x90 ordinal: 0x16
  USHORT KcbMaxNameLen;                  // offset: 0x98 ordinal: 0x17
  USHORT KcbMaxValueNameLen;             // offset: 0x9a ordinal: 0x18
  ULONG KcbMaxValueDataLen;              // offset: 0x9c ordinal: 0x19
  ULONG KcbUserFlags : 4;                // offset: 0xa0 ordinal: 0x1a
  ULONG KcbVirtControlFlags : 4;         // offset: 0xa0 ordinal: 0x1b
  ULONG KcbDebug : 8;                    // offset: 0xa0 ordinal: 0x1c
  ULONG Flags : 16;                      // offset: 0xa0 ordinal: 0x1d
  CHAR *RealKeyName;                     // offset: 0xa8 ordinal: 0x1e
} _CM_KEY_CONTROL_BLOCK;

typedef LONG (*__anon_697)(VOID *, VOID **, ULONGLONG *);

// 0x10 bytes (sizeof)
typedef struct _HEAP_PSEUDO_TAG_ENTRY {
  ULONG Allocs;   // offset: 0x0 ordinal: 0x0
  ULONG Frees;    // offset: 0x4 ordinal: 0x1
  ULONGLONG Size; // offset: 0x8 ordinal: 0x2
} _HEAP_PSEUDO_TAG_ENTRY;

// 0x20 bytes (sizeof)
typedef struct _HEAP_UNCOMMMTTED_RANGE {
  struct _HEAP_UNCOMMMTTED_RANGE *Next; // offset: 0x0 ordinal: 0x0
  ULONGLONG Address;                    // offset: 0x8 ordinal: 0x1
  ULONGLONG Size;                       // offset: 0x10 ordinal: 0x2
  ULONG filler;                         // offset: 0x18 ordinal: 0x3
} _HEAP_UNCOMMMTTED_RANGE;

// 0x20 bytes (sizeof)
typedef struct _HEAP_UCR_SEGMENT {
  struct _HEAP_UCR_SEGMENT *Next; // offset: 0x0 ordinal: 0x0
  ULONGLONG ReservedSize;         // offset: 0x8 ordinal: 0x1
  ULONGLONG CommittedSize;        // offset: 0x10 ordinal: 0x2
  ULONG filler;                   // offset: 0x18 ordinal: 0x3
} _HEAP_UCR_SEGMENT;

// 0x48 bytes (sizeof)
typedef struct _HEAP_TAG_ENTRY {
  ULONG Allocs;                 // offset: 0x0 ordinal: 0x0
  ULONG Frees;                  // offset: 0x4 ordinal: 0x1
  ULONGLONG Size;               // offset: 0x8 ordinal: 0x2
  USHORT TagIndex;              // offset: 0x10 ordinal: 0x3
  USHORT CreatorBackTraceIndex; // offset: 0x12 ordinal: 0x4
  USHORT TagName[24];           // offset: 0x14 ordinal: 0x5
} _HEAP_TAG_ENTRY;

// 0x10 bytes (sizeof)
typedef struct _HEAP_ENTRY {
  VOID *PreviousBlockPrivateData; // offset: 0x0 ordinal: 0x0
  USHORT Size;                    // offset: 0x8 ordinal: 0x1
  USHORT PreviousSize;            // offset: 0xa ordinal: 0x2
  UCHAR SmallTagIndex;            // offset: 0xc ordinal: 0x3
  UCHAR Flags;                    // offset: 0xd ordinal: 0x4
  UCHAR UnusedBytes;              // offset: 0xe ordinal: 0x5
  UCHAR SegmentIndex;             // offset: 0xf ordinal: 0x6
  ULONGLONG CompactHeader;        // offset: 0x8 ordinal: 0x7
} _HEAP_ENTRY;

// 0x40 bytes (sizeof)
typedef struct _HEAP_VIRTUAL_ALLOC_ENTRY {
  struct _LIST_ENTRY Entry;            // offset: 0x0 ordinal: 0x0
  struct _HEAP_ENTRY_EXTRA ExtraStuff; // offset: 0x10 ordinal: 0x1
  ULONGLONG CommitSize;                // offset: 0x20 ordinal: 0x2
  ULONGLONG ReserveSize;               // offset: 0x28 ordinal: 0x3
  struct _HEAP_ENTRY BusyBlock;        // offset: 0x30 ordinal: 0x4
} _HEAP_VIRTUAL_ALLOC_ENTRY;

// 0x60 bytes (sizeof)
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
  ULONGLONG ReadAheadSpinLock;             // offset: 0x48 ordinal: 0xb
  struct _LIST_ENTRY PrivateLinks;         // offset: 0x50 ordinal: 0xc
} _PRIVATE_CACHE_MAP;

// 0x14 bytes (sizeof)
typedef struct _IA64_DBGKD_CONTROL_SET {
  ULONG Continue;               // offset: 0x0 ordinal: 0x0
  ULONGLONG CurrentSymbolStart; // offset: 0x4 ordinal: 0x1
  ULONGLONG CurrentSymbolEnd;   // offset: 0xc ordinal: 0x2
} _IA64_DBGKD_CONTROL_SET;

// 0x1c bytes (sizeof)
typedef struct _AMD64_DBGKD_CONTROL_SET {
  ULONG TraceFlag;              // offset: 0x0 ordinal: 0x0
  ULONGLONG Dr7;                // offset: 0x4 ordinal: 0x1
  ULONGLONG CurrentSymbolStart; // offset: 0xc ordinal: 0x2
  ULONGLONG CurrentSymbolEnd;   // offset: 0x14 ordinal: 0x3
} _AMD64_DBGKD_CONTROL_SET;

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
    struct _AMD64_DBGKD_CONTROL_SET ControlSet;  // offset: 0x4 ordinal: 0x1
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
  UCHAR ProtocolVersion;        // offset: 0x4 ordinal: 0x2
  UCHAR KdSecondaryVersion;     // offset: 0x5 ordinal: 0x3
  USHORT Flags;                 // offset: 0x6 ordinal: 0x4
  USHORT MachineType;           // offset: 0x8 ordinal: 0x5
  UCHAR MaxPacketType;          // offset: 0xa ordinal: 0x6
  UCHAR MaxStateChange;         // offset: 0xb ordinal: 0x7
  UCHAR MaxManipulate;          // offset: 0xc ordinal: 0x8
  UCHAR Simulation;             // offset: 0xd ordinal: 0x9
  USHORT Unused[1];             // offset: 0xe ordinal: 0xa
  ULONGLONG KernBase;           // offset: 0x10 ordinal: 0xb
  ULONGLONG PsLoadedModuleList; // offset: 0x18 ordinal: 0xc
  ULONGLONG DebuggerDataList;   // offset: 0x20 ordinal: 0xd
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

// 0x28 bytes (sizeof)
typedef union __anon_652 {
  struct _DBGKD_READ_MEMORY32 ReadMemory;           // offset: 0x0 ordinal: 0x0
  struct _DBGKD_WRITE_MEMORY32 WriteMemory;         // offset: 0x0 ordinal: 0x1
  struct _DBGKD_READ_MEMORY64 ReadMemory64;         // offset: 0x0 ordinal: 0x2
  struct _DBGKD_WRITE_MEMORY64 WriteMemory64;       // offset: 0x0 ordinal: 0x3
  struct _DBGKD_GET_CONTEXT GetContext;             // offset: 0x0 ordinal: 0x4
  struct _DBGKD_SET_CONTEXT SetContext;             // offset: 0x0 ordinal: 0x5
  struct _DBGKD_WRITE_BREAKPOINT32 WriteBreakPoint; // offset: 0x0 ordinal: 0x6
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
} __anon_652;

// 0x34 bytes (sizeof)
typedef struct _DBGKD_MANIPULATE_STATE32 {
  ULONG ApiNumber;       // offset: 0x0 ordinal: 0x0
  USHORT ProcessorLevel; // offset: 0x4 ordinal: 0x1
  USHORT Processor;      // offset: 0x6 ordinal: 0x2
  LONG ReturnStatus;     // offset: 0x8 ordinal: 0x3
  union __anon_652 u;    // offset: 0xc ordinal: 0x4
} _DBGKD_MANIPULATE_STATE32;

// 0x28 bytes (sizeof)
typedef union __anon_632 {
  struct _DBGKD_READ_MEMORY64 ReadMemory;           // offset: 0x0 ordinal: 0x0
  struct _DBGKD_WRITE_MEMORY64 WriteMemory;         // offset: 0x0 ordinal: 0x1
  struct _DBGKD_GET_CONTEXT GetContext;             // offset: 0x0 ordinal: 0x2
  struct _DBGKD_SET_CONTEXT SetContext;             // offset: 0x0 ordinal: 0x3
  struct _DBGKD_WRITE_BREAKPOINT64 WriteBreakPoint; // offset: 0x0 ordinal: 0x4
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
      GetInternalBreakpoint;                      // offset: 0x0 ordinal: 0xd
  struct _DBGKD_GET_VERSION64 GetVersion64;       // offset: 0x0 ordinal: 0xe
  struct _DBGKD_BREAKPOINTEX BreakPointEx;        // offset: 0x0 ordinal: 0xf
  struct _DBGKD_READ_WRITE_MSR ReadWriteMsr;      // offset: 0x0 ordinal: 0x10
  struct _DBGKD_SEARCH_MEMORY SearchMemory;       // offset: 0x0 ordinal: 0x11
  struct _DBGKD_GET_SET_BUS_DATA GetSetBusData;   // offset: 0x0 ordinal: 0x12
  struct _DBGKD_FILL_MEMORY FillMemory;           // offset: 0x0 ordinal: 0x13
  struct _DBGKD_QUERY_MEMORY QueryMemory;         // offset: 0x0 ordinal: 0x14
  struct _DBGKD_SWITCH_PARTITION SwitchPartition; // offset: 0x0 ordinal: 0x15
} __anon_632;

// 0x38 bytes (sizeof)
typedef struct _DBGKD_MANIPULATE_STATE64 {
  ULONG ApiNumber;       // offset: 0x0 ordinal: 0x0
  USHORT ProcessorLevel; // offset: 0x4 ordinal: 0x1
  USHORT Processor;      // offset: 0x6 ordinal: 0x2
  LONG ReturnStatus;     // offset: 0x8 ordinal: 0x3
  union __anon_632 u;    // offset: 0x10 ordinal: 0x4
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

// 0x98 bytes (sizeof)
typedef struct _EXCEPTION_RECORD {
  LONG ExceptionCode;                        // offset: 0x0 ordinal: 0x0
  ULONG ExceptionFlags;                      // offset: 0x4 ordinal: 0x1
  struct _EXCEPTION_RECORD *ExceptionRecord; // offset: 0x8 ordinal: 0x2
  VOID *ExceptionAddress;                    // offset: 0x10 ordinal: 0x3
  ULONG NumberParameters;                    // offset: 0x18 ordinal: 0x4
  ULONGLONG ExceptionInformation[15];        // offset: 0x20 ordinal: 0x5
} _EXCEPTION_RECORD;

// 0x40 bytes (sizeof)
typedef struct _SECTION_IMAGE_INFORMATION {
  VOID *TransferAddress;        // offset: 0x0 ordinal: 0x0
  ULONG ZeroBits;               // offset: 0x8 ordinal: 0x1
  ULONGLONG MaximumStackSize;   // offset: 0x10 ordinal: 0x2
  ULONGLONG CommittedStackSize; // offset: 0x18 ordinal: 0x3
  ULONG SubSystemType;          // offset: 0x20 ordinal: 0x4
  USHORT SubSystemMinorVersion; // offset: 0x24 ordinal: 0x5
  USHORT SubSystemMajorVersion; // offset: 0x26 ordinal: 0x6
  ULONG SubSystemVersion;       // offset: 0x24 ordinal: 0x7
  ULONG GpValue;                // offset: 0x28 ordinal: 0x8
  USHORT ImageCharacteristics;  // offset: 0x2c ordinal: 0x9
  USHORT DllCharacteristics;    // offset: 0x2e ordinal: 0xa
  USHORT Machine;               // offset: 0x30 ordinal: 0xb
  UCHAR ImageContainsCode;      // offset: 0x32 ordinal: 0xc
  UCHAR Spare1;                 // offset: 0x33 ordinal: 0xd
  ULONG LoaderFlags;            // offset: 0x34 ordinal: 0xe
  ULONG ImageFileSize;          // offset: 0x38 ordinal: 0xf
  ULONG Reserved[1];            // offset: 0x3c ordinal: 0x10
} _SECTION_IMAGE_INFORMATION;

// 0x8 bytes (sizeof)
typedef union __anon_584 {
  struct _SECTION_IMAGE_INFORMATION
      *ImageInformation; // offset: 0x0 ordinal: 0x0
  VOID *FirstMappedVa;   // offset: 0x0 ordinal: 0x1
} __anon_584;

// 0x10 bytes (sizeof)
typedef struct _MMEXTEND_INFO {
  ULONGLONG CommittedSize; // offset: 0x0 ordinal: 0x0
  ULONG ReferenceCount;    // offset: 0x8 ordinal: 0x1
} _MMEXTEND_INFO;

// 0x8 bytes (sizeof)
typedef union __anon_583 {
  ULONGLONG ImageCommitment;         // offset: 0x0 ordinal: 0x0
  struct _EPROCESS *CreatingProcess; // offset: 0x0 ordinal: 0x1
} __anon_583;

// 0x8 bytes (sizeof)
typedef struct _SEGMENT_FLAGS {
  ULONGLONG TotalNumberOfPtes4132 : 10;    // offset: 0x0 ordinal: 0x0
  ULONGLONG ExtraSharedWowSubsections : 1; // offset: 0x0 ordinal: 0x1
  ULONGLONG LargePages : 1;                // offset: 0x0 ordinal: 0x2
  ULONGLONG Spare : 52;                    // offset: 0x0 ordinal: 0x3
} _SEGMENT_FLAGS;

// 0x8 bytes (sizeof)
typedef struct _MMVAD_FLAGS {
  ULONGLONG CommitCharge : 51; // offset: 0x0 ordinal: 0x0
  ULONGLONG NoChange : 1;      // offset: 0x0 ordinal: 0x1
  ULONGLONG VadType : 3;       // offset: 0x0 ordinal: 0x2
  ULONGLONG MemCommit : 1;     // offset: 0x0 ordinal: 0x3
  ULONGLONG Protection : 5;    // offset: 0x0 ordinal: 0x4
  ULONGLONG Spare : 2;         // offset: 0x0 ordinal: 0x5
  ULONGLONG PrivateMemory : 1; // offset: 0x0 ordinal: 0x6
} _MMVAD_FLAGS;

// 0x8 bytes (sizeof)
typedef union __anon_568 {
  ULONGLONG LongFlags;          // offset: 0x0 ordinal: 0x0
  struct _MMVAD_FLAGS VadFlags; // offset: 0x0 ordinal: 0x1
} __anon_568;

// 0x30 bytes (sizeof)
typedef struct _MMVAD_SHORT {
  union __anon_565 u1;       // offset: 0x0 ordinal: 0x0
  struct _MMVAD *LeftChild;  // offset: 0x8 ordinal: 0x1
  struct _MMVAD *RightChild; // offset: 0x10 ordinal: 0x2
  ULONGLONG StartingVpn;     // offset: 0x18 ordinal: 0x3
  ULONGLONG EndingVpn;       // offset: 0x20 ordinal: 0x4
  union __anon_568 u;        // offset: 0x28 ordinal: 0x5
} _MMVAD_SHORT;

// 0x8 bytes (sizeof)
typedef union __anon_562 {
  ULONGLONG EntireFrame;            // offset: 0x0 ordinal: 0x0
  ULONGLONG PteFrame : 57;          // offset: 0x0 ordinal: 0x1
  ULONGLONG InPageError : 1;        // offset: 0x0 ordinal: 0x2
  ULONGLONG VerifierAllocation : 1; // offset: 0x0 ordinal: 0x3
  ULONGLONG AweAllocation : 1;      // offset: 0x0 ordinal: 0x4
  ULONGLONG Priority : 3;           // offset: 0x0 ordinal: 0x5
  ULONGLONG MustBeCached : 1;       // offset: 0x0 ordinal: 0x6
} __anon_562;

// 0x8 bytes (sizeof)
typedef union __anon_558 {
  ULONGLONG Blink;      // offset: 0x0 ordinal: 0x0
  ULONGLONG ShareCount; // offset: 0x0 ordinal: 0x1
} __anon_558;

// 0x8 bytes (sizeof)
typedef union __anon_557 {
  ULONGLONG Flink;                        // offset: 0x0 ordinal: 0x0
  ULONG WsIndex;                          // offset: 0x0 ordinal: 0x1
  struct _KEVENT *Event;                  // offset: 0x0 ordinal: 0x2
  LONG ReadStatus;                        // offset: 0x0 ordinal: 0x3
  struct _SINGLE_LIST_ENTRY NextStackPfn; // offset: 0x0 ordinal: 0x4
} __anon_557;

// 0x8 bytes (sizeof)
typedef struct _MMPTE_LIST {
  ULONGLONG Valid : 1;      // offset: 0x0 ordinal: 0x0
  ULONGLONG OneEntry : 1;   // offset: 0x0 ordinal: 0x1
  ULONGLONG filler0 : 3;    // offset: 0x0 ordinal: 0x2
  ULONGLONG Protection : 5; // offset: 0x0 ordinal: 0x3
  ULONGLONG Prototype : 1;  // offset: 0x0 ordinal: 0x4
  ULONGLONG Transition : 1; // offset: 0x0 ordinal: 0x5
  ULONGLONG filler1 : 20;   // offset: 0x0 ordinal: 0x6
  ULONGLONG NextEntry : 32; // offset: 0x0 ordinal: 0x7
} _MMPTE_LIST;

// 0x8 bytes (sizeof)
typedef struct _MMPTE_SUBSECTION {
  ULONGLONG Valid : 1;             // offset: 0x0 ordinal: 0x0
  ULONGLONG Unused0 : 4;           // offset: 0x0 ordinal: 0x1
  ULONGLONG Protection : 5;        // offset: 0x0 ordinal: 0x2
  ULONGLONG Prototype : 1;         // offset: 0x0 ordinal: 0x3
  ULONGLONG Unused1 : 5;           // offset: 0x0 ordinal: 0x4
  LONGLONG SubsectionAddress : 48; // offset: 0x0 ordinal: 0x5
} _MMPTE_SUBSECTION;

// 0x8 bytes (sizeof)
typedef struct _MMPTE_TRANSITION {
  ULONGLONG Valid : 1;            // offset: 0x0 ordinal: 0x0
  ULONGLONG Write : 1;            // offset: 0x0 ordinal: 0x1
  ULONGLONG Owner : 1;            // offset: 0x0 ordinal: 0x2
  ULONGLONG WriteThrough : 1;     // offset: 0x0 ordinal: 0x3
  ULONGLONG CacheDisable : 1;     // offset: 0x0 ordinal: 0x4
  ULONGLONG Protection : 5;       // offset: 0x0 ordinal: 0x5
  ULONGLONG Prototype : 1;        // offset: 0x0 ordinal: 0x6
  ULONGLONG Transition : 1;       // offset: 0x0 ordinal: 0x7
  ULONGLONG PageFrameNumber : 28; // offset: 0x0 ordinal: 0x8
  ULONGLONG Unused : 24;          // offset: 0x0 ordinal: 0x9
} _MMPTE_TRANSITION;

// 0x8 bytes (sizeof)
typedef struct _MMPTE_SOFTWARE {
  ULONGLONG Valid : 1;                 // offset: 0x0 ordinal: 0x0
  ULONGLONG PageFileLow : 4;           // offset: 0x0 ordinal: 0x1
  ULONGLONG Protection : 5;            // offset: 0x0 ordinal: 0x2
  ULONGLONG Prototype : 1;             // offset: 0x0 ordinal: 0x3
  ULONGLONG Transition : 1;            // offset: 0x0 ordinal: 0x4
  ULONGLONG UsedPageTableEntries : 10; // offset: 0x0 ordinal: 0x5
  ULONGLONG Reserved : 10;             // offset: 0x0 ordinal: 0x6
  ULONGLONG PageFileHigh : 32;         // offset: 0x0 ordinal: 0x7
} _MMPTE_SOFTWARE;

// 0x8 bytes (sizeof)
typedef struct _MMPTE_PROTOTYPE {
  ULONGLONG Valid : 1;        // offset: 0x0 ordinal: 0x0
  ULONGLONG Unused0 : 7;      // offset: 0x0 ordinal: 0x1
  ULONGLONG ReadOnly : 1;     // offset: 0x0 ordinal: 0x2
  ULONGLONG Unused1 : 1;      // offset: 0x0 ordinal: 0x3
  ULONGLONG Prototype : 1;    // offset: 0x0 ordinal: 0x4
  ULONGLONG Protection : 5;   // offset: 0x0 ordinal: 0x5
  LONGLONG ProtoAddress : 48; // offset: 0x0 ordinal: 0x6
} _MMPTE_PROTOTYPE;

// 0x8 bytes (sizeof)
typedef struct _MMPTE_HARDWARE_LARGEPAGE {
  ULONGLONG Valid : 1;            // offset: 0x0 ordinal: 0x0
  ULONGLONG Write : 1;            // offset: 0x0 ordinal: 0x1
  ULONGLONG Owner : 1;            // offset: 0x0 ordinal: 0x2
  ULONGLONG WriteThrough : 1;     // offset: 0x0 ordinal: 0x3
  ULONGLONG CacheDisable : 1;     // offset: 0x0 ordinal: 0x4
  ULONGLONG Accessed : 1;         // offset: 0x0 ordinal: 0x5
  ULONGLONG Dirty : 1;            // offset: 0x0 ordinal: 0x6
  ULONGLONG LargePage : 1;        // offset: 0x0 ordinal: 0x7
  ULONGLONG Global : 1;           // offset: 0x0 ordinal: 0x8
  ULONGLONG CopyOnWrite : 1;      // offset: 0x0 ordinal: 0x9
  ULONGLONG Prototype : 1;        // offset: 0x0 ordinal: 0xa
  ULONGLONG reserved0 : 1;        // offset: 0x0 ordinal: 0xb
  ULONGLONG PAT : 1;              // offset: 0x0 ordinal: 0xc
  ULONGLONG reserved1 : 8;        // offset: 0x0 ordinal: 0xd
  ULONGLONG PageFrameNumber : 19; // offset: 0x0 ordinal: 0xe
  ULONGLONG reserved2 : 24;       // offset: 0x0 ordinal: 0xf
} _MMPTE_HARDWARE_LARGEPAGE;

// 0x8 bytes (sizeof)
typedef struct _MMPTE_HARDWARE {
  ULONGLONG Valid : 1;            // offset: 0x0 ordinal: 0x0
  ULONGLONG Write : 1;            // offset: 0x0 ordinal: 0x1
  ULONGLONG Owner : 1;            // offset: 0x0 ordinal: 0x2
  ULONGLONG WriteThrough : 1;     // offset: 0x0 ordinal: 0x3
  ULONGLONG CacheDisable : 1;     // offset: 0x0 ordinal: 0x4
  ULONGLONG Accessed : 1;         // offset: 0x0 ordinal: 0x5
  ULONGLONG Dirty : 1;            // offset: 0x0 ordinal: 0x6
  ULONGLONG LargePage : 1;        // offset: 0x0 ordinal: 0x7
  ULONGLONG Global : 1;           // offset: 0x0 ordinal: 0x8
  ULONGLONG CopyOnWrite : 1;      // offset: 0x0 ordinal: 0x9
  ULONGLONG Prototype : 1;        // offset: 0x0 ordinal: 0xa
  ULONGLONG reserved0 : 1;        // offset: 0x0 ordinal: 0xb
  ULONGLONG PageFrameNumber : 28; // offset: 0x0 ordinal: 0xc
  ULONGLONG reserved1 : 12;       // offset: 0x0 ordinal: 0xd
  ULONGLONG SoftwareWsIndex : 11; // offset: 0x0 ordinal: 0xe
  ULONGLONG NoExecute : 1;        // offset: 0x0 ordinal: 0xf
} _MMPTE_HARDWARE;

// 0x20 bytes (sizeof)
typedef struct _OBJECT_HEADER_QUOTA_INFO {
  ULONG PagedPoolCharge;              // offset: 0x0 ordinal: 0x0
  ULONG NonPagedPoolCharge;           // offset: 0x4 ordinal: 0x1
  ULONG SecurityDescriptorCharge;     // offset: 0x8 ordinal: 0x2
  struct _EPROCESS *ExclusiveProcess; // offset: 0x10 ordinal: 0x3
  ULONGLONG Reserved;                 // offset: 0x18 ordinal: 0x4
} _OBJECT_HEADER_QUOTA_INFO;

typedef VOID (*__anon_518)(struct _EPROCESS *, VOID *, ULONG, ULONGLONG,
                           ULONGLONG);

// 0x70 bytes (sizeof)
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
  (VOID *, struct _OBJECT_DUMP_CONTROL *); // offset: 0x30 ordinal: 0xc
  LONG(*OpenProcedure)
  (enum _OB_OPEN_REASON, struct _EPROCESS *, VOID *, ULONG,
   ULONG); // offset: 0x38 ordinal: 0xd
  VOID(*CloseProcedure)
  (struct _EPROCESS *, VOID *, ULONG, ULONGLONG,
   ULONGLONG);                     // offset: 0x40 ordinal: 0xe
  VOID (*DeleteProcedure)(VOID *); // offset: 0x48 ordinal: 0xf
  LONG(*ParseProcedure)
  (VOID *, VOID *, struct _ACCESS_STATE *, CHAR, ULONG,
   struct _UNICODE_STRING *, struct _UNICODE_STRING *, VOID *,
   struct _SECURITY_QUALITY_OF_SERVICE *,
   VOID **); // offset: 0x50 ordinal: 0x10
  LONG(*SecurityProcedure)
  (VOID *, enum _SECURITY_OPERATION_CODE, ULONG *, VOID *, ULONG *, VOID **,
   enum _POOL_TYPE, struct _GENERIC_MAPPING *,
   CHAR); // offset: 0x58 ordinal: 0x11
  LONG(*QueryNameProcedure)
  (VOID *, UCHAR, struct _OBJECT_NAME_INFORMATION *, ULONG, ULONG *,
   CHAR); // offset: 0x60 ordinal: 0x12
  UCHAR(*OkayToCloseProcedure)
  (struct _EPROCESS *, VOID *, VOID *, CHAR); // offset: 0x68 ordinal: 0x13
} _OBJECT_TYPE_INITIALIZER;

// 0x10 bytes (sizeof)
typedef struct __anon_497 {
  ULONG Level;        // offset: 0x0 ordinal: 0x0
  ULONG Vector;       // offset: 0x4 ordinal: 0x1
  ULONGLONG Affinity; // offset: 0x8 ordinal: 0x2
} __anon_497;

// 0x10 bytes (sizeof)
typedef union __anon_495 {
  struct __anon_496 Generic;            // offset: 0x0 ordinal: 0x0
  struct __anon_496 Port;               // offset: 0x0 ordinal: 0x1
  struct __anon_497 Interrupt;          // offset: 0x0 ordinal: 0x2
  struct __anon_496 Memory;             // offset: 0x0 ordinal: 0x3
  struct __anon_498 Dma;                // offset: 0x0 ordinal: 0x4
  struct __anon_492 DevicePrivate;      // offset: 0x0 ordinal: 0x5
  struct __anon_499 BusNumber;          // offset: 0x0 ordinal: 0x6
  struct __anon_500 DeviceSpecificData; // offset: 0x0 ordinal: 0x7
} __anon_495;

// 0x14 bytes (sizeof)
typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR {
  UCHAR Type;             // offset: 0x0 ordinal: 0x0
  UCHAR ShareDisposition; // offset: 0x1 ordinal: 0x1
  USHORT Flags;           // offset: 0x2 ordinal: 0x2
  union __anon_495 u;     // offset: 0x4 ordinal: 0x3
} _CM_PARTIAL_RESOURCE_DESCRIPTOR;

// 0x60 bytes (sizeof)
typedef struct _ARBITER_LIST_ENTRY {
  struct _LIST_ENTRY ListEntry;                 // offset: 0x0 ordinal: 0x0
  ULONG AlternativeCount;                       // offset: 0x10 ordinal: 0x1
  struct _IO_RESOURCE_DESCRIPTOR *Alternatives; // offset: 0x18 ordinal: 0x2
  struct _DEVICE_OBJECT *PhysicalDeviceObject;  // offset: 0x20 ordinal: 0x3
  enum _ARBITER_REQUEST_SOURCE RequestSource;   // offset: 0x28 ordinal: 0x4
  ULONG Flags;                                  // offset: 0x2c ordinal: 0x5
  LONGLONG WorkSpace;                           // offset: 0x30 ordinal: 0x6
  enum _INTERFACE_TYPE InterfaceType;           // offset: 0x38 ordinal: 0x7
  ULONG SlotNumber;                             // offset: 0x3c ordinal: 0x8
  ULONG BusNumber;                              // offset: 0x40 ordinal: 0x9
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
      *Assignment; // offset: 0x48 ordinal: 0xa
  struct _IO_RESOURCE_DESCRIPTOR
      *SelectedAlternative;    // offset: 0x50 ordinal: 0xb
  enum _ARBITER_RESULT Result; // offset: 0x58 ordinal: 0xc
} _ARBITER_LIST_ENTRY;

// 0x50 bytes (sizeof)
typedef struct _ARBITER_ALLOCATION_STATE {
  ULONGLONG Start;                                 // offset: 0x0 ordinal: 0x0
  ULONGLONG End;                                   // offset: 0x8 ordinal: 0x1
  ULONGLONG CurrentMinimum;                        // offset: 0x10 ordinal: 0x2
  ULONGLONG CurrentMaximum;                        // offset: 0x18 ordinal: 0x3
  struct _ARBITER_LIST_ENTRY *Entry;               // offset: 0x20 ordinal: 0x4
  struct _ARBITER_ALTERNATIVE *CurrentAlternative; // offset: 0x28 ordinal: 0x5
  ULONG AlternativeCount;                          // offset: 0x30 ordinal: 0x6
  struct _ARBITER_ALTERNATIVE *Alternatives;       // offset: 0x38 ordinal: 0x7
  USHORT Flags;                                    // offset: 0x40 ordinal: 0x8
  UCHAR RangeAttributes;                           // offset: 0x42 ordinal: 0x9
  UCHAR RangeAvailableAttributes;                  // offset: 0x43 ordinal: 0xa
  ULONGLONG WorkSpace;                             // offset: 0x48 ordinal: 0xb
} _ARBITER_ALLOCATION_STATE;

typedef VOID (*__anon_1143)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_ALLOCATION_STATE *);

typedef UCHAR (*__anon_1142)(struct _ARBITER_INSTANCE *,
                             struct _ARBITER_ALLOCATION_STATE *);

typedef LONG (*__anon_1141)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_ALLOCATION_STATE *);

typedef LONG (*__anon_1139)(struct _ARBITER_INSTANCE *,
                            struct _IO_RESOURCE_DESCRIPTOR *,
                            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *);

typedef LONG (*__anon_1134)(struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *,
                            ULONGLONG *, ULONG *);

typedef LONG (*__anon_1133)(struct _IO_RESOURCE_DESCRIPTOR *, ULONGLONG,
                            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *);

// 0x18 bytes (sizeof)
typedef struct __anon_1083 {
  struct _LIST_ENTRY *ArbitrationList; // offset: 0x0 ordinal: 0x0
  ULONG AllocateFromCount;             // offset: 0x8 ordinal: 0x1
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
      *AllocateFrom; // offset: 0x10 ordinal: 0x2
} __anon_1083;

// 0x170 bytes (sizeof)
typedef struct PCI_FUNCTION_RESOURCES {
  struct _IO_RESOURCE_DESCRIPTOR Limit[7]; // offset: 0x0 ordinal: 0x0
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
      Current[7]; // offset: 0xe0 ordinal: 0x1
} PCI_FUNCTION_RESOURCES;

// 0x1c bytes (sizeof)
typedef struct _CM_PARTIAL_RESOURCE_LIST {
  USHORT Version;  // offset: 0x0 ordinal: 0x0
  USHORT Revision; // offset: 0x2 ordinal: 0x1
  ULONG Count;     // offset: 0x4 ordinal: 0x2
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
      PartialDescriptors[1]; // offset: 0x8 ordinal: 0x3
} _CM_PARTIAL_RESOURCE_LIST;

// 0x8 bytes (sizeof)
typedef struct __anon_1085 {
  struct _CM_PARTIAL_RESOURCE_LIST *
      *AllocatedResources; // offset: 0x0 ordinal: 0x0
} __anon_1085;

// 0x20 bytes (sizeof)
typedef union __anon_1082 {
  struct __anon_1083 TestAllocation;          // offset: 0x0 ordinal: 0x0
  struct __anon_1083 RetestAllocation;        // offset: 0x0 ordinal: 0x1
  struct __anon_1084 BootAllocation;          // offset: 0x0 ordinal: 0x2
  struct __anon_1085 QueryAllocatedResources; // offset: 0x0 ordinal: 0x3
  struct __anon_1086 QueryConflict;           // offset: 0x0 ordinal: 0x4
  struct __anon_1084 QueryArbitrate;          // offset: 0x0 ordinal: 0x5
  struct __anon_1087 AddReserved;             // offset: 0x0 ordinal: 0x6
} __anon_1082;

// 0x20 bytes (sizeof)
typedef struct _ARBITER_PARAMETERS {
  union __anon_1082 Parameters; // offset: 0x0 ordinal: 0x0
} _ARBITER_PARAMETERS;

typedef LONG (*__anon_1078)(VOID *, enum _ARBITER_ACTION,
                            struct _ARBITER_PARAMETERS *);

// 0x30 bytes (sizeof)
typedef struct _ARBITER_INTERFACE {
  USHORT Size;                          // offset: 0x0 ordinal: 0x0
  USHORT Version;                       // offset: 0x2 ordinal: 0x1
  VOID *Context;                        // offset: 0x8 ordinal: 0x2
  VOID (*InterfaceReference)(VOID *);   // offset: 0x10 ordinal: 0x3
  VOID (*InterfaceDereference)(VOID *); // offset: 0x18 ordinal: 0x4
  LONG(*ArbiterHandler)
  (VOID *, enum _ARBITER_ACTION,
   struct _ARBITER_PARAMETERS *); // offset: 0x20 ordinal: 0x5
  ULONG Flags;                    // offset: 0x28 ordinal: 0x6
} _ARBITER_INTERFACE;

// 0x70 bytes (sizeof)
typedef struct _PI_RESOURCE_ARBITER_ENTRY {
  struct _LIST_ENTRY DeviceArbiterList;        // offset: 0x0 ordinal: 0x0
  UCHAR ResourceType;                          // offset: 0x10 ordinal: 0x1
  struct _ARBITER_INTERFACE *ArbiterInterface; // offset: 0x18 ordinal: 0x2
  ULONG Level;                                 // offset: 0x20 ordinal: 0x3
  struct _LIST_ENTRY ResourceList;             // offset: 0x28 ordinal: 0x4
  struct _LIST_ENTRY BestResourceList;         // offset: 0x38 ordinal: 0x5
  struct _LIST_ENTRY BestConfig;               // offset: 0x48 ordinal: 0x6
  struct _LIST_ENTRY ActiveArbiterList;        // offset: 0x58 ordinal: 0x7
  UCHAR State;                                 // offset: 0x68 ordinal: 0x8
  UCHAR ResourcesChanged;                      // offset: 0x69 ordinal: 0x9
} _PI_RESOURCE_ARBITER_ENTRY;

// 0x24 bytes (sizeof)
typedef struct _CM_FULL_RESOURCE_DESCRIPTOR {
  enum _INTERFACE_TYPE InterfaceType; // offset: 0x0 ordinal: 0x0
  ULONG BusNumber;                    // offset: 0x4 ordinal: 0x1
  struct _CM_PARTIAL_RESOURCE_LIST
      PartialResourceList; // offset: 0x8 ordinal: 0x2
} _CM_FULL_RESOURCE_DESCRIPTOR;

// 0x28 bytes (sizeof)
typedef struct _CM_RESOURCE_LIST {
  ULONG Count;                                 // offset: 0x0 ordinal: 0x0
  struct _CM_FULL_RESOURCE_DESCRIPTOR List[1]; // offset: 0x4 ordinal: 0x1
} _CM_RESOURCE_LIST;

typedef LONG (*__anon_1140)(struct _ARBITER_INSTANCE *,
                            struct _CM_RESOURCE_LIST *);

// 0x138 bytes (sizeof)
typedef struct _ARBITER_INSTANCE {
  ULONG Signature;                            // offset: 0x0 ordinal: 0x0
  struct _KEVENT *MutexEvent;                 // offset: 0x8 ordinal: 0x1
  USHORT *Name;                               // offset: 0x10 ordinal: 0x2
  LONG ResourceType;                          // offset: 0x18 ordinal: 0x3
  struct _RTL_RANGE_LIST *Allocation;         // offset: 0x20 ordinal: 0x4
  struct _RTL_RANGE_LIST *PossibleAllocation; // offset: 0x28 ordinal: 0x5
  struct _ARBITER_ORDERING_LIST OrderingList; // offset: 0x30 ordinal: 0x6
  struct _ARBITER_ORDERING_LIST ReservedList; // offset: 0x40 ordinal: 0x7
  LONG ReferenceCount;                        // offset: 0x50 ordinal: 0x8
  struct _ARBITER_INTERFACE *Interface;       // offset: 0x58 ordinal: 0x9
  ULONG AllocationStackMaxSize;               // offset: 0x60 ordinal: 0xa
  struct _ARBITER_ALLOCATION_STATE
      *AllocationStack; // offset: 0x68 ordinal: 0xb
  LONG(*UnpackRequirement)
  (struct _IO_RESOURCE_DESCRIPTOR *, ULONGLONG *, ULONGLONG *, ULONG *,
   ULONG *); // offset: 0x70 ordinal: 0xc
  LONG(*PackResource)
  (struct _IO_RESOURCE_DESCRIPTOR *, ULONGLONG,
   struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *); // offset: 0x78 ordinal: 0xd
  LONG(*UnpackResource)
  (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *, ULONGLONG *,
   ULONG *); // offset: 0x80 ordinal: 0xe
  LONG(*ScoreRequirement)
  (struct _IO_RESOURCE_DESCRIPTOR *); // offset: 0x88 ordinal: 0xf
  LONG(*TestAllocation)
  (struct _ARBITER_INSTANCE *,
   struct _LIST_ENTRY *); // offset: 0x90 ordinal: 0x10
  LONG(*RetestAllocation)
  (struct _ARBITER_INSTANCE *,
   struct _LIST_ENTRY *); // offset: 0x98 ordinal: 0x11
  LONG(*CommitAllocation)
  (struct _ARBITER_INSTANCE *); // offset: 0xa0 ordinal: 0x12
  LONG(*RollbackAllocation)
  (struct _ARBITER_INSTANCE *); // offset: 0xa8 ordinal: 0x13
  LONG(*BootAllocation)
  (struct _ARBITER_INSTANCE *,
   struct _LIST_ENTRY *); // offset: 0xb0 ordinal: 0x14
  LONG(*QueryArbitrate)
  (struct _ARBITER_INSTANCE *,
   struct _LIST_ENTRY *); // offset: 0xb8 ordinal: 0x15
  LONG(*QueryConflict)
  (struct _ARBITER_INSTANCE *, struct _DEVICE_OBJECT *,
   struct _IO_RESOURCE_DESCRIPTOR *, ULONG *,
   struct _ARBITER_CONFLICT_INFO **); // offset: 0xc0 ordinal: 0x16
  LONG(*AddReserved)
  (struct _ARBITER_INSTANCE *, struct _IO_RESOURCE_DESCRIPTOR *,
   struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *); // offset: 0xc8 ordinal: 0x17
  LONG(*StartArbiter)
  (struct _ARBITER_INSTANCE *,
   struct _CM_RESOURCE_LIST *); // offset: 0xd0 ordinal: 0x18
  LONG(*PreprocessEntry)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *); // offset: 0xd8 ordinal: 0x19
  LONG(*AllocateEntry)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *); // offset: 0xe0 ordinal: 0x1a
  UCHAR(*GetNextAllocationRange)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *); // offset: 0xe8 ordinal: 0x1b
  UCHAR(*FindSuitableRange)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *); // offset: 0xf0 ordinal: 0x1c
  VOID(*AddAllocation)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *); // offset: 0xf8 ordinal: 0x1d
  VOID(*BacktrackAllocation)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *); // offset: 0x100 ordinal: 0x1e
  UCHAR(*OverrideConflict)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *);   // offset: 0x108 ordinal: 0x1f
  UCHAR TransactionInProgress;            // offset: 0x110 ordinal: 0x20
  VOID *Extension;                        // offset: 0x118 ordinal: 0x21
  struct _DEVICE_OBJECT *BusDeviceObject; // offset: 0x120 ordinal: 0x22
  VOID *ConflictCallbackContext;          // offset: 0x128 ordinal: 0x23
  UCHAR(*ConflictCallback)
  (VOID *, struct _RTL_RANGE *); // offset: 0x130 ordinal: 0x24
} _ARBITER_INSTANCE;

// 0x190 bytes (sizeof)
typedef struct _PCI_ARBITER_INSTANCE {
  struct PCI_SECONDARY_EXTENSION Header;      // offset: 0x0 ordinal: 0x0
  struct _PCI_INTERFACE *Interface;           // offset: 0x18 ordinal: 0x1
  struct _PCI_FDO_EXTENSION *BusFdoExtension; // offset: 0x20 ordinal: 0x2
  USHORT InstanceName[24];                    // offset: 0x28 ordinal: 0x3
  struct _ARBITER_INSTANCE CommonInstance;    // offset: 0x58 ordinal: 0x4
} _PCI_ARBITER_INSTANCE;

typedef LONG (*__anon_1146)(struct _PCI_ARBITER_INSTANCE *);

// 0x28 bytes (sizeof)
typedef struct _PCI_INTERFACE {
  struct _GUID *InterfaceType;  // offset: 0x0 ordinal: 0x0
  USHORT MinSize;               // offset: 0x8 ordinal: 0x1
  USHORT MinVersion;            // offset: 0xa ordinal: 0x2
  USHORT MaxVersion;            // offset: 0xc ordinal: 0x3
  USHORT Flags;                 // offset: 0xe ordinal: 0x4
  LONG ReferenceCount;          // offset: 0x10 ordinal: 0x5
  enum PCI_SIGNATURE Signature; // offset: 0x14 ordinal: 0x6
  LONG(*Constructor)
  (VOID *, VOID *, VOID *, USHORT, USHORT,
   struct _INTERFACE *); // offset: 0x18 ordinal: 0x7
  LONG(*Initializer)
  (struct _PCI_ARBITER_INSTANCE *); // offset: 0x20 ordinal: 0x8
} _PCI_INTERFACE;

typedef LONG (*__anon_1054)(struct _BUS_HANDLER *, struct _BUS_HANDLER *,
                            struct _UNICODE_STRING *, struct _UNICODE_STRING *,
                            struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *,
                            ULONG, struct _CM_RESOURCE_LIST **);

// 0xb8 bytes (sizeof)
typedef struct _BUS_HANDLER {
  ULONG Version;                          // offset: 0x0 ordinal: 0x0
  enum _INTERFACE_TYPE InterfaceType;     // offset: 0x4 ordinal: 0x1
  enum _BUS_DATA_TYPE ConfigurationType;  // offset: 0x8 ordinal: 0x2
  ULONG BusNumber;                        // offset: 0xc ordinal: 0x3
  struct _DEVICE_OBJECT *DeviceObject;    // offset: 0x10 ordinal: 0x4
  struct _BUS_HANDLER *ParentHandler;     // offset: 0x18 ordinal: 0x5
  VOID *BusData;                          // offset: 0x20 ordinal: 0x6
  ULONG DeviceControlExtensionSize;       // offset: 0x28 ordinal: 0x7
  struct _SUPPORTED_RANGES *BusAddresses; // offset: 0x30 ordinal: 0x8
  ULONG Reserved[4];                      // offset: 0x38 ordinal: 0x9
  ULONG(*GetBusData)
  (struct _BUS_HANDLER *, struct _BUS_HANDLER *, ULONG, VOID *, ULONG,
   ULONG); // offset: 0x48 ordinal: 0xa
  ULONG(*SetBusData)
  (struct _BUS_HANDLER *, struct _BUS_HANDLER *, ULONG, VOID *, ULONG,
   ULONG); // offset: 0x50 ordinal: 0xb
  LONG(*AdjustResourceList)
  (struct _BUS_HANDLER *, struct _BUS_HANDLER *,
   struct _IO_RESOURCE_REQUIREMENTS_LIST **); // offset: 0x58 ordinal: 0xc
  LONG(*AssignSlotResources)
  (struct _BUS_HANDLER *, struct _BUS_HANDLER *, struct _UNICODE_STRING *,
   struct _UNICODE_STRING *, struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *,
   ULONG, struct _CM_RESOURCE_LIST **); // offset: 0x60 ordinal: 0xd
  ULONG(*GetInterruptVector)
  (struct _BUS_HANDLER *, struct _BUS_HANDLER *, ULONG, ULONG, UCHAR *,
   ULONGLONG *); // offset: 0x68 ordinal: 0xe
  UCHAR(*TranslateBusAddress)
  (struct _BUS_HANDLER *, struct _BUS_HANDLER *, union _LARGE_INTEGER, ULONG *,
   union _LARGE_INTEGER *); // offset: 0x70 ordinal: 0xf
  VOID *Spare1;             // offset: 0x78 ordinal: 0x10
  VOID *Spare2;             // offset: 0x80 ordinal: 0x11
  VOID *Spare3;             // offset: 0x88 ordinal: 0x12
  VOID *Spare4;             // offset: 0x90 ordinal: 0x13
  VOID *Spare5;             // offset: 0x98 ordinal: 0x14
  VOID *Spare6;             // offset: 0xa0 ordinal: 0x15
  VOID *Spare7;             // offset: 0xa8 ordinal: 0x16
  VOID *Spare8;             // offset: 0xb0 ordinal: 0x17
} _BUS_HANDLER;

// 0x10 bytes (sizeof)
typedef struct __anon_417 {
  struct _CM_RESOURCE_LIST *AllocatedResources; // offset: 0x0 ordinal: 0x0
  struct _CM_RESOURCE_LIST
      *AllocatedResourcesTranslated; // offset: 0x8 ordinal: 0x1
} __anon_417;

// 0x20 bytes (sizeof)
typedef struct __anon_418 {
  ULONGLONG ProviderId; // offset: 0x0 ordinal: 0x0
  VOID *DataPath;       // offset: 0x8 ordinal: 0x1
  ULONG BufferSize;     // offset: 0x10 ordinal: 0x2
  VOID *Buffer;         // offset: 0x18 ordinal: 0x3
} __anon_418;

// 0x20 bytes (sizeof)
typedef union __anon_373 {
  struct __anon_386 Create;                     // offset: 0x0 ordinal: 0x0
  struct __anon_387 CreatePipe;                 // offset: 0x0 ordinal: 0x1
  struct __anon_388 CreateMailslot;             // offset: 0x0 ordinal: 0x2
  struct __anon_389 Read;                       // offset: 0x0 ordinal: 0x3
  struct __anon_389 Write;                      // offset: 0x0 ordinal: 0x4
  struct __anon_390 QueryDirectory;             // offset: 0x0 ordinal: 0x5
  struct __anon_391 NotifyDirectory;            // offset: 0x0 ordinal: 0x6
  struct __anon_392 QueryFile;                  // offset: 0x0 ordinal: 0x7
  struct __anon_393 SetFile;                    // offset: 0x0 ordinal: 0x8
  struct __anon_394 QueryEa;                    // offset: 0x0 ordinal: 0x9
  struct __anon_395 SetEa;                      // offset: 0x0 ordinal: 0xa
  struct __anon_396 QueryVolume;                // offset: 0x0 ordinal: 0xb
  struct __anon_396 SetVolume;                  // offset: 0x0 ordinal: 0xc
  struct __anon_397 FileSystemControl;          // offset: 0x0 ordinal: 0xd
  struct __anon_398 LockControl;                // offset: 0x0 ordinal: 0xe
  struct __anon_399 DeviceIoControl;            // offset: 0x0 ordinal: 0xf
  struct __anon_400 QuerySecurity;              // offset: 0x0 ordinal: 0x10
  struct __anon_401 SetSecurity;                // offset: 0x0 ordinal: 0x11
  struct __anon_402 MountVolume;                // offset: 0x0 ordinal: 0x12
  struct __anon_402 VerifyVolume;               // offset: 0x0 ordinal: 0x13
  struct __anon_403 Scsi;                       // offset: 0x0 ordinal: 0x14
  struct __anon_404 QueryQuota;                 // offset: 0x0 ordinal: 0x15
  struct __anon_395 SetQuota;                   // offset: 0x0 ordinal: 0x16
  struct __anon_405 QueryDeviceRelations;       // offset: 0x0 ordinal: 0x17
  struct __anon_406 QueryInterface;             // offset: 0x0 ordinal: 0x18
  struct __anon_407 DeviceCapabilities;         // offset: 0x0 ordinal: 0x19
  struct __anon_408 FilterResourceRequirements; // offset: 0x0 ordinal: 0x1a
  struct __anon_409 ReadWriteConfig;            // offset: 0x0 ordinal: 0x1b
  struct __anon_410 SetLock;                    // offset: 0x0 ordinal: 0x1c
  struct __anon_411 QueryId;                    // offset: 0x0 ordinal: 0x1d
  struct __anon_412 QueryDeviceText;            // offset: 0x0 ordinal: 0x1e
  struct __anon_413 UsageNotification;          // offset: 0x0 ordinal: 0x1f
  struct __anon_414 WaitWake;                   // offset: 0x0 ordinal: 0x20
  struct __anon_415 PowerSequence;              // offset: 0x0 ordinal: 0x21
  struct __anon_416 Power;                      // offset: 0x0 ordinal: 0x22
  struct __anon_417 StartDevice;                // offset: 0x0 ordinal: 0x23
  struct __anon_418 WMI;                        // offset: 0x0 ordinal: 0x24
  struct __anon_419 Others;                     // offset: 0x0 ordinal: 0x25
} __anon_373;

// 0x8 bytes (sizeof)
typedef struct _MMWSLENTRY {
  ULONGLONG Valid : 1;              // offset: 0x0 ordinal: 0x0
  ULONGLONG LockedInWs : 1;         // offset: 0x0 ordinal: 0x1
  ULONGLONG LockedInMemory : 1;     // offset: 0x0 ordinal: 0x2
  ULONGLONG Protection : 5;         // offset: 0x0 ordinal: 0x3
  ULONGLONG Hashed : 1;             // offset: 0x0 ordinal: 0x4
  ULONGLONG Direct : 1;             // offset: 0x0 ordinal: 0x5
  ULONGLONG Age : 2;                // offset: 0x0 ordinal: 0x6
  ULONGLONG VirtualPageNumber : 52; // offset: 0x0 ordinal: 0x7
} _MMWSLENTRY;

// 0x8 bytes (sizeof)
typedef union __anon_362 {
  VOID *VirtualAddress;  // offset: 0x0 ordinal: 0x0
  ULONGLONG Long;        // offset: 0x0 ordinal: 0x1
  struct _MMWSLENTRY e1; // offset: 0x0 ordinal: 0x2
} __anon_362;

// 0x8 bytes (sizeof)
typedef struct _MMWSLE {
  union __anon_362 u1; // offset: 0x0 ordinal: 0x0
} _MMWSLE;

// 0x10 bytes (sizeof)
typedef struct _OWNER_ENTRY {
  ULONGLONG OwnerThread; // offset: 0x0 ordinal: 0x0
  union {
    LONG OwnerCount; // offset: 0x8 ordinal: 0x1
    ULONG TableSize; // offset: 0x8 ordinal: 0x2
  };
} _OWNER_ENTRY;

// 0x50 bytes (sizeof)
typedef union __anon_942 {
  struct _CELL_DATA CellData; // offset: 0x0 ordinal: 0x0
  ULONGLONG List[1];          // offset: 0x0 ordinal: 0x1
} __anon_942;

// 0x58 bytes (sizeof)
typedef struct _CM_CACHED_VALUE_INDEX {
  ULONG CellIndex;       // offset: 0x0 ordinal: 0x0
  union __anon_942 Data; // offset: 0x8 ordinal: 0x1
} _CM_CACHED_VALUE_INDEX;

// 0x80 bytes (sizeof)
typedef struct _MMWSL {
  ULONG FirstFree;                             // offset: 0x0 ordinal: 0x0
  ULONG FirstDynamic;                          // offset: 0x4 ordinal: 0x1
  ULONG LastEntry;                             // offset: 0x8 ordinal: 0x2
  ULONG NextSlot;                              // offset: 0xc ordinal: 0x3
  struct _MMWSLE *Wsle;                        // offset: 0x10 ordinal: 0x4
  ULONG LastInitializedWsle;                   // offset: 0x18 ordinal: 0x5
  ULONG NonDirectCount;                        // offset: 0x1c ordinal: 0x6
  struct _MMWSLE_HASH *HashTable;              // offset: 0x20 ordinal: 0x7
  ULONG HashTableSize;                         // offset: 0x28 ordinal: 0x8
  ULONG NumberOfCommittedPageTables;           // offset: 0x2c ordinal: 0x9
  VOID *HashTableStart;                        // offset: 0x30 ordinal: 0xa
  VOID *HighestPermittedHashAddress;           // offset: 0x38 ordinal: 0xb
  ULONG NumberOfImageWaiters;                  // offset: 0x40 ordinal: 0xc
  ULONG VadBitMapHint;                         // offset: 0x44 ordinal: 0xd
  VOID *HighestUserAddress;                    // offset: 0x48 ordinal: 0xe
  ULONG MaximumUserPageTablePages;             // offset: 0x50 ordinal: 0xf
  ULONG MaximumUserPageDirectoryPages;         // offset: 0x54 ordinal: 0x10
  ULONG *CommittedPageTables;                  // offset: 0x58 ordinal: 0x11
  ULONG NumberOfCommittedPageDirectories;      // offset: 0x60 ordinal: 0x12
  ULONG *CommittedPageDirectories;             // offset: 0x68 ordinal: 0x13
  ULONG NumberOfCommittedPageDirectoryParents; // offset: 0x70 ordinal: 0x14
  ULONGLONG CommittedPageDirectoryParents[1];  // offset: 0x78 ordinal: 0x15
} _MMWSL;

// 0x28 bytes (sizeof)
typedef struct _RTL_CRITICAL_SECTION {
  struct _RTL_CRITICAL_SECTION_DEBUG *DebugInfo; // offset: 0x0 ordinal: 0x0
  LONG LockCount;                                // offset: 0x8 ordinal: 0x1
  LONG RecursionCount;                           // offset: 0xc ordinal: 0x2
  VOID *OwningThread;                            // offset: 0x10 ordinal: 0x3
  VOID *LockSemaphore;                           // offset: 0x18 ordinal: 0x4
  ULONGLONG SpinCount;                           // offset: 0x20 ordinal: 0x5
} _RTL_CRITICAL_SECTION;

// 0x70 bytes (sizeof)
typedef struct _RTL_ATOM_TABLE {
  ULONG Signature;                              // offset: 0x0 ordinal: 0x0
  struct _RTL_CRITICAL_SECTION CriticalSection; // offset: 0x8 ordinal: 0x1
  struct _RTL_HANDLE_TABLE RtlHandleTable;      // offset: 0x30 ordinal: 0x2
  ULONG NumberOfBuckets;                        // offset: 0x60 ordinal: 0x3
  struct _RTL_ATOM_TABLE_ENTRY *Buckets[1];     // offset: 0x68 ordinal: 0x4
} _RTL_ATOM_TABLE;

// 0x30 bytes (sizeof)
typedef struct _RTL_CRITICAL_SECTION_DEBUG {
  USHORT Type;                                   // offset: 0x0 ordinal: 0x0
  USHORT CreatorBackTraceIndex;                  // offset: 0x2 ordinal: 0x1
  struct _RTL_CRITICAL_SECTION *CriticalSection; // offset: 0x8 ordinal: 0x2
  struct _LIST_ENTRY ProcessLocksList;           // offset: 0x10 ordinal: 0x3
  ULONG EntryCount;                              // offset: 0x20 ordinal: 0x4
  ULONG ContentionCount;                         // offset: 0x24 ordinal: 0x5
  ULONG Spare[2];                                // offset: 0x28 ordinal: 0x6
} _RTL_CRITICAL_SECTION_DEBUG;

// 0x20 bytes (sizeof)
typedef struct _EPROCESS_QUOTA_ENTRY {
  ULONGLONG Usage;  // offset: 0x0 ordinal: 0x0
  ULONGLONG Limit;  // offset: 0x8 ordinal: 0x1
  ULONGLONG Peak;   // offset: 0x10 ordinal: 0x2
  ULONGLONG Return; // offset: 0x18 ordinal: 0x3
} _EPROCESS_QUOTA_ENTRY;

// 0x78 bytes (sizeof)
typedef struct _EPROCESS_QUOTA_BLOCK {
  struct _EPROCESS_QUOTA_ENTRY QuotaEntry[3]; // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY QuotaList;               // offset: 0x60 ordinal: 0x1
  ULONG ReferenceCount;                       // offset: 0x70 ordinal: 0x2
  ULONG ProcessCount;                         // offset: 0x74 ordinal: 0x3
} _EPROCESS_QUOTA_BLOCK;

// 0x30 bytes (sizeof)
typedef struct _IO_COUNTERS {
  ULONGLONG ReadOperationCount;  // offset: 0x0 ordinal: 0x0
  ULONGLONG WriteOperationCount; // offset: 0x8 ordinal: 0x1
  ULONGLONG OtherOperationCount; // offset: 0x10 ordinal: 0x2
  ULONGLONG ReadTransferCount;   // offset: 0x18 ordinal: 0x3
  ULONGLONG WriteTransferCount;  // offset: 0x20 ordinal: 0x4
  ULONGLONG OtherTransferCount;  // offset: 0x28 ordinal: 0x5
} _IO_COUNTERS;

// 0x68 bytes (sizeof)
typedef struct _ERESOURCE {
  struct _LIST_ENTRY SystemResourcesList; // offset: 0x0 ordinal: 0x0
  struct _OWNER_ENTRY *OwnerTable;        // offset: 0x10 ordinal: 0x1
  SHORT ActiveCount;                      // offset: 0x18 ordinal: 0x2
  USHORT Flag;                            // offset: 0x1a ordinal: 0x3
  struct _KSEMAPHORE *SharedWaiters;      // offset: 0x20 ordinal: 0x4
  struct _KEVENT *ExclusiveWaiters;       // offset: 0x28 ordinal: 0x5
  struct _OWNER_ENTRY OwnerThreads[2];    // offset: 0x30 ordinal: 0x6
  ULONG ContentionCount;                  // offset: 0x50 ordinal: 0x7
  USHORT NumberOfSharedWaiters;           // offset: 0x54 ordinal: 0x8
  USHORT NumberOfExclusiveWaiters;        // offset: 0x56 ordinal: 0x9
  union {
    VOID *Address;                   // offset: 0x58 ordinal: 0xa
    ULONGLONG CreatorBackTraceIndex; // offset: 0x58 ordinal: 0xb
  };
  ULONGLONG SpinLock; // offset: 0x60 ordinal: 0xc
} _ERESOURCE;

// 0x68 bytes (sizeof)
typedef union __anon_700 {
  struct _RTL_CRITICAL_SECTION CriticalSection; // offset: 0x0 ordinal: 0x0
  struct _ERESOURCE Resource;                   // offset: 0x0 ordinal: 0x1
} __anon_700;

// 0x68 bytes (sizeof)
typedef struct _HEAP_LOCK {
  union __anon_700 Lock; // offset: 0x0 ordinal: 0x0
} _HEAP_LOCK;

// 0xae8 bytes (sizeof)
typedef struct _HEAP {
  struct _HEAP_ENTRY Entry;              // offset: 0x0 ordinal: 0x0
  ULONG Signature;                       // offset: 0x10 ordinal: 0x1
  ULONG Flags;                           // offset: 0x14 ordinal: 0x2
  ULONG ForceFlags;                      // offset: 0x18 ordinal: 0x3
  ULONG VirtualMemoryThreshold;          // offset: 0x1c ordinal: 0x4
  ULONGLONG SegmentReserve;              // offset: 0x20 ordinal: 0x5
  ULONGLONG SegmentCommit;               // offset: 0x28 ordinal: 0x6
  ULONGLONG DeCommitFreeBlockThreshold;  // offset: 0x30 ordinal: 0x7
  ULONGLONG DeCommitTotalFreeThreshold;  // offset: 0x38 ordinal: 0x8
  ULONGLONG TotalFreeSize;               // offset: 0x40 ordinal: 0x9
  ULONGLONG MaximumAllocationSize;       // offset: 0x48 ordinal: 0xa
  USHORT ProcessHeapsListIndex;          // offset: 0x50 ordinal: 0xb
  USHORT HeaderValidateLength;           // offset: 0x52 ordinal: 0xc
  VOID *HeaderValidateCopy;              // offset: 0x58 ordinal: 0xd
  USHORT NextAvailableTagIndex;          // offset: 0x60 ordinal: 0xe
  USHORT MaximumTagIndex;                // offset: 0x62 ordinal: 0xf
  struct _HEAP_TAG_ENTRY *TagEntries;    // offset: 0x68 ordinal: 0x10
  struct _HEAP_UCR_SEGMENT *UCRSegments; // offset: 0x70 ordinal: 0x11
  struct _HEAP_UNCOMMMTTED_RANGE
      *UnusedUnCommittedRanges;           // offset: 0x78 ordinal: 0x12
  ULONGLONG AlignRound;                   // offset: 0x80 ordinal: 0x13
  ULONGLONG AlignMask;                    // offset: 0x88 ordinal: 0x14
  struct _LIST_ENTRY VirtualAllocdBlocks; // offset: 0x90 ordinal: 0x15
  struct _HEAP_SEGMENT *Segments[64];     // offset: 0xa0 ordinal: 0x16
  union __anon_679 u;                     // offset: 0x2a0 ordinal: 0x17
  union __anon_680 u2;                    // offset: 0x2b0 ordinal: 0x18
  USHORT AllocatorBackTraceIndex;         // offset: 0x2b2 ordinal: 0x19
  ULONG NonDedicatedListLength;           // offset: 0x2b4 ordinal: 0x1a
  VOID *LargeBlocksIndex;                 // offset: 0x2b8 ordinal: 0x1b
  struct _HEAP_PSEUDO_TAG_ENTRY
      *PseudoTagEntries;             // offset: 0x2c0 ordinal: 0x1c
  struct _LIST_ENTRY FreeLists[128]; // offset: 0x2c8 ordinal: 0x1d
  struct _HEAP_LOCK *LockVariable;   // offset: 0xac8 ordinal: 0x1e
  LONG(*CommitRoutine)
  (VOID *, VOID **, ULONGLONG *); // offset: 0xad0 ordinal: 0x1f
  VOID *FrontEndHeap;             // offset: 0xad8 ordinal: 0x20
  USHORT FrontHeapLockCount;      // offset: 0xae0 ordinal: 0x21
  UCHAR FrontEndHeapType;         // offset: 0xae2 ordinal: 0x22
  UCHAR LastSegmentIndex;         // offset: 0xae3 ordinal: 0x23
} _HEAP;

// 0x68 bytes (sizeof)
typedef struct _HEAP_SEGMENT {
  struct _HEAP_ENTRY Entry;           // offset: 0x0 ordinal: 0x0
  ULONG Signature;                    // offset: 0x10 ordinal: 0x1
  ULONG Flags;                        // offset: 0x14 ordinal: 0x2
  struct _HEAP *Heap;                 // offset: 0x18 ordinal: 0x3
  ULONGLONG LargestUnCommittedRange;  // offset: 0x20 ordinal: 0x4
  VOID *BaseAddress;                  // offset: 0x28 ordinal: 0x5
  ULONG NumberOfPages;                // offset: 0x30 ordinal: 0x6
  struct _HEAP_ENTRY *FirstEntry;     // offset: 0x38 ordinal: 0x7
  struct _HEAP_ENTRY *LastValidEntry; // offset: 0x40 ordinal: 0x8
  ULONG NumberOfUnCommittedPages;     // offset: 0x48 ordinal: 0x9
  ULONG NumberOfUnCommittedRanges;    // offset: 0x4c ordinal: 0xa
  struct _HEAP_UNCOMMMTTED_RANGE
      *UnCommittedRanges;                 // offset: 0x50 ordinal: 0xb
  USHORT AllocatorBackTraceIndex;         // offset: 0x58 ordinal: 0xc
  USHORT Reserved;                        // offset: 0x5a ordinal: 0xd
  struct _HEAP_ENTRY *LastEntryInSegment; // offset: 0x60 ordinal: 0xe
} _HEAP_SEGMENT;

// 0x2c0 bytes (sizeof)
typedef struct _OBJECT_TYPE {
  struct _ERESOURCE Mutex;                  // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY TypeList;              // offset: 0x68 ordinal: 0x1
  struct _UNICODE_STRING Name;              // offset: 0x78 ordinal: 0x2
  VOID *DefaultObject;                      // offset: 0x88 ordinal: 0x3
  ULONG Index;                              // offset: 0x90 ordinal: 0x4
  ULONG TotalNumberOfObjects;               // offset: 0x94 ordinal: 0x5
  ULONG TotalNumberOfHandles;               // offset: 0x98 ordinal: 0x6
  ULONG HighWaterNumberOfObjects;           // offset: 0x9c ordinal: 0x7
  ULONG HighWaterNumberOfHandles;           // offset: 0xa0 ordinal: 0x8
  struct _OBJECT_TYPE_INITIALIZER TypeInfo; // offset: 0xa8 ordinal: 0x9
  ULONG Key;                                // offset: 0x118 ordinal: 0xa
  struct _ERESOURCE ObjectLocks[4];         // offset: 0x120 ordinal: 0xb
} _OBJECT_TYPE;

// 0x38 bytes (sizeof)
typedef struct _OBJECT_HEADER {
  LONGLONG PointerCount; // offset: 0x0 ordinal: 0x0
  union {
    LONGLONG HandleCount; // offset: 0x8 ordinal: 0x1
    VOID *NextToFree;     // offset: 0x8 ordinal: 0x2
  };
  struct _OBJECT_TYPE *Type; // offset: 0x10 ordinal: 0x3
  UCHAR NameInfoOffset;      // offset: 0x18 ordinal: 0x4
  UCHAR HandleInfoOffset;    // offset: 0x19 ordinal: 0x5
  UCHAR QuotaInfoOffset;     // offset: 0x1a ordinal: 0x6
  UCHAR Flags;               // offset: 0x1b ordinal: 0x7
  union {
    struct _OBJECT_CREATE_INFORMATION
        *ObjectCreateInfo;   // offset: 0x20 ordinal: 0x8
    VOID *QuotaBlockCharged; // offset: 0x20 ordinal: 0x9
  };
  VOID *SecurityDescriptor; // offset: 0x28 ordinal: 0xa
  struct _QUAD Body;        // offset: 0x30 ordinal: 0xb
} _OBJECT_HEADER;

// 0xd0 bytes (sizeof)
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
  struct _SID_AND_ATTRIBUTES *RestrictedSids; // offset: 0x70 ordinal: 0x11
  VOID *PrimaryGroup;                         // offset: 0x78 ordinal: 0x12
  struct _LUID_AND_ATTRIBUTES *Privileges;    // offset: 0x80 ordinal: 0x13
  ULONG *DynamicPart;                         // offset: 0x88 ordinal: 0x14
  struct _ACL *DefaultDacl;                   // offset: 0x90 ordinal: 0x15
  enum _TOKEN_TYPE TokenType;                 // offset: 0x98 ordinal: 0x16
  enum _SECURITY_IMPERSONATION_LEVEL
      ImpersonationLevel;                       // offset: 0x9c ordinal: 0x17
  UCHAR TokenFlags;                             // offset: 0xa0 ordinal: 0x18
  UCHAR TokenInUse;                             // offset: 0xa1 ordinal: 0x19
  struct _SECURITY_TOKEN_PROXY_DATA *ProxyData; // offset: 0xa8 ordinal: 0x1a
  struct _SECURITY_TOKEN_AUDIT_DATA *AuditData; // offset: 0xb0 ordinal: 0x1b
  struct _SEP_LOGON_SESSION_REFERENCES
      *LogonSession;                    // offset: 0xb8 ordinal: 0x1c
  struct _LUID OriginatingLogonSession; // offset: 0xc0 ordinal: 0x1d
  ULONG VariablePart;                   // offset: 0xc8 ordinal: 0x1e
} _TOKEN;

// 0x8 bytes (sizeof)
typedef struct __anon_467 {
  struct _ERESOURCE *ResourceToRelease; // offset: 0x0 ordinal: 0x0
} __anon_467;

// 0x10 bytes (sizeof)
typedef struct __anon_466 {
  union _LARGE_INTEGER *EndingOffset;    // offset: 0x0 ordinal: 0x0
  struct _ERESOURCE **ResourceToRelease; // offset: 0x8 ordinal: 0x1
} __anon_466;

// 0x28 bytes (sizeof)
typedef union _FS_FILTER_PARAMETERS {
  struct __anon_466 AcquireForModifiedPageWriter; // offset: 0x0 ordinal: 0x0
  struct __anon_467 ReleaseForModifiedPageWriter; // offset: 0x0 ordinal: 0x1
  struct __anon_468
      AcquireForSectionSynchronization; // offset: 0x0 ordinal: 0x2
  struct __anon_469 Others;             // offset: 0x0 ordinal: 0x3
} _FS_FILTER_PARAMETERS;

// 0x40 bytes (sizeof)
typedef struct _FS_FILTER_CALLBACK_DATA {
  ULONG SizeOfFsFilterCallbackData;       // offset: 0x0 ordinal: 0x0
  UCHAR Operation;                        // offset: 0x4 ordinal: 0x1
  UCHAR Reserved;                         // offset: 0x5 ordinal: 0x2
  struct _DEVICE_OBJECT *DeviceObject;    // offset: 0x8 ordinal: 0x3
  struct _FILE_OBJECT *FileObject;        // offset: 0x10 ordinal: 0x4
  union _FS_FILTER_PARAMETERS Parameters; // offset: 0x18 ordinal: 0x5
} _FS_FILTER_CALLBACK_DATA;

typedef VOID (*__anon_381)(struct _FS_FILTER_CALLBACK_DATA *, LONG, VOID *);

typedef LONG (*__anon_380)(struct _FS_FILTER_CALLBACK_DATA *, VOID **);

// 0x68 bytes (sizeof)
typedef struct _FS_FILTER_CALLBACKS {
  ULONG SizeOfFsFilterCallbacks; // offset: 0x0 ordinal: 0x0
  ULONG Reserved;                // offset: 0x4 ordinal: 0x1
  LONG(*PreAcquireForSectionSynchronization)
  (struct _FS_FILTER_CALLBACK_DATA *, VOID **); // offset: 0x8 ordinal: 0x2
  VOID(*PostAcquireForSectionSynchronization)
  (struct _FS_FILTER_CALLBACK_DATA *, LONG,
   VOID *); // offset: 0x10 ordinal: 0x3
  LONG(*PreReleaseForSectionSynchronization)
  (struct _FS_FILTER_CALLBACK_DATA *, VOID **); // offset: 0x18 ordinal: 0x4
  VOID(*PostReleaseForSectionSynchronization)
  (struct _FS_FILTER_CALLBACK_DATA *, LONG,
   VOID *); // offset: 0x20 ordinal: 0x5
  LONG(*PreAcquireForCcFlush)
  (struct _FS_FILTER_CALLBACK_DATA *, VOID **); // offset: 0x28 ordinal: 0x6
  VOID(*PostAcquireForCcFlush)
  (struct _FS_FILTER_CALLBACK_DATA *, LONG,
   VOID *); // offset: 0x30 ordinal: 0x7
  LONG(*PreReleaseForCcFlush)
  (struct _FS_FILTER_CALLBACK_DATA *, VOID **); // offset: 0x38 ordinal: 0x8
  VOID(*PostReleaseForCcFlush)
  (struct _FS_FILTER_CALLBACK_DATA *, LONG,
   VOID *); // offset: 0x40 ordinal: 0x9
  LONG(*PreAcquireForModifiedPageWriter)
  (struct _FS_FILTER_CALLBACK_DATA *, VOID **); // offset: 0x48 ordinal: 0xa
  VOID(*PostAcquireForModifiedPageWriter)
  (struct _FS_FILTER_CALLBACK_DATA *, LONG,
   VOID *); // offset: 0x50 ordinal: 0xb
  LONG(*PreReleaseForModifiedPageWriter)
  (struct _FS_FILTER_CALLBACK_DATA *, VOID **); // offset: 0x58 ordinal: 0xc
  VOID(*PostReleaseForModifiedPageWriter)
  (struct _FS_FILTER_CALLBACK_DATA *, LONG,
   VOID *); // offset: 0x60 ordinal: 0xd
} _FS_FILTER_CALLBACKS;

// 0x38 bytes (sizeof)
typedef struct _DRIVER_EXTENSION {
  struct _DRIVER_OBJECT *DriverObject; // offset: 0x0 ordinal: 0x0
  LONG(*AddDevice)
  (struct _DRIVER_OBJECT *,
   struct _DEVICE_OBJECT *);             // offset: 0x8 ordinal: 0x1
  ULONG Count;                           // offset: 0x10 ordinal: 0x2
  struct _UNICODE_STRING ServiceKeyName; // offset: 0x18 ordinal: 0x3
  struct _IO_CLIENT_EXTENSION
      *ClientDriverExtension;                     // offset: 0x28 ordinal: 0x4
  struct _FS_FILTER_CALLBACKS *FsFilterCallbacks; // offset: 0x30 ordinal: 0x5
} _DRIVER_EXTENSION;

typedef LONG (*__anon_346)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                           struct _ERESOURCE **, struct _DEVICE_OBJECT *);

typedef LONG (*__anon_352)(struct _FILE_OBJECT *, struct _ERESOURCE *,
                           struct _DEVICE_OBJECT *);

// 0x28 bytes (sizeof)
typedef struct _MMADDRESS_NODE {
  union __anon_259 u1;                // offset: 0x0 ordinal: 0x0
  struct _MMADDRESS_NODE *LeftChild;  // offset: 0x8 ordinal: 0x1
  struct _MMADDRESS_NODE *RightChild; // offset: 0x10 ordinal: 0x2
  ULONGLONG StartingVpn;              // offset: 0x18 ordinal: 0x3
  ULONGLONG EndingVpn;                // offset: 0x20 ordinal: 0x4
} _MMADDRESS_NODE;

// 0x28 bytes (sizeof)
typedef struct _PAGEFAULT_HISTORY {
  ULONG CurrentIndex; // offset: 0x0 ordinal: 0x0
  ULONG MaxIndex;     // offset: 0x4 ordinal: 0x1
  ULONGLONG SpinLock; // offset: 0x8 ordinal: 0x2
  VOID *Reserved;     // offset: 0x10 ordinal: 0x3
  struct _PROCESS_WS_WATCH_INFORMATION
      WatchInfo[1]; // offset: 0x18 ordinal: 0x4
} _PAGEFAULT_HISTORY;

// 0x40 bytes (sizeof)
typedef struct _MM_AVL_TABLE {
  struct _MMADDRESS_NODE BalancedRoot;       // offset: 0x0 ordinal: 0x0
  ULONGLONG DepthOfTree : 5;                 // offset: 0x28 ordinal: 0x1
  ULONGLONG Unused : 3;                      // offset: 0x28 ordinal: 0x2
  ULONGLONG NumberGenericTableElements : 56; // offset: 0x28 ordinal: 0x3
  VOID *NodeHint;                            // offset: 0x30 ordinal: 0x4
  VOID *NodeFreeHint;                        // offset: 0x38 ordinal: 0x5
} _MM_AVL_TABLE;

// 0x8 bytes (sizeof)
typedef struct _HARDWARE_PTE {
  ULONGLONG Valid : 1;            // offset: 0x0 ordinal: 0x0
  ULONGLONG Write : 1;            // offset: 0x0 ordinal: 0x1
  ULONGLONG Owner : 1;            // offset: 0x0 ordinal: 0x2
  ULONGLONG WriteThrough : 1;     // offset: 0x0 ordinal: 0x3
  ULONGLONG CacheDisable : 1;     // offset: 0x0 ordinal: 0x4
  ULONGLONG Accessed : 1;         // offset: 0x0 ordinal: 0x5
  ULONGLONG Dirty : 1;            // offset: 0x0 ordinal: 0x6
  ULONGLONG LargePage : 1;        // offset: 0x0 ordinal: 0x7
  ULONGLONG Global : 1;           // offset: 0x0 ordinal: 0x8
  ULONGLONG CopyOnWrite : 1;      // offset: 0x0 ordinal: 0x9
  ULONGLONG Prototype : 1;        // offset: 0x0 ordinal: 0xa
  ULONGLONG reserved0 : 1;        // offset: 0x0 ordinal: 0xb
  ULONGLONG PageFrameNumber : 28; // offset: 0x0 ordinal: 0xc
  ULONGLONG reserved1 : 12;       // offset: 0x0 ordinal: 0xd
  ULONGLONG SoftwareWsIndex : 11; // offset: 0x0 ordinal: 0xe
  ULONGLONG NoExecute : 1;        // offset: 0x0 ordinal: 0xf
} _HARDWARE_PTE;

// 0x8 bytes (sizeof)
typedef union __anon_548 {
  ULONGLONG Long;                             // offset: 0x0 ordinal: 0x0
  struct _MMPTE_HARDWARE Hard;                // offset: 0x0 ordinal: 0x1
  struct _MMPTE_HARDWARE_LARGEPAGE HardLarge; // offset: 0x0 ordinal: 0x2
  struct _HARDWARE_PTE Flush;                 // offset: 0x0 ordinal: 0x3
  struct _MMPTE_PROTOTYPE Proto;              // offset: 0x0 ordinal: 0x4
  struct _MMPTE_SOFTWARE Soft;                // offset: 0x0 ordinal: 0x5
  struct _MMPTE_TRANSITION Trans;             // offset: 0x0 ordinal: 0x6
  struct _MMPTE_SUBSECTION Subsect;           // offset: 0x0 ordinal: 0x7
  struct _MMPTE_LIST List;                    // offset: 0x0 ordinal: 0x8
} __anon_548;

// 0x8 bytes (sizeof)
typedef struct _MMPTE {
  union __anon_548 u; // offset: 0x0 ordinal: 0x0
} _MMPTE;

// 0x38 bytes (sizeof)
typedef struct _MMBANKED_SECTION {
  ULONGLONG BasePhysicalPage;                  // offset: 0x0 ordinal: 0x0
  struct _MMPTE *BasedPte;                     // offset: 0x8 ordinal: 0x1
  ULONG BankSize;                              // offset: 0x10 ordinal: 0x2
  ULONG BankShift;                             // offset: 0x14 ordinal: 0x3
  VOID (*BankedRoutine)(ULONG, ULONG, VOID *); // offset: 0x18 ordinal: 0x4
  VOID *Context;                               // offset: 0x20 ordinal: 0x5
  struct _MMPTE *CurrentMappedPte;             // offset: 0x28 ordinal: 0x6
  struct _MMPTE BankTemplate[1];               // offset: 0x30 ordinal: 0x7
} _MMBANKED_SECTION;

// 0x8 bytes (sizeof)
typedef union __anon_993 {
  struct _MMBANKED_SECTION *Banked;    // offset: 0x0 ordinal: 0x0
  struct _MMEXTEND_INFO *ExtendedInfo; // offset: 0x0 ordinal: 0x1
} __anon_993;

// 0x68 bytes (sizeof)
typedef struct _MMVAD_LONG {
  union __anon_565 u1;               // offset: 0x0 ordinal: 0x0
  struct _MMVAD *LeftChild;          // offset: 0x8 ordinal: 0x1
  struct _MMVAD *RightChild;         // offset: 0x10 ordinal: 0x2
  ULONGLONG StartingVpn;             // offset: 0x18 ordinal: 0x3
  ULONGLONG EndingVpn;               // offset: 0x20 ordinal: 0x4
  union __anon_568 u;                // offset: 0x28 ordinal: 0x5
  struct _CONTROL_AREA *ControlArea; // offset: 0x30 ordinal: 0x6
  struct _MMPTE *FirstPrototypePte;  // offset: 0x38 ordinal: 0x7
  struct _MMPTE *LastContiguousPte;  // offset: 0x40 ordinal: 0x8
  union __anon_570 u2;               // offset: 0x48 ordinal: 0x9
  union __anon_991 u3;               // offset: 0x50 ordinal: 0xa
  union __anon_993 u4;               // offset: 0x60 ordinal: 0xb
} _MMVAD_LONG;

// 0x40 bytes (sizeof)
typedef struct _MM_PAGED_POOL_INFO {
  struct _RTL_BITMAP *PagedPoolAllocationMap;  // offset: 0x0 ordinal: 0x0
  struct _RTL_BITMAP *EndOfPagedPoolBitmap;    // offset: 0x8 ordinal: 0x1
  struct _MMPTE *FirstPteForPagedPool;         // offset: 0x10 ordinal: 0x2
  struct _MMPTE *LastPteForPagedPool;          // offset: 0x18 ordinal: 0x3
  struct _MMPTE *NextPdeForPagedPoolExpansion; // offset: 0x20 ordinal: 0x4
  ULONG PagedPoolHint;                         // offset: 0x28 ordinal: 0x5
  ULONGLONG PagedPoolCommit;                   // offset: 0x30 ordinal: 0x6
  ULONGLONG AllocatedPagedPool;                // offset: 0x38 ordinal: 0x7
} _MM_PAGED_POOL_INFO;

// 0x30 bytes (sizeof)
typedef struct _SUBSECTION {
  struct _CONTROL_AREA *ControlArea;  // offset: 0x0 ordinal: 0x0
  union __anon_591 u;                 // offset: 0x8 ordinal: 0x1
  ULONG StartingSector;               // offset: 0xc ordinal: 0x2
  ULONG NumberOfFullSectors;          // offset: 0x10 ordinal: 0x3
  struct _MMPTE *SubsectionBase;      // offset: 0x18 ordinal: 0x4
  ULONG UnusedPtes;                   // offset: 0x20 ordinal: 0x5
  ULONG PtesInSubsection;             // offset: 0x24 ordinal: 0x6
  struct _SUBSECTION *NextSubsection; // offset: 0x28 ordinal: 0x7
} _SUBSECTION;

// 0x68 bytes (sizeof)
typedef struct _SEGMENT {
  struct _CONTROL_AREA *ControlArea;  // offset: 0x0 ordinal: 0x0
  ULONG TotalNumberOfPtes;            // offset: 0x8 ordinal: 0x1
  ULONG NonExtendedPtes;              // offset: 0xc ordinal: 0x2
  ULONG Spare0;                       // offset: 0x10 ordinal: 0x3
  ULONGLONG SizeOfSegment;            // offset: 0x18 ordinal: 0x4
  struct _MMPTE SegmentPteTemplate;   // offset: 0x20 ordinal: 0x5
  ULONGLONG NumberOfCommittedPages;   // offset: 0x28 ordinal: 0x6
  struct _MMEXTEND_INFO *ExtendInfo;  // offset: 0x30 ordinal: 0x7
  struct _SEGMENT_FLAGS SegmentFlags; // offset: 0x38 ordinal: 0x8
  VOID *BasedAddress;                 // offset: 0x40 ordinal: 0x9
  union __anon_583 u1;                // offset: 0x48 ordinal: 0xa
  union __anon_584 u2;                // offset: 0x50 ordinal: 0xb
  struct _MMPTE *PrototypePte;        // offset: 0x58 ordinal: 0xc
  struct _MMPTE ThePtes[1];           // offset: 0x60 ordinal: 0xd
} _SEGMENT;

// 0x68 bytes (sizeof)
typedef struct _LARGE_CONTROL_AREA {
  struct _SEGMENT *Segment;                  // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY DereferenceList;        // offset: 0x8 ordinal: 0x1
  ULONG NumberOfSectionReferences;           // offset: 0x18 ordinal: 0x2
  ULONG NumberOfPfnReferences;               // offset: 0x1c ordinal: 0x3
  ULONG NumberOfMappedViews;                 // offset: 0x20 ordinal: 0x4
  ULONG NumberOfSystemCacheViews;            // offset: 0x24 ordinal: 0x5
  ULONG NumberOfUserReferences;              // offset: 0x28 ordinal: 0x6
  union __anon_575 u;                        // offset: 0x2c ordinal: 0x7
  struct _FILE_OBJECT *FilePointer;          // offset: 0x30 ordinal: 0x8
  struct _EVENT_COUNTER *WaitingForDeletion; // offset: 0x38 ordinal: 0x9
  USHORT ModifiedWriteCount;                 // offset: 0x40 ordinal: 0xa
  USHORT FlushInProgressCount;               // offset: 0x42 ordinal: 0xb
  ULONG WritableUserReferences;              // offset: 0x44 ordinal: 0xc
  ULONGLONG StartingFrame;                   // offset: 0x48 ordinal: 0xd
  struct _LIST_ENTRY UserGlobalList;         // offset: 0x50 ordinal: 0xe
  ULONG SessionId;                           // offset: 0x60 ordinal: 0xf
} _LARGE_CONTROL_AREA;

// 0x48 bytes (sizeof)
typedef struct _SEGMENT_OBJECT {
  VOID *BaseAddress;                             // offset: 0x0 ordinal: 0x0
  ULONG TotalNumberOfPtes;                       // offset: 0x8 ordinal: 0x1
  union _LARGE_INTEGER SizeOfSegment;            // offset: 0x10 ordinal: 0x2
  ULONG NonExtendedPtes;                         // offset: 0x18 ordinal: 0x3
  ULONG ImageCommitment;                         // offset: 0x1c ordinal: 0x4
  struct _CONTROL_AREA *ControlArea;             // offset: 0x20 ordinal: 0x5
  struct _SUBSECTION *Subsection;                // offset: 0x28 ordinal: 0x6
  struct _LARGE_CONTROL_AREA *LargeControlArea;  // offset: 0x30 ordinal: 0x7
  struct _MMSECTION_FLAGS *MmSectionFlags;       // offset: 0x38 ordinal: 0x8
  struct _MMSUBSECTION_FLAGS *MmSubSectionFlags; // offset: 0x40 ordinal: 0x9
} _SEGMENT_OBJECT;

// 0x30 bytes (sizeof)
typedef struct _SECTION_OBJECT {
  VOID *StartingVa;                // offset: 0x0 ordinal: 0x0
  VOID *EndingVa;                  // offset: 0x8 ordinal: 0x1
  VOID *Parent;                    // offset: 0x10 ordinal: 0x2
  VOID *LeftChild;                 // offset: 0x18 ordinal: 0x3
  VOID *RightChild;                // offset: 0x20 ordinal: 0x4
  struct _SEGMENT_OBJECT *Segment; // offset: 0x28 ordinal: 0x5
} _SECTION_OBJECT;

// 0x48 bytes (sizeof)
typedef struct _CONTROL_AREA {
  struct _SEGMENT *Segment;                  // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY DereferenceList;        // offset: 0x8 ordinal: 0x1
  ULONG NumberOfSectionReferences;           // offset: 0x18 ordinal: 0x2
  ULONG NumberOfPfnReferences;               // offset: 0x1c ordinal: 0x3
  ULONG NumberOfMappedViews;                 // offset: 0x20 ordinal: 0x4
  ULONG NumberOfSystemCacheViews;            // offset: 0x24 ordinal: 0x5
  ULONG NumberOfUserReferences;              // offset: 0x28 ordinal: 0x6
  union __anon_575 u;                        // offset: 0x2c ordinal: 0x7
  struct _FILE_OBJECT *FilePointer;          // offset: 0x30 ordinal: 0x8
  struct _EVENT_COUNTER *WaitingForDeletion; // offset: 0x38 ordinal: 0x9
  USHORT ModifiedWriteCount;                 // offset: 0x40 ordinal: 0xa
  USHORT FlushInProgressCount;               // offset: 0x42 ordinal: 0xb
  ULONG WritableUserReferences;              // offset: 0x44 ordinal: 0xc
} _CONTROL_AREA;

// 0x50 bytes (sizeof)
typedef struct _MMVAD {
  union __anon_565 u1;               // offset: 0x0 ordinal: 0x0
  struct _MMVAD *LeftChild;          // offset: 0x8 ordinal: 0x1
  struct _MMVAD *RightChild;         // offset: 0x10 ordinal: 0x2
  ULONGLONG StartingVpn;             // offset: 0x18 ordinal: 0x3
  ULONGLONG EndingVpn;               // offset: 0x20 ordinal: 0x4
  union __anon_568 u;                // offset: 0x28 ordinal: 0x5
  struct _CONTROL_AREA *ControlArea; // offset: 0x30 ordinal: 0x6
  struct _MMPTE *FirstPrototypePte;  // offset: 0x38 ordinal: 0x7
  struct _MMPTE *LastContiguousPte;  // offset: 0x40 ordinal: 0x8
  union __anon_570 u2;               // offset: 0x48 ordinal: 0x9
} _MMVAD;

// 0x30 bytes (sizeof)
typedef struct _MMPFN {
  union __anon_557 u1;        // offset: 0x0 ordinal: 0x0
  struct _MMPTE *PteAddress;  // offset: 0x8 ordinal: 0x1
  union __anon_558 u2;        // offset: 0x10 ordinal: 0x2
  union __anon_560 u3;        // offset: 0x18 ordinal: 0x3
  ULONG UsedPageTableEntries; // offset: 0x1c ordinal: 0x4
  union {
    struct _MMPTE OriginalPte; // offset: 0x20 ordinal: 0x5
    LONG AweReferenceCount;    // offset: 0x20 ordinal: 0x6
  };
  union __anon_562 u4; // offset: 0x28 ordinal: 0x7
} _MMPFN;

// 0x28 bytes (sizeof)
typedef struct _KDEVICE_QUEUE {
  SHORT Type;                        // offset: 0x0 ordinal: 0x0
  SHORT Size;                        // offset: 0x2 ordinal: 0x1
  struct _LIST_ENTRY DeviceListHead; // offset: 0x8 ordinal: 0x2
  ULONGLONG Lock;                    // offset: 0x18 ordinal: 0x3
  union {
    UCHAR Busy;            // offset: 0x20 ordinal: 0x4
    LONGLONG Reserved : 8; // offset: 0x20 ordinal: 0x5
  };
  LONGLONG Hint : 56; // offset: 0x20 ordinal: 0x6
} _KDEVICE_QUEUE;

// 0x8 bytes (sizeof)
typedef struct _EX_PUSH_LOCK {
  ULONGLONG Locked : 1;         // offset: 0x0 ordinal: 0x0
  ULONGLONG Waiting : 1;        // offset: 0x0 ordinal: 0x1
  ULONGLONG Waking : 1;         // offset: 0x0 ordinal: 0x2
  ULONGLONG MultipleShared : 1; // offset: 0x0 ordinal: 0x3
  ULONGLONG Shared : 60;        // offset: 0x0 ordinal: 0x4
  union {
    ULONGLONG Value; // offset: 0x0 ordinal: 0x5
    VOID *Ptr;       // offset: 0x0 ordinal: 0x6
  };
} _EX_PUSH_LOCK;

// 0x1b8 bytes (sizeof)
typedef struct _SHARED_CACHE_MAP {
  SHORT NodeTypeCode;                         // offset: 0x0 ordinal: 0x0
  SHORT NodeByteSize;                         // offset: 0x2 ordinal: 0x1
  ULONG OpenCount;                            // offset: 0x4 ordinal: 0x2
  union _LARGE_INTEGER FileSize;              // offset: 0x8 ordinal: 0x3
  struct _LIST_ENTRY BcbList;                 // offset: 0x10 ordinal: 0x4
  union _LARGE_INTEGER SectionSize;           // offset: 0x20 ordinal: 0x5
  union _LARGE_INTEGER ValidDataLength;       // offset: 0x28 ordinal: 0x6
  union _LARGE_INTEGER ValidDataGoal;         // offset: 0x30 ordinal: 0x7
  struct _VACB *InitialVacbs[4];              // offset: 0x38 ordinal: 0x8
  struct _VACB **Vacbs;                       // offset: 0x58 ordinal: 0x9
  struct _FILE_OBJECT *FileObject;            // offset: 0x60 ordinal: 0xa
  struct _VACB *ActiveVacb;                   // offset: 0x68 ordinal: 0xb
  VOID *NeedToZero;                           // offset: 0x70 ordinal: 0xc
  ULONG ActivePage;                           // offset: 0x78 ordinal: 0xd
  ULONG NeedToZeroPage;                       // offset: 0x7c ordinal: 0xe
  ULONGLONG ActiveVacbSpinLock;               // offset: 0x80 ordinal: 0xf
  ULONG VacbActiveCount;                      // offset: 0x88 ordinal: 0x10
  ULONG DirtyPages;                           // offset: 0x8c ordinal: 0x11
  struct _LIST_ENTRY SharedCacheMapLinks;     // offset: 0x90 ordinal: 0x12
  ULONG Flags;                                // offset: 0xa0 ordinal: 0x13
  LONG Status;                                // offset: 0xa4 ordinal: 0x14
  struct _MBCB *Mbcb;                         // offset: 0xa8 ordinal: 0x15
  VOID *Section;                              // offset: 0xb0 ordinal: 0x16
  struct _KEVENT *CreateEvent;                // offset: 0xb8 ordinal: 0x17
  struct _KEVENT *WaitOnActiveCount;          // offset: 0xc0 ordinal: 0x18
  ULONG PagesToWrite;                         // offset: 0xc8 ordinal: 0x19
  LONGLONG BeyondLastFlush;                   // offset: 0xd0 ordinal: 0x1a
  struct _CACHE_MANAGER_CALLBACKS *Callbacks; // offset: 0xd8 ordinal: 0x1b
  VOID *LazyWriteContext;                     // offset: 0xe0 ordinal: 0x1c
  struct _LIST_ENTRY PrivateList;             // offset: 0xe8 ordinal: 0x1d
  VOID *LogHandle;                            // offset: 0xf8 ordinal: 0x1e
  VOID(*FlushToLsnRoutine)
  (VOID *, union _LARGE_INTEGER); // offset: 0x100 ordinal: 0x1f
  ULONG DirtyPageThreshold;       // offset: 0x108 ordinal: 0x20
  ULONG LazyWritePassCount;       // offset: 0x10c ordinal: 0x21
  struct _CACHE_UNINITIALIZE_EVENT
      *UninitializeEvent;                    // offset: 0x110 ordinal: 0x22
  struct _VACB *NeedToZeroVacb;              // offset: 0x118 ordinal: 0x23
  ULONGLONG BcbSpinLock;                     // offset: 0x120 ordinal: 0x24
  VOID *Reserved;                            // offset: 0x128 ordinal: 0x25
  struct _KEVENT Event;                      // offset: 0x130 ordinal: 0x26
  struct _EX_PUSH_LOCK VacbPushLock;         // offset: 0x148 ordinal: 0x27
  struct _PRIVATE_CACHE_MAP PrivateCacheMap; // offset: 0x150 ordinal: 0x28
  VOID *WriteBehindWorkQueueEntry;           // offset: 0x1b0 ordinal: 0x29
} _SHARED_CACHE_MAP;

// 0x28 bytes (sizeof)
typedef struct _VACB {
  VOID *BaseAddress;                        // offset: 0x0 ordinal: 0x0
  struct _SHARED_CACHE_MAP *SharedCacheMap; // offset: 0x8 ordinal: 0x1
  union __anon_674 Overlay;                 // offset: 0x10 ordinal: 0x2
  struct _LIST_ENTRY LruList;               // offset: 0x18 ordinal: 0x3
} _VACB;

// 0x140 bytes (sizeof)
typedef struct _OBJECT_DIRECTORY {
  struct _OBJECT_DIRECTORY_ENTRY *HashBuckets[37]; // offset: 0x0 ordinal: 0x0
  struct _EX_PUSH_LOCK Lock;                       // offset: 0x128 ordinal: 0x1
  struct _DEVICE_MAP *DeviceMap;                   // offset: 0x130 ordinal: 0x2
  ULONG SessionId;                                 // offset: 0x138 ordinal: 0x3
} _OBJECT_DIRECTORY;

// 0x38 bytes (sizeof)
typedef struct _DEVICE_MAP {
  struct _OBJECT_DIRECTORY *DosDevicesDirectory; // offset: 0x0 ordinal: 0x0
  struct _OBJECT_DIRECTORY
      *GlobalDosDevicesDirectory; // offset: 0x8 ordinal: 0x1
  ULONG ReferenceCount;           // offset: 0x10 ordinal: 0x2
  ULONG DriveMap;                 // offset: 0x14 ordinal: 0x3
  UCHAR DriveType[32];            // offset: 0x18 ordinal: 0x4
} _DEVICE_MAP;

// 0x20 bytes (sizeof)
typedef struct _OBJECT_HEADER_NAME_INFO {
  struct _OBJECT_DIRECTORY *Directory; // offset: 0x0 ordinal: 0x0
  struct _UNICODE_STRING Name;         // offset: 0x8 ordinal: 0x1
  ULONG QueryReferences;               // offset: 0x18 ordinal: 0x2
} _OBJECT_HEADER_NAME_INFO;

// 0x58 bytes (sizeof)
typedef struct _MMSUPPORT {
  struct _LIST_ENTRY WorkingSetExpansionLinks; // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER LastTrimTime;           // offset: 0x10 ordinal: 0x1
  struct _MMSUPPORT_FLAGS Flags;               // offset: 0x18 ordinal: 0x2
  ULONG PageFaultCount;                        // offset: 0x1c ordinal: 0x3
  ULONG PeakWorkingSetSize;                    // offset: 0x20 ordinal: 0x4
  ULONG GrowthSinceLastEstimate;               // offset: 0x24 ordinal: 0x5
  ULONG MinimumWorkingSetSize;                 // offset: 0x28 ordinal: 0x6
  ULONG MaximumWorkingSetSize;                 // offset: 0x2c ordinal: 0x7
  struct _MMWSL *VmWorkingSetList;             // offset: 0x30 ordinal: 0x8
  ULONG Claim;                                 // offset: 0x38 ordinal: 0x9
  ULONG NextEstimationSlot;                    // offset: 0x3c ordinal: 0xa
  ULONG NextAgingSlot;                         // offset: 0x40 ordinal: 0xb
  ULONG EstimatedAvailable;                    // offset: 0x44 ordinal: 0xc
  ULONG WorkingSetSize;                        // offset: 0x48 ordinal: 0xd
  struct _EX_PUSH_LOCK WorkingSetMutex;        // offset: 0x50 ordinal: 0xe
} _MMSUPPORT;

// 0x8 bytes (sizeof)
typedef struct _EX_PUSH_LOCK_CACHE_AWARE {
  struct _EX_PUSH_LOCK *Locks[1]; // offset: 0x0 ordinal: 0x0
} _EX_PUSH_LOCK_CACHE_AWARE;

// 0x8 bytes (sizeof)
typedef struct _EX_FAST_REF {
  union {
    VOID *Object;         // offset: 0x0 ordinal: 0x0
    ULONGLONG RefCnt : 4; // offset: 0x0 ordinal: 0x1
  };
  ULONGLONG Value; // offset: 0x0 ordinal: 0x2
} _EX_FAST_REF;

// 0x8 bytes (sizeof)
typedef struct _EX_RUNDOWN_REF {
  union {
    ULONGLONG Count; // offset: 0x0 ordinal: 0x0
    VOID *Ptr;       // offset: 0x0 ordinal: 0x1
  };
} _EX_RUNDOWN_REF;

// 0x10 bytes (sizeof)
typedef struct _IO_STATUS_BLOCK {
  union {
    LONG Status;   // offset: 0x0 ordinal: 0x0
    VOID *Pointer; // offset: 0x0 ordinal: 0x1
  };
  ULONGLONG Information; // offset: 0x8 ordinal: 0x2
} _IO_STATUS_BLOCK;

// 0x10 bytes (sizeof)
typedef union __anon_600 {
  struct _IO_STATUS_BLOCK IoStatus; // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER LastByte;    // offset: 0x0 ordinal: 0x1
} __anon_600;

typedef VOID (*__anon_354)(VOID *, struct _IO_STATUS_BLOCK *, ULONG);

// 0x10 bytes (sizeof)
typedef struct __anon_268 {
  VOID(*UserApcRoutine)
  (VOID *, struct _IO_STATUS_BLOCK *, ULONG); // offset: 0x0 ordinal: 0x0
  VOID *UserApcContext;                       // offset: 0x8 ordinal: 0x1
} __anon_268;

// 0x10 bytes (sizeof)
typedef union __anon_234 {
  struct __anon_268 AsynchronousParameters; // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER AllocationSize;      // offset: 0x0 ordinal: 0x1
} __anon_234;

typedef UCHAR (*__anon_350)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            ULONG, ULONG, VOID *, struct _MDL **,
                            struct _IO_STATUS_BLOCK *,
                            struct _COMPRESSED_DATA_INFO *, ULONG,
                            struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_347)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            ULONG, ULONG, struct _MDL **,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_345)(struct _FILE_OBJECT *, UCHAR,
                            struct _FILE_NETWORK_OPEN_INFORMATION *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_342)(struct _FILE_OBJECT *, UCHAR, VOID *, ULONG, VOID *,
                            ULONG, ULONG, struct _IO_STATUS_BLOCK *,
                            struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_341)(struct _FILE_OBJECT *, VOID *, ULONG,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_340)(struct _FILE_OBJECT *, struct _EPROCESS *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_339)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            union _LARGE_INTEGER *, struct _EPROCESS *, ULONG,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_338)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            union _LARGE_INTEGER *, struct _EPROCESS *, ULONG,
                            UCHAR, UCHAR, struct _IO_STATUS_BLOCK *,
                            struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_337)(struct _FILE_OBJECT *, UCHAR,
                            struct _FILE_STANDARD_INFORMATION *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_336)(struct _FILE_OBJECT *, UCHAR,
                            struct _FILE_BASIC_INFORMATION *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_335)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            ULONG, UCHAR, ULONG, VOID *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_334)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            ULONG, UCHAR, ULONG, UCHAR,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

// 0xd0 bytes (sizeof)
typedef struct _IRP {
  SHORT Type;                         // offset: 0x0 ordinal: 0x0
  USHORT Size;                        // offset: 0x2 ordinal: 0x1
  struct _MDL *MdlAddress;            // offset: 0x8 ordinal: 0x2
  ULONG Flags;                        // offset: 0x10 ordinal: 0x3
  union __anon_231 AssociatedIrp;     // offset: 0x18 ordinal: 0x4
  struct _LIST_ENTRY ThreadListEntry; // offset: 0x20 ordinal: 0x5
  struct _IO_STATUS_BLOCK IoStatus;   // offset: 0x30 ordinal: 0x6
  CHAR RequestorMode;                 // offset: 0x40 ordinal: 0x7
  UCHAR PendingReturned;              // offset: 0x41 ordinal: 0x8
  CHAR StackCount;                    // offset: 0x42 ordinal: 0x9
  CHAR CurrentLocation;               // offset: 0x43 ordinal: 0xa
  UCHAR Cancel;                       // offset: 0x44 ordinal: 0xb
  UCHAR CancelIrql;                   // offset: 0x45 ordinal: 0xc
  CHAR ApcEnvironment;                // offset: 0x46 ordinal: 0xd
  UCHAR AllocationFlags;              // offset: 0x47 ordinal: 0xe
  struct _IO_STATUS_BLOCK *UserIosb;  // offset: 0x48 ordinal: 0xf
  struct _KEVENT *UserEvent;          // offset: 0x50 ordinal: 0x10
  union __anon_234 Overlay;           // offset: 0x58 ordinal: 0x11
  VOID(*CancelRoutine)
  (struct _DEVICE_OBJECT *, struct _IRP *); // offset: 0x68 ordinal: 0x12
  VOID *UserBuffer;                         // offset: 0x70 ordinal: 0x13
  union __anon_235 Tail;                    // offset: 0x78 ordinal: 0x14
} _IRP;

// 0x58 bytes (sizeof)
typedef struct _POP_DEVICE_POWER_IRP {
  struct _SINGLE_LIST_ENTRY Free;   // offset: 0x0 ordinal: 0x0
  struct _IRP *Irp;                 // offset: 0x8 ordinal: 0x1
  struct _PO_DEVICE_NOTIFY *Notify; // offset: 0x10 ordinal: 0x2
  struct _LIST_ENTRY Pending;       // offset: 0x18 ordinal: 0x3
  struct _LIST_ENTRY Complete;      // offset: 0x28 ordinal: 0x4
  struct _LIST_ENTRY Abort;         // offset: 0x38 ordinal: 0x5
  struct _LIST_ENTRY Failed;        // offset: 0x48 ordinal: 0x6
} _POP_DEVICE_POWER_IRP;

// 0x50 bytes (sizeof)
typedef struct PCI_POWER_STATE {
  enum _SYSTEM_POWER_STATE CurrentSystemState;    // offset: 0x0 ordinal: 0x0
  enum _DEVICE_POWER_STATE CurrentDeviceState;    // offset: 0x4 ordinal: 0x1
  enum _SYSTEM_POWER_STATE SystemWakeLevel;       // offset: 0x8 ordinal: 0x2
  enum _DEVICE_POWER_STATE DeviceWakeLevel;       // offset: 0xc ordinal: 0x3
  enum _DEVICE_POWER_STATE SystemStateMapping[7]; // offset: 0x10 ordinal: 0x4
  struct _IRP *WaitWakeIrp;                       // offset: 0x30 ordinal: 0x5
  VOID(*SavedCancelRoutine)
  (struct _DEVICE_OBJECT *, struct _IRP *); // offset: 0x38 ordinal: 0x6
  LONG Paging;                              // offset: 0x40 ordinal: 0x7
  LONG Hibernate;                           // offset: 0x44 ordinal: 0x8
  LONG CrashDump;                           // offset: 0x48 ordinal: 0x9
} PCI_POWER_STATE;

// 0x1c0 bytes (sizeof)
typedef struct _DEVICE_NODE {
  struct _DEVICE_NODE *Sibling;                // offset: 0x0 ordinal: 0x0
  struct _DEVICE_NODE *Child;                  // offset: 0x8 ordinal: 0x1
  struct _DEVICE_NODE *Parent;                 // offset: 0x10 ordinal: 0x2
  struct _DEVICE_NODE *LastChild;              // offset: 0x18 ordinal: 0x3
  ULONG Level;                                 // offset: 0x20 ordinal: 0x4
  struct _PO_DEVICE_NOTIFY *Notify;            // offset: 0x28 ordinal: 0x5
  enum _PNP_DEVNODE_STATE State;               // offset: 0x30 ordinal: 0x6
  enum _PNP_DEVNODE_STATE PreviousState;       // offset: 0x34 ordinal: 0x7
  enum _PNP_DEVNODE_STATE StateHistory[20];    // offset: 0x38 ordinal: 0x8
  ULONG StateHistoryEntry;                     // offset: 0x88 ordinal: 0x9
  LONG CompletionStatus;                       // offset: 0x8c ordinal: 0xa
  struct _IRP *PendingIrp;                     // offset: 0x90 ordinal: 0xb
  ULONG Flags;                                 // offset: 0x98 ordinal: 0xc
  ULONG UserFlags;                             // offset: 0x9c ordinal: 0xd
  ULONG Problem;                               // offset: 0xa0 ordinal: 0xe
  struct _DEVICE_OBJECT *PhysicalDeviceObject; // offset: 0xa8 ordinal: 0xf
  struct _CM_RESOURCE_LIST *ResourceList;      // offset: 0xb0 ordinal: 0x10
  struct _CM_RESOURCE_LIST
      *ResourceListTranslated;         // offset: 0xb8 ordinal: 0x11
  struct _UNICODE_STRING InstancePath; // offset: 0xc0 ordinal: 0x12
  struct _UNICODE_STRING ServiceName;  // offset: 0xd0 ordinal: 0x13
  struct _DEVICE_OBJECT *DuplicatePDO; // offset: 0xe0 ordinal: 0x14
  struct _IO_RESOURCE_REQUIREMENTS_LIST
      *ResourceRequirements;                  // offset: 0xe8 ordinal: 0x15
  enum _INTERFACE_TYPE InterfaceType;         // offset: 0xf0 ordinal: 0x16
  ULONG BusNumber;                            // offset: 0xf4 ordinal: 0x17
  enum _INTERFACE_TYPE ChildInterfaceType;    // offset: 0xf8 ordinal: 0x18
  ULONG ChildBusNumber;                       // offset: 0xfc ordinal: 0x19
  USHORT ChildBusTypeIndex;                   // offset: 0x100 ordinal: 0x1a
  UCHAR RemovalPolicy;                        // offset: 0x102 ordinal: 0x1b
  UCHAR HardwareRemovalPolicy;                // offset: 0x103 ordinal: 0x1c
  struct _LIST_ENTRY TargetDeviceNotify;      // offset: 0x108 ordinal: 0x1d
  struct _LIST_ENTRY DeviceArbiterList;       // offset: 0x118 ordinal: 0x1e
  struct _LIST_ENTRY DeviceTranslatorList;    // offset: 0x128 ordinal: 0x1f
  USHORT NoTranslatorMask;                    // offset: 0x138 ordinal: 0x20
  USHORT QueryTranslatorMask;                 // offset: 0x13a ordinal: 0x21
  USHORT NoArbiterMask;                       // offset: 0x13c ordinal: 0x22
  USHORT QueryArbiterMask;                    // offset: 0x13e ordinal: 0x23
  union __anon_886 OverUsed1;                 // offset: 0x140 ordinal: 0x24
  union __anon_894 OverUsed2;                 // offset: 0x148 ordinal: 0x25
  struct _CM_RESOURCE_LIST *BootResources;    // offset: 0x150 ordinal: 0x26
  ULONG CapabilityFlags;                      // offset: 0x158 ordinal: 0x27
  struct __anon_895 DockInfo;                 // offset: 0x160 ordinal: 0x28
  ULONG DisableableDepends;                   // offset: 0x180 ordinal: 0x29
  struct _LIST_ENTRY PendedSetInterfaceState; // offset: 0x188 ordinal: 0x2a
  struct _LIST_ENTRY LegacyBusListEntry;      // offset: 0x198 ordinal: 0x2b
  ULONG DriverUnloadRetryCount;               // offset: 0x1a8 ordinal: 0x2c
  struct _DEVICE_NODE *PreviousParent;        // offset: 0x1b0 ordinal: 0x2d
  ULONG DeletedChildren;                      // offset: 0x1b8 ordinal: 0x2e
} _DEVICE_NODE;

// 0xa8 bytes (sizeof)
typedef struct _MMMOD_WRITER_MDL_ENTRY {
  struct _LIST_ENTRY Links;                      // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER WriteOffset;              // offset: 0x10 ordinal: 0x1
  union __anon_600 u;                            // offset: 0x18 ordinal: 0x2
  struct _IRP *Irp;                              // offset: 0x28 ordinal: 0x3
  ULONGLONG LastPageToWrite;                     // offset: 0x30 ordinal: 0x4
  struct _MMMOD_WRITER_LISTHEAD *PagingListHead; // offset: 0x38 ordinal: 0x5
  struct _LIST_ENTRY *CurrentList;               // offset: 0x40 ordinal: 0x6
  struct _MMPAGING_FILE *PagingFile;             // offset: 0x48 ordinal: 0x7
  struct _FILE_OBJECT *File;                     // offset: 0x50 ordinal: 0x8
  struct _CONTROL_AREA *ControlArea;             // offset: 0x58 ordinal: 0x9
  struct _ERESOURCE *FileResource;               // offset: 0x60 ordinal: 0xa
  union _LARGE_INTEGER IssueTime;                // offset: 0x68 ordinal: 0xb
  struct _MDL Mdl;                               // offset: 0x70 ordinal: 0xc
  ULONGLONG Page[1];                             // offset: 0xa0 ordinal: 0xd
} _MMMOD_WRITER_MDL_ENTRY;

// 0x78 bytes (sizeof)
typedef struct _MMPAGING_FILE {
  ULONGLONG Size;                           // offset: 0x0 ordinal: 0x0
  ULONGLONG MaximumSize;                    // offset: 0x8 ordinal: 0x1
  ULONGLONG MinimumSize;                    // offset: 0x10 ordinal: 0x2
  ULONGLONG FreeSpace;                      // offset: 0x18 ordinal: 0x3
  ULONGLONG CurrentUsage;                   // offset: 0x20 ordinal: 0x4
  ULONGLONG PeakUsage;                      // offset: 0x28 ordinal: 0x5
  ULONGLONG HighestPage;                    // offset: 0x30 ordinal: 0x6
  struct _FILE_OBJECT *File;                // offset: 0x38 ordinal: 0x7
  struct _MMMOD_WRITER_MDL_ENTRY *Entry[2]; // offset: 0x40 ordinal: 0x8
  struct _UNICODE_STRING PageFileName;      // offset: 0x50 ordinal: 0x9
  struct _RTL_BITMAP *Bitmap;               // offset: 0x60 ordinal: 0xa
  ULONG PageFileNumber : 4;                 // offset: 0x68 ordinal: 0xb
  ULONG ReferenceCount : 4;                 // offset: 0x68 ordinal: 0xc
  ULONG BootPartition : 1;                  // offset: 0x68 ordinal: 0xd
  ULONG Reserved : 23;                      // offset: 0x68 ordinal: 0xe
  VOID *FileHandle;                         // offset: 0x70 ordinal: 0xf
} _MMPAGING_FILE;

typedef LONG (*__anon_420)(struct _DEVICE_OBJECT *, struct _IRP *, VOID *);

// 0x48 bytes (sizeof)
typedef struct _IO_STACK_LOCATION {
  UCHAR MajorFunction;                 // offset: 0x0 ordinal: 0x0
  UCHAR MinorFunction;                 // offset: 0x1 ordinal: 0x1
  UCHAR Flags;                         // offset: 0x2 ordinal: 0x2
  UCHAR Control;                       // offset: 0x3 ordinal: 0x3
  union __anon_373 Parameters;         // offset: 0x8 ordinal: 0x4
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x28 ordinal: 0x5
  struct _FILE_OBJECT *FileObject;     // offset: 0x30 ordinal: 0x6
  LONG(*CompletionRoutine)
  (struct _DEVICE_OBJECT *, struct _IRP *, VOID *); // offset: 0x38 ordinal: 0x7
  VOID *Context;                                    // offset: 0x40 ordinal: 0x8
} _IO_STACK_LOCATION;

typedef LONG (*__anon_1030)(struct _IRP *, struct _IO_STACK_LOCATION *,
                            struct _PCI_COMMON_EXTENSION *);

// 0x10 bytes (sizeof)
typedef struct _PCI_MN_DISPATCH_TABLE {
  enum _PCI_DISPATCH_STYLE DispatchStyle; // offset: 0x0 ordinal: 0x0
  LONG(*DispatchFunction)
  (struct _IRP *, struct _IO_STACK_LOCATION *,
   struct _PCI_COMMON_EXTENSION *); // offset: 0x8 ordinal: 0x1
} _PCI_MN_DISPATCH_TABLE;

// 0x40 bytes (sizeof)
typedef struct _PCI_MJ_DISPATCH_TABLE {
  ULONG PnpIrpMaximumMinorFunction; // offset: 0x0 ordinal: 0x0
  struct _PCI_MN_DISPATCH_TABLE
      *PnpIrpDispatchTable;           // offset: 0x8 ordinal: 0x1
  ULONG PowerIrpMaximumMinorFunction; // offset: 0x10 ordinal: 0x2
  struct _PCI_MN_DISPATCH_TABLE
      *PowerIrpDispatchTable; // offset: 0x18 ordinal: 0x3
  enum _PCI_DISPATCH_STYLE
      SystemControlIrpDispatchStyle; // offset: 0x20 ordinal: 0x4
  LONG(*SystemControlIrpDispatchFunction)
  (struct _IRP *, struct _IO_STACK_LOCATION *,
   struct _PCI_COMMON_EXTENSION *);               // offset: 0x28 ordinal: 0x5
  enum _PCI_DISPATCH_STYLE OtherIrpDispatchStyle; // offset: 0x30 ordinal: 0x6
  LONG(*OtherIrpDispatchFunction)
  (struct _IRP *, struct _IO_STACK_LOCATION *,
   struct _PCI_COMMON_EXTENSION *); // offset: 0x38 ordinal: 0x7
} _PCI_MJ_DISPATCH_TABLE;

// 0x38 bytes (sizeof)
typedef struct _PCI_COMMON_EXTENSION {
  VOID *Next;                                      // offset: 0x0 ordinal: 0x0
  enum PCI_SIGNATURE ExtensionType;                // offset: 0x8 ordinal: 0x1
  struct _PCI_MJ_DISPATCH_TABLE *IrpDispatchTable; // offset: 0x10 ordinal: 0x2
  UCHAR DeviceState;                               // offset: 0x18 ordinal: 0x3
  UCHAR TentativeNextState;                        // offset: 0x19 ordinal: 0x4
  struct _KEVENT SecondaryExtLock;                 // offset: 0x20 ordinal: 0x5
} _PCI_COMMON_EXTENSION;

// 0x130 bytes (sizeof)
typedef struct _PCI_FDO_EXTENSION {
  struct _SINGLE_LIST_ENTRY List;                  // offset: 0x0 ordinal: 0x0
  enum PCI_SIGNATURE ExtensionType;                // offset: 0x8 ordinal: 0x1
  struct _PCI_MJ_DISPATCH_TABLE *IrpDispatchTable; // offset: 0x10 ordinal: 0x2
  UCHAR DeviceState;                               // offset: 0x18 ordinal: 0x3
  UCHAR TentativeNextState;                        // offset: 0x19 ordinal: 0x4
  struct _KEVENT SecondaryExtLock;                 // offset: 0x20 ordinal: 0x5
  struct _DEVICE_OBJECT *PhysicalDeviceObject;     // offset: 0x38 ordinal: 0x6
  struct _DEVICE_OBJECT *FunctionalDeviceObject;   // offset: 0x40 ordinal: 0x7
  struct _DEVICE_OBJECT *AttachedDeviceObject;     // offset: 0x48 ordinal: 0x8
  struct _KEVENT ChildListLock;                    // offset: 0x50 ordinal: 0x9
  struct _PCI_PDO_EXTENSION *ChildPdoList;         // offset: 0x68 ordinal: 0xa
  struct _PCI_FDO_EXTENSION *BusRootFdoExtension;  // offset: 0x70 ordinal: 0xb
  struct _PCI_FDO_EXTENSION *ParentFdoExtension;   // offset: 0x78 ordinal: 0xc
  struct _PCI_PDO_EXTENSION *ChildBridgePdoList;   // offset: 0x80 ordinal: 0xd
  struct _PCI_BUS_INTERFACE_STANDARD
      *PciBusInterface;                         // offset: 0x88 ordinal: 0xe
  UCHAR MaxSubordinateBus;                      // offset: 0x90 ordinal: 0xf
  struct _BUS_HANDLER *BusHandler;              // offset: 0x98 ordinal: 0x10
  UCHAR BaseBus;                                // offset: 0xa0 ordinal: 0x11
  UCHAR Fake;                                   // offset: 0xa1 ordinal: 0x12
  UCHAR ChildDelete;                            // offset: 0xa2 ordinal: 0x13
  UCHAR Scanned;                                // offset: 0xa3 ordinal: 0x14
  UCHAR ArbitersInitialized;                    // offset: 0xa4 ordinal: 0x15
  UCHAR BrokenVideoHackApplied;                 // offset: 0xa5 ordinal: 0x16
  UCHAR Hibernated;                             // offset: 0xa6 ordinal: 0x17
  struct PCI_POWER_STATE PowerState;            // offset: 0xa8 ordinal: 0x18
  struct _SINGLE_LIST_ENTRY SecondaryExtension; // offset: 0xf8 ordinal: 0x19
  ULONG ChildWaitWakeCount;                     // offset: 0x100 ordinal: 0x1a
  struct _PCI_COMMON_CONFIG *PreservedConfig;   // offset: 0x108 ordinal: 0x1b
  struct _PCI_LOCK Lock;                        // offset: 0x110 ordinal: 0x1c
  struct __anon_1026 HotPlugParameters;         // offset: 0x120 ordinal: 0x1d
  ULONG BusHackFlags;                           // offset: 0x128 ordinal: 0x1e
} _PCI_FDO_EXTENSION;

// 0x120 bytes (sizeof)
typedef struct _PCI_PDO_EXTENSION {
  struct _PCI_PDO_EXTENSION *Next;                 // offset: 0x0 ordinal: 0x0
  enum PCI_SIGNATURE ExtensionType;                // offset: 0x8 ordinal: 0x1
  struct _PCI_MJ_DISPATCH_TABLE *IrpDispatchTable; // offset: 0x10 ordinal: 0x2
  UCHAR DeviceState;                               // offset: 0x18 ordinal: 0x3
  UCHAR TentativeNextState;                        // offset: 0x19 ordinal: 0x4
  struct _KEVENT SecondaryExtLock;                 // offset: 0x20 ordinal: 0x5
  struct _PCI_SLOT_NUMBER Slot;                    // offset: 0x38 ordinal: 0x6
  struct _DEVICE_OBJECT *PhysicalDeviceObject;     // offset: 0x40 ordinal: 0x7
  struct _PCI_FDO_EXTENSION *ParentFdoExtension;   // offset: 0x48 ordinal: 0x8
  struct _SINGLE_LIST_ENTRY SecondaryExtension;    // offset: 0x50 ordinal: 0x9
  ULONG BusInterfaceReferenceCount;                // offset: 0x58 ordinal: 0xa
  ULONG AgpInterfaceReferenceCount;                // offset: 0x5c ordinal: 0xb
  USHORT VendorId;                                 // offset: 0x60 ordinal: 0xc
  USHORT DeviceId;                                 // offset: 0x62 ordinal: 0xd
  USHORT SubsystemVendorId;                        // offset: 0x64 ordinal: 0xe
  USHORT SubsystemId;                              // offset: 0x66 ordinal: 0xf
  UCHAR RevisionId;                                // offset: 0x68 ordinal: 0x10
  UCHAR ProgIf;                                    // offset: 0x69 ordinal: 0x11
  UCHAR SubClass;                                  // offset: 0x6a ordinal: 0x12
  UCHAR BaseClass;                                 // offset: 0x6b ordinal: 0x13
  UCHAR AdditionalResourceCount;                   // offset: 0x6c ordinal: 0x14
  UCHAR AdjustedInterruptLine;                     // offset: 0x6d ordinal: 0x15
  UCHAR InterruptPin;                              // offset: 0x6e ordinal: 0x16
  UCHAR RawInterruptLine;                          // offset: 0x6f ordinal: 0x17
  UCHAR CapabilitiesPtr;                           // offset: 0x70 ordinal: 0x18
  UCHAR SavedLatencyTimer;                         // offset: 0x71 ordinal: 0x19
  UCHAR SavedCacheLineSize;                        // offset: 0x72 ordinal: 0x1a
  UCHAR HeaderType;                                // offset: 0x73 ordinal: 0x1b
  UCHAR NotPresent;                                // offset: 0x74 ordinal: 0x1c
  UCHAR ReportedMissing;                           // offset: 0x75 ordinal: 0x1d
  UCHAR ExpectedWritebackFailure;                  // offset: 0x76 ordinal: 0x1e
  UCHAR NoTouchPmeEnable;                          // offset: 0x77 ordinal: 0x1f
  UCHAR LegacyDriver;                              // offset: 0x78 ordinal: 0x20
  UCHAR UpdateHardware;                            // offset: 0x79 ordinal: 0x21
  UCHAR MovedDevice;                               // offset: 0x7a ordinal: 0x22
  UCHAR DisablePowerDown;                          // offset: 0x7b ordinal: 0x23
  UCHAR NeedsHotPlugConfiguration;                 // offset: 0x7c ordinal: 0x24
  UCHAR IDEInNativeMode;                           // offset: 0x7d ordinal: 0x25
  UCHAR BIOSAllowsIDESwitchToNativeMode;           // offset: 0x7e ordinal: 0x26
  UCHAR IoSpaceUnderNativeIdeControl;              // offset: 0x7f ordinal: 0x27
  UCHAR OnDebugPath;                               // offset: 0x80 ordinal: 0x28
  UCHAR IoSpaceNotRequired;                        // offset: 0x81 ordinal: 0x29
  struct PCI_POWER_STATE PowerState;               // offset: 0x88 ordinal: 0x2a
  union PCI_HEADER_TYPE_DEPENDENT Dependent;       // offset: 0xd8 ordinal: 0x2b
  ULONGLONG HackFlags;                             // offset: 0xe0 ordinal: 0x2c
  struct PCI_FUNCTION_RESOURCES *Resources;        // offset: 0xe8 ordinal: 0x2d
  struct _PCI_FDO_EXTENSION *BridgeFdoExtension;   // offset: 0xf0 ordinal: 0x2e
  struct _PCI_PDO_EXTENSION *NextBridge;           // offset: 0xf8 ordinal: 0x2f
  struct _PCI_PDO_EXTENSION *NextHashEntry; // offset: 0x100 ordinal: 0x30
  struct _PCI_LOCK Lock;                    // offset: 0x108 ordinal: 0x31
  struct _PCI_PMC PowerCapabilities;        // offset: 0x118 ordinal: 0x32
  UCHAR TargetAgpCapabilityId;              // offset: 0x11a ordinal: 0x33
  USHORT CommandEnables;                    // offset: 0x11c ordinal: 0x34
  USHORT InitialCommand;                    // offset: 0x11e ordinal: 0x35
} _PCI_PDO_EXTENSION;

typedef UCHAR (*__anon_351)(struct _IRP *,
                            struct _FILE_NETWORK_OPEN_INFORMATION *,
                            struct _DEVICE_OBJECT *);

// 0xe0 bytes (sizeof)
typedef struct _FAST_IO_DISPATCH {
  ULONG SizeOfFastIoDispatch; // offset: 0x0 ordinal: 0x0
  UCHAR(*FastIoCheckIfPossible)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, ULONG, UCHAR, ULONG, UCHAR,
   struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x8 ordinal: 0x1
  UCHAR(*FastIoRead)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, ULONG, UCHAR, ULONG, VOID *,
   struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x10 ordinal: 0x2
  UCHAR(*FastIoWrite)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, ULONG, UCHAR, ULONG, VOID *,
   struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x18 ordinal: 0x3
  UCHAR(*FastIoQueryBasicInfo)
  (struct _FILE_OBJECT *, UCHAR, struct _FILE_BASIC_INFORMATION *,
   struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x20 ordinal: 0x4
  UCHAR(*FastIoQueryStandardInfo)
  (struct _FILE_OBJECT *, UCHAR, struct _FILE_STANDARD_INFORMATION *,
   struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x28 ordinal: 0x5
  UCHAR(*FastIoLock)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, union _LARGE_INTEGER *,
   struct _EPROCESS *, ULONG, UCHAR, UCHAR, struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x30 ordinal: 0x6
  UCHAR(*FastIoUnlockSingle)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, union _LARGE_INTEGER *,
   struct _EPROCESS *, ULONG, struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x38 ordinal: 0x7
  UCHAR(*FastIoUnlockAll)
  (struct _FILE_OBJECT *, struct _EPROCESS *, struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x40 ordinal: 0x8
  UCHAR(*FastIoUnlockAllByKey)
  (struct _FILE_OBJECT *, VOID *, ULONG, struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x48 ordinal: 0x9
  UCHAR(*FastIoDeviceControl)
  (struct _FILE_OBJECT *, UCHAR, VOID *, ULONG, VOID *, ULONG, ULONG,
   struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x50 ordinal: 0xa
  VOID(*AcquireFileForNtCreateSection)
  (struct _FILE_OBJECT *); // offset: 0x58 ordinal: 0xb
  VOID(*ReleaseFileForNtCreateSection)
  (struct _FILE_OBJECT *); // offset: 0x60 ordinal: 0xc
  VOID(*FastIoDetachDevice)
  (struct _DEVICE_OBJECT *,
   struct _DEVICE_OBJECT *); // offset: 0x68 ordinal: 0xd
  UCHAR(*FastIoQueryNetworkOpenInfo)
  (struct _FILE_OBJECT *, UCHAR, struct _FILE_NETWORK_OPEN_INFORMATION *,
   struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x70 ordinal: 0xe
  LONG(*AcquireForModWrite)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, struct _ERESOURCE **,
   struct _DEVICE_OBJECT *); // offset: 0x78 ordinal: 0xf
  UCHAR(*MdlRead)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, ULONG, ULONG, struct _MDL **,
   struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x80 ordinal: 0x10
  UCHAR(*MdlReadComplete)
  (struct _FILE_OBJECT *, struct _MDL *,
   struct _DEVICE_OBJECT *); // offset: 0x88 ordinal: 0x11
  UCHAR(*PrepareMdlWrite)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, ULONG, ULONG, struct _MDL **,
   struct _IO_STATUS_BLOCK *,
   struct _DEVICE_OBJECT *); // offset: 0x90 ordinal: 0x12
  UCHAR(*MdlWriteComplete)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, struct _MDL *,
   struct _DEVICE_OBJECT *); // offset: 0x98 ordinal: 0x13
  UCHAR(*FastIoReadCompressed)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, ULONG, ULONG, VOID *,
   struct _MDL **, struct _IO_STATUS_BLOCK *, struct _COMPRESSED_DATA_INFO *,
   ULONG, struct _DEVICE_OBJECT *); // offset: 0xa0 ordinal: 0x14
  UCHAR(*FastIoWriteCompressed)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, ULONG, ULONG, VOID *,
   struct _MDL **, struct _IO_STATUS_BLOCK *, struct _COMPRESSED_DATA_INFO *,
   ULONG, struct _DEVICE_OBJECT *); // offset: 0xa8 ordinal: 0x15
  UCHAR(*MdlReadCompleteCompressed)
  (struct _FILE_OBJECT *, struct _MDL *,
   struct _DEVICE_OBJECT *); // offset: 0xb0 ordinal: 0x16
  UCHAR(*MdlWriteCompleteCompressed)
  (struct _FILE_OBJECT *, union _LARGE_INTEGER *, struct _MDL *,
   struct _DEVICE_OBJECT *); // offset: 0xb8 ordinal: 0x17
  UCHAR(*FastIoQueryOpen)
  (struct _IRP *, struct _FILE_NETWORK_OPEN_INFORMATION *,
   struct _DEVICE_OBJECT *); // offset: 0xc0 ordinal: 0x18
  LONG(*ReleaseForModWrite)
  (struct _FILE_OBJECT *, struct _ERESOURCE *,
   struct _DEVICE_OBJECT *); // offset: 0xc8 ordinal: 0x19
  LONG(*AcquireForCcFlush)
  (struct _FILE_OBJECT *,
   struct _DEVICE_OBJECT *); // offset: 0xd0 ordinal: 0x1a
  LONG(*ReleaseForCcFlush)
  (struct _FILE_OBJECT *,
   struct _DEVICE_OBJECT *); // offset: 0xd8 ordinal: 0x1b
} _FAST_IO_DISPATCH;

typedef LONG (*__anon_313)(struct _DEVICE_OBJECT *, struct _IRP *);

// 0x150 bytes (sizeof)
typedef struct _DRIVER_OBJECT {
  SHORT Type;                                // offset: 0x0 ordinal: 0x0
  SHORT Size;                                // offset: 0x2 ordinal: 0x1
  struct _DEVICE_OBJECT *DeviceObject;       // offset: 0x8 ordinal: 0x2
  ULONG Flags;                               // offset: 0x10 ordinal: 0x3
  VOID *DriverStart;                         // offset: 0x18 ordinal: 0x4
  ULONG DriverSize;                          // offset: 0x20 ordinal: 0x5
  VOID *DriverSection;                       // offset: 0x28 ordinal: 0x6
  struct _DRIVER_EXTENSION *DriverExtension; // offset: 0x30 ordinal: 0x7
  struct _UNICODE_STRING DriverName;         // offset: 0x38 ordinal: 0x8
  struct _UNICODE_STRING *HardwareDatabase;  // offset: 0x48 ordinal: 0x9
  struct _FAST_IO_DISPATCH *FastIoDispatch;  // offset: 0x50 ordinal: 0xa
  LONG(*DriverInit)
  (struct _DRIVER_OBJECT *,
   struct _UNICODE_STRING *); // offset: 0x58 ordinal: 0xb
  VOID(*DriverStartIo)
  (struct _DEVICE_OBJECT *, struct _IRP *);      // offset: 0x60 ordinal: 0xc
  VOID (*DriverUnload)(struct _DRIVER_OBJECT *); // offset: 0x68 ordinal: 0xd
  LONG(*MajorFunction[28])
  (struct _DEVICE_OBJECT *, struct _IRP *); // offset: 0x70 ordinal: 0xe
} _DRIVER_OBJECT;

typedef enum _IO_ALLOCATION_ACTION (*__anon_271)(struct _DEVICE_OBJECT *,
                                                 struct _IRP *, VOID *, VOID *);

// 0x48 bytes (sizeof)
typedef struct _WAIT_CONTEXT_BLOCK {
  struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry; // offset: 0x0 ordinal: 0x0
  enum _IO_ALLOCATION_ACTION (*DeviceRoutine)(
      struct _DEVICE_OBJECT *, struct _IRP *, VOID *,
      VOID *);                     // offset: 0x18 ordinal: 0x1
  VOID *DeviceContext;             // offset: 0x20 ordinal: 0x2
  ULONG NumberOfMapRegisters;      // offset: 0x28 ordinal: 0x3
  VOID *DeviceObject;              // offset: 0x30 ordinal: 0x4
  VOID *CurrentIrp;                // offset: 0x38 ordinal: 0x5
  struct _KDPC *BufferChainingDpc; // offset: 0x40 ordinal: 0x6
} _WAIT_CONTEXT_BLOCK;

// 0x48 bytes (sizeof)
typedef union __anon_191 {
  struct _LIST_ENTRY ListEntry;   // offset: 0x0 ordinal: 0x0
  struct _WAIT_CONTEXT_BLOCK Wcb; // offset: 0x0 ordinal: 0x1
} __anon_191;

typedef VOID (*__anon_264)(struct _DEVICE_OBJECT *, struct _IRP *);

// 0x150 bytes (sizeof)
typedef struct _DEVICE_OBJECT {
  SHORT Type;                            // offset: 0x0 ordinal: 0x0
  USHORT Size;                           // offset: 0x2 ordinal: 0x1
  LONG ReferenceCount;                   // offset: 0x4 ordinal: 0x2
  struct _DRIVER_OBJECT *DriverObject;   // offset: 0x8 ordinal: 0x3
  struct _DEVICE_OBJECT *NextDevice;     // offset: 0x10 ordinal: 0x4
  struct _DEVICE_OBJECT *AttachedDevice; // offset: 0x18 ordinal: 0x5
  struct _IRP *CurrentIrp;               // offset: 0x20 ordinal: 0x6
  struct _IO_TIMER *Timer;               // offset: 0x28 ordinal: 0x7
  ULONG Flags;                           // offset: 0x30 ordinal: 0x8
  ULONG Characteristics;                 // offset: 0x34 ordinal: 0x9
  struct _VPB *Vpb;                      // offset: 0x38 ordinal: 0xa
  VOID *DeviceExtension;                 // offset: 0x40 ordinal: 0xb
  ULONG DeviceType;                      // offset: 0x48 ordinal: 0xc
  CHAR StackSize;                        // offset: 0x4c ordinal: 0xd
  union __anon_191 Queue;                // offset: 0x50 ordinal: 0xe
  ULONG AlignmentRequirement;            // offset: 0x98 ordinal: 0xf
  struct _KDEVICE_QUEUE DeviceQueue;     // offset: 0xa0 ordinal: 0x10
  struct _KDPC Dpc;                      // offset: 0xc8 ordinal: 0x11
  ULONG ActiveThreadCount;               // offset: 0x108 ordinal: 0x12
  VOID *SecurityDescriptor;              // offset: 0x110 ordinal: 0x13
  struct _KEVENT DeviceLock;             // offset: 0x118 ordinal: 0x14
  USHORT SectorSize;                     // offset: 0x130 ordinal: 0x15
  USHORT Spare1;                         // offset: 0x132 ordinal: 0x16
  struct _DEVOBJ_EXTENSION
      *DeviceObjectExtension; // offset: 0x138 ordinal: 0x17
  VOID *Reserved;             // offset: 0x140 ordinal: 0x18
} _DEVICE_OBJECT;

// 0x28 bytes (sizeof)
typedef struct _KERNEL_STACK_SEGMENT {
  ULONGLONG StackBase;    // offset: 0x0 ordinal: 0x0
  ULONGLONG StackLimit;   // offset: 0x8 ordinal: 0x1
  ULONGLONG KernelStack;  // offset: 0x10 ordinal: 0x2
  ULONGLONG InitialStack; // offset: 0x18 ordinal: 0x3
  ULONGLONG ActualLimit;  // offset: 0x20 ordinal: 0x4
} _KERNEL_STACK_SEGMENT;

typedef VOID *(*__anon_154)(enum _POOL_TYPE, ULONGLONG, ULONG);

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

// 0xb8 bytes (sizeof)
typedef struct _KPROCESS {
  struct _DISPATCHER_HEADER Header;        // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY ProfileListHead;      // offset: 0x18 ordinal: 0x1
  ULONGLONG DirectoryTableBase[2];         // offset: 0x28 ordinal: 0x2
  USHORT IopmOffset;                       // offset: 0x38 ordinal: 0x3
  ULONGLONG ActiveProcessors;              // offset: 0x40 ordinal: 0x4
  ULONG KernelTime;                        // offset: 0x48 ordinal: 0x5
  ULONG UserTime;                          // offset: 0x4c ordinal: 0x6
  struct _LIST_ENTRY ReadyListHead;        // offset: 0x50 ordinal: 0x7
  struct _SINGLE_LIST_ENTRY SwapListEntry; // offset: 0x60 ordinal: 0x8
  VOID *Reserved1;                         // offset: 0x68 ordinal: 0x9
  struct _LIST_ENTRY ThreadListHead;       // offset: 0x70 ordinal: 0xa
  ULONGLONG ProcessLock;                   // offset: 0x80 ordinal: 0xb
  ULONGLONG Affinity;                      // offset: 0x88 ordinal: 0xc
  LONG AutoAlignment : 1;                  // offset: 0x90 ordinal: 0xd
  LONG DisableBoost : 1;                   // offset: 0x90 ordinal: 0xe
  LONG DisableQuantum : 1;                 // offset: 0x90 ordinal: 0xf
  LONG ReservedFlags : 29;                 // offset: 0x90 ordinal: 0x10
  LONG ProcessFlags;                       // offset: 0x90 ordinal: 0x11
  CHAR BasePriority;                       // offset: 0x94 ordinal: 0x12
  CHAR QuantumReset;                       // offset: 0x95 ordinal: 0x13
  UCHAR State;                             // offset: 0x96 ordinal: 0x14
  UCHAR ThreadSeed;                        // offset: 0x97 ordinal: 0x15
  UCHAR PowerState;                        // offset: 0x98 ordinal: 0x16
  UCHAR IdealNode;                         // offset: 0x99 ordinal: 0x17
  UCHAR Visited;                           // offset: 0x9a ordinal: 0x18
  union {
    struct _KEXECUTE_OPTIONS Flags; // offset: 0x9b ordinal: 0x19
    UCHAR ExecuteOptions;           // offset: 0x9b ordinal: 0x1a
  };
  ULONGLONG StackCount;                // offset: 0xa0 ordinal: 0x1b
  struct _LIST_ENTRY ProcessListEntry; // offset: 0xa8 ordinal: 0x1c
} _KPROCESS;

// 0x30 bytes (sizeof)
typedef struct _KAPC_STATE {
  struct _LIST_ENTRY ApcListHead[2]; // offset: 0x0 ordinal: 0x0
  struct _KPROCESS *Process;         // offset: 0x20 ordinal: 0x1
  UCHAR KernelApcInProgress;         // offset: 0x28 ordinal: 0x2
  UCHAR KernelApcPending;            // offset: 0x29 ordinal: 0x3
  UCHAR UserApcPending;              // offset: 0x2a ordinal: 0x4
} _KAPC_STATE;

// 0x10 bytes (sizeof)
typedef struct _SLIST_HEADER {
  ULONGLONG Alignment; // offset: 0x0 ordinal: 0x0
  ULONGLONG Region;    // offset: 0x8 ordinal: 0x1
} _SLIST_HEADER;

// 0xa0 bytes (sizeof)
typedef struct _MI_VERIFIER_DRIVER_ENTRY {
  struct _LIST_ENTRY Links;             // offset: 0x0 ordinal: 0x0
  ULONG Loads;                          // offset: 0x10 ordinal: 0x1
  ULONG Unloads;                        // offset: 0x14 ordinal: 0x2
  struct _UNICODE_STRING BaseName;      // offset: 0x18 ordinal: 0x3
  VOID *StartAddress;                   // offset: 0x28 ordinal: 0x4
  VOID *EndAddress;                     // offset: 0x30 ordinal: 0x5
  ULONG Flags;                          // offset: 0x38 ordinal: 0x6
  ULONGLONG Signature;                  // offset: 0x40 ordinal: 0x7
  struct _SLIST_HEADER PoolPageHeaders; // offset: 0x50 ordinal: 0x8
  struct _SLIST_HEADER PoolTrackers;    // offset: 0x60 ordinal: 0x9
  ULONG CurrentPagedPoolAllocations;    // offset: 0x70 ordinal: 0xa
  ULONG CurrentNonPagedPoolAllocations; // offset: 0x74 ordinal: 0xb
  ULONG PeakPagedPoolAllocations;       // offset: 0x78 ordinal: 0xc
  ULONG PeakNonPagedPoolAllocations;    // offset: 0x7c ordinal: 0xd
  ULONGLONG PagedBytes;                 // offset: 0x80 ordinal: 0xe
  ULONGLONG NonPagedBytes;              // offset: 0x88 ordinal: 0xf
  ULONGLONG PeakPagedBytes;             // offset: 0x90 ordinal: 0x10
  ULONGLONG PeakNonPagedBytes;          // offset: 0x98 ordinal: 0x11
} _MI_VERIFIER_DRIVER_ENTRY;

// 0x40 bytes (sizeof)
typedef struct _HEAP_LOOKASIDE {
  struct _SLIST_HEADER ListHead; // offset: 0x0 ordinal: 0x0
  USHORT Depth;                  // offset: 0x10 ordinal: 0x1
  USHORT MaximumDepth;           // offset: 0x12 ordinal: 0x2
  ULONG TotalAllocates;          // offset: 0x14 ordinal: 0x3
  ULONG AllocateMisses;          // offset: 0x18 ordinal: 0x4
  ULONG TotalFrees;              // offset: 0x1c ordinal: 0x5
  ULONG FreeMisses;              // offset: 0x20 ordinal: 0x6
  ULONG LastTotalAllocates;      // offset: 0x24 ordinal: 0x7
  ULONG LastAllocateMisses;      // offset: 0x28 ordinal: 0x8
  ULONG Counters[2];             // offset: 0x2c ordinal: 0x9
} _HEAP_LOOKASIDE;

// 0x80 bytes (sizeof)
typedef struct _GENERAL_LOOKASIDE {
  struct _SLIST_HEADER ListHead; // offset: 0x0 ordinal: 0x0
  USHORT Depth;                  // offset: 0x10 ordinal: 0x1
  USHORT MaximumDepth;           // offset: 0x12 ordinal: 0x2
  ULONG TotalAllocates;          // offset: 0x14 ordinal: 0x3
  union {
    ULONG AllocateMisses; // offset: 0x18 ordinal: 0x4
    ULONG AllocateHits;   // offset: 0x18 ordinal: 0x5
  };
  ULONG TotalFrees; // offset: 0x1c ordinal: 0x6
  union {
    ULONG FreeMisses; // offset: 0x20 ordinal: 0x7
    ULONG FreeHits;   // offset: 0x20 ordinal: 0x8
  };
  enum _POOL_TYPE Type; // offset: 0x24 ordinal: 0x9
  ULONG Tag;            // offset: 0x28 ordinal: 0xa
  ULONG Size;           // offset: 0x2c ordinal: 0xb
  VOID *(*Allocate)(enum _POOL_TYPE, ULONGLONG,
                    ULONG);     // offset: 0x30 ordinal: 0xc
  VOID (*Free)(VOID *);         // offset: 0x38 ordinal: 0xd
  struct _LIST_ENTRY ListEntry; // offset: 0x40 ordinal: 0xe
  ULONG LastTotalAllocates;     // offset: 0x50 ordinal: 0xf
  union {
    ULONG LastAllocateMisses; // offset: 0x54 ordinal: 0x10
    ULONG LastAllocateHits;   // offset: 0x54 ordinal: 0x11
  };
  ULONG Future[2]; // offset: 0x58 ordinal: 0x12
} _GENERAL_LOOKASIDE;

// 0x80 bytes (sizeof)
typedef struct _PAGED_LOOKASIDE_LIST {
  struct _GENERAL_LOOKASIDE L; // offset: 0x0 ordinal: 0x0
} _PAGED_LOOKASIDE_LIST;

// 0x80 bytes (sizeof)
typedef struct _NPAGED_LOOKASIDE_LIST {
  struct _GENERAL_LOOKASIDE L; // offset: 0x0 ordinal: 0x0
} _NPAGED_LOOKASIDE_LIST;

// 0x10 bytes (sizeof)
typedef struct _PP_LOOKASIDE_LIST {
  struct _GENERAL_LOOKASIDE *P; // offset: 0x0 ordinal: 0x0
  struct _GENERAL_LOOKASIDE *L; // offset: 0x8 ordinal: 0x1
} _PP_LOOKASIDE_LIST;

// 0x10 bytes (sizeof)
typedef struct _KSPIN_LOCK_QUEUE {
  struct _KSPIN_LOCK_QUEUE *Next; // offset: 0x0 ordinal: 0x0
  ULONGLONG *Lock;                // offset: 0x8 ordinal: 0x1
} _KSPIN_LOCK_QUEUE;

// 0x18 bytes (sizeof)
typedef struct _KLOCK_QUEUE_HANDLE {
  struct _KSPIN_LOCK_QUEUE LockQueue; // offset: 0x0 ordinal: 0x0
  UCHAR OldIrql;                      // offset: 0x10 ordinal: 0x1
} _KLOCK_QUEUE_HANDLE;

// 0x10 bytes (sizeof)
typedef struct _M128A {
  ULONGLONG Low; // offset: 0x0 ordinal: 0x0
  LONGLONG High; // offset: 0x8 ordinal: 0x1
} _M128A;

// 0x190 bytes (sizeof)
typedef struct _KTRAP_FRAME {
  ULONGLONG P1Home;      // offset: 0x0 ordinal: 0x0
  ULONGLONG P2Home;      // offset: 0x8 ordinal: 0x1
  ULONGLONG P3Home;      // offset: 0x10 ordinal: 0x2
  ULONGLONG P4Home;      // offset: 0x18 ordinal: 0x3
  ULONGLONG P5;          // offset: 0x20 ordinal: 0x4
  CHAR PreviousMode;     // offset: 0x28 ordinal: 0x5
  UCHAR PreviousIrql;    // offset: 0x29 ordinal: 0x6
  UCHAR FaultIndicator;  // offset: 0x2a ordinal: 0x7
  UCHAR ExceptionActive; // offset: 0x2b ordinal: 0x8
  ULONG MxCsr;           // offset: 0x2c ordinal: 0x9
  ULONGLONG Rax;         // offset: 0x30 ordinal: 0xa
  ULONGLONG Rcx;         // offset: 0x38 ordinal: 0xb
  ULONGLONG Rdx;         // offset: 0x40 ordinal: 0xc
  ULONGLONG R8;          // offset: 0x48 ordinal: 0xd
  ULONGLONG R9;          // offset: 0x50 ordinal: 0xe
  ULONGLONG R10;         // offset: 0x58 ordinal: 0xf
  ULONGLONG R11;         // offset: 0x60 ordinal: 0x10
  union {
    ULONGLONG GsBase; // offset: 0x68 ordinal: 0x11
    ULONGLONG GsSwap; // offset: 0x68 ordinal: 0x12
  };
  struct _M128A Xmm0; // offset: 0x70 ordinal: 0x13
  struct _M128A Xmm1; // offset: 0x80 ordinal: 0x14
  struct _M128A Xmm2; // offset: 0x90 ordinal: 0x15
  struct _M128A Xmm3; // offset: 0xa0 ordinal: 0x16
  struct _M128A Xmm4; // offset: 0xb0 ordinal: 0x17
  struct _M128A Xmm5; // offset: 0xc0 ordinal: 0x18
  union {
    ULONGLONG FaultAddress;  // offset: 0xd0 ordinal: 0x19
    ULONGLONG ContextRecord; // offset: 0xd0 ordinal: 0x1a
    ULONGLONG TimeStamp;     // offset: 0xd0 ordinal: 0x1b
  };
  ULONGLONG Dr0;                  // offset: 0xd8 ordinal: 0x1c
  ULONGLONG Dr1;                  // offset: 0xe0 ordinal: 0x1d
  ULONGLONG Dr2;                  // offset: 0xe8 ordinal: 0x1e
  ULONGLONG Dr3;                  // offset: 0xf0 ordinal: 0x1f
  ULONGLONG Dr6;                  // offset: 0xf8 ordinal: 0x20
  ULONGLONG Dr7;                  // offset: 0x100 ordinal: 0x21
  ULONGLONG DebugControl;         // offset: 0x108 ordinal: 0x22
  ULONGLONG LastBranchToRip;      // offset: 0x110 ordinal: 0x23
  ULONGLONG LastBranchFromRip;    // offset: 0x118 ordinal: 0x24
  ULONGLONG LastExceptionToRip;   // offset: 0x120 ordinal: 0x25
  ULONGLONG LastExceptionFromRip; // offset: 0x128 ordinal: 0x26
  ULONGLONG LastBranchControl;    // offset: 0x108 ordinal: 0x27
  ULONG LastBranchMSR;            // offset: 0x110 ordinal: 0x28
  USHORT SegDs;                   // offset: 0x130 ordinal: 0x29
  USHORT SegEs;                   // offset: 0x132 ordinal: 0x2a
  USHORT SegFs;                   // offset: 0x134 ordinal: 0x2b
  USHORT SegGs;                   // offset: 0x136 ordinal: 0x2c
  ULONGLONG TrapFrame;            // offset: 0x138 ordinal: 0x2d
  ULONGLONG Rbx;                  // offset: 0x140 ordinal: 0x2e
  ULONGLONG Rdi;                  // offset: 0x148 ordinal: 0x2f
  ULONGLONG Rsi;                  // offset: 0x150 ordinal: 0x30
  ULONGLONG Rbp;                  // offset: 0x158 ordinal: 0x31
  union {
    ULONGLONG ErrorCode;      // offset: 0x160 ordinal: 0x32
    ULONGLONG ExceptionFrame; // offset: 0x160 ordinal: 0x33
  };
  ULONGLONG Rip;       // offset: 0x168 ordinal: 0x34
  USHORT SegCs;        // offset: 0x170 ordinal: 0x35
  USHORT Fill1[3];     // offset: 0x172 ordinal: 0x36
  ULONG EFlags;        // offset: 0x178 ordinal: 0x37
  ULONG Fill2;         // offset: 0x17c ordinal: 0x38
  ULONGLONG Rsp;       // offset: 0x180 ordinal: 0x39
  USHORT SegSs;        // offset: 0x188 ordinal: 0x3a
  USHORT Fill3[1];     // offset: 0x18a ordinal: 0x3b
  LONG CodePatchCycle; // offset: 0x18c ordinal: 0x3c
} _KTRAP_FRAME;

// 0x80 bytes (sizeof)
typedef struct _KINTERRUPT {
  SHORT Type;                            // offset: 0x0 ordinal: 0x0
  SHORT Size;                            // offset: 0x2 ordinal: 0x1
  struct _LIST_ENTRY InterruptListEntry; // offset: 0x8 ordinal: 0x2
  UCHAR(*ServiceRoutine)
  (struct _KINTERRUPT *, VOID *); // offset: 0x18 ordinal: 0x3
  VOID *ServiceContext;           // offset: 0x20 ordinal: 0x4
  ULONGLONG SpinLock;             // offset: 0x28 ordinal: 0x5
  ULONG TickCount;                // offset: 0x30 ordinal: 0x6
  ULONGLONG *ActualLock;          // offset: 0x38 ordinal: 0x7
  VOID (*DispatchAddress)();      // offset: 0x40 ordinal: 0x8
  ULONG Vector;                   // offset: 0x48 ordinal: 0x9
  UCHAR Irql;                     // offset: 0x4c ordinal: 0xa
  UCHAR SynchronizeIrql;          // offset: 0x4d ordinal: 0xb
  UCHAR FloatingSave;             // offset: 0x4e ordinal: 0xc
  UCHAR Connected;                // offset: 0x4f ordinal: 0xd
  CHAR Number;                    // offset: 0x50 ordinal: 0xe
  UCHAR ShareVector;              // offset: 0x51 ordinal: 0xf
  enum _KINTERRUPT_MODE Mode;     // offset: 0x54 ordinal: 0x10
  ULONG ServiceCount;             // offset: 0x58 ordinal: 0x11
  ULONG DispatchCount;            // offset: 0x5c ordinal: 0x12
  struct _KTRAP_FRAME *TrapFrame; // offset: 0x60 ordinal: 0x13
  VOID *Reserved;                 // offset: 0x68 ordinal: 0x14
  ULONG DispatchCode[4];          // offset: 0x70 ordinal: 0x15
} _KINTERRUPT;

typedef UCHAR (*__anon_1104)(struct _KINTERRUPT *, VOID *);

// 0x200 bytes (sizeof)
typedef struct _XMM_SAVE_AREA32 {
  USHORT ControlWord;              // offset: 0x0 ordinal: 0x0
  USHORT StatusWord;               // offset: 0x2 ordinal: 0x1
  UCHAR TagWord;                   // offset: 0x4 ordinal: 0x2
  UCHAR Reserved1;                 // offset: 0x5 ordinal: 0x3
  USHORT ErrorOpcode;              // offset: 0x6 ordinal: 0x4
  ULONG ErrorOffset;               // offset: 0x8 ordinal: 0x5
  USHORT ErrorSelector;            // offset: 0xc ordinal: 0x6
  USHORT Reserved2;                // offset: 0xe ordinal: 0x7
  ULONG DataOffset;                // offset: 0x10 ordinal: 0x8
  USHORT DataSelector;             // offset: 0x14 ordinal: 0x9
  USHORT Reserved3;                // offset: 0x16 ordinal: 0xa
  ULONG MxCsr;                     // offset: 0x18 ordinal: 0xb
  ULONG MxCsr_Mask;                // offset: 0x1c ordinal: 0xc
  struct _M128A FloatRegisters[8]; // offset: 0x20 ordinal: 0xd
  struct _M128A XmmRegisters[16];  // offset: 0xa0 ordinal: 0xe
  UCHAR Reserved4[96];             // offset: 0x1a0 ordinal: 0xf
} _XMM_SAVE_AREA32;

// 0x200 bytes (sizeof)
typedef struct _KERNEL_STACK_CONTROL {
  union {
    struct _XMM_SAVE_AREA32 XmmSaveArea; // offset: 0x0 ordinal: 0x0
    UCHAR Fill[432];                     // offset: 0x0 ordinal: 0x1
  };
  struct _KERNEL_STACK_SEGMENT Current;  // offset: 0x1b0 ordinal: 0x2
  struct _KERNEL_STACK_SEGMENT Previous; // offset: 0x1d8 ordinal: 0x3
} _KERNEL_STACK_CONTROL;

// 0x378 bytes (sizeof)
typedef struct _KUSER_SHARED_DATA {
  ULONG TickCountLowDeprecated;        // offset: 0x0 ordinal: 0x0
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
  ULONG LargePageMinimum;              // offset: 0x244 ordinal: 0xb
  ULONG Reserved2[7];                  // offset: 0x248 ordinal: 0xc
  enum _NT_PRODUCT_TYPE NtProductType; // offset: 0x264 ordinal: 0xd
  UCHAR ProductTypeIsValid;            // offset: 0x268 ordinal: 0xe
  ULONG NtMajorVersion;                // offset: 0x26c ordinal: 0xf
  ULONG NtMinorVersion;                // offset: 0x270 ordinal: 0x10
  UCHAR ProcessorFeatures[64];         // offset: 0x274 ordinal: 0x11
  ULONG Reserved1;                     // offset: 0x2b4 ordinal: 0x12
  ULONG Reserved3;                     // offset: 0x2b8 ordinal: 0x13
  ULONG TimeSlip;                      // offset: 0x2bc ordinal: 0x14
  enum _ALTERNATIVE_ARCHITECTURE_TYPE
      AlternativeArchitecture;               // offset: 0x2c0 ordinal: 0x15
  union _LARGE_INTEGER SystemExpirationDate; // offset: 0x2c8 ordinal: 0x16
  ULONG SuiteMask;                           // offset: 0x2d0 ordinal: 0x17
  UCHAR KdDebuggerEnabled;                   // offset: 0x2d4 ordinal: 0x18
  UCHAR NXSupportPolicy;                     // offset: 0x2d5 ordinal: 0x19
  ULONG ActiveConsoleId;                     // offset: 0x2d8 ordinal: 0x1a
  ULONG DismountCount;                       // offset: 0x2dc ordinal: 0x1b
  ULONG ComPlusPackage;                      // offset: 0x2e0 ordinal: 0x1c
  ULONG LastSystemRITEventTickCount;         // offset: 0x2e4 ordinal: 0x1d
  ULONG NumberOfPhysicalPages;               // offset: 0x2e8 ordinal: 0x1e
  UCHAR SafeBootMode;                        // offset: 0x2ec ordinal: 0x1f
  ULONG TraceLogging;                        // offset: 0x2f0 ordinal: 0x20
  ULONGLONG TestRetInstruction;              // offset: 0x2f8 ordinal: 0x21
  ULONG SystemCall;                          // offset: 0x300 ordinal: 0x22
  ULONG SystemCallReturn;                    // offset: 0x304 ordinal: 0x23
  ULONGLONG SystemCallPad[3];                // offset: 0x308 ordinal: 0x24
  union {
    struct _KSYSTEM_TIME TickCount; // offset: 0x320 ordinal: 0x25
    ULONGLONG TickCountQuad;        // offset: 0x320 ordinal: 0x26
  };
  ULONG Cookie;                     // offset: 0x330 ordinal: 0x27
  ULONG Wow64SharedInformation[16]; // offset: 0x334 ordinal: 0x28
} _KUSER_SHARED_DATA;

// 0x20 bytes (sizeof)
typedef struct PROCESSOR_IDLE_TIMES {
  ULONGLONG StartTime;          // offset: 0x0 ordinal: 0x0
  ULONGLONG EndTime;            // offset: 0x8 ordinal: 0x1
  ULONG IdleHandlerReserved[4]; // offset: 0x10 ordinal: 0x2
} PROCESSOR_IDLE_TIMES;

typedef UCHAR (*__anon_1166)(struct PROCESSOR_IDLE_TIMES *);

// 0x28 bytes (sizeof)
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
  (struct PROCESSOR_IDLE_TIMES *); // offset: 0x20 ordinal: 0xb
} _POP_IDLE_HANDLER;

// 0x40 bytes (sizeof)
typedef struct _KNODE {
  struct _SLIST_HEADER DeadStackList; // offset: 0x0 ordinal: 0x0
  union {
    struct _SLIST_HEADER PfnDereferenceSListHead; // offset: 0x10 ordinal: 0x1
    ULONGLONG Alignment;                          // offset: 0x10 ordinal: 0x2
  };
  ULONGLONG ProcessorMask;              // offset: 0x18 ordinal: 0x3
  UCHAR Color;                          // offset: 0x20 ordinal: 0x4
  UCHAR Seed;                           // offset: 0x21 ordinal: 0x5
  UCHAR NodeNumber;                     // offset: 0x22 ordinal: 0x6
  struct _flags Flags;                  // offset: 0x23 ordinal: 0x7
  ULONG MmShiftedColor;                 // offset: 0x24 ordinal: 0x8
  ULONGLONG FreeCount[2];               // offset: 0x28 ordinal: 0x9
  struct _SLIST_ENTRY *PfnDeferredList; // offset: 0x38 ordinal: 0xa
} _KNODE;

// 0x20 bytes (sizeof)
typedef struct _KDPC_DATA {
  struct _LIST_ENTRY DpcListHead; // offset: 0x0 ordinal: 0x0
  ULONGLONG DpcLock;              // offset: 0x10 ordinal: 0x1
  LONG DpcQueueDepth;             // offset: 0x18 ordinal: 0x2
  ULONG DpcCount;                 // offset: 0x1c ordinal: 0x3
} _KDPC_DATA;

// 0x4d0 bytes (sizeof)
typedef struct _CONTEXT {
  ULONGLONG P1Home;   // offset: 0x0 ordinal: 0x0
  ULONGLONG P2Home;   // offset: 0x8 ordinal: 0x1
  ULONGLONG P3Home;   // offset: 0x10 ordinal: 0x2
  ULONGLONG P4Home;   // offset: 0x18 ordinal: 0x3
  ULONGLONG P5Home;   // offset: 0x20 ordinal: 0x4
  ULONGLONG P6Home;   // offset: 0x28 ordinal: 0x5
  ULONG ContextFlags; // offset: 0x30 ordinal: 0x6
  ULONG MxCsr;        // offset: 0x34 ordinal: 0x7
  USHORT SegCs;       // offset: 0x38 ordinal: 0x8
  USHORT SegDs;       // offset: 0x3a ordinal: 0x9
  USHORT SegEs;       // offset: 0x3c ordinal: 0xa
  USHORT SegFs;       // offset: 0x3e ordinal: 0xb
  USHORT SegGs;       // offset: 0x40 ordinal: 0xc
  USHORT SegSs;       // offset: 0x42 ordinal: 0xd
  ULONG EFlags;       // offset: 0x44 ordinal: 0xe
  ULONGLONG Dr0;      // offset: 0x48 ordinal: 0xf
  ULONGLONG Dr1;      // offset: 0x50 ordinal: 0x10
  ULONGLONG Dr2;      // offset: 0x58 ordinal: 0x11
  ULONGLONG Dr3;      // offset: 0x60 ordinal: 0x12
  ULONGLONG Dr6;      // offset: 0x68 ordinal: 0x13
  ULONGLONG Dr7;      // offset: 0x70 ordinal: 0x14
  ULONGLONG Rax;      // offset: 0x78 ordinal: 0x15
  ULONGLONG Rcx;      // offset: 0x80 ordinal: 0x16
  ULONGLONG Rdx;      // offset: 0x88 ordinal: 0x17
  ULONGLONG Rbx;      // offset: 0x90 ordinal: 0x18
  ULONGLONG Rsp;      // offset: 0x98 ordinal: 0x19
  ULONGLONG Rbp;      // offset: 0xa0 ordinal: 0x1a
  ULONGLONG Rsi;      // offset: 0xa8 ordinal: 0x1b
  ULONGLONG Rdi;      // offset: 0xb0 ordinal: 0x1c
  ULONGLONG R8;       // offset: 0xb8 ordinal: 0x1d
  ULONGLONG R9;       // offset: 0xc0 ordinal: 0x1e
  ULONGLONG R10;      // offset: 0xc8 ordinal: 0x1f
  ULONGLONG R11;      // offset: 0xd0 ordinal: 0x20
  ULONGLONG R12;      // offset: 0xd8 ordinal: 0x21
  ULONGLONG R13;      // offset: 0xe0 ordinal: 0x22
  ULONGLONG R14;      // offset: 0xe8 ordinal: 0x23
  ULONGLONG R15;      // offset: 0xf0 ordinal: 0x24
  ULONGLONG Rip;      // offset: 0xf8 ordinal: 0x25
  union {
    struct _XMM_SAVE_AREA32 FltSave; // offset: 0x100 ordinal: 0x26
    struct _M128A Header[2];         // offset: 0x100 ordinal: 0x27
  };
  struct _M128A Legacy[8];          // offset: 0x120 ordinal: 0x28
  struct _M128A Xmm0;               // offset: 0x1a0 ordinal: 0x29
  struct _M128A Xmm1;               // offset: 0x1b0 ordinal: 0x2a
  struct _M128A Xmm2;               // offset: 0x1c0 ordinal: 0x2b
  struct _M128A Xmm3;               // offset: 0x1d0 ordinal: 0x2c
  struct _M128A Xmm4;               // offset: 0x1e0 ordinal: 0x2d
  struct _M128A Xmm5;               // offset: 0x1f0 ordinal: 0x2e
  struct _M128A Xmm6;               // offset: 0x200 ordinal: 0x2f
  struct _M128A Xmm7;               // offset: 0x210 ordinal: 0x30
  struct _M128A Xmm8;               // offset: 0x220 ordinal: 0x31
  struct _M128A Xmm9;               // offset: 0x230 ordinal: 0x32
  struct _M128A Xmm10;              // offset: 0x240 ordinal: 0x33
  struct _M128A Xmm11;              // offset: 0x250 ordinal: 0x34
  struct _M128A Xmm12;              // offset: 0x260 ordinal: 0x35
  struct _M128A Xmm13;              // offset: 0x270 ordinal: 0x36
  struct _M128A Xmm14;              // offset: 0x280 ordinal: 0x37
  struct _M128A Xmm15;              // offset: 0x290 ordinal: 0x38
  struct _M128A VectorRegister[26]; // offset: 0x300 ordinal: 0x39
  ULONGLONG VectorControl;          // offset: 0x4a0 ordinal: 0x3a
  ULONGLONG DebugControl;           // offset: 0x4a8 ordinal: 0x3b
  ULONGLONG LastBranchToRip;        // offset: 0x4b0 ordinal: 0x3c
  ULONGLONG LastBranchFromRip;      // offset: 0x4b8 ordinal: 0x3d
  ULONGLONG LastExceptionToRip;     // offset: 0x4c0 ordinal: 0x3e
  ULONGLONG LastExceptionFromRip;   // offset: 0x4c8 ordinal: 0x3f
} _CONTEXT;

// 0x10 bytes (sizeof)
typedef struct _EXCEPTION_POINTERS {
  struct _EXCEPTION_RECORD *ExceptionRecord; // offset: 0x0 ordinal: 0x0
  struct _CONTEXT *ContextRecord;            // offset: 0x8 ordinal: 0x1
} _EXCEPTION_POINTERS;

typedef enum _EXCEPTION_DISPOSITION (*__anon_752)(struct _EXCEPTION_RECORD *,
                                                  VOID *, struct _CONTEXT *,
                                                  VOID *);

// 0x10 bytes (sizeof)
typedef struct _EXCEPTION_REGISTRATION_RECORD {
  struct _EXCEPTION_REGISTRATION_RECORD *Next; // offset: 0x0 ordinal: 0x0
  enum _EXCEPTION_DISPOSITION (*Handler)(struct _EXCEPTION_RECORD *, VOID *,
                                         struct _CONTEXT *,
                                         VOID *); // offset: 0x8 ordinal: 0x1
} _EXCEPTION_REGISTRATION_RECORD;

// 0xd8 bytes (sizeof)
typedef struct _KSPECIAL_REGISTERS {
  ULONGLONG Cr0;                  // offset: 0x0 ordinal: 0x0
  ULONGLONG Cr2;                  // offset: 0x8 ordinal: 0x1
  ULONGLONG Cr3;                  // offset: 0x10 ordinal: 0x2
  ULONGLONG Cr4;                  // offset: 0x18 ordinal: 0x3
  ULONGLONG KernelDr0;            // offset: 0x20 ordinal: 0x4
  ULONGLONG KernelDr1;            // offset: 0x28 ordinal: 0x5
  ULONGLONG KernelDr2;            // offset: 0x30 ordinal: 0x6
  ULONGLONG KernelDr3;            // offset: 0x38 ordinal: 0x7
  ULONGLONG KernelDr6;            // offset: 0x40 ordinal: 0x8
  ULONGLONG KernelDr7;            // offset: 0x48 ordinal: 0x9
  struct _KDESCRIPTOR Gdtr;       // offset: 0x50 ordinal: 0xa
  struct _KDESCRIPTOR Idtr;       // offset: 0x60 ordinal: 0xb
  USHORT Tr;                      // offset: 0x70 ordinal: 0xc
  USHORT Ldtr;                    // offset: 0x72 ordinal: 0xd
  ULONG MxCsr;                    // offset: 0x74 ordinal: 0xe
  ULONGLONG DebugControl;         // offset: 0x78 ordinal: 0xf
  ULONGLONG LastBranchToRip;      // offset: 0x80 ordinal: 0x10
  ULONGLONG LastBranchFromRip;    // offset: 0x88 ordinal: 0x11
  ULONGLONG LastExceptionToRip;   // offset: 0x90 ordinal: 0x12
  ULONGLONG LastExceptionFromRip; // offset: 0x98 ordinal: 0x13
  ULONGLONG Cr8;                  // offset: 0xa0 ordinal: 0x14
  ULONGLONG MsrGsBase;            // offset: 0xa8 ordinal: 0x15
  ULONGLONG MsrGsSwap;            // offset: 0xb0 ordinal: 0x16
  ULONGLONG MsrStar;              // offset: 0xb8 ordinal: 0x17
  ULONGLONG MsrLStar;             // offset: 0xc0 ordinal: 0x18
  ULONGLONG MsrCStar;             // offset: 0xc8 ordinal: 0x19
  ULONGLONG MsrSyscallMask;       // offset: 0xd0 ordinal: 0x1a
} _KSPECIAL_REGISTERS;

// 0x5b0 bytes (sizeof)
typedef struct _KPROCESSOR_STATE {
  struct _KSPECIAL_REGISTERS SpecialRegisters; // offset: 0x0 ordinal: 0x0
  struct _CONTEXT ContextFrame;                // offset: 0xe0 ordinal: 0x1
} _KPROCESSOR_STATE;

// 0x150 bytes (sizeof)
typedef struct _POP_HIBER_CONTEXT {
  UCHAR WriteToFile;                        // offset: 0x0 ordinal: 0x0
  UCHAR ReserveLoaderMemory;                // offset: 0x1 ordinal: 0x1
  UCHAR ReserveFreeMemory;                  // offset: 0x2 ordinal: 0x2
  UCHAR VerifyOnWake;                       // offset: 0x3 ordinal: 0x3
  UCHAR Reset;                              // offset: 0x4 ordinal: 0x4
  UCHAR HiberFlags;                         // offset: 0x5 ordinal: 0x5
  UCHAR LinkFile;                           // offset: 0x6 ordinal: 0x6
  VOID *LinkFileHandle;                     // offset: 0x8 ordinal: 0x7
  ULONGLONG Lock;                           // offset: 0x10 ordinal: 0x8
  UCHAR MapFrozen;                          // offset: 0x18 ordinal: 0x9
  struct _RTL_BITMAP MemoryMap;             // offset: 0x20 ordinal: 0xa
  struct _LIST_ENTRY ClonedRanges;          // offset: 0x30 ordinal: 0xb
  ULONG ClonedRangeCount;                   // offset: 0x40 ordinal: 0xc
  struct _LIST_ENTRY *NextCloneRange;       // offset: 0x48 ordinal: 0xd
  ULONGLONG NextPreserve;                   // offset: 0x50 ordinal: 0xe
  struct _MDL *LoaderMdl;                   // offset: 0x58 ordinal: 0xf
  struct _MDL *Clones;                      // offset: 0x60 ordinal: 0x10
  UCHAR *NextClone;                         // offset: 0x68 ordinal: 0x11
  ULONGLONG NoClones;                       // offset: 0x70 ordinal: 0x12
  struct _MDL *Spares;                      // offset: 0x78 ordinal: 0x13
  ULONGLONG PagesOut;                       // offset: 0x80 ordinal: 0x14
  VOID *IoPage;                             // offset: 0x88 ordinal: 0x15
  VOID *CurrentMcb;                         // offset: 0x90 ordinal: 0x16
  struct _DUMP_STACK_CONTEXT *DumpStack;    // offset: 0x98 ordinal: 0x17
  struct _KPROCESSOR_STATE *WakeState;      // offset: 0xa0 ordinal: 0x18
  ULONG NoRanges;                           // offset: 0xa8 ordinal: 0x19
  ULONGLONG HiberVa;                        // offset: 0xb0 ordinal: 0x1a
  union _LARGE_INTEGER HiberPte;            // offset: 0xb8 ordinal: 0x1b
  LONG Status;                              // offset: 0xc0 ordinal: 0x1c
  struct PO_MEMORY_IMAGE *MemoryImage;      // offset: 0xc8 ordinal: 0x1d
  struct _PO_MEMORY_RANGE_ARRAY *TableHead; // offset: 0xd0 ordinal: 0x1e
  UCHAR *CompressionWorkspace;              // offset: 0xd8 ordinal: 0x1f
  UCHAR *CompressedWriteBuffer;             // offset: 0xe0 ordinal: 0x20
  ULONG *PerformanceStats;                  // offset: 0xe8 ordinal: 0x21
  VOID *CompressionBlock;                   // offset: 0xf0 ordinal: 0x22
  VOID *DmaIO;                              // offset: 0xf8 ordinal: 0x23
  VOID *TemporaryHeap;                      // offset: 0x100 ordinal: 0x24
  struct _PO_HIBER_PERF PerfInfo;           // offset: 0x108 ordinal: 0x25
} _POP_HIBER_CONTEXT;

// 0x68 bytes (sizeof)
typedef struct _KTSS64 {
  ULONG Reserved0;     // offset: 0x0 ordinal: 0x0
  ULONGLONG Rsp0;      // offset: 0x4 ordinal: 0x1
  ULONGLONG Rsp1;      // offset: 0xc ordinal: 0x2
  ULONGLONG Rsp2;      // offset: 0x14 ordinal: 0x3
  ULONGLONG Ist[8];    // offset: 0x1c ordinal: 0x4
  ULONGLONG Reserved1; // offset: 0x5c ordinal: 0x5
  USHORT Reserved2;    // offset: 0x64 ordinal: 0x6
  USHORT IoMapBase;    // offset: 0x66 ordinal: 0x7
} _KTSS64;

// 0xf0 bytes (sizeof)
typedef struct _IMAGE_OPTIONAL_HEADER64 {
  USHORT Magic;                                   // offset: 0x0 ordinal: 0x0
  UCHAR MajorLinkerVersion;                       // offset: 0x2 ordinal: 0x1
  UCHAR MinorLinkerVersion;                       // offset: 0x3 ordinal: 0x2
  ULONG SizeOfCode;                               // offset: 0x4 ordinal: 0x3
  ULONG SizeOfInitializedData;                    // offset: 0x8 ordinal: 0x4
  ULONG SizeOfUninitializedData;                  // offset: 0xc ordinal: 0x5
  ULONG AddressOfEntryPoint;                      // offset: 0x10 ordinal: 0x6
  ULONG BaseOfCode;                               // offset: 0x14 ordinal: 0x7
  ULONGLONG ImageBase;                            // offset: 0x18 ordinal: 0x8
  ULONG SectionAlignment;                         // offset: 0x20 ordinal: 0x9
  ULONG FileAlignment;                            // offset: 0x24 ordinal: 0xa
  USHORT MajorOperatingSystemVersion;             // offset: 0x28 ordinal: 0xb
  USHORT MinorOperatingSystemVersion;             // offset: 0x2a ordinal: 0xc
  USHORT MajorImageVersion;                       // offset: 0x2c ordinal: 0xd
  USHORT MinorImageVersion;                       // offset: 0x2e ordinal: 0xe
  USHORT MajorSubsystemVersion;                   // offset: 0x30 ordinal: 0xf
  USHORT MinorSubsystemVersion;                   // offset: 0x32 ordinal: 0x10
  ULONG Win32VersionValue;                        // offset: 0x34 ordinal: 0x11
  ULONG SizeOfImage;                              // offset: 0x38 ordinal: 0x12
  ULONG SizeOfHeaders;                            // offset: 0x3c ordinal: 0x13
  ULONG CheckSum;                                 // offset: 0x40 ordinal: 0x14
  USHORT Subsystem;                               // offset: 0x44 ordinal: 0x15
  USHORT DllCharacteristics;                      // offset: 0x46 ordinal: 0x16
  ULONGLONG SizeOfStackReserve;                   // offset: 0x48 ordinal: 0x17
  ULONGLONG SizeOfStackCommit;                    // offset: 0x50 ordinal: 0x18
  ULONGLONG SizeOfHeapReserve;                    // offset: 0x58 ordinal: 0x19
  ULONGLONG SizeOfHeapCommit;                     // offset: 0x60 ordinal: 0x1a
  ULONG LoaderFlags;                              // offset: 0x68 ordinal: 0x1b
  ULONG NumberOfRvaAndSizes;                      // offset: 0x6c ordinal: 0x1c
  struct _IMAGE_DATA_DIRECTORY DataDirectory[16]; // offset: 0x70 ordinal: 0x1d
} _IMAGE_OPTIONAL_HEADER64;

// 0x108 bytes (sizeof)
typedef struct _IMAGE_NT_HEADERS64 {
  ULONG Signature;                                // offset: 0x0 ordinal: 0x0
  struct _IMAGE_FILE_HEADER FileHeader;           // offset: 0x4 ordinal: 0x1
  struct _IMAGE_OPTIONAL_HEADER64 OptionalHeader; // offset: 0x18 ordinal: 0x2
} _IMAGE_NT_HEADERS64;

// 0x8 bytes (sizeof)
typedef union _ULARGE_INTEGER {
  ULONG LowPart;      // offset: 0x0 ordinal: 0x0
  ULONG HighPart;     // offset: 0x4 ordinal: 0x1
  struct __anon_5 u;  // offset: 0x0 ordinal: 0x2
  ULONGLONG QuadPart; // offset: 0x0 ordinal: 0x3
} _ULARGE_INTEGER;

// 0x230 bytes (sizeof)
typedef struct _PEB32 {
  UCHAR InheritedAddressSpace;    // offset: 0x0 ordinal: 0x0
  UCHAR ReadImageFileExecOptions; // offset: 0x1 ordinal: 0x1
  UCHAR BeingDebugged;            // offset: 0x2 ordinal: 0x2
  union {
    UCHAR BitField;                // offset: 0x3 ordinal: 0x3
    UCHAR ImageUsesLargePages : 1; // offset: 0x3 ordinal: 0x4
  };
  UCHAR SpareBits : 7;                         // offset: 0x3 ordinal: 0x5
  ULONG Mutant;                                // offset: 0x4 ordinal: 0x6
  ULONG ImageBaseAddress;                      // offset: 0x8 ordinal: 0x7
  ULONG Ldr;                                   // offset: 0xc ordinal: 0x8
  ULONG ProcessParameters;                     // offset: 0x10 ordinal: 0x9
  ULONG SubSystemData;                         // offset: 0x14 ordinal: 0xa
  ULONG ProcessHeap;                           // offset: 0x18 ordinal: 0xb
  ULONG FastPebLock;                           // offset: 0x1c ordinal: 0xc
  ULONG AtlThunkSListPtr;                      // offset: 0x20 ordinal: 0xd
  ULONG SparePtr2;                             // offset: 0x24 ordinal: 0xe
  ULONG EnvironmentUpdateCount;                // offset: 0x28 ordinal: 0xf
  ULONG KernelCallbackTable;                   // offset: 0x2c ordinal: 0x10
  ULONG SystemReserved[1];                     // offset: 0x30 ordinal: 0x11
  ULONG SpareUlong;                            // offset: 0x34 ordinal: 0x12
  ULONG FreeList;                              // offset: 0x38 ordinal: 0x13
  ULONG TlsExpansionCounter;                   // offset: 0x3c ordinal: 0x14
  ULONG TlsBitmap;                             // offset: 0x40 ordinal: 0x15
  ULONG TlsBitmapBits[2];                      // offset: 0x44 ordinal: 0x16
  ULONG ReadOnlySharedMemoryBase;              // offset: 0x4c ordinal: 0x17
  ULONG ReadOnlySharedMemoryHeap;              // offset: 0x50 ordinal: 0x18
  ULONG ReadOnlyStaticServerData;              // offset: 0x54 ordinal: 0x19
  ULONG AnsiCodePageData;                      // offset: 0x58 ordinal: 0x1a
  ULONG OemCodePageData;                       // offset: 0x5c ordinal: 0x1b
  ULONG UnicodeCaseTableData;                  // offset: 0x60 ordinal: 0x1c
  ULONG NumberOfProcessors;                    // offset: 0x64 ordinal: 0x1d
  ULONG NtGlobalFlag;                          // offset: 0x68 ordinal: 0x1e
  union _LARGE_INTEGER CriticalSectionTimeout; // offset: 0x70 ordinal: 0x1f
  ULONG HeapSegmentReserve;                    // offset: 0x78 ordinal: 0x20
  ULONG HeapSegmentCommit;                     // offset: 0x7c ordinal: 0x21
  ULONG HeapDeCommitTotalFreeThreshold;        // offset: 0x80 ordinal: 0x22
  ULONG HeapDeCommitFreeBlockThreshold;        // offset: 0x84 ordinal: 0x23
  ULONG NumberOfHeaps;                         // offset: 0x88 ordinal: 0x24
  ULONG MaximumNumberOfHeaps;                  // offset: 0x8c ordinal: 0x25
  ULONG ProcessHeaps;                          // offset: 0x90 ordinal: 0x26
  ULONG GdiSharedHandleTable;                  // offset: 0x94 ordinal: 0x27
  ULONG ProcessStarterHelper;                  // offset: 0x98 ordinal: 0x28
  ULONG GdiDCAttributeList;                    // offset: 0x9c ordinal: 0x29
  ULONG LoaderLock;                            // offset: 0xa0 ordinal: 0x2a
  ULONG OSMajorVersion;                        // offset: 0xa4 ordinal: 0x2b
  ULONG OSMinorVersion;                        // offset: 0xa8 ordinal: 0x2c
  USHORT OSBuildNumber;                        // offset: 0xac ordinal: 0x2d
  USHORT OSCSDVersion;                         // offset: 0xae ordinal: 0x2e
  ULONG OSPlatformId;                          // offset: 0xb0 ordinal: 0x2f
  ULONG ImageSubsystem;                        // offset: 0xb4 ordinal: 0x30
  ULONG ImageSubsystemMajorVersion;            // offset: 0xb8 ordinal: 0x31
  ULONG ImageSubsystemMinorVersion;            // offset: 0xbc ordinal: 0x32
  ULONG ImageProcessAffinityMask;              // offset: 0xc0 ordinal: 0x33
  ULONG GdiHandleBuffer[34];                   // offset: 0xc4 ordinal: 0x34
  ULONG PostProcessInitRoutine;                // offset: 0x14c ordinal: 0x35
  ULONG TlsExpansionBitmap;                    // offset: 0x150 ordinal: 0x36
  ULONG TlsExpansionBitmapBits[32];            // offset: 0x154 ordinal: 0x37
  ULONG SessionId;                             // offset: 0x1d4 ordinal: 0x38
  union _ULARGE_INTEGER AppCompatFlags;        // offset: 0x1d8 ordinal: 0x39
  union _ULARGE_INTEGER AppCompatFlagsUser;    // offset: 0x1e0 ordinal: 0x3a
  ULONG pShimData;                             // offset: 0x1e8 ordinal: 0x3b
  ULONG AppCompatInfo;                         // offset: 0x1ec ordinal: 0x3c
  struct _STRING32 CSDVersion;                 // offset: 0x1f0 ordinal: 0x3d
  ULONG ActivationContextData;                 // offset: 0x1f8 ordinal: 0x3e
  ULONG ProcessAssemblyStorageMap;             // offset: 0x1fc ordinal: 0x3f
  ULONG SystemDefaultActivationContextData;    // offset: 0x200 ordinal: 0x40
  ULONG SystemAssemblyStorageMap;              // offset: 0x204 ordinal: 0x41
  ULONG MinimumStackCommit;                    // offset: 0x208 ordinal: 0x42
  ULONG FlsCallback;                           // offset: 0x20c ordinal: 0x43
  struct LIST_ENTRY32 FlsListHead;             // offset: 0x210 ordinal: 0x44
  ULONG FlsBitmap;                             // offset: 0x218 ordinal: 0x45
  ULONG FlsBitmapBits[4];                      // offset: 0x21c ordinal: 0x46
  ULONG FlsHighIndex;                          // offset: 0x22c ordinal: 0x47
} _PEB32;

// 0x18 bytes (sizeof)
typedef struct _KTIMER_TABLE_ENTRY {
  struct _LIST_ENTRY Entry;   // offset: 0x0 ordinal: 0x0
  union _ULARGE_INTEGER Time; // offset: 0x10 ordinal: 0x1
} _KTIMER_TABLE_ENTRY;

// 0x358 bytes (sizeof)
typedef struct _PEB {
  UCHAR InheritedAddressSpace;    // offset: 0x0 ordinal: 0x0
  UCHAR ReadImageFileExecOptions; // offset: 0x1 ordinal: 0x1
  UCHAR BeingDebugged;            // offset: 0x2 ordinal: 0x2
  union {
    UCHAR BitField;                // offset: 0x3 ordinal: 0x3
    UCHAR ImageUsesLargePages : 1; // offset: 0x3 ordinal: 0x4
  };
  UCHAR SpareBits : 7;       // offset: 0x3 ordinal: 0x5
  VOID *Mutant;              // offset: 0x8 ordinal: 0x6
  VOID *ImageBaseAddress;    // offset: 0x10 ordinal: 0x7
  struct _PEB_LDR_DATA *Ldr; // offset: 0x18 ordinal: 0x8
  struct _RTL_USER_PROCESS_PARAMETERS
      *ProcessParameters;                      // offset: 0x20 ordinal: 0x9
  VOID *SubSystemData;                         // offset: 0x28 ordinal: 0xa
  VOID *ProcessHeap;                           // offset: 0x30 ordinal: 0xb
  struct _RTL_CRITICAL_SECTION *FastPebLock;   // offset: 0x38 ordinal: 0xc
  VOID *AtlThunkSListPtr;                      // offset: 0x40 ordinal: 0xd
  VOID *SparePtr2;                             // offset: 0x48 ordinal: 0xe
  ULONG EnvironmentUpdateCount;                // offset: 0x50 ordinal: 0xf
  VOID *KernelCallbackTable;                   // offset: 0x58 ordinal: 0x10
  ULONG SystemReserved[1];                     // offset: 0x60 ordinal: 0x11
  ULONG SpareUlong;                            // offset: 0x64 ordinal: 0x12
  struct _PEB_FREE_BLOCK *FreeList;            // offset: 0x68 ordinal: 0x13
  ULONG TlsExpansionCounter;                   // offset: 0x70 ordinal: 0x14
  VOID *TlsBitmap;                             // offset: 0x78 ordinal: 0x15
  ULONG TlsBitmapBits[2];                      // offset: 0x80 ordinal: 0x16
  VOID *ReadOnlySharedMemoryBase;              // offset: 0x88 ordinal: 0x17
  VOID *ReadOnlySharedMemoryHeap;              // offset: 0x90 ordinal: 0x18
  VOID **ReadOnlyStaticServerData;             // offset: 0x98 ordinal: 0x19
  VOID *AnsiCodePageData;                      // offset: 0xa0 ordinal: 0x1a
  VOID *OemCodePageData;                       // offset: 0xa8 ordinal: 0x1b
  VOID *UnicodeCaseTableData;                  // offset: 0xb0 ordinal: 0x1c
  ULONG NumberOfProcessors;                    // offset: 0xb8 ordinal: 0x1d
  ULONG NtGlobalFlag;                          // offset: 0xbc ordinal: 0x1e
  union _LARGE_INTEGER CriticalSectionTimeout; // offset: 0xc0 ordinal: 0x1f
  ULONGLONG HeapSegmentReserve;                // offset: 0xc8 ordinal: 0x20
  ULONGLONG HeapSegmentCommit;                 // offset: 0xd0 ordinal: 0x21
  ULONGLONG HeapDeCommitTotalFreeThreshold;    // offset: 0xd8 ordinal: 0x22
  ULONGLONG HeapDeCommitFreeBlockThreshold;    // offset: 0xe0 ordinal: 0x23
  ULONG NumberOfHeaps;                         // offset: 0xe8 ordinal: 0x24
  ULONG MaximumNumberOfHeaps;                  // offset: 0xec ordinal: 0x25
  VOID **ProcessHeaps;                         // offset: 0xf0 ordinal: 0x26
  VOID *GdiSharedHandleTable;                  // offset: 0xf8 ordinal: 0x27
  VOID *ProcessStarterHelper;                  // offset: 0x100 ordinal: 0x28
  ULONG GdiDCAttributeList;                    // offset: 0x108 ordinal: 0x29
  struct _RTL_CRITICAL_SECTION *LoaderLock;    // offset: 0x110 ordinal: 0x2a
  ULONG OSMajorVersion;                        // offset: 0x118 ordinal: 0x2b
  ULONG OSMinorVersion;                        // offset: 0x11c ordinal: 0x2c
  USHORT OSBuildNumber;                        // offset: 0x120 ordinal: 0x2d
  USHORT OSCSDVersion;                         // offset: 0x122 ordinal: 0x2e
  ULONG OSPlatformId;                          // offset: 0x124 ordinal: 0x2f
  ULONG ImageSubsystem;                        // offset: 0x128 ordinal: 0x30
  ULONG ImageSubsystemMajorVersion;            // offset: 0x12c ordinal: 0x31
  ULONG ImageSubsystemMinorVersion;            // offset: 0x130 ordinal: 0x32
  ULONGLONG ImageProcessAffinityMask;          // offset: 0x138 ordinal: 0x33
  ULONG GdiHandleBuffer[60];                   // offset: 0x140 ordinal: 0x34
  VOID (*PostProcessInitRoutine)();            // offset: 0x230 ordinal: 0x35
  VOID *TlsExpansionBitmap;                    // offset: 0x238 ordinal: 0x36
  ULONG TlsExpansionBitmapBits[32];            // offset: 0x240 ordinal: 0x37
  ULONG SessionId;                             // offset: 0x2c0 ordinal: 0x38
  union _ULARGE_INTEGER AppCompatFlags;        // offset: 0x2c8 ordinal: 0x39
  union _ULARGE_INTEGER AppCompatFlagsUser;    // offset: 0x2d0 ordinal: 0x3a
  VOID *pShimData;                             // offset: 0x2d8 ordinal: 0x3b
  VOID *AppCompatInfo;                         // offset: 0x2e0 ordinal: 0x3c
  struct _UNICODE_STRING CSDVersion;           // offset: 0x2e8 ordinal: 0x3d
  struct _ACTIVATION_CONTEXT_DATA
      *ActivationContextData; // offset: 0x2f8 ordinal: 0x3e
  struct _ASSEMBLY_STORAGE_MAP
      *ProcessAssemblyStorageMap; // offset: 0x300 ordinal: 0x3f
  struct _ACTIVATION_CONTEXT_DATA
      *SystemDefaultActivationContextData; // offset: 0x308 ordinal: 0x40
  struct _ASSEMBLY_STORAGE_MAP
      *SystemAssemblyStorageMap;  // offset: 0x310 ordinal: 0x41
  ULONGLONG MinimumStackCommit;   // offset: 0x318 ordinal: 0x42
  VOID **FlsCallback;             // offset: 0x320 ordinal: 0x43
  struct _LIST_ENTRY FlsListHead; // offset: 0x328 ordinal: 0x44
  VOID *FlsBitmap;                // offset: 0x338 ordinal: 0x45
  ULONG FlsBitmapBits[4];         // offset: 0x340 ordinal: 0x46
  ULONG FlsHighIndex;             // offset: 0x350 ordinal: 0x47
} _PEB;

// 0x17d8 bytes (sizeof)
typedef struct _TEB {
  struct _NT_TIB NtTib;                 // offset: 0x0 ordinal: 0x0
  VOID *EnvironmentPointer;             // offset: 0x38 ordinal: 0x1
  struct _CLIENT_ID ClientId;           // offset: 0x40 ordinal: 0x2
  VOID *ActiveRpcHandle;                // offset: 0x50 ordinal: 0x3
  VOID *ThreadLocalStoragePointer;      // offset: 0x58 ordinal: 0x4
  struct _PEB *ProcessEnvironmentBlock; // offset: 0x60 ordinal: 0x5
  ULONG LastErrorValue;                 // offset: 0x68 ordinal: 0x6
  ULONG CountOfOwnedCriticalSections;   // offset: 0x6c ordinal: 0x7
  VOID *CsrClientThread;                // offset: 0x70 ordinal: 0x8
  VOID *Win32ThreadInfo;                // offset: 0x78 ordinal: 0x9
  ULONG User32Reserved[26];             // offset: 0x80 ordinal: 0xa
  ULONG UserReserved[5];                // offset: 0xe8 ordinal: 0xb
  VOID *WOW32Reserved;                  // offset: 0x100 ordinal: 0xc
  ULONG CurrentLocale;                  // offset: 0x108 ordinal: 0xd
  ULONG FpSoftwareStatusRegister;       // offset: 0x10c ordinal: 0xe
  VOID *SystemReserved1[54];            // offset: 0x110 ordinal: 0xf
  LONG ExceptionCode;                   // offset: 0x2c0 ordinal: 0x10
  struct _ACTIVATION_CONTEXT_STACK
      *ActivationContextStackPointer;         // offset: 0x2c8 ordinal: 0x11
  UCHAR SpareBytes1[28];                      // offset: 0x2d0 ordinal: 0x12
  struct _GDI_TEB_BATCH GdiTebBatch;          // offset: 0x2f0 ordinal: 0x13
  struct _CLIENT_ID RealClientId;             // offset: 0x7d8 ordinal: 0x14
  VOID *GdiCachedProcessHandle;               // offset: 0x7e8 ordinal: 0x15
  ULONG GdiClientPID;                         // offset: 0x7f0 ordinal: 0x16
  ULONG GdiClientTID;                         // offset: 0x7f4 ordinal: 0x17
  VOID *GdiThreadLocalInfo;                   // offset: 0x7f8 ordinal: 0x18
  ULONGLONG Win32ClientInfo[62];              // offset: 0x800 ordinal: 0x19
  VOID *glDispatchTable[233];                 // offset: 0x9f0 ordinal: 0x1a
  ULONGLONG glReserved1[29];                  // offset: 0x1138 ordinal: 0x1b
  VOID *glReserved2;                          // offset: 0x1220 ordinal: 0x1c
  VOID *glSectionInfo;                        // offset: 0x1228 ordinal: 0x1d
  VOID *glSection;                            // offset: 0x1230 ordinal: 0x1e
  VOID *glTable;                              // offset: 0x1238 ordinal: 0x1f
  VOID *glCurrentRC;                          // offset: 0x1240 ordinal: 0x20
  VOID *glContext;                            // offset: 0x1248 ordinal: 0x21
  ULONG LastStatusValue;                      // offset: 0x1250 ordinal: 0x22
  struct _UNICODE_STRING StaticUnicodeString; // offset: 0x1258 ordinal: 0x23
  USHORT StaticUnicodeBuffer[261];            // offset: 0x1268 ordinal: 0x24
  VOID *DeallocationStack;                    // offset: 0x1478 ordinal: 0x25
  VOID *TlsSlots[64];                         // offset: 0x1480 ordinal: 0x26
  struct _LIST_ENTRY TlsLinks;                // offset: 0x1680 ordinal: 0x27
  VOID *Vdm;                                  // offset: 0x1690 ordinal: 0x28
  VOID *ReservedForNtRpc;                     // offset: 0x1698 ordinal: 0x29
  VOID *DbgSsReserved[2];                     // offset: 0x16a0 ordinal: 0x2a
  ULONG HardErrorMode;                        // offset: 0x16b0 ordinal: 0x2b
  VOID *Instrumentation[14];                  // offset: 0x16b8 ordinal: 0x2c
  VOID *SubProcessTag;                        // offset: 0x1728 ordinal: 0x2d
  VOID *EtwTraceData;                         // offset: 0x1730 ordinal: 0x2e
  VOID *WinSockData;                          // offset: 0x1738 ordinal: 0x2f
  ULONG GdiBatchCount;                        // offset: 0x1740 ordinal: 0x30
  UCHAR InDbgPrint;                           // offset: 0x1744 ordinal: 0x31
  UCHAR FreeStackOnTermination;               // offset: 0x1745 ordinal: 0x32
  UCHAR HasFiberData;                         // offset: 0x1746 ordinal: 0x33
  UCHAR IdealProcessor;                       // offset: 0x1747 ordinal: 0x34
  ULONG GuaranteedStackBytes;                 // offset: 0x1748 ordinal: 0x35
  VOID *ReservedForPerf;                      // offset: 0x1750 ordinal: 0x36
  VOID *ReservedForOle;                       // offset: 0x1758 ordinal: 0x37
  ULONG WaitingOnLoaderLock;                  // offset: 0x1760 ordinal: 0x38
  ULONGLONG SparePointer1;                    // offset: 0x1768 ordinal: 0x39
  ULONGLONG SoftPatchPtr1;                    // offset: 0x1770 ordinal: 0x3a
  ULONGLONG SoftPatchPtr2;                    // offset: 0x1778 ordinal: 0x3b
  VOID **TlsExpansionSlots;                   // offset: 0x1780 ordinal: 0x3c
  VOID *DeallocationBStore;                   // offset: 0x1788 ordinal: 0x3d
  VOID *BStoreLimit;                          // offset: 0x1790 ordinal: 0x3e
  ULONG ImpersonationLocale;                  // offset: 0x1798 ordinal: 0x3f
  ULONG IsImpersonating;                      // offset: 0x179c ordinal: 0x40
  VOID *NlsCache;                             // offset: 0x17a0 ordinal: 0x41
  VOID *pShimData;                            // offset: 0x17a8 ordinal: 0x42
  ULONG HeapVirtualAffinity;                  // offset: 0x17b0 ordinal: 0x43
  VOID *CurrentTransactionHandle;             // offset: 0x17b8 ordinal: 0x44
  struct _TEB_ACTIVE_FRAME *ActiveFrame;      // offset: 0x17c0 ordinal: 0x45
  VOID *FlsData;                              // offset: 0x17c8 ordinal: 0x46
  UCHAR SafeThunkCall;                        // offset: 0x17d0 ordinal: 0x47
  UCHAR BooleanSpare[3];                      // offset: 0x17d1 ordinal: 0x48
} _TEB;

// 0x40 bytes (sizeof)
typedef struct _KTIMER {
  struct _DISPATCHER_HEADER Header;  // offset: 0x0 ordinal: 0x0
  union _ULARGE_INTEGER DueTime;     // offset: 0x18 ordinal: 0x1
  struct _LIST_ENTRY TimerListEntry; // offset: 0x20 ordinal: 0x2
  struct _KDPC *Dpc;                 // offset: 0x30 ordinal: 0x3
  LONG Period;                       // offset: 0x38 ordinal: 0x4
} _KTIMER;

// 0x108 bytes (sizeof)
typedef struct _ETIMER {
  struct _KTIMER KeTimer;                  // offset: 0x0 ordinal: 0x0
  struct _KAPC TimerApc;                   // offset: 0x40 ordinal: 0x1
  struct _KDPC TimerDpc;                   // offset: 0x98 ordinal: 0x2
  struct _LIST_ENTRY ActiveTimerListEntry; // offset: 0xd8 ordinal: 0x3
  ULONGLONG Lock;                          // offset: 0xe8 ordinal: 0x4
  LONG Period;                             // offset: 0xf0 ordinal: 0x5
  UCHAR ApcAssociated;                     // offset: 0xf4 ordinal: 0x6
  UCHAR WakeTimer;                         // offset: 0xf5 ordinal: 0x7
  struct _LIST_ENTRY WakeTimerListEntry;   // offset: 0xf8 ordinal: 0x8
} _ETIMER;

// 0x120 bytes (sizeof)
typedef struct _POP_THERMAL_ZONE {
  struct _LIST_ENTRY Link;                  // offset: 0x0 ordinal: 0x0
  UCHAR State;                              // offset: 0x10 ordinal: 0x1
  UCHAR Flags;                              // offset: 0x11 ordinal: 0x2
  UCHAR Mode;                               // offset: 0x12 ordinal: 0x3
  UCHAR PendingMode;                        // offset: 0x13 ordinal: 0x4
  UCHAR ActivePoint;                        // offset: 0x14 ordinal: 0x5
  UCHAR PendingActivePoint;                 // offset: 0x15 ordinal: 0x6
  LONG Throttle;                            // offset: 0x18 ordinal: 0x7
  ULONGLONG LastTime;                       // offset: 0x20 ordinal: 0x8
  ULONG SampleRate;                         // offset: 0x28 ordinal: 0x9
  ULONG LastTemp;                           // offset: 0x2c ordinal: 0xa
  struct _KTIMER PassiveTimer;              // offset: 0x30 ordinal: 0xb
  struct _KDPC PassiveDpc;                  // offset: 0x70 ordinal: 0xc
  struct _POP_ACTION_TRIGGER OverThrottled; // offset: 0xb0 ordinal: 0xd
  struct _IRP *Irp;                         // offset: 0xc0 ordinal: 0xe
  struct _THERMAL_INFORMATION Info;         // offset: 0xc8 ordinal: 0xf
} _POP_THERMAL_ZONE;

// 0x30 bytes (sizeof)
typedef struct _KWAIT_BLOCK {
  struct _LIST_ENTRY WaitListEntry;   // offset: 0x0 ordinal: 0x0
  struct _KTHREAD *Thread;            // offset: 0x10 ordinal: 0x1
  VOID *Object;                       // offset: 0x18 ordinal: 0x2
  struct _KWAIT_BLOCK *NextWaitBlock; // offset: 0x20 ordinal: 0x3
  USHORT WaitKey;                     // offset: 0x28 ordinal: 0x4
  UCHAR WaitType;                     // offset: 0x2a ordinal: 0x5
  UCHAR SpareByte;                    // offset: 0x2b ordinal: 0x6
  LONG SpareLong;                     // offset: 0x2c ordinal: 0x7
} _KWAIT_BLOCK;

// 0x308 bytes (sizeof)
typedef struct _KTHREAD {
  struct _DISPATCHER_HEADER Header;  // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY MutantListHead; // offset: 0x18 ordinal: 0x1
  VOID *InitialStack;                // offset: 0x28 ordinal: 0x2
  VOID *StackLimit;                  // offset: 0x30 ordinal: 0x3
  VOID *KernelStack;                 // offset: 0x38 ordinal: 0x4
  ULONGLONG ThreadLock;              // offset: 0x40 ordinal: 0x5
  union {
    struct _KAPC_STATE ApcState; // offset: 0x48 ordinal: 0x6
    UCHAR ApcStateFill[43];      // offset: 0x48 ordinal: 0x7
  };
  UCHAR ApcQueueable;      // offset: 0x73 ordinal: 0x8
  UCHAR NextProcessor;     // offset: 0x74 ordinal: 0x9
  UCHAR DeferredProcessor; // offset: 0x75 ordinal: 0xa
  UCHAR AdjustReason;      // offset: 0x76 ordinal: 0xb
  CHAR AdjustIncrement;    // offset: 0x77 ordinal: 0xc
  ULONGLONG ApcQueueLock;  // offset: 0x78 ordinal: 0xd
  LONGLONG WaitStatus;     // offset: 0x80 ordinal: 0xe
  union {
    struct _KWAIT_BLOCK *WaitBlockList; // offset: 0x88 ordinal: 0xf
    struct _KGATE *GateObject;          // offset: 0x88 ordinal: 0x10
  };
  UCHAR Alertable;       // offset: 0x90 ordinal: 0x11
  UCHAR WaitNext;        // offset: 0x91 ordinal: 0x12
  UCHAR WaitReason;      // offset: 0x92 ordinal: 0x13
  CHAR Priority;         // offset: 0x93 ordinal: 0x14
  UCHAR EnableStackSwap; // offset: 0x94 ordinal: 0x15
  UCHAR SwapBusy;        // offset: 0x95 ordinal: 0x16
  UCHAR Alerted[2];      // offset: 0x96 ordinal: 0x17
  union {
    struct _LIST_ENTRY WaitListEntry;        // offset: 0x98 ordinal: 0x18
    struct _SINGLE_LIST_ENTRY SwapListEntry; // offset: 0x98 ordinal: 0x19
  };
  struct _KQUEUE *Queue; // offset: 0xa8 ordinal: 0x1a
  VOID *Teb;             // offset: 0xb0 ordinal: 0x1b
  union {
    struct _KTIMER Timer; // offset: 0xb8 ordinal: 0x1c
    UCHAR TimerFill[60];  // offset: 0xb8 ordinal: 0x1d
  };
  ULONG AutoAlignment : 1;  // offset: 0xf4 ordinal: 0x1e
  ULONG DisableBoost : 1;   // offset: 0xf4 ordinal: 0x1f
  ULONG GuiThread : 1;      // offset: 0xf4 ordinal: 0x20
  ULONG ReservedFlags : 29; // offset: 0xf4 ordinal: 0x21
  LONG ThreadFlags;         // offset: 0xf4 ordinal: 0x22
  union {
    struct _KWAIT_BLOCK WaitBlock[4]; // offset: 0xf8 ordinal: 0x23
    UCHAR WaitBlockFill0[43];         // offset: 0xf8 ordinal: 0x24
  };
  UCHAR SystemAffinityActive;             // offset: 0x123 ordinal: 0x25
  UCHAR WaitBlockFill1[91];               // offset: 0xf8 ordinal: 0x26
  CHAR PreviousMode;                      // offset: 0x153 ordinal: 0x27
  UCHAR WaitBlockFill2[139];              // offset: 0xf8 ordinal: 0x28
  UCHAR ResourceIndex;                    // offset: 0x183 ordinal: 0x29
  UCHAR WaitBlockFill3[187];              // offset: 0xf8 ordinal: 0x2a
  UCHAR LargeStack;                       // offset: 0x1b3 ordinal: 0x2b
  UCHAR WaitBlockFill4[44];               // offset: 0xf8 ordinal: 0x2c
  ULONG ContextSwitches;                  // offset: 0x124 ordinal: 0x2d
  UCHAR WaitBlockFill5[92];               // offset: 0xf8 ordinal: 0x2e
  UCHAR State;                            // offset: 0x154 ordinal: 0x2f
  UCHAR NpxState;                         // offset: 0x155 ordinal: 0x30
  UCHAR WaitIrql;                         // offset: 0x156 ordinal: 0x31
  CHAR WaitMode;                          // offset: 0x157 ordinal: 0x32
  UCHAR WaitBlockFill6[140];              // offset: 0xf8 ordinal: 0x33
  ULONG WaitTime;                         // offset: 0x184 ordinal: 0x34
  UCHAR WaitBlockFill7[188];              // offset: 0xf8 ordinal: 0x35
  SHORT KernelApcDisable;                 // offset: 0x1b4 ordinal: 0x36
  SHORT SpecialApcDisable;                // offset: 0x1b6 ordinal: 0x37
  ULONG CombinedApcDisable;               // offset: 0x1b4 ordinal: 0x38
  struct _LIST_ENTRY QueueListEntry;      // offset: 0x1b8 ordinal: 0x39
  struct _KTRAP_FRAME *TrapFrame;         // offset: 0x1c8 ordinal: 0x3a
  VOID *CallbackStack;                    // offset: 0x1d0 ordinal: 0x3b
  UCHAR ApcStateIndex;                    // offset: 0x1d8 ordinal: 0x3c
  UCHAR IdealProcessor;                   // offset: 0x1d9 ordinal: 0x3d
  UCHAR Preempted;                        // offset: 0x1da ordinal: 0x3e
  UCHAR ProcessReadyQueue;                // offset: 0x1db ordinal: 0x3f
  UCHAR KernelStackResident;              // offset: 0x1dc ordinal: 0x40
  CHAR BasePriority;                      // offset: 0x1dd ordinal: 0x41
  CHAR PriorityDecrement;                 // offset: 0x1de ordinal: 0x42
  CHAR Saturation;                        // offset: 0x1df ordinal: 0x43
  ULONGLONG UserAffinity;                 // offset: 0x1e0 ordinal: 0x44
  struct _KPROCESS *Process;              // offset: 0x1e8 ordinal: 0x45
  ULONGLONG Affinity;                     // offset: 0x1f0 ordinal: 0x46
  struct _KAPC_STATE *ApcStatePointer[2]; // offset: 0x1f8 ordinal: 0x47
  union {
    struct _KAPC_STATE SavedApcState; // offset: 0x208 ordinal: 0x48
    UCHAR SavedApcStateFill[43];      // offset: 0x208 ordinal: 0x49
  };
  CHAR FreezeCount;          // offset: 0x233 ordinal: 0x4a
  CHAR SuspendCount;         // offset: 0x234 ordinal: 0x4b
  UCHAR UserIdealProcessor;  // offset: 0x235 ordinal: 0x4c
  UCHAR CalloutActive;       // offset: 0x236 ordinal: 0x4d
  UCHAR CodePatchInProgress; // offset: 0x237 ordinal: 0x4e
  VOID *Win32Thread;         // offset: 0x238 ordinal: 0x4f
  VOID *StackBase;           // offset: 0x240 ordinal: 0x50
  union {
    struct _KAPC SuspendApc;  // offset: 0x248 ordinal: 0x51
    UCHAR SuspendApcFill0[1]; // offset: 0x248 ordinal: 0x52
  };
  CHAR Quantum;              // offset: 0x249 ordinal: 0x53
  UCHAR SuspendApcFill1[3];  // offset: 0x248 ordinal: 0x54
  UCHAR QuantumReset;        // offset: 0x24b ordinal: 0x55
  UCHAR SuspendApcFill2[4];  // offset: 0x248 ordinal: 0x56
  ULONG KernelTime;          // offset: 0x24c ordinal: 0x57
  UCHAR SuspendApcFill3[64]; // offset: 0x248 ordinal: 0x58
  VOID *TlsArray;            // offset: 0x288 ordinal: 0x59
  UCHAR SuspendApcFill4[72]; // offset: 0x248 ordinal: 0x5a
  VOID *LegoData;            // offset: 0x290 ordinal: 0x5b
  UCHAR SuspendApcFill5[83]; // offset: 0x248 ordinal: 0x5c
  UCHAR PowerState;          // offset: 0x29b ordinal: 0x5d
  ULONG UserTime;            // offset: 0x29c ordinal: 0x5e
  union {
    struct _KSEMAPHORE SuspendSemaphore; // offset: 0x2a0 ordinal: 0x5f
    UCHAR SuspendSemaphorefill[28];      // offset: 0x2a0 ordinal: 0x60
  };
  ULONG SListFaultCount;              // offset: 0x2bc ordinal: 0x61
  struct _LIST_ENTRY ThreadListEntry; // offset: 0x2c0 ordinal: 0x62
  VOID *SListFaultAddress;            // offset: 0x2d0 ordinal: 0x63
  LONGLONG ReadOperationCount;        // offset: 0x2d8 ordinal: 0x64
  LONGLONG WriteOperationCount;       // offset: 0x2e0 ordinal: 0x65
  LONGLONG OtherOperationCount;       // offset: 0x2e8 ordinal: 0x66
  LONGLONG ReadTransferCount;         // offset: 0x2f0 ordinal: 0x67
  LONGLONG WriteTransferCount;        // offset: 0x2f8 ordinal: 0x68
  LONGLONG OtherTransferCount;        // offset: 0x300 ordinal: 0x69
} _KTHREAD;

// 0x410 bytes (sizeof)
typedef struct _ETHREAD {
  struct _KTHREAD Tcb;             // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER CreateTime; // offset: 0x308 ordinal: 0x1
  union {
    union _LARGE_INTEGER ExitTime;     // offset: 0x310 ordinal: 0x2
    struct _LIST_ENTRY LpcReplyChain;  // offset: 0x310 ordinal: 0x3
    struct _LIST_ENTRY KeyedWaitChain; // offset: 0x310 ordinal: 0x4
  };
  union {
    LONG ExitStatus; // offset: 0x320 ordinal: 0x5
    VOID *OfsChain;  // offset: 0x320 ordinal: 0x6
  };
  struct _LIST_ENTRY PostBlockList; // offset: 0x328 ordinal: 0x7
  union {
    struct _TERMINATION_PORT *TerminationPort; // offset: 0x338 ordinal: 0x8
    struct _ETHREAD *ReaperLink;               // offset: 0x338 ordinal: 0x9
    VOID *KeyedWaitValue;                      // offset: 0x338 ordinal: 0xa
  };
  ULONGLONG ActiveTimerListLock;          // offset: 0x340 ordinal: 0xb
  struct _LIST_ENTRY ActiveTimerListHead; // offset: 0x348 ordinal: 0xc
  struct _CLIENT_ID Cid;                  // offset: 0x358 ordinal: 0xd
  union {
    struct _KSEMAPHORE LpcReplySemaphore;  // offset: 0x368 ordinal: 0xe
    struct _KSEMAPHORE KeyedWaitSemaphore; // offset: 0x368 ordinal: 0xf
  };
  union {
    VOID *LpcReplyMessage;  // offset: 0x388 ordinal: 0x10
    VOID *LpcWaitingOnPort; // offset: 0x388 ordinal: 0x11
  };
  struct _PS_IMPERSONATION_INFORMATION
      *ImpersonationInfo;                // offset: 0x390 ordinal: 0x12
  struct _LIST_ENTRY IrpList;            // offset: 0x398 ordinal: 0x13
  ULONGLONG TopLevelIrp;                 // offset: 0x3a8 ordinal: 0x14
  struct _DEVICE_OBJECT *DeviceToVerify; // offset: 0x3b0 ordinal: 0x15
  struct _EPROCESS *ThreadsProcess;      // offset: 0x3b8 ordinal: 0x16
  VOID *StartAddress;                    // offset: 0x3c0 ordinal: 0x17
  union {
    VOID *Win32StartAddress;    // offset: 0x3c8 ordinal: 0x18
    ULONG LpcReceivedMessageId; // offset: 0x3c8 ordinal: 0x19
  };
  struct _LIST_ENTRY ThreadListEntry;    // offset: 0x3d0 ordinal: 0x1a
  struct _EX_RUNDOWN_REF RundownProtect; // offset: 0x3e0 ordinal: 0x1b
  struct _EX_PUSH_LOCK ThreadLock;       // offset: 0x3e8 ordinal: 0x1c
  ULONG LpcReplyMessageId;               // offset: 0x3f0 ordinal: 0x1d
  ULONG ReadClusterSize;                 // offset: 0x3f4 ordinal: 0x1e
  ULONG GrantedAccess;                   // offset: 0x3f8 ordinal: 0x1f
  union {
    ULONG CrossThreadFlags; // offset: 0x3fc ordinal: 0x20
    ULONG Terminated : 1;   // offset: 0x3fc ordinal: 0x21
  };
  ULONG DeadThread : 1;              // offset: 0x3fc ordinal: 0x22
  ULONG HideFromDebugger : 1;        // offset: 0x3fc ordinal: 0x23
  ULONG ActiveImpersonationInfo : 1; // offset: 0x3fc ordinal: 0x24
  ULONG SystemThread : 1;            // offset: 0x3fc ordinal: 0x25
  ULONG HardErrorsAreDisabled : 1;   // offset: 0x3fc ordinal: 0x26
  ULONG BreakOnTermination : 1;      // offset: 0x3fc ordinal: 0x27
  ULONG SkipCreationMsg : 1;         // offset: 0x3fc ordinal: 0x28
  ULONG SkipTerminationMsg : 1;      // offset: 0x3fc ordinal: 0x29
  union {
    ULONG SameThreadPassiveFlags; // offset: 0x400 ordinal: 0x2a
    ULONG ActiveExWorker : 1;     // offset: 0x400 ordinal: 0x2b
  };
  ULONG ExWorkerCanWaitUser : 1; // offset: 0x400 ordinal: 0x2c
  ULONG MemoryMaker : 1;         // offset: 0x400 ordinal: 0x2d
  ULONG KeyedEventInUse : 1;     // offset: 0x400 ordinal: 0x2e
  union {
    ULONG SameThreadApcFlags;        // offset: 0x404 ordinal: 0x2f
    UCHAR LpcReceivedMsgIdValid : 1; // offset: 0x404 ordinal: 0x30
  };
  UCHAR LpcExitThreadCalled : 1;            // offset: 0x404 ordinal: 0x31
  UCHAR AddressSpaceOwner : 1;              // offset: 0x404 ordinal: 0x32
  UCHAR OwnsProcessWorkingSetExclusive : 1; // offset: 0x404 ordinal: 0x33
  UCHAR OwnsProcessWorkingSetShared : 1;    // offset: 0x404 ordinal: 0x34
  UCHAR OwnsSystemWorkingSetExclusive : 1;  // offset: 0x404 ordinal: 0x35
  UCHAR OwnsSystemWorkingSetShared : 1;     // offset: 0x404 ordinal: 0x36
  UCHAR OwnsSessionWorkingSetExclusive : 1; // offset: 0x404 ordinal: 0x37
  UCHAR OwnsSessionWorkingSetShared : 1;    // offset: 0x405 ordinal: 0x38
  UCHAR ApcNeeded : 1;                      // offset: 0x405 ordinal: 0x39
  UCHAR ForwardClusterOnly;                 // offset: 0x408 ordinal: 0x3a
  UCHAR DisablePageFaultClustering;         // offset: 0x409 ordinal: 0x3b
  UCHAR ActiveFaultCount;                   // offset: 0x40a ordinal: 0x3c
} _ETHREAD;

// 0xba8 bytes (sizeof)
typedef struct _POP_DEVICE_SYS_STATE {
  UCHAR IrpMinor;                                 // offset: 0x0 ordinal: 0x0
  enum _SYSTEM_POWER_STATE SystemState;           // offset: 0x4 ordinal: 0x1
  struct _KEVENT Event;                           // offset: 0x8 ordinal: 0x2
  ULONGLONG SpinLock;                             // offset: 0x20 ordinal: 0x3
  struct _KTHREAD *Thread;                        // offset: 0x28 ordinal: 0x4
  UCHAR GetNewDeviceList;                         // offset: 0x30 ordinal: 0x5
  struct _PO_DEVICE_NOTIFY_ORDER Order;           // offset: 0x38 ordinal: 0x6
  LONG Status;                                    // offset: 0x448 ordinal: 0x7
  struct _DEVICE_OBJECT *FailedDevice;            // offset: 0x450 ordinal: 0x8
  UCHAR Waking;                                   // offset: 0x458 ordinal: 0x9
  UCHAR Cancelled;                                // offset: 0x459 ordinal: 0xa
  UCHAR IgnoreErrors;                             // offset: 0x45a ordinal: 0xb
  UCHAR IgnoreNotImplemented;                     // offset: 0x45b ordinal: 0xc
  UCHAR WaitAny;                                  // offset: 0x45c ordinal: 0xd
  UCHAR WaitAll;                                  // offset: 0x45d ordinal: 0xe
  struct _LIST_ENTRY PresentIrpQueue;             // offset: 0x460 ordinal: 0xf
  struct _POP_DEVICE_POWER_IRP Head;              // offset: 0x470 ordinal: 0x10
  struct _POP_DEVICE_POWER_IRP PowerIrpState[20]; // offset: 0x4c8 ordinal: 0x11
} _POP_DEVICE_SYS_STATE;

// 0x50 bytes (sizeof)
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
  struct _POP_DEVICE_SYS_STATE *DevState;          // offset: 0x28 ordinal: 0xb
  struct _POP_HIBER_CONTEXT *HiberContext;         // offset: 0x30 ordinal: 0xc
  enum _SYSTEM_POWER_STATE LastWakeState;          // offset: 0x38 ordinal: 0xd
  ULONGLONG WakeTime;                              // offset: 0x40 ordinal: 0xe
  ULONGLONG SleepTime;                             // offset: 0x48 ordinal: 0xf
} _POP_POWER_ACTION;

// 0x38 bytes (sizeof)
typedef struct _KMUTANT {
  struct _DISPATCHER_HEADER Header;   // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY MutantListEntry; // offset: 0x18 ordinal: 0x1
  struct _KTHREAD *OwnerThread;       // offset: 0x28 ordinal: 0x2
  UCHAR Abandoned;                    // offset: 0x30 ordinal: 0x3
  UCHAR ApcDisable;                   // offset: 0x31 ordinal: 0x4
} _KMUTANT;

// 0x280 bytes (sizeof)
typedef struct _WMI_LOGGER_CONTEXT {
  ULONGLONG BufferSpinLock;                     // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER StartTime;               // offset: 0x8 ordinal: 0x1
  VOID *LogFileHandle;                          // offset: 0x10 ordinal: 0x2
  struct _KSEMAPHORE LoggerSemaphore;           // offset: 0x18 ordinal: 0x3
  struct _ETHREAD *LoggerThread;                // offset: 0x38 ordinal: 0x4
  struct _KEVENT LoggerEvent;                   // offset: 0x40 ordinal: 0x5
  struct _KEVENT FlushEvent;                    // offset: 0x58 ordinal: 0x6
  LONG LoggerStatus;                            // offset: 0x70 ordinal: 0x7
  ULONG LoggerId;                               // offset: 0x74 ordinal: 0x8
  LONG BuffersAvailable;                        // offset: 0x78 ordinal: 0x9
  ULONG UsePerfClock;                           // offset: 0x7c ordinal: 0xa
  ULONG WriteFailureLimit;                      // offset: 0x80 ordinal: 0xb
  LONG BuffersDirty;                            // offset: 0x84 ordinal: 0xc
  LONG BuffersInUse;                            // offset: 0x88 ordinal: 0xd
  ULONG SwitchingInProgress;                    // offset: 0x8c ordinal: 0xe
  struct _SLIST_HEADER FreeList;                // offset: 0x90 ordinal: 0xf
  struct _SLIST_HEADER FlushList;               // offset: 0xa0 ordinal: 0x10
  struct _SLIST_HEADER WaitList;                // offset: 0xb0 ordinal: 0x11
  struct _SLIST_HEADER GlobalList;              // offset: 0xc0 ordinal: 0x12
  struct _WMI_BUFFER_HEADER **ProcessorBuffers; // offset: 0xd0 ordinal: 0x13
  struct _UNICODE_STRING LoggerName;            // offset: 0xd8 ordinal: 0x14
  struct _UNICODE_STRING LogFileName;           // offset: 0xe8 ordinal: 0x15
  struct _UNICODE_STRING LogFilePattern;        // offset: 0xf8 ordinal: 0x16
  struct _UNICODE_STRING NewLogFileName;        // offset: 0x108 ordinal: 0x17
  UCHAR *EndPageMarker;                         // offset: 0x118 ordinal: 0x18
  LONG CollectionOn;                            // offset: 0x120 ordinal: 0x19
  ULONG KernelTraceOn;                          // offset: 0x124 ordinal: 0x1a
  LONG PerfLogInTransition;                     // offset: 0x128 ordinal: 0x1b
  ULONG RequestFlag;                            // offset: 0x12c ordinal: 0x1c
  ULONG EnableFlags;                            // offset: 0x130 ordinal: 0x1d
  ULONG MaximumFileSize;                        // offset: 0x134 ordinal: 0x1e
  union {
    ULONG LoggerMode;                        // offset: 0x138 ordinal: 0x1f
    struct _WMI_LOGGER_MODE LoggerModeFlags; // offset: 0x138 ordinal: 0x20
  };
  ULONG Wow;                              // offset: 0x13c ordinal: 0x21
  ULONG LastFlushedBuffer;                // offset: 0x140 ordinal: 0x22
  ULONG RefCount;                         // offset: 0x144 ordinal: 0x23
  ULONG FlushTimer;                       // offset: 0x148 ordinal: 0x24
  union _LARGE_INTEGER FirstBufferOffset; // offset: 0x150 ordinal: 0x25
  union _LARGE_INTEGER ByteOffset;        // offset: 0x158 ordinal: 0x26
  union _LARGE_INTEGER BufferAgeLimit;    // offset: 0x160 ordinal: 0x27
  ULONG MaximumBuffers;                   // offset: 0x168 ordinal: 0x28
  ULONG MinimumBuffers;                   // offset: 0x16c ordinal: 0x29
  ULONG EventsLost;                       // offset: 0x170 ordinal: 0x2a
  ULONG BuffersWritten;                   // offset: 0x174 ordinal: 0x2b
  ULONG LogBuffersLost;                   // offset: 0x178 ordinal: 0x2c
  ULONG RealTimeBuffersLost;              // offset: 0x17c ordinal: 0x2d
  ULONG BufferSize;                       // offset: 0x180 ordinal: 0x2e
  LONG NumberOfBuffers;                   // offset: 0x184 ordinal: 0x2f
  LONG *SequencePtr;                      // offset: 0x188 ordinal: 0x30
  struct _GUID InstanceGuid;              // offset: 0x190 ordinal: 0x31
  VOID *LoggerHeader;                     // offset: 0x1a0 ordinal: 0x32
  LONGLONG (*GetCpuClock)();              // offset: 0x1a8 ordinal: 0x33
  struct _SECURITY_CLIENT_CONTEXT
      ClientSecurityContext; // offset: 0x1b0 ordinal: 0x34
  VOID *LoggerExtension;     // offset: 0x1f8 ordinal: 0x35
  LONG ReleaseQueue;         // offset: 0x200 ordinal: 0x36
  struct _TRACE_ENABLE_FLAG_EXTENSION
      EnableFlagExtension;     // offset: 0x204 ordinal: 0x37
  ULONG LocalSequence;         // offset: 0x208 ordinal: 0x38
  ULONG MaximumIrql;           // offset: 0x20c ordinal: 0x39
  ULONG *EnableFlagArray;      // offset: 0x210 ordinal: 0x3a
  struct _KMUTANT LoggerMutex; // offset: 0x218 ordinal: 0x3b
  LONG MutexCount;             // offset: 0x250 ordinal: 0x3c
  LONG FileCounter;            // offset: 0x254 ordinal: 0x3d
  VOID(*BufferCallback)
  (struct _WMI_BUFFER_HEADER *, VOID *);    // offset: 0x258 ordinal: 0x3e
  VOID *CallbackContext;                    // offset: 0x260 ordinal: 0x3f
  enum _POOL_TYPE PoolType;                 // offset: 0x268 ordinal: 0x40
  union _LARGE_INTEGER ReferenceSystemTime; // offset: 0x270 ordinal: 0x41
  union _LARGE_INTEGER ReferenceTimeStamp;  // offset: 0x278 ordinal: 0x42
} _WMI_LOGGER_CONTEXT;

// 0x30 bytes (sizeof)
typedef struct _VI_DEADLOCK_THREAD {
  struct _KTHREAD *Thread;                    // offset: 0x0 ordinal: 0x0
  struct _VI_DEADLOCK_NODE *CurrentSpinNode;  // offset: 0x8 ordinal: 0x1
  struct _VI_DEADLOCK_NODE *CurrentOtherNode; // offset: 0x10 ordinal: 0x2
  union {
    struct _LIST_ENTRY ListEntry;     // offset: 0x18 ordinal: 0x3
    struct _LIST_ENTRY FreeListEntry; // offset: 0x18 ordinal: 0x4
  };
  ULONG NodeCount;   // offset: 0x28 ordinal: 0x5
  ULONG PagingCount; // offset: 0x2c ordinal: 0x6
} _VI_DEADLOCK_THREAD;

// 0xf8 bytes (sizeof)
typedef struct _VI_DEADLOCK_RESOURCE {
  enum _VI_DEADLOCK_RESOURCE_TYPE Type;    // offset: 0x0 ordinal: 0x0
  ULONG NodeCount : 16;                    // offset: 0x4 ordinal: 0x1
  ULONG RecursionCount : 16;               // offset: 0x4 ordinal: 0x2
  VOID *ResourceAddress;                   // offset: 0x8 ordinal: 0x3
  struct _VI_DEADLOCK_THREAD *ThreadOwner; // offset: 0x10 ordinal: 0x4
  struct _LIST_ENTRY ResourceList;         // offset: 0x18 ordinal: 0x5
  union {
    struct _LIST_ENTRY HashChainList; // offset: 0x28 ordinal: 0x6
    struct _LIST_ENTRY FreeListEntry; // offset: 0x28 ordinal: 0x7
  };
  VOID *StackTrace[8];       // offset: 0x38 ordinal: 0x8
  VOID *LastAcquireTrace[8]; // offset: 0x78 ordinal: 0x9
  VOID *LastReleaseTrace[8]; // offset: 0xb8 ordinal: 0xa
} _VI_DEADLOCK_RESOURCE;

// 0xd0 bytes (sizeof)
typedef struct _VI_DEADLOCK_NODE {
  struct _VI_DEADLOCK_NODE *Parent; // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY ChildrenList;  // offset: 0x8 ordinal: 0x1
  struct _LIST_ENTRY SiblingsList;  // offset: 0x18 ordinal: 0x2
  union {
    struct _LIST_ENTRY ResourceList;  // offset: 0x28 ordinal: 0x3
    struct _LIST_ENTRY FreeListEntry; // offset: 0x28 ordinal: 0x4
  };
  struct _VI_DEADLOCK_RESOURCE *Root;      // offset: 0x38 ordinal: 0x5
  struct _VI_DEADLOCK_THREAD *ThreadEntry; // offset: 0x40 ordinal: 0x6
  ULONG Active : 1;                        // offset: 0x48 ordinal: 0x7
  ULONG OnlyTryAcquireUsed : 1;            // offset: 0x48 ordinal: 0x8
  ULONG ReleasedOutOfOrder : 1;            // offset: 0x48 ordinal: 0x9
  ULONG SequenceNumber : 29;               // offset: 0x48 ordinal: 0xa
  VOID *StackTrace[8];                     // offset: 0x50 ordinal: 0xb
  VOID *ParentStackTrace[8];               // offset: 0x90 ordinal: 0xc
} _VI_DEADLOCK_NODE;

// 0x38 bytes (sizeof)
typedef struct _KGUARDED_MUTEX {
  LONG Count;               // offset: 0x0 ordinal: 0x0
  struct _KTHREAD *Owner;   // offset: 0x8 ordinal: 0x1
  ULONG Contention;         // offset: 0x10 ordinal: 0x2
  struct _KGATE Gate;       // offset: 0x18 ordinal: 0x3
  SHORT KernelApcDisable;   // offset: 0x30 ordinal: 0x4
  SHORT SpecialApcDisable;  // offset: 0x32 ordinal: 0x5
  ULONG CombinedApcDisable; // offset: 0x30 ordinal: 0x6
} _KGUARDED_MUTEX;

// 0x88 bytes (sizeof)
typedef struct _PNP_DEVICE_EVENT_LIST {
  LONG Status;                     // offset: 0x0 ordinal: 0x0
  struct _KMUTANT EventQueueMutex; // offset: 0x8 ordinal: 0x1
  struct _KGUARDED_MUTEX Lock;     // offset: 0x40 ordinal: 0x2
  struct _LIST_ENTRY List;         // offset: 0x78 ordinal: 0x3
} _PNP_DEVICE_EVENT_LIST;

// 0x68 bytes (sizeof)
typedef struct _MMSESSION {
  struct _KGUARDED_MUTEX SystemSpaceViewLock; // offset: 0x0 ordinal: 0x0
  struct _KGUARDED_MUTEX
      *SystemSpaceViewLockPointer;       // offset: 0x38 ordinal: 0x1
  CHAR *SystemSpaceViewStart;            // offset: 0x40 ordinal: 0x2
  struct _MMVIEW *SystemSpaceViewTable;  // offset: 0x48 ordinal: 0x3
  ULONG SystemSpaceHashSize;             // offset: 0x50 ordinal: 0x4
  ULONG SystemSpaceHashEntries;          // offset: 0x54 ordinal: 0x5
  ULONG SystemSpaceHashKey;              // offset: 0x58 ordinal: 0x6
  ULONG BitmapFailures;                  // offset: 0x5c ordinal: 0x7
  struct _RTL_BITMAP *SystemSpaceBitMap; // offset: 0x60 ordinal: 0x8
} _MMSESSION;

// 0x1d80 bytes (sizeof)
typedef struct _MM_SESSION_SPACE {
  struct _MM_SESSION_SPACE *GlobalVirtualAddress; // offset: 0x0 ordinal: 0x0
  LONG ReferenceCount;                            // offset: 0x8 ordinal: 0x1
  union __anon_916 u;                             // offset: 0xc ordinal: 0x2
  ULONG SessionId;                                // offset: 0x10 ordinal: 0x3
  struct _LIST_ENTRY ProcessList;                 // offset: 0x18 ordinal: 0x4
  union _LARGE_INTEGER LastProcessSwappedOutTime; // offset: 0x28 ordinal: 0x5
  ULONGLONG SessionPageDirectoryIndex;            // offset: 0x30 ordinal: 0x6
  ULONGLONG NonPagablePages;                      // offset: 0x38 ordinal: 0x7
  ULONGLONG CommittedPages;                       // offset: 0x40 ordinal: 0x8
  VOID *PagedPoolStart;                           // offset: 0x48 ordinal: 0x9
  VOID *PagedPoolEnd;                             // offset: 0x50 ordinal: 0xa
  struct _MMPTE *PagedPoolBasePde;                // offset: 0x58 ordinal: 0xb
  ULONG Color;                                    // offset: 0x60 ordinal: 0xc
  LONG ResidentProcessCount;                      // offset: 0x64 ordinal: 0xd
  ULONG SessionPoolAllocationFailures[4];         // offset: 0x68 ordinal: 0xe
  struct _LIST_ENTRY ImageList;                   // offset: 0x78 ordinal: 0xf
  ULONG LocaleId;                                 // offset: 0x88 ordinal: 0x10
  ULONG AttachCount;                              // offset: 0x8c ordinal: 0x11
  struct _KEVENT AttachEvent;                     // offset: 0x90 ordinal: 0x12
  struct _EPROCESS *LastProcess;                  // offset: 0xa8 ordinal: 0x13
  LONG ProcessReferenceToSession;                 // offset: 0xb0 ordinal: 0x14
  struct _LIST_ENTRY WsListEntry;                 // offset: 0xb8 ordinal: 0x15
  struct _GENERAL_LOOKASIDE Lookaside[21];        // offset: 0x100 ordinal: 0x16
  struct _MMSESSION Session;                      // offset: 0xb80 ordinal: 0x17
  struct _KGUARDED_MUTEX PagedPoolMutex;          // offset: 0xbe8 ordinal: 0x18
  struct _MM_PAGED_POOL_INFO PagedPoolInfo;       // offset: 0xc20 ordinal: 0x19
  struct _MMSUPPORT Vm;                           // offset: 0xc60 ordinal: 0x1a
  struct _MMWSLE *Wsle;                           // offset: 0xcb8 ordinal: 0x1b
  VOID(*Win32KDriverUnload)
  (struct _DRIVER_OBJECT *);                     // offset: 0xcc0 ordinal: 0x1c
  struct _POOL_DESCRIPTOR PagedPool;             // offset: 0xcc8 ordinal: 0x1d
  struct _MMPTE PageDirectory;                   // offset: 0x1d10 ordinal: 0x1e
  struct _MMPTE *SpecialPoolFirstPte;            // offset: 0x1d18 ordinal: 0x1f
  struct _MMPTE *SpecialPoolLastPte;             // offset: 0x1d20 ordinal: 0x20
  struct _MMPTE *NextPdeForSpecialPoolExpansion; // offset: 0x1d28 ordinal: 0x21
  struct _MMPTE *LastPdeForSpecialPoolExpansion; // offset: 0x1d30 ordinal: 0x22
  ULONGLONG SpecialPagesInUse;                   // offset: 0x1d38 ordinal: 0x23
  LONG ImageLoadingCount;                        // offset: 0x1d40 ordinal: 0x24
} _MM_SESSION_SPACE;

// 0xab8 bytes (sizeof)
typedef struct _CMHIVE {
  struct _HHIVE Hive;                  // offset: 0x0 ordinal: 0x0
  VOID *FileHandles[3];                // offset: 0x578 ordinal: 0x1
  struct _LIST_ENTRY NotifyList;       // offset: 0x590 ordinal: 0x2
  struct _LIST_ENTRY HiveList;         // offset: 0x5a0 ordinal: 0x3
  struct _EX_PUSH_LOCK HiveLock;       // offset: 0x5b0 ordinal: 0x4
  struct _KGUARDED_MUTEX *ViewLock;    // offset: 0x5b8 ordinal: 0x5
  struct _EX_PUSH_LOCK WriterLock;     // offset: 0x5c0 ordinal: 0x6
  struct _EX_PUSH_LOCK FlusherLock;    // offset: 0x5c8 ordinal: 0x7
  struct _EX_PUSH_LOCK SecurityLock;   // offset: 0x5d0 ordinal: 0x8
  struct _LIST_ENTRY LRUViewListHead;  // offset: 0x5d8 ordinal: 0x9
  struct _LIST_ENTRY PinViewListHead;  // offset: 0x5e8 ordinal: 0xa
  struct _FILE_OBJECT *FileObject;     // offset: 0x5f8 ordinal: 0xb
  struct _UNICODE_STRING FileFullPath; // offset: 0x600 ordinal: 0xc
  struct _UNICODE_STRING FileUserName; // offset: 0x610 ordinal: 0xd
  USHORT MappedViews;                  // offset: 0x620 ordinal: 0xe
  USHORT PinnedViews;                  // offset: 0x622 ordinal: 0xf
  ULONG UseCount;                      // offset: 0x624 ordinal: 0x10
  ULONG SecurityCount;                 // offset: 0x628 ordinal: 0x11
  ULONG SecurityCacheSize;             // offset: 0x62c ordinal: 0x12
  LONG SecurityHitHint;                // offset: 0x630 ordinal: 0x13
  struct _CM_KEY_SECURITY_CACHE_ENTRY
      *SecurityCache;                          // offset: 0x638 ordinal: 0x14
  struct _LIST_ENTRY SecurityHash[64];         // offset: 0x640 ordinal: 0x15
  struct _KEVENT *UnloadEvent;                 // offset: 0xa40 ordinal: 0x16
  struct _CM_KEY_CONTROL_BLOCK *RootKcb;       // offset: 0xa48 ordinal: 0x17
  UCHAR Frozen;                                // offset: 0xa50 ordinal: 0x18
  struct _WORK_QUEUE_ITEM *UnloadWorkItem;     // offset: 0xa58 ordinal: 0x19
  UCHAR GrowOnlyMode;                          // offset: 0xa60 ordinal: 0x1a
  ULONG GrowOffset;                            // offset: 0xa64 ordinal: 0x1b
  struct _LIST_ENTRY KcbConvertListHead;       // offset: 0xa68 ordinal: 0x1c
  struct _LIST_ENTRY KnodeConvertListHead;     // offset: 0xa78 ordinal: 0x1d
  struct _CM_CELL_REMAP_BLOCK *CellRemapArray; // offset: 0xa88 ordinal: 0x1e
  ULONG Flags;                                 // offset: 0xa90 ordinal: 0x1f
  struct _LIST_ENTRY TrustClassEntry;          // offset: 0xa98 ordinal: 0x20
  ULONG FlushCount;                            // offset: 0xaa8 ordinal: 0x21
  struct _KTHREAD *CreatorOwner;               // offset: 0xab0 ordinal: 0x22
} _CMHIVE;

// 0x30 bytes (sizeof)
typedef struct _HIVE_LIST_ENTRY {
  USHORT *Name;            // offset: 0x0 ordinal: 0x0
  USHORT *BaseName;        // offset: 0x8 ordinal: 0x1
  struct _CMHIVE *CmHive;  // offset: 0x10 ordinal: 0x2
  ULONG HHiveFlags;        // offset: 0x18 ordinal: 0x3
  ULONG CmHiveFlags;       // offset: 0x1c ordinal: 0x4
  struct _CMHIVE *CmHive2; // offset: 0x20 ordinal: 0x5
  UCHAR ThreadFinished;    // offset: 0x28 ordinal: 0x6
  UCHAR ThreadStarted;     // offset: 0x29 ordinal: 0x7
  UCHAR Allocate;          // offset: 0x2a ordinal: 0x8
} _HIVE_LIST_ENTRY;

// 0x220 bytes (sizeof)
typedef struct _EJOB {
  struct _KEVENT Event;                           // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY JobLinks;                    // offset: 0x18 ordinal: 0x1
  struct _LIST_ENTRY ProcessListHead;             // offset: 0x28 ordinal: 0x2
  struct _ERESOURCE JobLock;                      // offset: 0x38 ordinal: 0x3
  union _LARGE_INTEGER TotalUserTime;             // offset: 0xa0 ordinal: 0x4
  union _LARGE_INTEGER TotalKernelTime;           // offset: 0xa8 ordinal: 0x5
  union _LARGE_INTEGER ThisPeriodTotalUserTime;   // offset: 0xb0 ordinal: 0x6
  union _LARGE_INTEGER ThisPeriodTotalKernelTime; // offset: 0xb8 ordinal: 0x7
  ULONG TotalPageFaultCount;                      // offset: 0xc0 ordinal: 0x8
  ULONG TotalProcesses;                           // offset: 0xc4 ordinal: 0x9
  ULONG ActiveProcesses;                          // offset: 0xc8 ordinal: 0xa
  ULONG TotalTerminatedProcesses;                 // offset: 0xcc ordinal: 0xb
  union _LARGE_INTEGER PerProcessUserTimeLimit;   // offset: 0xd0 ordinal: 0xc
  union _LARGE_INTEGER PerJobUserTimeLimit;       // offset: 0xd8 ordinal: 0xd
  ULONG LimitFlags;                               // offset: 0xe0 ordinal: 0xe
  ULONGLONG MinimumWorkingSetSize;                // offset: 0xe8 ordinal: 0xf
  ULONGLONG MaximumWorkingSetSize;                // offset: 0xf0 ordinal: 0x10
  ULONG ActiveProcessLimit;                       // offset: 0xf8 ordinal: 0x11
  ULONGLONG Affinity;                             // offset: 0x100 ordinal: 0x12
  UCHAR PriorityClass;                            // offset: 0x108 ordinal: 0x13
  ULONG UIRestrictionsClass;                      // offset: 0x10c ordinal: 0x14
  ULONG SecurityLimitFlags;                       // offset: 0x110 ordinal: 0x15
  VOID *Token;                                    // offset: 0x118 ordinal: 0x16
  struct _PS_JOB_TOKEN_FILTER *Filter;            // offset: 0x120 ordinal: 0x17
  ULONG EndOfJobTimeAction;                       // offset: 0x128 ordinal: 0x18
  VOID *CompletionPort;                           // offset: 0x130 ordinal: 0x19
  VOID *CompletionKey;                            // offset: 0x138 ordinal: 0x1a
  ULONG SessionId;                                // offset: 0x140 ordinal: 0x1b
  ULONG SchedulingClass;                          // offset: 0x144 ordinal: 0x1c
  ULONGLONG ReadOperationCount;                   // offset: 0x148 ordinal: 0x1d
  ULONGLONG WriteOperationCount;                  // offset: 0x150 ordinal: 0x1e
  ULONGLONG OtherOperationCount;                  // offset: 0x158 ordinal: 0x1f
  ULONGLONG ReadTransferCount;                    // offset: 0x160 ordinal: 0x20
  ULONGLONG WriteTransferCount;                   // offset: 0x168 ordinal: 0x21
  ULONGLONG OtherTransferCount;                   // offset: 0x170 ordinal: 0x22
  struct _IO_COUNTERS IoInfo;                     // offset: 0x178 ordinal: 0x23
  ULONGLONG ProcessMemoryLimit;                   // offset: 0x1a8 ordinal: 0x24
  ULONGLONG JobMemoryLimit;                       // offset: 0x1b0 ordinal: 0x25
  ULONGLONG PeakProcessMemoryUsed;                // offset: 0x1b8 ordinal: 0x26
  ULONGLONG PeakJobMemoryUsed;                    // offset: 0x1c0 ordinal: 0x27
  ULONGLONG CurrentJobMemoryUsed;                 // offset: 0x1c8 ordinal: 0x28
  struct _KGUARDED_MUTEX MemoryLimitsLock;        // offset: 0x1d0 ordinal: 0x29
  struct _LIST_ENTRY JobSetLinks;                 // offset: 0x208 ordinal: 0x2a
  ULONG MemberLevel;                              // offset: 0x218 ordinal: 0x2b
  ULONG JobFlags;                                 // offset: 0x21c ordinal: 0x2c
} _EJOB;

// 0x38 bytes (sizeof)
typedef struct _FAST_MUTEX {
  LONG Count;             // offset: 0x0 ordinal: 0x0
  struct _KTHREAD *Owner; // offset: 0x8 ordinal: 0x1
  ULONG Contention;       // offset: 0x10 ordinal: 0x2
  struct _KEVENT Gate;    // offset: 0x18 ordinal: 0x3
  ULONG OldIrql;          // offset: 0x30 ordinal: 0x4
} _FAST_MUTEX;

// 0xf0 bytes (sizeof)
typedef struct _HANDLE_TRACE_DEBUG_INFO {
  LONG RefCount;                            // offset: 0x0 ordinal: 0x0
  ULONG TableSize;                          // offset: 0x4 ordinal: 0x1
  ULONG BitMaskFlags;                       // offset: 0x8 ordinal: 0x2
  struct _FAST_MUTEX CloseCompactionLock;   // offset: 0x10 ordinal: 0x3
  ULONG CurrentStackIndex;                  // offset: 0x48 ordinal: 0x4
  struct _HANDLE_TRACE_DB_ENTRY TraceDb[1]; // offset: 0x50 ordinal: 0x5
} _HANDLE_TRACE_DEBUG_INFO;

// 0x70 bytes (sizeof)
typedef struct _HANDLE_TABLE {
  ULONGLONG TableCode;                        // offset: 0x0 ordinal: 0x0
  struct _EPROCESS *QuotaProcess;             // offset: 0x8 ordinal: 0x1
  VOID *UniqueProcessId;                      // offset: 0x10 ordinal: 0x2
  struct _EX_PUSH_LOCK HandleTableLock[4];    // offset: 0x18 ordinal: 0x3
  struct _LIST_ENTRY HandleTableList;         // offset: 0x38 ordinal: 0x4
  struct _EX_PUSH_LOCK HandleContentionEvent; // offset: 0x48 ordinal: 0x5
  struct _HANDLE_TRACE_DEBUG_INFO *DebugInfo; // offset: 0x50 ordinal: 0x6
  LONG ExtraInfoPages;                        // offset: 0x58 ordinal: 0x7
  ULONG FirstFree;                            // offset: 0x5c ordinal: 0x8
  ULONG LastFree;                             // offset: 0x60 ordinal: 0x9
  ULONG NextHandleNeedingPool;                // offset: 0x64 ordinal: 0xa
  LONG HandleCount;                           // offset: 0x68 ordinal: 0xb
  union {
    ULONG Flags;          // offset: 0x6c ordinal: 0xc
    UCHAR StrictFIFO : 1; // offset: 0x6c ordinal: 0xd
  };
} _HANDLE_TABLE;

// 0x3e0 bytes (sizeof)
typedef struct _EPROCESS {
  struct _KPROCESS Pcb;                       // offset: 0x0 ordinal: 0x0
  struct _EX_PUSH_LOCK ProcessLock;           // offset: 0xb8 ordinal: 0x1
  union _LARGE_INTEGER CreateTime;            // offset: 0xc0 ordinal: 0x2
  union _LARGE_INTEGER ExitTime;              // offset: 0xc8 ordinal: 0x3
  struct _EX_RUNDOWN_REF RundownProtect;      // offset: 0xd0 ordinal: 0x4
  VOID *UniqueProcessId;                      // offset: 0xd8 ordinal: 0x5
  struct _LIST_ENTRY ActiveProcessLinks;      // offset: 0xe0 ordinal: 0x6
  ULONGLONG QuotaUsage[3];                    // offset: 0xf0 ordinal: 0x7
  ULONGLONG QuotaPeak[3];                     // offset: 0x108 ordinal: 0x8
  ULONGLONG CommitCharge;                     // offset: 0x120 ordinal: 0x9
  ULONGLONG PeakVirtualSize;                  // offset: 0x128 ordinal: 0xa
  ULONGLONG VirtualSize;                      // offset: 0x130 ordinal: 0xb
  struct _LIST_ENTRY SessionProcessLinks;     // offset: 0x138 ordinal: 0xc
  VOID *DebugPort;                            // offset: 0x148 ordinal: 0xd
  VOID *ExceptionPort;                        // offset: 0x150 ordinal: 0xe
  struct _HANDLE_TABLE *ObjectTable;          // offset: 0x158 ordinal: 0xf
  struct _EX_FAST_REF Token;                  // offset: 0x160 ordinal: 0x10
  ULONGLONG WorkingSetPage;                   // offset: 0x168 ordinal: 0x11
  struct _KGUARDED_MUTEX AddressCreationLock; // offset: 0x170 ordinal: 0x12
  ULONGLONG HyperSpaceLock;                   // offset: 0x1a8 ordinal: 0x13
  struct _ETHREAD *ForkInProgress;            // offset: 0x1b0 ordinal: 0x14
  ULONGLONG HardwareTrigger;                  // offset: 0x1b8 ordinal: 0x15
  struct _MM_AVL_TABLE *PhysicalVadRoot;      // offset: 0x1c0 ordinal: 0x16
  VOID *CloneRoot;                            // offset: 0x1c8 ordinal: 0x17
  ULONGLONG NumberOfPrivatePages;             // offset: 0x1d0 ordinal: 0x18
  ULONGLONG NumberOfLockedPages;              // offset: 0x1d8 ordinal: 0x19
  VOID *Win32Process;                         // offset: 0x1e0 ordinal: 0x1a
  struct _EJOB *Job;                          // offset: 0x1e8 ordinal: 0x1b
  VOID *SectionObject;                        // offset: 0x1f0 ordinal: 0x1c
  VOID *SectionBaseAddress;                   // offset: 0x1f8 ordinal: 0x1d
  struct _EPROCESS_QUOTA_BLOCK *QuotaBlock;   // offset: 0x200 ordinal: 0x1e
  struct _PAGEFAULT_HISTORY *WorkingSetWatch; // offset: 0x208 ordinal: 0x1f
  VOID *Win32WindowStation;                   // offset: 0x210 ordinal: 0x20
  VOID *InheritedFromUniqueProcessId;         // offset: 0x218 ordinal: 0x21
  VOID *LdtInformation;                       // offset: 0x220 ordinal: 0x22
  VOID *VadFreeHint;                          // offset: 0x228 ordinal: 0x23
  VOID *VdmObjects;                           // offset: 0x230 ordinal: 0x24
  VOID *DeviceMap;                            // offset: 0x238 ordinal: 0x25
  VOID *Spare0[3];                            // offset: 0x240 ordinal: 0x26
  union {
    struct _HARDWARE_PTE PageDirectoryPte; // offset: 0x258 ordinal: 0x27
    ULONGLONG Filler;                      // offset: 0x258 ordinal: 0x28
  };
  VOID *Session;                            // offset: 0x260 ordinal: 0x29
  UCHAR ImageFileName[16];                  // offset: 0x268 ordinal: 0x2a
  struct _LIST_ENTRY JobLinks;              // offset: 0x278 ordinal: 0x2b
  VOID *LockedPagesList;                    // offset: 0x288 ordinal: 0x2c
  struct _LIST_ENTRY ThreadListHead;        // offset: 0x290 ordinal: 0x2d
  VOID *SecurityPort;                       // offset: 0x2a0 ordinal: 0x2e
  struct _WOW64_PROCESS *Wow64Process;      // offset: 0x2a8 ordinal: 0x2f
  ULONG ActiveThreads;                      // offset: 0x2b0 ordinal: 0x30
  ULONG GrantedAccess;                      // offset: 0x2b4 ordinal: 0x31
  ULONG DefaultHardErrorProcessing;         // offset: 0x2b8 ordinal: 0x32
  LONG LastThreadExitStatus;                // offset: 0x2bc ordinal: 0x33
  struct _PEB *Peb;                         // offset: 0x2c0 ordinal: 0x34
  struct _EX_FAST_REF PrefetchTrace;        // offset: 0x2c8 ordinal: 0x35
  union _LARGE_INTEGER ReadOperationCount;  // offset: 0x2d0 ordinal: 0x36
  union _LARGE_INTEGER WriteOperationCount; // offset: 0x2d8 ordinal: 0x37
  union _LARGE_INTEGER OtherOperationCount; // offset: 0x2e0 ordinal: 0x38
  union _LARGE_INTEGER ReadTransferCount;   // offset: 0x2e8 ordinal: 0x39
  union _LARGE_INTEGER WriteTransferCount;  // offset: 0x2f0 ordinal: 0x3a
  union _LARGE_INTEGER OtherTransferCount;  // offset: 0x2f8 ordinal: 0x3b
  ULONGLONG CommitChargeLimit;              // offset: 0x300 ordinal: 0x3c
  ULONGLONG CommitChargePeak;               // offset: 0x308 ordinal: 0x3d
  VOID *AweInfo;                            // offset: 0x310 ordinal: 0x3e
  struct _SE_AUDIT_PROCESS_CREATION_INFO
      SeAuditProcessCreationInfo; // offset: 0x318 ordinal: 0x3f
  struct _MMSUPPORT Vm;           // offset: 0x320 ordinal: 0x40
  ULONG Spares[2];                // offset: 0x378 ordinal: 0x41
  ULONG ModifiedPageCount;        // offset: 0x380 ordinal: 0x42
  ULONG JobStatus;                // offset: 0x384 ordinal: 0x43
  union {
    ULONG Flags;              // offset: 0x388 ordinal: 0x44
    ULONG CreateReported : 1; // offset: 0x388 ordinal: 0x45
  };
  ULONG NoDebugInherit : 1;          // offset: 0x388 ordinal: 0x46
  ULONG ProcessExiting : 1;          // offset: 0x388 ordinal: 0x47
  ULONG ProcessDelete : 1;           // offset: 0x388 ordinal: 0x48
  ULONG Wow64SplitPages : 1;         // offset: 0x388 ordinal: 0x49
  ULONG VmDeleted : 1;               // offset: 0x388 ordinal: 0x4a
  ULONG OutswapEnabled : 1;          // offset: 0x388 ordinal: 0x4b
  ULONG Outswapped : 1;              // offset: 0x388 ordinal: 0x4c
  ULONG ForkFailed : 1;              // offset: 0x388 ordinal: 0x4d
  ULONG Wow64VaSpace4Gb : 1;         // offset: 0x388 ordinal: 0x4e
  ULONG AddressSpaceInitialized : 2; // offset: 0x388 ordinal: 0x4f
  ULONG SetTimerResolution : 1;      // offset: 0x388 ordinal: 0x50
  ULONG BreakOnTermination : 1;      // offset: 0x388 ordinal: 0x51
  ULONG SessionCreationUnderway : 1; // offset: 0x388 ordinal: 0x52
  ULONG WriteWatch : 1;              // offset: 0x388 ordinal: 0x53
  ULONG ProcessInSession : 1;        // offset: 0x388 ordinal: 0x54
  ULONG OverrideAddressSpace : 1;    // offset: 0x388 ordinal: 0x55
  ULONG HasAddressSpace : 1;         // offset: 0x388 ordinal: 0x56
  ULONG LaunchPrefetched : 1;        // offset: 0x388 ordinal: 0x57
  ULONG InjectInpageErrors : 1;      // offset: 0x388 ordinal: 0x58
  ULONG VmTopDown : 1;               // offset: 0x388 ordinal: 0x59
  ULONG ImageNotifyDone : 1;         // offset: 0x388 ordinal: 0x5a
  ULONG PdeUpdateNeeded : 1;         // offset: 0x388 ordinal: 0x5b
  ULONG VdmAllowed : 1;              // offset: 0x388 ordinal: 0x5c
  ULONG SmapAllowed : 1;             // offset: 0x388 ordinal: 0x5d
  ULONG CreateFailed : 1;            // offset: 0x388 ordinal: 0x5e
  ULONG DefaultIoPriority : 3;       // offset: 0x388 ordinal: 0x5f
  ULONG Spare1 : 1;                  // offset: 0x388 ordinal: 0x60
  ULONG Spare2 : 1;                  // offset: 0x388 ordinal: 0x61
  LONG ExitStatus;                   // offset: 0x38c ordinal: 0x62
  USHORT NextPageColor;              // offset: 0x390 ordinal: 0x63
  UCHAR SubSystemMinorVersion;       // offset: 0x392 ordinal: 0x64
  UCHAR SubSystemMajorVersion;       // offset: 0x393 ordinal: 0x65
  USHORT SubSystemVersion;           // offset: 0x392 ordinal: 0x66
  UCHAR PriorityClass;               // offset: 0x394 ordinal: 0x67
  struct _MM_AVL_TABLE VadRoot;      // offset: 0x398 ordinal: 0x68
  ULONG Cookie;                      // offset: 0x3d8 ordinal: 0x69
} _EPROCESS;

// 0x170 bytes (sizeof)
typedef struct _PROCESSOR_POWER_STATE {
  VOID(*IdleFunction)
  (struct _PROCESSOR_POWER_STATE *);         // offset: 0x0 ordinal: 0x0
  ULONG Idle0KernelTimeLimit;                // offset: 0x8 ordinal: 0x1
  ULONG Idle0LastTime;                       // offset: 0xc ordinal: 0x2
  VOID *IdleHandlers;                        // offset: 0x10 ordinal: 0x3
  VOID *IdleState;                           // offset: 0x18 ordinal: 0x4
  ULONG IdleHandlersCount;                   // offset: 0x20 ordinal: 0x5
  ULONGLONG LastCheck;                       // offset: 0x28 ordinal: 0x6
  struct PROCESSOR_IDLE_TIMES IdleTimes;     // offset: 0x30 ordinal: 0x7
  ULONG IdleTime1;                           // offset: 0x50 ordinal: 0x8
  ULONG PromotionCheck;                      // offset: 0x54 ordinal: 0x9
  ULONG IdleTime2;                           // offset: 0x58 ordinal: 0xa
  UCHAR CurrentThrottle;                     // offset: 0x5c ordinal: 0xb
  UCHAR ThermalThrottleLimit;                // offset: 0x5d ordinal: 0xc
  UCHAR CurrentThrottleIndex;                // offset: 0x5e ordinal: 0xd
  UCHAR ThermalThrottleIndex;                // offset: 0x5f ordinal: 0xe
  ULONG LastKernelUserTime;                  // offset: 0x60 ordinal: 0xf
  ULONG LastIdleThreadKernelTime;            // offset: 0x64 ordinal: 0x10
  ULONG PackageIdleStartTime;                // offset: 0x68 ordinal: 0x11
  ULONG PackageIdleTime;                     // offset: 0x6c ordinal: 0x12
  ULONG DebugCount;                          // offset: 0x70 ordinal: 0x13
  ULONG LastSysTime;                         // offset: 0x74 ordinal: 0x14
  ULONGLONG TotalIdleStateTime[3];           // offset: 0x78 ordinal: 0x15
  ULONG TotalIdleTransitions[3];             // offset: 0x90 ordinal: 0x16
  ULONGLONG PreviousC3StateTime;             // offset: 0xa0 ordinal: 0x17
  UCHAR KneeThrottleIndex;                   // offset: 0xa8 ordinal: 0x18
  UCHAR ThrottleLimitIndex;                  // offset: 0xa9 ordinal: 0x19
  UCHAR PerfStatesCount;                     // offset: 0xaa ordinal: 0x1a
  UCHAR ProcessorMinThrottle;                // offset: 0xab ordinal: 0x1b
  UCHAR ProcessorMaxThrottle;                // offset: 0xac ordinal: 0x1c
  UCHAR EnableIdleAccounting;                // offset: 0xad ordinal: 0x1d
  UCHAR LastC3Percentage;                    // offset: 0xae ordinal: 0x1e
  UCHAR LastAdjustedBusyPercentage;          // offset: 0xaf ordinal: 0x1f
  ULONG PromotionCount;                      // offset: 0xb0 ordinal: 0x20
  ULONG DemotionCount;                       // offset: 0xb4 ordinal: 0x21
  ULONG ErrorCount;                          // offset: 0xb8 ordinal: 0x22
  ULONG RetryCount;                          // offset: 0xbc ordinal: 0x23
  ULONG Flags;                               // offset: 0xc0 ordinal: 0x24
  union _LARGE_INTEGER PerfCounterFrequency; // offset: 0xc8 ordinal: 0x25
  ULONG PerfTickCount;                       // offset: 0xd0 ordinal: 0x26
  struct _KTIMER PerfTimer;                  // offset: 0xd8 ordinal: 0x27
  struct _KDPC PerfDpc;                      // offset: 0x118 ordinal: 0x28
  struct PROCESSOR_PERF_STATE *PerfStates;   // offset: 0x158 ordinal: 0x29
  LONG (*PerfSetThrottle)(UCHAR);            // offset: 0x160 ordinal: 0x2a
  ULONG LastC3KernelUserTime;                // offset: 0x168 ordinal: 0x2b
  ULONG LastPackageIdleTime;                 // offset: 0x16c ordinal: 0x2c
} _PROCESSOR_POWER_STATE;

typedef VOID (*__anon_116)(struct _PROCESSOR_POWER_STATE *);

// 0x2480 bytes (sizeof)
typedef struct _KPRCB {
  ULONG MxCsr;                                   // offset: 0x0 ordinal: 0x0
  UCHAR Number;                                  // offset: 0x4 ordinal: 0x1
  UCHAR NestingLevel;                            // offset: 0x5 ordinal: 0x2
  UCHAR InterruptRequest;                        // offset: 0x6 ordinal: 0x3
  UCHAR IdleHalt;                                // offset: 0x7 ordinal: 0x4
  struct _KTHREAD *CurrentThread;                // offset: 0x8 ordinal: 0x5
  struct _KTHREAD *NextThread;                   // offset: 0x10 ordinal: 0x6
  struct _KTHREAD *IdleThread;                   // offset: 0x18 ordinal: 0x7
  ULONGLONG UserRsp;                             // offset: 0x20 ordinal: 0x8
  ULONGLONG RspBase;                             // offset: 0x28 ordinal: 0x9
  ULONGLONG PrcbLock;                            // offset: 0x30 ordinal: 0xa
  ULONGLONG SetMember;                           // offset: 0x38 ordinal: 0xb
  struct _KPROCESSOR_STATE ProcessorState;       // offset: 0x40 ordinal: 0xc
  CHAR CpuType;                                  // offset: 0x5f0 ordinal: 0xd
  CHAR CpuID;                                    // offset: 0x5f1 ordinal: 0xe
  USHORT CpuStep;                                // offset: 0x5f2 ordinal: 0xf
  ULONG MHz;                                     // offset: 0x5f4 ordinal: 0x10
  ULONGLONG HalReserved[8];                      // offset: 0x5f8 ordinal: 0x11
  USHORT MinorVersion;                           // offset: 0x638 ordinal: 0x12
  USHORT MajorVersion;                           // offset: 0x63a ordinal: 0x13
  UCHAR BuildType;                               // offset: 0x63c ordinal: 0x14
  UCHAR CpuVendor;                               // offset: 0x63d ordinal: 0x15
  UCHAR InitialApicId;                           // offset: 0x63e ordinal: 0x16
  UCHAR LogicalProcessorsPerPhysicalProcessor;   // offset: 0x63f ordinal: 0x17
  ULONG ApicMask;                                // offset: 0x640 ordinal: 0x18
  UCHAR CFlushSize;                              // offset: 0x644 ordinal: 0x19
  UCHAR PrcbPad0x[3];                            // offset: 0x645 ordinal: 0x1a
  VOID *AcpiReserved;                            // offset: 0x648 ordinal: 0x1b
  ULONGLONG PrcbPad00[4];                        // offset: 0x650 ordinal: 0x1c
  struct _KSPIN_LOCK_QUEUE LockQueue[33];        // offset: 0x670 ordinal: 0x1d
  struct _PP_LOOKASIDE_LIST PPLookasideList[16]; // offset: 0x880 ordinal: 0x1e
  struct _PP_LOOKASIDE_LIST
      PPNPagedLookasideList[32]; // offset: 0x980 ordinal: 0x1f
  struct _PP_LOOKASIDE_LIST
      PPPagedLookasideList[32]; // offset: 0xb80 ordinal: 0x20
  ULONGLONG PacketBarrier;      // offset: 0xd80 ordinal: 0x21
  struct _SINGLE_LIST_ENTRY
      DeferredReadyListHead;                  // offset: 0xd88 ordinal: 0x22
  LONG MmPageFaultCount;                      // offset: 0xd90 ordinal: 0x23
  LONG MmCopyOnWriteCount;                    // offset: 0xd94 ordinal: 0x24
  LONG MmTransitionCount;                     // offset: 0xd98 ordinal: 0x25
  LONG MmCacheTransitionCount;                // offset: 0xd9c ordinal: 0x26
  LONG MmDemandZeroCount;                     // offset: 0xda0 ordinal: 0x27
  LONG MmPageReadCount;                       // offset: 0xda4 ordinal: 0x28
  LONG MmPageReadIoCount;                     // offset: 0xda8 ordinal: 0x29
  LONG MmCacheReadCount;                      // offset: 0xdac ordinal: 0x2a
  LONG MmCacheIoCount;                        // offset: 0xdb0 ordinal: 0x2b
  LONG MmDirtyPagesWriteCount;                // offset: 0xdb4 ordinal: 0x2c
  LONG MmDirtyWriteIoCount;                   // offset: 0xdb8 ordinal: 0x2d
  LONG MmMappedPagesWriteCount;               // offset: 0xdbc ordinal: 0x2e
  LONG MmMappedWriteIoCount;                  // offset: 0xdc0 ordinal: 0x2f
  LONG LookasideIrpFloat;                     // offset: 0xdc4 ordinal: 0x30
  ULONG KeSystemCalls;                        // offset: 0xdc8 ordinal: 0x31
  LONG IoReadOperationCount;                  // offset: 0xdcc ordinal: 0x32
  LONG IoWriteOperationCount;                 // offset: 0xdd0 ordinal: 0x33
  LONG IoOtherOperationCount;                 // offset: 0xdd4 ordinal: 0x34
  union _LARGE_INTEGER IoReadTransferCount;   // offset: 0xdd8 ordinal: 0x35
  union _LARGE_INTEGER IoWriteTransferCount;  // offset: 0xde0 ordinal: 0x36
  union _LARGE_INTEGER IoOtherTransferCount;  // offset: 0xde8 ordinal: 0x37
  ULONG KeContextSwitches;                    // offset: 0xdf0 ordinal: 0x38
  UCHAR PrcbPad2[12];                         // offset: 0xdf4 ordinal: 0x39
  ULONGLONG TargetSet;                        // offset: 0xe00 ordinal: 0x3a
  ULONG IpiFrozen;                            // offset: 0xe08 ordinal: 0x3b
  UCHAR PrcbPad3[116];                        // offset: 0xe0c ordinal: 0x3c
  struct _REQUEST_MAILBOX RequestMailbox[64]; // offset: 0xe80 ordinal: 0x3d
  ULONGLONG SenderSummary;                    // offset: 0x1e80 ordinal: 0x3e
  UCHAR PrcbPad4[120];                        // offset: 0x1e88 ordinal: 0x3f
  struct _KDPC_DATA DpcData[2];               // offset: 0x1f00 ordinal: 0x40
  VOID *DpcStack;                             // offset: 0x1f40 ordinal: 0x41
  VOID *SavedRsp;                             // offset: 0x1f48 ordinal: 0x42
  LONG MaximumDpcQueueDepth;                  // offset: 0x1f50 ordinal: 0x43
  ULONG DpcRequestRate;                       // offset: 0x1f54 ordinal: 0x44
  ULONG MinimumDpcRate;                       // offset: 0x1f58 ordinal: 0x45
  UCHAR DpcInterruptRequested;                // offset: 0x1f5c ordinal: 0x46
  UCHAR DpcThreadRequested;                   // offset: 0x1f5d ordinal: 0x47
  UCHAR DpcRoutineActive;                     // offset: 0x1f5e ordinal: 0x48
  UCHAR DpcThreadActive;                      // offset: 0x1f5f ordinal: 0x49
  union {
    ULONGLONG TimerHand;    // offset: 0x1f60 ordinal: 0x4a
    ULONGLONG TimerRequest; // offset: 0x1f60 ordinal: 0x4b
  };
  LONG TickOffset;                 // offset: 0x1f68 ordinal: 0x4c
  LONG MasterOffset;               // offset: 0x1f6c ordinal: 0x4d
  ULONG DpcLastCount;              // offset: 0x1f70 ordinal: 0x4e
  UCHAR ThreadDpcEnable;           // offset: 0x1f74 ordinal: 0x4f
  UCHAR QuantumEnd;                // offset: 0x1f75 ordinal: 0x50
  UCHAR PrcbPad50;                 // offset: 0x1f76 ordinal: 0x51
  UCHAR IdleSchedule;              // offset: 0x1f77 ordinal: 0x52
  LONG DpcSetEventRequest;         // offset: 0x1f78 ordinal: 0x53
  LONG PrcbPad40;                  // offset: 0x1f7c ordinal: 0x54
  VOID *DpcThread;                 // offset: 0x1f80 ordinal: 0x55
  struct _KEVENT DpcEvent;         // offset: 0x1f88 ordinal: 0x56
  struct _KDPC CallDpc;            // offset: 0x1fa0 ordinal: 0x57
  ULONGLONG PrcbPad7[4];           // offset: 0x1fe0 ordinal: 0x58
  struct _LIST_ENTRY WaitListHead; // offset: 0x2000 ordinal: 0x59
  ULONG ReadySummary;              // offset: 0x2010 ordinal: 0x5a
  ULONG QueueIndex;                // offset: 0x2014 ordinal: 0x5b
  struct _LIST_ENTRY
      DispatcherReadyListHead[32];          // offset: 0x2018 ordinal: 0x5c
  ULONG InterruptCount;                     // offset: 0x2218 ordinal: 0x5d
  ULONG KernelTime;                         // offset: 0x221c ordinal: 0x5e
  ULONG UserTime;                           // offset: 0x2220 ordinal: 0x5f
  ULONG DpcTime;                            // offset: 0x2224 ordinal: 0x60
  ULONG InterruptTime;                      // offset: 0x2228 ordinal: 0x61
  ULONG AdjustDpcThreshold;                 // offset: 0x222c ordinal: 0x62
  UCHAR SkipTick;                           // offset: 0x2230 ordinal: 0x63
  UCHAR DebuggerSavedIRQL;                  // offset: 0x2231 ordinal: 0x64
  UCHAR PollSlot;                           // offset: 0x2232 ordinal: 0x65
  UCHAR PrcbPad8[13];                       // offset: 0x2233 ordinal: 0x66
  struct _KNODE *ParentNode;                // offset: 0x2240 ordinal: 0x67
  ULONGLONG MultiThreadProcessorSet;        // offset: 0x2248 ordinal: 0x68
  struct _KPRCB *MultiThreadSetMaster;      // offset: 0x2250 ordinal: 0x69
  LONG Sleeping;                            // offset: 0x2258 ordinal: 0x6a
  ULONG PrcbPad90[1];                       // offset: 0x225c ordinal: 0x6b
  ULONG DebugDpcTime;                       // offset: 0x2260 ordinal: 0x6c
  ULONG PageColor;                          // offset: 0x2264 ordinal: 0x6d
  ULONG NodeColor;                          // offset: 0x2268 ordinal: 0x6e
  ULONG NodeShiftedColor;                   // offset: 0x226c ordinal: 0x6f
  ULONG SecondaryColorMask;                 // offset: 0x2270 ordinal: 0x70
  UCHAR PrcbPad9[12];                       // offset: 0x2274 ordinal: 0x71
  ULONG CcFastReadNoWait;                   // offset: 0x2280 ordinal: 0x72
  ULONG CcFastReadWait;                     // offset: 0x2284 ordinal: 0x73
  ULONG CcFastReadNotPossible;              // offset: 0x2288 ordinal: 0x74
  ULONG CcCopyReadNoWait;                   // offset: 0x228c ordinal: 0x75
  ULONG CcCopyReadWait;                     // offset: 0x2290 ordinal: 0x76
  ULONG CcCopyReadNoWaitMiss;               // offset: 0x2294 ordinal: 0x77
  ULONG KeAlignmentFixupCount;              // offset: 0x2298 ordinal: 0x78
  ULONG KeDcacheFlushCount;                 // offset: 0x229c ordinal: 0x79
  ULONG KeExceptionDispatchCount;           // offset: 0x22a0 ordinal: 0x7a
  ULONG KeFirstLevelTbFills;                // offset: 0x22a4 ordinal: 0x7b
  ULONG KeFloatingEmulationCount;           // offset: 0x22a8 ordinal: 0x7c
  ULONG KeIcacheFlushCount;                 // offset: 0x22ac ordinal: 0x7d
  ULONG KeSecondLevelTbFills;               // offset: 0x22b0 ordinal: 0x7e
  UCHAR VendorString[13];                   // offset: 0x22b4 ordinal: 0x7f
  UCHAR PrcbPad10[2];                       // offset: 0x22c1 ordinal: 0x80
  ULONG FeatureBits;                        // offset: 0x22c4 ordinal: 0x81
  union _LARGE_INTEGER UpdateSignature;     // offset: 0x22c8 ordinal: 0x82
  struct _PROCESSOR_POWER_STATE PowerState; // offset: 0x22d0 ordinal: 0x83
  struct _CACHE_DESCRIPTOR Cache[5];        // offset: 0x2440 ordinal: 0x84
  ULONG CacheCount;                         // offset: 0x247c ordinal: 0x85
} _KPRCB;

// 0x2600 bytes (sizeof)
typedef struct _KPCR {
  union {
    struct _NT_TIB NtTib;        // offset: 0x0 ordinal: 0x0
    union _KGDTENTRY64 *GdtBase; // offset: 0x0 ordinal: 0x1
  };
  struct _KTSS64 *TssBase;             // offset: 0x8 ordinal: 0x2
  VOID *PerfGlobalGroupMask;           // offset: 0x10 ordinal: 0x3
  struct _KPCR *Self;                  // offset: 0x18 ordinal: 0x4
  struct _KPRCB *CurrentPrcb;          // offset: 0x20 ordinal: 0x5
  struct _KSPIN_LOCK_QUEUE *LockArray; // offset: 0x28 ordinal: 0x6
  VOID *Used_Self;                     // offset: 0x30 ordinal: 0x7
  union _KIDTENTRY64 *IdtBase;         // offset: 0x38 ordinal: 0x8
  ULONGLONG Unused[2];                 // offset: 0x40 ordinal: 0x9
  UCHAR Irql;                          // offset: 0x50 ordinal: 0xa
  UCHAR SecondLevelCacheAssociativity; // offset: 0x51 ordinal: 0xb
  UCHAR ObsoleteNumber;                // offset: 0x52 ordinal: 0xc
  UCHAR Fill0;                         // offset: 0x53 ordinal: 0xd
  ULONG Unused0[3];                    // offset: 0x54 ordinal: 0xe
  USHORT MajorVersion;                 // offset: 0x60 ordinal: 0xf
  USHORT MinorVersion;                 // offset: 0x62 ordinal: 0x10
  ULONG StallScaleFactor;              // offset: 0x64 ordinal: 0x11
  VOID *Unused1[3];                    // offset: 0x68 ordinal: 0x12
  ULONG KernelReserved[15];            // offset: 0x80 ordinal: 0x13
  ULONG SecondLevelCacheSize;          // offset: 0xbc ordinal: 0x14
  ULONG HalReserved[16];               // offset: 0xc0 ordinal: 0x15
  ULONG Unused2;                       // offset: 0x100 ordinal: 0x16
  VOID *KdVersionBlock;                // offset: 0x108 ordinal: 0x17
  VOID *Unused3;                       // offset: 0x110 ordinal: 0x18
  ULONG PcrAlign1[24];                 // offset: 0x118 ordinal: 0x19
  struct _KPRCB Prcb;                  // offset: 0x180 ordinal: 0x1a
} _KPCR;

// 0x10 bytes (sizeof)
typedef struct LIST_ENTRY64 {
  ULONGLONG Flink; // offset: 0x0 ordinal: 0x0
  ULONGLONG Blink; // offset: 0x8 ordinal: 0x1
} LIST_ENTRY64;

// 0x17d8 bytes (sizeof)
typedef struct _TEB64 {
  struct _NT_TIB64 NtTib;                  // offset: 0x0 ordinal: 0x0
  ULONGLONG EnvironmentPointer;            // offset: 0x38 ordinal: 0x1
  struct _CLIENT_ID64 ClientId;            // offset: 0x40 ordinal: 0x2
  ULONGLONG ActiveRpcHandle;               // offset: 0x50 ordinal: 0x3
  ULONGLONG ThreadLocalStoragePointer;     // offset: 0x58 ordinal: 0x4
  ULONGLONG ProcessEnvironmentBlock;       // offset: 0x60 ordinal: 0x5
  ULONG LastErrorValue;                    // offset: 0x68 ordinal: 0x6
  ULONG CountOfOwnedCriticalSections;      // offset: 0x6c ordinal: 0x7
  ULONGLONG CsrClientThread;               // offset: 0x70 ordinal: 0x8
  ULONGLONG Win32ThreadInfo;               // offset: 0x78 ordinal: 0x9
  ULONG User32Reserved[26];                // offset: 0x80 ordinal: 0xa
  ULONG UserReserved[5];                   // offset: 0xe8 ordinal: 0xb
  ULONGLONG WOW32Reserved;                 // offset: 0x100 ordinal: 0xc
  ULONG CurrentLocale;                     // offset: 0x108 ordinal: 0xd
  ULONG FpSoftwareStatusRegister;          // offset: 0x10c ordinal: 0xe
  ULONGLONG SystemReserved1[54];           // offset: 0x110 ordinal: 0xf
  LONG ExceptionCode;                      // offset: 0x2c0 ordinal: 0x10
  ULONGLONG ActivationContextStackPointer; // offset: 0x2c8 ordinal: 0x11
  UCHAR SpareBytes1[28];                   // offset: 0x2d0 ordinal: 0x12
  struct _GDI_TEB_BATCH64 GdiTebBatch;     // offset: 0x2f0 ordinal: 0x13
  struct _CLIENT_ID64 RealClientId;        // offset: 0x7d8 ordinal: 0x14
  ULONGLONG GdiCachedProcessHandle;        // offset: 0x7e8 ordinal: 0x15
  ULONG GdiClientPID;                      // offset: 0x7f0 ordinal: 0x16
  ULONG GdiClientTID;                      // offset: 0x7f4 ordinal: 0x17
  ULONGLONG GdiThreadLocalInfo;            // offset: 0x7f8 ordinal: 0x18
  ULONGLONG Win32ClientInfo[62];           // offset: 0x800 ordinal: 0x19
  ULONGLONG glDispatchTable[233];          // offset: 0x9f0 ordinal: 0x1a
  ULONGLONG glReserved1[29];               // offset: 0x1138 ordinal: 0x1b
  ULONGLONG glReserved2;                   // offset: 0x1220 ordinal: 0x1c
  ULONGLONG glSectionInfo;                 // offset: 0x1228 ordinal: 0x1d
  ULONGLONG glSection;                     // offset: 0x1230 ordinal: 0x1e
  ULONGLONG glTable;                       // offset: 0x1238 ordinal: 0x1f
  ULONGLONG glCurrentRC;                   // offset: 0x1240 ordinal: 0x20
  ULONGLONG glContext;                     // offset: 0x1248 ordinal: 0x21
  ULONG LastStatusValue;                   // offset: 0x1250 ordinal: 0x22
  struct _STRING64 StaticUnicodeString;    // offset: 0x1258 ordinal: 0x23
  USHORT StaticUnicodeBuffer[261];         // offset: 0x1268 ordinal: 0x24
  ULONGLONG DeallocationStack;             // offset: 0x1478 ordinal: 0x25
  ULONGLONG TlsSlots[64];                  // offset: 0x1480 ordinal: 0x26
  struct LIST_ENTRY64 TlsLinks;            // offset: 0x1680 ordinal: 0x27
  ULONGLONG Vdm;                           // offset: 0x1690 ordinal: 0x28
  ULONGLONG ReservedForNtRpc;              // offset: 0x1698 ordinal: 0x29
  ULONGLONG DbgSsReserved[2];              // offset: 0x16a0 ordinal: 0x2a
  ULONG HardErrorMode;                     // offset: 0x16b0 ordinal: 0x2b
  ULONGLONG Instrumentation[14];           // offset: 0x16b8 ordinal: 0x2c
  ULONGLONG SubProcessTag;                 // offset: 0x1728 ordinal: 0x2d
  ULONGLONG EtwTraceData;                  // offset: 0x1730 ordinal: 0x2e
  ULONGLONG WinSockData;                   // offset: 0x1738 ordinal: 0x2f
  ULONG GdiBatchCount;                     // offset: 0x1740 ordinal: 0x30
  UCHAR InDbgPrint;                        // offset: 0x1744 ordinal: 0x31
  UCHAR FreeStackOnTermination;            // offset: 0x1745 ordinal: 0x32
  UCHAR HasFiberData;                      // offset: 0x1746 ordinal: 0x33
  UCHAR IdealProcessor;                    // offset: 0x1747 ordinal: 0x34
  ULONG GuaranteedStackBytes;              // offset: 0x1748 ordinal: 0x35
  ULONGLONG ReservedForPerf;               // offset: 0x1750 ordinal: 0x36
  ULONGLONG ReservedForOle;                // offset: 0x1758 ordinal: 0x37
  ULONG WaitingOnLoaderLock;               // offset: 0x1760 ordinal: 0x38
  ULONGLONG SparePointer1;                 // offset: 0x1768 ordinal: 0x39
  ULONGLONG SoftPatchPtr1;                 // offset: 0x1770 ordinal: 0x3a
  ULONGLONG SoftPatchPtr2;                 // offset: 0x1778 ordinal: 0x3b
  ULONGLONG TlsExpansionSlots;             // offset: 0x1780 ordinal: 0x3c
  ULONGLONG DeallocationBStore;            // offset: 0x1788 ordinal: 0x3d
  ULONGLONG BStoreLimit;                   // offset: 0x1790 ordinal: 0x3e
  ULONG ImpersonationLocale;               // offset: 0x1798 ordinal: 0x3f
  ULONG IsImpersonating;                   // offset: 0x179c ordinal: 0x40
  ULONGLONG NlsCache;                      // offset: 0x17a0 ordinal: 0x41
  ULONGLONG pShimData;                     // offset: 0x17a8 ordinal: 0x42
  ULONG HeapVirtualAffinity;               // offset: 0x17b0 ordinal: 0x43
  ULONGLONG CurrentTransactionHandle;      // offset: 0x17b8 ordinal: 0x44
  ULONGLONG ActiveFrame;                   // offset: 0x17c0 ordinal: 0x45
  ULONGLONG FlsData;                       // offset: 0x17c8 ordinal: 0x46
  UCHAR SafeThunkCall;                     // offset: 0x17d0 ordinal: 0x47
  UCHAR BooleanSpare[3];                   // offset: 0x17d1 ordinal: 0x48
} _TEB64;

// 0x358 bytes (sizeof)
typedef struct _PEB64 {
  UCHAR InheritedAddressSpace;    // offset: 0x0 ordinal: 0x0
  UCHAR ReadImageFileExecOptions; // offset: 0x1 ordinal: 0x1
  UCHAR BeingDebugged;            // offset: 0x2 ordinal: 0x2
  union {
    UCHAR BitField;                // offset: 0x3 ordinal: 0x3
    UCHAR ImageUsesLargePages : 1; // offset: 0x3 ordinal: 0x4
  };
  UCHAR SpareBits : 7;                          // offset: 0x3 ordinal: 0x5
  ULONGLONG Mutant;                             // offset: 0x8 ordinal: 0x6
  ULONGLONG ImageBaseAddress;                   // offset: 0x10 ordinal: 0x7
  ULONGLONG Ldr;                                // offset: 0x18 ordinal: 0x8
  ULONGLONG ProcessParameters;                  // offset: 0x20 ordinal: 0x9
  ULONGLONG SubSystemData;                      // offset: 0x28 ordinal: 0xa
  ULONGLONG ProcessHeap;                        // offset: 0x30 ordinal: 0xb
  ULONGLONG FastPebLock;                        // offset: 0x38 ordinal: 0xc
  ULONGLONG AtlThunkSListPtr;                   // offset: 0x40 ordinal: 0xd
  ULONGLONG SparePtr2;                          // offset: 0x48 ordinal: 0xe
  ULONG EnvironmentUpdateCount;                 // offset: 0x50 ordinal: 0xf
  ULONGLONG KernelCallbackTable;                // offset: 0x58 ordinal: 0x10
  ULONG SystemReserved[1];                      // offset: 0x60 ordinal: 0x11
  ULONG SpareUlong;                             // offset: 0x64 ordinal: 0x12
  ULONGLONG FreeList;                           // offset: 0x68 ordinal: 0x13
  ULONG TlsExpansionCounter;                    // offset: 0x70 ordinal: 0x14
  ULONGLONG TlsBitmap;                          // offset: 0x78 ordinal: 0x15
  ULONG TlsBitmapBits[2];                       // offset: 0x80 ordinal: 0x16
  ULONGLONG ReadOnlySharedMemoryBase;           // offset: 0x88 ordinal: 0x17
  ULONGLONG ReadOnlySharedMemoryHeap;           // offset: 0x90 ordinal: 0x18
  ULONGLONG ReadOnlyStaticServerData;           // offset: 0x98 ordinal: 0x19
  ULONGLONG AnsiCodePageData;                   // offset: 0xa0 ordinal: 0x1a
  ULONGLONG OemCodePageData;                    // offset: 0xa8 ordinal: 0x1b
  ULONGLONG UnicodeCaseTableData;               // offset: 0xb0 ordinal: 0x1c
  ULONG NumberOfProcessors;                     // offset: 0xb8 ordinal: 0x1d
  ULONG NtGlobalFlag;                           // offset: 0xbc ordinal: 0x1e
  union _LARGE_INTEGER CriticalSectionTimeout;  // offset: 0xc0 ordinal: 0x1f
  ULONGLONG HeapSegmentReserve;                 // offset: 0xc8 ordinal: 0x20
  ULONGLONG HeapSegmentCommit;                  // offset: 0xd0 ordinal: 0x21
  ULONGLONG HeapDeCommitTotalFreeThreshold;     // offset: 0xd8 ordinal: 0x22
  ULONGLONG HeapDeCommitFreeBlockThreshold;     // offset: 0xe0 ordinal: 0x23
  ULONG NumberOfHeaps;                          // offset: 0xe8 ordinal: 0x24
  ULONG MaximumNumberOfHeaps;                   // offset: 0xec ordinal: 0x25
  ULONGLONG ProcessHeaps;                       // offset: 0xf0 ordinal: 0x26
  ULONGLONG GdiSharedHandleTable;               // offset: 0xf8 ordinal: 0x27
  ULONGLONG ProcessStarterHelper;               // offset: 0x100 ordinal: 0x28
  ULONG GdiDCAttributeList;                     // offset: 0x108 ordinal: 0x29
  ULONGLONG LoaderLock;                         // offset: 0x110 ordinal: 0x2a
  ULONG OSMajorVersion;                         // offset: 0x118 ordinal: 0x2b
  ULONG OSMinorVersion;                         // offset: 0x11c ordinal: 0x2c
  USHORT OSBuildNumber;                         // offset: 0x120 ordinal: 0x2d
  USHORT OSCSDVersion;                          // offset: 0x122 ordinal: 0x2e
  ULONG OSPlatformId;                           // offset: 0x124 ordinal: 0x2f
  ULONG ImageSubsystem;                         // offset: 0x128 ordinal: 0x30
  ULONG ImageSubsystemMajorVersion;             // offset: 0x12c ordinal: 0x31
  ULONG ImageSubsystemMinorVersion;             // offset: 0x130 ordinal: 0x32
  ULONGLONG ImageProcessAffinityMask;           // offset: 0x138 ordinal: 0x33
  ULONG GdiHandleBuffer[60];                    // offset: 0x140 ordinal: 0x34
  ULONGLONG PostProcessInitRoutine;             // offset: 0x230 ordinal: 0x35
  ULONGLONG TlsExpansionBitmap;                 // offset: 0x238 ordinal: 0x36
  ULONG TlsExpansionBitmapBits[32];             // offset: 0x240 ordinal: 0x37
  ULONG SessionId;                              // offset: 0x2c0 ordinal: 0x38
  union _ULARGE_INTEGER AppCompatFlags;         // offset: 0x2c8 ordinal: 0x39
  union _ULARGE_INTEGER AppCompatFlagsUser;     // offset: 0x2d0 ordinal: 0x3a
  ULONGLONG pShimData;                          // offset: 0x2d8 ordinal: 0x3b
  ULONGLONG AppCompatInfo;                      // offset: 0x2e0 ordinal: 0x3c
  struct _STRING64 CSDVersion;                  // offset: 0x2e8 ordinal: 0x3d
  ULONGLONG ActivationContextData;              // offset: 0x2f8 ordinal: 0x3e
  ULONGLONG ProcessAssemblyStorageMap;          // offset: 0x300 ordinal: 0x3f
  ULONGLONG SystemDefaultActivationContextData; // offset: 0x308 ordinal: 0x40
  ULONGLONG SystemAssemblyStorageMap;           // offset: 0x310 ordinal: 0x41
  ULONGLONG MinimumStackCommit;                 // offset: 0x318 ordinal: 0x42
  ULONGLONG FlsCallback;                        // offset: 0x320 ordinal: 0x43
  struct LIST_ENTRY64 FlsListHead;              // offset: 0x328 ordinal: 0x44
  ULONGLONG FlsBitmap;                          // offset: 0x338 ordinal: 0x45
  ULONG FlsBitmapBits[4];                       // offset: 0x340 ordinal: 0x46
  ULONG FlsHighIndex;                           // offset: 0x350 ordinal: 0x47
} _PEB64;
