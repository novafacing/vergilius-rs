// 0x0 bytes (sizeof)
typedef struct _LDRP_LOAD_CONTEXT {
} _LDRP_LOAD_CONTEXT;

// 0x0 bytes (sizeof)
typedef struct _ADAPTER_OBJECT {
} _ADAPTER_OBJECT;

// 0x0 bytes (sizeof)
typedef struct _VERIFIER_SHARED_EXPORT_THUNK {
} _VERIFIER_SHARED_EXPORT_THUNK;

// 0x20 bytes (sizeof)
typedef struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS {
  struct _VERIFIER_SHARED_EXPORT_THUNK
      *SharedExportThunks; // offset: 0x0 ordinal: 0x0
  struct _VERIFIER_SHARED_EXPORT_THUNK
      *PoolSharedExportThunks; // offset: 0x8 ordinal: 0x1
  struct _VERIFIER_SHARED_EXPORT_THUNK
      *OrderDependentSharedExportThunks; // offset: 0x10 ordinal: 0x2
  struct _VERIFIER_SHARED_EXPORT_THUNK
      *XdvSharedExportThunks; // offset: 0x18 ordinal: 0x3
} _VF_TARGET_ALL_SHARED_EXPORT_THUNKS;

// 0x0 bytes (sizeof)
typedef struct _ACTIVATION_CONTEXT_DATA {
} _ACTIVATION_CONTEXT_DATA;

// 0x0 bytes (sizeof)
typedef struct _KTMNOTIFICATION_PACKET {
} _KTMNOTIFICATION_PACKET;

// 0x0 bytes (sizeof)
typedef struct _ETW_PERFECT_HASH_FUNCTION {
} _ETW_PERFECT_HASH_FUNCTION;

// 0x0 bytes (sizeof)
typedef struct _SERVER_SILO_MONITOR {
} _SERVER_SILO_MONITOR;

// 0x0 bytes (sizeof)
typedef struct _HAL_PMC_COUNTERS {
} _HAL_PMC_COUNTERS;

// 0x0 bytes (sizeof)
typedef struct _ETW_STACK_CACHE {
} _ETW_STACK_CACHE;

// 0x0 bytes (sizeof)
typedef struct _CALLBACK_OBJECT {
} _CALLBACK_OBJECT;

typedef unsigned char UCHAR;

typedef unsigned long long ULONGLONG;

// 0x0 bytes (sizeof)
typedef struct _DEVICE_OBJECT_LIST {
} _DEVICE_OBJECT_LIST;

// 0x8 bytes (sizeof)
typedef union __anon_1226 {
  struct _DEVICE_NODE *NextResourceDeviceNode; // offset: 0x0 ordinal: 0x0
} __anon_1226;

typedef void VOID;

// 0x0 bytes (sizeof)
typedef struct _PCW_INSTANCE {
} _PCW_INSTANCE;

// 0x0 bytes (sizeof)
typedef struct _PCW_BUFFER {
} _PCW_BUFFER;

// 0x0 bytes (sizeof)
typedef struct _PCW_REGISTRATION {
} _PCW_REGISTRATION;

typedef void __anon_1063;

typedef unsigned short USHORT;

typedef unsigned long ULONG;

// 0x4 bytes (sizeof)
typedef struct _MMSECTION_FLAGS {
  ULONG BeingDeleted : 1;                   // offset: 0x0 ordinal: 0x0
  ULONG BeingCreated : 1;                   // offset: 0x0 ordinal: 0x1
  ULONG BeingPurged : 1;                    // offset: 0x0 ordinal: 0x2
  ULONG NoModifiedWriting : 1;              // offset: 0x0 ordinal: 0x3
  ULONG FailAllIo : 1;                      // offset: 0x0 ordinal: 0x4
  ULONG Image : 1;                          // offset: 0x0 ordinal: 0x5
  ULONG Based : 1;                          // offset: 0x0 ordinal: 0x6
  ULONG File : 1;                           // offset: 0x0 ordinal: 0x7
  ULONG AttemptingDelete : 1;               // offset: 0x0 ordinal: 0x8
  ULONG PrefetchCreated : 1;                // offset: 0x0 ordinal: 0x9
  ULONG PhysicalMemory : 1;                 // offset: 0x0 ordinal: 0xa
  ULONG CopyOnWrite : 1;                    // offset: 0x0 ordinal: 0xb
  ULONG Reserve : 1;                        // offset: 0x0 ordinal: 0xc
  ULONG Commit : 1;                         // offset: 0x0 ordinal: 0xd
  ULONG NoChange : 1;                       // offset: 0x0 ordinal: 0xe
  ULONG WasPurged : 1;                      // offset: 0x0 ordinal: 0xf
  ULONG UserReference : 1;                  // offset: 0x0 ordinal: 0x10
  ULONG GlobalMemory : 1;                   // offset: 0x0 ordinal: 0x11
  ULONG DeleteOnClose : 1;                  // offset: 0x0 ordinal: 0x12
  ULONG FilePointerNull : 1;                // offset: 0x0 ordinal: 0x13
  ULONG PreferredNode : 6;                  // offset: 0x0 ordinal: 0x14
  ULONG GlobalOnlyPerSession : 1;           // offset: 0x0 ordinal: 0x15
  ULONG UserWritable : 1;                   // offset: 0x0 ordinal: 0x16
  ULONG SystemVaAllocated : 1;              // offset: 0x0 ordinal: 0x17
  ULONG PreferredFsCompressionBoundary : 1; // offset: 0x0 ordinal: 0x18
  ULONG UsingFileExtents : 1;               // offset: 0x0 ordinal: 0x19
  ULONG Spare : 1;                          // offset: 0x0 ordinal: 0x1a
} _MMSECTION_FLAGS;

// 0x8 bytes (sizeof)
typedef struct _MI_FILE_EXTENTS {
  struct _MI_FILE_EXTENTS_WAIT_BLOCK *WaitList; // offset: 0x0 ordinal: 0x0
} _MI_FILE_EXTENTS;

// 0x0 bytes (sizeof)
typedef struct _SCSI_REQUEST_BLOCK {
} _SCSI_REQUEST_BLOCK;

// 0x0 bytes (sizeof)
typedef struct _JOB_IO_RATE_CONTROL {
} _JOB_IO_RATE_CONTROL;

// 0x0 bytes (sizeof)
typedef struct _JOB_NET_RATE_CONTROL {
} _JOB_NET_RATE_CONTROL;

// 0x0 bytes (sizeof)
typedef struct _JOB_CPU_RATE_CONTROL {
} _JOB_CPU_RATE_CONTROL;

// 0x0 bytes (sizeof)
typedef struct _JOB_NOTIFICATION_INFORMATION {
} _JOB_NOTIFICATION_INFORMATION;

// 0x0 bytes (sizeof)
typedef struct _JOB_ACCESS_STATE {
} _JOB_ACCESS_STATE;

// 0x8 bytes (sizeof)
typedef struct __anon_655 {
  struct _SCSI_REQUEST_BLOCK *Srb; // offset: 0x0 ordinal: 0x0
} __anon_655;

// 0x0 bytes (sizeof)
typedef struct _EPROCESS_QUOTA_BLOCK {
} _EPROCESS_QUOTA_BLOCK;

// 0x0 bytes (sizeof)
typedef struct _PAGEFAULT_HISTORY {
} _PAGEFAULT_HISTORY;

// 0x8 bytes (sizeof)
typedef struct __anon_1466 {
  struct _FILE_OBJECT *FileObject; // offset: 0x0 ordinal: 0x0
} __anon_1466;

// 0x0 bytes (sizeof)
typedef struct _ESILO {
} _ESILO;

// 0x8 bytes (sizeof)
typedef struct _ARBITER_ADD_RESERVED_PARAMETERS {
  struct _DEVICE_OBJECT *ReserveDevice; // offset: 0x0 ordinal: 0x0
} _ARBITER_ADD_RESERVED_PARAMETERS;

// 0x10 bytes (sizeof)
typedef struct _SLIST_ENTRY {
  struct _SLIST_ENTRY *Next; // offset: 0x0 ordinal: 0x0
} _SLIST_ENTRY;

typedef short SHORT;

typedef long long LONGLONG;

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

// 0x4 bytes (sizeof)
typedef struct __anon_1509 {
  SHORT Type;           // offset: 0x0 ordinal: 0x0
  SHORT DataInfoOffset; // offset: 0x2 ordinal: 0x1
} __anon_1509;

// 0x4 bytes (sizeof)
typedef struct __anon_1507 {
  SHORT DataLength;  // offset: 0x0 ordinal: 0x0
  SHORT TotalLength; // offset: 0x2 ordinal: 0x1
} __anon_1507;

// 0x8 bytes (sizeof)
typedef struct _RTL_AVL_TREE {
  struct _RTL_BALANCED_NODE *Root; // offset: 0x0 ordinal: 0x0
} _RTL_AVL_TREE;

// 0x10 bytes (sizeof)
typedef struct _RTL_RB_TREE {
  struct _RTL_BALANCED_NODE *Root; // offset: 0x0 ordinal: 0x0
  struct _RTL_BALANCED_NODE *Min;  // offset: 0x8 ordinal: 0x1
} _RTL_RB_TREE;

// 0x18 bytes (sizeof)
typedef struct _RTL_SPLAY_LINKS {
  struct _RTL_SPLAY_LINKS *Parent;     // offset: 0x0 ordinal: 0x0
  struct _RTL_SPLAY_LINKS *LeftChild;  // offset: 0x8 ordinal: 0x1
  struct _RTL_SPLAY_LINKS *RightChild; // offset: 0x10 ordinal: 0x2
} _RTL_SPLAY_LINKS;

// 0x8 bytes (sizeof)
typedef struct _LDRP_CSLIST {
  struct _SINGLE_LIST_ENTRY *Tail; // offset: 0x0 ordinal: 0x0
} _LDRP_CSLIST;

// 0x8 bytes (sizeof)
typedef struct _SINGLE_LIST_ENTRY {
  struct _SINGLE_LIST_ENTRY *Next; // offset: 0x0 ordinal: 0x0
} _SINGLE_LIST_ENTRY;

// 0x18 bytes (sizeof)
typedef struct _ETW_BUFFER_QUEUE {
  struct _SINGLE_LIST_ENTRY *QueueHead; // offset: 0x0 ordinal: 0x0
  struct _SINGLE_LIST_ENTRY *QueueTail; // offset: 0x8 ordinal: 0x1
  struct _SINGLE_LIST_ENTRY QueueEntry; // offset: 0x10 ordinal: 0x2
} _ETW_BUFFER_QUEUE;

// 0x8 bytes (sizeof)
typedef struct _KWAIT_CHAIN {
  struct _SINGLE_LIST_ENTRY Head; // offset: 0x0 ordinal: 0x0
} _KWAIT_CHAIN;

// 0x10 bytes (sizeof)
typedef struct _KDPC_LIST {
  struct _SINGLE_LIST_ENTRY ListHead;   // offset: 0x0 ordinal: 0x0
  struct _SINGLE_LIST_ENTRY *LastEntry; // offset: 0x8 ordinal: 0x1
} _KDPC_LIST;

typedef char CHAR;

// 0x0 bytes (sizeof)
typedef struct _FLS_CALLBACK_INFO {
} _FLS_CALLBACK_INFO;

// 0x0 bytes (sizeof)
typedef struct _ASSEMBLY_STORAGE_MAP {
} _ASSEMBLY_STORAGE_MAP;

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
typedef struct __anon_2286 {
  struct _LIST_ENTRY ListHead; // offset: 0x0 ordinal: 0x0
} __anon_2286;

// 0x18 bytes (sizeof)
typedef struct _DELAY_ACK_FO {
  struct _LIST_ENTRY Links;                // offset: 0x0 ordinal: 0x0
  struct _FILE_OBJECT *OriginalFileObject; // offset: 0x10 ordinal: 0x1
} _DELAY_ACK_FO;

// 0x18 bytes (sizeof)
typedef struct _TRIAGE_PNP_DEVICE_COMPLETION_REQUEST {
  struct _LIST_ENTRY ListEntry;           // offset: 0x0 ordinal: 0x0
  struct _TRIAGE_DEVICE_NODE *DeviceNode; // offset: 0x10 ordinal: 0x1
} _TRIAGE_PNP_DEVICE_COMPLETION_REQUEST;

// 0x10 bytes (sizeof)
typedef struct _TRIAGE_PNP_DEVICE_COMPLETION_QUEUE {
  struct _LIST_ENTRY DispatchedList; // offset: 0x0 ordinal: 0x0
} _TRIAGE_PNP_DEVICE_COMPLETION_QUEUE;

// 0x10 bytes (sizeof)
typedef struct _MMWORKING_SET_EXPANSION_HEAD {
  struct _LIST_ENTRY ListHead; // offset: 0x0 ordinal: 0x0
} _MMWORKING_SET_EXPANSION_HEAD;

typedef VOID (*__anon_1061)(__anon_1063);

typedef VOID (*__anon_572)(struct _DEVICE_OBJECT *, struct _DEVICE_OBJECT *);

typedef VOID (*__anon_571)(struct _FILE_OBJECT *);

typedef VOID (*__anon_108)();

// 0x10 bytes (sizeof)
typedef struct __anon_2285 {
  VOID *UserData; // offset: 0x0 ordinal: 0x0
  VOID *Owner;    // offset: 0x8 ordinal: 0x1
} __anon_2285;

// 0x48 bytes (sizeof)
typedef struct _VI_FAULT_TRACE {
  struct _ETHREAD *Thread; // offset: 0x0 ordinal: 0x0
  VOID *StackTrace[8];     // offset: 0x8 ordinal: 0x1
} _VI_FAULT_TRACE;

// 0x40 bytes (sizeof)
typedef struct _VF_KE_CRITICAL_REGION_TRACE {
  struct _ETHREAD *Thread; // offset: 0x0 ordinal: 0x0
  VOID *StackTrace[7];     // offset: 0x8 ordinal: 0x1
} _VF_KE_CRITICAL_REGION_TRACE;

// 0x8 bytes (sizeof)
typedef struct _ALPC_HANDLE_ENTRY {
  VOID *Object; // offset: 0x0 ordinal: 0x0
} _ALPC_HANDLE_ENTRY;

// 0x8 bytes (sizeof)
typedef struct __anon_1305 {
  VOID *Notification; // offset: 0x0 ordinal: 0x0
} __anon_1305;

// 0x8 bytes (sizeof)
typedef struct __anon_1096 {
  VOID *CheckStack; // offset: 0x0 ordinal: 0x0
} __anon_1096;

// 0x28 bytes (sizeof)
typedef struct __anon_771 {
  VOID *Argument1; // offset: 0x0 ordinal: 0x0
  VOID *Argument2; // offset: 0x8 ordinal: 0x1
  VOID *Argument3; // offset: 0x10 ordinal: 0x2
  VOID *Argument4; // offset: 0x18 ordinal: 0x3
  VOID *Argument5; // offset: 0x20 ordinal: 0x4
} __anon_771;

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
typedef struct __anon_671 {
  VOID *Argument1; // offset: 0x0 ordinal: 0x0
  VOID *Argument2; // offset: 0x8 ordinal: 0x1
  VOID *Argument3; // offset: 0x10 ordinal: 0x2
  VOID *Argument4; // offset: 0x18 ordinal: 0x3
} __anon_671;

// 0x10 bytes (sizeof)
typedef struct _IO_CLIENT_EXTENSION {
  struct _IO_CLIENT_EXTENSION *NextExtension; // offset: 0x0 ordinal: 0x0
  VOID *ClientIdentificationAddress;          // offset: 0x8 ordinal: 0x1
} _IO_CLIENT_EXTENSION;

typedef VOID (*__anon_522)(struct _DEVICE_OBJECT *, VOID *);

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

typedef VOID (*__anon_411)(VOID *, VOID *, VOID *, VOID *);

typedef VOID (*__anon_386)(VOID *, VOID *, VOID *);

typedef VOID (*__anon_340)(VOID *);

// 0x20 bytes (sizeof)
typedef struct _WORK_QUEUE_ITEM {
  struct _LIST_ENTRY List;       // offset: 0x0 ordinal: 0x0
  VOID (*WorkerRoutine)(VOID *); // offset: 0x10 ordinal: 0x1
  VOID *Parameter;               // offset: 0x18 ordinal: 0x2
} _WORK_QUEUE_ITEM;

// 0x28 bytes (sizeof)
typedef struct _MI_COMBINE_WORKITEM {
  VOID *NextEntry;                  // offset: 0x0 ordinal: 0x0
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x8 ordinal: 0x1
} _MI_COMBINE_WORKITEM;

// 0x20 bytes (sizeof)
typedef struct _KREQUEST_PACKET {
  VOID *CurrentPacket[3]; // offset: 0x0 ordinal: 0x0
  VOID(*WorkerRoutine)
  (VOID *, VOID *, VOID *, VOID *); // offset: 0x18 ordinal: 0x1
} _KREQUEST_PACKET;

// 0x80 bytes (sizeof)
typedef struct _OBJECT_REF_TRACE {
  VOID *StackTrace[16]; // offset: 0x0 ordinal: 0x0
} _OBJECT_REF_TRACE;

// 0x10 bytes (sizeof)
typedef struct _CLIENT_ID {
  VOID *UniqueProcess; // offset: 0x0 ordinal: 0x0
  VOID *UniqueThread;  // offset: 0x8 ordinal: 0x1
} _CLIENT_ID;

typedef VOID (*__anon_51)(VOID *, VOID *);

// 0x0 bytes (sizeof)
typedef struct _TP_CALLBACK_INSTANCE {
} _TP_CALLBACK_INSTANCE;

typedef VOID (*__anon_53)(struct _TP_CALLBACK_INSTANCE *, VOID *);

// 0x0 bytes (sizeof)
typedef struct _ACTIVATION_CONTEXT {
} _ACTIVATION_CONTEXT;

// 0x0 bytes (sizeof)
typedef struct _TP_CLEANUP_GROUP {
} _TP_CLEANUP_GROUP;

// 0x0 bytes (sizeof)
typedef struct _TP_POOL {
} _TP_POOL;

typedef long LONG;

typedef enum _MI_DYNAMICBASE_BITMAP {
  DynamicBaseBitMap32 = 0,       // ordinal: 0x0
  DynamicBaseBitMap64Low = 1,    // ordinal: 0x1
  DynamicBaseBitMap64High = 2,   // ordinal: 0x2
  DynamicBaseBitMapWow64Dll = 3, // ordinal: 0x3
  LastDynamicBaseBitMap = 4,     // ordinal: 0x4
} _MI_DYNAMICBASE_BITMAP;

typedef enum _MI_LOCK_ACQUIRE_TYPE {
  MiAcquireExclusive = 0,           // ordinal: 0x0
  MiAcquireExclusiveAutoExpand = 1, // ordinal: 0x1
  MiAcquireShared = 2,              // ordinal: 0x2
  MiAcquireSharedAutoExpand = 3,    // ordinal: 0x3
} _MI_LOCK_ACQUIRE_TYPE;

typedef enum _MI_MEMORY_EVENT_TYPES {
  LowAvailablePagesEvent = 0,     // ordinal: 0x0
  HighAvailablePagesEvent = 1,    // ordinal: 0x1
  LowPagedPoolEvent = 2,          // ordinal: 0x2
  HighPagedPoolEvent = 3,         // ordinal: 0x3
  LowNonPagedPoolEvent = 4,       // ordinal: 0x4
  HighNonPagedPoolEvent = 5,      // ordinal: 0x5
  LowCommitEvent = 6,             // ordinal: 0x6
  HighCommitEvent = 7,            // ordinal: 0x7
  MaximumCommitEvent = 8,         // ordinal: 0x8
  BadMemoryDetectedEvent = 9,     // ordinal: 0x9
  PhysicalMemoryChangeEvent = 10, // ordinal: 0xa
  TotalNumberOfMemoryEvents = 11, // ordinal: 0xb
} _MI_MEMORY_EVENT_TYPES;

typedef enum _FILE_OBJECT_EXTENSION_TYPE {
  FoExtTypeTransactionParams = 0, // ordinal: 0x0
  FoExtTypeInternal = 1,          // ordinal: 0x1
  FoExtTypeIosbRange = 2,         // ordinal: 0x2
  FoExtTypeGeneric = 3,           // ordinal: 0x3
  FoExtTypeSfio = 4,              // ordinal: 0x4
  FoExtTypeSymlink = 5,           // ordinal: 0x5
  FoExtTypeOplockKey = 6,         // ordinal: 0x6
  MaxFoExtTypes = 7,              // ordinal: 0x7
} _FILE_OBJECT_EXTENSION_TYPE;

typedef enum _PERFINFO_MM_STAT {
  PerfInfoMMStatNotUsed = 0,              // ordinal: 0x0
  PerfInfoMMStatAggregatePageCombine = 1, // ordinal: 0x1
  PerfInfoMMStatIterationPageCombine = 2, // ordinal: 0x2
  PerfInfoMMStatMax = 3,                  // ordinal: 0x3
} _PERFINFO_MM_STAT;

typedef enum _TlgOut_t {
  _TlgOutNULL = 0,           // ordinal: 0x0
  _TlgOutNOPRINT = 1,        // ordinal: 0x1
  _TlgOutSTRING = 2,         // ordinal: 0x2
  _TlgOutBOOLEAN = 3,        // ordinal: 0x3
  _TlgOutHEX = 4,            // ordinal: 0x4
  _TlgOutPID = 5,            // ordinal: 0x5
  _TlgOutTID = 6,            // ordinal: 0x6
  _TlgOutPORT = 7,           // ordinal: 0x7
  _TlgOutIPV4 = 8,           // ordinal: 0x8
  _TlgOutIPV6 = 9,           // ordinal: 0x9
  _TlgOutSOCKETADDRESS = 10, // ordinal: 0xa
  _TlgOutXML = 11,           // ordinal: 0xb
  _TlgOutJSON = 12,          // ordinal: 0xc
  _TlgOutWIN32ERROR = 13,    // ordinal: 0xd
  _TlgOutNTSTATUS = 14,      // ordinal: 0xe
  _TlgOutHRESULT = 15,       // ordinal: 0xf
  _TlgOutFILETIME = 16,      // ordinal: 0x10
  _TlgOutSIGNED = 17,        // ordinal: 0x11
  _TlgOutUNSIGNED = 18,      // ordinal: 0x12
  _TlgOutMax = 19,           // ordinal: 0x13
  _TlgOutChain = 128,        // ordinal: 0x14
  _TlgOutTypeMask = 127,     // ordinal: 0x15
} _TlgOut_t;

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
  RegNtPreRestoreKey = 41,                // ordinal: 0x34
  RegNtPostRestoreKey = 42,               // ordinal: 0x35
  RegNtPreSaveKey = 43,                   // ordinal: 0x36
  RegNtPostSaveKey = 44,                  // ordinal: 0x37
  RegNtPreReplaceKey = 45,                // ordinal: 0x38
  RegNtPostReplaceKey = 46,               // ordinal: 0x39
  RegNtPreQueryKeyName = 47,              // ordinal: 0x3a
  RegNtPostQueryKeyName = 48,             // ordinal: 0x3b
  MaxRegNtNotifyClass = 49,               // ordinal: 0x3c
} _REG_NOTIFY_CLASS;

typedef enum _WOW64_SHARED_INFORMATION {
  SharedNtdll32LdrInitializeThunk = 0,                  // ordinal: 0x0
  SharedNtdll32KiUserExceptionDispatcher = 1,           // ordinal: 0x1
  SharedNtdll32KiUserApcDispatcher = 2,                 // ordinal: 0x2
  SharedNtdll32KiUserCallbackDispatcher = 3,            // ordinal: 0x3
  SharedNtdll32ExpInterlockedPopEntrySListFault = 4,    // ordinal: 0x4
  SharedNtdll32ExpInterlockedPopEntrySListResume = 5,   // ordinal: 0x5
  SharedNtdll32ExpInterlockedPopEntrySListEnd = 6,      // ordinal: 0x6
  SharedNtdll32RtlUserThreadStart = 7,                  // ordinal: 0x7
  SharedNtdll32pQueryProcessDebugInformationRemote = 8, // ordinal: 0x8
  SharedNtdll32BaseAddress = 9,                         // ordinal: 0x9
  SharedNtdll32LdrSystemDllInitBlock = 10,              // ordinal: 0xa
  Wow64SharedPageEntriesCount = 11,                     // ordinal: 0xb
} _WOW64_SHARED_INFORMATION;

typedef enum _MI_CFG_BITMAP_TYPE {
  CfgBitMapNative = 0, // ordinal: 0x0
  CfgBitMapWow64 = 1,  // ordinal: 0x1
  CfgBitMapMax = 2,    // ordinal: 0x2
} _MI_CFG_BITMAP_TYPE;

typedef enum _WORKING_SET_TYPE {
  WorkingSetTypeUser = 0,        // ordinal: 0x0
  WorkingSetTypeSession = 1,     // ordinal: 0x1
  WorkingSetTypeSystemTypes = 2, // ordinal: 0x2
  WorkingSetTypeSystemCache = 2, // ordinal: 0x3
  WorkingSetTypePagedPool = 3,   // ordinal: 0x4
  WorkingSetTypeSystemPtes = 4,  // ordinal: 0x5
  WorkingSetTypeMaximum = 5,     // ordinal: 0x6
} _WORKING_SET_TYPE;

typedef enum _TlgIn_t {
  _TlgInNULL = 0,                 // ordinal: 0x0
  _TlgInUNICODESTRING = 1,        // ordinal: 0x1
  _TlgInANSISTRING = 2,           // ordinal: 0x2
  _TlgInINT8 = 3,                 // ordinal: 0x3
  _TlgInUINT8 = 4,                // ordinal: 0x4
  _TlgInINT16 = 5,                // ordinal: 0x5
  _TlgInUINT16 = 6,               // ordinal: 0x6
  _TlgInINT32 = 7,                // ordinal: 0x7
  _TlgInUINT32 = 8,               // ordinal: 0x8
  _TlgInINT64 = 9,                // ordinal: 0x9
  _TlgInUINT64 = 10,              // ordinal: 0xa
  _TlgInFLOAT = 11,               // ordinal: 0xb
  _TlgInDOUBLE = 12,              // ordinal: 0xc
  _TlgInBOOL32 = 13,              // ordinal: 0xd
  _TlgInBINARY = 14,              // ordinal: 0xe
  _TlgInGUID = 15,                // ordinal: 0xf
  _TlgInPOINTER_unsupported = 16, // ordinal: 0x10
  _TlgInFILETIME = 17,            // ordinal: 0x11
  _TlgInSYSTEMTIME = 18,          // ordinal: 0x12
  _TlgInSID = 19,                 // ordinal: 0x13
  _TlgInHEXINT32 = 20,            // ordinal: 0x14
  _TlgInHEXINT64 = 21,            // ordinal: 0x15
  _TlgInCOUNTEDSTRING = 22,       // ordinal: 0x16
  _TlgInCOUNTEDANSISTRING = 23,   // ordinal: 0x17
  _TlgInSTRUCT = 24,              // ordinal: 0x18
  _TlgInMax = 25,                 // ordinal: 0x19
  _TlgInINTPTR = 9,               // ordinal: 0x1a
  _TlgInUINTPTR = 10,             // ordinal: 0x1b
  _TlgInPOINTER = 21,             // ordinal: 0x1c
  _TlgInCcount = 32,              // ordinal: 0x1d
  _TlgInVcount = 64,              // ordinal: 0x1e
  _TlgInChain = 128,              // ordinal: 0x1f
  _TlgInCustom = 96,              // ordinal: 0x20
  _TlgInTypeMask = 31,            // ordinal: 0x21
  _TlgInCountMask = 96,           // ordinal: 0x22
  _TlgInFlagMask = 224,           // ordinal: 0x23
} _TlgIn_t;

typedef enum _KPROCESS_STATE {
  ProcessInMemory = 0,      // ordinal: 0x0
  ProcessOutOfMemory = 1,   // ordinal: 0x1
  ProcessInTransition = 2,  // ordinal: 0x2
  ProcessOutTransition = 3, // ordinal: 0x3
  ProcessInSwap = 4,        // ordinal: 0x4
  ProcessOutSwap = 5,       // ordinal: 0x5
  ProcessRetryOutSwap = 6,  // ordinal: 0x6
  ProcessAllSwapStates = 7, // ordinal: 0x7
} _KPROCESS_STATE;

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

typedef enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS {
  JOB_OBJECT_IO_RATE_CONTROL_ENABLE = 1,      // ordinal: 0x0
  JOB_OBJECT_IO_RATE_CONTROL_VALID_FLAGS = 1, // ordinal: 0x1
} JOB_OBJECT_IO_RATE_CONTROL_FLAGS;

typedef enum _KWAIT_BLOCK_STATE {
  WaitBlockBypassStart = 0,           // ordinal: 0x0
  WaitBlockBypassComplete = 1,        // ordinal: 0x1
  WaitBlockSuspendBypassStart = 2,    // ordinal: 0x2
  WaitBlockSuspendBypassComplete = 3, // ordinal: 0x3
  WaitBlockActive = 4,                // ordinal: 0x4
  WaitBlockInactive = 5,              // ordinal: 0x5
  WaitBlockSuspended = 6,             // ordinal: 0x6
  WaitBlockAllStates = 7,             // ordinal: 0x7
} _KWAIT_BLOCK_STATE;

typedef enum _OBJECT_INFORMATION_CLASS {
  ObjectBasicInformation = 0,      // ordinal: 0x0
  ObjectNameInformation = 1,       // ordinal: 0x1
  ObjectTypeInformation = 2,       // ordinal: 0x2
  ObjectTypesInformation = 3,      // ordinal: 0x3
  ObjectHandleFlagInformation = 4, // ordinal: 0x4
  ObjectSessionInformation = 5,    // ordinal: 0x5
  MaxObjectInfoClass = 6,          // ordinal: 0x6
} _OBJECT_INFORMATION_CLASS;

typedef enum _PS_WAKE_REASON {
  PsWakeReasonUser = 0,              // ordinal: 0x0
  PsWakeReasonExecutionRequired = 1, // ordinal: 0x1
  PsWakeReasonKernel = 2,            // ordinal: 0x2
  PsWakeReasonInstrumentation = 3,   // ordinal: 0x3
  PsWakeReasonPreserveProcess = 4,   // ordinal: 0x4
  PsMaxWakeReasons = 5,              // ordinal: 0x5
} _PS_WAKE_REASON;

typedef enum _ETW_PERFECT_HASH_FUNCTION_TYPE {
  ETW_PHF_EVENT_ID = 0,   // ordinal: 0x0
  ETW_PHF_STACK_WALK = 1, // ordinal: 0x1
  ETW_PHF_MAX_COUNT = 2,  // ordinal: 0x2
} _ETW_PERFECT_HASH_FUNCTION_TYPE;

typedef enum _PROCESS_SECTION_TYPE {
  ProcessSectionData = 0,           // ordinal: 0x0
  ProcessSectionImage = 1,          // ordinal: 0x1
  ProcessSectionImageNx = 2,        // ordinal: 0x2
  ProcessSectionPagefileBacked = 3, // ordinal: 0x3
  ProcessSectionMax = 4,            // ordinal: 0x4
} _PROCESS_SECTION_TYPE;

typedef enum ReplacesCorHdrNumericDefines {
  COMIMAGE_FLAGS_ILONLY = 1,                      // ordinal: 0x0
  COMIMAGE_FLAGS_32BITREQUIRED = 2,               // ordinal: 0x1
  COMIMAGE_FLAGS_IL_LIBRARY = 4,                  // ordinal: 0x2
  COMIMAGE_FLAGS_STRONGNAMESIGNED = 8,            // ordinal: 0x3
  COMIMAGE_FLAGS_NATIVE_ENTRYPOINT = 16,          // ordinal: 0x4
  COMIMAGE_FLAGS_TRACKDEBUGDATA = 65536,          // ordinal: 0x5
  COMIMAGE_FLAGS_32BITPREFERRED = 131072,         // ordinal: 0x6
  COR_VERSION_MAJOR_V2 = 2,                       // ordinal: 0x7
  COR_VERSION_MAJOR = 2,                          // ordinal: 0x8
  COR_VERSION_MINOR = 5,                          // ordinal: 0x9
  COR_DELETED_NAME_LENGTH = 8,                    // ordinal: 0xa
  COR_VTABLEGAP_NAME_LENGTH = 8,                  // ordinal: 0xb
  NATIVE_TYPE_MAX_CB = 1,                         // ordinal: 0xc
  COR_ILMETHOD_SECT_SMALL_MAX_DATASIZE = 255,     // ordinal: 0xd
  IMAGE_COR_MIH_METHODRVA = 1,                    // ordinal: 0xe
  IMAGE_COR_MIH_EHRVA = 2,                        // ordinal: 0xf
  IMAGE_COR_MIH_BASICBLOCK = 8,                   // ordinal: 0x10
  COR_VTABLE_32BIT = 1,                           // ordinal: 0x11
  COR_VTABLE_64BIT = 2,                           // ordinal: 0x12
  COR_VTABLE_FROM_UNMANAGED = 4,                  // ordinal: 0x13
  COR_VTABLE_FROM_UNMANAGED_RETAIN_APPDOMAIN = 8, // ordinal: 0x14
  COR_VTABLE_CALL_MOST_DERIVED = 16,              // ordinal: 0x15
  IMAGE_COR_EATJ_THUNK_SIZE = 32,                 // ordinal: 0x16
  MAX_CLASS_NAME = 1024,                          // ordinal: 0x17
  MAX_PACKAGE_NAME = 1024,                        // ordinal: 0x18
} ReplacesCorHdrNumericDefines;

typedef enum _EX_BALANCE_OBJECT {
  ExTimerExpiration = 0,       // ordinal: 0x0
  ExThreadSetManagerEvent = 1, // ordinal: 0x1
  ExThreadReaperEvent = 2,     // ordinal: 0x2
  ExMaximumBalanceObject = 3,  // ordinal: 0x3
} _EX_BALANCE_OBJECT;

typedef enum _MI_IO_PFN_TYPE {
  MiIoPfnProbes = 0,      // ordinal: 0x0
  MiIoPfnMaps = 1,        // ordinal: 0x1
  MiIoPfnUnmapped = 2,    // ordinal: 0x2
  MiMaximumIoPfnType = 3, // ordinal: 0x3
} _MI_IO_PFN_TYPE;

typedef enum _PS_STD_HANDLE_STATE {
  PsNeverDuplicate = 0,     // ordinal: 0x0
  PsRequestDuplicate = 1,   // ordinal: 0x1
  PsAlwaysDuplicate = 2,    // ordinal: 0x2
  PsMaxStdHandleStates = 3, // ordinal: 0x3
} _PS_STD_HANDLE_STATE;

typedef enum _PROCESS_VA_TYPE {
  ProcessVAImage = 0,   // ordinal: 0x0
  ProcessVASection = 1, // ordinal: 0x1
  ProcessVAPrivate = 2, // ordinal: 0x2
  ProcessVAMax = 3,     // ordinal: 0x3
} _PROCESS_VA_TYPE;

typedef enum _PS_PROTECTED_SIGNER {
  PsProtectedSignerNone = 0,         // ordinal: 0x0
  PsProtectedSignerAuthenticode = 1, // ordinal: 0x1
  PsProtectedSignerCodeGen = 2,      // ordinal: 0x2
  PsProtectedSignerAntimalware = 3,  // ordinal: 0x3
  PsProtectedSignerLsa = 4,          // ordinal: 0x4
  PsProtectedSignerWindows = 5,      // ordinal: 0x5
  PsProtectedSignerWinTcb = 6,       // ordinal: 0x6
  PsProtectedSignerMax = 7,          // ordinal: 0x7
} _PS_PROTECTED_SIGNER;

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

typedef enum _MI_AVAILABLE_PAGE_WAIT_TYPES {
  AvailablePagesWaitLow = 0,     // ordinal: 0x0
  AvailablePagesWaitHigh = 1,    // ordinal: 0x1
  AvailablePagesWaitMaximum = 2, // ordinal: 0x2
} _MI_AVAILABLE_PAGE_WAIT_TYPES;

typedef enum _PERFINFO_KERNELMEMORY_USAGE_TYPE {
  PerfInfoMemUsagePfnMetadata = 0, // ordinal: 0x0
  PerfInfoMemUsageMax = 1,         // ordinal: 0x1
} _PERFINFO_KERNELMEMORY_USAGE_TYPE;

typedef enum _KOBJECTS {
  EventNotificationObject = 0,      // ordinal: 0x0
  EventSynchronizationObject = 1,   // ordinal: 0x1
  MutantObject = 2,                 // ordinal: 0x2
  ProcessObject = 3,                // ordinal: 0x3
  QueueObject = 4,                  // ordinal: 0x4
  SemaphoreObject = 5,              // ordinal: 0x5
  ThreadObject = 6,                 // ordinal: 0x6
  GateObject = 7,                   // ordinal: 0x7
  TimerNotificationObject = 8,      // ordinal: 0x8
  TimerSynchronizationObject = 9,   // ordinal: 0x9
  Spare2Object = 10,                // ordinal: 0xa
  Spare3Object = 11,                // ordinal: 0xb
  Spare4Object = 12,                // ordinal: 0xc
  Spare5Object = 13,                // ordinal: 0xd
  Spare6Object = 14,                // ordinal: 0xe
  Spare7Object = 15,                // ordinal: 0xf
  Spare8Object = 16,                // ordinal: 0x10
  ProfileCallbackObject = 17,       // ordinal: 0x11
  ApcObject = 18,                   // ordinal: 0x12
  DpcObject = 19,                   // ordinal: 0x13
  DeviceQueueObject = 20,           // ordinal: 0x14
  PriQueueObject = 21,              // ordinal: 0x15
  InterruptObject = 22,             // ordinal: 0x16
  ProfileObject = 23,               // ordinal: 0x17
  Timer2NotificationObject = 24,    // ordinal: 0x18
  Timer2SynchronizationObject = 25, // ordinal: 0x19
  ThreadedDpcObject = 26,           // ordinal: 0x1a
  MaximumKernelObject = 27,         // ordinal: 0x1b
} _KOBJECTS;

typedef enum _PS_PROTECTED_TYPE {
  PsProtectedTypeNone = 0,           // ordinal: 0x0
  PsProtectedTypeProtectedLight = 1, // ordinal: 0x1
  PsProtectedTypeProtected = 2,      // ordinal: 0x2
  PsProtectedTypeMax = 3,            // ordinal: 0x3
} _PS_PROTECTED_TYPE;

typedef enum _INTERLOCKED_RESULT {
  ResultNegative = 1, // ordinal: 0x0
  ResultZero = 0,     // ordinal: 0x1
  ResultPositive = 2, // ordinal: 0x2
} _INTERLOCKED_RESULT;

typedef enum _KTHREAD_STATE {
  Initialized = 0,             // ordinal: 0x0
  Ready = 1,                   // ordinal: 0x1
  Running = 2,                 // ordinal: 0x2
  Standby = 3,                 // ordinal: 0x3
  Terminated = 4,              // ordinal: 0x4
  Waiting = 5,                 // ordinal: 0x5
  Transition = 6,              // ordinal: 0x6
  DeferredReady = 7,           // ordinal: 0x7
  GateWaitObsolete = 8,        // ordinal: 0x8
  WaitingForProcessInSwap = 9, // ordinal: 0x9
} _KTHREAD_STATE;

typedef enum _MM_POOL_PRIORITIES {
  MmHighPriority = 0,        // ordinal: 0x0
  MmNormalPriority = 1,      // ordinal: 0x1
  MmLowPriority = 2,         // ordinal: 0x2
  MmMaximumPoolPriority = 3, // ordinal: 0x3
} _MM_POOL_PRIORITIES;

typedef enum _KTHREAD_TAG {
  KThreadTagNone = 0,           // ordinal: 0x0
  KThreadTagMediaBuffering = 1, // ordinal: 0x1
  KThreadTagMax = 2,            // ordinal: 0x2
} _KTHREAD_TAG;

typedef enum _MEMORY_CACHING_TYPE_ORIG {
  MmFrameBufferCached = 2, // ordinal: 0x0
} _MEMORY_CACHING_TYPE_ORIG;

typedef enum _KWAIT_STATE {
  WaitInProgress = 0,        // ordinal: 0x0
  WaitCommitted = 1,         // ordinal: 0x1
  WaitAborted = 2,           // ordinal: 0x2
  WaitSuspendInProgress = 3, // ordinal: 0x3
  WaitSuspended = 4,         // ordinal: 0x4
  WaitResumeInProgress = 5,  // ordinal: 0x5
  WaitResumeAborted = 6,     // ordinal: 0x6
  WaitFirstSuspendState = 3, // ordinal: 0x7
  WaitLastSuspendState = 6,  // ordinal: 0x8
  MaximumWaitState = 7,      // ordinal: 0x9
} _KWAIT_STATE;

typedef enum _MM_POOL_TYPES {
  MmNonPagedPool = 0,     // ordinal: 0x0
  MmPagedPool = 1,        // ordinal: 0x1
  MmSessionPagedPool = 2, // ordinal: 0x2
  MmMaximumPoolType = 3,  // ordinal: 0x3
} _MM_POOL_TYPES;

typedef enum _ETW_STRING_TOKEN_TYPE {
  ETW_STRING_TOKEN_EXE = 0,        // ordinal: 0x0
  ETW_STRING_TOKEN_PACKAGE_ID = 1, // ordinal: 0x1
  ETW_STRING_TOKEN_PKG_APP_ID = 2, // ordinal: 0x2
  ETW_STRING_TOKEN_MAX_COUNT = 3,  // ordinal: 0x3
} _ETW_STRING_TOKEN_TYPE;

typedef enum _MI_MEMORY_HIGHLOW {
  MiMemoryHigh = 0,    // ordinal: 0x0
  MiMemoryLow = 1,     // ordinal: 0x1
  MiMemoryHighLow = 2, // ordinal: 0x2
} _MI_MEMORY_HIGHLOW;

typedef enum _KHETERO_CPU_POLICY {
  KHeteroCpuPolicyAll = 0,         // ordinal: 0x0
  KHeteroCpuPolicyLarge = 1,       // ordinal: 0x1
  KHeteroCpuPolicyLargeOrIdle = 2, // ordinal: 0x2
  KHeteroCpuPolicySmall = 3,       // ordinal: 0x3
  KHeteroCpuPolicySmallOrIdle = 4, // ordinal: 0x4
  KHeteroCpuPolicyDynamic = 5,     // ordinal: 0x5
  KHeteroCpuPolicyStaticMax = 5,   // ordinal: 0x6
  KHeteroCpuPolicyBiasedSmall = 6, // ordinal: 0x7
  KHeteroCpuPolicyBiasedLarge = 7, // ordinal: 0x8
  KHeteroCpuPolicyDefault = 8,     // ordinal: 0x9
  KHeteroCpuPolicyMax = 9,         // ordinal: 0xa
} _KHETERO_CPU_POLICY;

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

typedef enum _TlgBlob_t {
  _TlgBlobNone = 0,      // ordinal: 0x0
  _TlgBlobEnd = 1,       // ordinal: 0x1
  _TlgBlobProvider = 2,  // ordinal: 0x2
  _TlgBlobEvent3 = 3,    // ordinal: 0x3
  _TlgBlobProvider3 = 4, // ordinal: 0x4
  _TlgBlobEvent2 = 5,    // ordinal: 0x5
  _TlgBlobMax = 6,       // ordinal: 0x6
} _TlgBlob_t;

typedef enum _DEVPROP_OPERATOR {
  DEVPROP_OPERATOR_MODIFIER_NOT = 65536,               // ordinal: 0x0
  DEVPROP_OPERATOR_MODIFIER_IGNORE_CASE = 131072,      // ordinal: 0x1
  DEVPROP_OPERATOR_NONE = 0,                           // ordinal: 0x2
  DEVPROP_OPERATOR_EXISTS = 1,                         // ordinal: 0x3
  DEVPROP_OPERATOR_NOT_EXISTS = 65537,                 // ordinal: 0x4
  DEVPROP_OPERATOR_EQUALS = 2,                         // ordinal: 0x5
  DEVPROP_OPERATOR_NOT_EQUALS = 65538,                 // ordinal: 0x6
  DEVPROP_OPERATOR_GREATER_THAN = 3,                   // ordinal: 0x7
  DEVPROP_OPERATOR_LESS_THAN = 4,                      // ordinal: 0x8
  DEVPROP_OPERATOR_GREATER_THAN_EQUALS = 5,            // ordinal: 0x9
  DEVPROP_OPERATOR_LESS_THAN_EQUALS = 6,               // ordinal: 0xa
  DEVPROP_OPERATOR_EQUALS_IGNORE_CASE = 131074,        // ordinal: 0xb
  DEVPROP_OPERATOR_NOT_EQUALS_IGNORE_CASE = 196610,    // ordinal: 0xc
  DEVPROP_OPERATOR_BITWISE_AND = 7,                    // ordinal: 0xd
  DEVPROP_OPERATOR_BITWISE_OR = 8,                     // ordinal: 0xe
  DEVPROP_OPERATOR_BEGINS_WITH = 9,                    // ordinal: 0xf
  DEVPROP_OPERATOR_ENDS_WITH = 10,                     // ordinal: 0x10
  DEVPROP_OPERATOR_CONTAINS = 11,                      // ordinal: 0x11
  DEVPROP_OPERATOR_BEGINS_WITH_IGNORE_CASE = 131081,   // ordinal: 0x12
  DEVPROP_OPERATOR_ENDS_WITH_IGNORE_CASE = 131082,     // ordinal: 0x13
  DEVPROP_OPERATOR_CONTAINS_IGNORE_CASE = 131083,      // ordinal: 0x14
  DEVPROP_OPERATOR_LIST_CONTAINS = 4096,               // ordinal: 0x15
  DEVPROP_OPERATOR_LIST_ELEMENT_BEGINS_WITH = 8192,    // ordinal: 0x16
  DEVPROP_OPERATOR_LIST_ELEMENT_ENDS_WITH = 12288,     // ordinal: 0x17
  DEVPROP_OPERATOR_LIST_ELEMENT_CONTAINS = 16384,      // ordinal: 0x18
  DEVPROP_OPERATOR_LIST_CONTAINS_IGNORE_CASE = 135168, // ordinal: 0x19
  DEVPROP_OPERATOR_LIST_ELEMENT_BEGINS_WITH_IGNORE_CASE =
      139264,                                                   // ordinal: 0x1a
  DEVPROP_OPERATOR_LIST_ELEMENT_ENDS_WITH_IGNORE_CASE = 143360, // ordinal: 0x1b
  DEVPROP_OPERATOR_LIST_ELEMENT_CONTAINS_IGNORE_CASE = 147456,  // ordinal: 0x1c
  DEVPROP_OPERATOR_AND_OPEN = 1048576,                          // ordinal: 0x1d
  DEVPROP_OPERATOR_AND_CLOSE = 2097152,                         // ordinal: 0x1e
  DEVPROP_OPERATOR_OR_OPEN = 3145728,                           // ordinal: 0x1f
  DEVPROP_OPERATOR_OR_CLOSE = 4194304,                          // ordinal: 0x20
  DEVPROP_OPERATOR_NOT_OPEN = 5242880,                          // ordinal: 0x21
  DEVPROP_OPERATOR_NOT_CLOSE = 6291456,                         // ordinal: 0x22
  DEVPROP_OPERATOR_ARRAY_CONTAINS = 268435456,                  // ordinal: 0x23
  DEVPROP_OPERATOR_MASK_EVAL = 4095,                            // ordinal: 0x24
  DEVPROP_OPERATOR_MASK_LIST = 61440,                           // ordinal: 0x25
  DEVPROP_OPERATOR_MASK_MODIFIER = 983040,                      // ordinal: 0x26
  DEVPROP_OPERATOR_MASK_NOT_LOGICAL = -267386881,               // ordinal: 0x27
  DEVPROP_OPERATOR_MASK_LOGICAL = 267386880,                    // ordinal: 0x28
  DEVPROP_OPERATOR_MASK_ARRAY = -268435456,                     // ordinal: 0x29
} _DEVPROP_OPERATOR;

typedef enum _MI_KSTACK_TYPE {
  MiRegularKstack = 0,    // ordinal: 0x0
  MiShortLivedKstack = 1, // ordinal: 0x1
  MiMaximumKstack = 2,    // ordinal: 0x2
} _MI_KSTACK_TYPE;

typedef enum JOB_OBJECT_NET_RATE_CONTROL_FLAGS {
  JOB_OBJECT_NET_RATE_CONTROL_ENABLE = 1,        // ordinal: 0x0
  JOB_OBJECT_NET_RATE_CONTROL_MAX_BANDWIDTH = 2, // ordinal: 0x1
  JOB_OBJECT_NET_RATE_CONTROL_DSCP_TAG = 4,      // ordinal: 0x2
  JOB_OBJECT_NET_RATE_CONTROL_VALID_FLAGS = 7,   // ordinal: 0x3
} JOB_OBJECT_NET_RATE_CONTROL_FLAGS;

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

typedef enum _ConnectionResourceConsumerDesc {
  ConnectionResourceConsumerDescIsUndefined = 0, // ordinal: 0x0
  ConnectionResourceConsumerDescIsDevice = 1,    // ordinal: 0x1
  ConnectionResourceConsumerDescIsOpregion = 2,  // ordinal: 0x2
  ConnectionResourceConsumerDescMax = 3,         // ordinal: 0x3
} _ConnectionResourceConsumerDesc;

typedef enum _CM_SHARE_DISPOSITION {
  CmResourceShareUndetermined = 0,    // ordinal: 0x0
  CmResourceShareDeviceExclusive = 1, // ordinal: 0x1
  CmResourceShareDriverExclusive = 2, // ordinal: 0x2
  CmResourceShareShared = 3,          // ordinal: 0x3
} _CM_SHARE_DISPOSITION;

typedef enum _JOBOBJECTINFOCLASS {
  JobObjectBasicAccountingInformation = 1,         // ordinal: 0x0
  JobObjectBasicLimitInformation = 2,              // ordinal: 0x1
  JobObjectBasicProcessIdList = 3,                 // ordinal: 0x2
  JobObjectBasicUIRestrictions = 4,                // ordinal: 0x3
  JobObjectSecurityLimitInformation = 5,           // ordinal: 0x4
  JobObjectEndOfJobTimeInformation = 6,            // ordinal: 0x5
  JobObjectAssociateCompletionPortInformation = 7, // ordinal: 0x6
  JobObjectBasicAndIoAccountingInformation = 8,    // ordinal: 0x7
  JobObjectExtendedLimitInformation = 9,           // ordinal: 0x8
  JobObjectJobSetInformation = 10,                 // ordinal: 0x9
  JobObjectGroupInformation = 11,                  // ordinal: 0xa
  JobObjectNotificationLimitInformation = 12,      // ordinal: 0xb
  JobObjectLimitViolationInformation = 13,         // ordinal: 0xc
  JobObjectGroupInformationEx = 14,                // ordinal: 0xd
  JobObjectCpuRateControlInformation = 15,         // ordinal: 0xe
  JobObjectCompletionFilter = 16,                  // ordinal: 0xf
  JobObjectCompletionCounter = 17,                 // ordinal: 0x10
  JobObjectFreezeInformation = 18,                 // ordinal: 0x11
  JobObjectExtendedAccountingInformation = 19,     // ordinal: 0x12
  JobObjectWakeInformation = 20,                   // ordinal: 0x13
  JobObjectBackgroundInformation = 21,             // ordinal: 0x14
  JobObjectSchedulingRankBiasInformation = 22,     // ordinal: 0x15
  JobObjectTimerVirtualizationInformation = 23,    // ordinal: 0x16
  JobObjectCycleTimeNotification = 24,             // ordinal: 0x17
  JobObjectClearEvent = 25,                        // ordinal: 0x18
  JobObjectInterferenceInformation = 26,           // ordinal: 0x19
  JobObjectClearPeakJobMemoryUsed = 27,            // ordinal: 0x1a
  JobObjectMemoryUsageInformation = 28,            // ordinal: 0x1b
  JobObjectSharedCommit = 29,                      // ordinal: 0x1c
  JobObjectContainerId = 30,                       // ordinal: 0x1d
  JobObjectIoRateControlInformation = 31,          // ordinal: 0x1e
  JobObjectReserved1Information = 18,              // ordinal: 0x1f
  JobObjectReserved2Information = 19,              // ordinal: 0x20
  JobObjectReserved3Information = 20,              // ordinal: 0x21
  JobObjectReserved4Information = 21,              // ordinal: 0x22
  JobObjectReserved5Information = 22,              // ordinal: 0x23
  JobObjectReserved6Information = 23,              // ordinal: 0x24
  JobObjectReserved7Information = 24,              // ordinal: 0x25
  JobObjectReserved8Information = 25,              // ordinal: 0x26
  JobObjectReserved9Information = 26,              // ordinal: 0x27
  JobObjectReserved10Information = 27,             // ordinal: 0x28
  JobObjectReserved11Information = 28,             // ordinal: 0x29
  JobObjectReserved12Information = 29,             // ordinal: 0x2a
  JobObjectReserved13Information = 30,             // ordinal: 0x2b
  JobObjectReserved14Information = 31,             // ordinal: 0x2c
  JobObjectNetRateControlInformation = 32,         // ordinal: 0x2d
  JobObjectNotificationLimitInformation2 = 33,     // ordinal: 0x2e
  JobObjectLimitViolationInformation2 = 34,        // ordinal: 0x2f
  JobObjectCreateSilo = 35,                        // ordinal: 0x30
  JobObjectSiloBasicInformation = 36,              // ordinal: 0x31
  JobObjectSiloRootDirectory = 37,                 // ordinal: 0x32
  JobObjectServerSiloBasicInformation = 38,        // ordinal: 0x33
  JobObjectServerSiloServiceSessionId = 39,        // ordinal: 0x34
  JobObjectServerSiloInitialize = 40,              // ordinal: 0x35
  JobObjectServerSiloDefaultCompartmentId = 41,    // ordinal: 0x36
  MaxJobObjectInfoClass = 42,                      // ordinal: 0x37
} _JOBOBJECTINFOCLASS;

typedef enum _ETW_HEADER_TYPE {
  EtwHeaderTypeNative = 0, // ordinal: 0x0
  EtwHeaderTypeWow = 1,    // ordinal: 0x1
  EtwHeaderTypeMax = 2,    // ordinal: 0x2
} _ETW_HEADER_TYPE;

typedef enum _PS_RESOURCE_TYPE {
  PsResourceNonPagedPool = 0, // ordinal: 0x0
  PsResourcePagedPool = 1,    // ordinal: 0x1
  PsResourcePageFile = 2,     // ordinal: 0x2
  PsResourceWorkingSet = 3,   // ordinal: 0x3
  PsResourceMax = 4,          // ordinal: 0x4
} _PS_RESOURCE_TYPE;

typedef enum _USER_ACTIVITY_PRESENCE {
  PowerUserPresent = 0,    // ordinal: 0x0
  PowerUserNotPresent = 1, // ordinal: 0x1
  PowerUserInactive = 2,   // ordinal: 0x2
  PowerUserMaximum = 3,    // ordinal: 0x3
  PowerUserInvalid = 3,    // ordinal: 0x4
} _USER_ACTIVITY_PRESENCE;

typedef enum _PS_ATTRIBUTE_NUM {
  PsAttributeParentProcess = 0,      // ordinal: 0x0
  PsAttributeDebugObject = 1,        // ordinal: 0x1
  PsAttributeToken = 2,              // ordinal: 0x2
  PsAttributeClientId = 3,           // ordinal: 0x3
  PsAttributeTebAddress = 4,         // ordinal: 0x4
  PsAttributeImageName = 5,          // ordinal: 0x5
  PsAttributeImageInfo = 6,          // ordinal: 0x6
  PsAttributeMemoryReserve = 7,      // ordinal: 0x7
  PsAttributePriorityClass = 8,      // ordinal: 0x8
  PsAttributeErrorMode = 9,          // ordinal: 0x9
  PsAttributeStdHandleInfo = 10,     // ordinal: 0xa
  PsAttributeHandleList = 11,        // ordinal: 0xb
  PsAttributeGroupAffinity = 12,     // ordinal: 0xc
  PsAttributePreferredNode = 13,     // ordinal: 0xd
  PsAttributeIdealProcessor = 14,    // ordinal: 0xe
  PsAttributeUmsThread = 15,         // ordinal: 0xf
  PsAttributeMitigationOptions = 16, // ordinal: 0x10
  PsAttributeProtectionLevel = 17,   // ordinal: 0x11
  PsAttributeSecureProcess = 18,     // ordinal: 0x12
  PsAttributeJobList = 19,           // ordinal: 0x13
  PsAttributeMax = 20,               // ordinal: 0x14
} _PS_ATTRIBUTE_NUM;

typedef enum _MI_NODE_NONPAGED_POOL_BITMAP {
  NonPagedPoolLargePdeNx = 0, // ordinal: 0x0
  NonPagedPoolSmallPde = 1,   // ordinal: 0x1
  NonPagedPoolPerPage = 2,    // ordinal: 0x2
} _MI_NODE_NONPAGED_POOL_BITMAP;

typedef enum SLEEPSTUDY_SPM_SCENARIO_CS_EXIT {
  SpmScenarioStopReasonUnspecified = 16, // ordinal: 0x0
  SpmScenarioStopReasonCsExit = 17,      // ordinal: 0x1
  SpmScenarioStopReasonMax = 18,         // ordinal: 0x2
} SLEEPSTUDY_SPM_SCENARIO_CS_EXIT;

typedef enum _MI_WORKING_SET_TYPE {
  MiWorkingSetTypeSystemCache = 0, // ordinal: 0x0
  MiWorkingSetTypePagedPool = 1,   // ordinal: 0x1
  MiWorkingSetTypeSystemPtes = 2,  // ordinal: 0x2
  MiWorkingSetTypeMaximum = 3,     // ordinal: 0x3
} _MI_WORKING_SET_TYPE;

typedef enum _TRACE_INFORMATION_CLASS {
  TraceIdClass = 0,                    // ordinal: 0x0
  TraceHandleClass = 1,                // ordinal: 0x1
  TraceEnableFlagsClass = 2,           // ordinal: 0x2
  TraceEnableLevelClass = 3,           // ordinal: 0x3
  GlobalLoggerHandleClass = 4,         // ordinal: 0x4
  EventLoggerHandleClass = 5,          // ordinal: 0x5
  AllLoggerHandlesClass = 6,           // ordinal: 0x6
  TraceHandleByNameClass = 7,          // ordinal: 0x7
  LoggerEventsLostClass = 8,           // ordinal: 0x8
  TraceSessionSettingsClass = 9,       // ordinal: 0x9
  LoggerEventsLoggedClass = 10,        // ordinal: 0xa
  DiskIoNotifyRoutinesClass = 11,      // ordinal: 0xb
  TraceInformationClassReserved1 = 12, // ordinal: 0xc
  AllPossibleNotifyRoutinesClass = 12, // ordinal: 0xd
  FltIoNotifyRoutinesClass = 13,       // ordinal: 0xe
  TraceInformationClassReserved2 = 14, // ordinal: 0xf
  WdfNotifyRoutinesClass = 15,         // ordinal: 0x10
  MaxTraceInformationClass = 16,       // ordinal: 0x11
} _TRACE_INFORMATION_CLASS;

typedef enum _KTIMER2_TYPE {
  KTimer2TypeMin = 0,        // ordinal: 0x0
  KTimer2Plain = 0,          // ordinal: 0x1
  KTimer2IdleResilient = 1,  // ordinal: 0x2
  KTimer2HighResolution = 2, // ordinal: 0x3
  KTimer2NoWake = 3,         // ordinal: 0x4
  KTimer2NoWakeFinite = 4,   // ordinal: 0x5
  KTimer2TypeMax = 5,        // ordinal: 0x6
} _KTIMER2_TYPE;

typedef enum _TRANSFER_TYPE {
  ReadTransfer = 0,  // ordinal: 0x0
  WriteTransfer = 1, // ordinal: 0x1
  OtherTransfer = 2, // ordinal: 0x2
} _TRANSFER_TYPE;

typedef enum _LOCK_OPERATION {
  IoReadAccess = 0,   // ordinal: 0x0
  IoWriteAccess = 1,  // ordinal: 0x1
  IoModifyAccess = 2, // ordinal: 0x2
} _LOCK_OPERATION;

typedef enum _EX_POOL_PRIORITY {
  LowPoolPriority = 0,                        // ordinal: 0x0
  LowPoolPrioritySpecialPoolOverrun = 8,      // ordinal: 0x1
  LowPoolPrioritySpecialPoolUnderrun = 9,     // ordinal: 0x2
  NormalPoolPriority = 16,                    // ordinal: 0x3
  NormalPoolPrioritySpecialPoolOverrun = 24,  // ordinal: 0x4
  NormalPoolPrioritySpecialPoolUnderrun = 25, // ordinal: 0x5
  HighPoolPriority = 32,                      // ordinal: 0x6
  HighPoolPrioritySpecialPoolOverrun = 40,    // ordinal: 0x7
  HighPoolPrioritySpecialPoolUnderrun = 41,   // ordinal: 0x8
} _EX_POOL_PRIORITY;

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
  WrSpare0 = 14,          // ordinal: 0xe
  WrQueue = 15,           // ordinal: 0xf
  WrLpcReceive = 16,      // ordinal: 0x10
  WrLpcReply = 17,        // ordinal: 0x11
  WrVirtualMemory = 18,   // ordinal: 0x12
  WrPageOut = 19,         // ordinal: 0x13
  WrRendezvous = 20,      // ordinal: 0x14
  WrKeyedEvent = 21,      // ordinal: 0x15
  WrTerminated = 22,      // ordinal: 0x16
  WrProcessInSwap = 23,   // ordinal: 0x17
  WrCpuRateControl = 24,  // ordinal: 0x18
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
  WrAlertByThreadId = 37, // ordinal: 0x25
  WrDeferredPreempt = 38, // ordinal: 0x26
  MaximumWaitReason = 39, // ordinal: 0x27
} _KWAIT_REASON;

typedef enum _HEAP_FAILURE_TYPE {
  heap_failure_internal = 0,                       // ordinal: 0x0
  heap_failure_unknown = 1,                        // ordinal: 0x1
  heap_failure_generic = 2,                        // ordinal: 0x2
  heap_failure_entry_corruption = 3,               // ordinal: 0x3
  heap_failure_multiple_entries_corruption = 4,    // ordinal: 0x4
  heap_failure_virtual_block_corruption = 5,       // ordinal: 0x5
  heap_failure_buffer_overrun = 6,                 // ordinal: 0x6
  heap_failure_buffer_underrun = 7,                // ordinal: 0x7
  heap_failure_block_not_busy = 8,                 // ordinal: 0x8
  heap_failure_invalid_argument = 9,               // ordinal: 0x9
  heap_failure_usage_after_free = 10,              // ordinal: 0xa
  heap_failure_cross_heap_operation = 11,          // ordinal: 0xb
  heap_failure_freelists_corruption = 12,          // ordinal: 0xc
  heap_failure_listentry_corruption = 13,          // ordinal: 0xd
  heap_failure_lfh_bitmap_mismatch = 14,           // ordinal: 0xe
  heap_failure_segment_lfh_bitmap_corruption = 15, // ordinal: 0xf
  heap_failure_segment_lfh_double_free = 16,       // ordinal: 0x10
  heap_failure_vs_subsegment_corruption = 17,      // ordinal: 0x11
} _HEAP_FAILURE_TYPE;

typedef enum _POWER_REQUEST_TYPE_INTERNAL {
  PowerRequestDisplayRequiredInternal = 0,   // ordinal: 0x0
  PowerRequestSystemRequiredInternal = 1,    // ordinal: 0x1
  PowerRequestAwayModeRequiredInternal = 2,  // ordinal: 0x2
  PowerRequestExecutionRequiredInternal = 3, // ordinal: 0x3
  PowerRequestPerfBoostRequiredInternal = 4, // ordinal: 0x4
  PowerRequestInternalInvalid = 5,           // ordinal: 0x5
} _POWER_REQUEST_TYPE_INTERNAL;

typedef enum _POWER_REQUEST_TYPE {
  PowerRequestDisplayRequired = 0,   // ordinal: 0x0
  PowerRequestSystemRequired = 1,    // ordinal: 0x1
  PowerRequestAwayModeRequired = 2,  // ordinal: 0x2
  PowerRequestExecutionRequired = 3, // ordinal: 0x3
} _POWER_REQUEST_TYPE;

typedef enum _TOKEN_INFORMATION_CLASS {
  TokenUser = 1,                             // ordinal: 0x0
  TokenGroups = 2,                           // ordinal: 0x1
  TokenPrivileges = 3,                       // ordinal: 0x2
  TokenOwner = 4,                            // ordinal: 0x3
  TokenPrimaryGroup = 5,                     // ordinal: 0x4
  TokenDefaultDacl = 6,                      // ordinal: 0x5
  TokenSource = 7,                           // ordinal: 0x6
  TokenType = 8,                             // ordinal: 0x7
  TokenImpersonationLevel = 9,               // ordinal: 0x8
  TokenStatistics = 10,                      // ordinal: 0x9
  TokenRestrictedSids = 11,                  // ordinal: 0xa
  TokenSessionId = 12,                       // ordinal: 0xb
  TokenGroupsAndPrivileges = 13,             // ordinal: 0xc
  TokenSessionReference = 14,                // ordinal: 0xd
  TokenSandBoxInert = 15,                    // ordinal: 0xe
  TokenAuditPolicy = 16,                     // ordinal: 0xf
  TokenOrigin = 17,                          // ordinal: 0x10
  TokenElevationType = 18,                   // ordinal: 0x11
  TokenLinkedToken = 19,                     // ordinal: 0x12
  TokenElevation = 20,                       // ordinal: 0x13
  TokenHasRestrictions = 21,                 // ordinal: 0x14
  TokenAccessInformation = 22,               // ordinal: 0x15
  TokenVirtualizationAllowed = 23,           // ordinal: 0x16
  TokenVirtualizationEnabled = 24,           // ordinal: 0x17
  TokenIntegrityLevel = 25,                  // ordinal: 0x18
  TokenUIAccess = 26,                        // ordinal: 0x19
  TokenMandatoryPolicy = 27,                 // ordinal: 0x1a
  TokenLogonSid = 28,                        // ordinal: 0x1b
  TokenIsAppContainer = 29,                  // ordinal: 0x1c
  TokenCapabilities = 30,                    // ordinal: 0x1d
  TokenAppContainerSid = 31,                 // ordinal: 0x1e
  TokenAppContainerNumber = 32,              // ordinal: 0x1f
  TokenUserClaimAttributes = 33,             // ordinal: 0x20
  TokenDeviceClaimAttributes = 34,           // ordinal: 0x21
  TokenRestrictedUserClaimAttributes = 35,   // ordinal: 0x22
  TokenRestrictedDeviceClaimAttributes = 36, // ordinal: 0x23
  TokenDeviceGroups = 37,                    // ordinal: 0x24
  TokenRestrictedDeviceGroups = 38,          // ordinal: 0x25
  TokenSecurityAttributes = 39,              // ordinal: 0x26
  TokenIsRestricted = 40,                    // ordinal: 0x27
  TokenProcessTrustLevel = 41,               // ordinal: 0x28
  TokenPrivateNameSpace = 42,                // ordinal: 0x29
  MaxTokenInfoClass = 43,                    // ordinal: 0x2a
} _TOKEN_INFORMATION_CLASS;

typedef enum _CMP_FAILURE_INJECTION_POINT {
  CmpFailurePointPoolAllocation = 0,    // ordinal: 0x0
  CmpFailurePointViewMapping = 1,       // ordinal: 0x1
  CmpFailurePointViewPinning = 2,       // ordinal: 0x2
  CmpFailurePointResourceCharging = 3,  // ordinal: 0x3
  CmpFailurePointFileWrite = 4,         // ordinal: 0x4
  CmpFailurePointFileRead = 5,          // ordinal: 0x5
  CmpFailurePointCacheFlush = 6,        // ordinal: 0x6
  CmpFailurePointFlush = 7,             // ordinal: 0x7
  CmpFailurePointFlushAndPurge = 8,     // ordinal: 0x8
  CmpFailurePointForceLargeBin = 9,     // ordinal: 0x9
  CmpFailurePointDontFixAlignment = 10, // ordinal: 0xa
  CmpFailureInjectionPointCount = 11,   // ordinal: 0xb
} _CMP_FAILURE_INJECTION_POINT;

typedef enum _MI_PFN_CACHE_ATTRIBUTE {
  MiNonCached = 0,     // ordinal: 0x0
  MiCached = 1,        // ordinal: 0x1
  MiWriteCombined = 2, // ordinal: 0x2
  MiNotMapped = 3,     // ordinal: 0x3
} _MI_PFN_CACHE_ATTRIBUTE;

typedef enum _EVENT_INFO_CLASS {
  EventProviderBinaryTrackInfo = 0,      // ordinal: 0x0
  EventProviderSetEnableAllKeywords = 1, // ordinal: 0x1
  EventProviderSetTraits = 2,            // ordinal: 0x2
  EventProviderUseDescriptorType = 3,    // ordinal: 0x3
  MaxEventInfo = 4,                      // ordinal: 0x4
} _EVENT_INFO_CLASS;

typedef enum _DEVICE_WAKE_DEPTH {
  DeviceWakeDepthNotWakeable = 0, // ordinal: 0x0
  DeviceWakeDepthD0 = 1,          // ordinal: 0x1
  DeviceWakeDepthD1 = 2,          // ordinal: 0x2
  DeviceWakeDepthD2 = 3,          // ordinal: 0x3
  DeviceWakeDepthD3hot = 4,       // ordinal: 0x4
  DeviceWakeDepthD3cold = 5,      // ordinal: 0x5
  DeviceWakeDepthMaximum = 6,     // ordinal: 0x6
} _DEVICE_WAKE_DEPTH;

typedef enum _DEVICE_POWER_STATE {
  PowerDeviceUnspecified = 0, // ordinal: 0x0
  PowerDeviceD0 = 1,          // ordinal: 0x1
  PowerDeviceD1 = 2,          // ordinal: 0x2
  PowerDeviceD2 = 3,          // ordinal: 0x3
  PowerDeviceD3 = 4,          // ordinal: 0x4
  PowerDeviceMaximum = 5,     // ordinal: 0x5
} _DEVICE_POWER_STATE;

typedef enum _PF_FILE_ACCESS_TYPE {
  PfFileAccessTypeRead = 0,  // ordinal: 0x0
  PfFileAccessTypeWrite = 1, // ordinal: 0x1
  PfFileAccessTypeMax = 2,   // ordinal: 0x2
} _PF_FILE_ACCESS_TYPE;

typedef enum _MEMORY_CACHING_TYPE {
  MmNonCached = 0,              // ordinal: 0x0
  MmCached = 1,                 // ordinal: 0x1
  MmWriteCombined = 2,          // ordinal: 0x2
  MmHardwareCoherentCached = 3, // ordinal: 0x3
  MmNonCachedUnordered = 4,     // ordinal: 0x4
  MmUSWCCached = 5,             // ordinal: 0x5
  MmMaximumCacheType = 6,       // ordinal: 0x6
  MmNotMapped = -1,             // ordinal: 0x7
} _MEMORY_CACHING_TYPE;

typedef enum _EX_GEN_RANDOM_DOMAIN {
  ExGenRandomDomainKernel = 0,      // ordinal: 0x0
  ExGenRandomDomainFirst = 0,       // ordinal: 0x1
  ExGenRandomDomainUserVisible = 1, // ordinal: 0x2
  ExGenRandomDomainMax = 2,         // ordinal: 0x3
} _EX_GEN_RANDOM_DOMAIN;

typedef enum _PP_NPAGED_LOOKASIDE_NUMBER {
  LookasideSmallIrpList = 0,      // ordinal: 0x0
  LookasideMediumIrpList = 1,     // ordinal: 0x1
  LookasideLargeIrpList = 2,      // ordinal: 0x2
  LookasideMdlList = 3,           // ordinal: 0x3
  LookasideCreateInfoList = 4,    // ordinal: 0x4
  LookasideNameBufferList = 5,    // ordinal: 0x5
  LookasideTwilightList = 6,      // ordinal: 0x6
  LookasideCompletionList = 7,    // ordinal: 0x7
  LookasideScratchBufferList = 8, // ordinal: 0x8
  LookasideMaximumList = 9,       // ordinal: 0x9
} _PP_NPAGED_LOOKASIDE_NUMBER;

typedef enum _EVENT_TYPE {
  NotificationEvent = 0,    // ordinal: 0x0
  SynchronizationEvent = 1, // ordinal: 0x1
} _EVENT_TYPE;

typedef enum _MODE {
  KernelMode = 0,  // ordinal: 0x0
  UserMode = 1,    // ordinal: 0x1
  MaximumMode = 2, // ordinal: 0x2
} _MODE;

typedef enum SE_WS_APPX_SIGNATURE_ORIGIN {
  SE_WS_APPX_SIGNATURE_ORIGIN_NOT_VALIDATED = 0, // ordinal: 0x0
  SE_WS_APPX_SIGNATURE_ORIGIN_UNKNOWN = 1,       // ordinal: 0x1
  SE_WS_APPX_SIGNATURE_ORIGIN_APPSTORE = 2,      // ordinal: 0x2
  SE_WS_APPX_SIGNATURE_ORIGIN_WINDOWS = 3,       // ordinal: 0x3
  SE_WS_APPX_SIGNATURE_ORIGIN_ENTERPRISE = 4,    // ordinal: 0x4
} SE_WS_APPX_SIGNATURE_ORIGIN;

typedef enum _KERNEL_STACK_LIMITS {
  BugcheckStackLimits = 0, // ordinal: 0x0
  DPCStackLimits = 1,      // ordinal: 0x1
  ExpandedStackLimits = 2, // ordinal: 0x2
  NormalStackLimits = 3,   // ordinal: 0x3
  Win32kStackLimits = 4,   // ordinal: 0x4
  SwapBusyStackLimits = 5, // ordinal: 0x5
  IsrStackLimits = 6,      // ordinal: 0x6
  MaximumStackLimits = 7,  // ordinal: 0x7
} _KERNEL_STACK_LIMITS;

typedef enum _LDR_DDAG_STATE {
  LdrModulesMerged = -5,                // ordinal: 0x0
  LdrModulesInitError = -4,             // ordinal: 0x1
  LdrModulesSnapError = -3,             // ordinal: 0x2
  LdrModulesUnloaded = -2,              // ordinal: 0x3
  LdrModulesUnloading = -1,             // ordinal: 0x4
  LdrModulesPlaceHolder = 0,            // ordinal: 0x5
  LdrModulesMapping = 1,                // ordinal: 0x6
  LdrModulesMapped = 2,                 // ordinal: 0x7
  LdrModulesWaitingForDependencies = 3, // ordinal: 0x8
  LdrModulesSnapping = 4,               // ordinal: 0x9
  LdrModulesSnapped = 5,                // ordinal: 0xa
  LdrModulesCondensed = 6,              // ordinal: 0xb
  LdrModulesReadyToInit = 7,            // ordinal: 0xc
  LdrModulesInitializing = 8,           // ordinal: 0xd
  LdrModulesReadyToRun = 9,             // ordinal: 0xe
} _LDR_DDAG_STATE;

typedef enum _LDR_DLL_LOAD_REASON {
  LoadReasonStaticDependency = 0,           // ordinal: 0x0
  LoadReasonStaticForwarderDependency = 1,  // ordinal: 0x1
  LoadReasonDynamicForwarderDependency = 2, // ordinal: 0x2
  LoadReasonDelayloadDependency = 3,        // ordinal: 0x3
  LoadReasonDynamicLoad = 4,                // ordinal: 0x4
  LoadReasonAsImageLoad = 5,                // ordinal: 0x5
  LoadReasonAsDataLoad = 6,                 // ordinal: 0x6
  LoadReasonUnknown = -1,                   // ordinal: 0x7
} _LDR_DLL_LOAD_REASON;

typedef enum _ETW_NOTIFICATION_TYPE {
  EtwNotificationTypeNoReply = 1,        // ordinal: 0x0
  EtwNotificationTypeLegacyEnable = 2,   // ordinal: 0x1
  EtwNotificationTypeEnable = 3,         // ordinal: 0x2
  EtwNotificationTypePrivateLogger = 4,  // ordinal: 0x3
  EtwNotificationTypePerflib = 5,        // ordinal: 0x4
  EtwNotificationTypeAudio = 6,          // ordinal: 0x5
  EtwNotificationTypeSession = 7,        // ordinal: 0x6
  EtwNotificationTypeReserved = 8,       // ordinal: 0x7
  EtwNotificationTypeCredentialUI = 9,   // ordinal: 0x8
  EtwNotificationTypeInProcSession = 10, // ordinal: 0x9
  EtwNotificationTypeMax = 11,           // ordinal: 0xa
} _ETW_NOTIFICATION_TYPE;

typedef enum _PNP_DEVICE_ACTION_REQUEST {
  AssignResources = 0,                 // ordinal: 0x0
  ClearDeviceProblem = 1,              // ordinal: 0x1
  ClearProblem = 2,                    // ordinal: 0x2
  ClearEjectProblem = 3,               // ordinal: 0x3
  HaltDevice = 4,                      // ordinal: 0x4
  QueryPowerRelations = 5,             // ordinal: 0x5
  Rebalance = 6,                       // ordinal: 0x6
  ReenumerateBootDevices = 7,          // ordinal: 0x7
  ReenumerateDeviceOnly = 8,           // ordinal: 0x8
  ReenumerateDeviceTree = 9,           // ordinal: 0x9
  ReenumerateRootDevices = 10,         // ordinal: 0xa
  RequeryDeviceState = 11,             // ordinal: 0xb
  ResetDevice = 12,                    // ordinal: 0xc
  ResourceRequirementsChanged = 13,    // ordinal: 0xd
  RestartEnumeration = 14,             // ordinal: 0xe
  SetDeviceProblem = 15,               // ordinal: 0xf
  StartDevice = 16,                    // ordinal: 0x10
  StartSystemDevicesPass0 = 17,        // ordinal: 0x11
  StartSystemDevicesPass1 = 18,        // ordinal: 0x12
  NotifyTransportRelationsChange = 19, // ordinal: 0x13
  NotifyEjectionRelationsChange = 20,  // ordinal: 0x14
  ConfigureDevice = 21,                // ordinal: 0x15
  ConfigureDeviceClass = 22,           // ordinal: 0x16
  ConfigureDeviceExtensions = 23,      // ordinal: 0x17
  ConfigureDeviceReset = 24,           // ordinal: 0x18
} _PNP_DEVICE_ACTION_REQUEST;

typedef enum _VI_DEADLOCK_RESOURCE_TYPE {
  VfDeadlockUnknown = 0,               // ordinal: 0x0
  VfDeadlockMutex = 1,                 // ordinal: 0x1
  VfDeadlockMutexAbandoned = 2,        // ordinal: 0x2
  VfDeadlockFastMutex = 3,             // ordinal: 0x3
  VfDeadlockFastMutexUnsafe = 4,       // ordinal: 0x4
  VfDeadlockSpinLock = 5,              // ordinal: 0x5
  VfDeadlockInStackQueuedSpinLock = 6, // ordinal: 0x6
  VfDeadlockUnusedSpinLock = 7,        // ordinal: 0x7
  VfDeadlockEresource = 8,             // ordinal: 0x8
  VfDeadlockTypeMaximum = 9,           // ordinal: 0x9
} _VI_DEADLOCK_RESOURCE_TYPE;

typedef enum _IO_SESSION_STATE {
  IoSessionStateCreated = 1,              // ordinal: 0x0
  IoSessionStateInitialized = 2,          // ordinal: 0x1
  IoSessionStateConnected = 3,            // ordinal: 0x2
  IoSessionStateDisconnected = 4,         // ordinal: 0x3
  IoSessionStateDisconnectedLoggedOn = 5, // ordinal: 0x4
  IoSessionStateLoggedOn = 6,             // ordinal: 0x5
  IoSessionStateLoggedOff = 7,            // ordinal: 0x6
  IoSessionStateTerminated = 8,           // ordinal: 0x7
  IoSessionStateMax = 9,                  // ordinal: 0x8
} _IO_SESSION_STATE;

typedef enum _DUMP_EVENTS {
  DUMP_EVENT_NONE = 0,             // ordinal: 0x0
  DUMP_EVENT_HIBER_RESUME = 1,     // ordinal: 0x1
  DUMP_EVENT_HIBER_RESUME_END = 2, // ordinal: 0x2
} _DUMP_EVENTS;

typedef enum _POP_IO_STATUS {
  IoReady = 0,   // ordinal: 0x0
  IoPending = 1, // ordinal: 0x1
  IoDone = 2,    // ordinal: 0x2
} _POP_IO_STATUS;

typedef enum SYSTEM_POWER_CONDITION {
  PoAc = 0,               // ordinal: 0x0
  PoDc = 1,               // ordinal: 0x1
  PoHot = 2,              // ordinal: 0x2
  PoConditionMaximum = 3, // ordinal: 0x3
} SYSTEM_POWER_CONDITION;

typedef enum POWER_POLICY_DEVICE_TYPE {
  PolicyDeviceSystemButton = 0,     // ordinal: 0x0
  PolicyDeviceThermalZone = 1,      // ordinal: 0x1
  PolicyDeviceBattery = 2,          // ordinal: 0x2
  PolicyDeviceMemory = 3,           // ordinal: 0x3
  PolicyInitiatePowerActionAPI = 4, // ordinal: 0x4
  PolicySetPowerStateAPI = 5,       // ordinal: 0x5
  PolicyImmediateDozeS4 = 6,        // ordinal: 0x6
  PolicySystemIdle = 7,             // ordinal: 0x7
  PolicyDeviceWakeAlarm = 8,        // ordinal: 0x8
  PolicyDeviceFan = 9,              // ordinal: 0x9
  PolicyCsBatterySaver = 10,        // ordinal: 0xa
  PolicyDeviceMax = 11,             // ordinal: 0xb
} POWER_POLICY_DEVICE_TYPE;

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

typedef enum _REQUESTER_TYPE {
  KernelRequester = 0,            // ordinal: 0x0
  UserProcessRequester = 1,       // ordinal: 0x1
  UserSharedServiceRequester = 2, // ordinal: 0x2
} _REQUESTER_TYPE;

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
  LoaderZero = 24,               // ordinal: 0x18
  LoaderXIPRom = 25,             // ordinal: 0x19
  LoaderHALCachedMemory = 26,    // ordinal: 0x1a
  LoaderLargePageFiller = 27,    // ordinal: 0x1b
  LoaderErrorLogMemory = 28,     // ordinal: 0x1c
  LoaderVsmMemory = 29,          // ordinal: 0x1d
  LoaderFirmwareCode = 30,       // ordinal: 0x1e
  LoaderFirmwareData = 31,       // ordinal: 0x1f
  LoaderFirmwareReserved = 32,   // ordinal: 0x20
  LoaderMaximum = 33,            // ordinal: 0x21
} _TYPE_OF_MEMORY;

typedef enum _DMA_SPEED {
  Compatible = 0,      // ordinal: 0x0
  TypeA = 1,           // ordinal: 0x1
  TypeB = 2,           // ordinal: 0x2
  TypeC = 3,           // ordinal: 0x3
  TypeF = 4,           // ordinal: 0x4
  MaximumDmaSpeed = 5, // ordinal: 0x5
} _DMA_SPEED;

typedef enum _DMA_WIDTH {
  Width8Bits = 0,      // ordinal: 0x0
  Width16Bits = 1,     // ordinal: 0x1
  Width32Bits = 2,     // ordinal: 0x2
  Width64Bits = 3,     // ordinal: 0x3
  WidthNoWrap = 4,     // ordinal: 0x4
  MaximumDmaWidth = 5, // ordinal: 0x5
} _DMA_WIDTH;

typedef enum _RTL_GENERIC_COMPARE_RESULTS {
  GenericLessThan = 0,    // ordinal: 0x0
  GenericGreaterThan = 1, // ordinal: 0x1
  GenericEqual = 2,       // ordinal: 0x2
} _RTL_GENERIC_COMPARE_RESULTS;

typedef enum _CM_DIRTY_VECTOR_OPERATION {
  DirtyVectorModified = 0,   // ordinal: 0x0
  DirtyDataCaptureStart = 1, // ordinal: 0x1
  DirtyDataCaptureEnd = 2,   // ordinal: 0x2
} _CM_DIRTY_VECTOR_OPERATION;

typedef enum __anon_1900 {
  KTMOH_CommitTransaction_Result = 1,   // ordinal: 0x0
  KTMOH_RollbackTransaction_Result = 2, // ordinal: 0x1
} __anon_1900;

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
  KTransactionPrePrepared = 11,  // ordinal: 0xb
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
  KEnlistmentAborting = 269,              // ordinal: 0xe
  KEnlistmentReadOnly = 270,              // ordinal: 0xf
  KEnlistmentOutcomeUnavailable = 271,    // ordinal: 0x10
  KEnlistmentOffline = 272,               // ordinal: 0x11
  KEnlistmentPrePrepared = 273,           // ordinal: 0x12
  KEnlistmentInitialized = 274,           // ordinal: 0x13
} _KENLISTMENT_STATE;

typedef enum HAL_APIC_DESTINATION_MODE {
  ApicDestinationModePhysical = 1,         // ordinal: 0x0
  ApicDestinationModeLogicalFlat = 2,      // ordinal: 0x1
  ApicDestinationModeLogicalClustered = 3, // ordinal: 0x2
  ApicDestinationModeUnknown = 4,          // ordinal: 0x3
} HAL_APIC_DESTINATION_MODE;

// 0x4 bytes (sizeof)
typedef struct __anon_1796 {
  enum HAL_APIC_DESTINATION_MODE DestinationMode; // offset: 0x0 ordinal: 0x0
} __anon_1796;

typedef enum INTERRUPT_CONNECTION_TYPE {
  InterruptTypeControllerInput = 0, // ordinal: 0x0
  InterruptTypeXapicMessage = 1,    // ordinal: 0x1
  InterruptTypeHypertransport = 2,  // ordinal: 0x2
  InterruptTypeMessageRequest = 3,  // ordinal: 0x3
} INTERRUPT_CONNECTION_TYPE;

typedef enum _WHEA_ERROR_SOURCE_STATE {
  WheaErrSrcStateStopped = 1, // ordinal: 0x0
  WheaErrSrcStateStarted = 2, // ordinal: 0x1
} _WHEA_ERROR_SOURCE_STATE;

typedef enum _KPROFILE_SOURCE {
  ProfileTime = 0,                  // ordinal: 0x0
  ProfileAlignmentFixup = 1,        // ordinal: 0x1
  ProfileTotalIssues = 2,           // ordinal: 0x2
  ProfilePipelineDry = 3,           // ordinal: 0x3
  ProfileLoadInstructions = 4,      // ordinal: 0x4
  ProfilePipelineFrozen = 5,        // ordinal: 0x5
  ProfileBranchInstructions = 6,    // ordinal: 0x6
  ProfileTotalNonissues = 7,        // ordinal: 0x7
  ProfileDcacheMisses = 8,          // ordinal: 0x8
  ProfileIcacheMisses = 9,          // ordinal: 0x9
  ProfileCacheMisses = 10,          // ordinal: 0xa
  ProfileBranchMispredictions = 11, // ordinal: 0xb
  ProfileStoreInstructions = 12,    // ordinal: 0xc
  ProfileFpInstructions = 13,       // ordinal: 0xd
  ProfileIntegerInstructions = 14,  // ordinal: 0xe
  Profile2Issue = 15,               // ordinal: 0xf
  Profile3Issue = 16,               // ordinal: 0x10
  Profile4Issue = 17,               // ordinal: 0x11
  ProfileSpecialInstructions = 18,  // ordinal: 0x12
  ProfileTotalCycles = 19,          // ordinal: 0x13
  ProfileIcacheIssues = 20,         // ordinal: 0x14
  ProfileDcacheAccesses = 21,       // ordinal: 0x15
  ProfileMemoryBarrierCycles = 22,  // ordinal: 0x16
  ProfileLoadLinkedIssues = 23,     // ordinal: 0x17
  ProfileMaximum = 24,              // ordinal: 0x18
} _KPROFILE_SOURCE;

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

typedef enum _CREATE_FILE_TYPE {
  CreateFileTypeNone = 0,      // ordinal: 0x0
  CreateFileTypeNamedPipe = 1, // ordinal: 0x1
  CreateFileTypeMailslot = 2,  // ordinal: 0x2
} _CREATE_FILE_TYPE;

typedef enum _IOP_PRIORITY_HINT {
  IopIoPriorityNotSet = 0,   // ordinal: 0x0
  IopIoPriorityVeryLow = 1,  // ordinal: 0x1
  IopIoPriorityLow = 2,      // ordinal: 0x2
  IopIoPriorityNormal = 3,   // ordinal: 0x3
  IopIoPriorityHigh = 4,     // ordinal: 0x4
  IopIoPriorityCritical = 5, // ordinal: 0x5
  MaxIopIoPriorityTypes = 6, // ordinal: 0x6
} _IOP_PRIORITY_HINT;

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

typedef enum _BLOB_ID {
  BLOB_TYPE_UNKNOWN = 0,          // ordinal: 0x0
  BLOB_TYPE_CONNECTION_INFO = 1,  // ordinal: 0x1
  BLOB_TYPE_MESSAGE = 2,          // ordinal: 0x2
  BLOB_TYPE_SECURITY_CONTEXT = 3, // ordinal: 0x3
  BLOB_TYPE_SECTION = 4,          // ordinal: 0x4
  BLOB_TYPE_REGION = 5,           // ordinal: 0x5
  BLOB_TYPE_VIEW = 6,             // ordinal: 0x6
  BLOB_TYPE_RESERVE = 7,          // ordinal: 0x7
  BLOB_TYPE_DIRECT_TRANSFER = 8,  // ordinal: 0x8
  BLOB_TYPE_HANDLE_DATA = 9,      // ordinal: 0x9
  BLOB_TYPE_MAX_ID = 10,          // ordinal: 0xa
} _BLOB_ID;

typedef enum _GPIO_PIN_IORESTRICTION_TYPE {
  IoRestrictionNone = 0,            // ordinal: 0x0
  IoRestrictionInputOnly = 1,       // ordinal: 0x1
  IoRestrictionOutputOnly = 2,      // ordinal: 0x2
  IoRestrictionNoneAndPreserve = 3, // ordinal: 0x3
} _GPIO_PIN_IORESTRICTION_TYPE;

typedef enum _GPIO_PIN_CONFIG_TYPE {
  PullDefault = 0, // ordinal: 0x0
  PullUp = 1,      // ordinal: 0x1
  PullDown = 2,    // ordinal: 0x2
  PullNone = 3,    // ordinal: 0x3
} _GPIO_PIN_CONFIG_TYPE;

typedef enum _KINTERRUPT_POLARITY {
  InterruptPolarityUnknown = 0,       // ordinal: 0x0
  InterruptActiveHigh = 1,            // ordinal: 0x1
  InterruptRisingEdge = 1,            // ordinal: 0x2
  InterruptActiveLow = 2,             // ordinal: 0x3
  InterruptFallingEdge = 2,           // ordinal: 0x4
  InterruptActiveBoth = 3,            // ordinal: 0x5
  InterruptActiveBothTriggerLow = 3,  // ordinal: 0x6
  InterruptActiveBothTriggerHigh = 4, // ordinal: 0x7
} _KINTERRUPT_POLARITY;

typedef enum _KINTERRUPT_MODE {
  LevelSensitive = 0, // ordinal: 0x0
  Latched = 1,        // ordinal: 0x1
} _KINTERRUPT_MODE;

typedef enum _PEP_ACPI_RESOURCE_TYPE {
  PepAcpiMemory = 0,         // ordinal: 0x0
  PepAcpiIoPort = 1,         // ordinal: 0x1
  PepAcpiInterrupt = 2,      // ordinal: 0x2
  PepAcpiGpioIo = 3,         // ordinal: 0x3
  PepAcpiGpioInt = 4,        // ordinal: 0x4
  PepAcpiSpbI2c = 5,         // ordinal: 0x5
  PepAcpiSpbSpi = 6,         // ordinal: 0x6
  PepAcpiSpbUart = 7,        // ordinal: 0x7
  PepAcpiExtendedMemory = 8, // ordinal: 0x8
  PepAcpiExtendedIo = 9,     // ordinal: 0x9
} _PEP_ACPI_RESOURCE_TYPE;

typedef enum _ARBITER_REQUEST_SOURCE {
  ArbiterRequestUndefined = -1,     // ordinal: 0x0
  ArbiterRequestLegacyReported = 0, // ordinal: 0x1
  ArbiterRequestHalReported = 1,    // ordinal: 0x2
  ArbiterRequestLegacyAssigned = 2, // ordinal: 0x3
  ArbiterRequestPnpDetected = 3,    // ordinal: 0x4
  ArbiterRequestPnpEnumerated = 4,  // ordinal: 0x5
} _ARBITER_REQUEST_SOURCE;

typedef enum _PO_FX_PERF_STATE_TYPE {
  PoFxPerfStateTypeDiscrete = 0, // ordinal: 0x0
  PoFxPerfStateTypeRange = 1,    // ordinal: 0x1
  PoFxPerfStateTypeMaximum = 2,  // ordinal: 0x2
} _PO_FX_PERF_STATE_TYPE;

typedef enum _PO_FX_PERF_STATE_UNIT {
  PoFxPerfStateUnitOther = 0,     // ordinal: 0x0
  PoFxPerfStateUnitFrequency = 1, // ordinal: 0x1
  PoFxPerfStateUnitBandwidth = 2, // ordinal: 0x2
  PoFxPerfStateUnitMaximum = 3,   // ordinal: 0x3
} _PO_FX_PERF_STATE_UNIT;

typedef enum PROFILE_DEPARTURE_STYLE {
  PDS_UPDATE_DEFAULT = 1,      // ordinal: 0x0
  PDS_UPDATE_ON_REMOVE = 2,    // ordinal: 0x1
  PDS_UPDATE_ON_INTERFACE = 3, // ordinal: 0x2
  PDS_UPDATE_ON_EJECT = 4,     // ordinal: 0x3
} PROFILE_DEPARTURE_STYLE;

typedef enum _PLUGPLAY_EVENT_CATEGORY {
  HardwareProfileChangeEvent = 0,  // ordinal: 0x0
  TargetDeviceChangeEvent = 1,     // ordinal: 0x1
  DeviceClassChangeEvent = 2,      // ordinal: 0x2
  CustomDeviceEvent = 3,           // ordinal: 0x3
  DeviceInstallEvent = 4,          // ordinal: 0x4
  DeviceArrivalEvent = 5,          // ordinal: 0x5
  VetoEvent = 6,                   // ordinal: 0x6
  BlockedDriverEvent = 7,          // ordinal: 0x7
  InvalidIDEvent = 8,              // ordinal: 0x8
  DevicePropertyChangeEvent = 9,   // ordinal: 0x9
  DeviceInstanceRemovalEvent = 10, // ordinal: 0xa
  DeviceInstanceStartedEvent = 11, // ordinal: 0xb
  MaxPlugEventCategory = 12,       // ordinal: 0xc
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

// 0x4 bytes (sizeof)
typedef struct PEPHANDLE__ {
  LONG unused; // offset: 0x0 ordinal: 0x0
} PEPHANDLE__;

// 0x10 bytes (sizeof)
typedef struct _PEP_CRASHDUMP_INFORMATION {
  struct PEPHANDLE__ *DeviceHandle; // offset: 0x0 ordinal: 0x0
  VOID *DeviceContext;              // offset: 0x8 ordinal: 0x1
} _PEP_CRASHDUMP_INFORMATION;

typedef enum _PNP_DEVICE_DELETE_TYPE {
  QueryRemoveDevice = 0,           // ordinal: 0x0
  CancelRemoveDevice = 1,          // ordinal: 0x1
  RemoveDevice = 2,                // ordinal: 0x2
  SurpriseRemoveDevice = 3,        // ordinal: 0x3
  EjectDevice = 4,                 // ordinal: 0x4
  RemoveFailedDevice = 5,          // ordinal: 0x5
  RemoveUnstartedFailedDevice = 6, // ordinal: 0x6
  MaxDeviceDeleteType = 7,         // ordinal: 0x7
} _PNP_DEVICE_DELETE_TYPE;

typedef enum IRPLOCK {
  IRPLOCK_CANCELABLE = 0,      // ordinal: 0x0
  IRPLOCK_CANCEL_STARTED = 1,  // ordinal: 0x1
  IRPLOCK_CANCEL_COMPLETE = 2, // ordinal: 0x2
  IRPLOCK_COMPLETED = 3,       // ordinal: 0x3
} IRPLOCK;

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

typedef enum _PCW_CALLBACK_TYPE {
  PcwCallbackAddCounter = 0,         // ordinal: 0x0
  PcwCallbackRemoveCounter = 1,      // ordinal: 0x1
  PcwCallbackEnumerateInstances = 2, // ordinal: 0x2
  PcwCallbackCollectData = 3,        // ordinal: 0x3
} _PCW_CALLBACK_TYPE;

typedef enum _CM_LOAD_FAILURE_TYPE {
  _None = 0,                               // ordinal: 0x0
  _CmInitializeHive = 1,                   // ordinal: 0x1
  _HvInitializeHive = 2,                   // ordinal: 0x2
  _HvpBuildMap = 3,                        // ordinal: 0x3
  _HvpBuildMapForLoaderHive = 4,           // ordinal: 0x4
  _HvpInitMap = 5,                         // ordinal: 0x5
  _HvLoadHive = 6,                         // ordinal: 0x6
  _HvpMapHiveImage = 7,                    // ordinal: 0x7
  _HvpRecoverData = 8,                     // ordinal: 0x8
  _CmpValidateHiveSecurityDescriptors = 9, // ordinal: 0x9
  _HvpEnlistBinInMap = 10,                 // ordinal: 0xa
  _CmCheckRegistry = 11,                   // ordinal: 0xb
  _CmRegistryIO = 12,                      // ordinal: 0xc
  _CmCheckRegistry2 = 13,                  // ordinal: 0xd
  _CmpCheckKey = 14,                       // ordinal: 0xe
  _CmpCheckValueList = 15,                 // ordinal: 0xf
  _HvCheckHive = 16,                       // ordinal: 0x10
  _HvCheckBin = 17,                        // ordinal: 0x11
  _HvpGetLogEntryDirtyVector = 18,         // ordinal: 0x12
  _HvpReadLogEntryHeader = 19,             // ordinal: 0x13
  _HvpReadLogEntry = 20,                   // ordinal: 0x14
  _CmpMountPreloadedHives = 21,            // ordinal: 0x15
  _CmpLoadHiveThread = 22,                 // ordinal: 0x16
} _CM_LOAD_FAILURE_TYPE;

typedef enum _MI_SYSTEM_VA_TYPE {
  MiVaUnused = 0,               // ordinal: 0x0
  MiVaSessionSpace = 1,         // ordinal: 0x1
  MiVaProcessSpace = 2,         // ordinal: 0x2
  MiVaBootLoaded = 3,           // ordinal: 0x3
  MiVaPfnDatabase = 4,          // ordinal: 0x4
  MiVaNonPagedPool = 5,         // ordinal: 0x5
  MiVaPagedPool = 6,            // ordinal: 0x6
  MiVaSpecialPoolPaged = 7,     // ordinal: 0x7
  MiVaSystemCache = 8,          // ordinal: 0x8
  MiVaSystemPtes = 9,           // ordinal: 0x9
  MiVaHal = 10,                 // ordinal: 0xa
  MiVaSessionGlobalSpace = 11,  // ordinal: 0xb
  MiVaDriverImages = 12,        // ordinal: 0xc
  MiVaSpecialPoolNonPaged = 13, // ordinal: 0xd
  MiVaMaximumType = 14,         // ordinal: 0xe
  MiVaSystemPtesLarge = 15,     // ordinal: 0xf
} _MI_SYSTEM_VA_TYPE;

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

typedef enum _WHEA_ERROR_PACKET_DATA_FORMAT {
  WheaDataFormatIPFSalRecord = 0, // ordinal: 0x0
  WheaDataFormatXPFMCA = 1,       // ordinal: 0x1
  WheaDataFormatMemory = 2,       // ordinal: 0x2
  WheaDataFormatPCIExpress = 3,   // ordinal: 0x3
  WheaDataFormatNMIPort = 4,      // ordinal: 0x4
  WheaDataFormatPCIXBus = 5,      // ordinal: 0x5
  WheaDataFormatPCIXDevice = 6,   // ordinal: 0x6
  WheaDataFormatGeneric = 7,      // ordinal: 0x7
  WheaDataFormatMax = 8,          // ordinal: 0x8
} _WHEA_ERROR_PACKET_DATA_FORMAT;

typedef enum _WHEA_ERROR_SOURCE_TYPE {
  WheaErrSrcTypeMCE = 0,        // ordinal: 0x0
  WheaErrSrcTypeCMC = 1,        // ordinal: 0x1
  WheaErrSrcTypeCPE = 2,        // ordinal: 0x2
  WheaErrSrcTypeNMI = 3,        // ordinal: 0x3
  WheaErrSrcTypePCIe = 4,       // ordinal: 0x4
  WheaErrSrcTypeGeneric = 5,    // ordinal: 0x5
  WheaErrSrcTypeINIT = 6,       // ordinal: 0x6
  WheaErrSrcTypeBOOT = 7,       // ordinal: 0x7
  WheaErrSrcTypeSCIGeneric = 8, // ordinal: 0x8
  WheaErrSrcTypeIPFMCA = 9,     // ordinal: 0x9
  WheaErrSrcTypeIPFCMC = 10,    // ordinal: 0xa
  WheaErrSrcTypeIPFCPE = 11,    // ordinal: 0xb
  WheaErrSrcTypeMax = 12,       // ordinal: 0xc
} _WHEA_ERROR_SOURCE_TYPE;

typedef enum _WHEA_ERROR_SEVERITY {
  WheaErrSevRecoverable = 0,   // ordinal: 0x0
  WheaErrSevFatal = 1,         // ordinal: 0x1
  WheaErrSevCorrected = 2,     // ordinal: 0x2
  WheaErrSevInformational = 3, // ordinal: 0x3
} _WHEA_ERROR_SEVERITY;

typedef enum _WHEA_ERROR_TYPE {
  WheaErrTypeProcessor = 0,  // ordinal: 0x0
  WheaErrTypeMemory = 1,     // ordinal: 0x1
  WheaErrTypePCIExpress = 2, // ordinal: 0x2
  WheaErrTypeNMI = 3,        // ordinal: 0x3
  WheaErrTypePCIXBus = 4,    // ordinal: 0x4
  WheaErrTypePCIXDevice = 5, // ordinal: 0x5
  WheaErrTypeGeneric = 6,    // ordinal: 0x6
} _WHEA_ERROR_TYPE;

typedef enum _MM_PAGE_ACCESS_TYPE {
  MmPteAccessType = 0,         // ordinal: 0x0
  MmCcReadAheadType = 1,       // ordinal: 0x1
  MmPfnRepurposeType = 2,      // ordinal: 0x2
  MmMaximumPageAccessType = 3, // ordinal: 0x3
} _MM_PAGE_ACCESS_TYPE;

typedef enum _IO_PRIORITY_HINT {
  IoPriorityVeryLow = 0,  // ordinal: 0x0
  IoPriorityLow = 1,      // ordinal: 0x1
  IoPriorityNormal = 2,   // ordinal: 0x2
  IoPriorityHigh = 3,     // ordinal: 0x3
  IoPriorityCritical = 4, // ordinal: 0x4
  MaxIoPriorityTypes = 5, // ordinal: 0x5
} _IO_PRIORITY_HINT;

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

typedef enum _IRQ_PRIORITY {
  IrqPriorityUndefined = 0, // ordinal: 0x0
  IrqPriorityLow = 1,       // ordinal: 0x1
  IrqPriorityNormal = 2,    // ordinal: 0x2
  IrqPriorityHigh = 3,      // ordinal: 0x3
} _IRQ_PRIORITY;

typedef enum _SECURITY_IMPERSONATION_LEVEL {
  SecurityAnonymous = 0,      // ordinal: 0x0
  SecurityIdentification = 1, // ordinal: 0x1
  SecurityImpersonation = 2,  // ordinal: 0x2
  SecurityDelegation = 3,     // ordinal: 0x3
} _SECURITY_IMPERSONATION_LEVEL;

// 0x20 bytes (sizeof)
typedef struct _SECURITY_SUBJECT_CONTEXT {
  VOID *ClientToken; // offset: 0x0 ordinal: 0x0
  enum _SECURITY_IMPERSONATION_LEVEL
      ImpersonationLevel; // offset: 0x8 ordinal: 0x1
  VOID *PrimaryToken;     // offset: 0x10 ordinal: 0x2
  VOID *ProcessAuditId;   // offset: 0x18 ordinal: 0x3
} _SECURITY_SUBJECT_CONTEXT;

typedef enum _FUNCTION_TABLE_TYPE {
  RF_SORTED = 0,         // ordinal: 0x0
  RF_UNSORTED = 1,       // ordinal: 0x1
  RF_CALLBACK = 2,       // ordinal: 0x2
  RF_KERNEL_DYNAMIC = 3, // ordinal: 0x3
} _FUNCTION_TABLE_TYPE;

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
  Vmcs = 16,                   // ordinal: 0x11
  ACPIBus = 17,                // ordinal: 0x12
  MaximumInterfaceType = 18,   // ordinal: 0x13
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
  PowerActionDisplayOff = 8,    // ordinal: 0x8
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
typedef struct __anon_666 {
  enum _SYSTEM_POWER_STATE PowerState; // offset: 0x0 ordinal: 0x0
} __anon_666;

typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE {
  DeviceUsageTypeUndefined = 0,   // ordinal: 0x0
  DeviceUsageTypePaging = 1,      // ordinal: 0x1
  DeviceUsageTypeHibernation = 2, // ordinal: 0x2
  DeviceUsageTypeDumpFile = 3,    // ordinal: 0x3
  DeviceUsageTypeBoot = 4,        // ordinal: 0x4
  DeviceUsageTypePostDisplay = 5, // ordinal: 0x5
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
  BusQueryContainerID = 5,        // ordinal: 0x5
} BUS_QUERY_ID_TYPE;

// 0x4 bytes (sizeof)
typedef struct __anon_663 {
  enum BUS_QUERY_ID_TYPE IdType; // offset: 0x0 ordinal: 0x0
} __anon_663;

typedef enum _DEVICE_RELATION_TYPE {
  BusRelations = 0,         // ordinal: 0x0
  EjectionRelations = 1,    // ordinal: 0x1
  PowerRelations = 2,       // ordinal: 0x2
  RemovalRelations = 3,     // ordinal: 0x3
  TargetDeviceRelation = 4, // ordinal: 0x4
  SingleBusRelations = 5,   // ordinal: 0x5
  TransportRelations = 6,   // ordinal: 0x6
} _DEVICE_RELATION_TYPE;

// 0x4 bytes (sizeof)
typedef struct __anon_657 {
  enum _DEVICE_RELATION_TYPE Type; // offset: 0x0 ordinal: 0x0
} __anon_657;

typedef enum _FSINFOCLASS {
  FileFsVolumeInformation = 1,        // ordinal: 0x0
  FileFsLabelInformation = 2,         // ordinal: 0x1
  FileFsSizeInformation = 3,          // ordinal: 0x2
  FileFsDeviceInformation = 4,        // ordinal: 0x3
  FileFsAttributeInformation = 5,     // ordinal: 0x4
  FileFsControlInformation = 6,       // ordinal: 0x5
  FileFsFullSizeInformation = 7,      // ordinal: 0x6
  FileFsObjectIdInformation = 8,      // ordinal: 0x7
  FileFsDriverPathInformation = 9,    // ordinal: 0x8
  FileFsVolumeFlagsInformation = 10,  // ordinal: 0x9
  FileFsSectorSizeInformation = 11,   // ordinal: 0xa
  FileFsDataCopyInformation = 12,     // ordinal: 0xb
  FileFsMetadataSizeInformation = 13, // ordinal: 0xc
  FileFsMaximumInformation = 14,      // ordinal: 0xd
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
  FileIdGlobalTxDirectoryInformation = 50,      // ordinal: 0x31
  FileIsRemoteDeviceInformation = 51,           // ordinal: 0x32
  FileUnusedInformation = 52,                   // ordinal: 0x33
  FileNumaNodeInformation = 53,                 // ordinal: 0x34
  FileStandardLinkInformation = 54,             // ordinal: 0x35
  FileRemoteProtocolInformation = 55,           // ordinal: 0x36
  FileRenameInformationBypassAccessCheck = 56,  // ordinal: 0x37
  FileLinkInformationBypassAccessCheck = 57,    // ordinal: 0x38
  FileVolumeNameInformation = 58,               // ordinal: 0x39
  FileIdInformation = 59,                       // ordinal: 0x3a
  FileIdExtdDirectoryInformation = 60,          // ordinal: 0x3b
  FileReplaceCompletionInformation = 61,        // ordinal: 0x3c
  FileHardLinkFullIdInformation = 62,           // ordinal: 0x3d
  FileIdExtdBothDirectoryInformation = 63,      // ordinal: 0x3e
  FileMaximumInformation = 64,                  // ordinal: 0x3f
} _FILE_INFORMATION_CLASS;

// 0x4 bytes (sizeof)
typedef union _POWER_STATE {
  enum _SYSTEM_POWER_STATE SystemState; // offset: 0x0 ordinal: 0x0
  enum _DEVICE_POWER_STATE DeviceState; // offset: 0x0 ordinal: 0x1
} _POWER_STATE;

typedef enum _POP_DEVICE_IDLE_TYPE {
  DeviceIdleNormal = 0, // ordinal: 0x0
  DeviceIdleDisk = 1,   // ordinal: 0x1
} _POP_DEVICE_IDLE_TYPE;

typedef enum _IO_ALLOCATION_ACTION {
  KeepObject = 1,                    // ordinal: 0x0
  DeallocateObject = 2,              // ordinal: 0x1
  DeallocateObjectKeepRegisters = 3, // ordinal: 0x2
} _IO_ALLOCATION_ACTION;

typedef enum _EXQUEUEINDEX {
  ExPoolUntrusted = 0, // ordinal: 0x0
  ExPoolTrusted = 1,   // ordinal: 0x1
  ExPoolMax = 8,       // ordinal: 0x2
} _EXQUEUEINDEX;

typedef enum _HARDWARE_COUNTER_TYPE {
  PMCCounter = 0,             // ordinal: 0x0
  MaxHardwareCounterType = 1, // ordinal: 0x1
} _HARDWARE_COUNTER_TYPE;

typedef enum PPM_IDLE_BUCKET_TIME_TYPE {
  PpmIdleBucketTimeInQpc = 0,   // ordinal: 0x0
  PpmIdleBucketTimeIn100ns = 1, // ordinal: 0x1
  PpmIdleBucketTimeMaximum = 2, // ordinal: 0x2
} PPM_IDLE_BUCKET_TIME_TYPE;

typedef enum _PROCESSOR_CACHE_TYPE {
  CacheUnified = 0,     // ordinal: 0x0
  CacheInstruction = 1, // ordinal: 0x1
  CacheData = 2,        // ordinal: 0x2
  CacheTrace = 3,       // ordinal: 0x3
} _PROCESSOR_CACHE_TYPE;

typedef enum _POOL_TYPE {
  NonPagedPool = 0,                          // ordinal: 0x0
  NonPagedPoolExecute = 0,                   // ordinal: 0x1
  PagedPool = 1,                             // ordinal: 0x2
  NonPagedPoolMustSucceed = 2,               // ordinal: 0x3
  DontUseThisType = 3,                       // ordinal: 0x4
  NonPagedPoolCacheAligned = 4,              // ordinal: 0x5
  PagedPoolCacheAligned = 5,                 // ordinal: 0x6
  NonPagedPoolCacheAlignedMustS = 6,         // ordinal: 0x7
  MaxPoolType = 7,                           // ordinal: 0x8
  NonPagedPoolBase = 0,                      // ordinal: 0x9
  NonPagedPoolBaseMustSucceed = 2,           // ordinal: 0xa
  NonPagedPoolBaseCacheAligned = 4,          // ordinal: 0xb
  NonPagedPoolBaseCacheAlignedMustS = 6,     // ordinal: 0xc
  NonPagedPoolSession = 32,                  // ordinal: 0xd
  PagedPoolSession = 33,                     // ordinal: 0xe
  NonPagedPoolMustSucceedSession = 34,       // ordinal: 0xf
  DontUseThisTypeSession = 35,               // ordinal: 0x10
  NonPagedPoolCacheAlignedSession = 36,      // ordinal: 0x11
  PagedPoolCacheAlignedSession = 37,         // ordinal: 0x12
  NonPagedPoolCacheAlignedMustSSession = 38, // ordinal: 0x13
  NonPagedPoolNx = 512,                      // ordinal: 0x14
  NonPagedPoolNxCacheAligned = 516,          // ordinal: 0x15
  NonPagedPoolSessionNx = 544,               // ordinal: 0x16
} _POOL_TYPE;

typedef enum _PROC_HYPERVISOR_STATE {
  ProcHypervisorNone = 0,       // ordinal: 0x0
  ProcHypervisorPresent = 1,    // ordinal: 0x1
  ProcHypervisorPower = 2,      // ordinal: 0x2
  ProcHypervisorHvCounters = 3, // ordinal: 0x3
} _PROC_HYPERVISOR_STATE;

typedef enum _EXCEPTION_DISPOSITION {
  ExceptionContinueExecution = 0, // ordinal: 0x0
  ExceptionContinueSearch = 1,    // ordinal: 0x1
  ExceptionNestedException = 2,   // ordinal: 0x2
  ExceptionCollidedUnwind = 3,    // ordinal: 0x3
} _EXCEPTION_DISPOSITION;

typedef enum _TP_CALLBACK_PRIORITY {
  TP_CALLBACK_PRIORITY_HIGH = 0,    // ordinal: 0x0
  TP_CALLBACK_PRIORITY_NORMAL = 1,  // ordinal: 0x1
  TP_CALLBACK_PRIORITY_LOW = 2,     // ordinal: 0x2
  TP_CALLBACK_PRIORITY_INVALID = 3, // ordinal: 0x3
  TP_CALLBACK_PRIORITY_COUNT = 3,   // ordinal: 0x4
} _TP_CALLBACK_PRIORITY;

typedef unsigned short WCHAR;

// 0x2 bytes (sizeof)
typedef struct __anon_1309 {
  WCHAR ParentId[1]; // offset: 0x0 ordinal: 0x0
} __anon_1309;

// 0x8 bytes (sizeof)
typedef struct __anon_1307 {
  enum _PNP_VETO_TYPE VetoType;    // offset: 0x0 ordinal: 0x0
  WCHAR DeviceIdVetoNameBuffer[1]; // offset: 0x4 ordinal: 0x1
} __anon_1307;

// 0x10 bytes (sizeof)
typedef struct __anon_1304 {
  VOID *NotificationStructure; // offset: 0x0 ordinal: 0x0
  WCHAR DeviceId[1];           // offset: 0x8 ordinal: 0x1
} __anon_1304;

// 0x2 bytes (sizeof)
typedef struct __anon_1303 {
  WCHAR DeviceId[1]; // offset: 0x0 ordinal: 0x0
} __anon_1303;

typedef LONGLONG (*__anon_1646)();

// 0x8 bytes (sizeof)
typedef struct _QUAD {
  union {
    LONGLONG UseThisFieldToCopy; // offset: 0x0 ordinal: 0x0
    double DoNotUseThisField;    // offset: 0x0 ordinal: 0x1
  };
} _QUAD;

typedef enum _ALTERNATIVE_ARCHITECTURE_TYPE {
  StandardDesign = 0,  // ordinal: 0x0
  NEC98x86 = 1,        // ordinal: 0x1
  EndAlternatives = 2, // ordinal: 0x2
} _ALTERNATIVE_ARCHITECTURE_TYPE;

// 0x18 bytes (sizeof)
typedef struct _HIVE_WRITE_WAIT_QUEUE {
  struct _ETHREAD *ActiveThread;      // offset: 0x0 ordinal: 0x0
  struct _HIVE_WAIT_PACKET *WaitList; // offset: 0x8 ordinal: 0x1
  ULONG OwnerBoosted;                 // offset: 0x10 ordinal: 0x2
} _HIVE_WRITE_WAIT_QUEUE;

// 0x1 bytes (sizeof)
typedef union __anon_2150 {
  UCHAR AsUCHAR;                // offset: 0x0 ordinal: 0x0
  UCHAR NoDomainAccounting : 1; // offset: 0x0 ordinal: 0x1
  UCHAR IncreasePolicy : 2;     // offset: 0x0 ordinal: 0x2
  UCHAR DecreasePolicy : 2;     // offset: 0x0 ordinal: 0x3
  UCHAR Reserved : 3;           // offset: 0x0 ordinal: 0x4
} __anon_2150;

// 0x10 bytes (sizeof)
typedef struct _VF_TRACKER_STAMP {
  VOID *Thread;        // offset: 0x0 ordinal: 0x0
  UCHAR Flags : 8;     // offset: 0x8 ordinal: 0x1
  UCHAR OldIrql : 8;   // offset: 0x9 ordinal: 0x2
  UCHAR NewIrql : 8;   // offset: 0xa ordinal: 0x3
  UCHAR Processor : 8; // offset: 0xb ordinal: 0x4
} _VF_TRACKER_STAMP;

// 0x1 bytes (sizeof)
typedef union _XPF_MC_BANK_FLAGS {
  UCHAR ClearOnInitializationRW : 1; // offset: 0x0 ordinal: 0x0
  UCHAR ControlDataRW : 1;           // offset: 0x0 ordinal: 0x1
  UCHAR Reserved : 6;                // offset: 0x0 ordinal: 0x2
  UCHAR AsUCHAR;                     // offset: 0x0 ordinal: 0x3
} _XPF_MC_BANK_FLAGS;

// 0x1e bytes (sizeof)
typedef struct _TOKEN_AUDIT_POLICY {
  UCHAR PerUserPolicy[30]; // offset: 0x0 ordinal: 0x0
} _TOKEN_AUDIT_POLICY;

// 0x1f bytes (sizeof)
typedef struct _SEP_AUDIT_POLICY {
  struct _TOKEN_AUDIT_POLICY AdtTokenPolicy; // offset: 0x0 ordinal: 0x0
  UCHAR PolicySetStatus;                     // offset: 0x1e ordinal: 0x1
} _SEP_AUDIT_POLICY;

// 0x1 bytes (sizeof)
typedef struct _ETW_LOGGER_HANDLE {
  UCHAR DereferenceAndLeave; // offset: 0x0 ordinal: 0x0
} _ETW_LOGGER_HANDLE;

// 0x4 bytes (sizeof)
typedef struct __anon_1628 {
  UCHAR MajorVersion;    // offset: 0x0 ordinal: 0x0
  UCHAR MinorVersion;    // offset: 0x1 ordinal: 0x1
  UCHAR SubVersion;      // offset: 0x2 ordinal: 0x2
  UCHAR SubMinorVersion; // offset: 0x3 ordinal: 0x3
} __anon_1628;

// 0x1 bytes (sizeof)
typedef struct __anon_1520 {
  UCHAR ReferenceCache : 1; // offset: 0x0 ordinal: 0x0
  UCHAR Lookaside : 1;      // offset: 0x0 ordinal: 0x1
  UCHAR Initializing : 1;   // offset: 0x0 ordinal: 0x2
  UCHAR Deleted : 1;        // offset: 0x0 ordinal: 0x3
} __anon_1520;

// 0x1 bytes (sizeof)
typedef union __anon_1521 {
  struct __anon_1520 s1; // offset: 0x0 ordinal: 0x0
  UCHAR Flags;           // offset: 0x0 ordinal: 0x1
} __anon_1521;

typedef UCHAR (*__anon_1464)(VOID *, UCHAR);

// 0x20 bytes (sizeof)
typedef struct _CACHE_MANAGER_CALLBACKS {
  UCHAR (*AcquireForLazyWrite)(VOID *, UCHAR); // offset: 0x0 ordinal: 0x0
  VOID (*ReleaseFromLazyWrite)(VOID *);        // offset: 0x8 ordinal: 0x1
  UCHAR (*AcquireForReadAhead)(VOID *, UCHAR); // offset: 0x10 ordinal: 0x2
  VOID (*ReleaseFromReadAhead)(VOID *);        // offset: 0x18 ordinal: 0x3
} _CACHE_MANAGER_CALLBACKS;

// 0x10 bytes (sizeof)
typedef struct _VF_ADDRESS_RANGE {
  UCHAR *Start; // offset: 0x0 ordinal: 0x0
  UCHAR *End;   // offset: 0x8 ordinal: 0x1
} _VF_ADDRESS_RANGE;

// 0x10 bytes (sizeof)
typedef struct _RELATION_LIST {
  struct _DEVICE_OBJECT_LIST *DeviceObjectList; // offset: 0x0 ordinal: 0x0
  UCHAR Sorted;                                 // offset: 0x8 ordinal: 0x1
} _RELATION_LIST;

typedef UCHAR (*__anon_1263)(struct _PEP_CRASHDUMP_INFORMATION *);

// 0x1 bytes (sizeof)
typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS {
  UCHAR FRUId : 1;    // offset: 0x0 ordinal: 0x0
  UCHAR FRUText : 1;  // offset: 0x0 ordinal: 0x1
  UCHAR Reserved : 6; // offset: 0x0 ordinal: 0x2
  UCHAR AsUCHAR;      // offset: 0x0 ordinal: 0x3
} _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS;

// 0x2 bytes (sizeof)
typedef struct _MI_REBUILD_LARGE_PAGE_COUNTDOWN {
  UCHAR SecondsLeft;     // offset: 0x0 ordinal: 0x0
  UCHAR SecondsAssigned; // offset: 0x1 ordinal: 0x1
} _MI_REBUILD_LARGE_PAGE_COUNTDOWN;

// 0x4 bytes (sizeof)
typedef struct _MMPAGE_FILE_EXPANSION_FLAGS {
  UCHAR PageFileNumber : 8;      // offset: 0x0 ordinal: 0x0
  UCHAR Spare1 : 8;              // offset: 0x1 ordinal: 0x1
  UCHAR Spare2 : 8;              // offset: 0x2 ordinal: 0x2
  UCHAR IgnoreCurrentCommit : 1; // offset: 0x3 ordinal: 0x3
  UCHAR IncreaseMinimumSize : 1; // offset: 0x3 ordinal: 0x4
  UCHAR Spare3 : 6;              // offset: 0x3 ordinal: 0x5
} _MMPAGE_FILE_EXPANSION_FLAGS;

// 0x2 bytes (sizeof)
typedef struct _MMPFNENTRY {
  UCHAR PageLocation : 3;       // offset: 0x0 ordinal: 0x0
  UCHAR WriteInProgress : 1;    // offset: 0x0 ordinal: 0x1
  UCHAR Modified : 1;           // offset: 0x0 ordinal: 0x2
  UCHAR ReadInProgress : 1;     // offset: 0x0 ordinal: 0x3
  UCHAR CacheAttribute : 2;     // offset: 0x0 ordinal: 0x4
  UCHAR Priority : 3;           // offset: 0x1 ordinal: 0x5
  UCHAR OnProtectedStandby : 1; // offset: 0x1 ordinal: 0x6
  UCHAR InPageError : 1;        // offset: 0x1 ordinal: 0x7
  UCHAR SystemChargedPage : 1;  // offset: 0x1 ordinal: 0x8
  UCHAR RemovalRequested : 1;   // offset: 0x1 ordinal: 0x9
  UCHAR ParityError : 1;        // offset: 0x1 ordinal: 0xa
} _MMPFNENTRY;

// 0x4 bytes (sizeof)
typedef struct _MMINPAGE_FLAGS {
  UCHAR InjectRetry : 1;             // offset: 0x0 ordinal: 0x0
  UCHAR CrossThreadPadding : 7;      // offset: 0x0 ordinal: 0x1
  UCHAR PrefetchSystemVmType : 2;    // offset: 0x1 ordinal: 0x2
  UCHAR VaPrefetchReadBlock : 1;     // offset: 0x1 ordinal: 0x3
  UCHAR CollidedFlowThrough : 1;     // offset: 0x1 ordinal: 0x4
  UCHAR ForceCollisions : 1;         // offset: 0x1 ordinal: 0x5
  UCHAR InPageExpanded : 1;          // offset: 0x1 ordinal: 0x6
  UCHAR IssuedAtLowPriority : 1;     // offset: 0x1 ordinal: 0x7
  UCHAR FaultFromStore : 1;          // offset: 0x1 ordinal: 0x8
  UCHAR PagePriority : 3;            // offset: 0x2 ordinal: 0x9
  UCHAR PerformRelocations : 1;      // offset: 0x2 ordinal: 0xa
  UCHAR ClusteredPagePriority : 3;   // offset: 0x2 ordinal: 0xb
  UCHAR MakeClusterValid : 1;        // offset: 0x2 ordinal: 0xc
  UCHAR ZeroLastPage : 1;            // offset: 0x3 ordinal: 0xd
  UCHAR UserFault : 1;               // offset: 0x3 ordinal: 0xe
  UCHAR StandbyProtectionNeeded : 1; // offset: 0x3 ordinal: 0xf
  UCHAR PteChanged : 1;              // offset: 0x3 ordinal: 0x10
  UCHAR PageFileFault : 1;           // offset: 0x3 ordinal: 0x11
  UCHAR PageFilePageHashActive : 1;  // offset: 0x3 ordinal: 0x12
  UCHAR CoalescedIo : 1;             // offset: 0x3 ordinal: 0x13
  UCHAR VmLockNotNeeded : 1;         // offset: 0x3 ordinal: 0x14
} _MMINPAGE_FLAGS;

// 0x10 bytes (sizeof)
typedef struct __anon_770 {
  enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE
      NotificationType; // offset: 0x0 ordinal: 0x0
  UCHAR SafeToRecurse;  // offset: 0x8 ordinal: 0x1
} __anon_770;

typedef VOID (*__anon_720)(VOID *, UCHAR);

// 0x1 bytes (sizeof)
typedef struct __anon_662 {
  UCHAR Lock; // offset: 0x0 ordinal: 0x0
} __anon_662;

// 0x4 bytes (sizeof)
typedef struct _MMSUPPORT_FLAGS {
  UCHAR WorkingSetType : 3;        // offset: 0x0 ordinal: 0x0
  UCHAR ForceCredits : 3;          // offset: 0x0 ordinal: 0x1
  UCHAR MaximumWorkingSetHard : 1; // offset: 0x0 ordinal: 0x2
  UCHAR MinimumWorkingSetHard : 1; // offset: 0x0 ordinal: 0x3
  UCHAR SessionMaster : 1;         // offset: 0x1 ordinal: 0x4
  UCHAR TrimmerState : 2;          // offset: 0x1 ordinal: 0x5
  UCHAR Reserved : 1;              // offset: 0x1 ordinal: 0x6
  UCHAR PageStealers : 4;          // offset: 0x1 ordinal: 0x7
  UCHAR MemoryPriority;            // offset: 0x2 ordinal: 0x8
  UCHAR WsleDeleted : 1;           // offset: 0x3 ordinal: 0x9
  UCHAR VmExiting : 1;             // offset: 0x3 ordinal: 0xa
  UCHAR ExpansionFailed : 1;       // offset: 0x3 ordinal: 0xb
  UCHAR SvmEnabled : 1;            // offset: 0x3 ordinal: 0xc
  UCHAR ForceAge : 1;              // offset: 0x3 ordinal: 0xd
  UCHAR NewMaximum : 1;            // offset: 0x3 ordinal: 0xe
  UCHAR CommitReleaseState : 2;    // offset: 0x3 ordinal: 0xf
} _MMSUPPORT_FLAGS;

// 0x1 bytes (sizeof)
typedef struct _PS_PROTECTION {
  union {
    UCHAR Level;    // offset: 0x0 ordinal: 0x0
    UCHAR Type : 3; // offset: 0x0 ordinal: 0x1
  };
  UCHAR Audit : 1;  // offset: 0x0 ordinal: 0x2
  UCHAR Signer : 4; // offset: 0x0 ordinal: 0x3
} _PS_PROTECTION;

typedef UCHAR (*__anon_576)(struct _FILE_OBJECT *, struct _MDL *,
                            struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_397)(VOID *);

// 0x1 bytes (sizeof)
typedef union _KEXECUTE_OPTIONS {
  UCHAR ExecuteDisable : 1;                  // offset: 0x0 ordinal: 0x0
  UCHAR ExecuteEnable : 1;                   // offset: 0x0 ordinal: 0x1
  UCHAR DisableThunkEmulation : 1;           // offset: 0x0 ordinal: 0x2
  UCHAR Permanent : 1;                       // offset: 0x0 ordinal: 0x3
  UCHAR ExecuteDispatchEnable : 1;           // offset: 0x0 ordinal: 0x4
  UCHAR ImageDispatchEnable : 1;             // offset: 0x0 ordinal: 0x5
  UCHAR DisableExceptionChainValidation : 1; // offset: 0x0 ordinal: 0x6
  UCHAR Spare : 1;                           // offset: 0x0 ordinal: 0x7
  UCHAR ExecuteOptions;                      // offset: 0x0 ordinal: 0x8
  UCHAR ExecuteOptionsNV;                    // offset: 0x0 ordinal: 0x9
} _KEXECUTE_OPTIONS;

// 0x2 bytes (sizeof)
typedef struct _PROC_PERF_LOAD {
  UCHAR BusyPercentage;      // offset: 0x0 ordinal: 0x0
  UCHAR FrequencyPercentage; // offset: 0x1 ordinal: 0x1
} _PROC_PERF_LOAD;

// 0x1 bytes (sizeof)
typedef struct _flags {
  UCHAR Removable : 1;            // offset: 0x0 ordinal: 0x0
  UCHAR GroupAssigned : 1;        // offset: 0x0 ordinal: 0x1
  UCHAR GroupCommitted : 1;       // offset: 0x0 ordinal: 0x2
  UCHAR GroupAssignmentFixed : 1; // offset: 0x0 ordinal: 0x3
  UCHAR Fill : 4;                 // offset: 0x0 ordinal: 0x4
} _flags;

// 0x1 bytes (sizeof)
typedef union _KWAIT_STATUS_REGISTER {
  UCHAR Flags;        // offset: 0x0 ordinal: 0x0
  UCHAR State : 3;    // offset: 0x0 ordinal: 0x1
  UCHAR Affinity : 1; // offset: 0x0 ordinal: 0x2
  UCHAR Priority : 1; // offset: 0x0 ordinal: 0x3
  UCHAR Apc : 1;      // offset: 0x0 ordinal: 0x4
  UCHAR UserApc : 1;  // offset: 0x0 ordinal: 0x5
  UCHAR Alert : 1;    // offset: 0x0 ordinal: 0x6
} _KWAIT_STATUS_REGISTER;

// 0x5 bytes (sizeof)
typedef struct _PROC_IDLE_POLICY {
  UCHAR PromotePercent;     // offset: 0x0 ordinal: 0x0
  UCHAR DemotePercent;      // offset: 0x1 ordinal: 0x1
  UCHAR PromotePercentBase; // offset: 0x2 ordinal: 0x2
  UCHAR DemotePercentBase;  // offset: 0x3 ordinal: 0x3
  UCHAR AllowScaling;       // offset: 0x4 ordinal: 0x4
} _PROC_IDLE_POLICY;

// 0x4 bytes (sizeof)
typedef struct __anon_220 {
  UCHAR BaseMiddle; // offset: 0x0 ordinal: 0x0
  UCHAR Flags1;     // offset: 0x1 ordinal: 0x1
  UCHAR Flags2;     // offset: 0x2 ordinal: 0x2
  UCHAR BaseHigh;   // offset: 0x3 ordinal: 0x3
} __anon_220;

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

// 0x10 bytes (sizeof)
typedef struct __anon_665 {
  UCHAR InPath;                              // offset: 0x0 ordinal: 0x0
  UCHAR Reserved[3];                         // offset: 0x1 ordinal: 0x1
  enum _DEVICE_USAGE_NOTIFICATION_TYPE Type; // offset: 0x8 ordinal: 0x2
} __anon_665;

typedef enum _NT_PRODUCT_TYPE {
  NtProductWinNt = 1,    // ordinal: 0x0
  NtProductLanManNt = 2, // ordinal: 0x1
  NtProductServer = 3,   // ordinal: 0x2
} _NT_PRODUCT_TYPE;

// 0x28 bytes (sizeof)
typedef struct _MI_QUEUED_DEADSTACK_WORKITEM {
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x0 ordinal: 0x0
  LONG Active;                      // offset: 0x20 ordinal: 0x1
} _MI_QUEUED_DEADSTACK_WORKITEM;

// 0x10 bytes (sizeof)
typedef struct _MI_COMBINE_PAGE_LISTHEAD {
  struct _RTL_AVL_TREE Table; // offset: 0x0 ordinal: 0x0
  LONG Lock;                  // offset: 0x8 ordinal: 0x1
} _MI_COMBINE_PAGE_LISTHEAD;

// 0x8088 bytes (sizeof)
typedef struct _STACK_TABLE {
  USHORT NumStackTraces;                    // offset: 0x0 ordinal: 0x0
  USHORT TraceCapacity;                     // offset: 0x2 ordinal: 0x1
  struct _OBJECT_REF_TRACE *StackTrace[16]; // offset: 0x8 ordinal: 0x2
  USHORT StackTableHash[16381];             // offset: 0x88 ordinal: 0x3
} _STACK_TABLE;

// 0x4 bytes (sizeof)
typedef struct _HEAP_FREE_ENTRY_EXTRA {
  USHORT TagIndex;           // offset: 0x0 ordinal: 0x0
  USHORT FreeBackTraceIndex; // offset: 0x2 ordinal: 0x1
} _HEAP_FREE_ENTRY_EXTRA;

// 0x2 bytes (sizeof)
typedef union __anon_2288 {
  USHORT AsUSHORT;         // offset: 0x0 ordinal: 0x0
  USHORT AllowScaling : 1; // offset: 0x0 ordinal: 0x1
  USHORT Disabled : 1;     // offset: 0x0 ordinal: 0x2
  USHORT Reserved : 14;    // offset: 0x0 ordinal: 0x3
} __anon_2288;

// 0x2 bytes (sizeof)
typedef union __anon_2124 {
  USHORT SignatureLevel : 4; // offset: 0x0 ordinal: 0x0
  USHORT SignatureType : 3;  // offset: 0x0 ordinal: 0x1
  USHORT Unused : 9;         // offset: 0x0 ordinal: 0x2
  USHORT EntireField;        // offset: 0x0 ordinal: 0x3
} __anon_2124;

// 0x2 bytes (sizeof)
typedef union _WHEA_NOTIFICATION_FLAGS {
  USHORT PollIntervalRW : 1;             // offset: 0x0 ordinal: 0x0
  USHORT SwitchToPollingThresholdRW : 1; // offset: 0x0 ordinal: 0x1
  USHORT SwitchToPollingWindowRW : 1;    // offset: 0x0 ordinal: 0x2
  USHORT ErrorThresholdRW : 1;           // offset: 0x0 ordinal: 0x3
  USHORT ErrorThresholdWindowRW : 1;     // offset: 0x0 ordinal: 0x4
  USHORT Reserved : 11;                  // offset: 0x0 ordinal: 0x5
  USHORT AsUSHORT;                       // offset: 0x0 ordinal: 0x6
} _WHEA_NOTIFICATION_FLAGS;

// 0x2 bytes (sizeof)
typedef union _AER_BRIDGE_DESCRIPTOR_FLAGS {
  USHORT UncorrectableErrorMaskRW : 1;          // offset: 0x0 ordinal: 0x0
  USHORT UncorrectableErrorSeverityRW : 1;      // offset: 0x0 ordinal: 0x1
  USHORT CorrectableErrorMaskRW : 1;            // offset: 0x0 ordinal: 0x2
  USHORT AdvancedCapsAndControlRW : 1;          // offset: 0x0 ordinal: 0x3
  USHORT SecondaryUncorrectableErrorMaskRW : 1; // offset: 0x0 ordinal: 0x4
  USHORT SecondaryUncorrectableErrorSevRW : 1;  // offset: 0x0 ordinal: 0x5
  USHORT SecondaryCapsAndControlRW : 1;         // offset: 0x0 ordinal: 0x6
  USHORT Reserved : 9;                          // offset: 0x0 ordinal: 0x7
  USHORT AsUSHORT;                              // offset: 0x0 ordinal: 0x8
} _AER_BRIDGE_DESCRIPTOR_FLAGS;

// 0x2 bytes (sizeof)
typedef union _AER_ENDPOINT_DESCRIPTOR_FLAGS {
  USHORT UncorrectableErrorMaskRW : 1;     // offset: 0x0 ordinal: 0x0
  USHORT UncorrectableErrorSeverityRW : 1; // offset: 0x0 ordinal: 0x1
  USHORT CorrectableErrorMaskRW : 1;       // offset: 0x0 ordinal: 0x2
  USHORT AdvancedCapsAndControlRW : 1;     // offset: 0x0 ordinal: 0x3
  USHORT Reserved : 12;                    // offset: 0x0 ordinal: 0x4
  USHORT AsUSHORT;                         // offset: 0x0 ordinal: 0x5
} _AER_ENDPOINT_DESCRIPTOR_FLAGS;

// 0x2 bytes (sizeof)
typedef union _AER_ROOTPORT_DESCRIPTOR_FLAGS {
  USHORT UncorrectableErrorMaskRW : 1;     // offset: 0x0 ordinal: 0x0
  USHORT UncorrectableErrorSeverityRW : 1; // offset: 0x0 ordinal: 0x1
  USHORT CorrectableErrorMaskRW : 1;       // offset: 0x0 ordinal: 0x2
  USHORT AdvancedCapsAndControlRW : 1;     // offset: 0x0 ordinal: 0x3
  USHORT RootErrorCommandRW : 1;           // offset: 0x0 ordinal: 0x4
  USHORT Reserved : 11;                    // offset: 0x0 ordinal: 0x5
  USHORT AsUSHORT;                         // offset: 0x0 ordinal: 0x6
} _AER_ROOTPORT_DESCRIPTOR_FLAGS;

// 0x4 bytes (sizeof)
typedef struct _WHEA_IPF_CPE_DESCRIPTOR {
  USHORT Type;    // offset: 0x0 ordinal: 0x0
  UCHAR Enabled;  // offset: 0x2 ordinal: 0x1
  UCHAR Reserved; // offset: 0x3 ordinal: 0x2
} _WHEA_IPF_CPE_DESCRIPTOR;

// 0x4 bytes (sizeof)
typedef struct _WHEA_IPF_CMC_DESCRIPTOR {
  USHORT Type;    // offset: 0x0 ordinal: 0x0
  UCHAR Enabled;  // offset: 0x2 ordinal: 0x1
  UCHAR Reserved; // offset: 0x3 ordinal: 0x2
} _WHEA_IPF_CMC_DESCRIPTOR;

// 0x4 bytes (sizeof)
typedef struct _WHEA_IPF_MCA_DESCRIPTOR {
  USHORT Type;    // offset: 0x0 ordinal: 0x0
  UCHAR Enabled;  // offset: 0x2 ordinal: 0x1
  UCHAR Reserved; // offset: 0x3 ordinal: 0x2
} _WHEA_IPF_MCA_DESCRIPTOR;

// 0x3 bytes (sizeof)
typedef struct _WHEA_XPF_NMI_DESCRIPTOR {
  USHORT Type;   // offset: 0x0 ordinal: 0x0
  UCHAR Enabled; // offset: 0x2 ordinal: 0x1
} _WHEA_XPF_NMI_DESCRIPTOR;

// 0x20 bytes (sizeof)
typedef struct _OBJECT_HEADER_CREATOR_INFO {
  struct _LIST_ENTRY TypeList;  // offset: 0x0 ordinal: 0x0
  VOID *CreatorUniqueProcess;   // offset: 0x10 ordinal: 0x1
  USHORT CreatorBackTraceIndex; // offset: 0x18 ordinal: 0x2
  USHORT Reserved;              // offset: 0x1a ordinal: 0x3
} _OBJECT_HEADER_CREATOR_INFO;

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

// 0x10 bytes (sizeof)
typedef struct _IO_IRP_EXT_TRACK_OFFSET_HEADER {
  USHORT Validation; // offset: 0x0 ordinal: 0x0
  USHORT Flags;      // offset: 0x2 ordinal: 0x1
  VOID(*TrackedOffsetCallback)
  (struct _IO_IRP_EXT_TRACK_OFFSET_HEADER *,
   struct _IO_IRP_EXT_TRACK_OFFSET_HEADER *,
   LONGLONG); // offset: 0x8 ordinal: 0x2
} _IO_IRP_EXT_TRACK_OFFSET_HEADER;

typedef VOID (*__anon_1610)(struct _IO_IRP_EXT_TRACK_OFFSET_HEADER *,
                            struct _IO_IRP_EXT_TRACK_OFFSET_HEADER *, LONGLONG);

// 0x8 bytes (sizeof)
typedef struct _PCW_COUNTER_DESCRIPTOR {
  USHORT Id;          // offset: 0x0 ordinal: 0x0
  USHORT StructIndex; // offset: 0x2 ordinal: 0x1
  USHORT Offset;      // offset: 0x4 ordinal: 0x2
  USHORT Size;        // offset: 0x6 ordinal: 0x3
} _PCW_COUNTER_DESCRIPTOR;

// 0x2 bytes (sizeof)
typedef union _WHEA_REVISION {
  UCHAR MinorRevision; // offset: 0x0 ordinal: 0x0
  UCHAR MajorRevision; // offset: 0x1 ordinal: 0x1
  USHORT AsUSHORT;     // offset: 0x0 ordinal: 0x2
} _WHEA_REVISION;

// 0x4 bytes (sizeof)
typedef struct _ETW_BUFFER_CONTEXT {
  UCHAR ProcessorNumber; // offset: 0x0 ordinal: 0x0
  UCHAR Alignment;       // offset: 0x1 ordinal: 0x1
  USHORT ProcessorIndex; // offset: 0x0 ordinal: 0x2
  USHORT LoggerId;       // offset: 0x2 ordinal: 0x3
} _ETW_BUFFER_CONTEXT;

// 0x10 bytes (sizeof)
typedef struct _TXN_PARAMETER_BLOCK {
  USHORT Length;           // offset: 0x0 ordinal: 0x0
  USHORT TxFsContext;      // offset: 0x2 ordinal: 0x1
  VOID *TransactionObject; // offset: 0x8 ordinal: 0x2
} _TXN_PARAMETER_BLOCK;

// 0x4 bytes (sizeof)
typedef struct __anon_915 {
  USHORT ReferenceCount; // offset: 0x0 ordinal: 0x0
  union {
    USHORT ShortFlags;         // offset: 0x2 ordinal: 0x1
    USHORT VolatileShortFlags; // offset: 0x2 ordinal: 0x2
  };
} __anon_915;

// 0x4 bytes (sizeof)
typedef union __anon_909 {
  USHORT ReferenceCount; // offset: 0x0 ordinal: 0x0
  struct _MMPFNENTRY e1; // offset: 0x2 ordinal: 0x1
  struct __anon_915 e2;  // offset: 0x0 ordinal: 0x2
} __anon_909;

// 0x4 bytes (sizeof)
typedef struct _SEGMENT_FLAGS {
  USHORT TotalNumberOfPtes4132 : 10; // offset: 0x0 ordinal: 0x0
  USHORT Spare0 : 2;                 // offset: 0x0 ordinal: 0x1
  USHORT LargePages : 1;             // offset: 0x0 ordinal: 0x2
  USHORT DebugSymbolsLoaded : 1;     // offset: 0x0 ordinal: 0x3
  USHORT WriteCombined : 1;          // offset: 0x0 ordinal: 0x4
  USHORT NoCache : 1;                // offset: 0x0 ordinal: 0x5
  USHORT Short0;                     // offset: 0x0 ordinal: 0x6
  UCHAR FloppyMedia : 1;             // offset: 0x2 ordinal: 0x7
  UCHAR DefaultProtectionMask : 5;   // offset: 0x2 ordinal: 0x8
  UCHAR Binary32 : 1;                // offset: 0x2 ordinal: 0x9
  UCHAR ContainsDebug : 1;           // offset: 0x2 ordinal: 0xa
  UCHAR UChar1;                      // offset: 0x2 ordinal: 0xb
  UCHAR ForceCollision : 1;          // offset: 0x3 ordinal: 0xc
  UCHAR ImageSigningType : 3;        // offset: 0x3 ordinal: 0xd
  UCHAR ImageSigningLevel : 4;       // offset: 0x3 ordinal: 0xe
  UCHAR UChar2;                      // offset: 0x3 ordinal: 0xf
} _SEGMENT_FLAGS;

// 0x4 bytes (sizeof)
typedef struct _MMSUBSECTION_FLAGS {
  USHORT SubsectionAccessed : 1;  // offset: 0x0 ordinal: 0x0
  USHORT Protection : 5;          // offset: 0x0 ordinal: 0x1
  USHORT StartingSector4132 : 10; // offset: 0x0 ordinal: 0x2
  USHORT SubsectionStatic : 1;    // offset: 0x2 ordinal: 0x3
  USHORT GlobalMemory : 1;        // offset: 0x2 ordinal: 0x4
  USHORT DirtyPages : 1;          // offset: 0x2 ordinal: 0x5
  USHORT OnDereferenceList : 1;   // offset: 0x2 ordinal: 0x6
  USHORT SectorEndOffset : 12;    // offset: 0x2 ordinal: 0x7
} _MMSUBSECTION_FLAGS;

// 0x20 bytes (sizeof)
typedef struct _INTERFACE {
  USHORT Size;                          // offset: 0x0 ordinal: 0x0
  USHORT Version;                       // offset: 0x2 ordinal: 0x1
  VOID *Context;                        // offset: 0x8 ordinal: 0x2
  VOID (*InterfaceReference)(VOID *);   // offset: 0x10 ordinal: 0x3
  VOID (*InterfaceDereference)(VOID *); // offset: 0x18 ordinal: 0x4
} _INTERFACE;

// 0x8 bytes (sizeof)
typedef struct _PROC_PERF_HISTORY_ENTRY {
  USHORT Utility;            // offset: 0x0 ordinal: 0x0
  USHORT AffinitizedUtility; // offset: 0x2 ordinal: 0x1
  UCHAR Frequency;           // offset: 0x4 ordinal: 0x2
  UCHAR TaggedPercent[2];    // offset: 0x5 ordinal: 0x3
} _PROC_PERF_HISTORY_ENTRY;

// 0x10 bytes (sizeof)
typedef struct _KDESCRIPTOR {
  USHORT Pad[3]; // offset: 0x0 ordinal: 0x0
  USHORT Limit;  // offset: 0x6 ordinal: 0x1
  VOID *Base;    // offset: 0x8 ordinal: 0x2
} _KDESCRIPTOR;

// 0x28 bytes (sizeof)
typedef struct _ETW_PMC_SUPPORT {
  enum _KPROFILE_SOURCE Source[4];            // offset: 0x0 ordinal: 0x0
  ULONG HookIdCount;                          // offset: 0x10 ordinal: 0x1
  USHORT HookId[4];                           // offset: 0x14 ordinal: 0x2
  ULONG CountersCount;                        // offset: 0x1c ordinal: 0x3
  struct _HAL_PMC_COUNTERS *ProcessorCtrs[1]; // offset: 0x20 ordinal: 0x4
} _ETW_PMC_SUPPORT;

// 0x10 bytes (sizeof)
typedef struct _STRING {
  USHORT Length;        // offset: 0x0 ordinal: 0x0
  USHORT MaximumLength; // offset: 0x2 ordinal: 0x1
  CHAR *Buffer;         // offset: 0x8 ordinal: 0x2
} _STRING;

// 0x10 bytes (sizeof)
typedef struct _ETW_FILTER_STRING_TOKEN_ELEMENT {
  USHORT Length;  // offset: 0x0 ordinal: 0x0
  USHORT *String; // offset: 0x8 ordinal: 0x1
} _ETW_FILTER_STRING_TOKEN_ELEMENT;

// 0x18 bytes (sizeof)
typedef struct _ETW_FILTER_STRING_TOKEN {
  USHORT Count;                                      // offset: 0x0 ordinal: 0x0
  struct _ETW_FILTER_STRING_TOKEN_ELEMENT Tokens[1]; // offset: 0x8 ordinal: 0x1
} _ETW_FILTER_STRING_TOKEN;

typedef VOID (*__anon_1441)(VOID *, USHORT *);

// 0x20 bytes (sizeof)
typedef struct __anon_1227 {
  enum PROFILE_STATUS DockStatus; // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY ListEntry;   // offset: 0x8 ordinal: 0x1
  USHORT *SerialNumber;           // offset: 0x18 ordinal: 0x2
} __anon_1227;

// 0x10 bytes (sizeof)
typedef struct _UNICODE_STRING {
  USHORT Length;        // offset: 0x0 ordinal: 0x0
  USHORT MaximumLength; // offset: 0x2 ordinal: 0x1
  USHORT *Buffer;       // offset: 0x8 ordinal: 0x2
} _UNICODE_STRING;

// 0x4 bytes (sizeof)
typedef struct _PROCESSOR_NUMBER {
  USHORT Group;   // offset: 0x0 ordinal: 0x0
  UCHAR Number;   // offset: 0x2 ordinal: 0x1
  UCHAR Reserved; // offset: 0x3 ordinal: 0x2
} _PROCESSOR_NUMBER;

// 0x20 bytes (sizeof)
typedef struct _RELATIVE_SYMLINK_INFO {
  USHORT ExposedNamespaceLength;                     // offset: 0x0 ordinal: 0x0
  USHORT Flags;                                      // offset: 0x2 ordinal: 0x1
  USHORT DeviceNameLength;                           // offset: 0x4 ordinal: 0x2
  USHORT Reserved;                                   // offset: 0x6 ordinal: 0x3
  struct _RELATIVE_SYMLINK_INFO *InteriorMountPoint; // offset: 0x8 ordinal: 0x4
  struct _UNICODE_STRING OpenedName; // offset: 0x10 ordinal: 0x5
} _RELATIVE_SYMLINK_INFO;

// 0x10 bytes (sizeof)
typedef struct _OBJECT_NAME_INFORMATION {
  struct _UNICODE_STRING Name; // offset: 0x0 ordinal: 0x0
} _OBJECT_NAME_INFORMATION;

// 0x8 bytes (sizeof)
typedef struct _SE_AUDIT_PROCESS_CREATION_INFO {
  struct _OBJECT_NAME_INFORMATION *ImageFileName; // offset: 0x0 ordinal: 0x0
} _SE_AUDIT_PROCESS_CREATION_INFO;

// 0x18 bytes (sizeof)
typedef struct _CURDIR {
  struct _UNICODE_STRING DosPath; // offset: 0x0 ordinal: 0x0
  VOID *Handle;                   // offset: 0x10 ordinal: 0x1
} _CURDIR;

// 0x8 bytes (sizeof)
typedef struct _ISR_THUNK {
  UCHAR PushImm;  // offset: 0x0 ordinal: 0x0
  UCHAR Vector;   // offset: 0x1 ordinal: 0x1
  UCHAR PushRbp;  // offset: 0x2 ordinal: 0x2
  UCHAR JmpOp;    // offset: 0x3 ordinal: 0x3
  LONG JmpOffset; // offset: 0x4 ordinal: 0x4
} _ISR_THUNK;

// 0x8 bytes (sizeof)
typedef struct _UNEXPECTED_INTERRUPT {
  UCHAR PushImm;  // offset: 0x0 ordinal: 0x0
  UCHAR Vector;   // offset: 0x1 ordinal: 0x1
  UCHAR PushRbp;  // offset: 0x2 ordinal: 0x2
  UCHAR JmpOp;    // offset: 0x3 ordinal: 0x3
  LONG JmpOffset; // offset: 0x4 ordinal: 0x4
} _UNEXPECTED_INTERRUPT;

// 0x20 bytes (sizeof)
typedef struct _OBJECT_HEADER_NAME_INFO {
  struct _OBJECT_DIRECTORY *Directory; // offset: 0x0 ordinal: 0x0
  struct _UNICODE_STRING Name;         // offset: 0x8 ordinal: 0x1
  LONG ReferenceCount;                 // offset: 0x18 ordinal: 0x2
} _OBJECT_HEADER_NAME_INFO;

// 0xac bytes (sizeof)
typedef struct _RTL_TIME_ZONE_INFORMATION {
  LONG Bias;                         // offset: 0x0 ordinal: 0x0
  WCHAR StandardName[32];            // offset: 0x4 ordinal: 0x1
  struct _TIME_FIELDS StandardStart; // offset: 0x44 ordinal: 0x2
  LONG StandardBias;                 // offset: 0x54 ordinal: 0x3
  WCHAR DaylightName[32];            // offset: 0x58 ordinal: 0x4
  struct _TIME_FIELDS DaylightStart; // offset: 0x98 ordinal: 0x5
  LONG DaylightBias;                 // offset: 0xa8 ordinal: 0x6
} _RTL_TIME_ZONE_INFORMATION;

typedef LONG (*__anon_1519)(VOID *);

// 0x8 bytes (sizeof)
typedef struct _VACB_LEVEL_REFERENCE {
  LONG Reference;        // offset: 0x0 ordinal: 0x0
  LONG SpecialReference; // offset: 0x4 ordinal: 0x1
} _VACB_LEVEL_REFERENCE;

// 0x4 bytes (sizeof)
typedef struct _DBGKD_CONTINUE {
  LONG ContinueStatus; // offset: 0x0 ordinal: 0x0
} _DBGKD_CONTINUE;

// 0x18 bytes (sizeof)
typedef struct _ETW_PERF_COUNTERS {
  LONG TotalActiveSessions;           // offset: 0x0 ordinal: 0x0
  LONG TotalBufferMemoryNonPagedPool; // offset: 0x4 ordinal: 0x1
  LONG TotalBufferMemoryPagedPool;    // offset: 0x8 ordinal: 0x2
  LONG TotalGuidsEnabled;             // offset: 0xc ordinal: 0x3
  LONG TotalGuidsNotEnabled;          // offset: 0x10 ordinal: 0x4
  LONG TotalGuidsPreEnabled;          // offset: 0x14 ordinal: 0x5
} _ETW_PERF_COUNTERS;

// 0x228 bytes (sizeof)
typedef struct _MI_REBUILD_LARGE_PAGES {
  LONG Active; // offset: 0x0 ordinal: 0x0
  struct _MI_REBUILD_LARGE_PAGE_COUNTDOWN Timer[64]
                                               [4]; // offset: 0x4 ordinal: 0x1
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x208 ordinal: 0x2
} _MI_REBUILD_LARGE_PAGES;

// 0x38 bytes (sizeof)
typedef struct _MI_LDW_WORK_CONTEXT {
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x0 ordinal: 0x0
  struct _FILE_OBJECT *FileObject;  // offset: 0x20 ordinal: 0x1
  LONG ErrorStatus;                 // offset: 0x28 ordinal: 0x2
  LONG Active;                      // offset: 0x2c ordinal: 0x3
  UCHAR FreeWhenDone;               // offset: 0x30 ordinal: 0x4
} _MI_LDW_WORK_CONTEXT;

// 0x4 bytes (sizeof)
typedef union __anon_949 {
  LONG FlushCompleting : 1;  // offset: 0x0 ordinal: 0x0
  LONG FlushInProgress : 31; // offset: 0x0 ordinal: 0x1
  LONG Long;                 // offset: 0x0 ordinal: 0x2
} __anon_949;

typedef LONG (*__anon_581)(struct _FILE_OBJECT *, struct _DEVICE_OBJECT *);

// 0x8 bytes (sizeof)
typedef union __anon_504 {
  struct _IRP *MasterIrp; // offset: 0x0 ordinal: 0x0
  LONG IrpCount;          // offset: 0x0 ordinal: 0x1
  VOID *SystemBuffer;     // offset: 0x0 ordinal: 0x2
} __anon_504;

// 0x18 bytes (sizeof)
typedef struct _DISPATCHER_HEADER {
  union {
    LONG Lock;   // offset: 0x0 ordinal: 0x0
    LONG LockNV; // offset: 0x0 ordinal: 0x1
    UCHAR Type;  // offset: 0x0 ordinal: 0x2
  };
  UCHAR Signalling; // offset: 0x1 ordinal: 0x3
  UCHAR Size;       // offset: 0x2 ordinal: 0x4
  UCHAR Reserved1;  // offset: 0x3 ordinal: 0x5
  UCHAR TimerType;  // offset: 0x0 ordinal: 0x6
  union {
    UCHAR TimerControlFlags; // offset: 0x1 ordinal: 0x7
    UCHAR Absolute : 1;      // offset: 0x1 ordinal: 0x8
  };
  UCHAR Wake : 1;                  // offset: 0x1 ordinal: 0x9
  UCHAR EncodedTolerableDelay : 6; // offset: 0x1 ordinal: 0xa
  UCHAR Hand;                      // offset: 0x2 ordinal: 0xb
  union {
    UCHAR TimerMiscFlags; // offset: 0x3 ordinal: 0xc
    UCHAR Index : 6;      // offset: 0x3 ordinal: 0xd
  };
  UCHAR Inserted : 1; // offset: 0x3 ordinal: 0xe
  UCHAR Expired : 1;  // offset: 0x3 ordinal: 0xf
  UCHAR Timer2Type;   // offset: 0x0 ordinal: 0x10
  union {
    UCHAR Timer2Flags;        // offset: 0x1 ordinal: 0x11
    UCHAR Timer2Inserted : 1; // offset: 0x1 ordinal: 0x12
  };
  UCHAR Timer2Expiring : 1;      // offset: 0x1 ordinal: 0x13
  UCHAR Timer2CancelPending : 1; // offset: 0x1 ordinal: 0x14
  UCHAR Timer2SetPending : 1;    // offset: 0x1 ordinal: 0x15
  UCHAR Timer2Running : 1;       // offset: 0x1 ordinal: 0x16
  UCHAR Timer2Disabled : 1;      // offset: 0x1 ordinal: 0x17
  UCHAR Timer2ReservedFlags : 2; // offset: 0x1 ordinal: 0x18
  UCHAR Timer2Reserved1;         // offset: 0x2 ordinal: 0x19
  UCHAR Timer2Reserved2;         // offset: 0x3 ordinal: 0x1a
  UCHAR QueueType;               // offset: 0x0 ordinal: 0x1b
  union {
    UCHAR QueueControlFlags; // offset: 0x1 ordinal: 0x1c
    UCHAR Abandoned : 1;     // offset: 0x1 ordinal: 0x1d
  };
  UCHAR DisableIncrement : 1;          // offset: 0x1 ordinal: 0x1e
  UCHAR QueueReservedControlFlags : 6; // offset: 0x1 ordinal: 0x1f
  UCHAR QueueSize;                     // offset: 0x2 ordinal: 0x20
  UCHAR QueueReserved;                 // offset: 0x3 ordinal: 0x21
  UCHAR ThreadType;                    // offset: 0x0 ordinal: 0x22
  UCHAR ThreadReserved;                // offset: 0x1 ordinal: 0x23
  union {
    UCHAR ThreadControlFlags; // offset: 0x2 ordinal: 0x24
    UCHAR CycleProfiling : 1; // offset: 0x2 ordinal: 0x25
  };
  UCHAR CounterProfiling : 1;           // offset: 0x2 ordinal: 0x26
  UCHAR GroupScheduling : 1;            // offset: 0x2 ordinal: 0x27
  UCHAR AffinitySet : 1;                // offset: 0x2 ordinal: 0x28
  UCHAR Tagged : 1;                     // offset: 0x2 ordinal: 0x29
  UCHAR EnergyProfiling : 1;            // offset: 0x2 ordinal: 0x2a
  UCHAR ThreadReservedControlFlags : 2; // offset: 0x2 ordinal: 0x2b
  union {
    UCHAR DebugActive;   // offset: 0x3 ordinal: 0x2c
    UCHAR ActiveDR7 : 1; // offset: 0x3 ordinal: 0x2d
  };
  UCHAR Instrumented : 1;          // offset: 0x3 ordinal: 0x2e
  UCHAR Minimal : 1;               // offset: 0x3 ordinal: 0x2f
  UCHAR Reserved4 : 3;             // offset: 0x3 ordinal: 0x30
  UCHAR UmsScheduled : 1;          // offset: 0x3 ordinal: 0x31
  UCHAR UmsPrimary : 1;            // offset: 0x3 ordinal: 0x32
  UCHAR MutantType;                // offset: 0x0 ordinal: 0x33
  UCHAR MutantSize;                // offset: 0x1 ordinal: 0x34
  UCHAR DpcActive;                 // offset: 0x2 ordinal: 0x35
  UCHAR MutantReserved;            // offset: 0x3 ordinal: 0x36
  LONG SignalState;                // offset: 0x4 ordinal: 0x37
  struct _LIST_ENTRY WaitListHead; // offset: 0x8 ordinal: 0x38
} _DISPATCHER_HEADER;

// 0x38 bytes (sizeof)
typedef struct _KMUTANT {
  struct _DISPATCHER_HEADER Header;   // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY MutantListEntry; // offset: 0x18 ordinal: 0x1
  struct _KTHREAD *OwnerThread;       // offset: 0x28 ordinal: 0x2
  UCHAR Abandoned;                    // offset: 0x30 ordinal: 0x3
  UCHAR ApcDisable;                   // offset: 0x31 ordinal: 0x4
} _KMUTANT;

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

// 0x30 bytes (sizeof)
typedef struct _MMDEREFERENCE_SEGMENT_HEADER {
  struct _KSEMAPHORE Semaphore; // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY ListHead;  // offset: 0x20 ordinal: 0x1
} _MMDEREFERENCE_SEGMENT_HEADER;

// 0x18 bytes (sizeof)
typedef struct _KEVENT {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 ordinal: 0x0
} _KEVENT;

// 0x38 bytes (sizeof)
typedef struct _MI_RESUME_WORKITEM {
  struct _KEVENT ResumeCompleteEvent; // offset: 0x0 ordinal: 0x0
  struct _WORK_QUEUE_ITEM WorkItem;   // offset: 0x18 ordinal: 0x1
} _MI_RESUME_WORKITEM;

// 0x28 bytes (sizeof)
typedef struct _HIVE_WAIT_PACKET {
  struct _KEVENT WakeEvent;       // offset: 0x0 ordinal: 0x0
  LONG Status;                    // offset: 0x18 ordinal: 0x1
  struct _HIVE_WAIT_PACKET *Next; // offset: 0x20 ordinal: 0x2
} _HIVE_WAIT_PACKET;

// 0x20 bytes (sizeof)
typedef struct _PALPC_PORT_REFERENCE_WAIT_BLOCK {
  struct _KEVENT DesiredReferenceNoEvent; // offset: 0x0 ordinal: 0x0
  LONG DesiredReferenceNo;                // offset: 0x18 ordinal: 0x1
} _PALPC_PORT_REFERENCE_WAIT_BLOCK;

// 0x20 bytes (sizeof)
typedef struct _CACHE_UNINITIALIZE_EVENT {
  struct _CACHE_UNINITIALIZE_EVENT *Next; // offset: 0x0 ordinal: 0x0
  struct _KEVENT Event;                   // offset: 0x8 ordinal: 0x1
} _CACHE_UNINITIALIZE_EVENT;

// 0x20 bytes (sizeof)
typedef struct _IO_REMOVE_LOCK_COMMON_BLOCK {
  UCHAR Removed;              // offset: 0x0 ordinal: 0x0
  UCHAR Reserved[3];          // offset: 0x1 ordinal: 0x1
  LONG IoCount;               // offset: 0x4 ordinal: 0x2
  struct _KEVENT RemoveEvent; // offset: 0x8 ordinal: 0x3
} _IO_REMOVE_LOCK_COMMON_BLOCK;

// 0x20 bytes (sizeof)
typedef struct _IO_REMOVE_LOCK {
  struct _IO_REMOVE_LOCK_COMMON_BLOCK Common; // offset: 0x0 ordinal: 0x0
} _IO_REMOVE_LOCK;

// 0x8 bytes (sizeof)
typedef struct __anon_1468 {
  struct _KEVENT *Event; // offset: 0x0 ordinal: 0x0
} __anon_1468;

// 0x18 bytes (sizeof)
typedef struct _KGATE {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 ordinal: 0x0
} _KGATE;

// 0x28 bytes (sizeof)
typedef struct _MMMOD_WRITER_LISTHEAD {
  struct _LIST_ENTRY ListHead; // offset: 0x0 ordinal: 0x0
  union {
    struct _KGATE Gate;   // offset: 0x10 ordinal: 0x1
    struct _KEVENT Event; // offset: 0x10 ordinal: 0x2
  };
} _MMMOD_WRITER_LISTHEAD;

// 0x20 bytes (sizeof)
typedef struct _MI_FILE_EXTENTS_WAIT_BLOCK {
  struct _MI_FILE_EXTENTS_WAIT_BLOCK *Next; // offset: 0x0 ordinal: 0x0
  struct _KGATE Gate;                       // offset: 0x8 ordinal: 0x1
} _MI_FILE_EXTENTS_WAIT_BLOCK;

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
typedef union _MI_RESERVATION_CLUSTER_INFO {
  ULONG ClusterSize : 10;    // offset: 0x0 ordinal: 0x0
  ULONG SequenceNumber : 22; // offset: 0x0 ordinal: 0x1
  LONG EntireInfo;           // offset: 0x0 ordinal: 0x2
} _MI_RESERVATION_CLUSTER_INFO;

// 0x48 bytes (sizeof)
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
} _DEFERRED_WRITE;

// 0x10 bytes (sizeof)
typedef struct _VF_TRACKER {
  ULONG TrackerFlags; // offset: 0x0 ordinal: 0x0
  ULONG TrackerSize;  // offset: 0x4 ordinal: 0x1
  ULONG TrackerIndex; // offset: 0x8 ordinal: 0x2
  ULONG TraceDepth;   // offset: 0xc ordinal: 0x3
} _VF_TRACKER;

// 0x8 bytes (sizeof)
typedef struct _CM_INDEX {
  ULONG Cell; // offset: 0x0 ordinal: 0x0
  union {
    UCHAR NameHint[4]; // offset: 0x4 ordinal: 0x1
    ULONG HashKey;     // offset: 0x4 ordinal: 0x2
  };
} _CM_INDEX;

// 0x14 bytes (sizeof)
typedef struct _NB10 {
  ULONG Signature; // offset: 0x0 ordinal: 0x0
  ULONG Offset;    // offset: 0x4 ordinal: 0x1
  ULONG TimeStamp; // offset: 0x8 ordinal: 0x2
  ULONG Age;       // offset: 0xc ordinal: 0x3
  CHAR PdbName[1]; // offset: 0x10 ordinal: 0x4
} _NB10;

// 0x4 bytes (sizeof)
typedef union __anon_2327 {
  ULONG NodeSize;     // offset: 0x0 ordinal: 0x0
  ULONG UseLookaside; // offset: 0x0 ordinal: 0x1
} __anon_2327;

// 0x10 bytes (sizeof)
typedef struct _LDR_SERVICE_TAG_RECORD {
  struct _LDR_SERVICE_TAG_RECORD *Next; // offset: 0x0 ordinal: 0x0
  ULONG ServiceTag;                     // offset: 0x8 ordinal: 0x1
} _LDR_SERVICE_TAG_RECORD;

// 0x50 bytes (sizeof)
typedef struct _LDR_DDAG_NODE {
  struct _LIST_ENTRY Modules;                     // offset: 0x0 ordinal: 0x0
  struct _LDR_SERVICE_TAG_RECORD *ServiceTagList; // offset: 0x10 ordinal: 0x1
  ULONG LoadCount;                                // offset: 0x18 ordinal: 0x2
  ULONG LoadWhileUnloadingCount;                  // offset: 0x1c ordinal: 0x3
  ULONG LowestLink;                               // offset: 0x20 ordinal: 0x4
  struct _LDRP_CSLIST Dependencies;               // offset: 0x28 ordinal: 0x5
  struct _LDRP_CSLIST IncomingDependencies;       // offset: 0x30 ordinal: 0x6
  enum _LDR_DDAG_STATE State;                     // offset: 0x38 ordinal: 0x7
  struct _SINGLE_LIST_ENTRY CondenseLink;         // offset: 0x40 ordinal: 0x8
  ULONG PreorderNumber;                           // offset: 0x48 ordinal: 0x9
} _LDR_DDAG_NODE;

// 0x4 bytes (sizeof)
typedef union _PPM_COORDINATED_SYNCHRONIZATION {
  LONG AsLong;               // offset: 0x0 ordinal: 0x0
  ULONG EnterProcessor : 14; // offset: 0x0 ordinal: 0x1
  ULONG ExitProcessor : 14;  // offset: 0x0 ordinal: 0x2
  ULONG Transition : 2;      // offset: 0x0 ordinal: 0x3
  ULONG Entered : 1;         // offset: 0x0 ordinal: 0x4
  ULONG Reserved : 1;        // offset: 0x0 ordinal: 0x5
} _PPM_COORDINATED_SYNCHRONIZATION;

// 0x18 bytes (sizeof)
typedef struct _SHARED_CACHE_MAP_LIST_CURSOR {
  struct _LIST_ENTRY SharedCacheMapLinks; // offset: 0x0 ordinal: 0x0
  ULONG Flags;                            // offset: 0x10 ordinal: 0x1
} _SHARED_CACHE_MAP_LIST_CURSOR;

// 0x4 bytes (sizeof)
typedef union _PPM_IDLE_SYNCHRONIZATION_STATE {
  LONG AsLong;        // offset: 0x0 ordinal: 0x0
  LONG RefCount : 24; // offset: 0x0 ordinal: 0x1
  ULONG State : 8;    // offset: 0x0 ordinal: 0x2
} _PPM_IDLE_SYNCHRONIZATION_STATE;

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
  union __anon_2288 Flags;                   // offset: 0x2 ordinal: 0x1
  ULONG PolicyCount;                         // offset: 0x4 ordinal: 0x2
  struct PROCESSOR_IDLESTATE_INFO Policy[3]; // offset: 0x8 ordinal: 0x3
} PROCESSOR_IDLESTATE_POLICY;

// 0x4 bytes (sizeof)
typedef struct __anon_2280 {
  ULONG Type; // offset: 0x0 ordinal: 0x0
} __anon_2280;

// 0x4 bytes (sizeof)
typedef struct __anon_2279 {
  ULONG PercentLevel; // offset: 0x0 ordinal: 0x0
} __anon_2279;

// 0x18 bytes (sizeof)
typedef struct _POP_ACTION_TRIGGER {
  enum POWER_POLICY_DEVICE_TYPE Type; // offset: 0x0 ordinal: 0x0
  ULONG Flags;                        // offset: 0x4 ordinal: 0x1
  struct _POP_TRIGGER_WAIT *Wait;     // offset: 0x8 ordinal: 0x2
  union {
    struct __anon_2279 Battery; // offset: 0x10 ordinal: 0x3
    struct __anon_2280 Button;  // offset: 0x10 ordinal: 0x4
  };
} _POP_ACTION_TRIGGER;

// 0x38 bytes (sizeof)
typedef struct _POP_TRIGGER_WAIT {
  struct _KEVENT Event;                // offset: 0x0 ordinal: 0x0
  LONG Status;                         // offset: 0x18 ordinal: 0x1
  struct _LIST_ENTRY Link;             // offset: 0x20 ordinal: 0x2
  struct _POP_ACTION_TRIGGER *Trigger; // offset: 0x30 ordinal: 0x3
} _POP_TRIGGER_WAIT;

// 0x4 bytes (sizeof)
typedef union __anon_2270 {
  ULONG Active : 1;             // offset: 0x0 ordinal: 0x0
  ULONG OnlyTryAcquireUsed : 1; // offset: 0x0 ordinal: 0x1
  ULONG ReleasedOutOfOrder : 1; // offset: 0x0 ordinal: 0x2
  ULONG SequenceNumber : 29;    // offset: 0x0 ordinal: 0x3
  ULONG Whole;                  // offset: 0x0 ordinal: 0x4
} __anon_2270;

// 0x38 bytes (sizeof)
typedef struct _VI_DEADLOCK_THREAD {
  struct _KTHREAD *Thread;                    // offset: 0x0 ordinal: 0x0
  struct _VI_DEADLOCK_NODE *CurrentSpinNode;  // offset: 0x8 ordinal: 0x1
  struct _VI_DEADLOCK_NODE *CurrentOtherNode; // offset: 0x10 ordinal: 0x2
  union {
    struct _LIST_ENTRY ListEntry;     // offset: 0x18 ordinal: 0x3
    struct _LIST_ENTRY FreeListEntry; // offset: 0x18 ordinal: 0x4
  };
  ULONG NodeCount;            // offset: 0x28 ordinal: 0x5
  ULONG PagingCount;          // offset: 0x2c ordinal: 0x6
  UCHAR ThreadUsesEresources; // offset: 0x30 ordinal: 0x7
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
  union __anon_2270 u1;                    // offset: 0x48 ordinal: 0x7
  LONG ChildrenCount;                      // offset: 0x4c ordinal: 0x8
  VOID *StackTrace[8];                     // offset: 0x50 ordinal: 0x9
  VOID *ParentStackTrace[8];               // offset: 0x90 ordinal: 0xa
} _VI_DEADLOCK_NODE;

// 0x4 bytes (sizeof)
typedef struct _MM_SESSION_SPACE_FLAGS {
  ULONG Initialized : 1;            // offset: 0x0 ordinal: 0x0
  ULONG DeletePending : 1;          // offset: 0x0 ordinal: 0x1
  ULONG PoolInitialized : 1;        // offset: 0x0 ordinal: 0x2
  ULONG DynamicVaInitialized : 1;   // offset: 0x0 ordinal: 0x3
  ULONG WsInitialized : 1;          // offset: 0x0 ordinal: 0x4
  ULONG PoolDestroyed : 1;          // offset: 0x0 ordinal: 0x5
  ULONG ObjectInitialized : 1;      // offset: 0x0 ordinal: 0x6
  ULONG LeakedPoolDeliberately : 1; // offset: 0x0 ordinal: 0x7
  ULONG Filler : 24;                // offset: 0x0 ordinal: 0x8
} _MM_SESSION_SPACE_FLAGS;

// 0x4 bytes (sizeof)
typedef union __anon_2253 {
  ULONG LongFlags;                      // offset: 0x0 ordinal: 0x0
  struct _MM_SESSION_SPACE_FLAGS Flags; // offset: 0x0 ordinal: 0x1
} __anon_2253;

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

typedef VOID (*__anon_2241)(enum _DUMP_EVENTS, VOID *, ULONG);

typedef LONG (*__anon_2239)(ULONG, ULONG, VOID *, ULONG);

// 0x8 bytes (sizeof)
typedef struct __anon_2236 {
  ULONG Signature; // offset: 0x0 ordinal: 0x0
  ULONG CheckSum;  // offset: 0x4 ordinal: 0x1
} __anon_2236;

typedef VOID (*__anon_2231)(ULONG);

// 0x48 bytes (sizeof)
typedef struct _PO_NOTIFY_ORDER_LEVEL {
  ULONG DeviceCount;             // offset: 0x0 ordinal: 0x0
  ULONG ActiveCount;             // offset: 0x4 ordinal: 0x1
  struct _LIST_ENTRY WaitSleep;  // offset: 0x8 ordinal: 0x2
  struct _LIST_ENTRY ReadySleep; // offset: 0x18 ordinal: 0x3
  struct _LIST_ENTRY ReadyS0;    // offset: 0x28 ordinal: 0x4
  struct _LIST_ENTRY WaitS0;     // offset: 0x38 ordinal: 0x5
} _PO_NOTIFY_ORDER_LEVEL;

// 0x178 bytes (sizeof)
typedef struct _PO_DEVICE_NOTIFY_ORDER {
  UCHAR Locked;                                // offset: 0x0 ordinal: 0x0
  struct _DEVICE_OBJECT **WarmEjectPdoPointer; // offset: 0x8 ordinal: 0x1
  struct _PO_NOTIFY_ORDER_LEVEL OrderLevel[5]; // offset: 0x10 ordinal: 0x2
} _PO_DEVICE_NOTIFY_ORDER;

// 0x18 bytes (sizeof)
typedef struct _RTL_ATOM_TABLE_REFERENCE {
  struct _LIST_ENTRY LowBoxList; // offset: 0x0 ordinal: 0x0
  ULONG LowBoxID;                // offset: 0x10 ordinal: 0x1
  USHORT ReferenceCount;         // offset: 0x14 ordinal: 0x2
  USHORT Flags;                  // offset: 0x16 ordinal: 0x3
} _RTL_ATOM_TABLE_REFERENCE;

// 0x30 bytes (sizeof)
typedef struct _RTL_ATOM_TABLE_ENTRY {
  struct _RTL_ATOM_TABLE_ENTRY *HashLink;     // offset: 0x0 ordinal: 0x0
  USHORT HandleIndex;                         // offset: 0x8 ordinal: 0x1
  USHORT Atom;                                // offset: 0xa ordinal: 0x2
  struct _RTL_ATOM_TABLE_REFERENCE Reference; // offset: 0x10 ordinal: 0x3
  UCHAR NameLength;                           // offset: 0x28 ordinal: 0x4
  WCHAR Name[1];                              // offset: 0x2a ordinal: 0x5
} _RTL_ATOM_TABLE_ENTRY;

// 0x40 bytes (sizeof)
typedef struct _PNP_DEVICE_COMPLETION_REQUEST {
  struct _LIST_ENTRY ListEntry;            // offset: 0x0 ordinal: 0x0
  struct _DEVICE_NODE *DeviceNode;         // offset: 0x10 ordinal: 0x1
  VOID *Context;                           // offset: 0x18 ordinal: 0x2
  enum _PNP_DEVNODE_STATE CompletionState; // offset: 0x20 ordinal: 0x3
  ULONG IrpPended;                         // offset: 0x24 ordinal: 0x4
  LONG Status;                             // offset: 0x28 ordinal: 0x5
  VOID *Information;                       // offset: 0x30 ordinal: 0x6
  LONG ReferenceCount;                     // offset: 0x38 ordinal: 0x7
} _PNP_DEVICE_COMPLETION_REQUEST;

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
typedef union __anon_2173 {
  ULONG PhysicalAddress; // offset: 0x0 ordinal: 0x0
  ULONG VirtualSize;     // offset: 0x0 ordinal: 0x1
} __anon_2173;

// 0x28 bytes (sizeof)
typedef struct _IMAGE_SECTION_HEADER {
  UCHAR Name[8];              // offset: 0x0 ordinal: 0x0
  union __anon_2173 Misc;     // offset: 0x8 ordinal: 0x1
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
typedef struct _OBJECT_HEADER_PADDING_INFO {
  ULONG PaddingAmount; // offset: 0x0 ordinal: 0x0
} _OBJECT_HEADER_PADDING_INFO;

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
  UCHAR Hiberboot;                                // offset: 0x12 ordinal: 0x12
  UCHAR WakeAlarmPresent;                         // offset: 0x13 ordinal: 0x13
  UCHAR AoAc;                                     // offset: 0x14 ordinal: 0x14
  UCHAR DiskSpinDown;                             // offset: 0x15 ordinal: 0x15
  UCHAR HiberFileType;                            // offset: 0x16 ordinal: 0x16
  UCHAR AoAcConnectivitySupported;                // offset: 0x17 ordinal: 0x17
  UCHAR spare3[6];                                // offset: 0x18 ordinal: 0x18
  UCHAR SystemBatteriesPresent;                   // offset: 0x1e ordinal: 0x19
  UCHAR BatteriesAreShortTerm;                    // offset: 0x1f ordinal: 0x1a
  struct BATTERY_REPORTING_SCALE BatteryScale[3]; // offset: 0x20 ordinal: 0x1b
  enum _SYSTEM_POWER_STATE AcOnLineWake;          // offset: 0x38 ordinal: 0x1c
  enum _SYSTEM_POWER_STATE SoftLidWake;           // offset: 0x3c ordinal: 0x1d
  enum _SYSTEM_POWER_STATE RtcWake;               // offset: 0x40 ordinal: 0x1e
  enum _SYSTEM_POWER_STATE MinDeviceWakeState;    // offset: 0x44 ordinal: 0x1f
  enum _SYSTEM_POWER_STATE DefaultLowLatencyWake; // offset: 0x48 ordinal: 0x20
} SYSTEM_POWER_CAPABILITIES;

// 0x1c bytes (sizeof)
typedef struct PROCESSOR_PERFSTATE_POLICY {
  ULONG Revision;         // offset: 0x0 ordinal: 0x0
  UCHAR MaxThrottle;      // offset: 0x4 ordinal: 0x1
  UCHAR MinThrottle;      // offset: 0x5 ordinal: 0x2
  UCHAR BusyAdjThreshold; // offset: 0x6 ordinal: 0x3
  union {
    UCHAR Spare;             // offset: 0x7 ordinal: 0x4
    union __anon_2150 Flags; // offset: 0x7 ordinal: 0x5
  };
  ULONG TimeCheck;       // offset: 0x8 ordinal: 0x6
  ULONG IncreaseTime;    // offset: 0xc ordinal: 0x7
  ULONG DecreaseTime;    // offset: 0x10 ordinal: 0x8
  ULONG IncreasePercent; // offset: 0x14 ordinal: 0x9
  ULONG DecreasePercent; // offset: 0x18 ordinal: 0xa
} PROCESSOR_PERFSTATE_POLICY;

// 0x4 bytes (sizeof)
typedef struct __anon_2149 {
  ULONG MissedEtwRegistration : 1; // offset: 0x0 ordinal: 0x0
  ULONG Spare : 31;                // offset: 0x0 ordinal: 0x1
} __anon_2149;

// 0x28 bytes (sizeof)
typedef struct _VF_SUSPECT_DRIVER_ENTRY {
  struct _LIST_ENTRY Links;        // offset: 0x0 ordinal: 0x0
  ULONG Loads;                     // offset: 0x10 ordinal: 0x1
  ULONG Unloads;                   // offset: 0x14 ordinal: 0x2
  struct _UNICODE_STRING BaseName; // offset: 0x18 ordinal: 0x3
} _VF_SUSPECT_DRIVER_ENTRY;

// 0x4 bytes (sizeof)
typedef union __anon_2147 {
  struct __anon_2149 Flags; // offset: 0x0 ordinal: 0x0
  ULONG Whole;              // offset: 0x0 ordinal: 0x1
} __anon_2147;

// 0x4 bytes (sizeof)
typedef struct __anon_2137 {
  ULONG SnapSharedExportsFailed : 1; // offset: 0x0 ordinal: 0x0
  ULONG Spare : 31;                  // offset: 0x0 ordinal: 0x1
} __anon_2137;

// 0x20 bytes (sizeof)
typedef union __anon_2138 {
  struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS
      AllSharedExportThunks; // offset: 0x0 ordinal: 0x0
  struct __anon_2137 Flags;  // offset: 0x0 ordinal: 0x1
} __anon_2138;

// 0x18 bytes (sizeof)
typedef struct _THERMAL_POLICY {
  ULONG Version;           // offset: 0x0 ordinal: 0x0
  UCHAR WaitForUpdate;     // offset: 0x4 ordinal: 0x1
  UCHAR Hibernate;         // offset: 0x5 ordinal: 0x2
  UCHAR Critical;          // offset: 0x6 ordinal: 0x3
  UCHAR ThermalStandby;    // offset: 0x7 ordinal: 0x4
  ULONG ActivationReasons; // offset: 0x8 ordinal: 0x5
  ULONG PassiveLimit;      // offset: 0xc ordinal: 0x6
  ULONG ActiveLevel;       // offset: 0x10 ordinal: 0x7
  UCHAR OverThrottled;     // offset: 0x14 ordinal: 0x8
} _THERMAL_POLICY;

// 0x8 bytes (sizeof)
typedef struct _MI_FORCED_COMMITS {
  ULONG Regular; // offset: 0x0 ordinal: 0x0
  ULONG Wrap;    // offset: 0x4 ordinal: 0x1
} _MI_FORCED_COMMITS;

// 0x3c bytes (sizeof)
typedef struct _MI_PROBE_RAISE_TRACKER {
  ULONG UserRangeInKernel;              // offset: 0x0 ordinal: 0x0
  ULONG FaultFailed;                    // offset: 0x4 ordinal: 0x1
  ULONG WriteFaultFailed;               // offset: 0x8 ordinal: 0x2
  ULONG LargePageFailed;                // offset: 0xc ordinal: 0x3
  ULONG UserAccessToKernelPte;          // offset: 0x10 ordinal: 0x4
  ULONG BadPageLocation;                // offset: 0x14 ordinal: 0x5
  ULONG InsufficientCharge;             // offset: 0x18 ordinal: 0x6
  ULONG PageTableCharge;                // offset: 0x1c ordinal: 0x7
  ULONG NoPhysicalMapping;              // offset: 0x20 ordinal: 0x8
  ULONG NoIoReference;                  // offset: 0x24 ordinal: 0x9
  ULONG ProbeFailed;                    // offset: 0x28 ordinal: 0xa
  ULONG PteIsZero;                      // offset: 0x2c ordinal: 0xb
  ULONG StrongCodeWrite;                // offset: 0x30 ordinal: 0xc
  ULONG ReducedCloneCommitChargeFailed; // offset: 0x34 ordinal: 0xd
  ULONG CopyOnWriteAtDispatchNoPages;   // offset: 0x38 ordinal: 0xe
} _MI_PROBE_RAISE_TRACKER;

// 0x10 bytes (sizeof)
typedef struct _MM_SYSTEM_PAGE_COUNTS {
  ULONG SystemCodePage;        // offset: 0x0 ordinal: 0x0
  ULONG SystemDriverPage;      // offset: 0x4 ordinal: 0x1
  LONG TotalSystemCodePages;   // offset: 0x8 ordinal: 0x2
  LONG TotalSystemDriverPages; // offset: 0xc ordinal: 0x3
} _MM_SYSTEM_PAGE_COUNTS;

// 0x20 bytes (sizeof)
typedef struct _RTL_RANGE_LIST {
  struct _LIST_ENTRY ListHead; // offset: 0x0 ordinal: 0x0
  ULONG Flags;                 // offset: 0x10 ordinal: 0x1
  ULONG Count;                 // offset: 0x14 ordinal: 0x2
  ULONG Stamp;                 // offset: 0x18 ordinal: 0x3
} _RTL_RANGE_LIST;

// 0xc bytes (sizeof)
typedef struct _KSYSTEM_TIME {
  ULONG LowPart;  // offset: 0x0 ordinal: 0x0
  LONG High1Time; // offset: 0x4 ordinal: 0x1
  LONG High2Time; // offset: 0x8 ordinal: 0x2
} _KSYSTEM_TIME;

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
  USHORT Processor;    // offset: 0xa ordinal: 0x3
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

// 0x4 bytes (sizeof)
typedef union _MI_FLAGS {
  LONG EntireFlags;                        // offset: 0x0 ordinal: 0x0
  ULONG VerifierEnabled : 1;               // offset: 0x0 ordinal: 0x1
  ULONG KernelVerifierEnabled : 1;         // offset: 0x0 ordinal: 0x2
  ULONG LargePageKernel : 1;               // offset: 0x0 ordinal: 0x3
  ULONG StopOn4d : 1;                      // offset: 0x0 ordinal: 0x4
  ULONG InitializationPhase : 2;           // offset: 0x0 ordinal: 0x5
  ULONG PageKernelStacks : 1;              // offset: 0x0 ordinal: 0x6
  ULONG CheckZeroPages : 1;                // offset: 0x0 ordinal: 0x7
  ULONG ProcessorPrewalks : 1;             // offset: 0x0 ordinal: 0x8
  ULONG ProcessorPostwalks : 1;            // offset: 0x0 ordinal: 0x9
  ULONG CoverageBuild : 1;                 // offset: 0x0 ordinal: 0xa
  ULONG AccessBitReplacementDisabled : 1;  // offset: 0x0 ordinal: 0xb
  ULONG CheckExecute : 1;                  // offset: 0x0 ordinal: 0xc
  ULONG ZeroNonCachedByConverting : 1;     // offset: 0x0 ordinal: 0xd
  ULONG ZeroWriteCombinedByConverting : 1; // offset: 0x0 ordinal: 0xe
  ULONG ProtectedPagesEnabled : 1;         // offset: 0x0 ordinal: 0xf
  ULONG StrongCodeGuarantees : 2;          // offset: 0x0 ordinal: 0x10
  ULONG HardCodeGuarantees : 1;            // offset: 0x0 ordinal: 0x11
  ULONG StrongPageIdentity : 1;            // offset: 0x0 ordinal: 0x12
  ULONG SecureRelocations : 1;             // offset: 0x0 ordinal: 0x13
} _MI_FLAGS;

// 0xc bytes (sizeof)
typedef struct _IOP_IRP_EXTENSION_STATUS {
  ULONG Flags;      // offset: 0x0 ordinal: 0x0
  ULONG ActivityId; // offset: 0x4 ordinal: 0x1
  ULONG IoTracking; // offset: 0x8 ordinal: 0x2
} _IOP_IRP_EXTENSION_STATUS;

// 0x8 bytes (sizeof)
typedef struct _LEARNING_MODE_DATA {
  ULONG Settings;              // offset: 0x0 ordinal: 0x0
  UCHAR Enabled;               // offset: 0x4 ordinal: 0x1
  UCHAR PermissiveModeEnabled; // offset: 0x5 ordinal: 0x2
} _LEARNING_MODE_DATA;

// 0xc bytes (sizeof)
typedef struct _OBJECT_REF_STACK_INFO {
  ULONG Sequence;   // offset: 0x0 ordinal: 0x0
  USHORT Index;     // offset: 0x4 ordinal: 0x1
  USHORT NumTraces; // offset: 0x6 ordinal: 0x2
  ULONG Tag;        // offset: 0x8 ordinal: 0x3
} _OBJECT_REF_STACK_INFO;

// 0x58 bytes (sizeof)
typedef struct _THERMAL_INFORMATION_EX {
  ULONG ThermalStamp;            // offset: 0x0 ordinal: 0x0
  ULONG ThermalConstant1;        // offset: 0x4 ordinal: 0x1
  ULONG ThermalConstant2;        // offset: 0x8 ordinal: 0x2
  ULONG SamplingPeriod;          // offset: 0xc ordinal: 0x3
  ULONG CurrentTemperature;      // offset: 0x10 ordinal: 0x4
  ULONG PassiveTripPoint;        // offset: 0x14 ordinal: 0x5
  ULONG ThermalStandbyTripPoint; // offset: 0x18 ordinal: 0x6
  ULONG CriticalTripPoint;       // offset: 0x1c ordinal: 0x7
  UCHAR ActiveTripPointCount;    // offset: 0x20 ordinal: 0x8
  ULONG ActiveTripPoint[10];     // offset: 0x24 ordinal: 0x9
  ULONG S4TransitionTripPoint;   // offset: 0x4c ordinal: 0xa
  ULONG MinimumThrottle;         // offset: 0x50 ordinal: 0xb
  ULONG OverThrottleThreshold;   // offset: 0x54 ordinal: 0xc
} _THERMAL_INFORMATION_EX;

// 0x8 bytes (sizeof)
typedef struct __anon_1908 {
  ULONG Context1; // offset: 0x0 ordinal: 0x0
  ULONG Context2; // offset: 0x4 ordinal: 0x1
} __anon_1908;

// 0x8 bytes (sizeof)
typedef struct __anon_1907 {
  ULONG RangeCount;  // offset: 0x0 ordinal: 0x0
  ULONG SetBitCount; // offset: 0x4 ordinal: 0x1
} __anon_1907;

// 0x8 bytes (sizeof)
typedef struct __anon_1906 {
  ULONG Start;  // offset: 0x0 ordinal: 0x0
  ULONG Length; // offset: 0x4 ordinal: 0x1
} __anon_1906;

// 0x8 bytes (sizeof)
typedef union __anon_1902 {
  struct __anon_1906 DirtyVectorModifiedContext; // offset: 0x0 ordinal: 0x0
  struct __anon_1907 DirtyDataCaptureContext;    // offset: 0x0 ordinal: 0x1
  struct __anon_1908 Raw;                        // offset: 0x0 ordinal: 0x2
} __anon_1902;

// 0x48 bytes (sizeof)
typedef struct _CM_DIRTY_VECTOR_LOG_ENTRY {
  struct _ETHREAD *Thread;                   // offset: 0x0 ordinal: 0x0
  enum _CM_DIRTY_VECTOR_OPERATION Operation; // offset: 0x8 ordinal: 0x1
  union __anon_1902 Data;                    // offset: 0xc ordinal: 0x2
  VOID *Stack[6];                            // offset: 0x18 ordinal: 0x3
} _CM_DIRTY_VECTOR_LOG_ENTRY;

// 0x8 bytes (sizeof)
typedef struct _KTRANSACTION_HISTORY {
  enum __anon_1900 RecordType; // offset: 0x0 ordinal: 0x0
  ULONG Payload;               // offset: 0x4 ordinal: 0x1
} _KTRANSACTION_HISTORY;

// 0x8 bytes (sizeof)
typedef struct __anon_1892 {
  ULONG idxRecord;    // offset: 0x0 ordinal: 0x0
  ULONG cidContainer; // offset: 0x4 ordinal: 0x1
} __anon_1892;

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

typedef VOID (*__anon_1905)(struct _RTL_AVL_TABLE *, VOID *);

typedef VOID *(*__anon_1904)(struct _RTL_AVL_TABLE *, ULONG);

typedef enum _RTL_GENERIC_COMPARE_RESULTS (*__anon_1903)(
    struct _RTL_AVL_TABLE *, VOID *, VOID *);

// 0xa8 bytes (sizeof)
typedef struct _KTMOBJECT_NAMESPACE {
  struct _RTL_AVL_TABLE Table; // offset: 0x0 ordinal: 0x0
  struct _KMUTANT Mutex;       // offset: 0x68 ordinal: 0x1
  USHORT LinksOffset;          // offset: 0xa0 ordinal: 0x2
  USHORT GuidOffset;           // offset: 0xa2 ordinal: 0x3
  UCHAR Expired;               // offset: 0xa4 ordinal: 0x4
} _KTMOBJECT_NAMESPACE;

// 0x8 bytes (sizeof)
typedef struct _CM_CELL_REMAP_BLOCK {
  ULONG OldCell; // offset: 0x0 ordinal: 0x0
  ULONG NewCell; // offset: 0x4 ordinal: 0x1
} _CM_CELL_REMAP_BLOCK;

// 0x488 bytes (sizeof)
typedef struct _CM_DIRTY_VECTOR_LOG {
  ULONG Next;                                // offset: 0x0 ordinal: 0x0
  ULONG Size;                                // offset: 0x4 ordinal: 0x1
  struct _CM_DIRTY_VECTOR_LOG_ENTRY Log[16]; // offset: 0x8 ordinal: 0x2
} _CM_DIRTY_VECTOR_LOG;

// 0x28 bytes (sizeof)
typedef struct _CM_WORKITEM {
  struct _LIST_ENTRY ListEntry;  // offset: 0x0 ordinal: 0x0
  ULONG Private;                 // offset: 0x10 ordinal: 0x1
  VOID (*WorkerRoutine)(VOID *); // offset: 0x18 ordinal: 0x2
  VOID *Parameter;               // offset: 0x20 ordinal: 0x3
} _CM_WORKITEM;

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
  ULONG Compressed : 1; // offset: 0x0 ordinal: 0x0
  ULONG RefCount : 31;  // offset: 0x0 ordinal: 0x1
  union {
    struct _CM_NAME_HASH NameHash; // offset: 0x8 ordinal: 0x2
    ULONG ConvKey;                 // offset: 0x8 ordinal: 0x3
  };
  struct _CM_KEY_HASH *NextHash; // offset: 0x10 ordinal: 0x4
  USHORT NameLength;             // offset: 0x18 ordinal: 0x5
  WCHAR Name[1];                 // offset: 0x1a ordinal: 0x6
} _CM_NAME_CONTROL_BLOCK;

// 0x4 bytes (sizeof)
typedef union _KSTACK_COUNT {
  LONG Value;            // offset: 0x0 ordinal: 0x0
  ULONG State : 3;       // offset: 0x0 ordinal: 0x1
  ULONG StackCount : 29; // offset: 0x0 ordinal: 0x2
} _KSTACK_COUNT;

// 0x4 bytes (sizeof)
typedef struct __anon_1804 {
  ULONG ExtendedDestination : 24; // offset: 0x0 ordinal: 0x0
  ULONG Reserved : 6;             // offset: 0x0 ordinal: 0x1
  ULONG PassPW : 1;               // offset: 0x0 ordinal: 0x2
  ULONG WaitingForEOI : 1;        // offset: 0x0 ordinal: 0x3
} __anon_1804;

// 0x4 bytes (sizeof)
typedef struct __anon_1803 {
  ULONG Mask : 1;            // offset: 0x0 ordinal: 0x0
  ULONG Polarity : 1;        // offset: 0x0 ordinal: 0x1
  ULONG MessageType : 3;     // offset: 0x0 ordinal: 0x2
  ULONG RequestEOI : 1;      // offset: 0x0 ordinal: 0x3
  ULONG DestinationMode : 1; // offset: 0x0 ordinal: 0x4
  ULONG MessageType3 : 1;    // offset: 0x0 ordinal: 0x5
  ULONG Destination : 8;     // offset: 0x0 ordinal: 0x6
  ULONG Vector : 8;          // offset: 0x0 ordinal: 0x7
  ULONG ExtendedAddress : 8; // offset: 0x0 ordinal: 0x8
} __anon_1803;

// 0x4 bytes (sizeof)
typedef union __anon_1802 {
  struct __anon_1804 bits; // offset: 0x0 ordinal: 0x0
  ULONG AsULONG;           // offset: 0x0 ordinal: 0x1
} __anon_1802;

// 0x4 bytes (sizeof)
typedef union __anon_1801 {
  struct __anon_1803 bits; // offset: 0x0 ordinal: 0x0
  ULONG AsULONG;           // offset: 0x0 ordinal: 0x1
} __anon_1801;

// 0x8 bytes (sizeof)
typedef struct _INTERRUPT_HT_INTR_INFO {
  union __anon_1801 LowPart;  // offset: 0x0 ordinal: 0x0
  union __anon_1802 HighPart; // offset: 0x4 ordinal: 0x1
} _INTERRUPT_HT_INTR_INFO;

// 0x8 bytes (sizeof)
typedef struct __anon_1795 {
  struct _INTERRUPT_HT_INTR_INFO IntrInfo; // offset: 0x0 ordinal: 0x0
} __anon_1795;

// 0x8 bytes (sizeof)
typedef struct __anon_1800 {
  ULONG MessageAddressLow; // offset: 0x0 ordinal: 0x0
  USHORT MessageData;      // offset: 0x4 ordinal: 0x1
  USHORT Reserved;         // offset: 0x6 ordinal: 0x2
} __anon_1800;

// 0x8 bytes (sizeof)
typedef struct __anon_1793 {
  ULONG Gsiv;               // offset: 0x0 ordinal: 0x0
  ULONG WakeInterrupt : 1;  // offset: 0x4 ordinal: 0x1
  ULONG ReservedFlags : 31; // offset: 0x4 ordinal: 0x2
} __anon_1793;

// 0x4 bytes (sizeof)
typedef struct __anon_1777 {
  ULONG DeviceNumber : 5;   // offset: 0x0 ordinal: 0x0
  ULONG FunctionNumber : 3; // offset: 0x0 ordinal: 0x1
  ULONG Reserved : 24;      // offset: 0x0 ordinal: 0x2
} __anon_1777;

// 0x18 bytes (sizeof)
typedef struct __anon_1776 {
  ULONG PollInterval;             // offset: 0x0 ordinal: 0x0
  ULONG Vector;                   // offset: 0x4 ordinal: 0x1
  ULONG SwitchToPollingThreshold; // offset: 0x8 ordinal: 0x2
  ULONG SwitchToPollingWindow;    // offset: 0xc ordinal: 0x3
  ULONG ErrorThreshold;           // offset: 0x10 ordinal: 0x4
  ULONG ErrorThresholdWindow;     // offset: 0x14 ordinal: 0x5
} __anon_1776;

// 0x4 bytes (sizeof)
typedef struct __anon_1775 {
  ULONG PollInterval; // offset: 0x0 ordinal: 0x0
} __anon_1775;

// 0x18 bytes (sizeof)
typedef union __anon_1772 {
  struct __anon_1775 Polled;         // offset: 0x0 ordinal: 0x0
  struct __anon_1776 Interrupt;      // offset: 0x0 ordinal: 0x1
  struct __anon_1776 LocalInterrupt; // offset: 0x0 ordinal: 0x2
  struct __anon_1776 Sci;            // offset: 0x0 ordinal: 0x3
  struct __anon_1776 Nmi;            // offset: 0x0 ordinal: 0x4
} __anon_1772;

// 0x1c bytes (sizeof)
typedef struct _WHEA_NOTIFICATION_DESCRIPTOR {
  UCHAR Type;                           // offset: 0x0 ordinal: 0x0
  UCHAR Length;                         // offset: 0x1 ordinal: 0x1
  union _WHEA_NOTIFICATION_FLAGS Flags; // offset: 0x2 ordinal: 0x2
  union __anon_1772 u;                  // offset: 0x4 ordinal: 0x3
} _WHEA_NOTIFICATION_DESCRIPTOR;

// 0x4 bytes (sizeof)
typedef union __anon_1773 {
  struct __anon_1777 bits; // offset: 0x0 ordinal: 0x0
  ULONG AsULONG;           // offset: 0x0 ordinal: 0x1
} __anon_1773;

// 0x4 bytes (sizeof)
typedef struct _WHEA_PCI_SLOT_NUMBER {
  union __anon_1773 u; // offset: 0x0 ordinal: 0x0
} _WHEA_PCI_SLOT_NUMBER;

// 0x4 bytes (sizeof)
typedef union _XPF_MCE_FLAGS {
  ULONG MCG_CapabilityRW : 1;    // offset: 0x0 ordinal: 0x0
  ULONG MCG_GlobalControlRW : 1; // offset: 0x0 ordinal: 0x1
  ULONG Reserved : 30;           // offset: 0x0 ordinal: 0x2
  ULONG AsULONG;                 // offset: 0x0 ordinal: 0x3
} _XPF_MCE_FLAGS;

// 0x2c bytes (sizeof)
typedef struct _WHEA_AER_BRIDGE_DESCRIPTOR {
  USHORT Type;                              // offset: 0x0 ordinal: 0x0
  UCHAR Enabled;                            // offset: 0x2 ordinal: 0x1
  UCHAR Reserved;                           // offset: 0x3 ordinal: 0x2
  ULONG BusNumber;                          // offset: 0x4 ordinal: 0x3
  struct _WHEA_PCI_SLOT_NUMBER Slot;        // offset: 0x8 ordinal: 0x4
  USHORT DeviceControl;                     // offset: 0xc ordinal: 0x5
  union _AER_BRIDGE_DESCRIPTOR_FLAGS Flags; // offset: 0xe ordinal: 0x6
  ULONG UncorrectableErrorMask;             // offset: 0x10 ordinal: 0x7
  ULONG UncorrectableErrorSeverity;         // offset: 0x14 ordinal: 0x8
  ULONG CorrectableErrorMask;               // offset: 0x18 ordinal: 0x9
  ULONG AdvancedCapsAndControl;             // offset: 0x1c ordinal: 0xa
  ULONG SecondaryUncorrectableErrorMask;    // offset: 0x20 ordinal: 0xb
  ULONG SecondaryUncorrectableErrorSev;     // offset: 0x24 ordinal: 0xc
  ULONG SecondaryCapsAndControl;            // offset: 0x28 ordinal: 0xd
} _WHEA_AER_BRIDGE_DESCRIPTOR;

// 0x20 bytes (sizeof)
typedef struct _WHEA_AER_ENDPOINT_DESCRIPTOR {
  USHORT Type;                                // offset: 0x0 ordinal: 0x0
  UCHAR Enabled;                              // offset: 0x2 ordinal: 0x1
  UCHAR Reserved;                             // offset: 0x3 ordinal: 0x2
  ULONG BusNumber;                            // offset: 0x4 ordinal: 0x3
  struct _WHEA_PCI_SLOT_NUMBER Slot;          // offset: 0x8 ordinal: 0x4
  USHORT DeviceControl;                       // offset: 0xc ordinal: 0x5
  union _AER_ENDPOINT_DESCRIPTOR_FLAGS Flags; // offset: 0xe ordinal: 0x6
  ULONG UncorrectableErrorMask;               // offset: 0x10 ordinal: 0x7
  ULONG UncorrectableErrorSeverity;           // offset: 0x14 ordinal: 0x8
  ULONG CorrectableErrorMask;                 // offset: 0x18 ordinal: 0x9
  ULONG AdvancedCapsAndControl;               // offset: 0x1c ordinal: 0xa
} _WHEA_AER_ENDPOINT_DESCRIPTOR;

// 0x24 bytes (sizeof)
typedef struct _WHEA_AER_ROOTPORT_DESCRIPTOR {
  USHORT Type;                                // offset: 0x0 ordinal: 0x0
  UCHAR Enabled;                              // offset: 0x2 ordinal: 0x1
  UCHAR Reserved;                             // offset: 0x3 ordinal: 0x2
  ULONG BusNumber;                            // offset: 0x4 ordinal: 0x3
  struct _WHEA_PCI_SLOT_NUMBER Slot;          // offset: 0x8 ordinal: 0x4
  USHORT DeviceControl;                       // offset: 0xc ordinal: 0x5
  union _AER_ROOTPORT_DESCRIPTOR_FLAGS Flags; // offset: 0xe ordinal: 0x6
  ULONG UncorrectableErrorMask;               // offset: 0x10 ordinal: 0x7
  ULONG UncorrectableErrorSeverity;           // offset: 0x14 ordinal: 0x8
  ULONG CorrectableErrorMask;                 // offset: 0x18 ordinal: 0x9
  ULONG AdvancedCapsAndControl;               // offset: 0x1c ordinal: 0xa
  ULONG RootErrorCommand;                     // offset: 0x20 ordinal: 0xb
} _WHEA_AER_ROOTPORT_DESCRIPTOR;

// 0x4 bytes (sizeof)
typedef union _WHEAP_ERROR_RECORD_WRAPPER_FLAGS {
  ULONG Preallocated : 1;            // offset: 0x0 ordinal: 0x0
  ULONG FromPersistentStore : 1;     // offset: 0x0 ordinal: 0x1
  ULONG PlatformPfaControl : 1;      // offset: 0x0 ordinal: 0x2
  ULONG PlatformDirectedOffline : 1; // offset: 0x0 ordinal: 0x3
  ULONG Reserved : 28;               // offset: 0x0 ordinal: 0x4
  ULONG AsULONG;                     // offset: 0x0 ordinal: 0x5
} _WHEAP_ERROR_RECORD_WRAPPER_FLAGS;

// 0x30 bytes (sizeof)
typedef struct _WHEAP_ERROR_SOURCE_TABLE {
  ULONG Signature;           // offset: 0x0 ordinal: 0x0
  LONG Count;                // offset: 0x4 ordinal: 0x1
  struct _LIST_ENTRY Items;  // offset: 0x8 ordinal: 0x2
  struct _KEVENT InsertLock; // offset: 0x18 ordinal: 0x3
} _WHEAP_ERROR_SOURCE_TABLE;

// 0x28 bytes (sizeof)
typedef struct _OBP_LOOKUP_CONTEXT {
  struct _OBJECT_DIRECTORY *Directory;        // offset: 0x0 ordinal: 0x0
  VOID *Object;                               // offset: 0x8 ordinal: 0x1
  struct _OBJECT_DIRECTORY_ENTRY **EntryLink; // offset: 0x10 ordinal: 0x2
  ULONG HashValue;                            // offset: 0x18 ordinal: 0x3
  USHORT HashIndex;                           // offset: 0x1c ordinal: 0x4
  UCHAR DirectoryLocked;                      // offset: 0x1e ordinal: 0x5
  UCHAR LockedExclusive;                      // offset: 0x1f ordinal: 0x6
  ULONG LockStateSignature;                   // offset: 0x20 ordinal: 0x7
} _OBP_LOOKUP_CONTEXT;

// 0x18 bytes (sizeof)
typedef struct _OBJECT_DIRECTORY_ENTRY {
  struct _OBJECT_DIRECTORY_ENTRY *ChainLink; // offset: 0x0 ordinal: 0x0
  VOID *Object;                              // offset: 0x8 ordinal: 0x1
  ULONG HashValue;                           // offset: 0x10 ordinal: 0x2
} _OBJECT_DIRECTORY_ENTRY;

// 0x40 bytes (sizeof)
typedef struct _DEVICE_MAP {
  struct _OBJECT_DIRECTORY *DosDevicesDirectory; // offset: 0x0 ordinal: 0x0
  struct _OBJECT_DIRECTORY
      *GlobalDosDevicesDirectory;  // offset: 0x8 ordinal: 0x1
  VOID *DosDevicesDirectoryHandle; // offset: 0x10 ordinal: 0x2
  LONG ReferenceCount;             // offset: 0x18 ordinal: 0x3
  ULONG DriveMap;                  // offset: 0x1c ordinal: 0x4
  UCHAR DriveType[32];             // offset: 0x20 ordinal: 0x5
} _DEVICE_MAP;

// 0x30 bytes (sizeof)
typedef struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION {
  ULONG SecurityAttributeCount;                     // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY SecurityAttributesList;        // offset: 0x8 ordinal: 0x1
  ULONG WorkingSecurityAttributeCount;              // offset: 0x18 ordinal: 0x2
  struct _LIST_ENTRY WorkingSecurityAttributesList; // offset: 0x20 ordinal: 0x3
} _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION;

// 0x10 bytes (sizeof)
typedef struct _SID_AND_ATTRIBUTES {
  VOID *Sid;        // offset: 0x0 ordinal: 0x0
  ULONG Attributes; // offset: 0x8 ordinal: 0x1
} _SID_AND_ATTRIBUTES;

// 0x4 bytes (sizeof)
typedef struct _TOKEN_MANDATORY_POLICY {
  ULONG Policy; // offset: 0x0 ordinal: 0x0
} _TOKEN_MANDATORY_POLICY;

// 0x48 bytes (sizeof)
typedef struct _IOP_FILE_OBJECT_EXTENSION {
  ULONG FoExtFlags;                         // offset: 0x0 ordinal: 0x0
  VOID *FoExtPerTypeExtension[7];           // offset: 0x8 ordinal: 0x1
  enum _IOP_PRIORITY_HINT FoIoPriorityHint; // offset: 0x40 ordinal: 0x2
} _IOP_FILE_OBJECT_EXTENSION;

// 0x10 bytes (sizeof)
typedef struct _OBJECT_DUMP_CONTROL {
  VOID *Stream; // offset: 0x0 ordinal: 0x0
  ULONG Detail; // offset: 0x8 ordinal: 0x1
} _OBJECT_DUMP_CONTROL;

typedef VOID (*__anon_1591)(VOID *, struct _OBJECT_DUMP_CONTROL *);

// 0x30 bytes (sizeof)
typedef struct _OBJECT_ATTRIBUTES {
  ULONG Length;                       // offset: 0x0 ordinal: 0x0
  VOID *RootDirectory;                // offset: 0x8 ordinal: 0x1
  struct _UNICODE_STRING *ObjectName; // offset: 0x10 ordinal: 0x2
  ULONG Attributes;                   // offset: 0x18 ordinal: 0x3
  VOID *SecurityDescriptor;           // offset: 0x20 ordinal: 0x4
  VOID *SecurityQualityOfService;     // offset: 0x28 ordinal: 0x5
} _OBJECT_ATTRIBUTES;

// 0x4 bytes (sizeof)
typedef struct __anon_1580 {
  ULONG Secure : 1; // offset: 0x0 ordinal: 0x0
} __anon_1580;

// 0x4 bytes (sizeof)
typedef union __anon_1579 {
  struct __anon_1580 s1; // offset: 0x0 ordinal: 0x0
} __anon_1579;

// 0x4 bytes (sizeof)
typedef struct __anon_1577 {
  ULONG WriteAccess : 1; // offset: 0x0 ordinal: 0x0
  ULONG AutoRelease : 1; // offset: 0x0 ordinal: 0x1
  ULONG ForceUnlink : 1; // offset: 0x0 ordinal: 0x2
} __anon_1577;

// 0x4 bytes (sizeof)
typedef union __anon_1572 {
  struct __anon_1577 s1; // offset: 0x0 ordinal: 0x0
} __anon_1572;

// 0x4 bytes (sizeof)
typedef struct __anon_1575 {
  ULONG Revoked : 1;      // offset: 0x0 ordinal: 0x0
  ULONG Impersonated : 1; // offset: 0x0 ordinal: 0x1
} __anon_1575;

// 0x4 bytes (sizeof)
typedef union __anon_1570 {
  struct __anon_1575 s1; // offset: 0x0 ordinal: 0x0
} __anon_1570;

// 0x4 bytes (sizeof)
typedef struct __anon_1558 {
  ULONG QueueType : 3;              // offset: 0x0 ordinal: 0x0
  ULONG QueuePortType : 4;          // offset: 0x0 ordinal: 0x1
  ULONG Canceled : 1;               // offset: 0x0 ordinal: 0x2
  ULONG Ready : 1;                  // offset: 0x0 ordinal: 0x3
  ULONG ReleaseMessage : 1;         // offset: 0x0 ordinal: 0x4
  ULONG SharedQuota : 1;            // offset: 0x0 ordinal: 0x5
  ULONG ReplyWaitReply : 1;         // offset: 0x0 ordinal: 0x6
  ULONG OwnerPortReference : 1;     // offset: 0x0 ordinal: 0x7
  ULONG ReserveReference : 1;       // offset: 0x0 ordinal: 0x8
  ULONG ReceiverReference : 1;      // offset: 0x0 ordinal: 0x9
  ULONG ViewAttributeRetrieved : 1; // offset: 0x0 ordinal: 0xa
  ULONG InDispatch : 1;             // offset: 0x0 ordinal: 0xb
} __anon_1558;

// 0x4 bytes (sizeof)
typedef union __anon_1552 {
  struct __anon_1558 s1; // offset: 0x0 ordinal: 0x0
  ULONG State;           // offset: 0x0 ordinal: 0x1
} __anon_1552;

// 0x4 bytes (sizeof)
typedef struct __anon_1547 {
  ULONG Initialized : 1;          // offset: 0x0 ordinal: 0x0
  ULONG Type : 2;                 // offset: 0x0 ordinal: 0x1
  ULONG ConnectionPending : 1;    // offset: 0x0 ordinal: 0x2
  ULONG ConnectionRefused : 1;    // offset: 0x0 ordinal: 0x3
  ULONG Disconnected : 1;         // offset: 0x0 ordinal: 0x4
  ULONG Closed : 1;               // offset: 0x0 ordinal: 0x5
  ULONG NoFlushOnClose : 1;       // offset: 0x0 ordinal: 0x6
  ULONG ReturnExtendedInfo : 1;   // offset: 0x0 ordinal: 0x7
  ULONG Waitable : 1;             // offset: 0x0 ordinal: 0x8
  ULONG DynamicSecurity : 1;      // offset: 0x0 ordinal: 0x9
  ULONG Wow64CompletionList : 1;  // offset: 0x0 ordinal: 0xa
  ULONG Lpc : 1;                  // offset: 0x0 ordinal: 0xb
  ULONG LpcToLpc : 1;             // offset: 0x0 ordinal: 0xc
  ULONG HasCompletionList : 1;    // offset: 0x0 ordinal: 0xd
  ULONG HadCompletionList : 1;    // offset: 0x0 ordinal: 0xe
  ULONG EnableCompletionList : 1; // offset: 0x0 ordinal: 0xf
} __anon_1547;

// 0x4 bytes (sizeof)
typedef union __anon_1539 {
  struct __anon_1547 s1; // offset: 0x0 ordinal: 0x0
  ULONG State;           // offset: 0x0 ordinal: 0x1
} __anon_1539;

// 0x4 bytes (sizeof)
typedef struct __anon_1523 {
  ULONG Internal : 1; // offset: 0x0 ordinal: 0x0
  ULONG Secure : 1;   // offset: 0x0 ordinal: 0x1
} __anon_1523;

// 0x4 bytes (sizeof)
typedef union __anon_1524 {
  struct __anon_1523 s1; // offset: 0x0 ordinal: 0x0
} __anon_1524;

// 0x8 bytes (sizeof)
typedef struct _BLOB_COUNTERS {
  ULONG CreatedObjects; // offset: 0x0 ordinal: 0x0
  ULONG DeletedObjects; // offset: 0x4 ordinal: 0x1
} _BLOB_COUNTERS;

// 0x8 bytes (sizeof)
typedef struct _ALPC_MESSAGE_ATTRIBUTES {
  ULONG AllocatedAttributes; // offset: 0x0 ordinal: 0x0
  ULONG ValidAttributes;     // offset: 0x4 ordinal: 0x1
} _ALPC_MESSAGE_ATTRIBUTES;

// 0x4 bytes (sizeof)
typedef union __anon_1510 {
  struct __anon_1509 s2; // offset: 0x0 ordinal: 0x0
  ULONG ZeroInit;        // offset: 0x0 ordinal: 0x1
} __anon_1510;

// 0x4 bytes (sizeof)
typedef union __anon_1508 {
  struct __anon_1507 s1; // offset: 0x0 ordinal: 0x0
  ULONG Length;          // offset: 0x0 ordinal: 0x1
} __anon_1508;

// 0x10 bytes (sizeof)
typedef struct _HEAP_EXTENDED_ENTRY {
  VOID *Reserved;               // offset: 0x0 ordinal: 0x0
  USHORT FunctionIndex;         // offset: 0x8 ordinal: 0x1
  USHORT ContextValue;          // offset: 0xa ordinal: 0x2
  ULONG InterceptorValue;       // offset: 0x8 ordinal: 0x3
  USHORT UnusedBytesLength;     // offset: 0xc ordinal: 0x4
  UCHAR EntryOffset;            // offset: 0xe ordinal: 0x5
  UCHAR ExtendedBlockSignature; // offset: 0xf ordinal: 0x6
} _HEAP_EXTENDED_ENTRY;

// 0x20 bytes (sizeof)
typedef struct VACB_LEVEL_ALLOCATION_LIST {
  struct _LIST_ENTRY VacbLevelList; // offset: 0x0 ordinal: 0x0
  VOID *VacbLevelWithBcbListHeads;  // offset: 0x10 ordinal: 0x1
  ULONG VacbLevelsAllocated;        // offset: 0x18 ordinal: 0x2
} VACB_LEVEL_ALLOCATION_LIST;

// 0x20 bytes (sizeof)
typedef struct _CC_ASYNC_READ_CONTEXT {
  UCHAR (*CompletionRoutine)(VOID *); // offset: 0x0 ordinal: 0x0
  VOID *Context;                      // offset: 0x8 ordinal: 0x1
  struct _MDL *Mdl;                   // offset: 0x10 ordinal: 0x2
  CHAR RequestorMode;                 // offset: 0x18 ordinal: 0x3
  ULONG NestingLevel;                 // offset: 0x1c ordinal: 0x4
} _CC_ASYNC_READ_CONTEXT;

// 0x4 bytes (sizeof)
typedef struct __anon_1469 {
  ULONG Reason; // offset: 0x0 ordinal: 0x0
} __anon_1469;

// 0x10 bytes (sizeof)
typedef struct _VACB_ARRAY_HEADER {
  ULONG VacbArrayIndex;     // offset: 0x0 ordinal: 0x0
  ULONG MappingCount;       // offset: 0x4 ordinal: 0x1
  ULONG HighestMappedIndex; // offset: 0x8 ordinal: 0x2
  ULONG Reserved;           // offset: 0xc ordinal: 0x3
} _VACB_ARRAY_HEADER;

// 0x4 bytes (sizeof)
typedef struct _PRIVATE_CACHE_MAP_FLAGS {
  ULONG DontUse : 16;           // offset: 0x0 ordinal: 0x0
  ULONG ReadAheadActive : 1;    // offset: 0x0 ordinal: 0x1
  ULONG ReadAheadEnabled : 1;   // offset: 0x0 ordinal: 0x2
  ULONG PagePriority : 3;       // offset: 0x0 ordinal: 0x3
  ULONG PipelineReadAheads : 1; // offset: 0x0 ordinal: 0x4
  ULONG Available : 10;         // offset: 0x0 ordinal: 0x5
} _PRIVATE_CACHE_MAP_FLAGS;

// 0x4 bytes (sizeof)
typedef union _POP_FX_DEVICE_STATUS {
  LONG Value;                     // offset: 0x0 ordinal: 0x0
  ULONG SystemTransition : 1;     // offset: 0x0 ordinal: 0x1
  ULONG PepD0Notify : 1;          // offset: 0x0 ordinal: 0x2
  ULONG IdleTimerOn : 1;          // offset: 0x0 ordinal: 0x3
  ULONG IgnoreIdleTimeout : 1;    // offset: 0x0 ordinal: 0x4
  ULONG IrpInUse : 1;             // offset: 0x0 ordinal: 0x5
  ULONG IrpPending : 1;           // offset: 0x0 ordinal: 0x6
  ULONG DPNRDeviceNotified : 1;   // offset: 0x0 ordinal: 0x7
  ULONG DPNRReceivedFromPep : 1;  // offset: 0x0 ordinal: 0x8
  ULONG IrpFirstPendingIndex : 1; // offset: 0x0 ordinal: 0x9
  ULONG IrpLastPendingIndex : 1;  // offset: 0x0 ordinal: 0xa
  ULONG Reserved : 22;            // offset: 0x0 ordinal: 0xb
} _POP_FX_DEVICE_STATUS;

// 0x4 bytes (sizeof)
typedef union _POP_FX_PERF_FLAGS {
  LONG Value;                    // offset: 0x0 ordinal: 0x0
  ULONG Progress : 3;            // offset: 0x0 ordinal: 0x1
  ULONG Reserved : 24;           // offset: 0x0 ordinal: 0x2
  ULONG Synchronicity : 2;       // offset: 0x0 ordinal: 0x3
  ULONG RequestPepCompleted : 1; // offset: 0x0 ordinal: 0x4
  ULONG RequestSucceeded : 1;    // offset: 0x0 ordinal: 0x5
  ULONG NestedCallback : 1;      // offset: 0x0 ordinal: 0x6
} _POP_FX_PERF_FLAGS;

// 0x8 bytes (sizeof)
typedef union _POP_FX_COMPONENT_FLAGS {
  LONG Value;                     // offset: 0x0 ordinal: 0x0
  LONG Value2;                    // offset: 0x4 ordinal: 0x1
  ULONG RefCount : 30;            // offset: 0x0 ordinal: 0x2
  ULONG Idling : 1;               // offset: 0x0 ordinal: 0x3
  ULONG Active : 1;               // offset: 0x0 ordinal: 0x4
  ULONG CriticalIdleOverride : 1; // offset: 0x4 ordinal: 0x5
  ULONG ResidentOverride : 1;     // offset: 0x4 ordinal: 0x6
  ULONG Reserved : 30;            // offset: 0x4 ordinal: 0x7
} _POP_FX_COMPONENT_FLAGS;

// 0x10 bytes (sizeof)
typedef union _CPU_INFO {
  ULONG AsUINT32[4]; // offset: 0x0 ordinal: 0x0
  ULONG Eax;         // offset: 0x0 ordinal: 0x1
  ULONG Ebx;         // offset: 0x4 ordinal: 0x2
  ULONG Ecx;         // offset: 0x8 ordinal: 0x3
  ULONG Edx;         // offset: 0xc ordinal: 0x4
} _CPU_INFO;

// 0x4 bytes (sizeof)
typedef union _PEP_ACPI_RESOURCE_FLAGS {
  ULONG AsULong;            // offset: 0x0 ordinal: 0x0
  ULONG Shared : 1;         // offset: 0x0 ordinal: 0x1
  ULONG Wake : 1;           // offset: 0x0 ordinal: 0x2
  ULONG ResourceUsage : 1;  // offset: 0x0 ordinal: 0x3
  ULONG SlaveMode : 1;      // offset: 0x0 ordinal: 0x4
  ULONG AddressingMode : 1; // offset: 0x0 ordinal: 0x5
  ULONG SharedMode : 1;     // offset: 0x0 ordinal: 0x6
  ULONG Reserved : 26;      // offset: 0x0 ordinal: 0x7
} _PEP_ACPI_RESOURCE_FLAGS;

// 0x28 bytes (sizeof)
typedef struct _PEP_ACPI_SPB_RESOURCE {
  enum _PEP_ACPI_RESOURCE_TYPE Type;          // offset: 0x0 ordinal: 0x0
  union _PEP_ACPI_RESOURCE_FLAGS Flags;       // offset: 0x4 ordinal: 0x1
  USHORT TypeSpecificFlags;                   // offset: 0x8 ordinal: 0x2
  UCHAR ResourceSourceIndex;                  // offset: 0xa ordinal: 0x3
  struct _UNICODE_STRING *ResourceSourceName; // offset: 0x10 ordinal: 0x4
  CHAR *VendorData;                           // offset: 0x18 ordinal: 0x5
  USHORT VendorDataLength;                    // offset: 0x20 ordinal: 0x6
} _PEP_ACPI_SPB_RESOURCE;

// 0x48 bytes (sizeof)
typedef struct _PEP_ACPI_GPIO_RESOURCE {
  enum _PEP_ACPI_RESOURCE_TYPE Type;           // offset: 0x0 ordinal: 0x0
  union _PEP_ACPI_RESOURCE_FLAGS Flags;        // offset: 0x4 ordinal: 0x1
  enum _KINTERRUPT_MODE InterruptType;         // offset: 0x8 ordinal: 0x2
  enum _KINTERRUPT_POLARITY InterruptPolarity; // offset: 0xc ordinal: 0x3
  enum _GPIO_PIN_CONFIG_TYPE PinConfig;        // offset: 0x10 ordinal: 0x4
  enum _GPIO_PIN_IORESTRICTION_TYPE
      IoRestrictionType;                      // offset: 0x14 ordinal: 0x5
  USHORT DriveStrength;                       // offset: 0x18 ordinal: 0x6
  USHORT DebounceTimeout;                     // offset: 0x1a ordinal: 0x7
  USHORT *PinTable;                           // offset: 0x20 ordinal: 0x8
  USHORT PinCount;                            // offset: 0x28 ordinal: 0x9
  UCHAR ResourceSourceIndex;                  // offset: 0x2a ordinal: 0xa
  struct _UNICODE_STRING *ResourceSourceName; // offset: 0x30 ordinal: 0xb
  UCHAR *VendorData;                          // offset: 0x38 ordinal: 0xc
  USHORT VendorDataLength;                    // offset: 0x40 ordinal: 0xd
} _PEP_ACPI_GPIO_RESOURCE;

// 0x38 bytes (sizeof)
typedef struct _PEP_ACPI_SPB_UART_RESOURCE {
  struct _PEP_ACPI_SPB_RESOURCE SpbCommon; // offset: 0x0 ordinal: 0x0
  ULONG BaudRate;                          // offset: 0x28 ordinal: 0x1
  USHORT RxBufferSize;                     // offset: 0x2c ordinal: 0x2
  USHORT TxBufferSize;                     // offset: 0x2e ordinal: 0x3
  UCHAR Parity;                            // offset: 0x30 ordinal: 0x4
  UCHAR LinesInUse;                        // offset: 0x31 ordinal: 0x5
} _PEP_ACPI_SPB_UART_RESOURCE;

// 0x38 bytes (sizeof)
typedef struct _PEP_ACPI_SPB_SPI_RESOURCE {
  struct _PEP_ACPI_SPB_RESOURCE SpbCommon; // offset: 0x0 ordinal: 0x0
  ULONG ConnectionSpeed;                   // offset: 0x28 ordinal: 0x1
  UCHAR DataBitLength;                     // offset: 0x2c ordinal: 0x2
  UCHAR Phase;                             // offset: 0x2d ordinal: 0x3
  UCHAR Polarity;                          // offset: 0x2e ordinal: 0x4
  USHORT DeviceSelection;                  // offset: 0x30 ordinal: 0x5
} _PEP_ACPI_SPB_SPI_RESOURCE;

// 0x30 bytes (sizeof)
typedef struct _PEP_ACPI_SPB_I2C_RESOURCE {
  struct _PEP_ACPI_SPB_RESOURCE SpbCommon; // offset: 0x0 ordinal: 0x0
  ULONG ConnectionSpeed;                   // offset: 0x28 ordinal: 0x1
  USHORT SlaveAddress;                     // offset: 0x2c ordinal: 0x2
} _PEP_ACPI_SPB_I2C_RESOURCE;

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
typedef struct _PPC_DBGKD_CONTROL_SET {
  ULONG Continue;           // offset: 0x0 ordinal: 0x0
  ULONG CurrentSymbolStart; // offset: 0x4 ordinal: 0x1
  ULONG CurrentSymbolEnd;   // offset: 0x8 ordinal: 0x2
} _PPC_DBGKD_CONTROL_SET;

// 0xc bytes (sizeof)
typedef struct _ARMCE_DBGKD_CONTROL_SET {
  ULONG Continue;           // offset: 0x0 ordinal: 0x0
  ULONG CurrentSymbolStart; // offset: 0x4 ordinal: 0x1
  ULONG CurrentSymbolEnd;   // offset: 0x8 ordinal: 0x2
} _ARMCE_DBGKD_CONTROL_SET;

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

// 0xc bytes (sizeof)
typedef struct _DBGKD_CONTEXT_EX {
  ULONG Offset;      // offset: 0x0 ordinal: 0x0
  ULONG ByteCount;   // offset: 0x4 ordinal: 0x1
  ULONG BytesCopied; // offset: 0x8 ordinal: 0x2
} _DBGKD_CONTEXT_EX;

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

// 0x8c bytes (sizeof)
typedef struct _X86_KTRAP_FRAME_BLUE {
  ULONG DbgEbp;               // offset: 0x0 ordinal: 0x0
  ULONG DbgEip;               // offset: 0x4 ordinal: 0x1
  ULONG DbgArgMark;           // offset: 0x8 ordinal: 0x2
  USHORT TempSegCs;           // offset: 0xc ordinal: 0x3
  UCHAR Logging;              // offset: 0xe ordinal: 0x4
  UCHAR FrameType;            // offset: 0xf ordinal: 0x5
  ULONG TempEsp;              // offset: 0x10 ordinal: 0x6
  ULONG Dr0;                  // offset: 0x14 ordinal: 0x7
  ULONG Dr1;                  // offset: 0x18 ordinal: 0x8
  ULONG Dr2;                  // offset: 0x1c ordinal: 0x9
  ULONG Dr3;                  // offset: 0x20 ordinal: 0xa
  ULONG Dr6;                  // offset: 0x24 ordinal: 0xb
  ULONG Dr7;                  // offset: 0x28 ordinal: 0xc
  ULONG SegGs;                // offset: 0x2c ordinal: 0xd
  ULONG SegEs;                // offset: 0x30 ordinal: 0xe
  ULONG SegDs;                // offset: 0x34 ordinal: 0xf
  ULONG Edx;                  // offset: 0x38 ordinal: 0x10
  ULONG Ecx;                  // offset: 0x3c ordinal: 0x11
  ULONG Eax;                  // offset: 0x40 ordinal: 0x12
  UCHAR PreviousPreviousMode; // offset: 0x44 ordinal: 0x13
  UCHAR EntropyQueueDpc;      // offset: 0x45 ordinal: 0x14
  UCHAR Reserved[2];          // offset: 0x46 ordinal: 0x15
  ULONG MxCsr;                // offset: 0x48 ordinal: 0x16
  ULONG ExceptionList;        // offset: 0x4c ordinal: 0x17
  ULONG SegFs;                // offset: 0x50 ordinal: 0x18
  ULONG Edi;                  // offset: 0x54 ordinal: 0x19
  ULONG Esi;                  // offset: 0x58 ordinal: 0x1a
  ULONG Ebx;                  // offset: 0x5c ordinal: 0x1b
  ULONG Ebp;                  // offset: 0x60 ordinal: 0x1c
  ULONG ErrCode;              // offset: 0x64 ordinal: 0x1d
  ULONG Eip;                  // offset: 0x68 ordinal: 0x1e
  ULONG SegCs;                // offset: 0x6c ordinal: 0x1f
  ULONG EFlags;               // offset: 0x70 ordinal: 0x20
  ULONG HardwareEsp;          // offset: 0x74 ordinal: 0x21
  ULONG HardwareSegSs;        // offset: 0x78 ordinal: 0x22
  ULONG V86Es;                // offset: 0x7c ordinal: 0x23
  ULONG V86Ds;                // offset: 0x80 ordinal: 0x24
  ULONG V86Fs;                // offset: 0x84 ordinal: 0x25
  ULONG V86Gs;                // offset: 0x88 ordinal: 0x26
} _X86_KTRAP_FRAME_BLUE;

// 0x8c bytes (sizeof)
typedef struct _X86_KTRAP_FRAME {
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
  UCHAR PreviousPreviousMode; // offset: 0x48 ordinal: 0x12
  UCHAR EntropyQueueDpc;      // offset: 0x49 ordinal: 0x13
  UCHAR Reserved[2];          // offset: 0x4a ordinal: 0x14
  ULONG ExceptionList;        // offset: 0x4c ordinal: 0x15
  ULONG SegFs;                // offset: 0x50 ordinal: 0x16
  ULONG Edi;                  // offset: 0x54 ordinal: 0x17
  ULONG Esi;                  // offset: 0x58 ordinal: 0x18
  ULONG Ebx;                  // offset: 0x5c ordinal: 0x19
  ULONG Ebp;                  // offset: 0x60 ordinal: 0x1a
  ULONG ErrCode;              // offset: 0x64 ordinal: 0x1b
  ULONG Eip;                  // offset: 0x68 ordinal: 0x1c
  ULONG SegCs;                // offset: 0x6c ordinal: 0x1d
  ULONG EFlags;               // offset: 0x70 ordinal: 0x1e
  ULONG HardwareEsp;          // offset: 0x74 ordinal: 0x1f
  ULONG HardwareSegSs;        // offset: 0x78 ordinal: 0x20
  ULONG V86Es;                // offset: 0x7c ordinal: 0x21
  ULONG V86Ds;                // offset: 0x80 ordinal: 0x22
  ULONG V86Fs;                // offset: 0x84 ordinal: 0x23
  ULONG V86Gs;                // offset: 0x88 ordinal: 0x24
} _X86_KTRAP_FRAME;

// 0x10 bytes (sizeof)
typedef struct _PNP_ASSIGN_RESOURCES_CONTEXT {
  ULONG IncludeFailedDevices;           // offset: 0x0 ordinal: 0x0
  ULONG DeviceCount;                    // offset: 0x4 ordinal: 0x1
  struct _DEVICE_OBJECT *DeviceList[1]; // offset: 0x8 ordinal: 0x2
} _PNP_ASSIGN_RESOURCES_CONTEXT;

typedef VOID (*__anon_1316)(VOID *, ULONG, UCHAR, VOID *);

// 0x8 bytes (sizeof)
typedef struct __anon_1306 {
  ULONG NotificationCode; // offset: 0x0 ordinal: 0x0
  ULONG NotificationData; // offset: 0x4 ordinal: 0x1
} __anon_1306;

// 0x8 bytes (sizeof)
typedef struct _POP_FX_DEPENDENT {
  ULONG Index;         // offset: 0x0 ordinal: 0x0
  ULONG ProviderIndex; // offset: 0x4 ordinal: 0x1
} _POP_FX_DEPENDENT;

// 0x8 bytes (sizeof)
typedef struct _POP_FX_PROVIDER {
  ULONG Index;      // offset: 0x0 ordinal: 0x0
  UCHAR Activating; // offset: 0x4 ordinal: 0x1
} _POP_FX_PROVIDER;

typedef ULONG (*__anon_1297)(VOID *);

typedef ULONG (*__anon_1296)(VOID *, enum PROFILE_DEPARTURE_STYLE);

// 0x30 bytes (sizeof)
typedef struct DOCK_INTERFACE {
  USHORT Size;                          // offset: 0x0 ordinal: 0x0
  USHORT Version;                       // offset: 0x2 ordinal: 0x1
  VOID *Context;                        // offset: 0x8 ordinal: 0x2
  VOID (*InterfaceReference)(VOID *);   // offset: 0x10 ordinal: 0x3
  VOID (*InterfaceDereference)(VOID *); // offset: 0x18 ordinal: 0x4
  ULONG(*ProfileDepartureSetMode)
  (VOID *, enum PROFILE_DEPARTURE_STYLE);  // offset: 0x20 ordinal: 0x5
  ULONG (*ProfileDepartureUpdate)(VOID *); // offset: 0x28 ordinal: 0x6
} DOCK_INTERFACE;

typedef VOID (*__anon_1274)(VOID *, ULONG, UCHAR);

typedef VOID (*__anon_1272)(VOID *, ULONG, ULONG);

typedef UCHAR (*__anon_1266)(struct PEPHANDLE__ *, ULONG, VOID *);

typedef UCHAR (*__anon_1265)(ULONG, VOID *);

// 0x68 bytes (sizeof)
typedef struct _PO_DEVICE_NOTIFY {
  struct _LIST_ENTRY Link;             // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY PowerChildren;    // offset: 0x10 ordinal: 0x1
  struct _LIST_ENTRY PowerParents;     // offset: 0x20 ordinal: 0x2
  struct _DEVICE_OBJECT *TargetDevice; // offset: 0x30 ordinal: 0x3
  UCHAR OrderLevel;                    // offset: 0x38 ordinal: 0x4
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x40 ordinal: 0x5
  USHORT *DeviceName;                  // offset: 0x48 ordinal: 0x6
  USHORT *DriverName;                  // offset: 0x50 ordinal: 0x7
  ULONG ChildCount;                    // offset: 0x58 ordinal: 0x8
  ULONG ActiveChild;                   // offset: 0x5c ordinal: 0x9
  ULONG ParentCount;                   // offset: 0x60 ordinal: 0xa
  ULONG ActiveParent;                  // offset: 0x64 ordinal: 0xb
} _PO_DEVICE_NOTIFY;

// 0x10 bytes (sizeof)
typedef struct __anon_1271 {
  struct _PO_DEVICE_NOTIFY *NotifyDevice; // offset: 0x0 ordinal: 0x0
  UCHAR FxDeviceActivated;                // offset: 0x8 ordinal: 0x1
} __anon_1271;

// 0x10 bytes (sizeof)
typedef struct _DEVICE_RELATIONS {
  ULONG Count;                       // offset: 0x0 ordinal: 0x0
  struct _DEVICE_OBJECT *Objects[1]; // offset: 0x8 ordinal: 0x1
} _DEVICE_RELATIONS;

// 0x8 bytes (sizeof)
typedef union __anon_1215 {
  struct _DEVICE_NODE *LegacyDeviceNode;            // offset: 0x0 ordinal: 0x0
  struct _DEVICE_RELATIONS *PendingDeviceRelations; // offset: 0x0 ordinal: 0x1
  VOID *Information;                                // offset: 0x0 ordinal: 0x2
} __anon_1215;

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

// 0x18 bytes (sizeof)
typedef struct _PORT_MESSAGE32 {
  union __anon_1508 u1; // offset: 0x0 ordinal: 0x0
  union __anon_1510 u2; // offset: 0x4 ordinal: 0x1
  union {
    struct _CLIENT_ID32 ClientId; // offset: 0x8 ordinal: 0x2
    double DoNotUseThisField;     // offset: 0x8 ordinal: 0x3
  };
  ULONG MessageId; // offset: 0x10 ordinal: 0x4
  union {
    ULONG ClientViewSize; // offset: 0x14 ordinal: 0x5
    ULONG CallbackId;     // offset: 0x14 ordinal: 0x6
  };
} _PORT_MESSAGE32;

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

// 0xc bytes (sizeof)
typedef struct _THERMAL_ZONE_COUNTERS {
  ULONG Temperature;     // offset: 0x0 ordinal: 0x0
  ULONG ThrottleLimit;   // offset: 0x4 ordinal: 0x1
  ULONG ThrottleReasons; // offset: 0x8 ordinal: 0x2
} _THERMAL_ZONE_COUNTERS;

// 0xb8 bytes (sizeof)
typedef struct _SYNCH_COUNTERS {
  ULONG SpinLockAcquireCount;                   // offset: 0x0 ordinal: 0x0
  ULONG SpinLockContentionCount;                // offset: 0x4 ordinal: 0x1
  ULONG SpinLockSpinCount;                      // offset: 0x8 ordinal: 0x2
  ULONG IpiSendRequestBroadcastCount;           // offset: 0xc ordinal: 0x3
  ULONG IpiSendRequestRoutineCount;             // offset: 0x10 ordinal: 0x4
  ULONG IpiSendSoftwareInterruptCount;          // offset: 0x14 ordinal: 0x5
  ULONG ExInitializeResourceCount;              // offset: 0x18 ordinal: 0x6
  ULONG ExReInitializeResourceCount;            // offset: 0x1c ordinal: 0x7
  ULONG ExDeleteResourceCount;                  // offset: 0x20 ordinal: 0x8
  ULONG ExecutiveResourceAcquiresCount;         // offset: 0x24 ordinal: 0x9
  ULONG ExecutiveResourceContentionsCount;      // offset: 0x28 ordinal: 0xa
  ULONG ExecutiveResourceReleaseExclusiveCount; // offset: 0x2c ordinal: 0xb
  ULONG ExecutiveResourceReleaseSharedCount;    // offset: 0x30 ordinal: 0xc
  ULONG ExecutiveResourceConvertsCount;         // offset: 0x34 ordinal: 0xd
  ULONG ExAcqResExclusiveAttempts;              // offset: 0x38 ordinal: 0xe
  ULONG ExAcqResExclusiveAcquiresExclusive;     // offset: 0x3c ordinal: 0xf
  ULONG
  ExAcqResExclusiveAcquiresExclusiveRecursive; // offset: 0x40 ordinal: 0x10
  ULONG ExAcqResExclusiveWaits;                // offset: 0x44 ordinal: 0x11
  ULONG ExAcqResExclusiveNotAcquires;          // offset: 0x48 ordinal: 0x12
  ULONG ExAcqResSharedAttempts;                // offset: 0x4c ordinal: 0x13
  ULONG ExAcqResSharedAcquiresExclusive;       // offset: 0x50 ordinal: 0x14
  ULONG ExAcqResSharedAcquiresShared;          // offset: 0x54 ordinal: 0x15
  ULONG ExAcqResSharedAcquiresSharedRecursive; // offset: 0x58 ordinal: 0x16
  ULONG ExAcqResSharedWaits;                   // offset: 0x5c ordinal: 0x17
  ULONG ExAcqResSharedNotAcquires;             // offset: 0x60 ordinal: 0x18
  ULONG ExAcqResSharedStarveExclusiveAttempts; // offset: 0x64 ordinal: 0x19
  ULONG ExAcqResSharedStarveExclusiveAcquiresExclusive; // offset: 0x68 ordinal:
                                                        // 0x1a
  ULONG
  ExAcqResSharedStarveExclusiveAcquiresShared; // offset: 0x6c ordinal: 0x1b
  ULONG ExAcqResSharedStarveExclusiveAcquiresSharedRecursive; // offset: 0x70
                                                              // ordinal: 0x1c
  ULONG ExAcqResSharedStarveExclusiveWaits;       // offset: 0x74 ordinal: 0x1d
  ULONG ExAcqResSharedStarveExclusiveNotAcquires; // offset: 0x78 ordinal: 0x1e
  ULONG ExAcqResSharedWaitForExclusiveAttempts;   // offset: 0x7c ordinal: 0x1f
  ULONG ExAcqResSharedWaitForExclusiveAcquiresExclusive; // offset: 0x80
                                                         // ordinal: 0x20
  ULONG ExAcqResSharedWaitForExclusiveAcquiresShared; // offset: 0x84 ordinal:
                                                      // 0x21
  ULONG ExAcqResSharedWaitForExclusiveAcquiresSharedRecursive; // offset: 0x88
                                                               // ordinal: 0x22
  ULONG ExAcqResSharedWaitForExclusiveWaits;       // offset: 0x8c ordinal: 0x23
  ULONG ExAcqResSharedWaitForExclusiveNotAcquires; // offset: 0x90 ordinal: 0x24
  ULONG ExSetResOwnerPointerExclusive;             // offset: 0x94 ordinal: 0x25
  ULONG ExSetResOwnerPointerSharedNew;             // offset: 0x98 ordinal: 0x26
  ULONG ExSetResOwnerPointerSharedOld;             // offset: 0x9c ordinal: 0x27
  ULONG ExTryToAcqExclusiveAttempts;               // offset: 0xa0 ordinal: 0x28
  ULONG ExTryToAcqExclusiveAcquires;               // offset: 0xa4 ordinal: 0x29
  ULONG ExBoostExclusiveOwner;                     // offset: 0xa8 ordinal: 0x2a
  ULONG ExBoostSharedOwners;                       // offset: 0xac ordinal: 0x2b
  ULONG ExEtwSynchTrackingNotificationsCount;      // offset: 0xb0 ordinal: 0x2c
  ULONG ExEtwSynchTrackingNotificationsAccountedCount; // offset: 0xb4 ordinal:
                                                       // 0x2d
} _SYNCH_COUNTERS;

// 0x10 bytes (sizeof)
typedef struct _PCW_DATA {
  VOID *Data; // offset: 0x0 ordinal: 0x0
  ULONG Size; // offset: 0x8 ordinal: 0x1
} _PCW_DATA;

// 0x4 bytes (sizeof)
typedef struct __anon_1163 {
  ULONG FileOffset; // offset: 0x0 ordinal: 0x0
} __anon_1163;

// 0x4 bytes (sizeof)
typedef union __anon_1162 {
  ULONG UserData; // offset: 0x0 ordinal: 0x0
  ULONG Next;     // offset: 0x0 ordinal: 0x1
} __anon_1162;

// 0x4 bytes (sizeof)
typedef struct __anon_1161 {
  union __anon_1162 u; // offset: 0x0 ordinal: 0x0
} __anon_1161;

// 0x4 bytes (sizeof)
typedef union __anon_1160 {
  struct __anon_1161 NewCell; // offset: 0x0 ordinal: 0x0
} __anon_1160;

// 0x8 bytes (sizeof)
typedef struct _HCELL {
  LONG Size;           // offset: 0x0 ordinal: 0x0
  union __anon_1160 u; // offset: 0x4 ordinal: 0x1
} _HCELL;

// 0x18 bytes (sizeof)
typedef struct CMP_OFFSET_ARRAY {
  ULONG FileOffset; // offset: 0x0 ordinal: 0x0
  VOID *DataBuffer; // offset: 0x8 ordinal: 0x1
  ULONG DataLength; // offset: 0x10 ordinal: 0x2
} CMP_OFFSET_ARRAY;

// 0x4 bytes (sizeof)
typedef struct _HV_GET_CELL_CONTEXT {
  union {
    ULONG Cell;            // offset: 0x0 ordinal: 0x0
    ULONG IsInTempBin : 1; // offset: 0x0 ordinal: 0x1
  };
  ULONG Reserved : 31; // offset: 0x0 ordinal: 0x2
} _HV_GET_CELL_CONTEXT;

typedef VOID *(*__anon_1122)(ULONG, UCHAR, ULONG);

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
typedef struct __anon_1095 {
  ULONG Action; // offset: 0x0 ordinal: 0x0
  VOID *Handle; // offset: 0x8 ordinal: 0x1
  LONG Status;  // offset: 0x10 ordinal: 0x2
} __anon_1095;

// 0xc bytes (sizeof)
typedef struct __anon_1093 {
  enum _CM_LOAD_FAILURE_TYPE Failure; // offset: 0x0 ordinal: 0x0
  LONG Status;                        // offset: 0x4 ordinal: 0x1
  ULONG Point;                        // offset: 0x8 ordinal: 0x2
} __anon_1093;

// 0x8 bytes (sizeof)
typedef struct _MI_CACHED_PTE {
  ULONG GlobalTimeStamp; // offset: 0x0 ordinal: 0x0
  ULONG PteIndex;        // offset: 0x4 ordinal: 0x1
  LONGLONG Long;         // offset: 0x0 ordinal: 0x2
} _MI_CACHED_PTE;

// 0x48 bytes (sizeof)
typedef struct _MI_CACHED_PTES {
  struct _MI_CACHED_PTE Bins[8]; // offset: 0x0 ordinal: 0x0
  LONG CachedPteCount;           // offset: 0x40 ordinal: 0x1
} _MI_CACHED_PTES;

// 0x4 bytes (sizeof)
typedef struct _EX_PUSH_LOCK_AUTO_EXPAND_STATE {
  ULONG Expanded : 1;      // offset: 0x0 ordinal: 0x0
  ULONG Transitioning : 1; // offset: 0x0 ordinal: 0x1
  ULONG Pageable : 1;      // offset: 0x0 ordinal: 0x2
  ULONG Value;             // offset: 0x0 ordinal: 0x3
} _EX_PUSH_LOCK_AUTO_EXPAND_STATE;

// 0x10 bytes (sizeof)
typedef struct _GUID {
  ULONG Data1;    // offset: 0x0 ordinal: 0x0
  USHORT Data2;   // offset: 0x4 ordinal: 0x1
  USHORT Data3;   // offset: 0x6 ordinal: 0x2
  UCHAR Data4[8]; // offset: 0x8 ordinal: 0x3
} _GUID;

// 0x4 bytes (sizeof)
typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS {
  ULONG Primary : 1;              // offset: 0x0 ordinal: 0x0
  ULONG ContainmentWarning : 1;   // offset: 0x0 ordinal: 0x1
  ULONG Reset : 1;                // offset: 0x0 ordinal: 0x2
  ULONG ThresholdExceeded : 1;    // offset: 0x0 ordinal: 0x3
  ULONG ResourceNotAvailable : 1; // offset: 0x0 ordinal: 0x4
  ULONG LatentError : 1;          // offset: 0x0 ordinal: 0x5
  ULONG Reserved : 26;            // offset: 0x0 ordinal: 0x6
  ULONG AsULONG;                  // offset: 0x0 ordinal: 0x7
} _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS;

// 0x4 bytes (sizeof)
typedef union _WHEA_ERROR_RECORD_HEADER_FLAGS {
  ULONG Recovered : 1;     // offset: 0x0 ordinal: 0x0
  ULONG PreviousError : 1; // offset: 0x0 ordinal: 0x1
  ULONG Simulated : 1;     // offset: 0x0 ordinal: 0x2
  ULONG Reserved : 29;     // offset: 0x0 ordinal: 0x3
  ULONG AsULONG;           // offset: 0x0 ordinal: 0x4
} _WHEA_ERROR_RECORD_HEADER_FLAGS;

// 0x4 bytes (sizeof)
typedef union _WHEA_ERROR_RECORD_HEADER_VALIDBITS {
  ULONG PlatformId : 1;  // offset: 0x0 ordinal: 0x0
  ULONG Timestamp : 1;   // offset: 0x0 ordinal: 0x1
  ULONG PartitionId : 1; // offset: 0x0 ordinal: 0x2
  ULONG Reserved : 29;   // offset: 0x0 ordinal: 0x3
  ULONG AsULONG;         // offset: 0x0 ordinal: 0x4
} _WHEA_ERROR_RECORD_HEADER_VALIDBITS;

// 0x4 bytes (sizeof)
typedef union _WHEA_ERROR_PACKET_FLAGS {
  ULONG PreviousError : 1;           // offset: 0x0 ordinal: 0x0
  ULONG Reserved1 : 1;               // offset: 0x0 ordinal: 0x1
  ULONG HypervisorError : 1;         // offset: 0x0 ordinal: 0x2
  ULONG Simulated : 1;               // offset: 0x0 ordinal: 0x3
  ULONG PlatformPfaControl : 1;      // offset: 0x0 ordinal: 0x4
  ULONG PlatformDirectedOffline : 1; // offset: 0x0 ordinal: 0x5
  ULONG Reserved2 : 26;              // offset: 0x0 ordinal: 0x6
  ULONG AsULONG;                     // offset: 0x0 ordinal: 0x7
} _WHEA_ERROR_PACKET_FLAGS;

// 0x4 bytes (sizeof)
typedef struct __anon_1031 {
  ULONG FilePointerIndex : 9; // offset: 0x0 ordinal: 0x0
  ULONG HardFault : 1;        // offset: 0x0 ordinal: 0x1
  ULONG Spare1 : 2;           // offset: 0x0 ordinal: 0x2
} __anon_1031;

// 0x4 bytes (sizeof)
typedef struct __anon_1030 {
  ULONG FilePointerIndex : 9; // offset: 0x0 ordinal: 0x0
  ULONG HardFault : 1;        // offset: 0x0 ordinal: 0x1
  ULONG Image : 1;            // offset: 0x0 ordinal: 0x2
  ULONG Spare0 : 1;           // offset: 0x0 ordinal: 0x3
} __anon_1030;

// 0x4 bytes (sizeof)
typedef union _MM_PAGE_ACCESS_INFO_FLAGS {
  struct __anon_1030 File;    // offset: 0x0 ordinal: 0x0
  struct __anon_1031 Private; // offset: 0x0 ordinal: 0x1
} _MM_PAGE_ACCESS_INFO_FLAGS;

// 0x10 bytes (sizeof)
typedef struct _IO_PRIORITY_INFO {
  ULONG Size;                        // offset: 0x0 ordinal: 0x0
  ULONG ThreadPriority;              // offset: 0x4 ordinal: 0x1
  ULONG PagePriority;                // offset: 0x8 ordinal: 0x2
  enum _IO_PRIORITY_HINT IoPriority; // offset: 0xc ordinal: 0x3
} _IO_PRIORITY_INFO;

// 0x18 bytes (sizeof)
typedef struct _ECP_LIST {
  ULONG Signature;            // offset: 0x0 ordinal: 0x0
  ULONG Flags;                // offset: 0x4 ordinal: 0x1
  struct _LIST_ENTRY EcpList; // offset: 0x8 ordinal: 0x2
} _ECP_LIST;

// 0x20 bytes (sizeof)
typedef struct _IO_DRIVER_CREATE_CONTEXT {
  SHORT Size;                                 // offset: 0x0 ordinal: 0x0
  struct _ECP_LIST *ExtraCreateParameter;     // offset: 0x8 ordinal: 0x1
  VOID *DeviceObjectHint;                     // offset: 0x10 ordinal: 0x2
  struct _TXN_PARAMETER_BLOCK *TxnParameters; // offset: 0x18 ordinal: 0x3
} _IO_DRIVER_CREATE_CONTEXT;

// 0x8 bytes (sizeof)
typedef struct _OBJECT_HANDLE_INFORMATION {
  ULONG HandleAttributes; // offset: 0x0 ordinal: 0x0
  ULONG GrantedAccess;    // offset: 0x4 ordinal: 0x1
} _OBJECT_HANDLE_INFORMATION;

// 0x10 bytes (sizeof)
typedef struct _GENERIC_MAPPING {
  ULONG GenericRead;    // offset: 0x0 ordinal: 0x0
  ULONG GenericWrite;   // offset: 0x4 ordinal: 0x1
  ULONG GenericExecute; // offset: 0x8 ordinal: 0x2
  ULONG GenericAll;     // offset: 0xc ordinal: 0x3
} _GENERIC_MAPPING;

// 0x4 bytes (sizeof)
typedef struct __anon_989 {
  ULONG ChannelsHotCold : 1; // offset: 0x0 ordinal: 0x0
  ULONG Spare : 31;          // offset: 0x0 ordinal: 0x1
} __anon_989;

// 0x20 bytes (sizeof)
typedef struct _MI_AVAILABLE_PAGE_WAIT_STATES {
  struct _KEVENT Event; // offset: 0x0 ordinal: 0x0
  ULONG EventSets;      // offset: 0x18 ordinal: 0x1
} _MI_AVAILABLE_PAGE_WAIT_STATES;

// 0x4 bytes (sizeof)
typedef struct _MI_PARTITION_FLAGS {
  ULONG BeingDeleted : 1;      // offset: 0x0 ordinal: 0x0
  ULONG ObjectInitialized : 1; // offset: 0x0 ordinal: 0x1
} _MI_PARTITION_FLAGS;

// 0x50 bytes (sizeof)
typedef struct _MI_PARTITION_STATISTICS {
  ULONG DeleteYield;                  // offset: 0x0 ordinal: 0x0
  ULONG DeleteBad;                    // offset: 0x4 ordinal: 0x1
  ULONG DeleteTrulyBad;               // offset: 0x8 ordinal: 0x2
  ULONG DeleteLargePage;              // offset: 0xc ordinal: 0x3
  ULONG DeleteLargePageRetry;         // offset: 0x10 ordinal: 0x4
  ULONG DeleteZeroFree;               // offset: 0x14 ordinal: 0x5
  ULONG DeleteTransition;             // offset: 0x18 ordinal: 0x6
  ULONG DeleteStandbyReferenced;      // offset: 0x1c ordinal: 0x7
  ULONG DeleteStandbyRelinkFailed;    // offset: 0x20 ordinal: 0x8
  ULONG DeleteStandbySharedPagefile;  // offset: 0x24 ordinal: 0x9
  ULONG DeleteStandbySharedFile;      // offset: 0x28 ordinal: 0xa
  ULONG DeleteModifiedReferenced;     // offset: 0x2c ordinal: 0xb
  ULONG DeleteModified;               // offset: 0x30 ordinal: 0xc
  ULONG DeleteModifiedNoWrite;        // offset: 0x34 ordinal: 0xd
  ULONG DeleteModifiedSharedPagefile; // offset: 0x38 ordinal: 0xe
  ULONG DeleteModifiedSharedFile;     // offset: 0x3c ordinal: 0xf
  ULONG DeleteActiveSharedPagefile1;  // offset: 0x40 ordinal: 0x10
  ULONG DeleteActiveSharedPagefile2;  // offset: 0x44 ordinal: 0x11
  ULONG DeleteActiveSharedFile;       // offset: 0x48 ordinal: 0x12
  ULONG DeleteWriteDelay;             // offset: 0x4c ordinal: 0x13
} _MI_PARTITION_STATISTICS;

// 0x4 bytes (sizeof)
typedef union __anon_939 {
  ULONG LongFlags;                  // offset: 0x0 ordinal: 0x0
  struct _MI_PARTITION_FLAGS Flags; // offset: 0x0 ordinal: 0x1
} __anon_939;

// 0x4 bytes (sizeof)
typedef struct _MODWRITER_FLAGS {
  ULONG KeepForever : 1;        // offset: 0x0 ordinal: 0x0
  ULONG Networked : 1;          // offset: 0x0 ordinal: 0x1
  ULONG IoPriority : 3;         // offset: 0x0 ordinal: 0x2
  ULONG ModifiedStoreWrite : 1; // offset: 0x0 ordinal: 0x3
} _MODWRITER_FLAGS;

// 0x8 bytes (sizeof)
typedef struct _MI_EXTRA_IMAGE_INFORMATION {
  ULONG SizeOfHeaders; // offset: 0x0 ordinal: 0x0
  ULONG SizeOfImage;   // offset: 0x4 ordinal: 0x1
} _MI_EXTRA_IMAGE_INFORMATION;

// 0x28 bytes (sizeof)
typedef struct _MI_CONTROL_AREA_WAIT_BLOCK {
  struct _MI_CONTROL_AREA_WAIT_BLOCK *Next; // offset: 0x0 ordinal: 0x0
  ULONG WaitReason;                         // offset: 0x8 ordinal: 0x1
  ULONG WaitResponse;                       // offset: 0xc ordinal: 0x2
  struct _KGATE Gate;                       // offset: 0x10 ordinal: 0x3
} _MI_CONTROL_AREA_WAIT_BLOCK;

// 0x4 bytes (sizeof)
typedef struct _MMSECTION_FLAGS2 {
  ULONG PartitionId : 10;        // offset: 0x0 ordinal: 0x0
  ULONG NumberOfChildViews : 22; // offset: 0x0 ordinal: 0x1
} _MMSECTION_FLAGS2;

// 0x4 bytes (sizeof)
typedef union __anon_889 {
  struct _MMINPAGE_FLAGS e1; // offset: 0x0 ordinal: 0x0
  ULONG LongFlags;           // offset: 0x0 ordinal: 0x1
} __anon_889;

// 0x4 bytes (sizeof)
typedef union __anon_888 {
  ULONG ImagePteOffset; // offset: 0x0 ordinal: 0x0
  ULONG TossPage;       // offset: 0x0 ordinal: 0x1
} __anon_888;

// 0x4 bytes (sizeof)
typedef struct _MMSECURE_FLAGS {
  ULONG ReadOnly : 1;            // offset: 0x0 ordinal: 0x0
  ULONG ReadWrite : 1;           // offset: 0x0 ordinal: 0x1
  ULONG SecNoChange : 1;         // offset: 0x0 ordinal: 0x2
  ULONG NoDelete : 1;            // offset: 0x0 ordinal: 0x3
  ULONG RequiresPteReversal : 1; // offset: 0x0 ordinal: 0x4
  ULONG ExclusiveSecure : 1;     // offset: 0x0 ordinal: 0x5
  ULONG Spare : 6;               // offset: 0x0 ordinal: 0x6
} _MMSECURE_FLAGS;

// 0x4 bytes (sizeof)
typedef union __anon_885 {
  ULONG ReferenceCount;     // offset: 0x0 ordinal: 0x0
  ULONG NumberOfPtesToFree; // offset: 0x0 ordinal: 0x1
} __anon_885;

// 0x4 bytes (sizeof)
typedef union __anon_881 {
  ULONG LongFlags;                // offset: 0x0 ordinal: 0x0
  struct _MMSECTION_FLAGS2 Flags; // offset: 0x0 ordinal: 0x1
} __anon_881;

// 0x4 bytes (sizeof)
typedef union __anon_880 {
  ULONG LongFlags;               // offset: 0x0 ordinal: 0x0
  struct _MMSECTION_FLAGS Flags; // offset: 0x0 ordinal: 0x1
} __anon_880;

// 0x8 bytes (sizeof)
typedef union __anon_876 {
  struct _MMSECURE_FLAGS Flags; // offset: 0x0 ordinal: 0x0
  ULONG FlagsLong;              // offset: 0x0 ordinal: 0x1
  VOID *StartVa;                // offset: 0x0 ordinal: 0x2
} __anon_876;

// 0x10 bytes (sizeof)
typedef struct _MMADDRESS_LIST {
  union __anon_876 u1; // offset: 0x0 ordinal: 0x0
  VOID *EndVa;         // offset: 0x8 ordinal: 0x1
} _MMADDRESS_LIST;

// 0xc bytes (sizeof)
typedef struct __anon_855 {
  ULONG DataSize;  // offset: 0x0 ordinal: 0x0
  ULONG Reserved1; // offset: 0x4 ordinal: 0x1
  ULONG Reserved2; // offset: 0x8 ordinal: 0x2
} __anon_855;

// 0xc bytes (sizeof)
typedef struct __anon_854 {
  ULONG Start;    // offset: 0x0 ordinal: 0x0
  ULONG Length;   // offset: 0x4 ordinal: 0x1
  ULONG Reserved; // offset: 0x8 ordinal: 0x2
} __anon_854;

// 0xc bytes (sizeof)
typedef struct __anon_853 {
  ULONG Channel;       // offset: 0x0 ordinal: 0x0
  ULONG RequestLine;   // offset: 0x4 ordinal: 0x1
  UCHAR TransferWidth; // offset: 0x8 ordinal: 0x2
  UCHAR Reserved1;     // offset: 0x9 ordinal: 0x3
  UCHAR Reserved2;     // offset: 0xa ordinal: 0x4
  UCHAR Reserved3;     // offset: 0xb ordinal: 0x5
} __anon_853;

// 0xc bytes (sizeof)
typedef struct __anon_852 {
  ULONG Channel;   // offset: 0x0 ordinal: 0x0
  ULONG Port;      // offset: 0x4 ordinal: 0x1
  ULONG Reserved1; // offset: 0x8 ordinal: 0x2
} __anon_852;

// 0x4 bytes (sizeof)
typedef union __anon_845 {
  ULONG NumberOfChildViews; // offset: 0x0 ordinal: 0x0
} __anon_845;

// 0x4 bytes (sizeof)
typedef union __anon_844 {
  ULONG LongFlags;                            // offset: 0x0 ordinal: 0x0
  struct _MMSUBSECTION_FLAGS SubsectionFlags; // offset: 0x0 ordinal: 0x1
} __anon_844;

// 0x4 bytes (sizeof)
typedef struct _MMVAD_FLAGS1 {
  ULONG CommitCharge : 31; // offset: 0x0 ordinal: 0x0
  ULONG MemCommit : 1;     // offset: 0x0 ordinal: 0x1
} _MMVAD_FLAGS1;

// 0x4 bytes (sizeof)
typedef struct _MMVAD_FLAGS {
  ULONG VadType : 3;          // offset: 0x0 ordinal: 0x0
  ULONG Protection : 5;       // offset: 0x0 ordinal: 0x1
  ULONG PreferredNode : 6;    // offset: 0x0 ordinal: 0x2
  ULONG NoChange : 1;         // offset: 0x0 ordinal: 0x3
  ULONG PrivateMemory : 1;    // offset: 0x0 ordinal: 0x4
  ULONG Teb : 1;              // offset: 0x0 ordinal: 0x5
  ULONG PrivateFixup : 1;     // offset: 0x0 ordinal: 0x6
  ULONG ManySubsections : 1;  // offset: 0x0 ordinal: 0x7
  ULONG Spare : 12;           // offset: 0x0 ordinal: 0x8
  ULONG DeleteInProgress : 1; // offset: 0x0 ordinal: 0x9
} _MMVAD_FLAGS;

// 0xc bytes (sizeof)
typedef struct __anon_836 {
  UCHAR Class;      // offset: 0x0 ordinal: 0x0
  UCHAR Type;       // offset: 0x1 ordinal: 0x1
  UCHAR Reserved1;  // offset: 0x2 ordinal: 0x2
  UCHAR Reserved2;  // offset: 0x3 ordinal: 0x3
  ULONG IdLowPart;  // offset: 0x4 ordinal: 0x4
  ULONG IdHighPart; // offset: 0x8 ordinal: 0x5
} __anon_836;

// 0xc bytes (sizeof)
typedef struct __anon_832 {
  ULONG Priority;  // offset: 0x0 ordinal: 0x0
  ULONG Reserved1; // offset: 0x4 ordinal: 0x1
  ULONG Reserved2; // offset: 0x8 ordinal: 0x2
} __anon_832;

// 0x10 bytes (sizeof)
typedef struct __anon_831 {
  ULONG Length;       // offset: 0x0 ordinal: 0x0
  ULONG MinBusNumber; // offset: 0x4 ordinal: 0x1
  ULONG MaxBusNumber; // offset: 0x8 ordinal: 0x2
  ULONG Reserved;     // offset: 0xc ordinal: 0x3
} __anon_831;

// 0x10 bytes (sizeof)
typedef struct __anon_829 {
  ULONG RequestLine;   // offset: 0x0 ordinal: 0x0
  ULONG Reserved;      // offset: 0x4 ordinal: 0x1
  ULONG Channel;       // offset: 0x8 ordinal: 0x2
  ULONG TransferWidth; // offset: 0xc ordinal: 0x3
} __anon_829;

// 0x8 bytes (sizeof)
typedef struct __anon_828 {
  ULONG MinimumChannel; // offset: 0x0 ordinal: 0x0
  ULONG MaximumChannel; // offset: 0x4 ordinal: 0x1
} __anon_828;

// 0x4 bytes (sizeof)
typedef struct _MMVAD_FLAGS2 {
  ULONG FileOffset : 24;        // offset: 0x0 ordinal: 0x0
  ULONG Large : 1;              // offset: 0x0 ordinal: 0x1
  ULONG TrimBehind : 1;         // offset: 0x0 ordinal: 0x2
  ULONG Inherit : 1;            // offset: 0x0 ordinal: 0x3
  ULONG CopyOnWrite : 1;        // offset: 0x0 ordinal: 0x4
  ULONG NoValidationNeeded : 1; // offset: 0x0 ordinal: 0x5
  ULONG PrivateDemandZero : 1;  // offset: 0x0 ordinal: 0x6
  ULONG Spare : 2;              // offset: 0x0 ordinal: 0x7
} _MMVAD_FLAGS2;

// 0x4 bytes (sizeof)
typedef union __anon_818 {
  ULONG LongFlags1;               // offset: 0x0 ordinal: 0x0
  struct _MMVAD_FLAGS1 VadFlags1; // offset: 0x0 ordinal: 0x1
} __anon_818;

// 0x4 bytes (sizeof)
typedef union __anon_817 {
  ULONG LongFlags;              // offset: 0x0 ordinal: 0x0
  struct _MMVAD_FLAGS VadFlags; // offset: 0x0 ordinal: 0x1
} __anon_817;

// 0x4 bytes (sizeof)
typedef union __anon_808 {
  ULONG LongFlags2;               // offset: 0x0 ordinal: 0x0
  struct _MMVAD_FLAGS2 VadFlags2; // offset: 0x0 ordinal: 0x1
} __anon_808;

// 0x4 bytes (sizeof)
typedef struct _HANDLE_TABLE_ENTRY_INFO {
  ULONG AuditMask; // offset: 0x0 ordinal: 0x0
} _HANDLE_TABLE_ENTRY_INFO;

// 0x10 bytes (sizeof)
typedef struct _FS_FILTER_SECTION_SYNC_OUTPUT {
  ULONG StructureSize;        // offset: 0x0 ordinal: 0x0
  ULONG SizeReturned;         // offset: 0x4 ordinal: 0x1
  ULONG Flags;                // offset: 0x8 ordinal: 0x2
  ULONG DesiredReadAlignment; // offset: 0xc ordinal: 0x3
} _FS_FILTER_SECTION_SYNC_OUTPUT;

// 0xc bytes (sizeof)
typedef struct _SECURITY_QUALITY_OF_SERVICE {
  ULONG Length; // offset: 0x0 ordinal: 0x0
  enum _SECURITY_IMPERSONATION_LEVEL
      ImpersonationLevel;    // offset: 0x4 ordinal: 0x1
  UCHAR ContextTrackingMode; // offset: 0x8 ordinal: 0x2
  UCHAR EffectiveOnly;       // offset: 0x9 ordinal: 0x3
} _SECURITY_QUALITY_OF_SERVICE;

// 0x40 bytes (sizeof)
typedef struct _OBJECT_CREATE_INFORMATION {
  ULONG Attributes;                                 // offset: 0x0 ordinal: 0x0
  VOID *RootDirectory;                              // offset: 0x8 ordinal: 0x1
  CHAR ProbeMode;                                   // offset: 0x10 ordinal: 0x2
  ULONG PagedPoolCharge;                            // offset: 0x14 ordinal: 0x3
  ULONG NonPagedPoolCharge;                         // offset: 0x18 ordinal: 0x4
  ULONG SecurityDescriptorCharge;                   // offset: 0x1c ordinal: 0x5
  VOID *SecurityDescriptor;                         // offset: 0x20 ordinal: 0x6
  struct _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // offset: 0x28 ordinal: 0x7
  struct _SECURITY_QUALITY_OF_SERVICE
      SecurityQualityOfService; // offset: 0x30 ordinal: 0x8
} _OBJECT_CREATE_INFORMATION;

// 0xc bytes (sizeof)
typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
  ULONG BeginAddress; // offset: 0x0 ordinal: 0x0
  ULONG EndAddress;   // offset: 0x4 ordinal: 0x1
  union {
    ULONG UnwindInfoAddress; // offset: 0x8 ordinal: 0x2
    ULONG UnwindData;        // offset: 0x8 ordinal: 0x3
  };
} _IMAGE_RUNTIME_FUNCTION_ENTRY;

// 0xa0 bytes (sizeof)
typedef struct _HANDLE_TRACE_DB_ENTRY {
  struct _CLIENT_ID ClientId; // offset: 0x0 ordinal: 0x0
  VOID *Handle;               // offset: 0x10 ordinal: 0x1
  ULONG Type;                 // offset: 0x18 ordinal: 0x2
  VOID *StackTrace[16];       // offset: 0x20 ordinal: 0x3
} _HANDLE_TRACE_DB_ENTRY;

// 0x10 bytes (sizeof)
typedef struct __anon_769 {
  enum _FS_FILTER_SECTION_SYNC_TYPE SyncType; // offset: 0x0 ordinal: 0x0
  ULONG PageProtection;                       // offset: 0x4 ordinal: 0x1
  struct _FS_FILTER_SECTION_SYNC_OUTPUT
      *OutputInformation; // offset: 0x8 ordinal: 0x2
} __anon_769;

// 0x24 bytes (sizeof)
typedef struct _ETW_FILTER_PID {
  ULONG Count;   // offset: 0x0 ordinal: 0x0
  ULONG Pids[8]; // offset: 0x4 ordinal: 0x1
} _ETW_FILTER_PID;

// 0x20 bytes (sizeof)
typedef struct _PERFINFO_GROUPMASK {
  ULONG Masks[8]; // offset: 0x0 ordinal: 0x0
} _PERFINFO_GROUPMASK;

// 0xc bytes (sizeof)
typedef struct _POWER_SEQUENCE {
  ULONG SequenceD1; // offset: 0x0 ordinal: 0x0
  ULONG SequenceD2; // offset: 0x4 ordinal: 0x1
  ULONG SequenceD3; // offset: 0x8 ordinal: 0x2
} _POWER_SEQUENCE;

// 0x8 bytes (sizeof)
typedef struct __anon_667 {
  struct _POWER_SEQUENCE *PowerSequence; // offset: 0x0 ordinal: 0x0
} __anon_667;

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
  ULONG Reserved1 : 1;                     // offset: 0x4 ordinal: 0x14
  ULONG WakeFromInterrupt : 1;             // offset: 0x4 ordinal: 0x15
  ULONG Reserved : 12;                     // offset: 0x4 ordinal: 0x16
  ULONG Address;                           // offset: 0x8 ordinal: 0x17
  ULONG UINumber;                          // offset: 0xc ordinal: 0x18
  enum _DEVICE_POWER_STATE DeviceState[7]; // offset: 0x10 ordinal: 0x19
  enum _SYSTEM_POWER_STATE SystemWake;     // offset: 0x2c ordinal: 0x1a
  enum _DEVICE_POWER_STATE DeviceWake;     // offset: 0x30 ordinal: 0x1b
  ULONG D1Latency;                         // offset: 0x34 ordinal: 0x1c
  ULONG D2Latency;                         // offset: 0x38 ordinal: 0x1d
  ULONG D3Latency;                         // offset: 0x3c ordinal: 0x1e
} _DEVICE_CAPABILITIES;

// 0x8 bytes (sizeof)
typedef struct __anon_659 {
  struct _DEVICE_CAPABILITIES *Capabilities; // offset: 0x0 ordinal: 0x0
} __anon_659;

// 0x4 bytes (sizeof)
typedef struct _SYSTEM_POWER_STATE_CONTEXT {
  ULONG Reserved1 : 8;             // offset: 0x0 ordinal: 0x0
  ULONG TargetSystemState : 4;     // offset: 0x0 ordinal: 0x1
  ULONG EffectiveSystemState : 4;  // offset: 0x0 ordinal: 0x2
  ULONG CurrentSystemState : 4;    // offset: 0x0 ordinal: 0x3
  ULONG IgnoreHibernationPath : 1; // offset: 0x0 ordinal: 0x4
  ULONG PseudoTransition : 1;      // offset: 0x0 ordinal: 0x5
  ULONG Reserved2 : 10;            // offset: 0x0 ordinal: 0x6
  ULONG ContextAsUlong;            // offset: 0x0 ordinal: 0x7
} _SYSTEM_POWER_STATE_CONTEXT;

// 0x8 bytes (sizeof)
typedef struct _JOBOBJECT_WAKE_FILTER {
  ULONG HighEdgeFilter; // offset: 0x0 ordinal: 0x0
  ULONG LowEdgeFilter;  // offset: 0x4 ordinal: 0x1
} _JOBOBJECT_WAKE_FILTER;

// 0x20 bytes (sizeof)
typedef struct __anon_668 {
  union {
    ULONG SystemContext; // offset: 0x0 ordinal: 0x0
    struct _SYSTEM_POWER_STATE_CONTEXT
        SystemPowerStateContext; // offset: 0x0 ordinal: 0x1
  };
  enum _POWER_STATE_TYPE Type;    // offset: 0x8 ordinal: 0x2
  union _POWER_STATE State;       // offset: 0x10 ordinal: 0x3
  enum POWER_ACTION ShutdownType; // offset: 0x18 ordinal: 0x4
} __anon_668;

// 0x10 bytes (sizeof)
typedef struct __anon_664 {
  enum DEVICE_TEXT_TYPE DeviceTextType; // offset: 0x0 ordinal: 0x0
  ULONG LocaleId;                       // offset: 0x8 ordinal: 0x1
} __anon_664;

// 0x20 bytes (sizeof)
typedef struct __anon_661 {
  ULONG WhichSpace; // offset: 0x0 ordinal: 0x0
  VOID *Buffer;     // offset: 0x8 ordinal: 0x1
  ULONG Offset;     // offset: 0x10 ordinal: 0x2
  ULONG Length;     // offset: 0x18 ordinal: 0x3
} __anon_661;

// 0x10 bytes (sizeof)
typedef struct __anon_653 {
  ULONG SecurityInformation; // offset: 0x0 ordinal: 0x0
  VOID *SecurityDescriptor;  // offset: 0x8 ordinal: 0x1
} __anon_653;

// 0x10 bytes (sizeof)
typedef struct __anon_652 {
  ULONG SecurityInformation; // offset: 0x0 ordinal: 0x0
  ULONG Length;              // offset: 0x8 ordinal: 0x1
} __anon_652;

// 0x20 bytes (sizeof)
typedef struct __anon_651 {
  ULONG OutputBufferLength; // offset: 0x0 ordinal: 0x0
  ULONG InputBufferLength;  // offset: 0x8 ordinal: 0x1
  ULONG IoControlCode;      // offset: 0x10 ordinal: 0x2
  VOID *Type3InputBuffer;   // offset: 0x18 ordinal: 0x3
} __anon_651;

// 0x20 bytes (sizeof)
typedef struct __anon_649 {
  ULONG OutputBufferLength; // offset: 0x0 ordinal: 0x0
  ULONG InputBufferLength;  // offset: 0x8 ordinal: 0x1
  ULONG FsControlCode;      // offset: 0x10 ordinal: 0x2
  VOID *Type3InputBuffer;   // offset: 0x18 ordinal: 0x3
} __anon_649;

// 0x10 bytes (sizeof)
typedef struct __anon_648 {
  ULONG Length;                         // offset: 0x0 ordinal: 0x0
  enum _FSINFOCLASS FsInformationClass; // offset: 0x8 ordinal: 0x1
} __anon_648;

// 0x4 bytes (sizeof)
typedef struct __anon_647 {
  ULONG Length; // offset: 0x0 ordinal: 0x0
} __anon_647;

// 0x20 bytes (sizeof)
typedef struct __anon_646 {
  ULONG Length;       // offset: 0x0 ordinal: 0x0
  VOID *EaList;       // offset: 0x8 ordinal: 0x1
  ULONG EaListLength; // offset: 0x10 ordinal: 0x2
  ULONG EaIndex;      // offset: 0x18 ordinal: 0x3
} __anon_646;

// 0x20 bytes (sizeof)
typedef struct __anon_645 {
  ULONG Length;                                      // offset: 0x0 ordinal: 0x0
  enum _FILE_INFORMATION_CLASS FileInformationClass; // offset: 0x8 ordinal: 0x1
  struct _FILE_OBJECT *FileObject; // offset: 0x10 ordinal: 0x2
  UCHAR ReplaceIfExists;           // offset: 0x18 ordinal: 0x3
  UCHAR AdvanceOnly;               // offset: 0x19 ordinal: 0x4
  union {
    ULONG ClusterCount; // offset: 0x18 ordinal: 0x5
    VOID *DeleteHandle; // offset: 0x18 ordinal: 0x6
  };
} __anon_645;

// 0x10 bytes (sizeof)
typedef struct __anon_644 {
  ULONG Length;                                      // offset: 0x0 ordinal: 0x0
  enum _FILE_INFORMATION_CLASS FileInformationClass; // offset: 0x8 ordinal: 0x1
} __anon_644;

// 0x10 bytes (sizeof)
typedef struct __anon_643 {
  ULONG Length;           // offset: 0x0 ordinal: 0x0
  ULONG CompletionFilter; // offset: 0x8 ordinal: 0x1
} __anon_643;

// 0x20 bytes (sizeof)
typedef struct __anon_642 {
  ULONG Length;                     // offset: 0x0 ordinal: 0x0
  struct _UNICODE_STRING *FileName; // offset: 0x8 ordinal: 0x1
  enum _FILE_INFORMATION_CLASS
      FileInformationClass; // offset: 0x10 ordinal: 0x2
  ULONG FileIndex;          // offset: 0x18 ordinal: 0x3
} __anon_642;

// 0x10 bytes (sizeof)
typedef struct _PO_DIAG_STACK_RECORD {
  ULONG StackDepth; // offset: 0x0 ordinal: 0x0
  VOID *Stack[1];   // offset: 0x8 ordinal: 0x1
} _PO_DIAG_STACK_RECORD;

// 0x8 bytes (sizeof)
typedef struct __anon_587 {
  ULONG IdleTime;    // offset: 0x0 ordinal: 0x0
  ULONG NonIdleTime; // offset: 0x4 ordinal: 0x1
} __anon_587;

// 0x8 bytes (sizeof)
typedef union __anon_558 {
  struct __anon_587 Disk; // offset: 0x0 ordinal: 0x0
} __anon_558;

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
typedef struct __anon_654 {
  struct _VPB *Vpb;                    // offset: 0x0 ordinal: 0x0
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x8 ordinal: 0x1
} __anon_654;

// 0x20 bytes (sizeof)
typedef struct __anon_658 {
  struct _GUID *InterfaceType;  // offset: 0x0 ordinal: 0x0
  USHORT Size;                  // offset: 0x8 ordinal: 0x1
  USHORT Version;               // offset: 0xa ordinal: 0x2
  struct _INTERFACE *Interface; // offset: 0x10 ordinal: 0x3
  VOID *InterfaceSpecificData;  // offset: 0x18 ordinal: 0x4
} __anon_658;

// 0x2b0 bytes (sizeof)
typedef struct _KPRIQUEUE {
  struct _DISPATCHER_HEADER Header;     // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY EntryListHead[32]; // offset: 0x18 ordinal: 0x1
  LONG CurrentCount[32];                // offset: 0x218 ordinal: 0x2
  ULONG MaximumCount;                   // offset: 0x298 ordinal: 0x3
  struct _LIST_ENTRY ThreadListHead;    // offset: 0x2a0 ordinal: 0x4
} _KPRIQUEUE;

// 0x2b0 bytes (sizeof)
typedef struct _TRIAGE_EX_WORK_QUEUE {
  struct _KPRIQUEUE WorkPriQueue; // offset: 0x0 ordinal: 0x0
} _TRIAGE_EX_WORK_QUEUE;

// 0x20 bytes (sizeof)
typedef struct _TRIAGE_9F_POWER {
  USHORT Signature;                               // offset: 0x0 ordinal: 0x0
  USHORT Revision;                                // offset: 0x2 ordinal: 0x1
  struct _LIST_ENTRY *IrpList;                    // offset: 0x8 ordinal: 0x2
  struct _LIST_ENTRY *ThreadList;                 // offset: 0x10 ordinal: 0x3
  struct _TRIAGE_EX_WORK_QUEUE *DelayedWorkQueue; // offset: 0x18 ordinal: 0x4
} _TRIAGE_9F_POWER;

// 0x18 bytes (sizeof)
typedef struct _TRIAGE_9F_PNP {
  USHORT Signature; // offset: 0x0 ordinal: 0x0
  USHORT Revision;  // offset: 0x2 ordinal: 0x1
  struct _TRIAGE_PNP_DEVICE_COMPLETION_QUEUE
      *CompletionQueue;                           // offset: 0x8 ordinal: 0x2
  struct _TRIAGE_EX_WORK_QUEUE *DelayedWorkQueue; // offset: 0x10 ordinal: 0x3
} _TRIAGE_9F_PNP;

// 0x2d0 bytes (sizeof)
typedef struct _EX_WORK_QUEUE {
  struct _KPRIQUEUE WorkPriQueue;   // offset: 0x0 ordinal: 0x0
  struct _ENODE *Node;              // offset: 0x2b0 ordinal: 0x1
  ULONG WorkItemsProcessed;         // offset: 0x2b8 ordinal: 0x2
  ULONG WorkItemsProcessedLastPass; // offset: 0x2bc ordinal: 0x3
  LONG ThreadCount;                 // offset: 0x2c0 ordinal: 0x4
  LONG MinThreads : 31;             // offset: 0x2c4 ordinal: 0x5
  ULONG TryFailed : 1;              // offset: 0x2c4 ordinal: 0x6
  LONG MaxThreads;                  // offset: 0x2c8 ordinal: 0x7
  enum _EXQUEUEINDEX QueueIndex;    // offset: 0x2cc ordinal: 0x8
} _EX_WORK_QUEUE;

// 0x18 bytes (sizeof)
typedef struct _EXT_DELETE_PARAMETERS {
  ULONG Version;                  // offset: 0x0 ordinal: 0x0
  ULONG Reserved;                 // offset: 0x4 ordinal: 0x1
  VOID (*DeleteCallback)(VOID *); // offset: 0x8 ordinal: 0x2
  VOID *DeleteContext;            // offset: 0x10 ordinal: 0x3
} _EXT_DELETE_PARAMETERS;

// 0x10 bytes (sizeof)
typedef struct _EXT_SET_PARAMETERS_V0 {
  ULONG Version;            // offset: 0x0 ordinal: 0x0
  ULONG Reserved;           // offset: 0x4 ordinal: 0x1
  LONGLONG NoWakeTolerance; // offset: 0x8 ordinal: 0x2
} _EXT_SET_PARAMETERS_V0;

// 0x4 bytes (sizeof)
typedef struct _SINGLE_LIST_ENTRY32 {
  ULONG Next; // offset: 0x0 ordinal: 0x0
} _SINGLE_LIST_ENTRY32;

// 0x4 bytes (sizeof)
typedef struct _KFLOATING_SAVE {
  ULONG Dummy; // offset: 0x0 ordinal: 0x0
} _KFLOATING_SAVE;

// 0x18 bytes (sizeof)
typedef struct _PPM_VETO_ENTRY {
  struct _LIST_ENTRY Link; // offset: 0x0 ordinal: 0x0
  ULONG VetoReason;        // offset: 0x10 ordinal: 0x1
  ULONG ReferenceCount;    // offset: 0x14 ordinal: 0x2
} _PPM_VETO_ENTRY;

// 0x28 bytes (sizeof)
typedef struct _PPM_VETO_ACCOUNTING {
  LONG VetoPresent;                             // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY VetoListHead;              // offset: 0x8 ordinal: 0x1
  ULONG PreallocatedVetoCount;                  // offset: 0x18 ordinal: 0x2
  struct _PPM_VETO_ENTRY *PreallocatedVetoList; // offset: 0x20 ordinal: 0x3
} _PPM_VETO_ACCOUNTING;

// 0x8 bytes (sizeof)
typedef struct _PROCESSOR_IDLE_DEPENDENCY {
  ULONG ProcessorIndex;    // offset: 0x0 ordinal: 0x0
  UCHAR ExpectedState;     // offset: 0x4 ordinal: 0x1
  UCHAR AllowDeeperStates; // offset: 0x5 ordinal: 0x2
  UCHAR LooseDependency;   // offset: 0x6 ordinal: 0x3
} _PROCESSOR_IDLE_DEPENDENCY;

typedef VOID (*__anon_396)(VOID *, ULONG);

// 0x38 bytes (sizeof)
typedef struct _THERMAL_COOLING_INTERFACE {
  USHORT Size;                           // offset: 0x0 ordinal: 0x0
  USHORT Version;                        // offset: 0x2 ordinal: 0x1
  VOID *Context;                         // offset: 0x8 ordinal: 0x2
  VOID (*InterfaceReference)(VOID *);    // offset: 0x10 ordinal: 0x3
  VOID (*InterfaceDereference)(VOID *);  // offset: 0x18 ordinal: 0x4
  ULONG Flags;                           // offset: 0x20 ordinal: 0x5
  VOID (*ActiveCooling)(VOID *, UCHAR);  // offset: 0x28 ordinal: 0x6
  VOID (*PassiveCooling)(VOID *, ULONG); // offset: 0x30 ordinal: 0x7
} _THERMAL_COOLING_INTERFACE;

typedef ULONG (*__anon_394)(VOID *, ULONG);

typedef ULONG (*__anon_393)(VOID *, ULONG, ULONG);

// 0x38 bytes (sizeof)
typedef struct _FAST_MUTEX {
  LONG Count;           // offset: 0x0 ordinal: 0x0
  VOID *Owner;          // offset: 0x8 ordinal: 0x1
  ULONG Contention;     // offset: 0x10 ordinal: 0x2
  struct _KEVENT Event; // offset: 0x18 ordinal: 0x3
  ULONG OldIrql;        // offset: 0x30 ordinal: 0x4
} _FAST_MUTEX;

// 0x88 bytes (sizeof)
typedef struct _PNP_DEVICE_EVENT_LIST {
  LONG Status;                     // offset: 0x0 ordinal: 0x0
  struct _KMUTANT EventQueueMutex; // offset: 0x8 ordinal: 0x1
  struct _FAST_MUTEX Lock;         // offset: 0x40 ordinal: 0x2
  struct _LIST_ENTRY List;         // offset: 0x78 ordinal: 0x3
} _PNP_DEVICE_EVENT_LIST;

// 0xf0 bytes (sizeof)
typedef struct _HANDLE_TRACE_DEBUG_INFO {
  LONG RefCount;                            // offset: 0x0 ordinal: 0x0
  ULONG TableSize;                          // offset: 0x4 ordinal: 0x1
  ULONG BitMaskFlags;                       // offset: 0x8 ordinal: 0x2
  struct _FAST_MUTEX CloseCompactionLock;   // offset: 0x10 ordinal: 0x3
  ULONG CurrentStackIndex;                  // offset: 0x48 ordinal: 0x4
  struct _HANDLE_TRACE_DB_ENTRY TraceDb[1]; // offset: 0x50 ordinal: 0x5
} _HANDLE_TRACE_DEBUG_INFO;

// 0x40 bytes (sizeof)
typedef struct _KQUEUE {
  struct _DISPATCHER_HEADER Header;  // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY EntryListHead;  // offset: 0x18 ordinal: 0x1
  ULONG CurrentCount;                // offset: 0x28 ordinal: 0x2
  ULONG MaximumCount;                // offset: 0x2c ordinal: 0x3
  struct _LIST_ENTRY ThreadListHead; // offset: 0x30 ordinal: 0x4
} _KQUEUE;

// 0x48 bytes (sizeof)
typedef struct _ETW_REPLY_QUEUE {
  struct _KQUEUE Queue; // offset: 0x0 ordinal: 0x0
  LONG EventsLost;      // offset: 0x40 ordinal: 0x1
} _ETW_REPLY_QUEUE;

// 0x30 bytes (sizeof)
typedef struct _KWAIT_BLOCK {
  struct _LIST_ENTRY WaitListEntry; // offset: 0x0 ordinal: 0x0
  UCHAR WaitType;                   // offset: 0x10 ordinal: 0x1
  UCHAR BlockState;                 // offset: 0x11 ordinal: 0x2
  USHORT WaitKey;                   // offset: 0x12 ordinal: 0x3
  LONG SpareLong;                   // offset: 0x14 ordinal: 0x4
  union {
    struct _KTHREAD *Thread;           // offset: 0x18 ordinal: 0x5
    struct _KQUEUE *NotificationQueue; // offset: 0x18 ordinal: 0x6
  };
  VOID *Object;   // offset: 0x20 ordinal: 0x7
  VOID *SparePtr; // offset: 0x28 ordinal: 0x8
} _KWAIT_BLOCK;

// 0x8 bytes (sizeof)
typedef struct _KSCHEDULING_GROUP_POLICY {
  union {
    ULONG Value;    // offset: 0x0 ordinal: 0x0
    USHORT Weight;  // offset: 0x0 ordinal: 0x1
    USHORT MinRate; // offset: 0x0 ordinal: 0x2
  };
  USHORT MaxRate; // offset: 0x2 ordinal: 0x3
  union {
    ULONG AllFlags; // offset: 0x4 ordinal: 0x4
    ULONG Type : 1; // offset: 0x4 ordinal: 0x5
  };
  ULONG Disabled : 1; // offset: 0x4 ordinal: 0x6
  ULONG Spare1 : 30;  // offset: 0x4 ordinal: 0x7
} _KSCHEDULING_GROUP_POLICY;

// 0x10 bytes (sizeof)
typedef struct _PPM_SELECTION_MENU {
  ULONG Count;                               // offset: 0x0 ordinal: 0x0
  struct _PPM_SELECTION_MENU_ENTRY *Entries; // offset: 0x8 ordinal: 0x1
} _PPM_SELECTION_MENU;

// 0x18 bytes (sizeof)
typedef struct _PPM_SELECTION_DEPENDENCY {
  ULONG Processor;                 // offset: 0x0 ordinal: 0x0
  struct _PPM_SELECTION_MENU Menu; // offset: 0x8 ordinal: 0x1
} _PPM_SELECTION_DEPENDENCY;

// 0x18 bytes (sizeof)
typedef struct _PPM_SELECTION_MENU_ENTRY {
  UCHAR StrictDependency;                           // offset: 0x0 ordinal: 0x0
  UCHAR InitiatingState;                            // offset: 0x1 ordinal: 0x1
  UCHAR DependentState;                             // offset: 0x2 ordinal: 0x2
  ULONG StateIndex;                                 // offset: 0x4 ordinal: 0x3
  ULONG Dependencies;                               // offset: 0x8 ordinal: 0x4
  struct _PPM_SELECTION_DEPENDENCY *DependencyList; // offset: 0x10 ordinal: 0x5
} _PPM_SELECTION_MENU_ENTRY;

// 0x90 bytes (sizeof)
typedef struct _UMS_CONTROL_BLOCK {
  struct _RTL_UMS_CONTEXT *UmsContext;            // offset: 0x0 ordinal: 0x0
  struct _SINGLE_LIST_ENTRY *CompletionListEntry; // offset: 0x8 ordinal: 0x1
  struct _KEVENT *CompletionListEvent;            // offset: 0x10 ordinal: 0x2
  ULONG ServiceSequenceNumber;                    // offset: 0x18 ordinal: 0x3
  struct _KQUEUE UmsQueue;                        // offset: 0x20 ordinal: 0x4
  struct _LIST_ENTRY QueueEntry;                  // offset: 0x60 ordinal: 0x5
  struct _RTL_UMS_CONTEXT *YieldingUmsContext;    // offset: 0x70 ordinal: 0x6
  VOID *YieldingParam;                            // offset: 0x78 ordinal: 0x7
  VOID *UmsTeb;                                   // offset: 0x80 ordinal: 0x8
  struct _KQUEUE *UmsAssociatedQueue;             // offset: 0x20 ordinal: 0x9
  struct _LIST_ENTRY *UmsQueueListEntry;          // offset: 0x28 ordinal: 0xa
  struct _KEVENT UmsWaitEvent;                    // offset: 0x30 ordinal: 0xb
  VOID *StagingArea;                              // offset: 0x48 ordinal: 0xc
  ULONG UmsPrimaryDeliveredContext : 1;           // offset: 0x50 ordinal: 0xd
  ULONG UmsAssociatedQueueUsed : 1;               // offset: 0x50 ordinal: 0xe
  ULONG UmsThreadParked : 1;                      // offset: 0x50 ordinal: 0xf
  ULONG UmsFlags;                                 // offset: 0x50 ordinal: 0x10
  USHORT TebSelector;                             // offset: 0x88 ordinal: 0x11
} _UMS_CONTROL_BLOCK;

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
  VOID *Reserved[3];                             // offset: 0x20 ordinal: 0xa
  VOID *NormalContext;                           // offset: 0x38 ordinal: 0xb
  VOID *SystemArgument1;                         // offset: 0x40 ordinal: 0xc
  VOID *SystemArgument2;                         // offset: 0x48 ordinal: 0xd
  CHAR ApcStateIndex;                            // offset: 0x50 ordinal: 0xe
  CHAR ApcMode;                                  // offset: 0x51 ordinal: 0xf
  UCHAR Inserted;                                // offset: 0x52 ordinal: 0x10
} _KAPC;

// 0x58 bytes (sizeof)
typedef struct __anon_521 {
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
  VOID *IrpExtension;                      // offset: 0x50 ordinal: 0x8
} __anon_521;

// 0x58 bytes (sizeof)
typedef union __anon_507 {
  struct __anon_521 Overlay; // offset: 0x0 ordinal: 0x0
  struct _KAPC Apc;          // offset: 0x0 ordinal: 0x1
  VOID *CompletionKey;       // offset: 0x0 ordinal: 0x2
} __anon_507;

typedef VOID (*__anon_385)(struct _KAPC *);

typedef VOID (*__anon_384)(struct _KAPC *, VOID (**)(VOID *, VOID *, VOID *),
                           VOID **, VOID **, VOID **);

// 0xc bytes (sizeof)
typedef struct _CACHE_DESCRIPTOR {
  UCHAR Level;                     // offset: 0x0 ordinal: 0x0
  UCHAR Associativity;             // offset: 0x1 ordinal: 0x1
  USHORT LineSize;                 // offset: 0x2 ordinal: 0x2
  ULONG Size;                      // offset: 0x4 ordinal: 0x3
  enum _PROCESSOR_CACHE_TYPE Type; // offset: 0x8 ordinal: 0x4
} _CACHE_DESCRIPTOR;

// 0x4 bytes (sizeof)
typedef struct __anon_221 {
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
} __anon_221;

// 0x54 bytes (sizeof)
typedef struct _IOP_IRP_STACK_PROFILER {
  ULONG Profile[20]; // offset: 0x0 ordinal: 0x0
  ULONG TotalIrps;   // offset: 0x50 ordinal: 0x1
} _IOP_IRP_STACK_PROFILER;

// 0x10 bytes (sizeof)
typedef union _KGDTENTRY64 {
  USHORT LimitLow;         // offset: 0x0 ordinal: 0x0
  USHORT BaseLow;          // offset: 0x2 ordinal: 0x1
  struct __anon_220 Bytes; // offset: 0x4 ordinal: 0x2
  struct __anon_221 Bits;  // offset: 0x4 ordinal: 0x3
  ULONG BaseUpper;         // offset: 0x8 ordinal: 0x4
  ULONG MustBeZero;        // offset: 0xc ordinal: 0x5
  LONGLONG DataLow;        // offset: 0x0 ordinal: 0x6
  LONGLONG DataHigh;       // offset: 0x8 ordinal: 0x7
} _KGDTENTRY64;

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

// 0x10 bytes (sizeof)
typedef struct _TOKEN_PRIVILEGES {
  ULONG PrivilegeCount;                      // offset: 0x0 ordinal: 0x0
  struct _LUID_AND_ATTRIBUTES Privileges[1]; // offset: 0x4 ordinal: 0x1
} _TOKEN_PRIVILEGES;

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
typedef union __anon_796 {
  struct _INITIAL_PRIVILEGE_SET InitialPrivilegeSet; // offset: 0x0 ordinal: 0x0
  struct _PRIVILEGE_SET PrivilegeSet;                // offset: 0x0 ordinal: 0x1
} __anon_796;

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
  union __anon_796 Privileges;           // offset: 0x50 ordinal: 0xc
  UCHAR AuditPrivileges;                 // offset: 0x7c ordinal: 0xd
  struct _UNICODE_STRING ObjectName;     // offset: 0x80 ordinal: 0xe
  struct _UNICODE_STRING ObjectTypeName; // offset: 0x90 ordinal: 0xf
} _ACCESS_STATE;

typedef LONG (*__anon_1594)(VOID *, VOID *, struct _ACCESS_STATE *, CHAR, ULONG,
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
typedef struct __anon_638 {
  struct _IO_SECURITY_CONTEXT *SecurityContext; // offset: 0x0 ordinal: 0x0
  ULONG Options;                                // offset: 0x8 ordinal: 0x1
  USHORT FileAttributes;                        // offset: 0x10 ordinal: 0x2
  USHORT ShareAccess;                           // offset: 0x12 ordinal: 0x3
  ULONG EaLength;                               // offset: 0x18 ordinal: 0x4
} __anon_638;

typedef VOID (*__anon_2240)(ULONG *, ULONG *);

typedef LONG (*__anon_1596)(VOID *, UCHAR, struct _OBJECT_NAME_INFORMATION *,
                            ULONG, ULONG *, CHAR);

typedef LONG (*__anon_1595)(VOID *, enum _SECURITY_OPERATION_CODE, ULONG *,
                            VOID *, ULONG *, VOID **, enum _POOL_TYPE,
                            struct _GENERIC_MAPPING *, CHAR);

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

// 0xc0 bytes (sizeof)
typedef struct _MBCB {
  SHORT NodeTypeCode;                // offset: 0x0 ordinal: 0x0
  SHORT NodeIsInZone;                // offset: 0x2 ordinal: 0x1
  ULONG PagesToWrite;                // offset: 0x4 ordinal: 0x2
  ULONG DirtyPages;                  // offset: 0x8 ordinal: 0x3
  ULONG Reserved;                    // offset: 0xc ordinal: 0x4
  struct _LIST_ENTRY BitmapRanges;   // offset: 0x10 ordinal: 0x5
  LONGLONG ResumeWritePage;          // offset: 0x20 ordinal: 0x6
  LONGLONG MostRecentlyDirtiedPage;  // offset: 0x28 ordinal: 0x7
  struct _BITMAP_RANGE BitmapRange1; // offset: 0x30 ordinal: 0x8
  struct _BITMAP_RANGE BitmapRange2; // offset: 0x60 ordinal: 0x9
  struct _BITMAP_RANGE BitmapRange3; // offset: 0x90 ordinal: 0xa
} _MBCB;

// 0x20 bytes (sizeof)
typedef struct _PEP_ACPI_INTERRUPT_RESOURCE {
  enum _PEP_ACPI_RESOURCE_TYPE Type;           // offset: 0x0 ordinal: 0x0
  enum _KINTERRUPT_MODE InterruptType;         // offset: 0x4 ordinal: 0x1
  enum _KINTERRUPT_POLARITY InterruptPolarity; // offset: 0x8 ordinal: 0x2
  union _PEP_ACPI_RESOURCE_FLAGS Flags;        // offset: 0xc ordinal: 0x3
  UCHAR Count;                                 // offset: 0x10 ordinal: 0x4
  ULONG *Pins;                                 // offset: 0x18 ordinal: 0x5
} _PEP_ACPI_INTERRUPT_RESOURCE;

typedef VOID (*__anon_395)(VOID *, ULONG, ULONG, ULONG, ULONG *);

typedef LONG (*__anon_391)(VOID *, ULONG, ULONG, ULONG, ULONG *);

// 0x18 bytes (sizeof)
typedef struct _PPM_COORDINATED_SELECTION {
  ULONG MaximumStates;    // offset: 0x0 ordinal: 0x0
  ULONG SelectedStates;   // offset: 0x4 ordinal: 0x1
  ULONG DefaultSelection; // offset: 0x8 ordinal: 0x2
  ULONG *Selection;       // offset: 0x10 ordinal: 0x3
} _PPM_COORDINATED_SELECTION;

// 0x10 bytes (sizeof)
typedef struct _RTL_BITMAP {
  ULONG SizeOfBitMap; // offset: 0x0 ordinal: 0x0
  ULONG *Buffer;      // offset: 0x8 ordinal: 0x1
} _RTL_BITMAP;

// 0x18 bytes (sizeof)
typedef struct _FREE_DISPLAY {
  ULONG RealVectorSize;       // offset: 0x0 ordinal: 0x0
  ULONG Hint;                 // offset: 0x4 ordinal: 0x1
  struct _RTL_BITMAP Display; // offset: 0x8 ordinal: 0x2
} _FREE_DISPLAY;

// 0x28 bytes (sizeof)
typedef struct _MI_PAGING_FILE_SPACE_BITMAPS {
  union {
    ULONG RefCount;                               // offset: 0x0 ordinal: 0x0
    struct _MI_PAGING_FILE_SPACE_BITMAPS *Anchor; // offset: 0x0 ordinal: 0x1
  };
  struct _RTL_BITMAP AllocationBitmap; // offset: 0x8 ordinal: 0x2
  union {
    struct _RTL_BITMAP ReservationBitmap; // offset: 0x18 ordinal: 0x3
    struct _RTL_BITMAP EvictedBitmap;     // offset: 0x18 ordinal: 0x4
  };
} _MI_PAGING_FILE_SPACE_BITMAPS;

// 0x28 bytes (sizeof)
typedef struct _RTL_DYNAMIC_HASH_TABLE {
  ULONG Flags;           // offset: 0x0 ordinal: 0x0
  ULONG Shift;           // offset: 0x4 ordinal: 0x1
  ULONG TableSize;       // offset: 0x8 ordinal: 0x2
  ULONG Pivot;           // offset: 0xc ordinal: 0x3
  ULONG DivisorMask;     // offset: 0x10 ordinal: 0x4
  ULONG NumEntries;      // offset: 0x14 ordinal: 0x5
  ULONG NonEmptyBuckets; // offset: 0x18 ordinal: 0x6
  ULONG NumEnumerators;  // offset: 0x1c ordinal: 0x7
  VOID *Directory;       // offset: 0x20 ordinal: 0x8
} _RTL_DYNAMIC_HASH_TABLE;

// 0x18 bytes (sizeof)
typedef struct _RTL_DRIVE_LETTER_CURDIR {
  USHORT Flags;           // offset: 0x0 ordinal: 0x0
  USHORT Length;          // offset: 0x2 ordinal: 0x1
  ULONG TimeStamp;        // offset: 0x4 ordinal: 0x2
  struct _STRING DosPath; // offset: 0x8 ordinal: 0x3
} _RTL_DRIVE_LETTER_CURDIR;

// 0x18 bytes (sizeof)
typedef struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME {
  struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME
      *Previous;                                 // offset: 0x0 ordinal: 0x0
  struct _ACTIVATION_CONTEXT *ActivationContext; // offset: 0x8 ordinal: 0x1
  ULONG Flags;                                   // offset: 0x10 ordinal: 0x2
} _RTL_ACTIVATION_CONTEXT_STACK_FRAME;

// 0x58 bytes (sizeof)
typedef struct _PEB_LDR_DATA {
  ULONG Length;                               // offset: 0x0 ordinal: 0x0
  UCHAR Initialized;                          // offset: 0x4 ordinal: 0x1
  VOID *SsHandle;                             // offset: 0x8 ordinal: 0x2
  struct _LIST_ENTRY InLoadOrderModuleList;   // offset: 0x10 ordinal: 0x3
  struct _LIST_ENTRY InMemoryOrderModuleList; // offset: 0x20 ordinal: 0x4
  struct _LIST_ENTRY
      InInitializationOrderModuleList; // offset: 0x30 ordinal: 0x5
  VOID *EntryInProgress;               // offset: 0x40 ordinal: 0x6
  UCHAR ShutdownInProgress;            // offset: 0x48 ordinal: 0x7
  VOID *ShutdownThreadId;              // offset: 0x50 ordinal: 0x8
} _PEB_LDR_DATA;

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

// 0x80 bytes (sizeof)
typedef struct _ACCESS_REASONS {
  ULONG Data[32]; // offset: 0x0 ordinal: 0x0
} _ACCESS_REASONS;

// 0x8 bytes (sizeof)
typedef struct _WNF_STATE_NAME {
  ULONG Data[2]; // offset: 0x0 ordinal: 0x0
} _WNF_STATE_NAME;

// 0x24 bytes (sizeof)
typedef struct _PROC_PERF_HISTORY {
  ULONG Count;                                    // offset: 0x0 ordinal: 0x0
  ULONG Slot;                                     // offset: 0x4 ordinal: 0x1
  ULONG UtilityTotal;                             // offset: 0x8 ordinal: 0x2
  ULONG AffinitizedUtilityTotal;                  // offset: 0xc ordinal: 0x3
  ULONG FrequencyTotal;                           // offset: 0x10 ordinal: 0x4
  ULONG TaggedPercentTotal[2];                    // offset: 0x14 ordinal: 0x5
  struct _PROC_PERF_HISTORY_ENTRY HistoryList[1]; // offset: 0x1c ordinal: 0x6
} _PROC_PERF_HISTORY;

// 0x18 bytes (sizeof)
typedef struct _TEB_ACTIVE_FRAME {
  ULONG Flags;                               // offset: 0x0 ordinal: 0x0
  struct _TEB_ACTIVE_FRAME *Previous;        // offset: 0x8 ordinal: 0x1
  struct _TEB_ACTIVE_FRAME_CONTEXT *Context; // offset: 0x10 ordinal: 0x2
} _TEB_ACTIVE_FRAME;

// 0x4e0 bytes (sizeof)
typedef struct _GDI_TEB_BATCH32 {
  ULONG Offset : 31;             // offset: 0x0 ordinal: 0x0
  ULONG HasRenderingCommand : 1; // offset: 0x0 ordinal: 0x1
  ULONG HDC;                     // offset: 0x4 ordinal: 0x2
  ULONG Buffer[310];             // offset: 0x8 ordinal: 0x3
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

// 0x1c bytes (sizeof)
typedef struct _RSDS {
  ULONG Signature;   // offset: 0x0 ordinal: 0x0
  struct _GUID Guid; // offset: 0x4 ordinal: 0x1
  ULONG Age;         // offset: 0x14 ordinal: 0x2
  CHAR PdbName[1];   // offset: 0x18 ordinal: 0x3
} _RSDS;

// 0x1c bytes (sizeof)
typedef union _CVDD {
  ULONG Signature;   // offset: 0x0 ordinal: 0x0
  struct _NB10 NB10; // offset: 0x0 ordinal: 0x1
  struct _RSDS RsDs; // offset: 0x0 ordinal: 0x2
} _CVDD;

// 0x38 bytes (sizeof)
typedef struct _PROVIDER_BINARY_ENTRY {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 ordinal: 0x0
  UCHAR ConsumersNotified;      // offset: 0x10 ordinal: 0x1
  UCHAR Spare[3];               // offset: 0x11 ordinal: 0x2
  ULONG DebugIdSize;            // offset: 0x14 ordinal: 0x3
  union _CVDD DebugId;          // offset: 0x18 ordinal: 0x4
} _PROVIDER_BINARY_ENTRY;

// 0x10 bytes (sizeof)
typedef struct __anon_2237 {
  struct _GUID DiskId; // offset: 0x0 ordinal: 0x0
} __anon_2237;

// 0x10 bytes (sizeof)
typedef union __anon_2226 {
  struct __anon_2236 Mbr; // offset: 0x0 ordinal: 0x0
  struct __anon_2237 Gpt; // offset: 0x0 ordinal: 0x1
} __anon_2226;

// 0x58 bytes (sizeof)
typedef struct _IO_WORKITEM {
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x0 ordinal: 0x0
  VOID(*Routine)
  (VOID *, VOID *, struct _IO_WORKITEM *); // offset: 0x20 ordinal: 0x1
  VOID *IoObject;                          // offset: 0x28 ordinal: 0x2
  VOID *Context;                           // offset: 0x30 ordinal: 0x3
  VOID *WorkingOnBehalfClient;             // offset: 0x38 ordinal: 0x4
  ULONG Type;                              // offset: 0x40 ordinal: 0x5
  struct _GUID ActivityId;                 // offset: 0x44 ordinal: 0x6
} _IO_WORKITEM;

typedef VOID (*__anon_1941)(VOID *, VOID *, struct _IO_WORKITEM *);

// 0x58 bytes (sizeof)
typedef struct _CM_KEY_BODY {
  ULONG Type;                                    // offset: 0x0 ordinal: 0x0
  struct _CM_KEY_CONTROL_BLOCK *KeyControlBlock; // offset: 0x8 ordinal: 0x1
  struct _CM_NOTIFY_BLOCK *NotifyBlock;          // offset: 0x10 ordinal: 0x2
  VOID *ProcessID;                               // offset: 0x18 ordinal: 0x3
  struct _LIST_ENTRY KeyBodyList;                // offset: 0x20 ordinal: 0x4
  ULONG Flags : 16;                              // offset: 0x30 ordinal: 0x5
  ULONG HandleTags : 16;                         // offset: 0x30 ordinal: 0x6
  VOID *KtmTrans;                                // offset: 0x38 ordinal: 0x7
  struct _GUID *KtmUow;                          // offset: 0x40 ordinal: 0x8
  struct _LIST_ENTRY ContextListHead;            // offset: 0x48 ordinal: 0x9
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

// 0x10 bytes (sizeof)
typedef struct _DISALLOWED_GUIDS {
  USHORT Count;        // offset: 0x0 ordinal: 0x0
  struct _GUID *Guids; // offset: 0x8 ordinal: 0x1
} _DISALLOWED_GUIDS;

// 0x20 bytes (sizeof)
typedef struct __anon_1310 {
  struct _GUID PowerSettingGuid; // offset: 0x0 ordinal: 0x0
  ULONG Flags;                   // offset: 0x10 ordinal: 0x1
  ULONG SessionId;               // offset: 0x14 ordinal: 0x2
  ULONG DataLength;              // offset: 0x18 ordinal: 0x3
  UCHAR Data[1];                 // offset: 0x1c ordinal: 0x4
} __anon_1310;

// 0x10 bytes (sizeof)
typedef struct __anon_1308 {
  struct _GUID BlockedDriverGuid; // offset: 0x0 ordinal: 0x0
} __anon_1308;

// 0x14 bytes (sizeof)
typedef struct __anon_1302 {
  struct _GUID ClassGuid;    // offset: 0x0 ordinal: 0x0
  WCHAR SymbolicLinkName[1]; // offset: 0x10 ordinal: 0x1
} __anon_1302;

// 0x20 bytes (sizeof)
typedef union __anon_1294 {
  struct __anon_1302 DeviceClass;                // offset: 0x0 ordinal: 0x0
  struct __anon_1303 TargetDevice;               // offset: 0x0 ordinal: 0x1
  struct __anon_1303 InstallDevice;              // offset: 0x0 ordinal: 0x2
  struct __anon_1304 CustomNotification;         // offset: 0x0 ordinal: 0x3
  struct __anon_1305 ProfileNotification;        // offset: 0x0 ordinal: 0x4
  struct __anon_1306 PowerNotification;          // offset: 0x0 ordinal: 0x5
  struct __anon_1307 VetoNotification;           // offset: 0x0 ordinal: 0x6
  struct __anon_1308 BlockedDriverNotification;  // offset: 0x0 ordinal: 0x7
  struct __anon_1309 InvalidIDNotification;      // offset: 0x0 ordinal: 0x8
  struct __anon_1310 PowerSettingNotification;   // offset: 0x0 ordinal: 0x9
  struct __anon_1303 PropertyChangeNotification; // offset: 0x0 ordinal: 0xa
  struct __anon_1303 DeviceInstanceNotification; // offset: 0x0 ordinal: 0xb
} __anon_1294;

// 0x50 bytes (sizeof)
typedef struct _PLUGPLAY_EVENT_BLOCK {
  struct _GUID EventGuid;                      // offset: 0x0 ordinal: 0x0
  enum _PLUGPLAY_EVENT_CATEGORY EventCategory; // offset: 0x10 ordinal: 0x1
  ULONG *Result;                               // offset: 0x18 ordinal: 0x2
  ULONG Flags;                                 // offset: 0x20 ordinal: 0x3
  ULONG TotalSize;                             // offset: 0x24 ordinal: 0x4
  VOID *DeviceObject;                          // offset: 0x28 ordinal: 0x5
  union __anon_1294 u;                         // offset: 0x30 ordinal: 0x6
} _PLUGPLAY_EVENT_BLOCK;

// 0xb8 bytes (sizeof)
typedef struct _PNP_DEVICE_EVENT_ENTRY {
  struct _LIST_ENTRY ListEntry;           // offset: 0x0 ordinal: 0x0
  ULONG Argument;                         // offset: 0x10 ordinal: 0x1
  struct _KEVENT *CallerEvent;            // offset: 0x18 ordinal: 0x2
  VOID (*Callback)(VOID *);               // offset: 0x20 ordinal: 0x3
  VOID *Context;                          // offset: 0x28 ordinal: 0x4
  enum _PNP_VETO_TYPE *VetoType;          // offset: 0x30 ordinal: 0x5
  struct _UNICODE_STRING *VetoName;       // offset: 0x38 ordinal: 0x6
  ULONG RefCount;                         // offset: 0x40 ordinal: 0x7
  ULONG Lock;                             // offset: 0x44 ordinal: 0x8
  UCHAR Cancel;                           // offset: 0x48 ordinal: 0x9
  struct _PNP_DEVICE_EVENT_ENTRY *Parent; // offset: 0x50 ordinal: 0xa
  struct _GUID ActivityId;                // offset: 0x58 ordinal: 0xb
  struct _PLUGPLAY_EVENT_BLOCK Data;      // offset: 0x68 ordinal: 0xc
} _PNP_DEVICE_EVENT_ENTRY;

// 0x13 bytes (sizeof)
typedef struct _TlgProviderMetadata_t {
  UCHAR Type;              // offset: 0x0 ordinal: 0x0
  struct _GUID ProviderId; // offset: 0x1 ordinal: 0x1
  USHORT RemainingSize;    // offset: 0x11 ordinal: 0x2
} _TlgProviderMetadata_t;

// 0x48 bytes (sizeof)
typedef struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR {
  ULONG SectionOffset;           // offset: 0x0 ordinal: 0x0
  ULONG SectionLength;           // offset: 0x4 ordinal: 0x1
  union _WHEA_REVISION Revision; // offset: 0x8 ordinal: 0x2
  union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS
      ValidBits;  // offset: 0xa ordinal: 0x3
  UCHAR Reserved; // offset: 0xb ordinal: 0x4
  union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS
      Flags;                                 // offset: 0xc ordinal: 0x5
  struct _GUID SectionType;                  // offset: 0x10 ordinal: 0x6
  struct _GUID FRUId;                        // offset: 0x20 ordinal: 0x7
  enum _WHEA_ERROR_SEVERITY SectionSeverity; // offset: 0x30 ordinal: 0x8
  CHAR FRUText[20];                          // offset: 0x34 ordinal: 0x9
} _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR;

// 0xe0 bytes (sizeof)
typedef struct _AUX_ACCESS_DATA {
  struct _PRIVILEGE_SET *PrivilegesUsed;           // offset: 0x0 ordinal: 0x0
  struct _GENERIC_MAPPING GenericMapping;          // offset: 0x8 ordinal: 0x1
  ULONG AccessesToAudit;                           // offset: 0x18 ordinal: 0x2
  ULONG MaximumAuditMask;                          // offset: 0x1c ordinal: 0x3
  struct _GUID TransactionId;                      // offset: 0x20 ordinal: 0x4
  VOID *NewSecurityDescriptor;                     // offset: 0x30 ordinal: 0x5
  VOID *ExistingSecurityDescriptor;                // offset: 0x38 ordinal: 0x6
  VOID *ParentSecurityDescriptor;                  // offset: 0x40 ordinal: 0x7
  VOID (*DeRefSecurityDescriptor)(VOID *, VOID *); // offset: 0x48 ordinal: 0x8
  VOID *SDLock;                                    // offset: 0x50 ordinal: 0x9
  struct _ACCESS_REASONS AccessReasons;            // offset: 0x58 ordinal: 0xa
  UCHAR GenerateStagingEvents;                     // offset: 0xd8 ordinal: 0xb
} _AUX_ACCESS_DATA;

// 0x6c bytes (sizeof)
typedef struct _OBP_SYSTEM_DOS_DEVICE_STATE {
  ULONG GlobalDeviceMap;      // offset: 0x0 ordinal: 0x0
  ULONG LocalDeviceCount[26]; // offset: 0x4 ordinal: 0x1
} _OBP_SYSTEM_DOS_DEVICE_STATE;

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

// 0x4 bytes (sizeof)
typedef struct __anon_41 {
  ULONG LongFunction : 1; // offset: 0x0 ordinal: 0x0
  ULONG Persistent : 1;   // offset: 0x0 ordinal: 0x1
  ULONG Private : 30;     // offset: 0x0 ordinal: 0x2
} __anon_41;

// 0x4 bytes (sizeof)
typedef union __anon_42 {
  ULONG Flags;        // offset: 0x0 ordinal: 0x0
  struct __anon_41 s; // offset: 0x0 ordinal: 0x1
} __anon_42;

// 0x48 bytes (sizeof)
typedef struct _TP_CALLBACK_ENVIRON_V3 {
  ULONG Version;                          // offset: 0x0 ordinal: 0x0
  struct _TP_POOL *Pool;                  // offset: 0x8 ordinal: 0x1
  struct _TP_CLEANUP_GROUP *CleanupGroup; // offset: 0x10 ordinal: 0x2
  VOID(*CleanupGroupCancelCallback)
  (VOID *, VOID *);                              // offset: 0x18 ordinal: 0x3
  VOID *RaceDll;                                 // offset: 0x20 ordinal: 0x4
  struct _ACTIVATION_CONTEXT *ActivationContext; // offset: 0x28 ordinal: 0x5
  VOID(*FinalizationCallback)
  (struct _TP_CALLBACK_INSTANCE *, VOID *);    // offset: 0x30 ordinal: 0x6
  union __anon_42 u;                           // offset: 0x38 ordinal: 0x7
  enum _TP_CALLBACK_PRIORITY CallbackPriority; // offset: 0x3c ordinal: 0x8
  ULONG Size;                                  // offset: 0x40 ordinal: 0x9
} _TP_CALLBACK_ENVIRON_V3;

// 0x8 bytes (sizeof)
typedef struct __anon_35 {
  ULONG LowPart;  // offset: 0x0 ordinal: 0x0
  ULONG HighPart; // offset: 0x4 ordinal: 0x1
} __anon_35;

// 0x8 bytes (sizeof)
typedef struct _XSTATE_FEATURE {
  ULONG Offset; // offset: 0x0 ordinal: 0x0
  ULONG Size;   // offset: 0x4 ordinal: 0x1
} _XSTATE_FEATURE;

// 0x8 bytes (sizeof)
typedef struct __anon_31 {
  ULONG LowPart; // offset: 0x0 ordinal: 0x0
  LONG HighPart; // offset: 0x4 ordinal: 0x1
} __anon_31;

// 0x8 bytes (sizeof)
typedef union _LARGE_INTEGER {
  ULONG LowPart;      // offset: 0x0 ordinal: 0x0
  LONG HighPart;      // offset: 0x4 ordinal: 0x1
  struct __anon_31 u; // offset: 0x0 ordinal: 0x2
  LONGLONG QuadPart;  // offset: 0x0 ordinal: 0x3
} _LARGE_INTEGER;

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

// 0x13c bytes (sizeof)
typedef struct _POP_POWER_SETTING_VALUES {
  ULONG StructureSize;                   // offset: 0x0 ordinal: 0x0
  struct _SYSTEM_POWER_POLICY PopPolicy; // offset: 0x4 ordinal: 0x1
  enum SYSTEM_POWER_CONDITION
      CurrentAcDcPowerState;      // offset: 0xec ordinal: 0x2
  UCHAR AwayModeEnabled;          // offset: 0xf0 ordinal: 0x3
  UCHAR AwayModeEngaged;          // offset: 0xf1 ordinal: 0x4
  UCHAR AwayModePolicyAllowed;    // offset: 0xf2 ordinal: 0x5
  LONG AwayModeIgnoreUserPresent; // offset: 0xf4 ordinal: 0x6
  LONG AwayModeIgnoreAction;      // offset: 0xf8 ordinal: 0x7
  UCHAR DisableFastS4;            // offset: 0xfc ordinal: 0x8
  UCHAR DisableStandbyStates;     // offset: 0xfd ordinal: 0x9
  ULONG UnattendSleepTimeout;     // offset: 0x100 ordinal: 0xa
  ULONG DiskIgnoreTime;           // offset: 0x104 ordinal: 0xb
  ULONG DeviceIdlePolicy;         // offset: 0x108 ordinal: 0xc
  ULONG VideoDimTimeout;          // offset: 0x10c ordinal: 0xd
  ULONG VideoNormalBrightness;    // offset: 0x110 ordinal: 0xe
  ULONG VideoDimBrightness;       // offset: 0x114 ordinal: 0xf
  ULONG AlsOffset;                // offset: 0x118 ordinal: 0x10
  ULONG AlsEnabled;               // offset: 0x11c ordinal: 0x11
  ULONG EsBrightness;             // offset: 0x120 ordinal: 0x12
  UCHAR SwitchShutdownForced;     // offset: 0x124 ordinal: 0x13
  ULONG SystemCoolingPolicy;      // offset: 0x128 ordinal: 0x14
  UCHAR MediaBufferingEngaged;    // offset: 0x12c ordinal: 0x15
  UCHAR OffloadedAudio;           // offset: 0x12d ordinal: 0x16
  UCHAR NonOffloadedAudio;        // offset: 0x12e ordinal: 0x17
  UCHAR FullscreenVideoPlayback;  // offset: 0x12f ordinal: 0x18
  ULONG EsBatteryThreshold;       // offset: 0x130 ordinal: 0x19
  UCHAR EsUserAwaySetting;        // offset: 0x134 ordinal: 0x1a
  ULONG WiFiInStandby;            // offset: 0x138 ordinal: 0x1b
} _POP_POWER_SETTING_VALUES;

// 0xc bytes (sizeof)
typedef struct __anon_830 {
  ULONG Data[3]; // offset: 0x0 ordinal: 0x0
} __anon_830;

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
typedef struct __anon_656 {
  ULONG Length;                                // offset: 0x0 ordinal: 0x0
  VOID *StartSid;                              // offset: 0x8 ordinal: 0x1
  struct _FILE_GET_QUOTA_INFORMATION *SidList; // offset: 0x10 ordinal: 0x2
  ULONG SidListLength;                         // offset: 0x18 ordinal: 0x3
} __anon_656;

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

// 0xc bytes (sizeof)
typedef struct _PERFINFO_PPM_STATE_SELECTION {
  ULONG SelectedState; // offset: 0x0 ordinal: 0x0
  ULONG VetoedStates;  // offset: 0x4 ordinal: 0x1
  ULONG VetoReason[1]; // offset: 0x8 ordinal: 0x2
} _PERFINFO_PPM_STATE_SELECTION;

// 0x20 bytes (sizeof)
typedef struct _OBJECT_SYMBOLIC_LINK {
  union _LARGE_INTEGER CreationTime; // offset: 0x0 ordinal: 0x0
  struct _UNICODE_STRING LinkTarget; // offset: 0x8 ordinal: 0x1
  ULONG DosDeviceDriveIndex;         // offset: 0x18 ordinal: 0x2
  ULONG Flags;                       // offset: 0x1c ordinal: 0x3
} _OBJECT_SYMBOLIC_LINK;

typedef UCHAR (*__anon_2232)(union _LARGE_INTEGER);

// 0x28 bytes (sizeof)
typedef struct _UNLOADED_DRIVERS {
  struct _UNICODE_STRING Name;      // offset: 0x0 ordinal: 0x0
  VOID *StartAddress;               // offset: 0x10 ordinal: 0x1
  VOID *EndAddress;                 // offset: 0x18 ordinal: 0x2
  union _LARGE_INTEGER CurrentTime; // offset: 0x20 ordinal: 0x3
} _UNLOADED_DRIVERS;

// 0x38 bytes (sizeof)
typedef struct _MI_BAD_MEMORY_EVENT_ENTRY {
  ULONG BugCheckCode;                   // offset: 0x0 ordinal: 0x0
  LONG Active;                          // offset: 0x4 ordinal: 0x1
  ULONG Data;                           // offset: 0x8 ordinal: 0x2
  union _LARGE_INTEGER PhysicalAddress; // offset: 0x10 ordinal: 0x3
  struct _WORK_QUEUE_ITEM WorkItem;     // offset: 0x18 ordinal: 0x4
} _MI_BAD_MEMORY_EVENT_ENTRY;

// 0xa8 bytes (sizeof)
typedef struct _MI_ERROR_STATE {
  struct _MI_BAD_MEMORY_EVENT_ENTRY
      BadMemoryEventEntry;                    // offset: 0x0 ordinal: 0x0
  struct _MI_PROBE_RAISE_TRACKER ProbeRaises; // offset: 0x38 ordinal: 0x1
  struct _MI_FORCED_COMMITS ForcedCommits;    // offset: 0x74 ordinal: 0x2
  ULONG WsleFailures[2];                      // offset: 0x7c ordinal: 0x3
  ULONG WsLinear;                             // offset: 0x84 ordinal: 0x4
  ULONG PageHashErrors;                       // offset: 0x88 ordinal: 0x5
  ULONG CheckZeroCount;                       // offset: 0x8c ordinal: 0x6
  LONG ZeroedPageSingleBitErrorsDetected;     // offset: 0x90 ordinal: 0x7
  LONG BadPagesDetected;                      // offset: 0x94 ordinal: 0x8
  LONG ScrubPasses;                           // offset: 0x98 ordinal: 0x9
  LONG ScrubBadPagesFound;                    // offset: 0x9c ordinal: 0xa
  UCHAR PendingBadPages;                      // offset: 0xa0 ordinal: 0xb
  UCHAR InitFailure;                          // offset: 0xa1 ordinal: 0xc
  UCHAR StopBadMaps;                          // offset: 0xa2 ordinal: 0xd
} _MI_ERROR_STATE;

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

// 0x40 bytes (sizeof)
typedef struct _DEVICE_DESCRIPTION {
  ULONG Version;                      // offset: 0x0 ordinal: 0x0
  UCHAR Master;                       // offset: 0x4 ordinal: 0x1
  UCHAR ScatterGather;                // offset: 0x5 ordinal: 0x2
  UCHAR DemandMode;                   // offset: 0x6 ordinal: 0x3
  UCHAR AutoInitialize;               // offset: 0x7 ordinal: 0x4
  UCHAR Dma32BitAddresses;            // offset: 0x8 ordinal: 0x5
  UCHAR IgnoreCount;                  // offset: 0x9 ordinal: 0x6
  UCHAR Reserved1;                    // offset: 0xa ordinal: 0x7
  UCHAR Dma64BitAddresses;            // offset: 0xb ordinal: 0x8
  ULONG BusNumber;                    // offset: 0xc ordinal: 0x9
  ULONG DmaChannel;                   // offset: 0x10 ordinal: 0xa
  enum _INTERFACE_TYPE InterfaceType; // offset: 0x14 ordinal: 0xb
  enum _DMA_WIDTH DmaWidth;           // offset: 0x18 ordinal: 0xc
  enum _DMA_SPEED DmaSpeed;           // offset: 0x1c ordinal: 0xd
  ULONG MaximumLength;                // offset: 0x20 ordinal: 0xe
  ULONG DmaPort;                      // offset: 0x24 ordinal: 0xf
  ULONG DmaAddressWidth;              // offset: 0x28 ordinal: 0x10
  ULONG DmaControllerInstance;        // offset: 0x2c ordinal: 0x11
  ULONG DmaRequestLine;               // offset: 0x30 ordinal: 0x12
  union _LARGE_INTEGER DeviceAddress; // offset: 0x38 ordinal: 0x13
} _DEVICE_DESCRIPTION;

// 0x10 bytes (sizeof)
typedef struct __anon_1794 {
  union _LARGE_INTEGER Address; // offset: 0x0 ordinal: 0x0
  ULONG DataPayload;            // offset: 0x8 ordinal: 0x1
} __anon_1794;

// 0x34 bytes (sizeof)
typedef struct _WHEA_GENERIC_ERROR_DESCRIPTOR {
  USHORT Type;                                 // offset: 0x0 ordinal: 0x0
  UCHAR Reserved;                              // offset: 0x2 ordinal: 0x1
  UCHAR Enabled;                               // offset: 0x3 ordinal: 0x2
  ULONG ErrStatusBlockLength;                  // offset: 0x4 ordinal: 0x3
  ULONG RelatedErrorSourceId;                  // offset: 0x8 ordinal: 0x4
  UCHAR ErrStatusAddressSpaceID;               // offset: 0xc ordinal: 0x5
  UCHAR ErrStatusAddressBitWidth;              // offset: 0xd ordinal: 0x6
  UCHAR ErrStatusAddressBitOffset;             // offset: 0xe ordinal: 0x7
  UCHAR ErrStatusAddressAccessSize;            // offset: 0xf ordinal: 0x8
  union _LARGE_INTEGER ErrStatusAddress;       // offset: 0x10 ordinal: 0x9
  struct _WHEA_NOTIFICATION_DESCRIPTOR Notify; // offset: 0x18 ordinal: 0xa
} _WHEA_GENERIC_ERROR_DESCRIPTOR;

// 0x10 bytes (sizeof)
typedef struct _ETW_LAST_ENABLE_INFO {
  union _LARGE_INTEGER EnableFlags; // offset: 0x0 ordinal: 0x0
  USHORT LoggerId;                  // offset: 0x8 ordinal: 0x1
  UCHAR Level;                      // offset: 0xa ordinal: 0x2
  UCHAR Enabled : 1;                // offset: 0xb ordinal: 0x3
  UCHAR InternalFlag : 7;           // offset: 0xb ordinal: 0x4
} _ETW_LAST_ENABLE_INFO;

// 0x10 bytes (sizeof)
typedef struct _ETW_REF_CLOCK {
  union _LARGE_INTEGER StartTime;      // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER StartPerfClock; // offset: 0x8 ordinal: 0x1
} _ETW_REF_CLOCK;

// 0x118 bytes (sizeof)
typedef struct _TRACE_LOGFILE_HEADER {
  ULONG BufferSize; // offset: 0x0 ordinal: 0x0
  union {
    ULONG Version;                    // offset: 0x4 ordinal: 0x1
    struct __anon_1628 VersionDetail; // offset: 0x4 ordinal: 0x2
  };
  ULONG ProviderVersion;        // offset: 0x8 ordinal: 0x3
  ULONG NumberOfProcessors;     // offset: 0xc ordinal: 0x4
  union _LARGE_INTEGER EndTime; // offset: 0x10 ordinal: 0x5
  ULONG TimerResolution;        // offset: 0x18 ordinal: 0x6
  ULONG MaximumFileSize;        // offset: 0x1c ordinal: 0x7
  ULONG LogFileMode;            // offset: 0x20 ordinal: 0x8
  ULONG BuffersWritten;         // offset: 0x24 ordinal: 0x9
  union {
    struct _GUID LogInstanceGuid; // offset: 0x28 ordinal: 0xa
    ULONG StartBuffers;           // offset: 0x28 ordinal: 0xb
  };
  ULONG PointerSize;                          // offset: 0x2c ordinal: 0xc
  ULONG EventsLost;                           // offset: 0x30 ordinal: 0xd
  ULONG CpuSpeedInMHz;                        // offset: 0x34 ordinal: 0xe
  USHORT *LoggerName;                         // offset: 0x38 ordinal: 0xf
  USHORT *LogFileName;                        // offset: 0x40 ordinal: 0x10
  struct _RTL_TIME_ZONE_INFORMATION TimeZone; // offset: 0x48 ordinal: 0x11
  union _LARGE_INTEGER BootTime;              // offset: 0xf8 ordinal: 0x12
  union _LARGE_INTEGER PerfFreq;              // offset: 0x100 ordinal: 0x13
  union _LARGE_INTEGER StartTime;             // offset: 0x108 ordinal: 0x14
  ULONG ReservedFlags;                        // offset: 0x110 ordinal: 0x15
  ULONG BuffersLost;                          // offset: 0x114 ordinal: 0x16
} _TRACE_LOGFILE_HEADER;

// 0x30 bytes (sizeof)
typedef struct _IOP_IRP_EXTENSION {
  union {
    USHORT ExtensionFlags; // offset: 0x0 ordinal: 0x0
    USHORT Allocated : 1;  // offset: 0x0 ordinal: 0x1
  };
  USHORT PropagateId : 1;    // offset: 0x0 ordinal: 0x2
  USHORT SpareBits : 14;     // offset: 0x0 ordinal: 0x3
  USHORT TypesAllocated;     // offset: 0x2 ordinal: 0x4
  UCHAR GenericExtension[4]; // offset: 0x4 ordinal: 0x5
  VOID *VerifierContext;     // offset: 0x8 ordinal: 0x6
  struct _GUID ActivityId;   // offset: 0x10 ordinal: 0x7
  union {
    union _LARGE_INTEGER Timestamp; // offset: 0x20 ordinal: 0x8
    ULONG ZeroingOffset;            // offset: 0x20 ordinal: 0x9
    struct _IO_IRP_EXT_TRACK_OFFSET_HEADER
        *FsTrackOffsetBlob; // offset: 0x20 ordinal: 0xa
  };
  LONGLONG FsTrackedOffset; // offset: 0x28 ordinal: 0xb
} _IOP_IRP_EXTENSION;

// 0x10 bytes (sizeof)
typedef union __anon_1462 {
  union _LARGE_INTEGER FileOffset; // offset: 0x0 ordinal: 0x0
  USHORT ActiveCount;              // offset: 0x0 ordinal: 0x1
  struct _LIST_ENTRY Links;        // offset: 0x0 ordinal: 0x2
} __anon_1462;

typedef VOID (*__anon_1440)(VOID *, union _LARGE_INTEGER);

// 0x10 bytes (sizeof)
typedef struct _LOGGED_STREAM_CALLBACK_V1 {
  VOID *LogHandle; // offset: 0x0 ordinal: 0x0
  VOID(*FlushToLsnRoutine)
  (VOID *, union _LARGE_INTEGER); // offset: 0x8 ordinal: 0x1
} _LOGGED_STREAM_CALLBACK_V1;

// 0x20 bytes (sizeof)
typedef struct _PEP_ACPI_IO_MEMORY_RESOURCE {
  enum _PEP_ACPI_RESOURCE_TYPE Type;   // offset: 0x0 ordinal: 0x0
  UCHAR Information;                   // offset: 0x4 ordinal: 0x1
  union _LARGE_INTEGER MinimumAddress; // offset: 0x8 ordinal: 0x2
  union _LARGE_INTEGER MaximumAddress; // offset: 0x10 ordinal: 0x3
  ULONG Alignment;                     // offset: 0x18 ordinal: 0x4
  ULONG Length;                        // offset: 0x1c ordinal: 0x5
} _PEP_ACPI_IO_MEMORY_RESOURCE;

// 0x20 bytes (sizeof)
typedef struct _HBIN {
  ULONG Signature;                // offset: 0x0 ordinal: 0x0
  ULONG FileOffset;               // offset: 0x4 ordinal: 0x1
  ULONG Size;                     // offset: 0x8 ordinal: 0x2
  ULONG Reserved1[2];             // offset: 0xc ordinal: 0x3
  union _LARGE_INTEGER TimeStamp; // offset: 0x14 ordinal: 0x4
  ULONG Spare;                    // offset: 0x1c ordinal: 0x5
} _HBIN;

// 0x10 bytes (sizeof)
typedef struct __anon_1157 {
  struct _HBIN *Bin;        // offset: 0x0 ordinal: 0x0
  struct _HCELL *CellPoint; // offset: 0x8 ordinal: 0x1
} __anon_1157;

// 0x10 bytes (sizeof)
typedef struct __anon_1154 {
  ULONG Space;            // offset: 0x0 ordinal: 0x0
  ULONG MapPoint;         // offset: 0x4 ordinal: 0x1
  struct _HBIN *BinPoint; // offset: 0x8 ordinal: 0x2
} __anon_1154;

// 0xc bytes (sizeof)
typedef struct __anon_858 {
  union _LARGE_INTEGER Start; // offset: 0x0 ordinal: 0x0
  ULONG Length64;             // offset: 0x8 ordinal: 0x1
} __anon_858;

// 0xc bytes (sizeof)
typedef struct __anon_857 {
  union _LARGE_INTEGER Start; // offset: 0x0 ordinal: 0x0
  ULONG Length48;             // offset: 0x8 ordinal: 0x1
} __anon_857;

// 0xc bytes (sizeof)
typedef struct __anon_856 {
  union _LARGE_INTEGER Start; // offset: 0x0 ordinal: 0x0
  ULONG Length40;             // offset: 0x8 ordinal: 0x1
} __anon_856;

// 0xc bytes (sizeof)
typedef struct __anon_849 {
  union _LARGE_INTEGER Start; // offset: 0x0 ordinal: 0x0
  ULONG Length;               // offset: 0x8 ordinal: 0x1
} __anon_849;

// 0x18 bytes (sizeof)
typedef struct __anon_835 {
  ULONG Length64;                      // offset: 0x0 ordinal: 0x0
  ULONG Alignment64;                   // offset: 0x4 ordinal: 0x1
  union _LARGE_INTEGER MinimumAddress; // offset: 0x8 ordinal: 0x2
  union _LARGE_INTEGER MaximumAddress; // offset: 0x10 ordinal: 0x3
} __anon_835;

// 0x18 bytes (sizeof)
typedef struct __anon_834 {
  ULONG Length48;                      // offset: 0x0 ordinal: 0x0
  ULONG Alignment48;                   // offset: 0x4 ordinal: 0x1
  union _LARGE_INTEGER MinimumAddress; // offset: 0x8 ordinal: 0x2
  union _LARGE_INTEGER MaximumAddress; // offset: 0x10 ordinal: 0x3
} __anon_834;

// 0x18 bytes (sizeof)
typedef struct __anon_833 {
  ULONG Length40;                      // offset: 0x0 ordinal: 0x0
  ULONG Alignment40;                   // offset: 0x4 ordinal: 0x1
  union _LARGE_INTEGER MinimumAddress; // offset: 0x8 ordinal: 0x2
  union _LARGE_INTEGER MaximumAddress; // offset: 0x10 ordinal: 0x3
} __anon_833;

// 0x18 bytes (sizeof)
typedef struct __anon_826 {
  ULONG Length;                        // offset: 0x0 ordinal: 0x0
  ULONG Alignment;                     // offset: 0x4 ordinal: 0x1
  union _LARGE_INTEGER MinimumAddress; // offset: 0x8 ordinal: 0x2
  union _LARGE_INTEGER MaximumAddress; // offset: 0x10 ordinal: 0x3
} __anon_826;

// 0x18 bytes (sizeof)
typedef struct _MAILSLOT_CREATE_PARAMETERS {
  ULONG MailslotQuota;              // offset: 0x0 ordinal: 0x0
  ULONG MaximumMessageSize;         // offset: 0x4 ordinal: 0x1
  union _LARGE_INTEGER ReadTimeout; // offset: 0x8 ordinal: 0x2
  UCHAR TimeoutSpecified;           // offset: 0x10 ordinal: 0x3
} _MAILSLOT_CREATE_PARAMETERS;

// 0x20 bytes (sizeof)
typedef struct __anon_640 {
  struct _IO_SECURITY_CONTEXT *SecurityContext;   // offset: 0x0 ordinal: 0x0
  ULONG Options;                                  // offset: 0x8 ordinal: 0x1
  USHORT Reserved;                                // offset: 0x10 ordinal: 0x2
  USHORT ShareAccess;                             // offset: 0x12 ordinal: 0x3
  struct _MAILSLOT_CREATE_PARAMETERS *Parameters; // offset: 0x18 ordinal: 0x4
} __anon_640;

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
typedef struct __anon_639 {
  struct _IO_SECURITY_CONTEXT *SecurityContext;     // offset: 0x0 ordinal: 0x0
  ULONG Options;                                    // offset: 0x8 ordinal: 0x1
  USHORT Reserved;                                  // offset: 0x10 ordinal: 0x2
  USHORT ShareAccess;                               // offset: 0x12 ordinal: 0x3
  struct _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // offset: 0x18 ordinal: 0x4
} __anon_639;

// 0x18 bytes (sizeof)
typedef struct __anon_641 {
  ULONG Length;                    // offset: 0x0 ordinal: 0x0
  ULONG Key;                       // offset: 0x8 ordinal: 0x1
  union _LARGE_INTEGER ByteOffset; // offset: 0x10 ordinal: 0x2
} __anon_641;

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

typedef LONG (*__anon_2238)(LONG, union _LARGE_INTEGER *, struct _MDL *);

typedef LONG (*__anon_2235)(LONG, union _LARGE_INTEGER *, struct _MDL *,
                            VOID *);

typedef LONG (*__anon_2233)(union _LARGE_INTEGER *, struct _MDL *);

// 0x108 bytes (sizeof)
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
  UCHAR MarkMemoryOnly;                    // offset: 0x69 ordinal: 0xd
  UCHAR HiberResume;                       // offset: 0x6a ordinal: 0xe
  UCHAR Reserved1;                         // offset: 0x6b ordinal: 0xf
  ULONG MaximumTransferSize;               // offset: 0x6c ordinal: 0x10
  ULONG CommonBufferSize;                  // offset: 0x70 ordinal: 0x11
  VOID *TargetAddress;                     // offset: 0x78 ordinal: 0x12
  LONG(*WritePendingRoutine)
  (LONG, union _LARGE_INTEGER *, struct _MDL *,
   VOID *);                   // offset: 0x80 ordinal: 0x13
  ULONG PartitionStyle;       // offset: 0x88 ordinal: 0x14
  union __anon_2226 DiskInfo; // offset: 0x8c ordinal: 0x15
  LONG(*ReadRoutine)
  (LONG, union _LARGE_INTEGER *, struct _MDL *); // offset: 0xa0 ordinal: 0x16
  LONG(*GetDriveTelemetryRoutine)
  (ULONG, ULONG, VOID *, ULONG); // offset: 0xa8 ordinal: 0x17
  ULONG LogSectionTruncateSize;  // offset: 0xb0 ordinal: 0x18
  ULONG Parameters[16];          // offset: 0xb4 ordinal: 0x19
  VOID(*GetTransferSizesRoutine)
  (ULONG *, ULONG *); // offset: 0xf8 ordinal: 0x1a
  VOID(*DumpNotifyRoutine)
  (enum _DUMP_EVENTS, VOID *, ULONG); // offset: 0x100 ordinal: 0x1b
} _DUMP_INITIALIZATION_CONTEXT;

// 0x178 bytes (sizeof)
typedef struct _DUMP_STACK_CONTEXT {
  struct _DUMP_INITIALIZATION_CONTEXT Init;       // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER PartitionOffset;           // offset: 0x108 ordinal: 0x1
  VOID *DumpPointers;                             // offset: 0x110 ordinal: 0x2
  ULONG PointersLength;                           // offset: 0x118 ordinal: 0x3
  USHORT *ModulePrefix;                           // offset: 0x120 ordinal: 0x4
  struct _LIST_ENTRY DriverList;                  // offset: 0x128 ordinal: 0x5
  struct _STRING InitMsg;                         // offset: 0x138 ordinal: 0x6
  struct _STRING ProgMsg;                         // offset: 0x148 ordinal: 0x7
  struct _STRING DoneMsg;                         // offset: 0x158 ordinal: 0x8
  VOID *FileObject;                               // offset: 0x168 ordinal: 0x9
  enum _DEVICE_USAGE_NOTIFICATION_TYPE UsageType; // offset: 0x170 ordinal: 0xa
} _DUMP_STACK_CONTEXT;

typedef LONG (*__anon_1889)(struct _KENLISTMENT *, VOID *, VOID *, ULONG,
                            union _LARGE_INTEGER *, ULONG, VOID *);

// 0x18 bytes (sizeof)
typedef struct __anon_650 {
  union _LARGE_INTEGER *Length;    // offset: 0x0 ordinal: 0x0
  ULONG Key;                       // offset: 0x8 ordinal: 0x1
  union _LARGE_INTEGER ByteOffset; // offset: 0x10 ordinal: 0x2
} __anon_650;

typedef UCHAR (*__anon_577)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            struct _MDL *, struct _DEVICE_OBJECT *);

// 0x8 bytes (sizeof)
typedef struct LIST_ENTRY32 {
  ULONG Flink; // offset: 0x0 ordinal: 0x0
  ULONG Blink; // offset: 0x4 ordinal: 0x1
} LIST_ENTRY32;

// 0x408 bytes (sizeof)
typedef struct _CALL_PERFORMANCE_DATA {
  ULONGLONG SpinLock;               // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY HashTable[64]; // offset: 0x8 ordinal: 0x1
} _CALL_PERFORMANCE_DATA;

// 0x30 bytes (sizeof)
typedef struct _BLOB_TYPE {
  enum _BLOB_ID ResourceId;         // offset: 0x0 ordinal: 0x0
  ULONG PoolTag;                    // offset: 0x4 ordinal: 0x1
  ULONG LookasideIndex;             // offset: 0x8 ordinal: 0x2
  ULONG Flags;                      // offset: 0xc ordinal: 0x3
  struct _BLOB_COUNTERS *Counters;  // offset: 0x10 ordinal: 0x4
  VOID (*DeleteProcedure)(VOID *);  // offset: 0x18 ordinal: 0x5
  LONG (*DestroyProcedure)(VOID *); // offset: 0x20 ordinal: 0x6
  ULONGLONG UsualSize;              // offset: 0x28 ordinal: 0x7
} _BLOB_TYPE;

// 0x8180 bytes (sizeof)
typedef struct _VI_DEADLOCK_GLOBALS {
  LONGLONG TimeAcquire;                 // offset: 0x0 ordinal: 0x0
  LONGLONG TimeRelease;                 // offset: 0x8 ordinal: 0x1
  struct _LIST_ENTRY *ResourceDatabase; // offset: 0x10 ordinal: 0x2
  ULONGLONG ResourceDatabaseCount;      // offset: 0x18 ordinal: 0x3
  struct _VF_ADDRESS_RANGE
      ResourceAddressRange[1023];     // offset: 0x20 ordinal: 0x4
  struct _LIST_ENTRY *ThreadDatabase; // offset: 0x4010 ordinal: 0x5
  ULONGLONG ThreadDatabaseCount;      // offset: 0x4018 ordinal: 0x6
  struct _VF_ADDRESS_RANGE
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
  ULONG StackLimitHits;                      // offset: 0x8038 ordinal: 0x12
  ULONG ABC_ACB_Skipped;                     // offset: 0x803c ordinal: 0x13
  ULONG OutOfOrderReleases;                  // offset: 0x8040 ordinal: 0x14
  ULONG NodesReleasedOutOfOrder;             // offset: 0x8044 ordinal: 0x15
  ULONG TotalReleases;                       // offset: 0x8048 ordinal: 0x16
  ULONG RootNodesDeleted;                    // offset: 0x804c ordinal: 0x17
  ULONG ForgetHistoryCounter;                // offset: 0x8050 ordinal: 0x18
  VOID *Instigator;                          // offset: 0x8058 ordinal: 0x19
  ULONG NumberOfParticipants;                // offset: 0x8060 ordinal: 0x1a
  struct _VI_DEADLOCK_NODE *Participant[32]; // offset: 0x8068 ordinal: 0x1b
  LONG ChildrenCountWatermark;               // offset: 0x8168 ordinal: 0x1c
  enum _KERNEL_STACK_LIMITS StackType;       // offset: 0x816c ordinal: 0x1d
  ULONGLONG StackLowLimit;                   // offset: 0x8170 ordinal: 0x1e
  ULONGLONG StackHighLimit;                  // offset: 0x8178 ordinal: 0x1f
} _VI_DEADLOCK_GLOBALS;

// 0x48 bytes (sizeof)
typedef struct _ETWP_NOTIFICATION_HEADER {
  enum _ETW_NOTIFICATION_TYPE NotificationType; // offset: 0x0 ordinal: 0x0
  ULONG NotificationSize;                       // offset: 0x4 ordinal: 0x1
  LONG RefCount;                                // offset: 0x8 ordinal: 0x2
  UCHAR ReplyRequested;                         // offset: 0xc ordinal: 0x3
  union {
    ULONG ReplyIndex; // offset: 0x10 ordinal: 0x4
    ULONG Timeout;    // offset: 0x10 ordinal: 0x5
  };
  union {
    ULONG ReplyCount;    // offset: 0x14 ordinal: 0x6
    ULONG NotifyeeCount; // offset: 0x14 ordinal: 0x7
  };
  union {
    ULONGLONG ReplyHandle; // offset: 0x18 ordinal: 0x8
    VOID *ReplyObject;     // offset: 0x18 ordinal: 0x9
    ULONG RegIndex;        // offset: 0x18 ordinal: 0xa
  };
  ULONG TargetPID;              // offset: 0x20 ordinal: 0xb
  ULONG SourcePID;              // offset: 0x24 ordinal: 0xc
  struct _GUID DestinationGuid; // offset: 0x28 ordinal: 0xd
  struct _GUID SourceGuid;      // offset: 0x38 ordinal: 0xe
} _ETWP_NOTIFICATION_HEADER;

// 0x48 bytes (sizeof)
typedef struct _PNP_DEVICE_ACTION_ENTRY {
  struct _LIST_ENTRY ListEntry;                // offset: 0x0 ordinal: 0x0
  struct _DEVICE_OBJECT *DeviceObject;         // offset: 0x10 ordinal: 0x1
  enum _PNP_DEVICE_ACTION_REQUEST RequestType; // offset: 0x18 ordinal: 0x2
  UCHAR ReorderingBarrier;                     // offset: 0x1c ordinal: 0x3
  ULONGLONG RequestArgument;                   // offset: 0x20 ordinal: 0x4
  struct _KEVENT *CompletionEvent;             // offset: 0x28 ordinal: 0x5
  LONG *CompletionStatus;                      // offset: 0x30 ordinal: 0x6
  struct _GUID ActivityId;                     // offset: 0x38 ordinal: 0x7
} _PNP_DEVICE_ACTION_ENTRY;

// 0x80 bytes (sizeof)
typedef struct _PTE_TRACKER {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 ordinal: 0x0
  struct _MDL *Mdl;             // offset: 0x10 ordinal: 0x1
  ULONGLONG Count;              // offset: 0x18 ordinal: 0x2
  VOID *SystemVa;               // offset: 0x20 ordinal: 0x3
  VOID *StartVa;                // offset: 0x28 ordinal: 0x4
  ULONG Offset;                 // offset: 0x30 ordinal: 0x5
  ULONG Length;                 // offset: 0x34 ordinal: 0x6
  ULONGLONG Page;               // offset: 0x38 ordinal: 0x7
  ULONG IoMapping : 1;          // offset: 0x40 ordinal: 0x8
  ULONG Matched : 1;            // offset: 0x40 ordinal: 0x9
  ULONG CacheAttribute : 2;     // offset: 0x40 ordinal: 0xa
  ULONG GuardPte : 1;           // offset: 0x40 ordinal: 0xb
  ULONG Spare : 27;             // offset: 0x40 ordinal: 0xc
  VOID *StackTrace[7];          // offset: 0x48 ordinal: 0xd
} _PTE_TRACKER;

// 0x38 bytes (sizeof)
typedef struct _RTLP_RANGE_LIST_ENTRY {
  ULONGLONG Start; // offset: 0x0 ordinal: 0x0
  ULONGLONG End;   // offset: 0x8 ordinal: 0x1
  union {
    struct __anon_2285 Allocated; // offset: 0x10 ordinal: 0x2
    struct __anon_2286 Merged;    // offset: 0x10 ordinal: 0x3
  };
  UCHAR Attributes;             // offset: 0x20 ordinal: 0x4
  UCHAR PublicFlags;            // offset: 0x21 ordinal: 0x5
  USHORT PrivateFlags;          // offset: 0x22 ordinal: 0x6
  struct _LIST_ENTRY ListEntry; // offset: 0x28 ordinal: 0x7
} _RTLP_RANGE_LIST_ENTRY;

// 0x8 bytes (sizeof)
typedef union _WHEA_ERROR_STATUS {
  ULONGLONG ErrorStatus;    // offset: 0x0 ordinal: 0x0
  ULONGLONG Reserved1 : 8;  // offset: 0x0 ordinal: 0x1
  ULONGLONG ErrorType : 8;  // offset: 0x0 ordinal: 0x2
  ULONGLONG Address : 1;    // offset: 0x0 ordinal: 0x3
  ULONGLONG Control : 1;    // offset: 0x0 ordinal: 0x4
  ULONGLONG Data : 1;       // offset: 0x0 ordinal: 0x5
  ULONGLONG Responder : 1;  // offset: 0x0 ordinal: 0x6
  ULONGLONG Requester : 1;  // offset: 0x0 ordinal: 0x7
  ULONGLONG FirstError : 1; // offset: 0x0 ordinal: 0x8
  ULONGLONG Overflow : 1;   // offset: 0x0 ordinal: 0x9
  ULONGLONG Reserved2 : 41; // offset: 0x0 ordinal: 0xa
} _WHEA_ERROR_STATUS;

// 0x8 bytes (sizeof)
typedef union _WHEA_MEMORY_ERROR_SECTION_VALIDBITS {
  ULONGLONG ErrorStatus : 1;         // offset: 0x0 ordinal: 0x0
  ULONGLONG PhysicalAddress : 1;     // offset: 0x0 ordinal: 0x1
  ULONGLONG PhysicalAddressMask : 1; // offset: 0x0 ordinal: 0x2
  ULONGLONG Node : 1;                // offset: 0x0 ordinal: 0x3
  ULONGLONG Card : 1;                // offset: 0x0 ordinal: 0x4
  ULONGLONG Module : 1;              // offset: 0x0 ordinal: 0x5
  ULONGLONG Bank : 1;                // offset: 0x0 ordinal: 0x6
  ULONGLONG Device : 1;              // offset: 0x0 ordinal: 0x7
  ULONGLONG Row : 1;                 // offset: 0x0 ordinal: 0x8
  ULONGLONG Column : 1;              // offset: 0x0 ordinal: 0x9
  ULONGLONG BitPosition : 1;         // offset: 0x0 ordinal: 0xa
  ULONGLONG RequesterId : 1;         // offset: 0x0 ordinal: 0xb
  ULONGLONG ResponderId : 1;         // offset: 0x0 ordinal: 0xc
  ULONGLONG TargetId : 1;            // offset: 0x0 ordinal: 0xd
  ULONGLONG ErrorType : 1;           // offset: 0x0 ordinal: 0xe
  ULONGLONG Reserved : 49;           // offset: 0x0 ordinal: 0xf
  ULONGLONG ValidBits;               // offset: 0x0 ordinal: 0x10
} _WHEA_MEMORY_ERROR_SECTION_VALIDBITS;

// 0x49 bytes (sizeof)
typedef struct _WHEA_MEMORY_ERROR_SECTION {
  union _WHEA_MEMORY_ERROR_SECTION_VALIDBITS
      ValidBits;                        // offset: 0x0 ordinal: 0x0
  union _WHEA_ERROR_STATUS ErrorStatus; // offset: 0x8 ordinal: 0x1
  ULONGLONG PhysicalAddress;            // offset: 0x10 ordinal: 0x2
  ULONGLONG PhysicalAddressMask;        // offset: 0x18 ordinal: 0x3
  USHORT Node;                          // offset: 0x20 ordinal: 0x4
  USHORT Card;                          // offset: 0x22 ordinal: 0x5
  USHORT Module;                        // offset: 0x24 ordinal: 0x6
  USHORT Bank;                          // offset: 0x26 ordinal: 0x7
  USHORT Device;                        // offset: 0x28 ordinal: 0x8
  USHORT Row;                           // offset: 0x2a ordinal: 0x9
  USHORT Column;                        // offset: 0x2c ordinal: 0xa
  USHORT BitPosition;                   // offset: 0x2e ordinal: 0xb
  ULONGLONG RequesterId;                // offset: 0x30 ordinal: 0xc
  ULONGLONG ResponderId;                // offset: 0x38 ordinal: 0xd
  ULONGLONG TargetId;                   // offset: 0x40 ordinal: 0xe
  UCHAR ErrorType;                      // offset: 0x48 ordinal: 0xf
} _WHEA_MEMORY_ERROR_SECTION;

// 0x8 bytes (sizeof)
typedef struct _MI_SESSION_DRIVER_UNLOAD {
  union {
    VOID (*Function)(struct _DRIVER_OBJECT *); // offset: 0x0 ordinal: 0x0
    ULONGLONG FunctionValue;                   // offset: 0x0 ordinal: 0x1
  };
} _MI_SESSION_DRIVER_UNLOAD;

// 0x80 bytes (sizeof)
typedef struct _VF_POOL_TRACE {
  VOID *Address;           // offset: 0x0 ordinal: 0x0
  ULONGLONG Size;          // offset: 0x8 ordinal: 0x1
  struct _ETHREAD *Thread; // offset: 0x10 ordinal: 0x2
  VOID *StackTrace[13];    // offset: 0x18 ordinal: 0x3
} _VF_POOL_TRACE;

// 0x20 bytes (sizeof)
typedef struct _LOCK_HEADER {
  struct _RTL_AVL_TREE LockTree; // offset: 0x0 ordinal: 0x0
  ULONGLONG Count;               // offset: 0x8 ordinal: 0x1
  ULONGLONG Lock;                // offset: 0x10 ordinal: 0x2
  ULONG Valid;                   // offset: 0x18 ordinal: 0x3
} _LOCK_HEADER;

// 0x1e0 bytes (sizeof)
typedef struct _PO_HIBER_PERF {
  ULONGLONG HiberIoTicks;                     // offset: 0x0 ordinal: 0x0
  ULONGLONG HiberIoCpuTicks;                  // offset: 0x8 ordinal: 0x1
  ULONGLONG HiberInitTicks;                   // offset: 0x10 ordinal: 0x2
  ULONGLONG HiberHiberFileTicks;              // offset: 0x18 ordinal: 0x3
  ULONGLONG HiberCompressTicks;               // offset: 0x20 ordinal: 0x4
  ULONGLONG HiberSharedBufferTicks;           // offset: 0x28 ordinal: 0x5
  ULONGLONG HiberChecksumTicks;               // offset: 0x30 ordinal: 0x6
  ULONGLONG HiberChecksumIoTicks;             // offset: 0x38 ordinal: 0x7
  union _LARGE_INTEGER TotalHibernateTime;    // offset: 0x40 ordinal: 0x8
  ULONG POSTTime;                             // offset: 0x48 ordinal: 0x9
  ULONG ResumeBootMgrTime;                    // offset: 0x4c ordinal: 0xa
  ULONG BootmgrUserInputTime;                 // offset: 0x50 ordinal: 0xb
  ULONGLONG ResumeAppTicks;                   // offset: 0x58 ordinal: 0xc
  ULONGLONG ResumeAppStartTimestamp;          // offset: 0x60 ordinal: 0xd
  ULONGLONG ResumeLibraryInitTicks;           // offset: 0x68 ordinal: 0xe
  ULONGLONG ResumeInitTicks;                  // offset: 0x70 ordinal: 0xf
  ULONGLONG ResumeRestoreImageStartTimestamp; // offset: 0x78 ordinal: 0x10
  ULONGLONG ResumeHiberFileTicks;             // offset: 0x80 ordinal: 0x11
  ULONGLONG ResumeIoTicks;                    // offset: 0x88 ordinal: 0x12
  ULONGLONG ResumeDecompressTicks;            // offset: 0x90 ordinal: 0x13
  ULONGLONG ResumeAllocateTicks;              // offset: 0x98 ordinal: 0x14
  ULONGLONG ResumeUserInOutTicks;             // offset: 0xa0 ordinal: 0x15
  ULONGLONG ResumeMapTicks;                   // offset: 0xa8 ordinal: 0x16
  ULONGLONG ResumeUnmapTicks;                 // offset: 0xb0 ordinal: 0x17
  ULONGLONG ResumeChecksumTicks;              // offset: 0xb8 ordinal: 0x18
  ULONGLONG ResumeChecksumIoTicks;            // offset: 0xc0 ordinal: 0x19
  ULONGLONG ResumeKernelSwitchTimestamp;      // offset: 0xc8 ordinal: 0x1a
  ULONGLONG WriteLogDataTimestamp;            // offset: 0xd0 ordinal: 0x1b
  ULONGLONG KernelReturnFromHandler;          // offset: 0xd8 ordinal: 0x1c
  ULONGLONG TimeStampCounterAtSwitchTime;     // offset: 0xe0 ordinal: 0x1d
  ULONGLONG HalTscOffset;                     // offset: 0xe8 ordinal: 0x1e
  ULONGLONG HvlTscOffset;                     // offset: 0xf0 ordinal: 0x1f
  ULONGLONG SleeperThreadEnd;                 // offset: 0xf8 ordinal: 0x20
  ULONGLONG
  KernelReturnSystemPowerStateTimestamp; // offset: 0x100 ordinal: 0x21
  ULONGLONG IoBoundedness;               // offset: 0x108 ordinal: 0x22
  ULONGLONG KernelDecompressTicks;       // offset: 0x110 ordinal: 0x23
  ULONGLONG KernelIoTicks;               // offset: 0x118 ordinal: 0x24
  ULONGLONG KernelCopyTicks;             // offset: 0x120 ordinal: 0x25
  ULONGLONG ReadCheckCount;              // offset: 0x128 ordinal: 0x26
  ULONGLONG KernelInitTicks;             // offset: 0x130 ordinal: 0x27
  ULONGLONG KernelResumeHiberFileTicks;  // offset: 0x138 ordinal: 0x28
  ULONGLONG KernelIoCpuTicks;            // offset: 0x140 ordinal: 0x29
  ULONGLONG KernelSharedBufferTicks;     // offset: 0x148 ordinal: 0x2a
  ULONGLONG KernelAnimationTicks;        // offset: 0x150 ordinal: 0x2b
  ULONGLONG KernelChecksumTicks;         // offset: 0x158 ordinal: 0x2c
  ULONGLONG KernelChecksumIoTicks;       // offset: 0x160 ordinal: 0x2d
  union _LARGE_INTEGER AnimationStart;   // offset: 0x168 ordinal: 0x2e
  union _LARGE_INTEGER AnimationStop;    // offset: 0x170 ordinal: 0x2f
  ULONG DeviceResumeTime;                // offset: 0x178 ordinal: 0x30
  ULONGLONG SecurePagesProcessed;        // offset: 0x180 ordinal: 0x31
  ULONGLONG BootPagesProcessed;          // offset: 0x188 ordinal: 0x32
  ULONGLONG KernelPagesProcessed;        // offset: 0x190 ordinal: 0x33
  ULONGLONG BootBytesWritten;            // offset: 0x198 ordinal: 0x34
  ULONGLONG KernelBytesWritten;          // offset: 0x1a0 ordinal: 0x35
  ULONGLONG BootPagesWritten;            // offset: 0x1a8 ordinal: 0x36
  ULONGLONG KernelPagesWritten;          // offset: 0x1b0 ordinal: 0x37
  ULONGLONG BytesWritten;                // offset: 0x1b8 ordinal: 0x38
  ULONG PagesWritten;                    // offset: 0x1c0 ordinal: 0x39
  ULONG FileRuns;                        // offset: 0x1c4 ordinal: 0x3a
  ULONG NoMultiStageResumeReason;        // offset: 0x1c8 ordinal: 0x3b
  ULONG MaxHuffRatio;                    // offset: 0x1cc ordinal: 0x3c
  ULONGLONG AdjustedTotalResumeTime;     // offset: 0x1d0 ordinal: 0x3d
  ULONGLONG ResumeCompleteTimestamp;     // offset: 0x1d8 ordinal: 0x3e
} _PO_HIBER_PERF;

// 0x70 bytes (sizeof)
typedef struct _POP_IO_INFO {
  struct _MDL *DumpMdl;            // offset: 0x0 ordinal: 0x0
  enum _POP_IO_STATUS IoStatus;    // offset: 0x8 ordinal: 0x1
  ULONGLONG IoStartCount;          // offset: 0x10 ordinal: 0x2
  ULONGLONG IoBytesCompleted;      // offset: 0x18 ordinal: 0x3
  ULONGLONG IoBytesInProgress;     // offset: 0x20 ordinal: 0x4
  ULONGLONG RequestSize;           // offset: 0x28 ordinal: 0x5
  union _LARGE_INTEGER IoLocation; // offset: 0x30 ordinal: 0x6
  ULONGLONG FileOffset;            // offset: 0x38 ordinal: 0x7
  VOID *Buffer;                    // offset: 0x40 ordinal: 0x8
  UCHAR AsyncCapable;              // offset: 0x48 ordinal: 0x9
  ULONGLONG BytesToRead;           // offset: 0x50 ordinal: 0xa
  ULONG Pages;                     // offset: 0x58 ordinal: 0xb
  ULONGLONG HighestChecksumIndex;  // offset: 0x60 ordinal: 0xc
  USHORT PreviousChecksum;         // offset: 0x68 ordinal: 0xd
} _POP_IO_INFO;

// 0x1d0 bytes (sizeof)
typedef struct _POP_DEVICE_SYS_STATE {
  UCHAR IrpMinor;                        // offset: 0x0 ordinal: 0x0
  enum _SYSTEM_POWER_STATE SystemState;  // offset: 0x4 ordinal: 0x1
  ULONGLONG SpinLock;                    // offset: 0x8 ordinal: 0x2
  struct _KTHREAD *Thread;               // offset: 0x10 ordinal: 0x3
  struct _KEVENT *AbortEvent;            // offset: 0x18 ordinal: 0x4
  struct _KSEMAPHORE *ReadySemaphore;    // offset: 0x20 ordinal: 0x5
  struct _KSEMAPHORE *FinishedSemaphore; // offset: 0x28 ordinal: 0x6
  struct _PO_DEVICE_NOTIFY_ORDER Order;  // offset: 0x30 ordinal: 0x7
  struct _LIST_ENTRY Pending;            // offset: 0x1a8 ordinal: 0x8
  LONG Status;                           // offset: 0x1b8 ordinal: 0x9
  struct _DEVICE_OBJECT *FailedDevice;   // offset: 0x1c0 ordinal: 0xa
  UCHAR Waking;                          // offset: 0x1c8 ordinal: 0xb
  UCHAR Cancelled;                       // offset: 0x1c9 ordinal: 0xc
  UCHAR IgnoreErrors;                    // offset: 0x1ca ordinal: 0xd
  UCHAR IgnoreNotImplemented;            // offset: 0x1cb ordinal: 0xe
  UCHAR TimeRefreshLockAcquired;         // offset: 0x1cc ordinal: 0xf
} _POP_DEVICE_SYS_STATE;

// 0x18 bytes (sizeof)
typedef struct _POP_CURRENT_BROADCAST {
  UCHAR InProgress;                                 // offset: 0x0 ordinal: 0x0
  struct _SYSTEM_POWER_STATE_CONTEXT SystemContext; // offset: 0x4 ordinal: 0x1
  enum POWER_ACTION PowerAction;                    // offset: 0x8 ordinal: 0x2
  struct _POP_DEVICE_SYS_STATE *DeviceState;        // offset: 0x10 ordinal: 0x3
} _POP_CURRENT_BROADCAST;

// 0x28 bytes (sizeof)
typedef struct _DIAGNOSTIC_BUFFER {
  ULONGLONG Size;                    // offset: 0x0 ordinal: 0x0
  enum _REQUESTER_TYPE CallerType;   // offset: 0x8 ordinal: 0x1
  ULONGLONG ProcessImageNameOffset;  // offset: 0x10 ordinal: 0x2
  ULONG ProcessId;                   // offset: 0x18 ordinal: 0x3
  ULONG ServiceTag;                  // offset: 0x1c ordinal: 0x4
  ULONGLONG DeviceDescriptionOffset; // offset: 0x10 ordinal: 0x5
  ULONGLONG DevicePathOffset;        // offset: 0x18 ordinal: 0x6
  ULONGLONG ReasonOffset;            // offset: 0x20 ordinal: 0x7
} _DIAGNOSTIC_BUFFER;

// 0x18 bytes (sizeof)
typedef struct __anon_2193 {
  ULONGLONG RequestedTime;              // offset: 0x0 ordinal: 0x0
  ULONGLONG ProgrammedTime;             // offset: 0x8 ordinal: 0x1
  struct _DIAGNOSTIC_BUFFER *TimerInfo; // offset: 0x10 ordinal: 0x2
} __anon_2193;

// 0xf0 bytes (sizeof)
typedef struct _ETW_WMITRACE_WORK {
  ULONG LoggerId;        // offset: 0x0 ordinal: 0x0
  ULONG SpareUlong;      // offset: 0x4 ordinal: 0x1
  CHAR LoggerName[65];   // offset: 0x8 ordinal: 0x2
  CHAR FileName[129];    // offset: 0x49 ordinal: 0x3
  ULONG MaximumFileSize; // offset: 0xcc ordinal: 0x4
  ULONG MinBuffers;      // offset: 0xd0 ordinal: 0x5
  ULONG MaxBuffers;      // offset: 0xd4 ordinal: 0x6
  ULONG BufferSize;      // offset: 0xd8 ordinal: 0x7
  ULONG Mode;            // offset: 0xdc ordinal: 0x8
  ULONG FlushTimer;      // offset: 0xe0 ordinal: 0x9
  ULONGLONG MatchAny;    // offset: 0x8 ordinal: 0xa
  ULONGLONG MatchAll;    // offset: 0x10 ordinal: 0xb
  ULONG EnableProperty;  // offset: 0x18 ordinal: 0xc
  struct _GUID Guid;     // offset: 0x1c ordinal: 0xd
  UCHAR Level;           // offset: 0x2c ordinal: 0xe
  LONG Status;           // offset: 0xe8 ordinal: 0xf
} _ETW_WMITRACE_WORK;

// 0x30 bytes (sizeof)
typedef struct _MI_TRIAGE_DUMP_DATA {
  ULONGLONG BadPageCount;                 // offset: 0x0 ordinal: 0x0
  LONG BadPagesDetected;                  // offset: 0x8 ordinal: 0x1
  LONG ZeroedPageSingleBitErrorsDetected; // offset: 0xc ordinal: 0x2
  LONG ScrubPasses;                       // offset: 0x10 ordinal: 0x3
  LONG ScrubBadPagesFound;                // offset: 0x14 ordinal: 0x4
  ULONG PageHashErrors;                   // offset: 0x18 ordinal: 0x5
  ULONGLONG FeatureBits;                  // offset: 0x20 ordinal: 0x6
  ULONG TimeZoneId;                       // offset: 0x28 ordinal: 0x7
} _MI_TRIAGE_DUMP_DATA;

// 0x10 bytes (sizeof)
typedef struct _VF_AVL_TREE_NODE {
  VOID *p;             // offset: 0x0 ordinal: 0x0
  ULONGLONG RangeSize; // offset: 0x8 ordinal: 0x1
} _VF_AVL_TREE_NODE;

// 0xc0 bytes (sizeof)
typedef struct _VF_AVL_TABLE {
  struct _RTL_AVL_TABLE RtlTable;         // offset: 0x0 ordinal: 0x0
  struct _VF_AVL_TREE_NODE *ReservedNode; // offset: 0x68 ordinal: 0x1
  VOID *NodeToFree;                       // offset: 0x70 ordinal: 0x2
  LONG Lock;                              // offset: 0x80 ordinal: 0x3
} _VF_AVL_TABLE;

// 0x20 bytes (sizeof)
typedef struct _VF_AVL_TREE {
  ULONGLONG NodeRangeSize;      // offset: 0x0 ordinal: 0x0
  ULONGLONG NodeCount;          // offset: 0x8 ordinal: 0x1
  struct _VF_AVL_TABLE *Tables; // offset: 0x10 ordinal: 0x2
  ULONG TablesNo;               // offset: 0x18 ordinal: 0x3
  union __anon_2327 u1;         // offset: 0x1c ordinal: 0x4
} _VF_AVL_TREE;

// 0x20 bytes (sizeof)
typedef struct _NON_PAGED_DEBUG_INFO {
  USHORT Signature;       // offset: 0x0 ordinal: 0x0
  USHORT Flags;           // offset: 0x2 ordinal: 0x1
  ULONG Size;             // offset: 0x4 ordinal: 0x2
  USHORT Machine;         // offset: 0x8 ordinal: 0x3
  USHORT Characteristics; // offset: 0xa ordinal: 0x4
  ULONG TimeDateStamp;    // offset: 0xc ordinal: 0x5
  ULONG CheckSum;         // offset: 0x10 ordinal: 0x6
  ULONG SizeOfImage;      // offset: 0x14 ordinal: 0x7
  ULONGLONG ImageBase;    // offset: 0x18 ordinal: 0x8
} _NON_PAGED_DEBUG_INFO;

// 0xa0 bytes (sizeof)
typedef struct _KLDR_DATA_TABLE_ENTRY {
  struct _LIST_ENTRY InLoadOrderLinks;             // offset: 0x0 ordinal: 0x0
  VOID *ExceptionTable;                            // offset: 0x10 ordinal: 0x1
  ULONG ExceptionTableSize;                        // offset: 0x18 ordinal: 0x2
  VOID *GpValue;                                   // offset: 0x20 ordinal: 0x3
  struct _NON_PAGED_DEBUG_INFO *NonPagedDebugInfo; // offset: 0x28 ordinal: 0x4
  VOID *DllBase;                                   // offset: 0x30 ordinal: 0x5
  VOID *EntryPoint;                                // offset: 0x38 ordinal: 0x6
  ULONG SizeOfImage;                               // offset: 0x40 ordinal: 0x7
  struct _UNICODE_STRING FullDllName;              // offset: 0x48 ordinal: 0x8
  struct _UNICODE_STRING BaseDllName;              // offset: 0x58 ordinal: 0x9
  ULONG Flags;                                     // offset: 0x68 ordinal: 0xa
  USHORT LoadCount;                                // offset: 0x6c ordinal: 0xb
  union __anon_2124 u1;                            // offset: 0x6e ordinal: 0xc
  VOID *SectionPointer;                            // offset: 0x70 ordinal: 0xd
  ULONG CheckSum;                                  // offset: 0x78 ordinal: 0xe
  ULONG CoverageSectionSize;                       // offset: 0x7c ordinal: 0xf
  VOID *CoverageSection;                           // offset: 0x80 ordinal: 0x10
  VOID *LoadedImports;                             // offset: 0x88 ordinal: 0x11
  VOID *Spare;                                     // offset: 0x90 ordinal: 0x12
  ULONG SizeOfImageNotRounded;                     // offset: 0x98 ordinal: 0x13
  ULONG TimeDateStamp;                             // offset: 0x9c ordinal: 0x14
} _KLDR_DATA_TABLE_ENTRY;

// 0x8 bytes (sizeof)
typedef union __anon_2122 {
  struct _CONTROL_AREA *ControlArea;   // offset: 0x0 ordinal: 0x0
  struct _FILE_OBJECT *FileObject;     // offset: 0x0 ordinal: 0x1
  ULONGLONG RemoteImageFileObject : 1; // offset: 0x0 ordinal: 0x2
  ULONGLONG RemoteDataFileObject : 1;  // offset: 0x0 ordinal: 0x3
} __anon_2122;

// 0x10 bytes (sizeof)
typedef struct _MI_ZERO_COST_COUNTS {
  ULONGLONG NativeSum; // offset: 0x0 ordinal: 0x0
  ULONGLONG CachedSum; // offset: 0x8 ordinal: 0x1
} _MI_ZERO_COST_COUNTS;

// 0x10 bytes (sizeof)
typedef struct _HAL_CHANNEL_MEMORY_RANGES {
  ULONGLONG PageFrameIndex; // offset: 0x0 ordinal: 0x0
  USHORT MpnId;             // offset: 0x8 ordinal: 0x1
  USHORT Node;              // offset: 0xa ordinal: 0x2
  USHORT Channel;           // offset: 0xc ordinal: 0x3
  UCHAR IsPowerManageable;  // offset: 0xe ordinal: 0x4
  UCHAR DeepPowerState;     // offset: 0xf ordinal: 0x5
} _HAL_CHANNEL_MEMORY_RANGES;

// 0x10 bytes (sizeof)
typedef struct _HAL_NODE_RANGE {
  ULONGLONG PageFrameIndex; // offset: 0x0 ordinal: 0x0
  ULONG Node;               // offset: 0x8 ordinal: 0x1
} _HAL_NODE_RANGE;

// 0x20 bytes (sizeof)
typedef struct _MI_IO_CACHE_STATS {
  ULONGLONG UnusedBlocks;      // offset: 0x0 ordinal: 0x0
  ULONG ActiveCacheMatch;      // offset: 0x8 ordinal: 0x1
  ULONG ActiveCacheOverride;   // offset: 0xc ordinal: 0x2
  ULONG UnmappedCacheFlush;    // offset: 0x10 ordinal: 0x3
  ULONG UnmappedCacheMatch;    // offset: 0x14 ordinal: 0x4
  ULONG UnmappedCacheConflict; // offset: 0x18 ordinal: 0x5
} _MI_IO_CACHE_STATS;

// 0x28 bytes (sizeof)
typedef struct _MI_CROSS_PARTITION_CHARGES {
  ULONGLONG CurrentCharges; // offset: 0x0 ordinal: 0x0
  ULONGLONG ChargeFailures; // offset: 0x8 ordinal: 0x1
  ULONGLONG ChargePeak;     // offset: 0x10 ordinal: 0x2
  ULONGLONG ChargeMinimum;  // offset: 0x18 ordinal: 0x3
  ULONGLONG ChargeMaximum;  // offset: 0x20 ordinal: 0x4
} _MI_CROSS_PARTITION_CHARGES;

// 0x3c0 bytes (sizeof)
typedef struct _MI_RESAVAIL_TRACKER {
  ULONGLONG AllocateKernelStack;                  // offset: 0x0 ordinal: 0x0
  ULONGLONG AllocateGrowKernelStack;              // offset: 0x8 ordinal: 0x1
  ULONGLONG FreeKernelStack;                      // offset: 0x10 ordinal: 0x2
  ULONGLONG FreeKernelStackError;                 // offset: 0x18 ordinal: 0x3
  ULONGLONG FreeGrowKernelStackError;             // offset: 0x20 ordinal: 0x4
  ULONGLONG AllocateCreateProcess;                // offset: 0x28 ordinal: 0x5
  ULONGLONG FreeCreateProcessError;               // offset: 0x30 ordinal: 0x6
  ULONGLONG FreeDeleteProcess;                    // offset: 0x38 ordinal: 0x7
  ULONGLONG FreeCleanProcess;                     // offset: 0x40 ordinal: 0x8
  ULONGLONG FreeCleanProcessError;                // offset: 0x48 ordinal: 0x9
  ULONGLONG AllocateAddProcessWsMetaPage;         // offset: 0x50 ordinal: 0xa
  ULONGLONG AllocateWsIncrease;                   // offset: 0x58 ordinal: 0xb
  ULONGLONG FreeWsIncreaseError;                  // offset: 0x60 ordinal: 0xc
  ULONGLONG FreeWsIncreaseErrorMax;               // offset: 0x68 ordinal: 0xd
  ULONGLONG FreeWsDecrease;                       // offset: 0x70 ordinal: 0xe
  ULONGLONG AllocateWorkingSetPage;               // offset: 0x78 ordinal: 0xf
  ULONGLONG FreeWorkingSetPageError;              // offset: 0x80 ordinal: 0x10
  ULONGLONG FreeDeletePteRange;                   // offset: 0x88 ordinal: 0x11
  ULONGLONG AllocatePageTablesForProcessMetadata; // offset: 0x90 ordinal: 0x12
  ULONGLONG
  FreePageTablesForProcessMetadataError2;       // offset: 0x98 ordinal: 0x13
  ULONGLONG AllocatePageTablesForSystem;        // offset: 0xa0 ordinal: 0x14
  ULONGLONG FreePageTablesExcess;               // offset: 0xa8 ordinal: 0x15
  ULONGLONG FreeSystemVaPageTables;             // offset: 0xb0 ordinal: 0x16
  ULONGLONG FreeSessionVaPageTables;            // offset: 0xb8 ordinal: 0x17
  ULONGLONG AllocateCreateSession;              // offset: 0xc0 ordinal: 0x18
  ULONGLONG FreeSessionWsDereference;           // offset: 0xc8 ordinal: 0x19
  ULONGLONG FreeSessionDereference;             // offset: 0xd0 ordinal: 0x1a
  ULONGLONG AllocateLockedSessionImage;         // offset: 0xd8 ordinal: 0x1b
  ULONGLONG FreeLockedSessionImage;             // offset: 0xe0 ordinal: 0x1c
  ULONGLONG FreeSessionImageConversion;         // offset: 0xe8 ordinal: 0x1d
  ULONGLONG AllocateWsAdjustPageTable;          // offset: 0xf0 ordinal: 0x1e
  ULONGLONG FreeWsAdjustPageTable;              // offset: 0xf8 ordinal: 0x1f
  ULONGLONG FreeWsAdjustPageTableError;         // offset: 0x100 ordinal: 0x20
  ULONGLONG AllocateNoLowMemory;                // offset: 0x108 ordinal: 0x21
  ULONGLONG AllocatePagedPoolLockedDown;        // offset: 0x110 ordinal: 0x22
  ULONGLONG FreePagedPoolLockedDown;            // offset: 0x118 ordinal: 0x23
  ULONGLONG AllocateSystemBitmaps;              // offset: 0x120 ordinal: 0x24
  ULONGLONG FreeSystemBitmapsError;             // offset: 0x128 ordinal: 0x25
  ULONGLONG AllocateForMdl;                     // offset: 0x130 ordinal: 0x26
  ULONGLONG FreeFromMdl;                        // offset: 0x138 ordinal: 0x27
  ULONGLONG AllocateForMdlPartition;            // offset: 0x140 ordinal: 0x28
  ULONGLONG FreeFromMdlPartition;               // offset: 0x148 ordinal: 0x29
  ULONGLONG FreeMdlExcess;                      // offset: 0x150 ordinal: 0x2a
  ULONGLONG AllocateExpansionNonPagedPool;      // offset: 0x158 ordinal: 0x2b
  ULONGLONG FreeExpansionNonPagedPool;          // offset: 0x160 ordinal: 0x2c
  ULONGLONG AllocateVad;                        // offset: 0x168 ordinal: 0x2d
  ULONGLONG RemoveVad;                          // offset: 0x170 ordinal: 0x2e
  ULONGLONG FreeVad;                            // offset: 0x178 ordinal: 0x2f
  ULONGLONG AllocateContiguous;                 // offset: 0x180 ordinal: 0x30
  ULONGLONG FreeContiguousPages;                // offset: 0x188 ordinal: 0x31
  ULONGLONG FreeContiguousError;                // offset: 0x190 ordinal: 0x32
  ULONGLONG FreeLargePageMemory;                // offset: 0x198 ordinal: 0x33
  ULONGLONG AllocateSystemWsles;                // offset: 0x1a0 ordinal: 0x34
  ULONGLONG FreeSystemWsles;                    // offset: 0x1a8 ordinal: 0x35
  ULONGLONG AllocateSystemInitWs;               // offset: 0x1b0 ordinal: 0x36
  ULONGLONG AllocateSessionInitWs;              // offset: 0x1b8 ordinal: 0x37
  ULONGLONG FreeSessionInitWsError;             // offset: 0x1c0 ordinal: 0x38
  ULONGLONG AllocateSystemImage;                // offset: 0x1c8 ordinal: 0x39
  ULONGLONG AllocateSystemImageLoad;            // offset: 0x1d0 ordinal: 0x3a
  ULONGLONG AllocateSessionSharedImage;         // offset: 0x1d8 ordinal: 0x3b
  ULONGLONG FreeSystemImageInitCode;            // offset: 0x1e0 ordinal: 0x3c
  ULONGLONG FreeSystemImageLargePageConversion; // offset: 0x1e8 ordinal: 0x3d
  ULONGLONG FreeSystemImageError;               // offset: 0x1f0 ordinal: 0x3e
  ULONGLONG FreeSystemImageLoadExcess;          // offset: 0x1f8 ordinal: 0x3f
  ULONGLONG FreeUnloadSystemImage;              // offset: 0x200 ordinal: 0x40
  ULONGLONG FreeReloadBootImageLarge;           // offset: 0x208 ordinal: 0x41
  ULONGLONG FreeIndependent;                    // offset: 0x210 ordinal: 0x42
  ULONGLONG AllocateHotAdd;                     // offset: 0x218 ordinal: 0x43
  ULONGLONG AllocateHotRemove;                  // offset: 0x220 ordinal: 0x44
  ULONGLONG FreeHotAdd;                         // offset: 0x228 ordinal: 0x45
  ULONGLONG FreeHotAddEcc;                      // offset: 0x230 ordinal: 0x46
  ULONGLONG FreeHotAddError;                    // offset: 0x238 ordinal: 0x47
  ULONGLONG FreeHotAddUnmap;                    // offset: 0x240 ordinal: 0x48
  ULONGLONG AllocateBoot;                       // offset: 0x248 ordinal: 0x49
  ULONGLONG FreeLoaderBlock;                    // offset: 0x250 ordinal: 0x4a
  ULONGLONG AllocateNonPagedSpecialPool;        // offset: 0x258 ordinal: 0x4b
  ULONGLONG FreeNonPagedSpecialPoolError;       // offset: 0x260 ordinal: 0x4c
  ULONGLONG FreeNonPagedSpecialPool;            // offset: 0x268 ordinal: 0x4d
  ULONGLONG AllocateSharedSegmentPage;          // offset: 0x270 ordinal: 0x4e
  ULONGLONG FreeSharedSegmentPage;              // offset: 0x278 ordinal: 0x4f
  ULONGLONG AllocateZeroPage;                   // offset: 0x280 ordinal: 0x50
  ULONGLONG FreeZeroPage;                       // offset: 0x288 ordinal: 0x51
  ULONGLONG AllocateForPo;                      // offset: 0x290 ordinal: 0x52
  ULONGLONG AllocateForPoForce;                 // offset: 0x298 ordinal: 0x53
  ULONGLONG FreeForPo;                          // offset: 0x2a0 ordinal: 0x54
  ULONGLONG AllocateThreadHardFaultBehavior;    // offset: 0x2a8 ordinal: 0x55
  ULONGLONG FreeThreadHardFaultBehavior;        // offset: 0x2b0 ordinal: 0x56
  ULONGLONG ObtainFaultCharges;                 // offset: 0x2b8 ordinal: 0x57
  ULONGLONG FreeFaultCharges;                   // offset: 0x2c0 ordinal: 0x58
  ULONGLONG AllocateStoreCharges;               // offset: 0x2c8 ordinal: 0x59
  ULONGLONG FreeStoreCharges;                   // offset: 0x2d0 ordinal: 0x5a
  ULONGLONG ObtainLockedPageCharge;             // offset: 0x300 ordinal: 0x5b
  ULONGLONG FreeLockedPageCharge;               // offset: 0x340 ordinal: 0x5c
  ULONGLONG AllocateStore;                      // offset: 0x348 ordinal: 0x5d
  ULONGLONG FreeStore;                          // offset: 0x350 ordinal: 0x5e
  ULONGLONG AllocateSystemImageProtos;          // offset: 0x358 ordinal: 0x5f
  ULONGLONG FreeSystemImageProtos;              // offset: 0x360 ordinal: 0x60
  ULONGLONG AllocateModWriterCharge;            // offset: 0x368 ordinal: 0x61
  ULONGLONG FreeModWriterCharge;                // offset: 0x370 ordinal: 0x62
  ULONGLONG AllocateMappedWriterCharge;         // offset: 0x378 ordinal: 0x63
  ULONGLONG FreeMappedWriterCharge;             // offset: 0x380 ordinal: 0x64
  ULONGLONG AllocateRegistryCharges;            // offset: 0x388 ordinal: 0x65
  ULONGLONG FreeRegistryCharges;                // offset: 0x390 ordinal: 0x66
} _MI_RESAVAIL_TRACKER;

// 0x40 bytes (sizeof)
typedef struct _MI_SYSTEM_TRIM_STATE {
  ULONGLONG ExpansionLock;                // offset: 0x0 ordinal: 0x0
  LONG TrimInProgressCount;               // offset: 0x8 ordinal: 0x1
  struct _KEVENT PeriodicWorkingSetEvent; // offset: 0x10 ordinal: 0x2
  ULONG TrimAllPageFaultCount[3];         // offset: 0x28 ordinal: 0x3
} _MI_SYSTEM_TRIM_STATE;

// 0x58 bytes (sizeof)
typedef struct _MI_IO_PAGE_STATE {
  ULONGLONG IoPfnLock;                    // offset: 0x0 ordinal: 0x0
  struct _RTL_AVL_TREE IoPfnRoot[3];      // offset: 0x8 ordinal: 0x1
  struct _LIST_ENTRY UnusedCachedMaps;    // offset: 0x20 ordinal: 0x2
  ULONG OldestCacheFlushTimeStamp;        // offset: 0x30 ordinal: 0x3
  struct _MI_IO_CACHE_STATS IoCacheStats; // offset: 0x38 ordinal: 0x4
} _MI_IO_PAGE_STATE;

// 0xf0 bytes (sizeof)
typedef struct _MI_POOL_STATE {
  ULONGLONG MaximumNonPagedPoolThreshold; // offset: 0x0 ordinal: 0x0
  ULONG NonPagedPoolSListMaximum[3];      // offset: 0x8 ordinal: 0x1
  ULONGLONG AllocatedNonPagedPool;        // offset: 0x18 ordinal: 0x2
  struct _SINGLE_LIST_ENTRY BadPoolHead;  // offset: 0x20 ordinal: 0x3
  ULONG PoolFailures[3][3];               // offset: 0x28 ordinal: 0x4
  ULONG PoolFailureReasons[11];           // offset: 0x4c ordinal: 0x5
  ULONGLONG LowPagedPoolThreshold;        // offset: 0x78 ordinal: 0x6
  ULONGLONG HighPagedPoolThreshold;       // offset: 0x80 ordinal: 0x7
  ULONG PagedPoolSListMaximum;            // offset: 0x88 ordinal: 0x8
  ULONG PreemptiveTrims[4];               // offset: 0x8c ordinal: 0x9
  ULONGLONG SpecialPagesInUsePeak;        // offset: 0xa0 ordinal: 0xa
  ULONG SpecialPoolRejected[9];           // offset: 0xa8 ordinal: 0xb
  ULONGLONG SpecialPagesNonPaged;         // offset: 0xd0 ordinal: 0xc
  LONG SpecialPoolPdes;                   // offset: 0xd8 ordinal: 0xd
  ULONG SessionSpecialPoolPdesMax;        // offset: 0xdc ordinal: 0xe
  ULONGLONG TotalPagedPoolQuota;          // offset: 0xe0 ordinal: 0xf
  ULONGLONG TotalNonPagedPoolQuota;       // offset: 0xe8 ordinal: 0x10
} _MI_POOL_STATE;

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

typedef UCHAR (*__anon_2018)(VOID *, struct _RTL_RANGE *);

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

// 0xa8 bytes (sizeof)
typedef struct _MM_DRIVER_VERIFIER_DATA {
  ULONG Level;                               // offset: 0x0 ordinal: 0x0
  ULONG RaiseIrqls;                          // offset: 0x4 ordinal: 0x1
  ULONG AcquireSpinLocks;                    // offset: 0x8 ordinal: 0x2
  ULONG SynchronizeExecutions;               // offset: 0xc ordinal: 0x3
  ULONG AllocationsAttempted;                // offset: 0x10 ordinal: 0x4
  ULONG AllocationsSucceeded;                // offset: 0x14 ordinal: 0x5
  ULONG AllocationsSucceededSpecialPool;     // offset: 0x18 ordinal: 0x6
  ULONG AllocationsWithNoTag;                // offset: 0x1c ordinal: 0x7
  ULONG TrimRequests;                        // offset: 0x20 ordinal: 0x8
  ULONG Trims;                               // offset: 0x24 ordinal: 0x9
  ULONG AllocationsFailed;                   // offset: 0x28 ordinal: 0xa
  ULONG AllocationsFailedDeliberately;       // offset: 0x2c ordinal: 0xb
  ULONG Loads;                               // offset: 0x30 ordinal: 0xc
  ULONG Unloads;                             // offset: 0x34 ordinal: 0xd
  ULONG UnTrackedPool;                       // offset: 0x38 ordinal: 0xe
  ULONG UserTrims;                           // offset: 0x3c ordinal: 0xf
  ULONG CurrentPagedPoolAllocations;         // offset: 0x40 ordinal: 0x10
  ULONG CurrentNonPagedPoolAllocations;      // offset: 0x44 ordinal: 0x11
  ULONG PeakPagedPoolAllocations;            // offset: 0x48 ordinal: 0x12
  ULONG PeakNonPagedPoolAllocations;         // offset: 0x4c ordinal: 0x13
  ULONGLONG PagedBytes;                      // offset: 0x50 ordinal: 0x14
  ULONGLONG NonPagedBytes;                   // offset: 0x58 ordinal: 0x15
  ULONGLONG PeakPagedBytes;                  // offset: 0x60 ordinal: 0x16
  ULONGLONG PeakNonPagedBytes;               // offset: 0x68 ordinal: 0x17
  ULONG BurstAllocationsFailedDeliberately;  // offset: 0x70 ordinal: 0x18
  ULONG SessionTrims;                        // offset: 0x74 ordinal: 0x19
  ULONG OptionChanges;                       // offset: 0x78 ordinal: 0x1a
  ULONG VerifyMode;                          // offset: 0x7c ordinal: 0x1b
  struct _UNICODE_STRING PreviousBucketName; // offset: 0x80 ordinal: 0x1c
  ULONG ExecutePoolTypes;                    // offset: 0x90 ordinal: 0x1d
  ULONG ExecutePageProtections;              // offset: 0x94 ordinal: 0x1e
  ULONG ExecutePageMappings;                 // offset: 0x98 ordinal: 0x1f
  ULONG ExecuteWriteSections;                // offset: 0x9c ordinal: 0x20
  ULONG SectionAlignmentFailures;            // offset: 0xa0 ordinal: 0x21
} _MM_DRIVER_VERIFIER_DATA;

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
typedef struct _MEMORY_ALLOCATION_DESCRIPTOR {
  struct _LIST_ENTRY ListEntry;    // offset: 0x0 ordinal: 0x0
  enum _TYPE_OF_MEMORY MemoryType; // offset: 0x10 ordinal: 0x1
  ULONGLONG BasePage;              // offset: 0x18 ordinal: 0x2
  ULONGLONG PageCount;             // offset: 0x20 ordinal: 0x3
} _MEMORY_ALLOCATION_DESCRIPTOR;

// 0x28 bytes (sizeof)
typedef struct _POOL_TRACKER_TABLE {
  LONG Key;                // offset: 0x0 ordinal: 0x0
  ULONG NonPagedAllocs;    // offset: 0x4 ordinal: 0x1
  ULONG NonPagedFrees;     // offset: 0x8 ordinal: 0x2
  ULONGLONG NonPagedBytes; // offset: 0x10 ordinal: 0x3
  ULONG PagedAllocs;       // offset: 0x18 ordinal: 0x4
  ULONG PagedFrees;        // offset: 0x1c ordinal: 0x5
  ULONGLONG PagedBytes;    // offset: 0x20 ordinal: 0x6
} _POOL_TRACKER_TABLE;

// 0x18 bytes (sizeof)
typedef struct _KTIMER2_COLLECTION {
  struct _RTL_RB_TREE Tree; // offset: 0x0 ordinal: 0x0
  ULONGLONG NextDueTime;    // offset: 0x10 ordinal: 0x1
} _KTIMER2_COLLECTION;

// 0x30 bytes (sizeof)
typedef struct _HEAP_STOP_ON_VALUES {
  ULONGLONG AllocAddress;              // offset: 0x0 ordinal: 0x0
  struct _HEAP_STOP_ON_TAG AllocTag;   // offset: 0x8 ordinal: 0x1
  ULONGLONG ReAllocAddress;            // offset: 0x10 ordinal: 0x2
  struct _HEAP_STOP_ON_TAG ReAllocTag; // offset: 0x18 ordinal: 0x3
  ULONGLONG FreeAddress;               // offset: 0x20 ordinal: 0x4
  struct _HEAP_STOP_ON_TAG FreeTag;    // offset: 0x28 ordinal: 0x5
} _HEAP_STOP_ON_VALUES;

// 0x1140 bytes (sizeof)
typedef struct _POOL_DESCRIPTOR {
  enum _POOL_TYPE PoolType; // offset: 0x0 ordinal: 0x0
  union {
    struct _FAST_MUTEX PagedLock; // offset: 0x8 ordinal: 0x1
    ULONGLONG NonPagedLock;       // offset: 0x8 ordinal: 0x2
  };
  LONG RunningAllocs;                     // offset: 0x40 ordinal: 0x3
  LONG RunningDeAllocs;                   // offset: 0x44 ordinal: 0x4
  LONG TotalBigPages;                     // offset: 0x48 ordinal: 0x5
  LONG ThreadsProcessingDeferrals;        // offset: 0x4c ordinal: 0x6
  ULONGLONG TotalBytes;                   // offset: 0x50 ordinal: 0x7
  ULONG PoolIndex;                        // offset: 0x80 ordinal: 0x8
  LONG TotalPages;                        // offset: 0xc0 ordinal: 0x9
  struct _SINGLE_LIST_ENTRY PendingFrees; // offset: 0x100 ordinal: 0xa
  LONG PendingFreeDepth;                  // offset: 0x108 ordinal: 0xb
  struct _LIST_ENTRY ListHeads[256];      // offset: 0x140 ordinal: 0xc
} _POOL_DESCRIPTOR;

// 0x30 bytes (sizeof)
typedef struct _HEAP_UCR_DESCRIPTOR {
  struct _LIST_ENTRY ListEntry;    // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY SegmentEntry; // offset: 0x10 ordinal: 0x1
  VOID *Address;                   // offset: 0x20 ordinal: 0x2
  ULONGLONG Size;                  // offset: 0x28 ordinal: 0x3
} _HEAP_UCR_DESCRIPTOR;

// 0x8 bytes (sizeof)
typedef union _CLS_LSN {
  struct __anon_1892 offset; // offset: 0x0 ordinal: 0x0
  ULONGLONG ullOffset;       // offset: 0x0 ordinal: 0x1
} _CLS_LSN;

// 0x10 bytes (sizeof)
typedef struct _CACHED_CHILD_LIST {
  ULONG Count; // offset: 0x0 ordinal: 0x0
  union {
    ULONGLONG ValueList;                   // offset: 0x8 ordinal: 0x1
    struct _CM_KEY_CONTROL_BLOCK *RealKcb; // offset: 0x8 ordinal: 0x2
  };
} _CACHED_CHILD_LIST;

// 0x18 bytes (sizeof)
typedef struct _POOL_TRACKER_BIG_PAGES {
  ULONGLONG Va;            // offset: 0x0 ordinal: 0x0
  ULONG Key;               // offset: 0x8 ordinal: 0x1
  ULONG Pattern : 8;       // offset: 0xc ordinal: 0x2
  ULONG PoolType : 12;     // offset: 0xc ordinal: 0x3
  ULONG SlushSize : 12;    // offset: 0xc ordinal: 0x4
  ULONGLONG NumberOfBytes; // offset: 0x10 ordinal: 0x5
} _POOL_TRACKER_BIG_PAGES;

// 0x118 bytes (sizeof)
typedef struct _SYSPTES_HEADER {
  struct _LIST_ENTRY ListHead[16]; // offset: 0x0 ordinal: 0x0
  ULONGLONG Count;                 // offset: 0x100 ordinal: 0x1
  ULONGLONG NumberOfEntries;       // offset: 0x108 ordinal: 0x2
  ULONGLONG NumberOfEntriesPeak;   // offset: 0x110 ordinal: 0x3
} _SYSPTES_HEADER;

// 0x10 bytes (sizeof)
typedef struct _TraceLoggingMetadata_t {
  ULONG Signature; // offset: 0x0 ordinal: 0x0
  USHORT Size;     // offset: 0x4 ordinal: 0x1
  UCHAR Version;   // offset: 0x6 ordinal: 0x2
  UCHAR Flags;     // offset: 0x7 ordinal: 0x3
  ULONGLONG Magic; // offset: 0x8 ordinal: 0x4
} _TraceLoggingMetadata_t;

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

// 0x40 bytes (sizeof)
typedef struct _ISRDPCSTATS {
  ULONGLONG IsrTime;      // offset: 0x0 ordinal: 0x0
  ULONGLONG IsrTimeStart; // offset: 0x8 ordinal: 0x1
  ULONGLONG IsrCount;     // offset: 0x10 ordinal: 0x2
  ULONGLONG DpcTime;      // offset: 0x18 ordinal: 0x3
  ULONGLONG DpcTimeStart; // offset: 0x20 ordinal: 0x4
  ULONGLONG DpcCount;     // offset: 0x28 ordinal: 0x5
  UCHAR IsrActive;        // offset: 0x30 ordinal: 0x6
  UCHAR Reserved[15];     // offset: 0x31 ordinal: 0x7
} _ISRDPCSTATS;

// 0x1c bytes (sizeof)
typedef struct _WHEA_XPF_MC_BANK_DESCRIPTOR {
  UCHAR BankNumber;               // offset: 0x0 ordinal: 0x0
  UCHAR ClearOnInitialization;    // offset: 0x1 ordinal: 0x1
  UCHAR StatusDataFormat;         // offset: 0x2 ordinal: 0x2
  union _XPF_MC_BANK_FLAGS Flags; // offset: 0x3 ordinal: 0x3
  ULONG ControlMsr;               // offset: 0x4 ordinal: 0x4
  ULONG StatusMsr;                // offset: 0x8 ordinal: 0x5
  ULONG AddressMsr;               // offset: 0xc ordinal: 0x6
  ULONG MiscMsr;                  // offset: 0x10 ordinal: 0x7
  ULONGLONG ControlData;          // offset: 0x14 ordinal: 0x8
} _WHEA_XPF_MC_BANK_DESCRIPTOR;

// 0x3a4 bytes (sizeof)
typedef struct _WHEA_XPF_CMC_DESCRIPTOR {
  USHORT Type;                                   // offset: 0x0 ordinal: 0x0
  UCHAR Enabled;                                 // offset: 0x2 ordinal: 0x1
  UCHAR NumberOfBanks;                           // offset: 0x3 ordinal: 0x2
  ULONG Reserved;                                // offset: 0x4 ordinal: 0x3
  struct _WHEA_NOTIFICATION_DESCRIPTOR Notify;   // offset: 0x8 ordinal: 0x4
  struct _WHEA_XPF_MC_BANK_DESCRIPTOR Banks[32]; // offset: 0x24 ordinal: 0x5
} _WHEA_XPF_CMC_DESCRIPTOR;

// 0x398 bytes (sizeof)
typedef struct _WHEA_XPF_MCE_DESCRIPTOR {
  USHORT Type;                                   // offset: 0x0 ordinal: 0x0
  UCHAR Enabled;                                 // offset: 0x2 ordinal: 0x1
  UCHAR NumberOfBanks;                           // offset: 0x3 ordinal: 0x2
  union _XPF_MCE_FLAGS Flags;                    // offset: 0x4 ordinal: 0x3
  ULONGLONG MCG_Capability;                      // offset: 0x8 ordinal: 0x4
  ULONGLONG MCG_GlobalControl;                   // offset: 0x10 ordinal: 0x5
  struct _WHEA_XPF_MC_BANK_DESCRIPTOR Banks[32]; // offset: 0x18 ordinal: 0x6
} _WHEA_XPF_MCE_DESCRIPTOR;

// 0x3a4 bytes (sizeof)
typedef union __anon_1750 {
  struct _WHEA_XPF_MCE_DESCRIPTOR XpfMceDescriptor; // offset: 0x0 ordinal: 0x0
  struct _WHEA_XPF_CMC_DESCRIPTOR XpfCmcDescriptor; // offset: 0x0 ordinal: 0x1
  struct _WHEA_XPF_NMI_DESCRIPTOR XpfNmiDescriptor; // offset: 0x0 ordinal: 0x2
  struct _WHEA_IPF_MCA_DESCRIPTOR IpfMcaDescriptor; // offset: 0x0 ordinal: 0x3
  struct _WHEA_IPF_CMC_DESCRIPTOR IpfCmcDescriptor; // offset: 0x0 ordinal: 0x4
  struct _WHEA_IPF_CPE_DESCRIPTOR IpfCpeDescriptor; // offset: 0x0 ordinal: 0x5
  struct _WHEA_AER_ROOTPORT_DESCRIPTOR
      AerRootportDescriptor; // offset: 0x0 ordinal: 0x6
  struct _WHEA_AER_ENDPOINT_DESCRIPTOR
      AerEndpointDescriptor; // offset: 0x0 ordinal: 0x7
  struct _WHEA_AER_BRIDGE_DESCRIPTOR
      AerBridgeDescriptor; // offset: 0x0 ordinal: 0x8
  struct _WHEA_GENERIC_ERROR_DESCRIPTOR
      GenErrDescriptor; // offset: 0x0 ordinal: 0x9
} __anon_1750;

// 0x3cc bytes (sizeof)
typedef struct _WHEA_ERROR_SOURCE_DESCRIPTOR {
  ULONG Length;                        // offset: 0x0 ordinal: 0x0
  ULONG Version;                       // offset: 0x4 ordinal: 0x1
  enum _WHEA_ERROR_SOURCE_TYPE Type;   // offset: 0x8 ordinal: 0x2
  enum _WHEA_ERROR_SOURCE_STATE State; // offset: 0xc ordinal: 0x3
  ULONG MaxRawDataLength;              // offset: 0x10 ordinal: 0x4
  ULONG NumRecordsToPreallocate;       // offset: 0x14 ordinal: 0x5
  ULONG MaxSectionsPerRecord;          // offset: 0x18 ordinal: 0x6
  ULONG ErrorSourceId;                 // offset: 0x1c ordinal: 0x7
  ULONG PlatformErrorSourceId;         // offset: 0x20 ordinal: 0x8
  ULONG Flags;                         // offset: 0x24 ordinal: 0x9
  union __anon_1750 Info;              // offset: 0x28 ordinal: 0xa
} _WHEA_ERROR_SOURCE_DESCRIPTOR;

// 0x10 bytes (sizeof)
typedef struct _OBJECT_HEADER_AUDIT_INFO {
  VOID *SecurityDescriptor; // offset: 0x0 ordinal: 0x0
  ULONGLONG Reserved;       // offset: 0x8 ordinal: 0x1
} _OBJECT_HEADER_AUDIT_INFO;

// 0x20 bytes (sizeof)
typedef struct _OBJECT_HEADER_QUOTA_INFO {
  ULONG PagedPoolCharge;              // offset: 0x0 ordinal: 0x0
  ULONG NonPagedPoolCharge;           // offset: 0x4 ordinal: 0x1
  ULONG SecurityDescriptorCharge;     // offset: 0x8 ordinal: 0x2
  VOID *SecurityDescriptorQuotaBlock; // offset: 0x10 ordinal: 0x3
  ULONGLONG Reserved;                 // offset: 0x18 ordinal: 0x4
} _OBJECT_HEADER_QUOTA_INFO;

// 0x20 bytes (sizeof)
typedef struct _SEP_SID_VALUES_BLOCK {
  ULONG BlockLength;        // offset: 0x0 ordinal: 0x0
  LONGLONG ReferenceCount;  // offset: 0x8 ordinal: 0x1
  ULONG SidCount;           // offset: 0x10 ordinal: 0x2
  ULONGLONG SidValuesStart; // offset: 0x18 ordinal: 0x3
} _SEP_SID_VALUES_BLOCK;

// 0x18 bytes (sizeof)
typedef struct _SEP_TOKEN_PRIVILEGES {
  ULONGLONG Present;          // offset: 0x0 ordinal: 0x0
  ULONGLONG Enabled;          // offset: 0x8 ordinal: 0x1
  ULONGLONG EnabledByDefault; // offset: 0x10 ordinal: 0x2
} _SEP_TOKEN_PRIVILEGES;

// 0x18 bytes (sizeof)
typedef struct _EVENT_FILTER_HEADER {
  USHORT Id;            // offset: 0x0 ordinal: 0x0
  UCHAR Version;        // offset: 0x2 ordinal: 0x1
  UCHAR Reserved[5];    // offset: 0x3 ordinal: 0x2
  ULONGLONG InstanceId; // offset: 0x8 ordinal: 0x3
  ULONG Size;           // offset: 0x10 ordinal: 0x4
  ULONG NextOffset;     // offset: 0x14 ordinal: 0x5
} _EVENT_FILTER_HEADER;

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

// 0x110 bytes (sizeof)
typedef struct _SID_AND_ATTRIBUTES_HASH {
  ULONG SidCount;                      // offset: 0x0 ordinal: 0x0
  struct _SID_AND_ATTRIBUTES *SidAttr; // offset: 0x8 ordinal: 0x1
  ULONGLONG Hash[32];                  // offset: 0x10 ordinal: 0x2
} _SID_AND_ATTRIBUTES_HASH;

// 0x260 bytes (sizeof)
typedef struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION {
  ULONG DeviceGroupsCount;                   // offset: 0x0 ordinal: 0x0
  struct _SID_AND_ATTRIBUTES *pDeviceGroups; // offset: 0x8 ordinal: 0x1
  ULONG RestrictedDeviceGroupsCount;         // offset: 0x10 ordinal: 0x2
  struct _SID_AND_ATTRIBUTES
      *pRestrictedDeviceGroups;                     // offset: 0x18 ordinal: 0x3
  struct _SID_AND_ATTRIBUTES_HASH DeviceGroupsHash; // offset: 0x20 ordinal: 0x4
  struct _SID_AND_ATTRIBUTES_HASH
      RestrictedDeviceGroupsHash; // offset: 0x130 ordinal: 0x5
  struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
      *pUserSecurityAttributes; // offset: 0x240 ordinal: 0x6
  struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
      *pDeviceSecurityAttributes; // offset: 0x248 ordinal: 0x7
  struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
      *pRestrictedUserSecurityAttributes; // offset: 0x250 ordinal: 0x8
  struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
      *pRestrictedDeviceSecurityAttributes; // offset: 0x258 ordinal: 0x9
} _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION;

// 0x58 bytes (sizeof)
typedef struct _TOKEN_ACCESS_INFORMATION {
  struct _SID_AND_ATTRIBUTES_HASH *SidHash; // offset: 0x0 ordinal: 0x0
  struct _SID_AND_ATTRIBUTES_HASH
      *RestrictedSidHash;               // offset: 0x8 ordinal: 0x1
  struct _TOKEN_PRIVILEGES *Privileges; // offset: 0x10 ordinal: 0x2
  struct _LUID AuthenticationId;        // offset: 0x18 ordinal: 0x3
  enum _TOKEN_TYPE TokenType;           // offset: 0x20 ordinal: 0x4
  enum _SECURITY_IMPERSONATION_LEVEL
      ImpersonationLevel;                         // offset: 0x24 ordinal: 0x5
  struct _TOKEN_MANDATORY_POLICY MandatoryPolicy; // offset: 0x28 ordinal: 0x6
  ULONG Flags;                                    // offset: 0x2c ordinal: 0x7
  ULONG AppContainerNumber;                       // offset: 0x30 ordinal: 0x8
  VOID *PackageSid;                               // offset: 0x38 ordinal: 0x9
  struct _SID_AND_ATTRIBUTES_HASH
      *CapabilitiesHash;    // offset: 0x40 ordinal: 0xa
  VOID *TrustLevelSid;      // offset: 0x48 ordinal: 0xb
  VOID *SecurityAttributes; // offset: 0x50 ordinal: 0xc
} _TOKEN_ACCESS_INFORMATION;

// 0x48 bytes (sizeof)
typedef struct _WMI_BUFFER_HEADER {
  ULONG BufferSize;               // offset: 0x0 ordinal: 0x0
  ULONG SavedOffset;              // offset: 0x4 ordinal: 0x1
  ULONG CurrentOffset;            // offset: 0x8 ordinal: 0x2
  LONG ReferenceCount;            // offset: 0xc ordinal: 0x3
  union _LARGE_INTEGER TimeStamp; // offset: 0x10 ordinal: 0x4
  LONGLONG SequenceNumber;        // offset: 0x18 ordinal: 0x5
  ULONGLONG ClockType : 3;        // offset: 0x20 ordinal: 0x6
  ULONGLONG Frequency : 61;       // offset: 0x20 ordinal: 0x7
  union {
    struct _SINGLE_LIST_ENTRY SlistEntry;  // offset: 0x20 ordinal: 0x8
    struct _WMI_BUFFER_HEADER *NextBuffer; // offset: 0x20 ordinal: 0x9
  };
  struct _ETW_BUFFER_CONTEXT ClientContext; // offset: 0x28 ordinal: 0xa
  enum _ETW_BUFFER_STATE State;             // offset: 0x2c ordinal: 0xb
  ULONG Offset;                             // offset: 0x30 ordinal: 0xc
  USHORT BufferFlag;                        // offset: 0x34 ordinal: 0xd
  USHORT BufferType;                        // offset: 0x36 ordinal: 0xe
  union {
    ULONG Padding1[4];                   // offset: 0x38 ordinal: 0xf
    struct _ETW_REF_CLOCK ReferenceTime; // offset: 0x38 ordinal: 0x10
    struct _LIST_ENTRY GlobalEntry;      // offset: 0x38 ordinal: 0x11
    VOID *Pointer0;                      // offset: 0x38 ordinal: 0x12
  };
  VOID *Pointer1; // offset: 0x40 ordinal: 0x13
} _WMI_BUFFER_HEADER;

// 0x8 bytes (sizeof)
typedef union _FILE_SEGMENT_ELEMENT {
  VOID *Buffer;        // offset: 0x0 ordinal: 0x0
  ULONGLONG Alignment; // offset: 0x0 ordinal: 0x1
} _FILE_SEGMENT_ELEMENT;

// 0x18 bytes (sizeof)
typedef struct _REMOTE_PORT_VIEW {
  ULONG Length;       // offset: 0x0 ordinal: 0x0
  ULONGLONG ViewSize; // offset: 0x8 ordinal: 0x1
  VOID *ViewBase;     // offset: 0x10 ordinal: 0x2
} _REMOTE_PORT_VIEW;

// 0x8 bytes (sizeof)
typedef struct __anon_1574 {
  ULONGLONG Head : 24;              // offset: 0x0 ordinal: 0x0
  ULONGLONG Tail : 24;              // offset: 0x0 ordinal: 0x1
  ULONGLONG ActiveThreadCount : 16; // offset: 0x0 ordinal: 0x2
} __anon_1574;

// 0x8 bytes (sizeof)
typedef union __anon_1569 {
  struct __anon_1574 s1; // offset: 0x0 ordinal: 0x0
  LONGLONG Value;        // offset: 0x0 ordinal: 0x1
} __anon_1569;

// 0x8 bytes (sizeof)
typedef struct _ALPC_COMPLETION_LIST_STATE {
  union __anon_1569 u1; // offset: 0x0 ordinal: 0x0
} _ALPC_COMPLETION_LIST_STATE;

// 0x8 bytes (sizeof)
typedef struct _RTL_SRWLOCK {
  ULONGLONG Locked : 1;         // offset: 0x0 ordinal: 0x0
  ULONGLONG Waiting : 1;        // offset: 0x0 ordinal: 0x1
  ULONGLONG Waking : 1;         // offset: 0x0 ordinal: 0x2
  ULONGLONG MultipleShared : 1; // offset: 0x0 ordinal: 0x3
  ULONGLONG Shared : 60;        // offset: 0x0 ordinal: 0x4
  union {
    ULONGLONG Value; // offset: 0x0 ordinal: 0x5
    VOID *Ptr;       // offset: 0x0 ordinal: 0x6
  };
} _RTL_SRWLOCK;

// 0x8 bytes (sizeof)
typedef union _KALPC_DIRECT_EVENT {
  ULONGLONG Event;          // offset: 0x0 ordinal: 0x0
  ULONGLONG Referenced : 1; // offset: 0x0 ordinal: 0x1
  ULONGLONG Reserved : 63;  // offset: 0x0 ordinal: 0x2
} _KALPC_DIRECT_EVENT;

// 0x180 bytes (sizeof)
typedef struct _ALPC_COMPLETION_LIST_HEADER {
  ULONGLONG StartMagic;                     // offset: 0x0 ordinal: 0x0
  ULONG TotalSize;                          // offset: 0x8 ordinal: 0x1
  ULONG ListOffset;                         // offset: 0xc ordinal: 0x2
  ULONG ListSize;                           // offset: 0x10 ordinal: 0x3
  ULONG BitmapOffset;                       // offset: 0x14 ordinal: 0x4
  ULONG BitmapSize;                         // offset: 0x18 ordinal: 0x5
  ULONG DataOffset;                         // offset: 0x1c ordinal: 0x6
  ULONG DataSize;                           // offset: 0x20 ordinal: 0x7
  ULONG AttributeFlags;                     // offset: 0x24 ordinal: 0x8
  ULONG AttributeSize;                      // offset: 0x28 ordinal: 0x9
  struct _ALPC_COMPLETION_LIST_STATE State; // offset: 0x40 ordinal: 0xa
  ULONG LastMessageId;                      // offset: 0x48 ordinal: 0xb
  ULONG LastCallbackId;                     // offset: 0x4c ordinal: 0xc
  ULONG PostCount;                          // offset: 0x80 ordinal: 0xd
  ULONG ReturnCount;                        // offset: 0xc0 ordinal: 0xe
  ULONG LogSequenceNumber;                  // offset: 0x100 ordinal: 0xf
  struct _RTL_SRWLOCK UserLock;             // offset: 0x140 ordinal: 0x10
  ULONGLONG EndMagic;                       // offset: 0x148 ordinal: 0x11
} _ALPC_COMPLETION_LIST_HEADER;

// 0x48 bytes (sizeof)
typedef struct _ALPC_PORT_ATTRIBUTES {
  ULONG Flags;                                     // offset: 0x0 ordinal: 0x0
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // offset: 0x4 ordinal: 0x1
  ULONGLONG MaxMessageLength;                      // offset: 0x10 ordinal: 0x2
  ULONGLONG MemoryBandwidth;                       // offset: 0x18 ordinal: 0x3
  ULONGLONG MaxPoolUsage;                          // offset: 0x20 ordinal: 0x4
  ULONGLONG MaxSectionSize;                        // offset: 0x28 ordinal: 0x5
  ULONGLONG MaxViewSize;                           // offset: 0x30 ordinal: 0x6
  ULONGLONG MaxTotalSectionSize;                   // offset: 0x38 ordinal: 0x7
  ULONG DupObjectTypes;                            // offset: 0x40 ordinal: 0x8
  ULONG Reserved;                                  // offset: 0x44 ordinal: 0x9
} _ALPC_PORT_ATTRIBUTES;

// 0x28 bytes (sizeof)
typedef struct _PORT_MESSAGE {
  union __anon_1508 u1; // offset: 0x0 ordinal: 0x0
  union __anon_1510 u2; // offset: 0x4 ordinal: 0x1
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

// 0x10 bytes (sizeof)
typedef struct _HEAP_ENTRY_EXTRA {
  USHORT AllocatorBackTraceIndex; // offset: 0x0 ordinal: 0x0
  USHORT TagIndex;                // offset: 0x2 ordinal: 0x1
  ULONGLONG Settable;             // offset: 0x8 ordinal: 0x2
  ULONGLONG ZeroInit;             // offset: 0x0 ordinal: 0x3
  ULONGLONG ZeroInit1;            // offset: 0x8 ordinal: 0x4
} _HEAP_ENTRY_EXTRA;

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
typedef struct _HEAP_UNPACKED_ENTRY {
  VOID *PreviousBlockPrivateData; // offset: 0x0 ordinal: 0x0
  USHORT Size;                    // offset: 0x8 ordinal: 0x1
  UCHAR Flags;                    // offset: 0xa ordinal: 0x2
  UCHAR SmallTagIndex;            // offset: 0xb ordinal: 0x3
  ULONG SubSegmentCode;           // offset: 0x8 ordinal: 0x4
  USHORT PreviousSize;            // offset: 0xc ordinal: 0x5
  union {
    UCHAR SegmentOffset; // offset: 0xe ordinal: 0x6
    UCHAR LFHFlags;      // offset: 0xe ordinal: 0x7
  };
  UCHAR UnusedBytes;       // offset: 0xf ordinal: 0x8
  ULONGLONG CompactHeader; // offset: 0x8 ordinal: 0x9
} _HEAP_UNPACKED_ENTRY;

// 0x10 bytes (sizeof)
typedef struct _HEAP_TUNING_PARAMETERS {
  ULONG CommittThresholdShift;      // offset: 0x0 ordinal: 0x0
  ULONGLONG MaxPreCommittThreshold; // offset: 0x8 ordinal: 0x1
} _HEAP_TUNING_PARAMETERS;

// 0x78 bytes (sizeof)
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
  ULONG PollIntervalCounter;          // offset: 0x48 ordinal: 0xe
  ULONG DecommitsSinceLastCheck;      // offset: 0x4c ordinal: 0xf
  ULONG HeapPollInterval;             // offset: 0x50 ordinal: 0x10
  ULONG AllocAndFreeOps;              // offset: 0x54 ordinal: 0x11
  ULONG AllocationIndicesActive;      // offset: 0x58 ordinal: 0x12
  ULONG InBlockDeccommits;            // offset: 0x5c ordinal: 0x13
  ULONGLONG InBlockDeccomitSize;      // offset: 0x60 ordinal: 0x14
  ULONGLONG HighWatermarkSize;        // offset: 0x68 ordinal: 0x15
  ULONGLONG LastPolledSize;           // offset: 0x70 ordinal: 0x16
} _HEAP_COUNTERS;

// 0x10 bytes (sizeof)
typedef struct _HEAP_ENTRY {
  union {
    struct _HEAP_UNPACKED_ENTRY UnpackedEntry; // offset: 0x0 ordinal: 0x0
    VOID *PreviousBlockPrivateData;            // offset: 0x0 ordinal: 0x1
  };
  USHORT Size;          // offset: 0x8 ordinal: 0x2
  UCHAR Flags;          // offset: 0xa ordinal: 0x3
  UCHAR SmallTagIndex;  // offset: 0xb ordinal: 0x4
  ULONG SubSegmentCode; // offset: 0x8 ordinal: 0x5
  USHORT PreviousSize;  // offset: 0xc ordinal: 0x6
  union {
    UCHAR SegmentOffset; // offset: 0xe ordinal: 0x7
    UCHAR LFHFlags;      // offset: 0xe ordinal: 0x8
  };
  UCHAR UnusedBytes;       // offset: 0xf ordinal: 0x9
  ULONGLONG CompactHeader; // offset: 0x8 ordinal: 0xa
  union {
    struct _HEAP_EXTENDED_ENTRY ExtendedEntry; // offset: 0x0 ordinal: 0xb
    VOID *Reserved;                            // offset: 0x0 ordinal: 0xc
  };
  USHORT FunctionIndex;         // offset: 0x8 ordinal: 0xd
  USHORT ContextValue;          // offset: 0xa ordinal: 0xe
  ULONG InterceptorValue;       // offset: 0x8 ordinal: 0xf
  USHORT UnusedBytesLength;     // offset: 0xc ordinal: 0x10
  UCHAR EntryOffset;            // offset: 0xe ordinal: 0x11
  UCHAR ExtendedBlockSignature; // offset: 0xf ordinal: 0x12
  VOID *ReservedForAlignment;   // offset: 0x0 ordinal: 0x13
  ULONG Code1;                  // offset: 0x8 ordinal: 0x14
  USHORT Code2;                 // offset: 0xc ordinal: 0x15
  UCHAR Code3;                  // offset: 0xe ordinal: 0x16
  UCHAR Code4;                  // offset: 0xf ordinal: 0x17
  ULONG Code234;                // offset: 0xc ordinal: 0x18
  ULONGLONG AgregateCode;       // offset: 0x8 ordinal: 0x19
} _HEAP_ENTRY;

// 0x20 bytes (sizeof)
typedef struct _HEAP_FREE_ENTRY {
  union {
    struct _HEAP_ENTRY HeapEntry;              // offset: 0x0 ordinal: 0x0
    struct _HEAP_UNPACKED_ENTRY UnpackedEntry; // offset: 0x0 ordinal: 0x1
    VOID *PreviousBlockPrivateData;            // offset: 0x0 ordinal: 0x2
  };
  USHORT Size;          // offset: 0x8 ordinal: 0x3
  UCHAR Flags;          // offset: 0xa ordinal: 0x4
  UCHAR SmallTagIndex;  // offset: 0xb ordinal: 0x5
  ULONG SubSegmentCode; // offset: 0x8 ordinal: 0x6
  USHORT PreviousSize;  // offset: 0xc ordinal: 0x7
  union {
    UCHAR SegmentOffset; // offset: 0xe ordinal: 0x8
    UCHAR LFHFlags;      // offset: 0xe ordinal: 0x9
  };
  UCHAR UnusedBytes;       // offset: 0xf ordinal: 0xa
  ULONGLONG CompactHeader; // offset: 0x8 ordinal: 0xb
  union {
    struct _HEAP_EXTENDED_ENTRY ExtendedEntry; // offset: 0x0 ordinal: 0xc
    VOID *Reserved;                            // offset: 0x0 ordinal: 0xd
  };
  USHORT FunctionIndex;         // offset: 0x8 ordinal: 0xe
  USHORT ContextValue;          // offset: 0xa ordinal: 0xf
  ULONG InterceptorValue;       // offset: 0x8 ordinal: 0x10
  USHORT UnusedBytesLength;     // offset: 0xc ordinal: 0x11
  UCHAR EntryOffset;            // offset: 0xe ordinal: 0x12
  UCHAR ExtendedBlockSignature; // offset: 0xf ordinal: 0x13
  VOID *ReservedForAlignment;   // offset: 0x0 ordinal: 0x14
  ULONG Code1;                  // offset: 0x8 ordinal: 0x15
  USHORT Code2;                 // offset: 0xc ordinal: 0x16
  UCHAR Code3;                  // offset: 0xe ordinal: 0x17
  UCHAR Code4;                  // offset: 0xf ordinal: 0x18
  ULONG Code234;                // offset: 0xc ordinal: 0x19
  ULONGLONG AgregateCode;       // offset: 0x8 ordinal: 0x1a
  struct _LIST_ENTRY FreeList;  // offset: 0x10 ordinal: 0x1b
} _HEAP_FREE_ENTRY;

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

typedef VOID (*__anon_1478)(VOID *, ULONGLONG, ULONG);

// 0x78 bytes (sizeof)
typedef struct _PRIVATE_CACHE_MAP {
  union {
    SHORT NodeTypeCode;                    // offset: 0x0 ordinal: 0x0
    struct _PRIVATE_CACHE_MAP_FLAGS Flags; // offset: 0x0 ordinal: 0x1
  };
  ULONG ReadAheadMask;                          // offset: 0x4 ordinal: 0x2
  struct _FILE_OBJECT *FileObject;              // offset: 0x8 ordinal: 0x3
  union _LARGE_INTEGER FileOffset1;             // offset: 0x10 ordinal: 0x4
  union _LARGE_INTEGER BeyondLastByte1;         // offset: 0x18 ordinal: 0x5
  union _LARGE_INTEGER FileOffset2;             // offset: 0x20 ordinal: 0x6
  union _LARGE_INTEGER BeyondLastByte2;         // offset: 0x28 ordinal: 0x7
  ULONG SequentialReadCount;                    // offset: 0x30 ordinal: 0x8
  ULONG ReadAheadLength;                        // offset: 0x34 ordinal: 0x9
  union _LARGE_INTEGER ReadAheadOffset;         // offset: 0x38 ordinal: 0xa
  union _LARGE_INTEGER ReadAheadBeyondLastByte; // offset: 0x40 ordinal: 0xb
  ULONGLONG PrevReadAheadBeyondLastByte;        // offset: 0x48 ordinal: 0xc
  ULONGLONG ReadAheadSpinLock;                  // offset: 0x50 ordinal: 0xd
  ULONG PipelinedReadAheadRequestSize;          // offset: 0x58 ordinal: 0xe
  ULONG ReadAheadGrowth;                        // offset: 0x5c ordinal: 0xf
  struct _LIST_ENTRY PrivateLinks;              // offset: 0x60 ordinal: 0x10
  VOID *ReadAheadWorkItem;                      // offset: 0x70 ordinal: 0x11
} _PRIVATE_CACHE_MAP;

// 0x38 bytes (sizeof)
typedef struct _DIRTY_PAGE_THRESHOLDS {
  ULONGLONG DirtyPageThreshold;       // offset: 0x0 ordinal: 0x0
  ULONGLONG DirtyPageThresholdTop;    // offset: 0x8 ordinal: 0x1
  ULONGLONG DirtyPageThresholdBottom; // offset: 0x10 ordinal: 0x2
  ULONG DirtyPageTarget;              // offset: 0x18 ordinal: 0x3
  ULONGLONG AggregateAvailablePages;  // offset: 0x20 ordinal: 0x4
  ULONGLONG AggregateDirtyPages;      // offset: 0x28 ordinal: 0x5
  ULONG AvailableHistory;             // offset: 0x30 ordinal: 0x6
} _DIRTY_PAGE_THRESHOLDS;

// 0x18 bytes (sizeof)
typedef struct _DIRTY_PAGE_STATISTICS {
  ULONGLONG DirtyPages;              // offset: 0x0 ordinal: 0x0
  ULONGLONG DirtyPagesLastScan;      // offset: 0x8 ordinal: 0x1
  ULONG DirtyPagesScheduledLastScan; // offset: 0x10 ordinal: 0x2
} _DIRTY_PAGE_STATISTICS;

// 0x30 bytes (sizeof)
typedef struct _CC_EXTERNAL_CACHE_INFO {
  VOID (*Callback)(VOID *, ULONGLONG, ULONG);        // offset: 0x0 ordinal: 0x0
  struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics; // offset: 0x8 ordinal: 0x1
  struct _LIST_ENTRY Links; // offset: 0x20 ordinal: 0x2
} _CC_EXTERNAL_CACHE_INFO;

// 0x98 bytes (sizeof)
typedef struct _LOG_HANDLE_CONTEXT {
  VOID *LogHandle; // offset: 0x0 ordinal: 0x0
  VOID(*FlushToLsnRoutine)
  (VOID *, union _LARGE_INTEGER); // offset: 0x8 ordinal: 0x1
  VOID(*QueryLogHandleInfoRoutine)
  (VOID *, USHORT *); // offset: 0x10 ordinal: 0x2
  struct _DIRTY_PAGE_STATISTICS
      DirtyPageStatistics; // offset: 0x18 ordinal: 0x3
  struct _DIRTY_PAGE_THRESHOLDS
      DirtyPageThresholds;                         // offset: 0x30 ordinal: 0x4
  ULONG AdditionalPagesToWrite;                    // offset: 0x68 ordinal: 0x5
  ULONG CcLWScanDPThreshold;                       // offset: 0x6c ordinal: 0x6
  union _LARGE_INTEGER LargestLsnForCurrentLWScan; // offset: 0x70 ordinal: 0x7
  struct _FILE_OBJECT *RelatedFileObject;          // offset: 0x78 ordinal: 0x8
  ULONGLONG LargestLsnFileObjectKey;               // offset: 0x80 ordinal: 0x9
  union _LARGE_INTEGER LastLWTimeStamp;            // offset: 0x88 ordinal: 0xa
  ULONG Flags;                                     // offset: 0x90 ordinal: 0xb
} _LOG_HANDLE_CONTEXT;

// 0x8 bytes (sizeof)
typedef struct _LOGGED_STREAM_CALLBACK_V2 {
  struct _LOG_HANDLE_CONTEXT *LogHandleContext; // offset: 0x0 ordinal: 0x0
} _LOGGED_STREAM_CALLBACK_V2;

// 0xd0 bytes (sizeof)
typedef struct _VOLUME_CACHE_MAP {
  SHORT NodeTypeCode;                          // offset: 0x0 ordinal: 0x0
  SHORT NodeByteCode;                          // offset: 0x2 ordinal: 0x1
  ULONG UseCount;                              // offset: 0x4 ordinal: 0x2
  struct _DEVICE_OBJECT *DeviceObject;         // offset: 0x8 ordinal: 0x3
  struct _LIST_ENTRY VolumeCacheMapLinks;      // offset: 0x10 ordinal: 0x4
  ULONGLONG DirtyPages;                        // offset: 0x20 ordinal: 0x5
  struct _LOG_HANDLE_CONTEXT LogHandleContext; // offset: 0x28 ordinal: 0x6
  ULONG Flags;                                 // offset: 0xc0 ordinal: 0x7
  ULONG PagesQueuedToDisk;                     // offset: 0xc4 ordinal: 0x8
  ULONG LoggedPagesQueuedToDisk;               // offset: 0xc8 ordinal: 0x9
} _VOLUME_CACHE_MAP;

// 0x8 bytes (sizeof)
typedef union _PPM_POLICY_SETTINGS_MASK {
  ULONGLONG Value;                               // offset: 0x0 ordinal: 0x0
  ULONG PerfDecreaseTime : 1;                    // offset: 0x0 ordinal: 0x1
  ULONG PerfIncreaseTime : 1;                    // offset: 0x0 ordinal: 0x2
  ULONG PerfDecreasePolicy : 1;                  // offset: 0x0 ordinal: 0x3
  ULONG PerfIncreasePolicy : 1;                  // offset: 0x0 ordinal: 0x4
  ULONG PerfDecreaseThreshold : 1;               // offset: 0x0 ordinal: 0x5
  ULONG PerfIncreaseThreshold : 1;               // offset: 0x0 ordinal: 0x6
  ULONG PerfMinPolicy : 1;                       // offset: 0x0 ordinal: 0x7
  ULONG PerfMaxPolicy : 1;                       // offset: 0x0 ordinal: 0x8
  ULONG PerfTimeCheck : 1;                       // offset: 0x0 ordinal: 0x9
  ULONG PerfBoostPolicy : 1;                     // offset: 0x0 ordinal: 0xa
  ULONG PerfBoostMode : 1;                       // offset: 0x0 ordinal: 0xb
  ULONG AllowThrottling : 1;                     // offset: 0x0 ordinal: 0xc
  ULONG PerfHistoryCount : 1;                    // offset: 0x0 ordinal: 0xd
  ULONG ParkingPerfState : 1;                    // offset: 0x0 ordinal: 0xe
  ULONG LatencyHintPerf : 1;                     // offset: 0x0 ordinal: 0xf
  ULONG LatencyHintUnpark : 1;                   // offset: 0x0 ordinal: 0x10
  ULONG CoreParkingMinCores : 1;                 // offset: 0x0 ordinal: 0x11
  ULONG CoreParkingMaxCores : 1;                 // offset: 0x0 ordinal: 0x12
  ULONG CoreParkingDecreasePolicy : 1;           // offset: 0x0 ordinal: 0x13
  ULONG CoreParkingIncreasePolicy : 1;           // offset: 0x0 ordinal: 0x14
  ULONG CoreParkingDecreaseTime : 1;             // offset: 0x0 ordinal: 0x15
  ULONG CoreParkingIncreaseTime : 1;             // offset: 0x0 ordinal: 0x16
  ULONG CoreParkingOverUtilizationThreshold : 1; // offset: 0x0 ordinal: 0x17
  ULONG CoreParkingDistributeUtility : 1;        // offset: 0x0 ordinal: 0x18
  ULONG CoreParkingConcurrencyThreshold : 1;     // offset: 0x0 ordinal: 0x19
  ULONG CoreParkingHeadroomThreshold : 1;        // offset: 0x0 ordinal: 0x1a
  ULONG CoreParkingDistributionThreshold : 1;    // offset: 0x0 ordinal: 0x1b
  ULONG IdleAllowScaling : 1;                    // offset: 0x0 ordinal: 0x1c
  ULONG IdleDisable : 1;                         // offset: 0x0 ordinal: 0x1d
  ULONG IdleTimeCheck : 1;                       // offset: 0x0 ordinal: 0x1e
  ULONG IdleDemoteThreshold : 1;                 // offset: 0x0 ordinal: 0x1f
  ULONG IdlePromoteThreshold : 1;                // offset: 0x0 ordinal: 0x20
  ULONG HeteroDecreaseTime : 1;                  // offset: 0x4 ordinal: 0x21
  ULONG HeteroIncreaseTime : 1;                  // offset: 0x4 ordinal: 0x22
  ULONG HeteroDecreaseThreshold : 1;             // offset: 0x4 ordinal: 0x23
  ULONG HeteroIncreaseThreshold : 1;             // offset: 0x4 ordinal: 0x24
  ULONG Class0FloorPerformance : 1;              // offset: 0x4 ordinal: 0x25
  ULONG Class1InitialPerformance : 1;            // offset: 0x4 ordinal: 0x26
  ULONG EnergyPerfPreference : 1;                // offset: 0x4 ordinal: 0x27
  ULONG AutonomousActivityWindow : 1;            // offset: 0x4 ordinal: 0x28
  ULONG AutonomousMode : 1;                      // offset: 0x4 ordinal: 0x29
  ULONG DutyCycling : 1;                         // offset: 0x4 ordinal: 0x2a
  ULONG Spare : 22;                              // offset: 0x4 ordinal: 0x2b
} _PPM_POLICY_SETTINGS_MASK;

// 0x570 bytes (sizeof)
typedef struct _PPM_ENGINE_SETTINGS {
  union _PPM_POLICY_SETTINGS_MASK
      ExplicitSetting[2];                    // offset: 0x0 ordinal: 0x0
  UCHAR ThrottlingPolicy;                    // offset: 0x10 ordinal: 0x1
  ULONG PerfTimeCheck;                       // offset: 0x14 ordinal: 0x2
  UCHAR PerfHistoryCount[2];                 // offset: 0x18 ordinal: 0x3
  UCHAR PerfMinPolicy[2];                    // offset: 0x1a ordinal: 0x4
  UCHAR PerfMaxPolicy[2];                    // offset: 0x1c ordinal: 0x5
  UCHAR PerfDecreaseTime[2];                 // offset: 0x1e ordinal: 0x6
  UCHAR PerfIncreaseTime[2];                 // offset: 0x20 ordinal: 0x7
  UCHAR PerfDecreasePolicy[2];               // offset: 0x22 ordinal: 0x8
  UCHAR PerfIncreasePolicy[2];               // offset: 0x24 ordinal: 0x9
  UCHAR PerfDecreaseThreshold[2];            // offset: 0x26 ordinal: 0xa
  UCHAR PerfIncreaseThreshold[2];            // offset: 0x28 ordinal: 0xb
  ULONG PerfBoostPolicy;                     // offset: 0x2c ordinal: 0xc
  ULONG PerfBoostMode;                       // offset: 0x30 ordinal: 0xd
  ULONG PerfReductionTolerance;              // offset: 0x34 ordinal: 0xe
  ULONG EnergyPerfPreference;                // offset: 0x38 ordinal: 0xf
  ULONG AutonomousActivityWindow;            // offset: 0x3c ordinal: 0x10
  UCHAR AutonomousPreference;                // offset: 0x40 ordinal: 0x11
  UCHAR LatencyHintPerf[2];                  // offset: 0x41 ordinal: 0x12
  UCHAR LatencyHintUnpark[2];                // offset: 0x43 ordinal: 0x13
  UCHAR DutyCycling;                         // offset: 0x45 ordinal: 0x14
  UCHAR ParkingPerfState[2];                 // offset: 0x46 ordinal: 0x15
  UCHAR DistributeUtility;                   // offset: 0x48 ordinal: 0x16
  UCHAR CoreParkingOverUtilizationThreshold; // offset: 0x49 ordinal: 0x17
  UCHAR CoreParkingConcurrencyThreshold;     // offset: 0x4a ordinal: 0x18
  UCHAR CoreParkingHeadroomThreshold;        // offset: 0x4b ordinal: 0x19
  UCHAR CoreParkingDistributionThreshold;    // offset: 0x4c ordinal: 0x1a
  UCHAR CoreParkingDecreasePolicy;           // offset: 0x4d ordinal: 0x1b
  UCHAR CoreParkingIncreasePolicy;           // offset: 0x4e ordinal: 0x1c
  ULONG CoreParkingDecreaseTime;             // offset: 0x50 ordinal: 0x1d
  ULONG CoreParkingIncreaseTime;             // offset: 0x54 ordinal: 0x1e
  UCHAR CoreParkingMinCores[2];              // offset: 0x58 ordinal: 0x1f
  UCHAR CoreParkingMaxCores[2];              // offset: 0x5a ordinal: 0x20
  UCHAR AllowScaling;                        // offset: 0x5c ordinal: 0x21
  UCHAR IdleDisabled;                        // offset: 0x5d ordinal: 0x22
  ULONG IdleTimeCheck;                       // offset: 0x60 ordinal: 0x23
  UCHAR IdleDemotePercent;                   // offset: 0x64 ordinal: 0x24
  UCHAR IdlePromotePercent;                  // offset: 0x65 ordinal: 0x25
  UCHAR HeteroDecreaseTime;                  // offset: 0x66 ordinal: 0x26
  UCHAR HeteroIncreaseTime;                  // offset: 0x67 ordinal: 0x27
  UCHAR HeteroDecreaseThreshold[640];        // offset: 0x68 ordinal: 0x28
  UCHAR HeteroIncreaseThreshold[640];        // offset: 0x2e8 ordinal: 0x29
  UCHAR Class0FloorPerformance;              // offset: 0x568 ordinal: 0x2a
  UCHAR Class1InitialPerformance;            // offset: 0x569 ordinal: 0x2b
} _PPM_ENGINE_SETTINGS;

// 0xb30 bytes (sizeof)
typedef struct _POP_PPM_PROFILE {
  USHORT *Name;                            // offset: 0x0 ordinal: 0x0
  UCHAR Id;                                // offset: 0x8 ordinal: 0x1
  struct _GUID Guid;                       // offset: 0xc ordinal: 0x2
  ULONG Flags;                             // offset: 0x1c ordinal: 0x3
  UCHAR Priority;                          // offset: 0x20 ordinal: 0x4
  struct _PPM_ENGINE_SETTINGS Settings[2]; // offset: 0x28 ordinal: 0x5
  ULONGLONG StartTime;                     // offset: 0xb08 ordinal: 0x6
  ULONGLONG Count;                         // offset: 0xb10 ordinal: 0x7
  ULONGLONG MaxDuration;                   // offset: 0xb18 ordinal: 0x8
  ULONGLONG MinDuration;                   // offset: 0xb20 ordinal: 0x9
  ULONGLONG TotalDuration;                 // offset: 0xb28 ordinal: 0xa
} _POP_PPM_PROFILE;

// 0x10 bytes (sizeof)
typedef struct _PROCESSOR_PLATFORM_STATE_RESIDENCY {
  ULONGLONG Residency;       // offset: 0x0 ordinal: 0x0
  ULONGLONG TransitionCount; // offset: 0x8 ordinal: 0x1
} _PROCESSOR_PLATFORM_STATE_RESIDENCY;

// 0x18 bytes (sizeof)
typedef struct _PROCESSOR_PLATFORM_STATE_RESIDENCIES {
  ULONG Count; // offset: 0x0 ordinal: 0x0
  struct _PROCESSOR_PLATFORM_STATE_RESIDENCY
      States[1]; // offset: 0x8 ordinal: 0x1
} _PROCESSOR_PLATFORM_STATE_RESIDENCIES;

typedef LONG (*__anon_1410)(VOID *,
                            struct _PROCESSOR_PLATFORM_STATE_RESIDENCIES *);

// 0x48 bytes (sizeof)
typedef struct _PEP_ACPI_EXTENDED_ADDRESS {
  enum _PEP_ACPI_RESOURCE_TYPE Type;      // offset: 0x0 ordinal: 0x0
  union _PEP_ACPI_RESOURCE_FLAGS Flags;   // offset: 0x4 ordinal: 0x1
  UCHAR ResourceFlags;                    // offset: 0x8 ordinal: 0x2
  UCHAR GeneralFlags;                     // offset: 0x9 ordinal: 0x3
  UCHAR TypeSpecificFlags;                // offset: 0xa ordinal: 0x4
  UCHAR RevisionId;                       // offset: 0xb ordinal: 0x5
  UCHAR Reserved;                         // offset: 0xc ordinal: 0x6
  ULONGLONG Granularity;                  // offset: 0x10 ordinal: 0x7
  ULONGLONG MinimumAddress;               // offset: 0x18 ordinal: 0x8
  ULONGLONG MaximumAddress;               // offset: 0x20 ordinal: 0x9
  ULONGLONG TranslationAddress;           // offset: 0x28 ordinal: 0xa
  ULONGLONG AddressLength;                // offset: 0x30 ordinal: 0xb
  ULONGLONG TypeAttribute;                // offset: 0x38 ordinal: 0xc
  struct _UNICODE_STRING *DescriptorName; // offset: 0x40 ordinal: 0xd
} _PEP_ACPI_EXTENDED_ADDRESS;

// 0x48 bytes (sizeof)
typedef union _PEP_ACPI_RESOURCE {
  enum _PEP_ACPI_RESOURCE_TYPE Type;                 // offset: 0x0 ordinal: 0x0
  struct _PEP_ACPI_IO_MEMORY_RESOURCE IoMemory;      // offset: 0x0 ordinal: 0x1
  struct _PEP_ACPI_INTERRUPT_RESOURCE Interrupt;     // offset: 0x0 ordinal: 0x2
  struct _PEP_ACPI_GPIO_RESOURCE Gpio;               // offset: 0x0 ordinal: 0x3
  struct _PEP_ACPI_SPB_I2C_RESOURCE SpbI2c;          // offset: 0x0 ordinal: 0x4
  struct _PEP_ACPI_SPB_SPI_RESOURCE SpbSpi;          // offset: 0x0 ordinal: 0x5
  struct _PEP_ACPI_SPB_UART_RESOURCE SpbUart;        // offset: 0x0 ordinal: 0x6
  struct _PEP_ACPI_EXTENDED_ADDRESS ExtendedAddress; // offset: 0x0 ordinal: 0x7
} _PEP_ACPI_RESOURCE;

// 0x18 bytes (sizeof)
typedef struct _ARM64_DBGKD_CONTROL_SET {
  ULONG Continue;               // offset: 0x0 ordinal: 0x0
  ULONG TraceFlag;              // offset: 0x4 ordinal: 0x1
  ULONGLONG CurrentSymbolStart; // offset: 0x8 ordinal: 0x2
  ULONGLONG CurrentSymbolEnd;   // offset: 0x10 ordinal: 0x3
} _ARM64_DBGKD_CONTROL_SET;

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
    struct _ARM64_DBGKD_CONTROL_SET Arm64ControlSet; // offset: 0x0 ordinal: 0x5
    struct _ARMCE_DBGKD_CONTROL_SET ArmCeControlSet; // offset: 0x0 ordinal: 0x6
    struct _PPC_DBGKD_CONTROL_SET PpcControlSet;     // offset: 0x0 ordinal: 0x7
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
typedef struct _DBGKD_WRITE_CUSTOM_BREAKPOINT {
  ULONGLONG BreakPointAddress;          // offset: 0x0 ordinal: 0x0
  ULONGLONG BreakPointInstruction;      // offset: 0x8 ordinal: 0x1
  ULONG BreakPointHandle;               // offset: 0x10 ordinal: 0x2
  UCHAR BreakPointInstructionSize;      // offset: 0x14 ordinal: 0x3
  UCHAR BreakPointInstructionAlignment; // offset: 0x15 ordinal: 0x4
} _DBGKD_WRITE_CUSTOM_BREAKPOINT;

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
typedef union __anon_1387 {
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
  struct _DBGKD_CONTEXT_EX GetContextEx;     // offset: 0x0 ordinal: 0x14
  struct _DBGKD_CONTEXT_EX SetContextEx;     // offset: 0x0 ordinal: 0x15
} __anon_1387;

// 0x34 bytes (sizeof)
typedef struct _DBGKD_MANIPULATE_STATE32 {
  ULONG ApiNumber;       // offset: 0x0 ordinal: 0x0
  USHORT ProcessorLevel; // offset: 0x4 ordinal: 0x1
  USHORT Processor;      // offset: 0x6 ordinal: 0x2
  LONG ReturnStatus;     // offset: 0x8 ordinal: 0x3
  union __anon_1387 u;   // offset: 0xc ordinal: 0x4
} _DBGKD_MANIPULATE_STATE32;

// 0x28 bytes (sizeof)
typedef union __anon_1360 {
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
  struct _DBGKD_CONTEXT_EX GetContextEx;          // offset: 0x0 ordinal: 0x16
  struct _DBGKD_CONTEXT_EX SetContextEx;          // offset: 0x0 ordinal: 0x17
  struct _DBGKD_WRITE_CUSTOM_BREAKPOINT
      WriteCustomBreakPoint; // offset: 0x0 ordinal: 0x18
} __anon_1360;

// 0x38 bytes (sizeof)
typedef struct _DBGKD_MANIPULATE_STATE64 {
  ULONG ApiNumber;       // offset: 0x0 ordinal: 0x0
  USHORT ProcessorLevel; // offset: 0x4 ordinal: 0x1
  USHORT Processor;      // offset: 0x6 ordinal: 0x2
  LONG ReturnStatus;     // offset: 0x8 ordinal: 0x3
  union __anon_1360 u;   // offset: 0x10 ordinal: 0x4
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
  struct _LIST_ENTRY DispatchedList;     // offset: 0x0 ordinal: 0x0
  ULONG DispatchedCount;                 // offset: 0x10 ordinal: 0x1
  struct _LIST_ENTRY CompletedList;      // offset: 0x18 ordinal: 0x2
  struct _KSEMAPHORE CompletedSemaphore; // offset: 0x28 ordinal: 0x3
  ULONGLONG SpinLock;                    // offset: 0x48 ordinal: 0x4
} _PNP_DEVICE_COMPLETION_QUEUE;

// 0x48 bytes (sizeof)
typedef struct _MCGEN_TRACE_CONTEXT {
  ULONGLONG RegistrationHandle; // offset: 0x0 ordinal: 0x0
  ULONGLONG Logger;             // offset: 0x8 ordinal: 0x1
  ULONGLONG MatchAnyKeyword;    // offset: 0x10 ordinal: 0x2
  ULONGLONG MatchAllKeyword;    // offset: 0x18 ordinal: 0x3
  ULONG Flags;                  // offset: 0x20 ordinal: 0x4
  ULONG IsEnabled;              // offset: 0x24 ordinal: 0x5
  UCHAR Level;                  // offset: 0x28 ordinal: 0x6
  UCHAR Reserve;                // offset: 0x29 ordinal: 0x7
  USHORT EnableBitsCount;       // offset: 0x2a ordinal: 0x8
  ULONG *EnableBitMask;         // offset: 0x30 ordinal: 0x9
  ULONGLONG *EnableKeyWords;    // offset: 0x38 ordinal: 0xa
  UCHAR *EnableLevel;           // offset: 0x40 ordinal: 0xb
} _MCGEN_TRACE_CONTEXT;

// 0x10 bytes (sizeof)
typedef struct _PO_FX_PERF_STATE {
  ULONGLONG Value; // offset: 0x0 ordinal: 0x0
  VOID *Context;   // offset: 0x8 ordinal: 0x1
} _PO_FX_PERF_STATE;

// 0x10 bytes (sizeof)
typedef struct __anon_1323 {
  ULONG Count;                      // offset: 0x0 ordinal: 0x0
  struct _PO_FX_PERF_STATE *States; // offset: 0x8 ordinal: 0x1
} __anon_1323;

// 0x10 bytes (sizeof)
typedef struct __anon_1324 {
  ULONGLONG Minimum; // offset: 0x0 ordinal: 0x0
  ULONGLONG Maximum; // offset: 0x8 ordinal: 0x1
} __anon_1324;

// 0x30 bytes (sizeof)
typedef struct _PO_FX_COMPONENT_PERF_SET {
  struct _UNICODE_STRING Name;      // offset: 0x0 ordinal: 0x0
  ULONGLONG Flags;                  // offset: 0x10 ordinal: 0x1
  enum _PO_FX_PERF_STATE_UNIT Unit; // offset: 0x18 ordinal: 0x2
  enum _PO_FX_PERF_STATE_TYPE Type; // offset: 0x1c ordinal: 0x3
  union {
    struct __anon_1323 Discrete; // offset: 0x20 ordinal: 0x4
    struct __anon_1324 Range;    // offset: 0x20 ordinal: 0x5
  };
} _PO_FX_COMPONENT_PERF_SET;

// 0x20 bytes (sizeof)
typedef struct _POP_FX_PERF_SET {
  struct _PO_FX_COMPONENT_PERF_SET *PerfSet; // offset: 0x0 ordinal: 0x0
  ULONGLONG CurrentPerf;                     // offset: 0x8 ordinal: 0x1
  ULONGLONG CurrentPerfStamp;                // offset: 0x10 ordinal: 0x2
  UCHAR CurrentPerfNominal;                  // offset: 0x18 ordinal: 0x3
} _POP_FX_PERF_SET;

// 0x10 bytes (sizeof)
typedef struct _PO_FX_PERF_STATE_CHANGE {
  ULONG Set; // offset: 0x0 ordinal: 0x0
  union {
    ULONG StateIndex;     // offset: 0x8 ordinal: 0x1
    ULONGLONG StateValue; // offset: 0x8 ordinal: 0x2
  };
} _PO_FX_PERF_STATE_CHANGE;

// 0x18 bytes (sizeof)
typedef struct _POP_FX_IDLE_STATE {
  ULONGLONG TransitionLatency;    // offset: 0x0 ordinal: 0x0
  ULONGLONG ResidencyRequirement; // offset: 0x8 ordinal: 0x1
  ULONG NominalPower;             // offset: 0x10 ordinal: 0x2
} _POP_FX_IDLE_STATE;

// 0x30 bytes (sizeof)
typedef struct _POP_FX_ACCOUNTING {
  ULONGLONG Lock;              // offset: 0x0 ordinal: 0x0
  UCHAR Active;                // offset: 0x8 ordinal: 0x1
  ULONG DripsRequiredState;    // offset: 0xc ordinal: 0x2
  LONG Level;                  // offset: 0x10 ordinal: 0x3
  LONGLONG ActiveStamp;        // offset: 0x18 ordinal: 0x4
  ULONGLONG CsActiveTime;      // offset: 0x20 ordinal: 0x5
  LONGLONG CriticalActiveTime; // offset: 0x28 ordinal: 0x6
} _POP_FX_ACCOUNTING;

// 0x8 bytes (sizeof)
typedef union _HV_PARTITION_PRIVILEGE_MASK {
  ULONGLONG AsUINT64;                            // offset: 0x0 ordinal: 0x0
  ULONGLONG AccessVpRunTimeReg : 1;              // offset: 0x0 ordinal: 0x1
  ULONGLONG AccessPartitionReferenceCounter : 1; // offset: 0x0 ordinal: 0x2
  ULONGLONG AccessSynicRegs : 1;                 // offset: 0x0 ordinal: 0x3
  ULONGLONG AccessSyntheticTimerRegs : 1;        // offset: 0x0 ordinal: 0x4
  ULONGLONG AccessIntrCtrlRegs : 1;              // offset: 0x0 ordinal: 0x5
  ULONGLONG AccessHypercallMsrs : 1;             // offset: 0x0 ordinal: 0x6
  ULONGLONG AccessVpIndex : 1;                   // offset: 0x0 ordinal: 0x7
  ULONGLONG AccessResetReg : 1;                  // offset: 0x0 ordinal: 0x8
  ULONGLONG AccessStatsReg : 1;                  // offset: 0x0 ordinal: 0x9
  ULONGLONG AccessPartitionReferenceTsc : 1;     // offset: 0x0 ordinal: 0xa
  ULONGLONG AccessGuestIdleReg : 1;              // offset: 0x0 ordinal: 0xb
  ULONGLONG AccessFrequencyRegs : 1;             // offset: 0x0 ordinal: 0xc
  ULONGLONG AccessDebugRegs : 1;                 // offset: 0x0 ordinal: 0xd
  ULONGLONG Reserved1 : 19;                      // offset: 0x0 ordinal: 0xe
  ULONGLONG CreatePartitions : 1;                // offset: 0x0 ordinal: 0xf
  ULONGLONG AccessPartitionId : 1;               // offset: 0x0 ordinal: 0x10
  ULONGLONG AccessMemoryPool : 1;                // offset: 0x0 ordinal: 0x11
  ULONGLONG AdjustMessageBuffers : 1;            // offset: 0x0 ordinal: 0x12
  ULONGLONG PostMessages : 1;                    // offset: 0x0 ordinal: 0x13
  ULONGLONG SignalEvents : 1;                    // offset: 0x0 ordinal: 0x14
  ULONGLONG CreatePort : 1;                      // offset: 0x0 ordinal: 0x15
  ULONGLONG ConnectPort : 1;                     // offset: 0x0 ordinal: 0x16
  ULONGLONG AccessStats : 1;                     // offset: 0x0 ordinal: 0x17
  ULONGLONG Reserved2 : 2;                       // offset: 0x0 ordinal: 0x18
  ULONGLONG Debugging : 1;                       // offset: 0x0 ordinal: 0x19
  ULONGLONG CpuManagement : 1;                   // offset: 0x0 ordinal: 0x1a
  ULONGLONG ConfigureProfiler : 1;               // offset: 0x0 ordinal: 0x1b
  ULONGLONG AccessVpExitTracing : 1;             // offset: 0x0 ordinal: 0x1c
  ULONGLONG
  EnableExtendedGvaRangesForFlushVirtualAddressList : 1; // offset: 0x0
                                                         // ordinal: 0x1d
  ULONGLONG AccessVsm : 1;                // offset: 0x0 ordinal: 0x1e
  ULONGLONG AccessVpRegisters : 1;        // offset: 0x0 ordinal: 0x1f
  ULONGLONG UnusedBit : 1;                // offset: 0x0 ordinal: 0x20
  ULONGLONG FastHypercallOutput : 1;      // offset: 0x0 ordinal: 0x21
  ULONGLONG EnableExtendedHypercalls : 1; // offset: 0x0 ordinal: 0x22
  ULONGLONG StartVirtualProcessor : 1;    // offset: 0x0 ordinal: 0x23
  ULONGLONG Reserved3 : 10;               // offset: 0x0 ordinal: 0x24
} _HV_PARTITION_PRIVILEGE_MASK;

// 0x10 bytes (sizeof)
typedef struct _HV_X64_HYPERVISOR_FEATURES {
  union _HV_PARTITION_PRIVILEGE_MASK
      PartitionPrivileges;                         // offset: 0x0 ordinal: 0x0
  ULONG MaxSupportedCState : 4;                    // offset: 0x8 ordinal: 0x1
  ULONG HpetNeededForC3PowerState_Deprecated : 1;  // offset: 0x8 ordinal: 0x2
  ULONG Reserved : 27;                             // offset: 0x8 ordinal: 0x3
  ULONG MwaitAvailable_Deprecated : 1;             // offset: 0xc ordinal: 0x4
  ULONG GuestDebuggingAvailable : 1;               // offset: 0xc ordinal: 0x5
  ULONG PerformanceMonitorsAvailable : 1;          // offset: 0xc ordinal: 0x6
  ULONG CpuDynamicPartitioningAvailable : 1;       // offset: 0xc ordinal: 0x7
  ULONG XmmRegistersForFastHypercallAvailable : 1; // offset: 0xc ordinal: 0x8
  ULONG GuestIdleAvailable : 1;                    // offset: 0xc ordinal: 0x9
  ULONG HypervisorSleepStateSupportAvailable : 1;  // offset: 0xc ordinal: 0xa
  ULONG NumaDistanceQueryAvailable : 1;            // offset: 0xc ordinal: 0xb
  ULONG FrequencyRegsAvailable : 1;                // offset: 0xc ordinal: 0xc
  ULONG SyntheticMachineCheckAvailable : 1;        // offset: 0xc ordinal: 0xd
  ULONG GuestCrashRegsAvailable : 1;               // offset: 0xc ordinal: 0xe
  ULONG DebugRegsAvailable : 1;                    // offset: 0xc ordinal: 0xf
  ULONG Npiep1Available : 1;                       // offset: 0xc ordinal: 0x10
  ULONG DisableHypervisorAvailable : 1;            // offset: 0xc ordinal: 0x11
  ULONG
  ExtendedGvaRangesForFlushVirtualAddressListAvailable : 1; // offset: 0xc
                                                            // ordinal: 0x12
  ULONG FastHypercallOutputAvailable : 1; // offset: 0xc ordinal: 0x13
  ULONG SvmFeaturesAvailable : 1;         // offset: 0xc ordinal: 0x14
  ULONG SintPollingModeAvailable : 1;     // offset: 0xc ordinal: 0x15
  ULONG Reserved1 : 14;                   // offset: 0xc ordinal: 0x16
} _HV_X64_HYPERVISOR_FEATURES;

// 0x10 bytes (sizeof)
typedef struct _STRING64 {
  USHORT Length;        // offset: 0x0 ordinal: 0x0
  USHORT MaximumLength; // offset: 0x2 ordinal: 0x1
  ULONGLONG Buffer;     // offset: 0x8 ordinal: 0x2
} _STRING64;

// 0x4e8 bytes (sizeof)
typedef struct _GDI_TEB_BATCH64 {
  ULONG Offset : 31;             // offset: 0x0 ordinal: 0x0
  ULONG HasRenderingCommand : 1; // offset: 0x0 ordinal: 0x1
  ULONGLONG HDC;                 // offset: 0x8 ordinal: 0x2
  ULONG Buffer[310];             // offset: 0x10 ordinal: 0x3
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

// 0x1000 bytes (sizeof)
typedef struct _TEB32 {
  struct _NT_TIB32 NtTib;                       // offset: 0x0 ordinal: 0x0
  ULONG EnvironmentPointer;                     // offset: 0x1c ordinal: 0x1
  struct _CLIENT_ID32 ClientId;                 // offset: 0x20 ordinal: 0x2
  ULONG ActiveRpcHandle;                        // offset: 0x28 ordinal: 0x3
  ULONG ThreadLocalStoragePointer;              // offset: 0x2c ordinal: 0x4
  ULONG ProcessEnvironmentBlock;                // offset: 0x30 ordinal: 0x5
  ULONG LastErrorValue;                         // offset: 0x34 ordinal: 0x6
  ULONG CountOfOwnedCriticalSections;           // offset: 0x38 ordinal: 0x7
  ULONG CsrClientThread;                        // offset: 0x3c ordinal: 0x8
  ULONG Win32ThreadInfo;                        // offset: 0x40 ordinal: 0x9
  ULONG User32Reserved[26];                     // offset: 0x44 ordinal: 0xa
  ULONG UserReserved[5];                        // offset: 0xac ordinal: 0xb
  ULONG WOW32Reserved;                          // offset: 0xc0 ordinal: 0xc
  ULONG CurrentLocale;                          // offset: 0xc4 ordinal: 0xd
  ULONG FpSoftwareStatusRegister;               // offset: 0xc8 ordinal: 0xe
  ULONG ReservedForDebuggerInstrumentation[16]; // offset: 0xcc ordinal: 0xf
  ULONG SystemReserved1[38];                    // offset: 0x10c ordinal: 0x10
  LONG ExceptionCode;                           // offset: 0x1a4 ordinal: 0x11
  ULONG ActivationContextStackPointer;          // offset: 0x1a8 ordinal: 0x12
  ULONG InstrumentationCallbackSp;              // offset: 0x1ac ordinal: 0x13
  ULONG InstrumentationCallbackPreviousPc;      // offset: 0x1b0 ordinal: 0x14
  ULONG InstrumentationCallbackPreviousSp;      // offset: 0x1b4 ordinal: 0x15
  UCHAR InstrumentationCallbackDisabled;        // offset: 0x1b8 ordinal: 0x16
  UCHAR SpareBytes[23];                         // offset: 0x1b9 ordinal: 0x17
  ULONG TxFsContext;                            // offset: 0x1d0 ordinal: 0x18
  struct _GDI_TEB_BATCH32 GdiTebBatch;          // offset: 0x1d4 ordinal: 0x19
  struct _CLIENT_ID32 RealClientId;             // offset: 0x6b4 ordinal: 0x1a
  ULONG GdiCachedProcessHandle;                 // offset: 0x6bc ordinal: 0x1b
  ULONG GdiClientPID;                           // offset: 0x6c0 ordinal: 0x1c
  ULONG GdiClientTID;                           // offset: 0x6c4 ordinal: 0x1d
  ULONG GdiThreadLocalInfo;                     // offset: 0x6c8 ordinal: 0x1e
  ULONG Win32ClientInfo[62];                    // offset: 0x6cc ordinal: 0x1f
  ULONG glDispatchTable[233];                   // offset: 0x7c4 ordinal: 0x20
  ULONG glReserved1[29];                        // offset: 0xb68 ordinal: 0x21
  ULONG glReserved2;                            // offset: 0xbdc ordinal: 0x22
  ULONG glSectionInfo;                          // offset: 0xbe0 ordinal: 0x23
  ULONG glSection;                              // offset: 0xbe4 ordinal: 0x24
  ULONG glTable;                                // offset: 0xbe8 ordinal: 0x25
  ULONG glCurrentRC;                            // offset: 0xbec ordinal: 0x26
  ULONG glContext;                              // offset: 0xbf0 ordinal: 0x27
  ULONG LastStatusValue;                        // offset: 0xbf4 ordinal: 0x28
  struct _STRING32 StaticUnicodeString;         // offset: 0xbf8 ordinal: 0x29
  WCHAR StaticUnicodeBuffer[261];               // offset: 0xc00 ordinal: 0x2a
  ULONG DeallocationStack;                      // offset: 0xe0c ordinal: 0x2b
  ULONG TlsSlots[64];                           // offset: 0xe10 ordinal: 0x2c
  struct LIST_ENTRY32 TlsLinks;                 // offset: 0xf10 ordinal: 0x2d
  ULONG Vdm;                                    // offset: 0xf18 ordinal: 0x2e
  ULONG ReservedForNtRpc;                       // offset: 0xf1c ordinal: 0x2f
  ULONG DbgSsReserved[2];                       // offset: 0xf20 ordinal: 0x30
  ULONG HardErrorMode;                          // offset: 0xf28 ordinal: 0x31
  ULONG Instrumentation[9];                     // offset: 0xf2c ordinal: 0x32
  struct _GUID ActivityId;                      // offset: 0xf50 ordinal: 0x33
  ULONG SubProcessTag;                          // offset: 0xf60 ordinal: 0x34
  ULONG PerflibData;                            // offset: 0xf64 ordinal: 0x35
  ULONG EtwTraceData;                           // offset: 0xf68 ordinal: 0x36
  ULONG WinSockData;                            // offset: 0xf6c ordinal: 0x37
  ULONG GdiBatchCount;                          // offset: 0xf70 ordinal: 0x38
  union {
    struct _PROCESSOR_NUMBER
        CurrentIdealProcessor; // offset: 0xf74 ordinal: 0x39
    ULONG IdealProcessorValue; // offset: 0xf74 ordinal: 0x3a
    UCHAR ReservedPad0;        // offset: 0xf74 ordinal: 0x3b
  };
  UCHAR ReservedPad1;             // offset: 0xf75 ordinal: 0x3c
  UCHAR ReservedPad2;             // offset: 0xf76 ordinal: 0x3d
  UCHAR IdealProcessor;           // offset: 0xf77 ordinal: 0x3e
  ULONG GuaranteedStackBytes;     // offset: 0xf78 ordinal: 0x3f
  ULONG ReservedForPerf;          // offset: 0xf7c ordinal: 0x40
  ULONG ReservedForOle;           // offset: 0xf80 ordinal: 0x41
  ULONG WaitingOnLoaderLock;      // offset: 0xf84 ordinal: 0x42
  ULONG SavedPriorityState;       // offset: 0xf88 ordinal: 0x43
  ULONG ReservedForCodeCoverage;  // offset: 0xf8c ordinal: 0x44
  ULONG ThreadPoolData;           // offset: 0xf90 ordinal: 0x45
  ULONG TlsExpansionSlots;        // offset: 0xf94 ordinal: 0x46
  ULONG MuiGeneration;            // offset: 0xf98 ordinal: 0x47
  ULONG IsImpersonating;          // offset: 0xf9c ordinal: 0x48
  ULONG NlsCache;                 // offset: 0xfa0 ordinal: 0x49
  ULONG pShimData;                // offset: 0xfa4 ordinal: 0x4a
  USHORT HeapVirtualAffinity;     // offset: 0xfa8 ordinal: 0x4b
  USHORT LowFragHeapDataSlot;     // offset: 0xfaa ordinal: 0x4c
  ULONG CurrentTransactionHandle; // offset: 0xfac ordinal: 0x4d
  ULONG ActiveFrame;              // offset: 0xfb0 ordinal: 0x4e
  ULONG FlsData;                  // offset: 0xfb4 ordinal: 0x4f
  ULONG PreferredLanguages;       // offset: 0xfb8 ordinal: 0x50
  ULONG UserPrefLanguages;        // offset: 0xfbc ordinal: 0x51
  ULONG MergedPrefLanguages;      // offset: 0xfc0 ordinal: 0x52
  ULONG MuiImpersonation;         // offset: 0xfc4 ordinal: 0x53
  union {
    USHORT CrossTebFlags;          // offset: 0xfc8 ordinal: 0x54
    USHORT SpareCrossTebBits : 16; // offset: 0xfc8 ordinal: 0x55
  };
  union {
    USHORT SameTebFlags;      // offset: 0xfca ordinal: 0x56
    USHORT SafeThunkCall : 1; // offset: 0xfca ordinal: 0x57
  };
  USHORT InDebugPrint : 1;           // offset: 0xfca ordinal: 0x58
  USHORT HasFiberData : 1;           // offset: 0xfca ordinal: 0x59
  USHORT SkipThreadAttach : 1;       // offset: 0xfca ordinal: 0x5a
  USHORT WerInShipAssertCode : 1;    // offset: 0xfca ordinal: 0x5b
  USHORT RanProcessInit : 1;         // offset: 0xfca ordinal: 0x5c
  USHORT ClonedThread : 1;           // offset: 0xfca ordinal: 0x5d
  USHORT SuppressDebugMsg : 1;       // offset: 0xfca ordinal: 0x5e
  USHORT DisableUserStackWalk : 1;   // offset: 0xfca ordinal: 0x5f
  USHORT RtlExceptionAttached : 1;   // offset: 0xfca ordinal: 0x60
  USHORT InitialThread : 1;          // offset: 0xfca ordinal: 0x61
  USHORT SessionAware : 1;           // offset: 0xfca ordinal: 0x62
  USHORT LoadOwner : 1;              // offset: 0xfca ordinal: 0x63
  USHORT LoaderWorker : 1;           // offset: 0xfca ordinal: 0x64
  USHORT SpareSameTebBits : 2;       // offset: 0xfca ordinal: 0x65
  ULONG TxnScopeEnterCallback;       // offset: 0xfcc ordinal: 0x66
  ULONG TxnScopeExitCallback;        // offset: 0xfd0 ordinal: 0x67
  ULONG TxnScopeContext;             // offset: 0xfd4 ordinal: 0x68
  ULONG LockCount;                   // offset: 0xfd8 ordinal: 0x69
  LONG WowTebOffset;                 // offset: 0xfdc ordinal: 0x6a
  ULONG ResourceRetValue;            // offset: 0xfe0 ordinal: 0x6b
  ULONG ReservedForWdf;              // offset: 0xfe4 ordinal: 0x6c
  ULONGLONG ReservedForCrt;          // offset: 0xfe8 ordinal: 0x6d
  struct _GUID EffectiveContainerId; // offset: 0xff0 ordinal: 0x6e
} _TEB32;

// 0x10 bytes (sizeof)
typedef struct _FILESYSTEM_DISK_COUNTERS {
  ULONGLONG FsBytesRead;    // offset: 0x0 ordinal: 0x0
  ULONGLONG FsBytesWritten; // offset: 0x8 ordinal: 0x1
} _FILESYSTEM_DISK_COUNTERS;

// 0x18 bytes (sizeof)
typedef struct _ETW_SESSION_PERF_COUNTERS {
  LONG BufferMemoryPagedPool;    // offset: 0x0 ordinal: 0x0
  LONG BufferMemoryNonPagedPool; // offset: 0x4 ordinal: 0x1
  ULONGLONG EventsLoggedCount;   // offset: 0x8 ordinal: 0x2
  LONG EventsLost;               // offset: 0x10 ordinal: 0x3
  LONG NumConsumers;             // offset: 0x14 ordinal: 0x4
} _ETW_SESSION_PERF_COUNTERS;

// 0xc0 bytes (sizeof)
typedef struct _PCW_PROCESSOR_INFO {
  ULONGLONG IdleTime;               // offset: 0x0 ordinal: 0x0
  ULONGLONG AvailableTime;          // offset: 0x8 ordinal: 0x1
  ULONGLONG UserTime;               // offset: 0x10 ordinal: 0x2
  ULONGLONG KernelTime;             // offset: 0x18 ordinal: 0x3
  ULONG Interrupts;                 // offset: 0x20 ordinal: 0x4
  ULONGLONG DpcTime;                // offset: 0x28 ordinal: 0x5
  ULONGLONG InterruptTime;          // offset: 0x30 ordinal: 0x6
  ULONG ClockInterrupts;            // offset: 0x38 ordinal: 0x7
  ULONG DpcCount;                   // offset: 0x3c ordinal: 0x8
  ULONG DpcRate;                    // offset: 0x40 ordinal: 0x9
  ULONGLONG C1Time;                 // offset: 0x48 ordinal: 0xa
  ULONGLONG C2Time;                 // offset: 0x50 ordinal: 0xb
  ULONGLONG C3Time;                 // offset: 0x58 ordinal: 0xc
  ULONGLONG C1Transitions;          // offset: 0x60 ordinal: 0xd
  ULONGLONG C2Transitions;          // offset: 0x68 ordinal: 0xe
  ULONGLONG C3Transitions;          // offset: 0x70 ordinal: 0xf
  ULONGLONG StallTime;              // offset: 0x78 ordinal: 0x10
  ULONG ParkingStatus;              // offset: 0x80 ordinal: 0x11
  ULONG CurrentFrequency;           // offset: 0x84 ordinal: 0x12
  ULONG PercentMaxFrequency;        // offset: 0x88 ordinal: 0x13
  ULONG StateFlags;                 // offset: 0x8c ordinal: 0x14
  ULONG NominalThroughput;          // offset: 0x90 ordinal: 0x15
  ULONG ActiveThroughput;           // offset: 0x94 ordinal: 0x16
  ULONGLONG ScaledThroughput;       // offset: 0x98 ordinal: 0x17
  ULONGLONG ScaledKernelThroughput; // offset: 0xa0 ordinal: 0x18
  ULONGLONG AverageIdleTime;        // offset: 0xa8 ordinal: 0x19
  ULONGLONG IdleBreakEvents;        // offset: 0xb0 ordinal: 0x1a
  ULONG PerformanceLimit;           // offset: 0xb8 ordinal: 0x1b
  ULONG PerformanceLimitFlags;      // offset: 0xbc ordinal: 0x1c
} _PCW_PROCESSOR_INFO;

// 0x28 bytes (sizeof)
typedef struct _PCW_MASK_INFORMATION {
  ULONGLONG CounterMask;                // offset: 0x0 ordinal: 0x0
  struct _UNICODE_STRING *InstanceMask; // offset: 0x8 ordinal: 0x1
  ULONG InstanceId;                     // offset: 0x10 ordinal: 0x2
  UCHAR CollectMultiple;                // offset: 0x14 ordinal: 0x3
  struct _PCW_BUFFER *Buffer;           // offset: 0x18 ordinal: 0x4
  struct _KEVENT *CancelEvent;          // offset: 0x20 ordinal: 0x5
} _PCW_MASK_INFORMATION;

// 0x10 bytes (sizeof)
typedef struct _PCW_COUNTER_INFORMATION {
  ULONGLONG CounterMask;                // offset: 0x0 ordinal: 0x0
  struct _UNICODE_STRING *InstanceMask; // offset: 0x8 ordinal: 0x1
} _PCW_COUNTER_INFORMATION;

// 0x28 bytes (sizeof)
typedef union _PCW_CALLBACK_INFORMATION {
  struct _PCW_COUNTER_INFORMATION AddCounter;      // offset: 0x0 ordinal: 0x0
  struct _PCW_COUNTER_INFORMATION RemoveCounter;   // offset: 0x0 ordinal: 0x1
  struct _PCW_MASK_INFORMATION EnumerateInstances; // offset: 0x0 ordinal: 0x2
  struct _PCW_MASK_INFORMATION CollectData;        // offset: 0x0 ordinal: 0x3
} _PCW_CALLBACK_INFORMATION;

typedef LONG (*__anon_1172)(enum _PCW_CALLBACK_TYPE,
                            union _PCW_CALLBACK_INFORMATION *, VOID *);

// 0x30 bytes (sizeof)
typedef struct _PCW_REGISTRATION_INFORMATION {
  ULONG Version;                            // offset: 0x0 ordinal: 0x0
  struct _UNICODE_STRING *Name;             // offset: 0x8 ordinal: 0x1
  ULONG CounterCount;                       // offset: 0x10 ordinal: 0x2
  struct _PCW_COUNTER_DESCRIPTOR *Counters; // offset: 0x18 ordinal: 0x3
  LONG(*Callback)
  (enum _PCW_CALLBACK_TYPE, union _PCW_CALLBACK_INFORMATION *,
   VOID *);              // offset: 0x20 ordinal: 0x4
  VOID *CallbackContext; // offset: 0x28 ordinal: 0x5
} _PCW_REGISTRATION_INFORMATION;

// 0x20 bytes (sizeof)
typedef struct _HVIEW_MAP_ENTRY {
  union {
    VOID *ViewStart;        // offset: 0x0 ordinal: 0x0
    ULONGLONG IsPinned : 1; // offset: 0x0 ordinal: 0x1
  };
  VOID *Bcb;             // offset: 0x8 ordinal: 0x2
  ULONGLONG PinnedPages; // offset: 0x10 ordinal: 0x3
  ULONG Size;            // offset: 0x18 ordinal: 0x4
} _HVIEW_MAP_ENTRY;

// 0x800 bytes (sizeof)
typedef struct _HVIEW_MAP_TABLE {
  struct _HVIEW_MAP_ENTRY Entries[64]; // offset: 0x0 ordinal: 0x0
} _HVIEW_MAP_TABLE;

// 0x400 bytes (sizeof)
typedef struct _HVIEW_MAP_DIRECTORY {
  struct _HVIEW_MAP_TABLE *Tables[128]; // offset: 0x0 ordinal: 0x0
} _HVIEW_MAP_DIRECTORY;

// 0x48 bytes (sizeof)
typedef struct _HVIEW_MAP_PIN_LOG_ENTRY {
  ULONG ViewOffset;        // offset: 0x0 ordinal: 0x0
  UCHAR Pinned;            // offset: 0x4 ordinal: 0x1
  ULONGLONG PinMask;       // offset: 0x8 ordinal: 0x2
  struct _KTHREAD *Thread; // offset: 0x10 ordinal: 0x3
  VOID *Stack[6];          // offset: 0x18 ordinal: 0x4
} _HVIEW_MAP_PIN_LOG_ENTRY;

// 0x488 bytes (sizeof)
typedef struct _HVIEW_MAP_PIN_LOG {
  ULONG Next;                                  // offset: 0x0 ordinal: 0x0
  ULONG Size;                                  // offset: 0x4 ordinal: 0x1
  struct _HVIEW_MAP_PIN_LOG_ENTRY Entries[16]; // offset: 0x8 ordinal: 0x2
} _HVIEW_MAP_PIN_LOG;

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
  ULONGLONG LastReorganizeTime;   // offset: 0xa8 ordinal: 0x11
  ULONG Reserved1[83];            // offset: 0xb0 ordinal: 0x12
  ULONG CheckSum;                 // offset: 0x1fc ordinal: 0x13
  ULONG Reserved2[882];           // offset: 0x200 ordinal: 0x14
  struct _GUID ThawTmId;          // offset: 0xfc8 ordinal: 0x15
  struct _GUID ThawRmId;          // offset: 0xfd8 ordinal: 0x16
  struct _GUID ThawLogId;         // offset: 0xfe8 ordinal: 0x17
  ULONG BootType;                 // offset: 0xff8 ordinal: 0x18
  ULONG BootRecover;              // offset: 0xffc ordinal: 0x19
} _HBASE_BLOCK;

// 0x50 bytes (sizeof)
typedef struct tagSWITCH_CONTEXT_DATA {
  ULONGLONG ullOsMaxVersionTested; // offset: 0x0 ordinal: 0x0
  ULONG ulTargetPlatform;          // offset: 0x8 ordinal: 0x1
  ULONGLONG ullContextMinimum;     // offset: 0x10 ordinal: 0x2
  struct _GUID guPlatform;         // offset: 0x18 ordinal: 0x3
  struct _GUID guMinPlatform;      // offset: 0x28 ordinal: 0x4
  ULONG ulContextSource;           // offset: 0x38 ordinal: 0x5
  ULONG ulElementCount;            // offset: 0x3c ordinal: 0x6
  struct _GUID guElements[1];      // offset: 0x40 ordinal: 0x7
} tagSWITCH_CONTEXT_DATA;

// 0x18 bytes (sizeof)
typedef struct tagSWITCH_CONTEXT_ATTRIBUTE {
  ULONGLONG ulContextUpdateCounter; // offset: 0x0 ordinal: 0x0
  LONG fAllowContextUpdate;         // offset: 0x8 ordinal: 0x1
  LONG fEnableTrace;                // offset: 0xc ordinal: 0x2
  ULONGLONG EtwHandle;              // offset: 0x10 ordinal: 0x3
} tagSWITCH_CONTEXT_ATTRIBUTE;

// 0x68 bytes (sizeof)
typedef struct tagSWITCH_CONTEXT {
  struct tagSWITCH_CONTEXT_ATTRIBUTE Attribute; // offset: 0x0 ordinal: 0x0
  struct tagSWITCH_CONTEXT_DATA Data;           // offset: 0x18 ordinal: 0x1
} tagSWITCH_CONTEXT;

// 0x8 bytes (sizeof)
typedef union _MM_STORE_KEY {
  ULONGLONG KeyLow : 60; // offset: 0x0 ordinal: 0x0
  ULONGLONG KeyHigh : 4; // offset: 0x0 ordinal: 0x1
  ULONGLONG EntireKey;   // offset: 0x0 ordinal: 0x2
} _MM_STORE_KEY;

// 0x8 bytes (sizeof)
typedef struct _MI_CLONE_BLOCK_FLAGS {
  ULONGLONG ActualCloneCommit : 59; // offset: 0x0 ordinal: 0x0
  ULONGLONG CloneProtection : 5;    // offset: 0x0 ordinal: 0x1
} _MI_CLONE_BLOCK_FLAGS;

// 0x10 bytes (sizeof)
typedef struct _EVENT_FILTER_DESCRIPTOR {
  ULONGLONG Ptr; // offset: 0x0 ordinal: 0x0
  ULONG Size;    // offset: 0x8 ordinal: 0x1
  ULONG Type;    // offset: 0xc ordinal: 0x2
} _EVENT_FILTER_DESCRIPTOR;

typedef VOID (*__anon_1060)(struct _GUID *, ULONG, UCHAR, ULONGLONG, ULONGLONG,
                            struct _EVENT_FILTER_DESCRIPTOR *, VOID *);

// 0x40 bytes (sizeof)
typedef struct _TlgProvider_t {
  ULONG LevelPlus1;            // offset: 0x0 ordinal: 0x0
  USHORT *ProviderMetadataPtr; // offset: 0x8 ordinal: 0x1
  ULONGLONG KeywordAny;        // offset: 0x10 ordinal: 0x2
  ULONGLONG KeywordAll;        // offset: 0x18 ordinal: 0x3
  ULONGLONG RegHandle;         // offset: 0x20 ordinal: 0x4
  VOID(*EnableCallback)
  (struct _GUID *, ULONG, UCHAR, ULONGLONG, ULONGLONG,
   struct _EVENT_FILTER_DESCRIPTOR *, VOID *); // offset: 0x28 ordinal: 0x5
  VOID *CallbackContext;                       // offset: 0x30 ordinal: 0x6
  VOID (*AnnotationFunc)(__anon_1063);         // offset: 0x38 ordinal: 0x7
} _TlgProvider_t;

// 0x8 bytes (sizeof)
typedef union _WHEA_PERSISTENCE_INFO {
  ULONGLONG Signature : 16;  // offset: 0x0 ordinal: 0x0
  ULONGLONG Length : 24;     // offset: 0x0 ordinal: 0x1
  ULONGLONG Identifier : 16; // offset: 0x0 ordinal: 0x2
  ULONGLONG Attributes : 2;  // offset: 0x0 ordinal: 0x3
  ULONGLONG DoNotLog : 1;    // offset: 0x0 ordinal: 0x4
  ULONGLONG Reserved : 5;    // offset: 0x0 ordinal: 0x5
  ULONGLONG AsULONGLONG;     // offset: 0x0 ordinal: 0x6
} _WHEA_PERSISTENCE_INFO;

// 0x8 bytes (sizeof)
typedef union _WHEA_TIMESTAMP {
  ULONGLONG Seconds : 8;                // offset: 0x0 ordinal: 0x0
  ULONGLONG Minutes : 8;                // offset: 0x0 ordinal: 0x1
  ULONGLONG Hours : 8;                  // offset: 0x0 ordinal: 0x2
  ULONGLONG Precise : 1;                // offset: 0x0 ordinal: 0x3
  ULONGLONG Reserved : 7;               // offset: 0x0 ordinal: 0x4
  ULONGLONG Day : 8;                    // offset: 0x0 ordinal: 0x5
  ULONGLONG Month : 8;                  // offset: 0x0 ordinal: 0x6
  ULONGLONG Year : 8;                   // offset: 0x0 ordinal: 0x7
  ULONGLONG Century : 8;                // offset: 0x0 ordinal: 0x8
  union _LARGE_INTEGER AsLARGE_INTEGER; // offset: 0x0 ordinal: 0x9
} _WHEA_TIMESTAMP;

// 0x80 bytes (sizeof)
typedef struct _WHEA_ERROR_RECORD_HEADER {
  ULONG Signature;                    // offset: 0x0 ordinal: 0x0
  union _WHEA_REVISION Revision;      // offset: 0x4 ordinal: 0x1
  ULONG SignatureEnd;                 // offset: 0x6 ordinal: 0x2
  USHORT SectionCount;                // offset: 0xa ordinal: 0x3
  enum _WHEA_ERROR_SEVERITY Severity; // offset: 0xc ordinal: 0x4
  union _WHEA_ERROR_RECORD_HEADER_VALIDBITS
      ValidBits;                                // offset: 0x10 ordinal: 0x5
  ULONG Length;                                 // offset: 0x14 ordinal: 0x6
  union _WHEA_TIMESTAMP Timestamp;              // offset: 0x18 ordinal: 0x7
  struct _GUID PlatformId;                      // offset: 0x20 ordinal: 0x8
  struct _GUID PartitionId;                     // offset: 0x30 ordinal: 0x9
  struct _GUID CreatorId;                       // offset: 0x40 ordinal: 0xa
  struct _GUID NotifyType;                      // offset: 0x50 ordinal: 0xb
  ULONGLONG RecordId;                           // offset: 0x60 ordinal: 0xc
  union _WHEA_ERROR_RECORD_HEADER_FLAGS Flags;  // offset: 0x68 ordinal: 0xd
  union _WHEA_PERSISTENCE_INFO PersistenceInfo; // offset: 0x6c ordinal: 0xe
  UCHAR Reserved[12];                           // offset: 0x74 ordinal: 0xf
} _WHEA_ERROR_RECORD_HEADER;

// 0xc8 bytes (sizeof)
typedef struct _WHEA_ERROR_RECORD {
  struct _WHEA_ERROR_RECORD_HEADER Header; // offset: 0x0 ordinal: 0x0
  struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR
      SectionDescriptor[1]; // offset: 0x80 ordinal: 0x1
} _WHEA_ERROR_RECORD;

// 0xf0 bytes (sizeof)
typedef struct _WHEAP_ERROR_RECORD_WRAPPER {
  struct _LIST_ENTRY WorkEntry;                  // offset: 0x0 ordinal: 0x0
  ULONG Length;                                  // offset: 0x10 ordinal: 0x1
  ULONG ProcessorNumber;                         // offset: 0x14 ordinal: 0x2
  union _WHEAP_ERROR_RECORD_WRAPPER_FLAGS Flags; // offset: 0x18 ordinal: 0x3
  LONG InUse;                                    // offset: 0x1c ordinal: 0x4
  struct _WHEAP_ERROR_SOURCE *ErrorSource;       // offset: 0x20 ordinal: 0x5
  struct _WHEA_ERROR_RECORD ErrorRecord;         // offset: 0x28 ordinal: 0x6
} _WHEAP_ERROR_RECORD_WRAPPER;

// 0x428 bytes (sizeof)
typedef struct _WHEAP_ERROR_SOURCE {
  struct _LIST_ENTRY ListEntry;                    // offset: 0x0 ordinal: 0x0
  ULONG FailedAllocations;                         // offset: 0x10 ordinal: 0x1
  ULONG PlatformErrorSourceId;                     // offset: 0x14 ordinal: 0x2
  LONG ErrorCount;                                 // offset: 0x18 ordinal: 0x3
  ULONG RecordCount;                               // offset: 0x1c ordinal: 0x4
  ULONG RecordLength;                              // offset: 0x20 ordinal: 0x5
  ULONG PoolTag;                                   // offset: 0x24 ordinal: 0x6
  enum _WHEA_ERROR_SOURCE_TYPE Type;               // offset: 0x28 ordinal: 0x7
  struct _WHEAP_ERROR_RECORD_WRAPPER *Records;     // offset: 0x30 ordinal: 0x8
  VOID *Context;                                   // offset: 0x38 ordinal: 0x9
  ULONG SectionCount;                              // offset: 0x40 ordinal: 0xa
  ULONG SectionLength;                             // offset: 0x44 ordinal: 0xb
  union _LARGE_INTEGER TickCountAtLastError;       // offset: 0x48 ordinal: 0xc
  ULONG AccumulatedErrors;                         // offset: 0x50 ordinal: 0xd
  ULONG TotalErrors;                               // offset: 0x54 ordinal: 0xe
  UCHAR Deferred;                                  // offset: 0x58 ordinal: 0xf
  struct _WHEA_ERROR_SOURCE_DESCRIPTOR Descriptor; // offset: 0x59 ordinal: 0x10
} _WHEAP_ERROR_SOURCE;

// 0x50 bytes (sizeof)
typedef struct _WHEA_ERROR_PACKET_V2 {
  ULONG Signature;                                // offset: 0x0 ordinal: 0x0
  ULONG Version;                                  // offset: 0x4 ordinal: 0x1
  ULONG Length;                                   // offset: 0x8 ordinal: 0x2
  union _WHEA_ERROR_PACKET_FLAGS Flags;           // offset: 0xc ordinal: 0x3
  enum _WHEA_ERROR_TYPE ErrorType;                // offset: 0x10 ordinal: 0x4
  enum _WHEA_ERROR_SEVERITY ErrorSeverity;        // offset: 0x14 ordinal: 0x5
  ULONG ErrorSourceId;                            // offset: 0x18 ordinal: 0x6
  enum _WHEA_ERROR_SOURCE_TYPE ErrorSourceType;   // offset: 0x1c ordinal: 0x7
  struct _GUID NotifyType;                        // offset: 0x20 ordinal: 0x8
  ULONGLONG Context;                              // offset: 0x30 ordinal: 0x9
  enum _WHEA_ERROR_PACKET_DATA_FORMAT DataFormat; // offset: 0x38 ordinal: 0xa
  ULONG Reserved1;                                // offset: 0x3c ordinal: 0xb
  ULONG DataOffset;                               // offset: 0x40 ordinal: 0xc
  ULONG DataLength;                               // offset: 0x44 ordinal: 0xd
  ULONG PshedDataOffset;                          // offset: 0x48 ordinal: 0xe
  ULONG PshedDataLength;                          // offset: 0x4c ordinal: 0xf
} _WHEA_ERROR_PACKET_V2;

// 0x8 bytes (sizeof)
typedef struct _MM_PAGE_ACCESS_INFO {
  union {
    union _MM_PAGE_ACCESS_INFO_FLAGS Flags; // offset: 0x0 ordinal: 0x0
    ULONGLONG FileOffset;                   // offset: 0x0 ordinal: 0x1
    VOID *VirtualAddress;                   // offset: 0x0 ordinal: 0x2
    VOID *PointerProtoPte;                  // offset: 0x0 ordinal: 0x3
  };
} _MM_PAGE_ACCESS_INFO;

// 0x10 bytes (sizeof)
typedef struct _EVENT_HEADER_EXTENDED_DATA_ITEM {
  USHORT Reserved1;      // offset: 0x0 ordinal: 0x0
  USHORT ExtType;        // offset: 0x2 ordinal: 0x1
  USHORT Linkage : 1;    // offset: 0x4 ordinal: 0x2
  USHORT Reserved2 : 15; // offset: 0x4 ordinal: 0x3
  USHORT DataSize;       // offset: 0x6 ordinal: 0x4
  ULONGLONG DataPtr;     // offset: 0x8 ordinal: 0x5
} _EVENT_HEADER_EXTENDED_DATA_ITEM;

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

// 0x50 bytes (sizeof)
typedef struct _EVENT_HEADER {
  USHORT Size;                              // offset: 0x0 ordinal: 0x0
  USHORT HeaderType;                        // offset: 0x2 ordinal: 0x1
  USHORT Flags;                             // offset: 0x4 ordinal: 0x2
  USHORT EventProperty;                     // offset: 0x6 ordinal: 0x3
  ULONG ThreadId;                           // offset: 0x8 ordinal: 0x4
  ULONG ProcessId;                          // offset: 0xc ordinal: 0x5
  union _LARGE_INTEGER TimeStamp;           // offset: 0x10 ordinal: 0x6
  struct _GUID ProviderId;                  // offset: 0x18 ordinal: 0x7
  struct _EVENT_DESCRIPTOR EventDescriptor; // offset: 0x28 ordinal: 0x8
  ULONG KernelTime;                         // offset: 0x38 ordinal: 0x9
  ULONG UserTime;                           // offset: 0x3c ordinal: 0xa
  ULONGLONG ProcessorTime;                  // offset: 0x38 ordinal: 0xb
  struct _GUID ActivityId;                  // offset: 0x40 ordinal: 0xc
} _EVENT_HEADER;

// 0x70 bytes (sizeof)
typedef struct _EVENT_RECORD {
  struct _EVENT_HEADER EventHeader;         // offset: 0x0 ordinal: 0x0
  struct _ETW_BUFFER_CONTEXT BufferContext; // offset: 0x50 ordinal: 0x1
  USHORT ExtendedDataCount;                 // offset: 0x54 ordinal: 0x2
  USHORT UserDataLength;                    // offset: 0x56 ordinal: 0x3
  struct _EVENT_HEADER_EXTENDED_DATA_ITEM
      *ExtendedData; // offset: 0x58 ordinal: 0x4
  VOID *UserData;    // offset: 0x60 ordinal: 0x5
  VOID *UserContext; // offset: 0x68 ordinal: 0x6
} _EVENT_RECORD;

// 0x10 bytes (sizeof)
typedef struct _EVENT_DATA_DESCRIPTOR {
  ULONGLONG Ptr; // offset: 0x0 ordinal: 0x0
  ULONG Size;    // offset: 0x8 ordinal: 0x1
  union {
    ULONG Reserved; // offset: 0xc ordinal: 0x2
    UCHAR Type;     // offset: 0xc ordinal: 0x3
  };
  UCHAR Reserved1;  // offset: 0xd ordinal: 0x4
  USHORT Reserved2; // offset: 0xe ordinal: 0x5
} _EVENT_DATA_DESCRIPTOR;

// 0x8 bytes (sizeof)
typedef struct _EX_FAST_REF {
  union {
    VOID *Object;         // offset: 0x0 ordinal: 0x0
    ULONGLONG RefCnt : 4; // offset: 0x0 ordinal: 0x1
  };
  ULONGLONG Value; // offset: 0x0 ordinal: 0x2
} _EX_FAST_REF;

// 0x18 bytes (sizeof)
typedef struct _MMPFNLIST_SHORT {
  ULONGLONG Total; // offset: 0x0 ordinal: 0x0
  ULONGLONG Flink; // offset: 0x8 ordinal: 0x1
  ULONGLONG Blink; // offset: 0x10 ordinal: 0x2
} _MMPFNLIST_SHORT;

// 0x8 bytes (sizeof)
typedef struct _MI_DECAY_TIMER_LINKAGE {
  ULONGLONG Spare0 : 1;            // offset: 0x0 ordinal: 0x0
  ULONGLONG PreviousDecayPfn : 31; // offset: 0x0 ordinal: 0x1
  ULONGLONG Spare1 : 1;            // offset: 0x0 ordinal: 0x2
  ULONGLONG NextDecayPfn : 31;     // offset: 0x0 ordinal: 0x3
} _MI_DECAY_TIMER_LINKAGE;

// 0x10 bytes (sizeof)
typedef struct _PHYSICAL_MEMORY_RUN {
  ULONGLONG BasePage;  // offset: 0x0 ordinal: 0x0
  ULONGLONG PageCount; // offset: 0x8 ordinal: 0x1
} _PHYSICAL_MEMORY_RUN;

// 0x8 bytes (sizeof)
typedef union __anon_991 {
  ULONGLONG Long;                    // offset: 0x0 ordinal: 0x0
  struct _MI_DECAY_TIMER_LINKAGE e1; // offset: 0x0 ordinal: 0x1
} __anon_991;

// 0x8 bytes (sizeof)
typedef struct _MI_DECAY_TIMER_LINK {
  union __anon_991 u1; // offset: 0x0 ordinal: 0x0
} _MI_DECAY_TIMER_LINK;

// 0x20 bytes (sizeof)
typedef struct _PHYSICAL_MEMORY_DESCRIPTOR {
  ULONG NumberOfRuns;                 // offset: 0x0 ordinal: 0x0
  ULONGLONG NumberOfPages;            // offset: 0x8 ordinal: 0x1
  struct _PHYSICAL_MEMORY_RUN Run[1]; // offset: 0x10 ordinal: 0x2
} _PHYSICAL_MEMORY_DESCRIPTOR;

// 0x28 bytes (sizeof)
typedef struct _MI_PAGE_COMBINE_STATISTICS {
  ULONGLONG PagesScannedActive;         // offset: 0x0 ordinal: 0x0
  ULONGLONG PagesScannedStandby;        // offset: 0x8 ordinal: 0x1
  ULONGLONG PagesCombined;              // offset: 0x10 ordinal: 0x2
  ULONG CombineScanCount;               // offset: 0x18 ordinal: 0x3
  LONG CombinedBlocksInUse;             // offset: 0x1c ordinal: 0x4
  LONG SumCombinedBlocksReferenceCount; // offset: 0x20 ordinal: 0x5
} _MI_PAGE_COMBINE_STATISTICS;

// 0x28 bytes (sizeof)
typedef struct _MMPFNLIST {
  ULONGLONG Total;        // offset: 0x0 ordinal: 0x0
  enum _MMLISTS ListName; // offset: 0x8 ordinal: 0x1
  ULONGLONG Flink;        // offset: 0x10 ordinal: 0x2
  ULONGLONG Blink;        // offset: 0x18 ordinal: 0x3
  ULONGLONG Lock;         // offset: 0x20 ordinal: 0x4
} _MMPFNLIST;

// 0x40 bytes (sizeof)
typedef struct _MI_MODWRITE_DATA {
  LONGLONG PagesLoad;                    // offset: 0x0 ordinal: 0x0
  ULONGLONG PagesAverage;                // offset: 0x8 ordinal: 0x1
  ULONGLONG AverageAvailablePages;       // offset: 0x10 ordinal: 0x2
  ULONGLONG PagesWritten;                // offset: 0x18 ordinal: 0x3
  ULONG WritesIssued;                    // offset: 0x20 ordinal: 0x4
  ULONG IgnoredReservationsCount;        // offset: 0x24 ordinal: 0x5
  ULONG FreedReservationsCount;          // offset: 0x28 ordinal: 0x6
  ULONG WriteBurstCount;                 // offset: 0x2c ordinal: 0x7
  ULONGLONG IgnoreReservationsStartTime; // offset: 0x30 ordinal: 0x8
  union _MI_RESERVATION_CLUSTER_INFO
      ReservationClusterInfo;    // offset: 0x38 ordinal: 0x9
  USHORT IgnoreReservations : 1; // offset: 0x3c ordinal: 0xa
  USHORT Spare : 15;             // offset: 0x3c ordinal: 0xb
  USHORT Spare1;                 // offset: 0x3e ordinal: 0xc
} _MI_MODWRITE_DATA;

// 0x188 bytes (sizeof)
typedef struct _MI_PAGE_COMBINING_SUPPORT {
  struct _MI_PARTITION *Partition;                 // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY ArbitraryPfnMapList;          // offset: 0x8 ordinal: 0x1
  struct _MI_COMBINE_WORKITEM FreeCombinePoolItem; // offset: 0x18 ordinal: 0x2
  ULONG CombiningThreadCount;                      // offset: 0x40 ordinal: 0x3
  struct _LIST_ENTRY CombinePageFreeList;          // offset: 0x48 ordinal: 0x4
  ULONGLONG CombineFreeListLock;                   // offset: 0x58 ordinal: 0x5
  struct _MI_COMBINE_PAGE_LISTHEAD
      CombinePageListHeads[16]; // offset: 0x60 ordinal: 0x6
  struct _MI_PAGE_COMBINE_STATISTICS
      PageCombineStats; // offset: 0x160 ordinal: 0x7
} _MI_PAGE_COMBINING_SUPPORT;

// 0x1a0 bytes (sizeof)
typedef struct _MI_COMBINE_STATE {
  LONG ActiveSpinLock;                              // offset: 0x0 ordinal: 0x0
  ULONG CombiningThreadCount;                       // offset: 0x4 ordinal: 0x1
  struct _RTL_AVL_TREE ActiveThreadTree;            // offset: 0x8 ordinal: 0x2
  ULONGLONG ZeroPageHashValue;                      // offset: 0x10 ordinal: 0x3
  struct _MI_PAGE_COMBINING_SUPPORT CrossPartition; // offset: 0x18 ordinal: 0x4
} _MI_COMBINE_STATE;

// 0x38 bytes (sizeof)
typedef struct _MI_PARTITION_COMMIT {
  ULONGLONG PeakCommitment;          // offset: 0x0 ordinal: 0x0
  ULONGLONG TotalCommitLimitMaximum; // offset: 0x8 ordinal: 0x1
  LONG Popups[2];                    // offset: 0x10 ordinal: 0x2
  ULONGLONG LowCommitThreshold;      // offset: 0x18 ordinal: 0x3
  ULONGLONG HighCommitThreshold;     // offset: 0x20 ordinal: 0x4
  ULONGLONG EventLock;               // offset: 0x28 ordinal: 0x5
  ULONGLONG SystemCommitReserve;     // offset: 0x30 ordinal: 0x6
} _MI_PARTITION_COMMIT;

// 0x40 bytes (sizeof)
typedef struct _SECTION_IMAGE_INFORMATION {
  VOID *TransferAddress;              // offset: 0x0 ordinal: 0x0
  ULONG ZeroBits;                     // offset: 0x8 ordinal: 0x1
  ULONGLONG MaximumStackSize;         // offset: 0x10 ordinal: 0x2
  ULONGLONG CommittedStackSize;       // offset: 0x18 ordinal: 0x3
  ULONG SubSystemType;                // offset: 0x20 ordinal: 0x4
  USHORT SubSystemMinorVersion;       // offset: 0x24 ordinal: 0x5
  USHORT SubSystemMajorVersion;       // offset: 0x26 ordinal: 0x6
  ULONG SubSystemVersion;             // offset: 0x24 ordinal: 0x7
  USHORT MajorOperatingSystemVersion; // offset: 0x28 ordinal: 0x8
  USHORT MinorOperatingSystemVersion; // offset: 0x2a ordinal: 0x9
  ULONG OperatingSystemVersion;       // offset: 0x28 ordinal: 0xa
  USHORT ImageCharacteristics;        // offset: 0x2c ordinal: 0xb
  USHORT DllCharacteristics;          // offset: 0x2e ordinal: 0xc
  USHORT Machine;                     // offset: 0x30 ordinal: 0xd
  UCHAR ImageContainsCode;            // offset: 0x32 ordinal: 0xe
  union {
    UCHAR ImageFlags;             // offset: 0x33 ordinal: 0xf
    UCHAR ComPlusNativeReady : 1; // offset: 0x33 ordinal: 0x10
  };
  UCHAR ComPlusILOnly : 1;             // offset: 0x33 ordinal: 0x11
  UCHAR ImageDynamicallyRelocated : 1; // offset: 0x33 ordinal: 0x12
  UCHAR ImageMappedFlat : 1;           // offset: 0x33 ordinal: 0x13
  UCHAR BaseBelow4gb : 1;              // offset: 0x33 ordinal: 0x14
  UCHAR ComPlusPrefer32bit : 1;        // offset: 0x33 ordinal: 0x15
  UCHAR Reserved : 2;                  // offset: 0x33 ordinal: 0x16
  ULONG LoaderFlags;                   // offset: 0x34 ordinal: 0x17
  ULONG ImageFileSize;                 // offset: 0x38 ordinal: 0x18
  ULONG CheckSum;                      // offset: 0x3c ordinal: 0x19
} _SECTION_IMAGE_INFORMATION;

// 0x48 bytes (sizeof)
typedef struct _MI_SECTION_IMAGE_INFORMATION {
  struct _SECTION_IMAGE_INFORMATION
      ExportedImageInformation; // offset: 0x0 ordinal: 0x0
  struct _MI_EXTRA_IMAGE_INFORMATION
      InternalImageInformation; // offset: 0x40 ordinal: 0x1
} _MI_SECTION_IMAGE_INFORMATION;

// 0x8 bytes (sizeof)
typedef union __anon_904 {
  struct _MI_SECTION_IMAGE_INFORMATION
      *ImageInformation; // offset: 0x0 ordinal: 0x0
  VOID *FirstMappedVa;   // offset: 0x0 ordinal: 0x1
} __anon_904;

// 0x8 bytes (sizeof)
typedef struct _IMAGE_SECURITY_CONTEXT {
  union {
    VOID *PageHashes;                   // offset: 0x0 ordinal: 0x0
    ULONGLONG Value;                    // offset: 0x0 ordinal: 0x1
    ULONGLONG SecurityBeingCreated : 2; // offset: 0x0 ordinal: 0x2
  };
  ULONGLONG SecurityMandatory : 1; // offset: 0x0 ordinal: 0x3
  ULONGLONG PageHashPointer : 61;  // offset: 0x0 ordinal: 0x4
} _IMAGE_SECURITY_CONTEXT;

// 0x18 bytes (sizeof)
typedef struct _MI_IMAGE_SECURITY_REFERENCE {
  VOID *DynamicRelocations;                       // offset: 0x0 ordinal: 0x0
  struct _IMAGE_SECURITY_CONTEXT SecurityContext; // offset: 0x8 ordinal: 0x1
  ULONGLONG StrongImageReference;                 // offset: 0x10 ordinal: 0x2
} _MI_IMAGE_SECURITY_REFERENCE;

// 0x10 bytes (sizeof)
typedef struct __anon_896 {
  union {
    ULONG NumberOfSystemCacheViews; // offset: 0x0 ordinal: 0x0
    ULONG ImageRelocationStartBit;  // offset: 0x0 ordinal: 0x1
  };
  union {
    LONG WritableUserReferences;         // offset: 0x4 ordinal: 0x2
    ULONG ImageRelocationSizeIn64k : 16; // offset: 0x4 ordinal: 0x3
  };
  ULONG Unused : 9;      // offset: 0x4 ordinal: 0x4
  ULONG SystemImage : 1; // offset: 0x4 ordinal: 0x5
  ULONG StrongCode : 2;  // offset: 0x4 ordinal: 0x6
  ULONG CantMove : 1;    // offset: 0x4 ordinal: 0x7
  ULONG BitMap : 2;      // offset: 0x4 ordinal: 0x8
  ULONG ImageActive : 1; // offset: 0x4 ordinal: 0x9
  union {
    ULONG FlushInProgressCount; // offset: 0x8 ordinal: 0xa
    ULONG NumberOfSubsections;  // offset: 0x8 ordinal: 0xb
    struct _MI_IMAGE_SECURITY_REFERENCE
        *SeImageStub; // offset: 0x8 ordinal: 0xc
  };
} __anon_896;

// 0x10 bytes (sizeof)
typedef union __anon_883 {
  struct __anon_896 e2; // offset: 0x0 ordinal: 0x0
} __anon_883;

// 0x8 bytes (sizeof)
typedef union __anon_910 {
  ULONGLONG PteFrame : 36;    // offset: 0x0 ordinal: 0x0
  ULONGLONG Channel : 2;      // offset: 0x0 ordinal: 0x1
  ULONGLONG Unused1 : 1;      // offset: 0x0 ordinal: 0x2
  ULONGLONG Unused2 : 1;      // offset: 0x0 ordinal: 0x3
  ULONGLONG Partition : 10;   // offset: 0x0 ordinal: 0x4
  ULONGLONG Spare : 2;        // offset: 0x0 ordinal: 0x5
  ULONGLONG FileOnly : 1;     // offset: 0x0 ordinal: 0x6
  ULONGLONG PfnExists : 1;    // offset: 0x0 ordinal: 0x7
  ULONGLONG PageIdentity : 3; // offset: 0x0 ordinal: 0x8
  ULONGLONG PrototypePte : 1; // offset: 0x0 ordinal: 0x9
  ULONGLONG PageColor : 6;    // offset: 0x0 ordinal: 0xa
  ULONGLONG EntireField;      // offset: 0x0 ordinal: 0xb
} __anon_910;

// 0x8 bytes (sizeof)
typedef struct _MIPFNBLINK {
  ULONGLONG Blink : 36;                  // offset: 0x0 ordinal: 0x0
  ULONGLONG NodeBlinkHigh : 20;          // offset: 0x0 ordinal: 0x1
  ULONGLONG TbFlushStamp : 4;            // offset: 0x0 ordinal: 0x2
  ULONGLONG Unused : 2;                  // offset: 0x0 ordinal: 0x3
  ULONGLONG PageBlinkDeleteBit : 1;      // offset: 0x0 ordinal: 0x4
  ULONGLONG PageBlinkLockBit : 1;        // offset: 0x0 ordinal: 0x5
  ULONGLONG ShareCount : 62;             // offset: 0x0 ordinal: 0x6
  ULONGLONG PageShareCountDeleteBit : 1; // offset: 0x0 ordinal: 0x7
  ULONGLONG PageShareCountLockBit : 1;   // offset: 0x0 ordinal: 0x8
  union {
    ULONGLONG EntireField;      // offset: 0x0 ordinal: 0x9
    LONGLONG Lock;              // offset: 0x0 ordinal: 0xa
    ULONGLONG LockNotUsed : 62; // offset: 0x0 ordinal: 0xb
  };
  ULONGLONG DeleteBit : 1; // offset: 0x0 ordinal: 0xc
  ULONGLONG LockBit : 1;   // offset: 0x0 ordinal: 0xd
} _MIPFNBLINK;

// 0x8 bytes (sizeof)
typedef union __anon_907 {
  ULONGLONG Flink : 36;                   // offset: 0x0 ordinal: 0x0
  ULONGLONG NodeFlinkHigh : 28;           // offset: 0x0 ordinal: 0x1
  ULONGLONG WsIndex;                      // offset: 0x0 ordinal: 0x2
  struct _KEVENT *Event;                  // offset: 0x0 ordinal: 0x3
  VOID *Next;                             // offset: 0x0 ordinal: 0x4
  VOID *VolatileNext;                     // offset: 0x0 ordinal: 0x5
  struct _KTHREAD *KernelStackOwner;      // offset: 0x0 ordinal: 0x6
  struct _SINGLE_LIST_ENTRY NextStackPfn; // offset: 0x0 ordinal: 0x7
} __anon_907;

// 0x10 bytes (sizeof)
typedef struct __anon_875 {
  USHORT Group;        // offset: 0x0 ordinal: 0x0
  USHORT MessageCount; // offset: 0x2 ordinal: 0x1
  ULONG Vector;        // offset: 0x4 ordinal: 0x2
  ULONGLONG Affinity;  // offset: 0x8 ordinal: 0x3
} __anon_875;

// 0x8 bytes (sizeof)
typedef struct _MMPTE_LIST {
  ULONGLONG Valid : 1;      // offset: 0x0 ordinal: 0x0
  ULONGLONG OneEntry : 1;   // offset: 0x0 ordinal: 0x1
  ULONGLONG filler0 : 3;    // offset: 0x0 ordinal: 0x2
  ULONGLONG Protection : 5; // offset: 0x0 ordinal: 0x3
  ULONGLONG Prototype : 1;  // offset: 0x0 ordinal: 0x4
  ULONGLONG Transition : 1; // offset: 0x0 ordinal: 0x5
  ULONGLONG filler1 : 16;   // offset: 0x0 ordinal: 0x6
  ULONGLONG NextEntry : 36; // offset: 0x0 ordinal: 0x7
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
  ULONGLONG Spare : 1;            // offset: 0x0 ordinal: 0x2
  ULONGLONG WriteThrough : 1;     // offset: 0x0 ordinal: 0x3
  ULONGLONG CacheDisable : 1;     // offset: 0x0 ordinal: 0x4
  ULONGLONG Protection : 5;       // offset: 0x0 ordinal: 0x5
  ULONGLONG Prototype : 1;        // offset: 0x0 ordinal: 0x6
  ULONGLONG Transition : 1;       // offset: 0x0 ordinal: 0x7
  ULONGLONG PageFrameNumber : 36; // offset: 0x0 ordinal: 0x8
  ULONGLONG Unused : 16;          // offset: 0x0 ordinal: 0x9
} _MMPTE_TRANSITION;

// 0x8 bytes (sizeof)
typedef struct _MMPTE_TIMESTAMP {
  ULONGLONG MustBeZero : 1;       // offset: 0x0 ordinal: 0x0
  ULONGLONG PageFileLow : 4;      // offset: 0x0 ordinal: 0x1
  ULONGLONG Protection : 5;       // offset: 0x0 ordinal: 0x2
  ULONGLONG Prototype : 1;        // offset: 0x0 ordinal: 0x3
  ULONGLONG Transition : 1;       // offset: 0x0 ordinal: 0x4
  ULONGLONG Reserved : 20;        // offset: 0x0 ordinal: 0x5
  ULONGLONG GlobalTimeStamp : 32; // offset: 0x0 ordinal: 0x6
} _MMPTE_TIMESTAMP;

// 0x8 bytes (sizeof)
typedef struct _MMPTE_SOFTWARE {
  ULONGLONG Valid : 1;                 // offset: 0x0 ordinal: 0x0
  ULONGLONG PageFileLow : 4;           // offset: 0x0 ordinal: 0x1
  ULONGLONG Protection : 5;            // offset: 0x0 ordinal: 0x2
  ULONGLONG Prototype : 1;             // offset: 0x0 ordinal: 0x3
  ULONGLONG Transition : 1;            // offset: 0x0 ordinal: 0x4
  ULONGLONG PageFileReserved : 1;      // offset: 0x0 ordinal: 0x5
  ULONGLONG PageFileAllocated : 1;     // offset: 0x0 ordinal: 0x6
  ULONGLONG UsedPageTableEntries : 10; // offset: 0x0 ordinal: 0x7
  ULONGLONG LocalPartition : 1;        // offset: 0x0 ordinal: 0x8
  ULONGLONG Unused : 7;                // offset: 0x0 ordinal: 0x9
  ULONGLONG PageFileHigh : 32;         // offset: 0x0 ordinal: 0xa
} _MMPTE_SOFTWARE;

// 0x8 bytes (sizeof)
typedef struct _MMPTE_PROTOTYPE {
  ULONGLONG Valid : 1;                // offset: 0x0 ordinal: 0x0
  ULONGLONG DemandFillProto : 1;      // offset: 0x0 ordinal: 0x1
  ULONGLONG HiberVerifyConverted : 1; // offset: 0x0 ordinal: 0x2
  ULONGLONG Unused1 : 5;              // offset: 0x0 ordinal: 0x3
  ULONGLONG ReadOnly : 1;             // offset: 0x0 ordinal: 0x4
  ULONGLONG Combined : 1;             // offset: 0x0 ordinal: 0x5
  ULONGLONG Prototype : 1;            // offset: 0x0 ordinal: 0x6
  ULONGLONG Protection : 5;           // offset: 0x0 ordinal: 0x7
  LONGLONG ProtoAddress : 48;         // offset: 0x0 ordinal: 0x8
} _MMPTE_PROTOTYPE;

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
  ULONGLONG PageFrameNumber : 36; // offset: 0x0 ordinal: 0xc
  ULONGLONG reserved1 : 4;        // offset: 0x0 ordinal: 0xd
  ULONGLONG SoftwareWsIndex : 11; // offset: 0x0 ordinal: 0xe
  ULONGLONG NoExecute : 1;        // offset: 0x0 ordinal: 0xf
} _HARDWARE_PTE;

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
  ULONGLONG Unused : 1;           // offset: 0x0 ordinal: 0xa
  ULONGLONG Write : 1;            // offset: 0x0 ordinal: 0xb
  ULONGLONG PageFrameNumber : 36; // offset: 0x0 ordinal: 0xc
  ULONGLONG reserved1 : 4;        // offset: 0x0 ordinal: 0xd
  ULONGLONG SoftwareWsIndex : 11; // offset: 0x0 ordinal: 0xe
  ULONGLONG NoExecute : 1;        // offset: 0x0 ordinal: 0xf
} _MMPTE_HARDWARE;

// 0x10 bytes (sizeof)
typedef struct __anon_850 {
  USHORT Level;       // offset: 0x0 ordinal: 0x0
  USHORT Group;       // offset: 0x2 ordinal: 0x1
  ULONG Vector;       // offset: 0x4 ordinal: 0x2
  ULONGLONG Affinity; // offset: 0x8 ordinal: 0x3
} __anon_850;

// 0x10 bytes (sizeof)
typedef struct __anon_851 {
  union {
    struct __anon_875 Raw;        // offset: 0x0 ordinal: 0x0
    struct __anon_850 Translated; // offset: 0x0 ordinal: 0x1
  };
} __anon_851;

// 0x10 bytes (sizeof)
typedef union __anon_837 {
  struct __anon_849 Generic;            // offset: 0x0 ordinal: 0x0
  struct __anon_849 Port;               // offset: 0x0 ordinal: 0x1
  struct __anon_850 Interrupt;          // offset: 0x0 ordinal: 0x2
  struct __anon_851 MessageInterrupt;   // offset: 0x0 ordinal: 0x3
  struct __anon_849 Memory;             // offset: 0x0 ordinal: 0x4
  struct __anon_852 Dma;                // offset: 0x0 ordinal: 0x5
  struct __anon_853 DmaV3;              // offset: 0x0 ordinal: 0x6
  struct __anon_830 DevicePrivate;      // offset: 0x0 ordinal: 0x7
  struct __anon_854 BusNumber;          // offset: 0x0 ordinal: 0x8
  struct __anon_855 DeviceSpecificData; // offset: 0x0 ordinal: 0x9
  struct __anon_856 Memory40;           // offset: 0x0 ordinal: 0xa
  struct __anon_857 Memory48;           // offset: 0x0 ordinal: 0xb
  struct __anon_858 Memory64;           // offset: 0x0 ordinal: 0xc
  struct __anon_836 Connection;         // offset: 0x0 ordinal: 0xd
} __anon_837;

// 0x14 bytes (sizeof)
typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR {
  UCHAR Type;             // offset: 0x0 ordinal: 0x0
  UCHAR ShareDisposition; // offset: 0x1 ordinal: 0x1
  USHORT Flags;           // offset: 0x2 ordinal: 0x2
  union __anon_837 u;     // offset: 0x4 ordinal: 0x3
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
typedef struct __anon_669 {
  struct _CM_RESOURCE_LIST *AllocatedResources; // offset: 0x0 ordinal: 0x0
  struct _CM_RESOURCE_LIST
      *AllocatedResourcesTranslated; // offset: 0x8 ordinal: 0x1
} __anon_669;

// 0x10 bytes (sizeof)
typedef struct _MMEXTEND_INFO {
  ULONGLONG CommittedSize; // offset: 0x0 ordinal: 0x0
  ULONG ReferenceCount;    // offset: 0x8 ordinal: 0x1
} _MMEXTEND_INFO;

// 0x8 bytes (sizeof)
typedef union __anon_846 {
  ULONGLONG Long;                    // offset: 0x0 ordinal: 0x0
  ULONGLONG VolatileLong;            // offset: 0x0 ordinal: 0x1
  struct _MMPTE_HARDWARE Hard;       // offset: 0x0 ordinal: 0x2
  struct _HARDWARE_PTE Flush;        // offset: 0x0 ordinal: 0x3
  struct _MMPTE_PROTOTYPE Proto;     // offset: 0x0 ordinal: 0x4
  struct _MMPTE_SOFTWARE Soft;       // offset: 0x0 ordinal: 0x5
  struct _MMPTE_TIMESTAMP TimeStamp; // offset: 0x0 ordinal: 0x6
  struct _MMPTE_TRANSITION Trans;    // offset: 0x0 ordinal: 0x7
  struct _MMPTE_SUBSECTION Subsect;  // offset: 0x0 ordinal: 0x8
  struct _MMPTE_LIST List;           // offset: 0x0 ordinal: 0x9
} __anon_846;

// 0x8 bytes (sizeof)
typedef struct _MMPTE {
  union __anon_846 u; // offset: 0x0 ordinal: 0x0
} _MMPTE;

// 0x20 bytes (sizeof)
typedef struct _MMCLONE_BLOCK {
  struct _MMPTE ProtoPte;              // offset: 0x0 ordinal: 0x0
  ULONGLONG PaddingFor16ByteAlignment; // offset: 0x8 ordinal: 0x1
  union {
    ULONGLONG CloneCommitCount;      // offset: 0x10 ordinal: 0x2
    struct _MI_CLONE_BLOCK_FLAGS u1; // offset: 0x10 ordinal: 0x3
  };
  ULONGLONG CloneRefCount; // offset: 0x18 ordinal: 0x4
} _MMCLONE_BLOCK;

// 0x18 bytes (sizeof)
typedef struct _MMCLONE_HEADER {
  ULONGLONG NumberOfPtes;              // offset: 0x0 ordinal: 0x0
  ULONGLONG NumberOfProcessReferences; // offset: 0x8 ordinal: 0x1
  struct _MMCLONE_BLOCK *ClonePtes;    // offset: 0x10 ordinal: 0x2
} _MMCLONE_HEADER;

// 0x28 bytes (sizeof)
typedef struct _MI_DRIVER_VA {
  struct _MI_DRIVER_VA *Next; // offset: 0x0 ordinal: 0x0
  struct _MMPTE *PointerPte;  // offset: 0x8 ordinal: 0x1
  struct _RTL_BITMAP BitMap;  // offset: 0x10 ordinal: 0x2
  ULONG Hint;                 // offset: 0x20 ordinal: 0x3
} _MI_DRIVER_VA;

// 0x18 bytes (sizeof)
typedef struct _MI_PTE_CHAIN_HEAD {
  struct _MMPTE Flink;    // offset: 0x0 ordinal: 0x0
  struct _MMPTE Blink;    // offset: 0x8 ordinal: 0x1
  struct _MMPTE *PteBase; // offset: 0x10 ordinal: 0x2
} _MI_PTE_CHAIN_HEAD;

// 0x50 bytes (sizeof)
typedef struct _MI_SPECIAL_POOL {
  ULONGLONG Lock;                     // offset: 0x0 ordinal: 0x0
  struct _MI_PTE_CHAIN_HEAD Paged;    // offset: 0x8 ordinal: 0x1
  struct _MI_PTE_CHAIN_HEAD NonPaged; // offset: 0x20 ordinal: 0x2
  ULONGLONG PagesInUse;               // offset: 0x38 ordinal: 0x3
  struct _RTL_BITMAP SpecialPoolPdes; // offset: 0x40 ordinal: 0x4
} _MI_SPECIAL_POOL;

// 0x118 bytes (sizeof)
typedef struct _MI_DEBUGGER_STATE {
  UCHAR TransientWrite;    // offset: 0x0 ordinal: 0x0
  UCHAR CodePageEdited;    // offset: 0x1 ordinal: 0x1
  struct _MMPTE *DebugPte; // offset: 0x8 ordinal: 0x2
  ULONG PoisonedTb;        // offset: 0x10 ordinal: 0x3
  LONG InDebugger;         // offset: 0x14 ordinal: 0x4
  VOID *Pfns[32];          // offset: 0x18 ordinal: 0x5
} _MI_DEBUGGER_STATE;

// 0x48 bytes (sizeof)
typedef struct _MI_PARTITION_ZEROING {
  struct _KEVENT PageEvent;               // offset: 0x0 ordinal: 0x0
  UCHAR ThreadActive;                     // offset: 0x18 ordinal: 0x1
  LONG ZeroFreePageSlistMinimum;          // offset: 0x1c ordinal: 0x2
  struct _MMPTE *FirstReservedZeroingPte; // offset: 0x20 ordinal: 0x3
  struct _WORK_QUEUE_ITEM
      RebalanceZeroFreeWorkItem; // offset: 0x28 ordinal: 0x4
} _MI_PARTITION_ZEROING;

// 0x18 bytes (sizeof)
typedef struct __anon_827 {
  ULONG MinimumVector;               // offset: 0x0 ordinal: 0x0
  ULONG MaximumVector;               // offset: 0x4 ordinal: 0x1
  USHORT AffinityPolicy;             // offset: 0x8 ordinal: 0x2
  USHORT Group;                      // offset: 0xa ordinal: 0x3
  enum _IRQ_PRIORITY PriorityPolicy; // offset: 0xc ordinal: 0x4
  ULONGLONG TargetedProcessors;      // offset: 0x10 ordinal: 0x5
} __anon_827;

// 0x18 bytes (sizeof)
typedef union __anon_814 {
  struct __anon_826 Port;          // offset: 0x0 ordinal: 0x0
  struct __anon_826 Memory;        // offset: 0x0 ordinal: 0x1
  struct __anon_827 Interrupt;     // offset: 0x0 ordinal: 0x2
  struct __anon_828 Dma;           // offset: 0x0 ordinal: 0x3
  struct __anon_829 DmaV3;         // offset: 0x0 ordinal: 0x4
  struct __anon_826 Generic;       // offset: 0x0 ordinal: 0x5
  struct __anon_830 DevicePrivate; // offset: 0x0 ordinal: 0x6
  struct __anon_831 BusNumber;     // offset: 0x0 ordinal: 0x7
  struct __anon_832 ConfigData;    // offset: 0x0 ordinal: 0x8
  struct __anon_833 Memory40;      // offset: 0x0 ordinal: 0x9
  struct __anon_834 Memory48;      // offset: 0x0 ordinal: 0xa
  struct __anon_835 Memory64;      // offset: 0x0 ordinal: 0xb
  struct __anon_836 Connection;    // offset: 0x0 ordinal: 0xc
} __anon_814;

// 0x20 bytes (sizeof)
typedef struct _IO_RESOURCE_DESCRIPTOR {
  UCHAR Option;           // offset: 0x0 ordinal: 0x0
  UCHAR Type;             // offset: 0x1 ordinal: 0x1
  UCHAR ShareDisposition; // offset: 0x2 ordinal: 0x2
  UCHAR Spare1;           // offset: 0x3 ordinal: 0x3
  USHORT Flags;           // offset: 0x4 ordinal: 0x4
  USHORT Spare2;          // offset: 0x6 ordinal: 0x5
  union __anon_814 u;     // offset: 0x8 ordinal: 0x6
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
typedef union __anon_2049 {
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
} __anon_2049;

// 0x20 bytes (sizeof)
typedef struct _ARBITER_PARAMETERS {
  union __anon_2049 Parameters; // offset: 0x0 ordinal: 0x0
} _ARBITER_PARAMETERS;

typedef LONG (*__anon_2033)(VOID *, enum _ARBITER_ACTION,
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

typedef LONG (*__anon_2005)(struct _IO_RESOURCE_DESCRIPTOR *);

typedef LONG (*__anon_2003)(struct _IO_RESOURCE_DESCRIPTOR *, ULONGLONG,
                            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *);

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
typedef struct __anon_660 {
  struct _IO_RESOURCE_REQUIREMENTS_LIST
      *IoResourceRequirementList; // offset: 0x0 ordinal: 0x0
} __anon_660;

// 0x8 bytes (sizeof)
typedef struct _MI_VAD_SEQUENTIAL_INFO {
  ULONGLONG Length : 12; // offset: 0x0 ordinal: 0x0
  ULONGLONG Vpn : 52;    // offset: 0x0 ordinal: 0x1
} _MI_VAD_SEQUENTIAL_INFO;

// 0x8 bytes (sizeof)
typedef union __anon_811 {
  struct _MI_VAD_SEQUENTIAL_INFO SequentialVa; // offset: 0x0 ordinal: 0x0
  struct _MMEXTEND_INFO *ExtendedInfo;         // offset: 0x0 ordinal: 0x1
} __anon_811;

typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY *(*__anon_802)(ULONGLONG, VOID *);

// 0x8 bytes (sizeof)
typedef struct _MMWSLE_FREE_ENTRY {
  ULONGLONG MustBeZero : 1;    // offset: 0x0 ordinal: 0x0
  ULONGLONG PreviousFree : 27; // offset: 0x0 ordinal: 0x1
  ULONGLONG NextFree : 36;     // offset: 0x0 ordinal: 0x2
} _MMWSLE_FREE_ENTRY;

// 0x8 bytes (sizeof)
typedef struct _MMWSLENTRY {
  ULONGLONG Valid : 1;              // offset: 0x0 ordinal: 0x0
  ULONGLONG Spare : 1;              // offset: 0x0 ordinal: 0x1
  ULONGLONG Hashed : 1;             // offset: 0x0 ordinal: 0x2
  ULONGLONG Direct : 1;             // offset: 0x0 ordinal: 0x3
  ULONGLONG Protection : 5;         // offset: 0x0 ordinal: 0x4
  ULONGLONG Age : 3;                // offset: 0x0 ordinal: 0x5
  ULONGLONG VirtualPageNumber : 36; // offset: 0x0 ordinal: 0x6
  ULONGLONG HighActiveFlink : 4;    // offset: 0x0 ordinal: 0x7
  ULONGLONG HighActiveBlink : 4;    // offset: 0x0 ordinal: 0x8
  ULONGLONG Unused : 8;             // offset: 0x0 ordinal: 0x9
} _MMWSLENTRY;

// 0x8 bytes (sizeof)
typedef struct _EXHANDLE {
  ULONG TagBits : 2; // offset: 0x0 ordinal: 0x0
  ULONG Index : 30;  // offset: 0x0 ordinal: 0x1
  union {
    VOID *GenericHandleOverlay; // offset: 0x0 ordinal: 0x2
    ULONGLONG Value;            // offset: 0x0 ordinal: 0x3
  };
} _EXHANDLE;

// 0x58 bytes (sizeof)
typedef struct _DYNAMIC_FUNCTION_TABLE {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 ordinal: 0x0
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY
      *FunctionTable;             // offset: 0x10 ordinal: 0x1
  union _LARGE_INTEGER TimeStamp; // offset: 0x18 ordinal: 0x2
  ULONGLONG MinimumAddress;       // offset: 0x20 ordinal: 0x3
  ULONGLONG MaximumAddress;       // offset: 0x28 ordinal: 0x4
  ULONGLONG BaseAddress;          // offset: 0x30 ordinal: 0x5
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *(*Callback)(
      ULONGLONG, VOID *);          // offset: 0x38 ordinal: 0x6
  VOID *Context;                   // offset: 0x40 ordinal: 0x7
  USHORT *OutOfProcessCallbackDll; // offset: 0x48 ordinal: 0x8
  enum _FUNCTION_TABLE_TYPE Type;  // offset: 0x50 ordinal: 0x9
  ULONG EntryCount;                // offset: 0x54 ordinal: 0xa
} _DYNAMIC_FUNCTION_TABLE;

// 0x18 bytes (sizeof)
typedef struct _INVERTED_FUNCTION_TABLE_ENTRY {
  union {
    struct _IMAGE_RUNTIME_FUNCTION_ENTRY
        *FunctionTable;                           // offset: 0x0 ordinal: 0x0
    struct _DYNAMIC_FUNCTION_TABLE *DynamicTable; // offset: 0x0 ordinal: 0x1
  };
  VOID *ImageBase;   // offset: 0x8 ordinal: 0x2
  ULONG SizeOfImage; // offset: 0x10 ordinal: 0x3
  ULONG SizeOfTable; // offset: 0x14 ordinal: 0x4
} _INVERTED_FUNCTION_TABLE_ENTRY;

// 0x1810 bytes (sizeof)
typedef struct _INVERTED_FUNCTION_TABLE {
  ULONG CurrentSize; // offset: 0x0 ordinal: 0x0
  ULONG MaximumSize; // offset: 0x4 ordinal: 0x1
  ULONG Epoch;       // offset: 0x8 ordinal: 0x2
  UCHAR Overflow;    // offset: 0xc ordinal: 0x3
  struct _INVERTED_FUNCTION_TABLE_ENTRY
      TableEntry[256]; // offset: 0x10 ordinal: 0x4
} _INVERTED_FUNCTION_TABLE;

// 0x8 bytes (sizeof)
typedef union __anon_775 {
  VOID *VirtualAddress;         // offset: 0x0 ordinal: 0x0
  ULONGLONG Long;               // offset: 0x0 ordinal: 0x1
  struct _MMWSLENTRY e1;        // offset: 0x0 ordinal: 0x2
  struct _MMWSLE_FREE_ENTRY e2; // offset: 0x0 ordinal: 0x3
} __anon_775;

// 0x8 bytes (sizeof)
typedef struct _MMWSLE {
  union __anon_775 u1; // offset: 0x0 ordinal: 0x0
} _MMWSLE;

// 0x10 bytes (sizeof)
typedef union _HANDLE_TABLE_ENTRY {
  LONGLONG VolatileLowValue;                      // offset: 0x0 ordinal: 0x0
  LONGLONG LowValue;                              // offset: 0x0 ordinal: 0x1
  struct _HANDLE_TABLE_ENTRY_INFO *InfoTable;     // offset: 0x0 ordinal: 0x2
  LONGLONG HighValue;                             // offset: 0x8 ordinal: 0x3
  union _HANDLE_TABLE_ENTRY *NextFreeHandleEntry; // offset: 0x8 ordinal: 0x4
  struct _EXHANDLE LeafHandleValue;               // offset: 0x8 ordinal: 0x5
  LONGLONG RefCountField;                         // offset: 0x0 ordinal: 0x6
  ULONGLONG Unlocked : 1;                         // offset: 0x0 ordinal: 0x7
  ULONGLONG RefCnt : 16;                          // offset: 0x0 ordinal: 0x8
  ULONGLONG Attributes : 3;                       // offset: 0x0 ordinal: 0x9
  ULONGLONG ObjectPointerBits : 44;               // offset: 0x0 ordinal: 0xa
  ULONG GrantedAccessBits : 25;                   // offset: 0x8 ordinal: 0xb
  ULONG NoRightsUpgrade : 1;                      // offset: 0x8 ordinal: 0xc
  ULONG Spare1 : 6;                               // offset: 0x8 ordinal: 0xd
  ULONG Spare2;                                   // offset: 0xc ordinal: 0xe
} _HANDLE_TABLE_ENTRY;

// 0x10 bytes (sizeof)
typedef struct _MI_ACTIVE_WSLE_LISTHEAD {
  ULONGLONG Flink; // offset: 0x0 ordinal: 0x0
  ULONGLONG Blink; // offset: 0x8 ordinal: 0x1
} _MI_ACTIVE_WSLE_LISTHEAD;

// 0x8 bytes (sizeof)
typedef struct _MMWSLE_HASH {
  ULONGLONG Index; // offset: 0x0 ordinal: 0x0
} _MMWSLE_HASH;

// 0x10 bytes (sizeof)
typedef struct _MMWSLE_NONDIRECT_HASH {
  VOID *Key;       // offset: 0x0 ordinal: 0x0
  ULONGLONG Index; // offset: 0x8 ordinal: 0x1
} _MMWSLE_NONDIRECT_HASH;

// 0x50 bytes (sizeof)
typedef struct _IO_MINI_COMPLETION_PACKET_USER {
  struct _LIST_ENTRY ListEntry;  // offset: 0x0 ordinal: 0x0
  ULONG PacketType;              // offset: 0x10 ordinal: 0x1
  VOID *KeyContext;              // offset: 0x18 ordinal: 0x2
  VOID *ApcContext;              // offset: 0x20 ordinal: 0x3
  LONG IoStatus;                 // offset: 0x28 ordinal: 0x4
  ULONGLONG IoStatusInformation; // offset: 0x30 ordinal: 0x5
  VOID(*MiniPacketCallback)
  (struct _IO_MINI_COMPLETION_PACKET_USER *,
   VOID *);        // offset: 0x38 ordinal: 0x6
  VOID *Context;   // offset: 0x40 ordinal: 0x7
  UCHAR Allocated; // offset: 0x48 ordinal: 0x8
} _IO_MINI_COMPLETION_PACKET_USER;

// 0x18 bytes (sizeof)
typedef struct _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY {
  struct _SINGLE_LIST_ENTRY ListEntry;            // offset: 0x0 ordinal: 0x0
  struct _IO_MINI_COMPLETION_PACKET_USER *Packet; // offset: 0x8 ordinal: 0x1
  struct _ALPC_COMPLETION_PACKET_LOOKASIDE
      *Lookaside; // offset: 0x10 ordinal: 0x2
} _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY;

// 0x50 bytes (sizeof)
typedef struct _ALPC_COMPLETION_PACKET_LOOKASIDE {
  ULONGLONG Lock;                         // offset: 0x0 ordinal: 0x0
  ULONG Size;                             // offset: 0x8 ordinal: 0x1
  ULONG ActiveCount;                      // offset: 0xc ordinal: 0x2
  ULONG PendingNullCount;                 // offset: 0x10 ordinal: 0x3
  ULONG PendingCheckCompletionListCount;  // offset: 0x14 ordinal: 0x4
  ULONG PendingDelete;                    // offset: 0x18 ordinal: 0x5
  struct _SINGLE_LIST_ENTRY FreeListHead; // offset: 0x20 ordinal: 0x6
  VOID *CompletionPort;                   // offset: 0x28 ordinal: 0x7
  VOID *CompletionKey;                    // offset: 0x30 ordinal: 0x8
  struct _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY
      Entry[1]; // offset: 0x38 ordinal: 0x9
} _ALPC_COMPLETION_PACKET_LOOKASIDE;

typedef VOID (*__anon_772)(struct _IO_MINI_COMPLETION_PACKET_USER *, VOID *);

// 0x50 bytes (sizeof)
typedef struct _EPROCESS_VALUES {
  ULONGLONG KernelTime;         // offset: 0x0 ordinal: 0x0
  ULONGLONG UserTime;           // offset: 0x8 ordinal: 0x1
  ULONGLONG CycleTime;          // offset: 0x10 ordinal: 0x2
  ULONGLONG ContextSwitches;    // offset: 0x18 ordinal: 0x3
  LONGLONG ReadOperationCount;  // offset: 0x20 ordinal: 0x4
  LONGLONG WriteOperationCount; // offset: 0x28 ordinal: 0x5
  LONGLONG OtherOperationCount; // offset: 0x30 ordinal: 0x6
  LONGLONG ReadTransferCount;   // offset: 0x38 ordinal: 0x7
  LONGLONG WriteTransferCount;  // offset: 0x40 ordinal: 0x8
  LONGLONG OtherTransferCount;  // offset: 0x48 ordinal: 0x9
} _EPROCESS_VALUES;

// 0x10 bytes (sizeof)
typedef struct _OWNER_ENTRY {
  ULONGLONG OwnerThread;       // offset: 0x0 ordinal: 0x0
  ULONG IoPriorityBoosted : 1; // offset: 0x8 ordinal: 0x1
  ULONG OwnerReferenced : 1;   // offset: 0x8 ordinal: 0x2
  ULONG OwnerCount : 30;       // offset: 0x8 ordinal: 0x3
  ULONG TableSize;             // offset: 0x8 ordinal: 0x4
} _OWNER_ENTRY;

// 0x20 bytes (sizeof)
typedef struct __anon_670 {
  ULONGLONG ProviderId; // offset: 0x0 ordinal: 0x0
  VOID *DataPath;       // offset: 0x8 ordinal: 0x1
  ULONG BufferSize;     // offset: 0x10 ordinal: 0x2
  VOID *Buffer;         // offset: 0x18 ordinal: 0x3
} __anon_670;

// 0x20 bytes (sizeof)
typedef union __anon_612 {
  struct __anon_638 Create;                     // offset: 0x0 ordinal: 0x0
  struct __anon_639 CreatePipe;                 // offset: 0x0 ordinal: 0x1
  struct __anon_640 CreateMailslot;             // offset: 0x0 ordinal: 0x2
  struct __anon_641 Read;                       // offset: 0x0 ordinal: 0x3
  struct __anon_641 Write;                      // offset: 0x0 ordinal: 0x4
  struct __anon_642 QueryDirectory;             // offset: 0x0 ordinal: 0x5
  struct __anon_643 NotifyDirectory;            // offset: 0x0 ordinal: 0x6
  struct __anon_644 QueryFile;                  // offset: 0x0 ordinal: 0x7
  struct __anon_645 SetFile;                    // offset: 0x0 ordinal: 0x8
  struct __anon_646 QueryEa;                    // offset: 0x0 ordinal: 0x9
  struct __anon_647 SetEa;                      // offset: 0x0 ordinal: 0xa
  struct __anon_648 QueryVolume;                // offset: 0x0 ordinal: 0xb
  struct __anon_648 SetVolume;                  // offset: 0x0 ordinal: 0xc
  struct __anon_649 FileSystemControl;          // offset: 0x0 ordinal: 0xd
  struct __anon_650 LockControl;                // offset: 0x0 ordinal: 0xe
  struct __anon_651 DeviceIoControl;            // offset: 0x0 ordinal: 0xf
  struct __anon_652 QuerySecurity;              // offset: 0x0 ordinal: 0x10
  struct __anon_653 SetSecurity;                // offset: 0x0 ordinal: 0x11
  struct __anon_654 MountVolume;                // offset: 0x0 ordinal: 0x12
  struct __anon_654 VerifyVolume;               // offset: 0x0 ordinal: 0x13
  struct __anon_655 Scsi;                       // offset: 0x0 ordinal: 0x14
  struct __anon_656 QueryQuota;                 // offset: 0x0 ordinal: 0x15
  struct __anon_647 SetQuota;                   // offset: 0x0 ordinal: 0x16
  struct __anon_657 QueryDeviceRelations;       // offset: 0x0 ordinal: 0x17
  struct __anon_658 QueryInterface;             // offset: 0x0 ordinal: 0x18
  struct __anon_659 DeviceCapabilities;         // offset: 0x0 ordinal: 0x19
  struct __anon_660 FilterResourceRequirements; // offset: 0x0 ordinal: 0x1a
  struct __anon_661 ReadWriteConfig;            // offset: 0x0 ordinal: 0x1b
  struct __anon_662 SetLock;                    // offset: 0x0 ordinal: 0x1c
  struct __anon_663 QueryId;                    // offset: 0x0 ordinal: 0x1d
  struct __anon_664 QueryDeviceText;            // offset: 0x0 ordinal: 0x1e
  struct __anon_665 UsageNotification;          // offset: 0x0 ordinal: 0x1f
  struct __anon_666 WaitWake;                   // offset: 0x0 ordinal: 0x20
  struct __anon_667 PowerSequence;              // offset: 0x0 ordinal: 0x21
  struct __anon_668 Power;                      // offset: 0x0 ordinal: 0x22
  struct __anon_669 StartDevice;                // offset: 0x0 ordinal: 0x23
  struct __anon_670 WMI;                        // offset: 0x0 ordinal: 0x24
  struct __anon_671 Others;                     // offset: 0x0 ordinal: 0x25
} __anon_612;

// 0x28 bytes (sizeof)
typedef struct _PROCESS_DISK_COUNTERS {
  ULONGLONG BytesRead;           // offset: 0x0 ordinal: 0x0
  ULONGLONG BytesWritten;        // offset: 0x8 ordinal: 0x1
  ULONGLONG ReadOperationCount;  // offset: 0x10 ordinal: 0x2
  ULONGLONG WriteOperationCount; // offset: 0x18 ordinal: 0x3
  ULONGLONG FlushOperationCount; // offset: 0x20 ordinal: 0x4
} _PROCESS_DISK_COUNTERS;

// 0x68 bytes (sizeof)
typedef struct _ERESOURCE {
  struct _LIST_ENTRY SystemResourcesList; // offset: 0x0 ordinal: 0x0
  struct _OWNER_ENTRY *OwnerTable;        // offset: 0x10 ordinal: 0x1
  SHORT ActiveCount;                      // offset: 0x18 ordinal: 0x2
  union {
    USHORT Flag;            // offset: 0x1a ordinal: 0x3
    UCHAR ReservedLowFlags; // offset: 0x1a ordinal: 0x4
  };
  UCHAR WaiterPriority;              // offset: 0x1b ordinal: 0x5
  struct _KWAIT_CHAIN SharedWaiters; // offset: 0x20 ordinal: 0x6
  struct _KEVENT *ExclusiveWaiters;  // offset: 0x28 ordinal: 0x7
  struct _OWNER_ENTRY OwnerEntry;    // offset: 0x30 ordinal: 0x8
  ULONG ActiveEntries;               // offset: 0x40 ordinal: 0x9
  ULONG ContentionCount;             // offset: 0x44 ordinal: 0xa
  ULONG NumberOfSharedWaiters;       // offset: 0x48 ordinal: 0xb
  ULONG NumberOfExclusiveWaiters;    // offset: 0x4c ordinal: 0xc
  VOID *Reserved2;                   // offset: 0x50 ordinal: 0xd
  union {
    VOID *Address;                   // offset: 0x58 ordinal: 0xe
    ULONGLONG CreatorBackTraceIndex; // offset: 0x58 ordinal: 0xf
  };
  ULONGLONG SpinLock; // offset: 0x60 ordinal: 0x10
} _ERESOURCE;

// 0x8 bytes (sizeof)
typedef struct __anon_768 {
  struct _ERESOURCE *ResourceToRelease; // offset: 0x0 ordinal: 0x0
} __anon_768;

// 0x10 bytes (sizeof)
typedef struct __anon_767 {
  union _LARGE_INTEGER *EndingOffset;    // offset: 0x0 ordinal: 0x0
  struct _ERESOURCE **ResourceToRelease; // offset: 0x8 ordinal: 0x1
} __anon_767;

// 0x28 bytes (sizeof)
typedef union _FS_FILTER_PARAMETERS {
  struct __anon_767 AcquireForModifiedPageWriter; // offset: 0x0 ordinal: 0x0
  struct __anon_768 ReleaseForModifiedPageWriter; // offset: 0x0 ordinal: 0x1
  struct __anon_769
      AcquireForSectionSynchronization;     // offset: 0x0 ordinal: 0x2
  struct __anon_770 NotifyStreamFileObject; // offset: 0x0 ordinal: 0x3
  struct __anon_771 Others;                 // offset: 0x0 ordinal: 0x4
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

typedef VOID (*__anon_619)(struct _FS_FILTER_CALLBACK_DATA *, LONG, VOID *);

typedef LONG (*__anon_618)(struct _FS_FILTER_CALLBACK_DATA *, VOID **);

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

typedef LONG (*__anon_574)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                           struct _ERESOURCE **, struct _DEVICE_OBJECT *);

typedef LONG (*__anon_580)(struct _FILE_OBJECT *, struct _ERESOURCE *,
                           struct _DEVICE_OBJECT *);

// 0xf8 bytes (sizeof)
typedef struct _MMSUPPORT {
  LONG WorkingSetLock;                         // offset: 0x0 ordinal: 0x0
  struct _KGATE *ExitOutswapGate;              // offset: 0x8 ordinal: 0x1
  VOID *AccessLog;                             // offset: 0x10 ordinal: 0x2
  struct _LIST_ENTRY WorkingSetExpansionLinks; // offset: 0x18 ordinal: 0x3
  ULONGLONG AgeDistribution[7];                // offset: 0x28 ordinal: 0x4
  ULONGLONG MinimumWorkingSetSize;             // offset: 0x60 ordinal: 0x5
  ULONGLONG WorkingSetLeafSize;                // offset: 0x68 ordinal: 0x6
  ULONGLONG WorkingSetLeafPrivateSize;         // offset: 0x70 ordinal: 0x7
  ULONGLONG WorkingSetSize;                    // offset: 0x78 ordinal: 0x8
  ULONGLONG WorkingSetPrivateSize;             // offset: 0x80 ordinal: 0x9
  ULONGLONG MaximumWorkingSetSize;             // offset: 0x88 ordinal: 0xa
  ULONGLONG ChargedWslePages;                  // offset: 0x90 ordinal: 0xb
  ULONGLONG ActualWslePages;                   // offset: 0x98 ordinal: 0xc
  ULONGLONG WorkingSetSizeOverhead;            // offset: 0xa0 ordinal: 0xd
  ULONGLONG PeakWorkingSetSize;                // offset: 0xa8 ordinal: 0xe
  ULONG HardFaultCount;                        // offset: 0xb0 ordinal: 0xf
  USHORT PartitionId;                          // offset: 0xb4 ordinal: 0x10
  USHORT Pad0;                                 // offset: 0xb6 ordinal: 0x11
  struct _MMWSL *VmWorkingSetList;             // offset: 0xb8 ordinal: 0x12
  USHORT NextPageColor;                        // offset: 0xc0 ordinal: 0x13
  USHORT LastTrimStamp;                        // offset: 0xc2 ordinal: 0x14
  ULONG PageFaultCount;                        // offset: 0xc4 ordinal: 0x15
  ULONGLONG TrimmedPageCount;                  // offset: 0xc8 ordinal: 0x16
  ULONGLONG ForceTrimPages;                    // offset: 0xd0 ordinal: 0x17
  struct _MMSUPPORT_FLAGS Flags;               // offset: 0xd8 ordinal: 0x18
  ULONGLONG ReleasedCommitDebt;                // offset: 0xe0 ordinal: 0x19
  VOID *WsSwapSupport;                         // offset: 0xe8 ordinal: 0x1a
  VOID *CommitReAcquireFailSupport;            // offset: 0xf0 ordinal: 0x1b
} _MMSUPPORT;

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

// 0x18 bytes (sizeof)
typedef struct _PS_PROPERTY_SET {
  struct _LIST_ENTRY ListHead; // offset: 0x0 ordinal: 0x0
  ULONGLONG Lock;              // offset: 0x10 ordinal: 0x1
} _PS_PROPERTY_SET;

// 0x8 bytes (sizeof)
typedef struct _EX_RUNDOWN_REF {
  union {
    ULONGLONG Count; // offset: 0x0 ordinal: 0x0
    VOID *Ptr;       // offset: 0x0 ordinal: 0x1
  };
} _EX_RUNDOWN_REF;

// 0x28 bytes (sizeof)
typedef struct _HMAP_ENTRY {
  ULONGLONG BlockOffset;                      // offset: 0x0 ordinal: 0x0
  ULONGLONG PermanentBinAddress;              // offset: 0x8 ordinal: 0x1
  ULONGLONG TemporaryBinAddress;              // offset: 0x10 ordinal: 0x2
  struct _EX_RUNDOWN_REF TemporaryBinRundown; // offset: 0x18 ordinal: 0x3
  ULONG MemAlloc;                             // offset: 0x20 ordinal: 0x4
} _HMAP_ENTRY;

// 0x5000 bytes (sizeof)
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
  struct _LIST_ENTRY FreeBins;          // offset: 0x260 ordinal: 0x5
  ULONG FreeSummary;                    // offset: 0x270 ordinal: 0x6
} _DUAL;

// 0x8 bytes (sizeof)
typedef union _PS_CLIENT_SECURITY_CONTEXT {
  ULONGLONG ImpersonationData;      // offset: 0x0 ordinal: 0x0
  VOID *ImpersonationToken;         // offset: 0x0 ordinal: 0x1
  ULONGLONG ImpersonationLevel : 2; // offset: 0x0 ordinal: 0x2
  ULONGLONG EffectiveOnly : 1;      // offset: 0x0 ordinal: 0x3
} _PS_CLIENT_SECURITY_CONTEXT;

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

// 0x28 bytes (sizeof)
typedef struct _RTL_ATOM_TABLE {
  ULONG Signature;                          // offset: 0x0 ordinal: 0x0
  LONG ReferenceCount;                      // offset: 0x4 ordinal: 0x1
  struct _EX_PUSH_LOCK PushLock;            // offset: 0x8 ordinal: 0x2
  struct _HANDLE_TABLE *ExHandleTable;      // offset: 0x10 ordinal: 0x3
  ULONG Flags;                              // offset: 0x18 ordinal: 0x4
  ULONG NumberOfBuckets;                    // offset: 0x1c ordinal: 0x5
  struct _RTL_ATOM_TABLE_ENTRY *Buckets[1]; // offset: 0x20 ordinal: 0x6
} _RTL_ATOM_TABLE;

// 0xb0 bytes (sizeof)
typedef struct _MI_SYSTEM_IMAGE_STATE {
  LONG FixupLock;                              // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY FixupList;                // offset: 0x8 ordinal: 0x1
  struct _KMUTANT LoadLock;                    // offset: 0x18 ordinal: 0x2
  UCHAR FirstLoadEver;                         // offset: 0x50 ordinal: 0x3
  UCHAR LargePageAll;                          // offset: 0x51 ordinal: 0x4
  ULONGLONG LastPage;                          // offset: 0x58 ordinal: 0x5
  struct _LIST_ENTRY LargePageList;            // offset: 0x60 ordinal: 0x6
  struct _KLDR_DATA_TABLE_ENTRY *BeingDeleted; // offset: 0x70 ordinal: 0x7
  struct _EX_PUSH_LOCK MappingRangesPushLock;  // offset: 0x78 ordinal: 0x8
  struct _MI_DRIVER_VA *MappingRanges[2];      // offset: 0x80 ordinal: 0x9
  ULONGLONG PageCount;                         // offset: 0x90 ordinal: 0xa
  struct _MM_SYSTEM_PAGE_COUNTS PageCounts;    // offset: 0x98 ordinal: 0xb
  struct _EX_PUSH_LOCK CollidedLock;           // offset: 0xa8 ordinal: 0xc
} _MI_SYSTEM_IMAGE_STATE;

// 0x30 bytes (sizeof)
typedef struct _MAPPED_FILE_SEGMENT {
  struct _CONTROL_AREA *ControlArea;  // offset: 0x0 ordinal: 0x0
  ULONG TotalNumberOfPtes;            // offset: 0x8 ordinal: 0x1
  struct _SEGMENT_FLAGS SegmentFlags; // offset: 0xc ordinal: 0x2
  ULONGLONG NumberOfCommittedPages;   // offset: 0x10 ordinal: 0x3
  ULONGLONG SizeOfSegment;            // offset: 0x18 ordinal: 0x4
  union {
    struct _MMEXTEND_INFO *ExtendInfo; // offset: 0x20 ordinal: 0x5
    VOID *BasedAddress;                // offset: 0x20 ordinal: 0x6
  };
  struct _EX_PUSH_LOCK SegmentLock; // offset: 0x28 ordinal: 0x7
} _MAPPED_FILE_SEGMENT;

// 0x28 bytes (sizeof)
typedef struct _SEP_LOWBOX_NUMBER_MAPPING {
  struct _EX_PUSH_LOCK Lock;                 // offset: 0x0 ordinal: 0x0
  struct _RTL_BITMAP Bitmap;                 // offset: 0x8 ordinal: 0x1
  struct _RTL_DYNAMIC_HASH_TABLE *HashTable; // offset: 0x18 ordinal: 0x2
  UCHAR Active;                              // offset: 0x20 ordinal: 0x3
} _SEP_LOWBOX_NUMBER_MAPPING;

// 0x40 bytes (sizeof)
typedef struct _SESSION_LOWBOX_MAP {
  struct _LIST_ENTRY ListEntry;                // offset: 0x0 ordinal: 0x0
  ULONG SessionId;                             // offset: 0x10 ordinal: 0x1
  struct _SEP_LOWBOX_NUMBER_MAPPING LowboxMap; // offset: 0x18 ordinal: 0x2
} _SESSION_LOWBOX_MAP;

// 0x18 bytes (sizeof)
typedef struct _CM_KEY_HASH_TABLE_ENTRY {
  struct _EX_PUSH_LOCK Lock;  // offset: 0x0 ordinal: 0x0
  struct _KTHREAD *Owner;     // offset: 0x8 ordinal: 0x1
  struct _CM_KEY_HASH *Entry; // offset: 0x10 ordinal: 0x2
} _CM_KEY_HASH_TABLE_ENTRY;

// 0x80 bytes (sizeof)
typedef struct _OBP_SILODRIVERSTATE {
  struct _DEVICE_MAP *SystemDeviceMap; // offset: 0x0 ordinal: 0x0
  struct _OBP_SYSTEM_DOS_DEVICE_STATE
      SystemDosDeviceState;           // offset: 0x8 ordinal: 0x1
  struct _EX_PUSH_LOCK DeviceMapLock; // offset: 0x78 ordinal: 0x2
} _OBP_SILODRIVERSTATE;

// 0x158 bytes (sizeof)
typedef struct _OBJECT_DIRECTORY {
  struct _OBJECT_DIRECTORY_ENTRY *HashBuckets[37]; // offset: 0x0 ordinal: 0x0
  struct _EX_PUSH_LOCK Lock;                       // offset: 0x128 ordinal: 0x1
  struct _DEVICE_MAP *DeviceMap;                   // offset: 0x130 ordinal: 0x2
  struct _OBJECT_DIRECTORY *ShadowDirectory;       // offset: 0x138 ordinal: 0x3
  ULONG SessionId;                                 // offset: 0x140 ordinal: 0x4
  VOID *NamespaceEntry;                            // offset: 0x148 ordinal: 0x5
  ULONG Flags;                                     // offset: 0x150 ordinal: 0x6
} _OBJECT_DIRECTORY;

// 0x20 bytes (sizeof)
typedef struct _OB_HANDLE_REVOCATION_BLOCK {
  struct _LIST_ENTRY RevocationInfos; // offset: 0x0 ordinal: 0x0
  struct _EX_PUSH_LOCK Lock;          // offset: 0x10 ordinal: 0x1
  struct _EX_RUNDOWN_REF Rundown;     // offset: 0x18 ordinal: 0x2
} _OB_HANDLE_REVOCATION_BLOCK;

// 0x20 bytes (sizeof)
typedef struct _OBJECT_HEADER_HANDLE_REVOCATION_INFO {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 ordinal: 0x0
  struct _OB_HANDLE_REVOCATION_BLOCK
      *RevocationBlock; // offset: 0x10 ordinal: 0x1
  UCHAR Padding1[4];    // offset: 0x18 ordinal: 0x2
  UCHAR Padding2[4];    // offset: 0x1c ordinal: 0x3
} _OBJECT_HEADER_HANDLE_REVOCATION_INFO;

// 0x10 bytes (sizeof)
typedef struct _SEP_LOWBOX_HANDLES_TABLE {
  struct _EX_PUSH_LOCK Lock;                 // offset: 0x0 ordinal: 0x0
  struct _RTL_DYNAMIC_HASH_TABLE *HashTable; // offset: 0x8 ordinal: 0x1
} _SEP_LOWBOX_HANDLES_TABLE;

// 0xa8 bytes (sizeof)
typedef struct _SEP_LOGON_SESSION_REFERENCES {
  struct _SEP_LOGON_SESSION_REFERENCES *Next; // offset: 0x0 ordinal: 0x0
  struct _LUID LogonId;                       // offset: 0x8 ordinal: 0x1
  struct _LUID BuddyLogonId;                  // offset: 0x10 ordinal: 0x2
  LONGLONG ReferenceCount;                    // offset: 0x18 ordinal: 0x3
  ULONG Flags;                                // offset: 0x20 ordinal: 0x4
  struct _DEVICE_MAP *pDeviceMap;             // offset: 0x28 ordinal: 0x5
  VOID *Token;                                // offset: 0x30 ordinal: 0x6
  struct _UNICODE_STRING AccountName;         // offset: 0x38 ordinal: 0x7
  struct _UNICODE_STRING AuthorityName;       // offset: 0x48 ordinal: 0x8
  struct _SEP_LOWBOX_HANDLES_TABLE
      LowBoxHandlesTable;              // offset: 0x58 ordinal: 0x9
  struct _EX_PUSH_LOCK SharedDataLock; // offset: 0x68 ordinal: 0xa
  struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION
      *SharedClaimAttributes;                    // offset: 0x70 ordinal: 0xb
  struct _SEP_SID_VALUES_BLOCK *SharedSidValues; // offset: 0x78 ordinal: 0xc
  struct _OB_HANDLE_REVOCATION_BLOCK
      RevocationBlock;       // offset: 0x80 ordinal: 0xd
  struct _ESILO *ServerSilo; // offset: 0xa0 ordinal: 0xe
} _SEP_LOGON_SESSION_REFERENCES;

// 0x38 bytes (sizeof)
typedef struct _OBJECT_HEADER {
  LONGLONG PointerCount; // offset: 0x0 ordinal: 0x0
  union {
    LONGLONG HandleCount; // offset: 0x8 ordinal: 0x1
    VOID *NextToFree;     // offset: 0x8 ordinal: 0x2
  };
  struct _EX_PUSH_LOCK Lock; // offset: 0x10 ordinal: 0x3
  UCHAR TypeIndex;           // offset: 0x18 ordinal: 0x4
  union {
    UCHAR TraceFlags;      // offset: 0x19 ordinal: 0x5
    UCHAR DbgRefTrace : 1; // offset: 0x19 ordinal: 0x6
  };
  UCHAR DbgTracePermanent : 1; // offset: 0x19 ordinal: 0x7
  UCHAR InfoMask;              // offset: 0x1a ordinal: 0x8
  union {
    UCHAR Flags;         // offset: 0x1b ordinal: 0x9
    UCHAR NewObject : 1; // offset: 0x1b ordinal: 0xa
  };
  UCHAR KernelObject : 1;         // offset: 0x1b ordinal: 0xb
  UCHAR KernelOnlyAccess : 1;     // offset: 0x1b ordinal: 0xc
  UCHAR ExclusiveObject : 1;      // offset: 0x1b ordinal: 0xd
  UCHAR PermanentObject : 1;      // offset: 0x1b ordinal: 0xe
  UCHAR DefaultSecurityQuota : 1; // offset: 0x1b ordinal: 0xf
  UCHAR SingleHandleEntry : 1;    // offset: 0x1b ordinal: 0x10
  UCHAR DeletedInline : 1;        // offset: 0x1b ordinal: 0x11
  ULONG Spare;                    // offset: 0x1c ordinal: 0x12
  union {
    struct _OBJECT_CREATE_INFORMATION
        *ObjectCreateInfo;   // offset: 0x20 ordinal: 0x13
    VOID *QuotaBlockCharged; // offset: 0x20 ordinal: 0x14
  };
  VOID *SecurityDescriptor; // offset: 0x28 ordinal: 0x15
  struct _QUAD Body;        // offset: 0x30 ordinal: 0x16
} _OBJECT_HEADER;

// 0x28 bytes (sizeof)
typedef struct _OBJECT_REF_INFO {
  struct _OBJECT_HEADER *ObjectHeader;        // offset: 0x0 ordinal: 0x0
  VOID *NextRef;                              // offset: 0x8 ordinal: 0x1
  UCHAR ImageFileName[16];                    // offset: 0x10 ordinal: 0x2
  USHORT NextPos;                             // offset: 0x20 ordinal: 0x3
  USHORT MaxStacks;                           // offset: 0x22 ordinal: 0x4
  struct _OBJECT_REF_STACK_INFO StackInfo[0]; // offset: 0x24 ordinal: 0x5
} _OBJECT_REF_INFO;

// 0x110 bytes (sizeof)
typedef struct _DUMMY_FILE_OBJECT {
  struct _OBJECT_HEADER ObjectHeader; // offset: 0x0 ordinal: 0x0
  CHAR FileObjectBody[216];           // offset: 0x38 ordinal: 0x1
} _DUMMY_FILE_OBJECT;

// 0xb8 bytes (sizeof)
typedef struct _OPEN_PACKET {
  SHORT Type;                      // offset: 0x0 ordinal: 0x0
  SHORT Size;                      // offset: 0x2 ordinal: 0x1
  struct _FILE_OBJECT *FileObject; // offset: 0x8 ordinal: 0x2
  LONG FinalStatus;                // offset: 0x10 ordinal: 0x3
  ULONGLONG Information;           // offset: 0x18 ordinal: 0x4
  ULONG ParseCheck;                // offset: 0x20 ordinal: 0x5
  union {
    struct _FILE_OBJECT *RelatedFileObject;        // offset: 0x28 ordinal: 0x6
    struct _DEVICE_OBJECT *ReferencedDeviceObject; // offset: 0x28 ordinal: 0x7
  };
  struct _OBJECT_ATTRIBUTES *OriginalAttributes; // offset: 0x30 ordinal: 0x8
  union _LARGE_INTEGER AllocationSize;           // offset: 0x38 ordinal: 0x9
  ULONG CreateOptions;                           // offset: 0x40 ordinal: 0xa
  USHORT FileAttributes;                         // offset: 0x44 ordinal: 0xb
  USHORT ShareAccess;                            // offset: 0x46 ordinal: 0xc
  VOID *EaBuffer;                                // offset: 0x48 ordinal: 0xd
  ULONG EaLength;                                // offset: 0x50 ordinal: 0xe
  ULONG Options;                                 // offset: 0x54 ordinal: 0xf
  ULONG Disposition;                             // offset: 0x58 ordinal: 0x10
  struct _FILE_BASIC_INFORMATION
      *BasicInformation; // offset: 0x60 ordinal: 0x11
  struct _FILE_NETWORK_OPEN_INFORMATION
      *NetworkInformation;                    // offset: 0x68 ordinal: 0x12
  enum _CREATE_FILE_TYPE CreateFileType;      // offset: 0x70 ordinal: 0x13
  VOID *MailslotOrPipeParameters;             // offset: 0x78 ordinal: 0x14
  UCHAR Override;                             // offset: 0x80 ordinal: 0x15
  UCHAR QueryOnly;                            // offset: 0x81 ordinal: 0x16
  UCHAR DeleteOnly;                           // offset: 0x82 ordinal: 0x17
  UCHAR FullAttributes;                       // offset: 0x83 ordinal: 0x18
  struct _DUMMY_FILE_OBJECT *LocalFileObject; // offset: 0x88 ordinal: 0x19
  ULONG InternalFlags;                        // offset: 0x90 ordinal: 0x1a
  CHAR AccessMode;                            // offset: 0x94 ordinal: 0x1b
  struct _IO_DRIVER_CREATE_CONTEXT
      DriverCreateContext; // offset: 0x98 ordinal: 0x1c
} _OPEN_PACKET;

// 0x18 bytes (sizeof)
typedef struct _ALPC_HANDLE_TABLE {
  struct _ALPC_HANDLE_ENTRY *Handles; // offset: 0x0 ordinal: 0x0
  ULONG TotalHandles;                 // offset: 0x8 ordinal: 0x1
  ULONG Flags;                        // offset: 0xc ordinal: 0x2
  struct _EX_PUSH_LOCK Lock;          // offset: 0x10 ordinal: 0x3
} _ALPC_HANDLE_TABLE;

// 0x30 bytes (sizeof)
typedef struct _BLOB {
  union {
    struct _LIST_ENTRY ResourceList;   // offset: 0x0 ordinal: 0x0
    struct _SLIST_ENTRY FreeListEntry; // offset: 0x0 ordinal: 0x1
  };
  union __anon_1521 u1;      // offset: 0x10 ordinal: 0x2
  UCHAR ResourceId;          // offset: 0x11 ordinal: 0x3
  SHORT CachedReferences;    // offset: 0x12 ordinal: 0x4
  LONGLONG ReferenceCount;   // offset: 0x18 ordinal: 0x5
  struct _EX_PUSH_LOCK Lock; // offset: 0x20 ordinal: 0x6
} _BLOB;

// 0x210 bytes (sizeof)
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
  struct _EX_PUSH_LOCK VacbLock;              // offset: 0x68 ordinal: 0xb
  ULONG DirtyPages;                           // offset: 0x70 ordinal: 0xc
  struct _LIST_ENTRY LoggedStreamLinks;       // offset: 0x78 ordinal: 0xd
  struct _LIST_ENTRY SharedCacheMapLinks;     // offset: 0x88 ordinal: 0xe
  ULONG Flags;                                // offset: 0x98 ordinal: 0xf
  LONG Status;                                // offset: 0x9c ordinal: 0x10
  struct _MBCB *Mbcb;                         // offset: 0xa0 ordinal: 0x11
  VOID *Section;                              // offset: 0xa8 ordinal: 0x12
  struct _KEVENT *CreateEvent;                // offset: 0xb0 ordinal: 0x13
  struct _KEVENT *WaitOnActiveCount;          // offset: 0xb8 ordinal: 0x14
  ULONG PagesToWrite;                         // offset: 0xc0 ordinal: 0x15
  LONGLONG BeyondLastFlush;                   // offset: 0xc8 ordinal: 0x16
  struct _CACHE_MANAGER_CALLBACKS *Callbacks; // offset: 0xd0 ordinal: 0x17
  VOID *LazyWriteContext;                     // offset: 0xd8 ordinal: 0x18
  struct _LIST_ENTRY PrivateList;             // offset: 0xe0 ordinal: 0x19
  union {
    struct _LOGGED_STREAM_CALLBACK_V1 V1; // offset: 0xf0 ordinal: 0x1a
    struct _LOGGED_STREAM_CALLBACK_V2 V2; // offset: 0xf0 ordinal: 0x1b
  };
  union _LARGE_INTEGER LargestLSN; // offset: 0x100 ordinal: 0x1c
  ULONG DirtyPageThreshold;        // offset: 0x108 ordinal: 0x1d
  ULONG LazyWritePassCount;        // offset: 0x10c ordinal: 0x1e
  struct _CACHE_UNINITIALIZE_EVENT
      *UninitializeEvent;                      // offset: 0x110 ordinal: 0x1f
  struct _FAST_MUTEX BcbLock;                  // offset: 0x118 ordinal: 0x20
  union _LARGE_INTEGER LastUnmapBehindOffset;  // offset: 0x150 ordinal: 0x21
  struct _KEVENT Event;                        // offset: 0x158 ordinal: 0x22
  union _LARGE_INTEGER HighWaterMappingOffset; // offset: 0x170 ordinal: 0x23
  struct _PRIVATE_CACHE_MAP PrivateCacheMap;   // offset: 0x178 ordinal: 0x24
  VOID *WriteBehindWorkQueueEntry;             // offset: 0x1f0 ordinal: 0x25
  struct _VOLUME_CACHE_MAP *VolumeCacheMap;    // offset: 0x1f8 ordinal: 0x26
  ULONG ProcImagePathHash;                     // offset: 0x200 ordinal: 0x27
  ULONG WritesInProgress;                      // offset: 0x204 ordinal: 0x28
  ULONG AsyncReadRequestCount;                 // offset: 0x208 ordinal: 0x29
} _SHARED_CACHE_MAP;

// 0x8 bytes (sizeof)
typedef struct __anon_1467 {
  struct _SHARED_CACHE_MAP *SharedCacheMap; // offset: 0x0 ordinal: 0x0
} __anon_1467;

// 0x28 bytes (sizeof)
typedef struct _VACB {
  VOID *BaseAddress;                        // offset: 0x0 ordinal: 0x0
  struct _SHARED_CACHE_MAP *SharedCacheMap; // offset: 0x8 ordinal: 0x1
  union __anon_1462 Overlay;                // offset: 0x10 ordinal: 0x2
  struct _VACB_ARRAY_HEADER *ArrayHead;     // offset: 0x20 ordinal: 0x3
} _VACB;

// 0x4b0 bytes (sizeof)
typedef struct _HVIEW_MAP {
  ULONG MappedLength;                     // offset: 0x0 ordinal: 0x0
  struct _EX_PUSH_LOCK Lock;              // offset: 0x8 ordinal: 0x1
  struct _FILE_OBJECT *FileObject;        // offset: 0x10 ordinal: 0x2
  struct _HVIEW_MAP_DIRECTORY *Directory; // offset: 0x18 ordinal: 0x3
  ULONG PagesCharged;                     // offset: 0x20 ordinal: 0x4
  struct _HVIEW_MAP_PIN_LOG PinLog;       // offset: 0x28 ordinal: 0x5
} _HVIEW_MAP;

// 0xa68 bytes (sizeof)
typedef struct _HHIVE {
  ULONG Signature; // offset: 0x0 ordinal: 0x0
  struct _CELL_DATA *(*GetCellRoutine)(
      struct _HHIVE *, ULONG,
      struct _HV_GET_CELL_CONTEXT *); // offset: 0x8 ordinal: 0x1
  VOID(*ReleaseCellRoutine)
  (struct _HHIVE *, struct _HV_GET_CELL_CONTEXT *); // offset: 0x10 ordinal: 0x2
  VOID *(*Allocate)(ULONG, UCHAR, ULONG);           // offset: 0x18 ordinal: 0x3
  VOID (*Free)(VOID *, ULONG);                      // offset: 0x20 ordinal: 0x4
  UCHAR(*FileWrite)
  (struct _HHIVE *, ULONG, struct CMP_OFFSET_ARRAY *, ULONG, ULONG *,
   ULONG); // offset: 0x28 ordinal: 0x5
  UCHAR(*FileRead)
  (struct _HHIVE *, ULONG, ULONG *, VOID *, ULONG); // offset: 0x30 ordinal: 0x6
  VOID *HiveLoadFailure;                            // offset: 0x38 ordinal: 0x7
  struct _HBASE_BLOCK *BaseBlock;                   // offset: 0x40 ordinal: 0x8
  struct _RTL_BITMAP DirtyVector;                   // offset: 0x48 ordinal: 0x9
  ULONG DirtyCount;                                 // offset: 0x58 ordinal: 0xa
  ULONG DirtyAlloc;                                 // offset: 0x5c ordinal: 0xb
  struct _RTL_BITMAP UnreconciledVector;            // offset: 0x60 ordinal: 0xc
  ULONG UnreconciledCount;                          // offset: 0x70 ordinal: 0xd
  ULONG BaseBlockAlloc;                             // offset: 0x74 ordinal: 0xe
  ULONG Cluster;                                    // offset: 0x78 ordinal: 0xf
  UCHAR Flat : 1;                         // offset: 0x7c ordinal: 0x10
  UCHAR ReadOnly : 1;                     // offset: 0x7c ordinal: 0x11
  UCHAR SystemCacheBacked : 1;            // offset: 0x7c ordinal: 0x12
  UCHAR Reserved : 5;                     // offset: 0x7c ordinal: 0x13
  UCHAR DirtyFlag;                        // offset: 0x7d ordinal: 0x14
  ULONG HvBinHeadersUse;                  // offset: 0x80 ordinal: 0x15
  ULONG HvFreeCellsUse;                   // offset: 0x84 ordinal: 0x16
  ULONG HvUsedCellsUse;                   // offset: 0x88 ordinal: 0x17
  ULONG CmUsedCellsUse;                   // offset: 0x8c ordinal: 0x18
  ULONG HiveFlags;                        // offset: 0x90 ordinal: 0x19
  ULONG CurrentLog;                       // offset: 0x94 ordinal: 0x1a
  ULONG CurrentLogSequence;               // offset: 0x98 ordinal: 0x1b
  ULONG CurrentLogMinimumSequence;        // offset: 0x9c ordinal: 0x1c
  ULONG CurrentLogOffset;                 // offset: 0xa0 ordinal: 0x1d
  ULONG MinimumLogSequence;               // offset: 0xa4 ordinal: 0x1e
  ULONG LogFileSizeCap;                   // offset: 0xa8 ordinal: 0x1f
  UCHAR LogDataPresent[2];                // offset: 0xac ordinal: 0x20
  UCHAR PrimaryFileValid;                 // offset: 0xae ordinal: 0x21
  UCHAR BaseBlockDirty;                   // offset: 0xaf ordinal: 0x22
  union _LARGE_INTEGER LastLogSwapTime;   // offset: 0xb0 ordinal: 0x23
  USHORT FirstLogFile : 3;                // offset: 0xb8 ordinal: 0x24
  USHORT SecondLogFile : 3;               // offset: 0xb8 ordinal: 0x25
  USHORT HeaderRecovered : 1;             // offset: 0xb8 ordinal: 0x26
  USHORT LegacyRecoveryIndicated : 1;     // offset: 0xb8 ordinal: 0x27
  USHORT RecoveryInformationReserved : 8; // offset: 0xb8 ordinal: 0x28
  USHORT RecoveryInformation;             // offset: 0xb8 ordinal: 0x29
  UCHAR LogEntriesRecovered[2];           // offset: 0xba ordinal: 0x2a
  ULONG RefreshCount;                     // offset: 0xbc ordinal: 0x2b
  ULONG StorageTypeCount;                 // offset: 0xc0 ordinal: 0x2c
  ULONG Version;                          // offset: 0xc4 ordinal: 0x2d
  struct _HVIEW_MAP ViewMap;              // offset: 0xc8 ordinal: 0x2e
  struct _DUAL Storage[2];                // offset: 0x578 ordinal: 0x2f
} _HHIVE;

// 0x17a8 bytes (sizeof)
typedef struct _CMHIVE {
  struct _HHIVE Hive;                             // offset: 0x0 ordinal: 0x0
  VOID *FileHandles[6];                           // offset: 0xa68 ordinal: 0x1
  struct _LIST_ENTRY NotifyList;                  // offset: 0xa98 ordinal: 0x2
  struct _LIST_ENTRY HiveList;                    // offset: 0xaa8 ordinal: 0x3
  struct _LIST_ENTRY PreloadedHiveList;           // offset: 0xab8 ordinal: 0x4
  struct _LIST_ENTRY FailedUnloadList;            // offset: 0xac8 ordinal: 0x5
  struct _EX_RUNDOWN_REF HiveRundown;             // offset: 0xad8 ordinal: 0x6
  struct _LIST_ENTRY ParseCacheEntries;           // offset: 0xae0 ordinal: 0x7
  struct _CM_KEY_HASH_TABLE_ENTRY *KcbCacheTable; // offset: 0xaf0 ordinal: 0x8
  ULONG KcbCacheTableSize;                        // offset: 0xaf8 ordinal: 0x9
  struct _CM_KEY_HASH_TABLE_ENTRY
      *DeletedKcbTable;                          // offset: 0xb00 ordinal: 0xa
  ULONG DeletedKcbTableSize;                     // offset: 0xb08 ordinal: 0xb
  ULONG Identity;                                // offset: 0xb0c ordinal: 0xc
  struct _FAST_MUTEX *HiveLock;                  // offset: 0xb10 ordinal: 0xd
  struct _FAST_MUTEX *WriterLock;                // offset: 0xb18 ordinal: 0xe
  struct _ERESOURCE *FlusherLock;                // offset: 0xb20 ordinal: 0xf
  struct _RTL_BITMAP FlushDirtyVector;           // offset: 0xb28 ordinal: 0x10
  ULONG FlushDirtyVectorSize;                    // offset: 0xb38 ordinal: 0x11
  UCHAR *FlushLogEntry;                          // offset: 0xb40 ordinal: 0x12
  ULONG FlushLogEntrySize;                       // offset: 0xb48 ordinal: 0x13
  ULONG FlushHiveTruncated;                      // offset: 0xb4c ordinal: 0x14
  UCHAR FlushBaseBlockDirty;                     // offset: 0xb50 ordinal: 0x15
  struct _RTL_BITMAP CapturedUnreconciledVector; // offset: 0xb58 ordinal: 0x16
  ULONG CapturedUnreconciledVectorSize;          // offset: 0xb68 ordinal: 0x17
  struct CMP_OFFSET_ARRAY
      *UnreconciledOffsetArray;               // offset: 0xb70 ordinal: 0x18
  ULONG UnreconciledOffsetArrayCount;         // offset: 0xb78 ordinal: 0x19
  struct _HBASE_BLOCK *UnreconciledBaseBlock; // offset: 0xb80 ordinal: 0x1a
  struct _EX_PUSH_LOCK SecurityLock;          // offset: 0xb88 ordinal: 0x1b
  ULONG UseCount;                             // offset: 0xb90 ordinal: 0x1c
  ULONG LastShrinkHiveSize;                   // offset: 0xb94 ordinal: 0x1d
  union _LARGE_INTEGER ActualFileSize;        // offset: 0xb98 ordinal: 0x1e
  union _LARGE_INTEGER LogFileSizes[2];       // offset: 0xba0 ordinal: 0x1f
  struct _UNICODE_STRING FileFullPath;        // offset: 0xbb0 ordinal: 0x20
  struct _UNICODE_STRING FileUserName;        // offset: 0xbc0 ordinal: 0x21
  struct _UNICODE_STRING HiveRootPath;        // offset: 0xbd0 ordinal: 0x22
  ULONG SecurityCount;                        // offset: 0xbe0 ordinal: 0x23
  ULONG SecurityCacheSize;                    // offset: 0xbe4 ordinal: 0x24
  LONG SecurityHitHint;                       // offset: 0xbe8 ordinal: 0x25
  struct _CM_KEY_SECURITY_CACHE_ENTRY
      *SecurityCache;                           // offset: 0xbf0 ordinal: 0x26
  struct _LIST_ENTRY SecurityHash[64];          // offset: 0xbf8 ordinal: 0x27
  ULONG UnloadEventCount;                       // offset: 0xff8 ordinal: 0x28
  struct _KEVENT **UnloadEventArray;            // offset: 0x1000 ordinal: 0x29
  struct _CM_KEY_CONTROL_BLOCK *RootKcb;        // offset: 0x1008 ordinal: 0x2a
  UCHAR Frozen;                                 // offset: 0x1010 ordinal: 0x2b
  struct _CM_WORKITEM *UnloadWorkItem;          // offset: 0x1018 ordinal: 0x2c
  struct _CM_WORKITEM UnloadWorkItemHolder;     // offset: 0x1020 ordinal: 0x2d
  UCHAR GrowOnlyMode;                           // offset: 0x1048 ordinal: 0x2e
  ULONG GrowOffset;                             // offset: 0x104c ordinal: 0x2f
  struct _LIST_ENTRY KcbConvertListHead;        // offset: 0x1050 ordinal: 0x30
  struct _CM_CELL_REMAP_BLOCK *CellRemapArray;  // offset: 0x1060 ordinal: 0x31
  struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;   // offset: 0x1068 ordinal: 0x32
  ULONG Flags;                                  // offset: 0x14f0 ordinal: 0x33
  struct _LIST_ENTRY TrustClassEntry;           // offset: 0x14f8 ordinal: 0x34
  ULONGLONG DirtyTime;                          // offset: 0x1508 ordinal: 0x35
  ULONGLONG UnreconciledTime;                   // offset: 0x1510 ordinal: 0x36
  struct _CM_RM *CmRm;                          // offset: 0x1518 ordinal: 0x37
  ULONG CmRmInitFailPoint;                      // offset: 0x1520 ordinal: 0x38
  LONG CmRmInitFailStatus;                      // offset: 0x1524 ordinal: 0x39
  struct _KTHREAD *CreatorOwner;                // offset: 0x1528 ordinal: 0x3a
  struct _KTHREAD *RundownThread;               // offset: 0x1530 ordinal: 0x3b
  union _LARGE_INTEGER LastWriteTime;           // offset: 0x1538 ordinal: 0x3c
  struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;     // offset: 0x1540 ordinal: 0x3d
  struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue; // offset: 0x1558 ordinal: 0x3e
  union {
    ULONG FlushFlags;      // offset: 0x1570 ordinal: 0x3f
    ULONG FlushActive : 1; // offset: 0x1570 ordinal: 0x40
  };
  ULONG ReconcileActive : 1;                    // offset: 0x1570 ordinal: 0x41
  ULONG PrimaryFilePurged : 1;                  // offset: 0x1570 ordinal: 0x42
  ULONG DiskFileBad : 1;                        // offset: 0x1570 ordinal: 0x43
  ULONG PrimaryFileSizeBeforeLastFlush;         // offset: 0x1574 ordinal: 0x44
  LONG ReferenceCount;                          // offset: 0x1578 ordinal: 0x45
  LONG UnloadHistoryIndex;                      // offset: 0x157c ordinal: 0x46
  ULONG UnloadHistory[128];                     // offset: 0x1580 ordinal: 0x47
  ULONG BootStart;                              // offset: 0x1780 ordinal: 0x48
  ULONG UnaccessedStart;                        // offset: 0x1784 ordinal: 0x49
  ULONG UnaccessedEnd;                          // offset: 0x1788 ordinal: 0x4a
  ULONG LoadedKeyCount;                         // offset: 0x178c ordinal: 0x4b
  ULONG HandleClosePending;                     // offset: 0x1790 ordinal: 0x4c
  struct _EX_PUSH_LOCK HandleClosePendingEvent; // offset: 0x1798 ordinal: 0x4d
  UCHAR FinalFlushSucceeded;                    // offset: 0x17a0 ordinal: 0x4e
  UCHAR FailedUnload;                           // offset: 0x17a1 ordinal: 0x4f
} _CMHIVE;

// 0x98 bytes (sizeof)
typedef struct _HIVE_LIST_ENTRY {
  USHORT *FileName;                // offset: 0x0 ordinal: 0x0
  USHORT *BaseName;                // offset: 0x8 ordinal: 0x1
  USHORT *RegRootName;             // offset: 0x10 ordinal: 0x2
  struct _CMHIVE *CmHive;          // offset: 0x18 ordinal: 0x3
  ULONG HHiveFlags;                // offset: 0x20 ordinal: 0x4
  ULONG CmHiveFlags;               // offset: 0x24 ordinal: 0x5
  ULONG CmKcbCacheSize;            // offset: 0x28 ordinal: 0x6
  struct _CMHIVE *CmHive2;         // offset: 0x30 ordinal: 0x7
  UCHAR HiveMounted;               // offset: 0x38 ordinal: 0x8
  UCHAR ThreadFinished;            // offset: 0x39 ordinal: 0x9
  UCHAR ThreadStarted;             // offset: 0x3a ordinal: 0xa
  UCHAR Allocate;                  // offset: 0x3b ordinal: 0xb
  UCHAR WinPERequired;             // offset: 0x3c ordinal: 0xc
  struct _KEVENT StartEvent;       // offset: 0x40 ordinal: 0xd
  struct _KEVENT FinishedEvent;    // offset: 0x58 ordinal: 0xe
  struct _KEVENT MountLock;        // offset: 0x70 ordinal: 0xf
  struct _UNICODE_STRING FilePath; // offset: 0x88 ordinal: 0x10
} _HIVE_LIST_ENTRY;

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

// 0xa8 bytes (sizeof)
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
  struct _CMHIVE *HiveArray[7];             // offset: 0x70 ordinal: 0xb
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

// 0x20 bytes (sizeof)
typedef struct _CM_KEY_HASH {
  ULONG ConvKey;                 // offset: 0x0 ordinal: 0x0
  struct _CM_KEY_HASH *NextHash; // offset: 0x8 ordinal: 0x1
  struct _HHIVE *KeyHive;        // offset: 0x10 ordinal: 0x2
  ULONG KeyCell;                 // offset: 0x18 ordinal: 0x3
} _CM_KEY_HASH;

// 0x128 bytes (sizeof)
typedef struct _CM_KEY_CONTROL_BLOCK {
  ULONG RefCount;             // offset: 0x0 ordinal: 0x0
  ULONG ExtFlags : 16;        // offset: 0x4 ordinal: 0x1
  ULONG PrivateAlloc : 1;     // offset: 0x4 ordinal: 0x2
  ULONG Delete : 1;           // offset: 0x4 ordinal: 0x3
  ULONG HiveUnloaded : 1;     // offset: 0x4 ordinal: 0x4
  ULONG Decommissioned : 1;   // offset: 0x4 ordinal: 0x5
  ULONG LockTablePresent : 1; // offset: 0x4 ordinal: 0x6
  ULONG TotalLevels : 10;     // offset: 0x4 ordinal: 0x7
  ULONG DelayedDeref : 1;     // offset: 0x8 ordinal: 0x8
  ULONG DelayedClose : 1;     // offset: 0x8 ordinal: 0x9
  ULONG Parking : 1;          // offset: 0x8 ordinal: 0xa
  union {
    struct _CM_KEY_HASH KeyHash; // offset: 0x10 ordinal: 0xb
    ULONG ConvKey;               // offset: 0x10 ordinal: 0xc
  };
  struct _CM_KEY_HASH *NextHash;    // offset: 0x18 ordinal: 0xd
  struct _HHIVE *KeyHive;           // offset: 0x20 ordinal: 0xe
  ULONG KeyCell;                    // offset: 0x28 ordinal: 0xf
  struct _EX_PUSH_LOCK KcbPushlock; // offset: 0x30 ordinal: 0x10
  union {
    struct _KTHREAD *Owner; // offset: 0x38 ordinal: 0x11
    LONG SharedCount;       // offset: 0x38 ordinal: 0x12
  };
  ULONG SlotHint;                                // offset: 0x40 ordinal: 0x13
  struct _CM_KEY_CONTROL_BLOCK *ParentKcb;       // offset: 0x48 ordinal: 0x14
  struct _CM_NAME_CONTROL_BLOCK *NameBlock;      // offset: 0x50 ordinal: 0x15
  struct _CM_KEY_SECURITY_CACHE *CachedSecurity; // offset: 0x58 ordinal: 0x16
  struct _CACHED_CHILD_LIST ValueCache;          // offset: 0x60 ordinal: 0x17
  union {
    struct _CM_INDEX_HINT_BLOCK *IndexHint; // offset: 0x70 ordinal: 0x18
    ULONG HashKey;                          // offset: 0x70 ordinal: 0x19
    ULONG SubKeyCount;                      // offset: 0x70 ordinal: 0x1a
  };
  union {
    struct _LIST_ENTRY KeyBodyListHead; // offset: 0x78 ordinal: 0x1b
    struct _LIST_ENTRY FreeListEntry;   // offset: 0x78 ordinal: 0x1c
  };
  struct _CM_KEY_BODY *KeyBodyArray[4];  // offset: 0x88 ordinal: 0x1d
  union _LARGE_INTEGER KcbLastWriteTime; // offset: 0xa8 ordinal: 0x1e
  USHORT KcbMaxNameLen;                  // offset: 0xb0 ordinal: 0x1f
  USHORT KcbMaxValueNameLen;             // offset: 0xb2 ordinal: 0x20
  ULONG KcbMaxValueDataLen;              // offset: 0xb4 ordinal: 0x21
  ULONG KcbUserFlags : 4;                // offset: 0xb8 ordinal: 0x22
  ULONG KcbVirtControlFlags : 4;         // offset: 0xb8 ordinal: 0x23
  ULONG KcbDebug : 8;                    // offset: 0xb8 ordinal: 0x24
  ULONG Flags : 16;                      // offset: 0xb8 ordinal: 0x25
  CHAR *RealKeyName;                     // offset: 0xc0 ordinal: 0x26
  struct _LIST_ENTRY KCBUoWListHead;     // offset: 0xc8 ordinal: 0x27
  union {
    struct _LIST_ENTRY DelayQueueEntry; // offset: 0xd8 ordinal: 0x28
    UCHAR *Stolen;                      // offset: 0xd8 ordinal: 0x29
  };
  struct _CM_TRANS *TransKCBOwner;       // offset: 0xe8 ordinal: 0x2a
  struct _CM_INTENT_LOCK KCBLock;        // offset: 0xf0 ordinal: 0x2b
  struct _CM_INTENT_LOCK KeyLock;        // offset: 0x100 ordinal: 0x2c
  struct _CHILD_LIST TransValueCache;    // offset: 0x110 ordinal: 0x2d
  struct _CM_TRANS *TransValueListOwner; // offset: 0x118 ordinal: 0x2e
  struct _UNICODE_STRING *FullKCBName;   // offset: 0x120 ordinal: 0x2f
} _CM_KEY_CONTROL_BLOCK;

typedef UCHAR (*__anon_1124)(struct _HHIVE *, ULONG, ULONG *, VOID *, ULONG);

typedef UCHAR (*__anon_1123)(struct _HHIVE *, ULONG, struct CMP_OFFSET_ARRAY *,
                             ULONG, ULONG *, ULONG);

typedef VOID (*__anon_1121)(struct _HHIVE *, struct _HV_GET_CELL_CONTEXT *);

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
  ULONG AccessBits;                            // offset: 0xc ordinal: 0x3
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

// 0x18 bytes (sizeof)
typedef struct __anon_1153 {
  struct _CELL_DATA *List;      // offset: 0x0 ordinal: 0x0
  ULONG Index;                  // offset: 0x8 ordinal: 0x1
  ULONG Cell;                   // offset: 0xc ordinal: 0x2
  struct _CELL_DATA *CellPoint; // offset: 0x10 ordinal: 0x3
} __anon_1153;

typedef struct _CELL_DATA *(*__anon_1120)(struct _HHIVE *, ULONG,
                                          struct _HV_GET_CELL_CONTEXT *);

// 0x20 bytes (sizeof)
typedef struct __anon_1097 {
  ULONG Cell;                   // offset: 0x0 ordinal: 0x0
  struct _CELL_DATA *CellPoint; // offset: 0x8 ordinal: 0x1
  VOID *RootPoint;              // offset: 0x10 ordinal: 0x2
  ULONG Index;                  // offset: 0x18 ordinal: 0x3
} __anon_1097;

// 0x160 bytes (sizeof)
typedef struct _HIVE_LOAD_FAILURE {
  struct _HHIVE *Hive;                        // offset: 0x0 ordinal: 0x0
  ULONG Index;                                // offset: 0x8 ordinal: 0x1
  ULONG RecoverableIndex;                     // offset: 0xc ordinal: 0x2
  struct __anon_1093 Locations[8];            // offset: 0x10 ordinal: 0x3
  struct __anon_1093 RecoverableLocations[8]; // offset: 0x70 ordinal: 0x4
  struct __anon_1095 RegistryIO;              // offset: 0xd0 ordinal: 0x5
  struct __anon_1096 CheckRegistry2;          // offset: 0xe8 ordinal: 0x6
  struct __anon_1097 CheckKey;                // offset: 0xf0 ordinal: 0x7
  struct __anon_1153 CheckValueList;          // offset: 0x110 ordinal: 0x8
  struct __anon_1154 CheckHive;               // offset: 0x128 ordinal: 0x9
  struct __anon_1154 CheckHive1;              // offset: 0x138 ordinal: 0xa
  struct __anon_1157 CheckBin;                // offset: 0x148 ordinal: 0xb
  struct __anon_1163 RecoverData;             // offset: 0x158 ordinal: 0xc
} _HIVE_LOAD_FAILURE;

// 0x20 bytes (sizeof)
typedef struct _MMSESSION {
  struct _EX_PUSH_LOCK SystemSpaceViewLock;         // offset: 0x0 ordinal: 0x0
  struct _EX_PUSH_LOCK *SystemSpaceViewLockPointer; // offset: 0x8 ordinal: 0x1
  struct _RTL_AVL_TREE ViewRoot;                    // offset: 0x10 ordinal: 0x2
  ULONG ViewCount;                                  // offset: 0x18 ordinal: 0x3
  ULONG BitmapFailures;                             // offset: 0x1c ordinal: 0x4
} _MMSESSION;

// 0x10 bytes (sizeof)
typedef struct _EX_PUSH_LOCK_AUTO_EXPAND {
  struct _EX_PUSH_LOCK LocalLock;               // offset: 0x0 ordinal: 0x0
  struct _EX_PUSH_LOCK_AUTO_EXPAND_STATE State; // offset: 0x8 ordinal: 0x1
  ULONG Stats;                                  // offset: 0xc ordinal: 0x2
} _EX_PUSH_LOCK_AUTO_EXPAND;

// 0x68 bytes (sizeof)
typedef struct _FSRTL_ADVANCED_FCB_HEADER {
  SHORT NodeTypeCode;                   // offset: 0x0 ordinal: 0x0
  SHORT NodeByteSize;                   // offset: 0x2 ordinal: 0x1
  UCHAR Flags;                          // offset: 0x4 ordinal: 0x2
  UCHAR IsFastIoPossible;               // offset: 0x5 ordinal: 0x3
  UCHAR Flags2;                         // offset: 0x6 ordinal: 0x4
  UCHAR Reserved : 4;                   // offset: 0x7 ordinal: 0x5
  UCHAR Version : 4;                    // offset: 0x7 ordinal: 0x6
  struct _ERESOURCE *Resource;          // offset: 0x8 ordinal: 0x7
  struct _ERESOURCE *PagingIoResource;  // offset: 0x10 ordinal: 0x8
  union _LARGE_INTEGER AllocationSize;  // offset: 0x18 ordinal: 0x9
  union _LARGE_INTEGER FileSize;        // offset: 0x20 ordinal: 0xa
  union _LARGE_INTEGER ValidDataLength; // offset: 0x28 ordinal: 0xb
  struct _FAST_MUTEX *FastMutex;        // offset: 0x30 ordinal: 0xc
  struct _LIST_ENTRY FilterContexts;    // offset: 0x38 ordinal: 0xd
  struct _EX_PUSH_LOCK PushLock;        // offset: 0x48 ordinal: 0xe
  VOID **FileContextSupportPointer;     // offset: 0x50 ordinal: 0xf
  union {
    VOID *Oplock;            // offset: 0x58 ordinal: 0x10
    VOID *ReservedForRemote; // offset: 0x58 ordinal: 0x11
  };
  VOID *ReservedContext; // offset: 0x60 ordinal: 0x12
} _FSRTL_ADVANCED_FCB_HEADER;

// 0x60 bytes (sizeof)
typedef struct _MMPAGE_FILE_EXPANSION {
  struct _SEGMENT *Segment;              // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY DereferenceList;    // offset: 0x8 ordinal: 0x1
  struct _MI_PARTITION *Partition;       // offset: 0x18 ordinal: 0x2
  ULONGLONG RequestedExpansionSize;      // offset: 0x20 ordinal: 0x3
  ULONGLONG ActualExpansion;             // offset: 0x28 ordinal: 0x4
  struct _KEVENT Event;                  // offset: 0x30 ordinal: 0x5
  LONG InProgress;                       // offset: 0x48 ordinal: 0x6
  struct _MMPAGE_FILE_EXPANSION_FLAGS u; // offset: 0x4c ordinal: 0x7
  VOID **ActiveEntry;                    // offset: 0x50 ordinal: 0x8
  UCHAR AttemptForCantExtend;            // offset: 0x58 ordinal: 0x9
  UCHAR PageFileContract;                // offset: 0x59 ordinal: 0xa
} _MMPAGE_FILE_EXPANSION;

// 0x2a0 bytes (sizeof)
typedef struct _MI_PARTITION_MODWRITES {
  struct _MMPAGE_FILE_EXPANSION
      AttemptForCantExtend;                       // offset: 0x0 ordinal: 0x0
  struct _MMPAGE_FILE_EXPANSION PageFileContract; // offset: 0x60 ordinal: 0x1
  ULONGLONG NumberOfMappedMdls;                   // offset: 0xc0 ordinal: 0x2
  LONG NumberOfMappedMdlsInUse;                   // offset: 0xc8 ordinal: 0x3
  ULONG NumberOfMappedMdlsInUsePeak;              // offset: 0xcc ordinal: 0x4
  struct _MMMOD_WRITER_LISTHEAD MappedFileHeader; // offset: 0xd0 ordinal: 0x5
  UCHAR NeedMappedMdl;                            // offset: 0xf8 ordinal: 0x6
  UCHAR NeedPageFileMdl;                          // offset: 0xf9 ordinal: 0x7
  UCHAR TransitionInserted;                       // offset: 0xfa ordinal: 0x8
  LONG LastModifiedWriteError;                    // offset: 0xfc ordinal: 0x9
  LONG LastMappedWriteError;                      // offset: 0x100 ordinal: 0xa
  ULONG MappedFileWriteSucceeded;                 // offset: 0x104 ordinal: 0xb
  ULONG MappedWriteBurstCount;                    // offset: 0x108 ordinal: 0xc
  ULONG LowPriorityModWritesOutstanding;          // offset: 0x10c ordinal: 0xd
  struct _KEVENT BoostModWriteIoPriorityEvent;    // offset: 0x110 ordinal: 0xe
  LONG ModifiedWriterThreadPriority;              // offset: 0x128 ordinal: 0xf
  ULONGLONG ModifiedPagesLowPriorityGoal;         // offset: 0x130 ordinal: 0x10
  struct _KEVENT ModifiedPageWriterEvent;         // offset: 0x138 ordinal: 0x11
  LONG WriteAllPagefilePages;                     // offset: 0x150 ordinal: 0x12
  LONG WriteAllMappedPages;                       // offset: 0x154 ordinal: 0x13
  struct _KEVENT MappedPageWriterEvent;           // offset: 0x158 ordinal: 0x14
  struct _MI_MODWRITE_DATA ModWriteData;          // offset: 0x170 ordinal: 0x15
  struct _KEVENT RescanPageFilesEvent;            // offset: 0x1b0 ordinal: 0x16
  struct _MMMOD_WRITER_LISTHEAD PagingFileHeader; // offset: 0x1c8 ordinal: 0x17
  struct _ETHREAD *ModifiedPageWriterThread;      // offset: 0x1f0 ordinal: 0x18
  struct _EX_RUNDOWN_REF
      ModifiedPageWriterRundown;                // offset: 0x1f8 ordinal: 0x19
  struct _WORK_QUEUE_ITEM PagefileScanWorkItem; // offset: 0x200 ordinal: 0x1a
  ULONG PagefileScanCount;                      // offset: 0x220 ordinal: 0x1b
  LONG ClusterWritesDisabled[2];                // offset: 0x224 ordinal: 0x1c
  UCHAR DelayMappedWrite;                       // offset: 0x22c ordinal: 0x1d
  ULONG PagefileReservationsEnabled;            // offset: 0x230 ordinal: 0x1e
  struct _EX_PUSH_LOCK PageFileCreationLock;    // offset: 0x238 ordinal: 0x1f
  struct _WORK_QUEUE_ITEM TrimPagefileWorkItem; // offset: 0x240 ordinal: 0x20
  ULONGLONG LastTrimPagefileTime;               // offset: 0x260 ordinal: 0x21
  struct _WORK_QUEUE_ITEM
      WsSwapPagefileContractWorkItem;       // offset: 0x268 ordinal: 0x22
  LONG WsSwapPageFileContractionInProgress; // offset: 0x288 ordinal: 0x23
  struct _EX_PUSH_LOCK WorkingSetSwapLock;  // offset: 0x290 ordinal: 0x24
  LONG WorkingSetInswapLock;                // offset: 0x298 ordinal: 0x25
} _MI_PARTITION_MODWRITES;

// 0x40 bytes (sizeof)
typedef struct _HANDLE_TABLE_FREE_LIST {
  struct _EX_PUSH_LOCK FreeListLock;               // offset: 0x0 ordinal: 0x0
  union _HANDLE_TABLE_ENTRY *FirstFreeHandleEntry; // offset: 0x8 ordinal: 0x1
  union _HANDLE_TABLE_ENTRY *LastFreeHandleEntry;  // offset: 0x10 ordinal: 0x2
  LONG HandleCount;                                // offset: 0x18 ordinal: 0x3
  ULONG HighWaterMark;                             // offset: 0x1c ordinal: 0x4
  ULONG Reserved[8];                               // offset: 0x20 ordinal: 0x5
} _HANDLE_TABLE_FREE_LIST;

// 0x10 bytes (sizeof)
typedef struct _POP_RW_LOCK {
  struct _EX_PUSH_LOCK Lock; // offset: 0x0 ordinal: 0x0
  struct _KTHREAD *Thread;   // offset: 0x8 ordinal: 0x1
} _POP_RW_LOCK;

// 0x90 bytes (sizeof)
typedef struct _POP_COOLING_EXTENSION {
  struct _LIST_ENTRY Link;                     // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY RequestListHead;          // offset: 0x10 ordinal: 0x1
  struct _POP_RW_LOCK Lock;                    // offset: 0x20 ordinal: 0x2
  struct _DEVICE_OBJECT *DeviceObject;         // offset: 0x30 ordinal: 0x3
  VOID *NotificationEntry;                     // offset: 0x38 ordinal: 0x4
  UCHAR Enabled;                               // offset: 0x40 ordinal: 0x5
  UCHAR ActiveEngaged;                         // offset: 0x41 ordinal: 0x6
  UCHAR ThrottleLimit;                         // offset: 0x42 ordinal: 0x7
  UCHAR UpdatingToCurrent;                     // offset: 0x43 ordinal: 0x8
  struct _KEVENT *RemovalFlushEvent;           // offset: 0x48 ordinal: 0x9
  struct _KEVENT *PnpFlushEvent;               // offset: 0x50 ordinal: 0xa
  struct _THERMAL_COOLING_INTERFACE Interface; // offset: 0x58 ordinal: 0xb
} _POP_COOLING_EXTENSION;

// 0x60 bytes (sizeof)
typedef struct _DEVICE_OBJECT_POWER_EXTENSION {
  ULONG IdleCount;                                 // offset: 0x0 ordinal: 0x0
  ULONG BusyCount;                                 // offset: 0x4 ordinal: 0x1
  ULONG BusyReference;                             // offset: 0x8 ordinal: 0x2
  ULONG TotalBusyCount;                            // offset: 0xc ordinal: 0x3
  ULONG ConservationIdleTime;                      // offset: 0x10 ordinal: 0x4
  ULONG PerformanceIdleTime;                       // offset: 0x14 ordinal: 0x5
  struct _DEVICE_OBJECT *DeviceObject;             // offset: 0x18 ordinal: 0x6
  struct _LIST_ENTRY IdleList;                     // offset: 0x20 ordinal: 0x7
  enum _POP_DEVICE_IDLE_TYPE IdleType;             // offset: 0x30 ordinal: 0x8
  enum _DEVICE_POWER_STATE IdleState;              // offset: 0x34 ordinal: 0x9
  enum _DEVICE_POWER_STATE CurrentState;           // offset: 0x38 ordinal: 0xa
  struct _POP_COOLING_EXTENSION *CoolingExtension; // offset: 0x40 ordinal: 0xb
  struct _LIST_ENTRY Volume;                       // offset: 0x48 ordinal: 0xc
  union __anon_558 Specific;                       // offset: 0x58 ordinal: 0xd
} _DEVICE_OBJECT_POWER_EXTENSION;

// 0x68 bytes (sizeof)
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
  VOID *DependencyNode;                        // offset: 0x50 ordinal: 0xc
  VOID *InterruptContext;                      // offset: 0x58 ordinal: 0xd
  VOID *VerifierContext;                       // offset: 0x60 ordinal: 0xe
} _DEVOBJ_EXTENSION;

// 0x20 bytes (sizeof)
typedef struct _ALPC_PROCESS_CONTEXT {
  struct _EX_PUSH_LOCK Lock;       // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY ViewListHead; // offset: 0x8 ordinal: 0x1
  ULONGLONG PagedPoolQuotaCache;   // offset: 0x18 ordinal: 0x2
} _ALPC_PROCESS_CONTEXT;

// 0x10 bytes (sizeof)
typedef struct _IO_STATUS_BLOCK {
  union {
    LONG Status;   // offset: 0x0 ordinal: 0x0
    VOID *Pointer; // offset: 0x0 ordinal: 0x1
  };
  ULONGLONG Information; // offset: 0x8 ordinal: 0x2
} _IO_STATUS_BLOCK;

// 0x10 bytes (sizeof)
typedef union __anon_937 {
  struct _IO_STATUS_BLOCK IoStatus; // offset: 0x0 ordinal: 0x0
} __anon_937;

// 0x30 bytes (sizeof)
typedef struct __anon_1470 {
  struct _SHARED_CACHE_MAP *SharedCacheMap; // offset: 0x0 ordinal: 0x0
  struct _IO_STATUS_BLOCK *IoStatus;        // offset: 0x8 ordinal: 0x1
  struct _KEVENT CallerWaitEvent;           // offset: 0x10 ordinal: 0x2
  UCHAR IsLowPriWriteBehind;                // offset: 0x28 ordinal: 0x3
} __anon_1470;

typedef VOID (*__anon_1276)(struct _DEVICE_OBJECT *, UCHAR, union _POWER_STATE,
                            VOID *, struct _IO_STATUS_BLOCK *);

// 0x20 bytes (sizeof)
typedef struct __anon_1270 {
  VOID(*CallerCompletion)
  (struct _DEVICE_OBJECT *, UCHAR, union _POWER_STATE, VOID *,
   struct _IO_STATUS_BLOCK *);         // offset: 0x0 ordinal: 0x0
  VOID *CallerContext;                 // offset: 0x8 ordinal: 0x1
  struct _DEVICE_OBJECT *CallerDevice; // offset: 0x10 ordinal: 0x2
  UCHAR SystemWake;                    // offset: 0x18 ordinal: 0x3
} __anon_1270;

typedef VOID (*__anon_583)(VOID *, struct _IO_STATUS_BLOCK *, ULONG);

// 0x10 bytes (sizeof)
typedef struct __anon_520 {
  union {
    VOID(*UserApcRoutine)
    (VOID *, struct _IO_STATUS_BLOCK *, ULONG); // offset: 0x0 ordinal: 0x0
    VOID *IssuingProcess;                       // offset: 0x0 ordinal: 0x1
  };
  VOID *UserApcContext; // offset: 0x8 ordinal: 0x2
} __anon_520;

// 0x10 bytes (sizeof)
typedef union __anon_506 {
  struct __anon_520 AsynchronousParameters; // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER AllocationSize;      // offset: 0x0 ordinal: 0x1
} __anon_506;

typedef UCHAR (*__anon_578)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            ULONG, ULONG, VOID *, struct _MDL **,
                            struct _IO_STATUS_BLOCK *,
                            struct _COMPRESSED_DATA_INFO *, ULONG,
                            struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_575)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            ULONG, ULONG, struct _MDL **,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_573)(struct _FILE_OBJECT *, UCHAR,
                            struct _FILE_NETWORK_OPEN_INFORMATION *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_570)(struct _FILE_OBJECT *, UCHAR, VOID *, ULONG, VOID *,
                            ULONG, ULONG, struct _IO_STATUS_BLOCK *,
                            struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_569)(struct _FILE_OBJECT *, VOID *, ULONG,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_565)(struct _FILE_OBJECT *, UCHAR,
                            struct _FILE_STANDARD_INFORMATION *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_564)(struct _FILE_OBJECT *, UCHAR,
                            struct _FILE_BASIC_INFORMATION *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_563)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            ULONG, UCHAR, ULONG, VOID *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_562)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            ULONG, UCHAR, ULONG, UCHAR,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

// 0xd0 bytes (sizeof)
typedef struct _IRP {
  SHORT Type;                         // offset: 0x0 ordinal: 0x0
  USHORT Size;                        // offset: 0x2 ordinal: 0x1
  USHORT AllocationProcessorNumber;   // offset: 0x4 ordinal: 0x2
  USHORT Reserved;                    // offset: 0x6 ordinal: 0x3
  struct _MDL *MdlAddress;            // offset: 0x8 ordinal: 0x4
  ULONG Flags;                        // offset: 0x10 ordinal: 0x5
  union __anon_504 AssociatedIrp;     // offset: 0x18 ordinal: 0x6
  struct _LIST_ENTRY ThreadListEntry; // offset: 0x20 ordinal: 0x7
  struct _IO_STATUS_BLOCK IoStatus;   // offset: 0x30 ordinal: 0x8
  CHAR RequestorMode;                 // offset: 0x40 ordinal: 0x9
  UCHAR PendingReturned;              // offset: 0x41 ordinal: 0xa
  CHAR StackCount;                    // offset: 0x42 ordinal: 0xb
  CHAR CurrentLocation;               // offset: 0x43 ordinal: 0xc
  UCHAR Cancel;                       // offset: 0x44 ordinal: 0xd
  UCHAR CancelIrql;                   // offset: 0x45 ordinal: 0xe
  CHAR ApcEnvironment;                // offset: 0x46 ordinal: 0xf
  UCHAR AllocationFlags;              // offset: 0x47 ordinal: 0x10
  struct _IO_STATUS_BLOCK *UserIosb;  // offset: 0x48 ordinal: 0x11
  struct _KEVENT *UserEvent;          // offset: 0x50 ordinal: 0x12
  union __anon_506 Overlay;           // offset: 0x58 ordinal: 0x13
  VOID(*CancelRoutine)
  (struct _DEVICE_OBJECT *, struct _IRP *); // offset: 0x68 ordinal: 0x14
  VOID *UserBuffer;                         // offset: 0x70 ordinal: 0x15
  union __anon_507 Tail;                    // offset: 0x78 ordinal: 0x16
} _IRP;

// 0x20 bytes (sizeof)
typedef struct _VF_WATCHDOG_IRP {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 ordinal: 0x0
  struct _IRP *Irp;             // offset: 0x10 ordinal: 0x1
  ULONG DueTickCount;           // offset: 0x18 ordinal: 0x2
  UCHAR Inserted;               // offset: 0x1c ordinal: 0x3
  CHAR TrackedStackLocation;    // offset: 0x1d ordinal: 0x4
  USHORT CancelTimeoutTicks;    // offset: 0x1e ordinal: 0x5
} _VF_WATCHDOG_IRP;

// 0x80 bytes (sizeof)
typedef struct _IOV_IRP_TRACE {
  struct _IRP *Irp;         // offset: 0x0 ordinal: 0x0
  struct _KTHREAD *Thread;  // offset: 0x8 ordinal: 0x1
  SHORT KernelApcDisable;   // offset: 0x10 ordinal: 0x2
  SHORT SpecialApcDisable;  // offset: 0x12 ordinal: 0x3
  ULONG CombinedApcDisable; // offset: 0x10 ordinal: 0x4
  UCHAR Irql;               // offset: 0x14 ordinal: 0x5
  VOID *StackTrace[13];     // offset: 0x18 ordinal: 0x6
} _IOV_IRP_TRACE;

// 0x30 bytes (sizeof)
typedef struct _POP_IRP_WORKER_ENTRY {
  struct _LIST_ENTRY Link;       // offset: 0x0 ordinal: 0x0
  struct _ETHREAD *Thread;       // offset: 0x10 ordinal: 0x1
  struct _IRP *Irp;              // offset: 0x18 ordinal: 0x2
  struct _DEVICE_OBJECT *Device; // offset: 0x20 ordinal: 0x3
  UCHAR Static;                  // offset: 0x28 ordinal: 0x4
} _POP_IRP_WORKER_ENTRY;

typedef VOID (*__anon_2170)(VOID *, struct _IRP *);

// 0x38 bytes (sizeof)
typedef struct _WAITING_IRP {
  struct _LIST_ENTRY Links;                         // offset: 0x0 ordinal: 0x0
  struct _IRP *Irp;                                 // offset: 0x10 ordinal: 0x1
  VOID (*CompletionRoutine)(VOID *, struct _IRP *); // offset: 0x18 ordinal: 0x2
  VOID *Context;                                    // offset: 0x20 ordinal: 0x3
  struct _KEVENT *Event;                            // offset: 0x28 ordinal: 0x4
  ULONG Information;                                // offset: 0x30 ordinal: 0x5
  UCHAR BreakAllRH;                                 // offset: 0x34 ordinal: 0x6
} _WAITING_IRP;

// 0x20 bytes (sizeof)
typedef struct _TRIAGE_POP_IRP_DATA {
  struct _LIST_ENTRY Link;    // offset: 0x0 ordinal: 0x0
  struct _IRP *Irp;           // offset: 0x10 ordinal: 0x1
  struct _DEVICE_OBJECT *Pdo; // offset: 0x18 ordinal: 0x2
} _TRIAGE_POP_IRP_DATA;

// 0x38 bytes (sizeof)
typedef struct _TRIAGE_POP_FX_DEVICE {
  struct _LIST_ENTRY Link;                // offset: 0x0 ordinal: 0x0
  struct _IRP *Irp;                       // offset: 0x10 ordinal: 0x1
  struct _TRIAGE_POP_IRP_DATA *IrpData;   // offset: 0x18 ordinal: 0x2
  LONG Status;                            // offset: 0x20 ordinal: 0x3
  LONG PowerReqCall;                      // offset: 0x24 ordinal: 0x4
  LONG PowerNotReqCall;                   // offset: 0x28 ordinal: 0x5
  struct _TRIAGE_DEVICE_NODE *DeviceNode; // offset: 0x30 ordinal: 0x6
} _TRIAGE_POP_FX_DEVICE;

// 0x58 bytes (sizeof)
typedef struct _TRIAGE_DEVICE_NODE {
  struct _TRIAGE_DEVICE_NODE *Sibling;         // offset: 0x0 ordinal: 0x0
  struct _TRIAGE_DEVICE_NODE *Child;           // offset: 0x8 ordinal: 0x1
  struct _TRIAGE_DEVICE_NODE *Parent;          // offset: 0x10 ordinal: 0x2
  struct _TRIAGE_DEVICE_NODE *LastChild;       // offset: 0x18 ordinal: 0x3
  struct _DEVICE_OBJECT *PhysicalDeviceObject; // offset: 0x20 ordinal: 0x4
  struct _UNICODE_STRING InstancePath;         // offset: 0x28 ordinal: 0x5
  struct _UNICODE_STRING ServiceName;          // offset: 0x38 ordinal: 0x6
  struct _IRP *PendingIrp;                     // offset: 0x48 ordinal: 0x7
  struct _TRIAGE_POP_FX_DEVICE *FxDevice;      // offset: 0x50 ordinal: 0x8
} _TRIAGE_DEVICE_NODE;

// 0x40 bytes (sizeof)
typedef struct _POP_POLICY_DEVICE {
  struct _LIST_ENTRY Link;                  // offset: 0x0 ordinal: 0x0
  enum POWER_POLICY_DEVICE_TYPE DeviceType; // offset: 0x10 ordinal: 0x1
  VOID *Notification;                       // offset: 0x18 ordinal: 0x2
  struct _UNICODE_STRING Name;              // offset: 0x20 ordinal: 0x3
  struct _DEVICE_OBJECT *Device;            // offset: 0x30 ordinal: 0x4
  struct _IRP *Irp;                         // offset: 0x38 ordinal: 0x5
} _POP_POLICY_DEVICE;

// 0x200 bytes (sizeof)
typedef struct _IOV_FORCED_PENDING_TRACE {
  struct _IRP *Irp;        // offset: 0x0 ordinal: 0x0
  struct _ETHREAD *Thread; // offset: 0x8 ordinal: 0x1
  VOID *StackTrace[62];    // offset: 0x10 ordinal: 0x2
} _IOV_FORCED_PENDING_TRACE;

// 0x70 bytes (sizeof)
typedef struct _PENDING_RELATIONS_LIST_ENTRY {
  struct _LIST_ENTRY Link;                     // offset: 0x0 ordinal: 0x0
  struct _WORK_QUEUE_ITEM WorkItem;            // offset: 0x10 ordinal: 0x1
  struct _PNP_DEVICE_EVENT_ENTRY *DeviceEvent; // offset: 0x30 ordinal: 0x2
  struct _DEVICE_OBJECT *DeviceObject;         // offset: 0x38 ordinal: 0x3
  struct _RELATION_LIST *RelationsList;        // offset: 0x40 ordinal: 0x4
  struct _IRP *EjectIrp;                       // offset: 0x48 ordinal: 0x5
  enum IRPLOCK Lock;                           // offset: 0x50 ordinal: 0x6
  ULONG Problem;                               // offset: 0x54 ordinal: 0x7
  UCHAR ProfileChangingEject;                  // offset: 0x58 ordinal: 0x8
  UCHAR DisplaySafeRemovalDialog;              // offset: 0x59 ordinal: 0x9
  enum _SYSTEM_POWER_STATE LightestSleepState; // offset: 0x5c ordinal: 0xa
  struct DOCK_INTERFACE *DockInterface;        // offset: 0x60 ordinal: 0xb
  UCHAR DequeuePending;                        // offset: 0x68 ordinal: 0xc
  enum _PNP_DEVICE_DELETE_TYPE DeleteType;     // offset: 0x6c ordinal: 0xd
} _PENDING_RELATIONS_LIST_ENTRY;

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

typedef LONG (*__anon_672)(struct _DEVICE_OBJECT *, struct _IRP *, VOID *);

// 0x48 bytes (sizeof)
typedef struct _IO_STACK_LOCATION {
  UCHAR MajorFunction;                 // offset: 0x0 ordinal: 0x0
  UCHAR MinorFunction;                 // offset: 0x1 ordinal: 0x1
  UCHAR Flags;                         // offset: 0x2 ordinal: 0x2
  UCHAR Control;                       // offset: 0x3 ordinal: 0x3
  union __anon_612 Parameters;         // offset: 0x8 ordinal: 0x4
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x28 ordinal: 0x5
  struct _FILE_OBJECT *FileObject;     // offset: 0x30 ordinal: 0x6
  LONG(*CompletionRoutine)
  (struct _DEVICE_OBJECT *, struct _IRP *, VOID *); // offset: 0x38 ordinal: 0x7
  VOID *Context;                                    // offset: 0x40 ordinal: 0x8
} _IO_STACK_LOCATION;

typedef UCHAR (*__anon_579)(struct _IRP *,
                            struct _FILE_NETWORK_OPEN_INFORMATION *,
                            struct _DEVICE_OBJECT *);

typedef LONG (*__anon_548)(struct _DEVICE_OBJECT *, struct _IRP *);

typedef enum _IO_ALLOCATION_ACTION (*__anon_523)(struct _DEVICE_OBJECT *,
                                                 struct _IRP *, VOID *, VOID *);

typedef VOID (*__anon_516)(struct _DEVICE_OBJECT *, struct _IRP *);

// 0x8 bytes (sizeof)
typedef union _ULARGE_INTEGER {
  ULONG LowPart;      // offset: 0x0 ordinal: 0x0
  ULONG HighPart;     // offset: 0x4 ordinal: 0x1
  struct __anon_35 u; // offset: 0x0 ordinal: 0x2
  ULONGLONG QuadPart; // offset: 0x0 ordinal: 0x3
} _ULARGE_INTEGER;

// 0x20 bytes (sizeof)
typedef struct _KERNEL_STACK_SEGMENT {
  ULONGLONG StackBase;    // offset: 0x0 ordinal: 0x0
  ULONGLONG StackLimit;   // offset: 0x8 ordinal: 0x1
  ULONGLONG KernelStack;  // offset: 0x10 ordinal: 0x2
  ULONGLONG InitialStack; // offset: 0x18 ordinal: 0x3
} _KERNEL_STACK_SEGMENT;

// 0x30 bytes (sizeof)
typedef struct _KSTACK_CONTROL {
  ULONGLONG StackBase; // offset: 0x0 ordinal: 0x0
  union {
    ULONGLONG ActualLimit;        // offset: 0x8 ordinal: 0x1
    ULONGLONG StackExpansion : 1; // offset: 0x8 ordinal: 0x2
  };
  struct _KERNEL_STACK_SEGMENT Previous; // offset: 0x10 ordinal: 0x3
} _KSTACK_CONTROL;

typedef VOID (*__anon_432)(ULONGLONG, ULONG *);

// 0x20 bytes (sizeof)
typedef struct _PROC_IDLE_STATE_BUCKET {
  ULONGLONG TotalTime; // offset: 0x0 ordinal: 0x0
  ULONGLONG MinTime;   // offset: 0x8 ordinal: 0x1
  ULONGLONG MaxTime;   // offset: 0x10 ordinal: 0x2
  ULONG Count;         // offset: 0x18 ordinal: 0x3
} _PROC_IDLE_STATE_BUCKET;

// 0x70 bytes (sizeof)
typedef struct _PPM_SELECTION_STATISTICS {
  ULONGLONG SelectedCount;              // offset: 0x0 ordinal: 0x0
  ULONGLONG VetoCount;                  // offset: 0x8 ordinal: 0x1
  ULONGLONG PreVetoCount;               // offset: 0x10 ordinal: 0x2
  ULONGLONG WrongProcessorCount;        // offset: 0x18 ordinal: 0x3
  ULONGLONG LatencyCount;               // offset: 0x20 ordinal: 0x4
  ULONGLONG IdleDurationCount;          // offset: 0x28 ordinal: 0x5
  ULONGLONG DeviceDependencyCount;      // offset: 0x30 ordinal: 0x6
  ULONGLONG ProcessorDependencyCount;   // offset: 0x38 ordinal: 0x7
  ULONGLONG PlatformOnlyCount;          // offset: 0x40 ordinal: 0x8
  ULONGLONG InterruptibleCount;         // offset: 0x48 ordinal: 0x9
  ULONGLONG LegacyOverrideCount;        // offset: 0x50 ordinal: 0xa
  ULONGLONG CstateCheckCount;           // offset: 0x58 ordinal: 0xb
  ULONGLONG NoCStateCount;              // offset: 0x60 ordinal: 0xc
  ULONGLONG CoordinatedDependencyCount; // offset: 0x68 ordinal: 0xd
} _PPM_SELECTION_STATISTICS;

// 0x3e0 bytes (sizeof)
typedef struct _PLATFORM_IDLE_STATE_ACCOUNTING {
  ULONG CancelCount;        // offset: 0x0 ordinal: 0x0
  ULONG FailureCount;       // offset: 0x4 ordinal: 0x1
  ULONG SuccessCount;       // offset: 0x8 ordinal: 0x2
  ULONGLONG MaxTime;        // offset: 0x10 ordinal: 0x3
  ULONGLONG MinTime;        // offset: 0x18 ordinal: 0x4
  ULONGLONG TotalTime;      // offset: 0x20 ordinal: 0x5
  ULONG InvalidBucketIndex; // offset: 0x28 ordinal: 0x6
  struct _PPM_SELECTION_STATISTICS
      SelectionStatistics; // offset: 0x30 ordinal: 0x7
  struct _PROC_IDLE_STATE_BUCKET
      IdleTimeBuckets[26]; // offset: 0xa0 ordinal: 0x8
} _PLATFORM_IDLE_STATE_ACCOUNTING;

// 0x3f8 bytes (sizeof)
typedef struct _PLATFORM_IDLE_ACCOUNTING {
  ULONG ResetCount;                                // offset: 0x0 ordinal: 0x0
  ULONG StateCount;                                // offset: 0x4 ordinal: 0x1
  enum PPM_IDLE_BUCKET_TIME_TYPE TimeUnit;         // offset: 0x8 ordinal: 0x2
  ULONGLONG StartTime;                             // offset: 0x10 ordinal: 0x3
  struct _PLATFORM_IDLE_STATE_ACCOUNTING State[1]; // offset: 0x18 ordinal: 0x4
} _PLATFORM_IDLE_ACCOUNTING;

// 0x18 bytes (sizeof)
typedef struct _COUNTER_READING {
  enum _HARDWARE_COUNTER_TYPE Type; // offset: 0x0 ordinal: 0x0
  ULONG Index;                      // offset: 0x4 ordinal: 0x1
  ULONGLONG Start;                  // offset: 0x8 ordinal: 0x2
  ULONGLONG Total;                  // offset: 0x10 ordinal: 0x3
} _COUNTER_READING;

// 0x1c0 bytes (sizeof)
typedef struct _THREAD_PERFORMANCE_DATA {
  USHORT Size;                              // offset: 0x0 ordinal: 0x0
  USHORT Version;                           // offset: 0x2 ordinal: 0x1
  struct _PROCESSOR_NUMBER ProcessorNumber; // offset: 0x4 ordinal: 0x2
  ULONG ContextSwitches;                    // offset: 0x8 ordinal: 0x3
  ULONG HwCountersCount;                    // offset: 0xc ordinal: 0x4
  ULONGLONG UpdateCount;                    // offset: 0x10 ordinal: 0x5
  ULONGLONG WaitReasonBitMap;               // offset: 0x18 ordinal: 0x6
  ULONGLONG HardwareCounters;               // offset: 0x20 ordinal: 0x7
  struct _COUNTER_READING CycleTime;        // offset: 0x28 ordinal: 0x8
  struct _COUNTER_READING HwCounters[16];   // offset: 0x40 ordinal: 0x9
} _THREAD_PERFORMANCE_DATA;

typedef VOID (*__anon_409)(ULONGLONG, ULONGLONG, ULONG, ULONG, ULONG, UCHAR,
                           UCHAR, UCHAR);

typedef VOID (*__anon_407)(ULONGLONG);

typedef VOID (*__anon_406)(ULONGLONG, ULONG);

// 0x3d8 bytes (sizeof)
typedef struct _PROC_IDLE_STATE_ACCOUNTING {
  ULONGLONG TotalTime;      // offset: 0x0 ordinal: 0x0
  ULONG CancelCount;        // offset: 0x8 ordinal: 0x1
  ULONG FailureCount;       // offset: 0xc ordinal: 0x2
  ULONG SuccessCount;       // offset: 0x10 ordinal: 0x3
  ULONG InvalidBucketIndex; // offset: 0x14 ordinal: 0x4
  ULONGLONG MinTime;        // offset: 0x18 ordinal: 0x5
  ULONGLONG MaxTime;        // offset: 0x20 ordinal: 0x6
  struct _PPM_SELECTION_STATISTICS
      SelectionStatistics; // offset: 0x28 ordinal: 0x7
  struct _PROC_IDLE_STATE_BUCKET
      IdleTimeBuckets[26]; // offset: 0x98 ordinal: 0x8
} _PROC_IDLE_STATE_ACCOUNTING;

// 0x30 bytes (sizeof)
typedef struct _PROCESSOR_IDLE_CONSTRAINTS {
  ULONGLONG TotalTime;            // offset: 0x0 ordinal: 0x0
  ULONGLONG IdleTime;             // offset: 0x8 ordinal: 0x1
  ULONGLONG ExpectedIdleDuration; // offset: 0x10 ordinal: 0x2
  ULONGLONG MaxIdleDuration;      // offset: 0x18 ordinal: 0x3
  ULONG OverrideState;            // offset: 0x20 ordinal: 0x4
  ULONG TimeCheck;                // offset: 0x24 ordinal: 0x5
  UCHAR PromotePercent;           // offset: 0x28 ordinal: 0x6
  UCHAR DemotePercent;            // offset: 0x29 ordinal: 0x7
  UCHAR Parked;                   // offset: 0x2a ordinal: 0x8
  UCHAR Interruptible;            // offset: 0x2b ordinal: 0x9
  UCHAR PlatformIdle;             // offset: 0x2c ordinal: 0xa
  UCHAR ExpectedWakeReason;       // offset: 0x2d ordinal: 0xb
} _PROCESSOR_IDLE_CONSTRAINTS;

typedef ULONG (*__anon_392)(VOID *, struct _PROCESSOR_IDLE_CONSTRAINTS *);

// 0x58 bytes (sizeof)
typedef struct _PROCESSOR_IDLE_PREPARE_INFO {
  VOID *Context;                                  // offset: 0x0 ordinal: 0x0
  struct _PROCESSOR_IDLE_CONSTRAINTS Constraints; // offset: 0x8 ordinal: 0x1
  ULONG DependencyCount;                          // offset: 0x38 ordinal: 0x2
  ULONG DependencyUsed;                           // offset: 0x3c ordinal: 0x3
  struct _PROCESSOR_IDLE_DEPENDENCY
      *DependencyArray;          // offset: 0x40 ordinal: 0x4
  ULONG PlatformIdleStateIndex;  // offset: 0x48 ordinal: 0x5
  ULONG ProcessorIdleStateIndex; // offset: 0x4c ordinal: 0x6
  ULONG IdleSelectFailureMask;   // offset: 0x50 ordinal: 0x7
} _PROCESSOR_IDLE_PREPARE_INFO;

typedef VOID (*__anon_390)(struct _PROCESSOR_IDLE_PREPARE_INFO *);

// 0x10 bytes (sizeof)
typedef struct _KLOCK_ENTRY_LOCK_STATE {
  ULONGLONG CrossThreadReleasable : 1; // offset: 0x0 ordinal: 0x0
  ULONGLONG Busy : 1;                  // offset: 0x0 ordinal: 0x1
  ULONGLONG Reserved : 61;             // offset: 0x0 ordinal: 0x2
  ULONGLONG InTree : 1;                // offset: 0x0 ordinal: 0x3
  VOID *LockState;                     // offset: 0x0 ordinal: 0x4
  union {
    VOID *SessionState; // offset: 0x8 ordinal: 0x5
    ULONG SessionId;    // offset: 0x8 ordinal: 0x6
  };
  ULONG SessionPad; // offset: 0xc ordinal: 0x7
} _KLOCK_ENTRY_LOCK_STATE;

// 0x3b0 bytes (sizeof)
typedef struct PO_MEMORY_IMAGE {
  ULONG Signature;                           // offset: 0x0 ordinal: 0x0
  ULONG ImageType;                           // offset: 0x4 ordinal: 0x1
  ULONG CheckSum;                            // offset: 0x8 ordinal: 0x2
  ULONG LengthSelf;                          // offset: 0xc ordinal: 0x3
  ULONGLONG PageSelf;                        // offset: 0x10 ordinal: 0x4
  ULONG PageSize;                            // offset: 0x18 ordinal: 0x5
  union _LARGE_INTEGER SystemTime;           // offset: 0x20 ordinal: 0x6
  ULONGLONG InterruptTime;                   // offset: 0x28 ordinal: 0x7
  ULONGLONG FeatureFlags;                    // offset: 0x30 ordinal: 0x8
  UCHAR HiberFlags;                          // offset: 0x38 ordinal: 0x9
  UCHAR spare[3];                            // offset: 0x39 ordinal: 0xa
  ULONG NoHiberPtes;                         // offset: 0x3c ordinal: 0xb
  ULONGLONG HiberVa;                         // offset: 0x40 ordinal: 0xc
  ULONG NoFreePages;                         // offset: 0x48 ordinal: 0xd
  ULONG FreeMapCheck;                        // offset: 0x4c ordinal: 0xe
  ULONG WakeCheck;                           // offset: 0x50 ordinal: 0xf
  ULONGLONG NumPagesForLoader;               // offset: 0x58 ordinal: 0x10
  ULONGLONG FirstSecureRestorePage;          // offset: 0x60 ordinal: 0x11
  ULONGLONG FirstBootRestorePage;            // offset: 0x68 ordinal: 0x12
  ULONGLONG FirstKernelRestorePage;          // offset: 0x70 ordinal: 0x13
  ULONGLONG FirstChecksumRestorePage;        // offset: 0x78 ordinal: 0x14
  ULONGLONG NoChecksumEntries;               // offset: 0x80 ordinal: 0x15
  struct _PO_HIBER_PERF PerfInfo;            // offset: 0x88 ordinal: 0x16
  ULONG FirmwareRuntimeInformationPages;     // offset: 0x268 ordinal: 0x17
  ULONGLONG FirmwareRuntimeInformation[1];   // offset: 0x270 ordinal: 0x18
  ULONG SiLogOffset;                         // offset: 0x278 ordinal: 0x19
  ULONG NoBootLoaderLogPages;                // offset: 0x27c ordinal: 0x1a
  ULONGLONG BootLoaderLogPages[24];          // offset: 0x280 ordinal: 0x1b
  ULONG NotUsed;                             // offset: 0x340 ordinal: 0x1c
  ULONG ResumeContextCheck;                  // offset: 0x344 ordinal: 0x1d
  ULONG ResumeContextPages;                  // offset: 0x348 ordinal: 0x1e
  UCHAR Hiberboot;                           // offset: 0x34c ordinal: 0x1f
  ULONGLONG HvCr3;                           // offset: 0x350 ordinal: 0x20
  ULONGLONG HvEntryPoint;                    // offset: 0x358 ordinal: 0x21
  ULONGLONG HvReservedTransitionAddress;     // offset: 0x360 ordinal: 0x22
  ULONGLONG HvReservedTransitionAddressSize; // offset: 0x368 ordinal: 0x23
  ULONGLONG BootFlags;                       // offset: 0x370 ordinal: 0x24
  ULONGLONG HalEntryPointPhysical;           // offset: 0x378 ordinal: 0x25
  ULONGLONG HighestPhysicalPage;             // offset: 0x380 ordinal: 0x26
  ULONGLONG BitlockerKeyPfns[4];             // offset: 0x388 ordinal: 0x27
  ULONG HardwareSignature;                   // offset: 0x3a8 ordinal: 0x28
} PO_MEMORY_IMAGE;

// 0x50 bytes (sizeof)
typedef union __anon_2175 {
  struct _CELL_DATA CellData; // offset: 0x0 ordinal: 0x0
  ULONGLONG List[1];          // offset: 0x0 ordinal: 0x1
} __anon_2175;

// 0x58 bytes (sizeof)
typedef struct _CM_CACHED_VALUE_INDEX {
  ULONG CellIndex;        // offset: 0x0 ordinal: 0x0
  union __anon_2175 Data; // offset: 0x8 ordinal: 0x1
} _CM_CACHED_VALUE_INDEX;

typedef VOID *(*__anon_338)(enum _POOL_TYPE, ULONGLONG, ULONG);

// 0x10 bytes (sizeof)
typedef struct _KHETERO_PROCESSOR_SET {
  ULONGLONG PreferredMask; // offset: 0x0 ordinal: 0x0
  ULONGLONG AvailableMask; // offset: 0x8 ordinal: 0x1
} _KHETERO_PROCESSOR_SET;

// 0x1a8 bytes (sizeof)
typedef struct _KTHREAD_COUNTERS {
  ULONGLONG WaitReasonBitMap;                // offset: 0x0 ordinal: 0x0
  struct _THREAD_PERFORMANCE_DATA *UserData; // offset: 0x8 ordinal: 0x1
  ULONG Flags;                               // offset: 0x10 ordinal: 0x2
  ULONG ContextSwitches;                     // offset: 0x14 ordinal: 0x3
  ULONGLONG CycleTimeBias;                   // offset: 0x18 ordinal: 0x4
  ULONGLONG HardwareCounters;                // offset: 0x20 ordinal: 0x5
  struct _COUNTER_READING HwCounter[16];     // offset: 0x28 ordinal: 0x6
} _KTHREAD_COUNTERS;

// 0x40 bytes (sizeof)
typedef struct _XSAVE_AREA_HEADER {
  ULONGLONG Mask;           // offset: 0x0 ordinal: 0x0
  ULONGLONG CompactionMask; // offset: 0x8 ordinal: 0x1
  ULONGLONG Reserved2[6];   // offset: 0x10 ordinal: 0x2
} _XSAVE_AREA_HEADER;

// 0x60 bytes (sizeof)
typedef struct _PEBS_DS_SAVE_AREA {
  ULONGLONG BtsBufferBase;          // offset: 0x0 ordinal: 0x0
  ULONGLONG BtsIndex;               // offset: 0x8 ordinal: 0x1
  ULONGLONG BtsAbsoluteMaximum;     // offset: 0x10 ordinal: 0x2
  ULONGLONG BtsInterruptThreshold;  // offset: 0x18 ordinal: 0x3
  ULONGLONG PebsBufferBase;         // offset: 0x20 ordinal: 0x4
  ULONGLONG PebsIndex;              // offset: 0x28 ordinal: 0x5
  ULONGLONG PebsAbsoluteMaximum;    // offset: 0x30 ordinal: 0x6
  ULONGLONG PebsInterruptThreshold; // offset: 0x38 ordinal: 0x7
  ULONGLONG PebsCounterReset0;      // offset: 0x40 ordinal: 0x8
  ULONGLONG PebsCounterReset1;      // offset: 0x48 ordinal: 0x9
  ULONGLONG PebsCounterReset2;      // offset: 0x50 ordinal: 0xa
  ULONGLONG PebsCounterReset3;      // offset: 0x58 ordinal: 0xb
} _PEBS_DS_SAVE_AREA;

// 0x60 bytes (sizeof)
typedef struct _PROCESSOR_PROFILE_CONTROL_AREA {
  struct _PEBS_DS_SAVE_AREA PebsDsSaveArea; // offset: 0x0 ordinal: 0x0
} _PROCESSOR_PROFILE_CONTROL_AREA;

// 0x28 bytes (sizeof)
typedef struct _PPM_CONCURRENCY_ACCOUNTING {
  ULONGLONG Lock;               // offset: 0x0 ordinal: 0x0
  ULONG Processors;             // offset: 0x8 ordinal: 0x1
  ULONG ActiveProcessors;       // offset: 0xc ordinal: 0x2
  ULONGLONG LastUpdateTime;     // offset: 0x10 ordinal: 0x3
  ULONGLONG TotalTime;          // offset: 0x18 ordinal: 0x4
  ULONGLONG AccumulatedTime[1]; // offset: 0x20 ordinal: 0x5
} _PPM_CONCURRENCY_ACCOUNTING;

// 0x400 bytes (sizeof)
typedef struct _PROC_IDLE_ACCOUNTING {
  ULONG StateCount;                            // offset: 0x0 ordinal: 0x0
  ULONG TotalTransitions;                      // offset: 0x4 ordinal: 0x1
  ULONG ResetCount;                            // offset: 0x8 ordinal: 0x2
  ULONG AbortCount;                            // offset: 0xc ordinal: 0x3
  ULONGLONG StartTime;                         // offset: 0x10 ordinal: 0x4
  ULONGLONG PriorIdleTime;                     // offset: 0x18 ordinal: 0x5
  enum PPM_IDLE_BUCKET_TIME_TYPE TimeUnit;     // offset: 0x20 ordinal: 0x6
  struct _PROC_IDLE_STATE_ACCOUNTING State[1]; // offset: 0x28 ordinal: 0x7
} _PROC_IDLE_ACCOUNTING;

// 0x10 bytes (sizeof)
typedef struct _GROUP_AFFINITY {
  ULONGLONG Mask;     // offset: 0x0 ordinal: 0x0
  USHORT Group;       // offset: 0x8 ordinal: 0x1
  USHORT Reserved[3]; // offset: 0xa ordinal: 0x2
} _GROUP_AFFINITY;

// 0x40 bytes (sizeof)
typedef struct _REQUEST_MAILBOX {
  struct _REQUEST_MAILBOX *Next;         // offset: 0x0 ordinal: 0x0
  ULONGLONG RequestSummary;              // offset: 0x8 ordinal: 0x1
  struct _KREQUEST_PACKET RequestPacket; // offset: 0x10 ordinal: 0x2
  LONG *NodeTargetCountAddr;             // offset: 0x30 ordinal: 0x3
  LONG NodeTargetCount;                  // offset: 0x38 ordinal: 0x4
} _REQUEST_MAILBOX;

// 0x10 bytes (sizeof)
typedef struct _KTIMER_EXPIRATION_TRACE {
  ULONGLONG InterruptTime;                 // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER PerformanceCounter; // offset: 0x8 ordinal: 0x1
} _KTIMER_EXPIRATION_TRACE;

// 0x150 bytes (sizeof)
typedef struct _POP_THERMAL_TELEMETRY_TRACKER {
  UCHAR AccountingDisabled;        // offset: 0x0 ordinal: 0x0
  ULONGLONG LastPassiveUpdateTime; // offset: 0x8 ordinal: 0x1
  ULONGLONG TotalPassiveTime[20];  // offset: 0x10 ordinal: 0x2
  ULONGLONG PassiveTimeSnap[20];   // offset: 0xb0 ordinal: 0x3
} _POP_THERMAL_TELEMETRY_TRACKER;

// 0xa8 bytes (sizeof)
typedef struct _KAFFINITY_EX {
  USHORT Count;         // offset: 0x0 ordinal: 0x0
  USHORT Size;          // offset: 0x2 ordinal: 0x1
  ULONG Reserved;       // offset: 0x4 ordinal: 0x2
  ULONGLONG Bitmap[20]; // offset: 0x8 ordinal: 0x3
} _KAFFINITY_EX;

// 0x180 bytes (sizeof)
typedef struct _PPM_PLATFORM_STATE {
  ULONG Latency;                              // offset: 0x0 ordinal: 0x0
  ULONG BreakEvenDuration;                    // offset: 0x4 ordinal: 0x1
  struct _PPM_VETO_ACCOUNTING VetoAccounting; // offset: 0x8 ordinal: 0x2
  UCHAR TransitionDebugger;                   // offset: 0x30 ordinal: 0x3
  UCHAR Platform;                             // offset: 0x31 ordinal: 0x4
  ULONG DependencyListCount;                  // offset: 0x34 ordinal: 0x5
  struct _KAFFINITY_EX Processors;            // offset: 0x38 ordinal: 0x6
  struct _UNICODE_STRING Name;                // offset: 0xe0 ordinal: 0x7
  struct _PPM_SELECTION_DEPENDENCY
      *DependencyLists; // offset: 0xf0 ordinal: 0x8
  union _PPM_COORDINATED_SYNCHRONIZATION
      Synchronization; // offset: 0xf8 ordinal: 0x9
  ULONGLONG EnterTime; // offset: 0x100 ordinal: 0xa
  union {
    LONG RefCount;         // offset: 0x140 ordinal: 0xb
    UCHAR CacheAlign0[64]; // offset: 0x140 ordinal: 0xc
  };
} _PPM_PLATFORM_STATE;

// 0x1c0 bytes (sizeof)
typedef struct _PPM_PLATFORM_STATES {
  ULONG StateCount;                        // offset: 0x0 ordinal: 0x0
  ULONG InterfaceVersion;                  // offset: 0x4 ordinal: 0x1
  ULONG ProcessorCount;                    // offset: 0x8 ordinal: 0x2
  UCHAR CoordinatedInterface;              // offset: 0xc ordinal: 0x3
  ULONG (*IdleTest)(VOID *, ULONG, ULONG); // offset: 0x10 ordinal: 0x4
  LONG(*IdlePreExecute)
  (VOID *, ULONG, ULONG, ULONG, ULONG *); // offset: 0x18 ordinal: 0x5
  VOID(*IdleComplete)
  (VOID *, ULONG, ULONG, ULONG, ULONG *); // offset: 0x20 ordinal: 0x6
  LONG(*QueryPlatformStateResidency)
  (VOID *,
   struct _PROCESSOR_PLATFORM_STATE_RESIDENCIES *); // offset: 0x28 ordinal: 0x7
  struct _PLATFORM_IDLE_ACCOUNTING *Accounting;     // offset: 0x30 ordinal: 0x8
  struct _PPM_PLATFORM_STATE State[1];              // offset: 0x40 ordinal: 0x9
} _PPM_PLATFORM_STATES;

// 0xf8 bytes (sizeof)
typedef struct _PPM_IDLE_STATE {
  struct _KAFFINITY_EX DomainMembers;         // offset: 0x0 ordinal: 0x0
  struct _UNICODE_STRING Name;                // offset: 0xa8 ordinal: 0x1
  ULONG Latency;                              // offset: 0xb8 ordinal: 0x2
  ULONG BreakEvenDuration;                    // offset: 0xbc ordinal: 0x3
  ULONG Power;                                // offset: 0xc0 ordinal: 0x4
  ULONG StateFlags;                           // offset: 0xc4 ordinal: 0x5
  struct _PPM_VETO_ACCOUNTING VetoAccounting; // offset: 0xc8 ordinal: 0x6
  UCHAR StateType;                            // offset: 0xf0 ordinal: 0x7
  UCHAR InterruptsEnabled;                    // offset: 0xf1 ordinal: 0x8
  UCHAR Interruptible;                        // offset: 0xf2 ordinal: 0x9
  UCHAR ContextRetained;                      // offset: 0xf3 ordinal: 0xa
  UCHAR CacheCoherent;                        // offset: 0xf4 ordinal: 0xb
  UCHAR WakesSpuriously;                      // offset: 0xf5 ordinal: 0xc
  UCHAR PlatformOnly;                         // offset: 0xf6 ordinal: 0xd
  UCHAR NoCState;                             // offset: 0xf7 ordinal: 0xe
} _PPM_IDLE_STATE;

// 0x2d8 bytes (sizeof)
typedef struct _KPROCESS {
  struct _DISPATCHER_HEADER Header;           // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY ProfileListHead;         // offset: 0x18 ordinal: 0x1
  ULONGLONG DirectoryTableBase;               // offset: 0x28 ordinal: 0x2
  struct _LIST_ENTRY ThreadListHead;          // offset: 0x30 ordinal: 0x3
  ULONG ProcessLock;                          // offset: 0x40 ordinal: 0x4
  ULONG Spare0;                               // offset: 0x44 ordinal: 0x5
  ULONGLONG DeepFreezeStartTime;              // offset: 0x48 ordinal: 0x6
  struct _KAFFINITY_EX Affinity;              // offset: 0x50 ordinal: 0x7
  struct _LIST_ENTRY ReadyListHead;           // offset: 0xf8 ordinal: 0x8
  struct _SINGLE_LIST_ENTRY SwapListEntry;    // offset: 0x108 ordinal: 0x9
  struct _KAFFINITY_EX ActiveProcessors;      // offset: 0x110 ordinal: 0xa
  LONG AutoAlignment : 1;                     // offset: 0x1b8 ordinal: 0xb
  LONG DisableBoost : 1;                      // offset: 0x1b8 ordinal: 0xc
  LONG DisableQuantum : 1;                    // offset: 0x1b8 ordinal: 0xd
  ULONG DeepFreeze : 1;                       // offset: 0x1b8 ordinal: 0xe
  ULONG TimerVirtualization : 1;              // offset: 0x1b8 ordinal: 0xf
  ULONG CheckStackExtents : 1;                // offset: 0x1b8 ordinal: 0x10
  ULONG SpareFlags0 : 2;                      // offset: 0x1b8 ordinal: 0x11
  ULONG ActiveGroupsMask : 20;                // offset: 0x1b8 ordinal: 0x12
  LONG ReservedFlags : 4;                     // offset: 0x1b8 ordinal: 0x13
  LONG ProcessFlags;                          // offset: 0x1b8 ordinal: 0x14
  CHAR BasePriority;                          // offset: 0x1bc ordinal: 0x15
  CHAR QuantumReset;                          // offset: 0x1bd ordinal: 0x16
  UCHAR Visited;                              // offset: 0x1be ordinal: 0x17
  union _KEXECUTE_OPTIONS Flags;              // offset: 0x1bf ordinal: 0x18
  ULONG ThreadSeed[20];                       // offset: 0x1c0 ordinal: 0x19
  USHORT IdealNode[20];                       // offset: 0x210 ordinal: 0x1a
  USHORT IdealGlobalNode;                     // offset: 0x238 ordinal: 0x1b
  USHORT Spare1;                              // offset: 0x23a ordinal: 0x1c
  union _KSTACK_COUNT StackCount;             // offset: 0x23c ordinal: 0x1d
  struct _LIST_ENTRY ProcessListEntry;        // offset: 0x240 ordinal: 0x1e
  ULONGLONG CycleTime;                        // offset: 0x250 ordinal: 0x1f
  ULONGLONG ContextSwitches;                  // offset: 0x258 ordinal: 0x20
  struct _KSCHEDULING_GROUP *SchedulingGroup; // offset: 0x260 ordinal: 0x21
  ULONG FreezeCount;                          // offset: 0x268 ordinal: 0x22
  ULONG KernelTime;                           // offset: 0x26c ordinal: 0x23
  ULONG UserTime;                             // offset: 0x270 ordinal: 0x24
  USHORT LdtFreeSelectorHint;                 // offset: 0x274 ordinal: 0x25
  USHORT LdtTableLength;                      // offset: 0x276 ordinal: 0x26
  union _KGDTENTRY64 LdtSystemDescriptor;     // offset: 0x278 ordinal: 0x27
  VOID *LdtBaseAddress;                       // offset: 0x288 ordinal: 0x28
  struct _FAST_MUTEX LdtProcessLock;          // offset: 0x290 ordinal: 0x29
  VOID *InstrumentationCallback;              // offset: 0x2c8 ordinal: 0x2a
  ULONGLONG SecurePid;                        // offset: 0x2d0 ordinal: 0x2b
} _KPROCESS;

// 0x30 bytes (sizeof)
typedef struct _KAPC_STATE {
  struct _LIST_ENTRY ApcListHead[2]; // offset: 0x0 ordinal: 0x0
  struct _KPROCESS *Process;         // offset: 0x20 ordinal: 0x1
  union {
    UCHAR InProgressFlags;         // offset: 0x28 ordinal: 0x2
    UCHAR KernelApcInProgress : 1; // offset: 0x28 ordinal: 0x3
  };
  UCHAR SpecialApcInProgress : 1; // offset: 0x28 ordinal: 0x4
  UCHAR KernelApcPending;         // offset: 0x29 ordinal: 0x5
  UCHAR UserApcPending;           // offset: 0x2a ordinal: 0x6
} _KAPC_STATE;

// 0x418 bytes (sizeof)
typedef struct _PPM_IDLE_STATES {
  UCHAR InterfaceVersion;                      // offset: 0x0 ordinal: 0x0
  UCHAR ForceIdle;                             // offset: 0x1 ordinal: 0x1
  UCHAR EstimateIdleDuration;                  // offset: 0x2 ordinal: 0x2
  UCHAR ExitLatencyTraceEnabled;               // offset: 0x3 ordinal: 0x3
  UCHAR NonInterruptibleTransition;            // offset: 0x4 ordinal: 0x4
  UCHAR UnaccountedTransition;                 // offset: 0x5 ordinal: 0x5
  UCHAR IdleDurationLimited;                   // offset: 0x6 ordinal: 0x6
  ULONG ExitLatencyCountdown;                  // offset: 0x8 ordinal: 0x7
  ULONG TargetState;                           // offset: 0xc ordinal: 0x8
  ULONG ActualState;                           // offset: 0x10 ordinal: 0x9
  ULONG OldState;                              // offset: 0x14 ordinal: 0xa
  ULONG OverrideIndex;                         // offset: 0x18 ordinal: 0xb
  ULONG ProcessorIdleCount;                    // offset: 0x1c ordinal: 0xc
  ULONG Type;                                  // offset: 0x20 ordinal: 0xd
  USHORT ReasonFlags;                          // offset: 0x24 ordinal: 0xe
  ULONGLONG InitiateWakeStamp;                 // offset: 0x28 ordinal: 0xf
  LONG PreviousStatus;                         // offset: 0x30 ordinal: 0x10
  ULONG PreviousCancelReason;                  // offset: 0x34 ordinal: 0x11
  struct _KAFFINITY_EX PrimaryProcessorMask;   // offset: 0x38 ordinal: 0x12
  struct _KAFFINITY_EX SecondaryProcessorMask; // offset: 0xe0 ordinal: 0x13
  VOID(*IdlePrepare)
  (struct _PROCESSOR_IDLE_PREPARE_INFO *); // offset: 0x188 ordinal: 0x14
  LONG(*IdlePreExecute)
  (VOID *, ULONG, ULONG, ULONG, ULONG *); // offset: 0x190 ordinal: 0x15
  LONG(*IdleExecute)
  (VOID *, ULONG, ULONG, ULONG, ULONG *); // offset: 0x198 ordinal: 0x16
  ULONG(*IdlePreselect)
  (VOID *, struct _PROCESSOR_IDLE_CONSTRAINTS *); // offset: 0x1a0 ordinal: 0x17
  ULONG (*IdleTest)(VOID *, ULONG, ULONG);        // offset: 0x1a8 ordinal: 0x18
  ULONG (*IdleAvailabilityCheck)(VOID *, ULONG);  // offset: 0x1b0 ordinal: 0x19
  VOID(*IdleComplete)
  (VOID *, ULONG, ULONG, ULONG, ULONG *); // offset: 0x1b8 ordinal: 0x1a
  VOID (*IdleCancel)(VOID *, ULONG);      // offset: 0x1c0 ordinal: 0x1b
  UCHAR (*IdleIsHalted)(VOID *);          // offset: 0x1c8 ordinal: 0x1c
  UCHAR (*IdleInitiateWake)(VOID *);      // offset: 0x1d0 ordinal: 0x1d
  struct _PROCESSOR_IDLE_PREPARE_INFO
      PrepareInfo;                               // offset: 0x1d8 ordinal: 0x1e
  struct _KAFFINITY_EX DeepIdleSnapshot;         // offset: 0x230 ordinal: 0x1f
  struct _PERFINFO_PPM_STATE_SELECTION *Tracing; // offset: 0x2d8 ordinal: 0x20
  struct _PERFINFO_PPM_STATE_SELECTION
      *CoordinatedTracing;                    // offset: 0x2e0 ordinal: 0x21
  struct _PPM_SELECTION_MENU ProcessorMenu;   // offset: 0x2e8 ordinal: 0x22
  struct _PPM_SELECTION_MENU CoordinatedMenu; // offset: 0x2f8 ordinal: 0x23
  struct _PPM_COORDINATED_SELECTION
      CoordinatedSelection;        // offset: 0x308 ordinal: 0x24
  struct _PPM_IDLE_STATE State[1]; // offset: 0x320 ordinal: 0x25
} _PPM_IDLE_STATES;

// 0x10 bytes (sizeof)
typedef struct __anon_250 {
  ULONGLONG Depth : 16;     // offset: 0x0 ordinal: 0x0
  ULONGLONG Sequence : 48;  // offset: 0x0 ordinal: 0x1
  ULONGLONG Reserved : 4;   // offset: 0x8 ordinal: 0x2
  ULONGLONG NextEntry : 60; // offset: 0x8 ordinal: 0x3
} __anon_250;

// 0x10 bytes (sizeof)
typedef struct _PROC_IDLE_SNAP {
  ULONGLONG Time; // offset: 0x0 ordinal: 0x0
  ULONGLONG Idle; // offset: 0x8 ordinal: 0x1
} _PROC_IDLE_SNAP;

// 0x20 bytes (sizeof)
typedef struct _PPM_FFH_THROTTLE_STATE_INFO {
  UCHAR EnableLogging;                   // offset: 0x0 ordinal: 0x0
  ULONG MismatchCount;                   // offset: 0x4 ordinal: 0x1
  UCHAR Initialized;                     // offset: 0x8 ordinal: 0x2
  ULONGLONG LastValue;                   // offset: 0x10 ordinal: 0x3
  union _LARGE_INTEGER LastLogTickCount; // offset: 0x18 ordinal: 0x4
} _PPM_FFH_THROTTLE_STATE_INFO;

// 0x100 bytes (sizeof)
typedef struct _KNODE {
  ULONGLONG IdleNonParkedCpuSet; // offset: 0x0 ordinal: 0x0
  ULONGLONG IdleSmtSet;          // offset: 0x8 ordinal: 0x1
  ULONGLONG IdleCpuSet;          // offset: 0x10 ordinal: 0x2
  ULONGLONG DeepIdleSet;         // offset: 0x40 ordinal: 0x3
  ULONGLONG IdleConstrainedSet;  // offset: 0x48 ordinal: 0x4
  ULONGLONG NonParkedSet;        // offset: 0x50 ordinal: 0x5
  LONG ParkLock;                 // offset: 0x58 ordinal: 0x6
  ULONG Seed;                    // offset: 0x5c ordinal: 0x7
  ULONG SiblingMask;             // offset: 0x80 ordinal: 0x8
  union {
    struct _GROUP_AFFINITY Affinity; // offset: 0x88 ordinal: 0x9
    UCHAR AffinityFill[10];          // offset: 0x88 ordinal: 0xa
  };
  USHORT NodeNumber;                           // offset: 0x92 ordinal: 0xb
  USHORT PrimaryNodeNumber;                    // offset: 0x94 ordinal: 0xc
  UCHAR Stride;                                // offset: 0x96 ordinal: 0xd
  UCHAR Spare0;                                // offset: 0x97 ordinal: 0xe
  ULONGLONG SharedReadyQueueLeaders;           // offset: 0x98 ordinal: 0xf
  ULONG ProximityId;                           // offset: 0xa0 ordinal: 0x10
  ULONG Lowest;                                // offset: 0xa4 ordinal: 0x11
  ULONG Highest;                               // offset: 0xa8 ordinal: 0x12
  UCHAR MaximumProcessors;                     // offset: 0xac ordinal: 0x13
  struct _flags Flags;                         // offset: 0xad ordinal: 0x14
  UCHAR Spare10;                               // offset: 0xae ordinal: 0x15
  struct _KHETERO_PROCESSOR_SET HeteroSets[5]; // offset: 0xb0 ordinal: 0x16
} _KNODE;

// 0xe0 bytes (sizeof)
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
  ULONGLONG Xcr0;                 // offset: 0xd8 ordinal: 0x1b
} _KSPECIAL_REGISTERS;

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

// 0x260 bytes (sizeof)
typedef struct _KSHARED_READY_QUEUE {
  ULONGLONG Lock;                       // offset: 0x0 ordinal: 0x0
  ULONG ReadySummary;                   // offset: 0x8 ordinal: 0x1
  struct _LIST_ENTRY ReadyListHead[32]; // offset: 0x10 ordinal: 0x2
  CHAR RunningSummary[64];              // offset: 0x210 ordinal: 0x3
  UCHAR Span;                           // offset: 0x250 ordinal: 0x4
  UCHAR LowProcIndex;                   // offset: 0x251 ordinal: 0x5
  UCHAR QueueIndex;                     // offset: 0x252 ordinal: 0x6
  UCHAR ProcCount;                      // offset: 0x253 ordinal: 0x7
  UCHAR ScanOwner;                      // offset: 0x254 ordinal: 0x8
  UCHAR Spare[3];                       // offset: 0x255 ordinal: 0x9
  ULONGLONG Affinity;                   // offset: 0x258 ordinal: 0xa
} _KSHARED_READY_QUEUE;

// 0x38 bytes (sizeof)
typedef struct _PS_WAKE_INFORMATION {
  ULONGLONG NotificationChannel; // offset: 0x0 ordinal: 0x0
  ULONGLONG WakeCounters[5];     // offset: 0x8 ordinal: 0x1
  ULONGLONG NoWakeCounter;       // offset: 0x30 ordinal: 0x2
} _PS_WAKE_INFORMATION;

typedef LONG (*__anon_2004)(struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *,
                            ULONGLONG *, ULONGLONG *);

typedef LONG (*__anon_2002)(struct _IO_RESOURCE_DESCRIPTOR *, ULONGLONG *,
                            ULONGLONG *, ULONGLONG *, ULONGLONG *);

// 0x150 bytes (sizeof)
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
  struct _KEVENT *TransactionEvent;       // offset: 0x128 ordinal: 0x23
  VOID *Extension;                        // offset: 0x130 ordinal: 0x24
  struct _DEVICE_OBJECT *BusDeviceObject; // offset: 0x138 ordinal: 0x25
  VOID *ConflictCallbackContext;          // offset: 0x140 ordinal: 0x26
  UCHAR(*ConflictCallback)
  (VOID *, struct _RTL_RANGE *); // offset: 0x148 ordinal: 0x27
} _ARBITER_INSTANCE;

typedef LONG (*__anon_2017)(struct _ARBITER_INSTANCE *, ULONG,
                            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *,
                            struct _RTL_RANGE_LIST *);

typedef VOID (*__anon_2016)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_ALLOCATION_STATE *);

typedef UCHAR (*__anon_2015)(struct _ARBITER_INSTANCE *,
                             struct _ARBITER_ALLOCATION_STATE *);

typedef LONG (*__anon_2014)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_ALLOCATION_STATE *);

typedef LONG (*__anon_2013)(struct _ARBITER_INSTANCE *,
                            struct _CM_RESOURCE_LIST *);

typedef LONG (*__anon_2012)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_ADD_RESERVED_PARAMETERS *);

typedef LONG (*__anon_2011)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_QUERY_CONFLICT_PARAMETERS *);

typedef LONG (*__anon_2010)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_QUERY_ARBITRATE_PARAMETERS *);

typedef LONG (*__anon_2009)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_BOOT_ALLOCATION_PARAMETERS *);

typedef LONG (*__anon_2008)(struct _ARBITER_INSTANCE *);

typedef LONG (*__anon_2007)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_RETEST_ALLOCATION_PARAMETERS *);

typedef LONG (*__anon_2006)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_TEST_ALLOCATION_PARAMETERS *);

typedef LONG (*__anon_1501)(VOID *, VOID **, ULONGLONG *);

typedef LONG (*__anon_1273)(VOID *, struct _GUID *, VOID *, ULONGLONG, VOID *,
                            ULONGLONG, ULONGLONG *);

// 0x38 bytes (sizeof)
typedef struct _POP_FX_DRIVER_CALLBACKS {
  VOID (*ComponentActive)(VOID *, ULONG);           // offset: 0x0 ordinal: 0x0
  VOID (*ComponentIdle)(VOID *, ULONG);             // offset: 0x8 ordinal: 0x1
  VOID (*ComponentIdleState)(VOID *, ULONG, ULONG); // offset: 0x10 ordinal: 0x2
  VOID (*DevicePowerRequired)(VOID *);              // offset: 0x18 ordinal: 0x3
  VOID (*DevicePowerNotRequired)(VOID *);           // offset: 0x20 ordinal: 0x4
  LONG(*PowerControl)
  (VOID *, struct _GUID *, VOID *, ULONGLONG, VOID *, ULONGLONG,
   ULONGLONG *); // offset: 0x28 ordinal: 0x5
  VOID(*ComponentCriticalTransition)
  (VOID *, ULONG, UCHAR); // offset: 0x30 ordinal: 0x6
} _POP_FX_DRIVER_CALLBACKS;

// 0x10 bytes (sizeof)
typedef struct _RTL_BITMAP_EX {
  ULONGLONG SizeOfBitMap; // offset: 0x0 ordinal: 0x0
  ULONGLONG *Buffer;      // offset: 0x8 ordinal: 0x1
} _RTL_BITMAP_EX;

// 0x38 bytes (sizeof)
typedef struct _MM_PAGED_POOL_INFO {
  struct _EX_PUSH_LOCK Lock;                    // offset: 0x0 ordinal: 0x0
  struct _RTL_BITMAP_EX PagedPoolAllocationMap; // offset: 0x8 ordinal: 0x1
  struct _MMPTE *FirstPteForPagedPool;          // offset: 0x18 ordinal: 0x2
  ULONGLONG MaximumSize;                        // offset: 0x20 ordinal: 0x3
  ULONGLONG PagedPoolHint;                      // offset: 0x28 ordinal: 0x4
  ULONGLONG AllocatedPagedPool;                 // offset: 0x30 ordinal: 0x5
} _MM_PAGED_POOL_INFO;

// 0x80 bytes (sizeof)
typedef struct _MI_SHUTDOWN_STATE {
  ULONG StandbyListDiscard;                       // offset: 0x0 ordinal: 0x0
  UCHAR CrashDumpInitialized;                     // offset: 0x4 ordinal: 0x1
  UCHAR ConnectedStandbyActive;                   // offset: 0x5 ordinal: 0x2
  ULONG SystemShutdown;                           // offset: 0x8 ordinal: 0x3
  LONG ShutdownFlushInProgress;                   // offset: 0xc ordinal: 0x4
  struct _MI_RESUME_WORKITEM ResumeItem;          // offset: 0x10 ordinal: 0x5
  UCHAR FreeListDiscard;                          // offset: 0x48 ordinal: 0x6
  struct _ETHREAD *MirrorHoldsPfn;                // offset: 0x50 ordinal: 0x7
  ULONG MirroringActive;                          // offset: 0x58 ordinal: 0x8
  struct _RTL_BITMAP_EX *MirrorBitMap;            // offset: 0x60 ordinal: 0x9
  struct _RTL_BITMAP_EX *MirrorBitMapInterlocked; // offset: 0x68 ordinal: 0xa
  VOID *MirrorListLocks;                          // offset: 0x70 ordinal: 0xb
  struct _MMPTE *CrashDumpPte;                    // offset: 0x78 ordinal: 0xc
} _MI_SHUTDOWN_STATE;

// 0x50 bytes (sizeof)
typedef struct _MI_DYNAMIC_BITMAP {
  struct _RTL_BITMAP_EX Bitmap; // offset: 0x0 ordinal: 0x0
  ULONGLONG MaximumSize;        // offset: 0x10 ordinal: 0x1
  ULONGLONG Hint;               // offset: 0x18 ordinal: 0x2
  VOID *BaseVa;                 // offset: 0x20 ordinal: 0x3
  ULONGLONG SizeTopDown;        // offset: 0x28 ordinal: 0x4
  ULONGLONG HintTopDown;        // offset: 0x30 ordinal: 0x5
  VOID *BaseVaTopDown;          // offset: 0x38 ordinal: 0x6
  ULONGLONG SpinLock;           // offset: 0x40 ordinal: 0x7
  struct _MMSUPPORT *Vm;        // offset: 0x48 ordinal: 0x8
} _MI_DYNAMIC_BITMAP;

// 0x2c0 bytes (sizeof)
typedef struct _MI_SYSTEM_VA_STATE {
  ULONGLONG SystemTablesLock;       // offset: 0x0 ordinal: 0x0
  ULONGLONG AvailableSystemCacheVa; // offset: 0x8 ordinal: 0x1
  struct _MI_DYNAMIC_BITMAP
      DynamicBitMapSystemPtes; // offset: 0x10 ordinal: 0x2
  struct _MI_DYNAMIC_BITMAP
      DynamicBitMapDriverImages[2]; // offset: 0x60 ordinal: 0x3
  struct _MI_DYNAMIC_BITMAP
      DynamicBitMapPagedPool; // offset: 0x100 ordinal: 0x4
  struct _MI_DYNAMIC_BITMAP
      DynamicBitMapSpecialPool; // offset: 0x150 ordinal: 0x5
  struct _MI_DYNAMIC_BITMAP
      DynamicBitMapSystemCache;                 // offset: 0x1a0 ordinal: 0x6
  struct _MMWSLE_HASH *WorkingSetListHashStart; // offset: 0x1f0 ordinal: 0x7
  struct _MMWSLE_HASH *WorkingSetListHashEnd;   // offset: 0x1f8 ordinal: 0x8
  struct _MMWSLE_NONDIRECT_HASH
      *WorkingSetListIndirectHashStart;      // offset: 0x200 ordinal: 0x9
  struct _KEVENT FreeSystemCacheVa;          // offset: 0x208 ordinal: 0xa
  ULONGLONG SystemVaLock;                    // offset: 0x220 ordinal: 0xb
  LONG DeleteKvaLock;                        // offset: 0x228 ordinal: 0xc
  struct _MI_PTE_CHAIN_HEAD FreeSystemCache; // offset: 0x230 ordinal: 0xd
  ULONGLONG SystemCacheViewLock;             // offset: 0x248 ordinal: 0xe
  ULONGLONG UnusableWsles[5];                // offset: 0x250 ordinal: 0xf
  ULONGLONG PossibleWsles[5];                // offset: 0x278 ordinal: 0x10
} _MI_SYSTEM_VA_STATE;

// 0x60 bytes (sizeof)
typedef struct _MI_SYSTEM_PTE_TYPE {
  struct _RTL_BITMAP_EX Bitmap;   // offset: 0x0 ordinal: 0x0
  struct _MMPTE *BasePte;         // offset: 0x10 ordinal: 0x1
  ULONG Flags;                    // offset: 0x18 ordinal: 0x2
  enum _MI_SYSTEM_VA_TYPE VaType; // offset: 0x1c ordinal: 0x3
  ULONG *FailureCount;            // offset: 0x20 ordinal: 0x4
  ULONG PteFailures;              // offset: 0x28 ordinal: 0x5
  union {
    ULONGLONG SpinLock;                   // offset: 0x30 ordinal: 0x6
    struct _EX_PUSH_LOCK *GlobalPushLock; // offset: 0x30 ordinal: 0x7
  };
  struct _MMSUPPORT *Vm;              // offset: 0x38 ordinal: 0x8
  ULONGLONG TotalSystemPtes;          // offset: 0x40 ordinal: 0x9
  ULONGLONG Hint;                     // offset: 0x48 ordinal: 0xa
  struct _MI_CACHED_PTES *CachedPtes; // offset: 0x50 ordinal: 0xb
  ULONGLONG TotalFreeSystemPtes;      // offset: 0x58 ordinal: 0xc
} _MI_SYSTEM_PTE_TYPE;

// 0x640 bytes (sizeof)
typedef struct _MI_VISIBLE_STATE {
  struct _MI_SPECIAL_POOL SpecialPool;         // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY SessionWsList;            // offset: 0x50 ordinal: 0x1
  struct _RTL_BITMAP *SessionIdBitmap;         // offset: 0x60 ordinal: 0x2
  struct _MM_PAGED_POOL_INFO PagedPoolInfo;    // offset: 0x68 ordinal: 0x3
  ULONGLONG MaximumNonPagedPoolInPages;        // offset: 0xa0 ordinal: 0x4
  ULONGLONG SizeOfPagedPoolInPages;            // offset: 0xa8 ordinal: 0x5
  struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;    // offset: 0xb0 ordinal: 0x6
  ULONGLONG NonPagedPoolCommit;                // offset: 0x110 ordinal: 0x7
  ULONGLONG BootCommit;                        // offset: 0x118 ordinal: 0x8
  ULONGLONG MdlPagesAllocated;                 // offset: 0x120 ordinal: 0x9
  ULONGLONG SystemPageTableCommit;             // offset: 0x128 ordinal: 0xa
  ULONGLONG SpecialPagesInUse;                 // offset: 0x130 ordinal: 0xb
  ULONGLONG WsOverheadPages;                   // offset: 0x138 ordinal: 0xc
  ULONGLONG VadBitmapPages;                    // offset: 0x140 ordinal: 0xd
  ULONGLONG ProcessCommit;                     // offset: 0x148 ordinal: 0xe
  ULONGLONG SharedCommit;                      // offset: 0x150 ordinal: 0xf
  LONG DriverCommit;                           // offset: 0x158 ordinal: 0x10
  struct _MMSUPPORT SystemWs[3];               // offset: 0x180 ordinal: 0x11
  ULONG MapCacheFailures;                      // offset: 0x468 ordinal: 0x12
  ULONG LastUnloadedDriver;                    // offset: 0x46c ordinal: 0x13
  struct _UNLOADED_DRIVERS *UnloadedDrivers;   // offset: 0x470 ordinal: 0x14
  ULONGLONG PagefileHashPages;                 // offset: 0x478 ordinal: 0x15
  struct _SYSPTES_HEADER PteHeader;            // offset: 0x480 ordinal: 0x16
  struct _MI_SPECIAL_POOL *SessionSpecialPool; // offset: 0x598 ordinal: 0x17
  ULONGLONG SystemVaTypeCount[14];             // offset: 0x5a0 ordinal: 0x18
} _MI_VISIBLE_STATE;

typedef VOID (*__anon_433)(ULONGLONG, UCHAR, ULONGLONG *, ULONGLONG *);

// 0x30 bytes (sizeof)
typedef struct _PROC_FEEDBACK_COUNTER {
  union {
    VOID (*InstantaneousRead)(ULONGLONG, ULONG *); // offset: 0x0 ordinal: 0x0
    VOID(*DifferentialRead)
    (ULONGLONG, UCHAR, ULONGLONG *, ULONGLONG *); // offset: 0x0 ordinal: 0x1
  };
  ULONGLONG LastActualCount;    // offset: 0x8 ordinal: 0x2
  ULONGLONG LastReferenceCount; // offset: 0x10 ordinal: 0x3
  ULONG CachedValue;            // offset: 0x18 ordinal: 0x4
  UCHAR Affinitized;            // offset: 0x20 ordinal: 0x5
  UCHAR Differential;           // offset: 0x21 ordinal: 0x6
  UCHAR Scaling;                // offset: 0x22 ordinal: 0x7
  ULONGLONG Context;            // offset: 0x28 ordinal: 0x8
} _PROC_FEEDBACK_COUNTER;

typedef ULONG (*__anon_408)(ULONGLONG, ULONG, ULONG, ULONG, ULONG, ULONG *,
                            ULONGLONG *);

typedef VOID (*__anon_405)(ULONGLONG *);

// 0x10 bytes (sizeof)
typedef union _SLIST_HEADER {
  ULONGLONG Alignment;         // offset: 0x0 ordinal: 0x0
  ULONGLONG Region;            // offset: 0x8 ordinal: 0x1
  struct __anon_250 HeaderX64; // offset: 0x0 ordinal: 0x2
} _SLIST_HEADER;

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

// 0x110 bytes (sizeof)
typedef struct _VF_TARGET_VERIFIED_DRIVER_DATA {
  struct _VF_SUSPECT_DRIVER_ENTRY
      *SuspectDriverEntry;                     // offset: 0x0 ordinal: 0x0
  VOID *WMICallback;                           // offset: 0x8 ordinal: 0x1
  struct _LIST_ENTRY EtwHandlesListHead;       // offset: 0x10 ordinal: 0x2
  union __anon_2147 u1;                        // offset: 0x20 ordinal: 0x3
  ULONGLONG Signature;                         // offset: 0x28 ordinal: 0x4
  union _SLIST_HEADER PoolPageHeaders;         // offset: 0x30 ordinal: 0x5
  union _SLIST_HEADER PoolTrackers;            // offset: 0x40 ordinal: 0x6
  ULONG CurrentPagedPoolAllocations;           // offset: 0x50 ordinal: 0x7
  ULONG CurrentNonPagedPoolAllocations;        // offset: 0x54 ordinal: 0x8
  ULONG PeakPagedPoolAllocations;              // offset: 0x58 ordinal: 0x9
  ULONG PeakNonPagedPoolAllocations;           // offset: 0x5c ordinal: 0xa
  ULONGLONG PagedBytes;                        // offset: 0x60 ordinal: 0xb
  ULONGLONG NonPagedBytes;                     // offset: 0x68 ordinal: 0xc
  ULONGLONG PeakPagedBytes;                    // offset: 0x70 ordinal: 0xd
  ULONGLONG PeakNonPagedBytes;                 // offset: 0x78 ordinal: 0xe
  ULONG RaiseIrqls;                            // offset: 0x80 ordinal: 0xf
  ULONG AcquireSpinLocks;                      // offset: 0x84 ordinal: 0x10
  ULONG SynchronizeExecutions;                 // offset: 0x88 ordinal: 0x11
  ULONG AllocationsWithNoTag;                  // offset: 0x8c ordinal: 0x12
  ULONG AllocationsFailed;                     // offset: 0x90 ordinal: 0x13
  ULONG AllocationsFailedDeliberately;         // offset: 0x94 ordinal: 0x14
  ULONGLONG LockedBytes;                       // offset: 0x98 ordinal: 0x15
  ULONGLONG PeakLockedBytes;                   // offset: 0xa0 ordinal: 0x16
  ULONGLONG MappedLockedBytes;                 // offset: 0xa8 ordinal: 0x17
  ULONGLONG PeakMappedLockedBytes;             // offset: 0xb0 ordinal: 0x18
  ULONGLONG MappedIoSpaceBytes;                // offset: 0xb8 ordinal: 0x19
  ULONGLONG PeakMappedIoSpaceBytes;            // offset: 0xc0 ordinal: 0x1a
  ULONGLONG PagesForMdlBytes;                  // offset: 0xc8 ordinal: 0x1b
  ULONGLONG PeakPagesForMdlBytes;              // offset: 0xd0 ordinal: 0x1c
  ULONGLONG ContiguousMemoryBytes;             // offset: 0xd8 ordinal: 0x1d
  ULONGLONG PeakContiguousMemoryBytes;         // offset: 0xe0 ordinal: 0x1e
  struct _LIST_ENTRY ContiguousMemoryListHead; // offset: 0xe8 ordinal: 0x1f
  ULONG ExecutePoolTypes;                      // offset: 0xf8 ordinal: 0x20
  ULONG ExecutePageProtections;                // offset: 0xfc ordinal: 0x21
  ULONG ExecutePageMappings;                   // offset: 0x100 ordinal: 0x22
  ULONG ExecuteWriteSections;                  // offset: 0x104 ordinal: 0x23
  ULONG SectionAlignmentFailures;              // offset: 0x108 ordinal: 0x24
} _VF_TARGET_VERIFIED_DRIVER_DATA;

// 0x38 bytes (sizeof)
typedef struct _VF_TARGET_DRIVER {
  struct _VF_AVL_TREE_NODE TreeNode; // offset: 0x0 ordinal: 0x0
  union __anon_2138 u1;              // offset: 0x10 ordinal: 0x1
  struct _VF_TARGET_VERIFIED_DRIVER_DATA
      *VerifiedData; // offset: 0x30 ordinal: 0x2
} _VF_TARGET_DRIVER;

// 0x20 bytes (sizeof)
typedef struct _CACHED_KSTACK_LIST {
  union _SLIST_HEADER SListHead; // offset: 0x0 ordinal: 0x0
  LONG MinimumFree;              // offset: 0x10 ordinal: 0x1
  ULONG Misses;                  // offset: 0x14 ordinal: 0x2
  ULONG MissesLast;              // offset: 0x18 ordinal: 0x3
  ULONG AllStacksInUse;          // offset: 0x1c ordinal: 0x4
} _CACHED_KSTACK_LIST;

// 0x50 bytes (sizeof)
typedef struct _MI_PAGING_IO_STATE {
  struct _RTL_AVL_TREE PageFileHead;             // offset: 0x0 ordinal: 0x0
  LONG PageFileHeadSpinLock;                     // offset: 0x8 ordinal: 0x1
  LONG PrefetchSeekThreshold;                    // offset: 0xc ordinal: 0x2
  union _SLIST_HEADER InPageSupportSListHead[2]; // offset: 0x10 ordinal: 0x3
  UCHAR InPageSupportSListMinimum[2];            // offset: 0x30 ordinal: 0x4
  ULONG InPageSinglePages;                       // offset: 0x34 ordinal: 0x5
  LONG DelayPageFaults;                          // offset: 0x38 ordinal: 0x6
  ULONG FileCompressionBoundary;                 // offset: 0x3c ordinal: 0x7
  UCHAR MdlsAdjusted;                            // offset: 0x40 ordinal: 0x8
} _MI_PAGING_IO_STATE;

// 0x60 bytes (sizeof)
typedef struct _MI_PROCESS_STATE {
  ULONG ColorSeed;                             // offset: 0x0 ordinal: 0x0
  struct _KEVENT CloneDereferenceEvent;        // offset: 0x8 ordinal: 0x1
  union _SLIST_HEADER CloneProtosSListHead;    // offset: 0x20 ordinal: 0x2
  VOID *SystemDllBase;                         // offset: 0x30 ordinal: 0x3
  LONG RotatingUniprocessorNumber;             // offset: 0x38 ordinal: 0x4
  union _LARGE_INTEGER CriticalSectionTimeout; // offset: 0x40 ordinal: 0x5
  struct _LIST_ENTRY ProcessList;              // offset: 0x48 ordinal: 0x6
  struct _MMPTE *SharedUserDataPte;            // offset: 0x58 ordinal: 0x7
} _MI_PROCESS_STATE;

// 0xcc0 bytes (sizeof)
typedef struct _MI_PARTITION_PAGE_LISTS {
  struct _MMPFNLIST *FreePagesByColor[2];          // offset: 0x0 ordinal: 0x0
  union _SLIST_HEADER *FreePageSlist[2];           // offset: 0x10 ordinal: 0x1
  struct _MMPFNLIST ZeroedPageListHead;            // offset: 0x40 ordinal: 0x2
  struct _MMPFNLIST FreePageListHead;              // offset: 0x80 ordinal: 0x3
  struct _MMPFNLIST StandbyPageListHead;           // offset: 0xc0 ordinal: 0x4
  struct _MMPFNLIST StandbyPageListByPriority[8];  // offset: 0x100 ordinal: 0x5
  struct _MMPFNLIST ModifiedPageListNoReservation; // offset: 0x240 ordinal: 0x6
  struct _MMPFNLIST
      ModifiedPageListByReservation[16];      // offset: 0x280 ordinal: 0x7
  struct _MMPFNLIST MappedPageListHead[16];   // offset: 0x500 ordinal: 0x8
  struct _MMPFNLIST BadPageListHead;          // offset: 0x780 ordinal: 0x9
  struct _MMPFNLIST *PageLocationList[8];     // offset: 0x7a8 ordinal: 0xa
  ULONG StandbyRepurposedByPriority[8];       // offset: 0x7e8 ordinal: 0xb
  struct _KEVENT MappedPageListHeadEvent[16]; // offset: 0x808 ordinal: 0xc
  struct _MI_DECAY_TIMER_LINK
      DecayClusterTimerHeads[4];     // offset: 0x988 ordinal: 0xd
  ULONG DecayHand;                   // offset: 0x9a8 ordinal: 0xe
  ULONGLONG LastDecayHandUpdateTime; // offset: 0x9b0 ordinal: 0xf
  struct _MI_LDW_WORK_CONTEXT
      LastChanceLdwContext;      // offset: 0x9b8 ordinal: 0x10
  ULONGLONG AvailableEventsLock; // offset: 0xa00 ordinal: 0x11
  struct _MI_AVAILABLE_PAGE_WAIT_STATES
      AvailablePageWaitStates[2];     // offset: 0xa08 ordinal: 0x12
  ULONGLONG LowMemoryThreshold;       // offset: 0xa48 ordinal: 0x13
  ULONGLONG HighMemoryThreshold;      // offset: 0xa50 ordinal: 0x14
  ULONGLONG TransitionPrivatePages;   // offset: 0xa80 ordinal: 0x15
  UCHAR RebuildLargePagesInitialized; // offset: 0xa88 ordinal: 0x16
  struct _MI_REBUILD_LARGE_PAGES
      RebuildLargePagesItem; // offset: 0xa90 ordinal: 0x17
} _MI_PARTITION_PAGE_LISTS;

// 0x80 bytes (sizeof)
typedef struct _MI_PARTITION_STORES {
  union __anon_949 WriteAllStoreHintedPages;     // offset: 0x0 ordinal: 0x0
  ULONG VirtualPageFileNumber;                   // offset: 0x4 ordinal: 0x1
  ULONG Registered;                              // offset: 0x8 ordinal: 0x2
  ULONG ReadClusterSizeMax;                      // offset: 0xc ordinal: 0x3
  ULONG EvictFlushRequestCount;                  // offset: 0x10 ordinal: 0x4
  ULONG ModifiedWriteDisableCount;               // offset: 0x14 ordinal: 0x5
  ULONG WriteIssueFailures;                      // offset: 0x18 ordinal: 0x6
  struct _ETHREAD *EvictionThread;               // offset: 0x20 ordinal: 0x7
  struct _KEVENT EvictEvent;                     // offset: 0x28 ordinal: 0x8
  struct _KEVENT EvictFlushCompleteEvent;        // offset: 0x40 ordinal: 0x9
  union _SLIST_HEADER WriteSupportSListHead;     // offset: 0x60 ordinal: 0xa
  LONG EvictFlushLock;                           // offset: 0x70 ordinal: 0xb
  struct _RTL_BITMAP *ModifiedWriteFailedBitmap; // offset: 0x78 ordinal: 0xc
} _MI_PARTITION_STORES;

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

// 0x1f40 bytes (sizeof)
typedef struct _MM_SESSION_SPACE {
  LONG ReferenceCount;                           // offset: 0x0 ordinal: 0x0
  union __anon_2253 u;                           // offset: 0x4 ordinal: 0x1
  ULONG SessionId;                               // offset: 0x8 ordinal: 0x2
  LONG ProcessReferenceToSession;                // offset: 0xc ordinal: 0x3
  struct _LIST_ENTRY ProcessList;                // offset: 0x10 ordinal: 0x4
  ULONGLONG SessionPageDirectoryIndex;           // offset: 0x20 ordinal: 0x5
  ULONGLONG NonPagablePages;                     // offset: 0x28 ordinal: 0x6
  ULONGLONG CommittedPages;                      // offset: 0x30 ordinal: 0x7
  VOID *PagedPoolStart;                          // offset: 0x38 ordinal: 0x8
  VOID *PagedPoolEnd;                            // offset: 0x40 ordinal: 0x9
  VOID *SessionObject;                           // offset: 0x48 ordinal: 0xa
  VOID *SessionObjectHandle;                     // offset: 0x50 ordinal: 0xb
  ULONG SessionPoolAllocationFailures[4];        // offset: 0x58 ordinal: 0xc
  struct _RTL_AVL_TREE ImageTree;                // offset: 0x68 ordinal: 0xd
  ULONG LocaleId;                                // offset: 0x70 ordinal: 0xe
  ULONG AttachCount;                             // offset: 0x74 ordinal: 0xf
  struct _KGATE AttachGate;                      // offset: 0x78 ordinal: 0x10
  struct _LIST_ENTRY WsListEntry;                // offset: 0x90 ordinal: 0x11
  struct _GENERAL_LOOKASIDE Lookaside[21];       // offset: 0xc0 ordinal: 0x12
  struct _MMSESSION Session;                     // offset: 0xb40 ordinal: 0x13
  struct _MM_PAGED_POOL_INFO PagedPoolInfo;      // offset: 0xb60 ordinal: 0x14
  struct _MMSUPPORT Vm;                          // offset: 0xb98 ordinal: 0x15
  struct _MMWSLE *Wsle;                          // offset: 0xc90 ordinal: 0x16
  struct _MI_SESSION_DRIVER_UNLOAD DriverUnload; // offset: 0xc98 ordinal: 0x17
  struct _POOL_DESCRIPTOR PagedPool;             // offset: 0xcc0 ordinal: 0x18
  struct _MMPTE PageDirectory;                   // offset: 0x1e00 ordinal: 0x19
  struct _EX_PUSH_LOCK SessionVaLock;            // offset: 0x1e08 ordinal: 0x1a
  struct _RTL_BITMAP DynamicVaBitMap;            // offset: 0x1e10 ordinal: 0x1b
  ULONG DynamicVaHint;                           // offset: 0x1e20 ordinal: 0x1c
  struct _MI_SPECIAL_POOL SpecialPool;           // offset: 0x1e28 ordinal: 0x1d
  struct _EX_PUSH_LOCK SessionPteLock;           // offset: 0x1e78 ordinal: 0x1e
  LONG PoolBigEntriesInUse;                      // offset: 0x1e80 ordinal: 0x1f
  ULONG PagedPoolPdeCount;                       // offset: 0x1e84 ordinal: 0x20
  ULONG SpecialPoolPdeCount;                     // offset: 0x1e88 ordinal: 0x21
  ULONG DynamicSessionPdeCount;                  // offset: 0x1e8c ordinal: 0x22
  struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;      // offset: 0x1e90 ordinal: 0x23
  VOID *PoolTrackTableExpansion;                 // offset: 0x1ef0 ordinal: 0x24
  ULONGLONG PoolTrackTableExpansionSize;         // offset: 0x1ef8 ordinal: 0x25
  VOID *PoolTrackBigPages;                       // offset: 0x1f00 ordinal: 0x26
  ULONGLONG PoolTrackBigPagesSize;               // offset: 0x1f08 ordinal: 0x27
  enum _IO_SESSION_STATE IoState;                // offset: 0x1f10 ordinal: 0x28
  ULONG IoStateSequence;                         // offset: 0x1f14 ordinal: 0x29
  struct _KEVENT IoNotificationEvent;            // offset: 0x1f18 ordinal: 0x2a
  struct _ESILO *ServerSilo;                     // offset: 0x1f30 ordinal: 0x2b
  ULONGLONG CreateTime;                          // offset: 0x1f38 ordinal: 0x2c
} _MM_SESSION_SPACE;

// 0x80 bytes (sizeof)
typedef struct _PAGED_LOOKASIDE_LIST {
  struct _GENERAL_LOOKASIDE L; // offset: 0x0 ordinal: 0x0
} _PAGED_LOOKASIDE_LIST;

// 0x80 bytes (sizeof)
typedef struct _NPAGED_LOOKASIDE_LIST {
  struct _GENERAL_LOOKASIDE L; // offset: 0x0 ordinal: 0x0
} _NPAGED_LOOKASIDE_LIST;

// 0x180 bytes (sizeof)
typedef struct _MI_SYSTEM_PTE_STATE {
  union _SLIST_HEADER DeadPteTrackerSListHead; // offset: 0x0 ordinal: 0x0
  ULONGLONG PteTrackerLock;                    // offset: 0x10 ordinal: 0x1
  struct _NPAGED_LOOKASIDE_LIST
      MdlTrackerLookaside;                      // offset: 0x40 ordinal: 0x2
  struct _RTL_BITMAP_EX PteTrackingBitmap;      // offset: 0xc0 ordinal: 0x3
  struct _MI_CACHED_PTES *CachedPteHeads;       // offset: 0xd0 ordinal: 0x4
  struct _MI_SYSTEM_PTE_TYPE SystemViewPteInfo; // offset: 0xd8 ordinal: 0x5
  UCHAR KernelStackPages;                       // offset: 0x138 ordinal: 0x6
  union _SLIST_HEADER QueuedStacks;             // offset: 0x140 ordinal: 0x7
  ULONG StackGrowthFailures;                    // offset: 0x150 ordinal: 0x8
  UCHAR TrackPtesAborted;                       // offset: 0x154 ordinal: 0x9
  UCHAR AdjustCounter;                          // offset: 0x155 ordinal: 0xa
  struct _MI_QUEUED_DEADSTACK_WORKITEM
      QueuedStacksWorkItem; // offset: 0x158 ordinal: 0xb
} _MI_SYSTEM_PTE_STATE;

// 0x10 bytes (sizeof)
typedef struct _PP_LOOKASIDE_LIST {
  struct _GENERAL_LOOKASIDE *P; // offset: 0x0 ordinal: 0x0
  struct _GENERAL_LOOKASIDE *L; // offset: 0x8 ordinal: 0x1
} _PP_LOOKASIDE_LIST;

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

typedef VOID (*__anon_339)(VOID *, struct _LOOKASIDE_LIST_EX *);

typedef VOID *(*__anon_337)(enum _POOL_TYPE, ULONGLONG, ULONG,
                            struct _LOOKASIDE_LIST_EX *);

// 0x40 bytes (sizeof)
typedef struct _KDPC {
  union {
    ULONG TargetInfoAsUlong; // offset: 0x0 ordinal: 0x0
    UCHAR Type;              // offset: 0x0 ordinal: 0x1
  };
  UCHAR Importance;                       // offset: 0x1 ordinal: 0x2
  USHORT Number;                          // offset: 0x2 ordinal: 0x3
  struct _SINGLE_LIST_ENTRY DpcListEntry; // offset: 0x8 ordinal: 0x4
  ULONGLONG ProcessorHistory;             // offset: 0x10 ordinal: 0x5
  VOID(*DeferredRoutine)
  (struct _KDPC *, VOID *, VOID *, VOID *); // offset: 0x18 ordinal: 0x6
  VOID *DeferredContext;                    // offset: 0x20 ordinal: 0x7
  VOID *SystemArgument1;                    // offset: 0x28 ordinal: 0x8
  VOID *SystemArgument2;                    // offset: 0x30 ordinal: 0x9
  VOID *DpcData;                            // offset: 0x38 ordinal: 0xa
} _KDPC;

// 0x88 bytes (sizeof)
typedef struct _WHEAP_WORK_QUEUE {
  struct _LIST_ENTRY ListHead;      // offset: 0x0 ordinal: 0x0
  ULONGLONG ListLock;               // offset: 0x10 ordinal: 0x1
  LONG ItemCount;                   // offset: 0x18 ordinal: 0x2
  struct _KDPC Dpc;                 // offset: 0x20 ordinal: 0x3
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x60 ordinal: 0x4
  VOID(*WorkRoutine)
  (struct _WHEAP_WORK_QUEUE *,
   struct _LIST_ENTRY *); // offset: 0x80 ordinal: 0x5
} _WHEAP_WORK_QUEUE;

typedef VOID (*__anon_1744)(struct _WHEAP_WORK_QUEUE *, struct _LIST_ENTRY *);

// 0x18 bytes (sizeof)
typedef struct _WHEAP_INFO_BLOCK {
  ULONG ErrorSourceCount; // offset: 0x0 ordinal: 0x0
  struct _WHEAP_ERROR_SOURCE_TABLE
      *ErrorSourceTable;               // offset: 0x8 ordinal: 0x1
  struct _WHEAP_WORK_QUEUE *WorkQueue; // offset: 0x10 ordinal: 0x2
} _WHEAP_INFO_BLOCK;

// 0x28 bytes (sizeof)
typedef struct _KDPC_DATA {
  struct _KDPC_LIST DpcList; // offset: 0x0 ordinal: 0x0
  ULONGLONG DpcLock;         // offset: 0x10 ordinal: 0x1
  LONG DpcQueueDepth;        // offset: 0x18 ordinal: 0x2
  ULONG DpcCount;            // offset: 0x1c ordinal: 0x3
  struct _KDPC *ActiveDpc;   // offset: 0x20 ordinal: 0x4
} _KDPC_DATA;

// 0x48 bytes (sizeof)
typedef struct _WAIT_CONTEXT_BLOCK {
  union {
    struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry; // offset: 0x0 ordinal: 0x0
    struct _LIST_ENTRY DmaWaitEntry;            // offset: 0x0 ordinal: 0x1
  };
  ULONG NumberOfChannels; // offset: 0x10 ordinal: 0x2
  ULONG SyncCallback : 1; // offset: 0x14 ordinal: 0x3
  ULONG DmaContext : 1;   // offset: 0x14 ordinal: 0x4
  ULONG Reserved : 30;    // offset: 0x14 ordinal: 0x5
  enum _IO_ALLOCATION_ACTION (*DeviceRoutine)(
      struct _DEVICE_OBJECT *, struct _IRP *, VOID *,
      VOID *);                     // offset: 0x18 ordinal: 0x6
  VOID *DeviceContext;             // offset: 0x20 ordinal: 0x7
  ULONG NumberOfMapRegisters;      // offset: 0x28 ordinal: 0x8
  VOID *DeviceObject;              // offset: 0x30 ordinal: 0x9
  VOID *CurrentIrp;                // offset: 0x38 ordinal: 0xa
  struct _KDPC *BufferChainingDpc; // offset: 0x40 ordinal: 0xb
} _WAIT_CONTEXT_BLOCK;

// 0x48 bytes (sizeof)
typedef union __anon_487 {
  struct _LIST_ENTRY ListEntry;   // offset: 0x0 ordinal: 0x0
  struct _WAIT_CONTEXT_BLOCK Wcb; // offset: 0x0 ordinal: 0x1
} __anon_487;

typedef VOID (*__anon_305)(struct _KDPC *, VOID *, VOID *, VOID *);

// 0x150 bytes (sizeof)
typedef struct _KENTROPY_TIMING_STATE {
  ULONG EntropyCount;        // offset: 0x0 ordinal: 0x0
  ULONG Buffer[64];          // offset: 0x4 ordinal: 0x1
  struct _KDPC Dpc;          // offset: 0x108 ordinal: 0x2
  ULONG LastDeliveredBuffer; // offset: 0x148 ordinal: 0x3
} _KENTROPY_TIMING_STATE;

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

// 0x80 bytes (sizeof)
typedef struct _POP_PER_PROCESSOR_CONTEXT {
  UCHAR *UncompressedData;              // offset: 0x0 ordinal: 0x0
  VOID *MappingVa;                      // offset: 0x8 ordinal: 0x1
  VOID *XpressEncodeWorkspace;          // offset: 0x10 ordinal: 0x2
  UCHAR *CompressedDataBuffer;          // offset: 0x18 ordinal: 0x3
  ULONGLONG CopyTicks;                  // offset: 0x20 ordinal: 0x4
  ULONGLONG CompressTicks;              // offset: 0x28 ordinal: 0x5
  ULONGLONG BytesCopied;                // offset: 0x30 ordinal: 0x6
  ULONGLONG PagesProcessed;             // offset: 0x38 ordinal: 0x7
  ULONGLONG DecompressTicks;            // offset: 0x40 ordinal: 0x8
  ULONGLONG ResumeCopyTicks;            // offset: 0x48 ordinal: 0x9
  ULONGLONG SharedBufferTicks;          // offset: 0x50 ordinal: 0xa
  ULONGLONG DecompressTicksByMethod[2]; // offset: 0x58 ordinal: 0xb
  ULONGLONG DecompressSizeByMethod[2];  // offset: 0x68 ordinal: 0xc
  ULONG CompressCount;                  // offset: 0x78 ordinal: 0xd
  ULONG HuffCompressCount;              // offset: 0x7c ordinal: 0xe
} _POP_PER_PROCESSOR_CONTEXT;

// 0x20 bytes (sizeof)
typedef struct _VI_VERIFIER_ISSUE {
  ULONGLONG IssueType;     // offset: 0x0 ordinal: 0x0
  VOID *Address;           // offset: 0x8 ordinal: 0x1
  ULONGLONG Parameters[2]; // offset: 0x10 ordinal: 0x2
} _VI_VERIFIER_ISSUE;

// 0x18 bytes (sizeof)
typedef struct _EVENT_PAYLOAD_PREDICATE {
  USHORT FieldIndex;  // offset: 0x0 ordinal: 0x0
  USHORT CompareOp;   // offset: 0x2 ordinal: 0x1
  ULONGLONG Value[2]; // offset: 0x8 ordinal: 0x2
} _EVENT_PAYLOAD_PREDICATE;

// 0x50 bytes (sizeof)
typedef struct _AGGREGATED_PAYLOAD_FILTER {
  USHORT MagicValue : 12;           // offset: 0x0 ordinal: 0x0
  USHORT DescriptorVersion : 4;     // offset: 0x0 ordinal: 0x1
  USHORT Size;                      // offset: 0x2 ordinal: 0x2
  USHORT PredicateCount;            // offset: 0x4 ordinal: 0x3
  USHORT Reserved;                  // offset: 0x6 ordinal: 0x4
  ULONGLONG HashedEventIdBitmap;    // offset: 0x8 ordinal: 0x5
  struct _GUID ProviderGuid;        // offset: 0x10 ordinal: 0x6
  USHORT EachEventTableOffset;      // offset: 0x20 ordinal: 0x7
  USHORT EachEventTableLength;      // offset: 0x22 ordinal: 0x8
  USHORT PayloadDecoderTableOffset; // offset: 0x24 ordinal: 0x9
  USHORT PayloadDecoderTableLength; // offset: 0x26 ordinal: 0xa
  USHORT EventFilterTableOffset;    // offset: 0x28 ordinal: 0xb
  USHORT EventFilterTableLength;    // offset: 0x2a ordinal: 0xc
  USHORT UNICODEStringTableOffset;  // offset: 0x2c ordinal: 0xd
  USHORT UNICODEStringTableLength;  // offset: 0x2e ordinal: 0xe
  USHORT ANSIStringTableOffset;     // offset: 0x30 ordinal: 0xf
  USHORT ANSIStringTableLength;     // offset: 0x32 ordinal: 0x10
  struct _EVENT_PAYLOAD_PREDICATE
      PredicateTable[1]; // offset: 0x38 ordinal: 0x11
} _AGGREGATED_PAYLOAD_FILTER;

// 0x58 bytes (sizeof)
typedef struct _ETW_PAYLOAD_FILTER {
  LONG RefCount;                                   // offset: 0x0 ordinal: 0x0
  struct _AGGREGATED_PAYLOAD_FILTER PayloadFilter; // offset: 0x8 ordinal: 0x1
} _ETW_PAYLOAD_FILTER;

// 0x48 bytes (sizeof)
typedef struct _ETW_FILTER_HEADER {
  LONG FilterFlags;                                // offset: 0x0 ordinal: 0x0
  struct _ETW_FILTER_PID *PidFilter;               // offset: 0x8 ordinal: 0x1
  struct _ETW_FILTER_STRING_TOKEN *ExeFilter;      // offset: 0x10 ordinal: 0x2
  struct _ETW_FILTER_STRING_TOKEN *PkgIdFilter;    // offset: 0x18 ordinal: 0x3
  struct _ETW_FILTER_STRING_TOKEN *PkgAppIdFilter; // offset: 0x20 ordinal: 0x4
  struct _ETW_PERFECT_HASH_FUNCTION
      *StackWalkFilter;                             // offset: 0x28 ordinal: 0x5
  struct _ETW_PERFECT_HASH_FUNCTION *EventIdFilter; // offset: 0x30 ordinal: 0x6
  struct _ETW_PAYLOAD_FILTER *PayloadFilter;        // offset: 0x38 ordinal: 0x7
  struct _EVENT_FILTER_HEADER *ProviderSideFilter;  // offset: 0x40 ordinal: 0x8
} _ETW_FILTER_HEADER;

// 0x180 bytes (sizeof)
typedef struct _ETW_GUID_ENTRY {
  struct _LIST_ENTRY GuidList;    // offset: 0x0 ordinal: 0x0
  LONGLONG RefCount;              // offset: 0x10 ordinal: 0x1
  struct _GUID Guid;              // offset: 0x18 ordinal: 0x2
  struct _LIST_ENTRY RegListHead; // offset: 0x28 ordinal: 0x3
  VOID *SecurityDescriptor;       // offset: 0x38 ordinal: 0x4
  union {
    struct _ETW_LAST_ENABLE_INFO LastEnable; // offset: 0x40 ordinal: 0x5
    ULONGLONG MatchId;                       // offset: 0x40 ordinal: 0x6
  };
  struct _TRACE_ENABLE_INFO ProviderEnableInfo; // offset: 0x50 ordinal: 0x7
  struct _TRACE_ENABLE_INFO EnableInfo[8];      // offset: 0x70 ordinal: 0x8
  struct _ETW_FILTER_HEADER *FilterData;        // offset: 0x170 ordinal: 0x9
  struct _ESILO *ServerSilo;                    // offset: 0x178 ordinal: 0xa
} _ETW_GUID_ENTRY;

// 0x1b0 bytes (sizeof)
typedef struct _ETW_SILODRIVERSTATE {
  ULONG EtwpSecurityProviderPID; // offset: 0x0 ordinal: 0x0
  struct _ETW_GUID_ENTRY
      EtwpSecurityProviderGuidEntry;    // offset: 0x8 ordinal: 0x1
  ULONG AuditLoggerId;                  // offset: 0x188 ordinal: 0x2
  ULONGLONG EtwPsProvRegHandle;         // offset: 0x190 ordinal: 0x3
  USHORT EtwpSecurityLoggers[8];        // offset: 0x198 ordinal: 0x4
  UCHAR EtwpSecurityProviderEnableMask; // offset: 0x1a8 ordinal: 0x5
  UCHAR EtwpShutdownInProgress;         // offset: 0x1a9 ordinal: 0x6
} _ETW_SILODRIVERSTATE;

// 0x538 bytes (sizeof)
typedef struct _MI_NODE_INFORMATION {
  ULONGLONG LargePageFreeCount[2];               // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY LargePages[2][2][4];        // offset: 0x10 ordinal: 0x1
  ULONGLONG LargePagesCount[2][2][4];            // offset: 0x110 ordinal: 0x2
  struct _MMPFNLIST_SHORT StandbyPageList[4][8]; // offset: 0x190 ordinal: 0x3
  ULONGLONG FreeCount[2];                        // offset: 0x490 ordinal: 0x4
  ULONGLONG TotalPages[4];                       // offset: 0x4a0 ordinal: 0x5
  ULONGLONG TotalPagesEntireNode;                // offset: 0x4c0 ordinal: 0x6
  ULONG MmShiftedColor;                          // offset: 0x4c8 ordinal: 0x7
  ULONG Color;                                   // offset: 0x4cc ordinal: 0x8
  ULONGLONG ChannelFreeCount[4][2];              // offset: 0x4d0 ordinal: 0x9
  struct __anon_989 Flags;                       // offset: 0x510 ordinal: 0xa
  struct _EX_PUSH_LOCK NodeLock;                 // offset: 0x518 ordinal: 0xb
  UCHAR ChannelStatus;                           // offset: 0x520 ordinal: 0xc
  UCHAR ChannelOrdering[4];                      // offset: 0x521 ordinal: 0xd
  UCHAR LockedChannelOrdering[4];                // offset: 0x525 ordinal: 0xe
  UCHAR PowerAttribute[4];                       // offset: 0x529 ordinal: 0xf
  ULONGLONG LargePageLock;                       // offset: 0x530 ordinal: 0x10
} _MI_NODE_INFORMATION;

// 0x168 bytes (sizeof)
typedef struct _MI_PARTITION_CORE {
  USHORT PartitionId;                           // offset: 0x0 ordinal: 0x0
  union __anon_939 u;                           // offset: 0x4 ordinal: 0x1
  ULONGLONG ReferenceCount;                     // offset: 0x8 ordinal: 0x2
  struct _MI_PARTITION *ParentPartition;        // offset: 0x10 ordinal: 0x3
  struct _LIST_ENTRY ListEntry;                 // offset: 0x18 ordinal: 0x4
  struct _MI_NODE_INFORMATION *NodeInformation; // offset: 0x28 ordinal: 0x5
  struct _MDL *MdlPhysicalMemoryBlock;          // offset: 0x30 ordinal: 0x6
  struct _PHYSICAL_MEMORY_DESCRIPTOR
      *MemoryNodeRuns;                            // offset: 0x38 ordinal: 0x7
  struct _MI_PARTITION_STATISTICS Stats;          // offset: 0x40 ordinal: 0x8
  struct _PHYSICAL_MEMORY_DESCRIPTOR *MemoryRuns; // offset: 0x90 ordinal: 0x9
  struct _KEVENT ExitEvent;                       // offset: 0x98 ordinal: 0xa
  VOID *SystemThreadHandles[5];                   // offset: 0xb0 ordinal: 0xb
  VOID *PartitionObject;                          // offset: 0xd8 ordinal: 0xc
  VOID *PartitionObjectHandle;                    // offset: 0xe0 ordinal: 0xd
  struct _EX_PUSH_LOCK DynamicMemoryPushLock;     // offset: 0xe8 ordinal: 0xe
  LONG DynamicMemoryLock;                         // offset: 0xf0 ordinal: 0xf
  struct _KEVENT TemporaryMemoryEvent;            // offset: 0xf8 ordinal: 0x10
  struct _KEVENT *MemoryEvents[11];               // offset: 0x110 ordinal: 0x11
} _MI_PARTITION_CORE;

// 0x50 bytes (sizeof)
typedef struct _PROC_PERF_CHECK_SNAP {
  ULONGLONG Time;                          // offset: 0x0 ordinal: 0x0
  ULONGLONG Active;                        // offset: 0x8 ordinal: 0x1
  ULONGLONG Stall;                         // offset: 0x10 ordinal: 0x2
  ULONGLONG FrequencyScaledActive;         // offset: 0x18 ordinal: 0x3
  ULONGLONG PerformanceScaledActive;       // offset: 0x20 ordinal: 0x4
  ULONGLONG PerformanceScaledKernelActive; // offset: 0x28 ordinal: 0x5
  ULONGLONG CyclesActive;                  // offset: 0x30 ordinal: 0x6
  ULONGLONG CyclesAffinitized;             // offset: 0x38 ordinal: 0x7
  ULONGLONG TaggedThreadCycles[2];         // offset: 0x40 ordinal: 0x8
} _PROC_PERF_CHECK_SNAP;

// 0xc0 bytes (sizeof)
typedef struct _PROC_PERF_CHECK {
  ULONGLONG LastActive;                  // offset: 0x0 ordinal: 0x0
  ULONGLONG LastTime;                    // offset: 0x8 ordinal: 0x1
  ULONGLONG LastStall;                   // offset: 0x10 ordinal: 0x2
  struct _PROC_PERF_CHECK_SNAP Snap;     // offset: 0x18 ordinal: 0x3
  struct _PROC_PERF_CHECK_SNAP TempSnap; // offset: 0x68 ordinal: 0x4
  UCHAR TaggedThreadPercent[2];          // offset: 0xb8 ordinal: 0x5
  UCHAR Class0FloorPerfSelection;        // offset: 0xba ordinal: 0x6
  UCHAR Class1MinimumPerfSelection;      // offset: 0xbb ordinal: 0x7
} _PROC_PERF_CHECK;

// 0x90 bytes (sizeof)
typedef struct _PROC_FEEDBACK {
  ULONGLONG Lock;                             // offset: 0x0 ordinal: 0x0
  ULONGLONG CyclesLast;                       // offset: 0x8 ordinal: 0x1
  ULONGLONG CyclesActive;                     // offset: 0x10 ordinal: 0x2
  struct _PROC_FEEDBACK_COUNTER *Counters[2]; // offset: 0x18 ordinal: 0x3
  ULONGLONG LastUpdateTime;                   // offset: 0x28 ordinal: 0x4
  ULONGLONG UnscaledTime;                     // offset: 0x30 ordinal: 0x5
  LONGLONG UnaccountedTime;                   // offset: 0x38 ordinal: 0x6
  ULONGLONG ScaledTime[2];                    // offset: 0x40 ordinal: 0x7
  ULONGLONG UnaccountedKernelTime;            // offset: 0x50 ordinal: 0x8
  ULONGLONG PerformanceScaledKernelTime;      // offset: 0x58 ordinal: 0x9
  ULONG UserTimeLast;                         // offset: 0x60 ordinal: 0xa
  ULONG KernelTimeLast;                       // offset: 0x64 ordinal: 0xb
  ULONGLONG IdleGenerationNumberLast;         // offset: 0x68 ordinal: 0xc
  ULONGLONG HvActiveTimeLast;                 // offset: 0x70 ordinal: 0xd
  ULONGLONG StallCyclesLast;                  // offset: 0x78 ordinal: 0xe
  ULONGLONG StallTime;                        // offset: 0x80 ordinal: 0xf
  UCHAR KernelTimesIndex;                     // offset: 0x88 ordinal: 0x10
} _PROC_FEEDBACK;

// 0x1d0 bytes (sizeof)
typedef struct _PROCESSOR_POWER_STATE {
  struct _PPM_IDLE_STATES *IdleStates;          // offset: 0x0 ordinal: 0x0
  struct _PROC_IDLE_ACCOUNTING *IdleAccounting; // offset: 0x8 ordinal: 0x1
  ULONGLONG IdleTimeLast;                       // offset: 0x10 ordinal: 0x2
  ULONGLONG IdleTimeTotal;                      // offset: 0x18 ordinal: 0x3
  ULONGLONG IdleTimeEntry;                      // offset: 0x20 ordinal: 0x4
  ULONGLONG IdleTimeExpiration;                 // offset: 0x28 ordinal: 0x5
  UCHAR NonInterruptibleTransition;             // offset: 0x30 ordinal: 0x6
  UCHAR PepWokenTransition;                     // offset: 0x31 ordinal: 0x7
  UCHAR Class;                                  // offset: 0x32 ordinal: 0x8
  ULONG TargetIdleState;                        // offset: 0x34 ordinal: 0x9
  struct _PROC_IDLE_POLICY IdlePolicy;          // offset: 0x38 ordinal: 0xa
  union _PPM_IDLE_SYNCHRONIZATION_STATE
      Synchronization;                    // offset: 0x40 ordinal: 0xb
  struct _PROC_FEEDBACK PerfFeedback;     // offset: 0x48 ordinal: 0xc
  enum _PROC_HYPERVISOR_STATE Hypervisor; // offset: 0xd8 ordinal: 0xd
  ULONG LastSysTime;                      // offset: 0xdc ordinal: 0xe
  ULONGLONG WmiDispatchPtr;               // offset: 0xe0 ordinal: 0xf
  LONG WmiInterfaceEnabled;               // offset: 0xe8 ordinal: 0x10
  struct _PPM_FFH_THROTTLE_STATE_INFO
      FFHThrottleStateInfo;                     // offset: 0xf0 ordinal: 0x11
  struct _KDPC PerfActionDpc;                   // offset: 0x110 ordinal: 0x12
  LONG PerfActionMask;                          // offset: 0x150 ordinal: 0x13
  struct _PROC_IDLE_SNAP HvIdleCheck;           // offset: 0x158 ordinal: 0x14
  struct _PROC_PERF_CHECK *PerfCheck;           // offset: 0x168 ordinal: 0x15
  struct _PROC_PERF_DOMAIN *Domain;             // offset: 0x170 ordinal: 0x16
  struct _PROC_PERF_CONSTRAINT *PerfConstraint; // offset: 0x178 ordinal: 0x17
  struct _PPM_CONCURRENCY_ACCOUNTING
      *Concurrency;                       // offset: 0x180 ordinal: 0x18
  struct _PROC_PERF_LOAD *Load;           // offset: 0x188 ordinal: 0x19
  struct _PROC_PERF_HISTORY *PerfHistory; // offset: 0x190 ordinal: 0x1a
  UCHAR GuaranteedPerformancePercent;     // offset: 0x198 ordinal: 0x1b
  UCHAR HvTargetState;                    // offset: 0x199 ordinal: 0x1c
  UCHAR Parked;                           // offset: 0x19a ordinal: 0x1d
  ULONG LatestPerformancePercent;         // offset: 0x19c ordinal: 0x1e
  ULONG AveragePerformancePercent;        // offset: 0x1a0 ordinal: 0x1f
  ULONG LatestAffinitizedPercent;         // offset: 0x1a4 ordinal: 0x20
  ULONG RelativePerformance;              // offset: 0x1a8 ordinal: 0x21
  ULONG Utility;                          // offset: 0x1ac ordinal: 0x22
  ULONG AffinitizedUtility;               // offset: 0x1b0 ordinal: 0x23
  union {
    ULONGLONG SnapTimeLast;   // offset: 0x1b8 ordinal: 0x24
    ULONGLONG EnergyConsumed; // offset: 0x1b8 ordinal: 0x25
  };
  ULONGLONG ActiveTime; // offset: 0x1c0 ordinal: 0x26
  ULONGLONG TotalTime;  // offset: 0x1c8 ordinal: 0x27
} _PROCESSOR_POWER_STATE;

// 0x90 bytes (sizeof)
typedef struct _PROCESS_ENERGY_VALUES {
  ULONGLONG Cycles[4][2];             // offset: 0x0 ordinal: 0x0
  ULONGLONG DiskEnergy;               // offset: 0x40 ordinal: 0x1
  ULONGLONG NetworkTailEnergy;        // offset: 0x48 ordinal: 0x2
  ULONGLONG MBBTailEnergy;            // offset: 0x50 ordinal: 0x3
  ULONGLONG NetworkTxRxBytes;         // offset: 0x58 ordinal: 0x4
  ULONGLONG MBBTxRxBytes;             // offset: 0x60 ordinal: 0x5
  ULONG Foreground : 1;               // offset: 0x68 ordinal: 0x6
  ULONG WindowInformation;            // offset: 0x68 ordinal: 0x7
  ULONG PixelArea;                    // offset: 0x6c ordinal: 0x8
  LONGLONG PixelReportTimestamp;      // offset: 0x70 ordinal: 0x9
  ULONGLONG PixelTime;                // offset: 0x78 ordinal: 0xa
  LONGLONG ForegroundReportTimestamp; // offset: 0x80 ordinal: 0xb
  ULONGLONG ForegroundTime;           // offset: 0x88 ordinal: 0xc
} _PROCESS_ENERGY_VALUES;

// 0x528 bytes (sizeof)
typedef struct _EJOB {
  struct _KEVENT Event;                           // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY JobLinks;                    // offset: 0x18 ordinal: 0x1
  struct _LIST_ENTRY ProcessListHead;             // offset: 0x28 ordinal: 0x2
  struct _ERESOURCE JobLock;                      // offset: 0x38 ordinal: 0x3
  union _LARGE_INTEGER TotalUserTime;             // offset: 0xa0 ordinal: 0x4
  union _LARGE_INTEGER TotalKernelTime;           // offset: 0xa8 ordinal: 0x5
  union _LARGE_INTEGER TotalCycleTime;            // offset: 0xb0 ordinal: 0x6
  union _LARGE_INTEGER ThisPeriodTotalUserTime;   // offset: 0xb8 ordinal: 0x7
  union _LARGE_INTEGER ThisPeriodTotalKernelTime; // offset: 0xc0 ordinal: 0x8
  ULONGLONG TotalContextSwitches;                 // offset: 0xc8 ordinal: 0x9
  ULONG TotalPageFaultCount;                      // offset: 0xd0 ordinal: 0xa
  ULONG TotalProcesses;                           // offset: 0xd4 ordinal: 0xb
  ULONG ActiveProcesses;                          // offset: 0xd8 ordinal: 0xc
  ULONG TotalTerminatedProcesses;                 // offset: 0xdc ordinal: 0xd
  union _LARGE_INTEGER PerProcessUserTimeLimit;   // offset: 0xe0 ordinal: 0xe
  union _LARGE_INTEGER PerJobUserTimeLimit;       // offset: 0xe8 ordinal: 0xf
  ULONGLONG MinimumWorkingSetSize;                // offset: 0xf0 ordinal: 0x10
  ULONGLONG MaximumWorkingSetSize;                // offset: 0xf8 ordinal: 0x11
  ULONG LimitFlags;                               // offset: 0x100 ordinal: 0x12
  ULONG ActiveProcessLimit;                       // offset: 0x104 ordinal: 0x13
  struct _KAFFINITY_EX Affinity;                  // offset: 0x108 ordinal: 0x14
  struct _JOB_ACCESS_STATE *AccessState;          // offset: 0x1b0 ordinal: 0x15
  VOID *AccessStateQuotaReference;                // offset: 0x1b8 ordinal: 0x16
  ULONG UIRestrictionsClass;                      // offset: 0x1c0 ordinal: 0x17
  ULONG EndOfJobTimeAction;                       // offset: 0x1c4 ordinal: 0x18
  VOID *CompletionPort;                           // offset: 0x1c8 ordinal: 0x19
  VOID *CompletionKey;                            // offset: 0x1d0 ordinal: 0x1a
  ULONGLONG CompletionCount;                      // offset: 0x1d8 ordinal: 0x1b
  ULONG SessionId;                                // offset: 0x1e0 ordinal: 0x1c
  ULONG SchedulingClass;                          // offset: 0x1e4 ordinal: 0x1d
  ULONGLONG ReadOperationCount;                   // offset: 0x1e8 ordinal: 0x1e
  ULONGLONG WriteOperationCount;                  // offset: 0x1f0 ordinal: 0x1f
  ULONGLONG OtherOperationCount;                  // offset: 0x1f8 ordinal: 0x20
  ULONGLONG ReadTransferCount;                    // offset: 0x200 ordinal: 0x21
  ULONGLONG WriteTransferCount;                   // offset: 0x208 ordinal: 0x22
  ULONGLONG OtherTransferCount;                   // offset: 0x210 ordinal: 0x23
  struct _PROCESS_DISK_COUNTERS DiskIoInfo;       // offset: 0x218 ordinal: 0x24
  ULONGLONG ProcessMemoryLimit;                   // offset: 0x240 ordinal: 0x25
  ULONGLONG JobMemoryLimit;                       // offset: 0x248 ordinal: 0x26
  ULONGLONG JobTotalMemoryLimit;                  // offset: 0x250 ordinal: 0x27
  ULONGLONG PeakProcessMemoryUsed;                // offset: 0x258 ordinal: 0x28
  ULONGLONG PeakJobMemoryUsed;                    // offset: 0x260 ordinal: 0x29
  struct _KAFFINITY_EX EffectiveAffinity;         // offset: 0x268 ordinal: 0x2a
  union _LARGE_INTEGER
      EffectivePerProcessUserTimeLimit;         // offset: 0x310 ordinal: 0x2b
  ULONGLONG EffectiveMinimumWorkingSetSize;     // offset: 0x318 ordinal: 0x2c
  ULONGLONG EffectiveMaximumWorkingSetSize;     // offset: 0x320 ordinal: 0x2d
  ULONGLONG EffectiveProcessMemoryLimit;        // offset: 0x328 ordinal: 0x2e
  struct _EJOB *EffectiveProcessMemoryLimitJob; // offset: 0x330 ordinal: 0x2f
  struct _EJOB
      *EffectivePerProcessUserTimeLimitJob;  // offset: 0x338 ordinal: 0x30
  struct _EJOB *EffectiveDiskIoRateLimitJob; // offset: 0x340 ordinal: 0x31
  struct _EJOB *EffectiveNetIoRateLimitJob;  // offset: 0x348 ordinal: 0x32
  struct _EJOB *EffectiveHeapAttributionJob; // offset: 0x350 ordinal: 0x33
  ULONG EffectiveLimitFlags;                 // offset: 0x358 ordinal: 0x34
  ULONG EffectiveSchedulingClass;            // offset: 0x35c ordinal: 0x35
  ULONG EffectiveFreezeCount;                // offset: 0x360 ordinal: 0x36
  ULONG EffectiveBackgroundCount;            // offset: 0x364 ordinal: 0x37
  ULONG EffectiveSwapCount;                  // offset: 0x368 ordinal: 0x38
  ULONG EffectiveNotificationLimitCount;     // offset: 0x36c ordinal: 0x39
  UCHAR EffectivePriorityClass;              // offset: 0x370 ordinal: 0x3a
  UCHAR PriorityClass;                       // offset: 0x371 ordinal: 0x3b
  UCHAR NestingDepth;                        // offset: 0x372 ordinal: 0x3c
  UCHAR Reserved1[1];                        // offset: 0x373 ordinal: 0x3d
  ULONG CompletionFilter;                    // offset: 0x374 ordinal: 0x3e
  union {
    struct _WNF_STATE_NAME WakeChannel;   // offset: 0x378 ordinal: 0x3f
    struct _PS_WAKE_INFORMATION WakeInfo; // offset: 0x378 ordinal: 0x40
  };
  struct _JOBOBJECT_WAKE_FILTER WakeFilter; // offset: 0x3b0 ordinal: 0x41
  ULONG LowEdgeLatchFilter;                 // offset: 0x3b8 ordinal: 0x42
  ULONG OwnedHighEdgeFilters;               // offset: 0x3bc ordinal: 0x43
  struct _EJOB *NotificationLink;           // offset: 0x3c0 ordinal: 0x44
  ULONGLONG CurrentJobMemoryUsed;           // offset: 0x3c8 ordinal: 0x45
  struct _JOB_NOTIFICATION_INFORMATION
      *NotificationInfo;                // offset: 0x3d0 ordinal: 0x46
  VOID *NotificationInfoQuotaReference; // offset: 0x3d8 ordinal: 0x47
  struct _IO_MINI_COMPLETION_PACKET_USER
      *NotificationPacket;                      // offset: 0x3e0 ordinal: 0x48
  struct _JOB_CPU_RATE_CONTROL *CpuRateControl; // offset: 0x3e8 ordinal: 0x49
  VOID *EffectiveSchedulingGroup;               // offset: 0x3f0 ordinal: 0x4a
  ULONGLONG ReadyTime;                          // offset: 0x3f8 ordinal: 0x4b
  struct _EX_PUSH_LOCK MemoryLimitsLock;        // offset: 0x400 ordinal: 0x4c
  struct _LIST_ENTRY SiblingJobLinks;           // offset: 0x408 ordinal: 0x4d
  struct _LIST_ENTRY ChildJobListHead;          // offset: 0x418 ordinal: 0x4e
  struct _EJOB *ParentJob;                      // offset: 0x428 ordinal: 0x4f
  struct _EJOB *RootJob;                        // offset: 0x430 ordinal: 0x50
  struct _LIST_ENTRY IteratorListHead;          // offset: 0x438 ordinal: 0x51
  ULONGLONG AncestorCount;                      // offset: 0x448 ordinal: 0x52
  union {
    struct _EJOB **Ancestors; // offset: 0x450 ordinal: 0x53
    VOID *SessionObject;      // offset: 0x450 ordinal: 0x54
  };
  struct _EPROCESS_VALUES Accounting;           // offset: 0x458 ordinal: 0x55
  ULONG ShadowActiveProcessCount;               // offset: 0x4a8 ordinal: 0x56
  ULONG ActiveAuxiliaryProcessCount;            // offset: 0x4ac ordinal: 0x57
  ULONG SequenceNumber;                         // offset: 0x4b0 ordinal: 0x58
  ULONGLONG TimerListLock;                      // offset: 0x4b8 ordinal: 0x59
  struct _LIST_ENTRY TimerListHead;             // offset: 0x4c0 ordinal: 0x5a
  struct _GUID ContainerId;                     // offset: 0x4d0 ordinal: 0x5b
  struct _ESILO *Container;                     // offset: 0x4e0 ordinal: 0x5c
  struct _PS_PROPERTY_SET PropertySet;          // offset: 0x4e8 ordinal: 0x5d
  struct _JOB_NET_RATE_CONTROL *NetRateControl; // offset: 0x500 ordinal: 0x5e
  struct _JOB_IO_RATE_CONTROL *IoRateControl;   // offset: 0x508 ordinal: 0x5f
  union {
    ULONG JobFlags;      // offset: 0x510 ordinal: 0x60
    ULONG CloseDone : 1; // offset: 0x510 ordinal: 0x61
  };
  ULONG MultiGroup : 1;                        // offset: 0x510 ordinal: 0x62
  ULONG OutstandingNotification : 1;           // offset: 0x510 ordinal: 0x63
  ULONG NotificationInProgress : 1;            // offset: 0x510 ordinal: 0x64
  ULONG UILimits : 1;                          // offset: 0x510 ordinal: 0x65
  ULONG CpuRateControlActive : 1;              // offset: 0x510 ordinal: 0x66
  ULONG OwnCpuRateControl : 1;                 // offset: 0x510 ordinal: 0x67
  ULONG Terminating : 1;                       // offset: 0x510 ordinal: 0x68
  ULONG WorkingSetLock : 1;                    // offset: 0x510 ordinal: 0x69
  ULONG JobFrozen : 1;                         // offset: 0x510 ordinal: 0x6a
  ULONG Background : 1;                        // offset: 0x510 ordinal: 0x6b
  ULONG WakeNotificationAllocated : 1;         // offset: 0x510 ordinal: 0x6c
  ULONG WakeNotificationEnabled : 1;           // offset: 0x510 ordinal: 0x6d
  ULONG WakeNotificationPending : 1;           // offset: 0x510 ordinal: 0x6e
  ULONG LimitNotificationRequired : 1;         // offset: 0x510 ordinal: 0x6f
  ULONG ZeroCountNotificationRequired : 1;     // offset: 0x510 ordinal: 0x70
  ULONG CycleTimeNotificationRequired : 1;     // offset: 0x510 ordinal: 0x71
  ULONG CycleTimeNotificationPending : 1;      // offset: 0x510 ordinal: 0x72
  ULONG TimersVirtualized : 1;                 // offset: 0x510 ordinal: 0x73
  ULONG JobSwapped : 1;                        // offset: 0x510 ordinal: 0x74
  ULONG ViolationDetected : 1;                 // offset: 0x510 ordinal: 0x75
  ULONG EmptyJobNotified : 1;                  // offset: 0x510 ordinal: 0x76
  ULONG NoSystemCharge : 1;                    // offset: 0x510 ordinal: 0x77
  ULONG DropNoWakeCharges : 1;                 // offset: 0x510 ordinal: 0x78
  ULONG NoWakeChargePolicyDecided : 1;         // offset: 0x510 ordinal: 0x79
  ULONG NetRateControlActive : 1;              // offset: 0x510 ordinal: 0x7a
  ULONG OwnNetRateControl : 1;                 // offset: 0x510 ordinal: 0x7b
  ULONG IoRateControlActive : 1;               // offset: 0x510 ordinal: 0x7c
  ULONG OwnIoRateControl : 1;                  // offset: 0x510 ordinal: 0x7d
  ULONG IsContainerRoot : 1;                   // offset: 0x510 ordinal: 0x7e
  ULONG SpareJobFlags : 2;                     // offset: 0x510 ordinal: 0x7f
  ULONG EffectiveHighEdgeFilters;              // offset: 0x514 ordinal: 0x80
  struct _PROCESS_ENERGY_VALUES *EnergyValues; // offset: 0x518 ordinal: 0x81
  ULONGLONG SharedCommitCharge;                // offset: 0x520 ordinal: 0x82
} _EJOB;

// 0x40 bytes (sizeof)
typedef struct _THREAD_ENERGY_VALUES {
  ULONGLONG Cycles[4][2]; // offset: 0x0 ordinal: 0x0
} _THREAD_ENERGY_VALUES;

// 0x18 bytes (sizeof)
typedef struct _RTL_BALANCED_NODE {
  union {
    struct _RTL_BALANCED_NODE *Children[2]; // offset: 0x0 ordinal: 0x0
    struct _RTL_BALANCED_NODE *Left;        // offset: 0x0 ordinal: 0x1
  };
  struct _RTL_BALANCED_NODE *Right; // offset: 0x8 ordinal: 0x2
  UCHAR Red : 1;                    // offset: 0x10 ordinal: 0x3
  UCHAR Balance : 2;                // offset: 0x10 ordinal: 0x4
  ULONGLONG ParentValue;            // offset: 0x10 ordinal: 0x5
} _RTL_BALANCED_NODE;

// 0x118 bytes (sizeof)
typedef struct _LDR_DATA_TABLE_ENTRY {
  struct _LIST_ENTRY InLoadOrderLinks;           // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY InMemoryOrderLinks;         // offset: 0x10 ordinal: 0x1
  struct _LIST_ENTRY InInitializationOrderLinks; // offset: 0x20 ordinal: 0x2
  VOID *DllBase;                                 // offset: 0x30 ordinal: 0x3
  VOID *EntryPoint;                              // offset: 0x38 ordinal: 0x4
  ULONG SizeOfImage;                             // offset: 0x40 ordinal: 0x5
  struct _UNICODE_STRING FullDllName;            // offset: 0x48 ordinal: 0x6
  struct _UNICODE_STRING BaseDllName;            // offset: 0x58 ordinal: 0x7
  union {
    UCHAR FlagGroup[4];       // offset: 0x68 ordinal: 0x8
    ULONG Flags;              // offset: 0x68 ordinal: 0x9
    ULONG PackagedBinary : 1; // offset: 0x68 ordinal: 0xa
  };
  ULONG MarkedForRemoval : 1;        // offset: 0x68 ordinal: 0xb
  ULONG ImageDll : 1;                // offset: 0x68 ordinal: 0xc
  ULONG LoadNotificationsSent : 1;   // offset: 0x68 ordinal: 0xd
  ULONG TelemetryEntryProcessed : 1; // offset: 0x68 ordinal: 0xe
  ULONG ProcessStaticImport : 1;     // offset: 0x68 ordinal: 0xf
  ULONG InLegacyLists : 1;           // offset: 0x68 ordinal: 0x10
  ULONG InIndexes : 1;               // offset: 0x68 ordinal: 0x11
  ULONG ShimDll : 1;                 // offset: 0x68 ordinal: 0x12
  ULONG InExceptionTable : 1;        // offset: 0x68 ordinal: 0x13
  ULONG ReservedFlags1 : 2;          // offset: 0x68 ordinal: 0x14
  ULONG LoadInProgress : 1;          // offset: 0x68 ordinal: 0x15
  ULONG LoadConfigProcessed : 1;     // offset: 0x68 ordinal: 0x16
  ULONG EntryProcessed : 1;          // offset: 0x68 ordinal: 0x17
  ULONG ProtectDelayLoad : 1;        // offset: 0x68 ordinal: 0x18
  ULONG ReservedFlags3 : 2;          // offset: 0x68 ordinal: 0x19
  ULONG DontCallForThreads : 1;      // offset: 0x68 ordinal: 0x1a
  ULONG ProcessAttachCalled : 1;     // offset: 0x68 ordinal: 0x1b
  ULONG ProcessAttachFailed : 1;     // offset: 0x68 ordinal: 0x1c
  ULONG CorDeferredValidate : 1;     // offset: 0x68 ordinal: 0x1d
  ULONG CorImage : 1;                // offset: 0x68 ordinal: 0x1e
  ULONG DontRelocate : 1;            // offset: 0x68 ordinal: 0x1f
  ULONG CorILOnly : 1;               // offset: 0x68 ordinal: 0x20
  ULONG ReservedFlags5 : 3;          // offset: 0x68 ordinal: 0x21
  ULONG Redirected : 1;              // offset: 0x68 ordinal: 0x22
  ULONG ReservedFlags6 : 2;          // offset: 0x68 ordinal: 0x23
  ULONG CompatDatabaseProcessed : 1; // offset: 0x68 ordinal: 0x24
  USHORT ObsoleteLoadCount;          // offset: 0x6c ordinal: 0x25
  USHORT TlsIndex;                   // offset: 0x6e ordinal: 0x26
  struct _LIST_ENTRY HashLinks;      // offset: 0x70 ordinal: 0x27
  ULONG TimeDateStamp;               // offset: 0x80 ordinal: 0x28
  struct _ACTIVATION_CONTEXT
      *EntryPointActivationContext;               // offset: 0x88 ordinal: 0x29
  VOID *Lock;                                     // offset: 0x90 ordinal: 0x2a
  struct _LDR_DDAG_NODE *DdagNode;                // offset: 0x98 ordinal: 0x2b
  struct _LIST_ENTRY NodeModuleLink;              // offset: 0xa0 ordinal: 0x2c
  struct _LDRP_LOAD_CONTEXT *LoadContext;         // offset: 0xb0 ordinal: 0x2d
  VOID *ParentDllBase;                            // offset: 0xb8 ordinal: 0x2e
  VOID *SwitchBackContext;                        // offset: 0xc0 ordinal: 0x2f
  struct _RTL_BALANCED_NODE BaseAddressIndexNode; // offset: 0xc8 ordinal: 0x30
  struct _RTL_BALANCED_NODE MappingInfoIndexNode; // offset: 0xe0 ordinal: 0x31
  ULONGLONG OriginalBase;                         // offset: 0xf8 ordinal: 0x32
  union _LARGE_INTEGER LoadTime;                  // offset: 0x100 ordinal: 0x33
  ULONG BaseNameHashValue;                        // offset: 0x108 ordinal: 0x34
  enum _LDR_DLL_LOAD_REASON LoadReason;           // offset: 0x10c ordinal: 0x35
  ULONG ImplicitPathOptions;                      // offset: 0x110 ordinal: 0x36
  ULONG ReferenceCount;                           // offset: 0x114 ordinal: 0x37
} _LDR_DATA_TABLE_ENTRY;

// 0x20 bytes (sizeof)
typedef struct _ETW_PROVIDER_TRAITS {
  struct _RTL_BALANCED_NODE Node; // offset: 0x0 ordinal: 0x0
  ULONG ReferenceCount;           // offset: 0x18 ordinal: 0x1
  UCHAR Traits[1];                // offset: 0x1c ordinal: 0x2
} _ETW_PROVIDER_TRAITS;

// 0x40 bytes (sizeof)
typedef struct _SECTION {
  struct _RTL_BALANCED_NODE SectionNode; // offset: 0x0 ordinal: 0x0
  ULONGLONG StartingVpn;                 // offset: 0x18 ordinal: 0x1
  ULONGLONG EndingVpn;                   // offset: 0x20 ordinal: 0x2
  union __anon_2122 u1;                  // offset: 0x28 ordinal: 0x3
  ULONGLONG SizeOfSection;               // offset: 0x30 ordinal: 0x4
  union __anon_880 u;                    // offset: 0x38 ordinal: 0x5
  ULONG InitialPageProtection : 12;      // offset: 0x3c ordinal: 0x6
  ULONG SessionId : 19;                  // offset: 0x3c ordinal: 0x7
  ULONG NoValidationNeeded : 1;          // offset: 0x3c ordinal: 0x8
} _SECTION;

// 0x88 bytes (sizeof)
typedef struct _KTIMER2 {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 ordinal: 0x0
  union {
    struct _RTL_BALANCED_NODE RbNodes[2]; // offset: 0x18 ordinal: 0x1
    struct _LIST_ENTRY ListEntry;         // offset: 0x18 ordinal: 0x2
  };
  ULONGLONG DueTime;                           // offset: 0x48 ordinal: 0x3
  ULONGLONG MaximumDueTime;                    // offset: 0x50 ordinal: 0x4
  LONGLONG Period;                             // offset: 0x58 ordinal: 0x5
  VOID (*Callback)(struct _KTIMER2 *, VOID *); // offset: 0x60 ordinal: 0x6
  VOID *CallbackContext;                       // offset: 0x68 ordinal: 0x7
  VOID (*DisableCallback)(VOID *);             // offset: 0x70 ordinal: 0x8
  VOID *DisableContext;                        // offset: 0x78 ordinal: 0x9
  UCHAR AbsoluteSystemTime;                    // offset: 0x80 ordinal: 0xa
  union {
    UCHAR TypeFlags; // offset: 0x81 ordinal: 0xb
    UCHAR Plain : 1; // offset: 0x81 ordinal: 0xc
  };
  UCHAR IdleResilient : 1;  // offset: 0x81 ordinal: 0xd
  UCHAR HighResolution : 1; // offset: 0x81 ordinal: 0xe
  UCHAR NoWake : 1;         // offset: 0x81 ordinal: 0xf
  UCHAR NoWakeFinite : 1;   // offset: 0x81 ordinal: 0x10
  UCHAR Unused : 3;         // offset: 0x81 ordinal: 0x11
} _KTIMER2;

typedef VOID (*__anon_1916)(struct _KTIMER2 *, VOID *);

// 0x50 bytes (sizeof)
typedef struct _MMCLONE_DESCRIPTOR {
  union {
    struct _RTL_BALANCED_NODE CloneNode; // offset: 0x0 ordinal: 0x0
    struct _MMCLONE_DESCRIPTOR *Next;    // offset: 0x0 ordinal: 0x1
  };
  struct _MMCLONE_BLOCK *StartingCloneBlock; // offset: 0x18 ordinal: 0x2
  struct _MMCLONE_BLOCK *EndingCloneBlock;   // offset: 0x20 ordinal: 0x3
  ULONGLONG NumberOfPtes;                    // offset: 0x28 ordinal: 0x4
  ULONGLONG NumberOfReferences;              // offset: 0x30 ordinal: 0x5
  struct _MMCLONE_HEADER *CloneHeader;       // offset: 0x38 ordinal: 0x6
  ULONGLONG NonPagedPoolQuotaCharge;         // offset: 0x40 ordinal: 0x7
  ULONGLONG NestingLevel;                    // offset: 0x48 ordinal: 0x8
} _MMCLONE_DESCRIPTOR;

// 0x30 bytes (sizeof)
typedef struct _MMPFN {
  union {
    struct _LIST_ENTRY ListEntry;       // offset: 0x0 ordinal: 0x0
    struct _RTL_BALANCED_NODE TreeNode; // offset: 0x0 ordinal: 0x1
    union __anon_907 u1;                // offset: 0x0 ordinal: 0x2
  };
  union {
    struct _MMPTE *PteAddress; // offset: 0x8 ordinal: 0x3
    VOID *VolatilePteAddress;  // offset: 0x8 ordinal: 0x4
    ULONGLONG PteLong;         // offset: 0x8 ordinal: 0x5
  };
  struct _MMPTE OriginalPte; // offset: 0x10 ordinal: 0x6
  struct _MIPFNBLINK u2;     // offset: 0x18 ordinal: 0x7
  union __anon_909 u3;       // offset: 0x20 ordinal: 0x8
  USHORT NodeBlinkLow;       // offset: 0x24 ordinal: 0x9
  UCHAR Unused : 4;          // offset: 0x26 ordinal: 0xa
  UCHAR VaType : 4;          // offset: 0x26 ordinal: 0xb
  union {
    UCHAR ViewCount;    // offset: 0x27 ordinal: 0xc
    UCHAR NodeFlinkLow; // offset: 0x27 ordinal: 0xd
  };
  union __anon_910 u4; // offset: 0x28 ordinal: 0xe
} _MMPFN;

// 0x1a0 bytes (sizeof)
typedef struct _MI_SYSTEM_NODE_INFORMATION {
  union _SLIST_HEADER PagedPoolSListHead;           // offset: 0x0 ordinal: 0x0
  union _SLIST_HEADER NonPagedPoolSListHead[3];     // offset: 0x10 ordinal: 0x1
  union _SLIST_HEADER NonPagedPoolSListHeadNx[3];   // offset: 0x40 ordinal: 0x2
  struct _CACHED_KSTACK_LIST CachedKernelStacks[2]; // offset: 0x70 ordinal: 0x3
  ULONGLONG NonPagedBitMapMaximum;                  // offset: 0xb0 ordinal: 0x4
  struct _MI_DYNAMIC_BITMAP
      DynamicBitMapNonPagedPool;            // offset: 0xb8 ordinal: 0x5
  ULONGLONG NonPagedPoolLowestPage;         // offset: 0x108 ordinal: 0x6
  ULONGLONG NonPagedPoolHighestPage;        // offset: 0x110 ordinal: 0x7
  ULONGLONG AllocatedNonPagedPool;          // offset: 0x118 ordinal: 0x8
  ULONGLONG PartialLargePoolRegions;        // offset: 0x120 ordinal: 0x9
  ULONGLONG PagesInPartialLargePoolRegions; // offset: 0x128 ordinal: 0xa
  ULONGLONG CachedNonPagedPoolCount;        // offset: 0x130 ordinal: 0xb
  ULONGLONG NonPagedPoolSpinLock;           // offset: 0x138 ordinal: 0xc
  struct _MMPFN *CachedNonPagedPool;        // offset: 0x140 ordinal: 0xd
  VOID *NonPagedPoolFirstVa;                // offset: 0x148 ordinal: 0xe
  VOID *NonPagedPoolLastVa;                 // offset: 0x150 ordinal: 0xf
  struct _RTL_BITMAP_EX NonPagedBitMap[3];  // offset: 0x158 ordinal: 0x10
  ULONGLONG NonPagedHint[2];                // offset: 0x188 ordinal: 0x11
} _MI_SYSTEM_NODE_INFORMATION;

// 0xa8 bytes (sizeof)
typedef struct _MI_HARDWARE_STATE {
  ULONG NodeMask;    // offset: 0x0 ordinal: 0x0
  USHORT *NodeGraph; // offset: 0x8 ordinal: 0x1
  struct _MI_SYSTEM_NODE_INFORMATION
      *SystemNodeInformation;               // offset: 0x10 ordinal: 0x2
  ULONG NumaLastRangeIndex;                 // offset: 0x18 ordinal: 0x3
  struct _HAL_NODE_RANGE *NumaMemoryRanges; // offset: 0x20 ordinal: 0x4
  UCHAR NumaTableCaptured;                  // offset: 0x28 ordinal: 0x5
  UCHAR NodeShift;                          // offset: 0x29 ordinal: 0x6
  struct _HAL_CHANNEL_MEMORY_RANGES
      *ChannelMemoryRanges;                      // offset: 0x30 ordinal: 0x7
  UCHAR ChannelShift;                            // offset: 0x38 ordinal: 0x8
  ULONG SecondLevelCacheSize;                    // offset: 0x3c ordinal: 0x9
  ULONG FirstLevelCacheSize;                     // offset: 0x40 ordinal: 0xa
  ULONG PhysicalAddressBits;                     // offset: 0x44 ordinal: 0xb
  UCHAR WriteCombiningPtes;                      // offset: 0x48 ordinal: 0xc
  UCHAR AllMainMemoryMustBeCached;               // offset: 0x49 ordinal: 0xd
  ULONGLONG TotalPagesAllowed;                   // offset: 0x50 ordinal: 0xe
  ULONG SecondaryColorMask;                      // offset: 0x58 ordinal: 0xf
  ULONG SecondaryColors;                         // offset: 0x5c ordinal: 0x10
  ULONG FlushTbForAttributeChange;               // offset: 0x60 ordinal: 0x11
  ULONG FlushCacheForAttributeChange;            // offset: 0x64 ordinal: 0x12
  ULONG FlushCacheForPageAttributeChange;        // offset: 0x68 ordinal: 0x13
  ULONG CacheFlushPromoteThreshold;              // offset: 0x6c ordinal: 0x14
  ULONGLONG FlushTbThreshold;                    // offset: 0x70 ordinal: 0x15
  struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2]; // offset: 0x78 ordinal: 0x16
  ULONGLONG PrimaryPfns;                         // offset: 0x98 ordinal: 0x17
  ULONGLONG HighestPossiblePhysicalPage;         // offset: 0xa0 ordinal: 0x18
} _MI_HARDWARE_STATE;

// 0x88 bytes (sizeof)
typedef struct _MI_COMMON_PAGE_STATE {
  struct _MMPFN *PageOfOnesPfn; // offset: 0x0 ordinal: 0x0
  ULONGLONG PageOfOnes;         // offset: 0x8 ordinal: 0x1
  struct _MMPFN *DummyPagePfn;  // offset: 0x10 ordinal: 0x2
  ULONGLONG DummyPage;          // offset: 0x18 ordinal: 0x3
  ULONGLONG PageOfZeroes;       // offset: 0x20 ordinal: 0x4
  VOID *ZeroMapping;            // offset: 0x28 ordinal: 0x5
  VOID *OnesMapping;            // offset: 0x30 ordinal: 0x6
  ULONGLONG BitmapGapFrames[4]; // offset: 0x38 ordinal: 0x7
  ULONGLONG PfnGapFrames[4];    // offset: 0x58 ordinal: 0x8
  ULONGLONG PageTableOfOnes;    // offset: 0x78 ordinal: 0x9
  struct _MMPTE PdeOfOnes;      // offset: 0x80 ordinal: 0xa
} _MI_COMMON_PAGE_STATE;

// 0x18 bytes (sizeof)
typedef struct _COLORED_PAGE_INFO {
  LONG BeingZeroed;             // offset: 0x0 ordinal: 0x0
  ULONG Processor;              // offset: 0x4 ordinal: 0x1
  ULONGLONG PagesQueued;        // offset: 0x8 ordinal: 0x2
  struct _MMPFN *PfnAllocation; // offset: 0x10 ordinal: 0x3
} _COLORED_PAGE_INFO;

// 0x28 bytes (sizeof)
typedef struct _MI_LARGEPAGE_MEMORY_INFO {
  struct _LIST_ENTRY ListHead;                    // offset: 0x0 ordinal: 0x0
  struct _COLORED_PAGE_INFO *ColoredPageInfoBase; // offset: 0x10 ordinal: 0x1
  ULONG PagesNeedZeroing;                         // offset: 0x18 ordinal: 0x2
  UCHAR LargeImageBias;                           // offset: 0x1c ordinal: 0x3
  UCHAR Spare[3];                                 // offset: 0x1d ordinal: 0x4
  ULONGLONG ActualImageViewSize;                  // offset: 0x20 ordinal: 0x5
} _MI_LARGEPAGE_MEMORY_INFO;

// 0x38 bytes (sizeof)
typedef struct _MMINPAGE_SUPPORT_FLOW_THROUGH {
  ULONGLONG Page[1];                              // offset: 0x0 ordinal: 0x0
  struct _MMINPAGE_SUPPORT *InitialInPageSupport; // offset: 0x8 ordinal: 0x1
  struct _MMPAGING_FILE *PagingFile;              // offset: 0x10 ordinal: 0x2
  ULONGLONG PageFileOffset;                       // offset: 0x18 ordinal: 0x3
  struct _RTL_BALANCED_NODE Node;                 // offset: 0x20 ordinal: 0x4
} _MMINPAGE_SUPPORT_FLOW_THROUGH;

// 0x30 bytes (sizeof)
typedef struct _MI_PER_SESSION_PROTOS {
  union {
    struct _RTL_BALANCED_NODE SessionProtoNode; // offset: 0x0 ordinal: 0x0
    struct _SINGLE_LIST_ENTRY FreeList;         // offset: 0x0 ordinal: 0x1
    VOID *DriverAddress;                        // offset: 0x0 ordinal: 0x2
  };
  union {
    ULONG SessionId;                // offset: 0x18 ordinal: 0x3
    struct _SUBSECTION *Subsection; // offset: 0x18 ordinal: 0x4
  };
  struct _MMPTE *SubsectionBase; // offset: 0x20 ordinal: 0x5
  union __anon_885 u2;           // offset: 0x28 ordinal: 0x6
} _MI_PER_SESSION_PROTOS;

// 0x38 bytes (sizeof)
typedef struct _SUBSECTION {
  struct _CONTROL_AREA *ControlArea;  // offset: 0x0 ordinal: 0x0
  struct _MMPTE *SubsectionBase;      // offset: 0x8 ordinal: 0x1
  struct _SUBSECTION *NextSubsection; // offset: 0x10 ordinal: 0x2
  union {
    struct _MI_FILE_EXTENTS *FileExtents;      // offset: 0x18 ordinal: 0x3
    struct _RTL_AVL_TREE GlobalPerSessionHead; // offset: 0x18 ordinal: 0x4
    struct _MI_PER_SESSION_PROTOS
        *SessionDriverProtos; // offset: 0x18 ordinal: 0x5
  };
  union __anon_844 u;        // offset: 0x20 ordinal: 0x6
  ULONG StartingSector;      // offset: 0x24 ordinal: 0x7
  ULONG NumberOfFullSectors; // offset: 0x28 ordinal: 0x8
  ULONG PtesInSubsection;    // offset: 0x2c ordinal: 0x9
  union __anon_845 u1;       // offset: 0x30 ordinal: 0xa
  union {
    ULONG UnusedPtes;            // offset: 0x34 ordinal: 0xb
    ULONG AlignmentNoAccessPtes; // offset: 0x34 ordinal: 0xc
  };
} _SUBSECTION;

// 0x70 bytes (sizeof)
typedef struct _MSUBSECTION {
  struct _SUBSECTION Core;                  // offset: 0x0 ordinal: 0x0
  struct _RTL_BALANCED_NODE SubsectionNode; // offset: 0x38 ordinal: 0x1
  struct _LIST_ENTRY DereferenceList;       // offset: 0x50 ordinal: 0x2
  ULONGLONG NumberOfMappedViews;            // offset: 0x60 ordinal: 0x3
  ULONGLONG NumberOfPfnReferences;          // offset: 0x68 ordinal: 0x4
} _MSUBSECTION;

// 0x40 bytes (sizeof)
typedef struct _MMVAD_SHORT {
  union {
    struct _RTL_BALANCED_NODE VadNode; // offset: 0x0 ordinal: 0x0
    struct _MMVAD_SHORT *NextVad;      // offset: 0x0 ordinal: 0x1
  };
  ULONG StartingVpn;                     // offset: 0x18 ordinal: 0x2
  ULONG EndingVpn;                       // offset: 0x1c ordinal: 0x3
  UCHAR StartingVpnHigh;                 // offset: 0x20 ordinal: 0x4
  UCHAR EndingVpnHigh;                   // offset: 0x21 ordinal: 0x5
  UCHAR CommitChargeHigh;                // offset: 0x22 ordinal: 0x6
  UCHAR SpareNT64VadUChar;               // offset: 0x23 ordinal: 0x7
  LONG ReferenceCount;                   // offset: 0x24 ordinal: 0x8
  struct _EX_PUSH_LOCK PushLock;         // offset: 0x28 ordinal: 0x9
  union __anon_817 u;                    // offset: 0x30 ordinal: 0xa
  union __anon_818 u1;                   // offset: 0x34 ordinal: 0xb
  struct _MI_VAD_EVENT_BLOCK *EventList; // offset: 0x38 ordinal: 0xc
} _MMVAD_SHORT;

// 0x198 bytes (sizeof)
typedef struct _KSCB {
  ULONGLONG GenerationCycles;           // offset: 0x0 ordinal: 0x0
  ULONGLONG MinQuotaCycleTarget;        // offset: 0x8 ordinal: 0x1
  ULONGLONG MaxQuotaCycleTarget;        // offset: 0x10 ordinal: 0x2
  ULONGLONG RankCycleTarget;            // offset: 0x18 ordinal: 0x3
  ULONGLONG LongTermCycles;             // offset: 0x20 ordinal: 0x4
  ULONGLONG LastReportedCycles;         // offset: 0x28 ordinal: 0x5
  ULONGLONG OverQuotaHistory;           // offset: 0x30 ordinal: 0x6
  ULONGLONG ReadyTime;                  // offset: 0x38 ordinal: 0x7
  ULONGLONG InsertTime;                 // offset: 0x40 ordinal: 0x8
  struct _LIST_ENTRY PerProcessorList;  // offset: 0x48 ordinal: 0x9
  struct _RTL_BALANCED_NODE QueueNode;  // offset: 0x58 ordinal: 0xa
  UCHAR Inserted : 1;                   // offset: 0x70 ordinal: 0xb
  UCHAR MaxOverQuota : 1;               // offset: 0x70 ordinal: 0xc
  UCHAR MinOverQuota : 1;               // offset: 0x70 ordinal: 0xd
  UCHAR RankBias : 1;                   // offset: 0x70 ordinal: 0xe
  UCHAR SoftCap : 1;                    // offset: 0x70 ordinal: 0xf
  UCHAR Spare1 : 3;                     // offset: 0x70 ordinal: 0x10
  UCHAR Depth;                          // offset: 0x71 ordinal: 0x11
  USHORT ReadySummary;                  // offset: 0x72 ordinal: 0x12
  ULONG Rank;                           // offset: 0x74 ordinal: 0x13
  struct _LIST_ENTRY ReadyListHead[16]; // offset: 0x78 ordinal: 0x14
  struct _RTL_RB_TREE ChildScbQueue;    // offset: 0x178 ordinal: 0x15
  struct _KSCB *Parent;                 // offset: 0x188 ordinal: 0x16
  struct _KSCB *Root;                   // offset: 0x190 ordinal: 0x17
} _KSCB;

// 0x240 bytes (sizeof)
typedef struct _KSCHEDULING_GROUP {
  struct _KSCHEDULING_GROUP_POLICY Policy; // offset: 0x0 ordinal: 0x0
  ULONG RelativeWeight;                    // offset: 0x8 ordinal: 0x1
  ULONG ChildMinRate;                      // offset: 0xc ordinal: 0x2
  ULONG ChildMinWeight;                    // offset: 0x10 ordinal: 0x3
  ULONG ChildTotalWeight;                  // offset: 0x14 ordinal: 0x4
  ULONGLONG QueryHistoryTimeStamp;         // offset: 0x18 ordinal: 0x5
  LONGLONG NotificationCycles;             // offset: 0x20 ordinal: 0x6
  union {
    struct _LIST_ENTRY SchedulingGroupList; // offset: 0x28 ordinal: 0x7
    struct _LIST_ENTRY Sibling;             // offset: 0x28 ordinal: 0x8
  };
  struct _KDPC *NotificationDpc;     // offset: 0x38 ordinal: 0x9
  struct _LIST_ENTRY ChildList;      // offset: 0x40 ordinal: 0xa
  struct _KSCHEDULING_GROUP *Parent; // offset: 0x50 ordinal: 0xb
  struct _KSCB PerProcessor[1];      // offset: 0x80 ordinal: 0xc
} _KSCHEDULING_GROUP;

// 0x60 bytes (sizeof)
typedef struct _KLOCK_ENTRY {
  union {
    struct _RTL_BALANCED_NODE TreeNode;      // offset: 0x0 ordinal: 0x0
    struct _SINGLE_LIST_ENTRY FreeListEntry; // offset: 0x0 ordinal: 0x1
  };
  union {
    ULONG EntryFlags;  // offset: 0x18 ordinal: 0x2
    UCHAR EntryOffset; // offset: 0x18 ordinal: 0x3
  };
  union {
    UCHAR ThreadLocalFlags; // offset: 0x19 ordinal: 0x4
    UCHAR WaitingBit : 1;   // offset: 0x19 ordinal: 0x5
  };
  UCHAR Spare0 : 7; // offset: 0x19 ordinal: 0x6
  union {
    UCHAR AcquiredByte;    // offset: 0x1a ordinal: 0x7
    UCHAR AcquiredBit : 1; // offset: 0x1a ordinal: 0x8
  };
  union {
    UCHAR CrossThreadFlags; // offset: 0x1b ordinal: 0x9
    UCHAR HeadNodeBit : 1;  // offset: 0x1b ordinal: 0xa
  };
  UCHAR IoPriorityBit : 1; // offset: 0x1b ordinal: 0xb
  UCHAR Spare1 : 6;        // offset: 0x1b ordinal: 0xc
  ULONG StaticState : 8;   // offset: 0x18 ordinal: 0xd
  ULONG AllFlags : 24;     // offset: 0x18 ordinal: 0xe
  ULONG SpareFlags;        // offset: 0x1c ordinal: 0xf
  union {
    struct _KLOCK_ENTRY_LOCK_STATE LockState; // offset: 0x20 ordinal: 0x10
    VOID *LockUnsafe;                         // offset: 0x20 ordinal: 0x11
    UCHAR CrossThreadReleasableAndBusyByte;   // offset: 0x20 ordinal: 0x12
  };
  UCHAR Reserved[6]; // offset: 0x21 ordinal: 0x13
  UCHAR InTreeByte;  // offset: 0x27 ordinal: 0x14
  union {
    VOID *SessionState; // offset: 0x28 ordinal: 0x15
    ULONG SessionId;    // offset: 0x28 ordinal: 0x16
  };
  ULONG SessionPad;               // offset: 0x2c ordinal: 0x17
  struct _RTL_RB_TREE OwnerTree;  // offset: 0x30 ordinal: 0x18
  struct _RTL_RB_TREE WaiterTree; // offset: 0x40 ordinal: 0x19
  CHAR CpuPriorityKey;            // offset: 0x30 ordinal: 0x1a
  ULONGLONG EntryLock;            // offset: 0x50 ordinal: 0x1b
  union {
    USHORT AllBoosts;   // offset: 0x58 ordinal: 0x1c
    USHORT IoBoost : 1; // offset: 0x58 ordinal: 0x1d
  };
  USHORT CpuBoostsBitmap : 15;        // offset: 0x58 ordinal: 0x1e
  USHORT IoNormalPriorityWaiterCount; // offset: 0x5a ordinal: 0x1f
  USHORT SparePad;                    // offset: 0x5c ordinal: 0x20
} _KLOCK_ENTRY;

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

// 0x18 bytes (sizeof)
typedef struct _RTL_DYNAMIC_HASH_TABLE_ENTRY {
  struct _LIST_ENTRY Linkage; // offset: 0x0 ordinal: 0x0
  ULONGLONG Signature;        // offset: 0x10 ordinal: 0x1
} _RTL_DYNAMIC_HASH_TABLE_ENTRY;

// 0x38 bytes (sizeof)
typedef struct _SEP_LOWBOX_HANDLES_ENTRY {
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry; // offset: 0x0 ordinal: 0x0
  LONGLONG ReferenceCount;                        // offset: 0x18 ordinal: 0x1
  VOID *PackageSid;                               // offset: 0x20 ordinal: 0x2
  ULONG HandleCount;                              // offset: 0x28 ordinal: 0x3
  VOID **Handles;                                 // offset: 0x30 ordinal: 0x4
} _SEP_LOWBOX_HANDLES_ENTRY;

// 0x38 bytes (sizeof)
typedef struct _SEP_LOWBOX_NUMBER_ENTRY {
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry; // offset: 0x0 ordinal: 0x0
  LONGLONG ReferenceCount;                        // offset: 0x18 ordinal: 0x1
  VOID *PackageSid;                               // offset: 0x20 ordinal: 0x2
  ULONG LowboxNumber;                             // offset: 0x28 ordinal: 0x3
  VOID *AtomTable;                                // offset: 0x30 ordinal: 0x4
} _SEP_LOWBOX_NUMBER_ENTRY;

// 0x478 bytes (sizeof)
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
  ULONG SessionId;                            // offset: 0x78 ordinal: 0x9
  ULONG UserAndGroupCount;                    // offset: 0x7c ordinal: 0xa
  ULONG RestrictedSidCount;                   // offset: 0x80 ordinal: 0xb
  ULONG VariableLength;                       // offset: 0x84 ordinal: 0xc
  ULONG DynamicCharged;                       // offset: 0x88 ordinal: 0xd
  ULONG DynamicAvailable;                     // offset: 0x8c ordinal: 0xe
  ULONG DefaultOwnerIndex;                    // offset: 0x90 ordinal: 0xf
  struct _SID_AND_ATTRIBUTES *UserAndGroups;  // offset: 0x98 ordinal: 0x10
  struct _SID_AND_ATTRIBUTES *RestrictedSids; // offset: 0xa0 ordinal: 0x11
  VOID *PrimaryGroup;                         // offset: 0xa8 ordinal: 0x12
  ULONG *DynamicPart;                         // offset: 0xb0 ordinal: 0x13
  struct _ACL *DefaultDacl;                   // offset: 0xb8 ordinal: 0x14
  enum _TOKEN_TYPE TokenType;                 // offset: 0xc0 ordinal: 0x15
  enum _SECURITY_IMPERSONATION_LEVEL
      ImpersonationLevel;    // offset: 0xc4 ordinal: 0x16
  ULONG TokenFlags;          // offset: 0xc8 ordinal: 0x17
  UCHAR TokenInUse;          // offset: 0xcc ordinal: 0x18
  ULONG IntegrityLevelIndex; // offset: 0xd0 ordinal: 0x19
  ULONG MandatoryPolicy;     // offset: 0xd4 ordinal: 0x1a
  struct _SEP_LOGON_SESSION_REFERENCES
      *LogonSession;                       // offset: 0xd8 ordinal: 0x1b
  struct _LUID OriginatingLogonSession;    // offset: 0xe0 ordinal: 0x1c
  struct _SID_AND_ATTRIBUTES_HASH SidHash; // offset: 0xe8 ordinal: 0x1d
  struct _SID_AND_ATTRIBUTES_HASH
      RestrictedSidHash; // offset: 0x1f8 ordinal: 0x1e
  struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
      *pSecurityAttributes;                 // offset: 0x308 ordinal: 0x1f
  VOID *Package;                            // offset: 0x310 ordinal: 0x20
  struct _SID_AND_ATTRIBUTES *Capabilities; // offset: 0x318 ordinal: 0x21
  ULONG CapabilityCount;                    // offset: 0x320 ordinal: 0x22
  struct _SID_AND_ATTRIBUTES_HASH
      CapabilitiesHash; // offset: 0x328 ordinal: 0x23
  struct _SEP_LOWBOX_NUMBER_ENTRY
      *LowboxNumberEntry; // offset: 0x438 ordinal: 0x24
  struct _SEP_LOWBOX_HANDLES_ENTRY
      *LowboxHandlesEntry; // offset: 0x440 ordinal: 0x25
  struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION
      *pClaimAttributes;                        // offset: 0x448 ordinal: 0x26
  VOID *TrustLevelSid;                          // offset: 0x450 ordinal: 0x27
  struct _TOKEN *TrustLinkedToken;              // offset: 0x458 ordinal: 0x28
  VOID *IntegrityLevelSidValue;                 // offset: 0x460 ordinal: 0x29
  struct _SEP_SID_VALUES_BLOCK *TokenSidValues; // offset: 0x468 ordinal: 0x2a
  ULONGLONG VariablePart;                       // offset: 0x470 ordinal: 0x2b
} _TOKEN;

// 0x28 bytes (sizeof)
typedef struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR {
  union {
    struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry; // offset: 0x0 ordinal: 0x0
    struct _LIST_ENTRY *CurEntry;                   // offset: 0x0 ordinal: 0x1
  };
  struct _LIST_ENTRY *ChainHead; // offset: 0x18 ordinal: 0x2
  ULONG BucketIndex;             // offset: 0x20 ordinal: 0x3
} _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR;

// 0x18 bytes (sizeof)
typedef struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT {
  struct _LIST_ENTRY *ChainHead;   // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY *PrevLinkage; // offset: 0x8 ordinal: 0x1
  ULONGLONG Signature;             // offset: 0x10 ordinal: 0x2
} _RTL_DYNAMIC_HASH_TABLE_CONTEXT;

// 0x10 bytes (sizeof)
typedef struct _M128A {
  ULONGLONG Low; // offset: 0x0 ordinal: 0x0
  LONGLONG High; // offset: 0x8 ordinal: 0x1
} _M128A;

// 0x140 bytes (sizeof)
typedef struct _KEXCEPTION_FRAME {
  ULONGLONG P1Home;       // offset: 0x0 ordinal: 0x0
  ULONGLONG P2Home;       // offset: 0x8 ordinal: 0x1
  ULONGLONG P3Home;       // offset: 0x10 ordinal: 0x2
  ULONGLONG P4Home;       // offset: 0x18 ordinal: 0x3
  ULONGLONG P5;           // offset: 0x20 ordinal: 0x4
  ULONGLONG Spare1;       // offset: 0x28 ordinal: 0x5
  struct _M128A Xmm6;     // offset: 0x30 ordinal: 0x6
  struct _M128A Xmm7;     // offset: 0x40 ordinal: 0x7
  struct _M128A Xmm8;     // offset: 0x50 ordinal: 0x8
  struct _M128A Xmm9;     // offset: 0x60 ordinal: 0x9
  struct _M128A Xmm10;    // offset: 0x70 ordinal: 0xa
  struct _M128A Xmm11;    // offset: 0x80 ordinal: 0xb
  struct _M128A Xmm12;    // offset: 0x90 ordinal: 0xc
  struct _M128A Xmm13;    // offset: 0xa0 ordinal: 0xd
  struct _M128A Xmm14;    // offset: 0xb0 ordinal: 0xe
  struct _M128A Xmm15;    // offset: 0xc0 ordinal: 0xf
  ULONGLONG TrapFrame;    // offset: 0xd0 ordinal: 0x10
  ULONGLONG OutputBuffer; // offset: 0xd8 ordinal: 0x11
  ULONGLONG OutputLength; // offset: 0xe0 ordinal: 0x12
  ULONGLONG Spare2;       // offset: 0xe8 ordinal: 0x13
  ULONGLONG MxCsr;        // offset: 0xf0 ordinal: 0x14
  ULONGLONG Rbp;          // offset: 0xf8 ordinal: 0x15
  ULONGLONG Rbx;          // offset: 0x100 ordinal: 0x16
  ULONGLONG Rdi;          // offset: 0x108 ordinal: 0x17
  ULONGLONG Rsi;          // offset: 0x110 ordinal: 0x18
  ULONGLONG R12;          // offset: 0x118 ordinal: 0x19
  ULONGLONG R13;          // offset: 0x120 ordinal: 0x1a
  ULONGLONG R14;          // offset: 0x128 ordinal: 0x1b
  ULONGLONG R15;          // offset: 0x130 ordinal: 0x1c
  ULONGLONG Return;       // offset: 0x138 ordinal: 0x1d
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
  USHORT SegDs;                   // offset: 0x130 ordinal: 0x27
  USHORT SegEs;                   // offset: 0x132 ordinal: 0x28
  USHORT SegFs;                   // offset: 0x134 ordinal: 0x29
  USHORT SegGs;                   // offset: 0x136 ordinal: 0x2a
  ULONGLONG TrapFrame;            // offset: 0x138 ordinal: 0x2b
  ULONGLONG Rbx;                  // offset: 0x140 ordinal: 0x2c
  ULONGLONG Rdi;                  // offset: 0x148 ordinal: 0x2d
  ULONGLONG Rsi;                  // offset: 0x150 ordinal: 0x2e
  ULONGLONG Rbp;                  // offset: 0x158 ordinal: 0x2f
  union {
    ULONGLONG ErrorCode;      // offset: 0x160 ordinal: 0x30
    ULONGLONG ExceptionFrame; // offset: 0x160 ordinal: 0x31
    ULONGLONG TimeStampKlog;  // offset: 0x160 ordinal: 0x32
  };
  ULONGLONG Rip;   // offset: 0x168 ordinal: 0x33
  USHORT SegCs;    // offset: 0x170 ordinal: 0x34
  UCHAR Fill0;     // offset: 0x172 ordinal: 0x35
  UCHAR Logging;   // offset: 0x173 ordinal: 0x36
  USHORT Fill1[2]; // offset: 0x174 ordinal: 0x37
  ULONG EFlags;    // offset: 0x178 ordinal: 0x38
  ULONG Fill2;     // offset: 0x17c ordinal: 0x39
  ULONGLONG Rsp;   // offset: 0x180 ordinal: 0x3a
  USHORT SegSs;    // offset: 0x188 ordinal: 0x3b
  USHORT Fill3;    // offset: 0x18a ordinal: 0x3c
  ULONG Fill4;     // offset: 0x18c ordinal: 0x3d
} _KTRAP_FRAME;

// 0x200 bytes (sizeof)
typedef struct _XSAVE_FORMAT {
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
} _XSAVE_FORMAT;

// 0x70 bytes (sizeof)
typedef struct _KUMS_CONTEXT_HEADER {
  ULONGLONG P1Home;                         // offset: 0x0 ordinal: 0x0
  ULONGLONG P2Home;                         // offset: 0x8 ordinal: 0x1
  ULONGLONG P3Home;                         // offset: 0x10 ordinal: 0x2
  ULONGLONG P4Home;                         // offset: 0x18 ordinal: 0x3
  VOID *StackTop;                           // offset: 0x20 ordinal: 0x4
  ULONGLONG StackSize;                      // offset: 0x28 ordinal: 0x5
  ULONGLONG RspOffset;                      // offset: 0x30 ordinal: 0x6
  ULONGLONG Rip;                            // offset: 0x38 ordinal: 0x7
  struct _XSAVE_FORMAT *FltSave;            // offset: 0x40 ordinal: 0x8
  ULONGLONG Volatile : 1;                   // offset: 0x48 ordinal: 0x9
  ULONGLONG Reserved : 63;                  // offset: 0x48 ordinal: 0xa
  ULONGLONG Flags;                          // offset: 0x48 ordinal: 0xb
  struct _KTRAP_FRAME *TrapFrame;           // offset: 0x50 ordinal: 0xc
  struct _KEXCEPTION_FRAME *ExceptionFrame; // offset: 0x58 ordinal: 0xd
  struct _KTHREAD *SourceThread;            // offset: 0x60 ordinal: 0xe
  ULONGLONG Return;                         // offset: 0x68 ordinal: 0xf
} _KUMS_CONTEXT_HEADER;

// 0x240 bytes (sizeof)
typedef struct _XSAVE_AREA {
  struct _XSAVE_FORMAT LegacyState; // offset: 0x0 ordinal: 0x0
  struct _XSAVE_AREA_HEADER Header; // offset: 0x200 ordinal: 0x1
} _XSAVE_AREA;

// 0x20 bytes (sizeof)
typedef struct _XSTATE_CONTEXT {
  ULONGLONG Mask;           // offset: 0x0 ordinal: 0x0
  ULONG Length;             // offset: 0x8 ordinal: 0x1
  ULONG Reserved1;          // offset: 0xc ordinal: 0x2
  struct _XSAVE_AREA *Area; // offset: 0x10 ordinal: 0x3
  VOID *Buffer;             // offset: 0x18 ordinal: 0x4
} _XSTATE_CONTEXT;

// 0x38 bytes (sizeof)
typedef struct _XSTATE_SAVE {
  struct _XSTATE_SAVE *Prev;            // offset: 0x0 ordinal: 0x0
  struct _KTHREAD *Thread;              // offset: 0x8 ordinal: 0x1
  UCHAR Level;                          // offset: 0x10 ordinal: 0x2
  struct _XSTATE_CONTEXT XStateContext; // offset: 0x18 ordinal: 0x3
} _XSTATE_SAVE;

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
    struct _XSAVE_FORMAT FltSave; // offset: 0x100 ordinal: 0x26
    struct _M128A Header[2];      // offset: 0x100 ordinal: 0x27
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

// 0x520 bytes (sizeof)
typedef struct _RTL_UMS_CONTEXT {
  struct _SINGLE_LIST_ENTRY Link;             // offset: 0x0 ordinal: 0x0
  struct _CONTEXT Context;                    // offset: 0x10 ordinal: 0x1
  VOID *Teb;                                  // offset: 0x4e0 ordinal: 0x2
  VOID *UserContext;                          // offset: 0x4e8 ordinal: 0x3
  ULONG ScheduledThread : 1;                  // offset: 0x4f0 ordinal: 0x4
  ULONG Suspended : 1;                        // offset: 0x4f0 ordinal: 0x5
  ULONG VolatileContext : 1;                  // offset: 0x4f0 ordinal: 0x6
  ULONG Terminated : 1;                       // offset: 0x4f0 ordinal: 0x7
  ULONG DebugActive : 1;                      // offset: 0x4f0 ordinal: 0x8
  ULONG RunningOnSelfThread : 1;              // offset: 0x4f0 ordinal: 0x9
  ULONG DenyRunningOnSelfThread : 1;          // offset: 0x4f0 ordinal: 0xa
  LONG Flags;                                 // offset: 0x4f0 ordinal: 0xb
  ULONGLONG KernelUpdateLock : 2;             // offset: 0x4f8 ordinal: 0xc
  ULONGLONG PrimaryClientID : 62;             // offset: 0x4f8 ordinal: 0xd
  ULONGLONG ContextLock;                      // offset: 0x4f8 ordinal: 0xe
  struct _RTL_UMS_CONTEXT *PrimaryUmsContext; // offset: 0x500 ordinal: 0xf
  ULONG SwitchCount;                          // offset: 0x508 ordinal: 0x10
  ULONG KernelYieldCount;                     // offset: 0x50c ordinal: 0x11
  ULONG MixedYieldCount;                      // offset: 0x510 ordinal: 0x12
  ULONG YieldCount;                           // offset: 0x514 ordinal: 0x13
} _RTL_UMS_CONTEXT;

// 0x5b0 bytes (sizeof)
typedef struct _KPROCESSOR_STATE {
  struct _KSPECIAL_REGISTERS SpecialRegisters; // offset: 0x0 ordinal: 0x0
  struct _CONTEXT ContextFrame;                // offset: 0xe0 ordinal: 0x1
} _KPROCESSOR_STATE;

// 0x1d0 bytes (sizeof)
typedef struct _POP_HIBER_CONTEXT {
  UCHAR Reset;                         // offset: 0x0 ordinal: 0x0
  UCHAR HiberFlags;                    // offset: 0x1 ordinal: 0x1
  UCHAR WroteHiberFile;                // offset: 0x2 ordinal: 0x2
  UCHAR VerifyKernelPhaseOnResume;     // offset: 0x3 ordinal: 0x3
  UCHAR KernelPhaseVerificationActive; // offset: 0x4 ordinal: 0x4
  UCHAR InitializationFinished;        // offset: 0x5 ordinal: 0x5
  LONG NextTableLockHeld;              // offset: 0x8 ordinal: 0x6
  LONG BootPhaseFinishedBarrier;       // offset: 0xc ordinal: 0x7
  LONG KernelResumeFinishedBarrier;    // offset: 0x10 ordinal: 0x8
  LONG HvCaptureReadyBarrier;          // offset: 0x14 ordinal: 0x9
  LONG HvCaptureCompletedBarrier;      // offset: 0x18 ordinal: 0xa
  UCHAR MapFrozen;                     // offset: 0x1c ordinal: 0xb
  union {
    struct _RTL_BITMAP DiscardMap;     // offset: 0x20 ordinal: 0xc
    struct _RTL_BITMAP KernelPhaseMap; // offset: 0x20 ordinal: 0xd
  };
  struct _RTL_BITMAP BootPhaseMap;            // offset: 0x30 ordinal: 0xe
  struct _LIST_ENTRY ClonedRanges;            // offset: 0x40 ordinal: 0xf
  ULONG ClonedRangeCount;                     // offset: 0x50 ordinal: 0x10
  ULONGLONG ClonedPageCount;                  // offset: 0x58 ordinal: 0x11
  struct _RTL_BITMAP *CurrentMap;             // offset: 0x60 ordinal: 0x12
  struct _LIST_ENTRY *NextCloneRange;         // offset: 0x68 ordinal: 0x13
  ULONGLONG NextPreserve;                     // offset: 0x70 ordinal: 0x14
  struct _MDL *LoaderMdl;                     // offset: 0x78 ordinal: 0x15
  struct _MDL *AllocatedMdl;                  // offset: 0x80 ordinal: 0x16
  ULONGLONG PagesOut;                         // offset: 0x88 ordinal: 0x17
  VOID *IoPages;                              // offset: 0x90 ordinal: 0x18
  ULONG IoPagesCount;                         // offset: 0x98 ordinal: 0x19
  VOID *CurrentMcb;                           // offset: 0xa0 ordinal: 0x1a
  struct _DUMP_STACK_CONTEXT *DumpStack;      // offset: 0xa8 ordinal: 0x1b
  struct _KPROCESSOR_STATE *WakeState;        // offset: 0xb0 ordinal: 0x1c
  ULONG IoProgress;                           // offset: 0xb8 ordinal: 0x1d
  LONG Status;                                // offset: 0xbc ordinal: 0x1e
  ULONG GraphicsProc;                         // offset: 0xc0 ordinal: 0x1f
  struct PO_MEMORY_IMAGE *MemoryImage;        // offset: 0xc8 ordinal: 0x20
  ULONG *PerformanceStats;                    // offset: 0xd0 ordinal: 0x21
  struct _MDL *BootLoaderLogMdl;              // offset: 0xd8 ordinal: 0x22
  ULONG SiLogOffset;                          // offset: 0xe0 ordinal: 0x23
  struct _MDL *FirmwareRuntimeInformationMdl; // offset: 0xe8 ordinal: 0x24
  VOID *FirmwareRuntimeInformationVa;         // offset: 0xf0 ordinal: 0x25
  VOID *ResumeContext;                        // offset: 0xf8 ordinal: 0x26
  ULONG ResumeContextPages;                   // offset: 0x100 ordinal: 0x27
  ULONG SecurePages;                          // offset: 0x104 ordinal: 0x28
  ULONG ProcessorCount;                       // offset: 0x108 ordinal: 0x29
  struct _POP_PER_PROCESSOR_CONTEXT
      *ProcessorContext;                // offset: 0x110 ordinal: 0x2a
  CHAR *ProdConsBuffer;                 // offset: 0x118 ordinal: 0x2b
  ULONG ProdConsSize;                   // offset: 0x120 ordinal: 0x2c
  ULONG MaxDataPages;                   // offset: 0x124 ordinal: 0x2d
  VOID *ExtraBuffer;                    // offset: 0x128 ordinal: 0x2e
  ULONGLONG ExtraBufferSize;            // offset: 0x130 ordinal: 0x2f
  VOID *ExtraMapVa;                     // offset: 0x138 ordinal: 0x30
  ULONGLONG BitlockerKeyPFN;            // offset: 0x140 ordinal: 0x31
  struct _POP_IO_INFO IoInfo;           // offset: 0x148 ordinal: 0x32
  USHORT *IoChecksums;                  // offset: 0x1b8 ordinal: 0x33
  ULONGLONG IoChecksumsSize;            // offset: 0x1c0 ordinal: 0x34
  ULONG HardwareConfigurationSignature; // offset: 0x1c8 ordinal: 0x35
  UCHAR IumEnabled;                     // offset: 0x1cc ordinal: 0x36
} _POP_HIBER_CONTEXT;

// 0x10 bytes (sizeof)
typedef struct _EXCEPTION_POINTERS {
  struct _EXCEPTION_RECORD *ExceptionRecord; // offset: 0x0 ordinal: 0x0
  struct _CONTEXT *ContextRecord;            // offset: 0x8 ordinal: 0x1
} _EXCEPTION_POINTERS;

typedef enum _EXCEPTION_DISPOSITION (*__anon_114)(struct _EXCEPTION_RECORD *,
                                                  VOID *, struct _CONTEXT *,
                                                  VOID *);

// 0x10 bytes (sizeof)
typedef struct _EXCEPTION_REGISTRATION_RECORD {
  struct _EXCEPTION_REGISTRATION_RECORD *Next; // offset: 0x0 ordinal: 0x0
  enum _EXCEPTION_DISPOSITION (*Handler)(struct _EXCEPTION_RECORD *, VOID *,
                                         struct _CONTEXT *,
                                         VOID *); // offset: 0x8 ordinal: 0x1
} _EXCEPTION_REGISTRATION_RECORD;

// 0x28 bytes (sizeof)
typedef struct _RTL_CRITICAL_SECTION {
  struct _RTL_CRITICAL_SECTION_DEBUG *DebugInfo; // offset: 0x0 ordinal: 0x0
  LONG LockCount;                                // offset: 0x8 ordinal: 0x1
  LONG RecursionCount;                           // offset: 0xc ordinal: 0x2
  VOID *OwningThread;                            // offset: 0x10 ordinal: 0x3
  VOID *LockSemaphore;                           // offset: 0x18 ordinal: 0x4
  ULONGLONG SpinCount;                           // offset: 0x20 ordinal: 0x5
} _RTL_CRITICAL_SECTION;

// 0x68 bytes (sizeof)
typedef union __anon_1503 {
  struct _RTL_CRITICAL_SECTION CriticalSection; // offset: 0x0 ordinal: 0x0
  struct _ERESOURCE Resource;                   // offset: 0x0 ordinal: 0x1
} __anon_1503;

// 0x68 bytes (sizeof)
typedef struct _HEAP_LOCK {
  union __anon_1503 Lock; // offset: 0x0 ordinal: 0x0
} _HEAP_LOCK;

// 0x298 bytes (sizeof)
typedef struct _HEAP {
  union {
    struct _HEAP_SEGMENT Segment; // offset: 0x0 ordinal: 0x0
    struct _HEAP_ENTRY Entry;     // offset: 0x0 ordinal: 0x1
  };
  ULONG SegmentSignature;                 // offset: 0x10 ordinal: 0x2
  ULONG SegmentFlags;                     // offset: 0x14 ordinal: 0x3
  struct _LIST_ENTRY SegmentListEntry;    // offset: 0x18 ordinal: 0x4
  struct _HEAP *Heap;                     // offset: 0x28 ordinal: 0x5
  VOID *BaseAddress;                      // offset: 0x30 ordinal: 0x6
  ULONG NumberOfPages;                    // offset: 0x38 ordinal: 0x7
  struct _HEAP_ENTRY *FirstEntry;         // offset: 0x40 ordinal: 0x8
  struct _HEAP_ENTRY *LastValidEntry;     // offset: 0x48 ordinal: 0x9
  ULONG NumberOfUnCommittedPages;         // offset: 0x50 ordinal: 0xa
  ULONG NumberOfUnCommittedRanges;        // offset: 0x54 ordinal: 0xb
  USHORT SegmentAllocatorBackTraceIndex;  // offset: 0x58 ordinal: 0xc
  USHORT Reserved;                        // offset: 0x5a ordinal: 0xd
  struct _LIST_ENTRY UCRSegmentList;      // offset: 0x60 ordinal: 0xe
  ULONG Flags;                            // offset: 0x70 ordinal: 0xf
  ULONG ForceFlags;                       // offset: 0x74 ordinal: 0x10
  ULONG CompatibilityFlags;               // offset: 0x78 ordinal: 0x11
  ULONG EncodeFlagMask;                   // offset: 0x7c ordinal: 0x12
  struct _HEAP_ENTRY Encoding;            // offset: 0x80 ordinal: 0x13
  ULONG Interceptor;                      // offset: 0x90 ordinal: 0x14
  ULONG VirtualMemoryThreshold;           // offset: 0x94 ordinal: 0x15
  ULONG Signature;                        // offset: 0x98 ordinal: 0x16
  ULONGLONG SegmentReserve;               // offset: 0xa0 ordinal: 0x17
  ULONGLONG SegmentCommit;                // offset: 0xa8 ordinal: 0x18
  ULONGLONG DeCommitFreeBlockThreshold;   // offset: 0xb0 ordinal: 0x19
  ULONGLONG DeCommitTotalFreeThreshold;   // offset: 0xb8 ordinal: 0x1a
  ULONGLONG TotalFreeSize;                // offset: 0xc0 ordinal: 0x1b
  ULONGLONG MaximumAllocationSize;        // offset: 0xc8 ordinal: 0x1c
  USHORT ProcessHeapsListIndex;           // offset: 0xd0 ordinal: 0x1d
  USHORT HeaderValidateLength;            // offset: 0xd2 ordinal: 0x1e
  VOID *HeaderValidateCopy;               // offset: 0xd8 ordinal: 0x1f
  USHORT NextAvailableTagIndex;           // offset: 0xe0 ordinal: 0x20
  USHORT MaximumTagIndex;                 // offset: 0xe2 ordinal: 0x21
  struct _HEAP_TAG_ENTRY *TagEntries;     // offset: 0xe8 ordinal: 0x22
  struct _LIST_ENTRY UCRList;             // offset: 0xf0 ordinal: 0x23
  ULONGLONG AlignRound;                   // offset: 0x100 ordinal: 0x24
  ULONGLONG AlignMask;                    // offset: 0x108 ordinal: 0x25
  struct _LIST_ENTRY VirtualAllocdBlocks; // offset: 0x110 ordinal: 0x26
  struct _LIST_ENTRY SegmentList;         // offset: 0x120 ordinal: 0x27
  USHORT AllocatorBackTraceIndex;         // offset: 0x130 ordinal: 0x28
  ULONG NonDedicatedListLength;           // offset: 0x134 ordinal: 0x29
  VOID *BlocksIndex;                      // offset: 0x138 ordinal: 0x2a
  VOID *UCRIndex;                         // offset: 0x140 ordinal: 0x2b
  struct _HEAP_PSEUDO_TAG_ENTRY
      *PseudoTagEntries;           // offset: 0x148 ordinal: 0x2c
  struct _LIST_ENTRY FreeLists;    // offset: 0x150 ordinal: 0x2d
  struct _HEAP_LOCK *LockVariable; // offset: 0x160 ordinal: 0x2e
  LONG(*CommitRoutine)
  (VOID *, VOID **, ULONGLONG *);      // offset: 0x168 ordinal: 0x2f
  VOID *FrontEndHeap;                  // offset: 0x170 ordinal: 0x30
  USHORT FrontHeapLockCount;           // offset: 0x178 ordinal: 0x31
  UCHAR FrontEndHeapType;              // offset: 0x17a ordinal: 0x32
  UCHAR RequestedFrontEndHeapType;     // offset: 0x17b ordinal: 0x33
  USHORT *FrontEndHeapUsageData;       // offset: 0x180 ordinal: 0x34
  USHORT FrontEndHeapMaximumIndex;     // offset: 0x188 ordinal: 0x35
  UCHAR FrontEndHeapStatusBitmap[129]; // offset: 0x18a ordinal: 0x36
  struct _HEAP_COUNTERS Counters;      // offset: 0x210 ordinal: 0x37
  struct _HEAP_TUNING_PARAMETERS
      TuningParameters; // offset: 0x288 ordinal: 0x38
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

// 0x410 bytes (sizeof)
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
      CurrentDirectores[32];    // offset: 0xf0 ordinal: 0x1b
  ULONGLONG EnvironmentSize;    // offset: 0x3f0 ordinal: 0x1c
  ULONGLONG EnvironmentVersion; // offset: 0x3f8 ordinal: 0x1d
  VOID *PackageDependencyData;  // offset: 0x400 ordinal: 0x1e
  ULONG ProcessGroupId;         // offset: 0x408 ordinal: 0x1f
  ULONG LoaderThreads;          // offset: 0x40c ordinal: 0x20
} _RTL_USER_PROCESS_PARAMETERS;

// 0x4e8 bytes (sizeof)
typedef struct _GDI_TEB_BATCH {
  ULONG Offset : 31;             // offset: 0x0 ordinal: 0x0
  ULONG HasRenderingCommand : 1; // offset: 0x0 ordinal: 0x1
  ULONGLONG HDC;                 // offset: 0x8 ordinal: 0x2
  ULONG Buffer[310];             // offset: 0x10 ordinal: 0x3
} _GDI_TEB_BATCH;

// 0x250 bytes (sizeof)
typedef struct _PEB32 {
  UCHAR InheritedAddressSpace;    // offset: 0x0 ordinal: 0x0
  UCHAR ReadImageFileExecOptions; // offset: 0x1 ordinal: 0x1
  UCHAR BeingDebugged;            // offset: 0x2 ordinal: 0x2
  union {
    UCHAR BitField;                // offset: 0x3 ordinal: 0x3
    UCHAR ImageUsesLargePages : 1; // offset: 0x3 ordinal: 0x4
  };
  UCHAR IsProtectedProcess : 1;           // offset: 0x3 ordinal: 0x5
  UCHAR IsImageDynamicallyRelocated : 1;  // offset: 0x3 ordinal: 0x6
  UCHAR SkipPatchingUser32Forwarders : 1; // offset: 0x3 ordinal: 0x7
  UCHAR IsPackagedProcess : 1;            // offset: 0x3 ordinal: 0x8
  UCHAR IsAppContainer : 1;               // offset: 0x3 ordinal: 0x9
  UCHAR IsProtectedProcessLight : 1;      // offset: 0x3 ordinal: 0xa
  UCHAR SpareBits : 1;                    // offset: 0x3 ordinal: 0xb
  ULONG Mutant;                           // offset: 0x4 ordinal: 0xc
  ULONG ImageBaseAddress;                 // offset: 0x8 ordinal: 0xd
  ULONG Ldr;                              // offset: 0xc ordinal: 0xe
  ULONG ProcessParameters;                // offset: 0x10 ordinal: 0xf
  ULONG SubSystemData;                    // offset: 0x14 ordinal: 0x10
  ULONG ProcessHeap;                      // offset: 0x18 ordinal: 0x11
  ULONG FastPebLock;                      // offset: 0x1c ordinal: 0x12
  ULONG AtlThunkSListPtr;                 // offset: 0x20 ordinal: 0x13
  ULONG IFEOKey;                          // offset: 0x24 ordinal: 0x14
  union {
    ULONG CrossProcessFlags; // offset: 0x28 ordinal: 0x15
    ULONG ProcessInJob : 1;  // offset: 0x28 ordinal: 0x16
  };
  ULONG ProcessInitializing : 1; // offset: 0x28 ordinal: 0x17
  ULONG ProcessUsingVEH : 1;     // offset: 0x28 ordinal: 0x18
  ULONG ProcessUsingVCH : 1;     // offset: 0x28 ordinal: 0x19
  ULONG ProcessUsingFTH : 1;     // offset: 0x28 ordinal: 0x1a
  ULONG ReservedBits0 : 27;      // offset: 0x28 ordinal: 0x1b
  union {
    ULONG KernelCallbackTable; // offset: 0x2c ordinal: 0x1c
    ULONG UserSharedInfoPtr;   // offset: 0x2c ordinal: 0x1d
  };
  ULONG SystemReserved[1];                     // offset: 0x30 ordinal: 0x1e
  ULONG AtlThunkSListPtr32;                    // offset: 0x34 ordinal: 0x1f
  ULONG ApiSetMap;                             // offset: 0x38 ordinal: 0x20
  ULONG TlsExpansionCounter;                   // offset: 0x3c ordinal: 0x21
  ULONG TlsBitmap;                             // offset: 0x40 ordinal: 0x22
  ULONG TlsBitmapBits[2];                      // offset: 0x44 ordinal: 0x23
  ULONG ReadOnlySharedMemoryBase;              // offset: 0x4c ordinal: 0x24
  ULONG SparePvoid0;                           // offset: 0x50 ordinal: 0x25
  ULONG ReadOnlyStaticServerData;              // offset: 0x54 ordinal: 0x26
  ULONG AnsiCodePageData;                      // offset: 0x58 ordinal: 0x27
  ULONG OemCodePageData;                       // offset: 0x5c ordinal: 0x28
  ULONG UnicodeCaseTableData;                  // offset: 0x60 ordinal: 0x29
  ULONG NumberOfProcessors;                    // offset: 0x64 ordinal: 0x2a
  ULONG NtGlobalFlag;                          // offset: 0x68 ordinal: 0x2b
  union _LARGE_INTEGER CriticalSectionTimeout; // offset: 0x70 ordinal: 0x2c
  ULONG HeapSegmentReserve;                    // offset: 0x78 ordinal: 0x2d
  ULONG HeapSegmentCommit;                     // offset: 0x7c ordinal: 0x2e
  ULONG HeapDeCommitTotalFreeThreshold;        // offset: 0x80 ordinal: 0x2f
  ULONG HeapDeCommitFreeBlockThreshold;        // offset: 0x84 ordinal: 0x30
  ULONG NumberOfHeaps;                         // offset: 0x88 ordinal: 0x31
  ULONG MaximumNumberOfHeaps;                  // offset: 0x8c ordinal: 0x32
  ULONG ProcessHeaps;                          // offset: 0x90 ordinal: 0x33
  ULONG GdiSharedHandleTable;                  // offset: 0x94 ordinal: 0x34
  ULONG ProcessStarterHelper;                  // offset: 0x98 ordinal: 0x35
  ULONG GdiDCAttributeList;                    // offset: 0x9c ordinal: 0x36
  ULONG LoaderLock;                            // offset: 0xa0 ordinal: 0x37
  ULONG OSMajorVersion;                        // offset: 0xa4 ordinal: 0x38
  ULONG OSMinorVersion;                        // offset: 0xa8 ordinal: 0x39
  USHORT OSBuildNumber;                        // offset: 0xac ordinal: 0x3a
  USHORT OSCSDVersion;                         // offset: 0xae ordinal: 0x3b
  ULONG OSPlatformId;                          // offset: 0xb0 ordinal: 0x3c
  ULONG ImageSubsystem;                        // offset: 0xb4 ordinal: 0x3d
  ULONG ImageSubsystemMajorVersion;            // offset: 0xb8 ordinal: 0x3e
  ULONG ImageSubsystemMinorVersion;            // offset: 0xbc ordinal: 0x3f
  ULONG ActiveProcessAffinityMask;             // offset: 0xc0 ordinal: 0x40
  ULONG GdiHandleBuffer[34];                   // offset: 0xc4 ordinal: 0x41
  ULONG PostProcessInitRoutine;                // offset: 0x14c ordinal: 0x42
  ULONG TlsExpansionBitmap;                    // offset: 0x150 ordinal: 0x43
  ULONG TlsExpansionBitmapBits[32];            // offset: 0x154 ordinal: 0x44
  ULONG SessionId;                             // offset: 0x1d4 ordinal: 0x45
  union _ULARGE_INTEGER AppCompatFlags;        // offset: 0x1d8 ordinal: 0x46
  union _ULARGE_INTEGER AppCompatFlagsUser;    // offset: 0x1e0 ordinal: 0x47
  ULONG pShimData;                             // offset: 0x1e8 ordinal: 0x48
  ULONG AppCompatInfo;                         // offset: 0x1ec ordinal: 0x49
  struct _STRING32 CSDVersion;                 // offset: 0x1f0 ordinal: 0x4a
  ULONG ActivationContextData;                 // offset: 0x1f8 ordinal: 0x4b
  ULONG ProcessAssemblyStorageMap;             // offset: 0x1fc ordinal: 0x4c
  ULONG SystemDefaultActivationContextData;    // offset: 0x200 ordinal: 0x4d
  ULONG SystemAssemblyStorageMap;              // offset: 0x204 ordinal: 0x4e
  ULONG MinimumStackCommit;                    // offset: 0x208 ordinal: 0x4f
  ULONG FlsCallback;                           // offset: 0x20c ordinal: 0x50
  struct LIST_ENTRY32 FlsListHead;             // offset: 0x210 ordinal: 0x51
  ULONG FlsBitmap;                             // offset: 0x218 ordinal: 0x52
  ULONG FlsBitmapBits[4];                      // offset: 0x21c ordinal: 0x53
  ULONG FlsHighIndex;                          // offset: 0x22c ordinal: 0x54
  ULONG WerRegistrationData;                   // offset: 0x230 ordinal: 0x55
  ULONG WerShipAssertPtr;                      // offset: 0x234 ordinal: 0x56
  ULONG pUnused;                               // offset: 0x238 ordinal: 0x57
  ULONG pImageHeaderHash;                      // offset: 0x23c ordinal: 0x58
  union {
    ULONG TracingFlags;           // offset: 0x240 ordinal: 0x59
    ULONG HeapTracingEnabled : 1; // offset: 0x240 ordinal: 0x5a
  };
  ULONG CritSecTracingEnabled : 1;             // offset: 0x240 ordinal: 0x5b
  ULONG LibLoaderTracingEnabled : 1;           // offset: 0x240 ordinal: 0x5c
  ULONG SpareTracingBits : 29;                 // offset: 0x240 ordinal: 0x5d
  ULONGLONG CsrServerReadOnlySharedMemoryBase; // offset: 0x248 ordinal: 0x5e
} _PEB32;

// 0x8 bytes (sizeof)
typedef union __anon_1797 {
  union _ULARGE_INTEGER RemappedFormat; // offset: 0x0 ordinal: 0x0
  struct __anon_1800 Msi;               // offset: 0x0 ordinal: 0x1
} __anon_1797;

// 0x10 bytes (sizeof)
typedef struct _INTERRUPT_REMAPPING_INFO {
  ULONG IrtIndex : 30;       // offset: 0x0 ordinal: 0x0
  ULONG FlagHalInternal : 1; // offset: 0x0 ordinal: 0x1
  ULONG FlagTranslated : 1;  // offset: 0x0 ordinal: 0x2
  union __anon_1797 u;       // offset: 0x8 ordinal: 0x3
} _INTERRUPT_REMAPPING_INFO;

// 0x50 bytes (sizeof)
typedef struct _INTERRUPT_VECTOR_DATA {
  enum INTERRUPT_CONNECTION_TYPE Type;           // offset: 0x0 ordinal: 0x0
  ULONG Vector;                                  // offset: 0x4 ordinal: 0x1
  UCHAR Irql;                                    // offset: 0x8 ordinal: 0x2
  enum _KINTERRUPT_POLARITY Polarity;            // offset: 0xc ordinal: 0x3
  enum _KINTERRUPT_MODE Mode;                    // offset: 0x10 ordinal: 0x4
  struct _GROUP_AFFINITY TargetProcessors;       // offset: 0x18 ordinal: 0x5
  struct _INTERRUPT_REMAPPING_INFO IntRemapInfo; // offset: 0x28 ordinal: 0x6
  struct __anon_1793 ControllerInput;            // offset: 0x38 ordinal: 0x7
  union {
    struct __anon_1794 XapicMessage;   // offset: 0x40 ordinal: 0x8
    struct __anon_1795 Hypertransport; // offset: 0x40 ordinal: 0x9
    struct __anon_1794 GenericMessage; // offset: 0x40 ordinal: 0xa
    struct __anon_1796 MessageRequest; // offset: 0x40 ordinal: 0xb
  };
} _INTERRUPT_VECTOR_DATA;

// 0x58 bytes (sizeof)
typedef struct _INTERRUPT_CONNECTION_DATA {
  ULONG Count;                              // offset: 0x0 ordinal: 0x0
  struct _INTERRUPT_VECTOR_DATA Vectors[1]; // offset: 0x8 ordinal: 0x1
} _INTERRUPT_CONNECTION_DATA;

// 0x20 bytes (sizeof)
typedef struct _KTIMER_TABLE_ENTRY {
  ULONGLONG Lock;             // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY Entry;   // offset: 0x8 ordinal: 0x1
  union _ULARGE_INTEGER Time; // offset: 0x18 ordinal: 0x2
} _KTIMER_TABLE_ENTRY;

// 0x40 bytes (sizeof)
typedef struct _KTIMER {
  struct _DISPATCHER_HEADER Header;  // offset: 0x0 ordinal: 0x0
  union _ULARGE_INTEGER DueTime;     // offset: 0x18 ordinal: 0x1
  struct _LIST_ENTRY TimerListEntry; // offset: 0x20 ordinal: 0x2
  struct _KDPC *Dpc;                 // offset: 0x30 ordinal: 0x3
  ULONG Processor;                   // offset: 0x38 ordinal: 0x4
  ULONG Period;                      // offset: 0x3c ordinal: 0x5
} _KTIMER;

// 0x338 bytes (sizeof)
typedef struct _POP_THERMAL_ZONE {
  union {
    struct _POP_POLICY_DEVICE PolicyDevice; // offset: 0x0 ordinal: 0x0
    struct _LIST_ENTRY Link;                // offset: 0x0 ordinal: 0x1
  };
  enum POWER_POLICY_DEVICE_TYPE DeviceType; // offset: 0x10 ordinal: 0x2
  VOID *Notification;                       // offset: 0x18 ordinal: 0x3
  struct _UNICODE_STRING Name;              // offset: 0x20 ordinal: 0x4
  struct _DEVICE_OBJECT *Device;            // offset: 0x30 ordinal: 0x5
  struct _IRP *Irp;                         // offset: 0x38 ordinal: 0x6
  UCHAR State;                              // offset: 0x40 ordinal: 0x7
  UCHAR Flags;                              // offset: 0x41 ordinal: 0x8
  UCHAR Removing;                           // offset: 0x42 ordinal: 0x9
  UCHAR Mode;                               // offset: 0x43 ordinal: 0xa
  UCHAR PendingMode;                        // offset: 0x44 ordinal: 0xb
  UCHAR ActivePoint;                        // offset: 0x45 ordinal: 0xc
  UCHAR PendingActivePoint;                 // offset: 0x46 ordinal: 0xd
  UCHAR Critical;                           // offset: 0x47 ordinal: 0xe
  UCHAR ThermalStandby;                     // offset: 0x48 ordinal: 0xf
  UCHAR OverThrottled;                      // offset: 0x49 ordinal: 0x10
  LONG HighPrecisionThrottle;               // offset: 0x4c ordinal: 0x11
  LONG Throttle;                            // offset: 0x50 ordinal: 0x12
  LONG PendingThrottle;                     // offset: 0x54 ordinal: 0x13
  ULONG ThrottleReasons;                    // offset: 0x58 ordinal: 0x14
  ULONGLONG LastTime;                       // offset: 0x60 ordinal: 0x15
  ULONG SampleRate;                         // offset: 0x68 ordinal: 0x16
  ULONG LastTemp;                           // offset: 0x6c ordinal: 0x17
  struct _KTIMER PassiveTimer;              // offset: 0x70 ordinal: 0x18
  struct _KDPC PassiveDpc;                  // offset: 0xb0 ordinal: 0x19
  struct _THERMAL_INFORMATION_EX Info;      // offset: 0xf0 ordinal: 0x1a
  union _LARGE_INTEGER InfoLastUpdateTime;  // offset: 0x148 ordinal: 0x1b
  struct _THERMAL_POLICY Policy;            // offset: 0x150 ordinal: 0x1c
  UCHAR PolicyDriver;                       // offset: 0x168 ordinal: 0x1d
  ULONGLONG LastActiveStartTime;            // offset: 0x170 ordinal: 0x1e
  ULONGLONG LastPassiveStartTime;           // offset: 0x178 ordinal: 0x1f
  struct _WORK_QUEUE_ITEM WorkItem;         // offset: 0x180 ordinal: 0x20
  struct _POP_RW_LOCK Lock;                 // offset: 0x1a0 ordinal: 0x21
  struct _KEVENT ZoneStopped;               // offset: 0x1b0 ordinal: 0x22
  struct _KEVENT TemperatureUpdated;        // offset: 0x1c8 ordinal: 0x23
  ULONG InstanceId;                         // offset: 0x1e0 ordinal: 0x24
  struct _POP_THERMAL_TELEMETRY_TRACKER
      TelemetryTracker; // offset: 0x1e8 ordinal: 0x25
} _POP_THERMAL_ZONE;

// 0x88 bytes (sizeof)
typedef struct _LAZY_WRITER {
  struct _KDPC ScanDpc;             // offset: 0x0 ordinal: 0x0
  struct _KTIMER ScanTimer;         // offset: 0x40 ordinal: 0x1
  UCHAR ScanActive;                 // offset: 0x80 ordinal: 0x2
  UCHAR OtherWork;                  // offset: 0x81 ordinal: 0x3
  UCHAR PendingTeardownScan;        // offset: 0x82 ordinal: 0x4
  UCHAR PendingPeriodicScan;        // offset: 0x83 ordinal: 0x5
  UCHAR PendingLowMemoryScan;       // offset: 0x84 ordinal: 0x6
  UCHAR PendingPowerScan;           // offset: 0x85 ordinal: 0x7
  UCHAR PendingCoalescingFlushScan; // offset: 0x86 ordinal: 0x8
} _LAZY_WRITER;

// 0x2d8 bytes (sizeof)
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
  struct _KTM *Tm;                           // offset: 0x200 ordinal: 0x1f
  LONGLONG CommitReservation;                // offset: 0x208 ordinal: 0x20
  struct _KTRANSACTION_HISTORY
      TransactionHistory[10];                 // offset: 0x210 ordinal: 0x21
  ULONG TransactionHistoryCount;              // offset: 0x260 ordinal: 0x22
  VOID *DTCPrivateInformation;                // offset: 0x268 ordinal: 0x23
  ULONG DTCPrivateInformationLength;          // offset: 0x270 ordinal: 0x24
  struct _KMUTANT DTCPrivateInformationMutex; // offset: 0x278 ordinal: 0x25
  VOID *PromotedTxSelfHandle;                 // offset: 0x2b0 ordinal: 0x26
  ULONG PendingPromotionCount;                // offset: 0x2b8 ordinal: 0x27
  struct _KEVENT PromotionCompletedEvent;     // offset: 0x2c0 ordinal: 0x28
} _KTRANSACTION;

// 0x88 bytes (sizeof)
typedef struct _POP_FX_WORK_ORDER_WATCHDOG_INFO {
  struct _KTIMER Timer;                 // offset: 0x0 ordinal: 0x0
  struct _KDPC Dpc;                     // offset: 0x40 ordinal: 0x1
  struct _POP_FX_WORK_ORDER *WorkOrder; // offset: 0x80 ordinal: 0x2
} _POP_FX_WORK_ORDER_WATCHDOG_INFO;

// 0x38 bytes (sizeof)
typedef struct _POP_FX_WORK_ORDER {
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x0 ordinal: 0x0
  LONG WorkCount;                   // offset: 0x20 ordinal: 0x1
  VOID *Context;                    // offset: 0x28 ordinal: 0x2
  struct _POP_FX_WORK_ORDER_WATCHDOG_INFO
      *WatchdogTimerInfo; // offset: 0x30 ordinal: 0x3
} _POP_FX_WORK_ORDER;

// 0xb8 bytes (sizeof)
typedef struct _POP_FX_PLUGIN {
  struct _LIST_ENTRY Link;                          // offset: 0x0 ordinal: 0x0
  ULONG Version;                                    // offset: 0x10 ordinal: 0x1
  ULONGLONG Flags;                                  // offset: 0x18 ordinal: 0x2
  struct _KQUEUE WorkQueue;                         // offset: 0x20 ordinal: 0x3
  UCHAR (*AcceptDeviceNotification)(ULONG, VOID *); // offset: 0x60 ordinal: 0x4
  UCHAR(*AcceptProcessorNotification)
  (struct PEPHANDLE__ *, ULONG, VOID *);          // offset: 0x68 ordinal: 0x5
  UCHAR (*AcceptAcpiNotification)(ULONG, VOID *); // offset: 0x70 ordinal: 0x6
  ULONG WorkOrderCount;                           // offset: 0x78 ordinal: 0x7
  struct _POP_FX_WORK_ORDER WorkOrders[1];        // offset: 0x80 ordinal: 0x8
} _POP_FX_PLUGIN;

// 0x278 bytes (sizeof)
typedef struct _POP_FX_DEVICE {
  struct _LIST_ENTRY Link;                       // offset: 0x0 ordinal: 0x0
  struct _IRP *Irp;                              // offset: 0x10 ordinal: 0x1
  struct _POP_IRP_DATA *IrpData;                 // offset: 0x18 ordinal: 0x2
  union _POP_FX_DEVICE_STATUS Status;            // offset: 0x20 ordinal: 0x3
  LONG PowerReqCall;                             // offset: 0x24 ordinal: 0x4
  LONG PowerNotReqCall;                          // offset: 0x28 ordinal: 0x5
  struct _DEVICE_NODE *DevNode;                  // offset: 0x30 ordinal: 0x6
  struct PEPHANDLE__ *DpmContext;                // offset: 0x38 ordinal: 0x7
  struct _POP_FX_PLUGIN *Plugin;                 // offset: 0x40 ordinal: 0x8
  struct PEPHANDLE__ *PluginHandle;              // offset: 0x48 ordinal: 0x9
  struct _POP_FX_PLUGIN *AcpiPlugin;             // offset: 0x50 ordinal: 0xa
  struct PEPHANDLE__ *AcpiPluginHandle;          // offset: 0x58 ordinal: 0xb
  struct _DEVICE_OBJECT *DeviceObject;           // offset: 0x60 ordinal: 0xc
  struct _DEVICE_OBJECT *TargetDevice;           // offset: 0x68 ordinal: 0xd
  struct _POP_FX_DRIVER_CALLBACKS Callbacks;     // offset: 0x70 ordinal: 0xe
  VOID *DriverContext;                           // offset: 0xa8 ordinal: 0xf
  struct _LIST_ENTRY AcpiLink;                   // offset: 0xb0 ordinal: 0x10
  struct _UNICODE_STRING DeviceId;               // offset: 0xc0 ordinal: 0x11
  struct _IO_REMOVE_LOCK RemoveLock;             // offset: 0xd0 ordinal: 0x12
  struct _IO_REMOVE_LOCK AcpiRemoveLock;         // offset: 0xf0 ordinal: 0x13
  struct _POP_FX_WORK_ORDER WorkOrder;           // offset: 0x110 ordinal: 0x14
  ULONGLONG IdleLock;                            // offset: 0x148 ordinal: 0x15
  struct _KTIMER IdleTimer;                      // offset: 0x150 ordinal: 0x16
  struct _KDPC IdleDpc;                          // offset: 0x190 ordinal: 0x17
  ULONGLONG IdleTimeout;                         // offset: 0x1d0 ordinal: 0x18
  ULONGLONG IdleStamp;                           // offset: 0x1d8 ordinal: 0x19
  struct _DEVICE_OBJECT *NextIrpDeviceObject[2]; // offset: 0x1e0 ordinal: 0x1a
  union _POWER_STATE NextIrpPowerState[2];       // offset: 0x1f0 ordinal: 0x1b
  VOID(*NextIrpCallerCompletion[2])
  (struct _DEVICE_OBJECT *, UCHAR, union _POWER_STATE, VOID *,
   struct _IO_STATUS_BLOCK *);     // offset: 0x1f8 ordinal: 0x1c
  VOID *NextIrpCallerContext[2];   // offset: 0x208 ordinal: 0x1d
  struct _KEVENT IrpCompleteEvent; // offset: 0x218 ordinal: 0x1e
  UCHAR(*PowerOnDumpDeviceCallback)
  (struct _PEP_CRASHDUMP_INFORMATION *); // offset: 0x230 ordinal: 0x1f
  struct _POP_FX_ACCOUNTING Accounting;  // offset: 0x238 ordinal: 0x20
  ULONG Flags;                           // offset: 0x268 ordinal: 0x21
  ULONG ComponentCount;                  // offset: 0x26c ordinal: 0x22
  struct _POP_FX_COMPONENT **Components; // offset: 0x270 ordinal: 0x23
} _POP_FX_DEVICE;

// 0x100 bytes (sizeof)
typedef struct _POP_FX_COMPONENT {
  struct _GUID Id;                       // offset: 0x0 ordinal: 0x0
  ULONG Index;                           // offset: 0x10 ordinal: 0x1
  struct _POP_FX_WORK_ORDER WorkOrder;   // offset: 0x18 ordinal: 0x2
  struct _POP_FX_DEVICE *Device;         // offset: 0x50 ordinal: 0x3
  union _POP_FX_COMPONENT_FLAGS Flags;   // offset: 0x58 ordinal: 0x4
  LONG Resident;                         // offset: 0x60 ordinal: 0x5
  struct _KEVENT ActiveEvent;            // offset: 0x68 ordinal: 0x6
  ULONGLONG IdleLock;                    // offset: 0x80 ordinal: 0x7
  LONG IdleConditionComplete;            // offset: 0x88 ordinal: 0x8
  LONG IdleStateComplete;                // offset: 0x8c ordinal: 0x9
  ULONGLONG IdleStamp;                   // offset: 0x90 ordinal: 0xa
  ULONG CurrentIdleState;                // offset: 0x98 ordinal: 0xb
  ULONG IdleStateCount;                  // offset: 0x9c ordinal: 0xc
  struct _POP_FX_IDLE_STATE *IdleStates; // offset: 0xa0 ordinal: 0xd
  ULONG DeepestWakeableIdleState;        // offset: 0xa8 ordinal: 0xe
  ULONG ProviderCount;                   // offset: 0xac ordinal: 0xf
  struct _POP_FX_PROVIDER *Providers;    // offset: 0xb0 ordinal: 0x10
  ULONG IdleProviderCount;               // offset: 0xb8 ordinal: 0x11
  ULONG DependentCount;                  // offset: 0xbc ordinal: 0x12
  struct _POP_FX_DEPENDENT *Dependents;  // offset: 0xc0 ordinal: 0x13
  struct _POP_FX_ACCOUNTING Accounting;  // offset: 0xc8 ordinal: 0x14
  struct _POP_FX_PERF_INFO *Performance; // offset: 0xf8 ordinal: 0x15
} _POP_FX_COMPONENT;

// 0xa0 bytes (sizeof)
typedef struct _POP_FX_PERF_INFO {
  struct _POP_FX_COMPONENT *Component; // offset: 0x0 ordinal: 0x0
  struct _KEVENT CompletedEvent;       // offset: 0x8 ordinal: 0x1
  VOID(*ComponentPerfState)
  (VOID *, ULONG, UCHAR, VOID *);              // offset: 0x20 ordinal: 0x2
  union _POP_FX_PERF_FLAGS Flags;              // offset: 0x28 ordinal: 0x3
  struct _PO_FX_PERF_STATE_CHANGE *LastChange; // offset: 0x30 ordinal: 0x4
  ULONG LastChangeCount;                       // offset: 0x38 ordinal: 0x5
  ULONGLONG LastChangeStamp;                   // offset: 0x40 ordinal: 0x6
  UCHAR LastChangeNominal;                     // offset: 0x48 ordinal: 0x7
  UCHAR PepRegistered;                         // offset: 0x49 ordinal: 0x8
  UCHAR QueryOnIdleStates;                     // offset: 0x4a ordinal: 0x9
  VOID *RequestDriverContext;                  // offset: 0x50 ordinal: 0xa
  struct _POP_FX_WORK_ORDER WorkOrder;         // offset: 0x58 ordinal: 0xb
  ULONG SetsCount;                             // offset: 0x90 ordinal: 0xc
  struct _POP_FX_PERF_SET *Sets;               // offset: 0x98 ordinal: 0xd
} _POP_FX_PERF_INFO;

// 0xf8 bytes (sizeof)
typedef struct _POP_IRP_DATA {
  struct _LIST_ENTRY Link;               // offset: 0x0 ordinal: 0x0
  struct _IRP *Irp;                      // offset: 0x10 ordinal: 0x1
  struct _DEVICE_OBJECT *Pdo;            // offset: 0x18 ordinal: 0x2
  struct _DEVICE_OBJECT *TargetDevice;   // offset: 0x20 ordinal: 0x3
  struct _DEVICE_OBJECT *CurrentDevice;  // offset: 0x28 ordinal: 0x4
  ULONGLONG WatchdogStart;               // offset: 0x30 ordinal: 0x5
  struct _KTIMER WatchdogTimer;          // offset: 0x38 ordinal: 0x6
  struct _KDPC WatchdogDpc;              // offset: 0x78 ordinal: 0x7
  UCHAR MinorFunction;                   // offset: 0xb8 ordinal: 0x8
  enum _POWER_STATE_TYPE PowerStateType; // offset: 0xbc ordinal: 0x9
  union _POWER_STATE PowerState;         // offset: 0xc0 ordinal: 0xa
  UCHAR WatchdogEnabled;                 // offset: 0xc4 ordinal: 0xb
  struct _POP_FX_DEVICE *FxDevice;       // offset: 0xc8 ordinal: 0xc
  UCHAR SystemTransition;                // offset: 0xd0 ordinal: 0xd
  UCHAR NotifyPEP;                       // offset: 0xd1 ordinal: 0xe
  union {
    struct __anon_1270 Device; // offset: 0xd8 ordinal: 0xf
    struct __anon_1271 System; // offset: 0xd8 ordinal: 0x10
  };
} _POP_IRP_DATA;

// 0x2c8 bytes (sizeof)
typedef struct _DEVICE_NODE {
  struct _DEVICE_NODE *Sibling;                // offset: 0x0 ordinal: 0x0
  struct _DEVICE_NODE *Child;                  // offset: 0x8 ordinal: 0x1
  struct _DEVICE_NODE *Parent;                 // offset: 0x10 ordinal: 0x2
  struct _DEVICE_NODE *LastChild;              // offset: 0x18 ordinal: 0x3
  struct _DEVICE_OBJECT *PhysicalDeviceObject; // offset: 0x20 ordinal: 0x4
  struct _UNICODE_STRING InstancePath;         // offset: 0x28 ordinal: 0x5
  struct _UNICODE_STRING ServiceName;          // offset: 0x38 ordinal: 0x6
  struct _IRP *PendingIrp;                     // offset: 0x48 ordinal: 0x7
  struct _POP_FX_DEVICE *FxDevice;             // offset: 0x50 ordinal: 0x8
  LONG FxDeviceLock;                           // offset: 0x58 ordinal: 0x9
  struct _KEVENT FxRemoveEvent;                // offset: 0x60 ordinal: 0xa
  LONG FxActivationCount;                      // offset: 0x78 ordinal: 0xb
  LONG FxSleepCount;                           // offset: 0x7c ordinal: 0xc
  struct _POP_FX_PLUGIN *Plugin;               // offset: 0x80 ordinal: 0xd
  ULONG Level;                                 // offset: 0x88 ordinal: 0xe
  union _POWER_STATE CurrentPowerState;        // offset: 0x8c ordinal: 0xf
  struct _PO_DEVICE_NOTIFY Notify;             // offset: 0x90 ordinal: 0x10
  struct _PO_IRP_MANAGER PoIrpManager;         // offset: 0xf8 ordinal: 0x11
  struct _UNICODE_STRING UniqueId;             // offset: 0x118 ordinal: 0x12
  ULONG PowerFlags;                            // offset: 0x128 ordinal: 0x13
  enum _PNP_DEVNODE_STATE State;               // offset: 0x12c ordinal: 0x14
  enum _PNP_DEVNODE_STATE PreviousState;       // offset: 0x130 ordinal: 0x15
  enum _PNP_DEVNODE_STATE StateHistory[20];    // offset: 0x134 ordinal: 0x16
  ULONG StateHistoryEntry;                     // offset: 0x184 ordinal: 0x17
  LONG CompletionStatus;                       // offset: 0x188 ordinal: 0x18
  ULONG Flags;                                 // offset: 0x18c ordinal: 0x19
  ULONG UserFlags;                             // offset: 0x190 ordinal: 0x1a
  ULONG Problem;                               // offset: 0x194 ordinal: 0x1b
  LONG ProblemStatus;                          // offset: 0x198 ordinal: 0x1c
  struct _CM_RESOURCE_LIST *ResourceList;      // offset: 0x1a0 ordinal: 0x1d
  struct _CM_RESOURCE_LIST
      *ResourceListTranslated;         // offset: 0x1a8 ordinal: 0x1e
  struct _DEVICE_OBJECT *DuplicatePDO; // offset: 0x1b0 ordinal: 0x1f
  struct _IO_RESOURCE_REQUIREMENTS_LIST
      *ResourceRequirements;               // offset: 0x1b8 ordinal: 0x20
  enum _INTERFACE_TYPE InterfaceType;      // offset: 0x1c0 ordinal: 0x21
  ULONG BusNumber;                         // offset: 0x1c4 ordinal: 0x22
  enum _INTERFACE_TYPE ChildInterfaceType; // offset: 0x1c8 ordinal: 0x23
  ULONG ChildBusNumber;                    // offset: 0x1cc ordinal: 0x24
  USHORT ChildBusTypeIndex;                // offset: 0x1d0 ordinal: 0x25
  UCHAR RemovalPolicy;                     // offset: 0x1d2 ordinal: 0x26
  UCHAR HardwareRemovalPolicy;             // offset: 0x1d3 ordinal: 0x27
  struct _LIST_ENTRY TargetDeviceNotify;   // offset: 0x1d8 ordinal: 0x28
  struct _LIST_ENTRY DeviceArbiterList;    // offset: 0x1e8 ordinal: 0x29
  struct _LIST_ENTRY DeviceTranslatorList; // offset: 0x1f8 ordinal: 0x2a
  USHORT NoTranslatorMask;                 // offset: 0x208 ordinal: 0x2b
  USHORT QueryTranslatorMask;              // offset: 0x20a ordinal: 0x2c
  USHORT NoArbiterMask;                    // offset: 0x20c ordinal: 0x2d
  USHORT QueryArbiterMask;                 // offset: 0x20e ordinal: 0x2e
  union __anon_1215 OverUsed1;             // offset: 0x210 ordinal: 0x2f
  union __anon_1226 OverUsed2;             // offset: 0x218 ordinal: 0x30
  struct _CM_RESOURCE_LIST *BootResources; // offset: 0x220 ordinal: 0x31
  struct _CM_RESOURCE_LIST
      *BootResourcesTranslated;               // offset: 0x228 ordinal: 0x32
  ULONG CapabilityFlags;                      // offset: 0x230 ordinal: 0x33
  struct __anon_1227 DockInfo;                // offset: 0x238 ordinal: 0x34
  ULONG DisableableDepends;                   // offset: 0x258 ordinal: 0x35
  struct _LIST_ENTRY PendedSetInterfaceState; // offset: 0x260 ordinal: 0x36
  struct _LIST_ENTRY LegacyBusListEntry;      // offset: 0x270 ordinal: 0x37
  ULONG DriverUnloadRetryCount;               // offset: 0x280 ordinal: 0x38
  struct _DEVICE_NODE *PreviousParent;        // offset: 0x288 ordinal: 0x39
  LONG DeletedChildren;                       // offset: 0x290 ordinal: 0x3a
  ULONG NumaNodeIndex;                        // offset: 0x294 ordinal: 0x3b
  struct _GUID ContainerID;                   // offset: 0x298 ordinal: 0x3c
  UCHAR OverrideFlags;                        // offset: 0x2a8 ordinal: 0x3d
  ULONG DeviceIdsHash;                        // offset: 0x2ac ordinal: 0x3e
  UCHAR RequiresUnloadedDriver;               // offset: 0x2b0 ordinal: 0x3f
  struct _PENDING_RELATIONS_LIST_ENTRY
      *PendingEjectRelations; // offset: 0x2b8 ordinal: 0x40
  ULONG StateFlags;           // offset: 0x2c0 ordinal: 0x41
} _DEVICE_NODE;

// 0x110 bytes (sizeof)
typedef struct _MI_PARTITION_SEGMENTS {
  struct _KEVENT DeleteSubsectionCleanup; // offset: 0x0 ordinal: 0x0
  struct _KEVENT UnusedSegmentCleanup;    // offset: 0x18 ordinal: 0x1
  ULONGLONG SubsectionDeletePtes;         // offset: 0x30 ordinal: 0x2
  struct _MMDEREFERENCE_SEGMENT_HEADER
      DereferenceSegmentHeader;                    // offset: 0x38 ordinal: 0x3
  struct _LIST_ENTRY DeleteOnCloseList;            // offset: 0x68 ordinal: 0x4
  struct _KTIMER DeleteOnCloseTimer;               // offset: 0x78 ordinal: 0x5
  UCHAR DeleteOnCloseTimerActive;                  // offset: 0xb8 ordinal: 0x6
  ULONG DeleteOnCloseCount;                        // offset: 0xbc ordinal: 0x7
  struct _LIST_ENTRY UnusedSegmentList;            // offset: 0xc0 ordinal: 0x8
  struct _LIST_ENTRY UnusedSubsectionList;         // offset: 0xd0 ordinal: 0x9
  struct _LIST_ENTRY DeleteSubsectionList;         // offset: 0xe0 ordinal: 0xa
  struct _KEVENT ControlAreaDeleteEvent;           // offset: 0xf0 ordinal: 0xb
  struct _SINGLE_LIST_ENTRY ControlAreaDeleteList; // offset: 0x108 ordinal: 0xc
} _MI_PARTITION_SEGMENTS;

// 0x540 bytes (sizeof)
typedef struct _ENODE {
  struct _KNODE Ncb;                       // offset: 0x0 ordinal: 0x0
  struct _EX_WORK_QUEUE *ExWorkQueues[8];  // offset: 0x100 ordinal: 0x1
  struct _EX_WORK_QUEUE ExWorkQueue;       // offset: 0x140 ordinal: 0x2
  struct _KEVENT ExpThreadSetManagerEvent; // offset: 0x410 ordinal: 0x3
  struct _KTIMER ExpDeadlockTimer;         // offset: 0x428 ordinal: 0x4
  struct _KEVENT ExpThreadReaperEvent;     // offset: 0x468 ordinal: 0x5
  struct _KWAIT_BLOCK WaitBlocks[3];       // offset: 0x480 ordinal: 0x6
  struct _ETHREAD
      *ExpWorkerThreadBalanceManagerPtr; // offset: 0x510 ordinal: 0x7
  ULONG ExpWorkerSeed;                   // offset: 0x518 ordinal: 0x8
  ULONG ExWorkerFullInit : 1;            // offset: 0x51c ordinal: 0x9
  ULONG ExWorkerStructInit : 1;          // offset: 0x51c ordinal: 0xa
  ULONG ExWorkerFlags;                   // offset: 0x51c ordinal: 0xb
} _ENODE;

// 0x2200 bytes (sizeof)
typedef struct _KTIMER_TABLE {
  struct _KTIMER *TimerExpiry[64];              // offset: 0x0 ordinal: 0x0
  struct _KTIMER_TABLE_ENTRY TimerEntries[256]; // offset: 0x200 ordinal: 0x1
} _KTIMER_TABLE;

// 0x6900 bytes (sizeof)
typedef struct _KPRCB {
  ULONG MxCsr;                    // offset: 0x0 ordinal: 0x0
  UCHAR LegacyNumber;             // offset: 0x4 ordinal: 0x1
  UCHAR ReservedMustBeZero;       // offset: 0x5 ordinal: 0x2
  UCHAR InterruptRequest;         // offset: 0x6 ordinal: 0x3
  UCHAR IdleHalt;                 // offset: 0x7 ordinal: 0x4
  struct _KTHREAD *CurrentThread; // offset: 0x8 ordinal: 0x5
  struct _KTHREAD *NextThread;    // offset: 0x10 ordinal: 0x6
  struct _KTHREAD *IdleThread;    // offset: 0x18 ordinal: 0x7
  UCHAR NestingLevel;             // offset: 0x20 ordinal: 0x8
  UCHAR ClockOwner;               // offset: 0x21 ordinal: 0x9
  union {
    UCHAR PendingTickFlags; // offset: 0x22 ordinal: 0xa
    UCHAR PendingTick : 1;  // offset: 0x22 ordinal: 0xb
  };
  UCHAR PendingBackupTick : 1;             // offset: 0x22 ordinal: 0xc
  UCHAR IdleState;                         // offset: 0x23 ordinal: 0xd
  ULONG Number;                            // offset: 0x24 ordinal: 0xe
  ULONGLONG RspBase;                       // offset: 0x28 ordinal: 0xf
  ULONGLONG PrcbLock;                      // offset: 0x30 ordinal: 0x10
  CHAR *PriorityState;                     // offset: 0x38 ordinal: 0x11
  struct _KPROCESSOR_STATE ProcessorState; // offset: 0x40 ordinal: 0x12
  CHAR CpuType;                            // offset: 0x5f0 ordinal: 0x13
  CHAR CpuID;                              // offset: 0x5f1 ordinal: 0x14
  union {
    USHORT CpuStep;    // offset: 0x5f2 ordinal: 0x15
    UCHAR CpuStepping; // offset: 0x5f2 ordinal: 0x16
  };
  UCHAR CpuModel;                                // offset: 0x5f3 ordinal: 0x17
  ULONG MHz;                                     // offset: 0x5f4 ordinal: 0x18
  ULONGLONG HalReserved[8];                      // offset: 0x5f8 ordinal: 0x19
  USHORT MinorVersion;                           // offset: 0x638 ordinal: 0x1a
  USHORT MajorVersion;                           // offset: 0x63a ordinal: 0x1b
  UCHAR BuildType;                               // offset: 0x63c ordinal: 0x1c
  UCHAR CpuVendor;                               // offset: 0x63d ordinal: 0x1d
  UCHAR CoresPerPhysicalProcessor;               // offset: 0x63e ordinal: 0x1e
  UCHAR LogicalProcessorsPerCore;                // offset: 0x63f ordinal: 0x1f
  struct _KNODE *ParentNode;                     // offset: 0x640 ordinal: 0x20
  ULONGLONG GroupSetMember;                      // offset: 0x648 ordinal: 0x21
  UCHAR Group;                                   // offset: 0x650 ordinal: 0x22
  UCHAR GroupIndex;                              // offset: 0x651 ordinal: 0x23
  UCHAR PrcbPad05[2];                            // offset: 0x652 ordinal: 0x24
  ULONG InitialApicId;                           // offset: 0x654 ordinal: 0x25
  ULONG ScbOffset;                               // offset: 0x658 ordinal: 0x26
  ULONG ApicMask;                                // offset: 0x65c ordinal: 0x27
  VOID *AcpiReserved;                            // offset: 0x660 ordinal: 0x28
  ULONG CFlushSize;                              // offset: 0x668 ordinal: 0x29
  ULONG PrcbPad10;                               // offset: 0x66c ordinal: 0x2a
  struct _KSPIN_LOCK_QUEUE LockQueue[17];        // offset: 0x670 ordinal: 0x2b
  struct _PP_LOOKASIDE_LIST PPLookasideList[16]; // offset: 0x780 ordinal: 0x2c
  struct _GENERAL_LOOKASIDE_POOL
      PPNxPagedLookasideList[32]; // offset: 0x880 ordinal: 0x2d
  struct _GENERAL_LOOKASIDE_POOL
      PPNPagedLookasideList[32]; // offset: 0x1480 ordinal: 0x2e
  struct _GENERAL_LOOKASIDE_POOL
      PPPagedLookasideList[32]; // offset: 0x2080 ordinal: 0x2f
  ULONGLONG PrcbPad20;          // offset: 0x2c80 ordinal: 0x30
  struct _SINGLE_LIST_ENTRY
      DeferredReadyListHead;                 // offset: 0x2c88 ordinal: 0x31
  LONG MmPageFaultCount;                     // offset: 0x2c90 ordinal: 0x32
  LONG MmCopyOnWriteCount;                   // offset: 0x2c94 ordinal: 0x33
  LONG MmTransitionCount;                    // offset: 0x2c98 ordinal: 0x34
  LONG MmDemandZeroCount;                    // offset: 0x2c9c ordinal: 0x35
  LONG MmPageReadCount;                      // offset: 0x2ca0 ordinal: 0x36
  LONG MmPageReadIoCount;                    // offset: 0x2ca4 ordinal: 0x37
  LONG MmDirtyPagesWriteCount;               // offset: 0x2ca8 ordinal: 0x38
  LONG MmDirtyWriteIoCount;                  // offset: 0x2cac ordinal: 0x39
  LONG MmMappedPagesWriteCount;              // offset: 0x2cb0 ordinal: 0x3a
  LONG MmMappedWriteIoCount;                 // offset: 0x2cb4 ordinal: 0x3b
  ULONG KeSystemCalls;                       // offset: 0x2cb8 ordinal: 0x3c
  ULONG KeContextSwitches;                   // offset: 0x2cbc ordinal: 0x3d
  USHORT LdtSelector;                        // offset: 0x2cc0 ordinal: 0x3e
  USHORT PrcbPad40;                          // offset: 0x2cc2 ordinal: 0x3f
  ULONG CcFastReadNoWait;                    // offset: 0x2cc4 ordinal: 0x40
  ULONG CcFastReadWait;                      // offset: 0x2cc8 ordinal: 0x41
  ULONG CcFastReadNotPossible;               // offset: 0x2ccc ordinal: 0x42
  ULONG CcCopyReadNoWait;                    // offset: 0x2cd0 ordinal: 0x43
  ULONG CcCopyReadWait;                      // offset: 0x2cd4 ordinal: 0x44
  ULONG CcCopyReadNoWaitMiss;                // offset: 0x2cd8 ordinal: 0x45
  LONG IoReadOperationCount;                 // offset: 0x2cdc ordinal: 0x46
  LONG IoWriteOperationCount;                // offset: 0x2ce0 ordinal: 0x47
  LONG IoOtherOperationCount;                // offset: 0x2ce4 ordinal: 0x48
  union _LARGE_INTEGER IoReadTransferCount;  // offset: 0x2ce8 ordinal: 0x49
  union _LARGE_INTEGER IoWriteTransferCount; // offset: 0x2cf0 ordinal: 0x4a
  union _LARGE_INTEGER IoOtherTransferCount; // offset: 0x2cf8 ordinal: 0x4b
  LONG PacketBarrier;                        // offset: 0x2d00 ordinal: 0x4c
  LONG TargetCount;                          // offset: 0x2d04 ordinal: 0x4d
  ULONG IpiFrozen;                           // offset: 0x2d08 ordinal: 0x4e
  VOID *IsrDpcStats;                         // offset: 0x2d10 ordinal: 0x4f
  ULONG DeviceInterrupts;                    // offset: 0x2d18 ordinal: 0x50
  LONG LookasideIrpFloat;                    // offset: 0x2d1c ordinal: 0x51
  ULONG InterruptLastCount;                  // offset: 0x2d20 ordinal: 0x52
  ULONG InterruptRate;                       // offset: 0x2d24 ordinal: 0x53
  ULONG PrcbPad41[22];                       // offset: 0x2d28 ordinal: 0x54
  struct _KDPC_DATA DpcData[2];              // offset: 0x2d80 ordinal: 0x55
  VOID *DpcStack;                            // offset: 0x2dd0 ordinal: 0x56
  LONG MaximumDpcQueueDepth;                 // offset: 0x2dd8 ordinal: 0x57
  ULONG DpcRequestRate;                      // offset: 0x2ddc ordinal: 0x58
  ULONG MinimumDpcRate;                      // offset: 0x2de0 ordinal: 0x59
  ULONG DpcLastCount;                        // offset: 0x2de4 ordinal: 0x5a
  UCHAR ThreadDpcEnable;                     // offset: 0x2de8 ordinal: 0x5b
  UCHAR QuantumEnd;                          // offset: 0x2de9 ordinal: 0x5c
  UCHAR DpcRoutineActive;                    // offset: 0x2dea ordinal: 0x5d
  UCHAR IdleSchedule;                        // offset: 0x2deb ordinal: 0x5e
  union {
    LONG DpcRequestSummary;  // offset: 0x2dec ordinal: 0x5f
    SHORT DpcRequestSlot[2]; // offset: 0x2dec ordinal: 0x60
    SHORT NormalDpcState;    // offset: 0x2dec ordinal: 0x61
  };
  SHORT ThreadDpcState;                   // offset: 0x2dee ordinal: 0x62
  ULONG DpcNormalProcessingActive : 1;    // offset: 0x2dec ordinal: 0x63
  ULONG DpcNormalProcessingRequested : 1; // offset: 0x2dec ordinal: 0x64
  ULONG DpcNormalThreadSignal : 1;        // offset: 0x2dec ordinal: 0x65
  ULONG DpcNormalTimerExpiration : 1;     // offset: 0x2dec ordinal: 0x66
  ULONG DpcNormalDpcPresent : 1;          // offset: 0x2dec ordinal: 0x67
  ULONG DpcNormalLocalInterrupt : 1;      // offset: 0x2dec ordinal: 0x68
  ULONG DpcNormalSpare : 10;              // offset: 0x2dec ordinal: 0x69
  ULONG DpcThreadActive : 1;              // offset: 0x2dec ordinal: 0x6a
  ULONG DpcThreadRequested : 1;           // offset: 0x2dec ordinal: 0x6b
  ULONG DpcThreadSpare : 14;              // offset: 0x2dec ordinal: 0x6c
  ULONG LastTimerHand;                    // offset: 0x2df0 ordinal: 0x6d
  ULONG LastTick;                         // offset: 0x2df4 ordinal: 0x6e
  ULONG ClockInterrupts;                  // offset: 0x2df8 ordinal: 0x6f
  ULONG ReadyScanTick;                    // offset: 0x2dfc ordinal: 0x70
  VOID *InterruptObject[256];             // offset: 0x2e00 ordinal: 0x71
  struct _KTIMER_TABLE TimerTable;        // offset: 0x3600 ordinal: 0x72
  struct _KGATE DpcGate;                  // offset: 0x5800 ordinal: 0x73
  VOID *PrcbPad52;                        // offset: 0x5818 ordinal: 0x74
  struct _KDPC CallDpc;                   // offset: 0x5820 ordinal: 0x75
  LONG ClockKeepAlive;                    // offset: 0x5860 ordinal: 0x76
  UCHAR PrcbPad60[2];                     // offset: 0x5864 ordinal: 0x77
  USHORT NmiActive;                       // offset: 0x5866 ordinal: 0x78
  LONG DpcWatchdogPeriod;                 // offset: 0x5868 ordinal: 0x79
  LONG DpcWatchdogCount;                  // offset: 0x586c ordinal: 0x7a
  LONG KeSpinLockOrdering;                // offset: 0x5870 ordinal: 0x7b
  ULONG PrcbPad70[1];                     // offset: 0x5874 ordinal: 0x7c
  VOID *CachedPtes;                       // offset: 0x5878 ordinal: 0x7d
  struct _LIST_ENTRY WaitListHead;        // offset: 0x5880 ordinal: 0x7e
  ULONGLONG WaitLock;                     // offset: 0x5890 ordinal: 0x7f
  ULONG ReadySummary;                     // offset: 0x5898 ordinal: 0x80
  LONG AffinitizedSelectionMask;          // offset: 0x589c ordinal: 0x81
  ULONG QueueIndex;                       // offset: 0x58a0 ordinal: 0x82
  ULONG PrcbPad75[3];                     // offset: 0x58a4 ordinal: 0x83
  struct _KDPC TimerExpirationDpc;        // offset: 0x58b0 ordinal: 0x84
  struct _RTL_RB_TREE ScbQueue;           // offset: 0x58f0 ordinal: 0x85
  struct _LIST_ENTRY
      DispatcherReadyListHead[32];               // offset: 0x5900 ordinal: 0x86
  ULONG InterruptCount;                          // offset: 0x5b00 ordinal: 0x87
  ULONG KernelTime;                              // offset: 0x5b04 ordinal: 0x88
  ULONG UserTime;                                // offset: 0x5b08 ordinal: 0x89
  ULONG DpcTime;                                 // offset: 0x5b0c ordinal: 0x8a
  ULONG InterruptTime;                           // offset: 0x5b10 ordinal: 0x8b
  ULONG AdjustDpcThreshold;                      // offset: 0x5b14 ordinal: 0x8c
  UCHAR DebuggerSavedIRQL;                       // offset: 0x5b18 ordinal: 0x8d
  UCHAR GroupSchedulingOverQuota;                // offset: 0x5b19 ordinal: 0x8e
  UCHAR DeepSleep;                               // offset: 0x5b1a ordinal: 0x8f
  UCHAR PrcbPad80[5];                            // offset: 0x5b1b ordinal: 0x90
  ULONG DpcTimeCount;                            // offset: 0x5b20 ordinal: 0x91
  ULONG DpcTimeLimit;                            // offset: 0x5b24 ordinal: 0x92
  ULONG PeriodicCount;                           // offset: 0x5b28 ordinal: 0x93
  ULONG PeriodicBias;                            // offset: 0x5b2c ordinal: 0x94
  ULONG AvailableTime;                           // offset: 0x5b30 ordinal: 0x95
  ULONG KeExceptionDispatchCount;                // offset: 0x5b34 ordinal: 0x96
  ULONGLONG StartCycles;                         // offset: 0x5b38 ordinal: 0x97
  ULONGLONG TaggedCyclesStart;                   // offset: 0x5b40 ordinal: 0x98
  ULONGLONG TaggedCycles[2];                     // offset: 0x5b48 ordinal: 0x99
  ULONGLONG GenerationTarget;                    // offset: 0x5b58 ordinal: 0x9a
  ULONGLONG AffinitizedCycles;                   // offset: 0x5b60 ordinal: 0x9b
  ULONG PrcbPad81[29];                           // offset: 0x5b68 ordinal: 0x9c
  LONG MmSpinLockOrdering;                       // offset: 0x5bdc ordinal: 0x9d
  ULONG PageColor;                               // offset: 0x5be0 ordinal: 0x9e
  ULONG NodeColor;                               // offset: 0x5be4 ordinal: 0x9f
  ULONG NodeShiftedColor;                        // offset: 0x5be8 ordinal: 0xa0
  ULONG SecondaryColorMask;                      // offset: 0x5bec ordinal: 0xa1
  ULONG PrcbPad83;                               // offset: 0x5bf0 ordinal: 0xa2
  ULONGLONG CycleTime;                           // offset: 0x5bf8 ordinal: 0xa3
  ULONGLONG Cycles[4][2];                        // offset: 0x5c00 ordinal: 0xa4
  ULONG PrcbPad84[16];                           // offset: 0x5c40 ordinal: 0xa5
  ULONG CcFastMdlReadNoWait;                     // offset: 0x5c80 ordinal: 0xa6
  ULONG CcFastMdlReadWait;                       // offset: 0x5c84 ordinal: 0xa7
  ULONG CcFastMdlReadNotPossible;                // offset: 0x5c88 ordinal: 0xa8
  ULONG CcMapDataNoWait;                         // offset: 0x5c8c ordinal: 0xa9
  ULONG CcMapDataWait;                           // offset: 0x5c90 ordinal: 0xaa
  ULONG CcPinMappedDataCount;                    // offset: 0x5c94 ordinal: 0xab
  ULONG CcPinReadNoWait;                         // offset: 0x5c98 ordinal: 0xac
  ULONG CcPinReadWait;                           // offset: 0x5c9c ordinal: 0xad
  ULONG CcMdlReadNoWait;                         // offset: 0x5ca0 ordinal: 0xae
  ULONG CcMdlReadWait;                           // offset: 0x5ca4 ordinal: 0xaf
  ULONG CcLazyWriteHotSpots;                     // offset: 0x5ca8 ordinal: 0xb0
  ULONG CcLazyWriteIos;                          // offset: 0x5cac ordinal: 0xb1
  ULONG CcLazyWritePages;                        // offset: 0x5cb0 ordinal: 0xb2
  ULONG CcDataFlushes;                           // offset: 0x5cb4 ordinal: 0xb3
  ULONG CcDataPages;                             // offset: 0x5cb8 ordinal: 0xb4
  ULONG CcLostDelayedWrites;                     // offset: 0x5cbc ordinal: 0xb5
  ULONG CcFastReadResourceMiss;                  // offset: 0x5cc0 ordinal: 0xb6
  ULONG CcCopyReadWaitMiss;                      // offset: 0x5cc4 ordinal: 0xb7
  ULONG CcFastMdlReadResourceMiss;               // offset: 0x5cc8 ordinal: 0xb8
  ULONG CcMapDataNoWaitMiss;                     // offset: 0x5ccc ordinal: 0xb9
  ULONG CcMapDataWaitMiss;                       // offset: 0x5cd0 ordinal: 0xba
  ULONG CcPinReadNoWaitMiss;                     // offset: 0x5cd4 ordinal: 0xbb
  ULONG CcPinReadWaitMiss;                       // offset: 0x5cd8 ordinal: 0xbc
  ULONG CcMdlReadNoWaitMiss;                     // offset: 0x5cdc ordinal: 0xbd
  ULONG CcMdlReadWaitMiss;                       // offset: 0x5ce0 ordinal: 0xbe
  ULONG CcReadAheadIos;                          // offset: 0x5ce4 ordinal: 0xbf
  LONG MmCacheTransitionCount;                   // offset: 0x5ce8 ordinal: 0xc0
  LONG MmCacheReadCount;                         // offset: 0x5cec ordinal: 0xc1
  LONG MmCacheIoCount;                           // offset: 0x5cf0 ordinal: 0xc2
  ULONG PrcbPad91[3];                            // offset: 0x5cf4 ordinal: 0xc3
  struct _PROCESSOR_POWER_STATE PowerState;      // offset: 0x5d00 ordinal: 0xc4
  struct _LIST_ENTRY ScbList;                    // offset: 0x5ed0 ordinal: 0xc5
  ULONG PrcbPad92[7];                            // offset: 0x5ee0 ordinal: 0xc6
  ULONG KeAlignmentFixupCount;                   // offset: 0x5efc ordinal: 0xc7
  struct _KDPC DpcWatchdogDpc;                   // offset: 0x5f00 ordinal: 0xc8
  struct _KTIMER DpcWatchdogTimer;               // offset: 0x5f40 ordinal: 0xc9
  struct _CACHE_DESCRIPTOR Cache[5];             // offset: 0x5f80 ordinal: 0xca
  ULONG CacheCount;                              // offset: 0x5fbc ordinal: 0xcb
  ULONG CachedCommit;                            // offset: 0x5fc0 ordinal: 0xcc
  ULONG CachedResidentAvailable;                 // offset: 0x5fc4 ordinal: 0xcd
  VOID *HyperPte;                                // offset: 0x5fc8 ordinal: 0xce
  VOID *WheaInfo;                                // offset: 0x5fd0 ordinal: 0xcf
  VOID *EtwSupport;                              // offset: 0x5fd8 ordinal: 0xd0
  union _SLIST_HEADER InterruptObjectPool;       // offset: 0x5fe0 ordinal: 0xd1
  union _SLIST_HEADER HypercallPageList;         // offset: 0x5ff0 ordinal: 0xd2
  VOID *HypercallCachedPages;                    // offset: 0x6000 ordinal: 0xd3
  VOID *VirtualApicAssist;                       // offset: 0x6008 ordinal: 0xd4
  ULONGLONG *StatisticsPage;                     // offset: 0x6010 ordinal: 0xd5
  struct _KAFFINITY_EX PackageProcessorSet;      // offset: 0x6018 ordinal: 0xd6
  ULONGLONG SharedReadyQueueMask;                // offset: 0x60c0 ordinal: 0xd7
  struct _KSHARED_READY_QUEUE *SharedReadyQueue; // offset: 0x60c8 ordinal: 0xd8
  ULONG SharedQueueScanOwner;                    // offset: 0x60d0 ordinal: 0xd9
  ULONG ScanSiblingIndex;                        // offset: 0x60d4 ordinal: 0xda
  ULONGLONG CoreProcessorSet;                    // offset: 0x60d8 ordinal: 0xdb
  ULONGLONG ScanSiblingMask;                     // offset: 0x60e0 ordinal: 0xdc
  ULONGLONG LLCMask;                             // offset: 0x60e8 ordinal: 0xdd
  ULONGLONG CacheProcessorMask[5];               // offset: 0x60f0 ordinal: 0xde
  struct _PROCESSOR_PROFILE_CONTROL_AREA
      *ProcessorProfileControlArea;            // offset: 0x6118 ordinal: 0xdf
  VOID *ProfileEventIndexAddress;              // offset: 0x6120 ordinal: 0xe0
  ULONGLONG PrcbPad94[11];                     // offset: 0x6128 ordinal: 0xe1
  struct _SYNCH_COUNTERS SynchCounters;        // offset: 0x6180 ordinal: 0xe2
  ULONGLONG PteBitCache;                       // offset: 0x6238 ordinal: 0xe3
  ULONG PteBitOffset;                          // offset: 0x6240 ordinal: 0xe4
  struct _FILESYSTEM_DISK_COUNTERS FsCounters; // offset: 0x6248 ordinal: 0xe5
  UCHAR VendorString[13];                      // offset: 0x6258 ordinal: 0xe6
  UCHAR PrcbPad100[3];                         // offset: 0x6265 ordinal: 0xe7
  ULONGLONG FeatureBits;                       // offset: 0x6268 ordinal: 0xe8
  ULONG PrcbPad110;                            // offset: 0x6270 ordinal: 0xe9
  union _LARGE_INTEGER UpdateSignature;        // offset: 0x6278 ordinal: 0xea
  struct _CONTEXT *Context;                    // offset: 0x6280 ordinal: 0xeb
  ULONG ContextFlagsInit;                      // offset: 0x6288 ordinal: 0xec
  struct _XSAVE_AREA *ExtendedState;           // offset: 0x6290 ordinal: 0xed
  VOID *IsrStack;                              // offset: 0x6298 ordinal: 0xee
  struct _KENTROPY_TIMING_STATE
      EntropyTimingState;                       // offset: 0x62a0 ordinal: 0xef
  struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList; // offset: 0x63f0 ordinal: 0xf0
  struct _SINGLE_LIST_ENTRY
      AbPropagateBoostsList; // offset: 0x63f8 ordinal: 0xf1
  struct _KDPC AbDpc;        // offset: 0x6400 ordinal: 0xf2
  struct _IOP_IRP_STACK_PROFILER
      IoIrpStackProfilerCurrent; // offset: 0x6440 ordinal: 0xf3
  struct _IOP_IRP_STACK_PROFILER
      IoIrpStackProfilerPrevious; // offset: 0x6494 ordinal: 0xf4
  struct _KSHARED_READY_QUEUE
      LocalSharedReadyQueue; // offset: 0x6500 ordinal: 0xf5
  struct _KTIMER_EXPIRATION_TRACE
      TimerExpirationTrace[16];              // offset: 0x6760 ordinal: 0xf6
  ULONG TimerExpirationTraceCount;           // offset: 0x6860 ordinal: 0xf7
  VOID *ExSaPageArray;                       // offset: 0x6868 ordinal: 0xf8
  struct _REQUEST_MAILBOX *Mailbox;          // offset: 0x6880 ordinal: 0xf9
  struct _REQUEST_MAILBOX RequestMailbox[1]; // offset: 0x68c0 ordinal: 0xfa
} _KPRCB;

// 0x5d8 bytes (sizeof)
typedef struct _KTHREAD {
  struct _DISPATCHER_HEADER Header;           // offset: 0x0 ordinal: 0x0
  VOID *SListFaultAddress;                    // offset: 0x18 ordinal: 0x1
  ULONGLONG QuantumTarget;                    // offset: 0x20 ordinal: 0x2
  VOID *InitialStack;                         // offset: 0x28 ordinal: 0x3
  VOID *StackLimit;                           // offset: 0x30 ordinal: 0x4
  VOID *StackBase;                            // offset: 0x38 ordinal: 0x5
  ULONGLONG ThreadLock;                       // offset: 0x40 ordinal: 0x6
  ULONGLONG CycleTime;                        // offset: 0x48 ordinal: 0x7
  ULONG CurrentRunTime;                       // offset: 0x50 ordinal: 0x8
  ULONG ExpectedRunTime;                      // offset: 0x54 ordinal: 0x9
  VOID *KernelStack;                          // offset: 0x58 ordinal: 0xa
  struct _XSAVE_FORMAT *StateSaveArea;        // offset: 0x60 ordinal: 0xb
  struct _KSCHEDULING_GROUP *SchedulingGroup; // offset: 0x68 ordinal: 0xc
  union _KWAIT_STATUS_REGISTER WaitRegister;  // offset: 0x70 ordinal: 0xd
  UCHAR Running;                              // offset: 0x71 ordinal: 0xe
  UCHAR Alerted[2];                           // offset: 0x72 ordinal: 0xf
  ULONG AutoBoostActive : 1;                  // offset: 0x74 ordinal: 0x10
  ULONG ReadyTransition : 1;                  // offset: 0x74 ordinal: 0x11
  ULONG WaitNext : 1;                         // offset: 0x74 ordinal: 0x12
  ULONG SystemAffinityActive : 1;             // offset: 0x74 ordinal: 0x13
  ULONG Alertable : 1;                        // offset: 0x74 ordinal: 0x14
  ULONG UserStackWalkActive : 1;              // offset: 0x74 ordinal: 0x15
  ULONG ApcInterruptRequest : 1;              // offset: 0x74 ordinal: 0x16
  ULONG QuantumEndMigrate : 1;                // offset: 0x74 ordinal: 0x17
  ULONG UmsDirectedSwitchEnable : 1;          // offset: 0x74 ordinal: 0x18
  ULONG TimerActive : 1;                      // offset: 0x74 ordinal: 0x19
  ULONG SystemThread : 1;                     // offset: 0x74 ordinal: 0x1a
  ULONG ProcessDetachActive : 1;              // offset: 0x74 ordinal: 0x1b
  ULONG CalloutActive : 1;                    // offset: 0x74 ordinal: 0x1c
  ULONG ScbReadyQueue : 1;                    // offset: 0x74 ordinal: 0x1d
  ULONG ApcQueueable : 1;                     // offset: 0x74 ordinal: 0x1e
  ULONG ReservedStackInUse : 1;               // offset: 0x74 ordinal: 0x1f
  ULONG UmsPerformingSyscall : 1;             // offset: 0x74 ordinal: 0x20
  ULONG TimerSuspended : 1;                   // offset: 0x74 ordinal: 0x21
  ULONG SuspendedWaitMode : 1;                // offset: 0x74 ordinal: 0x22
  ULONG SuspendSchedulerApcWait : 1;          // offset: 0x74 ordinal: 0x23
  ULONG Reserved : 12;                        // offset: 0x74 ordinal: 0x24
  LONG MiscFlags;                             // offset: 0x74 ordinal: 0x25
  ULONG AutoAlignment : 1;                    // offset: 0x78 ordinal: 0x26
  ULONG DisableBoost : 1;                     // offset: 0x78 ordinal: 0x27
  ULONG ThreadFlagsSpare0 : 1;                // offset: 0x78 ordinal: 0x28
  ULONG AlertedByThreadId : 1;                // offset: 0x78 ordinal: 0x29
  ULONG QuantumDonation : 1;                  // offset: 0x78 ordinal: 0x2a
  ULONG EnableStackSwap : 1;                  // offset: 0x78 ordinal: 0x2b
  ULONG GuiThread : 1;                        // offset: 0x78 ordinal: 0x2c
  ULONG DisableQuantum : 1;                   // offset: 0x78 ordinal: 0x2d
  ULONG ChargeOnlySchedulingGroup : 1;        // offset: 0x78 ordinal: 0x2e
  ULONG DeferPreemption : 1;                  // offset: 0x78 ordinal: 0x2f
  ULONG QueueDeferPreemption : 1;             // offset: 0x78 ordinal: 0x30
  ULONG ForceDeferSchedule : 1;               // offset: 0x78 ordinal: 0x31
  ULONG SharedReadyQueueAffinity : 1;         // offset: 0x78 ordinal: 0x32
  ULONG FreezeCount : 1;                      // offset: 0x78 ordinal: 0x33
  ULONG TerminationApcRequest : 1;            // offset: 0x78 ordinal: 0x34
  ULONG AutoBoostEntriesExhausted : 1;        // offset: 0x78 ordinal: 0x35
  ULONG KernelStackResident : 1;              // offset: 0x78 ordinal: 0x36
  ULONG CommitFailTerminateRequest : 1;       // offset: 0x78 ordinal: 0x37
  ULONG ProcessStackCountDecremented : 1;     // offset: 0x78 ordinal: 0x38
  ULONG ThreadFlagsSpare : 5;                 // offset: 0x78 ordinal: 0x39
  ULONG EtwStackTraceApcInserted : 8;         // offset: 0x78 ordinal: 0x3a
  LONG ThreadFlags;                           // offset: 0x78 ordinal: 0x3b
  UCHAR Tag;                                  // offset: 0x7c ordinal: 0x3c
  UCHAR SystemHeteroCpuPolicy;                // offset: 0x7d ordinal: 0x3d
  UCHAR UserHeteroCpuPolicy : 7;              // offset: 0x7e ordinal: 0x3e
  UCHAR ExplicitSystemHeteroCpuPolicy : 1;    // offset: 0x7e ordinal: 0x3f
  UCHAR Spare0;                               // offset: 0x7f ordinal: 0x40
  ULONG SystemCallNumber;                     // offset: 0x80 ordinal: 0x41
  ULONG Spare10;                              // offset: 0x84 ordinal: 0x42
  VOID *FirstArgument;                        // offset: 0x88 ordinal: 0x43
  struct _KTRAP_FRAME *TrapFrame;             // offset: 0x90 ordinal: 0x44
  union {
    struct _KAPC_STATE ApcState; // offset: 0x98 ordinal: 0x45
    UCHAR ApcStateFill[43];      // offset: 0x98 ordinal: 0x46
  };
  CHAR Priority;                      // offset: 0xc3 ordinal: 0x47
  ULONG UserIdealProcessor;           // offset: 0xc4 ordinal: 0x48
  LONGLONG WaitStatus;                // offset: 0xc8 ordinal: 0x49
  struct _KWAIT_BLOCK *WaitBlockList; // offset: 0xd0 ordinal: 0x4a
  union {
    struct _LIST_ENTRY WaitListEntry;        // offset: 0xd8 ordinal: 0x4b
    struct _SINGLE_LIST_ENTRY SwapListEntry; // offset: 0xd8 ordinal: 0x4c
  };
  struct _DISPATCHER_HEADER *Queue; // offset: 0xe8 ordinal: 0x4d
  VOID *Teb;                        // offset: 0xf0 ordinal: 0x4e
  ULONGLONG RelativeTimerBias;      // offset: 0xf8 ordinal: 0x4f
  struct _KTIMER Timer;             // offset: 0x100 ordinal: 0x50
  union {
    struct _KWAIT_BLOCK WaitBlock[4]; // offset: 0x140 ordinal: 0x51
    UCHAR WaitBlockFill4[20];         // offset: 0x140 ordinal: 0x52
  };
  ULONG ContextSwitches;                    // offset: 0x154 ordinal: 0x53
  UCHAR WaitBlockFill5[68];                 // offset: 0x140 ordinal: 0x54
  UCHAR State;                              // offset: 0x184 ordinal: 0x55
  CHAR Spare13;                             // offset: 0x185 ordinal: 0x56
  UCHAR WaitIrql;                           // offset: 0x186 ordinal: 0x57
  CHAR WaitMode;                            // offset: 0x187 ordinal: 0x58
  UCHAR WaitBlockFill6[116];                // offset: 0x140 ordinal: 0x59
  ULONG WaitTime;                           // offset: 0x1b4 ordinal: 0x5a
  UCHAR WaitBlockFill7[164];                // offset: 0x140 ordinal: 0x5b
  SHORT KernelApcDisable;                   // offset: 0x1e4 ordinal: 0x5c
  SHORT SpecialApcDisable;                  // offset: 0x1e6 ordinal: 0x5d
  ULONG CombinedApcDisable;                 // offset: 0x1e4 ordinal: 0x5e
  UCHAR WaitBlockFill8[40];                 // offset: 0x140 ordinal: 0x5f
  struct _KTHREAD_COUNTERS *ThreadCounters; // offset: 0x168 ordinal: 0x60
  UCHAR WaitBlockFill9[88];                 // offset: 0x140 ordinal: 0x61
  struct _XSTATE_SAVE *XStateSave;          // offset: 0x198 ordinal: 0x62
  UCHAR WaitBlockFill10[136];               // offset: 0x140 ordinal: 0x63
  VOID *Win32Thread;                        // offset: 0x1c8 ordinal: 0x64
  UCHAR WaitBlockFill11[176];               // offset: 0x140 ordinal: 0x65
  struct _UMS_CONTROL_BLOCK *Ucb;           // offset: 0x1f0 ordinal: 0x66
  struct _KUMS_CONTEXT_HEADER *Uch;         // offset: 0x1f8 ordinal: 0x67
  VOID *TebMappedLowVa;                     // offset: 0x200 ordinal: 0x68
  struct _LIST_ENTRY QueueListEntry;        // offset: 0x208 ordinal: 0x69
  union {
    ULONG NextProcessor;            // offset: 0x218 ordinal: 0x6a
    ULONG NextProcessorNumber : 31; // offset: 0x218 ordinal: 0x6b
  };
  ULONG SharedReadyQueue : 1; // offset: 0x218 ordinal: 0x6c
  LONG QueuePriority;         // offset: 0x21c ordinal: 0x6d
  struct _KPROCESS *Process;  // offset: 0x220 ordinal: 0x6e
  union {
    struct _GROUP_AFFINITY UserAffinity; // offset: 0x228 ordinal: 0x6f
    UCHAR UserAffinityFill[10];          // offset: 0x228 ordinal: 0x70
  };
  CHAR PreviousMode; // offset: 0x232 ordinal: 0x71
  CHAR BasePriority; // offset: 0x233 ordinal: 0x72
  union {
    CHAR PriorityDecrement;    // offset: 0x234 ordinal: 0x73
    UCHAR ForegroundBoost : 4; // offset: 0x234 ordinal: 0x74
  };
  UCHAR UnusualBoost : 4;    // offset: 0x234 ordinal: 0x75
  UCHAR Preempted;           // offset: 0x235 ordinal: 0x76
  UCHAR AdjustReason;        // offset: 0x236 ordinal: 0x77
  CHAR AdjustIncrement;      // offset: 0x237 ordinal: 0x78
  ULONGLONG AffinityVersion; // offset: 0x238 ordinal: 0x79
  union {
    struct _GROUP_AFFINITY Affinity; // offset: 0x240 ordinal: 0x7a
    UCHAR AffinityFill[10];          // offset: 0x240 ordinal: 0x7b
  };
  UCHAR ApcStateIndex;  // offset: 0x24a ordinal: 0x7c
  UCHAR WaitBlockCount; // offset: 0x24b ordinal: 0x7d
  ULONG IdealProcessor; // offset: 0x24c ordinal: 0x7e
  ULONGLONG NpxState;   // offset: 0x250 ordinal: 0x7f
  union {
    struct _KAPC_STATE SavedApcState; // offset: 0x258 ordinal: 0x80
    UCHAR SavedApcStateFill[43];      // offset: 0x258 ordinal: 0x81
  };
  UCHAR WaitReason;       // offset: 0x283 ordinal: 0x82
  CHAR SuspendCount;      // offset: 0x284 ordinal: 0x83
  CHAR Saturation;        // offset: 0x285 ordinal: 0x84
  USHORT SListFaultCount; // offset: 0x286 ordinal: 0x85
  union {
    struct _KAPC SchedulerApc;  // offset: 0x288 ordinal: 0x86
    UCHAR SchedulerApcFill0[1]; // offset: 0x288 ordinal: 0x87
  };
  UCHAR ResourceIndex;                            // offset: 0x289 ordinal: 0x88
  UCHAR SchedulerApcFill1[3];                     // offset: 0x288 ordinal: 0x89
  UCHAR QuantumReset;                             // offset: 0x28b ordinal: 0x8a
  UCHAR SchedulerApcFill2[4];                     // offset: 0x288 ordinal: 0x8b
  ULONG KernelTime;                               // offset: 0x28c ordinal: 0x8c
  UCHAR SchedulerApcFill3[64];                    // offset: 0x288 ordinal: 0x8d
  struct _KPRCB *WaitPrcb;                        // offset: 0x2c8 ordinal: 0x8e
  UCHAR SchedulerApcFill4[72];                    // offset: 0x288 ordinal: 0x8f
  VOID *LegoData;                                 // offset: 0x2d0 ordinal: 0x90
  UCHAR SchedulerApcFill5[83];                    // offset: 0x288 ordinal: 0x91
  UCHAR CallbackNestingLevel;                     // offset: 0x2db ordinal: 0x92
  ULONG UserTime;                                 // offset: 0x2dc ordinal: 0x93
  struct _KEVENT SuspendEvent;                    // offset: 0x2e0 ordinal: 0x94
  struct _LIST_ENTRY ThreadListEntry;             // offset: 0x2f8 ordinal: 0x95
  struct _LIST_ENTRY MutantListHead;              // offset: 0x308 ordinal: 0x96
  UCHAR AbEntrySummary;                           // offset: 0x318 ordinal: 0x97
  UCHAR AbWaitEntryCount;                         // offset: 0x319 ordinal: 0x98
  USHORT Spare20;                                 // offset: 0x31a ordinal: 0x99
  ULONG SecureThreadCookie;                       // offset: 0x31c ordinal: 0x9a
  struct _KLOCK_ENTRY LockEntries[6];             // offset: 0x320 ordinal: 0x9b
  struct _SINGLE_LIST_ENTRY PropagateBoostsEntry; // offset: 0x560 ordinal: 0x9c
  struct _SINGLE_LIST_ENTRY IoSelfBoostsEntry;    // offset: 0x568 ordinal: 0x9d
  UCHAR PriorityFloorCounts[16];                  // offset: 0x570 ordinal: 0x9e
  ULONG PriorityFloorSummary;                     // offset: 0x580 ordinal: 0x9f
  LONG AbCompletedIoBoostCount;                   // offset: 0x584 ordinal: 0xa0
  SHORT KeReferenceCount;                         // offset: 0x588 ordinal: 0xa1
  UCHAR AbOrphanedEntrySummary;                   // offset: 0x58a ordinal: 0xa2
  UCHAR AbOwnedEntryCount;                        // offset: 0x58b ordinal: 0xa3
  ULONG ForegroundLossTime;                       // offset: 0x58c ordinal: 0xa4
  union {
    struct _LIST_ENTRY GlobalForegroundListEntry; // offset: 0x590 ordinal: 0xa5
    struct _SINGLE_LIST_ENTRY
        ForegroundDpcStackListEntry; // offset: 0x590 ordinal: 0xa6
  };
  ULONGLONG InGlobalForegroundList; // offset: 0x598 ordinal: 0xa7
  LONGLONG ReadOperationCount;      // offset: 0x5a0 ordinal: 0xa8
  LONGLONG WriteOperationCount;     // offset: 0x5a8 ordinal: 0xa9
  LONGLONG OtherOperationCount;     // offset: 0x5b0 ordinal: 0xaa
  LONGLONG ReadTransferCount;       // offset: 0x5b8 ordinal: 0xab
  LONGLONG WriteTransferCount;      // offset: 0x5c0 ordinal: 0xac
  LONGLONG OtherTransferCount;      // offset: 0x5c8 ordinal: 0xad
  struct _KSCB *QueuedScb;          // offset: 0x5d0 ordinal: 0xae
} _KTHREAD;

// 0x100 bytes (sizeof)
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
  ULONG Number;                          // offset: 0x60 ordinal: 0x10
  UCHAR ShareVector;                     // offset: 0x64 ordinal: 0x11
  UCHAR EmulateActiveBoth;               // offset: 0x65 ordinal: 0x12
  USHORT ActiveCount;                    // offset: 0x66 ordinal: 0x13
  LONG InternalState;                    // offset: 0x68 ordinal: 0x14
  enum _KINTERRUPT_MODE Mode;            // offset: 0x6c ordinal: 0x15
  enum _KINTERRUPT_POLARITY Polarity;    // offset: 0x70 ordinal: 0x16
  ULONG ServiceCount;                    // offset: 0x74 ordinal: 0x17
  ULONG DispatchCount;                   // offset: 0x78 ordinal: 0x18
  struct _KEVENT *PassiveEvent;          // offset: 0x80 ordinal: 0x19
  struct _KTRAP_FRAME *TrapFrame;        // offset: 0x88 ordinal: 0x1a
  VOID *DisconnectData;                  // offset: 0x90 ordinal: 0x1b
  struct _KTHREAD *ServiceThread;        // offset: 0x98 ordinal: 0x1c
  struct _INTERRUPT_CONNECTION_DATA
      *ConnectionData;             // offset: 0xa0 ordinal: 0x1d
  VOID *IntTrackEntry;             // offset: 0xa8 ordinal: 0x1e
  struct _ISRDPCSTATS IsrDpcStats; // offset: 0xb0 ordinal: 0x1f
  VOID *RedirectObject;            // offset: 0xf0 ordinal: 0x20
  UCHAR Padding[8];                // offset: 0xf8 ordinal: 0x21
} _KINTERRUPT;

typedef UCHAR (*__anon_1787)(struct _KINTERRUPT *, VOID *, ULONG);

typedef UCHAR (*__anon_1786)(struct _KINTERRUPT *, VOID *);

// 0x30 bytes (sizeof)
typedef struct _KSECONDARY_IDT_ENTRY {
  ULONGLONG SpinLock;                // offset: 0x0 ordinal: 0x0
  struct _KEVENT ConnectLock;        // offset: 0x8 ordinal: 0x1
  UCHAR LineMasked;                  // offset: 0x20 ordinal: 0x2
  struct _KINTERRUPT *InterruptList; // offset: 0x28 ordinal: 0x3
} _KSECONDARY_IDT_ENTRY;

// 0x7c0 bytes (sizeof)
typedef struct _ETHREAD {
  struct _KTHREAD Tcb;             // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER CreateTime; // offset: 0x5d8 ordinal: 0x1
  union {
    union _LARGE_INTEGER ExitTime;     // offset: 0x5e0 ordinal: 0x2
    struct _LIST_ENTRY KeyedWaitChain; // offset: 0x5e0 ordinal: 0x3
  };
  VOID *ChargeOnlySession; // offset: 0x5f0 ordinal: 0x4
  union {
    struct _LIST_ENTRY PostBlockList; // offset: 0x5f8 ordinal: 0x5
    VOID *ForwardLinkShadow;          // offset: 0x5f8 ordinal: 0x6
  };
  VOID *StartAddress; // offset: 0x600 ordinal: 0x7
  union {
    struct _TERMINATION_PORT *TerminationPort; // offset: 0x608 ordinal: 0x8
    struct _ETHREAD *ReaperLink;               // offset: 0x608 ordinal: 0x9
    VOID *KeyedWaitValue;                      // offset: 0x608 ordinal: 0xa
  };
  ULONGLONG ActiveTimerListLock;          // offset: 0x610 ordinal: 0xb
  struct _LIST_ENTRY ActiveTimerListHead; // offset: 0x618 ordinal: 0xc
  struct _CLIENT_ID Cid;                  // offset: 0x628 ordinal: 0xd
  union {
    struct _KSEMAPHORE KeyedWaitSemaphore; // offset: 0x638 ordinal: 0xe
    struct _KSEMAPHORE AlpcWaitSemaphore;  // offset: 0x638 ordinal: 0xf
  };
  union _PS_CLIENT_SECURITY_CONTEXT
      ClientSecurity;                    // offset: 0x658 ordinal: 0x10
  struct _LIST_ENTRY IrpList;            // offset: 0x660 ordinal: 0x11
  ULONGLONG TopLevelIrp;                 // offset: 0x670 ordinal: 0x12
  struct _DEVICE_OBJECT *DeviceToVerify; // offset: 0x678 ordinal: 0x13
  VOID *Win32StartAddress;               // offset: 0x680 ordinal: 0x14
  VOID *LegacyPowerObject;               // offset: 0x688 ordinal: 0x15
  struct _LIST_ENTRY ThreadListEntry;    // offset: 0x690 ordinal: 0x16
  struct _EX_RUNDOWN_REF RundownProtect; // offset: 0x6a0 ordinal: 0x17
  struct _EX_PUSH_LOCK ThreadLock;       // offset: 0x6a8 ordinal: 0x18
  ULONG ReadClusterSize;                 // offset: 0x6b0 ordinal: 0x19
  LONG MmLockOrdering;                   // offset: 0x6b4 ordinal: 0x1a
  LONG CmLockOrdering;                   // offset: 0x6b8 ordinal: 0x1b
  union {
    ULONG CrossThreadFlags; // offset: 0x6bc ordinal: 0x1c
    ULONG Terminated : 1;   // offset: 0x6bc ordinal: 0x1d
  };
  ULONG ThreadInserted : 1;            // offset: 0x6bc ordinal: 0x1e
  ULONG HideFromDebugger : 1;          // offset: 0x6bc ordinal: 0x1f
  ULONG ActiveImpersonationInfo : 1;   // offset: 0x6bc ordinal: 0x20
  ULONG HardErrorsAreDisabled : 1;     // offset: 0x6bc ordinal: 0x21
  ULONG BreakOnTermination : 1;        // offset: 0x6bc ordinal: 0x22
  ULONG SkipCreationMsg : 1;           // offset: 0x6bc ordinal: 0x23
  ULONG SkipTerminationMsg : 1;        // offset: 0x6bc ordinal: 0x24
  ULONG CopyTokenOnOpen : 1;           // offset: 0x6bc ordinal: 0x25
  ULONG ThreadIoPriority : 3;          // offset: 0x6bc ordinal: 0x26
  ULONG ThreadPagePriority : 3;        // offset: 0x6bc ordinal: 0x27
  ULONG RundownFail : 1;               // offset: 0x6bc ordinal: 0x28
  ULONG UmsForceQueueTermination : 1;  // offset: 0x6bc ordinal: 0x29
  ULONG IndirectCpuSets : 1;           // offset: 0x6bc ordinal: 0x2a
  ULONG ReservedCrossThreadFlags : 14; // offset: 0x6bc ordinal: 0x2b
  union {
    ULONG SameThreadPassiveFlags; // offset: 0x6c0 ordinal: 0x2c
    ULONG ActiveExWorker : 1;     // offset: 0x6c0 ordinal: 0x2d
  };
  ULONG MemoryMaker : 1;                     // offset: 0x6c0 ordinal: 0x2e
  ULONG ClonedThread : 1;                    // offset: 0x6c0 ordinal: 0x2f
  ULONG KeyedEventInUse : 1;                 // offset: 0x6c0 ordinal: 0x30
  ULONG SelfTerminate : 1;                   // offset: 0x6c0 ordinal: 0x31
  ULONG RespectIoPriority : 1;               // offset: 0x6c0 ordinal: 0x32
  ULONG ReservedSameThreadPassiveFlags : 26; // offset: 0x6c0 ordinal: 0x33
  union {
    ULONG SameThreadApcFlags;                   // offset: 0x6c4 ordinal: 0x34
    UCHAR OwnsProcessAddressSpaceExclusive : 1; // offset: 0x6c4 ordinal: 0x35
  };
  UCHAR OwnsProcessAddressSpaceShared : 1; // offset: 0x6c4 ordinal: 0x36
  UCHAR HardFaultBehavior : 1;             // offset: 0x6c4 ordinal: 0x37
  UCHAR StartAddressInvalid : 1;           // offset: 0x6c4 ordinal: 0x38
  UCHAR EtwCalloutActive : 1;              // offset: 0x6c4 ordinal: 0x39
  UCHAR SuppressSymbolLoad : 1;            // offset: 0x6c4 ordinal: 0x3a
  UCHAR Prefetching : 1;                   // offset: 0x6c4 ordinal: 0x3b
  UCHAR OwnsVadExclusive : 1;              // offset: 0x6c4 ordinal: 0x3c
  UCHAR SystemPagePriorityActive : 1;      // offset: 0x6c5 ordinal: 0x3d
  UCHAR SystemPagePriority : 3;            // offset: 0x6c5 ordinal: 0x3e
  UCHAR CacheManagerActive;                // offset: 0x6c8 ordinal: 0x3f
  UCHAR DisablePageFaultClustering;        // offset: 0x6c9 ordinal: 0x40
  UCHAR ActiveFaultCount;                  // offset: 0x6ca ordinal: 0x41
  UCHAR LockOrderState;                    // offset: 0x6cb ordinal: 0x42
  ULONGLONG AlpcMessageId;                 // offset: 0x6d0 ordinal: 0x43
  union {
    VOID *AlpcMessage;             // offset: 0x6d8 ordinal: 0x44
    ULONG AlpcReceiveAttributeSet; // offset: 0x6d8 ordinal: 0x45
  };
  LONG ExitStatus;                              // offset: 0x6e0 ordinal: 0x46
  struct _LIST_ENTRY AlpcWaitListEntry;         // offset: 0x6e8 ordinal: 0x47
  ULONG CacheManagerCount;                      // offset: 0x6f8 ordinal: 0x48
  ULONG IoBoostCount;                           // offset: 0x6fc ordinal: 0x49
  struct _LIST_ENTRY BoostList;                 // offset: 0x700 ordinal: 0x4a
  struct _LIST_ENTRY DeboostList;               // offset: 0x710 ordinal: 0x4b
  ULONGLONG BoostListLock;                      // offset: 0x720 ordinal: 0x4c
  ULONGLONG IrpListLock;                        // offset: 0x728 ordinal: 0x4d
  VOID *ReservedForSynchTracking;               // offset: 0x730 ordinal: 0x4e
  struct _SINGLE_LIST_ENTRY CmCallbackListHead; // offset: 0x738 ordinal: 0x4f
  struct _GUID *ActivityId;                     // offset: 0x740 ordinal: 0x50
  struct _SINGLE_LIST_ENTRY
      SeLearningModeListHead;                 // offset: 0x748 ordinal: 0x51
  VOID *VerifierContext;                      // offset: 0x750 ordinal: 0x52
  ULONG KernelStackReference;                 // offset: 0x758 ordinal: 0x53
  VOID *AdjustedClientToken;                  // offset: 0x760 ordinal: 0x54
  VOID *WorkingOnBehalfClient;                // offset: 0x768 ordinal: 0x55
  struct _PS_PROPERTY_SET PropertySet;        // offset: 0x770 ordinal: 0x56
  VOID *PicoContext;                          // offset: 0x788 ordinal: 0x57
  ULONG UserFsBase;                           // offset: 0x790 ordinal: 0x58
  ULONGLONG UserGsBase;                       // offset: 0x798 ordinal: 0x59
  struct _THREAD_ENERGY_VALUES *EnergyValues; // offset: 0x7a0 ordinal: 0x5a
  ULONG CmCellReferences;                     // offset: 0x7a8 ordinal: 0x5b
  union {
    ULONGLONG SelectedCpuSets;          // offset: 0x7b0 ordinal: 0x5c
    ULONGLONG *SelectedCpuSetsIndirect; // offset: 0x7b0 ordinal: 0x5d
  };
  struct _ESILO *Silo; // offset: 0x7b8 ordinal: 0x5e
} _ETHREAD;

// 0x58 bytes (sizeof)
typedef struct _PROC_PERF_CONSTRAINT {
  struct _KPRCB *Prcb;            // offset: 0x0 ordinal: 0x0
  ULONGLONG PerfContext;          // offset: 0x8 ordinal: 0x1
  ULONG ProcCap;                  // offset: 0x10 ordinal: 0x2
  ULONG ProcFloor;                // offset: 0x14 ordinal: 0x3
  ULONG PlatformCap;              // offset: 0x18 ordinal: 0x4
  ULONG ThermalCap;               // offset: 0x1c ordinal: 0x5
  ULONG LimitReasons;             // offset: 0x20 ordinal: 0x6
  ULONGLONG PlatformCapStartTime; // offset: 0x28 ordinal: 0x7
  ULONG TargetPercent;            // offset: 0x30 ordinal: 0x8
  ULONG SelectedPercent;          // offset: 0x34 ordinal: 0x9
  ULONG SelectedFrequency;        // offset: 0x38 ordinal: 0xa
  ULONG PreviousFrequency;        // offset: 0x3c ordinal: 0xb
  ULONG PreviousPercent;          // offset: 0x40 ordinal: 0xc
  ULONG LatestFrequencyPercent;   // offset: 0x44 ordinal: 0xd
  ULONGLONG SelectedState;        // offset: 0x48 ordinal: 0xe
  UCHAR Force;                    // offset: 0x50 ordinal: 0xf
} _PROC_PERF_CONSTRAINT;

// 0x190 bytes (sizeof)
typedef struct _PROC_PERF_DOMAIN {
  struct _LIST_ENTRY Link;                      // offset: 0x0 ordinal: 0x0
  struct _KPRCB *Master;                        // offset: 0x10 ordinal: 0x1
  struct _KAFFINITY_EX Members;                 // offset: 0x18 ordinal: 0x2
  ULONG ProcessorCount;                         // offset: 0xc0 ordinal: 0x3
  UCHAR Class;                                  // offset: 0xc4 ordinal: 0x4
  UCHAR Spare[3];                               // offset: 0xc5 ordinal: 0x5
  struct _PROC_PERF_CONSTRAINT *Processors;     // offset: 0xc8 ordinal: 0x6
  VOID (*GetFFHThrottleState)(ULONGLONG *);     // offset: 0xd0 ordinal: 0x7
  VOID (*TimeWindowHandler)(ULONGLONG, ULONG);  // offset: 0xd8 ordinal: 0x8
  VOID (*BoostPolicyHandler)(ULONGLONG, ULONG); // offset: 0xe0 ordinal: 0x9
  VOID (*BoostModeHandler)(ULONGLONG, ULONG);   // offset: 0xe8 ordinal: 0xa
  VOID(*EnergyPerfPreferenceHandler)
  (ULONGLONG, ULONG); // offset: 0xf0 ordinal: 0xb
  VOID(*AutonomousActivityWindowHandler)
  (ULONGLONG, ULONG);                              // offset: 0xf8 ordinal: 0xc
  VOID (*AutonomousModeHandler)(ULONGLONG, ULONG); // offset: 0x100 ordinal: 0xd
  VOID (*ReinitializeHandler)(ULONGLONG);          // offset: 0x108 ordinal: 0xe
  ULONG(*PerfSelectionHandler)
  (ULONGLONG, ULONG, ULONG, ULONG, ULONG, ULONG *,
   ULONGLONG *); // offset: 0x110 ordinal: 0xf
  VOID(*PerfControlHandler)
  (ULONGLONG, ULONGLONG, ULONG, ULONG, ULONG, UCHAR, UCHAR,
   UCHAR);                              // offset: 0x118 ordinal: 0x10
  ULONG MaxFrequency;                   // offset: 0x120 ordinal: 0x11
  ULONG NominalFrequency;               // offset: 0x124 ordinal: 0x12
  ULONG MaxPercent;                     // offset: 0x128 ordinal: 0x13
  ULONG MinPerfPercent;                 // offset: 0x12c ordinal: 0x14
  ULONG MinThrottlePercent;             // offset: 0x130 ordinal: 0x15
  ULONGLONG MinimumRelativePerformance; // offset: 0x138 ordinal: 0x16
  ULONGLONG NominalRelativePerformance; // offset: 0x140 ordinal: 0x17
  UCHAR Coordination;                   // offset: 0x148 ordinal: 0x18
  UCHAR HardPlatformCap;                // offset: 0x149 ordinal: 0x19
  UCHAR AffinitizeControl;              // offset: 0x14a ordinal: 0x1a
  UCHAR EfficientThrottle;              // offset: 0x14b ordinal: 0x1b
  UCHAR AutonomousMode;                 // offset: 0x14c ordinal: 0x1c
  ULONG SelectedPercent;                // offset: 0x150 ordinal: 0x1d
  ULONG SelectedFrequency;              // offset: 0x154 ordinal: 0x1e
  ULONG DesiredPercent;                 // offset: 0x158 ordinal: 0x1f
  ULONG MaxPolicyPercent;               // offset: 0x15c ordinal: 0x20
  ULONG MinPolicyPercent;               // offset: 0x160 ordinal: 0x21
  ULONG ConstrainedMaxPercent;          // offset: 0x164 ordinal: 0x22
  ULONG ConstrainedMinPercent;          // offset: 0x168 ordinal: 0x23
  ULONG GuaranteedPercent;              // offset: 0x16c ordinal: 0x24
  ULONG TolerancePercent;               // offset: 0x170 ordinal: 0x25
  ULONGLONG SelectedState;              // offset: 0x178 ordinal: 0x26
  ULONGLONG PerfChangeTime;             // offset: 0x180 ordinal: 0x27
  ULONG PerfChangeIntervalCount;        // offset: 0x188 ordinal: 0x28
  UCHAR Force;                          // offset: 0x18c ordinal: 0x29
  UCHAR ProvideGuidance;                // offset: 0x18d ordinal: 0x2a
} _PROC_PERF_DOMAIN;

// 0x6a80 bytes (sizeof)
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

// 0x388 bytes (sizeof)
typedef struct _PEB {
  UCHAR InheritedAddressSpace;    // offset: 0x0 ordinal: 0x0
  UCHAR ReadImageFileExecOptions; // offset: 0x1 ordinal: 0x1
  UCHAR BeingDebugged;            // offset: 0x2 ordinal: 0x2
  union {
    UCHAR BitField;                // offset: 0x3 ordinal: 0x3
    UCHAR ImageUsesLargePages : 1; // offset: 0x3 ordinal: 0x4
  };
  UCHAR IsProtectedProcess : 1;           // offset: 0x3 ordinal: 0x5
  UCHAR IsImageDynamicallyRelocated : 1;  // offset: 0x3 ordinal: 0x6
  UCHAR SkipPatchingUser32Forwarders : 1; // offset: 0x3 ordinal: 0x7
  UCHAR IsPackagedProcess : 1;            // offset: 0x3 ordinal: 0x8
  UCHAR IsAppContainer : 1;               // offset: 0x3 ordinal: 0x9
  UCHAR IsProtectedProcessLight : 1;      // offset: 0x3 ordinal: 0xa
  UCHAR SpareBits : 1;                    // offset: 0x3 ordinal: 0xb
  UCHAR Padding0[4];                      // offset: 0x4 ordinal: 0xc
  VOID *Mutant;                           // offset: 0x8 ordinal: 0xd
  VOID *ImageBaseAddress;                 // offset: 0x10 ordinal: 0xe
  struct _PEB_LDR_DATA *Ldr;              // offset: 0x18 ordinal: 0xf
  struct _RTL_USER_PROCESS_PARAMETERS
      *ProcessParameters;                    // offset: 0x20 ordinal: 0x10
  VOID *SubSystemData;                       // offset: 0x28 ordinal: 0x11
  VOID *ProcessHeap;                         // offset: 0x30 ordinal: 0x12
  struct _RTL_CRITICAL_SECTION *FastPebLock; // offset: 0x38 ordinal: 0x13
  VOID *AtlThunkSListPtr;                    // offset: 0x40 ordinal: 0x14
  VOID *IFEOKey;                             // offset: 0x48 ordinal: 0x15
  union {
    ULONG CrossProcessFlags; // offset: 0x50 ordinal: 0x16
    ULONG ProcessInJob : 1;  // offset: 0x50 ordinal: 0x17
  };
  ULONG ProcessInitializing : 1; // offset: 0x50 ordinal: 0x18
  ULONG ProcessUsingVEH : 1;     // offset: 0x50 ordinal: 0x19
  ULONG ProcessUsingVCH : 1;     // offset: 0x50 ordinal: 0x1a
  ULONG ProcessUsingFTH : 1;     // offset: 0x50 ordinal: 0x1b
  ULONG ReservedBits0 : 27;      // offset: 0x50 ordinal: 0x1c
  UCHAR Padding1[4];             // offset: 0x54 ordinal: 0x1d
  union {
    VOID *KernelCallbackTable; // offset: 0x58 ordinal: 0x1e
    VOID *UserSharedInfoPtr;   // offset: 0x58 ordinal: 0x1f
  };
  ULONG SystemReserved[1];                     // offset: 0x60 ordinal: 0x20
  ULONG AtlThunkSListPtr32;                    // offset: 0x64 ordinal: 0x21
  VOID *ApiSetMap;                             // offset: 0x68 ordinal: 0x22
  ULONG TlsExpansionCounter;                   // offset: 0x70 ordinal: 0x23
  UCHAR Padding2[4];                           // offset: 0x74 ordinal: 0x24
  VOID *TlsBitmap;                             // offset: 0x78 ordinal: 0x25
  ULONG TlsBitmapBits[2];                      // offset: 0x80 ordinal: 0x26
  VOID *ReadOnlySharedMemoryBase;              // offset: 0x88 ordinal: 0x27
  VOID *SparePvoid0;                           // offset: 0x90 ordinal: 0x28
  VOID **ReadOnlyStaticServerData;             // offset: 0x98 ordinal: 0x29
  VOID *AnsiCodePageData;                      // offset: 0xa0 ordinal: 0x2a
  VOID *OemCodePageData;                       // offset: 0xa8 ordinal: 0x2b
  VOID *UnicodeCaseTableData;                  // offset: 0xb0 ordinal: 0x2c
  ULONG NumberOfProcessors;                    // offset: 0xb8 ordinal: 0x2d
  ULONG NtGlobalFlag;                          // offset: 0xbc ordinal: 0x2e
  union _LARGE_INTEGER CriticalSectionTimeout; // offset: 0xc0 ordinal: 0x2f
  ULONGLONG HeapSegmentReserve;                // offset: 0xc8 ordinal: 0x30
  ULONGLONG HeapSegmentCommit;                 // offset: 0xd0 ordinal: 0x31
  ULONGLONG HeapDeCommitTotalFreeThreshold;    // offset: 0xd8 ordinal: 0x32
  ULONGLONG HeapDeCommitFreeBlockThreshold;    // offset: 0xe0 ordinal: 0x33
  ULONG NumberOfHeaps;                         // offset: 0xe8 ordinal: 0x34
  ULONG MaximumNumberOfHeaps;                  // offset: 0xec ordinal: 0x35
  VOID **ProcessHeaps;                         // offset: 0xf0 ordinal: 0x36
  VOID *GdiSharedHandleTable;                  // offset: 0xf8 ordinal: 0x37
  VOID *ProcessStarterHelper;                  // offset: 0x100 ordinal: 0x38
  ULONG GdiDCAttributeList;                    // offset: 0x108 ordinal: 0x39
  UCHAR Padding3[4];                           // offset: 0x10c ordinal: 0x3a
  struct _RTL_CRITICAL_SECTION *LoaderLock;    // offset: 0x110 ordinal: 0x3b
  ULONG OSMajorVersion;                        // offset: 0x118 ordinal: 0x3c
  ULONG OSMinorVersion;                        // offset: 0x11c ordinal: 0x3d
  USHORT OSBuildNumber;                        // offset: 0x120 ordinal: 0x3e
  USHORT OSCSDVersion;                         // offset: 0x122 ordinal: 0x3f
  ULONG OSPlatformId;                          // offset: 0x124 ordinal: 0x40
  ULONG ImageSubsystem;                        // offset: 0x128 ordinal: 0x41
  ULONG ImageSubsystemMajorVersion;            // offset: 0x12c ordinal: 0x42
  ULONG ImageSubsystemMinorVersion;            // offset: 0x130 ordinal: 0x43
  UCHAR Padding4[4];                           // offset: 0x134 ordinal: 0x44
  ULONGLONG ActiveProcessAffinityMask;         // offset: 0x138 ordinal: 0x45
  ULONG GdiHandleBuffer[60];                   // offset: 0x140 ordinal: 0x46
  VOID (*PostProcessInitRoutine)();            // offset: 0x230 ordinal: 0x47
  VOID *TlsExpansionBitmap;                    // offset: 0x238 ordinal: 0x48
  ULONG TlsExpansionBitmapBits[32];            // offset: 0x240 ordinal: 0x49
  ULONG SessionId;                             // offset: 0x2c0 ordinal: 0x4a
  UCHAR Padding5[4];                           // offset: 0x2c4 ordinal: 0x4b
  union _ULARGE_INTEGER AppCompatFlags;        // offset: 0x2c8 ordinal: 0x4c
  union _ULARGE_INTEGER AppCompatFlagsUser;    // offset: 0x2d0 ordinal: 0x4d
  VOID *pShimData;                             // offset: 0x2d8 ordinal: 0x4e
  VOID *AppCompatInfo;                         // offset: 0x2e0 ordinal: 0x4f
  struct _UNICODE_STRING CSDVersion;           // offset: 0x2e8 ordinal: 0x50
  struct _ACTIVATION_CONTEXT_DATA
      *ActivationContextData; // offset: 0x2f8 ordinal: 0x51
  struct _ASSEMBLY_STORAGE_MAP
      *ProcessAssemblyStorageMap; // offset: 0x300 ordinal: 0x52
  struct _ACTIVATION_CONTEXT_DATA
      *SystemDefaultActivationContextData; // offset: 0x308 ordinal: 0x53
  struct _ASSEMBLY_STORAGE_MAP
      *SystemAssemblyStorageMap;          // offset: 0x310 ordinal: 0x54
  ULONGLONG MinimumStackCommit;           // offset: 0x318 ordinal: 0x55
  struct _FLS_CALLBACK_INFO *FlsCallback; // offset: 0x320 ordinal: 0x56
  struct _LIST_ENTRY FlsListHead;         // offset: 0x328 ordinal: 0x57
  VOID *FlsBitmap;                        // offset: 0x338 ordinal: 0x58
  ULONG FlsBitmapBits[4];                 // offset: 0x340 ordinal: 0x59
  ULONG FlsHighIndex;                     // offset: 0x350 ordinal: 0x5a
  VOID *WerRegistrationData;              // offset: 0x358 ordinal: 0x5b
  VOID *WerShipAssertPtr;                 // offset: 0x360 ordinal: 0x5c
  VOID *pUnused;                          // offset: 0x368 ordinal: 0x5d
  VOID *pImageHeaderHash;                 // offset: 0x370 ordinal: 0x5e
  union {
    ULONG TracingFlags;           // offset: 0x378 ordinal: 0x5f
    ULONG HeapTracingEnabled : 1; // offset: 0x378 ordinal: 0x60
  };
  ULONG CritSecTracingEnabled : 1;             // offset: 0x378 ordinal: 0x61
  ULONG LibLoaderTracingEnabled : 1;           // offset: 0x378 ordinal: 0x62
  ULONG SpareTracingBits : 29;                 // offset: 0x378 ordinal: 0x63
  UCHAR Padding6[4];                           // offset: 0x37c ordinal: 0x64
  ULONGLONG CsrServerReadOnlySharedMemoryBase; // offset: 0x380 ordinal: 0x65
} _PEB;

// 0x798 bytes (sizeof)
typedef struct _EPROCESS {
  struct _KPROCESS Pcb;                  // offset: 0x0 ordinal: 0x0
  struct _EX_PUSH_LOCK ProcessLock;      // offset: 0x2d8 ordinal: 0x1
  struct _EX_RUNDOWN_REF RundownProtect; // offset: 0x2e0 ordinal: 0x2
  VOID *UniqueProcessId;                 // offset: 0x2e8 ordinal: 0x3
  struct _LIST_ENTRY ActiveProcessLinks; // offset: 0x2f0 ordinal: 0x4
  union {
    ULONG Flags2;                 // offset: 0x300 ordinal: 0x5
    ULONG JobNotReallyActive : 1; // offset: 0x300 ordinal: 0x6
  };
  ULONG AccountingFolded : 1;             // offset: 0x300 ordinal: 0x7
  ULONG NewProcessReported : 1;           // offset: 0x300 ordinal: 0x8
  ULONG ExitProcessReported : 1;          // offset: 0x300 ordinal: 0x9
  ULONG ReportCommitChanges : 1;          // offset: 0x300 ordinal: 0xa
  ULONG LastReportMemory : 1;             // offset: 0x300 ordinal: 0xb
  ULONG ForceWakeCharge : 1;              // offset: 0x300 ordinal: 0xc
  ULONG CrossSessionCreate : 1;           // offset: 0x300 ordinal: 0xd
  ULONG NeedsHandleRundown : 1;           // offset: 0x300 ordinal: 0xe
  ULONG RefTraceEnabled : 1;              // offset: 0x300 ordinal: 0xf
  ULONG DisableDynamicCode : 1;           // offset: 0x300 ordinal: 0x10
  ULONG EmptyJobEvaluated : 1;            // offset: 0x300 ordinal: 0x11
  ULONG DefaultPagePriority : 3;          // offset: 0x300 ordinal: 0x12
  ULONG PrimaryTokenFrozen : 1;           // offset: 0x300 ordinal: 0x13
  ULONG ProcessVerifierTarget : 1;        // offset: 0x300 ordinal: 0x14
  ULONG StackRandomizationDisabled : 1;   // offset: 0x300 ordinal: 0x15
  ULONG AffinityPermanent : 1;            // offset: 0x300 ordinal: 0x16
  ULONG AffinityUpdateEnable : 1;         // offset: 0x300 ordinal: 0x17
  ULONG PropagateNode : 1;                // offset: 0x300 ordinal: 0x18
  ULONG ExplicitAffinity : 1;             // offset: 0x300 ordinal: 0x19
  ULONG ProcessExecutionState : 2;        // offset: 0x300 ordinal: 0x1a
  ULONG DisallowStrippedImages : 1;       // offset: 0x300 ordinal: 0x1b
  ULONG HighEntropyASLREnabled : 1;       // offset: 0x300 ordinal: 0x1c
  ULONG ExtensionPointDisable : 1;        // offset: 0x300 ordinal: 0x1d
  ULONG ForceRelocateImages : 1;          // offset: 0x300 ordinal: 0x1e
  ULONG ProcessStateChangeRequest : 2;    // offset: 0x300 ordinal: 0x1f
  ULONG ProcessStateChangeInProgress : 1; // offset: 0x300 ordinal: 0x20
  ULONG DisallowWin32kSystemCalls : 1;    // offset: 0x300 ordinal: 0x21
  union {
    ULONG Flags;              // offset: 0x304 ordinal: 0x22
    ULONG CreateReported : 1; // offset: 0x304 ordinal: 0x23
  };
  ULONG NoDebugInherit : 1;               // offset: 0x304 ordinal: 0x24
  ULONG ProcessExiting : 1;               // offset: 0x304 ordinal: 0x25
  ULONG ProcessDelete : 1;                // offset: 0x304 ordinal: 0x26
  ULONG ControlFlowGuardEnabled : 1;      // offset: 0x304 ordinal: 0x27
  ULONG VmDeleted : 1;                    // offset: 0x304 ordinal: 0x28
  ULONG OutswapEnabled : 1;               // offset: 0x304 ordinal: 0x29
  ULONG Outswapped : 1;                   // offset: 0x304 ordinal: 0x2a
  ULONG FailFastOnCommitFail : 1;         // offset: 0x304 ordinal: 0x2b
  ULONG Wow64VaSpace4Gb : 1;              // offset: 0x304 ordinal: 0x2c
  ULONG AddressSpaceInitialized : 2;      // offset: 0x304 ordinal: 0x2d
  ULONG SetTimerResolution : 1;           // offset: 0x304 ordinal: 0x2e
  ULONG BreakOnTermination : 1;           // offset: 0x304 ordinal: 0x2f
  ULONG DeprioritizeViews : 1;            // offset: 0x304 ordinal: 0x30
  ULONG WriteWatch : 1;                   // offset: 0x304 ordinal: 0x31
  ULONG ProcessInSession : 1;             // offset: 0x304 ordinal: 0x32
  ULONG OverrideAddressSpace : 1;         // offset: 0x304 ordinal: 0x33
  ULONG HasAddressSpace : 1;              // offset: 0x304 ordinal: 0x34
  ULONG LaunchPrefetched : 1;             // offset: 0x304 ordinal: 0x35
  ULONG Background : 1;                   // offset: 0x304 ordinal: 0x36
  ULONG VmTopDown : 1;                    // offset: 0x304 ordinal: 0x37
  ULONG ImageNotifyDone : 1;              // offset: 0x304 ordinal: 0x38
  ULONG PdeUpdateNeeded : 1;              // offset: 0x304 ordinal: 0x39
  ULONG VdmAllowed : 1;                   // offset: 0x304 ordinal: 0x3a
  ULONG ProcessRundown : 1;               // offset: 0x304 ordinal: 0x3b
  ULONG ProcessInserted : 1;              // offset: 0x304 ordinal: 0x3c
  ULONG DefaultIoPriority : 3;            // offset: 0x304 ordinal: 0x3d
  ULONG ProcessSelfDelete : 1;            // offset: 0x304 ordinal: 0x3e
  ULONG SetTimerResolutionLink : 1;       // offset: 0x304 ordinal: 0x3f
  union _LARGE_INTEGER CreateTime;        // offset: 0x308 ordinal: 0x40
  ULONGLONG ProcessQuotaUsage[2];         // offset: 0x310 ordinal: 0x41
  ULONGLONG ProcessQuotaPeak[2];          // offset: 0x320 ordinal: 0x42
  ULONGLONG PeakVirtualSize;              // offset: 0x330 ordinal: 0x43
  ULONGLONG VirtualSize;                  // offset: 0x338 ordinal: 0x44
  struct _LIST_ENTRY SessionProcessLinks; // offset: 0x340 ordinal: 0x45
  union {
    VOID *ExceptionPortData;          // offset: 0x350 ordinal: 0x46
    ULONGLONG ExceptionPortValue;     // offset: 0x350 ordinal: 0x47
    ULONGLONG ExceptionPortState : 3; // offset: 0x350 ordinal: 0x48
  };
  struct _EX_FAST_REF Token;                    // offset: 0x358 ordinal: 0x49
  ULONGLONG WorkingSetPage;                     // offset: 0x360 ordinal: 0x4a
  struct _EX_PUSH_LOCK AddressCreationLock;     // offset: 0x368 ordinal: 0x4b
  struct _EX_PUSH_LOCK PageTableCommitmentLock; // offset: 0x370 ordinal: 0x4c
  struct _ETHREAD *RotateInProgress;            // offset: 0x378 ordinal: 0x4d
  struct _ETHREAD *ForkInProgress;              // offset: 0x380 ordinal: 0x4e
  struct _EJOB *CommitChargeJob;                // offset: 0x388 ordinal: 0x4f
  struct _RTL_AVL_TREE CloneRoot;               // offset: 0x390 ordinal: 0x50
  ULONGLONG NumberOfPrivatePages;               // offset: 0x398 ordinal: 0x51
  ULONGLONG NumberOfLockedPages;                // offset: 0x3a0 ordinal: 0x52
  VOID *Win32Process;                           // offset: 0x3a8 ordinal: 0x53
  struct _EJOB *Job;                            // offset: 0x3b0 ordinal: 0x54
  VOID *SectionObject;                          // offset: 0x3b8 ordinal: 0x55
  VOID *SectionBaseAddress;                     // offset: 0x3c0 ordinal: 0x56
  ULONG Cookie;                                 // offset: 0x3c8 ordinal: 0x57
  struct _PAGEFAULT_HISTORY *WorkingSetWatch;   // offset: 0x3d0 ordinal: 0x58
  VOID *Win32WindowStation;                     // offset: 0x3d8 ordinal: 0x59
  VOID *InheritedFromUniqueProcessId;           // offset: 0x3e0 ordinal: 0x5a
  VOID *LdtInformation;                         // offset: 0x3e8 ordinal: 0x5b
  ULONGLONG OwnerProcessId;                     // offset: 0x3f0 ordinal: 0x5c
  struct _PEB *Peb;                             // offset: 0x3f8 ordinal: 0x5d
  VOID *Session;                                // offset: 0x400 ordinal: 0x5e
  VOID *AweInfo;                                // offset: 0x408 ordinal: 0x5f
  struct _EPROCESS_QUOTA_BLOCK *QuotaBlock;     // offset: 0x410 ordinal: 0x60
  struct _HANDLE_TABLE *ObjectTable;            // offset: 0x418 ordinal: 0x61
  VOID *DebugPort;                              // offset: 0x420 ordinal: 0x62
  VOID *Wow64Process;                           // offset: 0x428 ordinal: 0x63
  VOID *DeviceMap;                              // offset: 0x430 ordinal: 0x64
  VOID *EtwDataSource;                          // offset: 0x438 ordinal: 0x65
  ULONGLONG PageDirectoryPte;                   // offset: 0x440 ordinal: 0x66
  UCHAR ImageFileName[15];                      // offset: 0x448 ordinal: 0x67
  UCHAR PriorityClass;                          // offset: 0x457 ordinal: 0x68
  VOID *SecurityPort;                           // offset: 0x458 ordinal: 0x69
  struct _SE_AUDIT_PROCESS_CREATION_INFO
      SeAuditProcessCreationInfo;           // offset: 0x460 ordinal: 0x6a
  struct _LIST_ENTRY JobLinks;              // offset: 0x468 ordinal: 0x6b
  VOID *HighestUserAddress;                 // offset: 0x478 ordinal: 0x6c
  struct _LIST_ENTRY ThreadListHead;        // offset: 0x480 ordinal: 0x6d
  ULONG ActiveThreads;                      // offset: 0x490 ordinal: 0x6e
  ULONG ImagePathHash;                      // offset: 0x494 ordinal: 0x6f
  ULONG DefaultHardErrorProcessing;         // offset: 0x498 ordinal: 0x70
  LONG LastThreadExitStatus;                // offset: 0x49c ordinal: 0x71
  struct _EX_FAST_REF PrefetchTrace;        // offset: 0x4a0 ordinal: 0x72
  VOID *LockedPagesList;                    // offset: 0x4a8 ordinal: 0x73
  union _LARGE_INTEGER ReadOperationCount;  // offset: 0x4b0 ordinal: 0x74
  union _LARGE_INTEGER WriteOperationCount; // offset: 0x4b8 ordinal: 0x75
  union _LARGE_INTEGER OtherOperationCount; // offset: 0x4c0 ordinal: 0x76
  union _LARGE_INTEGER ReadTransferCount;   // offset: 0x4c8 ordinal: 0x77
  union _LARGE_INTEGER WriteTransferCount;  // offset: 0x4d0 ordinal: 0x78
  union _LARGE_INTEGER OtherTransferCount;  // offset: 0x4d8 ordinal: 0x79
  ULONGLONG CommitChargeLimit;              // offset: 0x4e0 ordinal: 0x7a
  ULONGLONG CommitCharge;                   // offset: 0x4e8 ordinal: 0x7b
  ULONGLONG CommitChargePeak;               // offset: 0x4f0 ordinal: 0x7c
  struct _MMSUPPORT Vm;                     // offset: 0x4f8 ordinal: 0x7d
  struct _LIST_ENTRY MmProcessLinks;        // offset: 0x5f0 ordinal: 0x7e
  ULONG ModifiedPageCount;                  // offset: 0x600 ordinal: 0x7f
  LONG ExitStatus;                          // offset: 0x604 ordinal: 0x80
  struct _RTL_AVL_TREE VadRoot;             // offset: 0x608 ordinal: 0x81
  VOID *VadHint;                            // offset: 0x610 ordinal: 0x82
  ULONGLONG VadCount;                       // offset: 0x618 ordinal: 0x83
  ULONGLONG VadPhysicalPages;               // offset: 0x620 ordinal: 0x84
  ULONGLONG VadPhysicalPagesLimit;          // offset: 0x628 ordinal: 0x85
  struct _ALPC_PROCESS_CONTEXT AlpcContext; // offset: 0x630 ordinal: 0x86
  struct _LIST_ENTRY TimerResolutionLink;   // offset: 0x650 ordinal: 0x87
  struct _PO_DIAG_STACK_RECORD
      *TimerResolutionStackRecord; // offset: 0x660 ordinal: 0x88
  ULONG RequestedTimerResolution;  // offset: 0x668 ordinal: 0x89
  ULONG SmallestTimerResolution;   // offset: 0x66c ordinal: 0x8a
  union _LARGE_INTEGER ExitTime;   // offset: 0x670 ordinal: 0x8b
  struct _INVERTED_FUNCTION_TABLE
      *InvertedFunctionTable;                     // offset: 0x678 ordinal: 0x8c
  struct _EX_PUSH_LOCK InvertedFunctionTableLock; // offset: 0x680 ordinal: 0x8d
  ULONG ActiveThreadsHighWatermark;               // offset: 0x688 ordinal: 0x8e
  ULONG LargePrivateVadCount;                     // offset: 0x68c ordinal: 0x8f
  struct _EX_PUSH_LOCK ThreadListLock;            // offset: 0x690 ordinal: 0x90
  VOID *WnfContext;                               // offset: 0x698 ordinal: 0x91
  ULONGLONG Spare0;                               // offset: 0x6a0 ordinal: 0x92
  UCHAR SignatureLevel;                           // offset: 0x6a8 ordinal: 0x93
  UCHAR SectionSignatureLevel;                    // offset: 0x6a9 ordinal: 0x94
  struct _PS_PROTECTION Protection;               // offset: 0x6aa ordinal: 0x95
  UCHAR HangCount;                                // offset: 0x6ab ordinal: 0x96
  union {
    ULONG Flags3;      // offset: 0x6ac ordinal: 0x97
    ULONG Minimal : 1; // offset: 0x6ac ordinal: 0x98
  };
  ULONG ReplacingPageRoot : 1;                 // offset: 0x6ac ordinal: 0x99
  ULONG DisableNonSystemFonts : 1;             // offset: 0x6ac ordinal: 0x9a
  ULONG AuditNonSystemFontLoading : 1;         // offset: 0x6ac ordinal: 0x9b
  ULONG Crashed : 1;                           // offset: 0x6ac ordinal: 0x9c
  ULONG JobVadsAreTracked : 1;                 // offset: 0x6ac ordinal: 0x9d
  ULONG VadTrackingDisabled : 1;               // offset: 0x6ac ordinal: 0x9e
  ULONG AuxiliaryProcess : 1;                  // offset: 0x6ac ordinal: 0x9f
  ULONG SubsystemProcess : 1;                  // offset: 0x6ac ordinal: 0xa0
  ULONG IndirectCpuSets : 1;                   // offset: 0x6ac ordinal: 0xa1
  ULONG InPrivate : 1;                         // offset: 0x6ac ordinal: 0xa2
  LONG DeviceAsid;                             // offset: 0x6b0 ordinal: 0xa3
  VOID *SvmData;                               // offset: 0x6b8 ordinal: 0xa4
  struct _EX_PUSH_LOCK SvmProcessLock;         // offset: 0x6c0 ordinal: 0xa5
  ULONGLONG SvmLock;                           // offset: 0x6c8 ordinal: 0xa6
  struct _LIST_ENTRY SvmProcessDeviceListHead; // offset: 0x6d0 ordinal: 0xa7
  ULONGLONG LastFreezeInterruptTime;           // offset: 0x6e0 ordinal: 0xa8
  struct _PROCESS_DISK_COUNTERS *DiskCounters; // offset: 0x6e8 ordinal: 0xa9
  VOID *PicoContext;                           // offset: 0x6f0 ordinal: 0xaa
  ULONGLONG TrustletIdentity;                  // offset: 0x6f8 ordinal: 0xab
  ULONG KeepAliveCounter;                      // offset: 0x700 ordinal: 0xac
  ULONG NoWakeKeepAliveCounter;                // offset: 0x704 ordinal: 0xad
  ULONG HighPriorityFaultsAllowed;             // offset: 0x708 ordinal: 0xae
  struct _PROCESS_ENERGY_VALUES *EnergyValues; // offset: 0x710 ordinal: 0xaf
  VOID *VmContext;                             // offset: 0x718 ordinal: 0xb0
  struct _ESILO *Silo;                         // offset: 0x720 ordinal: 0xb1
  struct _LIST_ENTRY SiloEntry;                // offset: 0x728 ordinal: 0xb2
  ULONGLONG SequenceNumber;                    // offset: 0x738 ordinal: 0xb3
  ULONGLONG CreateInterruptTime;               // offset: 0x740 ordinal: 0xb4
  ULONGLONG CreateUnbiasedInterruptTime;       // offset: 0x748 ordinal: 0xb5
  ULONGLONG TotalUnbiasedFrozenTime;           // offset: 0x750 ordinal: 0xb6
  ULONGLONG LastAppStateUpdateTime;            // offset: 0x758 ordinal: 0xb7
  ULONGLONG LastAppStateUptime : 61;           // offset: 0x760 ordinal: 0xb8
  ULONGLONG LastAppState : 3;                  // offset: 0x760 ordinal: 0xb9
  ULONGLONG SharedCommitCharge;                // offset: 0x768 ordinal: 0xba
  struct _EX_PUSH_LOCK SharedCommitLock;       // offset: 0x770 ordinal: 0xbb
  struct _LIST_ENTRY SharedCommitLinks;        // offset: 0x778 ordinal: 0xbc
  ULONGLONG AllowedCpuSets;                    // offset: 0x788 ordinal: 0xbd
  ULONGLONG DefaultCpuSets;                    // offset: 0x790 ordinal: 0xbe
  ULONGLONG *AllowedCpuSetsIndirect;           // offset: 0x788 ordinal: 0xbf
  ULONGLONG *DefaultCpuSetsIndirect;           // offset: 0x790 ordinal: 0xc0
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

// 0x70 bytes (sizeof)
typedef struct _ETW_REG_ENTRY {
  struct _LIST_ENTRY RegList;         // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY GroupRegList;    // offset: 0x10 ordinal: 0x1
  struct _ETW_GUID_ENTRY *GuidEntry;  // offset: 0x20 ordinal: 0x2
  struct _ETW_GUID_ENTRY *GroupEntry; // offset: 0x28 ordinal: 0x3
  union {
    struct _ETW_REPLY_QUEUE *ReplyQueue;   // offset: 0x30 ordinal: 0x4
    struct _ETW_QUEUE_ENTRY *ReplySlot[4]; // offset: 0x30 ordinal: 0x5
    VOID *Caller;                          // offset: 0x30 ordinal: 0x6
  };
  ULONG SessionId; // offset: 0x38 ordinal: 0x7
  union {
    struct _EPROCESS *Process; // offset: 0x50 ordinal: 0x8
    VOID *CallbackContext;     // offset: 0x50 ordinal: 0x9
  };
  VOID *Callback; // offset: 0x58 ordinal: 0xa
  USHORT Index;   // offset: 0x60 ordinal: 0xb
  union {
    UCHAR Flags;                     // offset: 0x62 ordinal: 0xc
    UCHAR DbgKernelRegistration : 1; // offset: 0x62 ordinal: 0xd
  };
  UCHAR DbgUserRegistration : 1;         // offset: 0x62 ordinal: 0xe
  UCHAR DbgReplyRegistration : 1;        // offset: 0x62 ordinal: 0xf
  UCHAR DbgClassicRegistration : 1;      // offset: 0x62 ordinal: 0x10
  UCHAR DbgSessionSpaceRegistration : 1; // offset: 0x62 ordinal: 0x11
  UCHAR DbgModernRegistration : 1;       // offset: 0x62 ordinal: 0x12
  UCHAR DbgClosed : 1;                   // offset: 0x62 ordinal: 0x13
  UCHAR DbgInserted : 1;                 // offset: 0x62 ordinal: 0x14
  UCHAR EnableMask;                      // offset: 0x63 ordinal: 0x15
  UCHAR GroupEnableMask;                 // offset: 0x64 ordinal: 0x16
  UCHAR UseDescriptorType;               // offset: 0x65 ordinal: 0x17
  struct _ETW_PROVIDER_TRAITS *Traits;   // offset: 0x68 ordinal: 0x18
} _ETW_REG_ENTRY;

// 0x38 bytes (sizeof)
typedef struct _ETW_QUEUE_ENTRY {
  struct _LIST_ENTRY ListEntry;                // offset: 0x0 ordinal: 0x0
  struct _ETWP_NOTIFICATION_HEADER *DataBlock; // offset: 0x10 ordinal: 0x1
  struct _ETW_REG_ENTRY *RegEntry;             // offset: 0x18 ordinal: 0x2
  struct _ETW_REG_ENTRY *ReplyObject;          // offset: 0x20 ordinal: 0x3
  VOID *WakeReference;                         // offset: 0x28 ordinal: 0x4
  USHORT RegIndex;                             // offset: 0x30 ordinal: 0x5
  USHORT ReplyIndex;                           // offset: 0x32 ordinal: 0x6
  ULONG Flags;                                 // offset: 0x34 ordinal: 0x7
} _ETW_QUEUE_ENTRY;

// 0x28 bytes (sizeof)
typedef struct _MI_REVERSE_VIEW_MAP {
  struct _LIST_ENTRY ViewLinks; // offset: 0x0 ordinal: 0x0
  union {
    VOID *SystemCacheVa;           // offset: 0x10 ordinal: 0x1
    VOID *SessionViewVa;           // offset: 0x10 ordinal: 0x2
    struct _EPROCESS *VadsProcess; // offset: 0x10 ordinal: 0x3
    ULONGLONG Type : 2;            // offset: 0x10 ordinal: 0x4
  };
  union {
    struct _SUBSECTION *Subsection; // offset: 0x18 ordinal: 0x5
    ULONGLONG SubsectionType : 1;   // offset: 0x18 ordinal: 0x6
  };
  ULONGLONG SectionOffset; // offset: 0x20 ordinal: 0x7
} _MI_REVERSE_VIEW_MAP;

// 0xa0 bytes (sizeof)
typedef struct _NONOPAQUE_OPLOCK {
  struct _IRP *IrpExclusiveOplock;             // offset: 0x0 ordinal: 0x0
  struct _FILE_OBJECT *FileObject;             // offset: 0x8 ordinal: 0x1
  struct _EPROCESS *ExclusiveOplockOwner;      // offset: 0x10 ordinal: 0x2
  struct _ETHREAD *ExclusiveOplockOwnerThread; // offset: 0x18 ordinal: 0x3
  UCHAR WaiterPriority;                        // offset: 0x20 ordinal: 0x4
  struct _LIST_ENTRY IrpOplocksR;              // offset: 0x28 ordinal: 0x5
  struct _LIST_ENTRY IrpOplocksRH;             // offset: 0x38 ordinal: 0x6
  struct _LIST_ENTRY RHBreakQueue;             // offset: 0x48 ordinal: 0x7
  struct _LIST_ENTRY WaitingIrps;              // offset: 0x58 ordinal: 0x8
  struct _LIST_ENTRY DelayAckFileObjectQueue;  // offset: 0x68 ordinal: 0x9
  struct _LIST_ENTRY AtomicQueue;              // offset: 0x78 ordinal: 0xa
  struct _GUID *DeleterParentKey;              // offset: 0x88 ordinal: 0xb
  ULONG OplockState;                           // offset: 0x90 ordinal: 0xc
  struct _FAST_MUTEX *FastMutex;               // offset: 0x98 ordinal: 0xd
} _NONOPAQUE_OPLOCK;

// 0x48 bytes (sizeof)
typedef struct _POP_SHUTDOWN_BUG_CHECK {
  struct _ETHREAD *InitiatingThread;   // offset: 0x0 ordinal: 0x0
  struct _EPROCESS *InitiatingProcess; // offset: 0x8 ordinal: 0x1
  VOID *ThreadId;                      // offset: 0x10 ordinal: 0x2
  VOID *ProcessId;                     // offset: 0x18 ordinal: 0x3
  ULONG Code;                          // offset: 0x20 ordinal: 0x4
  ULONGLONG Parameter1;                // offset: 0x28 ordinal: 0x5
  ULONGLONG Parameter2;                // offset: 0x30 ordinal: 0x6
  ULONGLONG Parameter3;                // offset: 0x38 ordinal: 0x7
  ULONGLONG Parameter4;                // offset: 0x40 ordinal: 0x8
} _POP_SHUTDOWN_BUG_CHECK;

// 0x108 bytes (sizeof)
typedef struct _POP_POWER_ACTION {
  UCHAR Updates;                                   // offset: 0x0 ordinal: 0x0
  UCHAR State;                                     // offset: 0x1 ordinal: 0x1
  UCHAR Shutdown;                                  // offset: 0x2 ordinal: 0x2
  enum POWER_ACTION Action;                        // offset: 0x4 ordinal: 0x3
  enum _SYSTEM_POWER_STATE LightestState;          // offset: 0x8 ordinal: 0x4
  ULONG Flags;                                     // offset: 0xc ordinal: 0x5
  LONG Status;                                     // offset: 0x10 ordinal: 0x6
  enum POWER_POLICY_DEVICE_TYPE DeviceType;        // offset: 0x14 ordinal: 0x7
  ULONG DeviceTypeFlags;                           // offset: 0x18 ordinal: 0x8
  UCHAR IrpMinor;                                  // offset: 0x1c ordinal: 0x9
  UCHAR Waking;                                    // offset: 0x1d ordinal: 0xa
  enum _SYSTEM_POWER_STATE SystemState;            // offset: 0x20 ordinal: 0xb
  enum _SYSTEM_POWER_STATE NextSystemState;        // offset: 0x24 ordinal: 0xc
  enum _SYSTEM_POWER_STATE EffectiveSystemState;   // offset: 0x28 ordinal: 0xd
  enum _SYSTEM_POWER_STATE CurrentSystemState;     // offset: 0x2c ordinal: 0xe
  struct _POP_SHUTDOWN_BUG_CHECK *ShutdownBugCode; // offset: 0x30 ordinal: 0xf
  struct _POP_DEVICE_SYS_STATE *DevState;          // offset: 0x38 ordinal: 0x10
  struct _POP_HIBER_CONTEXT *HiberContext;         // offset: 0x40 ordinal: 0x11
  ULONGLONG WakeTime;                              // offset: 0x48 ordinal: 0x12
  ULONGLONG SleepTime;                             // offset: 0x50 ordinal: 0x13
  enum SYSTEM_POWER_CONDITION WakeAlarmSignaled;   // offset: 0x58 ordinal: 0x14
  struct __anon_2193 WakeAlarm[3];                 // offset: 0x60 ordinal: 0x15
  UCHAR WakeAlarmPaused;                           // offset: 0xa8 ordinal: 0x16
  ULONGLONG WakeAlarmLastTime;                     // offset: 0xb0 ordinal: 0x17
  struct SYSTEM_POWER_CAPABILITIES
      FilteredCapabilities; // offset: 0xb8 ordinal: 0x18
} _POP_POWER_ACTION;

// 0x10 bytes (sizeof)
typedef struct _POOL_HEADER {
  USHORT PreviousSize : 8; // offset: 0x0 ordinal: 0x0
  USHORT PoolIndex : 8;    // offset: 0x0 ordinal: 0x1
  USHORT BlockSize : 8;    // offset: 0x2 ordinal: 0x2
  USHORT PoolType : 8;     // offset: 0x2 ordinal: 0x3
  ULONG Ulong1;            // offset: 0x0 ordinal: 0x4
  ULONG PoolTag;           // offset: 0x4 ordinal: 0x5
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

// 0x90 bytes (sizeof)
typedef struct _LOCK_TRACKER {
  struct _RTL_BALANCED_NODE LockTrackerNode; // offset: 0x0 ordinal: 0x0
  struct _MDL *Mdl;                          // offset: 0x18 ordinal: 0x1
  VOID *StartVa;                             // offset: 0x20 ordinal: 0x2
  ULONGLONG Count;                           // offset: 0x28 ordinal: 0x3
  ULONG Offset;                              // offset: 0x30 ordinal: 0x4
  ULONG Length;                              // offset: 0x34 ordinal: 0x5
  ULONGLONG Page;                            // offset: 0x38 ordinal: 0x6
  VOID *StackTrace[8];                       // offset: 0x40 ordinal: 0x7
  ULONG Who;                                 // offset: 0x80 ordinal: 0x8
  struct _EPROCESS *Process;                 // offset: 0x88 ordinal: 0x9
} _LOCK_TRACKER;

// 0x20 bytes (sizeof)
typedef struct _DIAGNOSTIC_CONTEXT {
  enum _REQUESTER_TYPE CallerType;     // offset: 0x0 ordinal: 0x0
  struct _EPROCESS *Process;           // offset: 0x8 ordinal: 0x1
  ULONG ServiceTag;                    // offset: 0x10 ordinal: 0x2
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x8 ordinal: 0x3
  ULONGLONG ReasonSize;                // offset: 0x18 ordinal: 0x4
} _DIAGNOSTIC_CONTEXT;

// 0x138 bytes (sizeof)
typedef struct _ETIMER {
  struct _KTIMER KeTimer;                  // offset: 0x0 ordinal: 0x0
  ULONGLONG Lock;                          // offset: 0x40 ordinal: 0x1
  struct _KAPC TimerApc;                   // offset: 0x48 ordinal: 0x2
  struct _KDPC TimerDpc;                   // offset: 0xa0 ordinal: 0x3
  struct _LIST_ENTRY ActiveTimerListEntry; // offset: 0xe0 ordinal: 0x4
  ULONG Period;                            // offset: 0xf0 ordinal: 0x5
  union {
    CHAR TimerFlags;         // offset: 0xf4 ordinal: 0x6
    UCHAR ApcAssociated : 1; // offset: 0xf4 ordinal: 0x7
  };
  UCHAR FlushDpcs : 1;                      // offset: 0xf4 ordinal: 0x8
  UCHAR Paused : 1;                         // offset: 0xf4 ordinal: 0x9
  UCHAR Spare1 : 5;                         // offset: 0xf4 ordinal: 0xa
  UCHAR DueTimeType;                        // offset: 0xf5 ordinal: 0xb
  USHORT Spare2;                            // offset: 0xf6 ordinal: 0xc
  struct _DIAGNOSTIC_CONTEXT *WakeReason;   // offset: 0xf8 ordinal: 0xd
  struct _LIST_ENTRY WakeTimerListEntry;    // offset: 0x100 ordinal: 0xe
  VOID *VirtualizedTimerCookie;             // offset: 0x110 ordinal: 0xf
  struct _LIST_ENTRY VirtualizedTimerLinks; // offset: 0x118 ordinal: 0x10
  ULONGLONG DueTime;                        // offset: 0x128 ordinal: 0x11
  ULONG CoalescingWindow;                   // offset: 0x130 ordinal: 0x12
} _ETIMER;

// 0x48 bytes (sizeof)
typedef struct _RH_OP_CONTEXT {
  struct _LIST_ENTRY Links;                     // offset: 0x0 ordinal: 0x0
  struct _IRP *OplockRequestIrp;                // offset: 0x10 ordinal: 0x1
  struct _FILE_OBJECT *OplockRequestFileObject; // offset: 0x18 ordinal: 0x2
  struct _EPROCESS *OplockRequestProcess;       // offset: 0x20 ordinal: 0x3
  struct _ETHREAD *OplockOwnerThread;           // offset: 0x28 ordinal: 0x4
  ULONG Flags;                                  // offset: 0x30 ordinal: 0x5
  struct _LIST_ENTRY AtomicLinks;               // offset: 0x38 ordinal: 0x6
} _RH_OP_CONTEXT;

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

// 0x3c0 bytes (sizeof)
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
  union _CLS_LSN LastRecoveredLsn;                // offset: 0x298 ordinal: 0x13
  VOID *TmRmHandle;                               // offset: 0x2a0 ordinal: 0x14
  struct _KRESOURCEMANAGER *TmRm;                 // offset: 0x2a8 ordinal: 0x15
  struct _KEVENT LogFullNotifyEvent;              // offset: 0x2b0 ordinal: 0x16
  struct _WORK_QUEUE_ITEM CheckpointWorkItem;     // offset: 0x2c8 ordinal: 0x17
  union _CLS_LSN CheckpointTargetLsn;             // offset: 0x2e8 ordinal: 0x18
  struct _WORK_QUEUE_ITEM
      LogFullCompletedWorkItem;            // offset: 0x2f0 ordinal: 0x19
  struct _ERESOURCE LogWriteResource;      // offset: 0x310 ordinal: 0x1a
  ULONG LogFlags;                          // offset: 0x378 ordinal: 0x1b
  LONG LogFullStatus;                      // offset: 0x37c ordinal: 0x1c
  LONG RecoveryStatus;                     // offset: 0x380 ordinal: 0x1d
  union _CLS_LSN LastCheckBaseLsn;         // offset: 0x388 ordinal: 0x1e
  struct _LIST_ENTRY RestartOrderedList;   // offset: 0x390 ordinal: 0x1f
  struct _WORK_QUEUE_ITEM OfflineWorkItem; // offset: 0x3a0 ordinal: 0x20
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

// 0x10 bytes (sizeof)
typedef struct _OBJECT_HEADER_PROCESS_INFO {
  struct _EPROCESS *ExclusiveProcess; // offset: 0x0 ordinal: 0x0
  ULONGLONG Reserved;                 // offset: 0x8 ordinal: 0x1
} _OBJECT_HEADER_PROCESS_INFO;

// 0x98 bytes (sizeof)
typedef struct _ETW_REALTIME_CONSUMER {
  struct _LIST_ENTRY Links;                      // offset: 0x0 ordinal: 0x0
  VOID *ProcessHandle;                           // offset: 0x10 ordinal: 0x1
  struct _EPROCESS *ProcessObject;               // offset: 0x18 ordinal: 0x2
  VOID *NextNotDelivered;                        // offset: 0x20 ordinal: 0x3
  VOID *RealtimeConnectContext;                  // offset: 0x28 ordinal: 0x4
  struct _KEVENT *DisconnectEvent;               // offset: 0x30 ordinal: 0x5
  struct _KEVENT *DataAvailableEvent;            // offset: 0x38 ordinal: 0x6
  ULONG *UserBufferCount;                        // offset: 0x40 ordinal: 0x7
  struct _SINGLE_LIST_ENTRY *UserBufferListHead; // offset: 0x48 ordinal: 0x8
  ULONG BuffersLost;                             // offset: 0x50 ordinal: 0x9
  ULONG EmptyBuffersCount;                       // offset: 0x54 ordinal: 0xa
  USHORT LoggerId;                               // offset: 0x58 ordinal: 0xb
  union {
    UCHAR Flags;                 // offset: 0x5a ordinal: 0xc
    UCHAR ShutDownRequested : 1; // offset: 0x5a ordinal: 0xd
  };
  UCHAR NewBuffersLost : 1;                     // offset: 0x5a ordinal: 0xe
  UCHAR Disconnected : 1;                       // offset: 0x5a ordinal: 0xf
  UCHAR Notified : 1;                           // offset: 0x5a ordinal: 0x10
  UCHAR Wow : 1;                                // offset: 0x5a ordinal: 0x11
  struct _RTL_BITMAP ReservedBufferSpaceBitMap; // offset: 0x60 ordinal: 0x12
  UCHAR *ReservedBufferSpace;                   // offset: 0x70 ordinal: 0x13
  ULONG ReservedBufferSpaceSize;                // offset: 0x78 ordinal: 0x14
  ULONG UserPagesAllocated;                     // offset: 0x7c ordinal: 0x15
  ULONG UserPagesReused;                        // offset: 0x80 ordinal: 0x16
  ULONG *EventsLostCount;                       // offset: 0x88 ordinal: 0x17
  ULONG *BuffersLostCount;                      // offset: 0x90 ordinal: 0x18
} _ETW_REALTIME_CONSUMER;

// 0x398 bytes (sizeof)
typedef struct _WMI_LOGGER_CONTEXT {
  ULONG LoggerId;                         // offset: 0x0 ordinal: 0x0
  ULONG BufferSize;                       // offset: 0x4 ordinal: 0x1
  ULONG MaximumEventSize;                 // offset: 0x8 ordinal: 0x2
  ULONG LoggerMode;                       // offset: 0xc ordinal: 0x3
  LONG AcceptNewEvents;                   // offset: 0x10 ordinal: 0x4
  ULONG EventMarker[2];                   // offset: 0x14 ordinal: 0x5
  ULONG ErrorMarker;                      // offset: 0x1c ordinal: 0x6
  ULONG SizeMask;                         // offset: 0x20 ordinal: 0x7
  LONGLONG (*GetCpuClock)();              // offset: 0x28 ordinal: 0x8
  struct _ETHREAD *LoggerThread;          // offset: 0x30 ordinal: 0x9
  LONG LoggerStatus;                      // offset: 0x38 ordinal: 0xa
  ULONG FailureReason;                    // offset: 0x3c ordinal: 0xb
  struct _ETW_BUFFER_QUEUE BufferQueue;   // offset: 0x40 ordinal: 0xc
  struct _ETW_BUFFER_QUEUE OverflowQueue; // offset: 0x58 ordinal: 0xd
  struct _LIST_ENTRY GlobalList;          // offset: 0x70 ordinal: 0xe
  struct _LIST_ENTRY ProviderBinaryList;  // offset: 0x80 ordinal: 0xf
  union {
    struct _WMI_BUFFER_HEADER *BatchedBufferList; // offset: 0x90 ordinal: 0x10
    struct _EX_FAST_REF CurrentBuffer;            // offset: 0x90 ordinal: 0x11
  };
  struct _UNICODE_STRING LoggerName;     // offset: 0x98 ordinal: 0x12
  struct _UNICODE_STRING LogFileName;    // offset: 0xa8 ordinal: 0x13
  struct _UNICODE_STRING LogFilePattern; // offset: 0xb8 ordinal: 0x14
  struct _UNICODE_STRING NewLogFileName; // offset: 0xc8 ordinal: 0x15
  ULONG ClockType;                       // offset: 0xd8 ordinal: 0x16
  ULONG LastFlushedBuffer;               // offset: 0xdc ordinal: 0x17
  ULONG FlushTimer;                      // offset: 0xe0 ordinal: 0x18
  ULONG FlushThreshold;                  // offset: 0xe4 ordinal: 0x19
  union _LARGE_INTEGER ByteOffset;       // offset: 0xe8 ordinal: 0x1a
  ULONG MinimumBuffers;                  // offset: 0xf0 ordinal: 0x1b
  LONG BuffersAvailable;                 // offset: 0xf4 ordinal: 0x1c
  LONG NumberOfBuffers;                  // offset: 0xf8 ordinal: 0x1d
  ULONG MaximumBuffers;                  // offset: 0xfc ordinal: 0x1e
  ULONG EventsLost;                      // offset: 0x100 ordinal: 0x1f
  LONG PeakBuffersCount;                 // offset: 0x104 ordinal: 0x20
  ULONG BuffersWritten;                  // offset: 0x108 ordinal: 0x21
  ULONG LogBuffersLost;                  // offset: 0x10c ordinal: 0x22
  ULONG RealTimeBuffersDelivered;        // offset: 0x110 ordinal: 0x23
  ULONG RealTimeBuffersLost;             // offset: 0x114 ordinal: 0x24
  LONG *SequencePtr;                     // offset: 0x118 ordinal: 0x25
  ULONG LocalSequence;                   // offset: 0x120 ordinal: 0x26
  struct _GUID InstanceGuid;             // offset: 0x124 ordinal: 0x27
  ULONG MaximumFileSize;                 // offset: 0x134 ordinal: 0x28
  LONG FileCounter;                      // offset: 0x138 ordinal: 0x29
  enum _POOL_TYPE PoolType;              // offset: 0x13c ordinal: 0x2a
  struct _ETW_REF_CLOCK ReferenceTime;   // offset: 0x140 ordinal: 0x2b
  LONG CollectionOn;                     // offset: 0x150 ordinal: 0x2c
  ULONG ProviderInfoSize;                // offset: 0x154 ordinal: 0x2d
  struct _LIST_ENTRY Consumers;          // offset: 0x158 ordinal: 0x2e
  ULONG NumConsumers;                    // offset: 0x168 ordinal: 0x2f
  struct _ETW_REALTIME_CONSUMER
      *TransitionConsumer;                     // offset: 0x170 ordinal: 0x30
  VOID *RealtimeLogfileHandle;                 // offset: 0x178 ordinal: 0x31
  struct _UNICODE_STRING RealtimeLogfileName;  // offset: 0x180 ordinal: 0x32
  union _LARGE_INTEGER RealtimeWriteOffset;    // offset: 0x190 ordinal: 0x33
  union _LARGE_INTEGER RealtimeReadOffset;     // offset: 0x198 ordinal: 0x34
  union _LARGE_INTEGER RealtimeLogfileSize;    // offset: 0x1a0 ordinal: 0x35
  ULONGLONG RealtimeLogfileUsage;              // offset: 0x1a8 ordinal: 0x36
  ULONGLONG RealtimeMaximumFileSize;           // offset: 0x1b0 ordinal: 0x37
  ULONG RealtimeBuffersSaved;                  // offset: 0x1b8 ordinal: 0x38
  struct _ETW_REF_CLOCK RealtimeReferenceTime; // offset: 0x1c0 ordinal: 0x39
  enum _ETW_RT_EVENT_LOSS NewRTEventsLost;     // offset: 0x1d0 ordinal: 0x3a
  struct _KEVENT LoggerEvent;                  // offset: 0x1d8 ordinal: 0x3b
  struct _KEVENT FlushEvent;                   // offset: 0x1f0 ordinal: 0x3c
  struct _KTIMER FlushTimeOutTimer;            // offset: 0x208 ordinal: 0x3d
  struct _KDPC LoggerDpc;                      // offset: 0x248 ordinal: 0x3e
  struct _KMUTANT LoggerMutex;                 // offset: 0x288 ordinal: 0x3f
  struct _EX_PUSH_LOCK LoggerLock;             // offset: 0x2c0 ordinal: 0x40
  union {
    ULONGLONG BufferListSpinLock;            // offset: 0x2c8 ordinal: 0x41
    struct _EX_PUSH_LOCK BufferListPushLock; // offset: 0x2c8 ordinal: 0x42
  };
  struct _SECURITY_CLIENT_CONTEXT
      ClientSecurityContext; // offset: 0x2d0 ordinal: 0x43
  struct _TOKEN_ACCESS_INFORMATION
      *TokenAccessInformation;            // offset: 0x318 ordinal: 0x44
  struct _EX_FAST_REF SecurityDescriptor; // offset: 0x320 ordinal: 0x45
  union _LARGE_INTEGER StartTime;         // offset: 0x328 ordinal: 0x46
  VOID *LogFileHandle;                    // offset: 0x330 ordinal: 0x47
  LONGLONG BufferSequenceNumber;          // offset: 0x338 ordinal: 0x48
  union {
    ULONG Flags;          // offset: 0x340 ordinal: 0x49
    ULONG Persistent : 1; // offset: 0x340 ordinal: 0x4a
  };
  ULONG AutoLogger : 1;                  // offset: 0x340 ordinal: 0x4b
  ULONG FsReady : 1;                     // offset: 0x340 ordinal: 0x4c
  ULONG RealTime : 1;                    // offset: 0x340 ordinal: 0x4d
  ULONG Wow : 1;                         // offset: 0x340 ordinal: 0x4e
  ULONG KernelTrace : 1;                 // offset: 0x340 ordinal: 0x4f
  ULONG NoMoreEnable : 1;                // offset: 0x340 ordinal: 0x50
  ULONG StackTracing : 1;                // offset: 0x340 ordinal: 0x51
  ULONG ErrorLogged : 1;                 // offset: 0x340 ordinal: 0x52
  ULONG RealtimeLoggerContextFreed : 1;  // offset: 0x340 ordinal: 0x53
  ULONG PebsTracing : 1;                 // offset: 0x340 ordinal: 0x54
  ULONG PmcCounters : 1;                 // offset: 0x340 ordinal: 0x55
  ULONG PageAlignBuffers : 1;            // offset: 0x340 ordinal: 0x56
  ULONG StackLookasideListAllocated : 1; // offset: 0x340 ordinal: 0x57
  ULONG SecurityTrace : 1;               // offset: 0x340 ordinal: 0x58
  ULONG SpareFlags1 : 1;                 // offset: 0x340 ordinal: 0x59
  ULONG SystemLoggerIndex : 8;           // offset: 0x340 ordinal: 0x5a
  ULONG StackCaching : 1;                // offset: 0x340 ordinal: 0x5b
  ULONG SpareFlags2 : 7;                 // offset: 0x340 ordinal: 0x5c
  union {
    ULONG RequestFlag;           // offset: 0x344 ordinal: 0x5d
    ULONG DbgRequestNewFile : 1; // offset: 0x344 ordinal: 0x5e
  };
  ULONG DbgRequestUpdateFile : 1;             // offset: 0x344 ordinal: 0x5f
  ULONG DbgRequestFlush : 1;                  // offset: 0x344 ordinal: 0x60
  ULONG DbgRequestDisableRealtime : 1;        // offset: 0x344 ordinal: 0x61
  ULONG DbgRequestDisconnectConsumer : 1;     // offset: 0x344 ordinal: 0x62
  ULONG DbgRequestConnectConsumer : 1;        // offset: 0x344 ordinal: 0x63
  ULONG DbgRequestNotifyConsumer : 1;         // offset: 0x344 ordinal: 0x64
  ULONG DbgRequestUpdateHeader : 1;           // offset: 0x344 ordinal: 0x65
  ULONG DbgRequestDeferredFlush : 1;          // offset: 0x344 ordinal: 0x66
  ULONG DbgRequestDeferredFlushTimer : 1;     // offset: 0x344 ordinal: 0x67
  ULONG DbgRequestFlushTimer : 1;             // offset: 0x344 ordinal: 0x68
  ULONG DbgRequestUpdateDebugger : 1;         // offset: 0x344 ordinal: 0x69
  ULONG DbgSpareRequestFlags : 20;            // offset: 0x344 ordinal: 0x6a
  struct _RTL_BITMAP HookIdMap;               // offset: 0x348 ordinal: 0x6b
  struct _ETW_STACK_CACHE *StackCache;        // offset: 0x358 ordinal: 0x6c
  struct _ETW_PMC_SUPPORT *PmcData;           // offset: 0x360 ordinal: 0x6d
  struct _LIST_ENTRY WinRtProviderBinaryList; // offset: 0x368 ordinal: 0x6e
  struct _WMI_BUFFER_HEADER **ScratchArray;   // offset: 0x378 ordinal: 0x6f
  struct _DISALLOWED_GUIDS DisallowedGuids;   // offset: 0x380 ordinal: 0x70
  struct _ESILO *ServerSilo;                  // offset: 0x390 ordinal: 0x71
} _WMI_LOGGER_CONTEXT;

typedef UCHAR (*__anon_1597)(struct _EPROCESS *, VOID *, VOID *, CHAR);

typedef VOID (*__anon_1593)(struct _EPROCESS *, VOID *, ULONGLONG, ULONGLONG);

typedef LONG (*__anon_1592)(enum _OB_OPEN_REASON, CHAR, struct _EPROCESS *,
                            VOID *, ULONG *, ULONG);

// 0x78 bytes (sizeof)
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
  UCHAR SupportsObjectCallbacks : 1;      // offset: 0x2 ordinal: 0x8
  UCHAR CacheAligned : 1;                 // offset: 0x2 ordinal: 0x9
  ULONG ObjectTypeCode;                   // offset: 0x4 ordinal: 0xa
  ULONG InvalidAttributes;                // offset: 0x8 ordinal: 0xb
  struct _GENERIC_MAPPING GenericMapping; // offset: 0xc ordinal: 0xc
  ULONG ValidAccessMask;                  // offset: 0x1c ordinal: 0xd
  ULONG RetainAccess;                     // offset: 0x20 ordinal: 0xe
  enum _POOL_TYPE PoolType;               // offset: 0x24 ordinal: 0xf
  ULONG DefaultPagedPoolCharge;           // offset: 0x28 ordinal: 0x10
  ULONG DefaultNonPagedPoolCharge;        // offset: 0x2c ordinal: 0x11
  VOID(*DumpProcedure)
  (VOID *, struct _OBJECT_DUMP_CONTROL *); // offset: 0x30 ordinal: 0x12
  LONG(*OpenProcedure)
  (enum _OB_OPEN_REASON, CHAR, struct _EPROCESS *, VOID *, ULONG *,
   ULONG); // offset: 0x38 ordinal: 0x13
  VOID(*CloseProcedure)
  (struct _EPROCESS *, VOID *, ULONGLONG,
   ULONGLONG);                     // offset: 0x40 ordinal: 0x14
  VOID (*DeleteProcedure)(VOID *); // offset: 0x48 ordinal: 0x15
  LONG(*ParseProcedure)
  (VOID *, VOID *, struct _ACCESS_STATE *, CHAR, ULONG,
   struct _UNICODE_STRING *, struct _UNICODE_STRING *, VOID *,
   struct _SECURITY_QUALITY_OF_SERVICE *,
   VOID **); // offset: 0x50 ordinal: 0x16
  LONG(*SecurityProcedure)
  (VOID *, enum _SECURITY_OPERATION_CODE, ULONG *, VOID *, ULONG *, VOID **,
   enum _POOL_TYPE, struct _GENERIC_MAPPING *,
   CHAR); // offset: 0x58 ordinal: 0x17
  LONG(*QueryNameProcedure)
  (VOID *, UCHAR, struct _OBJECT_NAME_INFORMATION *, ULONG, ULONG *,
   CHAR); // offset: 0x60 ordinal: 0x18
  UCHAR(*OkayToCloseProcedure)
  (struct _EPROCESS *, VOID *, VOID *, CHAR); // offset: 0x68 ordinal: 0x19
  ULONG WaitObjectFlagMask;                   // offset: 0x70 ordinal: 0x1a
  USHORT WaitObjectFlagOffset;                // offset: 0x74 ordinal: 0x1b
  USHORT WaitObjectPointerOffset;             // offset: 0x76 ordinal: 0x1c
} _OBJECT_TYPE_INITIALIZER;

// 0xd8 bytes (sizeof)
typedef struct _OBJECT_TYPE {
  struct _LIST_ENTRY TypeList;              // offset: 0x0 ordinal: 0x0
  struct _UNICODE_STRING Name;              // offset: 0x10 ordinal: 0x1
  VOID *DefaultObject;                      // offset: 0x20 ordinal: 0x2
  UCHAR Index;                              // offset: 0x28 ordinal: 0x3
  ULONG TotalNumberOfObjects;               // offset: 0x2c ordinal: 0x4
  ULONG TotalNumberOfHandles;               // offset: 0x30 ordinal: 0x5
  ULONG HighWaterNumberOfObjects;           // offset: 0x34 ordinal: 0x6
  ULONG HighWaterNumberOfHandles;           // offset: 0x38 ordinal: 0x7
  struct _OBJECT_TYPE_INITIALIZER TypeInfo; // offset: 0x40 ordinal: 0x8
  struct _EX_PUSH_LOCK TypeLock;            // offset: 0xb8 ordinal: 0x9
  ULONG Key;                                // offset: 0xc0 ordinal: 0xa
  struct _LIST_ENTRY CallbackList;          // offset: 0xc8 ordinal: 0xb
} _OBJECT_TYPE;

// 0x28 bytes (sizeof)
typedef struct _OB_DUPLICATE_OBJECT_STATE {
  struct _EPROCESS *SourceProcess;            // offset: 0x0 ordinal: 0x0
  VOID *SourceHandle;                         // offset: 0x8 ordinal: 0x1
  VOID *Object;                               // offset: 0x10 ordinal: 0x2
  ULONG TargetAccess;                         // offset: 0x18 ordinal: 0x3
  struct _HANDLE_TABLE_ENTRY_INFO ObjectInfo; // offset: 0x1c ordinal: 0x4
  ULONG HandleAttributes;                     // offset: 0x20 ordinal: 0x5
} _OB_DUPLICATE_OBJECT_STATE;

// 0x30 bytes (sizeof)
typedef struct _KALPC_HANDLE_DATA {
  ULONG Flags;      // offset: 0x0 ordinal: 0x0
  ULONG ObjectType; // offset: 0x4 ordinal: 0x1
  struct _OB_DUPLICATE_OBJECT_STATE
      DuplicateContext; // offset: 0x8 ordinal: 0x2
} _KALPC_HANDLE_DATA;

// 0x70 bytes (sizeof)
typedef struct _KALPC_SECURITY_DATA {
  struct _ALPC_HANDLE_TABLE *HandleTable;          // offset: 0x0 ordinal: 0x0
  VOID *ContextHandle;                             // offset: 0x8 ordinal: 0x1
  struct _EPROCESS *OwningProcess;                 // offset: 0x10 ordinal: 0x2
  struct _ALPC_PORT *OwnerPort;                    // offset: 0x18 ordinal: 0x3
  struct _SECURITY_CLIENT_CONTEXT DynamicSecurity; // offset: 0x20 ordinal: 0x4
  union __anon_1570 u1;                            // offset: 0x68 ordinal: 0x5
} _KALPC_SECURITY_DATA;

// 0x40 bytes (sizeof)
typedef struct _KALPC_MESSAGE_ATTRIBUTES {
  VOID *ClientContext;                       // offset: 0x0 ordinal: 0x0
  VOID *ServerContext;                       // offset: 0x8 ordinal: 0x1
  VOID *PortContext;                         // offset: 0x10 ordinal: 0x2
  VOID *CancelPortContext;                   // offset: 0x18 ordinal: 0x3
  struct _KALPC_SECURITY_DATA *SecurityData; // offset: 0x20 ordinal: 0x4
  struct _KALPC_VIEW *View;                  // offset: 0x28 ordinal: 0x5
  struct _KALPC_HANDLE_DATA *HandleData;     // offset: 0x30 ordinal: 0x6
  union _KALPC_DIRECT_EVENT DirectEvent;     // offset: 0x38 ordinal: 0x7
} _KALPC_MESSAGE_ATTRIBUTES;

// 0x108 bytes (sizeof)
typedef struct _KALPC_MESSAGE {
  struct _LIST_ENTRY Entry;       // offset: 0x0 ordinal: 0x0
  struct _ALPC_PORT *PortQueue;   // offset: 0x10 ordinal: 0x1
  struct _ALPC_PORT *OwnerPort;   // offset: 0x18 ordinal: 0x2
  struct _ETHREAD *WaitingThread; // offset: 0x20 ordinal: 0x3
  union __anon_1552 u1;           // offset: 0x28 ordinal: 0x4
  LONG SequenceNo;                // offset: 0x2c ordinal: 0x5
  union {
    struct _EPROCESS *QuotaProcess; // offset: 0x30 ordinal: 0x6
    VOID *QuotaBlock;               // offset: 0x30 ordinal: 0x7
  };
  struct _ALPC_PORT *CancelSequencePort; // offset: 0x38 ordinal: 0x8
  struct _ALPC_PORT *CancelQueuePort;    // offset: 0x40 ordinal: 0x9
  LONG CancelSequenceNo;                 // offset: 0x48 ordinal: 0xa
  struct _LIST_ENTRY CancelListEntry;    // offset: 0x50 ordinal: 0xb
  struct _KALPC_RESERVE *Reserve;        // offset: 0x60 ordinal: 0xc
  struct _KALPC_MESSAGE_ATTRIBUTES
      MessageAttributes; // offset: 0x68 ordinal: 0xd
  VOID *DataUserVa;      // offset: 0xa8 ordinal: 0xe
  struct _ALPC_COMMUNICATION_INFO
      *CommunicationInfo;            // offset: 0xb0 ordinal: 0xf
  struct _ALPC_PORT *ConnectionPort; // offset: 0xb8 ordinal: 0x10
  struct _ETHREAD *ServerThread;     // offset: 0xc0 ordinal: 0x11
  VOID *WakeReference;               // offset: 0xc8 ordinal: 0x12
  VOID *ExtensionBuffer;             // offset: 0xd0 ordinal: 0x13
  ULONGLONG ExtensionBufferSize;     // offset: 0xd8 ordinal: 0x14
  struct _PORT_MESSAGE PortMessage;  // offset: 0xe0 ordinal: 0x15
} _KALPC_MESSAGE;

// 0x40 bytes (sizeof)
typedef struct _ALPC_DISPATCH_CONTEXT {
  struct _ALPC_PORT *PortObject;  // offset: 0x0 ordinal: 0x0
  struct _KALPC_MESSAGE *Message; // offset: 0x8 ordinal: 0x1
  struct _ALPC_COMMUNICATION_INFO
      *CommunicationInfo;                // offset: 0x10 ordinal: 0x2
  struct _ETHREAD *TargetThread;         // offset: 0x18 ordinal: 0x3
  struct _ALPC_PORT *TargetPort;         // offset: 0x20 ordinal: 0x4
  union _KALPC_DIRECT_EVENT DirectEvent; // offset: 0x28 ordinal: 0x5
  ULONG Flags;                           // offset: 0x30 ordinal: 0x6
  USHORT TotalLength;                    // offset: 0x34 ordinal: 0x7
  USHORT Type;                           // offset: 0x36 ordinal: 0x8
  USHORT DataInfoOffset;                 // offset: 0x38 ordinal: 0x9
  UCHAR SignalCompletion;                // offset: 0x3a ordinal: 0xa
  UCHAR PostedToCompletionList;          // offset: 0x3b ordinal: 0xb
} _ALPC_DISPATCH_CONTEXT;

// 0x28 bytes (sizeof)
typedef struct _KALPC_RESERVE {
  struct _ALPC_PORT *OwnerPort;           // offset: 0x0 ordinal: 0x0
  struct _ALPC_HANDLE_TABLE *HandleTable; // offset: 0x8 ordinal: 0x1
  VOID *Handle;                           // offset: 0x10 ordinal: 0x2
  struct _KALPC_MESSAGE *Message;         // offset: 0x18 ordinal: 0x3
  LONG Active;                            // offset: 0x20 ordinal: 0x4
} _KALPC_RESERVE;

// 0x48 bytes (sizeof)
typedef struct _ALPC_COMMUNICATION_INFO {
  struct _ALPC_PORT *ConnectionPort;          // offset: 0x0 ordinal: 0x0
  struct _ALPC_PORT *ServerCommunicationPort; // offset: 0x8 ordinal: 0x1
  struct _ALPC_PORT *ClientCommunicationPort; // offset: 0x10 ordinal: 0x2
  struct _LIST_ENTRY CommunicationList;       // offset: 0x18 ordinal: 0x3
  struct _ALPC_HANDLE_TABLE HandleTable;      // offset: 0x28 ordinal: 0x4
  struct _KALPC_MESSAGE *CloseMessage;        // offset: 0x40 ordinal: 0x5
} _ALPC_COMMUNICATION_INFO;

// 0xa0 bytes (sizeof)
typedef struct _ALPC_COMPLETION_LIST {
  struct _LIST_ENTRY Entry;                    // offset: 0x0 ordinal: 0x0
  struct _EPROCESS *OwnerProcess;              // offset: 0x10 ordinal: 0x1
  struct _EX_PUSH_LOCK CompletionListLock;     // offset: 0x18 ordinal: 0x2
  struct _MDL *Mdl;                            // offset: 0x20 ordinal: 0x3
  VOID *UserVa;                                // offset: 0x28 ordinal: 0x4
  VOID *UserLimit;                             // offset: 0x30 ordinal: 0x5
  VOID *DataUserVa;                            // offset: 0x38 ordinal: 0x6
  VOID *SystemVa;                              // offset: 0x40 ordinal: 0x7
  ULONGLONG TotalSize;                         // offset: 0x48 ordinal: 0x8
  struct _ALPC_COMPLETION_LIST_HEADER *Header; // offset: 0x50 ordinal: 0x9
  VOID *List;                                  // offset: 0x58 ordinal: 0xa
  ULONGLONG ListSize;                          // offset: 0x60 ordinal: 0xb
  VOID *Bitmap;                                // offset: 0x68 ordinal: 0xc
  ULONGLONG BitmapSize;                        // offset: 0x70 ordinal: 0xd
  VOID *Data;                                  // offset: 0x78 ordinal: 0xe
  ULONGLONG DataSize;                          // offset: 0x80 ordinal: 0xf
  ULONG BitmapLimit;                           // offset: 0x88 ordinal: 0x10
  ULONG BitmapNextHint;                        // offset: 0x8c ordinal: 0x11
  ULONG ConcurrencyCount;                      // offset: 0x90 ordinal: 0x12
  ULONG AttributeFlags;                        // offset: 0x94 ordinal: 0x13
  ULONG AttributeSize;                         // offset: 0x98 ordinal: 0x14
} _ALPC_COMPLETION_LIST;

// 0x1d8 bytes (sizeof)
typedef struct _ALPC_PORT {
  struct _LIST_ENTRY PortListEntry; // offset: 0x0 ordinal: 0x0
  struct _ALPC_COMMUNICATION_INFO
      *CommunicationInfo;         // offset: 0x10 ordinal: 0x1
  struct _EPROCESS *OwnerProcess; // offset: 0x18 ordinal: 0x2
  VOID *CompletionPort;           // offset: 0x20 ordinal: 0x3
  VOID *CompletionKey;            // offset: 0x28 ordinal: 0x4
  struct _ALPC_COMPLETION_PACKET_LOOKASIDE
      *CompletionPacketLookaside;                 // offset: 0x30 ordinal: 0x5
  VOID *PortContext;                              // offset: 0x38 ordinal: 0x6
  struct _SECURITY_CLIENT_CONTEXT StaticSecurity; // offset: 0x40 ordinal: 0x7
  struct _EX_PUSH_LOCK IncomingQueueLock;         // offset: 0x88 ordinal: 0x8
  struct _LIST_ENTRY MainQueue;                   // offset: 0x90 ordinal: 0x9
  struct _LIST_ENTRY LargeMessageQueue;           // offset: 0xa0 ordinal: 0xa
  struct _EX_PUSH_LOCK PendingQueueLock;          // offset: 0xb0 ordinal: 0xb
  struct _LIST_ENTRY PendingQueue;                // offset: 0xb8 ordinal: 0xc
  struct _EX_PUSH_LOCK DirectQueueLock;           // offset: 0xc8 ordinal: 0xd
  struct _LIST_ENTRY DirectQueue;                 // offset: 0xd0 ordinal: 0xe
  struct _EX_PUSH_LOCK WaitQueueLock;             // offset: 0xe0 ordinal: 0xf
  struct _LIST_ENTRY WaitQueue;                   // offset: 0xe8 ordinal: 0x10
  union {
    struct _KSEMAPHORE *Semaphore; // offset: 0xf8 ordinal: 0x11
    struct _KEVENT *DummyEvent;    // offset: 0xf8 ordinal: 0x12
  };
  struct _ALPC_PORT_ATTRIBUTES PortAttributes;  // offset: 0x100 ordinal: 0x13
  struct _EX_PUSH_LOCK ResourceListLock;        // offset: 0x148 ordinal: 0x14
  struct _LIST_ENTRY ResourceListHead;          // offset: 0x150 ordinal: 0x15
  struct _EX_PUSH_LOCK PortObjectLock;          // offset: 0x160 ordinal: 0x16
  struct _ALPC_COMPLETION_LIST *CompletionList; // offset: 0x168 ordinal: 0x17
  struct _CALLBACK_OBJECT *CallbackObject;      // offset: 0x170 ordinal: 0x18
  VOID *CallbackContext;                        // offset: 0x178 ordinal: 0x19
  struct _LIST_ENTRY CanceledQueue;             // offset: 0x180 ordinal: 0x1a
  LONG SequenceNo;                              // offset: 0x190 ordinal: 0x1b
  LONG ReferenceNo;                             // offset: 0x194 ordinal: 0x1c
  struct _PALPC_PORT_REFERENCE_WAIT_BLOCK
      *ReferenceNoWait;                  // offset: 0x198 ordinal: 0x1d
  union __anon_1539 u1;                  // offset: 0x1a0 ordinal: 0x1e
  struct _ALPC_PORT *TargetQueuePort;    // offset: 0x1a8 ordinal: 0x1f
  struct _ALPC_PORT *TargetSequencePort; // offset: 0x1b0 ordinal: 0x20
  struct _KALPC_MESSAGE *CachedMessage;  // offset: 0x1b8 ordinal: 0x21
  ULONG MainQueueLength;                 // offset: 0x1c0 ordinal: 0x22
  ULONG LargeMessageQueueLength;         // offset: 0x1c4 ordinal: 0x23
  ULONG PendingQueueLength;              // offset: 0x1c8 ordinal: 0x24
  ULONG DirectQueueLength;               // offset: 0x1cc ordinal: 0x25
  ULONG CanceledQueueLength;             // offset: 0x1d0 ordinal: 0x26
  ULONG WaitQueueLength;                 // offset: 0x1d4 ordinal: 0x27
} _ALPC_PORT;

// 0x48 bytes (sizeof)
typedef struct _KALPC_SECTION {
  VOID *SectionObject;                    // offset: 0x0 ordinal: 0x0
  ULONGLONG Size;                         // offset: 0x8 ordinal: 0x1
  struct _ALPC_HANDLE_TABLE *HandleTable; // offset: 0x10 ordinal: 0x2
  VOID *SectionHandle;                    // offset: 0x18 ordinal: 0x3
  struct _EPROCESS *OwnerProcess;         // offset: 0x20 ordinal: 0x4
  struct _ALPC_PORT *OwnerPort;           // offset: 0x28 ordinal: 0x5
  union __anon_1524 u1;                   // offset: 0x30 ordinal: 0x6
  ULONG NumberOfRegions;                  // offset: 0x34 ordinal: 0x7
  struct _LIST_ENTRY RegionListHead;      // offset: 0x38 ordinal: 0x8
} _KALPC_SECTION;

// 0x58 bytes (sizeof)
typedef struct _KALPC_REGION {
  struct _LIST_ENTRY RegionListEntry; // offset: 0x0 ordinal: 0x0
  struct _KALPC_SECTION *Section;     // offset: 0x10 ordinal: 0x1
  ULONGLONG Offset;                   // offset: 0x18 ordinal: 0x2
  ULONGLONG Size;                     // offset: 0x20 ordinal: 0x3
  ULONGLONG ViewSize;                 // offset: 0x28 ordinal: 0x4
  union __anon_1579 u1;               // offset: 0x30 ordinal: 0x5
  ULONG NumberOfViews;                // offset: 0x34 ordinal: 0x6
  struct _LIST_ENTRY ViewListHead;    // offset: 0x38 ordinal: 0x7
  struct _KALPC_VIEW *ReadOnlyView;   // offset: 0x48 ordinal: 0x8
  struct _KALPC_VIEW *ReadWriteView;  // offset: 0x50 ordinal: 0x9
} _KALPC_REGION;

// 0x60 bytes (sizeof)
typedef struct _KALPC_VIEW {
  struct _LIST_ENTRY ViewListEntry;        // offset: 0x0 ordinal: 0x0
  struct _KALPC_REGION *Region;            // offset: 0x10 ordinal: 0x1
  struct _ALPC_PORT *OwnerPort;            // offset: 0x18 ordinal: 0x2
  struct _EPROCESS *OwnerProcess;          // offset: 0x20 ordinal: 0x3
  VOID *Address;                           // offset: 0x28 ordinal: 0x4
  ULONGLONG Size;                          // offset: 0x30 ordinal: 0x5
  VOID *SecureViewHandle;                  // offset: 0x38 ordinal: 0x6
  VOID *WriteAccessHandle;                 // offset: 0x40 ordinal: 0x7
  union __anon_1572 u1;                    // offset: 0x48 ordinal: 0x8
  ULONG NumberOfOwnerMessages;             // offset: 0x4c ordinal: 0x9
  struct _LIST_ENTRY ProcessViewListEntry; // offset: 0x50 ordinal: 0xa
} _KALPC_VIEW;

// 0x58 bytes (sizeof)
typedef struct __anon_1471 {
  struct _SHARED_CACHE_MAP *SharedCacheMap;       // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER FileOffset;                // offset: 0x8 ordinal: 0x1
  struct _FILE_OBJECT *FileObject;                // offset: 0x10 ordinal: 0x2
  ULONG Length;                                   // offset: 0x18 ordinal: 0x3
  struct _SINGLE_LIST_ENTRY *PrefetchList;        // offset: 0x20 ordinal: 0x4
  ULONG PrefetchPagePriority;                     // offset: 0x28 ordinal: 0x5
  struct _MDL *Mdl;                               // offset: 0x30 ordinal: 0x6
  struct _IO_STATUS_BLOCK *IoStatusBlock;         // offset: 0x38 ordinal: 0x7
  struct _CC_ASYNC_READ_CONTEXT *CallbackContext; // offset: 0x40 ordinal: 0x8
  struct _EPROCESS *OriginatingProcess;           // offset: 0x48 ordinal: 0x9
  CHAR RequestorMode;                             // offset: 0x50 ordinal: 0xa
  ULONG NestingLevel;                             // offset: 0x54 ordinal: 0xb
} __anon_1471;

// 0x58 bytes (sizeof)
typedef union __anon_1474 {
  struct __anon_1466 Read;         // offset: 0x0 ordinal: 0x0
  struct __anon_1467 Write;        // offset: 0x0 ordinal: 0x1
  struct __anon_1468 Event;        // offset: 0x0 ordinal: 0x2
  struct __anon_1469 Notification; // offset: 0x0 ordinal: 0x3
  struct __anon_1470 LowPriWrite;  // offset: 0x0 ordinal: 0x4
  struct __anon_1471 AsyncRead;    // offset: 0x0 ordinal: 0x5
} __anon_1474;

// 0x70 bytes (sizeof)
typedef struct _WORK_QUEUE_ENTRY {
  struct _LIST_ENTRY WorkQueueLinks; // offset: 0x0 ordinal: 0x0
  union __anon_1474 Parameters;      // offset: 0x10 ordinal: 0x1
  UCHAR Function;                    // offset: 0x68 ordinal: 0x2
} _WORK_QUEUE_ENTRY;

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

// 0x80 bytes (sizeof)
typedef struct _MI_ACCESS_LOG_STATE {
  struct _MM_PAGE_ACCESS_INFO_HEADER *CcAccessLog; // offset: 0x0 ordinal: 0x0
  ULONG Enabled;                                   // offset: 0x8 ordinal: 0x1
  struct _WORK_QUEUE_ITEM DisableAccessLogging;    // offset: 0x10 ordinal: 0x2
  ULONG MinLoggingPriority;                        // offset: 0x30 ordinal: 0x3
  ULONGLONG AccessLoggingLock;                     // offset: 0x40 ordinal: 0x4
} _MI_ACCESS_LOG_STATE;

// 0x8 bytes (sizeof)
typedef union __anon_903 {
  ULONGLONG ImageCommitment;         // offset: 0x0 ordinal: 0x0
  struct _EPROCESS *CreatingProcess; // offset: 0x0 ordinal: 0x1
} __anon_903;

// 0x48 bytes (sizeof)
typedef struct _SEGMENT {
  struct _CONTROL_AREA *ControlArea;  // offset: 0x0 ordinal: 0x0
  ULONG TotalNumberOfPtes;            // offset: 0x8 ordinal: 0x1
  struct _SEGMENT_FLAGS SegmentFlags; // offset: 0xc ordinal: 0x2
  ULONGLONG NumberOfCommittedPages;   // offset: 0x10 ordinal: 0x3
  ULONGLONG SizeOfSegment;            // offset: 0x18 ordinal: 0x4
  union {
    struct _MMEXTEND_INFO *ExtendInfo; // offset: 0x20 ordinal: 0x5
    VOID *BasedAddress;                // offset: 0x20 ordinal: 0x6
  };
  struct _EX_PUSH_LOCK SegmentLock; // offset: 0x28 ordinal: 0x7
  union __anon_903 u1;              // offset: 0x30 ordinal: 0x8
  union __anon_904 u2;              // offset: 0x38 ordinal: 0x9
  struct _MMPTE *PrototypePte;      // offset: 0x40 ordinal: 0xa
} _SEGMENT;

// 0x78 bytes (sizeof)
typedef struct _CONTROL_AREA {
  struct _SEGMENT *Segment;                     // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY ListHead;                  // offset: 0x8 ordinal: 0x1
  ULONGLONG NumberOfSectionReferences;          // offset: 0x18 ordinal: 0x2
  ULONGLONG NumberOfPfnReferences;              // offset: 0x20 ordinal: 0x3
  ULONGLONG NumberOfMappedViews;                // offset: 0x28 ordinal: 0x4
  ULONGLONG NumberOfUserReferences;             // offset: 0x30 ordinal: 0x5
  union __anon_880 u;                           // offset: 0x38 ordinal: 0x6
  union __anon_881 u1;                          // offset: 0x3c ordinal: 0x7
  struct _EX_FAST_REF FilePointer;              // offset: 0x40 ordinal: 0x8
  LONG ControlAreaLock;                         // offset: 0x48 ordinal: 0x9
  ULONG ModifiedWriteCount;                     // offset: 0x4c ordinal: 0xa
  struct _MI_CONTROL_AREA_WAIT_BLOCK *WaitList; // offset: 0x50 ordinal: 0xb
  union __anon_883 u2;                          // offset: 0x58 ordinal: 0xc
  ULONGLONG LockedPages;                        // offset: 0x68 ordinal: 0xd
  struct _EX_PUSH_LOCK FileObjectLock;          // offset: 0x70 ordinal: 0xe
} _CONTROL_AREA;

// 0x280 bytes (sizeof)
typedef struct _MI_SECTION_STATE {
  LONG SegmentListLock;                      // offset: 0x0 ordinal: 0x0
  LONG SectionObjectPointersLock;            // offset: 0x40 ordinal: 0x1
  struct _EX_PUSH_LOCK SectionExtendLock;    // offset: 0x48 ordinal: 0x2
  struct _EX_PUSH_LOCK SectionExtendSetLock; // offset: 0x50 ordinal: 0x3
  struct _RTL_AVL_TREE SectionBasedRoot;     // offset: 0x58 ordinal: 0x4
  struct _EX_PUSH_LOCK SectionBasedLock;     // offset: 0x60 ordinal: 0x5
  ULONGLONG UnusedSubsectionPagedPool;       // offset: 0x68 ordinal: 0x6
  ULONG UnusedSegmentForceFree;              // offset: 0x70 ordinal: 0x7
  ULONG DataSectionProtectionMask;           // offset: 0x74 ordinal: 0x8
  VOID *HighSectionBase;                     // offset: 0x78 ordinal: 0x9
  struct _MSUBSECTION PhysicalSubsection;    // offset: 0x80 ordinal: 0xa
  struct _CONTROL_AREA PhysicalControlArea;  // offset: 0xf0 ordinal: 0xb
  struct _RTL_AVL_TREE PageFileSectionHead;  // offset: 0x168 ordinal: 0xc
  LONG PageFileSectionListSpinLock;          // offset: 0x170 ordinal: 0xd
  struct _MI_CROSS_PARTITION_CHARGES
      SharedSegmentCharges; // offset: 0x178 ordinal: 0xe
  struct _MI_CROSS_PARTITION_CHARGES
      SharedPageCombineCharges;                 // offset: 0x1a0 ordinal: 0xf
  ULONG ImageBias;                              // offset: 0x1c8 ordinal: 0x10
  struct _EX_PUSH_LOCK RelocateBitmapsLock;     // offset: 0x1d0 ordinal: 0x11
  struct _RTL_BITMAP ImageBitMap;               // offset: 0x1d8 ordinal: 0x12
  ULONG ImageBias64Low;                         // offset: 0x1e8 ordinal: 0x13
  ULONG ImageBias64High;                        // offset: 0x1ec ordinal: 0x14
  struct _RTL_BITMAP ImageBitMap64Low;          // offset: 0x1f0 ordinal: 0x15
  struct _RTL_BITMAP ImageBitMap64High;         // offset: 0x200 ordinal: 0x16
  struct _RTL_BITMAP ImageBitMapWow64Dll;       // offset: 0x210 ordinal: 0x17
  VOID *ApiSetSection;                          // offset: 0x220 ordinal: 0x18
  VOID *ApiSetSchema;                           // offset: 0x228 ordinal: 0x19
  ULONGLONG ApiSetSchemaSize;                   // offset: 0x230 ordinal: 0x1a
  ULONG LostDataFiles;                          // offset: 0x238 ordinal: 0x1b
  ULONG LostDataPages;                          // offset: 0x23c ordinal: 0x1c
  ULONG ImageFailureReason;                     // offset: 0x240 ordinal: 0x1d
  struct _SECTION *CfgBitMapSection32;          // offset: 0x248 ordinal: 0x1e
  struct _CONTROL_AREA *CfgBitMapControlArea32; // offset: 0x250 ordinal: 0x1f
  struct _SECTION *CfgBitMapSection64;          // offset: 0x258 ordinal: 0x20
  struct _CONTROL_AREA *CfgBitMapControlArea64; // offset: 0x260 ordinal: 0x21
  ULONG ImageCfgFailure;                        // offset: 0x268 ordinal: 0x22
  LONG ImageValidationFailed;                   // offset: 0x26c ordinal: 0x23
} _MI_SECTION_STATE;

// 0x88 bytes (sizeof)
typedef struct _MMVAD {
  struct _MMVAD_SHORT Core;         // offset: 0x0 ordinal: 0x0
  union __anon_808 u2;              // offset: 0x40 ordinal: 0x1
  struct _SUBSECTION *Subsection;   // offset: 0x48 ordinal: 0x2
  struct _MMPTE *FirstPrototypePte; // offset: 0x50 ordinal: 0x3
  struct _MMPTE *LastContiguousPte; // offset: 0x58 ordinal: 0x4
  struct _LIST_ENTRY ViewLinks;     // offset: 0x60 ordinal: 0x5
  struct _EPROCESS *VadsProcess;    // offset: 0x70 ordinal: 0x6
  union __anon_811 u4;              // offset: 0x78 ordinal: 0x7
  struct _FILE_OBJECT *FileObject;  // offset: 0x80 ordinal: 0x8
} _MMVAD;

// 0x18 bytes (sizeof)
typedef struct _MI_CFG_BITMAP_INFO {
  VOID *BaseAddress;        // offset: 0x0 ordinal: 0x0
  ULONGLONG RegionSize;     // offset: 0x8 ordinal: 0x1
  struct _MMVAD *BitmapVad; // offset: 0x10 ordinal: 0x2
} _MI_CFG_BITMAP_INFO;

// 0x108 bytes (sizeof)
typedef struct _MI_USER_VA_INFO {
  ULONG NumberOfCommittedPageTables;               // offset: 0x0 ordinal: 0x0
  ULONG VadBitMapHint;                             // offset: 0x4 ordinal: 0x1
  ULONG LastAllocationSizeHint;                    // offset: 0x8 ordinal: 0x2
  ULONG LastAllocationSize;                        // offset: 0xc ordinal: 0x3
  ULONG LowestBottomUpVadBit;                      // offset: 0x10 ordinal: 0x4
  ULONG VadBitMapSize;                             // offset: 0x14 ordinal: 0x5
  ULONG VadBitMapCommitment;                       // offset: 0x18 ordinal: 0x6
  ULONG MaximumLastVadBit;                         // offset: 0x1c ordinal: 0x7
  LONG VadsBeingDeleted;                           // offset: 0x20 ordinal: 0x8
  ULONGLONG PhysicalMappingCount;                  // offset: 0x28 ordinal: 0x9
  struct _KEVENT *LastVadDeletionEvent;            // offset: 0x30 ordinal: 0xa
  ULONG *VadBitBuffer;                             // offset: 0x38 ordinal: 0xb
  VOID *LowestBottomUpAllocationAddress;           // offset: 0x40 ordinal: 0xc
  VOID *HighestTopDownAllocationAddress;           // offset: 0x48 ordinal: 0xd
  VOID *FreeTebHint;                               // offset: 0x50 ordinal: 0xe
  UCHAR NumaAware;                                 // offset: 0x58 ordinal: 0xf
  ULONGLONG CloneNestingLevel;                     // offset: 0x60 ordinal: 0x10
  ULONGLONG PrivateFixupVadCount;                  // offset: 0x68 ordinal: 0x11
  struct _MI_CFG_BITMAP_INFO CfgBitMap[2];         // offset: 0x70 ordinal: 0x12
  ULONG CommittedPageTableBufferForTopLevel[8];    // offset: 0xa0 ordinal: 0x13
  struct _RTL_BITMAP CommittedPageTableBitmaps[3]; // offset: 0xc0 ordinal: 0x14
  ULONG PageTableBitmapPages[3];                   // offset: 0xf0 ordinal: 0x15
  VOID *FreeUmsTebHint; // offset: 0x100 ordinal: 0x16
} _MI_USER_VA_INFO;

// 0x300 bytes (sizeof)
typedef struct _MMWSL {
  ULONGLONG FirstFree;                              // offset: 0x0 ordinal: 0x0
  ULONGLONG FirstDynamic;                           // offset: 0x8 ordinal: 0x1
  ULONGLONG LastEntry;                              // offset: 0x10 ordinal: 0x2
  ULONGLONG NextSlot;                               // offset: 0x18 ordinal: 0x3
  ULONGLONG LastInitializedWsle;                    // offset: 0x20 ordinal: 0x4
  ULONGLONG NextAgingSlot;                          // offset: 0x28 ordinal: 0x5
  ULONGLONG NextAccessClearingSlot;                 // offset: 0x30 ordinal: 0x6
  ULONG LastAccessClearingRemainder;                // offset: 0x38 ordinal: 0x7
  ULONG LastAgingRemainder;                         // offset: 0x3c ordinal: 0x8
  ULONG WsleSize;                                   // offset: 0x40 ordinal: 0x9
  ULONGLONG NonDirectCount;                         // offset: 0x48 ordinal: 0xa
  VOID *LowestPagableAddress;                       // offset: 0x50 ordinal: 0xb
  struct _MMWSLE_NONDIRECT_HASH *NonDirectHash;     // offset: 0x58 ordinal: 0xc
  struct _MMWSLE_HASH *HashTableStart;              // offset: 0x60 ordinal: 0xd
  struct _MMWSLE_HASH *HighestPermittedHashAddress; // offset: 0x68 ordinal: 0xe
  ULONGLONG ActiveWsleCounts[16];                   // offset: 0x70 ordinal: 0xf
  struct _MI_ACTIVE_WSLE_LISTHEAD ActiveWsles[16]; // offset: 0xf0 ordinal: 0x10
  struct _MMWSLE *Wsle;               // offset: 0x1f0 ordinal: 0x11
  struct _MI_USER_VA_INFO UserVaInfo; // offset: 0x1f8 ordinal: 0x12
} _MMWSL;

// 0x88 bytes (sizeof)
typedef struct _MI_SESSION_STATE {
  struct _MMSESSION SystemSession;     // offset: 0x0 ordinal: 0x0
  UCHAR CodePageEdited;                // offset: 0x20 ordinal: 0x1
  ULONG *DynamicVaBitBuffer;           // offset: 0x28 ordinal: 0x2
  ULONGLONG DynamicVaBitBufferPages;   // offset: 0x30 ordinal: 0x3
  ULONG *DynamicPoolBitBuffer;         // offset: 0x38 ordinal: 0x4
  VOID *DynamicVaStart;                // offset: 0x40 ordinal: 0x5
  ULONG *DynamicPtesBitBuffer;         // offset: 0x48 ordinal: 0x6
  struct _EX_PUSH_LOCK IdLock;         // offset: 0x50 ordinal: 0x7
  ULONG DetachTimeStamp;               // offset: 0x58 ordinal: 0x8
  struct _EPROCESS *LeaderProcess;     // offset: 0x60 ordinal: 0x9
  struct _EX_PUSH_LOCK InitializeLock; // offset: 0x68 ordinal: 0xa
  struct _MMWSL *WorkingSetList;       // offset: 0x70 ordinal: 0xb
  struct _MMWSLE_HASH *WsHashStart;    // offset: 0x78 ordinal: 0xc
  struct _MMWSLE_HASH *WsHashEnd;      // offset: 0x80 ordinal: 0xd
} _MI_SESSION_STATE;

// 0x80 bytes (sizeof)
typedef struct _HANDLE_TABLE {
  ULONG NextHandleNeedingPool;        // offset: 0x0 ordinal: 0x0
  LONG ExtraInfoPages;                // offset: 0x4 ordinal: 0x1
  ULONGLONG TableCode;                // offset: 0x8 ordinal: 0x2
  struct _EPROCESS *QuotaProcess;     // offset: 0x10 ordinal: 0x3
  struct _LIST_ENTRY HandleTableList; // offset: 0x18 ordinal: 0x4
  ULONG UniqueProcessId;              // offset: 0x28 ordinal: 0x5
  union {
    ULONG Flags;          // offset: 0x2c ordinal: 0x6
    UCHAR StrictFIFO : 1; // offset: 0x2c ordinal: 0x7
  };
  UCHAR EnableHandleExceptions : 1;               // offset: 0x2c ordinal: 0x8
  UCHAR Rundown : 1;                              // offset: 0x2c ordinal: 0x9
  UCHAR Duplicated : 1;                           // offset: 0x2c ordinal: 0xa
  UCHAR RaiseUMExceptionOnInvalidHandleClose : 1; // offset: 0x2c ordinal: 0xb
  struct _EX_PUSH_LOCK HandleContentionEvent;     // offset: 0x30 ordinal: 0xc
  struct _EX_PUSH_LOCK HandleTableLock;           // offset: 0x38 ordinal: 0xd
  union {
    struct _HANDLE_TABLE_FREE_LIST FreeLists[1]; // offset: 0x40 ordinal: 0xe
    UCHAR ActualEntry[32];                       // offset: 0x40 ordinal: 0xf
  };
  struct _HANDLE_TRACE_DEBUG_INFO *DebugInfo; // offset: 0x60 ordinal: 0x10
} _HANDLE_TABLE;

typedef UCHAR (*__anon_568)(struct _FILE_OBJECT *, struct _EPROCESS *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_567)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            union _LARGE_INTEGER *, struct _EPROCESS *, ULONG,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_566)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
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

typedef LONG (*__anon_559)(struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *);

// 0x100 bytes (sizeof)
typedef struct _VF_DRIVER_IO_CALLBACKS {
  LONG(*DriverInit)
  (struct _DRIVER_OBJECT *,
   struct _UNICODE_STRING *); // offset: 0x0 ordinal: 0x0
  VOID(*DriverStartIo)
  (struct _DEVICE_OBJECT *, struct _IRP *);      // offset: 0x8 ordinal: 0x1
  VOID (*DriverUnload)(struct _DRIVER_OBJECT *); // offset: 0x10 ordinal: 0x2
  LONG(*AddDevice)
  (struct _DRIVER_OBJECT *,
   struct _DEVICE_OBJECT *); // offset: 0x18 ordinal: 0x3
  LONG(*MajorFunction[28])
  (struct _DEVICE_OBJECT *, struct _IRP *); // offset: 0x20 ordinal: 0x4
} _VF_DRIVER_IO_CALLBACKS;

typedef VOID (*__anon_517)(struct _DRIVER_OBJECT *);

typedef LONG (*__anon_515)(struct _DRIVER_OBJECT *, struct _UNICODE_STRING *);

// 0x50 bytes (sizeof)
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
  VOID *KseCallbacks;                             // offset: 0x38 ordinal: 0x6
  VOID *DvCallbacks;                              // offset: 0x40 ordinal: 0x7
  VOID *VerifierContext;                          // offset: 0x48 ordinal: 0x8
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
  union __anon_487 Queue;                // offset: 0x50 ordinal: 0xe
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
  struct _MDL *Next;                // offset: 0x0 ordinal: 0x0
  SHORT Size;                       // offset: 0x8 ordinal: 0x1
  SHORT MdlFlags;                   // offset: 0xa ordinal: 0x2
  USHORT AllocationProcessorNumber; // offset: 0xc ordinal: 0x3
  USHORT Reserved;                  // offset: 0xe ordinal: 0x4
  struct _EPROCESS *Process;        // offset: 0x10 ordinal: 0x5
  VOID *MappedSystemVa;             // offset: 0x18 ordinal: 0x6
  VOID *StartVa;                    // offset: 0x20 ordinal: 0x7
  ULONG ByteCount;                  // offset: 0x28 ordinal: 0x8
  ULONG ByteOffset;                 // offset: 0x2c ordinal: 0x9
} _MDL;

// 0x38 bytes (sizeof)
typedef struct __anon_993 {
  struct _MDL Mdl;   // offset: 0x0 ordinal: 0x0
  ULONGLONG Page[1]; // offset: 0x30 ordinal: 0x1
} __anon_993;

// 0x78 bytes (sizeof)
typedef struct _MI_PAGEFILE_TRACES {
  LONG Status;                                  // offset: 0x0 ordinal: 0x0
  USHORT PartitionId;                           // offset: 0x4 ordinal: 0x1
  UCHAR Priority;                               // offset: 0x6 ordinal: 0x2
  UCHAR IrpPriority;                            // offset: 0x7 ordinal: 0x3
  UCHAR ReservationWrite;                       // offset: 0x8 ordinal: 0x4
  union _LARGE_INTEGER CurrentTime;             // offset: 0x10 ordinal: 0x5
  ULONGLONG AvailablePages;                     // offset: 0x18 ordinal: 0x6
  ULONGLONG ModifiedPagesTotal;                 // offset: 0x20 ordinal: 0x7
  ULONGLONG ModifiedPagefilePages;              // offset: 0x28 ordinal: 0x8
  ULONGLONG ModifiedNoWritePages;               // offset: 0x30 ordinal: 0x9
  ULONGLONG ModifiedPagefileNoReservationPages; // offset: 0x38 ordinal: 0xa
  struct __anon_993 MdlHack;                    // offset: 0x40 ordinal: 0xb
} _MI_PAGEFILE_TRACES;

// 0x1100 bytes (sizeof)
typedef struct _MI_VISIBLE_PARTITION {
  ULONGLONG LowestPhysicalPage;                  // offset: 0x0 ordinal: 0x0
  ULONGLONG HighestPhysicalPage;                 // offset: 0x8 ordinal: 0x1
  ULONGLONG NumberOfPhysicalPages;               // offset: 0x10 ordinal: 0x2
  ULONG NumberOfPagingFiles;                     // offset: 0x18 ordinal: 0x3
  struct _MMPAGING_FILE *PagingFile[16];         // offset: 0x20 ordinal: 0x4
  ULONGLONG AvailablePages;                      // offset: 0xc0 ordinal: 0x5
  ULONGLONG ResidentAvailablePages;              // offset: 0x100 ordinal: 0x6
  ULONGLONG TotalCommittedPages;                 // offset: 0x108 ordinal: 0x7
  struct _MMPFNLIST ModifiedPageListHead;        // offset: 0x140 ordinal: 0x8
  struct _MMPFNLIST ModifiedNoWritePageListHead; // offset: 0x180 ordinal: 0x9
  ULONGLONG TotalCommitLimit;                    // offset: 0x1a8 ordinal: 0xa
  ULONGLONG TotalPagesForPagingFile;             // offset: 0x1b0 ordinal: 0xb
  ULONGLONG VadPhysicalPages;                    // offset: 0x1b8 ordinal: 0xc
  ULONGLONG ProcessLockedFilePages;              // offset: 0x1c0 ordinal: 0xd
  ULONG ChargeCommitmentFailures[4];             // offset: 0x1c8 ordinal: 0xe
  ULONGLONG PageTableBitmapPages;                // offset: 0x1d8 ordinal: 0xf
  LONG PageFileTraceIndex;                       // offset: 0x1e0 ordinal: 0x10
  struct _MI_PAGEFILE_TRACES PageFileTraces[32]; // offset: 0x1e8 ordinal: 0x11
} _MI_VISIBLE_PARTITION;

// 0x25c0 bytes (sizeof)
typedef struct _MI_PARTITION {
  struct _MI_PARTITION_CORE Core;                // offset: 0x0 ordinal: 0x0
  struct _MI_PARTITION_MODWRITES Modwriter;      // offset: 0x168 ordinal: 0x1
  struct _MI_PARTITION_STORES Store;             // offset: 0x410 ordinal: 0x2
  struct _MI_PARTITION_SEGMENTS Segments;        // offset: 0x490 ordinal: 0x3
  struct _MI_PARTITION_PAGE_LISTS PageLists;     // offset: 0x5c0 ordinal: 0x4
  struct _MI_PARTITION_COMMIT Commit;            // offset: 0x1280 ordinal: 0x5
  struct _MI_PARTITION_ZEROING Zeroing;          // offset: 0x12b8 ordinal: 0x6
  struct _MI_PAGE_COMBINING_SUPPORT PageCombine; // offset: 0x1300 ordinal: 0x7
  VOID *WorkingSetControl;                       // offset: 0x1488 ordinal: 0x8
  struct _MMWORKING_SET_EXPANSION_HEAD
      WorkingSetExpansionHead;     // offset: 0x1490 ordinal: 0x9
  struct _MI_VISIBLE_PARTITION Vp; // offset: 0x14c0 ordinal: 0xa
} _MI_PARTITION;

// 0x58 bytes (sizeof)
typedef struct _MI_PARTITION_STATE {
  ULONGLONG PartitionLock;                        // offset: 0x0 ordinal: 0x0
  struct _EX_PUSH_LOCK PartitionIdLock;           // offset: 0x8 ordinal: 0x1
  ULONGLONG InitialPartitionIdBits;               // offset: 0x10 ordinal: 0x2
  struct _LIST_ENTRY PartitionList;               // offset: 0x18 ordinal: 0x3
  struct _RTL_BITMAP *PartitionIdBitmap;          // offset: 0x28 ordinal: 0x4
  struct _RTL_BITMAP InitialPartitionIdBitmap;    // offset: 0x30 ordinal: 0x5
  struct _MI_PARTITION *TempPartitionPointers[1]; // offset: 0x40 ordinal: 0x6
  struct _MI_PARTITION **Partition;               // offset: 0x48 ordinal: 0x7
  ULONGLONG TotalPagesInChildPartitions;          // offset: 0x50 ordinal: 0x8
} _MI_PARTITION_STATE;

// 0x108 bytes (sizeof)
typedef struct _MMMOD_WRITER_MDL_ENTRY {
  struct _LIST_ENTRY Links;             // offset: 0x0 ordinal: 0x0
  union __anon_937 u;                   // offset: 0x10 ordinal: 0x1
  struct _IRP *Irp;                     // offset: 0x20 ordinal: 0x2
  struct _MODWRITER_FLAGS u1;           // offset: 0x28 ordinal: 0x3
  ULONG StoreWriteRefCount;             // offset: 0x2c ordinal: 0x4
  struct _KAPC StoreWriteCompletionApc; // offset: 0x30 ordinal: 0x5
  ULONG ByteCount;                      // offset: 0x88 ordinal: 0x6
  ULONG ChargedPages;                   // offset: 0x8c ordinal: 0x7
  struct _MMPAGING_FILE *PagingFile;    // offset: 0x90 ordinal: 0x8
  struct _FILE_OBJECT *File;            // offset: 0x98 ordinal: 0x9
  struct _CONTROL_AREA *ControlArea;    // offset: 0xa0 ordinal: 0xa
  struct _ERESOURCE *FileResource;      // offset: 0xa8 ordinal: 0xb
  union _LARGE_INTEGER WriteOffset;     // offset: 0xb0 ordinal: 0xc
  union _LARGE_INTEGER IssueTime;       // offset: 0xb8 ordinal: 0xd
  struct _MI_PARTITION *Partition;      // offset: 0xc0 ordinal: 0xe
  struct _MDL *PointerMdl;              // offset: 0xc8 ordinal: 0xf
  struct _MDL Mdl;                      // offset: 0xd0 ordinal: 0x10
  ULONGLONG Page[1];                    // offset: 0x100 ordinal: 0x11
} _MMMOD_WRITER_MDL_ENTRY;

// 0x100 bytes (sizeof)
typedef struct _MMPAGING_FILE {
  ULONGLONG Size;                                // offset: 0x0 ordinal: 0x0
  ULONGLONG MaximumSize;                         // offset: 0x8 ordinal: 0x1
  ULONGLONG MinimumSize;                         // offset: 0x10 ordinal: 0x2
  ULONGLONG FreeSpace;                           // offset: 0x18 ordinal: 0x3
  ULONGLONG PeakUsage;                           // offset: 0x20 ordinal: 0x4
  ULONGLONG HighestPage;                         // offset: 0x28 ordinal: 0x5
  ULONGLONG FreeReservationSpace;                // offset: 0x30 ordinal: 0x6
  ULONGLONG LargestReserveCluster;               // offset: 0x38 ordinal: 0x7
  struct _FILE_OBJECT *File;                     // offset: 0x40 ordinal: 0x8
  struct _MMMOD_WRITER_MDL_ENTRY *Entry[2];      // offset: 0x48 ordinal: 0x9
  union _SLIST_HEADER PfnsToFree;                // offset: 0x60 ordinal: 0xa
  struct _UNICODE_STRING PageFileName;           // offset: 0x70 ordinal: 0xb
  struct _MI_PAGING_FILE_SPACE_BITMAPS *Bitmaps; // offset: 0x80 ordinal: 0xc
  ULONG AllocationBitmapHint;                    // offset: 0x88 ordinal: 0xd
  ULONG ReservationBitmapHint;                   // offset: 0x8c ordinal: 0xe
  ULONG LargestNonReservedClusterSize;           // offset: 0x90 ordinal: 0xf
  ULONG RefreshClusterSize;                      // offset: 0x94 ordinal: 0x10
  ULONG LastRefreshClusterSize;                  // offset: 0x98 ordinal: 0x11
  ULONG ReservedClusterSizeAggregate;            // offset: 0x9c ordinal: 0x12
  union {
    ULONG ToBeEvictedCount; // offset: 0xa0 ordinal: 0x13
    ULONG HybridPriority;   // offset: 0xa0 ordinal: 0x14
  };
  USHORT PageFileNumber : 4;                // offset: 0xa4 ordinal: 0x15
  USHORT WsSwapPagefile : 1;                // offset: 0xa4 ordinal: 0x16
  USHORT NoReservations : 1;                // offset: 0xa4 ordinal: 0x17
  USHORT VirtualStorePagefile : 1;          // offset: 0xa4 ordinal: 0x18
  USHORT SwapSupported : 1;                 // offset: 0xa4 ordinal: 0x19
  USHORT NodeInserted : 1;                  // offset: 0xa4 ordinal: 0x1a
  USHORT StackNotified : 1;                 // offset: 0xa4 ordinal: 0x1b
  USHORT Spare0 : 5;                        // offset: 0xa4 ordinal: 0x1c
  UCHAR AdriftMdls : 1;                     // offset: 0xa6 ordinal: 0x1d
  UCHAR Spare1 : 7;                         // offset: 0xa6 ordinal: 0x1e
  UCHAR Spare2 : 8;                         // offset: 0xa7 ordinal: 0x1f
  ULONG PageHashPages;                      // offset: 0xa8 ordinal: 0x20
  ULONG PageHashPagesPeak;                  // offset: 0xac ordinal: 0x21
  ULONG *PageHash;                          // offset: 0xb0 ordinal: 0x22
  VOID *FileHandle;                         // offset: 0xb8 ordinal: 0x23
  ULONGLONG Lock;                           // offset: 0xc0 ordinal: 0x24
  struct _ETHREAD *LockOwner;               // offset: 0xc8 ordinal: 0x25
  struct _RTL_AVL_TREE FlowThroughReadRoot; // offset: 0xd0 ordinal: 0x26
  struct _MI_PARTITION *Partition;          // offset: 0xd8 ordinal: 0x27
  struct _RTL_BALANCED_NODE FileObjectNode; // offset: 0xe0 ordinal: 0x28
} _MMPAGING_FILE;

// 0x1b0 bytes (sizeof)
typedef struct _MMINPAGE_SUPPORT {
  struct _LIST_ENTRY ListEntry;     // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY ListHead;      // offset: 0x10 ordinal: 0x1
  struct _KEVENT Event;             // offset: 0x20 ordinal: 0x2
  struct _KEVENT CollidedEvent;     // offset: 0x38 ordinal: 0x3
  struct _IO_STATUS_BLOCK IoStatus; // offset: 0x50 ordinal: 0x4
  union _LARGE_INTEGER ReadOffset;  // offset: 0x60 ordinal: 0x5
  struct _KAPC_STATE ApcState;      // offset: 0x68 ordinal: 0x6
  struct _ETHREAD *Thread;          // offset: 0x98 ordinal: 0x7
  struct _MMPFN *LockedProtoPfn;    // offset: 0xa0 ordinal: 0x8
  struct _MMPTE PteContents;        // offset: 0xa8 ordinal: 0x9
  LONG WaitCount;                   // offset: 0xb0 ordinal: 0xa
  ULONG ByteCount;                  // offset: 0xb4 ordinal: 0xb
  union __anon_888 u3;              // offset: 0xb8 ordinal: 0xc
  union __anon_889 u1;              // offset: 0xbc ordinal: 0xd
  struct _FILE_OBJECT *FilePointer; // offset: 0xc0 ordinal: 0xe
  union {
    struct _CONTROL_AREA *ControlArea; // offset: 0xc8 ordinal: 0xf
    struct _SUBSECTION *Subsection;    // offset: 0xc8 ordinal: 0x10
  };
  VOID *Autoboost;           // offset: 0xd0 ordinal: 0x11
  VOID *FaultingAddress;     // offset: 0xd8 ordinal: 0x12
  struct _MMPTE *PointerPte; // offset: 0xe0 ordinal: 0x13
  struct _MMPTE *BasePte;    // offset: 0xe8 ordinal: 0x14
  struct _MMPFN *Pfn;        // offset: 0xf0 ordinal: 0x15
  struct _MDL *PrefetchMdl;  // offset: 0xf8 ordinal: 0x16
  struct _MDL Mdl;           // offset: 0x100 ordinal: 0x17
  union {
    ULONGLONG Page[16]; // offset: 0x130 ordinal: 0x18
    struct _MMINPAGE_SUPPORT_FLOW_THROUGH
        FlowThrough; // offset: 0x130 ordinal: 0x19
  };
} _MMINPAGE_SUPPORT;

// 0x28 bytes (sizeof)
typedef struct _MI_VAD_EVENT_BLOCK {
  struct _MI_VAD_EVENT_BLOCK *Next; // offset: 0x0 ordinal: 0x0
  ULONG WaitReason;                 // offset: 0x8 ordinal: 0x1
  union {
    struct _KGATE Gate;                          // offset: 0x10 ordinal: 0x2
    struct _MMADDRESS_LIST SecureInfo;           // offset: 0x10 ordinal: 0x3
    struct _RTL_BITMAP_EX BitMap;                // offset: 0x10 ordinal: 0x4
    struct _MMINPAGE_SUPPORT *InPageSupport;     // offset: 0x10 ordinal: 0x5
    struct _MI_LARGEPAGE_MEMORY_INFO *LargePage; // offset: 0x10 ordinal: 0x6
    struct _ETHREAD *CreatingThread;             // offset: 0x10 ordinal: 0x7
  };
} _MI_VAD_EVENT_BLOCK;

// 0x1838 bytes (sizeof)
typedef struct _TEB {
  struct _NT_TIB NtTib;                         // offset: 0x0 ordinal: 0x0
  VOID *EnvironmentPointer;                     // offset: 0x38 ordinal: 0x1
  struct _CLIENT_ID ClientId;                   // offset: 0x40 ordinal: 0x2
  VOID *ActiveRpcHandle;                        // offset: 0x50 ordinal: 0x3
  VOID *ThreadLocalStoragePointer;              // offset: 0x58 ordinal: 0x4
  struct _PEB *ProcessEnvironmentBlock;         // offset: 0x60 ordinal: 0x5
  ULONG LastErrorValue;                         // offset: 0x68 ordinal: 0x6
  ULONG CountOfOwnedCriticalSections;           // offset: 0x6c ordinal: 0x7
  VOID *CsrClientThread;                        // offset: 0x70 ordinal: 0x8
  VOID *Win32ThreadInfo;                        // offset: 0x78 ordinal: 0x9
  ULONG User32Reserved[26];                     // offset: 0x80 ordinal: 0xa
  ULONG UserReserved[5];                        // offset: 0xe8 ordinal: 0xb
  VOID *WOW32Reserved;                          // offset: 0x100 ordinal: 0xc
  ULONG CurrentLocale;                          // offset: 0x108 ordinal: 0xd
  ULONG FpSoftwareStatusRegister;               // offset: 0x10c ordinal: 0xe
  VOID *ReservedForDebuggerInstrumentation[16]; // offset: 0x110 ordinal: 0xf
  VOID *SystemReserved1[38];                    // offset: 0x190 ordinal: 0x10
  LONG ExceptionCode;                           // offset: 0x2c0 ordinal: 0x11
  UCHAR Padding0[4];                            // offset: 0x2c4 ordinal: 0x12
  struct _ACTIVATION_CONTEXT_STACK
      *ActivationContextStackPointer;          // offset: 0x2c8 ordinal: 0x13
  ULONGLONG InstrumentationCallbackSp;         // offset: 0x2d0 ordinal: 0x14
  ULONGLONG InstrumentationCallbackPreviousPc; // offset: 0x2d8 ordinal: 0x15
  ULONGLONG InstrumentationCallbackPreviousSp; // offset: 0x2e0 ordinal: 0x16
  ULONG TxFsContext;                           // offset: 0x2e8 ordinal: 0x17
  UCHAR InstrumentationCallbackDisabled;       // offset: 0x2ec ordinal: 0x18
  UCHAR Padding1[3];                           // offset: 0x2ed ordinal: 0x19
  struct _GDI_TEB_BATCH GdiTebBatch;           // offset: 0x2f0 ordinal: 0x1a
  struct _CLIENT_ID RealClientId;              // offset: 0x7d8 ordinal: 0x1b
  VOID *GdiCachedProcessHandle;                // offset: 0x7e8 ordinal: 0x1c
  ULONG GdiClientPID;                          // offset: 0x7f0 ordinal: 0x1d
  ULONG GdiClientTID;                          // offset: 0x7f4 ordinal: 0x1e
  VOID *GdiThreadLocalInfo;                    // offset: 0x7f8 ordinal: 0x1f
  ULONGLONG Win32ClientInfo[62];               // offset: 0x800 ordinal: 0x20
  VOID *glDispatchTable[233];                  // offset: 0x9f0 ordinal: 0x21
  ULONGLONG glReserved1[29];                   // offset: 0x1138 ordinal: 0x22
  VOID *glReserved2;                           // offset: 0x1220 ordinal: 0x23
  VOID *glSectionInfo;                         // offset: 0x1228 ordinal: 0x24
  VOID *glSection;                             // offset: 0x1230 ordinal: 0x25
  VOID *glTable;                               // offset: 0x1238 ordinal: 0x26
  VOID *glCurrentRC;                           // offset: 0x1240 ordinal: 0x27
  VOID *glContext;                             // offset: 0x1248 ordinal: 0x28
  ULONG LastStatusValue;                       // offset: 0x1250 ordinal: 0x29
  UCHAR Padding2[4];                           // offset: 0x1254 ordinal: 0x2a
  struct _UNICODE_STRING StaticUnicodeString;  // offset: 0x1258 ordinal: 0x2b
  WCHAR StaticUnicodeBuffer[261];              // offset: 0x1268 ordinal: 0x2c
  UCHAR Padding3[6];                           // offset: 0x1472 ordinal: 0x2d
  VOID *DeallocationStack;                     // offset: 0x1478 ordinal: 0x2e
  VOID *TlsSlots[64];                          // offset: 0x1480 ordinal: 0x2f
  struct _LIST_ENTRY TlsLinks;                 // offset: 0x1680 ordinal: 0x30
  VOID *Vdm;                                   // offset: 0x1690 ordinal: 0x31
  VOID *ReservedForNtRpc;                      // offset: 0x1698 ordinal: 0x32
  VOID *DbgSsReserved[2];                      // offset: 0x16a0 ordinal: 0x33
  ULONG HardErrorMode;                         // offset: 0x16b0 ordinal: 0x34
  UCHAR Padding4[4];                           // offset: 0x16b4 ordinal: 0x35
  VOID *Instrumentation[11];                   // offset: 0x16b8 ordinal: 0x36
  struct _GUID ActivityId;                     // offset: 0x1710 ordinal: 0x37
  VOID *SubProcessTag;                         // offset: 0x1720 ordinal: 0x38
  VOID *PerflibData;                           // offset: 0x1728 ordinal: 0x39
  VOID *EtwTraceData;                          // offset: 0x1730 ordinal: 0x3a
  VOID *WinSockData;                           // offset: 0x1738 ordinal: 0x3b
  ULONG GdiBatchCount;                         // offset: 0x1740 ordinal: 0x3c
  union {
    struct _PROCESSOR_NUMBER
        CurrentIdealProcessor; // offset: 0x1744 ordinal: 0x3d
    ULONG IdealProcessorValue; // offset: 0x1744 ordinal: 0x3e
    UCHAR ReservedPad0;        // offset: 0x1744 ordinal: 0x3f
  };
  UCHAR ReservedPad1;                    // offset: 0x1745 ordinal: 0x40
  UCHAR ReservedPad2;                    // offset: 0x1746 ordinal: 0x41
  UCHAR IdealProcessor;                  // offset: 0x1747 ordinal: 0x42
  ULONG GuaranteedStackBytes;            // offset: 0x1748 ordinal: 0x43
  UCHAR Padding5[4];                     // offset: 0x174c ordinal: 0x44
  VOID *ReservedForPerf;                 // offset: 0x1750 ordinal: 0x45
  VOID *ReservedForOle;                  // offset: 0x1758 ordinal: 0x46
  ULONG WaitingOnLoaderLock;             // offset: 0x1760 ordinal: 0x47
  UCHAR Padding6[4];                     // offset: 0x1764 ordinal: 0x48
  VOID *SavedPriorityState;              // offset: 0x1768 ordinal: 0x49
  ULONGLONG ReservedForCodeCoverage;     // offset: 0x1770 ordinal: 0x4a
  VOID *ThreadPoolData;                  // offset: 0x1778 ordinal: 0x4b
  VOID **TlsExpansionSlots;              // offset: 0x1780 ordinal: 0x4c
  VOID *DeallocationBStore;              // offset: 0x1788 ordinal: 0x4d
  VOID *BStoreLimit;                     // offset: 0x1790 ordinal: 0x4e
  ULONG MuiGeneration;                   // offset: 0x1798 ordinal: 0x4f
  ULONG IsImpersonating;                 // offset: 0x179c ordinal: 0x50
  VOID *NlsCache;                        // offset: 0x17a0 ordinal: 0x51
  VOID *pShimData;                       // offset: 0x17a8 ordinal: 0x52
  USHORT HeapVirtualAffinity;            // offset: 0x17b0 ordinal: 0x53
  USHORT LowFragHeapDataSlot;            // offset: 0x17b2 ordinal: 0x54
  UCHAR Padding7[4];                     // offset: 0x17b4 ordinal: 0x55
  VOID *CurrentTransactionHandle;        // offset: 0x17b8 ordinal: 0x56
  struct _TEB_ACTIVE_FRAME *ActiveFrame; // offset: 0x17c0 ordinal: 0x57
  VOID *FlsData;                         // offset: 0x17c8 ordinal: 0x58
  VOID *PreferredLanguages;              // offset: 0x17d0 ordinal: 0x59
  VOID *UserPrefLanguages;               // offset: 0x17d8 ordinal: 0x5a
  VOID *MergedPrefLanguages;             // offset: 0x17e0 ordinal: 0x5b
  ULONG MuiImpersonation;                // offset: 0x17e8 ordinal: 0x5c
  union {
    USHORT CrossTebFlags;          // offset: 0x17ec ordinal: 0x5d
    USHORT SpareCrossTebBits : 16; // offset: 0x17ec ordinal: 0x5e
  };
  union {
    USHORT SameTebFlags;      // offset: 0x17ee ordinal: 0x5f
    USHORT SafeThunkCall : 1; // offset: 0x17ee ordinal: 0x60
  };
  USHORT InDebugPrint : 1;           // offset: 0x17ee ordinal: 0x61
  USHORT HasFiberData : 1;           // offset: 0x17ee ordinal: 0x62
  USHORT SkipThreadAttach : 1;       // offset: 0x17ee ordinal: 0x63
  USHORT WerInShipAssertCode : 1;    // offset: 0x17ee ordinal: 0x64
  USHORT RanProcessInit : 1;         // offset: 0x17ee ordinal: 0x65
  USHORT ClonedThread : 1;           // offset: 0x17ee ordinal: 0x66
  USHORT SuppressDebugMsg : 1;       // offset: 0x17ee ordinal: 0x67
  USHORT DisableUserStackWalk : 1;   // offset: 0x17ee ordinal: 0x68
  USHORT RtlExceptionAttached : 1;   // offset: 0x17ee ordinal: 0x69
  USHORT InitialThread : 1;          // offset: 0x17ee ordinal: 0x6a
  USHORT SessionAware : 1;           // offset: 0x17ee ordinal: 0x6b
  USHORT LoadOwner : 1;              // offset: 0x17ee ordinal: 0x6c
  USHORT LoaderWorker : 1;           // offset: 0x17ee ordinal: 0x6d
  USHORT SpareSameTebBits : 2;       // offset: 0x17ee ordinal: 0x6e
  VOID *TxnScopeEnterCallback;       // offset: 0x17f0 ordinal: 0x6f
  VOID *TxnScopeExitCallback;        // offset: 0x17f8 ordinal: 0x70
  VOID *TxnScopeContext;             // offset: 0x1800 ordinal: 0x71
  ULONG LockCount;                   // offset: 0x1808 ordinal: 0x72
  LONG WowTebOffset;                 // offset: 0x180c ordinal: 0x73
  VOID *ResourceRetValue;            // offset: 0x1810 ordinal: 0x74
  VOID *ReservedForWdf;              // offset: 0x1818 ordinal: 0x75
  ULONGLONG ReservedForCrt;          // offset: 0x1820 ordinal: 0x76
  struct _GUID EffectiveContainerId; // offset: 0x1828 ordinal: 0x77
} _TEB;

// 0x330 bytes (sizeof)
typedef struct _XSTATE_CONFIGURATION {
  ULONGLONG EnabledFeatures;           // offset: 0x0 ordinal: 0x0
  ULONGLONG EnabledVolatileFeatures;   // offset: 0x8 ordinal: 0x1
  ULONG Size;                          // offset: 0x10 ordinal: 0x2
  ULONG OptimizedSave : 1;             // offset: 0x14 ordinal: 0x3
  ULONG CompactionEnabled : 1;         // offset: 0x14 ordinal: 0x4
  struct _XSTATE_FEATURE Features[64]; // offset: 0x18 ordinal: 0x5
  ULONGLONG EnabledSupervisorFeatures; // offset: 0x218 ordinal: 0x6
  ULONGLONG AlignedFeatures;           // offset: 0x220 ordinal: 0x7
  ULONG AllFeatureSize;                // offset: 0x228 ordinal: 0x8
  ULONG AllFeatures[64];               // offset: 0x22c ordinal: 0x9
} _XSTATE_CONFIGURATION;

// 0xc0 bytes (sizeof)
typedef struct _MI_STANDBY_STATE {
  ULONGLONG TransitionSharedPages;        // offset: 0x0 ordinal: 0x0
  ULONGLONG TransitionSharedPagesPeak[3]; // offset: 0x8 ordinal: 0x1
  ULONGLONG FirstDecayPage;               // offset: 0x20 ordinal: 0x2
  union _SLIST_HEADER PfnDecayFreeSList;  // offset: 0x30 ordinal: 0x3
  struct _MM_PAGE_ACCESS_INFO_HEADER
      *PfnRepurposeLog;                 // offset: 0x40 ordinal: 0x4
  struct _KDPC AllocatePfnRepurposeDpc; // offset: 0x48 ordinal: 0x5
} _MI_STANDBY_STATE;

// 0x1bc0 bytes (sizeof)
typedef struct _MI_SYSTEM_INFORMATION {
  struct _MI_POOL_STATE Pools;                // offset: 0x0 ordinal: 0x0
  struct _MI_SECTION_STATE Sections;          // offset: 0x100 ordinal: 0x1
  struct _MI_SYSTEM_IMAGE_STATE SystemImages; // offset: 0x380 ordinal: 0x2
  struct _MI_SESSION_STATE Sessions;          // offset: 0x430 ordinal: 0x3
  struct _MI_PROCESS_STATE Processes;         // offset: 0x4c0 ordinal: 0x4
  struct _MI_HARDWARE_STATE Hardware;         // offset: 0x520 ordinal: 0x5
  struct _MI_SYSTEM_VA_STATE SystemVa;        // offset: 0x600 ordinal: 0x6
  struct _MI_COMBINE_STATE PageCombines;      // offset: 0x8c0 ordinal: 0x7
  struct _MI_PARTITION_STATE Partitions;      // offset: 0xa60 ordinal: 0x8
  struct _MI_SHUTDOWN_STATE Shutdowns;        // offset: 0xab8 ordinal: 0x9
  struct _MI_ERROR_STATE Errors;              // offset: 0xb38 ordinal: 0xa
  struct _MI_ACCESS_LOG_STATE AccessLog;      // offset: 0xc00 ordinal: 0xb
  struct _MI_DEBUGGER_STATE Debugger;         // offset: 0xc80 ordinal: 0xc
  struct _MI_STANDBY_STATE Standby;           // offset: 0xdc0 ordinal: 0xd
  struct _MI_SYSTEM_PTE_STATE SystemPtes;     // offset: 0xe80 ordinal: 0xe
  struct _MI_IO_PAGE_STATE IoPages;           // offset: 0x1000 ordinal: 0xf
  struct _MI_PAGING_IO_STATE PagingIo;        // offset: 0x1060 ordinal: 0x10
  struct _MI_COMMON_PAGE_STATE CommonPages;   // offset: 0x10b0 ordinal: 0x11
  struct _MI_SYSTEM_TRIM_STATE Trims;         // offset: 0x1140 ordinal: 0x12
  struct _MI_RESAVAIL_TRACKER ResTrack;       // offset: 0x1180 ordinal: 0x13
  ULONGLONG Cookie;                           // offset: 0x1540 ordinal: 0x14
  LONG ZeroingDisabled;                       // offset: 0x1548 ordinal: 0x15
  VOID **BootRegistryRuns;                    // offset: 0x1550 ordinal: 0x16
  UCHAR FullyInitialized;                     // offset: 0x1558 ordinal: 0x17
  UCHAR SafeBooted;                           // offset: 0x1559 ordinal: 0x18
  struct _RTL_BITMAP_EX LargePfnBitMap;       // offset: 0x1560 ordinal: 0x19
  struct _TlgProvider_t *TraceLogging;        // offset: 0x1570 ordinal: 0x1a
  struct _MI_VISIBLE_STATE Vs;                // offset: 0x1580 ordinal: 0x1b
} _MI_SYSTEM_INFORMATION;

// 0x708 bytes (sizeof)
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
  ULONG AitSamplingValue;              // offset: 0x248 ordinal: 0xc
  ULONG AppCompatFlag;                 // offset: 0x24c ordinal: 0xd
  ULONGLONG RNGSeedVersion;            // offset: 0x250 ordinal: 0xe
  ULONG GlobalValidationRunlevel;      // offset: 0x258 ordinal: 0xf
  LONG TimeZoneBiasStamp;              // offset: 0x25c ordinal: 0x10
  ULONG NtBuildNumber;                 // offset: 0x260 ordinal: 0x11
  enum _NT_PRODUCT_TYPE NtProductType; // offset: 0x264 ordinal: 0x12
  UCHAR ProductTypeIsValid;            // offset: 0x268 ordinal: 0x13
  UCHAR Reserved0[1];                  // offset: 0x269 ordinal: 0x14
  USHORT NativeProcessorArchitecture;  // offset: 0x26a ordinal: 0x15
  ULONG NtMajorVersion;                // offset: 0x26c ordinal: 0x16
  ULONG NtMinorVersion;                // offset: 0x270 ordinal: 0x17
  UCHAR ProcessorFeatures[64];         // offset: 0x274 ordinal: 0x18
  ULONG Reserved1;                     // offset: 0x2b4 ordinal: 0x19
  ULONG Reserved3;                     // offset: 0x2b8 ordinal: 0x1a
  ULONG TimeSlip;                      // offset: 0x2bc ordinal: 0x1b
  enum _ALTERNATIVE_ARCHITECTURE_TYPE
      AlternativeArchitecture;               // offset: 0x2c0 ordinal: 0x1c
  ULONG BootId;                              // offset: 0x2c4 ordinal: 0x1d
  union _LARGE_INTEGER SystemExpirationDate; // offset: 0x2c8 ordinal: 0x1e
  ULONG SuiteMask;                           // offset: 0x2d0 ordinal: 0x1f
  UCHAR KdDebuggerEnabled;                   // offset: 0x2d4 ordinal: 0x20
  union {
    UCHAR MitigationPolicies;  // offset: 0x2d5 ordinal: 0x21
    UCHAR NXSupportPolicy : 2; // offset: 0x2d5 ordinal: 0x22
  };
  UCHAR SEHValidationPolicy : 2;         // offset: 0x2d5 ordinal: 0x23
  UCHAR CurDirDevicesSkippedForDlls : 2; // offset: 0x2d5 ordinal: 0x24
  UCHAR Reserved : 2;                    // offset: 0x2d5 ordinal: 0x25
  UCHAR Reserved6[2];                    // offset: 0x2d6 ordinal: 0x26
  ULONG ActiveConsoleId;                 // offset: 0x2d8 ordinal: 0x27
  ULONG DismountCount;                   // offset: 0x2dc ordinal: 0x28
  ULONG ComPlusPackage;                  // offset: 0x2e0 ordinal: 0x29
  ULONG LastSystemRITEventTickCount;     // offset: 0x2e4 ordinal: 0x2a
  ULONG NumberOfPhysicalPages;           // offset: 0x2e8 ordinal: 0x2b
  UCHAR SafeBootMode;                    // offset: 0x2ec ordinal: 0x2c
  UCHAR Reserved12[3];                   // offset: 0x2ed ordinal: 0x2d
  union {
    ULONG SharedDataFlags;         // offset: 0x2f0 ordinal: 0x2e
    ULONG DbgErrorPortPresent : 1; // offset: 0x2f0 ordinal: 0x2f
  };
  ULONG DbgElevationEnabled : 1;       // offset: 0x2f0 ordinal: 0x30
  ULONG DbgVirtEnabled : 1;            // offset: 0x2f0 ordinal: 0x31
  ULONG DbgInstallerDetectEnabled : 1; // offset: 0x2f0 ordinal: 0x32
  ULONG DbgLkgEnabled : 1;             // offset: 0x2f0 ordinal: 0x33
  ULONG DbgDynProcessorEnabled : 1;    // offset: 0x2f0 ordinal: 0x34
  ULONG DbgConsoleBrokerEnabled : 1;   // offset: 0x2f0 ordinal: 0x35
  ULONG DbgSecureBootEnabled : 1;      // offset: 0x2f0 ordinal: 0x36
  ULONG DbgMultiSessionSku : 1;        // offset: 0x2f0 ordinal: 0x37
  ULONG SpareBits : 23;                // offset: 0x2f0 ordinal: 0x38
  ULONG DataFlagsPad[1];               // offset: 0x2f4 ordinal: 0x39
  ULONGLONG TestRetInstruction;        // offset: 0x2f8 ordinal: 0x3a
  LONGLONG QpcFrequency;               // offset: 0x300 ordinal: 0x3b
  ULONGLONG SystemCallPad[3];          // offset: 0x308 ordinal: 0x3c
  union {
    struct _KSYSTEM_TIME TickCount;    // offset: 0x320 ordinal: 0x3d
    ULONGLONG TickCountQuad;           // offset: 0x320 ordinal: 0x3e
    ULONG ReservedTickCountOverlay[3]; // offset: 0x320 ordinal: 0x3f
  };
  ULONG TickCountPad[1];                      // offset: 0x32c ordinal: 0x40
  ULONG Cookie;                               // offset: 0x330 ordinal: 0x41
  ULONG CookiePad[1];                         // offset: 0x334 ordinal: 0x42
  LONGLONG ConsoleSessionForegroundProcessId; // offset: 0x338 ordinal: 0x43
  ULONGLONG TimeUpdateLock;                   // offset: 0x340 ordinal: 0x44
  ULONGLONG BaselineSystemTimeQpc;            // offset: 0x348 ordinal: 0x45
  ULONGLONG BaselineInterruptTimeQpc;         // offset: 0x350 ordinal: 0x46
  ULONGLONG QpcSystemTimeIncrement;           // offset: 0x358 ordinal: 0x47
  ULONGLONG QpcInterruptTimeIncrement;        // offset: 0x360 ordinal: 0x48
  UCHAR QpcSystemTimeIncrementShift;          // offset: 0x368 ordinal: 0x49
  UCHAR QpcInterruptTimeIncrementShift;       // offset: 0x369 ordinal: 0x4a
  USHORT UnparkedProcessorCount;              // offset: 0x36a ordinal: 0x4b
  UCHAR Reserved8[20];                        // offset: 0x36c ordinal: 0x4c
  USHORT UserModeGlobalLogger[16];            // offset: 0x380 ordinal: 0x4d
  ULONG ImageFileExecutionOptions;            // offset: 0x3a0 ordinal: 0x4e
  ULONG LangGenerationCount;                  // offset: 0x3a4 ordinal: 0x4f
  ULONGLONG Reserved4;                        // offset: 0x3a8 ordinal: 0x50
  ULONGLONG InterruptTimeBias;                // offset: 0x3b0 ordinal: 0x51
  ULONGLONG QpcBias;                          // offset: 0x3b8 ordinal: 0x52
  ULONG ActiveProcessorCount;                 // offset: 0x3c0 ordinal: 0x53
  UCHAR ActiveGroupCount;                     // offset: 0x3c4 ordinal: 0x54
  UCHAR Reserved9;                            // offset: 0x3c5 ordinal: 0x55
  union {
    USHORT QpcData;         // offset: 0x3c6 ordinal: 0x56
    UCHAR QpcBypassEnabled; // offset: 0x3c6 ordinal: 0x57
  };
  UCHAR QpcShift; // offset: 0x3c7 ordinal: 0x58
  union _LARGE_INTEGER
      TimeZoneBiasEffectiveStart;                // offset: 0x3c8 ordinal: 0x59
  union _LARGE_INTEGER TimeZoneBiasEffectiveEnd; // offset: 0x3d0 ordinal: 0x5a
  struct _XSTATE_CONFIGURATION XState;           // offset: 0x3d8 ordinal: 0x5b
} _KUSER_SHARED_DATA;

// 0x10 bytes (sizeof)
typedef struct LIST_ENTRY64 {
  ULONGLONG Flink; // offset: 0x0 ordinal: 0x0
  ULONGLONG Blink; // offset: 0x8 ordinal: 0x1
} LIST_ENTRY64;

// 0x388 bytes (sizeof)
typedef struct _PEB64 {
  UCHAR InheritedAddressSpace;    // offset: 0x0 ordinal: 0x0
  UCHAR ReadImageFileExecOptions; // offset: 0x1 ordinal: 0x1
  UCHAR BeingDebugged;            // offset: 0x2 ordinal: 0x2
  union {
    UCHAR BitField;                // offset: 0x3 ordinal: 0x3
    UCHAR ImageUsesLargePages : 1; // offset: 0x3 ordinal: 0x4
  };
  UCHAR IsProtectedProcess : 1;           // offset: 0x3 ordinal: 0x5
  UCHAR IsImageDynamicallyRelocated : 1;  // offset: 0x3 ordinal: 0x6
  UCHAR SkipPatchingUser32Forwarders : 1; // offset: 0x3 ordinal: 0x7
  UCHAR IsPackagedProcess : 1;            // offset: 0x3 ordinal: 0x8
  UCHAR IsAppContainer : 1;               // offset: 0x3 ordinal: 0x9
  UCHAR IsProtectedProcessLight : 1;      // offset: 0x3 ordinal: 0xa
  UCHAR SpareBits : 1;                    // offset: 0x3 ordinal: 0xb
  UCHAR Padding0[4];                      // offset: 0x4 ordinal: 0xc
  ULONGLONG Mutant;                       // offset: 0x8 ordinal: 0xd
  ULONGLONG ImageBaseAddress;             // offset: 0x10 ordinal: 0xe
  ULONGLONG Ldr;                          // offset: 0x18 ordinal: 0xf
  ULONGLONG ProcessParameters;            // offset: 0x20 ordinal: 0x10
  ULONGLONG SubSystemData;                // offset: 0x28 ordinal: 0x11
  ULONGLONG ProcessHeap;                  // offset: 0x30 ordinal: 0x12
  ULONGLONG FastPebLock;                  // offset: 0x38 ordinal: 0x13
  ULONGLONG AtlThunkSListPtr;             // offset: 0x40 ordinal: 0x14
  ULONGLONG IFEOKey;                      // offset: 0x48 ordinal: 0x15
  union {
    ULONG CrossProcessFlags; // offset: 0x50 ordinal: 0x16
    ULONG ProcessInJob : 1;  // offset: 0x50 ordinal: 0x17
  };
  ULONG ProcessInitializing : 1; // offset: 0x50 ordinal: 0x18
  ULONG ProcessUsingVEH : 1;     // offset: 0x50 ordinal: 0x19
  ULONG ProcessUsingVCH : 1;     // offset: 0x50 ordinal: 0x1a
  ULONG ProcessUsingFTH : 1;     // offset: 0x50 ordinal: 0x1b
  ULONG ReservedBits0 : 27;      // offset: 0x50 ordinal: 0x1c
  UCHAR Padding1[4];             // offset: 0x54 ordinal: 0x1d
  union {
    ULONGLONG KernelCallbackTable; // offset: 0x58 ordinal: 0x1e
    ULONGLONG UserSharedInfoPtr;   // offset: 0x58 ordinal: 0x1f
  };
  ULONG SystemReserved[1];                      // offset: 0x60 ordinal: 0x20
  ULONG AtlThunkSListPtr32;                     // offset: 0x64 ordinal: 0x21
  ULONGLONG ApiSetMap;                          // offset: 0x68 ordinal: 0x22
  ULONG TlsExpansionCounter;                    // offset: 0x70 ordinal: 0x23
  UCHAR Padding2[4];                            // offset: 0x74 ordinal: 0x24
  ULONGLONG TlsBitmap;                          // offset: 0x78 ordinal: 0x25
  ULONG TlsBitmapBits[2];                       // offset: 0x80 ordinal: 0x26
  ULONGLONG ReadOnlySharedMemoryBase;           // offset: 0x88 ordinal: 0x27
  ULONGLONG SparePvoid0;                        // offset: 0x90 ordinal: 0x28
  ULONGLONG ReadOnlyStaticServerData;           // offset: 0x98 ordinal: 0x29
  ULONGLONG AnsiCodePageData;                   // offset: 0xa0 ordinal: 0x2a
  ULONGLONG OemCodePageData;                    // offset: 0xa8 ordinal: 0x2b
  ULONGLONG UnicodeCaseTableData;               // offset: 0xb0 ordinal: 0x2c
  ULONG NumberOfProcessors;                     // offset: 0xb8 ordinal: 0x2d
  ULONG NtGlobalFlag;                           // offset: 0xbc ordinal: 0x2e
  union _LARGE_INTEGER CriticalSectionTimeout;  // offset: 0xc0 ordinal: 0x2f
  ULONGLONG HeapSegmentReserve;                 // offset: 0xc8 ordinal: 0x30
  ULONGLONG HeapSegmentCommit;                  // offset: 0xd0 ordinal: 0x31
  ULONGLONG HeapDeCommitTotalFreeThreshold;     // offset: 0xd8 ordinal: 0x32
  ULONGLONG HeapDeCommitFreeBlockThreshold;     // offset: 0xe0 ordinal: 0x33
  ULONG NumberOfHeaps;                          // offset: 0xe8 ordinal: 0x34
  ULONG MaximumNumberOfHeaps;                   // offset: 0xec ordinal: 0x35
  ULONGLONG ProcessHeaps;                       // offset: 0xf0 ordinal: 0x36
  ULONGLONG GdiSharedHandleTable;               // offset: 0xf8 ordinal: 0x37
  ULONGLONG ProcessStarterHelper;               // offset: 0x100 ordinal: 0x38
  ULONG GdiDCAttributeList;                     // offset: 0x108 ordinal: 0x39
  UCHAR Padding3[4];                            // offset: 0x10c ordinal: 0x3a
  ULONGLONG LoaderLock;                         // offset: 0x110 ordinal: 0x3b
  ULONG OSMajorVersion;                         // offset: 0x118 ordinal: 0x3c
  ULONG OSMinorVersion;                         // offset: 0x11c ordinal: 0x3d
  USHORT OSBuildNumber;                         // offset: 0x120 ordinal: 0x3e
  USHORT OSCSDVersion;                          // offset: 0x122 ordinal: 0x3f
  ULONG OSPlatformId;                           // offset: 0x124 ordinal: 0x40
  ULONG ImageSubsystem;                         // offset: 0x128 ordinal: 0x41
  ULONG ImageSubsystemMajorVersion;             // offset: 0x12c ordinal: 0x42
  ULONG ImageSubsystemMinorVersion;             // offset: 0x130 ordinal: 0x43
  UCHAR Padding4[4];                            // offset: 0x134 ordinal: 0x44
  ULONGLONG ActiveProcessAffinityMask;          // offset: 0x138 ordinal: 0x45
  ULONG GdiHandleBuffer[60];                    // offset: 0x140 ordinal: 0x46
  ULONGLONG PostProcessInitRoutine;             // offset: 0x230 ordinal: 0x47
  ULONGLONG TlsExpansionBitmap;                 // offset: 0x238 ordinal: 0x48
  ULONG TlsExpansionBitmapBits[32];             // offset: 0x240 ordinal: 0x49
  ULONG SessionId;                              // offset: 0x2c0 ordinal: 0x4a
  UCHAR Padding5[4];                            // offset: 0x2c4 ordinal: 0x4b
  union _ULARGE_INTEGER AppCompatFlags;         // offset: 0x2c8 ordinal: 0x4c
  union _ULARGE_INTEGER AppCompatFlagsUser;     // offset: 0x2d0 ordinal: 0x4d
  ULONGLONG pShimData;                          // offset: 0x2d8 ordinal: 0x4e
  ULONGLONG AppCompatInfo;                      // offset: 0x2e0 ordinal: 0x4f
  struct _STRING64 CSDVersion;                  // offset: 0x2e8 ordinal: 0x50
  ULONGLONG ActivationContextData;              // offset: 0x2f8 ordinal: 0x51
  ULONGLONG ProcessAssemblyStorageMap;          // offset: 0x300 ordinal: 0x52
  ULONGLONG SystemDefaultActivationContextData; // offset: 0x308 ordinal: 0x53
  ULONGLONG SystemAssemblyStorageMap;           // offset: 0x310 ordinal: 0x54
  ULONGLONG MinimumStackCommit;                 // offset: 0x318 ordinal: 0x55
  ULONGLONG FlsCallback;                        // offset: 0x320 ordinal: 0x56
  struct LIST_ENTRY64 FlsListHead;              // offset: 0x328 ordinal: 0x57
  ULONGLONG FlsBitmap;                          // offset: 0x338 ordinal: 0x58
  ULONG FlsBitmapBits[4];                       // offset: 0x340 ordinal: 0x59
  ULONG FlsHighIndex;                           // offset: 0x350 ordinal: 0x5a
  ULONGLONG WerRegistrationData;                // offset: 0x358 ordinal: 0x5b
  ULONGLONG WerShipAssertPtr;                   // offset: 0x360 ordinal: 0x5c
  ULONGLONG pUnused;                            // offset: 0x368 ordinal: 0x5d
  ULONGLONG pImageHeaderHash;                   // offset: 0x370 ordinal: 0x5e
  union {
    ULONG TracingFlags;           // offset: 0x378 ordinal: 0x5f
    ULONG HeapTracingEnabled : 1; // offset: 0x378 ordinal: 0x60
  };
  ULONG CritSecTracingEnabled : 1;             // offset: 0x378 ordinal: 0x61
  ULONG LibLoaderTracingEnabled : 1;           // offset: 0x378 ordinal: 0x62
  ULONG SpareTracingBits : 29;                 // offset: 0x378 ordinal: 0x63
  UCHAR Padding6[4];                           // offset: 0x37c ordinal: 0x64
  ULONGLONG CsrServerReadOnlySharedMemoryBase; // offset: 0x380 ordinal: 0x65
} _PEB64;

// 0x1838 bytes (sizeof)
typedef struct _TEB64 {
  struct _NT_TIB64 NtTib;              // offset: 0x0 ordinal: 0x0
  ULONGLONG EnvironmentPointer;        // offset: 0x38 ordinal: 0x1
  struct _CLIENT_ID64 ClientId;        // offset: 0x40 ordinal: 0x2
  ULONGLONG ActiveRpcHandle;           // offset: 0x50 ordinal: 0x3
  ULONGLONG ThreadLocalStoragePointer; // offset: 0x58 ordinal: 0x4
  ULONGLONG ProcessEnvironmentBlock;   // offset: 0x60 ordinal: 0x5
  ULONG LastErrorValue;                // offset: 0x68 ordinal: 0x6
  ULONG CountOfOwnedCriticalSections;  // offset: 0x6c ordinal: 0x7
  ULONGLONG CsrClientThread;           // offset: 0x70 ordinal: 0x8
  ULONGLONG Win32ThreadInfo;           // offset: 0x78 ordinal: 0x9
  ULONG User32Reserved[26];            // offset: 0x80 ordinal: 0xa
  ULONG UserReserved[5];               // offset: 0xe8 ordinal: 0xb
  ULONGLONG WOW32Reserved;             // offset: 0x100 ordinal: 0xc
  ULONG CurrentLocale;                 // offset: 0x108 ordinal: 0xd
  ULONG FpSoftwareStatusRegister;      // offset: 0x10c ordinal: 0xe
  ULONGLONG
  ReservedForDebuggerInstrumentation[16];      // offset: 0x110 ordinal: 0xf
  ULONGLONG SystemReserved1[38];               // offset: 0x190 ordinal: 0x10
  LONG ExceptionCode;                          // offset: 0x2c0 ordinal: 0x11
  UCHAR Padding0[4];                           // offset: 0x2c4 ordinal: 0x12
  ULONGLONG ActivationContextStackPointer;     // offset: 0x2c8 ordinal: 0x13
  ULONGLONG InstrumentationCallbackSp;         // offset: 0x2d0 ordinal: 0x14
  ULONGLONG InstrumentationCallbackPreviousPc; // offset: 0x2d8 ordinal: 0x15
  ULONGLONG InstrumentationCallbackPreviousSp; // offset: 0x2e0 ordinal: 0x16
  ULONG TxFsContext;                           // offset: 0x2e8 ordinal: 0x17
  UCHAR InstrumentationCallbackDisabled;       // offset: 0x2ec ordinal: 0x18
  UCHAR Padding1[3];                           // offset: 0x2ed ordinal: 0x19
  struct _GDI_TEB_BATCH64 GdiTebBatch;         // offset: 0x2f0 ordinal: 0x1a
  struct _CLIENT_ID64 RealClientId;            // offset: 0x7d8 ordinal: 0x1b
  ULONGLONG GdiCachedProcessHandle;            // offset: 0x7e8 ordinal: 0x1c
  ULONG GdiClientPID;                          // offset: 0x7f0 ordinal: 0x1d
  ULONG GdiClientTID;                          // offset: 0x7f4 ordinal: 0x1e
  ULONGLONG GdiThreadLocalInfo;                // offset: 0x7f8 ordinal: 0x1f
  ULONGLONG Win32ClientInfo[62];               // offset: 0x800 ordinal: 0x20
  ULONGLONG glDispatchTable[233];              // offset: 0x9f0 ordinal: 0x21
  ULONGLONG glReserved1[29];                   // offset: 0x1138 ordinal: 0x22
  ULONGLONG glReserved2;                       // offset: 0x1220 ordinal: 0x23
  ULONGLONG glSectionInfo;                     // offset: 0x1228 ordinal: 0x24
  ULONGLONG glSection;                         // offset: 0x1230 ordinal: 0x25
  ULONGLONG glTable;                           // offset: 0x1238 ordinal: 0x26
  ULONGLONG glCurrentRC;                       // offset: 0x1240 ordinal: 0x27
  ULONGLONG glContext;                         // offset: 0x1248 ordinal: 0x28
  ULONG LastStatusValue;                       // offset: 0x1250 ordinal: 0x29
  UCHAR Padding2[4];                           // offset: 0x1254 ordinal: 0x2a
  struct _STRING64 StaticUnicodeString;        // offset: 0x1258 ordinal: 0x2b
  WCHAR StaticUnicodeBuffer[261];              // offset: 0x1268 ordinal: 0x2c
  UCHAR Padding3[6];                           // offset: 0x1472 ordinal: 0x2d
  ULONGLONG DeallocationStack;                 // offset: 0x1478 ordinal: 0x2e
  ULONGLONG TlsSlots[64];                      // offset: 0x1480 ordinal: 0x2f
  struct LIST_ENTRY64 TlsLinks;                // offset: 0x1680 ordinal: 0x30
  ULONGLONG Vdm;                               // offset: 0x1690 ordinal: 0x31
  ULONGLONG ReservedForNtRpc;                  // offset: 0x1698 ordinal: 0x32
  ULONGLONG DbgSsReserved[2];                  // offset: 0x16a0 ordinal: 0x33
  ULONG HardErrorMode;                         // offset: 0x16b0 ordinal: 0x34
  UCHAR Padding4[4];                           // offset: 0x16b4 ordinal: 0x35
  ULONGLONG Instrumentation[11];               // offset: 0x16b8 ordinal: 0x36
  struct _GUID ActivityId;                     // offset: 0x1710 ordinal: 0x37
  ULONGLONG SubProcessTag;                     // offset: 0x1720 ordinal: 0x38
  ULONGLONG PerflibData;                       // offset: 0x1728 ordinal: 0x39
  ULONGLONG EtwTraceData;                      // offset: 0x1730 ordinal: 0x3a
  ULONGLONG WinSockData;                       // offset: 0x1738 ordinal: 0x3b
  ULONG GdiBatchCount;                         // offset: 0x1740 ordinal: 0x3c
  union {
    struct _PROCESSOR_NUMBER
        CurrentIdealProcessor; // offset: 0x1744 ordinal: 0x3d
    ULONG IdealProcessorValue; // offset: 0x1744 ordinal: 0x3e
    UCHAR ReservedPad0;        // offset: 0x1744 ordinal: 0x3f
  };
  UCHAR ReservedPad1;                 // offset: 0x1745 ordinal: 0x40
  UCHAR ReservedPad2;                 // offset: 0x1746 ordinal: 0x41
  UCHAR IdealProcessor;               // offset: 0x1747 ordinal: 0x42
  ULONG GuaranteedStackBytes;         // offset: 0x1748 ordinal: 0x43
  UCHAR Padding5[4];                  // offset: 0x174c ordinal: 0x44
  ULONGLONG ReservedForPerf;          // offset: 0x1750 ordinal: 0x45
  ULONGLONG ReservedForOle;           // offset: 0x1758 ordinal: 0x46
  ULONG WaitingOnLoaderLock;          // offset: 0x1760 ordinal: 0x47
  UCHAR Padding6[4];                  // offset: 0x1764 ordinal: 0x48
  ULONGLONG SavedPriorityState;       // offset: 0x1768 ordinal: 0x49
  ULONGLONG ReservedForCodeCoverage;  // offset: 0x1770 ordinal: 0x4a
  ULONGLONG ThreadPoolData;           // offset: 0x1778 ordinal: 0x4b
  ULONGLONG TlsExpansionSlots;        // offset: 0x1780 ordinal: 0x4c
  ULONGLONG DeallocationBStore;       // offset: 0x1788 ordinal: 0x4d
  ULONGLONG BStoreLimit;              // offset: 0x1790 ordinal: 0x4e
  ULONG MuiGeneration;                // offset: 0x1798 ordinal: 0x4f
  ULONG IsImpersonating;              // offset: 0x179c ordinal: 0x50
  ULONGLONG NlsCache;                 // offset: 0x17a0 ordinal: 0x51
  ULONGLONG pShimData;                // offset: 0x17a8 ordinal: 0x52
  USHORT HeapVirtualAffinity;         // offset: 0x17b0 ordinal: 0x53
  USHORT LowFragHeapDataSlot;         // offset: 0x17b2 ordinal: 0x54
  UCHAR Padding7[4];                  // offset: 0x17b4 ordinal: 0x55
  ULONGLONG CurrentTransactionHandle; // offset: 0x17b8 ordinal: 0x56
  ULONGLONG ActiveFrame;              // offset: 0x17c0 ordinal: 0x57
  ULONGLONG FlsData;                  // offset: 0x17c8 ordinal: 0x58
  ULONGLONG PreferredLanguages;       // offset: 0x17d0 ordinal: 0x59
  ULONGLONG UserPrefLanguages;        // offset: 0x17d8 ordinal: 0x5a
  ULONGLONG MergedPrefLanguages;      // offset: 0x17e0 ordinal: 0x5b
  ULONG MuiImpersonation;             // offset: 0x17e8 ordinal: 0x5c
  union {
    USHORT CrossTebFlags;          // offset: 0x17ec ordinal: 0x5d
    USHORT SpareCrossTebBits : 16; // offset: 0x17ec ordinal: 0x5e
  };
  union {
    USHORT SameTebFlags;      // offset: 0x17ee ordinal: 0x5f
    USHORT SafeThunkCall : 1; // offset: 0x17ee ordinal: 0x60
  };
  USHORT InDebugPrint : 1;           // offset: 0x17ee ordinal: 0x61
  USHORT HasFiberData : 1;           // offset: 0x17ee ordinal: 0x62
  USHORT SkipThreadAttach : 1;       // offset: 0x17ee ordinal: 0x63
  USHORT WerInShipAssertCode : 1;    // offset: 0x17ee ordinal: 0x64
  USHORT RanProcessInit : 1;         // offset: 0x17ee ordinal: 0x65
  USHORT ClonedThread : 1;           // offset: 0x17ee ordinal: 0x66
  USHORT SuppressDebugMsg : 1;       // offset: 0x17ee ordinal: 0x67
  USHORT DisableUserStackWalk : 1;   // offset: 0x17ee ordinal: 0x68
  USHORT RtlExceptionAttached : 1;   // offset: 0x17ee ordinal: 0x69
  USHORT InitialThread : 1;          // offset: 0x17ee ordinal: 0x6a
  USHORT SessionAware : 1;           // offset: 0x17ee ordinal: 0x6b
  USHORT LoadOwner : 1;              // offset: 0x17ee ordinal: 0x6c
  USHORT LoaderWorker : 1;           // offset: 0x17ee ordinal: 0x6d
  USHORT SpareSameTebBits : 2;       // offset: 0x17ee ordinal: 0x6e
  ULONGLONG TxnScopeEnterCallback;   // offset: 0x17f0 ordinal: 0x6f
  ULONGLONG TxnScopeExitCallback;    // offset: 0x17f8 ordinal: 0x70
  ULONGLONG TxnScopeContext;         // offset: 0x1800 ordinal: 0x71
  ULONG LockCount;                   // offset: 0x1808 ordinal: 0x72
  LONG WowTebOffset;                 // offset: 0x180c ordinal: 0x73
  ULONGLONG ResourceRetValue;        // offset: 0x1810 ordinal: 0x74
  ULONGLONG ReservedForWdf;          // offset: 0x1818 ordinal: 0x75
  ULONGLONG ReservedForCrt;          // offset: 0x1820 ordinal: 0x76
  struct _GUID EffectiveContainerId; // offset: 0x1828 ordinal: 0x77
} _TEB64;
