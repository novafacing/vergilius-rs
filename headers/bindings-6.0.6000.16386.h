// 0x0 bytes (sizeof)
typedef struct _ADAPTER_OBJECT {
} _ADAPTER_OBJECT;

// 0x0 bytes (sizeof)
typedef struct _ACTIVATION_CONTEXT_DATA {
} _ACTIVATION_CONTEXT_DATA;

// 0x0 bytes (sizeof)
typedef struct _HEAP_LOCAL_SEGMENT_INFO {
} _HEAP_LOCAL_SEGMENT_INFO;

// 0x8 bytes (sizeof)
typedef union __anon_980 {
  struct _DEVICE_NODE *NextResourceDeviceNode; // offset: 0x0 ordinal: 0x0
} __anon_980;

typedef char CHAR;

// 0x0 bytes (sizeof)
typedef struct _KTMNOTIFICATION_PACKET {
} _KTMNOTIFICATION_PACKET;

typedef long long LONGLONG;

typedef unsigned long ULONG;

// 0x4 bytes (sizeof)
typedef struct _MMVAD_FLAGS2 {
  ULONG FileOffset : 24;     // offset: 0x0 ordinal: 0x0
  ULONG SecNoChange : 1;     // offset: 0x0 ordinal: 0x1
  ULONG OneSecured : 1;      // offset: 0x0 ordinal: 0x2
  ULONG MultipleSecured : 1; // offset: 0x0 ordinal: 0x3
  ULONG Spare : 1;           // offset: 0x0 ordinal: 0x4
  ULONG LongVad : 1;         // offset: 0x0 ordinal: 0x5
  ULONG ExtendableFile : 1;  // offset: 0x0 ordinal: 0x6
  ULONG Inherit : 1;         // offset: 0x0 ordinal: 0x7
  ULONG CopyOnWrite : 1;     // offset: 0x0 ordinal: 0x8
} _MMVAD_FLAGS2;

// 0x4 bytes (sizeof)
typedef struct _MMSECTION_FLAGS {
  ULONG BeingDeleted : 1;            // offset: 0x0 ordinal: 0x0
  ULONG BeingCreated : 1;            // offset: 0x0 ordinal: 0x1
  ULONG BeingPurged : 1;             // offset: 0x0 ordinal: 0x2
  ULONG NoModifiedWriting : 1;       // offset: 0x0 ordinal: 0x3
  ULONG FailAllIo : 1;               // offset: 0x0 ordinal: 0x4
  ULONG Image : 1;                   // offset: 0x0 ordinal: 0x5
  ULONG Based : 1;                   // offset: 0x0 ordinal: 0x6
  ULONG File : 1;                    // offset: 0x0 ordinal: 0x7
  ULONG Networked : 1;               // offset: 0x0 ordinal: 0x8
  ULONG Rom : 1;                     // offset: 0x0 ordinal: 0x9
  ULONG PhysicalMemory : 1;          // offset: 0x0 ordinal: 0xa
  ULONG CopyOnWrite : 1;             // offset: 0x0 ordinal: 0xb
  ULONG Reserve : 1;                 // offset: 0x0 ordinal: 0xc
  ULONG Commit : 1;                  // offset: 0x0 ordinal: 0xd
  ULONG Accessed : 1;                // offset: 0x0 ordinal: 0xe
  ULONG WasPurged : 1;               // offset: 0x0 ordinal: 0xf
  ULONG UserReference : 1;           // offset: 0x0 ordinal: 0x10
  ULONG GlobalMemory : 1;            // offset: 0x0 ordinal: 0x11
  ULONG DeleteOnClose : 1;           // offset: 0x0 ordinal: 0x12
  ULONG FilePointerNull : 1;         // offset: 0x0 ordinal: 0x13
  ULONG GlobalOnlyPerSession : 1;    // offset: 0x0 ordinal: 0x14
  ULONG SetMappedFileIoComplete : 1; // offset: 0x0 ordinal: 0x15
  ULONG CollidedFlush : 1;           // offset: 0x0 ordinal: 0x16
  ULONG NoChange : 1;                // offset: 0x0 ordinal: 0x17
  ULONG Spare : 1;                   // offset: 0x0 ordinal: 0x18
  ULONG UserWritable : 1;            // offset: 0x0 ordinal: 0x19
  ULONG PreferredNode : 6;           // offset: 0x0 ordinal: 0x1a
} _MMSECTION_FLAGS;

typedef short SHORT;

// 0x0 bytes (sizeof)
typedef struct _SMBIOS_TABLE_HEADER {
} _SMBIOS_TABLE_HEADER;

// 0x0 bytes (sizeof)
typedef struct _SETUP_LOADER_BLOCK {
} _SETUP_LOADER_BLOCK;

// 0x0 bytes (sizeof)
typedef struct _ECP_LIST {
} _ECP_LIST;

// 0x0 bytes (sizeof)
typedef struct _SCSI_REQUEST_BLOCK {
} _SCSI_REQUEST_BLOCK;

// 0x0 bytes (sizeof)
typedef struct _FLS_CALLBACK_INFO {
} _FLS_CALLBACK_INFO;

// 0x0 bytes (sizeof)
typedef struct _ASSEMBLY_STORAGE_MAP {
} _ASSEMBLY_STORAGE_MAP;

// 0x0 bytes (sizeof)
typedef struct _JOB_ACCESS_STATE {
} _JOB_ACCESS_STATE;

// 0x8 bytes (sizeof)
typedef struct __anon_418 {
  struct _SCSI_REQUEST_BLOCK *Srb; // offset: 0x0 ordinal: 0x0
} __anon_418;

// 0x0 bytes (sizeof)
typedef struct _PAGEFAULT_HISTORY {
} _PAGEFAULT_HISTORY;

// 0x0 bytes (sizeof)
typedef struct _EPROCESS_QUOTA_BLOCK {
} _EPROCESS_QUOTA_BLOCK;

// 0x8 bytes (sizeof)
typedef struct __anon_1060 {
  struct _FILE_OBJECT *FileObject; // offset: 0x0 ordinal: 0x0
} __anon_1060;

typedef unsigned short WCHAR;

// 0x2 bytes (sizeof)
typedef struct __anon_1490 {
  WCHAR ParentId[1]; // offset: 0x0 ordinal: 0x0
} __anon_1490;

// 0x2 bytes (sizeof)
typedef struct __anon_1484 {
  WCHAR DeviceId[1]; // offset: 0x0 ordinal: 0x0
} __anon_1484;

// 0x2 bytes (sizeof)
typedef struct __anon_1483 {
  WCHAR DeviceIds[1]; // offset: 0x0 ordinal: 0x0
} __anon_1483;

// 0x8 bytes (sizeof)
typedef struct _ARBITER_ADD_RESERVED_PARAMETERS {
  struct _DEVICE_OBJECT *ReserveDevice; // offset: 0x0 ordinal: 0x0
} _ARBITER_ADD_RESERVED_PARAMETERS;

// 0x0 bytes (sizeof)
typedef union _PSP_RATE_APC {
} _PSP_RATE_APC;

// 0x10 bytes (sizeof)
typedef struct _SLIST_ENTRY {
  struct _SLIST_ENTRY *Next; // offset: 0x0 ordinal: 0x0
} _SLIST_ENTRY;

typedef long LONG;

typedef enum _REG_NOTIFY_CLASS {
  RegNtDeleteKey = 0,                     // ordinal: 0x0
  RegNtPreDeleteKey = 0,                  // ordinal: 0x1
  RegNtSetValueKey = 1,                   // ordinal: 0x2
  RegNtPreSetValueKey = 1,                // ordinal: 0x3
  RegNtDeleteValueKey = 2,                // ordinal: 0x4
  RegNtPreDeleteValueKey = 2,             // ordinal: 0x5
  RegNtSetInformationKey = 3,             // ordinal: 0x6
  RegNtPreSetInformationKey = 3,          // ordinal: 0x7
  RegNtRenameKey = 4,                     // ordinal: 0x8
  RegNtPreRenameKey = 4,                  // ordinal: 0x9
  RegNtEnumerateKey = 5,                  // ordinal: 0xa
  RegNtPreEnumerateKey = 5,               // ordinal: 0xb
  RegNtEnumerateValueKey = 6,             // ordinal: 0xc
  RegNtPreEnumerateValueKey = 6,          // ordinal: 0xd
  RegNtQueryKey = 7,                      // ordinal: 0xe
  RegNtPreQueryKey = 7,                   // ordinal: 0xf
  RegNtQueryValueKey = 8,                 // ordinal: 0x10
  RegNtPreQueryValueKey = 8,              // ordinal: 0x11
  RegNtQueryMultipleValueKey = 9,         // ordinal: 0x12
  RegNtPreQueryMultipleValueKey = 9,      // ordinal: 0x13
  RegNtPreCreateKey = 10,                 // ordinal: 0x14
  RegNtPostCreateKey = 11,                // ordinal: 0x15
  RegNtPreOpenKey = 12,                   // ordinal: 0x16
  RegNtPostOpenKey = 13,                  // ordinal: 0x17
  RegNtKeyHandleClose = 14,               // ordinal: 0x18
  RegNtPreKeyHandleClose = 14,            // ordinal: 0x19
  RegNtPostDeleteKey = 15,                // ordinal: 0x1a
  RegNtPostSetValueKey = 16,              // ordinal: 0x1b
  RegNtPostDeleteValueKey = 17,           // ordinal: 0x1c
  RegNtPostSetInformationKey = 18,        // ordinal: 0x1d
  RegNtPostRenameKey = 19,                // ordinal: 0x1e
  RegNtPostEnumerateKey = 20,             // ordinal: 0x1f
  RegNtPostEnumerateValueKey = 21,        // ordinal: 0x20
  RegNtPostQueryKey = 22,                 // ordinal: 0x21
  RegNtPostQueryValueKey = 23,            // ordinal: 0x22
  RegNtPostQueryMultipleValueKey = 24,    // ordinal: 0x23
  RegNtPostKeyHandleClose = 25,           // ordinal: 0x24
  RegNtPreCreateKeyEx = 26,               // ordinal: 0x25
  RegNtPostCreateKeyEx = 27,              // ordinal: 0x26
  RegNtPreOpenKeyEx = 28,                 // ordinal: 0x27
  RegNtPostOpenKeyEx = 29,                // ordinal: 0x28
  RegNtPreFlushKey = 30,                  // ordinal: 0x29
  RegNtPostFlushKey = 31,                 // ordinal: 0x2a
  RegNtPreLoadKey = 32,                   // ordinal: 0x2b
  RegNtPostLoadKey = 33,                  // ordinal: 0x2c
  RegNtPreUnLoadKey = 34,                 // ordinal: 0x2d
  RegNtPostUnLoadKey = 35,                // ordinal: 0x2e
  RegNtPreQueryKeySecurity = 36,          // ordinal: 0x2f
  RegNtPostQueryKeySecurity = 37,         // ordinal: 0x30
  RegNtPreSetKeySecurity = 38,            // ordinal: 0x31
  RegNtPostSetKeySecurity = 39,           // ordinal: 0x32
  RegNtCallbackObjectContextCleanup = 40, // ordinal: 0x33
  MaxRegNtNotifyClass = 41,               // ordinal: 0x34
} _REG_NOTIFY_CLASS;

typedef enum _WOW64_SHARED_INFORMATION {
  SharedNtdll32LdrInitializeThunk = 0,                  // ordinal: 0x0
  SharedNtdll32KiUserExceptionDispatcher = 1,           // ordinal: 0x1
  SharedNtdll32KiUserApcDispatcher = 2,                 // ordinal: 0x2
  SharedNtdll32KiUserCallbackDispatcher = 3,            // ordinal: 0x3
  SharedNtdll32LdrHotPatchRoutine = 4,                  // ordinal: 0x4
  SharedNtdll32ExpInterlockedPopEntrySListFault = 5,    // ordinal: 0x5
  SharedNtdll32ExpInterlockedPopEntrySListResume = 6,   // ordinal: 0x6
  SharedNtdll32ExpInterlockedPopEntrySListEnd = 7,      // ordinal: 0x7
  SharedNtdll32RtlUserThreadStart = 8,                  // ordinal: 0x8
  SharedNtdll32pQueryProcessDebugInformationRemote = 9, // ordinal: 0x9
  SharedNtdll32EtwpNotificationThread = 10,             // ordinal: 0xa
  SharedNtdll32BaseAddress = 11,                        // ordinal: 0xb
  Wow64SharedPageEntriesCount = 12,                     // ordinal: 0xc
} _WOW64_SHARED_INFORMATION;

typedef enum _MM_POOL_FAILURE_REASONS {
  MmNonPagedNoPtes = 0,               // ordinal: 0x0
  MmPriorityTooLow = 1,               // ordinal: 0x1
  MmNonPagedNoPagesAvailable = 2,     // ordinal: 0x2
  MmPagedNoPtes = 3,                  // ordinal: 0x3
  MmSessionPagedNoPtes = 4,           // ordinal: 0x4
  MmPagedNoPagesAvailable = 5,        // ordinal: 0x5
  MmSessionPagedNoPagesAvailable = 6, // ordinal: 0x6
  MmPagedNoCommit = 7,                // ordinal: 0x7
  MmSessionPagedNoCommit = 8,         // ordinal: 0x8
  MmNonPagedNoResidentAvailable = 9,  // ordinal: 0x9
  MmNonPagedNoCommit = 10,            // ordinal: 0xa
  MmMaximumFailureReason = 11,        // ordinal: 0xb
} _MM_POOL_FAILURE_REASONS;

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

typedef enum _MI_VAD_TYPE {
  VadNone = 0,                 // ordinal: 0x0
  VadDevicePhysicalMemory = 1, // ordinal: 0x1
  VadImageMap = 2,             // ordinal: 0x2
  VadAwe = 3,                  // ordinal: 0x3
  VadWriteWatch = 4,           // ordinal: 0x4
  VadLargePages = 5,           // ordinal: 0x5
  VadRotatePhysical = 6,       // ordinal: 0x6
  VadLargePageSection = 7,     // ordinal: 0x7
} _MI_VAD_TYPE;

typedef enum ReplacesCorHdrNumericDefines {
  COMIMAGE_FLAGS_ILONLY = 1,                      // ordinal: 0x0
  COMIMAGE_FLAGS_32BITREQUIRED = 2,               // ordinal: 0x1
  COMIMAGE_FLAGS_IL_LIBRARY = 4,                  // ordinal: 0x2
  COMIMAGE_FLAGS_STRONGNAMESIGNED = 8,            // ordinal: 0x3
  COMIMAGE_FLAGS_TRACKDEBUGDATA = 65536,          // ordinal: 0x4
  COR_VERSION_MAJOR_V2 = 2,                       // ordinal: 0x5
  COR_VERSION_MAJOR = 2,                          // ordinal: 0x6
  COR_VERSION_MINOR = 0,                          // ordinal: 0x7
  COR_DELETED_NAME_LENGTH = 8,                    // ordinal: 0x8
  COR_VTABLEGAP_NAME_LENGTH = 8,                  // ordinal: 0x9
  NATIVE_TYPE_MAX_CB = 1,                         // ordinal: 0xa
  COR_ILMETHOD_SECT_SMALL_MAX_DATASIZE = 255,     // ordinal: 0xb
  IMAGE_COR_MIH_METHODRVA = 1,                    // ordinal: 0xc
  IMAGE_COR_MIH_EHRVA = 2,                        // ordinal: 0xd
  IMAGE_COR_MIH_BASICBLOCK = 8,                   // ordinal: 0xe
  COR_VTABLE_32BIT = 1,                           // ordinal: 0xf
  COR_VTABLE_64BIT = 2,                           // ordinal: 0x10
  COR_VTABLE_FROM_UNMANAGED = 4,                  // ordinal: 0x11
  COR_VTABLE_FROM_UNMANAGED_RETAIN_APPDOMAIN = 8, // ordinal: 0x12
  COR_VTABLE_CALL_MOST_DERIVED = 16,              // ordinal: 0x13
  IMAGE_COR_EATJ_THUNK_SIZE = 32,                 // ordinal: 0x14
  MAX_CLASS_NAME = 1024,                          // ordinal: 0x15
  MAX_PACKAGE_NAME = 1024,                        // ordinal: 0x16
} ReplacesCorHdrNumericDefines;

typedef enum _PS_STD_HANDLE_STATE {
  PsNeverDuplicate = 0,     // ordinal: 0x0
  PsRequestDuplicate = 1,   // ordinal: 0x1
  PsAlwaysDuplicate = 2,    // ordinal: 0x2
  PsMaxStdHandleStates = 3, // ordinal: 0x3
} _PS_STD_HANDLE_STATE;

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

typedef enum _MM_POOL_PRIORITIES {
  MmHighPriority = 0,        // ordinal: 0x0
  MmNormalPriority = 1,      // ordinal: 0x1
  MmLowPriority = 2,         // ordinal: 0x2
  MmMaximumPoolPriority = 3, // ordinal: 0x3
} _MM_POOL_PRIORITIES;

typedef enum _MEMORY_CACHING_TYPE_ORIG {
  MmFrameBufferCached = 2, // ordinal: 0x0
} _MEMORY_CACHING_TYPE_ORIG;

typedef enum _PCI_HOTPLUG_SLOT_INTERRUPT {
  SlotInterruptPresenceDetect = 0,  // ordinal: 0x0
  SlotInterruptLatchChange = 1,     // ordinal: 0x1
  SlotInterruptAttentionButton = 2, // ordinal: 0x2
  SlotInterruptPowerFault = 3,      // ordinal: 0x3
  SlotInterruptMaximum = 7,         // ordinal: 0x4
} _PCI_HOTPLUG_SLOT_INTERRUPT;

typedef enum _MM_POOL_TYPES {
  MmNonPagedPool = 0,     // ordinal: 0x0
  MmPagedPool = 1,        // ordinal: 0x1
  MmSessionPagedPool = 2, // ordinal: 0x2
  MmMaximumPoolType = 3,  // ordinal: 0x3
} _MM_POOL_TYPES;

typedef enum PS_CREATE_STATE {
  PsCreateInitialState = 0,        // ordinal: 0x0
  PsCreateFailOnFileOpen = 1,      // ordinal: 0x1
  PsCreateFailOnSectionCreate = 2, // ordinal: 0x2
  PsCreateFailExeFormat = 3,       // ordinal: 0x3
  PsCreateFailMachineMismatch = 4, // ordinal: 0x4
  PsCreateFailExeName = 5,         // ordinal: 0x5
  PsCreateSuccess = 6,             // ordinal: 0x6
  PsCreateMaximumStates = 7,       // ordinal: 0x7
} PS_CREATE_STATE;

typedef enum _MI_SYSTEM_VA_TYPE {
  MiVaUnused = 0,              // ordinal: 0x0
  MiVaSessionSpace = 1,        // ordinal: 0x1
  MiVaProcessSpace = 2,        // ordinal: 0x2
  MiVaBootLoaded = 3,          // ordinal: 0x3
  MiVaPfnDatabase = 4,         // ordinal: 0x4
  MiVaNonPagedPool = 5,        // ordinal: 0x5
  MiVaPagedPool = 6,           // ordinal: 0x6
  MiVaSpecialPool = 7,         // ordinal: 0x7
  MiVaSystemCache = 8,         // ordinal: 0x8
  MiVaSystemPtes = 9,          // ordinal: 0x9
  MiVaHal = 10,                // ordinal: 0xa
  MiVaSessionGlobalSpace = 11, // ordinal: 0xb
  MiVaMaximumType = 12,        // ordinal: 0xc
} _MI_SYSTEM_VA_TYPE;

typedef enum _VI_CNT_INDEX_TYPE {
  VF_CNT_IRPS_TOTAL_COUNT = 0,                       // ordinal: 0x0
  VF_CNT_IRPS_NOT_A_TARGET = 1,                      // ordinal: 0x1
  VF_CNT_IRPS_KMODE = 2,                             // ordinal: 0x2
  VF_CNT_IRPS_SKIP_FLAGS = 3,                        // ordinal: 0x3
  VF_CNT_IRPS_ALREADY_HOOKED = 4,                    // ordinal: 0x4
  VF_CNT_IRPS_WILL_ATTEMPT_CANCEL = 5,               // ordinal: 0x5
  VF_CNT_IRPS_WILL_NOT_CANCEL = 6,                   // ordinal: 0x6
  VF_CNT_REAL_RACE_FOR_COMPLETION = 7,               // ordinal: 0x7
  VF_CNT_IRPS_COMPLETED_BY_DRIVER = 8,               // ordinal: 0x8
  VF_CNT_IRPS_COMPLETED_BY_CANCEL = 9,               // ordinal: 0x9
  VF_CNT_IRPS_NO_CANCEL_ROUTINE = 10,                // ordinal: 0xa
  VF_CNT_IRPS_CANCEL_RETURNED_TRUE = 11,             // ordinal: 0xb
  VF_CNT_IRPS_CANCEL_RETURNED_FALSE = 12,            // ordinal: 0xc
  VF_CNT_IRP_CANCEL_ROUTINE_NO_CHECK = 13,           // ordinal: 0xd
  VF_CNT_IRP_CANCEL_ROUTINE_NEVER = 14,              // ordinal: 0xe
  VF_CNT_IRP_CANCEL_ROUTINE_SOMETIMES = 15,          // ordinal: 0xf
  VF_CNT_EXTRA_ALLOCS = 16,                          // ordinal: 0x10
  VF_CNT_EXTRA_FREES = 17,                           // ordinal: 0x11
  VF_CNT_CALLS_TO_TIMER_DPC = 18,                    // ordinal: 0x12
  VF_CNT_CALLS_TO_CANCEL_WORKER = 19,                // ordinal: 0x13
  VF_CNT_FREE_FROM_CANCEL_ROUTINE = 20,              // ordinal: 0x14
  VF_CNT_FREE_FROM_COMPLETION_ROUTINE = 21,          // ordinal: 0x15
  VF_CNT_ISSUES_LOGGED = 22,                         // ordinal: 0x16
  VF_CNT_CANCEL_AND_COMPLETE_DIFFERENT_THREADS = 23, // ordinal: 0x17
  VF_CNT_IRPS_TOO_MANY_UNDER_WATCH = 24,             // ordinal: 0x18
  VF_CNT_MAX_INDEX = 25,                             // ordinal: 0x19
} _VI_CNT_INDEX_TYPE;

typedef enum SYSTEM_POWER_CONDITION {
  PoAc = 0,               // ordinal: 0x0
  PoDc = 1,               // ordinal: 0x1
  PoHot = 2,              // ordinal: 0x2
  PoConditionMaximum = 3, // ordinal: 0x3
} SYSTEM_POWER_CONDITION;

typedef enum LSA_FOREST_TRUST_RECORD_TYPE {
  ForestTrustTopLevelName = 0,   // ordinal: 0x0
  ForestTrustTopLevelNameEx = 1, // ordinal: 0x1
  ForestTrustDomainInfo = 2,     // ordinal: 0x2
  ForestTrustRecordTypeLast = 2, // ordinal: 0x3
} LSA_FOREST_TRUST_RECORD_TYPE;

typedef enum _MM_PREEMPTIVE_TRIMS {
  MmPreemptForNonPaged = 0,         // ordinal: 0x0
  MmPreemptForPaged = 1,            // ordinal: 0x1
  MmPreemptForNonPagedPriority = 2, // ordinal: 0x2
  MmPreemptForPagedPriority = 3,    // ordinal: 0x3
  MmMaximumPreempt = 4,             // ordinal: 0x4
} _MM_PREEMPTIVE_TRIMS;

typedef enum _PS_IFEO_KEY_STATE {
  PsReadIFEOAllValues = 0, // ordinal: 0x0
  PsSkipIFEODebugger = 1,  // ordinal: 0x1
  PsSkipAllIFEO = 2,       // ordinal: 0x2
  PsMaxIFEOKeyStates = 3,  // ordinal: 0x3
} _PS_IFEO_KEY_STATE;

typedef enum _DPFLTR_TYPE {
  DPFLTR_SYSTEM_ID = 0,          // ordinal: 0x0
  DPFLTR_SMSS_ID = 1,            // ordinal: 0x1
  DPFLTR_SETUP_ID = 2,           // ordinal: 0x2
  DPFLTR_NTFS_ID = 3,            // ordinal: 0x3
  DPFLTR_FSTUB_ID = 4,           // ordinal: 0x4
  DPFLTR_CRASHDUMP_ID = 5,       // ordinal: 0x5
  DPFLTR_CDAUDIO_ID = 6,         // ordinal: 0x6
  DPFLTR_CDROM_ID = 7,           // ordinal: 0x7
  DPFLTR_CLASSPNP_ID = 8,        // ordinal: 0x8
  DPFLTR_DISK_ID = 9,            // ordinal: 0x9
  DPFLTR_REDBOOK_ID = 10,        // ordinal: 0xa
  DPFLTR_STORPROP_ID = 11,       // ordinal: 0xb
  DPFLTR_SCSIPORT_ID = 12,       // ordinal: 0xc
  DPFLTR_SCSIMINIPORT_ID = 13,   // ordinal: 0xd
  DPFLTR_CONFIG_ID = 14,         // ordinal: 0xe
  DPFLTR_I8042PRT_ID = 15,       // ordinal: 0xf
  DPFLTR_SERMOUSE_ID = 16,       // ordinal: 0x10
  DPFLTR_LSERMOUS_ID = 17,       // ordinal: 0x11
  DPFLTR_KBDHID_ID = 18,         // ordinal: 0x12
  DPFLTR_MOUHID_ID = 19,         // ordinal: 0x13
  DPFLTR_KBDCLASS_ID = 20,       // ordinal: 0x14
  DPFLTR_MOUCLASS_ID = 21,       // ordinal: 0x15
  DPFLTR_TWOTRACK_ID = 22,       // ordinal: 0x16
  DPFLTR_WMILIB_ID = 23,         // ordinal: 0x17
  DPFLTR_ACPI_ID = 24,           // ordinal: 0x18
  DPFLTR_AMLI_ID = 25,           // ordinal: 0x19
  DPFLTR_HALIA64_ID = 26,        // ordinal: 0x1a
  DPFLTR_VIDEO_ID = 27,          // ordinal: 0x1b
  DPFLTR_SVCHOST_ID = 28,        // ordinal: 0x1c
  DPFLTR_VIDEOPRT_ID = 29,       // ordinal: 0x1d
  DPFLTR_TCPIP_ID = 30,          // ordinal: 0x1e
  DPFLTR_DMSYNTH_ID = 31,        // ordinal: 0x1f
  DPFLTR_NTOSPNP_ID = 32,        // ordinal: 0x20
  DPFLTR_FASTFAT_ID = 33,        // ordinal: 0x21
  DPFLTR_SAMSS_ID = 34,          // ordinal: 0x22
  DPFLTR_PNPMGR_ID = 35,         // ordinal: 0x23
  DPFLTR_NETAPI_ID = 36,         // ordinal: 0x24
  DPFLTR_SCSERVER_ID = 37,       // ordinal: 0x25
  DPFLTR_SCCLIENT_ID = 38,       // ordinal: 0x26
  DPFLTR_SERIAL_ID = 39,         // ordinal: 0x27
  DPFLTR_SERENUM_ID = 40,        // ordinal: 0x28
  DPFLTR_UHCD_ID = 41,           // ordinal: 0x29
  DPFLTR_RPCPROXY_ID = 42,       // ordinal: 0x2a
  DPFLTR_AUTOCHK_ID = 43,        // ordinal: 0x2b
  DPFLTR_DCOMSS_ID = 44,         // ordinal: 0x2c
  DPFLTR_UNIMODEM_ID = 45,       // ordinal: 0x2d
  DPFLTR_SIS_ID = 46,            // ordinal: 0x2e
  DPFLTR_FLTMGR_ID = 47,         // ordinal: 0x2f
  DPFLTR_WMICORE_ID = 48,        // ordinal: 0x30
  DPFLTR_BURNENG_ID = 49,        // ordinal: 0x31
  DPFLTR_IMAPI_ID = 50,          // ordinal: 0x32
  DPFLTR_SXS_ID = 51,            // ordinal: 0x33
  DPFLTR_FUSION_ID = 52,         // ordinal: 0x34
  DPFLTR_IDLETASK_ID = 53,       // ordinal: 0x35
  DPFLTR_SOFTPCI_ID = 54,        // ordinal: 0x36
  DPFLTR_TAPE_ID = 55,           // ordinal: 0x37
  DPFLTR_MCHGR_ID = 56,          // ordinal: 0x38
  DPFLTR_IDEP_ID = 57,           // ordinal: 0x39
  DPFLTR_PCIIDE_ID = 58,         // ordinal: 0x3a
  DPFLTR_FLOPPY_ID = 59,         // ordinal: 0x3b
  DPFLTR_FDC_ID = 60,            // ordinal: 0x3c
  DPFLTR_TERMSRV_ID = 61,        // ordinal: 0x3d
  DPFLTR_W32TIME_ID = 62,        // ordinal: 0x3e
  DPFLTR_PREFETCHER_ID = 63,     // ordinal: 0x3f
  DPFLTR_RSFILTER_ID = 64,       // ordinal: 0x40
  DPFLTR_FCPORT_ID = 65,         // ordinal: 0x41
  DPFLTR_PCI_ID = 66,            // ordinal: 0x42
  DPFLTR_DMIO_ID = 67,           // ordinal: 0x43
  DPFLTR_DMCONFIG_ID = 68,       // ordinal: 0x44
  DPFLTR_DMADMIN_ID = 69,        // ordinal: 0x45
  DPFLTR_WSOCKTRANSPORT_ID = 70, // ordinal: 0x46
  DPFLTR_VSS_ID = 71,            // ordinal: 0x47
  DPFLTR_PNPMEM_ID = 72,         // ordinal: 0x48
  DPFLTR_PROCESSOR_ID = 73,      // ordinal: 0x49
  DPFLTR_DMSERVER_ID = 74,       // ordinal: 0x4a
  DPFLTR_SR_ID = 75,             // ordinal: 0x4b
  DPFLTR_INFINIBAND_ID = 76,     // ordinal: 0x4c
  DPFLTR_IHVDRIVER_ID = 77,      // ordinal: 0x4d
  DPFLTR_IHVVIDEO_ID = 78,       // ordinal: 0x4e
  DPFLTR_IHVAUDIO_ID = 79,       // ordinal: 0x4f
  DPFLTR_IHVNETWORK_ID = 80,     // ordinal: 0x50
  DPFLTR_IHVSTREAMING_ID = 81,   // ordinal: 0x51
  DPFLTR_IHVBUS_ID = 82,         // ordinal: 0x52
  DPFLTR_HPS_ID = 83,            // ordinal: 0x53
  DPFLTR_RTLTHREADPOOL_ID = 84,  // ordinal: 0x54
  DPFLTR_LDR_ID = 85,            // ordinal: 0x55
  DPFLTR_TCPIP6_ID = 86,         // ordinal: 0x56
  DPFLTR_ISAPNP_ID = 87,         // ordinal: 0x57
  DPFLTR_SHPC_ID = 88,           // ordinal: 0x58
  DPFLTR_STORPORT_ID = 89,       // ordinal: 0x59
  DPFLTR_STORMINIPORT_ID = 90,   // ordinal: 0x5a
  DPFLTR_PRINTSPOOLER_ID = 91,   // ordinal: 0x5b
  DPFLTR_VSSDYNDISK_ID = 92,     // ordinal: 0x5c
  DPFLTR_VERIFIER_ID = 93,       // ordinal: 0x5d
  DPFLTR_VDS_ID = 94,            // ordinal: 0x5e
  DPFLTR_VDSBAS_ID = 95,         // ordinal: 0x5f
  DPFLTR_VDSDYN_ID = 96,         // ordinal: 0x60
  DPFLTR_VDSDYNDR_ID = 97,       // ordinal: 0x61
  DPFLTR_VDSLDR_ID = 98,         // ordinal: 0x62
  DPFLTR_VDSUTIL_ID = 99,        // ordinal: 0x63
  DPFLTR_DFRGIFC_ID = 100,       // ordinal: 0x64
  DPFLTR_DEFAULT_ID = 101,       // ordinal: 0x65
  DPFLTR_MM_ID = 102,            // ordinal: 0x66
  DPFLTR_DFSC_ID = 103,          // ordinal: 0x67
  DPFLTR_WOW64_ID = 104,         // ordinal: 0x68
  DPFLTR_ALPC_ID = 105,          // ordinal: 0x69
  DPFLTR_WDI_ID = 106,           // ordinal: 0x6a
  DPFLTR_PERFLIB_ID = 107,       // ordinal: 0x6b
  DPFLTR_KTM_ID = 108,           // ordinal: 0x6c
  DPFLTR_IOSTRESS_ID = 109,      // ordinal: 0x6d
  DPFLTR_HEAP_ID = 110,          // ordinal: 0x6e
  DPFLTR_WHEA_ID = 111,          // ordinal: 0x6f
  DPFLTR_USERGDI_ID = 112,       // ordinal: 0x70
  DPFLTR_MMCSS_ID = 113,         // ordinal: 0x71
  DPFLTR_TPM_ID = 114,           // ordinal: 0x72
  DPFLTR_THREADORDER_ID = 115,   // ordinal: 0x73
  DPFLTR_ENVIRON_ID = 116,       // ordinal: 0x74
  DPFLTR_EMS_ID = 117,           // ordinal: 0x75
  DPFLTR_WDT_ID = 118,           // ordinal: 0x76
  DPFLTR_FVEVOL_ID = 119,        // ordinal: 0x77
  DPFLTR_NDIS_ID = 120,          // ordinal: 0x78
  DPFLTR_NVCTRACE_ID = 121,      // ordinal: 0x79
  DPFLTR_LUAFV_ID = 122,         // ordinal: 0x7a
  DPFLTR_APPCOMPAT_ID = 123,     // ordinal: 0x7b
  DPFLTR_USBSTOR_ID = 124,       // ordinal: 0x7c
  DPFLTR_SBP2PORT_ID = 125,      // ordinal: 0x7d
  DPFLTR_COVERAGE_ID = 126,      // ordinal: 0x7e
  DPFLTR_CACHEMGR_ID = 127,      // ordinal: 0x7f
  DPFLTR_MOUNTMGR_ID = 128,      // ordinal: 0x80
  DPFLTR_CFR_ID = 129,           // ordinal: 0x81
  DPFLTR_TXF_ID = 130,           // ordinal: 0x82
  DPFLTR_KSECDD_ID = 131,        // ordinal: 0x83
  DPFLTR_FLTREGRESS_ID = 132,    // ordinal: 0x84
  DPFLTR_MPIO_ID = 133,          // ordinal: 0x85
  DPFLTR_MSDSM_ID = 134,         // ordinal: 0x86
  DPFLTR_UDFS_ID = 135,          // ordinal: 0x87
  DPFLTR_ENDOFTABLE_ID = 136,    // ordinal: 0x88
} _DPFLTR_TYPE;

typedef enum _PS_RESOURCE_TYPE {
  PsResourceNonPagedPool = 0, // ordinal: 0x0
  PsResourcePagedPool = 1,    // ordinal: 0x1
  PsResourcePageFile = 2,     // ordinal: 0x2
  PsResourceWorkingSet = 3,   // ordinal: 0x3
  PsResourceCpuRate = 4,      // ordinal: 0x4
  PsResourceMax = 5,          // ordinal: 0x5
} _PS_RESOURCE_TYPE;

typedef enum _PS_ATTRIBUTE_NUM {
  PsAttributeParentProcess = 0,  // ordinal: 0x0
  PsAttributeDebugObject = 1,    // ordinal: 0x1
  PsAttributeToken = 2,          // ordinal: 0x2
  PsAttributeClientId = 3,       // ordinal: 0x3
  PsAttributeTebAddress = 4,     // ordinal: 0x4
  PsAttributeImageName = 5,      // ordinal: 0x5
  PsAttributeImageInfo = 6,      // ordinal: 0x6
  PsAttributeMemoryReserve = 7,  // ordinal: 0x7
  PsAttributePriorityClass = 8,  // ordinal: 0x8
  PsAttributeErrorMode = 9,      // ordinal: 0x9
  PsAttributeStdHandleInfo = 10, // ordinal: 0xa
  PsAttributeHandleList = 11,    // ordinal: 0xb
  PsAttributeMax = 12,           // ordinal: 0xc
} _PS_ATTRIBUTE_NUM;

typedef enum _WAIT_TYPE {
  WaitAll = 0, // ordinal: 0x0
  WaitAny = 1, // ordinal: 0x1
} _WAIT_TYPE;

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
  WrCalloutStack = 25,    // ordinal: 0x19
  WrKernel = 26,          // ordinal: 0x1a
  WrResource = 27,        // ordinal: 0x1b
  WrPushLock = 28,        // ordinal: 0x1c
  WrMutex = 29,           // ordinal: 0x1d
  WrQuantumEnd = 30,      // ordinal: 0x1e
  WrDispatchInt = 31,     // ordinal: 0x1f
  WrPreempted = 32,       // ordinal: 0x20
  WrYieldExecution = 33,  // ordinal: 0x21
  WrFastMutex = 34,       // ordinal: 0x22
  WrGuardedMutex = 35,    // ordinal: 0x23
  WrRundown = 36,         // ordinal: 0x24
  MaximumWaitReason = 37, // ordinal: 0x25
} _KWAIT_REASON;

typedef enum _ETW_GUID_TYPE {
  EtwTraceGuidType = 0,        // ordinal: 0x0
  EtwNotificationGuidType = 1, // ordinal: 0x1
  EtwGuidTypeMax = 2,          // ordinal: 0x2
} _ETW_GUID_TYPE;

typedef enum _HEAP_FAILURE_TYPE {
  heap_failure_internal = 0,                    // ordinal: 0x0
  heap_failure_unknown = 1,                     // ordinal: 0x1
  heap_failure_generic = 2,                     // ordinal: 0x2
  heap_failure_entry_corruption = 3,            // ordinal: 0x3
  heap_failure_multiple_entries_corruption = 4, // ordinal: 0x4
  heap_failure_virtual_block_corruption = 5,    // ordinal: 0x5
  heap_failure_buffer_overrun = 6,              // ordinal: 0x6
  heap_failure_buffer_underrun = 7,             // ordinal: 0x7
  heap_failure_block_not_busy = 8,              // ordinal: 0x8
  heap_failure_invalid_argument = 9,            // ordinal: 0x9
  heap_failure_usage_after_free = 10,           // ordinal: 0xa
  heap_failure_cross_heap_operation = 11,       // ordinal: 0xb
  heap_failure_freelists_corruption = 12,       // ordinal: 0xc
  heap_failure_listentry_corruption = 13,       // ordinal: 0xd
} _HEAP_FAILURE_TYPE;

typedef enum _IO_PAGING_PRIORITY {
  IoPagingPriorityInvalid = 0,   // ordinal: 0x0
  IoPagingPriorityNormal = 1,    // ordinal: 0x1
  IoPagingPriorityHigh = 2,      // ordinal: 0x2
  IoPagingPriorityReserved1 = 3, // ordinal: 0x3
  IoPagingPriorityReserved2 = 4, // ordinal: 0x4
} _IO_PAGING_PRIORITY;

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

typedef enum _PF_FILE_ACCESS_TYPE {
  PfFileAccessTypeRead = 0,  // ordinal: 0x0
  PfFileAccessTypeWrite = 1, // ordinal: 0x1
  PfFileAccessTypeMax = 2,   // ordinal: 0x2
} _PF_FILE_ACCESS_TYPE;

typedef enum _PP_NPAGED_LOOKASIDE_NUMBER {
  LookasideSmallIrpList = 0,      // ordinal: 0x0
  LookasideLargeIrpList = 1,      // ordinal: 0x1
  LookasideMdlList = 2,           // ordinal: 0x2
  LookasideCreateInfoList = 3,    // ordinal: 0x3
  LookasideNameBufferList = 4,    // ordinal: 0x4
  LookasideTwilightList = 5,      // ordinal: 0x5
  LookasideCompletionList = 6,    // ordinal: 0x6
  LookasideScratchBufferList = 7, // ordinal: 0x7
  LookasideMaximumList = 8,       // ordinal: 0x8
} _PP_NPAGED_LOOKASIDE_NUMBER;

typedef enum _EVENT_TYPE {
  NotificationEvent = 0,    // ordinal: 0x0
  SynchronizationEvent = 1, // ordinal: 0x1
} _EVENT_TYPE;

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
  PowerSettingChange = 10,        // ordinal: 0xa
  MaxPlugEventCategory = 11,      // ordinal: 0xb
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

// 0x8 bytes (sizeof)
typedef struct __anon_1488 {
  enum _PNP_VETO_TYPE VetoType;    // offset: 0x0 ordinal: 0x0
  WCHAR DeviceIdVetoNameBuffer[1]; // offset: 0x4 ordinal: 0x1
} __anon_1488;

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

typedef enum _VI_DEADLOCK_RESOURCE_TYPE {
  VfDeadlockUnknown = 0,         // ordinal: 0x0
  VfDeadlockMutex = 1,           // ordinal: 0x1
  VfDeadlockMutexAbandoned = 2,  // ordinal: 0x2
  VfDeadlockFastMutex = 3,       // ordinal: 0x3
  VfDeadlockFastMutexUnsafe = 4, // ordinal: 0x4
  VfDeadlockSpinLock = 5,        // ordinal: 0x5
  VfDeadlockTypeMaximum = 6,     // ordinal: 0x6
} _VI_DEADLOCK_RESOURCE_TYPE;

typedef enum _ETW_PROVIDER_STATE {
  EtwProviderStateFree = 0,       // ordinal: 0x0
  EtwProviderStateTransition = 1, // ordinal: 0x1
  EtwProviderStateActive = 2,     // ordinal: 0x2
  EtwProviderStateMax = 3,        // ordinal: 0x3
} _ETW_PROVIDER_STATE;

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
  PolicyDeviceMemory = 3,           // ordinal: 0x3
  PolicyInitiatePowerActionAPI = 4, // ordinal: 0x4
  PolicySetPowerStateAPI = 5,       // ordinal: 0x5
  PolicyImmediateDozeS4 = 6,        // ordinal: 0x6
  PolicySystemIdle = 7,             // ordinal: 0x7
  PolicyDeviceMax = 8,              // ordinal: 0x8
} POP_POLICY_DEVICE_TYPE;

typedef enum _ARBITER_RESULT {
  ArbiterResultUndefined = -1,       // ordinal: 0x0
  ArbiterResultSuccess = 0,          // ordinal: 0x1
  ArbiterResultExternalConflict = 1, // ordinal: 0x2
  ArbiterResultNullRequest = 2,      // ordinal: 0x3
} _ARBITER_RESULT;

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

typedef enum _TYPE_OF_MEMORY {
  LoaderExceptionBlock = 0,      // ordinal: 0x0
  LoaderSystemBlock = 1,         // ordinal: 0x1
  LoaderFree = 2,                // ordinal: 0x2
  LoaderBad = 3,                 // ordinal: 0x3
  LoaderLoadedProgram = 4,       // ordinal: 0x4
  LoaderFirmwareTemporary = 5,   // ordinal: 0x5
  LoaderFirmwarePermanent = 6,   // ordinal: 0x6
  LoaderOsloaderHeap = 7,        // ordinal: 0x7
  LoaderOsloaderStack = 8,       // ordinal: 0x8
  LoaderSystemCode = 9,          // ordinal: 0x9
  LoaderHalCode = 10,            // ordinal: 0xa
  LoaderBootDriver = 11,         // ordinal: 0xb
  LoaderConsoleInDriver = 12,    // ordinal: 0xc
  LoaderConsoleOutDriver = 13,   // ordinal: 0xd
  LoaderStartupDpcStack = 14,    // ordinal: 0xe
  LoaderStartupKernelStack = 15, // ordinal: 0xf
  LoaderStartupPanicStack = 16,  // ordinal: 0x10
  LoaderStartupPcrPage = 17,     // ordinal: 0x11
  LoaderStartupPdrPage = 18,     // ordinal: 0x12
  LoaderRegistryData = 19,       // ordinal: 0x13
  LoaderMemoryData = 20,         // ordinal: 0x14
  LoaderNlsData = 21,            // ordinal: 0x15
  LoaderSpecialMemory = 22,      // ordinal: 0x16
  LoaderBBTMemory = 23,          // ordinal: 0x17
  LoaderReserve = 24,            // ordinal: 0x18
  LoaderXIPRom = 25,             // ordinal: 0x19
  LoaderHALCachedMemory = 26,    // ordinal: 0x1a
  LoaderLargePageFiller = 27,    // ordinal: 0x1b
  LoaderMaximum = 28,            // ordinal: 0x1c
} _TYPE_OF_MEMORY;

typedef enum _KINTERRUPT_POLARITY {
  InterruptPolarityUnknown = 0, // ordinal: 0x0
  InterruptActiveHigh = 1,      // ordinal: 0x1
  InterruptActiveLow = 2,       // ordinal: 0x2
} _KINTERRUPT_POLARITY;

typedef enum _KINTERRUPT_MODE {
  LevelSensitive = 0, // ordinal: 0x0
  Latched = 1,        // ordinal: 0x1
} _KINTERRUPT_MODE;

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

typedef enum _ETW_BUFFER_STATE {
  EtwBufferStateFree = 0,           // ordinal: 0x0
  EtwBufferStateGeneralLogging = 1, // ordinal: 0x1
  EtwBufferStateCSwitch = 2,        // ordinal: 0x2
  EtwBufferStateFlush = 3,          // ordinal: 0x3
  EtwBufferStateMaximum = 4,        // ordinal: 0x4
} _ETW_BUFFER_STATE;

typedef enum _ETW_RT_EVENT_LOSS {
  EtwRtEventNoLoss = 0,  // ordinal: 0x0
  EtwRtEventLost = 1,    // ordinal: 0x1
  EtwRtBufferLost = 2,   // ordinal: 0x2
  EtwRtBackupLost = 3,   // ordinal: 0x3
  EtwRtEventLossMax = 4, // ordinal: 0x4
} _ETW_RT_EVENT_LOSS;

typedef enum _ARBITER_REQUEST_SOURCE {
  ArbiterRequestUndefined = -1,     // ordinal: 0x0
  ArbiterRequestLegacyReported = 0, // ordinal: 0x1
  ArbiterRequestHalReported = 1,    // ordinal: 0x2
  ArbiterRequestLegacyAssigned = 2, // ordinal: 0x3
  ArbiterRequestPnpDetected = 3,    // ordinal: 0x4
  ArbiterRequestPnpEnumerated = 4,  // ordinal: 0x5
} _ARBITER_REQUEST_SOURCE;

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

typedef enum _EXCEPTION_DISPOSITION {
  ExceptionContinueExecution = 0, // ordinal: 0x0
  ExceptionContinueSearch = 1,    // ordinal: 0x1
  ExceptionNestedException = 2,   // ordinal: 0x2
  ExceptionCollidedUnwind = 3,    // ordinal: 0x3
} _EXCEPTION_DISPOSITION;

typedef enum _RTL_GENERIC_COMPARE_RESULTS {
  GenericLessThan = 0,    // ordinal: 0x0
  GenericGreaterThan = 1, // ordinal: 0x1
  GenericEqual = 2,       // ordinal: 0x2
} _RTL_GENERIC_COMPARE_RESULTS;

typedef enum __anon_923 {
  KTMOH_CommitTransaction_Result = 1,   // ordinal: 0x0
  KTMOH_RollbackTransaction_Result = 2, // ordinal: 0x1
} __anon_923;

typedef enum KTM_STATE {
  KKtmUninitialized = 0,  // ordinal: 0x0
  KKtmInitialized = 1,    // ordinal: 0x1
  KKtmRecovering = 2,     // ordinal: 0x2
  KKtmOnline = 3,         // ordinal: 0x3
  KKtmRecoveryFailed = 4, // ordinal: 0x4
  KKtmOffline = 5,        // ordinal: 0x5
} KTM_STATE;

typedef enum _KTRANSACTION_OUTCOME {
  KTxOutcomeUninitialized = 0, // ordinal: 0x0
  KTxOutcomeUndetermined = 1,  // ordinal: 0x1
  KTxOutcomeCommitted = 2,     // ordinal: 0x2
  KTxOutcomeAborted = 3,       // ordinal: 0x3
  KTxOutcomeUnavailable = 4,   // ordinal: 0x4
} _KTRANSACTION_OUTCOME;

typedef enum _KTRANSACTION_STATE {
  KTransactionUninitialized = 0, // ordinal: 0x0
  KTransactionActive = 1,        // ordinal: 0x1
  KTransactionPreparing = 2,     // ordinal: 0x2
  KTransactionPrepared = 3,      // ordinal: 0x3
  KTransactionInDoubt = 4,       // ordinal: 0x4
  KTransactionCommitted = 5,     // ordinal: 0x5
  KTransactionAborted = 6,       // ordinal: 0x6
  KTransactionDelegated = 7,     // ordinal: 0x7
  KTransactionPrePreparing = 8,  // ordinal: 0x8
  KTransactionForgotten = 9,     // ordinal: 0x9
  KTransactionRecovering = 10,   // ordinal: 0xa
  KTransactionSavepointing = 11, // ordinal: 0xb
  KTransactionPrePrepared = 12,  // ordinal: 0xc
} _KTRANSACTION_STATE;

typedef enum _KRESOURCEMANAGER_STATE {
  KResourceManagerUninitialized = 0, // ordinal: 0x0
  KResourceManagerOffline = 1,       // ordinal: 0x1
  KResourceManagerOnline = 2,        // ordinal: 0x2
} _KRESOURCEMANAGER_STATE;

typedef enum HSTORAGE_TYPE {
  Stable = 0,         // ordinal: 0x0
  Volatile = 1,       // ordinal: 0x1
  InvalidStorage = 2, // ordinal: 0x2
} HSTORAGE_TYPE;

typedef enum UoWActionType {
  UoWAddThisKey = 0,            // ordinal: 0x0
  UoWAddChildKey = 1,           // ordinal: 0x1
  UoWDeleteThisKey = 2,         // ordinal: 0x2
  UoWDeleteChildKey = 3,        // ordinal: 0x3
  UoWSetValueNew = 4,           // ordinal: 0x4
  UoWSetValueExisting = 5,      // ordinal: 0x5
  UoWDeleteValue = 6,           // ordinal: 0x6
  UoWSetKeyUserFlags = 7,       // ordinal: 0x7
  UoWSetLastWriteTime = 8,      // ordinal: 0x8
  UoWSetSecurityDescriptor = 9, // ordinal: 0x9
  UoWRenameSubKey = 10,         // ordinal: 0xa
  UoWRenameOldSubKey = 11,      // ordinal: 0xb
  UoWRenameNewSubKey = 12,      // ordinal: 0xc
  UoWIsolation = 13,            // ordinal: 0xd
  UoWInvalid = 14,              // ordinal: 0xe
} UoWActionType;

typedef enum _KENLISTMENT_STATE {
  KEnlistmentUninitialized = 0,           // ordinal: 0x0
  KEnlistmentActive = 256,                // ordinal: 0x1
  KEnlistmentPreparing = 257,             // ordinal: 0x2
  KEnlistmentPrepared = 258,              // ordinal: 0x3
  KEnlistmentInDoubt = 259,               // ordinal: 0x4
  KEnlistmentCommitted = 260,             // ordinal: 0x5
  KEnlistmentCommittedNotify = 261,       // ordinal: 0x6
  KEnlistmentCommitRequested = 262,       // ordinal: 0x7
  KEnlistmentAborted = 263,               // ordinal: 0x8
  KEnlistmentDelegated = 264,             // ordinal: 0x9
  KEnlistmentDelegatedDisconnected = 265, // ordinal: 0xa
  KEnlistmentPrePreparing = 266,          // ordinal: 0xb
  KEnlistmentForgotten = 267,             // ordinal: 0xc
  KEnlistmentRecovering = 268,            // ordinal: 0xd
  KEnlistmentSavepointing = 269,          // ordinal: 0xe
  KEnlistmentAborting = 270,              // ordinal: 0xf
  KEnlistmentReadOnly = 271,              // ordinal: 0x10
  KEnlistmentOutcomeUnavailable = 272,    // ordinal: 0x11
  KEnlistmentOffline = 273,               // ordinal: 0x12
  KEnlistmentPrePrepared = 274,           // ordinal: 0x13
  KEnlistmentInitialized = 275,           // ordinal: 0x14
} _KENLISTMENT_STATE;

typedef enum _CONFIGURATION_TYPE {
  ArcSystem = 0,                // ordinal: 0x0
  CentralProcessor = 1,         // ordinal: 0x1
  FloatingPointProcessor = 2,   // ordinal: 0x2
  PrimaryIcache = 3,            // ordinal: 0x3
  PrimaryDcache = 4,            // ordinal: 0x4
  SecondaryIcache = 5,          // ordinal: 0x5
  SecondaryDcache = 6,          // ordinal: 0x6
  SecondaryCache = 7,           // ordinal: 0x7
  EisaAdapter = 8,              // ordinal: 0x8
  TcAdapter = 9,                // ordinal: 0x9
  ScsiAdapter = 10,             // ordinal: 0xa
  DtiAdapter = 11,              // ordinal: 0xb
  MultiFunctionAdapter = 12,    // ordinal: 0xc
  DiskController = 13,          // ordinal: 0xd
  TapeController = 14,          // ordinal: 0xe
  CdromController = 15,         // ordinal: 0xf
  WormController = 16,          // ordinal: 0x10
  SerialController = 17,        // ordinal: 0x11
  NetworkController = 18,       // ordinal: 0x12
  DisplayController = 19,       // ordinal: 0x13
  ParallelController = 20,      // ordinal: 0x14
  PointerController = 21,       // ordinal: 0x15
  KeyboardController = 22,      // ordinal: 0x16
  AudioController = 23,         // ordinal: 0x17
  OtherController = 24,         // ordinal: 0x18
  DiskPeripheral = 25,          // ordinal: 0x19
  FloppyDiskPeripheral = 26,    // ordinal: 0x1a
  TapePeripheral = 27,          // ordinal: 0x1b
  ModemPeripheral = 28,         // ordinal: 0x1c
  MonitorPeripheral = 29,       // ordinal: 0x1d
  PrinterPeripheral = 30,       // ordinal: 0x1e
  PointerPeripheral = 31,       // ordinal: 0x1f
  KeyboardPeripheral = 32,      // ordinal: 0x20
  TerminalPeripheral = 33,      // ordinal: 0x21
  OtherPeripheral = 34,         // ordinal: 0x22
  LinePeripheral = 35,          // ordinal: 0x23
  NetworkPeripheral = 36,       // ordinal: 0x24
  SystemMemory = 37,            // ordinal: 0x25
  DockingInformation = 38,      // ordinal: 0x26
  RealModeIrqRoutingTable = 39, // ordinal: 0x27
  RealModePCIEnumeration = 40,  // ordinal: 0x28
  MaximumType = 41,             // ordinal: 0x29
} _CONFIGURATION_TYPE;

typedef enum _CONFIGURATION_CLASS {
  SystemClass = 0,     // ordinal: 0x0
  ProcessorClass = 1,  // ordinal: 0x1
  CacheClass = 2,      // ordinal: 0x2
  AdapterClass = 3,    // ordinal: 0x3
  ControllerClass = 4, // ordinal: 0x4
  PeripheralClass = 5, // ordinal: 0x5
  MemoryClass = 6,     // ordinal: 0x6
  MaximumClass = 7,    // ordinal: 0x7
} _CONFIGURATION_CLASS;

typedef enum _WHEA_ERROR_STATUS_FORMAT {
  WheaErrorStatusFormatIPFSalRecord = 0, // ordinal: 0x0
  WheaErrorStatusFormatIA32MCA = 1,      // ordinal: 0x1
  WheaErrorStatusFormatEM64TMCA = 2,     // ordinal: 0x2
  WheaErrorStatusFormatAMD64MCA = 3,     // ordinal: 0x3
  WheaErrorStatusFormatPCIExpress = 4,   // ordinal: 0x4
  WheaErrorStatusFormatNMIPort = 5,      // ordinal: 0x5
  WheaErrorStatusFormatOther = 6,        // ordinal: 0x6
  WheaErrorStatusFormatMax = 7,          // ordinal: 0x7
} _WHEA_ERROR_STATUS_FORMAT;

typedef enum _WHEA_ERROR_SOURCE_TYPE {
  WheaErrSrcTypeMCE = 0,   // ordinal: 0x0
  WheaErrSrcTypeCMC = 1,   // ordinal: 0x1
  WheaErrSrcTypeCPE = 2,   // ordinal: 0x2
  WheaErrSrcTypeNMI = 3,   // ordinal: 0x3
  WheaErrSrcTypePCIe = 4,  // ordinal: 0x4
  WheaErrSrcTypeOther = 5, // ordinal: 0x5
  WheaErrSrcTypeMax = 6,   // ordinal: 0x6
} _WHEA_ERROR_SOURCE_TYPE;

typedef enum _WHEA_ERROR_TYPE {
  WheaErrTypeProcessor = 0,  // ordinal: 0x0
  WheaErrTypeMemory = 1,     // ordinal: 0x1
  WheaErrTypePCIExpress = 2, // ordinal: 0x2
  WheaErrTypeNMI = 3,        // ordinal: 0x3
  WheaErrTypePCIXBus = 4,    // ordinal: 0x4
  WheaErrTypePCIXDevice = 5, // ordinal: 0x5
} _WHEA_ERROR_TYPE;

typedef enum PCI_EXPRESS_DEVICE_TYPE {
  PciExpressEndpoint = 0,                      // ordinal: 0x0
  PciExpressLegacyEndpoint = 1,                // ordinal: 0x1
  PciExpressRootPort = 4,                      // ordinal: 0x2
  PciExpressUpstreamSwitchPort = 5,            // ordinal: 0x3
  PciExpressDownstreamSwitchPort = 6,          // ordinal: 0x4
  PciExpressToPciXBridge = 7,                  // ordinal: 0x5
  PciXToExpressBridge = 8,                     // ordinal: 0x6
  PciExpressRootComplexIntegratedEndpoint = 9, // ordinal: 0x7
  PciExpressRootComplexEventCollector = 10,    // ordinal: 0x8
} PCI_EXPRESS_DEVICE_TYPE;

typedef enum _WHEA_ERROR_SEVERITY {
  WheaErrSevRecoverable = 0, // ordinal: 0x0
  WheaErrSevFatal = 1,       // ordinal: 0x1
  WheaErrSevCorrected = 2,   // ordinal: 0x2
  WheaErrSevNone = 3,        // ordinal: 0x3
} _WHEA_ERROR_SEVERITY;

typedef enum _MM_PAGE_ACCESS_TYPE {
  MmPteAccessType = 0,         // ordinal: 0x0
  MmCcReadAheadType = 1,       // ordinal: 0x1
  MmPfnRepurposeType = 2,      // ordinal: 0x2
  MmMaximumPageAccessType = 3, // ordinal: 0x3
} _MM_PAGE_ACCESS_TYPE;

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

typedef enum _IO_PRIORITY_HINT {
  IoPriorityVeryLow = 0,  // ordinal: 0x0
  IoPriorityLow = 1,      // ordinal: 0x1
  IoPriorityNormal = 2,   // ordinal: 0x2
  IoPriorityHigh = 3,     // ordinal: 0x3
  IoPriorityCritical = 4, // ordinal: 0x4
  MaxIoPriorityTypes = 5, // ordinal: 0x5
} _IO_PRIORITY_HINT;

typedef enum _IRQ_PRIORITY {
  IrqPriorityUndefined = 0, // ordinal: 0x0
  IrqPriorityLow = 1,       // ordinal: 0x1
  IrqPriorityNormal = 2,    // ordinal: 0x2
  IrqPriorityHigh = 3,      // ordinal: 0x3
} _IRQ_PRIORITY;

typedef enum _IRQ_DEVICE_POLICY {
  IrqPolicyMachineDefault = 0,                    // ordinal: 0x0
  IrqPolicyAllCloseProcessors = 1,                // ordinal: 0x1
  IrqPolicyOneCloseProcessor = 2,                 // ordinal: 0x2
  IrqPolicyAllProcessorsInMachine = 3,            // ordinal: 0x3
  IrqPolicySpecifiedProcessors = 4,               // ordinal: 0x4
  IrqPolicySpreadMessagesAcrossAllProcessors = 5, // ordinal: 0x5
} _IRQ_DEVICE_POLICY;

typedef enum _SECURITY_IMPERSONATION_LEVEL {
  SecurityAnonymous = 0,      // ordinal: 0x0
  SecurityIdentification = 1, // ordinal: 0x1
  SecurityImpersonation = 2,  // ordinal: 0x2
  SecurityDelegation = 3,     // ordinal: 0x3
} _SECURITY_IMPERSONATION_LEVEL;

typedef enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE {
  NotifyTypeCreate = 0,  // ordinal: 0x0
  NotifyTypeRetired = 1, // ordinal: 0x1
} _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE;

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
typedef struct __anon_429 {
  enum _SYSTEM_POWER_STATE PowerState; // offset: 0x0 ordinal: 0x0
} __anon_429;

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
typedef struct __anon_426 {
  enum BUS_QUERY_ID_TYPE IdType; // offset: 0x0 ordinal: 0x0
} __anon_426;

typedef enum _DEVICE_RELATION_TYPE {
  BusRelations = 0,         // ordinal: 0x0
  EjectionRelations = 1,    // ordinal: 0x1
  PowerRelations = 2,       // ordinal: 0x2
  RemovalRelations = 3,     // ordinal: 0x3
  TargetDeviceRelation = 4, // ordinal: 0x4
  SingleBusRelations = 5,   // ordinal: 0x5
} _DEVICE_RELATION_TYPE;

// 0x4 bytes (sizeof)
typedef struct __anon_420 {
  enum _DEVICE_RELATION_TYPE Type; // offset: 0x0 ordinal: 0x0
} __anon_420;

typedef enum _FSINFOCLASS {
  FileFsVolumeInformation = 1,       // ordinal: 0x0
  FileFsLabelInformation = 2,        // ordinal: 0x1
  FileFsSizeInformation = 3,         // ordinal: 0x2
  FileFsDeviceInformation = 4,       // ordinal: 0x3
  FileFsAttributeInformation = 5,    // ordinal: 0x4
  FileFsControlInformation = 6,      // ordinal: 0x5
  FileFsFullSizeInformation = 7,     // ordinal: 0x6
  FileFsObjectIdInformation = 8,     // ordinal: 0x7
  FileFsDriverPathInformation = 9,   // ordinal: 0x8
  FileFsVolumeFlagsInformation = 10, // ordinal: 0x9
  FileFsMaximumInformation = 11,     // ordinal: 0xa
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
  FileIoStatusBlockRangeInformation = 42,       // ordinal: 0x29
  FileIoPriorityHintInformation = 43,           // ordinal: 0x2a
  FileSfioReserveInformation = 44,              // ordinal: 0x2b
  FileSfioVolumeInformation = 45,               // ordinal: 0x2c
  FileHardLinkInformation = 46,                 // ordinal: 0x2d
  FileProcessIdsUsingFileInformation = 47,      // ordinal: 0x2e
  FileNormalizedNameInformation = 48,           // ordinal: 0x2f
  FileNetworkPhysicalNameInformation = 49,      // ordinal: 0x30
  FileMaximumInformation = 50,                  // ordinal: 0x31
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

typedef enum _PROCESSOR_CACHE_TYPE {
  CacheUnified = 0,     // ordinal: 0x0
  CacheInstruction = 1, // ordinal: 0x1
  CacheData = 2,        // ordinal: 0x2
  CacheTrace = 3,       // ordinal: 0x3
} _PROCESSOR_CACHE_TYPE;

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

// 0x4 bytes (sizeof)
typedef struct __anon_1153 {
  SHORT Type;           // offset: 0x0 ordinal: 0x0
  SHORT DataInfoOffset; // offset: 0x2 ordinal: 0x1
} __anon_1153;

// 0x4 bytes (sizeof)
typedef struct __anon_1152 {
  SHORT DataLength;  // offset: 0x0 ordinal: 0x0
  SHORT TotalLength; // offset: 0x2 ordinal: 0x1
} __anon_1152;

// 0x10 bytes (sizeof)
typedef struct _TIME_FIELDS {
  SHORT Year;         // offset: 0x0 ordinal: 0x0
  SHORT Month;        // offset: 0x2 ordinal: 0x1
  SHORT Day;          // offset: 0x4 ordinal: 0x2
  SHORT Hour;         // offset: 0x6 ordinal: 0x3
  SHORT Minute;       // offset: 0x8 ordinal: 0x4
  SHORT Second;       // offset: 0xa ordinal: 0x5
  SHORT Milliseconds; // offset: 0xc ordinal: 0x6
  SHORT Weekday;      // offset: 0xe ordinal: 0x7
} _TIME_FIELDS;

typedef unsigned short USHORT;

typedef unsigned char UCHAR;

typedef unsigned long long ULONGLONG;

// 0x4 bytes (sizeof)
typedef struct __anon_1474 {
  UCHAR BaseMiddle; // offset: 0x0 ordinal: 0x0
  UCHAR Flags1;     // offset: 0x1 ordinal: 0x1
  UCHAR Flags2;     // offset: 0x2 ordinal: 0x2
  UCHAR BaseHigh;   // offset: 0x3 ordinal: 0x3
} __anon_1474;

// 0x1 bytes (sizeof)
typedef union __anon_1309 {
  UCHAR AsUCHAR;                // offset: 0x0 ordinal: 0x0
  UCHAR NoDomainAccounting : 1; // offset: 0x0 ordinal: 0x1
  UCHAR IncreasePolicy : 2;     // offset: 0x0 ordinal: 0x2
  UCHAR DecreasePolicy : 2;     // offset: 0x0 ordinal: 0x3
  UCHAR Reserved : 3;           // offset: 0x0 ordinal: 0x4
} __anon_1309;

// 0x1a bytes (sizeof)
typedef struct _TOKEN_AUDIT_POLICY {
  UCHAR PerUserPolicy[26]; // offset: 0x0 ordinal: 0x0
} _TOKEN_AUDIT_POLICY;

// 0x1b bytes (sizeof)
typedef struct _SEP_AUDIT_POLICY {
  struct _TOKEN_AUDIT_POLICY AdtTokenPolicy; // offset: 0x0 ordinal: 0x0
  UCHAR PolicySetStatus;                     // offset: 0x1a ordinal: 0x1
} _SEP_AUDIT_POLICY;

// 0x2 bytes (sizeof)
typedef struct _MMPFNENTRY {
  UCHAR PageLocation : 3;     // offset: 0x0 ordinal: 0x0
  UCHAR WriteInProgress : 1;  // offset: 0x0 ordinal: 0x1
  UCHAR Modified : 1;         // offset: 0x0 ordinal: 0x2
  UCHAR ReadInProgress : 1;   // offset: 0x0 ordinal: 0x3
  UCHAR CacheAttribute : 2;   // offset: 0x0 ordinal: 0x4
  UCHAR Priority : 3;         // offset: 0x1 ordinal: 0x5
  UCHAR Rom : 1;              // offset: 0x1 ordinal: 0x6
  UCHAR InPageError : 1;      // offset: 0x1 ordinal: 0x7
  UCHAR KernelStack : 1;      // offset: 0x1 ordinal: 0x8
  UCHAR RemovalRequested : 1; // offset: 0x1 ordinal: 0x9
  UCHAR ParityError : 1;      // offset: 0x1 ordinal: 0xa
} _MMPFNENTRY;

// 0x10 bytes (sizeof)
typedef struct _VI_DEADLOCK_ADDRESS_RANGE {
  UCHAR *Start; // offset: 0x0 ordinal: 0x0
  UCHAR *End;   // offset: 0x8 ordinal: 0x1
} _VI_DEADLOCK_ADDRESS_RANGE;

// 0x10 bytes (sizeof)
typedef struct __anon_529 {
  enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE
      NotificationType; // offset: 0x0 ordinal: 0x0
  UCHAR SafeToRecurse;  // offset: 0x8 ordinal: 0x1
} __anon_529;

// 0x8 bytes (sizeof)
typedef struct _WHEA_NMI_ERROR {
  UCHAR Data[8]; // offset: 0x0 ordinal: 0x0
} _WHEA_NMI_ERROR;

// 0x1 bytes (sizeof)
typedef struct __anon_425 {
  UCHAR Lock; // offset: 0x0 ordinal: 0x0
} __anon_425;

// 0x4 bytes (sizeof)
typedef struct _MMSUPPORT_FLAGS {
  UCHAR SessionSpace : 1;          // offset: 0x0 ordinal: 0x0
  UCHAR ModwriterAttached : 1;     // offset: 0x0 ordinal: 0x1
  UCHAR TrimHard : 1;              // offset: 0x0 ordinal: 0x2
  UCHAR MaximumWorkingSetHard : 1; // offset: 0x0 ordinal: 0x3
  UCHAR ForceTrim : 1;             // offset: 0x0 ordinal: 0x4
  UCHAR MinimumWorkingSetHard : 1; // offset: 0x0 ordinal: 0x5
  UCHAR SessionMaster : 1;         // offset: 0x0 ordinal: 0x6
  UCHAR TrimmerAttached : 1;       // offset: 0x0 ordinal: 0x7
  UCHAR TrimmerDetaching : 1;      // offset: 0x1 ordinal: 0x8
  UCHAR Reserved : 7;              // offset: 0x1 ordinal: 0x9
  UCHAR MemoryPriority : 8;        // offset: 0x2 ordinal: 0xa
  UCHAR WsleDeleted : 1;           // offset: 0x3 ordinal: 0xb
  UCHAR VmExiting : 1;             // offset: 0x3 ordinal: 0xc
  UCHAR Available : 6;             // offset: 0x3 ordinal: 0xd
} _MMSUPPORT_FLAGS;

typedef UCHAR (*__anon_346)(struct _FILE_OBJECT *, struct _MDL *,
                            struct _DEVICE_OBJECT *);

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

// 0x1 bytes (sizeof)
typedef struct _flags {
  UCHAR Removable : 1; // offset: 0x0 ordinal: 0x0
  UCHAR Fill : 7;      // offset: 0x0 ordinal: 0x1
} _flags;

// 0x10 bytes (sizeof)
typedef struct __anon_428 {
  UCHAR InPath;                              // offset: 0x0 ordinal: 0x0
  UCHAR Reserved[3];                         // offset: 0x1 ordinal: 0x1
  enum _DEVICE_USAGE_NOTIFICATION_TYPE Type; // offset: 0x8 ordinal: 0x2
} __anon_428;

// 0x6 bytes (sizeof)
typedef struct _SID_IDENTIFIER_AUTHORITY {
  UCHAR Value[6]; // offset: 0x0 ordinal: 0x0
} _SID_IDENTIFIER_AUTHORITY;

// 0x20 bytes (sizeof)
typedef struct _RTL_BALANCED_LINKS {
  struct _RTL_BALANCED_LINKS *Parent;     // offset: 0x0 ordinal: 0x0
  struct _RTL_BALANCED_LINKS *LeftChild;  // offset: 0x8 ordinal: 0x1
  struct _RTL_BALANCED_LINKS *RightChild; // offset: 0x10 ordinal: 0x2
  CHAR Balance;                           // offset: 0x18 ordinal: 0x3
  UCHAR Reserved[3];                      // offset: 0x19 ordinal: 0x4
} _RTL_BALANCED_LINKS;

// 0x28 bytes (sizeof)
typedef struct _KTMOBJECT_NAMESPACE_LINK {
  struct _RTL_BALANCED_LINKS Links; // offset: 0x0 ordinal: 0x0
  UCHAR Expired;                    // offset: 0x20 ordinal: 0x1
} _KTMOBJECT_NAMESPACE_LINK;

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

// 0x4 bytes (sizeof)
typedef struct _HEAP_FREE_ENTRY_EXTRA {
  USHORT TagIndex;           // offset: 0x0 ordinal: 0x0
  USHORT FreeBackTraceIndex; // offset: 0x2 ordinal: 0x1
} _HEAP_FREE_ENTRY_EXTRA;

// 0x2 bytes (sizeof)
typedef union __anon_1432 {
  USHORT AsUSHORT;         // offset: 0x0 ordinal: 0x0
  USHORT AllowScaling : 1; // offset: 0x0 ordinal: 0x1
  USHORT Disabled : 1;     // offset: 0x0 ordinal: 0x2
  USHORT Reserved : 14;    // offset: 0x0 ordinal: 0x3
} __anon_1432;

// 0x18 bytes (sizeof)
typedef struct _RTL_ATOM_TABLE_ENTRY {
  struct _RTL_ATOM_TABLE_ENTRY *HashLink; // offset: 0x0 ordinal: 0x0
  USHORT HandleIndex;                     // offset: 0x8 ordinal: 0x1
  USHORT Atom;                            // offset: 0xa ordinal: 0x2
  USHORT ReferenceCount;                  // offset: 0xc ordinal: 0x3
  UCHAR Flags;                            // offset: 0xe ordinal: 0x4
  UCHAR NameLength;                       // offset: 0xf ordinal: 0x5
  WCHAR Name[1];                          // offset: 0x10 ordinal: 0x6
} _RTL_ATOM_TABLE_ENTRY;

// 0x8 bytes (sizeof)
typedef struct _ACL {
  UCHAR AclRevision; // offset: 0x0 ordinal: 0x0
  UCHAR Sbz1;        // offset: 0x1 ordinal: 0x1
  USHORT AclSize;    // offset: 0x2 ordinal: 0x2
  USHORT AceCount;   // offset: 0x4 ordinal: 0x3
  USHORT Sbz2;       // offset: 0x6 ordinal: 0x4
} _ACL;

// 0x4 bytes (sizeof)
typedef struct _WMI_TRACE_PACKET {
  USHORT Size; // offset: 0x0 ordinal: 0x0
  union {
    USHORT HookId; // offset: 0x2 ordinal: 0x1
    UCHAR Type;    // offset: 0x2 ordinal: 0x2
  };
  UCHAR Group; // offset: 0x3 ordinal: 0x3
} _WMI_TRACE_PACKET;

// 0x4 bytes (sizeof)
typedef struct _ETW_BUFFER_CONTEXT {
  UCHAR ProcessorNumber; // offset: 0x0 ordinal: 0x0
  UCHAR Alignment;       // offset: 0x1 ordinal: 0x1
  USHORT LoggerId;       // offset: 0x2 ordinal: 0x2
} _ETW_BUFFER_CONTEXT;

// 0x10 bytes (sizeof)
typedef struct _ETW_SYSTEMTIME {
  USHORT Year;         // offset: 0x0 ordinal: 0x0
  USHORT Month;        // offset: 0x2 ordinal: 0x1
  USHORT DayOfWeek;    // offset: 0x4 ordinal: 0x2
  USHORT Day;          // offset: 0x6 ordinal: 0x3
  USHORT Hour;         // offset: 0x8 ordinal: 0x4
  USHORT Minute;       // offset: 0xa ordinal: 0x5
  USHORT Second;       // offset: 0xc ordinal: 0x6
  USHORT Milliseconds; // offset: 0xe ordinal: 0x7
} _ETW_SYSTEMTIME;

// 0x8 bytes (sizeof)
typedef struct _INTERLOCK_SEQ {
  USHORT Depth;           // offset: 0x0 ordinal: 0x0
  USHORT FreeEntryOffset; // offset: 0x2 ordinal: 0x1
  ULONG OffsetAndDepth;   // offset: 0x0 ordinal: 0x2
  ULONG Sequence;         // offset: 0x4 ordinal: 0x3
  LONGLONG Exchg;         // offset: 0x0 ordinal: 0x4
} _INTERLOCK_SEQ;

// 0x4 bytes (sizeof)
typedef struct _MMSUBSECTION_FLAGS {
  USHORT SubsectionAccessed : 1;  // offset: 0x0 ordinal: 0x0
  USHORT Protection : 5;          // offset: 0x0 ordinal: 0x1
  USHORT StartingSector4132 : 10; // offset: 0x0 ordinal: 0x2
  USHORT SubsectionStatic : 1;    // offset: 0x2 ordinal: 0x3
  USHORT GlobalMemory : 1;        // offset: 0x2 ordinal: 0x4
  USHORT DirtyPages : 1;          // offset: 0x2 ordinal: 0x5
  USHORT Spare : 1;               // offset: 0x2 ordinal: 0x6
  USHORT SectorEndOffset : 12;    // offset: 0x2 ordinal: 0x7
} _MMSUBSECTION_FLAGS;

// 0x4 bytes (sizeof)
typedef struct __anon_736 {
  USHORT ModifiedWriteCount;   // offset: 0x0 ordinal: 0x0
  USHORT FlushInProgressCount; // offset: 0x2 ordinal: 0x1
} __anon_736;

// 0x4 bytes (sizeof)
typedef union __anon_737 {
  struct __anon_736 e2; // offset: 0x0 ordinal: 0x0
} __anon_737;

// 0x4 bytes (sizeof)
typedef struct __anon_728 {
  USHORT ReferenceCount;      // offset: 0x0 ordinal: 0x0
  UCHAR ByteFlags;            // offset: 0x2 ordinal: 0x1
  UCHAR InterlockedByteFlags; // offset: 0x3 ordinal: 0x2
} __anon_728;

// 0x4 bytes (sizeof)
typedef struct __anon_726 {
  union {
    USHORT ReferenceCount;        // offset: 0x0 ordinal: 0x0
    SHORT VolatileReferenceCount; // offset: 0x0 ordinal: 0x1
  };
  USHORT ShortFlags; // offset: 0x2 ordinal: 0x2
} __anon_726;

// 0x4 bytes (sizeof)
typedef union __anon_729 {
  USHORT ReferenceCount; // offset: 0x0 ordinal: 0x0
  struct _MMPFNENTRY e1; // offset: 0x2 ordinal: 0x1
  struct __anon_726 e2;  // offset: 0x0 ordinal: 0x2
  struct __anon_728 e3;  // offset: 0x0 ordinal: 0x3
} __anon_729;

// 0x2 bytes (sizeof)
typedef union __anon_113 {
  USHORT AsUSHORT;                       // offset: 0x0 ordinal: 0x0
  USHORT PStateDomain : 1;               // offset: 0x0 ordinal: 0x1
  USHORT PStateDomainIdleAccounting : 1; // offset: 0x0 ordinal: 0x2
  USHORT Reserved : 14;                  // offset: 0x0 ordinal: 0x3
} __anon_113;

// 0x10 bytes (sizeof)
typedef struct _STRING {
  USHORT Length;        // offset: 0x0 ordinal: 0x0
  USHORT MaximumLength; // offset: 0x2 ordinal: 0x1
  CHAR *Buffer;         // offset: 0x8 ordinal: 0x2
} _STRING;

// 0x10 bytes (sizeof)
typedef struct _MI_COLOR_BASE {
  USHORT *ColorPointer; // offset: 0x0 ordinal: 0x0
  USHORT ColorMask;     // offset: 0x8 ordinal: 0x1
  USHORT ColorNode;     // offset: 0xa ordinal: 0x2
} _MI_COLOR_BASE;

// 0x10 bytes (sizeof)
typedef struct _UNICODE_STRING {
  USHORT Length;        // offset: 0x0 ordinal: 0x0
  USHORT MaximumLength; // offset: 0x2 ordinal: 0x1
  USHORT *Buffer;       // offset: 0x8 ordinal: 0x2
} _UNICODE_STRING;

// 0x10 bytes (sizeof)
typedef struct _OBJECT_NAME_INFORMATION {
  struct _UNICODE_STRING Name; // offset: 0x0 ordinal: 0x0
} _OBJECT_NAME_INFORMATION;

// 0x8 bytes (sizeof)
typedef struct _SE_AUDIT_PROCESS_CREATION_INFO {
  struct _OBJECT_NAME_INFORMATION *ImageFileName; // offset: 0x0 ordinal: 0x0
} _SE_AUDIT_PROCESS_CREATION_INFO;

// 0x8 bytes (sizeof)
typedef struct _SINGLE_LIST_ENTRY {
  struct _SINGLE_LIST_ENTRY *Next; // offset: 0x0 ordinal: 0x0
} _SINGLE_LIST_ENTRY;

// 0x8 bytes (sizeof)
typedef struct _ARBITER_QUERY_ARBITRATE_PARAMETERS {
  struct _LIST_ENTRY *ArbitrationList; // offset: 0x0 ordinal: 0x0
} _ARBITER_QUERY_ARBITRATE_PARAMETERS;

// 0x8 bytes (sizeof)
typedef struct _ARBITER_BOOT_ALLOCATION_PARAMETERS {
  struct _LIST_ENTRY *ArbitrationList; // offset: 0x0 ordinal: 0x0
} _ARBITER_BOOT_ALLOCATION_PARAMETERS;

// 0x10 bytes (sizeof)
typedef struct _LIST_ENTRY {
  struct _LIST_ENTRY *Flink; // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY *Blink; // offset: 0x8 ordinal: 0x1
} _LIST_ENTRY;

// 0x10 bytes (sizeof)
typedef struct __anon_1430 {
  struct _LIST_ENTRY ListHead; // offset: 0x0 ordinal: 0x0
} __anon_1430;

// 0x20 bytes (sizeof)
typedef struct __anon_981 {
  enum PROFILE_STATUS DockStatus; // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY ListEntry;   // offset: 0x8 ordinal: 0x1
  USHORT *SerialNumber;           // offset: 0x18 ordinal: 0x2
} __anon_981;

// 0x10 bytes (sizeof)
typedef struct _ARC_DISK_INFORMATION {
  struct _LIST_ENTRY DiskSignatures; // offset: 0x0 ordinal: 0x0
} _ARC_DISK_INFORMATION;

typedef void VOID;

typedef VOID (*__anon_489)();

typedef VOID (*__anon_342)(struct _DEVICE_OBJECT *, struct _DEVICE_OBJECT *);

typedef VOID (*__anon_341)(struct _FILE_OBJECT *);

// 0x8 bytes (sizeof)
typedef struct __anon_1486 {
  VOID *Notification; // offset: 0x0 ordinal: 0x0
} __anon_1486;

// 0x10 bytes (sizeof)
typedef struct __anon_1485 {
  VOID *NotificationStructure; // offset: 0x0 ordinal: 0x0
  WCHAR DeviceIds[1];          // offset: 0x8 ordinal: 0x1
} __anon_1485;

// 0x10 bytes (sizeof)
typedef struct __anon_1429 {
  VOID *UserData; // offset: 0x0 ordinal: 0x0
  VOID *Owner;    // offset: 0x8 ordinal: 0x1
} __anon_1429;

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

// 0x10 bytes (sizeof)
typedef struct _VF_TRACKER_STAMP {
  VOID *Thread;        // offset: 0x0 ordinal: 0x0
  UCHAR Flags : 8;     // offset: 0x8 ordinal: 0x1
  UCHAR OldIrql : 8;   // offset: 0x9 ordinal: 0x2
  UCHAR NewIrql : 8;   // offset: 0xa ordinal: 0x3
  UCHAR Processor : 8; // offset: 0xb ordinal: 0x4
} _VF_TRACKER_STAMP;

typedef VOID (*__anon_1109)(struct _WMI_BUFFER_HEADER *, VOID *);

typedef UCHAR (*__anon_1059)(VOID *, UCHAR);

// 0x18 bytes (sizeof)
typedef struct _NLS_DATA_BLOCK {
  VOID *AnsiCodePageData;     // offset: 0x0 ordinal: 0x0
  VOID *OemCodePageData;      // offset: 0x8 ordinal: 0x1
  VOID *UnicodeCaseTableData; // offset: 0x10 ordinal: 0x2
} _NLS_DATA_BLOCK;

// 0x20 bytes (sizeof)
typedef struct _OBJECT_HEADER_CREATOR_INFO {
  struct _LIST_ENTRY TypeList;  // offset: 0x0 ordinal: 0x0
  VOID *CreatorUniqueProcess;   // offset: 0x10 ordinal: 0x1
  USHORT CreatorBackTraceIndex; // offset: 0x18 ordinal: 0x2
  USHORT Reserved;              // offset: 0x1a ordinal: 0x3
} _OBJECT_HEADER_CREATOR_INFO;

// 0x10 bytes (sizeof)
typedef struct _TXN_PARAMETER_BLOCK {
  USHORT Length;           // offset: 0x0 ordinal: 0x0
  USHORT TxFsContext;      // offset: 0x2 ordinal: 0x1
  VOID *TransactionObject; // offset: 0x8 ordinal: 0x2
} _TXN_PARAMETER_BLOCK;

// 0x20 bytes (sizeof)
typedef struct _IO_DRIVER_CREATE_CONTEXT {
  SHORT Size;                                 // offset: 0x0 ordinal: 0x0
  struct _ECP_LIST *ExtraCreateParameter;     // offset: 0x8 ordinal: 0x1
  VOID *DeviceObjectHint;                     // offset: 0x10 ordinal: 0x2
  struct _TXN_PARAMETER_BLOCK *TxnParameters; // offset: 0x18 ordinal: 0x3
} _IO_DRIVER_CREATE_CONTEXT;

// 0x20 bytes (sizeof)
typedef struct _SECURITY_SUBJECT_CONTEXT {
  VOID *ClientToken; // offset: 0x0 ordinal: 0x0
  enum _SECURITY_IMPERSONATION_LEVEL
      ImpersonationLevel; // offset: 0x8 ordinal: 0x1
  VOID *PrimaryToken;     // offset: 0x10 ordinal: 0x2
  VOID *ProcessAuditId;   // offset: 0x18 ordinal: 0x3
} _SECURITY_SUBJECT_CONTEXT;

// 0x28 bytes (sizeof)
typedef struct __anon_530 {
  VOID *Argument1; // offset: 0x0 ordinal: 0x0
  VOID *Argument2; // offset: 0x8 ordinal: 0x1
  VOID *Argument3; // offset: 0x10 ordinal: 0x2
  VOID *Argument4; // offset: 0x18 ordinal: 0x3
  VOID *Argument5; // offset: 0x20 ordinal: 0x4
} __anon_530;

// 0x18 bytes (sizeof)
typedef struct _CURDIR {
  struct _UNICODE_STRING DosPath; // offset: 0x0 ordinal: 0x0
  VOID *Handle;                   // offset: 0x10 ordinal: 0x1
} _CURDIR;

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
typedef struct __anon_434 {
  VOID *Argument1; // offset: 0x0 ordinal: 0x0
  VOID *Argument2; // offset: 0x8 ordinal: 0x1
  VOID *Argument3; // offset: 0x10 ordinal: 0x2
  VOID *Argument4; // offset: 0x18 ordinal: 0x3
} __anon_434;

// 0x8 bytes (sizeof)
typedef struct _WOW64_PROCESS {
  VOID *Wow64; // offset: 0x0 ordinal: 0x0
} _WOW64_PROCESS;

// 0x10 bytes (sizeof)
typedef struct _IO_CLIENT_EXTENSION {
  struct _IO_CLIENT_EXTENSION *NextExtension; // offset: 0x0 ordinal: 0x0
  VOID *ClientIdentificationAddress;          // offset: 0x8 ordinal: 0x1
} _IO_CLIENT_EXTENSION;

typedef VOID (*__anon_293)(struct _DEVICE_OBJECT *, VOID *);

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

typedef VOID (*__anon_210)(VOID *, VOID *, VOID *, VOID *);

typedef VOID (*__anon_208)(VOID *, VOID *, VOID *);

// 0x20 bytes (sizeof)
typedef struct _KREQUEST_PACKET {
  VOID *CurrentPacket[3]; // offset: 0x0 ordinal: 0x0
  VOID(*WorkerRoutine)
  (VOID *, VOID *, VOID *, VOID *); // offset: 0x18 ordinal: 0x1
} _KREQUEST_PACKET;

typedef VOID (*__anon_192)(VOID *);

// 0x20 bytes (sizeof)
typedef struct _CACHE_MANAGER_CALLBACKS {
  UCHAR (*AcquireForLazyWrite)(VOID *, UCHAR); // offset: 0x0 ordinal: 0x0
  VOID (*ReleaseFromLazyWrite)(VOID *);        // offset: 0x8 ordinal: 0x1
  UCHAR (*AcquireForReadAhead)(VOID *, UCHAR); // offset: 0x10 ordinal: 0x2
  VOID (*ReleaseFromReadAhead)(VOID *);        // offset: 0x18 ordinal: 0x3
} _CACHE_MANAGER_CALLBACKS;

// 0x20 bytes (sizeof)
typedef struct _WORK_QUEUE_ITEM {
  struct _LIST_ENTRY List;       // offset: 0x0 ordinal: 0x0
  VOID (*WorkerRoutine)(VOID *); // offset: 0x10 ordinal: 0x1
  VOID *Parameter;               // offset: 0x18 ordinal: 0x2
} _WORK_QUEUE_ITEM;

// 0x20 bytes (sizeof)
typedef struct _CM_WORKITEM {
  struct _LIST_ENTRY ListEntry;  // offset: 0x0 ordinal: 0x0
  VOID (*WorkerRoutine)(VOID *); // offset: 0x10 ordinal: 0x1
  VOID *Parameter;               // offset: 0x18 ordinal: 0x2
} _CM_WORKITEM;

// 0x20 bytes (sizeof)
typedef struct _INTERFACE {
  USHORT Size;                          // offset: 0x0 ordinal: 0x0
  USHORT Version;                       // offset: 0x2 ordinal: 0x1
  VOID *Context;                        // offset: 0x8 ordinal: 0x2
  VOID (*InterfaceReference)(VOID *);   // offset: 0x10 ordinal: 0x3
  VOID (*InterfaceDereference)(VOID *); // offset: 0x18 ordinal: 0x4
} _INTERFACE;

// 0x10 bytes (sizeof)
typedef struct _KDESCRIPTOR {
  USHORT Pad[3]; // offset: 0x0 ordinal: 0x0
  USHORT Limit;  // offset: 0x6 ordinal: 0x1
  VOID *Base;    // offset: 0x8 ordinal: 0x2
} _KDESCRIPTOR;

// 0x40 bytes (sizeof)
typedef struct _KDPC {
  UCHAR Type;                      // offset: 0x0 ordinal: 0x0
  UCHAR Importance;                // offset: 0x1 ordinal: 0x1
  USHORT Number;                   // offset: 0x2 ordinal: 0x2
  struct _LIST_ENTRY DpcListEntry; // offset: 0x8 ordinal: 0x3
  VOID(*DeferredRoutine)
  (struct _KDPC *, VOID *, VOID *, VOID *); // offset: 0x18 ordinal: 0x4
  VOID *DeferredContext;                    // offset: 0x20 ordinal: 0x5
  VOID *SystemArgument1;                    // offset: 0x28 ordinal: 0x6
  VOID *SystemArgument2;                    // offset: 0x30 ordinal: 0x7
  VOID *DpcData;                            // offset: 0x38 ordinal: 0x8
} _KDPC;

typedef VOID (*__anon_163)(struct _KDPC *, VOID *, VOID *, VOID *);

typedef VOID (*__anon_24)(VOID *, VOID *);

// 0x0 bytes (sizeof)
typedef struct _TP_CALLBACK_INSTANCE {
} _TP_CALLBACK_INSTANCE;

typedef VOID (*__anon_31)(struct _TP_CALLBACK_INSTANCE *, struct _TP_TASK *);

typedef VOID (*__anon_26)(struct _TP_CALLBACK_INSTANCE *, VOID *);

// 0x0 bytes (sizeof)
typedef struct _ACTIVATION_CONTEXT {
} _ACTIVATION_CONTEXT;

// 0x0 bytes (sizeof)
typedef struct _TP_CLEANUP_GROUP {
} _TP_CLEANUP_GROUP;

// 0x0 bytes (sizeof)
typedef struct _TP_POOL {
} _TP_POOL;

typedef VOID (*__anon_32)(struct _TP_TASK *, struct _TP_POOL *);

// 0x10 bytes (sizeof)
typedef struct _TP_TASK_CALLBACKS {
  VOID(*ExecuteCallback)
  (struct _TP_CALLBACK_INSTANCE *,
   struct _TP_TASK *); // offset: 0x0 ordinal: 0x0
  VOID(*Unposted)
  (struct _TP_TASK *, struct _TP_POOL *); // offset: 0x8 ordinal: 0x1
} _TP_TASK_CALLBACKS;

// 0x8 bytes (sizeof)
typedef struct _TP_TASK {
  struct _TP_TASK_CALLBACKS *Callbacks; // offset: 0x0 ordinal: 0x0
} _TP_TASK;

typedef LONGLONG (*__anon_1108)();

// 0x8 bytes (sizeof)
typedef union __anon_791 {
  LONGLONG Balance : 2;                      // offset: 0x0 ordinal: 0x0
  struct _MMADDRESS_NODE *Parent;            // offset: 0x0 ordinal: 0x1
  struct _MI_PER_SESSION_PROTOS *NextToFree; // offset: 0x0 ordinal: 0x2
} __anon_791;

// 0x8 bytes (sizeof)
typedef union __anon_776 {
  LONGLONG Balance : 2;  // offset: 0x0 ordinal: 0x0
  struct _MMVAD *Parent; // offset: 0x0 ordinal: 0x1
} __anon_776;

// 0x8 bytes (sizeof)
typedef union __anon_746 {
  LONGLONG Balance : 2;              // offset: 0x0 ordinal: 0x0
  struct _MMSUBSECTION_NODE *Parent; // offset: 0x0 ordinal: 0x1
} __anon_746;

// 0x8 bytes (sizeof)
typedef union __anon_457 {
  LONGLONG Balance : 2;           // offset: 0x0 ordinal: 0x0
  struct _MMADDRESS_NODE *Parent; // offset: 0x0 ordinal: 0x1
} __anon_457;

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

// 0x8 bytes (sizeof)
typedef struct _VACB_LEVEL_REFERENCE {
  LONG Reference;        // offset: 0x0 ordinal: 0x0
  LONG SpecialReference; // offset: 0x4 ordinal: 0x1
} _VACB_LEVEL_REFERENCE;

// 0x4 bytes (sizeof)
typedef struct _DBGKD_CONTINUE {
  LONG ContinueStatus; // offset: 0x0 ordinal: 0x0
} _DBGKD_CONTINUE;

typedef LONG (*__anon_351)(struct _FILE_OBJECT *, struct _DEVICE_OBJECT *);

// 0x8 bytes (sizeof)
typedef union __anon_275 {
  struct _IRP *MasterIrp; // offset: 0x0 ordinal: 0x0
  LONG IrpCount;          // offset: 0x0 ordinal: 0x1
  VOID *SystemBuffer;     // offset: 0x0 ordinal: 0x2
} __anon_275;

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

// 0x18 bytes (sizeof)
typedef struct _DISPATCHER_HEADER {
  UCHAR Type; // offset: 0x0 ordinal: 0x0
  union {
    UCHAR Abandoned;  // offset: 0x1 ordinal: 0x1
    UCHAR Absolute;   // offset: 0x1 ordinal: 0x2
    UCHAR NpxIrql;    // offset: 0x1 ordinal: 0x3
    UCHAR Signalling; // offset: 0x1 ordinal: 0x4
  };
  union {
    UCHAR Size; // offset: 0x2 ordinal: 0x5
    UCHAR Hand; // offset: 0x2 ordinal: 0x6
  };
  union {
    UCHAR Inserted;    // offset: 0x3 ordinal: 0x7
    UCHAR DebugActive; // offset: 0x3 ordinal: 0x8
    UCHAR DpcActive;   // offset: 0x3 ordinal: 0x9
  };
  LONG Lock;                       // offset: 0x0 ordinal: 0xa
  LONG SignalState;                // offset: 0x4 ordinal: 0xb
  struct _LIST_ENTRY WaitListHead; // offset: 0x8 ordinal: 0xc
} _DISPATCHER_HEADER;

// 0x38 bytes (sizeof)
typedef struct _KMUTANT {
  struct _DISPATCHER_HEADER Header;   // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY MutantListEntry; // offset: 0x18 ordinal: 0x1
  struct _KTHREAD *OwnerThread;       // offset: 0x28 ordinal: 0x2
  UCHAR Abandoned;                    // offset: 0x30 ordinal: 0x3
  UCHAR ApcDisable;                   // offset: 0x31 ordinal: 0x4
} _KMUTANT;

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

// 0x20 bytes (sizeof)
typedef struct _MI_SECTION_CREATION_EVENT {
  struct _MI_SECTION_CREATION_EVENT *Next; // offset: 0x0 ordinal: 0x0
  struct _KEVENT Event;                    // offset: 0x8 ordinal: 0x1
} _MI_SECTION_CREATION_EVENT;

// 0x8 bytes (sizeof)
typedef struct __anon_1062 {
  struct _KEVENT *Event; // offset: 0x0 ordinal: 0x0
} __anon_1062;

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

// 0x10 bytes (sizeof)
typedef struct _VF_TRACKER {
  ULONG TrackerFlags; // offset: 0x0 ordinal: 0x0
  ULONG TrackerSize;  // offset: 0x4 ordinal: 0x1
  ULONG TrackerIndex; // offset: 0x8 ordinal: 0x2
  ULONG TraceDepth;   // offset: 0xc ordinal: 0x3
} _VF_TRACKER;

// 0x8 bytes (sizeof)
typedef struct __anon_1487 {
  ULONG NotificationCode; // offset: 0x0 ordinal: 0x0
  ULONG NotificationData; // offset: 0x4 ordinal: 0x1
} __anon_1487;

// 0x4 bytes (sizeof)
typedef struct __anon_1475 {
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
} __anon_1475;

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

// 0x18 bytes (sizeof)
typedef struct _SHARED_CACHE_MAP_LIST_CURSOR {
  struct _LIST_ENTRY SharedCacheMapLinks; // offset: 0x0 ordinal: 0x0
  ULONG Flags;                            // offset: 0x10 ordinal: 0x1
} _SHARED_CACHE_MAP_LIST_CURSOR;

// 0x4 bytes (sizeof)
typedef union EX_QUEUE_WORKER_INFO {
  ULONG QueueDisabled : 1;          // offset: 0x0 ordinal: 0x0
  ULONG MakeThreadsAsNecessary : 1; // offset: 0x0 ordinal: 0x1
  ULONG WaitMode : 1;               // offset: 0x0 ordinal: 0x2
  ULONG WorkerCount : 29;           // offset: 0x0 ordinal: 0x3
  LONG QueueWorkerInfo;             // offset: 0x0 ordinal: 0x4
} EX_QUEUE_WORKER_INFO;

// 0xc bytes (sizeof)
typedef struct _KSYSTEM_TIME {
  ULONG LowPart;  // offset: 0x0 ordinal: 0x0
  LONG High1Time; // offset: 0x4 ordinal: 0x1
  LONG High2Time; // offset: 0x8 ordinal: 0x2
} _KSYSTEM_TIME;

// 0x8 bytes (sizeof)
typedef struct PROCESSOR_IDLESTATE_INFO {
  ULONG TimeCheck;      // offset: 0x0 ordinal: 0x0
  UCHAR DemotePercent;  // offset: 0x4 ordinal: 0x1
  UCHAR PromotePercent; // offset: 0x5 ordinal: 0x2
  UCHAR Spare[2];       // offset: 0x6 ordinal: 0x3
} PROCESSOR_IDLESTATE_INFO;

// 0x20 bytes (sizeof)
typedef struct PROCESSOR_IDLESTATE_POLICY {
  USHORT Revision;                           // offset: 0x0 ordinal: 0x0
  union __anon_1432 Flags;                   // offset: 0x2 ordinal: 0x1
  ULONG PolicyCount;                         // offset: 0x4 ordinal: 0x2
  struct PROCESSOR_IDLESTATE_INFO Policy[3]; // offset: 0x8 ordinal: 0x3
} PROCESSOR_IDLESTATE_POLICY;

// 0x4 bytes (sizeof)
typedef union __anon_1425 {
  ULONG Active : 1;             // offset: 0x0 ordinal: 0x0
  ULONG OnlyTryAcquireUsed : 1; // offset: 0x0 ordinal: 0x1
  ULONG ReleasedOutOfOrder : 1; // offset: 0x0 ordinal: 0x2
  ULONG SequenceNumber : 29;    // offset: 0x0 ordinal: 0x3
  ULONG Whole;                  // offset: 0x0 ordinal: 0x4
} __anon_1425;

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
  union __anon_1425 u1;                    // offset: 0x48 ordinal: 0x7
  VOID *StackTrace[8];                     // offset: 0x50 ordinal: 0x8
  VOID *ParentStackTrace[8];               // offset: 0x90 ordinal: 0x9
} _VI_DEADLOCK_NODE;

// 0x4 bytes (sizeof)
typedef struct _MM_SESSION_SPACE_FLAGS {
  ULONG Initialized : 1;          // offset: 0x0 ordinal: 0x0
  ULONG DeletePending : 1;        // offset: 0x0 ordinal: 0x1
  ULONG PoolInitialized : 1;      // offset: 0x0 ordinal: 0x2
  ULONG DynamicVaInitialized : 1; // offset: 0x0 ordinal: 0x3
  ULONG WsInitialized : 1;        // offset: 0x0 ordinal: 0x4
  ULONG PoolDestroyed : 1;        // offset: 0x0 ordinal: 0x5
  ULONG ObjectInitialized : 1;    // offset: 0x0 ordinal: 0x6
  ULONG Filler : 25;              // offset: 0x0 ordinal: 0x7
} _MM_SESSION_SPACE_FLAGS;

// 0x4 bytes (sizeof)
typedef union __anon_1405 {
  ULONG LongFlags;                      // offset: 0x0 ordinal: 0x0
  struct _MM_SESSION_SPACE_FLAGS Flags; // offset: 0x0 ordinal: 0x1
} __anon_1405;

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
typedef struct __anon_1384 {
  ULONG Signature; // offset: 0x0 ordinal: 0x0
  ULONG CheckSum;  // offset: 0x4 ordinal: 0x1
} __anon_1384;

typedef VOID (*__anon_1379)(ULONG);

// 0x48 bytes (sizeof)
typedef struct _PO_NOTIFY_ORDER_LEVEL {
  ULONG DeviceCount;             // offset: 0x0 ordinal: 0x0
  ULONG ActiveCount;             // offset: 0x4 ordinal: 0x1
  struct _LIST_ENTRY WaitSleep;  // offset: 0x8 ordinal: 0x2
  struct _LIST_ENTRY ReadySleep; // offset: 0x18 ordinal: 0x3
  struct _LIST_ENTRY ReadyS0;    // offset: 0x28 ordinal: 0x4
  struct _LIST_ENTRY WaitS0;     // offset: 0x38 ordinal: 0x5
} _PO_NOTIFY_ORDER_LEVEL;

// 0x250 bytes (sizeof)
typedef struct _PO_DEVICE_NOTIFY_ORDER {
  UCHAR Locked;                                // offset: 0x0 ordinal: 0x0
  struct _DEVICE_OBJECT **WarmEjectPdoPointer; // offset: 0x8 ordinal: 0x1
  struct _PO_NOTIFY_ORDER_LEVEL OrderLevel[8]; // offset: 0x10 ordinal: 0x2
} _PO_DEVICE_NOTIFY_ORDER;

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
  UCHAR FastSystemS4;                             // offset: 0x11 ordinal: 0x11
  UCHAR spare2[3];                                // offset: 0x12 ordinal: 0x12
  UCHAR DiskSpinDown;                             // offset: 0x15 ordinal: 0x13
  UCHAR spare3[8];                                // offset: 0x16 ordinal: 0x14
  UCHAR SystemBatteriesPresent;                   // offset: 0x1e ordinal: 0x15
  UCHAR BatteriesAreShortTerm;                    // offset: 0x1f ordinal: 0x16
  struct BATTERY_REPORTING_SCALE BatteryScale[3]; // offset: 0x20 ordinal: 0x17
  enum _SYSTEM_POWER_STATE AcOnLineWake;          // offset: 0x38 ordinal: 0x18
  enum _SYSTEM_POWER_STATE SoftLidWake;           // offset: 0x3c ordinal: 0x19
  enum _SYSTEM_POWER_STATE RtcWake;               // offset: 0x40 ordinal: 0x1a
  enum _SYSTEM_POWER_STATE MinDeviceWakeState;    // offset: 0x44 ordinal: 0x1b
  enum _SYSTEM_POWER_STATE DefaultLowLatencyWake; // offset: 0x48 ordinal: 0x1c
} SYSTEM_POWER_CAPABILITIES;

// 0x80 bytes (sizeof)
typedef struct _POP_DISPLAY_RESUME_CONTEXT {
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x0 ordinal: 0x0
  struct _ETHREAD *WorkerThread;    // offset: 0x20 ordinal: 0x1
  struct _KEVENT PrepareUIEvent;    // offset: 0x28 ordinal: 0x2
  struct _KEVENT PowerOnEvent;      // offset: 0x40 ordinal: 0x3
  struct _KEVENT DoneEvent;         // offset: 0x58 ordinal: 0x4
  ULONG WorkerQueued;               // offset: 0x70 ordinal: 0x5
  ULONG WorkerAbort;                // offset: 0x74 ordinal: 0x6
  ULONG NoResumeUI;                 // offset: 0x78 ordinal: 0x7
} _POP_DISPLAY_RESUME_CONTEXT;

// 0x8 bytes (sizeof)
typedef struct _RTL_HANDLE_TABLE_ENTRY {
  union {
    ULONG Flags;                              // offset: 0x0 ordinal: 0x0
    struct _RTL_HANDLE_TABLE_ENTRY *NextFree; // offset: 0x0 ordinal: 0x1
  };
} _RTL_HANDLE_TABLE_ENTRY;

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

// 0x4 bytes (sizeof)
typedef union __anon_1317 {
  ULONG PhysicalAddress; // offset: 0x0 ordinal: 0x0
  ULONG VirtualSize;     // offset: 0x0 ordinal: 0x1
} __anon_1317;

// 0x28 bytes (sizeof)
typedef struct _IMAGE_SECTION_HEADER {
  UCHAR Name[8];              // offset: 0x0 ordinal: 0x0
  union __anon_1317 Misc;     // offset: 0x8 ordinal: 0x1
  ULONG VirtualAddress;       // offset: 0xc ordinal: 0x2
  ULONG SizeOfRawData;        // offset: 0x10 ordinal: 0x3
  ULONG PointerToRawData;     // offset: 0x14 ordinal: 0x4
  ULONG PointerToRelocations; // offset: 0x18 ordinal: 0x5
  ULONG PointerToLinenumbers; // offset: 0x1c ordinal: 0x6
  USHORT NumberOfRelocations; // offset: 0x20 ordinal: 0x7
  USHORT NumberOfLinenumbers; // offset: 0x22 ordinal: 0x8
  ULONG Characteristics;      // offset: 0x24 ordinal: 0x9
} _IMAGE_SECTION_HEADER;

// 0x8 bytes (sizeof)
typedef struct _STRING32 {
  USHORT Length;        // offset: 0x0 ordinal: 0x0
  USHORT MaximumLength; // offset: 0x2 ordinal: 0x1
  ULONG Buffer;         // offset: 0x4 ordinal: 0x2
} _STRING32;

// 0x1c bytes (sizeof)
typedef struct PROCESSOR_PERFSTATE_POLICY {
  ULONG Revision;         // offset: 0x0 ordinal: 0x0
  UCHAR MaxThrottle;      // offset: 0x4 ordinal: 0x1
  UCHAR MinThrottle;      // offset: 0x5 ordinal: 0x2
  UCHAR BusyAdjThreshold; // offset: 0x6 ordinal: 0x3
  union {
    UCHAR Spare;             // offset: 0x7 ordinal: 0x4
    union __anon_1309 Flags; // offset: 0x7 ordinal: 0x5
  };
  ULONG TimeCheck;       // offset: 0x8 ordinal: 0x6
  ULONG IncreaseTime;    // offset: 0xc ordinal: 0x7
  ULONG DecreaseTime;    // offset: 0x10 ordinal: 0x8
  ULONG IncreasePercent; // offset: 0x14 ordinal: 0x9
  ULONG DecreasePercent; // offset: 0x18 ordinal: 0xa
} PROCESSOR_PERFSTATE_POLICY;

// 0x4 bytes (sizeof)
typedef struct __anon_1305 {
  ULONG Type; // offset: 0x0 ordinal: 0x0
} __anon_1305;

// 0x4 bytes (sizeof)
typedef struct __anon_1304 {
  ULONG Level; // offset: 0x0 ordinal: 0x0
} __anon_1304;

// 0x18 bytes (sizeof)
typedef struct _POP_ACTION_TRIGGER {
  enum POP_POLICY_DEVICE_TYPE Type; // offset: 0x0 ordinal: 0x0
  ULONG Flags;                      // offset: 0x4 ordinal: 0x1
  struct _POP_TRIGGER_WAIT *Wait;   // offset: 0x8 ordinal: 0x2
  union {
    struct __anon_1304 Battery; // offset: 0x10 ordinal: 0x3
    struct __anon_1305 Button;  // offset: 0x10 ordinal: 0x4
  };
} _POP_ACTION_TRIGGER;

// 0x38 bytes (sizeof)
typedef struct _POP_TRIGGER_WAIT {
  struct _KEVENT Event;                // offset: 0x0 ordinal: 0x0
  LONG Status;                         // offset: 0x18 ordinal: 0x1
  struct _LIST_ENTRY Link;             // offset: 0x20 ordinal: 0x2
  struct _POP_ACTION_TRIGGER *Trigger; // offset: 0x30 ordinal: 0x3
} _POP_TRIGGER_WAIT;

// 0x20 bytes (sizeof)
typedef struct _RTL_RANGE_LIST {
  struct _LIST_ENTRY ListHead; // offset: 0x0 ordinal: 0x0
  ULONG Flags;                 // offset: 0x10 ordinal: 0x1
  ULONG Count;                 // offset: 0x14 ordinal: 0x2
  ULONG Stamp;                 // offset: 0x18 ordinal: 0x3
} _RTL_RANGE_LIST;

// 0x20 bytes (sizeof)
typedef struct _MEMORY_ALLOCATION_DESCRIPTOR {
  struct _LIST_ENTRY ListEntry;    // offset: 0x0 ordinal: 0x0
  enum _TYPE_OF_MEMORY MemoryType; // offset: 0x10 ordinal: 0x1
  ULONG BasePage;                  // offset: 0x14 ordinal: 0x2
  ULONG PageCount;                 // offset: 0x18 ordinal: 0x3
} _MEMORY_ALLOCATION_DESCRIPTOR;

// 0x10 bytes (sizeof)
typedef struct _TEB_ACTIVE_FRAME_CONTEXT {
  ULONG Flags;     // offset: 0x0 ordinal: 0x0
  CHAR *FrameName; // offset: 0x8 ordinal: 0x1
} _TEB_ACTIVE_FRAME_CONTEXT;

// 0x38 bytes (sizeof)
typedef struct _VI_TRACK_IRQL {
  VOID *Thread;        // offset: 0x0 ordinal: 0x0
  UCHAR OldIrql;       // offset: 0x8 ordinal: 0x1
  UCHAR NewIrql;       // offset: 0x9 ordinal: 0x2
  UCHAR Processor;     // offset: 0xa ordinal: 0x3
  ULONG TickCount;     // offset: 0xc ordinal: 0x4
  VOID *StackTrace[5]; // offset: 0x10 ordinal: 0x5
} _VI_TRACK_IRQL;

// 0x28 bytes (sizeof)
typedef struct _CALL_HASH_ENTRY {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 ordinal: 0x0
  VOID *CallersAddress;         // offset: 0x10 ordinal: 0x1
  VOID *CallersCaller;          // offset: 0x18 ordinal: 0x2
  ULONG CallCount;              // offset: 0x20 ordinal: 0x3
} _CALL_HASH_ENTRY;

// 0x4 bytes (sizeof)
typedef struct _HEAP_STOP_ON_TAG {
  union {
    ULONG HeapAndTagIndex; // offset: 0x0 ordinal: 0x0
    USHORT TagIndex;       // offset: 0x0 ordinal: 0x1
  };
  USHORT HeapIndex; // offset: 0x2 ordinal: 0x2
} _HEAP_STOP_ON_TAG;

// 0x10 bytes (sizeof)
typedef struct _UNEXPECTED_INTERRUPT {
  UCHAR PushImmOp; // offset: 0x0 ordinal: 0x0
  ULONG PushImm;   // offset: 0x1 ordinal: 0x1
  UCHAR PushRbp;   // offset: 0x5 ordinal: 0x2
  UCHAR JmpOp;     // offset: 0x6 ordinal: 0x3
  LONG JmpOffset;  // offset: 0x7 ordinal: 0x4
} _UNEXPECTED_INTERRUPT;

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

typedef VOID (*__anon_1170)(ULONG, ULONG, VOID *);

// 0x4 bytes (sizeof)
typedef struct _MMSECURE_FLAGS {
  ULONG ReadOnly : 1; // offset: 0x0 ordinal: 0x0
  ULONG NoWrite : 1;  // offset: 0x0 ordinal: 0x1
  ULONG Spare : 10;   // offset: 0x0 ordinal: 0x2
} _MMSECURE_FLAGS;

// 0x8 bytes (sizeof)
typedef union __anon_1164 {
  struct _MMSECURE_FLAGS Flags; // offset: 0x0 ordinal: 0x0
  VOID *StartVa;                // offset: 0x0 ordinal: 0x1
} __anon_1164;

// 0x10 bytes (sizeof)
typedef struct _MMADDRESS_LIST {
  union __anon_1164 u1; // offset: 0x0 ordinal: 0x0
  VOID *EndVa;          // offset: 0x8 ordinal: 0x1
} _MMADDRESS_LIST;

// 0x10 bytes (sizeof)
typedef union __anon_1162 {
  struct _LIST_ENTRY List;        // offset: 0x0 ordinal: 0x0
  struct _MMADDRESS_LIST Secured; // offset: 0x0 ordinal: 0x1
} __anon_1162;

// 0x4 bytes (sizeof)
typedef union __anon_1151 {
  struct __anon_1153 s2; // offset: 0x0 ordinal: 0x0
  ULONG ZeroInit;        // offset: 0x0 ordinal: 0x1
} __anon_1151;

// 0x4 bytes (sizeof)
typedef union __anon_1150 {
  struct __anon_1152 s1; // offset: 0x0 ordinal: 0x0
  ULONG Length;          // offset: 0x0 ordinal: 0x1
} __anon_1150;

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

// 0x10 bytes (sizeof)
typedef struct _SID_AND_ATTRIBUTES {
  VOID *Sid;        // offset: 0x0 ordinal: 0x0
  ULONG Attributes; // offset: 0x8 ordinal: 0x1
} _SID_AND_ATTRIBUTES;

// 0x8 bytes (sizeof)
typedef struct _TRACE_ENABLE_CONTEXT {
  USHORT LoggerId;    // offset: 0x0 ordinal: 0x0
  UCHAR Level;        // offset: 0x2 ordinal: 0x1
  UCHAR InternalFlag; // offset: 0x3 ordinal: 0x2
  ULONG EnableFlags;  // offset: 0x4 ordinal: 0x3
} _TRACE_ENABLE_CONTEXT;

// 0xc8 bytes (sizeof)
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
      *EntryPointActivationContext;   // offset: 0x88 ordinal: 0x10
  VOID *PatchInformation;             // offset: 0x90 ordinal: 0x11
  struct _LIST_ENTRY ForwarderLinks;  // offset: 0x98 ordinal: 0x12
  struct _LIST_ENTRY ServiceTagLinks; // offset: 0xa8 ordinal: 0x13
  struct _LIST_ENTRY StaticLinks;     // offset: 0xb8 ordinal: 0x14
} _LDR_DATA_TABLE_ENTRY;

// 0x4 bytes (sizeof)
typedef struct __anon_1063 {
  ULONG Reason; // offset: 0x0 ordinal: 0x0
} __anon_1063;

// 0x18 bytes (sizeof)
typedef struct _VACB_ARRAY_HEADER {
  struct _LIST_ENTRY Links; // offset: 0x0 ordinal: 0x0
  ULONG MappingCount;       // offset: 0x10 ordinal: 0x1
  ULONG Reserved;           // offset: 0x14 ordinal: 0x2
} _VACB_ARRAY_HEADER;

// 0x4 bytes (sizeof)
typedef struct _PRIVATE_CACHE_MAP_FLAGS {
  ULONG DontUse : 16;         // offset: 0x0 ordinal: 0x0
  ULONG ReadAheadActive : 1;  // offset: 0x0 ordinal: 0x1
  ULONG ReadAheadEnabled : 1; // offset: 0x0 ordinal: 0x2
  ULONG PagePriority : 3;     // offset: 0x0 ordinal: 0x3
  ULONG Available : 11;       // offset: 0x0 ordinal: 0x4
} _PRIVATE_CACHE_MAP_FLAGS;

// 0x28 bytes (sizeof)
typedef struct _VOLUME_CACHE_MAP {
  SHORT NodeTypeCode;                     // offset: 0x0 ordinal: 0x0
  SHORT NodeByteCode;                     // offset: 0x2 ordinal: 0x1
  ULONG UseCount;                         // offset: 0x4 ordinal: 0x2
  struct _DEVICE_OBJECT *DeviceObject;    // offset: 0x8 ordinal: 0x3
  struct _LIST_ENTRY VolumeCacheMapLinks; // offset: 0x10 ordinal: 0x4
  ULONG Flags;                            // offset: 0x20 ordinal: 0x5
} _VOLUME_CACHE_MAP;

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

// 0xc bytes (sizeof)
typedef struct _ARM_DBGKD_CONTROL_SET {
  ULONG Continue;           // offset: 0x0 ordinal: 0x0
  ULONG CurrentSymbolStart; // offset: 0x4 ordinal: 0x1
  ULONG CurrentSymbolEnd;   // offset: 0x8 ordinal: 0x2
} _ARM_DBGKD_CONTROL_SET;

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

// 0x10 bytes (sizeof)
typedef struct _PNP_ASSIGN_RESOURCES_CONTEXT {
  ULONG IncludeFailedDevices;           // offset: 0x0 ordinal: 0x0
  ULONG DeviceCount;                    // offset: 0x4 ordinal: 0x1
  struct _DEVICE_OBJECT *DeviceList[1]; // offset: 0x8 ordinal: 0x2
} _PNP_ASSIGN_RESOURCES_CONTEXT;

// 0x40 bytes (sizeof)
typedef struct _PO_DEVICE_NOTIFY {
  struct _LIST_ENTRY Link;             // offset: 0x0 ordinal: 0x0
  struct _DEVICE_OBJECT *TargetDevice; // offset: 0x10 ordinal: 0x1
  UCHAR OrderLevel;                    // offset: 0x18 ordinal: 0x2
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x20 ordinal: 0x3
  USHORT *DeviceName;                  // offset: 0x28 ordinal: 0x4
  USHORT *DriverName;                  // offset: 0x30 ordinal: 0x5
  ULONG ChildCount;                    // offset: 0x38 ordinal: 0x6
  ULONG ActiveChild;                   // offset: 0x3c ordinal: 0x7
} _PO_DEVICE_NOTIFY;

// 0x10 bytes (sizeof)
typedef struct _DEVICE_RELATIONS {
  ULONG Count;                       // offset: 0x0 ordinal: 0x0
  struct _DEVICE_OBJECT *Objects[1]; // offset: 0x8 ordinal: 0x1
} _DEVICE_RELATIONS;

// 0x8 bytes (sizeof)
typedef union __anon_971 {
  struct _DEVICE_NODE *LegacyDeviceNode;            // offset: 0x0 ordinal: 0x0
  struct _DEVICE_RELATIONS *PendingDeviceRelations; // offset: 0x0 ordinal: 0x1
  VOID *Information;                                // offset: 0x0 ordinal: 0x2
} __anon_971;

// 0x4 bytes (sizeof)
typedef struct _CONTEXT32_UPDATE {
  ULONG NumberEntries; // offset: 0x0 ordinal: 0x0
} _CONTEXT32_UPDATE;

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

// 0x8 bytes (sizeof)
typedef struct _KTRANSACTION_HISTORY {
  enum __anon_923 RecordType; // offset: 0x0 ordinal: 0x0
  ULONG Payload;              // offset: 0x4 ordinal: 0x1
} _KTRANSACTION_HISTORY;

// 0x8 bytes (sizeof)
typedef struct __anon_917 {
  ULONG idxRecord;    // offset: 0x0 ordinal: 0x0
  ULONG cidContainer; // offset: 0x4 ordinal: 0x1
} __anon_917;

// 0x68 bytes (sizeof)
typedef struct _RTL_AVL_TABLE {
  struct _RTL_BALANCED_LINKS BalancedRoot; // offset: 0x0 ordinal: 0x0
  VOID *OrderedPointer;                    // offset: 0x20 ordinal: 0x1
  ULONG WhichOrderedElement;               // offset: 0x28 ordinal: 0x2
  ULONG NumberGenericTableElements;        // offset: 0x2c ordinal: 0x3
  ULONG DepthOfTree;                       // offset: 0x30 ordinal: 0x4
  struct _RTL_BALANCED_LINKS *RestartKey;  // offset: 0x38 ordinal: 0x5
  ULONG DeleteCount;                       // offset: 0x40 ordinal: 0x6
  enum _RTL_GENERIC_COMPARE_RESULTS (*CompareRoutine)(
      struct _RTL_AVL_TABLE *, VOID *, VOID *); // offset: 0x48 ordinal: 0x7
  VOID *(*AllocateRoutine)(struct _RTL_AVL_TABLE *,
                           ULONG); // offset: 0x50 ordinal: 0x8
  VOID(*FreeRoutine)
  (struct _RTL_AVL_TABLE *, VOID *); // offset: 0x58 ordinal: 0x9
  VOID *TableContext;                // offset: 0x60 ordinal: 0xa
} _RTL_AVL_TABLE;

typedef VOID (*__anon_926)(struct _RTL_AVL_TABLE *, VOID *);

typedef VOID *(*__anon_925)(struct _RTL_AVL_TABLE *, ULONG);

typedef enum _RTL_GENERIC_COMPARE_RESULTS (*__anon_924)(struct _RTL_AVL_TABLE *,
                                                        VOID *, VOID *);

// 0xa8 bytes (sizeof)
typedef struct _KTMOBJECT_NAMESPACE {
  struct _RTL_AVL_TABLE Table; // offset: 0x0 ordinal: 0x0
  struct _KMUTANT Mutex;       // offset: 0x68 ordinal: 0x1
  USHORT LinksOffset;          // offset: 0xa0 ordinal: 0x2
  USHORT GuidOffset;           // offset: 0xa2 ordinal: 0x3
  UCHAR Expired;               // offset: 0xa4 ordinal: 0x4
} _KTMOBJECT_NAMESPACE;

// 0x8 bytes (sizeof)
typedef struct _KENLISTMENT_HISTORY {
  ULONG Notification;               // offset: 0x0 ordinal: 0x0
  enum _KENLISTMENT_STATE NewState; // offset: 0x4 ordinal: 0x1
} _KENLISTMENT_HISTORY;

// 0x18 bytes (sizeof)
typedef struct _CM_NAME_HASH {
  ULONG ConvKey;                  // offset: 0x0 ordinal: 0x0
  struct _CM_NAME_HASH *NextHash; // offset: 0x8 ordinal: 0x1
  USHORT NameLength;              // offset: 0x10 ordinal: 0x2
  WCHAR Name[1];                  // offset: 0x12 ordinal: 0x3
} _CM_NAME_HASH;

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
  WCHAR Name[1];                 // offset: 0x1a ordinal: 0x6
} _CM_NAME_CONTROL_BLOCK;

// 0x8 bytes (sizeof)
typedef struct _CM_CELL_REMAP_BLOCK {
  ULONG OldCell; // offset: 0x0 ordinal: 0x0
  ULONG NewCell; // offset: 0x4 ordinal: 0x1
} _CM_CELL_REMAP_BLOCK;

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

// 0x38 bytes (sizeof)
typedef struct _CM_KEY_SECURITY_CACHE {
  ULONG Cell;                                      // offset: 0x0 ordinal: 0x0
  ULONG ConvKey;                                   // offset: 0x4 ordinal: 0x1
  struct _LIST_ENTRY List;                         // offset: 0x8 ordinal: 0x2
  ULONG DescriptorLength;                          // offset: 0x18 ordinal: 0x3
  ULONG RealRefCount;                              // offset: 0x1c ordinal: 0x4
  struct _SECURITY_DESCRIPTOR_RELATIVE Descriptor; // offset: 0x20 ordinal: 0x5
} _CM_KEY_SECURITY_CACHE;

// 0x10 bytes (sizeof)
typedef struct _CM_KEY_SECURITY_CACHE_ENTRY {
  ULONG Cell;                                    // offset: 0x0 ordinal: 0x0
  struct _CM_KEY_SECURITY_CACHE *CachedSecurity; // offset: 0x8 ordinal: 0x1
} _CM_KEY_SECURITY_CACHE_ENTRY;

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
typedef struct _CM_KEY_VALUE {
  USHORT Signature;  // offset: 0x0 ordinal: 0x0
  USHORT NameLength; // offset: 0x2 ordinal: 0x1
  ULONG DataLength;  // offset: 0x4 ordinal: 0x2
  ULONG Data;        // offset: 0x8 ordinal: 0x3
  ULONG Type;        // offset: 0xc ordinal: 0x4
  USHORT Flags;      // offset: 0x10 ordinal: 0x5
  USHORT Spare;      // offset: 0x12 ordinal: 0x6
  WCHAR Name[1];     // offset: 0x14 ordinal: 0x7
} _CM_KEY_VALUE;

// 0x18 bytes (sizeof)
typedef struct CMP_OFFSET_ARRAY {
  ULONG FileOffset; // offset: 0x0 ordinal: 0x0
  VOID *DataBuffer; // offset: 0x8 ordinal: 0x1
  ULONG DataLength; // offset: 0x10 ordinal: 0x2
} CMP_OFFSET_ARRAY;

typedef VOID (*__anon_811)(VOID *, ULONG);

typedef VOID *(*__anon_810)(ULONG, UCHAR, ULONG);

// 0x4 bytes (sizeof)
typedef union __anon_794 {
  ULONG ReferenceCount;     // offset: 0x0 ordinal: 0x0
  ULONG NumberOfPtesToFree; // offset: 0x0 ordinal: 0x1
} __anon_794;

// 0x4 bytes (sizeof)
typedef union __anon_781 {
  ULONG LongFlags2;               // offset: 0x0 ordinal: 0x0
  struct _MMVAD_FLAGS2 VadFlags2; // offset: 0x0 ordinal: 0x1
} __anon_781;

// 0x10 bytes (sizeof)
typedef struct _MMPAGING_FILE_FREE_ENTRY {
  struct _SINGLE_LIST_ENTRY ListEntry; // offset: 0x0 ordinal: 0x0
  ULONG FreeBit;                       // offset: 0x8 ordinal: 0x1
} _MMPAGING_FILE_FREE_ENTRY;

// 0x4 bytes (sizeof)
typedef struct _MI_EXTRA_IMAGE_INFORMATION {
  ULONG SizeOfHeaders; // offset: 0x0 ordinal: 0x0
} _MI_EXTRA_IMAGE_INFORMATION;

// 0x4 bytes (sizeof)
typedef union __anon_745 {
  ULONG LongFlags;                            // offset: 0x0 ordinal: 0x0
  struct _MMSUBSECTION_FLAGS SubsectionFlags; // offset: 0x0 ordinal: 0x1
} __anon_745;

// 0x28 bytes (sizeof)
typedef struct _MMSUBSECTION_NODE {
  union __anon_745 u;                    // offset: 0x0 ordinal: 0x0
  ULONG StartingSector;                  // offset: 0x4 ordinal: 0x1
  ULONG NumberOfFullSectors;             // offset: 0x8 ordinal: 0x2
  union __anon_746 u1;                   // offset: 0x10 ordinal: 0x3
  struct _MMSUBSECTION_NODE *LeftChild;  // offset: 0x18 ordinal: 0x4
  struct _MMSUBSECTION_NODE *RightChild; // offset: 0x20 ordinal: 0x5
} _MMSUBSECTION_NODE;

// 0x4 bytes (sizeof)
typedef union __anon_733 {
  ULONG LongFlags;               // offset: 0x0 ordinal: 0x0
  struct _MMSECTION_FLAGS Flags; // offset: 0x0 ordinal: 0x1
} __anon_733;

// 0x20 bytes (sizeof)
typedef struct _NETWORK_LOADER_BLOCK {
  UCHAR *DHCPServerACK;              // offset: 0x0 ordinal: 0x0
  ULONG DHCPServerACKLength;         // offset: 0x8 ordinal: 0x1
  UCHAR *BootServerReplyPacket;      // offset: 0x10 ordinal: 0x2
  ULONG BootServerReplyPacketLength; // offset: 0x18 ordinal: 0x3
} _NETWORK_LOADER_BLOCK;

// 0x4 bytes (sizeof)
typedef struct _DEVICE_FLAGS {
  ULONG Failed : 1;     // offset: 0x0 ordinal: 0x0
  ULONG ReadOnly : 1;   // offset: 0x0 ordinal: 0x1
  ULONG Removable : 1;  // offset: 0x0 ordinal: 0x2
  ULONG ConsoleIn : 1;  // offset: 0x0 ordinal: 0x3
  ULONG ConsoleOut : 1; // offset: 0x0 ordinal: 0x4
  ULONG Input : 1;      // offset: 0x0 ordinal: 0x5
  ULONG Output : 1;     // offset: 0x0 ordinal: 0x6
} _DEVICE_FLAGS;

// 0x4 bytes (sizeof)
typedef struct _PCAT_FIRMWARE_INFORMATION {
  ULONG PlaceHolder; // offset: 0x0 ordinal: 0x0
} _PCAT_FIRMWARE_INFORMATION;

// 0x10 bytes (sizeof)
typedef struct _PROFILE_PARAMETER_BLOCK {
  USHORT Status;       // offset: 0x0 ordinal: 0x0
  USHORT Reserved;     // offset: 0x2 ordinal: 0x1
  USHORT DockingState; // offset: 0x4 ordinal: 0x2
  USHORT Capabilities; // offset: 0x6 ordinal: 0x3
  ULONG DockID;        // offset: 0x8 ordinal: 0x4
  ULONG SerialNumber;  // offset: 0xc ordinal: 0x5
} _PROFILE_PARAMETER_BLOCK;

// 0x28 bytes (sizeof)
typedef struct _CONFIGURATION_COMPONENT {
  enum _CONFIGURATION_CLASS Class; // offset: 0x0 ordinal: 0x0
  enum _CONFIGURATION_TYPE Type;   // offset: 0x4 ordinal: 0x1
  struct _DEVICE_FLAGS Flags;      // offset: 0x8 ordinal: 0x2
  USHORT Version;                  // offset: 0xc ordinal: 0x3
  USHORT Revision;                 // offset: 0xe ordinal: 0x4
  ULONG Key;                       // offset: 0x10 ordinal: 0x5
  ULONG AffinityMask;              // offset: 0x14 ordinal: 0x6
  ULONG ConfigurationDataLength;   // offset: 0x18 ordinal: 0x7
  ULONG IdentifierLength;          // offset: 0x1c ordinal: 0x8
  CHAR *Identifier;                // offset: 0x20 ordinal: 0x9
} _CONFIGURATION_COMPONENT;

// 0x48 bytes (sizeof)
typedef struct _CONFIGURATION_COMPONENT_DATA {
  struct _CONFIGURATION_COMPONENT_DATA *Parent;   // offset: 0x0 ordinal: 0x0
  struct _CONFIGURATION_COMPONENT_DATA *Child;    // offset: 0x8 ordinal: 0x1
  struct _CONFIGURATION_COMPONENT_DATA *Sibling;  // offset: 0x10 ordinal: 0x2
  struct _CONFIGURATION_COMPONENT ComponentEntry; // offset: 0x18 ordinal: 0x3
  VOID *ConfigurationData;                        // offset: 0x40 ordinal: 0x4
} _CONFIGURATION_COMPONENT_DATA;

// 0x4 bytes (sizeof)
typedef struct _IA64_LOADER_BLOCK {
  ULONG PlaceHolder; // offset: 0x0 ordinal: 0x0
} _IA64_LOADER_BLOCK;

// 0x4 bytes (sizeof)
typedef struct _ALPHA_LOADER_BLOCK {
  ULONG PlaceHolder; // offset: 0x0 ordinal: 0x0
} _ALPHA_LOADER_BLOCK;

// 0x10 bytes (sizeof)
typedef struct _I386_LOADER_BLOCK {
  VOID *CommonDataArea; // offset: 0x0 ordinal: 0x0
  ULONG MachineType;    // offset: 0x8 ordinal: 0x1
  ULONG VirtualBias;    // offset: 0xc ordinal: 0x2
} _I386_LOADER_BLOCK;

// 0x10 bytes (sizeof)
typedef union __anon_689 {
  struct _I386_LOADER_BLOCK I386;   // offset: 0x0 ordinal: 0x0
  struct _ALPHA_LOADER_BLOCK Alpha; // offset: 0x0 ordinal: 0x1
  struct _IA64_LOADER_BLOCK Ia64;   // offset: 0x0 ordinal: 0x2
} __anon_689;

// 0x10 bytes (sizeof)
typedef struct _PCIE_DEVICE_ID {
  USHORT VendorID;              // offset: 0x0 ordinal: 0x0
  USHORT DeviceID;              // offset: 0x2 ordinal: 0x1
  ULONG ClassCode : 24;         // offset: 0x4 ordinal: 0x2
  ULONG FunctionNumber : 8;     // offset: 0x4 ordinal: 0x3
  ULONG DeviceNumber : 8;       // offset: 0x8 ordinal: 0x4
  ULONG Segment : 16;           // offset: 0x8 ordinal: 0x5
  ULONG PrimaryBusNumber : 8;   // offset: 0x8 ordinal: 0x6
  ULONG SecondaryBusNumber : 8; // offset: 0xc ordinal: 0x7
  ULONG Reserved1 : 2;          // offset: 0xc ordinal: 0x8
  ULONG SlotNumber : 14;        // offset: 0xc ordinal: 0x9
  ULONG Reserved2 : 8;          // offset: 0xc ordinal: 0xa
} _PCIE_DEVICE_ID;

// 0x10 bytes (sizeof)
typedef struct _GUID {
  ULONG Data1;    // offset: 0x0 ordinal: 0x0
  USHORT Data2;   // offset: 0x4 ordinal: 0x1
  USHORT Data3;   // offset: 0x6 ordinal: 0x2
  UCHAR Data4[8]; // offset: 0x8 ordinal: 0x3
} _GUID;

// 0x1c bytes (sizeof)
typedef struct __anon_1491 {
  struct _GUID PowerSettingGuid; // offset: 0x0 ordinal: 0x0
  UCHAR PowerSettingChanged;     // offset: 0x10 ordinal: 0x1
  ULONG DataLength;              // offset: 0x14 ordinal: 0x2
  UCHAR Data[1];                 // offset: 0x18 ordinal: 0x3
} __anon_1491;

// 0x10 bytes (sizeof)
typedef struct __anon_1489 {
  struct _GUID BlockedDriverGuid; // offset: 0x0 ordinal: 0x0
} __anon_1489;

// 0x14 bytes (sizeof)
typedef struct __anon_1482 {
  struct _GUID ClassGuid;    // offset: 0x0 ordinal: 0x0
  WCHAR SymbolicLinkName[1]; // offset: 0x10 ordinal: 0x1
} __anon_1482;

// 0x20 bytes (sizeof)
typedef union __anon_1481 {
  struct __anon_1482 DeviceClass;               // offset: 0x0 ordinal: 0x0
  struct __anon_1483 TargetDevice;              // offset: 0x0 ordinal: 0x1
  struct __anon_1484 InstallDevice;             // offset: 0x0 ordinal: 0x2
  struct __anon_1485 CustomNotification;        // offset: 0x0 ordinal: 0x3
  struct __anon_1486 ProfileNotification;       // offset: 0x0 ordinal: 0x4
  struct __anon_1487 PowerNotification;         // offset: 0x0 ordinal: 0x5
  struct __anon_1488 VetoNotification;          // offset: 0x0 ordinal: 0x6
  struct __anon_1489 BlockedDriverNotification; // offset: 0x0 ordinal: 0x7
  struct __anon_1490 InvalidIDNotification;     // offset: 0x0 ordinal: 0x8
  struct __anon_1491 PowerSettingNotification;  // offset: 0x0 ordinal: 0x9
} __anon_1481;

// 0x10 bytes (sizeof)
typedef struct __anon_1385 {
  struct _GUID DiskId; // offset: 0x0 ordinal: 0x0
} __anon_1385;

// 0x10 bytes (sizeof)
typedef union __anon_1378 {
  struct __anon_1384 Mbr; // offset: 0x0 ordinal: 0x0
  struct __anon_1385 Gpt; // offset: 0x0 ordinal: 0x1
} __anon_1378;

// 0x40 bytes (sizeof)
typedef struct _HEADLESS_LOADER_BLOCK {
  UCHAR UsedBiosSettings;  // offset: 0x0 ordinal: 0x0
  UCHAR DataBits;          // offset: 0x1 ordinal: 0x1
  UCHAR StopBits;          // offset: 0x2 ordinal: 0x2
  UCHAR Parity;            // offset: 0x3 ordinal: 0x3
  ULONG BaudRate;          // offset: 0x4 ordinal: 0x4
  ULONG PortNumber;        // offset: 0x8 ordinal: 0x5
  UCHAR *PortAddress;      // offset: 0x10 ordinal: 0x6
  USHORT PciDeviceId;      // offset: 0x18 ordinal: 0x7
  USHORT PciVendorId;      // offset: 0x1a ordinal: 0x8
  UCHAR PciBusNumber;      // offset: 0x1c ordinal: 0x9
  USHORT PciBusSegment;    // offset: 0x1e ordinal: 0xa
  UCHAR PciSlotNumber;     // offset: 0x20 ordinal: 0xb
  UCHAR PciFunctionNumber; // offset: 0x21 ordinal: 0xc
  ULONG PciFlags;          // offset: 0x24 ordinal: 0xd
  struct _GUID SystemGUID; // offset: 0x28 ordinal: 0xe
  UCHAR IsMMIODevice;      // offset: 0x38 ordinal: 0xf
  UCHAR TerminalType;      // offset: 0x39 ordinal: 0x10
} _HEADLESS_LOADER_BLOCK;

// 0x48 bytes (sizeof)
typedef struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR {
  ULONG SectionOffset;                       // offset: 0x0 ordinal: 0x0
  ULONG SectionLength;                       // offset: 0x4 ordinal: 0x1
  USHORT Revision;                           // offset: 0x8 ordinal: 0x2
  UCHAR ValidationBits;                      // offset: 0xa ordinal: 0x3
  UCHAR Reserved;                            // offset: 0xb ordinal: 0x4
  ULONG Flags;                               // offset: 0xc ordinal: 0x5
  struct _GUID SectionType;                  // offset: 0x10 ordinal: 0x6
  struct _GUID FRUId;                        // offset: 0x20 ordinal: 0x7
  enum _WHEA_ERROR_SEVERITY SectionSeverity; // offset: 0x30 ordinal: 0x8
  CHAR FRUText[20];                          // offset: 0x34 ordinal: 0x9
} _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR;

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

// 0x4 bytes (sizeof)
typedef struct __anon_646 {
  ULONG FilePointerIndex : 9; // offset: 0x0 ordinal: 0x0
  ULONG HardFault : 1;        // offset: 0x0 ordinal: 0x1
  ULONG Spare1 : 2;           // offset: 0x0 ordinal: 0x2
} __anon_646;

// 0x4 bytes (sizeof)
typedef struct __anon_645 {
  ULONG FilePointerIndex : 9; // offset: 0x0 ordinal: 0x0
  ULONG HardFault : 1;        // offset: 0x0 ordinal: 0x1
  ULONG Image : 1;            // offset: 0x0 ordinal: 0x2
  ULONG Spare0 : 1;           // offset: 0x0 ordinal: 0x3
} __anon_645;

// 0x4 bytes (sizeof)
typedef union _MM_PAGE_ACCESS_INFO_FLAGS {
  struct __anon_645 File;    // offset: 0x0 ordinal: 0x0
  struct __anon_646 Private; // offset: 0x0 ordinal: 0x1
} _MM_PAGE_ACCESS_INFO_FLAGS;

// 0x20 bytes (sizeof)
typedef struct _PERFINFO_GROUPMASK {
  ULONG Masks[8]; // offset: 0x0 ordinal: 0x0
} _PERFINFO_GROUPMASK;

// 0x18 bytes (sizeof)
typedef struct _OBJECT_DIRECTORY_ENTRY {
  struct _OBJECT_DIRECTORY_ENTRY *ChainLink; // offset: 0x0 ordinal: 0x0
  VOID *Object;                              // offset: 0x8 ordinal: 0x1
  ULONG HashValue;                           // offset: 0x10 ordinal: 0x2
} _OBJECT_DIRECTORY_ENTRY;

// 0x10 bytes (sizeof)
typedef struct _OBJECT_DUMP_CONTROL {
  VOID *Stream; // offset: 0x0 ordinal: 0x0
  ULONG Detail; // offset: 0x8 ordinal: 0x1
} _OBJECT_DUMP_CONTROL;

typedef VOID (*__anon_606)(VOID *, struct _OBJECT_DUMP_CONTROL *);

// 0x10 bytes (sizeof)
typedef struct _GENERIC_MAPPING {
  ULONG GenericRead;    // offset: 0x0 ordinal: 0x0
  ULONG GenericWrite;   // offset: 0x4 ordinal: 0x1
  ULONG GenericExecute; // offset: 0x8 ordinal: 0x2
  ULONG GenericAll;     // offset: 0xc ordinal: 0x3
} _GENERIC_MAPPING;

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

// 0x10 bytes (sizeof)
typedef struct _IO_PRIORITY_INFO {
  ULONG Size;                        // offset: 0x0 ordinal: 0x0
  ULONG ThreadPriority;              // offset: 0x4 ordinal: 0x1
  ULONG PagePriority;                // offset: 0x8 ordinal: 0x2
  enum _IO_PRIORITY_HINT IoPriority; // offset: 0xc ordinal: 0x3
} _IO_PRIORITY_INFO;

// 0xc bytes (sizeof)
typedef struct __anon_577 {
  ULONG DataSize;  // offset: 0x0 ordinal: 0x0
  ULONG Reserved1; // offset: 0x4 ordinal: 0x1
  ULONG Reserved2; // offset: 0x8 ordinal: 0x2
} __anon_577;

// 0xc bytes (sizeof)
typedef struct __anon_576 {
  ULONG Start;    // offset: 0x0 ordinal: 0x0
  ULONG Length;   // offset: 0x4 ordinal: 0x1
  ULONG Reserved; // offset: 0x8 ordinal: 0x2
} __anon_576;

// 0xc bytes (sizeof)
typedef struct __anon_575 {
  ULONG Channel;   // offset: 0x0 ordinal: 0x0
  ULONG Port;      // offset: 0x4 ordinal: 0x1
  ULONG Reserved1; // offset: 0x8 ordinal: 0x2
} __anon_575;

// 0xc bytes (sizeof)
typedef struct __anon_565 {
  ULONG Priority;  // offset: 0x0 ordinal: 0x0
  ULONG Reserved1; // offset: 0x4 ordinal: 0x1
  ULONG Reserved2; // offset: 0x8 ordinal: 0x2
} __anon_565;

// 0x10 bytes (sizeof)
typedef struct __anon_564 {
  ULONG Length;       // offset: 0x0 ordinal: 0x0
  ULONG MinBusNumber; // offset: 0x4 ordinal: 0x1
  ULONG MaxBusNumber; // offset: 0x8 ordinal: 0x2
  ULONG Reserved;     // offset: 0xc ordinal: 0x3
} __anon_564;

// 0x8 bytes (sizeof)
typedef struct __anon_562 {
  ULONG MinimumChannel; // offset: 0x0 ordinal: 0x0
  ULONG MaximumChannel; // offset: 0x4 ordinal: 0x1
} __anon_562;

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

// 0x18 bytes (sizeof)
typedef struct _RTL_DRIVE_LETTER_CURDIR {
  USHORT Flags;           // offset: 0x0 ordinal: 0x0
  USHORT Length;          // offset: 0x2 ordinal: 0x1
  ULONG TimeStamp;        // offset: 0x4 ordinal: 0x2
  struct _STRING DosPath; // offset: 0x8 ordinal: 0x3
} _RTL_DRIVE_LETTER_CURDIR;

// 0x4 bytes (sizeof)
typedef struct _HANDLE_TABLE_ENTRY_INFO {
  ULONG AuditMask; // offset: 0x0 ordinal: 0x0
} _HANDLE_TABLE_ENTRY_INFO;

// 0xa0 bytes (sizeof)
typedef struct _HANDLE_TRACE_DB_ENTRY {
  struct _CLIENT_ID ClientId; // offset: 0x0 ordinal: 0x0
  VOID *Handle;               // offset: 0x10 ordinal: 0x1
  ULONG Type;                 // offset: 0x18 ordinal: 0x2
  VOID *StackTrace[16];       // offset: 0x20 ordinal: 0x3
} _HANDLE_TRACE_DB_ENTRY;

// 0x8 bytes (sizeof)
typedef struct __anon_528 {
  enum _FS_FILTER_SECTION_SYNC_TYPE SyncType; // offset: 0x0 ordinal: 0x0
  ULONG PageProtection;                       // offset: 0x4 ordinal: 0x1
} __anon_528;

// 0x4 bytes (sizeof)
typedef struct _MMWSLE_HASH {
  ULONG Index; // offset: 0x0 ordinal: 0x0
} _MMWSLE_HASH;

// 0x10 bytes (sizeof)
typedef struct _MMWSLE_NONDIRECT_HASH {
  VOID *Key;   // offset: 0x0 ordinal: 0x0
  ULONG Index; // offset: 0x8 ordinal: 0x1
} _MMWSLE_NONDIRECT_HASH;

// 0xc bytes (sizeof)
typedef struct _POWER_SEQUENCE {
  ULONG SequenceD1; // offset: 0x0 ordinal: 0x0
  ULONG SequenceD2; // offset: 0x4 ordinal: 0x1
  ULONG SequenceD3; // offset: 0x8 ordinal: 0x2
} _POWER_SEQUENCE;

// 0x8 bytes (sizeof)
typedef struct __anon_430 {
  struct _POWER_SEQUENCE *PowerSequence; // offset: 0x0 ordinal: 0x0
} __anon_430;

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
typedef struct __anon_422 {
  struct _DEVICE_CAPABILITIES *Capabilities; // offset: 0x0 ordinal: 0x0
} __anon_422;

// 0x20 bytes (sizeof)
typedef struct __anon_421 {
  struct _GUID *InterfaceType;  // offset: 0x0 ordinal: 0x0
  USHORT Size;                  // offset: 0x8 ordinal: 0x1
  USHORT Version;               // offset: 0xa ordinal: 0x2
  struct _INTERFACE *Interface; // offset: 0x10 ordinal: 0x3
  VOID *InterfaceSpecificData;  // offset: 0x18 ordinal: 0x4
} __anon_421;

// 0x10 bytes (sizeof)
typedef struct _PEB_FREE_BLOCK {
  struct _PEB_FREE_BLOCK *Next; // offset: 0x0 ordinal: 0x0
  ULONG Size;                   // offset: 0x8 ordinal: 0x1
} _PEB_FREE_BLOCK;

// 0x3f8 bytes (sizeof)
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
  ULONGLONG EnvironmentSize; // offset: 0x3f0 ordinal: 0x1c
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

// 0x4 bytes (sizeof)
typedef struct _SYSTEM_POWER_STATE_CONTEXT {
  ULONG Reserved1 : 8;             // offset: 0x0 ordinal: 0x0
  ULONG TargetSystemState : 4;     // offset: 0x0 ordinal: 0x1
  ULONG EffectiveSystemState : 4;  // offset: 0x0 ordinal: 0x2
  ULONG CurrentSystemState : 4;    // offset: 0x0 ordinal: 0x3
  ULONG IgnoreHibernationPath : 1; // offset: 0x0 ordinal: 0x4
  ULONG Reserved2 : 11;            // offset: 0x0 ordinal: 0x5
  ULONG ContextAsUlong;            // offset: 0x0 ordinal: 0x6
} _SYSTEM_POWER_STATE_CONTEXT;

// 0x20 bytes (sizeof)
typedef struct __anon_431 {
  union {
    ULONG SystemContext; // offset: 0x0 ordinal: 0x0
    struct _SYSTEM_POWER_STATE_CONTEXT
        SystemPowerStateContext; // offset: 0x0 ordinal: 0x1
  };
  enum _POWER_STATE_TYPE Type;    // offset: 0x8 ordinal: 0x2
  union _POWER_STATE State;       // offset: 0x10 ordinal: 0x3
  enum POWER_ACTION ShutdownType; // offset: 0x18 ordinal: 0x4
} __anon_431;

// 0x10 bytes (sizeof)
typedef struct __anon_427 {
  enum DEVICE_TEXT_TYPE DeviceTextType; // offset: 0x0 ordinal: 0x0
  ULONG LocaleId;                       // offset: 0x8 ordinal: 0x1
} __anon_427;

// 0x20 bytes (sizeof)
typedef struct __anon_424 {
  ULONG WhichSpace; // offset: 0x0 ordinal: 0x0
  VOID *Buffer;     // offset: 0x8 ordinal: 0x1
  ULONG Offset;     // offset: 0x10 ordinal: 0x2
  ULONG Length;     // offset: 0x18 ordinal: 0x3
} __anon_424;

// 0x10 bytes (sizeof)
typedef struct __anon_416 {
  ULONG SecurityInformation; // offset: 0x0 ordinal: 0x0
  VOID *SecurityDescriptor;  // offset: 0x8 ordinal: 0x1
} __anon_416;

// 0x10 bytes (sizeof)
typedef struct __anon_415 {
  ULONG SecurityInformation; // offset: 0x0 ordinal: 0x0
  ULONG Length;              // offset: 0x8 ordinal: 0x1
} __anon_415;

// 0x20 bytes (sizeof)
typedef struct __anon_414 {
  ULONG OutputBufferLength; // offset: 0x0 ordinal: 0x0
  ULONG InputBufferLength;  // offset: 0x8 ordinal: 0x1
  ULONG IoControlCode;      // offset: 0x10 ordinal: 0x2
  VOID *Type3InputBuffer;   // offset: 0x18 ordinal: 0x3
} __anon_414;

// 0x20 bytes (sizeof)
typedef struct __anon_412 {
  ULONG OutputBufferLength; // offset: 0x0 ordinal: 0x0
  ULONG InputBufferLength;  // offset: 0x8 ordinal: 0x1
  ULONG FsControlCode;      // offset: 0x10 ordinal: 0x2
  VOID *Type3InputBuffer;   // offset: 0x18 ordinal: 0x3
} __anon_412;

// 0x10 bytes (sizeof)
typedef struct __anon_411 {
  ULONG Length;                         // offset: 0x0 ordinal: 0x0
  enum _FSINFOCLASS FsInformationClass; // offset: 0x8 ordinal: 0x1
} __anon_411;

// 0x4 bytes (sizeof)
typedef struct __anon_410 {
  ULONG Length; // offset: 0x0 ordinal: 0x0
} __anon_410;

// 0x20 bytes (sizeof)
typedef struct __anon_409 {
  ULONG Length;       // offset: 0x0 ordinal: 0x0
  VOID *EaList;       // offset: 0x8 ordinal: 0x1
  ULONG EaListLength; // offset: 0x10 ordinal: 0x2
  ULONG EaIndex;      // offset: 0x18 ordinal: 0x3
} __anon_409;

// 0x20 bytes (sizeof)
typedef struct __anon_408 {
  ULONG Length;                                      // offset: 0x0 ordinal: 0x0
  enum _FILE_INFORMATION_CLASS FileInformationClass; // offset: 0x8 ordinal: 0x1
  struct _FILE_OBJECT *FileObject; // offset: 0x10 ordinal: 0x2
  UCHAR ReplaceIfExists;           // offset: 0x18 ordinal: 0x3
  UCHAR AdvanceOnly;               // offset: 0x19 ordinal: 0x4
  union {
    ULONG ClusterCount; // offset: 0x18 ordinal: 0x5
    VOID *DeleteHandle; // offset: 0x18 ordinal: 0x6
  };
} __anon_408;

// 0x10 bytes (sizeof)
typedef struct __anon_407 {
  ULONG Length;                                      // offset: 0x0 ordinal: 0x0
  enum _FILE_INFORMATION_CLASS FileInformationClass; // offset: 0x8 ordinal: 0x1
} __anon_407;

// 0x10 bytes (sizeof)
typedef struct __anon_406 {
  ULONG Length;           // offset: 0x0 ordinal: 0x0
  ULONG CompletionFilter; // offset: 0x8 ordinal: 0x1
} __anon_406;

// 0x20 bytes (sizeof)
typedef struct __anon_405 {
  ULONG Length;                     // offset: 0x0 ordinal: 0x0
  struct _UNICODE_STRING *FileName; // offset: 0x8 ordinal: 0x1
  enum _FILE_INFORMATION_CLASS
      FileInformationClass; // offset: 0x10 ordinal: 0x2
  ULONG FileIndex;          // offset: 0x18 ordinal: 0x3
} __anon_405;

// 0x8 bytes (sizeof)
typedef struct _CM_INDEX_HINT_BLOCK {
  ULONG Count;      // offset: 0x0 ordinal: 0x0
  ULONG HashKey[1]; // offset: 0x4 ordinal: 0x1
} _CM_INDEX_HINT_BLOCK;

// 0x8 bytes (sizeof)
typedef struct _CM_KEY_INDEX {
  USHORT Signature; // offset: 0x0 ordinal: 0x0
  USHORT Count;     // offset: 0x2 ordinal: 0x1
  ULONG List[1];    // offset: 0x4 ordinal: 0x2
} _CM_KEY_INDEX;

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
typedef struct __anon_419 {
  ULONG Length;                                // offset: 0x0 ordinal: 0x0
  VOID *StartSid;                              // offset: 0x8 ordinal: 0x1
  struct _FILE_GET_QUOTA_INFORMATION *SidList; // offset: 0x10 ordinal: 0x2
  ULONG SidListLength;                         // offset: 0x18 ordinal: 0x3
} __anon_419;

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

// 0x20 bytes (sizeof)
typedef struct _POWER_CHANNEL_SUMMARY {
  ULONG Signature;               // offset: 0x0 ordinal: 0x0
  ULONG TotalCount;              // offset: 0x4 ordinal: 0x1
  ULONG D0Count;                 // offset: 0x8 ordinal: 0x2
  struct _LIST_ENTRY NotifyList; // offset: 0x10 ordinal: 0x3
} _POWER_CHANNEL_SUMMARY;

// 0x88 bytes (sizeof)
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
  ULONG PreviousIdleCount;   // offset: 0x80 ordinal: 0xb
} _DEVICE_OBJECT_POWER_EXTENSION;

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
  WCHAR VolumeLabel[32];               // offset: 0x20 ordinal: 0x8
} _VPB;

// 0x10 bytes (sizeof)
typedef struct __anon_417 {
  struct _VPB *Vpb;                    // offset: 0x0 ordinal: 0x0
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x8 ordinal: 0x1
} __anon_417;

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

typedef ULONG (*__anon_215)(UCHAR);

// 0x4 bytes (sizeof)
typedef union __anon_200 {
  ULONG AsULONG;                // offset: 0x0 ordinal: 0x0
  ULONG UsingHypervisor : 1;    // offset: 0x0 ordinal: 0x1
  ULONG NoDomainAccounting : 1; // offset: 0x0 ordinal: 0x2
  ULONG IncreasePolicy : 2;     // offset: 0x0 ordinal: 0x3
  ULONG DecreasePolicy : 2;     // offset: 0x0 ordinal: 0x4
  ULONG Reserved : 26;          // offset: 0x0 ordinal: 0x5
} __anon_200;

// 0x4 bytes (sizeof)
typedef union __anon_197 {
  ULONG AsULONG;          // offset: 0x0 ordinal: 0x0
  ULONG AllowScaling : 1; // offset: 0x0 ordinal: 0x1
  ULONG Disabled : 1;     // offset: 0x0 ordinal: 0x2
  ULONG Reserved : 30;    // offset: 0x0 ordinal: 0x3
} __anon_197;

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

// 0x48 bytes (sizeof)
typedef struct _ETW_REPLY_QUEUE {
  struct _KQUEUE Queue; // offset: 0x0 ordinal: 0x0
  LONG EventsLost;      // offset: 0x40 ordinal: 0x1
} _ETW_REPLY_QUEUE;

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
typedef struct __anon_292 {
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
} __anon_292;

// 0x58 bytes (sizeof)
typedef union __anon_278 {
  struct __anon_292 Overlay; // offset: 0x0 ordinal: 0x0
  struct _KAPC Apc;          // offset: 0x0 ordinal: 0x1
  VOID *CompletionKey;       // offset: 0x0 ordinal: 0x2
} __anon_278;

typedef VOID (*__anon_207)(struct _KAPC *);

typedef VOID (*__anon_206)(struct _KAPC *, VOID (**)(VOID *, VOID *, VOID *),
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
typedef struct __anon_563 {
  ULONG Data[3]; // offset: 0x0 ordinal: 0x0
} __anon_563;

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
typedef struct _LUID {
  ULONG LowPart; // offset: 0x0 ordinal: 0x0
  LONG HighPart; // offset: 0x4 ordinal: 0x1
} _LUID;

// 0x50 bytes (sizeof)
typedef struct _SEP_LOGON_SESSION_REFERENCES {
  struct _SEP_LOGON_SESSION_REFERENCES *Next; // offset: 0x0 ordinal: 0x0
  struct _LUID LogonId;                       // offset: 0x8 ordinal: 0x1
  struct _LUID BuddyLogonId;                  // offset: 0x10 ordinal: 0x2
  ULONG ReferenceCount;                       // offset: 0x18 ordinal: 0x3
  ULONG Flags;                                // offset: 0x1c ordinal: 0x4
  struct _DEVICE_MAP *pDeviceMap;             // offset: 0x20 ordinal: 0x5
  VOID *Token;                                // offset: 0x28 ordinal: 0x6
  struct _UNICODE_STRING AccountName;         // offset: 0x30 ordinal: 0x7
  struct _UNICODE_STRING AuthorityName;       // offset: 0x40 ordinal: 0x8
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
typedef union __anon_548 {
  struct _INITIAL_PRIVILEGE_SET InitialPrivilegeSet; // offset: 0x0 ordinal: 0x0
  struct _PRIVILEGE_SET PrivilegeSet;                // offset: 0x0 ordinal: 0x1
} __anon_548;

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
  union __anon_548 Privileges;           // offset: 0x50 ordinal: 0xc
  UCHAR AuditPrivileges;                 // offset: 0x7c ordinal: 0xd
  struct _UNICODE_STRING ObjectName;     // offset: 0x80 ordinal: 0xe
  struct _UNICODE_STRING ObjectTypeName; // offset: 0x90 ordinal: 0xf
} _ACCESS_STATE;

typedef LONG (*__anon_609)(VOID *, VOID *, struct _ACCESS_STATE *, CHAR, ULONG,
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
typedef struct __anon_401 {
  struct _IO_SECURITY_CONTEXT *SecurityContext; // offset: 0x0 ordinal: 0x0
  ULONG Options;                                // offset: 0x8 ordinal: 0x1
  USHORT FileAttributes;                        // offset: 0x10 ordinal: 0x2
  USHORT ShareAccess;                           // offset: 0x12 ordinal: 0x3
  ULONG EaLength;                               // offset: 0x18 ordinal: 0x4
} __anon_401;

// 0x50 bytes (sizeof)
typedef struct _PLUGPLAY_EVENT_BLOCK {
  struct _GUID EventGuid;                      // offset: 0x0 ordinal: 0x0
  enum _PLUGPLAY_EVENT_CATEGORY EventCategory; // offset: 0x10 ordinal: 0x1
  ULONG *Result;                               // offset: 0x18 ordinal: 0x2
  ULONG Flags;                                 // offset: 0x20 ordinal: 0x3
  ULONG TotalSize;                             // offset: 0x24 ordinal: 0x4
  VOID *DeviceObject;                          // offset: 0x28 ordinal: 0x5
  union __anon_1481 u;                         // offset: 0x30 ordinal: 0x6
} _PLUGPLAY_EVENT_BLOCK;

// 0x90 bytes (sizeof)
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

// 0x38 bytes (sizeof)
typedef struct _HEAP_LIST_LOOKUP {
  struct _HEAP_LIST_LOOKUP *ExtendedLookup; // offset: 0x0 ordinal: 0x0
  ULONG ArraySize;                          // offset: 0x8 ordinal: 0x1
  ULONG ExtraItem;                          // offset: 0xc ordinal: 0x2
  ULONG ItemCount;                          // offset: 0x10 ordinal: 0x3
  ULONG OutOfRangeItems;                    // offset: 0x14 ordinal: 0x4
  ULONG BaseIndex;                          // offset: 0x18 ordinal: 0x5
  struct _LIST_ENTRY *ListHead;             // offset: 0x20 ordinal: 0x6
  ULONG *ListsInUseUlong;                   // offset: 0x28 ordinal: 0x7
  struct _LIST_ENTRY **ListHints;           // offset: 0x30 ordinal: 0x8
} _HEAP_LIST_LOOKUP;

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

typedef LONG (*__anon_611)(VOID *, UCHAR, struct _OBJECT_NAME_INFORMATION *,
                           ULONG, ULONG *, CHAR);

typedef LONG (*__anon_610)(VOID *, enum _SECURITY_OPERATION_CODE, ULONG *,
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

// 0x4 bytes (sizeof)
typedef struct __anon_15 {
  ULONG LongFunction : 1; // offset: 0x0 ordinal: 0x0
  ULONG Private : 31;     // offset: 0x0 ordinal: 0x1
} __anon_15;

// 0x4 bytes (sizeof)
typedef union __anon_16 {
  ULONG Flags;        // offset: 0x0 ordinal: 0x0
  struct __anon_15 s; // offset: 0x0 ordinal: 0x1
} __anon_16;

// 0x40 bytes (sizeof)
typedef struct _TP_CALLBACK_ENVIRON {
  ULONG Version;                          // offset: 0x0 ordinal: 0x0
  struct _TP_POOL *Pool;                  // offset: 0x8 ordinal: 0x1
  struct _TP_CLEANUP_GROUP *CleanupGroup; // offset: 0x10 ordinal: 0x2
  VOID(*CleanupGroupCancelCallback)
  (VOID *, VOID *);                              // offset: 0x18 ordinal: 0x3
  VOID *RaceDll;                                 // offset: 0x20 ordinal: 0x4
  struct _ACTIVATION_CONTEXT *ActivationContext; // offset: 0x28 ordinal: 0x5
  VOID(*FinalizationCallback)
  (struct _TP_CALLBACK_INSTANCE *, VOID *); // offset: 0x30 ordinal: 0x6
  union __anon_16 u;                        // offset: 0x38 ordinal: 0x7
} _TP_CALLBACK_ENVIRON;

// 0x8 bytes (sizeof)
typedef struct __anon_7 {
  ULONG LowPart; // offset: 0x0 ordinal: 0x0
  LONG HighPart; // offset: 0x4 ordinal: 0x1
} __anon_7;

// 0x8 bytes (sizeof)
typedef union _LARGE_INTEGER {
  ULONG LowPart;     // offset: 0x0 ordinal: 0x0
  LONG HighPart;     // offset: 0x4 ordinal: 0x1
  struct __anon_7 u; // offset: 0x0 ordinal: 0x2
  LONGLONG QuadPart; // offset: 0x0 ordinal: 0x3
} _LARGE_INTEGER;

// 0x38 bytes (sizeof)
typedef struct _OBJECT_SYMBOLIC_LINK {
  union _LARGE_INTEGER CreationTime;          // offset: 0x0 ordinal: 0x0
  struct _UNICODE_STRING LinkTarget;          // offset: 0x8 ordinal: 0x1
  struct _UNICODE_STRING LinkTargetRemaining; // offset: 0x18 ordinal: 0x2
  VOID *LinkTargetObject;                     // offset: 0x28 ordinal: 0x3
  ULONG DosDeviceDriveIndex;                  // offset: 0x30 ordinal: 0x4
} _OBJECT_SYMBOLIC_LINK;

typedef UCHAR (*__anon_1380)(union _LARGE_INTEGER);

// 0x40 bytes (sizeof)
typedef struct _SEGMENT_OBJECT {
  VOID *BaseAddress;                             // offset: 0x0 ordinal: 0x0
  ULONG TotalNumberOfPtes;                       // offset: 0x8 ordinal: 0x1
  union _LARGE_INTEGER SizeOfSegment;            // offset: 0x10 ordinal: 0x2
  ULONG NonExtendedPtes;                         // offset: 0x18 ordinal: 0x3
  ULONG ImageCommitment;                         // offset: 0x1c ordinal: 0x4
  struct _CONTROL_AREA *ControlArea;             // offset: 0x20 ordinal: 0x5
  struct _SUBSECTION *Subsection;                // offset: 0x28 ordinal: 0x6
  struct _MMSECTION_FLAGS *MmSectionFlags;       // offset: 0x30 ordinal: 0x7
  struct _MMSUBSECTION_FLAGS *MmSubSectionFlags; // offset: 0x38 ordinal: 0x8
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

// 0x20 bytes (sizeof)
typedef struct _SYSTEM_TRACE_HEADER {
  union {
    ULONG Marker;   // offset: 0x0 ordinal: 0x0
    USHORT Version; // offset: 0x0 ordinal: 0x1
  };
  UCHAR HeaderType; // offset: 0x2 ordinal: 0x2
  UCHAR Flags;      // offset: 0x3 ordinal: 0x3
  union {
    ULONG Header;                    // offset: 0x4 ordinal: 0x4
    struct _WMI_TRACE_PACKET Packet; // offset: 0x4 ordinal: 0x5
  };
  ULONG ThreadId;                  // offset: 0x8 ordinal: 0x6
  ULONG ProcessId;                 // offset: 0xc ordinal: 0x7
  union _LARGE_INTEGER SystemTime; // offset: 0x10 ordinal: 0x8
  ULONG KernelTime;                // offset: 0x18 ordinal: 0x9
  ULONG UserTime;                  // offset: 0x1c ordinal: 0xa
} _SYSTEM_TRACE_HEADER;

// 0x10 bytes (sizeof)
typedef struct _ETW_REF_CLOCK {
  union _LARGE_INTEGER StartTime;      // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER StartPerfClock; // offset: 0x8 ordinal: 0x1
} _ETW_REF_CLOCK;

// 0x8 bytes (sizeof)
typedef union __anon_1054 {
  union _LARGE_INTEGER FileOffset; // offset: 0x0 ordinal: 0x0
  USHORT ActiveCount;              // offset: 0x0 ordinal: 0x1
} __anon_1054;

typedef VOID (*__anon_1050)(VOID *, union _LARGE_INTEGER);

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
  struct _GUID RmId;              // offset: 0x70 ordinal: 0xc
  struct _GUID LogId;             // offset: 0x80 ordinal: 0xd
  ULONG Flags;                    // offset: 0x90 ordinal: 0xe
  struct _GUID TmId;              // offset: 0x94 ordinal: 0xf
  ULONG GuidSignature;            // offset: 0xa4 ordinal: 0x10
  ULONG Reserved1[85];            // offset: 0xa8 ordinal: 0x11
  ULONG CheckSum;                 // offset: 0x1fc ordinal: 0x12
  ULONG Reserved2[882];           // offset: 0x200 ordinal: 0x13
  struct _GUID ThawTmId;          // offset: 0xfc8 ordinal: 0x14
  struct _GUID ThawRmId;          // offset: 0xfd8 ordinal: 0x15
  struct _GUID ThawLogId;         // offset: 0xfe8 ordinal: 0x16
  ULONG BootType;                 // offset: 0xff8 ordinal: 0x17
  ULONG BootRecover;              // offset: 0xffc ordinal: 0x18
} _HBASE_BLOCK;

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

// 0x590 bytes (sizeof)
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
  UCHAR DirtyFlag;                // offset: 0x72 ordinal: 0x11
  ULONG HvBinHeadersUse;          // offset: 0x74 ordinal: 0x12
  ULONG HvFreeCellsUse;           // offset: 0x78 ordinal: 0x13
  ULONG HvUsedCellsUse;           // offset: 0x7c ordinal: 0x14
  ULONG CmUsedCellsUse;           // offset: 0x80 ordinal: 0x15
  ULONG HiveFlags;                // offset: 0x84 ordinal: 0x16
  ULONG CurrentLog;               // offset: 0x88 ordinal: 0x17
  ULONG LogSize[2];               // offset: 0x8c ordinal: 0x18
  ULONG RefreshCount;             // offset: 0x94 ordinal: 0x19
  ULONG StorageTypeCount;         // offset: 0x98 ordinal: 0x1a
  ULONG Version;                  // offset: 0x9c ordinal: 0x1b
  struct _DUAL Storage[2];        // offset: 0xa0 ordinal: 0x1c
} _HHIVE;

// 0x20 bytes (sizeof)
typedef struct _CM_KEY_HASH {
  ULONG ConvKey;                 // offset: 0x0 ordinal: 0x0
  struct _CM_KEY_HASH *NextHash; // offset: 0x8 ordinal: 0x1
  struct _HHIVE *KeyHive;        // offset: 0x10 ordinal: 0x2
  ULONG KeyCell;                 // offset: 0x18 ordinal: 0x3
} _CM_KEY_HASH;

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
  WCHAR Name[1];                               // offset: 0x4c ordinal: 0x15
} _CM_KEY_NODE;

// 0x50 bytes (sizeof)
typedef union _u {
  struct _CM_KEY_NODE KeyNode;         // offset: 0x0 ordinal: 0x0
  struct _CM_KEY_VALUE KeyValue;       // offset: 0x0 ordinal: 0x1
  struct _CM_KEY_SECURITY KeySecurity; // offset: 0x0 ordinal: 0x2
  struct _CM_KEY_INDEX KeyIndex;       // offset: 0x0 ordinal: 0x3
  struct _CM_BIG_DATA ValueData;       // offset: 0x0 ordinal: 0x4
  ULONG KeyList[1];                    // offset: 0x0 ordinal: 0x5
  WCHAR KeyString[1];                  // offset: 0x0 ordinal: 0x6
} _u;

// 0x50 bytes (sizeof)
typedef struct _CELL_DATA {
  union _u u; // offset: 0x0 ordinal: 0x0
} _CELL_DATA;

typedef UCHAR (*__anon_814)(struct _HHIVE *, ULONG, ULONG *, VOID *, ULONG);

typedef UCHAR (*__anon_813)(struct _HHIVE *, ULONG, struct CMP_OFFSET_ARRAY *,
                            ULONG, ULONG *);

typedef UCHAR (*__anon_812)(struct _HHIVE *, ULONG, ULONG, ULONG);

typedef VOID (*__anon_809)(struct _HHIVE *, ULONG);

typedef struct _CELL_DATA *(*__anon_808)(struct _HHIVE *, ULONG);

// 0x10 bytes (sizeof)
typedef struct _ETW_KERNEL_TRACE_TIMESTAMP {
  union _LARGE_INTEGER KernelTraceTimeStamp[2]; // offset: 0x0 ordinal: 0x0
} _ETW_KERNEL_TRACE_TIMESTAMP;

// 0x20 bytes (sizeof)
typedef struct _PERFINFO_HARDPAGEFAULT_INFORMATION {
  union _LARGE_INTEGER ReadOffset; // offset: 0x0 ordinal: 0x0
  VOID *VirtualAddress;            // offset: 0x8 ordinal: 0x1
  VOID *FileObject;                // offset: 0x10 ordinal: 0x2
  ULONG ThreadId;                  // offset: 0x18 ordinal: 0x3
  ULONG ByteCount;                 // offset: 0x1c ordinal: 0x4
} _PERFINFO_HARDPAGEFAULT_INFORMATION;

// 0x38 bytes (sizeof)
typedef struct _PF_HARD_FAULT_INFO {
  struct _ETW_KERNEL_TRACE_TIMESTAMP
      KernelTimeStamp; // offset: 0x0 ordinal: 0x0
  struct _PERFINFO_HARDPAGEFAULT_INFORMATION
      HardFaultEvent;                 // offset: 0x10 ordinal: 0x1
  union _LARGE_INTEGER IoTimeInTicks; // offset: 0x30 ordinal: 0x2
} _PF_HARD_FAULT_INFO;

// 0xc bytes (sizeof)
typedef struct __anon_580 {
  union _LARGE_INTEGER Start; // offset: 0x0 ordinal: 0x0
  ULONG Length64;             // offset: 0x8 ordinal: 0x1
} __anon_580;

// 0xc bytes (sizeof)
typedef struct __anon_579 {
  union _LARGE_INTEGER Start; // offset: 0x0 ordinal: 0x0
  ULONG Length48;             // offset: 0x8 ordinal: 0x1
} __anon_579;

// 0xc bytes (sizeof)
typedef struct __anon_578 {
  union _LARGE_INTEGER Start; // offset: 0x0 ordinal: 0x0
  ULONG Length40;             // offset: 0x8 ordinal: 0x1
} __anon_578;

// 0xc bytes (sizeof)
typedef struct __anon_572 {
  union _LARGE_INTEGER Start; // offset: 0x0 ordinal: 0x0
  ULONG Length;               // offset: 0x8 ordinal: 0x1
} __anon_572;

// 0x18 bytes (sizeof)
typedef struct __anon_568 {
  ULONG Length64;                      // offset: 0x0 ordinal: 0x0
  ULONG Alignment64;                   // offset: 0x4 ordinal: 0x1
  union _LARGE_INTEGER MinimumAddress; // offset: 0x8 ordinal: 0x2
  union _LARGE_INTEGER MaximumAddress; // offset: 0x10 ordinal: 0x3
} __anon_568;

// 0x18 bytes (sizeof)
typedef struct __anon_567 {
  ULONG Length48;                      // offset: 0x0 ordinal: 0x0
  ULONG Alignment48;                   // offset: 0x4 ordinal: 0x1
  union _LARGE_INTEGER MinimumAddress; // offset: 0x8 ordinal: 0x2
  union _LARGE_INTEGER MaximumAddress; // offset: 0x10 ordinal: 0x3
} __anon_567;

// 0x18 bytes (sizeof)
typedef struct __anon_566 {
  ULONG Length40;                      // offset: 0x0 ordinal: 0x0
  ULONG Alignment40;                   // offset: 0x4 ordinal: 0x1
  union _LARGE_INTEGER MinimumAddress; // offset: 0x8 ordinal: 0x2
  union _LARGE_INTEGER MaximumAddress; // offset: 0x10 ordinal: 0x3
} __anon_566;

// 0x18 bytes (sizeof)
typedef struct __anon_560 {
  ULONG Length;                        // offset: 0x0 ordinal: 0x0
  ULONG Alignment;                     // offset: 0x4 ordinal: 0x1
  union _LARGE_INTEGER MinimumAddress; // offset: 0x8 ordinal: 0x2
  union _LARGE_INTEGER MaximumAddress; // offset: 0x10 ordinal: 0x3
} __anon_560;

// 0x18 bytes (sizeof)
typedef struct _MAILSLOT_CREATE_PARAMETERS {
  ULONG MailslotQuota;              // offset: 0x0 ordinal: 0x0
  ULONG MaximumMessageSize;         // offset: 0x4 ordinal: 0x1
  union _LARGE_INTEGER ReadTimeout; // offset: 0x8 ordinal: 0x2
  UCHAR TimeoutSpecified;           // offset: 0x10 ordinal: 0x3
} _MAILSLOT_CREATE_PARAMETERS;

// 0x20 bytes (sizeof)
typedef struct __anon_403 {
  struct _IO_SECURITY_CONTEXT *SecurityContext;   // offset: 0x0 ordinal: 0x0
  ULONG Options;                                  // offset: 0x8 ordinal: 0x1
  USHORT Reserved;                                // offset: 0x10 ordinal: 0x2
  USHORT ShareAccess;                             // offset: 0x12 ordinal: 0x3
  struct _MAILSLOT_CREATE_PARAMETERS *Parameters; // offset: 0x18 ordinal: 0x4
} __anon_403;

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
typedef struct __anon_402 {
  struct _IO_SECURITY_CONTEXT *SecurityContext;     // offset: 0x0 ordinal: 0x0
  ULONG Options;                                    // offset: 0x8 ordinal: 0x1
  USHORT Reserved;                                  // offset: 0x10 ordinal: 0x2
  USHORT ShareAccess;                               // offset: 0x12 ordinal: 0x3
  struct _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // offset: 0x18 ordinal: 0x4
} __anon_402;

// 0x18 bytes (sizeof)
typedef struct __anon_404 {
  ULONG Length;                    // offset: 0x0 ordinal: 0x0
  ULONG Key;                       // offset: 0x8 ordinal: 0x1
  union _LARGE_INTEGER ByteOffset; // offset: 0x10 ordinal: 0x2
} __anon_404;

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

typedef LONG (*__anon_1383)(LONG, union _LARGE_INTEGER *, struct _MDL *,
                            VOID *);

typedef LONG (*__anon_1381)(union _LARGE_INTEGER *, struct _MDL *);

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
  union __anon_1378 DiskInfo; // offset: 0x8c ordinal: 0x12
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

typedef LONG (*__anon_914)(struct _KENLISTMENT *, VOID *, VOID *, ULONG,
                           union _LARGE_INTEGER *, ULONG, VOID *);

typedef UCHAR (*__anon_815)(struct _HHIVE *, ULONG, union _LARGE_INTEGER *,
                            ULONG);

// 0x18 bytes (sizeof)
typedef struct __anon_413 {
  union _LARGE_INTEGER *Length;    // offset: 0x0 ordinal: 0x0
  ULONG Key;                       // offset: 0x8 ordinal: 0x1
  union _LARGE_INTEGER ByteOffset; // offset: 0x10 ordinal: 0x2
} __anon_413;

typedef UCHAR (*__anon_347)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            struct _MDL *, struct _DEVICE_OBJECT *);

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

// 0x20 bytes (sizeof)
typedef struct _HEAP_USERDATA_HEADER {
  union {
    struct _SINGLE_LIST_ENTRY SFreeListEntry; // offset: 0x0 ordinal: 0x0
    struct _HEAP_SUBSEGMENT *SubSegment;      // offset: 0x0 ordinal: 0x1
  };
  VOID *Reserved;      // offset: 0x8 ordinal: 0x2
  ULONGLONG SizeIndex; // offset: 0x10 ordinal: 0x3
  ULONGLONG Signature; // offset: 0x18 ordinal: 0x4
} _HEAP_USERDATA_HEADER;

// 0x408 bytes (sizeof)
typedef struct _CALL_PERFORMANCE_DATA {
  ULONGLONG SpinLock;               // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY HashTable[64]; // offset: 0x8 ordinal: 0x1
} _CALL_PERFORMANCE_DATA;

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
typedef union _KGDTENTRY64 {
  USHORT LimitLow;          // offset: 0x0 ordinal: 0x0
  USHORT BaseLow;           // offset: 0x2 ordinal: 0x1
  struct __anon_1474 Bytes; // offset: 0x4 ordinal: 0x2
  struct __anon_1475 Bits;  // offset: 0x4 ordinal: 0x3
  ULONG BaseUpper;          // offset: 0x8 ordinal: 0x4
  ULONG MustBeZero;         // offset: 0xc ordinal: 0x5
  ULONGLONG Alignment;      // offset: 0x0 ordinal: 0x6
} _KGDTENTRY64;

// 0x8168 bytes (sizeof)
typedef struct _VI_DEADLOCK_GLOBALS {
  LONGLONG TimeAcquire;                 // offset: 0x0 ordinal: 0x0
  LONGLONG TimeRelease;                 // offset: 0x8 ordinal: 0x1
  struct _LIST_ENTRY *ResourceDatabase; // offset: 0x10 ordinal: 0x2
  ULONGLONG ResourceDatabaseCount;      // offset: 0x18 ordinal: 0x3
  struct _VI_DEADLOCK_ADDRESS_RANGE
      ResourceAddressRange[1023];     // offset: 0x20 ordinal: 0x4
  struct _LIST_ENTRY *ThreadDatabase; // offset: 0x4010 ordinal: 0x5
  ULONGLONG ThreadDatabaseCount;      // offset: 0x4018 ordinal: 0x6
  struct _VI_DEADLOCK_ADDRESS_RANGE
      ThreadAddressRange[1023];              // offset: 0x4020 ordinal: 0x7
  ULONG AllocationFailures;                  // offset: 0x8010 ordinal: 0x8
  ULONG NodesTrimmedBasedOnAge;              // offset: 0x8014 ordinal: 0x9
  ULONG NodesTrimmedBasedOnCount;            // offset: 0x8018 ordinal: 0xa
  ULONG NodesSearched;                       // offset: 0x801c ordinal: 0xb
  ULONG MaxNodesSearched;                    // offset: 0x8020 ordinal: 0xc
  ULONG SequenceNumber;                      // offset: 0x8024 ordinal: 0xd
  ULONG RecursionDepthLimit;                 // offset: 0x8028 ordinal: 0xe
  ULONG SearchedNodesLimit;                  // offset: 0x802c ordinal: 0xf
  ULONG DepthLimitHits;                      // offset: 0x8030 ordinal: 0x10
  ULONG SearchLimitHits;                     // offset: 0x8034 ordinal: 0x11
  ULONG ABC_ACB_Skipped;                     // offset: 0x8038 ordinal: 0x12
  ULONG OutOfOrderReleases;                  // offset: 0x803c ordinal: 0x13
  ULONG NodesReleasedOutOfOrder;             // offset: 0x8040 ordinal: 0x14
  ULONG TotalReleases;                       // offset: 0x8044 ordinal: 0x15
  ULONG RootNodesDeleted;                    // offset: 0x8048 ordinal: 0x16
  ULONG ForgetHistoryCounter;                // offset: 0x804c ordinal: 0x17
  VOID *Instigator;                          // offset: 0x8050 ordinal: 0x18
  ULONG NumberOfParticipants;                // offset: 0x8058 ordinal: 0x19
  struct _VI_DEADLOCK_NODE *Participant[32]; // offset: 0x8060 ordinal: 0x1a
  ULONG CacheReductionInProgress;            // offset: 0x8160 ordinal: 0x1b
} _VI_DEADLOCK_GLOBALS;

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
  ULONG OptionChanges;                      // offset: 0x78 ordinal: 0x1a
  ULONG VerifyMode;                         // offset: 0x7c ordinal: 0x1b
} _MM_DRIVER_VERIFIER_DATA;

// 0xff8 bytes (sizeof)
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
  UCHAR SpareBytes1[36];                // offset: 0x1ac ordinal: 0x12
  ULONG TxFsContext;                    // offset: 0x1d0 ordinal: 0x13
  struct _GDI_TEB_BATCH32 GdiTebBatch;  // offset: 0x1d4 ordinal: 0x14
  struct _CLIENT_ID32 RealClientId;     // offset: 0x6b4 ordinal: 0x15
  ULONG GdiCachedProcessHandle;         // offset: 0x6bc ordinal: 0x16
  ULONG GdiClientPID;                   // offset: 0x6c0 ordinal: 0x17
  ULONG GdiClientTID;                   // offset: 0x6c4 ordinal: 0x18
  ULONG GdiThreadLocalInfo;             // offset: 0x6c8 ordinal: 0x19
  ULONG Win32ClientInfo[62];            // offset: 0x6cc ordinal: 0x1a
  ULONG glDispatchTable[233];           // offset: 0x7c4 ordinal: 0x1b
  ULONG glReserved1[29];                // offset: 0xb68 ordinal: 0x1c
  ULONG glReserved2;                    // offset: 0xbdc ordinal: 0x1d
  ULONG glSectionInfo;                  // offset: 0xbe0 ordinal: 0x1e
  ULONG glSection;                      // offset: 0xbe4 ordinal: 0x1f
  ULONG glTable;                        // offset: 0xbe8 ordinal: 0x20
  ULONG glCurrentRC;                    // offset: 0xbec ordinal: 0x21
  ULONG glContext;                      // offset: 0xbf0 ordinal: 0x22
  ULONG LastStatusValue;                // offset: 0xbf4 ordinal: 0x23
  struct _STRING32 StaticUnicodeString; // offset: 0xbf8 ordinal: 0x24
  WCHAR StaticUnicodeBuffer[261];       // offset: 0xc00 ordinal: 0x25
  ULONG DeallocationStack;              // offset: 0xe0c ordinal: 0x26
  ULONG TlsSlots[64];                   // offset: 0xe10 ordinal: 0x27
  struct LIST_ENTRY32 TlsLinks;         // offset: 0xf10 ordinal: 0x28
  ULONG Vdm;                            // offset: 0xf18 ordinal: 0x29
  ULONG ReservedForNtRpc;               // offset: 0xf1c ordinal: 0x2a
  ULONG DbgSsReserved[2];               // offset: 0xf20 ordinal: 0x2b
  ULONG HardErrorMode;                  // offset: 0xf28 ordinal: 0x2c
  ULONG Instrumentation[9];             // offset: 0xf2c ordinal: 0x2d
  struct _GUID ActivityId;              // offset: 0xf50 ordinal: 0x2e
  ULONG SubProcessTag;                  // offset: 0xf60 ordinal: 0x2f
  ULONG EtwLocalData;                   // offset: 0xf64 ordinal: 0x30
  ULONG EtwTraceData;                   // offset: 0xf68 ordinal: 0x31
  ULONG WinSockData;                    // offset: 0xf6c ordinal: 0x32
  ULONG GdiBatchCount;                  // offset: 0xf70 ordinal: 0x33
  UCHAR SpareBool0;                     // offset: 0xf74 ordinal: 0x34
  UCHAR SpareBool1;                     // offset: 0xf75 ordinal: 0x35
  UCHAR SpareBool2;                     // offset: 0xf76 ordinal: 0x36
  UCHAR IdealProcessor;                 // offset: 0xf77 ordinal: 0x37
  ULONG GuaranteedStackBytes;           // offset: 0xf78 ordinal: 0x38
  ULONG ReservedForPerf;                // offset: 0xf7c ordinal: 0x39
  ULONG ReservedForOle;                 // offset: 0xf80 ordinal: 0x3a
  ULONG WaitingOnLoaderLock;            // offset: 0xf84 ordinal: 0x3b
  ULONG SavedPriorityState;             // offset: 0xf88 ordinal: 0x3c
  ULONG SoftPatchPtr1;                  // offset: 0xf8c ordinal: 0x3d
  ULONG ThreadPoolData;                 // offset: 0xf90 ordinal: 0x3e
  ULONG TlsExpansionSlots;              // offset: 0xf94 ordinal: 0x3f
  ULONG ImpersonationLocale;            // offset: 0xf98 ordinal: 0x40
  ULONG IsImpersonating;                // offset: 0xf9c ordinal: 0x41
  ULONG NlsCache;                       // offset: 0xfa0 ordinal: 0x42
  ULONG pShimData;                      // offset: 0xfa4 ordinal: 0x43
  ULONG HeapVirtualAffinity;            // offset: 0xfa8 ordinal: 0x44
  ULONG CurrentTransactionHandle;       // offset: 0xfac ordinal: 0x45
  ULONG ActiveFrame;                    // offset: 0xfb0 ordinal: 0x46
  ULONG FlsData;                        // offset: 0xfb4 ordinal: 0x47
  ULONG PreferredLanguages;             // offset: 0xfb8 ordinal: 0x48
  ULONG UserPrefLanguages;              // offset: 0xfbc ordinal: 0x49
  ULONG MergedPrefLanguages;            // offset: 0xfc0 ordinal: 0x4a
  ULONG MuiImpersonation;               // offset: 0xfc4 ordinal: 0x4b
  union {
    USHORT CrossTebFlags;          // offset: 0xfc8 ordinal: 0x4c
    USHORT SpareCrossTebBits : 16; // offset: 0xfc8 ordinal: 0x4d
  };
  union {
    USHORT SameTebFlags;         // offset: 0xfca ordinal: 0x4e
    USHORT DbgSafeThunkCall : 1; // offset: 0xfca ordinal: 0x4f
  };
  USHORT DbgInDebugPrint : 1;            // offset: 0xfca ordinal: 0x50
  USHORT DbgHasFiberData : 1;            // offset: 0xfca ordinal: 0x51
  USHORT DbgSkipThreadAttach : 1;        // offset: 0xfca ordinal: 0x52
  USHORT DbgWerInShipAssertCode : 1;     // offset: 0xfca ordinal: 0x53
  USHORT DbgRanProcessInit : 1;          // offset: 0xfca ordinal: 0x54
  USHORT DbgClonedThread : 1;            // offset: 0xfca ordinal: 0x55
  USHORT DbgSuppressDebugMsg : 1;        // offset: 0xfca ordinal: 0x56
  USHORT SpareSameTebBits : 8;           // offset: 0xfca ordinal: 0x57
  ULONG TxnScopeEnterCallback;           // offset: 0xfcc ordinal: 0x58
  ULONG TxnScopeExitCallback;            // offset: 0xfd0 ordinal: 0x59
  ULONG TxnScopeContext;                 // offset: 0xfd4 ordinal: 0x5a
  ULONG LockCount;                       // offset: 0xfd8 ordinal: 0x5b
  ULONG ProcessRundown;                  // offset: 0xfdc ordinal: 0x5c
  ULONGLONG LastSwitchTime;              // offset: 0xfe0 ordinal: 0x5d
  ULONGLONG TotalSwitchOutTime;          // offset: 0xfe8 ordinal: 0x5e
  union _LARGE_INTEGER WaitReasonBitMap; // offset: 0xff0 ordinal: 0x5f
} _TEB32;

// 0x20 bytes (sizeof)
typedef struct _MMPFNLIST {
  ULONGLONG Total;        // offset: 0x0 ordinal: 0x0
  enum _MMLISTS ListName; // offset: 0x8 ordinal: 0x1
  ULONGLONG Flink;        // offset: 0x10 ordinal: 0x2
  ULONGLONG Blink;        // offset: 0x18 ordinal: 0x3
} _MMPFNLIST;

// 0x38 bytes (sizeof)
typedef struct _RTLP_RANGE_LIST_ENTRY {
  ULONGLONG Start; // offset: 0x0 ordinal: 0x0
  ULONGLONG End;   // offset: 0x8 ordinal: 0x1
  union {
    struct __anon_1429 Allocated; // offset: 0x10 ordinal: 0x2
    struct __anon_1430 Merged;    // offset: 0x10 ordinal: 0x3
  };
  UCHAR Attributes;             // offset: 0x20 ordinal: 0x4
  UCHAR PublicFlags;            // offset: 0x21 ordinal: 0x5
  USHORT PrivateFlags;          // offset: 0x22 ordinal: 0x6
  struct _LIST_ENTRY ListEntry; // offset: 0x28 ordinal: 0x7
} _RTLP_RANGE_LIST_ENTRY;

// 0x10 bytes (sizeof)
typedef struct _MMVIEW {
  ULONGLONG Entry;                   // offset: 0x0 ordinal: 0x0
  ULONGLONG Writable : 1;            // offset: 0x8 ordinal: 0x1
  struct _CONTROL_AREA *ControlArea; // offset: 0x8 ordinal: 0x2
} _MMVIEW;

// 0x58 bytes (sizeof)
typedef struct _MMSESSION {
  struct _KGUARDED_MUTEX SystemSpaceViewLock; // offset: 0x0 ordinal: 0x0
  struct _KGUARDED_MUTEX
      *SystemSpaceViewLockPointer;      // offset: 0x38 ordinal: 0x1
  struct _MMVIEW *SystemSpaceViewTable; // offset: 0x40 ordinal: 0x2
  ULONG SystemSpaceHashSize;            // offset: 0x48 ordinal: 0x3
  ULONG SystemSpaceHashEntries;         // offset: 0x4c ordinal: 0x4
  ULONG SystemSpaceHashKey;             // offset: 0x50 ordinal: 0x5
  ULONG BitmapFailures;                 // offset: 0x54 ordinal: 0x6
} _MMSESSION;

// 0x80 bytes (sizeof)
typedef struct _VF_POOL_TRACE {
  VOID *Address;           // offset: 0x0 ordinal: 0x0
  ULONGLONG Size;          // offset: 0x8 ordinal: 0x1
  struct _ETHREAD *Thread; // offset: 0x10 ordinal: 0x2
  VOID *StackTrace[13];    // offset: 0x18 ordinal: 0x3
} _VF_POOL_TRACE;

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

// 0x60 bytes (sizeof)
typedef struct _PO_HIBER_PERF {
  ULONGLONG IoTicks;             // offset: 0x0 ordinal: 0x0
  ULONGLONG InitTicks;           // offset: 0x8 ordinal: 0x1
  ULONGLONG CopyTicks;           // offset: 0x10 ordinal: 0x2
  ULONGLONG StartCount;          // offset: 0x18 ordinal: 0x3
  ULONG ElapsedTime;             // offset: 0x20 ordinal: 0x4
  ULONG IoTime;                  // offset: 0x24 ordinal: 0x5
  ULONG CopyTime;                // offset: 0x28 ordinal: 0x6
  ULONG InitTime;                // offset: 0x2c ordinal: 0x7
  ULONG PagesWritten;            // offset: 0x30 ordinal: 0x8
  ULONG PagesProcessed;          // offset: 0x34 ordinal: 0x9
  ULONG BytesCopied;             // offset: 0x38 ordinal: 0xa
  ULONG DumpCount;               // offset: 0x3c ordinal: 0xb
  ULONG FileRuns;                // offset: 0x40 ordinal: 0xc
  ULONGLONG ResumeAppStartTime;  // offset: 0x48 ordinal: 0xd
  ULONGLONG ResumeAppEndTime;    // offset: 0x50 ordinal: 0xe
  ULONGLONG HiberFileResumeTime; // offset: 0x58 ordinal: 0xf
} _PO_HIBER_PERF;

// 0x2b8 bytes (sizeof)
typedef struct _POP_DEVICE_SYS_STATE {
  UCHAR IrpMinor;                        // offset: 0x0 ordinal: 0x0
  enum _SYSTEM_POWER_STATE SystemState;  // offset: 0x4 ordinal: 0x1
  ULONGLONG SpinLock;                    // offset: 0x8 ordinal: 0x2
  struct _KTHREAD *Thread;               // offset: 0x10 ordinal: 0x3
  struct _KEVENT *AbortEvent;            // offset: 0x18 ordinal: 0x4
  struct _KSEMAPHORE *ReadySemaphore;    // offset: 0x20 ordinal: 0x5
  struct _KSEMAPHORE *FinishedSemaphore; // offset: 0x28 ordinal: 0x6
  UCHAR GetNewDeviceList;                // offset: 0x30 ordinal: 0x7
  struct _PO_DEVICE_NOTIFY_ORDER Order;  // offset: 0x38 ordinal: 0x8
  LONG NotifyGdiLevelForPowerOn;         // offset: 0x288 ordinal: 0x9
  LONG NotifyGdiLevelForResumeUI;        // offset: 0x28c ordinal: 0xa
  struct _LIST_ENTRY Pending;            // offset: 0x290 ordinal: 0xb
  LONG Status;                           // offset: 0x2a0 ordinal: 0xc
  struct _DEVICE_OBJECT *FailedDevice;   // offset: 0x2a8 ordinal: 0xd
  UCHAR Waking;                          // offset: 0x2b0 ordinal: 0xe
  UCHAR Cancelled;                       // offset: 0x2b1 ordinal: 0xf
  UCHAR IgnoreErrors;                    // offset: 0x2b2 ordinal: 0x10
  UCHAR IgnoreNotImplemented;            // offset: 0x2b3 ordinal: 0x11
  UCHAR TimeRefreshLockAcquired;         // offset: 0x2b4 ordinal: 0x12
} _POP_DEVICE_SYS_STATE;

// 0x28 bytes (sizeof)
typedef struct _POP_SHUTDOWN_BUG_CHECK {
  ULONG Code;           // offset: 0x0 ordinal: 0x0
  ULONGLONG Parameter1; // offset: 0x8 ordinal: 0x1
  ULONGLONG Parameter2; // offset: 0x10 ordinal: 0x2
  ULONGLONG Parameter3; // offset: 0x18 ordinal: 0x3
  ULONGLONG Parameter4; // offset: 0x20 ordinal: 0x4
} _POP_SHUTDOWN_BUG_CHECK;

// 0x10 bytes (sizeof)
typedef struct _HEAP_ENTRY_EXTRA {
  USHORT AllocatorBackTraceIndex; // offset: 0x0 ordinal: 0x0
  USHORT TagIndex;                // offset: 0x2 ordinal: 0x1
  ULONGLONG Settable;             // offset: 0x8 ordinal: 0x2
  ULONGLONG ZeroInit;             // offset: 0x0 ordinal: 0x3
  ULONGLONG ZeroInit1;            // offset: 0x8 ordinal: 0x4
} _HEAP_ENTRY_EXTRA;

typedef LONG (*__anon_1333)(LONG, VOID *, VOID *, ULONGLONG, ULONG, VOID *);

// 0x30 bytes (sizeof)
typedef struct _HEAP_DEBUGGING_INFORMATION {
  VOID *InterceptorFunction;   // offset: 0x0 ordinal: 0x0
  USHORT InterceptorValue;     // offset: 0x8 ordinal: 0x1
  ULONG ExtendedOptions;       // offset: 0xc ordinal: 0x2
  ULONG StackTraceDepth;       // offset: 0x10 ordinal: 0x3
  ULONGLONG MinTotalBlockSize; // offset: 0x18 ordinal: 0x4
  ULONGLONG MaxTotalBlockSize; // offset: 0x20 ordinal: 0x5
  LONG(*HeapLeakEnumerationRoutine)
  (LONG, VOID *, VOID *, ULONGLONG, ULONG, VOID *); // offset: 0x28 ordinal: 0x6
} _HEAP_DEBUGGING_INFORMATION;

// 0x18 bytes (sizeof)
typedef struct _ARBITER_CONFLICT_INFO {
  struct _DEVICE_OBJECT *OwningObject; // offset: 0x0 ordinal: 0x0
  ULONGLONG Start;                     // offset: 0x8 ordinal: 0x1
  ULONGLONG End;                       // offset: 0x10 ordinal: 0x2
} _ARBITER_CONFLICT_INFO;

// 0x28 bytes (sizeof)
typedef struct _RTL_RANGE {
  ULONGLONG Start;  // offset: 0x0 ordinal: 0x0
  ULONGLONG End;    // offset: 0x8 ordinal: 0x1
  VOID *UserData;   // offset: 0x10 ordinal: 0x2
  VOID *Owner;      // offset: 0x18 ordinal: 0x3
  UCHAR Attributes; // offset: 0x20 ordinal: 0x4
  UCHAR Flags;      // offset: 0x21 ordinal: 0x5
} _RTL_RANGE;

typedef UCHAR (*__anon_1264)(VOID *, struct _RTL_RANGE *);

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

// 0x10 bytes (sizeof)
typedef struct _STRING64 {
  USHORT Length;        // offset: 0x0 ordinal: 0x0
  USHORT MaximumLength; // offset: 0x2 ordinal: 0x1
  ULONGLONG Buffer;     // offset: 0x8 ordinal: 0x2
} _STRING64;

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

// 0x28 bytes (sizeof)
typedef struct _POOL_TRACKER_TABLE {
  LONG Key;                // offset: 0x0 ordinal: 0x0
  LONG NonPagedAllocs;     // offset: 0x4 ordinal: 0x1
  LONG NonPagedFrees;      // offset: 0x8 ordinal: 0x2
  ULONGLONG NonPagedBytes; // offset: 0x10 ordinal: 0x3
  ULONG PagedAllocs;       // offset: 0x18 ordinal: 0x4
  ULONG PagedFrees;        // offset: 0x1c ordinal: 0x5
  ULONGLONG PagedBytes;    // offset: 0x20 ordinal: 0x6
} _POOL_TRACKER_TABLE;

// 0x30 bytes (sizeof)
typedef struct _HEAP_STOP_ON_VALUES {
  ULONGLONG AllocAddress;              // offset: 0x0 ordinal: 0x0
  struct _HEAP_STOP_ON_TAG AllocTag;   // offset: 0x8 ordinal: 0x1
  ULONGLONG ReAllocAddress;            // offset: 0x10 ordinal: 0x2
  struct _HEAP_STOP_ON_TAG ReAllocTag; // offset: 0x18 ordinal: 0x3
  ULONGLONG FreeAddress;               // offset: 0x20 ordinal: 0x4
  struct _HEAP_STOP_ON_TAG FreeTag;    // offset: 0x28 ordinal: 0x5
} _HEAP_STOP_ON_VALUES;

// 0x1048 bytes (sizeof)
typedef struct _POOL_DESCRIPTOR {
  enum _POOL_TYPE PoolType;          // offset: 0x0 ordinal: 0x0
  ULONG PoolIndex;                   // offset: 0x4 ordinal: 0x1
  LONG RunningAllocs;                // offset: 0x8 ordinal: 0x2
  LONG RunningDeAllocs;              // offset: 0xc ordinal: 0x3
  LONG TotalPages;                   // offset: 0x10 ordinal: 0x4
  LONG TotalBigPages;                // offset: 0x14 ordinal: 0x5
  ULONG Threshold;                   // offset: 0x18 ordinal: 0x6
  VOID *LockAddress;                 // offset: 0x20 ordinal: 0x7
  VOID **PendingFrees;               // offset: 0x28 ordinal: 0x8
  LONG ThreadsProcessingDeferrals;   // offset: 0x30 ordinal: 0x9
  LONG PendingFreeDepth;             // offset: 0x34 ordinal: 0xa
  ULONGLONG TotalBytes;              // offset: 0x38 ordinal: 0xb
  ULONGLONG Spare0;                  // offset: 0x40 ordinal: 0xc
  struct _LIST_ENTRY ListHeads[256]; // offset: 0x48 ordinal: 0xd
} _POOL_DESCRIPTOR;

// 0x30 bytes (sizeof)
typedef struct _HEAP_UCR_DESCRIPTOR {
  struct _LIST_ENTRY ListEntry;    // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY SegmentEntry; // offset: 0x10 ordinal: 0x1
  VOID *Address;                   // offset: 0x20 ordinal: 0x2
  ULONGLONG Size;                  // offset: 0x28 ordinal: 0x3
} _HEAP_UCR_DESCRIPTOR;

// 0x58 bytes (sizeof)
typedef struct _THERMAL_INFORMATION_EX {
  ULONG ThermalStamp;          // offset: 0x0 ordinal: 0x0
  ULONG ThermalConstant1;      // offset: 0x4 ordinal: 0x1
  ULONG ThermalConstant2;      // offset: 0x8 ordinal: 0x2
  ULONGLONG Processors;        // offset: 0x10 ordinal: 0x3
  ULONG SamplingPeriod;        // offset: 0x18 ordinal: 0x4
  ULONG CurrentTemperature;    // offset: 0x1c ordinal: 0x5
  ULONG PassiveTripPoint;      // offset: 0x20 ordinal: 0x6
  ULONG CriticalTripPoint;     // offset: 0x24 ordinal: 0x7
  UCHAR ActiveTripPointCount;  // offset: 0x28 ordinal: 0x8
  ULONG ActiveTripPoint[10];   // offset: 0x2c ordinal: 0x9
  ULONG S4TransitionTripPoint; // offset: 0x54 ordinal: 0xa
} _THERMAL_INFORMATION_EX;

// 0x78 bytes (sizeof)
typedef struct _VI_CANCEL_GLOBALS {
  ULONGLONG CancelLock; // offset: 0x0 ordinal: 0x0
  ULONGLONG IssueLock;  // offset: 0x8 ordinal: 0x1
  LONG Counters[25];    // offset: 0x10 ordinal: 0x2
} _VI_CANCEL_GLOBALS;

// 0x18 bytes (sizeof)
typedef struct _POOL_TRACKER_BIG_PAGES {
  VOID *Va;                // offset: 0x0 ordinal: 0x0
  ULONG Key;               // offset: 0x8 ordinal: 0x1
  ULONG PoolType;          // offset: 0xc ordinal: 0x2
  ULONGLONG NumberOfBytes; // offset: 0x10 ordinal: 0x3
} _POOL_TRACKER_BIG_PAGES;

// 0x28 bytes (sizeof)
typedef struct _SYSPTES_HEADER {
  struct _LIST_ENTRY ListHead;   // offset: 0x0 ordinal: 0x0
  ULONGLONG Count;               // offset: 0x10 ordinal: 0x1
  ULONGLONG NumberOfEntries;     // offset: 0x18 ordinal: 0x2
  ULONGLONG NumberOfEntriesPeak; // offset: 0x20 ordinal: 0x3
} _SYSPTES_HEADER;

// 0x28 bytes (sizeof)
typedef struct _PORT_MESSAGE {
  union __anon_1150 u1; // offset: 0x0 ordinal: 0x0
  union __anon_1151 u2; // offset: 0x4 ordinal: 0x1
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

// 0x110 bytes (sizeof)
typedef struct _SID_AND_ATTRIBUTES_HASH {
  ULONG SidCount;                      // offset: 0x0 ordinal: 0x0
  struct _SID_AND_ATTRIBUTES *SidAttr; // offset: 0x8 ordinal: 0x1
  ULONGLONG Hash[32];                  // offset: 0x10 ordinal: 0x2
} _SID_AND_ATTRIBUTES_HASH;

// 0x18 bytes (sizeof)
typedef struct _SEP_TOKEN_PRIVILEGES {
  ULONGLONG Present;          // offset: 0x0 ordinal: 0x0
  ULONGLONG Enabled;          // offset: 0x8 ordinal: 0x1
  ULONGLONG EnabledByDefault; // offset: 0x10 ordinal: 0x2
} _SEP_TOKEN_PRIVILEGES;

// 0x20 bytes (sizeof)
typedef struct _TRACE_ENABLE_INFO {
  ULONG IsEnabled;           // offset: 0x0 ordinal: 0x0
  UCHAR Level;               // offset: 0x4 ordinal: 0x1
  UCHAR Reserved1;           // offset: 0x5 ordinal: 0x2
  USHORT LoggerId;           // offset: 0x6 ordinal: 0x3
  ULONG EnableProperty;      // offset: 0x8 ordinal: 0x4
  ULONG Reserved2;           // offset: 0xc ordinal: 0x5
  ULONGLONG MatchAnyKeyword; // offset: 0x10 ordinal: 0x6
  ULONGLONG MatchAllKeyword; // offset: 0x18 ordinal: 0x7
} _TRACE_ENABLE_INFO;

// 0x170 bytes (sizeof)
typedef struct _ETW_GUID_ENTRY {
  struct _LIST_ENTRY GuidList;                      // offset: 0x0 ordinal: 0x0
  LONG RefCount;                                    // offset: 0x10 ordinal: 0x1
  struct _GUID Guid;                                // offset: 0x14 ordinal: 0x2
  struct _LIST_ENTRY RegListHead;                   // offset: 0x28 ordinal: 0x3
  VOID *SecurityDescriptor;                         // offset: 0x38 ordinal: 0x4
  struct _TRACE_ENABLE_CONTEXT LegacyEnableContext; // offset: 0x40 ordinal: 0x5
  ULONG LegacyProviderEnabled;                      // offset: 0x48 ordinal: 0x6
  struct _TRACE_ENABLE_INFO ProviderEnableInfo;     // offset: 0x50 ordinal: 0x7
  struct _TRACE_ENABLE_INFO EnableInfo[8];          // offset: 0x70 ordinal: 0x8
} _ETW_GUID_ENTRY;

// 0x18 bytes (sizeof)
typedef struct _PERFINFO_TRACE_HEADER {
  union {
    ULONG Marker;   // offset: 0x0 ordinal: 0x0
    USHORT Version; // offset: 0x0 ordinal: 0x1
  };
  UCHAR HeaderType; // offset: 0x2 ordinal: 0x2
  UCHAR Flags;      // offset: 0x3 ordinal: 0x3
  union {
    ULONG Header;                    // offset: 0x4 ordinal: 0x4
    struct _WMI_TRACE_PACKET Packet; // offset: 0x4 ordinal: 0x5
  };
  union {
    ULONGLONG TS;                    // offset: 0x8 ordinal: 0x6
    union _LARGE_INTEGER SystemTime; // offset: 0x8 ordinal: 0x7
  };
  UCHAR Data[1]; // offset: 0x10 ordinal: 0x8
} _PERFINFO_TRACE_HEADER;

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
    ULONG BufferSize;           // offset: 0x0 ordinal: 0x1
  };
  ULONG SavedOffset;   // offset: 0x4 ordinal: 0x2
  ULONG CurrentOffset; // offset: 0x8 ordinal: 0x3
  LONG ReferenceCount; // offset: 0xc ordinal: 0x4
  union {
    union _LARGE_INTEGER TimeStamp;      // offset: 0x10 ordinal: 0x5
    union _LARGE_INTEGER StartPerfClock; // offset: 0x10 ordinal: 0x6
  };
  LONGLONG SequenceNumber;                  // offset: 0x18 ordinal: 0x7
  ULONG Spare0;                             // offset: 0x20 ordinal: 0x8
  ULONG Spare1;                             // offset: 0x24 ordinal: 0x9
  struct _ETW_BUFFER_CONTEXT ClientContext; // offset: 0x28 ordinal: 0xa
  union {
    enum _ETW_BUFFER_STATE State; // offset: 0x2c ordinal: 0xb
    ULONG Flags;                  // offset: 0x2c ordinal: 0xc
  };
  ULONG Offset;      // offset: 0x30 ordinal: 0xd
  USHORT BufferFlag; // offset: 0x34 ordinal: 0xe
  USHORT BufferType; // offset: 0x36 ordinal: 0xf
  union {
    ULONG Padding1[4];                     // offset: 0x38 ordinal: 0x10
    union _LARGE_INTEGER StartTime;        // offset: 0x38 ordinal: 0x11
    struct _LIST_ENTRY Entry;              // offset: 0x38 ordinal: 0x12
    struct _SINGLE_LIST_ENTRY SlistEntry;  // offset: 0x38 ordinal: 0x13
    struct _WMI_BUFFER_HEADER *NextBuffer; // offset: 0x38 ordinal: 0x14
  };
  struct _SINGLE_LIST_ENTRY GlobalEntry; // offset: 0x40 ordinal: 0x15
} _WMI_BUFFER_HEADER;

// 0x30 bytes (sizeof)
typedef struct _HEAP_SUBSEGMENT {
  struct _HEAP_LOCAL_SEGMENT_INFO *LocalInfo; // offset: 0x0 ordinal: 0x0
  struct _HEAP_USERDATA_HEADER *UserBlocks;   // offset: 0x8 ordinal: 0x1
  struct _INTERLOCK_SEQ AggregateExchg;       // offset: 0x10 ordinal: 0x2
  USHORT BlockSize;                           // offset: 0x18 ordinal: 0x3
  USHORT Flags;                               // offset: 0x1a ordinal: 0x4
  USHORT BlockCount;                          // offset: 0x1c ordinal: 0x5
  UCHAR SizeIndex;                            // offset: 0x1e ordinal: 0x6
  UCHAR AffinityIndex;                        // offset: 0x1f ordinal: 0x7
  ULONG Alignment[2];                         // offset: 0x18 ordinal: 0x8
  struct _SINGLE_LIST_ENTRY SFreeListEntry;   // offset: 0x20 ordinal: 0x9
  ULONG Lock;                                 // offset: 0x28 ordinal: 0xa
} _HEAP_SUBSEGMENT;

// 0x20 bytes (sizeof)
typedef struct _HEAP_FREE_ENTRY {
  VOID *PreviousBlockPrivateData; // offset: 0x0 ordinal: 0x0
  USHORT Size;                    // offset: 0x8 ordinal: 0x1
  UCHAR Flags;                    // offset: 0xa ordinal: 0x2
  UCHAR SmallTagIndex;            // offset: 0xb ordinal: 0x3
  USHORT PreviousSize;            // offset: 0xc ordinal: 0x4
  union {
    UCHAR SegmentOffset; // offset: 0xe ordinal: 0x5
    UCHAR LFHFlags;      // offset: 0xe ordinal: 0x6
  };
  UCHAR UnusedBytes;            // offset: 0xf ordinal: 0x7
  ULONGLONG CompactHeader;      // offset: 0x8 ordinal: 0x8
  VOID *Reserved;               // offset: 0x0 ordinal: 0x9
  USHORT FunctionIndex;         // offset: 0x8 ordinal: 0xa
  USHORT ContextValue;          // offset: 0xa ordinal: 0xb
  ULONG InterceptorValue;       // offset: 0x8 ordinal: 0xc
  USHORT UnusedBytesLength;     // offset: 0xc ordinal: 0xd
  UCHAR EntryOffset;            // offset: 0xe ordinal: 0xe
  UCHAR ExtendedBlockSignature; // offset: 0xf ordinal: 0xf
  VOID *ReservedForAlignment;   // offset: 0x0 ordinal: 0x10
  ULONG Code1;                  // offset: 0x8 ordinal: 0x11
  USHORT Code2;                 // offset: 0xc ordinal: 0x12
  UCHAR Code3;                  // offset: 0xe ordinal: 0x13
  UCHAR Code4;                  // offset: 0xf ordinal: 0x14
  ULONGLONG AgregateCode;       // offset: 0x8 ordinal: 0x15
  struct _LIST_ENTRY FreeList;  // offset: 0x10 ordinal: 0x16
} _HEAP_FREE_ENTRY;

// 0x10 bytes (sizeof)
typedef struct _HEAP_PSEUDO_TAG_ENTRY {
  ULONG Allocs;   // offset: 0x0 ordinal: 0x0
  ULONG Frees;    // offset: 0x4 ordinal: 0x1
  ULONGLONG Size; // offset: 0x8 ordinal: 0x2
} _HEAP_PSEUDO_TAG_ENTRY;

// 0x48 bytes (sizeof)
typedef struct _HEAP_TAG_ENTRY {
  ULONG Allocs;                 // offset: 0x0 ordinal: 0x0
  ULONG Frees;                  // offset: 0x4 ordinal: 0x1
  ULONGLONG Size;               // offset: 0x8 ordinal: 0x2
  USHORT TagIndex;              // offset: 0x10 ordinal: 0x3
  USHORT CreatorBackTraceIndex; // offset: 0x12 ordinal: 0x4
  WCHAR TagName[24];            // offset: 0x14 ordinal: 0x5
} _HEAP_TAG_ENTRY;

// 0x10 bytes (sizeof)
typedef struct _HEAP_TUNING_PARAMETERS {
  ULONG CommittThresholdShift;      // offset: 0x0 ordinal: 0x0
  ULONGLONG MaxPreCommittThreshold; // offset: 0x8 ordinal: 0x1
} _HEAP_TUNING_PARAMETERS;

// 0x60 bytes (sizeof)
typedef struct _HEAP_COUNTERS {
  ULONGLONG TotalMemoryReserved;      // offset: 0x0 ordinal: 0x0
  ULONGLONG TotalMemoryCommitted;     // offset: 0x8 ordinal: 0x1
  ULONGLONG TotalMemoryLargeUCR;      // offset: 0x10 ordinal: 0x2
  ULONGLONG TotalSizeInVirtualBlocks; // offset: 0x18 ordinal: 0x3
  ULONG TotalSegments;                // offset: 0x20 ordinal: 0x4
  ULONG TotalUCRs;                    // offset: 0x24 ordinal: 0x5
  ULONG CommittOps;                   // offset: 0x28 ordinal: 0x6
  ULONG DeCommitOps;                  // offset: 0x2c ordinal: 0x7
  ULONG LockAcquires;                 // offset: 0x30 ordinal: 0x8
  ULONG LockCollisions;               // offset: 0x34 ordinal: 0x9
  ULONG CommitRate;                   // offset: 0x38 ordinal: 0xa
  ULONG DecommittRate;                // offset: 0x3c ordinal: 0xb
  ULONG CommitFailures;               // offset: 0x40 ordinal: 0xc
  ULONG InBlockCommitFailures;        // offset: 0x44 ordinal: 0xd
  ULONG CompactHeapCalls;             // offset: 0x48 ordinal: 0xe
  ULONG CompactedUCRs;                // offset: 0x4c ordinal: 0xf
  ULONG InBlockDeccommits;            // offset: 0x50 ordinal: 0x10
  ULONGLONG InBlockDeccomitSize;      // offset: 0x58 ordinal: 0x11
} _HEAP_COUNTERS;

// 0x10 bytes (sizeof)
typedef struct _HEAP_ENTRY {
  VOID *PreviousBlockPrivateData; // offset: 0x0 ordinal: 0x0
  USHORT Size;                    // offset: 0x8 ordinal: 0x1
  UCHAR Flags;                    // offset: 0xa ordinal: 0x2
  UCHAR SmallTagIndex;            // offset: 0xb ordinal: 0x3
  USHORT PreviousSize;            // offset: 0xc ordinal: 0x4
  union {
    UCHAR SegmentOffset; // offset: 0xe ordinal: 0x5
    UCHAR LFHFlags;      // offset: 0xe ordinal: 0x6
  };
  UCHAR UnusedBytes;            // offset: 0xf ordinal: 0x7
  ULONGLONG CompactHeader;      // offset: 0x8 ordinal: 0x8
  VOID *Reserved;               // offset: 0x0 ordinal: 0x9
  USHORT FunctionIndex;         // offset: 0x8 ordinal: 0xa
  USHORT ContextValue;          // offset: 0xa ordinal: 0xb
  ULONG InterceptorValue;       // offset: 0x8 ordinal: 0xc
  USHORT UnusedBytesLength;     // offset: 0xc ordinal: 0xd
  UCHAR EntryOffset;            // offset: 0xe ordinal: 0xe
  UCHAR ExtendedBlockSignature; // offset: 0xf ordinal: 0xf
  VOID *ReservedForAlignment;   // offset: 0x0 ordinal: 0x10
  ULONG Code1;                  // offset: 0x8 ordinal: 0x11
  USHORT Code2;                 // offset: 0xc ordinal: 0x12
  UCHAR Code3;                  // offset: 0xe ordinal: 0x13
  UCHAR Code4;                  // offset: 0xf ordinal: 0x14
  ULONGLONG AgregateCode;       // offset: 0x8 ordinal: 0x15
} _HEAP_ENTRY;

// 0x40 bytes (sizeof)
typedef struct _HEAP_VIRTUAL_ALLOC_ENTRY {
  struct _LIST_ENTRY Entry;            // offset: 0x0 ordinal: 0x0
  struct _HEAP_ENTRY_EXTRA ExtraStuff; // offset: 0x10 ordinal: 0x1
  ULONGLONG CommitSize;                // offset: 0x20 ordinal: 0x2
  ULONGLONG ReserveSize;               // offset: 0x28 ordinal: 0x3
  struct _HEAP_ENTRY BusyBlock;        // offset: 0x30 ordinal: 0x4
} _HEAP_VIRTUAL_ALLOC_ENTRY;

// 0x70 bytes (sizeof)
typedef struct _HEAP_SEGMENT {
  struct _HEAP_ENTRY Entry;              // offset: 0x0 ordinal: 0x0
  ULONG SegmentSignature;                // offset: 0x10 ordinal: 0x1
  ULONG SegmentFlags;                    // offset: 0x14 ordinal: 0x2
  struct _LIST_ENTRY SegmentListEntry;   // offset: 0x18 ordinal: 0x3
  struct _HEAP *Heap;                    // offset: 0x28 ordinal: 0x4
  VOID *BaseAddress;                     // offset: 0x30 ordinal: 0x5
  ULONG NumberOfPages;                   // offset: 0x38 ordinal: 0x6
  struct _HEAP_ENTRY *FirstEntry;        // offset: 0x40 ordinal: 0x7
  struct _HEAP_ENTRY *LastValidEntry;    // offset: 0x48 ordinal: 0x8
  ULONG NumberOfUnCommittedPages;        // offset: 0x50 ordinal: 0x9
  ULONG NumberOfUnCommittedRanges;       // offset: 0x54 ordinal: 0xa
  USHORT SegmentAllocatorBackTraceIndex; // offset: 0x58 ordinal: 0xb
  USHORT Reserved;                       // offset: 0x5a ordinal: 0xc
  struct _LIST_ENTRY UCRSegmentList;     // offset: 0x60 ordinal: 0xd
} _HEAP_SEGMENT;

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
    struct _ARM_DBGKD_CONTROL_SET ArmControlSet;     // offset: 0x0 ordinal: 0x4
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
typedef union __anon_1032 {
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
} __anon_1032;

// 0x34 bytes (sizeof)
typedef struct _DBGKD_MANIPULATE_STATE32 {
  ULONG ApiNumber;       // offset: 0x0 ordinal: 0x0
  USHORT ProcessorLevel; // offset: 0x4 ordinal: 0x1
  USHORT Processor;      // offset: 0x6 ordinal: 0x2
  LONG ReturnStatus;     // offset: 0x8 ordinal: 0x3
  union __anon_1032 u;   // offset: 0xc ordinal: 0x4
} _DBGKD_MANIPULATE_STATE32;

// 0x28 bytes (sizeof)
typedef union __anon_1010 {
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
} __anon_1010;

// 0x38 bytes (sizeof)
typedef struct _DBGKD_MANIPULATE_STATE64 {
  ULONG ApiNumber;       // offset: 0x0 ordinal: 0x0
  USHORT ProcessorLevel; // offset: 0x4 ordinal: 0x1
  USHORT Processor;      // offset: 0x6 ordinal: 0x2
  LONG ReturnStatus;     // offset: 0x8 ordinal: 0x3
  union __anon_1010 u;   // offset: 0x10 ordinal: 0x4
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

// 0x50 bytes (sizeof)
typedef struct _PNP_DEVICE_COMPLETION_QUEUE {
  ULONGLONG SpinLock;                    // offset: 0x0 ordinal: 0x0
  ULONG DispatchedCount;                 // offset: 0x8 ordinal: 0x1
  struct _LIST_ENTRY DispatchedList;     // offset: 0x10 ordinal: 0x2
  struct _KSEMAPHORE CompletedSemaphore; // offset: 0x20 ordinal: 0x3
  struct _LIST_ENTRY CompletedList;      // offset: 0x40 ordinal: 0x4
} _PNP_DEVICE_COMPLETION_QUEUE;

// 0x4e8 bytes (sizeof)
typedef struct _GDI_TEB_BATCH {
  ULONG Offset;      // offset: 0x0 ordinal: 0x0
  ULONGLONG HDC;     // offset: 0x8 ordinal: 0x1
  ULONG Buffer[310]; // offset: 0x10 ordinal: 0x2
} _GDI_TEB_BATCH;

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

// 0x8 bytes (sizeof)
typedef union _CLS_LSN {
  struct __anon_917 offset; // offset: 0x0 ordinal: 0x0
  ULONGLONG ullOffset;      // offset: 0x0 ordinal: 0x1
} _CLS_LSN;

// 0x10 bytes (sizeof)
typedef struct _CACHED_CHILD_LIST {
  ULONG Count; // offset: 0x0 ordinal: 0x0
  union {
    ULONGLONG ValueList;                   // offset: 0x8 ordinal: 0x1
    struct _CM_KEY_CONTROL_BLOCK *RealKcb; // offset: 0x8 ordinal: 0x2
  };
} _CACHED_CHILD_LIST;

// 0x8 bytes (sizeof)
typedef struct _MMVAD_FLAGS3 {
  ULONGLONG PreferredNode : 6;       // offset: 0x0 ordinal: 0x0
  ULONGLONG Spare : 2;               // offset: 0x0 ordinal: 0x1
  ULONGLONG SequentialAccess : 1;    // offset: 0x0 ordinal: 0x2
  ULONGLONG LastSequentialTrim : 15; // offset: 0x0 ordinal: 0x3
  ULONGLONG Spare2 : 8;              // offset: 0x0 ordinal: 0x4
  ULONGLONG LargePageCreating : 1;   // offset: 0x0 ordinal: 0x5
  ULONGLONG Spare3 : 31;             // offset: 0x0 ordinal: 0x6
} _MMVAD_FLAGS3;

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
typedef union __anon_780 {
  ULONGLONG LongFlags3;           // offset: 0x0 ordinal: 0x0
  struct _MMVAD_FLAGS3 VadFlags3; // offset: 0x0 ordinal: 0x1
} __anon_780;

// 0x8 bytes (sizeof)
typedef union __anon_779 {
  ULONGLONG LongFlags;          // offset: 0x0 ordinal: 0x0
  struct _MMVAD_FLAGS VadFlags; // offset: 0x0 ordinal: 0x1
} __anon_779;

// 0x8 bytes (sizeof)
typedef union __anon_773 {
  ULONGLONG LastPageToWrite; // offset: 0x0 ordinal: 0x0
  ULONGLONG KeepForever;     // offset: 0x0 ordinal: 0x1
} __anon_773;

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
  union {
    UCHAR ImageFlags;             // offset: 0x33 ordinal: 0xd
    UCHAR ComPlusNativeReady : 1; // offset: 0x33 ordinal: 0xe
  };
  UCHAR ComPlusILOnly : 1;             // offset: 0x33 ordinal: 0xf
  UCHAR ImageDynamicallyRelocated : 1; // offset: 0x33 ordinal: 0x10
  UCHAR Reserved : 5;                  // offset: 0x33 ordinal: 0x11
  ULONG LoaderFlags;                   // offset: 0x34 ordinal: 0x12
  ULONG ImageFileSize;                 // offset: 0x38 ordinal: 0x13
  ULONG CheckSum;                      // offset: 0x3c ordinal: 0x14
} _SECTION_IMAGE_INFORMATION;

// 0x48 bytes (sizeof)
typedef struct _MI_SECTION_IMAGE_INFORMATION {
  struct _SECTION_IMAGE_INFORMATION
      ExportedImageInformation; // offset: 0x0 ordinal: 0x0
  struct _MI_EXTRA_IMAGE_INFORMATION
      InternalImageInformation; // offset: 0x40 ordinal: 0x1
} _MI_SECTION_IMAGE_INFORMATION;

// 0x8 bytes (sizeof)
typedef union __anon_760 {
  struct _MI_SECTION_IMAGE_INFORMATION
      *ImageInformation; // offset: 0x0 ordinal: 0x0
  VOID *FirstMappedVa;   // offset: 0x0 ordinal: 0x1
} __anon_760;

// 0x10 bytes (sizeof)
typedef struct _MMEXTEND_INFO {
  ULONGLONG CommittedSize; // offset: 0x0 ordinal: 0x0
  ULONG ReferenceCount;    // offset: 0x8 ordinal: 0x1
} _MMEXTEND_INFO;

// 0x8 bytes (sizeof)
typedef struct _SEGMENT_FLAGS {
  ULONGLONG TotalNumberOfPtes4132 : 10;    // offset: 0x0 ordinal: 0x0
  ULONGLONG ExtraSharedWowSubsections : 1; // offset: 0x0 ordinal: 0x1
  ULONGLONG LargePages : 1;                // offset: 0x0 ordinal: 0x2
  ULONGLONG WatchProto : 1;                // offset: 0x0 ordinal: 0x3
  ULONGLONG DebugSymbolsLoaded : 1;        // offset: 0x0 ordinal: 0x4
  ULONGLONG WriteCombined : 1;             // offset: 0x0 ordinal: 0x5
  ULONGLONG NoCache : 1;                   // offset: 0x0 ordinal: 0x6
  ULONGLONG FloppyMedia : 1;               // offset: 0x0 ordinal: 0x7
  ULONGLONG DefaultProtectionMask : 5;     // offset: 0x0 ordinal: 0x8
  ULONGLONG ContainsPxeSubsection : 1;     // offset: 0x0 ordinal: 0x9
  ULONGLONG Spare : 40;                    // offset: 0x0 ordinal: 0xa
  ULONGLONG Binary32 : 1;                  // offset: 0x0 ordinal: 0xb
} _SEGMENT_FLAGS;

// 0x8 bytes (sizeof)
typedef struct _IMAGE_SECURITY_CONTEXT {
  union {
    VOID *PageHashes;                   // offset: 0x0 ordinal: 0x0
    ULONGLONG Value;                    // offset: 0x0 ordinal: 0x1
    ULONGLONG SecurityBeingCreated : 1; // offset: 0x0 ordinal: 0x2
  };
  ULONGLONG SecurityMandatory : 1; // offset: 0x0 ordinal: 0x3
  ULONGLONG Unused : 1;            // offset: 0x0 ordinal: 0x4
  ULONGLONG PageHashPointer : 61;  // offset: 0x0 ordinal: 0x5
} _IMAGE_SECURITY_CONTEXT;

// 0x18 bytes (sizeof)
typedef struct _MI_IMAGE_SECURITY_REFERENCE {
  struct _IMAGE_SECURITY_CONTEXT SecurityContext; // offset: 0x0 ordinal: 0x0
  VOID *DynamicRelocations;                       // offset: 0x8 ordinal: 0x1
  LONG ReferenceCount;                            // offset: 0x10 ordinal: 0x2
} _MI_IMAGE_SECURITY_REFERENCE;

// 0x38 bytes (sizeof)
typedef struct _MM_SUBSECTION_AVL_TABLE {
  struct _MMSUBSECTION_NODE BalancedRoot;    // offset: 0x0 ordinal: 0x0
  ULONGLONG DepthOfTree : 5;                 // offset: 0x28 ordinal: 0x1
  ULONGLONG Unused : 3;                      // offset: 0x28 ordinal: 0x2
  ULONGLONG NumberGenericTableElements : 56; // offset: 0x28 ordinal: 0x3
  VOID *NodeHint;                            // offset: 0x30 ordinal: 0x4
} _MM_SUBSECTION_AVL_TABLE;

// 0x10 bytes (sizeof)
typedef struct __anon_738 {
  union {
    ULONG NumberOfSystemCacheViews; // offset: 0x0 ordinal: 0x0
    ULONG ImageRelocationStartBit;  // offset: 0x0 ordinal: 0x1
  };
  union {
    LONG WritableUserReferences;         // offset: 0x4 ordinal: 0x2
    ULONG ImageRelocationSizeIn64k : 16; // offset: 0x4 ordinal: 0x3
  };
  ULONG Unused : 14;     // offset: 0x4 ordinal: 0x4
  ULONG BitMap64 : 1;    // offset: 0x4 ordinal: 0x5
  ULONG ImageActive : 1; // offset: 0x4 ordinal: 0x6
  union {
    struct _MM_SUBSECTION_AVL_TABLE *SubsectionRoot; // offset: 0x8 ordinal: 0x7
    struct _MI_IMAGE_SECURITY_REFERENCE
        *SeImageStub; // offset: 0x8 ordinal: 0x8
  };
} __anon_738;

// 0x10 bytes (sizeof)
typedef union __anon_749 {
  struct __anon_738 e2; // offset: 0x0 ordinal: 0x0
} __anon_749;

// 0x8 bytes (sizeof)
typedef union __anon_731 {
  ULONGLONG PteFrame : 52;        // offset: 0x0 ordinal: 0x0
  ULONGLONG Unused : 3;           // offset: 0x0 ordinal: 0x1
  ULONGLONG PfnImageVerified : 1; // offset: 0x0 ordinal: 0x2
  ULONGLONG AweAllocation : 1;    // offset: 0x0 ordinal: 0x3
  ULONGLONG PrototypePte : 1;     // offset: 0x0 ordinal: 0x4
  ULONGLONG PageColor : 6;        // offset: 0x0 ordinal: 0x5
} __anon_731;

// 0x8 bytes (sizeof)
typedef union __anon_723 {
  ULONGLONG Flink;                        // offset: 0x0 ordinal: 0x0
  ULONG WsIndex;                          // offset: 0x0 ordinal: 0x1
  struct _KEVENT *Event;                  // offset: 0x0 ordinal: 0x2
  VOID *Next;                             // offset: 0x0 ordinal: 0x3
  VOID *VolatileNext;                     // offset: 0x0 ordinal: 0x4
  struct _KTHREAD *KernelStackOwner;      // offset: 0x0 ordinal: 0x5
  struct _SINGLE_LIST_ENTRY NextStackPfn; // offset: 0x0 ordinal: 0x6
} __anon_723;

// 0x58 bytes (sizeof)
typedef struct _VIRTUAL_EFI_RUNTIME_SERVICES {
  ULONGLONG GetTime;                   // offset: 0x0 ordinal: 0x0
  ULONGLONG SetTime;                   // offset: 0x8 ordinal: 0x1
  ULONGLONG GetWakeupTime;             // offset: 0x10 ordinal: 0x2
  ULONGLONG SetWakeupTime;             // offset: 0x18 ordinal: 0x3
  ULONGLONG SetVirtualAddressMap;      // offset: 0x20 ordinal: 0x4
  ULONGLONG ConvertPointer;            // offset: 0x28 ordinal: 0x5
  ULONGLONG GetVariable;               // offset: 0x30 ordinal: 0x6
  ULONGLONG GetNextVariableName;       // offset: 0x38 ordinal: 0x7
  ULONGLONG SetVariable;               // offset: 0x40 ordinal: 0x8
  ULONGLONG GetNextHighMonotonicCount; // offset: 0x48 ordinal: 0x9
  ULONGLONG ResetSystem;               // offset: 0x50 ordinal: 0xa
} _VIRTUAL_EFI_RUNTIME_SERVICES;

// 0x18 bytes (sizeof)
typedef struct _EFI_FIRMWARE_INFORMATION {
  ULONG FirmwareVersion; // offset: 0x0 ordinal: 0x0
  struct _VIRTUAL_EFI_RUNTIME_SERVICES
      *VirtualEfiRuntimeServices;  // offset: 0x8 ordinal: 0x1
  LONG SetVirtualAddressMapStatus; // offset: 0x10 ordinal: 0x2
  ULONG MissedMappingsCount;       // offset: 0x14 ordinal: 0x3
} _EFI_FIRMWARE_INFORMATION;

// 0x18 bytes (sizeof)
typedef union __anon_704 {
  struct _EFI_FIRMWARE_INFORMATION EfiInformation;   // offset: 0x0 ordinal: 0x0
  struct _PCAT_FIRMWARE_INFORMATION PcatInformation; // offset: 0x0 ordinal: 0x1
} __anon_704;

// 0x20 bytes (sizeof)
typedef struct _FIRMWARE_INFORMATION_LOADER_BLOCK {
  ULONG FirmwareTypeEfi : 1; // offset: 0x0 ordinal: 0x0
  ULONG Reserved : 31;       // offset: 0x0 ordinal: 0x1
  union __anon_704 u;        // offset: 0x8 ordinal: 0x2
} _FIRMWARE_INFORMATION_LOADER_BLOCK;

// 0x10 bytes (sizeof)
typedef struct _LOADER_PERFORMANCE_DATA {
  ULONGLONG StartTime; // offset: 0x0 ordinal: 0x0
  ULONGLONG EndTime;   // offset: 0x8 ordinal: 0x1
} _LOADER_PERFORMANCE_DATA;

// 0xb8 bytes (sizeof)
typedef struct _LOADER_PARAMETER_EXTENSION {
  ULONG Size;                              // offset: 0x0 ordinal: 0x0
  struct _PROFILE_PARAMETER_BLOCK Profile; // offset: 0x4 ordinal: 0x1
  ULONG MajorVersion;                      // offset: 0x14 ordinal: 0x2
  ULONG MinorVersion;                      // offset: 0x18 ordinal: 0x3
  VOID *EmInfFileImage;                    // offset: 0x20 ordinal: 0x4
  ULONG EmInfFileSize;                     // offset: 0x28 ordinal: 0x5
  VOID *TriageDumpBlock;                   // offset: 0x30 ordinal: 0x6
  ULONG LoaderPagesSpanned;                // offset: 0x38 ordinal: 0x7
  struct _HEADLESS_LOADER_BLOCK
      *HeadlessLoaderBlock;                         // offset: 0x40 ordinal: 0x8
  struct _SMBIOS_TABLE_HEADER *SMBiosEPSHeader;     // offset: 0x48 ordinal: 0x9
  VOID *DrvDBImage;                                 // offset: 0x50 ordinal: 0xa
  ULONG DrvDBSize;                                  // offset: 0x58 ordinal: 0xb
  struct _NETWORK_LOADER_BLOCK *NetworkLoaderBlock; // offset: 0x60 ordinal: 0xc
  struct _LIST_ENTRY FirmwareDescriptorListHead;    // offset: 0x68 ordinal: 0xd
  VOID *AcpiTable;                                  // offset: 0x78 ordinal: 0xe
  ULONG AcpiTableSize;                              // offset: 0x80 ordinal: 0xf
  ULONG BootViaWinload : 1; // offset: 0x84 ordinal: 0x10
  ULONG Reserved : 31;      // offset: 0x84 ordinal: 0x11
  struct _LOADER_PERFORMANCE_DATA
      *LoaderPerformanceData; // offset: 0x88 ordinal: 0x12
  struct _LIST_ENTRY
      BootApplicationPersistentData; // offset: 0x90 ordinal: 0x13
  VOID *WmdTestResult;               // offset: 0xa0 ordinal: 0x14
  struct _GUID BootIdentifier;       // offset: 0xa8 ordinal: 0x15
} _LOADER_PARAMETER_EXTENSION;

// 0xe8 bytes (sizeof)
typedef struct _LOADER_PARAMETER_BLOCK {
  struct _LIST_ENTRY LoadOrderListHead;        // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY MemoryDescriptorListHead; // offset: 0x10 ordinal: 0x1
  struct _LIST_ENTRY BootDriverListHead;       // offset: 0x20 ordinal: 0x2
  ULONGLONG KernelStack;                       // offset: 0x30 ordinal: 0x3
  ULONGLONG Prcb;                              // offset: 0x38 ordinal: 0x4
  ULONGLONG Process;                           // offset: 0x40 ordinal: 0x5
  ULONGLONG Thread;                            // offset: 0x48 ordinal: 0x6
  ULONG RegistryLength;                        // offset: 0x50 ordinal: 0x7
  VOID *RegistryBase;                          // offset: 0x58 ordinal: 0x8
  struct _CONFIGURATION_COMPONENT_DATA
      *ConfigurationRoot;          // offset: 0x60 ordinal: 0x9
  CHAR *ArcBootDeviceName;         // offset: 0x68 ordinal: 0xa
  CHAR *ArcHalDeviceName;          // offset: 0x70 ordinal: 0xb
  CHAR *NtBootPathName;            // offset: 0x78 ordinal: 0xc
  CHAR *NtHalPathName;             // offset: 0x80 ordinal: 0xd
  CHAR *LoadOptions;               // offset: 0x88 ordinal: 0xe
  struct _NLS_DATA_BLOCK *NlsData; // offset: 0x90 ordinal: 0xf
  struct _ARC_DISK_INFORMATION
      *ArcDiskInformation;                       // offset: 0x98 ordinal: 0x10
  VOID *OemFontFile;                             // offset: 0xa0 ordinal: 0x11
  struct _SETUP_LOADER_BLOCK *SetupLoaderBlock;  // offset: 0xa8 ordinal: 0x12
  struct _LOADER_PARAMETER_EXTENSION *Extension; // offset: 0xb0 ordinal: 0x13
  union __anon_689 u;                            // offset: 0xb8 ordinal: 0x14
  struct _FIRMWARE_INFORMATION_LOADER_BLOCK
      FirmwareInformation; // offset: 0xc8 ordinal: 0x15
} _LOADER_PARAMETER_BLOCK;

// 0x8 bytes (sizeof)
typedef union _PTE_QUEUE_POINTER {
  LONGLONG PointerPte : 48; // offset: 0x0 ordinal: 0x0
  ULONGLONG TimeStamp : 16; // offset: 0x0 ordinal: 0x1
  LONGLONG Data;            // offset: 0x0 ordinal: 0x2
} _PTE_QUEUE_POINTER;

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
  ULONGLONG Dirty1 : 1;           // offset: 0x0 ordinal: 0x1
  ULONGLONG Owner : 1;            // offset: 0x0 ordinal: 0x2
  ULONGLONG WriteThrough : 1;     // offset: 0x0 ordinal: 0x3
  ULONGLONG CacheDisable : 1;     // offset: 0x0 ordinal: 0x4
  ULONGLONG Accessed : 1;         // offset: 0x0 ordinal: 0x5
  ULONGLONG Dirty : 1;            // offset: 0x0 ordinal: 0x6
  ULONGLONG LargePage : 1;        // offset: 0x0 ordinal: 0x7
  ULONGLONG Global : 1;           // offset: 0x0 ordinal: 0x8
  ULONGLONG CopyOnWrite : 1;      // offset: 0x0 ordinal: 0x9
  ULONGLONG Prototype : 1;        // offset: 0x0 ordinal: 0xa
  ULONGLONG Write : 1;            // offset: 0x0 ordinal: 0xb
  ULONGLONG PAT : 1;              // offset: 0x0 ordinal: 0xc
  ULONGLONG reserved1 : 8;        // offset: 0x0 ordinal: 0xd
  ULONGLONG PageFrameNumber : 19; // offset: 0x0 ordinal: 0xe
  ULONGLONG reserved2 : 24;       // offset: 0x0 ordinal: 0xf
} _MMPTE_HARDWARE_LARGEPAGE;

// 0x8 bytes (sizeof)
typedef struct _MMPTE_HARDWARE {
  ULONGLONG Valid : 1;            // offset: 0x0 ordinal: 0x0
  ULONGLONG Dirty1 : 1;           // offset: 0x0 ordinal: 0x1
  ULONGLONG Owner : 1;            // offset: 0x0 ordinal: 0x2
  ULONGLONG WriteThrough : 1;     // offset: 0x0 ordinal: 0x3
  ULONGLONG CacheDisable : 1;     // offset: 0x0 ordinal: 0x4
  ULONGLONG Accessed : 1;         // offset: 0x0 ordinal: 0x5
  ULONGLONG Dirty : 1;            // offset: 0x0 ordinal: 0x6
  ULONGLONG LargePage : 1;        // offset: 0x0 ordinal: 0x7
  ULONGLONG Global : 1;           // offset: 0x0 ordinal: 0x8
  ULONGLONG CopyOnWrite : 1;      // offset: 0x0 ordinal: 0x9
  ULONGLONG Prototype : 1;        // offset: 0x0 ordinal: 0xa
  ULONGLONG Write : 1;            // offset: 0x0 ordinal: 0xb
  ULONGLONG PageFrameNumber : 28; // offset: 0x0 ordinal: 0xc
  ULONGLONG reserved1 : 12;       // offset: 0x0 ordinal: 0xd
  ULONGLONG SoftwareWsIndex : 11; // offset: 0x0 ordinal: 0xe
  ULONGLONG NoExecute : 1;        // offset: 0x0 ordinal: 0xf
} _MMPTE_HARDWARE;

// 0x8 bytes (sizeof)
typedef struct _WHEA_PCIX_DEV_VALIDATION_BITS {
  ULONGLONG ErrorStatusValid : 1;      // offset: 0x0 ordinal: 0x0
  ULONGLONG IdInfoValid : 1;           // offset: 0x0 ordinal: 0x1
  ULONGLONG MemoryNumberValid : 1;     // offset: 0x0 ordinal: 0x2
  ULONGLONG IoNumberValid : 1;         // offset: 0x0 ordinal: 0x3
  ULONGLONG RegisterDataPairValid : 1; // offset: 0x0 ordinal: 0x4
  ULONGLONG Reserved : 59;             // offset: 0x0 ordinal: 0x5
} _WHEA_PCIX_DEV_VALIDATION_BITS;

// 0x8 bytes (sizeof)
typedef struct _WHEA_PCIX_BUS_VALIDATION_BITS {
  ULONGLONG ErrorStatusValid : 1; // offset: 0x0 ordinal: 0x0
  ULONGLONG ErrorTypeValid : 1;   // offset: 0x0 ordinal: 0x1
  ULONGLONG BusIdValid : 1;       // offset: 0x0 ordinal: 0x2
  ULONGLONG BusAddressValid : 1;  // offset: 0x0 ordinal: 0x3
  ULONGLONG BusDataValid : 1;     // offset: 0x0 ordinal: 0x4
  ULONGLONG CommandValid : 1;     // offset: 0x0 ordinal: 0x5
  ULONGLONG RequestorIdValid : 1; // offset: 0x0 ordinal: 0x6
  ULONGLONG CompleterIdValid : 1; // offset: 0x0 ordinal: 0x7
  ULONGLONG TargetIdValid : 1;    // offset: 0x0 ordinal: 0x8
  ULONGLONG Reserved : 55;        // offset: 0x0 ordinal: 0x9
} _WHEA_PCIX_BUS_VALIDATION_BITS;

// 0x8 bytes (sizeof)
typedef struct _WHEA_ERROR_STATUS {
  ULONGLONG Reserved1 : 8;  // offset: 0x0 ordinal: 0x0
  ULONGLONG ErrorType : 8;  // offset: 0x0 ordinal: 0x1
  ULONGLONG Address : 1;    // offset: 0x0 ordinal: 0x2
  ULONGLONG Control : 1;    // offset: 0x0 ordinal: 0x3
  ULONGLONG Data : 1;       // offset: 0x0 ordinal: 0x4
  ULONGLONG Responder : 1;  // offset: 0x0 ordinal: 0x5
  ULONGLONG Requester : 1;  // offset: 0x0 ordinal: 0x6
  ULONGLONG FirstError : 1; // offset: 0x0 ordinal: 0x7
  ULONGLONG Overflow : 1;   // offset: 0x0 ordinal: 0x8
  ULONGLONG Reserved2 : 41; // offset: 0x0 ordinal: 0x9
} _WHEA_ERROR_STATUS;

// 0x68 bytes (sizeof)
typedef struct _WHEA_PCIX_DEVICE_ERROR {
  struct _WHEA_PCIX_DEV_VALIDATION_BITS
      ValidationBits;                    // offset: 0x0 ordinal: 0x0
  struct _WHEA_ERROR_STATUS ErrorStatus; // offset: 0x8 ordinal: 0x1
  UCHAR IdInfo[16];                      // offset: 0x10 ordinal: 0x2
  ULONG MemoryNumber;                    // offset: 0x20 ordinal: 0x3
  ULONG IoNumber;                        // offset: 0x24 ordinal: 0x4
  UCHAR RegisterDataPairs[64];           // offset: 0x28 ordinal: 0x5
} _WHEA_PCIX_DEVICE_ERROR;

// 0x48 bytes (sizeof)
typedef struct _WHEA_PCIX_BUS_ERROR {
  struct _WHEA_PCIX_BUS_VALIDATION_BITS
      ValidationBits;                    // offset: 0x0 ordinal: 0x0
  struct _WHEA_ERROR_STATUS ErrorStatus; // offset: 0x8 ordinal: 0x1
  USHORT ErrorType;                      // offset: 0x10 ordinal: 0x2
  USHORT BusId;                          // offset: 0x12 ordinal: 0x3
  ULONG Reserved;                        // offset: 0x14 ordinal: 0x4
  ULONGLONG BusAddress;                  // offset: 0x18 ordinal: 0x5
  ULONGLONG BusData;                     // offset: 0x20 ordinal: 0x6
  ULONGLONG BusCommand;                  // offset: 0x28 ordinal: 0x7
  ULONGLONG BusRequestorId;              // offset: 0x30 ordinal: 0x8
  ULONGLONG BusCompleterId;              // offset: 0x38 ordinal: 0x9
  ULONGLONG TargetId;                    // offset: 0x40 ordinal: 0xa
} _WHEA_PCIX_BUS_ERROR;

// 0xd0 bytes (sizeof)
typedef struct _WHEA_PCIEXPRESS_ERROR {
  ULONGLONG ValidationBits;              // offset: 0x0 ordinal: 0x0
  enum PCI_EXPRESS_DEVICE_TYPE PortType; // offset: 0x8 ordinal: 0x1
  ULONG Version;                         // offset: 0xc ordinal: 0x2
  ULONG CommandStatus;                   // offset: 0x10 ordinal: 0x3
  ULONG Reserved;                        // offset: 0x14 ordinal: 0x4
  struct _PCIE_DEVICE_ID DeviceId;       // offset: 0x18 ordinal: 0x5
  ULONGLONG DeviceSN;                    // offset: 0x28 ordinal: 0x6
  ULONG BridgeCtrlSts;                   // offset: 0x30 ordinal: 0x7
  UCHAR ExpressCapability[60];           // offset: 0x34 ordinal: 0x8
  UCHAR AerInfo[96];                     // offset: 0x70 ordinal: 0x9
} _WHEA_PCIEXPRESS_ERROR;

// 0x50 bytes (sizeof)
typedef struct _WHEA_MEMORY_ERROR {
  ULONGLONG ValidationBits;              // offset: 0x0 ordinal: 0x0
  struct _WHEA_ERROR_STATUS ErrorStatus; // offset: 0x8 ordinal: 0x1
  ULONGLONG PhysicalAddress;             // offset: 0x10 ordinal: 0x2
  ULONGLONG PhysicalAddressMask;         // offset: 0x18 ordinal: 0x3
  USHORT Node;                           // offset: 0x20 ordinal: 0x4
  USHORT Card;                           // offset: 0x22 ordinal: 0x5
  USHORT Module;                         // offset: 0x24 ordinal: 0x6
  USHORT Bank;                           // offset: 0x26 ordinal: 0x7
  USHORT Device;                         // offset: 0x28 ordinal: 0x8
  USHORT Row;                            // offset: 0x2a ordinal: 0x9
  USHORT Column;                         // offset: 0x2c ordinal: 0xa
  USHORT BitPosition;                    // offset: 0x2e ordinal: 0xb
  ULONGLONG RequestorId;                 // offset: 0x30 ordinal: 0xc
  ULONGLONG ResponderId;                 // offset: 0x38 ordinal: 0xd
  ULONGLONG TargetId;                    // offset: 0x40 ordinal: 0xe
  UCHAR ErrorType;                       // offset: 0x48 ordinal: 0xf
} _WHEA_MEMORY_ERROR;

// 0xc0 bytes (sizeof)
typedef struct _WHEA_GENERIC_PROCESSOR_ERROR {
  ULONGLONG ValidBits;          // offset: 0x0 ordinal: 0x0
  UCHAR ProcessorType;          // offset: 0x8 ordinal: 0x1
  UCHAR InstructionSet;         // offset: 0x9 ordinal: 0x2
  UCHAR ErrorType;              // offset: 0xa ordinal: 0x3
  UCHAR Operation;              // offset: 0xb ordinal: 0x4
  UCHAR Flags;                  // offset: 0xc ordinal: 0x5
  UCHAR Level;                  // offset: 0xd ordinal: 0x6
  USHORT Reserved;              // offset: 0xe ordinal: 0x7
  ULONGLONG CPUVersion;         // offset: 0x10 ordinal: 0x8
  UCHAR CPUBrandString[128];    // offset: 0x18 ordinal: 0x9
  ULONGLONG ProcessorId;        // offset: 0x98 ordinal: 0xa
  ULONGLONG TargetAddress;      // offset: 0xa0 ordinal: 0xb
  ULONGLONG RequestorId;        // offset: 0xa8 ordinal: 0xc
  ULONGLONG ResponderId;        // offset: 0xb0 ordinal: 0xd
  ULONGLONG InstructionPointer; // offset: 0xb8 ordinal: 0xe
} _WHEA_GENERIC_PROCESSOR_ERROR;

// 0xd0 bytes (sizeof)
typedef union __anon_661 {
  struct _WHEA_GENERIC_PROCESSOR_ERROR
      ProcessorError;                             // offset: 0x0 ordinal: 0x0
  struct _WHEA_MEMORY_ERROR MemoryError;          // offset: 0x0 ordinal: 0x1
  struct _WHEA_NMI_ERROR NmiError;                // offset: 0x0 ordinal: 0x2
  struct _WHEA_PCIEXPRESS_ERROR PciExpressError;  // offset: 0x0 ordinal: 0x3
  struct _WHEA_PCIX_BUS_ERROR PciXBusError;       // offset: 0x0 ordinal: 0x4
  struct _WHEA_PCIX_DEVICE_ERROR PciXDeviceError; // offset: 0x0 ordinal: 0x5
} __anon_661;

// 0x119 bytes (sizeof)
typedef struct _WHEA_ERROR_PACKET {
  ULONG Signature;                              // offset: 0x0 ordinal: 0x0
  ULONG Flags;                                  // offset: 0x4 ordinal: 0x1
  ULONGLONG Size;                               // offset: 0x8 ordinal: 0x2
  ULONGLONG RawDataLength;                      // offset: 0x10 ordinal: 0x3
  ULONGLONG Context;                            // offset: 0x18 ordinal: 0x4
  enum _WHEA_ERROR_TYPE ErrorType;              // offset: 0x20 ordinal: 0x5
  enum _WHEA_ERROR_SEVERITY ErrorSeverity;      // offset: 0x24 ordinal: 0x6
  ULONG ErrorSourceId;                          // offset: 0x28 ordinal: 0x7
  enum _WHEA_ERROR_SOURCE_TYPE ErrorSourceType; // offset: 0x2c ordinal: 0x8
  ULONG Reserved1;                              // offset: 0x30 ordinal: 0x9
  ULONG Version;                                // offset: 0x34 ordinal: 0xa
  ULONGLONG Cpu;                                // offset: 0x38 ordinal: 0xb
  union __anon_661 u;                           // offset: 0x40 ordinal: 0xc
  enum _WHEA_ERROR_STATUS_FORMAT RawDataFormat; // offset: 0x110 ordinal: 0xd
  ULONG Reserved2;                              // offset: 0x114 ordinal: 0xe
  UCHAR RawData[1];                             // offset: 0x118 ordinal: 0xf
} _WHEA_ERROR_PACKET;

// 0x8 bytes (sizeof)
typedef struct _WHEA_PERSISTENCE_INFO {
  ULONGLONG Identifier : 16; // offset: 0x0 ordinal: 0x0
  ULONGLONG Length : 24;     // offset: 0x0 ordinal: 0x1
  ULONGLONG Reserved : 6;    // offset: 0x0 ordinal: 0x2
  ULONGLONG Attributes : 2;  // offset: 0x0 ordinal: 0x3
  ULONGLONG Signature : 16;  // offset: 0x0 ordinal: 0x4
} _WHEA_PERSISTENCE_INFO;

// 0x88 bytes (sizeof)
typedef struct _WHEA_ERROR_RECORD_HEADER {
  ULONG Signature;                               // offset: 0x0 ordinal: 0x0
  USHORT Revision;                               // offset: 0x4 ordinal: 0x1
  USHORT Reserved1;                              // offset: 0x6 ordinal: 0x2
  USHORT Reserved2;                              // offset: 0x8 ordinal: 0x3
  USHORT SectionCount;                           // offset: 0xa ordinal: 0x4
  enum _WHEA_ERROR_SEVERITY Severity;            // offset: 0xc ordinal: 0x5
  ULONG ValidationBits;                          // offset: 0x10 ordinal: 0x6
  ULONG Length;                                  // offset: 0x14 ordinal: 0x7
  union _LARGE_INTEGER Timestamp;                // offset: 0x18 ordinal: 0x8
  struct _GUID PlatformId;                       // offset: 0x20 ordinal: 0x9
  struct _GUID PartitionId;                      // offset: 0x30 ordinal: 0xa
  struct _GUID CreatorId;                        // offset: 0x40 ordinal: 0xb
  struct _GUID NotifyType;                       // offset: 0x50 ordinal: 0xc
  ULONGLONG RecordId;                            // offset: 0x60 ordinal: 0xd
  ULONG Flags;                                   // offset: 0x68 ordinal: 0xe
  struct _WHEA_PERSISTENCE_INFO PersistenceInfo; // offset: 0x70 ordinal: 0xf
  UCHAR Reserved3[12];                           // offset: 0x78 ordinal: 0x10
} _WHEA_ERROR_RECORD_HEADER;

// 0xd0 bytes (sizeof)
typedef struct _WHEA_ERROR_RECORD {
  struct _WHEA_ERROR_RECORD_HEADER Header; // offset: 0x0 ordinal: 0x0
  struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR
      SectionDescriptor[1]; // offset: 0x88 ordinal: 0x1
} _WHEA_ERROR_RECORD;

// 0x8 bytes (sizeof)
typedef struct _MM_PAGE_ACCESS_INFO {
  union {
    union _MM_PAGE_ACCESS_INFO_FLAGS Flags; // offset: 0x0 ordinal: 0x0
    ULONGLONG FileOffset;                   // offset: 0x0 ordinal: 0x1
    VOID *VirtualAddress;                   // offset: 0x0 ordinal: 0x2
    VOID *PointerProtoPte;                  // offset: 0x0 ordinal: 0x3
  };
} _MM_PAGE_ACCESS_INFO;

typedef LONG (*__anon_1083)(VOID *, VOID **, ULONGLONG *);

// 0x10 bytes (sizeof)
typedef struct _EVENT_DESCRIPTOR {
  USHORT Id;         // offset: 0x0 ordinal: 0x0
  UCHAR Version;     // offset: 0x2 ordinal: 0x1
  UCHAR Channel;     // offset: 0x3 ordinal: 0x2
  UCHAR Level;       // offset: 0x4 ordinal: 0x3
  UCHAR Opcode;      // offset: 0x5 ordinal: 0x4
  USHORT Task;       // offset: 0x6 ordinal: 0x5
  ULONGLONG Keyword; // offset: 0x8 ordinal: 0x6
} _EVENT_DESCRIPTOR;

// 0x10 bytes (sizeof)
typedef struct _EVENT_DATA_DESCRIPTOR {
  ULONGLONG Ptr;  // offset: 0x0 ordinal: 0x0
  ULONG Size;     // offset: 0x8 ordinal: 0x1
  ULONG Reserved; // offset: 0xc ordinal: 0x2
} _EVENT_DATA_DESCRIPTOR;

// 0x10 bytes (sizeof)
typedef struct __anon_581 {
  USHORT Reserved;     // offset: 0x0 ordinal: 0x0
  USHORT MessageCount; // offset: 0x2 ordinal: 0x1
  ULONG Vector;        // offset: 0x4 ordinal: 0x2
  ULONGLONG Affinity;  // offset: 0x8 ordinal: 0x3
} __anon_581;

// 0x10 bytes (sizeof)
typedef struct __anon_573 {
  ULONG Level;        // offset: 0x0 ordinal: 0x0
  ULONG Vector;       // offset: 0x4 ordinal: 0x1
  ULONGLONG Affinity; // offset: 0x8 ordinal: 0x2
} __anon_573;

// 0x10 bytes (sizeof)
typedef struct __anon_574 {
  union {
    struct __anon_581 Raw;        // offset: 0x0 ordinal: 0x0
    struct __anon_573 Translated; // offset: 0x0 ordinal: 0x1
  };
} __anon_574;

// 0x10 bytes (sizeof)
typedef union __anon_569 {
  struct __anon_572 Generic;            // offset: 0x0 ordinal: 0x0
  struct __anon_572 Port;               // offset: 0x0 ordinal: 0x1
  struct __anon_573 Interrupt;          // offset: 0x0 ordinal: 0x2
  struct __anon_574 MessageInterrupt;   // offset: 0x0 ordinal: 0x3
  struct __anon_572 Memory;             // offset: 0x0 ordinal: 0x4
  struct __anon_575 Dma;                // offset: 0x0 ordinal: 0x5
  struct __anon_563 DevicePrivate;      // offset: 0x0 ordinal: 0x6
  struct __anon_576 BusNumber;          // offset: 0x0 ordinal: 0x7
  struct __anon_577 DeviceSpecificData; // offset: 0x0 ordinal: 0x8
  struct __anon_578 Memory40;           // offset: 0x0 ordinal: 0x9
  struct __anon_579 Memory48;           // offset: 0x0 ordinal: 0xa
  struct __anon_580 Memory64;           // offset: 0x0 ordinal: 0xb
} __anon_569;

// 0x14 bytes (sizeof)
typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR {
  UCHAR Type;             // offset: 0x0 ordinal: 0x0
  UCHAR ShareDisposition; // offset: 0x1 ordinal: 0x1
  USHORT Flags;           // offset: 0x2 ordinal: 0x2
  union __anon_569 u;     // offset: 0x4 ordinal: 0x3
} _CM_PARTIAL_RESOURCE_DESCRIPTOR;

// 0x18 bytes (sizeof)
typedef struct _ARBITER_RETEST_ALLOCATION_PARAMETERS {
  struct _LIST_ENTRY *ArbitrationList; // offset: 0x0 ordinal: 0x0
  ULONG AllocateFromCount;             // offset: 0x8 ordinal: 0x1
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
      *AllocateFrom; // offset: 0x10 ordinal: 0x2
} _ARBITER_RETEST_ALLOCATION_PARAMETERS;

// 0x18 bytes (sizeof)
typedef struct _ARBITER_TEST_ALLOCATION_PARAMETERS {
  struct _LIST_ENTRY *ArbitrationList; // offset: 0x0 ordinal: 0x0
  ULONG AllocateFromCount;             // offset: 0x8 ordinal: 0x1
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
      *AllocateFrom; // offset: 0x10 ordinal: 0x2
} _ARBITER_TEST_ALLOCATION_PARAMETERS;

typedef LONG (*__anon_1250)(struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *,
                            ULONGLONG *, ULONGLONG *);

// 0x1c bytes (sizeof)
typedef struct _CM_PARTIAL_RESOURCE_LIST {
  USHORT Version;  // offset: 0x0 ordinal: 0x0
  USHORT Revision; // offset: 0x2 ordinal: 0x1
  ULONG Count;     // offset: 0x4 ordinal: 0x2
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
      PartialDescriptors[1]; // offset: 0x8 ordinal: 0x3
} _CM_PARTIAL_RESOURCE_LIST;

// 0x8 bytes (sizeof)
typedef struct _ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS {
  struct _CM_PARTIAL_RESOURCE_LIST *
      *AllocatedResources; // offset: 0x0 ordinal: 0x0
} _ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS;

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

// 0x10 bytes (sizeof)
typedef struct __anon_432 {
  struct _CM_RESOURCE_LIST *AllocatedResources; // offset: 0x0 ordinal: 0x0
  struct _CM_RESOURCE_LIST
      *AllocatedResourcesTranslated; // offset: 0x8 ordinal: 0x1
} __anon_432;

// 0x18 bytes (sizeof)
typedef struct __anon_561 {
  ULONG MinimumVector;                    // offset: 0x0 ordinal: 0x0
  ULONG MaximumVector;                    // offset: 0x4 ordinal: 0x1
  enum _IRQ_DEVICE_POLICY AffinityPolicy; // offset: 0x8 ordinal: 0x2
  enum _IRQ_PRIORITY PriorityPolicy;      // offset: 0xc ordinal: 0x3
  ULONGLONG TargetedProcessors;           // offset: 0x10 ordinal: 0x4
} __anon_561;

// 0x18 bytes (sizeof)
typedef union __anon_557 {
  struct __anon_560 Port;          // offset: 0x0 ordinal: 0x0
  struct __anon_560 Memory;        // offset: 0x0 ordinal: 0x1
  struct __anon_561 Interrupt;     // offset: 0x0 ordinal: 0x2
  struct __anon_562 Dma;           // offset: 0x0 ordinal: 0x3
  struct __anon_560 Generic;       // offset: 0x0 ordinal: 0x4
  struct __anon_563 DevicePrivate; // offset: 0x0 ordinal: 0x5
  struct __anon_564 BusNumber;     // offset: 0x0 ordinal: 0x6
  struct __anon_565 ConfigData;    // offset: 0x0 ordinal: 0x7
  struct __anon_566 Memory40;      // offset: 0x0 ordinal: 0x8
  struct __anon_567 Memory48;      // offset: 0x0 ordinal: 0x9
  struct __anon_568 Memory64;      // offset: 0x0 ordinal: 0xa
} __anon_557;

// 0x20 bytes (sizeof)
typedef struct _IO_RESOURCE_DESCRIPTOR {
  UCHAR Option;           // offset: 0x0 ordinal: 0x0
  UCHAR Type;             // offset: 0x1 ordinal: 0x1
  UCHAR ShareDisposition; // offset: 0x2 ordinal: 0x2
  UCHAR Spare1;           // offset: 0x3 ordinal: 0x3
  USHORT Flags;           // offset: 0x4 ordinal: 0x4
  USHORT Spare2;          // offset: 0x6 ordinal: 0x5
  union __anon_557 u;     // offset: 0x8 ordinal: 0x6
} _IO_RESOURCE_DESCRIPTOR;

// 0x20 bytes (sizeof)
typedef struct _ARBITER_QUERY_CONFLICT_PARAMETERS {
  struct _DEVICE_OBJECT *PhysicalDeviceObject; // offset: 0x0 ordinal: 0x0
  struct _IO_RESOURCE_DESCRIPTOR
      *ConflictingResource;                  // offset: 0x8 ordinal: 0x1
  ULONG *ConflictCount;                      // offset: 0x10 ordinal: 0x2
  struct _ARBITER_CONFLICT_INFO **Conflicts; // offset: 0x18 ordinal: 0x3
} _ARBITER_QUERY_CONFLICT_PARAMETERS;

// 0x20 bytes (sizeof)
typedef union __anon_1295 {
  struct _ARBITER_TEST_ALLOCATION_PARAMETERS
      TestAllocation; // offset: 0x0 ordinal: 0x0
  struct _ARBITER_RETEST_ALLOCATION_PARAMETERS
      RetestAllocation; // offset: 0x0 ordinal: 0x1
  struct _ARBITER_BOOT_ALLOCATION_PARAMETERS
      BootAllocation; // offset: 0x0 ordinal: 0x2
  struct _ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS
      QueryAllocatedResources; // offset: 0x0 ordinal: 0x3
  struct _ARBITER_QUERY_CONFLICT_PARAMETERS
      QueryConflict; // offset: 0x0 ordinal: 0x4
  struct _ARBITER_QUERY_ARBITRATE_PARAMETERS
      QueryArbitrate; // offset: 0x0 ordinal: 0x5
  struct _ARBITER_ADD_RESERVED_PARAMETERS
      AddReserved; // offset: 0x0 ordinal: 0x6
} __anon_1295;

// 0x20 bytes (sizeof)
typedef struct _ARBITER_PARAMETERS {
  union __anon_1295 Parameters; // offset: 0x0 ordinal: 0x0
} _ARBITER_PARAMETERS;

typedef LONG (*__anon_1279)(VOID *, enum _ARBITER_ACTION,
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
  struct _DEVICE_NODE *DeviceNode;             // offset: 0x20 ordinal: 0x3
  struct _LIST_ENTRY ResourceList;             // offset: 0x28 ordinal: 0x4
  struct _LIST_ENTRY BestResourceList;         // offset: 0x38 ordinal: 0x5
  struct _LIST_ENTRY BestConfig;               // offset: 0x48 ordinal: 0x6
  struct _LIST_ENTRY ActiveArbiterList;        // offset: 0x58 ordinal: 0x7
  UCHAR State;                                 // offset: 0x68 ordinal: 0x8
  UCHAR ResourcesChanged;                      // offset: 0x69 ordinal: 0x9
} _PI_RESOURCE_ARBITER_ENTRY;

// 0x40 bytes (sizeof)
typedef struct _ARBITER_ALTERNATIVE {
  ULONGLONG Minimum;                          // offset: 0x0 ordinal: 0x0
  ULONGLONG Maximum;                          // offset: 0x8 ordinal: 0x1
  ULONGLONG Length;                           // offset: 0x10 ordinal: 0x2
  ULONGLONG Alignment;                        // offset: 0x18 ordinal: 0x3
  LONG Priority;                              // offset: 0x20 ordinal: 0x4
  ULONG Flags;                                // offset: 0x24 ordinal: 0x5
  struct _IO_RESOURCE_DESCRIPTOR *Descriptor; // offset: 0x28 ordinal: 0x6
  ULONG Reserved[3];                          // offset: 0x30 ordinal: 0x7
} _ARBITER_ALTERNATIVE;

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

typedef LONG (*__anon_1251)(struct _IO_RESOURCE_DESCRIPTOR *);

typedef LONG (*__anon_1249)(struct _IO_RESOURCE_DESCRIPTOR *, ULONGLONG,
                            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *);

typedef LONG (*__anon_1248)(struct _IO_RESOURCE_DESCRIPTOR *, ULONGLONG *,
                            ULONGLONG *, ULONGLONG *, ULONGLONG *);

// 0x690 bytes (sizeof)
typedef struct _ARBITER_INSTANCE {
  ULONG Signature;                            // offset: 0x0 ordinal: 0x0
  struct _KEVENT *MutexEvent;                 // offset: 0x8 ordinal: 0x1
  USHORT *Name;                               // offset: 0x10 ordinal: 0x2
  USHORT *OrderingName;                       // offset: 0x18 ordinal: 0x3
  LONG ResourceType;                          // offset: 0x20 ordinal: 0x4
  struct _RTL_RANGE_LIST *Allocation;         // offset: 0x28 ordinal: 0x5
  struct _RTL_RANGE_LIST *PossibleAllocation; // offset: 0x30 ordinal: 0x6
  struct _ARBITER_ORDERING_LIST OrderingList; // offset: 0x38 ordinal: 0x7
  struct _ARBITER_ORDERING_LIST ReservedList; // offset: 0x48 ordinal: 0x8
  LONG ReferenceCount;                        // offset: 0x58 ordinal: 0x9
  struct _ARBITER_INTERFACE *Interface;       // offset: 0x60 ordinal: 0xa
  ULONG AllocationStackMaxSize;               // offset: 0x68 ordinal: 0xb
  struct _ARBITER_ALLOCATION_STATE
      *AllocationStack; // offset: 0x70 ordinal: 0xc
  LONG(*UnpackRequirement)
  (struct _IO_RESOURCE_DESCRIPTOR *, ULONGLONG *, ULONGLONG *, ULONGLONG *,
   ULONGLONG *); // offset: 0x78 ordinal: 0xd
  LONG(*PackResource)
  (struct _IO_RESOURCE_DESCRIPTOR *, ULONGLONG,
   struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *); // offset: 0x80 ordinal: 0xe
  LONG(*UnpackResource)
  (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *, ULONGLONG *,
   ULONGLONG *); // offset: 0x88 ordinal: 0xf
  LONG(*ScoreRequirement)
  (struct _IO_RESOURCE_DESCRIPTOR *); // offset: 0x90 ordinal: 0x10
  LONG(*TestAllocation)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_TEST_ALLOCATION_PARAMETERS *); // offset: 0x98 ordinal: 0x11
  LONG(*RetestAllocation)
  (struct _ARBITER_INSTANCE *, struct _ARBITER_RETEST_ALLOCATION_PARAMETERS
                                   *); // offset: 0xa0 ordinal: 0x12
  LONG(*CommitAllocation)
  (struct _ARBITER_INSTANCE *); // offset: 0xa8 ordinal: 0x13
  LONG(*RollbackAllocation)
  (struct _ARBITER_INSTANCE *); // offset: 0xb0 ordinal: 0x14
  LONG(*BootAllocation)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_BOOT_ALLOCATION_PARAMETERS *); // offset: 0xb8 ordinal: 0x15
  LONG(*QueryArbitrate)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_QUERY_ARBITRATE_PARAMETERS *); // offset: 0xc0 ordinal: 0x16
  LONG(*QueryConflict)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_QUERY_CONFLICT_PARAMETERS *); // offset: 0xc8 ordinal: 0x17
  LONG(*AddReserved)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ADD_RESERVED_PARAMETERS *); // offset: 0xd0 ordinal: 0x18
  LONG(*StartArbiter)
  (struct _ARBITER_INSTANCE *,
   struct _CM_RESOURCE_LIST *); // offset: 0xd8 ordinal: 0x19
  LONG(*PreprocessEntry)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *); // offset: 0xe0 ordinal: 0x1a
  LONG(*AllocateEntry)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *); // offset: 0xe8 ordinal: 0x1b
  UCHAR(*GetNextAllocationRange)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *); // offset: 0xf0 ordinal: 0x1c
  UCHAR(*FindSuitableRange)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *); // offset: 0xf8 ordinal: 0x1d
  VOID(*AddAllocation)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *); // offset: 0x100 ordinal: 0x1e
  VOID(*BacktrackAllocation)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *); // offset: 0x108 ordinal: 0x1f
  UCHAR(*OverrideConflict)
  (struct _ARBITER_INSTANCE *,
   struct _ARBITER_ALLOCATION_STATE *); // offset: 0x110 ordinal: 0x20
  LONG(*InitializeRangeList)
  (struct _ARBITER_INSTANCE *, ULONG, struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *,
   struct _RTL_RANGE_LIST *);             // offset: 0x118 ordinal: 0x21
  UCHAR TransactionInProgress;            // offset: 0x120 ordinal: 0x22
  VOID *Extension;                        // offset: 0x128 ordinal: 0x23
  struct _DEVICE_OBJECT *BusDeviceObject; // offset: 0x130 ordinal: 0x24
  VOID *ConflictCallbackContext;          // offset: 0x138 ordinal: 0x25
  UCHAR(*ConflictCallback)
  (VOID *, struct _RTL_RANGE *);   // offset: 0x140 ordinal: 0x26
  WCHAR PdoDescriptionString[336]; // offset: 0x148 ordinal: 0x27
  CHAR PdoSymbolicNameString[672]; // offset: 0x3e8 ordinal: 0x28
  WCHAR PdoAddressString[1];       // offset: 0x688 ordinal: 0x29
} _ARBITER_INSTANCE;

typedef LONG (*__anon_1263)(struct _ARBITER_INSTANCE *, ULONG,
                            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *,
                            struct _RTL_RANGE_LIST *);

typedef VOID (*__anon_1262)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_ALLOCATION_STATE *);

typedef UCHAR (*__anon_1261)(struct _ARBITER_INSTANCE *,
                             struct _ARBITER_ALLOCATION_STATE *);

typedef LONG (*__anon_1260)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_ALLOCATION_STATE *);

typedef LONG (*__anon_1259)(struct _ARBITER_INSTANCE *,
                            struct _CM_RESOURCE_LIST *);

typedef LONG (*__anon_1258)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_ADD_RESERVED_PARAMETERS *);

typedef LONG (*__anon_1257)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_QUERY_CONFLICT_PARAMETERS *);

typedef LONG (*__anon_1256)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_QUERY_ARBITRATE_PARAMETERS *);

typedef LONG (*__anon_1255)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_BOOT_ALLOCATION_PARAMETERS *);

typedef LONG (*__anon_1254)(struct _ARBITER_INSTANCE *);

typedef LONG (*__anon_1253)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_RETEST_ALLOCATION_PARAMETERS *);

typedef LONG (*__anon_1252)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_TEST_ALLOCATION_PARAMETERS *);

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

// 0x40 bytes (sizeof)
typedef struct _PNP_RESOURCE_REQUEST {
  struct _DEVICE_OBJECT *PhysicalDevice;       // offset: 0x0 ordinal: 0x0
  ULONG Flags;                                 // offset: 0x8 ordinal: 0x1
  enum _ARBITER_REQUEST_SOURCE AllocationType; // offset: 0xc ordinal: 0x2
  ULONG Priority;                              // offset: 0x10 ordinal: 0x3
  ULONG Position;                              // offset: 0x14 ordinal: 0x4
  struct _IO_RESOURCE_REQUIREMENTS_LIST
      *ResourceRequirements;                    // offset: 0x18 ordinal: 0x5
  VOID *ReqList;                                // offset: 0x20 ordinal: 0x6
  struct _CM_RESOURCE_LIST *ResourceAssignment; // offset: 0x28 ordinal: 0x7
  struct _CM_RESOURCE_LIST
      *TranslatedResourceAssignment; // offset: 0x30 ordinal: 0x8
  LONG Status;                       // offset: 0x38 ordinal: 0x9
} _PNP_RESOURCE_REQUEST;

// 0x8 bytes (sizeof)
typedef struct __anon_423 {
  struct _IO_RESOURCE_REQUIREMENTS_LIST
      *IoResourceRequirementList; // offset: 0x0 ordinal: 0x0
} __anon_423;

// 0x8 bytes (sizeof)
typedef struct _MMWSLE_FREE_ENTRY {
  ULONGLONG MustBeZero : 1;    // offset: 0x0 ordinal: 0x0
  ULONGLONG PreviousFree : 31; // offset: 0x0 ordinal: 0x1
  ULONGLONG NextFree : 32;     // offset: 0x0 ordinal: 0x2
} _MMWSLE_FREE_ENTRY;

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
typedef union __anon_535 {
  VOID *VirtualAddress;         // offset: 0x0 ordinal: 0x0
  ULONGLONG Long;               // offset: 0x0 ordinal: 0x1
  struct _MMWSLENTRY e1;        // offset: 0x0 ordinal: 0x2
  struct _MMWSLE_FREE_ENTRY e2; // offset: 0x0 ordinal: 0x3
} __anon_535;

// 0x8 bytes (sizeof)
typedef struct _MMWSLE {
  union __anon_535 u1; // offset: 0x0 ordinal: 0x0
} _MMWSLE;

// 0x50 bytes (sizeof)
typedef union __anon_1327 {
  struct _CELL_DATA CellData; // offset: 0x0 ordinal: 0x0
  ULONGLONG List[1];          // offset: 0x0 ordinal: 0x1
} __anon_1327;

// 0x58 bytes (sizeof)
typedef struct _CM_CACHED_VALUE_INDEX {
  ULONG CellIndex;        // offset: 0x0 ordinal: 0x0
  union __anon_1327 Data; // offset: 0x8 ordinal: 0x1
} _CM_CACHED_VALUE_INDEX;

// 0x488 bytes (sizeof)
typedef struct _MMWSL {
  ULONG FirstFree;                              // offset: 0x0 ordinal: 0x0
  ULONG FirstDynamic;                           // offset: 0x4 ordinal: 0x1
  ULONG LastEntry;                              // offset: 0x8 ordinal: 0x2
  ULONG NextSlot;                               // offset: 0xc ordinal: 0x3
  struct _MMWSLE *Wsle;                         // offset: 0x10 ordinal: 0x4
  VOID *LowestPagableAddress;                   // offset: 0x18 ordinal: 0x5
  ULONG LastInitializedWsle;                    // offset: 0x20 ordinal: 0x6
  ULONG NextEstimationSlot;                     // offset: 0x24 ordinal: 0x7
  ULONG NextAgingSlot;                          // offset: 0x28 ordinal: 0x8
  ULONG EstimatedAvailable;                     // offset: 0x2c ordinal: 0x9
  ULONG GrowthSinceLastEstimate;                // offset: 0x30 ordinal: 0xa
  ULONG NumberOfCommittedPageTables;            // offset: 0x34 ordinal: 0xb
  ULONG VadBitMapHint;                          // offset: 0x38 ordinal: 0xc
  ULONG NonDirectCount;                         // offset: 0x3c ordinal: 0xd
  struct _MMWSLE_NONDIRECT_HASH *NonDirectHash; // offset: 0x40 ordinal: 0xe
  struct _MMWSLE_HASH *HashTableStart;          // offset: 0x48 ordinal: 0xf
  struct _MMWSLE_HASH
      *HighestPermittedHashAddress;            // offset: 0x50 ordinal: 0x10
  VOID *HighestUserAddress;                    // offset: 0x58 ordinal: 0x11
  ULONG MaximumUserPageTablePages;             // offset: 0x60 ordinal: 0x12
  ULONG MaximumUserPageDirectoryPages;         // offset: 0x64 ordinal: 0x13
  ULONG *CommittedPageTables;                  // offset: 0x68 ordinal: 0x14
  ULONG NumberOfCommittedPageDirectories;      // offset: 0x70 ordinal: 0x15
  ULONGLONG CommittedPageDirectories[128];     // offset: 0x78 ordinal: 0x16
  ULONG NumberOfCommittedPageDirectoryParents; // offset: 0x478 ordinal: 0x17
  ULONGLONG CommittedPageDirectoryParents[1];  // offset: 0x480 ordinal: 0x18
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

// 0x28 bytes (sizeof)
typedef union __anon_1085 {
  struct _RTL_CRITICAL_SECTION CriticalSection; // offset: 0x0 ordinal: 0x0
} __anon_1085;

// 0x28 bytes (sizeof)
typedef struct _HEAP_LOCK {
  union __anon_1085 Lock; // offset: 0x0 ordinal: 0x0
} _HEAP_LOCK;

// 0x1f8 bytes (sizeof)
typedef struct _HEAP {
  struct _HEAP_ENTRY Entry;               // offset: 0x0 ordinal: 0x0
  ULONG SegmentSignature;                 // offset: 0x10 ordinal: 0x1
  ULONG SegmentFlags;                     // offset: 0x14 ordinal: 0x2
  struct _LIST_ENTRY SegmentListEntry;    // offset: 0x18 ordinal: 0x3
  struct _HEAP *Heap;                     // offset: 0x28 ordinal: 0x4
  VOID *BaseAddress;                      // offset: 0x30 ordinal: 0x5
  ULONG NumberOfPages;                    // offset: 0x38 ordinal: 0x6
  struct _HEAP_ENTRY *FirstEntry;         // offset: 0x40 ordinal: 0x7
  struct _HEAP_ENTRY *LastValidEntry;     // offset: 0x48 ordinal: 0x8
  ULONG NumberOfUnCommittedPages;         // offset: 0x50 ordinal: 0x9
  ULONG NumberOfUnCommittedRanges;        // offset: 0x54 ordinal: 0xa
  USHORT SegmentAllocatorBackTraceIndex;  // offset: 0x58 ordinal: 0xb
  USHORT Reserved;                        // offset: 0x5a ordinal: 0xc
  struct _LIST_ENTRY UCRSegmentList;      // offset: 0x60 ordinal: 0xd
  ULONG Flags;                            // offset: 0x70 ordinal: 0xe
  ULONG ForceFlags;                       // offset: 0x74 ordinal: 0xf
  ULONG CompatibilityFlags;               // offset: 0x78 ordinal: 0x10
  ULONG EncodeFlagMask;                   // offset: 0x7c ordinal: 0x11
  struct _HEAP_ENTRY Encoding;            // offset: 0x80 ordinal: 0x12
  ULONGLONG PointerKey;                   // offset: 0x90 ordinal: 0x13
  ULONG Interceptor;                      // offset: 0x98 ordinal: 0x14
  ULONG VirtualMemoryThreshold;           // offset: 0x9c ordinal: 0x15
  ULONG Signature;                        // offset: 0xa0 ordinal: 0x16
  ULONGLONG SegmentReserve;               // offset: 0xa8 ordinal: 0x17
  ULONGLONG SegmentCommit;                // offset: 0xb0 ordinal: 0x18
  ULONGLONG DeCommitFreeBlockThreshold;   // offset: 0xb8 ordinal: 0x19
  ULONGLONG DeCommitTotalFreeThreshold;   // offset: 0xc0 ordinal: 0x1a
  ULONGLONG TotalFreeSize;                // offset: 0xc8 ordinal: 0x1b
  ULONGLONG MaximumAllocationSize;        // offset: 0xd0 ordinal: 0x1c
  USHORT ProcessHeapsListIndex;           // offset: 0xd8 ordinal: 0x1d
  USHORT HeaderValidateLength;            // offset: 0xda ordinal: 0x1e
  VOID *HeaderValidateCopy;               // offset: 0xe0 ordinal: 0x1f
  USHORT NextAvailableTagIndex;           // offset: 0xe8 ordinal: 0x20
  USHORT MaximumTagIndex;                 // offset: 0xea ordinal: 0x21
  struct _HEAP_TAG_ENTRY *TagEntries;     // offset: 0xf0 ordinal: 0x22
  struct _LIST_ENTRY UCRList;             // offset: 0xf8 ordinal: 0x23
  ULONGLONG AlignRound;                   // offset: 0x108 ordinal: 0x24
  ULONGLONG AlignMask;                    // offset: 0x110 ordinal: 0x25
  struct _LIST_ENTRY VirtualAllocdBlocks; // offset: 0x118 ordinal: 0x26
  struct _LIST_ENTRY SegmentList;         // offset: 0x128 ordinal: 0x27
  USHORT AllocatorBackTraceIndex;         // offset: 0x138 ordinal: 0x28
  ULONG NonDedicatedListLength;           // offset: 0x13c ordinal: 0x29
  VOID *BlocksIndex;                      // offset: 0x140 ordinal: 0x2a
  VOID *UCRIndex;                         // offset: 0x148 ordinal: 0x2b
  struct _HEAP_PSEUDO_TAG_ENTRY
      *PseudoTagEntries;           // offset: 0x150 ordinal: 0x2c
  struct _LIST_ENTRY FreeLists;    // offset: 0x158 ordinal: 0x2d
  struct _HEAP_LOCK *LockVariable; // offset: 0x168 ordinal: 0x2e
  LONG(*CommitRoutine)
  (VOID *, VOID **, ULONGLONG *); // offset: 0x170 ordinal: 0x2f
  VOID *FrontEndHeap;             // offset: 0x178 ordinal: 0x30
  USHORT FrontHeapLockCount;      // offset: 0x180 ordinal: 0x31
  UCHAR FrontEndHeapType;         // offset: 0x182 ordinal: 0x32
  struct _HEAP_COUNTERS Counters; // offset: 0x188 ordinal: 0x33
  struct _HEAP_TUNING_PARAMETERS
      TuningParameters; // offset: 0x1e8 ordinal: 0x34
} _HEAP;

// 0x30 bytes (sizeof)
typedef struct _RTL_CRITICAL_SECTION_DEBUG {
  USHORT Type;                                   // offset: 0x0 ordinal: 0x0
  USHORT CreatorBackTraceIndex;                  // offset: 0x2 ordinal: 0x1
  struct _RTL_CRITICAL_SECTION *CriticalSection; // offset: 0x8 ordinal: 0x2
  struct _LIST_ENTRY ProcessLocksList;           // offset: 0x10 ordinal: 0x3
  ULONG EntryCount;                              // offset: 0x20 ordinal: 0x4
  ULONG ContentionCount;                         // offset: 0x24 ordinal: 0x5
  ULONG Flags;                                   // offset: 0x28 ordinal: 0x6
  USHORT CreatorBackTraceIndexHigh;              // offset: 0x2c ordinal: 0x7
  USHORT SpareUSHORT;                            // offset: 0x2e ordinal: 0x8
} _RTL_CRITICAL_SECTION_DEBUG;

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

// 0x10 bytes (sizeof)
typedef struct _OWNER_ENTRY {
  ULONGLONG OwnerThread; // offset: 0x0 ordinal: 0x0
  union {
    LONG OwnerCount; // offset: 0x8 ordinal: 0x1
    ULONG TableSize; // offset: 0x8 ordinal: 0x2
  };
} _OWNER_ENTRY;

// 0x20 bytes (sizeof)
typedef struct __anon_433 {
  ULONGLONG ProviderId; // offset: 0x0 ordinal: 0x0
  VOID *DataPath;       // offset: 0x8 ordinal: 0x1
  ULONG BufferSize;     // offset: 0x10 ordinal: 0x2
  VOID *Buffer;         // offset: 0x18 ordinal: 0x3
} __anon_433;

// 0x20 bytes (sizeof)
typedef union __anon_379 {
  struct __anon_401 Create;                     // offset: 0x0 ordinal: 0x0
  struct __anon_402 CreatePipe;                 // offset: 0x0 ordinal: 0x1
  struct __anon_403 CreateMailslot;             // offset: 0x0 ordinal: 0x2
  struct __anon_404 Read;                       // offset: 0x0 ordinal: 0x3
  struct __anon_404 Write;                      // offset: 0x0 ordinal: 0x4
  struct __anon_405 QueryDirectory;             // offset: 0x0 ordinal: 0x5
  struct __anon_406 NotifyDirectory;            // offset: 0x0 ordinal: 0x6
  struct __anon_407 QueryFile;                  // offset: 0x0 ordinal: 0x7
  struct __anon_408 SetFile;                    // offset: 0x0 ordinal: 0x8
  struct __anon_409 QueryEa;                    // offset: 0x0 ordinal: 0x9
  struct __anon_410 SetEa;                      // offset: 0x0 ordinal: 0xa
  struct __anon_411 QueryVolume;                // offset: 0x0 ordinal: 0xb
  struct __anon_411 SetVolume;                  // offset: 0x0 ordinal: 0xc
  struct __anon_412 FileSystemControl;          // offset: 0x0 ordinal: 0xd
  struct __anon_413 LockControl;                // offset: 0x0 ordinal: 0xe
  struct __anon_414 DeviceIoControl;            // offset: 0x0 ordinal: 0xf
  struct __anon_415 QuerySecurity;              // offset: 0x0 ordinal: 0x10
  struct __anon_416 SetSecurity;                // offset: 0x0 ordinal: 0x11
  struct __anon_417 MountVolume;                // offset: 0x0 ordinal: 0x12
  struct __anon_417 VerifyVolume;               // offset: 0x0 ordinal: 0x13
  struct __anon_418 Scsi;                       // offset: 0x0 ordinal: 0x14
  struct __anon_419 QueryQuota;                 // offset: 0x0 ordinal: 0x15
  struct __anon_410 SetQuota;                   // offset: 0x0 ordinal: 0x16
  struct __anon_420 QueryDeviceRelations;       // offset: 0x0 ordinal: 0x17
  struct __anon_421 QueryInterface;             // offset: 0x0 ordinal: 0x18
  struct __anon_422 DeviceCapabilities;         // offset: 0x0 ordinal: 0x19
  struct __anon_423 FilterResourceRequirements; // offset: 0x0 ordinal: 0x1a
  struct __anon_424 ReadWriteConfig;            // offset: 0x0 ordinal: 0x1b
  struct __anon_425 SetLock;                    // offset: 0x0 ordinal: 0x1c
  struct __anon_426 QueryId;                    // offset: 0x0 ordinal: 0x1d
  struct __anon_427 QueryDeviceText;            // offset: 0x0 ordinal: 0x1e
  struct __anon_428 UsageNotification;          // offset: 0x0 ordinal: 0x1f
  struct __anon_429 WaitWake;                   // offset: 0x0 ordinal: 0x20
  struct __anon_430 PowerSequence;              // offset: 0x0 ordinal: 0x21
  struct __anon_431 Power;                      // offset: 0x0 ordinal: 0x22
  struct __anon_432 StartDevice;                // offset: 0x0 ordinal: 0x23
  struct __anon_433 WMI;                        // offset: 0x0 ordinal: 0x24
  struct __anon_434 Others;                     // offset: 0x0 ordinal: 0x25
} __anon_379;

// 0x28 bytes (sizeof)
typedef struct _MMADDRESS_NODE {
  union __anon_457 u1;                // offset: 0x0 ordinal: 0x0
  struct _MMADDRESS_NODE *LeftChild;  // offset: 0x8 ordinal: 0x1
  struct _MMADDRESS_NODE *RightChild; // offset: 0x10 ordinal: 0x2
  ULONGLONG StartingVpn;              // offset: 0x18 ordinal: 0x3
  ULONGLONG EndingVpn;                // offset: 0x20 ordinal: 0x4
} _MMADDRESS_NODE;

// 0x68 bytes (sizeof)
typedef struct _ERESOURCE {
  struct _LIST_ENTRY SystemResourcesList; // offset: 0x0 ordinal: 0x0
  struct _OWNER_ENTRY *OwnerTable;        // offset: 0x10 ordinal: 0x1
  SHORT ActiveCount;                      // offset: 0x18 ordinal: 0x2
  USHORT Flag;                            // offset: 0x1a ordinal: 0x3
  struct _KSEMAPHORE *SharedWaiters;      // offset: 0x20 ordinal: 0x4
  struct _KEVENT *ExclusiveWaiters;       // offset: 0x28 ordinal: 0x5
  struct _OWNER_ENTRY OwnerEntry;         // offset: 0x30 ordinal: 0x6
  ULONG ActiveEntries;                    // offset: 0x40 ordinal: 0x7
  ULONG ContentionCount;                  // offset: 0x44 ordinal: 0x8
  ULONG NumberOfSharedWaiters;            // offset: 0x48 ordinal: 0x9
  ULONG NumberOfExclusiveWaiters;         // offset: 0x4c ordinal: 0xa
  VOID *Reserved2;                        // offset: 0x50 ordinal: 0xb
  union {
    VOID *Address;                   // offset: 0x58 ordinal: 0xc
    ULONGLONG CreatorBackTraceIndex; // offset: 0x58 ordinal: 0xd
  };
  ULONGLONG SpinLock; // offset: 0x60 ordinal: 0xe
} _ERESOURCE;

// 0x318 bytes (sizeof)
typedef struct _TOKEN {
  struct _TOKEN_SOURCE TokenSource;           // offset: 0x0 ordinal: 0x0
  struct _LUID TokenId;                       // offset: 0x10 ordinal: 0x1
  struct _LUID AuthenticationId;              // offset: 0x18 ordinal: 0x2
  struct _LUID ParentTokenId;                 // offset: 0x20 ordinal: 0x3
  union _LARGE_INTEGER ExpirationTime;        // offset: 0x28 ordinal: 0x4
  struct _ERESOURCE *TokenLock;               // offset: 0x30 ordinal: 0x5
  struct _LUID ModifiedId;                    // offset: 0x38 ordinal: 0x6
  struct _SEP_TOKEN_PRIVILEGES Privileges;    // offset: 0x40 ordinal: 0x7
  struct _SEP_AUDIT_POLICY AuditPolicy;       // offset: 0x58 ordinal: 0x8
  ULONG SessionId;                            // offset: 0x74 ordinal: 0x9
  ULONG UserAndGroupCount;                    // offset: 0x78 ordinal: 0xa
  ULONG RestrictedSidCount;                   // offset: 0x7c ordinal: 0xb
  ULONG VariableLength;                       // offset: 0x80 ordinal: 0xc
  ULONG DynamicCharged;                       // offset: 0x84 ordinal: 0xd
  ULONG DynamicAvailable;                     // offset: 0x88 ordinal: 0xe
  ULONG DefaultOwnerIndex;                    // offset: 0x8c ordinal: 0xf
  struct _SID_AND_ATTRIBUTES *UserAndGroups;  // offset: 0x90 ordinal: 0x10
  struct _SID_AND_ATTRIBUTES *RestrictedSids; // offset: 0x98 ordinal: 0x11
  VOID *PrimaryGroup;                         // offset: 0xa0 ordinal: 0x12
  ULONG *DynamicPart;                         // offset: 0xa8 ordinal: 0x13
  struct _ACL *DefaultDacl;                   // offset: 0xb0 ordinal: 0x14
  enum _TOKEN_TYPE TokenType;                 // offset: 0xb8 ordinal: 0x15
  enum _SECURITY_IMPERSONATION_LEVEL
      ImpersonationLevel;                       // offset: 0xbc ordinal: 0x16
  ULONG TokenFlags;                             // offset: 0xc0 ordinal: 0x17
  UCHAR TokenInUse;                             // offset: 0xc4 ordinal: 0x18
  ULONG IntegrityLevelIndex;                    // offset: 0xc8 ordinal: 0x19
  ULONG MandatoryPolicy;                        // offset: 0xcc ordinal: 0x1a
  struct _SECURITY_TOKEN_PROXY_DATA *ProxyData; // offset: 0xd0 ordinal: 0x1b
  struct _SECURITY_TOKEN_AUDIT_DATA *AuditData; // offset: 0xd8 ordinal: 0x1c
  struct _SEP_LOGON_SESSION_REFERENCES
      *LogonSession;                       // offset: 0xe0 ordinal: 0x1d
  struct _LUID OriginatingLogonSession;    // offset: 0xe8 ordinal: 0x1e
  struct _SID_AND_ATTRIBUTES_HASH SidHash; // offset: 0xf0 ordinal: 0x1f
  struct _SID_AND_ATTRIBUTES_HASH
      RestrictedSidHash;  // offset: 0x200 ordinal: 0x20
  ULONGLONG VariablePart; // offset: 0x310 ordinal: 0x21
} _TOKEN;

// 0x8 bytes (sizeof)
typedef struct __anon_527 {
  struct _ERESOURCE *ResourceToRelease; // offset: 0x0 ordinal: 0x0
} __anon_527;

// 0x10 bytes (sizeof)
typedef struct __anon_526 {
  union _LARGE_INTEGER *EndingOffset;    // offset: 0x0 ordinal: 0x0
  struct _ERESOURCE **ResourceToRelease; // offset: 0x8 ordinal: 0x1
} __anon_526;

// 0x28 bytes (sizeof)
typedef union _FS_FILTER_PARAMETERS {
  struct __anon_526 AcquireForModifiedPageWriter; // offset: 0x0 ordinal: 0x0
  struct __anon_527 ReleaseForModifiedPageWriter; // offset: 0x0 ordinal: 0x1
  struct __anon_528
      AcquireForSectionSynchronization;     // offset: 0x0 ordinal: 0x2
  struct __anon_529 NotifyStreamFileObject; // offset: 0x0 ordinal: 0x3
  struct __anon_530 Others;                 // offset: 0x0 ordinal: 0x4
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

typedef VOID (*__anon_384)(struct _FS_FILTER_CALLBACK_DATA *, LONG, VOID *);

typedef LONG (*__anon_383)(struct _FS_FILTER_CALLBACK_DATA *, VOID **);

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

typedef LONG (*__anon_344)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                           struct _ERESOURCE **, struct _DEVICE_OBJECT *);

typedef LONG (*__anon_350)(struct _FILE_OBJECT *, struct _ERESOURCE *,
                           struct _DEVICE_OBJECT *);

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
typedef union __anon_678 {
  ULONGLONG Long;                             // offset: 0x0 ordinal: 0x0
  ULONGLONG VolatileLong;                     // offset: 0x0 ordinal: 0x1
  struct _MMPTE_HARDWARE Hard;                // offset: 0x0 ordinal: 0x2
  struct _MMPTE_HARDWARE_LARGEPAGE HardLarge; // offset: 0x0 ordinal: 0x3
  struct _HARDWARE_PTE Flush;                 // offset: 0x0 ordinal: 0x4
  struct _MMPTE_PROTOTYPE Proto;              // offset: 0x0 ordinal: 0x5
  struct _MMPTE_SOFTWARE Soft;                // offset: 0x0 ordinal: 0x6
  struct _MMPTE_TRANSITION Trans;             // offset: 0x0 ordinal: 0x7
  struct _MMPTE_SUBSECTION Subsect;           // offset: 0x0 ordinal: 0x8
  struct _MMPTE_LIST List;                    // offset: 0x0 ordinal: 0x9
} __anon_678;

// 0x8 bytes (sizeof)
typedef struct _MMPTE {
  union __anon_678 u; // offset: 0x0 ordinal: 0x0
} _MMPTE;

// 0x20 bytes (sizeof)
typedef struct _MI_SYSTEM_PTE_TYPE {
  struct _MMPTE *FirstFreePte;         // offset: 0x0 ordinal: 0x0
  ULONG *FailureCount;                 // offset: 0x8 ordinal: 0x1
  struct _KGUARDED_MUTEX *GlobalMutex; // offset: 0x10 ordinal: 0x2
  ULONG TbFlushTimeStamp;              // offset: 0x18 ordinal: 0x3
} _MI_SYSTEM_PTE_TYPE;

// 0x30 bytes (sizeof)
typedef struct _MI_SPECIAL_POOL {
  struct _MMPTE *PteBase;             // offset: 0x0 ordinal: 0x0
  struct _MMPTE FreePteHead;          // offset: 0x8 ordinal: 0x1
  struct _MMPTE FreePteTail;          // offset: 0x10 ordinal: 0x2
  LONGLONG PagesInUse;                // offset: 0x18 ordinal: 0x3
  struct _RTL_BITMAP SpecialPoolPdes; // offset: 0x20 ordinal: 0x4
} _MI_SPECIAL_POOL;

// 0x68 bytes (sizeof)
typedef struct _MM_PAGED_POOL_INFO {
  struct _KGUARDED_MUTEX Mutex;              // offset: 0x0 ordinal: 0x0
  struct _RTL_BITMAP PagedPoolAllocationMap; // offset: 0x38 ordinal: 0x1
  struct _MMPTE *FirstPteForPagedPool;       // offset: 0x48 ordinal: 0x2
  ULONG PagedPoolHint;                       // offset: 0x50 ordinal: 0x3
  ULONGLONG PagedPoolCommit;                 // offset: 0x58 ordinal: 0x4
  ULONGLONG AllocatedPagedPool;              // offset: 0x60 ordinal: 0x5
} _MM_PAGED_POOL_INFO;

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
typedef union __anon_1166 {
  struct _MMBANKED_SECTION *Banked;    // offset: 0x0 ordinal: 0x0
  struct _MMEXTEND_INFO *ExtendedInfo; // offset: 0x0 ordinal: 0x1
} __anon_1166;

// 0x38 bytes (sizeof)
typedef struct _MI_PER_SESSION_PROTOS {
  union __anon_791 u1;                // offset: 0x0 ordinal: 0x0
  struct _MMADDRESS_NODE *LeftChild;  // offset: 0x8 ordinal: 0x1
  struct _MMADDRESS_NODE *RightChild; // offset: 0x10 ordinal: 0x2
  union {
    ULONG SessionId;                // offset: 0x18 ordinal: 0x3
    ULONGLONG StartingVpn;          // offset: 0x18 ordinal: 0x4
    struct _SUBSECTION *Subsection; // offset: 0x18 ordinal: 0x5
  };
  ULONGLONG EndingVpn;           // offset: 0x20 ordinal: 0x6
  struct _MMPTE *SubsectionBase; // offset: 0x28 ordinal: 0x7
  union __anon_794 u2;           // offset: 0x30 ordinal: 0x8
} _MI_PER_SESSION_PROTOS;

// 0x68 bytes (sizeof)
typedef struct _MSUBSECTION {
  struct _CONTROL_AREA *ControlArea; // offset: 0x0 ordinal: 0x0
  struct _MMPTE *SubsectionBase;     // offset: 0x8 ordinal: 0x1
  union {
    struct _SUBSECTION *NextSubsection;        // offset: 0x10 ordinal: 0x2
    struct _MSUBSECTION *NextMappedSubsection; // offset: 0x10 ordinal: 0x3
  };
  ULONG PtesInSubsection; // offset: 0x18 ordinal: 0x4
  union {
    ULONG UnusedPtes;                           // offset: 0x20 ordinal: 0x5
    struct _MM_AVL_TABLE *GlobalPerSessionHead; // offset: 0x20 ordinal: 0x6
  };
  union __anon_745 u;                    // offset: 0x28 ordinal: 0x7
  ULONG StartingSector;                  // offset: 0x2c ordinal: 0x8
  ULONG NumberOfFullSectors;             // offset: 0x30 ordinal: 0x9
  union __anon_746 u1;                   // offset: 0x38 ordinal: 0xa
  struct _MMSUBSECTION_NODE *LeftChild;  // offset: 0x40 ordinal: 0xb
  struct _MMSUBSECTION_NODE *RightChild; // offset: 0x48 ordinal: 0xc
  struct _LIST_ENTRY DereferenceList;    // offset: 0x50 ordinal: 0xd
  ULONGLONG NumberOfMappedViews;         // offset: 0x60 ordinal: 0xe
} _MSUBSECTION;

// 0x38 bytes (sizeof)
typedef struct _SUBSECTION {
  struct _CONTROL_AREA *ControlArea;  // offset: 0x0 ordinal: 0x0
  struct _MMPTE *SubsectionBase;      // offset: 0x8 ordinal: 0x1
  struct _SUBSECTION *NextSubsection; // offset: 0x10 ordinal: 0x2
  ULONG PtesInSubsection;             // offset: 0x18 ordinal: 0x3
  union {
    ULONG UnusedPtes;                           // offset: 0x20 ordinal: 0x4
    struct _MM_AVL_TABLE *GlobalPerSessionHead; // offset: 0x20 ordinal: 0x5
  };
  union __anon_745 u;        // offset: 0x28 ordinal: 0x6
  ULONG StartingSector;      // offset: 0x2c ordinal: 0x7
  ULONG NumberOfFullSectors; // offset: 0x30 ordinal: 0x8
} _SUBSECTION;

// 0x8 bytes (sizeof)
typedef union __anon_724 {
  ULONGLONG Blink;              // offset: 0x0 ordinal: 0x0
  struct _MMPTE *ImageProtoPte; // offset: 0x0 ordinal: 0x1
  ULONGLONG ShareCount;         // offset: 0x0 ordinal: 0x2
} __anon_724;

// 0x30 bytes (sizeof)
typedef struct _MMPFN {
  union __anon_723 u1; // offset: 0x0 ordinal: 0x0
  union __anon_724 u2; // offset: 0x8 ordinal: 0x1
  union {
    struct _MMPTE *PteAddress; // offset: 0x10 ordinal: 0x2
    VOID *VolatilePteAddress;  // offset: 0x10 ordinal: 0x3
  };
  union __anon_729 u3;         // offset: 0x18 ordinal: 0x4
  USHORT UsedPageTableEntries; // offset: 0x1c ordinal: 0x5
  UCHAR VaType;                // offset: 0x1e ordinal: 0x6
  UCHAR ViewCount;             // offset: 0x1f ordinal: 0x7
  union {
    struct _MMPTE OriginalPte; // offset: 0x20 ordinal: 0x8
    LONG AweReferenceCount;    // offset: 0x20 ordinal: 0x9
  };
  union __anon_731 u4; // offset: 0x28 ordinal: 0xa
} _MMPFN;

// 0xd8 bytes (sizeof)
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
      *CompletionContext;     // offset: 0xb0 ordinal: 0x1a
  ULONGLONG IrpListLock;      // offset: 0xb8 ordinal: 0x1b
  struct _LIST_ENTRY IrpList; // offset: 0xc0 ordinal: 0x1c
  VOID *FileObjectExtension;  // offset: 0xd0 ordinal: 0x1d
} _FILE_OBJECT;

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
typedef union _PS_CLIENT_SECURITY_CONTEXT {
  ULONGLONG ImpersonationData;      // offset: 0x0 ordinal: 0x0
  VOID *ImpersonationToken;         // offset: 0x0 ordinal: 0x1
  ULONGLONG ImpersonationLevel : 2; // offset: 0x0 ordinal: 0x2
  ULONGLONG EffectiveOnly : 1;      // offset: 0x0 ordinal: 0x3
} _PS_CLIENT_SECURITY_CONTEXT;

// 0x8 bytes (sizeof)
typedef struct _EX_FAST_REF {
  union {
    VOID *Object;         // offset: 0x0 ordinal: 0x0
    ULONGLONG RefCnt : 4; // offset: 0x0 ordinal: 0x1
  };
  ULONGLONG Value; // offset: 0x0 ordinal: 0x2
} _EX_FAST_REF;

// 0x1c8 bytes (sizeof)
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
  struct _EX_FAST_REF FileObjectFastRef;      // offset: 0x60 ordinal: 0xa
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
      *UninitializeEvent;                      // offset: 0x110 ordinal: 0x22
  struct _VACB *NeedToZeroVacb;                // offset: 0x118 ordinal: 0x23
  ULONGLONG BcbSpinLock;                       // offset: 0x120 ordinal: 0x24
  VOID *Reserved;                              // offset: 0x128 ordinal: 0x25
  struct _KEVENT Event;                        // offset: 0x130 ordinal: 0x26
  union _LARGE_INTEGER HighWaterMappingOffset; // offset: 0x148 ordinal: 0x27
  struct _PRIVATE_CACHE_MAP PrivateCacheMap;   // offset: 0x150 ordinal: 0x28
  VOID *WriteBehindWorkQueueEntry;             // offset: 0x1b0 ordinal: 0x29
  struct _VOLUME_CACHE_MAP *VolumeCacheMap;    // offset: 0x1b8 ordinal: 0x2a
  ULONG ProcImagePathHash;                     // offset: 0x1c0 ordinal: 0x2b
  ULONG MappedWritesInProgress;                // offset: 0x1c4 ordinal: 0x2c
} _SHARED_CACHE_MAP;

// 0x8 bytes (sizeof)
typedef struct __anon_1061 {
  struct _SHARED_CACHE_MAP *SharedCacheMap; // offset: 0x0 ordinal: 0x0
} __anon_1061;

// 0x8 bytes (sizeof)
typedef union __anon_1064 {
  struct __anon_1060 Read;         // offset: 0x0 ordinal: 0x0
  struct __anon_1061 Write;        // offset: 0x0 ordinal: 0x1
  struct __anon_1062 Event;        // offset: 0x0 ordinal: 0x2
  struct __anon_1063 Notification; // offset: 0x0 ordinal: 0x3
} __anon_1064;

// 0x30 bytes (sizeof)
typedef struct _WORK_QUEUE_ENTRY {
  struct _LIST_ENTRY WorkQueueLinks;          // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY CoalescedWorkQueueLinks; // offset: 0x10 ordinal: 0x1
  union __anon_1064 Parameters;               // offset: 0x20 ordinal: 0x2
  UCHAR Function;                             // offset: 0x28 ordinal: 0x3
} _WORK_QUEUE_ENTRY;

// 0x30 bytes (sizeof)
typedef struct _VACB {
  VOID *BaseAddress;                        // offset: 0x0 ordinal: 0x0
  struct _SHARED_CACHE_MAP *SharedCacheMap; // offset: 0x8 ordinal: 0x1
  union __anon_1054 Overlay;                // offset: 0x10 ordinal: 0x2
  struct _LIST_ENTRY LruList;               // offset: 0x18 ordinal: 0x3
  struct _VACB_ARRAY_HEADER *ArrayHead;     // offset: 0x28 ordinal: 0x4
} _VACB;

// 0x8 bytes (sizeof)
typedef struct _EX_RUNDOWN_REF {
  union {
    ULONGLONG Count; // offset: 0x0 ordinal: 0x0
    VOID *Ptr;       // offset: 0x0 ordinal: 0x1
  };
} _EX_RUNDOWN_REF;

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

// 0x40 bytes (sizeof)
typedef struct _MAPPED_FILE_SEGMENT {
  struct _CONTROL_AREA *ControlArea; // offset: 0x0 ordinal: 0x0
  ULONG TotalNumberOfPtes;           // offset: 0x8 ordinal: 0x1
  ULONG NonExtendedPtes;             // offset: 0xc ordinal: 0x2
  ULONGLONG NumberOfCommittedPages;  // offset: 0x10 ordinal: 0x3
  ULONGLONG SizeOfSegment;           // offset: 0x18 ordinal: 0x4
  union {
    struct _MMEXTEND_INFO *ExtendInfo; // offset: 0x20 ordinal: 0x5
    VOID *BasedAddress;                // offset: 0x20 ordinal: 0x6
  };
  struct _EX_PUSH_LOCK SegmentLock;        // offset: 0x28 ordinal: 0x7
  struct _SEGMENT_FLAGS SegmentFlags;      // offset: 0x30 ordinal: 0x8
  struct _MSUBSECTION *LastSubsectionHint; // offset: 0x38 ordinal: 0x9
} _MAPPED_FILE_SEGMENT;

// 0x78 bytes (sizeof)
typedef struct _MMVAD_LONG {
  union __anon_776 u1;              // offset: 0x0 ordinal: 0x0
  struct _MMVAD *LeftChild;         // offset: 0x8 ordinal: 0x1
  struct _MMVAD *RightChild;        // offset: 0x10 ordinal: 0x2
  ULONGLONG StartingVpn;            // offset: 0x18 ordinal: 0x3
  ULONGLONG EndingVpn;              // offset: 0x20 ordinal: 0x4
  union __anon_779 u;               // offset: 0x28 ordinal: 0x5
  struct _EX_PUSH_LOCK PushLock;    // offset: 0x30 ordinal: 0x6
  union __anon_780 u5;              // offset: 0x38 ordinal: 0x7
  union __anon_781 u2;              // offset: 0x40 ordinal: 0x8
  struct _SUBSECTION *Subsection;   // offset: 0x48 ordinal: 0x9
  struct _MMPTE *FirstPrototypePte; // offset: 0x50 ordinal: 0xa
  struct _MMPTE *LastContiguousPte; // offset: 0x58 ordinal: 0xb
  union __anon_1162 u3;             // offset: 0x60 ordinal: 0xc
  union __anon_1166 u4;             // offset: 0x70 ordinal: 0xd
} _MMVAD_LONG;

// 0x60 bytes (sizeof)
typedef struct _CM_KEY_BODY {
  ULONG Type;                                    // offset: 0x0 ordinal: 0x0
  struct _CM_KEY_CONTROL_BLOCK *KeyControlBlock; // offset: 0x8 ordinal: 0x1
  struct _CM_NOTIFY_BLOCK *NotifyBlock;          // offset: 0x10 ordinal: 0x2
  VOID *ProcessID;                               // offset: 0x18 ordinal: 0x3
  struct _LIST_ENTRY KeyBodyList;                // offset: 0x20 ordinal: 0x4
  ULONG Flags;                                   // offset: 0x30 ordinal: 0x5
  VOID *KtmTrans;                                // offset: 0x38 ordinal: 0x6
  struct _GUID *KtmUow;                          // offset: 0x40 ordinal: 0x7
  struct _EX_PUSH_LOCK KeyBodyLock;              // offset: 0x48 ordinal: 0x8
  struct _LIST_ENTRY ContextListHead;            // offset: 0x50 ordinal: 0x9
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

// 0xb38 bytes (sizeof)
typedef struct _CMHIVE {
  struct _HHIVE Hive;                  // offset: 0x0 ordinal: 0x0
  VOID *FileHandles[6];                // offset: 0x590 ordinal: 0x1
  struct _LIST_ENTRY NotifyList;       // offset: 0x5c0 ordinal: 0x2
  struct _LIST_ENTRY HiveList;         // offset: 0x5d0 ordinal: 0x3
  struct _FAST_MUTEX *HiveLock;        // offset: 0x5e0 ordinal: 0x4
  struct _FAST_MUTEX *ViewLock;        // offset: 0x5e8 ordinal: 0x5
  struct _FAST_MUTEX *WriterLock;      // offset: 0x5f0 ordinal: 0x6
  struct _EX_PUSH_LOCK FlusherLock;    // offset: 0x5f8 ordinal: 0x7
  struct _EX_PUSH_LOCK SecurityLock;   // offset: 0x600 ordinal: 0x8
  struct _LIST_ENTRY MappedViewList;   // offset: 0x608 ordinal: 0x9
  struct _LIST_ENTRY PinnedViewList;   // offset: 0x618 ordinal: 0xa
  struct _LIST_ENTRY FlushedViewList;  // offset: 0x628 ordinal: 0xb
  USHORT MappedViewCount;              // offset: 0x638 ordinal: 0xc
  USHORT PinnedViewCount;              // offset: 0x63a ordinal: 0xd
  ULONG UseCount;                      // offset: 0x63c ordinal: 0xe
  ULONG ViewsPerHive;                  // offset: 0x640 ordinal: 0xf
  struct _FILE_OBJECT *FileObject;     // offset: 0x648 ordinal: 0x10
  ULONG LastShrinkHiveSize;            // offset: 0x650 ordinal: 0x11
  union _LARGE_INTEGER ActualFileSize; // offset: 0x658 ordinal: 0x12
  struct _UNICODE_STRING FileFullPath; // offset: 0x660 ordinal: 0x13
  struct _UNICODE_STRING FileUserName; // offset: 0x670 ordinal: 0x14
  struct _UNICODE_STRING HiveRootPath; // offset: 0x680 ordinal: 0x15
  ULONG SecurityCount;                 // offset: 0x690 ordinal: 0x16
  ULONG SecurityCacheSize;             // offset: 0x694 ordinal: 0x17
  LONG SecurityHitHint;                // offset: 0x698 ordinal: 0x18
  struct _CM_KEY_SECURITY_CACHE_ENTRY
      *SecurityCache;                          // offset: 0x6a0 ordinal: 0x19
  struct _LIST_ENTRY SecurityHash[64];         // offset: 0x6a8 ordinal: 0x1a
  ULONG UnloadEventCount;                      // offset: 0xaa8 ordinal: 0x1b
  struct _KEVENT **UnloadEventArray;           // offset: 0xab0 ordinal: 0x1c
  struct _CM_KEY_CONTROL_BLOCK *RootKcb;       // offset: 0xab8 ordinal: 0x1d
  UCHAR Frozen;                                // offset: 0xac0 ordinal: 0x1e
  struct _CM_WORKITEM *UnloadWorkItem;         // offset: 0xac8 ordinal: 0x1f
  UCHAR GrowOnlyMode;                          // offset: 0xad0 ordinal: 0x20
  ULONG GrowOffset;                            // offset: 0xad4 ordinal: 0x21
  struct _LIST_ENTRY KcbConvertListHead;       // offset: 0xad8 ordinal: 0x22
  struct _LIST_ENTRY KnodeConvertListHead;     // offset: 0xae8 ordinal: 0x23
  struct _CM_CELL_REMAP_BLOCK *CellRemapArray; // offset: 0xaf8 ordinal: 0x24
  ULONG Flags;                                 // offset: 0xb00 ordinal: 0x25
  struct _LIST_ENTRY TrustClassEntry;          // offset: 0xb08 ordinal: 0x26
  ULONG FlushCount;                            // offset: 0xb18 ordinal: 0x27
  struct _CM_RM *CmRm;                         // offset: 0xb20 ordinal: 0x28
  ULONG CmRmInitFailPoint;                     // offset: 0xb28 ordinal: 0x29
  LONG CmRmInitFailStatus;                     // offset: 0xb2c ordinal: 0x2a
  struct _KTHREAD *CreatorOwner;               // offset: 0xb30 ordinal: 0x2b
} _CMHIVE;

// 0x38 bytes (sizeof)
typedef struct _HIVE_LIST_ENTRY {
  USHORT *FileName;        // offset: 0x0 ordinal: 0x0
  USHORT *BaseName;        // offset: 0x8 ordinal: 0x1
  USHORT *RegRootName;     // offset: 0x10 ordinal: 0x2
  struct _CMHIVE *CmHive;  // offset: 0x18 ordinal: 0x3
  ULONG HHiveFlags;        // offset: 0x20 ordinal: 0x4
  ULONG CmHiveFlags;       // offset: 0x24 ordinal: 0x5
  struct _CMHIVE *CmHive2; // offset: 0x28 ordinal: 0x6
  UCHAR ThreadFinished;    // offset: 0x30 ordinal: 0x7
  UCHAR ThreadStarted;     // offset: 0x31 ordinal: 0x8
  UCHAR Allocate;          // offset: 0x32 ordinal: 0x9
  UCHAR WinPERequired;     // offset: 0x33 ordinal: 0xa
} _HIVE_LIST_ENTRY;

// 0xb0 bytes (sizeof)
typedef struct _CM_TRANS {
  struct _LIST_ENTRY TransactionListEntry;  // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY KCBUoWListHead;        // offset: 0x10 ordinal: 0x1
  struct _LIST_ENTRY LazyCommitListEntry;   // offset: 0x20 ordinal: 0x2
  VOID *KtmTrans;                           // offset: 0x30 ordinal: 0x3
  struct _CM_RM *CmRm;                      // offset: 0x38 ordinal: 0x4
  struct _KENLISTMENT *KtmEnlistmentObject; // offset: 0x40 ordinal: 0x5
  VOID *KtmEnlistmentHandle;                // offset: 0x48 ordinal: 0x6
  struct _GUID KtmUow;                      // offset: 0x50 ordinal: 0x7
  ULONGLONG StartLsn;                       // offset: 0x60 ordinal: 0x8
  ULONG TransState;                         // offset: 0x68 ordinal: 0x9
  ULONG HiveCount;                          // offset: 0x6c ordinal: 0xa
  struct _CMHIVE *HiveArray[8];             // offset: 0x70 ordinal: 0xb
} _CM_TRANS;

// 0x60 bytes (sizeof)
typedef struct _CM_KCB_UOW {
  struct _LIST_ENTRY TransactionListEntry;       // offset: 0x0 ordinal: 0x0
  struct _CM_INTENT_LOCK *KCBLock;               // offset: 0x10 ordinal: 0x1
  struct _CM_INTENT_LOCK *KeyLock;               // offset: 0x18 ordinal: 0x2
  struct _LIST_ENTRY KCBListEntry;               // offset: 0x20 ordinal: 0x3
  struct _CM_KEY_CONTROL_BLOCK *KeyControlBlock; // offset: 0x30 ordinal: 0x4
  struct _CM_TRANS *Transaction;                 // offset: 0x38 ordinal: 0x5
  ULONG UoWState;                                // offset: 0x40 ordinal: 0x6
  enum UoWActionType ActionType;                 // offset: 0x44 ordinal: 0x7
  enum HSTORAGE_TYPE StorageType;                // offset: 0x48 ordinal: 0x8
  union {
    struct _CM_KEY_CONTROL_BLOCK *ChildKCB; // offset: 0x50 ordinal: 0x9
    ULONG VolatileKeyCell;                  // offset: 0x50 ordinal: 0xa
    ULONG OldValueCell;                     // offset: 0x50 ordinal: 0xb
  };
  ULONG NewValueCell; // offset: 0x54 ordinal: 0xc
  union {
    ULONG UserFlags;                           // offset: 0x50 ordinal: 0xd
    union _LARGE_INTEGER LastWriteTime;        // offset: 0x50 ordinal: 0xe
    ULONG TxSecurityCell;                      // offset: 0x50 ordinal: 0xf
    struct _CM_KEY_CONTROL_BLOCK *OldChildKCB; // offset: 0x50 ordinal: 0x10
  };
  struct _CM_KEY_CONTROL_BLOCK *NewChildKCB;   // offset: 0x58 ordinal: 0x11
  struct _CM_KEY_CONTROL_BLOCK *OtherChildKCB; // offset: 0x50 ordinal: 0x12
  ULONG ThisVolatileKeyCell;                   // offset: 0x58 ordinal: 0x13
} _CM_KCB_UOW;

// 0x10 bytes (sizeof)
typedef struct _CM_INTENT_LOCK {
  ULONG OwnerCount;                // offset: 0x0 ordinal: 0x0
  struct _CM_KCB_UOW **OwnerTable; // offset: 0x8 ordinal: 0x1
} _CM_INTENT_LOCK;

// 0x100 bytes (sizeof)
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
  struct _LIST_ENTRY KCBUoWListHead;     // offset: 0xb0 ordinal: 0x1f
  struct _CM_TRANS *TransKCBOwner;       // offset: 0xc0 ordinal: 0x20
  struct _CM_INTENT_LOCK KCBLock;        // offset: 0xc8 ordinal: 0x21
  struct _CM_INTENT_LOCK KeyLock;        // offset: 0xd8 ordinal: 0x22
  struct _CHILD_LIST TransValueCache;    // offset: 0xe8 ordinal: 0x23
  struct _CM_TRANS *TransValueListOwner; // offset: 0xf0 ordinal: 0x24
  struct _UNICODE_STRING *FullKCBName;   // offset: 0xf8 ordinal: 0x25
} _CM_KEY_CONTROL_BLOCK;

// 0x88 bytes (sizeof)
typedef struct _CM_RM {
  struct _LIST_ENTRY RmListEntry;         // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY TransactionListHead; // offset: 0x10 ordinal: 0x1
  VOID *TmHandle;                         // offset: 0x20 ordinal: 0x2
  VOID *Tm;                               // offset: 0x28 ordinal: 0x3
  VOID *RmHandle;                         // offset: 0x30 ordinal: 0x4
  VOID *KtmRm;                            // offset: 0x38 ordinal: 0x5
  ULONG RefCount;                         // offset: 0x40 ordinal: 0x6
  ULONG ContainerNum;                     // offset: 0x44 ordinal: 0x7
  ULONGLONG ContainerSize;                // offset: 0x48 ordinal: 0x8
  struct _CMHIVE *CmHive;                 // offset: 0x50 ordinal: 0x9
  VOID *LogFileObject;                    // offset: 0x58 ordinal: 0xa
  VOID *MarshallingContext;               // offset: 0x60 ordinal: 0xb
  ULONG RmFlags;                          // offset: 0x68 ordinal: 0xc
  LONG LogStartStatus1;                   // offset: 0x6c ordinal: 0xd
  LONG LogStartStatus2;                   // offset: 0x70 ordinal: 0xe
  ULONGLONG BaseLsn;                      // offset: 0x78 ordinal: 0xf
  struct _ERESOURCE *RmLock;              // offset: 0x80 ordinal: 0x10
} _CM_RM;

// 0x58 bytes (sizeof)
typedef struct _CM_VIEW_OF_FILE {
  struct _LIST_ENTRY MappedViewLinks;  // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY PinnedViewLinks;  // offset: 0x10 ordinal: 0x1
  struct _LIST_ENTRY FlushedViewLinks; // offset: 0x20 ordinal: 0x2
  struct _CMHIVE *CmHive;              // offset: 0x30 ordinal: 0x3
  VOID *Bcb;                           // offset: 0x38 ordinal: 0x4
  VOID *ViewAddress;                   // offset: 0x40 ordinal: 0x5
  ULONG FileOffset;                    // offset: 0x48 ordinal: 0x6
  ULONG Size;                          // offset: 0x4c ordinal: 0x7
  ULONG UseCount;                      // offset: 0x50 ordinal: 0x8
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

// 0x40 bytes (sizeof)
typedef struct _MMVAD_SHORT {
  union __anon_776 u1;           // offset: 0x0 ordinal: 0x0
  struct _MMVAD *LeftChild;      // offset: 0x8 ordinal: 0x1
  struct _MMVAD *RightChild;     // offset: 0x10 ordinal: 0x2
  ULONGLONG StartingVpn;         // offset: 0x18 ordinal: 0x3
  ULONGLONG EndingVpn;           // offset: 0x20 ordinal: 0x4
  union __anon_779 u;            // offset: 0x28 ordinal: 0x5
  struct _EX_PUSH_LOCK PushLock; // offset: 0x30 ordinal: 0x6
  union __anon_780 u5;           // offset: 0x38 ordinal: 0x7
} _MMVAD_SHORT;

// 0x60 bytes (sizeof)
typedef struct _MMVAD {
  union __anon_776 u1;           // offset: 0x0 ordinal: 0x0
  struct _MMVAD *LeftChild;      // offset: 0x8 ordinal: 0x1
  struct _MMVAD *RightChild;     // offset: 0x10 ordinal: 0x2
  ULONGLONG StartingVpn;         // offset: 0x18 ordinal: 0x3
  ULONGLONG EndingVpn;           // offset: 0x20 ordinal: 0x4
  union __anon_779 u;            // offset: 0x28 ordinal: 0x5
  struct _EX_PUSH_LOCK PushLock; // offset: 0x30 ordinal: 0x6
  union __anon_780 u5;           // offset: 0x38 ordinal: 0x7
  union __anon_781 u2;           // offset: 0x40 ordinal: 0x8
  union {
    struct _SUBSECTION *Subsection;        // offset: 0x48 ordinal: 0x9
    struct _MSUBSECTION *MappedSubsection; // offset: 0x48 ordinal: 0xa
  };
  struct _MMPTE *FirstPrototypePte; // offset: 0x50 ordinal: 0xb
  struct _MMPTE *LastContiguousPte; // offset: 0x58 ordinal: 0xc
} _MMVAD;

// 0x150 bytes (sizeof)
typedef struct _OBJECT_DIRECTORY {
  struct _OBJECT_DIRECTORY_ENTRY *HashBuckets[37]; // offset: 0x0 ordinal: 0x0
  struct _EX_PUSH_LOCK Lock;                       // offset: 0x128 ordinal: 0x1
  struct _DEVICE_MAP *DeviceMap;                   // offset: 0x130 ordinal: 0x2
  ULONG SessionId;                                 // offset: 0x138 ordinal: 0x3
  VOID *NamespaceEntry;                            // offset: 0x140 ordinal: 0x4
  ULONG Flags;                                     // offset: 0x148 ordinal: 0x5
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

// 0x1b0 bytes (sizeof)
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
  struct _JOB_ACCESS_STATE *AccessState;          // offset: 0x110 ordinal: 0x14
  ULONG UIRestrictionsClass;                      // offset: 0x118 ordinal: 0x15
  ULONG EndOfJobTimeAction;                       // offset: 0x11c ordinal: 0x16
  VOID *CompletionPort;                           // offset: 0x120 ordinal: 0x17
  VOID *CompletionKey;                            // offset: 0x128 ordinal: 0x18
  ULONG SessionId;                                // offset: 0x130 ordinal: 0x19
  ULONG SchedulingClass;                          // offset: 0x134 ordinal: 0x1a
  ULONGLONG ReadOperationCount;                   // offset: 0x138 ordinal: 0x1b
  ULONGLONG WriteOperationCount;                  // offset: 0x140 ordinal: 0x1c
  ULONGLONG OtherOperationCount;                  // offset: 0x148 ordinal: 0x1d
  ULONGLONG ReadTransferCount;                    // offset: 0x150 ordinal: 0x1e
  ULONGLONG WriteTransferCount;                   // offset: 0x158 ordinal: 0x1f
  ULONGLONG OtherTransferCount;                   // offset: 0x160 ordinal: 0x20
  ULONGLONG ProcessMemoryLimit;                   // offset: 0x168 ordinal: 0x21
  ULONGLONG JobMemoryLimit;                       // offset: 0x170 ordinal: 0x22
  ULONGLONG PeakProcessMemoryUsed;                // offset: 0x178 ordinal: 0x23
  ULONGLONG PeakJobMemoryUsed;                    // offset: 0x180 ordinal: 0x24
  ULONGLONG CurrentJobMemoryUsed;                 // offset: 0x188 ordinal: 0x25
  struct _EX_PUSH_LOCK MemoryLimitsLock;          // offset: 0x190 ordinal: 0x26
  struct _LIST_ENTRY JobSetLinks;                 // offset: 0x198 ordinal: 0x27
  ULONG MemberLevel;                              // offset: 0x1a8 ordinal: 0x28
  ULONG JobFlags;                                 // offset: 0x1ac ordinal: 0x29
} _EJOB;

// 0x20 bytes (sizeof)
typedef struct _ALPC_PROCESS_CONTEXT {
  struct _EX_PUSH_LOCK Lock;       // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY ViewListHead; // offset: 0x8 ordinal: 0x1
  ULONGLONG PagedPoolQuotaCache;   // offset: 0x18 ordinal: 0x2
} _ALPC_PROCESS_CONTEXT;

// 0x68 bytes (sizeof)
typedef struct _MMSUPPORT {
  struct _LIST_ENTRY WorkingSetExpansionLinks; // offset: 0x0 ordinal: 0x0
  USHORT LastTrimStamp;                        // offset: 0x10 ordinal: 0x1
  USHORT NextPageColor;                        // offset: 0x12 ordinal: 0x2
  struct _MMSUPPORT_FLAGS Flags;               // offset: 0x14 ordinal: 0x3
  ULONG PageFaultCount;                        // offset: 0x18 ordinal: 0x4
  ULONG PeakWorkingSetSize;                    // offset: 0x1c ordinal: 0x5
  ULONG Spare0;                                // offset: 0x20 ordinal: 0x6
  ULONG MinimumWorkingSetSize;                 // offset: 0x24 ordinal: 0x7
  ULONG MaximumWorkingSetSize;                 // offset: 0x28 ordinal: 0x8
  struct _MMWSL *VmWorkingSetList;             // offset: 0x30 ordinal: 0x9
  ULONG Claim;                                 // offset: 0x38 ordinal: 0xa
  ULONG Spare[1];                              // offset: 0x3c ordinal: 0xb
  ULONG WorkingSetPrivateSize;                 // offset: 0x40 ordinal: 0xc
  ULONG WorkingSetSizeOverhead;                // offset: 0x44 ordinal: 0xd
  ULONG WorkingSetSize;                        // offset: 0x48 ordinal: 0xe
  struct _KEVENT *ExitEvent;                   // offset: 0x50 ordinal: 0xf
  struct _EX_PUSH_LOCK WorkingSetMutex;        // offset: 0x58 ordinal: 0x10
  VOID *AccessLog;                             // offset: 0x60 ordinal: 0x11
} _MMSUPPORT;

// 0x100 bytes (sizeof)
typedef struct _EX_PUSH_LOCK_CACHE_AWARE {
  struct _EX_PUSH_LOCK *Locks[32]; // offset: 0x0 ordinal: 0x0
} _EX_PUSH_LOCK_CACHE_AWARE;

// 0x8 bytes (sizeof)
typedef union _ULARGE_INTEGER {
  ULONG LowPart;      // offset: 0x0 ordinal: 0x0
  ULONG HighPart;     // offset: 0x4 ordinal: 0x1
  struct __anon_5 u;  // offset: 0x0 ordinal: 0x2
  ULONGLONG QuadPart; // offset: 0x0 ordinal: 0x3
} _ULARGE_INTEGER;

// 0x28 bytes (sizeof)
typedef struct _KERNEL_STACK_SEGMENT {
  ULONGLONG StackBase;    // offset: 0x0 ordinal: 0x0
  ULONGLONG StackLimit;   // offset: 0x8 ordinal: 0x1
  ULONGLONG KernelStack;  // offset: 0x10 ordinal: 0x2
  ULONGLONG InitialStack; // offset: 0x18 ordinal: 0x3
  ULONGLONG ActualLimit;  // offset: 0x20 ordinal: 0x4
} _KERNEL_STACK_SEGMENT;

// 0x28 bytes (sizeof)
typedef struct PPM_PERF_STATE {
  ULONG Frequency;        // offset: 0x0 ordinal: 0x0
  ULONG Power;            // offset: 0x4 ordinal: 0x1
  UCHAR PercentFrequency; // offset: 0x8 ordinal: 0x2
  UCHAR IncreaseLevel;    // offset: 0x9 ordinal: 0x3
  UCHAR DecreaseLevel;    // offset: 0xa ordinal: 0x4
  UCHAR Type;             // offset: 0xb ordinal: 0x5
  ULONGLONG Control;      // offset: 0x10 ordinal: 0x6
  ULONGLONG Status;       // offset: 0x18 ordinal: 0x7
  ULONG TotalHitCount;    // offset: 0x20 ordinal: 0x8
  ULONG DesiredCount;     // offset: 0x24 ordinal: 0x9
} PPM_PERF_STATE;

typedef LONG (*__anon_214)(ULONGLONG, ULONGLONG, ULONGLONG);

// 0x30 bytes (sizeof)
typedef struct PPM_IDLE_STATE_ACCOUNTING {
  ULONG IdleTransitions;    // offset: 0x0 ordinal: 0x0
  ULONG FailedTransitions;  // offset: 0x4 ordinal: 0x1
  ULONG InvalidBucketIndex; // offset: 0x8 ordinal: 0x2
  ULONGLONG TotalTime;      // offset: 0x10 ordinal: 0x3
  ULONG IdleTimeBuckets[6]; // offset: 0x18 ordinal: 0x4
} PPM_IDLE_STATE_ACCOUNTING;

typedef VOID *(*__anon_190)(enum _POOL_TYPE, ULONGLONG, ULONG);

// 0xc0 bytes (sizeof)
typedef struct _KPROCESS {
  struct _DISPATCHER_HEADER Header;        // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY ProfileListHead;      // offset: 0x18 ordinal: 0x1
  ULONGLONG DirectoryTableBase;            // offset: 0x28 ordinal: 0x2
  ULONGLONG Unused0;                       // offset: 0x30 ordinal: 0x3
  USHORT IopmOffset;                       // offset: 0x38 ordinal: 0x4
  ULONGLONG ActiveProcessors;              // offset: 0x40 ordinal: 0x5
  ULONG KernelTime;                        // offset: 0x48 ordinal: 0x6
  ULONG UserTime;                          // offset: 0x4c ordinal: 0x7
  struct _LIST_ENTRY ReadyListHead;        // offset: 0x50 ordinal: 0x8
  struct _SINGLE_LIST_ENTRY SwapListEntry; // offset: 0x60 ordinal: 0x9
  VOID *InstrumentationCallback;           // offset: 0x68 ordinal: 0xa
  struct _LIST_ENTRY ThreadListHead;       // offset: 0x70 ordinal: 0xb
  ULONGLONG ProcessLock;                   // offset: 0x80 ordinal: 0xc
  ULONGLONG Affinity;                      // offset: 0x88 ordinal: 0xd
  LONG AutoAlignment : 1;                  // offset: 0x90 ordinal: 0xe
  LONG DisableBoost : 1;                   // offset: 0x90 ordinal: 0xf
  LONG DisableQuantum : 1;                 // offset: 0x90 ordinal: 0x10
  LONG ReservedFlags : 29;                 // offset: 0x90 ordinal: 0x11
  LONG ProcessFlags;                       // offset: 0x90 ordinal: 0x12
  CHAR BasePriority;                       // offset: 0x94 ordinal: 0x13
  CHAR QuantumReset;                       // offset: 0x95 ordinal: 0x14
  UCHAR State;                             // offset: 0x96 ordinal: 0x15
  UCHAR ThreadSeed;                        // offset: 0x97 ordinal: 0x16
  UCHAR PowerState;                        // offset: 0x98 ordinal: 0x17
  UCHAR IdealNode;                         // offset: 0x99 ordinal: 0x18
  UCHAR Visited;                           // offset: 0x9a ordinal: 0x19
  union {
    struct _KEXECUTE_OPTIONS Flags; // offset: 0x9b ordinal: 0x1a
    UCHAR ExecuteOptions;           // offset: 0x9b ordinal: 0x1b
  };
  ULONGLONG StackCount;                // offset: 0xa0 ordinal: 0x1c
  struct _LIST_ENTRY ProcessListEntry; // offset: 0xa8 ordinal: 0x1d
  ULONGLONG CycleTime;                 // offset: 0xb8 ordinal: 0x1e
} _KPROCESS;

// 0x30 bytes (sizeof)
typedef struct _KAPC_STATE {
  struct _LIST_ENTRY ApcListHead[2]; // offset: 0x0 ordinal: 0x0
  struct _KPROCESS *Process;         // offset: 0x20 ordinal: 0x1
  UCHAR KernelApcInProgress;         // offset: 0x28 ordinal: 0x2
  UCHAR KernelApcPending;            // offset: 0x29 ordinal: 0x3
  UCHAR UserApcPending;              // offset: 0x2a ordinal: 0x4
} _KAPC_STATE;

// 0x80 bytes (sizeof)
typedef struct PPM_PERF_STATES {
  ULONG Count;                // offset: 0x0 ordinal: 0x0
  ULONG MaxFrequency;         // offset: 0x4 ordinal: 0x1
  ULONG MaxPerfState;         // offset: 0x8 ordinal: 0x2
  ULONG MinPerfState;         // offset: 0xc ordinal: 0x3
  ULONG LowestPState;         // offset: 0x10 ordinal: 0x4
  ULONG IncreaseTime;         // offset: 0x14 ordinal: 0x5
  ULONG DecreaseTime;         // offset: 0x18 ordinal: 0x6
  UCHAR BusyAdjThreshold;     // offset: 0x1c ordinal: 0x7
  UCHAR Reserved;             // offset: 0x1d ordinal: 0x8
  UCHAR ThrottleStatesOnly;   // offset: 0x1e ordinal: 0x9
  UCHAR PolicyType;           // offset: 0x1f ordinal: 0xa
  ULONG TimerInterval;        // offset: 0x20 ordinal: 0xb
  union __anon_200 Flags;     // offset: 0x24 ordinal: 0xc
  ULONGLONG TargetProcessors; // offset: 0x28 ordinal: 0xd
  LONG(*PStateHandler)
  (ULONGLONG, ULONGLONG, ULONGLONG); // offset: 0x30 ordinal: 0xe
  ULONGLONG PStateContext;           // offset: 0x38 ordinal: 0xf
  LONG(*TStateHandler)
  (ULONGLONG, ULONGLONG, ULONGLONG); // offset: 0x40 ordinal: 0x10
  ULONGLONG TStateContext;           // offset: 0x48 ordinal: 0x11
  ULONG (*FeedbackHandler)(UCHAR);   // offset: 0x50 ordinal: 0x12
  struct PPM_PERF_STATE State[1];    // offset: 0x58 ordinal: 0x13
} PPM_PERF_STATES;

// 0x48 bytes (sizeof)
typedef struct PPM_IDLE_ACCOUNTING {
  ULONG StateCount;                          // offset: 0x0 ordinal: 0x0
  ULONG TotalTransitions;                    // offset: 0x4 ordinal: 0x1
  ULONG ResetCount;                          // offset: 0x8 ordinal: 0x2
  ULONGLONG StartTime;                       // offset: 0x10 ordinal: 0x3
  struct PPM_IDLE_STATE_ACCOUNTING State[1]; // offset: 0x18 ordinal: 0x4
} PPM_IDLE_ACCOUNTING;

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

// 0x140 bytes (sizeof)
typedef struct _KEXCEPTION_FRAME {
  ULONGLONG P1Home;        // offset: 0x0 ordinal: 0x0
  ULONGLONG P2Home;        // offset: 0x8 ordinal: 0x1
  ULONGLONG P3Home;        // offset: 0x10 ordinal: 0x2
  ULONGLONG P4Home;        // offset: 0x18 ordinal: 0x3
  ULONGLONG P5;            // offset: 0x20 ordinal: 0x4
  ULONGLONG InitialStack;  // offset: 0x28 ordinal: 0x5
  struct _M128A Xmm6;      // offset: 0x30 ordinal: 0x6
  struct _M128A Xmm7;      // offset: 0x40 ordinal: 0x7
  struct _M128A Xmm8;      // offset: 0x50 ordinal: 0x8
  struct _M128A Xmm9;      // offset: 0x60 ordinal: 0x9
  struct _M128A Xmm10;     // offset: 0x70 ordinal: 0xa
  struct _M128A Xmm11;     // offset: 0x80 ordinal: 0xb
  struct _M128A Xmm12;     // offset: 0x90 ordinal: 0xc
  struct _M128A Xmm13;     // offset: 0xa0 ordinal: 0xd
  struct _M128A Xmm14;     // offset: 0xb0 ordinal: 0xe
  struct _M128A Xmm15;     // offset: 0xc0 ordinal: 0xf
  ULONGLONG TrapFrame;     // offset: 0xd0 ordinal: 0x10
  ULONGLONG CallbackStack; // offset: 0xd8 ordinal: 0x11
  ULONGLONG OutputBuffer;  // offset: 0xe0 ordinal: 0x12
  ULONGLONG OutputLength;  // offset: 0xe8 ordinal: 0x13
  ULONGLONG MxCsr;         // offset: 0xf0 ordinal: 0x14
  ULONGLONG Rbp;           // offset: 0xf8 ordinal: 0x15
  ULONGLONG Rbx;           // offset: 0x100 ordinal: 0x16
  ULONGLONG Rdi;           // offset: 0x108 ordinal: 0x17
  ULONGLONG Rsi;           // offset: 0x110 ordinal: 0x18
  ULONGLONG R12;           // offset: 0x118 ordinal: 0x19
  ULONGLONG R13;           // offset: 0x120 ordinal: 0x1a
  ULONGLONG R14;           // offset: 0x128 ordinal: 0x1b
  ULONGLONG R15;           // offset: 0x130 ordinal: 0x1c
  ULONGLONG Return;        // offset: 0x138 ordinal: 0x1d
} _KEXCEPTION_FRAME;

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
    ULONGLONG TimeStampCKCL; // offset: 0xd0 ordinal: 0x1b
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
    ULONGLONG TimeStampKlog;  // offset: 0x160 ordinal: 0x34
  };
  ULONGLONG Rip;       // offset: 0x168 ordinal: 0x35
  USHORT SegCs;        // offset: 0x170 ordinal: 0x36
  UCHAR Fill0;         // offset: 0x172 ordinal: 0x37
  UCHAR Logging;       // offset: 0x173 ordinal: 0x38
  USHORT Fill1[2];     // offset: 0x174 ordinal: 0x39
  ULONG EFlags;        // offset: 0x178 ordinal: 0x3a
  ULONG Fill2;         // offset: 0x17c ordinal: 0x3b
  ULONGLONG Rsp;       // offset: 0x180 ordinal: 0x3c
  USHORT SegSs;        // offset: 0x188 ordinal: 0x3d
  USHORT Fill3;        // offset: 0x18a ordinal: 0x3e
  LONG CodePatchCycle; // offset: 0x18c ordinal: 0x3f
} _KTRAP_FRAME;

// 0xa0 bytes (sizeof)
typedef struct _KINTERRUPT {
  SHORT Type;                            // offset: 0x0 ordinal: 0x0
  SHORT Size;                            // offset: 0x2 ordinal: 0x1
  struct _LIST_ENTRY InterruptListEntry; // offset: 0x8 ordinal: 0x2
  UCHAR(*ServiceRoutine)
  (struct _KINTERRUPT *, VOID *); // offset: 0x18 ordinal: 0x3
  UCHAR(*MessageServiceRoutine)
  (struct _KINTERRUPT *, VOID *, ULONG); // offset: 0x20 ordinal: 0x4
  ULONG MessageIndex;                    // offset: 0x28 ordinal: 0x5
  VOID *ServiceContext;                  // offset: 0x30 ordinal: 0x6
  ULONGLONG SpinLock;                    // offset: 0x38 ordinal: 0x7
  ULONG TickCount;                       // offset: 0x40 ordinal: 0x8
  ULONGLONG *ActualLock;                 // offset: 0x48 ordinal: 0x9
  VOID (*DispatchAddress)();             // offset: 0x50 ordinal: 0xa
  ULONG Vector;                          // offset: 0x58 ordinal: 0xb
  UCHAR Irql;                            // offset: 0x5c ordinal: 0xc
  UCHAR SynchronizeIrql;                 // offset: 0x5d ordinal: 0xd
  UCHAR FloatingSave;                    // offset: 0x5e ordinal: 0xe
  UCHAR Connected;                       // offset: 0x5f ordinal: 0xf
  CHAR Number;                           // offset: 0x60 ordinal: 0x10
  UCHAR ShareVector;                     // offset: 0x61 ordinal: 0x11
  enum _KINTERRUPT_MODE Mode;            // offset: 0x64 ordinal: 0x12
  enum _KINTERRUPT_POLARITY Polarity;    // offset: 0x68 ordinal: 0x13
  ULONG ServiceCount;                    // offset: 0x6c ordinal: 0x14
  ULONG DispatchCount;                   // offset: 0x70 ordinal: 0x15
  ULONGLONG Rsvd1;                       // offset: 0x78 ordinal: 0x16
  struct _KTRAP_FRAME *TrapFrame;        // offset: 0x80 ordinal: 0x17
  VOID *Reserved;                        // offset: 0x88 ordinal: 0x18
  ULONG DispatchCode[4];                 // offset: 0x90 ordinal: 0x19
} _KINTERRUPT;

typedef UCHAR (*__anon_1183)(struct _KINTERRUPT *, VOID *, ULONG);

typedef UCHAR (*__anon_1182)(struct _KINTERRUPT *, VOID *);

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

// 0x250 bytes (sizeof)
typedef struct _KERNEL_STACK_CONTROL {
  struct _XMM_SAVE_AREA32 XmmSaveArea;   // offset: 0x0 ordinal: 0x0
  struct _KERNEL_STACK_SEGMENT Current;  // offset: 0x200 ordinal: 0x1
  struct _KERNEL_STACK_SEGMENT Previous; // offset: 0x228 ordinal: 0x2
} _KERNEL_STACK_CONTROL;

// 0x10 bytes (sizeof)
typedef struct __anon_117 {
  ULONGLONG Depth : 16;     // offset: 0x0 ordinal: 0x0
  ULONGLONG Sequence : 48;  // offset: 0x0 ordinal: 0x1
  ULONGLONG HeaderType : 1; // offset: 0x8 ordinal: 0x2
  ULONGLONG Init : 1;       // offset: 0x8 ordinal: 0x3
  ULONGLONG Reserved : 2;   // offset: 0x8 ordinal: 0x4
  ULONGLONG NextEntry : 60; // offset: 0x8 ordinal: 0x5
} __anon_117;

// 0x10 bytes (sizeof)
typedef struct __anon_116 {
  ULONGLONG Depth : 16;     // offset: 0x0 ordinal: 0x0
  ULONGLONG Sequence : 9;   // offset: 0x0 ordinal: 0x1
  ULONGLONG NextEntry : 39; // offset: 0x0 ordinal: 0x2
  ULONGLONG HeaderType : 1; // offset: 0x8 ordinal: 0x3
  ULONGLONG Init : 1;       // offset: 0x8 ordinal: 0x4
  ULONGLONG Reserved : 59;  // offset: 0x8 ordinal: 0x5
  ULONGLONG Region : 3;     // offset: 0x8 ordinal: 0x6
} __anon_116;

// 0x10 bytes (sizeof)
typedef union _SLIST_HEADER {
  ULONGLONG Alignment;        // offset: 0x0 ordinal: 0x0
  ULONGLONG Region;           // offset: 0x8 ordinal: 0x1
  struct __anon_116 Header8;  // offset: 0x0 ordinal: 0x2
  struct __anon_117 Header16; // offset: 0x0 ordinal: 0x3
} _SLIST_HEADER;

// 0x20 bytes (sizeof)
typedef struct PROCESSOR_IDLE_TIMES {
  ULONGLONG StartTime; // offset: 0x0 ordinal: 0x0
  ULONGLONG EndTime;   // offset: 0x8 ordinal: 0x1
  ULONG Reserved[4];   // offset: 0x10 ordinal: 0x2
} PROCESSOR_IDLE_TIMES;

typedef LONG (*__anon_223)(ULONGLONG, struct PROCESSOR_IDLE_TIMES *);

// 0x28 bytes (sizeof)
typedef struct PPM_IDLE_STATE {
  LONG(*IdleHandler)
  (ULONGLONG, struct PROCESSOR_IDLE_TIMES *); // offset: 0x0 ordinal: 0x0
  ULONGLONG Context;                          // offset: 0x8 ordinal: 0x1
  ULONG Latency;                              // offset: 0x10 ordinal: 0x2
  ULONG Power;                                // offset: 0x14 ordinal: 0x3
  ULONG TimeCheck;                            // offset: 0x18 ordinal: 0x4
  ULONG StateFlags;                           // offset: 0x1c ordinal: 0x5
  UCHAR PromotePercent;                       // offset: 0x20 ordinal: 0x6
  UCHAR DemotePercent;                        // offset: 0x21 ordinal: 0x7
  UCHAR PromotePercentBase;                   // offset: 0x22 ordinal: 0x8
  UCHAR DemotePercentBase;                    // offset: 0x23 ordinal: 0x9
  UCHAR StateType;                            // offset: 0x24 ordinal: 0xa
} PPM_IDLE_STATE;

// 0x48 bytes (sizeof)
typedef struct PPM_IDLE_STATES {
  ULONG Type;                     // offset: 0x0 ordinal: 0x0
  ULONG Count;                    // offset: 0x4 ordinal: 0x1
  union __anon_197 Flags;         // offset: 0x8 ordinal: 0x2
  ULONG TargetState;              // offset: 0xc ordinal: 0x3
  ULONG ActualState;              // offset: 0x10 ordinal: 0x4
  ULONG OldState;                 // offset: 0x14 ordinal: 0x5
  ULONGLONG TargetProcessors;     // offset: 0x18 ordinal: 0x6
  struct PPM_IDLE_STATE State[1]; // offset: 0x20 ordinal: 0x7
} PPM_IDLE_STATES;

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

typedef enum _EXCEPTION_DISPOSITION (*__anon_961)(struct _EXCEPTION_RECORD *,
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
  union _SLIST_HEADER PoolPageHeaders;  // offset: 0x50 ordinal: 0x8
  union _SLIST_HEADER PoolTrackers;     // offset: 0x60 ordinal: 0x9
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
  union _SLIST_HEADER ListHead; // offset: 0x0 ordinal: 0x0
  USHORT Depth;                 // offset: 0x10 ordinal: 0x1
  USHORT MaximumDepth;          // offset: 0x12 ordinal: 0x2
  ULONG TotalAllocates;         // offset: 0x14 ordinal: 0x3
  ULONG AllocateMisses;         // offset: 0x18 ordinal: 0x4
  ULONG TotalFrees;             // offset: 0x1c ordinal: 0x5
  ULONG FreeMisses;             // offset: 0x20 ordinal: 0x6
  ULONG LastTotalAllocates;     // offset: 0x24 ordinal: 0x7
  ULONG LastAllocateMisses;     // offset: 0x28 ordinal: 0x8
  ULONG Counters[2];            // offset: 0x2c ordinal: 0x9
} _HEAP_LOOKASIDE;

// 0x60 bytes (sizeof)
typedef struct _PF_KERNEL_GLOBALS {
  ULONGLONG AccessBufferAgeThreshold;     // offset: 0x0 ordinal: 0x0
  struct _EX_RUNDOWN_REF AccessBufferRef; // offset: 0x8 ordinal: 0x1
  struct _KEVENT AccessBufferExistsEvent; // offset: 0x10 ordinal: 0x2
  ULONG AccessBufferMax;                  // offset: 0x28 ordinal: 0x3
  union _SLIST_HEADER AccessBufferList;   // offset: 0x40 ordinal: 0x4
  LONG StreamSequenceNumber;              // offset: 0x50 ordinal: 0x5
  ULONG Flags;                            // offset: 0x54 ordinal: 0x6
  LONG ScenarioPrefetchCount;             // offset: 0x58 ordinal: 0x7
} _PF_KERNEL_GLOBALS;

// 0x350 bytes (sizeof)
typedef struct _WMI_LOGGER_CONTEXT {
  union _LARGE_INTEGER StartTime;         // offset: 0x0 ordinal: 0x0
  VOID *LogFileHandle;                    // offset: 0x8 ordinal: 0x1
  struct _ETHREAD *LoggerThread;          // offset: 0x10 ordinal: 0x2
  LONG LoggerStatus;                      // offset: 0x18 ordinal: 0x3
  ULONG LoggerId;                         // offset: 0x1c ordinal: 0x4
  VOID *NBQHead;                          // offset: 0x20 ordinal: 0x5
  VOID *OverflowNBQHead;                  // offset: 0x28 ordinal: 0x6
  union _SLIST_HEADER QueueBlockFreeList; // offset: 0x30 ordinal: 0x7
  union _SLIST_HEADER GlobalList;         // offset: 0x40 ordinal: 0x8
  struct _UNICODE_STRING LoggerName;      // offset: 0x50 ordinal: 0x9
  struct _UNICODE_STRING LogFileName;     // offset: 0x60 ordinal: 0xa
  struct _UNICODE_STRING LogFilePattern;  // offset: 0x70 ordinal: 0xb
  struct _UNICODE_STRING NewLogFileName;  // offset: 0x80 ordinal: 0xc
  ULONG ClockType;                        // offset: 0x90 ordinal: 0xd
  LONG CollectionOn;                      // offset: 0x94 ordinal: 0xe
  ULONG MaximumFileSize;                  // offset: 0x98 ordinal: 0xf
  ULONG LoggerMode;                       // offset: 0x9c ordinal: 0x10
  ULONG LastFlushedBuffer;                // offset: 0xa0 ordinal: 0x11
  ULONG FlushTimer;                       // offset: 0xa4 ordinal: 0x12
  union _LARGE_INTEGER ByteOffset;        // offset: 0xa8 ordinal: 0x13
  union _LARGE_INTEGER FlushTimeStamp;    // offset: 0xb0 ordinal: 0x14
  ULONG MinimumBuffers;                   // offset: 0xb8 ordinal: 0x15
  LONG BuffersAvailable;                  // offset: 0xbc ordinal: 0x16
  LONG NumberOfBuffers;                   // offset: 0xc0 ordinal: 0x17
  ULONG MaximumBuffers;                   // offset: 0xc4 ordinal: 0x18
  ULONG EventsLost;                       // offset: 0xc8 ordinal: 0x19
  ULONG BuffersWritten;                   // offset: 0xcc ordinal: 0x1a
  ULONG LogBuffersLost;                   // offset: 0xd0 ordinal: 0x1b
  ULONG RealTimeBuffersDelivered;         // offset: 0xd4 ordinal: 0x1c
  ULONG RealTimeBuffersLost;              // offset: 0xd8 ordinal: 0x1d
  ULONG BufferSize;                       // offset: 0xdc ordinal: 0x1e
  ULONG MaximumEventSize;                 // offset: 0xe0 ordinal: 0x1f
  LONG *SequencePtr;                      // offset: 0xe8 ordinal: 0x20
  ULONG LocalSequence;                    // offset: 0xf0 ordinal: 0x21
  struct _GUID InstanceGuid;              // offset: 0xf4 ordinal: 0x22
  LONGLONG (*GetCpuClock)();              // offset: 0x108 ordinal: 0x23
  LONG FileCounter;                       // offset: 0x110 ordinal: 0x24
  VOID(*BufferCallback)
  (struct _WMI_BUFFER_HEADER *, VOID *);       // offset: 0x118 ordinal: 0x25
  enum _POOL_TYPE PoolType;                    // offset: 0x120 ordinal: 0x26
  struct _ETW_REF_CLOCK ReferenceTime;         // offset: 0x128 ordinal: 0x27
  UCHAR RealtimeLoggerContextFreed;            // offset: 0x138 ordinal: 0x28
  struct _LIST_ENTRY Consumers;                // offset: 0x140 ordinal: 0x29
  ULONG NumConsumers;                          // offset: 0x150 ordinal: 0x2a
  struct _LIST_ENTRY Connecting;               // offset: 0x158 ordinal: 0x2b
  UCHAR NewConsumer;                           // offset: 0x168 ordinal: 0x2c
  VOID *RealtimeLogfileHandle;                 // offset: 0x170 ordinal: 0x2d
  struct _UNICODE_STRING RealtimeLogfileName;  // offset: 0x178 ordinal: 0x2e
  union _LARGE_INTEGER RealtimeWriteOffset;    // offset: 0x188 ordinal: 0x2f
  union _LARGE_INTEGER RealtimeReadOffset;     // offset: 0x190 ordinal: 0x30
  union _LARGE_INTEGER RealtimeLogfileSize;    // offset: 0x198 ordinal: 0x31
  ULONGLONG RealtimeLogfileUsage;              // offset: 0x1a0 ordinal: 0x32
  ULONG RealtimeBuffersSaved;                  // offset: 0x1a8 ordinal: 0x33
  struct _ETW_REF_CLOCK RealtimeReferenceTime; // offset: 0x1b0 ordinal: 0x34
  ULONG RealtimeDisconnectProcessId;           // offset: 0x1c0 ordinal: 0x35
  ULONG RealtimeDisconnectConsumerId;          // offset: 0x1c4 ordinal: 0x36
  enum _ETW_RT_EVENT_LOSS NewRTEventsLost;     // offset: 0x1c8 ordinal: 0x37
  struct _KEVENT LoggerEvent;                  // offset: 0x1d0 ordinal: 0x38
  struct _KEVENT FlushEvent;                   // offset: 0x1e8 ordinal: 0x39
  struct _KDPC FlushDpc;                       // offset: 0x200 ordinal: 0x3a
  struct _KMUTANT LoggerMutex;                 // offset: 0x240 ordinal: 0x3b
  struct _SECURITY_CLIENT_CONTEXT
      ClientSecurityContext;                      // offset: 0x278 ordinal: 0x3c
  struct _EX_FAST_REF SecurityDescriptor;         // offset: 0x2c0 ordinal: 0x3d
  struct _WMI_BUFFER_HEADER DummyBufferForMarker; // offset: 0x2c8 ordinal: 0x3e
  LONGLONG BufferSequenceNumber;                  // offset: 0x310 ordinal: 0x3f
  LONG AcceptNewEvents;                           // offset: 0x318 ordinal: 0x40
  union {
    ULONG Flags;          // offset: 0x31c ordinal: 0x41
    ULONG Persistent : 1; // offset: 0x31c ordinal: 0x42
  };
  ULONG AutoLogger : 1;   // offset: 0x31c ordinal: 0x43
  ULONG FsReady : 1;      // offset: 0x31c ordinal: 0x44
  ULONG RealTime : 1;     // offset: 0x31c ordinal: 0x45
  ULONG Wow : 1;          // offset: 0x31c ordinal: 0x46
  ULONG KernelTrace : 1;  // offset: 0x31c ordinal: 0x47
  ULONG NoMoreEnable : 1; // offset: 0x31c ordinal: 0x48
  union {
    ULONG RequestFlag;       // offset: 0x320 ordinal: 0x49
    ULONG RequestNewFie : 1; // offset: 0x320 ordinal: 0x4a
  };
  ULONG RequestUpdateFile : 1;         // offset: 0x320 ordinal: 0x4b
  ULONG RequestFlush : 1;              // offset: 0x320 ordinal: 0x4c
  ULONG RequestDisableRealtime : 1;    // offset: 0x320 ordinal: 0x4d
  ULONG RequestDisconnectConsumer : 1; // offset: 0x320 ordinal: 0x4e
  USHORT StackTraceFilterHookCount;    // offset: 0x324 ordinal: 0x4f
  USHORT StackTraceFilter[16];         // offset: 0x326 ordinal: 0x50
} _WMI_LOGGER_CONTEXT;

// 0x80 bytes (sizeof)
typedef struct _GENERAL_LOOKASIDE {
  union {
    union _SLIST_HEADER ListHead;             // offset: 0x0 ordinal: 0x0
    struct _SINGLE_LIST_ENTRY SingleListHead; // offset: 0x0 ordinal: 0x1
  };
  USHORT Depth;         // offset: 0x10 ordinal: 0x2
  USHORT MaximumDepth;  // offset: 0x12 ordinal: 0x3
  ULONG TotalAllocates; // offset: 0x14 ordinal: 0x4
  union {
    ULONG AllocateMisses; // offset: 0x18 ordinal: 0x5
    ULONG AllocateHits;   // offset: 0x18 ordinal: 0x6
  };
  ULONG TotalFrees; // offset: 0x1c ordinal: 0x7
  union {
    ULONG FreeMisses; // offset: 0x20 ordinal: 0x8
    ULONG FreeHits;   // offset: 0x20 ordinal: 0x9
  };
  enum _POOL_TYPE Type; // offset: 0x24 ordinal: 0xa
  ULONG Tag;            // offset: 0x28 ordinal: 0xb
  ULONG Size;           // offset: 0x2c ordinal: 0xc
  union {
    VOID *(*AllocateEx)(
        enum _POOL_TYPE, ULONGLONG, ULONG,
        struct _LOOKASIDE_LIST_EX *); // offset: 0x30 ordinal: 0xd
    VOID *(*Allocate)(enum _POOL_TYPE, ULONGLONG,
                      ULONG); // offset: 0x30 ordinal: 0xe
  };
  union {
    VOID(*FreeEx)
    (VOID *, struct _LOOKASIDE_LIST_EX *); // offset: 0x38 ordinal: 0xf
    VOID (*Free)(VOID *);                  // offset: 0x38 ordinal: 0x10
  };
  struct _LIST_ENTRY ListEntry; // offset: 0x40 ordinal: 0x11
  ULONG LastTotalAllocates;     // offset: 0x50 ordinal: 0x12
  union {
    ULONG LastAllocateMisses; // offset: 0x54 ordinal: 0x13
    ULONG LastAllocateHits;   // offset: 0x54 ordinal: 0x14
  };
  ULONG Future[2]; // offset: 0x58 ordinal: 0x15
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

// 0x20 bytes (sizeof)
typedef struct _CACHED_KSTACK_LIST {
  union _SLIST_HEADER SListHead; // offset: 0x0 ordinal: 0x0
  LONG MinimumFree;              // offset: 0x10 ordinal: 0x1
  ULONG Misses;                  // offset: 0x14 ordinal: 0x2
  ULONG MissesLast;              // offset: 0x18 ordinal: 0x3
} _CACHED_KSTACK_LIST;

// 0x60 bytes (sizeof)
typedef struct _GENERAL_LOOKASIDE_POOL {
  union {
    union _SLIST_HEADER ListHead;             // offset: 0x0 ordinal: 0x0
    struct _SINGLE_LIST_ENTRY SingleListHead; // offset: 0x0 ordinal: 0x1
  };
  USHORT Depth;         // offset: 0x10 ordinal: 0x2
  USHORT MaximumDepth;  // offset: 0x12 ordinal: 0x3
  ULONG TotalAllocates; // offset: 0x14 ordinal: 0x4
  union {
    ULONG AllocateMisses; // offset: 0x18 ordinal: 0x5
    ULONG AllocateHits;   // offset: 0x18 ordinal: 0x6
  };
  ULONG TotalFrees; // offset: 0x1c ordinal: 0x7
  union {
    ULONG FreeMisses; // offset: 0x20 ordinal: 0x8
    ULONG FreeHits;   // offset: 0x20 ordinal: 0x9
  };
  enum _POOL_TYPE Type; // offset: 0x24 ordinal: 0xa
  ULONG Tag;            // offset: 0x28 ordinal: 0xb
  ULONG Size;           // offset: 0x2c ordinal: 0xc
  union {
    VOID *(*AllocateEx)(
        enum _POOL_TYPE, ULONGLONG, ULONG,
        struct _LOOKASIDE_LIST_EX *); // offset: 0x30 ordinal: 0xd
    VOID *(*Allocate)(enum _POOL_TYPE, ULONGLONG,
                      ULONG); // offset: 0x30 ordinal: 0xe
  };
  union {
    VOID(*FreeEx)
    (VOID *, struct _LOOKASIDE_LIST_EX *); // offset: 0x38 ordinal: 0xf
    VOID (*Free)(VOID *);                  // offset: 0x38 ordinal: 0x10
  };
  struct _LIST_ENTRY ListEntry; // offset: 0x40 ordinal: 0x11
  ULONG LastTotalAllocates;     // offset: 0x50 ordinal: 0x12
  union {
    ULONG LastAllocateMisses; // offset: 0x54 ordinal: 0x13
    ULONG LastAllocateHits;   // offset: 0x54 ordinal: 0x14
  };
  ULONG Future[2]; // offset: 0x58 ordinal: 0x15
} _GENERAL_LOOKASIDE_POOL;

// 0x60 bytes (sizeof)
typedef struct _LOOKASIDE_LIST_EX {
  struct _GENERAL_LOOKASIDE_POOL L; // offset: 0x0 ordinal: 0x0
} _LOOKASIDE_LIST_EX;

typedef VOID (*__anon_191)(VOID *, struct _LOOKASIDE_LIST_EX *);

typedef VOID *(*__anon_189)(enum _POOL_TYPE, ULONGLONG, ULONG,
                            struct _LOOKASIDE_LIST_EX *);

// 0x20 bytes (sizeof)
typedef struct _VI_VERIFIER_ISSUE {
  ULONGLONG IssueType;     // offset: 0x0 ordinal: 0x0
  VOID *Address;           // offset: 0x8 ordinal: 0x1
  ULONGLONG Parameters[2]; // offset: 0x10 ordinal: 0x2
} _VI_VERIFIER_ISSUE;

// 0xc0 bytes (sizeof)
typedef struct _KNODE {
  union _SLIST_HEADER PagedPoolSListHead;        // offset: 0x0 ordinal: 0x0
  union _SLIST_HEADER NonPagedPoolSListHead[3];  // offset: 0x10 ordinal: 0x1
  union _SLIST_HEADER PfnDereferenceSListHead;   // offset: 0x40 ordinal: 0x2
  ULONGLONG ProcessorMask;                       // offset: 0x50 ordinal: 0x3
  UCHAR Color;                                   // offset: 0x58 ordinal: 0x4
  UCHAR Seed;                                    // offset: 0x59 ordinal: 0x5
  UCHAR NodeNumber;                              // offset: 0x5a ordinal: 0x6
  struct _flags Flags;                           // offset: 0x5b ordinal: 0x7
  ULONG MmShiftedColor;                          // offset: 0x5c ordinal: 0x8
  ULONGLONG FreeCount[2];                        // offset: 0x60 ordinal: 0x9
  struct _SLIST_ENTRY *PfnDeferredList;          // offset: 0x70 ordinal: 0xa
  ULONG Right;                                   // offset: 0x78 ordinal: 0xb
  ULONG Left;                                    // offset: 0x7c ordinal: 0xc
  struct _CACHED_KSTACK_LIST CachedKernelStacks; // offset: 0x80 ordinal: 0xd
} _KNODE;

// 0x3b8 bytes (sizeof)
typedef struct _KUSER_SHARED_DATA {
  ULONG TickCountLowDeprecated;        // offset: 0x0 ordinal: 0x0
  ULONG TickCountMultiplier;           // offset: 0x4 ordinal: 0x1
  struct _KSYSTEM_TIME InterruptTime;  // offset: 0x8 ordinal: 0x2
  struct _KSYSTEM_TIME SystemTime;     // offset: 0x14 ordinal: 0x3
  struct _KSYSTEM_TIME TimeZoneBias;   // offset: 0x20 ordinal: 0x4
  USHORT ImageNumberLow;               // offset: 0x2c ordinal: 0x5
  USHORT ImageNumberHigh;              // offset: 0x2e ordinal: 0x6
  WCHAR NtSystemRoot[260];             // offset: 0x30 ordinal: 0x7
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
  union {
    ULONG SharedDataFlags;         // offset: 0x2f0 ordinal: 0x20
    ULONG DbgErrorPortPresent : 1; // offset: 0x2f0 ordinal: 0x21
  };
  ULONG DbgElevationEnabled : 1;       // offset: 0x2f0 ordinal: 0x22
  ULONG DbgVirtEnabled : 1;            // offset: 0x2f0 ordinal: 0x23
  ULONG DbgInstallerDetectEnabled : 1; // offset: 0x2f0 ordinal: 0x24
  ULONG SystemDllRelocated : 1;        // offset: 0x2f0 ordinal: 0x25
  ULONG SpareBits : 27;                // offset: 0x2f0 ordinal: 0x26
  ULONGLONG TestRetInstruction;        // offset: 0x2f8 ordinal: 0x27
  ULONG SystemCall;                    // offset: 0x300 ordinal: 0x28
  ULONG SystemCallReturn;              // offset: 0x304 ordinal: 0x29
  ULONGLONG SystemCallPad[3];          // offset: 0x308 ordinal: 0x2a
  union {
    struct _KSYSTEM_TIME TickCount; // offset: 0x320 ordinal: 0x2b
    ULONGLONG TickCountQuad;        // offset: 0x320 ordinal: 0x2c
  };
  ULONG Cookie;                               // offset: 0x330 ordinal: 0x2d
  LONGLONG ConsoleSessionForegroundProcessId; // offset: 0x338 ordinal: 0x2e
  ULONG Wow64SharedInformation[16];           // offset: 0x340 ordinal: 0x2f
  USHORT UserModeGlobalLogger[8];             // offset: 0x380 ordinal: 0x30
  ULONG HeapTracingPid[2];                    // offset: 0x390 ordinal: 0x31
  ULONG CritSecTracingPid[2];                 // offset: 0x398 ordinal: 0x32
  ULONG ImageFileExecutionOptions;            // offset: 0x3a0 ordinal: 0x33
  union {
    ULONGLONG AffinityPad;             // offset: 0x3a8 ordinal: 0x34
    ULONGLONG ActiveProcessorAffinity; // offset: 0x3a8 ordinal: 0x35
  };
  ULONGLONG InterruptTimeBias; // offset: 0x3b0 ordinal: 0x36
} _KUSER_SHARED_DATA;

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

// 0x128 bytes (sizeof)
typedef struct PO_MEMORY_IMAGE {
  ULONG Signature;                 // offset: 0x0 ordinal: 0x0
  ULONG ImageType;                 // offset: 0x4 ordinal: 0x1
  ULONG CheckSum;                  // offset: 0x8 ordinal: 0x2
  ULONG LengthSelf;                // offset: 0xc ordinal: 0x3
  ULONGLONG PageSelf;              // offset: 0x10 ordinal: 0x4
  ULONG PageSize;                  // offset: 0x18 ordinal: 0x5
  union _LARGE_INTEGER SystemTime; // offset: 0x20 ordinal: 0x6
  ULONGLONG InterruptTime;         // offset: 0x28 ordinal: 0x7
  ULONG FeatureFlags;              // offset: 0x30 ordinal: 0x8
  UCHAR HiberFlags;                // offset: 0x34 ordinal: 0x9
  UCHAR spare[3];                  // offset: 0x35 ordinal: 0xa
  ULONG NoHiberPtes;               // offset: 0x38 ordinal: 0xb
  ULONGLONG HiberVa;               // offset: 0x40 ordinal: 0xc
  union _LARGE_INTEGER HiberPte;   // offset: 0x48 ordinal: 0xd
  ULONG NoFreePages;               // offset: 0x50 ordinal: 0xe
  ULONG FreeMapCheck;              // offset: 0x54 ordinal: 0xf
  ULONG WakeCheck;                 // offset: 0x58 ordinal: 0x10
  ULONGLONG TotalPages;            // offset: 0x60 ordinal: 0x11
  ULONGLONG FirstTablePage;        // offset: 0x68 ordinal: 0x12
  ULONGLONG LastFilePage;          // offset: 0x70 ordinal: 0x13
  struct _PO_HIBER_PERF PerfInfo;  // offset: 0x78 ordinal: 0x14
  ULONG NoBootLoaderLogPages;      // offset: 0xd8 ordinal: 0x15
  ULONGLONG BootLoaderLogPages[8]; // offset: 0xe0 ordinal: 0x16
  ULONG TotalPhysicalMemoryCount;  // offset: 0x120 ordinal: 0x17
} PO_MEMORY_IMAGE;

// 0x158 bytes (sizeof)
typedef struct _POP_HIBER_CONTEXT {
  UCHAR WriteToFile;                        // offset: 0x0 ordinal: 0x0
  UCHAR ReserveLoaderMemory;                // offset: 0x1 ordinal: 0x1
  UCHAR ReserveFreeMemory;                  // offset: 0x2 ordinal: 0x2
  UCHAR VerifyOnWake;                       // offset: 0x3 ordinal: 0x3
  UCHAR Reset;                              // offset: 0x4 ordinal: 0x4
  UCHAR HiberFlags;                         // offset: 0x5 ordinal: 0x5
  UCHAR WroteHiberFile;                     // offset: 0x6 ordinal: 0x6
  ULONGLONG Lock;                           // offset: 0x8 ordinal: 0x7
  UCHAR MapFrozen;                          // offset: 0x10 ordinal: 0x8
  struct _RTL_BITMAP MemoryMap;             // offset: 0x18 ordinal: 0x9
  struct _RTL_BITMAP DiscardedMemoryPages;  // offset: 0x28 ordinal: 0xa
  struct _LIST_ENTRY ClonedRanges;          // offset: 0x38 ordinal: 0xb
  ULONG ClonedRangeCount;                   // offset: 0x48 ordinal: 0xc
  struct _LIST_ENTRY *NextCloneRange;       // offset: 0x50 ordinal: 0xd
  ULONGLONG NextPreserve;                   // offset: 0x58 ordinal: 0xe
  struct _MDL *LoaderMdl;                   // offset: 0x60 ordinal: 0xf
  struct _MDL *AllocatedMdl;                // offset: 0x68 ordinal: 0x10
  ULONGLONG PagesOut;                       // offset: 0x70 ordinal: 0x11
  VOID *IoPages;                            // offset: 0x78 ordinal: 0x12
  VOID *CurrentMcb;                         // offset: 0x80 ordinal: 0x13
  struct _DUMP_STACK_CONTEXT *DumpStack;    // offset: 0x88 ordinal: 0x14
  struct _KPROCESSOR_STATE *WakeState;      // offset: 0x90 ordinal: 0x15
  ULONGLONG HiberVa;                        // offset: 0x98 ordinal: 0x16
  union _LARGE_INTEGER HiberPte;            // offset: 0xa0 ordinal: 0x17
  LONG Status;                              // offset: 0xa8 ordinal: 0x18
  struct PO_MEMORY_IMAGE *MemoryImage;      // offset: 0xb0 ordinal: 0x19
  struct _PO_MEMORY_RANGE_ARRAY *TableHead; // offset: 0xb8 ordinal: 0x1a
  UCHAR *CompressionWorkspace;              // offset: 0xc0 ordinal: 0x1b
  UCHAR *CompressedWriteBuffer;             // offset: 0xc8 ordinal: 0x1c
  ULONG *PerformanceStats;                  // offset: 0xd0 ordinal: 0x1d
  VOID *CompressionBlock;                   // offset: 0xd8 ordinal: 0x1e
  VOID *DmaIO;                              // offset: 0xe0 ordinal: 0x1f
  VOID *TemporaryHeap;                      // offset: 0xe8 ordinal: 0x20
  struct _PO_HIBER_PERF PerfInfo;           // offset: 0xf0 ordinal: 0x21
  struct _MDL *BootLoaderLogMdl;            // offset: 0x150 ordinal: 0x22
} _POP_HIBER_CONTEXT;

// 0xb0 bytes (sizeof)
typedef struct _POP_POWER_ACTION {
  UCHAR Updates;                                   // offset: 0x0 ordinal: 0x0
  UCHAR State;                                     // offset: 0x1 ordinal: 0x1
  UCHAR Shutdown;                                  // offset: 0x2 ordinal: 0x2
  enum POWER_ACTION Action;                        // offset: 0x4 ordinal: 0x3
  enum _SYSTEM_POWER_STATE LightestState;          // offset: 0x8 ordinal: 0x4
  ULONG Flags;                                     // offset: 0xc ordinal: 0x5
  LONG Status;                                     // offset: 0x10 ordinal: 0x6
  enum POP_POLICY_DEVICE_TYPE DeviceType;          // offset: 0x14 ordinal: 0x7
  ULONG DeviceTypeFlags;                           // offset: 0x18 ordinal: 0x8
  UCHAR IrpMinor;                                  // offset: 0x1c ordinal: 0x9
  UCHAR Waking;                                    // offset: 0x1d ordinal: 0xa
  enum _SYSTEM_POWER_STATE SystemState;            // offset: 0x20 ordinal: 0xb
  enum _SYSTEM_POWER_STATE NextSystemState;        // offset: 0x24 ordinal: 0xc
  enum _SYSTEM_POWER_STATE EffectiveSystemState;   // offset: 0x28 ordinal: 0xd
  enum _SYSTEM_POWER_STATE CurrentSystemState;     // offset: 0x2c ordinal: 0xe
  struct _POP_SHUTDOWN_BUG_CHECK *ShutdownBugCode; // offset: 0x30 ordinal: 0xf
  struct _POP_DEVICE_SYS_STATE *DevState;          // offset: 0x38 ordinal: 0x10
  struct _POP_DISPLAY_RESUME_CONTEXT
      *DisplayResumeContext;               // offset: 0x40 ordinal: 0x11
  struct _POP_HIBER_CONTEXT *HiberContext; // offset: 0x48 ordinal: 0x12
  ULONGLONG WakeTime;                      // offset: 0x50 ordinal: 0x13
  ULONGLONG SleepTime;                     // offset: 0x58 ordinal: 0x14
  struct _SYSTEM_POWER_STATE_CONTEXT
      SystemContext; // offset: 0x60 ordinal: 0x15
  struct SYSTEM_POWER_CAPABILITIES
      FilteredCapabilities; // offset: 0x64 ordinal: 0x16
} _POP_POWER_ACTION;

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

// 0x10 bytes (sizeof)
typedef struct _IO_STATUS_BLOCK {
  union {
    LONG Status;   // offset: 0x0 ordinal: 0x0
    VOID *Pointer; // offset: 0x0 ordinal: 0x1
  };
  ULONGLONG Information; // offset: 0x8 ordinal: 0x2
} _IO_STATUS_BLOCK;

// 0x10 bytes (sizeof)
typedef union __anon_772 {
  struct _IO_STATUS_BLOCK IoStatus; // offset: 0x0 ordinal: 0x0
} __anon_772;

typedef VOID (*__anon_353)(VOID *, struct _IO_STATUS_BLOCK *, ULONG);

// 0x10 bytes (sizeof)
typedef struct __anon_291 {
  union {
    VOID(*UserApcRoutine)
    (VOID *, struct _IO_STATUS_BLOCK *, ULONG); // offset: 0x0 ordinal: 0x0
    VOID *IssuingProcess;                       // offset: 0x0 ordinal: 0x1
  };
  VOID *UserApcContext; // offset: 0x8 ordinal: 0x2
} __anon_291;

// 0x10 bytes (sizeof)
typedef union __anon_277 {
  struct __anon_291 AsynchronousParameters; // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER AllocationSize;      // offset: 0x0 ordinal: 0x1
} __anon_277;

typedef UCHAR (*__anon_348)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            ULONG, ULONG, VOID *, struct _MDL **,
                            struct _IO_STATUS_BLOCK *,
                            struct _COMPRESSED_DATA_INFO *, ULONG,
                            struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_345)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            ULONG, ULONG, struct _MDL **,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_343)(struct _FILE_OBJECT *, UCHAR,
                            struct _FILE_NETWORK_OPEN_INFORMATION *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_340)(struct _FILE_OBJECT *, UCHAR, VOID *, ULONG, VOID *,
                            ULONG, ULONG, struct _IO_STATUS_BLOCK *,
                            struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_339)(struct _FILE_OBJECT *, VOID *, ULONG,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_335)(struct _FILE_OBJECT *, UCHAR,
                            struct _FILE_STANDARD_INFORMATION *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_334)(struct _FILE_OBJECT *, UCHAR,
                            struct _FILE_BASIC_INFORMATION *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_333)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            ULONG, UCHAR, ULONG, VOID *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_332)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            ULONG, UCHAR, ULONG, UCHAR,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

// 0xd0 bytes (sizeof)
typedef struct _IRP {
  SHORT Type;                         // offset: 0x0 ordinal: 0x0
  USHORT Size;                        // offset: 0x2 ordinal: 0x1
  struct _MDL *MdlAddress;            // offset: 0x8 ordinal: 0x2
  ULONG Flags;                        // offset: 0x10 ordinal: 0x3
  union __anon_275 AssociatedIrp;     // offset: 0x18 ordinal: 0x4
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
  union __anon_277 Overlay;           // offset: 0x58 ordinal: 0x11
  VOID(*CancelRoutine)
  (struct _DEVICE_OBJECT *, struct _IRP *); // offset: 0x68 ordinal: 0x12
  VOID *UserBuffer;                         // offset: 0x70 ordinal: 0x13
  union __anon_278 Tail;                    // offset: 0x78 ordinal: 0x14
} _IRP;

// 0x200 bytes (sizeof)
typedef struct _IOV_FORCED_PENDING_TRACE {
  struct _IRP *Irp;     // offset: 0x0 ordinal: 0x0
  VOID *StackTrace[63]; // offset: 0x8 ordinal: 0x1
} _IOV_FORCED_PENDING_TRACE;

// 0x10 bytes (sizeof)
typedef struct _PO_IRP_QUEUE {
  struct _IRP *CurrentIrp;     // offset: 0x0 ordinal: 0x0
  struct _IRP *PendingIrpList; // offset: 0x8 ordinal: 0x1
} _PO_IRP_QUEUE;

// 0x20 bytes (sizeof)
typedef struct _PO_IRP_MANAGER {
  struct _PO_IRP_QUEUE DeviceIrpQueue; // offset: 0x0 ordinal: 0x0
  struct _PO_IRP_QUEUE SystemIrpQueue; // offset: 0x10 ordinal: 0x1
} _PO_IRP_MANAGER;

// 0x220 bytes (sizeof)
typedef struct _DEVICE_NODE {
  struct _DEVICE_NODE *Sibling;                // offset: 0x0 ordinal: 0x0
  struct _DEVICE_NODE *Child;                  // offset: 0x8 ordinal: 0x1
  struct _DEVICE_NODE *Parent;                 // offset: 0x10 ordinal: 0x2
  struct _DEVICE_NODE *LastChild;              // offset: 0x18 ordinal: 0x3
  ULONG Level;                                 // offset: 0x20 ordinal: 0x4
  struct _PO_DEVICE_NOTIFY Notify;             // offset: 0x28 ordinal: 0x5
  struct _PO_IRP_MANAGER PoIrpManager;         // offset: 0x68 ordinal: 0x6
  enum _PNP_DEVNODE_STATE State;               // offset: 0x88 ordinal: 0x7
  enum _PNP_DEVNODE_STATE PreviousState;       // offset: 0x8c ordinal: 0x8
  enum _PNP_DEVNODE_STATE StateHistory[20];    // offset: 0x90 ordinal: 0x9
  ULONG StateHistoryEntry;                     // offset: 0xe0 ordinal: 0xa
  LONG CompletionStatus;                       // offset: 0xe4 ordinal: 0xb
  struct _IRP *PendingIrp;                     // offset: 0xe8 ordinal: 0xc
  ULONG Flags;                                 // offset: 0xf0 ordinal: 0xd
  ULONG UserFlags;                             // offset: 0xf4 ordinal: 0xe
  ULONG Problem;                               // offset: 0xf8 ordinal: 0xf
  struct _DEVICE_OBJECT *PhysicalDeviceObject; // offset: 0x100 ordinal: 0x10
  struct _CM_RESOURCE_LIST *ResourceList;      // offset: 0x108 ordinal: 0x11
  struct _CM_RESOURCE_LIST
      *ResourceListTranslated;         // offset: 0x110 ordinal: 0x12
  struct _UNICODE_STRING InstancePath; // offset: 0x118 ordinal: 0x13
  struct _UNICODE_STRING ServiceName;  // offset: 0x128 ordinal: 0x14
  struct _DEVICE_OBJECT *DuplicatePDO; // offset: 0x138 ordinal: 0x15
  struct _IO_RESOURCE_REQUIREMENTS_LIST
      *ResourceRequirements;               // offset: 0x140 ordinal: 0x16
  enum _INTERFACE_TYPE InterfaceType;      // offset: 0x148 ordinal: 0x17
  ULONG BusNumber;                         // offset: 0x14c ordinal: 0x18
  enum _INTERFACE_TYPE ChildInterfaceType; // offset: 0x150 ordinal: 0x19
  ULONG ChildBusNumber;                    // offset: 0x154 ordinal: 0x1a
  USHORT ChildBusTypeIndex;                // offset: 0x158 ordinal: 0x1b
  UCHAR RemovalPolicy;                     // offset: 0x15a ordinal: 0x1c
  UCHAR HardwareRemovalPolicy;             // offset: 0x15b ordinal: 0x1d
  struct _LIST_ENTRY TargetDeviceNotify;   // offset: 0x160 ordinal: 0x1e
  struct _LIST_ENTRY DeviceArbiterList;    // offset: 0x170 ordinal: 0x1f
  struct _LIST_ENTRY DeviceTranslatorList; // offset: 0x180 ordinal: 0x20
  USHORT NoTranslatorMask;                 // offset: 0x190 ordinal: 0x21
  USHORT QueryTranslatorMask;              // offset: 0x192 ordinal: 0x22
  USHORT NoArbiterMask;                    // offset: 0x194 ordinal: 0x23
  USHORT QueryArbiterMask;                 // offset: 0x196 ordinal: 0x24
  union __anon_971 OverUsed1;              // offset: 0x198 ordinal: 0x25
  union __anon_980 OverUsed2;              // offset: 0x1a0 ordinal: 0x26
  struct _CM_RESOURCE_LIST *BootResources; // offset: 0x1a8 ordinal: 0x27
  struct _CM_RESOURCE_LIST
      *BootResourcesTranslated;               // offset: 0x1b0 ordinal: 0x28
  ULONG CapabilityFlags;                      // offset: 0x1b8 ordinal: 0x29
  struct __anon_981 DockInfo;                 // offset: 0x1c0 ordinal: 0x2a
  ULONG DisableableDepends;                   // offset: 0x1e0 ordinal: 0x2b
  struct _LIST_ENTRY PendedSetInterfaceState; // offset: 0x1e8 ordinal: 0x2c
  struct _LIST_ENTRY LegacyBusListEntry;      // offset: 0x1f8 ordinal: 0x2d
  ULONG DriverUnloadRetryCount;               // offset: 0x208 ordinal: 0x2e
  struct _DEVICE_NODE *PreviousParent;        // offset: 0x210 ordinal: 0x2f
  ULONG DeletedChildren;                      // offset: 0x218 ordinal: 0x30
  ULONG NumaNodeIndex;                        // offset: 0x21c ordinal: 0x31
} _DEVICE_NODE;

typedef LONG (*__anon_435)(struct _DEVICE_OBJECT *, struct _IRP *, VOID *);

// 0x48 bytes (sizeof)
typedef struct _IO_STACK_LOCATION {
  UCHAR MajorFunction;                 // offset: 0x0 ordinal: 0x0
  UCHAR MinorFunction;                 // offset: 0x1 ordinal: 0x1
  UCHAR Flags;                         // offset: 0x2 ordinal: 0x2
  UCHAR Control;                       // offset: 0x3 ordinal: 0x3
  union __anon_379 Parameters;         // offset: 0x8 ordinal: 0x4
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x28 ordinal: 0x5
  struct _FILE_OBJECT *FileObject;     // offset: 0x30 ordinal: 0x6
  LONG(*CompletionRoutine)
  (struct _DEVICE_OBJECT *, struct _IRP *, VOID *); // offset: 0x38 ordinal: 0x7
  VOID *Context;                                    // offset: 0x40 ordinal: 0x8
} _IO_STACK_LOCATION;

typedef UCHAR (*__anon_349)(struct _IRP *,
                            struct _FILE_NETWORK_OPEN_INFORMATION *,
                            struct _DEVICE_OBJECT *);

typedef LONG (*__anon_320)(struct _DEVICE_OBJECT *, struct _IRP *);

typedef enum _IO_ALLOCATION_ACTION (*__anon_295)(struct _DEVICE_OBJECT *,
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
typedef union __anon_258 {
  struct _LIST_ENTRY ListEntry;   // offset: 0x0 ordinal: 0x0
  struct _WAIT_CONTEXT_BLOCK Wcb; // offset: 0x0 ordinal: 0x1
} __anon_258;

typedef VOID (*__anon_287)(struct _DEVICE_OBJECT *, struct _IRP *);

typedef VOID (*__anon_39)(struct _TP_CALLBACK_INSTANCE *, struct _TP_DIRECT *,
                          VOID *, struct _IO_STATUS_BLOCK *);

// 0x8 bytes (sizeof)
typedef struct _TP_DIRECT {
  VOID(*Callback)
  (struct _TP_CALLBACK_INSTANCE *, struct _TP_DIRECT *, VOID *,
   struct _IO_STATUS_BLOCK *); // offset: 0x0 ordinal: 0x0
} _TP_DIRECT;

// 0x238 bytes (sizeof)
typedef struct _PEB32 {
  UCHAR InheritedAddressSpace;    // offset: 0x0 ordinal: 0x0
  UCHAR ReadImageFileExecOptions; // offset: 0x1 ordinal: 0x1
  UCHAR BeingDebugged;            // offset: 0x2 ordinal: 0x2
  union {
    UCHAR BitField;                // offset: 0x3 ordinal: 0x3
    UCHAR ImageUsesLargePages : 1; // offset: 0x3 ordinal: 0x4
  };
  UCHAR IsProtectedProcess : 1;          // offset: 0x3 ordinal: 0x5
  UCHAR IsLegacyProcess : 1;             // offset: 0x3 ordinal: 0x6
  UCHAR IsImageDynamicallyRelocated : 1; // offset: 0x3 ordinal: 0x7
  UCHAR SpareBits : 4;                   // offset: 0x3 ordinal: 0x8
  ULONG Mutant;                          // offset: 0x4 ordinal: 0x9
  ULONG ImageBaseAddress;                // offset: 0x8 ordinal: 0xa
  ULONG Ldr;                             // offset: 0xc ordinal: 0xb
  ULONG ProcessParameters;               // offset: 0x10 ordinal: 0xc
  ULONG SubSystemData;                   // offset: 0x14 ordinal: 0xd
  ULONG ProcessHeap;                     // offset: 0x18 ordinal: 0xe
  ULONG FastPebLock;                     // offset: 0x1c ordinal: 0xf
  ULONG AtlThunkSListPtr;                // offset: 0x20 ordinal: 0x10
  ULONG IFEOKey;                         // offset: 0x24 ordinal: 0x11
  union {
    ULONG CrossProcessFlags; // offset: 0x28 ordinal: 0x12
    ULONG ProcessInJob : 1;  // offset: 0x28 ordinal: 0x13
  };
  ULONG ProcessInitializing : 1; // offset: 0x28 ordinal: 0x14
  ULONG ReservedBits0 : 30;      // offset: 0x28 ordinal: 0x15
  union {
    ULONG KernelCallbackTable; // offset: 0x2c ordinal: 0x16
    ULONG UserSharedInfoPtr;   // offset: 0x2c ordinal: 0x17
  };
  ULONG SystemReserved[1];                     // offset: 0x30 ordinal: 0x18
  ULONG SpareUlong;                            // offset: 0x34 ordinal: 0x19
  ULONG FreeList;                              // offset: 0x38 ordinal: 0x1a
  ULONG TlsExpansionCounter;                   // offset: 0x3c ordinal: 0x1b
  ULONG TlsBitmap;                             // offset: 0x40 ordinal: 0x1c
  ULONG TlsBitmapBits[2];                      // offset: 0x44 ordinal: 0x1d
  ULONG ReadOnlySharedMemoryBase;              // offset: 0x4c ordinal: 0x1e
  ULONG HotpatchInformation;                   // offset: 0x50 ordinal: 0x1f
  ULONG ReadOnlyStaticServerData;              // offset: 0x54 ordinal: 0x20
  ULONG AnsiCodePageData;                      // offset: 0x58 ordinal: 0x21
  ULONG OemCodePageData;                       // offset: 0x5c ordinal: 0x22
  ULONG UnicodeCaseTableData;                  // offset: 0x60 ordinal: 0x23
  ULONG NumberOfProcessors;                    // offset: 0x64 ordinal: 0x24
  ULONG NtGlobalFlag;                          // offset: 0x68 ordinal: 0x25
  union _LARGE_INTEGER CriticalSectionTimeout; // offset: 0x70 ordinal: 0x26
  ULONG HeapSegmentReserve;                    // offset: 0x78 ordinal: 0x27
  ULONG HeapSegmentCommit;                     // offset: 0x7c ordinal: 0x28
  ULONG HeapDeCommitTotalFreeThreshold;        // offset: 0x80 ordinal: 0x29
  ULONG HeapDeCommitFreeBlockThreshold;        // offset: 0x84 ordinal: 0x2a
  ULONG NumberOfHeaps;                         // offset: 0x88 ordinal: 0x2b
  ULONG MaximumNumberOfHeaps;                  // offset: 0x8c ordinal: 0x2c
  ULONG ProcessHeaps;                          // offset: 0x90 ordinal: 0x2d
  ULONG GdiSharedHandleTable;                  // offset: 0x94 ordinal: 0x2e
  ULONG ProcessStarterHelper;                  // offset: 0x98 ordinal: 0x2f
  ULONG GdiDCAttributeList;                    // offset: 0x9c ordinal: 0x30
  ULONG LoaderLock;                            // offset: 0xa0 ordinal: 0x31
  ULONG OSMajorVersion;                        // offset: 0xa4 ordinal: 0x32
  ULONG OSMinorVersion;                        // offset: 0xa8 ordinal: 0x33
  USHORT OSBuildNumber;                        // offset: 0xac ordinal: 0x34
  USHORT OSCSDVersion;                         // offset: 0xae ordinal: 0x35
  ULONG OSPlatformId;                          // offset: 0xb0 ordinal: 0x36
  ULONG ImageSubsystem;                        // offset: 0xb4 ordinal: 0x37
  ULONG ImageSubsystemMajorVersion;            // offset: 0xb8 ordinal: 0x38
  ULONG ImageSubsystemMinorVersion;            // offset: 0xbc ordinal: 0x39
  ULONG ImageProcessAffinityMask;              // offset: 0xc0 ordinal: 0x3a
  ULONG GdiHandleBuffer[34];                   // offset: 0xc4 ordinal: 0x3b
  ULONG PostProcessInitRoutine;                // offset: 0x14c ordinal: 0x3c
  ULONG TlsExpansionBitmap;                    // offset: 0x150 ordinal: 0x3d
  ULONG TlsExpansionBitmapBits[32];            // offset: 0x154 ordinal: 0x3e
  ULONG SessionId;                             // offset: 0x1d4 ordinal: 0x3f
  union _ULARGE_INTEGER AppCompatFlags;        // offset: 0x1d8 ordinal: 0x40
  union _ULARGE_INTEGER AppCompatFlagsUser;    // offset: 0x1e0 ordinal: 0x41
  ULONG pShimData;                             // offset: 0x1e8 ordinal: 0x42
  ULONG AppCompatInfo;                         // offset: 0x1ec ordinal: 0x43
  struct _STRING32 CSDVersion;                 // offset: 0x1f0 ordinal: 0x44
  ULONG ActivationContextData;                 // offset: 0x1f8 ordinal: 0x45
  ULONG ProcessAssemblyStorageMap;             // offset: 0x1fc ordinal: 0x46
  ULONG SystemDefaultActivationContextData;    // offset: 0x200 ordinal: 0x47
  ULONG SystemAssemblyStorageMap;              // offset: 0x204 ordinal: 0x48
  ULONG MinimumStackCommit;                    // offset: 0x208 ordinal: 0x49
  ULONG FlsCallback;                           // offset: 0x20c ordinal: 0x4a
  struct LIST_ENTRY32 FlsListHead;             // offset: 0x210 ordinal: 0x4b
  ULONG FlsBitmap;                             // offset: 0x218 ordinal: 0x4c
  ULONG FlsBitmapBits[4];                      // offset: 0x21c ordinal: 0x4d
  ULONG FlsHighIndex;                          // offset: 0x22c ordinal: 0x4e
  ULONG WerRegistrationData;                   // offset: 0x230 ordinal: 0x4f
  ULONG WerShipAssertPtr;                      // offset: 0x234 ordinal: 0x50
} _PEB32;

// 0x18 bytes (sizeof)
typedef struct _KTIMER_TABLE_ENTRY {
  struct _LIST_ENTRY Entry;   // offset: 0x0 ordinal: 0x0
  union _ULARGE_INTEGER Time; // offset: 0x10 ordinal: 0x1
} _KTIMER_TABLE_ENTRY;

// 0x368 bytes (sizeof)
typedef struct _PEB {
  UCHAR InheritedAddressSpace;    // offset: 0x0 ordinal: 0x0
  UCHAR ReadImageFileExecOptions; // offset: 0x1 ordinal: 0x1
  UCHAR BeingDebugged;            // offset: 0x2 ordinal: 0x2
  union {
    UCHAR BitField;                // offset: 0x3 ordinal: 0x3
    UCHAR ImageUsesLargePages : 1; // offset: 0x3 ordinal: 0x4
  };
  UCHAR IsProtectedProcess : 1;          // offset: 0x3 ordinal: 0x5
  UCHAR IsLegacyProcess : 1;             // offset: 0x3 ordinal: 0x6
  UCHAR IsImageDynamicallyRelocated : 1; // offset: 0x3 ordinal: 0x7
  UCHAR SpareBits : 4;                   // offset: 0x3 ordinal: 0x8
  VOID *Mutant;                          // offset: 0x8 ordinal: 0x9
  VOID *ImageBaseAddress;                // offset: 0x10 ordinal: 0xa
  struct _PEB_LDR_DATA *Ldr;             // offset: 0x18 ordinal: 0xb
  struct _RTL_USER_PROCESS_PARAMETERS
      *ProcessParameters;                    // offset: 0x20 ordinal: 0xc
  VOID *SubSystemData;                       // offset: 0x28 ordinal: 0xd
  VOID *ProcessHeap;                         // offset: 0x30 ordinal: 0xe
  struct _RTL_CRITICAL_SECTION *FastPebLock; // offset: 0x38 ordinal: 0xf
  VOID *AtlThunkSListPtr;                    // offset: 0x40 ordinal: 0x10
  VOID *IFEOKey;                             // offset: 0x48 ordinal: 0x11
  union {
    ULONG CrossProcessFlags; // offset: 0x50 ordinal: 0x12
    ULONG ProcessInJob : 1;  // offset: 0x50 ordinal: 0x13
  };
  ULONG ProcessInitializing : 1; // offset: 0x50 ordinal: 0x14
  ULONG ReservedBits0 : 30;      // offset: 0x50 ordinal: 0x15
  union {
    VOID *KernelCallbackTable; // offset: 0x58 ordinal: 0x16
    VOID *UserSharedInfoPtr;   // offset: 0x58 ordinal: 0x17
  };
  ULONG SystemReserved[1];                     // offset: 0x60 ordinal: 0x18
  ULONG SpareUlong;                            // offset: 0x64 ordinal: 0x19
  struct _PEB_FREE_BLOCK *FreeList;            // offset: 0x68 ordinal: 0x1a
  ULONG TlsExpansionCounter;                   // offset: 0x70 ordinal: 0x1b
  VOID *TlsBitmap;                             // offset: 0x78 ordinal: 0x1c
  ULONG TlsBitmapBits[2];                      // offset: 0x80 ordinal: 0x1d
  VOID *ReadOnlySharedMemoryBase;              // offset: 0x88 ordinal: 0x1e
  VOID *HotpatchInformation;                   // offset: 0x90 ordinal: 0x1f
  VOID **ReadOnlyStaticServerData;             // offset: 0x98 ordinal: 0x20
  VOID *AnsiCodePageData;                      // offset: 0xa0 ordinal: 0x21
  VOID *OemCodePageData;                       // offset: 0xa8 ordinal: 0x22
  VOID *UnicodeCaseTableData;                  // offset: 0xb0 ordinal: 0x23
  ULONG NumberOfProcessors;                    // offset: 0xb8 ordinal: 0x24
  ULONG NtGlobalFlag;                          // offset: 0xbc ordinal: 0x25
  union _LARGE_INTEGER CriticalSectionTimeout; // offset: 0xc0 ordinal: 0x26
  ULONGLONG HeapSegmentReserve;                // offset: 0xc8 ordinal: 0x27
  ULONGLONG HeapSegmentCommit;                 // offset: 0xd0 ordinal: 0x28
  ULONGLONG HeapDeCommitTotalFreeThreshold;    // offset: 0xd8 ordinal: 0x29
  ULONGLONG HeapDeCommitFreeBlockThreshold;    // offset: 0xe0 ordinal: 0x2a
  ULONG NumberOfHeaps;                         // offset: 0xe8 ordinal: 0x2b
  ULONG MaximumNumberOfHeaps;                  // offset: 0xec ordinal: 0x2c
  VOID **ProcessHeaps;                         // offset: 0xf0 ordinal: 0x2d
  VOID *GdiSharedHandleTable;                  // offset: 0xf8 ordinal: 0x2e
  VOID *ProcessStarterHelper;                  // offset: 0x100 ordinal: 0x2f
  ULONG GdiDCAttributeList;                    // offset: 0x108 ordinal: 0x30
  struct _RTL_CRITICAL_SECTION *LoaderLock;    // offset: 0x110 ordinal: 0x31
  ULONG OSMajorVersion;                        // offset: 0x118 ordinal: 0x32
  ULONG OSMinorVersion;                        // offset: 0x11c ordinal: 0x33
  USHORT OSBuildNumber;                        // offset: 0x120 ordinal: 0x34
  USHORT OSCSDVersion;                         // offset: 0x122 ordinal: 0x35
  ULONG OSPlatformId;                          // offset: 0x124 ordinal: 0x36
  ULONG ImageSubsystem;                        // offset: 0x128 ordinal: 0x37
  ULONG ImageSubsystemMajorVersion;            // offset: 0x12c ordinal: 0x38
  ULONG ImageSubsystemMinorVersion;            // offset: 0x130 ordinal: 0x39
  ULONGLONG ImageProcessAffinityMask;          // offset: 0x138 ordinal: 0x3a
  ULONG GdiHandleBuffer[60];                   // offset: 0x140 ordinal: 0x3b
  VOID (*PostProcessInitRoutine)();            // offset: 0x230 ordinal: 0x3c
  VOID *TlsExpansionBitmap;                    // offset: 0x238 ordinal: 0x3d
  ULONG TlsExpansionBitmapBits[32];            // offset: 0x240 ordinal: 0x3e
  ULONG SessionId;                             // offset: 0x2c0 ordinal: 0x3f
  union _ULARGE_INTEGER AppCompatFlags;        // offset: 0x2c8 ordinal: 0x40
  union _ULARGE_INTEGER AppCompatFlagsUser;    // offset: 0x2d0 ordinal: 0x41
  VOID *pShimData;                             // offset: 0x2d8 ordinal: 0x42
  VOID *AppCompatInfo;                         // offset: 0x2e0 ordinal: 0x43
  struct _UNICODE_STRING CSDVersion;           // offset: 0x2e8 ordinal: 0x44
  struct _ACTIVATION_CONTEXT_DATA
      *ActivationContextData; // offset: 0x2f8 ordinal: 0x45
  struct _ASSEMBLY_STORAGE_MAP
      *ProcessAssemblyStorageMap; // offset: 0x300 ordinal: 0x46
  struct _ACTIVATION_CONTEXT_DATA
      *SystemDefaultActivationContextData; // offset: 0x308 ordinal: 0x47
  struct _ASSEMBLY_STORAGE_MAP
      *SystemAssemblyStorageMap;          // offset: 0x310 ordinal: 0x48
  ULONGLONG MinimumStackCommit;           // offset: 0x318 ordinal: 0x49
  struct _FLS_CALLBACK_INFO *FlsCallback; // offset: 0x320 ordinal: 0x4a
  struct _LIST_ENTRY FlsListHead;         // offset: 0x328 ordinal: 0x4b
  VOID *FlsBitmap;                        // offset: 0x338 ordinal: 0x4c
  ULONG FlsBitmapBits[4];                 // offset: 0x340 ordinal: 0x4d
  ULONG FlsHighIndex;                     // offset: 0x350 ordinal: 0x4e
  VOID *WerRegistrationData;              // offset: 0x358 ordinal: 0x4f
  VOID *WerShipAssertPtr;                 // offset: 0x360 ordinal: 0x50
} _PEB;

// 0x1828 bytes (sizeof)
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
  UCHAR SpareBytes1[24];                      // offset: 0x2d0 ordinal: 0x12
  ULONG TxFsContext;                          // offset: 0x2e8 ordinal: 0x13
  struct _GDI_TEB_BATCH GdiTebBatch;          // offset: 0x2f0 ordinal: 0x14
  struct _CLIENT_ID RealClientId;             // offset: 0x7d8 ordinal: 0x15
  VOID *GdiCachedProcessHandle;               // offset: 0x7e8 ordinal: 0x16
  ULONG GdiClientPID;                         // offset: 0x7f0 ordinal: 0x17
  ULONG GdiClientTID;                         // offset: 0x7f4 ordinal: 0x18
  VOID *GdiThreadLocalInfo;                   // offset: 0x7f8 ordinal: 0x19
  ULONGLONG Win32ClientInfo[62];              // offset: 0x800 ordinal: 0x1a
  VOID *glDispatchTable[233];                 // offset: 0x9f0 ordinal: 0x1b
  ULONGLONG glReserved1[29];                  // offset: 0x1138 ordinal: 0x1c
  VOID *glReserved2;                          // offset: 0x1220 ordinal: 0x1d
  VOID *glSectionInfo;                        // offset: 0x1228 ordinal: 0x1e
  VOID *glSection;                            // offset: 0x1230 ordinal: 0x1f
  VOID *glTable;                              // offset: 0x1238 ordinal: 0x20
  VOID *glCurrentRC;                          // offset: 0x1240 ordinal: 0x21
  VOID *glContext;                            // offset: 0x1248 ordinal: 0x22
  ULONG LastStatusValue;                      // offset: 0x1250 ordinal: 0x23
  struct _UNICODE_STRING StaticUnicodeString; // offset: 0x1258 ordinal: 0x24
  WCHAR StaticUnicodeBuffer[261];             // offset: 0x1268 ordinal: 0x25
  VOID *DeallocationStack;                    // offset: 0x1478 ordinal: 0x26
  VOID *TlsSlots[64];                         // offset: 0x1480 ordinal: 0x27
  struct _LIST_ENTRY TlsLinks;                // offset: 0x1680 ordinal: 0x28
  VOID *Vdm;                                  // offset: 0x1690 ordinal: 0x29
  VOID *ReservedForNtRpc;                     // offset: 0x1698 ordinal: 0x2a
  VOID *DbgSsReserved[2];                     // offset: 0x16a0 ordinal: 0x2b
  ULONG HardErrorMode;                        // offset: 0x16b0 ordinal: 0x2c
  VOID *Instrumentation[11];                  // offset: 0x16b8 ordinal: 0x2d
  struct _GUID ActivityId;                    // offset: 0x1710 ordinal: 0x2e
  VOID *SubProcessTag;                        // offset: 0x1720 ordinal: 0x2f
  VOID *EtwLocalData;                         // offset: 0x1728 ordinal: 0x30
  VOID *EtwTraceData;                         // offset: 0x1730 ordinal: 0x31
  VOID *WinSockData;                          // offset: 0x1738 ordinal: 0x32
  ULONG GdiBatchCount;                        // offset: 0x1740 ordinal: 0x33
  UCHAR SpareBool0;                           // offset: 0x1744 ordinal: 0x34
  UCHAR SpareBool1;                           // offset: 0x1745 ordinal: 0x35
  UCHAR SpareBool2;                           // offset: 0x1746 ordinal: 0x36
  UCHAR IdealProcessor;                       // offset: 0x1747 ordinal: 0x37
  ULONG GuaranteedStackBytes;                 // offset: 0x1748 ordinal: 0x38
  VOID *ReservedForPerf;                      // offset: 0x1750 ordinal: 0x39
  VOID *ReservedForOle;                       // offset: 0x1758 ordinal: 0x3a
  ULONG WaitingOnLoaderLock;                  // offset: 0x1760 ordinal: 0x3b
  VOID *SavedPriorityState;                   // offset: 0x1768 ordinal: 0x3c
  ULONGLONG SoftPatchPtr1;                    // offset: 0x1770 ordinal: 0x3d
  VOID *ThreadPoolData;                       // offset: 0x1778 ordinal: 0x3e
  VOID **TlsExpansionSlots;                   // offset: 0x1780 ordinal: 0x3f
  VOID *DeallocationBStore;                   // offset: 0x1788 ordinal: 0x40
  VOID *BStoreLimit;                          // offset: 0x1790 ordinal: 0x41
  ULONG ImpersonationLocale;                  // offset: 0x1798 ordinal: 0x42
  ULONG IsImpersonating;                      // offset: 0x179c ordinal: 0x43
  VOID *NlsCache;                             // offset: 0x17a0 ordinal: 0x44
  VOID *pShimData;                            // offset: 0x17a8 ordinal: 0x45
  ULONG HeapVirtualAffinity;                  // offset: 0x17b0 ordinal: 0x46
  VOID *CurrentTransactionHandle;             // offset: 0x17b8 ordinal: 0x47
  struct _TEB_ACTIVE_FRAME *ActiveFrame;      // offset: 0x17c0 ordinal: 0x48
  VOID *FlsData;                              // offset: 0x17c8 ordinal: 0x49
  VOID *PreferredLanguages;                   // offset: 0x17d0 ordinal: 0x4a
  VOID *UserPrefLanguages;                    // offset: 0x17d8 ordinal: 0x4b
  VOID *MergedPrefLanguages;                  // offset: 0x17e0 ordinal: 0x4c
  ULONG MuiImpersonation;                     // offset: 0x17e8 ordinal: 0x4d
  union {
    USHORT CrossTebFlags;          // offset: 0x17ec ordinal: 0x4e
    USHORT SpareCrossTebBits : 16; // offset: 0x17ec ordinal: 0x4f
  };
  union {
    USHORT SameTebFlags;         // offset: 0x17ee ordinal: 0x50
    USHORT DbgSafeThunkCall : 1; // offset: 0x17ee ordinal: 0x51
  };
  USHORT DbgInDebugPrint : 1;            // offset: 0x17ee ordinal: 0x52
  USHORT DbgHasFiberData : 1;            // offset: 0x17ee ordinal: 0x53
  USHORT DbgSkipThreadAttach : 1;        // offset: 0x17ee ordinal: 0x54
  USHORT DbgWerInShipAssertCode : 1;     // offset: 0x17ee ordinal: 0x55
  USHORT DbgRanProcessInit : 1;          // offset: 0x17ee ordinal: 0x56
  USHORT DbgClonedThread : 1;            // offset: 0x17ee ordinal: 0x57
  USHORT DbgSuppressDebugMsg : 1;        // offset: 0x17ee ordinal: 0x58
  USHORT SpareSameTebBits : 8;           // offset: 0x17ee ordinal: 0x59
  VOID *TxnScopeEnterCallback;           // offset: 0x17f0 ordinal: 0x5a
  VOID *TxnScopeExitCallback;            // offset: 0x17f8 ordinal: 0x5b
  VOID *TxnScopeContext;                 // offset: 0x1800 ordinal: 0x5c
  ULONG LockCount;                       // offset: 0x1808 ordinal: 0x5d
  ULONG ProcessRundown;                  // offset: 0x180c ordinal: 0x5e
  ULONGLONG LastSwitchTime;              // offset: 0x1810 ordinal: 0x5f
  ULONGLONG TotalSwitchOutTime;          // offset: 0x1818 ordinal: 0x60
  union _LARGE_INTEGER WaitReasonBitMap; // offset: 0x1820 ordinal: 0x61
} _TEB;

// 0x3e8 bytes (sizeof)
typedef struct _EPROCESS {
  struct _KPROCESS Pcb;                   // offset: 0x0 ordinal: 0x0
  struct _EX_PUSH_LOCK ProcessLock;       // offset: 0xc0 ordinal: 0x1
  union _LARGE_INTEGER CreateTime;        // offset: 0xc8 ordinal: 0x2
  union _LARGE_INTEGER ExitTime;          // offset: 0xd0 ordinal: 0x3
  struct _EX_RUNDOWN_REF RundownProtect;  // offset: 0xd8 ordinal: 0x4
  VOID *UniqueProcessId;                  // offset: 0xe0 ordinal: 0x5
  struct _LIST_ENTRY ActiveProcessLinks;  // offset: 0xe8 ordinal: 0x6
  ULONGLONG QuotaUsage[3];                // offset: 0xf8 ordinal: 0x7
  ULONGLONG QuotaPeak[3];                 // offset: 0x110 ordinal: 0x8
  ULONGLONG CommitCharge;                 // offset: 0x128 ordinal: 0x9
  ULONGLONG PeakVirtualSize;              // offset: 0x130 ordinal: 0xa
  ULONGLONG VirtualSize;                  // offset: 0x138 ordinal: 0xb
  struct _LIST_ENTRY SessionProcessLinks; // offset: 0x140 ordinal: 0xc
  VOID *DebugPort;                        // offset: 0x150 ordinal: 0xd
  union {
    VOID *ExceptionPortData;          // offset: 0x158 ordinal: 0xe
    ULONGLONG ExceptionPortValue;     // offset: 0x158 ordinal: 0xf
    ULONGLONG ExceptionPortState : 3; // offset: 0x158 ordinal: 0x10
  };
  struct _HANDLE_TABLE *ObjectTable;          // offset: 0x160 ordinal: 0x11
  struct _EX_FAST_REF Token;                  // offset: 0x168 ordinal: 0x12
  ULONGLONG WorkingSetPage;                   // offset: 0x170 ordinal: 0x13
  struct _EX_PUSH_LOCK AddressCreationLock;   // offset: 0x178 ordinal: 0x14
  struct _ETHREAD *RotateInProgress;          // offset: 0x180 ordinal: 0x15
  struct _ETHREAD *ForkInProgress;            // offset: 0x188 ordinal: 0x16
  ULONGLONG HardwareTrigger;                  // offset: 0x190 ordinal: 0x17
  struct _MM_AVL_TABLE *PhysicalVadRoot;      // offset: 0x198 ordinal: 0x18
  VOID *CloneRoot;                            // offset: 0x1a0 ordinal: 0x19
  ULONGLONG NumberOfPrivatePages;             // offset: 0x1a8 ordinal: 0x1a
  ULONGLONG NumberOfLockedPages;              // offset: 0x1b0 ordinal: 0x1b
  VOID *Win32Process;                         // offset: 0x1b8 ordinal: 0x1c
  struct _EJOB *Job;                          // offset: 0x1c0 ordinal: 0x1d
  VOID *SectionObject;                        // offset: 0x1c8 ordinal: 0x1e
  VOID *SectionBaseAddress;                   // offset: 0x1d0 ordinal: 0x1f
  struct _EPROCESS_QUOTA_BLOCK *QuotaBlock;   // offset: 0x1d8 ordinal: 0x20
  struct _PAGEFAULT_HISTORY *WorkingSetWatch; // offset: 0x1e0 ordinal: 0x21
  VOID *Win32WindowStation;                   // offset: 0x1e8 ordinal: 0x22
  VOID *InheritedFromUniqueProcessId;         // offset: 0x1f0 ordinal: 0x23
  VOID *LdtInformation;                       // offset: 0x1f8 ordinal: 0x24
  VOID *VadFreeHint;                          // offset: 0x200 ordinal: 0x25
  VOID *VdmObjects;                           // offset: 0x208 ordinal: 0x26
  VOID *DeviceMap;                            // offset: 0x210 ordinal: 0x27
  VOID *EtwDataSource;                        // offset: 0x218 ordinal: 0x28
  VOID *FreeTebHint;                          // offset: 0x220 ordinal: 0x29
  union {
    struct _HARDWARE_PTE PageDirectoryPte; // offset: 0x228 ordinal: 0x2a
    ULONGLONG Filler;                      // offset: 0x228 ordinal: 0x2b
  };
  VOID *Session;                            // offset: 0x230 ordinal: 0x2c
  UCHAR ImageFileName[16];                  // offset: 0x238 ordinal: 0x2d
  struct _LIST_ENTRY JobLinks;              // offset: 0x248 ordinal: 0x2e
  VOID *LockedPagesList;                    // offset: 0x258 ordinal: 0x2f
  struct _LIST_ENTRY ThreadListHead;        // offset: 0x260 ordinal: 0x30
  VOID *SecurityPort;                       // offset: 0x270 ordinal: 0x31
  struct _WOW64_PROCESS *Wow64Process;      // offset: 0x278 ordinal: 0x32
  ULONG ActiveThreads;                      // offset: 0x280 ordinal: 0x33
  ULONG ImagePathHash;                      // offset: 0x284 ordinal: 0x34
  ULONG DefaultHardErrorProcessing;         // offset: 0x288 ordinal: 0x35
  LONG LastThreadExitStatus;                // offset: 0x28c ordinal: 0x36
  struct _PEB *Peb;                         // offset: 0x290 ordinal: 0x37
  struct _EX_FAST_REF PrefetchTrace;        // offset: 0x298 ordinal: 0x38
  union _LARGE_INTEGER ReadOperationCount;  // offset: 0x2a0 ordinal: 0x39
  union _LARGE_INTEGER WriteOperationCount; // offset: 0x2a8 ordinal: 0x3a
  union _LARGE_INTEGER OtherOperationCount; // offset: 0x2b0 ordinal: 0x3b
  union _LARGE_INTEGER ReadTransferCount;   // offset: 0x2b8 ordinal: 0x3c
  union _LARGE_INTEGER WriteTransferCount;  // offset: 0x2c0 ordinal: 0x3d
  union _LARGE_INTEGER OtherTransferCount;  // offset: 0x2c8 ordinal: 0x3e
  ULONGLONG CommitChargeLimit;              // offset: 0x2d0 ordinal: 0x3f
  ULONGLONG CommitChargePeak;               // offset: 0x2d8 ordinal: 0x40
  VOID *AweInfo;                            // offset: 0x2e0 ordinal: 0x41
  struct _SE_AUDIT_PROCESS_CREATION_INFO
      SeAuditProcessCreationInfo;    // offset: 0x2e8 ordinal: 0x42
  struct _MMSUPPORT Vm;              // offset: 0x2f0 ordinal: 0x43
  struct _LIST_ENTRY MmProcessLinks; // offset: 0x358 ordinal: 0x44
  ULONG ModifiedPageCount;           // offset: 0x368 ordinal: 0x45
  union {
    ULONG Flags2;                 // offset: 0x36c ordinal: 0x46
    ULONG JobNotReallyActive : 1; // offset: 0x36c ordinal: 0x47
  };
  ULONG AccountingFolded : 1;           // offset: 0x36c ordinal: 0x48
  ULONG NewProcessReported : 1;         // offset: 0x36c ordinal: 0x49
  ULONG ExitProcessReported : 1;        // offset: 0x36c ordinal: 0x4a
  ULONG ReportCommitChanges : 1;        // offset: 0x36c ordinal: 0x4b
  ULONG LastReportMemory : 1;           // offset: 0x36c ordinal: 0x4c
  ULONG ReportPhysicalPageChanges : 1;  // offset: 0x36c ordinal: 0x4d
  ULONG HandleTableRundown : 1;         // offset: 0x36c ordinal: 0x4e
  ULONG NeedsHandleRundown : 1;         // offset: 0x36c ordinal: 0x4f
  ULONG RefTraceEnabled : 1;            // offset: 0x36c ordinal: 0x50
  ULONG NumaAware : 1;                  // offset: 0x36c ordinal: 0x51
  ULONG ProtectedProcess : 1;           // offset: 0x36c ordinal: 0x52
  ULONG DefaultPagePriority : 3;        // offset: 0x36c ordinal: 0x53
  ULONG PrimaryTokenFrozen : 1;         // offset: 0x36c ordinal: 0x54
  ULONG ProcessVerifierTarget : 1;      // offset: 0x36c ordinal: 0x55
  ULONG StackRandomizationDisabled : 1; // offset: 0x36c ordinal: 0x56
  union {
    ULONG Flags;              // offset: 0x370 ordinal: 0x57
    ULONG CreateReported : 1; // offset: 0x370 ordinal: 0x58
  };
  ULONG NoDebugInherit : 1;                 // offset: 0x370 ordinal: 0x59
  ULONG ProcessExiting : 1;                 // offset: 0x370 ordinal: 0x5a
  ULONG ProcessDelete : 1;                  // offset: 0x370 ordinal: 0x5b
  ULONG Wow64SplitPages : 1;                // offset: 0x370 ordinal: 0x5c
  ULONG VmDeleted : 1;                      // offset: 0x370 ordinal: 0x5d
  ULONG OutswapEnabled : 1;                 // offset: 0x370 ordinal: 0x5e
  ULONG Outswapped : 1;                     // offset: 0x370 ordinal: 0x5f
  ULONG ForkFailed : 1;                     // offset: 0x370 ordinal: 0x60
  ULONG Wow64VaSpace4Gb : 1;                // offset: 0x370 ordinal: 0x61
  ULONG AddressSpaceInitialized : 2;        // offset: 0x370 ordinal: 0x62
  ULONG SetTimerResolution : 1;             // offset: 0x370 ordinal: 0x63
  ULONG BreakOnTermination : 1;             // offset: 0x370 ordinal: 0x64
  ULONG DeprioritizeViews : 1;              // offset: 0x370 ordinal: 0x65
  ULONG WriteWatch : 1;                     // offset: 0x370 ordinal: 0x66
  ULONG ProcessInSession : 1;               // offset: 0x370 ordinal: 0x67
  ULONG OverrideAddressSpace : 1;           // offset: 0x370 ordinal: 0x68
  ULONG HasAddressSpace : 1;                // offset: 0x370 ordinal: 0x69
  ULONG LaunchPrefetched : 1;               // offset: 0x370 ordinal: 0x6a
  ULONG InjectInpageErrors : 1;             // offset: 0x370 ordinal: 0x6b
  ULONG VmTopDown : 1;                      // offset: 0x370 ordinal: 0x6c
  ULONG ImageNotifyDone : 1;                // offset: 0x370 ordinal: 0x6d
  ULONG PdeUpdateNeeded : 1;                // offset: 0x370 ordinal: 0x6e
  ULONG VdmAllowed : 1;                     // offset: 0x370 ordinal: 0x6f
  ULONG SmapAllowed : 1;                    // offset: 0x370 ordinal: 0x70
  ULONG ProcessInserted : 1;                // offset: 0x370 ordinal: 0x71
  ULONG DefaultIoPriority : 3;              // offset: 0x370 ordinal: 0x72
  ULONG SparePsFlags1 : 2;                  // offset: 0x370 ordinal: 0x73
  LONG ExitStatus;                          // offset: 0x374 ordinal: 0x74
  USHORT Spare7;                            // offset: 0x378 ordinal: 0x75
  UCHAR SubSystemMinorVersion;              // offset: 0x37a ordinal: 0x76
  UCHAR SubSystemMajorVersion;              // offset: 0x37b ordinal: 0x77
  USHORT SubSystemVersion;                  // offset: 0x37a ordinal: 0x78
  UCHAR PriorityClass;                      // offset: 0x37c ordinal: 0x79
  struct _MM_AVL_TABLE VadRoot;             // offset: 0x380 ordinal: 0x7a
  ULONG Cookie;                             // offset: 0x3c0 ordinal: 0x7b
  struct _ALPC_PROCESS_CONTEXT AlpcContext; // offset: 0x3c8 ordinal: 0x7c
} _EPROCESS;

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

// 0x50 bytes (sizeof)
typedef struct _ETW_REG_ENTRY {
  struct _LIST_ENTRY RegList;        // offset: 0x0 ordinal: 0x0
  struct _ETW_GUID_ENTRY *GuidEntry; // offset: 0x10 ordinal: 0x1
  USHORT Index;                      // offset: 0x18 ordinal: 0x2
  USHORT Flags;                      // offset: 0x1a ordinal: 0x3
  UCHAR EnableMask;                  // offset: 0x1c ordinal: 0x4
  union {
    struct _ETW_REPLY_QUEUE *ReplyQueue; // offset: 0x20 ordinal: 0x5
    struct _ETW_REG_ENTRY *ReplySlot[4]; // offset: 0x20 ordinal: 0x6
  };
  union {
    struct _EPROCESS *Process; // offset: 0x40 ordinal: 0x7
    VOID *Callback;            // offset: 0x40 ordinal: 0x8
  };
  VOID *CallbackContext; // offset: 0x48 ordinal: 0x9
} _ETW_REG_ENTRY;

// 0x18 bytes (sizeof)
typedef struct _ETW_PROVIDER_TABLE_ENTRY {
  LONG RefCount;                   // offset: 0x0 ordinal: 0x0
  enum _ETW_PROVIDER_STATE State;  // offset: 0x4 ordinal: 0x1
  struct _ETW_REG_ENTRY *RegEntry; // offset: 0x8 ordinal: 0x2
  VOID *Caller;                    // offset: 0x10 ordinal: 0x3
} _ETW_PROVIDER_TABLE_ENTRY;

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

// 0x30 bytes (sizeof)
typedef struct _POOL_HACKER {
  struct _POOL_HEADER Header; // offset: 0x0 ordinal: 0x0
  ULONG Contents[8];          // offset: 0x10 ordinal: 0x1
} _POOL_HACKER;

// 0x20 bytes (sizeof)
typedef struct _POOL_BLOCK_HEAD {
  struct _POOL_HEADER Header; // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY List;    // offset: 0x10 ordinal: 0x1
} _POOL_BLOCK_HEAD;

// 0x28 bytes (sizeof)
typedef struct _KRESOURCEMANAGER_COMPLETION_BINDING {
  struct _LIST_ENTRY NotificationListHead; // offset: 0x0 ordinal: 0x0
  VOID *Port;                              // offset: 0x10 ordinal: 0x1
  ULONGLONG Key;                           // offset: 0x18 ordinal: 0x2
  struct _EPROCESS *BindingProcess;        // offset: 0x20 ordinal: 0x3
} _KRESOURCEMANAGER_COMPLETION_BINDING;

// 0x250 bytes (sizeof)
typedef struct _KRESOURCEMANAGER {
  struct _KEVENT NotificationAvailable;           // offset: 0x0 ordinal: 0x0
  ULONG cookie;                                   // offset: 0x18 ordinal: 0x1
  enum _KRESOURCEMANAGER_STATE State;             // offset: 0x1c ordinal: 0x2
  ULONG Flags;                                    // offset: 0x20 ordinal: 0x3
  struct _KMUTANT Mutex;                          // offset: 0x28 ordinal: 0x4
  struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink; // offset: 0x60 ordinal: 0x5
  struct _GUID RmId;                              // offset: 0x88 ordinal: 0x6
  struct _KQUEUE NotificationQueue;               // offset: 0x98 ordinal: 0x7
  struct _KMUTANT NotificationMutex;              // offset: 0xd8 ordinal: 0x8
  struct _LIST_ENTRY EnlistmentHead;              // offset: 0x110 ordinal: 0x9
  ULONG EnlistmentCount;                          // offset: 0x120 ordinal: 0xa
  LONG(*NotificationRoutine)
  (struct _KENLISTMENT *, VOID *, VOID *, ULONG, union _LARGE_INTEGER *, ULONG,
   VOID *);                                  // offset: 0x128 ordinal: 0xb
  VOID *Key;                                 // offset: 0x130 ordinal: 0xc
  struct _LIST_ENTRY ProtocolListHead;       // offset: 0x138 ordinal: 0xd
  struct _LIST_ENTRY PendingPropReqListHead; // offset: 0x148 ordinal: 0xe
  struct _LIST_ENTRY CRMListEntry;           // offset: 0x158 ordinal: 0xf
  struct _KTM *Tm;                           // offset: 0x168 ordinal: 0x10
  struct _UNICODE_STRING Description;        // offset: 0x170 ordinal: 0x11
  struct _KTMOBJECT_NAMESPACE Enlistments;   // offset: 0x180 ordinal: 0x12
  struct _KRESOURCEMANAGER_COMPLETION_BINDING
      CompletionBinding; // offset: 0x228 ordinal: 0x13
} _KRESOURCEMANAGER;

// 0x380 bytes (sizeof)
typedef struct _KTM {
  ULONG cookie;                                   // offset: 0x0 ordinal: 0x0
  struct _KMUTANT Mutex;                          // offset: 0x8 ordinal: 0x1
  enum KTM_STATE State;                           // offset: 0x40 ordinal: 0x2
  struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink; // offset: 0x48 ordinal: 0x3
  struct _GUID TmIdentity;                        // offset: 0x70 ordinal: 0x4
  ULONG Flags;                                    // offset: 0x80 ordinal: 0x5
  ULONG VolatileFlags;                            // offset: 0x84 ordinal: 0x6
  struct _UNICODE_STRING LogFileName;             // offset: 0x88 ordinal: 0x7
  struct _FILE_OBJECT *LogFileObject;             // offset: 0x98 ordinal: 0x8
  VOID *MarshallingContext;                       // offset: 0xa0 ordinal: 0x9
  VOID *LogManagementContext;                     // offset: 0xa8 ordinal: 0xa
  struct _KTMOBJECT_NAMESPACE Transactions;       // offset: 0xb0 ordinal: 0xb
  struct _KTMOBJECT_NAMESPACE ResourceManagers;   // offset: 0x158 ordinal: 0xc
  struct _KMUTANT LsnOrderedMutex;                // offset: 0x200 ordinal: 0xd
  struct _LIST_ENTRY LsnOrderedList;              // offset: 0x238 ordinal: 0xe
  union _LARGE_INTEGER CommitVirtualClock;        // offset: 0x248 ordinal: 0xf
  struct _FAST_MUTEX CommitVirtualClockMutex;     // offset: 0x250 ordinal: 0x10
  union _CLS_LSN BaseLsn;                         // offset: 0x288 ordinal: 0x11
  union _CLS_LSN CurrentReadLsn;                  // offset: 0x290 ordinal: 0x12
  VOID *TmRmHandle;                               // offset: 0x298 ordinal: 0x13
  struct _KRESOURCEMANAGER *TmRm;                 // offset: 0x2a0 ordinal: 0x14
  struct _KEVENT LogFullNotifyEvent;              // offset: 0x2a8 ordinal: 0x15
  struct _WORK_QUEUE_ITEM CheckpointWorkItem;     // offset: 0x2c0 ordinal: 0x16
  union _CLS_LSN CheckpointTargetLsn;             // offset: 0x2e0 ordinal: 0x17
  struct _WORK_QUEUE_ITEM
      LogFullCompletedWorkItem;       // offset: 0x2e8 ordinal: 0x18
  struct _ERESOURCE LogWriteResource; // offset: 0x308 ordinal: 0x19
  ULONG LogFlags;                     // offset: 0x370 ordinal: 0x1a
  LONG LogFullStatus;                 // offset: 0x374 ordinal: 0x1b
  LONG RecoveryStatus;                // offset: 0x378 ordinal: 0x1c
} _KTM;

// 0x1e0 bytes (sizeof)
typedef struct _KENLISTMENT {
  ULONG cookie;                                   // offset: 0x0 ordinal: 0x0
  struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink; // offset: 0x8 ordinal: 0x1
  struct _GUID EnlistmentId;                      // offset: 0x30 ordinal: 0x2
  struct _KMUTANT Mutex;                          // offset: 0x40 ordinal: 0x3
  struct _LIST_ENTRY NextSameTx;                  // offset: 0x78 ordinal: 0x4
  struct _LIST_ENTRY NextSameRm;                  // offset: 0x88 ordinal: 0x5
  struct _KRESOURCEMANAGER *ResourceManager;      // offset: 0x98 ordinal: 0x6
  struct _KTRANSACTION *Transaction;              // offset: 0xa0 ordinal: 0x7
  enum _KENLISTMENT_STATE State;                  // offset: 0xa8 ordinal: 0x8
  ULONG Flags;                                    // offset: 0xac ordinal: 0x9
  ULONG NotificationMask;                         // offset: 0xb0 ordinal: 0xa
  VOID *Key;                                      // offset: 0xb8 ordinal: 0xb
  ULONG KeyRefCount;                              // offset: 0xc0 ordinal: 0xc
  VOID *RecoveryInformation;                      // offset: 0xc8 ordinal: 0xd
  ULONG RecoveryInformationLength;                // offset: 0xd0 ordinal: 0xe
  VOID *DynamicNameInformation;                   // offset: 0xd8 ordinal: 0xf
  ULONG DynamicNameInformationLength;             // offset: 0xe0 ordinal: 0x10
  struct _KTMNOTIFICATION_PACKET
      *FinalNotification;                  // offset: 0xe8 ordinal: 0x11
  struct _KENLISTMENT *SupSubEnlistment;   // offset: 0xf0 ordinal: 0x12
  VOID *SupSubEnlHandle;                   // offset: 0xf8 ordinal: 0x13
  VOID *SubordinateTxHandle;               // offset: 0x100 ordinal: 0x14
  struct _GUID CrmEnlistmentEnId;          // offset: 0x108 ordinal: 0x15
  struct _GUID CrmEnlistmentTmId;          // offset: 0x118 ordinal: 0x16
  struct _GUID CrmEnlistmentRmId;          // offset: 0x128 ordinal: 0x17
  ULONG NextHistory;                       // offset: 0x138 ordinal: 0x18
  struct _KENLISTMENT_HISTORY History[20]; // offset: 0x13c ordinal: 0x19
} _KENLISTMENT;

// 0x8 bytes (sizeof)
typedef union __anon_759 {
  ULONGLONG ImageCommitment;         // offset: 0x0 ordinal: 0x0
  struct _EPROCESS *CreatingProcess; // offset: 0x0 ordinal: 0x1
} __anon_759;

// 0x58 bytes (sizeof)
typedef struct _SEGMENT {
  struct _CONTROL_AREA *ControlArea; // offset: 0x0 ordinal: 0x0
  ULONG TotalNumberOfPtes;           // offset: 0x8 ordinal: 0x1
  ULONG NonExtendedPtes;             // offset: 0xc ordinal: 0x2
  ULONGLONG NumberOfCommittedPages;  // offset: 0x10 ordinal: 0x3
  ULONGLONG SizeOfSegment;           // offset: 0x18 ordinal: 0x4
  union {
    struct _MMEXTEND_INFO *ExtendInfo; // offset: 0x20 ordinal: 0x5
    VOID *BasedAddress;                // offset: 0x20 ordinal: 0x6
  };
  struct _EX_PUSH_LOCK SegmentLock;   // offset: 0x28 ordinal: 0x7
  struct _SEGMENT_FLAGS SegmentFlags; // offset: 0x30 ordinal: 0x8
  union __anon_759 u1;                // offset: 0x38 ordinal: 0x9
  union __anon_760 u2;                // offset: 0x40 ordinal: 0xa
  struct _MMPTE *PrototypePte;        // offset: 0x48 ordinal: 0xb
  struct _MMPTE ThePtes[1];           // offset: 0x50 ordinal: 0xc
} _SEGMENT;

// 0x60 bytes (sizeof)
typedef struct _CONTROL_AREA {
  struct _SEGMENT *Segment;           // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY DereferenceList; // offset: 0x8 ordinal: 0x1
  ULONG NumberOfSectionReferences;    // offset: 0x18 ordinal: 0x2
  ULONG NumberOfPfnReferences;        // offset: 0x1c ordinal: 0x3
  ULONG NumberOfMappedViews;          // offset: 0x20 ordinal: 0x4
  ULONG NumberOfUserReferences;       // offset: 0x24 ordinal: 0x5
  union __anon_733 u;                 // offset: 0x28 ordinal: 0x6
  union __anon_737 u1;                // offset: 0x2c ordinal: 0x7
  struct _EX_FAST_REF FilePointer;    // offset: 0x30 ordinal: 0x8
  LONG ControlAreaLock;               // offset: 0x38 ordinal: 0x9
  ULONG StartingFrame;                // offset: 0x3c ordinal: 0xa
  struct _MI_SECTION_CREATION_EVENT
      *WaitingForDeletion; // offset: 0x40 ordinal: 0xb
  union __anon_749 u2;     // offset: 0x48 ordinal: 0xc
  LONGLONG LockedPages;    // offset: 0x58 ordinal: 0xd
} _CONTROL_AREA;

// 0x48 bytes (sizeof)
typedef struct _MM_PAGE_ACCESS_INFO_HEADER {
  struct _SINGLE_LIST_ENTRY Link; // offset: 0x0 ordinal: 0x0
  enum _MM_PAGE_ACCESS_TYPE Type; // offset: 0x8 ordinal: 0x1
  union {
    ULONG EmptySequenceNumber; // offset: 0xc ordinal: 0x2
    ULONG CurrentFileIndex;    // offset: 0xc ordinal: 0x3
  };
  ULONGLONG CreateTime; // offset: 0x10 ordinal: 0x4
  union {
    ULONGLONG EmptyTime;                    // offset: 0x18 ordinal: 0x5
    struct _MM_PAGE_ACCESS_INFO *TempEntry; // offset: 0x18 ordinal: 0x6
  };
  struct _MM_PAGE_ACCESS_INFO *PageEntry; // offset: 0x20 ordinal: 0x7
  ULONGLONG *FileEntry;                   // offset: 0x28 ordinal: 0x8
  ULONGLONG *FirstFileEntry;              // offset: 0x30 ordinal: 0x9
  struct _EPROCESS *Process;              // offset: 0x38 ordinal: 0xa
  ULONG SessionId;                        // offset: 0x40 ordinal: 0xb
  ULONGLONG *PageFrameEntry;              // offset: 0x20 ordinal: 0xc
  ULONGLONG *LastPageFrameEntry;          // offset: 0x28 ordinal: 0xd
} _MM_PAGE_ACCESS_INFO_HEADER;

// 0x10 bytes (sizeof)
typedef struct _OBJECT_HANDLE_COUNT_ENTRY {
  struct _EPROCESS *Process; // offset: 0x0 ordinal: 0x0
  ULONG HandleCount : 24;    // offset: 0x8 ordinal: 0x1
  ULONG LockCount : 8;       // offset: 0x8 ordinal: 0x2
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

// 0x20 bytes (sizeof)
typedef struct _OBJECT_HEADER_QUOTA_INFO {
  ULONG PagedPoolCharge;              // offset: 0x0 ordinal: 0x0
  ULONG NonPagedPoolCharge;           // offset: 0x4 ordinal: 0x1
  ULONG SecurityDescriptorCharge;     // offset: 0x8 ordinal: 0x2
  struct _EPROCESS *ExclusiveProcess; // offset: 0x10 ordinal: 0x3
  ULONGLONG Reserved;                 // offset: 0x18 ordinal: 0x4
} _OBJECT_HEADER_QUOTA_INFO;

typedef UCHAR (*__anon_612)(struct _EPROCESS *, VOID *, VOID *, CHAR);

typedef VOID (*__anon_608)(struct _EPROCESS *, VOID *, ULONG, ULONGLONG,
                           ULONGLONG);

typedef LONG (*__anon_607)(enum _OB_OPEN_REASON, CHAR, struct _EPROCESS *,
                           VOID *, ULONG *, ULONG);

// 0x70 bytes (sizeof)
typedef struct _OBJECT_TYPE_INITIALIZER {
  USHORT Length; // offset: 0x0 ordinal: 0x0
  union {
    UCHAR ObjectTypeFlags;     // offset: 0x2 ordinal: 0x1
    UCHAR CaseInsensitive : 1; // offset: 0x2 ordinal: 0x2
  };
  UCHAR UnnamedObjectsOnly : 1;           // offset: 0x2 ordinal: 0x3
  UCHAR UseDefaultObject : 1;             // offset: 0x2 ordinal: 0x4
  UCHAR SecurityRequired : 1;             // offset: 0x2 ordinal: 0x5
  UCHAR MaintainHandleCount : 1;          // offset: 0x2 ordinal: 0x6
  UCHAR MaintainTypeList : 1;             // offset: 0x2 ordinal: 0x7
  ULONG ObjectTypeCode;                   // offset: 0x4 ordinal: 0x8
  ULONG InvalidAttributes;                // offset: 0x8 ordinal: 0x9
  struct _GENERIC_MAPPING GenericMapping; // offset: 0xc ordinal: 0xa
  ULONG ValidAccessMask;                  // offset: 0x1c ordinal: 0xb
  enum _POOL_TYPE PoolType;               // offset: 0x20 ordinal: 0xc
  ULONG DefaultPagedPoolCharge;           // offset: 0x24 ordinal: 0xd
  ULONG DefaultNonPagedPoolCharge;        // offset: 0x28 ordinal: 0xe
  VOID(*DumpProcedure)
  (VOID *, struct _OBJECT_DUMP_CONTROL *); // offset: 0x30 ordinal: 0xf
  LONG(*OpenProcedure)
  (enum _OB_OPEN_REASON, CHAR, struct _EPROCESS *, VOID *, ULONG *,
   ULONG); // offset: 0x38 ordinal: 0x10
  VOID(*CloseProcedure)
  (struct _EPROCESS *, VOID *, ULONG, ULONGLONG,
   ULONGLONG);                     // offset: 0x40 ordinal: 0x11
  VOID (*DeleteProcedure)(VOID *); // offset: 0x48 ordinal: 0x12
  LONG(*ParseProcedure)
  (VOID *, VOID *, struct _ACCESS_STATE *, CHAR, ULONG,
   struct _UNICODE_STRING *, struct _UNICODE_STRING *, VOID *,
   struct _SECURITY_QUALITY_OF_SERVICE *,
   VOID **); // offset: 0x50 ordinal: 0x13
  LONG(*SecurityProcedure)
  (VOID *, enum _SECURITY_OPERATION_CODE, ULONG *, VOID *, ULONG *, VOID **,
   enum _POOL_TYPE, struct _GENERIC_MAPPING *,
   CHAR); // offset: 0x58 ordinal: 0x14
  LONG(*QueryNameProcedure)
  (VOID *, UCHAR, struct _OBJECT_NAME_INFORMATION *, ULONG, ULONG *,
   CHAR); // offset: 0x60 ordinal: 0x15
  UCHAR(*OkayToCloseProcedure)
  (struct _EPROCESS *, VOID *, VOID *, CHAR); // offset: 0x68 ordinal: 0x16
} _OBJECT_TYPE_INITIALIZER;

// 0x220 bytes (sizeof)
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
  struct _EX_PUSH_LOCK ObjectLocks[32];     // offset: 0x120 ordinal: 0xb
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

// 0x60 bytes (sizeof)
typedef struct _HANDLE_TABLE {
  ULONGLONG TableCode;                        // offset: 0x0 ordinal: 0x0
  struct _EPROCESS *QuotaProcess;             // offset: 0x8 ordinal: 0x1
  VOID *UniqueProcessId;                      // offset: 0x10 ordinal: 0x2
  struct _EX_PUSH_LOCK HandleLock;            // offset: 0x18 ordinal: 0x3
  struct _LIST_ENTRY HandleTableList;         // offset: 0x20 ordinal: 0x4
  struct _EX_PUSH_LOCK HandleContentionEvent; // offset: 0x30 ordinal: 0x5
  struct _HANDLE_TRACE_DEBUG_INFO *DebugInfo; // offset: 0x38 ordinal: 0x6
  LONG ExtraInfoPages;                        // offset: 0x40 ordinal: 0x7
  union {
    ULONG Flags;          // offset: 0x44 ordinal: 0x8
    UCHAR StrictFIFO : 1; // offset: 0x44 ordinal: 0x9
  };
  LONG FirstFreeHandle;                            // offset: 0x48 ordinal: 0xa
  struct _HANDLE_TABLE_ENTRY *LastFreeHandleEntry; // offset: 0x50 ordinal: 0xb
  LONG HandleCount;                                // offset: 0x58 ordinal: 0xc
  ULONG NextHandleNeedingPool;                     // offset: 0x5c ordinal: 0xd
} _HANDLE_TABLE;

typedef UCHAR (*__anon_338)(struct _FILE_OBJECT *, struct _EPROCESS *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_337)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            union _LARGE_INTEGER *, struct _EPROCESS *, ULONG,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_336)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            union _LARGE_INTEGER *, struct _EPROCESS *, ULONG,
                            UCHAR, UCHAR, struct _IO_STATUS_BLOCK *,
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

typedef LONG (*__anon_329)(struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *);

typedef VOID (*__anon_288)(struct _DRIVER_OBJECT *);

// 0x1e00 bytes (sizeof)
typedef struct _MM_SESSION_SPACE {
  LONG ReferenceCount;                            // offset: 0x0 ordinal: 0x0
  union __anon_1405 u;                            // offset: 0x4 ordinal: 0x1
  ULONG SessionId;                                // offset: 0x8 ordinal: 0x2
  LONG ProcessReferenceToSession;                 // offset: 0xc ordinal: 0x3
  struct _LIST_ENTRY ProcessList;                 // offset: 0x10 ordinal: 0x4
  union _LARGE_INTEGER LastProcessSwappedOutTime; // offset: 0x20 ordinal: 0x5
  ULONGLONG SessionPageDirectoryIndex;            // offset: 0x28 ordinal: 0x6
  ULONGLONG NonPagablePages;                      // offset: 0x30 ordinal: 0x7
  ULONGLONG CommittedPages;                       // offset: 0x38 ordinal: 0x8
  VOID *PagedPoolStart;                           // offset: 0x40 ordinal: 0x9
  VOID *PagedPoolEnd;                             // offset: 0x48 ordinal: 0xa
  VOID *SessionObject;                            // offset: 0x50 ordinal: 0xb
  VOID *SessionObjectHandle;                      // offset: 0x58 ordinal: 0xc
  LONG ResidentProcessCount;                      // offset: 0x60 ordinal: 0xd
  LONG ImageLoadingCount;                         // offset: 0x64 ordinal: 0xe
  ULONG SessionPoolAllocationFailures[4];         // offset: 0x68 ordinal: 0xf
  struct _LIST_ENTRY ImageList;                   // offset: 0x78 ordinal: 0x10
  ULONG LocaleId;                                 // offset: 0x88 ordinal: 0x11
  ULONG AttachCount;                              // offset: 0x8c ordinal: 0x12
  struct _KEVENT AttachEvent;                     // offset: 0x90 ordinal: 0x13
  struct _LIST_ENTRY WsListEntry;                 // offset: 0xa8 ordinal: 0x14
  struct _GENERAL_LOOKASIDE Lookaside[21];        // offset: 0xc0 ordinal: 0x15
  struct _MMSESSION Session;                      // offset: 0xb40 ordinal: 0x16
  struct _MM_PAGED_POOL_INFO PagedPoolInfo;       // offset: 0xb98 ordinal: 0x17
  struct _MMSUPPORT Vm;                           // offset: 0xc00 ordinal: 0x18
  struct _MMWSLE *Wsle;                           // offset: 0xc68 ordinal: 0x19
  VOID (*DriverUnload)(struct _DRIVER_OBJECT *);  // offset: 0xc70 ordinal: 0x1a
  struct _POOL_DESCRIPTOR PagedPool;              // offset: 0xc78 ordinal: 0x1b
  struct _MMPTE PageDirectory;              // offset: 0x1cc0 ordinal: 0x1c
  struct _KGUARDED_MUTEX SessionVaLock;     // offset: 0x1cc8 ordinal: 0x1d
  struct _RTL_BITMAP DynamicVaBitMap;       // offset: 0x1d00 ordinal: 0x1e
  ULONG DynamicVaHint;                      // offset: 0x1d10 ordinal: 0x1f
  struct _MI_SPECIAL_POOL SpecialPool;      // offset: 0x1d18 ordinal: 0x20
  struct _KGUARDED_MUTEX SessionPteLock;    // offset: 0x1d48 ordinal: 0x21
  LONG PoolBigEntriesInUse;                 // offset: 0x1d80 ordinal: 0x22
  ULONG PagedPoolPdeCount;                  // offset: 0x1d84 ordinal: 0x23
  ULONG SpecialPoolPdeCount;                // offset: 0x1d88 ordinal: 0x24
  ULONG DynamicSessionPdeCount;             // offset: 0x1d8c ordinal: 0x25
  struct _MMPTE SessionPteFreeHead;         // offset: 0x1d90 ordinal: 0x26
  struct _MI_SYSTEM_PTE_TYPE SystemPteInfo; // offset: 0x1d98 ordinal: 0x27
  VOID *PoolTrackTableExpansion;            // offset: 0x1db8 ordinal: 0x28
  ULONGLONG PoolTrackTableExpansionSize;    // offset: 0x1dc0 ordinal: 0x29
  VOID *PoolTrackBigPages;                  // offset: 0x1dc8 ordinal: 0x2a
  ULONGLONG PoolTrackBigPagesSize;          // offset: 0x1dd0 ordinal: 0x2b
} _MM_SESSION_SPACE;

typedef LONG (*__anon_286)(struct _DRIVER_OBJECT *, struct _UNICODE_STRING *);

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
  union __anon_258 Queue;                // offset: 0x50 ordinal: 0xe
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

// 0x38 bytes (sizeof)
typedef struct __anon_795 {
  struct _MDL Mdl;   // offset: 0x0 ordinal: 0x0
  ULONGLONG Page[1]; // offset: 0x30 ordinal: 0x1
} __anon_795;

// 0x68 bytes (sizeof)
typedef struct _MI_PAGEFILE_TRACES {
  LONG Status;                      // offset: 0x0 ordinal: 0x0
  UCHAR Priority;                   // offset: 0x4 ordinal: 0x1
  UCHAR IrpPriority;                // offset: 0x5 ordinal: 0x2
  union _LARGE_INTEGER CurrentTime; // offset: 0x8 ordinal: 0x3
  ULONGLONG AvailablePages;         // offset: 0x10 ordinal: 0x4
  ULONGLONG ModifiedPagesTotal;     // offset: 0x18 ordinal: 0x5
  ULONGLONG ModifiedPagefilePages;  // offset: 0x20 ordinal: 0x6
  ULONGLONG ModifiedNoWritePages;   // offset: 0x28 ordinal: 0x7
  struct __anon_795 MdlHack;        // offset: 0x30 ordinal: 0x8
} _MI_PAGEFILE_TRACES;

// 0xa0 bytes (sizeof)
typedef struct _MMMOD_WRITER_MDL_ENTRY {
  struct _LIST_ENTRY Links;          // offset: 0x0 ordinal: 0x0
  union __anon_772 u;                // offset: 0x10 ordinal: 0x1
  struct _IRP *Irp;                  // offset: 0x20 ordinal: 0x2
  union __anon_773 u1;               // offset: 0x28 ordinal: 0x3
  struct _MMPAGING_FILE *PagingFile; // offset: 0x30 ordinal: 0x4
  struct _FILE_OBJECT *File;         // offset: 0x38 ordinal: 0x5
  struct _CONTROL_AREA *ControlArea; // offset: 0x40 ordinal: 0x6
  struct _ERESOURCE *FileResource;   // offset: 0x48 ordinal: 0x7
  union _LARGE_INTEGER WriteOffset;  // offset: 0x50 ordinal: 0x8
  union _LARGE_INTEGER IssueTime;    // offset: 0x58 ordinal: 0x9
  struct _MDL *PointerMdl;           // offset: 0x60 ordinal: 0xa
  struct _MDL Mdl;                   // offset: 0x68 ordinal: 0xb
  ULONGLONG Page[1];                 // offset: 0x98 ordinal: 0xc
} _MMMOD_WRITER_MDL_ENTRY;

// 0xa0 bytes (sizeof)
typedef struct _MMPAGING_FILE {
  ULONGLONG Size;                           // offset: 0x0 ordinal: 0x0
  ULONGLONG MaximumSize;                    // offset: 0x8 ordinal: 0x1
  ULONGLONG MinimumSize;                    // offset: 0x10 ordinal: 0x2
  ULONGLONG FreeSpace;                      // offset: 0x18 ordinal: 0x3
  ULONGLONG PeakUsage;                      // offset: 0x20 ordinal: 0x4
  ULONGLONG HighestPage;                    // offset: 0x28 ordinal: 0x5
  struct _FILE_OBJECT *File;                // offset: 0x30 ordinal: 0x6
  struct _MMMOD_WRITER_MDL_ENTRY *Entry[2]; // offset: 0x38 ordinal: 0x7
  struct _UNICODE_STRING PageFileName;      // offset: 0x48 ordinal: 0x8
  struct _RTL_BITMAP *Bitmap;               // offset: 0x58 ordinal: 0x9
  ULONG BitmapHint;                         // offset: 0x60 ordinal: 0xa
  ULONG LastAllocationSize;                 // offset: 0x64 ordinal: 0xb
  USHORT PageFileNumber : 4;                // offset: 0x68 ordinal: 0xc
  USHORT BootPartition : 1;                 // offset: 0x68 ordinal: 0xd
  USHORT Spare0 : 11;                       // offset: 0x68 ordinal: 0xe
  USHORT AdriftMdls : 1;                    // offset: 0x6a ordinal: 0xf
  USHORT Spare1 : 15;                       // offset: 0x6a ordinal: 0x10
  VOID *FileHandle;                         // offset: 0x70 ordinal: 0x11
  union _SLIST_HEADER AvailableList;        // offset: 0x80 ordinal: 0x12
  union _SLIST_HEADER NeedProcessingList;   // offset: 0x90 ordinal: 0x13
} _MMPAGING_FILE;

// 0x40 bytes (sizeof)
typedef struct _KTIMER {
  struct _DISPATCHER_HEADER Header;  // offset: 0x0 ordinal: 0x0
  union _ULARGE_INTEGER DueTime;     // offset: 0x18 ordinal: 0x1
  struct _LIST_ENTRY TimerListEntry; // offset: 0x20 ordinal: 0x2
  struct _KDPC *Dpc;                 // offset: 0x30 ordinal: 0x3
  LONG Period;                       // offset: 0x38 ordinal: 0x4
} _KTIMER;

// 0x128 bytes (sizeof)
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
  struct _IRP *Irp;                         // offset: 0xc8 ordinal: 0xe
  struct _THERMAL_INFORMATION_EX Info;      // offset: 0xd0 ordinal: 0xf
} _POP_THERMAL_ZONE;

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

// 0x268 bytes (sizeof)
typedef struct _KTRANSACTION {
  struct _KEVENT OutcomeEvent;  // offset: 0x0 ordinal: 0x0
  ULONG cookie;                 // offset: 0x18 ordinal: 0x1
  struct _KMUTANT Mutex;        // offset: 0x20 ordinal: 0x2
  struct _KTRANSACTION *TreeTx; // offset: 0x58 ordinal: 0x3
  struct _KTMOBJECT_NAMESPACE_LINK
      GlobalNamespaceLink;                          // offset: 0x60 ordinal: 0x4
  struct _KTMOBJECT_NAMESPACE_LINK TmNamespaceLink; // offset: 0x88 ordinal: 0x5
  struct _GUID UOW;                                 // offset: 0xb0 ordinal: 0x6
  enum _KTRANSACTION_STATE State;                   // offset: 0xc0 ordinal: 0x7
  ULONG Flags;                                      // offset: 0xc4 ordinal: 0x8
  struct _LIST_ENTRY EnlistmentHead;                // offset: 0xc8 ordinal: 0x9
  ULONG EnlistmentCount;                            // offset: 0xd8 ordinal: 0xa
  ULONG RecoverableEnlistmentCount;                 // offset: 0xdc ordinal: 0xb
  ULONG PrePrepareRequiredEnlistmentCount;          // offset: 0xe0 ordinal: 0xc
  ULONG PrepareRequiredEnlistmentCount;             // offset: 0xe4 ordinal: 0xd
  ULONG OutcomeRequiredEnlistmentCount;             // offset: 0xe8 ordinal: 0xe
  ULONG PendingResponses;                           // offset: 0xec ordinal: 0xf
  struct _KENLISTMENT *SuperiorEnlistment;   // offset: 0xf0 ordinal: 0x10
  union _CLS_LSN LastLsn;                    // offset: 0xf8 ordinal: 0x11
  struct _LIST_ENTRY PromotedEntry;          // offset: 0x100 ordinal: 0x12
  struct _KTRANSACTION *PromoterTransaction; // offset: 0x110 ordinal: 0x13
  VOID *PromotePropagation;                  // offset: 0x118 ordinal: 0x14
  ULONG IsolationLevel;                      // offset: 0x120 ordinal: 0x15
  ULONG IsolationFlags;                      // offset: 0x124 ordinal: 0x16
  union _LARGE_INTEGER Timeout;              // offset: 0x128 ordinal: 0x17
  struct _UNICODE_STRING Description;        // offset: 0x130 ordinal: 0x18
  struct _KTHREAD *RollbackThread;           // offset: 0x140 ordinal: 0x19
  struct _WORK_QUEUE_ITEM RollbackWorkItem;  // offset: 0x148 ordinal: 0x1a
  struct _KDPC RollbackDpc;                  // offset: 0x168 ordinal: 0x1b
  struct _KTIMER RollbackTimer;              // offset: 0x1a8 ordinal: 0x1c
  struct _LIST_ENTRY LsnOrderedEntry;        // offset: 0x1e8 ordinal: 0x1d
  enum _KTRANSACTION_OUTCOME Outcome;        // offset: 0x1f8 ordinal: 0x1e
  ULONG NextSavepoint;                       // offset: 0x1fc ordinal: 0x1f
  struct _KTM *Tm;                           // offset: 0x200 ordinal: 0x20
  LONGLONG CommitReservation;                // offset: 0x208 ordinal: 0x21
  struct _KTRANSACTION_HISTORY
      TransactionHistory[10];    // offset: 0x210 ordinal: 0x22
  ULONG TransactionHistoryCount; // offset: 0x260 ordinal: 0x23
} _KTRANSACTION;

// 0x330 bytes (sizeof)
typedef struct _KTHREAD {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 ordinal: 0x0
  ULONGLONG CycleTime;              // offset: 0x18 ordinal: 0x1
  ULONGLONG QuantumTarget;          // offset: 0x20 ordinal: 0x2
  VOID *InitialStack;               // offset: 0x28 ordinal: 0x3
  VOID *StackLimit;                 // offset: 0x30 ordinal: 0x4
  VOID *KernelStack;                // offset: 0x38 ordinal: 0x5
  ULONGLONG ThreadLock;             // offset: 0x40 ordinal: 0x6
  union {
    struct _KAPC_STATE ApcState; // offset: 0x48 ordinal: 0x7
    UCHAR ApcStateFill[43];      // offset: 0x48 ordinal: 0x8
  };
  CHAR Priority;            // offset: 0x73 ordinal: 0x9
  USHORT NextProcessor;     // offset: 0x74 ordinal: 0xa
  USHORT DeferredProcessor; // offset: 0x76 ordinal: 0xb
  ULONGLONG ApcQueueLock;   // offset: 0x78 ordinal: 0xc
  LONGLONG WaitStatus;      // offset: 0x80 ordinal: 0xd
  union {
    struct _KWAIT_BLOCK *WaitBlockList; // offset: 0x88 ordinal: 0xe
    struct _KGATE *GateObject;          // offset: 0x88 ordinal: 0xf
  };
  ULONG KernelStackResident : 1;  // offset: 0x90 ordinal: 0x10
  ULONG ReadyTransition : 1;      // offset: 0x90 ordinal: 0x11
  ULONG ProcessReadyQueue : 1;    // offset: 0x90 ordinal: 0x12
  ULONG WaitNext : 1;             // offset: 0x90 ordinal: 0x13
  ULONG SystemAffinityActive : 1; // offset: 0x90 ordinal: 0x14
  ULONG Alertable : 1;            // offset: 0x90 ordinal: 0x15
  ULONG GdiFlushActive : 1;       // offset: 0x90 ordinal: 0x16
  ULONG Reserved : 25;            // offset: 0x90 ordinal: 0x17
  LONG MiscFlags;                 // offset: 0x90 ordinal: 0x18
  UCHAR WaitReason;               // offset: 0x94 ordinal: 0x19
  UCHAR SwapBusy;                 // offset: 0x95 ordinal: 0x1a
  UCHAR Alerted[2];               // offset: 0x96 ordinal: 0x1b
  union {
    struct _LIST_ENTRY WaitListEntry;        // offset: 0x98 ordinal: 0x1c
    struct _SINGLE_LIST_ENTRY SwapListEntry; // offset: 0x98 ordinal: 0x1d
  };
  struct _KQUEUE *Queue; // offset: 0xa8 ordinal: 0x1e
  VOID *Teb;             // offset: 0xb0 ordinal: 0x1f
  union {
    struct _KTIMER Timer; // offset: 0xb8 ordinal: 0x20
    UCHAR TimerFill[60];  // offset: 0xb8 ordinal: 0x21
  };
  ULONG AutoAlignment : 1;             // offset: 0xf4 ordinal: 0x22
  ULONG DisableBoost : 1;              // offset: 0xf4 ordinal: 0x23
  ULONG EtwStackTraceApc1Inserted : 1; // offset: 0xf4 ordinal: 0x24
  ULONG EtwStackTraceApc2Inserted : 1; // offset: 0xf4 ordinal: 0x25
  ULONG CycleChargePending : 1;        // offset: 0xf4 ordinal: 0x26
  ULONG CalloutActive : 1;             // offset: 0xf4 ordinal: 0x27
  ULONG ApcQueueable : 1;              // offset: 0xf4 ordinal: 0x28
  ULONG EnableStackSwap : 1;           // offset: 0xf4 ordinal: 0x29
  ULONG GuiThread : 1;                 // offset: 0xf4 ordinal: 0x2a
  ULONG ReservedFlags : 23;            // offset: 0xf4 ordinal: 0x2b
  LONG ThreadFlags;                    // offset: 0xf4 ordinal: 0x2c
  union {
    struct _KWAIT_BLOCK WaitBlock[4]; // offset: 0xf8 ordinal: 0x2d
    UCHAR WaitBlockFill0[43];         // offset: 0xf8 ordinal: 0x2e
  };
  UCHAR IdealProcessor;              // offset: 0x123 ordinal: 0x2f
  UCHAR WaitBlockFill1[91];          // offset: 0xf8 ordinal: 0x30
  CHAR PreviousMode;                 // offset: 0x153 ordinal: 0x31
  UCHAR WaitBlockFill2[139];         // offset: 0xf8 ordinal: 0x32
  UCHAR ResourceIndex;               // offset: 0x183 ordinal: 0x33
  UCHAR WaitBlockFill3[187];         // offset: 0xf8 ordinal: 0x34
  UCHAR LargeStack;                  // offset: 0x1b3 ordinal: 0x35
  UCHAR WaitBlockFill4[44];          // offset: 0xf8 ordinal: 0x36
  ULONG ContextSwitches;             // offset: 0x124 ordinal: 0x37
  UCHAR WaitBlockFill5[92];          // offset: 0xf8 ordinal: 0x38
  UCHAR State;                       // offset: 0x154 ordinal: 0x39
  UCHAR NpxState;                    // offset: 0x155 ordinal: 0x3a
  UCHAR WaitIrql;                    // offset: 0x156 ordinal: 0x3b
  CHAR WaitMode;                     // offset: 0x157 ordinal: 0x3c
  UCHAR WaitBlockFill6[140];         // offset: 0xf8 ordinal: 0x3d
  ULONG WaitTime;                    // offset: 0x184 ordinal: 0x3e
  UCHAR WaitBlockFill7[188];         // offset: 0xf8 ordinal: 0x3f
  SHORT KernelApcDisable;            // offset: 0x1b4 ordinal: 0x40
  SHORT SpecialApcDisable;           // offset: 0x1b6 ordinal: 0x41
  ULONG CombinedApcDisable;          // offset: 0x1b4 ordinal: 0x42
  struct _LIST_ENTRY QueueListEntry; // offset: 0x1b8 ordinal: 0x43
  struct _KTRAP_FRAME *TrapFrame;    // offset: 0x1c8 ordinal: 0x44
  VOID *FirstArgument;               // offset: 0x1d0 ordinal: 0x45
  union {
    VOID *CallbackStack;     // offset: 0x1d8 ordinal: 0x46
    ULONGLONG CallbackDepth; // offset: 0x1d8 ordinal: 0x47
  };
  UCHAR ApcStateIndex;                    // offset: 0x1e0 ordinal: 0x48
  CHAR BasePriority;                      // offset: 0x1e1 ordinal: 0x49
  CHAR PriorityDecrement;                 // offset: 0x1e2 ordinal: 0x4a
  UCHAR Preempted;                        // offset: 0x1e3 ordinal: 0x4b
  UCHAR AdjustReason;                     // offset: 0x1e4 ordinal: 0x4c
  CHAR AdjustIncrement;                   // offset: 0x1e5 ordinal: 0x4d
  UCHAR Spare01;                          // offset: 0x1e6 ordinal: 0x4e
  CHAR Saturation;                        // offset: 0x1e7 ordinal: 0x4f
  ULONG SystemCallNumber;                 // offset: 0x1e8 ordinal: 0x50
  ULONG Spare02;                          // offset: 0x1ec ordinal: 0x51
  ULONGLONG UserAffinity;                 // offset: 0x1f0 ordinal: 0x52
  struct _KPROCESS *Process;              // offset: 0x1f8 ordinal: 0x53
  ULONGLONG Affinity;                     // offset: 0x200 ordinal: 0x54
  struct _KAPC_STATE *ApcStatePointer[2]; // offset: 0x208 ordinal: 0x55
  union {
    struct _KAPC_STATE SavedApcState; // offset: 0x218 ordinal: 0x56
    UCHAR SavedApcStateFill[43];      // offset: 0x218 ordinal: 0x57
  };
  CHAR FreezeCount;          // offset: 0x243 ordinal: 0x58
  CHAR SuspendCount;         // offset: 0x244 ordinal: 0x59
  UCHAR UserIdealProcessor;  // offset: 0x245 ordinal: 0x5a
  UCHAR Spare03;             // offset: 0x246 ordinal: 0x5b
  UCHAR CodePatchInProgress; // offset: 0x247 ordinal: 0x5c
  VOID *Win32Thread;         // offset: 0x248 ordinal: 0x5d
  VOID *StackBase;           // offset: 0x250 ordinal: 0x5e
  union {
    struct _KAPC SuspendApc;  // offset: 0x258 ordinal: 0x5f
    UCHAR SuspendApcFill0[1]; // offset: 0x258 ordinal: 0x60
  };
  CHAR Spare04;              // offset: 0x259 ordinal: 0x61
  UCHAR SuspendApcFill1[3];  // offset: 0x258 ordinal: 0x62
  UCHAR QuantumReset;        // offset: 0x25b ordinal: 0x63
  UCHAR SuspendApcFill2[4];  // offset: 0x258 ordinal: 0x64
  ULONG KernelTime;          // offset: 0x25c ordinal: 0x65
  UCHAR SuspendApcFill3[64]; // offset: 0x258 ordinal: 0x66
  struct _KPRCB *WaitPrcb;   // offset: 0x298 ordinal: 0x67
  UCHAR SuspendApcFill4[72]; // offset: 0x258 ordinal: 0x68
  VOID *LegoData;            // offset: 0x2a0 ordinal: 0x69
  UCHAR SuspendApcFill5[83]; // offset: 0x258 ordinal: 0x6a
  UCHAR PowerState;          // offset: 0x2ab ordinal: 0x6b
  ULONG UserTime;            // offset: 0x2ac ordinal: 0x6c
  union {
    struct _KSEMAPHORE SuspendSemaphore; // offset: 0x2b0 ordinal: 0x6d
    UCHAR SuspendSemaphorefill[28];      // offset: 0x2b0 ordinal: 0x6e
  };
  ULONG SListFaultCount;              // offset: 0x2cc ordinal: 0x6f
  struct _LIST_ENTRY ThreadListEntry; // offset: 0x2d0 ordinal: 0x70
  struct _LIST_ENTRY MutantListHead;  // offset: 0x2e0 ordinal: 0x71
  VOID *SListFaultAddress;            // offset: 0x2f0 ordinal: 0x72
  LONGLONG ReadOperationCount;        // offset: 0x2f8 ordinal: 0x73
  LONGLONG WriteOperationCount;       // offset: 0x300 ordinal: 0x74
  LONGLONG OtherOperationCount;       // offset: 0x308 ordinal: 0x75
  LONGLONG ReadTransferCount;         // offset: 0x310 ordinal: 0x76
  LONGLONG WriteTransferCount;        // offset: 0x318 ordinal: 0x77
  LONGLONG OtherTransferCount;        // offset: 0x320 ordinal: 0x78
  VOID *MdlForLockedTeb;              // offset: 0x328 ordinal: 0x79
} _KTHREAD;

// 0x450 bytes (sizeof)
typedef struct _ETHREAD {
  struct _KTHREAD Tcb;             // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER CreateTime; // offset: 0x330 ordinal: 0x1
  union {
    union _LARGE_INTEGER ExitTime;     // offset: 0x338 ordinal: 0x2
    struct _LIST_ENTRY KeyedWaitChain; // offset: 0x338 ordinal: 0x3
  };
  union {
    LONG ExitStatus; // offset: 0x348 ordinal: 0x4
    VOID *OfsChain;  // offset: 0x348 ordinal: 0x5
  };
  union {
    struct _LIST_ENTRY PostBlockList; // offset: 0x350 ordinal: 0x6
    VOID *ForwardLinkShadow;          // offset: 0x350 ordinal: 0x7
  };
  VOID *StartAddress; // offset: 0x358 ordinal: 0x8
  union {
    struct _TERMINATION_PORT *TerminationPort; // offset: 0x360 ordinal: 0x9
    struct _ETHREAD *ReaperLink;               // offset: 0x360 ordinal: 0xa
    VOID *KeyedWaitValue;                      // offset: 0x360 ordinal: 0xb
    VOID *Win32StartParameter;                 // offset: 0x360 ordinal: 0xc
  };
  ULONGLONG ActiveTimerListLock;          // offset: 0x368 ordinal: 0xd
  struct _LIST_ENTRY ActiveTimerListHead; // offset: 0x370 ordinal: 0xe
  struct _CLIENT_ID Cid;                  // offset: 0x380 ordinal: 0xf
  union {
    struct _KSEMAPHORE KeyedWaitSemaphore; // offset: 0x390 ordinal: 0x10
    struct _KSEMAPHORE AlpcWaitSemaphore;  // offset: 0x390 ordinal: 0x11
  };
  union _PS_CLIENT_SECURITY_CONTEXT
      ClientSecurity;                    // offset: 0x3b0 ordinal: 0x12
  struct _LIST_ENTRY IrpList;            // offset: 0x3b8 ordinal: 0x13
  ULONGLONG TopLevelIrp;                 // offset: 0x3c8 ordinal: 0x14
  struct _DEVICE_OBJECT *DeviceToVerify; // offset: 0x3d0 ordinal: 0x15
  union _PSP_RATE_APC *RateControlApc;   // offset: 0x3d8 ordinal: 0x16
  VOID *Win32StartAddress;               // offset: 0x3e0 ordinal: 0x17
  VOID *SparePtr0;                       // offset: 0x3e8 ordinal: 0x18
  struct _LIST_ENTRY ThreadListEntry;    // offset: 0x3f0 ordinal: 0x19
  struct _EX_RUNDOWN_REF RundownProtect; // offset: 0x400 ordinal: 0x1a
  struct _EX_PUSH_LOCK ThreadLock;       // offset: 0x408 ordinal: 0x1b
  ULONG ReadClusterSize;                 // offset: 0x410 ordinal: 0x1c
  LONG MmLockOrdering;                   // offset: 0x414 ordinal: 0x1d
  union {
    ULONG CrossThreadFlags; // offset: 0x418 ordinal: 0x1e
    ULONG Terminated : 1;   // offset: 0x418 ordinal: 0x1f
  };
  ULONG ThreadInserted : 1;          // offset: 0x418 ordinal: 0x20
  ULONG HideFromDebugger : 1;        // offset: 0x418 ordinal: 0x21
  ULONG ActiveImpersonationInfo : 1; // offset: 0x418 ordinal: 0x22
  ULONG SystemThread : 1;            // offset: 0x418 ordinal: 0x23
  ULONG HardErrorsAreDisabled : 1;   // offset: 0x418 ordinal: 0x24
  ULONG BreakOnTermination : 1;      // offset: 0x418 ordinal: 0x25
  ULONG SkipCreationMsg : 1;         // offset: 0x418 ordinal: 0x26
  ULONG SkipTerminationMsg : 1;      // offset: 0x418 ordinal: 0x27
  ULONG CopyTokenOnOpen : 1;         // offset: 0x418 ordinal: 0x28
  ULONG ThreadIoPriority : 3;        // offset: 0x418 ordinal: 0x29
  ULONG ThreadPagePriority : 3;      // offset: 0x418 ordinal: 0x2a
  ULONG RundownFail : 1;             // offset: 0x418 ordinal: 0x2b
  union {
    ULONG SameThreadPassiveFlags; // offset: 0x41c ordinal: 0x2c
    ULONG ActiveExWorker : 1;     // offset: 0x41c ordinal: 0x2d
  };
  ULONG ExWorkerCanWaitUser : 1; // offset: 0x41c ordinal: 0x2e
  ULONG MemoryMaker : 1;         // offset: 0x41c ordinal: 0x2f
  ULONG ClonedThread : 1;        // offset: 0x41c ordinal: 0x30
  ULONG KeyedEventInUse : 1;     // offset: 0x41c ordinal: 0x31
  ULONG RateApcState : 2;        // offset: 0x41c ordinal: 0x32
  ULONG SelfTerminate : 1;       // offset: 0x41c ordinal: 0x33
  union {
    ULONG SameThreadApcFlags; // offset: 0x420 ordinal: 0x34
    UCHAR Spare : 1;          // offset: 0x420 ordinal: 0x35
  };
  UCHAR StartAddressInvalid : 1;              // offset: 0x420 ordinal: 0x36
  UCHAR EtwPageFaultCalloutActive : 1;        // offset: 0x420 ordinal: 0x37
  UCHAR OwnsProcessWorkingSetExclusive : 1;   // offset: 0x420 ordinal: 0x38
  UCHAR OwnsProcessWorkingSetShared : 1;      // offset: 0x420 ordinal: 0x39
  UCHAR OwnsSystemWorkingSetExclusive : 1;    // offset: 0x420 ordinal: 0x3a
  UCHAR OwnsSystemWorkingSetShared : 1;       // offset: 0x420 ordinal: 0x3b
  UCHAR OwnsSessionWorkingSetExclusive : 1;   // offset: 0x420 ordinal: 0x3c
  UCHAR OwnsSessionWorkingSetShared : 1;      // offset: 0x421 ordinal: 0x3d
  UCHAR OwnsProcessAddressSpaceExclusive : 1; // offset: 0x421 ordinal: 0x3e
  UCHAR OwnsProcessAddressSpaceShared : 1;    // offset: 0x421 ordinal: 0x3f
  UCHAR SuppressSymbolLoad : 1;               // offset: 0x421 ordinal: 0x40
  UCHAR Prefetching : 1;                      // offset: 0x421 ordinal: 0x41
  UCHAR OwnsDynamicMemoryShared : 1;          // offset: 0x421 ordinal: 0x42
  UCHAR OwnsChangeControlAreaExclusive : 1;   // offset: 0x421 ordinal: 0x43
  UCHAR OwnsChangeControlAreaShared : 1;      // offset: 0x421 ordinal: 0x44
  USHORT PriorityRegionActive : 4;            // offset: 0x422 ordinal: 0x45
  UCHAR CacheManagerActive;                   // offset: 0x424 ordinal: 0x46
  UCHAR DisablePageFaultClustering;           // offset: 0x425 ordinal: 0x47
  UCHAR ActiveFaultCount;                     // offset: 0x426 ordinal: 0x48
  ULONGLONG AlpcMessageId;                    // offset: 0x428 ordinal: 0x49
  union {
    VOID *AlpcMessage;             // offset: 0x430 ordinal: 0x4a
    ULONG AlpcReceiveAttributeSet; // offset: 0x430 ordinal: 0x4b
  };
  struct _LIST_ENTRY AlpcWaitListEntry; // offset: 0x438 ordinal: 0x4c
  ULONG CacheManagerCount;              // offset: 0x448 ordinal: 0x4d
} _ETHREAD;

// 0x138 bytes (sizeof)
typedef struct _PROCESSOR_POWER_STATE {
  VOID(*IdleFunction)
  (struct _PROCESSOR_POWER_STATE *);          // offset: 0x0 ordinal: 0x0
  struct PPM_IDLE_STATES *IdleStates;         // offset: 0x8 ordinal: 0x1
  ULONGLONG LastTimeCheck;                    // offset: 0x10 ordinal: 0x2
  ULONGLONG LastIdleTime;                     // offset: 0x18 ordinal: 0x3
  struct PROCESSOR_IDLE_TIMES IdleTimes;      // offset: 0x20 ordinal: 0x4
  struct PPM_IDLE_ACCOUNTING *IdleAccounting; // offset: 0x40 ordinal: 0x5
  struct PPM_PERF_STATES *PerfStates;         // offset: 0x48 ordinal: 0x6
  ULONG LastKernelUserTime;                   // offset: 0x50 ordinal: 0x7
  ULONG LastIdleThreadKTime;                  // offset: 0x54 ordinal: 0x8
  ULONGLONG LastGlobalTimeHv;                 // offset: 0x58 ordinal: 0x9
  ULONGLONG LastProcessorTimeHv;              // offset: 0x60 ordinal: 0xa
  UCHAR ThermalConstraint;                    // offset: 0x68 ordinal: 0xb
  UCHAR LastBusyPercentage;                   // offset: 0x69 ordinal: 0xc
  union __anon_113 Flags;                     // offset: 0x6a ordinal: 0xd
  struct _KTIMER PerfTimer;                   // offset: 0x70 ordinal: 0xe
  struct _KDPC PerfDpc;                       // offset: 0xb0 ordinal: 0xf
  ULONG LastSysTime;                          // offset: 0xf0 ordinal: 0x10
  struct _KPRCB *PStateMaster;                // offset: 0xf8 ordinal: 0x11
  ULONGLONG PStateSet;                        // offset: 0x100 ordinal: 0x12
  ULONG CurrentPState;                        // offset: 0x108 ordinal: 0x13
  ULONG Reserved0;                            // offset: 0x10c ordinal: 0x14
  ULONG DesiredPState;                        // offset: 0x110 ordinal: 0x15
  ULONG Reserved1;                            // offset: 0x114 ordinal: 0x16
  ULONG PStateIdleStartTime;                  // offset: 0x118 ordinal: 0x17
  ULONG PStateIdleTime;                       // offset: 0x11c ordinal: 0x18
  ULONG LastPStateIdleTime;                   // offset: 0x120 ordinal: 0x19
  ULONG PStateStartTime;                      // offset: 0x124 ordinal: 0x1a
  ULONGLONG WmiDispatchPtr;                   // offset: 0x128 ordinal: 0x1b
  LONG WmiInterfaceEnabled;                   // offset: 0x130 ordinal: 0x1c
} _PROCESSOR_POWER_STATE;

typedef VOID (*__anon_168)(struct _PROCESSOR_POWER_STATE *);

// 0x3a20 bytes (sizeof)
typedef struct _KPRCB {
  ULONG MxCsr;                             // offset: 0x0 ordinal: 0x0
  USHORT Number;                           // offset: 0x4 ordinal: 0x1
  UCHAR InterruptRequest;                  // offset: 0x6 ordinal: 0x2
  UCHAR IdleHalt;                          // offset: 0x7 ordinal: 0x3
  struct _KTHREAD *CurrentThread;          // offset: 0x8 ordinal: 0x4
  struct _KTHREAD *NextThread;             // offset: 0x10 ordinal: 0x5
  struct _KTHREAD *IdleThread;             // offset: 0x18 ordinal: 0x6
  UCHAR NestingLevel;                      // offset: 0x20 ordinal: 0x7
  UCHAR Group;                             // offset: 0x21 ordinal: 0x8
  UCHAR PrcbPad00[6];                      // offset: 0x22 ordinal: 0x9
  ULONGLONG RspBase;                       // offset: 0x28 ordinal: 0xa
  ULONGLONG PrcbLock;                      // offset: 0x30 ordinal: 0xb
  ULONGLONG SetMember;                     // offset: 0x38 ordinal: 0xc
  struct _KPROCESSOR_STATE ProcessorState; // offset: 0x40 ordinal: 0xd
  CHAR CpuType;                            // offset: 0x5f0 ordinal: 0xe
  CHAR CpuID;                              // offset: 0x5f1 ordinal: 0xf
  union {
    USHORT CpuStep;    // offset: 0x5f2 ordinal: 0x10
    UCHAR CpuStepping; // offset: 0x5f2 ordinal: 0x11
  };
  UCHAR CpuModel;                                // offset: 0x5f3 ordinal: 0x12
  ULONG MHz;                                     // offset: 0x5f4 ordinal: 0x13
  ULONGLONG HalReserved[8];                      // offset: 0x5f8 ordinal: 0x14
  USHORT MinorVersion;                           // offset: 0x638 ordinal: 0x15
  USHORT MajorVersion;                           // offset: 0x63a ordinal: 0x16
  UCHAR BuildType;                               // offset: 0x63c ordinal: 0x17
  UCHAR CpuVendor;                               // offset: 0x63d ordinal: 0x18
  UCHAR CoresPerPhysicalProcessor;               // offset: 0x63e ordinal: 0x19
  UCHAR LogicalProcessorsPerCore;                // offset: 0x63f ordinal: 0x1a
  ULONG ApicMask;                                // offset: 0x640 ordinal: 0x1b
  ULONG CFlushSize;                              // offset: 0x644 ordinal: 0x1c
  VOID *AcpiReserved;                            // offset: 0x648 ordinal: 0x1d
  ULONG InitialApicId;                           // offset: 0x650 ordinal: 0x1e
  ULONG Stride;                                  // offset: 0x654 ordinal: 0x1f
  ULONGLONG PrcbPad01[3];                        // offset: 0x658 ordinal: 0x20
  struct _KSPIN_LOCK_QUEUE LockQueue[33];        // offset: 0x670 ordinal: 0x21
  struct _PP_LOOKASIDE_LIST PPLookasideList[16]; // offset: 0x880 ordinal: 0x22
  struct _GENERAL_LOOKASIDE_POOL
      PPNPagedLookasideList[32]; // offset: 0x980 ordinal: 0x23
  struct _GENERAL_LOOKASIDE_POOL
      PPPagedLookasideList[32]; // offset: 0x1580 ordinal: 0x24
  ULONGLONG PacketBarrier;      // offset: 0x2180 ordinal: 0x25
  struct _SINGLE_LIST_ENTRY
      DeferredReadyListHead;                  // offset: 0x2188 ordinal: 0x26
  LONG MmPageFaultCount;                      // offset: 0x2190 ordinal: 0x27
  LONG MmCopyOnWriteCount;                    // offset: 0x2194 ordinal: 0x28
  LONG MmTransitionCount;                     // offset: 0x2198 ordinal: 0x29
  LONG MmDemandZeroCount;                     // offset: 0x219c ordinal: 0x2a
  LONG MmPageReadCount;                       // offset: 0x21a0 ordinal: 0x2b
  LONG MmPageReadIoCount;                     // offset: 0x21a4 ordinal: 0x2c
  LONG MmDirtyPagesWriteCount;                // offset: 0x21a8 ordinal: 0x2d
  LONG MmDirtyWriteIoCount;                   // offset: 0x21ac ordinal: 0x2e
  LONG MmMappedPagesWriteCount;               // offset: 0x21b0 ordinal: 0x2f
  LONG MmMappedWriteIoCount;                  // offset: 0x21b4 ordinal: 0x30
  ULONG KeSystemCalls;                        // offset: 0x21b8 ordinal: 0x31
  ULONG KeContextSwitches;                    // offset: 0x21bc ordinal: 0x32
  ULONG CcFastReadNoWait;                     // offset: 0x21c0 ordinal: 0x33
  ULONG CcFastReadWait;                       // offset: 0x21c4 ordinal: 0x34
  ULONG CcFastReadNotPossible;                // offset: 0x21c8 ordinal: 0x35
  ULONG CcCopyReadNoWait;                     // offset: 0x21cc ordinal: 0x36
  ULONG CcCopyReadWait;                       // offset: 0x21d0 ordinal: 0x37
  ULONG CcCopyReadNoWaitMiss;                 // offset: 0x21d4 ordinal: 0x38
  LONG LookasideIrpFloat;                     // offset: 0x21d8 ordinal: 0x39
  LONG IoReadOperationCount;                  // offset: 0x21dc ordinal: 0x3a
  LONG IoWriteOperationCount;                 // offset: 0x21e0 ordinal: 0x3b
  LONG IoOtherOperationCount;                 // offset: 0x21e4 ordinal: 0x3c
  union _LARGE_INTEGER IoReadTransferCount;   // offset: 0x21e8 ordinal: 0x3d
  union _LARGE_INTEGER IoWriteTransferCount;  // offset: 0x21f0 ordinal: 0x3e
  union _LARGE_INTEGER IoOtherTransferCount;  // offset: 0x21f8 ordinal: 0x3f
  ULONGLONG TargetSet;                        // offset: 0x2200 ordinal: 0x40
  ULONG IpiFrozen;                            // offset: 0x2208 ordinal: 0x41
  UCHAR PrcbPad3[116];                        // offset: 0x220c ordinal: 0x42
  struct _REQUEST_MAILBOX RequestMailbox[64]; // offset: 0x2280 ordinal: 0x43
  ULONGLONG SenderSummary;                    // offset: 0x3280 ordinal: 0x44
  UCHAR PrcbPad4[120];                        // offset: 0x3288 ordinal: 0x45
  struct _KDPC_DATA DpcData[2];               // offset: 0x3300 ordinal: 0x46
  VOID *DpcStack;                             // offset: 0x3340 ordinal: 0x47
  VOID *SavedRsp;                             // offset: 0x3348 ordinal: 0x48
  LONG MaximumDpcQueueDepth;                  // offset: 0x3350 ordinal: 0x49
  ULONG DpcRequestRate;                       // offset: 0x3354 ordinal: 0x4a
  ULONG MinimumDpcRate;                       // offset: 0x3358 ordinal: 0x4b
  UCHAR DpcInterruptRequested;                // offset: 0x335c ordinal: 0x4c
  UCHAR DpcThreadRequested;                   // offset: 0x335d ordinal: 0x4d
  UCHAR DpcRoutineActive;                     // offset: 0x335e ordinal: 0x4e
  UCHAR DpcThreadActive;                      // offset: 0x335f ordinal: 0x4f
  union {
    ULONGLONG TimerHand;    // offset: 0x3360 ordinal: 0x50
    ULONGLONG TimerRequest; // offset: 0x3360 ordinal: 0x51
  };
  LONG TickOffset;                 // offset: 0x3368 ordinal: 0x52
  LONG MasterOffset;               // offset: 0x336c ordinal: 0x53
  ULONG DpcLastCount;              // offset: 0x3370 ordinal: 0x54
  UCHAR ThreadDpcEnable;           // offset: 0x3374 ordinal: 0x55
  UCHAR QuantumEnd;                // offset: 0x3375 ordinal: 0x56
  UCHAR PrcbPad50;                 // offset: 0x3376 ordinal: 0x57
  UCHAR IdleSchedule;              // offset: 0x3377 ordinal: 0x58
  LONG DpcSetEventRequest;         // offset: 0x3378 ordinal: 0x59
  ULONG KeExceptionDispatchCount;  // offset: 0x337c ordinal: 0x5a
  struct _KEVENT DpcEvent;         // offset: 0x3380 ordinal: 0x5b
  VOID *PrcbPad51;                 // offset: 0x3398 ordinal: 0x5c
  struct _KDPC CallDpc;            // offset: 0x33a0 ordinal: 0x5d
  LONG ClockKeepAlive;             // offset: 0x33e0 ordinal: 0x5e
  UCHAR ClockCheckSlot;            // offset: 0x33e4 ordinal: 0x5f
  UCHAR ClockPollCycle;            // offset: 0x33e5 ordinal: 0x60
  UCHAR PrcbPad6[2];               // offset: 0x33e6 ordinal: 0x61
  LONG DpcWatchdogPeriod;          // offset: 0x33e8 ordinal: 0x62
  LONG DpcWatchdogCount;           // offset: 0x33ec ordinal: 0x63
  ULONGLONG PrcbPad70[2];          // offset: 0x33f0 ordinal: 0x64
  struct _LIST_ENTRY WaitListHead; // offset: 0x3400 ordinal: 0x65
  ULONGLONG WaitLock;              // offset: 0x3410 ordinal: 0x66
  ULONG ReadySummary;              // offset: 0x3418 ordinal: 0x67
  ULONG QueueIndex;                // offset: 0x341c ordinal: 0x68
  ULONGLONG PrcbPad71[12];         // offset: 0x3420 ordinal: 0x69
  struct _LIST_ENTRY
      DispatcherReadyListHead[32];            // offset: 0x3480 ordinal: 0x6a
  ULONG InterruptCount;                       // offset: 0x3680 ordinal: 0x6b
  ULONG KernelTime;                           // offset: 0x3684 ordinal: 0x6c
  ULONG UserTime;                             // offset: 0x3688 ordinal: 0x6d
  ULONG DpcTime;                              // offset: 0x368c ordinal: 0x6e
  ULONG InterruptTime;                        // offset: 0x3690 ordinal: 0x6f
  ULONG AdjustDpcThreshold;                   // offset: 0x3694 ordinal: 0x70
  UCHAR SkipTick;                             // offset: 0x3698 ordinal: 0x71
  UCHAR DebuggerSavedIRQL;                    // offset: 0x3699 ordinal: 0x72
  UCHAR PollSlot;                             // offset: 0x369a ordinal: 0x73
  UCHAR PrcbPad80[5];                         // offset: 0x369b ordinal: 0x74
  ULONG DpcTimeCount;                         // offset: 0x36a0 ordinal: 0x75
  ULONG DpcTimeLimit;                         // offset: 0x36a4 ordinal: 0x76
  ULONG PeriodicCount;                        // offset: 0x36a8 ordinal: 0x77
  ULONG PeriodicBias;                         // offset: 0x36ac ordinal: 0x78
  ULONGLONG PrcbPad81[2];                     // offset: 0x36b0 ordinal: 0x79
  struct _KNODE *ParentNode;                  // offset: 0x36c0 ordinal: 0x7a
  ULONGLONG MultiThreadProcessorSet;          // offset: 0x36c8 ordinal: 0x7b
  struct _KPRCB *MultiThreadSetMaster;        // offset: 0x36d0 ordinal: 0x7c
  ULONGLONG StartCycles;                      // offset: 0x36d8 ordinal: 0x7d
  LONG MmSpinLockOrdering;                    // offset: 0x36e0 ordinal: 0x7e
  ULONG PageColor;                            // offset: 0x36e4 ordinal: 0x7f
  ULONG NodeColor;                            // offset: 0x36e8 ordinal: 0x80
  ULONG NodeShiftedColor;                     // offset: 0x36ec ordinal: 0x81
  ULONG SecondaryColorMask;                   // offset: 0x36f0 ordinal: 0x82
  LONG Sleeping;                              // offset: 0x36f4 ordinal: 0x83
  ULONGLONG CycleTime;                        // offset: 0x36f8 ordinal: 0x84
  ULONG CcFastMdlReadNoWait;                  // offset: 0x3700 ordinal: 0x85
  ULONG CcFastMdlReadWait;                    // offset: 0x3704 ordinal: 0x86
  ULONG CcFastMdlReadNotPossible;             // offset: 0x3708 ordinal: 0x87
  ULONG CcMapDataNoWait;                      // offset: 0x370c ordinal: 0x88
  ULONG CcMapDataWait;                        // offset: 0x3710 ordinal: 0x89
  ULONG CcPinMappedDataCount;                 // offset: 0x3714 ordinal: 0x8a
  ULONG CcPinReadNoWait;                      // offset: 0x3718 ordinal: 0x8b
  ULONG CcPinReadWait;                        // offset: 0x371c ordinal: 0x8c
  ULONG CcMdlReadNoWait;                      // offset: 0x3720 ordinal: 0x8d
  ULONG CcMdlReadWait;                        // offset: 0x3724 ordinal: 0x8e
  ULONG CcLazyWriteHotSpots;                  // offset: 0x3728 ordinal: 0x8f
  ULONG CcLazyWriteIos;                       // offset: 0x372c ordinal: 0x90
  ULONG CcLazyWritePages;                     // offset: 0x3730 ordinal: 0x91
  ULONG CcDataFlushes;                        // offset: 0x3734 ordinal: 0x92
  ULONG CcDataPages;                          // offset: 0x3738 ordinal: 0x93
  ULONG CcLostDelayedWrites;                  // offset: 0x373c ordinal: 0x94
  ULONG CcFastReadResourceMiss;               // offset: 0x3740 ordinal: 0x95
  ULONG CcCopyReadWaitMiss;                   // offset: 0x3744 ordinal: 0x96
  ULONG CcFastMdlReadResourceMiss;            // offset: 0x3748 ordinal: 0x97
  ULONG CcMapDataNoWaitMiss;                  // offset: 0x374c ordinal: 0x98
  ULONG CcMapDataWaitMiss;                    // offset: 0x3750 ordinal: 0x99
  ULONG CcPinReadNoWaitMiss;                  // offset: 0x3754 ordinal: 0x9a
  ULONG CcPinReadWaitMiss;                    // offset: 0x3758 ordinal: 0x9b
  ULONG CcMdlReadNoWaitMiss;                  // offset: 0x375c ordinal: 0x9c
  ULONG CcMdlReadWaitMiss;                    // offset: 0x3760 ordinal: 0x9d
  ULONG CcReadAheadIos;                       // offset: 0x3764 ordinal: 0x9e
  LONG MmCacheTransitionCount;                // offset: 0x3768 ordinal: 0x9f
  LONG MmCacheReadCount;                      // offset: 0x376c ordinal: 0xa0
  LONG MmCacheIoCount;                        // offset: 0x3770 ordinal: 0xa1
  ULONG PrcbPad91[3];                         // offset: 0x3774 ordinal: 0xa2
  struct _PROCESSOR_POWER_STATE PowerState;   // offset: 0x3780 ordinal: 0xa3
  ULONG KeAlignmentFixupCount;                // offset: 0x38b8 ordinal: 0xa4
  UCHAR VendorString[13];                     // offset: 0x38bc ordinal: 0xa5
  UCHAR PrcbPad10[3];                         // offset: 0x38c9 ordinal: 0xa6
  ULONG FeatureBits;                          // offset: 0x38cc ordinal: 0xa7
  union _LARGE_INTEGER UpdateSignature;       // offset: 0x38d0 ordinal: 0xa8
  struct _KDPC DpcWatchdogDpc;                // offset: 0x38d8 ordinal: 0xa9
  struct _KTIMER DpcWatchdogTimer;            // offset: 0x3918 ordinal: 0xaa
  struct _CACHE_DESCRIPTOR Cache[5];          // offset: 0x3958 ordinal: 0xab
  ULONG CacheCount;                           // offset: 0x3994 ordinal: 0xac
  ULONG CachedCommit;                         // offset: 0x3998 ordinal: 0xad
  ULONG CachedResidentAvailable;              // offset: 0x399c ordinal: 0xae
  VOID *HyperPte;                             // offset: 0x39a0 ordinal: 0xaf
  VOID *WheaInfo;                             // offset: 0x39a8 ordinal: 0xb0
  VOID *EtwSupport;                           // offset: 0x39b0 ordinal: 0xb1
  union _SLIST_HEADER InterruptObjectPool;    // offset: 0x39c0 ordinal: 0xb2
  union _LARGE_INTEGER HypercallPagePhysical; // offset: 0x39d0 ordinal: 0xb3
  VOID *HypercallPageVirtual;                 // offset: 0x39d8 ordinal: 0xb4
  VOID *RateControl;                          // offset: 0x39e0 ordinal: 0xb5
  ULONGLONG CacheProcessorMask[5];            // offset: 0x39e8 ordinal: 0xb6
  ULONGLONG PackageProcessorSet;              // offset: 0x3a10 ordinal: 0xb7
  ULONGLONG CoreProcessorSet;                 // offset: 0x3a18 ordinal: 0xb8
} _KPRCB;

// 0x3ba0 bytes (sizeof)
typedef struct _KPCR {
  union {
    struct _NT_TIB NtTib;        // offset: 0x0 ordinal: 0x0
    union _KGDTENTRY64 *GdtBase; // offset: 0x0 ordinal: 0x1
  };
  struct _KTSS64 *TssBase;             // offset: 0x8 ordinal: 0x2
  ULONGLONG UserRsp;                   // offset: 0x10 ordinal: 0x3
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

// 0x368 bytes (sizeof)
typedef struct _PEB64 {
  UCHAR InheritedAddressSpace;    // offset: 0x0 ordinal: 0x0
  UCHAR ReadImageFileExecOptions; // offset: 0x1 ordinal: 0x1
  UCHAR BeingDebugged;            // offset: 0x2 ordinal: 0x2
  union {
    UCHAR BitField;                // offset: 0x3 ordinal: 0x3
    UCHAR ImageUsesLargePages : 1; // offset: 0x3 ordinal: 0x4
  };
  UCHAR IsProtectedProcess : 1;          // offset: 0x3 ordinal: 0x5
  UCHAR IsLegacyProcess : 1;             // offset: 0x3 ordinal: 0x6
  UCHAR IsImageDynamicallyRelocated : 1; // offset: 0x3 ordinal: 0x7
  UCHAR SpareBits : 4;                   // offset: 0x3 ordinal: 0x8
  ULONGLONG Mutant;                      // offset: 0x8 ordinal: 0x9
  ULONGLONG ImageBaseAddress;            // offset: 0x10 ordinal: 0xa
  ULONGLONG Ldr;                         // offset: 0x18 ordinal: 0xb
  ULONGLONG ProcessParameters;           // offset: 0x20 ordinal: 0xc
  ULONGLONG SubSystemData;               // offset: 0x28 ordinal: 0xd
  ULONGLONG ProcessHeap;                 // offset: 0x30 ordinal: 0xe
  ULONGLONG FastPebLock;                 // offset: 0x38 ordinal: 0xf
  ULONGLONG AtlThunkSListPtr;            // offset: 0x40 ordinal: 0x10
  ULONGLONG IFEOKey;                     // offset: 0x48 ordinal: 0x11
  union {
    ULONG CrossProcessFlags; // offset: 0x50 ordinal: 0x12
    ULONG ProcessInJob : 1;  // offset: 0x50 ordinal: 0x13
  };
  ULONG ProcessInitializing : 1; // offset: 0x50 ordinal: 0x14
  ULONG ReservedBits0 : 30;      // offset: 0x50 ordinal: 0x15
  union {
    ULONGLONG KernelCallbackTable; // offset: 0x58 ordinal: 0x16
    ULONGLONG UserSharedInfoPtr;   // offset: 0x58 ordinal: 0x17
  };
  ULONG SystemReserved[1];                      // offset: 0x60 ordinal: 0x18
  ULONG SpareUlong;                             // offset: 0x64 ordinal: 0x19
  ULONGLONG FreeList;                           // offset: 0x68 ordinal: 0x1a
  ULONG TlsExpansionCounter;                    // offset: 0x70 ordinal: 0x1b
  ULONGLONG TlsBitmap;                          // offset: 0x78 ordinal: 0x1c
  ULONG TlsBitmapBits[2];                       // offset: 0x80 ordinal: 0x1d
  ULONGLONG ReadOnlySharedMemoryBase;           // offset: 0x88 ordinal: 0x1e
  ULONGLONG HotpatchInformation;                // offset: 0x90 ordinal: 0x1f
  ULONGLONG ReadOnlyStaticServerData;           // offset: 0x98 ordinal: 0x20
  ULONGLONG AnsiCodePageData;                   // offset: 0xa0 ordinal: 0x21
  ULONGLONG OemCodePageData;                    // offset: 0xa8 ordinal: 0x22
  ULONGLONG UnicodeCaseTableData;               // offset: 0xb0 ordinal: 0x23
  ULONG NumberOfProcessors;                     // offset: 0xb8 ordinal: 0x24
  ULONG NtGlobalFlag;                           // offset: 0xbc ordinal: 0x25
  union _LARGE_INTEGER CriticalSectionTimeout;  // offset: 0xc0 ordinal: 0x26
  ULONGLONG HeapSegmentReserve;                 // offset: 0xc8 ordinal: 0x27
  ULONGLONG HeapSegmentCommit;                  // offset: 0xd0 ordinal: 0x28
  ULONGLONG HeapDeCommitTotalFreeThreshold;     // offset: 0xd8 ordinal: 0x29
  ULONGLONG HeapDeCommitFreeBlockThreshold;     // offset: 0xe0 ordinal: 0x2a
  ULONG NumberOfHeaps;                          // offset: 0xe8 ordinal: 0x2b
  ULONG MaximumNumberOfHeaps;                   // offset: 0xec ordinal: 0x2c
  ULONGLONG ProcessHeaps;                       // offset: 0xf0 ordinal: 0x2d
  ULONGLONG GdiSharedHandleTable;               // offset: 0xf8 ordinal: 0x2e
  ULONGLONG ProcessStarterHelper;               // offset: 0x100 ordinal: 0x2f
  ULONG GdiDCAttributeList;                     // offset: 0x108 ordinal: 0x30
  ULONGLONG LoaderLock;                         // offset: 0x110 ordinal: 0x31
  ULONG OSMajorVersion;                         // offset: 0x118 ordinal: 0x32
  ULONG OSMinorVersion;                         // offset: 0x11c ordinal: 0x33
  USHORT OSBuildNumber;                         // offset: 0x120 ordinal: 0x34
  USHORT OSCSDVersion;                          // offset: 0x122 ordinal: 0x35
  ULONG OSPlatformId;                           // offset: 0x124 ordinal: 0x36
  ULONG ImageSubsystem;                         // offset: 0x128 ordinal: 0x37
  ULONG ImageSubsystemMajorVersion;             // offset: 0x12c ordinal: 0x38
  ULONG ImageSubsystemMinorVersion;             // offset: 0x130 ordinal: 0x39
  ULONGLONG ImageProcessAffinityMask;           // offset: 0x138 ordinal: 0x3a
  ULONG GdiHandleBuffer[60];                    // offset: 0x140 ordinal: 0x3b
  ULONGLONG PostProcessInitRoutine;             // offset: 0x230 ordinal: 0x3c
  ULONGLONG TlsExpansionBitmap;                 // offset: 0x238 ordinal: 0x3d
  ULONG TlsExpansionBitmapBits[32];             // offset: 0x240 ordinal: 0x3e
  ULONG SessionId;                              // offset: 0x2c0 ordinal: 0x3f
  union _ULARGE_INTEGER AppCompatFlags;         // offset: 0x2c8 ordinal: 0x40
  union _ULARGE_INTEGER AppCompatFlagsUser;     // offset: 0x2d0 ordinal: 0x41
  ULONGLONG pShimData;                          // offset: 0x2d8 ordinal: 0x42
  ULONGLONG AppCompatInfo;                      // offset: 0x2e0 ordinal: 0x43
  struct _STRING64 CSDVersion;                  // offset: 0x2e8 ordinal: 0x44
  ULONGLONG ActivationContextData;              // offset: 0x2f8 ordinal: 0x45
  ULONGLONG ProcessAssemblyStorageMap;          // offset: 0x300 ordinal: 0x46
  ULONGLONG SystemDefaultActivationContextData; // offset: 0x308 ordinal: 0x47
  ULONGLONG SystemAssemblyStorageMap;           // offset: 0x310 ordinal: 0x48
  ULONGLONG MinimumStackCommit;                 // offset: 0x318 ordinal: 0x49
  ULONGLONG FlsCallback;                        // offset: 0x320 ordinal: 0x4a
  struct LIST_ENTRY64 FlsListHead;              // offset: 0x328 ordinal: 0x4b
  ULONGLONG FlsBitmap;                          // offset: 0x338 ordinal: 0x4c
  ULONG FlsBitmapBits[4];                       // offset: 0x340 ordinal: 0x4d
  ULONG FlsHighIndex;                           // offset: 0x350 ordinal: 0x4e
  ULONGLONG WerRegistrationData;                // offset: 0x358 ordinal: 0x4f
  ULONGLONG WerShipAssertPtr;                   // offset: 0x360 ordinal: 0x50
} _PEB64;

// 0x1828 bytes (sizeof)
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
  UCHAR SpareBytes1[24];                   // offset: 0x2d0 ordinal: 0x12
  ULONG TxFsContext;                       // offset: 0x2e8 ordinal: 0x13
  struct _GDI_TEB_BATCH64 GdiTebBatch;     // offset: 0x2f0 ordinal: 0x14
  struct _CLIENT_ID64 RealClientId;        // offset: 0x7d8 ordinal: 0x15
  ULONGLONG GdiCachedProcessHandle;        // offset: 0x7e8 ordinal: 0x16
  ULONG GdiClientPID;                      // offset: 0x7f0 ordinal: 0x17
  ULONG GdiClientTID;                      // offset: 0x7f4 ordinal: 0x18
  ULONGLONG GdiThreadLocalInfo;            // offset: 0x7f8 ordinal: 0x19
  ULONGLONG Win32ClientInfo[62];           // offset: 0x800 ordinal: 0x1a
  ULONGLONG glDispatchTable[233];          // offset: 0x9f0 ordinal: 0x1b
  ULONGLONG glReserved1[29];               // offset: 0x1138 ordinal: 0x1c
  ULONGLONG glReserved2;                   // offset: 0x1220 ordinal: 0x1d
  ULONGLONG glSectionInfo;                 // offset: 0x1228 ordinal: 0x1e
  ULONGLONG glSection;                     // offset: 0x1230 ordinal: 0x1f
  ULONGLONG glTable;                       // offset: 0x1238 ordinal: 0x20
  ULONGLONG glCurrentRC;                   // offset: 0x1240 ordinal: 0x21
  ULONGLONG glContext;                     // offset: 0x1248 ordinal: 0x22
  ULONG LastStatusValue;                   // offset: 0x1250 ordinal: 0x23
  struct _STRING64 StaticUnicodeString;    // offset: 0x1258 ordinal: 0x24
  WCHAR StaticUnicodeBuffer[261];          // offset: 0x1268 ordinal: 0x25
  ULONGLONG DeallocationStack;             // offset: 0x1478 ordinal: 0x26
  ULONGLONG TlsSlots[64];                  // offset: 0x1480 ordinal: 0x27
  struct LIST_ENTRY64 TlsLinks;            // offset: 0x1680 ordinal: 0x28
  ULONGLONG Vdm;                           // offset: 0x1690 ordinal: 0x29
  ULONGLONG ReservedForNtRpc;              // offset: 0x1698 ordinal: 0x2a
  ULONGLONG DbgSsReserved[2];              // offset: 0x16a0 ordinal: 0x2b
  ULONG HardErrorMode;                     // offset: 0x16b0 ordinal: 0x2c
  ULONGLONG Instrumentation[11];           // offset: 0x16b8 ordinal: 0x2d
  struct _GUID ActivityId;                 // offset: 0x1710 ordinal: 0x2e
  ULONGLONG SubProcessTag;                 // offset: 0x1720 ordinal: 0x2f
  ULONGLONG EtwLocalData;                  // offset: 0x1728 ordinal: 0x30
  ULONGLONG EtwTraceData;                  // offset: 0x1730 ordinal: 0x31
  ULONGLONG WinSockData;                   // offset: 0x1738 ordinal: 0x32
  ULONG GdiBatchCount;                     // offset: 0x1740 ordinal: 0x33
  UCHAR SpareBool0;                        // offset: 0x1744 ordinal: 0x34
  UCHAR SpareBool1;                        // offset: 0x1745 ordinal: 0x35
  UCHAR SpareBool2;                        // offset: 0x1746 ordinal: 0x36
  UCHAR IdealProcessor;                    // offset: 0x1747 ordinal: 0x37
  ULONG GuaranteedStackBytes;              // offset: 0x1748 ordinal: 0x38
  ULONGLONG ReservedForPerf;               // offset: 0x1750 ordinal: 0x39
  ULONGLONG ReservedForOle;                // offset: 0x1758 ordinal: 0x3a
  ULONG WaitingOnLoaderLock;               // offset: 0x1760 ordinal: 0x3b
  ULONGLONG SavedPriorityState;            // offset: 0x1768 ordinal: 0x3c
  ULONGLONG SoftPatchPtr1;                 // offset: 0x1770 ordinal: 0x3d
  ULONGLONG ThreadPoolData;                // offset: 0x1778 ordinal: 0x3e
  ULONGLONG TlsExpansionSlots;             // offset: 0x1780 ordinal: 0x3f
  ULONGLONG DeallocationBStore;            // offset: 0x1788 ordinal: 0x40
  ULONGLONG BStoreLimit;                   // offset: 0x1790 ordinal: 0x41
  ULONG ImpersonationLocale;               // offset: 0x1798 ordinal: 0x42
  ULONG IsImpersonating;                   // offset: 0x179c ordinal: 0x43
  ULONGLONG NlsCache;                      // offset: 0x17a0 ordinal: 0x44
  ULONGLONG pShimData;                     // offset: 0x17a8 ordinal: 0x45
  ULONG HeapVirtualAffinity;               // offset: 0x17b0 ordinal: 0x46
  ULONGLONG CurrentTransactionHandle;      // offset: 0x17b8 ordinal: 0x47
  ULONGLONG ActiveFrame;                   // offset: 0x17c0 ordinal: 0x48
  ULONGLONG FlsData;                       // offset: 0x17c8 ordinal: 0x49
  ULONGLONG PreferredLanguages;            // offset: 0x17d0 ordinal: 0x4a
  ULONGLONG UserPrefLanguages;             // offset: 0x17d8 ordinal: 0x4b
  ULONGLONG MergedPrefLanguages;           // offset: 0x17e0 ordinal: 0x4c
  ULONG MuiImpersonation;                  // offset: 0x17e8 ordinal: 0x4d
  union {
    USHORT CrossTebFlags;          // offset: 0x17ec ordinal: 0x4e
    USHORT SpareCrossTebBits : 16; // offset: 0x17ec ordinal: 0x4f
  };
  union {
    USHORT SameTebFlags;         // offset: 0x17ee ordinal: 0x50
    USHORT DbgSafeThunkCall : 1; // offset: 0x17ee ordinal: 0x51
  };
  USHORT DbgInDebugPrint : 1;            // offset: 0x17ee ordinal: 0x52
  USHORT DbgHasFiberData : 1;            // offset: 0x17ee ordinal: 0x53
  USHORT DbgSkipThreadAttach : 1;        // offset: 0x17ee ordinal: 0x54
  USHORT DbgWerInShipAssertCode : 1;     // offset: 0x17ee ordinal: 0x55
  USHORT DbgRanProcessInit : 1;          // offset: 0x17ee ordinal: 0x56
  USHORT DbgClonedThread : 1;            // offset: 0x17ee ordinal: 0x57
  USHORT DbgSuppressDebugMsg : 1;        // offset: 0x17ee ordinal: 0x58
  USHORT SpareSameTebBits : 8;           // offset: 0x17ee ordinal: 0x59
  ULONGLONG TxnScopeEnterCallback;       // offset: 0x17f0 ordinal: 0x5a
  ULONGLONG TxnScopeExitCallback;        // offset: 0x17f8 ordinal: 0x5b
  ULONGLONG TxnScopeContext;             // offset: 0x1800 ordinal: 0x5c
  ULONG LockCount;                       // offset: 0x1808 ordinal: 0x5d
  ULONG ProcessRundown;                  // offset: 0x180c ordinal: 0x5e
  ULONGLONG LastSwitchTime;              // offset: 0x1810 ordinal: 0x5f
  ULONGLONG TotalSwitchOutTime;          // offset: 0x1818 ordinal: 0x60
  union _LARGE_INTEGER WaitReasonBitMap; // offset: 0x1820 ordinal: 0x61
} _TEB64;
