#include <stdint.h>

// 0x0 (0) bytes
struct _LDRP_LOAD_CONTEXT {};

// 0x0 (0) bytes
struct _ADAPTER_OBJECT {};

// 0x0 (0) bytes
struct _VERIFIER_SHARED_EXPORT_THUNK {};

// 0x20 (32) bytes
struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS {
  struct _VERIFIER_SHARED_EXPORT_THUNK *SharedExportThunks; // offset: 0x0 (0)
  struct _VERIFIER_SHARED_EXPORT_THUNK
      *PoolSharedExportThunks; // offset: 0x8 (8)
  struct _VERIFIER_SHARED_EXPORT_THUNK
      *OrderDependentSharedExportThunks; // offset: 0x10 (16)
  struct _VERIFIER_SHARED_EXPORT_THUNK
      *XdvSharedExportThunks; // offset: 0x18 (24)
};

// 0x0 (0) bytes
struct _ACTIVATION_CONTEXT_DATA {};

// 0x0 (0) bytes
struct _KTMNOTIFICATION_PACKET {};

// 0x0 (0) bytes
struct _ETW_PERFECT_HASH_FUNCTION {};

// 0x0 (0) bytes
struct _HAL_PMC_COUNTERS {};

// 0x0 (0) bytes
struct _ETW_STACK_CACHE {};

// 0x0 (0) bytes
struct _CALLBACK_OBJECT {};

typedef uint8_t UCHAR;

typedef uint64_t ULONGLONG;

// 0x0 (0) bytes
struct _DEVICE_OBJECT_LIST {};

typedef void VOID;

// 0x0 (0) bytes
struct _PCW_INSTANCE {};

// 0x0 (0) bytes
struct _PCW_BUFFER {};

// 0x0 (0) bytes
struct _PCW_REGISTRATION {};

// 0x0 (0) bytes
struct _SERVER_SILO_MONITOR {};

typedef uint16_t USHORT;

typedef uint32_t ULONG;

// 0x4 (4) bytes
struct _MMSECTION_FLAGS {
  ULONG BeingDeleted : 1;                   // offset: 0x0 (0)
  ULONG BeingCreated : 1;                   // offset: 0x0 (0)
  ULONG BeingPurged : 1;                    // offset: 0x0 (0)
  ULONG NoModifiedWriting : 1;              // offset: 0x0 (0)
  ULONG FailAllIo : 1;                      // offset: 0x0 (0)
  ULONG Image : 1;                          // offset: 0x0 (0)
  ULONG Based : 1;                          // offset: 0x0 (0)
  ULONG File : 1;                           // offset: 0x0 (0)
  ULONG AttemptingDelete : 1;               // offset: 0x0 (0)
  ULONG PrefetchCreated : 1;                // offset: 0x0 (0)
  ULONG PhysicalMemory : 1;                 // offset: 0x0 (0)
  ULONG CopyOnWrite : 1;                    // offset: 0x0 (0)
  ULONG Reserve : 1;                        // offset: 0x0 (0)
  ULONG Commit : 1;                         // offset: 0x0 (0)
  ULONG NoChange : 1;                       // offset: 0x0 (0)
  ULONG WasPurged : 1;                      // offset: 0x0 (0)
  ULONG UserReference : 1;                  // offset: 0x0 (0)
  ULONG GlobalMemory : 1;                   // offset: 0x0 (0)
  ULONG DeleteOnClose : 1;                  // offset: 0x0 (0)
  ULONG FilePointerNull : 1;                // offset: 0x0 (0)
  ULONG PreferredNode : 6;                  // offset: 0x0 (0)
  ULONG GlobalOnlyPerSession : 1;           // offset: 0x0 (0)
  ULONG UserWritable : 1;                   // offset: 0x0 (0)
  ULONG SystemVaAllocated : 1;              // offset: 0x0 (0)
  ULONG PreferredFsCompressionBoundary : 1; // offset: 0x0 (0)
  ULONG UsingFileExtents : 1;               // offset: 0x0 (0)
  ULONG Spare : 1;                          // offset: 0x0 (0)
};

// 0x0 (0) bytes
struct _SCSI_REQUEST_BLOCK {};

// 0x0 (0) bytes
struct _EPROCESS_QUOTA_BLOCK {};

// 0x0 (0) bytes
struct _PAGEFAULT_HISTORY {};

// 0x0 (0) bytes
struct _JOB_IO_RATE_CONTROL {};

// 0x0 (0) bytes
struct _JOB_NET_RATE_CONTROL {};

// 0x0 (0) bytes
struct _SILO_CONTEXT {};

// 0x0 (0) bytes
struct _JOB_CPU_RATE_CONTROL {};

// 0x0 (0) bytes
struct _JOB_NOTIFICATION_INFORMATION {};

// 0x0 (0) bytes
struct _JOB_ACCESS_STATE {};

// 0x8 (8) bytes
struct _ARBITER_ADD_RESERVED_PARAMETERS {
  struct _DEVICE_OBJECT *ReserveDevice; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _SLIST_ENTRY {
  struct _SLIST_ENTRY *Next; // offset: 0x0 (0)
};

typedef int16_t SHORT;

typedef int64_t LONGLONG;

// 0x10 (16) bytes
struct _TIME_FIELDS {
  SHORT Year;         // offset: 0x0 (0)
  SHORT Month;        // offset: 0x2 (2)
  SHORT Day;          // offset: 0x4 (4)
  SHORT Hour;         // offset: 0x6 (6)
  SHORT Minute;       // offset: 0x8 (8)
  SHORT Second;       // offset: 0xa (10)
  SHORT Milliseconds; // offset: 0xc (12)
  SHORT Weekday;      // offset: 0xe (14)
};

// 0x8 (8) bytes
struct _RTL_AVL_TREE {
  struct _RTL_BALANCED_NODE *Root; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _RTL_RB_TREE {
  struct _RTL_BALANCED_NODE *Root; // offset: 0x0 (0)
  struct _RTL_BALANCED_NODE *Min;  // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _RTL_SPLAY_LINKS {
  struct _RTL_SPLAY_LINKS *Parent;     // offset: 0x0 (0)
  struct _RTL_SPLAY_LINKS *LeftChild;  // offset: 0x8 (8)
  struct _RTL_SPLAY_LINKS *RightChild; // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _LDRP_CSLIST {
  struct _SINGLE_LIST_ENTRY *Tail; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _SINGLE_LIST_ENTRY {
  struct _SINGLE_LIST_ENTRY *Next; // offset: 0x0 (0)
};

// 0x18 (24) bytes
struct _ETW_BUFFER_QUEUE {
  struct _SINGLE_LIST_ENTRY *QueueHead; // offset: 0x0 (0)
  struct _SINGLE_LIST_ENTRY *QueueTail; // offset: 0x8 (8)
  struct _SINGLE_LIST_ENTRY QueueEntry; // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _KWAIT_CHAIN {
  struct _SINGLE_LIST_ENTRY Head; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _KDPC_LIST {
  struct _SINGLE_LIST_ENTRY ListHead;   // offset: 0x0 (0)
  struct _SINGLE_LIST_ENTRY *LastEntry; // offset: 0x8 (8)
};

typedef int8_t CHAR;

// 0x0 (0) bytes
struct _FLS_CALLBACK_INFO {};

// 0x0 (0) bytes
struct _ASSEMBLY_STORAGE_MAP {};

// 0x8 (8) bytes
struct _ARBITER_QUERY_ARBITRATE_PARAMETERS {
  struct _LIST_ENTRY *ArbitrationList; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _ARBITER_BOOT_ALLOCATION_PARAMETERS {
  struct _LIST_ENTRY *ArbitrationList; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _LIST_ENTRY {
  struct _LIST_ENTRY *Flink; // offset: 0x0 (0)
  struct _LIST_ENTRY *Blink; // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _DELAY_ACK_FO {
  struct _LIST_ENTRY Links;                // offset: 0x0 (0)
  struct _FILE_OBJECT *OriginalFileObject; // offset: 0x10 (16)
};

// 0x18 (24) bytes
struct _TRIAGE_PNP_DEVICE_COMPLETION_REQUEST {
  struct _LIST_ENTRY ListEntry;           // offset: 0x0 (0)
  struct _TRIAGE_DEVICE_NODE *DeviceNode; // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _TRIAGE_PNP_DEVICE_COMPLETION_QUEUE {
  struct _LIST_ENTRY DispatchedList; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _MMWORKING_SET_EXPANSION_HEAD {
  struct _LIST_ENTRY ListHead; // offset: 0x0 (0)
};

// 0x40 (64) bytes
struct _VF_KE_CRITICAL_REGION_TRACE {
  struct _ETHREAD *Thread; // offset: 0x0 (0)
  VOID *StackTrace[7];     // offset: 0x8 (8)
};

// 0x48 (72) bytes
struct _VI_FAULT_TRACE {
  struct _ETHREAD *Thread; // offset: 0x0 (0)
  VOID *StackTrace[8];     // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _ALPC_HANDLE_ENTRY {
  VOID *Object; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _IO_COMPLETION_CONTEXT {
  VOID *Port; // offset: 0x0 (0)
  VOID *Key;  // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _SECTION_OBJECT_POINTERS {
  VOID *DataSectionObject;  // offset: 0x0 (0)
  VOID *SharedCacheMap;     // offset: 0x8 (8)
  VOID *ImageSectionObject; // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _IO_CLIENT_EXTENSION {
  struct _IO_CLIENT_EXTENSION *NextExtension; // offset: 0x0 (0)
  VOID *ClientIdentificationAddress;          // offset: 0x8 (8)
};

// 0x30 (48) bytes
struct _IO_TIMER {
  SHORT Type;                   // offset: 0x0 (0)
  SHORT TimerFlag;              // offset: 0x2 (2)
  struct _LIST_ENTRY TimerList; // offset: 0x8 (8)
  VOID(*TimerRoutine)
  (struct _DEVICE_OBJECT *arg1, VOID *arg2); // offset: 0x18 (24)
  VOID *Context;                             // offset: 0x20 (32)
  struct _DEVICE_OBJECT *DeviceObject;       // offset: 0x28 (40)
};

// 0x10 (16) bytes
struct _TERMINATION_PORT {
  struct _TERMINATION_PORT *Next; // offset: 0x0 (0)
  VOID *Port;                     // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _WORK_QUEUE_ITEM {
  struct _LIST_ENTRY List;           // offset: 0x0 (0)
  VOID (*WorkerRoutine)(VOID *arg1); // offset: 0x10 (16)
  VOID *Parameter;                   // offset: 0x18 (24)
};

// 0x28 (40) bytes
struct _MI_COMBINE_WORKITEM {
  VOID *NextEntry;                  // offset: 0x0 (0)
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _KREQUEST_PACKET {
  VOID *CurrentPacket[3]; // offset: 0x0 (0)
  VOID(*WorkerRoutine)
  (VOID *arg1, VOID *arg2, VOID *arg3, VOID *arg4); // offset: 0x18 (24)
};

// 0x80 (128) bytes
struct _OBJECT_REF_TRACE {
  VOID *StackTrace[16]; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _CLIENT_ID {
  VOID *UniqueProcess; // offset: 0x0 (0)
  VOID *UniqueThread;  // offset: 0x8 (8)
};

// 0x0 (0) bytes
struct _TP_CALLBACK_INSTANCE {};

// 0x0 (0) bytes
struct _ACTIVATION_CONTEXT {};

// 0x0 (0) bytes
struct _TP_CLEANUP_GROUP {};

// 0x0 (0) bytes
struct _TP_POOL {};

typedef int32_t LONG;

// 0x4 (4) bytes
enum _ETW_GUID_TYPE {

  EtwTraceGuidType = 0,
  EtwNotificationGuidType = 1,
  EtwGroupGuidType = 2,
  EtwGuidTypeMax = 3
};

// 0x4 (4) bytes
enum _MI_DYNAMICBASE_BITMAP {

  DynamicBaseBitMap32 = 0,
  DynamicBaseBitMap64Low = 1,
  DynamicBaseBitMap64High = 2,
  DynamicBaseBitMapWow64Dll = 3,
  LastDynamicBaseBitMap = 4
};

// 0x4 (4) bytes
enum _KTIMER2_COLLECTION_INDEX {

  KTimer2CollectionNoWake = 0,
  KTimer2CollectionHr = 1,
  KTimer2CollectionFinite = 2,
  KTimer2CollectionIr = 3,
  KTimer2CollectionNotInserted = 16,
  KTimer2CollectionInvalid = 20,
  KTimer2CollectionOptional = 32,
  KTimer2CollectionMin = 0,
  KTimer2CollectionMax = 4,
  KTimer2CollectionNode1 = 2
};

// 0x4 (4) bytes
enum _MI_LOCK_ACQUIRE_TYPE {

  MiAcquireExclusive = 0,
  MiAcquireExclusiveAutoExpand = 1,
  MiAcquireShared = 2,
  MiAcquireSharedAutoExpand = 3
};

// 0x4 (4) bytes
enum _MI_MEMORY_EVENT_TYPES {

  LowAvailablePagesEvent = 0,
  HighAvailablePagesEvent = 1,
  LowPagedPoolEvent = 2,
  HighPagedPoolEvent = 3,
  LowNonPagedPoolEvent = 4,
  HighNonPagedPoolEvent = 5,
  LowCommitEvent = 6,
  HighCommitEvent = 7,
  MaximumCommitEvent = 8,
  BadMemoryDetectedEvent = 9,
  PhysicalMemoryChangeEvent = 10,
  TotalNumberOfMemoryEvents = 11
};

// 0x4 (4) bytes
enum _FILE_OBJECT_EXTENSION_TYPE {

  FoExtTypeTransactionParams = 0,
  FoExtTypeInternal = 1,
  FoExtTypeIosbRange = 2,
  FoExtTypeGeneric = 3,
  FoExtTypeSfio = 4,
  FoExtTypeSymlink = 5,
  FoExtTypeOplockKey = 6,
  FoExtTypeSilo = 7,
  MaxFoExtTypes = 8
};

// 0x4 (4) bytes
enum _PERFINFO_MM_STAT {

  PerfInfoMMStatNotUsed = 0,
  PerfInfoMMStatAggregatePageCombine = 1,
  PerfInfoMMStatIterationPageCombine = 2,
  PerfInfoMMStatMax = 3
};

// 0x4 (4) bytes
enum _MI_VAD_ALLOCATION_CELL_TYPE {

  MiVadBottomUp = 0,
  MiVadStackPebTeb = 1,
  MiVadAllocationCellMaximum = 2
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
  RegNtPostOpenKeyEx = 29,
  RegNtPreFlushKey = 30,
  RegNtPostFlushKey = 31,
  RegNtPreLoadKey = 32,
  RegNtPostLoadKey = 33,
  RegNtPreUnLoadKey = 34,
  RegNtPostUnLoadKey = 35,
  RegNtPreQueryKeySecurity = 36,
  RegNtPostQueryKeySecurity = 37,
  RegNtPreSetKeySecurity = 38,
  RegNtPostSetKeySecurity = 39,
  RegNtCallbackObjectContextCleanup = 40,
  RegNtPreRestoreKey = 41,
  RegNtPostRestoreKey = 42,
  RegNtPreSaveKey = 43,
  RegNtPostSaveKey = 44,
  RegNtPreReplaceKey = 45,
  RegNtPostReplaceKey = 46,
  RegNtPreQueryKeyName = 47,
  RegNtPostQueryKeyName = 48,
  MaxRegNtNotifyClass = 49
};

// 0x4 (4) bytes
enum _WOW64_SHARED_INFORMATION {

  SharedNtdll32LdrInitializeThunk = 0,
  SharedNtdll32KiUserExceptionDispatcher = 1,
  SharedNtdll32KiUserApcDispatcher = 2,
  SharedNtdll32KiUserCallbackDispatcher = 3,
  SharedNtdll32RtlUserThreadStart = 4,
  SharedNtdll32pQueryProcessDebugInformationRemote = 5,
  SharedNtdll32BaseAddress = 6,
  SharedNtdll32LdrSystemDllInitBlock = 7,
  Wow64SharedPageEntriesCount = 8
};

// 0x4 (4) bytes
enum _MI_CFG_BITMAP_TYPE {

  CfgBitMapNative = 0,
  CfgBitMapWow64 = 1,
  CfgBitMapMax = 2
};

// 0x4 (4) bytes
enum _WORKING_SET_TYPE {

  WorkingSetTypeUser = 0,
  WorkingSetTypeSession = 1,
  WorkingSetTypeSystemTypes = 2,
  WorkingSetTypeSystemCache = 2,
  WorkingSetTypePagedPool = 3,
  WorkingSetTypeSystemPtes = 4,
  WorkingSetTypeMaximum = 5
};

// 0x4 (4) bytes
enum _KPROCESS_STATE {

  ProcessInMemory = 0,
  ProcessOutOfMemory = 1,
  ProcessInTransition = 2,
  ProcessOutTransition = 3,
  ProcessInSwap = 4,
  ProcessOutSwap = 5,
  ProcessRetryOutSwap = 6,
  ProcessAllSwapStates = 7
};

// 0x4 (4) bytes
enum _MI_PARTITION_THREAD {

  MiModifiedPageWriteSlot = 0,
  MiDereferenceSegmentThreadSlot = 1,
  MiZeroPageThreadSlot = 2,
  MiPartitionWorkingSetManagerSlot = 3,
  MiMappedPageWriterSlot = 4,
  MiNumberOfPartitionThreads = 5
};

// 0x4 (4) bytes
enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS {

  JOB_OBJECT_IO_RATE_CONTROL_ENABLE = 1,
  JOB_OBJECT_IO_RATE_CONTROL_VALID_FLAGS = 1
};

// 0x4 (4) bytes
enum _KWAIT_BLOCK_STATE {

  WaitBlockBypassStart = 0,
  WaitBlockBypassComplete = 1,
  WaitBlockSuspendBypassStart = 2,
  WaitBlockSuspendBypassComplete = 3,
  WaitBlockActive = 4,
  WaitBlockInactive = 5,
  WaitBlockSuspended = 6,
  WaitBlockAllStates = 7
};

// 0x4 (4) bytes
enum _OBJECT_INFORMATION_CLASS {

  ObjectBasicInformation = 0,
  ObjectNameInformation = 1,
  ObjectTypeInformation = 2,
  ObjectTypesInformation = 3,
  ObjectHandleFlagInformation = 4,
  ObjectSessionInformation = 5,
  MaxObjectInfoClass = 6
};

// 0x4 (4) bytes
enum _PS_WAKE_REASON {

  PsWakeReasonUser = 0,
  PsWakeReasonExecutionRequired = 1,
  PsWakeReasonKernel = 2,
  PsWakeReasonInstrumentation = 3,
  PsWakeReasonPreserveProcess = 4,
  PsMaxWakeReasons = 5
};

// 0x4 (4) bytes
enum _ETW_PERFECT_HASH_FUNCTION_TYPE {

  ETW_PHF_EVENT_ID = 0,
  ETW_PHF_STACK_WALK = 1,
  ETW_PHF_MAX_COUNT = 2
};

// 0x4 (4) bytes
enum _MI_MIRROR_BITMAP_TYPES {

  MirrorBitmapTypeNormal = 0,
  MirrorBitmapTypeInterlocked = 1,
  MirrorBitmapTypeMaximum = 2
};

// 0x4 (4) bytes
enum TlgIn_t {

  TlgInNULL = 0,
  TlgInUNICODESTRING = 1,
  TlgInANSISTRING = 2,
  TlgInINT8 = 3,
  TlgInUINT8 = 4,
  TlgInINT16 = 5,
  TlgInUINT16 = 6,
  TlgInINT32 = 7,
  TlgInUINT32 = 8,
  TlgInINT64 = 9,
  TlgInUINT64 = 10,
  TlgInFLOAT = 11,
  TlgInDOUBLE = 12,
  TlgInBOOL32 = 13,
  TlgInBINARY = 14,
  TlgInGUID = 15,
  _TlgInPOINTER_unsupported = 16,
  TlgInFILETIME = 17,
  TlgInSYSTEMTIME = 18,
  TlgInSID = 19,
  TlgInHEXINT32 = 20,
  TlgInHEXINT64 = 21,
  TlgInCOUNTEDSTRING = 22,
  TlgInCOUNTEDANSISTRING = 23,
  _TlgInSTRUCT = 24,
  _TlgInMax = 25,
  TlgInINTPTR = 9,
  TlgInUINTPTR = 10,
  TlgInPOINTER = 21,
  _TlgInCcount = 32,
  TlgInVcount = 64,
  _TlgInChain = 128,
  _TlgInCustom = 96,
  _TlgInTypeMask = 31,
  _TlgInCountMask = 96,
  _TlgInFlagMask = 224
};

// 0x4 (4) bytes
enum _PROCESS_SECTION_TYPE {

  ProcessSectionData = 0,
  ProcessSectionImage = 1,
  ProcessSectionImageNx = 2,
  ProcessSectionPagefileBacked = 3,
  ProcessSectionMax = 4
};

// 0x4 (4) bytes
enum ReplacesCorHdrNumericDefines {

  COMIMAGE_FLAGS_ILONLY = 1,
  COMIMAGE_FLAGS_32BITREQUIRED = 2,
  COMIMAGE_FLAGS_IL_LIBRARY = 4,
  COMIMAGE_FLAGS_STRONGNAMESIGNED = 8,
  COMIMAGE_FLAGS_NATIVE_ENTRYPOINT = 16,
  COMIMAGE_FLAGS_TRACKDEBUGDATA = 65536,
  COMIMAGE_FLAGS_32BITPREFERRED = 131072,
  COR_VERSION_MAJOR_V2 = 2,
  COR_VERSION_MAJOR = 2,
  COR_VERSION_MINOR = 5,
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
  COR_VTABLE_FROM_UNMANAGED_RETAIN_APPDOMAIN = 8,
  COR_VTABLE_CALL_MOST_DERIVED = 16,
  IMAGE_COR_EATJ_THUNK_SIZE = 32,
  MAX_CLASS_NAME = 1024,
  MAX_PACKAGE_NAME = 1024
};

// 0x4 (4) bytes
enum TlgOut_t {

  TlgOutNULL = 0,
  TlgOutNOPRINT = 1,
  TlgOutSTRING = 2,
  TlgOutBOOLEAN = 3,
  TlgOutHEX = 4,
  TlgOutPID = 5,
  TlgOutTID = 6,
  TlgOutPORT = 7,
  TlgOutIPV4 = 8,
  TlgOutIPV6 = 9,
  TlgOutSOCKETADDRESS = 10,
  TlgOutXML = 11,
  TlgOutJSON = 12,
  TlgOutWIN32ERROR = 13,
  TlgOutNTSTATUS = 14,
  TlgOutHRESULT = 15,
  TlgOutFILETIME = 16,
  TlgOutSIGNED = 17,
  TlgOutUNSIGNED = 18,
  _TlgOutMax = 19,
  _TlgOutChain = 128,
  _TlgOutTypeMask = 127
};

// 0x4 (4) bytes
enum _EX_BALANCE_OBJECT {

  ExTimerExpiration = 0,
  ExThreadSetManagerEvent = 1,
  ExThreadReaperEvent = 2,
  ExMaximumBalanceObject = 3
};

// 0x4 (4) bytes
enum _MI_SUBVAD_LISTS {

  MiSubVadAny = 0,
  MiSubVadBelow2gb = 1,
  MiSubVadBelow4gb = 2,
  MiSubVadMaximum = 3
};

// 0x4 (4) bytes
enum _MI_IO_PFN_TYPE {

  MiIoPfnProbes = 0,
  MiIoPfnMaps = 1,
  MiIoPfnUnmapped = 2,
  MiMaximumIoPfnType = 3
};

// 0x4 (4) bytes
enum _PS_STD_HANDLE_STATE {

  PsNeverDuplicate = 0,
  PsRequestDuplicate = 1,
  PsAlwaysDuplicate = 2,
  PsMaxStdHandleStates = 3
};

// 0x4 (4) bytes
enum _PROCESS_VA_TYPE {

  ProcessVAImage = 0,
  ProcessVASection = 1,
  ProcessVAPrivate = 2,
  ProcessVAMax = 3
};

// 0x4 (4) bytes
enum _PS_PROTECTED_SIGNER {

  PsProtectedSignerNone = 0,
  PsProtectedSignerAuthenticode = 1,
  PsProtectedSignerCodeGen = 2,
  PsProtectedSignerAntimalware = 3,
  PsProtectedSignerLsa = 4,
  PsProtectedSignerWindows = 5,
  PsProtectedSignerWinTcb = 6,
  PsProtectedSignerMax = 7
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
enum _MI_AVAILABLE_PAGE_WAIT_TYPES {

  AvailablePagesWaitLow = 0,
  AvailablePagesWaitHigh = 1,
  AvailablePagesWaitVeryHigh = 2,
  AvailablePagesWaitMaximum = 3
};

// 0x4 (4) bytes
enum _PERFINFO_KERNELMEMORY_USAGE_TYPE {

  PerfInfoMemUsagePfnMetadata = 0,
  PerfInfoMemUsageMax = 1
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
  ProfileCallbackObject = 17,
  ApcObject = 18,
  DpcObject = 19,
  DeviceQueueObject = 20,
  PriQueueObject = 21,
  InterruptObject = 22,
  ProfileObject = 23,
  Timer2NotificationObject = 24,
  Timer2SynchronizationObject = 25,
  ThreadedDpcObject = 26,
  MaximumKernelObject = 27
};

// 0x4 (4) bytes
enum _PS_PROTECTED_TYPE {

  PsProtectedTypeNone = 0,
  PsProtectedTypeProtectedLight = 1,
  PsProtectedTypeProtected = 2,
  PsProtectedTypeMax = 3
};

// 0x4 (4) bytes
enum _INTERLOCKED_RESULT {

  ResultNegative = 1,
  ResultZero = 0,
  ResultPositive = 2
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
  GateWaitObsolete = 8,
  WaitingForProcessInSwap = 9
};

// 0x4 (4) bytes
enum _MM_POOL_PRIORITIES {

  MmHighPriority = 0,
  MmNormalPriority = 1,
  MmLowPriority = 2,
  MmMaximumPoolPriority = 3
};

// 0x4 (4) bytes
enum _KTHREAD_TAG {

  KThreadTagNone = 0,
  KThreadTagMediaBuffering = 1,
  KThreadTagMax = 2
};

// 0x4 (4) bytes
enum _MEMORY_CACHING_TYPE_ORIG {

  MmFrameBufferCached = 2
};

// 0x4 (4) bytes
enum _KWAIT_STATE {

  WaitInProgress = 0,
  WaitCommitted = 1,
  WaitAborted = 2,
  WaitSuspendInProgress = 3,
  WaitSuspended = 4,
  WaitResumeInProgress = 5,
  WaitResumeAborted = 6,
  WaitFirstSuspendState = 3,
  WaitLastSuspendState = 6,
  MaximumWaitState = 7
};

// 0x4 (4) bytes
enum _MM_POOL_TYPES {

  MmNonPagedPool = 0,
  MmPagedPool = 1,
  MmSessionPagedPool = 2,
  MmMaximumPoolType = 3
};

// 0x4 (4) bytes
enum _ETW_STRING_TOKEN_TYPE {

  ETW_STRING_TOKEN_EXE = 0,
  ETW_STRING_TOKEN_PACKAGE_ID = 1,
  ETW_STRING_TOKEN_PKG_APP_ID = 2,
  ETW_STRING_TOKEN_MAX_COUNT = 3
};

// 0x4 (4) bytes
enum _MI_MEMORY_HIGHLOW {

  MiMemoryHigh = 0,
  MiMemoryLow = 1,
  MiMemoryHighLow = 2
};

// 0x4 (4) bytes
enum _KHETERO_CPU_POLICY {

  KHeteroCpuPolicyAll = 0,
  KHeteroCpuPolicyLarge = 1,
  KHeteroCpuPolicyLargeOrIdle = 2,
  KHeteroCpuPolicySmall = 3,
  KHeteroCpuPolicySmallOrIdle = 4,
  KHeteroCpuPolicyDynamic = 5,
  KHeteroCpuPolicyStaticMax = 5,
  KHeteroCpuPolicyBiasedSmall = 6,
  KHeteroCpuPolicyBiasedLarge = 7,
  KHeteroCpuPolicyDefault = 8,
  KHeteroCpuPolicyMax = 9
};

// 0x4 (4) bytes
enum PS_CREATE_STATE {

  PsCreateInitialState = 0,
  PsCreateFailOnFileOpen = 1,
  PsCreateFailOnSectionCreate = 2,
  PsCreateFailExeFormat = 3,
  PsCreateFailMachineMismatch = 4,
  PsCreateFailExeName = 5,
  PsCreateSuccess = 6,
  PsCreateMaximumStates = 7
};

// 0x4 (4) bytes
enum _TlgBlob_t {

  _TlgBlobNone = 0,
  _TlgBlobEnd = 1,
  _TlgBlobProvider = 2,
  _TlgBlobEvent3 = 3,
  _TlgBlobProvider3 = 4,
  _TlgBlobEvent2 = 5,
  _TlgBlobMax = 6
};

// 0x4 (4) bytes
enum _DEVPROP_OPERATOR {

  DEVPROP_OPERATOR_MODIFIER_NOT = 65536,
  DEVPROP_OPERATOR_MODIFIER_IGNORE_CASE = 131072,
  DEVPROP_OPERATOR_NONE = 0,
  DEVPROP_OPERATOR_EXISTS = 1,
  DEVPROP_OPERATOR_NOT_EXISTS = 65537,
  DEVPROP_OPERATOR_EQUALS = 2,
  DEVPROP_OPERATOR_NOT_EQUALS = 65538,
  DEVPROP_OPERATOR_GREATER_THAN = 3,
  DEVPROP_OPERATOR_LESS_THAN = 4,
  DEVPROP_OPERATOR_GREATER_THAN_EQUALS = 5,
  DEVPROP_OPERATOR_LESS_THAN_EQUALS = 6,
  DEVPROP_OPERATOR_EQUALS_IGNORE_CASE = 131074,
  DEVPROP_OPERATOR_NOT_EQUALS_IGNORE_CASE = 196610,
  DEVPROP_OPERATOR_BITWISE_AND = 7,
  DEVPROP_OPERATOR_BITWISE_OR = 8,
  DEVPROP_OPERATOR_BEGINS_WITH = 9,
  DEVPROP_OPERATOR_ENDS_WITH = 10,
  DEVPROP_OPERATOR_CONTAINS = 11,
  DEVPROP_OPERATOR_BEGINS_WITH_IGNORE_CASE = 131081,
  DEVPROP_OPERATOR_ENDS_WITH_IGNORE_CASE = 131082,
  DEVPROP_OPERATOR_CONTAINS_IGNORE_CASE = 131083,
  DEVPROP_OPERATOR_LIST_CONTAINS = 4096,
  DEVPROP_OPERATOR_LIST_ELEMENT_BEGINS_WITH = 8192,
  DEVPROP_OPERATOR_LIST_ELEMENT_ENDS_WITH = 12288,
  DEVPROP_OPERATOR_LIST_ELEMENT_CONTAINS = 16384,
  DEVPROP_OPERATOR_LIST_CONTAINS_IGNORE_CASE = 135168,
  DEVPROP_OPERATOR_LIST_ELEMENT_BEGINS_WITH_IGNORE_CASE = 139264,
  DEVPROP_OPERATOR_LIST_ELEMENT_ENDS_WITH_IGNORE_CASE = 143360,
  DEVPROP_OPERATOR_LIST_ELEMENT_CONTAINS_IGNORE_CASE = 147456,
  DEVPROP_OPERATOR_AND_OPEN = 1048576,
  DEVPROP_OPERATOR_AND_CLOSE = 2097152,
  DEVPROP_OPERATOR_OR_OPEN = 3145728,
  DEVPROP_OPERATOR_OR_CLOSE = 4194304,
  DEVPROP_OPERATOR_NOT_OPEN = 5242880,
  DEVPROP_OPERATOR_NOT_CLOSE = 6291456,
  DEVPROP_OPERATOR_ARRAY_CONTAINS = 268435456,
  DEVPROP_OPERATOR_MASK_EVAL = 4095,
  DEVPROP_OPERATOR_MASK_LIST = 61440,
  DEVPROP_OPERATOR_MASK_MODIFIER = 983040,
  DEVPROP_OPERATOR_MASK_NOT_LOGICAL = -267386881,
  DEVPROP_OPERATOR_MASK_LOGICAL = 267386880,
  DEVPROP_OPERATOR_MASK_ARRAY = -268435456
};

// 0x4 (4) bytes
enum _MI_KSTACK_TYPE {

  MiRegularKstack = 0,
  MiShortLivedKstack = 1,
  MiMaximumKstack = 2
};

// 0x4 (4) bytes
enum JOB_OBJECT_NET_RATE_CONTROL_FLAGS {

  JOB_OBJECT_NET_RATE_CONTROL_ENABLE = 1,
  JOB_OBJECT_NET_RATE_CONTROL_MAX_BANDWIDTH = 2,
  JOB_OBJECT_NET_RATE_CONTROL_DSCP_TAG = 4,
  JOB_OBJECT_NET_RATE_CONTROL_VALID_FLAGS = 7
};

// 0x4 (4) bytes
enum LSA_FOREST_TRUST_RECORD_TYPE {

  ForestTrustTopLevelName = 0,
  ForestTrustTopLevelNameEx = 1,
  ForestTrustDomainInfo = 2,
  ForestTrustRecordTypeLast = 2
};

// 0x4 (4) bytes
enum _MM_PREEMPTIVE_TRIMS {

  MmPreemptForNonPaged = 0,
  MmPreemptForPaged = 1,
  MmPreemptForNonPagedPriority = 2,
  MmPreemptForPagedPriority = 3,
  MmMaximumPreempt = 4
};

// 0x4 (4) bytes
enum _ConnectionResourceConsumerDesc {

  ConnectionResourceConsumerDescIsUndefined = 0,
  ConnectionResourceConsumerDescIsDevice = 1,
  ConnectionResourceConsumerDescIsOpregion = 2,
  ConnectionResourceConsumerDescMax = 3
};

// 0x4 (4) bytes
enum _CM_SHARE_DISPOSITION {

  CmResourceShareUndetermined = 0,
  CmResourceShareDeviceExclusive = 1,
  CmResourceShareDriverExclusive = 2,
  CmResourceShareShared = 3
};

// 0x4 (4) bytes
enum _JOBOBJECTINFOCLASS {

  JobObjectBasicAccountingInformation = 1,
  JobObjectBasicLimitInformation = 2,
  JobObjectBasicProcessIdList = 3,
  JobObjectBasicUIRestrictions = 4,
  JobObjectSecurityLimitInformation = 5,
  JobObjectEndOfJobTimeInformation = 6,
  JobObjectAssociateCompletionPortInformation = 7,
  JobObjectBasicAndIoAccountingInformation = 8,
  JobObjectExtendedLimitInformation = 9,
  JobObjectJobSetInformation = 10,
  JobObjectGroupInformation = 11,
  JobObjectNotificationLimitInformation = 12,
  JobObjectLimitViolationInformation = 13,
  JobObjectGroupInformationEx = 14,
  JobObjectCpuRateControlInformation = 15,
  JobObjectCompletionFilter = 16,
  JobObjectCompletionCounter = 17,
  JobObjectFreezeInformation = 18,
  JobObjectExtendedAccountingInformation = 19,
  JobObjectWakeInformation = 20,
  JobObjectBackgroundInformation = 21,
  JobObjectSchedulingRankBiasInformation = 22,
  JobObjectTimerVirtualizationInformation = 23,
  JobObjectCycleTimeNotification = 24,
  JobObjectClearEvent = 25,
  JobObjectInterferenceInformation = 26,
  JobObjectClearPeakJobMemoryUsed = 27,
  JobObjectMemoryUsageInformation = 28,
  JobObjectSharedCommit = 29,
  JobObjectContainerId = 30,
  JobObjectIoRateControlInformation = 31,
  JobObjectReserved1Information = 18,
  JobObjectReserved2Information = 19,
  JobObjectReserved3Information = 20,
  JobObjectReserved4Information = 21,
  JobObjectReserved5Information = 22,
  JobObjectReserved6Information = 23,
  JobObjectReserved7Information = 24,
  JobObjectReserved8Information = 25,
  JobObjectReserved9Information = 26,
  JobObjectReserved10Information = 27,
  JobObjectReserved11Information = 28,
  JobObjectReserved12Information = 29,
  JobObjectReserved13Information = 30,
  JobObjectReserved14Information = 31,
  JobObjectNetRateControlInformation = 32,
  JobObjectNotificationLimitInformation2 = 33,
  JobObjectLimitViolationInformation2 = 34,
  JobObjectCreateSilo = 35,
  JobObjectSiloBasicInformation = 36,
  JobObjectSiloRootDirectory = 37,
  JobObjectServerSiloBasicInformation = 38,
  JobObjectServerSiloServiceSessionId = 39,
  JobObjectServerSiloInitialize = 40,
  JobObjectServerSiloRunningState = 41,
  MaxJobObjectInfoClass = 42
};

// 0x4 (4) bytes
enum _ETW_HEADER_TYPE {

  EtwHeaderTypeNative = 0,
  EtwHeaderTypeWow = 1,
  EtwHeaderTypeMax = 2
};

// 0x4 (4) bytes
enum _PS_RESOURCE_TYPE {

  PsResourceNonPagedPool = 0,
  PsResourcePagedPool = 1,
  PsResourcePageFile = 2,
  PsResourceWorkingSet = 3,
  PsResourceMax = 4
};

// 0x4 (4) bytes
enum _USER_ACTIVITY_PRESENCE {

  PowerUserPresent = 0,
  PowerUserNotPresent = 1,
  PowerUserInactive = 2,
  PowerUserMaximum = 3,
  PowerUserInvalid = 3
};

// 0x4 (4) bytes
enum _PS_ATTRIBUTE_NUM {

  PsAttributeParentProcess = 0,
  PsAttributeDebugObject = 1,
  PsAttributeToken = 2,
  PsAttributeClientId = 3,
  PsAttributeTebAddress = 4,
  PsAttributeImageName = 5,
  PsAttributeImageInfo = 6,
  PsAttributeMemoryReserve = 7,
  PsAttributePriorityClass = 8,
  PsAttributeErrorMode = 9,
  PsAttributeStdHandleInfo = 10,
  PsAttributeHandleList = 11,
  PsAttributeGroupAffinity = 12,
  PsAttributePreferredNode = 13,
  PsAttributeIdealProcessor = 14,
  PsAttributeUmsThread = 15,
  PsAttributeMitigationOptions = 16,
  PsAttributeProtectionLevel = 17,
  PsAttributeSecureProcess = 18,
  PsAttributeJobList = 19,
  PsAttributeChildProcessPolicy = 20,
  PsAttributeMax = 21
};

// 0x4 (4) bytes
enum _MI_NODE_NONPAGED_POOL_BITMAP {

  NonPagedPoolLargePdeNx = 0,
  NonPagedPoolSmallPde = 1,
  NonPagedPoolPerPage = 2
};

// 0x4 (4) bytes
enum SLEEPSTUDY_SPM_SCENARIO_CS_EXIT {

  SpmScenarioStopReasonUnspecified = 16,
  SpmScenarioStopReasonCsExit = 17,
  SpmScenarioStopReasonMax = 18
};

// 0x4 (4) bytes
enum _MI_WORKING_SET_TYPE {

  MiWorkingSetTypeSystemCache = 0,
  MiWorkingSetTypePagedPool = 1,
  MiWorkingSetTypeSystemPtes = 2,
  MiWorkingSetTypeMaximum = 3
};

// 0x4 (4) bytes
enum _TRACE_INFORMATION_CLASS {

  TraceIdClass = 0,
  TraceHandleClass = 1,
  TraceEnableFlagsClass = 2,
  TraceEnableLevelClass = 3,
  GlobalLoggerHandleClass = 4,
  EventLoggerHandleClass = 5,
  AllLoggerHandlesClass = 6,
  TraceHandleByNameClass = 7,
  LoggerEventsLostClass = 8,
  TraceSessionSettingsClass = 9,
  LoggerEventsLoggedClass = 10,
  DiskIoNotifyRoutinesClass = 11,
  TraceInformationClassReserved1 = 12,
  AllPossibleNotifyRoutinesClass = 12,
  FltIoNotifyRoutinesClass = 13,
  TraceInformationClassReserved2 = 14,
  WdfNotifyRoutinesClass = 15,
  MaxTraceInformationClass = 16
};

// 0x4 (4) bytes
enum _TRANSFER_TYPE {

  ReadTransfer = 0,
  WriteTransfer = 1,
  OtherTransfer = 2
};

// 0x4 (4) bytes
enum _LOCK_OPERATION {

  IoReadAccess = 0,
  IoWriteAccess = 1,
  IoModifyAccess = 2
};

// 0x4 (4) bytes
enum _EX_POOL_PRIORITY {

  LowPoolPriority = 0,
  LowPoolPrioritySpecialPoolOverrun = 8,
  LowPoolPrioritySpecialPoolUnderrun = 9,
  NormalPoolPriority = 16,
  NormalPoolPrioritySpecialPoolOverrun = 24,
  NormalPoolPrioritySpecialPoolUnderrun = 25,
  HighPoolPriority = 32,
  HighPoolPrioritySpecialPoolOverrun = 40,
  HighPoolPrioritySpecialPoolUnderrun = 41
};

// 0x4 (4) bytes
enum _KWAIT_REASON {

  Executive = 0,
  FreePage = 1,
  PageIn = 2,
  PoolAllocation = 3,
  DelayExecution = 4,
  Suspended = 5,
  UserRequest = 6,
  WrExecutive = 7,
  WrFreePage = 8,
  WrPageIn = 9,
  WrPoolAllocation = 10,
  WrDelayExecution = 11,
  WrSuspended = 12,
  WrUserRequest = 13,
  WrSpare0 = 14,
  WrQueue = 15,
  WrLpcReceive = 16,
  WrLpcReply = 17,
  WrVirtualMemory = 18,
  WrPageOut = 19,
  WrRendezvous = 20,
  WrKeyedEvent = 21,
  WrTerminated = 22,
  WrProcessInSwap = 23,
  WrCpuRateControl = 24,
  WrCalloutStack = 25,
  WrKernel = 26,
  WrResource = 27,
  WrPushLock = 28,
  WrMutex = 29,
  WrQuantumEnd = 30,
  WrDispatchInt = 31,
  WrPreempted = 32,
  WrYieldExecution = 33,
  WrFastMutex = 34,
  WrGuardedMutex = 35,
  WrRundown = 36,
  WrAlertByThreadId = 37,
  WrDeferredPreempt = 38,
  MaximumWaitReason = 39
};

// 0x4 (4) bytes
enum _HEAP_FAILURE_TYPE {

  heap_failure_internal = 0,
  heap_failure_unknown = 1,
  heap_failure_generic = 2,
  heap_failure_entry_corruption = 3,
  heap_failure_multiple_entries_corruption = 4,
  heap_failure_virtual_block_corruption = 5,
  heap_failure_buffer_overrun = 6,
  heap_failure_buffer_underrun = 7,
  heap_failure_block_not_busy = 8,
  heap_failure_invalid_argument = 9,
  heap_failure_usage_after_free = 10,
  heap_failure_cross_heap_operation = 11,
  heap_failure_freelists_corruption = 12,
  heap_failure_listentry_corruption = 13,
  heap_failure_lfh_bitmap_mismatch = 14,
  heap_failure_segment_lfh_bitmap_corruption = 15,
  heap_failure_segment_lfh_double_free = 16,
  heap_failure_vs_subsegment_corruption = 17
};

// 0x4 (4) bytes
enum _POWER_REQUEST_TYPE_INTERNAL {

  PowerRequestDisplayRequiredInternal = 0,
  PowerRequestSystemRequiredInternal = 1,
  PowerRequestAwayModeRequiredInternal = 2,
  PowerRequestExecutionRequiredInternal = 3,
  PowerRequestPerfBoostRequiredInternal = 4,
  PowerRequestInternalInvalid = 5
};

// 0x4 (4) bytes
enum _POWER_REQUEST_TYPE {

  PowerRequestDisplayRequired = 0,
  PowerRequestSystemRequired = 1,
  PowerRequestAwayModeRequired = 2,
  PowerRequestExecutionRequired = 3
};

// 0x4 (4) bytes
enum _TOKEN_INFORMATION_CLASS {

  TokenUser = 1,
  TokenGroups = 2,
  TokenPrivileges = 3,
  TokenOwner = 4,
  TokenPrimaryGroup = 5,
  TokenDefaultDacl = 6,
  TokenSource = 7,
  TokenType = 8,
  TokenImpersonationLevel = 9,
  TokenStatistics = 10,
  TokenRestrictedSids = 11,
  TokenSessionId = 12,
  TokenGroupsAndPrivileges = 13,
  TokenSessionReference = 14,
  TokenSandBoxInert = 15,
  TokenAuditPolicy = 16,
  TokenOrigin = 17,
  TokenElevationType = 18,
  TokenLinkedToken = 19,
  TokenElevation = 20,
  TokenHasRestrictions = 21,
  TokenAccessInformation = 22,
  TokenVirtualizationAllowed = 23,
  TokenVirtualizationEnabled = 24,
  TokenIntegrityLevel = 25,
  TokenUIAccess = 26,
  TokenMandatoryPolicy = 27,
  TokenLogonSid = 28,
  TokenIsAppContainer = 29,
  TokenCapabilities = 30,
  TokenAppContainerSid = 31,
  TokenAppContainerNumber = 32,
  TokenUserClaimAttributes = 33,
  TokenDeviceClaimAttributes = 34,
  TokenRestrictedUserClaimAttributes = 35,
  TokenRestrictedDeviceClaimAttributes = 36,
  TokenDeviceGroups = 37,
  TokenRestrictedDeviceGroups = 38,
  TokenSecurityAttributes = 39,
  TokenIsRestricted = 40,
  TokenProcessTrustLevel = 41,
  TokenPrivateNameSpace = 42,
  MaxTokenInfoClass = 43
};

// 0x4 (4) bytes
enum _CMP_FAILURE_INJECTION_POINT {

  CmpFailurePointPoolAllocation = 0,
  CmpFailurePointViewMapping = 1,
  CmpFailurePointViewPinning = 2,
  CmpFailurePointResourceCharging = 3,
  CmpFailurePointFileWrite = 4,
  CmpFailurePointFileRead = 5,
  CmpFailurePointCacheFlush = 6,
  CmpFailurePointFlush = 7,
  CmpFailurePointFlushAndPurge = 8,
  CmpFailurePointForceLargeBin = 9,
  CmpFailurePointDontFixAlignment = 10,
  CmpFailureInjectionPointCount = 11
};

// 0x4 (4) bytes
enum _MI_PFN_CACHE_ATTRIBUTE {

  MiNonCached = 0,
  MiCached = 1,
  MiWriteCombined = 2,
  MiNotMapped = 3
};

// 0x4 (4) bytes
enum _EVENT_INFO_CLASS {

  EventProviderBinaryTrackInfo = 0,
  EventProviderSetEnableAllKeywords = 1,
  EventProviderSetTraits = 2,
  EventProviderUseDescriptorType = 3,
  MaxEventInfo = 4
};

// 0x4 (4) bytes
enum _DEVICE_WAKE_DEPTH {

  DeviceWakeDepthNotWakeable = 0,
  DeviceWakeDepthD0 = 1,
  DeviceWakeDepthD1 = 2,
  DeviceWakeDepthD2 = 3,
  DeviceWakeDepthD3hot = 4,
  DeviceWakeDepthD3cold = 5,
  DeviceWakeDepthMaximum = 6
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
enum _PF_FILE_ACCESS_TYPE {

  PfFileAccessTypeRead = 0,
  PfFileAccessTypeWrite = 1,
  PfFileAccessTypeMax = 2
};

// 0x4 (4) bytes
enum _MEMORY_CACHING_TYPE {

  MmNonCached = 0,
  MmCached = 1,
  MmWriteCombined = 2,
  MmHardwareCoherentCached = 3,
  MmNonCachedUnordered = 4,
  MmUSWCCached = 5,
  MmMaximumCacheType = 6,
  MmNotMapped = -1
};

// 0x4 (4) bytes
enum _EX_GEN_RANDOM_DOMAIN {

  ExGenRandomDomainKernel = 0,
  ExGenRandomDomainFirst = 0,
  ExGenRandomDomainUserVisible = 1,
  ExGenRandomDomainMax = 2
};

// 0x4 (4) bytes
enum _PP_NPAGED_LOOKASIDE_NUMBER {

  LookasideSmallIrpList = 0,
  LookasideMediumIrpList = 1,
  LookasideLargeIrpList = 2,
  LookasideMdlList = 3,
  LookasideCreateInfoList = 4,
  LookasideNameBufferList = 5,
  LookasideTwilightList = 6,
  LookasideCompletionList = 7,
  LookasideScratchBufferList = 8,
  LookasideMaximumList = 9
};

// 0x4 (4) bytes
enum _EVENT_TYPE {

  NotificationEvent = 0,
  SynchronizationEvent = 1
};

// 0x4 (4) bytes
enum _MODE {

  KernelMode = 0,
  UserMode = 1,
  MaximumMode = 2
};

// 0x4 (4) bytes
enum SE_WS_APPX_SIGNATURE_ORIGIN {

  SE_WS_APPX_SIGNATURE_ORIGIN_NOT_VALIDATED = 0,
  SE_WS_APPX_SIGNATURE_ORIGIN_UNKNOWN = 1,
  SE_WS_APPX_SIGNATURE_ORIGIN_APPSTORE = 2,
  SE_WS_APPX_SIGNATURE_ORIGIN_WINDOWS = 3,
  SE_WS_APPX_SIGNATURE_ORIGIN_ENTERPRISE = 4
};

// 0x4 (4) bytes
enum _KERNEL_STACK_LIMITS {

  BugcheckStackLimits = 0,
  DPCStackLimits = 1,
  ExpandedStackLimits = 2,
  NormalStackLimits = 3,
  Win32kStackLimits = 4,
  SwapBusyStackLimits = 5,
  IsrStackLimits = 6,
  MaximumStackLimits = 7
};

// 0x4 (4) bytes
enum _LDR_DDAG_STATE {

  LdrModulesMerged = -5,
  LdrModulesInitError = -4,
  LdrModulesSnapError = -3,
  LdrModulesUnloaded = -2,
  LdrModulesUnloading = -1,
  LdrModulesPlaceHolder = 0,
  LdrModulesMapping = 1,
  LdrModulesMapped = 2,
  LdrModulesWaitingForDependencies = 3,
  LdrModulesSnapping = 4,
  LdrModulesSnapped = 5,
  LdrModulesCondensed = 6,
  LdrModulesReadyToInit = 7,
  LdrModulesInitializing = 8,
  LdrModulesReadyToRun = 9
};

// 0x4 (4) bytes
enum _LDR_DLL_LOAD_REASON {

  LoadReasonStaticDependency = 0,
  LoadReasonStaticForwarderDependency = 1,
  LoadReasonDynamicForwarderDependency = 2,
  LoadReasonDelayloadDependency = 3,
  LoadReasonDynamicLoad = 4,
  LoadReasonAsImageLoad = 5,
  LoadReasonAsDataLoad = 6,
  LoadReasonUnknown = -1
};

// 0x4 (4) bytes
enum _ETW_NOTIFICATION_TYPE {

  EtwNotificationTypeNoReply = 1,
  EtwNotificationTypeLegacyEnable = 2,
  EtwNotificationTypeEnable = 3,
  EtwNotificationTypePrivateLogger = 4,
  EtwNotificationTypePerflib = 5,
  EtwNotificationTypeAudio = 6,
  EtwNotificationTypeSession = 7,
  EtwNotificationTypeReserved = 8,
  EtwNotificationTypeCredentialUI = 9,
  EtwNotificationTypeInProcSession = 10,
  EtwNotificationTypeMax = 11
};

// 0x4 (4) bytes
enum _PNP_DEVICE_ACTION_REQUEST {

  AssignResources = 0,
  ClearDeviceProblem = 1,
  ClearProblem = 2,
  ClearEjectProblem = 3,
  HaltDevice = 4,
  QueryPowerRelations = 5,
  Rebalance = 6,
  ReenumerateBootDevices = 7,
  ReenumerateDeviceOnly = 8,
  ReenumerateDeviceTree = 9,
  ReenumerateRootDevices = 10,
  RequeryDeviceState = 11,
  ResetDevice = 12,
  ResourceRequirementsChanged = 13,
  RestartEnumeration = 14,
  SetDeviceProblem = 15,
  StartDevice = 16,
  StartSystemDevicesPass0 = 17,
  StartSystemDevicesPass1 = 18,
  NotifyTransportRelationsChange = 19,
  NotifyEjectionRelationsChange = 20,
  ConfigureDevice = 21,
  ConfigureDeviceClass = 22,
  ConfigureDeviceExtensions = 23,
  ConfigureDeviceReset = 24
};

// 0x4 (4) bytes
enum _VI_DEADLOCK_RESOURCE_TYPE {

  VfDeadlockUnknown = 0,
  VfDeadlockMutex = 1,
  VfDeadlockMutexAbandoned = 2,
  VfDeadlockFastMutex = 3,
  VfDeadlockFastMutexUnsafe = 4,
  VfDeadlockSpinLock = 5,
  VfDeadlockInStackQueuedSpinLock = 6,
  VfDeadlockUnusedSpinLock = 7,
  VfDeadlockEresource = 8,
  VfDeadlockTypeMaximum = 9
};

// 0x4 (4) bytes
enum _IO_SESSION_STATE {

  IoSessionStateCreated = 1,
  IoSessionStateInitialized = 2,
  IoSessionStateConnected = 3,
  IoSessionStateDisconnected = 4,
  IoSessionStateDisconnectedLoggedOn = 5,
  IoSessionStateLoggedOn = 6,
  IoSessionStateLoggedOff = 7,
  IoSessionStateTerminated = 8,
  IoSessionStateMax = 9
};

// 0x4 (4) bytes
enum _DUMP_EVENTS {

  DUMP_EVENT_NONE = 0,
  DUMP_EVENT_HIBER_RESUME = 1,
  DUMP_EVENT_HIBER_RESUME_END = 2
};

// 0x4 (4) bytes
enum _POP_IO_STATUS {

  IoReady = 0,
  IoPending = 1,
  IoDone = 2
};

// 0x4 (4) bytes
enum SYSTEM_POWER_CONDITION {

  PoAc = 0,
  PoDc = 1,
  PoHot = 2,
  PoConditionMaximum = 3
};

// 0x4 (4) bytes
enum POWER_POLICY_DEVICE_TYPE {

  PolicyDeviceSystemButton = 0,
  PolicyDeviceThermalZone = 1,
  PolicyDeviceBattery = 2,
  PolicyDeviceMemory = 3,
  PolicyInitiatePowerActionAPI = 4,
  PolicySetPowerStateAPI = 5,
  PolicyImmediateDozeS4 = 6,
  PolicySystemIdle = 7,
  PolicyDeviceWakeAlarm = 8,
  PolicyDeviceFan = 9,
  PolicyCsBatterySaver = 10,
  PolicyImmediateDozeS4Predicted = 11,
  PolicyImmediateDozeS4PredictedNoWake = 12,
  PolicyDeviceMax = 13
};

// 0x4 (4) bytes
enum _ARBITER_RESULT {

  ArbiterResultUndefined = -1,
  ArbiterResultSuccess = 0,
  ArbiterResultExternalConflict = 1,
  ArbiterResultNullRequest = 2
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
enum _REQUESTER_TYPE {

  KernelRequester = 0,
  UserProcessRequester = 1,
  UserSharedServiceRequester = 2
};

// 0x4 (4) bytes
enum _TYPE_OF_MEMORY {

  LoaderExceptionBlock = 0,
  LoaderSystemBlock = 1,
  LoaderFree = 2,
  LoaderBad = 3,
  LoaderLoadedProgram = 4,
  LoaderFirmwareTemporary = 5,
  LoaderFirmwarePermanent = 6,
  LoaderOsloaderHeap = 7,
  LoaderOsloaderStack = 8,
  LoaderSystemCode = 9,
  LoaderHalCode = 10,
  LoaderBootDriver = 11,
  LoaderConsoleInDriver = 12,
  LoaderConsoleOutDriver = 13,
  LoaderStartupDpcStack = 14,
  LoaderStartupKernelStack = 15,
  LoaderStartupPanicStack = 16,
  LoaderStartupPcrPage = 17,
  LoaderStartupPdrPage = 18,
  LoaderRegistryData = 19,
  LoaderMemoryData = 20,
  LoaderNlsData = 21,
  LoaderSpecialMemory = 22,
  LoaderBBTMemory = 23,
  LoaderZero = 24,
  LoaderXIPRom = 25,
  LoaderHALCachedMemory = 26,
  LoaderLargePageFiller = 27,
  LoaderErrorLogMemory = 28,
  LoaderVsmMemory = 29,
  LoaderFirmwareCode = 30,
  LoaderFirmwareData = 31,
  LoaderFirmwareReserved = 32,
  LoaderEnclaveMemory = 33,
  LoaderMaximum = 34
};

// 0x4 (4) bytes
enum _DMA_SPEED {

  Compatible = 0,
  TypeA = 1,
  TypeB = 2,
  TypeC = 3,
  TypeF = 4,
  MaximumDmaSpeed = 5
};

// 0x4 (4) bytes
enum _DMA_WIDTH {

  Width8Bits = 0,
  Width16Bits = 1,
  Width32Bits = 2,
  Width64Bits = 3,
  WidthNoWrap = 4,
  MaximumDmaWidth = 5
};

// 0x4 (4) bytes
enum _RTL_GENERIC_COMPARE_RESULTS {

  GenericLessThan = 0,
  GenericGreaterThan = 1,
  GenericEqual = 2
};

// 0x4 (4) bytes
enum _CM_DIRTY_VECTOR_OPERATION {

  DirtyVectorModified = 0,
  DirtyDataCaptureStart = 1,
  DirtyDataCaptureEnd = 2
};

// 0x4 (4) bytes
enum KTM_STATE {

  KKtmUninitialized = 0,
  KKtmInitialized = 1,
  KKtmRecovering = 2,
  KKtmOnline = 3,
  KKtmRecoveryFailed = 4,
  KKtmOffline = 5
};

// 0x4 (4) bytes
enum _KTRANSACTION_OUTCOME {

  KTxOutcomeUninitialized = 0,
  KTxOutcomeUndetermined = 1,
  KTxOutcomeCommitted = 2,
  KTxOutcomeAborted = 3,
  KTxOutcomeUnavailable = 4
};

// 0x4 (4) bytes
enum _KTRANSACTION_STATE {

  KTransactionUninitialized = 0,
  KTransactionActive = 1,
  KTransactionPreparing = 2,
  KTransactionPrepared = 3,
  KTransactionInDoubt = 4,
  KTransactionCommitted = 5,
  KTransactionAborted = 6,
  KTransactionDelegated = 7,
  KTransactionPrePreparing = 8,
  KTransactionForgotten = 9,
  KTransactionRecovering = 10,
  KTransactionPrePrepared = 11
};

// 0x4 (4) bytes
enum _KRESOURCEMANAGER_STATE {

  KResourceManagerUninitialized = 0,
  KResourceManagerOffline = 1,
  KResourceManagerOnline = 2
};

// 0x4 (4) bytes
enum HSTORAGE_TYPE {

  Stable = 0,
  Volatile = 1,
  InvalidStorage = 2
};

// 0x4 (4) bytes
enum UoWActionType {

  UoWAddThisKey = 0,
  UoWAddChildKey = 1,
  UoWDeleteThisKey = 2,
  UoWDeleteChildKey = 3,
  UoWSetValueNew = 4,
  UoWSetValueExisting = 5,
  UoWDeleteValue = 6,
  UoWSetKeyUserFlags = 7,
  UoWSetLastWriteTime = 8,
  UoWSetSecurityDescriptor = 9,
  UoWRenameSubKey = 10,
  UoWRenameOldSubKey = 11,
  UoWRenameNewSubKey = 12,
  UoWIsolation = 13,
  UoWInvalid = 14
};

// 0x4 (4) bytes
enum _KENLISTMENT_STATE {

  KEnlistmentUninitialized = 0,
  KEnlistmentActive = 256,
  KEnlistmentPreparing = 257,
  KEnlistmentPrepared = 258,
  KEnlistmentInDoubt = 259,
  KEnlistmentCommitted = 260,
  KEnlistmentCommittedNotify = 261,
  KEnlistmentCommitRequested = 262,
  KEnlistmentAborted = 263,
  KEnlistmentDelegated = 264,
  KEnlistmentDelegatedDisconnected = 265,
  KEnlistmentPrePreparing = 266,
  KEnlistmentForgotten = 267,
  KEnlistmentRecovering = 268,
  KEnlistmentAborting = 269,
  KEnlistmentReadOnly = 270,
  KEnlistmentOutcomeUnavailable = 271,
  KEnlistmentOffline = 272,
  KEnlistmentPrePrepared = 273,
  KEnlistmentInitialized = 274
};

// 0x4 (4) bytes
enum HAL_APIC_DESTINATION_MODE {

  ApicDestinationModePhysical = 1,
  ApicDestinationModeLogicalFlat = 2,
  ApicDestinationModeLogicalClustered = 3,
  ApicDestinationModeUnknown = 4
};

// 0x4 (4) bytes
enum INTERRUPT_CONNECTION_TYPE {

  InterruptTypeControllerInput = 0,
  InterruptTypeXapicMessage = 1,
  InterruptTypeHypertransport = 2,
  InterruptTypeMessageRequest = 3
};

// 0x4 (4) bytes
enum _WHEA_ERROR_SOURCE_STATE {

  WheaErrSrcStateStopped = 1,
  WheaErrSrcStateStarted = 2
};

// 0x4 (4) bytes
enum _KPROFILE_SOURCE {

  ProfileTime = 0,
  ProfileAlignmentFixup = 1,
  ProfileTotalIssues = 2,
  ProfilePipelineDry = 3,
  ProfileLoadInstructions = 4,
  ProfilePipelineFrozen = 5,
  ProfileBranchInstructions = 6,
  ProfileTotalNonissues = 7,
  ProfileDcacheMisses = 8,
  ProfileIcacheMisses = 9,
  ProfileCacheMisses = 10,
  ProfileBranchMispredictions = 11,
  ProfileStoreInstructions = 12,
  ProfileFpInstructions = 13,
  ProfileIntegerInstructions = 14,
  Profile2Issue = 15,
  Profile3Issue = 16,
  Profile4Issue = 17,
  ProfileSpecialInstructions = 18,
  ProfileTotalCycles = 19,
  ProfileIcacheIssues = 20,
  ProfileDcacheAccesses = 21,
  ProfileMemoryBarrierCycles = 22,
  ProfileLoadLinkedIssues = 23,
  ProfileMaximum = 24
};

// 0x4 (4) bytes
enum _TOKEN_TYPE {

  TokenPrimary = 1,
  TokenImpersonation = 2
};

// 0x4 (4) bytes
enum _ETW_BUFFER_STATE {

  EtwBufferStateFree = 0,
  EtwBufferStateGeneralLogging = 1,
  EtwBufferStateCSwitch = 2,
  EtwBufferStateFlush = 3,
  EtwBufferStateMaximum = 4
};

// 0x4 (4) bytes
enum _ETW_RT_EVENT_LOSS {

  EtwRtEventNoLoss = 0,
  EtwRtEventLost = 1,
  EtwRtBufferLost = 2,
  EtwRtBackupLost = 3,
  EtwRtEventLossMax = 4
};

// 0x4 (4) bytes
enum _CREATE_FILE_TYPE {

  CreateFileTypeNone = 0,
  CreateFileTypeNamedPipe = 1,
  CreateFileTypeMailslot = 2
};

// 0x4 (4) bytes
enum _IOP_PRIORITY_HINT {

  IopIoPriorityNotSet = 0,
  IopIoPriorityVeryLow = 1,
  IopIoPriorityLow = 2,
  IopIoPriorityNormal = 3,
  IopIoPriorityHigh = 4,
  IopIoPriorityCritical = 5,
  MaxIopIoPriorityTypes = 6
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
enum _BLOB_ID {

  BLOB_TYPE_UNKNOWN = 0,
  BLOB_TYPE_CONNECTION_INFO = 1,
  BLOB_TYPE_MESSAGE = 2,
  BLOB_TYPE_SECURITY_CONTEXT = 3,
  BLOB_TYPE_SECTION = 4,
  BLOB_TYPE_REGION = 5,
  BLOB_TYPE_VIEW = 6,
  BLOB_TYPE_RESERVE = 7,
  BLOB_TYPE_DIRECT_TRANSFER = 8,
  BLOB_TYPE_HANDLE_DATA = 9,
  BLOB_TYPE_MAX_ID = 10
};

// 0x4 (4) bytes
enum _GPIO_PIN_IORESTRICTION_TYPE {

  IoRestrictionNone = 0,
  IoRestrictionInputOnly = 1,
  IoRestrictionOutputOnly = 2,
  IoRestrictionNoneAndPreserve = 3
};

// 0x4 (4) bytes
enum _GPIO_PIN_CONFIG_TYPE {

  PullDefault = 0,
  PullUp = 1,
  PullDown = 2,
  PullNone = 3
};

// 0x4 (4) bytes
enum _KINTERRUPT_POLARITY {

  InterruptPolarityUnknown = 0,
  InterruptActiveHigh = 1,
  InterruptRisingEdge = 1,
  InterruptActiveLow = 2,
  InterruptFallingEdge = 2,
  InterruptActiveBoth = 3,
  InterruptActiveBothTriggerLow = 3,
  InterruptActiveBothTriggerHigh = 4
};

// 0x4 (4) bytes
enum _KINTERRUPT_MODE {

  LevelSensitive = 0,
  Latched = 1
};

// 0x4 (4) bytes
enum _PEP_ACPI_RESOURCE_TYPE {

  PepAcpiMemory = 0,
  PepAcpiIoPort = 1,
  PepAcpiInterrupt = 2,
  PepAcpiGpioIo = 3,
  PepAcpiGpioInt = 4,
  PepAcpiSpbI2c = 5,
  PepAcpiSpbSpi = 6,
  PepAcpiSpbUart = 7,
  PepAcpiExtendedMemory = 8,
  PepAcpiExtendedIo = 9
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
enum _PO_FX_PERF_STATE_TYPE {

  PoFxPerfStateTypeDiscrete = 0,
  PoFxPerfStateTypeRange = 1,
  PoFxPerfStateTypeMaximum = 2
};

// 0x4 (4) bytes
enum _PO_FX_PERF_STATE_UNIT {

  PoFxPerfStateUnitOther = 0,
  PoFxPerfStateUnitFrequency = 1,
  PoFxPerfStateUnitBandwidth = 2,
  PoFxPerfStateUnitMaximum = 3
};

// 0x4 (4) bytes
enum PROFILE_DEPARTURE_STYLE {

  PDS_UPDATE_DEFAULT = 1,
  PDS_UPDATE_ON_REMOVE = 2,
  PDS_UPDATE_ON_INTERFACE = 3,
  PDS_UPDATE_ON_EJECT = 4
};

// 0x4 (4) bytes
enum _PLUGPLAY_EVENT_CATEGORY {

  HardwareProfileChangeEvent = 0,
  TargetDeviceChangeEvent = 1,
  DeviceClassChangeEvent = 2,
  CustomDeviceEvent = 3,
  DeviceInstallEvent = 4,
  DeviceArrivalEvent = 5,
  VetoEvent = 6,
  BlockedDriverEvent = 7,
  InvalidIDEvent = 8,
  DevicePropertyChangeEvent = 9,
  DeviceInstanceRemovalEvent = 10,
  DeviceInstanceStartedEvent = 11,
  MaxPlugEventCategory = 12
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
struct PEPHANDLE__ {
  LONG unused; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _PEP_CRASHDUMP_INFORMATION {
  struct PEPHANDLE__ *DeviceHandle; // offset: 0x0 (0)
  VOID *DeviceContext;              // offset: 0x8 (8)
};

// 0x4 (4) bytes
enum _PNP_DEVICE_DELETE_TYPE {

  QueryRemoveDevice = 0,
  CancelRemoveDevice = 1,
  RemoveDevice = 2,
  SurpriseRemoveDevice = 3,
  EjectDevice = 4,
  RemoveFailedDevice = 5,
  RemoveUnstartedFailedDevice = 6,
  MaxDeviceDeleteType = 7
};

// 0x4 (4) bytes
enum IRPLOCK {

  IRPLOCK_CANCELABLE = 0,
  IRPLOCK_CANCEL_STARTED = 1,
  IRPLOCK_CANCEL_COMPLETE = 2,
  IRPLOCK_COMPLETED = 3
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
enum _PCW_CALLBACK_TYPE {

  PcwCallbackAddCounter = 0,
  PcwCallbackRemoveCounter = 1,
  PcwCallbackEnumerateInstances = 2,
  PcwCallbackCollectData = 3
};

// 0x4 (4) bytes
enum _CM_LOAD_FAILURE_TYPE {

  _None = 0,
  _CmInitializeHive = 1,
  _HvInitializeHive = 2,
  _HvpBuildMap = 3,
  _HvpBuildMapForLoaderHive = 4,
  _HvpInitMap = 5,
  _HvLoadHive = 6,
  _HvpMapHiveImage = 7,
  _HvpRecoverData = 8,
  _CmpValidateHiveSecurityDescriptors = 9,
  _HvpEnlistBinInMap = 10,
  _CmCheckRegistry = 11,
  _CmRegistryIO = 12,
  _CmCheckRegistry2 = 13,
  _CmpCheckKey = 14,
  _CmpCheckValueList = 15,
  _HvCheckHive = 16,
  _HvCheckBin = 17,
  _HvpGetLogEntryDirtyVector = 18,
  _HvpReadLogEntryHeader = 19,
  _HvpReadLogEntry = 20,
  _CmpMountPreloadedHives = 21,
  _CmpLoadHiveThread = 22
};

// 0x4 (4) bytes
enum _MI_SYSTEM_VA_TYPE {

  MiVaUnused = 0,
  MiVaSessionSpace = 1,
  MiVaProcessSpace = 2,
  MiVaBootLoaded = 3,
  MiVaPfnDatabase = 4,
  MiVaNonPagedPool = 5,
  MiVaPagedPool = 6,
  MiVaSpecialPoolPaged = 7,
  MiVaSystemCache = 8,
  MiVaSystemPtes = 9,
  MiVaHal = 10,
  MiVaSessionGlobalSpace = 11,
  MiVaDriverImages = 12,
  MiVaSpecialPoolNonPaged = 13,
  MiVaMaximumType = 14,
  MiVaSystemPtesLarge = 15
};

// 0x30 (48) bytes
struct _iobuf {
  CHAR *_ptr;      // offset: 0x0 (0)
  LONG _cnt;       // offset: 0x8 (8)
  CHAR *_base;     // offset: 0x10 (16)
  LONG _flag;      // offset: 0x18 (24)
  LONG _file;      // offset: 0x1c (28)
  LONG _charbuf;   // offset: 0x20 (32)
  LONG _bufsiz;    // offset: 0x24 (36)
  CHAR *_tmpfname; // offset: 0x28 (40)
};

// 0x4 (4) bytes
enum _WHEA_ERROR_PACKET_DATA_FORMAT {

  WheaDataFormatIPFSalRecord = 0,
  WheaDataFormatXPFMCA = 1,
  WheaDataFormatMemory = 2,
  WheaDataFormatPCIExpress = 3,
  WheaDataFormatNMIPort = 4,
  WheaDataFormatPCIXBus = 5,
  WheaDataFormatPCIXDevice = 6,
  WheaDataFormatGeneric = 7,
  WheaDataFormatMax = 8
};

// 0x4 (4) bytes
enum _WHEA_ERROR_SOURCE_TYPE {

  WheaErrSrcTypeMCE = 0,
  WheaErrSrcTypeCMC = 1,
  WheaErrSrcTypeCPE = 2,
  WheaErrSrcTypeNMI = 3,
  WheaErrSrcTypePCIe = 4,
  WheaErrSrcTypeGeneric = 5,
  WheaErrSrcTypeINIT = 6,
  WheaErrSrcTypeBOOT = 7,
  WheaErrSrcTypeSCIGeneric = 8,
  WheaErrSrcTypeIPFMCA = 9,
  WheaErrSrcTypeIPFCMC = 10,
  WheaErrSrcTypeIPFCPE = 11,
  WheaErrSrcTypeMax = 12
};

// 0x4 (4) bytes
enum _WHEA_ERROR_SEVERITY {

  WheaErrSevRecoverable = 0,
  WheaErrSevFatal = 1,
  WheaErrSevCorrected = 2,
  WheaErrSevInformational = 3
};

// 0x4 (4) bytes
enum _WHEA_ERROR_TYPE {

  WheaErrTypeProcessor = 0,
  WheaErrTypeMemory = 1,
  WheaErrTypePCIExpress = 2,
  WheaErrTypeNMI = 3,
  WheaErrTypePCIXBus = 4,
  WheaErrTypePCIXDevice = 5,
  WheaErrTypeGeneric = 6
};

// 0x4 (4) bytes
enum _MM_PAGE_ACCESS_TYPE {

  MmPteAccessType = 0,
  MmCcReadAheadType = 1,
  MmPfnRepurposeType = 2,
  MmMaximumPageAccessType = 3
};

// 0x4 (4) bytes
enum _IO_PRIORITY_HINT {

  IoPriorityVeryLow = 0,
  IoPriorityLow = 1,
  IoPriorityNormal = 2,
  IoPriorityHigh = 3,
  IoPriorityCritical = 4,
  MaxIoPriorityTypes = 5
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
enum _IRQ_PRIORITY {

  IrqPriorityUndefined = 0,
  IrqPriorityLow = 1,
  IrqPriorityNormal = 2,
  IrqPriorityHigh = 3
};

// 0x4 (4) bytes
enum _SECURITY_IMPERSONATION_LEVEL {

  SecurityAnonymous = 0,
  SecurityIdentification = 1,
  SecurityImpersonation = 2,
  SecurityDelegation = 3
};

// 0x20 (32) bytes
struct _SECURITY_SUBJECT_CONTEXT {
  VOID *ClientToken;                                     // offset: 0x0 (0)
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // offset: 0x8 (8)
  VOID *PrimaryToken;                                    // offset: 0x10 (16)
  VOID *ProcessAuditId;                                  // offset: 0x18 (24)
};

// 0x4 (4) bytes
enum _FUNCTION_TABLE_TYPE {

  RF_SORTED = 0,
  RF_UNSORTED = 1,
  RF_CALLBACK = 2,
  RF_KERNEL_DYNAMIC = 3
};

// 0x4 (4) bytes
enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE {

  NotifyTypeCreate = 0,
  NotifyTypeRetired = 1
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
  Vmcs = 16,
  ACPIBus = 17,
  MaximumInterfaceType = 18
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
  PowerActionWarmEject = 7,
  PowerActionDisplayOff = 8
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
  DeviceUsageTypeDumpFile = 3,
  DeviceUsageTypeBoot = 4,
  DeviceUsageTypePostDisplay = 5
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
  BusQueryDeviceSerialNumber = 4,
  BusQueryContainerID = 5
};

// 0x4 (4) bytes
enum _DEVICE_RELATION_TYPE {

  BusRelations = 0,
  EjectionRelations = 1,
  PowerRelations = 2,
  RemovalRelations = 3,
  TargetDeviceRelation = 4,
  SingleBusRelations = 5,
  TransportRelations = 6
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
  FileFsVolumeFlagsInformation = 10,
  FileFsSectorSizeInformation = 11,
  FileFsDataCopyInformation = 12,
  FileFsMetadataSizeInformation = 13,
  FileFsMaximumInformation = 14
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
  FileIoStatusBlockRangeInformation = 42,
  FileIoPriorityHintInformation = 43,
  FileSfioReserveInformation = 44,
  FileSfioVolumeInformation = 45,
  FileHardLinkInformation = 46,
  FileProcessIdsUsingFileInformation = 47,
  FileNormalizedNameInformation = 48,
  FileNetworkPhysicalNameInformation = 49,
  FileIdGlobalTxDirectoryInformation = 50,
  FileIsRemoteDeviceInformation = 51,
  FileUnusedInformation = 52,
  FileNumaNodeInformation = 53,
  FileStandardLinkInformation = 54,
  FileRemoteProtocolInformation = 55,
  FileRenameInformationBypassAccessCheck = 56,
  FileLinkInformationBypassAccessCheck = 57,
  FileVolumeNameInformation = 58,
  FileIdInformation = 59,
  FileIdExtdDirectoryInformation = 60,
  FileReplaceCompletionInformation = 61,
  FileHardLinkFullIdInformation = 62,
  FileIdExtdBothDirectoryInformation = 63,
  FileMaximumInformation = 64
};

// 0x4 (4) bytes
union _POWER_STATE {
  enum _SYSTEM_POWER_STATE SystemState; // offset: 0x0 (0)
  enum _DEVICE_POWER_STATE DeviceState; // offset: 0x0 (0)
};

// 0x4 (4) bytes
enum _POP_DEVICE_IDLE_TYPE {

  DeviceIdleNormal = 0,
  DeviceIdleDisk = 1
};

// 0x4 (4) bytes
enum _IO_ALLOCATION_ACTION {

  KeepObject = 1,
  DeallocateObject = 2,
  DeallocateObjectKeepRegisters = 3
};

// 0x4 (4) bytes
enum _EXQUEUEINDEX {

  ExPoolUntrusted = 0,
  ExPoolTrusted = 1,
  ExPoolMax = 8
};

// 0x4 (4) bytes
enum _HARDWARE_COUNTER_TYPE {

  PMCCounter = 0,
  MaxHardwareCounterType = 1
};

// 0x4 (4) bytes
enum PPM_IDLE_BUCKET_TIME_TYPE {

  PpmIdleBucketTimeInQpc = 0,
  PpmIdleBucketTimeIn100ns = 1,
  PpmIdleBucketTimeMaximum = 2
};

// 0x4 (4) bytes
enum _PROCESSOR_CACHE_TYPE {

  CacheUnified = 0,
  CacheInstruction = 1,
  CacheData = 2,
  CacheTrace = 3
};

// 0x4 (4) bytes
enum _POOL_TYPE {

  NonPagedPool = 0,
  NonPagedPoolExecute = 0,
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolBase = 0,
  NonPagedPoolBaseMustSucceed = 2,
  NonPagedPoolBaseCacheAligned = 4,
  NonPagedPoolBaseCacheAlignedMustS = 6,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38,
  NonPagedPoolNx = 512,
  NonPagedPoolNxCacheAligned = 516,
  NonPagedPoolSessionNx = 544
};

// 0x4 (4) bytes
enum _PROC_HYPERVISOR_STATE {

  ProcHypervisorNone = 0,
  ProcHypervisorPresent = 1,
  ProcHypervisorPower = 2,
  ProcHypervisorHvCounters = 3
};

// 0x4 (4) bytes
enum _EXCEPTION_DISPOSITION {

  ExceptionContinueExecution = 0,
  ExceptionContinueSearch = 1,
  ExceptionNestedException = 2,
  ExceptionCollidedUnwind = 3
};

// 0x4 (4) bytes
enum _TP_CALLBACK_PRIORITY {

  TP_CALLBACK_PRIORITY_HIGH = 0,
  TP_CALLBACK_PRIORITY_NORMAL = 1,
  TP_CALLBACK_PRIORITY_LOW = 2,
  TP_CALLBACK_PRIORITY_INVALID = 3,
  TP_CALLBACK_PRIORITY_COUNT = 3
};

typedef uint16_t WCHAR;

// 0x8 (8) bytes
struct _QUAD {
  union {
    LONGLONG UseThisFieldToCopy; // offset: 0x0 (0)
    double DoNotUseThisField;    // offset: 0x0 (0)
  };
};

// 0x4 (4) bytes
enum _ALTERNATIVE_ARCHITECTURE_TYPE {

  StandardDesign = 0,
  NEC98x86 = 1,
  EndAlternatives = 2
};

// 0x18 (24) bytes
struct _HIVE_WRITE_WAIT_QUEUE {
  struct _ETHREAD *ActiveThread;      // offset: 0x0 (0)
  struct _HIVE_WAIT_PACKET *WaitList; // offset: 0x8 (8)
  volatile ULONG OwnerBoosted;        // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _VF_TRACKER_STAMP {
  VOID *Thread;        // offset: 0x0 (0)
  UCHAR Flags : 8;     // offset: 0x8 (8)
  UCHAR OldIrql : 8;   // offset: 0x9 (9)
  UCHAR NewIrql : 8;   // offset: 0xa (10)
  UCHAR Processor : 8; // offset: 0xb (11)
};

// 0x1 (1) bytes
union _XPF_MC_BANK_FLAGS {
  UCHAR ClearOnInitializationRW : 1; // offset: 0x0 (0)
  UCHAR ControlDataRW : 1;           // offset: 0x0 (0)
  UCHAR Reserved : 6;                // offset: 0x0 (0)
  UCHAR AsUCHAR;                     // offset: 0x0 (0)
};

// 0x1e (30) bytes
struct _TOKEN_AUDIT_POLICY {
  UCHAR PerUserPolicy[30]; // offset: 0x0 (0)
};

// 0x1f (31) bytes
struct _SEP_AUDIT_POLICY {
  struct _TOKEN_AUDIT_POLICY AdtTokenPolicy; // offset: 0x0 (0)
  UCHAR PolicySetStatus;                     // offset: 0x1e (30)
};

// 0x1 (1) bytes
struct _ETW_LOGGER_HANDLE {
  UCHAR DereferenceAndLeave; // offset: 0x0 (0)
};

// 0x20 (32) bytes
struct _CACHE_MANAGER_CALLBACKS {
  UCHAR (*AcquireForLazyWrite)(VOID *arg1, UCHAR arg2); // offset: 0x0 (0)
  VOID (*ReleaseFromLazyWrite)(VOID *arg1);             // offset: 0x8 (8)
  UCHAR (*AcquireForReadAhead)(VOID *arg1, UCHAR arg2); // offset: 0x10 (16)
  VOID (*ReleaseFromReadAhead)(VOID *arg1);             // offset: 0x18 (24)
};

// 0x10 (16) bytes
struct _VF_ADDRESS_RANGE {
  UCHAR *Start; // offset: 0x0 (0)
  UCHAR *End;   // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _RELATION_LIST {
  struct _DEVICE_OBJECT_LIST *DeviceObjectList; // offset: 0x0 (0)
  UCHAR Sorted;                                 // offset: 0x8 (8)
};

// 0x1 (1) bytes
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS {
  UCHAR FRUId : 1;    // offset: 0x0 (0)
  UCHAR FRUText : 1;  // offset: 0x0 (0)
  UCHAR Reserved : 6; // offset: 0x0 (0)
  UCHAR AsUCHAR;      // offset: 0x0 (0)
};

// 0x2 (2) bytes
struct _MI_REBUILD_LARGE_PAGE_COUNTDOWN {
  UCHAR SecondsLeft;     // offset: 0x0 (0)
  UCHAR SecondsAssigned; // offset: 0x1 (1)
};

// 0x4 (4) bytes
struct _MMPAGE_FILE_EXPANSION_FLAGS {
  UCHAR PageFileNumber : 8;      // offset: 0x0 (0)
  UCHAR Spare1 : 8;              // offset: 0x1 (1)
  UCHAR Spare2 : 8;              // offset: 0x2 (2)
  UCHAR IgnoreCurrentCommit : 1; // offset: 0x3 (3)
  UCHAR IncreaseMinimumSize : 1; // offset: 0x3 (3)
  UCHAR Spare3 : 6;              // offset: 0x3 (3)
};

// 0x2 (2) bytes
struct _MMPFNENTRY {
  UCHAR PageLocation : 3;       // offset: 0x0 (0)
  UCHAR WriteInProgress : 1;    // offset: 0x0 (0)
  UCHAR Modified : 1;           // offset: 0x0 (0)
  UCHAR ReadInProgress : 1;     // offset: 0x0 (0)
  UCHAR CacheAttribute : 2;     // offset: 0x0 (0)
  UCHAR Priority : 3;           // offset: 0x1 (1)
  UCHAR OnProtectedStandby : 1; // offset: 0x1 (1)
  UCHAR InPageError : 1;        // offset: 0x1 (1)
  UCHAR SystemChargedPage : 1;  // offset: 0x1 (1)
  UCHAR RemovalRequested : 1;   // offset: 0x1 (1)
  UCHAR ParityError : 1;        // offset: 0x1 (1)
};

// 0x4 (4) bytes
struct _MMINPAGE_FLAGS {
  UCHAR InjectRetry : 1;             // offset: 0x0 (0)
  UCHAR GetExtents : 1;              // offset: 0x0 (0)
  UCHAR CrossThreadPadding : 6;      // offset: 0x0 (0)
  UCHAR PrefetchSystemVmType : 2;    // offset: 0x1 (1)
  UCHAR VaPrefetchReadBlock : 1;     // offset: 0x1 (1)
  UCHAR CollidedFlowThrough : 1;     // offset: 0x1 (1)
  UCHAR ForceCollisions : 1;         // offset: 0x1 (1)
  UCHAR InPageExpanded : 1;          // offset: 0x1 (1)
  UCHAR IssuedAtLowPriority : 1;     // offset: 0x1 (1)
  UCHAR FaultFromStore : 1;          // offset: 0x1 (1)
  UCHAR PagePriority : 3;            // offset: 0x2 (2)
  UCHAR PerformRelocations : 1;      // offset: 0x2 (2)
  UCHAR ClusteredPagePriority : 3;   // offset: 0x2 (2)
  UCHAR MakeClusterValid : 1;        // offset: 0x2 (2)
  UCHAR ZeroLastPage : 1;            // offset: 0x3 (3)
  UCHAR UserFault : 1;               // offset: 0x3 (3)
  UCHAR StandbyProtectionNeeded : 1; // offset: 0x3 (3)
  UCHAR PteChanged : 1;              // offset: 0x3 (3)
  UCHAR PageFileFault : 1;           // offset: 0x3 (3)
  UCHAR PageFilePageHashActive : 1;  // offset: 0x3 (3)
  UCHAR CoalescedIo : 1;             // offset: 0x3 (3)
  UCHAR VmLockNotNeeded : 1;         // offset: 0x3 (3)
};

// 0x4 (4) bytes
struct _MMSUPPORT_FLAGS {
  UCHAR WorkingSetType : 3;        // offset: 0x0 (0)
  UCHAR Reserved0 : 3;             // offset: 0x0 (0)
  UCHAR MaximumWorkingSetHard : 1; // offset: 0x0 (0)
  UCHAR MinimumWorkingSetHard : 1; // offset: 0x0 (0)
  UCHAR SessionMaster : 1;         // offset: 0x1 (1)
  UCHAR TrimmerState : 2;          // offset: 0x1 (1)
  UCHAR Reserved : 1;              // offset: 0x1 (1)
  UCHAR PageStealers : 4;          // offset: 0x1 (1)
  UCHAR MemoryPriority;            // offset: 0x2 (2)
  UCHAR WsleDeleted : 1;           // offset: 0x3 (3)
  UCHAR VmExiting : 1;             // offset: 0x3 (3)
  UCHAR ExpansionFailed : 1;       // offset: 0x3 (3)
  UCHAR SvmEnabled : 1;            // offset: 0x3 (3)
  UCHAR ForceAge : 1;              // offset: 0x3 (3)
  UCHAR NewMaximum : 1;            // offset: 0x3 (3)
  UCHAR CommitReleaseState : 2;    // offset: 0x3 (3)
};

// 0x1 (1) bytes
struct _PS_PROTECTION {
  union {
    UCHAR Level; // offset: 0x0 (0)
    struct {
      UCHAR Type : 3;   // offset: 0x0 (0)
      UCHAR Audit : 1;  // offset: 0x0 (0)
      UCHAR Signer : 4; // offset: 0x0 (0)
    };
  };
};

// 0x1 (1) bytes
union _PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS {
  UCHAR Trustlet : 1;    // offset: 0x0 (0)
  UCHAR Ntos : 1;        // offset: 0x0 (0)
  UCHAR WriteHandle : 1; // offset: 0x0 (0)
  UCHAR ReadHandle : 1;  // offset: 0x0 (0)
  UCHAR Reserved : 4;    // offset: 0x0 (0)
  UCHAR AccessRights;    // offset: 0x0 (0)
};

// 0x1 (1) bytes
union _KEXECUTE_OPTIONS {
  UCHAR ExecuteDisable : 1;                  // offset: 0x0 (0)
  UCHAR ExecuteEnable : 1;                   // offset: 0x0 (0)
  UCHAR DisableThunkEmulation : 1;           // offset: 0x0 (0)
  UCHAR Permanent : 1;                       // offset: 0x0 (0)
  UCHAR ExecuteDispatchEnable : 1;           // offset: 0x0 (0)
  UCHAR ImageDispatchEnable : 1;             // offset: 0x0 (0)
  UCHAR DisableExceptionChainValidation : 1; // offset: 0x0 (0)
  UCHAR Spare : 1;                           // offset: 0x0 (0)
  volatile UCHAR ExecuteOptions;             // offset: 0x0 (0)
  UCHAR ExecuteOptionsNV;                    // offset: 0x0 (0)
};

// 0x2 (2) bytes
struct _PROC_PERF_LOAD {
  UCHAR BusyPercentage;      // offset: 0x0 (0)
  UCHAR FrequencyPercentage; // offset: 0x1 (1)
};

// 0x1 (1) bytes
struct _flags {
  UCHAR Removable : 1;            // offset: 0x0 (0)
  UCHAR GroupAssigned : 1;        // offset: 0x0 (0)
  UCHAR GroupCommitted : 1;       // offset: 0x0 (0)
  UCHAR GroupAssignmentFixed : 1; // offset: 0x0 (0)
  UCHAR Fill : 4;                 // offset: 0x0 (0)
};

// 0x1 (1) bytes
union _KWAIT_STATUS_REGISTER {
  UCHAR Flags;        // offset: 0x0 (0)
  UCHAR State : 3;    // offset: 0x0 (0)
  UCHAR Affinity : 1; // offset: 0x0 (0)
  UCHAR Priority : 1; // offset: 0x0 (0)
  UCHAR Apc : 1;      // offset: 0x0 (0)
  UCHAR UserApc : 1;  // offset: 0x0 (0)
  UCHAR Alert : 1;    // offset: 0x0 (0)
};

// 0x6 (6) bytes
struct _PROC_IDLE_POLICY {
  UCHAR PromotePercent;     // offset: 0x0 (0)
  UCHAR DemotePercent;      // offset: 0x1 (1)
  UCHAR PromotePercentBase; // offset: 0x2 (2)
  UCHAR DemotePercentBase;  // offset: 0x3 (3)
  UCHAR AllowScaling;       // offset: 0x4 (4)
  UCHAR ForceLightIdle;     // offset: 0x5 (5)
};

// 0x6 (6) bytes
struct _SID_IDENTIFIER_AUTHORITY {
  UCHAR Value[6]; // offset: 0x0 (0)
};

// 0x20 (32) bytes
struct _RTL_BALANCED_LINKS {
  struct _RTL_BALANCED_LINKS *Parent;     // offset: 0x0 (0)
  struct _RTL_BALANCED_LINKS *LeftChild;  // offset: 0x8 (8)
  struct _RTL_BALANCED_LINKS *RightChild; // offset: 0x10 (16)
  CHAR Balance;                           // offset: 0x18 (24)
  UCHAR Reserved[3];                      // offset: 0x19 (25)
};

// 0x28 (40) bytes
struct _KTMOBJECT_NAMESPACE_LINK {
  struct _RTL_BALANCED_LINKS Links; // offset: 0x0 (0)
  UCHAR Expired;                    // offset: 0x20 (32)
};

// 0x4 (4) bytes
enum _NT_PRODUCT_TYPE {

  NtProductWinNt = 1,
  NtProductLanManNt = 2,
  NtProductServer = 3
};

// 0x28 (40) bytes
struct _MI_QUEUED_DEADSTACK_WORKITEM {
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x0 (0)
  volatile LONG Active;             // offset: 0x20 (32)
};

// 0x10 (16) bytes
struct _MI_COMBINE_PAGE_LISTHEAD {
  struct _RTL_AVL_TREE Table; // offset: 0x0 (0)
  volatile LONG Lock;         // offset: 0x8 (8)
};

// 0x8088 (32904) bytes
struct _STACK_TABLE {
  USHORT NumStackTraces;                    // offset: 0x0 (0)
  USHORT TraceCapacity;                     // offset: 0x2 (2)
  struct _OBJECT_REF_TRACE *StackTrace[16]; // offset: 0x8 (8)
  USHORT StackTableHash[16381];             // offset: 0x88 (136)
};

// 0x4 (4) bytes
struct _HEAP_FREE_ENTRY_EXTRA {
  USHORT TagIndex;           // offset: 0x0 (0)
  USHORT FreeBackTraceIndex; // offset: 0x2 (2)
};

// 0x2 (2) bytes
union _WHEA_NOTIFICATION_FLAGS {
  USHORT PollIntervalRW : 1;             // offset: 0x0 (0)
  USHORT SwitchToPollingThresholdRW : 1; // offset: 0x0 (0)
  USHORT SwitchToPollingWindowRW : 1;    // offset: 0x0 (0)
  USHORT ErrorThresholdRW : 1;           // offset: 0x0 (0)
  USHORT ErrorThresholdWindowRW : 1;     // offset: 0x0 (0)
  USHORT Reserved : 11;                  // offset: 0x0 (0)
  USHORT AsUSHORT;                       // offset: 0x0 (0)
};

// 0x2 (2) bytes
union _AER_BRIDGE_DESCRIPTOR_FLAGS {
  USHORT UncorrectableErrorMaskRW : 1;          // offset: 0x0 (0)
  USHORT UncorrectableErrorSeverityRW : 1;      // offset: 0x0 (0)
  USHORT CorrectableErrorMaskRW : 1;            // offset: 0x0 (0)
  USHORT AdvancedCapsAndControlRW : 1;          // offset: 0x0 (0)
  USHORT SecondaryUncorrectableErrorMaskRW : 1; // offset: 0x0 (0)
  USHORT SecondaryUncorrectableErrorSevRW : 1;  // offset: 0x0 (0)
  USHORT SecondaryCapsAndControlRW : 1;         // offset: 0x0 (0)
  USHORT Reserved : 9;                          // offset: 0x0 (0)
  USHORT AsUSHORT;                              // offset: 0x0 (0)
};

// 0x2 (2) bytes
union _AER_ENDPOINT_DESCRIPTOR_FLAGS {
  USHORT UncorrectableErrorMaskRW : 1;     // offset: 0x0 (0)
  USHORT UncorrectableErrorSeverityRW : 1; // offset: 0x0 (0)
  USHORT CorrectableErrorMaskRW : 1;       // offset: 0x0 (0)
  USHORT AdvancedCapsAndControlRW : 1;     // offset: 0x0 (0)
  USHORT Reserved : 12;                    // offset: 0x0 (0)
  USHORT AsUSHORT;                         // offset: 0x0 (0)
};

// 0x2 (2) bytes
union _AER_ROOTPORT_DESCRIPTOR_FLAGS {
  USHORT UncorrectableErrorMaskRW : 1;     // offset: 0x0 (0)
  USHORT UncorrectableErrorSeverityRW : 1; // offset: 0x0 (0)
  USHORT CorrectableErrorMaskRW : 1;       // offset: 0x0 (0)
  USHORT AdvancedCapsAndControlRW : 1;     // offset: 0x0 (0)
  USHORT RootErrorCommandRW : 1;           // offset: 0x0 (0)
  USHORT Reserved : 11;                    // offset: 0x0 (0)
  USHORT AsUSHORT;                         // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _WHEA_IPF_CPE_DESCRIPTOR {
  USHORT Type;    // offset: 0x0 (0)
  UCHAR Enabled;  // offset: 0x2 (2)
  UCHAR Reserved; // offset: 0x3 (3)
};

// 0x4 (4) bytes
struct _WHEA_IPF_CMC_DESCRIPTOR {
  USHORT Type;    // offset: 0x0 (0)
  UCHAR Enabled;  // offset: 0x2 (2)
  UCHAR Reserved; // offset: 0x3 (3)
};

// 0x4 (4) bytes
struct _WHEA_IPF_MCA_DESCRIPTOR {
  USHORT Type;    // offset: 0x0 (0)
  UCHAR Enabled;  // offset: 0x2 (2)
  UCHAR Reserved; // offset: 0x3 (3)
};

// 0x3 (3) bytes
struct _WHEA_XPF_NMI_DESCRIPTOR {
  USHORT Type;   // offset: 0x0 (0)
  UCHAR Enabled; // offset: 0x2 (2)
};

// 0x20 (32) bytes
struct _OBJECT_HEADER_CREATOR_INFO {
  struct _LIST_ENTRY TypeList;  // offset: 0x0 (0)
  VOID *CreatorUniqueProcess;   // offset: 0x10 (16)
  USHORT CreatorBackTraceIndex; // offset: 0x18 (24)
  USHORT Reserved;              // offset: 0x1a (26)
};

// 0x8 (8) bytes
struct _ACL {
  UCHAR AclRevision; // offset: 0x0 (0)
  UCHAR Sbz1;        // offset: 0x1 (1)
  USHORT AclSize;    // offset: 0x2 (2)
  USHORT AceCount;   // offset: 0x4 (4)
  USHORT Sbz2;       // offset: 0x6 (6)
};

// 0x28 (40) bytes
struct _SECURITY_DESCRIPTOR {
  UCHAR Revision;    // offset: 0x0 (0)
  UCHAR Sbz1;        // offset: 0x1 (1)
  USHORT Control;    // offset: 0x2 (2)
  VOID *Owner;       // offset: 0x8 (8)
  VOID *Group;       // offset: 0x10 (16)
  struct _ACL *Sacl; // offset: 0x18 (24)
  struct _ACL *Dacl; // offset: 0x20 (32)
};

// 0x10 (16) bytes
struct _ETW_SYSTEMTIME {
  USHORT Year;         // offset: 0x0 (0)
  USHORT Month;        // offset: 0x2 (2)
  USHORT DayOfWeek;    // offset: 0x4 (4)
  USHORT Day;          // offset: 0x6 (6)
  USHORT Hour;         // offset: 0x8 (8)
  USHORT Minute;       // offset: 0xa (10)
  USHORT Second;       // offset: 0xc (12)
  USHORT Milliseconds; // offset: 0xe (14)
};

// 0x10 (16) bytes
struct _IO_IRP_EXT_TRACK_OFFSET_HEADER {
  USHORT Validation; // offset: 0x0 (0)
  USHORT Flags;      // offset: 0x2 (2)
  VOID(*TrackedOffsetCallback)
  (struct _IO_IRP_EXT_TRACK_OFFSET_HEADER *arg1,
   struct _IO_IRP_EXT_TRACK_OFFSET_HEADER *arg2,
   LONGLONG arg3); // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _PCW_COUNTER_DESCRIPTOR {
  USHORT Id;          // offset: 0x0 (0)
  USHORT StructIndex; // offset: 0x2 (2)
  USHORT Offset;      // offset: 0x4 (4)
  USHORT Size;        // offset: 0x6 (6)
};

// 0x2 (2) bytes
union _WHEA_REVISION {
  struct {
    UCHAR MinorRevision; // offset: 0x0 (0)
    UCHAR MajorRevision; // offset: 0x1 (1)
  };
  USHORT AsUSHORT; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _ETW_BUFFER_CONTEXT {
  union {
    struct {
      UCHAR ProcessorNumber; // offset: 0x0 (0)
      UCHAR Alignment;       // offset: 0x1 (1)
    };
    USHORT ProcessorIndex; // offset: 0x0 (0)
  };
  USHORT LoggerId; // offset: 0x2 (2)
};

// 0x10 (16) bytes
struct _TXN_PARAMETER_BLOCK {
  USHORT Length;           // offset: 0x0 (0)
  USHORT TxFsContext;      // offset: 0x2 (2)
  VOID *TransactionObject; // offset: 0x8 (8)
};

// 0x4 (4) bytes
struct _SEGMENT_FLAGS {
  union {
    struct {
      USHORT TotalNumberOfPtes4132 : 10; // offset: 0x0 (0)
      USHORT Spare0 : 2;                 // offset: 0x0 (0)
      USHORT LargePages : 1;             // offset: 0x0 (0)
      USHORT DebugSymbolsLoaded : 1;     // offset: 0x0 (0)
      USHORT WriteCombined : 1;          // offset: 0x0 (0)
      USHORT NoCache : 1;                // offset: 0x0 (0)
    };
    USHORT Short0; // offset: 0x0 (0)
  };
  union {
    struct {
      UCHAR FloppyMedia : 1;           // offset: 0x2 (2)
      UCHAR DefaultProtectionMask : 5; // offset: 0x2 (2)
      UCHAR Binary32 : 1;              // offset: 0x2 (2)
      UCHAR ContainsDebug : 1;         // offset: 0x2 (2)
    };
    UCHAR UChar1; // offset: 0x2 (2)
  };
  union {
    struct {
      UCHAR ForceCollision : 1;    // offset: 0x3 (3)
      UCHAR ImageSigningType : 3;  // offset: 0x3 (3)
      UCHAR ImageSigningLevel : 4; // offset: 0x3 (3)
    };
    UCHAR UChar2; // offset: 0x3 (3)
  };
};

// 0x4 (4) bytes
struct _MMSUBSECTION_FLAGS {
  USHORT SubsectionAccessed : 1;     // offset: 0x0 (0)
  USHORT Protection : 5;             // offset: 0x0 (0)
  USHORT StartingSector4132 : 10;    // offset: 0x0 (0)
  USHORT SubsectionStatic : 1;       // offset: 0x2 (2)
  USHORT GlobalMemory : 1;           // offset: 0x2 (2)
  USHORT SubsectionMappedDirect : 1; // offset: 0x2 (2)
  USHORT OnDereferenceList : 1;      // offset: 0x2 (2)
  USHORT SectorEndOffset : 12;       // offset: 0x2 (2)
};

// 0x20 (32) bytes
struct _INTERFACE {
  USHORT Size;                              // offset: 0x0 (0)
  USHORT Version;                           // offset: 0x2 (2)
  VOID *Context;                            // offset: 0x8 (8)
  VOID (*InterfaceReference)(VOID *arg1);   // offset: 0x10 (16)
  VOID (*InterfaceDereference)(VOID *arg1); // offset: 0x18 (24)
};

// 0x10 (16) bytes
struct _EWOW64PROCESS {
  VOID *Peb;      // offset: 0x0 (0)
  USHORT Machine; // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _PROC_PERF_HISTORY_ENTRY {
  USHORT Utility;            // offset: 0x0 (0)
  USHORT AffinitizedUtility; // offset: 0x2 (2)
  UCHAR Frequency;           // offset: 0x4 (4)
  UCHAR TaggedPercent[2];    // offset: 0x5 (5)
};

// 0x10 (16) bytes
struct _KDESCRIPTOR {
  USHORT Pad[3]; // offset: 0x0 (0)
  USHORT Limit;  // offset: 0x6 (6)
  VOID *Base;    // offset: 0x8 (8)
};

// 0x28 (40) bytes
struct _ETW_PMC_SUPPORT {
  enum _KPROFILE_SOURCE Source[4];            // offset: 0x0 (0)
  volatile ULONG HookIdCount;                 // offset: 0x10 (16)
  USHORT HookId[4];                           // offset: 0x14 (20)
  volatile ULONG CountersCount;               // offset: 0x1c (28)
  struct _HAL_PMC_COUNTERS *ProcessorCtrs[1]; // offset: 0x20 (32)
};

// 0x10 (16) bytes
struct _STRING {
  USHORT Length;        // offset: 0x0 (0)
  USHORT MaximumLength; // offset: 0x2 (2)
  CHAR *Buffer;         // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _ETW_FILTER_STRING_TOKEN_ELEMENT {
  USHORT Length;  // offset: 0x0 (0)
  USHORT *String; // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _ETW_FILTER_STRING_TOKEN {
  USHORT Count;                                      // offset: 0x0 (0)
  struct _ETW_FILTER_STRING_TOKEN_ELEMENT Tokens[1]; // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _UNICODE_STRING {
  USHORT Length;        // offset: 0x0 (0)
  USHORT MaximumLength; // offset: 0x2 (2)
  USHORT *Buffer;       // offset: 0x8 (8)
};

// 0x4 (4) bytes
struct _PROCESSOR_NUMBER {
  USHORT Group;   // offset: 0x0 (0)
  UCHAR Number;   // offset: 0x2 (2)
  UCHAR Reserved; // offset: 0x3 (3)
};

// 0x20 (32) bytes
struct _RELATIVE_SYMLINK_INFO {
  USHORT ExposedNamespaceLength;                     // offset: 0x0 (0)
  USHORT Flags;                                      // offset: 0x2 (2)
  USHORT DeviceNameLength;                           // offset: 0x4 (4)
  USHORT Reserved;                                   // offset: 0x6 (6)
  struct _RELATIVE_SYMLINK_INFO *InteriorMountPoint; // offset: 0x8 (8)
  struct _UNICODE_STRING OpenedName;                 // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _OBJECT_NAME_INFORMATION {
  struct _UNICODE_STRING Name; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _SE_AUDIT_PROCESS_CREATION_INFO {
  struct _OBJECT_NAME_INFORMATION *ImageFileName; // offset: 0x0 (0)
};

// 0x18 (24) bytes
struct _CURDIR {
  struct _UNICODE_STRING DosPath; // offset: 0x0 (0)
  VOID *Handle;                   // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _ISR_THUNK {
  UCHAR PushImm;  // offset: 0x0 (0)
  UCHAR Vector;   // offset: 0x1 (1)
  UCHAR PushRbp;  // offset: 0x2 (2)
  UCHAR JmpOp;    // offset: 0x3 (3)
  LONG JmpOffset; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _UNEXPECTED_INTERRUPT {
  UCHAR PushImm;  // offset: 0x0 (0)
  UCHAR Vector;   // offset: 0x1 (1)
  UCHAR PushRbp;  // offset: 0x2 (2)
  UCHAR JmpOp;    // offset: 0x3 (3)
  LONG JmpOffset; // offset: 0x4 (4)
};

// 0x20 (32) bytes
struct _OBJECT_HEADER_NAME_INFO {
  struct _OBJECT_DIRECTORY *Directory; // offset: 0x0 (0)
  struct _UNICODE_STRING Name;         // offset: 0x8 (8)
  LONG ReferenceCount;                 // offset: 0x18 (24)
};

// 0xac (172) bytes
struct _RTL_TIME_ZONE_INFORMATION {
  LONG Bias;                         // offset: 0x0 (0)
  WCHAR StandardName[32];            // offset: 0x4 (4)
  struct _TIME_FIELDS StandardStart; // offset: 0x44 (68)
  LONG StandardBias;                 // offset: 0x54 (84)
  WCHAR DaylightName[32];            // offset: 0x58 (88)
  struct _TIME_FIELDS DaylightStart; // offset: 0x98 (152)
  LONG DaylightBias;                 // offset: 0xa8 (168)
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

// 0x18 (24) bytes
struct _ETW_PERF_COUNTERS {
  LONG TotalActiveSessions;           // offset: 0x0 (0)
  LONG TotalBufferMemoryNonPagedPool; // offset: 0x4 (4)
  LONG TotalBufferMemoryPagedPool;    // offset: 0x8 (8)
  LONG TotalGuidsEnabled;             // offset: 0xc (12)
  LONG TotalGuidsNotEnabled;          // offset: 0x10 (16)
  LONG TotalGuidsPreEnabled;          // offset: 0x14 (20)
};

// 0x228 (552) bytes
struct _MI_REBUILD_LARGE_PAGES {
  LONG Active;                                          // offset: 0x0 (0)
  struct _MI_REBUILD_LARGE_PAGE_COUNTDOWN Timer[64][4]; // offset: 0x4 (4)
  struct _WORK_QUEUE_ITEM WorkItem;                     // offset: 0x208 (520)
};

// 0x38 (56) bytes
struct _MI_LDW_WORK_CONTEXT {
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x0 (0)
  struct _FILE_OBJECT *FileObject;  // offset: 0x20 (32)
  LONG ErrorStatus;                 // offset: 0x28 (40)
  volatile LONG Active;             // offset: 0x2c (44)
  UCHAR FreeWhenDone;               // offset: 0x30 (48)
};

// 0x18 (24) bytes
struct _DISPATCHER_HEADER {
  union {
    volatile LONG Lock; // offset: 0x0 (0)
    LONG LockNV;        // offset: 0x0 (0)
    struct {
      UCHAR Type;       // offset: 0x0 (0)
      UCHAR Signalling; // offset: 0x1 (1)
      UCHAR Size;       // offset: 0x2 (2)
      UCHAR Reserved1;  // offset: 0x3 (3)
    };
    struct {
      UCHAR TimerType; // offset: 0x0 (0)
      union {
        UCHAR TimerControlFlags; // offset: 0x1 (1)
        struct {
          UCHAR Absolute : 1;              // offset: 0x1 (1)
          UCHAR Wake : 1;                  // offset: 0x1 (1)
          UCHAR EncodedTolerableDelay : 6; // offset: 0x1 (1)
        };
      };
      UCHAR Hand; // offset: 0x2 (2)
      union {
        UCHAR TimerMiscFlags; // offset: 0x3 (3)
        struct {
          UCHAR Index : 6;            // offset: 0x3 (3)
          UCHAR Inserted : 1;         // offset: 0x3 (3)
          volatile UCHAR Expired : 1; // offset: 0x3 (3)
        };
      };
    };
    struct {
      UCHAR Timer2Type; // offset: 0x0 (0)
      union {
        UCHAR Timer2Flags; // offset: 0x1 (1)
        struct {
          UCHAR Timer2Inserted : 1;      // offset: 0x1 (1)
          UCHAR Timer2Expiring : 1;      // offset: 0x1 (1)
          UCHAR Timer2CancelPending : 1; // offset: 0x1 (1)
          UCHAR Timer2SetPending : 1;    // offset: 0x1 (1)
          UCHAR Timer2Running : 1;       // offset: 0x1 (1)
          UCHAR Timer2Disabled : 1;      // offset: 0x1 (1)
          UCHAR Timer2ReservedFlags : 2; // offset: 0x1 (1)
        };
      };
      UCHAR Timer2Reserved1; // offset: 0x2 (2)
      UCHAR Timer2Reserved2; // offset: 0x3 (3)
    };
    struct {
      UCHAR QueueType; // offset: 0x0 (0)
      union {
        UCHAR QueueControlFlags; // offset: 0x1 (1)
        struct {
          UCHAR Abandoned : 1;                 // offset: 0x1 (1)
          UCHAR DisableIncrement : 1;          // offset: 0x1 (1)
          UCHAR QueueReservedControlFlags : 6; // offset: 0x1 (1)
        };
      };
      UCHAR QueueSize;     // offset: 0x2 (2)
      UCHAR QueueReserved; // offset: 0x3 (3)
    };
    struct {
      UCHAR ThreadType;     // offset: 0x0 (0)
      UCHAR ThreadReserved; // offset: 0x1 (1)
      union {
        UCHAR ThreadControlFlags; // offset: 0x2 (2)
        struct {
          UCHAR CycleProfiling : 1;             // offset: 0x2 (2)
          UCHAR CounterProfiling : 1;           // offset: 0x2 (2)
          UCHAR GroupScheduling : 1;            // offset: 0x2 (2)
          UCHAR AffinitySet : 1;                // offset: 0x2 (2)
          UCHAR Tagged : 1;                     // offset: 0x2 (2)
          UCHAR EnergyProfiling : 1;            // offset: 0x2 (2)
          UCHAR ThreadReservedControlFlags : 2; // offset: 0x2 (2)
        };
      };
      union {
        UCHAR DebugActive; // offset: 0x3 (3)
        struct {
          UCHAR ActiveDR7 : 1;    // offset: 0x3 (3)
          UCHAR Instrumented : 1; // offset: 0x3 (3)
          UCHAR Minimal : 1;      // offset: 0x3 (3)
          UCHAR Reserved4 : 3;    // offset: 0x3 (3)
          UCHAR UmsScheduled : 1; // offset: 0x3 (3)
          UCHAR UmsPrimary : 1;   // offset: 0x3 (3)
        };
      };
    };
    struct {
      UCHAR MutantType;     // offset: 0x0 (0)
      UCHAR MutantSize;     // offset: 0x1 (1)
      UCHAR DpcActive;      // offset: 0x2 (2)
      UCHAR MutantReserved; // offset: 0x3 (3)
    };
  };
  LONG SignalState;                // offset: 0x4 (4)
  struct _LIST_ENTRY WaitListHead; // offset: 0x8 (8)
};

// 0x38 (56) bytes
struct _KMUTANT {
  struct _DISPATCHER_HEADER Header;   // offset: 0x0 (0)
  struct _LIST_ENTRY MutantListEntry; // offset: 0x18 (24)
  struct _KTHREAD *OwnerThread;       // offset: 0x28 (40)
  UCHAR Abandoned;                    // offset: 0x30 (48)
  UCHAR ApcDisable;                   // offset: 0x31 (49)
};

// 0x20 (32) bytes
struct _KSEMAPHORE {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 (0)
  LONG Limit;                       // offset: 0x18 (24)
};

// 0x28 (40) bytes
struct _LPCP_NONPAGED_PORT_QUEUE {
  struct _KSEMAPHORE Semaphore;          // offset: 0x0 (0)
  struct _LPCP_PORT_OBJECT *BackPointer; // offset: 0x20 (32)
};

// 0x20 (32) bytes
struct _LPCP_PORT_QUEUE {
  struct _LPCP_NONPAGED_PORT_QUEUE *NonPagedPortQueue; // offset: 0x0 (0)
  struct _KSEMAPHORE *Semaphore;                       // offset: 0x8 (8)
  struct _LIST_ENTRY ReceiveHead;                      // offset: 0x10 (16)
};

// 0x30 (48) bytes
struct _MMDEREFERENCE_SEGMENT_HEADER {
  struct _KSEMAPHORE Semaphore; // offset: 0x0 (0)
  struct _LIST_ENTRY ListHead;  // offset: 0x20 (32)
};

// 0x18 (24) bytes
struct _KEVENT {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 (0)
};

// 0x20 (32) bytes
struct _KWAIT_CHAIN_ENTRY {
  struct _SINGLE_LIST_ENTRY ListEntry; // offset: 0x0 (0)
  struct _KEVENT Event;                // offset: 0x8 (8)
};

// 0x38 (56) bytes
struct _MI_RESUME_WORKITEM {
  struct _KEVENT ResumeCompleteEvent; // offset: 0x0 (0)
  struct _WORK_QUEUE_ITEM WorkItem;   // offset: 0x18 (24)
};

// 0x28 (40) bytes
struct _HIVE_WAIT_PACKET {
  struct _KEVENT WakeEvent;       // offset: 0x0 (0)
  LONG Status;                    // offset: 0x18 (24)
  struct _HIVE_WAIT_PACKET *Next; // offset: 0x20 (32)
};

// 0x20 (32) bytes
struct _PALPC_PORT_REFERENCE_WAIT_BLOCK {
  struct _KEVENT DesiredReferenceNoEvent; // offset: 0x0 (0)
  LONG DesiredReferenceNo;                // offset: 0x18 (24)
};

// 0x20 (32) bytes
struct _CACHE_UNINITIALIZE_EVENT {
  struct _CACHE_UNINITIALIZE_EVENT *Next; // offset: 0x0 (0)
  struct _KEVENT Event;                   // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _IO_REMOVE_LOCK_COMMON_BLOCK {
  UCHAR Removed;              // offset: 0x0 (0)
  UCHAR Reserved[3];          // offset: 0x1 (1)
  LONG IoCount;               // offset: 0x4 (4)
  struct _KEVENT RemoveEvent; // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _IO_REMOVE_LOCK {
  struct _IO_REMOVE_LOCK_COMMON_BLOCK Common; // offset: 0x0 (0)
};

// 0x18 (24) bytes
struct _KGATE {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 (0)
};

// 0x28 (40) bytes
struct _MMMOD_WRITER_LISTHEAD {
  struct _LIST_ENTRY ListHead; // offset: 0x0 (0)
  union {
    struct _KGATE Gate;   // offset: 0x10 (16)
    struct _KEVENT Event; // offset: 0x10 (16)
  };
};

// 0x20 (32) bytes
struct _MI_SUBSECTION_WAIT_BLOCK {
  struct _MI_SUBSECTION_WAIT_BLOCK *Next; // offset: 0x0 (0)
  struct _KGATE Gate;                     // offset: 0x8 (8)
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
union _MI_RESERVATION_CLUSTER_INFO {
  ULONG ClusterSize : 10;    // offset: 0x0 (0)
  ULONG SequenceNumber : 22; // offset: 0x0 (0)
  LONG EntireInfo;           // offset: 0x0 (0)
};

// 0x48 (72) bytes
struct _DEFERRED_WRITE {
  SHORT NodeTypeCode;                          // offset: 0x0 (0)
  SHORT NodeByteSize;                          // offset: 0x2 (2)
  struct _FILE_OBJECT *FileObject;             // offset: 0x8 (8)
  ULONG BytesToWrite;                          // offset: 0x10 (16)
  struct _LIST_ENTRY DeferredWriteLinks;       // offset: 0x18 (24)
  struct _KEVENT *Event;                       // offset: 0x28 (40)
  VOID (*PostRoutine)(VOID *arg1, VOID *arg2); // offset: 0x30 (48)
  VOID *Context1;                              // offset: 0x38 (56)
  VOID *Context2;                              // offset: 0x40 (64)
};

// 0x10 (16) bytes
struct _VF_TRACKER {
  ULONG TrackerFlags; // offset: 0x0 (0)
  ULONG TrackerSize;  // offset: 0x4 (4)
  ULONG TrackerIndex; // offset: 0x8 (8)
  ULONG TraceDepth;   // offset: 0xc (12)
};

// 0x8 (8) bytes
struct _CM_INDEX {
  ULONG Cell; // offset: 0x0 (0)
  union {
    UCHAR NameHint[4]; // offset: 0x4 (4)
    ULONG HashKey;     // offset: 0x4 (4)
  };
};

// 0x14 (20) bytes
struct _NB10 {
  ULONG Signature; // offset: 0x0 (0)
  ULONG Offset;    // offset: 0x4 (4)
  ULONG TimeStamp; // offset: 0x8 (8)
  ULONG Age;       // offset: 0xc (12)
  CHAR PdbName[1]; // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _LDR_SERVICE_TAG_RECORD {
  struct _LDR_SERVICE_TAG_RECORD *Next; // offset: 0x0 (0)
  ULONG ServiceTag;                     // offset: 0x8 (8)
};

// 0x50 (80) bytes
struct _LDR_DDAG_NODE {
  struct _LIST_ENTRY Modules;                     // offset: 0x0 (0)
  struct _LDR_SERVICE_TAG_RECORD *ServiceTagList; // offset: 0x10 (16)
  ULONG LoadCount;                                // offset: 0x18 (24)
  ULONG LoadWhileUnloadingCount;                  // offset: 0x1c (28)
  ULONG LowestLink;                               // offset: 0x20 (32)
  struct _LDRP_CSLIST Dependencies;               // offset: 0x28 (40)
  struct _LDRP_CSLIST IncomingDependencies;       // offset: 0x30 (48)
  enum _LDR_DDAG_STATE State;                     // offset: 0x38 (56)
  struct _SINGLE_LIST_ENTRY CondenseLink;         // offset: 0x40 (64)
  ULONG PreorderNumber;                           // offset: 0x48 (72)
};

// 0x4 (4) bytes
union _PPM_COORDINATED_SYNCHRONIZATION {
  LONG AsLong;               // offset: 0x0 (0)
  ULONG EnterProcessor : 12; // offset: 0x0 (0)
  ULONG ExitProcessor : 12;  // offset: 0x0 (0)
  ULONG Transition : 2;      // offset: 0x0 (0)
  ULONG Entered : 1;         // offset: 0x0 (0)
  ULONG EntryPriority : 5;   // offset: 0x0 (0)
};

// 0x18 (24) bytes
struct _SHARED_CACHE_MAP_LIST_CURSOR {
  struct _LIST_ENTRY SharedCacheMapLinks; // offset: 0x0 (0)
  ULONG Flags;                            // offset: 0x10 (16)
};

// 0x4 (4) bytes
union _PPM_IDLE_SYNCHRONIZATION_STATE {
  LONG AsLong;        // offset: 0x0 (0)
  LONG RefCount : 24; // offset: 0x0 (0)
  ULONG State : 8;    // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct PROCESSOR_IDLESTATE_INFO {
  ULONG TimeCheck;      // offset: 0x0 (0)
  UCHAR DemotePercent;  // offset: 0x4 (4)
  UCHAR PromotePercent; // offset: 0x5 (5)
  UCHAR Spare[2];       // offset: 0x6 (6)
};

// 0x20 (32) bytes
struct PROCESSOR_IDLESTATE_POLICY {
  USHORT Revision; // offset: 0x0 (0)
  union {
    USHORT AsUSHORT;         // offset: 0x2 (2)
    USHORT AllowScaling : 1; // offset: 0x2 (2)
    USHORT Disabled : 1;     // offset: 0x2 (2)
    USHORT Reserved : 14;    // offset: 0x2 (2)

  } Flags;                                   // offset: 0x2 (2)
  ULONG PolicyCount;                         // offset: 0x4 (4)
  struct PROCESSOR_IDLESTATE_INFO Policy[3]; // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _POP_ACTION_TRIGGER {
  enum POWER_POLICY_DEVICE_TYPE Type; // offset: 0x0 (0)
  ULONG Flags;                        // offset: 0x4 (4)
  struct _POP_TRIGGER_WAIT *Wait;     // offset: 0x8 (8)
  union {
    struct {
      ULONG PercentLevel; // offset: 0x0 (0)
    } Battery;            // offset: 0x10 (16)
    struct {
      ULONG Type; // offset: 0x0 (0)
    } Button;     // offset: 0x10 (16)
  };
};

// 0x38 (56) bytes
struct _POP_TRIGGER_WAIT {
  struct _KEVENT Event;                // offset: 0x0 (0)
  LONG Status;                         // offset: 0x18 (24)
  struct _LIST_ENTRY Link;             // offset: 0x20 (32)
  struct _POP_ACTION_TRIGGER *Trigger; // offset: 0x30 (48)
};

// 0x38 (56) bytes
struct _VI_DEADLOCK_THREAD {
  struct _KTHREAD *Thread;                    // offset: 0x0 (0)
  struct _VI_DEADLOCK_NODE *CurrentSpinNode;  // offset: 0x8 (8)
  struct _VI_DEADLOCK_NODE *CurrentOtherNode; // offset: 0x10 (16)
  union {
    struct _LIST_ENTRY ListEntry;     // offset: 0x18 (24)
    struct _LIST_ENTRY FreeListEntry; // offset: 0x18 (24)
  };
  ULONG NodeCount;            // offset: 0x28 (40)
  volatile ULONG PagingCount; // offset: 0x2c (44)
  UCHAR ThreadUsesEresources; // offset: 0x30 (48)
};

// 0xf8 (248) bytes
struct _VI_DEADLOCK_RESOURCE {
  enum _VI_DEADLOCK_RESOURCE_TYPE Type;    // offset: 0x0 (0)
  ULONG NodeCount : 16;                    // offset: 0x4 (4)
  ULONG RecursionCount : 16;               // offset: 0x4 (4)
  VOID *ResourceAddress;                   // offset: 0x8 (8)
  struct _VI_DEADLOCK_THREAD *ThreadOwner; // offset: 0x10 (16)
  struct _LIST_ENTRY ResourceList;         // offset: 0x18 (24)
  union {
    struct _LIST_ENTRY HashChainList; // offset: 0x28 (40)
    struct _LIST_ENTRY FreeListEntry; // offset: 0x28 (40)
  };
  VOID *StackTrace[8];       // offset: 0x38 (56)
  VOID *LastAcquireTrace[8]; // offset: 0x78 (120)
  VOID *LastReleaseTrace[8]; // offset: 0xb8 (184)
};

// 0xd0 (208) bytes
struct _VI_DEADLOCK_NODE {
  struct _VI_DEADLOCK_NODE *Parent; // offset: 0x0 (0)
  struct _LIST_ENTRY ChildrenList;  // offset: 0x8 (8)
  struct _LIST_ENTRY SiblingsList;  // offset: 0x18 (24)
  union {
    struct _LIST_ENTRY ResourceList;  // offset: 0x28 (40)
    struct _LIST_ENTRY FreeListEntry; // offset: 0x28 (40)
  };
  struct _VI_DEADLOCK_RESOURCE *Root;      // offset: 0x38 (56)
  struct _VI_DEADLOCK_THREAD *ThreadEntry; // offset: 0x40 (64)
  union {
    ULONG Active : 1;             // offset: 0x48 (72)
    ULONG OnlyTryAcquireUsed : 1; // offset: 0x48 (72)
    ULONG ReleasedOutOfOrder : 1; // offset: 0x48 (72)
    ULONG SequenceNumber : 29;    // offset: 0x48 (72)
    ULONG Whole;                  // offset: 0x48 (72)

  } u1;                      // offset: 0x48 (72)
  LONG ChildrenCount;        // offset: 0x4c (76)
  VOID *StackTrace[8];       // offset: 0x50 (80)
  VOID *ParentStackTrace[8]; // offset: 0x90 (144)
};

// 0x4 (4) bytes
struct _MM_SESSION_SPACE_FLAGS {
  ULONG Initialized : 1;            // offset: 0x0 (0)
  ULONG DeletePending : 1;          // offset: 0x0 (0)
  ULONG PoolInitialized : 1;        // offset: 0x0 (0)
  ULONG DynamicVaInitialized : 1;   // offset: 0x0 (0)
  ULONG WsInitialized : 1;          // offset: 0x0 (0)
  ULONG PoolDestroyed : 1;          // offset: 0x0 (0)
  ULONG ObjectInitialized : 1;      // offset: 0x0 (0)
  ULONG LeakedPoolDeliberately : 1; // offset: 0x0 (0)
  ULONG Filler : 24;                // offset: 0x0 (0)
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

// 0x48 (72) bytes
struct _PO_NOTIFY_ORDER_LEVEL {
  ULONG DeviceCount;             // offset: 0x0 (0)
  ULONG ActiveCount;             // offset: 0x4 (4)
  struct _LIST_ENTRY WaitSleep;  // offset: 0x8 (8)
  struct _LIST_ENTRY ReadySleep; // offset: 0x18 (24)
  struct _LIST_ENTRY ReadyS0;    // offset: 0x28 (40)
  struct _LIST_ENTRY WaitS0;     // offset: 0x38 (56)
};

// 0x178 (376) bytes
struct _PO_DEVICE_NOTIFY_ORDER {
  UCHAR Locked;                                // offset: 0x0 (0)
  struct _DEVICE_OBJECT **WarmEjectPdoPointer; // offset: 0x8 (8)
  struct _PO_NOTIFY_ORDER_LEVEL OrderLevel[5]; // offset: 0x10 (16)
};

// 0x18 (24) bytes
struct _RTL_ATOM_TABLE_REFERENCE {
  struct _LIST_ENTRY LowBoxList; // offset: 0x0 (0)
  ULONG LowBoxID;                // offset: 0x10 (16)
  USHORT ReferenceCount;         // offset: 0x14 (20)
  USHORT Flags;                  // offset: 0x16 (22)
};

// 0x30 (48) bytes
struct _RTL_ATOM_TABLE_ENTRY {
  struct _RTL_ATOM_TABLE_ENTRY *HashLink;     // offset: 0x0 (0)
  USHORT HandleIndex;                         // offset: 0x8 (8)
  USHORT Atom;                                // offset: 0xa (10)
  struct _RTL_ATOM_TABLE_REFERENCE Reference; // offset: 0x10 (16)
  UCHAR NameLength;                           // offset: 0x28 (40)
  WCHAR Name[1];                              // offset: 0x2a (42)
};

// 0x40 (64) bytes
struct _PNP_DEVICE_COMPLETION_REQUEST {
  struct _LIST_ENTRY ListEntry;            // offset: 0x0 (0)
  struct _DEVICE_NODE *DeviceNode;         // offset: 0x10 (16)
  VOID *Context;                           // offset: 0x18 (24)
  enum _PNP_DEVNODE_STATE CompletionState; // offset: 0x20 (32)
  ULONG IrpPended;                         // offset: 0x24 (36)
  LONG Status;                             // offset: 0x28 (40)
  VOID *Information;                       // offset: 0x30 (48)
  LONG ReferenceCount;                     // offset: 0x38 (56)
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

// 0x4 (4) bytes
struct _OBJECT_HEADER_PADDING_INFO {
  ULONG PaddingAmount; // offset: 0x0 (0)
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
  UCHAR FastSystemS4;                             // offset: 0x11 (17)
  UCHAR Hiberboot;                                // offset: 0x12 (18)
  UCHAR WakeAlarmPresent;                         // offset: 0x13 (19)
  UCHAR AoAc;                                     // offset: 0x14 (20)
  UCHAR DiskSpinDown;                             // offset: 0x15 (21)
  UCHAR HiberFileType;                            // offset: 0x16 (22)
  UCHAR AoAcConnectivitySupported;                // offset: 0x17 (23)
  UCHAR spare3[6];                                // offset: 0x18 (24)
  UCHAR SystemBatteriesPresent;                   // offset: 0x1e (30)
  UCHAR BatteriesAreShortTerm;                    // offset: 0x1f (31)
  struct BATTERY_REPORTING_SCALE BatteryScale[3]; // offset: 0x20 (32)
  enum _SYSTEM_POWER_STATE AcOnLineWake;          // offset: 0x38 (56)
  enum _SYSTEM_POWER_STATE SoftLidWake;           // offset: 0x3c (60)
  enum _SYSTEM_POWER_STATE RtcWake;               // offset: 0x40 (64)
  enum _SYSTEM_POWER_STATE MinDeviceWakeState;    // offset: 0x44 (68)
  enum _SYSTEM_POWER_STATE DefaultLowLatencyWake; // offset: 0x48 (72)
};

// 0x1c (28) bytes
struct PROCESSOR_PERFSTATE_POLICY {
  ULONG Revision;         // offset: 0x0 (0)
  UCHAR MaxThrottle;      // offset: 0x4 (4)
  UCHAR MinThrottle;      // offset: 0x5 (5)
  UCHAR BusyAdjThreshold; // offset: 0x6 (6)
  union {
    UCHAR Spare; // offset: 0x7 (7)
    union {
      UCHAR AsUCHAR;                // offset: 0x7 (7)
      UCHAR NoDomainAccounting : 1; // offset: 0x7 (7)
      UCHAR IncreasePolicy : 2;     // offset: 0x7 (7)
      UCHAR DecreasePolicy : 2;     // offset: 0x7 (7)
      UCHAR Reserved : 3;           // offset: 0x7 (7)

    } Flags; // offset: 0x7 (7)
  };
  ULONG TimeCheck;       // offset: 0x8 (8)
  ULONG IncreaseTime;    // offset: 0xc (12)
  ULONG DecreaseTime;    // offset: 0x10 (16)
  ULONG IncreasePercent; // offset: 0x14 (20)
  ULONG DecreasePercent; // offset: 0x18 (24)
};

// 0x28 (40) bytes
struct _VF_SUSPECT_DRIVER_ENTRY {
  struct _LIST_ENTRY Links;        // offset: 0x0 (0)
  ULONG Loads;                     // offset: 0x10 (16)
  ULONG Unloads;                   // offset: 0x14 (20)
  struct _UNICODE_STRING BaseName; // offset: 0x18 (24)
};

// 0x18 (24) bytes
struct _THERMAL_POLICY {
  ULONG Version;           // offset: 0x0 (0)
  UCHAR WaitForUpdate;     // offset: 0x4 (4)
  UCHAR Hibernate;         // offset: 0x5 (5)
  UCHAR Critical;          // offset: 0x6 (6)
  UCHAR ThermalStandby;    // offset: 0x7 (7)
  ULONG ActivationReasons; // offset: 0x8 (8)
  ULONG PassiveLimit;      // offset: 0xc (12)
  ULONG ActiveLevel;       // offset: 0x10 (16)
  UCHAR OverThrottled;     // offset: 0x14 (20)
};

// 0x8 (8) bytes
struct _MI_RESAVAIL_FAILURES {
  ULONG Wrap;     // offset: 0x0 (0)
  ULONG NoCharge; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _MI_FORCED_COMMITS {
  ULONG Regular; // offset: 0x0 (0)
  ULONG Wrap;    // offset: 0x4 (4)
};

// 0x40 (64) bytes
struct _MI_PROBE_RAISE_TRACKER {
  ULONG UserRangeInKernel;              // offset: 0x0 (0)
  ULONG FaultFailed;                    // offset: 0x4 (4)
  ULONG WriteFaultFailed;               // offset: 0x8 (8)
  ULONG LargePageFailed;                // offset: 0xc (12)
  ULONG UserAccessToKernelPte;          // offset: 0x10 (16)
  ULONG BadPageLocation;                // offset: 0x14 (20)
  ULONG InsufficientCharge;             // offset: 0x18 (24)
  ULONG PageTableCharge;                // offset: 0x1c (28)
  ULONG NoPhysicalMapping;              // offset: 0x20 (32)
  ULONG NoIoReference;                  // offset: 0x24 (36)
  ULONG ProbeFailed;                    // offset: 0x28 (40)
  ULONG PteIsZero;                      // offset: 0x2c (44)
  ULONG StrongCodeWrite;                // offset: 0x30 (48)
  ULONG ReducedCloneCommitChargeFailed; // offset: 0x34 (52)
  ULONG CopyOnWriteAtDispatchNoPages;   // offset: 0x38 (56)
  ULONG EnclavePageFailed;              // offset: 0x3c (60)
};

// 0x10 (16) bytes
struct _MM_SYSTEM_PAGE_COUNTS {
  ULONG SystemCodePage;        // offset: 0x0 (0)
  ULONG SystemDriverPage;      // offset: 0x4 (4)
  LONG TotalSystemCodePages;   // offset: 0x8 (8)
  LONG TotalSystemDriverPages; // offset: 0xc (12)
};

// 0x2c (44) bytes
struct _MI_POOL_FAILURE_REASONS {
  ULONG NonPagedNoPtes;               // offset: 0x0 (0)
  ULONG PriorityTooLow;               // offset: 0x4 (4)
  ULONG NonPagedNoPagesAvailable;     // offset: 0x8 (8)
  ULONG PagedNoPtes;                  // offset: 0xc (12)
  ULONG SessionPagedNoPtes;           // offset: 0x10 (16)
  ULONG PagedNoPagesAvailable;        // offset: 0x14 (20)
  ULONG SessionPagedNoPagesAvailable; // offset: 0x18 (24)
  ULONG PagedNoCommit;                // offset: 0x1c (28)
  ULONG SessionPagedNoCommit;         // offset: 0x20 (32)
  ULONG NonPagedNoResidentAvailable;  // offset: 0x24 (36)
  ULONG NonPagedNoCommit;             // offset: 0x28 (40)
};

// 0x20 (32) bytes
struct _RTL_RANGE_LIST {
  struct _LIST_ENTRY ListHead; // offset: 0x0 (0)
  ULONG Flags;                 // offset: 0x10 (16)
  ULONG Count;                 // offset: 0x14 (20)
  ULONG Stamp;                 // offset: 0x18 (24)
};

// 0xc (12) bytes
struct _KSYSTEM_TIME {
  ULONG LowPart;  // offset: 0x0 (0)
  LONG High1Time; // offset: 0x4 (4)
  LONG High2Time; // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _TEB_ACTIVE_FRAME_CONTEXT {
  ULONG Flags;           // offset: 0x0 (0)
  const CHAR *FrameName; // offset: 0x8 (8)
};

// 0x38 (56) bytes
struct _VI_TRACK_IRQL {
  VOID *Thread;        // offset: 0x0 (0)
  UCHAR OldIrql;       // offset: 0x8 (8)
  UCHAR NewIrql;       // offset: 0x9 (9)
  USHORT Processor;    // offset: 0xa (10)
  ULONG TickCount;     // offset: 0xc (12)
  VOID *StackTrace[5]; // offset: 0x10 (16)
};

// 0x28 (40) bytes
struct _CALL_HASH_ENTRY {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 (0)
  VOID *CallersAddress;         // offset: 0x10 (16)
  VOID *CallersCaller;          // offset: 0x18 (24)
  ULONG CallCount;              // offset: 0x20 (32)
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

// 0x70 (112) bytes
struct _PI_BUS_EXTENSION {
  ULONG Flags;                                // offset: 0x0 (0)
  UCHAR NumberCSNs;                           // offset: 0x4 (4)
  UCHAR *ReadDataPort;                        // offset: 0x8 (8)
  UCHAR DataPortMapped;                       // offset: 0x10 (16)
  UCHAR *AddressPort;                         // offset: 0x18 (24)
  UCHAR AddrPortMapped;                       // offset: 0x20 (32)
  UCHAR *CommandPort;                         // offset: 0x28 (40)
  UCHAR CmdPortMapped;                        // offset: 0x30 (48)
  ULONG NextSlotNumber;                       // offset: 0x34 (52)
  struct _SINGLE_LIST_ENTRY DeviceList;       // offset: 0x38 (56)
  struct _SINGLE_LIST_ENTRY CardList;         // offset: 0x40 (64)
  struct _DEVICE_OBJECT *PhysicalBusDevice;   // offset: 0x48 (72)
  struct _DEVICE_OBJECT *FunctionalBusDevice; // offset: 0x50 (80)
  struct _DEVICE_OBJECT *AttachedDevice;      // offset: 0x58 (88)
  ULONG BusNumber;                            // offset: 0x60 (96)
  enum _SYSTEM_POWER_STATE SystemPowerState;  // offset: 0x64 (100)
  enum _DEVICE_POWER_STATE DevicePowerState;  // offset: 0x68 (104)
};

// 0x10 (16) bytes
struct _BUS_EXTENSION_LIST {
  VOID *Next;                             // offset: 0x0 (0)
  struct _PI_BUS_EXTENSION *BusExtension; // offset: 0x8 (8)
};

// 0x4 (4) bytes
union _MI_FLAGS {
  LONG EntireFlags;                        // offset: 0x0 (0)
  ULONG VerifierEnabled : 1;               // offset: 0x0 (0)
  ULONG KernelVerifierEnabled : 1;         // offset: 0x0 (0)
  ULONG LargePageKernel : 1;               // offset: 0x0 (0)
  ULONG StopOn4d : 1;                      // offset: 0x0 (0)
  ULONG InitializationPhase : 2;           // offset: 0x0 (0)
  ULONG PageKernelStacks : 1;              // offset: 0x0 (0)
  ULONG CheckZeroPages : 1;                // offset: 0x0 (0)
  ULONG ProcessorPrewalks : 1;             // offset: 0x0 (0)
  ULONG ProcessorPostwalks : 1;            // offset: 0x0 (0)
  ULONG CoverageBuild : 1;                 // offset: 0x0 (0)
  ULONG AccessBitReplacementDisabled : 1;  // offset: 0x0 (0)
  ULONG CheckExecute : 1;                  // offset: 0x0 (0)
  ULONG ZeroNonCachedByConverting : 1;     // offset: 0x0 (0)
  ULONG ZeroWriteCombinedByConverting : 1; // offset: 0x0 (0)
  ULONG ProtectedPagesEnabled : 1;         // offset: 0x0 (0)
  ULONG StrongCodeGuarantees : 1;          // offset: 0x0 (0)
  ULONG HardCodeGuarantees : 1;            // offset: 0x0 (0)
  ULONG ExecutePagePrivilegeRequired : 1;  // offset: 0x0 (0)
  ULONG StrongPageIdentity : 1;            // offset: 0x0 (0)
  ULONG SecureRelocations : 1;             // offset: 0x0 (0)
};

// 0xc (12) bytes
struct _IOP_IRP_EXTENSION_STATUS {
  ULONG Flags;      // offset: 0x0 (0)
  ULONG ActivityId; // offset: 0x4 (4)
  ULONG IoTracking; // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _LEARNING_MODE_DATA {
  ULONG Settings;              // offset: 0x0 (0)
  UCHAR Enabled;               // offset: 0x4 (4)
  UCHAR PermissiveModeEnabled; // offset: 0x5 (5)
};

// 0xc (12) bytes
struct _OBJECT_REF_STACK_INFO {
  ULONG Sequence;   // offset: 0x0 (0)
  USHORT Index;     // offset: 0x4 (4)
  USHORT NumTraces; // offset: 0x6 (6)
  ULONG Tag;        // offset: 0x8 (8)
};

// 0x58 (88) bytes
struct _THERMAL_INFORMATION_EX {
  ULONG ThermalStamp;            // offset: 0x0 (0)
  ULONG ThermalConstant1;        // offset: 0x4 (4)
  ULONG ThermalConstant2;        // offset: 0x8 (8)
  ULONG SamplingPeriod;          // offset: 0xc (12)
  ULONG CurrentTemperature;      // offset: 0x10 (16)
  ULONG PassiveTripPoint;        // offset: 0x14 (20)
  ULONG ThermalStandbyTripPoint; // offset: 0x18 (24)
  ULONG CriticalTripPoint;       // offset: 0x1c (28)
  UCHAR ActiveTripPointCount;    // offset: 0x20 (32)
  ULONG ActiveTripPoint[10];     // offset: 0x24 (36)
  ULONG S4TransitionTripPoint;   // offset: 0x4c (76)
  ULONG MinimumThrottle;         // offset: 0x50 (80)
  ULONG OverThrottleThreshold;   // offset: 0x54 (84)
};

// 0x48 (72) bytes
struct _CM_DIRTY_VECTOR_LOG_ENTRY {
  struct _ETHREAD *Thread;                   // offset: 0x0 (0)
  enum _CM_DIRTY_VECTOR_OPERATION Operation; // offset: 0x8 (8)
  union {
    struct {
      ULONG Start;                // offset: 0x0 (0)
      ULONG Length;               // offset: 0x4 (4)
    } DirtyVectorModifiedContext; // offset: 0xc (12)
    struct {
      ULONG RangeCount;        // offset: 0x0 (0)
      ULONG SetBitCount;       // offset: 0x4 (4)
    } DirtyDataCaptureContext; // offset: 0xc (12)
    struct {
      ULONG Context1; // offset: 0x0 (0)
      ULONG Context2; // offset: 0x4 (4)
    } Raw;            // offset: 0xc (12)

  } Data;         // offset: 0xc (12)
  VOID *Stack[6]; // offset: 0x18 (24)
};

typedef enum KTMOH_CommitTransaction_Result {} KTMOH_CommitTransaction_Result;

// 0x8 (8) bytes
struct _KTRANSACTION_HISTORY {
  enum KTMOH_CommitTransaction_Result RecordType; // offset: 0x0 (0)
  ULONG Payload;                                  // offset: 0x4 (4)
};

// 0x68 (104) bytes
struct _RTL_AVL_TABLE {
  struct _RTL_BALANCED_LINKS BalancedRoot; // offset: 0x0 (0)
  VOID *OrderedPointer;                    // offset: 0x20 (32)
  ULONG WhichOrderedElement;               // offset: 0x28 (40)
  ULONG NumberGenericTableElements;        // offset: 0x2c (44)
  ULONG DepthOfTree;                       // offset: 0x30 (48)
  struct _RTL_BALANCED_LINKS *RestartKey;  // offset: 0x38 (56)
  ULONG DeleteCount;                       // offset: 0x40 (64)
  enum _RTL_GENERIC_COMPARE_RESULTS (*CompareRoutine)(
      struct _RTL_AVL_TABLE *arg1, VOID *arg2, VOID *arg3); // offset: 0x48 (72)
  VOID *(*AllocateRoutine)(struct _RTL_AVL_TABLE *arg1,
                           ULONG arg2); // offset: 0x50 (80)
  VOID(*FreeRoutine)
  (struct _RTL_AVL_TABLE *arg1, VOID *arg2); // offset: 0x58 (88)
  VOID *TableContext;                        // offset: 0x60 (96)
};

// 0xa8 (168) bytes
struct _KTMOBJECT_NAMESPACE {
  struct _RTL_AVL_TABLE Table; // offset: 0x0 (0)
  struct _KMUTANT Mutex;       // offset: 0x68 (104)
  USHORT LinksOffset;          // offset: 0xa0 (160)
  USHORT GuidOffset;           // offset: 0xa2 (162)
  UCHAR Expired;               // offset: 0xa4 (164)
};

// 0x8 (8) bytes
struct _CM_CELL_REMAP_BLOCK {
  ULONG OldCell; // offset: 0x0 (0)
  ULONG NewCell; // offset: 0x4 (4)
};

// 0x488 (1160) bytes
struct _CM_DIRTY_VECTOR_LOG {
  volatile ULONG Next;                       // offset: 0x0 (0)
  ULONG Size;                                // offset: 0x4 (4)
  struct _CM_DIRTY_VECTOR_LOG_ENTRY Log[16]; // offset: 0x8 (8)
};

// 0x28 (40) bytes
struct _CM_WORKITEM {
  struct _LIST_ENTRY ListEntry;      // offset: 0x0 (0)
  ULONG Private;                     // offset: 0x10 (16)
  VOID (*WorkerRoutine)(VOID *arg1); // offset: 0x18 (24)
  VOID *Parameter;                   // offset: 0x20 (32)
};

// 0x8 (8) bytes
struct _KENLISTMENT_HISTORY {
  ULONG Notification;               // offset: 0x0 (0)
  enum _KENLISTMENT_STATE NewState; // offset: 0x4 (4)
};

// 0x18 (24) bytes
struct _CM_NAME_HASH {
  ULONG ConvKey;                  // offset: 0x0 (0)
  struct _CM_NAME_HASH *NextHash; // offset: 0x8 (8)
  USHORT NameLength;              // offset: 0x10 (16)
  WCHAR Name[1];                  // offset: 0x12 (18)
};

// 0x20 (32) bytes
struct _CM_NAME_CONTROL_BLOCK {
  ULONG Compressed : 1; // offset: 0x0 (0)
  ULONG RefCount : 31;  // offset: 0x0 (0)
  union {
    struct _CM_NAME_HASH NameHash; // offset: 0x8 (8)
    struct {
      ULONG ConvKey;                 // offset: 0x8 (8)
      struct _CM_KEY_HASH *NextHash; // offset: 0x10 (16)
      USHORT NameLength;             // offset: 0x18 (24)
      WCHAR Name[1];                 // offset: 0x1a (26)
    };
  };
};

// 0x4 (4) bytes
union _KSTACK_COUNT {
  LONG Value;            // offset: 0x0 (0)
  ULONG State : 3;       // offset: 0x0 (0)
  ULONG StackCount : 29; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _INTERRUPT_HT_INTR_INFO {
  union {
    struct {
      ULONG Mask : 1;            // offset: 0x0 (0)
      ULONG Polarity : 1;        // offset: 0x0 (0)
      ULONG MessageType : 3;     // offset: 0x0 (0)
      ULONG RequestEOI : 1;      // offset: 0x0 (0)
      ULONG DestinationMode : 1; // offset: 0x0 (0)
      ULONG MessageType3 : 1;    // offset: 0x0 (0)
      ULONG Destination : 8;     // offset: 0x0 (0)
      ULONG Vector : 8;          // offset: 0x0 (0)
      ULONG ExtendedAddress : 8; // offset: 0x0 (0)
    } bits;                      // offset: 0x0 (0)
    ULONG AsULONG;               // offset: 0x0 (0)

  } LowPart; // offset: 0x0 (0)
  union {
    struct {
      ULONG ExtendedDestination : 24; // offset: 0x0 (0)
      ULONG Reserved : 6;             // offset: 0x0 (0)
      ULONG PassPW : 1;               // offset: 0x0 (0)
      ULONG WaitingForEOI : 1;        // offset: 0x0 (0)
    } bits;                           // offset: 0x4 (4)
    ULONG AsULONG;                    // offset: 0x4 (4)

  } HighPart; // offset: 0x4 (4)
};

// 0x1c (28) bytes
struct _WHEA_NOTIFICATION_DESCRIPTOR {
  UCHAR Type;                           // offset: 0x0 (0)
  UCHAR Length;                         // offset: 0x1 (1)
  union _WHEA_NOTIFICATION_FLAGS Flags; // offset: 0x2 (2)
  union {
    struct {
      ULONG PollInterval; // offset: 0x0 (0)
    } Polled;             // offset: 0x4 (4)
    struct {
      ULONG PollInterval;             // offset: 0x0 (0)
      ULONG Vector;                   // offset: 0x4 (4)
      ULONG SwitchToPollingThreshold; // offset: 0x8 (8)
      ULONG SwitchToPollingWindow;    // offset: 0xc (12)
      ULONG ErrorThreshold;           // offset: 0x10 (16)
      ULONG ErrorThresholdWindow;     // offset: 0x14 (20)
    } Interrupt;                      // offset: 0x4 (4)
    struct {
      ULONG PollInterval;             // offset: 0x0 (0)
      ULONG Vector;                   // offset: 0x4 (4)
      ULONG SwitchToPollingThreshold; // offset: 0x8 (8)
      ULONG SwitchToPollingWindow;    // offset: 0xc (12)
      ULONG ErrorThreshold;           // offset: 0x10 (16)
      ULONG ErrorThresholdWindow;     // offset: 0x14 (20)
    } LocalInterrupt;                 // offset: 0x4 (4)
    struct {
      ULONG PollInterval;             // offset: 0x0 (0)
      ULONG Vector;                   // offset: 0x4 (4)
      ULONG SwitchToPollingThreshold; // offset: 0x8 (8)
      ULONG SwitchToPollingWindow;    // offset: 0xc (12)
      ULONG ErrorThreshold;           // offset: 0x10 (16)
      ULONG ErrorThresholdWindow;     // offset: 0x14 (20)
    } Sci;                            // offset: 0x4 (4)
    struct {
      ULONG PollInterval;             // offset: 0x0 (0)
      ULONG Vector;                   // offset: 0x4 (4)
      ULONG SwitchToPollingThreshold; // offset: 0x8 (8)
      ULONG SwitchToPollingWindow;    // offset: 0xc (12)
      ULONG ErrorThreshold;           // offset: 0x10 (16)
      ULONG ErrorThresholdWindow;     // offset: 0x14 (20)
    } Nmi;                            // offset: 0x4 (4)

  } u; // offset: 0x4 (4)
};

// 0x4 (4) bytes
struct _WHEA_PCI_SLOT_NUMBER {
  union {
    struct {
      ULONG DeviceNumber : 5;   // offset: 0x0 (0)
      ULONG FunctionNumber : 3; // offset: 0x0 (0)
      ULONG Reserved : 24;      // offset: 0x0 (0)
    } bits;                     // offset: 0x0 (0)
    ULONG AsULONG;              // offset: 0x0 (0)

  } u; // offset: 0x0 (0)
};

// 0x4 (4) bytes
union _XPF_MCE_FLAGS {
  ULONG MCG_CapabilityRW : 1;    // offset: 0x0 (0)
  ULONG MCG_GlobalControlRW : 1; // offset: 0x0 (0)
  ULONG Reserved : 30;           // offset: 0x0 (0)
  ULONG AsULONG;                 // offset: 0x0 (0)
};

// 0x2c (44) bytes
struct _WHEA_AER_BRIDGE_DESCRIPTOR {
  USHORT Type;                              // offset: 0x0 (0)
  UCHAR Enabled;                            // offset: 0x2 (2)
  UCHAR Reserved;                           // offset: 0x3 (3)
  ULONG BusNumber;                          // offset: 0x4 (4)
  struct _WHEA_PCI_SLOT_NUMBER Slot;        // offset: 0x8 (8)
  USHORT DeviceControl;                     // offset: 0xc (12)
  union _AER_BRIDGE_DESCRIPTOR_FLAGS Flags; // offset: 0xe (14)
  ULONG UncorrectableErrorMask;             // offset: 0x10 (16)
  ULONG UncorrectableErrorSeverity;         // offset: 0x14 (20)
  ULONG CorrectableErrorMask;               // offset: 0x18 (24)
  ULONG AdvancedCapsAndControl;             // offset: 0x1c (28)
  ULONG SecondaryUncorrectableErrorMask;    // offset: 0x20 (32)
  ULONG SecondaryUncorrectableErrorSev;     // offset: 0x24 (36)
  ULONG SecondaryCapsAndControl;            // offset: 0x28 (40)
};

// 0x20 (32) bytes
struct _WHEA_AER_ENDPOINT_DESCRIPTOR {
  USHORT Type;                                // offset: 0x0 (0)
  UCHAR Enabled;                              // offset: 0x2 (2)
  UCHAR Reserved;                             // offset: 0x3 (3)
  ULONG BusNumber;                            // offset: 0x4 (4)
  struct _WHEA_PCI_SLOT_NUMBER Slot;          // offset: 0x8 (8)
  USHORT DeviceControl;                       // offset: 0xc (12)
  union _AER_ENDPOINT_DESCRIPTOR_FLAGS Flags; // offset: 0xe (14)
  ULONG UncorrectableErrorMask;               // offset: 0x10 (16)
  ULONG UncorrectableErrorSeverity;           // offset: 0x14 (20)
  ULONG CorrectableErrorMask;                 // offset: 0x18 (24)
  ULONG AdvancedCapsAndControl;               // offset: 0x1c (28)
};

// 0x24 (36) bytes
struct _WHEA_AER_ROOTPORT_DESCRIPTOR {
  USHORT Type;                                // offset: 0x0 (0)
  UCHAR Enabled;                              // offset: 0x2 (2)
  UCHAR Reserved;                             // offset: 0x3 (3)
  ULONG BusNumber;                            // offset: 0x4 (4)
  struct _WHEA_PCI_SLOT_NUMBER Slot;          // offset: 0x8 (8)
  USHORT DeviceControl;                       // offset: 0xc (12)
  union _AER_ROOTPORT_DESCRIPTOR_FLAGS Flags; // offset: 0xe (14)
  ULONG UncorrectableErrorMask;               // offset: 0x10 (16)
  ULONG UncorrectableErrorSeverity;           // offset: 0x14 (20)
  ULONG CorrectableErrorMask;                 // offset: 0x18 (24)
  ULONG AdvancedCapsAndControl;               // offset: 0x1c (28)
  ULONG RootErrorCommand;                     // offset: 0x20 (32)
};

// 0x4 (4) bytes
union _WHEAP_ERROR_RECORD_WRAPPER_FLAGS {
  ULONG Preallocated : 1;            // offset: 0x0 (0)
  ULONG FromPersistentStore : 1;     // offset: 0x0 (0)
  ULONG PlatformPfaControl : 1;      // offset: 0x0 (0)
  ULONG PlatformDirectedOffline : 1; // offset: 0x0 (0)
  ULONG Reserved : 28;               // offset: 0x0 (0)
  ULONG AsULONG;                     // offset: 0x0 (0)
};

// 0x30 (48) bytes
struct _WHEAP_ERROR_SOURCE_TABLE {
  ULONG Signature;           // offset: 0x0 (0)
  LONG Count;                // offset: 0x4 (4)
  struct _LIST_ENTRY Items;  // offset: 0x8 (8)
  struct _KEVENT InsertLock; // offset: 0x18 (24)
};

// 0x28 (40) bytes
struct _OBP_LOOKUP_CONTEXT {
  struct _OBJECT_DIRECTORY *Directory;        // offset: 0x0 (0)
  VOID *Object;                               // offset: 0x8 (8)
  struct _OBJECT_DIRECTORY_ENTRY **EntryLink; // offset: 0x10 (16)
  ULONG HashValue;                            // offset: 0x18 (24)
  USHORT HashIndex;                           // offset: 0x1c (28)
  UCHAR DirectoryLocked;                      // offset: 0x1e (30)
  UCHAR LockedExclusive;                      // offset: 0x1f (31)
  ULONG LockStateSignature;                   // offset: 0x20 (32)
};

// 0x18 (24) bytes
struct _OBJECT_DIRECTORY_ENTRY {
  struct _OBJECT_DIRECTORY_ENTRY *ChainLink; // offset: 0x0 (0)
  VOID *Object;                              // offset: 0x8 (8)
  ULONG HashValue;                           // offset: 0x10 (16)
};

// 0x40 (64) bytes
struct _DEVICE_MAP {
  struct _OBJECT_DIRECTORY *DosDevicesDirectory;       // offset: 0x0 (0)
  struct _OBJECT_DIRECTORY *GlobalDosDevicesDirectory; // offset: 0x8 (8)
  VOID *DosDevicesDirectoryHandle;                     // offset: 0x10 (16)
  volatile LONG ReferenceCount;                        // offset: 0x18 (24)
  ULONG DriveMap;                                      // offset: 0x1c (28)
  UCHAR DriveType[32];                                 // offset: 0x20 (32)
};

// 0x30 (48) bytes
struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION {
  ULONG SecurityAttributeCount;                     // offset: 0x0 (0)
  struct _LIST_ENTRY SecurityAttributesList;        // offset: 0x8 (8)
  ULONG WorkingSecurityAttributeCount;              // offset: 0x18 (24)
  struct _LIST_ENTRY WorkingSecurityAttributesList; // offset: 0x20 (32)
};

// 0x10 (16) bytes
struct _SID_AND_ATTRIBUTES {
  VOID *Sid;        // offset: 0x0 (0)
  ULONG Attributes; // offset: 0x8 (8)
};

// 0x4 (4) bytes
struct _TOKEN_MANDATORY_POLICY {
  ULONG Policy; // offset: 0x0 (0)
};

// 0x50 (80) bytes
struct _IOP_FILE_OBJECT_EXTENSION {
  ULONG FoExtFlags;                         // offset: 0x0 (0)
  VOID *FoExtPerTypeExtension[8];           // offset: 0x8 (8)
  enum _IOP_PRIORITY_HINT FoIoPriorityHint; // offset: 0x48 (72)
};

// 0x10 (16) bytes
struct _OBJECT_DUMP_CONTROL {
  VOID *Stream; // offset: 0x0 (0)
  ULONG Detail; // offset: 0x8 (8)
};

// 0x30 (48) bytes
struct _OBJECT_ATTRIBUTES {
  ULONG Length;                       // offset: 0x0 (0)
  VOID *RootDirectory;                // offset: 0x8 (8)
  struct _UNICODE_STRING *ObjectName; // offset: 0x10 (16)
  ULONG Attributes;                   // offset: 0x18 (24)
  VOID *SecurityDescriptor;           // offset: 0x20 (32)
  VOID *SecurityQualityOfService;     // offset: 0x28 (40)
};

// 0x8 (8) bytes
struct _BLOB_COUNTERS {
  ULONG CreatedObjects; // offset: 0x0 (0)
  ULONG DeletedObjects; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _ALPC_MESSAGE_ATTRIBUTES {
  ULONG AllocatedAttributes; // offset: 0x0 (0)
  ULONG ValidAttributes;     // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _HEAP_EXTENDED_ENTRY {
  VOID *Reserved; // offset: 0x0 (0)
  union {
    struct {
      USHORT FunctionIndex; // offset: 0x8 (8)
      USHORT ContextValue;  // offset: 0xa (10)
    };
    ULONG InterceptorValue; // offset: 0x8 (8)
  };
  USHORT UnusedBytesLength;     // offset: 0xc (12)
  UCHAR EntryOffset;            // offset: 0xe (14)
  UCHAR ExtendedBlockSignature; // offset: 0xf (15)
};

// 0x20 (32) bytes
struct VACB_LEVEL_ALLOCATION_LIST {
  struct _LIST_ENTRY VacbLevelList; // offset: 0x0 (0)
  VOID *VacbLevelWithBcbListHeads;  // offset: 0x10 (16)
  ULONG VacbLevelsAllocated;        // offset: 0x18 (24)
};

// 0x20 (32) bytes
struct _CC_ASYNC_READ_CONTEXT {
  UCHAR (*CompletionRoutine)(VOID *arg1); // offset: 0x0 (0)
  VOID *Context;                          // offset: 0x8 (8)
  struct _MDL *Mdl;                       // offset: 0x10 (16)
  CHAR RequestorMode;                     // offset: 0x18 (24)
  ULONG NestingLevel;                     // offset: 0x1c (28)
};

// 0x10 (16) bytes
struct _VACB_ARRAY_HEADER {
  ULONG VacbArrayIndex;     // offset: 0x0 (0)
  ULONG MappingCount;       // offset: 0x4 (4)
  ULONG HighestMappedIndex; // offset: 0x8 (8)
  ULONG Reserved;           // offset: 0xc (12)
};

// 0x4 (4) bytes
struct _PRIVATE_CACHE_MAP_FLAGS {
  ULONG DontUse : 16;           // offset: 0x0 (0)
  ULONG ReadAheadActive : 1;    // offset: 0x0 (0)
  ULONG ReadAheadEnabled : 1;   // offset: 0x0 (0)
  ULONG PagePriority : 3;       // offset: 0x0 (0)
  ULONG PipelineReadAheads : 1; // offset: 0x0 (0)
  ULONG Available : 10;         // offset: 0x0 (0)
};

// 0x4 (4) bytes
union _POP_FX_DEVICE_STATUS {
  LONG Value;                     // offset: 0x0 (0)
  ULONG SystemTransition : 1;     // offset: 0x0 (0)
  ULONG PepD0Notify : 1;          // offset: 0x0 (0)
  ULONG IdleTimerOn : 1;          // offset: 0x0 (0)
  ULONG IgnoreIdleTimeout : 1;    // offset: 0x0 (0)
  ULONG IrpInUse : 1;             // offset: 0x0 (0)
  ULONG IrpPending : 1;           // offset: 0x0 (0)
  ULONG DPNRDeviceNotified : 1;   // offset: 0x0 (0)
  ULONG DPNRReceivedFromPep : 1;  // offset: 0x0 (0)
  ULONG IrpFirstPendingIndex : 1; // offset: 0x0 (0)
  ULONG IrpLastPendingIndex : 1;  // offset: 0x0 (0)
  ULONG Reserved : 22;            // offset: 0x0 (0)
};

// 0x4 (4) bytes
union _POP_FX_PERF_FLAGS {
  LONG Value;                    // offset: 0x0 (0)
  ULONG Progress : 3;            // offset: 0x0 (0)
  ULONG Reserved : 24;           // offset: 0x0 (0)
  ULONG Synchronicity : 2;       // offset: 0x0 (0)
  ULONG RequestPepCompleted : 1; // offset: 0x0 (0)
  ULONG RequestSucceeded : 1;    // offset: 0x0 (0)
  ULONG NestedCallback : 1;      // offset: 0x0 (0)
};

// 0x8 (8) bytes
union _POP_FX_COMPONENT_FLAGS {
  struct {
    LONG Value;  // offset: 0x0 (0)
    LONG Value2; // offset: 0x4 (4)
  };
  ULONG RefCount : 30; // offset: 0x0 (0)
  ULONG Idling : 1;    // offset: 0x0 (0)
  struct {
    ULONG Active : 1;               // offset: 0x0 (0)
    ULONG CriticalIdleOverride : 1; // offset: 0x4 (4)
    ULONG ResidentOverride : 1;     // offset: 0x4 (4)
  };
  ULONG Reserved : 30; // offset: 0x4 (4)
};

// 0x10 (16) bytes
union _CPU_INFO {
  ULONG AsUINT32[4]; // offset: 0x0 (0)
  struct {
    ULONG Eax; // offset: 0x0 (0)
    ULONG Ebx; // offset: 0x4 (4)
  };
  struct {
    ULONG Ecx; // offset: 0x8 (8)
  };
  ULONG Edx; // offset: 0xc (12)
};

// 0x4 (4) bytes
union _PEP_ACPI_RESOURCE_FLAGS {
  ULONG AsULong;            // offset: 0x0 (0)
  ULONG Shared : 1;         // offset: 0x0 (0)
  ULONG Wake : 1;           // offset: 0x0 (0)
  ULONG ResourceUsage : 1;  // offset: 0x0 (0)
  ULONG SlaveMode : 1;      // offset: 0x0 (0)
  ULONG AddressingMode : 1; // offset: 0x0 (0)
  ULONG SharedMode : 1;     // offset: 0x0 (0)
  ULONG Reserved : 26;      // offset: 0x0 (0)
};

// 0x28 (40) bytes
struct _PEP_ACPI_SPB_RESOURCE {
  enum _PEP_ACPI_RESOURCE_TYPE Type;          // offset: 0x0 (0)
  union _PEP_ACPI_RESOURCE_FLAGS Flags;       // offset: 0x4 (4)
  USHORT TypeSpecificFlags;                   // offset: 0x8 (8)
  UCHAR ResourceSourceIndex;                  // offset: 0xa (10)
  struct _UNICODE_STRING *ResourceSourceName; // offset: 0x10 (16)
  CHAR *VendorData;                           // offset: 0x18 (24)
  USHORT VendorDataLength;                    // offset: 0x20 (32)
};

// 0x48 (72) bytes
struct _PEP_ACPI_GPIO_RESOURCE {
  enum _PEP_ACPI_RESOURCE_TYPE Type;                   // offset: 0x0 (0)
  union _PEP_ACPI_RESOURCE_FLAGS Flags;                // offset: 0x4 (4)
  enum _KINTERRUPT_MODE InterruptType;                 // offset: 0x8 (8)
  enum _KINTERRUPT_POLARITY InterruptPolarity;         // offset: 0xc (12)
  enum _GPIO_PIN_CONFIG_TYPE PinConfig;                // offset: 0x10 (16)
  enum _GPIO_PIN_IORESTRICTION_TYPE IoRestrictionType; // offset: 0x14 (20)
  USHORT DriveStrength;                                // offset: 0x18 (24)
  USHORT DebounceTimeout;                              // offset: 0x1a (26)
  USHORT *PinTable;                                    // offset: 0x20 (32)
  USHORT PinCount;                                     // offset: 0x28 (40)
  UCHAR ResourceSourceIndex;                           // offset: 0x2a (42)
  struct _UNICODE_STRING *ResourceSourceName;          // offset: 0x30 (48)
  UCHAR *VendorData;                                   // offset: 0x38 (56)
  USHORT VendorDataLength;                             // offset: 0x40 (64)
};

// 0x38 (56) bytes
struct _PEP_ACPI_SPB_UART_RESOURCE {
  struct _PEP_ACPI_SPB_RESOURCE SpbCommon; // offset: 0x0 (0)
  ULONG BaudRate;                          // offset: 0x28 (40)
  USHORT RxBufferSize;                     // offset: 0x2c (44)
  USHORT TxBufferSize;                     // offset: 0x2e (46)
  UCHAR Parity;                            // offset: 0x30 (48)
  UCHAR LinesInUse;                        // offset: 0x31 (49)
};

// 0x38 (56) bytes
struct _PEP_ACPI_SPB_SPI_RESOURCE {
  struct _PEP_ACPI_SPB_RESOURCE SpbCommon; // offset: 0x0 (0)
  ULONG ConnectionSpeed;                   // offset: 0x28 (40)
  UCHAR DataBitLength;                     // offset: 0x2c (44)
  UCHAR Phase;                             // offset: 0x2d (45)
  UCHAR Polarity;                          // offset: 0x2e (46)
  USHORT DeviceSelection;                  // offset: 0x30 (48)
};

// 0x30 (48) bytes
struct _PEP_ACPI_SPB_I2C_RESOURCE {
  struct _PEP_ACPI_SPB_RESOURCE SpbCommon; // offset: 0x0 (0)
  ULONG ConnectionSpeed;                   // offset: 0x28 (40)
  USHORT SlaveAddress;                     // offset: 0x2c (44)
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

// 0xc (12) bytes
struct _PPC_DBGKD_CONTROL_SET {
  ULONG Continue;           // offset: 0x0 (0)
  ULONG CurrentSymbolStart; // offset: 0x4 (4)
  ULONG CurrentSymbolEnd;   // offset: 0x8 (8)
};

// 0xc (12) bytes
struct _ARMCE_DBGKD_CONTROL_SET {
  ULONG Continue;           // offset: 0x0 (0)
  ULONG CurrentSymbolStart; // offset: 0x4 (4)
  ULONG CurrentSymbolEnd;   // offset: 0x8 (8)
};

// 0xc (12) bytes
struct _ARM_DBGKD_CONTROL_SET {
  ULONG Continue;           // offset: 0x0 (0)
  ULONG CurrentSymbolStart; // offset: 0x4 (4)
  ULONG CurrentSymbolEnd;   // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _X86_DBGKD_CONTROL_SET {
  ULONG TraceFlag;          // offset: 0x0 (0)
  ULONG Dr7;                // offset: 0x4 (4)
  ULONG CurrentSymbolStart; // offset: 0x8 (8)
  ULONG CurrentSymbolEnd;   // offset: 0xc (12)
};

// 0xc (12) bytes
struct _DBGKD_CONTEXT_EX {
  ULONG Offset;      // offset: 0x0 (0)
  ULONG ByteCount;   // offset: 0x4 (4)
  ULONG BytesCopied; // offset: 0x8 (8)
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

// 0x8c (140) bytes
struct _X86_KTRAP_FRAME_BLUE {
  ULONG DbgEbp;               // offset: 0x0 (0)
  ULONG DbgEip;               // offset: 0x4 (4)
  ULONG DbgArgMark;           // offset: 0x8 (8)
  USHORT TempSegCs;           // offset: 0xc (12)
  UCHAR Logging;              // offset: 0xe (14)
  UCHAR FrameType;            // offset: 0xf (15)
  ULONG TempEsp;              // offset: 0x10 (16)
  ULONG Dr0;                  // offset: 0x14 (20)
  ULONG Dr1;                  // offset: 0x18 (24)
  ULONG Dr2;                  // offset: 0x1c (28)
  ULONG Dr3;                  // offset: 0x20 (32)
  ULONG Dr6;                  // offset: 0x24 (36)
  ULONG Dr7;                  // offset: 0x28 (40)
  ULONG SegGs;                // offset: 0x2c (44)
  ULONG SegEs;                // offset: 0x30 (48)
  ULONG SegDs;                // offset: 0x34 (52)
  ULONG Edx;                  // offset: 0x38 (56)
  ULONG Ecx;                  // offset: 0x3c (60)
  ULONG Eax;                  // offset: 0x40 (64)
  UCHAR PreviousPreviousMode; // offset: 0x44 (68)
  UCHAR EntropyQueueDpc;      // offset: 0x45 (69)
  UCHAR Reserved[2];          // offset: 0x46 (70)
  ULONG MxCsr;                // offset: 0x48 (72)
  ULONG ExceptionList;        // offset: 0x4c (76)
  ULONG SegFs;                // offset: 0x50 (80)
  ULONG Edi;                  // offset: 0x54 (84)
  ULONG Esi;                  // offset: 0x58 (88)
  ULONG Ebx;                  // offset: 0x5c (92)
  ULONG Ebp;                  // offset: 0x60 (96)
  ULONG ErrCode;              // offset: 0x64 (100)
  ULONG Eip;                  // offset: 0x68 (104)
  ULONG SegCs;                // offset: 0x6c (108)
  ULONG EFlags;               // offset: 0x70 (112)
  ULONG HardwareEsp;          // offset: 0x74 (116)
  ULONG HardwareSegSs;        // offset: 0x78 (120)
  ULONG V86Es;                // offset: 0x7c (124)
  ULONG V86Ds;                // offset: 0x80 (128)
  ULONG V86Fs;                // offset: 0x84 (132)
  ULONG V86Gs;                // offset: 0x88 (136)
};

// 0x8c (140) bytes
struct _X86_KTRAP_FRAME {
  ULONG DbgEbp;               // offset: 0x0 (0)
  ULONG DbgEip;               // offset: 0x4 (4)
  ULONG DbgArgMark;           // offset: 0x8 (8)
  ULONG DbgArgPointer;        // offset: 0xc (12)
  ULONG TempSegCs;            // offset: 0x10 (16)
  ULONG TempEsp;              // offset: 0x14 (20)
  ULONG Dr0;                  // offset: 0x18 (24)
  ULONG Dr1;                  // offset: 0x1c (28)
  ULONG Dr2;                  // offset: 0x20 (32)
  ULONG Dr3;                  // offset: 0x24 (36)
  ULONG Dr6;                  // offset: 0x28 (40)
  ULONG Dr7;                  // offset: 0x2c (44)
  ULONG SegGs;                // offset: 0x30 (48)
  ULONG SegEs;                // offset: 0x34 (52)
  ULONG SegDs;                // offset: 0x38 (56)
  ULONG Edx;                  // offset: 0x3c (60)
  ULONG Ecx;                  // offset: 0x40 (64)
  ULONG Eax;                  // offset: 0x44 (68)
  UCHAR PreviousPreviousMode; // offset: 0x48 (72)
  UCHAR EntropyQueueDpc;      // offset: 0x49 (73)
  UCHAR Reserved[2];          // offset: 0x4a (74)
  ULONG ExceptionList;        // offset: 0x4c (76)
  ULONG SegFs;                // offset: 0x50 (80)
  ULONG Edi;                  // offset: 0x54 (84)
  ULONG Esi;                  // offset: 0x58 (88)
  ULONG Ebx;                  // offset: 0x5c (92)
  ULONG Ebp;                  // offset: 0x60 (96)
  ULONG ErrCode;              // offset: 0x64 (100)
  ULONG Eip;                  // offset: 0x68 (104)
  ULONG SegCs;                // offset: 0x6c (108)
  ULONG EFlags;               // offset: 0x70 (112)
  ULONG HardwareEsp;          // offset: 0x74 (116)
  ULONG HardwareSegSs;        // offset: 0x78 (120)
  ULONG V86Es;                // offset: 0x7c (124)
  ULONG V86Ds;                // offset: 0x80 (128)
  ULONG V86Fs;                // offset: 0x84 (132)
  ULONG V86Gs;                // offset: 0x88 (136)
};

// 0x10 (16) bytes
struct _PNP_ASSIGN_RESOURCES_CONTEXT {
  ULONG IncludeFailedDevices;           // offset: 0x0 (0)
  ULONG DeviceCount;                    // offset: 0x4 (4)
  struct _DEVICE_OBJECT *DeviceList[1]; // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _POP_FX_DEPENDENT {
  ULONG Index;         // offset: 0x0 (0)
  ULONG ProviderIndex; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _POP_FX_PROVIDER {
  ULONG Index;      // offset: 0x0 (0)
  UCHAR Activating; // offset: 0x4 (4)
};

// 0x30 (48) bytes
struct DOCK_INTERFACE {
  USHORT Size;                              // offset: 0x0 (0)
  USHORT Version;                           // offset: 0x2 (2)
  VOID *Context;                            // offset: 0x8 (8)
  VOID (*InterfaceReference)(VOID *arg1);   // offset: 0x10 (16)
  VOID (*InterfaceDereference)(VOID *arg1); // offset: 0x18 (24)
  ULONG(*ProfileDepartureSetMode)
  (VOID *arg1, enum PROFILE_DEPARTURE_STYLE arg2); // offset: 0x20 (32)
  ULONG (*ProfileDepartureUpdate)(VOID *arg1);     // offset: 0x28 (40)
};

// 0x68 (104) bytes
struct _PO_DEVICE_NOTIFY {
  struct _LIST_ENTRY Link;             // offset: 0x0 (0)
  struct _LIST_ENTRY PowerChildren;    // offset: 0x10 (16)
  struct _LIST_ENTRY PowerParents;     // offset: 0x20 (32)
  struct _DEVICE_OBJECT *TargetDevice; // offset: 0x30 (48)
  UCHAR OrderLevel;                    // offset: 0x38 (56)
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x40 (64)
  USHORT *DeviceName;                  // offset: 0x48 (72)
  USHORT *DriverName;                  // offset: 0x50 (80)
  ULONG ChildCount;                    // offset: 0x58 (88)
  ULONG ActiveChild;                   // offset: 0x5c (92)
  ULONG ParentCount;                   // offset: 0x60 (96)
  ULONG ActiveParent;                  // offset: 0x64 (100)
};

// 0x10 (16) bytes
struct _DEVICE_RELATIONS {
  ULONG Count;                       // offset: 0x0 (0)
  struct _DEVICE_OBJECT *Objects[1]; // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _STRING32 {
  USHORT Length;        // offset: 0x0 (0)
  USHORT MaximumLength; // offset: 0x2 (2)
  ULONG Buffer;         // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _CLIENT_ID32 {
  ULONG UniqueProcess; // offset: 0x0 (0)
  ULONG UniqueThread;  // offset: 0x4 (4)
};

// 0x18 (24) bytes
struct _PORT_MESSAGE32 {
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
    struct _CLIENT_ID32 ClientId; // offset: 0x8 (8)
    double DoNotUseThisField;     // offset: 0x8 (8)
  };
  ULONG MessageId; // offset: 0x10 (16)
  union {
    ULONG ClientViewSize; // offset: 0x14 (20)
    ULONG CallbackId;     // offset: 0x14 (20)
  };
};

// 0x1c (28) bytes
struct _NT_TIB32 {
  ULONG ExceptionList; // offset: 0x0 (0)
  ULONG StackBase;     // offset: 0x4 (4)
  ULONG StackLimit;    // offset: 0x8 (8)
  ULONG SubSystemTib;  // offset: 0xc (12)
  union {
    ULONG FiberData; // offset: 0x10 (16)
    ULONG Version;   // offset: 0x10 (16)
  };
  ULONG ArbitraryUserPointer; // offset: 0x14 (20)
  ULONG Self;                 // offset: 0x18 (24)
};

// 0xc (12) bytes
struct _THERMAL_ZONE_COUNTERS {
  ULONG Temperature;     // offset: 0x0 (0)
  ULONG ThrottleLimit;   // offset: 0x4 (4)
  ULONG ThrottleReasons; // offset: 0x8 (8)
};

// 0xb8 (184) bytes
struct _SYNCH_COUNTERS {
  ULONG SpinLockAcquireCount;                           // offset: 0x0 (0)
  ULONG SpinLockContentionCount;                        // offset: 0x4 (4)
  ULONG SpinLockSpinCount;                              // offset: 0x8 (8)
  ULONG IpiSendRequestBroadcastCount;                   // offset: 0xc (12)
  ULONG IpiSendRequestRoutineCount;                     // offset: 0x10 (16)
  ULONG IpiSendSoftwareInterruptCount;                  // offset: 0x14 (20)
  ULONG ExInitializeResourceCount;                      // offset: 0x18 (24)
  ULONG ExReInitializeResourceCount;                    // offset: 0x1c (28)
  ULONG ExDeleteResourceCount;                          // offset: 0x20 (32)
  ULONG ExecutiveResourceAcquiresCount;                 // offset: 0x24 (36)
  ULONG ExecutiveResourceContentionsCount;              // offset: 0x28 (40)
  ULONG ExecutiveResourceReleaseExclusiveCount;         // offset: 0x2c (44)
  ULONG ExecutiveResourceReleaseSharedCount;            // offset: 0x30 (48)
  ULONG ExecutiveResourceConvertsCount;                 // offset: 0x34 (52)
  ULONG ExAcqResExclusiveAttempts;                      // offset: 0x38 (56)
  ULONG ExAcqResExclusiveAcquiresExclusive;             // offset: 0x3c (60)
  ULONG ExAcqResExclusiveAcquiresExclusiveRecursive;    // offset: 0x40 (64)
  ULONG ExAcqResExclusiveWaits;                         // offset: 0x44 (68)
  ULONG ExAcqResExclusiveNotAcquires;                   // offset: 0x48 (72)
  ULONG ExAcqResSharedAttempts;                         // offset: 0x4c (76)
  ULONG ExAcqResSharedAcquiresExclusive;                // offset: 0x50 (80)
  ULONG ExAcqResSharedAcquiresShared;                   // offset: 0x54 (84)
  ULONG ExAcqResSharedAcquiresSharedRecursive;          // offset: 0x58 (88)
  ULONG ExAcqResSharedWaits;                            // offset: 0x5c (92)
  ULONG ExAcqResSharedNotAcquires;                      // offset: 0x60 (96)
  ULONG ExAcqResSharedStarveExclusiveAttempts;          // offset: 0x64 (100)
  ULONG ExAcqResSharedStarveExclusiveAcquiresExclusive; // offset: 0x68 (104)
  ULONG ExAcqResSharedStarveExclusiveAcquiresShared;    // offset: 0x6c (108)
  ULONG ExAcqResSharedStarveExclusiveAcquiresSharedRecursive; // offset: 0x70
                                                              // (112)
  ULONG ExAcqResSharedStarveExclusiveWaits;              // offset: 0x74 (116)
  ULONG ExAcqResSharedStarveExclusiveNotAcquires;        // offset: 0x78 (120)
  ULONG ExAcqResSharedWaitForExclusiveAttempts;          // offset: 0x7c (124)
  ULONG ExAcqResSharedWaitForExclusiveAcquiresExclusive; // offset: 0x80 (128)
  ULONG ExAcqResSharedWaitForExclusiveAcquiresShared;    // offset: 0x84 (132)
  ULONG ExAcqResSharedWaitForExclusiveAcquiresSharedRecursive; // offset: 0x88
                                                               // (136)
  ULONG ExAcqResSharedWaitForExclusiveWaits;           // offset: 0x8c (140)
  ULONG ExAcqResSharedWaitForExclusiveNotAcquires;     // offset: 0x90 (144)
  ULONG ExSetResOwnerPointerExclusive;                 // offset: 0x94 (148)
  ULONG ExSetResOwnerPointerSharedNew;                 // offset: 0x98 (152)
  ULONG ExSetResOwnerPointerSharedOld;                 // offset: 0x9c (156)
  ULONG ExTryToAcqExclusiveAttempts;                   // offset: 0xa0 (160)
  ULONG ExTryToAcqExclusiveAcquires;                   // offset: 0xa4 (164)
  ULONG ExBoostExclusiveOwner;                         // offset: 0xa8 (168)
  ULONG ExBoostSharedOwners;                           // offset: 0xac (172)
  ULONG ExEtwSynchTrackingNotificationsCount;          // offset: 0xb0 (176)
  ULONG ExEtwSynchTrackingNotificationsAccountedCount; // offset: 0xb4 (180)
};

// 0x10 (16) bytes
struct _PCW_DATA {
  const VOID *Data; // offset: 0x0 (0)
  ULONG Size;       // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _HCELL {
  LONG Size; // offset: 0x0 (0)
  union {
    struct {
      union {
        ULONG UserData; // offset: 0x4 (4)
        ULONG Next;     // offset: 0x4 (4)

      } u;     // offset: 0x0 (0)
    } NewCell; // offset: 0x4 (4)

  } u; // offset: 0x4 (4)
};

// 0x18 (24) bytes
struct CMP_OFFSET_ARRAY {
  ULONG FileOffset; // offset: 0x0 (0)
  VOID *DataBuffer; // offset: 0x8 (8)
  ULONG DataLength; // offset: 0x10 (16)
};

// 0x4 (4) bytes
struct _HV_GET_CELL_CONTEXT {
  union {
    ULONG Cell; // offset: 0x0 (0)
    struct {
      ULONG IsInTempBin : 1; // offset: 0x0 (0)
      ULONG Reserved : 31;   // offset: 0x0 (0)
    };
  };
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

// 0x38 (56) bytes
struct _CM_KEY_SECURITY_CACHE {
  ULONG Cell;                                      // offset: 0x0 (0)
  ULONG ConvKey;                                   // offset: 0x4 (4)
  struct _LIST_ENTRY List;                         // offset: 0x8 (8)
  ULONG DescriptorLength;                          // offset: 0x18 (24)
  ULONG RealRefCount;                              // offset: 0x1c (28)
  struct _SECURITY_DESCRIPTOR_RELATIVE Descriptor; // offset: 0x20 (32)
};

// 0x10 (16) bytes
struct _CM_KEY_SECURITY_CACHE_ENTRY {
  ULONG Cell;                                    // offset: 0x0 (0)
  struct _CM_KEY_SECURITY_CACHE *CachedSecurity; // offset: 0x8 (8)
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

// 0x18 (24) bytes
struct _CM_KEY_VALUE {
  USHORT Signature;  // offset: 0x0 (0)
  USHORT NameLength; // offset: 0x2 (2)
  ULONG DataLength;  // offset: 0x4 (4)
  ULONG Data;        // offset: 0x8 (8)
  ULONG Type;        // offset: 0xc (12)
  USHORT Flags;      // offset: 0x10 (16)
  USHORT Spare;      // offset: 0x12 (18)
  WCHAR Name[1];     // offset: 0x14 (20)
};

// 0x8 (8) bytes
struct _MI_CACHED_PTE {
  union {
    struct {
      ULONG GlobalTimeStamp; // offset: 0x0 (0)
      ULONG PteIndex;        // offset: 0x4 (4)
    };
    LONGLONG Long; // offset: 0x0 (0)
  };
};

// 0x48 (72) bytes
struct _MI_CACHED_PTES {
  struct _MI_CACHED_PTE Bins[8]; // offset: 0x0 (0)
  LONG CachedPteCount;           // offset: 0x40 (64)
};

// 0x4 (4) bytes
struct _EX_PUSH_LOCK_AUTO_EXPAND_STATE {
  union {
    struct {
      ULONG Expanded : 1;      // offset: 0x0 (0)
      ULONG Transitioning : 1; // offset: 0x0 (0)
      ULONG Pageable : 1;      // offset: 0x0 (0)
    };
    ULONG Value; // offset: 0x0 (0)
  };
};

// 0x10 (16) bytes
struct _GUID {
  ULONG Data1;    // offset: 0x0 (0)
  USHORT Data2;   // offset: 0x4 (4)
  USHORT Data3;   // offset: 0x6 (6)
  UCHAR Data4[8]; // offset: 0x8 (8)
};

// 0x4 (4) bytes
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS {
  ULONG Primary : 1;              // offset: 0x0 (0)
  ULONG ContainmentWarning : 1;   // offset: 0x0 (0)
  ULONG Reset : 1;                // offset: 0x0 (0)
  ULONG ThresholdExceeded : 1;    // offset: 0x0 (0)
  ULONG ResourceNotAvailable : 1; // offset: 0x0 (0)
  ULONG LatentError : 1;          // offset: 0x0 (0)
  ULONG Reserved : 26;            // offset: 0x0 (0)
  ULONG AsULONG;                  // offset: 0x0 (0)
};

// 0x4 (4) bytes
union _WHEA_ERROR_RECORD_HEADER_FLAGS {
  ULONG Recovered : 1;     // offset: 0x0 (0)
  ULONG PreviousError : 1; // offset: 0x0 (0)
  ULONG Simulated : 1;     // offset: 0x0 (0)
  ULONG Reserved : 29;     // offset: 0x0 (0)
  ULONG AsULONG;           // offset: 0x0 (0)
};

// 0x4 (4) bytes
union _WHEA_ERROR_RECORD_HEADER_VALIDBITS {
  ULONG PlatformId : 1;  // offset: 0x0 (0)
  ULONG Timestamp : 1;   // offset: 0x0 (0)
  ULONG PartitionId : 1; // offset: 0x0 (0)
  ULONG Reserved : 29;   // offset: 0x0 (0)
  ULONG AsULONG;         // offset: 0x0 (0)
};

// 0x4 (4) bytes
union _WHEA_ERROR_PACKET_FLAGS {
  ULONG PreviousError : 1;           // offset: 0x0 (0)
  ULONG Reserved1 : 1;               // offset: 0x0 (0)
  ULONG HypervisorError : 1;         // offset: 0x0 (0)
  ULONG Simulated : 1;               // offset: 0x0 (0)
  ULONG PlatformPfaControl : 1;      // offset: 0x0 (0)
  ULONG PlatformDirectedOffline : 1; // offset: 0x0 (0)
  ULONG Reserved2 : 26;              // offset: 0x0 (0)
  ULONG AsULONG;                     // offset: 0x0 (0)
};

// 0x4 (4) bytes
union _MM_PAGE_ACCESS_INFO_FLAGS {
  struct {
    ULONG FilePointerIndex : 9; // offset: 0x0 (0)
    ULONG HardFault : 1;        // offset: 0x0 (0)
    ULONG Image : 1;            // offset: 0x0 (0)
    ULONG Spare0 : 1;           // offset: 0x0 (0)
  } File;                       // offset: 0x0 (0)
  struct {
    ULONG FilePointerIndex : 9; // offset: 0x0 (0)
    ULONG HardFault : 1;        // offset: 0x0 (0)
    ULONG Spare1 : 2;           // offset: 0x0 (0)
  } Private;                    // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _IO_PRIORITY_INFO {
  ULONG Size;                        // offset: 0x0 (0)
  ULONG ThreadPriority;              // offset: 0x4 (4)
  ULONG PagePriority;                // offset: 0x8 (8)
  enum _IO_PRIORITY_HINT IoPriority; // offset: 0xc (12)
};

// 0x18 (24) bytes
struct _ECP_LIST {
  ULONG Signature;            // offset: 0x0 (0)
  ULONG Flags;                // offset: 0x4 (4)
  struct _LIST_ENTRY EcpList; // offset: 0x8 (8)
};

// 0x28 (40) bytes
struct _IO_DRIVER_CREATE_CONTEXT {
  SHORT Size;                                 // offset: 0x0 (0)
  struct _ECP_LIST *ExtraCreateParameter;     // offset: 0x8 (8)
  VOID *DeviceObjectHint;                     // offset: 0x10 (16)
  struct _TXN_PARAMETER_BLOCK *TxnParameters; // offset: 0x18 (24)
  struct _EJOB *SiloContext;                  // offset: 0x20 (32)
};

// 0x8 (8) bytes
struct _OBJECT_HANDLE_INFORMATION {
  ULONG HandleAttributes; // offset: 0x0 (0)
  ULONG GrantedAccess;    // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _GENERIC_MAPPING {
  ULONG GenericRead;    // offset: 0x0 (0)
  ULONG GenericWrite;   // offset: 0x4 (4)
  ULONG GenericExecute; // offset: 0x8 (8)
  ULONG GenericAll;     // offset: 0xc (12)
};

// 0x20 (32) bytes
struct _MI_AVAILABLE_PAGE_WAIT_STATES {
  struct _KEVENT Event; // offset: 0x0 (0)
  ULONG EventSets;      // offset: 0x18 (24)
};

// 0x4 (4) bytes
struct _MI_PARTITION_FLAGS {
  ULONG BeingDeleted : 1;              // offset: 0x0 (0)
  ULONG ObjectInitialized : 1;         // offset: 0x0 (0)
  ULONG PageListsInitialized : 1;      // offset: 0x0 (0)
  ULONG StoreReservedPagesCharged : 1; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MODWRITER_FLAGS {
  ULONG KeepForever : 1;        // offset: 0x0 (0)
  ULONG Networked : 1;          // offset: 0x0 (0)
  ULONG IoPriority : 3;         // offset: 0x0 (0)
  ULONG ModifiedStoreWrite : 1; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _MI_EXTRA_IMAGE_INFORMATION {
  ULONG SizeOfHeaders; // offset: 0x0 (0)
  ULONG SizeOfImage;   // offset: 0x4 (4)
};

// 0x28 (40) bytes
struct _MI_CONTROL_AREA_WAIT_BLOCK {
  struct _MI_CONTROL_AREA_WAIT_BLOCK *Next; // offset: 0x0 (0)
  ULONG WaitReason;                         // offset: 0x8 (8)
  ULONG WaitResponse;                       // offset: 0xc (12)
  struct _KGATE Gate;                       // offset: 0x10 (16)
};

// 0x4 (4) bytes
struct _MMSECTION_FLAGS2 {
  ULONG PartitionId : 10;        // offset: 0x0 (0)
  ULONG NumberOfChildViews : 22; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MMSECURE_FLAGS {
  ULONG ReadOnly : 1;            // offset: 0x0 (0)
  ULONG ReadWrite : 1;           // offset: 0x0 (0)
  ULONG SecNoChange : 1;         // offset: 0x0 (0)
  ULONG NoDelete : 1;            // offset: 0x0 (0)
  ULONG RequiresPteReversal : 1; // offset: 0x0 (0)
  ULONG ExclusiveSecure : 1;     // offset: 0x0 (0)
  ULONG Spare : 6;               // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _MMADDRESS_LIST {
  union {
    struct _MMSECURE_FLAGS Flags; // offset: 0x0 (0)
    ULONG FlagsLong;              // offset: 0x0 (0)
    VOID *StartVa;                // offset: 0x0 (0)

  } u1;        // offset: 0x0 (0)
  VOID *EndVa; // offset: 0x8 (8)
};

// 0x4 (4) bytes
struct _MMVAD_FLAGS1 {
  ULONG CommitCharge : 31; // offset: 0x0 (0)
  ULONG MemCommit : 1;     // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MMVAD_FLAGS {
  ULONG VadType : 3;          // offset: 0x0 (0)
  ULONG Protection : 5;       // offset: 0x0 (0)
  ULONG PreferredNode : 6;    // offset: 0x0 (0)
  ULONG NoChange : 1;         // offset: 0x0 (0)
  ULONG PrivateMemory : 1;    // offset: 0x0 (0)
  ULONG PrivateFixup : 1;     // offset: 0x0 (0)
  ULONG ManySubsections : 1;  // offset: 0x0 (0)
  ULONG Enclave : 1;          // offset: 0x0 (0)
  ULONG DeleteInProgress : 1; // offset: 0x0 (0)
  ULONG Spare : 12;           // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MMVAD_FLAGS2 {
  ULONG FileOffset : 24;        // offset: 0x0 (0)
  ULONG Large : 1;              // offset: 0x0 (0)
  ULONG TrimBehind : 1;         // offset: 0x0 (0)
  ULONG Inherit : 1;            // offset: 0x0 (0)
  ULONG CopyOnWrite : 1;        // offset: 0x0 (0)
  ULONG NoValidationNeeded : 1; // offset: 0x0 (0)
  ULONG PrivateDemandZero : 1;  // offset: 0x0 (0)
  ULONG Spare : 2;              // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _HANDLE_TABLE_ENTRY_INFO {
  ULONG AuditMask; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _FS_FILTER_SECTION_SYNC_OUTPUT {
  ULONG StructureSize;        // offset: 0x0 (0)
  ULONG SizeReturned;         // offset: 0x4 (4)
  ULONG Flags;                // offset: 0x8 (8)
  ULONG DesiredReadAlignment; // offset: 0xc (12)
};

// 0xc (12) bytes
struct _SECURITY_QUALITY_OF_SERVICE {
  ULONG Length;                                          // offset: 0x0 (0)
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // offset: 0x4 (4)
  UCHAR ContextTrackingMode;                             // offset: 0x8 (8)
  UCHAR EffectiveOnly;                                   // offset: 0x9 (9)
};

// 0x40 (64) bytes
struct _OBJECT_CREATE_INFORMATION {
  ULONG Attributes;                                 // offset: 0x0 (0)
  VOID *RootDirectory;                              // offset: 0x8 (8)
  CHAR ProbeMode;                                   // offset: 0x10 (16)
  ULONG PagedPoolCharge;                            // offset: 0x14 (20)
  ULONG NonPagedPoolCharge;                         // offset: 0x18 (24)
  ULONG SecurityDescriptorCharge;                   // offset: 0x1c (28)
  VOID *SecurityDescriptor;                         // offset: 0x20 (32)
  struct _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // offset: 0x28 (40)
  struct _SECURITY_QUALITY_OF_SERVICE
      SecurityQualityOfService; // offset: 0x30 (48)
};

// 0xc (12) bytes
struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
  ULONG BeginAddress; // offset: 0x0 (0)
  ULONG EndAddress;   // offset: 0x4 (4)
  union {
    ULONG UnwindInfoAddress; // offset: 0x8 (8)
    ULONG UnwindData;        // offset: 0x8 (8)
  };
};

// 0xa0 (160) bytes
struct _HANDLE_TRACE_DB_ENTRY {
  struct _CLIENT_ID ClientId; // offset: 0x0 (0)
  VOID *Handle;               // offset: 0x10 (16)
  ULONG Type;                 // offset: 0x18 (24)
  VOID *StackTrace[16];       // offset: 0x20 (32)
};

// 0x24 (36) bytes
struct _ETW_FILTER_PID {
  ULONG Count;   // offset: 0x0 (0)
  ULONG Pids[8]; // offset: 0x4 (4)
};

// 0x20 (32) bytes
struct _PERFINFO_GROUPMASK {
  ULONG Masks[8]; // offset: 0x0 (0)
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
  ULONG Reserved1 : 1;                     // offset: 0x4 (4)
  ULONG WakeFromInterrupt : 1;             // offset: 0x4 (4)
  ULONG Reserved : 12;                     // offset: 0x4 (4)
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
struct _SYSTEM_POWER_STATE_CONTEXT {
  union {
    struct {
      ULONG Reserved1 : 8;             // offset: 0x0 (0)
      ULONG TargetSystemState : 4;     // offset: 0x0 (0)
      ULONG EffectiveSystemState : 4;  // offset: 0x0 (0)
      ULONG CurrentSystemState : 4;    // offset: 0x0 (0)
      ULONG IgnoreHibernationPath : 1; // offset: 0x0 (0)
      ULONG PseudoTransition : 1;      // offset: 0x0 (0)
      ULONG Reserved2 : 10;            // offset: 0x0 (0)
    };
    ULONG ContextAsUlong; // offset: 0x0 (0)
  };
};

// 0x10 (16) bytes
struct _PO_DIAG_STACK_RECORD {
  ULONG StackDepth; // offset: 0x0 (0)
  VOID *Stack[1];   // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _KDEVICE_QUEUE_ENTRY {
  struct _LIST_ENTRY DeviceListEntry; // offset: 0x0 (0)
  ULONG SortKey;                      // offset: 0x10 (16)
  UCHAR Inserted;                     // offset: 0x14 (20)
};

// 0x60 (96) bytes
struct _VPB {
  SHORT Type;                          // offset: 0x0 (0)
  SHORT Size;                          // offset: 0x2 (2)
  USHORT Flags;                        // offset: 0x4 (4)
  USHORT VolumeLabelLength;            // offset: 0x6 (6)
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x8 (8)
  struct _DEVICE_OBJECT *RealDevice;   // offset: 0x10 (16)
  ULONG SerialNumber;                  // offset: 0x18 (24)
  ULONG ReferenceCount;                // offset: 0x1c (28)
  WCHAR VolumeLabel[32];               // offset: 0x20 (32)
};

// 0x8 (8) bytes
struct _JOBOBJECT_WAKE_FILTER {
  ULONG HighEdgeFilter; // offset: 0x0 (0)
  ULONG LowEdgeFilter;  // offset: 0x4 (4)
};

// 0x2b0 (688) bytes
struct _KPRIQUEUE {
  struct _DISPATCHER_HEADER Header;     // offset: 0x0 (0)
  struct _LIST_ENTRY EntryListHead[32]; // offset: 0x18 (24)
  volatile LONG CurrentCount[32];       // offset: 0x218 (536)
  ULONG MaximumCount;                   // offset: 0x298 (664)
  struct _LIST_ENTRY ThreadListHead;    // offset: 0x2a0 (672)
};

// 0x2b0 (688) bytes
struct _TRIAGE_EX_WORK_QUEUE {
  struct _KPRIQUEUE WorkPriQueue; // offset: 0x0 (0)
};

// 0x20 (32) bytes
struct _TRIAGE_9F_POWER {
  USHORT Signature;                               // offset: 0x0 (0)
  USHORT Revision;                                // offset: 0x2 (2)
  struct _LIST_ENTRY *IrpList;                    // offset: 0x8 (8)
  struct _LIST_ENTRY *ThreadList;                 // offset: 0x10 (16)
  struct _TRIAGE_EX_WORK_QUEUE *DelayedWorkQueue; // offset: 0x18 (24)
};

// 0x18 (24) bytes
struct _TRIAGE_9F_PNP {
  USHORT Signature; // offset: 0x0 (0)
  USHORT Revision;  // offset: 0x2 (2)
  struct _TRIAGE_PNP_DEVICE_COMPLETION_QUEUE
      *CompletionQueue;                           // offset: 0x8 (8)
  struct _TRIAGE_EX_WORK_QUEUE *DelayedWorkQueue; // offset: 0x10 (16)
};

// 0x2d0 (720) bytes
struct _EX_WORK_QUEUE {
  struct _KPRIQUEUE WorkPriQueue;    // offset: 0x0 (0)
  struct _ENODE *Node;               // offset: 0x2b0 (688)
  volatile ULONG WorkItemsProcessed; // offset: 0x2b8 (696)
  ULONG WorkItemsProcessedLastPass;  // offset: 0x2bc (700)
  volatile LONG ThreadCount;         // offset: 0x2c0 (704)
  LONG MinThreads : 31;              // offset: 0x2c4 (708)
  volatile ULONG TryFailed : 1;      // offset: 0x2c4 (708)
  LONG MaxThreads;                   // offset: 0x2c8 (712)
  enum _EXQUEUEINDEX QueueIndex;     // offset: 0x2cc (716)
};

// 0x18 (24) bytes
struct _EXT_DELETE_PARAMETERS {
  ULONG Version;                      // offset: 0x0 (0)
  ULONG Reserved;                     // offset: 0x4 (4)
  VOID (*DeleteCallback)(VOID *arg1); // offset: 0x8 (8)
  VOID *DeleteContext;                // offset: 0x10 (16)
};

// 0x4 (4) bytes
struct _PS_TRUSTLET_ATTRIBUTE_TYPE {
  union {
    struct {
      UCHAR Version;                                          // offset: 0x0 (0)
      UCHAR DataCount;                                        // offset: 0x1 (1)
      UCHAR SemanticType;                                     // offset: 0x2 (2)
      union _PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS AccessRights; // offset: 0x3 (3)
    };
    ULONG AttributeType; // offset: 0x0 (0)
  };
};

// 0x8 (8) bytes
struct _PS_TRUSTLET_ATTRIBUTE_HEADER {
  struct _PS_TRUSTLET_ATTRIBUTE_TYPE AttributeType; // offset: 0x0 (0)
  ULONG InstanceNumber : 8;                         // offset: 0x4 (4)
  ULONG Reserved : 24;                              // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _EXT_SET_PARAMETERS_V0 {
  ULONG Version;            // offset: 0x0 (0)
  ULONG Reserved;           // offset: 0x4 (4)
  LONGLONG NoWakeTolerance; // offset: 0x8 (8)
};

// 0x4 (4) bytes
struct _SINGLE_LIST_ENTRY32 {
  ULONG Next; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _KFLOATING_SAVE {
  ULONG Dummy; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _PROCESSOR_IDLE_DEPENDENCY {
  ULONG ProcessorIndex;    // offset: 0x0 (0)
  UCHAR ExpectedState;     // offset: 0x4 (4)
  UCHAR AllowDeeperStates; // offset: 0x5 (5)
  UCHAR LooseDependency;   // offset: 0x6 (6)
};

// 0x38 (56) bytes
struct _THERMAL_COOLING_INTERFACE {
  USHORT Size;                                    // offset: 0x0 (0)
  USHORT Version;                                 // offset: 0x2 (2)
  VOID *Context;                                  // offset: 0x8 (8)
  VOID (*InterfaceReference)(VOID *arg1);         // offset: 0x10 (16)
  VOID (*InterfaceDereference)(VOID *arg1);       // offset: 0x18 (24)
  ULONG Flags;                                    // offset: 0x20 (32)
  VOID (*ActiveCooling)(VOID *arg1, UCHAR arg2);  // offset: 0x28 (40)
  VOID (*PassiveCooling)(VOID *arg1, ULONG arg2); // offset: 0x30 (48)
};

// 0x38 (56) bytes
struct _FAST_MUTEX {
  LONG Count;           // offset: 0x0 (0)
  VOID *Owner;          // offset: 0x8 (8)
  ULONG Contention;     // offset: 0x10 (16)
  struct _KEVENT Event; // offset: 0x18 (24)
  ULONG OldIrql;        // offset: 0x30 (48)
};

// 0x88 (136) bytes
struct _PNP_DEVICE_EVENT_LIST {
  LONG Status;                     // offset: 0x0 (0)
  struct _KMUTANT EventQueueMutex; // offset: 0x8 (8)
  struct _FAST_MUTEX Lock;         // offset: 0x40 (64)
  struct _LIST_ENTRY List;         // offset: 0x78 (120)
};

// 0xf0 (240) bytes
struct _HANDLE_TRACE_DEBUG_INFO {
  LONG RefCount;                            // offset: 0x0 (0)
  ULONG TableSize;                          // offset: 0x4 (4)
  ULONG BitMaskFlags;                       // offset: 0x8 (8)
  struct _FAST_MUTEX CloseCompactionLock;   // offset: 0x10 (16)
  ULONG CurrentStackIndex;                  // offset: 0x48 (72)
  struct _HANDLE_TRACE_DB_ENTRY TraceDb[1]; // offset: 0x50 (80)
};

// 0x40 (64) bytes
struct _KQUEUE {
  struct _DISPATCHER_HEADER Header;  // offset: 0x0 (0)
  struct _LIST_ENTRY EntryListHead;  // offset: 0x18 (24)
  volatile ULONG CurrentCount;       // offset: 0x28 (40)
  ULONG MaximumCount;                // offset: 0x2c (44)
  struct _LIST_ENTRY ThreadListHead; // offset: 0x30 (48)
};

// 0x48 (72) bytes
struct _ETW_REPLY_QUEUE {
  struct _KQUEUE Queue; // offset: 0x0 (0)
  LONG EventsLost;      // offset: 0x40 (64)
};

// 0x30 (48) bytes
struct _KWAIT_BLOCK {
  struct _LIST_ENTRY WaitListEntry; // offset: 0x0 (0)
  UCHAR WaitType;                   // offset: 0x10 (16)
  volatile UCHAR BlockState;        // offset: 0x11 (17)
  USHORT WaitKey;                   // offset: 0x12 (18)
  LONG SpareLong;                   // offset: 0x14 (20)
  union {
    struct _KTHREAD *Thread;           // offset: 0x18 (24)
    struct _KQUEUE *NotificationQueue; // offset: 0x18 (24)
  };
  VOID *Object;   // offset: 0x20 (32)
  VOID *SparePtr; // offset: 0x28 (40)
};

// 0x8 (8) bytes
struct _KSCHEDULING_GROUP_POLICY {
  union {
    ULONG Value;   // offset: 0x0 (0)
    USHORT Weight; // offset: 0x0 (0)
    struct {
      USHORT MinRate; // offset: 0x0 (0)
      USHORT MaxRate; // offset: 0x2 (2)
    };
  };
  union {
    ULONG AllFlags; // offset: 0x4 (4)
    struct {
      ULONG Type : 1;     // offset: 0x4 (4)
      ULONG Disabled : 1; // offset: 0x4 (4)
      ULONG Spare1 : 30;  // offset: 0x4 (4)
    };
  };
};

// 0x10 (16) bytes
struct _PPM_SELECTION_MENU {
  ULONG Count;                               // offset: 0x0 (0)
  struct _PPM_SELECTION_MENU_ENTRY *Entries; // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _PPM_SELECTION_DEPENDENCY {
  ULONG Processor;                 // offset: 0x0 (0)
  struct _PPM_SELECTION_MENU Menu; // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _PPM_SELECTION_MENU_ENTRY {
  UCHAR StrictDependency;                           // offset: 0x0 (0)
  UCHAR InitiatingState;                            // offset: 0x1 (1)
  UCHAR DependentState;                             // offset: 0x2 (2)
  ULONG StateIndex;                                 // offset: 0x4 (4)
  ULONG Dependencies;                               // offset: 0x8 (8)
  struct _PPM_SELECTION_DEPENDENCY *DependencyList; // offset: 0x10 (16)
};

// 0x90 (144) bytes
struct _UMS_CONTROL_BLOCK {
  struct _RTL_UMS_CONTEXT *UmsContext;            // offset: 0x0 (0)
  struct _SINGLE_LIST_ENTRY *CompletionListEntry; // offset: 0x8 (8)
  struct _KEVENT *CompletionListEvent;            // offset: 0x10 (16)
  ULONG ServiceSequenceNumber;                    // offset: 0x18 (24)
  union {
    struct {
      struct _KQUEUE UmsQueue;                     // offset: 0x20 (32)
      struct _LIST_ENTRY QueueEntry;               // offset: 0x60 (96)
      struct _RTL_UMS_CONTEXT *YieldingUmsContext; // offset: 0x70 (112)
      VOID *YieldingParam;                         // offset: 0x78 (120)
      VOID *UmsTeb;                                // offset: 0x80 (128)
    };
    struct {
      struct _KQUEUE *UmsAssociatedQueue;    // offset: 0x20 (32)
      struct _LIST_ENTRY *UmsQueueListEntry; // offset: 0x28 (40)
      struct _KEVENT UmsWaitEvent;           // offset: 0x30 (48)
      VOID *StagingArea;                     // offset: 0x48 (72)
      union {
        struct {
          ULONG UmsPrimaryDeliveredContext : 1; // offset: 0x50 (80)
          ULONG UmsAssociatedQueueUsed : 1;     // offset: 0x50 (80)
          ULONG UmsThreadParked : 1;            // offset: 0x50 (80)
        };
        ULONG UmsFlags; // offset: 0x50 (80)
      };
    };
  };
  USHORT TebSelector; // offset: 0x88 (136)
};

// 0x58 (88) bytes
struct _KAPC {
  UCHAR Type;                      // offset: 0x0 (0)
  UCHAR SpareByte0;                // offset: 0x1 (1)
  UCHAR Size;                      // offset: 0x2 (2)
  UCHAR SpareByte1;                // offset: 0x3 (3)
  ULONG SpareLong0;                // offset: 0x4 (4)
  struct _KTHREAD *Thread;         // offset: 0x8 (8)
  struct _LIST_ENTRY ApcListEntry; // offset: 0x10 (16)
  union {
    struct {
      VOID(*KernelRoutine)
      (struct _KAPC *arg1, VOID (**arg2)(VOID *arg1, VOID *arg2, VOID *arg3),
       VOID **arg3, VOID **arg4, VOID **arg5);    // offset: 0x20 (32)
      VOID (*RundownRoutine)(struct _KAPC *arg1); // offset: 0x28 (40)
      VOID(*NormalRoutine)
      (VOID *arg1, VOID *arg2, VOID *arg3); // offset: 0x30 (48)
    };
    VOID *Reserved[3]; // offset: 0x20 (32)
  };
  VOID *NormalContext;   // offset: 0x38 (56)
  VOID *SystemArgument1; // offset: 0x40 (64)
  VOID *SystemArgument2; // offset: 0x48 (72)
  CHAR ApcStateIndex;    // offset: 0x50 (80)
  CHAR ApcMode;          // offset: 0x51 (81)
  UCHAR Inserted;        // offset: 0x52 (82)
};

// 0xc (12) bytes
struct _CACHE_DESCRIPTOR {
  UCHAR Level;                     // offset: 0x0 (0)
  UCHAR Associativity;             // offset: 0x1 (1)
  USHORT LineSize;                 // offset: 0x2 (2)
  ULONG Size;                      // offset: 0x4 (4)
  enum _PROCESSOR_CACHE_TYPE Type; // offset: 0x8 (8)
};

// 0x54 (84) bytes
struct _IOP_IRP_STACK_PROFILER {
  ULONG Profile[20]; // offset: 0x0 (0)
  ULONG TotalIrps;   // offset: 0x50 (80)
};

// 0x10 (16) bytes
union _KGDTENTRY64 {
  struct {
    USHORT LimitLow; // offset: 0x0 (0)
    USHORT BaseLow;  // offset: 0x2 (2)
  };
  struct {
    UCHAR BaseMiddle; // offset: 0x0 (0)
    UCHAR Flags1;     // offset: 0x1 (1)
    UCHAR Flags2;     // offset: 0x2 (2)
    UCHAR BaseHigh;   // offset: 0x3 (3)
  } Bytes;            // offset: 0x4 (4)
  struct {
    struct {
      ULONG BaseMiddle : 8;  // offset: 0x0 (0)
      ULONG Type : 5;        // offset: 0x0 (0)
      ULONG Dpl : 2;         // offset: 0x0 (0)
      ULONG Present : 1;     // offset: 0x0 (0)
      ULONG LimitHigh : 4;   // offset: 0x0 (0)
      ULONG System : 1;      // offset: 0x0 (0)
      ULONG LongMode : 1;    // offset: 0x0 (0)
      ULONG DefaultBig : 1;  // offset: 0x0 (0)
      ULONG Granularity : 1; // offset: 0x0 (0)
      ULONG BaseHigh : 8;    // offset: 0x0 (0)
    } Bits;                  // offset: 0x4 (4)
    ULONG BaseUpper;         // offset: 0x8 (8)
  };
  struct {
    ULONG MustBeZero; // offset: 0xc (12)
    LONGLONG DataLow; // offset: 0x0 (0)
  };
  LONGLONG DataHigh; // offset: 0x8 (8)
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

// 0x8 (8) bytes
struct _IMAGE_DATA_DIRECTORY {
  ULONG VirtualAddress; // offset: 0x0 (0)
  ULONG Size;           // offset: 0x4 (4)
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

// 0x8 (8) bytes
struct _LUID {
  ULONG LowPart; // offset: 0x0 (0)
  LONG HighPart; // offset: 0x4 (4)
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

// 0x48 (72) bytes
struct _SECURITY_CLIENT_CONTEXT {
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // offset: 0x0 (0)
  VOID *ClientToken;                               // offset: 0x10 (16)
  UCHAR DirectlyAccessClientToken;                 // offset: 0x18 (24)
  UCHAR DirectAccessEffectiveOnly;                 // offset: 0x19 (25)
  UCHAR ServerIsRemote;                            // offset: 0x1a (26)
  struct _TOKEN_CONTROL ClientTokenControl;        // offset: 0x1c (28)
};

// 0xc (12) bytes
struct _LUID_AND_ATTRIBUTES {
  struct _LUID Luid; // offset: 0x0 (0)
  ULONG Attributes;  // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _TOKEN_PRIVILEGES {
  ULONG PrivilegeCount;                      // offset: 0x0 (0)
  struct _LUID_AND_ATTRIBUTES Privileges[1]; // offset: 0x4 (4)
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

// 0xa0 (160) bytes
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
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // offset: 0x20 (32)
  VOID *SecurityDescriptor;                                // offset: 0x40 (64)
  VOID *AuxData;                                           // offset: 0x48 (72)
  union {
    struct _INITIAL_PRIVILEGE_SET InitialPrivilegeSet; // offset: 0x50 (80)
    struct _PRIVILEGE_SET PrivilegeSet;                // offset: 0x50 (80)

  } Privileges;                          // offset: 0x50 (80)
  UCHAR AuditPrivileges;                 // offset: 0x7c (124)
  struct _UNICODE_STRING ObjectName;     // offset: 0x80 (128)
  struct _UNICODE_STRING ObjectTypeName; // offset: 0x90 (144)
};

// 0x18 (24) bytes
struct _IO_SECURITY_CONTEXT {
  struct _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // offset: 0x0 (0)
  struct _ACCESS_STATE *AccessState;                // offset: 0x8 (8)
  ULONG DesiredAccess;                              // offset: 0x10 (16)
  ULONG FullCreateOptions;                          // offset: 0x14 (20)
};

// 0x38 (56) bytes
struct _HEAP_LIST_LOOKUP {
  struct _HEAP_LIST_LOOKUP *ExtendedLookup; // offset: 0x0 (0)
  ULONG ArraySize;                          // offset: 0x8 (8)
  ULONG ExtraItem;                          // offset: 0xc (12)
  ULONG ItemCount;                          // offset: 0x10 (16)
  ULONG OutOfRangeItems;                    // offset: 0x14 (20)
  ULONG BaseIndex;                          // offset: 0x18 (24)
  struct _LIST_ENTRY *ListHead;             // offset: 0x20 (32)
  ULONG *ListsInUseUlong;                   // offset: 0x28 (40)
  struct _LIST_ENTRY **ListHints;           // offset: 0x30 (48)
};

// 0x30 (48) bytes
struct _BITMAP_RANGE {
  struct _LIST_ENTRY Links; // offset: 0x0 (0)
  LONGLONG BasePage;        // offset: 0x10 (16)
  ULONG FirstDirtyPage;     // offset: 0x18 (24)
  ULONG LastDirtyPage;      // offset: 0x1c (28)
  ULONG DirtyPages;         // offset: 0x20 (32)
  ULONG *Bitmap;            // offset: 0x28 (40)
};

// 0xc0 (192) bytes
struct _MBCB {
  SHORT NodeTypeCode;                // offset: 0x0 (0)
  SHORT NodeIsInZone;                // offset: 0x2 (2)
  ULONG PagesToWrite;                // offset: 0x4 (4)
  ULONG DirtyPages;                  // offset: 0x8 (8)
  ULONG Reserved;                    // offset: 0xc (12)
  struct _LIST_ENTRY BitmapRanges;   // offset: 0x10 (16)
  LONGLONG ResumeWritePage;          // offset: 0x20 (32)
  LONGLONG MostRecentlyDirtiedPage;  // offset: 0x28 (40)
  struct _BITMAP_RANGE BitmapRange1; // offset: 0x30 (48)
  struct _BITMAP_RANGE BitmapRange2; // offset: 0x60 (96)
  struct _BITMAP_RANGE BitmapRange3; // offset: 0x90 (144)
};

// 0x20 (32) bytes
struct _PEP_ACPI_INTERRUPT_RESOURCE {
  enum _PEP_ACPI_RESOURCE_TYPE Type;           // offset: 0x0 (0)
  enum _KINTERRUPT_MODE InterruptType;         // offset: 0x4 (4)
  enum _KINTERRUPT_POLARITY InterruptPolarity; // offset: 0x8 (8)
  union _PEP_ACPI_RESOURCE_FLAGS Flags;        // offset: 0xc (12)
  UCHAR Count;                                 // offset: 0x10 (16)
  ULONG *Pins;                                 // offset: 0x18 (24)
};

// 0x18 (24) bytes
struct _PPM_COORDINATED_SELECTION {
  ULONG MaximumStates;    // offset: 0x0 (0)
  ULONG SelectedStates;   // offset: 0x4 (4)
  ULONG DefaultSelection; // offset: 0x8 (8)
  ULONG *Selection;       // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _RTL_BITMAP {
  ULONG SizeOfBitMap; // offset: 0x0 (0)
  ULONG *Buffer;      // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _FREE_DISPLAY {
  ULONG RealVectorSize;       // offset: 0x0 (0)
  ULONG Hint;                 // offset: 0x4 (4)
  struct _RTL_BITMAP Display; // offset: 0x8 (8)
};

// 0x28 (40) bytes
struct _MI_PAGING_FILE_SPACE_BITMAPS {
  union {
    ULONG RefCount;                               // offset: 0x0 (0)
    struct _MI_PAGING_FILE_SPACE_BITMAPS *Anchor; // offset: 0x0 (0)
  };
  struct _RTL_BITMAP AllocationBitmap; // offset: 0x8 (8)
  union {
    struct _RTL_BITMAP ReservationBitmap; // offset: 0x18 (24)
    struct _RTL_BITMAP EvictedBitmap;     // offset: 0x18 (24)
  };
};

// 0x28 (40) bytes
struct _MI_VAD_ALLOCATION_CELL {
  struct _RTL_BITMAP AllocationBitMap;   // offset: 0x0 (0)
  ULONG BitMapHint;                      // offset: 0x10 (16)
  ULONG LastAllocationSize;              // offset: 0x14 (20)
  ULONG LastAllocationSizeHint;          // offset: 0x18 (24)
  ULONG LowestBottomUpVadBit;            // offset: 0x1c (28)
  VOID *LowestBottomUpAllocationAddress; // offset: 0x20 (32)
};

// 0x28 (40) bytes
struct _RTL_DYNAMIC_HASH_TABLE {
  ULONG Flags;           // offset: 0x0 (0)
  ULONG Shift;           // offset: 0x4 (4)
  ULONG TableSize;       // offset: 0x8 (8)
  ULONG Pivot;           // offset: 0xc (12)
  ULONG DivisorMask;     // offset: 0x10 (16)
  ULONG NumEntries;      // offset: 0x14 (20)
  ULONG NonEmptyBuckets; // offset: 0x18 (24)
  ULONG NumEnumerators;  // offset: 0x1c (28)
  VOID *Directory;       // offset: 0x20 (32)
};

// 0x18 (24) bytes
struct _RTL_DRIVE_LETTER_CURDIR {
  USHORT Flags;           // offset: 0x0 (0)
  USHORT Length;          // offset: 0x2 (2)
  ULONG TimeStamp;        // offset: 0x4 (4)
  struct _STRING DosPath; // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME {
  struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME *Previous; // offset: 0x0 (0)
  struct _ACTIVATION_CONTEXT *ActivationContext;        // offset: 0x8 (8)
  ULONG Flags;                                          // offset: 0x10 (16)
};

// 0x58 (88) bytes
struct _PEB_LDR_DATA {
  ULONG Length;                                       // offset: 0x0 (0)
  UCHAR Initialized;                                  // offset: 0x4 (4)
  VOID *SsHandle;                                     // offset: 0x8 (8)
  struct _LIST_ENTRY InLoadOrderModuleList;           // offset: 0x10 (16)
  struct _LIST_ENTRY InMemoryOrderModuleList;         // offset: 0x20 (32)
  struct _LIST_ENTRY InInitializationOrderModuleList; // offset: 0x30 (48)
  VOID *EntryInProgress;                              // offset: 0x40 (64)
  UCHAR ShutdownInProgress;                           // offset: 0x48 (72)
  VOID *ShutdownThreadId;                             // offset: 0x50 (80)
};

// 0x80 (128) bytes
struct _ACCESS_REASONS {
  ULONG Data[32]; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _WNF_STATE_NAME {
  ULONG Data[2]; // offset: 0x0 (0)
};

// 0x24 (36) bytes
struct _PROC_PERF_HISTORY {
  ULONG Count;                                    // offset: 0x0 (0)
  ULONG Slot;                                     // offset: 0x4 (4)
  ULONG UtilityTotal;                             // offset: 0x8 (8)
  ULONG AffinitizedUtilityTotal;                  // offset: 0xc (12)
  ULONG FrequencyTotal;                           // offset: 0x10 (16)
  ULONG TaggedPercentTotal[2];                    // offset: 0x14 (20)
  struct _PROC_PERF_HISTORY_ENTRY HistoryList[1]; // offset: 0x1c (28)
};

// 0x18 (24) bytes
struct _TEB_ACTIVE_FRAME {
  ULONG Flags;                               // offset: 0x0 (0)
  struct _TEB_ACTIVE_FRAME *Previous;        // offset: 0x8 (8)
  struct _TEB_ACTIVE_FRAME_CONTEXT *Context; // offset: 0x10 (16)
};

// 0x4e0 (1248) bytes
struct _GDI_TEB_BATCH32 {
  ULONG Offset : 31;             // offset: 0x0 (0)
  ULONG HasRenderingCommand : 1; // offset: 0x0 (0)
  ULONG HDC;                     // offset: 0x4 (4)
  ULONG Buffer[310];             // offset: 0x8 (8)
};

// 0x28 (40) bytes
struct _ACTIVATION_CONTEXT_STACK {
  struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME *ActiveFrame; // offset: 0x0 (0)
  struct _LIST_ENTRY FrameListCache;                       // offset: 0x8 (8)
  ULONG Flags;                                             // offset: 0x18 (24)
  ULONG NextCookieSequenceNumber;                          // offset: 0x1c (28)
  ULONG StackId;                                           // offset: 0x20 (32)
};

// 0x1c (28) bytes
struct _RSDS {
  ULONG Signature;   // offset: 0x0 (0)
  struct _GUID Guid; // offset: 0x4 (4)
  ULONG Age;         // offset: 0x14 (20)
  CHAR PdbName[1];   // offset: 0x18 (24)
};

// 0x1c (28) bytes
union _CVDD {
  ULONG Signature;   // offset: 0x0 (0)
  struct _NB10 NB10; // offset: 0x0 (0)
  struct _RSDS RsDs; // offset: 0x0 (0)
};

// 0x38 (56) bytes
struct _PROVIDER_BINARY_ENTRY {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 (0)
  UCHAR ConsumersNotified;      // offset: 0x10 (16)
  UCHAR Spare[3];               // offset: 0x11 (17)
  ULONG DebugIdSize;            // offset: 0x14 (20)
  union _CVDD DebugId;          // offset: 0x18 (24)
};

// 0x58 (88) bytes
struct _IO_WORKITEM {
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x0 (0)
  VOID(*Routine)
  (VOID *arg1, VOID *arg2, struct _IO_WORKITEM *arg3); // offset: 0x20 (32)
  VOID *IoObject;                                      // offset: 0x28 (40)
  VOID *Context;                                       // offset: 0x30 (48)
  VOID *WorkingOnBehalfClient;                         // offset: 0x38 (56)
  ULONG Type;                                          // offset: 0x40 (64)
  struct _GUID ActivityId;                             // offset: 0x44 (68)
};

// 0x58 (88) bytes
struct _CM_KEY_BODY {
  ULONG Type;                                    // offset: 0x0 (0)
  struct _CM_KEY_CONTROL_BLOCK *KeyControlBlock; // offset: 0x8 (8)
  struct _CM_NOTIFY_BLOCK *NotifyBlock;          // offset: 0x10 (16)
  VOID *ProcessID;                               // offset: 0x18 (24)
  struct _LIST_ENTRY KeyBodyList;                // offset: 0x20 (32)
  ULONG Flags : 16;                              // offset: 0x30 (48)
  ULONG HandleTags : 16;                         // offset: 0x30 (48)
  VOID *KtmTrans;                                // offset: 0x38 (56)
  struct _GUID *KtmUow;                          // offset: 0x40 (64)
  struct _LIST_ENTRY ContextListHead;            // offset: 0x48 (72)
};

// 0x58 (88) bytes
struct _CM_NOTIFY_BLOCK {
  struct _LIST_ENTRY HiveList;                     // offset: 0x0 (0)
  struct _LIST_ENTRY PostList;                     // offset: 0x10 (16)
  struct _CM_KEY_CONTROL_BLOCK *KeyControlBlock;   // offset: 0x20 (32)
  struct _CM_KEY_BODY *KeyBody;                    // offset: 0x28 (40)
  ULONG Filter : 30;                               // offset: 0x30 (48)
  ULONG WatchTree : 1;                             // offset: 0x30 (48)
  ULONG NotifyPending : 1;                         // offset: 0x30 (48)
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // offset: 0x38 (56)
};

// 0x10 (16) bytes
struct _DISALLOWED_GUIDS {
  USHORT Count;        // offset: 0x0 (0)
  struct _GUID *Guids; // offset: 0x8 (8)
};

// 0x50 (80) bytes
struct _PLUGPLAY_EVENT_BLOCK {
  struct _GUID EventGuid;                      // offset: 0x0 (0)
  enum _PLUGPLAY_EVENT_CATEGORY EventCategory; // offset: 0x10 (16)
  ULONG *Result;                               // offset: 0x18 (24)
  ULONG Flags;                                 // offset: 0x20 (32)
  ULONG TotalSize;                             // offset: 0x24 (36)
  VOID *DeviceObject;                          // offset: 0x28 (40)
  union {
    struct {
      struct _GUID ClassGuid;    // offset: 0x0 (0)
      WCHAR SymbolicLinkName[1]; // offset: 0x10 (16)
    } DeviceClass;               // offset: 0x30 (48)
    struct {
      WCHAR DeviceId[1]; // offset: 0x0 (0)
    } TargetDevice;      // offset: 0x30 (48)
    struct {
      WCHAR DeviceId[1]; // offset: 0x0 (0)
    } InstallDevice;     // offset: 0x30 (48)
    struct {
      VOID *NotificationStructure; // offset: 0x0 (0)
      WCHAR DeviceId[1];           // offset: 0x8 (8)
    } CustomNotification;          // offset: 0x30 (48)
    struct {
      VOID *Notification;  // offset: 0x0 (0)
    } ProfileNotification; // offset: 0x30 (48)
    struct {
      ULONG NotificationCode; // offset: 0x0 (0)
      ULONG NotificationData; // offset: 0x4 (4)
    } PowerNotification;      // offset: 0x30 (48)
    struct {
      enum _PNP_VETO_TYPE VetoType;    // offset: 0x0 (0)
      WCHAR DeviceIdVetoNameBuffer[1]; // offset: 0x4 (4)
    } VetoNotification;                // offset: 0x30 (48)
    struct {
      struct _GUID BlockedDriverGuid; // offset: 0x0 (0)
    } BlockedDriverNotification;      // offset: 0x30 (48)
    struct {
      WCHAR ParentId[1];     // offset: 0x0 (0)
    } InvalidIDNotification; // offset: 0x30 (48)
    struct {
      struct _GUID PowerSettingGuid; // offset: 0x0 (0)
      ULONG Flags;                   // offset: 0x10 (16)
      ULONG SessionId;               // offset: 0x14 (20)
      ULONG DataLength;              // offset: 0x18 (24)
      UCHAR Data[1];                 // offset: 0x1c (28)
    } PowerSettingNotification;      // offset: 0x30 (48)
    struct {
      WCHAR DeviceId[1];          // offset: 0x0 (0)
    } PropertyChangeNotification; // offset: 0x30 (48)
    struct {
      WCHAR DeviceId[1];          // offset: 0x0 (0)
    } DeviceInstanceNotification; // offset: 0x30 (48)

  } u; // offset: 0x30 (48)
};

// 0xb8 (184) bytes
struct _PNP_DEVICE_EVENT_ENTRY {
  struct _LIST_ENTRY ListEntry;           // offset: 0x0 (0)
  ULONG Argument;                         // offset: 0x10 (16)
  LONG ArgumentStatus;                    // offset: 0x14 (20)
  struct _KEVENT *CallerEvent;            // offset: 0x18 (24)
  VOID (*Callback)(VOID *arg1);           // offset: 0x20 (32)
  VOID *Context;                          // offset: 0x28 (40)
  enum _PNP_VETO_TYPE *VetoType;          // offset: 0x30 (48)
  struct _UNICODE_STRING *VetoName;       // offset: 0x38 (56)
  ULONG RefCount;                         // offset: 0x40 (64)
  ULONG Lock;                             // offset: 0x44 (68)
  UCHAR Cancel;                           // offset: 0x48 (72)
  struct _PNP_DEVICE_EVENT_ENTRY *Parent; // offset: 0x50 (80)
  struct _GUID ActivityId;                // offset: 0x58 (88)
  struct _PLUGPLAY_EVENT_BLOCK Data;      // offset: 0x68 (104)
};

// 0x13 (19) bytes
struct _TlgProviderMetadata_t {
  UCHAR Type;              // offset: 0x0 (0)
  struct _GUID ProviderId; // offset: 0x1 (1)
  USHORT RemainingSize;    // offset: 0x11 (17)
};

// 0x48 (72) bytes
struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR {
  ULONG SectionOffset;           // offset: 0x0 (0)
  ULONG SectionLength;           // offset: 0x4 (4)
  union _WHEA_REVISION Revision; // offset: 0x8 (8)
  union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS
      ValidBits;                                           // offset: 0xa (10)
  UCHAR Reserved;                                          // offset: 0xb (11)
  union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS Flags; // offset: 0xc (12)
  struct _GUID SectionType;                                // offset: 0x10 (16)
  struct _GUID FRUId;                                      // offset: 0x20 (32)
  enum _WHEA_ERROR_SEVERITY SectionSeverity;               // offset: 0x30 (48)
  CHAR FRUText[20];                                        // offset: 0x34 (52)
};

// 0xe0 (224) bytes
struct _AUX_ACCESS_DATA {
  struct _PRIVILEGE_SET *PrivilegesUsed;                   // offset: 0x0 (0)
  struct _GENERIC_MAPPING GenericMapping;                  // offset: 0x8 (8)
  ULONG AccessesToAudit;                                   // offset: 0x18 (24)
  ULONG MaximumAuditMask;                                  // offset: 0x1c (28)
  struct _GUID TransactionId;                              // offset: 0x20 (32)
  VOID *NewSecurityDescriptor;                             // offset: 0x30 (48)
  VOID *ExistingSecurityDescriptor;                        // offset: 0x38 (56)
  VOID *ParentSecurityDescriptor;                          // offset: 0x40 (64)
  VOID (*DeRefSecurityDescriptor)(VOID *arg1, VOID *arg2); // offset: 0x48 (72)
  VOID *SDLock;                                            // offset: 0x50 (80)
  struct _ACCESS_REASONS AccessReasons;                    // offset: 0x58 (88)
  UCHAR GenerateStagingEvents;                             // offset: 0xd8 (216)
};

// 0x6c (108) bytes
struct _OBP_SYSTEM_DOS_DEVICE_STATE {
  ULONG GlobalDeviceMap;      // offset: 0x0 (0)
  ULONG LocalDeviceCount[26]; // offset: 0x4 (4)
};

// 0x38 (56) bytes
struct _NT_TIB {
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // offset: 0x0 (0)
  VOID *StackBase;                                      // offset: 0x8 (8)
  VOID *StackLimit;                                     // offset: 0x10 (16)
  VOID *SubSystemTib;                                   // offset: 0x18 (24)
  union {
    VOID *FiberData; // offset: 0x20 (32)
    ULONG Version;   // offset: 0x20 (32)
  };
  VOID *ArbitraryUserPointer; // offset: 0x28 (40)
  struct _NT_TIB *Self;       // offset: 0x30 (48)
};

// 0x48 (72) bytes
struct _TP_CALLBACK_ENVIRON_V3 {
  ULONG Version;                          // offset: 0x0 (0)
  struct _TP_POOL *Pool;                  // offset: 0x8 (8)
  struct _TP_CLEANUP_GROUP *CleanupGroup; // offset: 0x10 (16)
  VOID(*CleanupGroupCancelCallback)
  (VOID *arg1, VOID *arg2);                      // offset: 0x18 (24)
  VOID *RaceDll;                                 // offset: 0x20 (32)
  struct _ACTIVATION_CONTEXT *ActivationContext; // offset: 0x28 (40)
  VOID(*FinalizationCallback)
  (struct _TP_CALLBACK_INSTANCE *arg1, VOID *arg2); // offset: 0x30 (48)
  union {
    ULONG Flags; // offset: 0x38 (56)
    struct {
      ULONG LongFunction : 1; // offset: 0x0 (0)
      ULONG Persistent : 1;   // offset: 0x0 (0)
      ULONG Private : 30;     // offset: 0x0 (0)
    } s;                      // offset: 0x38 (56)

  } u;                                         // offset: 0x38 (56)
  enum _TP_CALLBACK_PRIORITY CallbackPriority; // offset: 0x3c (60)
  ULONG Size;                                  // offset: 0x40 (64)
};

// 0x8 (8) bytes
struct _XSTATE_FEATURE {
  ULONG Offset; // offset: 0x0 (0)
  ULONG Size;   // offset: 0x4 (4)
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

// 0x13c (316) bytes
struct _POP_POWER_SETTING_VALUES {
  ULONG StructureSize;                               // offset: 0x0 (0)
  struct _SYSTEM_POWER_POLICY PopPolicy;             // offset: 0x4 (4)
  enum SYSTEM_POWER_CONDITION CurrentAcDcPowerState; // offset: 0xec (236)
  UCHAR AwayModeEnabled;                             // offset: 0xf0 (240)
  UCHAR AwayModeEngaged;                             // offset: 0xf1 (241)
  UCHAR AwayModePolicyAllowed;                       // offset: 0xf2 (242)
  volatile LONG AwayModeIgnoreUserPresent;           // offset: 0xf4 (244)
  volatile LONG AwayModeIgnoreAction;                // offset: 0xf8 (248)
  UCHAR DisableFastS4;                               // offset: 0xfc (252)
  UCHAR DisableStandbyStates;                        // offset: 0xfd (253)
  ULONG UnattendSleepTimeout;                        // offset: 0x100 (256)
  volatile ULONG DiskIgnoreTime;                     // offset: 0x104 (260)
  volatile ULONG DeviceIdlePolicy;                   // offset: 0x108 (264)
  ULONG VideoDimTimeout;                             // offset: 0x10c (268)
  ULONG VideoNormalBrightness;                       // offset: 0x110 (272)
  ULONG VideoDimBrightness;                          // offset: 0x114 (276)
  ULONG AlsOffset;                                   // offset: 0x118 (280)
  ULONG AlsEnabled;                                  // offset: 0x11c (284)
  ULONG EsBrightness;                                // offset: 0x120 (288)
  UCHAR SwitchShutdownForced;                        // offset: 0x124 (292)
  ULONG SystemCoolingPolicy;                         // offset: 0x128 (296)
  UCHAR MediaBufferingEngaged;                       // offset: 0x12c (300)
  UCHAR OffloadedAudio;                              // offset: 0x12d (301)
  UCHAR NonOffloadedAudio;                           // offset: 0x12e (302)
  UCHAR FullscreenVideoPlayback;                     // offset: 0x12f (303)
  ULONG EsBatteryThreshold;                          // offset: 0x130 (304)
  UCHAR EsUserAwaySetting;                           // offset: 0x134 (308)
  ULONG WiFiInStandby;                               // offset: 0x138 (312)
};

// 0x8 (8) bytes
struct _CM_INDEX_HINT_BLOCK {
  ULONG Count;      // offset: 0x0 (0)
  ULONG HashKey[1]; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _CM_KEY_INDEX {
  USHORT Signature; // offset: 0x0 (0)
  USHORT Count;     // offset: 0x2 (2)
  ULONG List[1];    // offset: 0x4 (4)
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

// 0xc (12) bytes
struct _PERFINFO_PPM_STATE_SELECTION {
  ULONG SelectedState; // offset: 0x0 (0)
  ULONG VetoedStates;  // offset: 0x4 (4)
  ULONG VetoReason[1]; // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _OBJECT_SYMBOLIC_LINK {
  union _LARGE_INTEGER CreationTime; // offset: 0x0 (0)
  struct _UNICODE_STRING LinkTarget; // offset: 0x8 (8)
  ULONG DosDeviceDriveIndex;         // offset: 0x18 (24)
  ULONG Flags;                       // offset: 0x1c (28)
};

// 0x38 (56) bytes
struct _MI_BAD_MEMORY_EVENT_ENTRY {
  ULONG BugCheckCode;                   // offset: 0x0 (0)
  LONG Active;                          // offset: 0x4 (4)
  ULONG Data;                           // offset: 0x8 (8)
  union _LARGE_INTEGER PhysicalAddress; // offset: 0x10 (16)
  struct _WORK_QUEUE_ITEM WorkItem;     // offset: 0x18 (24)
};

// 0xb8 (184) bytes
struct _MI_ERROR_STATE {
  struct _MI_BAD_MEMORY_EVENT_ENTRY BadMemoryEventEntry; // offset: 0x0 (0)
  struct _MI_PROBE_RAISE_TRACKER ProbeRaises;            // offset: 0x38 (56)
  struct _MI_FORCED_COMMITS ForcedCommits;               // offset: 0x78 (120)
  ULONG WsleFailures[2];                                 // offset: 0x80 (128)
  ULONG WsLinear;                                        // offset: 0x88 (136)
  ULONG PageHashErrors;                                  // offset: 0x8c (140)
  ULONG CheckZeroCount;                                  // offset: 0x90 (144)
  volatile LONG ZeroedPageSingleBitErrorsDetected;       // offset: 0x94 (148)
  volatile LONG BadPagesDetected;                        // offset: 0x98 (152)
  LONG ScrubPasses;                                      // offset: 0x9c (156)
  LONG ScrubBadPagesFound;                               // offset: 0xa0 (160)
  ULONG UserViewFailures;                                // offset: 0xa4 (164)
  ULONG UserViewCollisionFailures;                       // offset: 0xa8 (168)
  struct _MI_RESAVAIL_FAILURES ResavailFailures;         // offset: 0xac (172)
  UCHAR PendingBadPages;                                 // offset: 0xb4 (180)
  UCHAR InitFailure;                                     // offset: 0xb5 (181)
  UCHAR StopBadMaps;                                     // offset: 0xb6 (182)
};

// 0x40 (64) bytes
struct _DEVICE_DESCRIPTION {
  ULONG Version;                      // offset: 0x0 (0)
  UCHAR Master;                       // offset: 0x4 (4)
  UCHAR ScatterGather;                // offset: 0x5 (5)
  UCHAR DemandMode;                   // offset: 0x6 (6)
  UCHAR AutoInitialize;               // offset: 0x7 (7)
  UCHAR Dma32BitAddresses;            // offset: 0x8 (8)
  UCHAR IgnoreCount;                  // offset: 0x9 (9)
  UCHAR Reserved1;                    // offset: 0xa (10)
  UCHAR Dma64BitAddresses;            // offset: 0xb (11)
  ULONG BusNumber;                    // offset: 0xc (12)
  ULONG DmaChannel;                   // offset: 0x10 (16)
  enum _INTERFACE_TYPE InterfaceType; // offset: 0x14 (20)
  enum _DMA_WIDTH DmaWidth;           // offset: 0x18 (24)
  enum _DMA_SPEED DmaSpeed;           // offset: 0x1c (28)
  ULONG MaximumLength;                // offset: 0x20 (32)
  ULONG DmaPort;                      // offset: 0x24 (36)
  ULONG DmaAddressWidth;              // offset: 0x28 (40)
  ULONG DmaControllerInstance;        // offset: 0x2c (44)
  ULONG DmaRequestLine;               // offset: 0x30 (48)
  union _LARGE_INTEGER DeviceAddress; // offset: 0x38 (56)
};

// 0x34 (52) bytes
struct _WHEA_GENERIC_ERROR_DESCRIPTOR {
  USHORT Type;                                 // offset: 0x0 (0)
  UCHAR Reserved;                              // offset: 0x2 (2)
  UCHAR Enabled;                               // offset: 0x3 (3)
  ULONG ErrStatusBlockLength;                  // offset: 0x4 (4)
  ULONG RelatedErrorSourceId;                  // offset: 0x8 (8)
  UCHAR ErrStatusAddressSpaceID;               // offset: 0xc (12)
  UCHAR ErrStatusAddressBitWidth;              // offset: 0xd (13)
  UCHAR ErrStatusAddressBitOffset;             // offset: 0xe (14)
  UCHAR ErrStatusAddressAccessSize;            // offset: 0xf (15)
  union _LARGE_INTEGER ErrStatusAddress;       // offset: 0x10 (16)
  struct _WHEA_NOTIFICATION_DESCRIPTOR Notify; // offset: 0x18 (24)
};

// 0x10 (16) bytes
struct _ETW_LAST_ENABLE_INFO {
  union _LARGE_INTEGER EnableFlags; // offset: 0x0 (0)
  USHORT LoggerId;                  // offset: 0x8 (8)
  UCHAR Level;                      // offset: 0xa (10)
  UCHAR Enabled : 1;                // offset: 0xb (11)
  UCHAR InternalFlag : 7;           // offset: 0xb (11)
};

// 0x10 (16) bytes
struct _ETW_REF_CLOCK {
  union _LARGE_INTEGER StartTime;      // offset: 0x0 (0)
  union _LARGE_INTEGER StartPerfClock; // offset: 0x8 (8)
};

// 0x118 (280) bytes
struct _TRACE_LOGFILE_HEADER {
  ULONG BufferSize; // offset: 0x0 (0)
  union {
    ULONG Version; // offset: 0x4 (4)
    struct {
      UCHAR MajorVersion;    // offset: 0x0 (0)
      UCHAR MinorVersion;    // offset: 0x1 (1)
      UCHAR SubVersion;      // offset: 0x2 (2)
      UCHAR SubMinorVersion; // offset: 0x3 (3)
    } VersionDetail;         // offset: 0x4 (4)
  };
  ULONG ProviderVersion;        // offset: 0x8 (8)
  ULONG NumberOfProcessors;     // offset: 0xc (12)
  union _LARGE_INTEGER EndTime; // offset: 0x10 (16)
  ULONG TimerResolution;        // offset: 0x18 (24)
  ULONG MaximumFileSize;        // offset: 0x1c (28)
  ULONG LogFileMode;            // offset: 0x20 (32)
  ULONG BuffersWritten;         // offset: 0x24 (36)
  union {
    struct _GUID LogInstanceGuid; // offset: 0x28 (40)
    struct {
      ULONG StartBuffers;  // offset: 0x28 (40)
      ULONG PointerSize;   // offset: 0x2c (44)
      ULONG EventsLost;    // offset: 0x30 (48)
      ULONG CpuSpeedInMHz; // offset: 0x34 (52)
    };
  };
  USHORT *LoggerName;                         // offset: 0x38 (56)
  USHORT *LogFileName;                        // offset: 0x40 (64)
  struct _RTL_TIME_ZONE_INFORMATION TimeZone; // offset: 0x48 (72)
  union _LARGE_INTEGER BootTime;              // offset: 0xf8 (248)
  union _LARGE_INTEGER PerfFreq;              // offset: 0x100 (256)
  union _LARGE_INTEGER StartTime;             // offset: 0x108 (264)
  ULONG ReservedFlags;                        // offset: 0x110 (272)
  ULONG BuffersLost;                          // offset: 0x114 (276)
};

// 0x30 (48) bytes
struct _IOP_IRP_EXTENSION {
  union {
    USHORT ExtensionFlags; // offset: 0x0 (0)
    struct {
      USHORT Allocated : 1;   // offset: 0x0 (0)
      USHORT PropagateId : 1; // offset: 0x0 (0)
      USHORT SpareBits : 14;  // offset: 0x0 (0)
    };
  };
  USHORT TypesAllocated;     // offset: 0x2 (2)
  UCHAR GenericExtension[4]; // offset: 0x4 (4)
  VOID *VerifierContext;     // offset: 0x8 (8)
  struct _GUID ActivityId;   // offset: 0x10 (16)
  union {
    union _LARGE_INTEGER Timestamp; // offset: 0x20 (32)
    ULONG ZeroingOffset;            // offset: 0x20 (32)
    struct _IO_IRP_EXT_TRACK_OFFSET_HEADER
        *FsTrackOffsetBlob; // offset: 0x20 (32)
  };
  LONGLONG FsTrackedOffset; // offset: 0x28 (40)
};

// 0x10 (16) bytes
struct _LOGGED_STREAM_CALLBACK_V1 {
  VOID *LogHandle; // offset: 0x0 (0)
  VOID(*FlushToLsnRoutine)
  (VOID *arg1, union _LARGE_INTEGER arg2); // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _PEP_ACPI_IO_MEMORY_RESOURCE {
  enum _PEP_ACPI_RESOURCE_TYPE Type;   // offset: 0x0 (0)
  UCHAR Information;                   // offset: 0x4 (4)
  union _LARGE_INTEGER MinimumAddress; // offset: 0x8 (8)
  union _LARGE_INTEGER MaximumAddress; // offset: 0x10 (16)
  ULONG Alignment;                     // offset: 0x18 (24)
  ULONG Length;                        // offset: 0x1c (28)
};

// 0x20 (32) bytes
struct _HBIN {
  ULONG Signature;                // offset: 0x0 (0)
  ULONG FileOffset;               // offset: 0x4 (4)
  ULONG Size;                     // offset: 0x8 (8)
  ULONG Reserved1[2];             // offset: 0xc (12)
  union _LARGE_INTEGER TimeStamp; // offset: 0x14 (20)
  ULONG Spare;                    // offset: 0x1c (28)
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

// 0x108 (264) bytes
struct _DUMP_INITIALIZATION_CONTEXT {
  ULONG Length;                                    // offset: 0x0 (0)
  ULONG Reserved;                                  // offset: 0x4 (4)
  VOID *MemoryBlock;                               // offset: 0x8 (8)
  VOID *CommonBuffer[2];                           // offset: 0x10 (16)
  union _LARGE_INTEGER PhysicalAddress[2];         // offset: 0x20 (32)
  VOID (*StallRoutine)(ULONG arg1);                // offset: 0x30 (48)
  UCHAR (*OpenRoutine)(union _LARGE_INTEGER arg1); // offset: 0x38 (56)
  LONG(*WriteRoutine)
  (union _LARGE_INTEGER *arg1, struct _MDL *arg2); // offset: 0x40 (64)
  VOID (*FinishRoutine)();                         // offset: 0x48 (72)
  struct _ADAPTER_OBJECT *AdapterObject;           // offset: 0x50 (80)
  VOID *MappedRegisterBase;                        // offset: 0x58 (88)
  VOID *PortConfiguration;                         // offset: 0x60 (96)
  UCHAR CrashDump;                                 // offset: 0x68 (104)
  UCHAR MarkMemoryOnly;                            // offset: 0x69 (105)
  UCHAR HiberResume;                               // offset: 0x6a (106)
  UCHAR Reserved1;                                 // offset: 0x6b (107)
  ULONG MaximumTransferSize;                       // offset: 0x6c (108)
  ULONG CommonBufferSize;                          // offset: 0x70 (112)
  VOID *TargetAddress;                             // offset: 0x78 (120)
  LONG(*WritePendingRoutine)
  (LONG arg1, union _LARGE_INTEGER *arg2, struct _MDL *arg3,
   VOID *arg4);         // offset: 0x80 (128)
  ULONG PartitionStyle; // offset: 0x88 (136)
  union {
    struct {
      ULONG Signature; // offset: 0x0 (0)
      ULONG CheckSum;  // offset: 0x4 (4)
    } Mbr;             // offset: 0x8c (140)
    struct {
      struct _GUID DiskId; // offset: 0x0 (0)
    } Gpt;                 // offset: 0x8c (140)

  } DiskInfo; // offset: 0x8c (140)
  LONG(*ReadRoutine)
  (LONG arg1, union _LARGE_INTEGER *arg2,
   struct _MDL *arg3); // offset: 0xa0 (160)
  LONG(*GetDriveTelemetryRoutine)
  (ULONG arg1, ULONG arg2, VOID *arg3, ULONG arg4); // offset: 0xa8 (168)
  ULONG LogSectionTruncateSize;                     // offset: 0xb0 (176)
  ULONG Parameters[16];                             // offset: 0xb4 (180)
  VOID(*GetTransferSizesRoutine)
  (ULONG *arg1, ULONG *arg2); // offset: 0xf8 (248)
  VOID(*DumpNotifyRoutine)
  (enum _DUMP_EVENTS arg1, VOID *arg2, ULONG arg3); // offset: 0x100 (256)
};

// 0x178 (376) bytes
struct _DUMP_STACK_CONTEXT {
  struct _DUMP_INITIALIZATION_CONTEXT Init;       // offset: 0x0 (0)
  union _LARGE_INTEGER PartitionOffset;           // offset: 0x108 (264)
  VOID *DumpPointers;                             // offset: 0x110 (272)
  ULONG PointersLength;                           // offset: 0x118 (280)
  USHORT *ModulePrefix;                           // offset: 0x120 (288)
  struct _LIST_ENTRY DriverList;                  // offset: 0x128 (296)
  struct _STRING InitMsg;                         // offset: 0x138 (312)
  struct _STRING ProgMsg;                         // offset: 0x148 (328)
  struct _STRING DoneMsg;                         // offset: 0x158 (344)
  VOID *FileObject;                               // offset: 0x168 (360)
  enum _DEVICE_USAGE_NOTIFICATION_TYPE UsageType; // offset: 0x170 (368)
};

// 0x8 (8) bytes
struct LIST_ENTRY32 {
  ULONG Flink; // offset: 0x0 (0)
  ULONG Blink; // offset: 0x4 (4)
};

// 0x408 (1032) bytes
struct _CALL_PERFORMANCE_DATA {
  ULONGLONG SpinLock;               // offset: 0x0 (0)
  struct _LIST_ENTRY HashTable[64]; // offset: 0x8 (8)
};

// 0x30 (48) bytes
struct _BLOB_TYPE {
  enum _BLOB_ID ResourceId;             // offset: 0x0 (0)
  ULONG PoolTag;                        // offset: 0x4 (4)
  ULONG LookasideIndex;                 // offset: 0x8 (8)
  ULONG Flags;                          // offset: 0xc (12)
  struct _BLOB_COUNTERS *Counters;      // offset: 0x10 (16)
  VOID (*DeleteProcedure)(VOID *arg1);  // offset: 0x18 (24)
  LONG (*DestroyProcedure)(VOID *arg1); // offset: 0x20 (32)
  ULONGLONG UsualSize;                  // offset: 0x28 (40)
};

// 0x8180 (33152) bytes
struct _VI_DEADLOCK_GLOBALS {
  LONGLONG TimeAcquire;                                // offset: 0x0 (0)
  LONGLONG TimeRelease;                                // offset: 0x8 (8)
  struct _LIST_ENTRY *ResourceDatabase;                // offset: 0x10 (16)
  ULONGLONG ResourceDatabaseCount;                     // offset: 0x18 (24)
  struct _VF_ADDRESS_RANGE ResourceAddressRange[1023]; // offset: 0x20 (32)
  struct _LIST_ENTRY *ThreadDatabase;                  // offset: 0x4010 (16400)
  ULONGLONG ThreadDatabaseCount;                       // offset: 0x4018 (16408)
  struct _VF_ADDRESS_RANGE ThreadAddressRange[1023];   // offset: 0x4020 (16416)
  volatile ULONG AllocationFailures;                   // offset: 0x8010 (32784)
  ULONG NodesTrimmedBasedOnAge;                        // offset: 0x8014 (32788)
  ULONG NodesTrimmedBasedOnCount;                      // offset: 0x8018 (32792)
  ULONG NodesSearched;                                 // offset: 0x801c (32796)
  ULONG MaxNodesSearched;                              // offset: 0x8020 (32800)
  ULONG SequenceNumber;                                // offset: 0x8024 (32804)
  ULONG RecursionDepthLimit;                           // offset: 0x8028 (32808)
  ULONG SearchedNodesLimit;                            // offset: 0x802c (32812)
  ULONG DepthLimitHits;                                // offset: 0x8030 (32816)
  ULONG SearchLimitHits;                               // offset: 0x8034 (32820)
  ULONG StackLimitHits;                                // offset: 0x8038 (32824)
  ULONG ABC_ACB_Skipped;                               // offset: 0x803c (32828)
  ULONG OutOfOrderReleases;                            // offset: 0x8040 (32832)
  ULONG NodesReleasedOutOfOrder;                       // offset: 0x8044 (32836)
  ULONG TotalReleases;                                 // offset: 0x8048 (32840)
  ULONG RootNodesDeleted;                              // offset: 0x804c (32844)
  ULONG ForgetHistoryCounter;                          // offset: 0x8050 (32848)
  VOID *Instigator;                                    // offset: 0x8058 (32856)
  ULONG NumberOfParticipants;                          // offset: 0x8060 (32864)
  struct _VI_DEADLOCK_NODE *Participant[32];           // offset: 0x8068 (32872)
  LONG ChildrenCountWatermark;                         // offset: 0x8168 (33128)
  enum _KERNEL_STACK_LIMITS StackType;                 // offset: 0x816c (33132)
  ULONGLONG StackLowLimit;                             // offset: 0x8170 (33136)
  ULONGLONG StackHighLimit;                            // offset: 0x8178 (33144)
};

// 0x48 (72) bytes
struct _ETWP_NOTIFICATION_HEADER {
  enum _ETW_NOTIFICATION_TYPE NotificationType; // offset: 0x0 (0)
  ULONG NotificationSize;                       // offset: 0x4 (4)
  LONG RefCount;                                // offset: 0x8 (8)
  UCHAR ReplyRequested;                         // offset: 0xc (12)
  union {
    ULONG ReplyIndex; // offset: 0x10 (16)
    ULONG Timeout;    // offset: 0x10 (16)
  };
  union {
    ULONG ReplyCount;    // offset: 0x14 (20)
    ULONG NotifyeeCount; // offset: 0x14 (20)
  };
  union {
    ULONGLONG ReplyHandle; // offset: 0x18 (24)
    VOID *ReplyObject;     // offset: 0x18 (24)
    ULONG RegIndex;        // offset: 0x18 (24)
  };
  ULONG TargetPID;              // offset: 0x20 (32)
  ULONG SourcePID;              // offset: 0x24 (36)
  struct _GUID DestinationGuid; // offset: 0x28 (40)
  struct _GUID SourceGuid;      // offset: 0x38 (56)
};

// 0x48 (72) bytes
struct _PNP_DEVICE_ACTION_ENTRY {
  struct _LIST_ENTRY ListEntry;                // offset: 0x0 (0)
  struct _DEVICE_OBJECT *DeviceObject;         // offset: 0x10 (16)
  enum _PNP_DEVICE_ACTION_REQUEST RequestType; // offset: 0x18 (24)
  UCHAR ReorderingBarrier;                     // offset: 0x1c (28)
  ULONGLONG RequestArgument;                   // offset: 0x20 (32)
  struct _KEVENT *CompletionEvent;             // offset: 0x28 (40)
  LONG *CompletionStatus;                      // offset: 0x30 (48)
  struct _GUID ActivityId;                     // offset: 0x38 (56)
};

// 0x80 (128) bytes
struct _PTE_TRACKER {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 (0)
  struct _MDL *Mdl;             // offset: 0x10 (16)
  ULONGLONG Count;              // offset: 0x18 (24)
  VOID *SystemVa;               // offset: 0x20 (32)
  VOID *StartVa;                // offset: 0x28 (40)
  ULONG Offset;                 // offset: 0x30 (48)
  ULONG Length;                 // offset: 0x34 (52)
  ULONGLONG Page;               // offset: 0x38 (56)
  ULONG IoMapping : 1;          // offset: 0x40 (64)
  ULONG Matched : 1;            // offset: 0x40 (64)
  ULONG CacheAttribute : 2;     // offset: 0x40 (64)
  ULONG GuardPte : 1;           // offset: 0x40 (64)
  ULONG Spare : 27;             // offset: 0x40 (64)
  VOID *StackTrace[7];          // offset: 0x48 (72)
};

// 0x38 (56) bytes
struct _RTLP_RANGE_LIST_ENTRY {
  ULONGLONG Start; // offset: 0x0 (0)
  ULONGLONG End;   // offset: 0x8 (8)
  union {
    struct {
      VOID *UserData; // offset: 0x0 (0)
      VOID *Owner;    // offset: 0x8 (8)
    } Allocated;      // offset: 0x10 (16)
    struct {
      struct _LIST_ENTRY ListHead; // offset: 0x0 (0)
    } Merged;                      // offset: 0x10 (16)
  };
  UCHAR Attributes;             // offset: 0x20 (32)
  UCHAR PublicFlags;            // offset: 0x21 (33)
  USHORT PrivateFlags;          // offset: 0x22 (34)
  struct _LIST_ENTRY ListEntry; // offset: 0x28 (40)
};

// 0x8 (8) bytes
union _WHEA_ERROR_STATUS {
  ULONGLONG ErrorStatus;    // offset: 0x0 (0)
  ULONGLONG Reserved1 : 8;  // offset: 0x0 (0)
  ULONGLONG ErrorType : 8;  // offset: 0x0 (0)
  ULONGLONG Address : 1;    // offset: 0x0 (0)
  ULONGLONG Control : 1;    // offset: 0x0 (0)
  ULONGLONG Data : 1;       // offset: 0x0 (0)
  ULONGLONG Responder : 1;  // offset: 0x0 (0)
  ULONGLONG Requester : 1;  // offset: 0x0 (0)
  ULONGLONG FirstError : 1; // offset: 0x0 (0)
  ULONGLONG Overflow : 1;   // offset: 0x0 (0)
  ULONGLONG Reserved2 : 41; // offset: 0x0 (0)
};

// 0x8 (8) bytes
union _WHEA_MEMORY_ERROR_SECTION_VALIDBITS {
  ULONGLONG ErrorStatus : 1;         // offset: 0x0 (0)
  ULONGLONG PhysicalAddress : 1;     // offset: 0x0 (0)
  ULONGLONG PhysicalAddressMask : 1; // offset: 0x0 (0)
  ULONGLONG Node : 1;                // offset: 0x0 (0)
  ULONGLONG Card : 1;                // offset: 0x0 (0)
  ULONGLONG Module : 1;              // offset: 0x0 (0)
  ULONGLONG Bank : 1;                // offset: 0x0 (0)
  ULONGLONG Device : 1;              // offset: 0x0 (0)
  ULONGLONG Row : 1;                 // offset: 0x0 (0)
  ULONGLONG Column : 1;              // offset: 0x0 (0)
  ULONGLONG BitPosition : 1;         // offset: 0x0 (0)
  ULONGLONG RequesterId : 1;         // offset: 0x0 (0)
  ULONGLONG ResponderId : 1;         // offset: 0x0 (0)
  ULONGLONG TargetId : 1;            // offset: 0x0 (0)
  ULONGLONG ErrorType : 1;           // offset: 0x0 (0)
  ULONGLONG Reserved : 49;           // offset: 0x0 (0)
  ULONGLONG ValidBits;               // offset: 0x0 (0)
};

// 0x49 (73) bytes
struct _WHEA_MEMORY_ERROR_SECTION {
  union _WHEA_MEMORY_ERROR_SECTION_VALIDBITS ValidBits; // offset: 0x0 (0)
  union _WHEA_ERROR_STATUS ErrorStatus;                 // offset: 0x8 (8)
  ULONGLONG PhysicalAddress;                            // offset: 0x10 (16)
  ULONGLONG PhysicalAddressMask;                        // offset: 0x18 (24)
  USHORT Node;                                          // offset: 0x20 (32)
  USHORT Card;                                          // offset: 0x22 (34)
  USHORT Module;                                        // offset: 0x24 (36)
  USHORT Bank;                                          // offset: 0x26 (38)
  USHORT Device;                                        // offset: 0x28 (40)
  USHORT Row;                                           // offset: 0x2a (42)
  USHORT Column;                                        // offset: 0x2c (44)
  USHORT BitPosition;                                   // offset: 0x2e (46)
  ULONGLONG RequesterId;                                // offset: 0x30 (48)
  ULONGLONG ResponderId;                                // offset: 0x38 (56)
  ULONGLONG TargetId;                                   // offset: 0x40 (64)
  UCHAR ErrorType;                                      // offset: 0x48 (72)
};

// 0x8 (8) bytes
struct _MI_SESSION_DRIVER_UNLOAD {
  union {
    VOID (*Function)(struct _DRIVER_OBJECT *arg1); // offset: 0x0 (0)
    ULONGLONG FunctionValue;                       // offset: 0x0 (0)
  };
};

// 0x80 (128) bytes
struct _VF_POOL_TRACE {
  VOID *Address;           // offset: 0x0 (0)
  ULONGLONG Size;          // offset: 0x8 (8)
  struct _ETHREAD *Thread; // offset: 0x10 (16)
  VOID *StackTrace[13];    // offset: 0x18 (24)
};

// 0x20 (32) bytes
struct _LOCK_HEADER {
  struct _RTL_AVL_TREE LockTree; // offset: 0x0 (0)
  ULONGLONG Count;               // offset: 0x8 (8)
  ULONGLONG Lock;                // offset: 0x10 (16)
  ULONG Valid;                   // offset: 0x18 (24)
};

// 0x1e0 (480) bytes
struct _PO_HIBER_PERF {
  ULONGLONG HiberIoTicks;                          // offset: 0x0 (0)
  ULONGLONG HiberIoCpuTicks;                       // offset: 0x8 (8)
  ULONGLONG HiberInitTicks;                        // offset: 0x10 (16)
  ULONGLONG HiberHiberFileTicks;                   // offset: 0x18 (24)
  ULONGLONG HiberCompressTicks;                    // offset: 0x20 (32)
  ULONGLONG HiberSharedBufferTicks;                // offset: 0x28 (40)
  ULONGLONG HiberChecksumTicks;                    // offset: 0x30 (48)
  ULONGLONG HiberChecksumIoTicks;                  // offset: 0x38 (56)
  union _LARGE_INTEGER TotalHibernateTime;         // offset: 0x40 (64)
  ULONG POSTTime;                                  // offset: 0x48 (72)
  ULONG ResumeBootMgrTime;                         // offset: 0x4c (76)
  ULONG BootmgrUserInputTime;                      // offset: 0x50 (80)
  ULONGLONG ResumeAppTicks;                        // offset: 0x58 (88)
  ULONGLONG ResumeAppStartTimestamp;               // offset: 0x60 (96)
  ULONGLONG ResumeLibraryInitTicks;                // offset: 0x68 (104)
  ULONGLONG ResumeInitTicks;                       // offset: 0x70 (112)
  ULONGLONG ResumeRestoreImageStartTimestamp;      // offset: 0x78 (120)
  ULONGLONG ResumeHiberFileTicks;                  // offset: 0x80 (128)
  ULONGLONG ResumeIoTicks;                         // offset: 0x88 (136)
  ULONGLONG ResumeDecompressTicks;                 // offset: 0x90 (144)
  ULONGLONG ResumeAllocateTicks;                   // offset: 0x98 (152)
  ULONGLONG ResumeUserInOutTicks;                  // offset: 0xa0 (160)
  ULONGLONG ResumeMapTicks;                        // offset: 0xa8 (168)
  ULONGLONG ResumeUnmapTicks;                      // offset: 0xb0 (176)
  ULONGLONG ResumeChecksumTicks;                   // offset: 0xb8 (184)
  ULONGLONG ResumeChecksumIoTicks;                 // offset: 0xc0 (192)
  ULONGLONG ResumeKernelSwitchTimestamp;           // offset: 0xc8 (200)
  ULONGLONG WriteLogDataTimestamp;                 // offset: 0xd0 (208)
  ULONGLONG KernelReturnFromHandler;               // offset: 0xd8 (216)
  ULONGLONG TimeStampCounterAtSwitchTime;          // offset: 0xe0 (224)
  ULONGLONG HalTscOffset;                          // offset: 0xe8 (232)
  ULONGLONG HvlTscOffset;                          // offset: 0xf0 (240)
  ULONGLONG SleeperThreadEnd;                      // offset: 0xf8 (248)
  ULONGLONG KernelReturnSystemPowerStateTimestamp; // offset: 0x100 (256)
  ULONGLONG IoBoundedness;                         // offset: 0x108 (264)
  ULONGLONG KernelDecompressTicks;                 // offset: 0x110 (272)
  ULONGLONG KernelIoTicks;                         // offset: 0x118 (280)
  ULONGLONG KernelCopyTicks;                       // offset: 0x120 (288)
  ULONGLONG ReadCheckCount;                        // offset: 0x128 (296)
  ULONGLONG KernelInitTicks;                       // offset: 0x130 (304)
  ULONGLONG KernelResumeHiberFileTicks;            // offset: 0x138 (312)
  ULONGLONG KernelIoCpuTicks;                      // offset: 0x140 (320)
  ULONGLONG KernelSharedBufferTicks;               // offset: 0x148 (328)
  ULONGLONG KernelAnimationTicks;                  // offset: 0x150 (336)
  ULONGLONG KernelChecksumTicks;                   // offset: 0x158 (344)
  ULONGLONG KernelChecksumIoTicks;                 // offset: 0x160 (352)
  union _LARGE_INTEGER AnimationStart;             // offset: 0x168 (360)
  union _LARGE_INTEGER AnimationStop;              // offset: 0x170 (368)
  ULONG DeviceResumeTime;                          // offset: 0x178 (376)
  ULONGLONG SecurePagesProcessed;                  // offset: 0x180 (384)
  ULONGLONG BootPagesProcessed;                    // offset: 0x188 (392)
  ULONGLONG KernelPagesProcessed;                  // offset: 0x190 (400)
  ULONGLONG BootBytesWritten;                      // offset: 0x198 (408)
  ULONGLONG KernelBytesWritten;                    // offset: 0x1a0 (416)
  ULONGLONG BootPagesWritten;                      // offset: 0x1a8 (424)
  ULONGLONG KernelPagesWritten;                    // offset: 0x1b0 (432)
  ULONGLONG BytesWritten;                          // offset: 0x1b8 (440)
  ULONG PagesWritten;                              // offset: 0x1c0 (448)
  ULONG FileRuns;                                  // offset: 0x1c4 (452)
  ULONG NoMultiStageResumeReason;                  // offset: 0x1c8 (456)
  ULONG MaxHuffRatio;                              // offset: 0x1cc (460)
  ULONGLONG AdjustedTotalResumeTime;               // offset: 0x1d0 (464)
  ULONGLONG ResumeCompleteTimestamp;               // offset: 0x1d8 (472)
};

// 0x70 (112) bytes
struct _POP_IO_INFO {
  struct _MDL *DumpMdl;            // offset: 0x0 (0)
  enum _POP_IO_STATUS IoStatus;    // offset: 0x8 (8)
  ULONGLONG IoStartCount;          // offset: 0x10 (16)
  ULONGLONG IoBytesCompleted;      // offset: 0x18 (24)
  ULONGLONG IoBytesInProgress;     // offset: 0x20 (32)
  ULONGLONG RequestSize;           // offset: 0x28 (40)
  union _LARGE_INTEGER IoLocation; // offset: 0x30 (48)
  ULONGLONG FileOffset;            // offset: 0x38 (56)
  VOID *Buffer;                    // offset: 0x40 (64)
  UCHAR AsyncCapable;              // offset: 0x48 (72)
  ULONGLONG BytesToRead;           // offset: 0x50 (80)
  ULONG Pages;                     // offset: 0x58 (88)
  ULONGLONG HighestChecksumIndex;  // offset: 0x60 (96)
  USHORT PreviousChecksum;         // offset: 0x68 (104)
};

// 0x1d0 (464) bytes
struct _POP_DEVICE_SYS_STATE {
  UCHAR IrpMinor;                        // offset: 0x0 (0)
  enum _SYSTEM_POWER_STATE SystemState;  // offset: 0x4 (4)
  ULONGLONG SpinLock;                    // offset: 0x8 (8)
  struct _KTHREAD *Thread;               // offset: 0x10 (16)
  struct _KEVENT *AbortEvent;            // offset: 0x18 (24)
  struct _KSEMAPHORE *ReadySemaphore;    // offset: 0x20 (32)
  struct _KSEMAPHORE *FinishedSemaphore; // offset: 0x28 (40)
  struct _PO_DEVICE_NOTIFY_ORDER Order;  // offset: 0x30 (48)
  struct _LIST_ENTRY Pending;            // offset: 0x1a8 (424)
  LONG Status;                           // offset: 0x1b8 (440)
  struct _DEVICE_OBJECT *FailedDevice;   // offset: 0x1c0 (448)
  UCHAR Waking;                          // offset: 0x1c8 (456)
  UCHAR Cancelled;                       // offset: 0x1c9 (457)
  UCHAR IgnoreErrors;                    // offset: 0x1ca (458)
  UCHAR IgnoreNotImplemented;            // offset: 0x1cb (459)
  UCHAR TimeRefreshLockAcquired;         // offset: 0x1cc (460)
};

// 0x18 (24) bytes
struct _POP_CURRENT_BROADCAST {
  UCHAR InProgress;                                 // offset: 0x0 (0)
  struct _SYSTEM_POWER_STATE_CONTEXT SystemContext; // offset: 0x4 (4)
  enum POWER_ACTION PowerAction;                    // offset: 0x8 (8)
  struct _POP_DEVICE_SYS_STATE *DeviceState;        // offset: 0x10 (16)
};

// 0x28 (40) bytes
struct _DIAGNOSTIC_BUFFER {
  ULONGLONG Size;                  // offset: 0x0 (0)
  enum _REQUESTER_TYPE CallerType; // offset: 0x8 (8)
  union {
    struct {
      ULONGLONG ProcessImageNameOffset; // offset: 0x10 (16)
      ULONG ProcessId;                  // offset: 0x18 (24)
      ULONG ServiceTag;                 // offset: 0x1c (28)
    };
    struct {
      ULONGLONG DeviceDescriptionOffset; // offset: 0x10 (16)
      ULONGLONG DevicePathOffset;        // offset: 0x18 (24)
    };
  };
  ULONGLONG ReasonOffset; // offset: 0x20 (32)
};

// 0xf0 (240) bytes
struct _ETW_WMITRACE_WORK {
  ULONG LoggerId;   // offset: 0x0 (0)
  ULONG SpareUlong; // offset: 0x4 (4)
  union {
    struct {
      CHAR LoggerName[65];   // offset: 0x8 (8)
      CHAR FileName[129];    // offset: 0x49 (73)
      ULONG MaximumFileSize; // offset: 0xcc (204)
      ULONG MinBuffers;      // offset: 0xd0 (208)
      ULONG MaxBuffers;      // offset: 0xd4 (212)
      ULONG BufferSize;      // offset: 0xd8 (216)
      ULONG Mode;            // offset: 0xdc (220)
      ULONG FlushTimer;      // offset: 0xe0 (224)
    };
    struct {
      ULONGLONG MatchAny;   // offset: 0x8 (8)
      ULONGLONG MatchAll;   // offset: 0x10 (16)
      ULONG EnableProperty; // offset: 0x18 (24)
      struct _GUID Guid;    // offset: 0x1c (28)
      UCHAR Level;          // offset: 0x2c (44)
    };
  };
  LONG Status; // offset: 0xe8 (232)
};

// 0x38 (56) bytes
struct _MI_TRIAGE_DUMP_DATA {
  ULONGLONG BadPageCount;                 // offset: 0x0 (0)
  LONG BadPagesDetected;                  // offset: 0x8 (8)
  LONG ZeroedPageSingleBitErrorsDetected; // offset: 0xc (12)
  LONG ScrubPasses;                       // offset: 0x10 (16)
  LONG ScrubBadPagesFound;                // offset: 0x14 (20)
  ULONG PageHashErrors;                   // offset: 0x18 (24)
  ULONGLONG FeatureBits;                  // offset: 0x20 (32)
  ULONG TimeZoneId;                       // offset: 0x28 (40)
  union _MI_FLAGS Flags;                  // offset: 0x2c (44)
  VOID *VsmConnection;                    // offset: 0x30 (48)
};

// 0x10 (16) bytes
struct _VF_AVL_TREE_NODE {
  VOID *p;             // offset: 0x0 (0)
  ULONGLONG RangeSize; // offset: 0x8 (8)
};

// 0xc0 (192) bytes
struct _VF_AVL_TABLE {
  struct _RTL_AVL_TABLE RtlTable;         // offset: 0x0 (0)
  struct _VF_AVL_TREE_NODE *ReservedNode; // offset: 0x68 (104)
  VOID *NodeToFree;                       // offset: 0x70 (112)
  volatile LONG Lock;                     // offset: 0x80 (128)
};

// 0x20 (32) bytes
struct _VF_AVL_TREE {
  ULONGLONG NodeRangeSize;      // offset: 0x0 (0)
  volatile ULONGLONG NodeCount; // offset: 0x8 (8)
  struct _VF_AVL_TABLE *Tables; // offset: 0x10 (16)
  ULONG TablesNo;               // offset: 0x18 (24)
  union {
    ULONG NodeSize;     // offset: 0x1c (28)
    ULONG UseLookaside; // offset: 0x1c (28)

  } u1; // offset: 0x1c (28)
};

// 0x20 (32) bytes
struct _NON_PAGED_DEBUG_INFO {
  USHORT Signature;       // offset: 0x0 (0)
  USHORT Flags;           // offset: 0x2 (2)
  ULONG Size;             // offset: 0x4 (4)
  USHORT Machine;         // offset: 0x8 (8)
  USHORT Characteristics; // offset: 0xa (10)
  ULONG TimeDateStamp;    // offset: 0xc (12)
  ULONG CheckSum;         // offset: 0x10 (16)
  ULONG SizeOfImage;      // offset: 0x14 (20)
  ULONGLONG ImageBase;    // offset: 0x18 (24)
};

// 0xa0 (160) bytes
struct _KLDR_DATA_TABLE_ENTRY {
  struct _LIST_ENTRY InLoadOrderLinks;             // offset: 0x0 (0)
  VOID *ExceptionTable;                            // offset: 0x10 (16)
  ULONG ExceptionTableSize;                        // offset: 0x18 (24)
  VOID *GpValue;                                   // offset: 0x20 (32)
  struct _NON_PAGED_DEBUG_INFO *NonPagedDebugInfo; // offset: 0x28 (40)
  VOID *DllBase;                                   // offset: 0x30 (48)
  VOID *EntryPoint;                                // offset: 0x38 (56)
  ULONG SizeOfImage;                               // offset: 0x40 (64)
  struct _UNICODE_STRING FullDllName;              // offset: 0x48 (72)
  struct _UNICODE_STRING BaseDllName;              // offset: 0x58 (88)
  ULONG Flags;                                     // offset: 0x68 (104)
  USHORT LoadCount;                                // offset: 0x6c (108)
  union {
    USHORT SignatureLevel : 4; // offset: 0x6e (110)
    USHORT SignatureType : 3;  // offset: 0x6e (110)
    USHORT Unused : 9;         // offset: 0x6e (110)
    USHORT EntireField;        // offset: 0x6e (110)

  } u1;                        // offset: 0x6e (110)
  VOID *SectionPointer;        // offset: 0x70 (112)
  ULONG CheckSum;              // offset: 0x78 (120)
  ULONG CoverageSectionSize;   // offset: 0x7c (124)
  VOID *CoverageSection;       // offset: 0x80 (128)
  VOID *LoadedImports;         // offset: 0x88 (136)
  VOID *Spare;                 // offset: 0x90 (144)
  ULONG SizeOfImageNotRounded; // offset: 0x98 (152)
  ULONG TimeDateStamp;         // offset: 0x9c (156)
};

// 0x10 (16) bytes
struct _MI_ZERO_COST_COUNTS {
  ULONGLONG NativeSum; // offset: 0x0 (0)
  ULONGLONG CachedSum; // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _HAL_CHANNEL_MEMORY_RANGES {
  ULONGLONG PageFrameIndex; // offset: 0x0 (0)
  USHORT MpnId;             // offset: 0x8 (8)
  USHORT Node;              // offset: 0xa (10)
  USHORT Channel;           // offset: 0xc (12)
  UCHAR IsPowerManageable;  // offset: 0xe (14)
  UCHAR DeepPowerState;     // offset: 0xf (15)
};

// 0x10 (16) bytes
struct _HAL_NODE_RANGE {
  ULONGLONG PageFrameIndex; // offset: 0x0 (0)
  ULONG Node;               // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _MI_IO_CACHE_STATS {
  ULONGLONG UnusedBlocks;      // offset: 0x0 (0)
  ULONG ActiveCacheMatch;      // offset: 0x8 (8)
  ULONG ActiveCacheOverride;   // offset: 0xc (12)
  ULONG UnmappedCacheFlush;    // offset: 0x10 (16)
  ULONG UnmappedCacheMatch;    // offset: 0x14 (20)
  ULONG UnmappedCacheConflict; // offset: 0x18 (24)
};

// 0x28 (40) bytes
struct _MI_CROSS_PARTITION_CHARGES {
  ULONGLONG CurrentCharges; // offset: 0x0 (0)
  ULONGLONG ChargeFailures; // offset: 0x8 (8)
  ULONGLONG ChargePeak;     // offset: 0x10 (16)
  ULONGLONG ChargeMinimum;  // offset: 0x18 (24)
  ULONGLONG ChargeMaximum;  // offset: 0x20 (32)
};

// 0x380 (896) bytes
struct _MI_RESAVAIL_TRACKER {
  ULONGLONG AllocateKernelStack;                    // offset: 0x0 (0)
  ULONGLONG AllocateGrowKernelStack;                // offset: 0x8 (8)
  ULONGLONG FreeKernelStack;                        // offset: 0x10 (16)
  ULONGLONG FreeKernelStackError;                   // offset: 0x18 (24)
  ULONGLONG FreeGrowKernelStackError;               // offset: 0x20 (32)
  ULONGLONG AllocateCreateProcess;                  // offset: 0x28 (40)
  ULONGLONG FreeCreateProcessError;                 // offset: 0x30 (48)
  ULONGLONG FreeDeleteProcess;                      // offset: 0x38 (56)
  ULONGLONG FreeCleanProcess;                       // offset: 0x40 (64)
  ULONGLONG FreeCleanProcessError;                  // offset: 0x48 (72)
  ULONGLONG AllocateAddProcessWsMetaPage;           // offset: 0x50 (80)
  ULONGLONG AllocateWsIncrease;                     // offset: 0x58 (88)
  ULONGLONG FreeWsIncreaseError;                    // offset: 0x60 (96)
  ULONGLONG FreeWsIncreaseErrorMax;                 // offset: 0x68 (104)
  ULONGLONG FreeWsDecrease;                         // offset: 0x70 (112)
  ULONGLONG AllocateWorkingSetPage;                 // offset: 0x78 (120)
  ULONGLONG FreeWorkingSetPageError;                // offset: 0x80 (128)
  ULONGLONG FreeDeletePteRange;                     // offset: 0x88 (136)
  ULONGLONG AllocatePageTablesForProcessMetadata;   // offset: 0x90 (144)
  ULONGLONG FreePageTablesForProcessMetadataError2; // offset: 0x98 (152)
  ULONGLONG AllocatePageTablesForSystem;            // offset: 0xa0 (160)
  ULONGLONG FreePageTablesExcess;                   // offset: 0xa8 (168)
  ULONGLONG FreeSystemVaPageTables;                 // offset: 0xb0 (176)
  ULONGLONG FreeSessionVaPageTables;                // offset: 0xb8 (184)
  ULONGLONG AllocateCreateSession;                  // offset: 0xc0 (192)
  ULONGLONG FreeSessionWsDereference;               // offset: 0xc8 (200)
  ULONGLONG FreeSessionDereference;                 // offset: 0xd0 (208)
  ULONGLONG AllocateLockedSessionImage;             // offset: 0xd8 (216)
  ULONGLONG FreeLockedSessionImage;                 // offset: 0xe0 (224)
  ULONGLONG FreeSessionImageConversion;             // offset: 0xe8 (232)
  ULONGLONG AllocateWsAdjustPageTable;              // offset: 0xf0 (240)
  ULONGLONG FreeWsAdjustPageTable;                  // offset: 0xf8 (248)
  ULONGLONG FreeWsAdjustPageTableError;             // offset: 0x100 (256)
  ULONGLONG AllocateNoLowMemory;                    // offset: 0x108 (264)
  ULONGLONG AllocatePagedPoolLockedDown;            // offset: 0x110 (272)
  ULONGLONG FreePagedPoolLockedDown;                // offset: 0x118 (280)
  ULONGLONG AllocateSystemBitmaps;                  // offset: 0x120 (288)
  ULONGLONG FreeSystemBitmapsError;                 // offset: 0x128 (296)
  ULONGLONG AllocateForMdl;                         // offset: 0x130 (304)
  ULONGLONG FreeFromMdl;                            // offset: 0x138 (312)
  ULONGLONG AllocateForMdlPartition;                // offset: 0x140 (320)
  ULONGLONG FreeFromMdlPartition;                   // offset: 0x148 (328)
  ULONGLONG FreeMdlExcess;                          // offset: 0x150 (336)
  ULONGLONG AllocateExpansionNonPagedPool;          // offset: 0x158 (344)
  ULONGLONG FreeExpansionNonPagedPool;              // offset: 0x160 (352)
  ULONGLONG AllocateVad;                            // offset: 0x168 (360)
  ULONGLONG RemoveVad;                              // offset: 0x170 (368)
  ULONGLONG FreeVad;                                // offset: 0x178 (376)
  ULONGLONG AllocateContiguous;                     // offset: 0x180 (384)
  ULONGLONG FreeContiguousPages;                    // offset: 0x188 (392)
  ULONGLONG FreeContiguousError;                    // offset: 0x190 (400)
  ULONGLONG FreeLargePageMemory;                    // offset: 0x198 (408)
  ULONGLONG AllocateSystemWsles;                    // offset: 0x1a0 (416)
  ULONGLONG FreeSystemWsles;                        // offset: 0x1a8 (424)
  ULONGLONG AllocateSystemInitWs;                   // offset: 0x1b0 (432)
  ULONGLONG AllocateSessionInitWs;                  // offset: 0x1b8 (440)
  ULONGLONG FreeSessionInitWsError;                 // offset: 0x1c0 (448)
  ULONGLONG AllocateSystemImage;                    // offset: 0x1c8 (456)
  ULONGLONG AllocateSystemImageLoad;                // offset: 0x1d0 (464)
  ULONGLONG AllocateSessionSharedImage;             // offset: 0x1d8 (472)
  ULONGLONG FreeSystemImageInitCode;                // offset: 0x1e0 (480)
  ULONGLONG FreeSystemImageLargePageConversion;     // offset: 0x1e8 (488)
  ULONGLONG FreeSystemImageError;                   // offset: 0x1f0 (496)
  ULONGLONG FreeSystemImageLoadExcess;              // offset: 0x1f8 (504)
  ULONGLONG FreeUnloadSystemImage;                  // offset: 0x200 (512)
  ULONGLONG FreeReloadBootImageLarge;               // offset: 0x208 (520)
  ULONGLONG FreeIndependent;                        // offset: 0x210 (528)
  ULONGLONG AllocateHotRemove;                      // offset: 0x218 (536)
  ULONGLONG FreeHotAdd;                             // offset: 0x220 (544)
  ULONGLONG AllocateBoot;                           // offset: 0x228 (552)
  ULONGLONG FreeLoaderBlock;                        // offset: 0x230 (560)
  ULONGLONG AllocateNonPagedSpecialPool;            // offset: 0x238 (568)
  ULONGLONG FreeNonPagedSpecialPoolError;           // offset: 0x240 (576)
  ULONGLONG FreeNonPagedSpecialPool;                // offset: 0x248 (584)
  ULONGLONG AllocateSharedSegmentPage;              // offset: 0x250 (592)
  ULONGLONG FreeSharedSegmentPage;                  // offset: 0x258 (600)
  ULONGLONG AllocateZeroPage;                       // offset: 0x260 (608)
  ULONGLONG FreeZeroPage;                           // offset: 0x268 (616)
  ULONGLONG AllocateForPo;                          // offset: 0x270 (624)
  ULONGLONG AllocateForPoForce;                     // offset: 0x278 (632)
  ULONGLONG FreeForPo;                              // offset: 0x280 (640)
  ULONGLONG AllocateThreadHardFaultBehavior;        // offset: 0x288 (648)
  ULONGLONG FreeThreadHardFaultBehavior;            // offset: 0x290 (656)
  ULONGLONG ObtainFaultCharges;                     // offset: 0x298 (664)
  ULONGLONG FreeFaultCharges;                       // offset: 0x2a0 (672)
  ULONGLONG AllocateStoreCharges;                   // offset: 0x2a8 (680)
  ULONGLONG FreeStoreCharges;                       // offset: 0x2b0 (688)
  ULONGLONG ObtainLockedPageCharge;                 // offset: 0x2c0 (704)
  ULONGLONG FreeLockedPageCharge;                   // offset: 0x300 (768)
  ULONGLONG AllocateStore;                          // offset: 0x308 (776)
  ULONGLONG FreeStore;                              // offset: 0x310 (784)
  ULONGLONG AllocateSystemImageProtos;              // offset: 0x318 (792)
  ULONGLONG FreeSystemImageProtos;                  // offset: 0x320 (800)
  ULONGLONG AllocateModWriterCharge;                // offset: 0x328 (808)
  ULONGLONG FreeModWriterCharge;                    // offset: 0x330 (816)
  ULONGLONG AllocateMappedWriterCharge;             // offset: 0x338 (824)
  ULONGLONG FreeMappedWriterCharge;                 // offset: 0x340 (832)
  ULONGLONG AllocateRegistryCharges;                // offset: 0x348 (840)
  ULONGLONG FreeRegistryCharges;                    // offset: 0x350 (848)
};

// 0x40 (64) bytes
struct _MI_SYSTEM_TRIM_STATE {
  ULONGLONG ExpansionLock;                // offset: 0x0 (0)
  volatile LONG TrimInProgressCount;      // offset: 0x8 (8)
  struct _KEVENT PeriodicWorkingSetEvent; // offset: 0x10 (16)
  ULONG TrimAllPageFaultCount[3];         // offset: 0x28 (40)
};

// 0x58 (88) bytes
struct _MI_IO_PAGE_STATE {
  ULONGLONG IoPfnLock;                    // offset: 0x0 (0)
  struct _RTL_AVL_TREE IoPfnRoot[3];      // offset: 0x8 (8)
  struct _LIST_ENTRY UnusedCachedMaps;    // offset: 0x20 (32)
  ULONG OldestCacheFlushTimeStamp;        // offset: 0x30 (48)
  struct _MI_IO_CACHE_STATS IoCacheStats; // offset: 0x38 (56)
};

// 0xf8 (248) bytes
struct _MI_POOL_STATE {
  ULONGLONG MaximumNonPagedPoolThreshold;             // offset: 0x0 (0)
  ULONG NonPagedPoolSListMaximum[3];                  // offset: 0x8 (8)
  volatile ULONGLONG AllocatedNonPagedPool;           // offset: 0x18 (24)
  struct _SINGLE_LIST_ENTRY BadPoolHead;              // offset: 0x20 (32)
  ULONG HighEventSets;                                // offset: 0x28 (40)
  UCHAR HighEventSetsValid;                           // offset: 0x2c (44)
  ULONG PoolFailures[3][3];                           // offset: 0x30 (48)
  struct _MI_POOL_FAILURE_REASONS PoolFailureReasons; // offset: 0x54 (84)
  ULONGLONG LowPagedPoolThreshold;                    // offset: 0x80 (128)
  ULONGLONG HighPagedPoolThreshold;                   // offset: 0x88 (136)
  ULONG PagedPoolSListMaximum;                        // offset: 0x90 (144)
  ULONG PreemptiveTrims[4];                           // offset: 0x94 (148)
  ULONGLONG SpecialPagesInUsePeak;                    // offset: 0xa8 (168)
  ULONG SpecialPoolRejected[9];                       // offset: 0xb0 (176)
  volatile ULONGLONG SpecialPagesNonPaged;            // offset: 0xd8 (216)
  volatile LONG SpecialPoolPdes;                      // offset: 0xe0 (224)
  ULONG SessionSpecialPoolPdesMax;                    // offset: 0xe4 (228)
  ULONGLONG TotalPagedPoolQuota;                      // offset: 0xe8 (232)
  ULONGLONG TotalNonPagedPoolQuota;                   // offset: 0xf0 (240)
};

// 0x18 (24) bytes
struct _ARBITER_CONFLICT_INFO {
  struct _DEVICE_OBJECT *OwningObject; // offset: 0x0 (0)
  ULONGLONG Start;                     // offset: 0x8 (8)
  ULONGLONG End;                       // offset: 0x10 (16)
};

// 0x28 (40) bytes
struct _RTL_RANGE {
  ULONGLONG Start;  // offset: 0x0 (0)
  ULONGLONG End;    // offset: 0x8 (8)
  VOID *UserData;   // offset: 0x10 (16)
  VOID *Owner;      // offset: 0x18 (24)
  UCHAR Attributes; // offset: 0x20 (32)
  UCHAR Flags;      // offset: 0x21 (33)
};

// 0x10 (16) bytes
struct _ARBITER_ORDERING {
  ULONGLONG Start; // offset: 0x0 (0)
  ULONGLONG End;   // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _ARBITER_ORDERING_LIST {
  USHORT Count;                        // offset: 0x0 (0)
  USHORT Maximum;                      // offset: 0x2 (2)
  struct _ARBITER_ORDERING *Orderings; // offset: 0x8 (8)
};

// 0xa8 (168) bytes
struct _MM_DRIVER_VERIFIER_DATA {
  ULONG Level;                                       // offset: 0x0 (0)
  volatile ULONG RaiseIrqls;                         // offset: 0x4 (4)
  volatile ULONG AcquireSpinLocks;                   // offset: 0x8 (8)
  volatile ULONG SynchronizeExecutions;              // offset: 0xc (12)
  volatile ULONG AllocationsAttempted;               // offset: 0x10 (16)
  volatile ULONG AllocationsSucceeded;               // offset: 0x14 (20)
  volatile ULONG AllocationsSucceededSpecialPool;    // offset: 0x18 (24)
  ULONG AllocationsWithNoTag;                        // offset: 0x1c (28)
  ULONG TrimRequests;                                // offset: 0x20 (32)
  ULONG Trims;                                       // offset: 0x24 (36)
  ULONG AllocationsFailed;                           // offset: 0x28 (40)
  volatile ULONG AllocationsFailedDeliberately;      // offset: 0x2c (44)
  volatile ULONG Loads;                              // offset: 0x30 (48)
  volatile ULONG Unloads;                            // offset: 0x34 (52)
  ULONG UnTrackedPool;                               // offset: 0x38 (56)
  ULONG UserTrims;                                   // offset: 0x3c (60)
  volatile ULONG CurrentPagedPoolAllocations;        // offset: 0x40 (64)
  volatile ULONG CurrentNonPagedPoolAllocations;     // offset: 0x44 (68)
  ULONG PeakPagedPoolAllocations;                    // offset: 0x48 (72)
  ULONG PeakNonPagedPoolAllocations;                 // offset: 0x4c (76)
  volatile ULONGLONG PagedBytes;                     // offset: 0x50 (80)
  volatile ULONGLONG NonPagedBytes;                  // offset: 0x58 (88)
  ULONGLONG PeakPagedBytes;                          // offset: 0x60 (96)
  ULONGLONG PeakNonPagedBytes;                       // offset: 0x68 (104)
  volatile ULONG BurstAllocationsFailedDeliberately; // offset: 0x70 (112)
  ULONG SessionTrims;                                // offset: 0x74 (116)
  volatile ULONG OptionChanges;                      // offset: 0x78 (120)
  volatile ULONG VerifyMode;                         // offset: 0x7c (124)
  struct _UNICODE_STRING PreviousBucketName;         // offset: 0x80 (128)
  volatile ULONG ExecutePoolTypes;                   // offset: 0x90 (144)
  volatile ULONG ExecutePageProtections;             // offset: 0x94 (148)
  volatile ULONG ExecutePageMappings;                // offset: 0x98 (152)
  volatile ULONG ExecuteWriteSections;               // offset: 0x9c (156)
  volatile ULONG SectionAlignmentFailures;           // offset: 0xa0 (160)
};

// 0x58 (88) bytes
struct _THERMAL_INFORMATION {
  ULONG ThermalStamp;         // offset: 0x0 (0)
  ULONG ThermalConstant1;     // offset: 0x4 (4)
  ULONG ThermalConstant2;     // offset: 0x8 (8)
  ULONGLONG Processors;       // offset: 0x10 (16)
  ULONG SamplingPeriod;       // offset: 0x18 (24)
  ULONG CurrentTemperature;   // offset: 0x1c (28)
  ULONG PassiveTripPoint;     // offset: 0x20 (32)
  ULONG CriticalTripPoint;    // offset: 0x24 (36)
  UCHAR ActiveTripPointCount; // offset: 0x28 (40)
  ULONG ActiveTripPoint[10];  // offset: 0x2c (44)
};

// 0x28 (40) bytes
struct _MEMORY_ALLOCATION_DESCRIPTOR {
  struct _LIST_ENTRY ListEntry;    // offset: 0x0 (0)
  enum _TYPE_OF_MEMORY MemoryType; // offset: 0x10 (16)
  ULONGLONG BasePage;              // offset: 0x18 (24)
  ULONGLONG PageCount;             // offset: 0x20 (32)
};

// 0x28 (40) bytes
struct _POOL_TRACKER_TABLE {
  volatile LONG Key;       // offset: 0x0 (0)
  ULONG NonPagedAllocs;    // offset: 0x4 (4)
  ULONG NonPagedFrees;     // offset: 0x8 (8)
  ULONGLONG NonPagedBytes; // offset: 0x10 (16)
  ULONG PagedAllocs;       // offset: 0x18 (24)
  ULONG PagedFrees;        // offset: 0x1c (28)
  ULONGLONG PagedBytes;    // offset: 0x20 (32)
};

// 0x18 (24) bytes
struct _KTIMER2_COLLECTION {
  struct _RTL_RB_TREE Tree; // offset: 0x0 (0)
  ULONGLONG NextDueTime;    // offset: 0x10 (16)
};

// 0x30 (48) bytes
struct _HEAP_STOP_ON_VALUES {
  ULONGLONG AllocAddress;              // offset: 0x0 (0)
  struct _HEAP_STOP_ON_TAG AllocTag;   // offset: 0x8 (8)
  ULONGLONG ReAllocAddress;            // offset: 0x10 (16)
  struct _HEAP_STOP_ON_TAG ReAllocTag; // offset: 0x18 (24)
  ULONGLONG FreeAddress;               // offset: 0x20 (32)
  struct _HEAP_STOP_ON_TAG FreeTag;    // offset: 0x28 (40)
};

// 0x1140 (4416) bytes
struct _POOL_DESCRIPTOR {
  enum _POOL_TYPE PoolType; // offset: 0x0 (0)
  union {
    struct _FAST_MUTEX PagedLock; // offset: 0x8 (8)
    ULONGLONG NonPagedLock;       // offset: 0x8 (8)
  };
  volatile LONG RunningAllocs;                     // offset: 0x40 (64)
  volatile LONG RunningDeAllocs;                   // offset: 0x44 (68)
  volatile LONG TotalBigPages;                     // offset: 0x48 (72)
  volatile LONG ThreadsProcessingDeferrals;        // offset: 0x4c (76)
  volatile ULONGLONG TotalBytes;                   // offset: 0x50 (80)
  ULONG PoolIndex;                                 // offset: 0x80 (128)
  volatile LONG TotalPages;                        // offset: 0xc0 (192)
  volatile struct _SINGLE_LIST_ENTRY PendingFrees; // offset: 0x100 (256)
  volatile LONG PendingFreeDepth;                  // offset: 0x108 (264)
  struct _LIST_ENTRY ListHeads[256];               // offset: 0x140 (320)
};

// 0x30 (48) bytes
struct _HEAP_UCR_DESCRIPTOR {
  struct _LIST_ENTRY ListEntry;    // offset: 0x0 (0)
  struct _LIST_ENTRY SegmentEntry; // offset: 0x10 (16)
  VOID *Address;                   // offset: 0x20 (32)
  ULONGLONG Size;                  // offset: 0x28 (40)
};

// 0x8 (8) bytes
union _CLS_LSN {
  struct {
    ULONG idxRecord;    // offset: 0x0 (0)
    ULONG cidContainer; // offset: 0x4 (4)
  } offset;             // offset: 0x0 (0)
  ULONGLONG ullOffset;  // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _CACHED_CHILD_LIST {
  ULONG Count; // offset: 0x0 (0)
  union {
    ULONGLONG ValueList;                   // offset: 0x8 (8)
    struct _CM_KEY_CONTROL_BLOCK *RealKcb; // offset: 0x8 (8)
  };
};

// 0x18 (24) bytes
struct _POOL_TRACKER_BIG_PAGES {
  volatile ULONGLONG Va;   // offset: 0x0 (0)
  ULONG Key;               // offset: 0x8 (8)
  ULONG Pattern : 8;       // offset: 0xc (12)
  ULONG PoolType : 12;     // offset: 0xc (12)
  ULONG SlushSize : 12;    // offset: 0xc (12)
  ULONGLONG NumberOfBytes; // offset: 0x10 (16)
};

// 0x118 (280) bytes
struct _SYSPTES_HEADER {
  struct _LIST_ENTRY ListHead[16]; // offset: 0x0 (0)
  ULONGLONG Count;                 // offset: 0x100 (256)
  ULONGLONG NumberOfEntries;       // offset: 0x108 (264)
  ULONGLONG NumberOfEntriesPeak;   // offset: 0x110 (272)
};

// 0x10 (16) bytes
struct _TraceLoggingMetadata_t {
  ULONG Signature; // offset: 0x0 (0)
  USHORT Size;     // offset: 0x4 (4)
  UCHAR Version;   // offset: 0x6 (6)
  UCHAR Flags;     // offset: 0x7 (7)
  ULONGLONG Magic; // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _VI_POOL_ENTRY_INUSE {
  VOID *VirtualAddress;    // offset: 0x0 (0)
  VOID *CallingAddress;    // offset: 0x8 (8)
  ULONGLONG NumberOfBytes; // offset: 0x10 (16)
  ULONGLONG Tag;           // offset: 0x18 (24)
};

// 0x18 (24) bytes
struct _VI_POOL_PAGE_HEADER {
  struct _SLIST_ENTRY *NextPage; // offset: 0x0 (0)
  VOID *VerifierEntry;           // offset: 0x8 (8)
  ULONGLONG Signature;           // offset: 0x10 (16)
};

// 0x20 (32) bytes
struct _VI_POOL_ENTRY {
  union {
    struct _VI_POOL_PAGE_HEADER PageHeader; // offset: 0x0 (0)
    struct _VI_POOL_ENTRY_INUSE InUse;      // offset: 0x0 (0)
    struct _SLIST_ENTRY *NextFree;          // offset: 0x0 (0)
  };
};

// 0x8 (8) bytes
struct _MI_VERIFIER_POOL_HEADER {
  struct _VI_POOL_ENTRY *VerifierPoolEntry; // offset: 0x0 (0)
};

// 0x40 (64) bytes
struct _ISRDPCSTATS {
  ULONGLONG IsrTime;      // offset: 0x0 (0)
  ULONGLONG IsrTimeStart; // offset: 0x8 (8)
  ULONGLONG IsrCount;     // offset: 0x10 (16)
  ULONGLONG DpcTime;      // offset: 0x18 (24)
  ULONGLONG DpcTimeStart; // offset: 0x20 (32)
  ULONGLONG DpcCount;     // offset: 0x28 (40)
  UCHAR IsrActive;        // offset: 0x30 (48)
  UCHAR Reserved[15];     // offset: 0x31 (49)
};

// 0x1c (28) bytes
struct _WHEA_XPF_MC_BANK_DESCRIPTOR {
  UCHAR BankNumber;               // offset: 0x0 (0)
  UCHAR ClearOnInitialization;    // offset: 0x1 (1)
  UCHAR StatusDataFormat;         // offset: 0x2 (2)
  union _XPF_MC_BANK_FLAGS Flags; // offset: 0x3 (3)
  ULONG ControlMsr;               // offset: 0x4 (4)
  ULONG StatusMsr;                // offset: 0x8 (8)
  ULONG AddressMsr;               // offset: 0xc (12)
  ULONG MiscMsr;                  // offset: 0x10 (16)
  ULONGLONG ControlData;          // offset: 0x14 (20)
};

// 0x3a4 (932) bytes
struct _WHEA_XPF_CMC_DESCRIPTOR {
  USHORT Type;                                   // offset: 0x0 (0)
  UCHAR Enabled;                                 // offset: 0x2 (2)
  UCHAR NumberOfBanks;                           // offset: 0x3 (3)
  ULONG Reserved;                                // offset: 0x4 (4)
  struct _WHEA_NOTIFICATION_DESCRIPTOR Notify;   // offset: 0x8 (8)
  struct _WHEA_XPF_MC_BANK_DESCRIPTOR Banks[32]; // offset: 0x24 (36)
};

// 0x398 (920) bytes
struct _WHEA_XPF_MCE_DESCRIPTOR {
  USHORT Type;                                   // offset: 0x0 (0)
  UCHAR Enabled;                                 // offset: 0x2 (2)
  UCHAR NumberOfBanks;                           // offset: 0x3 (3)
  union _XPF_MCE_FLAGS Flags;                    // offset: 0x4 (4)
  ULONGLONG MCG_Capability;                      // offset: 0x8 (8)
  ULONGLONG MCG_GlobalControl;                   // offset: 0x10 (16)
  struct _WHEA_XPF_MC_BANK_DESCRIPTOR Banks[32]; // offset: 0x18 (24)
};

// 0x3cc (972) bytes
struct _WHEA_ERROR_SOURCE_DESCRIPTOR {
  ULONG Length;                        // offset: 0x0 (0)
  ULONG Version;                       // offset: 0x4 (4)
  enum _WHEA_ERROR_SOURCE_TYPE Type;   // offset: 0x8 (8)
  enum _WHEA_ERROR_SOURCE_STATE State; // offset: 0xc (12)
  ULONG MaxRawDataLength;              // offset: 0x10 (16)
  ULONG NumRecordsToPreallocate;       // offset: 0x14 (20)
  ULONG MaxSectionsPerRecord;          // offset: 0x18 (24)
  ULONG ErrorSourceId;                 // offset: 0x1c (28)
  ULONG PlatformErrorSourceId;         // offset: 0x20 (32)
  ULONG Flags;                         // offset: 0x24 (36)
  union {
    struct _WHEA_XPF_MCE_DESCRIPTOR XpfMceDescriptor; // offset: 0x28 (40)
    struct _WHEA_XPF_CMC_DESCRIPTOR XpfCmcDescriptor; // offset: 0x28 (40)
    struct _WHEA_XPF_NMI_DESCRIPTOR XpfNmiDescriptor; // offset: 0x28 (40)
    struct _WHEA_IPF_MCA_DESCRIPTOR IpfMcaDescriptor; // offset: 0x28 (40)
    struct _WHEA_IPF_CMC_DESCRIPTOR IpfCmcDescriptor; // offset: 0x28 (40)
    struct _WHEA_IPF_CPE_DESCRIPTOR IpfCpeDescriptor; // offset: 0x28 (40)
    struct _WHEA_AER_ROOTPORT_DESCRIPTOR
        AerRootportDescriptor; // offset: 0x28 (40)
    struct _WHEA_AER_ENDPOINT_DESCRIPTOR
        AerEndpointDescriptor;                              // offset: 0x28 (40)
    struct _WHEA_AER_BRIDGE_DESCRIPTOR AerBridgeDescriptor; // offset: 0x28 (40)
    struct _WHEA_GENERIC_ERROR_DESCRIPTOR GenErrDescriptor; // offset: 0x28 (40)

  } Info; // offset: 0x28 (40)
};

// 0x10 (16) bytes
struct _OBJECT_HEADER_AUDIT_INFO {
  VOID *SecurityDescriptor; // offset: 0x0 (0)
  ULONGLONG Reserved;       // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _OBJECT_HEADER_QUOTA_INFO {
  ULONG PagedPoolCharge;              // offset: 0x0 (0)
  ULONG NonPagedPoolCharge;           // offset: 0x4 (4)
  ULONG SecurityDescriptorCharge;     // offset: 0x8 (8)
  VOID *SecurityDescriptorQuotaBlock; // offset: 0x10 (16)
  ULONGLONG Reserved;                 // offset: 0x18 (24)
};

// 0x20 (32) bytes
struct _SEP_SID_VALUES_BLOCK {
  ULONG BlockLength;        // offset: 0x0 (0)
  LONGLONG ReferenceCount;  // offset: 0x8 (8)
  ULONG SidCount;           // offset: 0x10 (16)
  ULONGLONG SidValuesStart; // offset: 0x18 (24)
};

// 0x18 (24) bytes
struct _SEP_TOKEN_PRIVILEGES {
  ULONGLONG Present;          // offset: 0x0 (0)
  ULONGLONG Enabled;          // offset: 0x8 (8)
  ULONGLONG EnabledByDefault; // offset: 0x10 (16)
};

// 0x18 (24) bytes
struct _EVENT_FILTER_HEADER {
  USHORT Id;            // offset: 0x0 (0)
  UCHAR Version;        // offset: 0x2 (2)
  UCHAR Reserved[5];    // offset: 0x3 (3)
  ULONGLONG InstanceId; // offset: 0x8 (8)
  ULONG Size;           // offset: 0x10 (16)
  ULONG NextOffset;     // offset: 0x14 (20)
};

// 0x20 (32) bytes
struct _TRACE_ENABLE_INFO {
  ULONG IsEnabled;           // offset: 0x0 (0)
  UCHAR Level;               // offset: 0x4 (4)
  UCHAR Reserved1;           // offset: 0x5 (5)
  USHORT LoggerId;           // offset: 0x6 (6)
  ULONG EnableProperty;      // offset: 0x8 (8)
  ULONG Reserved2;           // offset: 0xc (12)
  ULONGLONG MatchAnyKeyword; // offset: 0x10 (16)
  ULONGLONG MatchAllKeyword; // offset: 0x18 (24)
};

// 0x110 (272) bytes
struct _SID_AND_ATTRIBUTES_HASH {
  ULONG SidCount;                      // offset: 0x0 (0)
  struct _SID_AND_ATTRIBUTES *SidAttr; // offset: 0x8 (8)
  ULONGLONG Hash[32];                  // offset: 0x10 (16)
};

// 0x260 (608) bytes
struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION {
  ULONG DeviceGroupsCount;                             // offset: 0x0 (0)
  struct _SID_AND_ATTRIBUTES *pDeviceGroups;           // offset: 0x8 (8)
  ULONG RestrictedDeviceGroupsCount;                   // offset: 0x10 (16)
  struct _SID_AND_ATTRIBUTES *pRestrictedDeviceGroups; // offset: 0x18 (24)
  struct _SID_AND_ATTRIBUTES_HASH DeviceGroupsHash;    // offset: 0x20 (32)
  struct _SID_AND_ATTRIBUTES_HASH
      RestrictedDeviceGroupsHash; // offset: 0x130 (304)
  struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
      *pUserSecurityAttributes; // offset: 0x240 (576)
  struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
      *pDeviceSecurityAttributes; // offset: 0x248 (584)
  struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
      *pRestrictedUserSecurityAttributes; // offset: 0x250 (592)
  struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
      *pRestrictedDeviceSecurityAttributes; // offset: 0x258 (600)
};

// 0x58 (88) bytes
struct _TOKEN_ACCESS_INFORMATION {
  struct _SID_AND_ATTRIBUTES_HASH *SidHash;              // offset: 0x0 (0)
  struct _SID_AND_ATTRIBUTES_HASH *RestrictedSidHash;    // offset: 0x8 (8)
  struct _TOKEN_PRIVILEGES *Privileges;                  // offset: 0x10 (16)
  struct _LUID AuthenticationId;                         // offset: 0x18 (24)
  enum _TOKEN_TYPE TokenType;                            // offset: 0x20 (32)
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // offset: 0x24 (36)
  struct _TOKEN_MANDATORY_POLICY MandatoryPolicy;        // offset: 0x28 (40)
  ULONG Flags;                                           // offset: 0x2c (44)
  ULONG AppContainerNumber;                              // offset: 0x30 (48)
  VOID *PackageSid;                                      // offset: 0x38 (56)
  struct _SID_AND_ATTRIBUTES_HASH *CapabilitiesHash;     // offset: 0x40 (64)
  VOID *TrustLevelSid;                                   // offset: 0x48 (72)
  VOID *SecurityAttributes;                              // offset: 0x50 (80)
};

// 0x48 (72) bytes
struct _WMI_BUFFER_HEADER {
  ULONG BufferSize;               // offset: 0x0 (0)
  ULONG SavedOffset;              // offset: 0x4 (4)
  volatile ULONG CurrentOffset;   // offset: 0x8 (8)
  volatile LONG ReferenceCount;   // offset: 0xc (12)
  union _LARGE_INTEGER TimeStamp; // offset: 0x10 (16)
  LONGLONG SequenceNumber;        // offset: 0x18 (24)
  union {
    struct {
      ULONGLONG ClockType : 3;  // offset: 0x20 (32)
      ULONGLONG Frequency : 61; // offset: 0x20 (32)
    };
    struct _SINGLE_LIST_ENTRY SlistEntry;  // offset: 0x20 (32)
    struct _WMI_BUFFER_HEADER *NextBuffer; // offset: 0x20 (32)
  };
  struct _ETW_BUFFER_CONTEXT ClientContext; // offset: 0x28 (40)
  enum _ETW_BUFFER_STATE State;             // offset: 0x2c (44)
  ULONG Offset;                             // offset: 0x30 (48)
  USHORT BufferFlag;                        // offset: 0x34 (52)
  USHORT BufferType;                        // offset: 0x36 (54)
  union {
    ULONG Padding1[4];                   // offset: 0x38 (56)
    struct _ETW_REF_CLOCK ReferenceTime; // offset: 0x38 (56)
    struct _LIST_ENTRY GlobalEntry;      // offset: 0x38 (56)
    struct {
      VOID *Pointer0; // offset: 0x38 (56)
      VOID *Pointer1; // offset: 0x40 (64)
    };
  };
};

// 0x8 (8) bytes
union _FILE_SEGMENT_ELEMENT {
  VOID *Buffer;        // offset: 0x0 (0)
  ULONGLONG Alignment; // offset: 0x0 (0)
};

// 0x18 (24) bytes
struct _REMOTE_PORT_VIEW {
  ULONG Length;       // offset: 0x0 (0)
  ULONGLONG ViewSize; // offset: 0x8 (8)
  VOID *ViewBase;     // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _ALPC_COMPLETION_LIST_STATE {
  union {
    struct {
      ULONGLONG Head : 24;              // offset: 0x0 (0)
      ULONGLONG Tail : 24;              // offset: 0x0 (0)
      ULONGLONG ActiveThreadCount : 16; // offset: 0x0 (0)
    } s1;                               // offset: 0x0 (0)
    LONGLONG Value;                     // offset: 0x0 (0)

  } u1; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _RTL_SRWLOCK {
  union {
    struct {
      ULONGLONG Locked : 1;         // offset: 0x0 (0)
      ULONGLONG Waiting : 1;        // offset: 0x0 (0)
      ULONGLONG Waking : 1;         // offset: 0x0 (0)
      ULONGLONG MultipleShared : 1; // offset: 0x0 (0)
      ULONGLONG Shared : 60;        // offset: 0x0 (0)
    };
    ULONGLONG Value; // offset: 0x0 (0)
    VOID *Ptr;       // offset: 0x0 (0)
  };
};

// 0x8 (8) bytes
union _KALPC_DIRECT_EVENT {
  ULONGLONG Event;          // offset: 0x0 (0)
  ULONGLONG Referenced : 1; // offset: 0x0 (0)
  ULONGLONG Reserved : 63;  // offset: 0x0 (0)
};

// 0x180 (384) bytes
struct _ALPC_COMPLETION_LIST_HEADER {
  ULONGLONG StartMagic;                              // offset: 0x0 (0)
  ULONG TotalSize;                                   // offset: 0x8 (8)
  ULONG ListOffset;                                  // offset: 0xc (12)
  ULONG ListSize;                                    // offset: 0x10 (16)
  ULONG BitmapOffset;                                // offset: 0x14 (20)
  ULONG BitmapSize;                                  // offset: 0x18 (24)
  ULONG DataOffset;                                  // offset: 0x1c (28)
  ULONG DataSize;                                    // offset: 0x20 (32)
  ULONG AttributeFlags;                              // offset: 0x24 (36)
  ULONG AttributeSize;                               // offset: 0x28 (40)
  volatile struct _ALPC_COMPLETION_LIST_STATE State; // offset: 0x40 (64)
  volatile ULONG LastMessageId;                      // offset: 0x48 (72)
  volatile ULONG LastCallbackId;                     // offset: 0x4c (76)
  volatile ULONG PostCount;                          // offset: 0x80 (128)
  volatile ULONG ReturnCount;                        // offset: 0xc0 (192)
  volatile ULONG LogSequenceNumber;                  // offset: 0x100 (256)
  struct _RTL_SRWLOCK UserLock;                      // offset: 0x140 (320)
  ULONGLONG EndMagic;                                // offset: 0x148 (328)
};

// 0x48 (72) bytes
struct _ALPC_PORT_ATTRIBUTES {
  ULONG Flags;                                     // offset: 0x0 (0)
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // offset: 0x4 (4)
  ULONGLONG MaxMessageLength;                      // offset: 0x10 (16)
  ULONGLONG MemoryBandwidth;                       // offset: 0x18 (24)
  ULONGLONG MaxPoolUsage;                          // offset: 0x20 (32)
  ULONGLONG MaxSectionSize;                        // offset: 0x28 (40)
  ULONGLONG MaxViewSize;                           // offset: 0x30 (48)
  ULONGLONG MaxTotalSectionSize;                   // offset: 0x38 (56)
  ULONG DupObjectTypes;                            // offset: 0x40 (64)
  ULONG Reserved;                                  // offset: 0x44 (68)
};

// 0x28 (40) bytes
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
  ULONG MessageId; // offset: 0x18 (24)
  union {
    ULONGLONG ClientViewSize; // offset: 0x20 (32)
    ULONG CallbackId;         // offset: 0x20 (32)
  };
};

// 0x50 (80) bytes
struct _LPCP_MESSAGE {
  union {
    struct _LIST_ENTRY Entry; // offset: 0x0 (0)
    struct {
      struct _SINGLE_LIST_ENTRY FreeEntry; // offset: 0x0 (0)
      ULONG Reserved0;                     // offset: 0x8 (8)
    };
  };
  VOID *SenderPort;                 // offset: 0x10 (16)
  struct _ETHREAD *RepliedToThread; // offset: 0x18 (24)
  VOID *PortContext;                // offset: 0x20 (32)
  struct _PORT_MESSAGE Request;     // offset: 0x28 (40)
};

// 0x10 (16) bytes
struct _HEAP_ENTRY_EXTRA {
  union {
    struct {
      USHORT AllocatorBackTraceIndex; // offset: 0x0 (0)
      USHORT TagIndex;                // offset: 0x2 (2)
      ULONGLONG Settable;             // offset: 0x8 (8)
    };
    struct {
      ULONGLONG ZeroInit;  // offset: 0x0 (0)
      ULONGLONG ZeroInit1; // offset: 0x8 (8)
    };
  };
};

// 0x10 (16) bytes
struct _HEAP_PSEUDO_TAG_ENTRY {
  ULONG Allocs;   // offset: 0x0 (0)
  ULONG Frees;    // offset: 0x4 (4)
  ULONGLONG Size; // offset: 0x8 (8)
};

// 0x48 (72) bytes
struct _HEAP_TAG_ENTRY {
  ULONG Allocs;                 // offset: 0x0 (0)
  ULONG Frees;                  // offset: 0x4 (4)
  ULONGLONG Size;               // offset: 0x8 (8)
  USHORT TagIndex;              // offset: 0x10 (16)
  USHORT CreatorBackTraceIndex; // offset: 0x12 (18)
  WCHAR TagName[24];            // offset: 0x14 (20)
};

// 0x10 (16) bytes
struct _HEAP_UNPACKED_ENTRY {
  VOID *PreviousBlockPrivateData; // offset: 0x0 (0)
  union {
    struct {
      USHORT Size;         // offset: 0x8 (8)
      UCHAR Flags;         // offset: 0xa (10)
      UCHAR SmallTagIndex; // offset: 0xb (11)
    };
    struct {
      ULONG SubSegmentCode; // offset: 0x8 (8)
      USHORT PreviousSize;  // offset: 0xc (12)
      union {
        UCHAR SegmentOffset; // offset: 0xe (14)
        UCHAR LFHFlags;      // offset: 0xe (14)
      };
      UCHAR UnusedBytes; // offset: 0xf (15)
    };
    ULONGLONG CompactHeader; // offset: 0x8 (8)
  };
};

// 0x10 (16) bytes
struct _HEAP_TUNING_PARAMETERS {
  ULONG CommittThresholdShift;      // offset: 0x0 (0)
  ULONGLONG MaxPreCommittThreshold; // offset: 0x8 (8)
};

// 0x78 (120) bytes
struct _HEAP_COUNTERS {
  ULONGLONG TotalMemoryReserved;      // offset: 0x0 (0)
  ULONGLONG TotalMemoryCommitted;     // offset: 0x8 (8)
  ULONGLONG TotalMemoryLargeUCR;      // offset: 0x10 (16)
  ULONGLONG TotalSizeInVirtualBlocks; // offset: 0x18 (24)
  ULONG TotalSegments;                // offset: 0x20 (32)
  ULONG TotalUCRs;                    // offset: 0x24 (36)
  ULONG CommittOps;                   // offset: 0x28 (40)
  ULONG DeCommitOps;                  // offset: 0x2c (44)
  ULONG LockAcquires;                 // offset: 0x30 (48)
  ULONG LockCollisions;               // offset: 0x34 (52)
  ULONG CommitRate;                   // offset: 0x38 (56)
  ULONG DecommittRate;                // offset: 0x3c (60)
  ULONG CommitFailures;               // offset: 0x40 (64)
  ULONG InBlockCommitFailures;        // offset: 0x44 (68)
  ULONG PollIntervalCounter;          // offset: 0x48 (72)
  ULONG DecommitsSinceLastCheck;      // offset: 0x4c (76)
  ULONG HeapPollInterval;             // offset: 0x50 (80)
  ULONG AllocAndFreeOps;              // offset: 0x54 (84)
  ULONG AllocationIndicesActive;      // offset: 0x58 (88)
  ULONG InBlockDeccommits;            // offset: 0x5c (92)
  ULONGLONG InBlockDeccomitSize;      // offset: 0x60 (96)
  ULONGLONG HighWatermarkSize;        // offset: 0x68 (104)
  ULONGLONG LastPolledSize;           // offset: 0x70 (112)
};

// 0x10 (16) bytes
struct _HEAP_ENTRY {
  union {
    struct _HEAP_UNPACKED_ENTRY UnpackedEntry; // offset: 0x0 (0)
    struct {
      VOID *PreviousBlockPrivateData; // offset: 0x0 (0)
      union {
        struct {
          USHORT Size;         // offset: 0x8 (8)
          UCHAR Flags;         // offset: 0xa (10)
          UCHAR SmallTagIndex; // offset: 0xb (11)
        };
        struct {
          ULONG SubSegmentCode; // offset: 0x8 (8)
          USHORT PreviousSize;  // offset: 0xc (12)
          union {
            UCHAR SegmentOffset; // offset: 0xe (14)
            UCHAR LFHFlags;      // offset: 0xe (14)
          };
          UCHAR UnusedBytes; // offset: 0xf (15)
        };
        ULONGLONG CompactHeader; // offset: 0x8 (8)
      };
    };
    struct _HEAP_EXTENDED_ENTRY ExtendedEntry; // offset: 0x0 (0)
    struct {
      VOID *Reserved; // offset: 0x0 (0)
      union {
        struct {
          USHORT FunctionIndex; // offset: 0x8 (8)
          USHORT ContextValue;  // offset: 0xa (10)
        };
        ULONG InterceptorValue; // offset: 0x8 (8)
      };
      USHORT UnusedBytesLength;     // offset: 0xc (12)
      UCHAR EntryOffset;            // offset: 0xe (14)
      UCHAR ExtendedBlockSignature; // offset: 0xf (15)
    };
    struct {
      VOID *ReservedForAlignment; // offset: 0x0 (0)
      union {
        struct {
          ULONG Code1; // offset: 0x8 (8)
          union {
            struct {
              USHORT Code2; // offset: 0xc (12)
              UCHAR Code3;  // offset: 0xe (14)
              UCHAR Code4;  // offset: 0xf (15)
            };
            ULONG Code234; // offset: 0xc (12)
          };
        };
        ULONGLONG AgregateCode; // offset: 0x8 (8)
      };
    };
  };
};

// 0x20 (32) bytes
struct _HEAP_FREE_ENTRY {
  union {
    struct _HEAP_ENTRY HeapEntry;              // offset: 0x0 (0)
    struct _HEAP_UNPACKED_ENTRY UnpackedEntry; // offset: 0x0 (0)
    struct {
      VOID *PreviousBlockPrivateData; // offset: 0x0 (0)
      union {
        struct {
          USHORT Size;         // offset: 0x8 (8)
          UCHAR Flags;         // offset: 0xa (10)
          UCHAR SmallTagIndex; // offset: 0xb (11)
        };
        struct {
          ULONG SubSegmentCode; // offset: 0x8 (8)
          USHORT PreviousSize;  // offset: 0xc (12)
          union {
            UCHAR SegmentOffset; // offset: 0xe (14)
            UCHAR LFHFlags;      // offset: 0xe (14)
          };
          UCHAR UnusedBytes; // offset: 0xf (15)
        };
        ULONGLONG CompactHeader; // offset: 0x8 (8)
      };
    };
    struct _HEAP_EXTENDED_ENTRY ExtendedEntry; // offset: 0x0 (0)
    struct {
      VOID *Reserved; // offset: 0x0 (0)
      union {
        struct {
          USHORT FunctionIndex; // offset: 0x8 (8)
          USHORT ContextValue;  // offset: 0xa (10)
        };
        ULONG InterceptorValue; // offset: 0x8 (8)
      };
      USHORT UnusedBytesLength;     // offset: 0xc (12)
      UCHAR EntryOffset;            // offset: 0xe (14)
      UCHAR ExtendedBlockSignature; // offset: 0xf (15)
    };
    struct {
      VOID *ReservedForAlignment; // offset: 0x0 (0)
      union {
        struct {
          ULONG Code1; // offset: 0x8 (8)
          union {
            struct {
              USHORT Code2; // offset: 0xc (12)
              UCHAR Code3;  // offset: 0xe (14)
              UCHAR Code4;  // offset: 0xf (15)
            };
            ULONG Code234; // offset: 0xc (12)
          };
        };
        ULONGLONG AgregateCode; // offset: 0x8 (8)
      };
    };
  };
  struct _LIST_ENTRY FreeList; // offset: 0x10 (16)
};

// 0x40 (64) bytes
struct _HEAP_VIRTUAL_ALLOC_ENTRY {
  struct _LIST_ENTRY Entry;            // offset: 0x0 (0)
  struct _HEAP_ENTRY_EXTRA ExtraStuff; // offset: 0x10 (16)
  ULONGLONG CommitSize;                // offset: 0x20 (32)
  ULONGLONG ReserveSize;               // offset: 0x28 (40)
  struct _HEAP_ENTRY BusyBlock;        // offset: 0x30 (48)
};

// 0x70 (112) bytes
struct _HEAP_SEGMENT {
  struct _HEAP_ENTRY Entry;              // offset: 0x0 (0)
  ULONG SegmentSignature;                // offset: 0x10 (16)
  ULONG SegmentFlags;                    // offset: 0x14 (20)
  struct _LIST_ENTRY SegmentListEntry;   // offset: 0x18 (24)
  struct _HEAP *Heap;                    // offset: 0x28 (40)
  VOID *BaseAddress;                     // offset: 0x30 (48)
  ULONG NumberOfPages;                   // offset: 0x38 (56)
  struct _HEAP_ENTRY *FirstEntry;        // offset: 0x40 (64)
  struct _HEAP_ENTRY *LastValidEntry;    // offset: 0x48 (72)
  ULONG NumberOfUnCommittedPages;        // offset: 0x50 (80)
  ULONG NumberOfUnCommittedRanges;       // offset: 0x54 (84)
  USHORT SegmentAllocatorBackTraceIndex; // offset: 0x58 (88)
  USHORT Reserved;                       // offset: 0x5a (90)
  struct _LIST_ENTRY UCRSegmentList;     // offset: 0x60 (96)
};

// 0x78 (120) bytes
struct _PRIVATE_CACHE_MAP {
  union {
    SHORT NodeTypeCode;                    // offset: 0x0 (0)
    struct _PRIVATE_CACHE_MAP_FLAGS Flags; // offset: 0x0 (0)
  };
  ULONG ReadAheadMask;                          // offset: 0x4 (4)
  struct _FILE_OBJECT *FileObject;              // offset: 0x8 (8)
  union _LARGE_INTEGER FileOffset1;             // offset: 0x10 (16)
  union _LARGE_INTEGER BeyondLastByte1;         // offset: 0x18 (24)
  union _LARGE_INTEGER FileOffset2;             // offset: 0x20 (32)
  union _LARGE_INTEGER BeyondLastByte2;         // offset: 0x28 (40)
  ULONG SequentialReadCount;                    // offset: 0x30 (48)
  ULONG ReadAheadLength;                        // offset: 0x34 (52)
  union _LARGE_INTEGER ReadAheadOffset;         // offset: 0x38 (56)
  union _LARGE_INTEGER ReadAheadBeyondLastByte; // offset: 0x40 (64)
  ULONGLONG PrevReadAheadBeyondLastByte;        // offset: 0x48 (72)
  ULONGLONG ReadAheadSpinLock;                  // offset: 0x50 (80)
  ULONG PipelinedReadAheadRequestSize;          // offset: 0x58 (88)
  ULONG ReadAheadGrowth;                        // offset: 0x5c (92)
  struct _LIST_ENTRY PrivateLinks;              // offset: 0x60 (96)
  VOID *ReadAheadWorkItem;                      // offset: 0x70 (112)
};

// 0x38 (56) bytes
struct _DIRTY_PAGE_THRESHOLDS {
  ULONGLONG DirtyPageThreshold;       // offset: 0x0 (0)
  ULONGLONG DirtyPageThresholdTop;    // offset: 0x8 (8)
  ULONGLONG DirtyPageThresholdBottom; // offset: 0x10 (16)
  ULONG DirtyPageTarget;              // offset: 0x18 (24)
  ULONGLONG AggregateAvailablePages;  // offset: 0x20 (32)
  ULONGLONG AggregateDirtyPages;      // offset: 0x28 (40)
  ULONG AvailableHistory;             // offset: 0x30 (48)
};

// 0x18 (24) bytes
struct _DIRTY_PAGE_STATISTICS {
  ULONGLONG DirtyPages;              // offset: 0x0 (0)
  ULONGLONG DirtyPagesLastScan;      // offset: 0x8 (8)
  ULONG DirtyPagesScheduledLastScan; // offset: 0x10 (16)
};

// 0x30 (48) bytes
struct _CC_EXTERNAL_CACHE_INFO {
  VOID (*Callback)(VOID *arg1, ULONGLONG arg2, ULONG arg3); // offset: 0x0 (0)
  struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;        // offset: 0x8 (8)
  struct _LIST_ENTRY Links;                                 // offset: 0x20 (32)
};

// 0x98 (152) bytes
struct _LOG_HANDLE_CONTEXT {
  VOID *LogHandle; // offset: 0x0 (0)
  VOID(*FlushToLsnRoutine)
  (VOID *arg1, union _LARGE_INTEGER arg2); // offset: 0x8 (8)
  VOID(*QueryLogHandleInfoRoutine)
  (VOID *arg1, USHORT *arg2);                        // offset: 0x10 (16)
  struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics; // offset: 0x18 (24)
  struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds; // offset: 0x30 (48)
  ULONG AdditionalPagesToWrite;                      // offset: 0x68 (104)
  ULONG CcLWScanDPThreshold;                         // offset: 0x6c (108)
  union _LARGE_INTEGER LargestLsnForCurrentLWScan;   // offset: 0x70 (112)
  struct _FILE_OBJECT *RelatedFileObject;            // offset: 0x78 (120)
  ULONGLONG LargestLsnFileObjectKey;                 // offset: 0x80 (128)
  union _LARGE_INTEGER LastLWTimeStamp;              // offset: 0x88 (136)
  ULONG Flags;                                       // offset: 0x90 (144)
};

// 0x8 (8) bytes
struct _LOGGED_STREAM_CALLBACK_V2 {
  struct _LOG_HANDLE_CONTEXT *LogHandleContext; // offset: 0x0 (0)
};

// 0xd0 (208) bytes
struct _VOLUME_CACHE_MAP {
  SHORT NodeTypeCode;                          // offset: 0x0 (0)
  SHORT NodeByteCode;                          // offset: 0x2 (2)
  ULONG UseCount;                              // offset: 0x4 (4)
  struct _DEVICE_OBJECT *DeviceObject;         // offset: 0x8 (8)
  struct _LIST_ENTRY VolumeCacheMapLinks;      // offset: 0x10 (16)
  ULONGLONG DirtyPages;                        // offset: 0x20 (32)
  struct _LOG_HANDLE_CONTEXT LogHandleContext; // offset: 0x28 (40)
  ULONG Flags;                                 // offset: 0xc0 (192)
  ULONG PagesQueuedToDisk;                     // offset: 0xc4 (196)
  ULONG LoggedPagesQueuedToDisk;               // offset: 0xc8 (200)
};

// 0x8 (8) bytes
union _PPM_POLICY_SETTINGS_MASK {
  ULONGLONG Value;                               // offset: 0x0 (0)
  ULONG PerfDecreaseTime : 1;                    // offset: 0x0 (0)
  ULONG PerfIncreaseTime : 1;                    // offset: 0x0 (0)
  ULONG PerfDecreasePolicy : 1;                  // offset: 0x0 (0)
  ULONG PerfIncreasePolicy : 1;                  // offset: 0x0 (0)
  ULONG PerfDecreaseThreshold : 1;               // offset: 0x0 (0)
  ULONG PerfIncreaseThreshold : 1;               // offset: 0x0 (0)
  ULONG PerfMinPolicy : 1;                       // offset: 0x0 (0)
  ULONG PerfMaxPolicy : 1;                       // offset: 0x0 (0)
  ULONG PerfTimeCheck : 1;                       // offset: 0x0 (0)
  ULONG PerfBoostPolicy : 1;                     // offset: 0x0 (0)
  ULONG PerfBoostMode : 1;                       // offset: 0x0 (0)
  ULONG AllowThrottling : 1;                     // offset: 0x0 (0)
  ULONG PerfHistoryCount : 1;                    // offset: 0x0 (0)
  ULONG ParkingPerfState : 1;                    // offset: 0x0 (0)
  ULONG LatencyHintPerf : 1;                     // offset: 0x0 (0)
  ULONG LatencyHintUnpark : 1;                   // offset: 0x0 (0)
  ULONG CoreParkingMinCores : 1;                 // offset: 0x0 (0)
  ULONG CoreParkingMaxCores : 1;                 // offset: 0x0 (0)
  ULONG CoreParkingDecreasePolicy : 1;           // offset: 0x0 (0)
  ULONG CoreParkingIncreasePolicy : 1;           // offset: 0x0 (0)
  ULONG CoreParkingDecreaseTime : 1;             // offset: 0x0 (0)
  ULONG CoreParkingIncreaseTime : 1;             // offset: 0x0 (0)
  ULONG CoreParkingOverUtilizationThreshold : 1; // offset: 0x0 (0)
  ULONG CoreParkingDistributeUtility : 1;        // offset: 0x0 (0)
  ULONG CoreParkingConcurrencyThreshold : 1;     // offset: 0x0 (0)
  ULONG CoreParkingHeadroomThreshold : 1;        // offset: 0x0 (0)
  ULONG CoreParkingDistributionThreshold : 1;    // offset: 0x0 (0)
  ULONG IdleAllowScaling : 1;                    // offset: 0x0 (0)
  ULONG IdleDisable : 1;                         // offset: 0x0 (0)
  ULONG IdleTimeCheck : 1;                       // offset: 0x0 (0)
  ULONG IdleDemoteThreshold : 1;                 // offset: 0x0 (0)
  struct {
    ULONG IdlePromoteThreshold : 1;     // offset: 0x0 (0)
    ULONG HeteroDecreaseTime : 1;       // offset: 0x4 (4)
    ULONG HeteroIncreaseTime : 1;       // offset: 0x4 (4)
    ULONG HeteroDecreaseThreshold : 1;  // offset: 0x4 (4)
    ULONG HeteroIncreaseThreshold : 1;  // offset: 0x4 (4)
    ULONG Class0FloorPerformance : 1;   // offset: 0x4 (4)
    ULONG Class1InitialPerformance : 1; // offset: 0x4 (4)
    ULONG EnergyPerfPreference : 1;     // offset: 0x4 (4)
    ULONG AutonomousActivityWindow : 1; // offset: 0x4 (4)
    ULONG AutonomousMode : 1;           // offset: 0x4 (4)
    ULONG DutyCycling : 1;              // offset: 0x4 (4)
  };
  ULONG Spare : 22; // offset: 0x4 (4)
};

// 0x570 (1392) bytes
struct _PPM_ENGINE_SETTINGS {
  union _PPM_POLICY_SETTINGS_MASK ExplicitSetting[2]; // offset: 0x0 (0)
  UCHAR ThrottlingPolicy;                             // offset: 0x10 (16)
  ULONG PerfTimeCheck;                                // offset: 0x14 (20)
  UCHAR PerfHistoryCount[2];                          // offset: 0x18 (24)
  UCHAR PerfMinPolicy[2];                             // offset: 0x1a (26)
  UCHAR PerfMaxPolicy[2];                             // offset: 0x1c (28)
  UCHAR PerfDecreaseTime[2];                          // offset: 0x1e (30)
  UCHAR PerfIncreaseTime[2];                          // offset: 0x20 (32)
  UCHAR PerfDecreasePolicy[2];                        // offset: 0x22 (34)
  UCHAR PerfIncreasePolicy[2];                        // offset: 0x24 (36)
  UCHAR PerfDecreaseThreshold[2];                     // offset: 0x26 (38)
  UCHAR PerfIncreaseThreshold[2];                     // offset: 0x28 (40)
  ULONG PerfBoostPolicy;                              // offset: 0x2c (44)
  ULONG PerfBoostMode;                                // offset: 0x30 (48)
  ULONG PerfReductionTolerance;                       // offset: 0x34 (52)
  ULONG EnergyPerfPreference;                         // offset: 0x38 (56)
  ULONG AutonomousActivityWindow;                     // offset: 0x3c (60)
  UCHAR AutonomousPreference;                         // offset: 0x40 (64)
  UCHAR LatencyHintPerf[2];                           // offset: 0x41 (65)
  UCHAR LatencyHintUnpark[2];                         // offset: 0x43 (67)
  UCHAR DutyCycling;                                  // offset: 0x45 (69)
  UCHAR ParkingPerfState[2];                          // offset: 0x46 (70)
  UCHAR DistributeUtility;                            // offset: 0x48 (72)
  UCHAR CoreParkingOverUtilizationThreshold;          // offset: 0x49 (73)
  UCHAR CoreParkingConcurrencyThreshold;              // offset: 0x4a (74)
  UCHAR CoreParkingHeadroomThreshold;                 // offset: 0x4b (75)
  UCHAR CoreParkingDistributionThreshold;             // offset: 0x4c (76)
  UCHAR CoreParkingDecreasePolicy;                    // offset: 0x4d (77)
  UCHAR CoreParkingIncreasePolicy;                    // offset: 0x4e (78)
  ULONG CoreParkingDecreaseTime;                      // offset: 0x50 (80)
  ULONG CoreParkingIncreaseTime;                      // offset: 0x54 (84)
  UCHAR CoreParkingMinCores[2];                       // offset: 0x58 (88)
  UCHAR CoreParkingMaxCores[2];                       // offset: 0x5a (90)
  UCHAR AllowScaling;                                 // offset: 0x5c (92)
  UCHAR IdleDisabled;                                 // offset: 0x5d (93)
  ULONG IdleTimeCheck;                                // offset: 0x60 (96)
  UCHAR IdleDemotePercent;                            // offset: 0x64 (100)
  UCHAR IdlePromotePercent;                           // offset: 0x65 (101)
  UCHAR HeteroDecreaseTime;                           // offset: 0x66 (102)
  UCHAR HeteroIncreaseTime;                           // offset: 0x67 (103)
  UCHAR HeteroDecreaseThreshold[640];                 // offset: 0x68 (104)
  UCHAR HeteroIncreaseThreshold[640];                 // offset: 0x2e8 (744)
  UCHAR Class0FloorPerformance;                       // offset: 0x568 (1384)
  UCHAR Class1InitialPerformance;                     // offset: 0x569 (1385)
};

// 0xb30 (2864) bytes
struct _POP_PPM_PROFILE {
  USHORT *Name;                            // offset: 0x0 (0)
  UCHAR Id;                                // offset: 0x8 (8)
  struct _GUID Guid;                       // offset: 0xc (12)
  ULONG Flags;                             // offset: 0x1c (28)
  UCHAR Priority;                          // offset: 0x20 (32)
  struct _PPM_ENGINE_SETTINGS Settings[2]; // offset: 0x28 (40)
  ULONGLONG StartTime;                     // offset: 0xb08 (2824)
  ULONGLONG Count;                         // offset: 0xb10 (2832)
  ULONGLONG MaxDuration;                   // offset: 0xb18 (2840)
  ULONGLONG MinDuration;                   // offset: 0xb20 (2848)
  ULONGLONG TotalDuration;                 // offset: 0xb28 (2856)
};

// 0x10 (16) bytes
struct _PROCESSOR_PLATFORM_STATE_RESIDENCY {
  ULONGLONG Residency;       // offset: 0x0 (0)
  ULONGLONG TransitionCount; // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _PROCESSOR_PLATFORM_STATE_RESIDENCIES {
  ULONG Count;                                          // offset: 0x0 (0)
  struct _PROCESSOR_PLATFORM_STATE_RESIDENCY States[1]; // offset: 0x8 (8)
};

// 0x48 (72) bytes
struct _PEP_ACPI_EXTENDED_ADDRESS {
  enum _PEP_ACPI_RESOURCE_TYPE Type;      // offset: 0x0 (0)
  union _PEP_ACPI_RESOURCE_FLAGS Flags;   // offset: 0x4 (4)
  UCHAR ResourceFlags;                    // offset: 0x8 (8)
  UCHAR GeneralFlags;                     // offset: 0x9 (9)
  UCHAR TypeSpecificFlags;                // offset: 0xa (10)
  UCHAR RevisionId;                       // offset: 0xb (11)
  UCHAR Reserved;                         // offset: 0xc (12)
  ULONGLONG Granularity;                  // offset: 0x10 (16)
  ULONGLONG MinimumAddress;               // offset: 0x18 (24)
  ULONGLONG MaximumAddress;               // offset: 0x20 (32)
  ULONGLONG TranslationAddress;           // offset: 0x28 (40)
  ULONGLONG AddressLength;                // offset: 0x30 (48)
  ULONGLONG TypeAttribute;                // offset: 0x38 (56)
  struct _UNICODE_STRING *DescriptorName; // offset: 0x40 (64)
};

// 0x48 (72) bytes
union _PEP_ACPI_RESOURCE {
  enum _PEP_ACPI_RESOURCE_TYPE Type;                 // offset: 0x0 (0)
  struct _PEP_ACPI_IO_MEMORY_RESOURCE IoMemory;      // offset: 0x0 (0)
  struct _PEP_ACPI_INTERRUPT_RESOURCE Interrupt;     // offset: 0x0 (0)
  struct _PEP_ACPI_GPIO_RESOURCE Gpio;               // offset: 0x0 (0)
  struct _PEP_ACPI_SPB_I2C_RESOURCE SpbI2c;          // offset: 0x0 (0)
  struct _PEP_ACPI_SPB_SPI_RESOURCE SpbSpi;          // offset: 0x0 (0)
  struct _PEP_ACPI_SPB_UART_RESOURCE SpbUart;        // offset: 0x0 (0)
  struct _PEP_ACPI_EXTENDED_ADDRESS ExtendedAddress; // offset: 0x0 (0)
};

// 0x18 (24) bytes
struct _ARM64_DBGKD_CONTROL_SET {
  ULONG Continue;               // offset: 0x0 (0)
  ULONG TraceFlag;              // offset: 0x4 (4)
  ULONGLONG CurrentSymbolStart; // offset: 0x8 (8)
  ULONGLONG CurrentSymbolEnd;   // offset: 0x10 (16)
};

// 0x14 (20) bytes
struct _IA64_DBGKD_CONTROL_SET {
  ULONG Continue;               // offset: 0x0 (0)
  ULONGLONG CurrentSymbolStart; // offset: 0x4 (4)
  ULONGLONG CurrentSymbolEnd;   // offset: 0xc (12)
};

// 0x1c (28) bytes
struct _AMD64_DBGKD_CONTROL_SET {
  ULONG TraceFlag;              // offset: 0x0 (0)
  ULONGLONG Dr7;                // offset: 0x4 (4)
  ULONGLONG CurrentSymbolStart; // offset: 0xc (12)
  ULONGLONG CurrentSymbolEnd;   // offset: 0x14 (20)
};

// 0x1c (28) bytes
struct _DBGKD_ANY_CONTROL_SET {
  union {
    struct _X86_DBGKD_CONTROL_SET X86ControlSet;     // offset: 0x0 (0)
    ULONG AlphaControlSet;                           // offset: 0x0 (0)
    struct _IA64_DBGKD_CONTROL_SET IA64ControlSet;   // offset: 0x0 (0)
    struct _AMD64_DBGKD_CONTROL_SET Amd64ControlSet; // offset: 0x0 (0)
    struct _ARM_DBGKD_CONTROL_SET ArmControlSet;     // offset: 0x0 (0)
    struct _ARM64_DBGKD_CONTROL_SET Arm64ControlSet; // offset: 0x0 (0)
    struct _ARMCE_DBGKD_CONTROL_SET ArmCeControlSet; // offset: 0x0 (0)
    struct _PPC_DBGKD_CONTROL_SET PpcControlSet;     // offset: 0x0 (0)
  };
};

// 0x20 (32) bytes
struct _DBGKD_CONTINUE2 {
  LONG ContinueStatus; // offset: 0x0 (0)
  union {
    struct _AMD64_DBGKD_CONTROL_SET ControlSet;  // offset: 0x4 (4)
    struct _DBGKD_ANY_CONTROL_SET AnyControlSet; // offset: 0x4 (4)
  };
};

// 0x18 (24) bytes
struct _DBGKD_WRITE_CUSTOM_BREAKPOINT {
  ULONGLONG BreakPointAddress;          // offset: 0x0 (0)
  ULONGLONG BreakPointInstruction;      // offset: 0x8 (8)
  ULONG BreakPointHandle;               // offset: 0x10 (16)
  UCHAR BreakPointInstructionSize;      // offset: 0x14 (20)
  UCHAR BreakPointInstructionAlignment; // offset: 0x15 (21)
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
    struct _DBGKD_CONTEXT_EX GetContextEx;     // offset: 0xc (12)
    struct _DBGKD_CONTEXT_EX SetContextEx;     // offset: 0xc (12)

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
    struct _DBGKD_CONTEXT_EX GetContextEx;          // offset: 0x10 (16)
    struct _DBGKD_CONTEXT_EX SetContextEx;          // offset: 0x10 (16)
    struct _DBGKD_WRITE_CUSTOM_BREAKPOINT
        WriteCustomBreakPoint; // offset: 0x10 (16)

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

// 0x50 (80) bytes
struct _PNP_DEVICE_COMPLETION_QUEUE {
  struct _LIST_ENTRY DispatchedList;     // offset: 0x0 (0)
  ULONG DispatchedCount;                 // offset: 0x10 (16)
  struct _LIST_ENTRY CompletedList;      // offset: 0x18 (24)
  struct _KSEMAPHORE CompletedSemaphore; // offset: 0x28 (40)
  ULONGLONG SpinLock;                    // offset: 0x48 (72)
};

// 0x48 (72) bytes
struct _MCGEN_TRACE_CONTEXT {
  ULONGLONG RegistrationHandle;    // offset: 0x0 (0)
  ULONGLONG Logger;                // offset: 0x8 (8)
  ULONGLONG MatchAnyKeyword;       // offset: 0x10 (16)
  ULONGLONG MatchAllKeyword;       // offset: 0x18 (24)
  ULONG Flags;                     // offset: 0x20 (32)
  ULONG IsEnabled;                 // offset: 0x24 (36)
  UCHAR Level;                     // offset: 0x28 (40)
  UCHAR Reserve;                   // offset: 0x29 (41)
  USHORT EnableBitsCount;          // offset: 0x2a (42)
  ULONG *EnableBitMask;            // offset: 0x30 (48)
  const ULONGLONG *EnableKeyWords; // offset: 0x38 (56)
  const UCHAR *EnableLevel;        // offset: 0x40 (64)
};

// 0x10 (16) bytes
struct _PO_FX_PERF_STATE {
  ULONGLONG Value; // offset: 0x0 (0)
  VOID *Context;   // offset: 0x8 (8)
};

// 0x30 (48) bytes
struct _PO_FX_COMPONENT_PERF_SET {
  struct _UNICODE_STRING Name;      // offset: 0x0 (0)
  ULONGLONG Flags;                  // offset: 0x10 (16)
  enum _PO_FX_PERF_STATE_UNIT Unit; // offset: 0x18 (24)
  enum _PO_FX_PERF_STATE_TYPE Type; // offset: 0x1c (28)
  union {
    struct {
      ULONG Count;                      // offset: 0x0 (0)
      struct _PO_FX_PERF_STATE *States; // offset: 0x8 (8)
    } Discrete;                         // offset: 0x20 (32)
    struct {
      ULONGLONG Minimum; // offset: 0x0 (0)
      ULONGLONG Maximum; // offset: 0x8 (8)
    } Range;             // offset: 0x20 (32)
  };
};

// 0x20 (32) bytes
struct _POP_FX_PERF_SET {
  struct _PO_FX_COMPONENT_PERF_SET *PerfSet; // offset: 0x0 (0)
  ULONGLONG CurrentPerf;                     // offset: 0x8 (8)
  ULONGLONG CurrentPerfStamp;                // offset: 0x10 (16)
  UCHAR CurrentPerfNominal;                  // offset: 0x18 (24)
};

// 0x10 (16) bytes
struct _PO_FX_PERF_STATE_CHANGE {
  ULONG Set; // offset: 0x0 (0)
  union {
    ULONG StateIndex;     // offset: 0x8 (8)
    ULONGLONG StateValue; // offset: 0x8 (8)
  };
};

// 0x18 (24) bytes
struct _POP_FX_IDLE_STATE {
  ULONGLONG TransitionLatency;    // offset: 0x0 (0)
  ULONGLONG ResidencyRequirement; // offset: 0x8 (8)
  ULONG NominalPower;             // offset: 0x10 (16)
};

// 0x30 (48) bytes
struct _POP_FX_ACCOUNTING {
  ULONGLONG Lock;              // offset: 0x0 (0)
  UCHAR Active;                // offset: 0x8 (8)
  ULONG DripsRequiredState;    // offset: 0xc (12)
  LONG Level;                  // offset: 0x10 (16)
  LONGLONG ActiveStamp;        // offset: 0x18 (24)
  ULONGLONG CsActiveTime;      // offset: 0x20 (32)
  LONGLONG CriticalActiveTime; // offset: 0x28 (40)
};

// 0x8 (8) bytes
union _HV_PARTITION_PRIVILEGE_MASK {
  ULONGLONG AsUINT64;                            // offset: 0x0 (0)
  ULONGLONG AccessVpRunTimeReg : 1;              // offset: 0x0 (0)
  ULONGLONG AccessPartitionReferenceCounter : 1; // offset: 0x0 (0)
  ULONGLONG AccessSynicRegs : 1;                 // offset: 0x0 (0)
  ULONGLONG AccessSyntheticTimerRegs : 1;        // offset: 0x0 (0)
  ULONGLONG AccessIntrCtrlRegs : 1;              // offset: 0x0 (0)
  ULONGLONG AccessHypercallMsrs : 1;             // offset: 0x0 (0)
  ULONGLONG AccessVpIndex : 1;                   // offset: 0x0 (0)
  ULONGLONG AccessResetReg : 1;                  // offset: 0x0 (0)
  ULONGLONG AccessStatsReg : 1;                  // offset: 0x0 (0)
  ULONGLONG AccessPartitionReferenceTsc : 1;     // offset: 0x0 (0)
  ULONGLONG AccessGuestIdleReg : 1;              // offset: 0x0 (0)
  ULONGLONG AccessFrequencyRegs : 1;             // offset: 0x0 (0)
  ULONGLONG AccessDebugRegs : 1;                 // offset: 0x0 (0)
  ULONGLONG Reserved1 : 19;                      // offset: 0x0 (0)
  ULONGLONG CreatePartitions : 1;                // offset: 0x0 (0)
  ULONGLONG AccessPartitionId : 1;               // offset: 0x0 (0)
  ULONGLONG AccessMemoryPool : 1;                // offset: 0x0 (0)
  ULONGLONG AdjustMessageBuffers : 1;            // offset: 0x0 (0)
  ULONGLONG PostMessages : 1;                    // offset: 0x0 (0)
  ULONGLONG SignalEvents : 1;                    // offset: 0x0 (0)
  ULONGLONG CreatePort : 1;                      // offset: 0x0 (0)
  ULONGLONG ConnectPort : 1;                     // offset: 0x0 (0)
  ULONGLONG AccessStats : 1;                     // offset: 0x0 (0)
  ULONGLONG Reserved2 : 2;                       // offset: 0x0 (0)
  ULONGLONG Debugging : 1;                       // offset: 0x0 (0)
  ULONGLONG CpuManagement : 1;                   // offset: 0x0 (0)
  ULONGLONG ConfigureProfiler : 1;               // offset: 0x0 (0)
  ULONGLONG AccessVpExitTracing : 1;             // offset: 0x0 (0)
  ULONGLONG
  EnableExtendedGvaRangesForFlushVirtualAddressList : 1; // offset: 0x0 (0)
  ULONGLONG AccessVsm : 1;                               // offset: 0x0 (0)
  ULONGLONG AccessVpRegisters : 1;                       // offset: 0x0 (0)
  ULONGLONG UnusedBit : 1;                               // offset: 0x0 (0)
  ULONGLONG FastHypercallOutput : 1;                     // offset: 0x0 (0)
  ULONGLONG EnableExtendedHypercalls : 1;                // offset: 0x0 (0)
  ULONGLONG StartVirtualProcessor : 1;                   // offset: 0x0 (0)
  ULONGLONG Reserved3 : 10;                              // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _HV_X64_HYPERVISOR_FEATURES {
  union _HV_PARTITION_PRIVILEGE_MASK PartitionPrivileges; // offset: 0x0 (0)
  ULONG MaxSupportedCState : 4;                           // offset: 0x8 (8)
  ULONG HpetNeededForC3PowerState_Deprecated : 1;         // offset: 0x8 (8)
  ULONG Reserved : 27;                                    // offset: 0x8 (8)
  ULONG MwaitAvailable_Deprecated : 1;                    // offset: 0xc (12)
  ULONG GuestDebuggingAvailable : 1;                      // offset: 0xc (12)
  ULONG PerformanceMonitorsAvailable : 1;                 // offset: 0xc (12)
  ULONG CpuDynamicPartitioningAvailable : 1;              // offset: 0xc (12)
  ULONG XmmRegistersForFastHypercallAvailable : 1;        // offset: 0xc (12)
  ULONG GuestIdleAvailable : 1;                           // offset: 0xc (12)
  ULONG HypervisorSleepStateSupportAvailable : 1;         // offset: 0xc (12)
  ULONG NumaDistanceQueryAvailable : 1;                   // offset: 0xc (12)
  ULONG FrequencyRegsAvailable : 1;                       // offset: 0xc (12)
  ULONG SyntheticMachineCheckAvailable : 1;               // offset: 0xc (12)
  ULONG GuestCrashRegsAvailable : 1;                      // offset: 0xc (12)
  ULONG DebugRegsAvailable : 1;                           // offset: 0xc (12)
  ULONG Npiep1Available : 1;                              // offset: 0xc (12)
  ULONG DisableHypervisorAvailable : 1;                   // offset: 0xc (12)
  ULONG ExtendedGvaRangesForFlushVirtualAddressListAvailable : 1; // offset: 0xc
                                                                  // (12)
  ULONG FastHypercallOutputAvailable : 1; // offset: 0xc (12)
  ULONG SvmFeaturesAvailable : 1;         // offset: 0xc (12)
  ULONG SintPollingModeAvailable : 1;     // offset: 0xc (12)
  ULONG HypercallMsrLockAvailable : 1;    // offset: 0xc (12)
  ULONG Reserved1 : 13;                   // offset: 0xc (12)
};

// 0x10 (16) bytes
struct _STRING64 {
  USHORT Length;        // offset: 0x0 (0)
  USHORT MaximumLength; // offset: 0x2 (2)
  ULONGLONG Buffer;     // offset: 0x8 (8)
};

// 0x4e8 (1256) bytes
struct _GDI_TEB_BATCH64 {
  ULONG Offset : 31;             // offset: 0x0 (0)
  ULONG HasRenderingCommand : 1; // offset: 0x0 (0)
  ULONGLONG HDC;                 // offset: 0x8 (8)
  ULONG Buffer[310];             // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _CLIENT_ID64 {
  ULONGLONG UniqueProcess; // offset: 0x0 (0)
  ULONGLONG UniqueThread;  // offset: 0x8 (8)
};

// 0x38 (56) bytes
struct _NT_TIB64 {
  ULONGLONG ExceptionList; // offset: 0x0 (0)
  ULONGLONG StackBase;     // offset: 0x8 (8)
  ULONGLONG StackLimit;    // offset: 0x10 (16)
  ULONGLONG SubSystemTib;  // offset: 0x18 (24)
  union {
    ULONGLONG FiberData; // offset: 0x20 (32)
    ULONG Version;       // offset: 0x20 (32)
  };
  ULONGLONG ArbitraryUserPointer; // offset: 0x28 (40)
  ULONGLONG Self;                 // offset: 0x30 (48)
};

// 0x1000 (4096) bytes
struct _TEB32 {
  struct _NT_TIB32 NtTib;                       // offset: 0x0 (0)
  ULONG EnvironmentPointer;                     // offset: 0x1c (28)
  struct _CLIENT_ID32 ClientId;                 // offset: 0x20 (32)
  ULONG ActiveRpcHandle;                        // offset: 0x28 (40)
  ULONG ThreadLocalStoragePointer;              // offset: 0x2c (44)
  ULONG ProcessEnvironmentBlock;                // offset: 0x30 (48)
  ULONG LastErrorValue;                         // offset: 0x34 (52)
  ULONG CountOfOwnedCriticalSections;           // offset: 0x38 (56)
  ULONG CsrClientThread;                        // offset: 0x3c (60)
  ULONG Win32ThreadInfo;                        // offset: 0x40 (64)
  ULONG User32Reserved[26];                     // offset: 0x44 (68)
  ULONG UserReserved[5];                        // offset: 0xac (172)
  ULONG WOW32Reserved;                          // offset: 0xc0 (192)
  ULONG CurrentLocale;                          // offset: 0xc4 (196)
  ULONG FpSoftwareStatusRegister;               // offset: 0xc8 (200)
  ULONG ReservedForDebuggerInstrumentation[16]; // offset: 0xcc (204)
  ULONG SystemReserved1[38];                    // offset: 0x10c (268)
  LONG ExceptionCode;                           // offset: 0x1a4 (420)
  ULONG ActivationContextStackPointer;          // offset: 0x1a8 (424)
  ULONG InstrumentationCallbackSp;              // offset: 0x1ac (428)
  ULONG InstrumentationCallbackPreviousPc;      // offset: 0x1b0 (432)
  ULONG InstrumentationCallbackPreviousSp;      // offset: 0x1b4 (436)
  UCHAR InstrumentationCallbackDisabled;        // offset: 0x1b8 (440)
  UCHAR SpareBytes[23];                         // offset: 0x1b9 (441)
  ULONG TxFsContext;                            // offset: 0x1d0 (464)
  struct _GDI_TEB_BATCH32 GdiTebBatch;          // offset: 0x1d4 (468)
  struct _CLIENT_ID32 RealClientId;             // offset: 0x6b4 (1716)
  ULONG GdiCachedProcessHandle;                 // offset: 0x6bc (1724)
  ULONG GdiClientPID;                           // offset: 0x6c0 (1728)
  ULONG GdiClientTID;                           // offset: 0x6c4 (1732)
  ULONG GdiThreadLocalInfo;                     // offset: 0x6c8 (1736)
  ULONG Win32ClientInfo[62];                    // offset: 0x6cc (1740)
  ULONG glDispatchTable[233];                   // offset: 0x7c4 (1988)
  ULONG glReserved1[29];                        // offset: 0xb68 (2920)
  ULONG glReserved2;                            // offset: 0xbdc (3036)
  ULONG glSectionInfo;                          // offset: 0xbe0 (3040)
  ULONG glSection;                              // offset: 0xbe4 (3044)
  ULONG glTable;                                // offset: 0xbe8 (3048)
  ULONG glCurrentRC;                            // offset: 0xbec (3052)
  ULONG glContext;                              // offset: 0xbf0 (3056)
  ULONG LastStatusValue;                        // offset: 0xbf4 (3060)
  struct _STRING32 StaticUnicodeString;         // offset: 0xbf8 (3064)
  WCHAR StaticUnicodeBuffer[261];               // offset: 0xc00 (3072)
  ULONG DeallocationStack;                      // offset: 0xe0c (3596)
  ULONG TlsSlots[64];                           // offset: 0xe10 (3600)
  struct LIST_ENTRY32 TlsLinks;                 // offset: 0xf10 (3856)
  ULONG Vdm;                                    // offset: 0xf18 (3864)
  ULONG ReservedForNtRpc;                       // offset: 0xf1c (3868)
  ULONG DbgSsReserved[2];                       // offset: 0xf20 (3872)
  ULONG HardErrorMode;                          // offset: 0xf28 (3880)
  ULONG Instrumentation[9];                     // offset: 0xf2c (3884)
  struct _GUID ActivityId;                      // offset: 0xf50 (3920)
  ULONG SubProcessTag;                          // offset: 0xf60 (3936)
  ULONG PerflibData;                            // offset: 0xf64 (3940)
  ULONG EtwTraceData;                           // offset: 0xf68 (3944)
  ULONG WinSockData;                            // offset: 0xf6c (3948)
  ULONG GdiBatchCount;                          // offset: 0xf70 (3952)
  union {
    struct _PROCESSOR_NUMBER CurrentIdealProcessor; // offset: 0xf74 (3956)
    ULONG IdealProcessorValue;                      // offset: 0xf74 (3956)
    struct {
      UCHAR ReservedPad0;   // offset: 0xf74 (3956)
      UCHAR ReservedPad1;   // offset: 0xf75 (3957)
      UCHAR ReservedPad2;   // offset: 0xf76 (3958)
      UCHAR IdealProcessor; // offset: 0xf77 (3959)
    };
  };
  ULONG GuaranteedStackBytes;     // offset: 0xf78 (3960)
  ULONG ReservedForPerf;          // offset: 0xf7c (3964)
  ULONG ReservedForOle;           // offset: 0xf80 (3968)
  ULONG WaitingOnLoaderLock;      // offset: 0xf84 (3972)
  ULONG SavedPriorityState;       // offset: 0xf88 (3976)
  ULONG ReservedForCodeCoverage;  // offset: 0xf8c (3980)
  ULONG ThreadPoolData;           // offset: 0xf90 (3984)
  ULONG TlsExpansionSlots;        // offset: 0xf94 (3988)
  ULONG MuiGeneration;            // offset: 0xf98 (3992)
  ULONG IsImpersonating;          // offset: 0xf9c (3996)
  ULONG NlsCache;                 // offset: 0xfa0 (4000)
  ULONG pShimData;                // offset: 0xfa4 (4004)
  USHORT HeapVirtualAffinity;     // offset: 0xfa8 (4008)
  USHORT LowFragHeapDataSlot;     // offset: 0xfaa (4010)
  ULONG CurrentTransactionHandle; // offset: 0xfac (4012)
  ULONG ActiveFrame;              // offset: 0xfb0 (4016)
  ULONG FlsData;                  // offset: 0xfb4 (4020)
  ULONG PreferredLanguages;       // offset: 0xfb8 (4024)
  ULONG UserPrefLanguages;        // offset: 0xfbc (4028)
  ULONG MergedPrefLanguages;      // offset: 0xfc0 (4032)
  ULONG MuiImpersonation;         // offset: 0xfc4 (4036)
  union {
    volatile USHORT CrossTebFlags; // offset: 0xfc8 (4040)
    USHORT SpareCrossTebBits : 16; // offset: 0xfc8 (4040)
  };
  union {
    USHORT SameTebFlags; // offset: 0xfca (4042)
    struct {
      USHORT SafeThunkCall : 1;        // offset: 0xfca (4042)
      USHORT InDebugPrint : 1;         // offset: 0xfca (4042)
      USHORT HasFiberData : 1;         // offset: 0xfca (4042)
      USHORT SkipThreadAttach : 1;     // offset: 0xfca (4042)
      USHORT WerInShipAssertCode : 1;  // offset: 0xfca (4042)
      USHORT RanProcessInit : 1;       // offset: 0xfca (4042)
      USHORT ClonedThread : 1;         // offset: 0xfca (4042)
      USHORT SuppressDebugMsg : 1;     // offset: 0xfca (4042)
      USHORT DisableUserStackWalk : 1; // offset: 0xfca (4042)
      USHORT RtlExceptionAttached : 1; // offset: 0xfca (4042)
      USHORT InitialThread : 1;        // offset: 0xfca (4042)
      USHORT SessionAware : 1;         // offset: 0xfca (4042)
      USHORT LoadOwner : 1;            // offset: 0xfca (4042)
      USHORT LoaderWorker : 1;         // offset: 0xfca (4042)
      USHORT SpareSameTebBits : 2;     // offset: 0xfca (4042)
    };
  };
  ULONG TxnScopeEnterCallback;       // offset: 0xfcc (4044)
  ULONG TxnScopeExitCallback;        // offset: 0xfd0 (4048)
  ULONG TxnScopeContext;             // offset: 0xfd4 (4052)
  ULONG LockCount;                   // offset: 0xfd8 (4056)
  LONG WowTebOffset;                 // offset: 0xfdc (4060)
  ULONG ResourceRetValue;            // offset: 0xfe0 (4064)
  ULONG ReservedForWdf;              // offset: 0xfe4 (4068)
  ULONGLONG ReservedForCrt;          // offset: 0xfe8 (4072)
  struct _GUID EffectiveContainerId; // offset: 0xff0 (4080)
};

// 0x10 (16) bytes
struct _FILESYSTEM_DISK_COUNTERS {
  ULONGLONG FsBytesRead;    // offset: 0x0 (0)
  ULONGLONG FsBytesWritten; // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _ETW_SESSION_PERF_COUNTERS {
  LONG BufferMemoryPagedPool;    // offset: 0x0 (0)
  LONG BufferMemoryNonPagedPool; // offset: 0x4 (4)
  ULONGLONG EventsLoggedCount;   // offset: 0x8 (8)
  LONG EventsLost;               // offset: 0x10 (16)
  LONG NumConsumers;             // offset: 0x14 (20)
};

// 0xc0 (192) bytes
struct _PCW_PROCESSOR_INFO {
  ULONGLONG IdleTime;               // offset: 0x0 (0)
  ULONGLONG AvailableTime;          // offset: 0x8 (8)
  ULONGLONG UserTime;               // offset: 0x10 (16)
  ULONGLONG KernelTime;             // offset: 0x18 (24)
  ULONG Interrupts;                 // offset: 0x20 (32)
  ULONGLONG DpcTime;                // offset: 0x28 (40)
  ULONGLONG InterruptTime;          // offset: 0x30 (48)
  ULONG ClockInterrupts;            // offset: 0x38 (56)
  ULONG DpcCount;                   // offset: 0x3c (60)
  ULONG DpcRate;                    // offset: 0x40 (64)
  ULONGLONG C1Time;                 // offset: 0x48 (72)
  ULONGLONG C2Time;                 // offset: 0x50 (80)
  ULONGLONG C3Time;                 // offset: 0x58 (88)
  ULONGLONG C1Transitions;          // offset: 0x60 (96)
  ULONGLONG C2Transitions;          // offset: 0x68 (104)
  ULONGLONG C3Transitions;          // offset: 0x70 (112)
  ULONGLONG StallTime;              // offset: 0x78 (120)
  ULONG ParkingStatus;              // offset: 0x80 (128)
  ULONG CurrentFrequency;           // offset: 0x84 (132)
  ULONG PercentMaxFrequency;        // offset: 0x88 (136)
  ULONG StateFlags;                 // offset: 0x8c (140)
  ULONG NominalThroughput;          // offset: 0x90 (144)
  ULONG ActiveThroughput;           // offset: 0x94 (148)
  ULONGLONG ScaledThroughput;       // offset: 0x98 (152)
  ULONGLONG ScaledKernelThroughput; // offset: 0xa0 (160)
  ULONGLONG AverageIdleTime;        // offset: 0xa8 (168)
  ULONGLONG IdleBreakEvents;        // offset: 0xb0 (176)
  ULONG PerformanceLimit;           // offset: 0xb8 (184)
  ULONG PerformanceLimitFlags;      // offset: 0xbc (188)
};

// 0x28 (40) bytes
struct _PCW_MASK_INFORMATION {
  ULONGLONG CounterMask;                // offset: 0x0 (0)
  struct _UNICODE_STRING *InstanceMask; // offset: 0x8 (8)
  ULONG InstanceId;                     // offset: 0x10 (16)
  UCHAR CollectMultiple;                // offset: 0x14 (20)
  struct _PCW_BUFFER *Buffer;           // offset: 0x18 (24)
  struct _KEVENT *CancelEvent;          // offset: 0x20 (32)
};

// 0x10 (16) bytes
struct _PCW_COUNTER_INFORMATION {
  ULONGLONG CounterMask;                // offset: 0x0 (0)
  struct _UNICODE_STRING *InstanceMask; // offset: 0x8 (8)
};

// 0x28 (40) bytes
union _PCW_CALLBACK_INFORMATION {
  struct _PCW_COUNTER_INFORMATION AddCounter;      // offset: 0x0 (0)
  struct _PCW_COUNTER_INFORMATION RemoveCounter;   // offset: 0x0 (0)
  struct _PCW_MASK_INFORMATION EnumerateInstances; // offset: 0x0 (0)
  struct _PCW_MASK_INFORMATION CollectData;        // offset: 0x0 (0)
};

// 0x30 (48) bytes
struct _PCW_REGISTRATION_INFORMATION {
  ULONG Version;                            // offset: 0x0 (0)
  struct _UNICODE_STRING *Name;             // offset: 0x8 (8)
  ULONG CounterCount;                       // offset: 0x10 (16)
  struct _PCW_COUNTER_DESCRIPTOR *Counters; // offset: 0x18 (24)
  LONG(*Callback)
  (enum _PCW_CALLBACK_TYPE arg1, union _PCW_CALLBACK_INFORMATION *arg2,
   VOID *arg3);          // offset: 0x20 (32)
  VOID *CallbackContext; // offset: 0x28 (40)
};

// 0x20 (32) bytes
struct _HVIEW_MAP_ENTRY {
  union {
    VOID *ViewStart;        // offset: 0x0 (0)
    ULONGLONG IsPinned : 1; // offset: 0x0 (0)
  };
  VOID *Bcb;             // offset: 0x8 (8)
  ULONGLONG PinnedPages; // offset: 0x10 (16)
  ULONG Size;            // offset: 0x18 (24)
};

// 0x800 (2048) bytes
struct _HVIEW_MAP_TABLE {
  struct _HVIEW_MAP_ENTRY Entries[64]; // offset: 0x0 (0)
};

// 0x400 (1024) bytes
struct _HVIEW_MAP_DIRECTORY {
  struct _HVIEW_MAP_TABLE *Tables[128]; // offset: 0x0 (0)
};

// 0x48 (72) bytes
struct _HVIEW_MAP_PIN_LOG_ENTRY {
  ULONG ViewOffset;        // offset: 0x0 (0)
  UCHAR Pinned;            // offset: 0x4 (4)
  ULONGLONG PinMask;       // offset: 0x8 (8)
  struct _KTHREAD *Thread; // offset: 0x10 (16)
  VOID *Stack[6];          // offset: 0x18 (24)
};

// 0x488 (1160) bytes
struct _HVIEW_MAP_PIN_LOG {
  ULONG Next;                                  // offset: 0x0 (0)
  ULONG Size;                                  // offset: 0x4 (4)
  struct _HVIEW_MAP_PIN_LOG_ENTRY Entries[16]; // offset: 0x8 (8)
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
  struct _GUID RmId;              // offset: 0x70 (112)
  struct _GUID LogId;             // offset: 0x80 (128)
  ULONG Flags;                    // offset: 0x90 (144)
  struct _GUID TmId;              // offset: 0x94 (148)
  ULONG GuidSignature;            // offset: 0xa4 (164)
  ULONGLONG LastReorganizeTime;   // offset: 0xa8 (168)
  ULONG Reserved1[83];            // offset: 0xb0 (176)
  ULONG CheckSum;                 // offset: 0x1fc (508)
  ULONG Reserved2[882];           // offset: 0x200 (512)
  struct _GUID ThawTmId;          // offset: 0xfc8 (4040)
  struct _GUID ThawRmId;          // offset: 0xfd8 (4056)
  struct _GUID ThawLogId;         // offset: 0xfe8 (4072)
  ULONG BootType;                 // offset: 0xff8 (4088)
  ULONG BootRecover;              // offset: 0xffc (4092)
};

// 0x50 (80) bytes
struct tagSWITCH_CONTEXT_DATA {
  ULONGLONG ullOsMaxVersionTested; // offset: 0x0 (0)
  ULONG ulTargetPlatform;          // offset: 0x8 (8)
  ULONGLONG ullContextMinimum;     // offset: 0x10 (16)
  struct _GUID guPlatform;         // offset: 0x18 (24)
  struct _GUID guMinPlatform;      // offset: 0x28 (40)
  ULONG ulContextSource;           // offset: 0x38 (56)
  ULONG ulElementCount;            // offset: 0x3c (60)
  struct _GUID guElements[1];      // offset: 0x40 (64)
};

// 0x18 (24) bytes
struct tagSWITCH_CONTEXT_ATTRIBUTE {
  ULONGLONG ulContextUpdateCounter; // offset: 0x0 (0)
  LONG fAllowContextUpdate;         // offset: 0x8 (8)
  LONG fEnableTrace;                // offset: 0xc (12)
  ULONGLONG EtwHandle;              // offset: 0x10 (16)
};

// 0x68 (104) bytes
struct tagSWITCH_CONTEXT {
  struct tagSWITCH_CONTEXT_ATTRIBUTE Attribute; // offset: 0x0 (0)
  struct tagSWITCH_CONTEXT_DATA Data;           // offset: 0x18 (24)
};

// 0x8 (8) bytes
union _MM_STORE_KEY {
  ULONGLONG KeyLow : 60; // offset: 0x0 (0)
  ULONGLONG KeyHigh : 4; // offset: 0x0 (0)
  ULONGLONG EntireKey;   // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _MI_CLONE_BLOCK_FLAGS {
  ULONGLONG ActualCloneCommit : 59; // offset: 0x0 (0)
  ULONGLONG CloneProtection : 5;    // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _EVENT_FILTER_DESCRIPTOR {
  ULONGLONG Ptr; // offset: 0x0 (0)
  ULONG Size;    // offset: 0x8 (8)
  ULONG Type;    // offset: 0xc (12)
};

// 0x40 (64) bytes
struct _TlgProvider_t {
  ULONG LevelPlus1;                  // offset: 0x0 (0)
  const USHORT *ProviderMetadataPtr; // offset: 0x8 (8)
  ULONGLONG KeywordAny;              // offset: 0x10 (16)
  ULONGLONG KeywordAll;              // offset: 0x18 (24)
  ULONGLONG RegHandle;               // offset: 0x20 (32)
  VOID(*EnableCallback)
  (struct _GUID *arg1, ULONG arg2, UCHAR arg3, ULONGLONG arg4, ULONGLONG arg5,
   struct _EVENT_FILTER_DESCRIPTOR *arg6, VOID *arg7); // offset: 0x28 (40)
  VOID *CallbackContext;                               // offset: 0x30 (48)
  VOID (*AnnotationFunc)(void *arg1);                  // offset: 0x38 (56)
};

// 0x8 (8) bytes
union _WHEA_PERSISTENCE_INFO {
  ULONGLONG Signature : 16;  // offset: 0x0 (0)
  ULONGLONG Length : 24;     // offset: 0x0 (0)
  ULONGLONG Identifier : 16; // offset: 0x0 (0)
  ULONGLONG Attributes : 2;  // offset: 0x0 (0)
  ULONGLONG DoNotLog : 1;    // offset: 0x0 (0)
  ULONGLONG Reserved : 5;    // offset: 0x0 (0)
  ULONGLONG AsULONGLONG;     // offset: 0x0 (0)
};

// 0x8 (8) bytes
union _WHEA_TIMESTAMP {
  ULONGLONG Seconds : 8;                // offset: 0x0 (0)
  ULONGLONG Minutes : 8;                // offset: 0x0 (0)
  ULONGLONG Hours : 8;                  // offset: 0x0 (0)
  ULONGLONG Precise : 1;                // offset: 0x0 (0)
  ULONGLONG Reserved : 7;               // offset: 0x0 (0)
  ULONGLONG Day : 8;                    // offset: 0x0 (0)
  ULONGLONG Month : 8;                  // offset: 0x0 (0)
  ULONGLONG Year : 8;                   // offset: 0x0 (0)
  ULONGLONG Century : 8;                // offset: 0x0 (0)
  union _LARGE_INTEGER AsLARGE_INTEGER; // offset: 0x0 (0)
};

// 0x80 (128) bytes
struct _WHEA_ERROR_RECORD_HEADER {
  ULONG Signature;                                     // offset: 0x0 (0)
  union _WHEA_REVISION Revision;                       // offset: 0x4 (4)
  ULONG SignatureEnd;                                  // offset: 0x6 (6)
  USHORT SectionCount;                                 // offset: 0xa (10)
  enum _WHEA_ERROR_SEVERITY Severity;                  // offset: 0xc (12)
  union _WHEA_ERROR_RECORD_HEADER_VALIDBITS ValidBits; // offset: 0x10 (16)
  ULONG Length;                                        // offset: 0x14 (20)
  union _WHEA_TIMESTAMP Timestamp;                     // offset: 0x18 (24)
  struct _GUID PlatformId;                             // offset: 0x20 (32)
  struct _GUID PartitionId;                            // offset: 0x30 (48)
  struct _GUID CreatorId;                              // offset: 0x40 (64)
  struct _GUID NotifyType;                             // offset: 0x50 (80)
  ULONGLONG RecordId;                                  // offset: 0x60 (96)
  union _WHEA_ERROR_RECORD_HEADER_FLAGS Flags;         // offset: 0x68 (104)
  union _WHEA_PERSISTENCE_INFO PersistenceInfo;        // offset: 0x6c (108)
  UCHAR Reserved[12];                                  // offset: 0x74 (116)
};

// 0xc8 (200) bytes
struct _WHEA_ERROR_RECORD {
  struct _WHEA_ERROR_RECORD_HEADER Header; // offset: 0x0 (0)
  struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR
      SectionDescriptor[1]; // offset: 0x80 (128)
};

// 0xf0 (240) bytes
struct _WHEAP_ERROR_RECORD_WRAPPER {
  struct _LIST_ENTRY WorkEntry;                  // offset: 0x0 (0)
  ULONG Length;                                  // offset: 0x10 (16)
  ULONG ProcessorNumber;                         // offset: 0x14 (20)
  union _WHEAP_ERROR_RECORD_WRAPPER_FLAGS Flags; // offset: 0x18 (24)
  volatile LONG InUse;                           // offset: 0x1c (28)
  struct _WHEAP_ERROR_SOURCE *ErrorSource;       // offset: 0x20 (32)
  struct _WHEA_ERROR_RECORD ErrorRecord;         // offset: 0x28 (40)
};

// 0x428 (1064) bytes
struct _WHEAP_ERROR_SOURCE {
  struct _LIST_ENTRY ListEntry;                    // offset: 0x0 (0)
  ULONG FailedAllocations;                         // offset: 0x10 (16)
  ULONG PlatformErrorSourceId;                     // offset: 0x14 (20)
  LONG ErrorCount;                                 // offset: 0x18 (24)
  ULONG RecordCount;                               // offset: 0x1c (28)
  ULONG RecordLength;                              // offset: 0x20 (32)
  ULONG PoolTag;                                   // offset: 0x24 (36)
  enum _WHEA_ERROR_SOURCE_TYPE Type;               // offset: 0x28 (40)
  struct _WHEAP_ERROR_RECORD_WRAPPER *Records;     // offset: 0x30 (48)
  VOID *Context;                                   // offset: 0x38 (56)
  ULONG SectionCount;                              // offset: 0x40 (64)
  ULONG SectionLength;                             // offset: 0x44 (68)
  union _LARGE_INTEGER TickCountAtLastError;       // offset: 0x48 (72)
  ULONG AccumulatedErrors;                         // offset: 0x50 (80)
  ULONG TotalErrors;                               // offset: 0x54 (84)
  UCHAR Deferred;                                  // offset: 0x58 (88)
  struct _WHEA_ERROR_SOURCE_DESCRIPTOR Descriptor; // offset: 0x59 (89)
};

// 0x50 (80) bytes
struct _WHEA_ERROR_PACKET_V2 {
  ULONG Signature;                                // offset: 0x0 (0)
  ULONG Version;                                  // offset: 0x4 (4)
  ULONG Length;                                   // offset: 0x8 (8)
  union _WHEA_ERROR_PACKET_FLAGS Flags;           // offset: 0xc (12)
  enum _WHEA_ERROR_TYPE ErrorType;                // offset: 0x10 (16)
  enum _WHEA_ERROR_SEVERITY ErrorSeverity;        // offset: 0x14 (20)
  ULONG ErrorSourceId;                            // offset: 0x18 (24)
  enum _WHEA_ERROR_SOURCE_TYPE ErrorSourceType;   // offset: 0x1c (28)
  struct _GUID NotifyType;                        // offset: 0x20 (32)
  ULONGLONG Context;                              // offset: 0x30 (48)
  enum _WHEA_ERROR_PACKET_DATA_FORMAT DataFormat; // offset: 0x38 (56)
  ULONG Reserved1;                                // offset: 0x3c (60)
  ULONG DataOffset;                               // offset: 0x40 (64)
  ULONG DataLength;                               // offset: 0x44 (68)
  ULONG PshedDataOffset;                          // offset: 0x48 (72)
  ULONG PshedDataLength;                          // offset: 0x4c (76)
};

// 0x8 (8) bytes
struct _MM_PAGE_ACCESS_INFO {
  union {
    union _MM_PAGE_ACCESS_INFO_FLAGS Flags; // offset: 0x0 (0)
    ULONGLONG FileOffset;                   // offset: 0x0 (0)
    VOID *VirtualAddress;                   // offset: 0x0 (0)
    VOID *PointerProtoPte;                  // offset: 0x0 (0)
  };
};

// 0x10 (16) bytes
struct _EVENT_HEADER_EXTENDED_DATA_ITEM {
  USHORT Reserved1;      // offset: 0x0 (0)
  USHORT ExtType;        // offset: 0x2 (2)
  USHORT Linkage : 1;    // offset: 0x4 (4)
  USHORT Reserved2 : 15; // offset: 0x4 (4)
  USHORT DataSize;       // offset: 0x6 (6)
  ULONGLONG DataPtr;     // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _EVENT_DESCRIPTOR {
  USHORT Id;         // offset: 0x0 (0)
  UCHAR Version;     // offset: 0x2 (2)
  UCHAR Channel;     // offset: 0x3 (3)
  UCHAR Level;       // offset: 0x4 (4)
  UCHAR Opcode;      // offset: 0x5 (5)
  USHORT Task;       // offset: 0x6 (6)
  ULONGLONG Keyword; // offset: 0x8 (8)
};

// 0x50 (80) bytes
struct _EVENT_HEADER {
  USHORT Size;                              // offset: 0x0 (0)
  USHORT HeaderType;                        // offset: 0x2 (2)
  USHORT Flags;                             // offset: 0x4 (4)
  USHORT EventProperty;                     // offset: 0x6 (6)
  ULONG ThreadId;                           // offset: 0x8 (8)
  ULONG ProcessId;                          // offset: 0xc (12)
  union _LARGE_INTEGER TimeStamp;           // offset: 0x10 (16)
  struct _GUID ProviderId;                  // offset: 0x18 (24)
  struct _EVENT_DESCRIPTOR EventDescriptor; // offset: 0x28 (40)
  union {
    struct {
      ULONG KernelTime; // offset: 0x38 (56)
      ULONG UserTime;   // offset: 0x3c (60)
    };
    ULONGLONG ProcessorTime; // offset: 0x38 (56)
  };
  struct _GUID ActivityId; // offset: 0x40 (64)
};

// 0x70 (112) bytes
struct _EVENT_RECORD {
  struct _EVENT_HEADER EventHeader;                      // offset: 0x0 (0)
  struct _ETW_BUFFER_CONTEXT BufferContext;              // offset: 0x50 (80)
  USHORT ExtendedDataCount;                              // offset: 0x54 (84)
  USHORT UserDataLength;                                 // offset: 0x56 (86)
  struct _EVENT_HEADER_EXTENDED_DATA_ITEM *ExtendedData; // offset: 0x58 (88)
  VOID *UserData;                                        // offset: 0x60 (96)
  VOID *UserContext;                                     // offset: 0x68 (104)
};

// 0x10 (16) bytes
struct _EVENT_DATA_DESCRIPTOR {
  ULONGLONG Ptr; // offset: 0x0 (0)
  ULONG Size;    // offset: 0x8 (8)
  union {
    ULONG Reserved; // offset: 0xc (12)
    struct {
      UCHAR Type;       // offset: 0xc (12)
      UCHAR Reserved1;  // offset: 0xd (13)
      USHORT Reserved2; // offset: 0xe (14)
    };
  };
};

// 0x8 (8) bytes
struct _EX_FAST_REF {
  union {
    VOID *Object;         // offset: 0x0 (0)
    ULONGLONG RefCnt : 4; // offset: 0x0 (0)
    ULONGLONG Value;      // offset: 0x0 (0)
  };
};

// 0x18 (24) bytes
struct _MMPFNLIST_SHORT {
  ULONGLONG Total; // offset: 0x0 (0)
  ULONGLONG Flink; // offset: 0x8 (8)
  ULONGLONG Blink; // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _MI_DECAY_TIMER_LINKAGE {
  ULONGLONG Spare0 : 1;            // offset: 0x0 (0)
  ULONGLONG PreviousDecayPfn : 31; // offset: 0x0 (0)
  ULONGLONG Spare1 : 1;            // offset: 0x0 (0)
  ULONGLONG NextDecayPfn : 31;     // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _PHYSICAL_MEMORY_RUN {
  ULONGLONG BasePage;  // offset: 0x0 (0)
  ULONGLONG PageCount; // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _MI_DECAY_TIMER_LINK {
  union {
    ULONGLONG Long;                    // offset: 0x0 (0)
    struct _MI_DECAY_TIMER_LINKAGE e1; // offset: 0x0 (0)

  } u1; // offset: 0x0 (0)
};

// 0x20 (32) bytes
struct _PS_TRUSTLET_TKSESSION_ID {
  ULONGLONG SessionId[4]; // offset: 0x0 (0)
};

// 0x20 (32) bytes
struct _PHYSICAL_MEMORY_DESCRIPTOR {
  ULONG NumberOfRuns;                 // offset: 0x0 (0)
  ULONGLONG NumberOfPages;            // offset: 0x8 (8)
  struct _PHYSICAL_MEMORY_RUN Run[1]; // offset: 0x10 (16)
};

// 0x28 (40) bytes
struct _MI_PAGE_COMBINE_STATISTICS {
  ULONGLONG PagesScannedActive;         // offset: 0x0 (0)
  ULONGLONG PagesScannedStandby;        // offset: 0x8 (8)
  ULONGLONG PagesCombined;              // offset: 0x10 (16)
  ULONG CombineScanCount;               // offset: 0x18 (24)
  LONG CombinedBlocksInUse;             // offset: 0x1c (28)
  LONG SumCombinedBlocksReferenceCount; // offset: 0x20 (32)
};

// 0x28 (40) bytes
struct _MMPFNLIST {
  ULONGLONG Total;        // offset: 0x0 (0)
  enum _MMLISTS ListName; // offset: 0x8 (8)
  ULONGLONG Flink;        // offset: 0x10 (16)
  ULONGLONG Blink;        // offset: 0x18 (24)
  ULONGLONG Lock;         // offset: 0x20 (32)
};

// 0x40 (64) bytes
struct _MI_MODWRITE_DATA {
  LONGLONG PagesLoad;                    // offset: 0x0 (0)
  ULONGLONG PagesAverage;                // offset: 0x8 (8)
  ULONGLONG AverageAvailablePages;       // offset: 0x10 (16)
  ULONGLONG PagesWritten;                // offset: 0x18 (24)
  ULONG WritesIssued;                    // offset: 0x20 (32)
  ULONG IgnoredReservationsCount;        // offset: 0x24 (36)
  ULONG FreedReservationsCount;          // offset: 0x28 (40)
  ULONG WriteBurstCount;                 // offset: 0x2c (44)
  ULONGLONG IgnoreReservationsStartTime; // offset: 0x30 (48)
  union _MI_RESERVATION_CLUSTER_INFO volatile ReservationClusterInfo; // offset:
                                                                      // 0x38
                                                                      // (56)
  USHORT IgnoreReservations : 1; // offset: 0x3c (60)
  USHORT Spare : 15;             // offset: 0x3c (60)
  USHORT Spare1;                 // offset: 0x3e (62)
};

// 0x188 (392) bytes
struct _MI_PAGE_COMBINING_SUPPORT {
  struct _MI_PARTITION *Partition;                 // offset: 0x0 (0)
  struct _LIST_ENTRY ArbitraryPfnMapList;          // offset: 0x8 (8)
  struct _MI_COMBINE_WORKITEM FreeCombinePoolItem; // offset: 0x18 (24)
  ULONG CombiningThreadCount;                      // offset: 0x40 (64)
  struct _LIST_ENTRY CombinePageFreeList;          // offset: 0x48 (72)
  ULONGLONG CombineFreeListLock;                   // offset: 0x58 (88)
  struct _MI_COMBINE_PAGE_LISTHEAD
      CombinePageListHeads[16];                        // offset: 0x60 (96)
  struct _MI_PAGE_COMBINE_STATISTICS PageCombineStats; // offset: 0x160 (352)
};

// 0x1a0 (416) bytes
struct _MI_COMBINE_STATE {
  volatile LONG ActiveSpinLock;                     // offset: 0x0 (0)
  ULONG CombiningThreadCount;                       // offset: 0x4 (4)
  struct _RTL_AVL_TREE ActiveThreadTree;            // offset: 0x8 (8)
  ULONGLONG ZeroPageHashValue;                      // offset: 0x10 (16)
  struct _MI_PAGE_COMBINING_SUPPORT CrossPartition; // offset: 0x18 (24)
};

// 0x80 (128) bytes
struct _MI_PARTITION_COMMIT {
  ULONGLONG PeakCommitment;          // offset: 0x0 (0)
  ULONGLONG TotalCommitLimitMaximum; // offset: 0x8 (8)
  volatile LONG Popups[2];           // offset: 0x10 (16)
  ULONGLONG LowCommitThreshold;      // offset: 0x18 (24)
  ULONGLONG HighCommitThreshold;     // offset: 0x20 (32)
  ULONGLONG EventLock;               // offset: 0x28 (40)
  ULONGLONG SystemCommitReserve;     // offset: 0x30 (48)
  volatile ULONGLONG OverCommit;     // offset: 0x40 (64)
};

// 0x40 (64) bytes
struct _SECTION_IMAGE_INFORMATION {
  VOID *TransferAddress;        // offset: 0x0 (0)
  ULONG ZeroBits;               // offset: 0x8 (8)
  ULONGLONG MaximumStackSize;   // offset: 0x10 (16)
  ULONGLONG CommittedStackSize; // offset: 0x18 (24)
  ULONG SubSystemType;          // offset: 0x20 (32)
  union {
    struct {
      USHORT SubSystemMinorVersion; // offset: 0x24 (36)
      USHORT SubSystemMajorVersion; // offset: 0x26 (38)
    };
    ULONG SubSystemVersion; // offset: 0x24 (36)
  };
  union {
    struct {
      USHORT MajorOperatingSystemVersion; // offset: 0x28 (40)
      USHORT MinorOperatingSystemVersion; // offset: 0x2a (42)
    };
    ULONG OperatingSystemVersion; // offset: 0x28 (40)
  };
  USHORT ImageCharacteristics; // offset: 0x2c (44)
  USHORT DllCharacteristics;   // offset: 0x2e (46)
  USHORT Machine;              // offset: 0x30 (48)
  UCHAR ImageContainsCode;     // offset: 0x32 (50)
  union {
    UCHAR ImageFlags; // offset: 0x33 (51)
    struct {
      UCHAR ComPlusNativeReady : 1;        // offset: 0x33 (51)
      UCHAR ComPlusILOnly : 1;             // offset: 0x33 (51)
      UCHAR ImageDynamicallyRelocated : 1; // offset: 0x33 (51)
      UCHAR ImageMappedFlat : 1;           // offset: 0x33 (51)
      UCHAR BaseBelow4gb : 1;              // offset: 0x33 (51)
      UCHAR ComPlusPrefer32bit : 1;        // offset: 0x33 (51)
      UCHAR Reserved : 2;                  // offset: 0x33 (51)
    };
  };
  ULONG LoaderFlags;   // offset: 0x34 (52)
  ULONG ImageFileSize; // offset: 0x38 (56)
  ULONG CheckSum;      // offset: 0x3c (60)
};

// 0x48 (72) bytes
struct _MI_SECTION_IMAGE_INFORMATION {
  struct _SECTION_IMAGE_INFORMATION ExportedImageInformation; // offset: 0x0 (0)
  struct _MI_EXTRA_IMAGE_INFORMATION
      InternalImageInformation; // offset: 0x40 (64)
};

// 0x8 (8) bytes
struct _IMAGE_SECURITY_CONTEXT {
  union {
    VOID *PageHashes; // offset: 0x0 (0)
    ULONGLONG Value;  // offset: 0x0 (0)
    struct {
      ULONGLONG SecurityBeingCreated : 2; // offset: 0x0 (0)
      ULONGLONG SecurityMandatory : 1;    // offset: 0x0 (0)
      ULONGLONG PageHashPointer : 61;     // offset: 0x0 (0)
    };
  };
};

// 0x18 (24) bytes
struct _MI_IMAGE_SECURITY_REFERENCE {
  VOID *DynamicRelocations;                       // offset: 0x0 (0)
  struct _IMAGE_SECURITY_CONTEXT SecurityContext; // offset: 0x8 (8)
  ULONGLONG StrongImageReference;                 // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _MIPFNBLINK {
  union {
    struct {
      ULONGLONG Blink : 36;                  // offset: 0x0 (0)
      ULONGLONG NodeBlinkHigh : 20;          // offset: 0x0 (0)
      ULONGLONG TbFlushStamp : 4;            // offset: 0x0 (0)
      ULONGLONG Unused : 2;                  // offset: 0x0 (0)
      ULONGLONG PageBlinkDeleteBit : 1;      // offset: 0x0 (0)
      ULONGLONG PageBlinkLockBit : 1;        // offset: 0x0 (0)
      ULONGLONG ShareCount : 62;             // offset: 0x0 (0)
      ULONGLONG PageShareCountDeleteBit : 1; // offset: 0x0 (0)
      ULONGLONG PageShareCountLockBit : 1;   // offset: 0x0 (0)
    };
    ULONGLONG EntireField;  // offset: 0x0 (0)
    volatile LONGLONG Lock; // offset: 0x0 (0)
    struct {
      ULONGLONG LockNotUsed : 62; // offset: 0x0 (0)
      ULONGLONG DeleteBit : 1;    // offset: 0x0 (0)
      ULONGLONG LockBit : 1;      // offset: 0x0 (0)
    };
  };
};

// 0x8 (8) bytes
struct _MMPTE_LIST {
  ULONGLONG Valid : 1;      // offset: 0x0 (0)
  ULONGLONG OneEntry : 1;   // offset: 0x0 (0)
  ULONGLONG filler0 : 3;    // offset: 0x0 (0)
  ULONGLONG Protection : 5; // offset: 0x0 (0)
  ULONGLONG Prototype : 1;  // offset: 0x0 (0)
  ULONGLONG Transition : 1; // offset: 0x0 (0)
  ULONGLONG filler1 : 16;   // offset: 0x0 (0)
  ULONGLONG NextEntry : 36; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _MMPTE_SUBSECTION {
  ULONGLONG Valid : 1;             // offset: 0x0 (0)
  ULONGLONG Unused0 : 4;           // offset: 0x0 (0)
  ULONGLONG Protection : 5;        // offset: 0x0 (0)
  ULONGLONG Prototype : 1;         // offset: 0x0 (0)
  ULONGLONG Unused1 : 4;           // offset: 0x0 (0)
  ULONGLONG ExecutePrivilege : 1;  // offset: 0x0 (0)
  LONGLONG SubsectionAddress : 48; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _MMPTE_TRANSITION {
  ULONGLONG Valid : 1;            // offset: 0x0 (0)
  ULONGLONG Write : 1;            // offset: 0x0 (0)
  ULONGLONG Spare : 1;            // offset: 0x0 (0)
  ULONGLONG WriteThrough : 1;     // offset: 0x0 (0)
  ULONGLONG CacheDisable : 1;     // offset: 0x0 (0)
  ULONGLONG Protection : 5;       // offset: 0x0 (0)
  ULONGLONG Prototype : 1;        // offset: 0x0 (0)
  ULONGLONG Transition : 1;       // offset: 0x0 (0)
  ULONGLONG PageFrameNumber : 36; // offset: 0x0 (0)
  ULONGLONG Unused : 16;          // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _MMPTE_TIMESTAMP {
  ULONGLONG MustBeZero : 1;       // offset: 0x0 (0)
  ULONGLONG PageFileLow : 4;      // offset: 0x0 (0)
  ULONGLONG Protection : 5;       // offset: 0x0 (0)
  ULONGLONG Prototype : 1;        // offset: 0x0 (0)
  ULONGLONG Transition : 1;       // offset: 0x0 (0)
  ULONGLONG Reserved : 20;        // offset: 0x0 (0)
  ULONGLONG GlobalTimeStamp : 32; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _MMPTE_SOFTWARE {
  ULONGLONG Valid : 1;                 // offset: 0x0 (0)
  ULONGLONG PageFileLow : 4;           // offset: 0x0 (0)
  ULONGLONG Protection : 5;            // offset: 0x0 (0)
  ULONGLONG Prototype : 1;             // offset: 0x0 (0)
  ULONGLONG Transition : 1;            // offset: 0x0 (0)
  ULONGLONG PageFileReserved : 1;      // offset: 0x0 (0)
  ULONGLONG PageFileAllocated : 1;     // offset: 0x0 (0)
  ULONGLONG UsedPageTableEntries : 10; // offset: 0x0 (0)
  ULONGLONG LocalPartition : 1;        // offset: 0x0 (0)
  ULONGLONG Unused : 7;                // offset: 0x0 (0)
  ULONGLONG PageFileHigh : 32;         // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _MMPTE_PROTOTYPE {
  ULONGLONG Valid : 1;                // offset: 0x0 (0)
  ULONGLONG DemandFillProto : 1;      // offset: 0x0 (0)
  ULONGLONG HiberVerifyConverted : 1; // offset: 0x0 (0)
  ULONGLONG Unused1 : 5;              // offset: 0x0 (0)
  ULONGLONG ReadOnly : 1;             // offset: 0x0 (0)
  ULONGLONG Combined : 1;             // offset: 0x0 (0)
  ULONGLONG Prototype : 1;            // offset: 0x0 (0)
  ULONGLONG Protection : 5;           // offset: 0x0 (0)
  LONGLONG ProtoAddress : 48;         // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _HARDWARE_PTE {
  ULONGLONG Valid : 1;            // offset: 0x0 (0)
  ULONGLONG Write : 1;            // offset: 0x0 (0)
  ULONGLONG Owner : 1;            // offset: 0x0 (0)
  ULONGLONG WriteThrough : 1;     // offset: 0x0 (0)
  ULONGLONG CacheDisable : 1;     // offset: 0x0 (0)
  ULONGLONG Accessed : 1;         // offset: 0x0 (0)
  ULONGLONG Dirty : 1;            // offset: 0x0 (0)
  ULONGLONG LargePage : 1;        // offset: 0x0 (0)
  ULONGLONG Global : 1;           // offset: 0x0 (0)
  ULONGLONG CopyOnWrite : 1;      // offset: 0x0 (0)
  ULONGLONG Prototype : 1;        // offset: 0x0 (0)
  ULONGLONG reserved0 : 1;        // offset: 0x0 (0)
  ULONGLONG PageFrameNumber : 36; // offset: 0x0 (0)
  ULONGLONG reserved1 : 4;        // offset: 0x0 (0)
  ULONGLONG SoftwareWsIndex : 11; // offset: 0x0 (0)
  ULONGLONG NoExecute : 1;        // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _MMPTE_HARDWARE {
  ULONGLONG Valid : 1;            // offset: 0x0 (0)
  ULONGLONG Dirty1 : 1;           // offset: 0x0 (0)
  ULONGLONG Owner : 1;            // offset: 0x0 (0)
  ULONGLONG WriteThrough : 1;     // offset: 0x0 (0)
  ULONGLONG CacheDisable : 1;     // offset: 0x0 (0)
  ULONGLONG Accessed : 1;         // offset: 0x0 (0)
  ULONGLONG Dirty : 1;            // offset: 0x0 (0)
  ULONGLONG LargePage : 1;        // offset: 0x0 (0)
  ULONGLONG Global : 1;           // offset: 0x0 (0)
  ULONGLONG CopyOnWrite : 1;      // offset: 0x0 (0)
  ULONGLONG Unused : 1;           // offset: 0x0 (0)
  ULONGLONG Write : 1;            // offset: 0x0 (0)
  ULONGLONG PageFrameNumber : 36; // offset: 0x0 (0)
  ULONGLONG reserved1 : 4;        // offset: 0x0 (0)
  ULONGLONG SoftwareWsIndex : 11; // offset: 0x0 (0)
  ULONGLONG NoExecute : 1;        // offset: 0x0 (0)
};

// 0x14 (20) bytes
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
      USHORT Level;       // offset: 0x0 (0)
      USHORT Group;       // offset: 0x2 (2)
      ULONG Vector;       // offset: 0x4 (4)
      ULONGLONG Affinity; // offset: 0x8 (8)
    } Interrupt;          // offset: 0x4 (4)
    struct {
      union {
        struct {
          USHORT Group;        // offset: 0x0 (0)
          USHORT MessageCount; // offset: 0x2 (2)
          ULONG Vector;        // offset: 0x4 (4)
          ULONGLONG Affinity;  // offset: 0x8 (8)
        } Raw;                 // offset: 0x0 (0)
        struct {
          USHORT Level;       // offset: 0x0 (0)
          USHORT Group;       // offset: 0x2 (2)
          ULONG Vector;       // offset: 0x4 (4)
          ULONGLONG Affinity; // offset: 0x8 (8)
        } Translated;         // offset: 0x0 (0)
      };
    } MessageInterrupt; // offset: 0x4 (4)
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
      ULONG Channel;       // offset: 0x0 (0)
      ULONG RequestLine;   // offset: 0x4 (4)
      UCHAR TransferWidth; // offset: 0x8 (8)
      UCHAR Reserved1;     // offset: 0x9 (9)
      UCHAR Reserved2;     // offset: 0xa (10)
      UCHAR Reserved3;     // offset: 0xb (11)
    } DmaV3;               // offset: 0x4 (4)
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
    struct {
      union _LARGE_INTEGER Start; // offset: 0x0 (0)
      ULONG Length40;             // offset: 0x8 (8)
    } Memory40;                   // offset: 0x4 (4)
    struct {
      union _LARGE_INTEGER Start; // offset: 0x0 (0)
      ULONG Length48;             // offset: 0x8 (8)
    } Memory48;                   // offset: 0x4 (4)
    struct {
      union _LARGE_INTEGER Start; // offset: 0x0 (0)
      ULONG Length64;             // offset: 0x8 (8)
    } Memory64;                   // offset: 0x4 (4)
    struct {
      UCHAR Class;      // offset: 0x0 (0)
      UCHAR Type;       // offset: 0x1 (1)
      UCHAR Reserved1;  // offset: 0x2 (2)
      UCHAR Reserved2;  // offset: 0x3 (3)
      ULONG IdLowPart;  // offset: 0x4 (4)
      ULONG IdHighPart; // offset: 0x8 (8)
    } Connection;       // offset: 0x4 (4)

  } u; // offset: 0x4 (4)
};

// 0x18 (24) bytes
struct _ARBITER_RETEST_ALLOCATION_PARAMETERS {
  struct _LIST_ENTRY *ArbitrationList;                  // offset: 0x0 (0)
  ULONG AllocateFromCount;                              // offset: 0x8 (8)
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *AllocateFrom; // offset: 0x10 (16)
};

// 0x18 (24) bytes
struct _ARBITER_TEST_ALLOCATION_PARAMETERS {
  struct _LIST_ENTRY *ArbitrationList;                  // offset: 0x0 (0)
  ULONG AllocateFromCount;                              // offset: 0x8 (8)
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *AllocateFrom; // offset: 0x10 (16)
};

// 0x1c (28) bytes
struct _CM_PARTIAL_RESOURCE_LIST {
  USHORT Version;  // offset: 0x0 (0)
  USHORT Revision; // offset: 0x2 (2)
  ULONG Count;     // offset: 0x4 (4)
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
      PartialDescriptors[1]; // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS {
  struct _CM_PARTIAL_RESOURCE_LIST **AllocatedResources; // offset: 0x0 (0)
};

// 0x24 (36) bytes
struct _CM_FULL_RESOURCE_DESCRIPTOR {
  enum _INTERFACE_TYPE InterfaceType;                   // offset: 0x0 (0)
  ULONG BusNumber;                                      // offset: 0x4 (4)
  struct _CM_PARTIAL_RESOURCE_LIST PartialResourceList; // offset: 0x8 (8)
};

// 0x28 (40) bytes
struct _CM_RESOURCE_LIST {
  ULONG Count;                                 // offset: 0x0 (0)
  struct _CM_FULL_RESOURCE_DESCRIPTOR List[1]; // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _MMEXTEND_INFO {
  ULONGLONG CommittedSize; // offset: 0x0 (0)
  ULONG ReferenceCount;    // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _MMPTE {
  union {
    ULONGLONG Long;                    // offset: 0x0 (0)
    volatile ULONGLONG VolatileLong;   // offset: 0x0 (0)
    struct _MMPTE_HARDWARE Hard;       // offset: 0x0 (0)
    struct _HARDWARE_PTE Flush;        // offset: 0x0 (0)
    struct _MMPTE_PROTOTYPE Proto;     // offset: 0x0 (0)
    struct _MMPTE_SOFTWARE Soft;       // offset: 0x0 (0)
    struct _MMPTE_TIMESTAMP TimeStamp; // offset: 0x0 (0)
    struct _MMPTE_TRANSITION Trans;    // offset: 0x0 (0)
    struct _MMPTE_SUBSECTION Subsect;  // offset: 0x0 (0)
    struct _MMPTE_LIST List;           // offset: 0x0 (0)

  } u; // offset: 0x0 (0)
};

// 0x20 (32) bytes
struct _MMCLONE_BLOCK {
  struct _MMPTE ProtoPte;              // offset: 0x0 (0)
  ULONGLONG PaddingFor16ByteAlignment; // offset: 0x8 (8)
  union {
    volatile ULONGLONG CloneCommitCount; // offset: 0x10 (16)
    struct _MI_CLONE_BLOCK_FLAGS u1;     // offset: 0x10 (16)
  };
  volatile ULONGLONG CloneRefCount; // offset: 0x18 (24)
};

// 0x18 (24) bytes
struct _MMCLONE_HEADER {
  ULONGLONG NumberOfPtes;                       // offset: 0x0 (0)
  volatile ULONGLONG NumberOfProcessReferences; // offset: 0x8 (8)
  struct _MMCLONE_BLOCK *ClonePtes;             // offset: 0x10 (16)
};

// 0x28 (40) bytes
struct _MI_DRIVER_VA {
  struct _MI_DRIVER_VA *Next; // offset: 0x0 (0)
  struct _MMPTE *PointerPte;  // offset: 0x8 (8)
  struct _RTL_BITMAP BitMap;  // offset: 0x10 (16)
  ULONG Hint;                 // offset: 0x20 (32)
};

// 0x18 (24) bytes
struct _MI_PTE_CHAIN_HEAD {
  struct _MMPTE Flink;    // offset: 0x0 (0)
  struct _MMPTE Blink;    // offset: 0x8 (8)
  struct _MMPTE *PteBase; // offset: 0x10 (16)
};

// 0x50 (80) bytes
struct _MI_SPECIAL_POOL {
  ULONGLONG Lock;                     // offset: 0x0 (0)
  struct _MI_PTE_CHAIN_HEAD Paged;    // offset: 0x8 (8)
  struct _MI_PTE_CHAIN_HEAD NonPaged; // offset: 0x20 (32)
  volatile ULONGLONG PagesInUse;      // offset: 0x38 (56)
  struct _RTL_BITMAP SpecialPoolPdes; // offset: 0x40 (64)
};

// 0x118 (280) bytes
struct _MI_DEBUGGER_STATE {
  UCHAR TransientWrite;     // offset: 0x0 (0)
  UCHAR CodePageEdited;     // offset: 0x1 (1)
  struct _MMPTE *DebugPte;  // offset: 0x8 (8)
  ULONG PoisonedTb;         // offset: 0x10 (16)
  volatile LONG InDebugger; // offset: 0x14 (20)
  VOID *volatile Pfns[32];  // offset: 0x18 (24)
};

// 0x68 (104) bytes
struct _MI_PARTITION_ZEROING {
  struct _KEVENT PageEvent;                          // offset: 0x0 (0)
  UCHAR ThreadActive;                                // offset: 0x18 (24)
  LONG ZeroFreePageSlistMinimum;                     // offset: 0x1c (28)
  struct _MMPTE *FirstReservedZeroingPte;            // offset: 0x20 (32)
  struct _WORK_QUEUE_ITEM RebalanceZeroFreeWorkItem; // offset: 0x28 (40)
  volatile LONG ThreadCount;                         // offset: 0x48 (72)
  struct _KGATE Gate;                                // offset: 0x50 (80)
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
      ULONG MinimumVector;               // offset: 0x0 (0)
      ULONG MaximumVector;               // offset: 0x4 (4)
      USHORT AffinityPolicy;             // offset: 0x8 (8)
      USHORT Group;                      // offset: 0xa (10)
      enum _IRQ_PRIORITY PriorityPolicy; // offset: 0xc (12)
      ULONGLONG TargetedProcessors;      // offset: 0x10 (16)
    } Interrupt;                         // offset: 0x8 (8)
    struct {
      ULONG MinimumChannel; // offset: 0x0 (0)
      ULONG MaximumChannel; // offset: 0x4 (4)
    } Dma;                  // offset: 0x8 (8)
    struct {
      ULONG RequestLine;   // offset: 0x0 (0)
      ULONG Reserved;      // offset: 0x4 (4)
      ULONG Channel;       // offset: 0x8 (8)
      ULONG TransferWidth; // offset: 0xc (12)
    } DmaV3;               // offset: 0x8 (8)
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
    struct {
      ULONG Length40;                      // offset: 0x0 (0)
      ULONG Alignment40;                   // offset: 0x4 (4)
      union _LARGE_INTEGER MinimumAddress; // offset: 0x8 (8)
      union _LARGE_INTEGER MaximumAddress; // offset: 0x10 (16)
    } Memory40;                            // offset: 0x8 (8)
    struct {
      ULONG Length48;                      // offset: 0x0 (0)
      ULONG Alignment48;                   // offset: 0x4 (4)
      union _LARGE_INTEGER MinimumAddress; // offset: 0x8 (8)
      union _LARGE_INTEGER MaximumAddress; // offset: 0x10 (16)
    } Memory48;                            // offset: 0x8 (8)
    struct {
      ULONG Length64;                      // offset: 0x0 (0)
      ULONG Alignment64;                   // offset: 0x4 (4)
      union _LARGE_INTEGER MinimumAddress; // offset: 0x8 (8)
      union _LARGE_INTEGER MaximumAddress; // offset: 0x10 (16)
    } Memory64;                            // offset: 0x8 (8)
    struct {
      UCHAR Class;      // offset: 0x0 (0)
      UCHAR Type;       // offset: 0x1 (1)
      UCHAR Reserved1;  // offset: 0x2 (2)
      UCHAR Reserved2;  // offset: 0x3 (3)
      ULONG IdLowPart;  // offset: 0x4 (4)
      ULONG IdHighPart; // offset: 0x8 (8)
    } Connection;       // offset: 0x8 (8)

  } u; // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _ARBITER_QUERY_CONFLICT_PARAMETERS {
  struct _DEVICE_OBJECT *PhysicalDeviceObject;         // offset: 0x0 (0)
  struct _IO_RESOURCE_DESCRIPTOR *ConflictingResource; // offset: 0x8 (8)
  ULONG *ConflictCount;                                // offset: 0x10 (16)
  struct _ARBITER_CONFLICT_INFO **Conflicts;           // offset: 0x18 (24)
};

// 0x20 (32) bytes
struct _ARBITER_PARAMETERS {
  union {
    struct _ARBITER_TEST_ALLOCATION_PARAMETERS
        TestAllocation; // offset: 0x0 (0)
    struct _ARBITER_RETEST_ALLOCATION_PARAMETERS
        RetestAllocation; // offset: 0x0 (0)
    struct _ARBITER_BOOT_ALLOCATION_PARAMETERS
        BootAllocation; // offset: 0x0 (0)
    struct _ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS
        QueryAllocatedResources;                             // offset: 0x0 (0)
    struct _ARBITER_QUERY_CONFLICT_PARAMETERS QueryConflict; // offset: 0x0 (0)
    struct _ARBITER_QUERY_ARBITRATE_PARAMETERS
        QueryArbitrate;                                  // offset: 0x0 (0)
    struct _ARBITER_ADD_RESERVED_PARAMETERS AddReserved; // offset: 0x0 (0)

  } Parameters; // offset: 0x0 (0)
};

// 0x30 (48) bytes
struct _ARBITER_INTERFACE {
  USHORT Size;                              // offset: 0x0 (0)
  USHORT Version;                           // offset: 0x2 (2)
  VOID *Context;                            // offset: 0x8 (8)
  VOID (*InterfaceReference)(VOID *arg1);   // offset: 0x10 (16)
  VOID (*InterfaceDereference)(VOID *arg1); // offset: 0x18 (24)
  LONG(*ArbiterHandler)
  (VOID *arg1, enum _ARBITER_ACTION arg2,
   struct _ARBITER_PARAMETERS *arg3); // offset: 0x20 (32)
  ULONG Flags;                        // offset: 0x28 (40)
};

// 0x70 (112) bytes
struct _PI_RESOURCE_ARBITER_ENTRY {
  struct _LIST_ENTRY DeviceArbiterList;        // offset: 0x0 (0)
  UCHAR ResourceType;                          // offset: 0x10 (16)
  struct _ARBITER_INTERFACE *ArbiterInterface; // offset: 0x18 (24)
  struct _DEVICE_NODE *DeviceNode;             // offset: 0x20 (32)
  struct _LIST_ENTRY ResourceList;             // offset: 0x28 (40)
  struct _LIST_ENTRY BestResourceList;         // offset: 0x38 (56)
  struct _LIST_ENTRY BestConfig;               // offset: 0x48 (72)
  struct _LIST_ENTRY ActiveArbiterList;        // offset: 0x58 (88)
  UCHAR State;                                 // offset: 0x68 (104)
  UCHAR ResourcesChanged;                      // offset: 0x69 (105)
};

// 0x40 (64) bytes
struct _ARBITER_ALTERNATIVE {
  ULONGLONG Minimum;                          // offset: 0x0 (0)
  ULONGLONG Maximum;                          // offset: 0x8 (8)
  ULONGLONG Length;                           // offset: 0x10 (16)
  ULONGLONG Alignment;                        // offset: 0x18 (24)
  LONG Priority;                              // offset: 0x20 (32)
  ULONG Flags;                                // offset: 0x24 (36)
  struct _IO_RESOURCE_DESCRIPTOR *Descriptor; // offset: 0x28 (40)
  ULONG Reserved[3];                          // offset: 0x30 (48)
};

// 0x60 (96) bytes
struct _ARBITER_LIST_ENTRY {
  struct _LIST_ENTRY ListEntry;                        // offset: 0x0 (0)
  ULONG AlternativeCount;                              // offset: 0x10 (16)
  struct _IO_RESOURCE_DESCRIPTOR *Alternatives;        // offset: 0x18 (24)
  struct _DEVICE_OBJECT *PhysicalDeviceObject;         // offset: 0x20 (32)
  enum _ARBITER_REQUEST_SOURCE RequestSource;          // offset: 0x28 (40)
  ULONG Flags;                                         // offset: 0x2c (44)
  LONGLONG WorkSpace;                                  // offset: 0x30 (48)
  enum _INTERFACE_TYPE InterfaceType;                  // offset: 0x38 (56)
  ULONG SlotNumber;                                    // offset: 0x3c (60)
  ULONG BusNumber;                                     // offset: 0x40 (64)
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *Assignment;  // offset: 0x48 (72)
  struct _IO_RESOURCE_DESCRIPTOR *SelectedAlternative; // offset: 0x50 (80)
  enum _ARBITER_RESULT Result;                         // offset: 0x58 (88)
};

// 0x50 (80) bytes
struct _ARBITER_ALLOCATION_STATE {
  ULONGLONG Start;                                 // offset: 0x0 (0)
  ULONGLONG End;                                   // offset: 0x8 (8)
  ULONGLONG CurrentMinimum;                        // offset: 0x10 (16)
  ULONGLONG CurrentMaximum;                        // offset: 0x18 (24)
  struct _ARBITER_LIST_ENTRY *Entry;               // offset: 0x20 (32)
  struct _ARBITER_ALTERNATIVE *CurrentAlternative; // offset: 0x28 (40)
  ULONG AlternativeCount;                          // offset: 0x30 (48)
  struct _ARBITER_ALTERNATIVE *Alternatives;       // offset: 0x38 (56)
  USHORT Flags;                                    // offset: 0x40 (64)
  UCHAR RangeAttributes;                           // offset: 0x42 (66)
  UCHAR RangeAvailableAttributes;                  // offset: 0x43 (67)
  ULONGLONG WorkSpace;                             // offset: 0x48 (72)
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

// 0x40 (64) bytes
struct _PNP_RESOURCE_REQUEST {
  struct _DEVICE_OBJECT *PhysicalDevice;       // offset: 0x0 (0)
  ULONG Flags;                                 // offset: 0x8 (8)
  enum _ARBITER_REQUEST_SOURCE AllocationType; // offset: 0xc (12)
  ULONG Priority;                              // offset: 0x10 (16)
  ULONG Position;                              // offset: 0x14 (20)
  struct _IO_RESOURCE_REQUIREMENTS_LIST
      *ResourceRequirements;                              // offset: 0x18 (24)
  VOID *ReqList;                                          // offset: 0x20 (32)
  struct _CM_RESOURCE_LIST *ResourceAssignment;           // offset: 0x28 (40)
  struct _CM_RESOURCE_LIST *TranslatedResourceAssignment; // offset: 0x30 (48)
  LONG Status;                                            // offset: 0x38 (56)
};

// 0x8 (8) bytes
struct _MI_VAD_SEQUENTIAL_INFO {
  ULONGLONG Length : 12; // offset: 0x0 (0)
  ULONGLONG Vpn : 52;    // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _MMWSLE_FREE_ENTRY {
  ULONGLONG MustBeZero : 1;    // offset: 0x0 (0)
  ULONGLONG PreviousFree : 27; // offset: 0x0 (0)
  ULONGLONG NextFree : 36;     // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _MMWSLENTRY {
  ULONGLONG Valid : 1;              // offset: 0x0 (0)
  ULONGLONG Spare : 1;              // offset: 0x0 (0)
  ULONGLONG Hashed : 1;             // offset: 0x0 (0)
  ULONGLONG Direct : 1;             // offset: 0x0 (0)
  ULONGLONG Protection : 5;         // offset: 0x0 (0)
  ULONGLONG Age : 3;                // offset: 0x0 (0)
  ULONGLONG VirtualPageNumber : 36; // offset: 0x0 (0)
  ULONGLONG HighActiveFlink : 4;    // offset: 0x0 (0)
  ULONGLONG HighActiveBlink : 4;    // offset: 0x0 (0)
  ULONGLONG Unused : 8;             // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _EXHANDLE {
  union {
    struct {
      ULONG TagBits : 2; // offset: 0x0 (0)
      ULONG Index : 30;  // offset: 0x0 (0)
    };
    VOID *GenericHandleOverlay; // offset: 0x0 (0)
    ULONGLONG Value;            // offset: 0x0 (0)
  };
};

// 0x58 (88) bytes
struct _DYNAMIC_FUNCTION_TABLE {
  struct _LIST_ENTRY ListEntry;                        // offset: 0x0 (0)
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *FunctionTable; // offset: 0x10 (16)
  union _LARGE_INTEGER TimeStamp;                      // offset: 0x18 (24)
  ULONGLONG MinimumAddress;                            // offset: 0x20 (32)
  ULONGLONG MaximumAddress;                            // offset: 0x28 (40)
  ULONGLONG BaseAddress;                               // offset: 0x30 (48)
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *(*Callback)(
      ULONGLONG arg1, VOID *arg2); // offset: 0x38 (56)
  VOID *Context;                   // offset: 0x40 (64)
  USHORT *OutOfProcessCallbackDll; // offset: 0x48 (72)
  enum _FUNCTION_TABLE_TYPE Type;  // offset: 0x50 (80)
  ULONG EntryCount;                // offset: 0x54 (84)
};

// 0x18 (24) bytes
struct _INVERTED_FUNCTION_TABLE_ENTRY {
  union {
    struct _IMAGE_RUNTIME_FUNCTION_ENTRY *FunctionTable; // offset: 0x0 (0)
    struct _DYNAMIC_FUNCTION_TABLE *DynamicTable;        // offset: 0x0 (0)
  };
  VOID *ImageBase;   // offset: 0x8 (8)
  ULONG SizeOfImage; // offset: 0x10 (16)
  ULONG SizeOfTable; // offset: 0x14 (20)
};

// 0x1810 (6160) bytes
struct _INVERTED_FUNCTION_TABLE {
  ULONG CurrentSize;                                     // offset: 0x0 (0)
  ULONG MaximumSize;                                     // offset: 0x4 (4)
  volatile ULONG Epoch;                                  // offset: 0x8 (8)
  UCHAR Overflow;                                        // offset: 0xc (12)
  struct _INVERTED_FUNCTION_TABLE_ENTRY TableEntry[256]; // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _MMWSLE {
  union {
    VOID *VirtualAddress;         // offset: 0x0 (0)
    ULONGLONG Long;               // offset: 0x0 (0)
    struct _MMWSLENTRY e1;        // offset: 0x0 (0)
    struct _MMWSLE_FREE_ENTRY e2; // offset: 0x0 (0)

  } u1; // offset: 0x0 (0)
};

// 0x10 (16) bytes
union _HANDLE_TABLE_ENTRY {
  volatile LONGLONG VolatileLowValue; // offset: 0x0 (0)
  LONGLONG LowValue;                  // offset: 0x0 (0)
  struct {
    struct _HANDLE_TABLE_ENTRY_INFO *volatile InfoTable; // offset: 0x0 (0)
    LONGLONG HighValue;                                  // offset: 0x8 (8)
    union _HANDLE_TABLE_ENTRY *NextFreeHandleEntry;      // offset: 0x8 (8)
    struct _EXHANDLE LeafHandleValue;                    // offset: 0x8 (8)
  };
  LONGLONG RefCountField;   // offset: 0x0 (0)
  ULONGLONG Unlocked : 1;   // offset: 0x0 (0)
  ULONGLONG RefCnt : 16;    // offset: 0x0 (0)
  ULONGLONG Attributes : 3; // offset: 0x0 (0)
  struct {
    ULONGLONG ObjectPointerBits : 44; // offset: 0x0 (0)
    ULONG GrantedAccessBits : 25;     // offset: 0x8 (8)
    ULONG NoRightsUpgrade : 1;        // offset: 0x8 (8)
    ULONG Spare1 : 6;                 // offset: 0x8 (8)
  };
  ULONG Spare2; // offset: 0xc (12)
};

// 0x10 (16) bytes
struct _MI_ACTIVE_WSLE_LISTHEAD {
  ULONGLONG Flink; // offset: 0x0 (0)
  ULONGLONG Blink; // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _MMWSLE_HASH {
  ULONGLONG Index; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _MMWSLE_NONDIRECT_HASH {
  VOID *Key;       // offset: 0x0 (0)
  ULONGLONG Index; // offset: 0x8 (8)
};

// 0xf8 (248) bytes
struct _MMSUPPORT {
  volatile LONG WorkingSetLock;                // offset: 0x0 (0)
  struct _KGATE *ExitOutswapGate;              // offset: 0x8 (8)
  VOID *AccessLog;                             // offset: 0x10 (16)
  struct _LIST_ENTRY WorkingSetExpansionLinks; // offset: 0x18 (24)
  ULONGLONG AgeDistribution[7];                // offset: 0x28 (40)
  ULONGLONG MinimumWorkingSetSize;             // offset: 0x60 (96)
  ULONGLONG WorkingSetLeafSize;                // offset: 0x68 (104)
  ULONGLONG WorkingSetLeafPrivateSize;         // offset: 0x70 (112)
  ULONGLONG WorkingSetSize;                    // offset: 0x78 (120)
  ULONGLONG WorkingSetPrivateSize;             // offset: 0x80 (128)
  ULONGLONG MaximumWorkingSetSize;             // offset: 0x88 (136)
  ULONGLONG ChargedWslePages;                  // offset: 0x90 (144)
  ULONGLONG ActualWslePages;                   // offset: 0x98 (152)
  ULONGLONG WorkingSetSizeOverhead;            // offset: 0xa0 (160)
  ULONGLONG PeakWorkingSetSize;                // offset: 0xa8 (168)
  ULONG HardFaultCount;                        // offset: 0xb0 (176)
  USHORT PartitionId;                          // offset: 0xb4 (180)
  USHORT Pad0;                                 // offset: 0xb6 (182)
  struct _MMWSL *VmWorkingSetList;             // offset: 0xb8 (184)
  USHORT NextPageColor;                        // offset: 0xc0 (192)
  USHORT LastTrimStamp;                        // offset: 0xc2 (194)
  ULONG PageFaultCount;                        // offset: 0xc4 (196)
  ULONGLONG TrimmedPageCount;                  // offset: 0xc8 (200)
  ULONGLONG Reserved0;                         // offset: 0xd0 (208)
  struct _MMSUPPORT_FLAGS Flags;               // offset: 0xd8 (216)
  ULONGLONG ReleasedCommitDebt;                // offset: 0xe0 (224)
  VOID *WsSwapSupport;                         // offset: 0xe8 (232)
  VOID *CommitReAcquireFailSupport;            // offset: 0xf0 (240)
};

// 0xd8 (216) bytes
struct _FILE_OBJECT {
  SHORT Type;                                            // offset: 0x0 (0)
  SHORT Size;                                            // offset: 0x2 (2)
  struct _DEVICE_OBJECT *DeviceObject;                   // offset: 0x8 (8)
  struct _VPB *Vpb;                                      // offset: 0x10 (16)
  VOID *FsContext;                                       // offset: 0x18 (24)
  VOID *FsContext2;                                      // offset: 0x20 (32)
  struct _SECTION_OBJECT_POINTERS *SectionObjectPointer; // offset: 0x28 (40)
  VOID *PrivateCacheMap;                                 // offset: 0x30 (48)
  LONG FinalStatus;                                      // offset: 0x38 (56)
  struct _FILE_OBJECT *RelatedFileObject;                // offset: 0x40 (64)
  UCHAR LockOperation;                                   // offset: 0x48 (72)
  UCHAR DeletePending;                                   // offset: 0x49 (73)
  UCHAR ReadAccess;                                      // offset: 0x4a (74)
  UCHAR WriteAccess;                                     // offset: 0x4b (75)
  UCHAR DeleteAccess;                                    // offset: 0x4c (76)
  UCHAR SharedRead;                                      // offset: 0x4d (77)
  UCHAR SharedWrite;                                     // offset: 0x4e (78)
  UCHAR SharedDelete;                                    // offset: 0x4f (79)
  ULONG Flags;                                           // offset: 0x50 (80)
  struct _UNICODE_STRING FileName;                       // offset: 0x58 (88)
  union _LARGE_INTEGER CurrentByteOffset;                // offset: 0x68 (104)
  ULONG Waiters;                                         // offset: 0x70 (112)
  ULONG Busy;                                            // offset: 0x74 (116)
  VOID *LastLock;                                        // offset: 0x78 (120)
  struct _KEVENT Lock;                                   // offset: 0x80 (128)
  struct _KEVENT Event;                                  // offset: 0x98 (152)
  struct _IO_COMPLETION_CONTEXT *CompletionContext;      // offset: 0xb0 (176)
  ULONGLONG IrpListLock;                                 // offset: 0xb8 (184)
  struct _LIST_ENTRY IrpList;                            // offset: 0xc0 (192)
  VOID *FileObjectExtension;                             // offset: 0xd0 (208)
};

// 0x50 (80) bytes
struct _IO_MINI_COMPLETION_PACKET_USER {
  struct _LIST_ENTRY ListEntry;  // offset: 0x0 (0)
  ULONG PacketType;              // offset: 0x10 (16)
  VOID *KeyContext;              // offset: 0x18 (24)
  VOID *ApcContext;              // offset: 0x20 (32)
  LONG IoStatus;                 // offset: 0x28 (40)
  ULONGLONG IoStatusInformation; // offset: 0x30 (48)
  VOID(*MiniPacketCallback)
  (struct _IO_MINI_COMPLETION_PACKET_USER *arg1,
   VOID *arg2);    // offset: 0x38 (56)
  VOID *Context;   // offset: 0x40 (64)
  UCHAR Allocated; // offset: 0x48 (72)
};

// 0x18 (24) bytes
struct _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY {
  struct _SINGLE_LIST_ENTRY ListEntry;                 // offset: 0x0 (0)
  struct _IO_MINI_COMPLETION_PACKET_USER *Packet;      // offset: 0x8 (8)
  struct _ALPC_COMPLETION_PACKET_LOOKASIDE *Lookaside; // offset: 0x10 (16)
};

// 0x50 (80) bytes
struct _ALPC_COMPLETION_PACKET_LOOKASIDE {
  ULONGLONG Lock;                                          // offset: 0x0 (0)
  ULONG Size;                                              // offset: 0x8 (8)
  ULONG ActiveCount;                                       // offset: 0xc (12)
  ULONG PendingNullCount;                                  // offset: 0x10 (16)
  ULONG PendingCheckCompletionListCount;                   // offset: 0x14 (20)
  ULONG PendingDelete;                                     // offset: 0x18 (24)
  struct _SINGLE_LIST_ENTRY FreeListHead;                  // offset: 0x20 (32)
  VOID *CompletionPort;                                    // offset: 0x28 (40)
  VOID *CompletionKey;                                     // offset: 0x30 (48)
  struct _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY Entry[1]; // offset: 0x38 (56)
};

// 0x10 (16) bytes
struct _OWNER_ENTRY {
  ULONGLONG OwnerThread; // offset: 0x0 (0)
  union {
    struct {
      ULONG IoPriorityBoosted : 1; // offset: 0x8 (8)
      ULONG OwnerReferenced : 1;   // offset: 0x8 (8)
      ULONG OwnerCount : 30;       // offset: 0x8 (8)
    };
    ULONG TableSize; // offset: 0x8 (8)
  };
};

// 0x50 (80) bytes
struct _EPROCESS_VALUES {
  ULONGLONG KernelTime;         // offset: 0x0 (0)
  ULONGLONG UserTime;           // offset: 0x8 (8)
  ULONGLONG CycleTime;          // offset: 0x10 (16)
  ULONGLONG ContextSwitches;    // offset: 0x18 (24)
  LONGLONG ReadOperationCount;  // offset: 0x20 (32)
  LONGLONG WriteOperationCount; // offset: 0x28 (40)
  LONGLONG OtherOperationCount; // offset: 0x30 (48)
  LONGLONG ReadTransferCount;   // offset: 0x38 (56)
  LONGLONG WriteTransferCount;  // offset: 0x40 (64)
  LONGLONG OtherTransferCount;  // offset: 0x48 (72)
};

// 0x28 (40) bytes
struct _PROCESS_DISK_COUNTERS {
  ULONGLONG BytesRead;           // offset: 0x0 (0)
  ULONGLONG BytesWritten;        // offset: 0x8 (8)
  ULONGLONG ReadOperationCount;  // offset: 0x10 (16)
  ULONGLONG WriteOperationCount; // offset: 0x18 (24)
  ULONGLONG FlushOperationCount; // offset: 0x20 (32)
};

// 0x68 (104) bytes
struct _ERESOURCE {
  struct _LIST_ENTRY SystemResourcesList; // offset: 0x0 (0)
  struct _OWNER_ENTRY *OwnerTable;        // offset: 0x10 (16)
  SHORT ActiveCount;                      // offset: 0x18 (24)
  union {
    USHORT Flag; // offset: 0x1a (26)
    struct {
      UCHAR ReservedLowFlags; // offset: 0x1a (26)
      UCHAR WaiterPriority;   // offset: 0x1b (27)
    };
  };
  struct _KWAIT_CHAIN SharedWaiters; // offset: 0x20 (32)
  struct _KEVENT *ExclusiveWaiters;  // offset: 0x28 (40)
  struct _OWNER_ENTRY OwnerEntry;    // offset: 0x30 (48)
  ULONG ActiveEntries;               // offset: 0x40 (64)
  ULONG ContentionCount;             // offset: 0x44 (68)
  ULONG NumberOfSharedWaiters;       // offset: 0x48 (72)
  ULONG NumberOfExclusiveWaiters;    // offset: 0x4c (76)
  VOID *Reserved2;                   // offset: 0x50 (80)
  union {
    VOID *Address;                   // offset: 0x58 (88)
    ULONGLONG CreatorBackTraceIndex; // offset: 0x58 (88)
  };
  ULONGLONG SpinLock; // offset: 0x60 (96)
};

// 0x28 (40) bytes
union _FS_FILTER_PARAMETERS {
  struct {
    union _LARGE_INTEGER *EndingOffset;    // offset: 0x0 (0)
    struct _ERESOURCE **ResourceToRelease; // offset: 0x8 (8)
  } AcquireForModifiedPageWriter;          // offset: 0x0 (0)
  struct {
    struct _ERESOURCE *ResourceToRelease; // offset: 0x0 (0)
  } ReleaseForModifiedPageWriter;         // offset: 0x0 (0)
  struct {
    enum _FS_FILTER_SECTION_SYNC_TYPE SyncType;               // offset: 0x0 (0)
    ULONG PageProtection;                                     // offset: 0x4 (4)
    struct _FS_FILTER_SECTION_SYNC_OUTPUT *OutputInformation; // offset: 0x8 (8)
  } AcquireForSectionSynchronization;                         // offset: 0x0 (0)
  struct {
    enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE
        NotificationType;   // offset: 0x0 (0)
    UCHAR SafeToRecurse;    // offset: 0x8 (8)
  } NotifyStreamFileObject; // offset: 0x0 (0)
  struct {
    VOID *Argument1; // offset: 0x0 (0)
    VOID *Argument2; // offset: 0x8 (8)
    VOID *Argument3; // offset: 0x10 (16)
    VOID *Argument4; // offset: 0x18 (24)
    VOID *Argument5; // offset: 0x20 (32)
  } Others;          // offset: 0x0 (0)
};

// 0x40 (64) bytes
struct _FS_FILTER_CALLBACK_DATA {
  ULONG SizeOfFsFilterCallbackData;       // offset: 0x0 (0)
  UCHAR Operation;                        // offset: 0x4 (4)
  UCHAR Reserved;                         // offset: 0x5 (5)
  struct _DEVICE_OBJECT *DeviceObject;    // offset: 0x8 (8)
  struct _FILE_OBJECT *FileObject;        // offset: 0x10 (16)
  union _FS_FILTER_PARAMETERS Parameters; // offset: 0x18 (24)
};

// 0x68 (104) bytes
struct _FS_FILTER_CALLBACKS {
  ULONG SizeOfFsFilterCallbacks; // offset: 0x0 (0)
  ULONG Reserved;                // offset: 0x4 (4)
  LONG(*PreAcquireForSectionSynchronization)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, VOID **arg2); // offset: 0x8 (8)
  VOID(*PostAcquireForSectionSynchronization)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, LONG arg2,
   VOID *arg3); // offset: 0x10 (16)
  LONG(*PreReleaseForSectionSynchronization)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, VOID **arg2); // offset: 0x18 (24)
  VOID(*PostReleaseForSectionSynchronization)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, LONG arg2,
   VOID *arg3); // offset: 0x20 (32)
  LONG(*PreAcquireForCcFlush)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, VOID **arg2); // offset: 0x28 (40)
  VOID(*PostAcquireForCcFlush)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, LONG arg2,
   VOID *arg3); // offset: 0x30 (48)
  LONG(*PreReleaseForCcFlush)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, VOID **arg2); // offset: 0x38 (56)
  VOID(*PostReleaseForCcFlush)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, LONG arg2,
   VOID *arg3); // offset: 0x40 (64)
  LONG(*PreAcquireForModifiedPageWriter)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, VOID **arg2); // offset: 0x48 (72)
  VOID(*PostAcquireForModifiedPageWriter)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, LONG arg2,
   VOID *arg3); // offset: 0x50 (80)
  LONG(*PreReleaseForModifiedPageWriter)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, VOID **arg2); // offset: 0x58 (88)
  VOID(*PostReleaseForModifiedPageWriter)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, LONG arg2,
   VOID *arg3); // offset: 0x60 (96)
};

// 0x28 (40) bytes
struct _KDEVICE_QUEUE {
  SHORT Type;                        // offset: 0x0 (0)
  SHORT Size;                        // offset: 0x2 (2)
  struct _LIST_ENTRY DeviceListHead; // offset: 0x8 (8)
  ULONGLONG Lock;                    // offset: 0x18 (24)
  union {
    UCHAR Busy; // offset: 0x20 (32)
    struct {
      LONGLONG Reserved : 8; // offset: 0x20 (32)
      LONGLONG Hint : 56;    // offset: 0x20 (32)
    };
  };
};

// 0x18 (24) bytes
struct _PS_PROPERTY_SET {
  struct _LIST_ENTRY ListHead; // offset: 0x0 (0)
  ULONGLONG Lock;              // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _EX_RUNDOWN_REF {
  union {
    ULONGLONG Count; // offset: 0x0 (0)
    VOID *Ptr;       // offset: 0x0 (0)
  };
};

// 0x18 (24) bytes
struct _EX_RUNDOWN_REF_CACHE_AWARE {
  struct _EX_RUNDOWN_REF *RunRefs; // offset: 0x0 (0)
  VOID *PoolToFree;                // offset: 0x8 (8)
  ULONG RunRefSize;                // offset: 0x10 (16)
  ULONG Number;                    // offset: 0x14 (20)
};

// 0x28 (40) bytes
struct _HMAP_ENTRY {
  ULONGLONG BlockOffset;                      // offset: 0x0 (0)
  ULONGLONG PermanentBinAddress;              // offset: 0x8 (8)
  ULONGLONG TemporaryBinAddress;              // offset: 0x10 (16)
  struct _EX_RUNDOWN_REF TemporaryBinRundown; // offset: 0x18 (24)
  ULONG MemAlloc;                             // offset: 0x20 (32)
};

// 0x5000 (20480) bytes
struct _HMAP_TABLE {
  struct _HMAP_ENTRY Table[512]; // offset: 0x0 (0)
};

// 0x2000 (8192) bytes
struct _HMAP_DIRECTORY {
  struct _HMAP_TABLE *Directory[1024]; // offset: 0x0 (0)
};

// 0x278 (632) bytes
struct _DUAL {
  ULONG Length;                         // offset: 0x0 (0)
  struct _HMAP_DIRECTORY *Map;          // offset: 0x8 (8)
  struct _HMAP_TABLE *SmallDir;         // offset: 0x10 (16)
  ULONG Guard;                          // offset: 0x18 (24)
  struct _FREE_DISPLAY FreeDisplay[24]; // offset: 0x20 (32)
  struct _LIST_ENTRY FreeBins;          // offset: 0x260 (608)
  ULONG FreeSummary;                    // offset: 0x270 (624)
};

// 0x8 (8) bytes
union _PS_CLIENT_SECURITY_CONTEXT {
  ULONGLONG ImpersonationData;      // offset: 0x0 (0)
  VOID *ImpersonationToken;         // offset: 0x0 (0)
  ULONGLONG ImpersonationLevel : 2; // offset: 0x0 (0)
  ULONGLONG EffectiveOnly : 1;      // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _EX_PUSH_LOCK {
  union {
    struct {
      ULONGLONG Locked : 1;         // offset: 0x0 (0)
      ULONGLONG Waiting : 1;        // offset: 0x0 (0)
      ULONGLONG Waking : 1;         // offset: 0x0 (0)
      ULONGLONG MultipleShared : 1; // offset: 0x0 (0)
      ULONGLONG Shared : 60;        // offset: 0x0 (0)
    };
    ULONGLONG Value; // offset: 0x0 (0)
    VOID *Ptr;       // offset: 0x0 (0)
  };
};

// 0x28 (40) bytes
struct _RTL_ATOM_TABLE {
  ULONG Signature;                          // offset: 0x0 (0)
  volatile LONG ReferenceCount;             // offset: 0x4 (4)
  struct _EX_PUSH_LOCK PushLock;            // offset: 0x8 (8)
  struct _HANDLE_TABLE *ExHandleTable;      // offset: 0x10 (16)
  ULONG Flags;                              // offset: 0x18 (24)
  ULONG NumberOfBuckets;                    // offset: 0x1c (28)
  struct _RTL_ATOM_TABLE_ENTRY *Buckets[1]; // offset: 0x20 (32)
};

// 0xc0 (192) bytes
struct _MI_SYSTEM_IMAGE_STATE {
  volatile LONG FixupLock;                     // offset: 0x0 (0)
  struct _LIST_ENTRY FixupList;                // offset: 0x8 (8)
  struct _KMUTANT LoadLock;                    // offset: 0x18 (24)
  UCHAR FirstLoadEver;                         // offset: 0x50 (80)
  UCHAR LargePageAll;                          // offset: 0x51 (81)
  ULONGLONG LastPage;                          // offset: 0x58 (88)
  struct _LIST_ENTRY LargePageList;            // offset: 0x60 (96)
  struct _KLDR_DATA_TABLE_ENTRY *BeingDeleted; // offset: 0x70 (112)
  struct _EX_PUSH_LOCK MappingRangesPushLock;  // offset: 0x78 (120)
  struct _MI_DRIVER_VA *MappingRanges[2];      // offset: 0x80 (128)
  ULONGLONG PageCount;                         // offset: 0x90 (144)
  struct _MM_SYSTEM_PAGE_COUNTS PageCounts;    // offset: 0x98 (152)
  struct _EX_PUSH_LOCK CollidedLock;           // offset: 0xa8 (168)
  struct _MMPTE *ErrataPte;                    // offset: 0xb0 (176)
  ULONG ErrataPteMapped;                       // offset: 0xb8 (184)
};

// 0x30 (48) bytes
struct _MAPPED_FILE_SEGMENT {
  struct _CONTROL_AREA *ControlArea;  // offset: 0x0 (0)
  ULONG TotalNumberOfPtes;            // offset: 0x8 (8)
  struct _SEGMENT_FLAGS SegmentFlags; // offset: 0xc (12)
  ULONGLONG NumberOfCommittedPages;   // offset: 0x10 (16)
  ULONGLONG SizeOfSegment;            // offset: 0x18 (24)
  union {
    struct _MMEXTEND_INFO *ExtendInfo; // offset: 0x20 (32)
    VOID *BasedAddress;                // offset: 0x20 (32)
  };
  struct _EX_PUSH_LOCK SegmentLock; // offset: 0x28 (40)
};

// 0x28 (40) bytes
struct _SEP_LOWBOX_NUMBER_MAPPING {
  struct _EX_PUSH_LOCK Lock;                 // offset: 0x0 (0)
  struct _RTL_BITMAP Bitmap;                 // offset: 0x8 (8)
  struct _RTL_DYNAMIC_HASH_TABLE *HashTable; // offset: 0x18 (24)
  UCHAR Active;                              // offset: 0x20 (32)
};

// 0x40 (64) bytes
struct _SESSION_LOWBOX_MAP {
  struct _LIST_ENTRY ListEntry;                // offset: 0x0 (0)
  ULONG SessionId;                             // offset: 0x10 (16)
  struct _SEP_LOWBOX_NUMBER_MAPPING LowboxMap; // offset: 0x18 (24)
};

// 0x18 (24) bytes
struct _CM_KEY_HASH_TABLE_ENTRY {
  struct _EX_PUSH_LOCK Lock;  // offset: 0x0 (0)
  struct _KTHREAD *Owner;     // offset: 0x8 (8)
  struct _CM_KEY_HASH *Entry; // offset: 0x10 (16)
};

// 0x260 (608) bytes
struct _OBJECT_NAMESPACE_LOOKUPTABLE {
  struct _LIST_ENTRY HashBuckets[37]; // offset: 0x0 (0)
  struct _EX_PUSH_LOCK Lock;          // offset: 0x250 (592)
  ULONG NumberOfPrivateSpaces;        // offset: 0x258 (600)
};

// 0x2e0 (736) bytes
struct _OBP_SILODRIVERSTATE {
  struct _DEVICE_MAP *SystemDeviceMap;                      // offset: 0x0 (0)
  struct _OBP_SYSTEM_DOS_DEVICE_STATE SystemDosDeviceState; // offset: 0x8 (8)
  struct _EX_PUSH_LOCK DeviceMapLock; // offset: 0x78 (120)
  struct _OBJECT_NAMESPACE_LOOKUPTABLE
      PrivateNamespaceLookupTable; // offset: 0x80 (128)
};

// 0x158 (344) bytes
struct _OBJECT_DIRECTORY {
  struct _OBJECT_DIRECTORY_ENTRY *HashBuckets[37]; // offset: 0x0 (0)
  struct _EX_PUSH_LOCK Lock;                       // offset: 0x128 (296)
  struct _DEVICE_MAP *DeviceMap;                   // offset: 0x130 (304)
  struct _OBJECT_DIRECTORY *ShadowDirectory;       // offset: 0x138 (312)
  ULONG SessionId;                                 // offset: 0x140 (320)
  VOID *NamespaceEntry;                            // offset: 0x148 (328)
  ULONG Flags;                                     // offset: 0x150 (336)
};

// 0x20 (32) bytes
struct _OB_HANDLE_REVOCATION_BLOCK {
  struct _LIST_ENTRY RevocationInfos; // offset: 0x0 (0)
  struct _EX_PUSH_LOCK Lock;          // offset: 0x10 (16)
  struct _EX_RUNDOWN_REF Rundown;     // offset: 0x18 (24)
};

// 0x20 (32) bytes
struct _OBJECT_HEADER_HANDLE_REVOCATION_INFO {
  struct _LIST_ENTRY ListEntry;                        // offset: 0x0 (0)
  struct _OB_HANDLE_REVOCATION_BLOCK *RevocationBlock; // offset: 0x10 (16)
  UCHAR Padding1[4];                                   // offset: 0x18 (24)
  UCHAR Padding2[4];                                   // offset: 0x1c (28)
};

// 0x10 (16) bytes
struct _SEP_LOWBOX_HANDLES_TABLE {
  struct _EX_PUSH_LOCK Lock;                 // offset: 0x0 (0)
  struct _RTL_DYNAMIC_HASH_TABLE *HashTable; // offset: 0x8 (8)
};

// 0xb0 (176) bytes
struct _SEP_LOGON_SESSION_REFERENCES {
  struct _SEP_LOGON_SESSION_REFERENCES *Next;          // offset: 0x0 (0)
  struct _LUID LogonId;                                // offset: 0x8 (8)
  struct _LUID BuddyLogonId;                           // offset: 0x10 (16)
  LONGLONG ReferenceCount;                             // offset: 0x18 (24)
  ULONG Flags;                                         // offset: 0x20 (32)
  struct _DEVICE_MAP *pDeviceMap;                      // offset: 0x28 (40)
  VOID *Token;                                         // offset: 0x30 (48)
  struct _UNICODE_STRING AccountName;                  // offset: 0x38 (56)
  struct _UNICODE_STRING AuthorityName;                // offset: 0x48 (72)
  struct _SEP_LOWBOX_HANDLES_TABLE LowBoxHandlesTable; // offset: 0x58 (88)
  struct _EX_PUSH_LOCK SharedDataLock;                 // offset: 0x68 (104)
  struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION
      *SharedClaimAttributes;                         // offset: 0x70 (112)
  struct _SEP_SID_VALUES_BLOCK *SharedSidValues;      // offset: 0x78 (120)
  struct _OB_HANDLE_REVOCATION_BLOCK RevocationBlock; // offset: 0x80 (128)
  struct _EJOB *ServerSilo;                           // offset: 0xa0 (160)
  struct _LUID SiblingAuthId;                         // offset: 0xa8 (168)
};

// 0x38 (56) bytes
struct _ETW_HASH_BUCKET {
  struct _LIST_ENTRY ListHead[3];  // offset: 0x0 (0)
  struct _EX_PUSH_LOCK BucketLock; // offset: 0x30 (48)
};

// 0x38 (56) bytes
struct _OBJECT_HEADER {
  LONGLONG PointerCount; // offset: 0x0 (0)
  union {
    LONGLONG HandleCount; // offset: 0x8 (8)
    VOID *NextToFree;     // offset: 0x8 (8)
  };
  struct _EX_PUSH_LOCK Lock; // offset: 0x10 (16)
  UCHAR TypeIndex;           // offset: 0x18 (24)
  union {
    UCHAR TraceFlags; // offset: 0x19 (25)
    struct {
      UCHAR DbgRefTrace : 1;       // offset: 0x19 (25)
      UCHAR DbgTracePermanent : 1; // offset: 0x19 (25)
    };
  };
  UCHAR InfoMask; // offset: 0x1a (26)
  union {
    UCHAR Flags; // offset: 0x1b (27)
    struct {
      UCHAR NewObject : 1;            // offset: 0x1b (27)
      UCHAR KernelObject : 1;         // offset: 0x1b (27)
      UCHAR KernelOnlyAccess : 1;     // offset: 0x1b (27)
      UCHAR ExclusiveObject : 1;      // offset: 0x1b (27)
      UCHAR PermanentObject : 1;      // offset: 0x1b (27)
      UCHAR DefaultSecurityQuota : 1; // offset: 0x1b (27)
      UCHAR SingleHandleEntry : 1;    // offset: 0x1b (27)
      UCHAR DeletedInline : 1;        // offset: 0x1b (27)
    };
  };
  ULONG Spare; // offset: 0x1c (28)
  union {
    struct _OBJECT_CREATE_INFORMATION *ObjectCreateInfo; // offset: 0x20 (32)
    VOID *QuotaBlockCharged;                             // offset: 0x20 (32)
  };
  VOID *SecurityDescriptor; // offset: 0x28 (40)
  struct _QUAD Body;        // offset: 0x30 (48)
};

// 0x28 (40) bytes
struct _OBJECT_REF_INFO {
  struct _OBJECT_HEADER *ObjectHeader;        // offset: 0x0 (0)
  VOID *NextRef;                              // offset: 0x8 (8)
  UCHAR ImageFileName[16];                    // offset: 0x10 (16)
  USHORT NextPos;                             // offset: 0x20 (32)
  USHORT MaxStacks;                           // offset: 0x22 (34)
  struct _OBJECT_REF_STACK_INFO StackInfo[0]; // offset: 0x24 (36)
};

// 0x110 (272) bytes
struct _DUMMY_FILE_OBJECT {
  struct _OBJECT_HEADER ObjectHeader; // offset: 0x0 (0)
  CHAR FileObjectBody[216];           // offset: 0x38 (56)
};

// 0xc0 (192) bytes
struct _OPEN_PACKET {
  SHORT Type;                      // offset: 0x0 (0)
  SHORT Size;                      // offset: 0x2 (2)
  struct _FILE_OBJECT *FileObject; // offset: 0x8 (8)
  LONG FinalStatus;                // offset: 0x10 (16)
  ULONGLONG Information;           // offset: 0x18 (24)
  ULONG ParseCheck;                // offset: 0x20 (32)
  union {
    struct _FILE_OBJECT *RelatedFileObject;        // offset: 0x28 (40)
    struct _DEVICE_OBJECT *ReferencedDeviceObject; // offset: 0x28 (40)
  };
  struct _OBJECT_ATTRIBUTES *OriginalAttributes;    // offset: 0x30 (48)
  union _LARGE_INTEGER AllocationSize;              // offset: 0x38 (56)
  ULONG CreateOptions;                              // offset: 0x40 (64)
  USHORT FileAttributes;                            // offset: 0x44 (68)
  USHORT ShareAccess;                               // offset: 0x46 (70)
  VOID *EaBuffer;                                   // offset: 0x48 (72)
  ULONG EaLength;                                   // offset: 0x50 (80)
  ULONG Options;                                    // offset: 0x54 (84)
  ULONG Disposition;                                // offset: 0x58 (88)
  struct _FILE_BASIC_INFORMATION *BasicInformation; // offset: 0x60 (96)
  struct _FILE_NETWORK_OPEN_INFORMATION
      *NetworkInformation;                              // offset: 0x68 (104)
  enum _CREATE_FILE_TYPE CreateFileType;                // offset: 0x70 (112)
  VOID *MailslotOrPipeParameters;                       // offset: 0x78 (120)
  UCHAR Override;                                       // offset: 0x80 (128)
  UCHAR QueryOnly;                                      // offset: 0x81 (129)
  UCHAR DeleteOnly;                                     // offset: 0x82 (130)
  UCHAR FullAttributes;                                 // offset: 0x83 (131)
  struct _DUMMY_FILE_OBJECT *LocalFileObject;           // offset: 0x88 (136)
  ULONG InternalFlags;                                  // offset: 0x90 (144)
  CHAR AccessMode;                                      // offset: 0x94 (148)
  struct _IO_DRIVER_CREATE_CONTEXT DriverCreateContext; // offset: 0x98 (152)
};

// 0x18 (24) bytes
struct _ALPC_HANDLE_TABLE {
  struct _ALPC_HANDLE_ENTRY *Handles; // offset: 0x0 (0)
  ULONG TotalHandles;                 // offset: 0x8 (8)
  ULONG Flags;                        // offset: 0xc (12)
  struct _EX_PUSH_LOCK Lock;          // offset: 0x10 (16)
};

// 0x30 (48) bytes
struct _BLOB {
  union {
    struct _LIST_ENTRY ResourceList;   // offset: 0x0 (0)
    struct _SLIST_ENTRY FreeListEntry; // offset: 0x0 (0)
  };
  union {
    struct {
      UCHAR ReferenceCache : 1; // offset: 0x0 (0)
      UCHAR Lookaside : 1;      // offset: 0x0 (0)
      UCHAR Initializing : 1;   // offset: 0x0 (0)
      UCHAR Deleted : 1;        // offset: 0x0 (0)
    } s1;                       // offset: 0x10 (16)
    UCHAR Flags;                // offset: 0x10 (16)

  } u1;                      // offset: 0x10 (16)
  UCHAR ResourceId;          // offset: 0x11 (17)
  SHORT CachedReferences;    // offset: 0x12 (18)
  LONGLONG ReferenceCount;   // offset: 0x18 (24)
  struct _EX_PUSH_LOCK Lock; // offset: 0x20 (32)
};

// 0x210 (528) bytes
struct _SHARED_CACHE_MAP {
  SHORT NodeTypeCode;                         // offset: 0x0 (0)
  SHORT NodeByteSize;                         // offset: 0x2 (2)
  ULONG OpenCount;                            // offset: 0x4 (4)
  union _LARGE_INTEGER FileSize;              // offset: 0x8 (8)
  struct _LIST_ENTRY BcbList;                 // offset: 0x10 (16)
  union _LARGE_INTEGER SectionSize;           // offset: 0x20 (32)
  union _LARGE_INTEGER ValidDataLength;       // offset: 0x28 (40)
  union _LARGE_INTEGER ValidDataGoal;         // offset: 0x30 (48)
  struct _VACB *InitialVacbs[4];              // offset: 0x38 (56)
  struct _VACB **Vacbs;                       // offset: 0x58 (88)
  struct _EX_FAST_REF FileObjectFastRef;      // offset: 0x60 (96)
  struct _EX_PUSH_LOCK VacbLock;              // offset: 0x68 (104)
  ULONG DirtyPages;                           // offset: 0x70 (112)
  struct _LIST_ENTRY LoggedStreamLinks;       // offset: 0x78 (120)
  struct _LIST_ENTRY SharedCacheMapLinks;     // offset: 0x88 (136)
  ULONG Flags;                                // offset: 0x98 (152)
  LONG Status;                                // offset: 0x9c (156)
  struct _MBCB *Mbcb;                         // offset: 0xa0 (160)
  VOID *Section;                              // offset: 0xa8 (168)
  struct _KEVENT *CreateEvent;                // offset: 0xb0 (176)
  struct _KEVENT *WaitOnActiveCount;          // offset: 0xb8 (184)
  ULONG PagesToWrite;                         // offset: 0xc0 (192)
  LONGLONG BeyondLastFlush;                   // offset: 0xc8 (200)
  struct _CACHE_MANAGER_CALLBACKS *Callbacks; // offset: 0xd0 (208)
  VOID *LazyWriteContext;                     // offset: 0xd8 (216)
  struct _LIST_ENTRY PrivateList;             // offset: 0xe0 (224)
  union {
    struct _LOGGED_STREAM_CALLBACK_V1 V1; // offset: 0xf0 (240)
    struct _LOGGED_STREAM_CALLBACK_V2 V2; // offset: 0xf0 (240)
  };
  union _LARGE_INTEGER LargestLSN;                     // offset: 0x100 (256)
  ULONG DirtyPageThreshold;                            // offset: 0x108 (264)
  ULONG LazyWritePassCount;                            // offset: 0x10c (268)
  struct _CACHE_UNINITIALIZE_EVENT *UninitializeEvent; // offset: 0x110 (272)
  struct _FAST_MUTEX BcbLock;                          // offset: 0x118 (280)
  union _LARGE_INTEGER LastUnmapBehindOffset;          // offset: 0x150 (336)
  struct _KEVENT Event;                                // offset: 0x158 (344)
  union _LARGE_INTEGER HighWaterMappingOffset;         // offset: 0x170 (368)
  struct _PRIVATE_CACHE_MAP PrivateCacheMap;           // offset: 0x178 (376)
  VOID *WriteBehindWorkQueueEntry;                     // offset: 0x1f0 (496)
  struct _VOLUME_CACHE_MAP *VolumeCacheMap;            // offset: 0x1f8 (504)
  ULONG ProcImagePathHash;                             // offset: 0x200 (512)
  ULONG WritesInProgress;                              // offset: 0x204 (516)
  ULONG AsyncReadRequestCount;                         // offset: 0x208 (520)
};

// 0x28 (40) bytes
struct _VACB {
  VOID *BaseAddress;                        // offset: 0x0 (0)
  struct _SHARED_CACHE_MAP *SharedCacheMap; // offset: 0x8 (8)
  union {
    union _LARGE_INTEGER FileOffset; // offset: 0x10 (16)
    USHORT ActiveCount;              // offset: 0x10 (16)
    struct _LIST_ENTRY Links;        // offset: 0x10 (16)

  } Overlay;                            // offset: 0x10 (16)
  struct _VACB_ARRAY_HEADER *ArrayHead; // offset: 0x20 (32)
};

// 0x4b0 (1200) bytes
struct _HVIEW_MAP {
  ULONG MappedLength;                     // offset: 0x0 (0)
  struct _EX_PUSH_LOCK Lock;              // offset: 0x8 (8)
  struct _FILE_OBJECT *FileObject;        // offset: 0x10 (16)
  struct _HVIEW_MAP_DIRECTORY *Directory; // offset: 0x18 (24)
  ULONG PagesCharged;                     // offset: 0x20 (32)
  struct _HVIEW_MAP_PIN_LOG PinLog;       // offset: 0x28 (40)
};

// 0xa68 (2664) bytes
struct _HHIVE {
  ULONG Signature; // offset: 0x0 (0)
  struct _CELL_DATA *(*GetCellRoutine)(
      struct _HHIVE *arg1, ULONG arg2,
      struct _HV_GET_CELL_CONTEXT *arg3); // offset: 0x8 (8)
  VOID(*ReleaseCellRoutine)
  (struct _HHIVE *arg1, struct _HV_GET_CELL_CONTEXT *arg2); // offset: 0x10 (16)
  VOID *(*Allocate)(ULONG arg1, UCHAR arg2, ULONG arg3);    // offset: 0x18 (24)
  VOID (*Free)(VOID *arg1, ULONG arg2);                     // offset: 0x20 (32)
  UCHAR(*FileWrite)
  (struct _HHIVE *arg1, ULONG arg2, struct CMP_OFFSET_ARRAY *arg3, ULONG arg4,
   ULONG *arg5, ULONG arg6); // offset: 0x28 (40)
  UCHAR(*FileRead)
  (struct _HHIVE *arg1, ULONG arg2, ULONG *arg3, VOID *arg4,
   ULONG arg5);                          // offset: 0x30 (48)
  VOID *HiveLoadFailure;                 // offset: 0x38 (56)
  struct _HBASE_BLOCK *BaseBlock;        // offset: 0x40 (64)
  struct _RTL_BITMAP DirtyVector;        // offset: 0x48 (72)
  ULONG DirtyCount;                      // offset: 0x58 (88)
  ULONG DirtyAlloc;                      // offset: 0x5c (92)
  struct _RTL_BITMAP UnreconciledVector; // offset: 0x60 (96)
  ULONG UnreconciledCount;               // offset: 0x70 (112)
  ULONG BaseBlockAlloc;                  // offset: 0x74 (116)
  ULONG Cluster;                         // offset: 0x78 (120)
  UCHAR Flat : 1;                        // offset: 0x7c (124)
  UCHAR ReadOnly : 1;                    // offset: 0x7c (124)
  UCHAR SystemCacheBacked : 1;           // offset: 0x7c (124)
  UCHAR Reserved : 5;                    // offset: 0x7c (124)
  UCHAR DirtyFlag;                       // offset: 0x7d (125)
  ULONG HvBinHeadersUse;                 // offset: 0x80 (128)
  ULONG HvFreeCellsUse;                  // offset: 0x84 (132)
  ULONG HvUsedCellsUse;                  // offset: 0x88 (136)
  ULONG CmUsedCellsUse;                  // offset: 0x8c (140)
  ULONG HiveFlags;                       // offset: 0x90 (144)
  ULONG CurrentLog;                      // offset: 0x94 (148)
  ULONG CurrentLogSequence;              // offset: 0x98 (152)
  ULONG CurrentLogMinimumSequence;       // offset: 0x9c (156)
  ULONG CurrentLogOffset;                // offset: 0xa0 (160)
  ULONG MinimumLogSequence;              // offset: 0xa4 (164)
  ULONG LogFileSizeCap;                  // offset: 0xa8 (168)
  UCHAR LogDataPresent[2];               // offset: 0xac (172)
  UCHAR PrimaryFileValid;                // offset: 0xae (174)
  UCHAR BaseBlockDirty;                  // offset: 0xaf (175)
  union _LARGE_INTEGER LastLogSwapTime;  // offset: 0xb0 (176)
  union {
    struct {
      USHORT FirstLogFile : 3;                // offset: 0xb8 (184)
      USHORT SecondLogFile : 3;               // offset: 0xb8 (184)
      USHORT HeaderRecovered : 1;             // offset: 0xb8 (184)
      USHORT LegacyRecoveryIndicated : 1;     // offset: 0xb8 (184)
      USHORT RecoveryInformationReserved : 8; // offset: 0xb8 (184)
    };
    USHORT RecoveryInformation; // offset: 0xb8 (184)
  };
  UCHAR LogEntriesRecovered[2]; // offset: 0xba (186)
  ULONG RefreshCount;           // offset: 0xbc (188)
  ULONG StorageTypeCount;       // offset: 0xc0 (192)
  ULONG Version;                // offset: 0xc4 (196)
  struct _HVIEW_MAP ViewMap;    // offset: 0xc8 (200)
  struct _DUAL Storage[2];      // offset: 0x578 (1400)
};

// 0x17a8 (6056) bytes
struct _CMHIVE {
  struct _HHIVE Hive;                                 // offset: 0x0 (0)
  VOID *FileHandles[6];                               // offset: 0xa68 (2664)
  struct _LIST_ENTRY NotifyList;                      // offset: 0xa98 (2712)
  struct _LIST_ENTRY HiveList;                        // offset: 0xaa8 (2728)
  struct _LIST_ENTRY PreloadedHiveList;               // offset: 0xab8 (2744)
  struct _LIST_ENTRY FailedUnloadList;                // offset: 0xac8 (2760)
  struct _EX_RUNDOWN_REF HiveRundown;                 // offset: 0xad8 (2776)
  struct _LIST_ENTRY ParseCacheEntries;               // offset: 0xae0 (2784)
  struct _CM_KEY_HASH_TABLE_ENTRY *KcbCacheTable;     // offset: 0xaf0 (2800)
  ULONG KcbCacheTableSize;                            // offset: 0xaf8 (2808)
  struct _CM_KEY_HASH_TABLE_ENTRY *DeletedKcbTable;   // offset: 0xb00 (2816)
  ULONG DeletedKcbTableSize;                          // offset: 0xb08 (2824)
  ULONG Identity;                                     // offset: 0xb0c (2828)
  struct _FAST_MUTEX *HiveLock;                       // offset: 0xb10 (2832)
  struct _FAST_MUTEX *WriterLock;                     // offset: 0xb18 (2840)
  struct _ERESOURCE *FlusherLock;                     // offset: 0xb20 (2848)
  struct _RTL_BITMAP FlushDirtyVector;                // offset: 0xb28 (2856)
  ULONG FlushDirtyVectorSize;                         // offset: 0xb38 (2872)
  UCHAR *FlushLogEntry;                               // offset: 0xb40 (2880)
  ULONG FlushLogEntrySize;                            // offset: 0xb48 (2888)
  ULONG FlushHiveTruncated;                           // offset: 0xb4c (2892)
  UCHAR FlushBaseBlockDirty;                          // offset: 0xb50 (2896)
  struct _RTL_BITMAP CapturedUnreconciledVector;      // offset: 0xb58 (2904)
  ULONG CapturedUnreconciledVectorSize;               // offset: 0xb68 (2920)
  struct CMP_OFFSET_ARRAY *UnreconciledOffsetArray;   // offset: 0xb70 (2928)
  ULONG UnreconciledOffsetArrayCount;                 // offset: 0xb78 (2936)
  struct _HBASE_BLOCK *UnreconciledBaseBlock;         // offset: 0xb80 (2944)
  struct _EX_PUSH_LOCK SecurityLock;                  // offset: 0xb88 (2952)
  ULONG UseCount;                                     // offset: 0xb90 (2960)
  ULONG LastShrinkHiveSize;                           // offset: 0xb94 (2964)
  union _LARGE_INTEGER ActualFileSize;                // offset: 0xb98 (2968)
  union _LARGE_INTEGER LogFileSizes[2];               // offset: 0xba0 (2976)
  struct _UNICODE_STRING FileFullPath;                // offset: 0xbb0 (2992)
  struct _UNICODE_STRING FileUserName;                // offset: 0xbc0 (3008)
  struct _UNICODE_STRING HiveRootPath;                // offset: 0xbd0 (3024)
  ULONG SecurityCount;                                // offset: 0xbe0 (3040)
  ULONG SecurityCacheSize;                            // offset: 0xbe4 (3044)
  LONG SecurityHitHint;                               // offset: 0xbe8 (3048)
  struct _CM_KEY_SECURITY_CACHE_ENTRY *SecurityCache; // offset: 0xbf0 (3056)
  struct _LIST_ENTRY SecurityHash[64];                // offset: 0xbf8 (3064)
  ULONG UnloadEventCount;                             // offset: 0xff8 (4088)
  struct _KEVENT **UnloadEventArray;                  // offset: 0x1000 (4096)
  struct _CM_KEY_CONTROL_BLOCK *RootKcb;              // offset: 0x1008 (4104)
  UCHAR Frozen;                                       // offset: 0x1010 (4112)
  struct _CM_WORKITEM *UnloadWorkItem;                // offset: 0x1018 (4120)
  struct _CM_WORKITEM UnloadWorkItemHolder;           // offset: 0x1020 (4128)
  UCHAR GrowOnlyMode;                                 // offset: 0x1048 (4168)
  ULONG GrowOffset;                                   // offset: 0x104c (4172)
  struct _LIST_ENTRY KcbConvertListHead;              // offset: 0x1050 (4176)
  struct _CM_CELL_REMAP_BLOCK *CellRemapArray;        // offset: 0x1060 (4192)
  struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;         // offset: 0x1068 (4200)
  ULONG Flags;                                        // offset: 0x14f0 (5360)
  struct _LIST_ENTRY TrustClassEntry;                 // offset: 0x14f8 (5368)
  ULONGLONG DirtyTime;                                // offset: 0x1508 (5384)
  ULONGLONG UnreconciledTime;                         // offset: 0x1510 (5392)
  struct _CM_RM *CmRm;                                // offset: 0x1518 (5400)
  ULONG CmRmInitFailPoint;                            // offset: 0x1520 (5408)
  LONG CmRmInitFailStatus;                            // offset: 0x1524 (5412)
  struct _KTHREAD *CreatorOwner;                      // offset: 0x1528 (5416)
  struct _KTHREAD *RundownThread;                     // offset: 0x1530 (5424)
  union _LARGE_INTEGER LastWriteTime;                 // offset: 0x1538 (5432)
  struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;           // offset: 0x1540 (5440)
  struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue;       // offset: 0x1558 (5464)
  union {
    ULONG FlushFlags; // offset: 0x1570 (5488)
    struct {
      ULONG FlushActive : 1;       // offset: 0x1570 (5488)
      ULONG ReconcileActive : 1;   // offset: 0x1570 (5488)
      ULONG PrimaryFilePurged : 1; // offset: 0x1570 (5488)
      ULONG DiskFileBad : 1;       // offset: 0x1570 (5488)
    };
  };
  ULONG PrimaryFileSizeBeforeLastFlush;         // offset: 0x1574 (5492)
  volatile LONG ReferenceCount;                 // offset: 0x1578 (5496)
  LONG UnloadHistoryIndex;                      // offset: 0x157c (5500)
  ULONG UnloadHistory[128];                     // offset: 0x1580 (5504)
  ULONG BootStart;                              // offset: 0x1780 (6016)
  ULONG UnaccessedStart;                        // offset: 0x1784 (6020)
  ULONG UnaccessedEnd;                          // offset: 0x1788 (6024)
  ULONG LoadedKeyCount;                         // offset: 0x178c (6028)
  volatile ULONG HandleClosePending;            // offset: 0x1790 (6032)
  struct _EX_PUSH_LOCK HandleClosePendingEvent; // offset: 0x1798 (6040)
  UCHAR FinalFlushSucceeded;                    // offset: 0x17a0 (6048)
  UCHAR FailedUnload;                           // offset: 0x17a1 (6049)
};

// 0x98 (152) bytes
struct _HIVE_LIST_ENTRY {
  USHORT *FileName;                // offset: 0x0 (0)
  USHORT *BaseName;                // offset: 0x8 (8)
  USHORT *RegRootName;             // offset: 0x10 (16)
  struct _CMHIVE *CmHive;          // offset: 0x18 (24)
  ULONG HHiveFlags;                // offset: 0x20 (32)
  ULONG CmHiveFlags;               // offset: 0x24 (36)
  ULONG CmKcbCacheSize;            // offset: 0x28 (40)
  struct _CMHIVE *CmHive2;         // offset: 0x30 (48)
  UCHAR HiveMounted;               // offset: 0x38 (56)
  UCHAR ThreadFinished;            // offset: 0x39 (57)
  UCHAR ThreadStarted;             // offset: 0x3a (58)
  UCHAR Allocate;                  // offset: 0x3b (59)
  UCHAR WinPERequired;             // offset: 0x3c (60)
  struct _KEVENT StartEvent;       // offset: 0x40 (64)
  struct _KEVENT FinishedEvent;    // offset: 0x58 (88)
  struct _KEVENT MountLock;        // offset: 0x70 (112)
  struct _UNICODE_STRING FilePath; // offset: 0x88 (136)
};

// 0x88 (136) bytes
struct _CM_RM {
  struct _LIST_ENTRY RmListEntry;         // offset: 0x0 (0)
  struct _LIST_ENTRY TransactionListHead; // offset: 0x10 (16)
  VOID *TmHandle;                         // offset: 0x20 (32)
  VOID *Tm;                               // offset: 0x28 (40)
  VOID *RmHandle;                         // offset: 0x30 (48)
  VOID *KtmRm;                            // offset: 0x38 (56)
  ULONG RefCount;                         // offset: 0x40 (64)
  ULONG ContainerNum;                     // offset: 0x44 (68)
  ULONGLONG ContainerSize;                // offset: 0x48 (72)
  struct _CMHIVE *CmHive;                 // offset: 0x50 (80)
  VOID *LogFileObject;                    // offset: 0x58 (88)
  VOID *MarshallingContext;               // offset: 0x60 (96)
  ULONG RmFlags;                          // offset: 0x68 (104)
  LONG LogStartStatus1;                   // offset: 0x6c (108)
  LONG LogStartStatus2;                   // offset: 0x70 (112)
  ULONGLONG BaseLsn;                      // offset: 0x78 (120)
  struct _ERESOURCE *RmLock;              // offset: 0x80 (128)
};

// 0xa8 (168) bytes
struct _CM_TRANS {
  struct _LIST_ENTRY TransactionListEntry;  // offset: 0x0 (0)
  struct _LIST_ENTRY KCBUoWListHead;        // offset: 0x10 (16)
  struct _LIST_ENTRY LazyCommitListEntry;   // offset: 0x20 (32)
  VOID *KtmTrans;                           // offset: 0x30 (48)
  struct _CM_RM *CmRm;                      // offset: 0x38 (56)
  struct _KENLISTMENT *KtmEnlistmentObject; // offset: 0x40 (64)
  VOID *KtmEnlistmentHandle;                // offset: 0x48 (72)
  struct _GUID KtmUow;                      // offset: 0x50 (80)
  ULONGLONG StartLsn;                       // offset: 0x60 (96)
  ULONG TransState;                         // offset: 0x68 (104)
  ULONG HiveCount;                          // offset: 0x6c (108)
  struct _CMHIVE *HiveArray[7];             // offset: 0x70 (112)
};

// 0x60 (96) bytes
struct _CM_KCB_UOW {
  struct _LIST_ENTRY TransactionListEntry;       // offset: 0x0 (0)
  struct _CM_INTENT_LOCK *KCBLock;               // offset: 0x10 (16)
  struct _CM_INTENT_LOCK *KeyLock;               // offset: 0x18 (24)
  struct _LIST_ENTRY KCBListEntry;               // offset: 0x20 (32)
  struct _CM_KEY_CONTROL_BLOCK *KeyControlBlock; // offset: 0x30 (48)
  struct _CM_TRANS *Transaction;                 // offset: 0x38 (56)
  ULONG UoWState;                                // offset: 0x40 (64)
  enum UoWActionType ActionType;                 // offset: 0x44 (68)
  enum HSTORAGE_TYPE StorageType;                // offset: 0x48 (72)
  union {
    struct _CM_KEY_CONTROL_BLOCK *ChildKCB; // offset: 0x50 (80)
    ULONG VolatileKeyCell;                  // offset: 0x50 (80)
    struct {
      ULONG OldValueCell; // offset: 0x50 (80)
      ULONG NewValueCell; // offset: 0x54 (84)
    };
    ULONG UserFlags;                    // offset: 0x50 (80)
    union _LARGE_INTEGER LastWriteTime; // offset: 0x50 (80)
    ULONG TxSecurityCell;               // offset: 0x50 (80)
    struct {
      struct _CM_KEY_CONTROL_BLOCK *OldChildKCB; // offset: 0x50 (80)
      struct _CM_KEY_CONTROL_BLOCK *NewChildKCB; // offset: 0x58 (88)
    };
    struct {
      struct _CM_KEY_CONTROL_BLOCK *OtherChildKCB; // offset: 0x50 (80)
      ULONG ThisVolatileKeyCell;                   // offset: 0x58 (88)
    };
  };
};

// 0x10 (16) bytes
struct _CM_INTENT_LOCK {
  ULONG OwnerCount;                // offset: 0x0 (0)
  struct _CM_KCB_UOW **OwnerTable; // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _CM_KEY_HASH {
  ULONG ConvKey;                 // offset: 0x0 (0)
  struct _CM_KEY_HASH *NextHash; // offset: 0x8 (8)
  struct _HHIVE *KeyHive;        // offset: 0x10 (16)
  ULONG KeyCell;                 // offset: 0x18 (24)
};

// 0x128 (296) bytes
struct _CM_KEY_CONTROL_BLOCK {
  ULONG RefCount;             // offset: 0x0 (0)
  ULONG ExtFlags : 16;        // offset: 0x4 (4)
  ULONG PrivateAlloc : 1;     // offset: 0x4 (4)
  ULONG Delete : 1;           // offset: 0x4 (4)
  ULONG HiveUnloaded : 1;     // offset: 0x4 (4)
  ULONG Decommissioned : 1;   // offset: 0x4 (4)
  ULONG LockTablePresent : 1; // offset: 0x4 (4)
  ULONG TotalLevels : 10;     // offset: 0x4 (4)
  ULONG DelayedDeref : 1;     // offset: 0x8 (8)
  ULONG DelayedClose : 1;     // offset: 0x8 (8)
  ULONG Parking : 1;          // offset: 0x8 (8)
  union {
    struct _CM_KEY_HASH KeyHash; // offset: 0x10 (16)
    struct {
      ULONG ConvKey;                 // offset: 0x10 (16)
      struct _CM_KEY_HASH *NextHash; // offset: 0x18 (24)
      struct _HHIVE *KeyHive;        // offset: 0x20 (32)
      ULONG KeyCell;                 // offset: 0x28 (40)
    };
  };
  struct _EX_PUSH_LOCK KcbPushlock; // offset: 0x30 (48)
  union {
    struct _KTHREAD *Owner; // offset: 0x38 (56)
    LONG SharedCount;       // offset: 0x38 (56)
  };
  ULONG SlotHint;                                // offset: 0x40 (64)
  struct _CM_KEY_CONTROL_BLOCK *ParentKcb;       // offset: 0x48 (72)
  struct _CM_NAME_CONTROL_BLOCK *NameBlock;      // offset: 0x50 (80)
  struct _CM_KEY_SECURITY_CACHE *CachedSecurity; // offset: 0x58 (88)
  struct _CACHED_CHILD_LIST ValueCache;          // offset: 0x60 (96)
  union {
    struct _CM_INDEX_HINT_BLOCK *IndexHint; // offset: 0x70 (112)
    ULONG HashKey;                          // offset: 0x70 (112)
    ULONG SubKeyCount;                      // offset: 0x70 (112)
  };
  union {
    struct _LIST_ENTRY KeyBodyListHead; // offset: 0x78 (120)
    struct _LIST_ENTRY FreeListEntry;   // offset: 0x78 (120)
  };
  struct _CM_KEY_BODY *KeyBodyArray[4];  // offset: 0x88 (136)
  union _LARGE_INTEGER KcbLastWriteTime; // offset: 0xa8 (168)
  USHORT KcbMaxNameLen;                  // offset: 0xb0 (176)
  USHORT KcbMaxValueNameLen;             // offset: 0xb2 (178)
  ULONG KcbMaxValueDataLen;              // offset: 0xb4 (180)
  ULONG KcbUserFlags : 4;                // offset: 0xb8 (184)
  ULONG KcbVirtControlFlags : 4;         // offset: 0xb8 (184)
  ULONG KcbDebug : 8;                    // offset: 0xb8 (184)
  ULONG Flags : 16;                      // offset: 0xb8 (184)
  CHAR *RealKeyName;                     // offset: 0xc0 (192)
  struct _LIST_ENTRY KCBUoWListHead;     // offset: 0xc8 (200)
  union {
    struct _LIST_ENTRY DelayQueueEntry; // offset: 0xd8 (216)
    volatile UCHAR *Stolen;             // offset: 0xd8 (216)
  };
  struct _CM_TRANS *TransKCBOwner;       // offset: 0xe8 (232)
  struct _CM_INTENT_LOCK KCBLock;        // offset: 0xf0 (240)
  struct _CM_INTENT_LOCK KeyLock;        // offset: 0x100 (256)
  struct _CHILD_LIST TransValueCache;    // offset: 0x110 (272)
  struct _CM_TRANS *TransValueListOwner; // offset: 0x118 (280)
  struct _UNICODE_STRING *FullKCBName;   // offset: 0x120 (288)
};

// 0x10 (16) bytes
struct _CM_KEY_REFERENCE {
  ULONG KeyCell;          // offset: 0x0 (0)
  struct _HHIVE *KeyHive; // offset: 0x8 (8)
};

// 0x50 (80) bytes
struct _CM_KEY_NODE {
  USHORT Signature;                   // offset: 0x0 (0)
  USHORT Flags;                       // offset: 0x2 (2)
  union _LARGE_INTEGER LastWriteTime; // offset: 0x4 (4)
  ULONG AccessBits;                   // offset: 0xc (12)
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
  WCHAR Name[1];              // offset: 0x4c (76)
};

// 0x50 (80) bytes
union _u {
  struct _CM_KEY_NODE KeyNode;         // offset: 0x0 (0)
  struct _CM_KEY_VALUE KeyValue;       // offset: 0x0 (0)
  struct _CM_KEY_SECURITY KeySecurity; // offset: 0x0 (0)
  struct _CM_KEY_INDEX KeyIndex;       // offset: 0x0 (0)
  struct _CM_BIG_DATA ValueData;       // offset: 0x0 (0)
  ULONG KeyList[1];                    // offset: 0x0 (0)
  WCHAR KeyString[1];                  // offset: 0x0 (0)
};

// 0x50 (80) bytes
struct _CELL_DATA {
  union _u u; // offset: 0x0 (0)
};

// 0x160 (352) bytes
struct _HIVE_LOAD_FAILURE {
  struct _HHIVE *Hive;    // offset: 0x0 (0)
  ULONG Index;            // offset: 0x8 (8)
  ULONG RecoverableIndex; // offset: 0xc (12)
  struct {
    enum _CM_LOAD_FAILURE_TYPE Failure; // offset: 0x0 (0)
    LONG Status;                        // offset: 0x4 (4)
    ULONG Point;                        // offset: 0x8 (8)
  } Locations[8];                       // offset: 0x10 (16)
  struct {
    enum _CM_LOAD_FAILURE_TYPE Failure; // offset: 0x0 (0)
    LONG Status;                        // offset: 0x4 (4)
    ULONG Point;                        // offset: 0x8 (8)
  } RecoverableLocations[8];            // offset: 0x70 (112)
  struct {
    ULONG Action; // offset: 0x0 (0)
    VOID *Handle; // offset: 0x8 (8)
    LONG Status;  // offset: 0x10 (16)
  } RegistryIO;   // offset: 0xd0 (208)
  struct {
    VOID *CheckStack; // offset: 0x0 (0)
  } CheckRegistry2;   // offset: 0xe8 (232)
  struct {
    ULONG Cell;                   // offset: 0x0 (0)
    struct _CELL_DATA *CellPoint; // offset: 0x8 (8)
    VOID *RootPoint;              // offset: 0x10 (16)
    ULONG Index;                  // offset: 0x18 (24)
  } CheckKey;                     // offset: 0xf0 (240)
  struct {
    struct _CELL_DATA *List;      // offset: 0x0 (0)
    ULONG Index;                  // offset: 0x8 (8)
    ULONG Cell;                   // offset: 0xc (12)
    struct _CELL_DATA *CellPoint; // offset: 0x10 (16)
  } CheckValueList;               // offset: 0x110 (272)
  struct {
    ULONG Space;            // offset: 0x0 (0)
    ULONG MapPoint;         // offset: 0x4 (4)
    struct _HBIN *BinPoint; // offset: 0x8 (8)
  } CheckHive;              // offset: 0x128 (296)
  struct {
    ULONG Space;            // offset: 0x0 (0)
    ULONG MapPoint;         // offset: 0x4 (4)
    struct _HBIN *BinPoint; // offset: 0x8 (8)
  } CheckHive1;             // offset: 0x138 (312)
  struct {
    struct _HBIN *Bin;        // offset: 0x0 (0)
    struct _HCELL *CellPoint; // offset: 0x8 (8)
  } CheckBin;                 // offset: 0x148 (328)
  struct {
    ULONG FileOffset; // offset: 0x0 (0)
  } RecoverData;      // offset: 0x158 (344)
};

// 0x20 (32) bytes
struct _CMP_SILO_CONTEXT {
  struct _LIST_ENTRY LockEntryHead; // offset: 0x0 (0)
  UCHAR LockListUnderCleanup;       // offset: 0x10 (16)
  struct _EX_PUSH_LOCK ContextLock; // offset: 0x18 (24)
};

// 0x20 (32) bytes
struct _MMSESSION {
  struct _EX_PUSH_LOCK SystemSpaceViewLock;         // offset: 0x0 (0)
  struct _EX_PUSH_LOCK *SystemSpaceViewLockPointer; // offset: 0x8 (8)
  struct _RTL_AVL_TREE ViewRoot;                    // offset: 0x10 (16)
  ULONG ViewCount;                                  // offset: 0x18 (24)
  ULONG BitmapFailures;                             // offset: 0x1c (28)
};

// 0x10 (16) bytes
struct _EX_PUSH_LOCK_AUTO_EXPAND {
  struct _EX_PUSH_LOCK LocalLock;               // offset: 0x0 (0)
  struct _EX_PUSH_LOCK_AUTO_EXPAND_STATE State; // offset: 0x8 (8)
  ULONG Stats;                                  // offset: 0xc (12)
};

// 0x68 (104) bytes
struct _FSRTL_ADVANCED_FCB_HEADER {
  SHORT NodeTypeCode;                   // offset: 0x0 (0)
  SHORT NodeByteSize;                   // offset: 0x2 (2)
  UCHAR Flags;                          // offset: 0x4 (4)
  UCHAR IsFastIoPossible;               // offset: 0x5 (5)
  UCHAR Flags2;                         // offset: 0x6 (6)
  UCHAR Reserved : 4;                   // offset: 0x7 (7)
  UCHAR Version : 4;                    // offset: 0x7 (7)
  struct _ERESOURCE *Resource;          // offset: 0x8 (8)
  struct _ERESOURCE *PagingIoResource;  // offset: 0x10 (16)
  union _LARGE_INTEGER AllocationSize;  // offset: 0x18 (24)
  union _LARGE_INTEGER FileSize;        // offset: 0x20 (32)
  union _LARGE_INTEGER ValidDataLength; // offset: 0x28 (40)
  struct _FAST_MUTEX *FastMutex;        // offset: 0x30 (48)
  struct _LIST_ENTRY FilterContexts;    // offset: 0x38 (56)
  struct _EX_PUSH_LOCK PushLock;        // offset: 0x48 (72)
  VOID **FileContextSupportPointer;     // offset: 0x50 (80)
  union {
    VOID *Oplock;            // offset: 0x58 (88)
    VOID *ReservedForRemote; // offset: 0x58 (88)
  };
  VOID *ReservedContext; // offset: 0x60 (96)
};

// 0x60 (96) bytes
struct _MMPAGE_FILE_EXPANSION {
  struct _SEGMENT *Segment;              // offset: 0x0 (0)
  struct _LIST_ENTRY DereferenceList;    // offset: 0x8 (8)
  struct _MI_PARTITION *Partition;       // offset: 0x18 (24)
  ULONGLONG RequestedExpansionSize;      // offset: 0x20 (32)
  ULONGLONG ActualExpansion;             // offset: 0x28 (40)
  struct _KEVENT Event;                  // offset: 0x30 (48)
  volatile LONG InProgress;              // offset: 0x48 (72)
  struct _MMPAGE_FILE_EXPANSION_FLAGS u; // offset: 0x4c (76)
  VOID **volatile ActiveEntry;           // offset: 0x50 (80)
  UCHAR AttemptForCantExtend;            // offset: 0x58 (88)
  UCHAR PageFileContract;                // offset: 0x59 (89)
};

// 0x2d0 (720) bytes
struct _MI_PARTITION_MODWRITES {
  struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;     // offset: 0x0 (0)
  struct _MMPAGE_FILE_EXPANSION PageFileContract;         // offset: 0x60 (96)
  ULONGLONG NumberOfMappedMdls;                           // offset: 0xc0 (192)
  volatile LONG NumberOfMappedMdlsInUse;                  // offset: 0xc8 (200)
  ULONG NumberOfMappedMdlsInUsePeak;                      // offset: 0xcc (204)
  struct _MMMOD_WRITER_LISTHEAD MappedFileHeader;         // offset: 0xd0 (208)
  UCHAR NeedMappedMdl;                                    // offset: 0xf8 (248)
  UCHAR NeedPageFileMdl;                                  // offset: 0xf9 (249)
  UCHAR TransitionInserted;                               // offset: 0xfa (250)
  LONG LastModifiedWriteError;                            // offset: 0xfc (252)
  LONG LastMappedWriteError;                              // offset: 0x100 (256)
  volatile ULONG MappedFileWriteSucceeded;                // offset: 0x104 (260)
  ULONG MappedWriteBurstCount;                            // offset: 0x108 (264)
  ULONG LowPriorityModWritesOutstanding;                  // offset: 0x10c (268)
  struct _KEVENT BoostModWriteIoPriorityEvent;            // offset: 0x110 (272)
  LONG ModifiedWriterThreadPriority;                      // offset: 0x128 (296)
  ULONGLONG ModifiedPagesLowPriorityGoal;                 // offset: 0x130 (304)
  struct _KEVENT ModifiedPageWriterEvent;                 // offset: 0x138 (312)
  struct _KEVENT ModifiedWriterExitedEvent;               // offset: 0x150 (336)
  volatile LONG WriteAllPagefilePages;                    // offset: 0x168 (360)
  volatile LONG WriteAllMappedPages;                      // offset: 0x16c (364)
  struct _KEVENT MappedPageWriterEvent;                   // offset: 0x170 (368)
  struct _MI_MODWRITE_DATA ModWriteData;                  // offset: 0x188 (392)
  struct _KEVENT RescanPageFilesEvent;                    // offset: 0x1c8 (456)
  struct _MMMOD_WRITER_LISTHEAD PagingFileHeader;         // offset: 0x1e0 (480)
  struct _ETHREAD *ModifiedPageWriterThread;              // offset: 0x208 (520)
  struct _EX_RUNDOWN_REF ModifiedPageWriterRundown;       // offset: 0x210 (528)
  struct _WORK_QUEUE_ITEM PagefileScanWorkItem;           // offset: 0x218 (536)
  ULONG PagefileScanCount;                                // offset: 0x238 (568)
  volatile LONG ClusterWritesDisabled[2];                 // offset: 0x23c (572)
  struct _KEVENT NotifyStoreMemoryConditions;             // offset: 0x248 (584)
  volatile UCHAR DelayMappedWrite;                        // offset: 0x260 (608)
  volatile ULONG PagefileReservationsEnabled;             // offset: 0x264 (612)
  struct _EX_PUSH_LOCK PageFileCreationLock;              // offset: 0x268 (616)
  struct _WORK_QUEUE_ITEM TrimPagefileWorkItem;           // offset: 0x270 (624)
  ULONGLONG LastTrimPagefileTime;                         // offset: 0x290 (656)
  struct _WORK_QUEUE_ITEM WsSwapPagefileContractWorkItem; // offset: 0x298 (664)
  volatile LONG WsSwapPageFileContractionInProgress;      // offset: 0x2b8 (696)
  struct _EX_PUSH_LOCK WorkingSetSwapLock;                // offset: 0x2c0 (704)
  volatile LONG WorkingSetInswapLock;                     // offset: 0x2c8 (712)
};

// 0x40 (64) bytes
struct _HANDLE_TABLE_FREE_LIST {
  struct _EX_PUSH_LOCK FreeListLock;               // offset: 0x0 (0)
  union _HANDLE_TABLE_ENTRY *FirstFreeHandleEntry; // offset: 0x8 (8)
  union _HANDLE_TABLE_ENTRY *LastFreeHandleEntry;  // offset: 0x10 (16)
  LONG HandleCount;                                // offset: 0x18 (24)
  ULONG HighWaterMark;                             // offset: 0x1c (28)
  ULONG Reserved[8];                               // offset: 0x20 (32)
};

// 0x10 (16) bytes
struct _POP_RW_LOCK {
  struct _EX_PUSH_LOCK Lock; // offset: 0x0 (0)
  struct _KTHREAD *Thread;   // offset: 0x8 (8)
};

// 0x90 (144) bytes
struct _POP_COOLING_EXTENSION {
  struct _LIST_ENTRY Link;                     // offset: 0x0 (0)
  struct _LIST_ENTRY RequestListHead;          // offset: 0x10 (16)
  struct _POP_RW_LOCK Lock;                    // offset: 0x20 (32)
  struct _DEVICE_OBJECT *DeviceObject;         // offset: 0x30 (48)
  VOID *NotificationEntry;                     // offset: 0x38 (56)
  UCHAR Enabled;                               // offset: 0x40 (64)
  UCHAR ActiveEngaged;                         // offset: 0x41 (65)
  UCHAR ThrottleLimit;                         // offset: 0x42 (66)
  UCHAR UpdatingToCurrent;                     // offset: 0x43 (67)
  struct _KEVENT *RemovalFlushEvent;           // offset: 0x48 (72)
  struct _KEVENT *PnpFlushEvent;               // offset: 0x50 (80)
  struct _THERMAL_COOLING_INTERFACE Interface; // offset: 0x58 (88)
};

// 0x60 (96) bytes
struct _DEVICE_OBJECT_POWER_EXTENSION {
  volatile ULONG IdleCount;                        // offset: 0x0 (0)
  volatile ULONG BusyCount;                        // offset: 0x4 (4)
  volatile ULONG BusyReference;                    // offset: 0x8 (8)
  ULONG TotalBusyCount;                            // offset: 0xc (12)
  ULONG ConservationIdleTime;                      // offset: 0x10 (16)
  ULONG PerformanceIdleTime;                       // offset: 0x14 (20)
  struct _DEVICE_OBJECT *DeviceObject;             // offset: 0x18 (24)
  struct _LIST_ENTRY IdleList;                     // offset: 0x20 (32)
  enum _POP_DEVICE_IDLE_TYPE IdleType;             // offset: 0x30 (48)
  enum _DEVICE_POWER_STATE IdleState;              // offset: 0x34 (52)
  enum _DEVICE_POWER_STATE CurrentState;           // offset: 0x38 (56)
  struct _POP_COOLING_EXTENSION *CoolingExtension; // offset: 0x40 (64)
  struct _LIST_ENTRY Volume;                       // offset: 0x48 (72)
  union {
    struct {
      ULONG IdleTime;    // offset: 0x0 (0)
      ULONG NonIdleTime; // offset: 0x4 (4)
    } Disk;              // offset: 0x58 (88)

  } Specific; // offset: 0x58 (88)
};

// 0x68 (104) bytes
struct _DEVOBJ_EXTENSION {
  SHORT Type;                                  // offset: 0x0 (0)
  USHORT Size;                                 // offset: 0x2 (2)
  struct _DEVICE_OBJECT *DeviceObject;         // offset: 0x8 (8)
  ULONG PowerFlags;                            // offset: 0x10 (16)
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // offset: 0x18 (24)
  ULONG ExtensionFlags;                        // offset: 0x20 (32)
  VOID *DeviceNode;                            // offset: 0x28 (40)
  struct _DEVICE_OBJECT *AttachedTo;           // offset: 0x30 (48)
  LONG StartIoCount;                           // offset: 0x38 (56)
  LONG StartIoKey;                             // offset: 0x3c (60)
  ULONG StartIoFlags;                          // offset: 0x40 (64)
  struct _VPB *Vpb;                            // offset: 0x48 (72)
  VOID *DependencyNode;                        // offset: 0x50 (80)
  VOID *InterruptContext;                      // offset: 0x58 (88)
  VOID *VerifierContext;                       // offset: 0x60 (96)
};

// 0x20 (32) bytes
struct _ALPC_PROCESS_CONTEXT {
  struct _EX_PUSH_LOCK Lock;              // offset: 0x0 (0)
  struct _LIST_ENTRY ViewListHead;        // offset: 0x8 (8)
  volatile ULONGLONG PagedPoolQuotaCache; // offset: 0x18 (24)
};

// 0x10 (16) bytes
struct _IO_STATUS_BLOCK {
  union {
    LONG Status;   // offset: 0x0 (0)
    VOID *Pointer; // offset: 0x0 (0)
  };
  ULONGLONG Information; // offset: 0x8 (8)
};

// 0xd0 (208) bytes
struct _IRP {
  SHORT Type;                       // offset: 0x0 (0)
  USHORT Size;                      // offset: 0x2 (2)
  USHORT AllocationProcessorNumber; // offset: 0x4 (4)
  USHORT Reserved;                  // offset: 0x6 (6)
  struct _MDL *MdlAddress;          // offset: 0x8 (8)
  ULONG Flags;                      // offset: 0x10 (16)
  union {
    struct _IRP *MasterIrp; // offset: 0x18 (24)
    LONG IrpCount;          // offset: 0x18 (24)
    VOID *SystemBuffer;     // offset: 0x18 (24)

  } AssociatedIrp;                    // offset: 0x18 (24)
  struct _LIST_ENTRY ThreadListEntry; // offset: 0x20 (32)
  struct _IO_STATUS_BLOCK IoStatus;   // offset: 0x30 (48)
  CHAR RequestorMode;                 // offset: 0x40 (64)
  UCHAR PendingReturned;              // offset: 0x41 (65)
  CHAR StackCount;                    // offset: 0x42 (66)
  CHAR CurrentLocation;               // offset: 0x43 (67)
  UCHAR Cancel;                       // offset: 0x44 (68)
  UCHAR CancelIrql;                   // offset: 0x45 (69)
  CHAR ApcEnvironment;                // offset: 0x46 (70)
  UCHAR AllocationFlags;              // offset: 0x47 (71)
  struct _IO_STATUS_BLOCK *UserIosb;  // offset: 0x48 (72)
  struct _KEVENT *UserEvent;          // offset: 0x50 (80)
  union {
    struct {
      union {
        VOID(*UserApcRoutine)
        (VOID *arg1, struct _IO_STATUS_BLOCK *arg2,
         ULONG arg3);         // offset: 0x0 (0)
        VOID *IssuingProcess; // offset: 0x0 (0)
      };
      VOID *UserApcContext;              // offset: 0x8 (8)
    } AsynchronousParameters;            // offset: 0x58 (88)
    union _LARGE_INTEGER AllocationSize; // offset: 0x58 (88)

  } Overlay; // offset: 0x58 (88)
  VOID(*CancelRoutine)
  (struct _DEVICE_OBJECT *arg1, struct _IRP *arg2); // offset: 0x68 (104)
  VOID *UserBuffer;                                 // offset: 0x70 (112)
  union {
    struct {
      union {
        struct _KDEVICE_QUEUE_ENTRY DeviceQueueEntry; // offset: 0x0 (0)
        VOID *DriverContext[4];                       // offset: 0x0 (0)
      };
      struct _ETHREAD *Thread;      // offset: 0x20 (32)
      CHAR *AuxiliaryBuffer;        // offset: 0x28 (40)
      struct _LIST_ENTRY ListEntry; // offset: 0x30 (48)
      union {
        struct _IO_STACK_LOCATION *CurrentStackLocation; // offset: 0x40 (64)
        ULONG PacketType;                                // offset: 0x40 (64)
      };
      struct _FILE_OBJECT *OriginalFileObject; // offset: 0x48 (72)
      VOID *IrpExtension;                      // offset: 0x50 (80)
    } Overlay;                                 // offset: 0x78 (120)
    struct _KAPC Apc;                          // offset: 0x78 (120)
    VOID *CompletionKey;                       // offset: 0x78 (120)

  } Tail; // offset: 0x78 (120)
};

// 0x20 (32) bytes
struct _VF_WATCHDOG_IRP {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 (0)
  struct _IRP *Irp;             // offset: 0x10 (16)
  ULONG DueTickCount;           // offset: 0x18 (24)
  volatile UCHAR Inserted;      // offset: 0x1c (28)
  CHAR TrackedStackLocation;    // offset: 0x1d (29)
  USHORT CancelTimeoutTicks;    // offset: 0x1e (30)
};

// 0x80 (128) bytes
struct _IOV_IRP_TRACE {
  struct _IRP *Irp;        // offset: 0x0 (0)
  struct _KTHREAD *Thread; // offset: 0x8 (8)
  union {
    struct {
      SHORT KernelApcDisable;  // offset: 0x10 (16)
      SHORT SpecialApcDisable; // offset: 0x12 (18)
    };
    ULONG CombinedApcDisable; // offset: 0x10 (16)
  };
  UCHAR Irql;           // offset: 0x14 (20)
  VOID *StackTrace[13]; // offset: 0x18 (24)
};

// 0x30 (48) bytes
struct _POP_IRP_WORKER_ENTRY {
  struct _LIST_ENTRY Link;       // offset: 0x0 (0)
  struct _ETHREAD *Thread;       // offset: 0x10 (16)
  struct _IRP *Irp;              // offset: 0x18 (24)
  struct _DEVICE_OBJECT *Device; // offset: 0x20 (32)
  UCHAR Static;                  // offset: 0x28 (40)
};

// 0x38 (56) bytes
struct _WAITING_IRP {
  struct _LIST_ENTRY Links;                                 // offset: 0x0 (0)
  struct _IRP *Irp;                                         // offset: 0x10 (16)
  VOID (*CompletionRoutine)(VOID *arg1, struct _IRP *arg2); // offset: 0x18 (24)
  VOID *Context;                                            // offset: 0x20 (32)
  struct _KEVENT *Event;                                    // offset: 0x28 (40)
  ULONG Information;                                        // offset: 0x30 (48)
  UCHAR BreakAllRH;                                         // offset: 0x34 (52)
};

// 0x20 (32) bytes
struct _TRIAGE_POP_IRP_DATA {
  struct _LIST_ENTRY Link;    // offset: 0x0 (0)
  struct _IRP *Irp;           // offset: 0x10 (16)
  struct _DEVICE_OBJECT *Pdo; // offset: 0x18 (24)
};

// 0x38 (56) bytes
struct _TRIAGE_POP_FX_DEVICE {
  struct _LIST_ENTRY Link;                // offset: 0x0 (0)
  struct _IRP *Irp;                       // offset: 0x10 (16)
  struct _TRIAGE_POP_IRP_DATA *IrpData;   // offset: 0x18 (24)
  LONG Status;                            // offset: 0x20 (32)
  LONG PowerReqCall;                      // offset: 0x24 (36)
  LONG PowerNotReqCall;                   // offset: 0x28 (40)
  struct _TRIAGE_DEVICE_NODE *DeviceNode; // offset: 0x30 (48)
};

// 0x58 (88) bytes
struct _TRIAGE_DEVICE_NODE {
  struct _TRIAGE_DEVICE_NODE *Sibling;         // offset: 0x0 (0)
  struct _TRIAGE_DEVICE_NODE *Child;           // offset: 0x8 (8)
  struct _TRIAGE_DEVICE_NODE *Parent;          // offset: 0x10 (16)
  struct _TRIAGE_DEVICE_NODE *LastChild;       // offset: 0x18 (24)
  struct _DEVICE_OBJECT *PhysicalDeviceObject; // offset: 0x20 (32)
  struct _UNICODE_STRING InstancePath;         // offset: 0x28 (40)
  struct _UNICODE_STRING ServiceName;          // offset: 0x38 (56)
  struct _IRP *PendingIrp;                     // offset: 0x48 (72)
  struct _TRIAGE_POP_FX_DEVICE *FxDevice;      // offset: 0x50 (80)
};

// 0x40 (64) bytes
struct _POP_POLICY_DEVICE {
  struct _LIST_ENTRY Link;                  // offset: 0x0 (0)
  enum POWER_POLICY_DEVICE_TYPE DeviceType; // offset: 0x10 (16)
  VOID *Notification;                       // offset: 0x18 (24)
  struct _UNICODE_STRING Name;              // offset: 0x20 (32)
  struct _DEVICE_OBJECT *Device;            // offset: 0x30 (48)
  struct _IRP *Irp;                         // offset: 0x38 (56)
};

// 0x200 (512) bytes
struct _IOV_FORCED_PENDING_TRACE {
  struct _IRP *Irp;        // offset: 0x0 (0)
  struct _ETHREAD *Thread; // offset: 0x8 (8)
  VOID *StackTrace[62];    // offset: 0x10 (16)
};

// 0x70 (112) bytes
struct _PENDING_RELATIONS_LIST_ENTRY {
  struct _LIST_ENTRY Link;                     // offset: 0x0 (0)
  struct _WORK_QUEUE_ITEM WorkItem;            // offset: 0x10 (16)
  struct _PNP_DEVICE_EVENT_ENTRY *DeviceEvent; // offset: 0x30 (48)
  struct _DEVICE_OBJECT *DeviceObject;         // offset: 0x38 (56)
  struct _RELATION_LIST *RelationsList;        // offset: 0x40 (64)
  struct _IRP *EjectIrp;                       // offset: 0x48 (72)
  enum IRPLOCK Lock;                           // offset: 0x50 (80)
  ULONG Problem;                               // offset: 0x54 (84)
  UCHAR ProfileChangingEject;                  // offset: 0x58 (88)
  UCHAR DisplaySafeRemovalDialog;              // offset: 0x59 (89)
  enum _SYSTEM_POWER_STATE LightestSleepState; // offset: 0x5c (92)
  struct DOCK_INTERFACE *DockInterface;        // offset: 0x60 (96)
  UCHAR DequeuePending;                        // offset: 0x68 (104)
  enum _PNP_DEVICE_DELETE_TYPE DeleteType;     // offset: 0x6c (108)
};

// 0x10 (16) bytes
struct _PO_IRP_QUEUE {
  struct _IRP *CurrentIrp;     // offset: 0x0 (0)
  struct _IRP *PendingIrpList; // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _PO_IRP_MANAGER {
  struct _PO_IRP_QUEUE DeviceIrpQueue; // offset: 0x0 (0)
  struct _PO_IRP_QUEUE SystemIrpQueue; // offset: 0x10 (16)
};

// 0x48 (72) bytes
struct _IO_STACK_LOCATION {
  UCHAR MajorFunction; // offset: 0x0 (0)
  UCHAR MinorFunction; // offset: 0x1 (1)
  UCHAR Flags;         // offset: 0x2 (2)
  UCHAR Control;       // offset: 0x3 (3)
  union {
    struct {
      struct _IO_SECURITY_CONTEXT *SecurityContext; // offset: 0x0 (0)
      ULONG Options;                                // offset: 0x8 (8)
      USHORT FileAttributes;                        // offset: 0x10 (16)
      USHORT ShareAccess;                           // offset: 0x12 (18)
      ULONG EaLength;                               // offset: 0x18 (24)
    } Create;                                       // offset: 0x8 (8)
    struct {
      struct _IO_SECURITY_CONTEXT *SecurityContext;     // offset: 0x0 (0)
      ULONG Options;                                    // offset: 0x8 (8)
      USHORT Reserved;                                  // offset: 0x10 (16)
      USHORT ShareAccess;                               // offset: 0x12 (18)
      struct _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // offset: 0x18 (24)
    } CreatePipe;                                       // offset: 0x8 (8)
    struct {
      struct _IO_SECURITY_CONTEXT *SecurityContext;   // offset: 0x0 (0)
      ULONG Options;                                  // offset: 0x8 (8)
      USHORT Reserved;                                // offset: 0x10 (16)
      USHORT ShareAccess;                             // offset: 0x12 (18)
      struct _MAILSLOT_CREATE_PARAMETERS *Parameters; // offset: 0x18 (24)
    } CreateMailslot;                                 // offset: 0x8 (8)
    struct {
      ULONG Length;                    // offset: 0x0 (0)
      ULONG Key;                       // offset: 0x8 (8)
      union _LARGE_INTEGER ByteOffset; // offset: 0x10 (16)
    } Read;                            // offset: 0x8 (8)
    struct {
      ULONG Length;                    // offset: 0x0 (0)
      ULONG Key;                       // offset: 0x8 (8)
      union _LARGE_INTEGER ByteOffset; // offset: 0x10 (16)
    } Write;                           // offset: 0x8 (8)
    struct {
      ULONG Length;                                      // offset: 0x0 (0)
      struct _UNICODE_STRING *FileName;                  // offset: 0x8 (8)
      enum _FILE_INFORMATION_CLASS FileInformationClass; // offset: 0x10 (16)
      ULONG FileIndex;                                   // offset: 0x18 (24)
    } QueryDirectory;                                    // offset: 0x8 (8)
    struct {
      ULONG Length;           // offset: 0x0 (0)
      ULONG CompletionFilter; // offset: 0x8 (8)
    } NotifyDirectory;        // offset: 0x8 (8)
    struct {
      ULONG Length;                                      // offset: 0x0 (0)
      enum _FILE_INFORMATION_CLASS FileInformationClass; // offset: 0x8 (8)
    } QueryFile;                                         // offset: 0x8 (8)
    struct {
      ULONG Length;                                      // offset: 0x0 (0)
      enum _FILE_INFORMATION_CLASS FileInformationClass; // offset: 0x8 (8)
      struct _FILE_OBJECT *FileObject;                   // offset: 0x10 (16)
      union {
        struct {
          UCHAR ReplaceIfExists; // offset: 0x18 (24)
          UCHAR AdvanceOnly;     // offset: 0x19 (25)
        };
        ULONG ClusterCount; // offset: 0x18 (24)
        VOID *DeleteHandle; // offset: 0x18 (24)
      };
    } SetFile; // offset: 0x8 (8)
    struct {
      ULONG Length;       // offset: 0x0 (0)
      VOID *EaList;       // offset: 0x8 (8)
      ULONG EaListLength; // offset: 0x10 (16)
      ULONG EaIndex;      // offset: 0x18 (24)
    } QueryEa;            // offset: 0x8 (8)
    struct {
      ULONG Length; // offset: 0x0 (0)
    } SetEa;        // offset: 0x8 (8)
    struct {
      ULONG Length;                         // offset: 0x0 (0)
      enum _FSINFOCLASS FsInformationClass; // offset: 0x8 (8)
    } QueryVolume;                          // offset: 0x8 (8)
    struct {
      ULONG Length;                         // offset: 0x0 (0)
      enum _FSINFOCLASS FsInformationClass; // offset: 0x8 (8)
    } SetVolume;                            // offset: 0x8 (8)
    struct {
      ULONG OutputBufferLength; // offset: 0x0 (0)
      ULONG InputBufferLength;  // offset: 0x8 (8)
      ULONG FsControlCode;      // offset: 0x10 (16)
      VOID *Type3InputBuffer;   // offset: 0x18 (24)
    } FileSystemControl;        // offset: 0x8 (8)
    struct {
      union _LARGE_INTEGER *Length;    // offset: 0x0 (0)
      ULONG Key;                       // offset: 0x8 (8)
      union _LARGE_INTEGER ByteOffset; // offset: 0x10 (16)
    } LockControl;                     // offset: 0x8 (8)
    struct {
      ULONG OutputBufferLength; // offset: 0x0 (0)
      ULONG InputBufferLength;  // offset: 0x8 (8)
      ULONG IoControlCode;      // offset: 0x10 (16)
      VOID *Type3InputBuffer;   // offset: 0x18 (24)
    } DeviceIoControl;          // offset: 0x8 (8)
    struct {
      ULONG SecurityInformation; // offset: 0x0 (0)
      ULONG Length;              // offset: 0x8 (8)
    } QuerySecurity;             // offset: 0x8 (8)
    struct {
      ULONG SecurityInformation; // offset: 0x0 (0)
      VOID *SecurityDescriptor;  // offset: 0x8 (8)
    } SetSecurity;               // offset: 0x8 (8)
    struct {
      struct _VPB *Vpb;                    // offset: 0x0 (0)
      struct _DEVICE_OBJECT *DeviceObject; // offset: 0x8 (8)
    } MountVolume;                         // offset: 0x8 (8)
    struct {
      struct _VPB *Vpb;                    // offset: 0x0 (0)
      struct _DEVICE_OBJECT *DeviceObject; // offset: 0x8 (8)
    } VerifyVolume;                        // offset: 0x8 (8)
    struct {
      struct _SCSI_REQUEST_BLOCK *Srb; // offset: 0x0 (0)
    } Scsi;                            // offset: 0x8 (8)
    struct {
      ULONG Length;                                // offset: 0x0 (0)
      VOID *StartSid;                              // offset: 0x8 (8)
      struct _FILE_GET_QUOTA_INFORMATION *SidList; // offset: 0x10 (16)
      ULONG SidListLength;                         // offset: 0x18 (24)
    } QueryQuota;                                  // offset: 0x8 (8)
    struct {
      ULONG Length; // offset: 0x0 (0)
    } SetQuota;     // offset: 0x8 (8)
    struct {
      enum _DEVICE_RELATION_TYPE Type; // offset: 0x0 (0)
    } QueryDeviceRelations;            // offset: 0x8 (8)
    struct {
      struct _GUID *InterfaceType;  // offset: 0x0 (0)
      USHORT Size;                  // offset: 0x8 (8)
      USHORT Version;               // offset: 0xa (10)
      struct _INTERFACE *Interface; // offset: 0x10 (16)
      VOID *InterfaceSpecificData;  // offset: 0x18 (24)
    } QueryInterface;               // offset: 0x8 (8)
    struct {
      struct _DEVICE_CAPABILITIES *Capabilities; // offset: 0x0 (0)
    } DeviceCapabilities;                        // offset: 0x8 (8)
    struct {
      struct _IO_RESOURCE_REQUIREMENTS_LIST
          *IoResourceRequirementList; // offset: 0x0 (0)
    } FilterResourceRequirements;     // offset: 0x8 (8)
    struct {
      ULONG WhichSpace; // offset: 0x0 (0)
      VOID *Buffer;     // offset: 0x8 (8)
      ULONG Offset;     // offset: 0x10 (16)
      ULONG Length;     // offset: 0x18 (24)
    } ReadWriteConfig;  // offset: 0x8 (8)
    struct {
      UCHAR Lock; // offset: 0x0 (0)
    } SetLock;    // offset: 0x8 (8)
    struct {
      enum BUS_QUERY_ID_TYPE IdType; // offset: 0x0 (0)
    } QueryId;                       // offset: 0x8 (8)
    struct {
      enum DEVICE_TEXT_TYPE DeviceTextType; // offset: 0x0 (0)
      ULONG LocaleId;                       // offset: 0x8 (8)
    } QueryDeviceText;                      // offset: 0x8 (8)
    struct {
      UCHAR InPath;                              // offset: 0x0 (0)
      UCHAR Reserved[3];                         // offset: 0x1 (1)
      enum _DEVICE_USAGE_NOTIFICATION_TYPE Type; // offset: 0x8 (8)
    } UsageNotification;                         // offset: 0x8 (8)
    struct {
      enum _SYSTEM_POWER_STATE PowerState; // offset: 0x0 (0)
    } WaitWake;                            // offset: 0x8 (8)
    struct {
      struct _POWER_SEQUENCE *PowerSequence; // offset: 0x0 (0)
    } PowerSequence;                         // offset: 0x8 (8)
    struct {
      union {
        ULONG SystemContext; // offset: 0x0 (0)
        struct _SYSTEM_POWER_STATE_CONTEXT
            SystemPowerStateContext; // offset: 0x0 (0)
      };
      enum _POWER_STATE_TYPE Type;    // offset: 0x8 (8)
      union _POWER_STATE State;       // offset: 0x10 (16)
      enum POWER_ACTION ShutdownType; // offset: 0x18 (24)
    } Power;                          // offset: 0x8 (8)
    struct {
      struct _CM_RESOURCE_LIST *AllocatedResources;           // offset: 0x0 (0)
      struct _CM_RESOURCE_LIST *AllocatedResourcesTranslated; // offset: 0x8 (8)
    } StartDevice;                                            // offset: 0x8 (8)
    struct {
      ULONGLONG ProviderId; // offset: 0x0 (0)
      VOID *DataPath;       // offset: 0x8 (8)
      ULONG BufferSize;     // offset: 0x10 (16)
      VOID *Buffer;         // offset: 0x18 (24)
    } WMI;                  // offset: 0x8 (8)
    struct {
      VOID *Argument1; // offset: 0x0 (0)
      VOID *Argument2; // offset: 0x8 (8)
      VOID *Argument3; // offset: 0x10 (16)
      VOID *Argument4; // offset: 0x18 (24)
    } Others;          // offset: 0x8 (8)

  } Parameters;                        // offset: 0x8 (8)
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x28 (40)
  struct _FILE_OBJECT *FileObject;     // offset: 0x30 (48)
  LONG(*CompletionRoutine)
  (struct _DEVICE_OBJECT *arg1, struct _IRP *arg2,
   VOID *arg3);  // offset: 0x38 (56)
  VOID *Context; // offset: 0x40 (64)
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

// 0x20 (32) bytes
struct _KERNEL_STACK_SEGMENT {
  ULONGLONG StackBase;    // offset: 0x0 (0)
  ULONGLONG StackLimit;   // offset: 0x8 (8)
  ULONGLONG KernelStack;  // offset: 0x10 (16)
  ULONGLONG InitialStack; // offset: 0x18 (24)
};

// 0x30 (48) bytes
struct _KSTACK_CONTROL {
  ULONGLONG StackBase; // offset: 0x0 (0)
  union {
    ULONGLONG ActualLimit;        // offset: 0x8 (8)
    ULONGLONG StackExpansion : 1; // offset: 0x8 (8)
  };
  struct _KERNEL_STACK_SEGMENT Previous; // offset: 0x10 (16)
};

// 0x40 (64) bytes
struct _PPM_VETO_ENTRY {
  struct _LIST_ENTRY Link;      // offset: 0x0 (0)
  ULONG VetoReason;             // offset: 0x10 (16)
  ULONG ReferenceCount;         // offset: 0x14 (20)
  ULONGLONG HitCount;           // offset: 0x18 (24)
  ULONGLONG LastActivationTime; // offset: 0x20 (32)
  ULONGLONG TotalActiveTime;    // offset: 0x28 (40)
  ULONGLONG CsActivationTime;   // offset: 0x30 (48)
  ULONGLONG CsActiveTime;       // offset: 0x38 (56)
};

// 0x28 (40) bytes
struct _PPM_VETO_ACCOUNTING {
  volatile LONG VetoPresent;                    // offset: 0x0 (0)
  struct _LIST_ENTRY VetoListHead;              // offset: 0x8 (8)
  UCHAR CsAccountingBlocks;                     // offset: 0x18 (24)
  UCHAR BlocksDrips;                            // offset: 0x19 (25)
  ULONG PreallocatedVetoCount;                  // offset: 0x1c (28)
  struct _PPM_VETO_ENTRY *PreallocatedVetoList; // offset: 0x20 (32)
};

// 0x20 (32) bytes
struct _PROC_IDLE_STATE_BUCKET {
  ULONGLONG TotalTime; // offset: 0x0 (0)
  ULONGLONG MinTime;   // offset: 0x8 (8)
  ULONGLONG MaxTime;   // offset: 0x10 (16)
  ULONG Count;         // offset: 0x18 (24)
};

// 0x78 (120) bytes
struct _PPM_SELECTION_STATISTICS {
  ULONGLONG SelectedCount;                        // offset: 0x0 (0)
  ULONGLONG VetoCount;                            // offset: 0x8 (8)
  ULONGLONG PreVetoCount;                         // offset: 0x10 (16)
  ULONGLONG WrongProcessorCount;                  // offset: 0x18 (24)
  ULONGLONG LatencyCount;                         // offset: 0x20 (32)
  ULONGLONG IdleDurationCount;                    // offset: 0x28 (40)
  ULONGLONG DeviceDependencyCount;                // offset: 0x30 (48)
  ULONGLONG ProcessorDependencyCount;             // offset: 0x38 (56)
  ULONGLONG PlatformOnlyCount;                    // offset: 0x40 (64)
  ULONGLONG InterruptibleCount;                   // offset: 0x48 (72)
  ULONGLONG LegacyOverrideCount;                  // offset: 0x50 (80)
  ULONGLONG CstateCheckCount;                     // offset: 0x58 (88)
  ULONGLONG NoCStateCount;                        // offset: 0x60 (96)
  ULONGLONG CoordinatedDependencyCount;           // offset: 0x68 (104)
  struct _PPM_VETO_ACCOUNTING *PreVetoAccounting; // offset: 0x70 (112)
};

// 0x3e8 (1000) bytes
struct _PLATFORM_IDLE_STATE_ACCOUNTING {
  ULONG CancelCount;                                    // offset: 0x0 (0)
  ULONG FailureCount;                                   // offset: 0x4 (4)
  ULONG SuccessCount;                                   // offset: 0x8 (8)
  ULONGLONG MaxTime;                                    // offset: 0x10 (16)
  ULONGLONG MinTime;                                    // offset: 0x18 (24)
  ULONGLONG TotalTime;                                  // offset: 0x20 (32)
  ULONG InvalidBucketIndex;                             // offset: 0x28 (40)
  struct _PPM_SELECTION_STATISTICS SelectionStatistics; // offset: 0x30 (48)
  struct _PROC_IDLE_STATE_BUCKET IdleTimeBuckets[26];   // offset: 0xa8 (168)
};

// 0x400 (1024) bytes
struct _PLATFORM_IDLE_ACCOUNTING {
  ULONG ResetCount;                                // offset: 0x0 (0)
  ULONG StateCount;                                // offset: 0x4 (4)
  ULONG DeepSleepCount;                            // offset: 0x8 (8)
  enum PPM_IDLE_BUCKET_TIME_TYPE TimeUnit;         // offset: 0xc (12)
  ULONGLONG StartTime;                             // offset: 0x10 (16)
  struct _PLATFORM_IDLE_STATE_ACCOUNTING State[1]; // offset: 0x18 (24)
};

// 0x18 (24) bytes
struct _COUNTER_READING {
  enum _HARDWARE_COUNTER_TYPE Type; // offset: 0x0 (0)
  ULONG Index;                      // offset: 0x4 (4)
  ULONGLONG Start;                  // offset: 0x8 (8)
  ULONGLONG Total;                  // offset: 0x10 (16)
};

// 0x1c0 (448) bytes
struct _THREAD_PERFORMANCE_DATA {
  USHORT Size;                              // offset: 0x0 (0)
  USHORT Version;                           // offset: 0x2 (2)
  struct _PROCESSOR_NUMBER ProcessorNumber; // offset: 0x4 (4)
  ULONG ContextSwitches;                    // offset: 0x8 (8)
  ULONG HwCountersCount;                    // offset: 0xc (12)
  volatile ULONGLONG UpdateCount;           // offset: 0x10 (16)
  ULONGLONG WaitReasonBitMap;               // offset: 0x18 (24)
  ULONGLONG HardwareCounters;               // offset: 0x20 (32)
  struct _COUNTER_READING CycleTime;        // offset: 0x28 (40)
  struct _COUNTER_READING HwCounters[16];   // offset: 0x40 (64)
};

// 0x3e0 (992) bytes
struct _PROC_IDLE_STATE_ACCOUNTING {
  ULONGLONG TotalTime;                                  // offset: 0x0 (0)
  ULONG CancelCount;                                    // offset: 0x8 (8)
  ULONG FailureCount;                                   // offset: 0xc (12)
  ULONG SuccessCount;                                   // offset: 0x10 (16)
  ULONG InvalidBucketIndex;                             // offset: 0x14 (20)
  ULONGLONG MinTime;                                    // offset: 0x18 (24)
  ULONGLONG MaxTime;                                    // offset: 0x20 (32)
  struct _PPM_SELECTION_STATISTICS SelectionStatistics; // offset: 0x28 (40)
  struct _PROC_IDLE_STATE_BUCKET IdleTimeBuckets[26];   // offset: 0xa0 (160)
};

// 0x30 (48) bytes
struct _PROCESSOR_IDLE_CONSTRAINTS {
  ULONGLONG TotalTime;            // offset: 0x0 (0)
  ULONGLONG IdleTime;             // offset: 0x8 (8)
  ULONGLONG ExpectedIdleDuration; // offset: 0x10 (16)
  ULONGLONG MaxIdleDuration;      // offset: 0x18 (24)
  ULONG OverrideState;            // offset: 0x20 (32)
  ULONG TimeCheck;                // offset: 0x24 (36)
  UCHAR PromotePercent;           // offset: 0x28 (40)
  UCHAR DemotePercent;            // offset: 0x29 (41)
  UCHAR Parked;                   // offset: 0x2a (42)
  UCHAR Interruptible;            // offset: 0x2b (43)
  UCHAR PlatformIdle;             // offset: 0x2c (44)
  UCHAR ExpectedWakeReason;       // offset: 0x2d (45)
};

// 0x58 (88) bytes
struct _PROCESSOR_IDLE_PREPARE_INFO {
  VOID *Context;                                      // offset: 0x0 (0)
  struct _PROCESSOR_IDLE_CONSTRAINTS Constraints;     // offset: 0x8 (8)
  ULONG DependencyCount;                              // offset: 0x38 (56)
  ULONG DependencyUsed;                               // offset: 0x3c (60)
  struct _PROCESSOR_IDLE_DEPENDENCY *DependencyArray; // offset: 0x40 (64)
  ULONG PlatformIdleStateIndex;                       // offset: 0x48 (72)
  ULONG ProcessorIdleStateIndex;                      // offset: 0x4c (76)
  ULONG IdleSelectFailureMask;                        // offset: 0x50 (80)
};

// 0x10 (16) bytes
struct _KLOCK_ENTRY_LOCK_STATE {
  union {
    struct {
      ULONGLONG CrossThreadReleasable : 1; // offset: 0x0 (0)
      ULONGLONG Busy : 1;                  // offset: 0x0 (0)
      ULONGLONG Reserved : 61;             // offset: 0x0 (0)
      ULONGLONG InTree : 1;                // offset: 0x0 (0)
    };
    VOID *LockState; // offset: 0x0 (0)
  };
  union {
    VOID *SessionState; // offset: 0x8 (8)
    struct {
      ULONG SessionId;  // offset: 0x8 (8)
      ULONG SessionPad; // offset: 0xc (12)
    };
  };
};

// 0x3b0 (944) bytes
struct PO_MEMORY_IMAGE {
  ULONG Signature;                           // offset: 0x0 (0)
  ULONG ImageType;                           // offset: 0x4 (4)
  ULONG CheckSum;                            // offset: 0x8 (8)
  ULONG LengthSelf;                          // offset: 0xc (12)
  ULONGLONG PageSelf;                        // offset: 0x10 (16)
  ULONG PageSize;                            // offset: 0x18 (24)
  union _LARGE_INTEGER SystemTime;           // offset: 0x20 (32)
  ULONGLONG InterruptTime;                   // offset: 0x28 (40)
  ULONGLONG FeatureFlags;                    // offset: 0x30 (48)
  UCHAR HiberFlags;                          // offset: 0x38 (56)
  UCHAR spare[3];                            // offset: 0x39 (57)
  ULONG NoHiberPtes;                         // offset: 0x3c (60)
  ULONGLONG HiberVa;                         // offset: 0x40 (64)
  ULONG NoFreePages;                         // offset: 0x48 (72)
  ULONG FreeMapCheck;                        // offset: 0x4c (76)
  ULONG WakeCheck;                           // offset: 0x50 (80)
  ULONGLONG NumPagesForLoader;               // offset: 0x58 (88)
  ULONGLONG FirstSecureRestorePage;          // offset: 0x60 (96)
  ULONGLONG FirstBootRestorePage;            // offset: 0x68 (104)
  ULONGLONG FirstKernelRestorePage;          // offset: 0x70 (112)
  ULONGLONG FirstChecksumRestorePage;        // offset: 0x78 (120)
  ULONGLONG NoChecksumEntries;               // offset: 0x80 (128)
  struct _PO_HIBER_PERF PerfInfo;            // offset: 0x88 (136)
  ULONG FirmwareRuntimeInformationPages;     // offset: 0x268 (616)
  ULONGLONG FirmwareRuntimeInformation[1];   // offset: 0x270 (624)
  ULONG SiLogOffset;                         // offset: 0x278 (632)
  ULONG NoBootLoaderLogPages;                // offset: 0x27c (636)
  ULONGLONG BootLoaderLogPages[24];          // offset: 0x280 (640)
  ULONG NotUsed;                             // offset: 0x340 (832)
  ULONG ResumeContextCheck;                  // offset: 0x344 (836)
  ULONG ResumeContextPages;                  // offset: 0x348 (840)
  UCHAR Hiberboot;                           // offset: 0x34c (844)
  ULONGLONG HvCr3;                           // offset: 0x350 (848)
  ULONGLONG HvEntryPoint;                    // offset: 0x358 (856)
  ULONGLONG HvReservedTransitionAddress;     // offset: 0x360 (864)
  ULONGLONG HvReservedTransitionAddressSize; // offset: 0x368 (872)
  ULONGLONG BootFlags;                       // offset: 0x370 (880)
  ULONGLONG HalEntryPointPhysical;           // offset: 0x378 (888)
  ULONGLONG HighestPhysicalPage;             // offset: 0x380 (896)
  ULONGLONG BitlockerKeyPfns[4];             // offset: 0x388 (904)
  ULONG HardwareSignature;                   // offset: 0x3a8 (936)
};

// 0x58 (88) bytes
struct _CM_CACHED_VALUE_INDEX {
  ULONG CellIndex; // offset: 0x0 (0)
  union {
    struct _CELL_DATA CellData; // offset: 0x8 (8)
    ULONGLONG List[1];          // offset: 0x8 (8)

  } Data; // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _PS_TRUSTLET_ATTRIBUTE_DATA {
  struct _PS_TRUSTLET_ATTRIBUTE_HEADER Header; // offset: 0x0 (0)
  ULONGLONG Data[1];                           // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _PS_TRUSTLET_CREATE_ATTRIBUTES {
  ULONGLONG TrustletIdentity;                       // offset: 0x0 (0)
  struct _PS_TRUSTLET_ATTRIBUTE_DATA Attributes[1]; // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _KHETERO_PROCESSOR_SET {
  ULONGLONG PreferredMask; // offset: 0x0 (0)
  ULONGLONG AvailableMask; // offset: 0x8 (8)
};

// 0x1a8 (424) bytes
struct _KTHREAD_COUNTERS {
  ULONGLONG WaitReasonBitMap;                // offset: 0x0 (0)
  struct _THREAD_PERFORMANCE_DATA *UserData; // offset: 0x8 (8)
  ULONG Flags;                               // offset: 0x10 (16)
  ULONG ContextSwitches;                     // offset: 0x14 (20)
  ULONGLONG CycleTimeBias;                   // offset: 0x18 (24)
  ULONGLONG HardwareCounters;                // offset: 0x20 (32)
  struct _COUNTER_READING HwCounter[16];     // offset: 0x28 (40)
};

// 0x40 (64) bytes
struct _XSAVE_AREA_HEADER {
  ULONGLONG Mask;           // offset: 0x0 (0)
  ULONGLONG CompactionMask; // offset: 0x8 (8)
  ULONGLONG Reserved2[6];   // offset: 0x10 (16)
};

// 0x60 (96) bytes
struct _PEBS_DS_SAVE_AREA {
  ULONGLONG BtsBufferBase;          // offset: 0x0 (0)
  ULONGLONG BtsIndex;               // offset: 0x8 (8)
  ULONGLONG BtsAbsoluteMaximum;     // offset: 0x10 (16)
  ULONGLONG BtsInterruptThreshold;  // offset: 0x18 (24)
  ULONGLONG PebsBufferBase;         // offset: 0x20 (32)
  ULONGLONG PebsIndex;              // offset: 0x28 (40)
  ULONGLONG PebsAbsoluteMaximum;    // offset: 0x30 (48)
  ULONGLONG PebsInterruptThreshold; // offset: 0x38 (56)
  ULONGLONG PebsCounterReset0;      // offset: 0x40 (64)
  ULONGLONG PebsCounterReset1;      // offset: 0x48 (72)
  ULONGLONG PebsCounterReset2;      // offset: 0x50 (80)
  ULONGLONG PebsCounterReset3;      // offset: 0x58 (88)
};

// 0x60 (96) bytes
struct _PROCESSOR_PROFILE_CONTROL_AREA {
  struct _PEBS_DS_SAVE_AREA PebsDsSaveArea; // offset: 0x0 (0)
};

// 0x28 (40) bytes
struct _PPM_CONCURRENCY_ACCOUNTING {
  ULONGLONG Lock;               // offset: 0x0 (0)
  ULONG Processors;             // offset: 0x8 (8)
  ULONG ActiveProcessors;       // offset: 0xc (12)
  ULONGLONG LastUpdateTime;     // offset: 0x10 (16)
  ULONGLONG TotalTime;          // offset: 0x18 (24)
  ULONGLONG AccumulatedTime[1]; // offset: 0x20 (32)
};

// 0x408 (1032) bytes
struct _PROC_IDLE_ACCOUNTING {
  ULONG StateCount;                            // offset: 0x0 (0)
  ULONG TotalTransitions;                      // offset: 0x4 (4)
  ULONG ResetCount;                            // offset: 0x8 (8)
  ULONG AbortCount;                            // offset: 0xc (12)
  ULONGLONG StartTime;                         // offset: 0x10 (16)
  ULONGLONG PriorIdleTime;                     // offset: 0x18 (24)
  enum PPM_IDLE_BUCKET_TIME_TYPE TimeUnit;     // offset: 0x20 (32)
  struct _PROC_IDLE_STATE_ACCOUNTING State[1]; // offset: 0x28 (40)
};

// 0x10 (16) bytes
struct _GROUP_AFFINITY {
  ULONGLONG Mask;     // offset: 0x0 (0)
  USHORT Group;       // offset: 0x8 (8)
  USHORT Reserved[3]; // offset: 0xa (10)
};

// 0x40 (64) bytes
struct _REQUEST_MAILBOX {
  struct _REQUEST_MAILBOX *Next;         // offset: 0x0 (0)
  ULONGLONG RequestSummary;              // offset: 0x8 (8)
  struct _KREQUEST_PACKET RequestPacket; // offset: 0x10 (16)
  volatile LONG *NodeTargetCountAddr;    // offset: 0x30 (48)
  volatile LONG NodeTargetCount;         // offset: 0x38 (56)
};

// 0x10 (16) bytes
struct _KTIMER_EXPIRATION_TRACE {
  ULONGLONG InterruptTime;                 // offset: 0x0 (0)
  union _LARGE_INTEGER PerformanceCounter; // offset: 0x8 (8)
};

// 0x150 (336) bytes
struct _POP_THERMAL_TELEMETRY_TRACKER {
  UCHAR AccountingDisabled;        // offset: 0x0 (0)
  ULONGLONG LastPassiveUpdateTime; // offset: 0x8 (8)
  ULONGLONG TotalPassiveTime[20];  // offset: 0x10 (16)
  ULONGLONG PassiveTimeSnap[20];   // offset: 0xb0 (176)
};

// 0xa8 (168) bytes
struct _KAFFINITY_EX {
  USHORT Count;         // offset: 0x0 (0)
  USHORT Size;          // offset: 0x2 (2)
  ULONG Reserved;       // offset: 0x4 (4)
  ULONGLONG Bitmap[20]; // offset: 0x8 (8)
};

// 0x180 (384) bytes
struct _PPM_PLATFORM_STATE {
  ULONG Latency;                                     // offset: 0x0 (0)
  ULONG BreakEvenDuration;                           // offset: 0x4 (4)
  struct _PPM_VETO_ACCOUNTING VetoAccounting;        // offset: 0x8 (8)
  UCHAR TransitionDebugger;                          // offset: 0x30 (48)
  UCHAR Platform;                                    // offset: 0x31 (49)
  ULONG DependencyListCount;                         // offset: 0x34 (52)
  struct _KAFFINITY_EX Processors;                   // offset: 0x38 (56)
  struct _UNICODE_STRING Name;                       // offset: 0xe0 (224)
  struct _PPM_SELECTION_DEPENDENCY *DependencyLists; // offset: 0xf0 (240)
  union _PPM_COORDINATED_SYNCHRONIZATION volatile Synchronization; // offset:
                                                                   // 0xf8 (248)
  volatile ULONGLONG EnterTime; // offset: 0x100 (256)
  union {
    volatile LONG RefCount; // offset: 0x140 (320)
    UCHAR CacheAlign0[64];  // offset: 0x140 (320)
  };
};

// 0x1c0 (448) bytes
struct _PPM_PLATFORM_STATES {
  ULONG StateCount;                                      // offset: 0x0 (0)
  ULONG InterfaceVersion;                                // offset: 0x4 (4)
  ULONG ProcessorCount;                                  // offset: 0x8 (8)
  UCHAR CoordinatedInterface;                            // offset: 0xc (12)
  ULONG (*IdleTest)(VOID *arg1, ULONG arg2, ULONG arg3); // offset: 0x10 (16)
  LONG(*IdlePreExecute)
  (VOID *arg1, ULONG arg2, ULONG arg3, ULONG arg4,
   ULONG *arg5); // offset: 0x18 (24)
  VOID(*IdleComplete)
  (VOID *arg1, ULONG arg2, ULONG arg3, ULONG arg4,
   ULONG *arg5); // offset: 0x20 (32)
  LONG(*QueryPlatformStateResidency)
  (VOID *arg1,
   struct _PROCESSOR_PLATFORM_STATE_RESIDENCIES *arg2); // offset: 0x28 (40)
  struct _PLATFORM_IDLE_ACCOUNTING *Accounting;         // offset: 0x30 (48)
  struct _PPM_PLATFORM_STATE State[1];                  // offset: 0x40 (64)
};

// 0xf8 (248) bytes
struct _PPM_IDLE_STATE {
  struct _KAFFINITY_EX DomainMembers;         // offset: 0x0 (0)
  struct _UNICODE_STRING Name;                // offset: 0xa8 (168)
  ULONG Latency;                              // offset: 0xb8 (184)
  ULONG BreakEvenDuration;                    // offset: 0xbc (188)
  ULONG Power;                                // offset: 0xc0 (192)
  ULONG StateFlags;                           // offset: 0xc4 (196)
  struct _PPM_VETO_ACCOUNTING VetoAccounting; // offset: 0xc8 (200)
  UCHAR StateType;                            // offset: 0xf0 (240)
  UCHAR InterruptsEnabled;                    // offset: 0xf1 (241)
  UCHAR Interruptible;                        // offset: 0xf2 (242)
  UCHAR ContextRetained;                      // offset: 0xf3 (243)
  UCHAR CacheCoherent;                        // offset: 0xf4 (244)
  UCHAR WakesSpuriously;                      // offset: 0xf5 (245)
  UCHAR PlatformOnly;                         // offset: 0xf6 (246)
  UCHAR NoCState;                             // offset: 0xf7 (247)
};

// 0x2d8 (728) bytes
struct _KPROCESS {
  struct _DISPATCHER_HEADER Header;               // offset: 0x0 (0)
  struct _LIST_ENTRY ProfileListHead;             // offset: 0x18 (24)
  ULONGLONG DirectoryTableBase;                   // offset: 0x28 (40)
  struct _LIST_ENTRY ThreadListHead;              // offset: 0x30 (48)
  ULONG ProcessLock;                              // offset: 0x40 (64)
  ULONG Spare0;                                   // offset: 0x44 (68)
  ULONGLONG DeepFreezeStartTime;                  // offset: 0x48 (72)
  struct _KAFFINITY_EX Affinity;                  // offset: 0x50 (80)
  struct _LIST_ENTRY ReadyListHead;               // offset: 0xf8 (248)
  struct _SINGLE_LIST_ENTRY SwapListEntry;        // offset: 0x108 (264)
  volatile struct _KAFFINITY_EX ActiveProcessors; // offset: 0x110 (272)
  union {
    struct {
      LONG AutoAlignment : 1;        // offset: 0x1b8 (440)
      LONG DisableBoost : 1;         // offset: 0x1b8 (440)
      LONG DisableQuantum : 1;       // offset: 0x1b8 (440)
      ULONG DeepFreeze : 1;          // offset: 0x1b8 (440)
      ULONG TimerVirtualization : 1; // offset: 0x1b8 (440)
      ULONG CheckStackExtents : 1;   // offset: 0x1b8 (440)
      ULONG SpareFlags0 : 2;         // offset: 0x1b8 (440)
      ULONG ActiveGroupsMask : 20;   // offset: 0x1b8 (440)
      LONG ReservedFlags : 4;        // offset: 0x1b8 (440)
    };
    volatile LONG ProcessFlags; // offset: 0x1b8 (440)
  };
  CHAR BasePriority;                          // offset: 0x1bc (444)
  CHAR QuantumReset;                          // offset: 0x1bd (445)
  UCHAR Visited;                              // offset: 0x1be (446)
  union _KEXECUTE_OPTIONS Flags;              // offset: 0x1bf (447)
  ULONG ThreadSeed[20];                       // offset: 0x1c0 (448)
  USHORT IdealNode[20];                       // offset: 0x210 (528)
  USHORT IdealGlobalNode;                     // offset: 0x238 (568)
  USHORT Spare1;                              // offset: 0x23a (570)
  union _KSTACK_COUNT volatile StackCount;    // offset: 0x23c (572)
  struct _LIST_ENTRY ProcessListEntry;        // offset: 0x240 (576)
  ULONGLONG CycleTime;                        // offset: 0x250 (592)
  ULONGLONG ContextSwitches;                  // offset: 0x258 (600)
  struct _KSCHEDULING_GROUP *SchedulingGroup; // offset: 0x260 (608)
  ULONG FreezeCount;                          // offset: 0x268 (616)
  ULONG KernelTime;                           // offset: 0x26c (620)
  ULONG UserTime;                             // offset: 0x270 (624)
  USHORT LdtFreeSelectorHint;                 // offset: 0x274 (628)
  USHORT LdtTableLength;                      // offset: 0x276 (630)
  union _KGDTENTRY64 LdtSystemDescriptor;     // offset: 0x278 (632)
  VOID *LdtBaseAddress;                       // offset: 0x288 (648)
  struct _FAST_MUTEX LdtProcessLock;          // offset: 0x290 (656)
  VOID *InstrumentationCallback;              // offset: 0x2c8 (712)
  ULONGLONG SecurePid;                        // offset: 0x2d0 (720)
};

// 0x30 (48) bytes
struct _KAPC_STATE {
  struct _LIST_ENTRY ApcListHead[2]; // offset: 0x0 (0)
  struct _KPROCESS *Process;         // offset: 0x20 (32)
  union {
    UCHAR InProgressFlags; // offset: 0x28 (40)
    struct {
      UCHAR KernelApcInProgress : 1;  // offset: 0x28 (40)
      UCHAR SpecialApcInProgress : 1; // offset: 0x28 (40)
    };
  };
  UCHAR KernelApcPending; // offset: 0x29 (41)
  UCHAR UserApcPending;   // offset: 0x2a (42)
};

// 0x418 (1048) bytes
struct _PPM_IDLE_STATES {
  UCHAR InterfaceVersion;                      // offset: 0x0 (0)
  UCHAR ForceIdle;                             // offset: 0x1 (1)
  UCHAR EstimateIdleDuration;                  // offset: 0x2 (2)
  UCHAR ExitLatencyTraceEnabled;               // offset: 0x3 (3)
  UCHAR NonInterruptibleTransition;            // offset: 0x4 (4)
  UCHAR UnaccountedTransition;                 // offset: 0x5 (5)
  UCHAR IdleDurationLimited;                   // offset: 0x6 (6)
  ULONG ExitLatencyCountdown;                  // offset: 0x8 (8)
  ULONG TargetState;                           // offset: 0xc (12)
  ULONG ActualState;                           // offset: 0x10 (16)
  ULONG OldState;                              // offset: 0x14 (20)
  ULONG OverrideIndex;                         // offset: 0x18 (24)
  ULONG ProcessorIdleCount;                    // offset: 0x1c (28)
  ULONG Type;                                  // offset: 0x20 (32)
  USHORT ReasonFlags;                          // offset: 0x24 (36)
  volatile ULONGLONG InitiateWakeStamp;        // offset: 0x28 (40)
  LONG PreviousStatus;                         // offset: 0x30 (48)
  ULONG PreviousCancelReason;                  // offset: 0x34 (52)
  struct _KAFFINITY_EX PrimaryProcessorMask;   // offset: 0x38 (56)
  struct _KAFFINITY_EX SecondaryProcessorMask; // offset: 0xe0 (224)
  VOID(*IdlePrepare)
  (struct _PROCESSOR_IDLE_PREPARE_INFO *arg1); // offset: 0x188 (392)
  LONG(*IdlePreExecute)
  (VOID *arg1, ULONG arg2, ULONG arg3, ULONG arg4,
   ULONG *arg5); // offset: 0x190 (400)
  LONG(*IdleExecute)
  (VOID *arg1, ULONG arg2, ULONG arg3, ULONG arg4,
   ULONG *arg5); // offset: 0x198 (408)
  ULONG(*IdlePreselect)
  (VOID *arg1, struct _PROCESSOR_IDLE_CONSTRAINTS *arg2); // offset: 0x1a0 (416)
  ULONG (*IdleTest)(VOID *arg1, ULONG arg2, ULONG arg3);  // offset: 0x1a8 (424)
  ULONG (*IdleAvailabilityCheck)(VOID *arg1, ULONG arg2); // offset: 0x1b0 (432)
  VOID(*IdleComplete)
  (VOID *arg1, ULONG arg2, ULONG arg3, ULONG arg4,
   ULONG *arg5);                                   // offset: 0x1b8 (440)
  VOID (*IdleCancel)(VOID *arg1, ULONG arg2);      // offset: 0x1c0 (448)
  UCHAR (*IdleIsHalted)(VOID *arg1);               // offset: 0x1c8 (456)
  UCHAR (*IdleInitiateWake)(VOID *arg1);           // offset: 0x1d0 (464)
  struct _PROCESSOR_IDLE_PREPARE_INFO PrepareInfo; // offset: 0x1d8 (472)
  struct _KAFFINITY_EX DeepIdleSnapshot;           // offset: 0x230 (560)
  struct _PERFINFO_PPM_STATE_SELECTION *Tracing;   // offset: 0x2d8 (728)
  struct _PERFINFO_PPM_STATE_SELECTION
      *CoordinatedTracing;                                // offset: 0x2e0 (736)
  struct _PPM_SELECTION_MENU ProcessorMenu;               // offset: 0x2e8 (744)
  struct _PPM_SELECTION_MENU CoordinatedMenu;             // offset: 0x2f8 (760)
  struct _PPM_COORDINATED_SELECTION CoordinatedSelection; // offset: 0x308 (776)
  struct _PPM_IDLE_STATE State[1];                        // offset: 0x320 (800)
};

// 0x10 (16) bytes
struct _PROC_IDLE_SNAP {
  ULONGLONG Time; // offset: 0x0 (0)
  ULONGLONG Idle; // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _PPM_FFH_THROTTLE_STATE_INFO {
  UCHAR EnableLogging;                   // offset: 0x0 (0)
  ULONG MismatchCount;                   // offset: 0x4 (4)
  UCHAR Initialized;                     // offset: 0x8 (8)
  ULONGLONG LastValue;                   // offset: 0x10 (16)
  union _LARGE_INTEGER LastLogTickCount; // offset: 0x18 (24)
};

// 0x100 (256) bytes
struct _KNODE {
  ULONGLONG IdleNonParkedCpuSet; // offset: 0x0 (0)
  ULONGLONG IdleSmtSet;          // offset: 0x8 (8)
  ULONGLONG IdleCpuSet;          // offset: 0x10 (16)
  ULONGLONG DeepIdleSet;         // offset: 0x40 (64)
  ULONGLONG IdleConstrainedSet;  // offset: 0x48 (72)
  ULONGLONG NonParkedSet;        // offset: 0x50 (80)
  LONG ParkLock;                 // offset: 0x58 (88)
  ULONG Seed;                    // offset: 0x5c (92)
  ULONG SiblingMask;             // offset: 0x80 (128)
  union {
    struct _GROUP_AFFINITY Affinity; // offset: 0x88 (136)
    struct {
      UCHAR AffinityFill[10];   // offset: 0x88 (136)
      USHORT NodeNumber;        // offset: 0x92 (146)
      USHORT PrimaryNodeNumber; // offset: 0x94 (148)
      UCHAR Stride;             // offset: 0x96 (150)
      UCHAR Spare0;             // offset: 0x97 (151)
    };
  };
  ULONGLONG SharedReadyQueueLeaders;           // offset: 0x98 (152)
  ULONG ProximityId;                           // offset: 0xa0 (160)
  ULONG Lowest;                                // offset: 0xa4 (164)
  ULONG Highest;                               // offset: 0xa8 (168)
  UCHAR MaximumProcessors;                     // offset: 0xac (172)
  struct _flags Flags;                         // offset: 0xad (173)
  UCHAR Spare10;                               // offset: 0xae (174)
  struct _KHETERO_PROCESSOR_SET HeteroSets[5]; // offset: 0xb0 (176)
};

// 0xe0 (224) bytes
struct _KSPECIAL_REGISTERS {
  ULONGLONG Cr0;                  // offset: 0x0 (0)
  ULONGLONG Cr2;                  // offset: 0x8 (8)
  ULONGLONG Cr3;                  // offset: 0x10 (16)
  ULONGLONG Cr4;                  // offset: 0x18 (24)
  ULONGLONG KernelDr0;            // offset: 0x20 (32)
  ULONGLONG KernelDr1;            // offset: 0x28 (40)
  ULONGLONG KernelDr2;            // offset: 0x30 (48)
  ULONGLONG KernelDr3;            // offset: 0x38 (56)
  ULONGLONG KernelDr6;            // offset: 0x40 (64)
  ULONGLONG KernelDr7;            // offset: 0x48 (72)
  struct _KDESCRIPTOR Gdtr;       // offset: 0x50 (80)
  struct _KDESCRIPTOR Idtr;       // offset: 0x60 (96)
  USHORT Tr;                      // offset: 0x70 (112)
  USHORT Ldtr;                    // offset: 0x72 (114)
  ULONG MxCsr;                    // offset: 0x74 (116)
  ULONGLONG DebugControl;         // offset: 0x78 (120)
  ULONGLONG LastBranchToRip;      // offset: 0x80 (128)
  ULONGLONG LastBranchFromRip;    // offset: 0x88 (136)
  ULONGLONG LastExceptionToRip;   // offset: 0x90 (144)
  ULONGLONG LastExceptionFromRip; // offset: 0x98 (152)
  ULONGLONG Cr8;                  // offset: 0xa0 (160)
  ULONGLONG MsrGsBase;            // offset: 0xa8 (168)
  ULONGLONG MsrGsSwap;            // offset: 0xb0 (176)
  ULONGLONG MsrStar;              // offset: 0xb8 (184)
  ULONGLONG MsrLStar;             // offset: 0xc0 (192)
  ULONGLONG MsrCStar;             // offset: 0xc8 (200)
  ULONGLONG MsrSyscallMask;       // offset: 0xd0 (208)
  ULONGLONG Xcr0;                 // offset: 0xd8 (216)
};

// 0x10 (16) bytes
struct _KSPIN_LOCK_QUEUE {
  struct _KSPIN_LOCK_QUEUE *volatile Next; // offset: 0x0 (0)
  ULONGLONG *volatile Lock;                // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _KLOCK_QUEUE_HANDLE {
  struct _KSPIN_LOCK_QUEUE LockQueue; // offset: 0x0 (0)
  UCHAR OldIrql;                      // offset: 0x10 (16)
};

// 0x260 (608) bytes
struct _KSHARED_READY_QUEUE {
  ULONGLONG Lock;                       // offset: 0x0 (0)
  ULONG ReadySummary;                   // offset: 0x8 (8)
  struct _LIST_ENTRY ReadyListHead[32]; // offset: 0x10 (16)
  CHAR RunningSummary[64];              // offset: 0x210 (528)
  UCHAR Span;                           // offset: 0x250 (592)
  UCHAR LowProcIndex;                   // offset: 0x251 (593)
  UCHAR QueueIndex;                     // offset: 0x252 (594)
  UCHAR ProcCount;                      // offset: 0x253 (595)
  UCHAR ScanOwner;                      // offset: 0x254 (596)
  UCHAR Spare[3];                       // offset: 0x255 (597)
  ULONGLONG Affinity;                   // offset: 0x258 (600)
};

// 0x38 (56) bytes
struct _PS_WAKE_INFORMATION {
  ULONGLONG NotificationChannel; // offset: 0x0 (0)
  ULONGLONG WakeCounters[5];     // offset: 0x8 (8)
  ULONGLONG NoWakeCounter;       // offset: 0x30 (48)
};

// 0x150 (336) bytes
struct _ARBITER_INSTANCE {
  ULONG Signature;                                   // offset: 0x0 (0)
  struct _KEVENT *MutexEvent;                        // offset: 0x8 (8)
  USHORT *Name;                                      // offset: 0x10 (16)
  USHORT *OrderingName;                              // offset: 0x18 (24)
  LONG ResourceType;                                 // offset: 0x20 (32)
  struct _RTL_RANGE_LIST *Allocation;                // offset: 0x28 (40)
  struct _RTL_RANGE_LIST *PossibleAllocation;        // offset: 0x30 (48)
  struct _ARBITER_ORDERING_LIST OrderingList;        // offset: 0x38 (56)
  struct _ARBITER_ORDERING_LIST ReservedList;        // offset: 0x48 (72)
  LONG ReferenceCount;                               // offset: 0x58 (88)
  struct _ARBITER_INTERFACE *Interface;              // offset: 0x60 (96)
  ULONG AllocationStackMaxSize;                      // offset: 0x68 (104)
  struct _ARBITER_ALLOCATION_STATE *AllocationStack; // offset: 0x70 (112)
  LONG(*UnpackRequirement)
  (struct _IO_RESOURCE_DESCRIPTOR *arg1, ULONGLONG *arg2, ULONGLONG *arg3,
   ULONGLONG *arg4, ULONGLONG *arg5); // offset: 0x78 (120)
  LONG(*PackResource)
  (struct _IO_RESOURCE_DESCRIPTOR *arg1, ULONGLONG arg2,
   struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *arg3); // offset: 0x80 (128)
  LONG(*UnpackResource)
  (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *arg1, ULONGLONG *arg2,
   ULONGLONG *arg3); // offset: 0x88 (136)
  LONG(*ScoreRequirement)
  (struct _IO_RESOURCE_DESCRIPTOR *arg1); // offset: 0x90 (144)
  LONG(*TestAllocation)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_TEST_ALLOCATION_PARAMETERS *arg2); // offset: 0x98 (152)
  LONG(*RetestAllocation)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_RETEST_ALLOCATION_PARAMETERS *arg2); // offset: 0xa0 (160)
  LONG(*CommitAllocation)
  (struct _ARBITER_INSTANCE *arg1); // offset: 0xa8 (168)
  LONG(*RollbackAllocation)
  (struct _ARBITER_INSTANCE *arg1); // offset: 0xb0 (176)
  LONG(*BootAllocation)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_BOOT_ALLOCATION_PARAMETERS *arg2); // offset: 0xb8 (184)
  LONG(*QueryArbitrate)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_QUERY_ARBITRATE_PARAMETERS *arg2); // offset: 0xc0 (192)
  LONG(*QueryConflict)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_QUERY_CONFLICT_PARAMETERS *arg2); // offset: 0xc8 (200)
  LONG(*AddReserved)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ADD_RESERVED_PARAMETERS *arg2); // offset: 0xd0 (208)
  LONG(*StartArbiter)
  (struct _ARBITER_INSTANCE *arg1,
   struct _CM_RESOURCE_LIST *arg2); // offset: 0xd8 (216)
  LONG(*PreprocessEntry)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0xe0 (224)
  LONG(*AllocateEntry)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0xe8 (232)
  UCHAR(*GetNextAllocationRange)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0xf0 (240)
  UCHAR(*FindSuitableRange)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0xf8 (248)
  VOID(*AddAllocation)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x100 (256)
  VOID(*BacktrackAllocation)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x108 (264)
  UCHAR(*OverrideConflict)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x110 (272)
  LONG(*InitializeRangeList)
  (struct _ARBITER_INSTANCE *arg1, ULONG arg2,
   struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *arg3,
   struct _RTL_RANGE_LIST *arg4);         // offset: 0x118 (280)
  UCHAR TransactionInProgress;            // offset: 0x120 (288)
  struct _KEVENT *TransactionEvent;       // offset: 0x128 (296)
  VOID *Extension;                        // offset: 0x130 (304)
  struct _DEVICE_OBJECT *BusDeviceObject; // offset: 0x138 (312)
  VOID *ConflictCallbackContext;          // offset: 0x140 (320)
  UCHAR(*ConflictCallback)
  (VOID *arg1, struct _RTL_RANGE *arg2); // offset: 0x148 (328)
};

// 0x38 (56) bytes
struct _POP_FX_DRIVER_CALLBACKS {
  VOID (*ComponentActive)(VOID *arg1, ULONG arg2); // offset: 0x0 (0)
  VOID (*ComponentIdle)(VOID *arg1, ULONG arg2);   // offset: 0x8 (8)
  VOID(*ComponentIdleState)
  (VOID *arg1, ULONG arg2, ULONG arg3);       // offset: 0x10 (16)
  VOID (*DevicePowerRequired)(VOID *arg1);    // offset: 0x18 (24)
  VOID (*DevicePowerNotRequired)(VOID *arg1); // offset: 0x20 (32)
  LONG(*PowerControl)
  (VOID *arg1, struct _GUID *arg2, VOID *arg3, ULONGLONG arg4, VOID *arg5,
   ULONGLONG arg6, ULONGLONG *arg7); // offset: 0x28 (40)
  VOID(*ComponentCriticalTransition)
  (VOID *arg1, ULONG arg2, UCHAR arg3); // offset: 0x30 (48)
};

// 0x10 (16) bytes
struct _RTL_BITMAP_EX {
  ULONGLONG SizeOfBitMap; // offset: 0x0 (0)
  ULONGLONG *Buffer;      // offset: 0x8 (8)
};

// 0x38 (56) bytes
struct _MM_PAGED_POOL_INFO {
  struct _EX_PUSH_LOCK Lock;                    // offset: 0x0 (0)
  struct _RTL_BITMAP_EX PagedPoolAllocationMap; // offset: 0x8 (8)
  struct _MMPTE *FirstPteForPagedPool;          // offset: 0x18 (24)
  ULONGLONG MaximumSize;                        // offset: 0x20 (32)
  ULONGLONG PagedPoolHint;                      // offset: 0x28 (40)
  ULONGLONG AllocatedPagedPool;                 // offset: 0x30 (48)
};

// 0x80 (128) bytes
struct _MI_SHUTDOWN_STATE {
  UCHAR CrashDumpInitialized;             // offset: 0x0 (0)
  UCHAR ConnectedStandbyActive;           // offset: 0x1 (1)
  ULONG SystemShutdown;                   // offset: 0x4 (4)
  LONG ShutdownFlushInProgress;           // offset: 0x8 (8)
  struct _MI_RESUME_WORKITEM ResumeItem;  // offset: 0x10 (16)
  struct _ETHREAD *MirrorHoldsPfn;        // offset: 0x48 (72)
  ULONG MirroringActive;                  // offset: 0x50 (80)
  struct _RTL_BITMAP_EX MirrorBitMaps[2]; // offset: 0x58 (88)
  struct _MMPTE *CrashDumpPte;            // offset: 0x78 (120)
};

// 0x50 (80) bytes
struct _MI_DYNAMIC_BITMAP {
  struct _RTL_BITMAP_EX Bitmap; // offset: 0x0 (0)
  ULONGLONG MaximumSize;        // offset: 0x10 (16)
  ULONGLONG Hint;               // offset: 0x18 (24)
  VOID *BaseVa;                 // offset: 0x20 (32)
  ULONGLONG SizeTopDown;        // offset: 0x28 (40)
  ULONGLONG HintTopDown;        // offset: 0x30 (48)
  VOID *BaseVaTopDown;          // offset: 0x38 (56)
  ULONGLONG SpinLock;           // offset: 0x40 (64)
  struct _MMSUPPORT *Vm;        // offset: 0x48 (72)
};

// 0x2c0 (704) bytes
struct _MI_SYSTEM_VA_STATE {
  ULONGLONG SystemTablesLock;                             // offset: 0x0 (0)
  ULONGLONG AvailableSystemCacheVa;                       // offset: 0x8 (8)
  struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemPtes;      // offset: 0x10 (16)
  struct _MI_DYNAMIC_BITMAP DynamicBitMapDriverImages[2]; // offset: 0x60 (96)
  struct _MI_DYNAMIC_BITMAP DynamicBitMapPagedPool;       // offset: 0x100 (256)
  struct _MI_DYNAMIC_BITMAP DynamicBitMapSpecialPool;     // offset: 0x150 (336)
  struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemCache;     // offset: 0x1a0 (416)
  struct _MMWSLE_HASH *WorkingSetListHashStart;           // offset: 0x1f0 (496)
  struct _MMWSLE_HASH *WorkingSetListHashEnd;             // offset: 0x1f8 (504)
  struct _MMWSLE_NONDIRECT_HASH
      *WorkingSetListIndirectHashStart;      // offset: 0x200 (512)
  struct _KEVENT FreeSystemCacheVa;          // offset: 0x208 (520)
  ULONGLONG SystemVaLock;                    // offset: 0x220 (544)
  volatile LONG DeleteKvaLock;               // offset: 0x228 (552)
  struct _MI_PTE_CHAIN_HEAD FreeSystemCache; // offset: 0x230 (560)
  ULONGLONG SystemCacheViewLock;             // offset: 0x248 (584)
  ULONGLONG UnusableWsles[5];                // offset: 0x250 (592)
  ULONGLONG PossibleWsles[5];                // offset: 0x278 (632)
};

// 0x60 (96) bytes
struct _MI_SYSTEM_PTE_TYPE {
  struct _RTL_BITMAP_EX Bitmap;   // offset: 0x0 (0)
  struct _MMPTE *BasePte;         // offset: 0x10 (16)
  ULONG Flags;                    // offset: 0x18 (24)
  enum _MI_SYSTEM_VA_TYPE VaType; // offset: 0x1c (28)
  ULONG *FailureCount;            // offset: 0x20 (32)
  ULONG PteFailures;              // offset: 0x28 (40)
  union {
    ULONGLONG SpinLock;                   // offset: 0x30 (48)
    struct _EX_PUSH_LOCK *GlobalPushLock; // offset: 0x30 (48)
  };
  struct _MMSUPPORT *Vm;                  // offset: 0x38 (56)
  volatile ULONGLONG TotalSystemPtes;     // offset: 0x40 (64)
  ULONGLONG Hint;                         // offset: 0x48 (72)
  struct _MI_CACHED_PTES *CachedPtes;     // offset: 0x50 (80)
  volatile ULONGLONG TotalFreeSystemPtes; // offset: 0x58 (88)
};

// 0x640 (1600) bytes
struct _MI_VISIBLE_STATE {
  struct _MI_SPECIAL_POOL SpecialPool;         // offset: 0x0 (0)
  struct _LIST_ENTRY SessionWsList;            // offset: 0x50 (80)
  struct _RTL_BITMAP *SessionIdBitmap;         // offset: 0x60 (96)
  struct _MM_PAGED_POOL_INFO PagedPoolInfo;    // offset: 0x68 (104)
  ULONGLONG MaximumNonPagedPoolInPages;        // offset: 0xa0 (160)
  ULONGLONG SizeOfPagedPoolInPages;            // offset: 0xa8 (168)
  struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;    // offset: 0xb0 (176)
  volatile ULONGLONG NonPagedPoolCommit;       // offset: 0x110 (272)
  volatile ULONGLONG BootCommit;               // offset: 0x118 (280)
  volatile ULONGLONG MdlPagesAllocated;        // offset: 0x120 (288)
  volatile ULONGLONG SystemPageTableCommit;    // offset: 0x128 (296)
  volatile ULONGLONG SpecialPagesInUse;        // offset: 0x130 (304)
  volatile ULONGLONG WsOverheadPages;          // offset: 0x138 (312)
  volatile ULONGLONG VadBitmapPages;           // offset: 0x140 (320)
  volatile ULONGLONG ProcessCommit;            // offset: 0x148 (328)
  volatile ULONGLONG SharedCommit;             // offset: 0x150 (336)
  volatile LONG DriverCommit;                  // offset: 0x158 (344)
  struct _MMSUPPORT SystemWs[3];               // offset: 0x180 (384)
  ULONG MapCacheFailures;                      // offset: 0x468 (1128)
  ULONGLONG PagefileHashPages;                 // offset: 0x470 (1136)
  struct _SYSPTES_HEADER PteHeader;            // offset: 0x478 (1144)
  struct _MI_SPECIAL_POOL *SessionSpecialPool; // offset: 0x590 (1424)
  ULONGLONG SystemVaTypeCount[14];             // offset: 0x598 (1432)
};

// 0x30 (48) bytes
struct _MI_SUB64K_FREE_RANGES {
  struct _RTL_BITMAP_EX BitMap; // offset: 0x0 (0)
  struct _LIST_ENTRY ListEntry; // offset: 0x10 (16)
  struct _MMVAD_SHORT *Vad;     // offset: 0x20 (32)
  USHORT SubListIndex;          // offset: 0x28 (40)
  USHORT Hint;                  // offset: 0x2a (42)
  ULONG SetBits;                // offset: 0x2c (44)
};

// 0x30 (48) bytes
struct _PROC_FEEDBACK_COUNTER {
  union {
    VOID (*InstantaneousRead)(ULONGLONG arg1, ULONG *arg2); // offset: 0x0 (0)
    VOID(*DifferentialRead)
    (ULONGLONG arg1, UCHAR arg2, ULONGLONG *arg3,
     ULONGLONG *arg4); // offset: 0x0 (0)
  };
  ULONGLONG LastActualCount;    // offset: 0x8 (8)
  ULONGLONG LastReferenceCount; // offset: 0x10 (16)
  ULONG CachedValue;            // offset: 0x18 (24)
  UCHAR Affinitized;            // offset: 0x20 (32)
  UCHAR Differential;           // offset: 0x21 (33)
  UCHAR Scaling;                // offset: 0x22 (34)
  ULONGLONG Context;            // offset: 0x28 (40)
};

// 0x10 (16) bytes
union _SLIST_HEADER {
  struct {
    ULONGLONG Alignment; // offset: 0x0 (0)
    ULONGLONG Region;    // offset: 0x8 (8)
  };
  struct {
    ULONGLONG Depth : 16;     // offset: 0x0 (0)
    ULONGLONG Sequence : 48;  // offset: 0x0 (0)
    ULONGLONG Reserved : 4;   // offset: 0x8 (8)
    ULONGLONG NextEntry : 60; // offset: 0x8 (8)
  } HeaderX64;                // offset: 0x0 (0)
};

// 0x40 (64) bytes
struct _HEAP_LOOKASIDE {
  union _SLIST_HEADER ListHead; // offset: 0x0 (0)
  USHORT Depth;                 // offset: 0x10 (16)
  USHORT MaximumDepth;          // offset: 0x12 (18)
  ULONG TotalAllocates;         // offset: 0x14 (20)
  ULONG AllocateMisses;         // offset: 0x18 (24)
  ULONG TotalFrees;             // offset: 0x1c (28)
  ULONG FreeMisses;             // offset: 0x20 (32)
  ULONG LastTotalAllocates;     // offset: 0x24 (36)
  ULONG LastAllocateMisses;     // offset: 0x28 (40)
  ULONG Counters[2];            // offset: 0x2c (44)
};

// 0x60 (96) bytes
struct _PF_KERNEL_GLOBALS {
  ULONGLONG AccessBufferAgeThreshold;     // offset: 0x0 (0)
  struct _EX_RUNDOWN_REF AccessBufferRef; // offset: 0x8 (8)
  struct _KEVENT AccessBufferExistsEvent; // offset: 0x10 (16)
  ULONG AccessBufferMax;                  // offset: 0x28 (40)
  union _SLIST_HEADER AccessBufferList;   // offset: 0x40 (64)
  LONG StreamSequenceNumber;              // offset: 0x50 (80)
  ULONG Flags;                            // offset: 0x54 (84)
  LONG ScenarioPrefetchCount;             // offset: 0x58 (88)
};

// 0x110 (272) bytes
struct _VF_TARGET_VERIFIED_DRIVER_DATA {
  struct _VF_SUSPECT_DRIVER_ENTRY *SuspectDriverEntry; // offset: 0x0 (0)
  VOID *WMICallback;                                   // offset: 0x8 (8)
  struct _LIST_ENTRY EtwHandlesListHead;               // offset: 0x10 (16)
  union {
    struct {
      ULONG MissedEtwRegistration : 1; // offset: 0x0 (0)
      ULONG Spare : 31;                // offset: 0x0 (0)
    } Flags;                           // offset: 0x20 (32)
    ULONG Whole;                       // offset: 0x20 (32)

  } u1;                                          // offset: 0x20 (32)
  ULONGLONG Signature;                           // offset: 0x28 (40)
  union _SLIST_HEADER PoolPageHeaders;           // offset: 0x30 (48)
  union _SLIST_HEADER PoolTrackers;              // offset: 0x40 (64)
  volatile ULONG CurrentPagedPoolAllocations;    // offset: 0x50 (80)
  volatile ULONG CurrentNonPagedPoolAllocations; // offset: 0x54 (84)
  ULONG PeakPagedPoolAllocations;                // offset: 0x58 (88)
  ULONG PeakNonPagedPoolAllocations;             // offset: 0x5c (92)
  volatile ULONGLONG PagedBytes;                 // offset: 0x60 (96)
  volatile ULONGLONG NonPagedBytes;              // offset: 0x68 (104)
  ULONGLONG PeakPagedBytes;                      // offset: 0x70 (112)
  ULONGLONG PeakNonPagedBytes;                   // offset: 0x78 (120)
  ULONG RaiseIrqls;                              // offset: 0x80 (128)
  ULONG AcquireSpinLocks;                        // offset: 0x84 (132)
  ULONG SynchronizeExecutions;                   // offset: 0x88 (136)
  ULONG AllocationsWithNoTag;                    // offset: 0x8c (140)
  ULONG AllocationsFailed;                       // offset: 0x90 (144)
  ULONG AllocationsFailedDeliberately;           // offset: 0x94 (148)
  ULONGLONG LockedBytes;                         // offset: 0x98 (152)
  ULONGLONG PeakLockedBytes;                     // offset: 0xa0 (160)
  ULONGLONG MappedLockedBytes;                   // offset: 0xa8 (168)
  ULONGLONG PeakMappedLockedBytes;               // offset: 0xb0 (176)
  ULONGLONG MappedIoSpaceBytes;                  // offset: 0xb8 (184)
  ULONGLONG PeakMappedIoSpaceBytes;              // offset: 0xc0 (192)
  ULONGLONG PagesForMdlBytes;                    // offset: 0xc8 (200)
  ULONGLONG PeakPagesForMdlBytes;                // offset: 0xd0 (208)
  ULONGLONG ContiguousMemoryBytes;               // offset: 0xd8 (216)
  ULONGLONG PeakContiguousMemoryBytes;           // offset: 0xe0 (224)
  struct _LIST_ENTRY ContiguousMemoryListHead;   // offset: 0xe8 (232)
  volatile ULONG ExecutePoolTypes;               // offset: 0xf8 (248)
  volatile ULONG ExecutePageProtections;         // offset: 0xfc (252)
  volatile ULONG ExecutePageMappings;            // offset: 0x100 (256)
  volatile ULONG ExecuteWriteSections;           // offset: 0x104 (260)
  volatile ULONG SectionAlignmentFailures;       // offset: 0x108 (264)
};

// 0x38 (56) bytes
struct _VF_TARGET_DRIVER {
  struct _VF_AVL_TREE_NODE TreeNode; // offset: 0x0 (0)
  union {
    struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS
        AllSharedExportThunks; // offset: 0x10 (16)
    struct {
      ULONG SnapSharedExportsFailed : 1; // offset: 0x0 (0)
      ULONG Spare : 31;                  // offset: 0x0 (0)
    } Flags;                             // offset: 0x10 (16)

  } u1;                                                 // offset: 0x10 (16)
  struct _VF_TARGET_VERIFIED_DRIVER_DATA *VerifiedData; // offset: 0x30 (48)
};

// 0x20 (32) bytes
struct _CACHED_KSTACK_LIST {
  union _SLIST_HEADER SListHead; // offset: 0x0 (0)
  LONG MinimumFree;              // offset: 0x10 (16)
  ULONG Misses;                  // offset: 0x14 (20)
  ULONG MissesLast;              // offset: 0x18 (24)
  ULONG AllStacksInUse;          // offset: 0x1c (28)
};

// 0x50 (80) bytes
struct _MI_PAGING_IO_STATE {
  struct _RTL_AVL_TREE PageFileHead;             // offset: 0x0 (0)
  volatile LONG PageFileHeadSpinLock;            // offset: 0x8 (8)
  LONG PrefetchSeekThreshold;                    // offset: 0xc (12)
  union _SLIST_HEADER InPageSupportSListHead[2]; // offset: 0x10 (16)
  UCHAR InPageSupportSListMinimum[2];            // offset: 0x30 (48)
  ULONG InPageSinglePages;                       // offset: 0x34 (52)
  volatile LONG DelayPageFaults;                 // offset: 0x38 (56)
  ULONG FileCompressionBoundary;                 // offset: 0x3c (60)
  UCHAR MdlsAdjusted;                            // offset: 0x40 (64)
};

// 0x60 (96) bytes
struct _MI_PROCESS_STATE {
  ULONG ColorSeed;                             // offset: 0x0 (0)
  struct _KEVENT CloneDereferenceEvent;        // offset: 0x8 (8)
  union _SLIST_HEADER CloneProtosSListHead;    // offset: 0x20 (32)
  VOID *SystemDllBase;                         // offset: 0x30 (48)
  LONG RotatingUniprocessorNumber;             // offset: 0x38 (56)
  union _LARGE_INTEGER CriticalSectionTimeout; // offset: 0x40 (64)
  struct _LIST_ENTRY ProcessList;              // offset: 0x48 (72)
  struct _MMPTE *SharedUserDataPte;            // offset: 0x58 (88)
};

// 0xd00 (3328) bytes
struct _MI_PARTITION_PAGE_LISTS {
  struct _MMPFNLIST *FreePagesByColor[2];                // offset: 0x0 (0)
  union _SLIST_HEADER *FreePageSlist[2];                 // offset: 0x10 (16)
  struct _MMPFNLIST ZeroedPageListHead;                  // offset: 0x40 (64)
  struct _MMPFNLIST FreePageListHead;                    // offset: 0x80 (128)
  struct _MMPFNLIST StandbyPageListHead;                 // offset: 0xc0 (192)
  struct _MMPFNLIST StandbyPageListByPriority[8];        // offset: 0x100 (256)
  struct _MMPFNLIST ModifiedPageListNoReservation;       // offset: 0x240 (576)
  struct _MMPFNLIST ModifiedPageListByReservation[16];   // offset: 0x280 (640)
  struct _MMPFNLIST MappedPageListHead[16];              // offset: 0x500 (1280)
  struct _MMPFNLIST BadPageListHead;                     // offset: 0x780 (1920)
  struct _MMPFNLIST EnclavePageListHead;                 // offset: 0x7c0 (1984)
  struct _MMPFNLIST *PageLocationList[8];                // offset: 0x7e8 (2024)
  volatile ULONG StandbyRepurposedByPriority[8];         // offset: 0x828 (2088)
  struct _KEVENT MappedPageListHeadEvent[16];            // offset: 0x848 (2120)
  struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4]; // offset: 0x9c8 (2504)
  ULONG DecayHand;                                       // offset: 0x9e8 (2536)
  ULONGLONG LastDecayHandUpdateTime;                     // offset: 0x9f0 (2544)
  struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;      // offset: 0x9f8 (2552)
  ULONGLONG AvailableEventsLock;                         // offset: 0xa40 (2624)
  struct _MI_AVAILABLE_PAGE_WAIT_STATES
      AvailablePageWaitStates[3];                       // offset: 0xa48 (2632)
  ULONGLONG LowMemoryThreshold;                         // offset: 0xaa8 (2728)
  ULONGLONG HighMemoryThreshold;                        // offset: 0xab0 (2736)
  volatile ULONGLONG TransitionPrivatePages;            // offset: 0xac0 (2752)
  ULONG StandbyListDiscard;                             // offset: 0xac8 (2760)
  UCHAR FreeListDiscard;                                // offset: 0xacc (2764)
  UCHAR RebuildLargePagesInitialized;                   // offset: 0xacd (2765)
  struct _MI_REBUILD_LARGE_PAGES RebuildLargePagesItem; // offset: 0xad0 (2768)
  VOID *MirrorListLocks;                                // offset: 0xcf8 (3320)
};

// 0x80 (128) bytes
struct _MI_PARTITION_STORES {
  union {
    LONG FlushCompleting : 1;  // offset: 0x0 (0)
    LONG FlushInProgress : 31; // offset: 0x0 (0)
    volatile LONG Long;        // offset: 0x0 (0)

  } WriteAllStoreHintedPages;                    // offset: 0x0 (0)
  ULONG VirtualPageFileNumber;                   // offset: 0x4 (4)
  ULONG Registered;                              // offset: 0x8 (8)
  ULONG ReadClusterSizeMax;                      // offset: 0xc (12)
  ULONG EvictFlushRequestCount;                  // offset: 0x10 (16)
  ULONG ModifiedWriteDisableCount;               // offset: 0x14 (20)
  ULONG WriteIssueFailures;                      // offset: 0x18 (24)
  struct _ETHREAD *EvictionThread;               // offset: 0x20 (32)
  struct _KEVENT EvictEvent;                     // offset: 0x28 (40)
  struct _KEVENT EvictFlushCompleteEvent;        // offset: 0x40 (64)
  union _SLIST_HEADER WriteSupportSListHead;     // offset: 0x60 (96)
  volatile LONG EvictFlushLock;                  // offset: 0x70 (112)
  struct _RTL_BITMAP *ModifiedWriteFailedBitmap; // offset: 0x78 (120)
};

// 0x80 (128) bytes
struct _GENERAL_LOOKASIDE {
  union {
    union _SLIST_HEADER ListHead;             // offset: 0x0 (0)
    struct _SINGLE_LIST_ENTRY SingleListHead; // offset: 0x0 (0)
  };
  USHORT Depth;         // offset: 0x10 (16)
  USHORT MaximumDepth;  // offset: 0x12 (18)
  ULONG TotalAllocates; // offset: 0x14 (20)
  union {
    ULONG AllocateMisses; // offset: 0x18 (24)
    ULONG AllocateHits;   // offset: 0x18 (24)
  };
  ULONG TotalFrees; // offset: 0x1c (28)
  union {
    ULONG FreeMisses; // offset: 0x20 (32)
    ULONG FreeHits;   // offset: 0x20 (32)
  };
  enum _POOL_TYPE Type; // offset: 0x24 (36)
  ULONG Tag;            // offset: 0x28 (40)
  ULONG Size;           // offset: 0x2c (44)
  union {
    VOID *(*AllocateEx)(enum _POOL_TYPE arg1, ULONGLONG arg2, ULONG arg3,
                        struct _LOOKASIDE_LIST_EX *arg4); // offset: 0x30 (48)
    VOID *(*Allocate)(enum _POOL_TYPE arg1, ULONGLONG arg2,
                      ULONG arg3); // offset: 0x30 (48)
  };
  union {
    VOID(*FreeEx)
    (VOID *arg1, struct _LOOKASIDE_LIST_EX *arg2); // offset: 0x38 (56)
    VOID (*Free)(VOID *arg1);                      // offset: 0x38 (56)
  };
  struct _LIST_ENTRY ListEntry; // offset: 0x40 (64)
  ULONG LastTotalAllocates;     // offset: 0x50 (80)
  union {
    ULONG LastAllocateMisses; // offset: 0x54 (84)
    ULONG LastAllocateHits;   // offset: 0x54 (84)
  };
  ULONG Future[2]; // offset: 0x58 (88)
};

// 0x1f40 (8000) bytes
struct _MM_SESSION_SPACE {
  volatile LONG ReferenceCount; // offset: 0x0 (0)
  union {
    ULONG LongFlags;                      // offset: 0x4 (4)
    struct _MM_SESSION_SPACE_FLAGS Flags; // offset: 0x4 (4)

  } u;                                           // offset: 0x4 (4)
  ULONG SessionId;                               // offset: 0x8 (8)
  volatile LONG ProcessReferenceToSession;       // offset: 0xc (12)
  struct _LIST_ENTRY ProcessList;                // offset: 0x10 (16)
  ULONGLONG SessionPageDirectoryIndex;           // offset: 0x20 (32)
  volatile ULONGLONG NonPagablePages;            // offset: 0x28 (40)
  volatile ULONGLONG CommittedPages;             // offset: 0x30 (48)
  VOID *PagedPoolStart;                          // offset: 0x38 (56)
  VOID *PagedPoolEnd;                            // offset: 0x40 (64)
  VOID *SessionObject;                           // offset: 0x48 (72)
  VOID *SessionObjectHandle;                     // offset: 0x50 (80)
  ULONG SessionPoolAllocationFailures[4];        // offset: 0x58 (88)
  struct _RTL_AVL_TREE ImageTree;                // offset: 0x68 (104)
  ULONG LocaleId;                                // offset: 0x70 (112)
  ULONG AttachCount;                             // offset: 0x74 (116)
  struct _KGATE AttachGate;                      // offset: 0x78 (120)
  struct _LIST_ENTRY WsListEntry;                // offset: 0x90 (144)
  struct _GENERAL_LOOKASIDE Lookaside[21];       // offset: 0xc0 (192)
  struct _MMSESSION Session;                     // offset: 0xb40 (2880)
  struct _MM_PAGED_POOL_INFO PagedPoolInfo;      // offset: 0xb60 (2912)
  struct _MMSUPPORT Vm;                          // offset: 0xb98 (2968)
  struct _MMWSLE *Wsle;                          // offset: 0xc90 (3216)
  struct _MI_SESSION_DRIVER_UNLOAD DriverUnload; // offset: 0xc98 (3224)
  struct _POOL_DESCRIPTOR PagedPool;             // offset: 0xcc0 (3264)
  struct _MMPTE PageDirectory;                   // offset: 0x1e00 (7680)
  struct _EX_PUSH_LOCK SessionVaLock;            // offset: 0x1e08 (7688)
  struct _RTL_BITMAP DynamicVaBitMap;            // offset: 0x1e10 (7696)
  ULONG DynamicVaHint;                           // offset: 0x1e20 (7712)
  struct _MI_SPECIAL_POOL SpecialPool;           // offset: 0x1e28 (7720)
  struct _EX_PUSH_LOCK SessionPteLock;           // offset: 0x1e78 (7800)
  LONG PoolBigEntriesInUse;                      // offset: 0x1e80 (7808)
  ULONG PagedPoolPdeCount;                       // offset: 0x1e84 (7812)
  ULONG SpecialPoolPdeCount;                     // offset: 0x1e88 (7816)
  ULONG DynamicSessionPdeCount;                  // offset: 0x1e8c (7820)
  struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;      // offset: 0x1e90 (7824)
  VOID *PoolTrackTableExpansion;                 // offset: 0x1ef0 (7920)
  ULONGLONG PoolTrackTableExpansionSize;         // offset: 0x1ef8 (7928)
  VOID *PoolTrackBigPages;                       // offset: 0x1f00 (7936)
  ULONGLONG PoolTrackBigPagesSize;               // offset: 0x1f08 (7944)
  enum _IO_SESSION_STATE IoState;                // offset: 0x1f10 (7952)
  ULONG IoStateSequence;                         // offset: 0x1f14 (7956)
  struct _KEVENT IoNotificationEvent;            // offset: 0x1f18 (7960)
  struct _EJOB *ServerSilo;                      // offset: 0x1f30 (7984)
  ULONGLONG CreateTime;                          // offset: 0x1f38 (7992)
};

// 0x80 (128) bytes
struct _PAGED_LOOKASIDE_LIST {
  struct _GENERAL_LOOKASIDE L; // offset: 0x0 (0)
};

// 0x80 (128) bytes
struct _NPAGED_LOOKASIDE_LIST {
  struct _GENERAL_LOOKASIDE L; // offset: 0x0 (0)
};

// 0x180 (384) bytes
struct _MI_SYSTEM_PTE_STATE {
  union _SLIST_HEADER DeadPteTrackerSListHead;       // offset: 0x0 (0)
  ULONGLONG PteTrackerLock;                          // offset: 0x10 (16)
  struct _NPAGED_LOOKASIDE_LIST MdlTrackerLookaside; // offset: 0x40 (64)
  struct _RTL_BITMAP_EX PteTrackingBitmap;           // offset: 0xc0 (192)
  struct _MI_CACHED_PTES *CachedPteHeads;            // offset: 0xd0 (208)
  struct _MI_SYSTEM_PTE_TYPE SystemViewPteInfo;      // offset: 0xd8 (216)
  UCHAR KernelStackPages;                            // offset: 0x138 (312)
  union _SLIST_HEADER QueuedStacks;                  // offset: 0x140 (320)
  ULONG StackGrowthFailures;                         // offset: 0x150 (336)
  UCHAR TrackPtesAborted;                            // offset: 0x154 (340)
  UCHAR AdjustCounter;                               // offset: 0x155 (341)
  struct _MI_QUEUED_DEADSTACK_WORKITEM
      QueuedStacksWorkItem; // offset: 0x158 (344)
};

// 0x10 (16) bytes
struct _PP_LOOKASIDE_LIST {
  struct _GENERAL_LOOKASIDE *P; // offset: 0x0 (0)
  struct _GENERAL_LOOKASIDE *L; // offset: 0x8 (8)
};

// 0x60 (96) bytes
struct _GENERAL_LOOKASIDE_POOL {
  union {
    union _SLIST_HEADER ListHead;             // offset: 0x0 (0)
    struct _SINGLE_LIST_ENTRY SingleListHead; // offset: 0x0 (0)
  };
  USHORT Depth;         // offset: 0x10 (16)
  USHORT MaximumDepth;  // offset: 0x12 (18)
  ULONG TotalAllocates; // offset: 0x14 (20)
  union {
    ULONG AllocateMisses; // offset: 0x18 (24)
    ULONG AllocateHits;   // offset: 0x18 (24)
  };
  ULONG TotalFrees; // offset: 0x1c (28)
  union {
    ULONG FreeMisses; // offset: 0x20 (32)
    ULONG FreeHits;   // offset: 0x20 (32)
  };
  enum _POOL_TYPE Type; // offset: 0x24 (36)
  ULONG Tag;            // offset: 0x28 (40)
  ULONG Size;           // offset: 0x2c (44)
  union {
    VOID *(*AllocateEx)(enum _POOL_TYPE arg1, ULONGLONG arg2, ULONG arg3,
                        struct _LOOKASIDE_LIST_EX *arg4); // offset: 0x30 (48)
    VOID *(*Allocate)(enum _POOL_TYPE arg1, ULONGLONG arg2,
                      ULONG arg3); // offset: 0x30 (48)
  };
  union {
    VOID(*FreeEx)
    (VOID *arg1, struct _LOOKASIDE_LIST_EX *arg2); // offset: 0x38 (56)
    VOID (*Free)(VOID *arg1);                      // offset: 0x38 (56)
  };
  struct _LIST_ENTRY ListEntry; // offset: 0x40 (64)
  ULONG LastTotalAllocates;     // offset: 0x50 (80)
  union {
    ULONG LastAllocateMisses; // offset: 0x54 (84)
    ULONG LastAllocateHits;   // offset: 0x54 (84)
  };
  ULONG Future[2]; // offset: 0x58 (88)
};

// 0x60 (96) bytes
struct _LOOKASIDE_LIST_EX {
  struct _GENERAL_LOOKASIDE_POOL L; // offset: 0x0 (0)
};

// 0x40 (64) bytes
struct _KDPC {
  union {
    ULONG TargetInfoAsUlong; // offset: 0x0 (0)
    struct {
      UCHAR Type;             // offset: 0x0 (0)
      UCHAR Importance;       // offset: 0x1 (1)
      volatile USHORT Number; // offset: 0x2 (2)
    };
  };
  struct _SINGLE_LIST_ENTRY DpcListEntry; // offset: 0x8 (8)
  ULONGLONG ProcessorHistory;             // offset: 0x10 (16)
  VOID(*DeferredRoutine)
  (struct _KDPC *arg1, VOID *arg2, VOID *arg3, VOID *arg4); // offset: 0x18 (24)
  VOID *DeferredContext;                                    // offset: 0x20 (32)
  VOID *SystemArgument1;                                    // offset: 0x28 (40)
  VOID *SystemArgument2;                                    // offset: 0x30 (48)
  VOID *DpcData;                                            // offset: 0x38 (56)
};

// 0x88 (136) bytes
struct _WHEAP_WORK_QUEUE {
  struct _LIST_ENTRY ListHead;      // offset: 0x0 (0)
  ULONGLONG ListLock;               // offset: 0x10 (16)
  volatile LONG ItemCount;          // offset: 0x18 (24)
  struct _KDPC Dpc;                 // offset: 0x20 (32)
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x60 (96)
  VOID(*WorkRoutine)
  (struct _WHEAP_WORK_QUEUE *arg1,
   struct _LIST_ENTRY *arg2); // offset: 0x80 (128)
};

// 0x18 (24) bytes
struct _WHEAP_INFO_BLOCK {
  ULONG ErrorSourceCount;                             // offset: 0x0 (0)
  struct _WHEAP_ERROR_SOURCE_TABLE *ErrorSourceTable; // offset: 0x8 (8)
  struct _WHEAP_WORK_QUEUE *WorkQueue;                // offset: 0x10 (16)
};

// 0x28 (40) bytes
struct _KDPC_DATA {
  struct _KDPC_LIST DpcList;        // offset: 0x0 (0)
  ULONGLONG DpcLock;                // offset: 0x10 (16)
  volatile LONG DpcQueueDepth;      // offset: 0x18 (24)
  ULONG DpcCount;                   // offset: 0x1c (28)
  struct _KDPC *volatile ActiveDpc; // offset: 0x20 (32)
};

// 0x48 (72) bytes
struct _WAIT_CONTEXT_BLOCK {
  union {
    struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry; // offset: 0x0 (0)
    struct {
      struct _LIST_ENTRY DmaWaitEntry; // offset: 0x0 (0)
      ULONG NumberOfChannels;          // offset: 0x10 (16)
      ULONG SyncCallback : 1;          // offset: 0x14 (20)
      ULONG DmaContext : 1;            // offset: 0x14 (20)
      ULONG Reserved : 30;             // offset: 0x14 (20)
    };
  };
  enum _IO_ALLOCATION_ACTION (*DeviceRoutine)(struct _DEVICE_OBJECT *arg1,
                                              struct _IRP *arg2, VOID *arg3,
                                              VOID *arg4); // offset: 0x18 (24)
  VOID *DeviceContext;                                     // offset: 0x20 (32)
  ULONG NumberOfMapRegisters;                              // offset: 0x28 (40)
  VOID *DeviceObject;                                      // offset: 0x30 (48)
  VOID *CurrentIrp;                                        // offset: 0x38 (56)
  struct _KDPC *BufferChainingDpc;                         // offset: 0x40 (64)
};

// 0x150 (336) bytes
struct _KENTROPY_TIMING_STATE {
  ULONG EntropyCount;        // offset: 0x0 (0)
  ULONG Buffer[64];          // offset: 0x4 (4)
  struct _KDPC Dpc;          // offset: 0x108 (264)
  ULONG LastDeliveredBuffer; // offset: 0x148 (328)
};

// 0x10 (16) bytes
union _KIDTENTRY64 {
  struct {
    USHORT OffsetLow; // offset: 0x0 (0)
    USHORT Selector;  // offset: 0x2 (2)
  };
  USHORT IstIndex : 3;  // offset: 0x4 (4)
  USHORT Reserved0 : 5; // offset: 0x4 (4)
  USHORT Type : 5;      // offset: 0x4 (4)
  USHORT Dpl : 2;       // offset: 0x4 (4)
  struct {
    USHORT Present : 1;  // offset: 0x4 (4)
    USHORT OffsetMiddle; // offset: 0x6 (6)
  };
  struct {
    ULONG OffsetHigh; // offset: 0x8 (8)
    ULONG Reserved1;  // offset: 0xc (12)
  };
  ULONGLONG Alignment; // offset: 0x0 (0)
};

// 0x68 (104) bytes
struct _KTSS64 {
  ULONG Reserved0;     // offset: 0x0 (0)
  ULONGLONG Rsp0;      // offset: 0x4 (4)
  ULONGLONG Rsp1;      // offset: 0xc (12)
  ULONGLONG Rsp2;      // offset: 0x14 (20)
  ULONGLONG Ist[8];    // offset: 0x1c (28)
  ULONGLONG Reserved1; // offset: 0x5c (92)
  USHORT Reserved2;    // offset: 0x64 (100)
  USHORT IoMapBase;    // offset: 0x66 (102)
};

// 0x18 (24) bytes
struct _RTL_BALANCED_NODE {
  union {
    struct _RTL_BALANCED_NODE *Children[2]; // offset: 0x0 (0)
    struct {
      struct _RTL_BALANCED_NODE *Left;  // offset: 0x0 (0)
      struct _RTL_BALANCED_NODE *Right; // offset: 0x8 (8)
    };
  };
  union {
    struct {
      UCHAR Red : 1;     // offset: 0x10 (16)
      UCHAR Balance : 2; // offset: 0x10 (16)
    };
    ULONGLONG ParentValue; // offset: 0x10 (16)
  };
};

// 0x118 (280) bytes
struct _LDR_DATA_TABLE_ENTRY {
  struct _LIST_ENTRY InLoadOrderLinks;           // offset: 0x0 (0)
  struct _LIST_ENTRY InMemoryOrderLinks;         // offset: 0x10 (16)
  struct _LIST_ENTRY InInitializationOrderLinks; // offset: 0x20 (32)
  VOID *DllBase;                                 // offset: 0x30 (48)
  VOID *EntryPoint;                              // offset: 0x38 (56)
  ULONG SizeOfImage;                             // offset: 0x40 (64)
  struct _UNICODE_STRING FullDllName;            // offset: 0x48 (72)
  struct _UNICODE_STRING BaseDllName;            // offset: 0x58 (88)
  union {
    UCHAR FlagGroup[4]; // offset: 0x68 (104)
    ULONG Flags;        // offset: 0x68 (104)
    struct {
      ULONG PackagedBinary : 1;          // offset: 0x68 (104)
      ULONG MarkedForRemoval : 1;        // offset: 0x68 (104)
      ULONG ImageDll : 1;                // offset: 0x68 (104)
      ULONG LoadNotificationsSent : 1;   // offset: 0x68 (104)
      ULONG TelemetryEntryProcessed : 1; // offset: 0x68 (104)
      ULONG ProcessStaticImport : 1;     // offset: 0x68 (104)
      ULONG InLegacyLists : 1;           // offset: 0x68 (104)
      ULONG InIndexes : 1;               // offset: 0x68 (104)
      ULONG ShimDll : 1;                 // offset: 0x68 (104)
      ULONG InExceptionTable : 1;        // offset: 0x68 (104)
      ULONG ReservedFlags1 : 2;          // offset: 0x68 (104)
      ULONG LoadInProgress : 1;          // offset: 0x68 (104)
      ULONG LoadConfigProcessed : 1;     // offset: 0x68 (104)
      ULONG EntryProcessed : 1;          // offset: 0x68 (104)
      ULONG ProtectDelayLoad : 1;        // offset: 0x68 (104)
      ULONG ReservedFlags3 : 2;          // offset: 0x68 (104)
      ULONG DontCallForThreads : 1;      // offset: 0x68 (104)
      ULONG ProcessAttachCalled : 1;     // offset: 0x68 (104)
      ULONG ProcessAttachFailed : 1;     // offset: 0x68 (104)
      ULONG CorDeferredValidate : 1;     // offset: 0x68 (104)
      ULONG CorImage : 1;                // offset: 0x68 (104)
      ULONG DontRelocate : 1;            // offset: 0x68 (104)
      ULONG CorILOnly : 1;               // offset: 0x68 (104)
      ULONG ReservedFlags5 : 3;          // offset: 0x68 (104)
      ULONG Redirected : 1;              // offset: 0x68 (104)
      ULONG ReservedFlags6 : 2;          // offset: 0x68 (104)
      ULONG CompatDatabaseProcessed : 1; // offset: 0x68 (104)
    };
  };
  USHORT ObsoleteLoadCount;                                // offset: 0x6c (108)
  USHORT TlsIndex;                                         // offset: 0x6e (110)
  struct _LIST_ENTRY HashLinks;                            // offset: 0x70 (112)
  ULONG TimeDateStamp;                                     // offset: 0x80 (128)
  struct _ACTIVATION_CONTEXT *EntryPointActivationContext; // offset: 0x88 (136)
  VOID *Lock;                                              // offset: 0x90 (144)
  struct _LDR_DDAG_NODE *DdagNode;                         // offset: 0x98 (152)
  struct _LIST_ENTRY NodeModuleLink;                       // offset: 0xa0 (160)
  struct _LDRP_LOAD_CONTEXT *LoadContext;                  // offset: 0xb0 (176)
  VOID *ParentDllBase;                                     // offset: 0xb8 (184)
  VOID *SwitchBackContext;                                 // offset: 0xc0 (192)
  struct _RTL_BALANCED_NODE BaseAddressIndexNode;          // offset: 0xc8 (200)
  struct _RTL_BALANCED_NODE MappingInfoIndexNode;          // offset: 0xe0 (224)
  ULONGLONG OriginalBase;                                  // offset: 0xf8 (248)
  union _LARGE_INTEGER LoadTime;        // offset: 0x100 (256)
  ULONG BaseNameHashValue;              // offset: 0x108 (264)
  enum _LDR_DLL_LOAD_REASON LoadReason; // offset: 0x10c (268)
  ULONG ImplicitPathOptions;            // offset: 0x110 (272)
  ULONG ReferenceCount;                 // offset: 0x114 (276)
};

// 0x20 (32) bytes
struct _ETW_PROVIDER_TRAITS {
  struct _RTL_BALANCED_NODE Node; // offset: 0x0 (0)
  ULONG ReferenceCount;           // offset: 0x18 (24)
  UCHAR Traits[1];                // offset: 0x1c (28)
};

// 0x40 (64) bytes
struct _SECTION {
  struct _RTL_BALANCED_NODE SectionNode; // offset: 0x0 (0)
  ULONGLONG StartingVpn;                 // offset: 0x18 (24)
  ULONGLONG EndingVpn;                   // offset: 0x20 (32)
  union {
    struct _CONTROL_AREA *ControlArea;   // offset: 0x28 (40)
    struct _FILE_OBJECT *FileObject;     // offset: 0x28 (40)
    ULONGLONG RemoteImageFileObject : 1; // offset: 0x28 (40)
    ULONGLONG RemoteDataFileObject : 1;  // offset: 0x28 (40)

  } u1;                    // offset: 0x28 (40)
  ULONGLONG SizeOfSection; // offset: 0x30 (48)
  union {
    ULONG LongFlags;               // offset: 0x38 (56)
    struct _MMSECTION_FLAGS Flags; // offset: 0x38 (56)

  } u;                              // offset: 0x38 (56)
  ULONG InitialPageProtection : 12; // offset: 0x3c (60)
  ULONG SessionId : 19;             // offset: 0x3c (60)
  ULONG NoValidationNeeded : 1;     // offset: 0x3c (60)
};

// 0x50 (80) bytes
struct _MMCLONE_DESCRIPTOR {
  union {
    struct _RTL_BALANCED_NODE CloneNode; // offset: 0x0 (0)
    struct _MMCLONE_DESCRIPTOR *Next;    // offset: 0x0 (0)
  };
  struct _MMCLONE_BLOCK *StartingCloneBlock; // offset: 0x18 (24)
  struct _MMCLONE_BLOCK *EndingCloneBlock;   // offset: 0x20 (32)
  ULONGLONG NumberOfPtes;                    // offset: 0x28 (40)
  volatile ULONGLONG NumberOfReferences;     // offset: 0x30 (48)
  struct _MMCLONE_HEADER *CloneHeader;       // offset: 0x38 (56)
  ULONGLONG NonPagedPoolQuotaCharge;         // offset: 0x40 (64)
  ULONGLONG NestingLevel;                    // offset: 0x48 (72)
};

// 0x38 (56) bytes
struct _MI_PAGEFILE_BITMAPS_CACHE_ENTRY {
  union {
    struct _RTL_BALANCED_NODE LengthTreeNode; // offset: 0x0 (0)
    struct _LIST_ENTRY FreeListEntry;         // offset: 0x0 (0)
  };
  struct _RTL_BALANCED_NODE LocationTreeNode; // offset: 0x18 (24)
  ULONG StartingIndex;                        // offset: 0x30 (48)
  ULONG Length;                               // offset: 0x34 (52)
};

// 0x30 (48) bytes
struct _MMPFN {
  union {
    struct _LIST_ENTRY ListEntry;       // offset: 0x0 (0)
    struct _RTL_BALANCED_NODE TreeNode; // offset: 0x0 (0)
    struct {
      union {
        ULONGLONG Flink : 36;                   // offset: 0x0 (0)
        ULONGLONG NodeFlinkHigh : 28;           // offset: 0x0 (0)
        ULONGLONG WsIndex;                      // offset: 0x0 (0)
        struct _KEVENT *Event;                  // offset: 0x0 (0)
        VOID *Next;                             // offset: 0x0 (0)
        VOID *volatile VolatileNext;            // offset: 0x0 (0)
        struct _KTHREAD *KernelStackOwner;      // offset: 0x0 (0)
        struct _SINGLE_LIST_ENTRY NextStackPfn; // offset: 0x0 (0)

      } u1; // offset: 0x0 (0)
      union {
        struct _MMPTE *PteAddress;         // offset: 0x8 (8)
        VOID *volatile VolatilePteAddress; // offset: 0x8 (8)
        ULONGLONG PteLong;                 // offset: 0x8 (8)
      };
      struct _MMPTE OriginalPte; // offset: 0x10 (16)
    };
  };
  struct _MIPFNBLINK u2; // offset: 0x18 (24)
  union {
    struct {
      USHORT ReferenceCount; // offset: 0x20 (32)
      struct _MMPFNENTRY e1; // offset: 0x22 (34)
    };
    struct {
      USHORT ReferenceCount; // offset: 0x0 (0)
      union {
        USHORT ShortFlags;                  // offset: 0x2 (2)
        volatile USHORT VolatileShortFlags; // offset: 0x2 (2)
      };
    } e2; // offset: 0x20 (32)

  } u3;                // offset: 0x20 (32)
  USHORT NodeBlinkLow; // offset: 0x24 (36)
  UCHAR Unused : 4;    // offset: 0x26 (38)
  UCHAR VaType : 4;    // offset: 0x26 (38)
  union {
    UCHAR ViewCount;    // offset: 0x27 (39)
    UCHAR NodeFlinkLow; // offset: 0x27 (39)
  };
  union {
    ULONGLONG PteFrame : 36;    // offset: 0x28 (40)
    ULONGLONG Channel : 2;      // offset: 0x28 (40)
    ULONGLONG Unused1 : 1;      // offset: 0x28 (40)
    ULONGLONG Unused2 : 1;      // offset: 0x28 (40)
    ULONGLONG Partition : 10;   // offset: 0x28 (40)
    ULONGLONG Spare : 2;        // offset: 0x28 (40)
    ULONGLONG FileOnly : 1;     // offset: 0x28 (40)
    ULONGLONG PfnExists : 1;    // offset: 0x28 (40)
    ULONGLONG PageIdentity : 3; // offset: 0x28 (40)
    ULONGLONG PrototypePte : 1; // offset: 0x28 (40)
    ULONGLONG PageColor : 6;    // offset: 0x28 (40)
    ULONGLONG EntireField;      // offset: 0x28 (40)

  } u4; // offset: 0x28 (40)
};

// 0x98 (152) bytes
struct _MI_COMMON_PAGE_STATE {
  struct _MMPFN *PageOfOnesPfn; // offset: 0x0 (0)
  ULONGLONG PageOfOnes;         // offset: 0x8 (8)
  struct _MMPFN *DummyPagePfn;  // offset: 0x10 (16)
  ULONGLONG DummyPage;          // offset: 0x18 (24)
  ULONGLONG PageOfZeroes;       // offset: 0x20 (32)
  VOID *ZeroMapping;            // offset: 0x28 (40)
  VOID *OnesMapping;            // offset: 0x30 (48)
  ULONGLONG BitmapGapFrames[4]; // offset: 0x38 (56)
  ULONGLONG PfnGapFrames[4];    // offset: 0x58 (88)
  ULONGLONG PageTableOfZeroes;  // offset: 0x78 (120)
  struct _MMPTE PdeOfZeroes;    // offset: 0x80 (128)
  ULONGLONG PageTableOfOnes;    // offset: 0x88 (136)
  struct _MMPTE PdeOfOnes;      // offset: 0x90 (144)
};

// 0x18 (24) bytes
struct _COLORED_PAGE_INFO {
  volatile LONG BeingZeroed;    // offset: 0x0 (0)
  ULONG Processor;              // offset: 0x4 (4)
  ULONGLONG PagesQueued;        // offset: 0x8 (8)
  struct _MMPFN *PfnAllocation; // offset: 0x10 (16)
};

// 0x28 (40) bytes
struct _MI_LARGEPAGE_MEMORY_INFO {
  struct _LIST_ENTRY ListHead;                    // offset: 0x0 (0)
  struct _COLORED_PAGE_INFO *ColoredPageInfoBase; // offset: 0x10 (16)
  ULONG PagesNeedZeroing;                         // offset: 0x18 (24)
  UCHAR LargeImageBias;                           // offset: 0x1c (28)
  UCHAR Spare[3];                                 // offset: 0x1d (29)
  ULONGLONG ActualImageViewSize;                  // offset: 0x20 (32)
};

// 0x38 (56) bytes
struct _MMINPAGE_SUPPORT_FLOW_THROUGH {
  ULONGLONG Page[1];                              // offset: 0x0 (0)
  struct _MMINPAGE_SUPPORT *InitialInPageSupport; // offset: 0x8 (8)
  struct _MMPAGING_FILE *PagingFile;              // offset: 0x10 (16)
  ULONGLONG PageFileOffset;                       // offset: 0x18 (24)
  struct _RTL_BALANCED_NODE Node;                 // offset: 0x20 (32)
};

// 0x30 (48) bytes
struct _MI_PER_SESSION_PROTOS {
  union {
    struct _RTL_BALANCED_NODE SessionProtoNode; // offset: 0x0 (0)
    struct _SINGLE_LIST_ENTRY FreeList;         // offset: 0x0 (0)
    VOID *DriverAddress;                        // offset: 0x0 (0)
  };
  union {
    ULONG SessionId;                // offset: 0x18 (24)
    struct _SUBSECTION *Subsection; // offset: 0x18 (24)
  };
  struct _MMPTE *SubsectionBase; // offset: 0x20 (32)
  union {
    ULONG ReferenceCount;     // offset: 0x28 (40)
    ULONG NumberOfPtesToFree; // offset: 0x28 (40)

  } u2; // offset: 0x28 (40)
};

// 0x38 (56) bytes
struct _SUBSECTION {
  struct _CONTROL_AREA *ControlArea;  // offset: 0x0 (0)
  struct _MMPTE *SubsectionBase;      // offset: 0x8 (8)
  struct _SUBSECTION *NextSubsection; // offset: 0x10 (16)
  union {
    struct _RTL_AVL_TREE GlobalPerSessionHead;          // offset: 0x18 (24)
    struct _MI_SUBSECTION_WAIT_BLOCK *CreationWaitList; // offset: 0x18 (24)
    struct _MI_PER_SESSION_PROTOS *SessionDriverProtos; // offset: 0x18 (24)
  };
  union {
    ULONG LongFlags;                            // offset: 0x20 (32)
    struct _MMSUBSECTION_FLAGS SubsectionFlags; // offset: 0x20 (32)

  } u;                       // offset: 0x20 (32)
  ULONG StartingSector;      // offset: 0x24 (36)
  ULONG NumberOfFullSectors; // offset: 0x28 (40)
  ULONG PtesInSubsection;    // offset: 0x2c (44)
  union {
    ULONG NumberOfChildViews; // offset: 0x30 (48)

  } u1; // offset: 0x30 (48)
  union {
    struct {
      ULONG UnusedPtes : 31; // offset: 0x34 (52)
      ULONG DirtyPages : 1;  // offset: 0x34 (52)
    };
    struct {
      ULONG AlignmentNoAccessPtes : 31; // offset: 0x0 (0)
      ULONG DirtyPages : 1;             // offset: 0x0 (0)
    } u2;                               // offset: 0x34 (52)
  };
};

// 0x70 (112) bytes
struct _MSUBSECTION {
  struct _SUBSECTION Core;                  // offset: 0x0 (0)
  struct _RTL_BALANCED_NODE SubsectionNode; // offset: 0x38 (56)
  struct _LIST_ENTRY DereferenceList;       // offset: 0x50 (80)
  ULONGLONG NumberOfMappedViews;            // offset: 0x60 (96)
  ULONG NumberOfPfnReferences;              // offset: 0x68 (104)
};

// 0x40 (64) bytes
struct _MMVAD_SHORT {
  union {
    struct _RTL_BALANCED_NODE VadNode; // offset: 0x0 (0)
    struct _MMVAD_SHORT *NextVad;      // offset: 0x0 (0)
  };
  ULONG StartingVpn;             // offset: 0x18 (24)
  ULONG EndingVpn;               // offset: 0x1c (28)
  UCHAR StartingVpnHigh;         // offset: 0x20 (32)
  UCHAR EndingVpnHigh;           // offset: 0x21 (33)
  UCHAR CommitChargeHigh;        // offset: 0x22 (34)
  UCHAR SpareNT64VadUChar;       // offset: 0x23 (35)
  LONG ReferenceCount;           // offset: 0x24 (36)
  struct _EX_PUSH_LOCK PushLock; // offset: 0x28 (40)
  union {
    ULONG LongFlags;              // offset: 0x30 (48)
    struct _MMVAD_FLAGS VadFlags; // offset: 0x30 (48)

  } u; // offset: 0x30 (48)
  union {
    ULONG LongFlags1;               // offset: 0x34 (52)
    struct _MMVAD_FLAGS1 VadFlags1; // offset: 0x34 (52)

  } u1;                                  // offset: 0x34 (52)
  struct _MI_VAD_EVENT_BLOCK *EventList; // offset: 0x38 (56)
};

// 0x198 (408) bytes
struct _KSCB {
  ULONGLONG GenerationCycles;           // offset: 0x0 (0)
  ULONGLONG MinQuotaCycleTarget;        // offset: 0x8 (8)
  ULONGLONG MaxQuotaCycleTarget;        // offset: 0x10 (16)
  ULONGLONG RankCycleTarget;            // offset: 0x18 (24)
  ULONGLONG LongTermCycles;             // offset: 0x20 (32)
  ULONGLONG LastReportedCycles;         // offset: 0x28 (40)
  volatile ULONGLONG OverQuotaHistory;  // offset: 0x30 (48)
  ULONGLONG ReadyTime;                  // offset: 0x38 (56)
  ULONGLONG InsertTime;                 // offset: 0x40 (64)
  struct _LIST_ENTRY PerProcessorList;  // offset: 0x48 (72)
  struct _RTL_BALANCED_NODE QueueNode;  // offset: 0x58 (88)
  UCHAR Inserted : 1;                   // offset: 0x70 (112)
  UCHAR MaxOverQuota : 1;               // offset: 0x70 (112)
  UCHAR MinOverQuota : 1;               // offset: 0x70 (112)
  UCHAR RankBias : 1;                   // offset: 0x70 (112)
  UCHAR SoftCap : 1;                    // offset: 0x70 (112)
  UCHAR Spare1 : 3;                     // offset: 0x70 (112)
  UCHAR Depth;                          // offset: 0x71 (113)
  USHORT ReadySummary;                  // offset: 0x72 (114)
  ULONG Rank;                           // offset: 0x74 (116)
  struct _LIST_ENTRY ReadyListHead[16]; // offset: 0x78 (120)
  struct _RTL_RB_TREE ChildScbQueue;    // offset: 0x178 (376)
  struct _KSCB *Parent;                 // offset: 0x188 (392)
  struct _KSCB *Root;                   // offset: 0x190 (400)
};

// 0x240 (576) bytes
struct _KSCHEDULING_GROUP {
  struct _KSCHEDULING_GROUP_POLICY Policy; // offset: 0x0 (0)
  ULONG RelativeWeight;                    // offset: 0x8 (8)
  ULONG ChildMinRate;                      // offset: 0xc (12)
  ULONG ChildMinWeight;                    // offset: 0x10 (16)
  ULONG ChildTotalWeight;                  // offset: 0x14 (20)
  ULONGLONG QueryHistoryTimeStamp;         // offset: 0x18 (24)
  LONGLONG NotificationCycles;             // offset: 0x20 (32)
  union {
    struct _LIST_ENTRY SchedulingGroupList; // offset: 0x28 (40)
    struct _LIST_ENTRY Sibling;             // offset: 0x28 (40)
  };
  struct _KDPC *NotificationDpc;     // offset: 0x38 (56)
  struct _LIST_ENTRY ChildList;      // offset: 0x40 (64)
  struct _KSCHEDULING_GROUP *Parent; // offset: 0x50 (80)
  struct _KSCB PerProcessor[1];      // offset: 0x80 (128)
};

// 0x60 (96) bytes
struct _KLOCK_ENTRY {
  union {
    struct _RTL_BALANCED_NODE TreeNode;      // offset: 0x0 (0)
    struct _SINGLE_LIST_ENTRY FreeListEntry; // offset: 0x0 (0)
  };
  union {
    ULONG EntryFlags; // offset: 0x18 (24)
    struct {
      UCHAR EntryOffset; // offset: 0x18 (24)
      union {
        UCHAR ThreadLocalFlags; // offset: 0x19 (25)
        struct {
          UCHAR WaitingBit : 1; // offset: 0x19 (25)
          UCHAR Spare0 : 7;     // offset: 0x19 (25)
        };
      };
      union {
        UCHAR AcquiredByte;    // offset: 0x1a (26)
        UCHAR AcquiredBit : 1; // offset: 0x1a (26)
      };
      union {
        UCHAR CrossThreadFlags; // offset: 0x1b (27)
        struct {
          UCHAR HeadNodeBit : 1;   // offset: 0x1b (27)
          UCHAR IoPriorityBit : 1; // offset: 0x1b (27)
          UCHAR Spare1 : 6;        // offset: 0x1b (27)
        };
      };
    };
    struct {
      ULONG StaticState : 8; // offset: 0x18 (24)
      ULONG AllFlags : 24;   // offset: 0x18 (24)
    };
  };
  ULONG SpareFlags; // offset: 0x1c (28)
  union {
    struct _KLOCK_ENTRY_LOCK_STATE LockState; // offset: 0x20 (32)
    VOID *volatile LockUnsafe;                // offset: 0x20 (32)
    struct {
      volatile UCHAR CrossThreadReleasableAndBusyByte; // offset: 0x20 (32)
      UCHAR Reserved[6];                               // offset: 0x21 (33)
      volatile UCHAR InTreeByte;                       // offset: 0x27 (39)
      union {
        VOID *SessionState; // offset: 0x28 (40)
        struct {
          ULONG SessionId;  // offset: 0x28 (40)
          ULONG SessionPad; // offset: 0x2c (44)
        };
      };
    };
  };
  union {
    struct {
      struct _RTL_RB_TREE OwnerTree;  // offset: 0x30 (48)
      struct _RTL_RB_TREE WaiterTree; // offset: 0x40 (64)
    };
    CHAR CpuPriorityKey; // offset: 0x30 (48)
  };
  ULONGLONG EntryLock; // offset: 0x50 (80)
  union {
    USHORT AllBoosts; // offset: 0x58 (88)
    struct {
      USHORT IoBoost : 1;          // offset: 0x58 (88)
      USHORT CpuBoostsBitmap : 15; // offset: 0x58 (88)
    };
  };
  USHORT IoNormalPriorityWaiterCount; // offset: 0x5a (90)
  USHORT SparePad;                    // offset: 0x5c (92)
};

// 0xf0 (240) bytes
struct _IMAGE_OPTIONAL_HEADER64 {
  USHORT Magic;                                   // offset: 0x0 (0)
  UCHAR MajorLinkerVersion;                       // offset: 0x2 (2)
  UCHAR MinorLinkerVersion;                       // offset: 0x3 (3)
  ULONG SizeOfCode;                               // offset: 0x4 (4)
  ULONG SizeOfInitializedData;                    // offset: 0x8 (8)
  ULONG SizeOfUninitializedData;                  // offset: 0xc (12)
  ULONG AddressOfEntryPoint;                      // offset: 0x10 (16)
  ULONG BaseOfCode;                               // offset: 0x14 (20)
  ULONGLONG ImageBase;                            // offset: 0x18 (24)
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
  ULONGLONG SizeOfStackReserve;                   // offset: 0x48 (72)
  ULONGLONG SizeOfStackCommit;                    // offset: 0x50 (80)
  ULONGLONG SizeOfHeapReserve;                    // offset: 0x58 (88)
  ULONGLONG SizeOfHeapCommit;                     // offset: 0x60 (96)
  ULONG LoaderFlags;                              // offset: 0x68 (104)
  ULONG NumberOfRvaAndSizes;                      // offset: 0x6c (108)
  struct _IMAGE_DATA_DIRECTORY DataDirectory[16]; // offset: 0x70 (112)
};

// 0x108 (264) bytes
struct _IMAGE_NT_HEADERS64 {
  ULONG Signature;                                // offset: 0x0 (0)
  struct _IMAGE_FILE_HEADER FileHeader;           // offset: 0x4 (4)
  struct _IMAGE_OPTIONAL_HEADER64 OptionalHeader; // offset: 0x18 (24)
};

// 0x18 (24) bytes
struct _RTL_DYNAMIC_HASH_TABLE_ENTRY {
  struct _LIST_ENTRY Linkage; // offset: 0x0 (0)
  ULONGLONG Signature;        // offset: 0x10 (16)
};

// 0x38 (56) bytes
struct _SEP_LUID_TO_INDEX_MAP_ENTRY {
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry; // offset: 0x0 (0)
  LONGLONG ReferenceCount;                        // offset: 0x18 (24)
  ULONGLONG Luid;                                 // offset: 0x20 (32)
  ULONGLONG IndexIntoGlobalSingletonTable;        // offset: 0x28 (40)
  UCHAR MarkedForDeletion;                        // offset: 0x30 (48)
};

// 0x38 (56) bytes
struct _SEP_LOWBOX_HANDLES_ENTRY {
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry; // offset: 0x0 (0)
  LONGLONG ReferenceCount;                        // offset: 0x18 (24)
  VOID *PackageSid;                               // offset: 0x20 (32)
  ULONG HandleCount;                              // offset: 0x28 (40)
  VOID **Handles;                                 // offset: 0x30 (48)
};

// 0x38 (56) bytes
struct _SEP_LOWBOX_NUMBER_ENTRY {
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry; // offset: 0x0 (0)
  LONGLONG ReferenceCount;                        // offset: 0x18 (24)
  VOID *PackageSid;                               // offset: 0x20 (32)
  ULONG LowboxNumber;                             // offset: 0x28 (40)
  VOID *AtomTable;                                // offset: 0x30 (48)
};

// 0x480 (1152) bytes
struct _TOKEN {
  struct _TOKEN_SOURCE TokenSource;                      // offset: 0x0 (0)
  struct _LUID TokenId;                                  // offset: 0x10 (16)
  struct _LUID AuthenticationId;                         // offset: 0x18 (24)
  struct _LUID ParentTokenId;                            // offset: 0x20 (32)
  union _LARGE_INTEGER ExpirationTime;                   // offset: 0x28 (40)
  struct _ERESOURCE *TokenLock;                          // offset: 0x30 (48)
  struct _LUID ModifiedId;                               // offset: 0x38 (56)
  struct _SEP_TOKEN_PRIVILEGES Privileges;               // offset: 0x40 (64)
  struct _SEP_AUDIT_POLICY AuditPolicy;                  // offset: 0x58 (88)
  ULONG SessionId;                                       // offset: 0x78 (120)
  ULONG UserAndGroupCount;                               // offset: 0x7c (124)
  ULONG RestrictedSidCount;                              // offset: 0x80 (128)
  ULONG VariableLength;                                  // offset: 0x84 (132)
  ULONG DynamicCharged;                                  // offset: 0x88 (136)
  ULONG DynamicAvailable;                                // offset: 0x8c (140)
  ULONG DefaultOwnerIndex;                               // offset: 0x90 (144)
  struct _SID_AND_ATTRIBUTES *UserAndGroups;             // offset: 0x98 (152)
  struct _SID_AND_ATTRIBUTES *RestrictedSids;            // offset: 0xa0 (160)
  VOID *PrimaryGroup;                                    // offset: 0xa8 (168)
  ULONG *DynamicPart;                                    // offset: 0xb0 (176)
  struct _ACL *DefaultDacl;                              // offset: 0xb8 (184)
  enum _TOKEN_TYPE TokenType;                            // offset: 0xc0 (192)
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // offset: 0xc4 (196)
  ULONG TokenFlags;                                      // offset: 0xc8 (200)
  UCHAR TokenInUse;                                      // offset: 0xcc (204)
  ULONG IntegrityLevelIndex;                             // offset: 0xd0 (208)
  ULONG MandatoryPolicy;                                 // offset: 0xd4 (212)
  struct _SEP_LOGON_SESSION_REFERENCES *LogonSession;    // offset: 0xd8 (216)
  struct _LUID OriginatingLogonSession;                  // offset: 0xe0 (224)
  struct _SID_AND_ATTRIBUTES_HASH SidHash;               // offset: 0xe8 (232)
  struct _SID_AND_ATTRIBUTES_HASH RestrictedSidHash;     // offset: 0x1f8 (504)
  struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
      *pSecurityAttributes;                             // offset: 0x308 (776)
  VOID *Package;                                        // offset: 0x310 (784)
  struct _SID_AND_ATTRIBUTES *Capabilities;             // offset: 0x318 (792)
  ULONG CapabilityCount;                                // offset: 0x320 (800)
  struct _SID_AND_ATTRIBUTES_HASH CapabilitiesHash;     // offset: 0x328 (808)
  struct _SEP_LOWBOX_NUMBER_ENTRY *LowboxNumberEntry;   // offset: 0x438 (1080)
  struct _SEP_LOWBOX_HANDLES_ENTRY *LowboxHandlesEntry; // offset: 0x440 (1088)
  struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION
      *pClaimAttributes;                           // offset: 0x448 (1096)
  VOID *TrustLevelSid;                             // offset: 0x450 (1104)
  struct _TOKEN *TrustLinkedToken;                 // offset: 0x458 (1112)
  VOID *IntegrityLevelSidValue;                    // offset: 0x460 (1120)
  struct _SEP_SID_VALUES_BLOCK *TokenSidValues;    // offset: 0x468 (1128)
  struct _SEP_LUID_TO_INDEX_MAP_ENTRY *IndexEntry; // offset: 0x470 (1136)
  ULONGLONG VariablePart;                          // offset: 0x478 (1144)
};

// 0x28 (40) bytes
struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR {
  union {
    struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry; // offset: 0x0 (0)
    struct _LIST_ENTRY *CurEntry;                   // offset: 0x0 (0)
  };
  struct _LIST_ENTRY *ChainHead; // offset: 0x18 (24)
  ULONG BucketIndex;             // offset: 0x20 (32)
};

// 0x18 (24) bytes
struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT {
  struct _LIST_ENTRY *ChainHead;   // offset: 0x0 (0)
  struct _LIST_ENTRY *PrevLinkage; // offset: 0x8 (8)
  ULONGLONG Signature;             // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _M128A {
  ULONGLONG Low; // offset: 0x0 (0)
  LONGLONG High; // offset: 0x8 (8)
};

// 0x140 (320) bytes
struct _KEXCEPTION_FRAME {
  ULONGLONG P1Home;       // offset: 0x0 (0)
  ULONGLONG P2Home;       // offset: 0x8 (8)
  ULONGLONG P3Home;       // offset: 0x10 (16)
  ULONGLONG P4Home;       // offset: 0x18 (24)
  ULONGLONG P5;           // offset: 0x20 (32)
  ULONGLONG Spare1;       // offset: 0x28 (40)
  struct _M128A Xmm6;     // offset: 0x30 (48)
  struct _M128A Xmm7;     // offset: 0x40 (64)
  struct _M128A Xmm8;     // offset: 0x50 (80)
  struct _M128A Xmm9;     // offset: 0x60 (96)
  struct _M128A Xmm10;    // offset: 0x70 (112)
  struct _M128A Xmm11;    // offset: 0x80 (128)
  struct _M128A Xmm12;    // offset: 0x90 (144)
  struct _M128A Xmm13;    // offset: 0xa0 (160)
  struct _M128A Xmm14;    // offset: 0xb0 (176)
  struct _M128A Xmm15;    // offset: 0xc0 (192)
  ULONGLONG TrapFrame;    // offset: 0xd0 (208)
  ULONGLONG OutputBuffer; // offset: 0xd8 (216)
  ULONGLONG OutputLength; // offset: 0xe0 (224)
  ULONGLONG Spare2;       // offset: 0xe8 (232)
  ULONGLONG MxCsr;        // offset: 0xf0 (240)
  ULONGLONG Rbp;          // offset: 0xf8 (248)
  ULONGLONG Rbx;          // offset: 0x100 (256)
  ULONGLONG Rdi;          // offset: 0x108 (264)
  ULONGLONG Rsi;          // offset: 0x110 (272)
  ULONGLONG R12;          // offset: 0x118 (280)
  ULONGLONG R13;          // offset: 0x120 (288)
  ULONGLONG R14;          // offset: 0x128 (296)
  ULONGLONG R15;          // offset: 0x130 (304)
  ULONGLONG Return;       // offset: 0x138 (312)
};

// 0x190 (400) bytes
struct _KTRAP_FRAME {
  ULONGLONG P1Home;      // offset: 0x0 (0)
  ULONGLONG P2Home;      // offset: 0x8 (8)
  ULONGLONG P3Home;      // offset: 0x10 (16)
  ULONGLONG P4Home;      // offset: 0x18 (24)
  ULONGLONG P5;          // offset: 0x20 (32)
  CHAR PreviousMode;     // offset: 0x28 (40)
  UCHAR PreviousIrql;    // offset: 0x29 (41)
  UCHAR FaultIndicator;  // offset: 0x2a (42)
  UCHAR ExceptionActive; // offset: 0x2b (43)
  ULONG MxCsr;           // offset: 0x2c (44)
  ULONGLONG Rax;         // offset: 0x30 (48)
  ULONGLONG Rcx;         // offset: 0x38 (56)
  ULONGLONG Rdx;         // offset: 0x40 (64)
  ULONGLONG R8;          // offset: 0x48 (72)
  ULONGLONG R9;          // offset: 0x50 (80)
  ULONGLONG R10;         // offset: 0x58 (88)
  ULONGLONG R11;         // offset: 0x60 (96)
  union {
    ULONGLONG GsBase; // offset: 0x68 (104)
    ULONGLONG GsSwap; // offset: 0x68 (104)
  };
  struct _M128A Xmm0; // offset: 0x70 (112)
  struct _M128A Xmm1; // offset: 0x80 (128)
  struct _M128A Xmm2; // offset: 0x90 (144)
  struct _M128A Xmm3; // offset: 0xa0 (160)
  struct _M128A Xmm4; // offset: 0xb0 (176)
  struct _M128A Xmm5; // offset: 0xc0 (192)
  union {
    ULONGLONG FaultAddress;  // offset: 0xd0 (208)
    ULONGLONG ContextRecord; // offset: 0xd0 (208)
    ULONGLONG TimeStampCKCL; // offset: 0xd0 (208)
  };
  ULONGLONG Dr0;                  // offset: 0xd8 (216)
  ULONGLONG Dr1;                  // offset: 0xe0 (224)
  ULONGLONG Dr2;                  // offset: 0xe8 (232)
  ULONGLONG Dr3;                  // offset: 0xf0 (240)
  ULONGLONG Dr6;                  // offset: 0xf8 (248)
  ULONGLONG Dr7;                  // offset: 0x100 (256)
  ULONGLONG DebugControl;         // offset: 0x108 (264)
  ULONGLONG LastBranchToRip;      // offset: 0x110 (272)
  ULONGLONG LastBranchFromRip;    // offset: 0x118 (280)
  ULONGLONG LastExceptionToRip;   // offset: 0x120 (288)
  ULONGLONG LastExceptionFromRip; // offset: 0x128 (296)
  USHORT SegDs;                   // offset: 0x130 (304)
  USHORT SegEs;                   // offset: 0x132 (306)
  USHORT SegFs;                   // offset: 0x134 (308)
  USHORT SegGs;                   // offset: 0x136 (310)
  ULONGLONG TrapFrame;            // offset: 0x138 (312)
  ULONGLONG Rbx;                  // offset: 0x140 (320)
  ULONGLONG Rdi;                  // offset: 0x148 (328)
  ULONGLONG Rsi;                  // offset: 0x150 (336)
  ULONGLONG Rbp;                  // offset: 0x158 (344)
  union {
    ULONGLONG ErrorCode;      // offset: 0x160 (352)
    ULONGLONG ExceptionFrame; // offset: 0x160 (352)
    ULONGLONG TimeStampKlog;  // offset: 0x160 (352)
  };
  ULONGLONG Rip;   // offset: 0x168 (360)
  USHORT SegCs;    // offset: 0x170 (368)
  UCHAR Fill0;     // offset: 0x172 (370)
  UCHAR Logging;   // offset: 0x173 (371)
  USHORT Fill1[2]; // offset: 0x174 (372)
  ULONG EFlags;    // offset: 0x178 (376)
  ULONG Fill2;     // offset: 0x17c (380)
  ULONGLONG Rsp;   // offset: 0x180 (384)
  USHORT SegSs;    // offset: 0x188 (392)
  USHORT Fill3;    // offset: 0x18a (394)
  ULONG Fill4;     // offset: 0x18c (396)
};

// 0x200 (512) bytes
struct _XSAVE_FORMAT {
  USHORT ControlWord;              // offset: 0x0 (0)
  USHORT StatusWord;               // offset: 0x2 (2)
  UCHAR TagWord;                   // offset: 0x4 (4)
  UCHAR Reserved1;                 // offset: 0x5 (5)
  USHORT ErrorOpcode;              // offset: 0x6 (6)
  ULONG ErrorOffset;               // offset: 0x8 (8)
  USHORT ErrorSelector;            // offset: 0xc (12)
  USHORT Reserved2;                // offset: 0xe (14)
  ULONG DataOffset;                // offset: 0x10 (16)
  USHORT DataSelector;             // offset: 0x14 (20)
  USHORT Reserved3;                // offset: 0x16 (22)
  ULONG MxCsr;                     // offset: 0x18 (24)
  ULONG MxCsr_Mask;                // offset: 0x1c (28)
  struct _M128A FloatRegisters[8]; // offset: 0x20 (32)
  struct _M128A XmmRegisters[16];  // offset: 0xa0 (160)
  UCHAR Reserved4[96];             // offset: 0x1a0 (416)
};

// 0x70 (112) bytes
struct _KUMS_CONTEXT_HEADER {
  ULONGLONG P1Home;              // offset: 0x0 (0)
  ULONGLONG P2Home;              // offset: 0x8 (8)
  ULONGLONG P3Home;              // offset: 0x10 (16)
  ULONGLONG P4Home;              // offset: 0x18 (24)
  VOID *StackTop;                // offset: 0x20 (32)
  ULONGLONG StackSize;           // offset: 0x28 (40)
  ULONGLONG RspOffset;           // offset: 0x30 (48)
  ULONGLONG Rip;                 // offset: 0x38 (56)
  struct _XSAVE_FORMAT *FltSave; // offset: 0x40 (64)
  union {
    struct {
      ULONGLONG Volatile : 1;  // offset: 0x48 (72)
      ULONGLONG Reserved : 63; // offset: 0x48 (72)
    };
    ULONGLONG Flags; // offset: 0x48 (72)
  };
  struct _KTRAP_FRAME *TrapFrame;           // offset: 0x50 (80)
  struct _KEXCEPTION_FRAME *ExceptionFrame; // offset: 0x58 (88)
  struct _KTHREAD *SourceThread;            // offset: 0x60 (96)
  ULONGLONG Return;                         // offset: 0x68 (104)
};

// 0x240 (576) bytes
struct _XSAVE_AREA {
  struct _XSAVE_FORMAT LegacyState; // offset: 0x0 (0)
  struct _XSAVE_AREA_HEADER Header; // offset: 0x200 (512)
};

// 0x20 (32) bytes
struct _XSTATE_CONTEXT {
  ULONGLONG Mask;           // offset: 0x0 (0)
  ULONG Length;             // offset: 0x8 (8)
  ULONG Reserved1;          // offset: 0xc (12)
  struct _XSAVE_AREA *Area; // offset: 0x10 (16)
  VOID *Buffer;             // offset: 0x18 (24)
};

// 0x38 (56) bytes
struct _XSTATE_SAVE {
  struct _XSTATE_SAVE *Prev;            // offset: 0x0 (0)
  struct _KTHREAD *Thread;              // offset: 0x8 (8)
  UCHAR Level;                          // offset: 0x10 (16)
  struct _XSTATE_CONTEXT XStateContext; // offset: 0x18 (24)
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

// 0x98 (152) bytes
struct _EXCEPTION_RECORD {
  LONG ExceptionCode;                        // offset: 0x0 (0)
  ULONG ExceptionFlags;                      // offset: 0x4 (4)
  struct _EXCEPTION_RECORD *ExceptionRecord; // offset: 0x8 (8)
  VOID *ExceptionAddress;                    // offset: 0x10 (16)
  ULONG NumberParameters;                    // offset: 0x18 (24)
  ULONGLONG ExceptionInformation[15];        // offset: 0x20 (32)
};

// 0x4d0 (1232) bytes
struct _CONTEXT {
  ULONGLONG P1Home;   // offset: 0x0 (0)
  ULONGLONG P2Home;   // offset: 0x8 (8)
  ULONGLONG P3Home;   // offset: 0x10 (16)
  ULONGLONG P4Home;   // offset: 0x18 (24)
  ULONGLONG P5Home;   // offset: 0x20 (32)
  ULONGLONG P6Home;   // offset: 0x28 (40)
  ULONG ContextFlags; // offset: 0x30 (48)
  ULONG MxCsr;        // offset: 0x34 (52)
  USHORT SegCs;       // offset: 0x38 (56)
  USHORT SegDs;       // offset: 0x3a (58)
  USHORT SegEs;       // offset: 0x3c (60)
  USHORT SegFs;       // offset: 0x3e (62)
  USHORT SegGs;       // offset: 0x40 (64)
  USHORT SegSs;       // offset: 0x42 (66)
  ULONG EFlags;       // offset: 0x44 (68)
  ULONGLONG Dr0;      // offset: 0x48 (72)
  ULONGLONG Dr1;      // offset: 0x50 (80)
  ULONGLONG Dr2;      // offset: 0x58 (88)
  ULONGLONG Dr3;      // offset: 0x60 (96)
  ULONGLONG Dr6;      // offset: 0x68 (104)
  ULONGLONG Dr7;      // offset: 0x70 (112)
  ULONGLONG Rax;      // offset: 0x78 (120)
  ULONGLONG Rcx;      // offset: 0x80 (128)
  ULONGLONG Rdx;      // offset: 0x88 (136)
  ULONGLONG Rbx;      // offset: 0x90 (144)
  ULONGLONG Rsp;      // offset: 0x98 (152)
  ULONGLONG Rbp;      // offset: 0xa0 (160)
  ULONGLONG Rsi;      // offset: 0xa8 (168)
  ULONGLONG Rdi;      // offset: 0xb0 (176)
  ULONGLONG R8;       // offset: 0xb8 (184)
  ULONGLONG R9;       // offset: 0xc0 (192)
  ULONGLONG R10;      // offset: 0xc8 (200)
  ULONGLONG R11;      // offset: 0xd0 (208)
  ULONGLONG R12;      // offset: 0xd8 (216)
  ULONGLONG R13;      // offset: 0xe0 (224)
  ULONGLONG R14;      // offset: 0xe8 (232)
  ULONGLONG R15;      // offset: 0xf0 (240)
  ULONGLONG Rip;      // offset: 0xf8 (248)
  union {
    struct _XSAVE_FORMAT FltSave; // offset: 0x100 (256)
    struct {
      struct _M128A Header[2]; // offset: 0x100 (256)
      struct _M128A Legacy[8]; // offset: 0x120 (288)
      struct _M128A Xmm0;      // offset: 0x1a0 (416)
      struct _M128A Xmm1;      // offset: 0x1b0 (432)
      struct _M128A Xmm2;      // offset: 0x1c0 (448)
      struct _M128A Xmm3;      // offset: 0x1d0 (464)
      struct _M128A Xmm4;      // offset: 0x1e0 (480)
      struct _M128A Xmm5;      // offset: 0x1f0 (496)
      struct _M128A Xmm6;      // offset: 0x200 (512)
      struct _M128A Xmm7;      // offset: 0x210 (528)
      struct _M128A Xmm8;      // offset: 0x220 (544)
      struct _M128A Xmm9;      // offset: 0x230 (560)
      struct _M128A Xmm10;     // offset: 0x240 (576)
      struct _M128A Xmm11;     // offset: 0x250 (592)
      struct _M128A Xmm12;     // offset: 0x260 (608)
      struct _M128A Xmm13;     // offset: 0x270 (624)
      struct _M128A Xmm14;     // offset: 0x280 (640)
      struct _M128A Xmm15;     // offset: 0x290 (656)
    };
  };
  struct _M128A VectorRegister[26]; // offset: 0x300 (768)
  ULONGLONG VectorControl;          // offset: 0x4a0 (1184)
  ULONGLONG DebugControl;           // offset: 0x4a8 (1192)
  ULONGLONG LastBranchToRip;        // offset: 0x4b0 (1200)
  ULONGLONG LastBranchFromRip;      // offset: 0x4b8 (1208)
  ULONGLONG LastExceptionToRip;     // offset: 0x4c0 (1216)
  ULONGLONG LastExceptionFromRip;   // offset: 0x4c8 (1224)
};

// 0x520 (1312) bytes
struct _RTL_UMS_CONTEXT {
  struct _SINGLE_LIST_ENTRY Link; // offset: 0x0 (0)
  struct _CONTEXT Context;        // offset: 0x10 (16)
  VOID *Teb;                      // offset: 0x4e0 (1248)
  VOID *UserContext;              // offset: 0x4e8 (1256)
  union {
    struct {
      volatile ULONG ScheduledThread : 1;         // offset: 0x4f0 (1264)
      volatile ULONG Suspended : 1;               // offset: 0x4f0 (1264)
      volatile ULONG VolatileContext : 1;         // offset: 0x4f0 (1264)
      volatile ULONG Terminated : 1;              // offset: 0x4f0 (1264)
      volatile ULONG DebugActive : 1;             // offset: 0x4f0 (1264)
      volatile ULONG RunningOnSelfThread : 1;     // offset: 0x4f0 (1264)
      volatile ULONG DenyRunningOnSelfThread : 1; // offset: 0x4f0 (1264)
    };
    volatile LONG Flags; // offset: 0x4f0 (1264)
  };
  union {
    struct {
      volatile ULONGLONG KernelUpdateLock : 2; // offset: 0x4f8 (1272)
      volatile ULONGLONG PrimaryClientID : 62; // offset: 0x4f8 (1272)
    };
    volatile ULONGLONG ContextLock; // offset: 0x4f8 (1272)
  };
  struct _RTL_UMS_CONTEXT *PrimaryUmsContext; // offset: 0x500 (1280)
  ULONG SwitchCount;                          // offset: 0x508 (1288)
  ULONG KernelYieldCount;                     // offset: 0x50c (1292)
  ULONG MixedYieldCount;                      // offset: 0x510 (1296)
  ULONG YieldCount;                           // offset: 0x514 (1300)
};

// 0x5b0 (1456) bytes
struct _KPROCESSOR_STATE {
  struct _KSPECIAL_REGISTERS SpecialRegisters; // offset: 0x0 (0)
  struct _CONTEXT ContextFrame;                // offset: 0xe0 (224)
};

// 0x10 (16) bytes
struct _EXCEPTION_POINTERS {
  struct _EXCEPTION_RECORD *ExceptionRecord; // offset: 0x0 (0)
  struct _CONTEXT *ContextRecord;            // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _EXCEPTION_REGISTRATION_RECORD {
  struct _EXCEPTION_REGISTRATION_RECORD *Next; // offset: 0x0 (0)
  enum _EXCEPTION_DISPOSITION (*Handler)(struct _EXCEPTION_RECORD *arg1,
                                         VOID *arg2, struct _CONTEXT *arg3,
                                         VOID *arg4); // offset: 0x8 (8)
};

// 0x28 (40) bytes
struct _RTL_CRITICAL_SECTION {
  struct _RTL_CRITICAL_SECTION_DEBUG *DebugInfo; // offset: 0x0 (0)
  LONG LockCount;                                // offset: 0x8 (8)
  LONG RecursionCount;                           // offset: 0xc (12)
  VOID *OwningThread;                            // offset: 0x10 (16)
  VOID *LockSemaphore;                           // offset: 0x18 (24)
  ULONGLONG SpinCount;                           // offset: 0x20 (32)
};

// 0x68 (104) bytes
struct _HEAP_LOCK {
  union {
    struct _RTL_CRITICAL_SECTION CriticalSection; // offset: 0x0 (0)
    struct _ERESOURCE Resource;                   // offset: 0x0 (0)

  } Lock; // offset: 0x0 (0)
};

// 0x298 (664) bytes
struct _HEAP {
  union {
    struct _HEAP_SEGMENT Segment; // offset: 0x0 (0)
    struct {
      struct _HEAP_ENTRY Entry;              // offset: 0x0 (0)
      ULONG SegmentSignature;                // offset: 0x10 (16)
      ULONG SegmentFlags;                    // offset: 0x14 (20)
      struct _LIST_ENTRY SegmentListEntry;   // offset: 0x18 (24)
      struct _HEAP *Heap;                    // offset: 0x28 (40)
      VOID *BaseAddress;                     // offset: 0x30 (48)
      ULONG NumberOfPages;                   // offset: 0x38 (56)
      struct _HEAP_ENTRY *FirstEntry;        // offset: 0x40 (64)
      struct _HEAP_ENTRY *LastValidEntry;    // offset: 0x48 (72)
      ULONG NumberOfUnCommittedPages;        // offset: 0x50 (80)
      ULONG NumberOfUnCommittedRanges;       // offset: 0x54 (84)
      USHORT SegmentAllocatorBackTraceIndex; // offset: 0x58 (88)
      USHORT Reserved;                       // offset: 0x5a (90)
      struct _LIST_ENTRY UCRSegmentList;     // offset: 0x60 (96)
    };
  };
  ULONG Flags;                                     // offset: 0x70 (112)
  ULONG ForceFlags;                                // offset: 0x74 (116)
  ULONG CompatibilityFlags;                        // offset: 0x78 (120)
  ULONG EncodeFlagMask;                            // offset: 0x7c (124)
  struct _HEAP_ENTRY Encoding;                     // offset: 0x80 (128)
  ULONG Interceptor;                               // offset: 0x90 (144)
  ULONG VirtualMemoryThreshold;                    // offset: 0x94 (148)
  ULONG Signature;                                 // offset: 0x98 (152)
  ULONGLONG SegmentReserve;                        // offset: 0xa0 (160)
  ULONGLONG SegmentCommit;                         // offset: 0xa8 (168)
  ULONGLONG DeCommitFreeBlockThreshold;            // offset: 0xb0 (176)
  ULONGLONG DeCommitTotalFreeThreshold;            // offset: 0xb8 (184)
  ULONGLONG TotalFreeSize;                         // offset: 0xc0 (192)
  ULONGLONG MaximumAllocationSize;                 // offset: 0xc8 (200)
  USHORT ProcessHeapsListIndex;                    // offset: 0xd0 (208)
  USHORT HeaderValidateLength;                     // offset: 0xd2 (210)
  VOID *HeaderValidateCopy;                        // offset: 0xd8 (216)
  USHORT NextAvailableTagIndex;                    // offset: 0xe0 (224)
  USHORT MaximumTagIndex;                          // offset: 0xe2 (226)
  struct _HEAP_TAG_ENTRY *TagEntries;              // offset: 0xe8 (232)
  struct _LIST_ENTRY UCRList;                      // offset: 0xf0 (240)
  ULONGLONG AlignRound;                            // offset: 0x100 (256)
  ULONGLONG AlignMask;                             // offset: 0x108 (264)
  struct _LIST_ENTRY VirtualAllocdBlocks;          // offset: 0x110 (272)
  struct _LIST_ENTRY SegmentList;                  // offset: 0x120 (288)
  USHORT AllocatorBackTraceIndex;                  // offset: 0x130 (304)
  ULONG NonDedicatedListLength;                    // offset: 0x134 (308)
  VOID *BlocksIndex;                               // offset: 0x138 (312)
  VOID *UCRIndex;                                  // offset: 0x140 (320)
  struct _HEAP_PSEUDO_TAG_ENTRY *PseudoTagEntries; // offset: 0x148 (328)
  struct _LIST_ENTRY FreeLists;                    // offset: 0x150 (336)
  struct _HEAP_LOCK *LockVariable;                 // offset: 0x160 (352)
  LONG(*CommitRoutine)
  (VOID *arg1, VOID **arg2, ULONGLONG *arg3);      // offset: 0x168 (360)
  VOID *FrontEndHeap;                              // offset: 0x170 (368)
  USHORT FrontHeapLockCount;                       // offset: 0x178 (376)
  UCHAR FrontEndHeapType;                          // offset: 0x17a (378)
  UCHAR RequestedFrontEndHeapType;                 // offset: 0x17b (379)
  USHORT *FrontEndHeapUsageData;                   // offset: 0x180 (384)
  USHORT FrontEndHeapMaximumIndex;                 // offset: 0x188 (392)
  volatile UCHAR FrontEndHeapStatusBitmap[129];    // offset: 0x18a (394)
  struct _HEAP_COUNTERS Counters;                  // offset: 0x210 (528)
  struct _HEAP_TUNING_PARAMETERS TuningParameters; // offset: 0x288 (648)
};

// 0x30 (48) bytes
struct _RTL_CRITICAL_SECTION_DEBUG {
  USHORT Type;                                   // offset: 0x0 (0)
  USHORT CreatorBackTraceIndex;                  // offset: 0x2 (2)
  struct _RTL_CRITICAL_SECTION *CriticalSection; // offset: 0x8 (8)
  struct _LIST_ENTRY ProcessLocksList;           // offset: 0x10 (16)
  ULONG EntryCount;                              // offset: 0x20 (32)
  ULONG ContentionCount;                         // offset: 0x24 (36)
  ULONG Flags;                                   // offset: 0x28 (40)
  USHORT CreatorBackTraceIndexHigh;              // offset: 0x2c (44)
  USHORT SpareUSHORT;                            // offset: 0x2e (46)
};

// 0x410 (1040) bytes
struct _RTL_USER_PROCESS_PARAMETERS {
  ULONG MaximumLength;                                   // offset: 0x0 (0)
  ULONG Length;                                          // offset: 0x4 (4)
  ULONG Flags;                                           // offset: 0x8 (8)
  ULONG DebugFlags;                                      // offset: 0xc (12)
  VOID *ConsoleHandle;                                   // offset: 0x10 (16)
  ULONG ConsoleFlags;                                    // offset: 0x18 (24)
  VOID *StandardInput;                                   // offset: 0x20 (32)
  VOID *StandardOutput;                                  // offset: 0x28 (40)
  VOID *StandardError;                                   // offset: 0x30 (48)
  struct _CURDIR CurrentDirectory;                       // offset: 0x38 (56)
  struct _UNICODE_STRING DllPath;                        // offset: 0x50 (80)
  struct _UNICODE_STRING ImagePathName;                  // offset: 0x60 (96)
  struct _UNICODE_STRING CommandLine;                    // offset: 0x70 (112)
  VOID *Environment;                                     // offset: 0x80 (128)
  ULONG StartingX;                                       // offset: 0x88 (136)
  ULONG StartingY;                                       // offset: 0x8c (140)
  ULONG CountX;                                          // offset: 0x90 (144)
  ULONG CountY;                                          // offset: 0x94 (148)
  ULONG CountCharsX;                                     // offset: 0x98 (152)
  ULONG CountCharsY;                                     // offset: 0x9c (156)
  ULONG FillAttribute;                                   // offset: 0xa0 (160)
  ULONG WindowFlags;                                     // offset: 0xa4 (164)
  ULONG ShowWindowFlags;                                 // offset: 0xa8 (168)
  struct _UNICODE_STRING WindowTitle;                    // offset: 0xb0 (176)
  struct _UNICODE_STRING DesktopInfo;                    // offset: 0xc0 (192)
  struct _UNICODE_STRING ShellInfo;                      // offset: 0xd0 (208)
  struct _UNICODE_STRING RuntimeData;                    // offset: 0xe0 (224)
  struct _RTL_DRIVE_LETTER_CURDIR CurrentDirectores[32]; // offset: 0xf0 (240)
  ULONGLONG EnvironmentSize;                             // offset: 0x3f0 (1008)
  ULONGLONG EnvironmentVersion;                          // offset: 0x3f8 (1016)
  VOID *PackageDependencyData;                           // offset: 0x400 (1024)
  ULONG ProcessGroupId;                                  // offset: 0x408 (1032)
  ULONG LoaderThreads;                                   // offset: 0x40c (1036)
};

// 0x4e8 (1256) bytes
struct _GDI_TEB_BATCH {
  ULONG Offset : 31;             // offset: 0x0 (0)
  ULONG HasRenderingCommand : 1; // offset: 0x0 (0)
  ULONGLONG HDC;                 // offset: 0x8 (8)
  ULONG Buffer[310];             // offset: 0x10 (16)
};

// 0x460 (1120) bytes
struct _PEB32 {
  UCHAR InheritedAddressSpace;    // offset: 0x0 (0)
  UCHAR ReadImageFileExecOptions; // offset: 0x1 (1)
  UCHAR BeingDebugged;            // offset: 0x2 (2)
  union {
    UCHAR BitField; // offset: 0x3 (3)
    struct {
      UCHAR ImageUsesLargePages : 1;          // offset: 0x3 (3)
      UCHAR IsProtectedProcess : 1;           // offset: 0x3 (3)
      UCHAR IsImageDynamicallyRelocated : 1;  // offset: 0x3 (3)
      UCHAR SkipPatchingUser32Forwarders : 1; // offset: 0x3 (3)
      UCHAR IsPackagedProcess : 1;            // offset: 0x3 (3)
      UCHAR IsAppContainer : 1;               // offset: 0x3 (3)
      UCHAR IsProtectedProcessLight : 1;      // offset: 0x3 (3)
      UCHAR SpareBits : 1;                    // offset: 0x3 (3)
    };
  };
  ULONG Mutant;            // offset: 0x4 (4)
  ULONG ImageBaseAddress;  // offset: 0x8 (8)
  ULONG Ldr;               // offset: 0xc (12)
  ULONG ProcessParameters; // offset: 0x10 (16)
  ULONG SubSystemData;     // offset: 0x14 (20)
  ULONG ProcessHeap;       // offset: 0x18 (24)
  ULONG FastPebLock;       // offset: 0x1c (28)
  ULONG AtlThunkSListPtr;  // offset: 0x20 (32)
  ULONG IFEOKey;           // offset: 0x24 (36)
  union {
    ULONG CrossProcessFlags; // offset: 0x28 (40)
    struct {
      ULONG ProcessInJob : 1;        // offset: 0x28 (40)
      ULONG ProcessInitializing : 1; // offset: 0x28 (40)
      ULONG ProcessUsingVEH : 1;     // offset: 0x28 (40)
      ULONG ProcessUsingVCH : 1;     // offset: 0x28 (40)
      ULONG ProcessUsingFTH : 1;     // offset: 0x28 (40)
      ULONG ReservedBits0 : 27;      // offset: 0x28 (40)
    };
  };
  union {
    ULONG KernelCallbackTable; // offset: 0x2c (44)
    ULONG UserSharedInfoPtr;   // offset: 0x2c (44)
  };
  ULONG SystemReserved[1];                     // offset: 0x30 (48)
  ULONG AtlThunkSListPtr32;                    // offset: 0x34 (52)
  ULONG ApiSetMap;                             // offset: 0x38 (56)
  ULONG TlsExpansionCounter;                   // offset: 0x3c (60)
  ULONG TlsBitmap;                             // offset: 0x40 (64)
  ULONG TlsBitmapBits[2];                      // offset: 0x44 (68)
  ULONG ReadOnlySharedMemoryBase;              // offset: 0x4c (76)
  ULONG SparePvoid0;                           // offset: 0x50 (80)
  ULONG ReadOnlyStaticServerData;              // offset: 0x54 (84)
  ULONG AnsiCodePageData;                      // offset: 0x58 (88)
  ULONG OemCodePageData;                       // offset: 0x5c (92)
  ULONG UnicodeCaseTableData;                  // offset: 0x60 (96)
  ULONG NumberOfProcessors;                    // offset: 0x64 (100)
  ULONG NtGlobalFlag;                          // offset: 0x68 (104)
  union _LARGE_INTEGER CriticalSectionTimeout; // offset: 0x70 (112)
  ULONG HeapSegmentReserve;                    // offset: 0x78 (120)
  ULONG HeapSegmentCommit;                     // offset: 0x7c (124)
  ULONG HeapDeCommitTotalFreeThreshold;        // offset: 0x80 (128)
  ULONG HeapDeCommitFreeBlockThreshold;        // offset: 0x84 (132)
  ULONG NumberOfHeaps;                         // offset: 0x88 (136)
  ULONG MaximumNumberOfHeaps;                  // offset: 0x8c (140)
  ULONG ProcessHeaps;                          // offset: 0x90 (144)
  ULONG GdiSharedHandleTable;                  // offset: 0x94 (148)
  ULONG ProcessStarterHelper;                  // offset: 0x98 (152)
  ULONG GdiDCAttributeList;                    // offset: 0x9c (156)
  ULONG LoaderLock;                            // offset: 0xa0 (160)
  ULONG OSMajorVersion;                        // offset: 0xa4 (164)
  ULONG OSMinorVersion;                        // offset: 0xa8 (168)
  USHORT OSBuildNumber;                        // offset: 0xac (172)
  USHORT OSCSDVersion;                         // offset: 0xae (174)
  ULONG OSPlatformId;                          // offset: 0xb0 (176)
  ULONG ImageSubsystem;                        // offset: 0xb4 (180)
  ULONG ImageSubsystemMajorVersion;            // offset: 0xb8 (184)
  ULONG ImageSubsystemMinorVersion;            // offset: 0xbc (188)
  ULONG ActiveProcessAffinityMask;             // offset: 0xc0 (192)
  ULONG GdiHandleBuffer[34];                   // offset: 0xc4 (196)
  ULONG PostProcessInitRoutine;                // offset: 0x14c (332)
  ULONG TlsExpansionBitmap;                    // offset: 0x150 (336)
  ULONG TlsExpansionBitmapBits[32];            // offset: 0x154 (340)
  ULONG SessionId;                             // offset: 0x1d4 (468)
  union _ULARGE_INTEGER AppCompatFlags;        // offset: 0x1d8 (472)
  union _ULARGE_INTEGER AppCompatFlagsUser;    // offset: 0x1e0 (480)
  ULONG pShimData;                             // offset: 0x1e8 (488)
  ULONG AppCompatInfo;                         // offset: 0x1ec (492)
  struct _STRING32 CSDVersion;                 // offset: 0x1f0 (496)
  ULONG ActivationContextData;                 // offset: 0x1f8 (504)
  ULONG ProcessAssemblyStorageMap;             // offset: 0x1fc (508)
  ULONG SystemDefaultActivationContextData;    // offset: 0x200 (512)
  ULONG SystemAssemblyStorageMap;              // offset: 0x204 (516)
  ULONG MinimumStackCommit;                    // offset: 0x208 (520)
  ULONG FlsCallback;                           // offset: 0x20c (524)
  struct LIST_ENTRY32 FlsListHead;             // offset: 0x210 (528)
  ULONG FlsBitmap;                             // offset: 0x218 (536)
  ULONG FlsBitmapBits[4];                      // offset: 0x21c (540)
  ULONG FlsHighIndex;                          // offset: 0x22c (556)
  ULONG WerRegistrationData;                   // offset: 0x230 (560)
  ULONG WerShipAssertPtr;                      // offset: 0x234 (564)
  ULONG pUnused;                               // offset: 0x238 (568)
  ULONG pImageHeaderHash;                      // offset: 0x23c (572)
  union {
    ULONG TracingFlags; // offset: 0x240 (576)
    struct {
      ULONG HeapTracingEnabled : 1;      // offset: 0x240 (576)
      ULONG CritSecTracingEnabled : 1;   // offset: 0x240 (576)
      ULONG LibLoaderTracingEnabled : 1; // offset: 0x240 (576)
      ULONG SpareTracingBits : 29;       // offset: 0x240 (576)
    };
  };
  ULONGLONG CsrServerReadOnlySharedMemoryBase; // offset: 0x248 (584)
  ULONG TppWorkerpListLock;                    // offset: 0x250 (592)
  struct LIST_ENTRY32 TppWorkerpList;          // offset: 0x254 (596)
  ULONG WaitOnAddressHashTable[128];           // offset: 0x25c (604)
};

// 0x10 (16) bytes
struct _INTERRUPT_REMAPPING_INFO {
  ULONG IrtIndex : 30;       // offset: 0x0 (0)
  ULONG FlagHalInternal : 1; // offset: 0x0 (0)
  ULONG FlagTranslated : 1;  // offset: 0x0 (0)
  union {
    union _ULARGE_INTEGER RemappedFormat; // offset: 0x8 (8)
    struct {
      ULONG MessageAddressLow; // offset: 0x0 (0)
      USHORT MessageData;      // offset: 0x4 (4)
      USHORT Reserved;         // offset: 0x6 (6)
    } Msi;                     // offset: 0x8 (8)

  } u; // offset: 0x8 (8)
};

// 0x58 (88) bytes
struct _INTERRUPT_VECTOR_DATA {
  enum INTERRUPT_CONNECTION_TYPE Type;           // offset: 0x0 (0)
  ULONG Vector;                                  // offset: 0x4 (4)
  UCHAR Irql;                                    // offset: 0x8 (8)
  enum _KINTERRUPT_POLARITY Polarity;            // offset: 0xc (12)
  enum _KINTERRUPT_MODE Mode;                    // offset: 0x10 (16)
  struct _GROUP_AFFINITY TargetProcessors;       // offset: 0x18 (24)
  struct _INTERRUPT_REMAPPING_INFO IntRemapInfo; // offset: 0x28 (40)
  struct {
    ULONG Gsiv;               // offset: 0x0 (0)
    ULONG WakeInterrupt : 1;  // offset: 0x4 (4)
    ULONG ReservedFlags : 31; // offset: 0x4 (4)
  } ControllerInput;          // offset: 0x38 (56)
  ULONGLONG HvDeviceId;       // offset: 0x40 (64)
  union {
    struct {
      union _LARGE_INTEGER Address; // offset: 0x0 (0)
      ULONG DataPayload;            // offset: 0x8 (8)
    } XapicMessage;                 // offset: 0x48 (72)
    struct {
      struct _INTERRUPT_HT_INTR_INFO IntrInfo; // offset: 0x0 (0)
    } Hypertransport;                          // offset: 0x48 (72)
    struct {
      union _LARGE_INTEGER Address; // offset: 0x0 (0)
      ULONG DataPayload;            // offset: 0x8 (8)
    } GenericMessage;               // offset: 0x48 (72)
    struct {
      enum HAL_APIC_DESTINATION_MODE DestinationMode; // offset: 0x0 (0)
    } MessageRequest;                                 // offset: 0x48 (72)
  };
};

// 0x60 (96) bytes
struct _INTERRUPT_CONNECTION_DATA {
  ULONG Count;                              // offset: 0x0 (0)
  struct _INTERRUPT_VECTOR_DATA Vectors[1]; // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _KTIMER_TABLE_ENTRY {
  ULONGLONG Lock;             // offset: 0x0 (0)
  struct _LIST_ENTRY Entry;   // offset: 0x8 (8)
  union _ULARGE_INTEGER Time; // offset: 0x18 (24)
};

// 0x40 (64) bytes
struct _KTIMER {
  struct _DISPATCHER_HEADER Header;  // offset: 0x0 (0)
  union _ULARGE_INTEGER DueTime;     // offset: 0x18 (24)
  struct _LIST_ENTRY TimerListEntry; // offset: 0x20 (32)
  struct _KDPC *Dpc;                 // offset: 0x30 (48)
  ULONG Processor;                   // offset: 0x38 (56)
  ULONG Period;                      // offset: 0x3c (60)
};

// 0x348 (840) bytes
struct _POP_THERMAL_ZONE {
  union {
    struct _POP_POLICY_DEVICE PolicyDevice; // offset: 0x0 (0)
    struct {
      struct _LIST_ENTRY Link;                  // offset: 0x0 (0)
      enum POWER_POLICY_DEVICE_TYPE DeviceType; // offset: 0x10 (16)
      VOID *Notification;                       // offset: 0x18 (24)
      struct _UNICODE_STRING Name;              // offset: 0x20 (32)
      struct _DEVICE_OBJECT *Device;            // offset: 0x30 (48)
      struct _IRP *Irp;                         // offset: 0x38 (56)
    };
  };
  UCHAR State;                                            // offset: 0x40 (64)
  UCHAR Flags;                                            // offset: 0x41 (65)
  UCHAR Removing;                                         // offset: 0x42 (66)
  UCHAR Mode;                                             // offset: 0x43 (67)
  UCHAR PendingMode;                                      // offset: 0x44 (68)
  UCHAR ActivePoint;                                      // offset: 0x45 (69)
  UCHAR PendingActivePoint;                               // offset: 0x46 (70)
  UCHAR Critical;                                         // offset: 0x47 (71)
  UCHAR ThermalStandby;                                   // offset: 0x48 (72)
  UCHAR OverThrottled;                                    // offset: 0x49 (73)
  LONG HighPrecisionThrottle;                             // offset: 0x4c (76)
  LONG Throttle;                                          // offset: 0x50 (80)
  LONG PendingThrottle;                                   // offset: 0x54 (84)
  ULONG ThrottleReasons;                                  // offset: 0x58 (88)
  ULONGLONG LastTime;                                     // offset: 0x60 (96)
  ULONG SampleRate;                                       // offset: 0x68 (104)
  ULONG LastTemp;                                         // offset: 0x6c (108)
  struct _KTIMER PassiveTimer;                            // offset: 0x70 (112)
  struct _KDPC PassiveDpc;                                // offset: 0xb0 (176)
  struct _THERMAL_INFORMATION_EX Info;                    // offset: 0xf0 (240)
  union _LARGE_INTEGER InfoLastUpdateTime;                // offset: 0x148 (328)
  struct _THERMAL_POLICY Policy;                          // offset: 0x150 (336)
  UCHAR PolicyDriver;                                     // offset: 0x168 (360)
  ULONGLONG LastActiveStartTime;                          // offset: 0x170 (368)
  ULONGLONG LastPassiveStartTime;                         // offset: 0x178 (376)
  struct _WORK_QUEUE_ITEM WorkItem;                       // offset: 0x180 (384)
  struct _POP_RW_LOCK Lock;                               // offset: 0x1a0 (416)
  struct _KEVENT ZoneStopped;                             // offset: 0x1b0 (432)
  struct _KEVENT TemperatureUpdated;                      // offset: 0x1c8 (456)
  ULONG InstanceId;                                       // offset: 0x1e0 (480)
  struct _POP_THERMAL_TELEMETRY_TRACKER TelemetryTracker; // offset: 0x1e8 (488)
  struct _UNICODE_STRING Description;                     // offset: 0x338 (824)
};

// 0x88 (136) bytes
struct _LAZY_WRITER {
  struct _KDPC ScanDpc;             // offset: 0x0 (0)
  struct _KTIMER ScanTimer;         // offset: 0x40 (64)
  UCHAR ScanActive;                 // offset: 0x80 (128)
  UCHAR OtherWork;                  // offset: 0x81 (129)
  UCHAR PendingTeardownScan;        // offset: 0x82 (130)
  UCHAR PendingPeriodicScan;        // offset: 0x83 (131)
  UCHAR PendingLowMemoryScan;       // offset: 0x84 (132)
  UCHAR PendingPowerScan;           // offset: 0x85 (133)
  UCHAR PendingCoalescingFlushScan; // offset: 0x86 (134)
};

// 0x2d8 (728) bytes
struct _KTRANSACTION {
  struct _KEVENT OutcomeEvent;                          // offset: 0x0 (0)
  ULONG cookie;                                         // offset: 0x18 (24)
  struct _KMUTANT Mutex;                                // offset: 0x20 (32)
  struct _KTRANSACTION *TreeTx;                         // offset: 0x58 (88)
  struct _KTMOBJECT_NAMESPACE_LINK GlobalNamespaceLink; // offset: 0x60 (96)
  struct _KTMOBJECT_NAMESPACE_LINK TmNamespaceLink;     // offset: 0x88 (136)
  struct _GUID UOW;                                     // offset: 0xb0 (176)
  enum _KTRANSACTION_STATE State;                       // offset: 0xc0 (192)
  ULONG Flags;                                          // offset: 0xc4 (196)
  struct _LIST_ENTRY EnlistmentHead;                    // offset: 0xc8 (200)
  ULONG EnlistmentCount;                                // offset: 0xd8 (216)
  ULONG RecoverableEnlistmentCount;                     // offset: 0xdc (220)
  ULONG PrePrepareRequiredEnlistmentCount;              // offset: 0xe0 (224)
  ULONG PrepareRequiredEnlistmentCount;                 // offset: 0xe4 (228)
  ULONG OutcomeRequiredEnlistmentCount;                 // offset: 0xe8 (232)
  ULONG PendingResponses;                               // offset: 0xec (236)
  struct _KENLISTMENT *SuperiorEnlistment;              // offset: 0xf0 (240)
  union _CLS_LSN LastLsn;                               // offset: 0xf8 (248)
  struct _LIST_ENTRY PromotedEntry;                     // offset: 0x100 (256)
  struct _KTRANSACTION *PromoterTransaction;            // offset: 0x110 (272)
  VOID *PromotePropagation;                             // offset: 0x118 (280)
  ULONG IsolationLevel;                                 // offset: 0x120 (288)
  ULONG IsolationFlags;                                 // offset: 0x124 (292)
  union _LARGE_INTEGER Timeout;                         // offset: 0x128 (296)
  struct _UNICODE_STRING Description;                   // offset: 0x130 (304)
  struct _KTHREAD *RollbackThread;                      // offset: 0x140 (320)
  struct _WORK_QUEUE_ITEM RollbackWorkItem;             // offset: 0x148 (328)
  struct _KDPC RollbackDpc;                             // offset: 0x168 (360)
  struct _KTIMER RollbackTimer;                         // offset: 0x1a8 (424)
  struct _LIST_ENTRY LsnOrderedEntry;                   // offset: 0x1e8 (488)
  enum _KTRANSACTION_OUTCOME Outcome;                   // offset: 0x1f8 (504)
  struct _KTM *Tm;                                      // offset: 0x200 (512)
  LONGLONG CommitReservation;                           // offset: 0x208 (520)
  struct _KTRANSACTION_HISTORY TransactionHistory[10];  // offset: 0x210 (528)
  ULONG TransactionHistoryCount;                        // offset: 0x260 (608)
  VOID *DTCPrivateInformation;                          // offset: 0x268 (616)
  ULONG DTCPrivateInformationLength;                    // offset: 0x270 (624)
  struct _KMUTANT DTCPrivateInformationMutex;           // offset: 0x278 (632)
  VOID *PromotedTxSelfHandle;                           // offset: 0x2b0 (688)
  ULONG PendingPromotionCount;                          // offset: 0x2b8 (696)
  struct _KEVENT PromotionCompletedEvent;               // offset: 0x2c0 (704)
};

// 0x88 (136) bytes
struct _POP_FX_WORK_ORDER_WATCHDOG_INFO {
  struct _KTIMER Timer;                 // offset: 0x0 (0)
  struct _KDPC Dpc;                     // offset: 0x40 (64)
  struct _POP_FX_WORK_ORDER *WorkOrder; // offset: 0x80 (128)
};

// 0x38 (56) bytes
struct _POP_FX_WORK_ORDER {
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x0 (0)
  LONG WorkCount;                   // offset: 0x20 (32)
  VOID *Context;                    // offset: 0x28 (40)
  struct _POP_FX_WORK_ORDER_WATCHDOG_INFO
      *WatchdogTimerInfo; // offset: 0x30 (48)
};

// 0xb8 (184) bytes
struct _POP_FX_PLUGIN {
  struct _LIST_ENTRY Link;  // offset: 0x0 (0)
  ULONG Version;            // offset: 0x10 (16)
  ULONGLONG Flags;          // offset: 0x18 (24)
  struct _KQUEUE WorkQueue; // offset: 0x20 (32)
  UCHAR(*AcceptDeviceNotification)
  (ULONG arg1, VOID *arg2); // offset: 0x60 (96)
  UCHAR(*AcceptProcessorNotification)
  (struct PEPHANDLE__ *arg1, ULONG arg2, VOID *arg3);      // offset: 0x68 (104)
  UCHAR (*AcceptAcpiNotification)(ULONG arg1, VOID *arg2); // offset: 0x70 (112)
  ULONG WorkOrderCount;                                    // offset: 0x78 (120)
  struct _POP_FX_WORK_ORDER WorkOrders[1];                 // offset: 0x80 (128)
};

// 0x278 (632) bytes
struct _POP_FX_DEVICE {
  struct _LIST_ENTRY Link;                       // offset: 0x0 (0)
  struct _IRP *Irp;                              // offset: 0x10 (16)
  struct _POP_IRP_DATA *IrpData;                 // offset: 0x18 (24)
  union _POP_FX_DEVICE_STATUS volatile Status;   // offset: 0x20 (32)
  volatile LONG PowerReqCall;                    // offset: 0x24 (36)
  volatile LONG PowerNotReqCall;                 // offset: 0x28 (40)
  struct _DEVICE_NODE *DevNode;                  // offset: 0x30 (48)
  struct PEPHANDLE__ *DpmContext;                // offset: 0x38 (56)
  struct _POP_FX_PLUGIN *Plugin;                 // offset: 0x40 (64)
  struct PEPHANDLE__ *PluginHandle;              // offset: 0x48 (72)
  struct _POP_FX_PLUGIN *AcpiPlugin;             // offset: 0x50 (80)
  struct PEPHANDLE__ *AcpiPluginHandle;          // offset: 0x58 (88)
  struct _DEVICE_OBJECT *DeviceObject;           // offset: 0x60 (96)
  struct _DEVICE_OBJECT *TargetDevice;           // offset: 0x68 (104)
  struct _POP_FX_DRIVER_CALLBACKS Callbacks;     // offset: 0x70 (112)
  VOID *DriverContext;                           // offset: 0xa8 (168)
  struct _LIST_ENTRY AcpiLink;                   // offset: 0xb0 (176)
  struct _UNICODE_STRING DeviceId;               // offset: 0xc0 (192)
  struct _IO_REMOVE_LOCK RemoveLock;             // offset: 0xd0 (208)
  struct _IO_REMOVE_LOCK AcpiRemoveLock;         // offset: 0xf0 (240)
  struct _POP_FX_WORK_ORDER WorkOrder;           // offset: 0x110 (272)
  ULONGLONG IdleLock;                            // offset: 0x148 (328)
  struct _KTIMER IdleTimer;                      // offset: 0x150 (336)
  struct _KDPC IdleDpc;                          // offset: 0x190 (400)
  ULONGLONG IdleTimeout;                         // offset: 0x1d0 (464)
  ULONGLONG IdleStamp;                           // offset: 0x1d8 (472)
  struct _DEVICE_OBJECT *NextIrpDeviceObject[2]; // offset: 0x1e0 (480)
  union _POWER_STATE NextIrpPowerState[2];       // offset: 0x1f0 (496)
  VOID(*NextIrpCallerCompletion[2])
  (struct _DEVICE_OBJECT *arg1, UCHAR arg2, union _POWER_STATE arg3, VOID *arg4,
   struct _IO_STATUS_BLOCK *arg5); // offset: 0x1f8 (504)
  VOID *NextIrpCallerContext[2];   // offset: 0x208 (520)
  struct _KEVENT IrpCompleteEvent; // offset: 0x218 (536)
  UCHAR(*PowerOnDumpDeviceCallback)
  (struct _PEP_CRASHDUMP_INFORMATION *arg1); // offset: 0x230 (560)
  struct _POP_FX_ACCOUNTING Accounting;      // offset: 0x238 (568)
  volatile ULONG Flags;                      // offset: 0x268 (616)
  ULONG ComponentCount;                      // offset: 0x26c (620)
  struct _POP_FX_COMPONENT **Components;     // offset: 0x270 (624)
};

// 0x100 (256) bytes
struct _POP_FX_COMPONENT {
  struct _GUID Id;                              // offset: 0x0 (0)
  ULONG Index;                                  // offset: 0x10 (16)
  struct _POP_FX_WORK_ORDER WorkOrder;          // offset: 0x18 (24)
  struct _POP_FX_DEVICE *Device;                // offset: 0x50 (80)
  union _POP_FX_COMPONENT_FLAGS volatile Flags; // offset: 0x58 (88)
  volatile LONG Resident;                       // offset: 0x60 (96)
  struct _KEVENT ActiveEvent;                   // offset: 0x68 (104)
  ULONGLONG IdleLock;                           // offset: 0x80 (128)
  volatile LONG IdleConditionComplete;          // offset: 0x88 (136)
  volatile LONG IdleStateComplete;              // offset: 0x8c (140)
  ULONGLONG IdleStamp;                          // offset: 0x90 (144)
  volatile ULONG CurrentIdleState;              // offset: 0x98 (152)
  ULONG IdleStateCount;                         // offset: 0x9c (156)
  struct _POP_FX_IDLE_STATE *IdleStates;        // offset: 0xa0 (160)
  ULONG DeepestWakeableIdleState;               // offset: 0xa8 (168)
  ULONG ProviderCount;                          // offset: 0xac (172)
  struct _POP_FX_PROVIDER *Providers;           // offset: 0xb0 (176)
  ULONG IdleProviderCount;                      // offset: 0xb8 (184)
  ULONG DependentCount;                         // offset: 0xbc (188)
  struct _POP_FX_DEPENDENT *Dependents;         // offset: 0xc0 (192)
  struct _POP_FX_ACCOUNTING Accounting;         // offset: 0xc8 (200)
  struct _POP_FX_PERF_INFO *Performance;        // offset: 0xf8 (248)
};

// 0xa0 (160) bytes
struct _POP_FX_PERF_INFO {
  struct _POP_FX_COMPONENT *Component; // offset: 0x0 (0)
  struct _KEVENT CompletedEvent;       // offset: 0x8 (8)
  VOID(*ComponentPerfState)
  (VOID *arg1, ULONG arg2, UCHAR arg3, VOID *arg4); // offset: 0x20 (32)
  union _POP_FX_PERF_FLAGS volatile Flags;          // offset: 0x28 (40)
  struct _PO_FX_PERF_STATE_CHANGE *LastChange;      // offset: 0x30 (48)
  ULONG LastChangeCount;                            // offset: 0x38 (56)
  ULONGLONG LastChangeStamp;                        // offset: 0x40 (64)
  UCHAR LastChangeNominal;                          // offset: 0x48 (72)
  UCHAR PepRegistered;                              // offset: 0x49 (73)
  UCHAR QueryOnIdleStates;                          // offset: 0x4a (74)
  VOID *volatile RequestDriverContext;              // offset: 0x50 (80)
  struct _POP_FX_WORK_ORDER WorkOrder;              // offset: 0x58 (88)
  ULONG SetsCount;                                  // offset: 0x90 (144)
  struct _POP_FX_PERF_SET *Sets;                    // offset: 0x98 (152)
};

// 0xf8 (248) bytes
struct _POP_IRP_DATA {
  struct _LIST_ENTRY Link;               // offset: 0x0 (0)
  struct _IRP *Irp;                      // offset: 0x10 (16)
  struct _DEVICE_OBJECT *Pdo;            // offset: 0x18 (24)
  struct _DEVICE_OBJECT *TargetDevice;   // offset: 0x20 (32)
  struct _DEVICE_OBJECT *CurrentDevice;  // offset: 0x28 (40)
  ULONGLONG WatchdogStart;               // offset: 0x30 (48)
  struct _KTIMER WatchdogTimer;          // offset: 0x38 (56)
  struct _KDPC WatchdogDpc;              // offset: 0x78 (120)
  UCHAR MinorFunction;                   // offset: 0xb8 (184)
  enum _POWER_STATE_TYPE PowerStateType; // offset: 0xbc (188)
  union _POWER_STATE PowerState;         // offset: 0xc0 (192)
  UCHAR WatchdogEnabled;                 // offset: 0xc4 (196)
  struct _POP_FX_DEVICE *FxDevice;       // offset: 0xc8 (200)
  UCHAR SystemTransition;                // offset: 0xd0 (208)
  UCHAR NotifyPEP;                       // offset: 0xd1 (209)
  union {
    struct {
      VOID(*CallerCompletion)
      (struct _DEVICE_OBJECT *arg1, UCHAR arg2, union _POWER_STATE arg3,
       VOID *arg4, struct _IO_STATUS_BLOCK *arg5); // offset: 0x0 (0)
      VOID *CallerContext;                         // offset: 0x8 (8)
      struct _DEVICE_OBJECT *CallerDevice;         // offset: 0x10 (16)
      UCHAR SystemWake;                            // offset: 0x18 (24)
    } Device;                                      // offset: 0xd8 (216)
    struct {
      struct _PO_DEVICE_NOTIFY *NotifyDevice; // offset: 0x0 (0)
      UCHAR FxDeviceActivated;                // offset: 0x8 (8)
    } System;                                 // offset: 0xd8 (216)
  };
};

// 0x2c8 (712) bytes
struct _DEVICE_NODE {
  struct _DEVICE_NODE *Sibling;                     // offset: 0x0 (0)
  struct _DEVICE_NODE *Child;                       // offset: 0x8 (8)
  struct _DEVICE_NODE *Parent;                      // offset: 0x10 (16)
  struct _DEVICE_NODE *LastChild;                   // offset: 0x18 (24)
  struct _DEVICE_OBJECT *PhysicalDeviceObject;      // offset: 0x20 (32)
  struct _UNICODE_STRING InstancePath;              // offset: 0x28 (40)
  struct _UNICODE_STRING ServiceName;               // offset: 0x38 (56)
  struct _IRP *PendingIrp;                          // offset: 0x48 (72)
  struct _POP_FX_DEVICE *FxDevice;                  // offset: 0x50 (80)
  volatile LONG FxDeviceLock;                       // offset: 0x58 (88)
  struct _KEVENT FxRemoveEvent;                     // offset: 0x60 (96)
  volatile LONG FxActivationCount;                  // offset: 0x78 (120)
  volatile LONG FxSleepCount;                       // offset: 0x7c (124)
  struct _POP_FX_PLUGIN *Plugin;                    // offset: 0x80 (128)
  ULONG Level;                                      // offset: 0x88 (136)
  union _POWER_STATE CurrentPowerState;             // offset: 0x8c (140)
  struct _PO_DEVICE_NOTIFY Notify;                  // offset: 0x90 (144)
  struct _PO_IRP_MANAGER PoIrpManager;              // offset: 0xf8 (248)
  struct _UNICODE_STRING UniqueId;                  // offset: 0x118 (280)
  ULONG PowerFlags;                                 // offset: 0x128 (296)
  enum _PNP_DEVNODE_STATE State;                    // offset: 0x12c (300)
  enum _PNP_DEVNODE_STATE PreviousState;            // offset: 0x130 (304)
  enum _PNP_DEVNODE_STATE StateHistory[20];         // offset: 0x134 (308)
  ULONG StateHistoryEntry;                          // offset: 0x184 (388)
  LONG CompletionStatus;                            // offset: 0x188 (392)
  ULONG Flags;                                      // offset: 0x18c (396)
  ULONG UserFlags;                                  // offset: 0x190 (400)
  ULONG Problem;                                    // offset: 0x194 (404)
  LONG ProblemStatus;                               // offset: 0x198 (408)
  struct _CM_RESOURCE_LIST *ResourceList;           // offset: 0x1a0 (416)
  struct _CM_RESOURCE_LIST *ResourceListTranslated; // offset: 0x1a8 (424)
  struct _DEVICE_OBJECT *DuplicatePDO;              // offset: 0x1b0 (432)
  struct _IO_RESOURCE_REQUIREMENTS_LIST
      *ResourceRequirements;               // offset: 0x1b8 (440)
  enum _INTERFACE_TYPE InterfaceType;      // offset: 0x1c0 (448)
  ULONG BusNumber;                         // offset: 0x1c4 (452)
  enum _INTERFACE_TYPE ChildInterfaceType; // offset: 0x1c8 (456)
  ULONG ChildBusNumber;                    // offset: 0x1cc (460)
  USHORT ChildBusTypeIndex;                // offset: 0x1d0 (464)
  UCHAR RemovalPolicy;                     // offset: 0x1d2 (466)
  UCHAR HardwareRemovalPolicy;             // offset: 0x1d3 (467)
  struct _LIST_ENTRY TargetDeviceNotify;   // offset: 0x1d8 (472)
  struct _LIST_ENTRY DeviceArbiterList;    // offset: 0x1e8 (488)
  struct _LIST_ENTRY DeviceTranslatorList; // offset: 0x1f8 (504)
  USHORT NoTranslatorMask;                 // offset: 0x208 (520)
  USHORT QueryTranslatorMask;              // offset: 0x20a (522)
  USHORT NoArbiterMask;                    // offset: 0x20c (524)
  USHORT QueryArbiterMask;                 // offset: 0x20e (526)
  union {
    struct _DEVICE_NODE *LegacyDeviceNode;            // offset: 0x210 (528)
    struct _DEVICE_RELATIONS *PendingDeviceRelations; // offset: 0x210 (528)
    VOID *Information;                                // offset: 0x210 (528)

  } OverUsed1; // offset: 0x210 (528)
  union {
    struct _DEVICE_NODE *NextResourceDeviceNode; // offset: 0x218 (536)

  } OverUsed2;                                       // offset: 0x218 (536)
  struct _CM_RESOURCE_LIST *BootResources;           // offset: 0x220 (544)
  struct _CM_RESOURCE_LIST *BootResourcesTranslated; // offset: 0x228 (552)
  ULONG CapabilityFlags;                             // offset: 0x230 (560)
  struct {
    enum PROFILE_STATUS DockStatus;           // offset: 0x0 (0)
    struct _LIST_ENTRY ListEntry;             // offset: 0x8 (8)
    USHORT *SerialNumber;                     // offset: 0x18 (24)
  } DockInfo;                                 // offset: 0x238 (568)
  ULONG DisableableDepends;                   // offset: 0x258 (600)
  struct _LIST_ENTRY PendedSetInterfaceState; // offset: 0x260 (608)
  struct _LIST_ENTRY LegacyBusListEntry;      // offset: 0x270 (624)
  ULONG DriverUnloadRetryCount;               // offset: 0x280 (640)
  struct _DEVICE_NODE *PreviousParent;        // offset: 0x288 (648)
  LONG DeletedChildren;                       // offset: 0x290 (656)
  ULONG NumaNodeIndex;                        // offset: 0x294 (660)
  struct _GUID ContainerID;                   // offset: 0x298 (664)
  UCHAR OverrideFlags;                        // offset: 0x2a8 (680)
  ULONG DeviceIdsHash;                        // offset: 0x2ac (684)
  UCHAR RequiresUnloadedDriver;               // offset: 0x2b0 (688)
  struct _PENDING_RELATIONS_LIST_ENTRY
      *PendingEjectRelations; // offset: 0x2b8 (696)
  ULONG StateFlags;           // offset: 0x2c0 (704)
};

// 0x180 (384) bytes
struct _MI_PARTITION_SEGMENTS {
  struct _KEVENT DeleteSubsectionCleanup; // offset: 0x0 (0)
  struct _KEVENT UnusedSegmentCleanup;    // offset: 0x18 (24)
  ULONGLONG SubsectionDeletePtes;         // offset: 0x30 (48)
  struct _MMDEREFERENCE_SEGMENT_HEADER
      DereferenceSegmentHeader;                    // offset: 0x38 (56)
  struct _LIST_ENTRY DeleteOnCloseList;            // offset: 0x68 (104)
  struct _KTIMER DeleteOnCloseTimer;               // offset: 0x78 (120)
  UCHAR DeleteOnCloseTimerActive;                  // offset: 0xb8 (184)
  ULONG DeleteOnCloseCount;                        // offset: 0xbc (188)
  struct _LIST_ENTRY UnusedSegmentList;            // offset: 0xc0 (192)
  struct _LIST_ENTRY UnusedSubsectionList;         // offset: 0xd0 (208)
  struct _LIST_ENTRY DeleteSubsectionList;         // offset: 0xe0 (224)
  struct _KEVENT ControlAreaDeleteEvent;           // offset: 0xf0 (240)
  struct _SINGLE_LIST_ENTRY ControlAreaDeleteList; // offset: 0x108 (264)
  volatile LONG SegmentListLock;                   // offset: 0x140 (320)
};

// 0x540 (1344) bytes
struct _ENODE {
  struct _KNODE Ncb;                                 // offset: 0x0 (0)
  struct _EX_WORK_QUEUE *volatile ExWorkQueues[8];   // offset: 0x100 (256)
  struct _EX_WORK_QUEUE ExWorkQueue;                 // offset: 0x140 (320)
  struct _KEVENT ExpThreadSetManagerEvent;           // offset: 0x410 (1040)
  struct _KTIMER ExpDeadlockTimer;                   // offset: 0x428 (1064)
  struct _KEVENT ExpThreadReaperEvent;               // offset: 0x468 (1128)
  struct _KWAIT_BLOCK WaitBlocks[3];                 // offset: 0x480 (1152)
  struct _ETHREAD *ExpWorkerThreadBalanceManagerPtr; // offset: 0x510 (1296)
  ULONG ExpWorkerSeed;                               // offset: 0x518 (1304)
  union {
    struct {
      volatile ULONG ExWorkerFullInit : 1;   // offset: 0x51c (1308)
      volatile ULONG ExWorkerStructInit : 1; // offset: 0x51c (1308)
    };
    volatile ULONG ExWorkerFlags; // offset: 0x51c (1308)
  };
};

// 0x2200 (8704) bytes
struct _KTIMER_TABLE {
  struct _KTIMER *TimerExpiry[64];              // offset: 0x0 (0)
  struct _KTIMER_TABLE_ENTRY TimerEntries[256]; // offset: 0x200 (512)
};

// 0x7a0 (1952) bytes
struct _PEB {
  UCHAR InheritedAddressSpace;    // offset: 0x0 (0)
  UCHAR ReadImageFileExecOptions; // offset: 0x1 (1)
  UCHAR BeingDebugged;            // offset: 0x2 (2)
  union {
    UCHAR BitField; // offset: 0x3 (3)
    struct {
      UCHAR ImageUsesLargePages : 1;          // offset: 0x3 (3)
      UCHAR IsProtectedProcess : 1;           // offset: 0x3 (3)
      UCHAR IsImageDynamicallyRelocated : 1;  // offset: 0x3 (3)
      UCHAR SkipPatchingUser32Forwarders : 1; // offset: 0x3 (3)
      UCHAR IsPackagedProcess : 1;            // offset: 0x3 (3)
      UCHAR IsAppContainer : 1;               // offset: 0x3 (3)
      UCHAR IsProtectedProcessLight : 1;      // offset: 0x3 (3)
      UCHAR SpareBits : 1;                    // offset: 0x3 (3)
    };
  };
  UCHAR Padding0[4];                                      // offset: 0x4 (4)
  VOID *Mutant;                                           // offset: 0x8 (8)
  VOID *ImageBaseAddress;                                 // offset: 0x10 (16)
  struct _PEB_LDR_DATA *Ldr;                              // offset: 0x18 (24)
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // offset: 0x20 (32)
  VOID *SubSystemData;                                    // offset: 0x28 (40)
  VOID *ProcessHeap;                                      // offset: 0x30 (48)
  struct _RTL_CRITICAL_SECTION *FastPebLock;              // offset: 0x38 (56)
  VOID *AtlThunkSListPtr;                                 // offset: 0x40 (64)
  VOID *IFEOKey;                                          // offset: 0x48 (72)
  union {
    ULONG CrossProcessFlags; // offset: 0x50 (80)
    struct {
      ULONG ProcessInJob : 1;        // offset: 0x50 (80)
      ULONG ProcessInitializing : 1; // offset: 0x50 (80)
      ULONG ProcessUsingVEH : 1;     // offset: 0x50 (80)
      ULONG ProcessUsingVCH : 1;     // offset: 0x50 (80)
      ULONG ProcessUsingFTH : 1;     // offset: 0x50 (80)
      ULONG ReservedBits0 : 27;      // offset: 0x50 (80)
    };
  };
  UCHAR Padding1[4]; // offset: 0x54 (84)
  union {
    VOID *KernelCallbackTable; // offset: 0x58 (88)
    VOID *UserSharedInfoPtr;   // offset: 0x58 (88)
  };
  ULONG SystemReserved[1];                                // offset: 0x60 (96)
  ULONG AtlThunkSListPtr32;                               // offset: 0x64 (100)
  VOID *ApiSetMap;                                        // offset: 0x68 (104)
  ULONG TlsExpansionCounter;                              // offset: 0x70 (112)
  UCHAR Padding2[4];                                      // offset: 0x74 (116)
  VOID *TlsBitmap;                                        // offset: 0x78 (120)
  ULONG TlsBitmapBits[2];                                 // offset: 0x80 (128)
  VOID *ReadOnlySharedMemoryBase;                         // offset: 0x88 (136)
  VOID *SparePvoid0;                                      // offset: 0x90 (144)
  VOID **ReadOnlyStaticServerData;                        // offset: 0x98 (152)
  VOID *AnsiCodePageData;                                 // offset: 0xa0 (160)
  VOID *OemCodePageData;                                  // offset: 0xa8 (168)
  VOID *UnicodeCaseTableData;                             // offset: 0xb0 (176)
  ULONG NumberOfProcessors;                               // offset: 0xb8 (184)
  ULONG NtGlobalFlag;                                     // offset: 0xbc (188)
  union _LARGE_INTEGER CriticalSectionTimeout;            // offset: 0xc0 (192)
  ULONGLONG HeapSegmentReserve;                           // offset: 0xc8 (200)
  ULONGLONG HeapSegmentCommit;                            // offset: 0xd0 (208)
  ULONGLONG HeapDeCommitTotalFreeThreshold;               // offset: 0xd8 (216)
  ULONGLONG HeapDeCommitFreeBlockThreshold;               // offset: 0xe0 (224)
  ULONG NumberOfHeaps;                                    // offset: 0xe8 (232)
  ULONG MaximumNumberOfHeaps;                             // offset: 0xec (236)
  VOID **ProcessHeaps;                                    // offset: 0xf0 (240)
  VOID *GdiSharedHandleTable;                             // offset: 0xf8 (248)
  VOID *ProcessStarterHelper;                             // offset: 0x100 (256)
  ULONG GdiDCAttributeList;                               // offset: 0x108 (264)
  UCHAR Padding3[4];                                      // offset: 0x10c (268)
  struct _RTL_CRITICAL_SECTION *LoaderLock;               // offset: 0x110 (272)
  ULONG OSMajorVersion;                                   // offset: 0x118 (280)
  ULONG OSMinorVersion;                                   // offset: 0x11c (284)
  USHORT OSBuildNumber;                                   // offset: 0x120 (288)
  USHORT OSCSDVersion;                                    // offset: 0x122 (290)
  ULONG OSPlatformId;                                     // offset: 0x124 (292)
  ULONG ImageSubsystem;                                   // offset: 0x128 (296)
  ULONG ImageSubsystemMajorVersion;                       // offset: 0x12c (300)
  ULONG ImageSubsystemMinorVersion;                       // offset: 0x130 (304)
  UCHAR Padding4[4];                                      // offset: 0x134 (308)
  ULONGLONG ActiveProcessAffinityMask;                    // offset: 0x138 (312)
  ULONG GdiHandleBuffer[60];                              // offset: 0x140 (320)
  VOID (*PostProcessInitRoutine)();                       // offset: 0x230 (560)
  VOID *TlsExpansionBitmap;                               // offset: 0x238 (568)
  ULONG TlsExpansionBitmapBits[32];                       // offset: 0x240 (576)
  ULONG SessionId;                                        // offset: 0x2c0 (704)
  UCHAR Padding5[4];                                      // offset: 0x2c4 (708)
  union _ULARGE_INTEGER AppCompatFlags;                   // offset: 0x2c8 (712)
  union _ULARGE_INTEGER AppCompatFlagsUser;               // offset: 0x2d0 (720)
  VOID *pShimData;                                        // offset: 0x2d8 (728)
  VOID *AppCompatInfo;                                    // offset: 0x2e0 (736)
  struct _UNICODE_STRING CSDVersion;                      // offset: 0x2e8 (744)
  struct _ACTIVATION_CONTEXT_DATA *ActivationContextData; // offset: 0x2f8 (760)
  struct _ASSEMBLY_STORAGE_MAP
      *ProcessAssemblyStorageMap; // offset: 0x300 (768)
  struct _ACTIVATION_CONTEXT_DATA
      *SystemDefaultActivationContextData;                // offset: 0x308 (776)
  struct _ASSEMBLY_STORAGE_MAP *SystemAssemblyStorageMap; // offset: 0x310 (784)
  ULONGLONG MinimumStackCommit;                           // offset: 0x318 (792)
  struct _FLS_CALLBACK_INFO *FlsCallback;                 // offset: 0x320 (800)
  struct _LIST_ENTRY FlsListHead;                         // offset: 0x328 (808)
  VOID *FlsBitmap;                                        // offset: 0x338 (824)
  ULONG FlsBitmapBits[4];                                 // offset: 0x340 (832)
  ULONG FlsHighIndex;                                     // offset: 0x350 (848)
  VOID *WerRegistrationData;                              // offset: 0x358 (856)
  VOID *WerShipAssertPtr;                                 // offset: 0x360 (864)
  VOID *pUnused;                                          // offset: 0x368 (872)
  VOID *pImageHeaderHash;                                 // offset: 0x370 (880)
  union {
    ULONG TracingFlags; // offset: 0x378 (888)
    struct {
      ULONG HeapTracingEnabled : 1;      // offset: 0x378 (888)
      ULONG CritSecTracingEnabled : 1;   // offset: 0x378 (888)
      ULONG LibLoaderTracingEnabled : 1; // offset: 0x378 (888)
      ULONG SpareTracingBits : 29;       // offset: 0x378 (888)
    };
  };
  UCHAR Padding6[4];                           // offset: 0x37c (892)
  ULONGLONG CsrServerReadOnlySharedMemoryBase; // offset: 0x380 (896)
  ULONGLONG TppWorkerpListLock;                // offset: 0x388 (904)
  struct _LIST_ENTRY TppWorkerpList;           // offset: 0x390 (912)
  VOID *WaitOnAddressHashTable[128];           // offset: 0x3a0 (928)
};

// 0x1838 (6200) bytes
struct _TEB {
  struct _NT_TIB NtTib;                         // offset: 0x0 (0)
  VOID *EnvironmentPointer;                     // offset: 0x38 (56)
  struct _CLIENT_ID ClientId;                   // offset: 0x40 (64)
  VOID *ActiveRpcHandle;                        // offset: 0x50 (80)
  VOID *ThreadLocalStoragePointer;              // offset: 0x58 (88)
  struct _PEB *ProcessEnvironmentBlock;         // offset: 0x60 (96)
  ULONG LastErrorValue;                         // offset: 0x68 (104)
  ULONG CountOfOwnedCriticalSections;           // offset: 0x6c (108)
  VOID *CsrClientThread;                        // offset: 0x70 (112)
  VOID *Win32ThreadInfo;                        // offset: 0x78 (120)
  ULONG User32Reserved[26];                     // offset: 0x80 (128)
  ULONG UserReserved[5];                        // offset: 0xe8 (232)
  VOID *WOW32Reserved;                          // offset: 0x100 (256)
  ULONG CurrentLocale;                          // offset: 0x108 (264)
  ULONG FpSoftwareStatusRegister;               // offset: 0x10c (268)
  VOID *ReservedForDebuggerInstrumentation[16]; // offset: 0x110 (272)
  VOID *SystemReserved1[38];                    // offset: 0x190 (400)
  LONG ExceptionCode;                           // offset: 0x2c0 (704)
  UCHAR Padding0[4];                            // offset: 0x2c4 (708)
  struct _ACTIVATION_CONTEXT_STACK
      *ActivationContextStackPointer;          // offset: 0x2c8 (712)
  ULONGLONG InstrumentationCallbackSp;         // offset: 0x2d0 (720)
  ULONGLONG InstrumentationCallbackPreviousPc; // offset: 0x2d8 (728)
  ULONGLONG InstrumentationCallbackPreviousSp; // offset: 0x2e0 (736)
  ULONG TxFsContext;                           // offset: 0x2e8 (744)
  UCHAR InstrumentationCallbackDisabled;       // offset: 0x2ec (748)
  UCHAR Padding1[3];                           // offset: 0x2ed (749)
  struct _GDI_TEB_BATCH GdiTebBatch;           // offset: 0x2f0 (752)
  struct _CLIENT_ID RealClientId;              // offset: 0x7d8 (2008)
  VOID *GdiCachedProcessHandle;                // offset: 0x7e8 (2024)
  ULONG GdiClientPID;                          // offset: 0x7f0 (2032)
  ULONG GdiClientTID;                          // offset: 0x7f4 (2036)
  VOID *GdiThreadLocalInfo;                    // offset: 0x7f8 (2040)
  ULONGLONG Win32ClientInfo[62];               // offset: 0x800 (2048)
  VOID *glDispatchTable[233];                  // offset: 0x9f0 (2544)
  ULONGLONG glReserved1[29];                   // offset: 0x1138 (4408)
  VOID *glReserved2;                           // offset: 0x1220 (4640)
  VOID *glSectionInfo;                         // offset: 0x1228 (4648)
  VOID *glSection;                             // offset: 0x1230 (4656)
  VOID *glTable;                               // offset: 0x1238 (4664)
  VOID *glCurrentRC;                           // offset: 0x1240 (4672)
  VOID *glContext;                             // offset: 0x1248 (4680)
  ULONG LastStatusValue;                       // offset: 0x1250 (4688)
  UCHAR Padding2[4];                           // offset: 0x1254 (4692)
  struct _UNICODE_STRING StaticUnicodeString;  // offset: 0x1258 (4696)
  WCHAR StaticUnicodeBuffer[261];              // offset: 0x1268 (4712)
  UCHAR Padding3[6];                           // offset: 0x1472 (5234)
  VOID *DeallocationStack;                     // offset: 0x1478 (5240)
  VOID *TlsSlots[64];                          // offset: 0x1480 (5248)
  struct _LIST_ENTRY TlsLinks;                 // offset: 0x1680 (5760)
  VOID *Vdm;                                   // offset: 0x1690 (5776)
  VOID *ReservedForNtRpc;                      // offset: 0x1698 (5784)
  VOID *DbgSsReserved[2];                      // offset: 0x16a0 (5792)
  ULONG HardErrorMode;                         // offset: 0x16b0 (5808)
  UCHAR Padding4[4];                           // offset: 0x16b4 (5812)
  VOID *Instrumentation[11];                   // offset: 0x16b8 (5816)
  struct _GUID ActivityId;                     // offset: 0x1710 (5904)
  VOID *SubProcessTag;                         // offset: 0x1720 (5920)
  VOID *PerflibData;                           // offset: 0x1728 (5928)
  VOID *EtwTraceData;                          // offset: 0x1730 (5936)
  VOID *WinSockData;                           // offset: 0x1738 (5944)
  ULONG GdiBatchCount;                         // offset: 0x1740 (5952)
  union {
    struct _PROCESSOR_NUMBER CurrentIdealProcessor; // offset: 0x1744 (5956)
    ULONG IdealProcessorValue;                      // offset: 0x1744 (5956)
    struct {
      UCHAR ReservedPad0;   // offset: 0x1744 (5956)
      UCHAR ReservedPad1;   // offset: 0x1745 (5957)
      UCHAR ReservedPad2;   // offset: 0x1746 (5958)
      UCHAR IdealProcessor; // offset: 0x1747 (5959)
    };
  };
  ULONG GuaranteedStackBytes;            // offset: 0x1748 (5960)
  UCHAR Padding5[4];                     // offset: 0x174c (5964)
  VOID *ReservedForPerf;                 // offset: 0x1750 (5968)
  VOID *ReservedForOle;                  // offset: 0x1758 (5976)
  ULONG WaitingOnLoaderLock;             // offset: 0x1760 (5984)
  UCHAR Padding6[4];                     // offset: 0x1764 (5988)
  VOID *SavedPriorityState;              // offset: 0x1768 (5992)
  ULONGLONG ReservedForCodeCoverage;     // offset: 0x1770 (6000)
  VOID *ThreadPoolData;                  // offset: 0x1778 (6008)
  VOID **TlsExpansionSlots;              // offset: 0x1780 (6016)
  VOID *DeallocationBStore;              // offset: 0x1788 (6024)
  VOID *BStoreLimit;                     // offset: 0x1790 (6032)
  ULONG MuiGeneration;                   // offset: 0x1798 (6040)
  ULONG IsImpersonating;                 // offset: 0x179c (6044)
  VOID *NlsCache;                        // offset: 0x17a0 (6048)
  VOID *pShimData;                       // offset: 0x17a8 (6056)
  USHORT HeapVirtualAffinity;            // offset: 0x17b0 (6064)
  USHORT LowFragHeapDataSlot;            // offset: 0x17b2 (6066)
  UCHAR Padding7[4];                     // offset: 0x17b4 (6068)
  VOID *CurrentTransactionHandle;        // offset: 0x17b8 (6072)
  struct _TEB_ACTIVE_FRAME *ActiveFrame; // offset: 0x17c0 (6080)
  VOID *FlsData;                         // offset: 0x17c8 (6088)
  VOID *PreferredLanguages;              // offset: 0x17d0 (6096)
  VOID *UserPrefLanguages;               // offset: 0x17d8 (6104)
  VOID *MergedPrefLanguages;             // offset: 0x17e0 (6112)
  ULONG MuiImpersonation;                // offset: 0x17e8 (6120)
  union {
    volatile USHORT CrossTebFlags; // offset: 0x17ec (6124)
    USHORT SpareCrossTebBits : 16; // offset: 0x17ec (6124)
  };
  union {
    USHORT SameTebFlags; // offset: 0x17ee (6126)
    struct {
      USHORT SafeThunkCall : 1;        // offset: 0x17ee (6126)
      USHORT InDebugPrint : 1;         // offset: 0x17ee (6126)
      USHORT HasFiberData : 1;         // offset: 0x17ee (6126)
      USHORT SkipThreadAttach : 1;     // offset: 0x17ee (6126)
      USHORT WerInShipAssertCode : 1;  // offset: 0x17ee (6126)
      USHORT RanProcessInit : 1;       // offset: 0x17ee (6126)
      USHORT ClonedThread : 1;         // offset: 0x17ee (6126)
      USHORT SuppressDebugMsg : 1;     // offset: 0x17ee (6126)
      USHORT DisableUserStackWalk : 1; // offset: 0x17ee (6126)
      USHORT RtlExceptionAttached : 1; // offset: 0x17ee (6126)
      USHORT InitialThread : 1;        // offset: 0x17ee (6126)
      USHORT SessionAware : 1;         // offset: 0x17ee (6126)
      USHORT LoadOwner : 1;            // offset: 0x17ee (6126)
      USHORT LoaderWorker : 1;         // offset: 0x17ee (6126)
      USHORT SpareSameTebBits : 2;     // offset: 0x17ee (6126)
    };
  };
  VOID *TxnScopeEnterCallback;       // offset: 0x17f0 (6128)
  VOID *TxnScopeExitCallback;        // offset: 0x17f8 (6136)
  VOID *TxnScopeContext;             // offset: 0x1800 (6144)
  ULONG LockCount;                   // offset: 0x1808 (6152)
  LONG WowTebOffset;                 // offset: 0x180c (6156)
  VOID *ResourceRetValue;            // offset: 0x1810 (6160)
  VOID *ReservedForWdf;              // offset: 0x1818 (6168)
  ULONGLONG ReservedForCrt;          // offset: 0x1820 (6176)
  struct _GUID EffectiveContainerId; // offset: 0x1828 (6184)
};

// 0x330 (816) bytes
struct _XSTATE_CONFIGURATION {
  ULONGLONG EnabledFeatures;           // offset: 0x0 (0)
  ULONGLONG EnabledVolatileFeatures;   // offset: 0x8 (8)
  ULONG Size;                          // offset: 0x10 (16)
  ULONG OptimizedSave : 1;             // offset: 0x14 (20)
  ULONG CompactionEnabled : 1;         // offset: 0x14 (20)
  struct _XSTATE_FEATURE Features[64]; // offset: 0x18 (24)
  ULONGLONG EnabledSupervisorFeatures; // offset: 0x218 (536)
  ULONGLONG AlignedFeatures;           // offset: 0x220 (544)
  ULONG AllFeatureSize;                // offset: 0x228 (552)
  ULONG AllFeatures[64];               // offset: 0x22c (556)
};

// 0x80 (128) bytes
struct _POP_PER_PROCESSOR_CONTEXT {
  UCHAR *UncompressedData;              // offset: 0x0 (0)
  VOID *MappingVa;                      // offset: 0x8 (8)
  VOID *XpressEncodeWorkspace;          // offset: 0x10 (16)
  UCHAR *CompressedDataBuffer;          // offset: 0x18 (24)
  ULONGLONG CopyTicks;                  // offset: 0x20 (32)
  ULONGLONG CompressTicks;              // offset: 0x28 (40)
  ULONGLONG BytesCopied;                // offset: 0x30 (48)
  ULONGLONG PagesProcessed;             // offset: 0x38 (56)
  ULONGLONG DecompressTicks;            // offset: 0x40 (64)
  ULONGLONG ResumeCopyTicks;            // offset: 0x48 (72)
  ULONGLONG SharedBufferTicks;          // offset: 0x50 (80)
  ULONGLONG DecompressTicksByMethod[2]; // offset: 0x58 (88)
  ULONGLONG DecompressSizeByMethod[2];  // offset: 0x68 (104)
  ULONG CompressCount;                  // offset: 0x78 (120)
  ULONG HuffCompressCount;              // offset: 0x7c (124)
};

// 0x1d0 (464) bytes
struct _POP_HIBER_CONTEXT {
  UCHAR Reset;                               // offset: 0x0 (0)
  UCHAR HiberFlags;                          // offset: 0x1 (1)
  UCHAR WroteHiberFile;                      // offset: 0x2 (2)
  UCHAR VerifyKernelPhaseOnResume;           // offset: 0x3 (3)
  UCHAR KernelPhaseVerificationActive;       // offset: 0x4 (4)
  volatile UCHAR InitializationFinished;     // offset: 0x5 (5)
  volatile LONG NextTableLockHeld;           // offset: 0x8 (8)
  volatile LONG BootPhaseFinishedBarrier;    // offset: 0xc (12)
  volatile LONG KernelResumeFinishedBarrier; // offset: 0x10 (16)
  volatile LONG HvCaptureReadyBarrier;       // offset: 0x14 (20)
  volatile LONG HvCaptureCompletedBarrier;   // offset: 0x18 (24)
  UCHAR MapFrozen;                           // offset: 0x1c (28)
  union {
    struct _RTL_BITMAP DiscardMap;     // offset: 0x20 (32)
    struct _RTL_BITMAP KernelPhaseMap; // offset: 0x20 (32)
  };
  struct _RTL_BITMAP BootPhaseMap;                     // offset: 0x30 (48)
  struct _LIST_ENTRY ClonedRanges;                     // offset: 0x40 (64)
  ULONG ClonedRangeCount;                              // offset: 0x50 (80)
  ULONGLONG ClonedPageCount;                           // offset: 0x58 (88)
  struct _RTL_BITMAP *CurrentMap;                      // offset: 0x60 (96)
  struct _LIST_ENTRY *NextCloneRange;                  // offset: 0x68 (104)
  ULONGLONG NextPreserve;                              // offset: 0x70 (112)
  struct _MDL *LoaderMdl;                              // offset: 0x78 (120)
  struct _MDL *AllocatedMdl;                           // offset: 0x80 (128)
  ULONGLONG PagesOut;                                  // offset: 0x88 (136)
  VOID *IoPages;                                       // offset: 0x90 (144)
  ULONG IoPagesCount;                                  // offset: 0x98 (152)
  VOID *CurrentMcb;                                    // offset: 0xa0 (160)
  struct _DUMP_STACK_CONTEXT *DumpStack;               // offset: 0xa8 (168)
  struct _KPROCESSOR_STATE *WakeState;                 // offset: 0xb0 (176)
  ULONG IoProgress;                                    // offset: 0xb8 (184)
  LONG Status;                                         // offset: 0xbc (188)
  ULONG GraphicsProc;                                  // offset: 0xc0 (192)
  struct PO_MEMORY_IMAGE *MemoryImage;                 // offset: 0xc8 (200)
  ULONG *PerformanceStats;                             // offset: 0xd0 (208)
  struct _MDL *BootLoaderLogMdl;                       // offset: 0xd8 (216)
  ULONG SiLogOffset;                                   // offset: 0xe0 (224)
  struct _MDL *FirmwareRuntimeInformationMdl;          // offset: 0xe8 (232)
  VOID *FirmwareRuntimeInformationVa;                  // offset: 0xf0 (240)
  VOID *ResumeContext;                                 // offset: 0xf8 (248)
  ULONG ResumeContextPages;                            // offset: 0x100 (256)
  ULONG SecurePages;                                   // offset: 0x104 (260)
  ULONG ProcessorCount;                                // offset: 0x108 (264)
  struct _POP_PER_PROCESSOR_CONTEXT *ProcessorContext; // offset: 0x110 (272)
  CHAR *ProdConsBuffer;                                // offset: 0x118 (280)
  ULONG ProdConsSize;                                  // offset: 0x120 (288)
  ULONG MaxDataPages;                                  // offset: 0x124 (292)
  VOID *ExtraBuffer;                                   // offset: 0x128 (296)
  ULONGLONG ExtraBufferSize;                           // offset: 0x130 (304)
  VOID *ExtraMapVa;                                    // offset: 0x138 (312)
  ULONGLONG BitlockerKeyPFN;                           // offset: 0x140 (320)
  struct _POP_IO_INFO IoInfo;                          // offset: 0x148 (328)
  USHORT *IoChecksums;                                 // offset: 0x1b8 (440)
  ULONGLONG IoChecksumsSize;                           // offset: 0x1c0 (448)
  ULONG HardwareConfigurationSignature;                // offset: 0x1c8 (456)
  UCHAR IumEnabled;                                    // offset: 0x1cc (460)
};

// 0x1a0 (416) bytes
struct _MI_SYSTEM_NODE_INFORMATION {
  union _SLIST_HEADER PagedPoolSListHead;              // offset: 0x0 (0)
  union _SLIST_HEADER NonPagedPoolSListHead[3];        // offset: 0x10 (16)
  union _SLIST_HEADER NonPagedPoolSListHeadNx[3];      // offset: 0x40 (64)
  struct _CACHED_KSTACK_LIST CachedKernelStacks[2];    // offset: 0x70 (112)
  ULONGLONG NonPagedBitMapMaximum;                     // offset: 0xb0 (176)
  struct _MI_DYNAMIC_BITMAP DynamicBitMapNonPagedPool; // offset: 0xb8 (184)
  ULONGLONG NonPagedPoolLowestPage;                    // offset: 0x108 (264)
  ULONGLONG NonPagedPoolHighestPage;                   // offset: 0x110 (272)
  ULONGLONG AllocatedNonPagedPool;                     // offset: 0x118 (280)
  ULONGLONG PartialLargePoolRegions;                   // offset: 0x120 (288)
  ULONGLONG PagesInPartialLargePoolRegions;            // offset: 0x128 (296)
  ULONGLONG CachedNonPagedPoolCount;                   // offset: 0x130 (304)
  ULONGLONG NonPagedPoolSpinLock;                      // offset: 0x138 (312)
  struct _MMPFN *CachedNonPagedPool;                   // offset: 0x140 (320)
  VOID *NonPagedPoolFirstVa;                           // offset: 0x148 (328)
  VOID *NonPagedPoolLastVa;                            // offset: 0x150 (336)
  struct _RTL_BITMAP_EX NonPagedBitMap[3];             // offset: 0x158 (344)
  ULONGLONG NonPagedHint[2];                           // offset: 0x188 (392)
};

// 0xa8 (168) bytes
struct _MI_HARDWARE_STATE {
  ULONG NodeMask;    // offset: 0x0 (0)
  USHORT *NodeGraph; // offset: 0x8 (8)
  struct _MI_SYSTEM_NODE_INFORMATION
      *SystemNodeInformation;                             // offset: 0x10 (16)
  ULONG NumaLastRangeIndex;                               // offset: 0x18 (24)
  struct _HAL_NODE_RANGE *NumaMemoryRanges;               // offset: 0x20 (32)
  UCHAR NumaTableCaptured;                                // offset: 0x28 (40)
  UCHAR NodeShift;                                        // offset: 0x29 (41)
  struct _HAL_CHANNEL_MEMORY_RANGES *ChannelMemoryRanges; // offset: 0x30 (48)
  UCHAR ChannelShift;                                     // offset: 0x38 (56)
  ULONG SecondLevelCacheSize;                             // offset: 0x3c (60)
  ULONG FirstLevelCacheSize;                              // offset: 0x40 (64)
  ULONG PhysicalAddressBits;                              // offset: 0x44 (68)
  UCHAR AllMainMemoryMustBeCached;                        // offset: 0x48 (72)
  ULONGLONG TotalPagesAllowed;                            // offset: 0x50 (80)
  ULONG SecondaryColorMask;                               // offset: 0x58 (88)
  ULONG SecondaryColors;                                  // offset: 0x5c (92)
  ULONG FlushTbForAttributeChange;                        // offset: 0x60 (96)
  ULONG FlushCacheForAttributeChange;                     // offset: 0x64 (100)
  ULONG FlushCacheForPageAttributeChange;                 // offset: 0x68 (104)
  ULONG CacheFlushPromoteThreshold;                       // offset: 0x6c (108)
  ULONGLONG FlushTbThreshold;                             // offset: 0x70 (112)
  struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];          // offset: 0x78 (120)
  ULONGLONG PrimaryPfns;                                  // offset: 0x98 (152)
  ULONGLONG HighestPossiblePhysicalPage;                  // offset: 0xa0 (160)
};

// 0x20 (32) bytes
struct _VI_VERIFIER_ISSUE {
  ULONGLONG IssueType;     // offset: 0x0 (0)
  VOID *Address;           // offset: 0x8 (8)
  ULONGLONG Parameters[2]; // offset: 0x10 (16)
};

// 0x88 (136) bytes
struct _KTIMER2 {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 (0)
  union {
    struct _RTL_BALANCED_NODE RbNodes[2]; // offset: 0x18 (24)
    struct _LIST_ENTRY ListEntry;         // offset: 0x18 (24)
  };
  ULONGLONG DueTime[2];                                // offset: 0x48 (72)
  LONGLONG Period;                                     // offset: 0x58 (88)
  VOID (*Callback)(struct _KTIMER2 *arg1, VOID *arg2); // offset: 0x60 (96)
  VOID *CallbackContext;                               // offset: 0x68 (104)
  VOID (*DisableCallback)(VOID *arg1);                 // offset: 0x70 (112)
  VOID *DisableContext;                                // offset: 0x78 (120)
  UCHAR AbsoluteSystemTime;                            // offset: 0x80 (128)
  union {
    UCHAR TypeFlags; // offset: 0x81 (129)
    struct {
      UCHAR Unused : 1;         // offset: 0x81 (129)
      UCHAR IdleResilient : 1;  // offset: 0x81 (129)
      UCHAR HighResolution : 1; // offset: 0x81 (129)
      UCHAR NoWake : 1;         // offset: 0x81 (129)
      UCHAR Unused1 : 4;        // offset: 0x81 (129)
    };
  };
  UCHAR CollectionIndex[2]; // offset: 0x82 (130)
};

// 0x18 (24) bytes
struct _EVENT_PAYLOAD_PREDICATE {
  USHORT FieldIndex;  // offset: 0x0 (0)
  USHORT CompareOp;   // offset: 0x2 (2)
  ULONGLONG Value[2]; // offset: 0x8 (8)
};

// 0x50 (80) bytes
struct _AGGREGATED_PAYLOAD_FILTER {
  USHORT MagicValue : 12;                            // offset: 0x0 (0)
  USHORT DescriptorVersion : 4;                      // offset: 0x0 (0)
  USHORT Size;                                       // offset: 0x2 (2)
  USHORT PredicateCount;                             // offset: 0x4 (4)
  USHORT Reserved;                                   // offset: 0x6 (6)
  ULONGLONG HashedEventIdBitmap;                     // offset: 0x8 (8)
  struct _GUID ProviderGuid;                         // offset: 0x10 (16)
  USHORT EachEventTableOffset;                       // offset: 0x20 (32)
  USHORT EachEventTableLength;                       // offset: 0x22 (34)
  USHORT PayloadDecoderTableOffset;                  // offset: 0x24 (36)
  USHORT PayloadDecoderTableLength;                  // offset: 0x26 (38)
  USHORT EventFilterTableOffset;                     // offset: 0x28 (40)
  USHORT EventFilterTableLength;                     // offset: 0x2a (42)
  USHORT UNICODEStringTableOffset;                   // offset: 0x2c (44)
  USHORT UNICODEStringTableLength;                   // offset: 0x2e (46)
  USHORT ANSIStringTableOffset;                      // offset: 0x30 (48)
  USHORT ANSIStringTableLength;                      // offset: 0x32 (50)
  struct _EVENT_PAYLOAD_PREDICATE PredicateTable[1]; // offset: 0x38 (56)
};

// 0x58 (88) bytes
struct _ETW_PAYLOAD_FILTER {
  LONG RefCount;                                   // offset: 0x0 (0)
  struct _AGGREGATED_PAYLOAD_FILTER PayloadFilter; // offset: 0x8 (8)
};

// 0x48 (72) bytes
struct _ETW_FILTER_HEADER {
  LONG FilterFlags;                                   // offset: 0x0 (0)
  struct _ETW_FILTER_PID *PidFilter;                  // offset: 0x8 (8)
  struct _ETW_FILTER_STRING_TOKEN *ExeFilter;         // offset: 0x10 (16)
  struct _ETW_FILTER_STRING_TOKEN *PkgIdFilter;       // offset: 0x18 (24)
  struct _ETW_FILTER_STRING_TOKEN *PkgAppIdFilter;    // offset: 0x20 (32)
  struct _ETW_PERFECT_HASH_FUNCTION *StackWalkFilter; // offset: 0x28 (40)
  struct _ETW_PERFECT_HASH_FUNCTION *EventIdFilter;   // offset: 0x30 (48)
  struct _ETW_PAYLOAD_FILTER *PayloadFilter;          // offset: 0x38 (56)
  struct _EVENT_FILTER_HEADER *ProviderSideFilter;    // offset: 0x40 (64)
};

// 0x190 (400) bytes
struct _ETW_GUID_ENTRY {
  struct _LIST_ENTRY GuidList;    // offset: 0x0 (0)
  volatile LONGLONG RefCount;     // offset: 0x10 (16)
  struct _GUID Guid;              // offset: 0x18 (24)
  struct _LIST_ENTRY RegListHead; // offset: 0x28 (40)
  VOID *SecurityDescriptor;       // offset: 0x38 (56)
  union {
    struct _ETW_LAST_ENABLE_INFO LastEnable; // offset: 0x40 (64)
    ULONGLONG MatchId;                       // offset: 0x40 (64)
  };
  struct _TRACE_ENABLE_INFO ProviderEnableInfo; // offset: 0x50 (80)
  struct _TRACE_ENABLE_INFO EnableInfo[8];      // offset: 0x70 (112)
  struct _ETW_FILTER_HEADER *FilterData;        // offset: 0x170 (368)
  UCHAR HostSilo;                               // offset: 0x178 (376)
  struct _EX_PUSH_LOCK Lock;                    // offset: 0x180 (384)
  struct _ETHREAD *LockOwner;                   // offset: 0x188 (392)
};

// 0x538 (1336) bytes
struct _MI_NODE_INFORMATION {
  ULONGLONG LargePageFreeCount[2];               // offset: 0x0 (0)
  struct _LIST_ENTRY LargePages[2][2][4];        // offset: 0x10 (16)
  ULONGLONG LargePagesCount[2][2][4];            // offset: 0x110 (272)
  struct _MMPFNLIST_SHORT StandbyPageList[4][8]; // offset: 0x190 (400)
  volatile ULONGLONG FreeCount[2];               // offset: 0x490 (1168)
  ULONGLONG TotalPages[4];                       // offset: 0x4a0 (1184)
  ULONGLONG TotalPagesEntireNode;                // offset: 0x4c0 (1216)
  ULONG MmShiftedColor;                          // offset: 0x4c8 (1224)
  ULONG Color;                                   // offset: 0x4cc (1228)
  volatile ULONGLONG ChannelFreeCount[4][2];     // offset: 0x4d0 (1232)
  struct {
    ULONG ChannelsHotCold : 1;    // offset: 0x0 (0)
    ULONG Spare : 31;             // offset: 0x0 (0)
  } Flags;                        // offset: 0x510 (1296)
  struct _EX_PUSH_LOCK NodeLock;  // offset: 0x518 (1304)
  UCHAR ChannelStatus;            // offset: 0x520 (1312)
  UCHAR ChannelOrdering[4];       // offset: 0x521 (1313)
  UCHAR LockedChannelOrdering[4]; // offset: 0x525 (1317)
  UCHAR PowerAttribute[4];        // offset: 0x529 (1321)
  ULONGLONG LargePageLock;        // offset: 0x530 (1328)
};

// 0x158 (344) bytes
struct _MI_PARTITION_CORE {
  USHORT PartitionId; // offset: 0x0 (0)
  union {
    ULONG LongFlags;                  // offset: 0x4 (4)
    struct _MI_PARTITION_FLAGS Flags; // offset: 0x4 (4)

  } u;                                                // offset: 0x4 (4)
  ULONGLONG ReferenceCount;                           // offset: 0x8 (8)
  struct _MI_PARTITION *ParentPartition;              // offset: 0x10 (16)
  struct _LIST_ENTRY ListEntry;                       // offset: 0x18 (24)
  struct _MI_NODE_INFORMATION *NodeInformation;       // offset: 0x28 (40)
  struct _MDL *MdlPhysicalMemoryBlock;                // offset: 0x30 (48)
  struct _PHYSICAL_MEMORY_DESCRIPTOR *MemoryNodeRuns; // offset: 0x38 (56)
  ULONGLONG MemoryBlockReferences;                    // offset: 0x40 (64)
  struct _WORK_QUEUE_ITEM PfnUnmapWorkItem;           // offset: 0x48 (72)
  UCHAR PfnUnmapActive;                               // offset: 0x68 (104)
  ULONGLONG PfnUnmapCount;                            // offset: 0x70 (112)
  VOID *PfnUnmapWaitList;                             // offset: 0x78 (120)
  struct _PHYSICAL_MEMORY_DESCRIPTOR *MemoryRuns;     // offset: 0x80 (128)
  struct _KEVENT ExitEvent;                           // offset: 0x88 (136)
  VOID *SystemThreadHandles[5];                       // offset: 0xa0 (160)
  VOID *PartitionObject;                              // offset: 0xc8 (200)
  VOID *PartitionObjectHandle;                        // offset: 0xd0 (208)
  struct _EX_PUSH_LOCK DynamicMemoryPushLock;         // offset: 0xd8 (216)
  volatile LONG DynamicMemoryLock;                    // offset: 0xe0 (224)
  struct _KEVENT TemporaryMemoryEvent;                // offset: 0xe8 (232)
  struct _KEVENT *MemoryEvents[11];                   // offset: 0x100 (256)
};

// 0x10 (16) bytes
struct _TRUSTLET_COLLABORATION_ID {
  ULONGLONG Value[2]; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _TRUSTLET_MAILBOX_KEY {
  ULONGLONG SecretValue[2]; // offset: 0x0 (0)
};

// 0x50 (80) bytes
struct _PROC_PERF_CHECK_SNAP {
  ULONGLONG Time;                          // offset: 0x0 (0)
  ULONGLONG Active;                        // offset: 0x8 (8)
  ULONGLONG Stall;                         // offset: 0x10 (16)
  ULONGLONG FrequencyScaledActive;         // offset: 0x18 (24)
  ULONGLONG PerformanceScaledActive;       // offset: 0x20 (32)
  ULONGLONG PerformanceScaledKernelActive; // offset: 0x28 (40)
  ULONGLONG CyclesActive;                  // offset: 0x30 (48)
  ULONGLONG CyclesAffinitized;             // offset: 0x38 (56)
  ULONGLONG TaggedThreadCycles[2];         // offset: 0x40 (64)
};

// 0xc0 (192) bytes
struct _PROC_PERF_CHECK {
  ULONGLONG LastActive;                  // offset: 0x0 (0)
  ULONGLONG LastTime;                    // offset: 0x8 (8)
  ULONGLONG LastStall;                   // offset: 0x10 (16)
  struct _PROC_PERF_CHECK_SNAP Snap;     // offset: 0x18 (24)
  struct _PROC_PERF_CHECK_SNAP TempSnap; // offset: 0x68 (104)
  UCHAR TaggedThreadPercent[2];          // offset: 0xb8 (184)
  UCHAR Class0FloorPerfSelection;        // offset: 0xba (186)
  UCHAR Class1MinimumPerfSelection;      // offset: 0xbb (187)
};

// 0x90 (144) bytes
struct _PROC_FEEDBACK {
  ULONGLONG Lock;                             // offset: 0x0 (0)
  ULONGLONG CyclesLast;                       // offset: 0x8 (8)
  ULONGLONG CyclesActive;                     // offset: 0x10 (16)
  struct _PROC_FEEDBACK_COUNTER *Counters[2]; // offset: 0x18 (24)
  ULONGLONG LastUpdateTime;                   // offset: 0x28 (40)
  ULONGLONG UnscaledTime;                     // offset: 0x30 (48)
  volatile LONGLONG UnaccountedTime;          // offset: 0x38 (56)
  ULONGLONG ScaledTime[2];                    // offset: 0x40 (64)
  ULONGLONG UnaccountedKernelTime;            // offset: 0x50 (80)
  ULONGLONG PerformanceScaledKernelTime;      // offset: 0x58 (88)
  ULONG UserTimeLast;                         // offset: 0x60 (96)
  ULONG KernelTimeLast;                       // offset: 0x64 (100)
  ULONGLONG IdleGenerationNumberLast;         // offset: 0x68 (104)
  ULONGLONG HvActiveTimeLast;                 // offset: 0x70 (112)
  ULONGLONG StallCyclesLast;                  // offset: 0x78 (120)
  ULONGLONG StallTime;                        // offset: 0x80 (128)
  UCHAR KernelTimesIndex;                     // offset: 0x88 (136)
};

// 0x1d0 (464) bytes
struct _PROCESSOR_POWER_STATE {
  struct _PPM_IDLE_STATES *IdleStates;          // offset: 0x0 (0)
  struct _PROC_IDLE_ACCOUNTING *IdleAccounting; // offset: 0x8 (8)
  ULONGLONG IdleTimeLast;                       // offset: 0x10 (16)
  ULONGLONG IdleTimeTotal;                      // offset: 0x18 (24)
  volatile ULONGLONG IdleTimeEntry;             // offset: 0x20 (32)
  ULONGLONG IdleTimeExpiration;                 // offset: 0x28 (40)
  UCHAR NonInterruptibleTransition;             // offset: 0x30 (48)
  UCHAR PepWokenTransition;                     // offset: 0x31 (49)
  UCHAR Class;                                  // offset: 0x32 (50)
  ULONG TargetIdleState;                        // offset: 0x34 (52)
  struct _PROC_IDLE_POLICY IdlePolicy;          // offset: 0x38 (56)
  union _PPM_IDLE_SYNCHRONIZATION_STATE volatile Synchronization; // offset:
                                                                  // 0x40 (64)
  struct _PROC_FEEDBACK PerfFeedback;     // offset: 0x48 (72)
  enum _PROC_HYPERVISOR_STATE Hypervisor; // offset: 0xd8 (216)
  ULONG LastSysTime;                      // offset: 0xdc (220)
  ULONGLONG WmiDispatchPtr;               // offset: 0xe0 (224)
  LONG WmiInterfaceEnabled;               // offset: 0xe8 (232)
  struct _PPM_FFH_THROTTLE_STATE_INFO
      FFHThrottleStateInfo;                        // offset: 0xf0 (240)
  struct _KDPC PerfActionDpc;                      // offset: 0x110 (272)
  volatile LONG PerfActionMask;                    // offset: 0x150 (336)
  struct _PROC_IDLE_SNAP HvIdleCheck;              // offset: 0x158 (344)
  struct _PROC_PERF_CHECK *PerfCheck;              // offset: 0x168 (360)
  struct _PROC_PERF_DOMAIN *Domain;                // offset: 0x170 (368)
  struct _PROC_PERF_CONSTRAINT *PerfConstraint;    // offset: 0x178 (376)
  struct _PPM_CONCURRENCY_ACCOUNTING *Concurrency; // offset: 0x180 (384)
  struct _PROC_PERF_LOAD *Load;                    // offset: 0x188 (392)
  struct _PROC_PERF_HISTORY *PerfHistory;          // offset: 0x190 (400)
  UCHAR GuaranteedPerformancePercent;              // offset: 0x198 (408)
  UCHAR HvTargetState;                             // offset: 0x199 (409)
  UCHAR Parked;                                    // offset: 0x19a (410)
  ULONG LatestPerformancePercent;                  // offset: 0x19c (412)
  ULONG AveragePerformancePercent;                 // offset: 0x1a0 (416)
  ULONG LatestAffinitizedPercent;                  // offset: 0x1a4 (420)
  ULONG RelativePerformance;                       // offset: 0x1a8 (424)
  ULONG Utility;                                   // offset: 0x1ac (428)
  ULONG AffinitizedUtility;                        // offset: 0x1b0 (432)
  union {
    ULONGLONG SnapTimeLast;   // offset: 0x1b8 (440)
    ULONGLONG EnergyConsumed; // offset: 0x1b8 (440)
  };
  ULONGLONG ActiveTime; // offset: 0x1c0 (448)
  ULONGLONG TotalTime;  // offset: 0x1c8 (456)
};

// 0x90 (144) bytes
struct _PROCESS_ENERGY_VALUES {
  ULONGLONG Cycles[4][2];      // offset: 0x0 (0)
  ULONGLONG DiskEnergy;        // offset: 0x40 (64)
  ULONGLONG NetworkTailEnergy; // offset: 0x48 (72)
  ULONGLONG MBBTailEnergy;     // offset: 0x50 (80)
  ULONGLONG NetworkTxRxBytes;  // offset: 0x58 (88)
  ULONGLONG MBBTxRxBytes;      // offset: 0x60 (96)
  union {
    ULONG Foreground : 1;    // offset: 0x68 (104)
    ULONG WindowInformation; // offset: 0x68 (104)
  };
  ULONG PixelArea;                    // offset: 0x6c (108)
  LONGLONG PixelReportTimestamp;      // offset: 0x70 (112)
  ULONGLONG PixelTime;                // offset: 0x78 (120)
  LONGLONG ForegroundReportTimestamp; // offset: 0x80 (128)
  ULONGLONG ForegroundTime;           // offset: 0x88 (136)
};

// 0x788 (1928) bytes
struct _EPROCESS {
  struct _KPROCESS Pcb;                  // offset: 0x0 (0)
  struct _EX_PUSH_LOCK ProcessLock;      // offset: 0x2d8 (728)
  struct _EX_RUNDOWN_REF RundownProtect; // offset: 0x2e0 (736)
  VOID *UniqueProcessId;                 // offset: 0x2e8 (744)
  struct _LIST_ENTRY ActiveProcessLinks; // offset: 0x2f0 (752)
  union {
    ULONG Flags2; // offset: 0x300 (768)
    struct {
      ULONG JobNotReallyActive : 1;           // offset: 0x300 (768)
      ULONG AccountingFolded : 1;             // offset: 0x300 (768)
      ULONG NewProcessReported : 1;           // offset: 0x300 (768)
      ULONG ExitProcessReported : 1;          // offset: 0x300 (768)
      ULONG ReportCommitChanges : 1;          // offset: 0x300 (768)
      ULONG LastReportMemory : 1;             // offset: 0x300 (768)
      ULONG ForceWakeCharge : 1;              // offset: 0x300 (768)
      ULONG CrossSessionCreate : 1;           // offset: 0x300 (768)
      ULONG NeedsHandleRundown : 1;           // offset: 0x300 (768)
      ULONG RefTraceEnabled : 1;              // offset: 0x300 (768)
      ULONG DisableDynamicCode : 1;           // offset: 0x300 (768)
      ULONG EmptyJobEvaluated : 1;            // offset: 0x300 (768)
      ULONG DefaultPagePriority : 3;          // offset: 0x300 (768)
      ULONG PrimaryTokenFrozen : 1;           // offset: 0x300 (768)
      ULONG ProcessVerifierTarget : 1;        // offset: 0x300 (768)
      ULONG StackRandomizationDisabled : 1;   // offset: 0x300 (768)
      ULONG AffinityPermanent : 1;            // offset: 0x300 (768)
      ULONG AffinityUpdateEnable : 1;         // offset: 0x300 (768)
      ULONG PropagateNode : 1;                // offset: 0x300 (768)
      ULONG ExplicitAffinity : 1;             // offset: 0x300 (768)
      ULONG ProcessExecutionState : 2;        // offset: 0x300 (768)
      ULONG DisallowStrippedImages : 1;       // offset: 0x300 (768)
      ULONG HighEntropyASLREnabled : 1;       // offset: 0x300 (768)
      ULONG ExtensionPointDisable : 1;        // offset: 0x300 (768)
      ULONG ForceRelocateImages : 1;          // offset: 0x300 (768)
      ULONG ProcessStateChangeRequest : 2;    // offset: 0x300 (768)
      ULONG ProcessStateChangeInProgress : 1; // offset: 0x300 (768)
      ULONG DisallowWin32kSystemCalls : 1;    // offset: 0x300 (768)
    };
  };
  union {
    ULONG Flags; // offset: 0x304 (772)
    struct {
      ULONG CreateReported : 1;          // offset: 0x304 (772)
      ULONG NoDebugInherit : 1;          // offset: 0x304 (772)
      ULONG ProcessExiting : 1;          // offset: 0x304 (772)
      ULONG ProcessDelete : 1;           // offset: 0x304 (772)
      ULONG ControlFlowGuardEnabled : 1; // offset: 0x304 (772)
      ULONG VmDeleted : 1;               // offset: 0x304 (772)
      ULONG OutswapEnabled : 1;          // offset: 0x304 (772)
      ULONG Outswapped : 1;              // offset: 0x304 (772)
      ULONG FailFastOnCommitFail : 1;    // offset: 0x304 (772)
      ULONG Wow64VaSpace4Gb : 1;         // offset: 0x304 (772)
      ULONG AddressSpaceInitialized : 2; // offset: 0x304 (772)
      ULONG SetTimerResolution : 1;      // offset: 0x304 (772)
      ULONG BreakOnTermination : 1;      // offset: 0x304 (772)
      ULONG DeprioritizeViews : 1;       // offset: 0x304 (772)
      ULONG WriteWatch : 1;              // offset: 0x304 (772)
      ULONG ProcessInSession : 1;        // offset: 0x304 (772)
      ULONG OverrideAddressSpace : 1;    // offset: 0x304 (772)
      ULONG HasAddressSpace : 1;         // offset: 0x304 (772)
      ULONG LaunchPrefetched : 1;        // offset: 0x304 (772)
      ULONG Background : 1;              // offset: 0x304 (772)
      ULONG VmTopDown : 1;               // offset: 0x304 (772)
      ULONG ImageNotifyDone : 1;         // offset: 0x304 (772)
      ULONG PdeUpdateNeeded : 1;         // offset: 0x304 (772)
      ULONG VdmAllowed : 1;              // offset: 0x304 (772)
      ULONG ProcessRundown : 1;          // offset: 0x304 (772)
      ULONG ProcessInserted : 1;         // offset: 0x304 (772)
      ULONG DefaultIoPriority : 3;       // offset: 0x304 (772)
      ULONG ProcessSelfDelete : 1;       // offset: 0x304 (772)
      ULONG SetTimerResolutionLink : 1;  // offset: 0x304 (772)
    };
  };
  union _LARGE_INTEGER CreateTime;        // offset: 0x308 (776)
  ULONGLONG ProcessQuotaUsage[2];         // offset: 0x310 (784)
  ULONGLONG ProcessQuotaPeak[2];          // offset: 0x320 (800)
  ULONGLONG PeakVirtualSize;              // offset: 0x330 (816)
  ULONGLONG VirtualSize;                  // offset: 0x338 (824)
  struct _LIST_ENTRY SessionProcessLinks; // offset: 0x340 (832)
  union {
    VOID *ExceptionPortData;          // offset: 0x350 (848)
    ULONGLONG ExceptionPortValue;     // offset: 0x350 (848)
    ULONGLONG ExceptionPortState : 3; // offset: 0x350 (848)
  };
  struct _EX_FAST_REF Token;                    // offset: 0x358 (856)
  ULONGLONG WorkingSetPage;                     // offset: 0x360 (864)
  struct _EX_PUSH_LOCK AddressCreationLock;     // offset: 0x368 (872)
  struct _EX_PUSH_LOCK PageTableCommitmentLock; // offset: 0x370 (880)
  struct _ETHREAD *RotateInProgress;            // offset: 0x378 (888)
  struct _ETHREAD *ForkInProgress;              // offset: 0x380 (896)
  struct _EJOB *volatile CommitChargeJob;       // offset: 0x388 (904)
  struct _RTL_AVL_TREE CloneRoot;               // offset: 0x390 (912)
  volatile ULONGLONG NumberOfPrivatePages;      // offset: 0x398 (920)
  volatile ULONGLONG NumberOfLockedPages;       // offset: 0x3a0 (928)
  VOID *Win32Process;                           // offset: 0x3a8 (936)
  struct _EJOB *volatile Job;                   // offset: 0x3b0 (944)
  VOID *SectionObject;                          // offset: 0x3b8 (952)
  VOID *SectionBaseAddress;                     // offset: 0x3c0 (960)
  ULONG Cookie;                                 // offset: 0x3c8 (968)
  struct _PAGEFAULT_HISTORY *WorkingSetWatch;   // offset: 0x3d0 (976)
  VOID *Win32WindowStation;                     // offset: 0x3d8 (984)
  VOID *InheritedFromUniqueProcessId;           // offset: 0x3e0 (992)
  VOID *LdtInformation;                         // offset: 0x3e8 (1000)
  volatile ULONGLONG OwnerProcessId;            // offset: 0x3f0 (1008)
  struct _PEB *Peb;                             // offset: 0x3f8 (1016)
  VOID *Session;                                // offset: 0x400 (1024)
  VOID *AweInfo;                                // offset: 0x408 (1032)
  struct _EPROCESS_QUOTA_BLOCK *QuotaBlock;     // offset: 0x410 (1040)
  struct _HANDLE_TABLE *ObjectTable;            // offset: 0x418 (1048)
  VOID *DebugPort;                              // offset: 0x420 (1056)
  struct _EWOW64PROCESS *WoW64Process;          // offset: 0x428 (1064)
  VOID *DeviceMap;                              // offset: 0x430 (1072)
  VOID *EtwDataSource;                          // offset: 0x438 (1080)
  ULONGLONG PageDirectoryPte;                   // offset: 0x440 (1088)
  struct _FILE_OBJECT *ImageFilePointer;        // offset: 0x448 (1096)
  UCHAR ImageFileName[15];                      // offset: 0x450 (1104)
  UCHAR PriorityClass;                          // offset: 0x45f (1119)
  VOID *SecurityPort;                           // offset: 0x460 (1120)
  struct _SE_AUDIT_PROCESS_CREATION_INFO
      SeAuditProcessCreationInfo;           // offset: 0x468 (1128)
  struct _LIST_ENTRY JobLinks;              // offset: 0x470 (1136)
  VOID *HighestUserAddress;                 // offset: 0x480 (1152)
  struct _LIST_ENTRY ThreadListHead;        // offset: 0x488 (1160)
  volatile ULONG ActiveThreads;             // offset: 0x498 (1176)
  ULONG ImagePathHash;                      // offset: 0x49c (1180)
  ULONG DefaultHardErrorProcessing;         // offset: 0x4a0 (1184)
  LONG LastThreadExitStatus;                // offset: 0x4a4 (1188)
  struct _EX_FAST_REF PrefetchTrace;        // offset: 0x4a8 (1192)
  VOID *LockedPagesList;                    // offset: 0x4b0 (1200)
  union _LARGE_INTEGER ReadOperationCount;  // offset: 0x4b8 (1208)
  union _LARGE_INTEGER WriteOperationCount; // offset: 0x4c0 (1216)
  union _LARGE_INTEGER OtherOperationCount; // offset: 0x4c8 (1224)
  union _LARGE_INTEGER ReadTransferCount;   // offset: 0x4d0 (1232)
  union _LARGE_INTEGER WriteTransferCount;  // offset: 0x4d8 (1240)
  union _LARGE_INTEGER OtherTransferCount;  // offset: 0x4e0 (1248)
  ULONGLONG CommitChargeLimit;              // offset: 0x4e8 (1256)
  volatile ULONGLONG CommitCharge;          // offset: 0x4f0 (1264)
  volatile ULONGLONG CommitChargePeak;      // offset: 0x4f8 (1272)
  struct _MMSUPPORT Vm;                     // offset: 0x500 (1280)
  struct _LIST_ENTRY MmProcessLinks;        // offset: 0x5f8 (1528)
  ULONG ModifiedPageCount;                  // offset: 0x608 (1544)
  LONG ExitStatus;                          // offset: 0x60c (1548)
  struct _RTL_AVL_TREE VadRoot;             // offset: 0x610 (1552)
  VOID *VadHint;                            // offset: 0x618 (1560)
  ULONGLONG VadCount;                       // offset: 0x620 (1568)
  volatile ULONGLONG VadPhysicalPages;      // offset: 0x628 (1576)
  ULONGLONG VadPhysicalPagesLimit;          // offset: 0x630 (1584)
  struct _ALPC_PROCESS_CONTEXT AlpcContext; // offset: 0x638 (1592)
  struct _LIST_ENTRY TimerResolutionLink;   // offset: 0x658 (1624)
  struct _PO_DIAG_STACK_RECORD
      *TimerResolutionStackRecord; // offset: 0x668 (1640)
  ULONG RequestedTimerResolution;  // offset: 0x670 (1648)
  ULONG SmallestTimerResolution;   // offset: 0x674 (1652)
  union _LARGE_INTEGER ExitTime;   // offset: 0x678 (1656)
  struct _INVERTED_FUNCTION_TABLE
      *InvertedFunctionTable;                     // offset: 0x680 (1664)
  struct _EX_PUSH_LOCK InvertedFunctionTableLock; // offset: 0x688 (1672)
  ULONG ActiveThreadsHighWatermark;               // offset: 0x690 (1680)
  ULONG LargePrivateVadCount;                     // offset: 0x694 (1684)
  struct _EX_PUSH_LOCK ThreadListLock;            // offset: 0x698 (1688)
  VOID *WnfContext;                               // offset: 0x6a0 (1696)
  ULONGLONG Spare0;                               // offset: 0x6a8 (1704)
  UCHAR SignatureLevel;                           // offset: 0x6b0 (1712)
  UCHAR SectionSignatureLevel;                    // offset: 0x6b1 (1713)
  struct _PS_PROTECTION Protection;               // offset: 0x6b2 (1714)
  UCHAR HangCount;                                // offset: 0x6b3 (1715)
  union {
    ULONG Flags3; // offset: 0x6b4 (1716)
    struct {
      ULONG Minimal : 1;                   // offset: 0x6b4 (1716)
      ULONG ReplacingPageRoot : 1;         // offset: 0x6b4 (1716)
      ULONG DisableNonSystemFonts : 1;     // offset: 0x6b4 (1716)
      ULONG AuditNonSystemFontLoading : 1; // offset: 0x6b4 (1716)
      ULONG Crashed : 1;                   // offset: 0x6b4 (1716)
      ULONG JobVadsAreTracked : 1;         // offset: 0x6b4 (1716)
      ULONG VadTrackingDisabled : 1;       // offset: 0x6b4 (1716)
      ULONG AuxiliaryProcess : 1;          // offset: 0x6b4 (1716)
      ULONG SubsystemProcess : 1;          // offset: 0x6b4 (1716)
      ULONG IndirectCpuSets : 1;           // offset: 0x6b4 (1716)
      ULONG InPrivate : 1;                 // offset: 0x6b4 (1716)
      ULONG ProhibitRemoteImageMap : 1;    // offset: 0x6b4 (1716)
      ULONG ProhibitLowILImageMap : 1;     // offset: 0x6b4 (1716)
      ULONG SignatureMitigationOptIn : 1;  // offset: 0x6b4 (1716)
    };
  };
  LONG DeviceAsid;                             // offset: 0x6b8 (1720)
  VOID *SvmData;                               // offset: 0x6c0 (1728)
  struct _EX_PUSH_LOCK SvmProcessLock;         // offset: 0x6c8 (1736)
  ULONGLONG SvmLock;                           // offset: 0x6d0 (1744)
  struct _LIST_ENTRY SvmProcessDeviceListHead; // offset: 0x6d8 (1752)
  ULONGLONG LastFreezeInterruptTime;           // offset: 0x6e8 (1768)
  struct _PROCESS_DISK_COUNTERS *DiskCounters; // offset: 0x6f0 (1776)
  VOID *PicoContext;                           // offset: 0x6f8 (1784)
  ULONGLONG TrustletIdentity;                  // offset: 0x700 (1792)
  ULONG KeepAliveCounter;                      // offset: 0x708 (1800)
  ULONG NoWakeKeepAliveCounter;                // offset: 0x70c (1804)
  ULONG HighPriorityFaultsAllowed;             // offset: 0x710 (1808)
  struct _PROCESS_ENERGY_VALUES *EnergyValues; // offset: 0x718 (1816)
  VOID *VmContext;                             // offset: 0x720 (1824)
  ULONGLONG SequenceNumber;                    // offset: 0x728 (1832)
  ULONGLONG CreateInterruptTime;               // offset: 0x730 (1840)
  ULONGLONG CreateUnbiasedInterruptTime;       // offset: 0x738 (1848)
  ULONGLONG TotalUnbiasedFrozenTime;           // offset: 0x740 (1856)
  ULONGLONG LastAppStateUpdateTime;            // offset: 0x748 (1864)
  ULONGLONG LastAppStateUptime : 61;           // offset: 0x750 (1872)
  ULONGLONG LastAppState : 3;                  // offset: 0x750 (1872)
  volatile ULONGLONG SharedCommitCharge;       // offset: 0x758 (1880)
  struct _EX_PUSH_LOCK SharedCommitLock;       // offset: 0x760 (1888)
  struct _LIST_ENTRY SharedCommitLinks;        // offset: 0x768 (1896)
  union {
    struct {
      ULONGLONG AllowedCpuSets; // offset: 0x778 (1912)
      ULONGLONG DefaultCpuSets; // offset: 0x780 (1920)
    };
    struct {
      ULONGLONG *AllowedCpuSetsIndirect; // offset: 0x778 (1912)
      ULONGLONG *DefaultCpuSetsIndirect; // offset: 0x780 (1920)
    };
  };
};

// 0x100 (256) bytes
struct _LPCP_PORT_OBJECT {
  struct _LPCP_PORT_OBJECT *ConnectionPort;        // offset: 0x0 (0)
  struct _LPCP_PORT_OBJECT *ConnectedPort;         // offset: 0x8 (8)
  struct _LPCP_PORT_QUEUE MsgQueue;                // offset: 0x10 (16)
  struct _CLIENT_ID Creator;                       // offset: 0x30 (48)
  VOID *ClientSectionBase;                         // offset: 0x40 (64)
  VOID *ServerSectionBase;                         // offset: 0x48 (72)
  VOID *PortContext;                               // offset: 0x50 (80)
  struct _ETHREAD *ClientThread;                   // offset: 0x58 (88)
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // offset: 0x60 (96)
  struct _SECURITY_CLIENT_CONTEXT StaticSecurity;  // offset: 0x70 (112)
  struct _LIST_ENTRY LpcReplyChainHead;            // offset: 0xb8 (184)
  struct _LIST_ENTRY LpcDataInfoChainHead;         // offset: 0xc8 (200)
  union {
    struct _EPROCESS *ServerProcess;  // offset: 0xd8 (216)
    struct _EPROCESS *MappingProcess; // offset: 0xd8 (216)
  };
  USHORT MaxMessageLength;        // offset: 0xe0 (224)
  USHORT MaxConnectionInfoLength; // offset: 0xe2 (226)
  ULONG Flags;                    // offset: 0xe4 (228)
  struct _KEVENT WaitEvent;       // offset: 0xe8 (232)
};

// 0x70 (112) bytes
struct _ETW_REG_ENTRY {
  struct _LIST_ENTRY RegList;         // offset: 0x0 (0)
  struct _LIST_ENTRY GroupRegList;    // offset: 0x10 (16)
  struct _ETW_GUID_ENTRY *GuidEntry;  // offset: 0x20 (32)
  struct _ETW_GUID_ENTRY *GroupEntry; // offset: 0x28 (40)
  union {
    struct _ETW_REPLY_QUEUE *ReplyQueue;   // offset: 0x30 (48)
    struct _ETW_QUEUE_ENTRY *ReplySlot[4]; // offset: 0x30 (48)
    struct {
      VOID *Caller;    // offset: 0x30 (48)
      ULONG SessionId; // offset: 0x38 (56)
    };
  };
  union {
    struct _EPROCESS *Process; // offset: 0x50 (80)
    VOID *CallbackContext;     // offset: 0x50 (80)
  };
  VOID *Callback; // offset: 0x58 (88)
  USHORT Index;   // offset: 0x60 (96)
  union {
    UCHAR Flags; // offset: 0x62 (98)
    struct {
      UCHAR DbgKernelRegistration : 1;       // offset: 0x62 (98)
      UCHAR DbgUserRegistration : 1;         // offset: 0x62 (98)
      UCHAR DbgReplyRegistration : 1;        // offset: 0x62 (98)
      UCHAR DbgClassicRegistration : 1;      // offset: 0x62 (98)
      UCHAR DbgSessionSpaceRegistration : 1; // offset: 0x62 (98)
      UCHAR DbgModernRegistration : 1;       // offset: 0x62 (98)
      UCHAR DbgClosed : 1;                   // offset: 0x62 (98)
      UCHAR DbgInserted : 1;                 // offset: 0x62 (98)
    };
  };
  UCHAR EnableMask;                    // offset: 0x63 (99)
  UCHAR GroupEnableMask;               // offset: 0x64 (100)
  UCHAR UseDescriptorType;             // offset: 0x65 (101)
  struct _ETW_PROVIDER_TRAITS *Traits; // offset: 0x68 (104)
};

// 0x38 (56) bytes
struct _ETW_QUEUE_ENTRY {
  struct _LIST_ENTRY ListEntry;                // offset: 0x0 (0)
  struct _ETWP_NOTIFICATION_HEADER *DataBlock; // offset: 0x10 (16)
  struct _ETW_REG_ENTRY *RegEntry;             // offset: 0x18 (24)
  struct _ETW_REG_ENTRY *ReplyObject;          // offset: 0x20 (32)
  VOID *WakeReference;                         // offset: 0x28 (40)
  USHORT RegIndex;                             // offset: 0x30 (48)
  USHORT ReplyIndex;                           // offset: 0x32 (50)
  ULONG Flags;                                 // offset: 0x34 (52)
};

// 0x28 (40) bytes
struct _MI_REVERSE_VIEW_MAP {
  struct _LIST_ENTRY ViewLinks; // offset: 0x0 (0)
  union {
    VOID *SystemCacheVa;           // offset: 0x10 (16)
    VOID *SessionViewVa;           // offset: 0x10 (16)
    struct _EPROCESS *VadsProcess; // offset: 0x10 (16)
    ULONGLONG Type : 2;            // offset: 0x10 (16)
  };
  union {
    struct _SUBSECTION *Subsection; // offset: 0x18 (24)
    ULONGLONG SubsectionType : 1;   // offset: 0x18 (24)
  };
  ULONGLONG SectionOffset; // offset: 0x20 (32)
};

// 0xa0 (160) bytes
struct _NONOPAQUE_OPLOCK {
  struct _IRP *IrpExclusiveOplock;             // offset: 0x0 (0)
  struct _FILE_OBJECT *FileObject;             // offset: 0x8 (8)
  struct _EPROCESS *ExclusiveOplockOwner;      // offset: 0x10 (16)
  struct _ETHREAD *ExclusiveOplockOwnerThread; // offset: 0x18 (24)
  UCHAR WaiterPriority;                        // offset: 0x20 (32)
  struct _LIST_ENTRY IrpOplocksR;              // offset: 0x28 (40)
  struct _LIST_ENTRY IrpOplocksRH;             // offset: 0x38 (56)
  struct _LIST_ENTRY RHBreakQueue;             // offset: 0x48 (72)
  struct _LIST_ENTRY WaitingIrps;              // offset: 0x58 (88)
  struct _LIST_ENTRY DelayAckFileObjectQueue;  // offset: 0x68 (104)
  struct _LIST_ENTRY AtomicQueue;              // offset: 0x78 (120)
  struct _GUID *DeleterParentKey;              // offset: 0x88 (136)
  ULONG OplockState;                           // offset: 0x90 (144)
  struct _FAST_MUTEX *FastMutex;               // offset: 0x98 (152)
};

// 0x48 (72) bytes
struct _POP_SHUTDOWN_BUG_CHECK {
  struct _ETHREAD *InitiatingThread;   // offset: 0x0 (0)
  struct _EPROCESS *InitiatingProcess; // offset: 0x8 (8)
  VOID *ThreadId;                      // offset: 0x10 (16)
  VOID *ProcessId;                     // offset: 0x18 (24)
  ULONG Code;                          // offset: 0x20 (32)
  ULONGLONG Parameter1;                // offset: 0x28 (40)
  ULONGLONG Parameter2;                // offset: 0x30 (48)
  ULONGLONG Parameter3;                // offset: 0x38 (56)
  ULONGLONG Parameter4;                // offset: 0x40 (64)
};

// 0x110 (272) bytes
struct _POP_POWER_ACTION {
  UCHAR Updates;                                   // offset: 0x0 (0)
  UCHAR State;                                     // offset: 0x1 (1)
  UCHAR Shutdown;                                  // offset: 0x2 (2)
  enum POWER_ACTION Action;                        // offset: 0x4 (4)
  enum _SYSTEM_POWER_STATE LightestState;          // offset: 0x8 (8)
  ULONG Flags;                                     // offset: 0xc (12)
  LONG Status;                                     // offset: 0x10 (16)
  enum POWER_POLICY_DEVICE_TYPE DeviceType;        // offset: 0x14 (20)
  ULONG DeviceTypeFlags;                           // offset: 0x18 (24)
  UCHAR IrpMinor;                                  // offset: 0x1c (28)
  UCHAR Waking;                                    // offset: 0x1d (29)
  enum _SYSTEM_POWER_STATE SystemState;            // offset: 0x20 (32)
  enum _SYSTEM_POWER_STATE NextSystemState;        // offset: 0x24 (36)
  enum _SYSTEM_POWER_STATE EffectiveSystemState;   // offset: 0x28 (40)
  enum _SYSTEM_POWER_STATE CurrentSystemState;     // offset: 0x2c (44)
  struct _POP_SHUTDOWN_BUG_CHECK *ShutdownBugCode; // offset: 0x30 (48)
  struct _POP_DEVICE_SYS_STATE *DevState;          // offset: 0x38 (56)
  struct _POP_HIBER_CONTEXT *HiberContext;         // offset: 0x40 (64)
  ULONGLONG WakeTime;                              // offset: 0x48 (72)
  ULONGLONG SleepTime;                             // offset: 0x50 (80)
  ULONGLONG WakeFirstUnattendedTime;               // offset: 0x58 (88)
  enum SYSTEM_POWER_CONDITION WakeAlarmSignaled;   // offset: 0x60 (96)
  struct {
    ULONGLONG RequestedTime;                             // offset: 0x0 (0)
    ULONGLONG ProgrammedTime;                            // offset: 0x8 (8)
    struct _DIAGNOSTIC_BUFFER *TimerInfo;                // offset: 0x10 (16)
  } WakeAlarm[3];                                        // offset: 0x68 (104)
  UCHAR WakeAlarmPaused;                                 // offset: 0xb0 (176)
  ULONGLONG WakeAlarmLastTime;                           // offset: 0xb8 (184)
  struct SYSTEM_POWER_CAPABILITIES FilteredCapabilities; // offset: 0xc0 (192)
};

// 0x90 (144) bytes
struct _LOCK_TRACKER {
  struct _RTL_BALANCED_NODE LockTrackerNode; // offset: 0x0 (0)
  struct _MDL *Mdl;                          // offset: 0x18 (24)
  VOID *StartVa;                             // offset: 0x20 (32)
  ULONGLONG Count;                           // offset: 0x28 (40)
  ULONG Offset;                              // offset: 0x30 (48)
  ULONG Length;                              // offset: 0x34 (52)
  ULONGLONG Page;                            // offset: 0x38 (56)
  VOID *StackTrace[8];                       // offset: 0x40 (64)
  ULONG Who;                                 // offset: 0x80 (128)
  struct _EPROCESS *Process;                 // offset: 0x88 (136)
};

// 0x20 (32) bytes
struct _DIAGNOSTIC_CONTEXT {
  enum _REQUESTER_TYPE CallerType; // offset: 0x0 (0)
  union {
    struct {
      struct _EPROCESS *Process; // offset: 0x8 (8)
      ULONG ServiceTag;          // offset: 0x10 (16)
    };
    struct _DEVICE_OBJECT *DeviceObject; // offset: 0x8 (8)
  };
  ULONGLONG ReasonSize; // offset: 0x18 (24)
};

// 0x138 (312) bytes
struct _ETIMER {
  struct _KTIMER KeTimer;                  // offset: 0x0 (0)
  ULONGLONG Lock;                          // offset: 0x40 (64)
  struct _KAPC TimerApc;                   // offset: 0x48 (72)
  struct _KDPC TimerDpc;                   // offset: 0xa0 (160)
  struct _LIST_ENTRY ActiveTimerListEntry; // offset: 0xe0 (224)
  ULONG Period;                            // offset: 0xf0 (240)
  union {
    CHAR TimerFlags; // offset: 0xf4 (244)
    struct {
      UCHAR ApcAssociated : 1; // offset: 0xf4 (244)
      UCHAR FlushDpcs : 1;     // offset: 0xf4 (244)
      UCHAR Paused : 1;        // offset: 0xf4 (244)
      UCHAR Spare1 : 5;        // offset: 0xf4 (244)
    };
  };
  UCHAR DueTimeType;                               // offset: 0xf5 (245)
  USHORT Spare2;                                   // offset: 0xf6 (246)
  struct _DIAGNOSTIC_CONTEXT *volatile WakeReason; // offset: 0xf8 (248)
  struct _LIST_ENTRY WakeTimerListEntry;           // offset: 0x100 (256)
  VOID *VirtualizedTimerCookie;                    // offset: 0x110 (272)
  struct _LIST_ENTRY VirtualizedTimerLinks;        // offset: 0x118 (280)
  ULONGLONG DueTime;                               // offset: 0x128 (296)
  ULONG CoalescingWindow;                          // offset: 0x130 (304)
};

// 0x48 (72) bytes
struct _RH_OP_CONTEXT {
  struct _LIST_ENTRY Links;                     // offset: 0x0 (0)
  struct _IRP *OplockRequestIrp;                // offset: 0x10 (16)
  struct _FILE_OBJECT *OplockRequestFileObject; // offset: 0x18 (24)
  struct _EPROCESS *OplockRequestProcess;       // offset: 0x20 (32)
  struct _ETHREAD *OplockOwnerThread;           // offset: 0x28 (40)
  ULONG Flags;                                  // offset: 0x30 (48)
  struct _LIST_ENTRY AtomicLinks;               // offset: 0x38 (56)
};

// 0x28 (40) bytes
struct _KRESOURCEMANAGER_COMPLETION_BINDING {
  struct _LIST_ENTRY NotificationListHead; // offset: 0x0 (0)
  VOID *Port;                              // offset: 0x10 (16)
  ULONGLONG Key;                           // offset: 0x18 (24)
  struct _EPROCESS *BindingProcess;        // offset: 0x20 (32)
};

// 0x250 (592) bytes
struct _KRESOURCEMANAGER {
  struct _KEVENT NotificationAvailable;           // offset: 0x0 (0)
  ULONG cookie;                                   // offset: 0x18 (24)
  enum _KRESOURCEMANAGER_STATE State;             // offset: 0x1c (28)
  ULONG Flags;                                    // offset: 0x20 (32)
  struct _KMUTANT Mutex;                          // offset: 0x28 (40)
  struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink; // offset: 0x60 (96)
  struct _GUID RmId;                              // offset: 0x88 (136)
  struct _KQUEUE NotificationQueue;               // offset: 0x98 (152)
  struct _KMUTANT NotificationMutex;              // offset: 0xd8 (216)
  struct _LIST_ENTRY EnlistmentHead;              // offset: 0x110 (272)
  ULONG EnlistmentCount;                          // offset: 0x120 (288)
  LONG(*NotificationRoutine)
  (struct _KENLISTMENT *arg1, VOID *arg2, VOID *arg3, ULONG arg4,
   union _LARGE_INTEGER *arg5, ULONG arg6, VOID *arg7); // offset: 0x128 (296)
  VOID *Key;                                            // offset: 0x130 (304)
  struct _LIST_ENTRY ProtocolListHead;                  // offset: 0x138 (312)
  struct _LIST_ENTRY PendingPropReqListHead;            // offset: 0x148 (328)
  struct _LIST_ENTRY CRMListEntry;                      // offset: 0x158 (344)
  struct _KTM *Tm;                                      // offset: 0x168 (360)
  struct _UNICODE_STRING Description;                   // offset: 0x170 (368)
  struct _KTMOBJECT_NAMESPACE Enlistments;              // offset: 0x180 (384)
  struct _KRESOURCEMANAGER_COMPLETION_BINDING
      CompletionBinding; // offset: 0x228 (552)
};

// 0x3c0 (960) bytes
struct _KTM {
  ULONG cookie;                                     // offset: 0x0 (0)
  struct _KMUTANT Mutex;                            // offset: 0x8 (8)
  enum KTM_STATE State;                             // offset: 0x40 (64)
  struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink;   // offset: 0x48 (72)
  struct _GUID TmIdentity;                          // offset: 0x70 (112)
  ULONG Flags;                                      // offset: 0x80 (128)
  ULONG VolatileFlags;                              // offset: 0x84 (132)
  struct _UNICODE_STRING LogFileName;               // offset: 0x88 (136)
  struct _FILE_OBJECT *LogFileObject;               // offset: 0x98 (152)
  VOID *MarshallingContext;                         // offset: 0xa0 (160)
  VOID *LogManagementContext;                       // offset: 0xa8 (168)
  struct _KTMOBJECT_NAMESPACE Transactions;         // offset: 0xb0 (176)
  struct _KTMOBJECT_NAMESPACE ResourceManagers;     // offset: 0x158 (344)
  struct _KMUTANT LsnOrderedMutex;                  // offset: 0x200 (512)
  struct _LIST_ENTRY LsnOrderedList;                // offset: 0x238 (568)
  union _LARGE_INTEGER CommitVirtualClock;          // offset: 0x248 (584)
  struct _FAST_MUTEX CommitVirtualClockMutex;       // offset: 0x250 (592)
  union _CLS_LSN BaseLsn;                           // offset: 0x288 (648)
  union _CLS_LSN CurrentReadLsn;                    // offset: 0x290 (656)
  union _CLS_LSN LastRecoveredLsn;                  // offset: 0x298 (664)
  VOID *TmRmHandle;                                 // offset: 0x2a0 (672)
  struct _KRESOURCEMANAGER *TmRm;                   // offset: 0x2a8 (680)
  struct _KEVENT LogFullNotifyEvent;                // offset: 0x2b0 (688)
  struct _WORK_QUEUE_ITEM CheckpointWorkItem;       // offset: 0x2c8 (712)
  union _CLS_LSN CheckpointTargetLsn;               // offset: 0x2e8 (744)
  struct _WORK_QUEUE_ITEM LogFullCompletedWorkItem; // offset: 0x2f0 (752)
  struct _ERESOURCE LogWriteResource;               // offset: 0x310 (784)
  ULONG LogFlags;                                   // offset: 0x378 (888)
  LONG LogFullStatus;                               // offset: 0x37c (892)
  LONG RecoveryStatus;                              // offset: 0x380 (896)
  union _CLS_LSN LastCheckBaseLsn;                  // offset: 0x388 (904)
  struct _LIST_ENTRY RestartOrderedList;            // offset: 0x390 (912)
  struct _WORK_QUEUE_ITEM OfflineWorkItem;          // offset: 0x3a0 (928)
};

// 0x1e0 (480) bytes
struct _KENLISTMENT {
  ULONG cookie;                                      // offset: 0x0 (0)
  struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink;    // offset: 0x8 (8)
  struct _GUID EnlistmentId;                         // offset: 0x30 (48)
  struct _KMUTANT Mutex;                             // offset: 0x40 (64)
  struct _LIST_ENTRY NextSameTx;                     // offset: 0x78 (120)
  struct _LIST_ENTRY NextSameRm;                     // offset: 0x88 (136)
  struct _KRESOURCEMANAGER *ResourceManager;         // offset: 0x98 (152)
  struct _KTRANSACTION *Transaction;                 // offset: 0xa0 (160)
  enum _KENLISTMENT_STATE State;                     // offset: 0xa8 (168)
  ULONG Flags;                                       // offset: 0xac (172)
  ULONG NotificationMask;                            // offset: 0xb0 (176)
  VOID *Key;                                         // offset: 0xb8 (184)
  ULONG KeyRefCount;                                 // offset: 0xc0 (192)
  VOID *RecoveryInformation;                         // offset: 0xc8 (200)
  ULONG RecoveryInformationLength;                   // offset: 0xd0 (208)
  VOID *DynamicNameInformation;                      // offset: 0xd8 (216)
  ULONG DynamicNameInformationLength;                // offset: 0xe0 (224)
  struct _KTMNOTIFICATION_PACKET *FinalNotification; // offset: 0xe8 (232)
  struct _KENLISTMENT *SupSubEnlistment;             // offset: 0xf0 (240)
  VOID *SupSubEnlHandle;                             // offset: 0xf8 (248)
  VOID *SubordinateTxHandle;                         // offset: 0x100 (256)
  struct _GUID CrmEnlistmentEnId;                    // offset: 0x108 (264)
  struct _GUID CrmEnlistmentTmId;                    // offset: 0x118 (280)
  struct _GUID CrmEnlistmentRmId;                    // offset: 0x128 (296)
  ULONG NextHistory;                                 // offset: 0x138 (312)
  struct _KENLISTMENT_HISTORY History[20];           // offset: 0x13c (316)
};

// 0x10 (16) bytes
struct _OBJECT_HANDLE_COUNT_ENTRY {
  struct _EPROCESS *Process; // offset: 0x0 (0)
  ULONG HandleCount : 24;    // offset: 0x8 (8)
  ULONG LockCount : 8;       // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _OBJECT_HANDLE_COUNT_DATABASE {
  ULONG CountEntries;                                      // offset: 0x0 (0)
  struct _OBJECT_HANDLE_COUNT_ENTRY HandleCountEntries[1]; // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _OBJECT_HEADER_HANDLE_INFO {
  union {
    struct _OBJECT_HANDLE_COUNT_DATABASE
        *HandleCountDataBase;                      // offset: 0x0 (0)
    struct _OBJECT_HANDLE_COUNT_ENTRY SingleEntry; // offset: 0x0 (0)
  };
};

// 0x10 (16) bytes
struct _OBJECT_HEADER_PROCESS_INFO {
  struct _EPROCESS *ExclusiveProcess; // offset: 0x0 (0)
  ULONGLONG Reserved;                 // offset: 0x8 (8)
};

// 0x98 (152) bytes
struct _ETW_REALTIME_CONSUMER {
  struct _LIST_ENTRY Links;                      // offset: 0x0 (0)
  VOID *ProcessHandle;                           // offset: 0x10 (16)
  struct _EPROCESS *ProcessObject;               // offset: 0x18 (24)
  VOID *NextNotDelivered;                        // offset: 0x20 (32)
  VOID *RealtimeConnectContext;                  // offset: 0x28 (40)
  struct _KEVENT *DisconnectEvent;               // offset: 0x30 (48)
  struct _KEVENT *DataAvailableEvent;            // offset: 0x38 (56)
  ULONG *UserBufferCount;                        // offset: 0x40 (64)
  struct _SINGLE_LIST_ENTRY *UserBufferListHead; // offset: 0x48 (72)
  ULONG BuffersLost;                             // offset: 0x50 (80)
  ULONG EmptyBuffersCount;                       // offset: 0x54 (84)
  USHORT LoggerId;                               // offset: 0x58 (88)
  union {
    UCHAR Flags; // offset: 0x5a (90)
    struct {
      UCHAR ShutDownRequested : 1; // offset: 0x5a (90)
      UCHAR NewBuffersLost : 1;    // offset: 0x5a (90)
      UCHAR Disconnected : 1;      // offset: 0x5a (90)
      UCHAR Notified : 1;          // offset: 0x5a (90)
      UCHAR Wow : 1;               // offset: 0x5a (90)
    };
  };
  struct _RTL_BITMAP ReservedBufferSpaceBitMap; // offset: 0x60 (96)
  UCHAR *ReservedBufferSpace;                   // offset: 0x70 (112)
  ULONG ReservedBufferSpaceSize;                // offset: 0x78 (120)
  ULONG UserPagesAllocated;                     // offset: 0x7c (124)
  ULONG UserPagesReused;                        // offset: 0x80 (128)
  ULONG *EventsLostCount;                       // offset: 0x88 (136)
  ULONG *BuffersLostCount;                      // offset: 0x90 (144)
};

// 0x390 (912) bytes
struct _WMI_LOGGER_CONTEXT {
  ULONG LoggerId;                         // offset: 0x0 (0)
  ULONG BufferSize;                       // offset: 0x4 (4)
  ULONG MaximumEventSize;                 // offset: 0x8 (8)
  ULONG LoggerMode;                       // offset: 0xc (12)
  LONG AcceptNewEvents;                   // offset: 0x10 (16)
  ULONG EventMarker[2];                   // offset: 0x14 (20)
  ULONG ErrorMarker;                      // offset: 0x1c (28)
  ULONG SizeMask;                         // offset: 0x20 (32)
  LONGLONG (*GetCpuClock)();              // offset: 0x28 (40)
  struct _ETHREAD *LoggerThread;          // offset: 0x30 (48)
  LONG LoggerStatus;                      // offset: 0x38 (56)
  ULONG FailureReason;                    // offset: 0x3c (60)
  struct _ETW_BUFFER_QUEUE BufferQueue;   // offset: 0x40 (64)
  struct _ETW_BUFFER_QUEUE OverflowQueue; // offset: 0x58 (88)
  struct _LIST_ENTRY GlobalList;          // offset: 0x70 (112)
  struct _LIST_ENTRY ProviderBinaryList;  // offset: 0x80 (128)
  union {
    struct _WMI_BUFFER_HEADER *BatchedBufferList; // offset: 0x90 (144)
    struct _EX_FAST_REF CurrentBuffer;            // offset: 0x90 (144)
  };
  struct _UNICODE_STRING LoggerName;                 // offset: 0x98 (152)
  struct _UNICODE_STRING LogFileName;                // offset: 0xa8 (168)
  struct _UNICODE_STRING LogFilePattern;             // offset: 0xb8 (184)
  struct _UNICODE_STRING NewLogFileName;             // offset: 0xc8 (200)
  ULONG ClockType;                                   // offset: 0xd8 (216)
  ULONG LastFlushedBuffer;                           // offset: 0xdc (220)
  ULONG FlushTimer;                                  // offset: 0xe0 (224)
  ULONG FlushThreshold;                              // offset: 0xe4 (228)
  union _LARGE_INTEGER ByteOffset;                   // offset: 0xe8 (232)
  ULONG MinimumBuffers;                              // offset: 0xf0 (240)
  volatile LONG BuffersAvailable;                    // offset: 0xf4 (244)
  volatile LONG NumberOfBuffers;                     // offset: 0xf8 (248)
  ULONG MaximumBuffers;                              // offset: 0xfc (252)
  volatile ULONG EventsLost;                         // offset: 0x100 (256)
  volatile LONG PeakBuffersCount;                    // offset: 0x104 (260)
  ULONG BuffersWritten;                              // offset: 0x108 (264)
  ULONG LogBuffersLost;                              // offset: 0x10c (268)
  ULONG RealTimeBuffersDelivered;                    // offset: 0x110 (272)
  ULONG RealTimeBuffersLost;                         // offset: 0x114 (276)
  LONG *SequencePtr;                                 // offset: 0x118 (280)
  ULONG LocalSequence;                               // offset: 0x120 (288)
  struct _GUID InstanceGuid;                         // offset: 0x124 (292)
  ULONG MaximumFileSize;                             // offset: 0x134 (308)
  LONG FileCounter;                                  // offset: 0x138 (312)
  enum _POOL_TYPE PoolType;                          // offset: 0x13c (316)
  struct _ETW_REF_CLOCK ReferenceTime;               // offset: 0x140 (320)
  LONG CollectionOn;                                 // offset: 0x150 (336)
  ULONG ProviderInfoSize;                            // offset: 0x154 (340)
  struct _LIST_ENTRY Consumers;                      // offset: 0x158 (344)
  ULONG NumConsumers;                                // offset: 0x168 (360)
  struct _ETW_REALTIME_CONSUMER *TransitionConsumer; // offset: 0x170 (368)
  VOID *RealtimeLogfileHandle;                       // offset: 0x178 (376)
  struct _UNICODE_STRING RealtimeLogfileName;        // offset: 0x180 (384)
  union _LARGE_INTEGER RealtimeWriteOffset;          // offset: 0x190 (400)
  union _LARGE_INTEGER RealtimeReadOffset;           // offset: 0x198 (408)
  union _LARGE_INTEGER RealtimeLogfileSize;          // offset: 0x1a0 (416)
  ULONGLONG RealtimeLogfileUsage;                    // offset: 0x1a8 (424)
  ULONGLONG RealtimeMaximumFileSize;                 // offset: 0x1b0 (432)
  ULONG RealtimeBuffersSaved;                        // offset: 0x1b8 (440)
  struct _ETW_REF_CLOCK RealtimeReferenceTime;       // offset: 0x1c0 (448)
  enum _ETW_RT_EVENT_LOSS NewRTEventsLost;           // offset: 0x1d0 (464)
  struct _KEVENT LoggerEvent;                        // offset: 0x1d8 (472)
  struct _KEVENT FlushEvent;                         // offset: 0x1f0 (496)
  struct _KTIMER FlushTimeOutTimer;                  // offset: 0x208 (520)
  struct _KDPC LoggerDpc;                            // offset: 0x248 (584)
  struct _KMUTANT LoggerMutex;                       // offset: 0x288 (648)
  struct _EX_PUSH_LOCK LoggerLock;                   // offset: 0x2c0 (704)
  union {
    ULONGLONG BufferListSpinLock;            // offset: 0x2c8 (712)
    struct _EX_PUSH_LOCK BufferListPushLock; // offset: 0x2c8 (712)
  };
  struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext; // offset: 0x2d0 (720)
  struct _TOKEN_ACCESS_INFORMATION
      *TokenAccessInformation;            // offset: 0x318 (792)
  struct _EX_FAST_REF SecurityDescriptor; // offset: 0x320 (800)
  union _LARGE_INTEGER StartTime;         // offset: 0x328 (808)
  VOID *LogFileHandle;                    // offset: 0x330 (816)
  LONGLONG BufferSequenceNumber;          // offset: 0x338 (824)
  union {
    ULONG Flags; // offset: 0x340 (832)
    struct {
      ULONG Persistent : 1;                  // offset: 0x340 (832)
      ULONG AutoLogger : 1;                  // offset: 0x340 (832)
      ULONG FsReady : 1;                     // offset: 0x340 (832)
      ULONG RealTime : 1;                    // offset: 0x340 (832)
      ULONG Wow : 1;                         // offset: 0x340 (832)
      ULONG KernelTrace : 1;                 // offset: 0x340 (832)
      ULONG NoMoreEnable : 1;                // offset: 0x340 (832)
      ULONG StackTracing : 1;                // offset: 0x340 (832)
      ULONG ErrorLogged : 1;                 // offset: 0x340 (832)
      ULONG RealtimeLoggerContextFreed : 1;  // offset: 0x340 (832)
      ULONG PebsTracing : 1;                 // offset: 0x340 (832)
      ULONG PmcCounters : 1;                 // offset: 0x340 (832)
      ULONG PageAlignBuffers : 1;            // offset: 0x340 (832)
      ULONG StackLookasideListAllocated : 1; // offset: 0x340 (832)
      ULONG SecurityTrace : 1;               // offset: 0x340 (832)
      ULONG SpareFlags1 : 1;                 // offset: 0x340 (832)
      ULONG SystemLoggerIndex : 8;           // offset: 0x340 (832)
      ULONG StackCaching : 1;                // offset: 0x340 (832)
      ULONG SpareFlags2 : 7;                 // offset: 0x340 (832)
    };
  };
  union {
    volatile ULONG RequestFlag; // offset: 0x344 (836)
    struct {
      ULONG DbgRequestNewFile : 1;            // offset: 0x344 (836)
      ULONG DbgRequestUpdateFile : 1;         // offset: 0x344 (836)
      ULONG DbgRequestFlush : 1;              // offset: 0x344 (836)
      ULONG DbgRequestDisableRealtime : 1;    // offset: 0x344 (836)
      ULONG DbgRequestDisconnectConsumer : 1; // offset: 0x344 (836)
      ULONG DbgRequestConnectConsumer : 1;    // offset: 0x344 (836)
      ULONG DbgRequestNotifyConsumer : 1;     // offset: 0x344 (836)
      ULONG DbgRequestUpdateHeader : 1;       // offset: 0x344 (836)
      ULONG DbgRequestDeferredFlush : 1;      // offset: 0x344 (836)
      ULONG DbgRequestDeferredFlushTimer : 1; // offset: 0x344 (836)
      ULONG DbgRequestFlushTimer : 1;         // offset: 0x344 (836)
      ULONG DbgRequestUpdateDebugger : 1;     // offset: 0x344 (836)
      ULONG DbgSpareRequestFlags : 20;        // offset: 0x344 (836)
    };
  };
  struct _RTL_BITMAP HookIdMap;               // offset: 0x348 (840)
  struct _ETW_STACK_CACHE *StackCache;        // offset: 0x358 (856)
  struct _ETW_PMC_SUPPORT *PmcData;           // offset: 0x360 (864)
  struct _LIST_ENTRY WinRtProviderBinaryList; // offset: 0x368 (872)
  struct _WMI_BUFFER_HEADER **ScratchArray;   // offset: 0x378 (888)
  struct _DISALLOWED_GUIDS DisallowedGuids;   // offset: 0x380 (896)
};

// 0x13a8 (5032) bytes
struct _ETW_SILODRIVERSTATE {
  struct _ETW_GUID_ENTRY EtwpSecurityProviderGuidEntry; // offset: 0x0 (0)
  struct _EX_RUNDOWN_REF_CACHE_AWARE
      *EtwpLoggerRundown[64];                        // offset: 0x190 (400)
  struct _WMI_LOGGER_CONTEXT *WmipLoggerContext[64]; // offset: 0x390 (912)
  struct _ETW_HASH_BUCKET EtwpGuidHashTable[64];     // offset: 0x590 (1424)
  USHORT EtwpSecurityLoggers[8];                     // offset: 0x1390 (5008)
  UCHAR EtwpSecurityProviderEnableMask;              // offset: 0x13a0 (5024)
  UCHAR EtwpShutdownInProgress;                      // offset: 0x13a1 (5025)
  ULONG EtwpSecurityProviderPID;                     // offset: 0x13a4 (5028)
};

// 0x78 (120) bytes
struct _OBJECT_TYPE_INITIALIZER {
  USHORT Length; // offset: 0x0 (0)
  union {
    UCHAR ObjectTypeFlags; // offset: 0x2 (2)
    struct {
      UCHAR CaseInsensitive : 1;         // offset: 0x2 (2)
      UCHAR UnnamedObjectsOnly : 1;      // offset: 0x2 (2)
      UCHAR UseDefaultObject : 1;        // offset: 0x2 (2)
      UCHAR SecurityRequired : 1;        // offset: 0x2 (2)
      UCHAR MaintainHandleCount : 1;     // offset: 0x2 (2)
      UCHAR MaintainTypeList : 1;        // offset: 0x2 (2)
      UCHAR SupportsObjectCallbacks : 1; // offset: 0x2 (2)
      UCHAR CacheAligned : 1;            // offset: 0x2 (2)
    };
  };
  ULONG ObjectTypeCode;                   // offset: 0x4 (4)
  ULONG InvalidAttributes;                // offset: 0x8 (8)
  struct _GENERIC_MAPPING GenericMapping; // offset: 0xc (12)
  ULONG ValidAccessMask;                  // offset: 0x1c (28)
  ULONG RetainAccess;                     // offset: 0x20 (32)
  enum _POOL_TYPE PoolType;               // offset: 0x24 (36)
  ULONG DefaultPagedPoolCharge;           // offset: 0x28 (40)
  ULONG DefaultNonPagedPoolCharge;        // offset: 0x2c (44)
  VOID(*DumpProcedure)
  (VOID *arg1, struct _OBJECT_DUMP_CONTROL *arg2); // offset: 0x30 (48)
  LONG(*OpenProcedure)
  (enum _OB_OPEN_REASON arg1, CHAR arg2, struct _EPROCESS *arg3, VOID *arg4,
   ULONG *arg5, ULONG arg6); // offset: 0x38 (56)
  VOID(*CloseProcedure)
  (struct _EPROCESS *arg1, VOID *arg2, ULONGLONG arg3,
   ULONGLONG arg4);                    // offset: 0x40 (64)
  VOID (*DeleteProcedure)(VOID *arg1); // offset: 0x48 (72)
  LONG(*ParseProcedure)
  (VOID *arg1, VOID *arg2, struct _ACCESS_STATE *arg3, CHAR arg4, ULONG arg5,
   struct _UNICODE_STRING *arg6, struct _UNICODE_STRING *arg7, VOID *arg8,
   struct _SECURITY_QUALITY_OF_SERVICE *arg9,
   VOID **arg10); // offset: 0x50 (80)
  LONG(*SecurityProcedure)
  (VOID *arg1, enum _SECURITY_OPERATION_CODE arg2, ULONG *arg3, VOID *arg4,
   ULONG *arg5, VOID **arg6, enum _POOL_TYPE arg7,
   struct _GENERIC_MAPPING *arg8, CHAR arg9); // offset: 0x58 (88)
  LONG(*QueryNameProcedure)
  (VOID *arg1, UCHAR arg2, struct _OBJECT_NAME_INFORMATION *arg3, ULONG arg4,
   ULONG *arg5, CHAR arg6); // offset: 0x60 (96)
  UCHAR(*OkayToCloseProcedure)
  (struct _EPROCESS *arg1, VOID *arg2, VOID *arg3,
   CHAR arg4);                    // offset: 0x68 (104)
  ULONG WaitObjectFlagMask;       // offset: 0x70 (112)
  USHORT WaitObjectFlagOffset;    // offset: 0x74 (116)
  USHORT WaitObjectPointerOffset; // offset: 0x76 (118)
};

// 0xd8 (216) bytes
struct _OBJECT_TYPE {
  struct _LIST_ENTRY TypeList;              // offset: 0x0 (0)
  struct _UNICODE_STRING Name;              // offset: 0x10 (16)
  VOID *DefaultObject;                      // offset: 0x20 (32)
  UCHAR Index;                              // offset: 0x28 (40)
  ULONG TotalNumberOfObjects;               // offset: 0x2c (44)
  ULONG TotalNumberOfHandles;               // offset: 0x30 (48)
  ULONG HighWaterNumberOfObjects;           // offset: 0x34 (52)
  ULONG HighWaterNumberOfHandles;           // offset: 0x38 (56)
  struct _OBJECT_TYPE_INITIALIZER TypeInfo; // offset: 0x40 (64)
  struct _EX_PUSH_LOCK TypeLock;            // offset: 0xb8 (184)
  ULONG Key;                                // offset: 0xc0 (192)
  struct _LIST_ENTRY CallbackList;          // offset: 0xc8 (200)
};

// 0x28 (40) bytes
struct _OB_DUPLICATE_OBJECT_STATE {
  struct _EPROCESS *SourceProcess;            // offset: 0x0 (0)
  VOID *SourceHandle;                         // offset: 0x8 (8)
  VOID *Object;                               // offset: 0x10 (16)
  ULONG TargetAccess;                         // offset: 0x18 (24)
  struct _HANDLE_TABLE_ENTRY_INFO ObjectInfo; // offset: 0x1c (28)
  ULONG HandleAttributes;                     // offset: 0x20 (32)
};

// 0x30 (48) bytes
struct _KALPC_HANDLE_DATA {
  ULONG Flags;                                        // offset: 0x0 (0)
  ULONG ObjectType;                                   // offset: 0x4 (4)
  struct _OB_DUPLICATE_OBJECT_STATE DuplicateContext; // offset: 0x8 (8)
};

// 0x70 (112) bytes
struct _KALPC_SECURITY_DATA {
  struct _ALPC_HANDLE_TABLE *HandleTable;          // offset: 0x0 (0)
  VOID *ContextHandle;                             // offset: 0x8 (8)
  struct _EPROCESS *OwningProcess;                 // offset: 0x10 (16)
  struct _ALPC_PORT *OwnerPort;                    // offset: 0x18 (24)
  struct _SECURITY_CLIENT_CONTEXT DynamicSecurity; // offset: 0x20 (32)
  union {
    struct {
      ULONG Revoked : 1;      // offset: 0x0 (0)
      ULONG Impersonated : 1; // offset: 0x0 (0)
    } s1;                     // offset: 0x68 (104)

  } u1; // offset: 0x68 (104)
};

// 0x40 (64) bytes
struct _KALPC_MESSAGE_ATTRIBUTES {
  VOID *ClientContext;                       // offset: 0x0 (0)
  VOID *ServerContext;                       // offset: 0x8 (8)
  VOID *PortContext;                         // offset: 0x10 (16)
  VOID *CancelPortContext;                   // offset: 0x18 (24)
  struct _KALPC_SECURITY_DATA *SecurityData; // offset: 0x20 (32)
  struct _KALPC_VIEW *View;                  // offset: 0x28 (40)
  struct _KALPC_HANDLE_DATA *HandleData;     // offset: 0x30 (48)
  union _KALPC_DIRECT_EVENT DirectEvent;     // offset: 0x38 (56)
};

// 0x108 (264) bytes
struct _KALPC_MESSAGE {
  struct _LIST_ENTRY Entry;       // offset: 0x0 (0)
  struct _ALPC_PORT *PortQueue;   // offset: 0x10 (16)
  struct _ALPC_PORT *OwnerPort;   // offset: 0x18 (24)
  struct _ETHREAD *WaitingThread; // offset: 0x20 (32)
  union {
    struct {
      ULONG QueueType : 3;              // offset: 0x0 (0)
      ULONG QueuePortType : 4;          // offset: 0x0 (0)
      ULONG Canceled : 1;               // offset: 0x0 (0)
      ULONG Ready : 1;                  // offset: 0x0 (0)
      ULONG ReleaseMessage : 1;         // offset: 0x0 (0)
      ULONG SharedQuota : 1;            // offset: 0x0 (0)
      ULONG ReplyWaitReply : 1;         // offset: 0x0 (0)
      ULONG OwnerPortReference : 1;     // offset: 0x0 (0)
      ULONG ReserveReference : 1;       // offset: 0x0 (0)
      ULONG ReceiverReference : 1;      // offset: 0x0 (0)
      ULONG ViewAttributeRetrieved : 1; // offset: 0x0 (0)
      ULONG InDispatch : 1;             // offset: 0x0 (0)
    } s1;                               // offset: 0x28 (40)
    ULONG State;                        // offset: 0x28 (40)

  } u1;            // offset: 0x28 (40)
  LONG SequenceNo; // offset: 0x2c (44)
  union {
    struct _EPROCESS *QuotaProcess; // offset: 0x30 (48)
    VOID *QuotaBlock;               // offset: 0x30 (48)
  };
  struct _ALPC_PORT *CancelSequencePort;              // offset: 0x38 (56)
  struct _ALPC_PORT *CancelQueuePort;                 // offset: 0x40 (64)
  LONG CancelSequenceNo;                              // offset: 0x48 (72)
  struct _LIST_ENTRY CancelListEntry;                 // offset: 0x50 (80)
  struct _KALPC_RESERVE *Reserve;                     // offset: 0x60 (96)
  struct _KALPC_MESSAGE_ATTRIBUTES MessageAttributes; // offset: 0x68 (104)
  VOID *DataUserVa;                                   // offset: 0xa8 (168)
  struct _ALPC_COMMUNICATION_INFO *CommunicationInfo; // offset: 0xb0 (176)
  struct _ALPC_PORT *ConnectionPort;                  // offset: 0xb8 (184)
  struct _ETHREAD *ServerThread;                      // offset: 0xc0 (192)
  VOID *WakeReference;                                // offset: 0xc8 (200)
  VOID *ExtensionBuffer;                              // offset: 0xd0 (208)
  ULONGLONG ExtensionBufferSize;                      // offset: 0xd8 (216)
  struct _PORT_MESSAGE PortMessage;                   // offset: 0xe0 (224)
};

// 0x40 (64) bytes
struct _ALPC_DISPATCH_CONTEXT {
  struct _ALPC_PORT *PortObject;                      // offset: 0x0 (0)
  struct _KALPC_MESSAGE *Message;                     // offset: 0x8 (8)
  struct _ALPC_COMMUNICATION_INFO *CommunicationInfo; // offset: 0x10 (16)
  struct _ETHREAD *TargetThread;                      // offset: 0x18 (24)
  struct _ALPC_PORT *TargetPort;                      // offset: 0x20 (32)
  union _KALPC_DIRECT_EVENT DirectEvent;              // offset: 0x28 (40)
  ULONG Flags;                                        // offset: 0x30 (48)
  USHORT TotalLength;                                 // offset: 0x34 (52)
  USHORT Type;                                        // offset: 0x36 (54)
  USHORT DataInfoOffset;                              // offset: 0x38 (56)
  UCHAR SignalCompletion;                             // offset: 0x3a (58)
  UCHAR PostedToCompletionList;                       // offset: 0x3b (59)
};

// 0x28 (40) bytes
struct _KALPC_RESERVE {
  struct _ALPC_PORT *OwnerPort;           // offset: 0x0 (0)
  struct _ALPC_HANDLE_TABLE *HandleTable; // offset: 0x8 (8)
  VOID *Handle;                           // offset: 0x10 (16)
  struct _KALPC_MESSAGE *Message;         // offset: 0x18 (24)
  LONG Active;                            // offset: 0x20 (32)
};

// 0x48 (72) bytes
struct _ALPC_COMMUNICATION_INFO {
  struct _ALPC_PORT *ConnectionPort;          // offset: 0x0 (0)
  struct _ALPC_PORT *ServerCommunicationPort; // offset: 0x8 (8)
  struct _ALPC_PORT *ClientCommunicationPort; // offset: 0x10 (16)
  struct _LIST_ENTRY CommunicationList;       // offset: 0x18 (24)
  struct _ALPC_HANDLE_TABLE HandleTable;      // offset: 0x28 (40)
  struct _KALPC_MESSAGE *CloseMessage;        // offset: 0x40 (64)
};

// 0xa0 (160) bytes
struct _ALPC_COMPLETION_LIST {
  struct _LIST_ENTRY Entry;                    // offset: 0x0 (0)
  struct _EPROCESS *OwnerProcess;              // offset: 0x10 (16)
  struct _EX_PUSH_LOCK CompletionListLock;     // offset: 0x18 (24)
  struct _MDL *Mdl;                            // offset: 0x20 (32)
  VOID *UserVa;                                // offset: 0x28 (40)
  VOID *UserLimit;                             // offset: 0x30 (48)
  VOID *DataUserVa;                            // offset: 0x38 (56)
  VOID *SystemVa;                              // offset: 0x40 (64)
  ULONGLONG TotalSize;                         // offset: 0x48 (72)
  struct _ALPC_COMPLETION_LIST_HEADER *Header; // offset: 0x50 (80)
  VOID *List;                                  // offset: 0x58 (88)
  ULONGLONG ListSize;                          // offset: 0x60 (96)
  VOID *Bitmap;                                // offset: 0x68 (104)
  ULONGLONG BitmapSize;                        // offset: 0x70 (112)
  VOID *Data;                                  // offset: 0x78 (120)
  ULONGLONG DataSize;                          // offset: 0x80 (128)
  ULONG BitmapLimit;                           // offset: 0x88 (136)
  ULONG BitmapNextHint;                        // offset: 0x8c (140)
  ULONG ConcurrencyCount;                      // offset: 0x90 (144)
  ULONG AttributeFlags;                        // offset: 0x94 (148)
  ULONG AttributeSize;                         // offset: 0x98 (152)
};

// 0x1d8 (472) bytes
struct _ALPC_PORT {
  struct _LIST_ENTRY PortListEntry;                   // offset: 0x0 (0)
  struct _ALPC_COMMUNICATION_INFO *CommunicationInfo; // offset: 0x10 (16)
  struct _EPROCESS *OwnerProcess;                     // offset: 0x18 (24)
  VOID *CompletionPort;                               // offset: 0x20 (32)
  VOID *CompletionKey;                                // offset: 0x28 (40)
  struct _ALPC_COMPLETION_PACKET_LOOKASIDE
      *CompletionPacketLookaside;                 // offset: 0x30 (48)
  VOID *PortContext;                              // offset: 0x38 (56)
  struct _SECURITY_CLIENT_CONTEXT StaticSecurity; // offset: 0x40 (64)
  struct _EX_PUSH_LOCK IncomingQueueLock;         // offset: 0x88 (136)
  struct _LIST_ENTRY MainQueue;                   // offset: 0x90 (144)
  struct _LIST_ENTRY LargeMessageQueue;           // offset: 0xa0 (160)
  struct _EX_PUSH_LOCK PendingQueueLock;          // offset: 0xb0 (176)
  struct _LIST_ENTRY PendingQueue;                // offset: 0xb8 (184)
  struct _EX_PUSH_LOCK DirectQueueLock;           // offset: 0xc8 (200)
  struct _LIST_ENTRY DirectQueue;                 // offset: 0xd0 (208)
  struct _EX_PUSH_LOCK WaitQueueLock;             // offset: 0xe0 (224)
  struct _LIST_ENTRY WaitQueue;                   // offset: 0xe8 (232)
  union {
    struct _KSEMAPHORE *Semaphore; // offset: 0xf8 (248)
    struct _KEVENT *DummyEvent;    // offset: 0xf8 (248)
  };
  struct _ALPC_PORT_ATTRIBUTES PortAttributes;  // offset: 0x100 (256)
  struct _EX_PUSH_LOCK ResourceListLock;        // offset: 0x148 (328)
  struct _LIST_ENTRY ResourceListHead;          // offset: 0x150 (336)
  struct _EX_PUSH_LOCK PortObjectLock;          // offset: 0x160 (352)
  struct _ALPC_COMPLETION_LIST *CompletionList; // offset: 0x168 (360)
  struct _CALLBACK_OBJECT *CallbackObject;      // offset: 0x170 (368)
  VOID *CallbackContext;                        // offset: 0x178 (376)
  struct _LIST_ENTRY CanceledQueue;             // offset: 0x180 (384)
  LONG SequenceNo;                              // offset: 0x190 (400)
  LONG ReferenceNo;                             // offset: 0x194 (404)
  struct _PALPC_PORT_REFERENCE_WAIT_BLOCK
      *ReferenceNoWait; // offset: 0x198 (408)
  union {
    struct {
      ULONG Initialized : 1;          // offset: 0x0 (0)
      ULONG Type : 2;                 // offset: 0x0 (0)
      ULONG ConnectionPending : 1;    // offset: 0x0 (0)
      ULONG ConnectionRefused : 1;    // offset: 0x0 (0)
      ULONG Disconnected : 1;         // offset: 0x0 (0)
      ULONG Closed : 1;               // offset: 0x0 (0)
      ULONG NoFlushOnClose : 1;       // offset: 0x0 (0)
      ULONG ReturnExtendedInfo : 1;   // offset: 0x0 (0)
      ULONG Waitable : 1;             // offset: 0x0 (0)
      ULONG DynamicSecurity : 1;      // offset: 0x0 (0)
      ULONG Wow64CompletionList : 1;  // offset: 0x0 (0)
      ULONG Lpc : 1;                  // offset: 0x0 (0)
      ULONG LpcToLpc : 1;             // offset: 0x0 (0)
      ULONG HasCompletionList : 1;    // offset: 0x0 (0)
      ULONG HadCompletionList : 1;    // offset: 0x0 (0)
      ULONG EnableCompletionList : 1; // offset: 0x0 (0)
    } s1;                             // offset: 0x1a0 (416)
    ULONG State;                      // offset: 0x1a0 (416)

  } u1;                                  // offset: 0x1a0 (416)
  struct _ALPC_PORT *TargetQueuePort;    // offset: 0x1a8 (424)
  struct _ALPC_PORT *TargetSequencePort; // offset: 0x1b0 (432)
  struct _KALPC_MESSAGE *CachedMessage;  // offset: 0x1b8 (440)
  ULONG MainQueueLength;                 // offset: 0x1c0 (448)
  ULONG LargeMessageQueueLength;         // offset: 0x1c4 (452)
  ULONG PendingQueueLength;              // offset: 0x1c8 (456)
  ULONG DirectQueueLength;               // offset: 0x1cc (460)
  ULONG CanceledQueueLength;             // offset: 0x1d0 (464)
  ULONG WaitQueueLength;                 // offset: 0x1d4 (468)
};

// 0x48 (72) bytes
struct _KALPC_SECTION {
  VOID *SectionObject;                    // offset: 0x0 (0)
  ULONGLONG Size;                         // offset: 0x8 (8)
  struct _ALPC_HANDLE_TABLE *HandleTable; // offset: 0x10 (16)
  VOID *SectionHandle;                    // offset: 0x18 (24)
  struct _EPROCESS *OwnerProcess;         // offset: 0x20 (32)
  struct _ALPC_PORT *OwnerPort;           // offset: 0x28 (40)
  union {
    struct {
      ULONG Internal : 1; // offset: 0x0 (0)
      ULONG Secure : 1;   // offset: 0x0 (0)
    } s1;                 // offset: 0x30 (48)

  } u1;                              // offset: 0x30 (48)
  ULONG NumberOfRegions;             // offset: 0x34 (52)
  struct _LIST_ENTRY RegionListHead; // offset: 0x38 (56)
};

// 0x58 (88) bytes
struct _KALPC_REGION {
  struct _LIST_ENTRY RegionListEntry; // offset: 0x0 (0)
  struct _KALPC_SECTION *Section;     // offset: 0x10 (16)
  ULONGLONG Offset;                   // offset: 0x18 (24)
  ULONGLONG Size;                     // offset: 0x20 (32)
  ULONGLONG ViewSize;                 // offset: 0x28 (40)
  union {
    struct {
      ULONG Secure : 1; // offset: 0x0 (0)
    } s1;               // offset: 0x30 (48)

  } u1;                              // offset: 0x30 (48)
  ULONG NumberOfViews;               // offset: 0x34 (52)
  struct _LIST_ENTRY ViewListHead;   // offset: 0x38 (56)
  struct _KALPC_VIEW *ReadOnlyView;  // offset: 0x48 (72)
  struct _KALPC_VIEW *ReadWriteView; // offset: 0x50 (80)
};

// 0x60 (96) bytes
struct _KALPC_VIEW {
  struct _LIST_ENTRY ViewListEntry; // offset: 0x0 (0)
  struct _KALPC_REGION *Region;     // offset: 0x10 (16)
  struct _ALPC_PORT *OwnerPort;     // offset: 0x18 (24)
  struct _EPROCESS *OwnerProcess;   // offset: 0x20 (32)
  VOID *Address;                    // offset: 0x28 (40)
  ULONGLONG Size;                   // offset: 0x30 (48)
  VOID *SecureViewHandle;           // offset: 0x38 (56)
  VOID *WriteAccessHandle;          // offset: 0x40 (64)
  union {
    struct {
      ULONG WriteAccess : 1; // offset: 0x0 (0)
      ULONG AutoRelease : 1; // offset: 0x0 (0)
      ULONG ForceUnlink : 1; // offset: 0x0 (0)
    } s1;                    // offset: 0x48 (72)

  } u1;                                    // offset: 0x48 (72)
  ULONG NumberOfOwnerMessages;             // offset: 0x4c (76)
  struct _LIST_ENTRY ProcessViewListEntry; // offset: 0x50 (80)
};

// 0x70 (112) bytes
struct _WORK_QUEUE_ENTRY {
  struct _LIST_ENTRY WorkQueueLinks; // offset: 0x0 (0)
  union {
    struct {
      struct _FILE_OBJECT *FileObject; // offset: 0x0 (0)
    } Read;                            // offset: 0x10 (16)
    struct {
      struct _SHARED_CACHE_MAP *SharedCacheMap; // offset: 0x0 (0)
    } Write;                                    // offset: 0x10 (16)
    struct {
      struct _KEVENT *Event; // offset: 0x0 (0)
    } Event;                 // offset: 0x10 (16)
    struct {
      ULONG Reason; // offset: 0x0 (0)
    } Notification; // offset: 0x10 (16)
    struct {
      struct _SHARED_CACHE_MAP *SharedCacheMap; // offset: 0x0 (0)
      struct _IO_STATUS_BLOCK *IoStatus;        // offset: 0x8 (8)
      struct _KEVENT CallerWaitEvent;           // offset: 0x10 (16)
      UCHAR IsLowPriWriteBehind;                // offset: 0x28 (40)
    } LowPriWrite;                              // offset: 0x10 (16)
    struct {
      struct _SHARED_CACHE_MAP *SharedCacheMap;       // offset: 0x0 (0)
      union _LARGE_INTEGER FileOffset;                // offset: 0x8 (8)
      struct _FILE_OBJECT *FileObject;                // offset: 0x10 (16)
      ULONG Length;                                   // offset: 0x18 (24)
      struct _SINGLE_LIST_ENTRY *PrefetchList;        // offset: 0x20 (32)
      ULONG PrefetchPagePriority;                     // offset: 0x28 (40)
      struct _MDL *Mdl;                               // offset: 0x30 (48)
      struct _IO_STATUS_BLOCK *IoStatusBlock;         // offset: 0x38 (56)
      struct _CC_ASYNC_READ_CONTEXT *CallbackContext; // offset: 0x40 (64)
      struct _EPROCESS *OriginatingProcess;           // offset: 0x48 (72)
      CHAR RequestorMode;                             // offset: 0x50 (80)
      ULONG NestingLevel;                             // offset: 0x54 (84)
    } AsyncRead;                                      // offset: 0x10 (16)

  } Parameters;   // offset: 0x10 (16)
  UCHAR Function; // offset: 0x68 (104)
};

// 0x48 (72) bytes
struct _MM_PAGE_ACCESS_INFO_HEADER {
  struct _SINGLE_LIST_ENTRY Link; // offset: 0x0 (0)
  enum _MM_PAGE_ACCESS_TYPE Type; // offset: 0x8 (8)
  union {
    ULONG EmptySequenceNumber; // offset: 0xc (12)
    ULONG CurrentFileIndex;    // offset: 0xc (12)
  };
  ULONGLONG CreateTime; // offset: 0x10 (16)
  union {
    ULONGLONG EmptyTime;                    // offset: 0x18 (24)
    struct _MM_PAGE_ACCESS_INFO *TempEntry; // offset: 0x18 (24)
  };
  union {
    struct {
      struct _MM_PAGE_ACCESS_INFO *PageEntry; // offset: 0x20 (32)
      ULONGLONG *FileEntry;                   // offset: 0x28 (40)
      ULONGLONG *FirstFileEntry;              // offset: 0x30 (48)
      struct _EPROCESS *Process;              // offset: 0x38 (56)
      ULONG SessionId;                        // offset: 0x40 (64)
    };
    struct {
      ULONGLONG *PageFrameEntry;     // offset: 0x20 (32)
      ULONGLONG *LastPageFrameEntry; // offset: 0x28 (40)
    };
  };
};

// 0xc0 (192) bytes
struct _MI_STANDBY_STATE {
  volatile ULONGLONG TransitionSharedPages;            // offset: 0x0 (0)
  ULONGLONG TransitionSharedPagesPeak[3];              // offset: 0x8 (8)
  ULONGLONG FirstDecayPage;                            // offset: 0x20 (32)
  union _SLIST_HEADER PfnDecayFreeSList;               // offset: 0x30 (48)
  struct _MM_PAGE_ACCESS_INFO_HEADER *PfnRepurposeLog; // offset: 0x40 (64)
  struct _KDPC AllocatePfnRepurposeDpc;                // offset: 0x48 (72)
};

// 0x80 (128) bytes
struct _MI_ACCESS_LOG_STATE {
  struct _MM_PAGE_ACCESS_INFO_HEADER *volatile CcAccessLog; // offset: 0x0 (0)
  ULONG Enabled;                                            // offset: 0x8 (8)
  struct _WORK_QUEUE_ITEM DisableAccessLogging;             // offset: 0x10 (16)
  ULONG MinLoggingPriority;                                 // offset: 0x30 (48)
  ULONGLONG AccessLoggingLock;                              // offset: 0x40 (64)
};

// 0x48 (72) bytes
struct _SEGMENT {
  struct _CONTROL_AREA *ControlArea;  // offset: 0x0 (0)
  ULONG TotalNumberOfPtes;            // offset: 0x8 (8)
  struct _SEGMENT_FLAGS SegmentFlags; // offset: 0xc (12)
  ULONGLONG NumberOfCommittedPages;   // offset: 0x10 (16)
  ULONGLONG SizeOfSegment;            // offset: 0x18 (24)
  union {
    struct _MMEXTEND_INFO *ExtendInfo; // offset: 0x20 (32)
    VOID *BasedAddress;                // offset: 0x20 (32)
  };
  struct _EX_PUSH_LOCK SegmentLock; // offset: 0x28 (40)
  union {
    ULONGLONG ImageCommitment;         // offset: 0x30 (48)
    struct _EPROCESS *CreatingProcess; // offset: 0x30 (48)

  } u1; // offset: 0x30 (48)
  union {
    struct _MI_SECTION_IMAGE_INFORMATION *ImageInformation; // offset: 0x38 (56)
    VOID *FirstMappedVa;                                    // offset: 0x38 (56)

  } u2;                        // offset: 0x38 (56)
  struct _MMPTE *PrototypePte; // offset: 0x40 (64)
};

// 0x78 (120) bytes
struct _CONTROL_AREA {
  struct _SEGMENT *Segment;            // offset: 0x0 (0)
  struct _LIST_ENTRY ListHead;         // offset: 0x8 (8)
  ULONGLONG NumberOfSectionReferences; // offset: 0x18 (24)
  ULONGLONG NumberOfPfnReferences;     // offset: 0x20 (32)
  ULONGLONG NumberOfMappedViews;       // offset: 0x28 (40)
  ULONGLONG NumberOfUserReferences;    // offset: 0x30 (48)
  union {
    ULONG LongFlags;               // offset: 0x38 (56)
    struct _MMSECTION_FLAGS Flags; // offset: 0x38 (56)

  } u; // offset: 0x38 (56)
  union {
    ULONG LongFlags;                // offset: 0x3c (60)
    struct _MMSECTION_FLAGS2 Flags; // offset: 0x3c (60)

  } u1;                                         // offset: 0x3c (60)
  struct _EX_FAST_REF FilePointer;              // offset: 0x40 (64)
  volatile LONG ControlAreaLock;                // offset: 0x48 (72)
  ULONG ModifiedWriteCount;                     // offset: 0x4c (76)
  struct _MI_CONTROL_AREA_WAIT_BLOCK *WaitList; // offset: 0x50 (80)
  union {
    struct {
      union {
        ULONG NumberOfSystemCacheViews; // offset: 0x0 (0)
        ULONG ImageRelocationStartBit;  // offset: 0x0 (0)
      };
      union {
        volatile LONG WritableUserReferences; // offset: 0x4 (4)
        struct {
          ULONG ImageRelocationSizeIn64k : 16; // offset: 0x4 (4)
          ULONG Unused : 9;                    // offset: 0x4 (4)
          ULONG SystemImage : 1;               // offset: 0x4 (4)
          ULONG StrongCode : 2;                // offset: 0x4 (4)
          ULONG CantMove : 1;                  // offset: 0x4 (4)
          ULONG BitMap : 2;                    // offset: 0x4 (4)
          ULONG ImageActive : 1;               // offset: 0x4 (4)
        };
      };
      union {
        ULONG FlushInProgressCount;                       // offset: 0x8 (8)
        ULONG NumberOfSubsections;                        // offset: 0x8 (8)
        struct _MI_IMAGE_SECURITY_REFERENCE *SeImageStub; // offset: 0x8 (8)
      };
    } e2; // offset: 0x58 (88)

  } u2;                                // offset: 0x58 (88)
  volatile ULONGLONG LockedPages;      // offset: 0x68 (104)
  struct _EX_PUSH_LOCK FileObjectLock; // offset: 0x70 (112)
};

// 0x280 (640) bytes
struct _MI_SECTION_STATE {
  volatile LONG SectionObjectPointersLock;         // offset: 0x0 (0)
  struct _EX_PUSH_LOCK SectionExtendLock;          // offset: 0x8 (8)
  struct _EX_PUSH_LOCK SectionExtendSetLock;       // offset: 0x10 (16)
  struct _RTL_AVL_TREE SectionBasedRoot;           // offset: 0x18 (24)
  struct _EX_PUSH_LOCK SectionBasedLock;           // offset: 0x20 (32)
  ULONGLONG UnusedSubsectionPagedPool;             // offset: 0x28 (40)
  ULONG UnusedSegmentForceFree;                    // offset: 0x30 (48)
  ULONG DataSectionProtectionMask;                 // offset: 0x34 (52)
  VOID *HighSectionBase;                           // offset: 0x38 (56)
  struct _MSUBSECTION PhysicalSubsection;          // offset: 0x40 (64)
  struct _CONTROL_AREA PhysicalControlArea;        // offset: 0xb0 (176)
  struct _MMPFN *DanglingExtentsPages;             // offset: 0x128 (296)
  volatile LONG DanglingExtentsLock;               // offset: 0x130 (304)
  struct _WORK_QUEUE_ITEM DanglingExtentsWorkItem; // offset: 0x138 (312)
  UCHAR DanglingExtentsWorkerActive;               // offset: 0x158 (344)
  struct _RTL_AVL_TREE PageFileSectionHead;        // offset: 0x160 (352)
  volatile LONG PageFileSectionListSpinLock;       // offset: 0x168 (360)
  struct _MI_CROSS_PARTITION_CHARGES
      SharedSegmentCharges; // offset: 0x170 (368)
  struct _MI_CROSS_PARTITION_CHARGES
      SharedPageCombineCharges;                 // offset: 0x198 (408)
  ULONG ImageBias;                              // offset: 0x1c0 (448)
  struct _EX_PUSH_LOCK RelocateBitmapsLock;     // offset: 0x1c8 (456)
  struct _RTL_BITMAP ImageBitMap;               // offset: 0x1d0 (464)
  ULONG ImageBias64Low;                         // offset: 0x1e0 (480)
  ULONG ImageBias64High;                        // offset: 0x1e4 (484)
  struct _RTL_BITMAP ImageBitMap64Low;          // offset: 0x1e8 (488)
  struct _RTL_BITMAP ImageBitMap64High;         // offset: 0x1f8 (504)
  struct _RTL_BITMAP ImageBitMapWow64Dll;       // offset: 0x208 (520)
  VOID *ApiSetSection;                          // offset: 0x218 (536)
  VOID *ApiSetSchema;                           // offset: 0x220 (544)
  ULONGLONG ApiSetSchemaSize;                   // offset: 0x228 (552)
  ULONG LostDataFiles;                          // offset: 0x230 (560)
  ULONG LostDataPages;                          // offset: 0x234 (564)
  ULONG ImageFailureReason;                     // offset: 0x238 (568)
  struct _SECTION *CfgBitMapSection32;          // offset: 0x240 (576)
  struct _CONTROL_AREA *CfgBitMapControlArea32; // offset: 0x248 (584)
  struct _SECTION *CfgBitMapSection64;          // offset: 0x250 (592)
  struct _CONTROL_AREA *CfgBitMapControlArea64; // offset: 0x258 (600)
  ULONG ImageCfgFailure;                        // offset: 0x260 (608)
  volatile LONG ImageValidationFailed;          // offset: 0x264 (612)
};

// 0x88 (136) bytes
struct _MMVAD {
  struct _MMVAD_SHORT Core; // offset: 0x0 (0)
  union {
    ULONG LongFlags2;               // offset: 0x40 (64)
    struct _MMVAD_FLAGS2 VadFlags2; // offset: 0x40 (64)

  } u2;                             // offset: 0x40 (64)
  struct _SUBSECTION *Subsection;   // offset: 0x48 (72)
  struct _MMPTE *FirstPrototypePte; // offset: 0x50 (80)
  struct _MMPTE *LastContiguousPte; // offset: 0x58 (88)
  struct _LIST_ENTRY ViewLinks;     // offset: 0x60 (96)
  struct _EPROCESS *VadsProcess;    // offset: 0x70 (112)
  union {
    struct _MI_VAD_SEQUENTIAL_INFO SequentialVa; // offset: 0x78 (120)
    struct _MMEXTEND_INFO *ExtendedInfo;         // offset: 0x78 (120)

  } u4;                            // offset: 0x78 (120)
  struct _FILE_OBJECT *FileObject; // offset: 0x80 (128)
};

// 0x18 (24) bytes
struct _MI_CFG_BITMAP_INFO {
  VOID *BaseAddress;        // offset: 0x0 (0)
  ULONGLONG RegionSize;     // offset: 0x8 (8)
  struct _MMVAD *BitmapVad; // offset: 0x10 (16)
};

// 0x158 (344) bytes
struct _MI_USER_VA_INFO {
  ULONG NumberOfCommittedPageTables;               // offset: 0x0 (0)
  VOID *HighestTopDownAllocationAddress;           // offset: 0x8 (8)
  struct _MI_VAD_ALLOCATION_CELL VadCell[2];       // offset: 0x10 (16)
  ULONG VadBitMapCommitment;                       // offset: 0x60 (96)
  ULONG MaximumLastVadBit;                         // offset: 0x64 (100)
  LONG VadsBeingDeleted;                           // offset: 0x68 (104)
  LONG NumberOfDebugEnclaves;                      // offset: 0x6c (108)
  ULONGLONG PhysicalMappingCount;                  // offset: 0x70 (112)
  struct _KEVENT *LastVadDeletionEvent;            // offset: 0x78 (120)
  struct _LIST_ENTRY SubVadRanges[3];              // offset: 0x80 (128)
  UCHAR NumaAware;                                 // offset: 0xb0 (176)
  ULONGLONG CloneNestingLevel;                     // offset: 0xb8 (184)
  ULONGLONG PrivateFixupVadCount;                  // offset: 0xc0 (192)
  struct _MI_CFG_BITMAP_INFO CfgBitMap[2];         // offset: 0xc8 (200)
  ULONG CommittedPageTableBufferForTopLevel[8];    // offset: 0xf8 (248)
  struct _RTL_BITMAP CommittedPageTableBitmaps[3]; // offset: 0x118 (280)
  ULONG PageTableBitmapPages[3];                   // offset: 0x148 (328)
};

// 0x350 (848) bytes
struct _MMWSL {
  ULONGLONG FirstFree;                              // offset: 0x0 (0)
  ULONGLONG FirstDynamic;                           // offset: 0x8 (8)
  ULONGLONG LastEntry;                              // offset: 0x10 (16)
  ULONGLONG NextSlot;                               // offset: 0x18 (24)
  ULONGLONG LastInitializedWsle;                    // offset: 0x20 (32)
  ULONGLONG NextAgingSlot;                          // offset: 0x28 (40)
  ULONGLONG NextAccessClearingSlot;                 // offset: 0x30 (48)
  ULONG LastAccessClearingRemainder;                // offset: 0x38 (56)
  ULONG LastAgingRemainder;                         // offset: 0x3c (60)
  ULONG WsleSize;                                   // offset: 0x40 (64)
  ULONGLONG NonDirectCount;                         // offset: 0x48 (72)
  VOID *LowestPagableAddress;                       // offset: 0x50 (80)
  struct _MMWSLE_NONDIRECT_HASH *NonDirectHash;     // offset: 0x58 (88)
  struct _MMWSLE_HASH *HashTableStart;              // offset: 0x60 (96)
  struct _MMWSLE_HASH *HighestPermittedHashAddress; // offset: 0x68 (104)
  ULONGLONG ActiveWsleCounts[16];                   // offset: 0x70 (112)
  struct _MI_ACTIVE_WSLE_LISTHEAD ActiveWsles[16];  // offset: 0xf0 (240)
  struct _MMWSLE *Wsle;                             // offset: 0x1f0 (496)
  struct _MI_USER_VA_INFO UserVaInfo;               // offset: 0x1f8 (504)
};

// 0x88 (136) bytes
struct _MI_SESSION_STATE {
  struct _MMSESSION SystemSession;     // offset: 0x0 (0)
  UCHAR CodePageEdited;                // offset: 0x20 (32)
  ULONG *DynamicVaBitBuffer;           // offset: 0x28 (40)
  ULONGLONG DynamicVaBitBufferPages;   // offset: 0x30 (48)
  ULONG *DynamicPoolBitBuffer;         // offset: 0x38 (56)
  VOID *DynamicVaStart;                // offset: 0x40 (64)
  ULONG *DynamicPtesBitBuffer;         // offset: 0x48 (72)
  struct _EX_PUSH_LOCK IdLock;         // offset: 0x50 (80)
  ULONG DetachTimeStamp;               // offset: 0x58 (88)
  struct _EPROCESS *LeaderProcess;     // offset: 0x60 (96)
  struct _EX_PUSH_LOCK InitializeLock; // offset: 0x68 (104)
  struct _MMWSL *WorkingSetList;       // offset: 0x70 (112)
  struct _MMWSLE_HASH *WsHashStart;    // offset: 0x78 (120)
  struct _MMWSLE_HASH *WsHashEnd;      // offset: 0x80 (128)
};

// 0x80 (128) bytes
struct _HANDLE_TABLE {
  ULONG NextHandleNeedingPool;        // offset: 0x0 (0)
  LONG ExtraInfoPages;                // offset: 0x4 (4)
  volatile ULONGLONG TableCode;       // offset: 0x8 (8)
  struct _EPROCESS *QuotaProcess;     // offset: 0x10 (16)
  struct _LIST_ENTRY HandleTableList; // offset: 0x18 (24)
  ULONG UniqueProcessId;              // offset: 0x28 (40)
  union {
    ULONG Flags; // offset: 0x2c (44)
    struct {
      UCHAR StrictFIFO : 1;                           // offset: 0x2c (44)
      UCHAR EnableHandleExceptions : 1;               // offset: 0x2c (44)
      UCHAR Rundown : 1;                              // offset: 0x2c (44)
      UCHAR Duplicated : 1;                           // offset: 0x2c (44)
      UCHAR RaiseUMExceptionOnInvalidHandleClose : 1; // offset: 0x2c (44)
    };
  };
  struct _EX_PUSH_LOCK HandleContentionEvent; // offset: 0x30 (48)
  struct _EX_PUSH_LOCK HandleTableLock;       // offset: 0x38 (56)
  union {
    struct _HANDLE_TABLE_FREE_LIST FreeLists[1]; // offset: 0x40 (64)
    struct {
      UCHAR ActualEntry[32];                      // offset: 0x40 (64)
      struct _HANDLE_TRACE_DEBUG_INFO *DebugInfo; // offset: 0x60 (96)
    };
  };
};

// 0xe0 (224) bytes
struct _FAST_IO_DISPATCH {
  ULONG SizeOfFastIoDispatch; // offset: 0x0 (0)
  UCHAR(*FastIoCheckIfPossible)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   UCHAR arg4, ULONG arg5, UCHAR arg6, struct _IO_STATUS_BLOCK *arg7,
   struct _DEVICE_OBJECT *arg8); // offset: 0x8 (8)
  UCHAR(*FastIoRead)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   UCHAR arg4, ULONG arg5, VOID *arg6, struct _IO_STATUS_BLOCK *arg7,
   struct _DEVICE_OBJECT *arg8); // offset: 0x10 (16)
  UCHAR(*FastIoWrite)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   UCHAR arg4, ULONG arg5, VOID *arg6, struct _IO_STATUS_BLOCK *arg7,
   struct _DEVICE_OBJECT *arg8); // offset: 0x18 (24)
  UCHAR(*FastIoQueryBasicInfo)
  (struct _FILE_OBJECT *arg1, UCHAR arg2, struct _FILE_BASIC_INFORMATION *arg3,
   struct _IO_STATUS_BLOCK *arg4,
   struct _DEVICE_OBJECT *arg5); // offset: 0x20 (32)
  UCHAR(*FastIoQueryStandardInfo)
  (struct _FILE_OBJECT *arg1, UCHAR arg2,
   struct _FILE_STANDARD_INFORMATION *arg3, struct _IO_STATUS_BLOCK *arg4,
   struct _DEVICE_OBJECT *arg5); // offset: 0x28 (40)
  UCHAR(*FastIoLock)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2,
   union _LARGE_INTEGER *arg3, struct _EPROCESS *arg4, ULONG arg5, UCHAR arg6,
   UCHAR arg7, struct _IO_STATUS_BLOCK *arg8,
   struct _DEVICE_OBJECT *arg9); // offset: 0x30 (48)
  UCHAR(*FastIoUnlockSingle)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2,
   union _LARGE_INTEGER *arg3, struct _EPROCESS *arg4, ULONG arg5,
   struct _IO_STATUS_BLOCK *arg6,
   struct _DEVICE_OBJECT *arg7); // offset: 0x38 (56)
  UCHAR(*FastIoUnlockAll)
  (struct _FILE_OBJECT *arg1, struct _EPROCESS *arg2,
   struct _IO_STATUS_BLOCK *arg3,
   struct _DEVICE_OBJECT *arg4); // offset: 0x40 (64)
  UCHAR(*FastIoUnlockAllByKey)
  (struct _FILE_OBJECT *arg1, VOID *arg2, ULONG arg3,
   struct _IO_STATUS_BLOCK *arg4,
   struct _DEVICE_OBJECT *arg5); // offset: 0x48 (72)
  UCHAR(*FastIoDeviceControl)
  (struct _FILE_OBJECT *arg1, UCHAR arg2, VOID *arg3, ULONG arg4, VOID *arg5,
   ULONG arg6, ULONG arg7, struct _IO_STATUS_BLOCK *arg8,
   struct _DEVICE_OBJECT *arg9); // offset: 0x50 (80)
  VOID(*AcquireFileForNtCreateSection)
  (struct _FILE_OBJECT *arg1); // offset: 0x58 (88)
  VOID(*ReleaseFileForNtCreateSection)
  (struct _FILE_OBJECT *arg1); // offset: 0x60 (96)
  VOID(*FastIoDetachDevice)
  (struct _DEVICE_OBJECT *arg1,
   struct _DEVICE_OBJECT *arg2); // offset: 0x68 (104)
  UCHAR(*FastIoQueryNetworkOpenInfo)
  (struct _FILE_OBJECT *arg1, UCHAR arg2,
   struct _FILE_NETWORK_OPEN_INFORMATION *arg3, struct _IO_STATUS_BLOCK *arg4,
   struct _DEVICE_OBJECT *arg5); // offset: 0x70 (112)
  LONG(*AcquireForModWrite)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2,
   struct _ERESOURCE **arg3, struct _DEVICE_OBJECT *arg4); // offset: 0x78 (120)
  UCHAR(*MdlRead)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   ULONG arg4, struct _MDL **arg5, struct _IO_STATUS_BLOCK *arg6,
   struct _DEVICE_OBJECT *arg7); // offset: 0x80 (128)
  UCHAR(*MdlReadComplete)
  (struct _FILE_OBJECT *arg1, struct _MDL *arg2,
   struct _DEVICE_OBJECT *arg3); // offset: 0x88 (136)
  UCHAR(*PrepareMdlWrite)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   ULONG arg4, struct _MDL **arg5, struct _IO_STATUS_BLOCK *arg6,
   struct _DEVICE_OBJECT *arg7); // offset: 0x90 (144)
  UCHAR(*MdlWriteComplete)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, struct _MDL *arg3,
   struct _DEVICE_OBJECT *arg4); // offset: 0x98 (152)
  UCHAR(*FastIoReadCompressed)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   ULONG arg4, VOID *arg5, struct _MDL **arg6, struct _IO_STATUS_BLOCK *arg7,
   struct _COMPRESSED_DATA_INFO *arg8, ULONG arg9,
   struct _DEVICE_OBJECT *arg10); // offset: 0xa0 (160)
  UCHAR(*FastIoWriteCompressed)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   ULONG arg4, VOID *arg5, struct _MDL **arg6, struct _IO_STATUS_BLOCK *arg7,
   struct _COMPRESSED_DATA_INFO *arg8, ULONG arg9,
   struct _DEVICE_OBJECT *arg10); // offset: 0xa8 (168)
  UCHAR(*MdlReadCompleteCompressed)
  (struct _FILE_OBJECT *arg1, struct _MDL *arg2,
   struct _DEVICE_OBJECT *arg3); // offset: 0xb0 (176)
  UCHAR(*MdlWriteCompleteCompressed)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, struct _MDL *arg3,
   struct _DEVICE_OBJECT *arg4); // offset: 0xb8 (184)
  UCHAR(*FastIoQueryOpen)
  (struct _IRP *arg1, struct _FILE_NETWORK_OPEN_INFORMATION *arg2,
   struct _DEVICE_OBJECT *arg3); // offset: 0xc0 (192)
  LONG(*ReleaseForModWrite)
  (struct _FILE_OBJECT *arg1, struct _ERESOURCE *arg2,
   struct _DEVICE_OBJECT *arg3); // offset: 0xc8 (200)
  LONG(*AcquireForCcFlush)
  (struct _FILE_OBJECT *arg1,
   struct _DEVICE_OBJECT *arg2); // offset: 0xd0 (208)
  LONG(*ReleaseForCcFlush)
  (struct _FILE_OBJECT *arg1,
   struct _DEVICE_OBJECT *arg2); // offset: 0xd8 (216)
};

// 0x150 (336) bytes
struct _DRIVER_OBJECT {
  SHORT Type;                                // offset: 0x0 (0)
  SHORT Size;                                // offset: 0x2 (2)
  struct _DEVICE_OBJECT *DeviceObject;       // offset: 0x8 (8)
  ULONG Flags;                               // offset: 0x10 (16)
  VOID *DriverStart;                         // offset: 0x18 (24)
  ULONG DriverSize;                          // offset: 0x20 (32)
  VOID *DriverSection;                       // offset: 0x28 (40)
  struct _DRIVER_EXTENSION *DriverExtension; // offset: 0x30 (48)
  struct _UNICODE_STRING DriverName;         // offset: 0x38 (56)
  struct _UNICODE_STRING *HardwareDatabase;  // offset: 0x48 (72)
  struct _FAST_IO_DISPATCH *FastIoDispatch;  // offset: 0x50 (80)
  LONG(*DriverInit)
  (struct _DRIVER_OBJECT *arg1,
   struct _UNICODE_STRING *arg2); // offset: 0x58 (88)
  VOID(*DriverStartIo)
  (struct _DEVICE_OBJECT *arg1, struct _IRP *arg2);  // offset: 0x60 (96)
  VOID (*DriverUnload)(struct _DRIVER_OBJECT *arg1); // offset: 0x68 (104)
  LONG(*MajorFunction[28])
  (struct _DEVICE_OBJECT *arg1, struct _IRP *arg2); // offset: 0x70 (112)
};

// 0x100 (256) bytes
struct _VF_DRIVER_IO_CALLBACKS {
  LONG(*DriverInit)
  (struct _DRIVER_OBJECT *arg1,
   struct _UNICODE_STRING *arg2); // offset: 0x0 (0)
  VOID(*DriverStartIo)
  (struct _DEVICE_OBJECT *arg1, struct _IRP *arg2);  // offset: 0x8 (8)
  VOID (*DriverUnload)(struct _DRIVER_OBJECT *arg1); // offset: 0x10 (16)
  LONG(*AddDevice)
  (struct _DRIVER_OBJECT *arg1,
   struct _DEVICE_OBJECT *arg2); // offset: 0x18 (24)
  LONG(*MajorFunction[28])
  (struct _DEVICE_OBJECT *arg1, struct _IRP *arg2); // offset: 0x20 (32)
};

// 0x50 (80) bytes
struct _DRIVER_EXTENSION {
  struct _DRIVER_OBJECT *DriverObject; // offset: 0x0 (0)
  LONG(*AddDevice)
  (struct _DRIVER_OBJECT *arg1, struct _DEVICE_OBJECT *arg2); // offset: 0x8 (8)
  ULONG Count;                                        // offset: 0x10 (16)
  struct _UNICODE_STRING ServiceKeyName;              // offset: 0x18 (24)
  struct _IO_CLIENT_EXTENSION *ClientDriverExtension; // offset: 0x28 (40)
  struct _FS_FILTER_CALLBACKS *FsFilterCallbacks;     // offset: 0x30 (48)
  VOID *KseCallbacks;                                 // offset: 0x38 (56)
  VOID *DvCallbacks;                                  // offset: 0x40 (64)
  VOID *VerifierContext;                              // offset: 0x48 (72)
};

// 0x150 (336) bytes
struct _DEVICE_OBJECT {
  SHORT Type;                            // offset: 0x0 (0)
  USHORT Size;                           // offset: 0x2 (2)
  LONG ReferenceCount;                   // offset: 0x4 (4)
  struct _DRIVER_OBJECT *DriverObject;   // offset: 0x8 (8)
  struct _DEVICE_OBJECT *NextDevice;     // offset: 0x10 (16)
  struct _DEVICE_OBJECT *AttachedDevice; // offset: 0x18 (24)
  struct _IRP *CurrentIrp;               // offset: 0x20 (32)
  struct _IO_TIMER *Timer;               // offset: 0x28 (40)
  ULONG Flags;                           // offset: 0x30 (48)
  ULONG Characteristics;                 // offset: 0x34 (52)
  struct _VPB *Vpb;                      // offset: 0x38 (56)
  VOID *DeviceExtension;                 // offset: 0x40 (64)
  ULONG DeviceType;                      // offset: 0x48 (72)
  CHAR StackSize;                        // offset: 0x4c (76)
  union {
    struct _LIST_ENTRY ListEntry;   // offset: 0x50 (80)
    struct _WAIT_CONTEXT_BLOCK Wcb; // offset: 0x50 (80)

  } Queue;                                         // offset: 0x50 (80)
  ULONG AlignmentRequirement;                      // offset: 0x98 (152)
  struct _KDEVICE_QUEUE DeviceQueue;               // offset: 0xa0 (160)
  struct _KDPC Dpc;                                // offset: 0xc8 (200)
  ULONG ActiveThreadCount;                         // offset: 0x108 (264)
  VOID *SecurityDescriptor;                        // offset: 0x110 (272)
  struct _KEVENT DeviceLock;                       // offset: 0x118 (280)
  USHORT SectorSize;                               // offset: 0x130 (304)
  USHORT Spare1;                                   // offset: 0x132 (306)
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // offset: 0x138 (312)
  VOID *Reserved;                                  // offset: 0x140 (320)
};

// 0x30 (48) bytes
struct _MDL {
  struct _MDL *Next;                // offset: 0x0 (0)
  SHORT Size;                       // offset: 0x8 (8)
  SHORT MdlFlags;                   // offset: 0xa (10)
  USHORT AllocationProcessorNumber; // offset: 0xc (12)
  USHORT Reserved;                  // offset: 0xe (14)
  struct _EPROCESS *Process;        // offset: 0x10 (16)
  VOID *MappedSystemVa;             // offset: 0x18 (24)
  VOID *StartVa;                    // offset: 0x20 (32)
  ULONG ByteCount;                  // offset: 0x28 (40)
  ULONG ByteOffset;                 // offset: 0x2c (44)
};

// 0x78 (120) bytes
struct _MI_PAGEFILE_TRACES {
  LONG Status;                                  // offset: 0x0 (0)
  USHORT PartitionId;                           // offset: 0x4 (4)
  UCHAR Priority;                               // offset: 0x6 (6)
  UCHAR IrpPriority;                            // offset: 0x7 (7)
  UCHAR ReservationWrite;                       // offset: 0x8 (8)
  union _LARGE_INTEGER CurrentTime;             // offset: 0x10 (16)
  ULONGLONG AvailablePages;                     // offset: 0x18 (24)
  ULONGLONG ModifiedPagesTotal;                 // offset: 0x20 (32)
  ULONGLONG ModifiedPagefilePages;              // offset: 0x28 (40)
  ULONGLONG ModifiedNoWritePages;               // offset: 0x30 (48)
  ULONGLONG ModifiedPagefileNoReservationPages; // offset: 0x38 (56)
  struct {
    struct _MDL Mdl;   // offset: 0x0 (0)
    ULONGLONG Page[1]; // offset: 0x30 (48)
  } MdlHack;           // offset: 0x40 (64)
};

// 0x1100 (4352) bytes
struct _MI_VISIBLE_PARTITION {
  ULONGLONG LowestPhysicalPage;                  // offset: 0x0 (0)
  ULONGLONG HighestPhysicalPage;                 // offset: 0x8 (8)
  ULONGLONG NumberOfPhysicalPages;               // offset: 0x10 (16)
  volatile ULONG NumberOfPagingFiles;            // offset: 0x18 (24)
  struct _MMPAGING_FILE *PagingFile[16];         // offset: 0x20 (32)
  volatile ULONGLONG AvailablePages;             // offset: 0xc0 (192)
  volatile ULONGLONG ResidentAvailablePages;     // offset: 0x100 (256)
  volatile ULONGLONG TotalCommittedPages;        // offset: 0x108 (264)
  struct _MMPFNLIST ModifiedPageListHead;        // offset: 0x140 (320)
  struct _MMPFNLIST ModifiedNoWritePageListHead; // offset: 0x180 (384)
  ULONGLONG TotalCommitLimit;                    // offset: 0x1a8 (424)
  ULONGLONG TotalPagesForPagingFile;             // offset: 0x1b0 (432)
  ULONGLONG VadPhysicalPages;                    // offset: 0x1b8 (440)
  ULONGLONG ProcessLockedFilePages;              // offset: 0x1c0 (448)
  ULONG ChargeCommitmentFailures[4];             // offset: 0x1c8 (456)
  volatile ULONGLONG PageTableBitmapPages;       // offset: 0x1d8 (472)
  volatile LONG PageFileTraceIndex;              // offset: 0x1e0 (480)
  struct _MI_PAGEFILE_TRACES PageFileTraces[32]; // offset: 0x1e8 (488)
};

// 0x2700 (9984) bytes
struct _MI_PARTITION {
  struct _MI_PARTITION_CORE Core;                // offset: 0x0 (0)
  struct _MI_PARTITION_MODWRITES Modwriter;      // offset: 0x158 (344)
  struct _MI_PARTITION_STORES Store;             // offset: 0x430 (1072)
  struct _MI_PARTITION_SEGMENTS Segments;        // offset: 0x4c0 (1216)
  struct _MI_PARTITION_PAGE_LISTS PageLists;     // offset: 0x640 (1600)
  struct _MI_PARTITION_COMMIT Commit;            // offset: 0x1340 (4928)
  struct _MI_PARTITION_ZEROING Zeroing;          // offset: 0x13c0 (5056)
  struct _MI_PAGE_COMBINING_SUPPORT PageCombine; // offset: 0x1428 (5160)
  VOID *WorkingSetControl;                       // offset: 0x15b0 (5552)
  struct _MMWORKING_SET_EXPANSION_HEAD
      WorkingSetExpansionHead;     // offset: 0x15b8 (5560)
  struct _MI_VISIBLE_PARTITION Vp; // offset: 0x1600 (5632)
};

// 0x60 (96) bytes
struct _MI_PARTITION_STATE {
  ULONGLONG PartitionLock;                        // offset: 0x0 (0)
  struct _EX_PUSH_LOCK PartitionIdLock;           // offset: 0x8 (8)
  ULONGLONG InitialPartitionIdBits;               // offset: 0x10 (16)
  struct _LIST_ENTRY PartitionList;               // offset: 0x18 (24)
  struct _RTL_BITMAP *PartitionIdBitmap;          // offset: 0x28 (40)
  struct _RTL_BITMAP InitialPartitionIdBitmap;    // offset: 0x30 (48)
  struct _MI_PARTITION *TempPartitionPointers[1]; // offset: 0x40 (64)
  struct _MI_PARTITION **Partition;               // offset: 0x48 (72)
  ULONGLONG TotalPagesInChildPartitions;          // offset: 0x50 (80)
  ULONG CrossPartitionDenials;                    // offset: 0x58 (88)
};

// 0x1bc0 (7104) bytes
struct _MI_SYSTEM_INFORMATION {
  struct _MI_POOL_STATE Pools;                // offset: 0x0 (0)
  struct _MI_SECTION_STATE Sections;          // offset: 0x100 (256)
  struct _MI_SYSTEM_IMAGE_STATE SystemImages; // offset: 0x380 (896)
  struct _MI_SESSION_STATE Sessions;          // offset: 0x440 (1088)
  struct _MI_PROCESS_STATE Processes;         // offset: 0x4d0 (1232)
  struct _MI_HARDWARE_STATE Hardware;         // offset: 0x530 (1328)
  struct _MI_SYSTEM_VA_STATE SystemVa;        // offset: 0x600 (1536)
  struct _MI_COMBINE_STATE PageCombines;      // offset: 0x8c0 (2240)
  struct _MI_PARTITION_STATE Partitions;      // offset: 0xa60 (2656)
  struct _MI_SHUTDOWN_STATE Shutdowns;        // offset: 0xac0 (2752)
  struct _MI_ERROR_STATE Errors;              // offset: 0xb40 (2880)
  struct _MI_ACCESS_LOG_STATE AccessLog;      // offset: 0xc00 (3072)
  struct _MI_DEBUGGER_STATE Debugger;         // offset: 0xc80 (3200)
  struct _MI_STANDBY_STATE Standby;           // offset: 0xdc0 (3520)
  struct _MI_SYSTEM_PTE_STATE SystemPtes;     // offset: 0xe80 (3712)
  struct _MI_IO_PAGE_STATE IoPages;           // offset: 0x1000 (4096)
  struct _MI_PAGING_IO_STATE PagingIo;        // offset: 0x1060 (4192)
  struct _MI_COMMON_PAGE_STATE CommonPages;   // offset: 0x10b0 (4272)
  struct _MI_SYSTEM_TRIM_STATE Trims;         // offset: 0x1180 (4480)
  struct _MI_RESAVAIL_TRACKER ResTrack;       // offset: 0x11c0 (4544)
  ULONGLONG Cookie;                           // offset: 0x1540 (5440)
  volatile LONG ZeroingDisabled;              // offset: 0x1548 (5448)
  VOID *volatile *BootRegistryRuns;           // offset: 0x1550 (5456)
  UCHAR FullyInitialized;                     // offset: 0x1558 (5464)
  UCHAR SafeBooted;                           // offset: 0x1559 (5465)
  struct _RTL_BITMAP_EX LargePfnBitMap;       // offset: 0x1560 (5472)
  struct _TlgProvider_t *TraceLogging;        // offset: 0x1570 (5488)
  struct _MI_VISIBLE_STATE Vs;                // offset: 0x1580 (5504)
};

// 0x108 (264) bytes
struct _MMMOD_WRITER_MDL_ENTRY {
  struct _LIST_ENTRY Links; // offset: 0x0 (0)
  union {
    struct _IO_STATUS_BLOCK IoStatus; // offset: 0x10 (16)

  } u;                                  // offset: 0x10 (16)
  struct _IRP *Irp;                     // offset: 0x20 (32)
  struct _MODWRITER_FLAGS u1;           // offset: 0x28 (40)
  ULONG StoreWriteRefCount;             // offset: 0x2c (44)
  struct _KAPC StoreWriteCompletionApc; // offset: 0x30 (48)
  ULONG ByteCount;                      // offset: 0x88 (136)
  ULONG ChargedPages;                   // offset: 0x8c (140)
  struct _MMPAGING_FILE *PagingFile;    // offset: 0x90 (144)
  struct _FILE_OBJECT *File;            // offset: 0x98 (152)
  struct _CONTROL_AREA *ControlArea;    // offset: 0xa0 (160)
  struct _ERESOURCE *FileResource;      // offset: 0xa8 (168)
  union _LARGE_INTEGER WriteOffset;     // offset: 0xb0 (176)
  union _LARGE_INTEGER IssueTime;       // offset: 0xb8 (184)
  struct _MI_PARTITION *Partition;      // offset: 0xc0 (192)
  struct _MDL *PointerMdl;              // offset: 0xc8 (200)
  struct _MDL Mdl;                      // offset: 0xd0 (208)
  ULONGLONG Page[1];                    // offset: 0x100 (256)
};

// 0x120 (288) bytes
struct _MMPAGING_FILE {
  ULONGLONG Size;                                // offset: 0x0 (0)
  ULONGLONG MaximumSize;                         // offset: 0x8 (8)
  ULONGLONG MinimumSize;                         // offset: 0x10 (16)
  ULONGLONG FreeSpace;                           // offset: 0x18 (24)
  ULONGLONG PeakUsage;                           // offset: 0x20 (32)
  ULONGLONG HighestPage;                         // offset: 0x28 (40)
  ULONGLONG FreeReservationSpace;                // offset: 0x30 (48)
  struct _FILE_OBJECT *File;                     // offset: 0x38 (56)
  struct _MMMOD_WRITER_MDL_ENTRY *Entry[2];      // offset: 0x40 (64)
  union _SLIST_HEADER PfnsToFree;                // offset: 0x50 (80)
  struct _UNICODE_STRING PageFileName;           // offset: 0x60 (96)
  struct _MI_PAGING_FILE_SPACE_BITMAPS *Bitmaps; // offset: 0x70 (112)
  ULONG AllocationBitmapHint;                    // offset: 0x78 (120)
  ULONG LargestAllocationCluster;                // offset: 0x7c (124)
  ULONG RefreshAllocationCluster;                // offset: 0x80 (128)
  ULONG LastRefreshAllocationCluster;            // offset: 0x84 (132)
  ULONG ReservedClusterSizeAggregate;            // offset: 0x88 (136)
  ULONG MaximumRunLengthInBitmaps;               // offset: 0x8c (140)
  struct _RTL_RB_TREE BitmapsCacheLengthTree;    // offset: 0x90 (144)
  struct _RTL_RB_TREE BitmapsCacheLocationTree;  // offset: 0xa0 (160)
  struct _LIST_ENTRY BitmapsCacheFreeList;       // offset: 0xb0 (176)
  struct _MI_PAGEFILE_BITMAPS_CACHE_ENTRY
      *BitmapsCacheEntries; // offset: 0xc0 (192)
  union {
    ULONG ToBeEvictedCount; // offset: 0xc8 (200)
    ULONG HybridPriority;   // offset: 0xc8 (200)
  };
  USHORT PageFileNumber : 4;                // offset: 0xcc (204)
  USHORT WsSwapPagefile : 1;                // offset: 0xcc (204)
  USHORT NoReservations : 1;                // offset: 0xcc (204)
  USHORT VirtualStorePagefile : 1;          // offset: 0xcc (204)
  USHORT SwapSupported : 1;                 // offset: 0xcc (204)
  USHORT NodeInserted : 1;                  // offset: 0xcc (204)
  USHORT StackNotified : 1;                 // offset: 0xcc (204)
  USHORT Spare0 : 5;                        // offset: 0xcc (204)
  UCHAR AdriftMdls : 1;                     // offset: 0xce (206)
  UCHAR Spare1 : 7;                         // offset: 0xce (206)
  UCHAR IgnoreReservations : 1;             // offset: 0xcf (207)
  UCHAR Spare2 : 7;                         // offset: 0xcf (207)
  ULONG PageHashPages;                      // offset: 0xd0 (208)
  ULONG PageHashPagesPeak;                  // offset: 0xd4 (212)
  ULONG *PageHash;                          // offset: 0xd8 (216)
  VOID *FileHandle;                         // offset: 0xe0 (224)
  ULONGLONG Lock;                           // offset: 0xe8 (232)
  struct _ETHREAD *LockOwner;               // offset: 0xf0 (240)
  struct _RTL_AVL_TREE FlowThroughReadRoot; // offset: 0xf8 (248)
  struct _MI_PARTITION *Partition;          // offset: 0x100 (256)
  struct _RTL_BALANCED_NODE FileObjectNode; // offset: 0x108 (264)
};

// 0x1b0 (432) bytes
struct _MMINPAGE_SUPPORT {
  struct _LIST_ENTRY ListEntry;     // offset: 0x0 (0)
  struct _LIST_ENTRY ListHead;      // offset: 0x10 (16)
  struct _KEVENT Event;             // offset: 0x20 (32)
  struct _KEVENT CollidedEvent;     // offset: 0x38 (56)
  struct _IO_STATUS_BLOCK IoStatus; // offset: 0x50 (80)
  union _LARGE_INTEGER ReadOffset;  // offset: 0x60 (96)
  struct _KAPC_STATE ApcState;      // offset: 0x68 (104)
  struct _ETHREAD *Thread;          // offset: 0x98 (152)
  struct _MMPFN *LockedProtoPfn;    // offset: 0xa0 (160)
  struct _MMPTE PteContents;        // offset: 0xa8 (168)
  volatile LONG WaitCount;          // offset: 0xb0 (176)
  ULONG ByteCount;                  // offset: 0xb4 (180)
  union {
    ULONG ImagePteOffset; // offset: 0xb8 (184)
    ULONG TossPage;       // offset: 0xb8 (184)

  } u3; // offset: 0xb8 (184)
  union {
    struct _MMINPAGE_FLAGS e1; // offset: 0xbc (188)
    ULONG LongFlags;           // offset: 0xbc (188)

  } u1;                             // offset: 0xbc (188)
  struct _FILE_OBJECT *FilePointer; // offset: 0xc0 (192)
  union {
    struct _CONTROL_AREA *ControlArea; // offset: 0xc8 (200)
    struct _SUBSECTION *Subsection;    // offset: 0xc8 (200)
  };
  VOID *Autoboost;           // offset: 0xd0 (208)
  VOID *FaultingAddress;     // offset: 0xd8 (216)
  struct _MMPTE *PointerPte; // offset: 0xe0 (224)
  struct _MMPTE *BasePte;    // offset: 0xe8 (232)
  struct _MMPFN *Pfn;        // offset: 0xf0 (240)
  struct _MDL *PrefetchMdl;  // offset: 0xf8 (248)
  struct _MDL Mdl;           // offset: 0x100 (256)
  union {
    ULONGLONG Page[16];                                // offset: 0x130 (304)
    struct _MMINPAGE_SUPPORT_FLOW_THROUGH FlowThrough; // offset: 0x130 (304)
  };
};

// 0x40 (64) bytes
struct _MI_VAD_EVENT_BLOCK {
  struct _MI_VAD_EVENT_BLOCK *Next; // offset: 0x0 (0)
  ULONG WaitReason;                 // offset: 0x8 (8)
  union {
    struct _KGATE Gate;                          // offset: 0x10 (16)
    struct _MMADDRESS_LIST SecureInfo;           // offset: 0x10 (16)
    struct _RTL_BITMAP_EX BitMap;                // offset: 0x10 (16)
    struct _MMINPAGE_SUPPORT *InPageSupport;     // offset: 0x10 (16)
    struct _MI_LARGEPAGE_MEMORY_INFO *LargePage; // offset: 0x10 (16)
    struct _ETHREAD *CreatingThread;             // offset: 0x10 (16)
    struct _MI_SUB64K_FREE_RANGES PebTeb;        // offset: 0x10 (16)
  };
};

// 0x528 (1320) bytes
struct _EJOB {
  struct _KEVENT Event;                                  // offset: 0x0 (0)
  struct _LIST_ENTRY JobLinks;                           // offset: 0x18 (24)
  struct _LIST_ENTRY ProcessListHead;                    // offset: 0x28 (40)
  struct _ERESOURCE JobLock;                             // offset: 0x38 (56)
  union _LARGE_INTEGER TotalUserTime;                    // offset: 0xa0 (160)
  union _LARGE_INTEGER TotalKernelTime;                  // offset: 0xa8 (168)
  union _LARGE_INTEGER TotalCycleTime;                   // offset: 0xb0 (176)
  union _LARGE_INTEGER ThisPeriodTotalUserTime;          // offset: 0xb8 (184)
  union _LARGE_INTEGER ThisPeriodTotalKernelTime;        // offset: 0xc0 (192)
  ULONGLONG TotalContextSwitches;                        // offset: 0xc8 (200)
  ULONG TotalPageFaultCount;                             // offset: 0xd0 (208)
  ULONG TotalProcesses;                                  // offset: 0xd4 (212)
  ULONG ActiveProcesses;                                 // offset: 0xd8 (216)
  ULONG TotalTerminatedProcesses;                        // offset: 0xdc (220)
  union _LARGE_INTEGER PerProcessUserTimeLimit;          // offset: 0xe0 (224)
  union _LARGE_INTEGER PerJobUserTimeLimit;              // offset: 0xe8 (232)
  ULONGLONG MinimumWorkingSetSize;                       // offset: 0xf0 (240)
  ULONGLONG MaximumWorkingSetSize;                       // offset: 0xf8 (248)
  ULONG LimitFlags;                                      // offset: 0x100 (256)
  ULONG ActiveProcessLimit;                              // offset: 0x104 (260)
  struct _KAFFINITY_EX Affinity;                         // offset: 0x108 (264)
  struct _JOB_ACCESS_STATE *AccessState;                 // offset: 0x1b0 (432)
  VOID *AccessStateQuotaReference;                       // offset: 0x1b8 (440)
  ULONG UIRestrictionsClass;                             // offset: 0x1c0 (448)
  ULONG EndOfJobTimeAction;                              // offset: 0x1c4 (452)
  VOID *CompletionPort;                                  // offset: 0x1c8 (456)
  VOID *CompletionKey;                                   // offset: 0x1d0 (464)
  ULONGLONG CompletionCount;                             // offset: 0x1d8 (472)
  ULONG SessionId;                                       // offset: 0x1e0 (480)
  ULONG SchedulingClass;                                 // offset: 0x1e4 (484)
  ULONGLONG ReadOperationCount;                          // offset: 0x1e8 (488)
  ULONGLONG WriteOperationCount;                         // offset: 0x1f0 (496)
  ULONGLONG OtherOperationCount;                         // offset: 0x1f8 (504)
  ULONGLONG ReadTransferCount;                           // offset: 0x200 (512)
  ULONGLONG WriteTransferCount;                          // offset: 0x208 (520)
  ULONGLONG OtherTransferCount;                          // offset: 0x210 (528)
  struct _PROCESS_DISK_COUNTERS DiskIoInfo;              // offset: 0x218 (536)
  ULONGLONG ProcessMemoryLimit;                          // offset: 0x240 (576)
  ULONGLONG JobMemoryLimit;                              // offset: 0x248 (584)
  ULONGLONG JobTotalMemoryLimit;                         // offset: 0x250 (592)
  ULONGLONG PeakProcessMemoryUsed;                       // offset: 0x258 (600)
  ULONGLONG PeakJobMemoryUsed;                           // offset: 0x260 (608)
  struct _KAFFINITY_EX EffectiveAffinity;                // offset: 0x268 (616)
  union _LARGE_INTEGER EffectivePerProcessUserTimeLimit; // offset: 0x310 (784)
  ULONGLONG EffectiveMinimumWorkingSetSize;              // offset: 0x318 (792)
  ULONGLONG EffectiveMaximumWorkingSetSize;              // offset: 0x320 (800)
  ULONGLONG EffectiveProcessMemoryLimit;                 // offset: 0x328 (808)
  struct _EJOB *EffectiveProcessMemoryLimitJob;          // offset: 0x330 (816)
  struct _EJOB *EffectivePerProcessUserTimeLimitJob;     // offset: 0x338 (824)
  struct _EJOB *EffectiveDiskIoRateLimitJob;             // offset: 0x340 (832)
  struct _EJOB *EffectiveNetIoRateLimitJob;              // offset: 0x348 (840)
  struct _EJOB *EffectiveHeapAttributionJob;             // offset: 0x350 (848)
  ULONG EffectiveLimitFlags;                             // offset: 0x358 (856)
  ULONG EffectiveSchedulingClass;                        // offset: 0x35c (860)
  ULONG EffectiveFreezeCount;                            // offset: 0x360 (864)
  ULONG EffectiveBackgroundCount;                        // offset: 0x364 (868)
  ULONG EffectiveSwapCount;                              // offset: 0x368 (872)
  ULONG EffectiveNotificationLimitCount;                 // offset: 0x36c (876)
  UCHAR EffectivePriorityClass;                          // offset: 0x370 (880)
  UCHAR PriorityClass;                                   // offset: 0x371 (881)
  UCHAR NestingDepth;                                    // offset: 0x372 (882)
  UCHAR Reserved1[1];                                    // offset: 0x373 (883)
  ULONG CompletionFilter;                                // offset: 0x374 (884)
  union {
    struct _WNF_STATE_NAME WakeChannel;   // offset: 0x378 (888)
    struct _PS_WAKE_INFORMATION WakeInfo; // offset: 0x378 (888)
  };
  struct _JOBOBJECT_WAKE_FILTER WakeFilter;               // offset: 0x3b0 (944)
  ULONG LowEdgeLatchFilter;                               // offset: 0x3b8 (952)
  ULONG OwnedHighEdgeFilters;                             // offset: 0x3bc (956)
  struct _EJOB *NotificationLink;                         // offset: 0x3c0 (960)
  ULONGLONG CurrentJobMemoryUsed;                         // offset: 0x3c8 (968)
  struct _JOB_NOTIFICATION_INFORMATION *NotificationInfo; // offset: 0x3d0 (976)
  VOID *NotificationInfoQuotaReference;                   // offset: 0x3d8 (984)
  struct _IO_MINI_COMPLETION_PACKET_USER
      *NotificationPacket;                      // offset: 0x3e0 (992)
  struct _JOB_CPU_RATE_CONTROL *CpuRateControl; // offset: 0x3e8 (1000)
  VOID *EffectiveSchedulingGroup;               // offset: 0x3f0 (1008)
  ULONGLONG ReadyTime;                          // offset: 0x3f8 (1016)
  struct _EX_PUSH_LOCK MemoryLimitsLock;        // offset: 0x400 (1024)
  struct _LIST_ENTRY SiblingJobLinks;           // offset: 0x408 (1032)
  struct _LIST_ENTRY ChildJobListHead;          // offset: 0x418 (1048)
  struct _EJOB *ParentJob;                      // offset: 0x428 (1064)
  struct _EJOB *volatile RootJob;               // offset: 0x430 (1072)
  struct _LIST_ENTRY IteratorListHead;          // offset: 0x438 (1080)
  ULONGLONG AncestorCount;                      // offset: 0x448 (1096)
  union {
    struct _EJOB **Ancestors; // offset: 0x450 (1104)
    VOID *SessionObject;      // offset: 0x450 (1104)
  };
  struct _EPROCESS_VALUES Accounting;           // offset: 0x458 (1112)
  ULONG ShadowActiveProcessCount;               // offset: 0x4a8 (1192)
  ULONG ActiveAuxiliaryProcessCount;            // offset: 0x4ac (1196)
  ULONG SequenceNumber;                         // offset: 0x4b0 (1200)
  ULONGLONG TimerListLock;                      // offset: 0x4b8 (1208)
  struct _LIST_ENTRY TimerListHead;             // offset: 0x4c0 (1216)
  struct _GUID ContainerId;                     // offset: 0x4d0 (1232)
  struct _SILO_CONTEXT *Container;              // offset: 0x4e0 (1248)
  struct _PS_PROPERTY_SET PropertySet;          // offset: 0x4e8 (1256)
  struct _JOB_NET_RATE_CONTROL *NetRateControl; // offset: 0x500 (1280)
  struct _JOB_IO_RATE_CONTROL *IoRateControl;   // offset: 0x508 (1288)
  union {
    ULONG JobFlags; // offset: 0x510 (1296)
    struct {
      ULONG CloseDone : 1;                     // offset: 0x510 (1296)
      ULONG MultiGroup : 1;                    // offset: 0x510 (1296)
      ULONG OutstandingNotification : 1;       // offset: 0x510 (1296)
      ULONG NotificationInProgress : 1;        // offset: 0x510 (1296)
      ULONG UILimits : 1;                      // offset: 0x510 (1296)
      ULONG CpuRateControlActive : 1;          // offset: 0x510 (1296)
      ULONG OwnCpuRateControl : 1;             // offset: 0x510 (1296)
      ULONG Terminating : 1;                   // offset: 0x510 (1296)
      ULONG WorkingSetLock : 1;                // offset: 0x510 (1296)
      ULONG JobFrozen : 1;                     // offset: 0x510 (1296)
      ULONG Background : 1;                    // offset: 0x510 (1296)
      ULONG WakeNotificationAllocated : 1;     // offset: 0x510 (1296)
      ULONG WakeNotificationEnabled : 1;       // offset: 0x510 (1296)
      ULONG WakeNotificationPending : 1;       // offset: 0x510 (1296)
      ULONG LimitNotificationRequired : 1;     // offset: 0x510 (1296)
      ULONG ZeroCountNotificationRequired : 1; // offset: 0x510 (1296)
      ULONG CycleTimeNotificationRequired : 1; // offset: 0x510 (1296)
      ULONG CycleTimeNotificationPending : 1;  // offset: 0x510 (1296)
      ULONG TimersVirtualized : 1;             // offset: 0x510 (1296)
      ULONG JobSwapped : 1;                    // offset: 0x510 (1296)
      ULONG ViolationDetected : 1;             // offset: 0x510 (1296)
      ULONG EmptyJobNotified : 1;              // offset: 0x510 (1296)
      ULONG NoSystemCharge : 1;                // offset: 0x510 (1296)
      ULONG DropNoWakeCharges : 1;             // offset: 0x510 (1296)
      ULONG NoWakeChargePolicyDecided : 1;     // offset: 0x510 (1296)
      ULONG NetRateControlActive : 1;          // offset: 0x510 (1296)
      ULONG OwnNetRateControl : 1;             // offset: 0x510 (1296)
      ULONG IoRateControlActive : 1;           // offset: 0x510 (1296)
      ULONG OwnIoRateControl : 1;              // offset: 0x510 (1296)
      ULONG DisallowNewProcesses : 1;          // offset: 0x510 (1296)
      ULONG SpareJobFlags : 2;                 // offset: 0x510 (1296)
    };
  };
  ULONG EffectiveHighEdgeFilters;              // offset: 0x514 (1300)
  struct _PROCESS_ENERGY_VALUES *EnergyValues; // offset: 0x518 (1304)
  volatile ULONGLONG SharedCommitCharge;       // offset: 0x520 (1312)
};

// 0x40 (64) bytes
struct _THREAD_ENERGY_VALUES {
  ULONGLONG Cycles[4][2]; // offset: 0x0 (0)
};

// 0x6900 (26880) bytes
struct _KPRCB {
  ULONG MxCsr;                    // offset: 0x0 (0)
  UCHAR LegacyNumber;             // offset: 0x4 (4)
  UCHAR ReservedMustBeZero;       // offset: 0x5 (5)
  UCHAR InterruptRequest;         // offset: 0x6 (6)
  UCHAR IdleHalt;                 // offset: 0x7 (7)
  struct _KTHREAD *CurrentThread; // offset: 0x8 (8)
  struct _KTHREAD *NextThread;    // offset: 0x10 (16)
  struct _KTHREAD *IdleThread;    // offset: 0x18 (24)
  UCHAR NestingLevel;             // offset: 0x20 (32)
  UCHAR ClockOwner;               // offset: 0x21 (33)
  union {
    UCHAR PendingTickFlags; // offset: 0x22 (34)
    struct {
      UCHAR PendingTick : 1;       // offset: 0x22 (34)
      UCHAR PendingBackupTick : 1; // offset: 0x22 (34)
    };
  };
  UCHAR IdleState;                         // offset: 0x23 (35)
  ULONG Number;                            // offset: 0x24 (36)
  ULONGLONG RspBase;                       // offset: 0x28 (40)
  ULONGLONG PrcbLock;                      // offset: 0x30 (48)
  CHAR *PriorityState;                     // offset: 0x38 (56)
  struct _KPROCESSOR_STATE ProcessorState; // offset: 0x40 (64)
  CHAR CpuType;                            // offset: 0x5f0 (1520)
  CHAR CpuID;                              // offset: 0x5f1 (1521)
  union {
    USHORT CpuStep; // offset: 0x5f2 (1522)
    struct {
      UCHAR CpuStepping; // offset: 0x5f2 (1522)
      UCHAR CpuModel;    // offset: 0x5f3 (1523)
    };
  };
  ULONG MHz;                                     // offset: 0x5f4 (1524)
  ULONGLONG HalReserved[8];                      // offset: 0x5f8 (1528)
  USHORT MinorVersion;                           // offset: 0x638 (1592)
  USHORT MajorVersion;                           // offset: 0x63a (1594)
  UCHAR BuildType;                               // offset: 0x63c (1596)
  UCHAR CpuVendor;                               // offset: 0x63d (1597)
  UCHAR CoresPerPhysicalProcessor;               // offset: 0x63e (1598)
  UCHAR LogicalProcessorsPerCore;                // offset: 0x63f (1599)
  struct _KNODE *ParentNode;                     // offset: 0x640 (1600)
  ULONGLONG GroupSetMember;                      // offset: 0x648 (1608)
  UCHAR Group;                                   // offset: 0x650 (1616)
  UCHAR GroupIndex;                              // offset: 0x651 (1617)
  UCHAR PrcbPad05[2];                            // offset: 0x652 (1618)
  ULONG InitialApicId;                           // offset: 0x654 (1620)
  ULONG ScbOffset;                               // offset: 0x658 (1624)
  ULONG ApicMask;                                // offset: 0x65c (1628)
  VOID *AcpiReserved;                            // offset: 0x660 (1632)
  ULONG CFlushSize;                              // offset: 0x668 (1640)
  ULONG PrcbPad10;                               // offset: 0x66c (1644)
  struct _KSPIN_LOCK_QUEUE LockQueue[17];        // offset: 0x670 (1648)
  struct _PP_LOOKASIDE_LIST PPLookasideList[16]; // offset: 0x780 (1920)
  struct _GENERAL_LOOKASIDE_POOL
      PPNxPagedLookasideList[32]; // offset: 0x880 (2176)
  struct _GENERAL_LOOKASIDE_POOL
      PPNPagedLookasideList[32]; // offset: 0x1480 (5248)
  struct _GENERAL_LOOKASIDE_POOL
      PPPagedLookasideList[32];                    // offset: 0x2080 (8320)
  ULONGLONG PrcbPad20;                             // offset: 0x2c80 (11392)
  struct _SINGLE_LIST_ENTRY DeferredReadyListHead; // offset: 0x2c88 (11400)
  volatile LONG MmPageFaultCount;                  // offset: 0x2c90 (11408)
  volatile LONG MmCopyOnWriteCount;                // offset: 0x2c94 (11412)
  volatile LONG MmTransitionCount;                 // offset: 0x2c98 (11416)
  volatile LONG MmDemandZeroCount;                 // offset: 0x2c9c (11420)
  volatile LONG MmPageReadCount;                   // offset: 0x2ca0 (11424)
  volatile LONG MmPageReadIoCount;                 // offset: 0x2ca4 (11428)
  volatile LONG MmDirtyPagesWriteCount;            // offset: 0x2ca8 (11432)
  volatile LONG MmDirtyWriteIoCount;               // offset: 0x2cac (11436)
  volatile LONG MmMappedPagesWriteCount;           // offset: 0x2cb0 (11440)
  volatile LONG MmMappedWriteIoCount;              // offset: 0x2cb4 (11444)
  ULONG KeSystemCalls;                             // offset: 0x2cb8 (11448)
  ULONG KeContextSwitches;                         // offset: 0x2cbc (11452)
  USHORT LdtSelector;                              // offset: 0x2cc0 (11456)
  USHORT PrcbPad40;                                // offset: 0x2cc2 (11458)
  ULONG CcFastReadNoWait;                          // offset: 0x2cc4 (11460)
  ULONG CcFastReadWait;                            // offset: 0x2cc8 (11464)
  ULONG CcFastReadNotPossible;                     // offset: 0x2ccc (11468)
  ULONG CcCopyReadNoWait;                          // offset: 0x2cd0 (11472)
  ULONG CcCopyReadWait;                            // offset: 0x2cd4 (11476)
  ULONG CcCopyReadNoWaitMiss;                      // offset: 0x2cd8 (11480)
  volatile LONG IoReadOperationCount;              // offset: 0x2cdc (11484)
  volatile LONG IoWriteOperationCount;             // offset: 0x2ce0 (11488)
  volatile LONG IoOtherOperationCount;             // offset: 0x2ce4 (11492)
  union _LARGE_INTEGER IoReadTransferCount;        // offset: 0x2ce8 (11496)
  union _LARGE_INTEGER IoWriteTransferCount;       // offset: 0x2cf0 (11504)
  union _LARGE_INTEGER IoOtherTransferCount;       // offset: 0x2cf8 (11512)
  volatile LONG PacketBarrier;                     // offset: 0x2d00 (11520)
  volatile LONG TargetCount;                       // offset: 0x2d04 (11524)
  volatile ULONG IpiFrozen;                        // offset: 0x2d08 (11528)
  VOID *IsrDpcStats;                               // offset: 0x2d10 (11536)
  ULONG DeviceInterrupts;                          // offset: 0x2d18 (11544)
  LONG LookasideIrpFloat;                          // offset: 0x2d1c (11548)
  ULONG InterruptLastCount;                        // offset: 0x2d20 (11552)
  ULONG InterruptRate;                             // offset: 0x2d24 (11556)
  ULONG PrcbPad41[22];                             // offset: 0x2d28 (11560)
  struct _KDPC_DATA DpcData[2];                    // offset: 0x2d80 (11648)
  VOID *DpcStack;                                  // offset: 0x2dd0 (11728)
  LONG MaximumDpcQueueDepth;                       // offset: 0x2dd8 (11736)
  ULONG DpcRequestRate;                            // offset: 0x2ddc (11740)
  ULONG MinimumDpcRate;                            // offset: 0x2de0 (11744)
  ULONG DpcLastCount;                              // offset: 0x2de4 (11748)
  UCHAR ThreadDpcEnable;                           // offset: 0x2de8 (11752)
  volatile UCHAR QuantumEnd;                       // offset: 0x2de9 (11753)
  volatile UCHAR DpcRoutineActive;                 // offset: 0x2dea (11754)
  volatile UCHAR IdleSchedule;                     // offset: 0x2deb (11755)
  union {
    volatile LONG DpcRequestSummary; // offset: 0x2dec (11756)
    SHORT DpcRequestSlot[2];         // offset: 0x2dec (11756)
    struct {
      SHORT NormalDpcState; // offset: 0x2dec (11756)
      SHORT ThreadDpcState; // offset: 0x2dee (11758)
    };
    struct {
      ULONG DpcNormalProcessingActive : 1;    // offset: 0x2dec (11756)
      ULONG DpcNormalProcessingRequested : 1; // offset: 0x2dec (11756)
      ULONG DpcNormalThreadSignal : 1;        // offset: 0x2dec (11756)
      ULONG DpcNormalTimerExpiration : 1;     // offset: 0x2dec (11756)
      ULONG DpcNormalDpcPresent : 1;          // offset: 0x2dec (11756)
      ULONG DpcNormalLocalInterrupt : 1;      // offset: 0x2dec (11756)
      ULONG DpcNormalSpare : 10;              // offset: 0x2dec (11756)
      ULONG DpcThreadActive : 1;              // offset: 0x2dec (11756)
      ULONG DpcThreadRequested : 1;           // offset: 0x2dec (11756)
      ULONG DpcThreadSpare : 14;              // offset: 0x2dec (11756)
    };
  };
  ULONG LastTimerHand;                            // offset: 0x2df0 (11760)
  ULONG LastTick;                                 // offset: 0x2df4 (11764)
  ULONG ClockInterrupts;                          // offset: 0x2df8 (11768)
  ULONG ReadyScanTick;                            // offset: 0x2dfc (11772)
  VOID *InterruptObject[256];                     // offset: 0x2e00 (11776)
  struct _KTIMER_TABLE TimerTable;                // offset: 0x3600 (13824)
  struct _KGATE DpcGate;                          // offset: 0x5800 (22528)
  VOID *PrcbPad52;                                // offset: 0x5818 (22552)
  struct _KDPC CallDpc;                           // offset: 0x5820 (22560)
  LONG ClockKeepAlive;                            // offset: 0x5860 (22624)
  UCHAR PrcbPad60[2];                             // offset: 0x5864 (22628)
  USHORT NmiActive;                               // offset: 0x5866 (22630)
  LONG DpcWatchdogPeriod;                         // offset: 0x5868 (22632)
  LONG DpcWatchdogCount;                          // offset: 0x586c (22636)
  volatile LONG KeSpinLockOrdering;               // offset: 0x5870 (22640)
  ULONG PrcbPad70[1];                             // offset: 0x5874 (22644)
  VOID *CachedPtes;                               // offset: 0x5878 (22648)
  struct _LIST_ENTRY WaitListHead;                // offset: 0x5880 (22656)
  ULONGLONG WaitLock;                             // offset: 0x5890 (22672)
  ULONG ReadySummary;                             // offset: 0x5898 (22680)
  LONG AffinitizedSelectionMask;                  // offset: 0x589c (22684)
  ULONG QueueIndex;                               // offset: 0x58a0 (22688)
  ULONG PrcbPad75[3];                             // offset: 0x58a4 (22692)
  struct _KDPC TimerExpirationDpc;                // offset: 0x58b0 (22704)
  struct _RTL_RB_TREE ScbQueue;                   // offset: 0x58f0 (22768)
  struct _LIST_ENTRY DispatcherReadyListHead[32]; // offset: 0x5900 (22784)
  ULONG InterruptCount;                           // offset: 0x5b00 (23296)
  ULONG KernelTime;                               // offset: 0x5b04 (23300)
  ULONG UserTime;                                 // offset: 0x5b08 (23304)
  ULONG DpcTime;                                  // offset: 0x5b0c (23308)
  ULONG InterruptTime;                            // offset: 0x5b10 (23312)
  ULONG AdjustDpcThreshold;                       // offset: 0x5b14 (23316)
  UCHAR DebuggerSavedIRQL;                        // offset: 0x5b18 (23320)
  UCHAR GroupSchedulingOverQuota;                 // offset: 0x5b19 (23321)
  volatile UCHAR DeepSleep;                       // offset: 0x5b1a (23322)
  UCHAR PrcbPad80[5];                             // offset: 0x5b1b (23323)
  ULONG DpcTimeCount;                             // offset: 0x5b20 (23328)
  ULONG DpcTimeLimit;                             // offset: 0x5b24 (23332)
  ULONG PeriodicCount;                            // offset: 0x5b28 (23336)
  ULONG PeriodicBias;                             // offset: 0x5b2c (23340)
  ULONG AvailableTime;                            // offset: 0x5b30 (23344)
  ULONG KeExceptionDispatchCount;                 // offset: 0x5b34 (23348)
  ULONGLONG StartCycles;                          // offset: 0x5b38 (23352)
  ULONGLONG TaggedCyclesStart;                    // offset: 0x5b40 (23360)
  ULONGLONG TaggedCycles[2];                      // offset: 0x5b48 (23368)
  ULONGLONG GenerationTarget;                     // offset: 0x5b58 (23384)
  ULONGLONG AffinitizedCycles;                    // offset: 0x5b60 (23392)
  ULONG PrcbPad81[29];                            // offset: 0x5b68 (23400)
  volatile LONG MmSpinLockOrdering;               // offset: 0x5bdc (23516)
  ULONG PageColor;                                // offset: 0x5be0 (23520)
  ULONG NodeColor;                                // offset: 0x5be4 (23524)
  ULONG NodeShiftedColor;                         // offset: 0x5be8 (23528)
  ULONG SecondaryColorMask;                       // offset: 0x5bec (23532)
  ULONG PrcbPad83;                                // offset: 0x5bf0 (23536)
  ULONGLONG CycleTime;                            // offset: 0x5bf8 (23544)
  ULONGLONG Cycles[4][2];                         // offset: 0x5c00 (23552)
  ULONG PrcbPad84[16];                            // offset: 0x5c40 (23616)
  ULONG CcFastMdlReadNoWait;                      // offset: 0x5c80 (23680)
  ULONG CcFastMdlReadWait;                        // offset: 0x5c84 (23684)
  ULONG CcFastMdlReadNotPossible;                 // offset: 0x5c88 (23688)
  ULONG CcMapDataNoWait;                          // offset: 0x5c8c (23692)
  ULONG CcMapDataWait;                            // offset: 0x5c90 (23696)
  ULONG CcPinMappedDataCount;                     // offset: 0x5c94 (23700)
  ULONG CcPinReadNoWait;                          // offset: 0x5c98 (23704)
  ULONG CcPinReadWait;                            // offset: 0x5c9c (23708)
  ULONG CcMdlReadNoWait;                          // offset: 0x5ca0 (23712)
  ULONG CcMdlReadWait;                            // offset: 0x5ca4 (23716)
  ULONG CcLazyWriteHotSpots;                      // offset: 0x5ca8 (23720)
  ULONG CcLazyWriteIos;                           // offset: 0x5cac (23724)
  ULONG CcLazyWritePages;                         // offset: 0x5cb0 (23728)
  ULONG CcDataFlushes;                            // offset: 0x5cb4 (23732)
  ULONG CcDataPages;                              // offset: 0x5cb8 (23736)
  ULONG CcLostDelayedWrites;                      // offset: 0x5cbc (23740)
  ULONG CcFastReadResourceMiss;                   // offset: 0x5cc0 (23744)
  ULONG CcCopyReadWaitMiss;                       // offset: 0x5cc4 (23748)
  ULONG CcFastMdlReadResourceMiss;                // offset: 0x5cc8 (23752)
  ULONG CcMapDataNoWaitMiss;                      // offset: 0x5ccc (23756)
  ULONG CcMapDataWaitMiss;                        // offset: 0x5cd0 (23760)
  ULONG CcPinReadNoWaitMiss;                      // offset: 0x5cd4 (23764)
  ULONG CcPinReadWaitMiss;                        // offset: 0x5cd8 (23768)
  ULONG CcMdlReadNoWaitMiss;                      // offset: 0x5cdc (23772)
  ULONG CcMdlReadWaitMiss;                        // offset: 0x5ce0 (23776)
  ULONG CcReadAheadIos;                           // offset: 0x5ce4 (23780)
  volatile LONG MmCacheTransitionCount;           // offset: 0x5ce8 (23784)
  volatile LONG MmCacheReadCount;                 // offset: 0x5cec (23788)
  volatile LONG MmCacheIoCount;                   // offset: 0x5cf0 (23792)
  ULONG PrcbPad91[3];                             // offset: 0x5cf4 (23796)
  struct _PROCESSOR_POWER_STATE PowerState;       // offset: 0x5d00 (23808)
  struct _LIST_ENTRY ScbList;                     // offset: 0x5ed0 (24272)
  ULONG PrcbPad92[7];                             // offset: 0x5ee0 (24288)
  ULONG KeAlignmentFixupCount;                    // offset: 0x5efc (24316)
  struct _KDPC DpcWatchdogDpc;                    // offset: 0x5f00 (24320)
  struct _KTIMER DpcWatchdogTimer;                // offset: 0x5f40 (24384)
  struct _CACHE_DESCRIPTOR Cache[5];              // offset: 0x5f80 (24448)
  ULONG CacheCount;                               // offset: 0x5fbc (24508)
  volatile ULONG CachedCommit;                    // offset: 0x5fc0 (24512)
  volatile ULONG CachedResidentAvailable;         // offset: 0x5fc4 (24516)
  VOID *HyperPte;                                 // offset: 0x5fc8 (24520)
  VOID *WheaInfo;                                 // offset: 0x5fd0 (24528)
  VOID *EtwSupport;                               // offset: 0x5fd8 (24536)
  union _SLIST_HEADER InterruptObjectPool;        // offset: 0x5fe0 (24544)
  union _SLIST_HEADER HypercallPageList;          // offset: 0x5ff0 (24560)
  VOID *HypercallCachedPages;                     // offset: 0x6000 (24576)
  VOID *VirtualApicAssist;                        // offset: 0x6008 (24584)
  ULONGLONG *StatisticsPage;                      // offset: 0x6010 (24592)
  struct _KAFFINITY_EX PackageProcessorSet;       // offset: 0x6018 (24600)
  ULONGLONG SharedReadyQueueMask;                 // offset: 0x60c0 (24768)
  struct _KSHARED_READY_QUEUE *SharedReadyQueue;  // offset: 0x60c8 (24776)
  ULONG SharedQueueScanOwner;                     // offset: 0x60d0 (24784)
  ULONG ScanSiblingIndex;                         // offset: 0x60d4 (24788)
  ULONGLONG CoreProcessorSet;                     // offset: 0x60d8 (24792)
  ULONGLONG ScanSiblingMask;                      // offset: 0x60e0 (24800)
  ULONGLONG LLCMask;                              // offset: 0x60e8 (24808)
  ULONGLONG CacheProcessorMask[5];                // offset: 0x60f0 (24816)
  struct _PROCESSOR_PROFILE_CONTROL_AREA
      *ProcessorProfileControlArea;                 // offset: 0x6118 (24856)
  VOID *ProfileEventIndexAddress;                   // offset: 0x6120 (24864)
  ULONGLONG PrcbPad94[11];                          // offset: 0x6128 (24872)
  struct _SYNCH_COUNTERS SynchCounters;             // offset: 0x6180 (24960)
  ULONGLONG PteBitCache;                            // offset: 0x6238 (25144)
  ULONG PteBitOffset;                               // offset: 0x6240 (25152)
  struct _FILESYSTEM_DISK_COUNTERS FsCounters;      // offset: 0x6248 (25160)
  UCHAR VendorString[13];                           // offset: 0x6258 (25176)
  UCHAR PrcbPad100[3];                              // offset: 0x6265 (25189)
  ULONGLONG FeatureBits;                            // offset: 0x6268 (25192)
  ULONG PrcbPad110;                                 // offset: 0x6270 (25200)
  union _LARGE_INTEGER UpdateSignature;             // offset: 0x6278 (25208)
  struct _CONTEXT *Context;                         // offset: 0x6280 (25216)
  ULONG ContextFlagsInit;                           // offset: 0x6288 (25224)
  struct _XSAVE_AREA *ExtendedState;                // offset: 0x6290 (25232)
  VOID *IsrStack;                                   // offset: 0x6298 (25240)
  struct _KENTROPY_TIMING_STATE EntropyTimingState; // offset: 0x62a0 (25248)
  struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;     // offset: 0x63f0 (25584)
  struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;  // offset: 0x63f8 (25592)
  struct _KDPC AbDpc;                               // offset: 0x6400 (25600)
  struct _IOP_IRP_STACK_PROFILER
      IoIrpStackProfilerCurrent; // offset: 0x6440 (25664)
  struct _IOP_IRP_STACK_PROFILER
      IoIrpStackProfilerPrevious;                    // offset: 0x6494 (25748)
  struct _KSHARED_READY_QUEUE LocalSharedReadyQueue; // offset: 0x6500 (25856)
  struct _KTIMER_EXPIRATION_TRACE
      TimerExpirationTrace[16];              // offset: 0x6760 (26464)
  ULONG TimerExpirationTraceCount;           // offset: 0x6860 (26720)
  VOID *ExSaPageArray;                       // offset: 0x6868 (26728)
  struct _REQUEST_MAILBOX *Mailbox;          // offset: 0x6880 (26752)
  struct _REQUEST_MAILBOX RequestMailbox[1]; // offset: 0x68c0 (26816)
};

// 0x5d8 (1496) bytes
struct _KTHREAD {
  struct _DISPATCHER_HEADER Header;                    // offset: 0x0 (0)
  VOID *SListFaultAddress;                             // offset: 0x18 (24)
  ULONGLONG QuantumTarget;                             // offset: 0x20 (32)
  VOID *InitialStack;                                  // offset: 0x28 (40)
  VOID *volatile StackLimit;                           // offset: 0x30 (48)
  VOID *StackBase;                                     // offset: 0x38 (56)
  ULONGLONG ThreadLock;                                // offset: 0x40 (64)
  volatile ULONGLONG CycleTime;                        // offset: 0x48 (72)
  ULONG CurrentRunTime;                                // offset: 0x50 (80)
  ULONG ExpectedRunTime;                               // offset: 0x54 (84)
  VOID *KernelStack;                                   // offset: 0x58 (88)
  struct _XSAVE_FORMAT *StateSaveArea;                 // offset: 0x60 (96)
  struct _KSCHEDULING_GROUP *volatile SchedulingGroup; // offset: 0x68 (104)
  union _KWAIT_STATUS_REGISTER WaitRegister;           // offset: 0x70 (112)
  volatile UCHAR Running;                              // offset: 0x71 (113)
  UCHAR Alerted[2];                                    // offset: 0x72 (114)
  union {
    struct {
      ULONG AutoBoostActive : 1;         // offset: 0x74 (116)
      ULONG ReadyTransition : 1;         // offset: 0x74 (116)
      ULONG WaitNext : 1;                // offset: 0x74 (116)
      ULONG SystemAffinityActive : 1;    // offset: 0x74 (116)
      ULONG Alertable : 1;               // offset: 0x74 (116)
      ULONG UserStackWalkActive : 1;     // offset: 0x74 (116)
      ULONG ApcInterruptRequest : 1;     // offset: 0x74 (116)
      ULONG QuantumEndMigrate : 1;       // offset: 0x74 (116)
      ULONG UmsDirectedSwitchEnable : 1; // offset: 0x74 (116)
      ULONG TimerActive : 1;             // offset: 0x74 (116)
      ULONG SystemThread : 1;            // offset: 0x74 (116)
      ULONG ProcessDetachActive : 1;     // offset: 0x74 (116)
      ULONG CalloutActive : 1;           // offset: 0x74 (116)
      ULONG ScbReadyQueue : 1;           // offset: 0x74 (116)
      ULONG ApcQueueable : 1;            // offset: 0x74 (116)
      ULONG ReservedStackInUse : 1;      // offset: 0x74 (116)
      ULONG UmsPerformingSyscall : 1;    // offset: 0x74 (116)
      ULONG TimerSuspended : 1;          // offset: 0x74 (116)
      ULONG SuspendedWaitMode : 1;       // offset: 0x74 (116)
      ULONG SuspendSchedulerApcWait : 1; // offset: 0x74 (116)
      ULONG Reserved : 12;               // offset: 0x74 (116)
    };
    LONG MiscFlags; // offset: 0x74 (116)
  };
  union {
    struct {
      ULONG AutoAlignment : 1;                // offset: 0x78 (120)
      ULONG DisableBoost : 1;                 // offset: 0x78 (120)
      ULONG ThreadFlagsSpare0 : 1;            // offset: 0x78 (120)
      ULONG AlertedByThreadId : 1;            // offset: 0x78 (120)
      ULONG QuantumDonation : 1;              // offset: 0x78 (120)
      ULONG EnableStackSwap : 1;              // offset: 0x78 (120)
      ULONG GuiThread : 1;                    // offset: 0x78 (120)
      ULONG DisableQuantum : 1;               // offset: 0x78 (120)
      ULONG ChargeOnlySchedulingGroup : 1;    // offset: 0x78 (120)
      ULONG DeferPreemption : 1;              // offset: 0x78 (120)
      ULONG QueueDeferPreemption : 1;         // offset: 0x78 (120)
      ULONG ForceDeferSchedule : 1;           // offset: 0x78 (120)
      ULONG SharedReadyQueueAffinity : 1;     // offset: 0x78 (120)
      ULONG FreezeCount : 1;                  // offset: 0x78 (120)
      ULONG TerminationApcRequest : 1;        // offset: 0x78 (120)
      ULONG AutoBoostEntriesExhausted : 1;    // offset: 0x78 (120)
      ULONG KernelStackResident : 1;          // offset: 0x78 (120)
      ULONG CommitFailTerminateRequest : 1;   // offset: 0x78 (120)
      ULONG ProcessStackCountDecremented : 1; // offset: 0x78 (120)
      ULONG ThreadFlagsSpare : 5;             // offset: 0x78 (120)
      ULONG EtwStackTraceApcInserted : 8;     // offset: 0x78 (120)
    };
    volatile LONG ThreadFlags; // offset: 0x78 (120)
  };
  volatile UCHAR Tag;                      // offset: 0x7c (124)
  UCHAR SystemHeteroCpuPolicy;             // offset: 0x7d (125)
  UCHAR UserHeteroCpuPolicy : 7;           // offset: 0x7e (126)
  UCHAR ExplicitSystemHeteroCpuPolicy : 1; // offset: 0x7e (126)
  UCHAR Spare0;                            // offset: 0x7f (127)
  ULONG SystemCallNumber;                  // offset: 0x80 (128)
  ULONG Spare10;                           // offset: 0x84 (132)
  VOID *FirstArgument;                     // offset: 0x88 (136)
  struct _KTRAP_FRAME *TrapFrame;          // offset: 0x90 (144)
  union {
    struct _KAPC_STATE ApcState; // offset: 0x98 (152)
    struct {
      UCHAR ApcStateFill[43];   // offset: 0x98 (152)
      CHAR Priority;            // offset: 0xc3 (195)
      ULONG UserIdealProcessor; // offset: 0xc4 (196)
    };
  };
  volatile LONGLONG WaitStatus;       // offset: 0xc8 (200)
  struct _KWAIT_BLOCK *WaitBlockList; // offset: 0xd0 (208)
  union {
    struct _LIST_ENTRY WaitListEntry;        // offset: 0xd8 (216)
    struct _SINGLE_LIST_ENTRY SwapListEntry; // offset: 0xd8 (216)
  };
  struct _DISPATCHER_HEADER *volatile Queue; // offset: 0xe8 (232)
  VOID *Teb;                                 // offset: 0xf0 (240)
  ULONGLONG RelativeTimerBias;               // offset: 0xf8 (248)
  struct _KTIMER Timer;                      // offset: 0x100 (256)
  union {
    struct _KWAIT_BLOCK WaitBlock[4]; // offset: 0x140 (320)
    struct {
      UCHAR WaitBlockFill4[20]; // offset: 0x140 (320)
      ULONG ContextSwitches;    // offset: 0x154 (340)
    };
    struct {
      UCHAR WaitBlockFill5[68]; // offset: 0x140 (320)
      volatile UCHAR State;     // offset: 0x184 (388)
      CHAR Spare13;             // offset: 0x185 (389)
      UCHAR WaitIrql;           // offset: 0x186 (390)
      CHAR WaitMode;            // offset: 0x187 (391)
    };
    struct {
      UCHAR WaitBlockFill6[116]; // offset: 0x140 (320)
      ULONG WaitTime;            // offset: 0x1b4 (436)
    };
    struct {
      UCHAR WaitBlockFill7[164]; // offset: 0x140 (320)
      union {
        struct {
          SHORT KernelApcDisable;  // offset: 0x1e4 (484)
          SHORT SpecialApcDisable; // offset: 0x1e6 (486)
        };
        ULONG CombinedApcDisable; // offset: 0x1e4 (484)
      };
    };
    struct {
      UCHAR WaitBlockFill8[40];                 // offset: 0x140 (320)
      struct _KTHREAD_COUNTERS *ThreadCounters; // offset: 0x168 (360)
    };
    struct {
      UCHAR WaitBlockFill9[88];        // offset: 0x140 (320)
      struct _XSTATE_SAVE *XStateSave; // offset: 0x198 (408)
    };
    struct {
      UCHAR WaitBlockFill10[136]; // offset: 0x140 (320)
      VOID *volatile Win32Thread; // offset: 0x1c8 (456)
    };
    struct {
      UCHAR WaitBlockFill11[176];                // offset: 0x140 (320)
      struct _UMS_CONTROL_BLOCK *Ucb;            // offset: 0x1f0 (496)
      struct _KUMS_CONTEXT_HEADER *volatile Uch; // offset: 0x1f8 (504)
    };
  };
  VOID *TebMappedLowVa;              // offset: 0x200 (512)
  struct _LIST_ENTRY QueueListEntry; // offset: 0x208 (520)
  union {
    volatile ULONG NextProcessor; // offset: 0x218 (536)
    struct {
      ULONG NextProcessorNumber : 31; // offset: 0x218 (536)
      ULONG SharedReadyQueue : 1;     // offset: 0x218 (536)
    };
  };
  LONG QueuePriority;        // offset: 0x21c (540)
  struct _KPROCESS *Process; // offset: 0x220 (544)
  union {
    struct _GROUP_AFFINITY UserAffinity; // offset: 0x228 (552)
    struct {
      UCHAR UserAffinityFill[10]; // offset: 0x228 (552)
      CHAR PreviousMode;          // offset: 0x232 (562)
      CHAR BasePriority;          // offset: 0x233 (563)
      union {
        CHAR PriorityDecrement; // offset: 0x234 (564)
        struct {
          UCHAR ForegroundBoost : 4; // offset: 0x234 (564)
          UCHAR UnusualBoost : 4;    // offset: 0x234 (564)
        };
      };
      UCHAR Preempted;      // offset: 0x235 (565)
      UCHAR AdjustReason;   // offset: 0x236 (566)
      CHAR AdjustIncrement; // offset: 0x237 (567)
    };
  };
  ULONGLONG AffinityVersion; // offset: 0x238 (568)
  union {
    struct _GROUP_AFFINITY Affinity; // offset: 0x240 (576)
    struct {
      UCHAR AffinityFill[10]; // offset: 0x240 (576)
      UCHAR ApcStateIndex;    // offset: 0x24a (586)
      UCHAR WaitBlockCount;   // offset: 0x24b (587)
      ULONG IdealProcessor;   // offset: 0x24c (588)
    };
  };
  ULONGLONG NpxState; // offset: 0x250 (592)
  union {
    struct _KAPC_STATE SavedApcState; // offset: 0x258 (600)
    struct {
      UCHAR SavedApcStateFill[43]; // offset: 0x258 (600)
      UCHAR WaitReason;            // offset: 0x283 (643)
      CHAR SuspendCount;           // offset: 0x284 (644)
      CHAR Saturation;             // offset: 0x285 (645)
      USHORT SListFaultCount;      // offset: 0x286 (646)
    };
  };
  union {
    struct _KAPC SchedulerApc; // offset: 0x288 (648)
    struct {
      UCHAR SchedulerApcFill0[1]; // offset: 0x288 (648)
      UCHAR ResourceIndex;        // offset: 0x289 (649)
    };
    struct {
      UCHAR SchedulerApcFill1[3]; // offset: 0x288 (648)
      UCHAR QuantumReset;         // offset: 0x28b (651)
    };
    struct {
      UCHAR SchedulerApcFill2[4]; // offset: 0x288 (648)
      ULONG KernelTime;           // offset: 0x28c (652)
    };
    struct {
      UCHAR SchedulerApcFill3[64];      // offset: 0x288 (648)
      struct _KPRCB *volatile WaitPrcb; // offset: 0x2c8 (712)
    };
    struct {
      UCHAR SchedulerApcFill4[72]; // offset: 0x288 (648)
      VOID *LegoData;              // offset: 0x2d0 (720)
    };
    struct {
      UCHAR SchedulerApcFill5[83]; // offset: 0x288 (648)
      UCHAR CallbackNestingLevel;  // offset: 0x2db (731)
      ULONG UserTime;              // offset: 0x2dc (732)
    };
  };
  struct _KEVENT SuspendEvent;                    // offset: 0x2e0 (736)
  struct _LIST_ENTRY ThreadListEntry;             // offset: 0x2f8 (760)
  struct _LIST_ENTRY MutantListHead;              // offset: 0x308 (776)
  UCHAR AbEntrySummary;                           // offset: 0x318 (792)
  UCHAR AbWaitEntryCount;                         // offset: 0x319 (793)
  USHORT Spare20;                                 // offset: 0x31a (794)
  ULONG SecureThreadCookie;                       // offset: 0x31c (796)
  struct _KLOCK_ENTRY LockEntries[6];             // offset: 0x320 (800)
  struct _SINGLE_LIST_ENTRY PropagateBoostsEntry; // offset: 0x560 (1376)
  struct _SINGLE_LIST_ENTRY IoSelfBoostsEntry;    // offset: 0x568 (1384)
  UCHAR PriorityFloorCounts[16];                  // offset: 0x570 (1392)
  ULONG PriorityFloorSummary;                     // offset: 0x580 (1408)
  volatile LONG AbCompletedIoBoostCount;          // offset: 0x584 (1412)
  volatile SHORT KeReferenceCount;                // offset: 0x588 (1416)
  UCHAR AbOrphanedEntrySummary;                   // offset: 0x58a (1418)
  UCHAR AbOwnedEntryCount;                        // offset: 0x58b (1419)
  ULONG ForegroundLossTime;                       // offset: 0x58c (1420)
  union {
    struct _LIST_ENTRY GlobalForegroundListEntry; // offset: 0x590 (1424)
    struct {
      struct _SINGLE_LIST_ENTRY
          ForegroundDpcStackListEntry;  // offset: 0x590 (1424)
      ULONGLONG InGlobalForegroundList; // offset: 0x598 (1432)
    };
  };
  LONGLONG ReadOperationCount;  // offset: 0x5a0 (1440)
  LONGLONG WriteOperationCount; // offset: 0x5a8 (1448)
  LONGLONG OtherOperationCount; // offset: 0x5b0 (1456)
  LONGLONG ReadTransferCount;   // offset: 0x5b8 (1464)
  LONGLONG WriteTransferCount;  // offset: 0x5c0 (1472)
  LONGLONG OtherTransferCount;  // offset: 0x5c8 (1480)
  struct _KSCB *QueuedScb;      // offset: 0x5d0 (1488)
};

// 0x100 (256) bytes
struct _KINTERRUPT {
  SHORT Type;                            // offset: 0x0 (0)
  SHORT Size;                            // offset: 0x2 (2)
  struct _LIST_ENTRY InterruptListEntry; // offset: 0x8 (8)
  UCHAR(*ServiceRoutine)
  (struct _KINTERRUPT *arg1, VOID *arg2); // offset: 0x18 (24)
  UCHAR(*MessageServiceRoutine)
  (struct _KINTERRUPT *arg1, VOID *arg2, ULONG arg3); // offset: 0x20 (32)
  ULONG MessageIndex;                                 // offset: 0x28 (40)
  VOID *ServiceContext;                               // offset: 0x30 (48)
  ULONGLONG SpinLock;                                 // offset: 0x38 (56)
  ULONG TickCount;                                    // offset: 0x40 (64)
  ULONGLONG *ActualLock;                              // offset: 0x48 (72)
  VOID (*DispatchAddress)();                          // offset: 0x50 (80)
  ULONG Vector;                                       // offset: 0x58 (88)
  UCHAR Irql;                                         // offset: 0x5c (92)
  UCHAR SynchronizeIrql;                              // offset: 0x5d (93)
  UCHAR FloatingSave;                                 // offset: 0x5e (94)
  UCHAR Connected;                                    // offset: 0x5f (95)
  ULONG Number;                                       // offset: 0x60 (96)
  UCHAR ShareVector;                                  // offset: 0x64 (100)
  UCHAR EmulateActiveBoth;                            // offset: 0x65 (101)
  USHORT ActiveCount;                                 // offset: 0x66 (102)
  LONG InternalState;                                 // offset: 0x68 (104)
  enum _KINTERRUPT_MODE Mode;                         // offset: 0x6c (108)
  enum _KINTERRUPT_POLARITY Polarity;                 // offset: 0x70 (112)
  ULONG ServiceCount;                                 // offset: 0x74 (116)
  ULONG DispatchCount;                                // offset: 0x78 (120)
  struct _KEVENT *PassiveEvent;                       // offset: 0x80 (128)
  struct _KTRAP_FRAME *TrapFrame;                     // offset: 0x88 (136)
  VOID *DisconnectData;                               // offset: 0x90 (144)
  struct _KTHREAD *volatile ServiceThread;            // offset: 0x98 (152)
  struct _INTERRUPT_CONNECTION_DATA *ConnectionData;  // offset: 0xa0 (160)
  VOID *IntTrackEntry;                                // offset: 0xa8 (168)
  struct _ISRDPCSTATS IsrDpcStats;                    // offset: 0xb0 (176)
  VOID *RedirectObject;                               // offset: 0xf0 (240)
  UCHAR Padding[8];                                   // offset: 0xf8 (248)
};

// 0x30 (48) bytes
struct _KSECONDARY_IDT_ENTRY {
  ULONGLONG SpinLock;                // offset: 0x0 (0)
  struct _KEVENT ConnectLock;        // offset: 0x8 (8)
  UCHAR LineMasked;                  // offset: 0x20 (32)
  struct _KINTERRUPT *InterruptList; // offset: 0x28 (40)
};

// 0x7c0 (1984) bytes
struct _ETHREAD {
  struct _KTHREAD Tcb;             // offset: 0x0 (0)
  union _LARGE_INTEGER CreateTime; // offset: 0x5d8 (1496)
  union {
    union _LARGE_INTEGER ExitTime;     // offset: 0x5e0 (1504)
    struct _LIST_ENTRY KeyedWaitChain; // offset: 0x5e0 (1504)
  };
  VOID *ChargeOnlySession; // offset: 0x5f0 (1520)
  union {
    struct _LIST_ENTRY PostBlockList; // offset: 0x5f8 (1528)
    struct {
      VOID *ForwardLinkShadow; // offset: 0x5f8 (1528)
      VOID *StartAddress;      // offset: 0x600 (1536)
    };
  };
  union {
    struct _TERMINATION_PORT *TerminationPort; // offset: 0x608 (1544)
    struct _ETHREAD *ReaperLink;               // offset: 0x608 (1544)
    VOID *KeyedWaitValue;                      // offset: 0x608 (1544)
  };
  ULONGLONG ActiveTimerListLock;          // offset: 0x610 (1552)
  struct _LIST_ENTRY ActiveTimerListHead; // offset: 0x618 (1560)
  struct _CLIENT_ID Cid;                  // offset: 0x628 (1576)
  union {
    struct _KSEMAPHORE KeyedWaitSemaphore; // offset: 0x638 (1592)
    struct _KSEMAPHORE AlpcWaitSemaphore;  // offset: 0x638 (1592)
  };
  union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity; // offset: 0x658 (1624)
  struct _LIST_ENTRY IrpList;                       // offset: 0x660 (1632)
  ULONGLONG TopLevelIrp;                            // offset: 0x670 (1648)
  struct _DEVICE_OBJECT *DeviceToVerify;            // offset: 0x678 (1656)
  VOID *Win32StartAddress;                          // offset: 0x680 (1664)
  VOID *LegacyPowerObject;                          // offset: 0x688 (1672)
  struct _LIST_ENTRY ThreadListEntry;               // offset: 0x690 (1680)
  struct _EX_RUNDOWN_REF RundownProtect;            // offset: 0x6a0 (1696)
  struct _EX_PUSH_LOCK ThreadLock;                  // offset: 0x6a8 (1704)
  ULONG ReadClusterSize;                            // offset: 0x6b0 (1712)
  volatile LONG MmLockOrdering;                     // offset: 0x6b4 (1716)
  volatile LONG CmLockOrdering;                     // offset: 0x6b8 (1720)
  union {
    ULONG CrossThreadFlags; // offset: 0x6bc (1724)
    struct {
      ULONG Terminated : 1;                // offset: 0x6bc (1724)
      ULONG ThreadInserted : 1;            // offset: 0x6bc (1724)
      ULONG HideFromDebugger : 1;          // offset: 0x6bc (1724)
      ULONG ActiveImpersonationInfo : 1;   // offset: 0x6bc (1724)
      ULONG HardErrorsAreDisabled : 1;     // offset: 0x6bc (1724)
      ULONG BreakOnTermination : 1;        // offset: 0x6bc (1724)
      ULONG SkipCreationMsg : 1;           // offset: 0x6bc (1724)
      ULONG SkipTerminationMsg : 1;        // offset: 0x6bc (1724)
      ULONG CopyTokenOnOpen : 1;           // offset: 0x6bc (1724)
      ULONG ThreadIoPriority : 3;          // offset: 0x6bc (1724)
      ULONG ThreadPagePriority : 3;        // offset: 0x6bc (1724)
      ULONG RundownFail : 1;               // offset: 0x6bc (1724)
      ULONG UmsForceQueueTermination : 1;  // offset: 0x6bc (1724)
      ULONG IndirectCpuSets : 1;           // offset: 0x6bc (1724)
      ULONG ReservedCrossThreadFlags : 14; // offset: 0x6bc (1724)
    };
  };
  union {
    ULONG SameThreadPassiveFlags; // offset: 0x6c0 (1728)
    struct {
      ULONG ActiveExWorker : 1;                  // offset: 0x6c0 (1728)
      ULONG MemoryMaker : 1;                     // offset: 0x6c0 (1728)
      ULONG StoreLockThread : 1;                 // offset: 0x6c0 (1728)
      ULONG ClonedThread : 1;                    // offset: 0x6c0 (1728)
      ULONG KeyedEventInUse : 1;                 // offset: 0x6c0 (1728)
      ULONG SelfTerminate : 1;                   // offset: 0x6c0 (1728)
      ULONG RespectIoPriority : 1;               // offset: 0x6c0 (1728)
      ULONG ReservedSameThreadPassiveFlags : 25; // offset: 0x6c0 (1728)
    };
  };
  union {
    ULONG SameThreadApcFlags; // offset: 0x6c4 (1732)
    struct {
      UCHAR OwnsProcessAddressSpaceExclusive : 1; // offset: 0x6c4 (1732)
      UCHAR OwnsProcessAddressSpaceShared : 1;    // offset: 0x6c4 (1732)
      UCHAR HardFaultBehavior : 1;                // offset: 0x6c4 (1732)
      volatile UCHAR StartAddressInvalid : 1;     // offset: 0x6c4 (1732)
      UCHAR EtwCalloutActive : 1;                 // offset: 0x6c4 (1732)
      UCHAR SuppressSymbolLoad : 1;               // offset: 0x6c4 (1732)
      UCHAR Prefetching : 1;                      // offset: 0x6c4 (1732)
      UCHAR OwnsVadExclusive : 1;                 // offset: 0x6c4 (1732)
      UCHAR SystemPagePriorityActive : 1;         // offset: 0x6c5 (1733)
      UCHAR SystemPagePriority : 3;               // offset: 0x6c5 (1733)
    };
  };
  UCHAR CacheManagerActive;         // offset: 0x6c8 (1736)
  UCHAR DisablePageFaultClustering; // offset: 0x6c9 (1737)
  UCHAR ActiveFaultCount;           // offset: 0x6ca (1738)
  UCHAR LockOrderState;             // offset: 0x6cb (1739)
  ULONGLONG AlpcMessageId;          // offset: 0x6d0 (1744)
  union {
    VOID *AlpcMessage;             // offset: 0x6d8 (1752)
    ULONG AlpcReceiveAttributeSet; // offset: 0x6d8 (1752)
  };
  LONG ExitStatus;                                  // offset: 0x6e0 (1760)
  struct _LIST_ENTRY AlpcWaitListEntry;             // offset: 0x6e8 (1768)
  ULONG CacheManagerCount;                          // offset: 0x6f8 (1784)
  ULONG IoBoostCount;                               // offset: 0x6fc (1788)
  struct _LIST_ENTRY BoostList;                     // offset: 0x700 (1792)
  struct _LIST_ENTRY DeboostList;                   // offset: 0x710 (1808)
  ULONGLONG BoostListLock;                          // offset: 0x720 (1824)
  ULONGLONG IrpListLock;                            // offset: 0x728 (1832)
  VOID *ReservedForSynchTracking;                   // offset: 0x730 (1840)
  struct _SINGLE_LIST_ENTRY CmCallbackListHead;     // offset: 0x738 (1848)
  struct _GUID *ActivityId;                         // offset: 0x740 (1856)
  struct _SINGLE_LIST_ENTRY SeLearningModeListHead; // offset: 0x748 (1864)
  VOID *VerifierContext;                            // offset: 0x750 (1872)
  ULONG KernelStackReference;                       // offset: 0x758 (1880)
  VOID *AdjustedClientToken;                        // offset: 0x760 (1888)
  VOID *WorkingOnBehalfClient;                      // offset: 0x768 (1896)
  struct _PS_PROPERTY_SET PropertySet;              // offset: 0x770 (1904)
  VOID *PicoContext;                                // offset: 0x788 (1928)
  ULONG UserFsBase;                                 // offset: 0x790 (1936)
  ULONGLONG UserGsBase;                             // offset: 0x798 (1944)
  struct _THREAD_ENERGY_VALUES *EnergyValues;       // offset: 0x7a0 (1952)
  volatile ULONG CmCellReferences;                  // offset: 0x7a8 (1960)
  union {
    ULONGLONG SelectedCpuSets;          // offset: 0x7b0 (1968)
    ULONGLONG *SelectedCpuSetsIndirect; // offset: 0x7b0 (1968)
  };
  struct _EJOB *Silo; // offset: 0x7b8 (1976)
};

// 0x58 (88) bytes
struct _PROC_PERF_CONSTRAINT {
  struct _KPRCB *Prcb;            // offset: 0x0 (0)
  ULONGLONG PerfContext;          // offset: 0x8 (8)
  ULONG ProcCap;                  // offset: 0x10 (16)
  ULONG ProcFloor;                // offset: 0x14 (20)
  ULONG PlatformCap;              // offset: 0x18 (24)
  ULONG ThermalCap;               // offset: 0x1c (28)
  ULONG LimitReasons;             // offset: 0x20 (32)
  ULONGLONG PlatformCapStartTime; // offset: 0x28 (40)
  ULONG TargetPercent;            // offset: 0x30 (48)
  ULONG SelectedPercent;          // offset: 0x34 (52)
  ULONG SelectedFrequency;        // offset: 0x38 (56)
  ULONG PreviousFrequency;        // offset: 0x3c (60)
  ULONG PreviousPercent;          // offset: 0x40 (64)
  ULONG LatestFrequencyPercent;   // offset: 0x44 (68)
  ULONGLONG SelectedState;        // offset: 0x48 (72)
  UCHAR Force;                    // offset: 0x50 (80)
};

// 0x190 (400) bytes
struct _PROC_PERF_DOMAIN {
  struct _LIST_ENTRY Link;                                // offset: 0x0 (0)
  struct _KPRCB *Master;                                  // offset: 0x10 (16)
  struct _KAFFINITY_EX Members;                           // offset: 0x18 (24)
  ULONG ProcessorCount;                                   // offset: 0xc0 (192)
  UCHAR Class;                                            // offset: 0xc4 (196)
  UCHAR Spare[3];                                         // offset: 0xc5 (197)
  struct _PROC_PERF_CONSTRAINT *Processors;               // offset: 0xc8 (200)
  VOID (*GetFFHThrottleState)(ULONGLONG *arg1);           // offset: 0xd0 (208)
  VOID (*TimeWindowHandler)(ULONGLONG arg1, ULONG arg2);  // offset: 0xd8 (216)
  VOID (*BoostPolicyHandler)(ULONGLONG arg1, ULONG arg2); // offset: 0xe0 (224)
  VOID (*BoostModeHandler)(ULONGLONG arg1, ULONG arg2);   // offset: 0xe8 (232)
  VOID(*EnergyPerfPreferenceHandler)
  (ULONGLONG arg1, ULONG arg2); // offset: 0xf0 (240)
  VOID(*AutonomousActivityWindowHandler)
  (ULONGLONG arg1, ULONG arg2); // offset: 0xf8 (248)
  VOID(*AutonomousModeHandler)
  (ULONGLONG arg1, ULONG arg2);                // offset: 0x100 (256)
  VOID (*ReinitializeHandler)(ULONGLONG arg1); // offset: 0x108 (264)
  ULONG(*PerfSelectionHandler)
  (ULONGLONG arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG *arg6,
   ULONGLONG *arg7); // offset: 0x110 (272)
  VOID(*PerfControlHandler)
  (ULONGLONG arg1, ULONGLONG arg2, ULONG arg3, ULONG arg4, ULONG arg5,
   UCHAR arg6, UCHAR arg7, UCHAR arg8); // offset: 0x118 (280)
  ULONG MaxFrequency;                   // offset: 0x120 (288)
  ULONG NominalFrequency;               // offset: 0x124 (292)
  ULONG MaxPercent;                     // offset: 0x128 (296)
  ULONG MinPerfPercent;                 // offset: 0x12c (300)
  ULONG MinThrottlePercent;             // offset: 0x130 (304)
  ULONGLONG MinimumRelativePerformance; // offset: 0x138 (312)
  ULONGLONG NominalRelativePerformance; // offset: 0x140 (320)
  UCHAR Coordination;                   // offset: 0x148 (328)
  UCHAR HardPlatformCap;                // offset: 0x149 (329)
  UCHAR AffinitizeControl;              // offset: 0x14a (330)
  UCHAR EfficientThrottle;              // offset: 0x14b (331)
  UCHAR AutonomousMode;                 // offset: 0x14c (332)
  ULONG SelectedPercent;                // offset: 0x150 (336)
  ULONG SelectedFrequency;              // offset: 0x154 (340)
  ULONG DesiredPercent;                 // offset: 0x158 (344)
  ULONG MaxPolicyPercent;               // offset: 0x15c (348)
  ULONG MinPolicyPercent;               // offset: 0x160 (352)
  ULONG ConstrainedMaxPercent;          // offset: 0x164 (356)
  ULONG ConstrainedMinPercent;          // offset: 0x168 (360)
  ULONG GuaranteedPercent;              // offset: 0x16c (364)
  ULONG TolerancePercent;               // offset: 0x170 (368)
  ULONGLONG SelectedState;              // offset: 0x178 (376)
  ULONGLONG PerfChangeTime;             // offset: 0x180 (384)
  ULONG PerfChangeIntervalCount;        // offset: 0x188 (392)
  UCHAR Force;                          // offset: 0x18c (396)
  UCHAR ProvideGuidance;                // offset: 0x18d (397)
};

// 0x6a80 (27264) bytes
struct _KPCR {
  union {
    struct _NT_TIB NtTib; // offset: 0x0 (0)
    struct {
      union _KGDTENTRY64 *GdtBase;         // offset: 0x0 (0)
      struct _KTSS64 *TssBase;             // offset: 0x8 (8)
      ULONGLONG UserRsp;                   // offset: 0x10 (16)
      struct _KPCR *Self;                  // offset: 0x18 (24)
      struct _KPRCB *CurrentPrcb;          // offset: 0x20 (32)
      struct _KSPIN_LOCK_QUEUE *LockArray; // offset: 0x28 (40)
      VOID *Used_Self;                     // offset: 0x30 (48)
    };
  };
  union _KIDTENTRY64 *IdtBase;         // offset: 0x38 (56)
  ULONGLONG Unused[2];                 // offset: 0x40 (64)
  UCHAR Irql;                          // offset: 0x50 (80)
  UCHAR SecondLevelCacheAssociativity; // offset: 0x51 (81)
  UCHAR ObsoleteNumber;                // offset: 0x52 (82)
  UCHAR Fill0;                         // offset: 0x53 (83)
  ULONG Unused0[3];                    // offset: 0x54 (84)
  USHORT MajorVersion;                 // offset: 0x60 (96)
  USHORT MinorVersion;                 // offset: 0x62 (98)
  ULONG StallScaleFactor;              // offset: 0x64 (100)
  VOID *Unused1[3];                    // offset: 0x68 (104)
  ULONG KernelReserved[15];            // offset: 0x80 (128)
  ULONG SecondLevelCacheSize;          // offset: 0xbc (188)
  ULONG HalReserved[16];               // offset: 0xc0 (192)
  ULONG Unused2;                       // offset: 0x100 (256)
  VOID *KdVersionBlock;                // offset: 0x108 (264)
  VOID *Unused3;                       // offset: 0x110 (272)
  ULONG PcrAlign1[24];                 // offset: 0x118 (280)
  struct _KPRCB Prcb;                  // offset: 0x180 (384)
};

// 0x708 (1800) bytes
struct _KUSER_SHARED_DATA {
  ULONG TickCountLowDeprecated;                // offset: 0x0 (0)
  ULONG TickCountMultiplier;                   // offset: 0x4 (4)
  volatile struct _KSYSTEM_TIME InterruptTime; // offset: 0x8 (8)
  volatile struct _KSYSTEM_TIME SystemTime;    // offset: 0x14 (20)
  volatile struct _KSYSTEM_TIME TimeZoneBias;  // offset: 0x20 (32)
  USHORT ImageNumberLow;                       // offset: 0x2c (44)
  USHORT ImageNumberHigh;                      // offset: 0x2e (46)
  WCHAR NtSystemRoot[260];                     // offset: 0x30 (48)
  ULONG MaxStackTraceDepth;                    // offset: 0x238 (568)
  ULONG CryptoExponent;                        // offset: 0x23c (572)
  ULONG TimeZoneId;                            // offset: 0x240 (576)
  ULONG LargePageMinimum;                      // offset: 0x244 (580)
  ULONG AitSamplingValue;                      // offset: 0x248 (584)
  ULONG AppCompatFlag;                         // offset: 0x24c (588)
  ULONGLONG RNGSeedVersion;                    // offset: 0x250 (592)
  ULONG GlobalValidationRunlevel;              // offset: 0x258 (600)
  volatile LONG TimeZoneBiasStamp;             // offset: 0x25c (604)
  ULONG NtBuildNumber;                         // offset: 0x260 (608)
  enum _NT_PRODUCT_TYPE NtProductType;         // offset: 0x264 (612)
  UCHAR ProductTypeIsValid;                    // offset: 0x268 (616)
  UCHAR Reserved0[1];                          // offset: 0x269 (617)
  USHORT NativeProcessorArchitecture;          // offset: 0x26a (618)
  ULONG NtMajorVersion;                        // offset: 0x26c (620)
  ULONG NtMinorVersion;                        // offset: 0x270 (624)
  UCHAR ProcessorFeatures[64];                 // offset: 0x274 (628)
  ULONG Reserved1;                             // offset: 0x2b4 (692)
  ULONG Reserved3;                             // offset: 0x2b8 (696)
  volatile ULONG TimeSlip;                     // offset: 0x2bc (700)
  enum _ALTERNATIVE_ARCHITECTURE_TYPE
      AlternativeArchitecture;               // offset: 0x2c0 (704)
  ULONG BootId;                              // offset: 0x2c4 (708)
  union _LARGE_INTEGER SystemExpirationDate; // offset: 0x2c8 (712)
  ULONG SuiteMask;                           // offset: 0x2d0 (720)
  UCHAR KdDebuggerEnabled;                   // offset: 0x2d4 (724)
  union {
    UCHAR MitigationPolicies; // offset: 0x2d5 (725)
    struct {
      UCHAR NXSupportPolicy : 2;             // offset: 0x2d5 (725)
      UCHAR SEHValidationPolicy : 2;         // offset: 0x2d5 (725)
      UCHAR CurDirDevicesSkippedForDlls : 2; // offset: 0x2d5 (725)
      UCHAR Reserved : 2;                    // offset: 0x2d5 (725)
    };
  };
  UCHAR Reserved6[2];                // offset: 0x2d6 (726)
  volatile ULONG ActiveConsoleId;    // offset: 0x2d8 (728)
  volatile ULONG DismountCount;      // offset: 0x2dc (732)
  ULONG ComPlusPackage;              // offset: 0x2e0 (736)
  ULONG LastSystemRITEventTickCount; // offset: 0x2e4 (740)
  ULONG NumberOfPhysicalPages;       // offset: 0x2e8 (744)
  UCHAR SafeBootMode;                // offset: 0x2ec (748)
  UCHAR Reserved12[3];               // offset: 0x2ed (749)
  union {
    ULONG SharedDataFlags; // offset: 0x2f0 (752)
    struct {
      ULONG DbgErrorPortPresent : 1;       // offset: 0x2f0 (752)
      ULONG DbgElevationEnabled : 1;       // offset: 0x2f0 (752)
      ULONG DbgVirtEnabled : 1;            // offset: 0x2f0 (752)
      ULONG DbgInstallerDetectEnabled : 1; // offset: 0x2f0 (752)
      ULONG DbgLkgEnabled : 1;             // offset: 0x2f0 (752)
      ULONG DbgDynProcessorEnabled : 1;    // offset: 0x2f0 (752)
      ULONG DbgConsoleBrokerEnabled : 1;   // offset: 0x2f0 (752)
      ULONG DbgSecureBootEnabled : 1;      // offset: 0x2f0 (752)
      ULONG DbgMultiSessionSku : 1;        // offset: 0x2f0 (752)
      ULONG SpareBits : 23;                // offset: 0x2f0 (752)
    };
  };
  ULONG DataFlagsPad[1];        // offset: 0x2f4 (756)
  ULONGLONG TestRetInstruction; // offset: 0x2f8 (760)
  LONGLONG QpcFrequency;        // offset: 0x300 (768)
  ULONG SystemCall;             // offset: 0x308 (776)
  ULONG SystemCallPad0;         // offset: 0x30c (780)
  ULONGLONG SystemCallPad[2];   // offset: 0x310 (784)
  union {
    volatile struct _KSYSTEM_TIME TickCount; // offset: 0x320 (800)
    volatile ULONGLONG TickCountQuad;        // offset: 0x320 (800)
    ULONG ReservedTickCountOverlay[3];       // offset: 0x320 (800)
  };
  ULONG TickCountPad[1];                      // offset: 0x32c (812)
  ULONG Cookie;                               // offset: 0x330 (816)
  ULONG CookiePad[1];                         // offset: 0x334 (820)
  LONGLONG ConsoleSessionForegroundProcessId; // offset: 0x338 (824)
  ULONGLONG TimeUpdateLock;                   // offset: 0x340 (832)
  ULONGLONG BaselineSystemTimeQpc;            // offset: 0x348 (840)
  ULONGLONG BaselineInterruptTimeQpc;         // offset: 0x350 (848)
  ULONGLONG QpcSystemTimeIncrement;           // offset: 0x358 (856)
  ULONGLONG QpcInterruptTimeIncrement;        // offset: 0x360 (864)
  UCHAR QpcSystemTimeIncrementShift;          // offset: 0x368 (872)
  UCHAR QpcInterruptTimeIncrementShift;       // offset: 0x369 (873)
  USHORT UnparkedProcessorCount;              // offset: 0x36a (874)
  ULONG EnclaveFeatureMask[4];                // offset: 0x36c (876)
  ULONG Reserved8;                            // offset: 0x37c (892)
  USHORT UserModeGlobalLogger[16];            // offset: 0x380 (896)
  ULONG ImageFileExecutionOptions;            // offset: 0x3a0 (928)
  ULONG LangGenerationCount;                  // offset: 0x3a4 (932)
  ULONGLONG Reserved4;                        // offset: 0x3a8 (936)
  volatile ULONGLONG InterruptTimeBias;       // offset: 0x3b0 (944)
  volatile ULONGLONG QpcBias;                 // offset: 0x3b8 (952)
  ULONG ActiveProcessorCount;                 // offset: 0x3c0 (960)
  volatile UCHAR ActiveGroupCount;            // offset: 0x3c4 (964)
  UCHAR Reserved9;                            // offset: 0x3c5 (965)
  union {
    USHORT QpcData; // offset: 0x3c6 (966)
    struct {
      volatile UCHAR QpcBypassEnabled; // offset: 0x3c6 (966)
      UCHAR QpcShift;                  // offset: 0x3c7 (967)
    };
  };
  union _LARGE_INTEGER TimeZoneBiasEffectiveStart; // offset: 0x3c8 (968)
  union _LARGE_INTEGER TimeZoneBiasEffectiveEnd;   // offset: 0x3d0 (976)
  struct _XSTATE_CONFIGURATION XState;             // offset: 0x3d8 (984)
};

// 0x10 (16) bytes
struct LIST_ENTRY64 {
  ULONGLONG Flink; // offset: 0x0 (0)
  ULONGLONG Blink; // offset: 0x8 (8)
};

// 0x7a0 (1952) bytes
struct _PEB64 {
  UCHAR InheritedAddressSpace;    // offset: 0x0 (0)
  UCHAR ReadImageFileExecOptions; // offset: 0x1 (1)
  UCHAR BeingDebugged;            // offset: 0x2 (2)
  union {
    UCHAR BitField; // offset: 0x3 (3)
    struct {
      UCHAR ImageUsesLargePages : 1;          // offset: 0x3 (3)
      UCHAR IsProtectedProcess : 1;           // offset: 0x3 (3)
      UCHAR IsImageDynamicallyRelocated : 1;  // offset: 0x3 (3)
      UCHAR SkipPatchingUser32Forwarders : 1; // offset: 0x3 (3)
      UCHAR IsPackagedProcess : 1;            // offset: 0x3 (3)
      UCHAR IsAppContainer : 1;               // offset: 0x3 (3)
      UCHAR IsProtectedProcessLight : 1;      // offset: 0x3 (3)
      UCHAR SpareBits : 1;                    // offset: 0x3 (3)
    };
  };
  UCHAR Padding0[4];           // offset: 0x4 (4)
  ULONGLONG Mutant;            // offset: 0x8 (8)
  ULONGLONG ImageBaseAddress;  // offset: 0x10 (16)
  ULONGLONG Ldr;               // offset: 0x18 (24)
  ULONGLONG ProcessParameters; // offset: 0x20 (32)
  ULONGLONG SubSystemData;     // offset: 0x28 (40)
  ULONGLONG ProcessHeap;       // offset: 0x30 (48)
  ULONGLONG FastPebLock;       // offset: 0x38 (56)
  ULONGLONG AtlThunkSListPtr;  // offset: 0x40 (64)
  ULONGLONG IFEOKey;           // offset: 0x48 (72)
  union {
    ULONG CrossProcessFlags; // offset: 0x50 (80)
    struct {
      ULONG ProcessInJob : 1;        // offset: 0x50 (80)
      ULONG ProcessInitializing : 1; // offset: 0x50 (80)
      ULONG ProcessUsingVEH : 1;     // offset: 0x50 (80)
      ULONG ProcessUsingVCH : 1;     // offset: 0x50 (80)
      ULONG ProcessUsingFTH : 1;     // offset: 0x50 (80)
      ULONG ReservedBits0 : 27;      // offset: 0x50 (80)
    };
  };
  UCHAR Padding1[4]; // offset: 0x54 (84)
  union {
    ULONGLONG KernelCallbackTable; // offset: 0x58 (88)
    ULONGLONG UserSharedInfoPtr;   // offset: 0x58 (88)
  };
  ULONG SystemReserved[1];                      // offset: 0x60 (96)
  ULONG AtlThunkSListPtr32;                     // offset: 0x64 (100)
  ULONGLONG ApiSetMap;                          // offset: 0x68 (104)
  ULONG TlsExpansionCounter;                    // offset: 0x70 (112)
  UCHAR Padding2[4];                            // offset: 0x74 (116)
  ULONGLONG TlsBitmap;                          // offset: 0x78 (120)
  ULONG TlsBitmapBits[2];                       // offset: 0x80 (128)
  ULONGLONG ReadOnlySharedMemoryBase;           // offset: 0x88 (136)
  ULONGLONG SparePvoid0;                        // offset: 0x90 (144)
  ULONGLONG ReadOnlyStaticServerData;           // offset: 0x98 (152)
  ULONGLONG AnsiCodePageData;                   // offset: 0xa0 (160)
  ULONGLONG OemCodePageData;                    // offset: 0xa8 (168)
  ULONGLONG UnicodeCaseTableData;               // offset: 0xb0 (176)
  ULONG NumberOfProcessors;                     // offset: 0xb8 (184)
  ULONG NtGlobalFlag;                           // offset: 0xbc (188)
  union _LARGE_INTEGER CriticalSectionTimeout;  // offset: 0xc0 (192)
  ULONGLONG HeapSegmentReserve;                 // offset: 0xc8 (200)
  ULONGLONG HeapSegmentCommit;                  // offset: 0xd0 (208)
  ULONGLONG HeapDeCommitTotalFreeThreshold;     // offset: 0xd8 (216)
  ULONGLONG HeapDeCommitFreeBlockThreshold;     // offset: 0xe0 (224)
  ULONG NumberOfHeaps;                          // offset: 0xe8 (232)
  ULONG MaximumNumberOfHeaps;                   // offset: 0xec (236)
  ULONGLONG ProcessHeaps;                       // offset: 0xf0 (240)
  ULONGLONG GdiSharedHandleTable;               // offset: 0xf8 (248)
  ULONGLONG ProcessStarterHelper;               // offset: 0x100 (256)
  ULONG GdiDCAttributeList;                     // offset: 0x108 (264)
  UCHAR Padding3[4];                            // offset: 0x10c (268)
  ULONGLONG LoaderLock;                         // offset: 0x110 (272)
  ULONG OSMajorVersion;                         // offset: 0x118 (280)
  ULONG OSMinorVersion;                         // offset: 0x11c (284)
  USHORT OSBuildNumber;                         // offset: 0x120 (288)
  USHORT OSCSDVersion;                          // offset: 0x122 (290)
  ULONG OSPlatformId;                           // offset: 0x124 (292)
  ULONG ImageSubsystem;                         // offset: 0x128 (296)
  ULONG ImageSubsystemMajorVersion;             // offset: 0x12c (300)
  ULONG ImageSubsystemMinorVersion;             // offset: 0x130 (304)
  UCHAR Padding4[4];                            // offset: 0x134 (308)
  ULONGLONG ActiveProcessAffinityMask;          // offset: 0x138 (312)
  ULONG GdiHandleBuffer[60];                    // offset: 0x140 (320)
  ULONGLONG PostProcessInitRoutine;             // offset: 0x230 (560)
  ULONGLONG TlsExpansionBitmap;                 // offset: 0x238 (568)
  ULONG TlsExpansionBitmapBits[32];             // offset: 0x240 (576)
  ULONG SessionId;                              // offset: 0x2c0 (704)
  UCHAR Padding5[4];                            // offset: 0x2c4 (708)
  union _ULARGE_INTEGER AppCompatFlags;         // offset: 0x2c8 (712)
  union _ULARGE_INTEGER AppCompatFlagsUser;     // offset: 0x2d0 (720)
  ULONGLONG pShimData;                          // offset: 0x2d8 (728)
  ULONGLONG AppCompatInfo;                      // offset: 0x2e0 (736)
  struct _STRING64 CSDVersion;                  // offset: 0x2e8 (744)
  ULONGLONG ActivationContextData;              // offset: 0x2f8 (760)
  ULONGLONG ProcessAssemblyStorageMap;          // offset: 0x300 (768)
  ULONGLONG SystemDefaultActivationContextData; // offset: 0x308 (776)
  ULONGLONG SystemAssemblyStorageMap;           // offset: 0x310 (784)
  ULONGLONG MinimumStackCommit;                 // offset: 0x318 (792)
  ULONGLONG FlsCallback;                        // offset: 0x320 (800)
  struct LIST_ENTRY64 FlsListHead;              // offset: 0x328 (808)
  ULONGLONG FlsBitmap;                          // offset: 0x338 (824)
  ULONG FlsBitmapBits[4];                       // offset: 0x340 (832)
  ULONG FlsHighIndex;                           // offset: 0x350 (848)
  ULONGLONG WerRegistrationData;                // offset: 0x358 (856)
  ULONGLONG WerShipAssertPtr;                   // offset: 0x360 (864)
  ULONGLONG pUnused;                            // offset: 0x368 (872)
  ULONGLONG pImageHeaderHash;                   // offset: 0x370 (880)
  union {
    ULONG TracingFlags; // offset: 0x378 (888)
    struct {
      ULONG HeapTracingEnabled : 1;      // offset: 0x378 (888)
      ULONG CritSecTracingEnabled : 1;   // offset: 0x378 (888)
      ULONG LibLoaderTracingEnabled : 1; // offset: 0x378 (888)
      ULONG SpareTracingBits : 29;       // offset: 0x378 (888)
    };
  };
  UCHAR Padding6[4];                           // offset: 0x37c (892)
  ULONGLONG CsrServerReadOnlySharedMemoryBase; // offset: 0x380 (896)
  ULONGLONG TppWorkerpListLock;                // offset: 0x388 (904)
  struct LIST_ENTRY64 TppWorkerpList;          // offset: 0x390 (912)
  ULONGLONG WaitOnAddressHashTable[128];       // offset: 0x3a0 (928)
};

// 0x1838 (6200) bytes
struct _TEB64 {
  struct _NT_TIB64 NtTib;                           // offset: 0x0 (0)
  ULONGLONG EnvironmentPointer;                     // offset: 0x38 (56)
  struct _CLIENT_ID64 ClientId;                     // offset: 0x40 (64)
  ULONGLONG ActiveRpcHandle;                        // offset: 0x50 (80)
  ULONGLONG ThreadLocalStoragePointer;              // offset: 0x58 (88)
  ULONGLONG ProcessEnvironmentBlock;                // offset: 0x60 (96)
  ULONG LastErrorValue;                             // offset: 0x68 (104)
  ULONG CountOfOwnedCriticalSections;               // offset: 0x6c (108)
  ULONGLONG CsrClientThread;                        // offset: 0x70 (112)
  ULONGLONG Win32ThreadInfo;                        // offset: 0x78 (120)
  ULONG User32Reserved[26];                         // offset: 0x80 (128)
  ULONG UserReserved[5];                            // offset: 0xe8 (232)
  ULONGLONG WOW32Reserved;                          // offset: 0x100 (256)
  ULONG CurrentLocale;                              // offset: 0x108 (264)
  ULONG FpSoftwareStatusRegister;                   // offset: 0x10c (268)
  ULONGLONG ReservedForDebuggerInstrumentation[16]; // offset: 0x110 (272)
  ULONGLONG SystemReserved1[38];                    // offset: 0x190 (400)
  LONG ExceptionCode;                               // offset: 0x2c0 (704)
  UCHAR Padding0[4];                                // offset: 0x2c4 (708)
  ULONGLONG ActivationContextStackPointer;          // offset: 0x2c8 (712)
  ULONGLONG InstrumentationCallbackSp;              // offset: 0x2d0 (720)
  ULONGLONG InstrumentationCallbackPreviousPc;      // offset: 0x2d8 (728)
  ULONGLONG InstrumentationCallbackPreviousSp;      // offset: 0x2e0 (736)
  ULONG TxFsContext;                                // offset: 0x2e8 (744)
  UCHAR InstrumentationCallbackDisabled;            // offset: 0x2ec (748)
  UCHAR Padding1[3];                                // offset: 0x2ed (749)
  struct _GDI_TEB_BATCH64 GdiTebBatch;              // offset: 0x2f0 (752)
  struct _CLIENT_ID64 RealClientId;                 // offset: 0x7d8 (2008)
  ULONGLONG GdiCachedProcessHandle;                 // offset: 0x7e8 (2024)
  ULONG GdiClientPID;                               // offset: 0x7f0 (2032)
  ULONG GdiClientTID;                               // offset: 0x7f4 (2036)
  ULONGLONG GdiThreadLocalInfo;                     // offset: 0x7f8 (2040)
  ULONGLONG Win32ClientInfo[62];                    // offset: 0x800 (2048)
  ULONGLONG glDispatchTable[233];                   // offset: 0x9f0 (2544)
  ULONGLONG glReserved1[29];                        // offset: 0x1138 (4408)
  ULONGLONG glReserved2;                            // offset: 0x1220 (4640)
  ULONGLONG glSectionInfo;                          // offset: 0x1228 (4648)
  ULONGLONG glSection;                              // offset: 0x1230 (4656)
  ULONGLONG glTable;                                // offset: 0x1238 (4664)
  ULONGLONG glCurrentRC;                            // offset: 0x1240 (4672)
  ULONGLONG glContext;                              // offset: 0x1248 (4680)
  ULONG LastStatusValue;                            // offset: 0x1250 (4688)
  UCHAR Padding2[4];                                // offset: 0x1254 (4692)
  struct _STRING64 StaticUnicodeString;             // offset: 0x1258 (4696)
  WCHAR StaticUnicodeBuffer[261];                   // offset: 0x1268 (4712)
  UCHAR Padding3[6];                                // offset: 0x1472 (5234)
  ULONGLONG DeallocationStack;                      // offset: 0x1478 (5240)
  ULONGLONG TlsSlots[64];                           // offset: 0x1480 (5248)
  struct LIST_ENTRY64 TlsLinks;                     // offset: 0x1680 (5760)
  ULONGLONG Vdm;                                    // offset: 0x1690 (5776)
  ULONGLONG ReservedForNtRpc;                       // offset: 0x1698 (5784)
  ULONGLONG DbgSsReserved[2];                       // offset: 0x16a0 (5792)
  ULONG HardErrorMode;                              // offset: 0x16b0 (5808)
  UCHAR Padding4[4];                                // offset: 0x16b4 (5812)
  ULONGLONG Instrumentation[11];                    // offset: 0x16b8 (5816)
  struct _GUID ActivityId;                          // offset: 0x1710 (5904)
  ULONGLONG SubProcessTag;                          // offset: 0x1720 (5920)
  ULONGLONG PerflibData;                            // offset: 0x1728 (5928)
  ULONGLONG EtwTraceData;                           // offset: 0x1730 (5936)
  ULONGLONG WinSockData;                            // offset: 0x1738 (5944)
  ULONG GdiBatchCount;                              // offset: 0x1740 (5952)
  union {
    struct _PROCESSOR_NUMBER CurrentIdealProcessor; // offset: 0x1744 (5956)
    ULONG IdealProcessorValue;                      // offset: 0x1744 (5956)
    struct {
      UCHAR ReservedPad0;   // offset: 0x1744 (5956)
      UCHAR ReservedPad1;   // offset: 0x1745 (5957)
      UCHAR ReservedPad2;   // offset: 0x1746 (5958)
      UCHAR IdealProcessor; // offset: 0x1747 (5959)
    };
  };
  ULONG GuaranteedStackBytes;         // offset: 0x1748 (5960)
  UCHAR Padding5[4];                  // offset: 0x174c (5964)
  ULONGLONG ReservedForPerf;          // offset: 0x1750 (5968)
  ULONGLONG ReservedForOle;           // offset: 0x1758 (5976)
  ULONG WaitingOnLoaderLock;          // offset: 0x1760 (5984)
  UCHAR Padding6[4];                  // offset: 0x1764 (5988)
  ULONGLONG SavedPriorityState;       // offset: 0x1768 (5992)
  ULONGLONG ReservedForCodeCoverage;  // offset: 0x1770 (6000)
  ULONGLONG ThreadPoolData;           // offset: 0x1778 (6008)
  ULONGLONG TlsExpansionSlots;        // offset: 0x1780 (6016)
  ULONGLONG DeallocationBStore;       // offset: 0x1788 (6024)
  ULONGLONG BStoreLimit;              // offset: 0x1790 (6032)
  ULONG MuiGeneration;                // offset: 0x1798 (6040)
  ULONG IsImpersonating;              // offset: 0x179c (6044)
  ULONGLONG NlsCache;                 // offset: 0x17a0 (6048)
  ULONGLONG pShimData;                // offset: 0x17a8 (6056)
  USHORT HeapVirtualAffinity;         // offset: 0x17b0 (6064)
  USHORT LowFragHeapDataSlot;         // offset: 0x17b2 (6066)
  UCHAR Padding7[4];                  // offset: 0x17b4 (6068)
  ULONGLONG CurrentTransactionHandle; // offset: 0x17b8 (6072)
  ULONGLONG ActiveFrame;              // offset: 0x17c0 (6080)
  ULONGLONG FlsData;                  // offset: 0x17c8 (6088)
  ULONGLONG PreferredLanguages;       // offset: 0x17d0 (6096)
  ULONGLONG UserPrefLanguages;        // offset: 0x17d8 (6104)
  ULONGLONG MergedPrefLanguages;      // offset: 0x17e0 (6112)
  ULONG MuiImpersonation;             // offset: 0x17e8 (6120)
  union {
    volatile USHORT CrossTebFlags; // offset: 0x17ec (6124)
    USHORT SpareCrossTebBits : 16; // offset: 0x17ec (6124)
  };
  union {
    USHORT SameTebFlags; // offset: 0x17ee (6126)
    struct {
      USHORT SafeThunkCall : 1;        // offset: 0x17ee (6126)
      USHORT InDebugPrint : 1;         // offset: 0x17ee (6126)
      USHORT HasFiberData : 1;         // offset: 0x17ee (6126)
      USHORT SkipThreadAttach : 1;     // offset: 0x17ee (6126)
      USHORT WerInShipAssertCode : 1;  // offset: 0x17ee (6126)
      USHORT RanProcessInit : 1;       // offset: 0x17ee (6126)
      USHORT ClonedThread : 1;         // offset: 0x17ee (6126)
      USHORT SuppressDebugMsg : 1;     // offset: 0x17ee (6126)
      USHORT DisableUserStackWalk : 1; // offset: 0x17ee (6126)
      USHORT RtlExceptionAttached : 1; // offset: 0x17ee (6126)
      USHORT InitialThread : 1;        // offset: 0x17ee (6126)
      USHORT SessionAware : 1;         // offset: 0x17ee (6126)
      USHORT LoadOwner : 1;            // offset: 0x17ee (6126)
      USHORT LoaderWorker : 1;         // offset: 0x17ee (6126)
      USHORT SpareSameTebBits : 2;     // offset: 0x17ee (6126)
    };
  };
  ULONGLONG TxnScopeEnterCallback;   // offset: 0x17f0 (6128)
  ULONGLONG TxnScopeExitCallback;    // offset: 0x17f8 (6136)
  ULONGLONG TxnScopeContext;         // offset: 0x1800 (6144)
  ULONG LockCount;                   // offset: 0x1808 (6152)
  LONG WowTebOffset;                 // offset: 0x180c (6156)
  ULONGLONG ResourceRetValue;        // offset: 0x1810 (6160)
  ULONGLONG ReservedForWdf;          // offset: 0x1818 (6168)
  ULONGLONG ReservedForCrt;          // offset: 0x1820 (6176)
  struct _GUID EffectiveContainerId; // offset: 0x1828 (6184)
};
