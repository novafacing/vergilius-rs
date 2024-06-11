#include <stdint.h>

// 0x0 (0) bytes
struct _ADAPTER_OBJECT {};

// 0x0 (0) bytes
struct _ACTIVATION_CONTEXT_DATA {};

// 0x4 (4) bytes
union __unnamed {
  struct _DEVICE_NODE *NextResourceDeviceNode; // offset: 0x0 (0)
};

typedef int8_t CHAR;

// 0x0 (0) bytes
struct _ACTIVATION_CONTEXT {};

typedef int64_t LONGLONG;

typedef uint32_t ULONG;

// 0x4 (4) bytes
struct _MMSUBSECTION_FLAGS {
  ULONG ReadOnly : 1;            // offset: 0x0 (0)
  ULONG ReadWrite : 1;           // offset: 0x0 (0)
  ULONG SubsectionStatic : 1;    // offset: 0x0 (0)
  ULONG GlobalMemory : 1;        // offset: 0x0 (0)
  ULONG Protection : 5;          // offset: 0x0 (0)
  ULONG Spare : 1;               // offset: 0x0 (0)
  ULONG StartingSector4132 : 10; // offset: 0x0 (0)
  ULONG SectorEndOffset : 12;    // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MMSECTION_FLAGS {
  ULONG BeingDeleted : 1;             // offset: 0x0 (0)
  ULONG BeingCreated : 1;             // offset: 0x0 (0)
  ULONG BeingPurged : 1;              // offset: 0x0 (0)
  ULONG NoModifiedWriting : 1;        // offset: 0x0 (0)
  ULONG FailAllIo : 1;                // offset: 0x0 (0)
  ULONG Image : 1;                    // offset: 0x0 (0)
  ULONG Based : 1;                    // offset: 0x0 (0)
  ULONG File : 1;                     // offset: 0x0 (0)
  ULONG Networked : 1;                // offset: 0x0 (0)
  ULONG NoCache : 1;                  // offset: 0x0 (0)
  ULONG PhysicalMemory : 1;           // offset: 0x0 (0)
  ULONG CopyOnWrite : 1;              // offset: 0x0 (0)
  ULONG Reserve : 1;                  // offset: 0x0 (0)
  ULONG Commit : 1;                   // offset: 0x0 (0)
  ULONG FloppyMedia : 1;              // offset: 0x0 (0)
  ULONG WasPurged : 1;                // offset: 0x0 (0)
  ULONG UserReference : 1;            // offset: 0x0 (0)
  ULONG GlobalMemory : 1;             // offset: 0x0 (0)
  ULONG DeleteOnClose : 1;            // offset: 0x0 (0)
  ULONG FilePointerNull : 1;          // offset: 0x0 (0)
  ULONG DebugSymbolsLoaded : 1;       // offset: 0x0 (0)
  ULONG SetMappedFileIoComplete : 1;  // offset: 0x0 (0)
  ULONG CollidedFlush : 1;            // offset: 0x0 (0)
  ULONG NoChange : 1;                 // offset: 0x0 (0)
  ULONG filler0 : 1;                  // offset: 0x0 (0)
  ULONG ImageMappedInSystemSpace : 1; // offset: 0x0 (0)
  ULONG UserWritable : 1;             // offset: 0x0 (0)
  ULONG Accessed : 1;                 // offset: 0x0 (0)
  ULONG GlobalOnlyPerSession : 1;     // offset: 0x0 (0)
  ULONG Rom : 1;                      // offset: 0x0 (0)
  ULONG WriteCombined : 1;            // offset: 0x0 (0)
  ULONG filler : 1;                   // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MMVAD_FLAGS2 {
  ULONG FileOffset : 24;     // offset: 0x0 (0)
  ULONG SecNoChange : 1;     // offset: 0x0 (0)
  ULONG OneSecured : 1;      // offset: 0x0 (0)
  ULONG MultipleSecured : 1; // offset: 0x0 (0)
  ULONG ReadOnly : 1;        // offset: 0x0 (0)
  ULONG LongVad : 1;         // offset: 0x0 (0)
  ULONG ExtendableFile : 1;  // offset: 0x0 (0)
  ULONG Inherit : 1;         // offset: 0x0 (0)
  ULONG CopyOnWrite : 1;     // offset: 0x0 (0)
};

// 0x0 (0) bytes
struct _SCSI_REQUEST_BLOCK {};

// 0x0 (0) bytes
struct _ASSEMBLY_STORAGE_MAP {};

typedef int32_t LONG;

// 0x4 (4) bytes
enum _MMSYSTEM_PTE_POOL_TYPE {

  SystemPteSpace = 0,
  NonPagedPoolExpansion = 1,
  MaximumPtePoolTypes = 2
};

// 0x4 (4) bytes
enum _REG_NOTIFY_CLASS {

  RegNtDeleteKey = 0,
  RegNtPreDeleteKey = 0,
  RegNtSetValueKey = 1,
  RegNtPreSetValueKey = 1,
  RegNtDeleteValueKey = 2,
  RegNtPreDeleteValueKey = 2,
  RegNtSetInformationKey = 3,
  RegNtPreSetInformationKey = 3,
  RegNtRenameKey = 4,
  RegNtPreRenameKey = 4,
  RegNtEnumerateKey = 5,
  RegNtPreEnumerateKey = 5,
  RegNtEnumerateValueKey = 6,
  RegNtPreEnumerateValueKey = 6,
  RegNtQueryKey = 7,
  RegNtPreQueryKey = 7,
  RegNtQueryValueKey = 8,
  RegNtPreQueryValueKey = 8,
  RegNtQueryMultipleValueKey = 9,
  RegNtPreQueryMultipleValueKey = 9,
  RegNtPreCreateKey = 10,
  RegNtPostCreateKey = 11,
  RegNtPreOpenKey = 12,
  RegNtPostOpenKey = 13,
  RegNtKeyHandleClose = 14,
  RegNtPreKeyHandleClose = 14,
  RegNtPostDeleteKey = 15,
  RegNtPostSetValueKey = 16,
  RegNtPostDeleteValueKey = 17,
  RegNtPostSetInformationKey = 18,
  RegNtPostRenameKey = 19,
  RegNtPostEnumerateKey = 20,
  RegNtPostEnumerateValueKey = 21,
  RegNtPostQueryKey = 22,
  RegNtPostQueryValueKey = 23,
  RegNtPostQueryMultipleValueKey = 24,
  RegNtPostKeyHandleClose = 25,
  RegNtPreCreateKeyEx = 26,
  RegNtPostCreateKeyEx = 27,
  RegNtPreOpenKeyEx = 28,
  RegNtPostOpenKeyEx = 29
};

// 0x4 (4) bytes
enum _WOW64_SHARED_INFORMATION {

  SharedNtdll32LdrInitializeThunk = 0,
  SharedNtdll32KiUserExceptionDispatcher = 1,
  SharedNtdll32KiUserApcDispatcher = 2,
  SharedNtdll32KiUserCallbackDispatcher = 3,
  SharedNtdll32LdrHotPatchRoutine = 4,
  SharedNtdll32ExpInterlockedPopEntrySListFault = 5,
  SharedNtdll32ExpInterlockedPopEntrySListResume = 6,
  SharedNtdll32ExpInterlockedPopEntrySListEnd = 7,
  SharedNtdll32Reserved2 = 8,
  Wow64SharedPageEntriesCount = 9
};

// 0x4 (4) bytes
enum _KTHREAD_STATE {

  Initialized = 0,
  Ready = 1,
  Running = 2,
  Standby = 3,
  Terminated = 4,
  Waiting = 5,
  Transition = 6,
  DeferredReady = 7,
  GateWait = 8
};

// 0x4 (4) bytes
enum _PS_QUOTA_TYPE {

  PsNonPagedPool = 0,
  PsPagedPool = 1,
  PsPageFile = 2,
  PsQuotaTypes = 3
};

// 0x4 (4) bytes
enum _MEMORY_TYPE {

  MemoryExceptionBlock = 0,
  MemorySystemBlock = 1,
  MemoryFree = 2,
  MemoryBad = 3,
  MemoryLoadedProgram = 4,
  MemoryFirmwareTemporary = 5,
  MemoryFirmwarePermanent = 6,
  MemoryFreeContiguous = 7,
  MemorySpecialMemory = 8,
  MemoryMaximum = 9
};

// 0x4 (4) bytes
enum ReplacesCorHdrNumericDefines {

  COMIMAGE_FLAGS_ILONLY = 1,
  COMIMAGE_FLAGS_32BITREQUIRED = 2,
  COMIMAGE_FLAGS_IL_LIBRARY = 4,
  COMIMAGE_FLAGS_STRONGNAMESIGNED = 8,
  COMIMAGE_FLAGS_TRACKDEBUGDATA = 65536,
  COR_VERSION_MAJOR_V2 = 2,
  COR_VERSION_MAJOR = 2,
  COR_VERSION_MINOR = 0,
  COR_DELETED_NAME_LENGTH = 8,
  COR_VTABLEGAP_NAME_LENGTH = 8,
  NATIVE_TYPE_MAX_CB = 1,
  COR_ILMETHOD_SECT_SMALL_MAX_DATASIZE = 255,
  IMAGE_COR_MIH_METHODRVA = 1,
  IMAGE_COR_MIH_EHRVA = 2,
  IMAGE_COR_MIH_BASICBLOCK = 8,
  COR_VTABLE_32BIT = 1,
  COR_VTABLE_64BIT = 2,
  COR_VTABLE_FROM_UNMANAGED = 4,
  COR_VTABLE_CALL_MOST_DERIVED = 16,
  IMAGE_COR_EATJ_THUNK_SIZE = 32,
  MAX_CLASS_NAME = 1024,
  MAX_PACKAGE_NAME = 1024
};

// 0x4 (4) bytes
enum _POLICY_AUDIT_EVENT_TYPE {

  AuditCategorySystem = 0,
  AuditCategoryLogon = 1,
  AuditCategoryObjectAccess = 2,
  AuditCategoryPrivilegeUse = 3,
  AuditCategoryDetailedTracking = 4,
  AuditCategoryPolicyChange = 5,
  AuditCategoryAccountManagement = 6,
  AuditCategoryDirectoryServiceAccess = 7,
  AuditCategoryAccountLogon = 8
};

// 0x4 (4) bytes
enum _KOBJECTS {

  EventNotificationObject = 0,
  EventSynchronizationObject = 1,
  MutantObject = 2,
  ProcessObject = 3,
  QueueObject = 4,
  SemaphoreObject = 5,
  ThreadObject = 6,
  GateObject = 7,
  TimerNotificationObject = 8,
  TimerSynchronizationObject = 9,
  Spare2Object = 10,
  Spare3Object = 11,
  Spare4Object = 12,
  Spare5Object = 13,
  Spare6Object = 14,
  Spare7Object = 15,
  Spare8Object = 16,
  Spare9Object = 17,
  ApcObject = 18,
  DpcObject = 19,
  DeviceQueueObject = 20,
  EventPairObject = 21,
  InterruptObject = 22,
  ProfileObject = 23,
  ThreadedDpcObject = 24,
  MaximumKernelObject = 25
};

// 0x4 (4) bytes
enum _MODE {

  KernelMode = 0,
  UserMode = 1,
  MaximumMode = 2
};

// 0x4 (4) bytes
enum _MEMORY_CACHING_TYPE_ORIG {

  MmFrameBufferCached = 2
};

// 0x4 (4) bytes
enum LSA_FOREST_TRUST_RECORD_TYPE {

  ForestTrustTopLevelName = 0,
  ForestTrustTopLevelNameEx = 1,
  ForestTrustDomainInfo = 2,
  ForestTrustRecordTypeLast = 2
};

// 0x4 (4) bytes
enum _WAIT_TYPE {

  WaitAll = 0,
  WaitAny = 1
};

// 0x4 (4) bytes
enum _PF_SCENARIO_TYPE {

  PfApplicationLaunchScenarioType = 0,
  PfSystemBootScenarioType = 1,
  PfMaxScenarioType = 2
};

// 0x4 (4) bytes
enum _MI_PFN_CACHE_ATTRIBUTE {

  MiNonCached = 0,
  MiCached = 1,
  MiWriteCombined = 2,
  MiNotMapped = 3
};

// 0x4 (4) bytes
enum _MEMORY_CACHING_TYPE {

  MmNonCached = 0,
  MmCached = 1,
  MmWriteCombined = 2,
  MmHardwareCoherentCached = 3,
  MmNonCachedUnordered = 4,
  MmUSWCCached = 5,
  MmMaximumCacheType = 6
};

// 0x4 (4) bytes
enum _PP_NPAGED_LOOKASIDE_NUMBER {

  LookasideSmallIrpList = 0,
  LookasideLargeIrpList = 1,
  LookasideMdlList = 2,
  LookasideCreateInfoList = 3,
  LookasideNameBufferList = 4,
  LookasideTwilightList = 5,
  LookasideCompletionList = 6,
  LookasideMaximumList = 7
};

// 0x4 (4) bytes
enum _KSPIN_LOCK_QUEUE_NUMBER {

  LockQueueDispatcherLock = 0,
  LockQueueUnusedSpare1 = 1,
  LockQueuePfnLock = 2,
  LockQueueSystemSpaceLock = 3,
  LockQueueVacbLock = 4,
  LockQueueMasterLock = 5,
  LockQueueNonPagedPoolLock = 6,
  LockQueueIoCancelLock = 7,
  LockQueueWorkQueueLock = 8,
  LockQueueIoVpbLock = 9,
  LockQueueIoDatabaseLock = 10,
  LockQueueIoCompletionLock = 11,
  LockQueueNtfsStructLock = 12,
  LockQueueAfdWorkQueueLock = 13,
  LockQueueBcbLock = 14,
  LockQueueMmNonPagedPoolLock = 15,
  LockQueueUnusedSpare16 = 16,
  LockQueueTimerTableLock = 17,
  LockQueueMaximumLock = 33
};

// 0x4 (4) bytes
enum _KDPC_IMPORTANCE {

  LowImportance = 0,
  MediumImportance = 1,
  HighImportance = 2
};

// 0x4 (4) bytes
enum _PLUGPLAY_EVENT_CATEGORY {

  HardwareProfileChangeEvent = 0,
  TargetDeviceChangeEvent = 1,
  DeviceClassChangeEvent = 2,
  CustomDeviceEvent = 3,
  DeviceInstallEvent = 4,
  DeviceArrivalEvent = 5,
  PowerEvent = 6,
  VetoEvent = 7,
  BlockedDriverEvent = 8,
  InvalidIDEvent = 9,
  MaxPlugEventCategory = 10
};

// 0x4 (4) bytes
enum _PNP_VETO_TYPE {

  PNP_VetoTypeUnknown = 0,
  PNP_VetoLegacyDevice = 1,
  PNP_VetoPendingClose = 2,
  PNP_VetoWindowsApp = 3,
  PNP_VetoWindowsService = 4,
  PNP_VetoOutstandingOpen = 5,
  PNP_VetoDevice = 6,
  PNP_VetoDriver = 7,
  PNP_VetoIllegalDeviceRequest = 8,
  PNP_VetoInsufficientPower = 9,
  PNP_VetoNonDisableable = 10,
  PNP_VetoLegacyDriver = 11,
  PNP_VetoInsufficientRights = 12
};

// 0x4 (4) bytes
enum _ARBITER_RESULT {

  ArbiterResultUndefined = -1,
  ArbiterResultSuccess = 0,
  ArbiterResultExternalConflict = 1,
  ArbiterResultNullRequest = 2
};

// 0x4 (4) bytes
enum _ARBITER_REQUEST_SOURCE {

  ArbiterRequestUndefined = -1,
  ArbiterRequestLegacyReported = 0,
  ArbiterRequestHalReported = 1,
  ArbiterRequestLegacyAssigned = 2,
  ArbiterRequestPnpDetected = 3,
  ArbiterRequestPnpEnumerated = 4
};

// 0x4 (4) bytes
enum _KINTERRUPT_MODE {

  LevelSensitive = 0,
  Latched = 1
};

// 0x4 (4) bytes
enum _MMLISTS {

  ZeroedPageList = 0,
  FreePageList = 1,
  StandbyPageList = 2,
  ModifiedPageList = 3,
  ModifiedNoWritePageList = 4,
  BadPageList = 5,
  ActiveAndValid = 6,
  TransitionPage = 7
};

// 0x4 (4) bytes
enum _ARBITER_ACTION {

  ArbiterActionTestAllocation = 0,
  ArbiterActionRetestAllocation = 1,
  ArbiterActionCommitAllocation = 2,
  ArbiterActionRollbackAllocation = 3,
  ArbiterActionQueryAllocatedResources = 4,
  ArbiterActionWriteReservedResources = 5,
  ArbiterActionQueryConflict = 6,
  ArbiterActionQueryArbitrate = 7,
  ArbiterActionAddReserved = 8,
  ArbiterActionBootAllocation = 9
};

// 0x4 (4) bytes
enum _BUS_DATA_TYPE {

  ConfigurationSpaceUndefined = -1,
  Cmos = 0,
  EisaConfiguration = 1,
  Pos = 2,
  CbusConfiguration = 3,
  PCIConfiguration = 4,
  VMEConfiguration = 5,
  NuBusConfiguration = 6,
  PCMCIAConfiguration = 7,
  MPIConfiguration = 8,
  MPSAConfiguration = 9,
  PNPISAConfiguration = 10,
  SgiInternalConfiguration = 11,
  MaximumBusDataType = 12
};

// 0x4 (4) bytes
enum _PCI_DISPATCH_STYLE {

  IRP_COMPLETE = 0,
  IRP_DOWNWARD = 1,
  IRP_UPWARD = 2,
  IRP_DISPATCH = 3
};

// 0x4 (4) bytes
enum PCI_SIGNATURE {

  PciPdoExtensionType = 1768116272,
  PciFdoExtensionType = 1768116273,
  PciArb_Io = 1768116274,
  PciArb_Memory = 1768116275,
  PciArb_Interrupt = 1768116276,
  PciArb_BusNumber = 1768116277,
  PciTrans_Interrupt = 1768116278,
  PciInterface_BusHandler = 1768116279,
  PciInterface_IntRouteHandler = 1768116280,
  PciInterface_PciCb = 1768116281,
  PciInterface_LegacyDeviceDetection = 1768116282,
  PciInterface_PmeHandler = 1768116283,
  PciInterface_DevicePresent = 1768116284,
  PciInterface_NativeIde = 1768116285,
  PciInterface_Location = 1768116286,
  PciInterface_AgpTarget = 1768116287
};

// 0x4 (4) bytes
enum _ALTERNATIVE_ARCHITECTURE_TYPE {

  StandardDesign = 0,
  NEC98x86 = 1,
  EndAlternatives = 2
};

// 0x4 (4) bytes
enum _NT_PRODUCT_TYPE {

  NtProductWinNt = 1,
  NtProductLanManNt = 2,
  NtProductServer = 3
};

// 0x4 (4) bytes
enum POP_POLICY_DEVICE_TYPE {

  PolicyDeviceSystemButton = 0,
  PolicyDeviceThermalZone = 1,
  PolicyDeviceBattery = 2,
  PolicyInitiatePowerActionAPI = 3,
  PolicySetPowerStateAPI = 4,
  PolicyImmediateDozeS4 = 5,
  PolicySystemIdle = 6
};

// 0x4 (4) bytes
enum PROFILE_STATUS {

  DOCK_NOTDOCKDEVICE = 0,
  DOCK_QUIESCENT = 1,
  DOCK_ARRIVING = 2,
  DOCK_DEPARTING = 3,
  DOCK_EJECTIRP_COMPLETED = 4
};

// 0x4 (4) bytes
enum _PNP_DEVNODE_STATE {

  DeviceNodeUnspecified = 768,
  DeviceNodeUninitialized = 769,
  DeviceNodeInitialized = 770,
  DeviceNodeDriversAdded = 771,
  DeviceNodeResourcesAssigned = 772,
  DeviceNodeStartPending = 773,
  DeviceNodeStartCompletion = 774,
  DeviceNodeStartPostWork = 775,
  DeviceNodeStarted = 776,
  DeviceNodeQueryStopped = 777,
  DeviceNodeStopped = 778,
  DeviceNodeRestartCompletion = 779,
  DeviceNodeEnumeratePending = 780,
  DeviceNodeEnumerateCompletion = 781,
  DeviceNodeAwaitingQueuedDeletion = 782,
  DeviceNodeAwaitingQueuedRemoval = 783,
  DeviceNodeQueryRemoved = 784,
  DeviceNodeRemovePendingCloses = 785,
  DeviceNodeRemoved = 786,
  DeviceNodeDeletePendingCloses = 787,
  DeviceNodeDeleted = 788,
  MaxDeviceNodeState = 789
};

// 0x4 (4) bytes
enum _VI_DEADLOCK_RESOURCE_TYPE {

  VfDeadlockUnknown = 0,
  VfDeadlockMutex = 1,
  VfDeadlockMutexAbandoned = 2,
  VfDeadlockFastMutex = 3,
  VfDeadlockFastMutexUnsafe = 4,
  VfDeadlockSpinLock = 5,
  VfDeadlockQueuedSpinLock = 6,
  VfDeadlockTypeMaximum = 7
};

// 0x4 (4) bytes
enum _PROXY_CLASS {

  ProxyFull = 0,
  ProxyService = 1,
  ProxyTree = 2,
  ProxyDirectory = 3
};

// 0x4 (4) bytes
enum _TOKEN_TYPE {

  TokenPrimary = 1,
  TokenImpersonation = 2
};

// 0x4 (4) bytes
enum _SECURITY_OPERATION_CODE {

  SetSecurityDescriptor = 0,
  QuerySecurityDescriptor = 1,
  DeleteSecurityDescriptor = 2,
  AssignSecurityDescriptor = 3
};

// 0x4 (4) bytes
enum _OB_OPEN_REASON {

  ObCreateHandle = 0,
  ObOpenHandle = 1,
  ObDuplicateHandle = 2,
  ObInheritHandle = 3,
  ObMaxOpenReason = 4
};

// 0x4 (4) bytes
enum _FS_FILTER_SECTION_SYNC_TYPE {

  SyncTypeOther = 0,
  SyncTypeCreateSection = 1
};

// 0x4 (4) bytes
enum _INTERFACE_TYPE {

  InterfaceTypeUndefined = -1,
  Internal = 0,
  Isa = 1,
  Eisa = 2,
  MicroChannel = 3,
  TurboChannel = 4,
  PCIBus = 5,
  VMEBus = 6,
  NuBus = 7,
  PCMCIABus = 8,
  CBus = 9,
  MPIBus = 10,
  MPSABus = 11,
  ProcessorInternal = 12,
  InternalPowerBus = 13,
  PNPISABus = 14,
  PNPBus = 15,
  MaximumInterfaceType = 16
};

// 0x4 (4) bytes
enum POWER_ACTION {

  PowerActionNone = 0,
  PowerActionReserved = 1,
  PowerActionSleep = 2,
  PowerActionHibernate = 3,
  PowerActionShutdown = 4,
  PowerActionShutdownReset = 5,
  PowerActionShutdownOff = 6,
  PowerActionWarmEject = 7
};

// 0x4 (4) bytes
enum _POWER_STATE_TYPE {

  SystemPowerState = 0,
  DevicePowerState = 1
};

// 0x4 (4) bytes
enum _SYSTEM_POWER_STATE {

  PowerSystemUnspecified = 0,
  PowerSystemWorking = 1,
  PowerSystemSleeping1 = 2,
  PowerSystemSleeping2 = 3,
  PowerSystemSleeping3 = 4,
  PowerSystemHibernate = 5,
  PowerSystemShutdown = 6,
  PowerSystemMaximum = 7
};

// 0x4 (4) bytes
enum _DEVICE_USAGE_NOTIFICATION_TYPE {

  DeviceUsageTypeUndefined = 0,
  DeviceUsageTypePaging = 1,
  DeviceUsageTypeHibernation = 2,
  DeviceUsageTypeDumpFile = 3
};

// 0x4 (4) bytes
enum DEVICE_TEXT_TYPE {

  DeviceTextDescription = 0,
  DeviceTextLocationInformation = 1
};

// 0x4 (4) bytes
enum BUS_QUERY_ID_TYPE {

  BusQueryDeviceID = 0,
  BusQueryHardwareIDs = 1,
  BusQueryCompatibleIDs = 2,
  BusQueryInstanceID = 3,
  BusQueryDeviceSerialNumber = 4
};

// 0x4 (4) bytes
enum _DEVICE_RELATION_TYPE {

  BusRelations = 0,
  EjectionRelations = 1,
  PowerRelations = 2,
  RemovalRelations = 3,
  TargetDeviceRelation = 4,
  SingleBusRelations = 5
};

// 0x4 (4) bytes
enum _FSINFOCLASS {

  FileFsVolumeInformation = 1,
  FileFsLabelInformation = 2,
  FileFsSizeInformation = 3,
  FileFsDeviceInformation = 4,
  FileFsAttributeInformation = 5,
  FileFsControlInformation = 6,
  FileFsFullSizeInformation = 7,
  FileFsObjectIdInformation = 8,
  FileFsDriverPathInformation = 9,
  FileFsMaximumInformation = 10
};

// 0x4 (4) bytes
enum _FILE_INFORMATION_CLASS {

  FileDirectoryInformation = 1,
  FileFullDirectoryInformation = 2,
  FileBothDirectoryInformation = 3,
  FileBasicInformation = 4,
  FileStandardInformation = 5,
  FileInternalInformation = 6,
  FileEaInformation = 7,
  FileAccessInformation = 8,
  FileNameInformation = 9,
  FileRenameInformation = 10,
  FileLinkInformation = 11,
  FileNamesInformation = 12,
  FileDispositionInformation = 13,
  FilePositionInformation = 14,
  FileFullEaInformation = 15,
  FileModeInformation = 16,
  FileAlignmentInformation = 17,
  FileAllInformation = 18,
  FileAllocationInformation = 19,
  FileEndOfFileInformation = 20,
  FileAlternateNameInformation = 21,
  FileStreamInformation = 22,
  FilePipeInformation = 23,
  FilePipeLocalInformation = 24,
  FilePipeRemoteInformation = 25,
  FileMailslotQueryInformation = 26,
  FileMailslotSetInformation = 27,
  FileCompressionInformation = 28,
  FileObjectIdInformation = 29,
  FileCompletionInformation = 30,
  FileMoveClusterInformation = 31,
  FileQuotaInformation = 32,
  FileReparsePointInformation = 33,
  FileNetworkOpenInformation = 34,
  FileAttributeTagInformation = 35,
  FileTrackingInformation = 36,
  FileIdBothDirectoryInformation = 37,
  FileIdFullDirectoryInformation = 38,
  FileValidDataLengthInformation = 39,
  FileShortNameInformation = 40,
  FileIoCompletionNotificationInformation = 41,
  FileMaximumInformation = 42
};

// 0x4 (4) bytes
enum _DEVICE_POWER_STATE {

  PowerDeviceUnspecified = 0,
  PowerDeviceD0 = 1,
  PowerDeviceD1 = 2,
  PowerDeviceD2 = 3,
  PowerDeviceD3 = 4,
  PowerDeviceMaximum = 5
};

// 0x4 (4) bytes
union _POWER_STATE {
  enum _SYSTEM_POWER_STATE SystemState; // offset: 0x0 (0)
  enum _DEVICE_POWER_STATE DeviceState; // offset: 0x0 (0)
};

// 0x4 (4) bytes
enum _IO_ALLOCATION_ACTION {

  KeepObject = 1,
  DeallocateObject = 2,
  DeallocateObjectKeepRegisters = 3
};

// 0x4 (4) bytes
enum _SECURITY_IMPERSONATION_LEVEL {

  SecurityAnonymous = 0,
  SecurityIdentification = 1,
  SecurityImpersonation = 2,
  SecurityDelegation = 3
};

// 0x4 (4) bytes
enum _EXCEPTION_DISPOSITION {

  ExceptionContinueExecution = 0,
  ExceptionContinueSearch = 1,
  ExceptionNestedException = 2,
  ExceptionCollidedUnwind = 3
};

// 0x4 (4) bytes
enum _POOL_TYPE {

  NonPagedPool = 0,
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38
};

typedef int16_t SHORT;

typedef void VOID;

typedef uint64_t ULONGLONG;

// 0x4 (4) bytes
struct _SINGLE_LIST_ENTRY {
  struct _SINGLE_LIST_ENTRY *Next; // offset: 0x0 (0)
};

typedef uint8_t UCHAR;

// 0x10 (16) bytes
struct _SECURITY_SUBJECT_CONTEXT {
  VOID *ClientToken;                                     // offset: 0x0 (0)
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // offset: 0x4 (4)
  VOID *PrimaryToken;                                    // offset: 0x8 (8)
  VOID *ProcessAuditId;                                  // offset: 0xc (12)
};

// 0x8 (8) bytes
struct _IO_COMPLETION_CONTEXT {
  VOID *Port; // offset: 0x0 (0)
  VOID *Key;  // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _SECTION_OBJECT_POINTERS {
  VOID *DataSectionObject;  // offset: 0x0 (0)
  VOID *SharedCacheMap;     // offset: 0x4 (4)
  VOID *ImageSectionObject; // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _IO_CLIENT_EXTENSION {
  struct _IO_CLIENT_EXTENSION *NextExtension; // offset: 0x0 (0)
  VOID *ClientIdentificationAddress;          // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _PROCESS_WS_WATCH_INFORMATION {
  VOID *FaultingPc; // offset: 0x0 (0)
  VOID *FaultingVa; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _TERMINATION_PORT {
  struct _TERMINATION_PORT *Next; // offset: 0x0 (0)
  VOID *Port;                     // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _CLIENT_ID {
  VOID *UniqueProcess; // offset: 0x0 (0)
  VOID *UniqueThread;  // offset: 0x4 (4)
};

// 0xc (12) bytes
struct PCI_SECONDARY_EXTENSION {
  struct _SINGLE_LIST_ENTRY List;   // offset: 0x0 (0)
  enum PCI_SIGNATURE ExtensionType; // offset: 0x4 (4)
  VOID (*Destructor)(VOID *arg1);   // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _iobuf {
  CHAR *_ptr;      // offset: 0x0 (0)
  LONG _cnt;       // offset: 0x4 (4)
  CHAR *_base;     // offset: 0x8 (8)
  LONG _flag;      // offset: 0xc (12)
  LONG _file;      // offset: 0x10 (16)
  LONG _charbuf;   // offset: 0x14 (20)
  LONG _bufsiz;    // offset: 0x18 (24)
  CHAR *_tmpfname; // offset: 0x1c (28)
};

// 0x8 (8) bytes
struct _QUAD {
  union {
    LONGLONG UseThisFieldToCopy; // offset: 0x0 (0)
    double DoNotUseThisField;    // offset: 0x0 (0)
  };
};

// 0x8 (8) bytes
struct _VACB_LEVEL_REFERENCE {
  LONG Reference;        // offset: 0x0 (0)
  LONG SpecialReference; // offset: 0x4 (4)
};

// 0x4 (4) bytes
struct _DBGKD_CONTINUE {
  LONG ContinueStatus; // offset: 0x0 (0)
};

// 0x1 (1) bytes
struct _PM_SUPPORT {
  UCHAR Rsvd2 : 1;     // offset: 0x0 (0)
  UCHAR D1 : 1;        // offset: 0x0 (0)
  UCHAR D2 : 1;        // offset: 0x0 (0)
  UCHAR PMED0 : 1;     // offset: 0x0 (0)
  UCHAR PMED1 : 1;     // offset: 0x0 (0)
  UCHAR PMED2 : 1;     // offset: 0x0 (0)
  UCHAR PMED3Hot : 1;  // offset: 0x0 (0)
  UCHAR PMED3Cold : 1; // offset: 0x0 (0)
};

// 0x2 (2) bytes
struct _PCI_PMC {
  UCHAR Version : 3;                      // offset: 0x0 (0)
  UCHAR PMEClock : 1;                     // offset: 0x0 (0)
  UCHAR Rsvd1 : 1;                        // offset: 0x0 (0)
  UCHAR DeviceSpecificInitialization : 1; // offset: 0x0 (0)
  UCHAR Rsvd2 : 2;                        // offset: 0x0 (0)
  struct _PM_SUPPORT Support;             // offset: 0x1 (1)
};

// 0x10 (16) bytes
struct _CACHE_MANAGER_CALLBACKS {
  UCHAR (*AcquireForLazyWrite)(VOID *arg1, UCHAR arg2); // offset: 0x0 (0)
  VOID (*ReleaseFromLazyWrite)(VOID *arg1);             // offset: 0x4 (4)
  UCHAR (*AcquireForReadAhead)(VOID *arg1, UCHAR arg2); // offset: 0x8 (8)
  VOID (*ReleaseFromReadAhead)(VOID *arg1);             // offset: 0xc (12)
};

// 0x6 (6) bytes
struct _SID_IDENTIFIER_AUTHORITY {
  UCHAR Value[6]; // offset: 0x0 (0)
};

// 0xc (12) bytes
struct _PS_IMPERSONATION_INFORMATION {
  VOID *Token;                                           // offset: 0x0 (0)
  UCHAR CopyOnOpen;                                      // offset: 0x4 (4)
  UCHAR EffectiveOnly;                                   // offset: 0x5 (5)
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // offset: 0x8 (8)
};

// 0x2024 (8228) bytes
struct _KiIoAccessMap {
  UCHAR DirectionMap[32]; // offset: 0x0 (0)
  UCHAR IoMap[8196];      // offset: 0x20 (32)
};

// 0x1 (1) bytes
struct _KEXECUTE_OPTIONS {
  UCHAR ExecuteDisable : 1;        // offset: 0x0 (0)
  UCHAR ExecuteEnable : 1;         // offset: 0x0 (0)
  UCHAR DisableThunkEmulation : 1; // offset: 0x0 (0)
  UCHAR Permanent : 1;             // offset: 0x0 (0)
  UCHAR ExecuteDispatchEnable : 1; // offset: 0x0 (0)
  UCHAR ImageDispatchEnable : 1;   // offset: 0x0 (0)
  UCHAR Spare : 2;                 // offset: 0x0 (0)
};

// 0x1 (1) bytes
struct _flags {
  UCHAR Removable : 1; // offset: 0x0 (0)
  UCHAR Fill : 7;      // offset: 0x0 (0)
};

// 0x4 (4) bytes
union PCI_HEADER_TYPE_DEPENDENT {
  struct {
    UCHAR Spare[4]; // offset: 0x0 (0)
  } type0;          // offset: 0x0 (0)
  struct {
    UCHAR PrimaryBus;              // offset: 0x0 (0)
    UCHAR SecondaryBus;            // offset: 0x1 (1)
    UCHAR SubordinateBus;          // offset: 0x2 (2)
    UCHAR SubtractiveDecode : 1;   // offset: 0x3 (3)
    UCHAR IsaBitSet : 1;           // offset: 0x3 (3)
    UCHAR VgaBitSet : 1;           // offset: 0x3 (3)
    UCHAR WeChangedBusNumbers : 1; // offset: 0x3 (3)
    UCHAR IsaBitRequired : 1;      // offset: 0x3 (3)
  } type1;                         // offset: 0x0 (0)
  struct {
    UCHAR PrimaryBus;              // offset: 0x0 (0)
    UCHAR SecondaryBus;            // offset: 0x1 (1)
    UCHAR SubordinateBus;          // offset: 0x2 (2)
    UCHAR SubtractiveDecode : 1;   // offset: 0x3 (3)
    UCHAR IsaBitSet : 1;           // offset: 0x3 (3)
    UCHAR VgaBitSet : 1;           // offset: 0x3 (3)
    UCHAR WeChangedBusNumbers : 1; // offset: 0x3 (3)
    UCHAR IsaBitRequired : 1;      // offset: 0x3 (3)
  } type2;                         // offset: 0x0 (0)
};

typedef uint16_t USHORT;

// 0x4 (4) bytes
struct _HEAP_FREE_ENTRY_EXTRA {
  USHORT TagIndex;           // offset: 0x0 (0)
  USHORT FreeBackTraceIndex; // offset: 0x2 (2)
};

// 0x40 (64) bytes
struct _IMAGE_DOS_HEADER {
  USHORT e_magic;    // offset: 0x0 (0)
  USHORT e_cblp;     // offset: 0x2 (2)
  USHORT e_cp;       // offset: 0x4 (4)
  USHORT e_crlc;     // offset: 0x6 (6)
  USHORT e_cparhdr;  // offset: 0x8 (8)
  USHORT e_minalloc; // offset: 0xa (10)
  USHORT e_maxalloc; // offset: 0xc (12)
  USHORT e_ss;       // offset: 0xe (14)
  USHORT e_sp;       // offset: 0x10 (16)
  USHORT e_csum;     // offset: 0x12 (18)
  USHORT e_ip;       // offset: 0x14 (20)
  USHORT e_cs;       // offset: 0x16 (22)
  USHORT e_lfarlc;   // offset: 0x18 (24)
  USHORT e_ovno;     // offset: 0x1a (26)
  USHORT e_res[4];   // offset: 0x1c (28)
  USHORT e_oemid;    // offset: 0x24 (36)
  USHORT e_oeminfo;  // offset: 0x26 (38)
  USHORT e_res2[10]; // offset: 0x28 (40)
  LONG e_lfanew;     // offset: 0x3c (60)
};

// 0x4 (4) bytes
struct _WMI_CLIENT_CONTEXT {
  UCHAR ProcessorNumber; // offset: 0x0 (0)
  UCHAR Alignment;       // offset: 0x1 (1)
  USHORT LoggerId;       // offset: 0x2 (2)
};

// 0x4 (4) bytes
struct _TRACE_ENABLE_FLAG_EXTENSION {
  USHORT Offset; // offset: 0x0 (0)
  UCHAR Length;  // offset: 0x2 (2)
  UCHAR Flag;    // offset: 0x3 (3)
};

// 0x8 (8) bytes
struct _ACL {
  UCHAR AclRevision; // offset: 0x0 (0)
  UCHAR Sbz1;        // offset: 0x1 (1)
  USHORT AclSize;    // offset: 0x2 (2)
  USHORT AceCount;   // offset: 0x4 (4)
  USHORT Sbz2;       // offset: 0x6 (6)
};

// 0x14 (20) bytes
struct _SECURITY_DESCRIPTOR {
  UCHAR Revision;    // offset: 0x0 (0)
  UCHAR Sbz1;        // offset: 0x1 (1)
  USHORT Control;    // offset: 0x2 (2)
  VOID *Owner;       // offset: 0x4 (4)
  VOID *Group;       // offset: 0x8 (8)
  struct _ACL *Sacl; // offset: 0xc (12)
  struct _ACL *Dacl; // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _INTERLOCK_SEQ {
  union {
    struct {
      USHORT Depth;           // offset: 0x0 (0)
      USHORT FreeEntryOffset; // offset: 0x2 (2)
    };
    struct {
      volatile ULONG OffsetAndDepth; // offset: 0x0 (0)
      volatile ULONG Sequence;       // offset: 0x4 (4)
    };
    volatile LONGLONG Exchg; // offset: 0x0 (0)
  };
};

// 0x8 (8) bytes
struct _HEAP_ENTRY {
  union {
    struct {
      USHORT Size;         // offset: 0x0 (0)
      USHORT PreviousSize; // offset: 0x2 (2)
    };
    VOID *volatile SubSegmentCode; // offset: 0x0 (0)
  };
  UCHAR SmallTagIndex; // offset: 0x4 (4)
  UCHAR Flags;         // offset: 0x5 (5)
  UCHAR UnusedBytes;   // offset: 0x6 (6)
  UCHAR SegmentIndex;  // offset: 0x7 (7)
};

// 0x10 (16) bytes
struct _RTL_ATOM_TABLE_ENTRY {
  struct _RTL_ATOM_TABLE_ENTRY *HashLink; // offset: 0x0 (0)
  USHORT HandleIndex;                     // offset: 0x4 (4)
  USHORT Atom;                            // offset: 0x6 (6)
  USHORT ReferenceCount;                  // offset: 0x8 (8)
  UCHAR Flags;                            // offset: 0xa (10)
  UCHAR NameLength;                       // offset: 0xb (11)
  USHORT Name[1];                         // offset: 0xc (12)
};

// 0x2 (2) bytes
struct _MMPFNENTRY {
  USHORT Modified : 1;         // offset: 0x0 (0)
  USHORT ReadInProgress : 1;   // offset: 0x0 (0)
  USHORT WriteInProgress : 1;  // offset: 0x0 (0)
  USHORT PrototypePte : 1;     // offset: 0x0 (0)
  USHORT PageColor : 4;        // offset: 0x0 (0)
  USHORT PageLocation : 3;     // offset: 0x0 (0)
  USHORT RemovalRequested : 1; // offset: 0x0 (0)
  USHORT CacheAttribute : 2;   // offset: 0x0 (0)
  USHORT Rom : 1;              // offset: 0x0 (0)
  USHORT ParityError : 1;      // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _INTERFACE {
  USHORT Size;                              // offset: 0x0 (0)
  USHORT Version;                           // offset: 0x2 (2)
  VOID *Context;                            // offset: 0x4 (4)
  VOID (*InterfaceReference)(VOID *arg1);   // offset: 0x8 (8)
  VOID (*InterfaceDereference)(VOID *arg1); // offset: 0xc (12)
};

// 0x8 (8) bytes
struct _STRING {
  USHORT Length;        // offset: 0x0 (0)
  USHORT MaximumLength; // offset: 0x2 (2)
  CHAR *Buffer;         // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _UNICODE_STRING {
  USHORT Length;        // offset: 0x0 (0)
  USHORT MaximumLength; // offset: 0x2 (2)
  USHORT *Buffer;       // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _CURDIR {
  struct _UNICODE_STRING DosPath; // offset: 0x0 (0)
  VOID *Handle;                   // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _OBJECT_NAME_INFORMATION {
  struct _UNICODE_STRING Name; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _SE_AUDIT_PROCESS_CREATION_INFO {
  struct _OBJECT_NAME_INFORMATION *ImageFileName; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MMSUPPORT_FLAGS {
  UCHAR SessionSpace : 1;          // offset: 0x0 (0)
  UCHAR BeingTrimmed : 1;          // offset: 0x0 (0)
  UCHAR SessionLeader : 1;         // offset: 0x0 (0)
  UCHAR TrimHard : 1;              // offset: 0x0 (0)
  UCHAR MaximumWorkingSetHard : 1; // offset: 0x0 (0)
  UCHAR ForceTrim : 1;             // offset: 0x0 (0)
  UCHAR MinimumWorkingSetHard : 1; // offset: 0x0 (0)
  UCHAR Available0 : 1;            // offset: 0x0 (0)
  UCHAR MemoryPriority : 8;        // offset: 0x1 (1)
  USHORT GrowWsleHash : 1;         // offset: 0x2 (2)
  USHORT AcquiredUnsafe : 1;       // offset: 0x2 (2)
  USHORT Available : 14;           // offset: 0x2 (2)
};

// 0x8 (8) bytes
struct _KIDTENTRY {
  USHORT Offset;         // offset: 0x0 (0)
  USHORT Selector;       // offset: 0x2 (2)
  USHORT Access;         // offset: 0x4 (4)
  USHORT ExtendedOffset; // offset: 0x6 (6)
};

// 0x8 (8) bytes
struct _LIST_ENTRY {
  struct _LIST_ENTRY *Flink; // offset: 0x0 (0)
  struct _LIST_ENTRY *Blink; // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _HEAP_FREE_ENTRY {
  union {
    struct {
      USHORT Size;         // offset: 0x0 (0)
      USHORT PreviousSize; // offset: 0x2 (2)
    };
    VOID *volatile SubSegmentCode; // offset: 0x0 (0)
  };
  UCHAR SmallTagIndex;         // offset: 0x4 (4)
  UCHAR Flags;                 // offset: 0x5 (5)
  UCHAR UnusedBytes;           // offset: 0x6 (6)
  UCHAR SegmentIndex;          // offset: 0x7 (7)
  struct _LIST_ENTRY FreeList; // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _WORK_QUEUE_ITEM {
  struct _LIST_ENTRY List;           // offset: 0x0 (0)
  VOID (*WorkerRoutine)(VOID *arg1); // offset: 0x8 (8)
  VOID *Parameter;                   // offset: 0xc (12)
};

// 0x10 (16) bytes
struct _OBJECT_HEADER_CREATOR_INFO {
  struct _LIST_ENTRY TypeList;  // offset: 0x0 (0)
  VOID *CreatorUniqueProcess;   // offset: 0x8 (8)
  USHORT CreatorBackTraceIndex; // offset: 0xc (12)
  USHORT Reserved;              // offset: 0xe (14)
};

// 0x18 (24) bytes
struct _IO_TIMER {
  SHORT Type;                   // offset: 0x0 (0)
  SHORT TimerFlag;              // offset: 0x2 (2)
  struct _LIST_ENTRY TimerList; // offset: 0x4 (4)
  VOID(*TimerRoutine)
  (struct _DEVICE_OBJECT *arg1, VOID *arg2); // offset: 0xc (12)
  VOID *Context;                             // offset: 0x10 (16)
  struct _DEVICE_OBJECT *DeviceObject;       // offset: 0x14 (20)
};

// 0x10 (16) bytes
struct _DISPATCHER_HEADER {
  union {
    struct {
      UCHAR Type; // offset: 0x0 (0)
      union {
        UCHAR Absolute; // offset: 0x1 (1)
        UCHAR NpxIrql;  // offset: 0x1 (1)
      };
      union {
        UCHAR Size; // offset: 0x2 (2)
        UCHAR Hand; // offset: 0x2 (2)
      };
      union {
        UCHAR Inserted;    // offset: 0x3 (3)
        UCHAR DebugActive; // offset: 0x3 (3)
      };
    };
    volatile LONG Lock; // offset: 0x0 (0)
  };
  LONG SignalState;                // offset: 0x4 (4)
  struct _LIST_ENTRY WaitListHead; // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _KGATE {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 (0)
};

// 0x14 (20) bytes
struct _KSEMAPHORE {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 (0)
  LONG Limit;                       // offset: 0x10 (16)
};

// 0x18 (24) bytes
struct _LPCP_NONPAGED_PORT_QUEUE {
  struct _KSEMAPHORE Semaphore;          // offset: 0x0 (0)
  struct _LPCP_PORT_OBJECT *BackPointer; // offset: 0x14 (20)
};

// 0x10 (16) bytes
struct _LPCP_PORT_QUEUE {
  struct _LPCP_NONPAGED_PORT_QUEUE *NonPagedPortQueue; // offset: 0x0 (0)
  struct _KSEMAPHORE *Semaphore;                       // offset: 0x4 (4)
  struct _LIST_ENTRY ReceiveHead;                      // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _KEVENT {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 (0)
};

// 0x14 (20) bytes
struct _CACHE_UNINITIALIZE_EVENT {
  struct _CACHE_UNINITIALIZE_EVENT *Next; // offset: 0x0 (0)
  struct _KEVENT Event;                   // offset: 0x4 (4)
};

// 0x18 (24) bytes
struct _MMMOD_WRITER_LISTHEAD {
  struct _LIST_ENTRY ListHead; // offset: 0x0 (0)
  struct _KEVENT Event;        // offset: 0x8 (8)
};

// 0x30 (48) bytes
struct _EX_PUSH_LOCK_WAIT_BLOCK {
  union {
    struct _KGATE WakeGate;   // offset: 0x0 (0)
    struct _KEVENT WakeEvent; // offset: 0x0 (0)
  };
  struct _EX_PUSH_LOCK_WAIT_BLOCK *Next;     // offset: 0x10 (16)
  struct _EX_PUSH_LOCK_WAIT_BLOCK *Last;     // offset: 0x14 (20)
  struct _EX_PUSH_LOCK_WAIT_BLOCK *Previous; // offset: 0x18 (24)
  LONG ShareCount;                           // offset: 0x1c (28)
  LONG Flags;                                // offset: 0x20 (32)
};

// 0x20 (32) bytes
struct _KDPC {
  UCHAR Type;                      // offset: 0x0 (0)
  UCHAR Importance;                // offset: 0x1 (1)
  UCHAR Number;                    // offset: 0x2 (2)
  UCHAR Expedite;                  // offset: 0x3 (3)
  struct _LIST_ENTRY DpcListEntry; // offset: 0x4 (4)
  VOID(*DeferredRoutine)
  (struct _KDPC *arg1, VOID *arg2, VOID *arg3, VOID *arg4); // offset: 0xc (12)
  VOID *DeferredContext;                                    // offset: 0x10 (16)
  VOID *SystemArgument1;                                    // offset: 0x14 (20)
  VOID *SystemArgument2;                                    // offset: 0x18 (24)
  VOID *DpcData;                                            // offset: 0x1c (28)
};

// 0x10 (16) bytes
struct _VI_POOL_ENTRY_INUSE {
  VOID *VirtualAddress; // offset: 0x0 (0)
  VOID *CallingAddress; // offset: 0x4 (4)
  ULONG NumberOfBytes;  // offset: 0x8 (8)
  ULONG Tag;            // offset: 0xc (12)
};

// 0xc (12) bytes
struct _VI_POOL_PAGE_HEADER {
  struct _SINGLE_LIST_ENTRY *NextPage; // offset: 0x0 (0)
  VOID *VerifierEntry;                 // offset: 0x4 (4)
  ULONG Signature;                     // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _VI_POOL_ENTRY {
  union {
    struct _VI_POOL_PAGE_HEADER PageHeader; // offset: 0x0 (0)
    struct _VI_POOL_ENTRY_INUSE InUse;      // offset: 0x0 (0)
    struct _SINGLE_LIST_ENTRY *NextFree;    // offset: 0x0 (0)
  };
};

// 0x4 (4) bytes
struct _MI_VERIFIER_POOL_HEADER {
  struct _VI_POOL_ENTRY *VerifierPoolEntry; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _HANDLE_TABLE_ENTRY_INFO {
  ULONG AuditMask; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _HANDLE_TABLE_ENTRY {
  union {
    VOID *Object;                               // offset: 0x0 (0)
    ULONG ObAttributes;                         // offset: 0x0 (0)
    struct _HANDLE_TABLE_ENTRY_INFO *InfoTable; // offset: 0x0 (0)
    ULONG Value;                                // offset: 0x0 (0)
  };
  union {
    ULONG GrantedAccess; // offset: 0x4 (4)
    struct {
      USHORT GrantedAccessIndex;    // offset: 0x4 (4)
      USHORT CreatorBackTraceIndex; // offset: 0x6 (6)
    };
    LONG NextFreeTableEntry; // offset: 0x4 (4)
  };
};

// 0x18 (24) bytes
struct _PORT_MESSAGE {
  union {
    struct {
      SHORT DataLength;  // offset: 0x0 (0)
      SHORT TotalLength; // offset: 0x2 (2)
    } s1;                // offset: 0x0 (0)
    ULONG Length;        // offset: 0x0 (0)

  } u1; // offset: 0x0 (0)
  union {
    struct {
      SHORT Type;           // offset: 0x0 (0)
      SHORT DataInfoOffset; // offset: 0x2 (2)
    } s2;                   // offset: 0x4 (4)
    ULONG ZeroInit;         // offset: 0x4 (4)

  } u2; // offset: 0x4 (4)
  union {
    struct _CLIENT_ID ClientId; // offset: 0x8 (8)
    double DoNotUseThisField;   // offset: 0x8 (8)
  };
  ULONG MessageId; // offset: 0x10 (16)
  union {
    ULONG ClientViewSize; // offset: 0x14 (20)
    ULONG CallbackId;     // offset: 0x14 (20)
  };
};

// 0x30 (48) bytes
struct _LPCP_MESSAGE {
  union {
    struct _LIST_ENTRY Entry; // offset: 0x0 (0)
    struct {
      struct _SINGLE_LIST_ENTRY FreeEntry; // offset: 0x0 (0)
      ULONG Reserved0;                     // offset: 0x4 (4)
    };
  };
  VOID *SenderPort;                 // offset: 0x8 (8)
  struct _ETHREAD *RepliedToThread; // offset: 0xc (12)
  VOID *PortContext;                // offset: 0x10 (16)
  struct _PORT_MESSAGE Request;     // offset: 0x18 (24)
};

// 0x10 (16) bytes
struct _PO_MEMORY_RANGE_ARRAY_LINK {
  struct _PO_MEMORY_RANGE_ARRAY *Next; // offset: 0x0 (0)
  ULONG NextTable;                     // offset: 0x4 (4)
  ULONG CheckSum;                      // offset: 0x8 (8)
  ULONG EntryCount;                    // offset: 0xc (12)
};

// 0x10 (16) bytes
struct _PO_MEMORY_RANGE_ARRAY_RANGE {
  ULONG PageNo;    // offset: 0x0 (0)
  ULONG StartPage; // offset: 0x4 (4)
  ULONG EndPage;   // offset: 0x8 (8)
  ULONG CheckSum;  // offset: 0xc (12)
};

// 0x10 (16) bytes
struct _PO_MEMORY_RANGE_ARRAY {
  union {
    struct _PO_MEMORY_RANGE_ARRAY_RANGE Range; // offset: 0x0 (0)
    struct _PO_MEMORY_RANGE_ARRAY_LINK Link;   // offset: 0x0 (0)
  };
};

// 0x48 (72) bytes
struct _PO_NOTIFY_ORDER_LEVEL {
  struct _KEVENT LevelReady;     // offset: 0x0 (0)
  ULONG DeviceCount;             // offset: 0x10 (16)
  ULONG ActiveCount;             // offset: 0x14 (20)
  struct _LIST_ENTRY WaitSleep;  // offset: 0x18 (24)
  struct _LIST_ENTRY ReadySleep; // offset: 0x20 (32)
  struct _LIST_ENTRY Pending;    // offset: 0x28 (40)
  struct _LIST_ENTRY Complete;   // offset: 0x30 (48)
  struct _LIST_ENTRY ReadyS0;    // offset: 0x38 (56)
  struct _LIST_ENTRY WaitS0;     // offset: 0x40 (64)
};

// 0x248 (584) bytes
struct _PO_DEVICE_NOTIFY_ORDER {
  ULONG DevNodeSequence;                       // offset: 0x0 (0)
  struct _DEVICE_OBJECT **WarmEjectPdoPointer; // offset: 0x4 (4)
  struct _PO_NOTIFY_ORDER_LEVEL OrderLevel[8]; // offset: 0x8 (8)
};

// 0x14 (20) bytes
struct _POP_SHUTDOWN_BUG_CHECK {
  ULONG Code;       // offset: 0x0 (0)
  ULONG Parameter1; // offset: 0x4 (4)
  ULONG Parameter2; // offset: 0x8 (8)
  ULONG Parameter3; // offset: 0xc (12)
  ULONG Parameter4; // offset: 0x10 (16)
};

// 0x1c (28) bytes
struct _IMAGE_DEBUG_DIRECTORY {
  ULONG Characteristics;  // offset: 0x0 (0)
  ULONG TimeDateStamp;    // offset: 0x4 (4)
  USHORT MajorVersion;    // offset: 0x8 (8)
  USHORT MinorVersion;    // offset: 0xa (10)
  ULONG Type;             // offset: 0xc (12)
  ULONG SizeOfData;       // offset: 0x10 (16)
  ULONG AddressOfRawData; // offset: 0x14 (20)
  ULONG PointerToRawData; // offset: 0x18 (24)
};

// 0x1c (28) bytes
struct _POOL_TRACKER_TABLE {
  ULONG Key;            // offset: 0x0 (0)
  ULONG NonPagedAllocs; // offset: 0x4 (4)
  ULONG NonPagedFrees;  // offset: 0x8 (8)
  ULONG NonPagedBytes;  // offset: 0xc (12)
  ULONG PagedAllocs;    // offset: 0x10 (16)
  ULONG PagedFrees;     // offset: 0x14 (20)
  ULONG PagedBytes;     // offset: 0x18 (24)
};

// 0x8 (8) bytes
struct BATTERY_REPORTING_SCALE {
  ULONG Granularity; // offset: 0x0 (0)
  ULONG Capacity;    // offset: 0x4 (4)
};

// 0x4c (76) bytes
struct SYSTEM_POWER_CAPABILITIES {
  UCHAR PowerButtonPresent;                       // offset: 0x0 (0)
  UCHAR SleepButtonPresent;                       // offset: 0x1 (1)
  UCHAR LidPresent;                               // offset: 0x2 (2)
  UCHAR SystemS1;                                 // offset: 0x3 (3)
  UCHAR SystemS2;                                 // offset: 0x4 (4)
  UCHAR SystemS3;                                 // offset: 0x5 (5)
  UCHAR SystemS4;                                 // offset: 0x6 (6)
  UCHAR SystemS5;                                 // offset: 0x7 (7)
  UCHAR HiberFilePresent;                         // offset: 0x8 (8)
  UCHAR FullWake;                                 // offset: 0x9 (9)
  UCHAR VideoDimPresent;                          // offset: 0xa (10)
  UCHAR ApmPresent;                               // offset: 0xb (11)
  UCHAR UpsPresent;                               // offset: 0xc (12)
  UCHAR ThermalControl;                           // offset: 0xd (13)
  UCHAR ProcessorThrottle;                        // offset: 0xe (14)
  UCHAR ProcessorMinThrottle;                     // offset: 0xf (15)
  UCHAR ProcessorMaxThrottle;                     // offset: 0x10 (16)
  UCHAR spare2[4];                                // offset: 0x11 (17)
  UCHAR DiskSpinDown;                             // offset: 0x15 (21)
  UCHAR spare3[8];                                // offset: 0x16 (22)
  UCHAR SystemBatteriesPresent;                   // offset: 0x1e (30)
  UCHAR BatteriesAreShortTerm;                    // offset: 0x1f (31)
  struct BATTERY_REPORTING_SCALE BatteryScale[3]; // offset: 0x20 (32)
  enum _SYSTEM_POWER_STATE AcOnLineWake;          // offset: 0x38 (56)
  enum _SYSTEM_POWER_STATE SoftLidWake;           // offset: 0x3c (60)
  enum _SYSTEM_POWER_STATE RtcWake;               // offset: 0x40 (64)
  enum _SYSTEM_POWER_STATE MinDeviceWakeState;    // offset: 0x44 (68)
  enum _SYSTEM_POWER_STATE DefaultLowLatencyWake; // offset: 0x48 (72)
};

// 0x204 (516) bytes
struct _CALL_PERFORMANCE_DATA {
  ULONG SpinLock;                   // offset: 0x0 (0)
  struct _LIST_ENTRY HashTable[64]; // offset: 0x4 (4)
};

// 0x44 (68) bytes
struct _PI_BUS_EXTENSION {
  ULONG Flags;                                // offset: 0x0 (0)
  UCHAR NumberCSNs;                           // offset: 0x4 (4)
  UCHAR *ReadDataPort;                        // offset: 0x8 (8)
  UCHAR DataPortMapped;                       // offset: 0xc (12)
  UCHAR *AddressPort;                         // offset: 0x10 (16)
  UCHAR AddrPortMapped;                       // offset: 0x14 (20)
  UCHAR *CommandPort;                         // offset: 0x18 (24)
  UCHAR CmdPortMapped;                        // offset: 0x1c (28)
  ULONG NextSlotNumber;                       // offset: 0x20 (32)
  struct _SINGLE_LIST_ENTRY DeviceList;       // offset: 0x24 (36)
  struct _SINGLE_LIST_ENTRY CardList;         // offset: 0x28 (40)
  struct _DEVICE_OBJECT *PhysicalBusDevice;   // offset: 0x2c (44)
  struct _DEVICE_OBJECT *FunctionalBusDevice; // offset: 0x30 (48)
  struct _DEVICE_OBJECT *AttachedDevice;      // offset: 0x34 (52)
  ULONG BusNumber;                            // offset: 0x38 (56)
  enum _SYSTEM_POWER_STATE SystemPowerState;  // offset: 0x3c (60)
  enum _DEVICE_POWER_STATE DevicePowerState;  // offset: 0x40 (64)
};

// 0x8 (8) bytes
struct _BUS_EXTENSION_LIST {
  VOID *Next;                             // offset: 0x0 (0)
  struct _PI_BUS_EXTENSION *BusExtension; // offset: 0x4 (4)
};

// 0x14 (20) bytes
struct _RTL_RANGE_LIST {
  struct _LIST_ENTRY ListHead; // offset: 0x0 (0)
  ULONG Flags;                 // offset: 0x8 (8)
  ULONG Count;                 // offset: 0xc (12)
  ULONG Stamp;                 // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _MMPFNLIST {
  ULONG Total;            // offset: 0x0 (0)
  enum _MMLISTS ListName; // offset: 0x4 (4)
  ULONG Flink;            // offset: 0x8 (8)
  ULONG Blink;            // offset: 0xc (12)
};

// 0x28 (40) bytes
struct _IMAGE_SECTION_HEADER {
  UCHAR Name[8]; // offset: 0x0 (0)
  union {
    ULONG PhysicalAddress; // offset: 0x8 (8)
    ULONG VirtualSize;     // offset: 0x8 (8)

  } Misc;                     // offset: 0x8 (8)
  ULONG VirtualAddress;       // offset: 0xc (12)
  ULONG SizeOfRawData;        // offset: 0x10 (16)
  ULONG PointerToRawData;     // offset: 0x14 (20)
  ULONG PointerToRelocations; // offset: 0x18 (24)
  ULONG PointerToLinenumbers; // offset: 0x1c (28)
  USHORT NumberOfRelocations; // offset: 0x20 (32)
  USHORT NumberOfLinenumbers; // offset: 0x22 (34)
  ULONG Characteristics;      // offset: 0x24 (36)
};

// 0xc (12) bytes
struct _SYSPTES_HEADER {
  struct _LIST_ENTRY ListHead; // offset: 0x0 (0)
  ULONG Count;                 // offset: 0x8 (8)
};

// 0x4 (4) bytes
struct _HEAP_STOP_ON_TAG {
  union {
    ULONG HeapAndTagIndex; // offset: 0x0 (0)
    struct {
      USHORT TagIndex;  // offset: 0x0 (0)
      USHORT HeapIndex; // offset: 0x2 (2)
    };
  };
};

// 0x18 (24) bytes
struct _HEAP_STOP_ON_VALUES {
  ULONG AllocAddress;                  // offset: 0x0 (0)
  struct _HEAP_STOP_ON_TAG AllocTag;   // offset: 0x4 (4)
  ULONG ReAllocAddress;                // offset: 0x8 (8)
  struct _HEAP_STOP_ON_TAG ReAllocTag; // offset: 0xc (12)
  ULONG FreeAddress;                   // offset: 0x10 (16)
  struct _HEAP_STOP_ON_TAG FreeTag;    // offset: 0x14 (20)
};

// 0x20 (32) bytes
struct _SUPPORTED_RANGE {
  struct _SUPPORTED_RANGE *Next; // offset: 0x0 (0)
  ULONG SystemAddressSpace;      // offset: 0x4 (4)
  LONGLONG SystemBase;           // offset: 0x8 (8)
  LONGLONG Base;                 // offset: 0x10 (16)
  LONGLONG Limit;                // offset: 0x18 (24)
};

// 0x30 (48) bytes
struct _PCI_HEADER_TYPE_2 {
  ULONG SocketRegistersBaseAddress; // offset: 0x0 (0)
  UCHAR CapabilitiesPtr;            // offset: 0x4 (4)
  UCHAR Reserved;                   // offset: 0x5 (5)
  USHORT SecondaryStatus;           // offset: 0x6 (6)
  UCHAR PrimaryBus;                 // offset: 0x8 (8)
  UCHAR SecondaryBus;               // offset: 0x9 (9)
  UCHAR SubordinateBus;             // offset: 0xa (10)
  UCHAR SecondaryLatency;           // offset: 0xb (11)
  struct {
    ULONG Base;         // offset: 0x0 (0)
    ULONG Limit;        // offset: 0x4 (4)
  } Range[4];           // offset: 0xc (12)
  UCHAR InterruptLine;  // offset: 0x2c (44)
  UCHAR InterruptPin;   // offset: 0x2d (45)
  USHORT BridgeControl; // offset: 0x2e (46)
};

// 0xa0 (160) bytes
struct _SUPPORTED_RANGES {
  USHORT Version;                         // offset: 0x0 (0)
  UCHAR Sorted;                           // offset: 0x2 (2)
  UCHAR Reserved;                         // offset: 0x3 (3)
  ULONG NoIO;                             // offset: 0x4 (4)
  struct _SUPPORTED_RANGE IO;             // offset: 0x8 (8)
  ULONG NoMemory;                         // offset: 0x28 (40)
  struct _SUPPORTED_RANGE Memory;         // offset: 0x30 (48)
  ULONG NoPrefetchMemory;                 // offset: 0x50 (80)
  struct _SUPPORTED_RANGE PrefetchMemory; // offset: 0x58 (88)
  ULONG NoDma;                            // offset: 0x78 (120)
  struct _SUPPORTED_RANGE Dma;            // offset: 0x80 (128)
};

// 0x4 (4) bytes
struct _PCI_SLOT_NUMBER {
  union {
    struct {
      ULONG DeviceNumber : 5;   // offset: 0x0 (0)
      ULONG FunctionNumber : 3; // offset: 0x0 (0)
      ULONG Reserved : 24;      // offset: 0x0 (0)
    } bits;                     // offset: 0x0 (0)
    ULONG AsULONG;              // offset: 0x0 (0)

  } u; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _PCI_LOCK {
  ULONG Atom;    // offset: 0x0 (0)
  UCHAR OldIrql; // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _POOL_TRACKER_BIG_PAGES {
  VOID *Va;            // offset: 0x0 (0)
  ULONG Key;           // offset: 0x4 (4)
  ULONG NumberOfPages; // offset: 0x8 (8)
  VOID *QuotaObject;   // offset: 0xc (12)
};

// 0x8 (8) bytes
struct _MMADDRESS_LIST {
  ULONG StartVpn; // offset: 0x0 (0)
  ULONG EndVpn;   // offset: 0x4 (4)
};

// 0x14 (20) bytes
struct _MMFREE_POOL_ENTRY {
  struct _LIST_ENTRY List;          // offset: 0x0 (0)
  ULONG Size;                       // offset: 0x8 (8)
  ULONG Signature;                  // offset: 0xc (12)
  struct _MMFREE_POOL_ENTRY *Owner; // offset: 0x10 (16)
};

// 0x4 (4) bytes
struct _RTL_HANDLE_TABLE_ENTRY {
  union {
    ULONG Flags;                              // offset: 0x0 (0)
    struct _RTL_HANDLE_TABLE_ENTRY *NextFree; // offset: 0x0 (0)
  };
};

// 0x14 (20) bytes
struct _PROCESSOR_POWER_POLICY_INFO {
  ULONG TimeCheck;          // offset: 0x0 (0)
  ULONG DemoteLimit;        // offset: 0x4 (4)
  ULONG PromoteLimit;       // offset: 0x8 (8)
  UCHAR DemotePercent;      // offset: 0xc (12)
  UCHAR PromotePercent;     // offset: 0xd (13)
  UCHAR Spare[2];           // offset: 0xe (14)
  ULONG AllowDemotion : 1;  // offset: 0x10 (16)
  ULONG AllowPromotion : 1; // offset: 0x10 (16)
  ULONG Reserved : 30;      // offset: 0x10 (16)
};

// 0x4c (76) bytes
struct _PROCESSOR_POWER_POLICY {
  ULONG Revision;                                // offset: 0x0 (0)
  UCHAR DynamicThrottle;                         // offset: 0x4 (4)
  UCHAR Spare[3];                                // offset: 0x5 (5)
  ULONG DisableCStates : 1;                      // offset: 0x8 (8)
  ULONG Reserved : 31;                           // offset: 0x8 (8)
  ULONG PolicyCount;                             // offset: 0xc (12)
  struct _PROCESSOR_POWER_POLICY_INFO Policy[3]; // offset: 0x10 (16)
};

// 0xc (12) bytes
struct _POP_ACTION_TRIGGER {
  enum POP_POLICY_DEVICE_TYPE Type; // offset: 0x0 (0)
  UCHAR Flags;                      // offset: 0x4 (4)
  UCHAR Spare[3];                   // offset: 0x5 (5)
  union {
    struct {
      ULONG Level;                  // offset: 0x0 (0)
    } Battery;                      // offset: 0x8 (8)
    struct _POP_TRIGGER_WAIT *Wait; // offset: 0x8 (8)
  };
};

// 0x20 (32) bytes
struct _POP_TRIGGER_WAIT {
  struct _KEVENT Event;                // offset: 0x0 (0)
  LONG Status;                         // offset: 0x10 (16)
  struct _LIST_ENTRY Link;             // offset: 0x14 (20)
  struct _POP_ACTION_TRIGGER *Trigger; // offset: 0x1c (28)
};

// 0xc (12) bytes
struct POWER_ACTION_POLICY {
  enum POWER_ACTION Action; // offset: 0x0 (0)
  ULONG Flags;              // offset: 0x4 (4)
  ULONG EventCode;          // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct SYSTEM_POWER_LEVEL {
  UCHAR Enable;                            // offset: 0x0 (0)
  UCHAR Spare[3];                          // offset: 0x1 (1)
  ULONG BatteryLevel;                      // offset: 0x4 (4)
  struct POWER_ACTION_POLICY PowerPolicy;  // offset: 0x8 (8)
  enum _SYSTEM_POWER_STATE MinSystemState; // offset: 0x14 (20)
};

// 0xc (12) bytes
struct _KSYSTEM_TIME {
  ULONG LowPart;  // offset: 0x0 (0)
  LONG High1Time; // offset: 0x4 (4)
  LONG High2Time; // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _TEB_ACTIVE_FRAME_CONTEXT {
  ULONG Flags;           // offset: 0x0 (0)
  const CHAR *FrameName; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _MMVIEW {
  ULONG Entry;                       // offset: 0x0 (0)
  struct _CONTROL_AREA *ControlArea; // offset: 0x4 (4)
};

// 0x1030 (4144) bytes
struct _POOL_DESCRIPTOR {
  enum _POOL_TYPE PoolType;          // offset: 0x0 (0)
  ULONG PoolIndex;                   // offset: 0x4 (4)
  ULONG RunningAllocs;               // offset: 0x8 (8)
  ULONG RunningDeAllocs;             // offset: 0xc (12)
  ULONG TotalPages;                  // offset: 0x10 (16)
  ULONG TotalBigPages;               // offset: 0x14 (20)
  ULONG Threshold;                   // offset: 0x18 (24)
  VOID *LockAddress;                 // offset: 0x1c (28)
  VOID *PendingFrees;                // offset: 0x20 (32)
  LONG PendingFreeDepth;             // offset: 0x24 (36)
  ULONG TotalBytes;                  // offset: 0x28 (40)
  ULONG Spare0;                      // offset: 0x2c (44)
  struct _LIST_ENTRY ListHeads[512]; // offset: 0x30 (48)
};

// 0x4 (4) bytes
struct _MM_SESSION_SPACE_FLAGS {
  ULONG Initialized : 1;   // offset: 0x0 (0)
  ULONG DeletePending : 1; // offset: 0x0 (0)
  ULONG Filler : 30;       // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _PHYSICAL_MEMORY_RUN {
  ULONG BasePage;  // offset: 0x0 (0)
  ULONG PageCount; // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _PHYSICAL_MEMORY_DESCRIPTOR {
  ULONG NumberOfRuns;                 // offset: 0x0 (0)
  ULONG NumberOfPages;                // offset: 0x4 (4)
  struct _PHYSICAL_MEMORY_RUN Run[1]; // offset: 0x8 (8)
};

// 0xc (12) bytes
struct _MMCOLOR_TABLES {
  ULONG Flink; // offset: 0x0 (0)
  VOID *Blink; // offset: 0x4 (4)
  ULONG Count; // offset: 0x8 (8)
};

// 0x28 (40) bytes
struct _PO_DEVICE_NOTIFY {
  struct _LIST_ENTRY Link;             // offset: 0x0 (0)
  struct _DEVICE_OBJECT *TargetDevice; // offset: 0x8 (8)
  UCHAR WakeNeeded;                    // offset: 0xc (12)
  UCHAR OrderLevel;                    // offset: 0xd (13)
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x10 (16)
  VOID *Node;                          // offset: 0x14 (20)
  USHORT *DeviceName;                  // offset: 0x18 (24)
  USHORT *DriverName;                  // offset: 0x1c (28)
  ULONG ChildCount;                    // offset: 0x20 (32)
  ULONG ActiveChild;                   // offset: 0x24 (36)
};

// 0x8 (8) bytes
struct _DEVICE_RELATIONS {
  ULONG Count;                       // offset: 0x0 (0)
  struct _DEVICE_OBJECT *Objects[1]; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _CM_KEY_REFERENCE {
  ULONG KeyCell;          // offset: 0x0 (0)
  struct _HHIVE *KeyHive; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _CHILD_LIST {
  ULONG Count; // offset: 0x0 (0)
  ULONG List;  // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _CM_BIG_DATA {
  USHORT Signature; // offset: 0x0 (0)
  USHORT Count;     // offset: 0x2 (2)
  ULONG List;       // offset: 0x4 (4)
};

// 0x18 (24) bytes
struct _CM_KEY_VALUE {
  USHORT Signature;  // offset: 0x0 (0)
  USHORT NameLength; // offset: 0x2 (2)
  ULONG DataLength;  // offset: 0x4 (4)
  ULONG Data;        // offset: 0x8 (8)
  ULONG Type;        // offset: 0xc (12)
  USHORT Flags;      // offset: 0x10 (16)
  USHORT Spare;      // offset: 0x12 (18)
  USHORT Name[1];    // offset: 0x14 (20)
};

// 0x44 (68) bytes
struct _CM_KEY_BODY {
  ULONG Type;                                    // offset: 0x0 (0)
  struct _CM_KEY_CONTROL_BLOCK *KeyControlBlock; // offset: 0x4 (4)
  struct _CM_NOTIFY_BLOCK *NotifyBlock;          // offset: 0x8 (8)
  VOID *ProcessID;                               // offset: 0xc (12)
  ULONG Callers;                                 // offset: 0x10 (16)
  VOID *CallerAddress[10];                       // offset: 0x14 (20)
  struct _LIST_ENTRY KeyBodyList;                // offset: 0x3c (60)
};

// 0x2c (44) bytes
struct _CM_NOTIFY_BLOCK {
  struct _LIST_ENTRY HiveList;                     // offset: 0x0 (0)
  struct _LIST_ENTRY PostList;                     // offset: 0x8 (8)
  struct _CM_KEY_CONTROL_BLOCK *KeyControlBlock;   // offset: 0x10 (16)
  struct _CM_KEY_BODY *KeyBody;                    // offset: 0x14 (20)
  ULONG Filter : 30;                               // offset: 0x18 (24)
  ULONG WatchTree : 1;                             // offset: 0x18 (24)
  ULONG NotifyPending : 1;                         // offset: 0x18 (24)
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // offset: 0x1c (28)
};

// 0xc (12) bytes
struct _CM_NAME_HASH {
  ULONG ConvKey;                  // offset: 0x0 (0)
  struct _CM_NAME_HASH *NextHash; // offset: 0x4 (4)
  USHORT NameLength;              // offset: 0x8 (8)
  USHORT Name[1];                 // offset: 0xa (10)
};

// 0x14 (20) bytes
struct _SECURITY_DESCRIPTOR_RELATIVE {
  UCHAR Revision; // offset: 0x0 (0)
  UCHAR Sbz1;     // offset: 0x1 (1)
  USHORT Control; // offset: 0x2 (2)
  ULONG Owner;    // offset: 0x4 (4)
  ULONG Group;    // offset: 0x8 (8)
  ULONG Sacl;     // offset: 0xc (12)
  ULONG Dacl;     // offset: 0x10 (16)
};

// 0x28 (40) bytes
struct _CM_KEY_SECURITY {
  USHORT Signature;                                // offset: 0x0 (0)
  USHORT Reserved;                                 // offset: 0x2 (2)
  ULONG Flink;                                     // offset: 0x4 (4)
  ULONG Blink;                                     // offset: 0x8 (8)
  ULONG ReferenceCount;                            // offset: 0xc (12)
  ULONG DescriptorLength;                          // offset: 0x10 (16)
  struct _SECURITY_DESCRIPTOR_RELATIVE Descriptor; // offset: 0x14 (20)
};

// 0xc (12) bytes
struct CMP_OFFSET_ARRAY {
  ULONG FileOffset; // offset: 0x0 (0)
  VOID *DataBuffer; // offset: 0x4 (4)
  ULONG DataLength; // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _CM_NAME_CONTROL_BLOCK {
  UCHAR Compressed; // offset: 0x0 (0)
  USHORT RefCount;  // offset: 0x2 (2)
  union {
    struct _CM_NAME_HASH NameHash; // offset: 0x4 (4)
    struct {
      ULONG ConvKey;                 // offset: 0x4 (4)
      struct _CM_KEY_HASH *NextHash; // offset: 0x8 (8)
      USHORT NameLength;             // offset: 0xc (12)
      USHORT Name[1];                // offset: 0xe (14)
    };
  };
};

// 0x2c (44) bytes
struct _CM_KEY_SECURITY_CACHE {
  ULONG Cell;                                      // offset: 0x0 (0)
  ULONG ConvKey;                                   // offset: 0x4 (4)
  struct _LIST_ENTRY List;                         // offset: 0x8 (8)
  ULONG DescriptorLength;                          // offset: 0x10 (16)
  ULONG RealRefCount;                              // offset: 0x14 (20)
  struct _SECURITY_DESCRIPTOR_RELATIVE Descriptor; // offset: 0x18 (24)
};

// 0x8 (8) bytes
struct _CACHED_CHILD_LIST {
  ULONG Count; // offset: 0x0 (0)
  union {
    ULONG ValueList;                       // offset: 0x4 (4)
    struct _CM_KEY_CONTROL_BLOCK *RealKcb; // offset: 0x4 (4)
  };
};

// 0x10 (16) bytes
struct _CM_KEY_HASH {
  ULONG ConvKey;                 // offset: 0x0 (0)
  struct _CM_KEY_HASH *NextHash; // offset: 0x4 (4)
  struct _HHIVE *KeyHive;        // offset: 0x8 (8)
  ULONG KeyCell;                 // offset: 0xc (12)
};

// 0x8 (8) bytes
struct _CM_CELL_REMAP_BLOCK {
  ULONG OldCell; // offset: 0x0 (0)
  ULONG NewCell; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _CM_KEY_SECURITY_CACHE_ENTRY {
  ULONG Cell;                                    // offset: 0x0 (0)
  struct _CM_KEY_SECURITY_CACHE *CachedSecurity; // offset: 0x4 (4)
};

// 0x28 (40) bytes
struct _DEFERRED_WRITE {
  SHORT NodeTypeCode;                          // offset: 0x0 (0)
  SHORT NodeByteSize;                          // offset: 0x2 (2)
  struct _FILE_OBJECT *FileObject;             // offset: 0x4 (4)
  ULONG BytesToWrite;                          // offset: 0x8 (8)
  struct _LIST_ENTRY DeferredWriteLinks;       // offset: 0xc (12)
  struct _KEVENT *Event;                       // offset: 0x14 (20)
  VOID (*PostRoutine)(VOID *arg1, VOID *arg2); // offset: 0x18 (24)
  VOID *Context1;                              // offset: 0x1c (28)
  VOID *Context2;                              // offset: 0x20 (32)
  UCHAR LimitModifiedPages;                    // offset: 0x24 (36)
};

// 0x14 (20) bytes
struct _CALL_HASH_ENTRY {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 (0)
  VOID *CallersAddress;         // offset: 0x8 (8)
  VOID *CallersCaller;          // offset: 0xc (12)
  ULONG CallCount;              // offset: 0x10 (16)
};

// 0x4 (4) bytes
union EX_QUEUE_WORKER_INFO {
  ULONG QueueDisabled : 1;          // offset: 0x0 (0)
  ULONG MakeThreadsAsNecessary : 1; // offset: 0x0 (0)
  ULONG WaitMode : 1;               // offset: 0x0 (0)
  ULONG WorkerCount : 29;           // offset: 0x0 (0)
  LONG QueueWorkerInfo;             // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _WMI_BUFFER_STATE {
  ULONG Free : 1;    // offset: 0x0 (0)
  ULONG InUse : 1;   // offset: 0x0 (0)
  ULONG Flush : 1;   // offset: 0x0 (0)
  ULONG Unused : 29; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _GUID {
  ULONG Data1;    // offset: 0x0 (0)
  USHORT Data2;   // offset: 0x4 (4)
  USHORT Data3;   // offset: 0x6 (6)
  UCHAR Data4[8]; // offset: 0x8 (8)
};

// 0x4 (4) bytes
struct _WMI_LOGGER_MODE {
  ULONG SequentialFile : 1;    // offset: 0x0 (0)
  ULONG CircularFile : 1;      // offset: 0x0 (0)
  ULONG AppendFile : 1;        // offset: 0x0 (0)
  ULONG Unused1 : 5;           // offset: 0x0 (0)
  ULONG RealTime : 1;          // offset: 0x0 (0)
  ULONG DelayOpenFile : 1;     // offset: 0x0 (0)
  ULONG BufferOnly : 1;        // offset: 0x0 (0)
  ULONG PrivateLogger : 1;     // offset: 0x0 (0)
  ULONG AddHeader : 1;         // offset: 0x0 (0)
  ULONG UseExisting : 1;       // offset: 0x0 (0)
  ULONG UseGlobalSequence : 1; // offset: 0x0 (0)
  ULONG UseLocalSequence : 1;  // offset: 0x0 (0)
  ULONG Unused2 : 16;          // offset: 0x0 (0)
};

// 0x4c (76) bytes
struct _THERMAL_INFORMATION {
  ULONG ThermalStamp;         // offset: 0x0 (0)
  ULONG ThermalConstant1;     // offset: 0x4 (4)
  ULONG ThermalConstant2;     // offset: 0x8 (8)
  ULONG Processors;           // offset: 0xc (12)
  ULONG SamplingPeriod;       // offset: 0x10 (16)
  ULONG CurrentTemperature;   // offset: 0x14 (20)
  ULONG PassiveTripPoint;     // offset: 0x18 (24)
  ULONG CriticalTripPoint;    // offset: 0x1c (28)
  UCHAR ActiveTripPointCount; // offset: 0x20 (32)
  ULONG ActiveTripPoint[10];  // offset: 0x24 (36)
};

// 0x50 (80) bytes
struct _LDR_DATA_TABLE_ENTRY {
  struct _LIST_ENTRY InLoadOrderLinks;           // offset: 0x0 (0)
  struct _LIST_ENTRY InMemoryOrderLinks;         // offset: 0x8 (8)
  struct _LIST_ENTRY InInitializationOrderLinks; // offset: 0x10 (16)
  VOID *DllBase;                                 // offset: 0x18 (24)
  VOID *EntryPoint;                              // offset: 0x1c (28)
  ULONG SizeOfImage;                             // offset: 0x20 (32)
  struct _UNICODE_STRING FullDllName;            // offset: 0x24 (36)
  struct _UNICODE_STRING BaseDllName;            // offset: 0x2c (44)
  ULONG Flags;                                   // offset: 0x34 (52)
  USHORT LoadCount;                              // offset: 0x38 (56)
  USHORT TlsIndex;                               // offset: 0x3a (58)
  union {
    struct _LIST_ENTRY HashLinks; // offset: 0x3c (60)
    struct {
      VOID *SectionPointer; // offset: 0x3c (60)
      ULONG CheckSum;       // offset: 0x40 (64)
    };
  };
  union {
    ULONG TimeDateStamp; // offset: 0x44 (68)
    VOID *LoadedImports; // offset: 0x44 (68)
  };
  struct _ACTIVATION_CONTEXT *EntryPointActivationContext; // offset: 0x48 (72)
  VOID *PatchInformation;                                  // offset: 0x4c (76)
};

// 0x8 (8) bytes
struct _POOL_HEADER {
  union {
    struct {
      USHORT PreviousSize : 9; // offset: 0x0 (0)
      USHORT PoolIndex : 7;    // offset: 0x0 (0)
      USHORT BlockSize : 9;    // offset: 0x2 (2)
      USHORT PoolType : 7;     // offset: 0x2 (2)
    };
    ULONG Ulong1; // offset: 0x0 (0)
  };
  union {
    ULONG PoolTag; // offset: 0x4 (4)
    struct {
      USHORT AllocatorBackTraceIndex; // offset: 0x4 (4)
      USHORT PoolTagHash;             // offset: 0x6 (6)
    };
  };
};

// 0x10 (16) bytes
struct _POOL_BLOCK_HEAD {
  struct _POOL_HEADER Header; // offset: 0x0 (0)
  struct _LIST_ENTRY List;    // offset: 0x8 (8)
};

// 0xc (12) bytes
struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME {
  struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME *Previous; // offset: 0x0 (0)
  struct _ACTIVATION_CONTEXT *ActivationContext;        // offset: 0x4 (4)
  ULONG Flags;                                          // offset: 0x8 (8)
};

// 0xc (12) bytes
struct _TEB_ACTIVE_FRAME {
  ULONG Flags;                               // offset: 0x0 (0)
  struct _TEB_ACTIVE_FRAME *Previous;        // offset: 0x4 (4)
  struct _TEB_ACTIVE_FRAME_CONTEXT *Context; // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _ACTIVATION_CONTEXT_STACK {
  struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME *ActiveFrame; // offset: 0x0 (0)
  struct _LIST_ENTRY FrameListCache;                       // offset: 0x4 (4)
  ULONG Flags;                                             // offset: 0xc (12)
  ULONG NextCookieSequenceNumber;                          // offset: 0x10 (16)
  ULONG StackId;                                           // offset: 0x14 (20)
};

// 0x4e0 (1248) bytes
struct _GDI_TEB_BATCH {
  ULONG Offset;      // offset: 0x0 (0)
  ULONG HDC;         // offset: 0x4 (4)
  ULONG Buffer[310]; // offset: 0x8 (8)
};

// 0xc (12) bytes
struct _SECURITY_TOKEN_AUDIT_DATA {
  ULONG Length;    // offset: 0x0 (0)
  ULONG GrantMask; // offset: 0x4 (4)
  ULONG DenyMask;  // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _SECURITY_TOKEN_PROXY_DATA {
  ULONG Length;                    // offset: 0x0 (0)
  enum _PROXY_CLASS ProxyClass;    // offset: 0x4 (4)
  struct _UNICODE_STRING PathInfo; // offset: 0x8 (8)
  ULONG ContainerMask;             // offset: 0x10 (16)
  ULONG ObjectMask;                // offset: 0x14 (20)
};

// 0x8 (8) bytes
struct _SEP_AUDIT_POLICY_CATEGORIES {
  ULONG System : 4;                 // offset: 0x0 (0)
  ULONG Logon : 4;                  // offset: 0x0 (0)
  ULONG ObjectAccess : 4;           // offset: 0x0 (0)
  ULONG PrivilegeUse : 4;           // offset: 0x0 (0)
  ULONG DetailedTracking : 4;       // offset: 0x0 (0)
  ULONG PolicyChange : 4;           // offset: 0x0 (0)
  ULONG AccountManagement : 4;      // offset: 0x0 (0)
  ULONG DirectoryServiceAccess : 4; // offset: 0x0 (0)
  ULONG AccountLogon : 4;           // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _HEAP_PSEUDO_TAG_ENTRY {
  ULONG Allocs; // offset: 0x0 (0)
  ULONG Frees;  // offset: 0x4 (4)
  ULONG Size;   // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _HEAP_UNCOMMMTTED_RANGE {
  struct _HEAP_UNCOMMMTTED_RANGE *Next; // offset: 0x0 (0)
  ULONG Address;                        // offset: 0x4 (4)
  ULONG Size;                           // offset: 0x8 (8)
  ULONG filler;                         // offset: 0xc (12)
};

// 0x10 (16) bytes
struct _HEAP_UCR_SEGMENT {
  struct _HEAP_UCR_SEGMENT *Next; // offset: 0x0 (0)
  ULONG ReservedSize;             // offset: 0x4 (4)
  ULONG CommittedSize;            // offset: 0x8 (8)
  ULONG filler;                   // offset: 0xc (12)
};

// 0x40 (64) bytes
struct _HEAP_TAG_ENTRY {
  ULONG Allocs;                 // offset: 0x0 (0)
  ULONG Frees;                  // offset: 0x4 (4)
  ULONG Size;                   // offset: 0x8 (8)
  USHORT TagIndex;              // offset: 0xc (12)
  USHORT CreatorBackTraceIndex; // offset: 0xe (14)
  USHORT TagName[24];           // offset: 0x10 (16)
};

// 0x4 (4) bytes
struct _PRIVATE_CACHE_MAP_FLAGS {
  ULONG DontUse : 16;         // offset: 0x0 (0)
  ULONG ReadAheadActive : 1;  // offset: 0x0 (0)
  ULONG ReadAheadEnabled : 1; // offset: 0x0 (0)
  ULONG Available : 14;       // offset: 0x0 (0)
};

// 0x28 (40) bytes
struct _DBGKD_GET_VERSION32 {
  USHORT MajorVersion;            // offset: 0x0 (0)
  USHORT MinorVersion;            // offset: 0x2 (2)
  USHORT ProtocolVersion;         // offset: 0x4 (4)
  USHORT Flags;                   // offset: 0x6 (6)
  ULONG KernBase;                 // offset: 0x8 (8)
  ULONG PsLoadedModuleList;       // offset: 0xc (12)
  USHORT MachineType;             // offset: 0x10 (16)
  USHORT ThCallbackStack;         // offset: 0x12 (18)
  USHORT NextCallback;            // offset: 0x14 (20)
  USHORT FramePointer;            // offset: 0x16 (22)
  ULONG KiCallUserMode;           // offset: 0x18 (24)
  ULONG KeUserCallbackDispatcher; // offset: 0x1c (28)
  ULONG BreakpointWithStatus;     // offset: 0x20 (32)
  ULONG DebuggerDataList;         // offset: 0x24 (36)
};

// 0x10 (16) bytes
struct _X86_DBGKD_CONTROL_SET {
  ULONG TraceFlag;          // offset: 0x0 (0)
  ULONG Dr7;                // offset: 0x4 (4)
  ULONG CurrentSymbolStart; // offset: 0x8 (8)
  ULONG CurrentSymbolEnd;   // offset: 0xc (12)
};

// 0x4 (4) bytes
struct _DBGKD_SWITCH_PARTITION {
  ULONG Partition; // offset: 0x0 (0)
};

// 0x14 (20) bytes
struct _DBGKD_GET_SET_BUS_DATA {
  ULONG BusDataType; // offset: 0x0 (0)
  ULONG BusNumber;   // offset: 0x4 (4)
  ULONG SlotNumber;  // offset: 0x8 (8)
  ULONG Offset;      // offset: 0xc (12)
  ULONG Length;      // offset: 0x10 (16)
};

// 0xc (12) bytes
struct _DBGKD_READ_WRITE_MSR {
  ULONG Msr;           // offset: 0x0 (0)
  ULONG DataValueLow;  // offset: 0x4 (4)
  ULONG DataValueHigh; // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _DBGKD_BREAKPOINTEX {
  ULONG BreakPointCount; // offset: 0x0 (0)
  LONG ContinueStatus;   // offset: 0x4 (4)
};

// 0x4 (4) bytes
struct _DBGKD_QUERY_SPECIAL_CALLS {
  ULONG NumberOfSpecialCalls; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _DBGKD_RESTORE_BREAKPOINT {
  ULONG BreakPointHandle; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _DBGKD_SET_CONTEXT {
  ULONG ContextFlags; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _DBGKD_GET_CONTEXT {
  ULONG Unused; // offset: 0x0 (0)
};

// 0x1c (28) bytes
struct _DBGKD_GET_INTERNAL_BREAKPOINT32 {
  ULONG BreakpointAddress; // offset: 0x0 (0)
  ULONG Flags;             // offset: 0x4 (4)
  ULONG Calls;             // offset: 0x8 (8)
  ULONG MaxCallsPerPeriod; // offset: 0xc (12)
  ULONG MinInstructions;   // offset: 0x10 (16)
  ULONG MaxInstructions;   // offset: 0x14 (20)
  ULONG TotalInstructions; // offset: 0x18 (24)
};

// 0x8 (8) bytes
struct _DBGKD_SET_INTERNAL_BREAKPOINT32 {
  ULONG BreakpointAddress; // offset: 0x0 (0)
  ULONG Flags;             // offset: 0x4 (4)
};

// 0x4 (4) bytes
struct _DBGKD_SET_SPECIAL_CALL32 {
  ULONG SpecialCall; // offset: 0x0 (0)
};

// 0x18 (24) bytes
struct _DBGKD_READ_WRITE_IO_EXTENDED32 {
  ULONG DataSize;      // offset: 0x0 (0)
  ULONG InterfaceType; // offset: 0x4 (4)
  ULONG BusNumber;     // offset: 0x8 (8)
  ULONG AddressSpace;  // offset: 0xc (12)
  ULONG IoAddress;     // offset: 0x10 (16)
  ULONG DataValue;     // offset: 0x14 (20)
};

// 0xc (12) bytes
struct _DBGKD_READ_WRITE_IO32 {
  ULONG DataSize;  // offset: 0x0 (0)
  ULONG IoAddress; // offset: 0x4 (4)
  ULONG DataValue; // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _DBGKD_WRITE_BREAKPOINT32 {
  ULONG BreakPointAddress; // offset: 0x0 (0)
  ULONG BreakPointHandle;  // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _DBGKD_WRITE_MEMORY32 {
  ULONG TargetBaseAddress;  // offset: 0x0 (0)
  ULONG TransferCount;      // offset: 0x4 (4)
  ULONG ActualBytesWritten; // offset: 0x8 (8)
};

// 0xc (12) bytes
struct _DBGKD_READ_MEMORY32 {
  ULONG TargetBaseAddress; // offset: 0x0 (0)
  ULONG TransferCount;     // offset: 0x4 (4)
  ULONG ActualBytesRead;   // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _DBGKD_LOAD_SYMBOLS32 {
  ULONG PathNameLength; // offset: 0x0 (0)
  ULONG BaseOfDll;      // offset: 0x4 (4)
  ULONG ProcessId;      // offset: 0x8 (8)
  ULONG CheckSum;       // offset: 0xc (12)
  ULONG SizeOfImage;    // offset: 0x10 (16)
  UCHAR UnloadSymbols;  // offset: 0x14 (20)
};

// 0x88 (136) bytes
struct _MMPTE_FLUSH_LIST {
  ULONG Count;       // offset: 0x0 (0)
  VOID *FlushVa[33]; // offset: 0x4 (4)
};

// 0x4 (4) bytes
struct _SEGMENT_FLAGS {
  ULONG TotalNumberOfPtes4132 : 10;    // offset: 0x0 (0)
  ULONG ExtraSharedWowSubsections : 1; // offset: 0x0 (0)
  ULONG LargePages : 1;                // offset: 0x0 (0)
  ULONG Spare : 20;                    // offset: 0x0 (0)
};

// 0x18 (24) bytes
struct _EVENT_COUNTER {
  struct _SINGLE_LIST_ENTRY ListEntry; // offset: 0x0 (0)
  ULONG RefCount;                      // offset: 0x4 (4)
  struct _KEVENT Event;                // offset: 0x8 (8)
};

// 0x4 (4) bytes
struct _MMVAD_FLAGS {
  ULONG CommitCharge : 19; // offset: 0x0 (0)
  ULONG NoChange : 1;      // offset: 0x0 (0)
  ULONG VadType : 3;       // offset: 0x0 (0)
  ULONG MemCommit : 1;     // offset: 0x0 (0)
  ULONG Protection : 5;    // offset: 0x0 (0)
  ULONG Spare : 2;         // offset: 0x0 (0)
  ULONG PrivateMemory : 1; // offset: 0x0 (0)
};

// 0x18 (24) bytes
struct _MMVAD_SHORT {
  union {
    LONG Balance : 2;      // offset: 0x0 (0)
    struct _MMVAD *Parent; // offset: 0x0 (0)

  } u1;                      // offset: 0x0 (0)
  struct _MMVAD *LeftChild;  // offset: 0x4 (4)
  struct _MMVAD *RightChild; // offset: 0x8 (8)
  ULONG StartingVpn;         // offset: 0xc (12)
  ULONG EndingVpn;           // offset: 0x10 (16)
  union {
    ULONG LongFlags;              // offset: 0x14 (20)
    struct _MMVAD_FLAGS VadFlags; // offset: 0x14 (20)

  } u; // offset: 0x14 (20)
};

// 0x4 (4) bytes
struct _MMPTE_LIST {
  ULONG Valid : 1;      // offset: 0x0 (0)
  ULONG OneEntry : 1;   // offset: 0x0 (0)
  ULONG filler0 : 8;    // offset: 0x0 (0)
  ULONG Prototype : 1;  // offset: 0x0 (0)
  ULONG filler1 : 1;    // offset: 0x0 (0)
  ULONG NextEntry : 20; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MMPTE_SUBSECTION {
  ULONG Valid : 1;                  // offset: 0x0 (0)
  ULONG SubsectionAddressLow : 4;   // offset: 0x0 (0)
  ULONG Protection : 5;             // offset: 0x0 (0)
  ULONG Prototype : 1;              // offset: 0x0 (0)
  ULONG SubsectionAddressHigh : 20; // offset: 0x0 (0)
  ULONG WhichPool : 1;              // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MMPTE_TRANSITION {
  ULONG Valid : 1;            // offset: 0x0 (0)
  ULONG Write : 1;            // offset: 0x0 (0)
  ULONG Owner : 1;            // offset: 0x0 (0)
  ULONG WriteThrough : 1;     // offset: 0x0 (0)
  ULONG CacheDisable : 1;     // offset: 0x0 (0)
  ULONG Protection : 5;       // offset: 0x0 (0)
  ULONG Prototype : 1;        // offset: 0x0 (0)
  ULONG Transition : 1;       // offset: 0x0 (0)
  ULONG PageFrameNumber : 20; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MMPTE_SOFTWARE {
  ULONG Valid : 1;         // offset: 0x0 (0)
  ULONG PageFileLow : 4;   // offset: 0x0 (0)
  ULONG Protection : 5;    // offset: 0x0 (0)
  ULONG Prototype : 1;     // offset: 0x0 (0)
  ULONG Transition : 1;    // offset: 0x0 (0)
  ULONG PageFileHigh : 20; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MMPTE_PROTOTYPE {
  ULONG Valid : 1;             // offset: 0x0 (0)
  ULONG ProtoAddressLow : 7;   // offset: 0x0 (0)
  ULONG ReadOnly : 1;          // offset: 0x0 (0)
  ULONG WhichPool : 1;         // offset: 0x0 (0)
  ULONG Prototype : 1;         // offset: 0x0 (0)
  ULONG ProtoAddressHigh : 21; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MMPTE_HARDWARE {
  ULONG Valid : 1;            // offset: 0x0 (0)
  ULONG Writable : 1;         // offset: 0x0 (0)
  ULONG Owner : 1;            // offset: 0x0 (0)
  ULONG WriteThrough : 1;     // offset: 0x0 (0)
  ULONG CacheDisable : 1;     // offset: 0x0 (0)
  ULONG Accessed : 1;         // offset: 0x0 (0)
  ULONG Dirty : 1;            // offset: 0x0 (0)
  ULONG LargePage : 1;        // offset: 0x0 (0)
  ULONG Global : 1;           // offset: 0x0 (0)
  ULONG CopyOnWrite : 1;      // offset: 0x0 (0)
  ULONG Prototype : 1;        // offset: 0x0 (0)
  ULONG Write : 1;            // offset: 0x0 (0)
  ULONG PageFrameNumber : 20; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _OBJECT_HANDLE_INFORMATION {
  ULONG HandleAttributes; // offset: 0x0 (0)
  ULONG GrantedAccess;    // offset: 0x4 (4)
};

// 0x18 (24) bytes
struct _OBJECT_ATTRIBUTES {
  ULONG Length;                       // offset: 0x0 (0)
  VOID *RootDirectory;                // offset: 0x4 (4)
  struct _UNICODE_STRING *ObjectName; // offset: 0x8 (8)
  ULONG Attributes;                   // offset: 0xc (12)
  VOID *SecurityDescriptor;           // offset: 0x10 (16)
  VOID *SecurityQualityOfService;     // offset: 0x14 (20)
};

// 0xc (12) bytes
struct _OBJECT_DIRECTORY_ENTRY {
  struct _OBJECT_DIRECTORY_ENTRY *ChainLink; // offset: 0x0 (0)
  VOID *Object;                              // offset: 0x4 (4)
  ULONG HashValue;                           // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _OBJECT_HANDLE_COUNT_ENTRY {
  struct _EPROCESS *Process; // offset: 0x0 (0)
  ULONG HandleCount;         // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _OBJECT_HANDLE_COUNT_DATABASE {
  ULONG CountEntries;                                      // offset: 0x0 (0)
  struct _OBJECT_HANDLE_COUNT_ENTRY HandleCountEntries[1]; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _OBJECT_HEADER_HANDLE_INFO {
  union {
    struct _OBJECT_HANDLE_COUNT_DATABASE
        *HandleCountDataBase;                      // offset: 0x0 (0)
    struct _OBJECT_HANDLE_COUNT_ENTRY SingleEntry; // offset: 0x0 (0)
  };
};

// 0x10 (16) bytes
struct _OBJECT_HEADER_QUOTA_INFO {
  ULONG PagedPoolCharge;              // offset: 0x0 (0)
  ULONG NonPagedPoolCharge;           // offset: 0x4 (4)
  ULONG SecurityDescriptorCharge;     // offset: 0x8 (8)
  struct _EPROCESS *ExclusiveProcess; // offset: 0xc (12)
};

// 0x8 (8) bytes
struct _OBJECT_DUMP_CONTROL {
  VOID *Stream; // offset: 0x0 (0)
  ULONG Detail; // offset: 0x4 (4)
};

// 0x38 (56) bytes
struct _PLUGPLAY_EVENT_BLOCK {
  struct _GUID EventGuid;                      // offset: 0x0 (0)
  enum _PLUGPLAY_EVENT_CATEGORY EventCategory; // offset: 0x10 (16)
  ULONG *Result;                               // offset: 0x14 (20)
  ULONG Flags;                                 // offset: 0x18 (24)
  ULONG TotalSize;                             // offset: 0x1c (28)
  VOID *DeviceObject;                          // offset: 0x20 (32)
  union {
    struct {
      struct _GUID ClassGuid;     // offset: 0x0 (0)
      USHORT SymbolicLinkName[1]; // offset: 0x10 (16)
    } DeviceClass;                // offset: 0x24 (36)
    struct {
      USHORT DeviceIds[1]; // offset: 0x0 (0)
    } TargetDevice;        // offset: 0x24 (36)
    struct {
      USHORT DeviceId[1]; // offset: 0x0 (0)
    } InstallDevice;      // offset: 0x24 (36)
    struct {
      VOID *NotificationStructure; // offset: 0x0 (0)
      USHORT DeviceIds[1];         // offset: 0x4 (4)
    } CustomNotification;          // offset: 0x24 (36)
    struct {
      VOID *Notification;  // offset: 0x0 (0)
    } ProfileNotification; // offset: 0x24 (36)
    struct {
      ULONG NotificationCode; // offset: 0x0 (0)
      ULONG NotificationData; // offset: 0x4 (4)
    } PowerNotification;      // offset: 0x24 (36)
    struct {
      enum _PNP_VETO_TYPE VetoType;     // offset: 0x0 (0)
      USHORT DeviceIdVetoNameBuffer[1]; // offset: 0x4 (4)
    } VetoNotification;                 // offset: 0x24 (36)
    struct {
      struct _GUID BlockedDriverGuid; // offset: 0x0 (0)
    } BlockedDriverNotification;      // offset: 0x24 (36)
    struct {
      USHORT ParentId[1];    // offset: 0x0 (0)
    } InvalidIDNotification; // offset: 0x24 (36)

  } u; // offset: 0x24 (36)
};

// 0x58 (88) bytes
struct _PNP_DEVICE_EVENT_ENTRY {
  struct _LIST_ENTRY ListEntry;      // offset: 0x0 (0)
  ULONG Argument;                    // offset: 0x8 (8)
  struct _KEVENT *CallerEvent;       // offset: 0xc (12)
  VOID (*Callback)(VOID *arg1);      // offset: 0x10 (16)
  VOID *Context;                     // offset: 0x14 (20)
  enum _PNP_VETO_TYPE *VetoType;     // offset: 0x18 (24)
  struct _UNICODE_STRING *VetoName;  // offset: 0x1c (28)
  struct _PLUGPLAY_EVENT_BLOCK Data; // offset: 0x20 (32)
};

// 0x1e4 (484) bytes
struct _KINTERRUPT {
  SHORT Type;                            // offset: 0x0 (0)
  SHORT Size;                            // offset: 0x2 (2)
  struct _LIST_ENTRY InterruptListEntry; // offset: 0x4 (4)
  UCHAR(*ServiceRoutine)
  (struct _KINTERRUPT *arg1, VOID *arg2); // offset: 0xc (12)
  VOID *ServiceContext;                   // offset: 0x10 (16)
  ULONG SpinLock;                         // offset: 0x14 (20)
  ULONG TickCount;                        // offset: 0x18 (24)
  ULONG *ActualLock;                      // offset: 0x1c (28)
  VOID (*DispatchAddress)();              // offset: 0x20 (32)
  ULONG Vector;                           // offset: 0x24 (36)
  UCHAR Irql;                             // offset: 0x28 (40)
  UCHAR SynchronizeIrql;                  // offset: 0x29 (41)
  UCHAR FloatingSave;                     // offset: 0x2a (42)
  UCHAR Connected;                        // offset: 0x2b (43)
  CHAR Number;                            // offset: 0x2c (44)
  UCHAR ShareVector;                      // offset: 0x2d (45)
  enum _KINTERRUPT_MODE Mode;             // offset: 0x30 (48)
  ULONG ServiceCount;                     // offset: 0x34 (52)
  ULONG DispatchCount;                    // offset: 0x38 (56)
  ULONG DispatchCode[106];                // offset: 0x3c (60)
};

// 0x24 (36) bytes
struct _CM_VIEW_OF_FILE {
  struct _LIST_ENTRY LRUViewList; // offset: 0x0 (0)
  struct _LIST_ENTRY PinViewList; // offset: 0x8 (8)
  ULONG FileOffset;               // offset: 0x10 (16)
  ULONG Size;                     // offset: 0x14 (20)
  ULONG *ViewAddress;             // offset: 0x18 (24)
  VOID *Bcb;                      // offset: 0x1c (28)
  ULONG UseCount;                 // offset: 0x20 (32)
};

// 0x10 (16) bytes
struct _HMAP_ENTRY {
  ULONG BlockAddress;              // offset: 0x0 (0)
  ULONG BinAddress;                // offset: 0x4 (4)
  struct _CM_VIEW_OF_FILE *CmView; // offset: 0x8 (8)
  ULONG MemAlloc;                  // offset: 0xc (12)
};

// 0x2000 (8192) bytes
struct _HMAP_TABLE {
  struct _HMAP_ENTRY Table[512]; // offset: 0x0 (0)
};

// 0x1000 (4096) bytes
struct _HMAP_DIRECTORY {
  struct _HMAP_TABLE *Directory[1024]; // offset: 0x0 (0)
};

// 0x20 (32) bytes
struct _BITMAP_RANGE {
  struct _LIST_ENTRY Links; // offset: 0x0 (0)
  LONGLONG BasePage;        // offset: 0x8 (8)
  ULONG FirstDirtyPage;     // offset: 0x10 (16)
  ULONG LastDirtyPage;      // offset: 0x14 (20)
  ULONG DirtyPages;         // offset: 0x18 (24)
  ULONG *Bitmap;            // offset: 0x1c (28)
};

// 0x80 (128) bytes
struct _MBCB {
  SHORT NodeTypeCode;                // offset: 0x0 (0)
  SHORT NodeIsInZone;                // offset: 0x2 (2)
  ULONG PagesToWrite;                // offset: 0x4 (4)
  ULONG DirtyPages;                  // offset: 0x8 (8)
  ULONG Reserved;                    // offset: 0xc (12)
  struct _LIST_ENTRY BitmapRanges;   // offset: 0x10 (16)
  LONGLONG ResumeWritePage;          // offset: 0x18 (24)
  struct _BITMAP_RANGE BitmapRange1; // offset: 0x20 (32)
  struct _BITMAP_RANGE BitmapRange2; // offset: 0x40 (64)
  struct _BITMAP_RANGE BitmapRange3; // offset: 0x60 (96)
};

// 0x8 (8) bytes
struct _RTL_BITMAP {
  ULONG SizeOfBitMap; // offset: 0x0 (0)
  ULONG *Buffer;      // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _FREE_DISPLAY {
  ULONG RealVectorSize;       // offset: 0x0 (0)
  struct _RTL_BITMAP Display; // offset: 0x4 (4)
};

// 0x13c (316) bytes
struct _DUAL {
  ULONG Length;                         // offset: 0x0 (0)
  struct _HMAP_DIRECTORY *Map;          // offset: 0x4 (4)
  struct _HMAP_TABLE *SmallDir;         // offset: 0x8 (8)
  ULONG Guard;                          // offset: 0xc (12)
  struct _FREE_DISPLAY FreeDisplay[24]; // offset: 0x10 (16)
  ULONG FreeSummary;                    // offset: 0x130 (304)
  struct _LIST_ENTRY FreeBins;          // offset: 0x134 (308)
};

// 0x10 (16) bytes
struct _GENERIC_MAPPING {
  ULONG GenericRead;    // offset: 0x0 (0)
  ULONG GenericWrite;   // offset: 0x4 (4)
  ULONG GenericExecute; // offset: 0x8 (8)
  ULONG GenericAll;     // offset: 0xc (12)
};

// 0xc (12) bytes
struct _SECURITY_QUALITY_OF_SERVICE {
  ULONG Length;                                          // offset: 0x0 (0)
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // offset: 0x4 (4)
  UCHAR ContextTrackingMode;                             // offset: 0x8 (8)
  UCHAR EffectiveOnly;                                   // offset: 0x9 (9)
};

// 0x30 (48) bytes
struct _OBJECT_CREATE_INFORMATION {
  ULONG Attributes;                                 // offset: 0x0 (0)
  VOID *RootDirectory;                              // offset: 0x4 (4)
  VOID *ParseContext;                               // offset: 0x8 (8)
  CHAR ProbeMode;                                   // offset: 0xc (12)
  ULONG PagedPoolCharge;                            // offset: 0x10 (16)
  ULONG NonPagedPoolCharge;                         // offset: 0x14 (20)
  ULONG SecurityDescriptorCharge;                   // offset: 0x18 (24)
  VOID *SecurityDescriptor;                         // offset: 0x1c (28)
  struct _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // offset: 0x20 (32)
  struct _SECURITY_QUALITY_OF_SERVICE
      SecurityQualityOfService; // offset: 0x24 (36)
};

// 0xc (12) bytes
struct _POWER_SEQUENCE {
  ULONG SequenceD1; // offset: 0x0 (0)
  ULONG SequenceD2; // offset: 0x4 (4)
  ULONG SequenceD3; // offset: 0x8 (8)
};

// 0x40 (64) bytes
struct _DEVICE_CAPABILITIES {
  USHORT Size;                             // offset: 0x0 (0)
  USHORT Version;                          // offset: 0x2 (2)
  ULONG DeviceD1 : 1;                      // offset: 0x4 (4)
  ULONG DeviceD2 : 1;                      // offset: 0x4 (4)
  ULONG LockSupported : 1;                 // offset: 0x4 (4)
  ULONG EjectSupported : 1;                // offset: 0x4 (4)
  ULONG Removable : 1;                     // offset: 0x4 (4)
  ULONG DockDevice : 1;                    // offset: 0x4 (4)
  ULONG UniqueID : 1;                      // offset: 0x4 (4)
  ULONG SilentInstall : 1;                 // offset: 0x4 (4)
  ULONG RawDeviceOK : 1;                   // offset: 0x4 (4)
  ULONG SurpriseRemovalOK : 1;             // offset: 0x4 (4)
  ULONG WakeFromD0 : 1;                    // offset: 0x4 (4)
  ULONG WakeFromD1 : 1;                    // offset: 0x4 (4)
  ULONG WakeFromD2 : 1;                    // offset: 0x4 (4)
  ULONG WakeFromD3 : 1;                    // offset: 0x4 (4)
  ULONG HardwareDisabled : 1;              // offset: 0x4 (4)
  ULONG NonDynamic : 1;                    // offset: 0x4 (4)
  ULONG WarmEjectSupported : 1;            // offset: 0x4 (4)
  ULONG NoDisplayInUI : 1;                 // offset: 0x4 (4)
  ULONG Reserved : 14;                     // offset: 0x4 (4)
  ULONG Address;                           // offset: 0x8 (8)
  ULONG UINumber;                          // offset: 0xc (12)
  enum _DEVICE_POWER_STATE DeviceState[7]; // offset: 0x10 (16)
  enum _SYSTEM_POWER_STATE SystemWake;     // offset: 0x2c (44)
  enum _DEVICE_POWER_STATE DeviceWake;     // offset: 0x30 (48)
  ULONG D1Latency;                         // offset: 0x34 (52)
  ULONG D2Latency;                         // offset: 0x38 (56)
  ULONG D3Latency;                         // offset: 0x3c (60)
};

// 0x4 (4) bytes
struct _MMWSLENTRY {
  ULONG Valid : 1;              // offset: 0x0 (0)
  ULONG LockedInWs : 1;         // offset: 0x0 (0)
  ULONG LockedInMemory : 1;     // offset: 0x0 (0)
  ULONG Protection : 5;         // offset: 0x0 (0)
  ULONG Hashed : 1;             // offset: 0x0 (0)
  ULONG Direct : 1;             // offset: 0x0 (0)
  ULONG Age : 2;                // offset: 0x0 (0)
  ULONG VirtualPageNumber : 20; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MMWSLE {
  union {
    VOID *VirtualAddress;  // offset: 0x0 (0)
    ULONG Long;            // offset: 0x0 (0)
    struct _MMWSLENTRY e1; // offset: 0x0 (0)

  } u1; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _RTL_DRIVE_LETTER_CURDIR {
  USHORT Flags;           // offset: 0x0 (0)
  USHORT Length;          // offset: 0x2 (2)
  ULONG TimeStamp;        // offset: 0x4 (4)
  struct _STRING DosPath; // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _SID_AND_ATTRIBUTES {
  VOID *Sid;        // offset: 0x0 (0)
  ULONG Attributes; // offset: 0x4 (4)
};

// 0x50 (80) bytes
struct _HANDLE_TRACE_DB_ENTRY {
  struct _CLIENT_ID ClientId; // offset: 0x0 (0)
  VOID *Handle;               // offset: 0x8 (8)
  ULONG Type;                 // offset: 0xc (12)
  VOID *StackTrace[16];       // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _MMWSLE_HASH {
  VOID *Key;   // offset: 0x0 (0)
  ULONG Index; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _OWNER_ENTRY {
  ULONG OwnerThread; // offset: 0x0 (0)
  union {
    LONG OwnerCount; // offset: 0x4 (4)
    ULONG TableSize; // offset: 0x4 (4)
  };
};

// 0x14 (20) bytes
struct _POWER_CHANNEL_SUMMARY {
  ULONG Signature;               // offset: 0x0 (0)
  ULONG TotalCount;              // offset: 0x4 (4)
  ULONG D0Count;                 // offset: 0x8 (8)
  struct _LIST_ENTRY NotifyList; // offset: 0xc (12)
};

// 0x8 (8) bytes
struct _PEB_FREE_BLOCK {
  struct _PEB_FREE_BLOCK *Next; // offset: 0x0 (0)
  ULONG Size;                   // offset: 0x4 (4)
};

// 0x290 (656) bytes
struct _RTL_USER_PROCESS_PARAMETERS {
  ULONG MaximumLength;                                   // offset: 0x0 (0)
  ULONG Length;                                          // offset: 0x4 (4)
  ULONG Flags;                                           // offset: 0x8 (8)
  ULONG DebugFlags;                                      // offset: 0xc (12)
  VOID *ConsoleHandle;                                   // offset: 0x10 (16)
  ULONG ConsoleFlags;                                    // offset: 0x14 (20)
  VOID *StandardInput;                                   // offset: 0x18 (24)
  VOID *StandardOutput;                                  // offset: 0x1c (28)
  VOID *StandardError;                                   // offset: 0x20 (32)
  struct _CURDIR CurrentDirectory;                       // offset: 0x24 (36)
  struct _UNICODE_STRING DllPath;                        // offset: 0x30 (48)
  struct _UNICODE_STRING ImagePathName;                  // offset: 0x38 (56)
  struct _UNICODE_STRING CommandLine;                    // offset: 0x40 (64)
  VOID *Environment;                                     // offset: 0x48 (72)
  ULONG StartingX;                                       // offset: 0x4c (76)
  ULONG StartingY;                                       // offset: 0x50 (80)
  ULONG CountX;                                          // offset: 0x54 (84)
  ULONG CountY;                                          // offset: 0x58 (88)
  ULONG CountCharsX;                                     // offset: 0x5c (92)
  ULONG CountCharsY;                                     // offset: 0x60 (96)
  ULONG FillAttribute;                                   // offset: 0x64 (100)
  ULONG WindowFlags;                                     // offset: 0x68 (104)
  ULONG ShowWindowFlags;                                 // offset: 0x6c (108)
  struct _UNICODE_STRING WindowTitle;                    // offset: 0x70 (112)
  struct _UNICODE_STRING DesktopInfo;                    // offset: 0x78 (120)
  struct _UNICODE_STRING ShellInfo;                      // offset: 0x80 (128)
  struct _UNICODE_STRING RuntimeData;                    // offset: 0x88 (136)
  struct _RTL_DRIVE_LETTER_CURDIR CurrentDirectores[32]; // offset: 0x90 (144)
};

// 0x28 (40) bytes
struct _PEB_LDR_DATA {
  ULONG Length;                                       // offset: 0x0 (0)
  UCHAR Initialized;                                  // offset: 0x4 (4)
  VOID *SsHandle;                                     // offset: 0x8 (8)
  struct _LIST_ENTRY InLoadOrderModuleList;           // offset: 0xc (12)
  struct _LIST_ENTRY InMemoryOrderModuleList;         // offset: 0x14 (20)
  struct _LIST_ENTRY InInitializationOrderModuleList; // offset: 0x1c (28)
  VOID *EntryInProgress;                              // offset: 0x24 (36)
};

// 0x10 (16) bytes
struct _EPROCESS_QUOTA_ENTRY {
  ULONG Usage;  // offset: 0x0 (0)
  ULONG Limit;  // offset: 0x4 (4)
  ULONG Peak;   // offset: 0x8 (8)
  ULONG Return; // offset: 0xc (12)
};

// 0x4c (76) bytes
struct _DEVICE_OBJECT_POWER_EXTENSION {
  LONG IdleCount;                                    // offset: 0x0 (0)
  ULONG ConservationIdleTime;                        // offset: 0x4 (4)
  ULONG PerformanceIdleTime;                         // offset: 0x8 (8)
  struct _DEVICE_OBJECT *DeviceObject;               // offset: 0xc (12)
  struct _LIST_ENTRY IdleList;                       // offset: 0x10 (16)
  UCHAR DeviceType;                                  // offset: 0x18 (24)
  enum _DEVICE_POWER_STATE State;                    // offset: 0x1c (28)
  struct _LIST_ENTRY NotifySourceList;               // offset: 0x20 (32)
  struct _LIST_ENTRY NotifyTargetList;               // offset: 0x28 (40)
  struct _POWER_CHANNEL_SUMMARY PowerChannelSummary; // offset: 0x30 (48)
  struct _LIST_ENTRY Volume;                         // offset: 0x44 (68)
};

// 0x1c (28) bytes
struct _MDL {
  struct _MDL *Next;         // offset: 0x0 (0)
  SHORT Size;                // offset: 0x4 (4)
  SHORT MdlFlags;            // offset: 0x6 (6)
  struct _EPROCESS *Process; // offset: 0x8 (8)
  VOID *MappedSystemVa;      // offset: 0xc (12)
  VOID *StartVa;             // offset: 0x10 (16)
  ULONG ByteCount;           // offset: 0x14 (20)
  ULONG ByteOffset;          // offset: 0x18 (24)
};

// 0x698 (1688) bytes
struct _MMWSL {
  ULONG FirstFree;                   // offset: 0x0 (0)
  ULONG FirstDynamic;                // offset: 0x4 (4)
  ULONG LastEntry;                   // offset: 0x8 (8)
  ULONG NextSlot;                    // offset: 0xc (12)
  struct _MMWSLE *Wsle;              // offset: 0x10 (16)
  ULONG LastInitializedWsle;         // offset: 0x14 (20)
  ULONG NonDirectCount;              // offset: 0x18 (24)
  struct _MMWSLE_HASH *HashTable;    // offset: 0x1c (28)
  ULONG HashTableSize;               // offset: 0x20 (32)
  ULONG NumberOfCommittedPageTables; // offset: 0x24 (36)
  VOID *HashTableStart;              // offset: 0x28 (40)
  VOID *HighestPermittedHashAddress; // offset: 0x2c (44)
  ULONG NumberOfImageWaiters;        // offset: 0x30 (48)
  ULONG VadBitMapHint;               // offset: 0x34 (52)
  USHORT UsedPageTableEntries[768];  // offset: 0x38 (56)
  ULONG CommittedPageTables[24];     // offset: 0x638 (1592)
};

// 0x38 (56) bytes
struct _ERESOURCE {
  struct _LIST_ENTRY SystemResourcesList; // offset: 0x0 (0)
  struct _OWNER_ENTRY *OwnerTable;        // offset: 0x8 (8)
  SHORT ActiveCount;                      // offset: 0xc (12)
  USHORT Flag;                            // offset: 0xe (14)
  struct _KSEMAPHORE *SharedWaiters;      // offset: 0x10 (16)
  struct _KEVENT *ExclusiveWaiters;       // offset: 0x14 (20)
  struct _OWNER_ENTRY OwnerThreads[2];    // offset: 0x18 (24)
  ULONG ContentionCount;                  // offset: 0x28 (40)
  USHORT NumberOfSharedWaiters;           // offset: 0x2c (44)
  USHORT NumberOfExclusiveWaiters;        // offset: 0x2e (46)
  union {
    VOID *Address;               // offset: 0x30 (48)
    ULONG CreatorBackTraceIndex; // offset: 0x30 (48)
  };
  ULONG SpinLock; // offset: 0x34 (52)
};

// 0x10 (16) bytes
struct _KDEVICE_QUEUE_ENTRY {
  struct _LIST_ENTRY DeviceListEntry; // offset: 0x0 (0)
  ULONG SortKey;                      // offset: 0x8 (8)
  UCHAR Inserted;                     // offset: 0xc (12)
};

// 0x8 (8) bytes
struct _IO_STATUS_BLOCK {
  union {
    LONG Status;   // offset: 0x0 (0)
    VOID *Pointer; // offset: 0x0 (0)
  };
  ULONG Information; // offset: 0x4 (4)
};

// 0x14 (20) bytes
struct _MMADDRESS_NODE {
  union {
    LONG Balance : 2;               // offset: 0x0 (0)
    struct _MMADDRESS_NODE *Parent; // offset: 0x0 (0)

  } u1;                               // offset: 0x0 (0)
  struct _MMADDRESS_NODE *LeftChild;  // offset: 0x4 (4)
  struct _MMADDRESS_NODE *RightChild; // offset: 0x8 (8)
  ULONG StartingVpn;                  // offset: 0xc (12)
  ULONG EndingVpn;                    // offset: 0x10 (16)
};

// 0x18 (24) bytes
struct _PAGEFAULT_HISTORY {
  ULONG CurrentIndex;                                // offset: 0x0 (0)
  ULONG MaxIndex;                                    // offset: 0x4 (4)
  ULONG SpinLock;                                    // offset: 0x8 (8)
  VOID *Reserved;                                    // offset: 0xc (12)
  struct _PROCESS_WS_WATCH_INFORMATION WatchInfo[1]; // offset: 0x10 (16)
};

// 0x40 (64) bytes
struct _EPROCESS_QUOTA_BLOCK {
  struct _EPROCESS_QUOTA_ENTRY QuotaEntry[3]; // offset: 0x0 (0)
  struct _LIST_ENTRY QuotaList;               // offset: 0x30 (48)
  ULONG ReferenceCount;                       // offset: 0x38 (56)
  ULONG ProcessCount;                         // offset: 0x3c (60)
};

// 0x58 (88) bytes
struct _VPB {
  SHORT Type;                          // offset: 0x0 (0)
  SHORT Size;                          // offset: 0x2 (2)
  USHORT Flags;                        // offset: 0x4 (4)
  USHORT VolumeLabelLength;            // offset: 0x6 (6)
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x8 (8)
  struct _DEVICE_OBJECT *RealDevice;   // offset: 0xc (12)
  ULONG SerialNumber;                  // offset: 0x10 (16)
  ULONG ReferenceCount;                // offset: 0x14 (20)
  USHORT VolumeLabel[32];              // offset: 0x18 (24)
};

// 0x2c (44) bytes
struct _DEVOBJ_EXTENSION {
  SHORT Type;                                  // offset: 0x0 (0)
  USHORT Size;                                 // offset: 0x2 (2)
  struct _DEVICE_OBJECT *DeviceObject;         // offset: 0x4 (4)
  ULONG PowerFlags;                            // offset: 0x8 (8)
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // offset: 0xc (12)
  ULONG ExtensionFlags;                        // offset: 0x10 (16)
  VOID *DeviceNode;                            // offset: 0x14 (20)
  struct _DEVICE_OBJECT *AttachedTo;           // offset: 0x18 (24)
  LONG StartIoCount;                           // offset: 0x1c (28)
  LONG StartIoKey;                             // offset: 0x20 (32)
  ULONG StartIoFlags;                          // offset: 0x24 (36)
  struct _VPB *Vpb;                            // offset: 0x28 (40)
};

// 0x20 (32) bytes
struct _MM_AVL_TABLE {
  struct _MMADDRESS_NODE BalancedRoot;   // offset: 0x0 (0)
  ULONG DepthOfTree : 5;                 // offset: 0x14 (20)
  ULONG Unused : 3;                      // offset: 0x14 (20)
  ULONG NumberGenericTableElements : 24; // offset: 0x14 (20)
  VOID *NodeHint;                        // offset: 0x18 (24)
  VOID *NodeFreeHint;                    // offset: 0x1c (28)
};

// 0x4 (4) bytes
struct _HARDWARE_PTE {
  ULONG Valid : 1;            // offset: 0x0 (0)
  ULONG Write : 1;            // offset: 0x0 (0)
  ULONG Owner : 1;            // offset: 0x0 (0)
  ULONG WriteThrough : 1;     // offset: 0x0 (0)
  ULONG CacheDisable : 1;     // offset: 0x0 (0)
  ULONG Accessed : 1;         // offset: 0x0 (0)
  ULONG Dirty : 1;            // offset: 0x0 (0)
  ULONG LargePage : 1;        // offset: 0x0 (0)
  ULONG Global : 1;           // offset: 0x0 (0)
  ULONG CopyOnWrite : 1;      // offset: 0x0 (0)
  ULONG Prototype : 1;        // offset: 0x0 (0)
  ULONG reserved : 1;         // offset: 0x0 (0)
  ULONG PageFrameNumber : 20; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MMPTE {
  union {
    ULONG Long;                       // offset: 0x0 (0)
    struct _HARDWARE_PTE Flush;       // offset: 0x0 (0)
    struct _MMPTE_HARDWARE Hard;      // offset: 0x0 (0)
    struct _MMPTE_PROTOTYPE Proto;    // offset: 0x0 (0)
    struct _MMPTE_SOFTWARE Soft;      // offset: 0x0 (0)
    struct _MMPTE_TRANSITION Trans;   // offset: 0x0 (0)
    struct _MMPTE_SUBSECTION Subsect; // offset: 0x0 (0)
    struct _MMPTE_LIST List;          // offset: 0x0 (0)

  } u; // offset: 0x0 (0)
};

// 0x20 (32) bytes
struct _MMBANKED_SECTION {
  ULONG BasePhysicalPage;  // offset: 0x0 (0)
  struct _MMPTE *BasedPte; // offset: 0x4 (4)
  ULONG BankSize;          // offset: 0x8 (8)
  ULONG BankShift;         // offset: 0xc (12)
  VOID(*BankedRoutine)
  (ULONG arg1, ULONG arg2, VOID *arg3); // offset: 0x10 (16)
  VOID *Context;                        // offset: 0x14 (20)
  struct _MMPTE *CurrentMappedPte;      // offset: 0x18 (24)
  struct _MMPTE BankTemplate[1];        // offset: 0x1c (28)
};

// 0x20 (32) bytes
struct _MM_PAGED_POOL_INFO {
  struct _RTL_BITMAP *PagedPoolAllocationMap;  // offset: 0x0 (0)
  struct _RTL_BITMAP *EndOfPagedPoolBitmap;    // offset: 0x4 (4)
  struct _MMPTE *FirstPteForPagedPool;         // offset: 0x8 (8)
  struct _MMPTE *LastPteForPagedPool;          // offset: 0xc (12)
  struct _MMPTE *NextPdeForPagedPoolExpansion; // offset: 0x10 (16)
  ULONG PagedPoolHint;                         // offset: 0x14 (20)
  ULONG PagedPoolCommit;                       // offset: 0x18 (24)
  ULONG AllocatedPagedPool;                    // offset: 0x1c (28)
};

// 0x20 (32) bytes
struct _SUBSECTION {
  struct _CONTROL_AREA *ControlArea; // offset: 0x0 (0)
  union {
    ULONG LongFlags;                            // offset: 0x4 (4)
    struct _MMSUBSECTION_FLAGS SubsectionFlags; // offset: 0x4 (4)

  } u;                                // offset: 0x4 (4)
  ULONG StartingSector;               // offset: 0x8 (8)
  ULONG NumberOfFullSectors;          // offset: 0xc (12)
  struct _MMPTE *SubsectionBase;      // offset: 0x10 (16)
  ULONG UnusedPtes;                   // offset: 0x14 (20)
  ULONG PtesInSubsection;             // offset: 0x18 (24)
  struct _SUBSECTION *NextSubsection; // offset: 0x1c (28)
};

// 0x28 (40) bytes
struct _MMVAD {
  union {
    LONG Balance : 2;      // offset: 0x0 (0)
    struct _MMVAD *Parent; // offset: 0x0 (0)

  } u1;                      // offset: 0x0 (0)
  struct _MMVAD *LeftChild;  // offset: 0x4 (4)
  struct _MMVAD *RightChild; // offset: 0x8 (8)
  ULONG StartingVpn;         // offset: 0xc (12)
  ULONG EndingVpn;           // offset: 0x10 (16)
  union {
    ULONG LongFlags;              // offset: 0x14 (20)
    struct _MMVAD_FLAGS VadFlags; // offset: 0x14 (20)

  } u;                               // offset: 0x14 (20)
  struct _CONTROL_AREA *ControlArea; // offset: 0x18 (24)
  struct _MMPTE *FirstPrototypePte;  // offset: 0x1c (28)
  struct _MMPTE *LastContiguousPte;  // offset: 0x20 (32)
  union {
    ULONG LongFlags2;               // offset: 0x24 (36)
    struct _MMVAD_FLAGS2 VadFlags2; // offset: 0x24 (36)

  } u2; // offset: 0x24 (36)
};

// 0x18 (24) bytes
struct _MMPFN {
  union {
    ULONG Flink;                            // offset: 0x0 (0)
    ULONG WsIndex;                          // offset: 0x0 (0)
    struct _KEVENT *Event;                  // offset: 0x0 (0)
    LONG ReadStatus;                        // offset: 0x0 (0)
    struct _SINGLE_LIST_ENTRY NextStackPfn; // offset: 0x0 (0)

  } u1;                      // offset: 0x0 (0)
  struct _MMPTE *PteAddress; // offset: 0x4 (4)
  union {
    ULONG Blink;      // offset: 0x8 (8)
    ULONG ShareCount; // offset: 0x8 (8)

  } u2; // offset: 0x8 (8)
  union {
    struct {
      USHORT ReferenceCount; // offset: 0xc (12)
      struct _MMPFNENTRY e1; // offset: 0xe (14)
    };
    struct {
      USHORT ReferenceCount; // offset: 0x0 (0)
      USHORT ShortFlags;     // offset: 0x2 (2)
    } e2;                    // offset: 0xc (12)

  } u3; // offset: 0xc (12)
  union {
    struct _MMPTE OriginalPte; // offset: 0x10 (16)
    LONG AweReferenceCount;    // offset: 0x10 (16)
  };
  union {
    ULONG EntireFrame;            // offset: 0x14 (20)
    ULONG PteFrame : 25;          // offset: 0x14 (20)
    ULONG InPageError : 1;        // offset: 0x14 (20)
    ULONG VerifierAllocation : 1; // offset: 0x14 (20)
    ULONG AweAllocation : 1;      // offset: 0x14 (20)
    ULONG Priority : 3;           // offset: 0x14 (20)
    ULONG MustBeCached : 1;       // offset: 0x14 (20)

  } u4; // offset: 0x14 (20)
};

// 0x14 (20) bytes
struct _KDEVICE_QUEUE {
  SHORT Type;                        // offset: 0x0 (0)
  SHORT Size;                        // offset: 0x2 (2)
  struct _LIST_ENTRY DeviceListHead; // offset: 0x4 (4)
  ULONG Lock;                        // offset: 0xc (12)
  UCHAR Busy;                        // offset: 0x10 (16)
};

// 0x4 (4) bytes
struct _EX_PUSH_LOCK {
  union {
    struct {
      ULONG Locked : 1;         // offset: 0x0 (0)
      ULONG Waiting : 1;        // offset: 0x0 (0)
      ULONG Waking : 1;         // offset: 0x0 (0)
      ULONG MultipleShared : 1; // offset: 0x0 (0)
      ULONG Shared : 28;        // offset: 0x0 (0)
    };
    ULONG Value; // offset: 0x0 (0)
    VOID *Ptr;   // offset: 0x0 (0)
  };
};

// 0xa0 (160) bytes
struct _OBJECT_DIRECTORY {
  struct _OBJECT_DIRECTORY_ENTRY *HashBuckets[37]; // offset: 0x0 (0)
  struct _EX_PUSH_LOCK Lock;                       // offset: 0x94 (148)
  struct _DEVICE_MAP *DeviceMap;                   // offset: 0x98 (152)
  ULONG SessionId;                                 // offset: 0x9c (156)
};

// 0x30 (48) bytes
struct _DEVICE_MAP {
  struct _OBJECT_DIRECTORY *DosDevicesDirectory;       // offset: 0x0 (0)
  struct _OBJECT_DIRECTORY *GlobalDosDevicesDirectory; // offset: 0x4 (4)
  ULONG ReferenceCount;                                // offset: 0x8 (8)
  ULONG DriveMap;                                      // offset: 0xc (12)
  UCHAR DriveType[32];                                 // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _OBJECT_HEADER_NAME_INFO {
  struct _OBJECT_DIRECTORY *Directory; // offset: 0x0 (0)
  struct _UNICODE_STRING Name;         // offset: 0x4 (4)
  ULONG QueryReferences;               // offset: 0xc (12)
};

// 0x80 (128) bytes
struct _EX_PUSH_LOCK_CACHE_AWARE {
  struct _EX_PUSH_LOCK *Locks[32]; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _EX_FAST_REF {
  union {
    VOID *Object;     // offset: 0x0 (0)
    ULONG RefCnt : 3; // offset: 0x0 (0)
    ULONG Value;      // offset: 0x0 (0)
  };
};

// 0x4 (4) bytes
struct _EX_RUNDOWN_REF {
  union {
    ULONG Count; // offset: 0x0 (0)
    VOID *Ptr;   // offset: 0x0 (0)
  };
};

// 0x1c (28) bytes
struct _NT_TIB {
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // offset: 0x0 (0)
  VOID *StackBase;                                      // offset: 0x4 (4)
  VOID *StackLimit;                                     // offset: 0x8 (8)
  VOID *SubSystemTib;                                   // offset: 0xc (12)
  union {
    VOID *FiberData; // offset: 0x10 (16)
    ULONG Version;   // offset: 0x10 (16)
  };
  VOID *ArbitraryUserPointer; // offset: 0x14 (20)
  struct _NT_TIB *Self;       // offset: 0x18 (24)
};

// 0x50 (80) bytes
struct _EXCEPTION_RECORD32 {
  LONG ExceptionCode;             // offset: 0x0 (0)
  ULONG ExceptionFlags;           // offset: 0x4 (4)
  ULONG ExceptionRecord;          // offset: 0x8 (8)
  ULONG ExceptionAddress;         // offset: 0xc (12)
  ULONG NumberParameters;         // offset: 0x10 (16)
  ULONG ExceptionInformation[15]; // offset: 0x14 (20)
};

// 0x54 (84) bytes
struct _DBGKM_EXCEPTION32 {
  struct _EXCEPTION_RECORD32 ExceptionRecord; // offset: 0x0 (0)
  ULONG FirstChance;                          // offset: 0x50 (80)
};

// 0x50 (80) bytes
struct _EXCEPTION_RECORD {
  LONG ExceptionCode;                        // offset: 0x0 (0)
  ULONG ExceptionFlags;                      // offset: 0x4 (4)
  struct _EXCEPTION_RECORD *ExceptionRecord; // offset: 0x8 (8)
  VOID *ExceptionAddress;                    // offset: 0xc (12)
  ULONG NumberParameters;                    // offset: 0x10 (16)
  ULONG ExceptionInformation[15];            // offset: 0x14 (20)
};

// 0x8 (8) bytes
struct _KGDTENTRY {
  USHORT LimitLow; // offset: 0x0 (0)
  USHORT BaseLow;  // offset: 0x2 (2)
  union {
    struct {
      UCHAR BaseMid; // offset: 0x0 (0)
      UCHAR Flags1;  // offset: 0x1 (1)
      UCHAR Flags2;  // offset: 0x2 (2)
      UCHAR BaseHi;  // offset: 0x3 (3)
    } Bytes;         // offset: 0x4 (4)
    struct {
      ULONG BaseMid : 8;     // offset: 0x0 (0)
      ULONG Type : 5;        // offset: 0x0 (0)
      ULONG Dpl : 2;         // offset: 0x0 (0)
      ULONG Pres : 1;        // offset: 0x0 (0)
      ULONG LimitHi : 4;     // offset: 0x0 (0)
      ULONG Sys : 1;         // offset: 0x0 (0)
      ULONG Reserved_0 : 1;  // offset: 0x0 (0)
      ULONG Default_Big : 1; // offset: 0x0 (0)
      ULONG Granularity : 1; // offset: 0x0 (0)
      ULONG BaseHi : 8;      // offset: 0x0 (0)
    } Bits;                  // offset: 0x4 (4)

  } HighWord; // offset: 0x4 (4)
};

// 0x8c (140) bytes
struct _KTRAP_FRAME {
  ULONG DbgEbp;                                         // offset: 0x0 (0)
  ULONG DbgEip;                                         // offset: 0x4 (4)
  ULONG DbgArgMark;                                     // offset: 0x8 (8)
  ULONG DbgArgPointer;                                  // offset: 0xc (12)
  ULONG TempSegCs;                                      // offset: 0x10 (16)
  ULONG TempEsp;                                        // offset: 0x14 (20)
  ULONG Dr0;                                            // offset: 0x18 (24)
  ULONG Dr1;                                            // offset: 0x1c (28)
  ULONG Dr2;                                            // offset: 0x20 (32)
  ULONG Dr3;                                            // offset: 0x24 (36)
  ULONG Dr6;                                            // offset: 0x28 (40)
  ULONG Dr7;                                            // offset: 0x2c (44)
  ULONG SegGs;                                          // offset: 0x30 (48)
  ULONG SegEs;                                          // offset: 0x34 (52)
  ULONG SegDs;                                          // offset: 0x38 (56)
  ULONG Edx;                                            // offset: 0x3c (60)
  ULONG Ecx;                                            // offset: 0x40 (64)
  ULONG Eax;                                            // offset: 0x44 (68)
  ULONG PreviousPreviousMode;                           // offset: 0x48 (72)
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // offset: 0x4c (76)
  ULONG SegFs;                                          // offset: 0x50 (80)
  ULONG Edi;                                            // offset: 0x54 (84)
  ULONG Esi;                                            // offset: 0x58 (88)
  ULONG Ebx;                                            // offset: 0x5c (92)
  ULONG Ebp;                                            // offset: 0x60 (96)
  ULONG ErrCode;                                        // offset: 0x64 (100)
  ULONG Eip;                                            // offset: 0x68 (104)
  ULONG SegCs;                                          // offset: 0x6c (108)
  ULONG EFlags;                                         // offset: 0x70 (112)
  ULONG HardwareEsp;                                    // offset: 0x74 (116)
  ULONG HardwareSegSs;                                  // offset: 0x78 (120)
  ULONG V86Es;                                          // offset: 0x7c (124)
  ULONG V86Ds;                                          // offset: 0x80 (128)
  ULONG V86Fs;                                          // offset: 0x84 (132)
  ULONG V86Gs;                                          // offset: 0x88 (136)
};

// 0x28 (40) bytes
struct _KQUEUE {
  struct _DISPATCHER_HEADER Header;  // offset: 0x0 (0)
  struct _LIST_ENTRY EntryListHead;  // offset: 0x10 (16)
  ULONG CurrentCount;                // offset: 0x18 (24)
  ULONG MaximumCount;                // offset: 0x1c (28)
  struct _LIST_ENTRY ThreadListHead; // offset: 0x20 (32)
};

// 0x3c (60) bytes
struct _EX_WORK_QUEUE {
  struct _KQUEUE WorkerQueue;       // offset: 0x0 (0)
  ULONG DynamicThreadCount;         // offset: 0x28 (40)
  ULONG WorkItemsProcessed;         // offset: 0x2c (44)
  ULONG WorkItemsProcessedLastPass; // offset: 0x30 (48)
  ULONG QueueDepthLastPass;         // offset: 0x34 (52)
  union EX_QUEUE_WORKER_INFO Info;  // offset: 0x38 (56)
};

// 0x38 (56) bytes
struct _IMAGE_ROM_OPTIONAL_HEADER {
  USHORT Magic;                  // offset: 0x0 (0)
  UCHAR MajorLinkerVersion;      // offset: 0x2 (2)
  UCHAR MinorLinkerVersion;      // offset: 0x3 (3)
  ULONG SizeOfCode;              // offset: 0x4 (4)
  ULONG SizeOfInitializedData;   // offset: 0x8 (8)
  ULONG SizeOfUninitializedData; // offset: 0xc (12)
  ULONG AddressOfEntryPoint;     // offset: 0x10 (16)
  ULONG BaseOfCode;              // offset: 0x14 (20)
  ULONG BaseOfData;              // offset: 0x18 (24)
  ULONG BaseOfBss;               // offset: 0x1c (28)
  ULONG GprMask;                 // offset: 0x20 (32)
  ULONG CprMask[4];              // offset: 0x24 (36)
  ULONG GpValue;                 // offset: 0x34 (52)
};

// 0x20ac (8364) bytes
struct _KTSS {
  USHORT Backlink;                 // offset: 0x0 (0)
  USHORT Reserved0;                // offset: 0x2 (2)
  ULONG Esp0;                      // offset: 0x4 (4)
  USHORT Ss0;                      // offset: 0x8 (8)
  USHORT Reserved1;                // offset: 0xa (10)
  ULONG NotUsed1[4];               // offset: 0xc (12)
  ULONG CR3;                       // offset: 0x1c (28)
  ULONG Eip;                       // offset: 0x20 (32)
  ULONG EFlags;                    // offset: 0x24 (36)
  ULONG Eax;                       // offset: 0x28 (40)
  ULONG Ecx;                       // offset: 0x2c (44)
  ULONG Edx;                       // offset: 0x30 (48)
  ULONG Ebx;                       // offset: 0x34 (52)
  ULONG Esp;                       // offset: 0x38 (56)
  ULONG Ebp;                       // offset: 0x3c (60)
  ULONG Esi;                       // offset: 0x40 (64)
  ULONG Edi;                       // offset: 0x44 (68)
  USHORT Es;                       // offset: 0x48 (72)
  USHORT Reserved2;                // offset: 0x4a (74)
  USHORT Cs;                       // offset: 0x4c (76)
  USHORT Reserved3;                // offset: 0x4e (78)
  USHORT Ss;                       // offset: 0x50 (80)
  USHORT Reserved4;                // offset: 0x52 (82)
  USHORT Ds;                       // offset: 0x54 (84)
  USHORT Reserved5;                // offset: 0x56 (86)
  USHORT Fs;                       // offset: 0x58 (88)
  USHORT Reserved6;                // offset: 0x5a (90)
  USHORT Gs;                       // offset: 0x5c (92)
  USHORT Reserved7;                // offset: 0x5e (94)
  USHORT LDT;                      // offset: 0x60 (96)
  USHORT Reserved8;                // offset: 0x62 (98)
  USHORT Flags;                    // offset: 0x64 (100)
  USHORT IoMapBase;                // offset: 0x66 (102)
  struct _KiIoAccessMap IoMaps[1]; // offset: 0x68 (104)
  UCHAR IntDirectionMap[32];       // offset: 0x208c (8332)
};

// 0x208 (520) bytes
struct _FXSAVE_FORMAT {
  USHORT ControlWord;      // offset: 0x0 (0)
  USHORT StatusWord;       // offset: 0x2 (2)
  USHORT TagWord;          // offset: 0x4 (4)
  USHORT ErrorOpcode;      // offset: 0x6 (6)
  ULONG ErrorOffset;       // offset: 0x8 (8)
  ULONG ErrorSelector;     // offset: 0xc (12)
  ULONG DataOffset;        // offset: 0x10 (16)
  ULONG DataSelector;      // offset: 0x14 (20)
  ULONG MXCsr;             // offset: 0x18 (24)
  ULONG MXCsrMask;         // offset: 0x1c (28)
  UCHAR RegisterArea[128]; // offset: 0x20 (32)
  UCHAR Reserved3[128];    // offset: 0xa0 (160)
  UCHAR Reserved4[224];    // offset: 0x120 (288)
  UCHAR Align16Byte[8];    // offset: 0x200 (512)
};

// 0x6c (108) bytes
struct _FNSAVE_FORMAT {
  ULONG ControlWord;      // offset: 0x0 (0)
  ULONG StatusWord;       // offset: 0x4 (4)
  ULONG TagWord;          // offset: 0x8 (8)
  ULONG ErrorOffset;      // offset: 0xc (12)
  ULONG ErrorSelector;    // offset: 0x10 (16)
  ULONG DataOffset;       // offset: 0x14 (20)
  ULONG DataSelector;     // offset: 0x18 (24)
  UCHAR RegisterArea[80]; // offset: 0x1c (28)
};

// 0x30 (48) bytes
struct _PCI_HEADER_TYPE_1 {
  ULONG BaseAddresses[2];     // offset: 0x0 (0)
  UCHAR PrimaryBus;           // offset: 0x8 (8)
  UCHAR SecondaryBus;         // offset: 0x9 (9)
  UCHAR SubordinateBus;       // offset: 0xa (10)
  UCHAR SecondaryLatency;     // offset: 0xb (11)
  UCHAR IOBase;               // offset: 0xc (12)
  UCHAR IOLimit;              // offset: 0xd (13)
  USHORT SecondaryStatus;     // offset: 0xe (14)
  USHORT MemoryBase;          // offset: 0x10 (16)
  USHORT MemoryLimit;         // offset: 0x12 (18)
  USHORT PrefetchBase;        // offset: 0x14 (20)
  USHORT PrefetchLimit;       // offset: 0x16 (22)
  ULONG PrefetchBaseUpper32;  // offset: 0x18 (24)
  ULONG PrefetchLimitUpper32; // offset: 0x1c (28)
  USHORT IOBaseUpper16;       // offset: 0x20 (32)
  USHORT IOLimitUpper16;      // offset: 0x22 (34)
  UCHAR CapabilitiesPtr;      // offset: 0x24 (36)
  UCHAR Reserved1[3];         // offset: 0x25 (37)
  ULONG ROMBaseAddress;       // offset: 0x28 (40)
  UCHAR InterruptLine;        // offset: 0x2c (44)
  UCHAR InterruptPin;         // offset: 0x2d (45)
  USHORT BridgeControl;       // offset: 0x2e (46)
};

// 0x20 (32) bytes
struct _RTL_HANDLE_TABLE {
  ULONG MaximumNumberOfHandles;                       // offset: 0x0 (0)
  ULONG SizeOfHandleTableEntry;                       // offset: 0x4 (4)
  ULONG Reserved[2];                                  // offset: 0x8 (8)
  struct _RTL_HANDLE_TABLE_ENTRY *FreeHandles;        // offset: 0x10 (16)
  struct _RTL_HANDLE_TABLE_ENTRY *CommittedHandles;   // offset: 0x14 (20)
  struct _RTL_HANDLE_TABLE_ENTRY *UnCommittedHandles; // offset: 0x18 (24)
  struct _RTL_HANDLE_TABLE_ENTRY *MaxReservedHandles; // offset: 0x1c (28)
};

// 0x70 (112) bytes
struct _MM_DRIVER_VERIFIER_DATA {
  ULONG Level;                              // offset: 0x0 (0)
  ULONG RaiseIrqls;                         // offset: 0x4 (4)
  ULONG AcquireSpinLocks;                   // offset: 0x8 (8)
  ULONG SynchronizeExecutions;              // offset: 0xc (12)
  ULONG AllocationsAttempted;               // offset: 0x10 (16)
  ULONG AllocationsSucceeded;               // offset: 0x14 (20)
  ULONG AllocationsSucceededSpecialPool;    // offset: 0x18 (24)
  ULONG AllocationsWithNoTag;               // offset: 0x1c (28)
  ULONG TrimRequests;                       // offset: 0x20 (32)
  ULONG Trims;                              // offset: 0x24 (36)
  ULONG AllocationsFailed;                  // offset: 0x28 (40)
  ULONG AllocationsFailedDeliberately;      // offset: 0x2c (44)
  ULONG Loads;                              // offset: 0x30 (48)
  ULONG Unloads;                            // offset: 0x34 (52)
  ULONG UnTrackedPool;                      // offset: 0x38 (56)
  ULONG UserTrims;                          // offset: 0x3c (60)
  ULONG CurrentPagedPoolAllocations;        // offset: 0x40 (64)
  ULONG CurrentNonPagedPoolAllocations;     // offset: 0x44 (68)
  ULONG PeakPagedPoolAllocations;           // offset: 0x48 (72)
  ULONG PeakNonPagedPoolAllocations;        // offset: 0x4c (76)
  ULONG PagedBytes;                         // offset: 0x50 (80)
  ULONG NonPagedBytes;                      // offset: 0x54 (84)
  ULONG PeakPagedBytes;                     // offset: 0x58 (88)
  ULONG PeakNonPagedBytes;                  // offset: 0x5c (92)
  ULONG BurstAllocationsFailedDeliberately; // offset: 0x60 (96)
  ULONG SessionTrims;                       // offset: 0x64 (100)
  ULONG Reserved[2];                        // offset: 0x68 (104)
};

// 0x128 (296) bytes
struct _VI_DEADLOCK_GLOBALS {
  ULONG Nodes[2];                            // offset: 0x0 (0)
  ULONG Resources[2];                        // offset: 0x8 (8)
  ULONG Threads[2];                          // offset: 0x10 (16)
  LONGLONG TimeAcquire;                      // offset: 0x18 (24)
  LONGLONG TimeRelease;                      // offset: 0x20 (32)
  ULONG BytesAllocated;                      // offset: 0x28 (40)
  struct _LIST_ENTRY *ResourceDatabase;      // offset: 0x2c (44)
  struct _LIST_ENTRY *ThreadDatabase;        // offset: 0x30 (48)
  ULONG AllocationFailures;                  // offset: 0x34 (52)
  ULONG NodesTrimmedBasedOnAge;              // offset: 0x38 (56)
  ULONG NodesTrimmedBasedOnCount;            // offset: 0x3c (60)
  ULONG NodesSearched;                       // offset: 0x40 (64)
  ULONG MaxNodesSearched;                    // offset: 0x44 (68)
  ULONG SequenceNumber;                      // offset: 0x48 (72)
  ULONG RecursionDepthLimit;                 // offset: 0x4c (76)
  ULONG SearchedNodesLimit;                  // offset: 0x50 (80)
  ULONG DepthLimitHits;                      // offset: 0x54 (84)
  ULONG SearchLimitHits;                     // offset: 0x58 (88)
  ULONG ABC_ACB_Skipped;                     // offset: 0x5c (92)
  ULONG OutOfOrderReleases;                  // offset: 0x60 (96)
  ULONG NodesReleasedOutOfOrder;             // offset: 0x64 (100)
  ULONG TotalReleases;                       // offset: 0x68 (104)
  ULONG RootNodesDeleted;                    // offset: 0x6c (108)
  ULONG ForgetHistoryCounter;                // offset: 0x70 (112)
  ULONG PoolTrimCounter;                     // offset: 0x74 (116)
  struct _LIST_ENTRY FreeResourceList;       // offset: 0x78 (120)
  struct _LIST_ENTRY FreeThreadList;         // offset: 0x80 (128)
  struct _LIST_ENTRY FreeNodeList;           // offset: 0x88 (136)
  ULONG FreeResourceCount;                   // offset: 0x90 (144)
  ULONG FreeThreadCount;                     // offset: 0x94 (148)
  ULONG FreeNodeCount;                       // offset: 0x98 (152)
  VOID *Instigator;                          // offset: 0x9c (156)
  ULONG NumberOfParticipants;                // offset: 0xa0 (160)
  struct _VI_DEADLOCK_NODE *Participant[32]; // offset: 0xa4 (164)
  ULONG CacheReductionInProgress;            // offset: 0x124 (292)
};

// 0x20 (32) bytes
struct _HEAP_SUBSEGMENT {
  VOID *Bucket;                             // offset: 0x0 (0)
  struct _HEAP_USERDATA_HEADER *UserBlocks; // offset: 0x4 (4)
  struct _INTERLOCK_SEQ AggregateExchg;     // offset: 0x8 (8)
  union {
    struct {
      USHORT BlockSize;     // offset: 0x10 (16)
      USHORT FreeThreshold; // offset: 0x12 (18)
      USHORT BlockCount;    // offset: 0x14 (20)
      UCHAR SizeIndex;      // offset: 0x16 (22)
      UCHAR AffinityIndex;  // offset: 0x17 (23)
    };
    ULONG Alignment[2]; // offset: 0x10 (16)
  };
  struct _SINGLE_LIST_ENTRY SFreeListEntry; // offset: 0x18 (24)
  volatile ULONG Lock;                      // offset: 0x1c (28)
};

// 0x10 (16) bytes
struct _HEAP_USERDATA_HEADER {
  union {
    struct _SINGLE_LIST_ENTRY SFreeListEntry; // offset: 0x0 (0)
    struct _HEAP_SUBSEGMENT *SubSegment;      // offset: 0x0 (0)
  };
  VOID *HeapHandle; // offset: 0x4 (4)
  ULONG SizeIndex;  // offset: 0x8 (8)
  ULONG Signature;  // offset: 0xc (12)
};

// 0x20 (32) bytes
struct _RTL_CRITICAL_SECTION_DEBUG {
  USHORT Type;                                   // offset: 0x0 (0)
  USHORT CreatorBackTraceIndex;                  // offset: 0x2 (2)
  struct _RTL_CRITICAL_SECTION *CriticalSection; // offset: 0x4 (4)
  struct _LIST_ENTRY ProcessLocksList;           // offset: 0x8 (8)
  ULONG EntryCount;                              // offset: 0x10 (16)
  ULONG ContentionCount;                         // offset: 0x14 (20)
  ULONG Spare[2];                                // offset: 0x18 (24)
};

// 0x18 (24) bytes
struct _RTL_CRITICAL_SECTION {
  struct _RTL_CRITICAL_SECTION_DEBUG *DebugInfo; // offset: 0x0 (0)
  LONG LockCount;                                // offset: 0x4 (4)
  LONG RecursionCount;                           // offset: 0x8 (8)
  VOID *OwningThread;                            // offset: 0xc (12)
  VOID *LockSemaphore;                           // offset: 0x10 (16)
  ULONG SpinCount;                               // offset: 0x14 (20)
};

// 0x44 (68) bytes
struct _RTL_ATOM_TABLE {
  ULONG Signature;                              // offset: 0x0 (0)
  struct _RTL_CRITICAL_SECTION CriticalSection; // offset: 0x4 (4)
  struct _RTL_HANDLE_TABLE RtlHandleTable;      // offset: 0x1c (28)
  ULONG NumberOfBuckets;                        // offset: 0x3c (60)
  struct _RTL_ATOM_TABLE_ENTRY *Buckets[1];     // offset: 0x40 (64)
};

// 0x38 (56) bytes
struct _HEAP_LOCK {
  union {
    struct _RTL_CRITICAL_SECTION CriticalSection; // offset: 0x0 (0)
    struct _ERESOURCE Resource;                   // offset: 0x0 (0)

  } Lock; // offset: 0x0 (0)
};

// 0x588 (1416) bytes
struct _HEAP {
  struct _HEAP_ENTRY Entry;                                // offset: 0x0 (0)
  ULONG Signature;                                         // offset: 0x8 (8)
  ULONG Flags;                                             // offset: 0xc (12)
  ULONG ForceFlags;                                        // offset: 0x10 (16)
  ULONG VirtualMemoryThreshold;                            // offset: 0x14 (20)
  ULONG SegmentReserve;                                    // offset: 0x18 (24)
  ULONG SegmentCommit;                                     // offset: 0x1c (28)
  ULONG DeCommitFreeBlockThreshold;                        // offset: 0x20 (32)
  ULONG DeCommitTotalFreeThreshold;                        // offset: 0x24 (36)
  ULONG TotalFreeSize;                                     // offset: 0x28 (40)
  ULONG MaximumAllocationSize;                             // offset: 0x2c (44)
  USHORT ProcessHeapsListIndex;                            // offset: 0x30 (48)
  USHORT HeaderValidateLength;                             // offset: 0x32 (50)
  VOID *HeaderValidateCopy;                                // offset: 0x34 (52)
  USHORT NextAvailableTagIndex;                            // offset: 0x38 (56)
  USHORT MaximumTagIndex;                                  // offset: 0x3a (58)
  struct _HEAP_TAG_ENTRY *TagEntries;                      // offset: 0x3c (60)
  struct _HEAP_UCR_SEGMENT *UCRSegments;                   // offset: 0x40 (64)
  struct _HEAP_UNCOMMMTTED_RANGE *UnusedUnCommittedRanges; // offset: 0x44 (68)
  ULONG AlignRound;                                        // offset: 0x48 (72)
  ULONG AlignMask;                                         // offset: 0x4c (76)
  struct _LIST_ENTRY VirtualAllocdBlocks;                  // offset: 0x50 (80)
  struct _HEAP_SEGMENT *Segments[64];                      // offset: 0x58 (88)
  union {
    ULONG FreeListsInUseUlong[4];  // offset: 0x158 (344)
    UCHAR FreeListsInUseBytes[16]; // offset: 0x158 (344)

  } u; // offset: 0x158 (344)
  union {
    USHORT FreeListsInUseTerminate; // offset: 0x168 (360)
    USHORT DecommitCount;           // offset: 0x168 (360)

  } u2;                                            // offset: 0x168 (360)
  USHORT AllocatorBackTraceIndex;                  // offset: 0x16a (362)
  ULONG NonDedicatedListLength;                    // offset: 0x16c (364)
  VOID *LargeBlocksIndex;                          // offset: 0x170 (368)
  struct _HEAP_PSEUDO_TAG_ENTRY *PseudoTagEntries; // offset: 0x174 (372)
  struct _LIST_ENTRY FreeLists[128];               // offset: 0x178 (376)
  struct _HEAP_LOCK *LockVariable;                 // offset: 0x578 (1400)
  LONG(*CommitRoutine)
  (VOID *arg1, VOID **arg2, ULONG *arg3); // offset: 0x57c (1404)
  VOID *FrontEndHeap;                     // offset: 0x580 (1408)
  USHORT FrontHeapLockCount;              // offset: 0x584 (1412)
  UCHAR FrontEndHeapType;                 // offset: 0x586 (1414)
  UCHAR LastSegmentIndex;                 // offset: 0x587 (1415)
};

// 0x3c (60) bytes
struct _HEAP_SEGMENT {
  struct _HEAP_ENTRY Entry;                          // offset: 0x0 (0)
  ULONG Signature;                                   // offset: 0x8 (8)
  ULONG Flags;                                       // offset: 0xc (12)
  struct _HEAP *Heap;                                // offset: 0x10 (16)
  ULONG LargestUnCommittedRange;                     // offset: 0x14 (20)
  VOID *BaseAddress;                                 // offset: 0x18 (24)
  ULONG NumberOfPages;                               // offset: 0x1c (28)
  struct _HEAP_ENTRY *FirstEntry;                    // offset: 0x20 (32)
  struct _HEAP_ENTRY *LastValidEntry;                // offset: 0x24 (36)
  ULONG NumberOfUnCommittedPages;                    // offset: 0x28 (40)
  ULONG NumberOfUnCommittedRanges;                   // offset: 0x2c (44)
  struct _HEAP_UNCOMMMTTED_RANGE *UnCommittedRanges; // offset: 0x30 (48)
  USHORT AllocatorBackTraceIndex;                    // offset: 0x34 (52)
  USHORT Reserved;                                   // offset: 0x36 (54)
  struct _HEAP_ENTRY *LastEntryInSegment;            // offset: 0x38 (56)
};

// 0x78 (120) bytes
struct _KPROCESS {
  struct _DISPATCHER_HEADER Header;        // offset: 0x0 (0)
  struct _LIST_ENTRY ProfileListHead;      // offset: 0x10 (16)
  ULONG DirectoryTableBase[2];             // offset: 0x18 (24)
  struct _KGDTENTRY LdtDescriptor;         // offset: 0x20 (32)
  struct _KIDTENTRY Int21Descriptor;       // offset: 0x28 (40)
  USHORT IopmOffset;                       // offset: 0x30 (48)
  UCHAR Iopl;                              // offset: 0x32 (50)
  UCHAR Unused;                            // offset: 0x33 (51)
  volatile ULONG ActiveProcessors;         // offset: 0x34 (52)
  ULONG KernelTime;                        // offset: 0x38 (56)
  ULONG UserTime;                          // offset: 0x3c (60)
  struct _LIST_ENTRY ReadyListHead;        // offset: 0x40 (64)
  struct _SINGLE_LIST_ENTRY SwapListEntry; // offset: 0x48 (72)
  VOID *VdmTrapcHandler;                   // offset: 0x4c (76)
  struct _LIST_ENTRY ThreadListHead;       // offset: 0x50 (80)
  ULONG ProcessLock;                       // offset: 0x58 (88)
  ULONG Affinity;                          // offset: 0x5c (92)
  union {
    struct {
      LONG AutoAlignment : 1;  // offset: 0x60 (96)
      LONG DisableBoost : 1;   // offset: 0x60 (96)
      LONG DisableQuantum : 1; // offset: 0x60 (96)
      LONG ReservedFlags : 29; // offset: 0x60 (96)
    };
    LONG ProcessFlags; // offset: 0x60 (96)
  };
  CHAR BasePriority; // offset: 0x64 (100)
  CHAR QuantumReset; // offset: 0x65 (101)
  UCHAR State;       // offset: 0x66 (102)
  UCHAR ThreadSeed;  // offset: 0x67 (103)
  UCHAR PowerState;  // offset: 0x68 (104)
  UCHAR IdealNode;   // offset: 0x69 (105)
  UCHAR Visited;     // offset: 0x6a (106)
  union {
    struct _KEXECUTE_OPTIONS Flags; // offset: 0x6b (107)
    UCHAR ExecuteOptions;           // offset: 0x6b (107)
  };
  ULONG StackCount;                    // offset: 0x6c (108)
  struct _LIST_ENTRY ProcessListEntry; // offset: 0x70 (112)
};

// 0x18 (24) bytes
struct _KAPC_STATE {
  struct _LIST_ENTRY ApcListHead[2]; // offset: 0x0 (0)
  struct _KPROCESS *Process;         // offset: 0x10 (16)
  UCHAR KernelApcInProgress;         // offset: 0x14 (20)
  UCHAR KernelApcPending;            // offset: 0x15 (21)
  UCHAR UserApcPending;              // offset: 0x16 (22)
};

// 0x8 (8) bytes
struct _KSPIN_LOCK_QUEUE {
  struct _KSPIN_LOCK_QUEUE *volatile Next; // offset: 0x0 (0)
  ULONG *volatile Lock;                    // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _KLOCK_QUEUE_HANDLE {
  struct _KSPIN_LOCK_QUEUE LockQueue; // offset: 0x0 (0)
  UCHAR OldIrql;                      // offset: 0x8 (8)
};

// 0x30 (48) bytes
struct _PCI_HEADER_TYPE_0 {
  ULONG BaseAddresses[6]; // offset: 0x0 (0)
  ULONG CIS;              // offset: 0x18 (24)
  USHORT SubVendorID;     // offset: 0x1c (28)
  USHORT SubSystemID;     // offset: 0x1e (30)
  ULONG ROMBaseAddress;   // offset: 0x20 (32)
  UCHAR CapabilitiesPtr;  // offset: 0x24 (36)
  UCHAR Reserved1[3];     // offset: 0x25 (37)
  ULONG Reserved2;        // offset: 0x28 (40)
  UCHAR InterruptLine;    // offset: 0x2c (44)
  UCHAR InterruptPin;     // offset: 0x2d (45)
  UCHAR MinimumGrant;     // offset: 0x2e (46)
  UCHAR MaximumLatency;   // offset: 0x2f (47)
};

// 0x100 (256) bytes
struct _PCI_COMMON_CONFIG {
  USHORT VendorID;     // offset: 0x0 (0)
  USHORT DeviceID;     // offset: 0x2 (2)
  USHORT Command;      // offset: 0x4 (4)
  USHORT Status;       // offset: 0x6 (6)
  UCHAR RevisionID;    // offset: 0x8 (8)
  UCHAR ProgIf;        // offset: 0x9 (9)
  UCHAR SubClass;      // offset: 0xa (10)
  UCHAR BaseClass;     // offset: 0xb (11)
  UCHAR CacheLineSize; // offset: 0xc (12)
  UCHAR LatencyTimer;  // offset: 0xd (13)
  UCHAR HeaderType;    // offset: 0xe (14)
  UCHAR BIST;          // offset: 0xf (15)
  union {
    struct _PCI_HEADER_TYPE_0 type0; // offset: 0x10 (16)
    struct _PCI_HEADER_TYPE_1 type1; // offset: 0x10 (16)
    struct _PCI_HEADER_TYPE_2 type2; // offset: 0x10 (16)

  } u;                       // offset: 0x10 (16)
  UCHAR DeviceSpecific[192]; // offset: 0x40 (64)
};

// 0x20 (32) bytes
struct _PCI_BUS_INTERFACE_STANDARD {
  USHORT Size;                              // offset: 0x0 (0)
  USHORT Version;                           // offset: 0x2 (2)
  VOID *Context;                            // offset: 0x4 (4)
  VOID (*InterfaceReference)(VOID *arg1);   // offset: 0x8 (8)
  VOID (*InterfaceDereference)(VOID *arg1); // offset: 0xc (12)
  ULONG(*ReadConfig)
  (VOID *arg1, UCHAR arg2, ULONG arg3, VOID *arg4, ULONG arg5,
   ULONG arg6); // offset: 0x10 (16)
  ULONG(*WriteConfig)
  (VOID *arg1, UCHAR arg2, ULONG arg3, VOID *arg4, ULONG arg5,
   ULONG arg6); // offset: 0x14 (20)
  VOID(*PinToLine)
  (VOID *arg1, struct _PCI_COMMON_CONFIG *arg2); // offset: 0x18 (24)
  VOID(*LineToPin)
  (VOID *arg1, struct _PCI_COMMON_CONFIG *arg2,
   struct _PCI_COMMON_CONFIG *arg3); // offset: 0x1c (28)
};

// 0x8 (8) bytes
struct _DESCRIPTOR {
  USHORT Pad;   // offset: 0x0 (0)
  USHORT Limit; // offset: 0x2 (2)
  ULONG Base;   // offset: 0x4 (4)
};

// 0x70 (112) bytes
struct _FLOATING_SAVE_AREA {
  ULONG ControlWord;      // offset: 0x0 (0)
  ULONG StatusWord;       // offset: 0x4 (4)
  ULONG TagWord;          // offset: 0x8 (8)
  ULONG ErrorOffset;      // offset: 0xc (12)
  ULONG ErrorSelector;    // offset: 0x10 (16)
  ULONG DataOffset;       // offset: 0x14 (20)
  ULONG DataSelector;     // offset: 0x18 (24)
  UCHAR RegisterArea[80]; // offset: 0x1c (28)
  ULONG Cr0NpxState;      // offset: 0x6c (108)
};

// 0x30 (48) bytes
struct _KAPC {
  UCHAR Type;                      // offset: 0x0 (0)
  UCHAR SpareByte0;                // offset: 0x1 (1)
  UCHAR Size;                      // offset: 0x2 (2)
  UCHAR SpareByte1;                // offset: 0x3 (3)
  ULONG SpareLong0;                // offset: 0x4 (4)
  struct _KTHREAD *Thread;         // offset: 0x8 (8)
  struct _LIST_ENTRY ApcListEntry; // offset: 0xc (12)
  VOID(*KernelRoutine)
  (struct _KAPC *arg1, VOID (**arg2)(VOID *arg1, VOID *arg2, VOID *arg3),
   VOID **arg3, VOID **arg4, VOID **arg5);    // offset: 0x14 (20)
  VOID (*RundownRoutine)(struct _KAPC *arg1); // offset: 0x18 (24)
  VOID(*NormalRoutine)
  (VOID *arg1, VOID *arg2, VOID *arg3); // offset: 0x1c (28)
  VOID *NormalContext;                  // offset: 0x20 (32)
  VOID *SystemArgument1;                // offset: 0x24 (36)
  VOID *SystemArgument2;                // offset: 0x28 (40)
  CHAR ApcStateIndex;                   // offset: 0x2c (44)
  CHAR ApcMode;                         // offset: 0x2d (45)
  UCHAR Inserted;                       // offset: 0x2e (46)
};

// 0xe8 (232) bytes
struct _SYSTEM_POWER_POLICY {
  ULONG Revision;                               // offset: 0x0 (0)
  struct POWER_ACTION_POLICY PowerButton;       // offset: 0x4 (4)
  struct POWER_ACTION_POLICY SleepButton;       // offset: 0x10 (16)
  struct POWER_ACTION_POLICY LidClose;          // offset: 0x1c (28)
  enum _SYSTEM_POWER_STATE LidOpenWake;         // offset: 0x28 (40)
  ULONG Reserved;                               // offset: 0x2c (44)
  struct POWER_ACTION_POLICY Idle;              // offset: 0x30 (48)
  ULONG IdleTimeout;                            // offset: 0x3c (60)
  UCHAR IdleSensitivity;                        // offset: 0x40 (64)
  UCHAR DynamicThrottle;                        // offset: 0x41 (65)
  UCHAR Spare2[2];                              // offset: 0x42 (66)
  enum _SYSTEM_POWER_STATE MinSleep;            // offset: 0x44 (68)
  enum _SYSTEM_POWER_STATE MaxSleep;            // offset: 0x48 (72)
  enum _SYSTEM_POWER_STATE ReducedLatencySleep; // offset: 0x4c (76)
  ULONG WinLogonFlags;                          // offset: 0x50 (80)
  ULONG Spare3;                                 // offset: 0x54 (84)
  ULONG DozeS4Timeout;                          // offset: 0x58 (88)
  ULONG BroadcastCapacityResolution;            // offset: 0x5c (92)
  struct SYSTEM_POWER_LEVEL DischargePolicy[4]; // offset: 0x60 (96)
  ULONG VideoTimeout;                           // offset: 0xc0 (192)
  UCHAR VideoDimDisplay;                        // offset: 0xc4 (196)
  ULONG VideoReserved[3];                       // offset: 0xc8 (200)
  ULONG SpindownTimeout;                        // offset: 0xd4 (212)
  UCHAR OptimizeForPower;                       // offset: 0xd8 (216)
  UCHAR FanThrottleTolerance;                   // offset: 0xd9 (217)
  UCHAR ForcedThrottle;                         // offset: 0xda (218)
  UCHAR MinThrottle;                            // offset: 0xdb (219)
  struct POWER_ACTION_POLICY OverThrottled;     // offset: 0xdc (220)
};

// 0x14 (20) bytes
struct _KDPC_DATA {
  struct _LIST_ENTRY DpcListHead; // offset: 0x0 (0)
  ULONG DpcLock;                  // offset: 0x8 (8)
  volatile ULONG DpcQueueDepth;   // offset: 0xc (12)
  ULONG DpcCount;                 // offset: 0x10 (16)
};

// 0x54 (84) bytes
struct _KSPECIAL_REGISTERS {
  ULONG Cr0;               // offset: 0x0 (0)
  ULONG Cr2;               // offset: 0x4 (4)
  ULONG Cr3;               // offset: 0x8 (8)
  ULONG Cr4;               // offset: 0xc (12)
  ULONG KernelDr0;         // offset: 0x10 (16)
  ULONG KernelDr1;         // offset: 0x14 (20)
  ULONG KernelDr2;         // offset: 0x18 (24)
  ULONG KernelDr3;         // offset: 0x1c (28)
  ULONG KernelDr6;         // offset: 0x20 (32)
  ULONG KernelDr7;         // offset: 0x24 (36)
  struct _DESCRIPTOR Gdtr; // offset: 0x28 (40)
  struct _DESCRIPTOR Idtr; // offset: 0x30 (48)
  USHORT Tr;               // offset: 0x38 (56)
  USHORT Ldtr;             // offset: 0x3a (58)
  ULONG Reserved[6];       // offset: 0x3c (60)
};

// 0x2cc (716) bytes
struct _CONTEXT {
  ULONG ContextFlags;                   // offset: 0x0 (0)
  ULONG Dr0;                            // offset: 0x4 (4)
  ULONG Dr1;                            // offset: 0x8 (8)
  ULONG Dr2;                            // offset: 0xc (12)
  ULONG Dr3;                            // offset: 0x10 (16)
  ULONG Dr6;                            // offset: 0x14 (20)
  ULONG Dr7;                            // offset: 0x18 (24)
  struct _FLOATING_SAVE_AREA FloatSave; // offset: 0x1c (28)
  ULONG SegGs;                          // offset: 0x8c (140)
  ULONG SegFs;                          // offset: 0x90 (144)
  ULONG SegEs;                          // offset: 0x94 (148)
  ULONG SegDs;                          // offset: 0x98 (152)
  ULONG Edi;                            // offset: 0x9c (156)
  ULONG Esi;                            // offset: 0xa0 (160)
  ULONG Ebx;                            // offset: 0xa4 (164)
  ULONG Edx;                            // offset: 0xa8 (168)
  ULONG Ecx;                            // offset: 0xac (172)
  ULONG Eax;                            // offset: 0xb0 (176)
  ULONG Ebp;                            // offset: 0xb4 (180)
  ULONG Eip;                            // offset: 0xb8 (184)
  ULONG SegCs;                          // offset: 0xbc (188)
  ULONG EFlags;                         // offset: 0xc0 (192)
  ULONG Esp;                            // offset: 0xc4 (196)
  ULONG SegSs;                          // offset: 0xc8 (200)
  UCHAR ExtendedRegisters[512];         // offset: 0xcc (204)
};

// 0x8 (8) bytes
struct _EXCEPTION_POINTERS {
  struct _EXCEPTION_RECORD *ExceptionRecord; // offset: 0x0 (0)
  struct _CONTEXT *ContextRecord;            // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _EXCEPTION_REGISTRATION_RECORD {
  struct _EXCEPTION_REGISTRATION_RECORD *Next; // offset: 0x0 (0)
  enum _EXCEPTION_DISPOSITION (*Handler)(struct _EXCEPTION_RECORD *arg1,
                                         VOID *arg2, struct _CONTEXT *arg3,
                                         VOID *arg4); // offset: 0x4 (4)
};

// 0x320 (800) bytes
struct _KPROCESSOR_STATE {
  struct _CONTEXT ContextFrame;                // offset: 0x0 (0)
  struct _KSPECIAL_REGISTERS SpecialRegisters; // offset: 0x2cc (716)
};

// 0x210 (528) bytes
struct _FX_SAVE_AREA {
  union {
    struct _FNSAVE_FORMAT FnArea; // offset: 0x0 (0)
    struct _FXSAVE_FORMAT FxArea; // offset: 0x0 (0)

  } U;               // offset: 0x0 (0)
  ULONG NpxSavedCpu; // offset: 0x208 (520)
  ULONG Cr0NpxState; // offset: 0x20c (524)
};

// 0x8 (8) bytes
struct _CM_KEY_INDEX {
  USHORT Signature; // offset: 0x0 (0)
  USHORT Count;     // offset: 0x2 (2)
  ULONG List[1];    // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _CM_INDEX_HINT_BLOCK {
  ULONG Count;      // offset: 0x0 (0)
  ULONG HashKey[1]; // offset: 0x4 (4)
};

// 0x30 (48) bytes
struct _SECTION_IMAGE_INFORMATION {
  VOID *TransferAddress;    // offset: 0x0 (0)
  ULONG ZeroBits;           // offset: 0x4 (4)
  ULONG MaximumStackSize;   // offset: 0x8 (8)
  ULONG CommittedStackSize; // offset: 0xc (12)
  ULONG SubSystemType;      // offset: 0x10 (16)
  union {
    struct {
      USHORT SubSystemMinorVersion; // offset: 0x14 (20)
      USHORT SubSystemMajorVersion; // offset: 0x16 (22)
    };
    ULONG SubSystemVersion; // offset: 0x14 (20)
  };
  ULONG GpValue;               // offset: 0x18 (24)
  USHORT ImageCharacteristics; // offset: 0x1c (28)
  USHORT DllCharacteristics;   // offset: 0x1e (30)
  USHORT Machine;              // offset: 0x20 (32)
  UCHAR ImageContainsCode;     // offset: 0x22 (34)
  UCHAR Spare1;                // offset: 0x23 (35)
  ULONG LoaderFlags;           // offset: 0x24 (36)
  ULONG ImageFileSize;         // offset: 0x28 (40)
  ULONG Reserved[1];           // offset: 0x2c (44)
};

// 0xc (12) bytes
struct _SID {
  UCHAR Revision;                                       // offset: 0x0 (0)
  UCHAR SubAuthorityCount;                              // offset: 0x1 (1)
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // offset: 0x2 (2)
  ULONG SubAuthority[1];                                // offset: 0x8 (8)
};

// 0x14 (20) bytes
struct _FILE_GET_QUOTA_INFORMATION {
  ULONG NextEntryOffset; // offset: 0x0 (0)
  ULONG SidLength;       // offset: 0x4 (4)
  struct _SID Sid;       // offset: 0x8 (8)
};

// 0xc (12) bytes
struct _COMPRESSED_DATA_INFO {
  USHORT CompressionFormatAndEngine; // offset: 0x0 (0)
  UCHAR CompressionUnitShift;        // offset: 0x2 (2)
  UCHAR ChunkShift;                  // offset: 0x3 (3)
  UCHAR ClusterShift;                // offset: 0x4 (4)
  UCHAR Reserved;                    // offset: 0x5 (5)
  USHORT NumberOfChunks;             // offset: 0x6 (6)
  ULONG CompressedChunkSizes[1];     // offset: 0x8 (8)
};

// 0x28 (40) bytes
struct _POOL_HACKER {
  struct _POOL_HEADER Header; // offset: 0x0 (0)
  ULONG Contents[8];          // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _PERFINFO_GROUPMASK {
  ULONG Masks[8]; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _LUID {
  ULONG LowPart; // offset: 0x0 (0)
  LONG HighPart; // offset: 0x4 (4)
};

// 0x18 (24) bytes
struct _SEP_LOGON_SESSION_REFERENCES {
  struct _SEP_LOGON_SESSION_REFERENCES *Next; // offset: 0x0 (0)
  struct _LUID LogonId;                       // offset: 0x4 (4)
  ULONG ReferenceCount;                       // offset: 0xc (12)
  ULONG Flags;                                // offset: 0x10 (16)
  struct _DEVICE_MAP *pDeviceMap;             // offset: 0x14 (20)
};

// 0x10 (16) bytes
struct _TOKEN_SOURCE {
  CHAR SourceName[8];            // offset: 0x0 (0)
  struct _LUID SourceIdentifier; // offset: 0x8 (8)
};

// 0x28 (40) bytes
struct _TOKEN_CONTROL {
  struct _LUID TokenId;             // offset: 0x0 (0)
  struct _LUID AuthenticationId;    // offset: 0x8 (8)
  struct _LUID ModifiedId;          // offset: 0x10 (16)
  struct _TOKEN_SOURCE TokenSource; // offset: 0x18 (24)
};

// 0x3c (60) bytes
struct _SECURITY_CLIENT_CONTEXT {
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // offset: 0x0 (0)
  VOID *ClientToken;                               // offset: 0xc (12)
  UCHAR DirectlyAccessClientToken;                 // offset: 0x10 (16)
  UCHAR DirectAccessEffectiveOnly;                 // offset: 0x11 (17)
  UCHAR ServerIsRemote;                            // offset: 0x12 (18)
  struct _TOKEN_CONTROL ClientTokenControl;        // offset: 0x14 (20)
};

// 0xa4 (164) bytes
struct _LPCP_PORT_OBJECT {
  struct _LPCP_PORT_OBJECT *ConnectionPort;        // offset: 0x0 (0)
  struct _LPCP_PORT_OBJECT *ConnectedPort;         // offset: 0x4 (4)
  struct _LPCP_PORT_QUEUE MsgQueue;                // offset: 0x8 (8)
  struct _CLIENT_ID Creator;                       // offset: 0x18 (24)
  VOID *ClientSectionBase;                         // offset: 0x20 (32)
  VOID *ServerSectionBase;                         // offset: 0x24 (36)
  VOID *PortContext;                               // offset: 0x28 (40)
  struct _ETHREAD *ClientThread;                   // offset: 0x2c (44)
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // offset: 0x30 (48)
  struct _SECURITY_CLIENT_CONTEXT StaticSecurity;  // offset: 0x3c (60)
  struct _LIST_ENTRY LpcReplyChainHead;            // offset: 0x78 (120)
  struct _LIST_ENTRY LpcDataInfoChainHead;         // offset: 0x80 (128)
  union {
    struct _EPROCESS *ServerProcess;  // offset: 0x88 (136)
    struct _EPROCESS *MappingProcess; // offset: 0x88 (136)
  };
  USHORT MaxMessageLength;        // offset: 0x8c (140)
  USHORT MaxConnectionInfoLength; // offset: 0x8e (142)
  ULONG Flags;                    // offset: 0x90 (144)
  struct _KEVENT WaitEvent;       // offset: 0x94 (148)
};

// 0xc (12) bytes
struct _LUID_AND_ATTRIBUTES {
  struct _LUID Luid; // offset: 0x0 (0)
  ULONG Attributes;  // offset: 0x8 (8)
};

// 0x14 (20) bytes
struct _PRIVILEGE_SET {
  ULONG PrivilegeCount;                     // offset: 0x0 (0)
  ULONG Control;                            // offset: 0x4 (4)
  struct _LUID_AND_ATTRIBUTES Privilege[1]; // offset: 0x8 (8)
};

// 0x2c (44) bytes
struct _INITIAL_PRIVILEGE_SET {
  ULONG PrivilegeCount;                     // offset: 0x0 (0)
  ULONG Control;                            // offset: 0x4 (4)
  struct _LUID_AND_ATTRIBUTES Privilege[3]; // offset: 0x8 (8)
};

// 0x74 (116) bytes
struct _ACCESS_STATE {
  struct _LUID OperationID;                                // offset: 0x0 (0)
  UCHAR SecurityEvaluated;                                 // offset: 0x8 (8)
  UCHAR GenerateAudit;                                     // offset: 0x9 (9)
  UCHAR GenerateOnClose;                                   // offset: 0xa (10)
  UCHAR PrivilegesAllocated;                               // offset: 0xb (11)
  ULONG Flags;                                             // offset: 0xc (12)
  ULONG RemainingDesiredAccess;                            // offset: 0x10 (16)
  ULONG PreviouslyGrantedAccess;                           // offset: 0x14 (20)
  ULONG OriginalDesiredAccess;                             // offset: 0x18 (24)
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // offset: 0x1c (28)
  VOID *SecurityDescriptor;                                // offset: 0x2c (44)
  VOID *AuxData;                                           // offset: 0x30 (48)
  union {
    struct _INITIAL_PRIVILEGE_SET InitialPrivilegeSet; // offset: 0x34 (52)
    struct _PRIVILEGE_SET PrivilegeSet;                // offset: 0x34 (52)

  } Privileges;                          // offset: 0x34 (52)
  UCHAR AuditPrivileges;                 // offset: 0x60 (96)
  struct _UNICODE_STRING ObjectName;     // offset: 0x64 (100)
  struct _UNICODE_STRING ObjectTypeName; // offset: 0x6c (108)
};

// 0x4c (76) bytes
struct _OBJECT_TYPE_INITIALIZER {
  USHORT Length;                          // offset: 0x0 (0)
  UCHAR UseDefaultObject;                 // offset: 0x2 (2)
  UCHAR CaseInsensitive;                  // offset: 0x3 (3)
  ULONG InvalidAttributes;                // offset: 0x4 (4)
  struct _GENERIC_MAPPING GenericMapping; // offset: 0x8 (8)
  ULONG ValidAccessMask;                  // offset: 0x18 (24)
  UCHAR SecurityRequired;                 // offset: 0x1c (28)
  UCHAR MaintainHandleCount;              // offset: 0x1d (29)
  UCHAR MaintainTypeList;                 // offset: 0x1e (30)
  enum _POOL_TYPE PoolType;               // offset: 0x20 (32)
  ULONG DefaultPagedPoolCharge;           // offset: 0x24 (36)
  ULONG DefaultNonPagedPoolCharge;        // offset: 0x28 (40)
  VOID(*DumpProcedure)
  (VOID *arg1, struct _OBJECT_DUMP_CONTROL *arg2); // offset: 0x2c (44)
  LONG(*OpenProcedure)
  (enum _OB_OPEN_REASON arg1, struct _EPROCESS *arg2, VOID *arg3, ULONG arg4,
   ULONG arg5); // offset: 0x30 (48)
  VOID(*CloseProcedure)
  (struct _EPROCESS *arg1, VOID *arg2, ULONG arg3, ULONG arg4,
   ULONG arg5);                        // offset: 0x34 (52)
  VOID (*DeleteProcedure)(VOID *arg1); // offset: 0x38 (56)
  LONG(*ParseProcedure)
  (VOID *arg1, VOID *arg2, struct _ACCESS_STATE *arg3, CHAR arg4, ULONG arg5,
   struct _UNICODE_STRING *arg6, struct _UNICODE_STRING *arg7, VOID *arg8,
   struct _SECURITY_QUALITY_OF_SERVICE *arg9,
   VOID **arg10); // offset: 0x3c (60)
  LONG(*SecurityProcedure)
  (VOID *arg1, enum _SECURITY_OPERATION_CODE arg2, ULONG *arg3, VOID *arg4,
   ULONG *arg5, VOID **arg6, enum _POOL_TYPE arg7,
   struct _GENERIC_MAPPING *arg8, CHAR arg9); // offset: 0x40 (64)
  LONG(*QueryNameProcedure)
  (VOID *arg1, UCHAR arg2, struct _OBJECT_NAME_INFORMATION *arg3, ULONG arg4,
   ULONG *arg5, CHAR arg6); // offset: 0x44 (68)
  UCHAR(*OkayToCloseProcedure)
  (struct _EPROCESS *arg1, VOID *arg2, VOID *arg3,
   CHAR arg4); // offset: 0x48 (72)
};

// 0x190 (400) bytes
struct _OBJECT_TYPE {
  struct _ERESOURCE Mutex;                  // offset: 0x0 (0)
  struct _LIST_ENTRY TypeList;              // offset: 0x38 (56)
  struct _UNICODE_STRING Name;              // offset: 0x40 (64)
  VOID *DefaultObject;                      // offset: 0x48 (72)
  ULONG Index;                              // offset: 0x4c (76)
  ULONG TotalNumberOfObjects;               // offset: 0x50 (80)
  ULONG TotalNumberOfHandles;               // offset: 0x54 (84)
  ULONG HighWaterNumberOfObjects;           // offset: 0x58 (88)
  ULONG HighWaterNumberOfHandles;           // offset: 0x5c (92)
  struct _OBJECT_TYPE_INITIALIZER TypeInfo; // offset: 0x60 (96)
  ULONG Key;                                // offset: 0xac (172)
  struct _ERESOURCE ObjectLocks[4];         // offset: 0xb0 (176)
};

// 0x20 (32) bytes
struct _OBJECT_HEADER {
  LONG PointerCount; // offset: 0x0 (0)
  union {
    LONG HandleCount; // offset: 0x4 (4)
    VOID *NextToFree; // offset: 0x4 (4)
  };
  struct _OBJECT_TYPE *Type; // offset: 0x8 (8)
  UCHAR NameInfoOffset;      // offset: 0xc (12)
  UCHAR HandleInfoOffset;    // offset: 0xd (13)
  UCHAR QuotaInfoOffset;     // offset: 0xe (14)
  UCHAR Flags;               // offset: 0xf (15)
  union {
    struct _OBJECT_CREATE_INFORMATION *ObjectCreateInfo; // offset: 0x10 (16)
    VOID *QuotaBlockCharged;                             // offset: 0x10 (16)
  };
  VOID *SecurityDescriptor; // offset: 0x14 (20)
  struct _QUAD Body;        // offset: 0x18 (24)
};

// 0x10 (16) bytes
struct _IO_SECURITY_CONTEXT {
  struct _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // offset: 0x0 (0)
  struct _ACCESS_STATE *AccessState;                // offset: 0x4 (4)
  ULONG DesiredAccess;                              // offset: 0x8 (8)
  ULONG FullCreateOptions;                          // offset: 0xc (12)
};

// 0x24 (36) bytes
struct _PS_JOB_TOKEN_FILTER {
  ULONG CapturedSidCount;                          // offset: 0x0 (0)
  struct _SID_AND_ATTRIBUTES *CapturedSids;        // offset: 0x4 (4)
  ULONG CapturedSidsLength;                        // offset: 0x8 (8)
  ULONG CapturedGroupCount;                        // offset: 0xc (12)
  struct _SID_AND_ATTRIBUTES *CapturedGroups;      // offset: 0x10 (16)
  ULONG CapturedGroupsLength;                      // offset: 0x14 (20)
  ULONG CapturedPrivilegeCount;                    // offset: 0x18 (24)
  struct _LUID_AND_ATTRIBUTES *CapturedPrivileges; // offset: 0x1c (28)
  ULONG CapturedPrivilegesLength;                  // offset: 0x20 (32)
};

// 0x8 (8) bytes
union _LARGE_INTEGER {
  struct {
    ULONG LowPart; // offset: 0x0 (0)
    LONG HighPart; // offset: 0x4 (4)
  };
  struct {
    ULONG LowPart;   // offset: 0x0 (0)
    LONG HighPart;   // offset: 0x4 (4)
  } u;               // offset: 0x0 (0)
  LONGLONG QuadPart; // offset: 0x0 (0)
};

// 0x50 (80) bytes
struct _CM_KEY_NODE {
  USHORT Signature;                   // offset: 0x0 (0)
  USHORT Flags;                       // offset: 0x2 (2)
  union _LARGE_INTEGER LastWriteTime; // offset: 0x4 (4)
  ULONG Spare;                        // offset: 0xc (12)
  ULONG Parent;                       // offset: 0x10 (16)
  ULONG SubKeyCounts[2];              // offset: 0x14 (20)
  union {
    struct {
      ULONG SubKeyLists[2];         // offset: 0x1c (28)
      struct _CHILD_LIST ValueList; // offset: 0x24 (36)
    };
    struct _CM_KEY_REFERENCE ChildHiveReference; // offset: 0x1c (28)
  };
  ULONG Security;             // offset: 0x2c (44)
  ULONG Class;                // offset: 0x30 (48)
  ULONG MaxNameLen : 16;      // offset: 0x34 (52)
  ULONG UserFlags : 4;        // offset: 0x34 (52)
  ULONG VirtControlFlags : 4; // offset: 0x34 (52)
  ULONG Debug : 8;            // offset: 0x34 (52)
  ULONG MaxClassLen;          // offset: 0x38 (56)
  ULONG MaxValueNameLen;      // offset: 0x3c (60)
  ULONG MaxValueDataLen;      // offset: 0x40 (64)
  ULONG WorkVar;              // offset: 0x44 (68)
  USHORT NameLength;          // offset: 0x48 (72)
  USHORT ClassLength;         // offset: 0x4a (74)
  USHORT Name[1];             // offset: 0x4c (76)
};

// 0x50 (80) bytes
union _u {
  struct _CM_KEY_NODE KeyNode;         // offset: 0x0 (0)
  struct _CM_KEY_VALUE KeyValue;       // offset: 0x0 (0)
  struct _CM_KEY_SECURITY KeySecurity; // offset: 0x0 (0)
  struct _CM_KEY_INDEX KeyIndex;       // offset: 0x0 (0)
  struct _CM_BIG_DATA ValueData;       // offset: 0x0 (0)
  ULONG KeyList[1];                    // offset: 0x0 (0)
  USHORT KeyString[1];                 // offset: 0x0 (0)
};

// 0x50 (80) bytes
struct _CELL_DATA {
  union _u u; // offset: 0x0 (0)
};

// 0x54 (84) bytes
struct _CM_CACHED_VALUE_INDEX {
  ULONG CellIndex; // offset: 0x0 (0)
  union {
    struct _CELL_DATA CellData; // offset: 0x4 (4)
    ULONG List[1];              // offset: 0x4 (4)

  } Data; // offset: 0x4 (4)
};

// 0x1000 (4096) bytes
struct _HBASE_BLOCK {
  ULONG Signature;                // offset: 0x0 (0)
  ULONG Sequence1;                // offset: 0x4 (4)
  ULONG Sequence2;                // offset: 0x8 (8)
  union _LARGE_INTEGER TimeStamp; // offset: 0xc (12)
  ULONG Major;                    // offset: 0x14 (20)
  ULONG Minor;                    // offset: 0x18 (24)
  ULONG Type;                     // offset: 0x1c (28)
  ULONG Format;                   // offset: 0x20 (32)
  ULONG RootCell;                 // offset: 0x24 (36)
  ULONG Length;                   // offset: 0x28 (40)
  ULONG Cluster;                  // offset: 0x2c (44)
  UCHAR FileName[64];             // offset: 0x30 (48)
  ULONG Reserved1[99];            // offset: 0x70 (112)
  ULONG CheckSum;                 // offset: 0x1fc (508)
  ULONG Reserved2[894];           // offset: 0x200 (512)
  ULONG BootType;                 // offset: 0xff8 (4088)
  ULONG BootRecover;              // offset: 0xffc (4092)
};

// 0x68 (104) bytes
struct _CM_KEY_CONTROL_BLOCK {
  ULONG RefCount;               // offset: 0x0 (0)
  ULONG ExtFlags : 8;           // offset: 0x4 (4)
  ULONG PrivateAlloc : 1;       // offset: 0x4 (4)
  ULONG Delete : 1;             // offset: 0x4 (4)
  ULONG DelayedCloseIndex : 12; // offset: 0x4 (4)
  ULONG TotalLevels : 10;       // offset: 0x4 (4)
  union {
    struct _CM_KEY_HASH KeyHash; // offset: 0x8 (8)
    struct {
      ULONG ConvKey;                 // offset: 0x8 (8)
      struct _CM_KEY_HASH *NextHash; // offset: 0xc (12)
      struct _HHIVE *KeyHive;        // offset: 0x10 (16)
      ULONG KeyCell;                 // offset: 0x14 (20)
    };
  };
  struct _CM_KEY_CONTROL_BLOCK *ParentKcb;       // offset: 0x18 (24)
  struct _CM_NAME_CONTROL_BLOCK *NameBlock;      // offset: 0x1c (28)
  struct _CM_KEY_SECURITY_CACHE *CachedSecurity; // offset: 0x20 (32)
  struct _CACHED_CHILD_LIST ValueCache;          // offset: 0x24 (36)
  union {
    struct _CM_INDEX_HINT_BLOCK *IndexHint; // offset: 0x2c (44)
    ULONG HashKey;                          // offset: 0x2c (44)
    ULONG SubKeyCount;                      // offset: 0x2c (44)
  };
  union {
    struct _LIST_ENTRY KeyBodyListHead; // offset: 0x30 (48)
    struct _LIST_ENTRY FreeListEntry;   // offset: 0x30 (48)
  };
  struct _CM_KEY_BODY *KeyBodyArray[4];  // offset: 0x38 (56)
  VOID *DelayCloseEntry;                 // offset: 0x48 (72)
  union _LARGE_INTEGER KcbLastWriteTime; // offset: 0x50 (80)
  USHORT KcbMaxNameLen;                  // offset: 0x58 (88)
  USHORT KcbMaxValueNameLen;             // offset: 0x5a (90)
  ULONG KcbMaxValueDataLen;              // offset: 0x5c (92)
  ULONG KcbUserFlags : 4;                // offset: 0x60 (96)
  ULONG KcbVirtControlFlags : 4;         // offset: 0x60 (96)
  ULONG KcbDebug : 8;                    // offset: 0x60 (96)
  ULONG Flags : 16;                      // offset: 0x60 (96)
};

// 0x20 (32) bytes
struct _OBJECT_SYMBOLIC_LINK {
  union _LARGE_INTEGER CreationTime;          // offset: 0x0 (0)
  struct _UNICODE_STRING LinkTarget;          // offset: 0x8 (8)
  struct _UNICODE_STRING LinkTargetRemaining; // offset: 0x10 (16)
  VOID *LinkTargetObject;                     // offset: 0x18 (24)
  ULONG DosDeviceDriveIndex;                  // offset: 0x1c (28)
};

// 0x58 (88) bytes
struct _PRIVATE_CACHE_MAP {
  union {
    SHORT NodeTypeCode;                    // offset: 0x0 (0)
    struct _PRIVATE_CACHE_MAP_FLAGS Flags; // offset: 0x0 (0)
    ULONG UlongFlags;                      // offset: 0x0 (0)
  };
  ULONG ReadAheadMask;                     // offset: 0x4 (4)
  struct _FILE_OBJECT *FileObject;         // offset: 0x8 (8)
  union _LARGE_INTEGER FileOffset1;        // offset: 0x10 (16)
  union _LARGE_INTEGER BeyondLastByte1;    // offset: 0x18 (24)
  union _LARGE_INTEGER FileOffset2;        // offset: 0x20 (32)
  union _LARGE_INTEGER BeyondLastByte2;    // offset: 0x28 (40)
  union _LARGE_INTEGER ReadAheadOffset[2]; // offset: 0x30 (48)
  ULONG ReadAheadLength[2];                // offset: 0x40 (64)
  ULONG ReadAheadSpinLock;                 // offset: 0x48 (72)
  struct _LIST_ENTRY PrivateLinks;         // offset: 0x4c (76)
};

// 0x138 (312) bytes
struct _SHARED_CACHE_MAP {
  SHORT NodeTypeCode;                         // offset: 0x0 (0)
  SHORT NodeByteSize;                         // offset: 0x2 (2)
  ULONG OpenCount;                            // offset: 0x4 (4)
  union _LARGE_INTEGER FileSize;              // offset: 0x8 (8)
  struct _LIST_ENTRY BcbList;                 // offset: 0x10 (16)
  union _LARGE_INTEGER SectionSize;           // offset: 0x18 (24)
  union _LARGE_INTEGER ValidDataLength;       // offset: 0x20 (32)
  union _LARGE_INTEGER ValidDataGoal;         // offset: 0x28 (40)
  struct _VACB *InitialVacbs[4];              // offset: 0x30 (48)
  struct _VACB **Vacbs;                       // offset: 0x40 (64)
  struct _FILE_OBJECT *FileObject;            // offset: 0x44 (68)
  struct _VACB *volatile ActiveVacb;          // offset: 0x48 (72)
  VOID *volatile NeedToZero;                  // offset: 0x4c (76)
  ULONG ActivePage;                           // offset: 0x50 (80)
  ULONG NeedToZeroPage;                       // offset: 0x54 (84)
  ULONG ActiveVacbSpinLock;                   // offset: 0x58 (88)
  ULONG VacbActiveCount;                      // offset: 0x5c (92)
  ULONG DirtyPages;                           // offset: 0x60 (96)
  struct _LIST_ENTRY SharedCacheMapLinks;     // offset: 0x64 (100)
  ULONG Flags;                                // offset: 0x6c (108)
  LONG Status;                                // offset: 0x70 (112)
  struct _MBCB *Mbcb;                         // offset: 0x74 (116)
  VOID *Section;                              // offset: 0x78 (120)
  struct _KEVENT *CreateEvent;                // offset: 0x7c (124)
  struct _KEVENT *WaitOnActiveCount;          // offset: 0x80 (128)
  ULONG PagesToWrite;                         // offset: 0x84 (132)
  LONGLONG BeyondLastFlush;                   // offset: 0x88 (136)
  struct _CACHE_MANAGER_CALLBACKS *Callbacks; // offset: 0x90 (144)
  VOID *LazyWriteContext;                     // offset: 0x94 (148)
  struct _LIST_ENTRY PrivateList;             // offset: 0x98 (152)
  VOID *LogHandle;                            // offset: 0xa0 (160)
  VOID(*FlushToLsnRoutine)
  (VOID *arg1, union _LARGE_INTEGER arg2);             // offset: 0xa4 (164)
  ULONG DirtyPageThreshold;                            // offset: 0xa8 (168)
  ULONG LazyWritePassCount;                            // offset: 0xac (172)
  struct _CACHE_UNINITIALIZE_EVENT *UninitializeEvent; // offset: 0xb0 (176)
  struct _VACB *NeedToZeroVacb;                        // offset: 0xb4 (180)
  ULONG BcbSpinLock;                                   // offset: 0xb8 (184)
  VOID *Reserved;                                      // offset: 0xbc (188)
  struct _KEVENT Event;                                // offset: 0xc0 (192)
  struct _EX_PUSH_LOCK VacbPushLock;                   // offset: 0xd0 (208)
  struct _PRIVATE_CACHE_MAP PrivateCacheMap;           // offset: 0xd8 (216)
  VOID *WriteBehindWorkQueueEntry;                     // offset: 0x130 (304)
};

// 0x18 (24) bytes
struct _VACB {
  VOID *BaseAddress;                        // offset: 0x0 (0)
  struct _SHARED_CACHE_MAP *SharedCacheMap; // offset: 0x4 (4)
  union {
    union _LARGE_INTEGER FileOffset; // offset: 0x8 (8)
    USHORT ActiveCount;              // offset: 0x8 (8)

  } Overlay;                  // offset: 0x8 (8)
  struct _LIST_ENTRY LruList; // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR {
  UCHAR Type;             // offset: 0x0 (0)
  UCHAR ShareDisposition; // offset: 0x1 (1)
  USHORT Flags;           // offset: 0x2 (2)
  union {
    struct {
      union _LARGE_INTEGER Start; // offset: 0x0 (0)
      ULONG Length;               // offset: 0x8 (8)
    } Generic;                    // offset: 0x4 (4)
    struct {
      union _LARGE_INTEGER Start; // offset: 0x0 (0)
      ULONG Length;               // offset: 0x8 (8)
    } Port;                       // offset: 0x4 (4)
    struct {
      ULONG Level;    // offset: 0x0 (0)
      ULONG Vector;   // offset: 0x4 (4)
      ULONG Affinity; // offset: 0x8 (8)
    } Interrupt;      // offset: 0x4 (4)
    struct {
      union _LARGE_INTEGER Start; // offset: 0x0 (0)
      ULONG Length;               // offset: 0x8 (8)
    } Memory;                     // offset: 0x4 (4)
    struct {
      ULONG Channel;   // offset: 0x0 (0)
      ULONG Port;      // offset: 0x4 (4)
      ULONG Reserved1; // offset: 0x8 (8)
    } Dma;             // offset: 0x4 (4)
    struct {
      ULONG Data[3]; // offset: 0x0 (0)
    } DevicePrivate; // offset: 0x4 (4)
    struct {
      ULONG Start;    // offset: 0x0 (0)
      ULONG Length;   // offset: 0x4 (4)
      ULONG Reserved; // offset: 0x8 (8)
    } BusNumber;      // offset: 0x4 (4)
    struct {
      ULONG DataSize;     // offset: 0x0 (0)
      ULONG Reserved1;    // offset: 0x4 (4)
      ULONG Reserved2;    // offset: 0x8 (8)
    } DeviceSpecificData; // offset: 0x4 (4)

  } u; // offset: 0x4 (4)
};

// 0x18 (24) bytes
struct _CM_PARTIAL_RESOURCE_LIST {
  USHORT Version;  // offset: 0x0 (0)
  USHORT Revision; // offset: 0x2 (2)
  ULONG Count;     // offset: 0x4 (4)
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
      PartialDescriptors[1]; // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _CM_FULL_RESOURCE_DESCRIPTOR {
  enum _INTERFACE_TYPE InterfaceType;                   // offset: 0x0 (0)
  ULONG BusNumber;                                      // offset: 0x4 (4)
  struct _CM_PARTIAL_RESOURCE_LIST PartialResourceList; // offset: 0x8 (8)
};

// 0x24 (36) bytes
struct _CM_RESOURCE_LIST {
  ULONG Count;                                 // offset: 0x0 (0)
  struct _CM_FULL_RESOURCE_DESCRIPTOR List[1]; // offset: 0x4 (4)
};

// 0x20 (32) bytes
struct _IO_RESOURCE_DESCRIPTOR {
  UCHAR Option;           // offset: 0x0 (0)
  UCHAR Type;             // offset: 0x1 (1)
  UCHAR ShareDisposition; // offset: 0x2 (2)
  UCHAR Spare1;           // offset: 0x3 (3)
  USHORT Flags;           // offset: 0x4 (4)
  USHORT Spare2;          // offset: 0x6 (6)
  union {
    struct {
      ULONG Length;                        // offset: 0x0 (0)
      ULONG Alignment;                     // offset: 0x4 (4)
      union _LARGE_INTEGER MinimumAddress; // offset: 0x8 (8)
      union _LARGE_INTEGER MaximumAddress; // offset: 0x10 (16)
    } Port;                                // offset: 0x8 (8)
    struct {
      ULONG Length;                        // offset: 0x0 (0)
      ULONG Alignment;                     // offset: 0x4 (4)
      union _LARGE_INTEGER MinimumAddress; // offset: 0x8 (8)
      union _LARGE_INTEGER MaximumAddress; // offset: 0x10 (16)
    } Memory;                              // offset: 0x8 (8)
    struct {
      ULONG MinimumVector; // offset: 0x0 (0)
      ULONG MaximumVector; // offset: 0x4 (4)
    } Interrupt;           // offset: 0x8 (8)
    struct {
      ULONG MinimumChannel; // offset: 0x0 (0)
      ULONG MaximumChannel; // offset: 0x4 (4)
    } Dma;                  // offset: 0x8 (8)
    struct {
      ULONG Length;                        // offset: 0x0 (0)
      ULONG Alignment;                     // offset: 0x4 (4)
      union _LARGE_INTEGER MinimumAddress; // offset: 0x8 (8)
      union _LARGE_INTEGER MaximumAddress; // offset: 0x10 (16)
    } Generic;                             // offset: 0x8 (8)
    struct {
      ULONG Data[3]; // offset: 0x0 (0)
    } DevicePrivate; // offset: 0x8 (8)
    struct {
      ULONG Length;       // offset: 0x0 (0)
      ULONG MinBusNumber; // offset: 0x4 (4)
      ULONG MaxBusNumber; // offset: 0x8 (8)
      ULONG Reserved;     // offset: 0xc (12)
    } BusNumber;          // offset: 0x8 (8)
    struct {
      ULONG Priority;  // offset: 0x0 (0)
      ULONG Reserved1; // offset: 0x4 (4)
      ULONG Reserved2; // offset: 0x8 (8)
    } ConfigData;      // offset: 0x8 (8)

  } u; // offset: 0x8 (8)
};

// 0x38 (56) bytes
struct _ARBITER_LIST_ENTRY {
  struct _LIST_ENTRY ListEntry;                        // offset: 0x0 (0)
  ULONG AlternativeCount;                              // offset: 0x8 (8)
  struct _IO_RESOURCE_DESCRIPTOR *Alternatives;        // offset: 0xc (12)
  struct _DEVICE_OBJECT *PhysicalDeviceObject;         // offset: 0x10 (16)
  enum _ARBITER_REQUEST_SOURCE RequestSource;          // offset: 0x14 (20)
  ULONG Flags;                                         // offset: 0x18 (24)
  LONG WorkSpace;                                      // offset: 0x1c (28)
  enum _INTERFACE_TYPE InterfaceType;                  // offset: 0x20 (32)
  ULONG SlotNumber;                                    // offset: 0x24 (36)
  ULONG BusNumber;                                     // offset: 0x28 (40)
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *Assignment;  // offset: 0x2c (44)
  struct _IO_RESOURCE_DESCRIPTOR *SelectedAlternative; // offset: 0x30 (48)
  enum _ARBITER_RESULT Result;                         // offset: 0x34 (52)
};

// 0x150 (336) bytes
struct PCI_FUNCTION_RESOURCES {
  struct _IO_RESOURCE_DESCRIPTOR Limit[7];           // offset: 0x0 (0)
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR Current[7]; // offset: 0xe0 (224)
};

// 0x28 (40) bytes
struct _IO_RESOURCE_LIST {
  USHORT Version;                                // offset: 0x0 (0)
  USHORT Revision;                               // offset: 0x2 (2)
  ULONG Count;                                   // offset: 0x4 (4)
  struct _IO_RESOURCE_DESCRIPTOR Descriptors[1]; // offset: 0x8 (8)
};

// 0x48 (72) bytes
struct _IO_RESOURCE_REQUIREMENTS_LIST {
  ULONG ListSize;                     // offset: 0x0 (0)
  enum _INTERFACE_TYPE InterfaceType; // offset: 0x4 (4)
  ULONG BusNumber;                    // offset: 0x8 (8)
  ULONG SlotNumber;                   // offset: 0xc (12)
  ULONG Reserved[3];                  // offset: 0x10 (16)
  ULONG AlternativeLists;             // offset: 0x1c (28)
  struct _IO_RESOURCE_LIST List[1];   // offset: 0x20 (32)
};

// 0x18 (24) bytes
struct _MAILSLOT_CREATE_PARAMETERS {
  ULONG MailslotQuota;              // offset: 0x0 (0)
  ULONG MaximumMessageSize;         // offset: 0x4 (4)
  union _LARGE_INTEGER ReadTimeout; // offset: 0x8 (8)
  UCHAR TimeoutSpecified;           // offset: 0x10 (16)
};

// 0x28 (40) bytes
struct _NAMED_PIPE_CREATE_PARAMETERS {
  ULONG NamedPipeType;                 // offset: 0x0 (0)
  ULONG ReadMode;                      // offset: 0x4 (4)
  ULONG CompletionMode;                // offset: 0x8 (8)
  ULONG MaximumInstances;              // offset: 0xc (12)
  ULONG InboundQuota;                  // offset: 0x10 (16)
  ULONG OutboundQuota;                 // offset: 0x14 (20)
  union _LARGE_INTEGER DefaultTimeout; // offset: 0x18 (24)
  UCHAR TimeoutSpecified;              // offset: 0x20 (32)
};

// 0x38 (56) bytes
struct _FILE_NETWORK_OPEN_INFORMATION {
  union _LARGE_INTEGER CreationTime;   // offset: 0x0 (0)
  union _LARGE_INTEGER LastAccessTime; // offset: 0x8 (8)
  union _LARGE_INTEGER LastWriteTime;  // offset: 0x10 (16)
  union _LARGE_INTEGER ChangeTime;     // offset: 0x18 (24)
  union _LARGE_INTEGER AllocationSize; // offset: 0x20 (32)
  union _LARGE_INTEGER EndOfFile;      // offset: 0x28 (40)
  ULONG FileAttributes;                // offset: 0x30 (48)
};

// 0x18 (24) bytes
struct _FILE_STANDARD_INFORMATION {
  union _LARGE_INTEGER AllocationSize; // offset: 0x0 (0)
  union _LARGE_INTEGER EndOfFile;      // offset: 0x8 (8)
  ULONG NumberOfLinks;                 // offset: 0x10 (16)
  UCHAR DeletePending;                 // offset: 0x14 (20)
  UCHAR Directory;                     // offset: 0x15 (21)
};

// 0x28 (40) bytes
struct _FILE_BASIC_INFORMATION {
  union _LARGE_INTEGER CreationTime;   // offset: 0x0 (0)
  union _LARGE_INTEGER LastAccessTime; // offset: 0x8 (8)
  union _LARGE_INTEGER LastWriteTime;  // offset: 0x10 (16)
  union _LARGE_INTEGER ChangeTime;     // offset: 0x18 (24)
  ULONG FileAttributes;                // offset: 0x20 (32)
};

// 0x70 (112) bytes
struct _DUMP_INITIALIZATION_CONTEXT {
  ULONG Length;                                    // offset: 0x0 (0)
  ULONG Reserved;                                  // offset: 0x4 (4)
  VOID *MemoryBlock;                               // offset: 0x8 (8)
  VOID *CommonBuffer[2];                           // offset: 0xc (12)
  union _LARGE_INTEGER PhysicalAddress[2];         // offset: 0x18 (24)
  VOID (*StallRoutine)(ULONG arg1);                // offset: 0x28 (40)
  UCHAR (*OpenRoutine)(union _LARGE_INTEGER arg1); // offset: 0x2c (44)
  LONG(*WriteRoutine)
  (union _LARGE_INTEGER *arg1, struct _MDL *arg2); // offset: 0x30 (48)
  VOID (*FinishRoutine)();                         // offset: 0x34 (52)
  struct _ADAPTER_OBJECT *AdapterObject;           // offset: 0x38 (56)
  VOID *MappedRegisterBase;                        // offset: 0x3c (60)
  VOID *PortConfiguration;                         // offset: 0x40 (64)
  UCHAR CrashDump;                                 // offset: 0x44 (68)
  ULONG MaximumTransferSize;                       // offset: 0x48 (72)
  ULONG CommonBufferSize;                          // offset: 0x4c (76)
  VOID *TargetAddress;                             // offset: 0x50 (80)
  LONG(*WritePendingRoutine)
  (LONG arg1, union _LARGE_INTEGER *arg2, struct _MDL *arg3,
   VOID *arg4);         // offset: 0x54 (84)
  ULONG PartitionStyle; // offset: 0x58 (88)
  union {
    struct {
      ULONG Signature; // offset: 0x0 (0)
      ULONG CheckSum;  // offset: 0x4 (4)
    } Mbr;             // offset: 0x5c (92)
    struct {
      struct _GUID DiskId; // offset: 0x0 (0)
    } Gpt;                 // offset: 0x5c (92)

  } DiskInfo; // offset: 0x5c (92)
};

// 0xb0 (176) bytes
struct _DUMP_STACK_CONTEXT {
  struct _DUMP_INITIALIZATION_CONTEXT Init;       // offset: 0x0 (0)
  union _LARGE_INTEGER PartitionOffset;           // offset: 0x70 (112)
  VOID *DumpPointers;                             // offset: 0x78 (120)
  ULONG PointersLength;                           // offset: 0x7c (124)
  USHORT *ModulePrefix;                           // offset: 0x80 (128)
  struct _LIST_ENTRY DriverList;                  // offset: 0x84 (132)
  struct _STRING InitMsg;                         // offset: 0x8c (140)
  struct _STRING ProgMsg;                         // offset: 0x94 (148)
  struct _STRING DoneMsg;                         // offset: 0x9c (156)
  VOID *FileObject;                               // offset: 0xa4 (164)
  enum _DEVICE_USAGE_NOTIFICATION_TYPE UsageType; // offset: 0xa8 (168)
};

// 0x6c (108) bytes
struct _BUS_HANDLER {
  ULONG Version;                          // offset: 0x0 (0)
  enum _INTERFACE_TYPE InterfaceType;     // offset: 0x4 (4)
  enum _BUS_DATA_TYPE ConfigurationType;  // offset: 0x8 (8)
  ULONG BusNumber;                        // offset: 0xc (12)
  struct _DEVICE_OBJECT *DeviceObject;    // offset: 0x10 (16)
  struct _BUS_HANDLER *ParentHandler;     // offset: 0x14 (20)
  VOID *BusData;                          // offset: 0x18 (24)
  ULONG DeviceControlExtensionSize;       // offset: 0x1c (28)
  struct _SUPPORTED_RANGES *BusAddresses; // offset: 0x20 (32)
  ULONG Reserved[4];                      // offset: 0x24 (36)
  ULONG(*GetBusData)
  (struct _BUS_HANDLER *arg1, struct _BUS_HANDLER *arg2, ULONG arg3, VOID *arg4,
   ULONG arg5, ULONG arg6); // offset: 0x34 (52)
  ULONG(*SetBusData)
  (struct _BUS_HANDLER *arg1, struct _BUS_HANDLER *arg2, ULONG arg3, VOID *arg4,
   ULONG arg5, ULONG arg6); // offset: 0x38 (56)
  LONG(*AdjustResourceList)
  (struct _BUS_HANDLER *arg1, struct _BUS_HANDLER *arg2,
   struct _IO_RESOURCE_REQUIREMENTS_LIST **arg3); // offset: 0x3c (60)
  LONG(*AssignSlotResources)
  (struct _BUS_HANDLER *arg1, struct _BUS_HANDLER *arg2,
   struct _UNICODE_STRING *arg3, struct _UNICODE_STRING *arg4,
   struct _DRIVER_OBJECT *arg5, struct _DEVICE_OBJECT *arg6, ULONG arg7,
   struct _CM_RESOURCE_LIST **arg8); // offset: 0x40 (64)
  ULONG(*GetInterruptVector)
  (struct _BUS_HANDLER *arg1, struct _BUS_HANDLER *arg2, ULONG arg3, ULONG arg4,
   UCHAR *arg5, ULONG *arg6); // offset: 0x44 (68)
  UCHAR(*TranslateBusAddress)
  (struct _BUS_HANDLER *arg1, struct _BUS_HANDLER *arg2,
   union _LARGE_INTEGER arg3, ULONG *arg4,
   union _LARGE_INTEGER *arg5); // offset: 0x48 (72)
  VOID *Spare1;                 // offset: 0x4c (76)
  VOID *Spare2;                 // offset: 0x50 (80)
  VOID *Spare3;                 // offset: 0x54 (84)
  VOID *Spare4;                 // offset: 0x58 (88)
  VOID *Spare5;                 // offset: 0x5c (92)
  VOID *Spare6;                 // offset: 0x60 (96)
  VOID *Spare7;                 // offset: 0x64 (100)
  VOID *Spare8;                 // offset: 0x68 (104)
};

// 0x2d0 (720) bytes
struct _HHIVE {
  ULONG Signature; // offset: 0x0 (0)
  struct _CELL_DATA *(*GetCellRoutine)(struct _HHIVE *arg1,
                                       ULONG arg2); // offset: 0x4 (4)
  VOID(*ReleaseCellRoutine)
  (struct _HHIVE *arg1, ULONG arg2);                     // offset: 0x8 (8)
  VOID *(*Allocate)(ULONG arg1, UCHAR arg2, ULONG arg3); // offset: 0xc (12)
  VOID (*Free)(VOID *arg1, ULONG arg2);                  // offset: 0x10 (16)
  UCHAR(*FileSetSize)
  (struct _HHIVE *arg1, ULONG arg2, ULONG arg3,
   ULONG arg4); // offset: 0x14 (20)
  UCHAR(*FileWrite)
  (struct _HHIVE *arg1, ULONG arg2, struct CMP_OFFSET_ARRAY *arg3, ULONG arg4,
   ULONG *arg5); // offset: 0x18 (24)
  UCHAR(*FileRead)
  (struct _HHIVE *arg1, ULONG arg2, ULONG *arg3, VOID *arg4,
   ULONG arg5); // offset: 0x1c (28)
  UCHAR(*FileFlush)
  (struct _HHIVE *arg1, ULONG arg2, union _LARGE_INTEGER *arg3,
   ULONG arg4);                   // offset: 0x20 (32)
  struct _HBASE_BLOCK *BaseBlock; // offset: 0x24 (36)
  struct _RTL_BITMAP DirtyVector; // offset: 0x28 (40)
  ULONG DirtyCount;               // offset: 0x30 (48)
  ULONG DirtyAlloc;               // offset: 0x34 (52)
  ULONG BaseBlockAlloc;           // offset: 0x38 (56)
  ULONG Cluster;                  // offset: 0x3c (60)
  UCHAR Flat;                     // offset: 0x40 (64)
  UCHAR ReadOnly;                 // offset: 0x41 (65)
  UCHAR Log;                      // offset: 0x42 (66)
  UCHAR DirtyFlag;                // offset: 0x43 (67)
  ULONG HiveFlags;                // offset: 0x44 (68)
  ULONG LogSize;                  // offset: 0x48 (72)
  ULONG RefreshCount;             // offset: 0x4c (76)
  ULONG StorageTypeCount;         // offset: 0x50 (80)
  ULONG Version;                  // offset: 0x54 (84)
  struct _DUAL Storage[2];        // offset: 0x58 (88)
};

// 0x14 (20) bytes
union _FS_FILTER_PARAMETERS {
  struct {
    union _LARGE_INTEGER *EndingOffset;    // offset: 0x0 (0)
    struct _ERESOURCE **ResourceToRelease; // offset: 0x4 (4)
  } AcquireForModifiedPageWriter;          // offset: 0x0 (0)
  struct {
    struct _ERESOURCE *ResourceToRelease; // offset: 0x0 (0)
  } ReleaseForModifiedPageWriter;         // offset: 0x0 (0)
  struct {
    enum _FS_FILTER_SECTION_SYNC_TYPE SyncType; // offset: 0x0 (0)
    ULONG PageProtection;                       // offset: 0x4 (4)
  } AcquireForSectionSynchronization;           // offset: 0x0 (0)
  struct {
    VOID *Argument1; // offset: 0x0 (0)
    VOID *Argument2; // offset: 0x4 (4)
    VOID *Argument3; // offset: 0x8 (8)
    VOID *Argument4; // offset: 0xc (12)
    VOID *Argument5; // offset: 0x10 (16)
  } Others;          // offset: 0x0 (0)
};

// 0x24 (36) bytes
struct _FS_FILTER_CALLBACK_DATA {
  ULONG SizeOfFsFilterCallbackData;       // offset: 0x0 (0)
  UCHAR Operation;                        // offset: 0x4 (4)
  UCHAR Reserved;                         // offset: 0x5 (5)
  struct _DEVICE_OBJECT *DeviceObject;    // offset: 0x8 (8)
  struct _FILE_OBJECT *FileObject;        // offset: 0xc (12)
  union _FS_FILTER_PARAMETERS Parameters; // offset: 0x10 (16)
};

// 0x38 (56) bytes
struct _FS_FILTER_CALLBACKS {
  ULONG SizeOfFsFilterCallbacks; // offset: 0x0 (0)
  ULONG Reserved;                // offset: 0x4 (4)
  LONG(*PreAcquireForSectionSynchronization)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, VOID **arg2); // offset: 0x8 (8)
  VOID(*PostAcquireForSectionSynchronization)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, LONG arg2,
   VOID *arg3); // offset: 0xc (12)
  LONG(*PreReleaseForSectionSynchronization)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, VOID **arg2); // offset: 0x10 (16)
  VOID(*PostReleaseForSectionSynchronization)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, LONG arg2,
   VOID *arg3); // offset: 0x14 (20)
  LONG(*PreAcquireForCcFlush)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, VOID **arg2); // offset: 0x18 (24)
  VOID(*PostAcquireForCcFlush)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, LONG arg2,
   VOID *arg3); // offset: 0x1c (28)
  LONG(*PreReleaseForCcFlush)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, VOID **arg2); // offset: 0x20 (32)
  VOID(*PostReleaseForCcFlush)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, LONG arg2,
   VOID *arg3); // offset: 0x24 (36)
  LONG(*PreAcquireForModifiedPageWriter)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, VOID **arg2); // offset: 0x28 (40)
  VOID(*PostAcquireForModifiedPageWriter)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, LONG arg2,
   VOID *arg3); // offset: 0x2c (44)
  LONG(*PreReleaseForModifiedPageWriter)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, VOID **arg2); // offset: 0x30 (48)
  VOID(*PostReleaseForModifiedPageWriter)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, LONG arg2,
   VOID *arg3); // offset: 0x34 (52)
};

// 0x1c (28) bytes
struct _DRIVER_EXTENSION {
  struct _DRIVER_OBJECT *DriverObject; // offset: 0x0 (0)
  LONG(*AddDevice)
  (struct _DRIVER_OBJECT *arg1, struct _DEVICE_OBJECT *arg2); // offset: 0x4 (4)
  ULONG Count;                                                // offset: 0x8 (8)
  struct _UNICODE_STRING ServiceKeyName;              // offset: 0xc (12)
  struct _IO_CLIENT_EXTENSION *ClientDriverExtension; // offset: 0x14 (20)
  struct _FS_FILTER_CALLBACKS *FsFilterCallbacks;     // offset: 0x18 (24)
};

// 0x70 (112) bytes
struct _FILE_OBJECT {
  SHORT Type;                                            // offset: 0x0 (0)
  SHORT Size;                                            // offset: 0x2 (2)
  struct _DEVICE_OBJECT *DeviceObject;                   // offset: 0x4 (4)
  struct _VPB *Vpb;                                      // offset: 0x8 (8)
  VOID *FsContext;                                       // offset: 0xc (12)
  VOID *FsContext2;                                      // offset: 0x10 (16)
  struct _SECTION_OBJECT_POINTERS *SectionObjectPointer; // offset: 0x14 (20)
  VOID *PrivateCacheMap;                                 // offset: 0x18 (24)
  LONG FinalStatus;                                      // offset: 0x1c (28)
  struct _FILE_OBJECT *RelatedFileObject;                // offset: 0x20 (32)
  UCHAR LockOperation;                                   // offset: 0x24 (36)
  UCHAR DeletePending;                                   // offset: 0x25 (37)
  UCHAR ReadAccess;                                      // offset: 0x26 (38)
  UCHAR WriteAccess;                                     // offset: 0x27 (39)
  UCHAR DeleteAccess;                                    // offset: 0x28 (40)
  UCHAR SharedRead;                                      // offset: 0x29 (41)
  UCHAR SharedWrite;                                     // offset: 0x2a (42)
  UCHAR SharedDelete;                                    // offset: 0x2b (43)
  ULONG Flags;                                           // offset: 0x2c (44)
  struct _UNICODE_STRING FileName;                       // offset: 0x30 (48)
  union _LARGE_INTEGER CurrentByteOffset;                // offset: 0x38 (56)
  ULONG Waiters;                                         // offset: 0x40 (64)
  ULONG Busy;                                            // offset: 0x44 (68)
  VOID *LastLock;                                        // offset: 0x48 (72)
  struct _KEVENT Lock;                                   // offset: 0x4c (76)
  struct _KEVENT Event;                                  // offset: 0x5c (92)
  struct _IO_COMPLETION_CONTEXT *CompletionContext;      // offset: 0x6c (108)
};

// 0x70 (112) bytes
struct _IRP {
  SHORT Type;              // offset: 0x0 (0)
  USHORT Size;             // offset: 0x2 (2)
  struct _MDL *MdlAddress; // offset: 0x4 (4)
  ULONG Flags;             // offset: 0x8 (8)
  union {
    struct _IRP *MasterIrp; // offset: 0xc (12)
    LONG IrpCount;          // offset: 0xc (12)
    VOID *SystemBuffer;     // offset: 0xc (12)

  } AssociatedIrp;                    // offset: 0xc (12)
  struct _LIST_ENTRY ThreadListEntry; // offset: 0x10 (16)
  struct _IO_STATUS_BLOCK IoStatus;   // offset: 0x18 (24)
  CHAR RequestorMode;                 // offset: 0x20 (32)
  UCHAR PendingReturned;              // offset: 0x21 (33)
  CHAR StackCount;                    // offset: 0x22 (34)
  CHAR CurrentLocation;               // offset: 0x23 (35)
  UCHAR Cancel;                       // offset: 0x24 (36)
  UCHAR CancelIrql;                   // offset: 0x25 (37)
  CHAR ApcEnvironment;                // offset: 0x26 (38)
  UCHAR AllocationFlags;              // offset: 0x27 (39)
  struct _IO_STATUS_BLOCK *UserIosb;  // offset: 0x28 (40)
  struct _KEVENT *UserEvent;          // offset: 0x2c (44)
  union {
    struct {
      VOID(*UserApcRoutine)
      (VOID *arg1, struct _IO_STATUS_BLOCK *arg2,
       ULONG arg3);                      // offset: 0x0 (0)
      VOID *UserApcContext;              // offset: 0x4 (4)
    } AsynchronousParameters;            // offset: 0x30 (48)
    union _LARGE_INTEGER AllocationSize; // offset: 0x30 (48)

  } Overlay; // offset: 0x30 (48)
  VOID(*CancelRoutine)
  (struct _DEVICE_OBJECT *arg1, struct _IRP *arg2); // offset: 0x38 (56)
  VOID *UserBuffer;                                 // offset: 0x3c (60)
  union {
    struct {
      union {
        struct _KDEVICE_QUEUE_ENTRY DeviceQueueEntry; // offset: 0x0 (0)
        VOID *DriverContext[4];                       // offset: 0x0 (0)
      };
      struct _ETHREAD *Thread;      // offset: 0x10 (16)
      CHAR *AuxiliaryBuffer;        // offset: 0x14 (20)
      struct _LIST_ENTRY ListEntry; // offset: 0x18 (24)
      union {
        struct _IO_STACK_LOCATION *CurrentStackLocation; // offset: 0x20 (32)
        ULONG PacketType;                                // offset: 0x20 (32)
      };
      struct _FILE_OBJECT *OriginalFileObject; // offset: 0x24 (36)
    } Overlay;                                 // offset: 0x40 (64)
    struct _KAPC Apc;                          // offset: 0x40 (64)
    VOID *CompletionKey;                       // offset: 0x40 (64)

  } Tail; // offset: 0x40 (64)
};

// 0x2c (44) bytes
struct _POP_DEVICE_POWER_IRP {
  struct _SINGLE_LIST_ENTRY Free;   // offset: 0x0 (0)
  struct _IRP *Irp;                 // offset: 0x4 (4)
  struct _PO_DEVICE_NOTIFY *Notify; // offset: 0x8 (8)
  struct _LIST_ENTRY Pending;       // offset: 0xc (12)
  struct _LIST_ENTRY Complete;      // offset: 0x14 (20)
  struct _LIST_ENTRY Abort;         // offset: 0x1c (28)
  struct _LIST_ENTRY Failed;        // offset: 0x24 (36)
};

// 0x40 (64) bytes
struct PCI_POWER_STATE {
  enum _SYSTEM_POWER_STATE CurrentSystemState;    // offset: 0x0 (0)
  enum _DEVICE_POWER_STATE CurrentDeviceState;    // offset: 0x4 (4)
  enum _SYSTEM_POWER_STATE SystemWakeLevel;       // offset: 0x8 (8)
  enum _DEVICE_POWER_STATE DeviceWakeLevel;       // offset: 0xc (12)
  enum _DEVICE_POWER_STATE SystemStateMapping[7]; // offset: 0x10 (16)
  struct _IRP *WaitWakeIrp;                       // offset: 0x2c (44)
  VOID(*SavedCancelRoutine)
  (struct _DEVICE_OBJECT *arg1, struct _IRP *arg2); // offset: 0x30 (48)
  LONG Paging;                                      // offset: 0x34 (52)
  LONG Hibernate;                                   // offset: 0x38 (56)
  LONG CrashDump;                                   // offset: 0x3c (60)
};

// 0x120 (288) bytes
struct _DEVICE_NODE {
  struct _DEVICE_NODE *Sibling;                     // offset: 0x0 (0)
  struct _DEVICE_NODE *Child;                       // offset: 0x4 (4)
  struct _DEVICE_NODE *Parent;                      // offset: 0x8 (8)
  struct _DEVICE_NODE *LastChild;                   // offset: 0xc (12)
  ULONG Level;                                      // offset: 0x10 (16)
  struct _PO_DEVICE_NOTIFY *Notify;                 // offset: 0x14 (20)
  enum _PNP_DEVNODE_STATE State;                    // offset: 0x18 (24)
  enum _PNP_DEVNODE_STATE PreviousState;            // offset: 0x1c (28)
  enum _PNP_DEVNODE_STATE StateHistory[20];         // offset: 0x20 (32)
  ULONG StateHistoryEntry;                          // offset: 0x70 (112)
  LONG CompletionStatus;                            // offset: 0x74 (116)
  struct _IRP *PendingIrp;                          // offset: 0x78 (120)
  ULONG Flags;                                      // offset: 0x7c (124)
  ULONG UserFlags;                                  // offset: 0x80 (128)
  ULONG Problem;                                    // offset: 0x84 (132)
  struct _DEVICE_OBJECT *PhysicalDeviceObject;      // offset: 0x88 (136)
  struct _CM_RESOURCE_LIST *ResourceList;           // offset: 0x8c (140)
  struct _CM_RESOURCE_LIST *ResourceListTranslated; // offset: 0x90 (144)
  struct _UNICODE_STRING InstancePath;              // offset: 0x94 (148)
  struct _UNICODE_STRING ServiceName;               // offset: 0x9c (156)
  struct _DEVICE_OBJECT *DuplicatePDO;              // offset: 0xa4 (164)
  struct _IO_RESOURCE_REQUIREMENTS_LIST
      *ResourceRequirements;               // offset: 0xa8 (168)
  enum _INTERFACE_TYPE InterfaceType;      // offset: 0xac (172)
  ULONG BusNumber;                         // offset: 0xb0 (176)
  enum _INTERFACE_TYPE ChildInterfaceType; // offset: 0xb4 (180)
  ULONG ChildBusNumber;                    // offset: 0xb8 (184)
  USHORT ChildBusTypeIndex;                // offset: 0xbc (188)
  UCHAR RemovalPolicy;                     // offset: 0xbe (190)
  UCHAR HardwareRemovalPolicy;             // offset: 0xbf (191)
  struct _LIST_ENTRY TargetDeviceNotify;   // offset: 0xc0 (192)
  struct _LIST_ENTRY DeviceArbiterList;    // offset: 0xc8 (200)
  struct _LIST_ENTRY DeviceTranslatorList; // offset: 0xd0 (208)
  USHORT NoTranslatorMask;                 // offset: 0xd8 (216)
  USHORT QueryTranslatorMask;              // offset: 0xda (218)
  USHORT NoArbiterMask;                    // offset: 0xdc (220)
  USHORT QueryArbiterMask;                 // offset: 0xde (222)
  union {
    struct _DEVICE_NODE *LegacyDeviceNode;            // offset: 0xe0 (224)
    struct _DEVICE_RELATIONS *PendingDeviceRelations; // offset: 0xe0 (224)

  } OverUsed1; // offset: 0xe0 (224)
  union {
    struct _DEVICE_NODE *NextResourceDeviceNode; // offset: 0xe4 (228)

  } OverUsed2;                             // offset: 0xe4 (228)
  struct _CM_RESOURCE_LIST *BootResources; // offset: 0xe8 (232)
  ULONG CapabilityFlags;                   // offset: 0xec (236)
  struct {
    enum PROFILE_STATUS DockStatus;           // offset: 0x0 (0)
    struct _LIST_ENTRY ListEntry;             // offset: 0x4 (4)
    USHORT *SerialNumber;                     // offset: 0xc (12)
  } DockInfo;                                 // offset: 0xf0 (240)
  ULONG DisableableDepends;                   // offset: 0x100 (256)
  struct _LIST_ENTRY PendedSetInterfaceState; // offset: 0x104 (260)
  struct _LIST_ENTRY LegacyBusListEntry;      // offset: 0x10c (268)
  ULONG DriverUnloadRetryCount;               // offset: 0x114 (276)
  struct _DEVICE_NODE *PreviousParent;        // offset: 0x118 (280)
  ULONG DeletedChildren;                      // offset: 0x11c (284)
};

// 0x60 (96) bytes
struct _MMMOD_WRITER_MDL_ENTRY {
  struct _LIST_ENTRY Links;         // offset: 0x0 (0)
  union _LARGE_INTEGER WriteOffset; // offset: 0x8 (8)
  union {
    struct _IO_STATUS_BLOCK IoStatus; // offset: 0x10 (16)
    union _LARGE_INTEGER LastByte;    // offset: 0x10 (16)

  } u;                                           // offset: 0x10 (16)
  struct _IRP *Irp;                              // offset: 0x18 (24)
  ULONG LastPageToWrite;                         // offset: 0x1c (28)
  struct _MMMOD_WRITER_LISTHEAD *PagingListHead; // offset: 0x20 (32)
  struct _LIST_ENTRY *CurrentList;               // offset: 0x24 (36)
  struct _MMPAGING_FILE *PagingFile;             // offset: 0x28 (40)
  struct _FILE_OBJECT *File;                     // offset: 0x2c (44)
  struct _CONTROL_AREA *ControlArea;             // offset: 0x30 (48)
  struct _ERESOURCE *FileResource;               // offset: 0x34 (52)
  union _LARGE_INTEGER IssueTime;                // offset: 0x38 (56)
  struct _MDL Mdl;                               // offset: 0x40 (64)
  ULONG Page[1];                                 // offset: 0x5c (92)
};

// 0x3c (60) bytes
struct _MMPAGING_FILE {
  ULONG Size;                               // offset: 0x0 (0)
  ULONG MaximumSize;                        // offset: 0x4 (4)
  ULONG MinimumSize;                        // offset: 0x8 (8)
  ULONG FreeSpace;                          // offset: 0xc (12)
  ULONG CurrentUsage;                       // offset: 0x10 (16)
  ULONG PeakUsage;                          // offset: 0x14 (20)
  ULONG HighestPage;                        // offset: 0x18 (24)
  struct _FILE_OBJECT *File;                // offset: 0x1c (28)
  struct _MMMOD_WRITER_MDL_ENTRY *Entry[2]; // offset: 0x20 (32)
  struct _UNICODE_STRING PageFileName;      // offset: 0x28 (40)
  struct _RTL_BITMAP *Bitmap;               // offset: 0x30 (48)
  ULONG PageFileNumber : 4;                 // offset: 0x34 (52)
  ULONG ReferenceCount : 4;                 // offset: 0x34 (52)
  ULONG BootPartition : 1;                  // offset: 0x34 (52)
  ULONG Reserved : 23;                      // offset: 0x34 (52)
  VOID *FileHandle;                         // offset: 0x38 (56)
};

// 0x24 (36) bytes
struct _IO_STACK_LOCATION {
  UCHAR MajorFunction; // offset: 0x0 (0)
  UCHAR MinorFunction; // offset: 0x1 (1)
  UCHAR Flags;         // offset: 0x2 (2)
  UCHAR Control;       // offset: 0x3 (3)
  union {
    struct {
      struct _IO_SECURITY_CONTEXT *SecurityContext; // offset: 0x0 (0)
      ULONG Options;                                // offset: 0x4 (4)
      USHORT FileAttributes;                        // offset: 0x8 (8)
      USHORT ShareAccess;                           // offset: 0xa (10)
      ULONG EaLength;                               // offset: 0xc (12)
    } Create;                                       // offset: 0x4 (4)
    struct {
      struct _IO_SECURITY_CONTEXT *SecurityContext;     // offset: 0x0 (0)
      ULONG Options;                                    // offset: 0x4 (4)
      USHORT Reserved;                                  // offset: 0x8 (8)
      USHORT ShareAccess;                               // offset: 0xa (10)
      struct _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // offset: 0xc (12)
    } CreatePipe;                                       // offset: 0x4 (4)
    struct {
      struct _IO_SECURITY_CONTEXT *SecurityContext;   // offset: 0x0 (0)
      ULONG Options;                                  // offset: 0x4 (4)
      USHORT Reserved;                                // offset: 0x8 (8)
      USHORT ShareAccess;                             // offset: 0xa (10)
      struct _MAILSLOT_CREATE_PARAMETERS *Parameters; // offset: 0xc (12)
    } CreateMailslot;                                 // offset: 0x4 (4)
    struct {
      ULONG Length;                    // offset: 0x0 (0)
      ULONG Key;                       // offset: 0x4 (4)
      union _LARGE_INTEGER ByteOffset; // offset: 0x8 (8)
    } Read;                            // offset: 0x4 (4)
    struct {
      ULONG Length;                    // offset: 0x0 (0)
      ULONG Key;                       // offset: 0x4 (4)
      union _LARGE_INTEGER ByteOffset; // offset: 0x8 (8)
    } Write;                           // offset: 0x4 (4)
    struct {
      ULONG Length;                                      // offset: 0x0 (0)
      struct _UNICODE_STRING *FileName;                  // offset: 0x4 (4)
      enum _FILE_INFORMATION_CLASS FileInformationClass; // offset: 0x8 (8)
      ULONG FileIndex;                                   // offset: 0xc (12)
    } QueryDirectory;                                    // offset: 0x4 (4)
    struct {
      ULONG Length;           // offset: 0x0 (0)
      ULONG CompletionFilter; // offset: 0x4 (4)
    } NotifyDirectory;        // offset: 0x4 (4)
    struct {
      ULONG Length;                                      // offset: 0x0 (0)
      enum _FILE_INFORMATION_CLASS FileInformationClass; // offset: 0x4 (4)
    } QueryFile;                                         // offset: 0x4 (4)
    struct {
      ULONG Length;                                      // offset: 0x0 (0)
      enum _FILE_INFORMATION_CLASS FileInformationClass; // offset: 0x4 (4)
      struct _FILE_OBJECT *FileObject;                   // offset: 0x8 (8)
      union {
        struct {
          UCHAR ReplaceIfExists; // offset: 0xc (12)
          UCHAR AdvanceOnly;     // offset: 0xd (13)
        };
        ULONG ClusterCount; // offset: 0xc (12)
        VOID *DeleteHandle; // offset: 0xc (12)
      };
    } SetFile; // offset: 0x4 (4)
    struct {
      ULONG Length;       // offset: 0x0 (0)
      VOID *EaList;       // offset: 0x4 (4)
      ULONG EaListLength; // offset: 0x8 (8)
      ULONG EaIndex;      // offset: 0xc (12)
    } QueryEa;            // offset: 0x4 (4)
    struct {
      ULONG Length; // offset: 0x0 (0)
    } SetEa;        // offset: 0x4 (4)
    struct {
      ULONG Length;                         // offset: 0x0 (0)
      enum _FSINFOCLASS FsInformationClass; // offset: 0x4 (4)
    } QueryVolume;                          // offset: 0x4 (4)
    struct {
      ULONG Length;                         // offset: 0x0 (0)
      enum _FSINFOCLASS FsInformationClass; // offset: 0x4 (4)
    } SetVolume;                            // offset: 0x4 (4)
    struct {
      ULONG OutputBufferLength; // offset: 0x0 (0)
      ULONG InputBufferLength;  // offset: 0x4 (4)
      ULONG FsControlCode;      // offset: 0x8 (8)
      VOID *Type3InputBuffer;   // offset: 0xc (12)
    } FileSystemControl;        // offset: 0x4 (4)
    struct {
      union _LARGE_INTEGER *Length;    // offset: 0x0 (0)
      ULONG Key;                       // offset: 0x4 (4)
      union _LARGE_INTEGER ByteOffset; // offset: 0x8 (8)
    } LockControl;                     // offset: 0x4 (4)
    struct {
      ULONG OutputBufferLength; // offset: 0x0 (0)
      ULONG InputBufferLength;  // offset: 0x4 (4)
      ULONG IoControlCode;      // offset: 0x8 (8)
      VOID *Type3InputBuffer;   // offset: 0xc (12)
    } DeviceIoControl;          // offset: 0x4 (4)
    struct {
      ULONG SecurityInformation; // offset: 0x0 (0)
      ULONG Length;              // offset: 0x4 (4)
    } QuerySecurity;             // offset: 0x4 (4)
    struct {
      ULONG SecurityInformation; // offset: 0x0 (0)
      VOID *SecurityDescriptor;  // offset: 0x4 (4)
    } SetSecurity;               // offset: 0x4 (4)
    struct {
      struct _VPB *Vpb;                    // offset: 0x0 (0)
      struct _DEVICE_OBJECT *DeviceObject; // offset: 0x4 (4)
    } MountVolume;                         // offset: 0x4 (4)
    struct {
      struct _VPB *Vpb;                    // offset: 0x0 (0)
      struct _DEVICE_OBJECT *DeviceObject; // offset: 0x4 (4)
    } VerifyVolume;                        // offset: 0x4 (4)
    struct {
      struct _SCSI_REQUEST_BLOCK *Srb; // offset: 0x0 (0)
    } Scsi;                            // offset: 0x4 (4)
    struct {
      ULONG Length;                                // offset: 0x0 (0)
      VOID *StartSid;                              // offset: 0x4 (4)
      struct _FILE_GET_QUOTA_INFORMATION *SidList; // offset: 0x8 (8)
      ULONG SidListLength;                         // offset: 0xc (12)
    } QueryQuota;                                  // offset: 0x4 (4)
    struct {
      ULONG Length; // offset: 0x0 (0)
    } SetQuota;     // offset: 0x4 (4)
    struct {
      enum _DEVICE_RELATION_TYPE Type; // offset: 0x0 (0)
    } QueryDeviceRelations;            // offset: 0x4 (4)
    struct {
      struct _GUID *InterfaceType;  // offset: 0x0 (0)
      USHORT Size;                  // offset: 0x4 (4)
      USHORT Version;               // offset: 0x6 (6)
      struct _INTERFACE *Interface; // offset: 0x8 (8)
      VOID *InterfaceSpecificData;  // offset: 0xc (12)
    } QueryInterface;               // offset: 0x4 (4)
    struct {
      struct _DEVICE_CAPABILITIES *Capabilities; // offset: 0x0 (0)
    } DeviceCapabilities;                        // offset: 0x4 (4)
    struct {
      struct _IO_RESOURCE_REQUIREMENTS_LIST
          *IoResourceRequirementList; // offset: 0x0 (0)
    } FilterResourceRequirements;     // offset: 0x4 (4)
    struct {
      ULONG WhichSpace; // offset: 0x0 (0)
      VOID *Buffer;     // offset: 0x4 (4)
      ULONG Offset;     // offset: 0x8 (8)
      ULONG Length;     // offset: 0xc (12)
    } ReadWriteConfig;  // offset: 0x4 (4)
    struct {
      UCHAR Lock; // offset: 0x0 (0)
    } SetLock;    // offset: 0x4 (4)
    struct {
      enum BUS_QUERY_ID_TYPE IdType; // offset: 0x0 (0)
    } QueryId;                       // offset: 0x4 (4)
    struct {
      enum DEVICE_TEXT_TYPE DeviceTextType; // offset: 0x0 (0)
      ULONG LocaleId;                       // offset: 0x4 (4)
    } QueryDeviceText;                      // offset: 0x4 (4)
    struct {
      UCHAR InPath;                              // offset: 0x0 (0)
      UCHAR Reserved[3];                         // offset: 0x1 (1)
      enum _DEVICE_USAGE_NOTIFICATION_TYPE Type; // offset: 0x4 (4)
    } UsageNotification;                         // offset: 0x4 (4)
    struct {
      enum _SYSTEM_POWER_STATE PowerState; // offset: 0x0 (0)
    } WaitWake;                            // offset: 0x4 (4)
    struct {
      struct _POWER_SEQUENCE *PowerSequence; // offset: 0x0 (0)
    } PowerSequence;                         // offset: 0x4 (4)
    struct {
      ULONG SystemContext;            // offset: 0x0 (0)
      enum _POWER_STATE_TYPE Type;    // offset: 0x4 (4)
      union _POWER_STATE State;       // offset: 0x8 (8)
      enum POWER_ACTION ShutdownType; // offset: 0xc (12)
    } Power;                          // offset: 0x4 (4)
    struct {
      struct _CM_RESOURCE_LIST *AllocatedResources;           // offset: 0x0 (0)
      struct _CM_RESOURCE_LIST *AllocatedResourcesTranslated; // offset: 0x4 (4)
    } StartDevice;                                            // offset: 0x4 (4)
    struct {
      ULONG ProviderId; // offset: 0x0 (0)
      VOID *DataPath;   // offset: 0x4 (4)
      ULONG BufferSize; // offset: 0x8 (8)
      VOID *Buffer;     // offset: 0xc (12)
    } WMI;              // offset: 0x4 (4)
    struct {
      VOID *Argument1; // offset: 0x0 (0)
      VOID *Argument2; // offset: 0x4 (4)
      VOID *Argument3; // offset: 0x8 (8)
      VOID *Argument4; // offset: 0xc (12)
    } Others;          // offset: 0x4 (4)

  } Parameters;                        // offset: 0x4 (4)
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x14 (20)
  struct _FILE_OBJECT *FileObject;     // offset: 0x18 (24)
  LONG(*CompletionRoutine)
  (struct _DEVICE_OBJECT *arg1, struct _IRP *arg2,
   VOID *arg3);  // offset: 0x1c (28)
  VOID *Context; // offset: 0x20 (32)
};

// 0x8 (8) bytes
struct _PCI_MN_DISPATCH_TABLE {
  enum _PCI_DISPATCH_STYLE DispatchStyle; // offset: 0x0 (0)
  LONG(*DispatchFunction)
  (struct _IRP *arg1, struct _IO_STACK_LOCATION *arg2,
   struct _PCI_COMMON_EXTENSION *arg3); // offset: 0x4 (4)
};

// 0x20 (32) bytes
struct _PCI_MJ_DISPATCH_TABLE {
  ULONG PnpIrpMaximumMinorFunction;                       // offset: 0x0 (0)
  struct _PCI_MN_DISPATCH_TABLE *PnpIrpDispatchTable;     // offset: 0x4 (4)
  ULONG PowerIrpMaximumMinorFunction;                     // offset: 0x8 (8)
  struct _PCI_MN_DISPATCH_TABLE *PowerIrpDispatchTable;   // offset: 0xc (12)
  enum _PCI_DISPATCH_STYLE SystemControlIrpDispatchStyle; // offset: 0x10 (16)
  LONG(*SystemControlIrpDispatchFunction)
  (struct _IRP *arg1, struct _IO_STACK_LOCATION *arg2,
   struct _PCI_COMMON_EXTENSION *arg3);           // offset: 0x14 (20)
  enum _PCI_DISPATCH_STYLE OtherIrpDispatchStyle; // offset: 0x18 (24)
  LONG(*OtherIrpDispatchFunction)
  (struct _IRP *arg1, struct _IO_STACK_LOCATION *arg2,
   struct _PCI_COMMON_EXTENSION *arg3); // offset: 0x1c (28)
};

// 0x20 (32) bytes
struct _PCI_COMMON_EXTENSION {
  VOID *Next;                                      // offset: 0x0 (0)
  enum PCI_SIGNATURE ExtensionType;                // offset: 0x4 (4)
  struct _PCI_MJ_DISPATCH_TABLE *IrpDispatchTable; // offset: 0x8 (8)
  UCHAR DeviceState;                               // offset: 0xc (12)
  UCHAR TentativeNextState;                        // offset: 0xd (13)
  struct _KEVENT SecondaryExtLock;                 // offset: 0x10 (16)
};

// 0xc0 (192) bytes
struct _PCI_FDO_EXTENSION {
  struct _SINGLE_LIST_ENTRY List;                      // offset: 0x0 (0)
  enum PCI_SIGNATURE ExtensionType;                    // offset: 0x4 (4)
  struct _PCI_MJ_DISPATCH_TABLE *IrpDispatchTable;     // offset: 0x8 (8)
  UCHAR DeviceState;                                   // offset: 0xc (12)
  UCHAR TentativeNextState;                            // offset: 0xd (13)
  struct _KEVENT SecondaryExtLock;                     // offset: 0x10 (16)
  struct _DEVICE_OBJECT *PhysicalDeviceObject;         // offset: 0x20 (32)
  struct _DEVICE_OBJECT *FunctionalDeviceObject;       // offset: 0x24 (36)
  struct _DEVICE_OBJECT *AttachedDeviceObject;         // offset: 0x28 (40)
  struct _KEVENT ChildListLock;                        // offset: 0x2c (44)
  struct _PCI_PDO_EXTENSION *ChildPdoList;             // offset: 0x3c (60)
  struct _PCI_FDO_EXTENSION *BusRootFdoExtension;      // offset: 0x40 (64)
  struct _PCI_FDO_EXTENSION *ParentFdoExtension;       // offset: 0x44 (68)
  struct _PCI_PDO_EXTENSION *ChildBridgePdoList;       // offset: 0x48 (72)
  struct _PCI_BUS_INTERFACE_STANDARD *PciBusInterface; // offset: 0x4c (76)
  UCHAR MaxSubordinateBus;                             // offset: 0x50 (80)
  struct _BUS_HANDLER *BusHandler;                     // offset: 0x54 (84)
  UCHAR BaseBus;                                       // offset: 0x58 (88)
  UCHAR Fake;                                          // offset: 0x59 (89)
  UCHAR ChildDelete;                                   // offset: 0x5a (90)
  UCHAR Scanned;                                       // offset: 0x5b (91)
  UCHAR ArbitersInitialized;                           // offset: 0x5c (92)
  UCHAR BrokenVideoHackApplied;                        // offset: 0x5d (93)
  UCHAR Hibernated;                                    // offset: 0x5e (94)
  struct PCI_POWER_STATE PowerState;                   // offset: 0x60 (96)
  struct _SINGLE_LIST_ENTRY SecondaryExtension;        // offset: 0xa0 (160)
  ULONG ChildWaitWakeCount;                            // offset: 0xa4 (164)
  struct _PCI_COMMON_CONFIG *PreservedConfig;          // offset: 0xa8 (168)
  struct _PCI_LOCK Lock;                               // offset: 0xac (172)
  struct {
    UCHAR Acquired;      // offset: 0x0 (0)
    UCHAR CacheLineSize; // offset: 0x1 (1)
    UCHAR LatencyTimer;  // offset: 0x2 (2)
    UCHAR EnablePERR;    // offset: 0x3 (3)
    UCHAR EnableSERR;    // offset: 0x4 (4)
  } HotPlugParameters;   // offset: 0xb4 (180)
  ULONG BusHackFlags;    // offset: 0xbc (188)
};

// 0x70 (112) bytes
struct _FAST_IO_DISPATCH {
  ULONG SizeOfFastIoDispatch; // offset: 0x0 (0)
  UCHAR(*FastIoCheckIfPossible)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   UCHAR arg4, ULONG arg5, UCHAR arg6, struct _IO_STATUS_BLOCK *arg7,
   struct _DEVICE_OBJECT *arg8); // offset: 0x4 (4)
  UCHAR(*FastIoRead)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   UCHAR arg4, ULONG arg5, VOID *arg6, struct _IO_STATUS_BLOCK *arg7,
   struct _DEVICE_OBJECT *arg8); // offset: 0x8 (8)
  UCHAR(*FastIoWrite)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   UCHAR arg4, ULONG arg5, VOID *arg6, struct _IO_STATUS_BLOCK *arg7,
   struct _DEVICE_OBJECT *arg8); // offset: 0xc (12)
  UCHAR(*FastIoQueryBasicInfo)
  (struct _FILE_OBJECT *arg1, UCHAR arg2, struct _FILE_BASIC_INFORMATION *arg3,
   struct _IO_STATUS_BLOCK *arg4,
   struct _DEVICE_OBJECT *arg5); // offset: 0x10 (16)
  UCHAR(*FastIoQueryStandardInfo)
  (struct _FILE_OBJECT *arg1, UCHAR arg2,
   struct _FILE_STANDARD_INFORMATION *arg3, struct _IO_STATUS_BLOCK *arg4,
   struct _DEVICE_OBJECT *arg5); // offset: 0x14 (20)
  UCHAR(*FastIoLock)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2,
   union _LARGE_INTEGER *arg3, struct _EPROCESS *arg4, ULONG arg5, UCHAR arg6,
   UCHAR arg7, struct _IO_STATUS_BLOCK *arg8,
   struct _DEVICE_OBJECT *arg9); // offset: 0x18 (24)
  UCHAR(*FastIoUnlockSingle)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2,
   union _LARGE_INTEGER *arg3, struct _EPROCESS *arg4, ULONG arg5,
   struct _IO_STATUS_BLOCK *arg6,
   struct _DEVICE_OBJECT *arg7); // offset: 0x1c (28)
  UCHAR(*FastIoUnlockAll)
  (struct _FILE_OBJECT *arg1, struct _EPROCESS *arg2,
   struct _IO_STATUS_BLOCK *arg3,
   struct _DEVICE_OBJECT *arg4); // offset: 0x20 (32)
  UCHAR(*FastIoUnlockAllByKey)
  (struct _FILE_OBJECT *arg1, VOID *arg2, ULONG arg3,
   struct _IO_STATUS_BLOCK *arg4,
   struct _DEVICE_OBJECT *arg5); // offset: 0x24 (36)
  UCHAR(*FastIoDeviceControl)
  (struct _FILE_OBJECT *arg1, UCHAR arg2, VOID *arg3, ULONG arg4, VOID *arg5,
   ULONG arg6, ULONG arg7, struct _IO_STATUS_BLOCK *arg8,
   struct _DEVICE_OBJECT *arg9); // offset: 0x28 (40)
  VOID(*AcquireFileForNtCreateSection)
  (struct _FILE_OBJECT *arg1); // offset: 0x2c (44)
  VOID(*ReleaseFileForNtCreateSection)
  (struct _FILE_OBJECT *arg1); // offset: 0x30 (48)
  VOID(*FastIoDetachDevice)
  (struct _DEVICE_OBJECT *arg1,
   struct _DEVICE_OBJECT *arg2); // offset: 0x34 (52)
  UCHAR(*FastIoQueryNetworkOpenInfo)
  (struct _FILE_OBJECT *arg1, UCHAR arg2,
   struct _FILE_NETWORK_OPEN_INFORMATION *arg3, struct _IO_STATUS_BLOCK *arg4,
   struct _DEVICE_OBJECT *arg5); // offset: 0x38 (56)
  LONG(*AcquireForModWrite)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2,
   struct _ERESOURCE **arg3, struct _DEVICE_OBJECT *arg4); // offset: 0x3c (60)
  UCHAR(*MdlRead)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   ULONG arg4, struct _MDL **arg5, struct _IO_STATUS_BLOCK *arg6,
   struct _DEVICE_OBJECT *arg7); // offset: 0x40 (64)
  UCHAR(*MdlReadComplete)
  (struct _FILE_OBJECT *arg1, struct _MDL *arg2,
   struct _DEVICE_OBJECT *arg3); // offset: 0x44 (68)
  UCHAR(*PrepareMdlWrite)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   ULONG arg4, struct _MDL **arg5, struct _IO_STATUS_BLOCK *arg6,
   struct _DEVICE_OBJECT *arg7); // offset: 0x48 (72)
  UCHAR(*MdlWriteComplete)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, struct _MDL *arg3,
   struct _DEVICE_OBJECT *arg4); // offset: 0x4c (76)
  UCHAR(*FastIoReadCompressed)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   ULONG arg4, VOID *arg5, struct _MDL **arg6, struct _IO_STATUS_BLOCK *arg7,
   struct _COMPRESSED_DATA_INFO *arg8, ULONG arg9,
   struct _DEVICE_OBJECT *arg10); // offset: 0x50 (80)
  UCHAR(*FastIoWriteCompressed)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   ULONG arg4, VOID *arg5, struct _MDL **arg6, struct _IO_STATUS_BLOCK *arg7,
   struct _COMPRESSED_DATA_INFO *arg8, ULONG arg9,
   struct _DEVICE_OBJECT *arg10); // offset: 0x54 (84)
  UCHAR(*MdlReadCompleteCompressed)
  (struct _FILE_OBJECT *arg1, struct _MDL *arg2,
   struct _DEVICE_OBJECT *arg3); // offset: 0x58 (88)
  UCHAR(*MdlWriteCompleteCompressed)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, struct _MDL *arg3,
   struct _DEVICE_OBJECT *arg4); // offset: 0x5c (92)
  UCHAR(*FastIoQueryOpen)
  (struct _IRP *arg1, struct _FILE_NETWORK_OPEN_INFORMATION *arg2,
   struct _DEVICE_OBJECT *arg3); // offset: 0x60 (96)
  LONG(*ReleaseForModWrite)
  (struct _FILE_OBJECT *arg1, struct _ERESOURCE *arg2,
   struct _DEVICE_OBJECT *arg3); // offset: 0x64 (100)
  LONG(*AcquireForCcFlush)
  (struct _FILE_OBJECT *arg1,
   struct _DEVICE_OBJECT *arg2); // offset: 0x68 (104)
  LONG(*ReleaseForCcFlush)
  (struct _FILE_OBJECT *arg1,
   struct _DEVICE_OBJECT *arg2); // offset: 0x6c (108)
};

// 0xa8 (168) bytes
struct _DRIVER_OBJECT {
  SHORT Type;                                // offset: 0x0 (0)
  SHORT Size;                                // offset: 0x2 (2)
  struct _DEVICE_OBJECT *DeviceObject;       // offset: 0x4 (4)
  ULONG Flags;                               // offset: 0x8 (8)
  VOID *DriverStart;                         // offset: 0xc (12)
  ULONG DriverSize;                          // offset: 0x10 (16)
  VOID *DriverSection;                       // offset: 0x14 (20)
  struct _DRIVER_EXTENSION *DriverExtension; // offset: 0x18 (24)
  struct _UNICODE_STRING DriverName;         // offset: 0x1c (28)
  struct _UNICODE_STRING *HardwareDatabase;  // offset: 0x24 (36)
  struct _FAST_IO_DISPATCH *FastIoDispatch;  // offset: 0x28 (40)
  LONG(*DriverInit)
  (struct _DRIVER_OBJECT *arg1,
   struct _UNICODE_STRING *arg2); // offset: 0x2c (44)
  VOID(*DriverStartIo)
  (struct _DEVICE_OBJECT *arg1, struct _IRP *arg2);  // offset: 0x30 (48)
  VOID (*DriverUnload)(struct _DRIVER_OBJECT *arg1); // offset: 0x34 (52)
  LONG(*MajorFunction[28])
  (struct _DEVICE_OBJECT *arg1, struct _IRP *arg2); // offset: 0x38 (56)
};

// 0x28 (40) bytes
struct _WAIT_CONTEXT_BLOCK {
  struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry; // offset: 0x0 (0)
  enum _IO_ALLOCATION_ACTION (*DeviceRoutine)(struct _DEVICE_OBJECT *arg1,
                                              struct _IRP *arg2, VOID *arg3,
                                              VOID *arg4); // offset: 0x10 (16)
  VOID *DeviceContext;                                     // offset: 0x14 (20)
  ULONG NumberOfMapRegisters;                              // offset: 0x18 (24)
  VOID *DeviceObject;                                      // offset: 0x1c (28)
  VOID *CurrentIrp;                                        // offset: 0x20 (32)
  struct _KDPC *BufferChainingDpc;                         // offset: 0x24 (36)
};

// 0xb8 (184) bytes
struct _DEVICE_OBJECT {
  SHORT Type;                            // offset: 0x0 (0)
  USHORT Size;                           // offset: 0x2 (2)
  LONG ReferenceCount;                   // offset: 0x4 (4)
  struct _DRIVER_OBJECT *DriverObject;   // offset: 0x8 (8)
  struct _DEVICE_OBJECT *NextDevice;     // offset: 0xc (12)
  struct _DEVICE_OBJECT *AttachedDevice; // offset: 0x10 (16)
  struct _IRP *CurrentIrp;               // offset: 0x14 (20)
  struct _IO_TIMER *Timer;               // offset: 0x18 (24)
  ULONG Flags;                           // offset: 0x1c (28)
  ULONG Characteristics;                 // offset: 0x20 (32)
  struct _VPB *Vpb;                      // offset: 0x24 (36)
  VOID *DeviceExtension;                 // offset: 0x28 (40)
  ULONG DeviceType;                      // offset: 0x2c (44)
  CHAR StackSize;                        // offset: 0x30 (48)
  union {
    struct _LIST_ENTRY ListEntry;   // offset: 0x34 (52)
    struct _WAIT_CONTEXT_BLOCK Wcb; // offset: 0x34 (52)

  } Queue;                                         // offset: 0x34 (52)
  ULONG AlignmentRequirement;                      // offset: 0x5c (92)
  struct _KDEVICE_QUEUE DeviceQueue;               // offset: 0x60 (96)
  struct _KDPC Dpc;                                // offset: 0x74 (116)
  ULONG ActiveThreadCount;                         // offset: 0x94 (148)
  VOID *SecurityDescriptor;                        // offset: 0x98 (152)
  struct _KEVENT DeviceLock;                       // offset: 0x9c (156)
  USHORT SectorSize;                               // offset: 0xac (172)
  USHORT Spare1;                                   // offset: 0xae (174)
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // offset: 0xb0 (176)
  VOID *Reserved;                                  // offset: 0xb4 (180)
};

// 0x48 (72) bytes
struct _MMSUPPORT {
  struct _LIST_ENTRY WorkingSetExpansionLinks; // offset: 0x0 (0)
  union _LARGE_INTEGER LastTrimTime;           // offset: 0x8 (8)
  struct _MMSUPPORT_FLAGS Flags;               // offset: 0x10 (16)
  ULONG PageFaultCount;                        // offset: 0x14 (20)
  ULONG PeakWorkingSetSize;                    // offset: 0x18 (24)
  ULONG GrowthSinceLastEstimate;               // offset: 0x1c (28)
  ULONG MinimumWorkingSetSize;                 // offset: 0x20 (32)
  ULONG MaximumWorkingSetSize;                 // offset: 0x24 (36)
  struct _MMWSL *VmWorkingSetList;             // offset: 0x28 (40)
  ULONG Claim;                                 // offset: 0x2c (44)
  ULONG NextEstimationSlot;                    // offset: 0x30 (48)
  ULONG NextAgingSlot;                         // offset: 0x34 (52)
  ULONG EstimatedAvailable;                    // offset: 0x38 (56)
  ULONG WorkingSetSize;                        // offset: 0x3c (60)
  struct _EX_PUSH_LOCK WorkingSetMutex;        // offset: 0x40 (64)
};

// 0x8 (8) bytes
struct _IMAGE_DATA_DIRECTORY {
  ULONG VirtualAddress; // offset: 0x0 (0)
  ULONG Size;           // offset: 0x4 (4)
};

// 0xe0 (224) bytes
struct _IMAGE_OPTIONAL_HEADER {
  USHORT Magic;                                   // offset: 0x0 (0)
  UCHAR MajorLinkerVersion;                       // offset: 0x2 (2)
  UCHAR MinorLinkerVersion;                       // offset: 0x3 (3)
  ULONG SizeOfCode;                               // offset: 0x4 (4)
  ULONG SizeOfInitializedData;                    // offset: 0x8 (8)
  ULONG SizeOfUninitializedData;                  // offset: 0xc (12)
  ULONG AddressOfEntryPoint;                      // offset: 0x10 (16)
  ULONG BaseOfCode;                               // offset: 0x14 (20)
  ULONG BaseOfData;                               // offset: 0x18 (24)
  ULONG ImageBase;                                // offset: 0x1c (28)
  ULONG SectionAlignment;                         // offset: 0x20 (32)
  ULONG FileAlignment;                            // offset: 0x24 (36)
  USHORT MajorOperatingSystemVersion;             // offset: 0x28 (40)
  USHORT MinorOperatingSystemVersion;             // offset: 0x2a (42)
  USHORT MajorImageVersion;                       // offset: 0x2c (44)
  USHORT MinorImageVersion;                       // offset: 0x2e (46)
  USHORT MajorSubsystemVersion;                   // offset: 0x30 (48)
  USHORT MinorSubsystemVersion;                   // offset: 0x32 (50)
  ULONG Win32VersionValue;                        // offset: 0x34 (52)
  ULONG SizeOfImage;                              // offset: 0x38 (56)
  ULONG SizeOfHeaders;                            // offset: 0x3c (60)
  ULONG CheckSum;                                 // offset: 0x40 (64)
  USHORT Subsystem;                               // offset: 0x44 (68)
  USHORT DllCharacteristics;                      // offset: 0x46 (70)
  ULONG SizeOfStackReserve;                       // offset: 0x48 (72)
  ULONG SizeOfStackCommit;                        // offset: 0x4c (76)
  ULONG SizeOfHeapReserve;                        // offset: 0x50 (80)
  ULONG SizeOfHeapCommit;                         // offset: 0x54 (84)
  ULONG LoaderFlags;                              // offset: 0x58 (88)
  ULONG NumberOfRvaAndSizes;                      // offset: 0x5c (92)
  struct _IMAGE_DATA_DIRECTORY DataDirectory[16]; // offset: 0x60 (96)
};

// 0x14 (20) bytes
struct _IMAGE_FILE_HEADER {
  USHORT Machine;              // offset: 0x0 (0)
  USHORT NumberOfSections;     // offset: 0x2 (2)
  ULONG TimeDateStamp;         // offset: 0x4 (4)
  ULONG PointerToSymbolTable;  // offset: 0x8 (8)
  ULONG NumberOfSymbols;       // offset: 0xc (12)
  USHORT SizeOfOptionalHeader; // offset: 0x10 (16)
  USHORT Characteristics;      // offset: 0x12 (18)
};

// 0xf8 (248) bytes
struct _IMAGE_NT_HEADERS {
  ULONG Signature;                              // offset: 0x0 (0)
  struct _IMAGE_FILE_HEADER FileHeader;         // offset: 0x4 (4)
  struct _IMAGE_OPTIONAL_HEADER OptionalHeader; // offset: 0x18 (24)
};

// 0x8 (8) bytes
struct LIST_ENTRY32 {
  ULONG Flink; // offset: 0x0 (0)
  ULONG Blink; // offset: 0x4 (4)
};

// 0x48 (72) bytes
struct _PO_HIBER_PERF {
  ULONGLONG IoTicks;    // offset: 0x0 (0)
  ULONGLONG InitTicks;  // offset: 0x8 (8)
  ULONGLONG CopyTicks;  // offset: 0x10 (16)
  ULONGLONG StartCount; // offset: 0x18 (24)
  ULONG ElapsedTime;    // offset: 0x20 (32)
  ULONG IoTime;         // offset: 0x24 (36)
  ULONG CopyTime;       // offset: 0x28 (40)
  ULONG InitTime;       // offset: 0x2c (44)
  ULONG PagesWritten;   // offset: 0x30 (48)
  ULONG PagesProcessed; // offset: 0x34 (52)
  ULONG BytesCopied;    // offset: 0x38 (56)
  ULONG DumpCount;      // offset: 0x3c (60)
  ULONG FileRuns;       // offset: 0x40 (64)
};

// 0xa8 (168) bytes
struct PO_MEMORY_IMAGE {
  ULONG Signature;                 // offset: 0x0 (0)
  ULONG Version;                   // offset: 0x4 (4)
  ULONG CheckSum;                  // offset: 0x8 (8)
  ULONG LengthSelf;                // offset: 0xc (12)
  ULONG PageSelf;                  // offset: 0x10 (16)
  ULONG PageSize;                  // offset: 0x14 (20)
  ULONG ImageType;                 // offset: 0x18 (24)
  union _LARGE_INTEGER SystemTime; // offset: 0x20 (32)
  ULONGLONG InterruptTime;         // offset: 0x28 (40)
  ULONG FeatureFlags;              // offset: 0x30 (48)
  UCHAR HiberFlags;                // offset: 0x34 (52)
  UCHAR spare[3];                  // offset: 0x35 (53)
  ULONG NoHiberPtes;               // offset: 0x38 (56)
  ULONG HiberVa;                   // offset: 0x3c (60)
  union _LARGE_INTEGER HiberPte;   // offset: 0x40 (64)
  ULONG NoFreePages;               // offset: 0x48 (72)
  ULONG FreeMapCheck;              // offset: 0x4c (76)
  ULONG WakeCheck;                 // offset: 0x50 (80)
  ULONG TotalPages;                // offset: 0x54 (84)
  ULONG FirstTablePage;            // offset: 0x58 (88)
  ULONG LastFilePage;              // offset: 0x5c (92)
  struct _PO_HIBER_PERF PerfInfo;  // offset: 0x60 (96)
};

// 0xe0 (224) bytes
struct _POP_HIBER_CONTEXT {
  UCHAR WriteToFile;                        // offset: 0x0 (0)
  UCHAR ReserveLoaderMemory;                // offset: 0x1 (1)
  UCHAR ReserveFreeMemory;                  // offset: 0x2 (2)
  UCHAR VerifyOnWake;                       // offset: 0x3 (3)
  UCHAR Reset;                              // offset: 0x4 (4)
  UCHAR HiberFlags;                         // offset: 0x5 (5)
  UCHAR LinkFile;                           // offset: 0x6 (6)
  VOID *LinkFileHandle;                     // offset: 0x8 (8)
  ULONG Lock;                               // offset: 0xc (12)
  UCHAR MapFrozen;                          // offset: 0x10 (16)
  struct _RTL_BITMAP MemoryMap;             // offset: 0x14 (20)
  struct _LIST_ENTRY ClonedRanges;          // offset: 0x1c (28)
  ULONG ClonedRangeCount;                   // offset: 0x24 (36)
  struct _LIST_ENTRY *NextCloneRange;       // offset: 0x28 (40)
  ULONG NextPreserve;                       // offset: 0x2c (44)
  struct _MDL *LoaderMdl;                   // offset: 0x30 (48)
  struct _MDL *Clones;                      // offset: 0x34 (52)
  UCHAR *NextClone;                         // offset: 0x38 (56)
  ULONG NoClones;                           // offset: 0x3c (60)
  struct _MDL *Spares;                      // offset: 0x40 (64)
  ULONGLONG PagesOut;                       // offset: 0x48 (72)
  VOID *IoPage;                             // offset: 0x50 (80)
  VOID *CurrentMcb;                         // offset: 0x54 (84)
  struct _DUMP_STACK_CONTEXT *DumpStack;    // offset: 0x58 (88)
  struct _KPROCESSOR_STATE *WakeState;      // offset: 0x5c (92)
  ULONG NoRanges;                           // offset: 0x60 (96)
  ULONG HiberVa;                            // offset: 0x64 (100)
  union _LARGE_INTEGER HiberPte;            // offset: 0x68 (104)
  LONG Status;                              // offset: 0x70 (112)
  struct PO_MEMORY_IMAGE *MemoryImage;      // offset: 0x74 (116)
  struct _PO_MEMORY_RANGE_ARRAY *TableHead; // offset: 0x78 (120)
  UCHAR *CompressionWorkspace;              // offset: 0x7c (124)
  UCHAR *CompressedWriteBuffer;             // offset: 0x80 (128)
  ULONG *PerformanceStats;                  // offset: 0x84 (132)
  VOID *CompressionBlock;                   // offset: 0x88 (136)
  VOID *DmaIO;                              // offset: 0x8c (140)
  VOID *TemporaryHeap;                      // offset: 0x90 (144)
  struct _PO_HIBER_PERF PerfInfo;           // offset: 0x98 (152)
};

// 0x20 (32) bytes
struct _RTL_RANGE {
  ULONGLONG Start;  // offset: 0x0 (0)
  ULONGLONG End;    // offset: 0x8 (8)
  VOID *UserData;   // offset: 0x10 (16)
  VOID *Owner;      // offset: 0x14 (20)
  UCHAR Attributes; // offset: 0x18 (24)
  UCHAR Flags;      // offset: 0x19 (25)
};

// 0x30 (48) bytes
struct _ARBITER_ALTERNATIVE {
  ULONGLONG Minimum;                          // offset: 0x0 (0)
  ULONGLONG Maximum;                          // offset: 0x8 (8)
  ULONG Length;                               // offset: 0x10 (16)
  ULONG Alignment;                            // offset: 0x14 (20)
  LONG Priority;                              // offset: 0x18 (24)
  ULONG Flags;                                // offset: 0x1c (28)
  struct _IO_RESOURCE_DESCRIPTOR *Descriptor; // offset: 0x20 (32)
  ULONG Reserved[3];                          // offset: 0x24 (36)
};

// 0x10 (16) bytes
struct _ARBITER_ORDERING {
  ULONGLONG Start; // offset: 0x0 (0)
  ULONGLONG End;   // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _ARBITER_ORDERING_LIST {
  USHORT Count;                        // offset: 0x0 (0)
  USHORT Maximum;                      // offset: 0x2 (2)
  struct _ARBITER_ORDERING *Orderings; // offset: 0x4 (4)
};

// 0x38 (56) bytes
struct _ARBITER_ALLOCATION_STATE {
  ULONGLONG Start;                                 // offset: 0x0 (0)
  ULONGLONG End;                                   // offset: 0x8 (8)
  ULONGLONG CurrentMinimum;                        // offset: 0x10 (16)
  ULONGLONG CurrentMaximum;                        // offset: 0x18 (24)
  struct _ARBITER_LIST_ENTRY *Entry;               // offset: 0x20 (32)
  struct _ARBITER_ALTERNATIVE *CurrentAlternative; // offset: 0x24 (36)
  ULONG AlternativeCount;                          // offset: 0x28 (40)
  struct _ARBITER_ALTERNATIVE *Alternatives;       // offset: 0x2c (44)
  USHORT Flags;                                    // offset: 0x30 (48)
  UCHAR RangeAttributes;                           // offset: 0x32 (50)
  UCHAR RangeAvailableAttributes;                  // offset: 0x33 (51)
  ULONG WorkSpace;                                 // offset: 0x34 (52)
};

// 0x18 (24) bytes
struct _ARBITER_CONFLICT_INFO {
  struct _DEVICE_OBJECT *OwningObject; // offset: 0x0 (0)
  ULONGLONG Start;                     // offset: 0x8 (8)
  ULONGLONG End;                       // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _ARBITER_PARAMETERS {
  union {
    struct {
      struct _LIST_ENTRY *ArbitrationList;                  // offset: 0x0 (0)
      ULONG AllocateFromCount;                              // offset: 0x4 (4)
      struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *AllocateFrom; // offset: 0x8 (8)
    } TestAllocation;                                       // offset: 0x0 (0)
    struct {
      struct _LIST_ENTRY *ArbitrationList;                  // offset: 0x0 (0)
      ULONG AllocateFromCount;                              // offset: 0x4 (4)
      struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *AllocateFrom; // offset: 0x8 (8)
    } RetestAllocation;                                     // offset: 0x0 (0)
    struct {
      struct _LIST_ENTRY *ArbitrationList; // offset: 0x0 (0)
    } BootAllocation;                      // offset: 0x0 (0)
    struct {
      struct _CM_PARTIAL_RESOURCE_LIST **AllocatedResources; // offset: 0x0 (0)
    } QueryAllocatedResources;                               // offset: 0x0 (0)
    struct {
      struct _DEVICE_OBJECT *PhysicalDeviceObject;         // offset: 0x0 (0)
      struct _IO_RESOURCE_DESCRIPTOR *ConflictingResource; // offset: 0x4 (4)
      ULONG *ConflictCount;                                // offset: 0x8 (8)
      struct _ARBITER_CONFLICT_INFO **Conflicts;           // offset: 0xc (12)
    } QueryConflict;                                       // offset: 0x0 (0)
    struct {
      struct _LIST_ENTRY *ArbitrationList; // offset: 0x0 (0)
    } QueryArbitrate;                      // offset: 0x0 (0)
    struct {
      struct _DEVICE_OBJECT *ReserveDevice; // offset: 0x0 (0)
    } AddReserved;                          // offset: 0x0 (0)

  } Parameters; // offset: 0x0 (0)
};

// 0x18 (24) bytes
struct _ARBITER_INTERFACE {
  USHORT Size;                              // offset: 0x0 (0)
  USHORT Version;                           // offset: 0x2 (2)
  VOID *Context;                            // offset: 0x4 (4)
  VOID (*InterfaceReference)(VOID *arg1);   // offset: 0x8 (8)
  VOID (*InterfaceDereference)(VOID *arg1); // offset: 0xc (12)
  LONG(*ArbiterHandler)
  (VOID *arg1, enum _ARBITER_ACTION arg2,
   struct _ARBITER_PARAMETERS *arg3); // offset: 0x10 (16)
  ULONG Flags;                        // offset: 0x14 (20)
};

// 0x9c (156) bytes
struct _ARBITER_INSTANCE {
  ULONG Signature;                                   // offset: 0x0 (0)
  struct _KEVENT *MutexEvent;                        // offset: 0x4 (4)
  USHORT *Name;                                      // offset: 0x8 (8)
  LONG ResourceType;                                 // offset: 0xc (12)
  struct _RTL_RANGE_LIST *Allocation;                // offset: 0x10 (16)
  struct _RTL_RANGE_LIST *PossibleAllocation;        // offset: 0x14 (20)
  struct _ARBITER_ORDERING_LIST OrderingList;        // offset: 0x18 (24)
  struct _ARBITER_ORDERING_LIST ReservedList;        // offset: 0x20 (32)
  LONG ReferenceCount;                               // offset: 0x28 (40)
  struct _ARBITER_INTERFACE *Interface;              // offset: 0x2c (44)
  ULONG AllocationStackMaxSize;                      // offset: 0x30 (48)
  struct _ARBITER_ALLOCATION_STATE *AllocationStack; // offset: 0x34 (52)
  LONG(*UnpackRequirement)
  (struct _IO_RESOURCE_DESCRIPTOR *arg1, ULONGLONG *arg2, ULONGLONG *arg3,
   ULONG *arg4, ULONG *arg5); // offset: 0x38 (56)
  LONG(*PackResource)
  (struct _IO_RESOURCE_DESCRIPTOR *arg1, ULONGLONG arg2,
   struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *arg3); // offset: 0x3c (60)
  LONG(*UnpackResource)
  (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *arg1, ULONGLONG *arg2,
   ULONG *arg3); // offset: 0x40 (64)
  LONG(*ScoreRequirement)
  (struct _IO_RESOURCE_DESCRIPTOR *arg1); // offset: 0x44 (68)
  LONG(*TestAllocation)
  (struct _ARBITER_INSTANCE *arg1,
   struct _LIST_ENTRY *arg2); // offset: 0x48 (72)
  LONG(*RetestAllocation)
  (struct _ARBITER_INSTANCE *arg1,
   struct _LIST_ENTRY *arg2);                               // offset: 0x4c (76)
  LONG (*CommitAllocation)(struct _ARBITER_INSTANCE *arg1); // offset: 0x50 (80)
  LONG(*RollbackAllocation)
  (struct _ARBITER_INSTANCE *arg1); // offset: 0x54 (84)
  LONG(*BootAllocation)
  (struct _ARBITER_INSTANCE *arg1,
   struct _LIST_ENTRY *arg2); // offset: 0x58 (88)
  LONG(*QueryArbitrate)
  (struct _ARBITER_INSTANCE *arg1,
   struct _LIST_ENTRY *arg2); // offset: 0x5c (92)
  LONG(*QueryConflict)
  (struct _ARBITER_INSTANCE *arg1, struct _DEVICE_OBJECT *arg2,
   struct _IO_RESOURCE_DESCRIPTOR *arg3, ULONG *arg4,
   struct _ARBITER_CONFLICT_INFO **arg5); // offset: 0x60 (96)
  LONG(*AddReserved)
  (struct _ARBITER_INSTANCE *arg1, struct _IO_RESOURCE_DESCRIPTOR *arg2,
   struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *arg3); // offset: 0x64 (100)
  LONG(*StartArbiter)
  (struct _ARBITER_INSTANCE *arg1,
   struct _CM_RESOURCE_LIST *arg2); // offset: 0x68 (104)
  LONG(*PreprocessEntry)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x6c (108)
  LONG(*AllocateEntry)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x70 (112)
  UCHAR(*GetNextAllocationRange)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x74 (116)
  UCHAR(*FindSuitableRange)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x78 (120)
  VOID(*AddAllocation)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x7c (124)
  VOID(*BacktrackAllocation)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x80 (128)
  UCHAR(*OverrideConflict)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x84 (132)
  UCHAR TransactionInProgress;              // offset: 0x88 (136)
  VOID *Extension;                          // offset: 0x8c (140)
  struct _DEVICE_OBJECT *BusDeviceObject;   // offset: 0x90 (144)
  VOID *ConflictCallbackContext;            // offset: 0x94 (148)
  UCHAR(*ConflictCallback)
  (VOID *arg1, struct _RTL_RANGE *arg2); // offset: 0x98 (152)
};

// 0xe0 (224) bytes
struct _PCI_ARBITER_INSTANCE {
  struct PCI_SECONDARY_EXTENSION Header;      // offset: 0x0 (0)
  struct _PCI_INTERFACE *Interface;           // offset: 0xc (12)
  struct _PCI_FDO_EXTENSION *BusFdoExtension; // offset: 0x10 (16)
  USHORT InstanceName[24];                    // offset: 0x14 (20)
  struct _ARBITER_INSTANCE CommonInstance;    // offset: 0x44 (68)
};

// 0x1c (28) bytes
struct _PCI_INTERFACE {
  struct _GUID *InterfaceType;  // offset: 0x0 (0)
  USHORT MinSize;               // offset: 0x4 (4)
  USHORT MinVersion;            // offset: 0x6 (6)
  USHORT MaxVersion;            // offset: 0x8 (8)
  USHORT Flags;                 // offset: 0xa (10)
  LONG ReferenceCount;          // offset: 0xc (12)
  enum PCI_SIGNATURE Signature; // offset: 0x10 (16)
  LONG(*Constructor)
  (VOID *arg1, VOID *arg2, VOID *arg3, USHORT arg4, USHORT arg5,
   struct _INTERFACE *arg6);                               // offset: 0x14 (20)
  LONG (*Initializer)(struct _PCI_ARBITER_INSTANCE *arg1); // offset: 0x18 (24)
};

// 0x38 (56) bytes
struct _PI_RESOURCE_ARBITER_ENTRY {
  struct _LIST_ENTRY DeviceArbiterList;        // offset: 0x0 (0)
  UCHAR ResourceType;                          // offset: 0x8 (8)
  struct _ARBITER_INTERFACE *ArbiterInterface; // offset: 0xc (12)
  ULONG Level;                                 // offset: 0x10 (16)
  struct _LIST_ENTRY ResourceList;             // offset: 0x14 (20)
  struct _LIST_ENTRY BestResourceList;         // offset: 0x1c (28)
  struct _LIST_ENTRY BestConfig;               // offset: 0x24 (36)
  struct _LIST_ENTRY ActiveArbiterList;        // offset: 0x2c (44)
  UCHAR State;                                 // offset: 0x34 (52)
  UCHAR ResourcesChanged;                      // offset: 0x35 (53)
};

// 0x28 (40) bytes
struct _RTLP_RANGE_LIST_ENTRY {
  ULONGLONG Start; // offset: 0x0 (0)
  ULONGLONG End;   // offset: 0x8 (8)
  union {
    struct {
      VOID *UserData; // offset: 0x0 (0)
      VOID *Owner;    // offset: 0x4 (4)
    } Allocated;      // offset: 0x10 (16)
    struct {
      struct _LIST_ENTRY ListHead; // offset: 0x0 (0)
    } Merged;                      // offset: 0x10 (16)
  };
  UCHAR Attributes;             // offset: 0x18 (24)
  UCHAR PublicFlags;            // offset: 0x19 (25)
  USHORT PrivateFlags;          // offset: 0x1a (26)
  struct _LIST_ENTRY ListEntry; // offset: 0x1c (28)
};

// 0xc8 (200) bytes
struct _PCI_PDO_EXTENSION {
  struct _PCI_PDO_EXTENSION *Next;                 // offset: 0x0 (0)
  enum PCI_SIGNATURE ExtensionType;                // offset: 0x4 (4)
  struct _PCI_MJ_DISPATCH_TABLE *IrpDispatchTable; // offset: 0x8 (8)
  UCHAR DeviceState;                               // offset: 0xc (12)
  UCHAR TentativeNextState;                        // offset: 0xd (13)
  struct _KEVENT SecondaryExtLock;                 // offset: 0x10 (16)
  struct _PCI_SLOT_NUMBER Slot;                    // offset: 0x20 (32)
  struct _DEVICE_OBJECT *PhysicalDeviceObject;     // offset: 0x24 (36)
  struct _PCI_FDO_EXTENSION *ParentFdoExtension;   // offset: 0x28 (40)
  struct _SINGLE_LIST_ENTRY SecondaryExtension;    // offset: 0x2c (44)
  ULONG BusInterfaceReferenceCount;                // offset: 0x30 (48)
  ULONG AgpInterfaceReferenceCount;                // offset: 0x34 (52)
  USHORT VendorId;                                 // offset: 0x38 (56)
  USHORT DeviceId;                                 // offset: 0x3a (58)
  USHORT SubsystemVendorId;                        // offset: 0x3c (60)
  USHORT SubsystemId;                              // offset: 0x3e (62)
  UCHAR RevisionId;                                // offset: 0x40 (64)
  UCHAR ProgIf;                                    // offset: 0x41 (65)
  UCHAR SubClass;                                  // offset: 0x42 (66)
  UCHAR BaseClass;                                 // offset: 0x43 (67)
  UCHAR AdditionalResourceCount;                   // offset: 0x44 (68)
  UCHAR AdjustedInterruptLine;                     // offset: 0x45 (69)
  UCHAR InterruptPin;                              // offset: 0x46 (70)
  UCHAR RawInterruptLine;                          // offset: 0x47 (71)
  UCHAR CapabilitiesPtr;                           // offset: 0x48 (72)
  UCHAR SavedLatencyTimer;                         // offset: 0x49 (73)
  UCHAR SavedCacheLineSize;                        // offset: 0x4a (74)
  UCHAR HeaderType;                                // offset: 0x4b (75)
  UCHAR NotPresent;                                // offset: 0x4c (76)
  UCHAR ReportedMissing;                           // offset: 0x4d (77)
  UCHAR ExpectedWritebackFailure;                  // offset: 0x4e (78)
  UCHAR NoTouchPmeEnable;                          // offset: 0x4f (79)
  UCHAR LegacyDriver;                              // offset: 0x50 (80)
  UCHAR UpdateHardware;                            // offset: 0x51 (81)
  UCHAR MovedDevice;                               // offset: 0x52 (82)
  UCHAR DisablePowerDown;                          // offset: 0x53 (83)
  UCHAR NeedsHotPlugConfiguration;                 // offset: 0x54 (84)
  UCHAR IDEInNativeMode;                           // offset: 0x55 (85)
  UCHAR BIOSAllowsIDESwitchToNativeMode;           // offset: 0x56 (86)
  UCHAR IoSpaceUnderNativeIdeControl;              // offset: 0x57 (87)
  UCHAR OnDebugPath;                               // offset: 0x58 (88)
  UCHAR IoSpaceNotRequired;                        // offset: 0x59 (89)
  struct PCI_POWER_STATE PowerState;               // offset: 0x5c (92)
  union PCI_HEADER_TYPE_DEPENDENT Dependent;       // offset: 0x9c (156)
  ULONGLONG HackFlags;                             // offset: 0xa0 (160)
  struct PCI_FUNCTION_RESOURCES *Resources;        // offset: 0xa8 (168)
  struct _PCI_FDO_EXTENSION *BridgeFdoExtension;   // offset: 0xac (172)
  struct _PCI_PDO_EXTENSION *NextBridge;           // offset: 0xb0 (176)
  struct _PCI_PDO_EXTENSION *NextHashEntry;        // offset: 0xb4 (180)
  struct _PCI_LOCK Lock;                           // offset: 0xb8 (184)
  struct _PCI_PMC PowerCapabilities;               // offset: 0xc0 (192)
  UCHAR TargetAgpCapabilityId;                     // offset: 0xc2 (194)
  USHORT CommandEnables;                           // offset: 0xc4 (196)
  USHORT InitialCommand;                           // offset: 0xc6 (198)
};

// 0x8 (8) bytes
struct _HEAP_ENTRY_EXTRA {
  union {
    struct {
      USHORT AllocatorBackTraceIndex; // offset: 0x0 (0)
      USHORT TagIndex;                // offset: 0x2 (2)
      ULONG Settable;                 // offset: 0x4 (4)
    };
    ULONGLONG ZeroInit; // offset: 0x0 (0)
  };
};

// 0x20 (32) bytes
struct _HEAP_VIRTUAL_ALLOC_ENTRY {
  struct _LIST_ENTRY Entry;            // offset: 0x0 (0)
  struct _HEAP_ENTRY_EXTRA ExtraStuff; // offset: 0x8 (8)
  ULONG CommitSize;                    // offset: 0x10 (16)
  ULONG ReserveSize;                   // offset: 0x14 (20)
  struct _HEAP_ENTRY BusyBlock;        // offset: 0x18 (24)
};

// 0x30 (48) bytes
struct _WNODE_HEADER {
  ULONG BufferSize; // offset: 0x0 (0)
  ULONG ProviderId; // offset: 0x4 (4)
  union {
    ULONGLONG HistoricalContext; // offset: 0x8 (8)
    struct {
      ULONG Version; // offset: 0x8 (8)
      ULONG Linkage; // offset: 0xc (12)
    };
  };
  union {
    ULONG CountLost;                // offset: 0x10 (16)
    VOID *KernelHandle;             // offset: 0x10 (16)
    union _LARGE_INTEGER TimeStamp; // offset: 0x10 (16)
  };
  struct _GUID Guid;   // offset: 0x18 (24)
  ULONG ClientContext; // offset: 0x28 (40)
  ULONG Flags;         // offset: 0x2c (44)
};

// 0x48 (72) bytes
struct _WMI_BUFFER_HEADER {
  union {
    struct _WNODE_HEADER Wnode; // offset: 0x0 (0)
    struct {
      ULONGLONG Reserved1;            // offset: 0x0 (0)
      ULONGLONG Reserved2;            // offset: 0x8 (8)
      union _LARGE_INTEGER Reserved3; // offset: 0x10 (16)
      union {
        struct {
          VOID *Alignment;                      // offset: 0x18 (24)
          struct _SINGLE_LIST_ENTRY SlistEntry; // offset: 0x1c (28)
        };
        struct _LIST_ENTRY Entry; // offset: 0x18 (24)
      };
    };
    struct {
      LONG ReferenceCount;                      // offset: 0x0 (0)
      ULONG SavedOffset;                        // offset: 0x4 (4)
      ULONG CurrentOffset;                      // offset: 0x8 (8)
      ULONG UsePerfClock;                       // offset: 0xc (12)
      union _LARGE_INTEGER TimeStamp;           // offset: 0x10 (16)
      struct _GUID Guid;                        // offset: 0x18 (24)
      struct _WMI_CLIENT_CONTEXT ClientContext; // offset: 0x28 (40)
      union {
        struct _WMI_BUFFER_STATE State; // offset: 0x2c (44)
        ULONG Flags;                    // offset: 0x2c (44)
      };
    };
  };
  ULONG Offset;      // offset: 0x30 (48)
  USHORT BufferFlag; // offset: 0x34 (52)
  USHORT BufferType; // offset: 0x36 (54)
  union {
    struct _GUID InstanceGuid; // offset: 0x38 (56)
    struct {
      VOID *LoggerContext;                   // offset: 0x38 (56)
      struct _SINGLE_LIST_ENTRY GlobalEntry; // offset: 0x3c (60)
    };
  };
};

// 0x8 (8) bytes
struct _SEP_AUDIT_POLICY_OVERLAY {
  ULONGLONG PolicyBits : 36; // offset: 0x0 (0)
  ULONGLONG SetBit : 1;      // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _SEP_AUDIT_POLICY {
  union {
    struct _SEP_AUDIT_POLICY_CATEGORIES PolicyElements; // offset: 0x0 (0)
    struct _SEP_AUDIT_POLICY_OVERLAY PolicyOverlay;     // offset: 0x0 (0)
    ULONGLONG Overlay;                                  // offset: 0x0 (0)
  };
};

// 0xa8 (168) bytes
struct _TOKEN {
  struct _TOKEN_SOURCE TokenSource;                      // offset: 0x0 (0)
  struct _LUID TokenId;                                  // offset: 0x10 (16)
  struct _LUID AuthenticationId;                         // offset: 0x18 (24)
  struct _LUID ParentTokenId;                            // offset: 0x20 (32)
  union _LARGE_INTEGER ExpirationTime;                   // offset: 0x28 (40)
  struct _ERESOURCE *TokenLock;                          // offset: 0x30 (48)
  struct _SEP_AUDIT_POLICY AuditPolicy;                  // offset: 0x38 (56)
  struct _LUID ModifiedId;                               // offset: 0x40 (64)
  ULONG SessionId;                                       // offset: 0x48 (72)
  ULONG UserAndGroupCount;                               // offset: 0x4c (76)
  ULONG RestrictedSidCount;                              // offset: 0x50 (80)
  ULONG PrivilegeCount;                                  // offset: 0x54 (84)
  ULONG VariableLength;                                  // offset: 0x58 (88)
  ULONG DynamicCharged;                                  // offset: 0x5c (92)
  ULONG DynamicAvailable;                                // offset: 0x60 (96)
  ULONG DefaultOwnerIndex;                               // offset: 0x64 (100)
  struct _SID_AND_ATTRIBUTES *UserAndGroups;             // offset: 0x68 (104)
  struct _SID_AND_ATTRIBUTES *RestrictedSids;            // offset: 0x6c (108)
  VOID *PrimaryGroup;                                    // offset: 0x70 (112)
  struct _LUID_AND_ATTRIBUTES *Privileges;               // offset: 0x74 (116)
  ULONG *DynamicPart;                                    // offset: 0x78 (120)
  struct _ACL *DefaultDacl;                              // offset: 0x7c (124)
  enum _TOKEN_TYPE TokenType;                            // offset: 0x80 (128)
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // offset: 0x84 (132)
  UCHAR TokenFlags;                                      // offset: 0x88 (136)
  UCHAR TokenInUse;                                      // offset: 0x89 (137)
  struct _SECURITY_TOKEN_PROXY_DATA *ProxyData;          // offset: 0x8c (140)
  struct _SECURITY_TOKEN_AUDIT_DATA *AuditData;          // offset: 0x90 (144)
  struct _SEP_LOGON_SESSION_REFERENCES *LogonSession;    // offset: 0x94 (148)
  struct _LUID OriginatingLogonSession;                  // offset: 0x98 (152)
  ULONG VariablePart;                                    // offset: 0xa0 (160)
};

// 0x1c (28) bytes
struct _AMD64_DBGKD_CONTROL_SET {
  ULONG TraceFlag;              // offset: 0x0 (0)
  ULONGLONG Dr7;                // offset: 0x4 (4)
  ULONGLONG CurrentSymbolStart; // offset: 0xc (12)
  ULONGLONG CurrentSymbolEnd;   // offset: 0x14 (20)
};

// 0x14 (20) bytes
struct _IA64_DBGKD_CONTROL_SET {
  ULONG Continue;               // offset: 0x0 (0)
  ULONGLONG CurrentSymbolStart; // offset: 0x4 (4)
  ULONGLONG CurrentSymbolEnd;   // offset: 0xc (12)
};

// 0x1c (28) bytes
struct _DBGKD_ANY_CONTROL_SET {
  union {
    struct _X86_DBGKD_CONTROL_SET X86ControlSet;     // offset: 0x0 (0)
    ULONG AlphaControlSet;                           // offset: 0x0 (0)
    struct _IA64_DBGKD_CONTROL_SET IA64ControlSet;   // offset: 0x0 (0)
    struct _AMD64_DBGKD_CONTROL_SET Amd64ControlSet; // offset: 0x0 (0)
  };
};

// 0x20 (32) bytes
struct _DBGKD_CONTINUE2 {
  LONG ContinueStatus; // offset: 0x0 (0)
  union {
    struct _X86_DBGKD_CONTROL_SET ControlSet;    // offset: 0x4 (4)
    struct _DBGKD_ANY_CONTROL_SET AnyControlSet; // offset: 0x4 (4)
  };
};

// 0x18 (24) bytes
struct _DBGKD_QUERY_MEMORY {
  ULONGLONG Address;  // offset: 0x0 (0)
  ULONGLONG Reserved; // offset: 0x8 (8)
  ULONG AddressSpace; // offset: 0x10 (16)
  ULONG Flags;        // offset: 0x14 (20)
};

// 0x10 (16) bytes
struct _DBGKD_FILL_MEMORY {
  ULONGLONG Address;    // offset: 0x0 (0)
  ULONG Length;         // offset: 0x8 (8)
  USHORT Flags;         // offset: 0xc (12)
  USHORT PatternLength; // offset: 0xe (14)
};

// 0x18 (24) bytes
struct _DBGKD_SEARCH_MEMORY {
  union {
    ULONGLONG SearchAddress; // offset: 0x0 (0)
    ULONGLONG FoundAddress;  // offset: 0x0 (0)
  };
  ULONGLONG SearchLength; // offset: 0x8 (8)
  ULONG PatternLength;    // offset: 0x10 (16)
};

// 0x28 (40) bytes
struct _DBGKD_GET_VERSION64 {
  USHORT MajorVersion;          // offset: 0x0 (0)
  USHORT MinorVersion;          // offset: 0x2 (2)
  UCHAR ProtocolVersion;        // offset: 0x4 (4)
  UCHAR KdSecondaryVersion;     // offset: 0x5 (5)
  USHORT Flags;                 // offset: 0x6 (6)
  USHORT MachineType;           // offset: 0x8 (8)
  UCHAR MaxPacketType;          // offset: 0xa (10)
  UCHAR MaxStateChange;         // offset: 0xb (11)
  UCHAR MaxManipulate;          // offset: 0xc (12)
  UCHAR Simulation;             // offset: 0xd (13)
  USHORT Unused[1];             // offset: 0xe (14)
  ULONGLONG KernBase;           // offset: 0x10 (16)
  ULONGLONG PsLoadedModuleList; // offset: 0x18 (24)
  ULONGLONG DebuggerDataList;   // offset: 0x20 (32)
};

// 0x20 (32) bytes
struct _DBGKD_GET_INTERNAL_BREAKPOINT64 {
  ULONGLONG BreakpointAddress; // offset: 0x0 (0)
  ULONG Flags;                 // offset: 0x8 (8)
  ULONG Calls;                 // offset: 0xc (12)
  ULONG MaxCallsPerPeriod;     // offset: 0x10 (16)
  ULONG MinInstructions;       // offset: 0x14 (20)
  ULONG MaxInstructions;       // offset: 0x18 (24)
  ULONG TotalInstructions;     // offset: 0x1c (28)
};

// 0x10 (16) bytes
struct _DBGKD_SET_INTERNAL_BREAKPOINT64 {
  ULONGLONG BreakpointAddress; // offset: 0x0 (0)
  ULONG Flags;                 // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _DBGKD_SET_SPECIAL_CALL64 {
  ULONGLONG SpecialCall; // offset: 0x0 (0)
};

// 0x20 (32) bytes
struct _DBGKD_READ_WRITE_IO_EXTENDED64 {
  ULONG DataSize;      // offset: 0x0 (0)
  ULONG InterfaceType; // offset: 0x4 (4)
  ULONG BusNumber;     // offset: 0x8 (8)
  ULONG AddressSpace;  // offset: 0xc (12)
  ULONGLONG IoAddress; // offset: 0x10 (16)
  ULONG DataValue;     // offset: 0x18 (24)
};

// 0x10 (16) bytes
struct _DBGKD_READ_WRITE_IO64 {
  ULONGLONG IoAddress; // offset: 0x0 (0)
  ULONG DataSize;      // offset: 0x8 (8)
  ULONG DataValue;     // offset: 0xc (12)
};

// 0x10 (16) bytes
struct _DBGKD_WRITE_BREAKPOINT64 {
  ULONGLONG BreakPointAddress; // offset: 0x0 (0)
  ULONG BreakPointHandle;      // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _DBGKD_WRITE_MEMORY64 {
  ULONGLONG TargetBaseAddress; // offset: 0x0 (0)
  ULONG TransferCount;         // offset: 0x8 (8)
  ULONG ActualBytesWritten;    // offset: 0xc (12)
};

// 0x10 (16) bytes
struct _DBGKD_READ_MEMORY64 {
  ULONGLONG TargetBaseAddress; // offset: 0x0 (0)
  ULONG TransferCount;         // offset: 0x8 (8)
  ULONG ActualBytesRead;       // offset: 0xc (12)
};

// 0x34 (52) bytes
struct _DBGKD_MANIPULATE_STATE32 {
  ULONG ApiNumber;       // offset: 0x0 (0)
  USHORT ProcessorLevel; // offset: 0x4 (4)
  USHORT Processor;      // offset: 0x6 (6)
  LONG ReturnStatus;     // offset: 0x8 (8)
  union {
    struct _DBGKD_READ_MEMORY32 ReadMemory;             // offset: 0xc (12)
    struct _DBGKD_WRITE_MEMORY32 WriteMemory;           // offset: 0xc (12)
    struct _DBGKD_READ_MEMORY64 ReadMemory64;           // offset: 0xc (12)
    struct _DBGKD_WRITE_MEMORY64 WriteMemory64;         // offset: 0xc (12)
    struct _DBGKD_GET_CONTEXT GetContext;               // offset: 0xc (12)
    struct _DBGKD_SET_CONTEXT SetContext;               // offset: 0xc (12)
    struct _DBGKD_WRITE_BREAKPOINT32 WriteBreakPoint;   // offset: 0xc (12)
    struct _DBGKD_RESTORE_BREAKPOINT RestoreBreakPoint; // offset: 0xc (12)
    struct _DBGKD_CONTINUE Continue;                    // offset: 0xc (12)
    struct _DBGKD_CONTINUE2 Continue2;                  // offset: 0xc (12)
    struct _DBGKD_READ_WRITE_IO32 ReadWriteIo;          // offset: 0xc (12)
    struct _DBGKD_READ_WRITE_IO_EXTENDED32
        ReadWriteIoExtended;                             // offset: 0xc (12)
    struct _DBGKD_QUERY_SPECIAL_CALLS QuerySpecialCalls; // offset: 0xc (12)
    struct _DBGKD_SET_SPECIAL_CALL32 SetSpecialCall;     // offset: 0xc (12)
    struct _DBGKD_SET_INTERNAL_BREAKPOINT32
        SetInternalBreakpoint; // offset: 0xc (12)
    struct _DBGKD_GET_INTERNAL_BREAKPOINT32
        GetInternalBreakpoint;                 // offset: 0xc (12)
    struct _DBGKD_GET_VERSION32 GetVersion32;  // offset: 0xc (12)
    struct _DBGKD_BREAKPOINTEX BreakPointEx;   // offset: 0xc (12)
    struct _DBGKD_READ_WRITE_MSR ReadWriteMsr; // offset: 0xc (12)
    struct _DBGKD_SEARCH_MEMORY SearchMemory;  // offset: 0xc (12)

  } u; // offset: 0xc (12)
};

// 0x38 (56) bytes
struct _DBGKD_MANIPULATE_STATE64 {
  ULONG ApiNumber;       // offset: 0x0 (0)
  USHORT ProcessorLevel; // offset: 0x4 (4)
  USHORT Processor;      // offset: 0x6 (6)
  LONG ReturnStatus;     // offset: 0x8 (8)
  union {
    struct _DBGKD_READ_MEMORY64 ReadMemory;             // offset: 0x10 (16)
    struct _DBGKD_WRITE_MEMORY64 WriteMemory;           // offset: 0x10 (16)
    struct _DBGKD_GET_CONTEXT GetContext;               // offset: 0x10 (16)
    struct _DBGKD_SET_CONTEXT SetContext;               // offset: 0x10 (16)
    struct _DBGKD_WRITE_BREAKPOINT64 WriteBreakPoint;   // offset: 0x10 (16)
    struct _DBGKD_RESTORE_BREAKPOINT RestoreBreakPoint; // offset: 0x10 (16)
    struct _DBGKD_CONTINUE Continue;                    // offset: 0x10 (16)
    struct _DBGKD_CONTINUE2 Continue2;                  // offset: 0x10 (16)
    struct _DBGKD_READ_WRITE_IO64 ReadWriteIo;          // offset: 0x10 (16)
    struct _DBGKD_READ_WRITE_IO_EXTENDED64
        ReadWriteIoExtended;                             // offset: 0x10 (16)
    struct _DBGKD_QUERY_SPECIAL_CALLS QuerySpecialCalls; // offset: 0x10 (16)
    struct _DBGKD_SET_SPECIAL_CALL64 SetSpecialCall;     // offset: 0x10 (16)
    struct _DBGKD_SET_INTERNAL_BREAKPOINT64
        SetInternalBreakpoint; // offset: 0x10 (16)
    struct _DBGKD_GET_INTERNAL_BREAKPOINT64
        GetInternalBreakpoint;                      // offset: 0x10 (16)
    struct _DBGKD_GET_VERSION64 GetVersion64;       // offset: 0x10 (16)
    struct _DBGKD_BREAKPOINTEX BreakPointEx;        // offset: 0x10 (16)
    struct _DBGKD_READ_WRITE_MSR ReadWriteMsr;      // offset: 0x10 (16)
    struct _DBGKD_SEARCH_MEMORY SearchMemory;       // offset: 0x10 (16)
    struct _DBGKD_GET_SET_BUS_DATA GetSetBusData;   // offset: 0x10 (16)
    struct _DBGKD_FILL_MEMORY FillMemory;           // offset: 0x10 (16)
    struct _DBGKD_QUERY_MEMORY QueryMemory;         // offset: 0x10 (16)
    struct _DBGKD_SWITCH_PARTITION SwitchPartition; // offset: 0x10 (16)

  } u; // offset: 0x10 (16)
};

// 0x28 (40) bytes
struct _DBGKD_LOAD_SYMBOLS64 {
  ULONG PathNameLength; // offset: 0x0 (0)
  ULONGLONG BaseOfDll;  // offset: 0x8 (8)
  ULONGLONG ProcessId;  // offset: 0x10 (16)
  ULONG CheckSum;       // offset: 0x18 (24)
  ULONG SizeOfImage;    // offset: 0x1c (28)
  UCHAR UnloadSymbols;  // offset: 0x20 (32)
};

// 0x98 (152) bytes
struct _EXCEPTION_RECORD64 {
  LONG ExceptionCode;                 // offset: 0x0 (0)
  ULONG ExceptionFlags;               // offset: 0x4 (4)
  ULONGLONG ExceptionRecord;          // offset: 0x8 (8)
  ULONGLONG ExceptionAddress;         // offset: 0x10 (16)
  ULONG NumberParameters;             // offset: 0x18 (24)
  ULONG __unusedAlignment;            // offset: 0x1c (28)
  ULONGLONG ExceptionInformation[15]; // offset: 0x20 (32)
};

// 0xa0 (160) bytes
struct _DBGKM_EXCEPTION64 {
  struct _EXCEPTION_RECORD64 ExceptionRecord; // offset: 0x0 (0)
  ULONG FirstChance;                          // offset: 0x98 (152)
};

// 0x10 (16) bytes
struct _MMEXTEND_INFO {
  ULONGLONG CommittedSize; // offset: 0x0 (0)
  ULONG ReferenceCount;    // offset: 0x8 (8)
};

// 0x34 (52) bytes
struct _MMVAD_LONG {
  union {
    LONG Balance : 2;      // offset: 0x0 (0)
    struct _MMVAD *Parent; // offset: 0x0 (0)

  } u1;                      // offset: 0x0 (0)
  struct _MMVAD *LeftChild;  // offset: 0x4 (4)
  struct _MMVAD *RightChild; // offset: 0x8 (8)
  ULONG StartingVpn;         // offset: 0xc (12)
  ULONG EndingVpn;           // offset: 0x10 (16)
  union {
    ULONG LongFlags;              // offset: 0x14 (20)
    struct _MMVAD_FLAGS VadFlags; // offset: 0x14 (20)

  } u;                               // offset: 0x14 (20)
  struct _CONTROL_AREA *ControlArea; // offset: 0x18 (24)
  struct _MMPTE *FirstPrototypePte;  // offset: 0x1c (28)
  struct _MMPTE *LastContiguousPte;  // offset: 0x20 (32)
  union {
    ULONG LongFlags2;               // offset: 0x24 (36)
    struct _MMVAD_FLAGS2 VadFlags2; // offset: 0x24 (36)

  } u2; // offset: 0x24 (36)
  union {
    struct _LIST_ENTRY List;        // offset: 0x28 (40)
    struct _MMADDRESS_LIST Secured; // offset: 0x28 (40)

  } u3; // offset: 0x28 (40)
  union {
    struct _MMBANKED_SECTION *Banked;    // offset: 0x30 (48)
    struct _MMEXTEND_INFO *ExtendedInfo; // offset: 0x30 (48)

  } u4; // offset: 0x30 (48)
};

// 0x40 (64) bytes
struct _SEGMENT {
  struct _CONTROL_AREA *ControlArea;  // offset: 0x0 (0)
  ULONG TotalNumberOfPtes;            // offset: 0x4 (4)
  ULONG NonExtendedPtes;              // offset: 0x8 (8)
  ULONG Spare0;                       // offset: 0xc (12)
  ULONGLONG SizeOfSegment;            // offset: 0x10 (16)
  struct _MMPTE SegmentPteTemplate;   // offset: 0x18 (24)
  ULONG NumberOfCommittedPages;       // offset: 0x1c (28)
  struct _MMEXTEND_INFO *ExtendInfo;  // offset: 0x20 (32)
  struct _SEGMENT_FLAGS SegmentFlags; // offset: 0x24 (36)
  VOID *BasedAddress;                 // offset: 0x28 (40)
  union {
    ULONG ImageCommitment;             // offset: 0x2c (44)
    struct _EPROCESS *CreatingProcess; // offset: 0x2c (44)

  } u1; // offset: 0x2c (44)
  union {
    struct _SECTION_IMAGE_INFORMATION *ImageInformation; // offset: 0x30 (48)
    VOID *FirstMappedVa;                                 // offset: 0x30 (48)

  } u2;                        // offset: 0x30 (48)
  struct _MMPTE *PrototypePte; // offset: 0x34 (52)
  struct _MMPTE ThePtes[1];    // offset: 0x38 (56)
};

// 0x48 (72) bytes
struct _LARGE_CONTROL_AREA {
  struct _SEGMENT *Segment;           // offset: 0x0 (0)
  struct _LIST_ENTRY DereferenceList; // offset: 0x4 (4)
  ULONG NumberOfSectionReferences;    // offset: 0xc (12)
  ULONG NumberOfPfnReferences;        // offset: 0x10 (16)
  ULONG NumberOfMappedViews;          // offset: 0x14 (20)
  ULONG NumberOfSystemCacheViews;     // offset: 0x18 (24)
  ULONG NumberOfUserReferences;       // offset: 0x1c (28)
  union {
    ULONG LongFlags;               // offset: 0x20 (32)
    struct _MMSECTION_FLAGS Flags; // offset: 0x20 (32)

  } u;                                       // offset: 0x20 (32)
  struct _FILE_OBJECT *FilePointer;          // offset: 0x24 (36)
  struct _EVENT_COUNTER *WaitingForDeletion; // offset: 0x28 (40)
  USHORT ModifiedWriteCount;                 // offset: 0x2c (44)
  USHORT FlushInProgressCount;               // offset: 0x2e (46)
  ULONG WritableUserReferences;              // offset: 0x30 (48)
  ULONG QuadwordPad;                         // offset: 0x34 (52)
  ULONG StartingFrame;                       // offset: 0x38 (56)
  struct _LIST_ENTRY UserGlobalList;         // offset: 0x3c (60)
  ULONG SessionId;                           // offset: 0x44 (68)
};

// 0x30 (48) bytes
struct _SEGMENT_OBJECT {
  VOID *BaseAddress;                             // offset: 0x0 (0)
  ULONG TotalNumberOfPtes;                       // offset: 0x4 (4)
  union _LARGE_INTEGER SizeOfSegment;            // offset: 0x8 (8)
  ULONG NonExtendedPtes;                         // offset: 0x10 (16)
  ULONG ImageCommitment;                         // offset: 0x14 (20)
  struct _CONTROL_AREA *ControlArea;             // offset: 0x18 (24)
  struct _SUBSECTION *Subsection;                // offset: 0x1c (28)
  struct _LARGE_CONTROL_AREA *LargeControlArea;  // offset: 0x20 (32)
  struct _MMSECTION_FLAGS *MmSectionFlags;       // offset: 0x24 (36)
  struct _MMSUBSECTION_FLAGS *MmSubSectionFlags; // offset: 0x28 (40)
};

// 0x18 (24) bytes
struct _SECTION_OBJECT {
  VOID *StartingVa;                // offset: 0x0 (0)
  VOID *EndingVa;                  // offset: 0x4 (4)
  VOID *Parent;                    // offset: 0x8 (8)
  VOID *LeftChild;                 // offset: 0xc (12)
  VOID *RightChild;                // offset: 0x10 (16)
  struct _SEGMENT_OBJECT *Segment; // offset: 0x14 (20)
};

// 0x38 (56) bytes
struct _CONTROL_AREA {
  struct _SEGMENT *Segment;           // offset: 0x0 (0)
  struct _LIST_ENTRY DereferenceList; // offset: 0x4 (4)
  ULONG NumberOfSectionReferences;    // offset: 0xc (12)
  ULONG NumberOfPfnReferences;        // offset: 0x10 (16)
  ULONG NumberOfMappedViews;          // offset: 0x14 (20)
  ULONG NumberOfSystemCacheViews;     // offset: 0x18 (24)
  ULONG NumberOfUserReferences;       // offset: 0x1c (28)
  union {
    ULONG LongFlags;               // offset: 0x20 (32)
    struct _MMSECTION_FLAGS Flags; // offset: 0x20 (32)

  } u;                                       // offset: 0x20 (32)
  struct _FILE_OBJECT *FilePointer;          // offset: 0x24 (36)
  struct _EVENT_COUNTER *WaitingForDeletion; // offset: 0x28 (40)
  USHORT ModifiedWriteCount;                 // offset: 0x2c (44)
  USHORT FlushInProgressCount;               // offset: 0x2e (46)
  ULONG WritableUserReferences;              // offset: 0x30 (48)
  ULONG QuadwordPad;                         // offset: 0x34 (52)
};

// 0x30 (48) bytes
struct _IO_COUNTERS {
  ULONGLONG ReadOperationCount;  // offset: 0x0 (0)
  ULONGLONG WriteOperationCount; // offset: 0x8 (8)
  ULONGLONG OtherOperationCount; // offset: 0x10 (16)
  ULONGLONG ReadTransferCount;   // offset: 0x18 (24)
  ULONGLONG WriteTransferCount;  // offset: 0x20 (32)
  ULONGLONG OtherTransferCount;  // offset: 0x28 (40)
};

// 0x20 (32) bytes
struct PROCESSOR_PERF_STATE {
  UCHAR PercentFrequency;    // offset: 0x0 (0)
  UCHAR MinCapacity;         // offset: 0x1 (1)
  USHORT Power;              // offset: 0x2 (2)
  UCHAR IncreaseLevel;       // offset: 0x4 (4)
  UCHAR DecreaseLevel;       // offset: 0x5 (5)
  USHORT Flags;              // offset: 0x6 (6)
  ULONG IncreaseTime;        // offset: 0x8 (8)
  ULONG DecreaseTime;        // offset: 0xc (12)
  ULONG IncreaseCount;       // offset: 0x10 (16)
  ULONG DecreaseCount;       // offset: 0x14 (20)
  ULONGLONG PerformanceTime; // offset: 0x18 (24)
};

// 0x8 (8) bytes
union _SLIST_HEADER {
  ULONGLONG Alignment; // offset: 0x0 (0)
  struct {
    struct _SINGLE_LIST_ENTRY Next; // offset: 0x0 (0)
    USHORT Depth;                   // offset: 0x4 (4)
  };
  USHORT Sequence; // offset: 0x6 (6)
};

// 0x58 (88) bytes
struct _MI_VERIFIER_DRIVER_ENTRY {
  struct _LIST_ENTRY Links;             // offset: 0x0 (0)
  ULONG Loads;                          // offset: 0x8 (8)
  ULONG Unloads;                        // offset: 0xc (12)
  struct _UNICODE_STRING BaseName;      // offset: 0x10 (16)
  VOID *StartAddress;                   // offset: 0x18 (24)
  VOID *EndAddress;                     // offset: 0x1c (28)
  ULONG Flags;                          // offset: 0x20 (32)
  ULONG Signature;                      // offset: 0x24 (36)
  union _SLIST_HEADER PoolPageHeaders;  // offset: 0x28 (40)
  union _SLIST_HEADER PoolTrackers;     // offset: 0x30 (48)
  ULONG CurrentPagedPoolAllocations;    // offset: 0x38 (56)
  ULONG CurrentNonPagedPoolAllocations; // offset: 0x3c (60)
  ULONG PeakPagedPoolAllocations;       // offset: 0x40 (64)
  ULONG PeakNonPagedPoolAllocations;    // offset: 0x44 (68)
  ULONG PagedBytes;                     // offset: 0x48 (72)
  ULONG NonPagedBytes;                  // offset: 0x4c (76)
  ULONG PeakPagedBytes;                 // offset: 0x50 (80)
  ULONG PeakNonPagedBytes;              // offset: 0x54 (84)
};

// 0x30 (48) bytes
struct _HEAP_LOOKASIDE {
  union _SLIST_HEADER ListHead; // offset: 0x0 (0)
  USHORT Depth;                 // offset: 0x8 (8)
  USHORT MaximumDepth;          // offset: 0xa (10)
  ULONG TotalAllocates;         // offset: 0xc (12)
  ULONG AllocateMisses;         // offset: 0x10 (16)
  ULONG TotalFrees;             // offset: 0x14 (20)
  ULONG FreeMisses;             // offset: 0x18 (24)
  ULONG LastTotalAllocates;     // offset: 0x1c (28)
  ULONG LastAllocateMisses;     // offset: 0x20 (32)
  ULONG Counters[2];            // offset: 0x24 (36)
};

// 0x80 (128) bytes
struct _GENERAL_LOOKASIDE {
  union _SLIST_HEADER ListHead; // offset: 0x0 (0)
  USHORT Depth;                 // offset: 0x8 (8)
  USHORT MaximumDepth;          // offset: 0xa (10)
  ULONG TotalAllocates;         // offset: 0xc (12)
  union {
    ULONG AllocateMisses; // offset: 0x10 (16)
    ULONG AllocateHits;   // offset: 0x10 (16)
  };
  ULONG TotalFrees; // offset: 0x14 (20)
  union {
    ULONG FreeMisses; // offset: 0x18 (24)
    ULONG FreeHits;   // offset: 0x18 (24)
  };
  enum _POOL_TYPE Type; // offset: 0x1c (28)
  ULONG Tag;            // offset: 0x20 (32)
  ULONG Size;           // offset: 0x24 (36)
  VOID *(*Allocate)(enum _POOL_TYPE arg1, ULONG arg2,
                    ULONG arg3); // offset: 0x28 (40)
  VOID (*Free)(VOID *arg1);      // offset: 0x2c (44)
  struct _LIST_ENTRY ListEntry;  // offset: 0x30 (48)
  ULONG LastTotalAllocates;      // offset: 0x38 (56)
  union {
    ULONG LastAllocateMisses; // offset: 0x3c (60)
    ULONG LastAllocateHits;   // offset: 0x3c (60)
  };
  ULONG Future[2]; // offset: 0x40 (64)
};

// 0xc0 (192) bytes
struct _NPAGED_LOOKASIDE_LIST {
  struct _GENERAL_LOOKASIDE L;        // offset: 0x0 (0)
  ULONG Lock__ObsoleteButDoNotDelete; // offset: 0x80 (128)
};

// 0x8 (8) bytes
struct _PP_LOOKASIDE_LIST {
  struct _GENERAL_LOOKASIDE *P; // offset: 0x0 (0)
  struct _GENERAL_LOOKASIDE *L; // offset: 0x4 (4)
};

// 0x40 (64) bytes
struct _KNODE {
  union _SLIST_HEADER DeadStackList;           // offset: 0x0 (0)
  union _SLIST_HEADER PfnDereferenceSListHead; // offset: 0x8 (8)
  ULONG ProcessorMask;                         // offset: 0x10 (16)
  UCHAR Color;                                 // offset: 0x14 (20)
  UCHAR Seed;                                  // offset: 0x15 (21)
  UCHAR NodeNumber;                            // offset: 0x16 (22)
  struct _flags Flags;                         // offset: 0x17 (23)
  ULONG MmShiftedColor;                        // offset: 0x18 (24)
  ULONG FreeCount[2];                          // offset: 0x1c (28)
  struct _SINGLE_LIST_ENTRY *PfnDeferredList;  // offset: 0x24 (36)
};

// 0x378 (888) bytes
struct _KUSER_SHARED_DATA {
  ULONG TickCountLowDeprecated;                // offset: 0x0 (0)
  ULONG TickCountMultiplier;                   // offset: 0x4 (4)
  volatile struct _KSYSTEM_TIME InterruptTime; // offset: 0x8 (8)
  volatile struct _KSYSTEM_TIME SystemTime;    // offset: 0x14 (20)
  volatile struct _KSYSTEM_TIME TimeZoneBias;  // offset: 0x20 (32)
  USHORT ImageNumberLow;                       // offset: 0x2c (44)
  USHORT ImageNumberHigh;                      // offset: 0x2e (46)
  USHORT NtSystemRoot[260];                    // offset: 0x30 (48)
  ULONG MaxStackTraceDepth;                    // offset: 0x238 (568)
  ULONG CryptoExponent;                        // offset: 0x23c (572)
  ULONG TimeZoneId;                            // offset: 0x240 (576)
  ULONG LargePageMinimum;                      // offset: 0x244 (580)
  ULONG Reserved2[7];                          // offset: 0x248 (584)
  enum _NT_PRODUCT_TYPE NtProductType;         // offset: 0x264 (612)
  UCHAR ProductTypeIsValid;                    // offset: 0x268 (616)
  ULONG NtMajorVersion;                        // offset: 0x26c (620)
  ULONG NtMinorVersion;                        // offset: 0x270 (624)
  UCHAR ProcessorFeatures[64];                 // offset: 0x274 (628)
  ULONG Reserved1;                             // offset: 0x2b4 (692)
  ULONG Reserved3;                             // offset: 0x2b8 (696)
  volatile ULONG TimeSlip;                     // offset: 0x2bc (700)
  enum _ALTERNATIVE_ARCHITECTURE_TYPE
      AlternativeArchitecture;               // offset: 0x2c0 (704)
  union _LARGE_INTEGER SystemExpirationDate; // offset: 0x2c8 (712)
  ULONG SuiteMask;                           // offset: 0x2d0 (720)
  UCHAR KdDebuggerEnabled;                   // offset: 0x2d4 (724)
  UCHAR NXSupportPolicy;                     // offset: 0x2d5 (725)
  volatile ULONG ActiveConsoleId;            // offset: 0x2d8 (728)
  volatile ULONG DismountCount;              // offset: 0x2dc (732)
  ULONG ComPlusPackage;                      // offset: 0x2e0 (736)
  ULONG LastSystemRITEventTickCount;         // offset: 0x2e4 (740)
  ULONG NumberOfPhysicalPages;               // offset: 0x2e8 (744)
  UCHAR SafeBootMode;                        // offset: 0x2ec (748)
  ULONG TraceLogging;                        // offset: 0x2f0 (752)
  ULONGLONG TestRetInstruction;              // offset: 0x2f8 (760)
  ULONG SystemCall;                          // offset: 0x300 (768)
  ULONG SystemCallReturn;                    // offset: 0x304 (772)
  ULONGLONG SystemCallPad[3];                // offset: 0x308 (776)
  union {
    volatile struct _KSYSTEM_TIME TickCount; // offset: 0x320 (800)
    volatile ULONGLONG TickCountQuad;        // offset: 0x320 (800)
  };
  ULONG Cookie;                     // offset: 0x330 (816)
  ULONG Wow64SharedInformation[16]; // offset: 0x334 (820)
};

// 0x20 (32) bytes
struct PROCESSOR_IDLE_TIMES {
  ULONGLONG StartTime;          // offset: 0x0 (0)
  ULONGLONG EndTime;            // offset: 0x8 (8)
  ULONG IdleHandlerReserved[4]; // offset: 0x10 (16)
};

// 0x20 (32) bytes
struct _POP_IDLE_HANDLER {
  ULONG Latency;                                            // offset: 0x0 (0)
  ULONG TimeCheck;                                          // offset: 0x4 (4)
  ULONG DemoteLimit;                                        // offset: 0x8 (8)
  ULONG PromoteLimit;                                       // offset: 0xc (12)
  ULONG PromoteCount;                                       // offset: 0x10 (16)
  UCHAR Demote;                                             // offset: 0x14 (20)
  UCHAR Promote;                                            // offset: 0x15 (21)
  UCHAR PromotePercent;                                     // offset: 0x16 (22)
  UCHAR DemotePercent;                                      // offset: 0x17 (23)
  UCHAR State;                                              // offset: 0x18 (24)
  UCHAR Spare[3];                                           // offset: 0x19 (25)
  UCHAR (*IdleFunction)(struct PROCESSOR_IDLE_TIMES *arg1); // offset: 0x1c (28)
};

// 0x8 (8) bytes
union _ULARGE_INTEGER {
  struct {
    ULONG LowPart;  // offset: 0x0 (0)
    ULONG HighPart; // offset: 0x4 (4)
  };
  struct {
    ULONG LowPart;    // offset: 0x0 (0)
    ULONG HighPart;   // offset: 0x4 (4)
  } u;                // offset: 0x0 (0)
  ULONGLONG QuadPart; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _KTIMER_TABLE_ENTRY {
  struct _LIST_ENTRY Entry;   // offset: 0x0 (0)
  union _ULARGE_INTEGER Time; // offset: 0x8 (8)
};

// 0x230 (560) bytes
struct _PEB {
  UCHAR InheritedAddressSpace;    // offset: 0x0 (0)
  UCHAR ReadImageFileExecOptions; // offset: 0x1 (1)
  UCHAR BeingDebugged;            // offset: 0x2 (2)
  union {
    UCHAR BitField; // offset: 0x3 (3)
    struct {
      UCHAR ImageUsesLargePages : 1; // offset: 0x3 (3)
      UCHAR SpareBits : 7;           // offset: 0x3 (3)
    };
  };
  VOID *Mutant;                                           // offset: 0x4 (4)
  VOID *ImageBaseAddress;                                 // offset: 0x8 (8)
  struct _PEB_LDR_DATA *Ldr;                              // offset: 0xc (12)
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // offset: 0x10 (16)
  VOID *SubSystemData;                                    // offset: 0x14 (20)
  VOID *ProcessHeap;                                      // offset: 0x18 (24)
  struct _RTL_CRITICAL_SECTION *FastPebLock;              // offset: 0x1c (28)
  VOID *AtlThunkSListPtr;                                 // offset: 0x20 (32)
  VOID *SparePtr2;                                        // offset: 0x24 (36)
  ULONG EnvironmentUpdateCount;                           // offset: 0x28 (40)
  VOID *KernelCallbackTable;                              // offset: 0x2c (44)
  ULONG SystemReserved[1];                                // offset: 0x30 (48)
  ULONG SpareUlong;                                       // offset: 0x34 (52)
  struct _PEB_FREE_BLOCK *FreeList;                       // offset: 0x38 (56)
  ULONG TlsExpansionCounter;                              // offset: 0x3c (60)
  VOID *TlsBitmap;                                        // offset: 0x40 (64)
  ULONG TlsBitmapBits[2];                                 // offset: 0x44 (68)
  VOID *ReadOnlySharedMemoryBase;                         // offset: 0x4c (76)
  VOID *ReadOnlySharedMemoryHeap;                         // offset: 0x50 (80)
  VOID **ReadOnlyStaticServerData;                        // offset: 0x54 (84)
  VOID *AnsiCodePageData;                                 // offset: 0x58 (88)
  VOID *OemCodePageData;                                  // offset: 0x5c (92)
  VOID *UnicodeCaseTableData;                             // offset: 0x60 (96)
  ULONG NumberOfProcessors;                               // offset: 0x64 (100)
  ULONG NtGlobalFlag;                                     // offset: 0x68 (104)
  union _LARGE_INTEGER CriticalSectionTimeout;            // offset: 0x70 (112)
  ULONG HeapSegmentReserve;                               // offset: 0x78 (120)
  ULONG HeapSegmentCommit;                                // offset: 0x7c (124)
  ULONG HeapDeCommitTotalFreeThreshold;                   // offset: 0x80 (128)
  ULONG HeapDeCommitFreeBlockThreshold;                   // offset: 0x84 (132)
  ULONG NumberOfHeaps;                                    // offset: 0x88 (136)
  ULONG MaximumNumberOfHeaps;                             // offset: 0x8c (140)
  VOID **ProcessHeaps;                                    // offset: 0x90 (144)
  VOID *GdiSharedHandleTable;                             // offset: 0x94 (148)
  VOID *ProcessStarterHelper;                             // offset: 0x98 (152)
  ULONG GdiDCAttributeList;                               // offset: 0x9c (156)
  struct _RTL_CRITICAL_SECTION *LoaderLock;               // offset: 0xa0 (160)
  ULONG OSMajorVersion;                                   // offset: 0xa4 (164)
  ULONG OSMinorVersion;                                   // offset: 0xa8 (168)
  USHORT OSBuildNumber;                                   // offset: 0xac (172)
  USHORT OSCSDVersion;                                    // offset: 0xae (174)
  ULONG OSPlatformId;                                     // offset: 0xb0 (176)
  ULONG ImageSubsystem;                                   // offset: 0xb4 (180)
  ULONG ImageSubsystemMajorVersion;                       // offset: 0xb8 (184)
  ULONG ImageSubsystemMinorVersion;                       // offset: 0xbc (188)
  ULONG ImageProcessAffinityMask;                         // offset: 0xc0 (192)
  ULONG GdiHandleBuffer[34];                              // offset: 0xc4 (196)
  VOID (*PostProcessInitRoutine)();                       // offset: 0x14c (332)
  VOID *TlsExpansionBitmap;                               // offset: 0x150 (336)
  ULONG TlsExpansionBitmapBits[32];                       // offset: 0x154 (340)
  ULONG SessionId;                                        // offset: 0x1d4 (468)
  union _ULARGE_INTEGER AppCompatFlags;                   // offset: 0x1d8 (472)
  union _ULARGE_INTEGER AppCompatFlagsUser;               // offset: 0x1e0 (480)
  VOID *pShimData;                                        // offset: 0x1e8 (488)
  VOID *AppCompatInfo;                                    // offset: 0x1ec (492)
  struct _UNICODE_STRING CSDVersion;                      // offset: 0x1f0 (496)
  struct _ACTIVATION_CONTEXT_DATA *ActivationContextData; // offset: 0x1f8 (504)
  struct _ASSEMBLY_STORAGE_MAP
      *ProcessAssemblyStorageMap; // offset: 0x1fc (508)
  struct _ACTIVATION_CONTEXT_DATA
      *SystemDefaultActivationContextData;                // offset: 0x200 (512)
  struct _ASSEMBLY_STORAGE_MAP *SystemAssemblyStorageMap; // offset: 0x204 (516)
  ULONG MinimumStackCommit;                               // offset: 0x208 (520)
  VOID **FlsCallback;                                     // offset: 0x20c (524)
  struct _LIST_ENTRY FlsListHead;                         // offset: 0x210 (528)
  VOID *FlsBitmap;                                        // offset: 0x218 (536)
  ULONG FlsBitmapBits[4];                                 // offset: 0x21c (540)
  ULONG FlsHighIndex;                                     // offset: 0x22c (556)
};

// 0xfbc (4028) bytes
struct _TEB {
  struct _NT_TIB NtTib;                 // offset: 0x0 (0)
  VOID *EnvironmentPointer;             // offset: 0x1c (28)
  struct _CLIENT_ID ClientId;           // offset: 0x20 (32)
  VOID *ActiveRpcHandle;                // offset: 0x28 (40)
  VOID *ThreadLocalStoragePointer;      // offset: 0x2c (44)
  struct _PEB *ProcessEnvironmentBlock; // offset: 0x30 (48)
  ULONG LastErrorValue;                 // offset: 0x34 (52)
  ULONG CountOfOwnedCriticalSections;   // offset: 0x38 (56)
  VOID *CsrClientThread;                // offset: 0x3c (60)
  VOID *Win32ThreadInfo;                // offset: 0x40 (64)
  ULONG User32Reserved[26];             // offset: 0x44 (68)
  ULONG UserReserved[5];                // offset: 0xac (172)
  VOID *WOW32Reserved;                  // offset: 0xc0 (192)
  ULONG CurrentLocale;                  // offset: 0xc4 (196)
  ULONG FpSoftwareStatusRegister;       // offset: 0xc8 (200)
  VOID *SystemReserved1[54];            // offset: 0xcc (204)
  LONG ExceptionCode;                   // offset: 0x1a4 (420)
  struct _ACTIVATION_CONTEXT_STACK
      *ActivationContextStackPointer;         // offset: 0x1a8 (424)
  UCHAR SpareBytes1[40];                      // offset: 0x1ac (428)
  struct _GDI_TEB_BATCH GdiTebBatch;          // offset: 0x1d4 (468)
  struct _CLIENT_ID RealClientId;             // offset: 0x6b4 (1716)
  VOID *GdiCachedProcessHandle;               // offset: 0x6bc (1724)
  ULONG GdiClientPID;                         // offset: 0x6c0 (1728)
  ULONG GdiClientTID;                         // offset: 0x6c4 (1732)
  VOID *GdiThreadLocalInfo;                   // offset: 0x6c8 (1736)
  ULONG Win32ClientInfo[62];                  // offset: 0x6cc (1740)
  VOID *glDispatchTable[233];                 // offset: 0x7c4 (1988)
  ULONG glReserved1[29];                      // offset: 0xb68 (2920)
  VOID *glReserved2;                          // offset: 0xbdc (3036)
  VOID *glSectionInfo;                        // offset: 0xbe0 (3040)
  VOID *glSection;                            // offset: 0xbe4 (3044)
  VOID *glTable;                              // offset: 0xbe8 (3048)
  VOID *glCurrentRC;                          // offset: 0xbec (3052)
  VOID *glContext;                            // offset: 0xbf0 (3056)
  ULONG LastStatusValue;                      // offset: 0xbf4 (3060)
  struct _UNICODE_STRING StaticUnicodeString; // offset: 0xbf8 (3064)
  USHORT StaticUnicodeBuffer[261];            // offset: 0xc00 (3072)
  VOID *DeallocationStack;                    // offset: 0xe0c (3596)
  VOID *TlsSlots[64];                         // offset: 0xe10 (3600)
  struct _LIST_ENTRY TlsLinks;                // offset: 0xf10 (3856)
  VOID *Vdm;                                  // offset: 0xf18 (3864)
  VOID *ReservedForNtRpc;                     // offset: 0xf1c (3868)
  VOID *DbgSsReserved[2];                     // offset: 0xf20 (3872)
  ULONG HardErrorMode;                        // offset: 0xf28 (3880)
  VOID *Instrumentation[14];                  // offset: 0xf2c (3884)
  VOID *SubProcessTag;                        // offset: 0xf64 (3940)
  VOID *EtwTraceData;                         // offset: 0xf68 (3944)
  VOID *WinSockData;                          // offset: 0xf6c (3948)
  ULONG GdiBatchCount;                        // offset: 0xf70 (3952)
  UCHAR InDbgPrint;                           // offset: 0xf74 (3956)
  UCHAR FreeStackOnTermination;               // offset: 0xf75 (3957)
  UCHAR HasFiberData;                         // offset: 0xf76 (3958)
  UCHAR IdealProcessor;                       // offset: 0xf77 (3959)
  ULONG GuaranteedStackBytes;                 // offset: 0xf78 (3960)
  VOID *ReservedForPerf;                      // offset: 0xf7c (3964)
  VOID *ReservedForOle;                       // offset: 0xf80 (3968)
  ULONG WaitingOnLoaderLock;                  // offset: 0xf84 (3972)
  ULONG SparePointer1;                        // offset: 0xf88 (3976)
  ULONG SoftPatchPtr1;                        // offset: 0xf8c (3980)
  ULONG SoftPatchPtr2;                        // offset: 0xf90 (3984)
  VOID **TlsExpansionSlots;                   // offset: 0xf94 (3988)
  ULONG ImpersonationLocale;                  // offset: 0xf98 (3992)
  ULONG IsImpersonating;                      // offset: 0xf9c (3996)
  VOID *NlsCache;                             // offset: 0xfa0 (4000)
  VOID *pShimData;                            // offset: 0xfa4 (4004)
  ULONG HeapVirtualAffinity;                  // offset: 0xfa8 (4008)
  VOID *CurrentTransactionHandle;             // offset: 0xfac (4012)
  struct _TEB_ACTIVE_FRAME *ActiveFrame;      // offset: 0xfb0 (4016)
  VOID *FlsData;                              // offset: 0xfb4 (4020)
  UCHAR SafeThunkCall;                        // offset: 0xfb8 (4024)
  UCHAR BooleanSpare[3];                      // offset: 0xfb9 (4025)
};

// 0x28 (40) bytes
struct _KTIMER {
  struct _DISPATCHER_HEADER Header;  // offset: 0x0 (0)
  union _ULARGE_INTEGER DueTime;     // offset: 0x10 (16)
  struct _LIST_ENTRY TimerListEntry; // offset: 0x18 (24)
  struct _KDPC *Dpc;                 // offset: 0x20 (32)
  LONG Period;                       // offset: 0x24 (36)
};

// 0x98 (152) bytes
struct _ETIMER {
  struct _KTIMER KeTimer;                  // offset: 0x0 (0)
  struct _KAPC TimerApc;                   // offset: 0x28 (40)
  struct _KDPC TimerDpc;                   // offset: 0x58 (88)
  struct _LIST_ENTRY ActiveTimerListEntry; // offset: 0x78 (120)
  ULONG Lock;                              // offset: 0x80 (128)
  LONG Period;                             // offset: 0x84 (132)
  UCHAR ApcAssociated;                     // offset: 0x88 (136)
  UCHAR WakeTimer;                         // offset: 0x89 (137)
  struct _LIST_ENTRY WakeTimerListEntry;   // offset: 0x8c (140)
};

// 0xd0 (208) bytes
struct _POP_THERMAL_ZONE {
  struct _LIST_ENTRY Link;                  // offset: 0x0 (0)
  UCHAR State;                              // offset: 0x8 (8)
  UCHAR Flags;                              // offset: 0x9 (9)
  UCHAR Mode;                               // offset: 0xa (10)
  UCHAR PendingMode;                        // offset: 0xb (11)
  UCHAR ActivePoint;                        // offset: 0xc (12)
  UCHAR PendingActivePoint;                 // offset: 0xd (13)
  LONG Throttle;                            // offset: 0x10 (16)
  ULONGLONG LastTime;                       // offset: 0x18 (24)
  ULONG SampleRate;                         // offset: 0x20 (32)
  ULONG LastTemp;                           // offset: 0x24 (36)
  struct _KTIMER PassiveTimer;              // offset: 0x28 (40)
  struct _KDPC PassiveDpc;                  // offset: 0x50 (80)
  struct _POP_ACTION_TRIGGER OverThrottled; // offset: 0x70 (112)
  struct _IRP *Irp;                         // offset: 0x7c (124)
  struct _THERMAL_INFORMATION Info;         // offset: 0x80 (128)
};

// 0x18 (24) bytes
struct _KWAIT_BLOCK {
  struct _LIST_ENTRY WaitListEntry;   // offset: 0x0 (0)
  struct _KTHREAD *Thread;            // offset: 0x8 (8)
  VOID *Object;                       // offset: 0xc (12)
  struct _KWAIT_BLOCK *NextWaitBlock; // offset: 0x10 (16)
  USHORT WaitKey;                     // offset: 0x14 (20)
  UCHAR WaitType;                     // offset: 0x16 (22)
  UCHAR SpareByte;                    // offset: 0x17 (23)
};

// 0x1b8 (440) bytes
struct _KTHREAD {
  struct _DISPATCHER_HEADER Header;  // offset: 0x0 (0)
  struct _LIST_ENTRY MutantListHead; // offset: 0x10 (16)
  VOID *InitialStack;                // offset: 0x18 (24)
  VOID *StackLimit;                  // offset: 0x1c (28)
  VOID *KernelStack;                 // offset: 0x20 (32)
  ULONG ThreadLock;                  // offset: 0x24 (36)
  union {
    struct _KAPC_STATE ApcState; // offset: 0x28 (40)
    struct {
      UCHAR ApcStateFill[23]; // offset: 0x28 (40)
      UCHAR ApcQueueable;     // offset: 0x3f (63)
    };
  };
  volatile UCHAR NextProcessor;     // offset: 0x40 (64)
  volatile UCHAR DeferredProcessor; // offset: 0x41 (65)
  UCHAR AdjustReason;               // offset: 0x42 (66)
  CHAR AdjustIncrement;             // offset: 0x43 (67)
  ULONG ApcQueueLock;               // offset: 0x44 (68)
  ULONG ContextSwitches;            // offset: 0x48 (72)
  volatile UCHAR State;             // offset: 0x4c (76)
  UCHAR NpxState;                   // offset: 0x4d (77)
  UCHAR WaitIrql;                   // offset: 0x4e (78)
  CHAR WaitMode;                    // offset: 0x4f (79)
  LONG WaitStatus;                  // offset: 0x50 (80)
  union {
    struct _KWAIT_BLOCK *WaitBlockList; // offset: 0x54 (84)
    struct _KGATE *GateObject;          // offset: 0x54 (84)
  };
  UCHAR Alertable;         // offset: 0x58 (88)
  UCHAR WaitNext;          // offset: 0x59 (89)
  UCHAR WaitReason;        // offset: 0x5a (90)
  CHAR Priority;           // offset: 0x5b (91)
  UCHAR EnableStackSwap;   // offset: 0x5c (92)
  volatile UCHAR SwapBusy; // offset: 0x5d (93)
  UCHAR Alerted[2];        // offset: 0x5e (94)
  union {
    struct _LIST_ENTRY WaitListEntry;        // offset: 0x60 (96)
    struct _SINGLE_LIST_ENTRY SwapListEntry; // offset: 0x60 (96)
  };
  struct _KQUEUE *Queue; // offset: 0x68 (104)
  ULONG WaitTime;        // offset: 0x6c (108)
  union {
    struct {
      SHORT KernelApcDisable;  // offset: 0x70 (112)
      SHORT SpecialApcDisable; // offset: 0x72 (114)
    };
    ULONG CombinedApcDisable; // offset: 0x70 (112)
  };
  VOID *Teb; // offset: 0x74 (116)
  union {
    struct _KTIMER Timer; // offset: 0x78 (120)
    UCHAR TimerFill[40];  // offset: 0x78 (120)
  };
  union {
    struct {
      ULONG AutoAlignment : 1;  // offset: 0xa0 (160)
      ULONG DisableBoost : 1;   // offset: 0xa0 (160)
      ULONG GuiThread : 1;      // offset: 0xa0 (160)
      ULONG ReservedFlags : 29; // offset: 0xa0 (160)
    };
    LONG ThreadFlags; // offset: 0xa0 (160)
  };
  union {
    struct _KWAIT_BLOCK WaitBlock[4]; // offset: 0xa8 (168)
    struct {
      UCHAR WaitBlockFill0[23];   // offset: 0xa8 (168)
      UCHAR SystemAffinityActive; // offset: 0xbf (191)
    };
    struct {
      UCHAR WaitBlockFill1[47]; // offset: 0xa8 (168)
      CHAR PreviousMode;        // offset: 0xd7 (215)
    };
    struct {
      UCHAR WaitBlockFill2[71]; // offset: 0xa8 (168)
      UCHAR ResourceIndex;      // offset: 0xef (239)
    };
    struct {
      UCHAR WaitBlockFill3[95]; // offset: 0xa8 (168)
      UCHAR LargeStack;         // offset: 0x107 (263)
    };
  };
  struct _LIST_ENTRY QueueListEntry;      // offset: 0x108 (264)
  struct _KTRAP_FRAME *TrapFrame;         // offset: 0x110 (272)
  VOID *CallbackStack;                    // offset: 0x114 (276)
  VOID *ServiceTable;                     // offset: 0x118 (280)
  UCHAR ApcStateIndex;                    // offset: 0x11c (284)
  UCHAR IdealProcessor;                   // offset: 0x11d (285)
  UCHAR Preempted;                        // offset: 0x11e (286)
  UCHAR ProcessReadyQueue;                // offset: 0x11f (287)
  UCHAR KernelStackResident;              // offset: 0x120 (288)
  CHAR BasePriority;                      // offset: 0x121 (289)
  CHAR PriorityDecrement;                 // offset: 0x122 (290)
  CHAR Saturation;                        // offset: 0x123 (291)
  ULONG UserAffinity;                     // offset: 0x124 (292)
  struct _KPROCESS *Process;              // offset: 0x128 (296)
  ULONG Affinity;                         // offset: 0x12c (300)
  struct _KAPC_STATE *ApcStatePointer[2]; // offset: 0x130 (304)
  union {
    struct _KAPC_STATE SavedApcState; // offset: 0x138 (312)
    struct {
      UCHAR SavedApcStateFill[23]; // offset: 0x138 (312)
      CHAR FreezeCount;            // offset: 0x14f (335)
    };
  };
  CHAR SuspendCount;        // offset: 0x150 (336)
  UCHAR UserIdealProcessor; // offset: 0x151 (337)
  UCHAR CalloutActive;      // offset: 0x152 (338)
  UCHAR Iopl;               // offset: 0x153 (339)
  VOID *Win32Thread;        // offset: 0x154 (340)
  VOID *StackBase;          // offset: 0x158 (344)
  union {
    struct _KAPC SuspendApc; // offset: 0x15c (348)
    struct {
      UCHAR SuspendApcFill0[1]; // offset: 0x15c (348)
      CHAR Quantum;             // offset: 0x15d (349)
    };
    struct {
      UCHAR SuspendApcFill1[3]; // offset: 0x15c (348)
      UCHAR QuantumReset;       // offset: 0x15f (351)
    };
    struct {
      UCHAR SuspendApcFill2[4]; // offset: 0x15c (348)
      ULONG KernelTime;         // offset: 0x160 (352)
    };
    struct {
      UCHAR SuspendApcFill3[36]; // offset: 0x15c (348)
      VOID *TlsArray;            // offset: 0x180 (384)
    };
    struct {
      UCHAR SuspendApcFill4[40]; // offset: 0x15c (348)
      VOID *LegoData;            // offset: 0x184 (388)
    };
    struct {
      UCHAR SuspendApcFill5[47]; // offset: 0x15c (348)
      UCHAR PowerState;          // offset: 0x18b (395)
    };
  };
  ULONG UserTime; // offset: 0x18c (396)
  union {
    struct _KSEMAPHORE SuspendSemaphore; // offset: 0x190 (400)
    UCHAR SuspendSemaphorefill[20];      // offset: 0x190 (400)
  };
  ULONG SListFaultCount;              // offset: 0x1a4 (420)
  struct _LIST_ENTRY ThreadListEntry; // offset: 0x1a8 (424)
  VOID *SListFaultAddress;            // offset: 0x1b0 (432)
};

// 0x250 (592) bytes
struct _ETHREAD {
  struct _KTHREAD Tcb;             // offset: 0x0 (0)
  union _LARGE_INTEGER CreateTime; // offset: 0x1b8 (440)
  union {
    union _LARGE_INTEGER ExitTime;     // offset: 0x1c0 (448)
    struct _LIST_ENTRY LpcReplyChain;  // offset: 0x1c0 (448)
    struct _LIST_ENTRY KeyedWaitChain; // offset: 0x1c0 (448)
  };
  union {
    LONG ExitStatus; // offset: 0x1c8 (456)
    VOID *OfsChain;  // offset: 0x1c8 (456)
  };
  struct _LIST_ENTRY PostBlockList; // offset: 0x1cc (460)
  union {
    struct _TERMINATION_PORT *TerminationPort; // offset: 0x1d4 (468)
    struct _ETHREAD *ReaperLink;               // offset: 0x1d4 (468)
    VOID *KeyedWaitValue;                      // offset: 0x1d4 (468)
  };
  ULONG ActiveTimerListLock;              // offset: 0x1d8 (472)
  struct _LIST_ENTRY ActiveTimerListHead; // offset: 0x1dc (476)
  struct _CLIENT_ID Cid;                  // offset: 0x1e4 (484)
  union {
    struct _KSEMAPHORE LpcReplySemaphore;  // offset: 0x1ec (492)
    struct _KSEMAPHORE KeyedWaitSemaphore; // offset: 0x1ec (492)
  };
  union {
    VOID *LpcReplyMessage;  // offset: 0x200 (512)
    VOID *LpcWaitingOnPort; // offset: 0x200 (512)
  };
  struct _PS_IMPERSONATION_INFORMATION
      *ImpersonationInfo;                // offset: 0x204 (516)
  struct _LIST_ENTRY IrpList;            // offset: 0x208 (520)
  ULONG TopLevelIrp;                     // offset: 0x210 (528)
  struct _DEVICE_OBJECT *DeviceToVerify; // offset: 0x214 (532)
  struct _EPROCESS *ThreadsProcess;      // offset: 0x218 (536)
  VOID *StartAddress;                    // offset: 0x21c (540)
  union {
    VOID *Win32StartAddress;    // offset: 0x220 (544)
    ULONG LpcReceivedMessageId; // offset: 0x220 (544)
  };
  struct _LIST_ENTRY ThreadListEntry;    // offset: 0x224 (548)
  struct _EX_RUNDOWN_REF RundownProtect; // offset: 0x22c (556)
  struct _EX_PUSH_LOCK ThreadLock;       // offset: 0x230 (560)
  ULONG LpcReplyMessageId;               // offset: 0x234 (564)
  ULONG ReadClusterSize;                 // offset: 0x238 (568)
  ULONG GrantedAccess;                   // offset: 0x23c (572)
  union {
    ULONG CrossThreadFlags; // offset: 0x240 (576)
    struct {
      ULONG Terminated : 1;              // offset: 0x240 (576)
      ULONG DeadThread : 1;              // offset: 0x240 (576)
      ULONG HideFromDebugger : 1;        // offset: 0x240 (576)
      ULONG ActiveImpersonationInfo : 1; // offset: 0x240 (576)
      ULONG SystemThread : 1;            // offset: 0x240 (576)
      ULONG HardErrorsAreDisabled : 1;   // offset: 0x240 (576)
      ULONG BreakOnTermination : 1;      // offset: 0x240 (576)
      ULONG SkipCreationMsg : 1;         // offset: 0x240 (576)
      ULONG SkipTerminationMsg : 1;      // offset: 0x240 (576)
    };
  };
  union {
    ULONG SameThreadPassiveFlags; // offset: 0x244 (580)
    struct {
      ULONG ActiveExWorker : 1;      // offset: 0x244 (580)
      ULONG ExWorkerCanWaitUser : 1; // offset: 0x244 (580)
      ULONG MemoryMaker : 1;         // offset: 0x244 (580)
      ULONG KeyedEventInUse : 1;     // offset: 0x244 (580)
    };
  };
  union {
    ULONG SameThreadApcFlags; // offset: 0x248 (584)
    struct {
      UCHAR LpcReceivedMsgIdValid : 1;          // offset: 0x248 (584)
      UCHAR LpcExitThreadCalled : 1;            // offset: 0x248 (584)
      UCHAR AddressSpaceOwner : 1;              // offset: 0x248 (584)
      UCHAR OwnsProcessWorkingSetExclusive : 1; // offset: 0x248 (584)
      UCHAR OwnsProcessWorkingSetShared : 1;    // offset: 0x248 (584)
      UCHAR OwnsSystemWorkingSetExclusive : 1;  // offset: 0x248 (584)
      UCHAR OwnsSystemWorkingSetShared : 1;     // offset: 0x248 (584)
      UCHAR OwnsSessionWorkingSetExclusive : 1; // offset: 0x248 (584)
      UCHAR OwnsSessionWorkingSetShared : 1;    // offset: 0x249 (585)
      UCHAR ApcNeeded : 1;                      // offset: 0x249 (585)
    };
  };
  UCHAR ForwardClusterOnly;         // offset: 0x24c (588)
  UCHAR DisablePageFaultClustering; // offset: 0x24d (589)
  UCHAR ActiveFaultCount;           // offset: 0x24e (590)
};

// 0x620 (1568) bytes
struct _POP_DEVICE_SYS_STATE {
  UCHAR IrpMinor;                                 // offset: 0x0 (0)
  enum _SYSTEM_POWER_STATE SystemState;           // offset: 0x4 (4)
  struct _KEVENT Event;                           // offset: 0x8 (8)
  ULONG SpinLock;                                 // offset: 0x18 (24)
  struct _KTHREAD *Thread;                        // offset: 0x1c (28)
  UCHAR GetNewDeviceList;                         // offset: 0x20 (32)
  struct _PO_DEVICE_NOTIFY_ORDER Order;           // offset: 0x24 (36)
  LONG Status;                                    // offset: 0x26c (620)
  struct _DEVICE_OBJECT *FailedDevice;            // offset: 0x270 (624)
  UCHAR Waking;                                   // offset: 0x274 (628)
  UCHAR Cancelled;                                // offset: 0x275 (629)
  UCHAR IgnoreErrors;                             // offset: 0x276 (630)
  UCHAR IgnoreNotImplemented;                     // offset: 0x277 (631)
  UCHAR WaitAny;                                  // offset: 0x278 (632)
  UCHAR WaitAll;                                  // offset: 0x279 (633)
  struct _LIST_ENTRY PresentIrpQueue;             // offset: 0x27c (636)
  struct _POP_DEVICE_POWER_IRP Head;              // offset: 0x284 (644)
  struct _POP_DEVICE_POWER_IRP PowerIrpState[20]; // offset: 0x2b0 (688)
};

// 0x40 (64) bytes
struct _POP_POWER_ACTION {
  UCHAR Updates;                                   // offset: 0x0 (0)
  UCHAR State;                                     // offset: 0x1 (1)
  UCHAR Shutdown;                                  // offset: 0x2 (2)
  enum POWER_ACTION Action;                        // offset: 0x4 (4)
  enum _SYSTEM_POWER_STATE LightestState;          // offset: 0x8 (8)
  ULONG Flags;                                     // offset: 0xc (12)
  LONG Status;                                     // offset: 0x10 (16)
  UCHAR IrpMinor;                                  // offset: 0x14 (20)
  enum _SYSTEM_POWER_STATE SystemState;            // offset: 0x18 (24)
  enum _SYSTEM_POWER_STATE NextSystemState;        // offset: 0x1c (28)
  struct _POP_SHUTDOWN_BUG_CHECK *ShutdownBugCode; // offset: 0x20 (32)
  struct _POP_DEVICE_SYS_STATE *DevState;          // offset: 0x24 (36)
  struct _POP_HIBER_CONTEXT *HiberContext;         // offset: 0x28 (40)
  enum _SYSTEM_POWER_STATE LastWakeState;          // offset: 0x2c (44)
  ULONGLONG WakeTime;                              // offset: 0x30 (48)
  ULONGLONG SleepTime;                             // offset: 0x38 (56)
};

// 0x20 (32) bytes
struct _KMUTANT {
  struct _DISPATCHER_HEADER Header;   // offset: 0x0 (0)
  struct _LIST_ENTRY MutantListEntry; // offset: 0x10 (16)
  struct _KTHREAD *OwnerThread;       // offset: 0x18 (24)
  UCHAR Abandoned;                    // offset: 0x1c (28)
  UCHAR ApcDisable;                   // offset: 0x1d (29)
};

// 0x1d8 (472) bytes
struct _WMI_LOGGER_CONTEXT {
  ULONG BufferSpinLock;                         // offset: 0x0 (0)
  union _LARGE_INTEGER StartTime;               // offset: 0x8 (8)
  VOID *LogFileHandle;                          // offset: 0x10 (16)
  struct _KSEMAPHORE LoggerSemaphore;           // offset: 0x14 (20)
  struct _ETHREAD *LoggerThread;                // offset: 0x28 (40)
  struct _KEVENT LoggerEvent;                   // offset: 0x2c (44)
  struct _KEVENT FlushEvent;                    // offset: 0x3c (60)
  LONG LoggerStatus;                            // offset: 0x4c (76)
  ULONG LoggerId;                               // offset: 0x50 (80)
  LONG BuffersAvailable;                        // offset: 0x54 (84)
  ULONG UsePerfClock;                           // offset: 0x58 (88)
  ULONG WriteFailureLimit;                      // offset: 0x5c (92)
  LONG BuffersDirty;                            // offset: 0x60 (96)
  LONG BuffersInUse;                            // offset: 0x64 (100)
  ULONG SwitchingInProgress;                    // offset: 0x68 (104)
  union _SLIST_HEADER FreeList;                 // offset: 0x70 (112)
  union _SLIST_HEADER FlushList;                // offset: 0x78 (120)
  union _SLIST_HEADER WaitList;                 // offset: 0x80 (128)
  union _SLIST_HEADER GlobalList;               // offset: 0x88 (136)
  struct _WMI_BUFFER_HEADER **ProcessorBuffers; // offset: 0x90 (144)
  struct _UNICODE_STRING LoggerName;            // offset: 0x94 (148)
  struct _UNICODE_STRING LogFileName;           // offset: 0x9c (156)
  struct _UNICODE_STRING LogFilePattern;        // offset: 0xa4 (164)
  struct _UNICODE_STRING NewLogFileName;        // offset: 0xac (172)
  UCHAR *EndPageMarker;                         // offset: 0xb4 (180)
  LONG CollectionOn;                            // offset: 0xb8 (184)
  ULONG KernelTraceOn;                          // offset: 0xbc (188)
  LONG PerfLogInTransition;                     // offset: 0xc0 (192)
  ULONG RequestFlag;                            // offset: 0xc4 (196)
  ULONG EnableFlags;                            // offset: 0xc8 (200)
  ULONG MaximumFileSize;                        // offset: 0xcc (204)
  union {
    ULONG LoggerMode;                        // offset: 0xd0 (208)
    struct _WMI_LOGGER_MODE LoggerModeFlags; // offset: 0xd0 (208)
  };
  ULONG Wow;                                             // offset: 0xd4 (212)
  ULONG LastFlushedBuffer;                               // offset: 0xd8 (216)
  ULONG RefCount;                                        // offset: 0xdc (220)
  ULONG FlushTimer;                                      // offset: 0xe0 (224)
  union _LARGE_INTEGER FirstBufferOffset;                // offset: 0xe8 (232)
  union _LARGE_INTEGER ByteOffset;                       // offset: 0xf0 (240)
  union _LARGE_INTEGER BufferAgeLimit;                   // offset: 0xf8 (248)
  ULONG MaximumBuffers;                                  // offset: 0x100 (256)
  ULONG MinimumBuffers;                                  // offset: 0x104 (260)
  ULONG EventsLost;                                      // offset: 0x108 (264)
  ULONG BuffersWritten;                                  // offset: 0x10c (268)
  ULONG LogBuffersLost;                                  // offset: 0x110 (272)
  ULONG RealTimeBuffersLost;                             // offset: 0x114 (276)
  ULONG BufferSize;                                      // offset: 0x118 (280)
  LONG NumberOfBuffers;                                  // offset: 0x11c (284)
  LONG *SequencePtr;                                     // offset: 0x120 (288)
  struct _GUID InstanceGuid;                             // offset: 0x124 (292)
  VOID *LoggerHeader;                                    // offset: 0x134 (308)
  LONGLONG (*GetCpuClock)();                             // offset: 0x138 (312)
  struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext; // offset: 0x13c (316)
  VOID *LoggerExtension;                                 // offset: 0x178 (376)
  LONG ReleaseQueue;                                     // offset: 0x17c (380)
  struct _TRACE_ENABLE_FLAG_EXTENSION
      EnableFlagExtension;     // offset: 0x180 (384)
  ULONG LocalSequence;         // offset: 0x184 (388)
  ULONG MaximumIrql;           // offset: 0x188 (392)
  ULONG *EnableFlagArray;      // offset: 0x18c (396)
  struct _KMUTANT LoggerMutex; // offset: 0x190 (400)
  LONG MutexCount;             // offset: 0x1b0 (432)
  LONG FileCounter;            // offset: 0x1b4 (436)
  VOID(*BufferCallback)
  (struct _WMI_BUFFER_HEADER *arg1, VOID *arg2); // offset: 0x1b8 (440)
  VOID *CallbackContext;                         // offset: 0x1bc (444)
  enum _POOL_TYPE PoolType;                      // offset: 0x1c0 (448)
  union _LARGE_INTEGER ReferenceSystemTime;      // offset: 0x1c8 (456)
  union _LARGE_INTEGER ReferenceTimeStamp;       // offset: 0x1d0 (464)
};

// 0x1c (28) bytes
struct _VI_DEADLOCK_THREAD {
  struct _KTHREAD *Thread;                    // offset: 0x0 (0)
  struct _VI_DEADLOCK_NODE *CurrentSpinNode;  // offset: 0x4 (4)
  struct _VI_DEADLOCK_NODE *CurrentOtherNode; // offset: 0x8 (8)
  union {
    struct _LIST_ENTRY ListEntry;     // offset: 0xc (12)
    struct _LIST_ENTRY FreeListEntry; // offset: 0xc (12)
  };
  ULONG NodeCount;   // offset: 0x14 (20)
  ULONG PagingCount; // offset: 0x18 (24)
};

// 0x80 (128) bytes
struct _VI_DEADLOCK_RESOURCE {
  enum _VI_DEADLOCK_RESOURCE_TYPE Type;    // offset: 0x0 (0)
  ULONG NodeCount : 16;                    // offset: 0x4 (4)
  ULONG RecursionCount : 16;               // offset: 0x4 (4)
  VOID *ResourceAddress;                   // offset: 0x8 (8)
  struct _VI_DEADLOCK_THREAD *ThreadOwner; // offset: 0xc (12)
  struct _LIST_ENTRY ResourceList;         // offset: 0x10 (16)
  union {
    struct _LIST_ENTRY HashChainList; // offset: 0x18 (24)
    struct _LIST_ENTRY FreeListEntry; // offset: 0x18 (24)
  };
  VOID *StackTrace[8];       // offset: 0x20 (32)
  VOID *LastAcquireTrace[8]; // offset: 0x40 (64)
  VOID *LastReleaseTrace[8]; // offset: 0x60 (96)
};

// 0x68 (104) bytes
struct _VI_DEADLOCK_NODE {
  struct _VI_DEADLOCK_NODE *Parent; // offset: 0x0 (0)
  struct _LIST_ENTRY ChildrenList;  // offset: 0x4 (4)
  struct _LIST_ENTRY SiblingsList;  // offset: 0xc (12)
  union {
    struct _LIST_ENTRY ResourceList;  // offset: 0x14 (20)
    struct _LIST_ENTRY FreeListEntry; // offset: 0x14 (20)
  };
  struct _VI_DEADLOCK_RESOURCE *Root;      // offset: 0x1c (28)
  struct _VI_DEADLOCK_THREAD *ThreadEntry; // offset: 0x20 (32)
  ULONG Active : 1;                        // offset: 0x24 (36)
  ULONG OnlyTryAcquireUsed : 1;            // offset: 0x24 (36)
  ULONG ReleasedOutOfOrder : 1;            // offset: 0x24 (36)
  ULONG SequenceNumber : 29;               // offset: 0x24 (36)
  VOID *StackTrace[8];                     // offset: 0x28 (40)
  VOID *ParentStackTrace[8];               // offset: 0x48 (72)
};

// 0x20 (32) bytes
struct _KGUARDED_MUTEX {
  LONG Count;             // offset: 0x0 (0)
  struct _KTHREAD *Owner; // offset: 0x4 (4)
  ULONG Contention;       // offset: 0x8 (8)
  struct _KGATE Gate;     // offset: 0xc (12)
  union {
    struct {
      SHORT KernelApcDisable;  // offset: 0x1c (28)
      SHORT SpecialApcDisable; // offset: 0x1e (30)
    };
    ULONG CombinedApcDisable; // offset: 0x1c (28)
  };
};

// 0x4c (76) bytes
struct _PNP_DEVICE_EVENT_LIST {
  LONG Status;                     // offset: 0x0 (0)
  struct _KMUTANT EventQueueMutex; // offset: 0x4 (4)
  struct _KGUARDED_MUTEX Lock;     // offset: 0x24 (36)
  struct _LIST_ENTRY List;         // offset: 0x44 (68)
};

// 0x40 (64) bytes
struct _MMSESSION {
  struct _KGUARDED_MUTEX SystemSpaceViewLock;         // offset: 0x0 (0)
  struct _KGUARDED_MUTEX *SystemSpaceViewLockPointer; // offset: 0x20 (32)
  CHAR *SystemSpaceViewStart;                         // offset: 0x24 (36)
  struct _MMVIEW *SystemSpaceViewTable;               // offset: 0x28 (40)
  ULONG SystemSpaceHashSize;                          // offset: 0x2c (44)
  ULONG SystemSpaceHashEntries;                       // offset: 0x30 (48)
  ULONG SystemSpaceHashKey;                           // offset: 0x34 (52)
  ULONG BitmapFailures;                               // offset: 0x38 (56)
  struct _RTL_BITMAP *SystemSpaceBitMap;              // offset: 0x3c (60)
};

// 0x1ec0 (7872) bytes
struct _MM_SESSION_SPACE {
  struct _MM_SESSION_SPACE *GlobalVirtualAddress; // offset: 0x0 (0)
  LONG ReferenceCount;                            // offset: 0x4 (4)
  union {
    ULONG LongFlags;                      // offset: 0x8 (8)
    struct _MM_SESSION_SPACE_FLAGS Flags; // offset: 0x8 (8)

  } u;                                            // offset: 0x8 (8)
  ULONG SessionId;                                // offset: 0xc (12)
  struct _LIST_ENTRY ProcessList;                 // offset: 0x10 (16)
  union _LARGE_INTEGER LastProcessSwappedOutTime; // offset: 0x18 (24)
  ULONG SessionPageDirectoryIndex;                // offset: 0x20 (32)
  ULONG NonPagablePages;                          // offset: 0x24 (36)
  ULONG CommittedPages;                           // offset: 0x28 (40)
  VOID *PagedPoolStart;                           // offset: 0x2c (44)
  VOID *PagedPoolEnd;                             // offset: 0x30 (48)
  struct _MMPTE *PagedPoolBasePde;                // offset: 0x34 (52)
  ULONG Color;                                    // offset: 0x38 (56)
  LONG ResidentProcessCount;                      // offset: 0x3c (60)
  ULONG SessionPoolAllocationFailures[4];         // offset: 0x40 (64)
  struct _LIST_ENTRY ImageList;                   // offset: 0x50 (80)
  ULONG LocaleId;                                 // offset: 0x58 (88)
  ULONG AttachCount;                              // offset: 0x5c (92)
  struct _KEVENT AttachEvent;                     // offset: 0x60 (96)
  struct _EPROCESS *LastProcess;                  // offset: 0x70 (112)
  LONG ProcessReferenceToSession;                 // offset: 0x74 (116)
  struct _LIST_ENTRY WsListEntry;                 // offset: 0x78 (120)
  struct _GENERAL_LOOKASIDE Lookaside[26];        // offset: 0x80 (128)
  struct _MMSESSION Session;                      // offset: 0xd80 (3456)
  struct _KGUARDED_MUTEX PagedPoolMutex;          // offset: 0xdc0 (3520)
  struct _MM_PAGED_POOL_INFO PagedPoolInfo;       // offset: 0xde0 (3552)
  struct _MMSUPPORT Vm;                           // offset: 0xe00 (3584)
  struct _MMWSLE *Wsle;                           // offset: 0xe48 (3656)
  VOID(*Win32KDriverUnload)
  (struct _DRIVER_OBJECT *arg1);     // offset: 0xe4c (3660)
  struct _POOL_DESCRIPTOR PagedPool; // offset: 0xe50 (3664)
  struct _MMPTE *PageTables;         // offset: 0x1e80 (7808)
  LONG ImageLoadingCount;            // offset: 0x1e84 (7812)
};

// 0x57c (1404) bytes
struct _CMHIVE {
  struct _HHIVE Hive;                                 // offset: 0x0 (0)
  VOID *FileHandles[3];                               // offset: 0x2d0 (720)
  struct _LIST_ENTRY NotifyList;                      // offset: 0x2dc (732)
  struct _LIST_ENTRY HiveList;                        // offset: 0x2e4 (740)
  struct _EX_PUSH_LOCK HiveLock;                      // offset: 0x2ec (748)
  struct _KGUARDED_MUTEX *ViewLock;                   // offset: 0x2f0 (752)
  struct _EX_PUSH_LOCK WriterLock;                    // offset: 0x2f4 (756)
  struct _EX_PUSH_LOCK FlusherLock;                   // offset: 0x2f8 (760)
  struct _EX_PUSH_LOCK SecurityLock;                  // offset: 0x2fc (764)
  struct _LIST_ENTRY LRUViewListHead;                 // offset: 0x300 (768)
  struct _LIST_ENTRY PinViewListHead;                 // offset: 0x308 (776)
  struct _FILE_OBJECT *FileObject;                    // offset: 0x310 (784)
  struct _UNICODE_STRING FileFullPath;                // offset: 0x314 (788)
  struct _UNICODE_STRING FileUserName;                // offset: 0x31c (796)
  USHORT MappedViews;                                 // offset: 0x324 (804)
  USHORT PinnedViews;                                 // offset: 0x326 (806)
  ULONG UseCount;                                     // offset: 0x328 (808)
  ULONG SecurityCount;                                // offset: 0x32c (812)
  ULONG SecurityCacheSize;                            // offset: 0x330 (816)
  LONG SecurityHitHint;                               // offset: 0x334 (820)
  struct _CM_KEY_SECURITY_CACHE_ENTRY *SecurityCache; // offset: 0x338 (824)
  struct _LIST_ENTRY SecurityHash[64];                // offset: 0x33c (828)
  struct _KEVENT *UnloadEvent;                        // offset: 0x53c (1340)
  struct _CM_KEY_CONTROL_BLOCK *RootKcb;              // offset: 0x540 (1344)
  UCHAR Frozen;                                       // offset: 0x544 (1348)
  struct _WORK_QUEUE_ITEM *UnloadWorkItem;            // offset: 0x548 (1352)
  UCHAR GrowOnlyMode;                                 // offset: 0x54c (1356)
  ULONG GrowOffset;                                   // offset: 0x550 (1360)
  struct _LIST_ENTRY KcbConvertListHead;              // offset: 0x554 (1364)
  struct _LIST_ENTRY KnodeConvertListHead;            // offset: 0x55c (1372)
  struct _CM_CELL_REMAP_BLOCK *CellRemapArray;        // offset: 0x564 (1380)
  ULONG Flags;                                        // offset: 0x568 (1384)
  struct _LIST_ENTRY TrustClassEntry;                 // offset: 0x56c (1388)
  ULONG FlushCount;                                   // offset: 0x574 (1396)
  struct _KTHREAD *CreatorOwner;                      // offset: 0x578 (1400)
};

// 0x1c (28) bytes
struct _HIVE_LIST_ENTRY {
  USHORT *Name;            // offset: 0x0 (0)
  USHORT *BaseName;        // offset: 0x4 (4)
  struct _CMHIVE *CmHive;  // offset: 0x8 (8)
  ULONG HHiveFlags;        // offset: 0xc (12)
  ULONG CmHiveFlags;       // offset: 0x10 (16)
  struct _CMHIVE *CmHive2; // offset: 0x14 (20)
  UCHAR ThreadFinished;    // offset: 0x18 (24)
  UCHAR ThreadStarted;     // offset: 0x19 (25)
  UCHAR Allocate;          // offset: 0x1a (26)
};

// 0x180 (384) bytes
struct _EJOB {
  struct _KEVENT Event;                           // offset: 0x0 (0)
  struct _LIST_ENTRY JobLinks;                    // offset: 0x10 (16)
  struct _LIST_ENTRY ProcessListHead;             // offset: 0x18 (24)
  struct _ERESOURCE JobLock;                      // offset: 0x20 (32)
  union _LARGE_INTEGER TotalUserTime;             // offset: 0x58 (88)
  union _LARGE_INTEGER TotalKernelTime;           // offset: 0x60 (96)
  union _LARGE_INTEGER ThisPeriodTotalUserTime;   // offset: 0x68 (104)
  union _LARGE_INTEGER ThisPeriodTotalKernelTime; // offset: 0x70 (112)
  ULONG TotalPageFaultCount;                      // offset: 0x78 (120)
  ULONG TotalProcesses;                           // offset: 0x7c (124)
  ULONG ActiveProcesses;                          // offset: 0x80 (128)
  ULONG TotalTerminatedProcesses;                 // offset: 0x84 (132)
  union _LARGE_INTEGER PerProcessUserTimeLimit;   // offset: 0x88 (136)
  union _LARGE_INTEGER PerJobUserTimeLimit;       // offset: 0x90 (144)
  ULONG LimitFlags;                               // offset: 0x98 (152)
  ULONG MinimumWorkingSetSize;                    // offset: 0x9c (156)
  ULONG MaximumWorkingSetSize;                    // offset: 0xa0 (160)
  ULONG ActiveProcessLimit;                       // offset: 0xa4 (164)
  ULONG Affinity;                                 // offset: 0xa8 (168)
  UCHAR PriorityClass;                            // offset: 0xac (172)
  ULONG UIRestrictionsClass;                      // offset: 0xb0 (176)
  ULONG SecurityLimitFlags;                       // offset: 0xb4 (180)
  VOID *Token;                                    // offset: 0xb8 (184)
  struct _PS_JOB_TOKEN_FILTER *Filter;            // offset: 0xbc (188)
  ULONG EndOfJobTimeAction;                       // offset: 0xc0 (192)
  VOID *CompletionPort;                           // offset: 0xc4 (196)
  VOID *CompletionKey;                            // offset: 0xc8 (200)
  ULONG SessionId;                                // offset: 0xcc (204)
  ULONG SchedulingClass;                          // offset: 0xd0 (208)
  ULONGLONG ReadOperationCount;                   // offset: 0xd8 (216)
  ULONGLONG WriteOperationCount;                  // offset: 0xe0 (224)
  ULONGLONG OtherOperationCount;                  // offset: 0xe8 (232)
  ULONGLONG ReadTransferCount;                    // offset: 0xf0 (240)
  ULONGLONG WriteTransferCount;                   // offset: 0xf8 (248)
  ULONGLONG OtherTransferCount;                   // offset: 0x100 (256)
  struct _IO_COUNTERS IoInfo;                     // offset: 0x108 (264)
  ULONG ProcessMemoryLimit;                       // offset: 0x138 (312)
  ULONG JobMemoryLimit;                           // offset: 0x13c (316)
  ULONG PeakProcessMemoryUsed;                    // offset: 0x140 (320)
  ULONG PeakJobMemoryUsed;                        // offset: 0x144 (324)
  ULONG CurrentJobMemoryUsed;                     // offset: 0x148 (328)
  struct _KGUARDED_MUTEX MemoryLimitsLock;        // offset: 0x14c (332)
  struct _LIST_ENTRY JobSetLinks;                 // offset: 0x16c (364)
  ULONG MemberLevel;                              // offset: 0x174 (372)
  ULONG JobFlags;                                 // offset: 0x178 (376)
};

// 0x20 (32) bytes
struct _FAST_MUTEX {
  LONG Count;             // offset: 0x0 (0)
  struct _KTHREAD *Owner; // offset: 0x4 (4)
  ULONG Contention;       // offset: 0x8 (8)
  struct _KEVENT Gate;    // offset: 0xc (12)
  ULONG OldIrql;          // offset: 0x1c (28)
};

// 0x80 (128) bytes
struct _HANDLE_TRACE_DEBUG_INFO {
  LONG RefCount;                            // offset: 0x0 (0)
  ULONG TableSize;                          // offset: 0x4 (4)
  ULONG BitMaskFlags;                       // offset: 0x8 (8)
  struct _FAST_MUTEX CloseCompactionLock;   // offset: 0xc (12)
  ULONG CurrentStackIndex;                  // offset: 0x2c (44)
  struct _HANDLE_TRACE_DB_ENTRY TraceDb[1]; // offset: 0x30 (48)
};

// 0x44 (68) bytes
struct _HANDLE_TABLE {
  ULONG TableCode;                            // offset: 0x0 (0)
  struct _EPROCESS *QuotaProcess;             // offset: 0x4 (4)
  VOID *UniqueProcessId;                      // offset: 0x8 (8)
  struct _EX_PUSH_LOCK HandleTableLock[4];    // offset: 0xc (12)
  struct _LIST_ENTRY HandleTableList;         // offset: 0x1c (28)
  struct _EX_PUSH_LOCK HandleContentionEvent; // offset: 0x24 (36)
  struct _HANDLE_TRACE_DEBUG_INFO *DebugInfo; // offset: 0x28 (40)
  LONG ExtraInfoPages;                        // offset: 0x2c (44)
  ULONG FirstFree;                            // offset: 0x30 (48)
  ULONG LastFree;                             // offset: 0x34 (52)
  ULONG NextHandleNeedingPool;                // offset: 0x38 (56)
  LONG HandleCount;                           // offset: 0x3c (60)
  union {
    ULONG Flags;          // offset: 0x40 (64)
    UCHAR StrictFIFO : 1; // offset: 0x40 (64)
  };
};

// 0x278 (632) bytes
struct _EPROCESS {
  struct _KPROCESS Pcb;                       // offset: 0x0 (0)
  struct _EX_PUSH_LOCK ProcessLock;           // offset: 0x78 (120)
  union _LARGE_INTEGER CreateTime;            // offset: 0x80 (128)
  union _LARGE_INTEGER ExitTime;              // offset: 0x88 (136)
  struct _EX_RUNDOWN_REF RundownProtect;      // offset: 0x90 (144)
  VOID *UniqueProcessId;                      // offset: 0x94 (148)
  struct _LIST_ENTRY ActiveProcessLinks;      // offset: 0x98 (152)
  ULONG QuotaUsage[3];                        // offset: 0xa0 (160)
  ULONG QuotaPeak[3];                         // offset: 0xac (172)
  ULONG CommitCharge;                         // offset: 0xb8 (184)
  ULONG PeakVirtualSize;                      // offset: 0xbc (188)
  ULONG VirtualSize;                          // offset: 0xc0 (192)
  struct _LIST_ENTRY SessionProcessLinks;     // offset: 0xc4 (196)
  VOID *DebugPort;                            // offset: 0xcc (204)
  VOID *ExceptionPort;                        // offset: 0xd0 (208)
  struct _HANDLE_TABLE *ObjectTable;          // offset: 0xd4 (212)
  struct _EX_FAST_REF Token;                  // offset: 0xd8 (216)
  ULONG WorkingSetPage;                       // offset: 0xdc (220)
  struct _KGUARDED_MUTEX AddressCreationLock; // offset: 0xe0 (224)
  ULONG HyperSpaceLock;                       // offset: 0x100 (256)
  struct _ETHREAD *ForkInProgress;            // offset: 0x104 (260)
  ULONG HardwareTrigger;                      // offset: 0x108 (264)
  struct _MM_AVL_TABLE *PhysicalVadRoot;      // offset: 0x10c (268)
  VOID *CloneRoot;                            // offset: 0x110 (272)
  ULONG NumberOfPrivatePages;                 // offset: 0x114 (276)
  ULONG NumberOfLockedPages;                  // offset: 0x118 (280)
  VOID *Win32Process;                         // offset: 0x11c (284)
  struct _EJOB *Job;                          // offset: 0x120 (288)
  VOID *SectionObject;                        // offset: 0x124 (292)
  VOID *SectionBaseAddress;                   // offset: 0x128 (296)
  struct _EPROCESS_QUOTA_BLOCK *QuotaBlock;   // offset: 0x12c (300)
  struct _PAGEFAULT_HISTORY *WorkingSetWatch; // offset: 0x130 (304)
  VOID *Win32WindowStation;                   // offset: 0x134 (308)
  VOID *InheritedFromUniqueProcessId;         // offset: 0x138 (312)
  VOID *LdtInformation;                       // offset: 0x13c (316)
  VOID *VadFreeHint;                          // offset: 0x140 (320)
  VOID *VdmObjects;                           // offset: 0x144 (324)
  VOID *DeviceMap;                            // offset: 0x148 (328)
  VOID *Spare0[3];                            // offset: 0x14c (332)
  union {
    struct _HARDWARE_PTE PageDirectoryPte; // offset: 0x158 (344)
    ULONGLONG Filler;                      // offset: 0x158 (344)
  };
  VOID *Session;                            // offset: 0x160 (352)
  UCHAR ImageFileName[16];                  // offset: 0x164 (356)
  struct _LIST_ENTRY JobLinks;              // offset: 0x174 (372)
  VOID *LockedPagesList;                    // offset: 0x17c (380)
  struct _LIST_ENTRY ThreadListHead;        // offset: 0x180 (384)
  VOID *SecurityPort;                       // offset: 0x188 (392)
  VOID *PaeTop;                             // offset: 0x18c (396)
  ULONG ActiveThreads;                      // offset: 0x190 (400)
  ULONG GrantedAccess;                      // offset: 0x194 (404)
  ULONG DefaultHardErrorProcessing;         // offset: 0x198 (408)
  LONG LastThreadExitStatus;                // offset: 0x19c (412)
  struct _PEB *Peb;                         // offset: 0x1a0 (416)
  struct _EX_FAST_REF PrefetchTrace;        // offset: 0x1a4 (420)
  union _LARGE_INTEGER ReadOperationCount;  // offset: 0x1a8 (424)
  union _LARGE_INTEGER WriteOperationCount; // offset: 0x1b0 (432)
  union _LARGE_INTEGER OtherOperationCount; // offset: 0x1b8 (440)
  union _LARGE_INTEGER ReadTransferCount;   // offset: 0x1c0 (448)
  union _LARGE_INTEGER WriteTransferCount;  // offset: 0x1c8 (456)
  union _LARGE_INTEGER OtherTransferCount;  // offset: 0x1d0 (464)
  ULONG CommitChargeLimit;                  // offset: 0x1d8 (472)
  ULONG CommitChargePeak;                   // offset: 0x1dc (476)
  VOID *AweInfo;                            // offset: 0x1e0 (480)
  struct _SE_AUDIT_PROCESS_CREATION_INFO
      SeAuditProcessCreationInfo;    // offset: 0x1e4 (484)
  struct _MMSUPPORT Vm;              // offset: 0x1e8 (488)
  struct _LIST_ENTRY MmProcessLinks; // offset: 0x230 (560)
  ULONG ModifiedPageCount;           // offset: 0x238 (568)
  ULONG JobStatus;                   // offset: 0x23c (572)
  union {
    ULONG Flags; // offset: 0x240 (576)
    struct {
      ULONG CreateReported : 1;          // offset: 0x240 (576)
      ULONG NoDebugInherit : 1;          // offset: 0x240 (576)
      ULONG ProcessExiting : 1;          // offset: 0x240 (576)
      ULONG ProcessDelete : 1;           // offset: 0x240 (576)
      ULONG Wow64SplitPages : 1;         // offset: 0x240 (576)
      ULONG VmDeleted : 1;               // offset: 0x240 (576)
      ULONG OutswapEnabled : 1;          // offset: 0x240 (576)
      ULONG Outswapped : 1;              // offset: 0x240 (576)
      ULONG ForkFailed : 1;              // offset: 0x240 (576)
      ULONG Wow64VaSpace4Gb : 1;         // offset: 0x240 (576)
      ULONG AddressSpaceInitialized : 2; // offset: 0x240 (576)
      ULONG SetTimerResolution : 1;      // offset: 0x240 (576)
      ULONG BreakOnTermination : 1;      // offset: 0x240 (576)
      ULONG SessionCreationUnderway : 1; // offset: 0x240 (576)
      ULONG WriteWatch : 1;              // offset: 0x240 (576)
      ULONG ProcessInSession : 1;        // offset: 0x240 (576)
      ULONG OverrideAddressSpace : 1;    // offset: 0x240 (576)
      ULONG HasAddressSpace : 1;         // offset: 0x240 (576)
      ULONG LaunchPrefetched : 1;        // offset: 0x240 (576)
      ULONG InjectInpageErrors : 1;      // offset: 0x240 (576)
      ULONG VmTopDown : 1;               // offset: 0x240 (576)
      ULONG ImageNotifyDone : 1;         // offset: 0x240 (576)
      ULONG PdeUpdateNeeded : 1;         // offset: 0x240 (576)
      ULONG VdmAllowed : 1;              // offset: 0x240 (576)
      ULONG SmapAllowed : 1;             // offset: 0x240 (576)
      ULONG CreateFailed : 1;            // offset: 0x240 (576)
      ULONG DefaultIoPriority : 3;       // offset: 0x240 (576)
      ULONG Spare1 : 1;                  // offset: 0x240 (576)
      ULONG Spare2 : 1;                  // offset: 0x240 (576)
    };
  };
  LONG ExitStatus;      // offset: 0x244 (580)
  USHORT NextPageColor; // offset: 0x248 (584)
  union {
    struct {
      UCHAR SubSystemMinorVersion; // offset: 0x24a (586)
      UCHAR SubSystemMajorVersion; // offset: 0x24b (587)
    };
    USHORT SubSystemVersion; // offset: 0x24a (586)
  };
  UCHAR PriorityClass;          // offset: 0x24c (588)
  struct _MM_AVL_TABLE VadRoot; // offset: 0x250 (592)
  ULONG Cookie;                 // offset: 0x270 (624)
};

// 0xc0 (192) bytes
struct _PAGED_LOOKASIDE_LIST {
  struct _GENERAL_LOOKASIDE L;                     // offset: 0x0 (0)
  struct _FAST_MUTEX Lock__ObsoleteButDoNotDelete; // offset: 0x80 (128)
};

// 0x120 (288) bytes
struct _PROCESSOR_POWER_STATE {
  VOID (*IdleFunction)(struct _PROCESSOR_POWER_STATE *arg1); // offset: 0x0 (0)
  ULONG Idle0KernelTimeLimit;                                // offset: 0x4 (4)
  ULONG Idle0LastTime;                                       // offset: 0x8 (8)
  VOID *IdleHandlers;                                        // offset: 0xc (12)
  VOID *IdleState;                           // offset: 0x10 (16)
  ULONG IdleHandlersCount;                   // offset: 0x14 (20)
  ULONGLONG LastCheck;                       // offset: 0x18 (24)
  struct PROCESSOR_IDLE_TIMES IdleTimes;     // offset: 0x20 (32)
  ULONG IdleTime1;                           // offset: 0x40 (64)
  ULONG PromotionCheck;                      // offset: 0x44 (68)
  ULONG IdleTime2;                           // offset: 0x48 (72)
  UCHAR CurrentThrottle;                     // offset: 0x4c (76)
  UCHAR ThermalThrottleLimit;                // offset: 0x4d (77)
  UCHAR CurrentThrottleIndex;                // offset: 0x4e (78)
  UCHAR ThermalThrottleIndex;                // offset: 0x4f (79)
  ULONG LastKernelUserTime;                  // offset: 0x50 (80)
  ULONG LastIdleThreadKernelTime;            // offset: 0x54 (84)
  ULONG PackageIdleStartTime;                // offset: 0x58 (88)
  ULONG PackageIdleTime;                     // offset: 0x5c (92)
  ULONG DebugCount;                          // offset: 0x60 (96)
  ULONG LastSysTime;                         // offset: 0x64 (100)
  ULONGLONG TotalIdleStateTime[3];           // offset: 0x68 (104)
  ULONG TotalIdleTransitions[3];             // offset: 0x80 (128)
  ULONGLONG PreviousC3StateTime;             // offset: 0x90 (144)
  UCHAR KneeThrottleIndex;                   // offset: 0x98 (152)
  UCHAR ThrottleLimitIndex;                  // offset: 0x99 (153)
  UCHAR PerfStatesCount;                     // offset: 0x9a (154)
  UCHAR ProcessorMinThrottle;                // offset: 0x9b (155)
  UCHAR ProcessorMaxThrottle;                // offset: 0x9c (156)
  UCHAR EnableIdleAccounting;                // offset: 0x9d (157)
  UCHAR LastC3Percentage;                    // offset: 0x9e (158)
  UCHAR LastAdjustedBusyPercentage;          // offset: 0x9f (159)
  ULONG PromotionCount;                      // offset: 0xa0 (160)
  ULONG DemotionCount;                       // offset: 0xa4 (164)
  ULONG ErrorCount;                          // offset: 0xa8 (168)
  ULONG RetryCount;                          // offset: 0xac (172)
  ULONG Flags;                               // offset: 0xb0 (176)
  union _LARGE_INTEGER PerfCounterFrequency; // offset: 0xb8 (184)
  ULONG PerfTickCount;                       // offset: 0xc0 (192)
  struct _KTIMER PerfTimer;                  // offset: 0xc8 (200)
  struct _KDPC PerfDpc;                      // offset: 0xf0 (240)
  struct PROCESSOR_PERF_STATE *PerfStates;   // offset: 0x110 (272)
  LONG (*PerfSetThrottle)(UCHAR arg1);       // offset: 0x114 (276)
  ULONG LastC3KernelUserTime;                // offset: 0x118 (280)
  ULONG LastPackageIdleTime;                 // offset: 0x11c (284)
};

// 0xec0 (3776) bytes
struct _KPRCB {
  USHORT MinorVersion;                                 // offset: 0x0 (0)
  USHORT MajorVersion;                                 // offset: 0x2 (2)
  struct _KTHREAD *CurrentThread;                      // offset: 0x4 (4)
  struct _KTHREAD *NextThread;                         // offset: 0x8 (8)
  struct _KTHREAD *IdleThread;                         // offset: 0xc (12)
  CHAR Number;                                         // offset: 0x10 (16)
  CHAR Reserved;                                       // offset: 0x11 (17)
  USHORT BuildType;                                    // offset: 0x12 (18)
  ULONG SetMember;                                     // offset: 0x14 (20)
  CHAR CpuType;                                        // offset: 0x18 (24)
  CHAR CpuID;                                          // offset: 0x19 (25)
  USHORT CpuStep;                                      // offset: 0x1a (26)
  struct _KPROCESSOR_STATE ProcessorState;             // offset: 0x1c (28)
  ULONG KernelReserved[16];                            // offset: 0x33c (828)
  ULONG HalReserved[16];                               // offset: 0x37c (892)
  UCHAR PrcbPad0[92];                                  // offset: 0x3bc (956)
  struct _KSPIN_LOCK_QUEUE LockQueue[33];              // offset: 0x418 (1048)
  struct _KTHREAD *NpxThread;                          // offset: 0x520 (1312)
  ULONG InterruptCount;                                // offset: 0x524 (1316)
  ULONG KernelTime;                                    // offset: 0x528 (1320)
  ULONG UserTime;                                      // offset: 0x52c (1324)
  ULONG DpcTime;                                       // offset: 0x530 (1328)
  ULONG DebugDpcTime;                                  // offset: 0x534 (1332)
  ULONG InterruptTime;                                 // offset: 0x538 (1336)
  ULONG AdjustDpcThreshold;                            // offset: 0x53c (1340)
  ULONG PageColor;                                     // offset: 0x540 (1344)
  UCHAR SkipTick;                                      // offset: 0x544 (1348)
  UCHAR DebuggerSavedIRQL;                             // offset: 0x545 (1349)
  UCHAR NodeColor;                                     // offset: 0x546 (1350)
  UCHAR Spare1;                                        // offset: 0x547 (1351)
  ULONG NodeShiftedColor;                              // offset: 0x548 (1352)
  struct _KNODE *ParentNode;                           // offset: 0x54c (1356)
  ULONG MultiThreadProcessorSet;                       // offset: 0x550 (1360)
  struct _KPRCB *MultiThreadSetMaster;                 // offset: 0x554 (1364)
  ULONG SecondaryColorMask;                            // offset: 0x558 (1368)
  LONG Sleeping;                                       // offset: 0x55c (1372)
  ULONG CcFastReadNoWait;                              // offset: 0x560 (1376)
  ULONG CcFastReadWait;                                // offset: 0x564 (1380)
  ULONG CcFastReadNotPossible;                         // offset: 0x568 (1384)
  ULONG CcCopyReadNoWait;                              // offset: 0x56c (1388)
  ULONG CcCopyReadWait;                                // offset: 0x570 (1392)
  ULONG CcCopyReadNoWaitMiss;                          // offset: 0x574 (1396)
  ULONG KeAlignmentFixupCount;                         // offset: 0x578 (1400)
  ULONG SpareCounter0;                                 // offset: 0x57c (1404)
  ULONG KeDcacheFlushCount;                            // offset: 0x580 (1408)
  ULONG KeExceptionDispatchCount;                      // offset: 0x584 (1412)
  ULONG KeFirstLevelTbFills;                           // offset: 0x588 (1416)
  ULONG KeFloatingEmulationCount;                      // offset: 0x58c (1420)
  ULONG KeIcacheFlushCount;                            // offset: 0x590 (1424)
  ULONG KeSecondLevelTbFills;                          // offset: 0x594 (1428)
  ULONG KeSystemCalls;                                 // offset: 0x598 (1432)
  volatile LONG IoReadOperationCount;                  // offset: 0x59c (1436)
  volatile LONG IoWriteOperationCount;                 // offset: 0x5a0 (1440)
  volatile LONG IoOtherOperationCount;                 // offset: 0x5a4 (1444)
  union _LARGE_INTEGER IoReadTransferCount;            // offset: 0x5a8 (1448)
  union _LARGE_INTEGER IoWriteTransferCount;           // offset: 0x5b0 (1456)
  union _LARGE_INTEGER IoOtherTransferCount;           // offset: 0x5b8 (1464)
  ULONG SpareCounter1[8];                              // offset: 0x5c0 (1472)
  struct _PP_LOOKASIDE_LIST PPLookasideList[16];       // offset: 0x5e0 (1504)
  struct _PP_LOOKASIDE_LIST PPNPagedLookasideList[32]; // offset: 0x660 (1632)
  struct _PP_LOOKASIDE_LIST PPPagedLookasideList[32];  // offset: 0x760 (1888)
  volatile ULONG PacketBarrier;                        // offset: 0x860 (2144)
  volatile ULONG ReverseStall;                         // offset: 0x864 (2148)
  VOID *IpiFrame;                                      // offset: 0x868 (2152)
  UCHAR PrcbPad2[52];                                  // offset: 0x86c (2156)
  VOID *volatile CurrentPacket[3];                     // offset: 0x8a0 (2208)
  volatile ULONG TargetSet;                            // offset: 0x8ac (2220)
  VOID(*volatileWorkerRoutine)
  (VOID *arg1, VOID *arg2, VOID *arg3, VOID *arg4); // offset: 0x8b0 (2224)
  volatile ULONG IpiFrozen;                         // offset: 0x8b4 (2228)
  UCHAR PrcbPad3[40];                               // offset: 0x8b8 (2232)
  volatile ULONG RequestSummary;                    // offset: 0x8e0 (2272)
  struct _KPRCB *SignalDone;                        // offset: 0x8e4 (2276)
  UCHAR PrcbPad4[56];                               // offset: 0x8e8 (2280)
  struct _KDPC_DATA DpcData[2];                     // offset: 0x920 (2336)
  VOID *DpcStack;                                   // offset: 0x948 (2376)
  ULONG MaximumDpcQueueDepth;                       // offset: 0x94c (2380)
  ULONG DpcRequestRate;                             // offset: 0x950 (2384)
  ULONG MinimumDpcRate;                             // offset: 0x954 (2388)
  volatile UCHAR DpcInterruptRequested;             // offset: 0x958 (2392)
  volatile UCHAR DpcThreadRequested;                // offset: 0x959 (2393)
  volatile UCHAR DpcRoutineActive;                  // offset: 0x95a (2394)
  volatile UCHAR DpcThreadActive;                   // offset: 0x95b (2395)
  ULONG PrcbLock;                                   // offset: 0x95c (2396)
  ULONG DpcLastCount;                               // offset: 0x960 (2400)
  volatile ULONG TimerHand;                         // offset: 0x964 (2404)
  volatile ULONG TimerRequest;                      // offset: 0x968 (2408)
  VOID *DpcThread;                                  // offset: 0x96c (2412)
  struct _KEVENT DpcEvent;                          // offset: 0x970 (2416)
  UCHAR ThreadDpcEnable;                            // offset: 0x980 (2432)
  volatile UCHAR QuantumEnd;                        // offset: 0x981 (2433)
  UCHAR PrcbPad50;                                  // offset: 0x982 (2434)
  volatile UCHAR IdleSchedule;                      // offset: 0x983 (2435)
  LONG DpcSetEventRequest;                          // offset: 0x984 (2436)
  UCHAR PrcbPad5[18];                               // offset: 0x988 (2440)
  LONG TickOffset;                                  // offset: 0x99c (2460)
  struct _KDPC CallDpc;                             // offset: 0x9a0 (2464)
  ULONG PrcbPad7[8];                                // offset: 0x9c0 (2496)
  struct _LIST_ENTRY WaitListHead;                  // offset: 0x9e0 (2528)
  ULONG ReadySummary;                               // offset: 0x9e8 (2536)
  ULONG QueueIndex;                                 // offset: 0x9ec (2540)
  struct _LIST_ENTRY DispatcherReadyListHead[32];   // offset: 0x9f0 (2544)
  struct _SINGLE_LIST_ENTRY DeferredReadyListHead;  // offset: 0xaf0 (2800)
  ULONG PrcbPad72[11];                              // offset: 0xaf4 (2804)
  VOID *ChainedInterruptList;                       // offset: 0xb20 (2848)
  LONG LookasideIrpFloat;                           // offset: 0xb24 (2852)
  volatile LONG MmPageFaultCount;                   // offset: 0xb28 (2856)
  volatile LONG MmCopyOnWriteCount;                 // offset: 0xb2c (2860)
  volatile LONG MmTransitionCount;                  // offset: 0xb30 (2864)
  volatile LONG MmCacheTransitionCount;             // offset: 0xb34 (2868)
  volatile LONG MmDemandZeroCount;                  // offset: 0xb38 (2872)
  volatile LONG MmPageReadCount;                    // offset: 0xb3c (2876)
  volatile LONG MmPageReadIoCount;                  // offset: 0xb40 (2880)
  volatile LONG MmCacheReadCount;                   // offset: 0xb44 (2884)
  volatile LONG MmCacheIoCount;                     // offset: 0xb48 (2888)
  volatile LONG MmDirtyPagesWriteCount;             // offset: 0xb4c (2892)
  volatile LONG MmDirtyWriteIoCount;                // offset: 0xb50 (2896)
  volatile LONG MmMappedPagesWriteCount;            // offset: 0xb54 (2900)
  volatile LONG MmMappedWriteIoCount;               // offset: 0xb58 (2904)
  ULONG SpareFields0[1];                            // offset: 0xb5c (2908)
  UCHAR VendorString[13];                           // offset: 0xb60 (2912)
  UCHAR InitialApicId;                              // offset: 0xb6d (2925)
  UCHAR LogicalProcessorsPerPhysicalProcessor;      // offset: 0xb6e (2926)
  ULONG MHz;                                        // offset: 0xb70 (2928)
  ULONG FeatureBits;                                // offset: 0xb74 (2932)
  union _LARGE_INTEGER UpdateSignature;             // offset: 0xb78 (2936)
  volatile ULONGLONG IsrTime;                       // offset: 0xb80 (2944)
  ULONGLONG SpareField1;                            // offset: 0xb88 (2952)
  struct _FX_SAVE_AREA NpxSaveArea;                 // offset: 0xb90 (2960)
  struct _PROCESSOR_POWER_STATE PowerState;         // offset: 0xda0 (3488)
};

// 0xfe0 (4064) bytes
struct _KPCR {
  union {
    struct _NT_TIB NtTib; // offset: 0x0 (0)
    struct {
      struct _EXCEPTION_REGISTRATION_RECORD
          *Used_ExceptionList;   // offset: 0x0 (0)
      VOID *Used_StackBase;      // offset: 0x4 (4)
      VOID *PerfGlobalGroupMask; // offset: 0x8 (8)
      VOID *TssCopy;             // offset: 0xc (12)
      ULONG ContextSwitches;     // offset: 0x10 (16)
      ULONG SetMemberCopy;       // offset: 0x14 (20)
      VOID *Used_Self;           // offset: 0x18 (24)
    };
  };
  struct _KPCR *SelfPcr;               // offset: 0x1c (28)
  struct _KPRCB *Prcb;                 // offset: 0x20 (32)
  UCHAR Irql;                          // offset: 0x24 (36)
  ULONG IRR;                           // offset: 0x28 (40)
  ULONG IrrActive;                     // offset: 0x2c (44)
  ULONG IDR;                           // offset: 0x30 (48)
  VOID *KdVersionBlock;                // offset: 0x34 (52)
  struct _KIDTENTRY *IDT;              // offset: 0x38 (56)
  struct _KGDTENTRY *GDT;              // offset: 0x3c (60)
  struct _KTSS *TSS;                   // offset: 0x40 (64)
  USHORT MajorVersion;                 // offset: 0x44 (68)
  USHORT MinorVersion;                 // offset: 0x46 (70)
  ULONG SetMember;                     // offset: 0x48 (72)
  ULONG StallScaleFactor;              // offset: 0x4c (76)
  UCHAR SpareUnused;                   // offset: 0x50 (80)
  UCHAR Number;                        // offset: 0x51 (81)
  UCHAR Spare0;                        // offset: 0x52 (82)
  UCHAR SecondLevelCacheAssociativity; // offset: 0x53 (83)
  ULONG VdmAlert;                      // offset: 0x54 (84)
  ULONG KernelReserved[14];            // offset: 0x58 (88)
  ULONG SecondLevelCacheSize;          // offset: 0x90 (144)
  ULONG HalReserved[16];               // offset: 0x94 (148)
  ULONG InterruptMode;                 // offset: 0xd4 (212)
  UCHAR Spare1;                        // offset: 0xd8 (216)
  ULONG KernelReserved2[17];           // offset: 0xdc (220)
  struct _KPRCB PrcbData;              // offset: 0x120 (288)
};

// 0x10 (16) bytes
struct LIST_ENTRY64 {
  ULONGLONG Flink; // offset: 0x0 (0)
  ULONGLONG Blink; // offset: 0x8 (8)
};
