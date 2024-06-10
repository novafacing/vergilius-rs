#include <stdint.h>

// 0x0 (0) bytes
struct _LDRP_LOAD_CONTEXT

{};

// 0x0 (0) bytes
struct _ADAPTER_OBJECT

{};

// 0x0 (0) bytes
struct _VERIFIER_SHARED_EXPORT_THUNK

{};

// 0x10 (16) bytes
struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS {
  struct _VERIFIER_SHARED_EXPORT_THUNK *SharedExportThunks; // offset: 0x0 (0)
  struct _VERIFIER_SHARED_EXPORT_THUNK
      *PoolSharedExportThunks; // offset: 0x4 (4)
  struct _VERIFIER_SHARED_EXPORT_THUNK
      *OrderDependentSharedExportThunks; // offset: 0x8 (8)
  struct _VERIFIER_SHARED_EXPORT_THUNK
      *XdvSharedExportThunks; // offset: 0xc (12)
};

// 0x0 (0) bytes
struct _ACTIVATION_CONTEXT_DATA

{};

// 0x0 (0) bytes
struct _KTMNOTIFICATION_PACKET

{};

// 0x0 (0) bytes
struct _ETW_PERFECT_HASH_FUNCTION

{};

// 0x0 (0) bytes
struct _SERVER_SILO_MONITOR

{};

// 0x0 (0) bytes
struct _HAL_PMC_COUNTERS

{};

// 0x0 (0) bytes
struct _ETW_STACK_CACHE

{};

// 0x0 (0) bytes
struct _CALLBACK_OBJECT

{};

typedef uint8_t UCHAR;

typedef uint64_t ULONGLONG;

// 0x0 (0) bytes
struct _DEVICE_OBJECT_LIST

{};

typedef void VOID;

// 0x0 (0) bytes
struct _PCW_INSTANCE

{};

// 0x0 (0) bytes
struct _PCW_BUFFER

{};

// 0x0 (0) bytes
struct _PCW_REGISTRATION

{};

typedef uint16_t USHORT;

// 0x4 (4) bytes
struct _MI_FILE_EXTENTS {
  struct _MI_FILE_EXTENTS_WAIT_BLOCK *WaitList; // offset: 0x0 (0)
};

// 0x0 (0) bytes
struct _SCSI_REQUEST_BLOCK

{};

// 0x0 (0) bytes
struct _JOB_IO_RATE_CONTROL

{};

// 0x0 (0) bytes
struct _JOB_NET_RATE_CONTROL

{};

// 0x0 (0) bytes
struct _JOB_CPU_RATE_CONTROL

{};

// 0x0 (0) bytes
struct _JOB_NOTIFICATION_INFORMATION

{};

// 0x0 (0) bytes
struct _JOB_ACCESS_STATE

{};

// 0x0 (0) bytes
struct _EPROCESS_QUOTA_BLOCK

{};

// 0x0 (0) bytes
struct _PAGEFAULT_HISTORY

{};

// 0x0 (0) bytes
struct _ESILO

{};

// 0x4 (4) bytes
struct _ARBITER_ADD_RESERVED_PARAMETERS {
  struct _DEVICE_OBJECT *ReserveDevice; // offset: 0x0 (0)
};

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

typedef int64_t LONGLONG;

typedef int16_t SHORT;

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

// 0x4 (4) bytes
struct _RTL_AVL_TREE {
  struct _RTL_BALANCED_NODE *Root; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _RTL_RB_TREE {
  struct _RTL_BALANCED_NODE *Root; // offset: 0x0 (0)
  struct _RTL_BALANCED_NODE *Min;  // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _RTL_SPLAY_LINKS {
  struct _RTL_SPLAY_LINKS *Parent;     // offset: 0x0 (0)
  struct _RTL_SPLAY_LINKS *LeftChild;  // offset: 0x4 (4)
  struct _RTL_SPLAY_LINKS *RightChild; // offset: 0x8 (8)
};

// 0x4 (4) bytes
struct _LDRP_CSLIST {
  struct _SINGLE_LIST_ENTRY *Tail; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _SINGLE_LIST_ENTRY {
  struct _SINGLE_LIST_ENTRY *Next; // offset: 0x0 (0)
};

// 0xc (12) bytes
struct _ETW_BUFFER_QUEUE {
  struct _SINGLE_LIST_ENTRY *QueueHead; // offset: 0x0 (0)
  struct _SINGLE_LIST_ENTRY *QueueTail; // offset: 0x4 (4)
  struct _SINGLE_LIST_ENTRY QueueEntry; // offset: 0x8 (8)
};

// 0x4 (4) bytes
struct _KWAIT_CHAIN {
  struct _SINGLE_LIST_ENTRY Head; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _KDPC_LIST {
  struct _SINGLE_LIST_ENTRY ListHead;   // offset: 0x0 (0)
  struct _SINGLE_LIST_ENTRY *LastEntry; // offset: 0x4 (4)
};

typedef int8_t CHAR;

// 0x0 (0) bytes
struct _FLS_CALLBACK_INFO

{};

// 0x0 (0) bytes
struct _ASSEMBLY_STORAGE_MAP

{};

// 0x4 (4) bytes
struct _ARBITER_QUERY_ARBITRATE_PARAMETERS {
  struct _LIST_ENTRY *ArbitrationList; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _ARBITER_BOOT_ALLOCATION_PARAMETERS {
  struct _LIST_ENTRY *ArbitrationList; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _LIST_ENTRY {
  struct _LIST_ENTRY *Flink; // offset: 0x0 (0)
  struct _LIST_ENTRY *Blink; // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _DELAY_ACK_FO {
  struct _LIST_ENTRY Links;                // offset: 0x0 (0)
  struct _FILE_OBJECT *OriginalFileObject; // offset: 0x8 (8)
};

// 0xc (12) bytes
struct _TRIAGE_PNP_DEVICE_COMPLETION_REQUEST {
  struct _LIST_ENTRY ListEntry;           // offset: 0x0 (0)
  struct _TRIAGE_DEVICE_NODE *DeviceNode; // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _TRIAGE_PNP_DEVICE_COMPLETION_QUEUE {
  struct _LIST_ENTRY DispatchedList; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _MMWORKING_SET_EXPANSION_HEAD {
  struct _LIST_ENTRY ListHead; // offset: 0x0 (0)
};

// 0x24 (36) bytes
struct _VI_FAULT_TRACE {
  struct _ETHREAD *Thread; // offset: 0x0 (0)
  VOID *StackTrace[8];     // offset: 0x4 (4)
};

// 0x20 (32) bytes
struct _VF_KE_CRITICAL_REGION_TRACE {
  struct _ETHREAD *Thread; // offset: 0x0 (0)
  VOID *StackTrace[7];     // offset: 0x4 (4)
};

// 0x4 (4) bytes
struct _ALPC_HANDLE_ENTRY {
  VOID *Object; // offset: 0x0 (0)
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

// 0x18 (24) bytes
struct _IO_TIMER {
  SHORT Type;                   // offset: 0x0 (0)
  SHORT TimerFlag;              // offset: 0x2 (2)
  struct _LIST_ENTRY TimerList; // offset: 0x4 (4)
  VOID (*TimerRoutine)
  (struct _DEVICE_OBJECT *arg1, VOID *arg2); // offset: 0xc (12)
  VOID *Context;                             // offset: 0x10 (16)
  struct _DEVICE_OBJECT *DeviceObject;       // offset: 0x14 (20)
};

// 0x8 (8) bytes
struct _TERMINATION_PORT {
  struct _TERMINATION_PORT *Next; // offset: 0x0 (0)
  VOID *Port;                     // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _WORK_QUEUE_ITEM {
  struct _LIST_ENTRY List;           // offset: 0x0 (0)
  VOID (*WorkerRoutine)(VOID *arg1); // offset: 0x8 (8)
  VOID *Parameter;                   // offset: 0xc (12)
};

// 0x14 (20) bytes
struct _MI_COMBINE_WORKITEM {
  VOID *NextEntry;                  // offset: 0x0 (0)
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _KREQUEST_PACKET {
  VOID *CurrentPacket[3]; // offset: 0x0 (0)
  VOID (*WorkerRoutine)
  (VOID *arg1, VOID *arg2, VOID *arg3, VOID *arg4); // offset: 0xc (12)
};

// 0x34 (52) bytes
struct _VF_BTS_DATA_MANAGEMENT_AREA {
  VOID *BTSBufferBase;          // offset: 0x0 (0)
  VOID *BTSIndex;               // offset: 0x4 (4)
  VOID *BTSMax;                 // offset: 0x8 (8)
  VOID *BTSInterruptThreshold;  // offset: 0xc (12)
  VOID *PEBSBufferBase;         // offset: 0x10 (16)
  VOID *PEBSIndex;              // offset: 0x14 (20)
  VOID *PEBSMax;                // offset: 0x18 (24)
  VOID *PEBSInterruptThreshold; // offset: 0x1c (28)
  VOID *PEBSCounterReset[2];    // offset: 0x20 (32)
  CHAR Reserved[12];            // offset: 0x28 (40)
};

// 0x40 (64) bytes
struct _OBJECT_REF_TRACE {
  VOID *StackTrace[16]; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _CLIENT_ID {
  VOID *UniqueProcess; // offset: 0x0 (0)
  VOID *UniqueThread;  // offset: 0x4 (4)
};

// 0x0 (0) bytes
struct _TP_CALLBACK_INSTANCE

{};

// 0x0 (0) bytes
struct _ACTIVATION_CONTEXT

{};

// 0x0 (0) bytes
struct _TP_CLEANUP_GROUP

{};

// 0x0 (0) bytes
struct _TP_POOL

{};

typedef int32_t LONG;

// 0x4 (4) bytes
enum _MI_DYNAMICBASE_BITMAP {

  DynamicBaseBitMap32 = 0,
  LastDynamicBaseBitMap = 1
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
  MaxFoExtTypes = 7
};

// 0x4 (4) bytes
enum _PERFINFO_MM_STAT {

  PerfInfoMMStatNotUsed = 0,
  PerfInfoMMStatAggregatePageCombine = 1,
  PerfInfoMMStatIterationPageCombine = 2,
  PerfInfoMMStatMax = 3
};

// 0x4 (4) bytes
enum _TlgOut_t {

  _TlgOutNULL = 0,
  _TlgOutNOPRINT = 1,
  _TlgOutSTRING = 2,
  _TlgOutBOOLEAN = 3,
  _TlgOutHEX = 4,
  _TlgOutPID = 5,
  _TlgOutTID = 6,
  _TlgOutPORT = 7,
  _TlgOutIPV4 = 8,
  _TlgOutIPV6 = 9,
  _TlgOutSOCKETADDRESS = 10,
  _TlgOutXML = 11,
  _TlgOutJSON = 12,
  _TlgOutWIN32ERROR = 13,
  _TlgOutNTSTATUS = 14,
  _TlgOutHRESULT = 15,
  _TlgOutFILETIME = 16,
  _TlgOutSIGNED = 17,
  _TlgOutUNSIGNED = 18,
  _TlgOutMax = 19,
  _TlgOutChain = 128,
  _TlgOutTypeMask = 127
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
  SharedNtdll32ExpInterlockedPopEntrySListFault = 4,
  SharedNtdll32ExpInterlockedPopEntrySListResume = 5,
  SharedNtdll32ExpInterlockedPopEntrySListEnd = 6,
  SharedNtdll32RtlUserThreadStart = 7,
  SharedNtdll32pQueryProcessDebugInformationRemote = 8,
  SharedNtdll32BaseAddress = 9,
  SharedNtdll32LdrSystemDllInitBlock = 10,
  Wow64SharedPageEntriesCount = 11
};

// 0x4 (4) bytes
enum _MI_CFG_BITMAP_TYPE {

  CfgBitMapNative = 0,
  CfgBitMapMax = 1
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
enum _TlgIn_t {

  _TlgInNULL = 0,
  _TlgInUNICODESTRING = 1,
  _TlgInANSISTRING = 2,
  _TlgInINT8 = 3,
  _TlgInUINT8 = 4,
  _TlgInINT16 = 5,
  _TlgInUINT16 = 6,
  _TlgInINT32 = 7,
  _TlgInUINT32 = 8,
  _TlgInINT64 = 9,
  _TlgInUINT64 = 10,
  _TlgInFLOAT = 11,
  _TlgInDOUBLE = 12,
  _TlgInBOOL32 = 13,
  _TlgInBINARY = 14,
  _TlgInGUID = 15,
  _TlgInPOINTER_unsupported = 16,
  _TlgInFILETIME = 17,
  _TlgInSYSTEMTIME = 18,
  _TlgInSID = 19,
  _TlgInHEXINT32 = 20,
  _TlgInHEXINT64 = 21,
  _TlgInCOUNTEDSTRING = 22,
  _TlgInCOUNTEDANSISTRING = 23,
  _TlgInSTRUCT = 24,
  _TlgInMax = 25,
  _TlgInINTPTR = 7,
  _TlgInUINTPTR = 8,
  _TlgInPOINTER = 20,
  _TlgInCcount = 32,
  _TlgInVcount = 64,
  _TlgInChain = 128,
  _TlgInCustom = 96,
  _TlgInTypeMask = 31,
  _TlgInCountMask = 96,
  _TlgInFlagMask = 224
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
enum _MM_POOL_FAILURE_REASONS {

  MmNonPagedNoPtes = 0,
  MmPriorityTooLow = 1,
  MmNonPagedNoPagesAvailable = 2,
  MmPagedNoPtes = 3,
  MmSessionPagedNoPtes = 4,
  MmPagedNoPagesAvailable = 5,
  MmSessionPagedNoPagesAvailable = 6,
  MmPagedNoCommit = 7,
  MmSessionPagedNoCommit = 8,
  MmNonPagedNoResidentAvailable = 9,
  MmNonPagedNoCommit = 10,
  MmMaximumFailureReason = 11
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
enum _EX_BALANCE_OBJECT {

  ExTimerExpiration = 0,
  ExThreadSetManagerEvent = 1,
  ExThreadReaperEvent = 2,
  ExMaximumBalanceObject = 3
};

// 0x4 (4) bytes
enum _MI_IO_PFN_TYPE {

  MiIoPfnProbes = 0,
  MiIoPfnMaps = 1,
  MiIoPfnUnmapped = 2,
  MiMaximumIoPfnType = 3
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
  AvailablePagesWaitMaximum = 2
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
enum _MODE {

  KernelMode = 0,
  UserMode = 1,
  MaximumMode = 2
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
enum CPU_VENDORS {

  CPU_NONE = 0,
  CPU_INTEL = 1,
  CPU_AMD = 2,
  CPU_CYRIX = 3,
  CPU_TRANSMETA = 4,
  CPU_VIA = 5,
  CPU_CENTAUR = 5,
  CPU_RISE = 6,
  CPU_UNKNOWN = 7
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
  JobObjectServerSiloDefaultCompartmentId = 41,
  MaxJobObjectInfoClass = 42
};

// 0x4 (4) bytes
enum _ETW_HEADER_TYPE {

  EtwHeaderTypeNative = 0,
  EtwHeaderTypeMax = 1
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
enum _KTIMER2_TYPE {

  KTimer2TypeMin = 0,
  KTimer2Plain = 0,
  KTimer2IdleResilient = 1,
  KTimer2HighResolution = 2,
  KTimer2NoWake = 3,
  KTimer2NoWakeFinite = 4,
  KTimer2TypeMax = 5
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
enum _IPI_TYPE {

  IpiAffinity = 0,
  IpiAllButSelf = 1,
  IpiAll = 2
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
enum _KSPIN_LOCK_QUEUE_NUMBER {

  LockQueueUnusedSpare0 = 0,
  LockQueueUnusedSpare1 = 1,
  LockQueueUnusedSpare2 = 2,
  LockQueueUnusedSpare3 = 3,
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
  LockQueueUnusedSpare15 = 15,
  LockQueueUnusedSpare16 = 16,
  LockQueueMaximumLock = 17
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
  PolicyDeviceMax = 11
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
  LoaderMaximum = 33
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

// 0x8 (8) bytes
struct _PEP_CRASHDUMP_INFORMATION {
  struct PEPHANDLE__ *DeviceHandle; // offset: 0x0 (0)
  VOID *DeviceContext;              // offset: 0x4 (4)
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
  MiVaPagedProtoPool = 14,
  MiVaMaximumType = 15,
  MiVaSystemPtesLarge = 16
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

// 0x10 (16) bytes
struct _SECURITY_SUBJECT_CONTEXT {
  VOID *ClientToken;                                     // offset: 0x0 (0)
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // offset: 0x4 (4)
  VOID *PrimaryToken;                                    // offset: 0x8 (8)
  VOID *ProcessAuditId;                                  // offset: 0xc (12)
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
enum _HARDWARE_COUNTER_TYPE {

  PMCCounter = 0,
  MaxHardwareCounterType = 1
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

// 0xc (12) bytes
struct _HIVE_WRITE_WAIT_QUEUE {
  struct _ETHREAD *ActiveThread;      // offset: 0x0 (0)
  struct _HIVE_WAIT_PACKET *WaitList; // offset: 0x4 (4)
  volatile ULONG OwnerBoosted;        // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _VF_TRACKER_STAMP {
  VOID *Thread;        // offset: 0x0 (0)
  UCHAR Flags : 8;     // offset: 0x4 (4)
  UCHAR OldIrql : 8;   // offset: 0x5 (5)
  UCHAR NewIrql : 8;   // offset: 0x6 (6)
  UCHAR Processor : 8; // offset: 0x7 (7)
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

// 0x10 (16) bytes
struct _CACHE_MANAGER_CALLBACKS {
  UCHAR (*AcquireForLazyWrite)(VOID *arg1, UCHAR arg2); // offset: 0x0 (0)
  VOID (*ReleaseFromLazyWrite)(VOID *arg1);             // offset: 0x4 (4)
  UCHAR (*AcquireForReadAhead)(VOID *arg1, UCHAR arg2); // offset: 0x8 (8)
  VOID (*ReleaseFromReadAhead)(VOID *arg1);             // offset: 0xc (12)
};

// 0x8 (8) bytes
struct _VF_ADDRESS_RANGE {
  UCHAR *Start; // offset: 0x0 (0)
  UCHAR *End;   // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _RELATION_LIST {
  struct _DEVICE_OBJECT_LIST *DeviceObjectList; // offset: 0x0 (0)
  UCHAR Sorted;                                 // offset: 0x4 (4)
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
  UCHAR CrossThreadPadding : 7;      // offset: 0x0 (0)
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
  UCHAR ForceCredits : 3;          // offset: 0x0 (0)
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

// 0x6 (6) bytes
struct _SID_IDENTIFIER_AUTHORITY {
  UCHAR Value[6]; // offset: 0x0 (0)
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

// 0x5 (5) bytes
struct _PROC_IDLE_POLICY {
  UCHAR PromotePercent;     // offset: 0x0 (0)
  UCHAR DemotePercent;      // offset: 0x1 (1)
  UCHAR PromotePercentBase; // offset: 0x2 (2)
  UCHAR DemotePercentBase;  // offset: 0x3 (3)
  UCHAR AllowScaling;       // offset: 0x4 (4)
};

// 0x2024 (8228) bytes
struct _KiIoAccessMap {
  UCHAR DirectionMap[32]; // offset: 0x0 (0)
  UCHAR IoMap[8196];      // offset: 0x20 (32)
};

// 0x10 (16) bytes
struct _RTL_BALANCED_LINKS {
  struct _RTL_BALANCED_LINKS *Parent;     // offset: 0x0 (0)
  struct _RTL_BALANCED_LINKS *LeftChild;  // offset: 0x4 (4)
  struct _RTL_BALANCED_LINKS *RightChild; // offset: 0x8 (8)
  CHAR Balance;                           // offset: 0xc (12)
  UCHAR Reserved[3];                      // offset: 0xd (13)
};

// 0x14 (20) bytes
struct _KTMOBJECT_NAMESPACE_LINK {
  struct _RTL_BALANCED_LINKS Links; // offset: 0x0 (0)
  UCHAR Expired;                    // offset: 0x10 (16)
};

// 0x4 (4) bytes
enum _NT_PRODUCT_TYPE {

  NtProductWinNt = 1,
  NtProductLanManNt = 2,
  NtProductServer = 3
};

// 0x14 (20) bytes
struct _MI_QUEUED_DEADSTACK_WORKITEM {
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x0 (0)
  volatile LONG Active;             // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _MI_COMBINE_PAGE_LISTHEAD {
  struct _RTL_AVL_TREE Table; // offset: 0x0 (0)
  volatile LONG Lock;         // offset: 0x4 (4)
};

// 0x8040 (32832) bytes
struct _STACK_TABLE {
  USHORT NumStackTraces;                    // offset: 0x0 (0)
  USHORT TraceCapacity;                     // offset: 0x2 (2)
  struct _OBJECT_REF_TRACE *StackTrace[16]; // offset: 0x4 (4)
  USHORT StackTableHash[16381];             // offset: 0x44 (68)
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

// 0x10 (16) bytes
struct _OBJECT_HEADER_CREATOR_INFO {
  struct _LIST_ENTRY TypeList;  // offset: 0x0 (0)
  VOID *CreatorUniqueProcess;   // offset: 0x8 (8)
  USHORT CreatorBackTraceIndex; // offset: 0xc (12)
  USHORT Reserved;              // offset: 0xe (14)
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

// 0x8 (8) bytes
struct _IO_IRP_EXT_TRACK_OFFSET_HEADER {
  USHORT Validation; // offset: 0x0 (0)
  USHORT Flags;      // offset: 0x2 (2)
  VOID (*TrackedOffsetCallback)
  (struct _IO_IRP_EXT_TRACK_OFFSET_HEADER *arg1,
   struct _IO_IRP_EXT_TRACK_OFFSET_HEADER *arg2,
   LONGLONG arg3); // offset: 0x4 (4)
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

// 0x8 (8) bytes
struct _TXN_PARAMETER_BLOCK {
  USHORT Length;           // offset: 0x0 (0)
  USHORT TxFsContext;      // offset: 0x2 (2)
  VOID *TransactionObject; // offset: 0x4 (4)
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
  USHORT SubsectionAccessed : 1;  // offset: 0x0 (0)
  USHORT Protection : 5;          // offset: 0x0 (0)
  USHORT StartingSector4132 : 10; // offset: 0x0 (0)
  USHORT SubsectionStatic : 1;    // offset: 0x2 (2)
  USHORT GlobalMemory : 1;        // offset: 0x2 (2)
  USHORT DirtyPages : 1;          // offset: 0x2 (2)
  USHORT OnDereferenceList : 1;   // offset: 0x2 (2)
  USHORT SectorEndOffset : 12;    // offset: 0x2 (2)
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
struct _PROC_PERF_HISTORY_ENTRY {
  USHORT Utility;            // offset: 0x0 (0)
  USHORT AffinitizedUtility; // offset: 0x2 (2)
  UCHAR Frequency;           // offset: 0x4 (4)
  UCHAR TaggedPercent[2];    // offset: 0x5 (5)
};

// 0x8 (8) bytes
struct _KIDTENTRY {
  USHORT Offset;         // offset: 0x0 (0)
  USHORT Selector;       // offset: 0x2 (2)
  USHORT Access;         // offset: 0x4 (4)
  USHORT ExtendedOffset; // offset: 0x6 (6)
};

// 0x24 (36) bytes
struct _ETW_PMC_SUPPORT {
  enum _KPROFILE_SOURCE Source[4];            // offset: 0x0 (0)
  volatile ULONG HookIdCount;                 // offset: 0x10 (16)
  USHORT HookId[4];                           // offset: 0x14 (20)
  volatile ULONG CountersCount;               // offset: 0x1c (28)
  struct _HAL_PMC_COUNTERS *ProcessorCtrs[1]; // offset: 0x20 (32)
};

// 0x8 (8) bytes
struct _STRING {
  USHORT Length;        // offset: 0x0 (0)
  USHORT MaximumLength; // offset: 0x2 (2)
  CHAR *Buffer;         // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _ETW_FILTER_STRING_TOKEN_ELEMENT {
  USHORT Length;  // offset: 0x0 (0)
  USHORT *String; // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _ETW_FILTER_STRING_TOKEN {
  USHORT Count;                                      // offset: 0x0 (0)
  struct _ETW_FILTER_STRING_TOKEN_ELEMENT Tokens[1]; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _UNICODE_STRING {
  USHORT Length;        // offset: 0x0 (0)
  USHORT MaximumLength; // offset: 0x2 (2)
  USHORT *Buffer;       // offset: 0x4 (4)
};

// 0x4 (4) bytes
struct _PROCESSOR_NUMBER {
  USHORT Group;   // offset: 0x0 (0)
  UCHAR Number;   // offset: 0x2 (2)
  UCHAR Reserved; // offset: 0x3 (3)
};

// 0x14 (20) bytes
struct _RELATIVE_SYMLINK_INFO {
  USHORT ExposedNamespaceLength;                     // offset: 0x0 (0)
  USHORT Flags;                                      // offset: 0x2 (2)
  USHORT DeviceNameLength;                           // offset: 0x4 (4)
  USHORT Reserved;                                   // offset: 0x6 (6)
  struct _RELATIVE_SYMLINK_INFO *InteriorMountPoint; // offset: 0x8 (8)
  struct _UNICODE_STRING OpenedName;                 // offset: 0xc (12)
};

// 0x8 (8) bytes
struct _OBJECT_NAME_INFORMATION {
  struct _UNICODE_STRING Name; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _SE_AUDIT_PROCESS_CREATION_INFO {
  struct _OBJECT_NAME_INFORMATION *ImageFileName; // offset: 0x0 (0)
};

// 0xc (12) bytes
struct _CURDIR {
  struct _UNICODE_STRING DosPath; // offset: 0x0 (0)
  VOID *Handle;                   // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _OBJECT_HEADER_NAME_INFO {
  struct _OBJECT_DIRECTORY *Directory; // offset: 0x0 (0)
  struct _UNICODE_STRING Name;         // offset: 0x4 (4)
  LONG ReferenceCount;                 // offset: 0xc (12)
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

// 0x34 (52) bytes
struct _MI_REBUILD_LARGE_PAGES {
  LONG Active;                                          // offset: 0x0 (0)
  struct _MI_REBUILD_LARGE_PAGE_COUNTDOWN Timer[16][1]; // offset: 0x4 (4)
  struct _WORK_QUEUE_ITEM WorkItem;                     // offset: 0x24 (36)
};

// 0x20 (32) bytes
struct _MI_LDW_WORK_CONTEXT {
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x0 (0)
  struct _FILE_OBJECT *FileObject;  // offset: 0x10 (16)
  LONG ErrorStatus;                 // offset: 0x14 (20)
  volatile LONG Active;             // offset: 0x18 (24)
  UCHAR FreeWhenDone;               // offset: 0x1c (28)
};

// 0x10 (16) bytes
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
          UCHAR Index : 1;            // offset: 0x3 (3)
          UCHAR Processor : 5;        // offset: 0x3 (3)
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
          UCHAR Instrumented : 1;               // offset: 0x2 (2)
          UCHAR ThreadReservedControlFlags : 1; // offset: 0x2 (2)
        };
      };
      UCHAR DebugActive; // offset: 0x3 (3)
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

// 0x20 (32) bytes
struct _KMUTANT {
  struct _DISPATCHER_HEADER Header;   // offset: 0x0 (0)
  struct _LIST_ENTRY MutantListEntry; // offset: 0x10 (16)
  struct _KTHREAD *OwnerThread;       // offset: 0x18 (24)
  UCHAR Abandoned;                    // offset: 0x1c (28)
  UCHAR ApcDisable;                   // offset: 0x1d (29)
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

// 0x1c (28) bytes
struct _MMDEREFERENCE_SEGMENT_HEADER {
  struct _KSEMAPHORE Semaphore; // offset: 0x0 (0)
  struct _LIST_ENTRY ListHead;  // offset: 0x14 (20)
};

// 0x10 (16) bytes
struct _KEVENT {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 (0)
};

// 0x20 (32) bytes
struct _MI_RESUME_WORKITEM {
  struct _KEVENT ResumeCompleteEvent; // offset: 0x0 (0)
  struct _WORK_QUEUE_ITEM WorkItem;   // offset: 0x10 (16)
};

// 0x18 (24) bytes
struct _HIVE_WAIT_PACKET {
  struct _KEVENT WakeEvent;       // offset: 0x0 (0)
  LONG Status;                    // offset: 0x10 (16)
  struct _HIVE_WAIT_PACKET *Next; // offset: 0x14 (20)
};

// 0x14 (20) bytes
struct _PALPC_PORT_REFERENCE_WAIT_BLOCK {
  struct _KEVENT DesiredReferenceNoEvent; // offset: 0x0 (0)
  LONG DesiredReferenceNo;                // offset: 0x10 (16)
};

// 0x14 (20) bytes
struct _CACHE_UNINITIALIZE_EVENT {
  struct _CACHE_UNINITIALIZE_EVENT *Next; // offset: 0x0 (0)
  struct _KEVENT Event;                   // offset: 0x4 (4)
};

// 0x18 (24) bytes
struct _IO_REMOVE_LOCK_COMMON_BLOCK {
  UCHAR Removed;              // offset: 0x0 (0)
  UCHAR Reserved[3];          // offset: 0x1 (1)
  LONG IoCount;               // offset: 0x4 (4)
  struct _KEVENT RemoveEvent; // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _IO_REMOVE_LOCK {
  struct _IO_REMOVE_LOCK_COMMON_BLOCK Common; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _KGATE {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 (0)
};

// 0x18 (24) bytes
struct _MMMOD_WRITER_LISTHEAD {
  struct _LIST_ENTRY ListHead; // offset: 0x0 (0)
  union {
    struct _KGATE Gate;   // offset: 0x8 (8)
    struct _KEVENT Event; // offset: 0x8 (8)
  };
};

// 0x14 (20) bytes
struct _MI_FILE_EXTENTS_WAIT_BLOCK {
  struct _MI_FILE_EXTENTS_WAIT_BLOCK *Next; // offset: 0x0 (0)
  struct _KGATE Gate;                       // offset: 0x4 (4)
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

// 0x24 (36) bytes
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
};

// 0x204 (516) bytes
struct _CALL_PERFORMANCE_DATA {
  ULONG SpinLock;                   // offset: 0x0 (0)
  struct _LIST_ENTRY HashTable[64]; // offset: 0x4 (4)
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

// 0xc (12) bytes
struct _VF_BTS_RECORD {
  VOID *JumpedFrom;    // offset: 0x0 (0)
  VOID *JumpedTo;      // offset: 0x4 (4)
  ULONG Unused1 : 3;   // offset: 0x8 (8)
  ULONG Predicted : 4; // offset: 0x8 (8)
  ULONG Unused2 : 25;  // offset: 0x8 (8)
};

// 0x40f0 (16624) bytes
struct _VI_DEADLOCK_GLOBALS {
  LONGLONG TimeAcquire;                                // offset: 0x0 (0)
  LONGLONG TimeRelease;                                // offset: 0x8 (8)
  struct _LIST_ENTRY *ResourceDatabase;                // offset: 0x10 (16)
  ULONG ResourceDatabaseCount;                         // offset: 0x14 (20)
  struct _VF_ADDRESS_RANGE ResourceAddressRange[1023]; // offset: 0x18 (24)
  struct _LIST_ENTRY *ThreadDatabase;                  // offset: 0x2010 (8208)
  ULONG ThreadDatabaseCount;                           // offset: 0x2014 (8212)
  struct _VF_ADDRESS_RANGE ThreadAddressRange[1023];   // offset: 0x2018 (8216)
  volatile ULONG AllocationFailures;                   // offset: 0x4010 (16400)
  ULONG NodesTrimmedBasedOnAge;                        // offset: 0x4014 (16404)
  ULONG NodesTrimmedBasedOnCount;                      // offset: 0x4018 (16408)
  ULONG NodesSearched;                                 // offset: 0x401c (16412)
  ULONG MaxNodesSearched;                              // offset: 0x4020 (16416)
  ULONG SequenceNumber;                                // offset: 0x4024 (16420)
  ULONG RecursionDepthLimit;                           // offset: 0x4028 (16424)
  ULONG SearchedNodesLimit;                            // offset: 0x402c (16428)
  ULONG DepthLimitHits;                                // offset: 0x4030 (16432)
  ULONG SearchLimitHits;                               // offset: 0x4034 (16436)
  ULONG StackLimitHits;                                // offset: 0x4038 (16440)
  ULONG ABC_ACB_Skipped;                               // offset: 0x403c (16444)
  ULONG OutOfOrderReleases;                            // offset: 0x4040 (16448)
  ULONG NodesReleasedOutOfOrder;                       // offset: 0x4044 (16452)
  ULONG TotalReleases;                                 // offset: 0x4048 (16456)
  ULONG RootNodesDeleted;                              // offset: 0x404c (16460)
  ULONG ForgetHistoryCounter;                          // offset: 0x4050 (16464)
  VOID *Instigator;                                    // offset: 0x4054 (16468)
  ULONG NumberOfParticipants;                          // offset: 0x4058 (16472)
  struct _VI_DEADLOCK_NODE *Participant[32];           // offset: 0x405c (16476)
  LONG ChildrenCountWatermark;                         // offset: 0x40dc (16604)
  enum _KERNEL_STACK_LIMITS StackType;                 // offset: 0x40e0 (16608)
  ULONG StackLowLimit;                                 // offset: 0x40e4 (16612)
  ULONG StackHighLimit;                                // offset: 0x40e8 (16616)
};

// 0x14 (20) bytes
struct _NB10 {
  ULONG Signature; // offset: 0x0 (0)
  ULONG Offset;    // offset: 0x4 (4)
  ULONG TimeStamp; // offset: 0x8 (8)
  ULONG Age;       // offset: 0xc (12)
  CHAR PdbName[1]; // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _LDR_SERVICE_TAG_RECORD {
  struct _LDR_SERVICE_TAG_RECORD *Next; // offset: 0x0 (0)
  ULONG ServiceTag;                     // offset: 0x4 (4)
};

// 0x2c (44) bytes
struct _LDR_DDAG_NODE {
  struct _LIST_ENTRY Modules;                     // offset: 0x0 (0)
  struct _LDR_SERVICE_TAG_RECORD *ServiceTagList; // offset: 0x8 (8)
  ULONG LoadCount;                                // offset: 0xc (12)
  ULONG LoadWhileUnloadingCount;                  // offset: 0x10 (16)
  ULONG LowestLink;                               // offset: 0x14 (20)
  struct _LDRP_CSLIST Dependencies;               // offset: 0x18 (24)
  struct _LDRP_CSLIST IncomingDependencies;       // offset: 0x1c (28)
  enum _LDR_DDAG_STATE State;                     // offset: 0x20 (32)
  struct _SINGLE_LIST_ENTRY CondenseLink;         // offset: 0x24 (36)
  ULONG PreorderNumber;                           // offset: 0x28 (40)
};

// 0x4 (4) bytes
union _PPM_COORDINATED_SYNCHRONIZATION {
  LONG AsLong;               // offset: 0x0 (0)
  ULONG EnterProcessor : 14; // offset: 0x0 (0)
  ULONG ExitProcessor : 14;  // offset: 0x0 (0)
  ULONG Transition : 2;      // offset: 0x0 (0)
  ULONG Entered : 1;         // offset: 0x0 (0)
  ULONG Reserved : 1;        // offset: 0x0 (0)
};

// 0xc (12) bytes
struct _SHARED_CACHE_MAP_LIST_CURSOR {
  struct _LIST_ENTRY SharedCacheMapLinks; // offset: 0x0 (0)
  ULONG Flags;                            // offset: 0x8 (8)
};

// 0x44 (68) bytes
struct _PTE_TRACKER {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 (0)
  struct _MDL *Mdl;             // offset: 0x8 (8)
  ULONG Count;                  // offset: 0xc (12)
  VOID *SystemVa;               // offset: 0x10 (16)
  VOID *StartVa;                // offset: 0x14 (20)
  ULONG Offset;                 // offset: 0x18 (24)
  ULONG Length;                 // offset: 0x1c (28)
  ULONG Page;                   // offset: 0x20 (32)
  ULONG IoMapping : 1;          // offset: 0x24 (36)
  ULONG Matched : 1;            // offset: 0x24 (36)
  ULONG CacheAttribute : 2;     // offset: 0x24 (36)
  ULONG GuardPte : 1;           // offset: 0x24 (36)
  ULONG Spare : 27;             // offset: 0x24 (36)
  VOID *StackTrace[7];          // offset: 0x28 (40)
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

// 0x10 (16) bytes
struct _POP_ACTION_TRIGGER {
  enum POWER_POLICY_DEVICE_TYPE Type; // offset: 0x0 (0)
  ULONG Flags;                        // offset: 0x4 (4)
  struct _POP_TRIGGER_WAIT *Wait;     // offset: 0x8 (8)
  union {
    struct {
      ULONG PercentLevel; // offset: 0x0 (0)
    } Battery;            // offset: 0xc (12)
    struct {
      ULONG Type; // offset: 0x0 (0)
    } Button;     // offset: 0xc (12)
  };
};

// 0x20 (32) bytes
struct _POP_TRIGGER_WAIT {
  struct _KEVENT Event;                // offset: 0x0 (0)
  LONG Status;                         // offset: 0x10 (16)
  struct _LIST_ENTRY Link;             // offset: 0x14 (20)
  struct _POP_ACTION_TRIGGER *Trigger; // offset: 0x1c (28)
};

// 0x20 (32) bytes
struct _VI_DEADLOCK_THREAD {
  struct _KTHREAD *Thread;                    // offset: 0x0 (0)
  struct _VI_DEADLOCK_NODE *CurrentSpinNode;  // offset: 0x4 (4)
  struct _VI_DEADLOCK_NODE *CurrentOtherNode; // offset: 0x8 (8)
  union {
    struct _LIST_ENTRY ListEntry;     // offset: 0xc (12)
    struct _LIST_ENTRY FreeListEntry; // offset: 0xc (12)
  };
  ULONG NodeCount;            // offset: 0x14 (20)
  volatile ULONG PagingCount; // offset: 0x18 (24)
  UCHAR ThreadUsesEresources; // offset: 0x1c (28)
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

// 0x6c (108) bytes
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
  union {
    ULONG Active : 1;             // offset: 0x24 (36)
    ULONG OnlyTryAcquireUsed : 1; // offset: 0x24 (36)
    ULONG ReleasedOutOfOrder : 1; // offset: 0x24 (36)
    ULONG SequenceNumber : 29;    // offset: 0x24 (36)
    ULONG Whole;                  // offset: 0x24 (36)

  } u1;                      // offset: 0x24 (36)
  LONG ChildrenCount;        // offset: 0x28 (40)
  VOID *StackTrace[8];       // offset: 0x2c (44)
  VOID *ParentStackTrace[8]; // offset: 0x4c (76)
};

// 0x4 (4) bytes
struct _MI_SESSION_DRIVER_UNLOAD {
  union {
    VOID (*Function)(struct _DRIVER_OBJECT *arg1); // offset: 0x0 (0)
    ULONG FunctionValue;                           // offset: 0x0 (0)
  };
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

// 0x40 (64) bytes
struct _VF_POOL_TRACE {
  VOID *Address;           // offset: 0x0 (0)
  ULONG Size;              // offset: 0x4 (4)
  struct _ETHREAD *Thread; // offset: 0x8 (8)
  VOID *StackTrace[13];    // offset: 0xc (12)
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

// 0x10 (16) bytes
struct _LOCK_HEADER {
  struct _RTL_AVL_TREE LockTree; // offset: 0x0 (0)
  ULONG Count;                   // offset: 0x4 (4)
  ULONG Lock;                    // offset: 0x8 (8)
  ULONG Valid;                   // offset: 0xc (12)
};

// 0x28 (40) bytes
struct _PO_NOTIFY_ORDER_LEVEL {
  ULONG DeviceCount;             // offset: 0x0 (0)
  ULONG ActiveCount;             // offset: 0x4 (4)
  struct _LIST_ENTRY WaitSleep;  // offset: 0x8 (8)
  struct _LIST_ENTRY ReadySleep; // offset: 0x10 (16)
  struct _LIST_ENTRY ReadyS0;    // offset: 0x18 (24)
  struct _LIST_ENTRY WaitS0;     // offset: 0x20 (32)
};

// 0xd0 (208) bytes
struct _PO_DEVICE_NOTIFY_ORDER {
  UCHAR Locked;                                // offset: 0x0 (0)
  struct _DEVICE_OBJECT **WarmEjectPdoPointer; // offset: 0x4 (4)
  struct _PO_NOTIFY_ORDER_LEVEL OrderLevel[5]; // offset: 0x8 (8)
};

// 0x104 (260) bytes
struct _POP_DEVICE_SYS_STATE {
  UCHAR IrpMinor;                        // offset: 0x0 (0)
  enum _SYSTEM_POWER_STATE SystemState;  // offset: 0x4 (4)
  ULONG SpinLock;                        // offset: 0x8 (8)
  struct _KTHREAD *Thread;               // offset: 0xc (12)
  struct _KEVENT *AbortEvent;            // offset: 0x10 (16)
  struct _KSEMAPHORE *ReadySemaphore;    // offset: 0x14 (20)
  struct _KSEMAPHORE *FinishedSemaphore; // offset: 0x18 (24)
  struct _PO_DEVICE_NOTIFY_ORDER Order;  // offset: 0x1c (28)
  struct _LIST_ENTRY Pending;            // offset: 0xec (236)
  LONG Status;                           // offset: 0xf4 (244)
  struct _DEVICE_OBJECT *FailedDevice;   // offset: 0xf8 (248)
  UCHAR Waking;                          // offset: 0xfc (252)
  UCHAR Cancelled;                       // offset: 0xfd (253)
  UCHAR IgnoreErrors;                    // offset: 0xfe (254)
  UCHAR IgnoreNotImplemented;            // offset: 0xff (255)
  UCHAR TimeRefreshLockAcquired;         // offset: 0x100 (256)
};

// 0x18 (24) bytes
struct _DIAGNOSTIC_BUFFER {
  ULONG Size;                      // offset: 0x0 (0)
  enum _REQUESTER_TYPE CallerType; // offset: 0x4 (4)
  union {
    struct {
      ULONG ProcessImageNameOffset; // offset: 0x8 (8)
      ULONG ProcessId;              // offset: 0xc (12)
      ULONG ServiceTag;             // offset: 0x10 (16)
    };
    struct {
      ULONG DeviceDescriptionOffset; // offset: 0x8 (8)
      ULONG DevicePathOffset;        // offset: 0xc (12)
    };
  };
  ULONG ReasonOffset; // offset: 0x14 (20)
};

// 0x10 (16) bytes
struct _RTL_ATOM_TABLE_REFERENCE {
  struct _LIST_ENTRY LowBoxList; // offset: 0x0 (0)
  ULONG LowBoxID;                // offset: 0x8 (8)
  USHORT ReferenceCount;         // offset: 0xc (12)
  USHORT Flags;                  // offset: 0xe (14)
};

// 0x1c (28) bytes
struct _RTL_ATOM_TABLE_ENTRY {
  struct _RTL_ATOM_TABLE_ENTRY *HashLink;     // offset: 0x0 (0)
  USHORT HandleIndex;                         // offset: 0x4 (4)
  USHORT Atom;                                // offset: 0x6 (6)
  struct _RTL_ATOM_TABLE_REFERENCE Reference; // offset: 0x8 (8)
  UCHAR NameLength;                           // offset: 0x18 (24)
  WCHAR Name[1];                              // offset: 0x1a (26)
};

// 0x24 (36) bytes
struct _PNP_DEVICE_COMPLETION_REQUEST {
  struct _LIST_ENTRY ListEntry;            // offset: 0x0 (0)
  struct _DEVICE_NODE *DeviceNode;         // offset: 0x8 (8)
  VOID *Context;                           // offset: 0xc (12)
  enum _PNP_DEVNODE_STATE CompletionState; // offset: 0x10 (16)
  ULONG IrpPended;                         // offset: 0x14 (20)
  LONG Status;                             // offset: 0x18 (24)
  VOID *Information;                       // offset: 0x1c (28)
  LONG ReferenceCount;                     // offset: 0x20 (32)
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

// 0x18 (24) bytes
struct _VF_SUSPECT_DRIVER_ENTRY {
  struct _LIST_ENTRY Links;        // offset: 0x0 (0)
  ULONG Loads;                     // offset: 0x8 (8)
  ULONG Unloads;                   // offset: 0xc (12)
  struct _UNICODE_STRING BaseName; // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _VF_AVL_TREE_NODE {
  VOID *p;         // offset: 0x0 (0)
  ULONG RangeSize; // offset: 0x4 (4)
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

// 0xc (12) bytes
struct _HAL_CHANNEL_MEMORY_RANGES {
  ULONG PageFrameIndex;    // offset: 0x0 (0)
  USHORT MpnId;            // offset: 0x4 (4)
  USHORT Node;             // offset: 0x6 (6)
  USHORT Channel;          // offset: 0x8 (8)
  UCHAR IsPowerManageable; // offset: 0xa (10)
  UCHAR DeepPowerState;    // offset: 0xb (11)
};

// 0x8 (8) bytes
struct _HAL_NODE_RANGE {
  ULONG PageFrameIndex; // offset: 0x0 (0)
  ULONG Node;           // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _PAE_PAGEINFO {
  struct _LIST_ENTRY ListHead; // offset: 0x0 (0)
  ULONG PageFrameNumber;       // offset: 0x8 (8)
  ULONG EntriesInUse;          // offset: 0xc (12)
};

// 0x18 (24) bytes
struct _MI_IO_CACHE_STATS {
  ULONG UnusedBlocks;          // offset: 0x0 (0)
  ULONG ActiveCacheMatch;      // offset: 0x4 (4)
  ULONG ActiveCacheOverride;   // offset: 0x8 (8)
  ULONG UnmappedCacheFlush;    // offset: 0xc (12)
  ULONG UnmappedCacheMatch;    // offset: 0x10 (16)
  ULONG UnmappedCacheConflict; // offset: 0x14 (20)
};

// 0x8 (8) bytes
struct _MI_FORCED_COMMITS {
  ULONG Regular; // offset: 0x0 (0)
  ULONG Wrap;    // offset: 0x4 (4)
};

// 0x3c (60) bytes
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
};

// 0x10 (16) bytes
struct _MM_SYSTEM_PAGE_COUNTS {
  ULONG SystemCodePage;        // offset: 0x0 (0)
  ULONG SystemDriverPage;      // offset: 0x4 (4)
  LONG TotalSystemCodePages;   // offset: 0x8 (8)
  LONG TotalSystemDriverPages; // offset: 0xc (12)
};

// 0x200 (512) bytes
struct _MI_RESAVAIL_TRACKER {
  ULONG AllocateKernelStack;                    // offset: 0x0 (0)
  ULONG AllocateGrowKernelStack;                // offset: 0x4 (4)
  ULONG FreeKernelStack;                        // offset: 0x8 (8)
  ULONG FreeKernelStackError;                   // offset: 0xc (12)
  ULONG FreeGrowKernelStackError;               // offset: 0x10 (16)
  ULONG AllocateCreateProcess;                  // offset: 0x14 (20)
  ULONG FreeCreateProcessError;                 // offset: 0x18 (24)
  ULONG FreeDeleteProcess;                      // offset: 0x1c (28)
  ULONG FreeCleanProcess;                       // offset: 0x20 (32)
  ULONG FreeCleanProcessError;                  // offset: 0x24 (36)
  ULONG AllocateAddProcessWsMetaPage;           // offset: 0x28 (40)
  ULONG AllocateWsIncrease;                     // offset: 0x2c (44)
  ULONG FreeWsIncreaseError;                    // offset: 0x30 (48)
  ULONG FreeWsIncreaseErrorMax;                 // offset: 0x34 (52)
  ULONG FreeWsDecrease;                         // offset: 0x38 (56)
  ULONG AllocateWorkingSetPage;                 // offset: 0x3c (60)
  ULONG FreeWorkingSetPageError;                // offset: 0x40 (64)
  ULONG FreeDeletePteRange;                     // offset: 0x44 (68)
  ULONG AllocatePageTablesForProcessMetadata;   // offset: 0x48 (72)
  ULONG FreePageTablesForProcessMetadataError2; // offset: 0x4c (76)
  ULONG AllocatePageTablesForSystem;            // offset: 0x50 (80)
  ULONG FreePageTablesExcess;                   // offset: 0x54 (84)
  ULONG FreeSystemVaPageTables;                 // offset: 0x58 (88)
  ULONG FreeSessionVaPageTables;                // offset: 0x5c (92)
  ULONG AllocateCreateSession;                  // offset: 0x60 (96)
  ULONG FreeSessionWsDereference;               // offset: 0x64 (100)
  ULONG FreeSessionDereference;                 // offset: 0x68 (104)
  ULONG AllocateLockedSessionImage;             // offset: 0x6c (108)
  ULONG FreeLockedSessionImage;                 // offset: 0x70 (112)
  ULONG FreeSessionImageConversion;             // offset: 0x74 (116)
  ULONG AllocateWsAdjustPageTable;              // offset: 0x78 (120)
  ULONG FreeWsAdjustPageTable;                  // offset: 0x7c (124)
  ULONG FreeWsAdjustPageTableError;             // offset: 0x80 (128)
  ULONG AllocateNoLowMemory;                    // offset: 0x84 (132)
  ULONG AllocatePagedPoolLockedDown;            // offset: 0x88 (136)
  ULONG FreePagedPoolLockedDown;                // offset: 0x8c (140)
  ULONG AllocateSystemBitmaps;                  // offset: 0x90 (144)
  ULONG FreeSystemBitmapsError;                 // offset: 0x94 (148)
  ULONG AllocateForMdl;                         // offset: 0x98 (152)
  ULONG FreeFromMdl;                            // offset: 0x9c (156)
  ULONG AllocateForMdlPartition;                // offset: 0xa0 (160)
  ULONG FreeFromMdlPartition;                   // offset: 0xa4 (164)
  ULONG FreeMdlExcess;                          // offset: 0xa8 (168)
  ULONG AllocateExpansionNonPagedPool;          // offset: 0xac (172)
  ULONG FreeExpansionNonPagedPool;              // offset: 0xb0 (176)
  ULONG AllocateVad;                            // offset: 0xb4 (180)
  ULONG RemoveVad;                              // offset: 0xb8 (184)
  ULONG FreeVad;                                // offset: 0xbc (188)
  ULONG AllocateContiguous;                     // offset: 0xc0 (192)
  ULONG FreeContiguousPages;                    // offset: 0xc4 (196)
  ULONG FreeContiguousError;                    // offset: 0xc8 (200)
  ULONG FreeLargePageMemory;                    // offset: 0xcc (204)
  ULONG AllocateSystemWsles;                    // offset: 0xd0 (208)
  ULONG FreeSystemWsles;                        // offset: 0xd4 (212)
  ULONG AllocateSystemInitWs;                   // offset: 0xd8 (216)
  ULONG AllocateSessionInitWs;                  // offset: 0xdc (220)
  ULONG FreeSessionInitWsError;                 // offset: 0xe0 (224)
  ULONG AllocateSystemImage;                    // offset: 0xe4 (228)
  ULONG AllocateSystemImageLoad;                // offset: 0xe8 (232)
  ULONG AllocateSessionSharedImage;             // offset: 0xec (236)
  ULONG FreeSystemImageInitCode;                // offset: 0xf0 (240)
  ULONG FreeSystemImageLargePageConversion;     // offset: 0xf4 (244)
  ULONG FreeSystemImageError;                   // offset: 0xf8 (248)
  ULONG FreeSystemImageLoadExcess;              // offset: 0xfc (252)
  ULONG FreeUnloadSystemImage;                  // offset: 0x100 (256)
  ULONG FreeReloadBootImageLarge;               // offset: 0x104 (260)
  ULONG FreeIndependent;                        // offset: 0x108 (264)
  ULONG AllocateHotAdd;                         // offset: 0x10c (268)
  ULONG AllocateHotRemove;                      // offset: 0x110 (272)
  ULONG FreeHotAdd;                             // offset: 0x114 (276)
  ULONG FreeHotAddEcc;                          // offset: 0x118 (280)
  ULONG FreeHotAddError;                        // offset: 0x11c (284)
  ULONG FreeHotAddUnmap;                        // offset: 0x120 (288)
  ULONG AllocateBoot;                           // offset: 0x124 (292)
  ULONG FreeLoaderBlock;                        // offset: 0x128 (296)
  ULONG AllocateNonPagedSpecialPool;            // offset: 0x12c (300)
  ULONG FreeNonPagedSpecialPoolError;           // offset: 0x130 (304)
  ULONG FreeNonPagedSpecialPool;                // offset: 0x134 (308)
  ULONG AllocateSharedSegmentPage;              // offset: 0x138 (312)
  ULONG FreeSharedSegmentPage;                  // offset: 0x13c (316)
  ULONG AllocateZeroPage;                       // offset: 0x140 (320)
  ULONG FreeZeroPage;                           // offset: 0x144 (324)
  ULONG AllocateForPo;                          // offset: 0x148 (328)
  ULONG AllocateForPoForce;                     // offset: 0x14c (332)
  ULONG FreeForPo;                              // offset: 0x150 (336)
  ULONG AllocateThreadHardFaultBehavior;        // offset: 0x154 (340)
  ULONG FreeThreadHardFaultBehavior;            // offset: 0x158 (344)
  ULONG ObtainFaultCharges;                     // offset: 0x15c (348)
  ULONG FreeFaultCharges;                       // offset: 0x160 (352)
  ULONG AllocateStoreCharges;                   // offset: 0x164 (356)
  ULONG FreeStoreCharges;                       // offset: 0x168 (360)
  ULONG ObtainLockedPageCharge;                 // offset: 0x180 (384)
  ULONG FreeLockedPageCharge;                   // offset: 0x1c0 (448)
  ULONG AllocateStore;                          // offset: 0x1c4 (452)
  ULONG FreeStore;                              // offset: 0x1c8 (456)
  ULONG AllocateSystemImageProtos;              // offset: 0x1cc (460)
  ULONG FreeSystemImageProtos;                  // offset: 0x1d0 (464)
  ULONG AllocateModWriterCharge;                // offset: 0x1d4 (468)
  ULONG FreeModWriterCharge;                    // offset: 0x1d8 (472)
  ULONG AllocateMappedWriterCharge;             // offset: 0x1dc (476)
  ULONG FreeMappedWriterCharge;                 // offset: 0x1e0 (480)
  ULONG AllocateRegistryCharges;                // offset: 0x1e4 (484)
  ULONG FreeRegistryCharges;                    // offset: 0x1e8 (488)
};

// 0x34 (52) bytes
struct _MI_IO_PAGE_STATE {
  ULONG IoPfnLock;                        // offset: 0x0 (0)
  struct _RTL_AVL_TREE IoPfnRoot[3];      // offset: 0x4 (4)
  struct _LIST_ENTRY UnusedCachedMaps;    // offset: 0x10 (16)
  ULONG OldestCacheFlushTimeStamp;        // offset: 0x18 (24)
  struct _MI_IO_CACHE_STATS IoCacheStats; // offset: 0x1c (28)
};

// 0x14 (20) bytes
struct _RTL_RANGE_LIST {
  struct _LIST_ENTRY ListHead; // offset: 0x0 (0)
  ULONG Flags;                 // offset: 0x8 (8)
  ULONG Count;                 // offset: 0xc (12)
  ULONG Stamp;                 // offset: 0x10 (16)
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

// 0x8c (140) bytes
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
  volatile ULONG PagedBytes;                         // offset: 0x50 (80)
  volatile ULONG NonPagedBytes;                      // offset: 0x54 (84)
  ULONG PeakPagedBytes;                              // offset: 0x58 (88)
  ULONG PeakNonPagedBytes;                           // offset: 0x5c (92)
  volatile ULONG BurstAllocationsFailedDeliberately; // offset: 0x60 (96)
  ULONG SessionTrims;                                // offset: 0x64 (100)
  volatile ULONG OptionChanges;                      // offset: 0x68 (104)
  volatile ULONG VerifyMode;                         // offset: 0x6c (108)
  struct _UNICODE_STRING PreviousBucketName;         // offset: 0x70 (112)
  volatile ULONG ExecutePoolTypes;                   // offset: 0x78 (120)
  volatile ULONG ExecutePageProtections;             // offset: 0x7c (124)
  volatile ULONG ExecutePageMappings;                // offset: 0x80 (128)
  volatile ULONG ExecuteWriteSections;               // offset: 0x84 (132)
  volatile ULONG SectionAlignmentFailures;           // offset: 0x88 (136)
};

// 0x14 (20) bytes
struct _MEMORY_ALLOCATION_DESCRIPTOR {
  struct _LIST_ENTRY ListEntry;    // offset: 0x0 (0)
  enum _TYPE_OF_MEMORY MemoryType; // offset: 0x8 (8)
  ULONG BasePage;                  // offset: 0xc (12)
  ULONG PageCount;                 // offset: 0x10 (16)
};

// 0xc (12) bytes
struct _KSYSTEM_TIME {
  ULONG LowPart;  // offset: 0x0 (0)
  LONG High1Time; // offset: 0x4 (4)
  LONG High2Time; // offset: 0x8 (8)
};

// 0x1c (28) bytes
struct _POOL_TRACKER_TABLE {
  volatile LONG Key;    // offset: 0x0 (0)
  ULONG NonPagedAllocs; // offset: 0x4 (4)
  ULONG NonPagedFrees;  // offset: 0x8 (8)
  ULONG NonPagedBytes;  // offset: 0xc (12)
  ULONG PagedAllocs;    // offset: 0x10 (16)
  ULONG PagedFrees;     // offset: 0x14 (20)
  ULONG PagedBytes;     // offset: 0x18 (24)
};

// 0x8 (8) bytes
struct _TEB_ACTIVE_FRAME_CONTEXT {
  ULONG Flags;           // offset: 0x0 (0)
  const CHAR *FrameName; // offset: 0x4 (4)
};

// 0x20 (32) bytes
struct _VI_TRACK_IRQL {
  VOID *Thread;        // offset: 0x0 (0)
  UCHAR OldIrql;       // offset: 0x4 (4)
  UCHAR NewIrql;       // offset: 0x5 (5)
  USHORT Processor;    // offset: 0x6 (6)
  ULONG TickCount;     // offset: 0x8 (8)
  VOID *StackTrace[5]; // offset: 0xc (12)
};

// 0x14 (20) bytes
struct _CALL_HASH_ENTRY {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 (0)
  VOID *CallersAddress;         // offset: 0x8 (8)
  VOID *CallersCaller;          // offset: 0xc (12)
  ULONG CallCount;              // offset: 0x10 (16)
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

// 0xc (12) bytes
struct _IOP_IRP_EXTENSION_STATUS {
  ULONG Flags;      // offset: 0x0 (0)
  ULONG ActivityId; // offset: 0x4 (4)
  ULONG IoTracking; // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _HEAP_UCR_DESCRIPTOR {
  struct _LIST_ENTRY ListEntry;    // offset: 0x0 (0)
  struct _LIST_ENTRY SegmentEntry; // offset: 0x8 (8)
  VOID *Address;                   // offset: 0x10 (16)
  ULONG Size;                      // offset: 0x14 (20)
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

// 0x28 (40) bytes
struct _CM_DIRTY_VECTOR_LOG_ENTRY {
  struct _ETHREAD *Thread;                   // offset: 0x0 (0)
  enum _CM_DIRTY_VECTOR_OPERATION Operation; // offset: 0x4 (4)
  union {
    struct {
      ULONG Start;                // offset: 0x0 (0)
      ULONG Length;               // offset: 0x4 (4)
    } DirtyVectorModifiedContext; // offset: 0x8 (8)
    struct {
      ULONG RangeCount;        // offset: 0x0 (0)
      ULONG SetBitCount;       // offset: 0x4 (4)
    } DirtyDataCaptureContext; // offset: 0x8 (8)
    struct {
      ULONG Context1; // offset: 0x0 (0)
      ULONG Context2; // offset: 0x4 (4)
    } Raw;            // offset: 0x8 (8)

  } Data;         // offset: 0x8 (8)
  VOID *Stack[6]; // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _KTRANSACTION_HISTORY {
  enum<unnamed - enum - KTMOH_CommitTransaction_Result>
      RecordType; // offset: 0x0 (0)
  ULONG Payload;  // offset: 0x4 (4)
};

// 0x38 (56) bytes
struct _RTL_AVL_TABLE {
  struct _RTL_BALANCED_LINKS BalancedRoot; // offset: 0x0 (0)
  VOID *OrderedPointer;                    // offset: 0x10 (16)
  ULONG WhichOrderedElement;               // offset: 0x14 (20)
  ULONG NumberGenericTableElements;        // offset: 0x18 (24)
  ULONG DepthOfTree;                       // offset: 0x1c (28)
  struct _RTL_BALANCED_LINKS *RestartKey;  // offset: 0x20 (32)
  ULONG DeleteCount;                       // offset: 0x24 (36)
  enum _RTL_GENERIC_COMPARE_RESULTS (*CompareRoutine)(
      struct _RTL_AVL_TABLE *arg1, VOID *arg2, VOID *arg3); // offset: 0x28 (40)
  VOID *(*AllocateRoutine)(struct _RTL_AVL_TABLE *arg1,
                           ULONG arg2); // offset: 0x2c (44)
  VOID (*FreeRoutine)
  (struct _RTL_AVL_TABLE *arg1, VOID *arg2); // offset: 0x30 (48)
  VOID *TableContext;                        // offset: 0x34 (52)
};

// 0x80 (128) bytes
struct _VF_AVL_TABLE {
  struct _RTL_AVL_TABLE RtlTable;         // offset: 0x0 (0)
  struct _VF_AVL_TREE_NODE *ReservedNode; // offset: 0x38 (56)
  VOID *NodeToFree;                       // offset: 0x3c (60)
  volatile LONG Lock;                     // offset: 0x40 (64)
};

// 0x14 (20) bytes
struct _VF_AVL_TREE {
  ULONG NodeRangeSize;          // offset: 0x0 (0)
  volatile ULONG NodeCount;     // offset: 0x4 (4)
  struct _VF_AVL_TABLE *Tables; // offset: 0x8 (8)
  ULONG TablesNo;               // offset: 0xc (12)
  union {
    ULONG NodeSize;     // offset: 0x10 (16)
    ULONG UseLookaside; // offset: 0x10 (16)

  } u1; // offset: 0x10 (16)
};

// 0x60 (96) bytes
struct _KTMOBJECT_NAMESPACE {
  struct _RTL_AVL_TABLE Table; // offset: 0x0 (0)
  struct _KMUTANT Mutex;       // offset: 0x38 (56)
  USHORT LinksOffset;          // offset: 0x58 (88)
  USHORT GuidOffset;           // offset: 0x5a (90)
  UCHAR Expired;               // offset: 0x5c (92)
};

// 0x8 (8) bytes
struct _CM_CELL_REMAP_BLOCK {
  ULONG OldCell; // offset: 0x0 (0)
  ULONG NewCell; // offset: 0x4 (4)
};

// 0x288 (648) bytes
struct _CM_DIRTY_VECTOR_LOG {
  volatile ULONG Next;                       // offset: 0x0 (0)
  ULONG Size;                                // offset: 0x4 (4)
  struct _CM_DIRTY_VECTOR_LOG_ENTRY Log[16]; // offset: 0x8 (8)
};

// 0x14 (20) bytes
struct _CM_WORKITEM {
  struct _LIST_ENTRY ListEntry;      // offset: 0x0 (0)
  ULONG Private;                     // offset: 0x8 (8)
  VOID (*WorkerRoutine)(VOID *arg1); // offset: 0xc (12)
  VOID *Parameter;                   // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _KENLISTMENT_HISTORY {
  ULONG Notification;               // offset: 0x0 (0)
  enum _KENLISTMENT_STATE NewState; // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _CM_NAME_HASH {
  ULONG ConvKey;                  // offset: 0x0 (0)
  struct _CM_NAME_HASH *NextHash; // offset: 0x4 (4)
  USHORT NameLength;              // offset: 0x8 (8)
  WCHAR Name[1];                  // offset: 0xa (10)
};

// 0x10 (16) bytes
struct _CM_NAME_CONTROL_BLOCK {
  ULONG Compressed : 1; // offset: 0x0 (0)
  ULONG RefCount : 31;  // offset: 0x0 (0)
  union {
    struct _CM_NAME_HASH NameHash; // offset: 0x4 (4)
    struct {
      ULONG ConvKey;                 // offset: 0x4 (4)
      struct _CM_KEY_HASH *NextHash; // offset: 0x8 (8)
      USHORT NameLength;             // offset: 0xc (12)
      WCHAR Name[1];                 // offset: 0xe (14)
    };
  };
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
struct _POOL_TRACKER_BIG_PAGES {
  volatile ULONG Va;    // offset: 0x0 (0)
  ULONG Key;            // offset: 0x4 (4)
  ULONG Pattern : 8;    // offset: 0x8 (8)
  ULONG PoolType : 12;  // offset: 0x8 (8)
  ULONG SlushSize : 12; // offset: 0x8 (8)
  ULONG NumberOfBytes;  // offset: 0xc (12)
};

// 0x8c (140) bytes
struct _SYSPTES_HEADER {
  struct _LIST_ENTRY ListHead[16]; // offset: 0x0 (0)
  ULONG Count;                     // offset: 0x80 (128)
  ULONG NumberOfEntries;           // offset: 0x84 (132)
  ULONG NumberOfEntriesPeak;       // offset: 0x88 (136)
};

// 0x4 (4) bytes
union _KSTACK_COUNT {
  LONG Value;            // offset: 0x0 (0)
  ULONG State : 3;       // offset: 0x0 (0)
  ULONG StackCount : 29; // offset: 0x0 (0)
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

// 0x20 (32) bytes
struct _WHEAP_ERROR_SOURCE_TABLE {
  ULONG Signature;           // offset: 0x0 (0)
  LONG Count;                // offset: 0x4 (4)
  struct _LIST_ENTRY Items;  // offset: 0x8 (8)
  struct _KEVENT InsertLock; // offset: 0x10 (16)
};

// 0x18 (24) bytes
struct _OBP_LOOKUP_CONTEXT {
  struct _OBJECT_DIRECTORY *Directory;        // offset: 0x0 (0)
  VOID *Object;                               // offset: 0x4 (4)
  struct _OBJECT_DIRECTORY_ENTRY **EntryLink; // offset: 0x8 (8)
  ULONG HashValue;                            // offset: 0xc (12)
  USHORT HashIndex;                           // offset: 0x10 (16)
  UCHAR DirectoryLocked;                      // offset: 0x12 (18)
  UCHAR LockedExclusive;                      // offset: 0x13 (19)
  ULONG LockStateSignature;                   // offset: 0x14 (20)
};

// 0x8 (8) bytes
struct _OBJECT_HEADER_AUDIT_INFO {
  VOID *SecurityDescriptor; // offset: 0x0 (0)
  ULONG Reserved;           // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _OBJECT_HEADER_QUOTA_INFO {
  ULONG PagedPoolCharge;              // offset: 0x0 (0)
  ULONG NonPagedPoolCharge;           // offset: 0x4 (4)
  ULONG SecurityDescriptorCharge;     // offset: 0x8 (8)
  VOID *SecurityDescriptorQuotaBlock; // offset: 0xc (12)
};

// 0xc (12) bytes
struct _OBJECT_DIRECTORY_ENTRY {
  struct _OBJECT_DIRECTORY_ENTRY *ChainLink; // offset: 0x0 (0)
  VOID *Object;                              // offset: 0x4 (4)
  ULONG HashValue;                           // offset: 0x8 (8)
};

// 0x34 (52) bytes
struct _DEVICE_MAP {
  struct _OBJECT_DIRECTORY *DosDevicesDirectory;       // offset: 0x0 (0)
  struct _OBJECT_DIRECTORY *GlobalDosDevicesDirectory; // offset: 0x4 (4)
  VOID *DosDevicesDirectoryHandle;                     // offset: 0x8 (8)
  volatile LONG ReferenceCount;                        // offset: 0xc (12)
  ULONG DriveMap;                                      // offset: 0x10 (16)
  UCHAR DriveType[32];                                 // offset: 0x14 (20)
};

// 0x10 (16) bytes
struct _SEP_SID_VALUES_BLOCK {
  ULONG BlockLength;    // offset: 0x0 (0)
  LONG ReferenceCount;  // offset: 0x4 (4)
  ULONG SidCount;       // offset: 0x8 (8)
  ULONG SidValuesStart; // offset: 0xc (12)
};

// 0x18 (24) bytes
struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION {
  ULONG SecurityAttributeCount;                     // offset: 0x0 (0)
  struct _LIST_ENTRY SecurityAttributesList;        // offset: 0x4 (4)
  ULONG WorkingSecurityAttributeCount;              // offset: 0xc (12)
  struct _LIST_ENTRY WorkingSecurityAttributesList; // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _SID_AND_ATTRIBUTES {
  VOID *Sid;        // offset: 0x0 (0)
  ULONG Attributes; // offset: 0x4 (4)
};

// 0x4 (4) bytes
struct _TOKEN_MANDATORY_POLICY {
  ULONG Policy; // offset: 0x0 (0)
};

// 0x24 (36) bytes
struct _IOP_FILE_OBJECT_EXTENSION {
  ULONG FoExtFlags;                         // offset: 0x0 (0)
  VOID *FoExtPerTypeExtension[7];           // offset: 0x4 (4)
  enum _IOP_PRIORITY_HINT FoIoPriorityHint; // offset: 0x20 (32)
};

// 0xc (12) bytes
struct _REMOTE_PORT_VIEW {
  ULONG Length;   // offset: 0x0 (0)
  ULONG ViewSize; // offset: 0x4 (4)
  VOID *ViewBase; // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _OBJECT_DUMP_CONTROL {
  VOID *Stream; // offset: 0x0 (0)
  ULONG Detail; // offset: 0x4 (4)
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

// 0x4 (4) bytes
struct _RTL_SRWLOCK {
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

// 0x4 (4) bytes
union _KALPC_DIRECT_EVENT {
  ULONG Event;          // offset: 0x0 (0)
  ULONG Referenced : 1; // offset: 0x0 (0)
  ULONG Reserved : 31;  // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _BLOB_COUNTERS {
  ULONG CreatedObjects; // offset: 0x0 (0)
  ULONG DeletedObjects; // offset: 0x4 (4)
};

// 0x20 (32) bytes
struct _BLOB_TYPE {
  enum _BLOB_ID ResourceId;             // offset: 0x0 (0)
  ULONG PoolTag;                        // offset: 0x4 (4)
  ULONG LookasideIndex;                 // offset: 0x8 (8)
  ULONG Flags;                          // offset: 0xc (12)
  struct _BLOB_COUNTERS *Counters;      // offset: 0x10 (16)
  VOID (*DeleteProcedure)(VOID *arg1);  // offset: 0x14 (20)
  LONG (*DestroyProcedure)(VOID *arg1); // offset: 0x18 (24)
  ULONG UsualSize;                      // offset: 0x1c (28)
};

// 0x8 (8) bytes
struct _ALPC_MESSAGE_ATTRIBUTES {
  ULONG AllocatedAttributes; // offset: 0x0 (0)
  ULONG ValidAttributes;     // offset: 0x4 (4)
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

// 0xc (12) bytes
struct _HEAP_PSEUDO_TAG_ENTRY {
  ULONG Allocs; // offset: 0x0 (0)
  ULONG Frees;  // offset: 0x4 (4)
  ULONG Size;   // offset: 0x8 (8)
};

// 0x40 (64) bytes
struct _HEAP_TAG_ENTRY {
  ULONG Allocs;                 // offset: 0x0 (0)
  ULONG Frees;                  // offset: 0x4 (4)
  ULONG Size;                   // offset: 0x8 (8)
  USHORT TagIndex;              // offset: 0xc (12)
  USHORT CreatorBackTraceIndex; // offset: 0xe (14)
  WCHAR TagName[24];            // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _HEAP_EXTENDED_ENTRY {
  union {
    struct {
      USHORT FunctionIndex; // offset: 0x0 (0)
      USHORT ContextValue;  // offset: 0x2 (2)
    };
    ULONG InterceptorValue; // offset: 0x0 (0)
  };
  USHORT UnusedBytesLength;     // offset: 0x4 (4)
  UCHAR EntryOffset;            // offset: 0x6 (6)
  UCHAR ExtendedBlockSignature; // offset: 0x7 (7)
};

// 0x8 (8) bytes
struct _HEAP_UNPACKED_ENTRY {
  union {
    struct {
      USHORT Size;         // offset: 0x0 (0)
      UCHAR Flags;         // offset: 0x2 (2)
      UCHAR SmallTagIndex; // offset: 0x3 (3)
    };
    ULONG SubSegmentCode; // offset: 0x0 (0)
  };
  USHORT PreviousSize; // offset: 0x4 (4)
  union {
    UCHAR SegmentOffset; // offset: 0x6 (6)
    UCHAR LFHFlags;      // offset: 0x6 (6)
  };
  UCHAR UnusedBytes; // offset: 0x7 (7)
};

// 0x8 (8) bytes
struct _HEAP_TUNING_PARAMETERS {
  ULONG CommittThresholdShift;  // offset: 0x0 (0)
  ULONG MaxPreCommittThreshold; // offset: 0x4 (4)
};

// 0x5c (92) bytes
struct _HEAP_COUNTERS {
  ULONG TotalMemoryReserved;      // offset: 0x0 (0)
  ULONG TotalMemoryCommitted;     // offset: 0x4 (4)
  ULONG TotalMemoryLargeUCR;      // offset: 0x8 (8)
  ULONG TotalSizeInVirtualBlocks; // offset: 0xc (12)
  ULONG TotalSegments;            // offset: 0x10 (16)
  ULONG TotalUCRs;                // offset: 0x14 (20)
  ULONG CommittOps;               // offset: 0x18 (24)
  ULONG DeCommitOps;              // offset: 0x1c (28)
  ULONG LockAcquires;             // offset: 0x20 (32)
  ULONG LockCollisions;           // offset: 0x24 (36)
  ULONG CommitRate;               // offset: 0x28 (40)
  ULONG DecommittRate;            // offset: 0x2c (44)
  ULONG CommitFailures;           // offset: 0x30 (48)
  ULONG InBlockCommitFailures;    // offset: 0x34 (52)
  ULONG PollIntervalCounter;      // offset: 0x38 (56)
  ULONG DecommitsSinceLastCheck;  // offset: 0x3c (60)
  ULONG HeapPollInterval;         // offset: 0x40 (64)
  ULONG AllocAndFreeOps;          // offset: 0x44 (68)
  ULONG AllocationIndicesActive;  // offset: 0x48 (72)
  ULONG InBlockDeccommits;        // offset: 0x4c (76)
  ULONG InBlockDeccomitSize;      // offset: 0x50 (80)
  ULONG HighWatermarkSize;        // offset: 0x54 (84)
  ULONG LastPolledSize;           // offset: 0x58 (88)
};

// 0x10 (16) bytes
struct VACB_LEVEL_ALLOCATION_LIST {
  struct _LIST_ENTRY VacbLevelList; // offset: 0x0 (0)
  VOID *VacbLevelWithBcbListHeads;  // offset: 0x8 (8)
  ULONG VacbLevelsAllocated;        // offset: 0xc (12)
};

// 0x14 (20) bytes
struct _CC_ASYNC_READ_CONTEXT {
  UCHAR (*CompletionRoutine)(VOID *arg1); // offset: 0x0 (0)
  VOID *Context;                          // offset: 0x4 (4)
  struct _MDL *Mdl;                       // offset: 0x8 (8)
  CHAR RequestorMode;                     // offset: 0xc (12)
  ULONG NestingLevel;                     // offset: 0x10 (16)
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

// 0xc (12) bytes
struct _DIRTY_PAGE_STATISTICS {
  ULONG DirtyPages;                  // offset: 0x0 (0)
  ULONG DirtyPagesLastScan;          // offset: 0x4 (4)
  ULONG DirtyPagesScheduledLastScan; // offset: 0x8 (8)
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
struct _POP_CPU_INFO {
  ULONG Eax; // offset: 0x0 (0)
  ULONG Ebx; // offset: 0x4 (4)
  ULONG Ecx; // offset: 0x8 (8)
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

// 0x18 (24) bytes
struct _PEP_ACPI_SPB_RESOURCE {
  enum _PEP_ACPI_RESOURCE_TYPE Type;          // offset: 0x0 (0)
  union _PEP_ACPI_RESOURCE_FLAGS Flags;       // offset: 0x4 (4)
  USHORT TypeSpecificFlags;                   // offset: 0x8 (8)
  UCHAR ResourceSourceIndex;                  // offset: 0xa (10)
  struct _UNICODE_STRING *ResourceSourceName; // offset: 0xc (12)
  CHAR *VendorData;                           // offset: 0x10 (16)
  USHORT VendorDataLength;                    // offset: 0x14 (20)
};

// 0x30 (48) bytes
struct _PEP_ACPI_GPIO_RESOURCE {
  enum _PEP_ACPI_RESOURCE_TYPE Type;                   // offset: 0x0 (0)
  union _PEP_ACPI_RESOURCE_FLAGS Flags;                // offset: 0x4 (4)
  enum _KINTERRUPT_MODE InterruptType;                 // offset: 0x8 (8)
  enum _KINTERRUPT_POLARITY InterruptPolarity;         // offset: 0xc (12)
  enum _GPIO_PIN_CONFIG_TYPE PinConfig;                // offset: 0x10 (16)
  enum _GPIO_PIN_IORESTRICTION_TYPE IoRestrictionType; // offset: 0x14 (20)
  USHORT DriveStrength;                                // offset: 0x18 (24)
  USHORT DebounceTimeout;                              // offset: 0x1a (26)
  USHORT *PinTable;                                    // offset: 0x1c (28)
  USHORT PinCount;                                     // offset: 0x20 (32)
  UCHAR ResourceSourceIndex;                           // offset: 0x22 (34)
  struct _UNICODE_STRING *ResourceSourceName;          // offset: 0x24 (36)
  UCHAR *VendorData;                                   // offset: 0x28 (40)
  USHORT VendorDataLength;                             // offset: 0x2c (44)
};

// 0x24 (36) bytes
struct _PEP_ACPI_SPB_UART_RESOURCE {
  struct _PEP_ACPI_SPB_RESOURCE SpbCommon; // offset: 0x0 (0)
  ULONG BaudRate;                          // offset: 0x18 (24)
  USHORT RxBufferSize;                     // offset: 0x1c (28)
  USHORT TxBufferSize;                     // offset: 0x1e (30)
  UCHAR Parity;                            // offset: 0x20 (32)
  UCHAR LinesInUse;                        // offset: 0x21 (33)
};

// 0x24 (36) bytes
struct _PEP_ACPI_SPB_SPI_RESOURCE {
  struct _PEP_ACPI_SPB_RESOURCE SpbCommon; // offset: 0x0 (0)
  ULONG ConnectionSpeed;                   // offset: 0x18 (24)
  UCHAR DataBitLength;                     // offset: 0x1c (28)
  UCHAR Phase;                             // offset: 0x1d (29)
  UCHAR Polarity;                          // offset: 0x1e (30)
  USHORT DeviceSelection;                  // offset: 0x20 (32)
};

// 0x20 (32) bytes
struct _PEP_ACPI_SPB_I2C_RESOURCE {
  struct _PEP_ACPI_SPB_RESOURCE SpbCommon; // offset: 0x0 (0)
  ULONG ConnectionSpeed;                   // offset: 0x18 (24)
  USHORT SlaveAddress;                     // offset: 0x1c (28)
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

// 0xc (12) bytes
struct _PNP_ASSIGN_RESOURCES_CONTEXT {
  ULONG IncludeFailedDevices;           // offset: 0x0 (0)
  ULONG DeviceCount;                    // offset: 0x4 (4)
  struct _DEVICE_OBJECT *DeviceList[1]; // offset: 0x8 (8)
};

// 0x2c (44) bytes
struct _PNP_DEVICE_COMPLETION_QUEUE {
  struct _LIST_ENTRY DispatchedList;     // offset: 0x0 (0)
  ULONG DispatchedCount;                 // offset: 0x8 (8)
  struct _LIST_ENTRY CompletedList;      // offset: 0xc (12)
  struct _KSEMAPHORE CompletedSemaphore; // offset: 0x14 (20)
  ULONG SpinLock;                        // offset: 0x28 (40)
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

// 0x18 (24) bytes
struct DOCK_INTERFACE {
  USHORT Size;                              // offset: 0x0 (0)
  USHORT Version;                           // offset: 0x2 (2)
  VOID *Context;                            // offset: 0x4 (4)
  VOID (*InterfaceReference)(VOID *arg1);   // offset: 0x8 (8)
  VOID (*InterfaceDereference)(VOID *arg1); // offset: 0xc (12)
  ULONG (*ProfileDepartureSetMode)
  (VOID *arg1, enum PROFILE_DEPARTURE_STYLE arg2); // offset: 0x10 (16)
  ULONG (*ProfileDepartureUpdate)(VOID *arg1);     // offset: 0x14 (20)
};

// 0x18 (24) bytes
struct _CC_EXTERNAL_CACHE_INFO {
  VOID (*Callback)(VOID *arg1, ULONG arg2, ULONG arg3); // offset: 0x0 (0)
  struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;    // offset: 0x4 (4)
  struct _LIST_ENTRY Links;                             // offset: 0x10 (16)
};

// 0x3c (60) bytes
struct _PO_DEVICE_NOTIFY {
  struct _LIST_ENTRY Link;             // offset: 0x0 (0)
  struct _LIST_ENTRY PowerChildren;    // offset: 0x8 (8)
  struct _LIST_ENTRY PowerParents;     // offset: 0x10 (16)
  struct _DEVICE_OBJECT *TargetDevice; // offset: 0x18 (24)
  UCHAR OrderLevel;                    // offset: 0x1c (28)
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x20 (32)
  USHORT *DeviceName;                  // offset: 0x24 (36)
  USHORT *DriverName;                  // offset: 0x28 (40)
  ULONG ChildCount;                    // offset: 0x2c (44)
  ULONG ActiveChild;                   // offset: 0x30 (48)
  ULONG ParentCount;                   // offset: 0x34 (52)
  ULONG ActiveParent;                  // offset: 0x38 (56)
};

// 0x8 (8) bytes
struct _DEVICE_RELATIONS {
  ULONG Count;                       // offset: 0x0 (0)
  struct _DEVICE_OBJECT *Objects[1]; // offset: 0x4 (4)
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

// 0x8 (8) bytes
struct _PCW_DATA {
  const VOID *Data; // offset: 0x0 (0)
  ULONG Size;       // offset: 0x4 (4)
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

// 0xc (12) bytes
struct CMP_OFFSET_ARRAY {
  ULONG FileOffset; // offset: 0x0 (0)
  VOID *DataBuffer; // offset: 0x4 (4)
  ULONG DataLength; // offset: 0x8 (8)
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
struct _CM_KEY_SECURITY_CACHE_ENTRY {
  ULONG Cell;                                    // offset: 0x0 (0)
  struct _CM_KEY_SECURITY_CACHE *CachedSecurity; // offset: 0x4 (4)
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

// 0x4 (4) bytes
union _MM_STORE_KEY {
  ULONG KeyLow : 28; // offset: 0x0 (0)
  ULONG KeyHigh : 4; // offset: 0x0 (0)
  ULONG EntireKey;   // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MI_CLONE_BLOCK_FLAGS {
  ULONG ActualCloneCommit : 27; // offset: 0x0 (0)
  ULONG CloneProtection : 5;    // offset: 0x0 (0)
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

// 0x10 (16) bytes
struct _ECP_LIST {
  ULONG Signature;            // offset: 0x0 (0)
  ULONG Flags;                // offset: 0x4 (4)
  struct _LIST_ENTRY EcpList; // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _IO_DRIVER_CREATE_CONTEXT {
  SHORT Size;                                 // offset: 0x0 (0)
  struct _ECP_LIST *ExtraCreateParameter;     // offset: 0x4 (4)
  VOID *DeviceObjectHint;                     // offset: 0x8 (8)
  struct _TXN_PARAMETER_BLOCK *TxnParameters; // offset: 0xc (12)
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

// 0x4 (4) bytes
struct _EX_FAST_REF {
  union {
    VOID *Object;     // offset: 0x0 (0)
    ULONG RefCnt : 3; // offset: 0x0 (0)
    ULONG Value;      // offset: 0x0 (0)
  };
};

// 0x4 (4) bytes
struct _MI_DECAY_TIMER_LINKAGE {
  ULONG Spare0 : 1;            // offset: 0x0 (0)
  ULONG PreviousDecayPfn : 15; // offset: 0x0 (0)
  ULONG Spare1 : 1;            // offset: 0x0 (0)
  ULONG NextDecayPfn : 15;     // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _PHYSICAL_MEMORY_RUN {
  ULONG BasePage;  // offset: 0x0 (0)
  ULONG PageCount; // offset: 0x4 (4)
};

// 0x4 (4) bytes
struct _MI_DECAY_TIMER_LINK {
  union {
    ULONG Long;                        // offset: 0x0 (0)
    struct _MI_DECAY_TIMER_LINKAGE e1; // offset: 0x0 (0)

  } u1; // offset: 0x0 (0)
};

// 0x14 (20) bytes
struct _MI_AVAILABLE_PAGE_WAIT_STATES {
  struct _KEVENT Event; // offset: 0x0 (0)
  ULONG EventSets;      // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _PHYSICAL_MEMORY_DESCRIPTOR {
  ULONG NumberOfRuns;                 // offset: 0x0 (0)
  ULONG NumberOfPages;                // offset: 0x4 (4)
  struct _PHYSICAL_MEMORY_RUN Run[1]; // offset: 0x8 (8)
};

// 0x4 (4) bytes
struct _MI_PARTITION_FLAGS {
  ULONG BeingDeleted : 1;      // offset: 0x0 (0)
  ULONG ObjectInitialized : 1; // offset: 0x0 (0)
};

// 0x14 (20) bytes
struct _MMPFNLIST {
  ULONG Total;            // offset: 0x0 (0)
  enum _MMLISTS ListName; // offset: 0x4 (4)
  ULONG Flink;            // offset: 0x8 (8)
  ULONG Blink;            // offset: 0xc (12)
  ULONG Lock;             // offset: 0x10 (16)
};

// 0x50 (80) bytes
struct _MI_PARTITION_STATISTICS {
  ULONG DeleteYield;                  // offset: 0x0 (0)
  ULONG DeleteBad;                    // offset: 0x4 (4)
  ULONG DeleteTrulyBad;               // offset: 0x8 (8)
  ULONG DeleteLargePage;              // offset: 0xc (12)
  ULONG DeleteLargePageRetry;         // offset: 0x10 (16)
  ULONG DeleteZeroFree;               // offset: 0x14 (20)
  ULONG DeleteTransition;             // offset: 0x18 (24)
  ULONG DeleteStandbyReferenced;      // offset: 0x1c (28)
  ULONG DeleteStandbyRelinkFailed;    // offset: 0x20 (32)
  ULONG DeleteStandbySharedPagefile;  // offset: 0x24 (36)
  ULONG DeleteStandbySharedFile;      // offset: 0x28 (40)
  ULONG DeleteModifiedReferenced;     // offset: 0x2c (44)
  ULONG DeleteModified;               // offset: 0x30 (48)
  ULONG DeleteModifiedNoWrite;        // offset: 0x34 (52)
  ULONG DeleteModifiedSharedPagefile; // offset: 0x38 (56)
  ULONG DeleteModifiedSharedFile;     // offset: 0x3c (60)
  ULONG DeleteActiveSharedPagefile1;  // offset: 0x40 (64)
  ULONG DeleteActiveSharedPagefile2;  // offset: 0x44 (68)
  ULONG DeleteActiveSharedFile;       // offset: 0x48 (72)
  ULONG DeleteWriteDelay;             // offset: 0x4c (76)
};

// 0x4 (4) bytes
struct _MODWRITER_FLAGS {
  ULONG KeepForever : 1;        // offset: 0x0 (0)
  ULONG Networked : 1;          // offset: 0x0 (0)
  ULONG IoPriority : 3;         // offset: 0x0 (0)
  ULONG ModifiedStoreWrite : 1; // offset: 0x0 (0)
};

// 0x20 (32) bytes
struct _MI_PARTITION_COMMIT {
  ULONG PeakCommitment;          // offset: 0x0 (0)
  ULONG TotalCommitLimitMaximum; // offset: 0x4 (4)
  volatile LONG Popups[2];       // offset: 0x8 (8)
  ULONG LowCommitThreshold;      // offset: 0x10 (16)
  ULONG HighCommitThreshold;     // offset: 0x14 (20)
  ULONG EventLock;               // offset: 0x18 (24)
  ULONG SystemCommitReserve;     // offset: 0x1c (28)
};

// 0x8 (8) bytes
struct _MI_EXTRA_IMAGE_INFORMATION {
  ULONG SizeOfHeaders; // offset: 0x0 (0)
  ULONG SizeOfImage;   // offset: 0x4 (4)
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
  union {
    struct {
      USHORT MajorOperatingSystemVersion; // offset: 0x18 (24)
      USHORT MinorOperatingSystemVersion; // offset: 0x1a (26)
    };
    ULONG OperatingSystemVersion; // offset: 0x18 (24)
  };
  USHORT ImageCharacteristics; // offset: 0x1c (28)
  USHORT DllCharacteristics;   // offset: 0x1e (30)
  USHORT Machine;              // offset: 0x20 (32)
  UCHAR ImageContainsCode;     // offset: 0x22 (34)
  union {
    UCHAR ImageFlags; // offset: 0x23 (35)
    struct {
      UCHAR ComPlusNativeReady : 1;        // offset: 0x23 (35)
      UCHAR ComPlusILOnly : 1;             // offset: 0x23 (35)
      UCHAR ImageDynamicallyRelocated : 1; // offset: 0x23 (35)
      UCHAR ImageMappedFlat : 1;           // offset: 0x23 (35)
      UCHAR BaseBelow4gb : 1;              // offset: 0x23 (35)
      UCHAR ComPlusPrefer32bit : 1;        // offset: 0x23 (35)
      UCHAR Reserved : 2;                  // offset: 0x23 (35)
    };
  };
  ULONG LoaderFlags;   // offset: 0x24 (36)
  ULONG ImageFileSize; // offset: 0x28 (40)
  ULONG CheckSum;      // offset: 0x2c (44)
};

// 0x38 (56) bytes
struct _MI_SECTION_IMAGE_INFORMATION {
  struct _SECTION_IMAGE_INFORMATION ExportedImageInformation; // offset: 0x0 (0)
  struct _MI_EXTRA_IMAGE_INFORMATION
      InternalImageInformation; // offset: 0x30 (48)
};

// 0x4 (4) bytes
struct _IMAGE_SECURITY_CONTEXT {
  union {
    VOID *PageHashes; // offset: 0x0 (0)
    ULONG Value;      // offset: 0x0 (0)
    struct {
      ULONG SecurityBeingCreated : 2; // offset: 0x0 (0)
      ULONG SecurityMandatory : 1;    // offset: 0x0 (0)
      ULONG PageHashPointer : 29;     // offset: 0x0 (0)
    };
  };
};

// 0xc (12) bytes
struct _MI_IMAGE_SECURITY_REFERENCE {
  VOID *DynamicRelocations;                       // offset: 0x0 (0)
  struct _IMAGE_SECURITY_CONTEXT SecurityContext; // offset: 0x4 (4)
  ULONG StrongImageReference;                     // offset: 0x8 (8)
};

// 0x4 (4) bytes
struct _MIPFNBLINK {
  union {
    struct {
      ULONG Blink : 24;                  // offset: 0x0 (0)
      ULONG TbFlushStamp : 4;            // offset: 0x0 (0)
      ULONG Unused : 1;                  // offset: 0x0 (0)
      ULONG PageBlinkDeleteBit : 1;      // offset: 0x0 (0)
      ULONG PageBlinkLockBit : 1;        // offset: 0x0 (0)
      ULONG ShareCount : 30;             // offset: 0x0 (0)
      ULONG PageShareCountDeleteBit : 1; // offset: 0x0 (0)
      ULONG PageShareCountLockBit : 1;   // offset: 0x0 (0)
    };
    ULONG EntireField;  // offset: 0x0 (0)
    volatile LONG Lock; // offset: 0x0 (0)
    struct {
      ULONG LockNotUsed : 30; // offset: 0x0 (0)
      ULONG DeleteBit : 1;    // offset: 0x0 (0)
      ULONG LockBit : 1;      // offset: 0x0 (0)
    };
  };
};

// 0x1c (28) bytes
struct _MI_CONTROL_AREA_WAIT_BLOCK {
  struct _MI_CONTROL_AREA_WAIT_BLOCK *Next; // offset: 0x0 (0)
  ULONG WaitReason;                         // offset: 0x4 (4)
  ULONG WaitResponse;                       // offset: 0x8 (8)
  struct _KGATE Gate;                       // offset: 0xc (12)
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

// 0x8 (8) bytes
struct _MMADDRESS_LIST {
  union {
    struct _MMSECURE_FLAGS Flags; // offset: 0x0 (0)
    ULONG FlagsLong;              // offset: 0x0 (0)
    VOID *StartVa;                // offset: 0x0 (0)

  } u1;        // offset: 0x0 (0)
  VOID *EndVa; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _MMPTE_HIGHLOW {
  ULONG LowPart;  // offset: 0x0 (0)
  ULONG HighPart; // offset: 0x4 (4)
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
  ULONG Teb : 1;              // offset: 0x0 (0)
  ULONG PrivateFixup : 1;     // offset: 0x0 (0)
  ULONG ManySubsections : 1;  // offset: 0x0 (0)
  ULONG Spare : 12;           // offset: 0x0 (0)
  ULONG DeleteInProgress : 1; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MI_VAD_SEQUENTIAL_INFO {
  ULONG Length : 11; // offset: 0x0 (0)
  ULONG Vpn : 21;    // offset: 0x0 (0)
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

// 0x4 (4) bytes
struct _MMWSLE_FREE_ENTRY {
  ULONG MustBeZero : 1;    // offset: 0x0 (0)
  ULONG PreviousFree : 11; // offset: 0x0 (0)
  ULONG NextFree : 20;     // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MMWSLENTRY {
  ULONG Valid : 1;              // offset: 0x0 (0)
  ULONG Spare : 1;              // offset: 0x0 (0)
  ULONG Hashed : 1;             // offset: 0x0 (0)
  ULONG Direct : 1;             // offset: 0x0 (0)
  ULONG Protection : 5;         // offset: 0x0 (0)
  ULONG Age : 3;                // offset: 0x0 (0)
  ULONG VirtualPageNumber : 20; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _EXHANDLE {
  union {
    struct {
      ULONG TagBits : 2; // offset: 0x0 (0)
      ULONG Index : 30;  // offset: 0x0 (0)
    };
    VOID *GenericHandleOverlay; // offset: 0x0 (0)
    ULONG Value;                // offset: 0x0 (0)
  };
};

// 0xc (12) bytes
struct _SECURITY_QUALITY_OF_SERVICE {
  ULONG Length;                                          // offset: 0x0 (0)
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // offset: 0x4 (4)
  UCHAR ContextTrackingMode;                             // offset: 0x8 (8)
  UCHAR EffectiveOnly;                                   // offset: 0x9 (9)
};

// 0x2c (44) bytes
struct _ALPC_PORT_ATTRIBUTES {
  ULONG Flags;                                     // offset: 0x0 (0)
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // offset: 0x4 (4)
  ULONG MaxMessageLength;                          // offset: 0x10 (16)
  ULONG MemoryBandwidth;                           // offset: 0x14 (20)
  ULONG MaxPoolUsage;                              // offset: 0x18 (24)
  ULONG MaxSectionSize;                            // offset: 0x1c (28)
  ULONG MaxViewSize;                               // offset: 0x20 (32)
  ULONG MaxTotalSectionSize;                       // offset: 0x24 (36)
  ULONG DupObjectTypes;                            // offset: 0x28 (40)
};

// 0x2c (44) bytes
struct _OBJECT_CREATE_INFORMATION {
  ULONG Attributes;                                 // offset: 0x0 (0)
  VOID *RootDirectory;                              // offset: 0x4 (4)
  CHAR ProbeMode;                                   // offset: 0x8 (8)
  ULONG PagedPoolCharge;                            // offset: 0xc (12)
  ULONG NonPagedPoolCharge;                         // offset: 0x10 (16)
  ULONG SecurityDescriptorCharge;                   // offset: 0x14 (20)
  VOID *SecurityDescriptor;                         // offset: 0x18 (24)
  struct _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // offset: 0x1c (28)
  struct _SECURITY_QUALITY_OF_SERVICE
      SecurityQualityOfService; // offset: 0x20 (32)
};

// 0x4 (4) bytes
struct _MMWSLE {
  union {
    VOID *VirtualAddress;         // offset: 0x0 (0)
    ULONG Long;                   // offset: 0x0 (0)
    struct _MMWSLENTRY e1;        // offset: 0x0 (0)
    struct _MMWSLE_FREE_ENTRY e2; // offset: 0x0 (0)

  } u1; // offset: 0x0 (0)
};

// 0x50 (80) bytes
struct _HANDLE_TRACE_DB_ENTRY {
  struct _CLIENT_ID ClientId; // offset: 0x0 (0)
  VOID *Handle;               // offset: 0x8 (8)
  ULONG Type;                 // offset: 0xc (12)
  VOID *StackTrace[16];       // offset: 0x10 (16)
};

// 0x8 (8) bytes
union _HANDLE_TABLE_ENTRY {
  volatile LONG VolatileLowValue; // offset: 0x0 (0)
  LONG LowValue;                  // offset: 0x0 (0)
  struct {
    struct _HANDLE_TABLE_ENTRY_INFO *volatile InfoTable; // offset: 0x0 (0)
    LONG HighValue;                                      // offset: 0x4 (4)
    union _HANDLE_TABLE_ENTRY *NextFreeHandleEntry;      // offset: 0x4 (4)
    struct _EXHANDLE LeafHandleValue;                    // offset: 0x4 (4)
  };
  ULONG Unlocked : 1;   // offset: 0x0 (0)
  ULONG Attributes : 2; // offset: 0x0 (0)
  struct {
    ULONG ObjectPointerBits : 29; // offset: 0x0 (0)
    LONG RefCountField;           // offset: 0x4 (4)
    ULONG GrantedAccessBits : 25; // offset: 0x4 (4)
    ULONG ProtectFromClose : 1;   // offset: 0x4 (4)
    ULONG NoRightsUpgrade : 1;    // offset: 0x4 (4)
  };
  ULONG RefCnt : 5; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _MI_ACTIVE_WSLE_LISTHEAD {
  ULONG Flink; // offset: 0x0 (0)
  ULONG Blink; // offset: 0x4 (4)
};

// 0x4 (4) bytes
struct _MMWSLE_HASH {
  ULONG Index; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _MMWSLE_NONDIRECT_HASH {
  VOID *Key;   // offset: 0x0 (0)
  ULONG Index; // offset: 0x4 (4)
};

// 0x28 (40) bytes
struct _POOL_HACKER {
  struct _POOL_HEADER Header; // offset: 0x0 (0)
  ULONG Contents[8];          // offset: 0x8 (8)
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

// 0x28 (40) bytes
struct _IO_MINI_COMPLETION_PACKET_USER {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 (0)
  ULONG PacketType;             // offset: 0x8 (8)
  VOID *KeyContext;             // offset: 0xc (12)
  VOID *ApcContext;             // offset: 0x10 (16)
  LONG IoStatus;                // offset: 0x14 (20)
  ULONG IoStatusInformation;    // offset: 0x18 (24)
  VOID (*MiniPacketCallback)
  (struct _IO_MINI_COMPLETION_PACKET_USER *arg1,
   VOID *arg2);    // offset: 0x1c (28)
  VOID *Context;   // offset: 0x20 (32)
  UCHAR Allocated; // offset: 0x24 (36)
};

// 0xc (12) bytes
struct _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY {
  struct _SINGLE_LIST_ENTRY ListEntry;                 // offset: 0x0 (0)
  struct _IO_MINI_COMPLETION_PACKET_USER *Packet;      // offset: 0x4 (4)
  struct _ALPC_COMPLETION_PACKET_LOOKASIDE *Lookaside; // offset: 0x8 (8)
};

// 0x30 (48) bytes
struct _ALPC_COMPLETION_PACKET_LOOKASIDE {
  ULONG Lock;                                              // offset: 0x0 (0)
  ULONG Size;                                              // offset: 0x4 (4)
  ULONG ActiveCount;                                       // offset: 0x8 (8)
  ULONG PendingNullCount;                                  // offset: 0xc (12)
  ULONG PendingCheckCompletionListCount;                   // offset: 0x10 (16)
  ULONG PendingDelete;                                     // offset: 0x14 (20)
  struct _SINGLE_LIST_ENTRY FreeListHead;                  // offset: 0x18 (24)
  VOID *CompletionPort;                                    // offset: 0x1c (28)
  VOID *CompletionKey;                                     // offset: 0x20 (32)
  struct _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY Entry[1]; // offset: 0x24 (36)
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
struct _POP_CURRENT_BROADCAST {
  UCHAR InProgress;                                 // offset: 0x0 (0)
  struct _SYSTEM_POWER_STATE_CONTEXT SystemContext; // offset: 0x4 (4)
  enum POWER_ACTION PowerAction;                    // offset: 0x8 (8)
  struct _POP_DEVICE_SYS_STATE *DeviceState;        // offset: 0xc (12)
};

// 0x8 (8) bytes
struct _JOBOBJECT_WAKE_FILTER {
  ULONG HighEdgeFilter; // offset: 0x0 (0)
  ULONG LowEdgeFilter;  // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _OWNER_ENTRY {
  ULONG OwnerThread; // offset: 0x0 (0)
  union {
    struct {
      ULONG IoPriorityBoosted : 1; // offset: 0x4 (4)
      ULONG OwnerReferenced : 1;   // offset: 0x4 (4)
      ULONG OwnerCount : 30;       // offset: 0x4 (4)
    };
    ULONG TableSize; // offset: 0x4 (4)
  };
};

// 0x8 (8) bytes
struct _PO_DIAG_STACK_RECORD {
  ULONG StackDepth; // offset: 0x0 (0)
  VOID *Stack[1];   // offset: 0x4 (4)
};

// 0x38 (56) bytes
struct _ERESOURCE {
  struct _LIST_ENTRY SystemResourcesList; // offset: 0x0 (0)
  struct _OWNER_ENTRY *OwnerTable;        // offset: 0x8 (8)
  SHORT ActiveCount;                      // offset: 0xc (12)
  union {
    USHORT Flag; // offset: 0xe (14)
    struct {
      UCHAR ReservedLowFlags; // offset: 0xe (14)
      UCHAR WaiterPriority;   // offset: 0xf (15)
    };
  };
  struct _KWAIT_CHAIN SharedWaiters; // offset: 0x10 (16)
  struct _KEVENT *ExclusiveWaiters;  // offset: 0x14 (20)
  struct _OWNER_ENTRY OwnerEntry;    // offset: 0x18 (24)
  ULONG ActiveEntries;               // offset: 0x20 (32)
  ULONG ContentionCount;             // offset: 0x24 (36)
  ULONG NumberOfSharedWaiters;       // offset: 0x28 (40)
  ULONG NumberOfExclusiveWaiters;    // offset: 0x2c (44)
  union {
    VOID *Address;               // offset: 0x30 (48)
    ULONG CreatorBackTraceIndex; // offset: 0x30 (48)
  };
  ULONG SpinLock; // offset: 0x34 (52)
};

// 0x1c (28) bytes
struct _THERMAL_COOLING_INTERFACE {
  USHORT Size;                                    // offset: 0x0 (0)
  USHORT Version;                                 // offset: 0x2 (2)
  VOID *Context;                                  // offset: 0x4 (4)
  VOID (*InterfaceReference)(VOID *arg1);         // offset: 0x8 (8)
  VOID (*InterfaceDereference)(VOID *arg1);       // offset: 0xc (12)
  ULONG Flags;                                    // offset: 0x10 (16)
  VOID (*ActiveCooling)(VOID *arg1, UCHAR arg2);  // offset: 0x14 (20)
  VOID (*PassiveCooling)(VOID *arg1, ULONG arg2); // offset: 0x18 (24)
};

// 0x80 (128) bytes
struct _MMSUPPORT {
  volatile LONG WorkingSetLock;                // offset: 0x0 (0)
  struct _KGATE *ExitOutswapGate;              // offset: 0x4 (4)
  VOID *AccessLog;                             // offset: 0x8 (8)
  struct _LIST_ENTRY WorkingSetExpansionLinks; // offset: 0xc (12)
  ULONG AgeDistribution[7];                    // offset: 0x14 (20)
  ULONG MinimumWorkingSetSize;                 // offset: 0x30 (48)
  ULONG WorkingSetLeafSize;                    // offset: 0x34 (52)
  ULONG WorkingSetLeafPrivateSize;             // offset: 0x38 (56)
  ULONG WorkingSetSize;                        // offset: 0x3c (60)
  ULONG WorkingSetPrivateSize;                 // offset: 0x40 (64)
  ULONG MaximumWorkingSetSize;                 // offset: 0x44 (68)
  ULONG ChargedWslePages;                      // offset: 0x48 (72)
  ULONG ActualWslePages;                       // offset: 0x4c (76)
  ULONG WorkingSetSizeOverhead;                // offset: 0x50 (80)
  ULONG PeakWorkingSetSize;                    // offset: 0x54 (84)
  ULONG HardFaultCount;                        // offset: 0x58 (88)
  struct _MMWSL *VmWorkingSetList;             // offset: 0x5c (92)
  USHORT NextPageColor;                        // offset: 0x60 (96)
  USHORT LastTrimStamp;                        // offset: 0x62 (98)
  ULONG PageFaultCount;                        // offset: 0x64 (100)
  ULONG TrimmedPageCount;                      // offset: 0x68 (104)
  ULONG ForceTrimPages;                        // offset: 0x6c (108)
  struct _MMSUPPORT_FLAGS Flags;               // offset: 0x70 (112)
  ULONG ReleasedCommitDebt;                    // offset: 0x74 (116)
  VOID *WsSwapSupport;                         // offset: 0x78 (120)
  VOID *CommitReAcquireFailSupport;            // offset: 0x7c (124)
};

// 0x10 (16) bytes
struct _KDEVICE_QUEUE_ENTRY {
  struct _LIST_ENTRY DeviceListEntry; // offset: 0x0 (0)
  ULONG SortKey;                      // offset: 0x8 (8)
  UCHAR Inserted;                     // offset: 0xc (12)
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
  WCHAR VolumeLabel[32];               // offset: 0x18 (24)
};

// 0x14 (20) bytes
struct _KDEVICE_QUEUE {
  SHORT Type;                        // offset: 0x0 (0)
  SHORT Size;                        // offset: 0x2 (2)
  struct _LIST_ENTRY DeviceListHead; // offset: 0x4 (4)
  ULONG Lock;                        // offset: 0xc (12)
  UCHAR Busy;                        // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _GUID {
  ULONG Data1;    // offset: 0x0 (0)
  USHORT Data2;   // offset: 0x4 (4)
  USHORT Data3;   // offset: 0x6 (6)
  UCHAR Data4[8]; // offset: 0x8 (8)
};

// 0xc (12) bytes
struct _PS_PROPERTY_SET {
  struct _LIST_ENTRY ListHead; // offset: 0x0 (0)
  ULONG Lock;                  // offset: 0x8 (8)
};

// 0x4 (4) bytes
struct _EX_RUNDOWN_REF {
  union {
    ULONG Count; // offset: 0x0 (0)
    VOID *Ptr;   // offset: 0x0 (0)
  };
};

// 0x14 (20) bytes
struct _HMAP_ENTRY {
  ULONG BlockOffset;                          // offset: 0x0 (0)
  ULONG PermanentBinAddress;                  // offset: 0x4 (4)
  ULONG TemporaryBinAddress;                  // offset: 0x8 (8)
  struct _EX_RUNDOWN_REF TemporaryBinRundown; // offset: 0xc (12)
  ULONG MemAlloc;                             // offset: 0x10 (16)
};

// 0x2800 (10240) bytes
struct _HMAP_TABLE {
  struct _HMAP_ENTRY Table[512]; // offset: 0x0 (0)
};

// 0x1000 (4096) bytes
struct _HMAP_DIRECTORY {
  struct _HMAP_TABLE *Directory[1024]; // offset: 0x0 (0)
};

// 0x4 (4) bytes
union _PS_CLIENT_SECURITY_CONTEXT {
  ULONG ImpersonationData;      // offset: 0x0 (0)
  VOID *ImpersonationToken;     // offset: 0x0 (0)
  ULONG ImpersonationLevel : 2; // offset: 0x0 (0)
  ULONG EffectiveOnly : 1;      // offset: 0x0 (0)
};

// 0x19c (412) bytes
struct _KPRIQUEUE {
  struct _DISPATCHER_HEADER Header;     // offset: 0x0 (0)
  struct _LIST_ENTRY EntryListHead[32]; // offset: 0x10 (16)
  volatile LONG CurrentCount[32];       // offset: 0x110 (272)
  ULONG MaximumCount;                   // offset: 0x190 (400)
  struct _LIST_ENTRY ThreadListHead;    // offset: 0x194 (404)
};

// 0x19c (412) bytes
struct _TRIAGE_EX_WORK_QUEUE {
  struct _KPRIQUEUE WorkPriQueue; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _TRIAGE_9F_POWER {
  USHORT Signature;                               // offset: 0x0 (0)
  USHORT Revision;                                // offset: 0x2 (2)
  struct _LIST_ENTRY *IrpList;                    // offset: 0x4 (4)
  struct _LIST_ENTRY *ThreadList;                 // offset: 0x8 (8)
  struct _TRIAGE_EX_WORK_QUEUE *DelayedWorkQueue; // offset: 0xc (12)
};

// 0xc (12) bytes
struct _TRIAGE_9F_PNP {
  USHORT Signature; // offset: 0x0 (0)
  USHORT Revision;  // offset: 0x2 (2)
  struct _TRIAGE_PNP_DEVICE_COMPLETION_QUEUE
      *CompletionQueue;                           // offset: 0x4 (4)
  struct _TRIAGE_EX_WORK_QUEUE *DelayedWorkQueue; // offset: 0x8 (8)
};

// 0x1b8 (440) bytes
struct _EX_WORK_QUEUE {
  struct _KPRIQUEUE WorkPriQueue;    // offset: 0x0 (0)
  struct _ENODE *Node;               // offset: 0x19c (412)
  volatile ULONG WorkItemsProcessed; // offset: 0x1a0 (416)
  ULONG WorkItemsProcessedLastPass;  // offset: 0x1a4 (420)
  volatile LONG ThreadCount;         // offset: 0x1a8 (424)
  LONG MinThreads : 31;              // offset: 0x1ac (428)
  volatile ULONG TryFailed : 1;      // offset: 0x1ac (428)
  LONG MaxThreads;                   // offset: 0x1b0 (432)
  enum _EXQUEUEINDEX QueueIndex;     // offset: 0x1b4 (436)
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

// 0x1c (28) bytes
struct _RTL_ATOM_TABLE {
  ULONG Signature;                          // offset: 0x0 (0)
  volatile LONG ReferenceCount;             // offset: 0x4 (4)
  struct _EX_PUSH_LOCK PushLock;            // offset: 0x8 (8)
  struct _HANDLE_TABLE *ExHandleTable;      // offset: 0xc (12)
  ULONG Flags;                              // offset: 0x10 (16)
  ULONG NumberOfBuckets;                    // offset: 0x14 (20)
  struct _RTL_ATOM_TABLE_ENTRY *Buckets[1]; // offset: 0x18 (24)
};

// 0xc (12) bytes
struct _CM_KEY_HASH_TABLE_ENTRY {
  struct _EX_PUSH_LOCK Lock;  // offset: 0x0 (0)
  struct _KTHREAD *Owner;     // offset: 0x4 (4)
  struct _CM_KEY_HASH *Entry; // offset: 0x8 (8)
};

// 0xac (172) bytes
struct _OBJECT_DIRECTORY {
  struct _OBJECT_DIRECTORY_ENTRY *HashBuckets[37]; // offset: 0x0 (0)
  struct _EX_PUSH_LOCK Lock;                       // offset: 0x94 (148)
  struct _DEVICE_MAP *DeviceMap;                   // offset: 0x98 (152)
  struct _OBJECT_DIRECTORY *ShadowDirectory;       // offset: 0x9c (156)
  ULONG SessionId;                                 // offset: 0xa0 (160)
  VOID *NamespaceEntry;                            // offset: 0xa4 (164)
  ULONG Flags;                                     // offset: 0xa8 (168)
};

// 0x10 (16) bytes
struct _OB_HANDLE_REVOCATION_BLOCK {
  struct _LIST_ENTRY RevocationInfos; // offset: 0x0 (0)
  struct _EX_PUSH_LOCK Lock;          // offset: 0x8 (8)
  struct _EX_RUNDOWN_REF Rundown;     // offset: 0xc (12)
};

// 0x10 (16) bytes
struct _OBJECT_HEADER_HANDLE_REVOCATION_INFO {
  struct _LIST_ENTRY ListEntry;                        // offset: 0x0 (0)
  struct _OB_HANDLE_REVOCATION_BLOCK *RevocationBlock; // offset: 0x8 (8)
  UCHAR Padding1[4];                                   // offset: 0xc (12)
};

// 0x20 (32) bytes
struct _OBJECT_HEADER {
  LONG PointerCount; // offset: 0x0 (0)
  union {
    LONG HandleCount; // offset: 0x4 (4)
    VOID *NextToFree; // offset: 0x4 (4)
  };
  struct _EX_PUSH_LOCK Lock; // offset: 0x8 (8)
  UCHAR TypeIndex;           // offset: 0xc (12)
  union {
    UCHAR TraceFlags; // offset: 0xd (13)
    struct {
      UCHAR DbgRefTrace : 1;       // offset: 0xd (13)
      UCHAR DbgTracePermanent : 1; // offset: 0xd (13)
    };
  };
  UCHAR InfoMask; // offset: 0xe (14)
  union {
    UCHAR Flags; // offset: 0xf (15)
    struct {
      UCHAR NewObject : 1;            // offset: 0xf (15)
      UCHAR KernelObject : 1;         // offset: 0xf (15)
      UCHAR KernelOnlyAccess : 1;     // offset: 0xf (15)
      UCHAR ExclusiveObject : 1;      // offset: 0xf (15)
      UCHAR PermanentObject : 1;      // offset: 0xf (15)
      UCHAR DefaultSecurityQuota : 1; // offset: 0xf (15)
      UCHAR SingleHandleEntry : 1;    // offset: 0xf (15)
      UCHAR DeletedInline : 1;        // offset: 0xf (15)
    };
  };
  union {
    struct _OBJECT_CREATE_INFORMATION *ObjectCreateInfo; // offset: 0x10 (16)
    VOID *QuotaBlockCharged;                             // offset: 0x10 (16)
  };
  VOID *SecurityDescriptor; // offset: 0x14 (20)
  struct _QUAD Body;        // offset: 0x18 (24)
};

// 0x1c (28) bytes
struct _OBJECT_REF_INFO {
  struct _OBJECT_HEADER *ObjectHeader;        // offset: 0x0 (0)
  VOID *NextRef;                              // offset: 0x4 (4)
  UCHAR ImageFileName[16];                    // offset: 0x8 (8)
  USHORT NextPos;                             // offset: 0x18 (24)
  USHORT MaxStacks;                           // offset: 0x1a (26)
  struct _OBJECT_REF_STACK_INFO StackInfo[0]; // offset: 0x1c (28)
};

// 0xa0 (160) bytes
struct _DUMMY_FILE_OBJECT {
  struct _OBJECT_HEADER ObjectHeader; // offset: 0x0 (0)
  CHAR FileObjectBody[128];           // offset: 0x20 (32)
};

// 0x10 (16) bytes
struct _ALPC_HANDLE_TABLE {
  struct _ALPC_HANDLE_ENTRY *Handles; // offset: 0x0 (0)
  ULONG TotalHandles;                 // offset: 0x4 (4)
  ULONG Flags;                        // offset: 0x8 (8)
  struct _EX_PUSH_LOCK Lock;          // offset: 0xc (12)
};

// 0x18 (24) bytes
struct _BLOB {
  union {
    struct _LIST_ENTRY ResourceList;         // offset: 0x0 (0)
    struct _SINGLE_LIST_ENTRY FreeListEntry; // offset: 0x0 (0)
  };
  union {
    struct {
      UCHAR ReferenceCache : 1; // offset: 0x0 (0)
      UCHAR Lookaside : 1;      // offset: 0x0 (0)
      UCHAR Initializing : 1;   // offset: 0x0 (0)
      UCHAR Deleted : 1;        // offset: 0x0 (0)
    } s1;                       // offset: 0x8 (8)
    UCHAR Flags;                // offset: 0x8 (8)

  } u1;                      // offset: 0x8 (8)
  UCHAR ResourceId;          // offset: 0x9 (9)
  SHORT CachedReferences;    // offset: 0xa (10)
  LONG ReferenceCount;       // offset: 0xc (12)
  ULONG Pad;                 // offset: 0x10 (16)
  struct _EX_PUSH_LOCK Lock; // offset: 0x14 (20)
};

// 0x14 (20) bytes
struct _MMSESSION {
  struct _EX_PUSH_LOCK SystemSpaceViewLock;         // offset: 0x0 (0)
  struct _EX_PUSH_LOCK *SystemSpaceViewLockPointer; // offset: 0x4 (4)
  struct _RTL_AVL_TREE ViewRoot;                    // offset: 0x8 (8)
  ULONG ViewCount;                                  // offset: 0xc (12)
  ULONG BitmapFailures;                             // offset: 0x10 (16)
};

// 0xc (12) bytes
struct _EX_PUSH_LOCK_AUTO_EXPAND {
  struct _EX_PUSH_LOCK LocalLock;               // offset: 0x0 (0)
  struct _EX_PUSH_LOCK_AUTO_EXPAND_STATE State; // offset: 0x4 (4)
  ULONG Stats;                                  // offset: 0x8 (8)
};

// 0x34 (52) bytes
struct _HANDLE_TABLE_FREE_LIST {
  struct _EX_PUSH_LOCK FreeListLock;               // offset: 0x0 (0)
  union _HANDLE_TABLE_ENTRY *FirstFreeHandleEntry; // offset: 0x4 (4)
  union _HANDLE_TABLE_ENTRY *LastFreeHandleEntry;  // offset: 0x8 (8)
  LONG HandleCount;                                // offset: 0xc (12)
  ULONG HighWaterMark;                             // offset: 0x10 (16)
  ULONG Reserved[8];                               // offset: 0x14 (20)
};

// 0x8 (8) bytes
struct _POP_RW_LOCK {
  struct _EX_PUSH_LOCK Lock; // offset: 0x0 (0)
  struct _KTHREAD *Thread;   // offset: 0x4 (4)
};

// 0x48 (72) bytes
struct _POP_COOLING_EXTENSION {
  struct _LIST_ENTRY Link;                     // offset: 0x0 (0)
  struct _LIST_ENTRY RequestListHead;          // offset: 0x8 (8)
  struct _POP_RW_LOCK Lock;                    // offset: 0x10 (16)
  struct _DEVICE_OBJECT *DeviceObject;         // offset: 0x18 (24)
  VOID *NotificationEntry;                     // offset: 0x1c (28)
  UCHAR Enabled;                               // offset: 0x20 (32)
  UCHAR ActiveEngaged;                         // offset: 0x21 (33)
  UCHAR ThrottleLimit;                         // offset: 0x22 (34)
  UCHAR UpdatingToCurrent;                     // offset: 0x23 (35)
  struct _KEVENT *RemovalFlushEvent;           // offset: 0x24 (36)
  struct _KEVENT *PnpFlushEvent;               // offset: 0x28 (40)
  struct _THERMAL_COOLING_INTERFACE Interface; // offset: 0x2c (44)
};

// 0x44 (68) bytes
struct _DEVICE_OBJECT_POWER_EXTENSION {
  volatile ULONG IdleCount;                        // offset: 0x0 (0)
  volatile ULONG BusyCount;                        // offset: 0x4 (4)
  volatile ULONG BusyReference;                    // offset: 0x8 (8)
  ULONG TotalBusyCount;                            // offset: 0xc (12)
  ULONG ConservationIdleTime;                      // offset: 0x10 (16)
  ULONG PerformanceIdleTime;                       // offset: 0x14 (20)
  struct _DEVICE_OBJECT *DeviceObject;             // offset: 0x18 (24)
  struct _LIST_ENTRY IdleList;                     // offset: 0x1c (28)
  enum _POP_DEVICE_IDLE_TYPE IdleType;             // offset: 0x24 (36)
  enum _DEVICE_POWER_STATE IdleState;              // offset: 0x28 (40)
  enum _DEVICE_POWER_STATE CurrentState;           // offset: 0x2c (44)
  struct _POP_COOLING_EXTENSION *CoolingExtension; // offset: 0x30 (48)
  struct _LIST_ENTRY Volume;                       // offset: 0x34 (52)
  union {
    struct {
      ULONG IdleTime;    // offset: 0x0 (0)
      ULONG NonIdleTime; // offset: 0x4 (4)
    } Disk;              // offset: 0x3c (60)

  } Specific; // offset: 0x3c (60)
};

// 0x38 (56) bytes
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
  VOID *DependencyNode;                        // offset: 0x2c (44)
  VOID *InterruptContext;                      // offset: 0x30 (48)
  VOID *VerifierContext;                       // offset: 0x34 (52)
};

// 0x10 (16) bytes
struct _ALPC_PROCESS_CONTEXT {
  struct _EX_PUSH_LOCK Lock;          // offset: 0x0 (0)
  struct _LIST_ENTRY ViewListHead;    // offset: 0x4 (4)
  volatile ULONG PagedPoolQuotaCache; // offset: 0xc (12)
};

// 0x10 (16) bytes
struct _EXT_DELETE_PARAMETERS {
  ULONG Version;                      // offset: 0x0 (0)
  ULONG Reserved;                     // offset: 0x4 (4)
  VOID (*DeleteCallback)(VOID *arg1); // offset: 0x8 (8)
  VOID *DeleteContext;                // offset: 0xc (12)
};

// 0x8 (8) bytes
struct _IO_STATUS_BLOCK {
  union {
    LONG Status;   // offset: 0x0 (0)
    VOID *Pointer; // offset: 0x0 (0)
  };
  ULONG Information; // offset: 0x4 (4)
};

// 0x20 (32) bytes
struct _FAST_MUTEX {
  LONG Count;           // offset: 0x0 (0)
  VOID *Owner;          // offset: 0x4 (4)
  ULONG Contention;     // offset: 0x8 (8)
  struct _KEVENT Event; // offset: 0xc (12)
  ULONG OldIrql;        // offset: 0x1c (28)
};

// 0x4c (76) bytes
struct _PNP_DEVICE_EVENT_LIST {
  LONG Status;                     // offset: 0x0 (0)
  struct _KMUTANT EventQueueMutex; // offset: 0x4 (4)
  struct _FAST_MUTEX Lock;         // offset: 0x24 (36)
  struct _LIST_ENTRY List;         // offset: 0x44 (68)
};

// 0x1140 (4416) bytes
struct _POOL_DESCRIPTOR {
  enum _POOL_TYPE PoolType; // offset: 0x0 (0)
  union {
    struct _FAST_MUTEX PagedLock; // offset: 0x4 (4)
    ULONG NonPagedLock;           // offset: 0x4 (4)
  };
  volatile LONG RunningAllocs;                     // offset: 0x40 (64)
  volatile LONG RunningDeAllocs;                   // offset: 0x44 (68)
  volatile LONG TotalBigPages;                     // offset: 0x48 (72)
  volatile LONG ThreadsProcessingDeferrals;        // offset: 0x4c (76)
  volatile ULONG TotalBytes;                       // offset: 0x50 (80)
  ULONG PoolIndex;                                 // offset: 0x80 (128)
  volatile LONG TotalPages;                        // offset: 0xc0 (192)
  volatile struct _SINGLE_LIST_ENTRY PendingFrees; // offset: 0x100 (256)
  volatile LONG PendingFreeDepth;                  // offset: 0x104 (260)
  struct _LIST_ENTRY ListHeads[512];               // offset: 0x140 (320)
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

// 0x10 (16) bytes
struct _KERNEL_STACK_SEGMENT {
  ULONG StackBase;    // offset: 0x0 (0)
  ULONG StackLimit;   // offset: 0x4 (4)
  ULONG KernelStack;  // offset: 0x8 (8)
  ULONG InitialStack; // offset: 0xc (12)
};

// 0x10 (16) bytes
struct _EXT_SET_PARAMETERS_V0 {
  ULONG Version;            // offset: 0x0 (0)
  ULONG Reserved;           // offset: 0x4 (4)
  LONGLONG NoWakeTolerance; // offset: 0x8 (8)
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

// 0x10 (16) bytes
struct _PPM_VETO_ENTRY {
  struct _LIST_ENTRY Link; // offset: 0x0 (0)
  ULONG VetoReason;        // offset: 0x8 (8)
  ULONG ReferenceCount;    // offset: 0xc (12)
};

// 0x14 (20) bytes
struct _PPM_VETO_ACCOUNTING {
  volatile LONG VetoPresent;                    // offset: 0x0 (0)
  struct _LIST_ENTRY VetoListHead;              // offset: 0x4 (4)
  ULONG PreallocatedVetoCount;                  // offset: 0xc (12)
  struct _PPM_VETO_ENTRY *PreallocatedVetoList; // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _PROCESSOR_IDLE_DEPENDENCY {
  ULONG ProcessorIndex;    // offset: 0x0 (0)
  UCHAR ExpectedState;     // offset: 0x4 (4)
  UCHAR AllowDeeperStates; // offset: 0x5 (5)
  UCHAR LooseDependency;   // offset: 0x6 (6)
};

// 0x28 (40) bytes
struct _KQUEUE {
  struct _DISPATCHER_HEADER Header;  // offset: 0x0 (0)
  struct _LIST_ENTRY EntryListHead;  // offset: 0x10 (16)
  volatile ULONG CurrentCount;       // offset: 0x18 (24)
  ULONG MaximumCount;                // offset: 0x1c (28)
  struct _LIST_ENTRY ThreadListHead; // offset: 0x20 (32)
};

// 0x2c (44) bytes
struct _ETW_REPLY_QUEUE {
  struct _KQUEUE Queue; // offset: 0x0 (0)
  LONG EventsLost;      // offset: 0x28 (40)
};

// 0x18 (24) bytes
struct _KWAIT_BLOCK {
  struct _LIST_ENTRY WaitListEntry; // offset: 0x0 (0)
  UCHAR WaitType;                   // offset: 0x8 (8)
  volatile UCHAR BlockState;        // offset: 0x9 (9)
  USHORT WaitKey;                   // offset: 0xa (10)
  union {
    struct _KTHREAD *Thread;           // offset: 0xc (12)
    struct _KQUEUE *NotificationQueue; // offset: 0xc (12)
  };
  VOID *Object;   // offset: 0x10 (16)
  VOID *SparePtr; // offset: 0x14 (20)
};

// 0x8 (8) bytes
struct _KLOCK_ENTRY_LOCK_STATE {
  union {
    struct {
      ULONG CrossThreadReleasable : 1; // offset: 0x0 (0)
      ULONG Busy : 1;                  // offset: 0x0 (0)
      ULONG Reserved : 29;             // offset: 0x0 (0)
      ULONG InTree : 1;                // offset: 0x0 (0)
    };
    VOID *LockState; // offset: 0x0 (0)
  };
  union {
    VOID *SessionState; // offset: 0x4 (4)
    ULONG SessionId;    // offset: 0x4 (4)
  };
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

// 0x24 (36) bytes
struct _HEAP_LIST_LOOKUP {
  struct _HEAP_LIST_LOOKUP *ExtendedLookup; // offset: 0x0 (0)
  ULONG ArraySize;                          // offset: 0x4 (4)
  ULONG ExtraItem;                          // offset: 0x8 (8)
  ULONG ItemCount;                          // offset: 0xc (12)
  ULONG OutOfRangeItems;                    // offset: 0x10 (16)
  ULONG BaseIndex;                          // offset: 0x14 (20)
  struct _LIST_ENTRY *ListHead;             // offset: 0x18 (24)
  ULONG *ListsInUseUlong;                   // offset: 0x1c (28)
  struct _LIST_ENTRY **ListHints;           // offset: 0x20 (32)
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

// 0x88 (136) bytes
struct _MBCB {
  SHORT NodeTypeCode;                // offset: 0x0 (0)
  SHORT NodeIsInZone;                // offset: 0x2 (2)
  ULONG PagesToWrite;                // offset: 0x4 (4)
  ULONG DirtyPages;                  // offset: 0x8 (8)
  ULONG Reserved;                    // offset: 0xc (12)
  struct _LIST_ENTRY BitmapRanges;   // offset: 0x10 (16)
  LONGLONG ResumeWritePage;          // offset: 0x18 (24)
  LONGLONG MostRecentlyDirtiedPage;  // offset: 0x20 (32)
  struct _BITMAP_RANGE BitmapRange1; // offset: 0x28 (40)
  struct _BITMAP_RANGE BitmapRange2; // offset: 0x48 (72)
  struct _BITMAP_RANGE BitmapRange3; // offset: 0x68 (104)
};

// 0x18 (24) bytes
struct _PEP_ACPI_INTERRUPT_RESOURCE {
  enum _PEP_ACPI_RESOURCE_TYPE Type;           // offset: 0x0 (0)
  enum _KINTERRUPT_MODE InterruptType;         // offset: 0x4 (4)
  enum _KINTERRUPT_POLARITY InterruptPolarity; // offset: 0x8 (8)
  union _PEP_ACPI_RESOURCE_FLAGS Flags;        // offset: 0xc (12)
  UCHAR Count;                                 // offset: 0x10 (16)
  ULONG *Pins;                                 // offset: 0x14 (20)
};

// 0x1c (28) bytes
struct _POP_FX_DRIVER_CALLBACKS {
  VOID (*ComponentActive)(VOID *arg1, ULONG arg2); // offset: 0x0 (0)
  VOID (*ComponentIdle)(VOID *arg1, ULONG arg2);   // offset: 0x4 (4)
  VOID (*ComponentIdleState)
  (VOID *arg1, ULONG arg2, ULONG arg3);       // offset: 0x8 (8)
  VOID (*DevicePowerRequired)(VOID *arg1);    // offset: 0xc (12)
  VOID (*DevicePowerNotRequired)(VOID *arg1); // offset: 0x10 (16)
  LONG (*PowerControl)
  (VOID *arg1, struct _GUID *arg2, VOID *arg3, ULONG arg4, VOID *arg5,
   ULONG arg6, ULONG *arg7); // offset: 0x14 (20)
  VOID (*ComponentCriticalTransition)
  (VOID *arg1, ULONG arg2, UCHAR arg3); // offset: 0x18 (24)
};

// 0x8 (8) bytes
struct _RTL_BITMAP {
  ULONG SizeOfBitMap; // offset: 0x0 (0)
  ULONG *Buffer;      // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _FREE_DISPLAY {
  ULONG RealVectorSize;       // offset: 0x0 (0)
  ULONG Hint;                 // offset: 0x4 (4)
  struct _RTL_BITMAP Display; // offset: 0x8 (8)
};

// 0x19c (412) bytes
struct _DUAL {
  ULONG Length;                         // offset: 0x0 (0)
  struct _HMAP_DIRECTORY *Map;          // offset: 0x4 (4)
  struct _HMAP_TABLE *SmallDir;         // offset: 0x8 (8)
  ULONG Guard;                          // offset: 0xc (12)
  struct _FREE_DISPLAY FreeDisplay[24]; // offset: 0x10 (16)
  struct _LIST_ENTRY FreeBins;          // offset: 0x190 (400)
  ULONG FreeSummary;                    // offset: 0x198 (408)
};

// 0x14 (20) bytes
struct _MI_PAGING_FILE_SPACE_BITMAPS {
  union {
    ULONG RefCount;                               // offset: 0x0 (0)
    struct _MI_PAGING_FILE_SPACE_BITMAPS *Anchor; // offset: 0x0 (0)
  };
  struct _RTL_BITMAP AllocationBitmap; // offset: 0x4 (4)
  union {
    struct _RTL_BITMAP ReservationBitmap; // offset: 0xc (12)
    struct _RTL_BITMAP EvictedBitmap;     // offset: 0xc (12)
  };
};

// 0x10 (16) bytes
struct _PPM_COORDINATED_SELECTION {
  ULONG MaximumStates;    // offset: 0x0 (0)
  ULONG SelectedStates;   // offset: 0x4 (4)
  ULONG DefaultSelection; // offset: 0x8 (8)
  ULONG *Selection;       // offset: 0xc (12)
};

// 0x8 (8) bytes
struct _PPM_SELECTION_MENU {
  ULONG Count;                               // offset: 0x0 (0)
  struct _PPM_SELECTION_MENU_ENTRY *Entries; // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _PPM_SELECTION_DEPENDENCY {
  ULONG Processor;                 // offset: 0x0 (0)
  struct _PPM_SELECTION_MENU Menu; // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _PPM_SELECTION_MENU_ENTRY {
  UCHAR StrictDependency;                           // offset: 0x0 (0)
  UCHAR InitiatingState;                            // offset: 0x1 (1)
  UCHAR DependentState;                             // offset: 0x2 (2)
  ULONG StateIndex;                                 // offset: 0x4 (4)
  ULONG Dependencies;                               // offset: 0x8 (8)
  struct _PPM_SELECTION_DEPENDENCY *DependencyList; // offset: 0xc (12)
};

// 0x8 (8) bytes
struct _KHETERO_PROCESSOR_SET {
  ULONG PreferredMask; // offset: 0x0 (0)
  ULONG AvailableMask; // offset: 0x4 (4)
};

// 0x8c (140) bytes
struct _KTRAP_FRAME {
  ULONG DbgEbp;                                         // offset: 0x0 (0)
  ULONG DbgEip;                                         // offset: 0x4 (4)
  ULONG DbgArgMark;                                     // offset: 0x8 (8)
  USHORT TempSegCs;                                     // offset: 0xc (12)
  UCHAR Logging;                                        // offset: 0xe (14)
  UCHAR FrameType;                                      // offset: 0xf (15)
  ULONG TempEsp;                                        // offset: 0x10 (16)
  ULONG Dr0;                                            // offset: 0x14 (20)
  ULONG Dr1;                                            // offset: 0x18 (24)
  ULONG Dr2;                                            // offset: 0x1c (28)
  ULONG Dr3;                                            // offset: 0x20 (32)
  ULONG Dr6;                                            // offset: 0x24 (36)
  ULONG Dr7;                                            // offset: 0x28 (40)
  ULONG SegGs;                                          // offset: 0x2c (44)
  ULONG SegEs;                                          // offset: 0x30 (48)
  ULONG SegDs;                                          // offset: 0x34 (52)
  ULONG Edx;                                            // offset: 0x38 (56)
  ULONG Ecx;                                            // offset: 0x3c (60)
  ULONG Eax;                                            // offset: 0x40 (64)
  UCHAR PreviousPreviousMode;                           // offset: 0x44 (68)
  UCHAR EntropyQueueDpc;                                // offset: 0x45 (69)
  UCHAR Reserved[2];                                    // offset: 0x46 (70)
  ULONG MxCsr;                                          // offset: 0x48 (72)
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

// 0x20 (32) bytes
struct _KSTACK_CONTROL {
  ULONG StackBase; // offset: 0x0 (0)
  union {
    ULONG ActualLimit;        // offset: 0x4 (4)
    ULONG StackExpansion : 1; // offset: 0x4 (4)
  };
  struct _KTRAP_FRAME *PreviousTrapFrame; // offset: 0x8 (8)
  VOID *PreviousExceptionList;            // offset: 0xc (12)
  struct _KERNEL_STACK_SEGMENT Previous;  // offset: 0x10 (16)
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

// 0x8 (8) bytes
struct _DESCRIPTOR {
  USHORT Pad;   // offset: 0x0 (0)
  USHORT Limit; // offset: 0x2 (2)
  ULONG Base;   // offset: 0x4 (4)
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
  union {
    struct {
      VOID (*KernelRoutine)
      (struct _KAPC *arg1, VOID (**arg2)(VOID *arg1, VOID *arg2, VOID *arg3),
       VOID **arg3, VOID **arg4, VOID **arg5);    // offset: 0x14 (20)
      VOID (*RundownRoutine)(struct _KAPC *arg1); // offset: 0x18 (24)
      VOID (*NormalRoutine)
      (VOID *arg1, VOID *arg2, VOID *arg3); // offset: 0x1c (28)
    };
    VOID *Reserved[3]; // offset: 0x14 (20)
  };
  VOID *NormalContext;   // offset: 0x20 (32)
  VOID *SystemArgument1; // offset: 0x24 (36)
  VOID *SystemArgument2; // offset: 0x28 (40)
  CHAR ApcStateIndex;    // offset: 0x2c (44)
  CHAR ApcMode;          // offset: 0x2d (45)
  UCHAR Inserted;        // offset: 0x2e (46)
};

// 0xc (12) bytes
struct _GROUP_AFFINITY {
  ULONG Mask;         // offset: 0x0 (0)
  USHORT Group;       // offset: 0x4 (4)
  USHORT Reserved[3]; // offset: 0x6 (6)
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

// 0x20 (32) bytes
struct _REQUEST_MAILBOX {
  struct _REQUEST_MAILBOX *Next;         // offset: 0x0 (0)
  ULONG RequestSummary;                  // offset: 0x4 (4)
  struct _KREQUEST_PACKET RequestPacket; // offset: 0x8 (8)
  volatile LONG *NodeTargetCountAddr;    // offset: 0x18 (24)
  volatile LONG NodeTargetCount;         // offset: 0x1c (28)
};

// 0xc (12) bytes
struct _CACHE_DESCRIPTOR {
  UCHAR Level;                     // offset: 0x0 (0)
  UCHAR Associativity;             // offset: 0x1 (1)
  USHORT LineSize;                 // offset: 0x2 (2)
  ULONG Size;                      // offset: 0x4 (4)
  enum _PROCESSOR_CACHE_TYPE Type; // offset: 0x8 (8)
};

// 0x100 (256) bytes
struct _KNODE {
  ULONG IdleNonParkedCpuSet; // offset: 0x0 (0)
  ULONG IdleSmtSet;          // offset: 0x4 (4)
  ULONG IdleCpuSet;          // offset: 0x8 (8)
  ULONG DeepIdleSet;         // offset: 0x40 (64)
  ULONG IdleConstrainedSet;  // offset: 0x44 (68)
  ULONG NonParkedSet;        // offset: 0x48 (72)
  LONG ParkLock;             // offset: 0x4c (76)
  ULONG Seed;                // offset: 0x50 (80)
  ULONG SiblingMask;         // offset: 0x80 (128)
  union {
    struct _GROUP_AFFINITY Affinity; // offset: 0x84 (132)
    struct {
      UCHAR AffinityFill[6];    // offset: 0x84 (132)
      USHORT NodeNumber;        // offset: 0x8a (138)
      USHORT PrimaryNodeNumber; // offset: 0x8c (140)
      UCHAR Stride;             // offset: 0x8e (142)
      UCHAR Spare0;             // offset: 0x8f (143)
    };
  };
  ULONG SharedReadyQueueLeaders;               // offset: 0x90 (144)
  ULONG ProximityId;                           // offset: 0x94 (148)
  ULONG Lowest;                                // offset: 0x98 (152)
  ULONG Highest;                               // offset: 0x9c (156)
  UCHAR MaximumProcessors;                     // offset: 0xa0 (160)
  struct _flags Flags;                         // offset: 0xa1 (161)
  UCHAR Spare10;                               // offset: 0xa2 (162)
  struct _KHETERO_PROCESSOR_SET HeteroSets[5]; // offset: 0xa4 (164)
};

// 0x134 (308) bytes
struct _KSHARED_READY_QUEUE {
  ULONG Lock;                           // offset: 0x0 (0)
  ULONG ReadySummary;                   // offset: 0x4 (4)
  struct _LIST_ENTRY ReadyListHead[32]; // offset: 0x8 (8)
  CHAR RunningSummary[32];              // offset: 0x108 (264)
  UCHAR Span;                           // offset: 0x128 (296)
  UCHAR LowProcIndex;                   // offset: 0x129 (297)
  UCHAR QueueIndex;                     // offset: 0x12a (298)
  UCHAR ProcCount;                      // offset: 0x12b (299)
  UCHAR ScanOwner;                      // offset: 0x12c (300)
  UCHAR Spare[3];                       // offset: 0x12d (301)
  ULONG Affinity;                       // offset: 0x130 (304)
};

// 0x54 (84) bytes
struct _IOP_IRP_STACK_PROFILER {
  ULONG Profile[20]; // offset: 0x0 (0)
  ULONG TotalIrps;   // offset: 0x50 (80)
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

// 0x20 (32) bytes
struct _KDPC {
  union {
    ULONG TargetInfoAsUlong; // offset: 0x0 (0)
    struct {
      UCHAR Type;             // offset: 0x0 (0)
      UCHAR Importance;       // offset: 0x1 (1)
      volatile USHORT Number; // offset: 0x2 (2)
    };
  };
  struct _SINGLE_LIST_ENTRY DpcListEntry; // offset: 0x4 (4)
  ULONG ProcessorHistory;                 // offset: 0x8 (8)
  VOID (*DeferredRoutine)
  (struct _KDPC *arg1, VOID *arg2, VOID *arg3, VOID *arg4); // offset: 0xc (12)
  VOID *DeferredContext;                                    // offset: 0x10 (16)
  VOID *SystemArgument1;                                    // offset: 0x14 (20)
  VOID *SystemArgument2;                                    // offset: 0x18 (24)
  VOID *DpcData;                                            // offset: 0x1c (28)
};

// 0x44 (68) bytes
struct _WHEAP_WORK_QUEUE {
  struct _LIST_ENTRY ListHead;      // offset: 0x0 (0)
  ULONG ListLock;                   // offset: 0x8 (8)
  volatile LONG ItemCount;          // offset: 0xc (12)
  struct _KDPC Dpc;                 // offset: 0x10 (16)
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x30 (48)
  VOID (*WorkRoutine)
  (struct _WHEAP_WORK_QUEUE *arg1,
   struct _LIST_ENTRY *arg2); // offset: 0x40 (64)
};

// 0xc (12) bytes
struct _WHEAP_INFO_BLOCK {
  ULONG ErrorSourceCount;                             // offset: 0x0 (0)
  struct _WHEAP_ERROR_SOURCE_TABLE *ErrorSourceTable; // offset: 0x4 (4)
  struct _WHEAP_WORK_QUEUE *WorkQueue;                // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _KDPC_DATA {
  struct _KDPC_LIST DpcList;        // offset: 0x0 (0)
  ULONG DpcLock;                    // offset: 0x8 (8)
  volatile LONG DpcQueueDepth;      // offset: 0xc (12)
  ULONG DpcCount;                   // offset: 0x10 (16)
  struct _KDPC *volatile ActiveDpc; // offset: 0x14 (20)
};

// 0xc (12) bytes
struct _RTL_BALANCED_NODE {
  union {
    struct _RTL_BALANCED_NODE *Children[2]; // offset: 0x0 (0)
    struct {
      struct _RTL_BALANCED_NODE *Left;  // offset: 0x0 (0)
      struct _RTL_BALANCED_NODE *Right; // offset: 0x4 (4)
    };
  };
  union {
    struct {
      UCHAR Red : 1;     // offset: 0x8 (8)
      UCHAR Balance : 2; // offset: 0x8 (8)
    };
    ULONG ParentValue; // offset: 0x8 (8)
  };
};

// 0x14 (20) bytes
struct _ETW_PROVIDER_TRAITS {
  struct _RTL_BALANCED_NODE Node; // offset: 0x0 (0)
  ULONG ReferenceCount;           // offset: 0xc (12)
  UCHAR Traits[1];                // offset: 0x10 (16)
};

// 0x28 (40) bytes
struct _MMVAD_SHORT {
  union {
    struct _RTL_BALANCED_NODE VadNode; // offset: 0x0 (0)
    struct _MMVAD_SHORT *NextVad;      // offset: 0x0 (0)
  };
  ULONG StartingVpn;             // offset: 0xc (12)
  ULONG EndingVpn;               // offset: 0x10 (16)
  LONG ReferenceCount;           // offset: 0x14 (20)
  struct _EX_PUSH_LOCK PushLock; // offset: 0x18 (24)
  union {
    ULONG LongFlags;              // offset: 0x1c (28)
    struct _MMVAD_FLAGS VadFlags; // offset: 0x1c (28)

  } u; // offset: 0x1c (28)
  union {
    ULONG LongFlags1;               // offset: 0x20 (32)
    struct _MMVAD_FLAGS1 VadFlags1; // offset: 0x20 (32)

  } u1;                                  // offset: 0x20 (32)
  struct _MI_VAD_EVENT_BLOCK *EventList; // offset: 0x24 (36)
};

// 0x30 (48) bytes
struct _KLOCK_ENTRY {
  union {
    struct _RTL_BALANCED_NODE TreeNode;      // offset: 0x0 (0)
    struct _SINGLE_LIST_ENTRY FreeListEntry; // offset: 0x0 (0)
  };
  union {
    ULONG EntryFlags; // offset: 0xc (12)
    struct {
      UCHAR EntryOffset; // offset: 0xc (12)
      union {
        UCHAR ThreadLocalFlags; // offset: 0xd (13)
        struct {
          UCHAR WaitingBit : 1; // offset: 0xd (13)
          UCHAR Spare0 : 7;     // offset: 0xd (13)
        };
      };
      union {
        UCHAR AcquiredByte;    // offset: 0xe (14)
        UCHAR AcquiredBit : 1; // offset: 0xe (14)
      };
      union {
        UCHAR CrossThreadFlags; // offset: 0xf (15)
        struct {
          UCHAR HeadNodeBit : 1;   // offset: 0xf (15)
          UCHAR IoPriorityBit : 1; // offset: 0xf (15)
          UCHAR Spare1 : 6;        // offset: 0xf (15)
        };
      };
    };
    struct {
      ULONG StaticState : 8; // offset: 0xc (12)
      ULONG AllFlags : 24;   // offset: 0xc (12)
    };
  };
  union {
    struct _KLOCK_ENTRY_LOCK_STATE LockState; // offset: 0x10 (16)
    VOID *volatile LockUnsafe;                // offset: 0x10 (16)
    struct {
      volatile UCHAR CrossThreadReleasableAndBusyByte; // offset: 0x10 (16)
      UCHAR Reserved[2];                               // offset: 0x11 (17)
      volatile UCHAR InTreeByte;                       // offset: 0x13 (19)
      union {
        VOID *SessionState; // offset: 0x14 (20)
        ULONG SessionId;    // offset: 0x14 (20)
      };
    };
  };
  union {
    struct {
      struct _RTL_RB_TREE OwnerTree;  // offset: 0x18 (24)
      struct _RTL_RB_TREE WaiterTree; // offset: 0x20 (32)
    };
    CHAR CpuPriorityKey; // offset: 0x18 (24)
  };
  ULONG EntryLock; // offset: 0x28 (40)
  union {
    USHORT AllBoosts; // offset: 0x2c (44)
    struct {
      USHORT IoBoost : 1;          // offset: 0x2c (44)
      USHORT CpuBoostsBitmap : 15; // offset: 0x2c (44)
    };
  };
  USHORT IoNormalPriorityWaiterCount; // offset: 0x2e (46)
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

// 0x3c (60) bytes
struct _SECURITY_CLIENT_CONTEXT {
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // offset: 0x0 (0)
  VOID *ClientToken;                               // offset: 0xc (12)
  UCHAR DirectlyAccessClientToken;                 // offset: 0x10 (16)
  UCHAR DirectAccessEffectiveOnly;                 // offset: 0x11 (17)
  UCHAR ServerIsRemote;                            // offset: 0x12 (18)
  struct _TOKEN_CONTROL ClientTokenControl;        // offset: 0x14 (20)
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

// 0x10 (16) bytes
struct _IO_SECURITY_CONTEXT {
  struct _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // offset: 0x0 (0)
  struct _ACCESS_STATE *AccessState;                // offset: 0x4 (4)
  ULONG DesiredAccess;                              // offset: 0x8 (8)
  ULONG FullCreateOptions;                          // offset: 0xc (12)
};

// 0x24 (36) bytes
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

// 0x14 (20) bytes
struct _SEP_LOWBOX_NUMBER_MAPPING {
  struct _EX_PUSH_LOCK Lock;                 // offset: 0x0 (0)
  struct _RTL_BITMAP Bitmap;                 // offset: 0x4 (4)
  struct _RTL_DYNAMIC_HASH_TABLE *HashTable; // offset: 0xc (12)
  UCHAR Active;                              // offset: 0x10 (16)
};

// 0x20 (32) bytes
struct _SESSION_LOWBOX_MAP {
  struct _LIST_ENTRY ListEntry;                // offset: 0x0 (0)
  ULONG SessionId;                             // offset: 0x8 (8)
  struct _SEP_LOWBOX_NUMBER_MAPPING LowboxMap; // offset: 0xc (12)
};

// 0x8 (8) bytes
struct _SEP_LOWBOX_HANDLES_TABLE {
  struct _EX_PUSH_LOCK Lock;                 // offset: 0x0 (0)
  struct _RTL_DYNAMIC_HASH_TABLE *HashTable; // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _RTL_DYNAMIC_HASH_TABLE_ENTRY {
  struct _LIST_ENTRY Linkage; // offset: 0x0 (0)
  ULONG Signature;            // offset: 0x8 (8)
};

// 0x1c (28) bytes
struct _SEP_LOWBOX_HANDLES_ENTRY {
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry; // offset: 0x0 (0)
  LONG ReferenceCount;                            // offset: 0xc (12)
  VOID *PackageSid;                               // offset: 0x10 (16)
  ULONG HandleCount;                              // offset: 0x14 (20)
  VOID **Handles;                                 // offset: 0x18 (24)
};

// 0x1c (28) bytes
struct _SEP_LOWBOX_NUMBER_ENTRY {
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry; // offset: 0x0 (0)
  LONG ReferenceCount;                            // offset: 0xc (12)
  VOID *PackageSid;                               // offset: 0x10 (16)
  ULONG LowboxNumber;                             // offset: 0x14 (20)
  VOID *AtomTable;                                // offset: 0x18 (24)
};

// 0x14 (20) bytes
struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR {
  union {
    struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry; // offset: 0x0 (0)
    struct _LIST_ENTRY *CurEntry;                   // offset: 0x0 (0)
  };
  struct _LIST_ENTRY *ChainHead; // offset: 0xc (12)
  ULONG BucketIndex;             // offset: 0x10 (16)
};

// 0xc (12) bytes
struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT {
  struct _LIST_ENTRY *ChainHead;   // offset: 0x0 (0)
  struct _LIST_ENTRY *PrevLinkage; // offset: 0x4 (4)
  ULONG Signature;                 // offset: 0x8 (8)
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
  ULONG Spare0;           // offset: 0x6c (108)
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

// 0x50 (80) bytes
struct _EXCEPTION_RECORD {
  LONG ExceptionCode;                        // offset: 0x0 (0)
  ULONG ExceptionFlags;                      // offset: 0x4 (4)
  struct _EXCEPTION_RECORD *ExceptionRecord; // offset: 0x8 (8)
  VOID *ExceptionAddress;                    // offset: 0xc (12)
  ULONG NumberParameters;                    // offset: 0x10 (16)
  ULONG ExceptionInformation[15];            // offset: 0x14 (20)
};

// 0x10 (16) bytes
struct _RTL_DRIVE_LETTER_CURDIR {
  USHORT Flags;           // offset: 0x0 (0)
  USHORT Length;          // offset: 0x2 (2)
  ULONG TimeStamp;        // offset: 0x4 (4)
  struct _STRING DosPath; // offset: 0x8 (8)
};

// 0xc (12) bytes
struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME {
  struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME *Previous; // offset: 0x0 (0)
  struct _ACTIVATION_CONTEXT *ActivationContext;        // offset: 0x4 (4)
  ULONG Flags;                                          // offset: 0x8 (8)
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

// 0x38 (56) bytes
struct _HEAP_LOCK {
  union {
    struct _RTL_CRITICAL_SECTION CriticalSection; // offset: 0x0 (0)
    struct _ERESOURCE Resource;                   // offset: 0x0 (0)

  } Lock; // offset: 0x0 (0)
};

// 0x20 (32) bytes
struct _RTL_CRITICAL_SECTION_DEBUG {
  USHORT Type;                                   // offset: 0x0 (0)
  USHORT CreatorBackTraceIndex;                  // offset: 0x2 (2)
  struct _RTL_CRITICAL_SECTION *CriticalSection; // offset: 0x4 (4)
  struct _LIST_ENTRY ProcessLocksList;           // offset: 0x8 (8)
  ULONG EntryCount;                              // offset: 0x10 (16)
  ULONG ContentionCount;                         // offset: 0x14 (20)
  ULONG Flags;                                   // offset: 0x18 (24)
  USHORT CreatorBackTraceIndexHigh;              // offset: 0x1c (28)
  USHORT SpareUSHORT;                            // offset: 0x1e (30)
};

// 0x2a4 (676) bytes
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
  ULONG EnvironmentSize;                                 // offset: 0x290 (656)
  ULONG EnvironmentVersion;                              // offset: 0x294 (660)
  VOID *PackageDependencyData;                           // offset: 0x298 (664)
  ULONG ProcessGroupId;                                  // offset: 0x29c (668)
  ULONG LoaderThreads;                                   // offset: 0x2a0 (672)
};

// 0x30 (48) bytes
struct _PEB_LDR_DATA {
  ULONG Length;                                       // offset: 0x0 (0)
  UCHAR Initialized;                                  // offset: 0x4 (4)
  VOID *SsHandle;                                     // offset: 0x8 (8)
  struct _LIST_ENTRY InLoadOrderModuleList;           // offset: 0xc (12)
  struct _LIST_ENTRY InMemoryOrderModuleList;         // offset: 0x14 (20)
  struct _LIST_ENTRY InInitializationOrderModuleList; // offset: 0x1c (28)
  VOID *EntryInProgress;                              // offset: 0x24 (36)
  UCHAR ShutdownInProgress;                           // offset: 0x28 (40)
  VOID *ShutdownThreadId;                             // offset: 0x2c (44)
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

// 0x88 (136) bytes
struct _SID_AND_ATTRIBUTES_HASH {
  ULONG SidCount;                      // offset: 0x0 (0)
  struct _SID_AND_ATTRIBUTES *SidAttr; // offset: 0x4 (4)
  ULONG Hash[32];                      // offset: 0x8 (8)
};

// 0x130 (304) bytes
struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION {
  ULONG DeviceGroupsCount;                             // offset: 0x0 (0)
  struct _SID_AND_ATTRIBUTES *pDeviceGroups;           // offset: 0x4 (4)
  ULONG RestrictedDeviceGroupsCount;                   // offset: 0x8 (8)
  struct _SID_AND_ATTRIBUTES *pRestrictedDeviceGroups; // offset: 0xc (12)
  struct _SID_AND_ATTRIBUTES_HASH DeviceGroupsHash;    // offset: 0x10 (16)
  struct _SID_AND_ATTRIBUTES_HASH
      RestrictedDeviceGroupsHash; // offset: 0x98 (152)
  struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
      *pUserSecurityAttributes; // offset: 0x120 (288)
  struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
      *pDeviceSecurityAttributes; // offset: 0x124 (292)
  struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
      *pRestrictedUserSecurityAttributes; // offset: 0x128 (296)
  struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
      *pRestrictedDeviceSecurityAttributes; // offset: 0x12c (300)
};

// 0x5c (92) bytes
struct _SEP_LOGON_SESSION_REFERENCES {
  struct _SEP_LOGON_SESSION_REFERENCES *Next;          // offset: 0x0 (0)
  struct _LUID LogonId;                                // offset: 0x4 (4)
  struct _LUID BuddyLogonId;                           // offset: 0xc (12)
  LONG ReferenceCount;                                 // offset: 0x14 (20)
  ULONG Flags;                                         // offset: 0x18 (24)
  struct _DEVICE_MAP *pDeviceMap;                      // offset: 0x1c (28)
  VOID *Token;                                         // offset: 0x20 (32)
  struct _UNICODE_STRING AccountName;                  // offset: 0x24 (36)
  struct _UNICODE_STRING AuthorityName;                // offset: 0x2c (44)
  struct _SEP_LOWBOX_HANDLES_TABLE LowBoxHandlesTable; // offset: 0x34 (52)
  struct _EX_PUSH_LOCK SharedDataLock;                 // offset: 0x3c (60)
  struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION
      *SharedClaimAttributes;                         // offset: 0x40 (64)
  struct _SEP_SID_VALUES_BLOCK *SharedSidValues;      // offset: 0x44 (68)
  struct _OB_HANDLE_REVOCATION_BLOCK RevocationBlock; // offset: 0x48 (72)
  struct _ESILO *ServerSilo;                          // offset: 0x58 (88)
};

// 0x38 (56) bytes
struct _TOKEN_ACCESS_INFORMATION {
  struct _SID_AND_ATTRIBUTES_HASH *SidHash;              // offset: 0x0 (0)
  struct _SID_AND_ATTRIBUTES_HASH *RestrictedSidHash;    // offset: 0x4 (4)
  struct _TOKEN_PRIVILEGES *Privileges;                  // offset: 0x8 (8)
  struct _LUID AuthenticationId;                         // offset: 0xc (12)
  enum _TOKEN_TYPE TokenType;                            // offset: 0x14 (20)
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // offset: 0x18 (24)
  struct _TOKEN_MANDATORY_POLICY MandatoryPolicy;        // offset: 0x1c (28)
  ULONG Flags;                                           // offset: 0x20 (32)
  ULONG AppContainerNumber;                              // offset: 0x24 (36)
  VOID *PackageSid;                                      // offset: 0x28 (40)
  struct _SID_AND_ATTRIBUTES_HASH *CapabilitiesHash;     // offset: 0x2c (44)
  VOID *TrustLevelSid;                                   // offset: 0x30 (48)
  VOID *SecurityAttributes;                              // offset: 0x34 (52)
};

// 0x80 (128) bytes
struct _ACCESS_REASONS {
  ULONG Data[32]; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _VI_VERIFIER_ISSUE {
  ULONG IssueType;     // offset: 0x0 (0)
  VOID *Address;       // offset: 0x4 (4)
  ULONG Parameters[2]; // offset: 0x8 (8)
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

// 0xc (12) bytes
struct _TEB_ACTIVE_FRAME {
  ULONG Flags;                               // offset: 0x0 (0)
  struct _TEB_ACTIVE_FRAME *Previous;        // offset: 0x4 (4)
  struct _TEB_ACTIVE_FRAME_CONTEXT *Context; // offset: 0x8 (8)
};

// 0x4e0 (1248) bytes
struct _GDI_TEB_BATCH32 {
  ULONG Offset : 31;             // offset: 0x0 (0)
  ULONG HasRenderingCommand : 1; // offset: 0x0 (0)
  ULONG HDC;                     // offset: 0x4 (4)
  ULONG Buffer[310];             // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _ACTIVATION_CONTEXT_STACK {
  struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME *ActiveFrame; // offset: 0x0 (0)
  struct _LIST_ENTRY FrameListCache;                       // offset: 0x4 (4)
  ULONG Flags;                                             // offset: 0xc (12)
  ULONG NextCookieSequenceNumber;                          // offset: 0x10 (16)
  ULONG StackId;                                           // offset: 0x14 (20)
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

// 0x2c (44) bytes
struct _PROVIDER_BINARY_ENTRY {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 (0)
  UCHAR ConsumersNotified;      // offset: 0x8 (8)
  UCHAR Spare[3];               // offset: 0x9 (9)
  ULONG DebugIdSize;            // offset: 0xc (12)
  union _CVDD DebugId;          // offset: 0x10 (16)
};

// 0x30 (48) bytes
struct _PNP_DEVICE_ACTION_ENTRY {
  struct _LIST_ENTRY ListEntry;                // offset: 0x0 (0)
  struct _DEVICE_OBJECT *DeviceObject;         // offset: 0x8 (8)
  enum _PNP_DEVICE_ACTION_REQUEST RequestType; // offset: 0xc (12)
  UCHAR ReorderingBarrier;                     // offset: 0x10 (16)
  ULONG RequestArgument;                       // offset: 0x14 (20)
  struct _KEVENT *CompletionEvent;             // offset: 0x18 (24)
  LONG *CompletionStatus;                      // offset: 0x1c (28)
  struct _GUID ActivityId;                     // offset: 0x20 (32)
};

// 0x34 (52) bytes
struct _IO_WORKITEM {
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x0 (0)
  VOID (*Routine)
  (VOID *arg1, VOID *arg2, struct _IO_WORKITEM *arg3); // offset: 0x10 (16)
  VOID *IoObject;                                      // offset: 0x14 (20)
  VOID *Context;                                       // offset: 0x18 (24)
  VOID *WorkingOnBehalfClient;                         // offset: 0x1c (28)
  ULONG Type;                                          // offset: 0x20 (32)
  struct _GUID ActivityId;                             // offset: 0x24 (36)
};

// 0x2c (44) bytes
struct _CM_KEY_BODY {
  ULONG Type;                                    // offset: 0x0 (0)
  struct _CM_KEY_CONTROL_BLOCK *KeyControlBlock; // offset: 0x4 (4)
  struct _CM_NOTIFY_BLOCK *NotifyBlock;          // offset: 0x8 (8)
  VOID *ProcessID;                               // offset: 0xc (12)
  struct _LIST_ENTRY KeyBodyList;                // offset: 0x10 (16)
  ULONG Flags : 16;                              // offset: 0x18 (24)
  ULONG HandleTags : 16;                         // offset: 0x18 (24)
  VOID *KtmTrans;                                // offset: 0x1c (28)
  struct _GUID *KtmUow;                          // offset: 0x20 (32)
  struct _LIST_ENTRY ContextListHead;            // offset: 0x24 (36)
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

// 0x8 (8) bytes
struct _DISALLOWED_GUIDS {
  USHORT Count;        // offset: 0x0 (0)
  struct _GUID *Guids; // offset: 0x4 (4)
};

// 0x44 (68) bytes
struct _PLUGPLAY_EVENT_BLOCK {
  struct _GUID EventGuid;                      // offset: 0x0 (0)
  enum _PLUGPLAY_EVENT_CATEGORY EventCategory; // offset: 0x10 (16)
  ULONG *Result;                               // offset: 0x14 (20)
  ULONG Flags;                                 // offset: 0x18 (24)
  ULONG TotalSize;                             // offset: 0x1c (28)
  VOID *DeviceObject;                          // offset: 0x20 (32)
  union {
    struct {
      struct _GUID ClassGuid;    // offset: 0x0 (0)
      WCHAR SymbolicLinkName[1]; // offset: 0x10 (16)
    } DeviceClass;               // offset: 0x24 (36)
    struct {
      WCHAR DeviceId[1]; // offset: 0x0 (0)
    } TargetDevice;      // offset: 0x24 (36)
    struct {
      WCHAR DeviceId[1]; // offset: 0x0 (0)
    } InstallDevice;     // offset: 0x24 (36)
    struct {
      VOID *NotificationStructure; // offset: 0x0 (0)
      WCHAR DeviceId[1];           // offset: 0x4 (4)
    } CustomNotification;          // offset: 0x24 (36)
    struct {
      VOID *Notification;  // offset: 0x0 (0)
    } ProfileNotification; // offset: 0x24 (36)
    struct {
      ULONG NotificationCode; // offset: 0x0 (0)
      ULONG NotificationData; // offset: 0x4 (4)
    } PowerNotification;      // offset: 0x24 (36)
    struct {
      enum _PNP_VETO_TYPE VetoType;    // offset: 0x0 (0)
      WCHAR DeviceIdVetoNameBuffer[1]; // offset: 0x4 (4)
    } VetoNotification;                // offset: 0x24 (36)
    struct {
      struct _GUID BlockedDriverGuid; // offset: 0x0 (0)
    } BlockedDriverNotification;      // offset: 0x24 (36)
    struct {
      WCHAR ParentId[1];     // offset: 0x0 (0)
    } InvalidIDNotification; // offset: 0x24 (36)
    struct {
      struct _GUID PowerSettingGuid; // offset: 0x0 (0)
      ULONG Flags;                   // offset: 0x10 (16)
      ULONG SessionId;               // offset: 0x14 (20)
      ULONG DataLength;              // offset: 0x18 (24)
      UCHAR Data[1];                 // offset: 0x1c (28)
    } PowerSettingNotification;      // offset: 0x24 (36)
    struct {
      WCHAR DeviceId[1];          // offset: 0x0 (0)
    } PropertyChangeNotification; // offset: 0x24 (36)
    struct {
      WCHAR DeviceId[1];          // offset: 0x0 (0)
    } DeviceInstanceNotification; // offset: 0x24 (36)

  } u; // offset: 0x24 (36)
};

// 0x84 (132) bytes
struct _PNP_DEVICE_EVENT_ENTRY {
  struct _LIST_ENTRY ListEntry;           // offset: 0x0 (0)
  ULONG Argument;                         // offset: 0x8 (8)
  struct _KEVENT *CallerEvent;            // offset: 0xc (12)
  VOID (*Callback)(VOID *arg1);           // offset: 0x10 (16)
  VOID *Context;                          // offset: 0x14 (20)
  enum _PNP_VETO_TYPE *VetoType;          // offset: 0x18 (24)
  struct _UNICODE_STRING *VetoName;       // offset: 0x1c (28)
  ULONG RefCount;                         // offset: 0x20 (32)
  ULONG Lock;                             // offset: 0x24 (36)
  UCHAR Cancel;                           // offset: 0x28 (40)
  struct _PNP_DEVICE_EVENT_ENTRY *Parent; // offset: 0x2c (44)
  struct _GUID ActivityId;                // offset: 0x30 (48)
  struct _PLUGPLAY_EVENT_BLOCK Data;      // offset: 0x40 (64)
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

// 0xc4 (196) bytes
struct _AUX_ACCESS_DATA {
  struct _PRIVILEGE_SET *PrivilegesUsed;                   // offset: 0x0 (0)
  struct _GENERIC_MAPPING GenericMapping;                  // offset: 0x4 (4)
  ULONG AccessesToAudit;                                   // offset: 0x14 (20)
  ULONG MaximumAuditMask;                                  // offset: 0x18 (24)
  struct _GUID TransactionId;                              // offset: 0x1c (28)
  VOID *NewSecurityDescriptor;                             // offset: 0x2c (44)
  VOID *ExistingSecurityDescriptor;                        // offset: 0x30 (48)
  VOID *ParentSecurityDescriptor;                          // offset: 0x34 (52)
  VOID (*DeRefSecurityDescriptor)(VOID *arg1, VOID *arg2); // offset: 0x38 (56)
  VOID *SDLock;                                            // offset: 0x3c (60)
  struct _ACCESS_REASONS AccessReasons;                    // offset: 0x40 (64)
  UCHAR GenerateStagingEvents;                             // offset: 0xc0 (192)
};

// 0x4e0 (1248) bytes
struct _GDI_TEB_BATCH {
  ULONG Offset : 31;             // offset: 0x0 (0)
  ULONG HasRenderingCommand : 1; // offset: 0x0 (0)
  ULONG HDC;                     // offset: 0x4 (4)
  ULONG Buffer[310];             // offset: 0x8 (8)
};

// 0x6c (108) bytes
struct _OBP_SYSTEM_DOS_DEVICE_STATE {
  ULONG GlobalDeviceMap;      // offset: 0x0 (0)
  ULONG LocalDeviceCount[26]; // offset: 0x4 (4)
};

// 0x74 (116) bytes
struct _OBP_SILODRIVERSTATE {
  struct _DEVICE_MAP *SystemDeviceMap;                      // offset: 0x0 (0)
  struct _OBP_SYSTEM_DOS_DEVICE_STATE SystemDosDeviceState; // offset: 0x4 (4)
  struct _EX_PUSH_LOCK DeviceMapLock; // offset: 0x70 (112)
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

// 0x28 (40) bytes
struct _TP_CALLBACK_ENVIRON_V3 {
  ULONG Version;                          // offset: 0x0 (0)
  struct _TP_POOL *Pool;                  // offset: 0x4 (4)
  struct _TP_CLEANUP_GROUP *CleanupGroup; // offset: 0x8 (8)
  VOID (*CleanupGroupCancelCallback)
  (VOID *arg1, VOID *arg2);                      // offset: 0xc (12)
  VOID *RaceDll;                                 // offset: 0x10 (16)
  struct _ACTIVATION_CONTEXT *ActivationContext; // offset: 0x14 (20)
  VOID (*FinalizationCallback)
  (struct _TP_CALLBACK_INSTANCE *arg1, VOID *arg2); // offset: 0x18 (24)
  union {
    ULONG Flags; // offset: 0x1c (28)
    struct {
      ULONG LongFunction : 1; // offset: 0x0 (0)
      ULONG Persistent : 1;   // offset: 0x0 (0)
      ULONG Private : 30;     // offset: 0x0 (0)
    } s;                      // offset: 0x1c (28)

  } u;                                         // offset: 0x1c (28)
  enum _TP_CALLBACK_PRIORITY CallbackPriority; // offset: 0x20 (32)
  ULONG Size;                                  // offset: 0x24 (36)
};

// 0x8 (8) bytes
struct _XSTATE_FEATURE {
  ULONG Offset; // offset: 0x0 (0)
  ULONG Size;   // offset: 0x4 (4)
};

// 0x128 (296) bytes
struct _KENTROPY_TIMING_STATE {
  ULONG EntropyCount;        // offset: 0x0 (0)
  ULONG Buffer[64];          // offset: 0x4 (4)
  struct _KDPC Dpc;          // offset: 0x104 (260)
  ULONG LastDeliveredBuffer; // offset: 0x124 (292)
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

// 0x40 (64) bytes
struct _MI_SYSTEM_TRIM_STATE {
  ULONG ExpansionLock;                    // offset: 0x0 (0)
  volatile LONG TrimInProgressCount;      // offset: 0x4 (4)
  struct _KEVENT PeriodicWorkingSetEvent; // offset: 0x8 (8)
  ULONG TrimAllPageFaultCount[3];         // offset: 0x18 (24)
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

// 0x68 (104) bytes
struct _MI_NODE_INFORMATION {
  ULONG LargePageFreeCount[2];            // offset: 0x0 (0)
  struct _LIST_ENTRY LargePages[2][2][1]; // offset: 0x8 (8)
  ULONG LargePagesCount[2][2][1];         // offset: 0x28 (40)
  volatile ULONG FreeCount[2];            // offset: 0x38 (56)
  ULONG TotalPages[1];                    // offset: 0x40 (64)
  ULONG TotalPagesEntireNode;             // offset: 0x44 (68)
  ULONG MmShiftedColor;                   // offset: 0x48 (72)
  ULONG Color;                            // offset: 0x4c (76)
  volatile ULONG ChannelFreeCount[1][2];  // offset: 0x50 (80)
  struct {
    ULONG ChannelsHotCold : 1;    // offset: 0x0 (0)
    ULONG Spare : 31;             // offset: 0x0 (0)
  } Flags;                        // offset: 0x58 (88)
  struct _EX_PUSH_LOCK NodeLock;  // offset: 0x5c (92)
  UCHAR ChannelStatus;            // offset: 0x60 (96)
  UCHAR ChannelOrdering[1];       // offset: 0x61 (97)
  UCHAR LockedChannelOrdering[1]; // offset: 0x62 (98)
  UCHAR PowerAttribute[1];        // offset: 0x63 (99)
  ULONG LargePageLock;            // offset: 0x64 (100)
};

// 0xe8 (232) bytes
struct _MI_PARTITION_CORE {
  USHORT PartitionId; // offset: 0x0 (0)
  union {
    ULONG LongFlags;                  // offset: 0x4 (4)
    struct _MI_PARTITION_FLAGS Flags; // offset: 0x4 (4)

  } u;                                                // offset: 0x4 (4)
  ULONG ReferenceCount;                               // offset: 0x8 (8)
  struct _MI_PARTITION *ParentPartition;              // offset: 0xc (12)
  struct _LIST_ENTRY ListEntry;                       // offset: 0x10 (16)
  struct _MI_NODE_INFORMATION *NodeInformation;       // offset: 0x18 (24)
  struct _MDL *MdlPhysicalMemoryBlock;                // offset: 0x1c (28)
  struct _PHYSICAL_MEMORY_DESCRIPTOR *MemoryNodeRuns; // offset: 0x20 (32)
  struct _MI_PARTITION_STATISTICS Stats;              // offset: 0x24 (36)
  struct _PHYSICAL_MEMORY_DESCRIPTOR *MemoryRuns;     // offset: 0x74 (116)
  struct _KEVENT ExitEvent;                           // offset: 0x78 (120)
  VOID *SystemThreadHandles[5];                       // offset: 0x88 (136)
  VOID *PartitionObject;                              // offset: 0x9c (156)
  VOID *PartitionObjectHandle;                        // offset: 0xa0 (160)
  struct _EX_PUSH_LOCK DynamicMemoryPushLock;         // offset: 0xa4 (164)
  volatile LONG DynamicMemoryLock;                    // offset: 0xa8 (168)
  struct _KEVENT TemporaryMemoryEvent;                // offset: 0xac (172)
  struct _KEVENT *MemoryEvents[11];                   // offset: 0xbc (188)
};

// 0x1c (28) bytes
struct _MMINPAGE_SUPPORT_FLOW_THROUGH {
  ULONG Page[1];                                  // offset: 0x0 (0)
  struct _MMINPAGE_SUPPORT *InitialInPageSupport; // offset: 0x4 (4)
  struct _MMPAGING_FILE *PagingFile;              // offset: 0x8 (8)
  ULONG PageFileOffset;                           // offset: 0xc (12)
  struct _RTL_BALANCED_NODE Node;                 // offset: 0x10 (16)
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

// 0xc (12) bytes
struct _KAFFINITY_EX {
  USHORT Count;    // offset: 0x0 (0)
  USHORT Size;     // offset: 0x2 (2)
  ULONG Reserved;  // offset: 0x4 (4)
  ULONG Bitmap[1]; // offset: 0x8 (8)
};

// 0xc0 (192) bytes
struct _PPM_PLATFORM_STATE {
  ULONG Latency;                                     // offset: 0x0 (0)
  ULONG BreakEvenDuration;                           // offset: 0x4 (4)
  struct _PPM_VETO_ACCOUNTING VetoAccounting;        // offset: 0x8 (8)
  UCHAR TransitionDebugger;                          // offset: 0x1c (28)
  UCHAR Platform;                                    // offset: 0x1d (29)
  ULONG DependencyListCount;                         // offset: 0x20 (32)
  struct _KAFFINITY_EX Processors;                   // offset: 0x24 (36)
  struct _UNICODE_STRING Name;                       // offset: 0x30 (48)
  struct _PPM_SELECTION_DEPENDENCY *DependencyLists; // offset: 0x38 (56)
  union _PPM_COORDINATED_SYNCHRONIZATION volatile Synchronization; // offset:
                                                                   // 0x3c (60)
  volatile ULONGLONG EnterTime; // offset: 0x40 (64)
  union {
    volatile LONG RefCount; // offset: 0x80 (128)
    UCHAR CacheAlign0[64];  // offset: 0x80 (128)
  };
};

// 0xc (12) bytes
struct _KAFFINITY_ENUMERATION_CONTEXT {
  struct _KAFFINITY_EX *Affinity; // offset: 0x0 (0)
  ULONG CurrentMask;              // offset: 0x4 (4)
  USHORT CurrentIndex;            // offset: 0x8 (8)
};

// 0x40 (64) bytes
struct _PPM_IDLE_STATE {
  struct _KAFFINITY_EX DomainMembers;         // offset: 0x0 (0)
  struct _UNICODE_STRING Name;                // offset: 0xc (12)
  ULONG Latency;                              // offset: 0x14 (20)
  ULONG BreakEvenDuration;                    // offset: 0x18 (24)
  ULONG Power;                                // offset: 0x1c (28)
  ULONG StateFlags;                           // offset: 0x20 (32)
  struct _PPM_VETO_ACCOUNTING VetoAccounting; // offset: 0x24 (36)
  UCHAR StateType;                            // offset: 0x38 (56)
  UCHAR InterruptsEnabled;                    // offset: 0x39 (57)
  UCHAR Interruptible;                        // offset: 0x3a (58)
  UCHAR ContextRetained;                      // offset: 0x3b (59)
  UCHAR CacheCoherent;                        // offset: 0x3c (60)
  UCHAR WakesSpuriously;                      // offset: 0x3d (61)
  UCHAR PlatformOnly;                         // offset: 0x3e (62)
  UCHAR NoCState;                             // offset: 0x3f (63)
};

// 0x18 (24) bytes
struct _OBJECT_SYMBOLIC_LINK {
  union _LARGE_INTEGER CreationTime; // offset: 0x0 (0)
  struct _UNICODE_STRING LinkTarget; // offset: 0x8 (8)
  ULONG DosDeviceDriveIndex;         // offset: 0x10 (16)
  ULONG Flags;                       // offset: 0x14 (20)
};

// 0xa0 (160) bytes
struct _LDR_DATA_TABLE_ENTRY {
  struct _LIST_ENTRY InLoadOrderLinks;           // offset: 0x0 (0)
  struct _LIST_ENTRY InMemoryOrderLinks;         // offset: 0x8 (8)
  struct _LIST_ENTRY InInitializationOrderLinks; // offset: 0x10 (16)
  VOID *DllBase;                                 // offset: 0x18 (24)
  VOID *EntryPoint;                              // offset: 0x1c (28)
  ULONG SizeOfImage;                             // offset: 0x20 (32)
  struct _UNICODE_STRING FullDllName;            // offset: 0x24 (36)
  struct _UNICODE_STRING BaseDllName;            // offset: 0x2c (44)
  union {
    UCHAR FlagGroup[4]; // offset: 0x34 (52)
    ULONG Flags;        // offset: 0x34 (52)
    struct {
      ULONG PackagedBinary : 1;          // offset: 0x34 (52)
      ULONG MarkedForRemoval : 1;        // offset: 0x34 (52)
      ULONG ImageDll : 1;                // offset: 0x34 (52)
      ULONG LoadNotificationsSent : 1;   // offset: 0x34 (52)
      ULONG TelemetryEntryProcessed : 1; // offset: 0x34 (52)
      ULONG ProcessStaticImport : 1;     // offset: 0x34 (52)
      ULONG InLegacyLists : 1;           // offset: 0x34 (52)
      ULONG InIndexes : 1;               // offset: 0x34 (52)
      ULONG ShimDll : 1;                 // offset: 0x34 (52)
      ULONG InExceptionTable : 1;        // offset: 0x34 (52)
      ULONG ReservedFlags1 : 2;          // offset: 0x34 (52)
      ULONG LoadInProgress : 1;          // offset: 0x34 (52)
      ULONG LoadConfigProcessed : 1;     // offset: 0x34 (52)
      ULONG EntryProcessed : 1;          // offset: 0x34 (52)
      ULONG ProtectDelayLoad : 1;        // offset: 0x34 (52)
      ULONG ReservedFlags3 : 2;          // offset: 0x34 (52)
      ULONG DontCallForThreads : 1;      // offset: 0x34 (52)
      ULONG ProcessAttachCalled : 1;     // offset: 0x34 (52)
      ULONG ProcessAttachFailed : 1;     // offset: 0x34 (52)
      ULONG CorDeferredValidate : 1;     // offset: 0x34 (52)
      ULONG CorImage : 1;                // offset: 0x34 (52)
      ULONG DontRelocate : 1;            // offset: 0x34 (52)
      ULONG CorILOnly : 1;               // offset: 0x34 (52)
      ULONG ReservedFlags5 : 3;          // offset: 0x34 (52)
      ULONG Redirected : 1;              // offset: 0x34 (52)
      ULONG ReservedFlags6 : 2;          // offset: 0x34 (52)
      ULONG CompatDatabaseProcessed : 1; // offset: 0x34 (52)
    };
  };
  USHORT ObsoleteLoadCount;                                // offset: 0x38 (56)
  USHORT TlsIndex;                                         // offset: 0x3a (58)
  struct _LIST_ENTRY HashLinks;                            // offset: 0x3c (60)
  ULONG TimeDateStamp;                                     // offset: 0x44 (68)
  struct _ACTIVATION_CONTEXT *EntryPointActivationContext; // offset: 0x48 (72)
  VOID *Lock;                                              // offset: 0x4c (76)
  struct _LDR_DDAG_NODE *DdagNode;                         // offset: 0x50 (80)
  struct _LIST_ENTRY NodeModuleLink;                       // offset: 0x54 (84)
  struct _LDRP_LOAD_CONTEXT *LoadContext;                  // offset: 0x5c (92)
  VOID *ParentDllBase;                                     // offset: 0x60 (96)
  VOID *SwitchBackContext;                                 // offset: 0x64 (100)
  struct _RTL_BALANCED_NODE BaseAddressIndexNode;          // offset: 0x68 (104)
  struct _RTL_BALANCED_NODE MappingInfoIndexNode;          // offset: 0x74 (116)
  ULONG OriginalBase;                                      // offset: 0x80 (128)
  union _LARGE_INTEGER LoadTime;                           // offset: 0x88 (136)
  ULONG BaseNameHashValue;                                 // offset: 0x90 (144)
  enum _LDR_DLL_LOAD_REASON LoadReason;                    // offset: 0x94 (148)
  ULONG ImplicitPathOptions;                               // offset: 0x98 (152)
  ULONG ReferenceCount;                                    // offset: 0x9c (156)
};

// 0x18 (24) bytes
struct _UNLOADED_DRIVERS {
  struct _UNICODE_STRING Name;      // offset: 0x0 (0)
  VOID *StartAddress;               // offset: 0x8 (8)
  VOID *EndAddress;                 // offset: 0xc (12)
  union _LARGE_INTEGER CurrentTime; // offset: 0x10 (16)
};

// 0x28 (40) bytes
struct _MI_BAD_MEMORY_EVENT_ENTRY {
  ULONG BugCheckCode;                   // offset: 0x0 (0)
  LONG Active;                          // offset: 0x4 (4)
  ULONG Data;                           // offset: 0x8 (8)
  union _LARGE_INTEGER PhysicalAddress; // offset: 0x10 (16)
  struct _WORK_QUEUE_ITEM WorkItem;     // offset: 0x18 (24)
};

// 0x98 (152) bytes
struct _MI_ERROR_STATE {
  struct _MI_BAD_MEMORY_EVENT_ENTRY BadMemoryEventEntry; // offset: 0x0 (0)
  struct _MI_PROBE_RAISE_TRACKER ProbeRaises;            // offset: 0x28 (40)
  struct _MI_FORCED_COMMITS ForcedCommits;               // offset: 0x64 (100)
  ULONG WsleFailures[2];                                 // offset: 0x6c (108)
  ULONG WsLinear;                                        // offset: 0x74 (116)
  ULONG PageHashErrors;                                  // offset: 0x78 (120)
  ULONG CheckZeroCount;                                  // offset: 0x7c (124)
  volatile LONG ZeroedPageSingleBitErrorsDetected;       // offset: 0x80 (128)
  volatile LONG BadPagesDetected;                        // offset: 0x84 (132)
  LONG ScrubPasses;                                      // offset: 0x88 (136)
  LONG ScrubBadPagesFound;                               // offset: 0x8c (140)
  UCHAR PendingBadPages;                                 // offset: 0x90 (144)
  UCHAR InitFailure;                                     // offset: 0x91 (145)
  UCHAR StopBadMaps;                                     // offset: 0x92 (146)
};

// 0x28 (40) bytes
struct _SEGMENT_OBJECT {
  VOID *BaseAddress;                             // offset: 0x0 (0)
  ULONG TotalNumberOfPtes;                       // offset: 0x4 (4)
  union _LARGE_INTEGER SizeOfSegment;            // offset: 0x8 (8)
  ULONG NonExtendedPtes;                         // offset: 0x10 (16)
  ULONG ImageCommitment;                         // offset: 0x14 (20)
  struct _CONTROL_AREA *ControlArea;             // offset: 0x18 (24)
  struct _SUBSECTION *Subsection;                // offset: 0x1c (28)
  struct _MMSECTION_FLAGS *MmSectionFlags;       // offset: 0x20 (32)
  struct _MMSUBSECTION_FLAGS *MmSubSectionFlags; // offset: 0x24 (36)
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

// 0x110 (272) bytes
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
  USHORT *LogFileName;                        // offset: 0x3c (60)
  struct _RTL_TIME_ZONE_INFORMATION TimeZone; // offset: 0x40 (64)
  union _LARGE_INTEGER BootTime;              // offset: 0xf0 (240)
  union _LARGE_INTEGER PerfFreq;              // offset: 0xf8 (248)
  union _LARGE_INTEGER StartTime;             // offset: 0x100 (256)
  ULONG ReservedFlags;                        // offset: 0x108 (264)
  ULONG BuffersLost;                          // offset: 0x10c (268)
};

// 0x28 (40) bytes
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
  struct _GUID ActivityId;   // offset: 0xc (12)
  union {
    union _LARGE_INTEGER Timestamp; // offset: 0x1c (28)
    ULONG ZeroingOffset;            // offset: 0x1c (28)
    struct {
      struct _IO_IRP_EXT_TRACK_OFFSET_HEADER
          *FsTrackOffsetBlob;   // offset: 0x1c (28)
      LONGLONG FsTrackedOffset; // offset: 0x20 (32)
    };
  };
};

// 0x8 (8) bytes
struct _LOGGED_STREAM_CALLBACK_V1 {
  VOID *LogHandle; // offset: 0x0 (0)
  VOID (*FlushToLsnRoutine)
  (VOID *arg1, union _LARGE_INTEGER arg2); // offset: 0x4 (4)
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

// 0x48 (72) bytes
struct _FSRTL_ADVANCED_FCB_HEADER {
  SHORT NodeTypeCode;                   // offset: 0x0 (0)
  SHORT NodeByteSize;                   // offset: 0x2 (2)
  UCHAR Flags;                          // offset: 0x4 (4)
  UCHAR IsFastIoPossible;               // offset: 0x5 (5)
  UCHAR Flags2;                         // offset: 0x6 (6)
  UCHAR Reserved : 4;                   // offset: 0x7 (7)
  UCHAR Version : 4;                    // offset: 0x7 (7)
  struct _ERESOURCE *Resource;          // offset: 0x8 (8)
  struct _ERESOURCE *PagingIoResource;  // offset: 0xc (12)
  union _LARGE_INTEGER AllocationSize;  // offset: 0x10 (16)
  union _LARGE_INTEGER FileSize;        // offset: 0x18 (24)
  union _LARGE_INTEGER ValidDataLength; // offset: 0x20 (32)
  struct _FAST_MUTEX *FastMutex;        // offset: 0x28 (40)
  struct _LIST_ENTRY FilterContexts;    // offset: 0x2c (44)
  struct _EX_PUSH_LOCK PushLock;        // offset: 0x34 (52)
  VOID **FileContextSupportPointer;     // offset: 0x38 (56)
  union {
    VOID *Oplock;            // offset: 0x3c (60)
    VOID *ReservedForRemote; // offset: 0x3c (60)
  };
  VOID *ReservedContext; // offset: 0x40 (64)
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
      USHORT Level;   // offset: 0x0 (0)
      USHORT Group;   // offset: 0x2 (2)
      ULONG Vector;   // offset: 0x4 (4)
      ULONG Affinity; // offset: 0x8 (8)
    } Interrupt;      // offset: 0x4 (4)
    struct {
      union {
        struct {
          USHORT Group;        // offset: 0x0 (0)
          USHORT MessageCount; // offset: 0x2 (2)
          ULONG Vector;        // offset: 0x4 (4)
          ULONG Affinity;      // offset: 0x8 (8)
        } Raw;                 // offset: 0x0 (0)
        struct {
          USHORT Level;   // offset: 0x0 (0)
          USHORT Group;   // offset: 0x2 (2)
          ULONG Vector;   // offset: 0x4 (4)
          ULONG Affinity; // offset: 0x8 (8)
        } Translated;     // offset: 0x0 (0)
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

// 0xc (12) bytes
struct _ARBITER_RETEST_ALLOCATION_PARAMETERS {
  struct _LIST_ENTRY *ArbitrationList;                  // offset: 0x0 (0)
  ULONG AllocateFromCount;                              // offset: 0x4 (4)
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *AllocateFrom; // offset: 0x8 (8)
};

// 0xc (12) bytes
struct _ARBITER_TEST_ALLOCATION_PARAMETERS {
  struct _LIST_ENTRY *ArbitrationList;                  // offset: 0x0 (0)
  ULONG AllocateFromCount;                              // offset: 0x4 (4)
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *AllocateFrom; // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _CM_PARTIAL_RESOURCE_LIST {
  USHORT Version;  // offset: 0x0 (0)
  USHORT Revision; // offset: 0x2 (2)
  ULONG Count;     // offset: 0x4 (4)
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
      PartialDescriptors[1]; // offset: 0x8 (8)
};

// 0x4 (4) bytes
struct _ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS {
  struct _CM_PARTIAL_RESOURCE_LIST **AllocatedResources; // offset: 0x0 (0)
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
      ULONG MinimumVector;               // offset: 0x0 (0)
      ULONG MaximumVector;               // offset: 0x4 (4)
      USHORT AffinityPolicy;             // offset: 0x8 (8)
      USHORT Group;                      // offset: 0xa (10)
      enum _IRQ_PRIORITY PriorityPolicy; // offset: 0xc (12)
      ULONG TargetedProcessors;          // offset: 0x10 (16)
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

// 0x28 (40) bytes
struct _PNP_RESOURCE_REQUEST {
  struct _DEVICE_OBJECT *PhysicalDevice;       // offset: 0x0 (0)
  ULONG Flags;                                 // offset: 0x4 (4)
  enum _ARBITER_REQUEST_SOURCE AllocationType; // offset: 0x8 (8)
  ULONG Priority;                              // offset: 0xc (12)
  ULONG Position;                              // offset: 0x10 (16)
  struct _IO_RESOURCE_REQUIREMENTS_LIST
      *ResourceRequirements;                              // offset: 0x14 (20)
  VOID *ReqList;                                          // offset: 0x18 (24)
  struct _CM_RESOURCE_LIST *ResourceAssignment;           // offset: 0x1c (28)
  struct _CM_RESOURCE_LIST *TranslatedResourceAssignment; // offset: 0x20 (32)
  LONG Status;                                            // offset: 0x24 (36)
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
struct _OPEN_PACKET {
  SHORT Type;                      // offset: 0x0 (0)
  SHORT Size;                      // offset: 0x2 (2)
  struct _FILE_OBJECT *FileObject; // offset: 0x4 (4)
  LONG FinalStatus;                // offset: 0x8 (8)
  ULONG Information;               // offset: 0xc (12)
  ULONG ParseCheck;                // offset: 0x10 (16)
  union {
    struct _FILE_OBJECT *RelatedFileObject;        // offset: 0x14 (20)
    struct _DEVICE_OBJECT *ReferencedDeviceObject; // offset: 0x14 (20)
  };
  struct _OBJECT_ATTRIBUTES *OriginalAttributes;    // offset: 0x18 (24)
  union _LARGE_INTEGER AllocationSize;              // offset: 0x20 (32)
  ULONG CreateOptions;                              // offset: 0x28 (40)
  USHORT FileAttributes;                            // offset: 0x2c (44)
  USHORT ShareAccess;                               // offset: 0x2e (46)
  VOID *EaBuffer;                                   // offset: 0x30 (48)
  ULONG EaLength;                                   // offset: 0x34 (52)
  ULONG Options;                                    // offset: 0x38 (56)
  ULONG Disposition;                                // offset: 0x3c (60)
  struct _FILE_BASIC_INFORMATION *BasicInformation; // offset: 0x40 (64)
  struct _FILE_NETWORK_OPEN_INFORMATION
      *NetworkInformation;                              // offset: 0x44 (68)
  enum _CREATE_FILE_TYPE CreateFileType;                // offset: 0x48 (72)
  VOID *MailslotOrPipeParameters;                       // offset: 0x4c (76)
  UCHAR Override;                                       // offset: 0x50 (80)
  UCHAR QueryOnly;                                      // offset: 0x51 (81)
  UCHAR DeleteOnly;                                     // offset: 0x52 (82)
  UCHAR FullAttributes;                                 // offset: 0x53 (83)
  struct _DUMMY_FILE_OBJECT *LocalFileObject;           // offset: 0x54 (84)
  ULONG InternalFlags;                                  // offset: 0x58 (88)
  CHAR AccessMode;                                      // offset: 0x5c (92)
  struct _IO_DRIVER_CREATE_CONTEXT DriverCreateContext; // offset: 0x60 (96)
};

// 0xc0 (192) bytes
struct _DUMP_INITIALIZATION_CONTEXT {
  ULONG Length;                                    // offset: 0x0 (0)
  ULONG Reserved;                                  // offset: 0x4 (4)
  VOID *MemoryBlock;                               // offset: 0x8 (8)
  VOID *CommonBuffer[2];                           // offset: 0xc (12)
  union _LARGE_INTEGER PhysicalAddress[2];         // offset: 0x18 (24)
  VOID (*StallRoutine)(ULONG arg1);                // offset: 0x28 (40)
  UCHAR (*OpenRoutine)(union _LARGE_INTEGER arg1); // offset: 0x2c (44)
  LONG (*WriteRoutine)
  (union _LARGE_INTEGER *arg1, struct _MDL *arg2); // offset: 0x30 (48)
  VOID (*FinishRoutine)();                         // offset: 0x34 (52)
  struct _ADAPTER_OBJECT *AdapterObject;           // offset: 0x38 (56)
  VOID *MappedRegisterBase;                        // offset: 0x3c (60)
  VOID *PortConfiguration;                         // offset: 0x40 (64)
  UCHAR CrashDump;                                 // offset: 0x44 (68)
  UCHAR MarkMemoryOnly;                            // offset: 0x45 (69)
  UCHAR HiberResume;                               // offset: 0x46 (70)
  UCHAR Reserved1;                                 // offset: 0x47 (71)
  ULONG MaximumTransferSize;                       // offset: 0x48 (72)
  ULONG CommonBufferSize;                          // offset: 0x4c (76)
  VOID *TargetAddress;                             // offset: 0x50 (80)
  LONG (*WritePendingRoutine)
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
  LONG (*ReadRoutine)
  (LONG arg1, union _LARGE_INTEGER *arg2,
   struct _MDL *arg3); // offset: 0x6c (108)
  LONG (*GetDriveTelemetryRoutine)
  (ULONG arg1, ULONG arg2, VOID *arg3, ULONG arg4); // offset: 0x70 (112)
  ULONG LogSectionTruncateSize;                     // offset: 0x74 (116)
  ULONG Parameters[16];                             // offset: 0x78 (120)
  VOID (*GetTransferSizesRoutine)
  (ULONG *arg1, ULONG *arg2); // offset: 0xb8 (184)
  VOID (*DumpNotifyRoutine)
  (enum _DUMP_EVENTS arg1, VOID *arg2, ULONG arg3); // offset: 0xbc (188)
};

// 0x100 (256) bytes
struct _DUMP_STACK_CONTEXT {
  struct _DUMP_INITIALIZATION_CONTEXT Init;       // offset: 0x0 (0)
  union _LARGE_INTEGER PartitionOffset;           // offset: 0xc0 (192)
  VOID *DumpPointers;                             // offset: 0xc8 (200)
  ULONG PointersLength;                           // offset: 0xcc (204)
  USHORT *ModulePrefix;                           // offset: 0xd0 (208)
  struct _LIST_ENTRY DriverList;                  // offset: 0xd4 (212)
  struct _STRING InitMsg;                         // offset: 0xdc (220)
  struct _STRING ProgMsg;                         // offset: 0xe4 (228)
  struct _STRING DoneMsg;                         // offset: 0xec (236)
  VOID *FileObject;                               // offset: 0xf4 (244)
  enum _DEVICE_USAGE_NOTIFICATION_TYPE UsageType; // offset: 0xf8 (248)
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
    enum _FS_FILTER_SECTION_SYNC_TYPE SyncType;               // offset: 0x0 (0)
    ULONG PageProtection;                                     // offset: 0x4 (4)
    struct _FS_FILTER_SECTION_SYNC_OUTPUT *OutputInformation; // offset: 0x8 (8)
  } AcquireForSectionSynchronization;                         // offset: 0x0 (0)
  struct {
    enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE
        NotificationType;   // offset: 0x0 (0)
    UCHAR SafeToRecurse;    // offset: 0x4 (4)
  } NotifyStreamFileObject; // offset: 0x0 (0)
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
  LONG (*PreAcquireForSectionSynchronization)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, VOID **arg2); // offset: 0x8 (8)
  VOID (*PostAcquireForSectionSynchronization)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, LONG arg2,
   VOID *arg3); // offset: 0xc (12)
  LONG (*PreReleaseForSectionSynchronization)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, VOID **arg2); // offset: 0x10 (16)
  VOID (*PostReleaseForSectionSynchronization)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, LONG arg2,
   VOID *arg3); // offset: 0x14 (20)
  LONG (*PreAcquireForCcFlush)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, VOID **arg2); // offset: 0x18 (24)
  VOID (*PostAcquireForCcFlush)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, LONG arg2,
   VOID *arg3); // offset: 0x1c (28)
  LONG (*PreReleaseForCcFlush)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, VOID **arg2); // offset: 0x20 (32)
  VOID (*PostReleaseForCcFlush)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, LONG arg2,
   VOID *arg3); // offset: 0x24 (36)
  LONG (*PreAcquireForModifiedPageWriter)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, VOID **arg2); // offset: 0x28 (40)
  VOID (*PostAcquireForModifiedPageWriter)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, LONG arg2,
   VOID *arg3); // offset: 0x2c (44)
  LONG (*PreReleaseForModifiedPageWriter)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, VOID **arg2); // offset: 0x30 (48)
  VOID (*PostReleaseForModifiedPageWriter)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, LONG arg2,
   VOID *arg3); // offset: 0x34 (52)
};

// 0x80 (128) bytes
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
  ULONG IrpListLock;                                     // offset: 0x70 (112)
  struct _LIST_ENTRY IrpList;                            // offset: 0x74 (116)
  VOID *FileObjectExtension;                             // offset: 0x7c (124)
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
      union {
        VOID (*UserApcRoutine)
        (VOID *arg1, struct _IO_STATUS_BLOCK *arg2,
         ULONG arg3);         // offset: 0x0 (0)
        VOID *IssuingProcess; // offset: 0x0 (0)
      };
      VOID *UserApcContext;              // offset: 0x4 (4)
    } AsynchronousParameters;            // offset: 0x30 (48)
    union _LARGE_INTEGER AllocationSize; // offset: 0x30 (48)

  } Overlay; // offset: 0x30 (48)
  VOID (*CancelRoutine)
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
      VOID *IrpExtension;                      // offset: 0x28 (40)
    } Overlay;                                 // offset: 0x40 (64)
    struct _KAPC Apc;                          // offset: 0x40 (64)
    VOID *CompletionKey;                       // offset: 0x40 (64)

  } Tail; // offset: 0x40 (64)
};

// 0x14 (20) bytes
struct _VF_WATCHDOG_IRP {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 (0)
  struct _IRP *Irp;             // offset: 0x8 (8)
  ULONG DueTickCount;           // offset: 0xc (12)
  volatile UCHAR Inserted;      // offset: 0x10 (16)
  CHAR TrackedStackLocation;    // offset: 0x11 (17)
  USHORT CancelTimeoutTicks;    // offset: 0x12 (18)
};

// 0x40 (64) bytes
struct _IOV_IRP_TRACE {
  struct _IRP *Irp;        // offset: 0x0 (0)
  struct _KTHREAD *Thread; // offset: 0x4 (4)
  union {
    struct {
      SHORT KernelApcDisable;  // offset: 0x8 (8)
      SHORT SpecialApcDisable; // offset: 0xa (10)
    };
    ULONG CombinedApcDisable; // offset: 0x8 (8)
  };
  UCHAR Irql;           // offset: 0xc (12)
  VOID *StackTrace[12]; // offset: 0x10 (16)
};

// 0x18 (24) bytes
struct _POP_IRP_WORKER_ENTRY {
  struct _LIST_ENTRY Link;       // offset: 0x0 (0)
  struct _ETHREAD *Thread;       // offset: 0x8 (8)
  struct _IRP *Irp;              // offset: 0xc (12)
  struct _DEVICE_OBJECT *Device; // offset: 0x10 (16)
  UCHAR Static;                  // offset: 0x14 (20)
};

// 0x20 (32) bytes
struct _WAITING_IRP {
  struct _LIST_ENTRY Links;                                 // offset: 0x0 (0)
  struct _IRP *Irp;                                         // offset: 0x8 (8)
  VOID (*CompletionRoutine)(VOID *arg1, struct _IRP *arg2); // offset: 0xc (12)
  VOID *Context;                                            // offset: 0x10 (16)
  struct _KEVENT *Event;                                    // offset: 0x14 (20)
  ULONG Information;                                        // offset: 0x18 (24)
  UCHAR BreakAllRH;                                         // offset: 0x1c (28)
};

// 0x10 (16) bytes
struct _TRIAGE_POP_IRP_DATA {
  struct _LIST_ENTRY Link;    // offset: 0x0 (0)
  struct _IRP *Irp;           // offset: 0x8 (8)
  struct _DEVICE_OBJECT *Pdo; // offset: 0xc (12)
};

// 0x20 (32) bytes
struct _TRIAGE_POP_FX_DEVICE {
  struct _LIST_ENTRY Link;                // offset: 0x0 (0)
  struct _IRP *Irp;                       // offset: 0x8 (8)
  struct _TRIAGE_POP_IRP_DATA *IrpData;   // offset: 0xc (12)
  LONG Status;                            // offset: 0x10 (16)
  LONG PowerReqCall;                      // offset: 0x14 (20)
  LONG PowerNotReqCall;                   // offset: 0x18 (24)
  struct _TRIAGE_DEVICE_NODE *DeviceNode; // offset: 0x1c (28)
};

// 0x2c (44) bytes
struct _TRIAGE_DEVICE_NODE {
  struct _TRIAGE_DEVICE_NODE *Sibling;         // offset: 0x0 (0)
  struct _TRIAGE_DEVICE_NODE *Child;           // offset: 0x4 (4)
  struct _TRIAGE_DEVICE_NODE *Parent;          // offset: 0x8 (8)
  struct _TRIAGE_DEVICE_NODE *LastChild;       // offset: 0xc (12)
  struct _DEVICE_OBJECT *PhysicalDeviceObject; // offset: 0x10 (16)
  struct _UNICODE_STRING InstancePath;         // offset: 0x14 (20)
  struct _UNICODE_STRING ServiceName;          // offset: 0x1c (28)
  struct _IRP *PendingIrp;                     // offset: 0x24 (36)
  struct _TRIAGE_POP_FX_DEVICE *FxDevice;      // offset: 0x28 (40)
};

// 0x20 (32) bytes
struct _POP_POLICY_DEVICE {
  struct _LIST_ENTRY Link;                  // offset: 0x0 (0)
  enum POWER_POLICY_DEVICE_TYPE DeviceType; // offset: 0x8 (8)
  VOID *Notification;                       // offset: 0xc (12)
  struct _UNICODE_STRING Name;              // offset: 0x10 (16)
  struct _DEVICE_OBJECT *Device;            // offset: 0x18 (24)
  struct _IRP *Irp;                         // offset: 0x1c (28)
};

// 0x100 (256) bytes
struct _IOV_FORCED_PENDING_TRACE {
  struct _IRP *Irp;        // offset: 0x0 (0)
  struct _ETHREAD *Thread; // offset: 0x4 (4)
  VOID *StackTrace[62];    // offset: 0x8 (8)
};

// 0x44 (68) bytes
struct _PENDING_RELATIONS_LIST_ENTRY {
  struct _LIST_ENTRY Link;                     // offset: 0x0 (0)
  struct _WORK_QUEUE_ITEM WorkItem;            // offset: 0x8 (8)
  struct _PNP_DEVICE_EVENT_ENTRY *DeviceEvent; // offset: 0x18 (24)
  struct _DEVICE_OBJECT *DeviceObject;         // offset: 0x1c (28)
  struct _RELATION_LIST *RelationsList;        // offset: 0x20 (32)
  struct _IRP *EjectIrp;                       // offset: 0x24 (36)
  enum IRPLOCK Lock;                           // offset: 0x28 (40)
  ULONG Problem;                               // offset: 0x2c (44)
  UCHAR ProfileChangingEject;                  // offset: 0x30 (48)
  UCHAR DisplaySafeRemovalDialog;              // offset: 0x31 (49)
  enum _SYSTEM_POWER_STATE LightestSleepState; // offset: 0x34 (52)
  struct DOCK_INTERFACE *DockInterface;        // offset: 0x38 (56)
  UCHAR DequeuePending;                        // offset: 0x3c (60)
  enum _PNP_DEVICE_DELETE_TYPE DeleteType;     // offset: 0x40 (64)
};

// 0x8 (8) bytes
struct _PO_IRP_QUEUE {
  struct _IRP *CurrentIrp;     // offset: 0x0 (0)
  struct _IRP *PendingIrpList; // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _PO_IRP_MANAGER {
  struct _PO_IRP_QUEUE DeviceIrpQueue; // offset: 0x0 (0)
  struct _PO_IRP_QUEUE SystemIrpQueue; // offset: 0x8 (8)
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
      union {
        ULONG SystemContext; // offset: 0x0 (0)
        struct _SYSTEM_POWER_STATE_CONTEXT
            SystemPowerStateContext; // offset: 0x0 (0)
      };
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
  LONG (*CompletionRoutine)
  (struct _DEVICE_OBJECT *arg1, struct _IRP *arg2,
   VOID *arg3);  // offset: 0x1c (28)
  VOID *Context; // offset: 0x20 (32)
};

// 0x28 (40) bytes
struct _WAIT_CONTEXT_BLOCK {
  union {
    struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry; // offset: 0x0 (0)
    struct {
      struct _LIST_ENTRY DmaWaitEntry; // offset: 0x0 (0)
      ULONG NumberOfChannels;          // offset: 0x8 (8)
      ULONG SyncCallback : 1;          // offset: 0xc (12)
      ULONG DmaContext : 1;            // offset: 0xc (12)
      ULONG Reserved : 30;             // offset: 0xc (12)
    };
  };
  enum _IO_ALLOCATION_ACTION (*DeviceRoutine)(struct _DEVICE_OBJECT *arg1,
                                              struct _IRP *arg2, VOID *arg3,
                                              VOID *arg4); // offset: 0x10 (16)
  VOID *DeviceContext;                                     // offset: 0x14 (20)
  ULONG NumberOfMapRegisters;                              // offset: 0x18 (24)
  VOID *DeviceObject;                                      // offset: 0x1c (28)
  VOID *CurrentIrp;                                        // offset: 0x20 (32)
  struct _KDPC *BufferChainingDpc;                         // offset: 0x24 (36)
};

// 0x8 (8) bytes
struct LIST_ENTRY32 {
  ULONG Flink; // offset: 0x0 (0)
  ULONG Blink; // offset: 0x4 (4)
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

// 0x310 (784) bytes
struct PO_MEMORY_IMAGE {
  ULONG Signature;                           // offset: 0x0 (0)
  ULONG ImageType;                           // offset: 0x4 (4)
  ULONG CheckSum;                            // offset: 0x8 (8)
  ULONG LengthSelf;                          // offset: 0xc (12)
  ULONG PageSelf;                            // offset: 0x10 (16)
  ULONG PageSize;                            // offset: 0x14 (20)
  union _LARGE_INTEGER SystemTime;           // offset: 0x18 (24)
  ULONGLONG InterruptTime;                   // offset: 0x20 (32)
  ULONGLONG FeatureFlags;                    // offset: 0x28 (40)
  UCHAR HiberFlags;                          // offset: 0x30 (48)
  UCHAR spare[3];                            // offset: 0x31 (49)
  ULONG NoHiberPtes;                         // offset: 0x34 (52)
  ULONG HiberVa;                             // offset: 0x38 (56)
  ULONG NoFreePages;                         // offset: 0x3c (60)
  ULONG FreeMapCheck;                        // offset: 0x40 (64)
  ULONG WakeCheck;                           // offset: 0x44 (68)
  ULONGLONG NumPagesForLoader;               // offset: 0x48 (72)
  ULONG FirstBootRestorePage;                // offset: 0x50 (80)
  ULONG FirstKernelRestorePage;              // offset: 0x54 (84)
  ULONG FirstChecksumRestorePage;            // offset: 0x58 (88)
  ULONGLONG NoChecksumEntries;               // offset: 0x60 (96)
  struct _PO_HIBER_PERF PerfInfo;            // offset: 0x68 (104)
  ULONG FirmwareRuntimeInformationPages;     // offset: 0x248 (584)
  ULONG FirmwareRuntimeInformation[1];       // offset: 0x24c (588)
  ULONG SiLogOffset;                         // offset: 0x250 (592)
  ULONG NoBootLoaderLogPages;                // offset: 0x254 (596)
  ULONG BootLoaderLogPages[24];              // offset: 0x258 (600)
  ULONG NotUsed;                             // offset: 0x2b8 (696)
  ULONG ResumeContextCheck;                  // offset: 0x2bc (700)
  ULONG ResumeContextPages;                  // offset: 0x2c0 (704)
  UCHAR Hiberboot;                           // offset: 0x2c4 (708)
  ULONGLONG HvCr3;                           // offset: 0x2c8 (712)
  ULONGLONG HvEntryPoint;                    // offset: 0x2d0 (720)
  ULONGLONG HvReservedTransitionAddress;     // offset: 0x2d8 (728)
  ULONGLONG HvReservedTransitionAddressSize; // offset: 0x2e0 (736)
  ULONGLONG BootFlags;                       // offset: 0x2e8 (744)
  ULONGLONG HalEntryPointPhysical;           // offset: 0x2f0 (752)
  ULONG HighestPhysicalPage;                 // offset: 0x2f8 (760)
  ULONG BitlockerKeyPfns[4];                 // offset: 0x2fc (764)
  ULONG HardwareSignature;                   // offset: 0x30c (780)
};

// 0x60 (96) bytes
struct _POP_IO_INFO {
  struct _MDL *DumpMdl;            // offset: 0x0 (0)
  enum _POP_IO_STATUS IoStatus;    // offset: 0x4 (4)
  ULONGLONG IoStartCount;          // offset: 0x8 (8)
  ULONGLONG IoBytesCompleted;      // offset: 0x10 (16)
  ULONGLONG IoBytesInProgress;     // offset: 0x18 (24)
  ULONGLONG RequestSize;           // offset: 0x20 (32)
  union _LARGE_INTEGER IoLocation; // offset: 0x28 (40)
  ULONGLONG FileOffset;            // offset: 0x30 (48)
  VOID *Buffer;                    // offset: 0x38 (56)
  UCHAR AsyncCapable;              // offset: 0x3c (60)
  ULONGLONG BytesToRead;           // offset: 0x40 (64)
  ULONG Pages;                     // offset: 0x48 (72)
  ULONGLONG HighestChecksumIndex;  // offset: 0x50 (80)
  USHORT PreviousChecksum;         // offset: 0x58 (88)
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

// 0x30 (48) bytes
struct _MI_TRIAGE_DUMP_DATA {
  ULONG BadPageCount;                     // offset: 0x0 (0)
  LONG BadPagesDetected;                  // offset: 0x4 (4)
  LONG ZeroedPageSingleBitErrorsDetected; // offset: 0x8 (8)
  LONG ScrubPasses;                       // offset: 0xc (12)
  LONG ScrubBadPagesFound;                // offset: 0x10 (16)
  ULONG PageHashErrors;                   // offset: 0x14 (20)
  ULONGLONG FeatureBits;                  // offset: 0x18 (24)
  ULONG TimeZoneId;                       // offset: 0x20 (32)
  struct _EXCEPTION_REGISTRATION_RECORD
      *ExceptionChainTerminator; // offset: 0x24 (36)
  struct _EXCEPTION_REGISTRATION_RECORD
      ExceptionChainTerminatorRecord; // offset: 0x28 (40)
};

// 0x150 (336) bytes
struct _POP_THERMAL_TELEMETRY_TRACKER {
  UCHAR AccountingDisabled;        // offset: 0x0 (0)
  ULONGLONG LastPassiveUpdateTime; // offset: 0x8 (8)
  ULONGLONG TotalPassiveTime[20];  // offset: 0x10 (16)
  ULONGLONG PassiveTimeSnap[20];   // offset: 0xb0 (176)
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

// 0x5c (92) bytes
struct _KLDR_DATA_TABLE_ENTRY {
  struct _LIST_ENTRY InLoadOrderLinks;             // offset: 0x0 (0)
  VOID *ExceptionTable;                            // offset: 0x8 (8)
  ULONG ExceptionTableSize;                        // offset: 0xc (12)
  VOID *GpValue;                                   // offset: 0x10 (16)
  struct _NON_PAGED_DEBUG_INFO *NonPagedDebugInfo; // offset: 0x14 (20)
  VOID *DllBase;                                   // offset: 0x18 (24)
  VOID *EntryPoint;                                // offset: 0x1c (28)
  ULONG SizeOfImage;                               // offset: 0x20 (32)
  struct _UNICODE_STRING FullDllName;              // offset: 0x24 (36)
  struct _UNICODE_STRING BaseDllName;              // offset: 0x2c (44)
  ULONG Flags;                                     // offset: 0x34 (52)
  USHORT LoadCount;                                // offset: 0x38 (56)
  union {
    USHORT SignatureLevel : 4; // offset: 0x3a (58)
    USHORT SignatureType : 3;  // offset: 0x3a (58)
    USHORT Unused : 9;         // offset: 0x3a (58)
    USHORT EntireField;        // offset: 0x3a (58)

  } u1;                        // offset: 0x3a (58)
  VOID *SectionPointer;        // offset: 0x3c (60)
  ULONG CheckSum;              // offset: 0x40 (64)
  ULONG CoverageSectionSize;   // offset: 0x44 (68)
  VOID *CoverageSection;       // offset: 0x48 (72)
  VOID *LoadedImports;         // offset: 0x4c (76)
  VOID *Spare;                 // offset: 0x50 (80)
  ULONG SizeOfImageNotRounded; // offset: 0x54 (84)
  ULONG TimeDateStamp;         // offset: 0x58 (88)
};

// 0x64 (100) bytes
struct _MI_SYSTEM_IMAGE_STATE {
  volatile LONG FixupLock;                     // offset: 0x0 (0)
  struct _LIST_ENTRY FixupList;                // offset: 0x4 (4)
  struct _KMUTANT LoadLock;                    // offset: 0xc (12)
  UCHAR FirstLoadEver;                         // offset: 0x2c (44)
  UCHAR LargePageAll;                          // offset: 0x2d (45)
  ULONG LastPage;                              // offset: 0x30 (48)
  struct _LIST_ENTRY LargePageList;            // offset: 0x34 (52)
  struct _KLDR_DATA_TABLE_ENTRY *BeingDeleted; // offset: 0x3c (60)
  struct _EX_PUSH_LOCK MappingRangesPushLock;  // offset: 0x40 (64)
  struct _MI_DRIVER_VA *MappingRanges[2];      // offset: 0x44 (68)
  ULONG PageCount;                             // offset: 0x4c (76)
  struct _MM_SYSTEM_PAGE_COUNTS PageCounts;    // offset: 0x50 (80)
  struct _EX_PUSH_LOCK CollidedLock;           // offset: 0x60 (96)
};

// 0x10 (16) bytes
struct _MI_ZERO_COST_COUNTS {
  ULONGLONG NativeSum; // offset: 0x0 (0)
  ULONGLONG CachedSum; // offset: 0x8 (8)
};

// 0x28 (40) bytes
struct _SECTION {
  struct _RTL_BALANCED_NODE SectionNode; // offset: 0x0 (0)
  ULONG StartingVpn;                     // offset: 0xc (12)
  ULONG EndingVpn;                       // offset: 0x10 (16)
  union {
    struct _CONTROL_AREA *ControlArea; // offset: 0x14 (20)
    struct _FILE_OBJECT *FileObject;   // offset: 0x14 (20)
    ULONG RemoteImageFileObject : 1;   // offset: 0x14 (20)
    ULONG RemoteDataFileObject : 1;    // offset: 0x14 (20)

  } u1;                    // offset: 0x14 (20)
  ULONGLONG SizeOfSection; // offset: 0x18 (24)
  union {
    ULONG LongFlags;               // offset: 0x20 (32)
    struct _MMSECTION_FLAGS Flags; // offset: 0x20 (32)

  } u;                              // offset: 0x20 (32)
  ULONG InitialPageProtection : 12; // offset: 0x24 (36)
  ULONG SessionId : 19;             // offset: 0x24 (36)
  ULONG NoValidationNeeded : 1;     // offset: 0x24 (36)
};

// 0x18 (24) bytes
struct _MI_COMBINE_STATE {
  volatile LONG ActiveSpinLock;          // offset: 0x0 (0)
  ULONG CombiningThreadCount;            // offset: 0x4 (4)
  struct _RTL_AVL_TREE ActiveThreadTree; // offset: 0x8 (8)
  ULONGLONG ZeroPageHashValue;           // offset: 0x10 (16)
};

// 0x18 (24) bytes
struct _ARBITER_CONFLICT_INFO {
  struct _DEVICE_OBJECT *OwningObject; // offset: 0x0 (0)
  ULONGLONG Start;                     // offset: 0x8 (8)
  ULONGLONG End;                       // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _ARBITER_QUERY_CONFLICT_PARAMETERS {
  struct _DEVICE_OBJECT *PhysicalDeviceObject;         // offset: 0x0 (0)
  struct _IO_RESOURCE_DESCRIPTOR *ConflictingResource; // offset: 0x4 (4)
  ULONG *ConflictCount;                                // offset: 0x8 (8)
  struct _ARBITER_CONFLICT_INFO **Conflicts;           // offset: 0xc (12)
};

// 0x10 (16) bytes
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

// 0x18 (24) bytes
struct _ARBITER_INTERFACE {
  USHORT Size;                              // offset: 0x0 (0)
  USHORT Version;                           // offset: 0x2 (2)
  VOID *Context;                            // offset: 0x4 (4)
  VOID (*InterfaceReference)(VOID *arg1);   // offset: 0x8 (8)
  VOID (*InterfaceDereference)(VOID *arg1); // offset: 0xc (12)
  LONG (*ArbiterHandler)
  (VOID *arg1, enum _ARBITER_ACTION arg2,
   struct _ARBITER_PARAMETERS *arg3); // offset: 0x10 (16)
  ULONG Flags;                        // offset: 0x14 (20)
};

// 0x38 (56) bytes
struct _PI_RESOURCE_ARBITER_ENTRY {
  struct _LIST_ENTRY DeviceArbiterList;        // offset: 0x0 (0)
  UCHAR ResourceType;                          // offset: 0x8 (8)
  struct _ARBITER_INTERFACE *ArbiterInterface; // offset: 0xc (12)
  struct _DEVICE_NODE *DeviceNode;             // offset: 0x10 (16)
  struct _LIST_ENTRY ResourceList;             // offset: 0x14 (20)
  struct _LIST_ENTRY BestResourceList;         // offset: 0x1c (28)
  struct _LIST_ENTRY BestConfig;               // offset: 0x24 (36)
  struct _LIST_ENTRY ActiveArbiterList;        // offset: 0x2c (44)
  UCHAR State;                                 // offset: 0x34 (52)
  UCHAR ResourcesChanged;                      // offset: 0x35 (53)
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

// 0x38 (56) bytes
struct _ARBITER_ALTERNATIVE {
  ULONGLONG Minimum;                          // offset: 0x0 (0)
  ULONGLONG Maximum;                          // offset: 0x8 (8)
  ULONGLONG Length;                           // offset: 0x10 (16)
  ULONGLONG Alignment;                        // offset: 0x18 (24)
  LONG Priority;                              // offset: 0x20 (32)
  ULONG Flags;                                // offset: 0x24 (36)
  struct _IO_RESOURCE_DESCRIPTOR *Descriptor; // offset: 0x28 (40)
  ULONG Reserved[3];                          // offset: 0x2c (44)
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

// 0x10 (16) bytes
struct _KTIMER2_COLLECTION {
  struct _RTL_RB_TREE Tree; // offset: 0x0 (0)
  ULONGLONG NextDueTime;    // offset: 0x8 (8)
};

// 0x58 (88) bytes
struct _KTIMER2 {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 (0)
  union {
    struct _RTL_BALANCED_NODE RbNodes[2]; // offset: 0x10 (16)
    struct _LIST_ENTRY ListEntry;         // offset: 0x10 (16)
  };
  ULONGLONG DueTime;                                   // offset: 0x28 (40)
  ULONGLONG MaximumDueTime;                            // offset: 0x30 (48)
  LONGLONG Period;                                     // offset: 0x38 (56)
  VOID (*Callback)(struct _KTIMER2 *arg1, VOID *arg2); // offset: 0x40 (64)
  VOID *CallbackContext;                               // offset: 0x44 (68)
  VOID (*DisableCallback)(VOID *arg1);                 // offset: 0x48 (72)
  VOID *DisableContext;                                // offset: 0x4c (76)
  UCHAR AbsoluteSystemTime;                            // offset: 0x50 (80)
  union {
    UCHAR TypeFlags; // offset: 0x51 (81)
    struct {
      UCHAR Plain : 1;          // offset: 0x51 (81)
      UCHAR IdleResilient : 1;  // offset: 0x51 (81)
      UCHAR HighResolution : 1; // offset: 0x51 (81)
      UCHAR NoWake : 1;         // offset: 0x51 (81)
      UCHAR NoWakeFinite : 1;   // offset: 0x51 (81)
      UCHAR Unused : 3;         // offset: 0x51 (81)
    };
  };
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
struct _TraceLoggingMetadata_t {
  ULONG Signature; // offset: 0x0 (0)
  USHORT Size;     // offset: 0x4 (4)
  UCHAR Version;   // offset: 0x6 (6)
  UCHAR Flags;     // offset: 0x7 (7)
  ULONGLONG Magic; // offset: 0x8 (8)
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

// 0x18 (24) bytes
struct _SEP_TOKEN_PRIVILEGES {
  ULONGLONG Present;          // offset: 0x0 (0)
  ULONGLONG Enabled;          // offset: 0x8 (8)
  ULONGLONG EnabledByDefault; // offset: 0x10 (16)
};

// 0x298 (664) bytes
struct _TOKEN {
  struct _TOKEN_SOURCE TokenSource;                      // offset: 0x0 (0)
  struct _LUID TokenId;                                  // offset: 0x10 (16)
  struct _LUID AuthenticationId;                         // offset: 0x18 (24)
  struct _LUID ParentTokenId;                            // offset: 0x20 (32)
  union _LARGE_INTEGER ExpirationTime;                   // offset: 0x28 (40)
  struct _ERESOURCE *TokenLock;                          // offset: 0x30 (48)
  struct _LUID ModifiedId;                               // offset: 0x34 (52)
  struct _SEP_TOKEN_PRIVILEGES Privileges;               // offset: 0x40 (64)
  struct _SEP_AUDIT_POLICY AuditPolicy;                  // offset: 0x58 (88)
  ULONG SessionId;                                       // offset: 0x78 (120)
  ULONG UserAndGroupCount;                               // offset: 0x7c (124)
  ULONG RestrictedSidCount;                              // offset: 0x80 (128)
  ULONG VariableLength;                                  // offset: 0x84 (132)
  ULONG DynamicCharged;                                  // offset: 0x88 (136)
  ULONG DynamicAvailable;                                // offset: 0x8c (140)
  ULONG DefaultOwnerIndex;                               // offset: 0x90 (144)
  struct _SID_AND_ATTRIBUTES *UserAndGroups;             // offset: 0x94 (148)
  struct _SID_AND_ATTRIBUTES *RestrictedSids;            // offset: 0x98 (152)
  VOID *PrimaryGroup;                                    // offset: 0x9c (156)
  ULONG *DynamicPart;                                    // offset: 0xa0 (160)
  struct _ACL *DefaultDacl;                              // offset: 0xa4 (164)
  enum _TOKEN_TYPE TokenType;                            // offset: 0xa8 (168)
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // offset: 0xac (172)
  ULONG TokenFlags;                                      // offset: 0xb0 (176)
  UCHAR TokenInUse;                                      // offset: 0xb4 (180)
  ULONG IntegrityLevelIndex;                             // offset: 0xb8 (184)
  ULONG MandatoryPolicy;                                 // offset: 0xbc (188)
  struct _SEP_LOGON_SESSION_REFERENCES *LogonSession;    // offset: 0xc0 (192)
  struct _LUID OriginatingLogonSession;                  // offset: 0xc4 (196)
  struct _SID_AND_ATTRIBUTES_HASH SidHash;               // offset: 0xcc (204)
  struct _SID_AND_ATTRIBUTES_HASH RestrictedSidHash;     // offset: 0x154 (340)
  struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
      *pSecurityAttributes;                             // offset: 0x1dc (476)
  VOID *Package;                                        // offset: 0x1e0 (480)
  struct _SID_AND_ATTRIBUTES *Capabilities;             // offset: 0x1e4 (484)
  ULONG CapabilityCount;                                // offset: 0x1e8 (488)
  struct _SID_AND_ATTRIBUTES_HASH CapabilitiesHash;     // offset: 0x1ec (492)
  struct _SEP_LOWBOX_NUMBER_ENTRY *LowboxNumberEntry;   // offset: 0x274 (628)
  struct _SEP_LOWBOX_HANDLES_ENTRY *LowboxHandlesEntry; // offset: 0x278 (632)
  struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION
      *pClaimAttributes;                        // offset: 0x27c (636)
  VOID *TrustLevelSid;                          // offset: 0x280 (640)
  struct _TOKEN *TrustLinkedToken;              // offset: 0x284 (644)
  VOID *IntegrityLevelSidValue;                 // offset: 0x288 (648)
  struct _SEP_SID_VALUES_BLOCK *TokenSidValues; // offset: 0x28c (652)
  ULONG VariablePart;                           // offset: 0x290 (656)
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
      VOID *Pointer1; // offset: 0x3c (60)
    };
  };
};

// 0x8 (8) bytes
union _FILE_SEGMENT_ELEMENT {
  VOID *Buffer;        // offset: 0x0 (0)
  ULONGLONG Alignment; // offset: 0x0 (0)
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

// 0x8 (8) bytes
struct _HEAP_ENTRY {
  union {
    struct _HEAP_UNPACKED_ENTRY UnpackedEntry; // offset: 0x0 (0)
    struct {
      USHORT Size;         // offset: 0x0 (0)
      UCHAR Flags;         // offset: 0x2 (2)
      UCHAR SmallTagIndex; // offset: 0x3 (3)
    };
    struct {
      ULONG SubSegmentCode; // offset: 0x0 (0)
      USHORT PreviousSize;  // offset: 0x4 (4)
      union {
        UCHAR SegmentOffset; // offset: 0x6 (6)
        UCHAR LFHFlags;      // offset: 0x6 (6)
      };
      UCHAR UnusedBytes; // offset: 0x7 (7)
    };
    struct _HEAP_EXTENDED_ENTRY ExtendedEntry; // offset: 0x0 (0)
    struct {
      USHORT FunctionIndex; // offset: 0x0 (0)
      USHORT ContextValue;  // offset: 0x2 (2)
    };
    struct {
      ULONG InterceptorValue;       // offset: 0x0 (0)
      USHORT UnusedBytesLength;     // offset: 0x4 (4)
      UCHAR EntryOffset;            // offset: 0x6 (6)
      UCHAR ExtendedBlockSignature; // offset: 0x7 (7)
    };
    struct {
      ULONG Code1; // offset: 0x0 (0)
      union {
        struct {
          USHORT Code2; // offset: 0x4 (4)
          UCHAR Code3;  // offset: 0x6 (6)
          UCHAR Code4;  // offset: 0x7 (7)
        };
        ULONG Code234; // offset: 0x4 (4)
      };
    };
    ULONGLONG AgregateCode; // offset: 0x0 (0)
  };
};

// 0x10 (16) bytes
struct _HEAP_FREE_ENTRY {
  union {
    struct _HEAP_ENTRY HeapEntry;              // offset: 0x0 (0)
    struct _HEAP_UNPACKED_ENTRY UnpackedEntry; // offset: 0x0 (0)
    struct {
      USHORT Size;         // offset: 0x0 (0)
      UCHAR Flags;         // offset: 0x2 (2)
      UCHAR SmallTagIndex; // offset: 0x3 (3)
    };
    struct {
      ULONG SubSegmentCode; // offset: 0x0 (0)
      USHORT PreviousSize;  // offset: 0x4 (4)
      union {
        UCHAR SegmentOffset; // offset: 0x6 (6)
        UCHAR LFHFlags;      // offset: 0x6 (6)
      };
      UCHAR UnusedBytes; // offset: 0x7 (7)
    };
    struct _HEAP_EXTENDED_ENTRY ExtendedEntry; // offset: 0x0 (0)
    struct {
      USHORT FunctionIndex; // offset: 0x0 (0)
      USHORT ContextValue;  // offset: 0x2 (2)
    };
    struct {
      ULONG InterceptorValue;       // offset: 0x0 (0)
      USHORT UnusedBytesLength;     // offset: 0x4 (4)
      UCHAR EntryOffset;            // offset: 0x6 (6)
      UCHAR ExtendedBlockSignature; // offset: 0x7 (7)
    };
    struct {
      ULONG Code1; // offset: 0x0 (0)
      union {
        struct {
          USHORT Code2; // offset: 0x4 (4)
          UCHAR Code3;  // offset: 0x6 (6)
          UCHAR Code4;  // offset: 0x7 (7)
        };
        ULONG Code234; // offset: 0x4 (4)
      };
    };
    ULONGLONG AgregateCode; // offset: 0x0 (0)
  };
  struct _LIST_ENTRY FreeList; // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _HEAP_VIRTUAL_ALLOC_ENTRY {
  struct _LIST_ENTRY Entry;            // offset: 0x0 (0)
  struct _HEAP_ENTRY_EXTRA ExtraStuff; // offset: 0x8 (8)
  ULONG CommitSize;                    // offset: 0x10 (16)
  ULONG ReserveSize;                   // offset: 0x14 (20)
  struct _HEAP_ENTRY BusyBlock;        // offset: 0x18 (24)
};

// 0x40 (64) bytes
struct _HEAP_SEGMENT {
  struct _HEAP_ENTRY Entry;              // offset: 0x0 (0)
  ULONG SegmentSignature;                // offset: 0x8 (8)
  ULONG SegmentFlags;                    // offset: 0xc (12)
  struct _LIST_ENTRY SegmentListEntry;   // offset: 0x10 (16)
  struct _HEAP *Heap;                    // offset: 0x18 (24)
  VOID *BaseAddress;                     // offset: 0x1c (28)
  ULONG NumberOfPages;                   // offset: 0x20 (32)
  struct _HEAP_ENTRY *FirstEntry;        // offset: 0x24 (36)
  struct _HEAP_ENTRY *LastValidEntry;    // offset: 0x28 (40)
  ULONG NumberOfUnCommittedPages;        // offset: 0x2c (44)
  ULONG NumberOfUnCommittedRanges;       // offset: 0x30 (48)
  USHORT SegmentAllocatorBackTraceIndex; // offset: 0x34 (52)
  USHORT Reserved;                       // offset: 0x36 (54)
  struct _LIST_ENTRY UCRSegmentList;     // offset: 0x38 (56)
};

// 0x248 (584) bytes
struct _HEAP {
  union {
    struct _HEAP_SEGMENT Segment; // offset: 0x0 (0)
    struct {
      struct _HEAP_ENTRY Entry;              // offset: 0x0 (0)
      ULONG SegmentSignature;                // offset: 0x8 (8)
      ULONG SegmentFlags;                    // offset: 0xc (12)
      struct _LIST_ENTRY SegmentListEntry;   // offset: 0x10 (16)
      struct _HEAP *Heap;                    // offset: 0x18 (24)
      VOID *BaseAddress;                     // offset: 0x1c (28)
      ULONG NumberOfPages;                   // offset: 0x20 (32)
      struct _HEAP_ENTRY *FirstEntry;        // offset: 0x24 (36)
      struct _HEAP_ENTRY *LastValidEntry;    // offset: 0x28 (40)
      ULONG NumberOfUnCommittedPages;        // offset: 0x2c (44)
      ULONG NumberOfUnCommittedRanges;       // offset: 0x30 (48)
      USHORT SegmentAllocatorBackTraceIndex; // offset: 0x34 (52)
      USHORT Reserved;                       // offset: 0x36 (54)
      struct _LIST_ENTRY UCRSegmentList;     // offset: 0x38 (56)
    };
  };
  ULONG Flags;                                     // offset: 0x40 (64)
  ULONG ForceFlags;                                // offset: 0x44 (68)
  ULONG CompatibilityFlags;                        // offset: 0x48 (72)
  ULONG EncodeFlagMask;                            // offset: 0x4c (76)
  struct _HEAP_ENTRY Encoding;                     // offset: 0x50 (80)
  ULONG Interceptor;                               // offset: 0x58 (88)
  ULONG VirtualMemoryThreshold;                    // offset: 0x5c (92)
  ULONG Signature;                                 // offset: 0x60 (96)
  ULONG SegmentReserve;                            // offset: 0x64 (100)
  ULONG SegmentCommit;                             // offset: 0x68 (104)
  ULONG DeCommitFreeBlockThreshold;                // offset: 0x6c (108)
  ULONG DeCommitTotalFreeThreshold;                // offset: 0x70 (112)
  ULONG TotalFreeSize;                             // offset: 0x74 (116)
  ULONG MaximumAllocationSize;                     // offset: 0x78 (120)
  USHORT ProcessHeapsListIndex;                    // offset: 0x7c (124)
  USHORT HeaderValidateLength;                     // offset: 0x7e (126)
  VOID *HeaderValidateCopy;                        // offset: 0x80 (128)
  USHORT NextAvailableTagIndex;                    // offset: 0x84 (132)
  USHORT MaximumTagIndex;                          // offset: 0x86 (134)
  struct _HEAP_TAG_ENTRY *TagEntries;              // offset: 0x88 (136)
  struct _LIST_ENTRY UCRList;                      // offset: 0x8c (140)
  ULONG AlignRound;                                // offset: 0x94 (148)
  ULONG AlignMask;                                 // offset: 0x98 (152)
  struct _LIST_ENTRY VirtualAllocdBlocks;          // offset: 0x9c (156)
  struct _LIST_ENTRY SegmentList;                  // offset: 0xa4 (164)
  USHORT AllocatorBackTraceIndex;                  // offset: 0xac (172)
  ULONG NonDedicatedListLength;                    // offset: 0xb0 (176)
  VOID *BlocksIndex;                               // offset: 0xb4 (180)
  VOID *UCRIndex;                                  // offset: 0xb8 (184)
  struct _HEAP_PSEUDO_TAG_ENTRY *PseudoTagEntries; // offset: 0xbc (188)
  struct _LIST_ENTRY FreeLists;                    // offset: 0xc0 (192)
  struct _HEAP_LOCK *LockVariable;                 // offset: 0xc8 (200)
  LONG (*CommitRoutine)
  (VOID *arg1, VOID **arg2, ULONG *arg3);          // offset: 0xcc (204)
  VOID *FrontEndHeap;                              // offset: 0xd0 (208)
  USHORT FrontHeapLockCount;                       // offset: 0xd4 (212)
  UCHAR FrontEndHeapType;                          // offset: 0xd6 (214)
  UCHAR RequestedFrontEndHeapType;                 // offset: 0xd7 (215)
  USHORT *FrontEndHeapUsageData;                   // offset: 0xd8 (216)
  USHORT FrontEndHeapMaximumIndex;                 // offset: 0xdc (220)
  volatile UCHAR FrontEndHeapStatusBitmap[257];    // offset: 0xde (222)
  struct _HEAP_COUNTERS Counters;                  // offset: 0x1e0 (480)
  struct _HEAP_TUNING_PARAMETERS TuningParameters; // offset: 0x23c (572)
};

// 0x68 (104) bytes
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
  ULONG ReadAheadSpinLock;                      // offset: 0x50 (80)
  ULONG PipelinedReadAheadRequestSize;          // offset: 0x54 (84)
  ULONG ReadAheadGrowth;                        // offset: 0x58 (88)
  struct _LIST_ENTRY PrivateLinks;              // offset: 0x5c (92)
  VOID *ReadAheadWorkItem;                      // offset: 0x64 (100)
};

// 0x28 (40) bytes
struct _DIRTY_PAGE_THRESHOLDS {
  ULONG DirtyPageThreshold;          // offset: 0x0 (0)
  ULONG DirtyPageThresholdTop;       // offset: 0x4 (4)
  ULONG DirtyPageThresholdBottom;    // offset: 0x8 (8)
  ULONG DirtyPageTarget;             // offset: 0xc (12)
  ULONGLONG AggregateAvailablePages; // offset: 0x10 (16)
  ULONGLONG AggregateDirtyPages;     // offset: 0x18 (24)
  ULONG AvailableHistory;            // offset: 0x20 (32)
};

// 0x68 (104) bytes
struct _LOG_HANDLE_CONTEXT {
  VOID *LogHandle; // offset: 0x0 (0)
  VOID (*FlushToLsnRoutine)
  (VOID *arg1, union _LARGE_INTEGER arg2); // offset: 0x4 (4)
  VOID (*QueryLogHandleInfoRoutine)
  (VOID *arg1, USHORT *arg2);                        // offset: 0x8 (8)
  struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics; // offset: 0xc (12)
  struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds; // offset: 0x18 (24)
  ULONG AdditionalPagesToWrite;                      // offset: 0x40 (64)
  ULONG CcLWScanDPThreshold;                         // offset: 0x44 (68)
  union _LARGE_INTEGER LargestLsnForCurrentLWScan;   // offset: 0x48 (72)
  struct _FILE_OBJECT *RelatedFileObject;            // offset: 0x50 (80)
  ULONG LargestLsnFileObjectKey;                     // offset: 0x54 (84)
  union _LARGE_INTEGER LastLWTimeStamp;              // offset: 0x58 (88)
  ULONG Flags;                                       // offset: 0x60 (96)
};

// 0x4 (4) bytes
struct _LOGGED_STREAM_CALLBACK_V2 {
  struct _LOG_HANDLE_CONTEXT *LogHandleContext; // offset: 0x0 (0)
};

// 0x90 (144) bytes
struct _VOLUME_CACHE_MAP {
  SHORT NodeTypeCode;                          // offset: 0x0 (0)
  SHORT NodeByteCode;                          // offset: 0x2 (2)
  ULONG UseCount;                              // offset: 0x4 (4)
  struct _DEVICE_OBJECT *DeviceObject;         // offset: 0x8 (8)
  struct _LIST_ENTRY VolumeCacheMapLinks;      // offset: 0xc (12)
  ULONG DirtyPages;                            // offset: 0x14 (20)
  struct _LOG_HANDLE_CONTEXT LogHandleContext; // offset: 0x18 (24)
  ULONG Flags;                                 // offset: 0x80 (128)
  ULONG PagesQueuedToDisk;                     // offset: 0x84 (132)
  ULONG LoggedPagesQueuedToDisk;               // offset: 0x88 (136)
};

// 0x178 (376) bytes
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
  struct _EX_FAST_REF FileObjectFastRef;      // offset: 0x44 (68)
  struct _EX_PUSH_LOCK VacbLock;              // offset: 0x48 (72)
  ULONG DirtyPages;                           // offset: 0x4c (76)
  struct _LIST_ENTRY LoggedStreamLinks;       // offset: 0x50 (80)
  struct _LIST_ENTRY SharedCacheMapLinks;     // offset: 0x58 (88)
  ULONG Flags;                                // offset: 0x60 (96)
  LONG Status;                                // offset: 0x64 (100)
  struct _MBCB *Mbcb;                         // offset: 0x68 (104)
  VOID *Section;                              // offset: 0x6c (108)
  struct _KEVENT *CreateEvent;                // offset: 0x70 (112)
  struct _KEVENT *WaitOnActiveCount;          // offset: 0x74 (116)
  ULONG PagesToWrite;                         // offset: 0x78 (120)
  LONGLONG BeyondLastFlush;                   // offset: 0x80 (128)
  struct _CACHE_MANAGER_CALLBACKS *Callbacks; // offset: 0x88 (136)
  VOID *LazyWriteContext;                     // offset: 0x8c (140)
  struct _LIST_ENTRY PrivateList;             // offset: 0x90 (144)
  union {
    struct _LOGGED_STREAM_CALLBACK_V1 V1; // offset: 0x98 (152)
    struct _LOGGED_STREAM_CALLBACK_V2 V2; // offset: 0x98 (152)
  };
  union _LARGE_INTEGER LargestLSN;                     // offset: 0xa0 (160)
  ULONG DirtyPageThreshold;                            // offset: 0xa8 (168)
  ULONG LazyWritePassCount;                            // offset: 0xac (172)
  struct _CACHE_UNINITIALIZE_EVENT *UninitializeEvent; // offset: 0xb0 (176)
  struct _FAST_MUTEX BcbLock;                          // offset: 0xb4 (180)
  union _LARGE_INTEGER LastUnmapBehindOffset;          // offset: 0xd8 (216)
  struct _KEVENT Event;                                // offset: 0xe0 (224)
  union _LARGE_INTEGER HighWaterMappingOffset;         // offset: 0xf0 (240)
  struct _PRIVATE_CACHE_MAP PrivateCacheMap;           // offset: 0xf8 (248)
  VOID *WriteBehindWorkQueueEntry;                     // offset: 0x160 (352)
  struct _VOLUME_CACHE_MAP *VolumeCacheMap;            // offset: 0x164 (356)
  ULONG ProcImagePathHash;                             // offset: 0x168 (360)
  ULONG WritesInProgress;                              // offset: 0x16c (364)
  ULONG AsyncReadRequestCount;                         // offset: 0x170 (368)
};

// 0x18 (24) bytes
struct _VACB {
  VOID *BaseAddress;                        // offset: 0x0 (0)
  struct _SHARED_CACHE_MAP *SharedCacheMap; // offset: 0x4 (4)
  union {
    union _LARGE_INTEGER FileOffset; // offset: 0x8 (8)
    USHORT ActiveCount;              // offset: 0x8 (8)
    struct _LIST_ENTRY Links;        // offset: 0x8 (8)

  } Overlay;                            // offset: 0x8 (8)
  struct _VACB_ARRAY_HEADER *ArrayHead; // offset: 0x10 (16)
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

// 0xb0 (176) bytes
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
  UCHAR HeteroDecreaseThreshold[32];                  // offset: 0x68 (104)
  UCHAR HeteroIncreaseThreshold[32];                  // offset: 0x88 (136)
  UCHAR Class0FloorPerformance;                       // offset: 0xa8 (168)
  UCHAR Class1InitialPerformance;                     // offset: 0xa9 (169)
};

// 0x1a8 (424) bytes
struct _POP_PPM_PROFILE {
  USHORT *Name;                            // offset: 0x0 (0)
  UCHAR Id;                                // offset: 0x4 (4)
  struct _GUID Guid;                       // offset: 0x8 (8)
  ULONG Flags;                             // offset: 0x18 (24)
  UCHAR Priority;                          // offset: 0x1c (28)
  struct _PPM_ENGINE_SETTINGS Settings[2]; // offset: 0x20 (32)
  ULONGLONG StartTime;                     // offset: 0x180 (384)
  ULONGLONG Count;                         // offset: 0x188 (392)
  ULONGLONG MaxDuration;                   // offset: 0x190 (400)
  ULONGLONG MinDuration;                   // offset: 0x198 (408)
  ULONGLONG TotalDuration;                 // offset: 0x1a0 (416)
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
    struct _X86_DBGKD_CONTROL_SET ControlSet;    // offset: 0x4 (4)
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

// 0x38 (56) bytes
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
  ULONG *EnableBitMask;            // offset: 0x2c (44)
  const ULONGLONG *EnableKeyWords; // offset: 0x30 (48)
  const UCHAR *EnableLevel;        // offset: 0x34 (52)
};

// 0x10 (16) bytes
struct _PO_FX_PERF_STATE {
  ULONGLONG Value; // offset: 0x0 (0)
  VOID *Context;   // offset: 0x8 (8)
};

// 0x28 (40) bytes
struct _PO_FX_COMPONENT_PERF_SET {
  struct _UNICODE_STRING Name;      // offset: 0x0 (0)
  ULONGLONG Flags;                  // offset: 0x8 (8)
  enum _PO_FX_PERF_STATE_UNIT Unit; // offset: 0x10 (16)
  enum _PO_FX_PERF_STATE_TYPE Type; // offset: 0x14 (20)
  union {
    struct {
      ULONG Count;                      // offset: 0x0 (0)
      struct _PO_FX_PERF_STATE *States; // offset: 0x4 (4)
    } Discrete;                         // offset: 0x18 (24)
    struct {
      ULONGLONG Minimum; // offset: 0x0 (0)
      ULONGLONG Maximum; // offset: 0x8 (8)
    } Range;             // offset: 0x18 (24)
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

// 0x28 (40) bytes
struct _POP_FX_ACCOUNTING {
  ULONG Lock;                  // offset: 0x0 (0)
  UCHAR Active;                // offset: 0x4 (4)
  ULONG DripsRequiredState;    // offset: 0x8 (8)
  LONG Level;                  // offset: 0xc (12)
  LONGLONG ActiveStamp;        // offset: 0x10 (16)
  ULONGLONG CsActiveTime;      // offset: 0x18 (24)
  LONGLONG CriticalActiveTime; // offset: 0x20 (32)
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
  ULONGLONG AccessVsm : 1;                                   // offset: 0x0 (0)
  ULONGLONG AccessVpRegisters : 1;                           // offset: 0x0 (0)
  ULONGLONG UnusedBit : 1;                                   // offset: 0x0 (0)
  ULONGLONG FastHypercallOutput : 1;                         // offset: 0x0 (0)
  ULONGLONG EnableExtendedHypercalls : 1;                    // offset: 0x0 (0)
  ULONGLONG StartVirtualProcessor : 1;                       // offset: 0x0 (0)
  ULONGLONG Reserved3 : 10;                                  // offset: 0x0 (0)
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
  ULONG Reserved1 : 14;                   // offset: 0xc (12)
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

// 0x20 (32) bytes
struct _PCW_MASK_INFORMATION {
  ULONGLONG CounterMask;                // offset: 0x0 (0)
  struct _UNICODE_STRING *InstanceMask; // offset: 0x8 (8)
  ULONG InstanceId;                     // offset: 0xc (12)
  UCHAR CollectMultiple;                // offset: 0x10 (16)
  struct _PCW_BUFFER *Buffer;           // offset: 0x14 (20)
  struct _KEVENT *CancelEvent;          // offset: 0x18 (24)
};

// 0x10 (16) bytes
struct _PCW_COUNTER_INFORMATION {
  ULONGLONG CounterMask;                // offset: 0x0 (0)
  struct _UNICODE_STRING *InstanceMask; // offset: 0x8 (8)
};

// 0x20 (32) bytes
union _PCW_CALLBACK_INFORMATION {
  struct _PCW_COUNTER_INFORMATION AddCounter;      // offset: 0x0 (0)
  struct _PCW_COUNTER_INFORMATION RemoveCounter;   // offset: 0x0 (0)
  struct _PCW_MASK_INFORMATION EnumerateInstances; // offset: 0x0 (0)
  struct _PCW_MASK_INFORMATION CollectData;        // offset: 0x0 (0)
};

// 0x18 (24) bytes
struct _PCW_REGISTRATION_INFORMATION {
  ULONG Version;                            // offset: 0x0 (0)
  struct _UNICODE_STRING *Name;             // offset: 0x4 (4)
  ULONG CounterCount;                       // offset: 0x8 (8)
  struct _PCW_COUNTER_DESCRIPTOR *Counters; // offset: 0xc (12)
  LONG (*Callback)
  (enum _PCW_CALLBACK_TYPE arg1, union _PCW_CALLBACK_INFORMATION *arg2,
   VOID *arg3);          // offset: 0x10 (16)
  VOID *CallbackContext; // offset: 0x14 (20)
};

// 0x18 (24) bytes
struct _HVIEW_MAP_ENTRY {
  union {
    VOID *ViewStart;    // offset: 0x0 (0)
    ULONG IsPinned : 1; // offset: 0x0 (0)
  };
  VOID *Bcb;             // offset: 0x4 (4)
  ULONGLONG PinnedPages; // offset: 0x8 (8)
  ULONG Size;            // offset: 0x10 (16)
};

// 0x600 (1536) bytes
struct _HVIEW_MAP_TABLE {
  struct _HVIEW_MAP_ENTRY Entries[64]; // offset: 0x0 (0)
};

// 0x200 (512) bytes
struct _HVIEW_MAP_DIRECTORY {
  struct _HVIEW_MAP_TABLE *Tables[128]; // offset: 0x0 (0)
};

// 0x30 (48) bytes
struct _HVIEW_MAP_PIN_LOG_ENTRY {
  ULONG ViewOffset;        // offset: 0x0 (0)
  UCHAR Pinned;            // offset: 0x4 (4)
  ULONGLONG PinMask;       // offset: 0x8 (8)
  struct _KTHREAD *Thread; // offset: 0x10 (16)
  VOID *Stack[6];          // offset: 0x14 (20)
};

// 0x308 (776) bytes
struct _HVIEW_MAP_PIN_LOG {
  ULONG Next;                                  // offset: 0x0 (0)
  ULONG Size;                                  // offset: 0x4 (4)
  struct _HVIEW_MAP_PIN_LOG_ENTRY Entries[16]; // offset: 0x8 (8)
};

// 0x320 (800) bytes
struct _HVIEW_MAP {
  ULONG MappedLength;                     // offset: 0x0 (0)
  struct _EX_PUSH_LOCK Lock;              // offset: 0x4 (4)
  struct _FILE_OBJECT *FileObject;        // offset: 0x8 (8)
  struct _HVIEW_MAP_DIRECTORY *Directory; // offset: 0xc (12)
  ULONG PagesCharged;                     // offset: 0x10 (16)
  struct _HVIEW_MAP_PIN_LOG PinLog;       // offset: 0x18 (24)
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

// 0x6f0 (1776) bytes
struct _HHIVE {
  ULONG Signature; // offset: 0x0 (0)
  struct _CELL_DATA *(*GetCellRoutine)(
      struct _HHIVE *arg1, ULONG arg2,
      struct _HV_GET_CELL_CONTEXT *arg3); // offset: 0x4 (4)
  VOID (*ReleaseCellRoutine)
  (struct _HHIVE *arg1, struct _HV_GET_CELL_CONTEXT *arg2); // offset: 0x8 (8)
  VOID *(*Allocate)(ULONG arg1, UCHAR arg2, ULONG arg3);    // offset: 0xc (12)
  VOID (*Free)(VOID *arg1, ULONG arg2);                     // offset: 0x10 (16)
  UCHAR (*FileWrite)
  (struct _HHIVE *arg1, ULONG arg2, struct CMP_OFFSET_ARRAY *arg3, ULONG arg4,
   ULONG *arg5, ULONG arg6); // offset: 0x14 (20)
  UCHAR (*FileRead)
  (struct _HHIVE *arg1, ULONG arg2, ULONG *arg3, VOID *arg4,
   ULONG arg5);                          // offset: 0x18 (24)
  VOID *HiveLoadFailure;                 // offset: 0x1c (28)
  struct _HBASE_BLOCK *BaseBlock;        // offset: 0x20 (32)
  struct _RTL_BITMAP DirtyVector;        // offset: 0x24 (36)
  ULONG DirtyCount;                      // offset: 0x2c (44)
  ULONG DirtyAlloc;                      // offset: 0x30 (48)
  struct _RTL_BITMAP UnreconciledVector; // offset: 0x34 (52)
  ULONG UnreconciledCount;               // offset: 0x3c (60)
  ULONG BaseBlockAlloc;                  // offset: 0x40 (64)
  ULONG Cluster;                         // offset: 0x44 (68)
  UCHAR Flat : 1;                        // offset: 0x48 (72)
  UCHAR ReadOnly : 1;                    // offset: 0x48 (72)
  UCHAR SystemCacheBacked : 1;           // offset: 0x48 (72)
  UCHAR Reserved : 5;                    // offset: 0x48 (72)
  UCHAR DirtyFlag;                       // offset: 0x49 (73)
  ULONG HvBinHeadersUse;                 // offset: 0x4c (76)
  ULONG HvFreeCellsUse;                  // offset: 0x50 (80)
  ULONG HvUsedCellsUse;                  // offset: 0x54 (84)
  ULONG CmUsedCellsUse;                  // offset: 0x58 (88)
  ULONG HiveFlags;                       // offset: 0x5c (92)
  ULONG CurrentLog;                      // offset: 0x60 (96)
  ULONG CurrentLogSequence;              // offset: 0x64 (100)
  ULONG CurrentLogMinimumSequence;       // offset: 0x68 (104)
  ULONG CurrentLogOffset;                // offset: 0x6c (108)
  ULONG MinimumLogSequence;              // offset: 0x70 (112)
  ULONG LogFileSizeCap;                  // offset: 0x74 (116)
  UCHAR LogDataPresent[2];               // offset: 0x78 (120)
  UCHAR PrimaryFileValid;                // offset: 0x7a (122)
  UCHAR BaseBlockDirty;                  // offset: 0x7b (123)
  union _LARGE_INTEGER LastLogSwapTime;  // offset: 0x80 (128)
  union {
    struct {
      USHORT FirstLogFile : 3;                // offset: 0x88 (136)
      USHORT SecondLogFile : 3;               // offset: 0x88 (136)
      USHORT HeaderRecovered : 1;             // offset: 0x88 (136)
      USHORT LegacyRecoveryIndicated : 1;     // offset: 0x88 (136)
      USHORT RecoveryInformationReserved : 8; // offset: 0x88 (136)
    };
    USHORT RecoveryInformation; // offset: 0x88 (136)
  };
  UCHAR LogEntriesRecovered[2]; // offset: 0x8a (138)
  ULONG RefreshCount;           // offset: 0x8c (140)
  ULONG StorageTypeCount;       // offset: 0x90 (144)
  ULONG Version;                // offset: 0x94 (148)
  struct _HVIEW_MAP ViewMap;    // offset: 0x98 (152)
  struct _DUAL Storage[2];      // offset: 0x3b8 (952)
};

// 0xf20 (3872) bytes
struct _CMHIVE {
  struct _HHIVE Hive;                                 // offset: 0x0 (0)
  VOID *FileHandles[6];                               // offset: 0x6f0 (1776)
  struct _LIST_ENTRY NotifyList;                      // offset: 0x708 (1800)
  struct _LIST_ENTRY HiveList;                        // offset: 0x710 (1808)
  struct _LIST_ENTRY PreloadedHiveList;               // offset: 0x718 (1816)
  struct _LIST_ENTRY FailedUnloadList;                // offset: 0x720 (1824)
  struct _EX_RUNDOWN_REF HiveRundown;                 // offset: 0x728 (1832)
  struct _LIST_ENTRY ParseCacheEntries;               // offset: 0x72c (1836)
  struct _CM_KEY_HASH_TABLE_ENTRY *KcbCacheTable;     // offset: 0x734 (1844)
  ULONG KcbCacheTableSize;                            // offset: 0x738 (1848)
  struct _CM_KEY_HASH_TABLE_ENTRY *DeletedKcbTable;   // offset: 0x73c (1852)
  ULONG DeletedKcbTableSize;                          // offset: 0x740 (1856)
  ULONG Identity;                                     // offset: 0x744 (1860)
  struct _FAST_MUTEX *HiveLock;                       // offset: 0x748 (1864)
  struct _FAST_MUTEX *WriterLock;                     // offset: 0x74c (1868)
  struct _ERESOURCE *FlusherLock;                     // offset: 0x750 (1872)
  struct _RTL_BITMAP FlushDirtyVector;                // offset: 0x754 (1876)
  ULONG FlushDirtyVectorSize;                         // offset: 0x75c (1884)
  UCHAR *FlushLogEntry;                               // offset: 0x760 (1888)
  ULONG FlushLogEntrySize;                            // offset: 0x764 (1892)
  ULONG FlushHiveTruncated;                           // offset: 0x768 (1896)
  UCHAR FlushBaseBlockDirty;                          // offset: 0x76c (1900)
  struct _RTL_BITMAP CapturedUnreconciledVector;      // offset: 0x770 (1904)
  ULONG CapturedUnreconciledVectorSize;               // offset: 0x778 (1912)
  struct CMP_OFFSET_ARRAY *UnreconciledOffsetArray;   // offset: 0x77c (1916)
  ULONG UnreconciledOffsetArrayCount;                 // offset: 0x780 (1920)
  struct _HBASE_BLOCK *UnreconciledBaseBlock;         // offset: 0x784 (1924)
  struct _EX_PUSH_LOCK SecurityLock;                  // offset: 0x788 (1928)
  ULONG UseCount;                                     // offset: 0x78c (1932)
  ULONG LastShrinkHiveSize;                           // offset: 0x790 (1936)
  union _LARGE_INTEGER ActualFileSize;                // offset: 0x798 (1944)
  union _LARGE_INTEGER LogFileSizes[2];               // offset: 0x7a0 (1952)
  struct _UNICODE_STRING FileFullPath;                // offset: 0x7b0 (1968)
  struct _UNICODE_STRING FileUserName;                // offset: 0x7b8 (1976)
  struct _UNICODE_STRING HiveRootPath;                // offset: 0x7c0 (1984)
  ULONG SecurityCount;                                // offset: 0x7c8 (1992)
  ULONG SecurityCacheSize;                            // offset: 0x7cc (1996)
  LONG SecurityHitHint;                               // offset: 0x7d0 (2000)
  struct _CM_KEY_SECURITY_CACHE_ENTRY *SecurityCache; // offset: 0x7d4 (2004)
  struct _LIST_ENTRY SecurityHash[64];                // offset: 0x7d8 (2008)
  ULONG UnloadEventCount;                             // offset: 0x9d8 (2520)
  struct _KEVENT **UnloadEventArray;                  // offset: 0x9dc (2524)
  struct _CM_KEY_CONTROL_BLOCK *RootKcb;              // offset: 0x9e0 (2528)
  UCHAR Frozen;                                       // offset: 0x9e4 (2532)
  struct _CM_WORKITEM *UnloadWorkItem;                // offset: 0x9e8 (2536)
  struct _CM_WORKITEM UnloadWorkItemHolder;           // offset: 0x9ec (2540)
  UCHAR GrowOnlyMode;                                 // offset: 0xa00 (2560)
  ULONG GrowOffset;                                   // offset: 0xa04 (2564)
  struct _LIST_ENTRY KcbConvertListHead;              // offset: 0xa08 (2568)
  struct _CM_CELL_REMAP_BLOCK *CellRemapArray;        // offset: 0xa10 (2576)
  struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;         // offset: 0xa14 (2580)
  ULONG Flags;                                        // offset: 0xc9c (3228)
  struct _LIST_ENTRY TrustClassEntry;                 // offset: 0xca0 (3232)
  ULONGLONG DirtyTime;                                // offset: 0xca8 (3240)
  ULONGLONG UnreconciledTime;                         // offset: 0xcb0 (3248)
  struct _CM_RM *CmRm;                                // offset: 0xcb8 (3256)
  ULONG CmRmInitFailPoint;                            // offset: 0xcbc (3260)
  LONG CmRmInitFailStatus;                            // offset: 0xcc0 (3264)
  struct _KTHREAD *CreatorOwner;                      // offset: 0xcc4 (3268)
  struct _KTHREAD *RundownThread;                     // offset: 0xcc8 (3272)
  union _LARGE_INTEGER LastWriteTime;                 // offset: 0xcd0 (3280)
  struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;           // offset: 0xcd8 (3288)
  struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue;       // offset: 0xce4 (3300)
  union {
    ULONG FlushFlags; // offset: 0xcf0 (3312)
    struct {
      ULONG FlushActive : 1;       // offset: 0xcf0 (3312)
      ULONG ReconcileActive : 1;   // offset: 0xcf0 (3312)
      ULONG PrimaryFilePurged : 1; // offset: 0xcf0 (3312)
      ULONG DiskFileBad : 1;       // offset: 0xcf0 (3312)
    };
  };
  ULONG PrimaryFileSizeBeforeLastFlush;         // offset: 0xcf4 (3316)
  volatile LONG ReferenceCount;                 // offset: 0xcf8 (3320)
  LONG UnloadHistoryIndex;                      // offset: 0xcfc (3324)
  ULONG UnloadHistory[128];                     // offset: 0xd00 (3328)
  ULONG BootStart;                              // offset: 0xf00 (3840)
  ULONG UnaccessedStart;                        // offset: 0xf04 (3844)
  ULONG UnaccessedEnd;                          // offset: 0xf08 (3848)
  ULONG LoadedKeyCount;                         // offset: 0xf0c (3852)
  volatile ULONG HandleClosePending;            // offset: 0xf10 (3856)
  struct _EX_PUSH_LOCK HandleClosePendingEvent; // offset: 0xf14 (3860)
  UCHAR FinalFlushSucceeded;                    // offset: 0xf18 (3864)
  UCHAR FailedUnload;                           // offset: 0xf19 (3865)
};

// 0x60 (96) bytes
struct _HIVE_LIST_ENTRY {
  USHORT *FileName;                // offset: 0x0 (0)
  USHORT *BaseName;                // offset: 0x4 (4)
  USHORT *RegRootName;             // offset: 0x8 (8)
  struct _CMHIVE *CmHive;          // offset: 0xc (12)
  ULONG HHiveFlags;                // offset: 0x10 (16)
  ULONG CmHiveFlags;               // offset: 0x14 (20)
  ULONG CmKcbCacheSize;            // offset: 0x18 (24)
  struct _CMHIVE *CmHive2;         // offset: 0x1c (28)
  UCHAR HiveMounted;               // offset: 0x20 (32)
  UCHAR ThreadFinished;            // offset: 0x21 (33)
  UCHAR ThreadStarted;             // offset: 0x22 (34)
  UCHAR Allocate;                  // offset: 0x23 (35)
  UCHAR WinPERequired;             // offset: 0x24 (36)
  struct _KEVENT StartEvent;       // offset: 0x28 (40)
  struct _KEVENT FinishedEvent;    // offset: 0x38 (56)
  struct _KEVENT MountLock;        // offset: 0x48 (72)
  struct _UNICODE_STRING FilePath; // offset: 0x58 (88)
};

// 0x58 (88) bytes
struct _CM_RM {
  struct _LIST_ENTRY RmListEntry;         // offset: 0x0 (0)
  struct _LIST_ENTRY TransactionListHead; // offset: 0x8 (8)
  VOID *TmHandle;                         // offset: 0x10 (16)
  VOID *Tm;                               // offset: 0x14 (20)
  VOID *RmHandle;                         // offset: 0x18 (24)
  VOID *KtmRm;                            // offset: 0x1c (28)
  ULONG RefCount;                         // offset: 0x20 (32)
  ULONG ContainerNum;                     // offset: 0x24 (36)
  ULONGLONG ContainerSize;                // offset: 0x28 (40)
  struct _CMHIVE *CmHive;                 // offset: 0x30 (48)
  VOID *LogFileObject;                    // offset: 0x34 (52)
  VOID *MarshallingContext;               // offset: 0x38 (56)
  ULONG RmFlags;                          // offset: 0x3c (60)
  LONG LogStartStatus1;                   // offset: 0x40 (64)
  LONG LogStartStatus2;                   // offset: 0x44 (68)
  ULONGLONG BaseLsn;                      // offset: 0x48 (72)
  struct _ERESOURCE *RmLock;              // offset: 0x50 (80)
};

// 0x68 (104) bytes
struct _CM_TRANS {
  struct _LIST_ENTRY TransactionListEntry;  // offset: 0x0 (0)
  struct _LIST_ENTRY KCBUoWListHead;        // offset: 0x8 (8)
  struct _LIST_ENTRY LazyCommitListEntry;   // offset: 0x10 (16)
  VOID *KtmTrans;                           // offset: 0x18 (24)
  struct _CM_RM *CmRm;                      // offset: 0x1c (28)
  struct _KENLISTMENT *KtmEnlistmentObject; // offset: 0x20 (32)
  VOID *KtmEnlistmentHandle;                // offset: 0x24 (36)
  struct _GUID KtmUow;                      // offset: 0x28 (40)
  ULONGLONG StartLsn;                       // offset: 0x38 (56)
  ULONG TransState;                         // offset: 0x40 (64)
  ULONG HiveCount;                          // offset: 0x44 (68)
  struct _CMHIVE *HiveArray[7];             // offset: 0x48 (72)
};

// 0x38 (56) bytes
struct _CM_KCB_UOW {
  struct _LIST_ENTRY TransactionListEntry;       // offset: 0x0 (0)
  struct _CM_INTENT_LOCK *KCBLock;               // offset: 0x8 (8)
  struct _CM_INTENT_LOCK *KeyLock;               // offset: 0xc (12)
  struct _LIST_ENTRY KCBListEntry;               // offset: 0x10 (16)
  struct _CM_KEY_CONTROL_BLOCK *KeyControlBlock; // offset: 0x18 (24)
  struct _CM_TRANS *Transaction;                 // offset: 0x1c (28)
  ULONG UoWState;                                // offset: 0x20 (32)
  enum UoWActionType ActionType;                 // offset: 0x24 (36)
  enum HSTORAGE_TYPE StorageType;                // offset: 0x28 (40)
  union {
    struct _CM_KEY_CONTROL_BLOCK *ChildKCB; // offset: 0x30 (48)
    ULONG VolatileKeyCell;                  // offset: 0x30 (48)
    struct {
      ULONG OldValueCell; // offset: 0x30 (48)
      ULONG NewValueCell; // offset: 0x34 (52)
    };
    ULONG UserFlags;                    // offset: 0x30 (48)
    union _LARGE_INTEGER LastWriteTime; // offset: 0x30 (48)
    ULONG TxSecurityCell;               // offset: 0x30 (48)
    struct {
      struct _CM_KEY_CONTROL_BLOCK *OldChildKCB; // offset: 0x30 (48)
      struct _CM_KEY_CONTROL_BLOCK *NewChildKCB; // offset: 0x34 (52)
    };
    struct {
      struct _CM_KEY_CONTROL_BLOCK *OtherChildKCB; // offset: 0x30 (48)
      ULONG ThisVolatileKeyCell;                   // offset: 0x34 (52)
    };
  };
};

// 0x8 (8) bytes
struct _CM_INTENT_LOCK {
  ULONG OwnerCount;                // offset: 0x0 (0)
  struct _CM_KCB_UOW **OwnerTable; // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _CM_KEY_HASH {
  ULONG ConvKey;                 // offset: 0x0 (0)
  struct _CM_KEY_HASH *NextHash; // offset: 0x4 (4)
  struct _HHIVE *KeyHive;        // offset: 0x8 (8)
  ULONG KeyCell;                 // offset: 0xc (12)
};

// 0xa0 (160) bytes
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
    struct _CM_KEY_HASH KeyHash; // offset: 0xc (12)
    struct {
      ULONG ConvKey;                 // offset: 0xc (12)
      struct _CM_KEY_HASH *NextHash; // offset: 0x10 (16)
      struct _HHIVE *KeyHive;        // offset: 0x14 (20)
      ULONG KeyCell;                 // offset: 0x18 (24)
    };
  };
  struct _EX_PUSH_LOCK KcbPushlock; // offset: 0x1c (28)
  union {
    struct _KTHREAD *Owner; // offset: 0x20 (32)
    LONG SharedCount;       // offset: 0x20 (32)
  };
  ULONG SlotHint;                                // offset: 0x24 (36)
  struct _CM_KEY_CONTROL_BLOCK *ParentKcb;       // offset: 0x28 (40)
  struct _CM_NAME_CONTROL_BLOCK *NameBlock;      // offset: 0x2c (44)
  struct _CM_KEY_SECURITY_CACHE *CachedSecurity; // offset: 0x30 (48)
  struct _CACHED_CHILD_LIST ValueCache;          // offset: 0x34 (52)
  union {
    struct _CM_INDEX_HINT_BLOCK *IndexHint; // offset: 0x3c (60)
    ULONG HashKey;                          // offset: 0x3c (60)
    ULONG SubKeyCount;                      // offset: 0x3c (60)
  };
  union {
    struct _LIST_ENTRY KeyBodyListHead; // offset: 0x40 (64)
    struct _LIST_ENTRY FreeListEntry;   // offset: 0x40 (64)
  };
  struct _CM_KEY_BODY *KeyBodyArray[4];  // offset: 0x48 (72)
  union _LARGE_INTEGER KcbLastWriteTime; // offset: 0x58 (88)
  USHORT KcbMaxNameLen;                  // offset: 0x60 (96)
  USHORT KcbMaxValueNameLen;             // offset: 0x62 (98)
  ULONG KcbMaxValueDataLen;              // offset: 0x64 (100)
  ULONG KcbUserFlags : 4;                // offset: 0x68 (104)
  ULONG KcbVirtControlFlags : 4;         // offset: 0x68 (104)
  ULONG KcbDebug : 8;                    // offset: 0x68 (104)
  ULONG Flags : 16;                      // offset: 0x68 (104)
  struct _LIST_ENTRY KCBUoWListHead;     // offset: 0x6c (108)
  union {
    struct _LIST_ENTRY DelayQueueEntry; // offset: 0x74 (116)
    volatile UCHAR *Stolen;             // offset: 0x74 (116)
  };
  struct _CM_TRANS *TransKCBOwner;       // offset: 0x7c (124)
  struct _CM_INTENT_LOCK KCBLock;        // offset: 0x80 (128)
  struct _CM_INTENT_LOCK KeyLock;        // offset: 0x88 (136)
  struct _CHILD_LIST TransValueCache;    // offset: 0x90 (144)
  struct _CM_TRANS *TransValueListOwner; // offset: 0x98 (152)
  struct _UNICODE_STRING *FullKCBName;   // offset: 0x9c (156)
};

// 0x8 (8) bytes
struct _CM_KEY_REFERENCE {
  ULONG KeyCell;          // offset: 0x0 (0)
  struct _HHIVE *KeyHive; // offset: 0x4 (4)
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

// 0x54 (84) bytes
struct _CM_CACHED_VALUE_INDEX {
  ULONG CellIndex; // offset: 0x0 (0)
  union {
    struct _CELL_DATA CellData; // offset: 0x4 (4)
    ULONG List[1];              // offset: 0x4 (4)

  } Data; // offset: 0x4 (4)
};

// 0x120 (288) bytes
struct _HIVE_LOAD_FAILURE {
  struct _HHIVE *Hive;    // offset: 0x0 (0)
  ULONG Index;            // offset: 0x4 (4)
  ULONG RecoverableIndex; // offset: 0x8 (8)
  struct {
    enum _CM_LOAD_FAILURE_TYPE Failure; // offset: 0x0 (0)
    LONG Status;                        // offset: 0x4 (4)
    ULONG Point;                        // offset: 0x8 (8)
  } Locations[8];                       // offset: 0xc (12)
  struct {
    enum _CM_LOAD_FAILURE_TYPE Failure; // offset: 0x0 (0)
    LONG Status;                        // offset: 0x4 (4)
    ULONG Point;                        // offset: 0x8 (8)
  } RecoverableLocations[8];            // offset: 0x6c (108)
  struct {
    ULONG Action; // offset: 0x0 (0)
    VOID *Handle; // offset: 0x4 (4)
    LONG Status;  // offset: 0x8 (8)
  } RegistryIO;   // offset: 0xcc (204)
  struct {
    VOID *CheckStack; // offset: 0x0 (0)
  } CheckRegistry2;   // offset: 0xd8 (216)
  struct {
    ULONG Cell;                   // offset: 0x0 (0)
    struct _CELL_DATA *CellPoint; // offset: 0x4 (4)
    VOID *RootPoint;              // offset: 0x8 (8)
    ULONG Index;                  // offset: 0xc (12)
  } CheckKey;                     // offset: 0xdc (220)
  struct {
    struct _CELL_DATA *List;      // offset: 0x0 (0)
    ULONG Index;                  // offset: 0x4 (4)
    ULONG Cell;                   // offset: 0x8 (8)
    struct _CELL_DATA *CellPoint; // offset: 0xc (12)
  } CheckValueList;               // offset: 0xec (236)
  struct {
    ULONG Space;            // offset: 0x0 (0)
    ULONG MapPoint;         // offset: 0x4 (4)
    struct _HBIN *BinPoint; // offset: 0x8 (8)
  } CheckHive;              // offset: 0xfc (252)
  struct {
    ULONG Space;            // offset: 0x0 (0)
    ULONG MapPoint;         // offset: 0x4 (4)
    struct _HBIN *BinPoint; // offset: 0x8 (8)
  } CheckHive1;             // offset: 0x108 (264)
  struct {
    struct _HBIN *Bin;        // offset: 0x0 (0)
    struct _HCELL *CellPoint; // offset: 0x4 (4)
  } CheckBin;                 // offset: 0x114 (276)
  struct {
    ULONG FileOffset; // offset: 0x0 (0)
  } RecoverData;      // offset: 0x11c (284)
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

// 0x10 (16) bytes
struct _EVENT_FILTER_DESCRIPTOR {
  ULONGLONG Ptr; // offset: 0x0 (0)
  ULONG Size;    // offset: 0x8 (8)
  ULONG Type;    // offset: 0xc (12)
};

// 0x30 (48) bytes
struct _TlgProvider_t {
  ULONG LevelPlus1;                  // offset: 0x0 (0)
  const USHORT *ProviderMetadataPtr; // offset: 0x4 (4)
  ULONGLONG KeywordAny;              // offset: 0x8 (8)
  ULONGLONG KeywordAll;              // offset: 0x10 (16)
  ULONGLONG RegHandle;               // offset: 0x18 (24)
  VOID (*EnableCallback)
  (struct _GUID *arg1, ULONG arg2, UCHAR arg3, ULONGLONG arg4, ULONGLONG arg5,
   struct _EVENT_FILTER_DESCRIPTOR *arg6, VOID *arg7); // offset: 0x20 (32)
  VOID *CallbackContext;                               // offset: 0x24 (36)
  VOID (*AnnotationFunc)(<NoType> arg1);               // offset: 0x28 (40)
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

// 0xe4 (228) bytes
struct _WHEAP_ERROR_RECORD_WRAPPER {
  struct _LIST_ENTRY WorkEntry;                  // offset: 0x0 (0)
  ULONG Length;                                  // offset: 0x8 (8)
  ULONG ProcessorNumber;                         // offset: 0xc (12)
  union _WHEAP_ERROR_RECORD_WRAPPER_FLAGS Flags; // offset: 0x10 (16)
  volatile LONG InUse;                           // offset: 0x14 (20)
  struct _WHEAP_ERROR_SOURCE *ErrorSource;       // offset: 0x18 (24)
  struct _WHEA_ERROR_RECORD ErrorRecord;         // offset: 0x1c (28)
};

// 0x418 (1048) bytes
struct _WHEAP_ERROR_SOURCE {
  struct _LIST_ENTRY ListEntry;                    // offset: 0x0 (0)
  ULONG FailedAllocations;                         // offset: 0x8 (8)
  ULONG PlatformErrorSourceId;                     // offset: 0xc (12)
  LONG ErrorCount;                                 // offset: 0x10 (16)
  ULONG RecordCount;                               // offset: 0x14 (20)
  ULONG RecordLength;                              // offset: 0x18 (24)
  ULONG PoolTag;                                   // offset: 0x1c (28)
  enum _WHEA_ERROR_SOURCE_TYPE Type;               // offset: 0x20 (32)
  struct _WHEAP_ERROR_RECORD_WRAPPER *Records;     // offset: 0x24 (36)
  VOID *Context;                                   // offset: 0x28 (40)
  ULONG SectionCount;                              // offset: 0x2c (44)
  ULONG SectionLength;                             // offset: 0x30 (48)
  union _LARGE_INTEGER TickCountAtLastError;       // offset: 0x38 (56)
  ULONG AccumulatedErrors;                         // offset: 0x40 (64)
  ULONG TotalErrors;                               // offset: 0x44 (68)
  UCHAR Deferred;                                  // offset: 0x48 (72)
  struct _WHEA_ERROR_SOURCE_DESCRIPTOR Descriptor; // offset: 0x49 (73)
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
    struct {
      ULONG DontUse0 : 3;    // offset: 0x0 (0)
      ULONG Spare0 : 29;     // offset: 0x0 (0)
      VOID *PointerProtoPte; // offset: 0x4 (4)
    };
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

// 0x68 (104) bytes
struct _EVENT_RECORD {
  struct _EVENT_HEADER EventHeader;                      // offset: 0x0 (0)
  struct _ETW_BUFFER_CONTEXT BufferContext;              // offset: 0x50 (80)
  USHORT ExtendedDataCount;                              // offset: 0x54 (84)
  USHORT UserDataLength;                                 // offset: 0x56 (86)
  struct _EVENT_HEADER_EXTENDED_DATA_ITEM *ExtendedData; // offset: 0x58 (88)
  VOID *UserData;                                        // offset: 0x5c (92)
  VOID *UserContext;                                     // offset: 0x60 (96)
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

// 0x28 (40) bytes
struct _MI_PAGE_COMBINE_STATISTICS {
  ULONGLONG PagesScannedActive;         // offset: 0x0 (0)
  ULONGLONG PagesScannedStandby;        // offset: 0x8 (8)
  ULONGLONG PagesCombined;              // offset: 0x10 (16)
  ULONG CombineScanCount;               // offset: 0x18 (24)
  LONG CombinedBlocksInUse;             // offset: 0x1c (28)
  LONG SumCombinedBlocksReferenceCount; // offset: 0x20 (32)
};

// 0xd8 (216) bytes
struct _MI_PAGE_COMBINING_SUPPORT {
  struct _MI_PARTITION *Partition;                 // offset: 0x0 (0)
  struct _LIST_ENTRY ArbitraryPfnMapList;          // offset: 0x4 (4)
  struct _MI_COMBINE_WORKITEM FreeCombinePoolItem; // offset: 0xc (12)
  ULONG CombiningThreadCount;                      // offset: 0x20 (32)
  struct _LIST_ENTRY CombinePageFreeList;          // offset: 0x24 (36)
  ULONG CombineFreeListLock;                       // offset: 0x2c (44)
  struct _MI_COMBINE_PAGE_LISTHEAD
      CombinePageListHeads[16];                        // offset: 0x30 (48)
  struct _MI_PAGE_COMBINE_STATISTICS PageCombineStats; // offset: 0xb0 (176)
};

// 0x30 (48) bytes
struct _MI_MODWRITE_DATA {
  LONG PagesLoad;                        // offset: 0x0 (0)
  ULONG PagesAverage;                    // offset: 0x4 (4)
  ULONG AverageAvailablePages;           // offset: 0x8 (8)
  ULONG PagesWritten;                    // offset: 0xc (12)
  ULONG WritesIssued;                    // offset: 0x10 (16)
  ULONG IgnoredReservationsCount;        // offset: 0x14 (20)
  ULONG FreedReservationsCount;          // offset: 0x18 (24)
  ULONG WriteBurstCount;                 // offset: 0x1c (28)
  ULONGLONG IgnoreReservationsStartTime; // offset: 0x20 (32)
  union _MI_RESERVATION_CLUSTER_INFO volatile ReservationClusterInfo; // offset:
                                                                      // 0x28
                                                                      // (40)
  USHORT IgnoreReservations : 1; // offset: 0x2c (44)
  USHORT Spare : 15;             // offset: 0x2c (44)
  USHORT Spare1;                 // offset: 0x2e (46)
};

// 0x1b0 (432) bytes
struct _MI_PARTITION_MODWRITES {
  struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;     // offset: 0x0 (0)
  struct _MMPAGE_FILE_EXPANSION PageFileContract;         // offset: 0x38 (56)
  ULONG NumberOfMappedMdls;                               // offset: 0x70 (112)
  volatile LONG NumberOfMappedMdlsInUse;                  // offset: 0x74 (116)
  ULONG NumberOfMappedMdlsInUsePeak;                      // offset: 0x78 (120)
  struct _MMMOD_WRITER_LISTHEAD MappedFileHeader;         // offset: 0x7c (124)
  UCHAR NeedMappedMdl;                                    // offset: 0x94 (148)
  UCHAR NeedPageFileMdl;                                  // offset: 0x95 (149)
  UCHAR TransitionInserted;                               // offset: 0x96 (150)
  LONG LastModifiedWriteError;                            // offset: 0x98 (152)
  LONG LastMappedWriteError;                              // offset: 0x9c (156)
  volatile ULONG MappedFileWriteSucceeded;                // offset: 0xa0 (160)
  ULONG MappedWriteBurstCount;                            // offset: 0xa4 (164)
  ULONG LowPriorityModWritesOutstanding;                  // offset: 0xa8 (168)
  struct _KEVENT BoostModWriteIoPriorityEvent;            // offset: 0xac (172)
  LONG ModifiedWriterThreadPriority;                      // offset: 0xbc (188)
  ULONG ModifiedPagesLowPriorityGoal;                     // offset: 0xc0 (192)
  struct _KEVENT ModifiedPageWriterEvent;                 // offset: 0xc4 (196)
  volatile LONG WriteAllPagefilePages;                    // offset: 0xd4 (212)
  volatile LONG WriteAllMappedPages;                      // offset: 0xd8 (216)
  struct _KEVENT MappedPageWriterEvent;                   // offset: 0xdc (220)
  struct _MI_MODWRITE_DATA ModWriteData;                  // offset: 0xf0 (240)
  struct _KEVENT RescanPageFilesEvent;                    // offset: 0x120 (288)
  struct _MMMOD_WRITER_LISTHEAD PagingFileHeader;         // offset: 0x130 (304)
  struct _ETHREAD *ModifiedPageWriterThread;              // offset: 0x148 (328)
  struct _EX_RUNDOWN_REF ModifiedPageWriterRundown;       // offset: 0x14c (332)
  struct _WORK_QUEUE_ITEM PagefileScanWorkItem;           // offset: 0x150 (336)
  ULONG PagefileScanCount;                                // offset: 0x160 (352)
  volatile LONG ClusterWritesDisabled[2];                 // offset: 0x164 (356)
  volatile UCHAR DelayMappedWrite;                        // offset: 0x16c (364)
  volatile ULONG PagefileReservationsEnabled;             // offset: 0x170 (368)
  struct _EX_PUSH_LOCK PageFileCreationLock;              // offset: 0x174 (372)
  struct _WORK_QUEUE_ITEM TrimPagefileWorkItem;           // offset: 0x178 (376)
  ULONGLONG LastTrimPagefileTime;                         // offset: 0x188 (392)
  struct _WORK_QUEUE_ITEM WsSwapPagefileContractWorkItem; // offset: 0x190 (400)
  volatile LONG WsSwapPageFileContractionInProgress;      // offset: 0x1a0 (416)
  struct _EX_PUSH_LOCK WorkingSetSwapLock;                // offset: 0x1a4 (420)
  volatile LONG WorkingSetInswapLock;                     // offset: 0x1a8 (424)
};

// 0x8 (8) bytes
struct _MMPTE_LIST {
  ULONGLONG Valid : 1;      // offset: 0x0 (0)
  ULONGLONG OneEntry : 1;   // offset: 0x0 (0)
  ULONGLONG filler0 : 8;    // offset: 0x0 (0)
  ULONGLONG Prototype : 1;  // offset: 0x0 (0)
  ULONGLONG filler1 : 21;   // offset: 0x0 (0)
  ULONGLONG NextEntry : 32; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _MMPTE_SUBSECTION {
  ULONGLONG Valid : 1;              // offset: 0x0 (0)
  ULONGLONG Unused0 : 4;            // offset: 0x0 (0)
  ULONGLONG Protection : 5;         // offset: 0x0 (0)
  ULONGLONG Prototype : 1;          // offset: 0x0 (0)
  ULONGLONG Unused1 : 21;           // offset: 0x0 (0)
  ULONGLONG SubsectionAddress : 32; // offset: 0x0 (0)
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
  ULONGLONG PageFrameNumber : 26; // offset: 0x0 (0)
  ULONGLONG Unused : 26;          // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _MMPTE_TIMESTAMP {
  ULONGLONG MustBeZero : 1;       // offset: 0x0 (0)
  ULONGLONG PageFileLow : 4;      // offset: 0x0 (0)
  ULONGLONG Protection : 5;       // offset: 0x0 (0)
  ULONGLONG Prototype : 1;        // offset: 0x0 (0)
  ULONGLONG Transition : 1;       // offset: 0x0 (0)
  ULONGLONG Unused : 20;          // offset: 0x0 (0)
  ULONGLONG GlobalTimeStamp : 32; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _MMPTE_SOFTWARE {
  ULONGLONG Valid : 1;             // offset: 0x0 (0)
  ULONGLONG PageFileLow : 4;       // offset: 0x0 (0)
  ULONGLONG Protection : 5;        // offset: 0x0 (0)
  ULONGLONG Prototype : 1;         // offset: 0x0 (0)
  ULONGLONG Transition : 1;        // offset: 0x0 (0)
  ULONGLONG PageFileReserved : 1;  // offset: 0x0 (0)
  ULONGLONG PageFileAllocated : 1; // offset: 0x0 (0)
  ULONGLONG Unused : 18;           // offset: 0x0 (0)
  ULONGLONG PageFileHigh : 32;     // offset: 0x0 (0)
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
  ULONGLONG Unused : 16;              // offset: 0x0 (0)
  ULONGLONG ProtoAddress : 32;        // offset: 0x0 (0)
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
  ULONGLONG PageFrameNumber : 26; // offset: 0x0 (0)
  ULONGLONG reserved1 : 26;       // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _HARDWARE_PTE {
  union {
    struct {
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
      ULONGLONG PageFrameNumber : 26; // offset: 0x0 (0)
      ULONGLONG reserved1 : 26;       // offset: 0x0 (0)
    };
    struct {
      ULONG LowPart;  // offset: 0x0 (0)
      ULONG HighPart; // offset: 0x4 (4)
    };
  };
};

// 0x10 (16) bytes
struct _MMEXTEND_INFO {
  ULONGLONG CommittedSize; // offset: 0x0 (0)
  ULONG ReferenceCount;    // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _MAPPED_FILE_SEGMENT {
  struct _CONTROL_AREA *ControlArea;  // offset: 0x0 (0)
  ULONG TotalNumberOfPtes;            // offset: 0x4 (4)
  struct _SEGMENT_FLAGS SegmentFlags; // offset: 0x8 (8)
  ULONG NumberOfCommittedPages;       // offset: 0xc (12)
  ULONGLONG SizeOfSegment;            // offset: 0x10 (16)
  union {
    struct _MMEXTEND_INFO *ExtendInfo; // offset: 0x18 (24)
    VOID *BasedAddress;                // offset: 0x18 (24)
  };
  struct _EX_PUSH_LOCK SegmentLock; // offset: 0x1c (28)
};

// 0x8 (8) bytes
struct _MMPTE {
  union {
    ULONGLONG Long;                    // offset: 0x0 (0)
    volatile ULONGLONG VolatileLong;   // offset: 0x0 (0)
    struct _MMPTE_HIGHLOW HighLow;     // offset: 0x0 (0)
    struct _HARDWARE_PTE Flush;        // offset: 0x0 (0)
    struct _MMPTE_HARDWARE Hard;       // offset: 0x0 (0)
    struct _MMPTE_PROTOTYPE Proto;     // offset: 0x0 (0)
    struct _MMPTE_SOFTWARE Soft;       // offset: 0x0 (0)
    struct _MMPTE_TIMESTAMP TimeStamp; // offset: 0x0 (0)
    struct _MMPTE_TRANSITION Trans;    // offset: 0x0 (0)
    struct _MMPTE_SUBSECTION Subsect;  // offset: 0x0 (0)
    struct _MMPTE_LIST List;           // offset: 0x0 (0)

  } u; // offset: 0x0 (0)
};

// 0x20 (32) bytes
struct _PAE_ENTRY {
  union {
    struct _MMPTE PteEntry[4];         // offset: 0x0 (0)
    struct _PAE_PAGEINFO PaeEntry;     // offset: 0x0 (0)
    struct _SINGLE_LIST_ENTRY NextPae; // offset: 0x0 (0)
  };
};

// 0x10 (16) bytes
struct _MMCLONE_BLOCK {
  struct _MMPTE ProtoPte; // offset: 0x0 (0)
  union {
    volatile ULONG CloneCommitCount; // offset: 0x8 (8)
    struct _MI_CLONE_BLOCK_FLAGS u1; // offset: 0x8 (8)
  };
  volatile ULONG CloneRefCount; // offset: 0xc (12)
};

// 0xc (12) bytes
struct _MMCLONE_HEADER {
  ULONG NumberOfPtes;                       // offset: 0x0 (0)
  volatile ULONG NumberOfProcessReferences; // offset: 0x4 (4)
  struct _MMCLONE_BLOCK *ClonePtes;         // offset: 0x8 (8)
};

// 0x30 (48) bytes
struct _MMCLONE_DESCRIPTOR {
  union {
    struct _RTL_BALANCED_NODE CloneNode; // offset: 0x0 (0)
    struct _MMCLONE_DESCRIPTOR *Next;    // offset: 0x0 (0)
  };
  struct _MMCLONE_BLOCK *StartingCloneBlock; // offset: 0xc (12)
  struct _MMCLONE_BLOCK *EndingCloneBlock;   // offset: 0x10 (16)
  ULONG NumberOfPtes;                        // offset: 0x14 (20)
  volatile ULONG NumberOfReferences;         // offset: 0x18 (24)
  struct _MMCLONE_HEADER *CloneHeader;       // offset: 0x1c (28)
  ULONG NonPagedPoolQuotaCharge;             // offset: 0x20 (32)
  ULONGLONG NestingLevel;                    // offset: 0x28 (40)
};

// 0x14 (20) bytes
struct _MI_DRIVER_VA {
  struct _MI_DRIVER_VA *Next; // offset: 0x0 (0)
  struct _MMPTE *PointerPte;  // offset: 0x4 (4)
  struct _RTL_BITMAP BitMap;  // offset: 0x8 (8)
  ULONG Hint;                 // offset: 0x10 (16)
};

// 0x18 (24) bytes
struct _MI_PTE_CHAIN_HEAD {
  struct _MMPTE Flink;    // offset: 0x0 (0)
  struct _MMPTE Blink;    // offset: 0x8 (8)
  struct _MMPTE *PteBase; // offset: 0x10 (16)
};

// 0x48 (72) bytes
struct _MI_SPECIAL_POOL {
  ULONG Lock;                         // offset: 0x0 (0)
  struct _MI_PTE_CHAIN_HEAD Paged;    // offset: 0x8 (8)
  struct _MI_PTE_CHAIN_HEAD NonPaged; // offset: 0x20 (32)
  volatile ULONG PagesInUse;          // offset: 0x38 (56)
  struct _RTL_BITMAP SpecialPoolPdes; // offset: 0x3c (60)
};

// 0x1c (28) bytes
struct _MM_PAGED_POOL_INFO {
  struct _EX_PUSH_LOCK Lock;                 // offset: 0x0 (0)
  struct _RTL_BITMAP PagedPoolAllocationMap; // offset: 0x4 (4)
  struct _MMPTE *FirstPteForPagedPool;       // offset: 0xc (12)
  ULONG MaximumSize;                         // offset: 0x10 (16)
  ULONG PagedPoolHint;                       // offset: 0x14 (20)
  ULONG AllocatedPagedPool;                  // offset: 0x18 (24)
};

// 0x4e0 (1248) bytes
struct _MI_POOL_STATE {
  ULONG MaximumNonPagedPoolThreshold;            // offset: 0x0 (0)
  ULONG NonPagedPoolSListMaximum[3];             // offset: 0x4 (4)
  volatile ULONG AllocatedNonPagedPool;          // offset: 0x10 (16)
  struct _SINGLE_LIST_ENTRY BadPoolHead;         // offset: 0x14 (20)
  ULONG PoolFailures[3][3];                      // offset: 0x18 (24)
  ULONG PoolFailureReasons[11];                  // offset: 0x3c (60)
  ULONG LowPagedPoolThreshold;                   // offset: 0x68 (104)
  ULONG HighPagedPoolThreshold;                  // offset: 0x6c (108)
  LONG SpecialPoolPdesMax;                       // offset: 0x70 (112)
  UCHAR NonPagedPoolNodes[1024];                 // offset: 0x74 (116)
  struct _MM_PAGED_POOL_INFO PagedProtoPoolInfo; // offset: 0x474 (1140)
  ULONG PagedPoolSListMaximum;                   // offset: 0x490 (1168)
  ULONG PreemptiveTrims[4];                      // offset: 0x494 (1172)
  ULONG SpecialPagesInUsePeak;                   // offset: 0x4a4 (1188)
  ULONG SpecialPoolRejected[9];                  // offset: 0x4a8 (1192)
  volatile ULONG SpecialPagesNonPaged;           // offset: 0x4cc (1228)
  volatile LONG SpecialPoolPdes;                 // offset: 0x4d0 (1232)
  ULONG SessionSpecialPoolPdesMax;               // offset: 0x4d4 (1236)
  ULONG TotalPagedPoolQuota;                     // offset: 0x4d8 (1240)
  ULONG TotalNonPagedPoolQuota;                  // offset: 0x4dc (1244)
};

// 0x90 (144) bytes
struct _MI_DEBUGGER_STATE {
  UCHAR TransientWrite;     // offset: 0x0 (0)
  UCHAR CodePageEdited;     // offset: 0x1 (1)
  struct _MMPTE *DebugPte;  // offset: 0x4 (4)
  ULONG PoisonedTb;         // offset: 0x8 (8)
  volatile LONG InDebugger; // offset: 0xc (12)
  VOID *volatile Pfns[32];  // offset: 0x10 (16)
};

// 0x4c (76) bytes
struct _MI_SHUTDOWN_STATE {
  ULONG StandbyListDiscard;                    // offset: 0x0 (0)
  UCHAR CrashDumpInitialized;                  // offset: 0x4 (4)
  UCHAR ConnectedStandbyActive;                // offset: 0x5 (5)
  ULONG SystemShutdown;                        // offset: 0x8 (8)
  LONG ShutdownFlushInProgress;                // offset: 0xc (12)
  struct _MI_RESUME_WORKITEM ResumeItem;       // offset: 0x10 (16)
  UCHAR FreeListDiscard;                       // offset: 0x30 (48)
  struct _ETHREAD *MirrorHoldsPfn;             // offset: 0x34 (52)
  ULONG MirroringActive;                       // offset: 0x38 (56)
  struct _RTL_BITMAP *MirrorBitMap;            // offset: 0x3c (60)
  struct _RTL_BITMAP *MirrorBitMapInterlocked; // offset: 0x40 (64)
  VOID *MirrorListLocks;                       // offset: 0x44 (68)
  struct _MMPTE *CrashDumpPte;                 // offset: 0x48 (72)
};

// 0x14c0 (5312) bytes
struct _MI_SYSTEM_VA_STATE {
  ULONG SystemTablesLock;                       // offset: 0x0 (0)
  ULONG SystemVaBias;                           // offset: 0x4 (4)
  ULONG SystemAvailableVaLow;                   // offset: 0x8 (8)
  ULONG VirtualBias;                            // offset: 0xc (12)
  VOID *HyperSpaceEnd;                          // offset: 0x10 (16)
  struct _MMPTE *HyperSpaceEndPte;              // offset: 0x14 (20)
  VOID *SystemRangeStart;                       // offset: 0x18 (24)
  UCHAR SystemCachePdeCount[1024];              // offset: 0x1c (28)
  VOID *SystemCacheReverseMaps[1024];           // offset: 0x41c (1052)
  struct _MMWSLE_HASH *WorkingSetListHashStart; // offset: 0x141c (5148)
  struct _MMWSLE_HASH *WorkingSetListHashEnd;   // offset: 0x1420 (5152)
  struct _MMWSLE_NONDIRECT_HASH
      *WorkingSetListIndirectHashStart;      // offset: 0x1424 (5156)
  struct _KEVENT FreeSystemCacheVa;          // offset: 0x1428 (5160)
  ULONG SystemVaLock;                        // offset: 0x1438 (5176)
  volatile LONG DeleteKvaLock;               // offset: 0x143c (5180)
  struct _MI_PTE_CHAIN_HEAD FreeSystemCache; // offset: 0x1440 (5184)
  ULONG SystemCacheViewLock;                 // offset: 0x1458 (5208)
  ULONG UnusableWsles[5];                    // offset: 0x145c (5212)
  ULONG PossibleWsles[5];                    // offset: 0x1470 (5232)
};

// 0x34 (52) bytes
struct _MI_SYSTEM_PTE_TYPE {
  struct _RTL_BITMAP Bitmap;      // offset: 0x0 (0)
  struct _MMPTE *BasePte;         // offset: 0x8 (8)
  ULONG Flags;                    // offset: 0xc (12)
  enum _MI_SYSTEM_VA_TYPE VaType; // offset: 0x10 (16)
  ULONG *FailureCount;            // offset: 0x14 (20)
  ULONG PteFailures;              // offset: 0x18 (24)
  union {
    ULONG SpinLock;                       // offset: 0x1c (28)
    struct _EX_PUSH_LOCK *GlobalPushLock; // offset: 0x1c (28)
  };
  struct _MMSUPPORT *Vm;              // offset: 0x20 (32)
  volatile ULONG TotalSystemPtes;     // offset: 0x24 (36)
  ULONG Hint;                         // offset: 0x28 (40)
  struct _MI_CACHED_PTES *CachedPtes; // offset: 0x2c (44)
  volatile ULONG TotalFreeSystemPtes; // offset: 0x30 (48)
};

// 0x840 (2112) bytes
struct _MI_VISIBLE_STATE {
  struct _MI_SPECIAL_POOL SpecialPool;         // offset: 0x0 (0)
  struct _LIST_ENTRY SessionWsList;            // offset: 0x48 (72)
  struct _RTL_BITMAP *SessionIdBitmap;         // offset: 0x50 (80)
  struct _MM_PAGED_POOL_INFO PagedPoolInfo;    // offset: 0x54 (84)
  ULONG MaximumNonPagedPoolInPages;            // offset: 0x70 (112)
  ULONG SizeOfPagedPoolInPages;                // offset: 0x74 (116)
  struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;    // offset: 0x78 (120)
  volatile ULONG NonPagedPoolCommit;           // offset: 0xac (172)
  volatile ULONG BootCommit;                   // offset: 0xb0 (176)
  volatile ULONG MdlPagesAllocated;            // offset: 0xb4 (180)
  volatile ULONG SystemPageTableCommit;        // offset: 0xb8 (184)
  volatile ULONG SpecialPagesInUse;            // offset: 0xbc (188)
  volatile ULONG WsOverheadPages;              // offset: 0xc0 (192)
  volatile ULONG VadBitmapPages;               // offset: 0xc4 (196)
  volatile ULONG ProcessCommit;                // offset: 0xc8 (200)
  volatile ULONG SharedCommit;                 // offset: 0xcc (204)
  volatile LONG DriverCommit;                  // offset: 0xd0 (208)
  struct _MMSUPPORT SystemWs[3];               // offset: 0x100 (256)
  ULONG MapCacheFailures;                      // offset: 0x280 (640)
  ULONG LastUnloadedDriver;                    // offset: 0x284 (644)
  struct _UNLOADED_DRIVERS *UnloadedDrivers;   // offset: 0x288 (648)
  ULONG PagefileHashPages;                     // offset: 0x28c (652)
  struct _SYSPTES_HEADER PteHeader;            // offset: 0x290 (656)
  struct _MI_SPECIAL_POOL *SessionSpecialPool; // offset: 0x31c (796)
  ULONG SystemVaTypeCount[15];                 // offset: 0x320 (800)
  UCHAR SystemVaType[1024];                    // offset: 0x35c (860)
  ULONG SystemVaTypeCountFailures[15];         // offset: 0x75c (1884)
  ULONG SystemVaTypeCountLimit[15];            // offset: 0x798 (1944)
  ULONG SystemVaTypeCountPeak[15];             // offset: 0x7d4 (2004)
  ULONG SystemAvailableVa;                     // offset: 0x810 (2064)
};

// 0x2c (44) bytes
struct _MI_PARTITION_ZEROING {
  struct _KEVENT PageEvent;                          // offset: 0x0 (0)
  UCHAR ThreadActive;                                // offset: 0x10 (16)
  LONG ZeroFreePageSlistMinimum;                     // offset: 0x14 (20)
  struct _MMPTE *FirstReservedZeroingPte;            // offset: 0x18 (24)
  struct _WORK_QUEUE_ITEM RebalanceZeroFreeWorkItem; // offset: 0x1c (28)
};

// 0x1c (28) bytes
struct _MMPFN {
  union {
    struct _LIST_ENTRY ListEntry;       // offset: 0x0 (0)
    struct _RTL_BALANCED_NODE TreeNode; // offset: 0x0 (0)
    struct {
      union {
        ULONG Flink;                            // offset: 0x0 (0)
        ULONG WsIndex;                          // offset: 0x0 (0)
        struct _KEVENT *Event;                  // offset: 0x0 (0)
        VOID *Next;                             // offset: 0x0 (0)
        VOID *volatile VolatileNext;            // offset: 0x0 (0)
        struct _KTHREAD *KernelStackOwner;      // offset: 0x0 (0)
        struct _SINGLE_LIST_ENTRY NextStackPfn; // offset: 0x0 (0)

      } u1; // offset: 0x0 (0)
      union {
        struct _MMPTE *PteAddress;         // offset: 0x4 (4)
        VOID *volatile VolatilePteAddress; // offset: 0x4 (4)
        ULONG PteLong;                     // offset: 0x4 (4)
      };
      struct _MMPTE OriginalPte; // offset: 0x8 (8)
    };
  };
  struct _MIPFNBLINK u2; // offset: 0x10 (16)
  union {
    struct {
      USHORT ReferenceCount; // offset: 0x14 (20)
      struct _MMPFNENTRY e1; // offset: 0x16 (22)
    };
    struct {
      USHORT ReferenceCount; // offset: 0x0 (0)
      union {
        USHORT ShortFlags;                  // offset: 0x2 (2)
        volatile USHORT VolatileShortFlags; // offset: 0x2 (2)
      };
    } e2; // offset: 0x14 (20)

  } u3; // offset: 0x14 (20)
  union {
    ULONG PteFrame : 24;    // offset: 0x18 (24)
    ULONG PageIdentity : 3; // offset: 0x18 (24)
    ULONG PrototypePte : 1; // offset: 0x18 (24)
    ULONG PageColor : 4;    // offset: 0x18 (24)
    ULONG EntireField;      // offset: 0x18 (24)

  } u4; // offset: 0x18 (24)
};

// 0x2c (44) bytes
struct _MI_COMMON_PAGE_STATE {
  struct _MMPFN *PageOfOnesPfn; // offset: 0x0 (0)
  ULONG PageOfOnes;             // offset: 0x4 (4)
  struct _MMPFN *DummyPagePfn;  // offset: 0x8 (8)
  ULONG DummyPage;              // offset: 0xc (12)
  ULONG PageOfZeroes;           // offset: 0x10 (16)
  VOID *ZeroMapping;            // offset: 0x14 (20)
  VOID *OnesMapping;            // offset: 0x18 (24)
  ULONG BitmapGapFrames[2];     // offset: 0x1c (28)
  ULONG PfnGapFrames[2];        // offset: 0x24 (36)
};

// 0x10 (16) bytes
struct _COLORED_PAGE_INFO {
  volatile LONG BeingZeroed;    // offset: 0x0 (0)
  ULONG Processor;              // offset: 0x4 (4)
  ULONG PagesQueued;            // offset: 0x8 (8)
  struct _MMPFN *PfnAllocation; // offset: 0xc (12)
};

// 0x10 (16) bytes
struct _MI_LARGEPAGE_MEMORY_INFO {
  struct _LIST_ENTRY ListHead;                    // offset: 0x0 (0)
  struct _COLORED_PAGE_INFO *ColoredPageInfoBase; // offset: 0x8 (8)
  ULONG PagesNeedZeroing;                         // offset: 0xc (12)
};

// 0x18 (24) bytes
struct _MI_PER_SESSION_PROTOS {
  union {
    struct _RTL_BALANCED_NODE SessionProtoNode; // offset: 0x0 (0)
    struct _SINGLE_LIST_ENTRY FreeList;         // offset: 0x0 (0)
    VOID *DriverAddress;                        // offset: 0x0 (0)
  };
  union {
    ULONG SessionId;                // offset: 0xc (12)
    struct _SUBSECTION *Subsection; // offset: 0xc (12)
  };
  struct _MMPTE *SubsectionBase; // offset: 0x10 (16)
  union {
    ULONG ReferenceCount;     // offset: 0x14 (20)
    ULONG NumberOfPtesToFree; // offset: 0x14 (20)

  } u2; // offset: 0x14 (20)
};

// 0x28 (40) bytes
struct _SUBSECTION {
  struct _CONTROL_AREA *ControlArea;  // offset: 0x0 (0)
  struct _MMPTE *SubsectionBase;      // offset: 0x4 (4)
  struct _SUBSECTION *NextSubsection; // offset: 0x8 (8)
  union {
    struct _MI_FILE_EXTENTS *FileExtents;               // offset: 0xc (12)
    struct _RTL_AVL_TREE GlobalPerSessionHead;          // offset: 0xc (12)
    struct _MI_PER_SESSION_PROTOS *SessionDriverProtos; // offset: 0xc (12)
  };
  union {
    ULONG LongFlags;                            // offset: 0x10 (16)
    struct _MMSUBSECTION_FLAGS SubsectionFlags; // offset: 0x10 (16)

  } u;                       // offset: 0x10 (16)
  ULONG StartingSector;      // offset: 0x14 (20)
  ULONG NumberOfFullSectors; // offset: 0x18 (24)
  ULONG PtesInSubsection;    // offset: 0x1c (28)
  union {
    ULONG NumberOfChildViews; // offset: 0x20 (32)

  } u1; // offset: 0x20 (32)
  union {
    ULONG UnusedPtes;            // offset: 0x24 (36)
    ULONG AlignmentNoAccessPtes; // offset: 0x24 (36)
  };
};

// 0x44 (68) bytes
struct _MSUBSECTION {
  struct _SUBSECTION Core;                  // offset: 0x0 (0)
  struct _RTL_BALANCED_NODE SubsectionNode; // offset: 0x28 (40)
  struct _LIST_ENTRY DereferenceList;       // offset: 0x34 (52)
  ULONG NumberOfMappedViews;                // offset: 0x3c (60)
  ULONG NumberOfPfnReferences;              // offset: 0x40 (64)
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

// 0x38 (56) bytes
struct _PS_WAKE_INFORMATION {
  ULONGLONG NotificationChannel; // offset: 0x0 (0)
  ULONGLONG WakeCounters[5];     // offset: 0x8 (8)
  ULONGLONG NoWakeCounter;       // offset: 0x30 (48)
};

// 0x28 (40) bytes
struct _PROCESS_DISK_COUNTERS {
  ULONGLONG BytesRead;           // offset: 0x0 (0)
  ULONGLONG BytesWritten;        // offset: 0x8 (8)
  ULONGLONG ReadOperationCount;  // offset: 0x10 (16)
  ULONGLONG WriteOperationCount; // offset: 0x18 (24)
  ULONGLONG FlushOperationCount; // offset: 0x20 (32)
};

// 0x20 (32) bytes
struct _PROC_IDLE_STATE_BUCKET {
  ULONGLONG TotalTime; // offset: 0x0 (0)
  ULONGLONG MinTime;   // offset: 0x8 (8)
  ULONGLONG MaxTime;   // offset: 0x10 (16)
  ULONG Count;         // offset: 0x18 (24)
};

// 0x70 (112) bytes
struct _PPM_SELECTION_STATISTICS {
  ULONGLONG SelectedCount;              // offset: 0x0 (0)
  ULONGLONG VetoCount;                  // offset: 0x8 (8)
  ULONGLONG PreVetoCount;               // offset: 0x10 (16)
  ULONGLONG WrongProcessorCount;        // offset: 0x18 (24)
  ULONGLONG LatencyCount;               // offset: 0x20 (32)
  ULONGLONG IdleDurationCount;          // offset: 0x28 (40)
  ULONGLONG DeviceDependencyCount;      // offset: 0x30 (48)
  ULONGLONG ProcessorDependencyCount;   // offset: 0x38 (56)
  ULONGLONG PlatformOnlyCount;          // offset: 0x40 (64)
  ULONGLONG InterruptibleCount;         // offset: 0x48 (72)
  ULONGLONG LegacyOverrideCount;        // offset: 0x50 (80)
  ULONGLONG CstateCheckCount;           // offset: 0x58 (88)
  ULONGLONG NoCStateCount;              // offset: 0x60 (96)
  ULONGLONG CoordinatedDependencyCount; // offset: 0x68 (104)
};

// 0x3e0 (992) bytes
struct _PLATFORM_IDLE_STATE_ACCOUNTING {
  ULONG CancelCount;                                    // offset: 0x0 (0)
  ULONG FailureCount;                                   // offset: 0x4 (4)
  ULONG SuccessCount;                                   // offset: 0x8 (8)
  ULONGLONG MaxTime;                                    // offset: 0x10 (16)
  ULONGLONG MinTime;                                    // offset: 0x18 (24)
  ULONGLONG TotalTime;                                  // offset: 0x20 (32)
  ULONG InvalidBucketIndex;                             // offset: 0x28 (40)
  struct _PPM_SELECTION_STATISTICS SelectionStatistics; // offset: 0x30 (48)
  struct _PROC_IDLE_STATE_BUCKET IdleTimeBuckets[26];   // offset: 0xa0 (160)
};

// 0x3f8 (1016) bytes
struct _PLATFORM_IDLE_ACCOUNTING {
  ULONG ResetCount;                                // offset: 0x0 (0)
  ULONG StateCount;                                // offset: 0x4 (4)
  enum PPM_IDLE_BUCKET_TIME_TYPE TimeUnit;         // offset: 0x8 (8)
  ULONGLONG StartTime;                             // offset: 0x10 (16)
  struct _PLATFORM_IDLE_STATE_ACCOUNTING State[1]; // offset: 0x18 (24)
};

// 0x100 (256) bytes
struct _PPM_PLATFORM_STATES {
  ULONG StateCount;                                      // offset: 0x0 (0)
  ULONG InterfaceVersion;                                // offset: 0x4 (4)
  ULONG ProcessorCount;                                  // offset: 0x8 (8)
  UCHAR CoordinatedInterface;                            // offset: 0xc (12)
  ULONG (*IdleTest)(VOID *arg1, ULONG arg2, ULONG arg3); // offset: 0x10 (16)
  LONG (*IdlePreExecute)
  (VOID *arg1, ULONG arg2, ULONG arg3, ULONG arg4,
   ULONG *arg5); // offset: 0x14 (20)
  VOID (*IdleComplete)
  (VOID *arg1, ULONG arg2, ULONG arg3, ULONG arg4,
   ULONG *arg5); // offset: 0x18 (24)
  LONG (*QueryPlatformStateResidency)
  (VOID *arg1,
   struct _PROCESSOR_PLATFORM_STATE_RESIDENCIES *arg2); // offset: 0x1c (28)
  struct _PLATFORM_IDLE_ACCOUNTING *Accounting;         // offset: 0x20 (32)
  struct _PPM_PLATFORM_STATE State[1];                  // offset: 0x40 (64)
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

// 0x10 (16) bytes
struct _M128A {
  ULONGLONG Low; // offset: 0x0 (0)
  LONGLONG High; // offset: 0x8 (8)
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
  struct _M128A XmmRegisters[8];   // offset: 0xa0 (160)
  UCHAR Reserved4[224];            // offset: 0x120 (288)
};

// 0x3d8 (984) bytes
struct _PROC_IDLE_STATE_ACCOUNTING {
  ULONGLONG TotalTime;                                  // offset: 0x0 (0)
  ULONG CancelCount;                                    // offset: 0x8 (8)
  ULONG FailureCount;                                   // offset: 0xc (12)
  ULONG SuccessCount;                                   // offset: 0x10 (16)
  ULONG InvalidBucketIndex;                             // offset: 0x14 (20)
  ULONGLONG MinTime;                                    // offset: 0x18 (24)
  ULONGLONG MaxTime;                                    // offset: 0x20 (32)
  struct _PPM_SELECTION_STATISTICS SelectionStatistics; // offset: 0x28 (40)
  struct _PROC_IDLE_STATE_BUCKET IdleTimeBuckets[26];   // offset: 0x98 (152)
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

// 0x50 (80) bytes
struct _PROCESSOR_IDLE_PREPARE_INFO {
  VOID *Context;                                      // offset: 0x0 (0)
  struct _PROCESSOR_IDLE_CONSTRAINTS Constraints;     // offset: 0x8 (8)
  ULONG DependencyCount;                              // offset: 0x38 (56)
  ULONG DependencyUsed;                               // offset: 0x3c (60)
  struct _PROCESSOR_IDLE_DEPENDENCY *DependencyArray; // offset: 0x40 (64)
  ULONG PlatformIdleStateIndex;                       // offset: 0x44 (68)
  ULONG ProcessorIdleStateIndex;                      // offset: 0x48 (72)
  ULONG IdleSelectFailureMask;                        // offset: 0x4c (76)
};

// 0x140 (320) bytes
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
  struct _KAFFINITY_EX SecondaryProcessorMask; // offset: 0x44 (68)
  VOID (*IdlePrepare)
  (struct _PROCESSOR_IDLE_PREPARE_INFO *arg1); // offset: 0x50 (80)
  LONG (*IdlePreExecute)
  (VOID *arg1, ULONG arg2, ULONG arg3, ULONG arg4,
   ULONG *arg5); // offset: 0x54 (84)
  LONG (*IdleExecute)
  (VOID *arg1, ULONG arg2, ULONG arg3, ULONG arg4,
   ULONG *arg5); // offset: 0x58 (88)
  ULONG (*IdlePreselect)
  (VOID *arg1, struct _PROCESSOR_IDLE_CONSTRAINTS *arg2); // offset: 0x5c (92)
  ULONG (*IdleTest)(VOID *arg1, ULONG arg2, ULONG arg3);  // offset: 0x60 (96)
  ULONG (*IdleAvailabilityCheck)(VOID *arg1, ULONG arg2); // offset: 0x64 (100)
  VOID (*IdleComplete)
  (VOID *arg1, ULONG arg2, ULONG arg3, ULONG arg4,
   ULONG *arg5);                                   // offset: 0x68 (104)
  VOID (*IdleCancel)(VOID *arg1, ULONG arg2);      // offset: 0x6c (108)
  UCHAR (*IdleIsHalted)(VOID *arg1);               // offset: 0x70 (112)
  UCHAR (*IdleInitiateWake)(VOID *arg1);           // offset: 0x74 (116)
  struct _PROCESSOR_IDLE_PREPARE_INFO PrepareInfo; // offset: 0x78 (120)
  struct _KAFFINITY_EX DeepIdleSnapshot;           // offset: 0xc8 (200)
  struct _PERFINFO_PPM_STATE_SELECTION *Tracing;   // offset: 0xd4 (212)
  struct _PERFINFO_PPM_STATE_SELECTION
      *CoordinatedTracing;                                // offset: 0xd8 (216)
  struct _PPM_SELECTION_MENU ProcessorMenu;               // offset: 0xdc (220)
  struct _PPM_SELECTION_MENU CoordinatedMenu;             // offset: 0xe4 (228)
  struct _PPM_COORDINATED_SELECTION CoordinatedSelection; // offset: 0xec (236)
  struct _PPM_IDLE_STATE State[1];                        // offset: 0xfc (252)
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

// 0xf8 (248) bytes
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
  struct _RTL_BALANCED_NODE QueueNode;  // offset: 0x50 (80)
  UCHAR Inserted : 1;                   // offset: 0x5c (92)
  UCHAR MaxOverQuota : 1;               // offset: 0x5c (92)
  UCHAR MinOverQuota : 1;               // offset: 0x5c (92)
  UCHAR RankBias : 1;                   // offset: 0x5c (92)
  UCHAR SoftCap : 1;                    // offset: 0x5c (92)
  UCHAR Spare1 : 3;                     // offset: 0x5c (92)
  UCHAR Depth;                          // offset: 0x5d (93)
  USHORT ReadySummary;                  // offset: 0x5e (94)
  ULONG Rank;                           // offset: 0x60 (96)
  struct _LIST_ENTRY ReadyListHead[16]; // offset: 0x64 (100)
  struct _RTL_RB_TREE ChildScbQueue;    // offset: 0xe4 (228)
  struct _KSCB *Parent;                 // offset: 0xec (236)
  struct _KSCB *Root;                   // offset: 0xf0 (240)
};

// 0xa8 (168) bytes
struct _KPROCESS {
  struct _DISPATCHER_HEADER Header;               // offset: 0x0 (0)
  struct _LIST_ENTRY ProfileListHead;             // offset: 0x10 (16)
  ULONG DirectoryTableBase;                       // offset: 0x18 (24)
  struct _KGDTENTRY LdtDescriptor;                // offset: 0x1c (28)
  struct _KIDTENTRY Int21Descriptor;              // offset: 0x24 (36)
  struct _LIST_ENTRY ThreadListHead;              // offset: 0x2c (44)
  ULONG ProcessLock;                              // offset: 0x34 (52)
  ULONGLONG DeepFreezeStartTime;                  // offset: 0x38 (56)
  struct _KAFFINITY_EX Affinity;                  // offset: 0x40 (64)
  struct _LIST_ENTRY ReadyListHead;               // offset: 0x4c (76)
  struct _SINGLE_LIST_ENTRY SwapListEntry;        // offset: 0x54 (84)
  volatile struct _KAFFINITY_EX ActiveProcessors; // offset: 0x58 (88)
  union {
    struct {
      LONG AutoAlignment : 1;        // offset: 0x64 (100)
      LONG DisableBoost : 1;         // offset: 0x64 (100)
      LONG DisableQuantum : 1;       // offset: 0x64 (100)
      ULONG DeepFreeze : 1;          // offset: 0x64 (100)
      ULONG TimerVirtualization : 1; // offset: 0x64 (100)
      ULONG CheckStackExtents : 1;   // offset: 0x64 (100)
      ULONG SpareFlags0 : 2;         // offset: 0x64 (100)
      ULONG ActiveGroupsMask : 1;    // offset: 0x64 (100)
      LONG ReservedFlags : 23;       // offset: 0x64 (100)
    };
    volatile LONG ProcessFlags; // offset: 0x64 (100)
  };
  CHAR BasePriority;                          // offset: 0x68 (104)
  CHAR QuantumReset;                          // offset: 0x69 (105)
  UCHAR Visited;                              // offset: 0x6a (106)
  union _KEXECUTE_OPTIONS Flags;              // offset: 0x6b (107)
  ULONG ThreadSeed[1];                        // offset: 0x6c (108)
  USHORT IdealNode[1];                        // offset: 0x70 (112)
  USHORT IdealGlobalNode;                     // offset: 0x72 (114)
  USHORT Spare1;                              // offset: 0x74 (116)
  USHORT IopmOffset;                          // offset: 0x76 (118)
  struct _KSCHEDULING_GROUP *SchedulingGroup; // offset: 0x78 (120)
  union _KSTACK_COUNT volatile StackCount;    // offset: 0x7c (124)
  struct _LIST_ENTRY ProcessListEntry;        // offset: 0x80 (128)
  ULONGLONG CycleTime;                        // offset: 0x88 (136)
  ULONGLONG ContextSwitches;                  // offset: 0x90 (144)
  ULONG FreezeCount;                          // offset: 0x98 (152)
  ULONG KernelTime;                           // offset: 0x9c (156)
  ULONG UserTime;                             // offset: 0xa0 (160)
  VOID *VdmTrapcHandler;                      // offset: 0xa4 (164)
};

// 0x18 (24) bytes
struct _KAPC_STATE {
  struct _LIST_ENTRY ApcListHead[2]; // offset: 0x0 (0)
  struct _KPROCESS *Process;         // offset: 0x10 (16)
  union {
    UCHAR InProgressFlags; // offset: 0x14 (20)
    struct {
      UCHAR KernelApcInProgress : 1;  // offset: 0x14 (20)
      UCHAR SpecialApcInProgress : 1; // offset: 0x14 (20)
    };
  };
  UCHAR KernelApcPending; // offset: 0x15 (21)
  UCHAR UserApcPending;   // offset: 0x16 (22)
};

// 0x1a8 (424) bytes
struct _KTHREAD_COUNTERS {
  ULONGLONG WaitReasonBitMap;                // offset: 0x0 (0)
  struct _THREAD_PERFORMANCE_DATA *UserData; // offset: 0x8 (8)
  ULONG Flags;                               // offset: 0xc (12)
  ULONG ContextSwitches;                     // offset: 0x10 (16)
  ULONGLONG CycleTimeBias;                   // offset: 0x18 (24)
  ULONGLONG HardwareCounters;                // offset: 0x20 (32)
  struct _COUNTER_READING HwCounter[16];     // offset: 0x28 (40)
};

// 0x140 (320) bytes
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
  struct _KDPC *NotificationDpc;     // offset: 0x30 (48)
  struct _LIST_ENTRY ChildList;      // offset: 0x34 (52)
  struct _KSCHEDULING_GROUP *Parent; // offset: 0x3c (60)
  struct _KSCB PerProcessor[1];      // offset: 0x40 (64)
};

// 0x40 (64) bytes
struct _XSAVE_AREA_HEADER {
  ULONGLONG Mask;           // offset: 0x0 (0)
  ULONGLONG CompactionMask; // offset: 0x8 (8)
  ULONGLONG Reserved2[6];   // offset: 0x10 (16)
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
  ULONG Reserved2;          // offset: 0x14 (20)
  VOID *Buffer;             // offset: 0x18 (24)
  ULONG Reserved3;          // offset: 0x1c (28)
};

// 0x20 (32) bytes
struct _XSTATE_SAVE {
  union {
    struct {
      LONGLONG Reserved1;            // offset: 0x0 (0)
      ULONG Reserved2;               // offset: 0x8 (8)
      struct _XSTATE_SAVE *Prev;     // offset: 0xc (12)
      struct _XSAVE_AREA *Reserved3; // offset: 0x10 (16)
      struct _KTHREAD *Thread;       // offset: 0x14 (20)
      VOID *Reserved4;               // offset: 0x18 (24)
      UCHAR Level;                   // offset: 0x1c (28)
    };
    struct _XSTATE_CONTEXT XStateContext; // offset: 0x0 (0)
  };
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
  ULONG Lock;                   // offset: 0x0 (0)
  ULONG Processors;             // offset: 0x4 (4)
  ULONG ActiveProcessors;       // offset: 0x8 (8)
  ULONGLONG LastUpdateTime;     // offset: 0x10 (16)
  ULONGLONG TotalTime;          // offset: 0x18 (24)
  ULONGLONG AccumulatedTime[1]; // offset: 0x20 (32)
};

// 0x400 (1024) bytes
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
struct _KTIMER_EXPIRATION_TRACE {
  ULONGLONG InterruptTime;                 // offset: 0x0 (0)
  union _LARGE_INTEGER PerformanceCounter; // offset: 0x8 (8)
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
  ULONGLONG Xcr0;          // offset: 0x3c (60)
  ULONG ExceptionList;     // offset: 0x44 (68)
  ULONG Reserved[3];       // offset: 0x48 (72)
};

// 0x320 (800) bytes
struct _KPROCESSOR_STATE {
  struct _CONTEXT ContextFrame;                // offset: 0x0 (0)
  struct _KSPECIAL_REGISTERS SpecialRegisters; // offset: 0x2cc (716)
};

// 0xa8 (168) bytes
struct _ARBITER_INSTANCE {
  ULONG Signature;                                   // offset: 0x0 (0)
  struct _KEVENT *MutexEvent;                        // offset: 0x4 (4)
  USHORT *Name;                                      // offset: 0x8 (8)
  USHORT *OrderingName;                              // offset: 0xc (12)
  LONG ResourceType;                                 // offset: 0x10 (16)
  struct _RTL_RANGE_LIST *Allocation;                // offset: 0x14 (20)
  struct _RTL_RANGE_LIST *PossibleAllocation;        // offset: 0x18 (24)
  struct _ARBITER_ORDERING_LIST OrderingList;        // offset: 0x1c (28)
  struct _ARBITER_ORDERING_LIST ReservedList;        // offset: 0x24 (36)
  LONG ReferenceCount;                               // offset: 0x2c (44)
  struct _ARBITER_INTERFACE *Interface;              // offset: 0x30 (48)
  ULONG AllocationStackMaxSize;                      // offset: 0x34 (52)
  struct _ARBITER_ALLOCATION_STATE *AllocationStack; // offset: 0x38 (56)
  LONG (*UnpackRequirement)
  (struct _IO_RESOURCE_DESCRIPTOR *arg1, ULONGLONG *arg2, ULONGLONG *arg3,
   ULONGLONG *arg4, ULONGLONG *arg5); // offset: 0x3c (60)
  LONG (*PackResource)
  (struct _IO_RESOURCE_DESCRIPTOR *arg1, ULONGLONG arg2,
   struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *arg3); // offset: 0x40 (64)
  LONG (*UnpackResource)
  (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *arg1, ULONGLONG *arg2,
   ULONGLONG *arg3); // offset: 0x44 (68)
  LONG (*ScoreRequirement)
  (struct _IO_RESOURCE_DESCRIPTOR *arg1); // offset: 0x48 (72)
  LONG (*TestAllocation)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_TEST_ALLOCATION_PARAMETERS *arg2); // offset: 0x4c (76)
  LONG (*RetestAllocation)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_RETEST_ALLOCATION_PARAMETERS *arg2);     // offset: 0x50 (80)
  LONG (*CommitAllocation)(struct _ARBITER_INSTANCE *arg1); // offset: 0x54 (84)
  LONG (*RollbackAllocation)
  (struct _ARBITER_INSTANCE *arg1); // offset: 0x58 (88)
  LONG (*BootAllocation)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_BOOT_ALLOCATION_PARAMETERS *arg2); // offset: 0x5c (92)
  LONG (*QueryArbitrate)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_QUERY_ARBITRATE_PARAMETERS *arg2); // offset: 0x60 (96)
  LONG (*QueryConflict)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_QUERY_CONFLICT_PARAMETERS *arg2); // offset: 0x64 (100)
  LONG (*AddReserved)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ADD_RESERVED_PARAMETERS *arg2); // offset: 0x68 (104)
  LONG (*StartArbiter)
  (struct _ARBITER_INSTANCE *arg1,
   struct _CM_RESOURCE_LIST *arg2); // offset: 0x6c (108)
  LONG (*PreprocessEntry)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x70 (112)
  LONG (*AllocateEntry)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x74 (116)
  UCHAR (*GetNextAllocationRange)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x78 (120)
  UCHAR (*FindSuitableRange)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x7c (124)
  VOID (*AddAllocation)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x80 (128)
  VOID (*BacktrackAllocation)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x84 (132)
  UCHAR (*OverrideConflict)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x88 (136)
  LONG (*InitializeRangeList)
  (struct _ARBITER_INSTANCE *arg1, ULONG arg2,
   struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *arg3,
   struct _RTL_RANGE_LIST *arg4);         // offset: 0x8c (140)
  UCHAR TransactionInProgress;            // offset: 0x90 (144)
  struct _KEVENT *TransactionEvent;       // offset: 0x94 (148)
  VOID *Extension;                        // offset: 0x98 (152)
  struct _DEVICE_OBJECT *BusDeviceObject; // offset: 0x9c (156)
  VOID *ConflictCallbackContext;          // offset: 0xa0 (160)
  UCHAR (*ConflictCallback)
  (VOID *arg1, struct _RTL_RANGE *arg2); // offset: 0xa4 (164)
};

// 0x28 (40) bytes
struct _PROC_FEEDBACK_COUNTER {
  union {
    VOID (*InstantaneousRead)(ULONG arg1, ULONG *arg2); // offset: 0x0 (0)
    VOID (*DifferentialRead)
    (ULONG arg1, UCHAR arg2, ULONGLONG *arg3,
     ULONGLONG *arg4); // offset: 0x0 (0)
  };
  ULONGLONG LastActualCount;    // offset: 0x8 (8)
  ULONGLONG LastReferenceCount; // offset: 0x10 (16)
  ULONG CachedValue;            // offset: 0x18 (24)
  UCHAR Affinitized;            // offset: 0x20 (32)
  UCHAR Differential;           // offset: 0x21 (33)
  UCHAR Scaling;                // offset: 0x22 (34)
  ULONG Context;                // offset: 0x24 (36)
};

// 0x8 (8) bytes
union _SLIST_HEADER {
  ULONGLONG Alignment; // offset: 0x0 (0)
  struct {
    struct _SINGLE_LIST_ENTRY Next; // offset: 0x0 (0)
    USHORT Depth;                   // offset: 0x4 (4)
  };
  USHORT CpuId; // offset: 0x6 (6)
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

// 0x40 (64) bytes
struct _PF_KERNEL_GLOBALS {
  ULONGLONG AccessBufferAgeThreshold;     // offset: 0x0 (0)
  struct _EX_RUNDOWN_REF AccessBufferRef; // offset: 0x8 (8)
  struct _KEVENT AccessBufferExistsEvent; // offset: 0xc (12)
  ULONG AccessBufferMax;                  // offset: 0x1c (28)
  union _SLIST_HEADER AccessBufferList;   // offset: 0x20 (32)
  LONG StreamSequenceNumber;              // offset: 0x28 (40)
  ULONG Flags;                            // offset: 0x2c (44)
  LONG ScenarioPrefetchCount;             // offset: 0x30 (48)
};

// 0xa8 (168) bytes
struct _VF_TARGET_VERIFIED_DRIVER_DATA {
  struct _VF_SUSPECT_DRIVER_ENTRY *SuspectDriverEntry; // offset: 0x0 (0)
  VOID *WMICallback;                                   // offset: 0x4 (4)
  struct _LIST_ENTRY EtwHandlesListHead;               // offset: 0x8 (8)
  union {
    struct {
      ULONG MissedEtwRegistration : 1; // offset: 0x0 (0)
      ULONG Spare : 31;                // offset: 0x0 (0)
    } Flags;                           // offset: 0x10 (16)
    ULONG Whole;                       // offset: 0x10 (16)

  } u1;                                          // offset: 0x10 (16)
  ULONG Signature;                               // offset: 0x14 (20)
  union _SLIST_HEADER PoolPageHeaders;           // offset: 0x18 (24)
  union _SLIST_HEADER PoolTrackers;              // offset: 0x20 (32)
  volatile ULONG CurrentPagedPoolAllocations;    // offset: 0x28 (40)
  volatile ULONG CurrentNonPagedPoolAllocations; // offset: 0x2c (44)
  ULONG PeakPagedPoolAllocations;                // offset: 0x30 (48)
  ULONG PeakNonPagedPoolAllocations;             // offset: 0x34 (52)
  volatile ULONG PagedBytes;                     // offset: 0x38 (56)
  volatile ULONG NonPagedBytes;                  // offset: 0x3c (60)
  ULONG PeakPagedBytes;                          // offset: 0x40 (64)
  ULONG PeakNonPagedBytes;                       // offset: 0x44 (68)
  ULONG RaiseIrqls;                              // offset: 0x48 (72)
  ULONG AcquireSpinLocks;                        // offset: 0x4c (76)
  ULONG SynchronizeExecutions;                   // offset: 0x50 (80)
  ULONG AllocationsWithNoTag;                    // offset: 0x54 (84)
  ULONG AllocationsFailed;                       // offset: 0x58 (88)
  ULONG AllocationsFailedDeliberately;           // offset: 0x5c (92)
  ULONG LockedBytes;                             // offset: 0x60 (96)
  ULONG PeakLockedBytes;                         // offset: 0x64 (100)
  ULONG MappedLockedBytes;                       // offset: 0x68 (104)
  ULONG PeakMappedLockedBytes;                   // offset: 0x6c (108)
  ULONG MappedIoSpaceBytes;                      // offset: 0x70 (112)
  ULONG PeakMappedIoSpaceBytes;                  // offset: 0x74 (116)
  ULONG PagesForMdlBytes;                        // offset: 0x78 (120)
  ULONG PeakPagesForMdlBytes;                    // offset: 0x7c (124)
  ULONG ContiguousMemoryBytes;                   // offset: 0x80 (128)
  ULONG PeakContiguousMemoryBytes;               // offset: 0x84 (132)
  struct _LIST_ENTRY ContiguousMemoryListHead;   // offset: 0x88 (136)
  volatile ULONG ExecutePoolTypes;               // offset: 0x90 (144)
  volatile ULONG ExecutePageProtections;         // offset: 0x94 (148)
  volatile ULONG ExecutePageMappings;            // offset: 0x98 (152)
  volatile ULONG ExecuteWriteSections;           // offset: 0x9c (156)
  volatile ULONG SectionAlignmentFailures;       // offset: 0xa0 (160)
};

// 0x1c (28) bytes
struct _VF_TARGET_DRIVER {
  struct _VF_AVL_TREE_NODE TreeNode; // offset: 0x0 (0)
  union {
    struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS
        AllSharedExportThunks; // offset: 0x8 (8)
    struct {
      ULONG SnapSharedExportsFailed : 1; // offset: 0x0 (0)
      ULONG Spare : 31;                  // offset: 0x0 (0)
    } Flags;                             // offset: 0x8 (8)

  } u1;                                                 // offset: 0x8 (8)
  struct _VF_TARGET_VERIFIED_DRIVER_DATA *VerifiedData; // offset: 0x18 (24)
};

// 0x18 (24) bytes
struct _CACHED_KSTACK_LIST {
  union _SLIST_HEADER SListHead; // offset: 0x0 (0)
  LONG MinimumFree;              // offset: 0x8 (8)
  ULONG Misses;                  // offset: 0xc (12)
  ULONG MissesLast;              // offset: 0x10 (16)
  ULONG AllStacksInUse;          // offset: 0x14 (20)
};

// 0xb0 (176) bytes
struct _MI_SYSTEM_NODE_INFORMATION {
  union _SLIST_HEADER PagedPoolSListHead;           // offset: 0x0 (0)
  union _SLIST_HEADER NonPagedPoolSListHead[3];     // offset: 0x8 (8)
  union _SLIST_HEADER NonPagedPoolSListHeadNx[3];   // offset: 0x20 (32)
  struct _CACHED_KSTACK_LIST CachedKernelStacks[2]; // offset: 0x38 (56)
  ULONG NonPagedPoolLowestPage;                     // offset: 0x68 (104)
  ULONG NonPagedPoolHighestPage;                    // offset: 0x6c (108)
  ULONG AllocatedNonPagedPool;                      // offset: 0x70 (112)
  ULONG PartialLargePoolRegions;                    // offset: 0x74 (116)
  ULONG PagesInPartialLargePoolRegions;             // offset: 0x78 (120)
  ULONG CachedNonPagedPoolCount;                    // offset: 0x7c (124)
  ULONG NonPagedPoolSpinLock;                       // offset: 0x80 (128)
  struct _MMPFN *CachedNonPagedPool;                // offset: 0x84 (132)
  VOID *NonPagedPoolFirstVa;                        // offset: 0x88 (136)
  VOID *NonPagedPoolLastVa;                         // offset: 0x8c (140)
  struct _RTL_BITMAP NonPagedBitMap[3];             // offset: 0x90 (144)
  ULONG NonPagedHint[2];                            // offset: 0xa8 (168)
};

// 0x78 (120) bytes
struct _MI_HARDWARE_STATE {
  ULONG NodeMask;                                            // offset: 0x0 (0)
  USHORT *NodeGraph;                                         // offset: 0x4 (4)
  struct _MI_SYSTEM_NODE_INFORMATION *SystemNodeInformation; // offset: 0x8 (8)
  ULONG NumaLastRangeIndex;                                  // offset: 0xc (12)
  struct _HAL_NODE_RANGE *NumaMemoryRanges;               // offset: 0x10 (16)
  UCHAR NumaTableCaptured;                                // offset: 0x14 (20)
  UCHAR NodeShift;                                        // offset: 0x15 (21)
  struct _HAL_CHANNEL_MEMORY_RANGES *ChannelMemoryRanges; // offset: 0x18 (24)
  UCHAR ChannelShift;                                     // offset: 0x1c (28)
  ULONG SecondLevelCacheSize;                             // offset: 0x20 (32)
  ULONG FirstLevelCacheSize;                              // offset: 0x24 (36)
  ULONG PhysicalAddressBits;                              // offset: 0x28 (40)
  UCHAR WriteCombiningPtes;                               // offset: 0x2c (44)
  UCHAR AllMainMemoryMustBeCached;                        // offset: 0x2d (45)
  ULONG TotalPagesAllowed;                                // offset: 0x30 (48)
  ULONG SecondaryColorMask;                               // offset: 0x34 (52)
  ULONG SecondaryColors;                                  // offset: 0x38 (56)
  ULONG FlushTbForAttributeChange;                        // offset: 0x3c (60)
  ULONG FlushCacheForAttributeChange;                     // offset: 0x40 (64)
  ULONG FlushCacheForPageAttributeChange;                 // offset: 0x44 (68)
  ULONG CacheFlushPromoteThreshold;                       // offset: 0x48 (72)
  ULONG FlushTbThreshold;                                 // offset: 0x4c (76)
  struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];          // offset: 0x50 (80)
  ULONG HighestPossiblePhysicalPage;                      // offset: 0x70 (112)
};

// 0x38 (56) bytes
struct _MI_PAGING_IO_STATE {
  struct _RTL_AVL_TREE PageFileHead;             // offset: 0x0 (0)
  volatile LONG PageFileHeadSpinLock;            // offset: 0x4 (4)
  LONG PrefetchSeekThreshold;                    // offset: 0x8 (8)
  union _SLIST_HEADER InPageSupportSListHead[2]; // offset: 0x10 (16)
  UCHAR InPageSupportSListMinimum[2];            // offset: 0x20 (32)
  ULONG InPageSinglePages;                       // offset: 0x24 (36)
  volatile LONG DelayPageFaults;                 // offset: 0x28 (40)
  ULONG FileCompressionBoundary;                 // offset: 0x2c (44)
  UCHAR MdlsAdjusted;                            // offset: 0x30 (48)
};

// 0x70 (112) bytes
struct _MI_PROCESS_STATE {
  ULONG ColorSeed;                             // offset: 0x0 (0)
  struct _KEVENT CloneDereferenceEvent;        // offset: 0x4 (4)
  union _SLIST_HEADER CloneProtosSListHead;    // offset: 0x18 (24)
  VOID *SystemDllBase;                         // offset: 0x20 (32)
  LONG RotatingUniprocessorNumber;             // offset: 0x24 (36)
  union _LARGE_INTEGER CriticalSectionTimeout; // offset: 0x28 (40)
  struct _LIST_ENTRY ProcessList;              // offset: 0x30 (48)
  struct _MMPTE *SharedUserDataPte;            // offset: 0x38 (56)
  ULONG FreePaeEntries;                        // offset: 0x3c (60)
  struct _PAE_ENTRY FirstFreePae;              // offset: 0x40 (64)
  volatile LONG AllocatedPaePages;             // offset: 0x60 (96)
  ULONG PaeLock;                               // offset: 0x64 (100)
  union _SLIST_HEADER PaeEntrySList;           // offset: 0x68 (104)
};

// 0x6c0 (1728) bytes
struct _MI_PARTITION_PAGE_LISTS {
  struct _MMPFNLIST *FreePagesByColor[2];                // offset: 0x0 (0)
  union _SLIST_HEADER *FreePageSlist[2];                 // offset: 0x8 (8)
  struct _MMPFNLIST ZeroedPageListHead;                  // offset: 0x40 (64)
  struct _MMPFNLIST FreePageListHead;                    // offset: 0x80 (128)
  struct _MMPFNLIST StandbyPageListHead;                 // offset: 0xc0 (192)
  struct _MMPFNLIST StandbyPageListByPriority[8];        // offset: 0x100 (256)
  struct _MMPFNLIST ModifiedPageListNoReservation;       // offset: 0x1c0 (448)
  struct _MMPFNLIST ModifiedPageListByReservation[16];   // offset: 0x200 (512)
  struct _MMPFNLIST MappedPageListHead[16];              // offset: 0x340 (832)
  struct _MMPFNLIST BadPageListHead;                     // offset: 0x480 (1152)
  struct _MMPFNLIST *PageLocationList[8];                // offset: 0x494 (1172)
  volatile ULONG StandbyRepurposedByPriority[8];         // offset: 0x4b4 (1204)
  struct _KEVENT MappedPageListHeadEvent[16];            // offset: 0x4d4 (1236)
  struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4]; // offset: 0x5d4 (1492)
  ULONG DecayHand;                                       // offset: 0x5e4 (1508)
  ULONGLONG LastDecayHandUpdateTime;                     // offset: 0x5e8 (1512)
  struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;      // offset: 0x5f0 (1520)
  ULONG AvailableEventsLock;                             // offset: 0x640 (1600)
  struct _MI_AVAILABLE_PAGE_WAIT_STATES
      AvailablePageWaitStates[2];                       // offset: 0x644 (1604)
  ULONG LowMemoryThreshold;                             // offset: 0x66c (1644)
  ULONG HighMemoryThreshold;                            // offset: 0x670 (1648)
  volatile ULONG TransitionPrivatePages;                // offset: 0x680 (1664)
  UCHAR RebuildLargePagesInitialized;                   // offset: 0x684 (1668)
  struct _MI_REBUILD_LARGE_PAGES RebuildLargePagesItem; // offset: 0x688 (1672)
};

// 0x50 (80) bytes
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
  struct _ETHREAD *EvictionThread;               // offset: 0x1c (28)
  struct _KEVENT EvictEvent;                     // offset: 0x20 (32)
  struct _KEVENT EvictFlushCompleteEvent;        // offset: 0x30 (48)
  union _SLIST_HEADER WriteSupportSListHead;     // offset: 0x40 (64)
  volatile LONG EvictFlushLock;                  // offset: 0x48 (72)
  struct _RTL_BITMAP *ModifiedWriteFailedBitmap; // offset: 0x4c (76)
};

// 0x80 (128) bytes
struct _GENERAL_LOOKASIDE {
  union {
    union _SLIST_HEADER ListHead;             // offset: 0x0 (0)
    struct _SINGLE_LIST_ENTRY SingleListHead; // offset: 0x0 (0)
  };
  USHORT Depth;         // offset: 0x8 (8)
  USHORT MaximumDepth;  // offset: 0xa (10)
  ULONG TotalAllocates; // offset: 0xc (12)
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
  union {
    VOID *(*AllocateEx)(enum _POOL_TYPE arg1, ULONG arg2, ULONG arg3,
                        struct _LOOKASIDE_LIST_EX *arg4); // offset: 0x28 (40)
    VOID *(*Allocate)(enum _POOL_TYPE arg1, ULONG arg2,
                      ULONG arg3); // offset: 0x28 (40)
  };
  union {
    VOID (*FreeEx)
    (VOID *arg1, struct _LOOKASIDE_LIST_EX *arg2); // offset: 0x2c (44)
    VOID (*Free)(VOID *arg1);                      // offset: 0x2c (44)
  };
  struct _LIST_ENTRY ListEntry; // offset: 0x30 (48)
  ULONG LastTotalAllocates;     // offset: 0x38 (56)
  union {
    ULONG LastAllocateMisses; // offset: 0x3c (60)
    ULONG LastAllocateHits;   // offset: 0x3c (60)
  };
  ULONG Future[2]; // offset: 0x40 (64)
};

// 0x2000 (8192) bytes
struct _MM_SESSION_SPACE {
  volatile LONG ReferenceCount; // offset: 0x0 (0)
  union {
    ULONG LongFlags;                      // offset: 0x4 (4)
    struct _MM_SESSION_SPACE_FLAGS Flags; // offset: 0x4 (4)

  } u;                                           // offset: 0x4 (4)
  ULONG SessionId;                               // offset: 0x8 (8)
  volatile LONG ProcessReferenceToSession;       // offset: 0xc (12)
  struct _LIST_ENTRY ProcessList;                // offset: 0x10 (16)
  ULONG SessionPageDirectoryIndex;               // offset: 0x18 (24)
  volatile ULONG NonPagablePages;                // offset: 0x1c (28)
  volatile ULONG CommittedPages;                 // offset: 0x20 (32)
  VOID *PagedPoolStart;                          // offset: 0x24 (36)
  VOID *PagedPoolEnd;                            // offset: 0x28 (40)
  VOID *SessionObject;                           // offset: 0x2c (44)
  VOID *SessionObjectHandle;                     // offset: 0x30 (48)
  ULONG SessionPoolAllocationFailures[4];        // offset: 0x34 (52)
  struct _RTL_AVL_TREE ImageTree;                // offset: 0x44 (68)
  ULONG LocaleId;                                // offset: 0x48 (72)
  ULONG AttachCount;                             // offset: 0x4c (76)
  struct _KGATE AttachGate;                      // offset: 0x50 (80)
  struct _LIST_ENTRY WsListEntry;                // offset: 0x60 (96)
  struct _GENERAL_LOOKASIDE Lookaside[24];       // offset: 0x80 (128)
  struct _MMSESSION Session;                     // offset: 0xc80 (3200)
  struct _MM_PAGED_POOL_INFO PagedPoolInfo;      // offset: 0xc94 (3220)
  struct _MMSUPPORT Vm;                          // offset: 0xcb0 (3248)
  struct _MMWSLE *Wsle;                          // offset: 0xd30 (3376)
  struct _MI_SESSION_DRIVER_UNLOAD DriverUnload; // offset: 0xd34 (3380)
  struct _POOL_DESCRIPTOR PagedPool;             // offset: 0xd40 (3392)
  struct _MMPTE *PageTables;                     // offset: 0x1e80 (7808)
  ULONG PagedPoolBitBuffer[32];                  // offset: 0x1e84 (7812)
  struct _MI_SPECIAL_POOL SpecialPool;           // offset: 0x1f08 (7944)
  struct _EX_PUSH_LOCK SessionPteLock;           // offset: 0x1f50 (8016)
  LONG PoolBigEntriesInUse;                      // offset: 0x1f54 (8020)
  ULONG PagedPoolPdeCount;                       // offset: 0x1f58 (8024)
  ULONG SpecialPoolPdeCount;                     // offset: 0x1f5c (8028)
  ULONG DynamicSessionPdeCount;                  // offset: 0x1f60 (8032)
  struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;      // offset: 0x1f64 (8036)
  VOID *PoolTrackTableExpansion;                 // offset: 0x1f98 (8088)
  ULONG PoolTrackTableExpansionSize;             // offset: 0x1f9c (8092)
  VOID *PoolTrackBigPages;                       // offset: 0x1fa0 (8096)
  ULONG PoolTrackBigPagesSize;                   // offset: 0x1fa4 (8100)
  enum _IO_SESSION_STATE IoState;                // offset: 0x1fa8 (8104)
  ULONG IoStateSequence;                         // offset: 0x1fac (8108)
  struct _KEVENT IoNotificationEvent;            // offset: 0x1fb0 (8112)
  struct _ESILO *ServerSilo;                     // offset: 0x1fc0 (8128)
  ULONGLONG CreateTime;                          // offset: 0x1fc8 (8136)
};

// 0xc0 (192) bytes
struct _PAGED_LOOKASIDE_LIST {
  struct _GENERAL_LOOKASIDE L;                     // offset: 0x0 (0)
  struct _FAST_MUTEX Lock__ObsoleteButDoNotDelete; // offset: 0x80 (128)
};

// 0xc0 (192) bytes
struct _NPAGED_LOOKASIDE_LIST {
  struct _GENERAL_LOOKASIDE L;        // offset: 0x0 (0)
  ULONG Lock__ObsoleteButDoNotDelete; // offset: 0x80 (128)
};

// 0x180 (384) bytes
struct _MI_SYSTEM_PTE_STATE {
  union _SLIST_HEADER DeadPteTrackerSListHead;       // offset: 0x0 (0)
  ULONG PteTrackerLock;                              // offset: 0x8 (8)
  struct _NPAGED_LOOKASIDE_LIST MdlTrackerLookaside; // offset: 0x40 (64)
  struct _RTL_BITMAP PteTrackingBitmap;              // offset: 0x100 (256)
  struct _MI_CACHED_PTES *CachedPteHeads;            // offset: 0x108 (264)
  struct _MI_SYSTEM_PTE_TYPE SystemViewPteInfo;      // offset: 0x10c (268)
  UCHAR KernelStackPages;                            // offset: 0x140 (320)
  union _SLIST_HEADER QueuedStacks;                  // offset: 0x148 (328)
  ULONG StackGrowthFailures;                         // offset: 0x150 (336)
  UCHAR TrackPtesAborted;                            // offset: 0x154 (340)
  UCHAR AdjustCounter;                               // offset: 0x155 (341)
  struct _MI_QUEUED_DEADSTACK_WORKITEM
      QueuedStacksWorkItem; // offset: 0x158 (344)
};

// 0x8 (8) bytes
struct _PP_LOOKASIDE_LIST {
  struct _GENERAL_LOOKASIDE *P; // offset: 0x0 (0)
  struct _GENERAL_LOOKASIDE *L; // offset: 0x4 (4)
};

// 0x48 (72) bytes
struct _GENERAL_LOOKASIDE_POOL {
  union {
    union _SLIST_HEADER ListHead;             // offset: 0x0 (0)
    struct _SINGLE_LIST_ENTRY SingleListHead; // offset: 0x0 (0)
  };
  USHORT Depth;         // offset: 0x8 (8)
  USHORT MaximumDepth;  // offset: 0xa (10)
  ULONG TotalAllocates; // offset: 0xc (12)
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
  union {
    VOID *(*AllocateEx)(enum _POOL_TYPE arg1, ULONG arg2, ULONG arg3,
                        struct _LOOKASIDE_LIST_EX *arg4); // offset: 0x28 (40)
    VOID *(*Allocate)(enum _POOL_TYPE arg1, ULONG arg2,
                      ULONG arg3); // offset: 0x28 (40)
  };
  union {
    VOID (*FreeEx)
    (VOID *arg1, struct _LOOKASIDE_LIST_EX *arg2); // offset: 0x2c (44)
    VOID (*Free)(VOID *arg1);                      // offset: 0x2c (44)
  };
  struct _LIST_ENTRY ListEntry; // offset: 0x30 (48)
  ULONG LastTotalAllocates;     // offset: 0x38 (56)
  union {
    ULONG LastAllocateMisses; // offset: 0x3c (60)
    ULONG LastAllocateHits;   // offset: 0x3c (60)
  };
  ULONG Future[2]; // offset: 0x40 (64)
};

// 0x48 (72) bytes
struct _LOOKASIDE_LIST_EX {
  struct _GENERAL_LOOKASIDE_POOL L; // offset: 0x0 (0)
};

// 0x70 (112) bytes
struct _POP_PER_PROCESSOR_CONTEXT {
  UCHAR *UncompressedData;              // offset: 0x0 (0)
  VOID *MappingVa;                      // offset: 0x4 (4)
  VOID *XpressEncodeWorkspace;          // offset: 0x8 (8)
  UCHAR *CompressedDataBuffer;          // offset: 0xc (12)
  ULONGLONG CopyTicks;                  // offset: 0x10 (16)
  ULONGLONG CompressTicks;              // offset: 0x18 (24)
  ULONGLONG BytesCopied;                // offset: 0x20 (32)
  ULONGLONG PagesProcessed;             // offset: 0x28 (40)
  ULONGLONG DecompressTicks;            // offset: 0x30 (48)
  ULONGLONG ResumeCopyTicks;            // offset: 0x38 (56)
  ULONGLONG SharedBufferTicks;          // offset: 0x40 (64)
  ULONGLONG DecompressTicksByMethod[2]; // offset: 0x48 (72)
  ULONGLONG DecompressSizeByMethod[2];  // offset: 0x58 (88)
  ULONG CompressCount;                  // offset: 0x68 (104)
  ULONG HuffCompressCount;              // offset: 0x6c (108)
};

// 0x140 (320) bytes
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
  struct _RTL_BITMAP BootPhaseMap;                     // offset: 0x28 (40)
  struct _LIST_ENTRY ClonedRanges;                     // offset: 0x30 (48)
  ULONG ClonedRangeCount;                              // offset: 0x38 (56)
  ULONGLONG ClonedPageCount;                           // offset: 0x40 (64)
  struct _RTL_BITMAP *CurrentMap;                      // offset: 0x48 (72)
  struct _LIST_ENTRY *NextCloneRange;                  // offset: 0x4c (76)
  ULONG NextPreserve;                                  // offset: 0x50 (80)
  struct _MDL *LoaderMdl;                              // offset: 0x54 (84)
  struct _MDL *AllocatedMdl;                           // offset: 0x58 (88)
  ULONGLONG PagesOut;                                  // offset: 0x60 (96)
  VOID *IoPages;                                       // offset: 0x68 (104)
  ULONG IoPagesCount;                                  // offset: 0x6c (108)
  VOID *CurrentMcb;                                    // offset: 0x70 (112)
  struct _DUMP_STACK_CONTEXT *DumpStack;               // offset: 0x74 (116)
  struct _KPROCESSOR_STATE *WakeState;                 // offset: 0x78 (120)
  ULONG IoProgress;                                    // offset: 0x7c (124)
  LONG Status;                                         // offset: 0x80 (128)
  ULONG GraphicsProc;                                  // offset: 0x84 (132)
  struct PO_MEMORY_IMAGE *MemoryImage;                 // offset: 0x88 (136)
  ULONG *PerformanceStats;                             // offset: 0x8c (140)
  struct _MDL *BootLoaderLogMdl;                       // offset: 0x90 (144)
  ULONG SiLogOffset;                                   // offset: 0x94 (148)
  struct _MDL *FirmwareRuntimeInformationMdl;          // offset: 0x98 (152)
  VOID *FirmwareRuntimeInformationVa;                  // offset: 0x9c (156)
  VOID *ResumeContext;                                 // offset: 0xa0 (160)
  ULONG ResumeContextPages;                            // offset: 0xa4 (164)
  ULONG ProcessorCount;                                // offset: 0xa8 (168)
  struct _POP_PER_PROCESSOR_CONTEXT *ProcessorContext; // offset: 0xac (172)
  CHAR *ProdConsBuffer;                                // offset: 0xb0 (176)
  ULONG ProdConsSize;                                  // offset: 0xb4 (180)
  ULONG MaxDataPages;                                  // offset: 0xb8 (184)
  VOID *ExtraBuffer;                                   // offset: 0xbc (188)
  ULONG ExtraBufferSize;                               // offset: 0xc0 (192)
  VOID *ExtraMapVa;                                    // offset: 0xc4 (196)
  ULONG BitlockerKeyPFN;                               // offset: 0xc8 (200)
  struct _POP_IO_INFO IoInfo;                          // offset: 0xd0 (208)
  USHORT *IoChecksums;                                 // offset: 0x130 (304)
  ULONG IoChecksumsSize;                               // offset: 0x134 (308)
  ULONG HardwareConfigurationSignature;                // offset: 0x138 (312)
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

// 0x24 (36) bytes
struct _ETW_FILTER_HEADER {
  LONG FilterFlags;                                   // offset: 0x0 (0)
  struct _ETW_FILTER_PID *PidFilter;                  // offset: 0x4 (4)
  struct _ETW_FILTER_STRING_TOKEN *ExeFilter;         // offset: 0x8 (8)
  struct _ETW_FILTER_STRING_TOKEN *PkgIdFilter;       // offset: 0xc (12)
  struct _ETW_FILTER_STRING_TOKEN *PkgAppIdFilter;    // offset: 0x10 (16)
  struct _ETW_PERFECT_HASH_FUNCTION *StackWalkFilter; // offset: 0x14 (20)
  struct _ETW_PERFECT_HASH_FUNCTION *EventIdFilter;   // offset: 0x18 (24)
  struct _ETW_PAYLOAD_FILTER *PayloadFilter;          // offset: 0x1c (28)
  struct _EVENT_FILTER_HEADER *ProviderSideFilter;    // offset: 0x20 (32)
};

// 0x160 (352) bytes
struct _ETW_GUID_ENTRY {
  struct _LIST_ENTRY GuidList;    // offset: 0x0 (0)
  volatile LONG RefCount;         // offset: 0x8 (8)
  struct _GUID Guid;              // offset: 0xc (12)
  struct _LIST_ENTRY RegListHead; // offset: 0x1c (28)
  VOID *SecurityDescriptor;       // offset: 0x24 (36)
  union {
    struct _ETW_LAST_ENABLE_INFO LastEnable; // offset: 0x28 (40)
    ULONGLONG MatchId;                       // offset: 0x28 (40)
  };
  struct _TRACE_ENABLE_INFO ProviderEnableInfo; // offset: 0x38 (56)
  struct _TRACE_ENABLE_INFO EnableInfo[8];      // offset: 0x58 (88)
  struct _ETW_FILTER_HEADER *FilterData;        // offset: 0x158 (344)
  struct _ESILO *ServerSilo;                    // offset: 0x15c (348)
};

// 0x190 (400) bytes
struct _ETW_SILODRIVERSTATE {
  ULONG EtwpSecurityProviderPID;                        // offset: 0x0 (0)
  struct _ETW_GUID_ENTRY EtwpSecurityProviderGuidEntry; // offset: 0x8 (8)
  ULONG AuditLoggerId;                                  // offset: 0x168 (360)
  ULONGLONG EtwPsProvRegHandle;                         // offset: 0x170 (368)
  USHORT EtwpSecurityLoggers[8];                        // offset: 0x178 (376)
  UCHAR EtwpSecurityProviderEnableMask;                 // offset: 0x188 (392)
  UCHAR EtwpShutdownInProgress;                         // offset: 0x189 (393)
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

// 0x88 (136) bytes
struct _PROC_FEEDBACK {
  ULONG Lock;                                 // offset: 0x0 (0)
  ULONGLONG CyclesLast;                       // offset: 0x8 (8)
  ULONGLONG CyclesActive;                     // offset: 0x10 (16)
  struct _PROC_FEEDBACK_COUNTER *Counters[2]; // offset: 0x18 (24)
  ULONGLONG LastUpdateTime;                   // offset: 0x20 (32)
  ULONGLONG UnscaledTime;                     // offset: 0x28 (40)
  volatile LONGLONG UnaccountedTime;          // offset: 0x30 (48)
  ULONGLONG ScaledTime[2];                    // offset: 0x38 (56)
  ULONGLONG UnaccountedKernelTime;            // offset: 0x48 (72)
  ULONGLONG PerformanceScaledKernelTime;      // offset: 0x50 (80)
  ULONG UserTimeLast;                         // offset: 0x58 (88)
  ULONG KernelTimeLast;                       // offset: 0x5c (92)
  ULONGLONG IdleGenerationNumberLast;         // offset: 0x60 (96)
  ULONGLONG HvActiveTimeLast;                 // offset: 0x68 (104)
  ULONGLONG StallCyclesLast;                  // offset: 0x70 (112)
  ULONGLONG StallTime;                        // offset: 0x78 (120)
  UCHAR KernelTimesIndex;                     // offset: 0x80 (128)
};

// 0x180 (384) bytes
struct _PROCESSOR_POWER_STATE {
  struct _PPM_IDLE_STATES *IdleStates;          // offset: 0x0 (0)
  struct _PROC_IDLE_ACCOUNTING *IdleAccounting; // offset: 0x4 (4)
  ULONGLONG IdleTimeLast;                       // offset: 0x8 (8)
  ULONGLONG IdleTimeTotal;                      // offset: 0x10 (16)
  volatile ULONGLONG IdleTimeEntry;             // offset: 0x18 (24)
  ULONGLONG IdleTimeExpiration;                 // offset: 0x20 (32)
  UCHAR NonInterruptibleTransition;             // offset: 0x28 (40)
  UCHAR PepWokenTransition;                     // offset: 0x29 (41)
  UCHAR Class;                                  // offset: 0x2a (42)
  ULONG TargetIdleState;                        // offset: 0x2c (44)
  struct _PROC_IDLE_POLICY IdlePolicy;          // offset: 0x30 (48)
  union _PPM_IDLE_SYNCHRONIZATION_STATE volatile Synchronization; // offset:
                                                                  // 0x38 (56)
  struct _PROC_FEEDBACK PerfFeedback;     // offset: 0x40 (64)
  enum _PROC_HYPERVISOR_STATE Hypervisor; // offset: 0xc8 (200)
  ULONG LastSysTime;                      // offset: 0xcc (204)
  ULONG WmiDispatchPtr;                   // offset: 0xd0 (208)
  LONG WmiInterfaceEnabled;               // offset: 0xd4 (212)
  struct _PPM_FFH_THROTTLE_STATE_INFO
      FFHThrottleStateInfo;                        // offset: 0xd8 (216)
  struct _KDPC PerfActionDpc;                      // offset: 0xf8 (248)
  volatile LONG PerfActionMask;                    // offset: 0x118 (280)
  struct _PROC_IDLE_SNAP HvIdleCheck;              // offset: 0x120 (288)
  struct _PROC_PERF_CHECK *PerfCheck;              // offset: 0x130 (304)
  struct _PROC_PERF_DOMAIN *Domain;                // offset: 0x134 (308)
  struct _PROC_PERF_CONSTRAINT *PerfConstraint;    // offset: 0x138 (312)
  struct _PPM_CONCURRENCY_ACCOUNTING *Concurrency; // offset: 0x13c (316)
  struct _PROC_PERF_LOAD *Load;                    // offset: 0x140 (320)
  struct _PROC_PERF_HISTORY *PerfHistory;          // offset: 0x144 (324)
  UCHAR GuaranteedPerformancePercent;              // offset: 0x148 (328)
  UCHAR HvTargetState;                             // offset: 0x149 (329)
  UCHAR Parked;                                    // offset: 0x14a (330)
  ULONG LatestPerformancePercent;                  // offset: 0x14c (332)
  ULONG AveragePerformancePercent;                 // offset: 0x150 (336)
  ULONG LatestAffinitizedPercent;                  // offset: 0x154 (340)
  ULONG RelativePerformance;                       // offset: 0x158 (344)
  ULONG Utility;                                   // offset: 0x15c (348)
  ULONG AffinitizedUtility;                        // offset: 0x160 (352)
  union {
    ULONGLONG SnapTimeLast;   // offset: 0x168 (360)
    ULONGLONG EnergyConsumed; // offset: 0x168 (360)
  };
  ULONGLONG ActiveTime; // offset: 0x170 (368)
  ULONGLONG TotalTime;  // offset: 0x178 (376)
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

// 0x2f8 (760) bytes
struct _EJOB {
  struct _KEVENT Event;                                  // offset: 0x0 (0)
  struct _LIST_ENTRY JobLinks;                           // offset: 0x10 (16)
  struct _LIST_ENTRY ProcessListHead;                    // offset: 0x18 (24)
  struct _ERESOURCE JobLock;                             // offset: 0x20 (32)
  union _LARGE_INTEGER TotalUserTime;                    // offset: 0x58 (88)
  union _LARGE_INTEGER TotalKernelTime;                  // offset: 0x60 (96)
  union _LARGE_INTEGER TotalCycleTime;                   // offset: 0x68 (104)
  union _LARGE_INTEGER ThisPeriodTotalUserTime;          // offset: 0x70 (112)
  union _LARGE_INTEGER ThisPeriodTotalKernelTime;        // offset: 0x78 (120)
  ULONGLONG TotalContextSwitches;                        // offset: 0x80 (128)
  ULONG TotalPageFaultCount;                             // offset: 0x88 (136)
  ULONG TotalProcesses;                                  // offset: 0x8c (140)
  ULONG ActiveProcesses;                                 // offset: 0x90 (144)
  ULONG TotalTerminatedProcesses;                        // offset: 0x94 (148)
  union _LARGE_INTEGER PerProcessUserTimeLimit;          // offset: 0x98 (152)
  union _LARGE_INTEGER PerJobUserTimeLimit;              // offset: 0xa0 (160)
  ULONG MinimumWorkingSetSize;                           // offset: 0xa8 (168)
  ULONG MaximumWorkingSetSize;                           // offset: 0xac (172)
  ULONG LimitFlags;                                      // offset: 0xb0 (176)
  ULONG ActiveProcessLimit;                              // offset: 0xb4 (180)
  struct _KAFFINITY_EX Affinity;                         // offset: 0xb8 (184)
  struct _JOB_ACCESS_STATE *AccessState;                 // offset: 0xc4 (196)
  VOID *AccessStateQuotaReference;                       // offset: 0xc8 (200)
  ULONG UIRestrictionsClass;                             // offset: 0xcc (204)
  ULONG EndOfJobTimeAction;                              // offset: 0xd0 (208)
  VOID *CompletionPort;                                  // offset: 0xd4 (212)
  VOID *CompletionKey;                                   // offset: 0xd8 (216)
  ULONGLONG CompletionCount;                             // offset: 0xe0 (224)
  ULONG SessionId;                                       // offset: 0xe8 (232)
  ULONG SchedulingClass;                                 // offset: 0xec (236)
  ULONGLONG ReadOperationCount;                          // offset: 0xf0 (240)
  ULONGLONG WriteOperationCount;                         // offset: 0xf8 (248)
  ULONGLONG OtherOperationCount;                         // offset: 0x100 (256)
  ULONGLONG ReadTransferCount;                           // offset: 0x108 (264)
  ULONGLONG WriteTransferCount;                          // offset: 0x110 (272)
  ULONGLONG OtherTransferCount;                          // offset: 0x118 (280)
  struct _PROCESS_DISK_COUNTERS DiskIoInfo;              // offset: 0x120 (288)
  ULONG ProcessMemoryLimit;                              // offset: 0x148 (328)
  ULONG JobMemoryLimit;                                  // offset: 0x14c (332)
  ULONG JobTotalMemoryLimit;                             // offset: 0x150 (336)
  ULONG PeakProcessMemoryUsed;                           // offset: 0x154 (340)
  ULONG PeakJobMemoryUsed;                               // offset: 0x158 (344)
  struct _KAFFINITY_EX EffectiveAffinity;                // offset: 0x15c (348)
  union _LARGE_INTEGER EffectivePerProcessUserTimeLimit; // offset: 0x168 (360)
  ULONG EffectiveMinimumWorkingSetSize;                  // offset: 0x170 (368)
  ULONG EffectiveMaximumWorkingSetSize;                  // offset: 0x174 (372)
  ULONG EffectiveProcessMemoryLimit;                     // offset: 0x178 (376)
  struct _EJOB *EffectiveProcessMemoryLimitJob;          // offset: 0x17c (380)
  struct _EJOB *EffectivePerProcessUserTimeLimitJob;     // offset: 0x180 (384)
  struct _EJOB *EffectiveDiskIoRateLimitJob;             // offset: 0x184 (388)
  struct _EJOB *EffectiveNetIoRateLimitJob;              // offset: 0x188 (392)
  struct _EJOB *EffectiveHeapAttributionJob;             // offset: 0x18c (396)
  ULONG EffectiveLimitFlags;                             // offset: 0x190 (400)
  ULONG EffectiveSchedulingClass;                        // offset: 0x194 (404)
  ULONG EffectiveFreezeCount;                            // offset: 0x198 (408)
  ULONG EffectiveBackgroundCount;                        // offset: 0x19c (412)
  ULONG EffectiveSwapCount;                              // offset: 0x1a0 (416)
  ULONG EffectiveNotificationLimitCount;                 // offset: 0x1a4 (420)
  UCHAR EffectivePriorityClass;                          // offset: 0x1a8 (424)
  UCHAR PriorityClass;                                   // offset: 0x1a9 (425)
  UCHAR NestingDepth;                                    // offset: 0x1aa (426)
  UCHAR Reserved1[1];                                    // offset: 0x1ab (427)
  ULONG CompletionFilter;                                // offset: 0x1ac (428)
  union {
    struct _WNF_STATE_NAME WakeChannel;   // offset: 0x1b0 (432)
    struct _PS_WAKE_INFORMATION WakeInfo; // offset: 0x1b0 (432)
  };
  struct _JOBOBJECT_WAKE_FILTER WakeFilter;               // offset: 0x1e8 (488)
  ULONG LowEdgeLatchFilter;                               // offset: 0x1f0 (496)
  ULONG OwnedHighEdgeFilters;                             // offset: 0x1f4 (500)
  struct _EJOB *NotificationLink;                         // offset: 0x1f8 (504)
  ULONGLONG CurrentJobMemoryUsed;                         // offset: 0x200 (512)
  struct _JOB_NOTIFICATION_INFORMATION *NotificationInfo; // offset: 0x208 (520)
  VOID *NotificationInfoQuotaReference;                   // offset: 0x20c (524)
  struct _IO_MINI_COMPLETION_PACKET_USER
      *NotificationPacket;                      // offset: 0x210 (528)
  struct _JOB_CPU_RATE_CONTROL *CpuRateControl; // offset: 0x214 (532)
  VOID *EffectiveSchedulingGroup;               // offset: 0x218 (536)
  ULONGLONG ReadyTime;                          // offset: 0x220 (544)
  struct _EX_PUSH_LOCK MemoryLimitsLock;        // offset: 0x228 (552)
  struct _LIST_ENTRY SiblingJobLinks;           // offset: 0x22c (556)
  struct _LIST_ENTRY ChildJobListHead;          // offset: 0x234 (564)
  struct _EJOB *ParentJob;                      // offset: 0x23c (572)
  struct _EJOB *volatile RootJob;               // offset: 0x240 (576)
  struct _LIST_ENTRY IteratorListHead;          // offset: 0x244 (580)
  ULONG AncestorCount;                          // offset: 0x24c (588)
  union {
    struct _EJOB **Ancestors; // offset: 0x250 (592)
    VOID *SessionObject;      // offset: 0x250 (592)
  };
  struct _EPROCESS_VALUES Accounting;           // offset: 0x258 (600)
  ULONG ShadowActiveProcessCount;               // offset: 0x2a8 (680)
  ULONG ActiveAuxiliaryProcessCount;            // offset: 0x2ac (684)
  ULONG SequenceNumber;                         // offset: 0x2b0 (688)
  ULONG TimerListLock;                          // offset: 0x2b4 (692)
  struct _LIST_ENTRY TimerListHead;             // offset: 0x2b8 (696)
  struct _GUID ContainerId;                     // offset: 0x2c0 (704)
  struct _ESILO *Container;                     // offset: 0x2d0 (720)
  struct _PS_PROPERTY_SET PropertySet;          // offset: 0x2d4 (724)
  struct _JOB_NET_RATE_CONTROL *NetRateControl; // offset: 0x2e0 (736)
  struct _JOB_IO_RATE_CONTROL *IoRateControl;   // offset: 0x2e4 (740)
  union {
    ULONG JobFlags; // offset: 0x2e8 (744)
    struct {
      ULONG CloseDone : 1;                     // offset: 0x2e8 (744)
      ULONG MultiGroup : 1;                    // offset: 0x2e8 (744)
      ULONG OutstandingNotification : 1;       // offset: 0x2e8 (744)
      ULONG NotificationInProgress : 1;        // offset: 0x2e8 (744)
      ULONG UILimits : 1;                      // offset: 0x2e8 (744)
      ULONG CpuRateControlActive : 1;          // offset: 0x2e8 (744)
      ULONG OwnCpuRateControl : 1;             // offset: 0x2e8 (744)
      ULONG Terminating : 1;                   // offset: 0x2e8 (744)
      ULONG WorkingSetLock : 1;                // offset: 0x2e8 (744)
      ULONG JobFrozen : 1;                     // offset: 0x2e8 (744)
      ULONG Background : 1;                    // offset: 0x2e8 (744)
      ULONG WakeNotificationAllocated : 1;     // offset: 0x2e8 (744)
      ULONG WakeNotificationEnabled : 1;       // offset: 0x2e8 (744)
      ULONG WakeNotificationPending : 1;       // offset: 0x2e8 (744)
      ULONG LimitNotificationRequired : 1;     // offset: 0x2e8 (744)
      ULONG ZeroCountNotificationRequired : 1; // offset: 0x2e8 (744)
      ULONG CycleTimeNotificationRequired : 1; // offset: 0x2e8 (744)
      ULONG CycleTimeNotificationPending : 1;  // offset: 0x2e8 (744)
      ULONG TimersVirtualized : 1;             // offset: 0x2e8 (744)
      ULONG JobSwapped : 1;                    // offset: 0x2e8 (744)
      ULONG ViolationDetected : 1;             // offset: 0x2e8 (744)
      ULONG EmptyJobNotified : 1;              // offset: 0x2e8 (744)
      ULONG NoSystemCharge : 1;                // offset: 0x2e8 (744)
      ULONG DropNoWakeCharges : 1;             // offset: 0x2e8 (744)
      ULONG NoWakeChargePolicyDecided : 1;     // offset: 0x2e8 (744)
      ULONG NetRateControlActive : 1;          // offset: 0x2e8 (744)
      ULONG OwnNetRateControl : 1;             // offset: 0x2e8 (744)
      ULONG IoRateControlActive : 1;           // offset: 0x2e8 (744)
      ULONG OwnIoRateControl : 1;              // offset: 0x2e8 (744)
      ULONG IsContainerRoot : 1;               // offset: 0x2e8 (744)
      ULONG SpareJobFlags : 2;                 // offset: 0x2e8 (744)
    };
  };
  ULONG EffectiveHighEdgeFilters;              // offset: 0x2ec (748)
  struct _PROCESS_ENERGY_VALUES *EnergyValues; // offset: 0x2f0 (752)
  volatile ULONG SharedCommitCharge;           // offset: 0x2f4 (756)
};

// 0x40 (64) bytes
struct _THREAD_ENERGY_VALUES {
  ULONGLONG Cycles[4][2]; // offset: 0x0 (0)
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

// 0x48 (72) bytes
struct _INTERRUPT_VECTOR_DATA {
  enum INTERRUPT_CONNECTION_TYPE Type;           // offset: 0x0 (0)
  ULONG Vector;                                  // offset: 0x4 (4)
  UCHAR Irql;                                    // offset: 0x8 (8)
  enum _KINTERRUPT_POLARITY Polarity;            // offset: 0xc (12)
  enum _KINTERRUPT_MODE Mode;                    // offset: 0x10 (16)
  struct _GROUP_AFFINITY TargetProcessors;       // offset: 0x14 (20)
  struct _INTERRUPT_REMAPPING_INFO IntRemapInfo; // offset: 0x20 (32)
  struct {
    ULONG Gsiv;               // offset: 0x0 (0)
    ULONG WakeInterrupt : 1;  // offset: 0x4 (4)
    ULONG ReservedFlags : 31; // offset: 0x4 (4)
  } ControllerInput;          // offset: 0x30 (48)
  union {
    struct {
      union _LARGE_INTEGER Address; // offset: 0x0 (0)
      ULONG DataPayload;            // offset: 0x8 (8)
    } XapicMessage;                 // offset: 0x38 (56)
    struct {
      struct _INTERRUPT_HT_INTR_INFO IntrInfo; // offset: 0x0 (0)
    } Hypertransport;                          // offset: 0x38 (56)
    struct {
      union _LARGE_INTEGER Address; // offset: 0x0 (0)
      ULONG DataPayload;            // offset: 0x8 (8)
    } GenericMessage;               // offset: 0x38 (56)
    struct {
      enum HAL_APIC_DESTINATION_MODE DestinationMode; // offset: 0x0 (0)
    } MessageRequest;                                 // offset: 0x38 (56)
  };
};

// 0x50 (80) bytes
struct _INTERRUPT_CONNECTION_DATA {
  ULONG Count;                              // offset: 0x0 (0)
  struct _INTERRUPT_VECTOR_DATA Vectors[1]; // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _KTIMER_TABLE_ENTRY {
  ULONG Lock;                 // offset: 0x0 (0)
  struct _LIST_ENTRY Entry;   // offset: 0x4 (4)
  union _ULARGE_INTEGER Time; // offset: 0x10 (16)
};

// 0x28 (40) bytes
struct _KTIMER {
  struct _DISPATCHER_HEADER Header;  // offset: 0x0 (0)
  union _ULARGE_INTEGER DueTime;     // offset: 0x10 (16)
  struct _LIST_ENTRY TimerListEntry; // offset: 0x18 (24)
  struct _KDPC *Dpc;                 // offset: 0x20 (32)
  ULONG Period;                      // offset: 0x24 (36)
};

// 0x2b8 (696) bytes
struct _POP_THERMAL_ZONE {
  union {
    struct _POP_POLICY_DEVICE PolicyDevice; // offset: 0x0 (0)
    struct {
      struct _LIST_ENTRY Link;                  // offset: 0x0 (0)
      enum POWER_POLICY_DEVICE_TYPE DeviceType; // offset: 0x8 (8)
      VOID *Notification;                       // offset: 0xc (12)
      struct _UNICODE_STRING Name;              // offset: 0x10 (16)
      struct _DEVICE_OBJECT *Device;            // offset: 0x18 (24)
      struct _IRP *Irp;                         // offset: 0x1c (28)
    };
  };
  UCHAR State;                                            // offset: 0x20 (32)
  UCHAR Flags;                                            // offset: 0x21 (33)
  UCHAR Removing;                                         // offset: 0x22 (34)
  UCHAR Mode;                                             // offset: 0x23 (35)
  UCHAR PendingMode;                                      // offset: 0x24 (36)
  UCHAR ActivePoint;                                      // offset: 0x25 (37)
  UCHAR PendingActivePoint;                               // offset: 0x26 (38)
  UCHAR Critical;                                         // offset: 0x27 (39)
  UCHAR ThermalStandby;                                   // offset: 0x28 (40)
  UCHAR OverThrottled;                                    // offset: 0x29 (41)
  LONG HighPrecisionThrottle;                             // offset: 0x2c (44)
  LONG Throttle;                                          // offset: 0x30 (48)
  LONG PendingThrottle;                                   // offset: 0x34 (52)
  ULONG ThrottleReasons;                                  // offset: 0x38 (56)
  ULONGLONG LastTime;                                     // offset: 0x40 (64)
  ULONG SampleRate;                                       // offset: 0x48 (72)
  ULONG LastTemp;                                         // offset: 0x4c (76)
  struct _KTIMER PassiveTimer;                            // offset: 0x50 (80)
  struct _KDPC PassiveDpc;                                // offset: 0x78 (120)
  struct _THERMAL_INFORMATION_EX Info;                    // offset: 0x98 (152)
  union _LARGE_INTEGER InfoLastUpdateTime;                // offset: 0xf0 (240)
  struct _THERMAL_POLICY Policy;                          // offset: 0xf8 (248)
  UCHAR PolicyDriver;                                     // offset: 0x110 (272)
  ULONGLONG LastActiveStartTime;                          // offset: 0x118 (280)
  ULONGLONG LastPassiveStartTime;                         // offset: 0x120 (288)
  struct _WORK_QUEUE_ITEM WorkItem;                       // offset: 0x128 (296)
  struct _POP_RW_LOCK Lock;                               // offset: 0x138 (312)
  struct _KEVENT ZoneStopped;                             // offset: 0x140 (320)
  struct _KEVENT TemperatureUpdated;                      // offset: 0x150 (336)
  ULONG InstanceId;                                       // offset: 0x160 (352)
  struct _POP_THERMAL_TELEMETRY_TRACKER TelemetryTracker; // offset: 0x168 (360)
};

// 0x50 (80) bytes
struct _LAZY_WRITER {
  struct _KDPC ScanDpc;             // offset: 0x0 (0)
  struct _KTIMER ScanTimer;         // offset: 0x20 (32)
  UCHAR ScanActive;                 // offset: 0x48 (72)
  UCHAR OtherWork;                  // offset: 0x49 (73)
  UCHAR PendingTeardownScan;        // offset: 0x4a (74)
  UCHAR PendingPeriodicScan;        // offset: 0x4b (75)
  UCHAR PendingLowMemoryScan;       // offset: 0x4c (76)
  UCHAR PendingPowerScan;           // offset: 0x4d (77)
  UCHAR PendingCoalescingFlushScan; // offset: 0x4e (78)
};

// 0x1e0 (480) bytes
struct _KTRANSACTION {
  struct _KEVENT OutcomeEvent;                          // offset: 0x0 (0)
  ULONG cookie;                                         // offset: 0x10 (16)
  struct _KMUTANT Mutex;                                // offset: 0x14 (20)
  struct _KTRANSACTION *TreeTx;                         // offset: 0x34 (52)
  struct _KTMOBJECT_NAMESPACE_LINK GlobalNamespaceLink; // offset: 0x38 (56)
  struct _KTMOBJECT_NAMESPACE_LINK TmNamespaceLink;     // offset: 0x4c (76)
  struct _GUID UOW;                                     // offset: 0x60 (96)
  enum _KTRANSACTION_STATE State;                       // offset: 0x70 (112)
  ULONG Flags;                                          // offset: 0x74 (116)
  struct _LIST_ENTRY EnlistmentHead;                    // offset: 0x78 (120)
  ULONG EnlistmentCount;                                // offset: 0x80 (128)
  ULONG RecoverableEnlistmentCount;                     // offset: 0x84 (132)
  ULONG PrePrepareRequiredEnlistmentCount;              // offset: 0x88 (136)
  ULONG PrepareRequiredEnlistmentCount;                 // offset: 0x8c (140)
  ULONG OutcomeRequiredEnlistmentCount;                 // offset: 0x90 (144)
  ULONG PendingResponses;                               // offset: 0x94 (148)
  struct _KENLISTMENT *SuperiorEnlistment;              // offset: 0x98 (152)
  union _CLS_LSN LastLsn;                               // offset: 0xa0 (160)
  struct _LIST_ENTRY PromotedEntry;                     // offset: 0xa8 (168)
  struct _KTRANSACTION *PromoterTransaction;            // offset: 0xb0 (176)
  VOID *PromotePropagation;                             // offset: 0xb4 (180)
  ULONG IsolationLevel;                                 // offset: 0xb8 (184)
  ULONG IsolationFlags;                                 // offset: 0xbc (188)
  union _LARGE_INTEGER Timeout;                         // offset: 0xc0 (192)
  struct _UNICODE_STRING Description;                   // offset: 0xc8 (200)
  struct _KTHREAD *RollbackThread;                      // offset: 0xd0 (208)
  struct _WORK_QUEUE_ITEM RollbackWorkItem;             // offset: 0xd4 (212)
  struct _KDPC RollbackDpc;                             // offset: 0xe4 (228)
  struct _KTIMER RollbackTimer;                         // offset: 0x108 (264)
  struct _LIST_ENTRY LsnOrderedEntry;                   // offset: 0x130 (304)
  enum _KTRANSACTION_OUTCOME Outcome;                   // offset: 0x138 (312)
  struct _KTM *Tm;                                      // offset: 0x13c (316)
  LONGLONG CommitReservation;                           // offset: 0x140 (320)
  struct _KTRANSACTION_HISTORY TransactionHistory[10];  // offset: 0x148 (328)
  ULONG TransactionHistoryCount;                        // offset: 0x198 (408)
  VOID *DTCPrivateInformation;                          // offset: 0x19c (412)
  ULONG DTCPrivateInformationLength;                    // offset: 0x1a0 (416)
  struct _KMUTANT DTCPrivateInformationMutex;           // offset: 0x1a4 (420)
  VOID *PromotedTxSelfHandle;                           // offset: 0x1c4 (452)
  ULONG PendingPromotionCount;                          // offset: 0x1c8 (456)
  struct _KEVENT PromotionCompletedEvent;               // offset: 0x1cc (460)
};

// 0x50 (80) bytes
struct _POP_FX_WORK_ORDER_WATCHDOG_INFO {
  struct _KTIMER Timer;                 // offset: 0x0 (0)
  struct _KDPC Dpc;                     // offset: 0x28 (40)
  struct _POP_FX_WORK_ORDER *WorkOrder; // offset: 0x48 (72)
};

// 0x1c (28) bytes
struct _POP_FX_WORK_ORDER {
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x0 (0)
  LONG WorkCount;                   // offset: 0x10 (16)
  VOID *Context;                    // offset: 0x14 (20)
  struct _POP_FX_WORK_ORDER_WATCHDOG_INFO
      *WatchdogTimerInfo; // offset: 0x18 (24)
};

// 0x70 (112) bytes
struct _POP_FX_PLUGIN {
  struct _LIST_ENTRY Link;  // offset: 0x0 (0)
  ULONG Version;            // offset: 0x8 (8)
  ULONGLONG Flags;          // offset: 0x10 (16)
  struct _KQUEUE WorkQueue; // offset: 0x18 (24)
  UCHAR (*AcceptDeviceNotification)
  (ULONG arg1, VOID *arg2); // offset: 0x40 (64)
  UCHAR (*AcceptProcessorNotification)
  (struct PEPHANDLE__ *arg1, ULONG arg2, VOID *arg3);      // offset: 0x44 (68)
  UCHAR (*AcceptAcpiNotification)(ULONG arg1, VOID *arg2); // offset: 0x48 (72)
  ULONG WorkOrderCount;                                    // offset: 0x4c (76)
  struct _POP_FX_WORK_ORDER WorkOrders[1];                 // offset: 0x50 (80)
};

// 0x188 (392) bytes
struct _POP_FX_DEVICE {
  struct _LIST_ENTRY Link;                       // offset: 0x0 (0)
  struct _IRP *Irp;                              // offset: 0x8 (8)
  struct _POP_IRP_DATA *IrpData;                 // offset: 0xc (12)
  union _POP_FX_DEVICE_STATUS volatile Status;   // offset: 0x10 (16)
  volatile LONG PowerReqCall;                    // offset: 0x14 (20)
  volatile LONG PowerNotReqCall;                 // offset: 0x18 (24)
  struct _DEVICE_NODE *DevNode;                  // offset: 0x1c (28)
  struct PEPHANDLE__ *DpmContext;                // offset: 0x20 (32)
  struct _POP_FX_PLUGIN *Plugin;                 // offset: 0x24 (36)
  struct PEPHANDLE__ *PluginHandle;              // offset: 0x28 (40)
  struct _POP_FX_PLUGIN *AcpiPlugin;             // offset: 0x2c (44)
  struct PEPHANDLE__ *AcpiPluginHandle;          // offset: 0x30 (48)
  struct _DEVICE_OBJECT *DeviceObject;           // offset: 0x34 (52)
  struct _DEVICE_OBJECT *TargetDevice;           // offset: 0x38 (56)
  struct _POP_FX_DRIVER_CALLBACKS Callbacks;     // offset: 0x3c (60)
  VOID *DriverContext;                           // offset: 0x58 (88)
  struct _LIST_ENTRY AcpiLink;                   // offset: 0x5c (92)
  struct _UNICODE_STRING DeviceId;               // offset: 0x64 (100)
  struct _IO_REMOVE_LOCK RemoveLock;             // offset: 0x6c (108)
  struct _IO_REMOVE_LOCK AcpiRemoveLock;         // offset: 0x84 (132)
  struct _POP_FX_WORK_ORDER WorkOrder;           // offset: 0x9c (156)
  ULONG IdleLock;                                // offset: 0xb8 (184)
  struct _KTIMER IdleTimer;                      // offset: 0xc0 (192)
  struct _KDPC IdleDpc;                          // offset: 0xe8 (232)
  ULONGLONG IdleTimeout;                         // offset: 0x108 (264)
  ULONGLONG IdleStamp;                           // offset: 0x110 (272)
  struct _DEVICE_OBJECT *NextIrpDeviceObject[2]; // offset: 0x118 (280)
  union _POWER_STATE NextIrpPowerState[2];       // offset: 0x120 (288)
  VOID (*NextIrpCallerCompletion[2])
  (struct _DEVICE_OBJECT *arg1, UCHAR arg2, union _POWER_STATE arg3, VOID *arg4,
   struct _IO_STATUS_BLOCK *arg5); // offset: 0x128 (296)
  VOID *NextIrpCallerContext[2];   // offset: 0x130 (304)
  struct _KEVENT IrpCompleteEvent; // offset: 0x138 (312)
  UCHAR (*PowerOnDumpDeviceCallback)
  (struct _PEP_CRASHDUMP_INFORMATION *arg1); // offset: 0x148 (328)
  struct _POP_FX_ACCOUNTING Accounting;      // offset: 0x150 (336)
  volatile ULONG Flags;                      // offset: 0x178 (376)
  ULONG ComponentCount;                      // offset: 0x17c (380)
  struct _POP_FX_COMPONENT **Components;     // offset: 0x180 (384)
};

// 0xc0 (192) bytes
struct _POP_FX_COMPONENT {
  struct _GUID Id;                              // offset: 0x0 (0)
  ULONG Index;                                  // offset: 0x10 (16)
  struct _POP_FX_WORK_ORDER WorkOrder;          // offset: 0x14 (20)
  struct _POP_FX_DEVICE *Device;                // offset: 0x30 (48)
  union _POP_FX_COMPONENT_FLAGS volatile Flags; // offset: 0x34 (52)
  volatile LONG Resident;                       // offset: 0x3c (60)
  struct _KEVENT ActiveEvent;                   // offset: 0x40 (64)
  ULONG IdleLock;                               // offset: 0x50 (80)
  volatile LONG IdleConditionComplete;          // offset: 0x54 (84)
  volatile LONG IdleStateComplete;              // offset: 0x58 (88)
  ULONGLONG IdleStamp;                          // offset: 0x60 (96)
  volatile ULONG CurrentIdleState;              // offset: 0x68 (104)
  ULONG IdleStateCount;                         // offset: 0x6c (108)
  struct _POP_FX_IDLE_STATE *IdleStates;        // offset: 0x70 (112)
  ULONG DeepestWakeableIdleState;               // offset: 0x74 (116)
  ULONG ProviderCount;                          // offset: 0x78 (120)
  struct _POP_FX_PROVIDER *Providers;           // offset: 0x7c (124)
  ULONG IdleProviderCount;                      // offset: 0x80 (128)
  ULONG DependentCount;                         // offset: 0x84 (132)
  struct _POP_FX_DEPENDENT *Dependents;         // offset: 0x88 (136)
  struct _POP_FX_ACCOUNTING Accounting;         // offset: 0x90 (144)
  struct _POP_FX_PERF_INFO *Performance;        // offset: 0xb8 (184)
};

// 0x60 (96) bytes
struct _POP_FX_PERF_INFO {
  struct _POP_FX_COMPONENT *Component; // offset: 0x0 (0)
  struct _KEVENT CompletedEvent;       // offset: 0x4 (4)
  VOID (*ComponentPerfState)
  (VOID *arg1, ULONG arg2, UCHAR arg3, VOID *arg4); // offset: 0x14 (20)
  union _POP_FX_PERF_FLAGS volatile Flags;          // offset: 0x18 (24)
  struct _PO_FX_PERF_STATE_CHANGE *LastChange;      // offset: 0x1c (28)
  ULONG LastChangeCount;                            // offset: 0x20 (32)
  ULONGLONG LastChangeStamp;                        // offset: 0x28 (40)
  UCHAR LastChangeNominal;                          // offset: 0x30 (48)
  UCHAR PepRegistered;                              // offset: 0x31 (49)
  UCHAR QueryOnIdleStates;                          // offset: 0x32 (50)
  VOID *volatile RequestDriverContext;              // offset: 0x34 (52)
  struct _POP_FX_WORK_ORDER WorkOrder;              // offset: 0x38 (56)
  ULONG SetsCount;                                  // offset: 0x54 (84)
  struct _POP_FX_PERF_SET *Sets;                    // offset: 0x58 (88)
};

// 0x90 (144) bytes
struct _POP_IRP_DATA {
  struct _LIST_ENTRY Link;               // offset: 0x0 (0)
  struct _IRP *Irp;                      // offset: 0x8 (8)
  struct _DEVICE_OBJECT *Pdo;            // offset: 0xc (12)
  struct _DEVICE_OBJECT *TargetDevice;   // offset: 0x10 (16)
  struct _DEVICE_OBJECT *CurrentDevice;  // offset: 0x14 (20)
  ULONGLONG WatchdogStart;               // offset: 0x18 (24)
  struct _KTIMER WatchdogTimer;          // offset: 0x20 (32)
  struct _KDPC WatchdogDpc;              // offset: 0x48 (72)
  UCHAR MinorFunction;                   // offset: 0x68 (104)
  enum _POWER_STATE_TYPE PowerStateType; // offset: 0x6c (108)
  union _POWER_STATE PowerState;         // offset: 0x70 (112)
  UCHAR WatchdogEnabled;                 // offset: 0x74 (116)
  struct _POP_FX_DEVICE *FxDevice;       // offset: 0x78 (120)
  UCHAR SystemTransition;                // offset: 0x7c (124)
  UCHAR NotifyPEP;                       // offset: 0x7d (125)
  union {
    struct {
      VOID (*CallerCompletion)
      (struct _DEVICE_OBJECT *arg1, UCHAR arg2, union _POWER_STATE arg3,
       VOID *arg4, struct _IO_STATUS_BLOCK *arg5); // offset: 0x0 (0)
      VOID *CallerContext;                         // offset: 0x4 (4)
      struct _DEVICE_OBJECT *CallerDevice;         // offset: 0x8 (8)
      UCHAR SystemWake;                            // offset: 0xc (12)
    } Device;                                      // offset: 0x80 (128)
    struct {
      struct _PO_DEVICE_NOTIFY *NotifyDevice; // offset: 0x0 (0)
      UCHAR FxDeviceActivated;                // offset: 0x4 (4)
    } System;                                 // offset: 0x80 (128)
  };
};

// 0x1cc (460) bytes
struct _DEVICE_NODE {
  struct _DEVICE_NODE *Sibling;                     // offset: 0x0 (0)
  struct _DEVICE_NODE *Child;                       // offset: 0x4 (4)
  struct _DEVICE_NODE *Parent;                      // offset: 0x8 (8)
  struct _DEVICE_NODE *LastChild;                   // offset: 0xc (12)
  struct _DEVICE_OBJECT *PhysicalDeviceObject;      // offset: 0x10 (16)
  struct _UNICODE_STRING InstancePath;              // offset: 0x14 (20)
  struct _UNICODE_STRING ServiceName;               // offset: 0x1c (28)
  struct _IRP *PendingIrp;                          // offset: 0x24 (36)
  struct _POP_FX_DEVICE *FxDevice;                  // offset: 0x28 (40)
  volatile LONG FxDeviceLock;                       // offset: 0x2c (44)
  struct _KEVENT FxRemoveEvent;                     // offset: 0x30 (48)
  volatile LONG FxActivationCount;                  // offset: 0x40 (64)
  volatile LONG FxSleepCount;                       // offset: 0x44 (68)
  struct _POP_FX_PLUGIN *Plugin;                    // offset: 0x48 (72)
  ULONG Level;                                      // offset: 0x4c (76)
  union _POWER_STATE CurrentPowerState;             // offset: 0x50 (80)
  struct _PO_DEVICE_NOTIFY Notify;                  // offset: 0x54 (84)
  struct _PO_IRP_MANAGER PoIrpManager;              // offset: 0x90 (144)
  struct _UNICODE_STRING UniqueId;                  // offset: 0xa0 (160)
  ULONG PowerFlags;                                 // offset: 0xa8 (168)
  enum _PNP_DEVNODE_STATE State;                    // offset: 0xac (172)
  enum _PNP_DEVNODE_STATE PreviousState;            // offset: 0xb0 (176)
  enum _PNP_DEVNODE_STATE StateHistory[20];         // offset: 0xb4 (180)
  ULONG StateHistoryEntry;                          // offset: 0x104 (260)
  LONG CompletionStatus;                            // offset: 0x108 (264)
  ULONG Flags;                                      // offset: 0x10c (268)
  ULONG UserFlags;                                  // offset: 0x110 (272)
  ULONG Problem;                                    // offset: 0x114 (276)
  LONG ProblemStatus;                               // offset: 0x118 (280)
  struct _CM_RESOURCE_LIST *ResourceList;           // offset: 0x11c (284)
  struct _CM_RESOURCE_LIST *ResourceListTranslated; // offset: 0x120 (288)
  struct _DEVICE_OBJECT *DuplicatePDO;              // offset: 0x124 (292)
  struct _IO_RESOURCE_REQUIREMENTS_LIST
      *ResourceRequirements;               // offset: 0x128 (296)
  enum _INTERFACE_TYPE InterfaceType;      // offset: 0x12c (300)
  ULONG BusNumber;                         // offset: 0x130 (304)
  enum _INTERFACE_TYPE ChildInterfaceType; // offset: 0x134 (308)
  ULONG ChildBusNumber;                    // offset: 0x138 (312)
  USHORT ChildBusTypeIndex;                // offset: 0x13c (316)
  UCHAR RemovalPolicy;                     // offset: 0x13e (318)
  UCHAR HardwareRemovalPolicy;             // offset: 0x13f (319)
  struct _LIST_ENTRY TargetDeviceNotify;   // offset: 0x140 (320)
  struct _LIST_ENTRY DeviceArbiterList;    // offset: 0x148 (328)
  struct _LIST_ENTRY DeviceTranslatorList; // offset: 0x150 (336)
  USHORT NoTranslatorMask;                 // offset: 0x158 (344)
  USHORT QueryTranslatorMask;              // offset: 0x15a (346)
  USHORT NoArbiterMask;                    // offset: 0x15c (348)
  USHORT QueryArbiterMask;                 // offset: 0x15e (350)
  union {
    struct _DEVICE_NODE *LegacyDeviceNode;            // offset: 0x160 (352)
    struct _DEVICE_RELATIONS *PendingDeviceRelations; // offset: 0x160 (352)
    VOID *Information;                                // offset: 0x160 (352)

  } OverUsed1; // offset: 0x160 (352)
  union {
    struct _DEVICE_NODE *NextResourceDeviceNode; // offset: 0x164 (356)

  } OverUsed2;                                       // offset: 0x164 (356)
  struct _CM_RESOURCE_LIST *BootResources;           // offset: 0x168 (360)
  struct _CM_RESOURCE_LIST *BootResourcesTranslated; // offset: 0x16c (364)
  ULONG CapabilityFlags;                             // offset: 0x170 (368)
  struct {
    enum PROFILE_STATUS DockStatus;           // offset: 0x0 (0)
    struct _LIST_ENTRY ListEntry;             // offset: 0x4 (4)
    USHORT *SerialNumber;                     // offset: 0xc (12)
  } DockInfo;                                 // offset: 0x174 (372)
  ULONG DisableableDepends;                   // offset: 0x184 (388)
  struct _LIST_ENTRY PendedSetInterfaceState; // offset: 0x188 (392)
  struct _LIST_ENTRY LegacyBusListEntry;      // offset: 0x190 (400)
  ULONG DriverUnloadRetryCount;               // offset: 0x198 (408)
  struct _DEVICE_NODE *PreviousParent;        // offset: 0x19c (412)
  LONG DeletedChildren;                       // offset: 0x1a0 (416)
  ULONG NumaNodeIndex;                        // offset: 0x1a4 (420)
  struct _GUID ContainerID;                   // offset: 0x1a8 (424)
  UCHAR OverrideFlags;                        // offset: 0x1b8 (440)
  ULONG DeviceIdsHash;                        // offset: 0x1bc (444)
  UCHAR RequiresUnloadedDriver;               // offset: 0x1c0 (448)
  struct _PENDING_RELATIONS_LIST_ENTRY
      *PendingEjectRelations; // offset: 0x1c4 (452)
  ULONG StateFlags;           // offset: 0x1c8 (456)
};

// 0xa8 (168) bytes
struct _MI_PARTITION_SEGMENTS {
  struct _KEVENT DeleteSubsectionCleanup; // offset: 0x0 (0)
  struct _KEVENT UnusedSegmentCleanup;    // offset: 0x10 (16)
  ULONG SubsectionDeletePtes;             // offset: 0x20 (32)
  struct _MMDEREFERENCE_SEGMENT_HEADER
      DereferenceSegmentHeader;                    // offset: 0x24 (36)
  struct _LIST_ENTRY DeleteOnCloseList;            // offset: 0x40 (64)
  struct _KTIMER DeleteOnCloseTimer;               // offset: 0x48 (72)
  UCHAR DeleteOnCloseTimerActive;                  // offset: 0x70 (112)
  ULONG DeleteOnCloseCount;                        // offset: 0x74 (116)
  struct _LIST_ENTRY UnusedSegmentList;            // offset: 0x78 (120)
  struct _LIST_ENTRY UnusedSubsectionList;         // offset: 0x80 (128)
  struct _LIST_ENTRY DeleteSubsectionList;         // offset: 0x88 (136)
  struct _KEVENT ControlAreaDeleteEvent;           // offset: 0x90 (144)
  struct _SINGLE_LIST_ENTRY ControlAreaDeleteList; // offset: 0xa0 (160)
};

// 0x380 (896) bytes
struct _ENODE {
  struct _KNODE Ncb;                                 // offset: 0x0 (0)
  struct _EX_WORK_QUEUE *volatile ExWorkQueues[8];   // offset: 0x100 (256)
  struct _EX_WORK_QUEUE ExWorkQueue;                 // offset: 0x120 (288)
  struct _KEVENT ExpThreadSetManagerEvent;           // offset: 0x2d8 (728)
  struct _KTIMER ExpDeadlockTimer;                   // offset: 0x2e8 (744)
  struct _KEVENT ExpThreadReaperEvent;               // offset: 0x310 (784)
  struct _KWAIT_BLOCK WaitBlocks[3];                 // offset: 0x320 (800)
  struct _ETHREAD *ExpWorkerThreadBalanceManagerPtr; // offset: 0x368 (872)
  ULONG ExpWorkerSeed;                               // offset: 0x36c (876)
  union {
    struct {
      volatile ULONG ExWorkerFullInit : 1;   // offset: 0x370 (880)
      volatile ULONG ExWorkerStructInit : 1; // offset: 0x370 (880)
    };
    volatile ULONG ExWorkerFlags; // offset: 0x370 (880)
  };
};

// 0x1840 (6208) bytes
struct _KTIMER_TABLE {
  struct _KTIMER *TimerExpiry[16];              // offset: 0x0 (0)
  struct _KTIMER_TABLE_ENTRY TimerEntries[256]; // offset: 0x40 (64)
};

// 0x4900 (18688) bytes
struct _KPRCB {
  USHORT MinorVersion;            // offset: 0x0 (0)
  USHORT MajorVersion;            // offset: 0x2 (2)
  struct _KTHREAD *CurrentThread; // offset: 0x4 (4)
  struct _KTHREAD *NextThread;    // offset: 0x8 (8)
  struct _KTHREAD *IdleThread;    // offset: 0xc (12)
  UCHAR LegacyNumber;             // offset: 0x10 (16)
  UCHAR NestingLevel;             // offset: 0x11 (17)
  USHORT BuildType;               // offset: 0x12 (18)
  CHAR CpuType;                   // offset: 0x14 (20)
  CHAR CpuID;                     // offset: 0x15 (21)
  union {
    USHORT CpuStep; // offset: 0x16 (22)
    struct {
      UCHAR CpuStepping; // offset: 0x16 (22)
      UCHAR CpuModel;    // offset: 0x17 (23)
    };
  };
  struct _KPROCESSOR_STATE ProcessorState; // offset: 0x18 (24)
  struct _KNODE *ParentNode;               // offset: 0x338 (824)
  CHAR *PriorityState;                     // offset: 0x33c (828)
  ULONG KernelReserved[14];                // offset: 0x340 (832)
  ULONG HalReserved[16];                   // offset: 0x378 (888)
  ULONG CFlushSize;                        // offset: 0x3b8 (952)
  UCHAR CoresPerPhysicalProcessor;         // offset: 0x3bc (956)
  UCHAR LogicalProcessorsPerCore;          // offset: 0x3bd (957)
  UCHAR CpuVendor;                         // offset: 0x3be (958)
  UCHAR PrcbPad0[1];                       // offset: 0x3bf (959)
  ULONG MHz;                               // offset: 0x3c0 (960)
  UCHAR GroupIndex;                        // offset: 0x3c4 (964)
  UCHAR Group;                             // offset: 0x3c5 (965)
  UCHAR PrcbPad05[2];                      // offset: 0x3c6 (966)
  ULONG GroupSetMember;                    // offset: 0x3c8 (968)
  ULONG Number;                            // offset: 0x3cc (972)
  UCHAR ClockOwner;                        // offset: 0x3d0 (976)
  union {
    UCHAR PendingTickFlags; // offset: 0x3d1 (977)
    struct {
      UCHAR PendingTick : 1;       // offset: 0x3d1 (977)
      UCHAR PendingBackupTick : 1; // offset: 0x3d1 (977)
    };
  };
  UCHAR PrcbPad10[70];                           // offset: 0x3d2 (978)
  struct _KSPIN_LOCK_QUEUE LockQueue[17];        // offset: 0x418 (1048)
  ULONG InterruptCount;                          // offset: 0x4a0 (1184)
  ULONG KernelTime;                              // offset: 0x4a4 (1188)
  ULONG UserTime;                                // offset: 0x4a8 (1192)
  ULONG DpcTime;                                 // offset: 0x4ac (1196)
  ULONG DpcTimeCount;                            // offset: 0x4b0 (1200)
  ULONG InterruptTime;                           // offset: 0x4b4 (1204)
  ULONG AdjustDpcThreshold;                      // offset: 0x4b8 (1208)
  ULONG PageColor;                               // offset: 0x4bc (1212)
  UCHAR DebuggerSavedIRQL;                       // offset: 0x4c0 (1216)
  UCHAR NodeColor;                               // offset: 0x4c1 (1217)
  UCHAR DeepSleep;                               // offset: 0x4c2 (1218)
  UCHAR PrcbPad20[5];                            // offset: 0x4c3 (1219)
  ULONG NodeShiftedColor;                        // offset: 0x4c8 (1224)
  ULONG SecondaryColorMask;                      // offset: 0x4cc (1228)
  ULONG DpcTimeLimit;                            // offset: 0x4d0 (1232)
  ULONG PrcbPad21[3];                            // offset: 0x4d4 (1236)
  ULONG CcFastReadNoWait;                        // offset: 0x4e0 (1248)
  ULONG CcFastReadWait;                          // offset: 0x4e4 (1252)
  ULONG CcFastReadNotPossible;                   // offset: 0x4e8 (1256)
  ULONG CcCopyReadNoWait;                        // offset: 0x4ec (1260)
  ULONG CcCopyReadWait;                          // offset: 0x4f0 (1264)
  ULONG CcCopyReadNoWaitMiss;                    // offset: 0x4f4 (1268)
  volatile LONG MmSpinLockOrdering;              // offset: 0x4f8 (1272)
  volatile LONG IoReadOperationCount;            // offset: 0x4fc (1276)
  volatile LONG IoWriteOperationCount;           // offset: 0x500 (1280)
  volatile LONG IoOtherOperationCount;           // offset: 0x504 (1284)
  union _LARGE_INTEGER IoReadTransferCount;      // offset: 0x508 (1288)
  union _LARGE_INTEGER IoWriteTransferCount;     // offset: 0x510 (1296)
  union _LARGE_INTEGER IoOtherTransferCount;     // offset: 0x518 (1304)
  ULONG CcFastMdlReadNoWait;                     // offset: 0x520 (1312)
  ULONG CcFastMdlReadWait;                       // offset: 0x524 (1316)
  ULONG CcFastMdlReadNotPossible;                // offset: 0x528 (1320)
  ULONG CcMapDataNoWait;                         // offset: 0x52c (1324)
  ULONG CcMapDataWait;                           // offset: 0x530 (1328)
  ULONG CcPinMappedDataCount;                    // offset: 0x534 (1332)
  ULONG CcPinReadNoWait;                         // offset: 0x538 (1336)
  ULONG CcPinReadWait;                           // offset: 0x53c (1340)
  ULONG CcMdlReadNoWait;                         // offset: 0x540 (1344)
  ULONG CcMdlReadWait;                           // offset: 0x544 (1348)
  ULONG CcLazyWriteHotSpots;                     // offset: 0x548 (1352)
  ULONG CcLazyWriteIos;                          // offset: 0x54c (1356)
  ULONG CcLazyWritePages;                        // offset: 0x550 (1360)
  ULONG CcDataFlushes;                           // offset: 0x554 (1364)
  ULONG CcDataPages;                             // offset: 0x558 (1368)
  ULONG CcLostDelayedWrites;                     // offset: 0x55c (1372)
  ULONG CcFastReadResourceMiss;                  // offset: 0x560 (1376)
  ULONG CcCopyReadWaitMiss;                      // offset: 0x564 (1380)
  ULONG CcFastMdlReadResourceMiss;               // offset: 0x568 (1384)
  ULONG CcMapDataNoWaitMiss;                     // offset: 0x56c (1388)
  ULONG CcMapDataWaitMiss;                       // offset: 0x570 (1392)
  ULONG CcPinReadNoWaitMiss;                     // offset: 0x574 (1396)
  ULONG CcPinReadWaitMiss;                       // offset: 0x578 (1400)
  ULONG CcMdlReadNoWaitMiss;                     // offset: 0x57c (1404)
  ULONG CcMdlReadWaitMiss;                       // offset: 0x580 (1408)
  ULONG CcReadAheadIos;                          // offset: 0x584 (1412)
  ULONG KeAlignmentFixupCount;                   // offset: 0x588 (1416)
  ULONG KeExceptionDispatchCount;                // offset: 0x58c (1420)
  ULONG KeSystemCalls;                           // offset: 0x590 (1424)
  ULONG AvailableTime;                           // offset: 0x594 (1428)
  ULONG PrcbPad22[2];                            // offset: 0x598 (1432)
  struct _PP_LOOKASIDE_LIST PPLookasideList[16]; // offset: 0x5a0 (1440)
  struct _GENERAL_LOOKASIDE_POOL
      PPNxPagedLookasideList[32]; // offset: 0x620 (1568)
  struct _GENERAL_LOOKASIDE_POOL
      PPNPagedLookasideList[32]; // offset: 0xf20 (3872)
  struct _GENERAL_LOOKASIDE_POOL
      PPPagedLookasideList[32];    // offset: 0x1820 (6176)
  volatile LONG PacketBarrier;     // offset: 0x2120 (8480)
  volatile LONG ReverseStall;      // offset: 0x2124 (8484)
  VOID *IpiFrame;                  // offset: 0x2128 (8488)
  UCHAR PrcbPad3[52];              // offset: 0x212c (8492)
  VOID *volatile CurrentPacket[3]; // offset: 0x2160 (8544)
  volatile ULONG TargetSet;        // offset: 0x216c (8556)
  VOID (*volatileWorkerRoutine)
  (VOID *arg1, VOID *arg2, VOID *arg3, VOID *arg4); // offset: 0x2170 (8560)
  volatile ULONG IpiFrozen;                         // offset: 0x2174 (8564)
  UCHAR PrcbPad4[40];                               // offset: 0x2178 (8568)
  volatile ULONG RequestSummary;                    // offset: 0x21a0 (8608)
  volatile LONG TargetCount;                        // offset: 0x21a4 (8612)
  UCHAR PrcbPad50[40];                              // offset: 0x21a8 (8616)
  ULONG InterruptLastCount;                         // offset: 0x21d0 (8656)
  ULONG InterruptRate;                              // offset: 0x21d4 (8660)
  ULONG DeviceInterrupts;                           // offset: 0x21d8 (8664)
  VOID *IsrDpcStats;                                // offset: 0x21dc (8668)
  struct _KDPC_DATA DpcData[2];                     // offset: 0x21e0 (8672)
  VOID *DpcStack;                                   // offset: 0x2210 (8720)
  LONG MaximumDpcQueueDepth;                        // offset: 0x2214 (8724)
  ULONG DpcRequestRate;                             // offset: 0x2218 (8728)
  ULONG MinimumDpcRate;                             // offset: 0x221c (8732)
  ULONG DpcLastCount;                               // offset: 0x2220 (8736)
  ULONG PrcbLock;                                   // offset: 0x2224 (8740)
  struct _KGATE DpcGate;                            // offset: 0x2228 (8744)
  UCHAR IdleState;                                  // offset: 0x2238 (8760)
  volatile UCHAR QuantumEnd;                        // offset: 0x2239 (8761)
  volatile UCHAR DpcRoutineActive;                  // offset: 0x223a (8762)
  volatile UCHAR IdleSchedule;                      // offset: 0x223b (8763)
  union {
    volatile LONG DpcRequestSummary; // offset: 0x223c (8764)
    SHORT DpcRequestSlot[2];         // offset: 0x223c (8764)
    struct {
      SHORT NormalDpcState; // offset: 0x223c (8764)
      SHORT ThreadDpcState; // offset: 0x223e (8766)
    };
    struct {
      ULONG DpcNormalProcessingActive : 1;    // offset: 0x223c (8764)
      ULONG DpcNormalProcessingRequested : 1; // offset: 0x223c (8764)
      ULONG DpcNormalThreadSignal : 1;        // offset: 0x223c (8764)
      ULONG DpcNormalTimerExpiration : 1;     // offset: 0x223c (8764)
      ULONG DpcNormalDpcPresent : 1;          // offset: 0x223c (8764)
      ULONG DpcNormalLocalInterrupt : 1;      // offset: 0x223c (8764)
      ULONG DpcNormalSpare : 10;              // offset: 0x223c (8764)
      ULONG DpcThreadActive : 1;              // offset: 0x223c (8764)
      ULONG DpcThreadRequested : 1;           // offset: 0x223c (8764)
      ULONG DpcThreadSpare : 14;              // offset: 0x223c (8764)
    };
  };
  ULONG LastTimerHand;                             // offset: 0x2240 (8768)
  ULONG LastTick;                                  // offset: 0x2244 (8772)
  ULONG PeriodicCount;                             // offset: 0x2248 (8776)
  ULONG PeriodicBias;                              // offset: 0x224c (8780)
  ULONG ClockInterrupts;                           // offset: 0x2250 (8784)
  ULONG ReadyScanTick;                             // offset: 0x2254 (8788)
  UCHAR GroupSchedulingOverQuota;                  // offset: 0x2258 (8792)
  UCHAR ThreadDpcEnable;                           // offset: 0x2259 (8793)
  UCHAR PrcbPad41[2];                              // offset: 0x225a (8794)
  struct _KTIMER_TABLE TimerTable;                 // offset: 0x2260 (8800)
  struct _KDPC CallDpc;                            // offset: 0x3aa0 (15008)
  LONG ClockKeepAlive;                             // offset: 0x3ac0 (15040)
  UCHAR PrcbPad6[4];                               // offset: 0x3ac4 (15044)
  LONG DpcWatchdogPeriod;                          // offset: 0x3ac8 (15048)
  LONG DpcWatchdogCount;                           // offset: 0x3acc (15052)
  volatile LONG KeSpinLockOrdering;                // offset: 0x3ad0 (15056)
  ULONG PrcbPad70[1];                              // offset: 0x3ad4 (15060)
  ULONG QueueIndex;                                // offset: 0x3ad8 (15064)
  struct _SINGLE_LIST_ENTRY DeferredReadyListHead; // offset: 0x3adc (15068)
  ULONG ReadySummary;                              // offset: 0x3ae0 (15072)
  LONG AffinitizedSelectionMask;                   // offset: 0x3ae4 (15076)
  ULONG WaitLock;                                  // offset: 0x3ae8 (15080)
  struct _LIST_ENTRY WaitListHead;                 // offset: 0x3aec (15084)
  ULONG ScbOffset;                                 // offset: 0x3af4 (15092)
  ULONGLONG StartCycles;                           // offset: 0x3af8 (15096)
  ULONGLONG TaggedCyclesStart;                     // offset: 0x3b00 (15104)
  ULONGLONG TaggedCycles[2];                       // offset: 0x3b08 (15112)
  ULONGLONG GenerationTarget;                      // offset: 0x3b18 (15128)
  volatile ULONGLONG CycleTime;                    // offset: 0x3b20 (15136)
  ULONGLONG AffinitizedCycles;                     // offset: 0x3b28 (15144)
  volatile ULONG HighCycleTime;                    // offset: 0x3b30 (15152)
  ULONGLONG Cycles[4][2];                          // offset: 0x3b38 (15160)
  ULONG PrcbPad71[10];                             // offset: 0x3b78 (15224)
  struct _LIST_ENTRY DispatcherReadyListHead[32];  // offset: 0x3ba0 (15264)
  VOID *ChainedInterruptList;                      // offset: 0x3ca0 (15520)
  LONG LookasideIrpFloat;                          // offset: 0x3ca4 (15524)
  struct _RTL_RB_TREE ScbQueue;                    // offset: 0x3ca8 (15528)
  struct _LIST_ENTRY ScbList;                      // offset: 0x3cb0 (15536)
  volatile LONG MmPageFaultCount;                  // offset: 0x3cb8 (15544)
  volatile LONG MmCopyOnWriteCount;                // offset: 0x3cbc (15548)
  volatile LONG MmTransitionCount;                 // offset: 0x3cc0 (15552)
  volatile LONG MmCacheTransitionCount;            // offset: 0x3cc4 (15556)
  volatile LONG MmDemandZeroCount;                 // offset: 0x3cc8 (15560)
  volatile LONG MmPageReadCount;                   // offset: 0x3ccc (15564)
  volatile LONG MmPageReadIoCount;                 // offset: 0x3cd0 (15568)
  volatile LONG MmCacheReadCount;                  // offset: 0x3cd4 (15572)
  volatile LONG MmCacheIoCount;                    // offset: 0x3cd8 (15576)
  volatile LONG MmDirtyPagesWriteCount;            // offset: 0x3cdc (15580)
  volatile LONG MmDirtyWriteIoCount;               // offset: 0x3ce0 (15584)
  volatile LONG MmMappedPagesWriteCount;           // offset: 0x3ce4 (15588)
  volatile LONG MmMappedWriteIoCount;              // offset: 0x3ce8 (15592)
  volatile ULONG CachedCommit;                     // offset: 0x3cec (15596)
  volatile ULONG CachedResidentAvailable;          // offset: 0x3cf0 (15600)
  VOID *HyperPte;                                  // offset: 0x3cf4 (15604)
  UCHAR PrcbPad8[4];                               // offset: 0x3cf8 (15608)
  UCHAR VendorString[13];                          // offset: 0x3cfc (15612)
  UCHAR InitialApicId;                             // offset: 0x3d09 (15625)
  UCHAR LogicalProcessorsPerPhysicalProcessor;     // offset: 0x3d0a (15626)
  UCHAR PrcbPad9[1];                               // offset: 0x3d0b (15627)
  ULONGLONG FeatureBits;                           // offset: 0x3d10 (15632)
  union _LARGE_INTEGER UpdateSignature;            // offset: 0x3d18 (15640)
  volatile ULONGLONG IsrTime;                      // offset: 0x3d20 (15648)
  ULONG PrcbPad90[2];                              // offset: 0x3d28 (15656)
  struct _PROCESSOR_POWER_STATE PowerState;        // offset: 0x3d30 (15664)
  ULONG PrcbPad91[17];                             // offset: 0x3eb0 (16048)
  struct _KDPC DpcWatchdogDpc;                     // offset: 0x3ef4 (16116)
  struct _KTIMER DpcWatchdogTimer;                 // offset: 0x3f18 (16152)
  union _SLIST_HEADER HypercallPageList;           // offset: 0x3f40 (16192)
  VOID *HypercallCachedPages;                      // offset: 0x3f48 (16200)
  VOID *VirtualApicAssist;                         // offset: 0x3f4c (16204)
  ULONGLONG *StatisticsPage;                       // offset: 0x3f50 (16208)
  struct _CACHE_DESCRIPTOR Cache[5];               // offset: 0x3f54 (16212)
  ULONG CacheCount;                                // offset: 0x3f90 (16272)
  struct _KAFFINITY_EX PackageProcessorSet;        // offset: 0x3f94 (16276)
  ULONG SharedReadyQueueMask;                      // offset: 0x3fa0 (16288)
  struct _KSHARED_READY_QUEUE *SharedReadyQueue;   // offset: 0x3fa4 (16292)
  ULONG SharedQueueScanOwner;                      // offset: 0x3fa8 (16296)
  ULONG CoreProcessorSet;                          // offset: 0x3fac (16300)
  ULONG ScanSiblingMask;                           // offset: 0x3fb0 (16304)
  ULONG LLCMask;                                   // offset: 0x3fb4 (16308)
  ULONG CacheProcessorMask[5];                     // offset: 0x3fb8 (16312)
  ULONG ScanSiblingIndex;                          // offset: 0x3fcc (16332)
  VOID *WheaInfo;                                  // offset: 0x3fd0 (16336)
  VOID *EtwSupport;                                // offset: 0x3fd4 (16340)
  union _SLIST_HEADER InterruptObjectPool;         // offset: 0x3fd8 (16344)
  ULONG PrcbPad92[3];                              // offset: 0x3fe0 (16352)
  ULONG PteBitCache;                               // offset: 0x3fec (16364)
  ULONG PteBitOffset;                              // offset: 0x3ff0 (16368)
  ULONG PrcbPad93;                                 // offset: 0x3ff4 (16372)
  struct _PROCESSOR_PROFILE_CONTROL_AREA
      *ProcessorProfileControlArea;                 // offset: 0x3ff8 (16376)
  VOID *ProfileEventIndexAddress;                   // offset: 0x3ffc (16380)
  struct _KDPC TimerExpirationDpc;                  // offset: 0x4000 (16384)
  struct _SYNCH_COUNTERS SynchCounters;             // offset: 0x4020 (16416)
  struct _FILESYSTEM_DISK_COUNTERS FsCounters;      // offset: 0x40d8 (16600)
  struct _CONTEXT *Context;                         // offset: 0x40e8 (16616)
  ULONG ContextFlagsInit;                           // offset: 0x40ec (16620)
  struct _XSAVE_AREA *ExtendedState;                // offset: 0x40f0 (16624)
  struct _KENTROPY_TIMING_STATE EntropyTimingState; // offset: 0x40f4 (16628)
  VOID *IsrStack;                                   // offset: 0x421c (16924)
  struct _KINTERRUPT *VectorToInterruptObject[208]; // offset: 0x4220 (16928)
  struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;     // offset: 0x4560 (17760)
  struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;  // offset: 0x4564 (17764)
  struct _KDPC AbDpc;                               // offset: 0x4568 (17768)
  struct _IOP_IRP_STACK_PROFILER
      IoIrpStackProfilerCurrent; // offset: 0x4588 (17800)
  struct _IOP_IRP_STACK_PROFILER
      IoIrpStackProfilerPrevious; // offset: 0x45dc (17884)
  struct _KTIMER_EXPIRATION_TRACE
      TimerExpirationTrace[16];                      // offset: 0x4630 (17968)
  ULONG TimerExpirationTraceCount;                   // offset: 0x4730 (18224)
  VOID *ExSaPageArray;                               // offset: 0x4734 (18228)
  ULONG PrcbPad100[10];                              // offset: 0x4738 (18232)
  struct _KSHARED_READY_QUEUE LocalSharedReadyQueue; // offset: 0x4760 (18272)
  UCHAR PrcbPad95[12];                               // offset: 0x4894 (18580)
  struct _REQUEST_MAILBOX *Mailbox;                  // offset: 0x48a0 (18592)
  UCHAR PrcbPad[60];                                 // offset: 0x48a4 (18596)
  struct _REQUEST_MAILBOX RequestMailbox[1];         // offset: 0x48e0 (18656)
};

// 0x348 (840) bytes
struct _KTHREAD {
  struct _DISPATCHER_HEADER Header;                    // offset: 0x0 (0)
  VOID *SListFaultAddress;                             // offset: 0x10 (16)
  ULONGLONG QuantumTarget;                             // offset: 0x18 (24)
  VOID *InitialStack;                                  // offset: 0x20 (32)
  VOID *volatile StackLimit;                           // offset: 0x24 (36)
  VOID *StackBase;                                     // offset: 0x28 (40)
  ULONG ThreadLock;                                    // offset: 0x2c (44)
  volatile ULONGLONG CycleTime;                        // offset: 0x30 (48)
  volatile ULONG HighCycleTime;                        // offset: 0x38 (56)
  VOID *ServiceTable;                                  // offset: 0x3c (60)
  ULONG CurrentRunTime;                                // offset: 0x40 (64)
  ULONG ExpectedRunTime;                               // offset: 0x44 (68)
  VOID *KernelStack;                                   // offset: 0x48 (72)
  struct _XSAVE_FORMAT *StateSaveArea;                 // offset: 0x4c (76)
  struct _KSCHEDULING_GROUP *volatile SchedulingGroup; // offset: 0x50 (80)
  union _KWAIT_STATUS_REGISTER WaitRegister;           // offset: 0x54 (84)
  volatile UCHAR Running;                              // offset: 0x55 (85)
  UCHAR Alerted[2];                                    // offset: 0x56 (86)
  union {
    struct {
      ULONG AutoBoostActive : 1;         // offset: 0x58 (88)
      ULONG ReadyTransition : 1;         // offset: 0x58 (88)
      ULONG WaitNext : 1;                // offset: 0x58 (88)
      ULONG SystemAffinityActive : 1;    // offset: 0x58 (88)
      ULONG Alertable : 1;               // offset: 0x58 (88)
      ULONG UserStackWalkActive : 1;     // offset: 0x58 (88)
      ULONG ApcInterruptRequest : 1;     // offset: 0x58 (88)
      ULONG QuantumEndMigrate : 1;       // offset: 0x58 (88)
      ULONG UmsDirectedSwitchEnable : 1; // offset: 0x58 (88)
      ULONG TimerActive : 1;             // offset: 0x58 (88)
      ULONG SystemThread : 1;            // offset: 0x58 (88)
      ULONG ProcessDetachActive : 1;     // offset: 0x58 (88)
      ULONG CalloutActive : 1;           // offset: 0x58 (88)
      ULONG ScbReadyQueue : 1;           // offset: 0x58 (88)
      ULONG ApcQueueable : 1;            // offset: 0x58 (88)
      ULONG ReservedStackInUse : 1;      // offset: 0x58 (88)
      ULONG UmsPerformingSyscall : 1;    // offset: 0x58 (88)
      ULONG TimerSuspended : 1;          // offset: 0x58 (88)
      ULONG SuspendedWaitMode : 1;       // offset: 0x58 (88)
      ULONG SuspendSchedulerApcWait : 1; // offset: 0x58 (88)
      ULONG Reserved : 12;               // offset: 0x58 (88)
    };
    LONG MiscFlags; // offset: 0x58 (88)
  };
  union {
    struct {
      ULONG AutoAlignment : 1;                // offset: 0x5c (92)
      ULONG DisableBoost : 1;                 // offset: 0x5c (92)
      ULONG ThreadFlagsSpare0 : 1;            // offset: 0x5c (92)
      ULONG AlertedByThreadId : 1;            // offset: 0x5c (92)
      ULONG QuantumDonation : 1;              // offset: 0x5c (92)
      ULONG EnableStackSwap : 1;              // offset: 0x5c (92)
      ULONG GuiThread : 1;                    // offset: 0x5c (92)
      ULONG DisableQuantum : 1;               // offset: 0x5c (92)
      ULONG ChargeOnlySchedulingGroup : 1;    // offset: 0x5c (92)
      ULONG DeferPreemption : 1;              // offset: 0x5c (92)
      ULONG QueueDeferPreemption : 1;         // offset: 0x5c (92)
      ULONG ForceDeferSchedule : 1;           // offset: 0x5c (92)
      ULONG SharedReadyQueueAffinity : 1;     // offset: 0x5c (92)
      ULONG FreezeCount : 1;                  // offset: 0x5c (92)
      ULONG TerminationApcRequest : 1;        // offset: 0x5c (92)
      ULONG AutoBoostEntriesExhausted : 1;    // offset: 0x5c (92)
      ULONG KernelStackResident : 1;          // offset: 0x5c (92)
      ULONG CommitFailTerminateRequest : 1;   // offset: 0x5c (92)
      ULONG ProcessStackCountDecremented : 1; // offset: 0x5c (92)
      ULONG ThreadFlagsSpare : 5;             // offset: 0x5c (92)
      ULONG EtwStackTraceApcInserted : 8;     // offset: 0x5c (92)
    };
    volatile LONG ThreadFlags; // offset: 0x5c (92)
  };
  volatile UCHAR Tag;                      // offset: 0x60 (96)
  UCHAR SystemHeteroCpuPolicy;             // offset: 0x61 (97)
  UCHAR UserHeteroCpuPolicy : 7;           // offset: 0x62 (98)
  UCHAR ExplicitSystemHeteroCpuPolicy : 1; // offset: 0x62 (98)
  UCHAR Spare0;                            // offset: 0x63 (99)
  ULONG SystemCallNumber;                  // offset: 0x64 (100)
  VOID *FirstArgument;                     // offset: 0x68 (104)
  struct _KTRAP_FRAME *TrapFrame;          // offset: 0x6c (108)
  union {
    struct _KAPC_STATE ApcState; // offset: 0x70 (112)
    struct {
      UCHAR ApcStateFill[23]; // offset: 0x70 (112)
      CHAR Priority;          // offset: 0x87 (135)
    };
  };
  ULONG UserIdealProcessor;           // offset: 0x88 (136)
  ULONG ContextSwitches;              // offset: 0x8c (140)
  volatile UCHAR State;               // offset: 0x90 (144)
  CHAR Spare12;                       // offset: 0x91 (145)
  UCHAR WaitIrql;                     // offset: 0x92 (146)
  CHAR WaitMode;                      // offset: 0x93 (147)
  volatile LONG WaitStatus;           // offset: 0x94 (148)
  struct _KWAIT_BLOCK *WaitBlockList; // offset: 0x98 (152)
  union {
    struct _LIST_ENTRY WaitListEntry;        // offset: 0x9c (156)
    struct _SINGLE_LIST_ENTRY SwapListEntry; // offset: 0x9c (156)
  };
  struct _DISPATCHER_HEADER *volatile Queue; // offset: 0xa4 (164)
  VOID *Teb;                                 // offset: 0xa8 (168)
  ULONGLONG RelativeTimerBias;               // offset: 0xb0 (176)
  struct _KTIMER Timer;                      // offset: 0xb8 (184)
  union {
    struct _KWAIT_BLOCK WaitBlock[4]; // offset: 0xe0 (224)
    struct {
      UCHAR WaitBlockFill8[20];                 // offset: 0xe0 (224)
      struct _KTHREAD_COUNTERS *ThreadCounters; // offset: 0xf4 (244)
    };
    struct {
      UCHAR WaitBlockFill9[44];        // offset: 0xe0 (224)
      struct _XSTATE_SAVE *XStateSave; // offset: 0x10c (268)
    };
    struct {
      UCHAR WaitBlockFill10[68];  // offset: 0xe0 (224)
      VOID *volatile Win32Thread; // offset: 0x124 (292)
    };
    struct {
      UCHAR WaitBlockFill11[88]; // offset: 0xe0 (224)
      ULONG WaitTime;            // offset: 0x138 (312)
      union {
        struct {
          SHORT KernelApcDisable;  // offset: 0x13c (316)
          SHORT SpecialApcDisable; // offset: 0x13e (318)
        };
        ULONG CombinedApcDisable; // offset: 0x13c (316)
      };
    };
  };
  struct _LIST_ENTRY QueueListEntry; // offset: 0x140 (320)
  union {
    volatile ULONG NextProcessor; // offset: 0x148 (328)
    struct {
      ULONG NextProcessorNumber : 31; // offset: 0x148 (328)
      ULONG SharedReadyQueue : 1;     // offset: 0x148 (328)
    };
  };
  LONG QueuePriority;        // offset: 0x14c (332)
  struct _KPROCESS *Process; // offset: 0x150 (336)
  union {
    struct _GROUP_AFFINITY UserAffinity; // offset: 0x154 (340)
    struct {
      UCHAR UserAffinityFill[6]; // offset: 0x154 (340)
      CHAR PreviousMode;         // offset: 0x15a (346)
      CHAR BasePriority;         // offset: 0x15b (347)
      union {
        CHAR PriorityDecrement; // offset: 0x15c (348)
        struct {
          UCHAR ForegroundBoost : 4; // offset: 0x15c (348)
          UCHAR UnusualBoost : 4;    // offset: 0x15c (348)
        };
      };
      UCHAR Preempted;      // offset: 0x15d (349)
      UCHAR AdjustReason;   // offset: 0x15e (350)
      CHAR AdjustIncrement; // offset: 0x15f (351)
    };
  };
  ULONG AffinityVersion; // offset: 0x160 (352)
  union {
    struct _GROUP_AFFINITY Affinity; // offset: 0x164 (356)
    struct {
      UCHAR AffinityFill[6]; // offset: 0x164 (356)
      UCHAR ApcStateIndex;   // offset: 0x16a (362)
      UCHAR WaitBlockCount;  // offset: 0x16b (363)
      ULONG IdealProcessor;  // offset: 0x16c (364)
    };
  };
  ULONG Spare15[1]; // offset: 0x170 (368)
  union {
    struct _KAPC_STATE SavedApcState; // offset: 0x174 (372)
    struct {
      UCHAR SavedApcStateFill[23]; // offset: 0x174 (372)
      UCHAR WaitReason;            // offset: 0x18b (395)
    };
  };
  CHAR SuspendCount;      // offset: 0x18c (396)
  CHAR Saturation;        // offset: 0x18d (397)
  USHORT SListFaultCount; // offset: 0x18e (398)
  union {
    struct _KAPC SchedulerApc; // offset: 0x190 (400)
    struct {
      UCHAR SchedulerApcFill0[1]; // offset: 0x190 (400)
      UCHAR ResourceIndex;        // offset: 0x191 (401)
    };
    struct {
      UCHAR SchedulerApcFill1[3]; // offset: 0x190 (400)
      UCHAR QuantumReset;         // offset: 0x193 (403)
    };
    struct {
      UCHAR SchedulerApcFill2[4]; // offset: 0x190 (400)
      ULONG KernelTime;           // offset: 0x194 (404)
    };
    struct {
      UCHAR SchedulerApcFill3[36];      // offset: 0x190 (400)
      struct _KPRCB *volatile WaitPrcb; // offset: 0x1b4 (436)
    };
    struct {
      UCHAR SchedulerApcFill4[40]; // offset: 0x190 (400)
      VOID *LegoData;              // offset: 0x1b8 (440)
    };
    struct {
      UCHAR SchedulerApcFill5[47]; // offset: 0x190 (400)
      UCHAR CallbackNestingLevel;  // offset: 0x1bf (447)
    };
  };
  ULONG UserTime;                                 // offset: 0x1c0 (448)
  struct _KEVENT SuspendEvent;                    // offset: 0x1c4 (452)
  struct _LIST_ENTRY ThreadListEntry;             // offset: 0x1d4 (468)
  struct _LIST_ENTRY MutantListHead;              // offset: 0x1dc (476)
  UCHAR AbEntrySummary;                           // offset: 0x1e4 (484)
  UCHAR AbWaitEntryCount;                         // offset: 0x1e5 (485)
  USHORT Spare20;                                 // offset: 0x1e6 (486)
  struct _KLOCK_ENTRY LockEntries[6];             // offset: 0x1e8 (488)
  struct _SINGLE_LIST_ENTRY PropagateBoostsEntry; // offset: 0x308 (776)
  struct _SINGLE_LIST_ENTRY IoSelfBoostsEntry;    // offset: 0x30c (780)
  UCHAR PriorityFloorCounts[16];                  // offset: 0x310 (784)
  ULONG PriorityFloorSummary;                     // offset: 0x320 (800)
  volatile LONG AbCompletedIoBoostCount;          // offset: 0x324 (804)
  volatile SHORT KeReferenceCount;                // offset: 0x328 (808)
  UCHAR AbOrphanedEntrySummary;                   // offset: 0x32a (810)
  UCHAR AbOwnedEntryCount;                        // offset: 0x32b (811)
  ULONG ForegroundLossTime;                       // offset: 0x32c (812)
  union {
    struct _LIST_ENTRY GlobalForegroundListEntry; // offset: 0x330 (816)
    struct {
      struct _SINGLE_LIST_ENTRY
          ForegroundDpcStackListEntry; // offset: 0x330 (816)
      ULONG InGlobalForegroundList;    // offset: 0x334 (820)
    };
  };
  struct _KSCB *QueuedScb; // offset: 0x338 (824)
  ULONGLONG NpxState;      // offset: 0x340 (832)
};

// 0x458 (1112) bytes
struct _ETHREAD {
  struct _KTHREAD Tcb;             // offset: 0x0 (0)
  union _LARGE_INTEGER CreateTime; // offset: 0x348 (840)
  union {
    union _LARGE_INTEGER ExitTime;     // offset: 0x350 (848)
    struct _LIST_ENTRY KeyedWaitChain; // offset: 0x350 (848)
  };
  VOID *ChargeOnlySession; // offset: 0x358 (856)
  union {
    struct _LIST_ENTRY PostBlockList; // offset: 0x35c (860)
    struct {
      VOID *ForwardLinkShadow; // offset: 0x35c (860)
      VOID *StartAddress;      // offset: 0x360 (864)
    };
  };
  union {
    struct _TERMINATION_PORT *TerminationPort; // offset: 0x364 (868)
    struct _ETHREAD *ReaperLink;               // offset: 0x364 (868)
    VOID *KeyedWaitValue;                      // offset: 0x364 (868)
  };
  ULONG ActiveTimerListLock;              // offset: 0x368 (872)
  struct _LIST_ENTRY ActiveTimerListHead; // offset: 0x36c (876)
  struct _CLIENT_ID Cid;                  // offset: 0x374 (884)
  union {
    struct _KSEMAPHORE KeyedWaitSemaphore; // offset: 0x37c (892)
    struct _KSEMAPHORE AlpcWaitSemaphore;  // offset: 0x37c (892)
  };
  union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity; // offset: 0x390 (912)
  struct _LIST_ENTRY IrpList;                       // offset: 0x394 (916)
  ULONG TopLevelIrp;                                // offset: 0x39c (924)
  struct _DEVICE_OBJECT *DeviceToVerify;            // offset: 0x3a0 (928)
  VOID *Win32StartAddress;                          // offset: 0x3a4 (932)
  VOID *LegacyPowerObject;                          // offset: 0x3a8 (936)
  struct _LIST_ENTRY ThreadListEntry;               // offset: 0x3ac (940)
  struct _EX_RUNDOWN_REF RundownProtect;            // offset: 0x3b4 (948)
  struct _EX_PUSH_LOCK ThreadLock;                  // offset: 0x3b8 (952)
  ULONG ReadClusterSize;                            // offset: 0x3bc (956)
  volatile LONG MmLockOrdering;                     // offset: 0x3c0 (960)
  volatile LONG CmLockOrdering;                     // offset: 0x3c4 (964)
  union {
    ULONG CrossThreadFlags; // offset: 0x3c8 (968)
    struct {
      ULONG Terminated : 1;                // offset: 0x3c8 (968)
      ULONG ThreadInserted : 1;            // offset: 0x3c8 (968)
      ULONG HideFromDebugger : 1;          // offset: 0x3c8 (968)
      ULONG ActiveImpersonationInfo : 1;   // offset: 0x3c8 (968)
      ULONG HardErrorsAreDisabled : 1;     // offset: 0x3c8 (968)
      ULONG BreakOnTermination : 1;        // offset: 0x3c8 (968)
      ULONG SkipCreationMsg : 1;           // offset: 0x3c8 (968)
      ULONG SkipTerminationMsg : 1;        // offset: 0x3c8 (968)
      ULONG CopyTokenOnOpen : 1;           // offset: 0x3c8 (968)
      ULONG ThreadIoPriority : 3;          // offset: 0x3c8 (968)
      ULONG ThreadPagePriority : 3;        // offset: 0x3c8 (968)
      ULONG RundownFail : 1;               // offset: 0x3c8 (968)
      ULONG UmsForceQueueTermination : 1;  // offset: 0x3c8 (968)
      ULONG IndirectCpuSets : 1;           // offset: 0x3c8 (968)
      ULONG ReservedCrossThreadFlags : 14; // offset: 0x3c8 (968)
    };
  };
  union {
    ULONG SameThreadPassiveFlags; // offset: 0x3cc (972)
    struct {
      ULONG ActiveExWorker : 1;                  // offset: 0x3cc (972)
      ULONG MemoryMaker : 1;                     // offset: 0x3cc (972)
      ULONG ClonedThread : 1;                    // offset: 0x3cc (972)
      ULONG KeyedEventInUse : 1;                 // offset: 0x3cc (972)
      ULONG SelfTerminate : 1;                   // offset: 0x3cc (972)
      ULONG RespectIoPriority : 1;               // offset: 0x3cc (972)
      ULONG ReservedSameThreadPassiveFlags : 26; // offset: 0x3cc (972)
    };
  };
  union {
    ULONG SameThreadApcFlags; // offset: 0x3d0 (976)
    struct {
      UCHAR OwnsProcessAddressSpaceExclusive : 1; // offset: 0x3d0 (976)
      UCHAR OwnsProcessAddressSpaceShared : 1;    // offset: 0x3d0 (976)
      UCHAR HardFaultBehavior : 1;                // offset: 0x3d0 (976)
      volatile UCHAR StartAddressInvalid : 1;     // offset: 0x3d0 (976)
      UCHAR EtwCalloutActive : 1;                 // offset: 0x3d0 (976)
      UCHAR SuppressSymbolLoad : 1;               // offset: 0x3d0 (976)
      UCHAR Prefetching : 1;                      // offset: 0x3d0 (976)
      UCHAR OwnsVadExclusive : 1;                 // offset: 0x3d0 (976)
      UCHAR SystemPagePriorityActive : 1;         // offset: 0x3d1 (977)
      UCHAR SystemPagePriority : 3;               // offset: 0x3d1 (977)
    };
  };
  UCHAR CacheManagerActive;         // offset: 0x3d4 (980)
  UCHAR DisablePageFaultClustering; // offset: 0x3d5 (981)
  UCHAR ActiveFaultCount;           // offset: 0x3d6 (982)
  UCHAR LockOrderState;             // offset: 0x3d7 (983)
  ULONG AlpcMessageId;              // offset: 0x3d8 (984)
  union {
    VOID *AlpcMessage;             // offset: 0x3dc (988)
    ULONG AlpcReceiveAttributeSet; // offset: 0x3dc (988)
  };
  LONG ExitStatus;                                  // offset: 0x3e0 (992)
  struct _LIST_ENTRY AlpcWaitListEntry;             // offset: 0x3e4 (996)
  ULONG CacheManagerCount;                          // offset: 0x3ec (1004)
  ULONG IoBoostCount;                               // offset: 0x3f0 (1008)
  struct _LIST_ENTRY BoostList;                     // offset: 0x3f4 (1012)
  struct _LIST_ENTRY DeboostList;                   // offset: 0x3fc (1020)
  ULONG BoostListLock;                              // offset: 0x404 (1028)
  ULONG IrpListLock;                                // offset: 0x408 (1032)
  VOID *ReservedForSynchTracking;                   // offset: 0x40c (1036)
  struct _SINGLE_LIST_ENTRY CmCallbackListHead;     // offset: 0x410 (1040)
  struct _GUID *ActivityId;                         // offset: 0x414 (1044)
  struct _SINGLE_LIST_ENTRY SeLearningModeListHead; // offset: 0x418 (1048)
  VOID *VerifierContext;                            // offset: 0x41c (1052)
  ULONG KernelStackReference;                       // offset: 0x420 (1056)
  VOID *AdjustedClientToken;                        // offset: 0x424 (1060)
  VOID *WorkingOnBehalfClient;                      // offset: 0x428 (1064)
  struct _PS_PROPERTY_SET PropertySet;              // offset: 0x42c (1068)
  VOID *PicoContext;                                // offset: 0x438 (1080)
  ULONG UserFsBase;                                 // offset: 0x43c (1084)
  ULONG UserGsBase;                                 // offset: 0x440 (1088)
  struct _THREAD_ENERGY_VALUES *EnergyValues;       // offset: 0x444 (1092)
  volatile ULONG CmCellReferences;                  // offset: 0x448 (1096)
  union {
    ULONG SelectedCpuSets;          // offset: 0x44c (1100)
    ULONG *SelectedCpuSetsIndirect; // offset: 0x44c (1100)
  };
  struct _ESILO *Silo; // offset: 0x450 (1104)
};

// 0xb0 (176) bytes
struct _KINTERRUPT {
  SHORT Type;                            // offset: 0x0 (0)
  SHORT Size;                            // offset: 0x2 (2)
  struct _LIST_ENTRY InterruptListEntry; // offset: 0x4 (4)
  UCHAR (*ServiceRoutine)
  (struct _KINTERRUPT *arg1, VOID *arg2); // offset: 0xc (12)
  UCHAR (*MessageServiceRoutine)
  (struct _KINTERRUPT *arg1, VOID *arg2, ULONG arg3); // offset: 0x10 (16)
  ULONG MessageIndex;                                 // offset: 0x14 (20)
  VOID *ServiceContext;                               // offset: 0x18 (24)
  ULONG SpinLock;                                     // offset: 0x1c (28)
  ULONG TickCount;                                    // offset: 0x20 (32)
  ULONG *ActualLock;                                  // offset: 0x24 (36)
  VOID (*DispatchAddress)();                          // offset: 0x28 (40)
  ULONG Vector;                                       // offset: 0x2c (44)
  UCHAR Irql;                                         // offset: 0x30 (48)
  UCHAR SynchronizeIrql;                              // offset: 0x31 (49)
  UCHAR FloatingSave;                                 // offset: 0x32 (50)
  UCHAR Connected;                                    // offset: 0x33 (51)
  ULONG Number;                                       // offset: 0x34 (52)
  UCHAR ShareVector;                                  // offset: 0x38 (56)
  UCHAR EmulateActiveBoth;                            // offset: 0x39 (57)
  USHORT ActiveCount;                                 // offset: 0x3a (58)
  LONG InternalState;                                 // offset: 0x3c (60)
  enum _KINTERRUPT_MODE Mode;                         // offset: 0x40 (64)
  enum _KINTERRUPT_POLARITY Polarity;                 // offset: 0x44 (68)
  ULONG ServiceCount;                                 // offset: 0x48 (72)
  ULONG DispatchCount;                                // offset: 0x4c (76)
  struct _KEVENT *PassiveEvent;                       // offset: 0x50 (80)
  VOID *DisconnectData;                               // offset: 0x54 (84)
  struct _KTHREAD *volatile ServiceThread;            // offset: 0x58 (88)
  struct _INTERRUPT_CONNECTION_DATA *ConnectionData;  // offset: 0x5c (92)
  VOID *IntTrackEntry;                                // offset: 0x60 (96)
  struct _ISRDPCSTATS IsrDpcStats;                    // offset: 0x68 (104)
  VOID *RedirectObject;                               // offset: 0xa8 (168)
};

// 0x1c (28) bytes
struct _KSECONDARY_IDT_ENTRY {
  ULONG SpinLock;                    // offset: 0x0 (0)
  struct _KEVENT ConnectLock;        // offset: 0x4 (4)
  UCHAR LineMasked;                  // offset: 0x14 (20)
  struct _KINTERRUPT *InterruptList; // offset: 0x18 (24)
};

// 0x50 (80) bytes
struct _PROC_PERF_CONSTRAINT {
  struct _KPRCB *Prcb;            // offset: 0x0 (0)
  ULONG PerfContext;              // offset: 0x4 (4)
  ULONG ProcCap;                  // offset: 0x8 (8)
  ULONG ProcFloor;                // offset: 0xc (12)
  ULONG PlatformCap;              // offset: 0x10 (16)
  ULONG ThermalCap;               // offset: 0x14 (20)
  ULONG LimitReasons;             // offset: 0x18 (24)
  ULONGLONG PlatformCapStartTime; // offset: 0x20 (32)
  ULONG TargetPercent;            // offset: 0x28 (40)
  ULONG SelectedPercent;          // offset: 0x2c (44)
  ULONG SelectedFrequency;        // offset: 0x30 (48)
  ULONG PreviousFrequency;        // offset: 0x34 (52)
  ULONG PreviousPercent;          // offset: 0x38 (56)
  ULONG LatestFrequencyPercent;   // offset: 0x3c (60)
  ULONGLONG SelectedState;        // offset: 0x40 (64)
  UCHAR Force;                    // offset: 0x48 (72)
};

// 0xb8 (184) bytes
struct _PROC_PERF_DOMAIN {
  struct _LIST_ENTRY Link;                            // offset: 0x0 (0)
  struct _KPRCB *Master;                              // offset: 0x8 (8)
  struct _KAFFINITY_EX Members;                       // offset: 0xc (12)
  ULONG ProcessorCount;                               // offset: 0x18 (24)
  UCHAR Class;                                        // offset: 0x1c (28)
  UCHAR Spare[3];                                     // offset: 0x1d (29)
  struct _PROC_PERF_CONSTRAINT *Processors;           // offset: 0x20 (32)
  VOID (*GetFFHThrottleState)(ULONGLONG *arg1);       // offset: 0x24 (36)
  VOID (*TimeWindowHandler)(ULONG arg1, ULONG arg2);  // offset: 0x28 (40)
  VOID (*BoostPolicyHandler)(ULONG arg1, ULONG arg2); // offset: 0x2c (44)
  VOID (*BoostModeHandler)(ULONG arg1, ULONG arg2);   // offset: 0x30 (48)
  VOID (*EnergyPerfPreferenceHandler)
  (ULONG arg1, ULONG arg2); // offset: 0x34 (52)
  VOID (*AutonomousActivityWindowHandler)
  (ULONG arg1, ULONG arg2);                              // offset: 0x38 (56)
  VOID (*AutonomousModeHandler)(ULONG arg1, ULONG arg2); // offset: 0x3c (60)
  VOID (*ReinitializeHandler)(ULONG arg1);               // offset: 0x40 (64)
  ULONG (*PerfSelectionHandler)
  (ULONG arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG *arg6,
   ULONGLONG *arg7); // offset: 0x44 (68)
  VOID (*PerfControlHandler)
  (ULONG arg1, ULONGLONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, UCHAR arg6,
   UCHAR arg7, UCHAR arg8);             // offset: 0x48 (72)
  ULONG MaxFrequency;                   // offset: 0x4c (76)
  ULONG NominalFrequency;               // offset: 0x50 (80)
  ULONG MaxPercent;                     // offset: 0x54 (84)
  ULONG MinPerfPercent;                 // offset: 0x58 (88)
  ULONG MinThrottlePercent;             // offset: 0x5c (92)
  ULONGLONG MinimumRelativePerformance; // offset: 0x60 (96)
  ULONGLONG NominalRelativePerformance; // offset: 0x68 (104)
  UCHAR Coordination;                   // offset: 0x70 (112)
  UCHAR HardPlatformCap;                // offset: 0x71 (113)
  UCHAR AffinitizeControl;              // offset: 0x72 (114)
  UCHAR EfficientThrottle;              // offset: 0x73 (115)
  UCHAR AutonomousMode;                 // offset: 0x74 (116)
  ULONG SelectedPercent;                // offset: 0x78 (120)
  ULONG SelectedFrequency;              // offset: 0x7c (124)
  ULONG DesiredPercent;                 // offset: 0x80 (128)
  ULONG MaxPolicyPercent;               // offset: 0x84 (132)
  ULONG MinPolicyPercent;               // offset: 0x88 (136)
  ULONG ConstrainedMaxPercent;          // offset: 0x8c (140)
  ULONG ConstrainedMinPercent;          // offset: 0x90 (144)
  ULONG GuaranteedPercent;              // offset: 0x94 (148)
  ULONG TolerancePercent;               // offset: 0x98 (152)
  ULONGLONG SelectedState;              // offset: 0xa0 (160)
  ULONGLONG PerfChangeTime;             // offset: 0xa8 (168)
  ULONG PerfChangeIntervalCount;        // offset: 0xb0 (176)
  UCHAR Force;                          // offset: 0xb4 (180)
  UCHAR ProvideGuidance;                // offset: 0xb5 (181)
};

// 0x4a20 (18976) bytes
struct _KPCR {
  union {
    struct _NT_TIB NtTib; // offset: 0x0 (0)
    struct {
      struct _EXCEPTION_REGISTRATION_RECORD
          *Used_ExceptionList; // offset: 0x0 (0)
      VOID *Used_StackBase;    // offset: 0x4 (4)
      ULONG MxCsr;             // offset: 0x8 (8)
      VOID *TssCopy;           // offset: 0xc (12)
      ULONG ContextSwitches;   // offset: 0x10 (16)
      ULONG SetMemberCopy;     // offset: 0x14 (20)
      VOID *Used_Self;         // offset: 0x18 (24)
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

// 0x250 (592) bytes
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
  VOID *Mutant;                                           // offset: 0x4 (4)
  VOID *ImageBaseAddress;                                 // offset: 0x8 (8)
  struct _PEB_LDR_DATA *Ldr;                              // offset: 0xc (12)
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // offset: 0x10 (16)
  VOID *SubSystemData;                                    // offset: 0x14 (20)
  VOID *ProcessHeap;                                      // offset: 0x18 (24)
  struct _RTL_CRITICAL_SECTION *FastPebLock;              // offset: 0x1c (28)
  VOID *AtlThunkSListPtr;                                 // offset: 0x20 (32)
  VOID *IFEOKey;                                          // offset: 0x24 (36)
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
    VOID *KernelCallbackTable; // offset: 0x2c (44)
    VOID *UserSharedInfoPtr;   // offset: 0x2c (44)
  };
  ULONG SystemReserved[1];                                // offset: 0x30 (48)
  ULONG AtlThunkSListPtr32;                               // offset: 0x34 (52)
  VOID *ApiSetMap;                                        // offset: 0x38 (56)
  ULONG TlsExpansionCounter;                              // offset: 0x3c (60)
  VOID *TlsBitmap;                                        // offset: 0x40 (64)
  ULONG TlsBitmapBits[2];                                 // offset: 0x44 (68)
  VOID *ReadOnlySharedMemoryBase;                         // offset: 0x4c (76)
  VOID *SparePvoid0;                                      // offset: 0x50 (80)
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
  ULONG ActiveProcessAffinityMask;                        // offset: 0xc0 (192)
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
  struct _FLS_CALLBACK_INFO *FlsCallback;                 // offset: 0x20c (524)
  struct _LIST_ENTRY FlsListHead;                         // offset: 0x210 (528)
  VOID *FlsBitmap;                                        // offset: 0x218 (536)
  ULONG FlsBitmapBits[4];                                 // offset: 0x21c (540)
  ULONG FlsHighIndex;                                     // offset: 0x22c (556)
  VOID *WerRegistrationData;                              // offset: 0x230 (560)
  VOID *WerShipAssertPtr;                                 // offset: 0x234 (564)
  VOID *pUnused;                                          // offset: 0x238 (568)
  VOID *pImageHeaderHash;                                 // offset: 0x23c (572)
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
};

// 0x380 (896) bytes
struct _EPROCESS {
  struct _KPROCESS Pcb;                  // offset: 0x0 (0)
  struct _EX_PUSH_LOCK ProcessLock;      // offset: 0xa8 (168)
  struct _EX_RUNDOWN_REF RundownProtect; // offset: 0xac (172)
  VOID *VdmObjects;                      // offset: 0xb0 (176)
  VOID *UniqueProcessId;                 // offset: 0xb4 (180)
  struct _LIST_ENTRY ActiveProcessLinks; // offset: 0xb8 (184)
  union {
    ULONG Flags2; // offset: 0xc0 (192)
    struct {
      ULONG JobNotReallyActive : 1;           // offset: 0xc0 (192)
      ULONG AccountingFolded : 1;             // offset: 0xc0 (192)
      ULONG NewProcessReported : 1;           // offset: 0xc0 (192)
      ULONG ExitProcessReported : 1;          // offset: 0xc0 (192)
      ULONG ReportCommitChanges : 1;          // offset: 0xc0 (192)
      ULONG LastReportMemory : 1;             // offset: 0xc0 (192)
      ULONG ForceWakeCharge : 1;              // offset: 0xc0 (192)
      ULONG CrossSessionCreate : 1;           // offset: 0xc0 (192)
      ULONG NeedsHandleRundown : 1;           // offset: 0xc0 (192)
      ULONG RefTraceEnabled : 1;              // offset: 0xc0 (192)
      ULONG DisableDynamicCode : 1;           // offset: 0xc0 (192)
      ULONG EmptyJobEvaluated : 1;            // offset: 0xc0 (192)
      ULONG DefaultPagePriority : 3;          // offset: 0xc0 (192)
      ULONG PrimaryTokenFrozen : 1;           // offset: 0xc0 (192)
      ULONG ProcessVerifierTarget : 1;        // offset: 0xc0 (192)
      ULONG StackRandomizationDisabled : 1;   // offset: 0xc0 (192)
      ULONG AffinityPermanent : 1;            // offset: 0xc0 (192)
      ULONG AffinityUpdateEnable : 1;         // offset: 0xc0 (192)
      ULONG PropagateNode : 1;                // offset: 0xc0 (192)
      ULONG ExplicitAffinity : 1;             // offset: 0xc0 (192)
      ULONG ProcessExecutionState : 2;        // offset: 0xc0 (192)
      ULONG DisallowStrippedImages : 1;       // offset: 0xc0 (192)
      ULONG HighEntropyASLREnabled : 1;       // offset: 0xc0 (192)
      ULONG ExtensionPointDisable : 1;        // offset: 0xc0 (192)
      ULONG ForceRelocateImages : 1;          // offset: 0xc0 (192)
      ULONG ProcessStateChangeRequest : 2;    // offset: 0xc0 (192)
      ULONG ProcessStateChangeInProgress : 1; // offset: 0xc0 (192)
      ULONG DisallowWin32kSystemCalls : 1;    // offset: 0xc0 (192)
    };
  };
  union {
    ULONG Flags; // offset: 0xc4 (196)
    struct {
      ULONG CreateReported : 1;          // offset: 0xc4 (196)
      ULONG NoDebugInherit : 1;          // offset: 0xc4 (196)
      ULONG ProcessExiting : 1;          // offset: 0xc4 (196)
      ULONG ProcessDelete : 1;           // offset: 0xc4 (196)
      ULONG ControlFlowGuardEnabled : 1; // offset: 0xc4 (196)
      ULONG VmDeleted : 1;               // offset: 0xc4 (196)
      ULONG OutswapEnabled : 1;          // offset: 0xc4 (196)
      ULONG Outswapped : 1;              // offset: 0xc4 (196)
      ULONG FailFastOnCommitFail : 1;    // offset: 0xc4 (196)
      ULONG Wow64VaSpace4Gb : 1;         // offset: 0xc4 (196)
      ULONG AddressSpaceInitialized : 2; // offset: 0xc4 (196)
      ULONG SetTimerResolution : 1;      // offset: 0xc4 (196)
      ULONG BreakOnTermination : 1;      // offset: 0xc4 (196)
      ULONG DeprioritizeViews : 1;       // offset: 0xc4 (196)
      ULONG WriteWatch : 1;              // offset: 0xc4 (196)
      ULONG ProcessInSession : 1;        // offset: 0xc4 (196)
      ULONG OverrideAddressSpace : 1;    // offset: 0xc4 (196)
      ULONG HasAddressSpace : 1;         // offset: 0xc4 (196)
      ULONG LaunchPrefetched : 1;        // offset: 0xc4 (196)
      ULONG Background : 1;              // offset: 0xc4 (196)
      ULONG VmTopDown : 1;               // offset: 0xc4 (196)
      ULONG ImageNotifyDone : 1;         // offset: 0xc4 (196)
      ULONG PdeUpdateNeeded : 1;         // offset: 0xc4 (196)
      ULONG VdmAllowed : 1;              // offset: 0xc4 (196)
      ULONG ProcessRundown : 1;          // offset: 0xc4 (196)
      ULONG ProcessInserted : 1;         // offset: 0xc4 (196)
      ULONG DefaultIoPriority : 3;       // offset: 0xc4 (196)
      ULONG ProcessSelfDelete : 1;       // offset: 0xc4 (196)
      ULONG SetTimerResolutionLink : 1;  // offset: 0xc4 (196)
    };
  };
  union _LARGE_INTEGER CreateTime;        // offset: 0xc8 (200)
  ULONG ProcessQuotaUsage[2];             // offset: 0xd0 (208)
  ULONG ProcessQuotaPeak[2];              // offset: 0xd8 (216)
  ULONG PeakVirtualSize;                  // offset: 0xe0 (224)
  ULONG VirtualSize;                      // offset: 0xe4 (228)
  struct _LIST_ENTRY SessionProcessLinks; // offset: 0xe8 (232)
  union {
    VOID *ExceptionPortData;      // offset: 0xf0 (240)
    ULONG ExceptionPortValue;     // offset: 0xf0 (240)
    ULONG ExceptionPortState : 3; // offset: 0xf0 (240)
  };
  struct _EX_FAST_REF Token;                    // offset: 0xf4 (244)
  ULONG WorkingSetPage;                         // offset: 0xf8 (248)
  struct _EX_PUSH_LOCK AddressCreationLock;     // offset: 0xfc (252)
  struct _EX_PUSH_LOCK PageTableCommitmentLock; // offset: 0x100 (256)
  struct _ETHREAD *RotateInProgress;            // offset: 0x104 (260)
  struct _ETHREAD *ForkInProgress;              // offset: 0x108 (264)
  struct _EJOB *volatile CommitChargeJob;       // offset: 0x10c (268)
  struct _RTL_AVL_TREE CloneRoot;               // offset: 0x110 (272)
  volatile ULONG NumberOfPrivatePages;          // offset: 0x114 (276)
  volatile ULONG NumberOfLockedPages;           // offset: 0x118 (280)
  VOID *Win32Process;                           // offset: 0x11c (284)
  struct _EJOB *volatile Job;                   // offset: 0x120 (288)
  VOID *SectionObject;                          // offset: 0x124 (292)
  VOID *SectionBaseAddress;                     // offset: 0x128 (296)
  ULONG Cookie;                                 // offset: 0x12c (300)
  struct _PAGEFAULT_HISTORY *WorkingSetWatch;   // offset: 0x130 (304)
  VOID *Win32WindowStation;                     // offset: 0x134 (308)
  VOID *InheritedFromUniqueProcessId;           // offset: 0x138 (312)
  VOID *LdtInformation;                         // offset: 0x13c (316)
  volatile ULONG OwnerProcessId;                // offset: 0x140 (320)
  struct _PEB *Peb;                             // offset: 0x144 (324)
  VOID *Session;                                // offset: 0x148 (328)
  VOID *AweInfo;                                // offset: 0x14c (332)
  struct _EPROCESS_QUOTA_BLOCK *QuotaBlock;     // offset: 0x150 (336)
  struct _HANDLE_TABLE *ObjectTable;            // offset: 0x154 (340)
  VOID *DebugPort;                              // offset: 0x158 (344)
  VOID *PaeTop;                                 // offset: 0x15c (348)
  VOID *DeviceMap;                              // offset: 0x160 (352)
  VOID *EtwDataSource;                          // offset: 0x164 (356)
  ULONGLONG PageDirectoryPte;                   // offset: 0x168 (360)
  UCHAR ImageFileName[15];                      // offset: 0x170 (368)
  UCHAR PriorityClass;                          // offset: 0x17f (383)
  VOID *SecurityPort;                           // offset: 0x180 (384)
  struct _SE_AUDIT_PROCESS_CREATION_INFO
      SeAuditProcessCreationInfo;           // offset: 0x184 (388)
  struct _LIST_ENTRY JobLinks;              // offset: 0x188 (392)
  VOID *HighestUserAddress;                 // offset: 0x190 (400)
  struct _LIST_ENTRY ThreadListHead;        // offset: 0x194 (404)
  volatile ULONG ActiveThreads;             // offset: 0x19c (412)
  ULONG ImagePathHash;                      // offset: 0x1a0 (416)
  ULONG DefaultHardErrorProcessing;         // offset: 0x1a4 (420)
  LONG LastThreadExitStatus;                // offset: 0x1a8 (424)
  struct _EX_FAST_REF PrefetchTrace;        // offset: 0x1ac (428)
  VOID *LockedPagesList;                    // offset: 0x1b0 (432)
  union _LARGE_INTEGER ReadOperationCount;  // offset: 0x1b8 (440)
  union _LARGE_INTEGER WriteOperationCount; // offset: 0x1c0 (448)
  union _LARGE_INTEGER OtherOperationCount; // offset: 0x1c8 (456)
  union _LARGE_INTEGER ReadTransferCount;   // offset: 0x1d0 (464)
  union _LARGE_INTEGER WriteTransferCount;  // offset: 0x1d8 (472)
  union _LARGE_INTEGER OtherTransferCount;  // offset: 0x1e0 (480)
  ULONG CommitChargeLimit;                  // offset: 0x1e8 (488)
  volatile ULONG CommitCharge;              // offset: 0x1ec (492)
  volatile ULONG CommitChargePeak;          // offset: 0x1f0 (496)
  struct _MMSUPPORT Vm;                     // offset: 0x1f4 (500)
  struct _LIST_ENTRY MmProcessLinks;        // offset: 0x274 (628)
  ULONG ModifiedPageCount;                  // offset: 0x27c (636)
  LONG ExitStatus;                          // offset: 0x280 (640)
  struct _RTL_AVL_TREE VadRoot;             // offset: 0x284 (644)
  VOID *VadHint;                            // offset: 0x288 (648)
  ULONG VadCount;                           // offset: 0x28c (652)
  volatile ULONG VadPhysicalPages;          // offset: 0x290 (656)
  ULONG VadPhysicalPagesLimit;              // offset: 0x294 (660)
  struct _ALPC_PROCESS_CONTEXT AlpcContext; // offset: 0x298 (664)
  struct _LIST_ENTRY TimerResolutionLink;   // offset: 0x2a8 (680)
  struct _PO_DIAG_STACK_RECORD
      *TimerResolutionStackRecord;     // offset: 0x2b0 (688)
  ULONG RequestedTimerResolution;      // offset: 0x2b4 (692)
  ULONG SmallestTimerResolution;       // offset: 0x2b8 (696)
  union _LARGE_INTEGER ExitTime;       // offset: 0x2c0 (704)
  ULONG ActiveThreadsHighWatermark;    // offset: 0x2c8 (712)
  ULONG LargePrivateVadCount;          // offset: 0x2cc (716)
  struct _EX_PUSH_LOCK ThreadListLock; // offset: 0x2d0 (720)
  VOID *WnfContext;                    // offset: 0x2d4 (724)
  ULONG Spare0;                        // offset: 0x2d8 (728)
  UCHAR SignatureLevel;                // offset: 0x2dc (732)
  UCHAR SectionSignatureLevel;         // offset: 0x2dd (733)
  struct _PS_PROTECTION Protection;    // offset: 0x2de (734)
  UCHAR HangCount;                     // offset: 0x2df (735)
  union {
    ULONG Flags3; // offset: 0x2e0 (736)
    struct {
      ULONG Minimal : 1;                   // offset: 0x2e0 (736)
      ULONG ReplacingPageRoot : 1;         // offset: 0x2e0 (736)
      ULONG DisableNonSystemFonts : 1;     // offset: 0x2e0 (736)
      ULONG AuditNonSystemFontLoading : 1; // offset: 0x2e0 (736)
      ULONG Crashed : 1;                   // offset: 0x2e0 (736)
      ULONG JobVadsAreTracked : 1;         // offset: 0x2e0 (736)
      ULONG VadTrackingDisabled : 1;       // offset: 0x2e0 (736)
      ULONG AuxiliaryProcess : 1;          // offset: 0x2e0 (736)
      ULONG SubsystemProcess : 1;          // offset: 0x2e0 (736)
      ULONG IndirectCpuSets : 1;           // offset: 0x2e0 (736)
      ULONG InPrivate : 1;                 // offset: 0x2e0 (736)
    };
  };
  LONG DeviceAsid;                             // offset: 0x2e4 (740)
  VOID *SvmData;                               // offset: 0x2e8 (744)
  struct _EX_PUSH_LOCK SvmProcessLock;         // offset: 0x2ec (748)
  ULONG SvmLock;                               // offset: 0x2f0 (752)
  struct _LIST_ENTRY SvmProcessDeviceListHead; // offset: 0x2f4 (756)
  ULONGLONG LastFreezeInterruptTime;           // offset: 0x300 (768)
  struct _PROCESS_DISK_COUNTERS *DiskCounters; // offset: 0x308 (776)
  VOID *PicoContext;                           // offset: 0x30c (780)
  ULONG KeepAliveCounter;                      // offset: 0x310 (784)
  ULONG NoWakeKeepAliveCounter;                // offset: 0x314 (788)
  ULONG HighPriorityFaultsAllowed;             // offset: 0x318 (792)
  VOID *InstrumentationCallback;               // offset: 0x31c (796)
  struct _PROCESS_ENERGY_VALUES *EnergyValues; // offset: 0x320 (800)
  VOID *VmContext;                             // offset: 0x324 (804)
  struct _ESILO *Silo;                         // offset: 0x328 (808)
  struct _LIST_ENTRY SiloEntry;                // offset: 0x32c (812)
  ULONGLONG SequenceNumber;                    // offset: 0x338 (824)
  ULONGLONG CreateInterruptTime;               // offset: 0x340 (832)
  ULONGLONG CreateUnbiasedInterruptTime;       // offset: 0x348 (840)
  ULONGLONG TotalUnbiasedFrozenTime;           // offset: 0x350 (848)
  ULONGLONG LastAppStateUpdateTime;            // offset: 0x358 (856)
  ULONGLONG LastAppStateUptime : 61;           // offset: 0x360 (864)
  ULONGLONG LastAppState : 3;                  // offset: 0x360 (864)
  volatile ULONG SharedCommitCharge;           // offset: 0x368 (872)
  struct _EX_PUSH_LOCK SharedCommitLock;       // offset: 0x36c (876)
  struct _LIST_ENTRY SharedCommitLinks;        // offset: 0x370 (880)
  union {
    struct {
      ULONG AllowedCpuSets; // offset: 0x378 (888)
      ULONG DefaultCpuSets; // offset: 0x37c (892)
    };
    struct {
      ULONG *AllowedCpuSetsIndirect; // offset: 0x378 (888)
      ULONG *DefaultCpuSetsIndirect; // offset: 0x37c (892)
    };
  };
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

// 0x3c (60) bytes
struct _ETW_REG_ENTRY {
  struct _LIST_ENTRY RegList;         // offset: 0x0 (0)
  struct _LIST_ENTRY GroupRegList;    // offset: 0x8 (8)
  struct _ETW_GUID_ENTRY *GuidEntry;  // offset: 0x10 (16)
  struct _ETW_GUID_ENTRY *GroupEntry; // offset: 0x14 (20)
  union {
    struct _ETW_REPLY_QUEUE *ReplyQueue;   // offset: 0x18 (24)
    struct _ETW_QUEUE_ENTRY *ReplySlot[4]; // offset: 0x18 (24)
    struct {
      VOID *Caller;    // offset: 0x18 (24)
      ULONG SessionId; // offset: 0x1c (28)
    };
  };
  union {
    struct _EPROCESS *Process; // offset: 0x28 (40)
    VOID *CallbackContext;     // offset: 0x28 (40)
  };
  VOID *Callback; // offset: 0x2c (44)
  USHORT Index;   // offset: 0x30 (48)
  union {
    UCHAR Flags; // offset: 0x32 (50)
    struct {
      UCHAR DbgKernelRegistration : 1;       // offset: 0x32 (50)
      UCHAR DbgUserRegistration : 1;         // offset: 0x32 (50)
      UCHAR DbgReplyRegistration : 1;        // offset: 0x32 (50)
      UCHAR DbgClassicRegistration : 1;      // offset: 0x32 (50)
      UCHAR DbgSessionSpaceRegistration : 1; // offset: 0x32 (50)
      UCHAR DbgModernRegistration : 1;       // offset: 0x32 (50)
      UCHAR DbgClosed : 1;                   // offset: 0x32 (50)
      UCHAR DbgInserted : 1;                 // offset: 0x32 (50)
    };
  };
  UCHAR EnableMask;                    // offset: 0x33 (51)
  UCHAR GroupEnableMask;               // offset: 0x34 (52)
  UCHAR UseDescriptorType;             // offset: 0x35 (53)
  struct _ETW_PROVIDER_TRAITS *Traits; // offset: 0x38 (56)
};

// 0x20 (32) bytes
struct _ETW_QUEUE_ENTRY {
  struct _LIST_ENTRY ListEntry;                // offset: 0x0 (0)
  struct _ETWP_NOTIFICATION_HEADER *DataBlock; // offset: 0x8 (8)
  struct _ETW_REG_ENTRY *RegEntry;             // offset: 0xc (12)
  struct _ETW_REG_ENTRY *ReplyObject;          // offset: 0x10 (16)
  VOID *WakeReference;                         // offset: 0x14 (20)
  USHORT RegIndex;                             // offset: 0x18 (24)
  USHORT ReplyIndex;                           // offset: 0x1a (26)
  ULONG Flags;                                 // offset: 0x1c (28)
};

// 0x18 (24) bytes
struct _MI_REVERSE_VIEW_MAP {
  struct _LIST_ENTRY ViewLinks; // offset: 0x0 (0)
  union {
    VOID *SystemCacheVa;           // offset: 0x8 (8)
    VOID *SessionViewVa;           // offset: 0x8 (8)
    struct _EPROCESS *VadsProcess; // offset: 0x8 (8)
    ULONG Type : 2;                // offset: 0x8 (8)
  };
  union {
    struct _SUBSECTION *Subsection; // offset: 0xc (12)
    ULONG SubsectionType : 1;       // offset: 0xc (12)
  };
  ULONGLONG SectionOffset; // offset: 0x10 (16)
};

// 0x50 (80) bytes
struct _NONOPAQUE_OPLOCK {
  struct _IRP *IrpExclusiveOplock;             // offset: 0x0 (0)
  struct _FILE_OBJECT *FileObject;             // offset: 0x4 (4)
  struct _EPROCESS *ExclusiveOplockOwner;      // offset: 0x8 (8)
  struct _ETHREAD *ExclusiveOplockOwnerThread; // offset: 0xc (12)
  UCHAR WaiterPriority;                        // offset: 0x10 (16)
  struct _LIST_ENTRY IrpOplocksR;              // offset: 0x14 (20)
  struct _LIST_ENTRY IrpOplocksRH;             // offset: 0x1c (28)
  struct _LIST_ENTRY RHBreakQueue;             // offset: 0x24 (36)
  struct _LIST_ENTRY WaitingIrps;              // offset: 0x2c (44)
  struct _LIST_ENTRY DelayAckFileObjectQueue;  // offset: 0x34 (52)
  struct _LIST_ENTRY AtomicQueue;              // offset: 0x3c (60)
  struct _GUID *DeleterParentKey;              // offset: 0x44 (68)
  ULONG OplockState;                           // offset: 0x48 (72)
  struct _FAST_MUTEX *FastMutex;               // offset: 0x4c (76)
};

// 0x24 (36) bytes
struct _POP_SHUTDOWN_BUG_CHECK {
  struct _ETHREAD *InitiatingThread;   // offset: 0x0 (0)
  struct _EPROCESS *InitiatingProcess; // offset: 0x4 (4)
  VOID *ThreadId;                      // offset: 0x8 (8)
  VOID *ProcessId;                     // offset: 0xc (12)
  ULONG Code;                          // offset: 0x10 (16)
  ULONG Parameter1;                    // offset: 0x14 (20)
  ULONG Parameter2;                    // offset: 0x18 (24)
  ULONG Parameter3;                    // offset: 0x1c (28)
  ULONG Parameter4;                    // offset: 0x20 (32)
};

// 0x100 (256) bytes
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
  struct _POP_DEVICE_SYS_STATE *DevState;          // offset: 0x34 (52)
  struct _POP_HIBER_CONTEXT *HiberContext;         // offset: 0x38 (56)
  ULONGLONG WakeTime;                              // offset: 0x40 (64)
  ULONGLONG SleepTime;                             // offset: 0x48 (72)
  enum SYSTEM_POWER_CONDITION WakeAlarmSignaled;   // offset: 0x50 (80)
  struct {
    ULONGLONG RequestedTime;                             // offset: 0x0 (0)
    ULONGLONG ProgrammedTime;                            // offset: 0x8 (8)
    struct _DIAGNOSTIC_BUFFER *TimerInfo;                // offset: 0x10 (16)
  } WakeAlarm[3];                                        // offset: 0x58 (88)
  UCHAR WakeAlarmPaused;                                 // offset: 0xa0 (160)
  ULONGLONG WakeAlarmLastTime;                           // offset: 0xa8 (168)
  struct SYSTEM_POWER_CAPABILITIES FilteredCapabilities; // offset: 0xb0 (176)
};

// 0x4c (76) bytes
struct _LOCK_TRACKER {
  struct _RTL_BALANCED_NODE LockTrackerNode; // offset: 0x0 (0)
  struct _MDL *Mdl;                          // offset: 0xc (12)
  VOID *StartVa;                             // offset: 0x10 (16)
  ULONG Count;                               // offset: 0x14 (20)
  ULONG Offset;                              // offset: 0x18 (24)
  ULONG Length;                              // offset: 0x1c (28)
  ULONG Page;                                // offset: 0x20 (32)
  VOID *StackTrace[8];                       // offset: 0x24 (36)
  ULONG Who;                                 // offset: 0x44 (68)
  struct _EPROCESS *Process;                 // offset: 0x48 (72)
};

// 0x10 (16) bytes
struct _DIAGNOSTIC_CONTEXT {
  enum _REQUESTER_TYPE CallerType; // offset: 0x0 (0)
  union {
    struct {
      struct _EPROCESS *Process; // offset: 0x4 (4)
      ULONG ServiceTag;          // offset: 0x8 (8)
    };
    struct _DEVICE_OBJECT *DeviceObject; // offset: 0x4 (4)
  };
  ULONG ReasonSize; // offset: 0xc (12)
};

// 0xb8 (184) bytes
struct _ETIMER {
  struct _KTIMER KeTimer;                  // offset: 0x0 (0)
  ULONG Lock;                              // offset: 0x28 (40)
  struct _KAPC TimerApc;                   // offset: 0x2c (44)
  struct _KDPC TimerDpc;                   // offset: 0x5c (92)
  struct _LIST_ENTRY ActiveTimerListEntry; // offset: 0x7c (124)
  ULONG Period;                            // offset: 0x84 (132)
  union {
    CHAR TimerFlags; // offset: 0x88 (136)
    struct {
      UCHAR ApcAssociated : 1; // offset: 0x88 (136)
      UCHAR FlushDpcs : 1;     // offset: 0x88 (136)
      UCHAR Paused : 1;        // offset: 0x88 (136)
      UCHAR Spare1 : 5;        // offset: 0x88 (136)
    };
  };
  UCHAR DueTimeType;                               // offset: 0x89 (137)
  USHORT Spare2;                                   // offset: 0x8a (138)
  struct _DIAGNOSTIC_CONTEXT *volatile WakeReason; // offset: 0x8c (140)
  struct _LIST_ENTRY WakeTimerListEntry;           // offset: 0x90 (144)
  VOID *VirtualizedTimerCookie;                    // offset: 0x98 (152)
  struct _LIST_ENTRY VirtualizedTimerLinks;        // offset: 0x9c (156)
  ULONGLONG DueTime;                               // offset: 0xa8 (168)
  ULONG CoalescingWindow;                          // offset: 0xb0 (176)
};

// 0x24 (36) bytes
struct _RH_OP_CONTEXT {
  struct _LIST_ENTRY Links;                     // offset: 0x0 (0)
  struct _IRP *OplockRequestIrp;                // offset: 0x8 (8)
  struct _FILE_OBJECT *OplockRequestFileObject; // offset: 0xc (12)
  struct _EPROCESS *OplockRequestProcess;       // offset: 0x10 (16)
  struct _ETHREAD *OplockOwnerThread;           // offset: 0x14 (20)
  ULONG Flags;                                  // offset: 0x18 (24)
  struct _LIST_ENTRY AtomicLinks;               // offset: 0x1c (28)
};

// 0x14 (20) bytes
struct _KRESOURCEMANAGER_COMPLETION_BINDING {
  struct _LIST_ENTRY NotificationListHead; // offset: 0x0 (0)
  VOID *Port;                              // offset: 0x8 (8)
  ULONG Key;                               // offset: 0xc (12)
  struct _EPROCESS *BindingProcess;        // offset: 0x10 (16)
};

// 0x154 (340) bytes
struct _KRESOURCEMANAGER {
  struct _KEVENT NotificationAvailable;           // offset: 0x0 (0)
  ULONG cookie;                                   // offset: 0x10 (16)
  enum _KRESOURCEMANAGER_STATE State;             // offset: 0x14 (20)
  ULONG Flags;                                    // offset: 0x18 (24)
  struct _KMUTANT Mutex;                          // offset: 0x1c (28)
  struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink; // offset: 0x3c (60)
  struct _GUID RmId;                              // offset: 0x50 (80)
  struct _KQUEUE NotificationQueue;               // offset: 0x60 (96)
  struct _KMUTANT NotificationMutex;              // offset: 0x88 (136)
  struct _LIST_ENTRY EnlistmentHead;              // offset: 0xa8 (168)
  ULONG EnlistmentCount;                          // offset: 0xb0 (176)
  LONG (*NotificationRoutine)
  (struct _KENLISTMENT *arg1, VOID *arg2, VOID *arg3, ULONG arg4,
   union _LARGE_INTEGER *arg5, ULONG arg6, VOID *arg7); // offset: 0xb4 (180)
  VOID *Key;                                            // offset: 0xb8 (184)
  struct _LIST_ENTRY ProtocolListHead;                  // offset: 0xbc (188)
  struct _LIST_ENTRY PendingPropReqListHead;            // offset: 0xc4 (196)
  struct _LIST_ENTRY CRMListEntry;                      // offset: 0xcc (204)
  struct _KTM *Tm;                                      // offset: 0xd4 (212)
  struct _UNICODE_STRING Description;                   // offset: 0xd8 (216)
  struct _KTMOBJECT_NAMESPACE Enlistments;              // offset: 0xe0 (224)
  struct _KRESOURCEMANAGER_COMPLETION_BINDING
      CompletionBinding; // offset: 0x140 (320)
};

// 0x238 (568) bytes
struct _KTM {
  ULONG cookie;                                     // offset: 0x0 (0)
  struct _KMUTANT Mutex;                            // offset: 0x4 (4)
  enum KTM_STATE State;                             // offset: 0x24 (36)
  struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink;   // offset: 0x28 (40)
  struct _GUID TmIdentity;                          // offset: 0x3c (60)
  ULONG Flags;                                      // offset: 0x4c (76)
  ULONG VolatileFlags;                              // offset: 0x50 (80)
  struct _UNICODE_STRING LogFileName;               // offset: 0x54 (84)
  struct _FILE_OBJECT *LogFileObject;               // offset: 0x5c (92)
  VOID *MarshallingContext;                         // offset: 0x60 (96)
  VOID *LogManagementContext;                       // offset: 0x64 (100)
  struct _KTMOBJECT_NAMESPACE Transactions;         // offset: 0x68 (104)
  struct _KTMOBJECT_NAMESPACE ResourceManagers;     // offset: 0xc8 (200)
  struct _KMUTANT LsnOrderedMutex;                  // offset: 0x128 (296)
  struct _LIST_ENTRY LsnOrderedList;                // offset: 0x148 (328)
  union _LARGE_INTEGER CommitVirtualClock;          // offset: 0x150 (336)
  struct _FAST_MUTEX CommitVirtualClockMutex;       // offset: 0x158 (344)
  union _CLS_LSN BaseLsn;                           // offset: 0x178 (376)
  union _CLS_LSN CurrentReadLsn;                    // offset: 0x180 (384)
  union _CLS_LSN LastRecoveredLsn;                  // offset: 0x188 (392)
  VOID *TmRmHandle;                                 // offset: 0x190 (400)
  struct _KRESOURCEMANAGER *TmRm;                   // offset: 0x194 (404)
  struct _KEVENT LogFullNotifyEvent;                // offset: 0x198 (408)
  struct _WORK_QUEUE_ITEM CheckpointWorkItem;       // offset: 0x1a8 (424)
  union _CLS_LSN CheckpointTargetLsn;               // offset: 0x1b8 (440)
  struct _WORK_QUEUE_ITEM LogFullCompletedWorkItem; // offset: 0x1c0 (448)
  struct _ERESOURCE LogWriteResource;               // offset: 0x1d0 (464)
  ULONG LogFlags;                                   // offset: 0x208 (520)
  LONG LogFullStatus;                               // offset: 0x20c (524)
  LONG RecoveryStatus;                              // offset: 0x210 (528)
  union _CLS_LSN LastCheckBaseLsn;                  // offset: 0x218 (536)
  struct _LIST_ENTRY RestartOrderedList;            // offset: 0x220 (544)
  struct _WORK_QUEUE_ITEM OfflineWorkItem;          // offset: 0x228 (552)
};

// 0x168 (360) bytes
struct _KENLISTMENT {
  ULONG cookie;                                      // offset: 0x0 (0)
  struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink;    // offset: 0x4 (4)
  struct _GUID EnlistmentId;                         // offset: 0x18 (24)
  struct _KMUTANT Mutex;                             // offset: 0x28 (40)
  struct _LIST_ENTRY NextSameTx;                     // offset: 0x48 (72)
  struct _LIST_ENTRY NextSameRm;                     // offset: 0x50 (80)
  struct _KRESOURCEMANAGER *ResourceManager;         // offset: 0x58 (88)
  struct _KTRANSACTION *Transaction;                 // offset: 0x5c (92)
  enum _KENLISTMENT_STATE State;                     // offset: 0x60 (96)
  ULONG Flags;                                       // offset: 0x64 (100)
  ULONG NotificationMask;                            // offset: 0x68 (104)
  VOID *Key;                                         // offset: 0x6c (108)
  ULONG KeyRefCount;                                 // offset: 0x70 (112)
  VOID *RecoveryInformation;                         // offset: 0x74 (116)
  ULONG RecoveryInformationLength;                   // offset: 0x78 (120)
  VOID *DynamicNameInformation;                      // offset: 0x7c (124)
  ULONG DynamicNameInformationLength;                // offset: 0x80 (128)
  struct _KTMNOTIFICATION_PACKET *FinalNotification; // offset: 0x84 (132)
  struct _KENLISTMENT *SupSubEnlistment;             // offset: 0x88 (136)
  VOID *SupSubEnlHandle;                             // offset: 0x8c (140)
  VOID *SubordinateTxHandle;                         // offset: 0x90 (144)
  struct _GUID CrmEnlistmentEnId;                    // offset: 0x94 (148)
  struct _GUID CrmEnlistmentTmId;                    // offset: 0xa4 (164)
  struct _GUID CrmEnlistmentRmId;                    // offset: 0xb4 (180)
  ULONG NextHistory;                                 // offset: 0xc4 (196)
  struct _KENLISTMENT_HISTORY History[20];           // offset: 0xc8 (200)
};

// 0x8 (8) bytes
struct _OBJECT_HANDLE_COUNT_ENTRY {
  struct _EPROCESS *Process; // offset: 0x0 (0)
  ULONG HandleCount : 24;    // offset: 0x4 (4)
  ULONG LockCount : 8;       // offset: 0x4 (4)
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

// 0x8 (8) bytes
struct _OBJECT_HEADER_PROCESS_INFO {
  struct _EPROCESS *ExclusiveProcess; // offset: 0x0 (0)
  ULONG Reserved;                     // offset: 0x4 (4)
};

// 0x54 (84) bytes
struct _ETW_REALTIME_CONSUMER {
  struct _LIST_ENTRY Links;                      // offset: 0x0 (0)
  VOID *ProcessHandle;                           // offset: 0x8 (8)
  struct _EPROCESS *ProcessObject;               // offset: 0xc (12)
  VOID *NextNotDelivered;                        // offset: 0x10 (16)
  VOID *RealtimeConnectContext;                  // offset: 0x14 (20)
  struct _KEVENT *DisconnectEvent;               // offset: 0x18 (24)
  struct _KEVENT *DataAvailableEvent;            // offset: 0x1c (28)
  ULONG *UserBufferCount;                        // offset: 0x20 (32)
  struct _SINGLE_LIST_ENTRY *UserBufferListHead; // offset: 0x24 (36)
  ULONG BuffersLost;                             // offset: 0x28 (40)
  ULONG EmptyBuffersCount;                       // offset: 0x2c (44)
  USHORT LoggerId;                               // offset: 0x30 (48)
  union {
    UCHAR Flags; // offset: 0x32 (50)
    struct {
      UCHAR ShutDownRequested : 1; // offset: 0x32 (50)
      UCHAR NewBuffersLost : 1;    // offset: 0x32 (50)
      UCHAR Disconnected : 1;      // offset: 0x32 (50)
      UCHAR Notified : 1;          // offset: 0x32 (50)
    };
  };
  struct _RTL_BITMAP ReservedBufferSpaceBitMap; // offset: 0x34 (52)
  UCHAR *ReservedBufferSpace;                   // offset: 0x3c (60)
  ULONG ReservedBufferSpaceSize;                // offset: 0x40 (64)
  ULONG UserPagesAllocated;                     // offset: 0x44 (68)
  ULONG UserPagesReused;                        // offset: 0x48 (72)
  ULONG *EventsLostCount;                       // offset: 0x4c (76)
  ULONG *BuffersLostCount;                      // offset: 0x50 (80)
};

// 0x288 (648) bytes
struct _WMI_LOGGER_CONTEXT {
  ULONG LoggerId;                         // offset: 0x0 (0)
  ULONG BufferSize;                       // offset: 0x4 (4)
  ULONG MaximumEventSize;                 // offset: 0x8 (8)
  ULONG LoggerMode;                       // offset: 0xc (12)
  LONG AcceptNewEvents;                   // offset: 0x10 (16)
  ULONG EventMarker[1];                   // offset: 0x14 (20)
  ULONG ErrorMarker;                      // offset: 0x18 (24)
  ULONG SizeMask;                         // offset: 0x1c (28)
  LONGLONG (*GetCpuClock)();              // offset: 0x20 (32)
  struct _ETHREAD *LoggerThread;          // offset: 0x24 (36)
  LONG LoggerStatus;                      // offset: 0x28 (40)
  ULONG FailureReason;                    // offset: 0x2c (44)
  struct _ETW_BUFFER_QUEUE BufferQueue;   // offset: 0x30 (48)
  struct _ETW_BUFFER_QUEUE OverflowQueue; // offset: 0x3c (60)
  struct _LIST_ENTRY GlobalList;          // offset: 0x48 (72)
  struct _LIST_ENTRY ProviderBinaryList;  // offset: 0x50 (80)
  union {
    struct _WMI_BUFFER_HEADER *BatchedBufferList; // offset: 0x58 (88)
    struct _EX_FAST_REF CurrentBuffer;            // offset: 0x58 (88)
  };
  struct _UNICODE_STRING LoggerName;                 // offset: 0x5c (92)
  struct _UNICODE_STRING LogFileName;                // offset: 0x64 (100)
  struct _UNICODE_STRING LogFilePattern;             // offset: 0x6c (108)
  struct _UNICODE_STRING NewLogFileName;             // offset: 0x74 (116)
  ULONG ClockType;                                   // offset: 0x7c (124)
  ULONG LastFlushedBuffer;                           // offset: 0x80 (128)
  ULONG FlushTimer;                                  // offset: 0x84 (132)
  ULONG FlushThreshold;                              // offset: 0x88 (136)
  union _LARGE_INTEGER ByteOffset;                   // offset: 0x90 (144)
  ULONG MinimumBuffers;                              // offset: 0x98 (152)
  volatile LONG BuffersAvailable;                    // offset: 0x9c (156)
  volatile LONG NumberOfBuffers;                     // offset: 0xa0 (160)
  ULONG MaximumBuffers;                              // offset: 0xa4 (164)
  volatile ULONG EventsLost;                         // offset: 0xa8 (168)
  volatile LONG PeakBuffersCount;                    // offset: 0xac (172)
  ULONG BuffersWritten;                              // offset: 0xb0 (176)
  ULONG LogBuffersLost;                              // offset: 0xb4 (180)
  ULONG RealTimeBuffersDelivered;                    // offset: 0xb8 (184)
  ULONG RealTimeBuffersLost;                         // offset: 0xbc (188)
  LONG *SequencePtr;                                 // offset: 0xc0 (192)
  ULONG LocalSequence;                               // offset: 0xc4 (196)
  struct _GUID InstanceGuid;                         // offset: 0xc8 (200)
  ULONG MaximumFileSize;                             // offset: 0xd8 (216)
  LONG FileCounter;                                  // offset: 0xdc (220)
  enum _POOL_TYPE PoolType;                          // offset: 0xe0 (224)
  struct _ETW_REF_CLOCK ReferenceTime;               // offset: 0xe8 (232)
  LONG CollectionOn;                                 // offset: 0xf8 (248)
  ULONG ProviderInfoSize;                            // offset: 0xfc (252)
  struct _LIST_ENTRY Consumers;                      // offset: 0x100 (256)
  ULONG NumConsumers;                                // offset: 0x108 (264)
  struct _ETW_REALTIME_CONSUMER *TransitionConsumer; // offset: 0x10c (268)
  VOID *RealtimeLogfileHandle;                       // offset: 0x110 (272)
  struct _UNICODE_STRING RealtimeLogfileName;        // offset: 0x114 (276)
  union _LARGE_INTEGER RealtimeWriteOffset;          // offset: 0x120 (288)
  union _LARGE_INTEGER RealtimeReadOffset;           // offset: 0x128 (296)
  union _LARGE_INTEGER RealtimeLogfileSize;          // offset: 0x130 (304)
  ULONGLONG RealtimeLogfileUsage;                    // offset: 0x138 (312)
  ULONGLONG RealtimeMaximumFileSize;                 // offset: 0x140 (320)
  ULONG RealtimeBuffersSaved;                        // offset: 0x148 (328)
  struct _ETW_REF_CLOCK RealtimeReferenceTime;       // offset: 0x150 (336)
  enum _ETW_RT_EVENT_LOSS NewRTEventsLost;           // offset: 0x160 (352)
  struct _KEVENT LoggerEvent;                        // offset: 0x164 (356)
  struct _KEVENT FlushEvent;                         // offset: 0x174 (372)
  struct _KTIMER FlushTimeOutTimer;                  // offset: 0x188 (392)
  struct _KDPC LoggerDpc;                            // offset: 0x1b0 (432)
  struct _KMUTANT LoggerMutex;                       // offset: 0x1d0 (464)
  struct _EX_PUSH_LOCK LoggerLock;                   // offset: 0x1f0 (496)
  union {
    ULONG BufferListSpinLock;                // offset: 0x1f4 (500)
    struct _EX_PUSH_LOCK BufferListPushLock; // offset: 0x1f4 (500)
  };
  struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext; // offset: 0x1f8 (504)
  struct _TOKEN_ACCESS_INFORMATION
      *TokenAccessInformation;            // offset: 0x234 (564)
  struct _EX_FAST_REF SecurityDescriptor; // offset: 0x238 (568)
  union _LARGE_INTEGER StartTime;         // offset: 0x240 (576)
  VOID *LogFileHandle;                    // offset: 0x248 (584)
  LONGLONG BufferSequenceNumber;          // offset: 0x250 (592)
  union {
    ULONG Flags; // offset: 0x258 (600)
    struct {
      ULONG Persistent : 1;                  // offset: 0x258 (600)
      ULONG AutoLogger : 1;                  // offset: 0x258 (600)
      ULONG FsReady : 1;                     // offset: 0x258 (600)
      ULONG RealTime : 1;                    // offset: 0x258 (600)
      ULONG Wow : 1;                         // offset: 0x258 (600)
      ULONG KernelTrace : 1;                 // offset: 0x258 (600)
      ULONG NoMoreEnable : 1;                // offset: 0x258 (600)
      ULONG StackTracing : 1;                // offset: 0x258 (600)
      ULONG ErrorLogged : 1;                 // offset: 0x258 (600)
      ULONG RealtimeLoggerContextFreed : 1;  // offset: 0x258 (600)
      ULONG PebsTracing : 1;                 // offset: 0x258 (600)
      ULONG PmcCounters : 1;                 // offset: 0x258 (600)
      ULONG PageAlignBuffers : 1;            // offset: 0x258 (600)
      ULONG StackLookasideListAllocated : 1; // offset: 0x258 (600)
      ULONG SecurityTrace : 1;               // offset: 0x258 (600)
      ULONG SpareFlags1 : 1;                 // offset: 0x258 (600)
      ULONG SystemLoggerIndex : 8;           // offset: 0x258 (600)
      ULONG StackCaching : 1;                // offset: 0x258 (600)
      ULONG SpareFlags2 : 7;                 // offset: 0x258 (600)
    };
  };
  union {
    volatile ULONG RequestFlag; // offset: 0x25c (604)
    struct {
      ULONG DbgRequestNewFile : 1;            // offset: 0x25c (604)
      ULONG DbgRequestUpdateFile : 1;         // offset: 0x25c (604)
      ULONG DbgRequestFlush : 1;              // offset: 0x25c (604)
      ULONG DbgRequestDisableRealtime : 1;    // offset: 0x25c (604)
      ULONG DbgRequestDisconnectConsumer : 1; // offset: 0x25c (604)
      ULONG DbgRequestConnectConsumer : 1;    // offset: 0x25c (604)
      ULONG DbgRequestNotifyConsumer : 1;     // offset: 0x25c (604)
      ULONG DbgRequestUpdateHeader : 1;       // offset: 0x25c (604)
      ULONG DbgRequestDeferredFlush : 1;      // offset: 0x25c (604)
      ULONG DbgRequestDeferredFlushTimer : 1; // offset: 0x25c (604)
      ULONG DbgRequestFlushTimer : 1;         // offset: 0x25c (604)
      ULONG DbgRequestUpdateDebugger : 1;     // offset: 0x25c (604)
      ULONG DbgSpareRequestFlags : 20;        // offset: 0x25c (604)
    };
  };
  struct _RTL_BITMAP HookIdMap;               // offset: 0x260 (608)
  struct _ETW_STACK_CACHE *StackCache;        // offset: 0x268 (616)
  struct _ETW_PMC_SUPPORT *PmcData;           // offset: 0x26c (620)
  struct _LIST_ENTRY WinRtProviderBinaryList; // offset: 0x270 (624)
  struct _WMI_BUFFER_HEADER **ScratchArray;   // offset: 0x278 (632)
  struct _DISALLOWED_GUIDS DisallowedGuids;   // offset: 0x27c (636)
  struct _ESILO *ServerSilo;                  // offset: 0x284 (644)
};

// 0x58 (88) bytes
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
  VOID (*DumpProcedure)
  (VOID *arg1, struct _OBJECT_DUMP_CONTROL *arg2); // offset: 0x30 (48)
  LONG (*OpenProcedure)
  (enum _OB_OPEN_REASON arg1, CHAR arg2, struct _EPROCESS *arg3, VOID *arg4,
   ULONG *arg5, ULONG arg6); // offset: 0x34 (52)
  VOID (*CloseProcedure)
  (struct _EPROCESS *arg1, VOID *arg2, ULONG arg3,
   ULONG arg4);                        // offset: 0x38 (56)
  VOID (*DeleteProcedure)(VOID *arg1); // offset: 0x3c (60)
  LONG (*ParseProcedure)
  (VOID *arg1, VOID *arg2, struct _ACCESS_STATE *arg3, CHAR arg4, ULONG arg5,
   struct _UNICODE_STRING *arg6, struct _UNICODE_STRING *arg7, VOID *arg8,
   struct _SECURITY_QUALITY_OF_SERVICE *arg9,
   VOID **arg10); // offset: 0x40 (64)
  LONG (*SecurityProcedure)
  (VOID *arg1, enum _SECURITY_OPERATION_CODE arg2, ULONG *arg3, VOID *arg4,
   ULONG *arg5, VOID **arg6, enum _POOL_TYPE arg7,
   struct _GENERIC_MAPPING *arg8, CHAR arg9); // offset: 0x44 (68)
  LONG (*QueryNameProcedure)
  (VOID *arg1, UCHAR arg2, struct _OBJECT_NAME_INFORMATION *arg3, ULONG arg4,
   ULONG *arg5, CHAR arg6); // offset: 0x48 (72)
  UCHAR (*OkayToCloseProcedure)
  (struct _EPROCESS *arg1, VOID *arg2, VOID *arg3,
   CHAR arg4);                    // offset: 0x4c (76)
  ULONG WaitObjectFlagMask;       // offset: 0x50 (80)
  USHORT WaitObjectFlagOffset;    // offset: 0x54 (84)
  USHORT WaitObjectPointerOffset; // offset: 0x56 (86)
};

// 0x90 (144) bytes
struct _OBJECT_TYPE {
  struct _LIST_ENTRY TypeList;              // offset: 0x0 (0)
  struct _UNICODE_STRING Name;              // offset: 0x8 (8)
  VOID *DefaultObject;                      // offset: 0x10 (16)
  UCHAR Index;                              // offset: 0x14 (20)
  ULONG TotalNumberOfObjects;               // offset: 0x18 (24)
  ULONG TotalNumberOfHandles;               // offset: 0x1c (28)
  ULONG HighWaterNumberOfObjects;           // offset: 0x20 (32)
  ULONG HighWaterNumberOfHandles;           // offset: 0x24 (36)
  struct _OBJECT_TYPE_INITIALIZER TypeInfo; // offset: 0x28 (40)
  struct _EX_PUSH_LOCK TypeLock;            // offset: 0x80 (128)
  ULONG Key;                                // offset: 0x84 (132)
  struct _LIST_ENTRY CallbackList;          // offset: 0x88 (136)
};

// 0x18 (24) bytes
struct _OB_DUPLICATE_OBJECT_STATE {
  struct _EPROCESS *SourceProcess;            // offset: 0x0 (0)
  VOID *SourceHandle;                         // offset: 0x4 (4)
  VOID *Object;                               // offset: 0x8 (8)
  ULONG TargetAccess;                         // offset: 0xc (12)
  struct _HANDLE_TABLE_ENTRY_INFO ObjectInfo; // offset: 0x10 (16)
  ULONG HandleAttributes;                     // offset: 0x14 (20)
};

// 0x20 (32) bytes
struct _KALPC_HANDLE_DATA {
  ULONG Flags;                                        // offset: 0x0 (0)
  ULONG ObjectType;                                   // offset: 0x4 (4)
  struct _OB_DUPLICATE_OBJECT_STATE DuplicateContext; // offset: 0x8 (8)
};

// 0x50 (80) bytes
struct _KALPC_SECURITY_DATA {
  struct _ALPC_HANDLE_TABLE *HandleTable;          // offset: 0x0 (0)
  VOID *ContextHandle;                             // offset: 0x4 (4)
  struct _EPROCESS *OwningProcess;                 // offset: 0x8 (8)
  struct _ALPC_PORT *OwnerPort;                    // offset: 0xc (12)
  struct _SECURITY_CLIENT_CONTEXT DynamicSecurity; // offset: 0x10 (16)
  union {
    struct {
      ULONG Revoked : 1;      // offset: 0x0 (0)
      ULONG Impersonated : 1; // offset: 0x0 (0)
    } s1;                     // offset: 0x4c (76)

  } u1; // offset: 0x4c (76)
};

// 0x20 (32) bytes
struct _KALPC_MESSAGE_ATTRIBUTES {
  VOID *ClientContext;                       // offset: 0x0 (0)
  VOID *ServerContext;                       // offset: 0x4 (4)
  VOID *PortContext;                         // offset: 0x8 (8)
  VOID *CancelPortContext;                   // offset: 0xc (12)
  struct _KALPC_SECURITY_DATA *SecurityData; // offset: 0x10 (16)
  struct _KALPC_VIEW *View;                  // offset: 0x14 (20)
  struct _KALPC_HANDLE_DATA *HandleData;     // offset: 0x18 (24)
  union _KALPC_DIRECT_EVENT DirectEvent;     // offset: 0x1c (28)
};

// 0x90 (144) bytes
struct _KALPC_MESSAGE {
  struct _LIST_ENTRY Entry;       // offset: 0x0 (0)
  struct _ALPC_PORT *PortQueue;   // offset: 0x8 (8)
  struct _ALPC_PORT *OwnerPort;   // offset: 0xc (12)
  struct _ETHREAD *WaitingThread; // offset: 0x10 (16)
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
    } s1;                               // offset: 0x14 (20)
    ULONG State;                        // offset: 0x14 (20)

  } u1;            // offset: 0x14 (20)
  LONG SequenceNo; // offset: 0x18 (24)
  union {
    struct _EPROCESS *QuotaProcess; // offset: 0x1c (28)
    VOID *QuotaBlock;               // offset: 0x1c (28)
  };
  struct _ALPC_PORT *CancelSequencePort;              // offset: 0x20 (32)
  struct _ALPC_PORT *CancelQueuePort;                 // offset: 0x24 (36)
  LONG CancelSequenceNo;                              // offset: 0x28 (40)
  struct _LIST_ENTRY CancelListEntry;                 // offset: 0x2c (44)
  struct _KALPC_RESERVE *Reserve;                     // offset: 0x34 (52)
  struct _KALPC_MESSAGE_ATTRIBUTES MessageAttributes; // offset: 0x38 (56)
  VOID *DataUserVa;                                   // offset: 0x58 (88)
  struct _ALPC_COMMUNICATION_INFO *CommunicationInfo; // offset: 0x5c (92)
  struct _ALPC_PORT *ConnectionPort;                  // offset: 0x60 (96)
  struct _ETHREAD *ServerThread;                      // offset: 0x64 (100)
  VOID *WakeReference;                                // offset: 0x68 (104)
  VOID *ExtensionBuffer;                              // offset: 0x6c (108)
  ULONG ExtensionBufferSize;                          // offset: 0x70 (112)
  struct _PORT_MESSAGE PortMessage;                   // offset: 0x78 (120)
};

// 0x24 (36) bytes
struct _ALPC_DISPATCH_CONTEXT {
  struct _ALPC_PORT *PortObject;                      // offset: 0x0 (0)
  struct _KALPC_MESSAGE *Message;                     // offset: 0x4 (4)
  struct _ALPC_COMMUNICATION_INFO *CommunicationInfo; // offset: 0x8 (8)
  struct _ETHREAD *TargetThread;                      // offset: 0xc (12)
  struct _ALPC_PORT *TargetPort;                      // offset: 0x10 (16)
  union _KALPC_DIRECT_EVENT DirectEvent;              // offset: 0x14 (20)
  ULONG Flags;                                        // offset: 0x18 (24)
  USHORT TotalLength;                                 // offset: 0x1c (28)
  USHORT Type;                                        // offset: 0x1e (30)
  USHORT DataInfoOffset;                              // offset: 0x20 (32)
  UCHAR SignalCompletion;                             // offset: 0x22 (34)
  UCHAR PostedToCompletionList;                       // offset: 0x23 (35)
};

// 0x14 (20) bytes
struct _KALPC_RESERVE {
  struct _ALPC_PORT *OwnerPort;           // offset: 0x0 (0)
  struct _ALPC_HANDLE_TABLE *HandleTable; // offset: 0x4 (4)
  VOID *Handle;                           // offset: 0x8 (8)
  struct _KALPC_MESSAGE *Message;         // offset: 0xc (12)
  LONG Active;                            // offset: 0x10 (16)
};

// 0x28 (40) bytes
struct _ALPC_COMMUNICATION_INFO {
  struct _ALPC_PORT *ConnectionPort;          // offset: 0x0 (0)
  struct _ALPC_PORT *ServerCommunicationPort; // offset: 0x4 (4)
  struct _ALPC_PORT *ClientCommunicationPort; // offset: 0x8 (8)
  struct _LIST_ENTRY CommunicationList;       // offset: 0xc (12)
  struct _ALPC_HANDLE_TABLE HandleTable;      // offset: 0x14 (20)
  struct _KALPC_MESSAGE *CloseMessage;        // offset: 0x24 (36)
};

// 0x58 (88) bytes
struct _ALPC_COMPLETION_LIST {
  struct _LIST_ENTRY Entry;                    // offset: 0x0 (0)
  struct _EPROCESS *OwnerProcess;              // offset: 0x8 (8)
  struct _EX_PUSH_LOCK CompletionListLock;     // offset: 0xc (12)
  struct _MDL *Mdl;                            // offset: 0x10 (16)
  VOID *UserVa;                                // offset: 0x14 (20)
  VOID *UserLimit;                             // offset: 0x18 (24)
  VOID *DataUserVa;                            // offset: 0x1c (28)
  VOID *SystemVa;                              // offset: 0x20 (32)
  ULONG TotalSize;                             // offset: 0x24 (36)
  struct _ALPC_COMPLETION_LIST_HEADER *Header; // offset: 0x28 (40)
  VOID *List;                                  // offset: 0x2c (44)
  ULONG ListSize;                              // offset: 0x30 (48)
  VOID *Bitmap;                                // offset: 0x34 (52)
  ULONG BitmapSize;                            // offset: 0x38 (56)
  VOID *Data;                                  // offset: 0x3c (60)
  ULONG DataSize;                              // offset: 0x40 (64)
  ULONG BitmapLimit;                           // offset: 0x44 (68)
  ULONG BitmapNextHint;                        // offset: 0x48 (72)
  ULONG ConcurrencyCount;                      // offset: 0x4c (76)
  ULONG AttributeFlags;                        // offset: 0x50 (80)
  ULONG AttributeSize;                         // offset: 0x54 (84)
};

// 0x11c (284) bytes
struct _ALPC_PORT {
  struct _LIST_ENTRY PortListEntry;                   // offset: 0x0 (0)
  struct _ALPC_COMMUNICATION_INFO *CommunicationInfo; // offset: 0x8 (8)
  struct _EPROCESS *OwnerProcess;                     // offset: 0xc (12)
  VOID *CompletionPort;                               // offset: 0x10 (16)
  VOID *CompletionKey;                                // offset: 0x14 (20)
  struct _ALPC_COMPLETION_PACKET_LOOKASIDE
      *CompletionPacketLookaside;                 // offset: 0x18 (24)
  VOID *PortContext;                              // offset: 0x1c (28)
  struct _SECURITY_CLIENT_CONTEXT StaticSecurity; // offset: 0x20 (32)
  struct _EX_PUSH_LOCK IncomingQueueLock;         // offset: 0x5c (92)
  struct _LIST_ENTRY MainQueue;                   // offset: 0x60 (96)
  struct _LIST_ENTRY LargeMessageQueue;           // offset: 0x68 (104)
  struct _EX_PUSH_LOCK PendingQueueLock;          // offset: 0x70 (112)
  struct _LIST_ENTRY PendingQueue;                // offset: 0x74 (116)
  struct _EX_PUSH_LOCK DirectQueueLock;           // offset: 0x7c (124)
  struct _LIST_ENTRY DirectQueue;                 // offset: 0x80 (128)
  struct _EX_PUSH_LOCK WaitQueueLock;             // offset: 0x88 (136)
  struct _LIST_ENTRY WaitQueue;                   // offset: 0x8c (140)
  union {
    struct _KSEMAPHORE *Semaphore; // offset: 0x94 (148)
    struct _KEVENT *DummyEvent;    // offset: 0x94 (148)
  };
  struct _ALPC_PORT_ATTRIBUTES PortAttributes;  // offset: 0x98 (152)
  struct _EX_PUSH_LOCK ResourceListLock;        // offset: 0xc4 (196)
  struct _LIST_ENTRY ResourceListHead;          // offset: 0xc8 (200)
  struct _EX_PUSH_LOCK PortObjectLock;          // offset: 0xd0 (208)
  struct _ALPC_COMPLETION_LIST *CompletionList; // offset: 0xd4 (212)
  struct _CALLBACK_OBJECT *CallbackObject;      // offset: 0xd8 (216)
  VOID *CallbackContext;                        // offset: 0xdc (220)
  struct _LIST_ENTRY CanceledQueue;             // offset: 0xe0 (224)
  LONG SequenceNo;                              // offset: 0xe8 (232)
  LONG ReferenceNo;                             // offset: 0xec (236)
  struct _PALPC_PORT_REFERENCE_WAIT_BLOCK
      *ReferenceNoWait; // offset: 0xf0 (240)
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
    } s1;                             // offset: 0xf4 (244)
    ULONG State;                      // offset: 0xf4 (244)

  } u1;                                  // offset: 0xf4 (244)
  struct _ALPC_PORT *TargetQueuePort;    // offset: 0xf8 (248)
  struct _ALPC_PORT *TargetSequencePort; // offset: 0xfc (252)
  struct _KALPC_MESSAGE *CachedMessage;  // offset: 0x100 (256)
  ULONG MainQueueLength;                 // offset: 0x104 (260)
  ULONG LargeMessageQueueLength;         // offset: 0x108 (264)
  ULONG PendingQueueLength;              // offset: 0x10c (268)
  ULONG DirectQueueLength;               // offset: 0x110 (272)
  ULONG CanceledQueueLength;             // offset: 0x114 (276)
  ULONG WaitQueueLength;                 // offset: 0x118 (280)
};

// 0x28 (40) bytes
struct _KALPC_SECTION {
  VOID *SectionObject;                    // offset: 0x0 (0)
  ULONG Size;                             // offset: 0x4 (4)
  struct _ALPC_HANDLE_TABLE *HandleTable; // offset: 0x8 (8)
  VOID *SectionHandle;                    // offset: 0xc (12)
  struct _EPROCESS *OwnerProcess;         // offset: 0x10 (16)
  struct _ALPC_PORT *OwnerPort;           // offset: 0x14 (20)
  union {
    struct {
      ULONG Internal : 1; // offset: 0x0 (0)
      ULONG Secure : 1;   // offset: 0x0 (0)
    } s1;                 // offset: 0x18 (24)

  } u1;                              // offset: 0x18 (24)
  ULONG NumberOfRegions;             // offset: 0x1c (28)
  struct _LIST_ENTRY RegionListHead; // offset: 0x20 (32)
};

// 0x30 (48) bytes
struct _KALPC_REGION {
  struct _LIST_ENTRY RegionListEntry; // offset: 0x0 (0)
  struct _KALPC_SECTION *Section;     // offset: 0x8 (8)
  ULONG Offset;                       // offset: 0xc (12)
  ULONG Size;                         // offset: 0x10 (16)
  ULONG ViewSize;                     // offset: 0x14 (20)
  union {
    struct {
      ULONG Secure : 1; // offset: 0x0 (0)
    } s1;               // offset: 0x18 (24)

  } u1;                              // offset: 0x18 (24)
  ULONG NumberOfViews;               // offset: 0x1c (28)
  struct _LIST_ENTRY ViewListHead;   // offset: 0x20 (32)
  struct _KALPC_VIEW *ReadOnlyView;  // offset: 0x28 (40)
  struct _KALPC_VIEW *ReadWriteView; // offset: 0x2c (44)
};

// 0x34 (52) bytes
struct _KALPC_VIEW {
  struct _LIST_ENTRY ViewListEntry; // offset: 0x0 (0)
  struct _KALPC_REGION *Region;     // offset: 0x8 (8)
  struct _ALPC_PORT *OwnerPort;     // offset: 0xc (12)
  struct _EPROCESS *OwnerProcess;   // offset: 0x10 (16)
  VOID *Address;                    // offset: 0x14 (20)
  ULONG Size;                       // offset: 0x18 (24)
  VOID *SecureViewHandle;           // offset: 0x1c (28)
  VOID *WriteAccessHandle;          // offset: 0x20 (32)
  union {
    struct {
      ULONG WriteAccess : 1; // offset: 0x0 (0)
      ULONG AutoRelease : 1; // offset: 0x0 (0)
      ULONG ForceUnlink : 1; // offset: 0x0 (0)
    } s1;                    // offset: 0x24 (36)

  } u1;                                    // offset: 0x24 (36)
  ULONG NumberOfOwnerMessages;             // offset: 0x28 (40)
  struct _LIST_ENTRY ProcessViewListEntry; // offset: 0x2c (44)
};

// 0x48 (72) bytes
struct _WORK_QUEUE_ENTRY {
  struct _LIST_ENTRY WorkQueueLinks; // offset: 0x0 (0)
  union {
    struct {
      struct _FILE_OBJECT *FileObject; // offset: 0x0 (0)
    } Read;                            // offset: 0x8 (8)
    struct {
      struct _SHARED_CACHE_MAP *SharedCacheMap; // offset: 0x0 (0)
    } Write;                                    // offset: 0x8 (8)
    struct {
      struct _KEVENT *Event; // offset: 0x0 (0)
    } Event;                 // offset: 0x8 (8)
    struct {
      ULONG Reason; // offset: 0x0 (0)
    } Notification; // offset: 0x8 (8)
    struct {
      struct _SHARED_CACHE_MAP *SharedCacheMap; // offset: 0x0 (0)
      struct _IO_STATUS_BLOCK *IoStatus;        // offset: 0x4 (4)
      struct _KEVENT CallerWaitEvent;           // offset: 0x8 (8)
      UCHAR IsLowPriWriteBehind;                // offset: 0x18 (24)
    } LowPriWrite;                              // offset: 0x8 (8)
    struct {
      struct _SHARED_CACHE_MAP *SharedCacheMap;       // offset: 0x0 (0)
      union _LARGE_INTEGER FileOffset;                // offset: 0x8 (8)
      struct _FILE_OBJECT *FileObject;                // offset: 0x10 (16)
      ULONG Length;                                   // offset: 0x14 (20)
      struct _SINGLE_LIST_ENTRY *PrefetchList;        // offset: 0x18 (24)
      ULONG PrefetchPagePriority;                     // offset: 0x1c (28)
      struct _MDL *Mdl;                               // offset: 0x20 (32)
      struct _IO_STATUS_BLOCK *IoStatusBlock;         // offset: 0x24 (36)
      struct _CC_ASYNC_READ_CONTEXT *CallbackContext; // offset: 0x28 (40)
      struct _EPROCESS *OriginatingProcess;           // offset: 0x2c (44)
      CHAR RequestorMode;                             // offset: 0x30 (48)
      ULONG NestingLevel;                             // offset: 0x34 (52)
    } AsyncRead;                                      // offset: 0x8 (8)

  } Parameters;   // offset: 0x8 (8)
  UCHAR Function; // offset: 0x40 (64)
};

// 0x38 (56) bytes
struct _MM_PAGE_ACCESS_INFO_HEADER {
  struct _SINGLE_LIST_ENTRY Link; // offset: 0x0 (0)
  enum _MM_PAGE_ACCESS_TYPE Type; // offset: 0x4 (4)
  union {
    ULONG EmptySequenceNumber; // offset: 0x8 (8)
    ULONG CurrentFileIndex;    // offset: 0x8 (8)
  };
  ULONGLONG CreateTime; // offset: 0x10 (16)
  union {
    ULONGLONG EmptyTime;                    // offset: 0x18 (24)
    struct _MM_PAGE_ACCESS_INFO *TempEntry; // offset: 0x18 (24)
  };
  union {
    struct {
      struct _MM_PAGE_ACCESS_INFO *PageEntry; // offset: 0x20 (32)
      ULONG *FileEntry;                       // offset: 0x24 (36)
      ULONG *FirstFileEntry;                  // offset: 0x28 (40)
      struct _EPROCESS *Process;              // offset: 0x2c (44)
      ULONG SessionId;                        // offset: 0x30 (48)
    };
    struct {
      ULONG *PageFrameEntry;     // offset: 0x20 (32)
      ULONG *LastPageFrameEntry; // offset: 0x24 (36)
    };
  };
};

// 0x80 (128) bytes
struct _MI_STANDBY_STATE {
  volatile ULONG TransitionSharedPages;                // offset: 0x0 (0)
  ULONG TransitionSharedPagesPeak[3];                  // offset: 0x4 (4)
  ULONG FirstDecayPage;                                // offset: 0x10 (16)
  union _SLIST_HEADER PfnDecayFreeSList;               // offset: 0x18 (24)
  struct _MM_PAGE_ACCESS_INFO_HEADER *PfnRepurposeLog; // offset: 0x20 (32)
  struct _KDPC AllocatePfnRepurposeDpc;                // offset: 0x24 (36)
};

// 0x80 (128) bytes
struct _MI_ACCESS_LOG_STATE {
  struct _MM_PAGE_ACCESS_INFO_HEADER *volatile CcAccessLog; // offset: 0x0 (0)
  ULONG Enabled;                                            // offset: 0x4 (4)
  struct _WORK_QUEUE_ITEM DisableAccessLogging;             // offset: 0x8 (8)
  ULONG MinLoggingPriority;                                 // offset: 0x18 (24)
  ULONG AccessLoggingLock;                                  // offset: 0x40 (64)
};

// 0x30 (48) bytes
struct _SEGMENT {
  struct _CONTROL_AREA *ControlArea;  // offset: 0x0 (0)
  ULONG TotalNumberOfPtes;            // offset: 0x4 (4)
  struct _SEGMENT_FLAGS SegmentFlags; // offset: 0x8 (8)
  ULONG NumberOfCommittedPages;       // offset: 0xc (12)
  ULONGLONG SizeOfSegment;            // offset: 0x10 (16)
  union {
    struct _MMEXTEND_INFO *ExtendInfo; // offset: 0x18 (24)
    VOID *BasedAddress;                // offset: 0x18 (24)
  };
  struct _EX_PUSH_LOCK SegmentLock; // offset: 0x1c (28)
  union {
    ULONG ImageCommitment;             // offset: 0x20 (32)
    struct _EPROCESS *CreatingProcess; // offset: 0x20 (32)

  } u1; // offset: 0x20 (32)
  union {
    struct _MI_SECTION_IMAGE_INFORMATION *ImageInformation; // offset: 0x24 (36)
    VOID *FirstMappedVa;                                    // offset: 0x24 (36)

  } u2;                        // offset: 0x24 (36)
  struct _MMPTE *PrototypePte; // offset: 0x28 (40)
};

// 0x50 (80) bytes
struct _CONTROL_AREA {
  struct _SEGMENT *Segment;        // offset: 0x0 (0)
  struct _LIST_ENTRY ListHead;     // offset: 0x4 (4)
  ULONG NumberOfSectionReferences; // offset: 0xc (12)
  ULONG NumberOfPfnReferences;     // offset: 0x10 (16)
  ULONG NumberOfMappedViews;       // offset: 0x14 (20)
  ULONG NumberOfUserReferences;    // offset: 0x18 (24)
  union {
    ULONG LongFlags;               // offset: 0x1c (28)
    struct _MMSECTION_FLAGS Flags; // offset: 0x1c (28)

  } u;                                          // offset: 0x1c (28)
  struct _EX_FAST_REF FilePointer;              // offset: 0x20 (32)
  volatile LONG ControlAreaLock;                // offset: 0x24 (36)
  ULONG ModifiedWriteCount;                     // offset: 0x28 (40)
  struct _MI_CONTROL_AREA_WAIT_BLOCK *WaitList; // offset: 0x2c (44)
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
    } e2; // offset: 0x30 (48)

  } u2;                                // offset: 0x30 (48)
  volatile ULONGLONG LockedPages;      // offset: 0x40 (64)
  struct _EX_PUSH_LOCK FileObjectLock; // offset: 0x48 (72)
};

// 0x140 (320) bytes
struct _MI_SECTION_STATE {
  volatile LONG SegmentListLock;                // offset: 0x0 (0)
  volatile LONG SectionObjectPointersLock;      // offset: 0x40 (64)
  struct _EX_PUSH_LOCK SectionExtendLock;       // offset: 0x44 (68)
  struct _EX_PUSH_LOCK SectionExtendSetLock;    // offset: 0x48 (72)
  struct _RTL_AVL_TREE SectionBasedRoot;        // offset: 0x4c (76)
  struct _EX_PUSH_LOCK SectionBasedLock;        // offset: 0x50 (80)
  ULONG UnusedSubsectionPagedPool;              // offset: 0x54 (84)
  ULONG UnusedSegmentForceFree;                 // offset: 0x58 (88)
  ULONG DataSectionProtectionMask;              // offset: 0x5c (92)
  VOID *HighSectionBase;                        // offset: 0x60 (96)
  struct _MSUBSECTION PhysicalSubsection;       // offset: 0x64 (100)
  struct _CONTROL_AREA PhysicalControlArea;     // offset: 0xa8 (168)
  struct _RTL_AVL_TREE PageFileSectionHead;     // offset: 0xf8 (248)
  volatile LONG PageFileSectionListSpinLock;    // offset: 0xfc (252)
  ULONG ImageBias;                              // offset: 0x100 (256)
  struct _EX_PUSH_LOCK RelocateBitmapsLock;     // offset: 0x104 (260)
  struct _RTL_BITMAP ImageBitMap;               // offset: 0x108 (264)
  VOID *ApiSetSection;                          // offset: 0x110 (272)
  VOID *ApiSetSchema;                           // offset: 0x114 (276)
  ULONG ApiSetSchemaSize;                       // offset: 0x118 (280)
  ULONG LostDataFiles;                          // offset: 0x11c (284)
  ULONG LostDataPages;                          // offset: 0x120 (288)
  ULONG ImageFailureReason;                     // offset: 0x124 (292)
  struct _SECTION *CfgBitMapSection32;          // offset: 0x128 (296)
  struct _CONTROL_AREA *CfgBitMapControlArea32; // offset: 0x12c (300)
  ULONG ImageCfgFailure;                        // offset: 0x130 (304)
  volatile LONG ImageValidationFailed;          // offset: 0x134 (308)
};

// 0x4c (76) bytes
struct _MMVAD {
  struct _MMVAD_SHORT Core; // offset: 0x0 (0)
  union {
    ULONG LongFlags2;               // offset: 0x28 (40)
    struct _MMVAD_FLAGS2 VadFlags2; // offset: 0x28 (40)

  } u2;                             // offset: 0x28 (40)
  struct _SUBSECTION *Subsection;   // offset: 0x2c (44)
  struct _MMPTE *FirstPrototypePte; // offset: 0x30 (48)
  struct _MMPTE *LastContiguousPte; // offset: 0x34 (52)
  struct _LIST_ENTRY ViewLinks;     // offset: 0x38 (56)
  struct _EPROCESS *VadsProcess;    // offset: 0x40 (64)
  union {
    struct _MI_VAD_SEQUENTIAL_INFO SequentialVa; // offset: 0x44 (68)
    struct _MMEXTEND_INFO *ExtendedInfo;         // offset: 0x44 (68)

  } u4;                            // offset: 0x44 (68)
  struct _FILE_OBJECT *FileObject; // offset: 0x48 (72)
};

// 0xc (12) bytes
struct _MI_CFG_BITMAP_INFO {
  VOID *BaseAddress;        // offset: 0x0 (0)
  ULONG RegionSize;         // offset: 0x4 (4)
  struct _MMVAD *BitmapVad; // offset: 0x8 (8)
};

// 0xd20 (3360) bytes
struct _MI_USER_VA_INFO {
  ULONG NumberOfCommittedPageTables;               // offset: 0x0 (0)
  ULONG VadBitMapHint;                             // offset: 0x4 (4)
  ULONG LastAllocationSizeHint;                    // offset: 0x8 (8)
  ULONG LastAllocationSize;                        // offset: 0xc (12)
  ULONG LowestBottomUpVadBit;                      // offset: 0x10 (16)
  ULONG VadBitMapSize;                             // offset: 0x14 (20)
  ULONG VadBitMapCommitment;                       // offset: 0x18 (24)
  ULONG MaximumLastVadBit;                         // offset: 0x1c (28)
  LONG VadsBeingDeleted;                           // offset: 0x20 (32)
  ULONG PhysicalMappingCount;                      // offset: 0x24 (36)
  struct _KEVENT *LastVadDeletionEvent;            // offset: 0x28 (40)
  ULONG *VadBitBuffer;                             // offset: 0x2c (44)
  VOID *LowestBottomUpAllocationAddress;           // offset: 0x30 (48)
  VOID *HighestTopDownAllocationAddress;           // offset: 0x34 (52)
  VOID *FreeTebHint;                               // offset: 0x38 (56)
  UCHAR NumaAware;                                 // offset: 0x3c (60)
  ULONGLONG CloneNestingLevel;                     // offset: 0x40 (64)
  ULONG PrivateFixupVadCount;                      // offset: 0x48 (72)
  struct _MI_CFG_BITMAP_INFO CfgBitMap[1];         // offset: 0x4c (76)
  ULONG CommittedPageTableBufferForTopLevel[48];   // offset: 0x58 (88)
  struct _RTL_BITMAP CommittedPageTableBitmaps[1]; // offset: 0x118 (280)
  USHORT UsedPageTableEntries[1536];               // offset: 0x120 (288)
};

// 0xe20 (3616) bytes
struct _MMWSL {
  ULONG FirstFree;                                  // offset: 0x0 (0)
  ULONG FirstDynamic;                               // offset: 0x4 (4)
  ULONG LastEntry;                                  // offset: 0x8 (8)
  ULONG NextSlot;                                   // offset: 0xc (12)
  ULONG LastInitializedWsle;                        // offset: 0x10 (16)
  ULONG NextAgingSlot;                              // offset: 0x14 (20)
  ULONG NextAccessClearingSlot;                     // offset: 0x18 (24)
  ULONG LastAccessClearingRemainder;                // offset: 0x1c (28)
  ULONG LastAgingRemainder;                         // offset: 0x20 (32)
  ULONG WsleSize;                                   // offset: 0x24 (36)
  ULONG NonDirectCount;                             // offset: 0x28 (40)
  VOID *LowestPagableAddress;                       // offset: 0x2c (44)
  struct _MMWSLE_NONDIRECT_HASH *NonDirectHash;     // offset: 0x30 (48)
  struct _MMWSLE_HASH *HashTableStart;              // offset: 0x34 (52)
  struct _MMWSLE_HASH *HighestPermittedHashAddress; // offset: 0x38 (56)
  ULONG ActiveWsleCounts[16];                       // offset: 0x3c (60)
  struct _MI_ACTIVE_WSLE_LISTHEAD ActiveWsles[16];  // offset: 0x7c (124)
  struct _MMWSLE *Wsle;                             // offset: 0xfc (252)
  struct _MI_USER_VA_INFO UserVaInfo;               // offset: 0x100 (256)
};

// 0x1038 (4152) bytes
struct _MI_SESSION_STATE {
  struct _MMSESSION SystemSession;     // offset: 0x0 (0)
  UCHAR CodePageEdited;                // offset: 0x14 (20)
  LONG VaReferenceCount[1024];         // offset: 0x18 (24)
  ULONG *DynamicPtesBitBuffer;         // offset: 0x1018 (4120)
  struct _EX_PUSH_LOCK IdLock;         // offset: 0x101c (4124)
  ULONG DetachTimeStamp;               // offset: 0x1020 (4128)
  struct _EPROCESS *LeaderProcess;     // offset: 0x1024 (4132)
  struct _EX_PUSH_LOCK InitializeLock; // offset: 0x1028 (4136)
  struct _MMWSL *WorkingSetList;       // offset: 0x102c (4140)
  struct _MMWSLE_HASH *WsHashStart;    // offset: 0x1030 (4144)
  struct _MMWSLE_HASH *WsHashEnd;      // offset: 0x1034 (4148)
};

// 0x5c (92) bytes
struct _HANDLE_TABLE {
  ULONG NextHandleNeedingPool;        // offset: 0x0 (0)
  LONG ExtraInfoPages;                // offset: 0x4 (4)
  volatile ULONG TableCode;           // offset: 0x8 (8)
  struct _EPROCESS *QuotaProcess;     // offset: 0xc (12)
  struct _LIST_ENTRY HandleTableList; // offset: 0x10 (16)
  ULONG UniqueProcessId;              // offset: 0x18 (24)
  union {
    ULONG Flags; // offset: 0x1c (28)
    struct {
      UCHAR StrictFIFO : 1;                           // offset: 0x1c (28)
      UCHAR EnableHandleExceptions : 1;               // offset: 0x1c (28)
      UCHAR Rundown : 1;                              // offset: 0x1c (28)
      UCHAR Duplicated : 1;                           // offset: 0x1c (28)
      UCHAR RaiseUMExceptionOnInvalidHandleClose : 1; // offset: 0x1c (28)
    };
  };
  struct _EX_PUSH_LOCK HandleContentionEvent; // offset: 0x20 (32)
  struct _EX_PUSH_LOCK HandleTableLock;       // offset: 0x24 (36)
  union {
    struct _HANDLE_TABLE_FREE_LIST FreeLists[1]; // offset: 0x28 (40)
    struct {
      UCHAR ActualEntry[20];                      // offset: 0x28 (40)
      struct _HANDLE_TRACE_DEBUG_INFO *DebugInfo; // offset: 0x3c (60)
    };
  };
};

// 0x70 (112) bytes
struct _FAST_IO_DISPATCH {
  ULONG SizeOfFastIoDispatch; // offset: 0x0 (0)
  UCHAR (*FastIoCheckIfPossible)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   UCHAR arg4, ULONG arg5, UCHAR arg6, struct _IO_STATUS_BLOCK *arg7,
   struct _DEVICE_OBJECT *arg8); // offset: 0x4 (4)
  UCHAR (*FastIoRead)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   UCHAR arg4, ULONG arg5, VOID *arg6, struct _IO_STATUS_BLOCK *arg7,
   struct _DEVICE_OBJECT *arg8); // offset: 0x8 (8)
  UCHAR (*FastIoWrite)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   UCHAR arg4, ULONG arg5, VOID *arg6, struct _IO_STATUS_BLOCK *arg7,
   struct _DEVICE_OBJECT *arg8); // offset: 0xc (12)
  UCHAR (*FastIoQueryBasicInfo)
  (struct _FILE_OBJECT *arg1, UCHAR arg2, struct _FILE_BASIC_INFORMATION *arg3,
   struct _IO_STATUS_BLOCK *arg4,
   struct _DEVICE_OBJECT *arg5); // offset: 0x10 (16)
  UCHAR (*FastIoQueryStandardInfo)
  (struct _FILE_OBJECT *arg1, UCHAR arg2,
   struct _FILE_STANDARD_INFORMATION *arg3, struct _IO_STATUS_BLOCK *arg4,
   struct _DEVICE_OBJECT *arg5); // offset: 0x14 (20)
  UCHAR (*FastIoLock)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2,
   union _LARGE_INTEGER *arg3, struct _EPROCESS *arg4, ULONG arg5, UCHAR arg6,
   UCHAR arg7, struct _IO_STATUS_BLOCK *arg8,
   struct _DEVICE_OBJECT *arg9); // offset: 0x18 (24)
  UCHAR (*FastIoUnlockSingle)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2,
   union _LARGE_INTEGER *arg3, struct _EPROCESS *arg4, ULONG arg5,
   struct _IO_STATUS_BLOCK *arg6,
   struct _DEVICE_OBJECT *arg7); // offset: 0x1c (28)
  UCHAR (*FastIoUnlockAll)
  (struct _FILE_OBJECT *arg1, struct _EPROCESS *arg2,
   struct _IO_STATUS_BLOCK *arg3,
   struct _DEVICE_OBJECT *arg4); // offset: 0x20 (32)
  UCHAR (*FastIoUnlockAllByKey)
  (struct _FILE_OBJECT *arg1, VOID *arg2, ULONG arg3,
   struct _IO_STATUS_BLOCK *arg4,
   struct _DEVICE_OBJECT *arg5); // offset: 0x24 (36)
  UCHAR (*FastIoDeviceControl)
  (struct _FILE_OBJECT *arg1, UCHAR arg2, VOID *arg3, ULONG arg4, VOID *arg5,
   ULONG arg6, ULONG arg7, struct _IO_STATUS_BLOCK *arg8,
   struct _DEVICE_OBJECT *arg9); // offset: 0x28 (40)
  VOID (*AcquireFileForNtCreateSection)
  (struct _FILE_OBJECT *arg1); // offset: 0x2c (44)
  VOID (*ReleaseFileForNtCreateSection)
  (struct _FILE_OBJECT *arg1); // offset: 0x30 (48)
  VOID (*FastIoDetachDevice)
  (struct _DEVICE_OBJECT *arg1,
   struct _DEVICE_OBJECT *arg2); // offset: 0x34 (52)
  UCHAR (*FastIoQueryNetworkOpenInfo)
  (struct _FILE_OBJECT *arg1, UCHAR arg2,
   struct _FILE_NETWORK_OPEN_INFORMATION *arg3, struct _IO_STATUS_BLOCK *arg4,
   struct _DEVICE_OBJECT *arg5); // offset: 0x38 (56)
  LONG (*AcquireForModWrite)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2,
   struct _ERESOURCE **arg3, struct _DEVICE_OBJECT *arg4); // offset: 0x3c (60)
  UCHAR (*MdlRead)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   ULONG arg4, struct _MDL **arg5, struct _IO_STATUS_BLOCK *arg6,
   struct _DEVICE_OBJECT *arg7); // offset: 0x40 (64)
  UCHAR (*MdlReadComplete)
  (struct _FILE_OBJECT *arg1, struct _MDL *arg2,
   struct _DEVICE_OBJECT *arg3); // offset: 0x44 (68)
  UCHAR (*PrepareMdlWrite)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   ULONG arg4, struct _MDL **arg5, struct _IO_STATUS_BLOCK *arg6,
   struct _DEVICE_OBJECT *arg7); // offset: 0x48 (72)
  UCHAR (*MdlWriteComplete)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, struct _MDL *arg3,
   struct _DEVICE_OBJECT *arg4); // offset: 0x4c (76)
  UCHAR (*FastIoReadCompressed)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   ULONG arg4, VOID *arg5, struct _MDL **arg6, struct _IO_STATUS_BLOCK *arg7,
   struct _COMPRESSED_DATA_INFO *arg8, ULONG arg9,
   struct _DEVICE_OBJECT *arg10); // offset: 0x50 (80)
  UCHAR (*FastIoWriteCompressed)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, ULONG arg3,
   ULONG arg4, VOID *arg5, struct _MDL **arg6, struct _IO_STATUS_BLOCK *arg7,
   struct _COMPRESSED_DATA_INFO *arg8, ULONG arg9,
   struct _DEVICE_OBJECT *arg10); // offset: 0x54 (84)
  UCHAR (*MdlReadCompleteCompressed)
  (struct _FILE_OBJECT *arg1, struct _MDL *arg2,
   struct _DEVICE_OBJECT *arg3); // offset: 0x58 (88)
  UCHAR (*MdlWriteCompleteCompressed)
  (struct _FILE_OBJECT *arg1, union _LARGE_INTEGER *arg2, struct _MDL *arg3,
   struct _DEVICE_OBJECT *arg4); // offset: 0x5c (92)
  UCHAR (*FastIoQueryOpen)
  (struct _IRP *arg1, struct _FILE_NETWORK_OPEN_INFORMATION *arg2,
   struct _DEVICE_OBJECT *arg3); // offset: 0x60 (96)
  LONG (*ReleaseForModWrite)
  (struct _FILE_OBJECT *arg1, struct _ERESOURCE *arg2,
   struct _DEVICE_OBJECT *arg3); // offset: 0x64 (100)
  LONG (*AcquireForCcFlush)
  (struct _FILE_OBJECT *arg1,
   struct _DEVICE_OBJECT *arg2); // offset: 0x68 (104)
  LONG (*ReleaseForCcFlush)
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
  LONG (*DriverInit)
  (struct _DRIVER_OBJECT *arg1,
   struct _UNICODE_STRING *arg2); // offset: 0x2c (44)
  VOID (*DriverStartIo)
  (struct _DEVICE_OBJECT *arg1, struct _IRP *arg2);  // offset: 0x30 (48)
  VOID (*DriverUnload)(struct _DRIVER_OBJECT *arg1); // offset: 0x34 (52)
  LONG (*MajorFunction[28])
  (struct _DEVICE_OBJECT *arg1, struct _IRP *arg2); // offset: 0x38 (56)
};

// 0x80 (128) bytes
struct _VF_DRIVER_IO_CALLBACKS {
  LONG (*DriverInit)
  (struct _DRIVER_OBJECT *arg1,
   struct _UNICODE_STRING *arg2); // offset: 0x0 (0)
  VOID (*DriverStartIo)
  (struct _DEVICE_OBJECT *arg1, struct _IRP *arg2);  // offset: 0x4 (4)
  VOID (*DriverUnload)(struct _DRIVER_OBJECT *arg1); // offset: 0x8 (8)
  LONG (*AddDevice)
  (struct _DRIVER_OBJECT *arg1,
   struct _DEVICE_OBJECT *arg2); // offset: 0xc (12)
  LONG (*MajorFunction[28])
  (struct _DEVICE_OBJECT *arg1, struct _IRP *arg2); // offset: 0x10 (16)
};

// 0x28 (40) bytes
struct _DRIVER_EXTENSION {
  struct _DRIVER_OBJECT *DriverObject; // offset: 0x0 (0)
  LONG (*AddDevice)
  (struct _DRIVER_OBJECT *arg1, struct _DEVICE_OBJECT *arg2); // offset: 0x4 (4)
  ULONG Count;                                                // offset: 0x8 (8)
  struct _UNICODE_STRING ServiceKeyName;              // offset: 0xc (12)
  struct _IO_CLIENT_EXTENSION *ClientDriverExtension; // offset: 0x14 (20)
  struct _FS_FILTER_CALLBACKS *FsFilterCallbacks;     // offset: 0x18 (24)
  VOID *KseCallbacks;                                 // offset: 0x1c (28)
  VOID *DvCallbacks;                                  // offset: 0x20 (32)
  VOID *VerifierContext;                              // offset: 0x24 (36)
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

// 0x50 (80) bytes
struct _MI_PAGEFILE_TRACES {
  LONG Status;                              // offset: 0x0 (0)
  USHORT PartitionId;                       // offset: 0x4 (4)
  UCHAR Priority;                           // offset: 0x6 (6)
  UCHAR IrpPriority;                        // offset: 0x7 (7)
  UCHAR ReservationWrite;                   // offset: 0x8 (8)
  union _LARGE_INTEGER CurrentTime;         // offset: 0x10 (16)
  ULONG AvailablePages;                     // offset: 0x18 (24)
  ULONG ModifiedPagesTotal;                 // offset: 0x1c (28)
  ULONG ModifiedPagefilePages;              // offset: 0x20 (32)
  ULONG ModifiedNoWritePages;               // offset: 0x24 (36)
  ULONG ModifiedPagefileNoReservationPages; // offset: 0x28 (40)
  struct {
    struct _MDL Mdl; // offset: 0x0 (0)
    ULONG Page[1];   // offset: 0x1c (28)
  } MdlHack;         // offset: 0x2c (44)
};

// 0xb80 (2944) bytes
struct _MI_VISIBLE_PARTITION {
  ULONG LowestPhysicalPage;                      // offset: 0x0 (0)
  ULONG HighestPhysicalPage;                     // offset: 0x4 (4)
  ULONG NumberOfPhysicalPages;                   // offset: 0x8 (8)
  volatile ULONG NumberOfPagingFiles;            // offset: 0xc (12)
  struct _MMPAGING_FILE *PagingFile[16];         // offset: 0x10 (16)
  volatile ULONG AvailablePages;                 // offset: 0x80 (128)
  volatile ULONG ResidentAvailablePages;         // offset: 0xc0 (192)
  volatile ULONG TotalCommittedPages;            // offset: 0xc4 (196)
  struct _MMPFNLIST ModifiedPageListHead;        // offset: 0x100 (256)
  struct _MMPFNLIST ModifiedNoWritePageListHead; // offset: 0x140 (320)
  ULONG TotalCommitLimit;                        // offset: 0x154 (340)
  ULONG TotalPagesForPagingFile;                 // offset: 0x158 (344)
  ULONG VadPhysicalPages;                        // offset: 0x15c (348)
  ULONG ProcessLockedFilePages;                  // offset: 0x160 (352)
  ULONG ChargeCommitmentFailures[4];             // offset: 0x164 (356)
  volatile LONG PageFileTraceIndex;              // offset: 0x174 (372)
  struct _MI_PAGEFILE_TRACES PageFileTraces[32]; // offset: 0x178 (376)
};

// 0x1740 (5952) bytes
struct _MI_PARTITION {
  struct _MI_PARTITION_CORE Core;                // offset: 0x0 (0)
  struct _MI_PARTITION_MODWRITES Modwriter;      // offset: 0xe8 (232)
  struct _MI_PARTITION_STORES Store;             // offset: 0x298 (664)
  struct _MI_PARTITION_SEGMENTS Segments;        // offset: 0x2e8 (744)
  struct _MI_PARTITION_PAGE_LISTS PageLists;     // offset: 0x3c0 (960)
  struct _MI_PARTITION_COMMIT Commit;            // offset: 0xa80 (2688)
  struct _MI_PARTITION_ZEROING Zeroing;          // offset: 0xaa0 (2720)
  struct _MI_PAGE_COMBINING_SUPPORT PageCombine; // offset: 0xad0 (2768)
  VOID *WorkingSetControl;                       // offset: 0xba8 (2984)
  struct _MMWORKING_SET_EXPANSION_HEAD
      WorkingSetExpansionHead;     // offset: 0xbac (2988)
  struct _MI_VISIBLE_PARTITION Vp; // offset: 0xbc0 (3008)
};

// 0x30 (48) bytes
struct _MI_PARTITION_STATE {
  ULONG PartitionLock;                            // offset: 0x0 (0)
  struct _EX_PUSH_LOCK PartitionIdLock;           // offset: 0x4 (4)
  ULONGLONG InitialPartitionIdBits;               // offset: 0x8 (8)
  struct _LIST_ENTRY PartitionList;               // offset: 0x10 (16)
  struct _RTL_BITMAP *PartitionIdBitmap;          // offset: 0x18 (24)
  struct _RTL_BITMAP InitialPartitionIdBitmap;    // offset: 0x1c (28)
  struct _MI_PARTITION *TempPartitionPointers[1]; // offset: 0x24 (36)
  struct _MI_PARTITION **Partition;               // offset: 0x28 (40)
  ULONG TotalPagesInChildPartitions;              // offset: 0x2c (44)
};

// 0x3cc0 (15552) bytes
struct _MI_SYSTEM_INFORMATION {
  struct _MI_POOL_STATE Pools;                // offset: 0x0 (0)
  struct _MI_SECTION_STATE Sections;          // offset: 0x500 (1280)
  struct _MI_SYSTEM_IMAGE_STATE SystemImages; // offset: 0x640 (1600)
  struct _MI_SESSION_STATE Sessions;          // offset: 0x6a4 (1700)
  struct _MI_PROCESS_STATE Processes;         // offset: 0x16e0 (5856)
  struct _MI_HARDWARE_STATE Hardware;         // offset: 0x1750 (5968)
  struct _MI_SYSTEM_VA_STATE SystemVa;        // offset: 0x1800 (6144)
  struct _MI_COMBINE_STATE PageCombines;      // offset: 0x2cc0 (11456)
  struct _MI_PARTITION_STATE Partitions;      // offset: 0x2cd8 (11480)
  struct _MI_SHUTDOWN_STATE Shutdowns;        // offset: 0x2d08 (11528)
  struct _MI_ERROR_STATE Errors;              // offset: 0x2d58 (11608)
  struct _MI_ACCESS_LOG_STATE AccessLog;      // offset: 0x2e00 (11776)
  struct _MI_DEBUGGER_STATE Debugger;         // offset: 0x2e80 (11904)
  struct _MI_STANDBY_STATE Standby;           // offset: 0x2f40 (12096)
  struct _MI_SYSTEM_PTE_STATE SystemPtes;     // offset: 0x2fc0 (12224)
  struct _MI_IO_PAGE_STATE IoPages;           // offset: 0x3140 (12608)
  struct _MI_PAGING_IO_STATE PagingIo;        // offset: 0x3178 (12664)
  struct _MI_COMMON_PAGE_STATE CommonPages;   // offset: 0x31b0 (12720)
  struct _MI_SYSTEM_TRIM_STATE Trims;         // offset: 0x3200 (12800)
  struct _MI_RESAVAIL_TRACKER ResTrack;       // offset: 0x3240 (12864)
  ULONG Cookie;                               // offset: 0x3440 (13376)
  volatile LONG ZeroingDisabled;              // offset: 0x3444 (13380)
  VOID *volatile *BootRegistryRuns;           // offset: 0x3448 (13384)
  UCHAR FullyInitialized;                     // offset: 0x344c (13388)
  UCHAR SafeBooted;                           // offset: 0x344d (13389)
  struct _RTL_BITMAP LargePfnBitMap;          // offset: 0x3450 (13392)
  struct _RTL_BITMAP PfnBitMap;               // offset: 0x3458 (13400)
  struct _TlgProvider_t *TraceLogging;        // offset: 0x3460 (13408)
  struct _MI_VISIBLE_STATE Vs;                // offset: 0x3480 (13440)
};

// 0x38 (56) bytes
struct _MMPAGE_FILE_EXPANSION {
  struct _SEGMENT *Segment;              // offset: 0x0 (0)
  struct _LIST_ENTRY DereferenceList;    // offset: 0x4 (4)
  struct _MI_PARTITION *Partition;       // offset: 0xc (12)
  ULONG RequestedExpansionSize;          // offset: 0x10 (16)
  ULONG ActualExpansion;                 // offset: 0x14 (20)
  struct _KEVENT Event;                  // offset: 0x18 (24)
  volatile LONG InProgress;              // offset: 0x28 (40)
  struct _MMPAGE_FILE_EXPANSION_FLAGS u; // offset: 0x2c (44)
  VOID **volatile ActiveEntry;           // offset: 0x30 (48)
  UCHAR AttemptForCantExtend;            // offset: 0x34 (52)
  UCHAR PageFileContract;                // offset: 0x35 (53)
};

// 0xa0 (160) bytes
struct _MMMOD_WRITER_MDL_ENTRY {
  struct _LIST_ENTRY Links; // offset: 0x0 (0)
  union {
    struct _IO_STATUS_BLOCK IoStatus; // offset: 0x8 (8)

  } u;                                  // offset: 0x8 (8)
  struct _IRP *Irp;                     // offset: 0x10 (16)
  struct _MODWRITER_FLAGS u1;           // offset: 0x14 (20)
  ULONG StoreWriteRefCount;             // offset: 0x18 (24)
  struct _KAPC StoreWriteCompletionApc; // offset: 0x1c (28)
  ULONG ByteCount;                      // offset: 0x4c (76)
  ULONG ChargedPages;                   // offset: 0x50 (80)
  struct _MMPAGING_FILE *PagingFile;    // offset: 0x54 (84)
  struct _FILE_OBJECT *File;            // offset: 0x58 (88)
  struct _CONTROL_AREA *ControlArea;    // offset: 0x5c (92)
  struct _ERESOURCE *FileResource;      // offset: 0x60 (96)
  union _LARGE_INTEGER WriteOffset;     // offset: 0x68 (104)
  union _LARGE_INTEGER IssueTime;       // offset: 0x70 (112)
  struct _MI_PARTITION *Partition;      // offset: 0x78 (120)
  struct _MDL *PointerMdl;              // offset: 0x7c (124)
  struct _MDL Mdl;                      // offset: 0x80 (128)
  ULONG Page[1];                        // offset: 0x9c (156)
};

// 0x90 (144) bytes
struct _MMPAGING_FILE {
  ULONG Size;                                    // offset: 0x0 (0)
  ULONG MaximumSize;                             // offset: 0x4 (4)
  ULONG MinimumSize;                             // offset: 0x8 (8)
  ULONG FreeSpace;                               // offset: 0xc (12)
  ULONG PeakUsage;                               // offset: 0x10 (16)
  ULONG HighestPage;                             // offset: 0x14 (20)
  ULONG FreeReservationSpace;                    // offset: 0x18 (24)
  ULONG LargestReserveCluster;                   // offset: 0x1c (28)
  struct _FILE_OBJECT *File;                     // offset: 0x20 (32)
  struct _MMMOD_WRITER_MDL_ENTRY *Entry[2];      // offset: 0x24 (36)
  union _SLIST_HEADER PfnsToFree;                // offset: 0x30 (48)
  struct _UNICODE_STRING PageFileName;           // offset: 0x38 (56)
  struct _MI_PAGING_FILE_SPACE_BITMAPS *Bitmaps; // offset: 0x40 (64)
  ULONG AllocationBitmapHint;                    // offset: 0x44 (68)
  ULONG ReservationBitmapHint;                   // offset: 0x48 (72)
  ULONG LargestNonReservedClusterSize;           // offset: 0x4c (76)
  ULONG RefreshClusterSize;                      // offset: 0x50 (80)
  ULONG LastRefreshClusterSize;                  // offset: 0x54 (84)
  ULONG ReservedClusterSizeAggregate;            // offset: 0x58 (88)
  union {
    ULONG ToBeEvictedCount; // offset: 0x5c (92)
    ULONG HybridPriority;   // offset: 0x5c (92)
  };
  USHORT PageFileNumber : 4;                // offset: 0x60 (96)
  USHORT WsSwapPagefile : 1;                // offset: 0x60 (96)
  USHORT NoReservations : 1;                // offset: 0x60 (96)
  USHORT VirtualStorePagefile : 1;          // offset: 0x60 (96)
  USHORT SwapSupported : 1;                 // offset: 0x60 (96)
  USHORT NodeInserted : 1;                  // offset: 0x60 (96)
  USHORT StackNotified : 1;                 // offset: 0x60 (96)
  USHORT Spare0 : 5;                        // offset: 0x60 (96)
  UCHAR AdriftMdls : 1;                     // offset: 0x62 (98)
  UCHAR Spare1 : 7;                         // offset: 0x62 (98)
  UCHAR Spare2 : 8;                         // offset: 0x63 (99)
  ULONG PageHashPages;                      // offset: 0x64 (100)
  ULONG PageHashPagesPeak;                  // offset: 0x68 (104)
  ULONG *PageHash;                          // offset: 0x6c (108)
  VOID *FileHandle;                         // offset: 0x70 (112)
  ULONG Lock;                               // offset: 0x74 (116)
  struct _ETHREAD *LockOwner;               // offset: 0x78 (120)
  struct _RTL_AVL_TREE FlowThroughReadRoot; // offset: 0x7c (124)
  struct _MI_PARTITION *Partition;          // offset: 0x80 (128)
  struct _RTL_BALANCED_NODE FileObjectNode; // offset: 0x84 (132)
};

// 0xf8 (248) bytes
struct _MMINPAGE_SUPPORT {
  struct _LIST_ENTRY ListEntry;     // offset: 0x0 (0)
  struct _LIST_ENTRY ListHead;      // offset: 0x8 (8)
  struct _KEVENT Event;             // offset: 0x10 (16)
  struct _KEVENT CollidedEvent;     // offset: 0x20 (32)
  struct _IO_STATUS_BLOCK IoStatus; // offset: 0x30 (48)
  union _LARGE_INTEGER ReadOffset;  // offset: 0x38 (56)
  struct _KAPC_STATE ApcState;      // offset: 0x40 (64)
  struct _ETHREAD *Thread;          // offset: 0x58 (88)
  struct _MMPFN *LockedProtoPfn;    // offset: 0x5c (92)
  struct _MMPTE PteContents;        // offset: 0x60 (96)
  volatile LONG WaitCount;          // offset: 0x68 (104)
  ULONG ByteCount;                  // offset: 0x6c (108)
  union {
    ULONG ImagePteOffset; // offset: 0x70 (112)
    ULONG TossPage;       // offset: 0x70 (112)

  } u3; // offset: 0x70 (112)
  union {
    struct _MMINPAGE_FLAGS e1; // offset: 0x74 (116)
    ULONG LongFlags;           // offset: 0x74 (116)

  } u1;                             // offset: 0x74 (116)
  struct _FILE_OBJECT *FilePointer; // offset: 0x78 (120)
  union {
    struct _CONTROL_AREA *ControlArea; // offset: 0x7c (124)
    struct _SUBSECTION *Subsection;    // offset: 0x7c (124)
  };
  VOID *Autoboost;           // offset: 0x80 (128)
  VOID *FaultingAddress;     // offset: 0x84 (132)
  struct _MMPTE *PointerPte; // offset: 0x88 (136)
  struct _MMPTE *BasePte;    // offset: 0x8c (140)
  struct _MMPFN *Pfn;        // offset: 0x90 (144)
  struct _MDL *PrefetchMdl;  // offset: 0x94 (148)
  struct _MDL Mdl;           // offset: 0x98 (152)
  union {
    ULONG Page[16];                                    // offset: 0xb4 (180)
    struct _MMINPAGE_SUPPORT_FLOW_THROUGH FlowThrough; // offset: 0xb4 (180)
  };
};

// 0x18 (24) bytes
struct _MI_VAD_EVENT_BLOCK {
  struct _MI_VAD_EVENT_BLOCK *Next; // offset: 0x0 (0)
  ULONG WaitReason;                 // offset: 0x4 (4)
  union {
    struct _KGATE Gate;                          // offset: 0x8 (8)
    struct _MMADDRESS_LIST SecureInfo;           // offset: 0x8 (8)
    struct _RTL_BITMAP BitMap;                   // offset: 0x8 (8)
    struct _MMINPAGE_SUPPORT *InPageSupport;     // offset: 0x8 (8)
    struct _MI_LARGEPAGE_MEMORY_INFO *LargePage; // offset: 0x8 (8)
    struct _ETHREAD *CreatingThread;             // offset: 0x8 (8)
  };
};

// 0x1000 (4096) bytes
struct _TEB {
  struct _NT_TIB NtTib;                         // offset: 0x0 (0)
  VOID *EnvironmentPointer;                     // offset: 0x1c (28)
  struct _CLIENT_ID ClientId;                   // offset: 0x20 (32)
  VOID *ActiveRpcHandle;                        // offset: 0x28 (40)
  VOID *ThreadLocalStoragePointer;              // offset: 0x2c (44)
  struct _PEB *ProcessEnvironmentBlock;         // offset: 0x30 (48)
  ULONG LastErrorValue;                         // offset: 0x34 (52)
  ULONG CountOfOwnedCriticalSections;           // offset: 0x38 (56)
  VOID *CsrClientThread;                        // offset: 0x3c (60)
  VOID *Win32ThreadInfo;                        // offset: 0x40 (64)
  ULONG User32Reserved[26];                     // offset: 0x44 (68)
  ULONG UserReserved[5];                        // offset: 0xac (172)
  VOID *WOW32Reserved;                          // offset: 0xc0 (192)
  ULONG CurrentLocale;                          // offset: 0xc4 (196)
  ULONG FpSoftwareStatusRegister;               // offset: 0xc8 (200)
  VOID *ReservedForDebuggerInstrumentation[16]; // offset: 0xcc (204)
  VOID *SystemReserved1[38];                    // offset: 0x10c (268)
  LONG ExceptionCode;                           // offset: 0x1a4 (420)
  struct _ACTIVATION_CONTEXT_STACK
      *ActivationContextStackPointer;         // offset: 0x1a8 (424)
  ULONG InstrumentationCallbackSp;            // offset: 0x1ac (428)
  ULONG InstrumentationCallbackPreviousPc;    // offset: 0x1b0 (432)
  ULONG InstrumentationCallbackPreviousSp;    // offset: 0x1b4 (436)
  UCHAR InstrumentationCallbackDisabled;      // offset: 0x1b8 (440)
  UCHAR SpareBytes[23];                       // offset: 0x1b9 (441)
  ULONG TxFsContext;                          // offset: 0x1d0 (464)
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
  WCHAR StaticUnicodeBuffer[261];             // offset: 0xc00 (3072)
  VOID *DeallocationStack;                    // offset: 0xe0c (3596)
  VOID *TlsSlots[64];                         // offset: 0xe10 (3600)
  struct _LIST_ENTRY TlsLinks;                // offset: 0xf10 (3856)
  VOID *Vdm;                                  // offset: 0xf18 (3864)
  VOID *ReservedForNtRpc;                     // offset: 0xf1c (3868)
  VOID *DbgSsReserved[2];                     // offset: 0xf20 (3872)
  ULONG HardErrorMode;                        // offset: 0xf28 (3880)
  VOID *Instrumentation[9];                   // offset: 0xf2c (3884)
  struct _GUID ActivityId;                    // offset: 0xf50 (3920)
  VOID *SubProcessTag;                        // offset: 0xf60 (3936)
  VOID *PerflibData;                          // offset: 0xf64 (3940)
  VOID *EtwTraceData;                         // offset: 0xf68 (3944)
  VOID *WinSockData;                          // offset: 0xf6c (3948)
  ULONG GdiBatchCount;                        // offset: 0xf70 (3952)
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
  ULONG GuaranteedStackBytes;            // offset: 0xf78 (3960)
  VOID *ReservedForPerf;                 // offset: 0xf7c (3964)
  VOID *ReservedForOle;                  // offset: 0xf80 (3968)
  ULONG WaitingOnLoaderLock;             // offset: 0xf84 (3972)
  VOID *SavedPriorityState;              // offset: 0xf88 (3976)
  ULONG ReservedForCodeCoverage;         // offset: 0xf8c (3980)
  VOID *ThreadPoolData;                  // offset: 0xf90 (3984)
  VOID **TlsExpansionSlots;              // offset: 0xf94 (3988)
  ULONG MuiGeneration;                   // offset: 0xf98 (3992)
  ULONG IsImpersonating;                 // offset: 0xf9c (3996)
  VOID *NlsCache;                        // offset: 0xfa0 (4000)
  VOID *pShimData;                       // offset: 0xfa4 (4004)
  USHORT HeapVirtualAffinity;            // offset: 0xfa8 (4008)
  USHORT LowFragHeapDataSlot;            // offset: 0xfaa (4010)
  VOID *CurrentTransactionHandle;        // offset: 0xfac (4012)
  struct _TEB_ACTIVE_FRAME *ActiveFrame; // offset: 0xfb0 (4016)
  VOID *FlsData;                         // offset: 0xfb4 (4020)
  VOID *PreferredLanguages;              // offset: 0xfb8 (4024)
  VOID *UserPrefLanguages;               // offset: 0xfbc (4028)
  VOID *MergedPrefLanguages;             // offset: 0xfc0 (4032)
  ULONG MuiImpersonation;                // offset: 0xfc4 (4036)
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
  VOID *TxnScopeEnterCallback;       // offset: 0xfcc (4044)
  VOID *TxnScopeExitCallback;        // offset: 0xfd0 (4048)
  VOID *TxnScopeContext;             // offset: 0xfd4 (4052)
  ULONG LockCount;                   // offset: 0xfd8 (4056)
  LONG WowTebOffset;                 // offset: 0xfdc (4060)
  VOID *ResourceRetValue;            // offset: 0xfe0 (4064)
  VOID *ReservedForWdf;              // offset: 0xfe4 (4068)
  ULONGLONG ReservedForCrt;          // offset: 0xfe8 (4072)
  struct _GUID EffectiveContainerId; // offset: 0xff0 (4080)
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
  ULONGLONG SystemCallPad[3];   // offset: 0x308 (776)
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
  UCHAR Reserved8[20];                        // offset: 0x36c (876)
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
