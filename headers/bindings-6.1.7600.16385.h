// 0x0 bytes (sizeof)
typedef struct _ADAPTER_OBJECT {
} _ADAPTER_OBJECT;

// 0x0 bytes (sizeof)
typedef struct _VERIFIER_SHARED_EXPORT_THUNK {
} _VERIFIER_SHARED_EXPORT_THUNK;

// 0x18 bytes (sizeof)
typedef struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS {
  struct _VERIFIER_SHARED_EXPORT_THUNK
      *SharedExportThunks; // offset: 0x0 ordinal: 0x0
  struct _VERIFIER_SHARED_EXPORT_THUNK
      *PoolSharedExportThunks; // offset: 0x8 ordinal: 0x1
  struct _VERIFIER_SHARED_EXPORT_THUNK
      *OrderDependentSharedExportThunks; // offset: 0x10 ordinal: 0x2
} _VF_TARGET_ALL_SHARED_EXPORT_THUNKS;

// 0x0 bytes (sizeof)
typedef struct _CALLBACK_OBJECT {
} _CALLBACK_OBJECT;

// 0x0 bytes (sizeof)
typedef struct _HEAP_LOCAL_SEGMENT_INFO {
} _HEAP_LOCAL_SEGMENT_INFO;

// 0x0 bytes (sizeof)
typedef struct _ACTIVATION_CONTEXT_DATA {
} _ACTIVATION_CONTEXT_DATA;

// 0x8 bytes (sizeof)
typedef union __anon_1064 {
  struct _DEVICE_NODE *NextResourceDeviceNode; // offset: 0x0 ordinal: 0x0
} __anon_1064;

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

// 0x0 bytes (sizeof)
typedef struct _KTMNOTIFICATION_PACKET {
} _KTMNOTIFICATION_PACKET;

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
typedef struct _SCSI_REQUEST_BLOCK {
} _SCSI_REQUEST_BLOCK;

// 0x0 bytes (sizeof)
typedef struct _JOB_ACCESS_STATE {
} _JOB_ACCESS_STATE;

// 0x8 bytes (sizeof)
typedef struct __anon_569 {
  struct _SCSI_REQUEST_BLOCK *Srb; // offset: 0x0 ordinal: 0x0
} __anon_569;

// 0x0 bytes (sizeof)
typedef struct _PAGEFAULT_HISTORY {
} _PAGEFAULT_HISTORY;

// 0x0 bytes (sizeof)
typedef struct _EPROCESS_QUOTA_BLOCK {
} _EPROCESS_QUOTA_BLOCK;

// 0x8 bytes (sizeof)
typedef struct __anon_1178 {
  struct _FILE_OBJECT *FileObject; // offset: 0x0 ordinal: 0x0
} __anon_1178;

// 0x8 bytes (sizeof)
typedef struct _ARBITER_ADD_RESERVED_PARAMETERS {
  struct _DEVICE_OBJECT *ReserveDevice; // offset: 0x0 ordinal: 0x0
} _ARBITER_ADD_RESERVED_PARAMETERS;

// 0x0 bytes (sizeof)
typedef union _PSP_CPU_QUOTA_APC {
} _PSP_CPU_QUOTA_APC;

// 0x10 bytes (sizeof)
typedef struct _SLIST_ENTRY {
  struct _SLIST_ENTRY *Next; // offset: 0x0 ordinal: 0x0
} _SLIST_ENTRY;

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
typedef struct __anon_1218 {
  SHORT Type;           // offset: 0x0 ordinal: 0x0
  SHORT DataInfoOffset; // offset: 0x2 ordinal: 0x1
} __anon_1218;

// 0x4 bytes (sizeof)
typedef struct __anon_1216 {
  SHORT DataLength;  // offset: 0x0 ordinal: 0x0
  SHORT TotalLength; // offset: 0x2 ordinal: 0x1
} __anon_1216;

typedef unsigned char UCHAR;

typedef long LONG;

// 0x8 bytes (sizeof)
typedef struct _SINGLE_LIST_ENTRY {
  struct _SINGLE_LIST_ENTRY *Next; // offset: 0x0 ordinal: 0x0
} _SINGLE_LIST_ENTRY;

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
typedef struct __anon_1708 {
  struct _LIST_ENTRY ListHead; // offset: 0x0 ordinal: 0x0
} __anon_1708;

// 0x10 bytes (sizeof)
typedef struct _ARC_DISK_INFORMATION {
  struct _LIST_ENTRY DiskSignatures; // offset: 0x0 ordinal: 0x0
} _ARC_DISK_INFORMATION;

typedef VOID (*__anon_492)(struct _DEVICE_OBJECT *, struct _DEVICE_OBJECT *);

typedef VOID (*__anon_491)(struct _FILE_OBJECT *);

typedef VOID (*__anon_118)();

// 0x10 bytes (sizeof)
typedef struct __anon_1707 {
  VOID *UserData; // offset: 0x0 ordinal: 0x0
  VOID *Owner;    // offset: 0x8 ordinal: 0x1
} __anon_1707;

// 0x48 bytes (sizeof)
typedef struct _VI_FAULT_TRACE {
  struct _ETHREAD *Thread; // offset: 0x0 ordinal: 0x0
  VOID *StackTrace[8];     // offset: 0x8 ordinal: 0x1
} _VI_FAULT_TRACE;

typedef VOID (*__anon_1343)(struct _WMI_BUFFER_HEADER *, VOID *);

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
typedef struct __anon_1093 {
  VOID *Notification; // offset: 0x0 ordinal: 0x0
} __anon_1093;

// 0x8 bytes (sizeof)
typedef struct __anon_1010 {
  VOID *CheckStack; // offset: 0x0 ordinal: 0x0
} __anon_1010;

// 0x18 bytes (sizeof)
typedef struct _NLS_DATA_BLOCK {
  VOID *AnsiCodePageData;     // offset: 0x0 ordinal: 0x0
  VOID *OemCodePageData;      // offset: 0x8 ordinal: 0x1
  VOID *UnicodeCaseTableData; // offset: 0x10 ordinal: 0x2
} _NLS_DATA_BLOCK;

// 0x80 bytes (sizeof)
typedef struct _OBJECT_REF_TRACE {
  VOID *StackTrace[16]; // offset: 0x0 ordinal: 0x0
} _OBJECT_REF_TRACE;

// 0x28 bytes (sizeof)
typedef struct __anon_663 {
  VOID *Argument1; // offset: 0x0 ordinal: 0x0
  VOID *Argument2; // offset: 0x8 ordinal: 0x1
  VOID *Argument3; // offset: 0x10 ordinal: 0x2
  VOID *Argument4; // offset: 0x18 ordinal: 0x3
  VOID *Argument5; // offset: 0x20 ordinal: 0x4
} __anon_663;

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
typedef struct __anon_585 {
  VOID *Argument1; // offset: 0x0 ordinal: 0x0
  VOID *Argument2; // offset: 0x8 ordinal: 0x1
  VOID *Argument3; // offset: 0x10 ordinal: 0x2
  VOID *Argument4; // offset: 0x18 ordinal: 0x3
} __anon_585;

// 0x10 bytes (sizeof)
typedef struct _IO_CLIENT_EXTENSION {
  struct _IO_CLIENT_EXTENSION *NextExtension; // offset: 0x0 ordinal: 0x0
  VOID *ClientIdentificationAddress;          // offset: 0x8 ordinal: 0x1
} _IO_CLIENT_EXTENSION;

typedef VOID (*__anon_443)(struct _DEVICE_OBJECT *, VOID *);

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

typedef VOID (*__anon_349)(VOID *, VOID *, VOID *, VOID *);

typedef VOID (*__anon_337)(VOID *, VOID *, VOID *);

typedef VOID (*__anon_313)(VOID *);

// 0x20 bytes (sizeof)
typedef struct _WORK_QUEUE_ITEM {
  struct _LIST_ENTRY List;       // offset: 0x0 ordinal: 0x0
  VOID (*WorkerRoutine)(VOID *); // offset: 0x10 ordinal: 0x1
  VOID *Parameter;               // offset: 0x18 ordinal: 0x2
} _WORK_QUEUE_ITEM;

// 0x20 bytes (sizeof)
typedef struct _KREQUEST_PACKET {
  VOID *CurrentPacket[3]; // offset: 0x0 ordinal: 0x0
  VOID(*WorkerRoutine)
  (VOID *, VOID *, VOID *, VOID *); // offset: 0x18 ordinal: 0x1
} _KREQUEST_PACKET;

// 0x10 bytes (sizeof)
typedef struct _CLIENT_ID {
  VOID *UniqueProcess; // offset: 0x0 ordinal: 0x0
  VOID *UniqueThread;  // offset: 0x8 ordinal: 0x1
} _CLIENT_ID;

// 0x20 bytes (sizeof)
typedef struct _TP_NBQ_GUARD {
  struct _LIST_ENTRY GuardLinks; // offset: 0x0 ordinal: 0x0
  VOID *Guards[2];               // offset: 0x10 ordinal: 0x1
} _TP_NBQ_GUARD;

typedef VOID (*__anon_48)(VOID *, VOID *);

// 0x0 bytes (sizeof)
typedef struct _TP_CALLBACK_INSTANCE {
} _TP_CALLBACK_INSTANCE;

typedef VOID (*__anon_50)(struct _TP_CALLBACK_INSTANCE *, VOID *);

// 0x0 bytes (sizeof)
typedef struct _ACTIVATION_CONTEXT {
} _ACTIVATION_CONTEXT;

// 0x0 bytes (sizeof)
typedef struct _TP_CLEANUP_GROUP {
} _TP_CLEANUP_GROUP;

// 0x0 bytes (sizeof)
typedef struct _TP_POOL {
} _TP_POOL;

typedef enum _FILE_OBJECT_EXTENSION_TYPE {
  FoExtTypeTransactionParams = 0, // ordinal: 0x0
  FoExtTypeDeviceObjectHint = 1,  // ordinal: 0x1
  FoExtTypeIosbRange = 2,         // ordinal: 0x2
  FoExtTypeGeneric = 3,           // ordinal: 0x3
  FoExtTypeSfio = 4,              // ordinal: 0x4
  FoExtTypeSymlink = 5,           // ordinal: 0x5
  FoExtTypeOplockKey = 6,         // ordinal: 0x6
  MaxFoExtTypes = 7,              // ordinal: 0x7
} _FILE_OBJECT_EXTENSION_TYPE;

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
  MaxRegNtNotifyClass = 47,               // ordinal: 0x3a
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

typedef enum _WORKING_SET_TYPE {
  WorkingSetTypeUser = 0,        // ordinal: 0x0
  WorkingSetTypeSession = 1,     // ordinal: 0x1
  WorkingSetTypeSystemTypes = 2, // ordinal: 0x2
  WorkingSetTypeSystemCache = 2, // ordinal: 0x3
  WorkingSetTypePagedPool = 3,   // ordinal: 0x4
  WorkingSetTypeSystemPtes = 4,  // ordinal: 0x5
  WorkingSetTypeMaximum = 5,     // ordinal: 0x6
} _WORKING_SET_TYPE;

typedef enum _KPROCESS_STATE {
  ProcessInMemory = 0,      // ordinal: 0x0
  ProcessOutOfMemory = 1,   // ordinal: 0x1
  ProcessInTransition = 2,  // ordinal: 0x2
  ProcessOutTransition = 3, // ordinal: 0x3
  ProcessInSwap = 4,        // ordinal: 0x4
  ProcessOutSwap = 5,       // ordinal: 0x5
  ProcessAllSwapStates = 6, // ordinal: 0x6
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

typedef enum _KWAIT_BLOCK_STATE {
  WaitBlockBypassStart = 0,    // ordinal: 0x0
  WaitBlockBypassComplete = 1, // ordinal: 0x1
  WaitBlockActive = 2,         // ordinal: 0x2
  WaitBlockInactive = 3,       // ordinal: 0x3
  WaitBlockAllStates = 4,      // ordinal: 0x4
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

typedef enum ReplacesCorHdrNumericDefines {
  COMIMAGE_FLAGS_ILONLY = 1,                      // ordinal: 0x0
  COMIMAGE_FLAGS_32BITREQUIRED = 2,               // ordinal: 0x1
  COMIMAGE_FLAGS_IL_LIBRARY = 4,                  // ordinal: 0x2
  COMIMAGE_FLAGS_STRONGNAMESIGNED = 8,            // ordinal: 0x3
  COMIMAGE_FLAGS_NATIVE_ENTRYPOINT = 16,          // ordinal: 0x4
  COMIMAGE_FLAGS_TRACKDEBUGDATA = 65536,          // ordinal: 0x5
  COR_VERSION_MAJOR_V2 = 2,                       // ordinal: 0x6
  COR_VERSION_MAJOR = 2,                          // ordinal: 0x7
  COR_VERSION_MINOR = 0,                          // ordinal: 0x8
  COR_DELETED_NAME_LENGTH = 8,                    // ordinal: 0x9
  COR_VTABLEGAP_NAME_LENGTH = 8,                  // ordinal: 0xa
  NATIVE_TYPE_MAX_CB = 1,                         // ordinal: 0xb
  COR_ILMETHOD_SECT_SMALL_MAX_DATASIZE = 255,     // ordinal: 0xc
  IMAGE_COR_MIH_METHODRVA = 1,                    // ordinal: 0xd
  IMAGE_COR_MIH_EHRVA = 2,                        // ordinal: 0xe
  IMAGE_COR_MIH_BASICBLOCK = 8,                   // ordinal: 0xf
  COR_VTABLE_32BIT = 1,                           // ordinal: 0x10
  COR_VTABLE_64BIT = 2,                           // ordinal: 0x11
  COR_VTABLE_FROM_UNMANAGED = 4,                  // ordinal: 0x12
  COR_VTABLE_FROM_UNMANAGED_RETAIN_APPDOMAIN = 8, // ordinal: 0x13
  COR_VTABLE_CALL_MOST_DERIVED = 16,              // ordinal: 0x14
  IMAGE_COR_EATJ_THUNK_SIZE = 32,                 // ordinal: 0x15
  MAX_CLASS_NAME = 1024,                          // ordinal: 0x16
  MAX_PACKAGE_NAME = 1024,                        // ordinal: 0x17
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

typedef enum _MM_POOL_PRIORITIES {
  MmHighPriority = 0,        // ordinal: 0x0
  MmNormalPriority = 1,      // ordinal: 0x1
  MmLowPriority = 2,         // ordinal: 0x2
  MmMaximumPoolPriority = 3, // ordinal: 0x3
} _MM_POOL_PRIORITIES;

typedef enum _MEMORY_CACHING_TYPE_ORIG {
  MmFrameBufferCached = 2, // ordinal: 0x0
} _MEMORY_CACHING_TYPE_ORIG;

typedef enum _KWAIT_STATE {
  WaitInProgress = 0,   // ordinal: 0x0
  WaitCommitted = 1,    // ordinal: 0x1
  WaitAborted = 2,      // ordinal: 0x2
  MaximumWaitState = 3, // ordinal: 0x3
} _KWAIT_STATE;

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
} _MI_SYSTEM_VA_TYPE;

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

typedef enum _CM_SHARE_DISPOSITION {
  CmResourceShareUndetermined = 0,    // ordinal: 0x0
  CmResourceShareDeviceExclusive = 1, // ordinal: 0x1
  CmResourceShareDriverExclusive = 2, // ordinal: 0x2
  CmResourceShareShared = 3,          // ordinal: 0x3
} _CM_SHARE_DISPOSITION;

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
  DPFLTR_PSHED_ID = 136,         // ordinal: 0x88
  DPFLTR_STORVSP_ID = 137,       // ordinal: 0x89
  DPFLTR_LSASS_ID = 138,         // ordinal: 0x8a
  DPFLTR_SSPICLI_ID = 139,       // ordinal: 0x8b
  DPFLTR_CNG_ID = 140,           // ordinal: 0x8c
  DPFLTR_EXFAT_ID = 141,         // ordinal: 0x8d
  DPFLTR_FILETRACE_ID = 142,     // ordinal: 0x8e
  DPFLTR_XSAVE_ID = 143,         // ordinal: 0x8f
  DPFLTR_SE_ID = 144,            // ordinal: 0x90
  DPFLTR_DRIVEEXTENDER_ID = 145, // ordinal: 0x91
  DPFLTR_ENDOFTABLE_ID = 146,    // ordinal: 0x92
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
  PsAttributeParentProcess = 0,   // ordinal: 0x0
  PsAttributeDebugObject = 1,     // ordinal: 0x1
  PsAttributeToken = 2,           // ordinal: 0x2
  PsAttributeClientId = 3,        // ordinal: 0x3
  PsAttributeTebAddress = 4,      // ordinal: 0x4
  PsAttributeImageName = 5,       // ordinal: 0x5
  PsAttributeImageInfo = 6,       // ordinal: 0x6
  PsAttributeMemoryReserve = 7,   // ordinal: 0x7
  PsAttributePriorityClass = 8,   // ordinal: 0x8
  PsAttributeErrorMode = 9,       // ordinal: 0x9
  PsAttributeStdHandleInfo = 10,  // ordinal: 0xa
  PsAttributeHandleList = 11,     // ordinal: 0xb
  PsAttributeGroupAffinity = 12,  // ordinal: 0xc
  PsAttributePreferredNode = 13,  // ordinal: 0xd
  PsAttributeIdealProcessor = 14, // ordinal: 0xe
  PsAttributeUmsThread = 15,      // ordinal: 0xf
  PsAttributeExecuteOptions = 16, // ordinal: 0x10
  PsAttributeMax = 17,            // ordinal: 0x11
} _PS_ATTRIBUTE_NUM;

typedef enum _ETW_GUID_TYPE {
  EtwTraceGuidType = 0,        // ordinal: 0x0
  EtwNotificationGuidType = 1, // ordinal: 0x1
  EtwGuidTypeMax = 2,          // ordinal: 0x2
} _ETW_GUID_TYPE;

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
  WrEventPair = 14,       // ordinal: 0xe
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
  MaximumWaitReason = 37, // ordinal: 0x25
} _KWAIT_REASON;

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

typedef enum _MI_STORE_BIT_TYPE {
  MiStoreBitTypeInStore = 0, // ordinal: 0x0
  MiStoreBitTypeEvicted = 1, // ordinal: 0x1
  MiStoreBitTypeMax = 2,     // ordinal: 0x2
} _MI_STORE_BIT_TYPE;

typedef enum _MI_DYNAMIC_MEMORY_LOCKTYPE {
  AlreadyHeld = 0,          // ordinal: 0x0
  AcquiredShared = 1,       // ordinal: 0x1
  UseSpinLock = 2,          // ordinal: 0x2
  UseSpinLockRaiseIrql = 3, // ordinal: 0x3
} _MI_DYNAMIC_MEMORY_LOCKTYPE;

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

typedef enum _PNP_DEVICE_ACTION_REQUEST {
  AssignResources = 0,              // ordinal: 0x0
  ClearDeviceProblem = 1,           // ordinal: 0x1
  ClearProblem = 2,                 // ordinal: 0x2
  ClearEjectProblem = 3,            // ordinal: 0x3
  HaltDevice = 4,                   // ordinal: 0x4
  QueryPowerRelations = 5,          // ordinal: 0x5
  Rebalance = 6,                    // ordinal: 0x6
  ReenumerateBootDevices = 7,       // ordinal: 0x7
  ReenumerateDeviceOnly = 8,        // ordinal: 0x8
  ReenumerateDeviceTree = 9,        // ordinal: 0x9
  ReenumerateRootDevices = 10,      // ordinal: 0xa
  RequeryDeviceState = 11,          // ordinal: 0xb
  ResetDevice = 12,                 // ordinal: 0xc
  ResourceRequirementsChanged = 13, // ordinal: 0xd
  RestartEnumeration = 14,          // ordinal: 0xe
  SetDeviceProblem = 15,            // ordinal: 0xf
  StartDevice = 16,                 // ordinal: 0x10
  StartSystemDevicesPass0 = 17,     // ordinal: 0x11
  StartSystemDevicesPass1 = 18,     // ordinal: 0x12
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

typedef enum _ETW_PROVIDER_STATE {
  EtwProviderStateFree = 0,       // ordinal: 0x0
  EtwProviderStateTransition = 1, // ordinal: 0x1
  EtwProviderStateActive = 2,     // ordinal: 0x2
  EtwProviderStateMax = 3,        // ordinal: 0x3
} _ETW_PROVIDER_STATE;

typedef enum POWER_POLICY_DEVICE_TYPE {
  PolicyDeviceSystemButton = 0,     // ordinal: 0x0
  PolicyDeviceThermalZone = 1,      // ordinal: 0x1
  PolicyDeviceBattery = 2,          // ordinal: 0x2
  PolicyDeviceMemory = 3,           // ordinal: 0x3
  PolicyInitiatePowerActionAPI = 4, // ordinal: 0x4
  PolicySetPowerStateAPI = 5,       // ordinal: 0x5
  PolicyImmediateDozeS4 = 6,        // ordinal: 0x6
  PolicySystemIdle = 7,             // ordinal: 0x7
  PolicyDeviceMax = 8,              // ordinal: 0x8
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
  LoaderReserve = 24,            // ordinal: 0x18
  LoaderXIPRom = 25,             // ordinal: 0x19
  LoaderHALCachedMemory = 26,    // ordinal: 0x1a
  LoaderLargePageFiller = 27,    // ordinal: 0x1b
  LoaderErrorLogMemory = 28,     // ordinal: 0x1c
  LoaderMaximum = 29,            // ordinal: 0x1d
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

typedef enum _ARBITER_REQUEST_SOURCE {
  ArbiterRequestUndefined = -1,     // ordinal: 0x0
  ArbiterRequestLegacyReported = 0, // ordinal: 0x1
  ArbiterRequestHalReported = 1,    // ordinal: 0x2
  ArbiterRequestLegacyAssigned = 2, // ordinal: 0x3
  ArbiterRequestPnpDetected = 3,    // ordinal: 0x4
  ArbiterRequestPnpEnumerated = 4,  // ordinal: 0x5
} _ARBITER_REQUEST_SOURCE;

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
  MaxPlugEventCategory = 11,       // ordinal: 0xb
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
  _None = 0,                                // ordinal: 0x0
  _CmInitializeHive = 1,                    // ordinal: 0x1
  _HvInitializeHive = 2,                    // ordinal: 0x2
  _HvpBuildMap = 3,                         // ordinal: 0x3
  _HvpBuildMapAndCopy = 4,                  // ordinal: 0x4
  _HvpInitMap = 5,                          // ordinal: 0x5
  _HvLoadHive = 6,                          // ordinal: 0x6
  _HvpReadFileImageAndBuildMap = 7,         // ordinal: 0x7
  _HvpRecoverData = 8,                      // ordinal: 0x8
  _HvpRecoverWholeHive = 9,                 // ordinal: 0x9
  _HvpMapFileImageAndBuildMap = 10,         // ordinal: 0xa
  _CmpValidateHiveSecurityDescriptors = 11, // ordinal: 0xb
  _HvpEnlistBinInMap = 12,                  // ordinal: 0xc
  _CmCheckRegistry = 13,                    // ordinal: 0xd
  _CmRegistryIO = 14,                       // ordinal: 0xe
  _CmCheckRegistry2 = 15,                   // ordinal: 0xf
  _CmpCheckKey = 16,                        // ordinal: 0x10
  _CmpCheckValueList = 17,                  // ordinal: 0x11
  _HvCheckHive = 18,                        // ordinal: 0x12
  _HvCheckBin = 19,                         // ordinal: 0x13
} _CM_LOAD_FAILURE_TYPE;

typedef enum _RTL_GENERIC_COMPARE_RESULTS {
  GenericLessThan = 0,    // ordinal: 0x0
  GenericGreaterThan = 1, // ordinal: 0x1
  GenericEqual = 2,       // ordinal: 0x2
} _RTL_GENERIC_COMPARE_RESULTS;

typedef enum __anon_1001 {
  KTMOH_CommitTransaction_Result = 1,   // ordinal: 0x0
  KTMOH_RollbackTransaction_Result = 2, // ordinal: 0x1
} __anon_1001;

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

typedef enum _TPM_BOOT_ENTROPY_RESULT_CODE {
  TpmBootEntropyStructureUninitialized = 0, // ordinal: 0x0
  TpmBootEntropyDisabledByPolicy = 1,       // ordinal: 0x1
  TpmBootEntropyNoTpmFound = 2,             // ordinal: 0x2
  TpmBootEntropyTpmError = 3,               // ordinal: 0x3
  TpmBootEntropySuccess = 4,                // ordinal: 0x4
} _TPM_BOOT_ENTROPY_RESULT_CODE;

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
  MaximumInterfaceType = 17,   // ordinal: 0x12
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
typedef struct __anon_580 {
  enum _SYSTEM_POWER_STATE PowerState; // offset: 0x0 ordinal: 0x0
} __anon_580;

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
  BusQueryContainerID = 5,        // ordinal: 0x5
} BUS_QUERY_ID_TYPE;

// 0x4 bytes (sizeof)
typedef struct __anon_577 {
  enum BUS_QUERY_ID_TYPE IdType; // offset: 0x0 ordinal: 0x0
} __anon_577;

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
typedef struct __anon_571 {
  enum _DEVICE_RELATION_TYPE Type; // offset: 0x0 ordinal: 0x0
} __anon_571;

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
  FileIdGlobalTxDirectoryInformation = 50,      // ordinal: 0x31
  FileIsRemoteDeviceInformation = 51,           // ordinal: 0x32
  FileAttributeCacheInformation = 52,           // ordinal: 0x33
  FileNumaNodeInformation = 53,                 // ordinal: 0x34
  FileStandardLinkInformation = 54,             // ordinal: 0x35
  FileRemoteProtocolInformation = 55,           // ordinal: 0x36
  FileMaximumInformation = 56,                  // ordinal: 0x37
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

typedef enum _POP_DEVICE_IDLE_TYPE {
  DeviceIdleNormal = 0, // ordinal: 0x0
  DeviceIdleDisk = 1,   // ordinal: 0x1
} _POP_DEVICE_IDLE_TYPE;

typedef enum _IO_ALLOCATION_ACTION {
  KeepObject = 1,                    // ordinal: 0x0
  DeallocateObject = 2,              // ordinal: 0x1
  DeallocateObjectKeepRegisters = 3, // ordinal: 0x2
} _IO_ALLOCATION_ACTION;

typedef enum _HARDWARE_COUNTER_TYPE {
  PMCCounter = 0,             // ordinal: 0x0
  MaxHardwareCounterType = 1, // ordinal: 0x1
} _HARDWARE_COUNTER_TYPE;

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

typedef enum _PROC_HYPERVISOR_STATE {
  ProcHypervisorNone = 0,    // ordinal: 0x0
  ProcHypervisorPresent = 1, // ordinal: 0x1
  ProcHypervisorPower = 2,   // ordinal: 0x2
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
} _TP_CALLBACK_PRIORITY;

typedef unsigned short WCHAR;

// 0x2 bytes (sizeof)
typedef struct __anon_1097 {
  WCHAR ParentId[1]; // offset: 0x0 ordinal: 0x0
} __anon_1097;

// 0x8 bytes (sizeof)
typedef struct __anon_1095 {
  enum _PNP_VETO_TYPE VetoType;    // offset: 0x0 ordinal: 0x0
  WCHAR DeviceIdVetoNameBuffer[1]; // offset: 0x4 ordinal: 0x1
} __anon_1095;

// 0x10 bytes (sizeof)
typedef struct __anon_1092 {
  VOID *NotificationStructure; // offset: 0x0 ordinal: 0x0
  WCHAR DeviceIds[1];          // offset: 0x8 ordinal: 0x1
} __anon_1092;

// 0x2 bytes (sizeof)
typedef struct __anon_1091 {
  WCHAR DeviceId[1]; // offset: 0x0 ordinal: 0x0
} __anon_1091;

// 0x2 bytes (sizeof)
typedef struct __anon_1090 {
  WCHAR DeviceIds[1]; // offset: 0x0 ordinal: 0x0
} __anon_1090;

typedef unsigned short USHORT;

typedef LONGLONG (*__anon_1341)();

// 0x8 bytes (sizeof)
typedef union __anon_857 {
  LONGLONG Balance : 2;  // offset: 0x0 ordinal: 0x0
  struct _MMVAD *Parent; // offset: 0x0 ordinal: 0x1
} __anon_857;

// 0x8 bytes (sizeof)
typedef union __anon_828 {
  LONGLONG Balance : 2;              // offset: 0x0 ordinal: 0x0
  struct _MMSUBSECTION_NODE *Parent; // offset: 0x0 ordinal: 0x1
} __anon_828;

// 0x8 bytes (sizeof)
typedef union __anon_600 {
  LONGLONG Balance : 2;           // offset: 0x0 ordinal: 0x0
  struct _MMADDRESS_NODE *Parent; // offset: 0x0 ordinal: 0x1
} __anon_600;

// 0x8 bytes (sizeof)
typedef struct _QUAD {
  union {
    LONGLONG UseThisFieldToCopy; // offset: 0x0 ordinal: 0x0
    double DoNotUseThisField;    // offset: 0x0 ordinal: 0x1
  };
} _QUAD;

// 0x40 bytes (sizeof)
typedef struct _REQUEST_MAILBOX {
  struct _REQUEST_MAILBOX *Next;         // offset: 0x0 ordinal: 0x0
  LONGLONG RequestSummary;               // offset: 0x8 ordinal: 0x1
  struct _KREQUEST_PACKET RequestPacket; // offset: 0x10 ordinal: 0x2
} _REQUEST_MAILBOX;

typedef unsigned long long ULONGLONG;

// 0x8 bytes (sizeof)
typedef struct __anon_1282 {
  ULONGLONG Head : 24;              // offset: 0x0 ordinal: 0x0
  ULONGLONG Tail : 24;              // offset: 0x0 ordinal: 0x1
  ULONGLONG ActiveThreadCount : 16; // offset: 0x0 ordinal: 0x2
} __anon_1282;

// 0x8 bytes (sizeof)
typedef union __anon_1276 {
  struct __anon_1282 s1; // offset: 0x0 ordinal: 0x0
  ULONGLONG Value;       // offset: 0x0 ordinal: 0x1
} __anon_1276;

// 0x8 bytes (sizeof)
typedef struct _ALPC_COMPLETION_LIST_STATE {
  union __anon_1276 u1; // offset: 0x0 ordinal: 0x0
} _ALPC_COMPLETION_LIST_STATE;

typedef enum _ALTERNATIVE_ARCHITECTURE_TYPE {
  StandardDesign = 0,  // ordinal: 0x0
  NEC98x86 = 1,        // ordinal: 0x1
  EndAlternatives = 2, // ordinal: 0x2
} _ALTERNATIVE_ARCHITECTURE_TYPE;

// 0x1 bytes (sizeof)
typedef union __anon_1584 {
  UCHAR AsUCHAR;                // offset: 0x0 ordinal: 0x0
  UCHAR NoDomainAccounting : 1; // offset: 0x0 ordinal: 0x1
  UCHAR IncreasePolicy : 2;     // offset: 0x0 ordinal: 0x2
  UCHAR DecreasePolicy : 2;     // offset: 0x0 ordinal: 0x3
  UCHAR Reserved : 3;           // offset: 0x0 ordinal: 0x4
} __anon_1584;

// 0x10 bytes (sizeof)
typedef struct _VF_TRACKER_STAMP {
  VOID *Thread;        // offset: 0x0 ordinal: 0x0
  UCHAR Flags : 8;     // offset: 0x8 ordinal: 0x1
  UCHAR OldIrql : 8;   // offset: 0x9 ordinal: 0x2
  UCHAR NewIrql : 8;   // offset: 0xa ordinal: 0x3
  UCHAR Processor : 8; // offset: 0xb ordinal: 0x4
} _VF_TRACKER_STAMP;

// 0x1b bytes (sizeof)
typedef struct _TOKEN_AUDIT_POLICY {
  UCHAR PerUserPolicy[27]; // offset: 0x0 ordinal: 0x0
} _TOKEN_AUDIT_POLICY;

// 0x1c bytes (sizeof)
typedef struct _SEP_AUDIT_POLICY {
  struct _TOKEN_AUDIT_POLICY AdtTokenPolicy; // offset: 0x0 ordinal: 0x0
  UCHAR PolicySetStatus;                     // offset: 0x1b ordinal: 0x1
} _SEP_AUDIT_POLICY;

// 0x1 bytes (sizeof)
typedef struct _ETW_LOGGER_HANDLE {
  UCHAR DereferenceAndLeave; // offset: 0x0 ordinal: 0x0
} _ETW_LOGGER_HANDLE;

// 0x1 bytes (sizeof)
typedef struct __anon_1225 {
  UCHAR ReferenceCache : 1; // offset: 0x0 ordinal: 0x0
  UCHAR Lookaside : 1;      // offset: 0x0 ordinal: 0x1
  UCHAR Initializing : 1;   // offset: 0x0 ordinal: 0x2
  UCHAR Deleted : 1;        // offset: 0x0 ordinal: 0x3
} __anon_1225;

// 0x1 bytes (sizeof)
typedef union __anon_1226 {
  struct __anon_1225 s1; // offset: 0x0 ordinal: 0x0
  UCHAR Flags;           // offset: 0x0 ordinal: 0x1
} __anon_1226;

typedef UCHAR (*__anon_1176)(VOID *, UCHAR);

// 0x20 bytes (sizeof)
typedef struct _CACHE_MANAGER_CALLBACKS {
  UCHAR (*AcquireForLazyWrite)(VOID *, UCHAR); // offset: 0x0 ordinal: 0x0
  VOID (*ReleaseFromLazyWrite)(VOID *);        // offset: 0x8 ordinal: 0x1
  UCHAR (*AcquireForReadAhead)(VOID *, UCHAR); // offset: 0x10 ordinal: 0x2
  VOID (*ReleaseFromReadAhead)(VOID *);        // offset: 0x18 ordinal: 0x3
} _CACHE_MANAGER_CALLBACKS;

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
typedef struct _VF_ADDRESS_RANGE {
  UCHAR *Start; // offset: 0x0 ordinal: 0x0
  UCHAR *End;   // offset: 0x8 ordinal: 0x1
} _VF_ADDRESS_RANGE;

// 0x1 bytes (sizeof)
typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS {
  UCHAR FRUId : 1;    // offset: 0x0 ordinal: 0x0
  UCHAR FRUText : 1;  // offset: 0x0 ordinal: 0x1
  UCHAR Reserved : 6; // offset: 0x0 ordinal: 0x2
  UCHAR AsUCHAR;      // offset: 0x0 ordinal: 0x3
} _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS;

// 0x6 bytes (sizeof)
typedef struct _SID_IDENTIFIER_AUTHORITY {
  UCHAR Value[6]; // offset: 0x0 ordinal: 0x0
} _SID_IDENTIFIER_AUTHORITY;

// 0x10 bytes (sizeof)
typedef struct __anon_662 {
  enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE
      NotificationType; // offset: 0x0 ordinal: 0x0
  UCHAR SafeToRecurse;  // offset: 0x8 ordinal: 0x1
} __anon_662;

// 0x1 bytes (sizeof)
typedef struct __anon_576 {
  UCHAR Lock; // offset: 0x0 ordinal: 0x0
} __anon_576;

// 0x4 bytes (sizeof)
typedef struct _MMSUPPORT_FLAGS {
  UCHAR WorkingSetType : 3;        // offset: 0x0 ordinal: 0x0
  UCHAR ModwriterAttached : 1;     // offset: 0x0 ordinal: 0x1
  UCHAR TrimHard : 1;              // offset: 0x0 ordinal: 0x2
  UCHAR MaximumWorkingSetHard : 1; // offset: 0x0 ordinal: 0x3
  UCHAR ForceTrim : 1;             // offset: 0x0 ordinal: 0x4
  UCHAR MinimumWorkingSetHard : 1; // offset: 0x0 ordinal: 0x5
  UCHAR SessionMaster : 1;         // offset: 0x1 ordinal: 0x6
  UCHAR TrimmerState : 2;          // offset: 0x1 ordinal: 0x7
  UCHAR Reserved : 1;              // offset: 0x1 ordinal: 0x8
  UCHAR PageStealers : 4;          // offset: 0x1 ordinal: 0x9
  UCHAR MemoryPriority : 8;        // offset: 0x2 ordinal: 0xa
  UCHAR WsleDeleted : 1;           // offset: 0x3 ordinal: 0xb
  UCHAR VmExiting : 1;             // offset: 0x3 ordinal: 0xc
  UCHAR ExpansionFailed : 1;       // offset: 0x3 ordinal: 0xd
  UCHAR Available : 5;             // offset: 0x3 ordinal: 0xe
} _MMSUPPORT_FLAGS;

typedef UCHAR (*__anon_496)(struct _FILE_OBJECT *, struct _MDL *,
                            struct _DEVICE_OBJECT *);

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
  UCHAR State : 2;    // offset: 0x0 ordinal: 0x1
  UCHAR Affinity : 1; // offset: 0x0 ordinal: 0x2
  UCHAR Priority : 1; // offset: 0x0 ordinal: 0x3
  UCHAR Apc : 1;      // offset: 0x0 ordinal: 0x4
  UCHAR UserApc : 1;  // offset: 0x0 ordinal: 0x5
  UCHAR Alert : 1;    // offset: 0x0 ordinal: 0x6
  UCHAR Unused : 1;   // offset: 0x0 ordinal: 0x7
} _KWAIT_STATUS_REGISTER;

// 0x4 bytes (sizeof)
typedef struct __anon_214 {
  UCHAR BaseMiddle; // offset: 0x0 ordinal: 0x0
  UCHAR Flags1;     // offset: 0x1 ordinal: 0x1
  UCHAR Flags2;     // offset: 0x2 ordinal: 0x2
  UCHAR BaseHigh;   // offset: 0x3 ordinal: 0x3
} __anon_214;

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

typedef VOID (*__anon_281)(struct _KDPC *, VOID *, VOID *, VOID *);

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
typedef struct __anon_579 {
  UCHAR InPath;                              // offset: 0x0 ordinal: 0x0
  UCHAR Reserved[3];                         // offset: 0x1 ordinal: 0x1
  enum _DEVICE_USAGE_NOTIFICATION_TYPE Type; // offset: 0x8 ordinal: 0x2
} __anon_579;

typedef enum _NT_PRODUCT_TYPE {
  NtProductWinNt = 1,    // ordinal: 0x0
  NtProductLanManNt = 2, // ordinal: 0x1
  NtProductServer = 3,   // ordinal: 0x2
} _NT_PRODUCT_TYPE;

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
typedef union __anon_1710 {
  USHORT AsUSHORT;         // offset: 0x0 ordinal: 0x0
  USHORT AllowScaling : 1; // offset: 0x0 ordinal: 0x1
  USHORT Disabled : 1;     // offset: 0x0 ordinal: 0x2
  USHORT Reserved : 14;    // offset: 0x0 ordinal: 0x3
} __anon_1710;

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

// 0x8 bytes (sizeof)
typedef struct _PCW_COUNTER_DESCRIPTOR {
  USHORT Id;          // offset: 0x0 ordinal: 0x0
  USHORT StructIndex; // offset: 0x2 ordinal: 0x1
  USHORT Offset;      // offset: 0x4 ordinal: 0x2
  USHORT Size;        // offset: 0x6 ordinal: 0x3
} _PCW_COUNTER_DESCRIPTOR;

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
typedef struct __anon_810 {
  union {
    USHORT ReferenceCount;        // offset: 0x0 ordinal: 0x0
    SHORT VolatileReferenceCount; // offset: 0x0 ordinal: 0x1
  };
  USHORT ShortFlags; // offset: 0x2 ordinal: 0x2
} __anon_810;

// 0x4 bytes (sizeof)
typedef union __anon_812 {
  USHORT ReferenceCount; // offset: 0x0 ordinal: 0x0
  struct _MMPFNENTRY e1; // offset: 0x2 ordinal: 0x1
  struct __anon_810 e2;  // offset: 0x0 ordinal: 0x2
} __anon_812;

// 0x2 bytes (sizeof)
typedef union _WHEA_REVISION {
  UCHAR MinorRevision; // offset: 0x0 ordinal: 0x0
  UCHAR MajorRevision; // offset: 0x1 ordinal: 0x1
  USHORT AsUSHORT;     // offset: 0x0 ordinal: 0x2
} _WHEA_REVISION;

// 0x10 bytes (sizeof)
typedef struct _TXN_PARAMETER_BLOCK {
  USHORT Length;           // offset: 0x0 ordinal: 0x0
  USHORT TxFsContext;      // offset: 0x2 ordinal: 0x1
  VOID *TransactionObject; // offset: 0x8 ordinal: 0x2
} _TXN_PARAMETER_BLOCK;

// 0x20 bytes (sizeof)
typedef struct _INTERFACE {
  USHORT Size;                          // offset: 0x0 ordinal: 0x0
  USHORT Version;                       // offset: 0x2 ordinal: 0x1
  VOID *Context;                        // offset: 0x8 ordinal: 0x2
  VOID (*InterfaceReference)(VOID *);   // offset: 0x10 ordinal: 0x3
  VOID (*InterfaceDereference)(VOID *); // offset: 0x18 ordinal: 0x4
} _INTERFACE;

// 0x4 bytes (sizeof)
typedef struct _PROC_HISTORY_ENTRY {
  USHORT Utility;  // offset: 0x0 ordinal: 0x0
  UCHAR Frequency; // offset: 0x2 ordinal: 0x1
  UCHAR Reserved;  // offset: 0x3 ordinal: 0x2
} _PROC_HISTORY_ENTRY;

// 0x10 bytes (sizeof)
typedef struct _KDESCRIPTOR {
  USHORT Pad[3]; // offset: 0x0 ordinal: 0x0
  USHORT Limit;  // offset: 0x6 ordinal: 0x1
  VOID *Base;    // offset: 0x8 ordinal: 0x2
} _KDESCRIPTOR;

// 0x10 bytes (sizeof)
typedef struct _STRING {
  USHORT Length;        // offset: 0x0 ordinal: 0x0
  USHORT MaximumLength; // offset: 0x2 ordinal: 0x1
  CHAR *Buffer;         // offset: 0x8 ordinal: 0x2
} _STRING;

// 0x20 bytes (sizeof)
typedef struct __anon_1065 {
  enum PROFILE_STATUS DockStatus; // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY ListEntry;   // offset: 0x8 ordinal: 0x1
  USHORT *SerialNumber;           // offset: 0x18 ordinal: 0x2
} __anon_1065;

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

// 0x4 bytes (sizeof)
typedef struct _PROCESSOR_NUMBER {
  USHORT Group;   // offset: 0x0 ordinal: 0x0
  UCHAR Number;   // offset: 0x2 ordinal: 0x1
  UCHAR Reserved; // offset: 0x3 ordinal: 0x2
} _PROCESSOR_NUMBER;

// 0xa0 bytes (sizeof)
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
  ULONG ActivityCounter;                     // offset: 0x90 ordinal: 0x1d
  ULONG PreviousActivityCounter;             // offset: 0x94 ordinal: 0x1e
  ULONG WorkerTrimRequests;                  // offset: 0x98 ordinal: 0x1f
} _MM_DRIVER_VERIFIER_DATA;

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

typedef LONG (*__anon_501)(struct _FILE_OBJECT *, struct _DEVICE_OBJECT *);

// 0x8 bytes (sizeof)
typedef union __anon_426 {
  struct _IRP *MasterIrp; // offset: 0x0 ordinal: 0x0
  LONG IrpCount;          // offset: 0x0 ordinal: 0x1
  VOID *SystemBuffer;     // offset: 0x0 ordinal: 0x2
} __anon_426;

typedef LONG (*__anon_363)(VOID *);

// 0x30 bytes (sizeof)
typedef struct _KWAIT_BLOCK {
  struct _LIST_ENTRY WaitListEntry;   // offset: 0x0 ordinal: 0x0
  struct _KTHREAD *Thread;            // offset: 0x10 ordinal: 0x1
  VOID *Object;                       // offset: 0x18 ordinal: 0x2
  struct _KWAIT_BLOCK *NextWaitBlock; // offset: 0x20 ordinal: 0x3
  USHORT WaitKey;                     // offset: 0x28 ordinal: 0x4
  UCHAR WaitType;                     // offset: 0x2a ordinal: 0x5
  UCHAR BlockState;                   // offset: 0x2b ordinal: 0x6
  LONG SpareLong;                     // offset: 0x2c ordinal: 0x7
} _KWAIT_BLOCK;

// 0x18 bytes (sizeof)
typedef struct _DISPATCHER_HEADER {
  UCHAR Type; // offset: 0x0 ordinal: 0x0
  union {
    UCHAR TimerControlFlags; // offset: 0x1 ordinal: 0x1
    UCHAR Absolute : 1;      // offset: 0x1 ordinal: 0x2
  };
  UCHAR Coalescable : 1;           // offset: 0x1 ordinal: 0x3
  UCHAR KeepShifting : 1;          // offset: 0x1 ordinal: 0x4
  UCHAR EncodedTolerableDelay : 5; // offset: 0x1 ordinal: 0x5
  union {
    UCHAR Abandoned;  // offset: 0x1 ordinal: 0x6
    UCHAR Signalling; // offset: 0x1 ordinal: 0x7
  };
  union {
    UCHAR ThreadControlFlags; // offset: 0x2 ordinal: 0x8
    UCHAR CpuThrottled : 1;   // offset: 0x2 ordinal: 0x9
  };
  UCHAR CycleProfiling : 1;   // offset: 0x2 ordinal: 0xa
  UCHAR CounterProfiling : 1; // offset: 0x2 ordinal: 0xb
  UCHAR Reserved : 5;         // offset: 0x2 ordinal: 0xc
  union {
    UCHAR Hand; // offset: 0x2 ordinal: 0xd
    UCHAR Size; // offset: 0x2 ordinal: 0xe
  };
  union {
    UCHAR TimerMiscFlags; // offset: 0x3 ordinal: 0xf
    UCHAR Index : 6;      // offset: 0x3 ordinal: 0x10
  };
  UCHAR Inserted : 1; // offset: 0x3 ordinal: 0x11
  UCHAR Expired : 1;  // offset: 0x3 ordinal: 0x12
  union {
    UCHAR DebugActive;   // offset: 0x3 ordinal: 0x13
    UCHAR ActiveDR7 : 1; // offset: 0x3 ordinal: 0x14
  };
  UCHAR Instrumented : 1;          // offset: 0x3 ordinal: 0x15
  UCHAR Reserved2 : 4;             // offset: 0x3 ordinal: 0x16
  UCHAR UmsScheduled : 1;          // offset: 0x3 ordinal: 0x17
  UCHAR UmsPrimary : 1;            // offset: 0x3 ordinal: 0x18
  UCHAR DpcActive;                 // offset: 0x3 ordinal: 0x19
  LONG Lock;                       // offset: 0x0 ordinal: 0x1a
  LONG SignalState;                // offset: 0x4 ordinal: 0x1b
  struct _LIST_ENTRY WaitListHead; // offset: 0x8 ordinal: 0x1c
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
typedef struct _KEVENT {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 ordinal: 0x0
} _KEVENT;

// 0x20 bytes (sizeof)
typedef struct _CACHE_UNINITIALIZE_EVENT {
  struct _CACHE_UNINITIALIZE_EVENT *Next; // offset: 0x0 ordinal: 0x0
  struct _KEVENT Event;                   // offset: 0x8 ordinal: 0x1
} _CACHE_UNINITIALIZE_EVENT;

// 0x40 bytes (sizeof)
typedef struct _EX_PUSH_LOCK_WAIT_BLOCK {
  struct _KEVENT WakeEvent;                  // offset: 0x0 ordinal: 0x0
  struct _EX_PUSH_LOCK_WAIT_BLOCK *Next;     // offset: 0x18 ordinal: 0x1
  struct _EX_PUSH_LOCK_WAIT_BLOCK *Last;     // offset: 0x20 ordinal: 0x2
  struct _EX_PUSH_LOCK_WAIT_BLOCK *Previous; // offset: 0x28 ordinal: 0x3
  LONG ShareCount;                           // offset: 0x30 ordinal: 0x4
  LONG Flags;                                // offset: 0x34 ordinal: 0x5
} _EX_PUSH_LOCK_WAIT_BLOCK;

// 0x8 bytes (sizeof)
typedef struct __anon_1180 {
  struct _KEVENT *Event; // offset: 0x0 ordinal: 0x0
} __anon_1180;

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
typedef struct _KGATE {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 ordinal: 0x0
} _KGATE;

// 0x20 bytes (sizeof)
typedef struct _MI_SECTION_CREATION_GATE {
  struct _MI_SECTION_CREATION_GATE *Next; // offset: 0x0 ordinal: 0x0
  struct _KGATE Gate;                     // offset: 0x8 ordinal: 0x1
} _MI_SECTION_CREATION_GATE;

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

// 0x4 bytes (sizeof)
typedef union __anon_1736 {
  ULONG NodeSize;     // offset: 0x0 ordinal: 0x0
  ULONG UseLookaside; // offset: 0x0 ordinal: 0x1
} __anon_1736;

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

// 0x4 bytes (sizeof)
typedef union EX_QUEUE_WORKER_INFO {
  ULONG QueueDisabled : 1;          // offset: 0x0 ordinal: 0x0
  ULONG MakeThreadsAsNecessary : 1; // offset: 0x0 ordinal: 0x1
  ULONG WaitMode : 1;               // offset: 0x0 ordinal: 0x2
  ULONG WorkerCount : 29;           // offset: 0x0 ordinal: 0x3
  LONG QueueWorkerInfo;             // offset: 0x0 ordinal: 0x4
} EX_QUEUE_WORKER_INFO;

// 0x18 bytes (sizeof)
typedef struct _SHARED_CACHE_MAP_LIST_CURSOR {
  struct _LIST_ENTRY SharedCacheMapLinks; // offset: 0x0 ordinal: 0x0
  ULONG Flags;                            // offset: 0x10 ordinal: 0x1
} _SHARED_CACHE_MAP_LIST_CURSOR;

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
  union __anon_1710 Flags;                   // offset: 0x2 ordinal: 0x1
  ULONG PolicyCount;                         // offset: 0x4 ordinal: 0x2
  struct PROCESSOR_IDLESTATE_INFO Policy[3]; // offset: 0x8 ordinal: 0x3
} PROCESSOR_IDLESTATE_POLICY;

// 0x4 bytes (sizeof)
typedef union __anon_1703 {
  ULONG Active : 1;             // offset: 0x0 ordinal: 0x0
  ULONG OnlyTryAcquireUsed : 1; // offset: 0x0 ordinal: 0x1
  ULONG ReleasedOutOfOrder : 1; // offset: 0x0 ordinal: 0x2
  ULONG SequenceNumber : 29;    // offset: 0x0 ordinal: 0x3
  ULONG Whole;                  // offset: 0x0 ordinal: 0x4
} __anon_1703;

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
  union __anon_1703 u1;                    // offset: 0x48 ordinal: 0x7
  LONG ChildrenCount;                      // offset: 0x4c ordinal: 0x8
  VOID *StackTrace[8];                     // offset: 0x50 ordinal: 0x9
  VOID *ParentStackTrace[8];               // offset: 0x90 ordinal: 0xa
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
typedef union __anon_1678 {
  ULONG LongFlags;                      // offset: 0x0 ordinal: 0x0
  struct _MM_SESSION_SPACE_FLAGS Flags; // offset: 0x0 ordinal: 0x1
} __anon_1678;

// 0x8 bytes (sizeof)
typedef struct __anon_1659 {
  ULONG Signature; // offset: 0x0 ordinal: 0x0
  ULONG CheckSum;  // offset: 0x4 ordinal: 0x1
} __anon_1659;

// 0x48 bytes (sizeof)
typedef struct _PO_NOTIFY_ORDER_LEVEL {
  ULONG DeviceCount;             // offset: 0x0 ordinal: 0x0
  ULONG ActiveCount;             // offset: 0x4 ordinal: 0x1
  struct _LIST_ENTRY WaitSleep;  // offset: 0x8 ordinal: 0x2
  struct _LIST_ENTRY ReadySleep; // offset: 0x18 ordinal: 0x3
  struct _LIST_ENTRY ReadyS0;    // offset: 0x28 ordinal: 0x4
  struct _LIST_ENTRY WaitS0;     // offset: 0x38 ordinal: 0x5
} _PO_NOTIFY_ORDER_LEVEL;

// 0x298 bytes (sizeof)
typedef struct _PO_DEVICE_NOTIFY_ORDER {
  UCHAR Locked;                                // offset: 0x0 ordinal: 0x0
  struct _DEVICE_OBJECT **WarmEjectPdoPointer; // offset: 0x8 ordinal: 0x1
  struct _PO_NOTIFY_ORDER_LEVEL OrderLevel[9]; // offset: 0x10 ordinal: 0x2
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

// 0x8 bytes (sizeof)
typedef struct _RTL_HANDLE_TABLE_ENTRY {
  union {
    ULONG Flags;                              // offset: 0x0 ordinal: 0x0
    struct _RTL_HANDLE_TABLE_ENTRY *NextFree; // offset: 0x0 ordinal: 0x1
  };
} _RTL_HANDLE_TABLE_ENTRY;

// 0x4 bytes (sizeof)
typedef union __anon_1612 {
  ULONG AsULONG;            // offset: 0x0 ordinal: 0x0
  ULONG IncreasePolicy : 2; // offset: 0x0 ordinal: 0x1
  ULONG DecreasePolicy : 2; // offset: 0x0 ordinal: 0x2
  ULONG Reserved : 28;      // offset: 0x0 ordinal: 0x3
} __anon_1612;

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
typedef union __anon_1595 {
  ULONG PhysicalAddress; // offset: 0x0 ordinal: 0x0
  ULONG VirtualSize;     // offset: 0x0 ordinal: 0x1
} __anon_1595;

// 0x28 bytes (sizeof)
typedef struct _IMAGE_SECTION_HEADER {
  UCHAR Name[8];              // offset: 0x0 ordinal: 0x0
  union __anon_1595 Misc;     // offset: 0x8 ordinal: 0x1
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

// 0x4 bytes (sizeof)
typedef union _KBUGCHECK_ACTIVE_STATE {
  ULONG BugCheckState : 2;  // offset: 0x0 ordinal: 0x0
  ULONG RecursionCount : 2; // offset: 0x0 ordinal: 0x1
  ULONG BugCheckOwner : 28; // offset: 0x0 ordinal: 0x2
  LONG Value;               // offset: 0x0 ordinal: 0x3
} _KBUGCHECK_ACTIVE_STATE;

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
    union __anon_1584 Flags; // offset: 0x7 ordinal: 0x5
  };
  ULONG TimeCheck;       // offset: 0x8 ordinal: 0x6
  ULONG IncreaseTime;    // offset: 0xc ordinal: 0x7
  ULONG DecreaseTime;    // offset: 0x10 ordinal: 0x8
  ULONG IncreasePercent; // offset: 0x14 ordinal: 0x9
  ULONG DecreasePercent; // offset: 0x18 ordinal: 0xa
} PROCESSOR_PERFSTATE_POLICY;

// 0x4 bytes (sizeof)
typedef struct __anon_1583 {
  ULONG MissedEtwRegistration : 1; // offset: 0x0 ordinal: 0x0
  ULONG Spare : 31;                // offset: 0x0 ordinal: 0x1
} __anon_1583;

// 0x28 bytes (sizeof)
typedef struct _VF_SUSPECT_DRIVER_ENTRY {
  struct _LIST_ENTRY Links;        // offset: 0x0 ordinal: 0x0
  ULONG Loads;                     // offset: 0x10 ordinal: 0x1
  ULONG Unloads;                   // offset: 0x14 ordinal: 0x2
  struct _UNICODE_STRING BaseName; // offset: 0x18 ordinal: 0x3
} _VF_SUSPECT_DRIVER_ENTRY;

// 0x4 bytes (sizeof)
typedef union __anon_1581 {
  struct __anon_1583 Flags; // offset: 0x0 ordinal: 0x0
  ULONG Whole;              // offset: 0x0 ordinal: 0x1
} __anon_1581;

// 0x4 bytes (sizeof)
typedef struct __anon_1571 {
  ULONG SnapSharedExportsFailed : 1; // offset: 0x0 ordinal: 0x0
  ULONG Spare : 31;                  // offset: 0x0 ordinal: 0x1
} __anon_1571;

// 0x18 bytes (sizeof)
typedef union __anon_1572 {
  struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS
      AllSharedExportThunks; // offset: 0x0 ordinal: 0x0
  struct __anon_1571 Flags;  // offset: 0x0 ordinal: 0x1
} __anon_1572;

// 0x4 bytes (sizeof)
typedef struct __anon_1567 {
  ULONG Type; // offset: 0x0 ordinal: 0x0
} __anon_1567;

// 0x4 bytes (sizeof)
typedef struct __anon_1566 {
  ULONG Level; // offset: 0x0 ordinal: 0x0
} __anon_1566;

// 0x18 bytes (sizeof)
typedef struct _POP_ACTION_TRIGGER {
  enum POWER_POLICY_DEVICE_TYPE Type; // offset: 0x0 ordinal: 0x0
  ULONG Flags;                        // offset: 0x4 ordinal: 0x1
  struct _POP_TRIGGER_WAIT *Wait;     // offset: 0x8 ordinal: 0x2
  union {
    struct __anon_1566 Battery; // offset: 0x10 ordinal: 0x3
    struct __anon_1567 Button;  // offset: 0x10 ordinal: 0x4
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

// 0x10 bytes (sizeof)
typedef struct _UNEXPECTED_INTERRUPT {
  UCHAR PushImmOp; // offset: 0x0 ordinal: 0x0
  ULONG PushImm;   // offset: 0x1 ordinal: 0x1
  UCHAR PushRbp;   // offset: 0x5 ordinal: 0x2
  UCHAR JmpOp;     // offset: 0x6 ordinal: 0x3
  LONG JmpOffset;  // offset: 0x7 ordinal: 0x4
} _UNEXPECTED_INTERRUPT;

// 0x40 bytes (sizeof)
typedef struct _IO_WORKITEM {
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x0 ordinal: 0x0
  VOID(*Routine)
  (VOID *, VOID *, struct _IO_WORKITEM *); // offset: 0x20 ordinal: 0x1
  VOID *IoObject;                          // offset: 0x28 ordinal: 0x2
  VOID *Context;                           // offset: 0x30 ordinal: 0x3
  ULONG Type;                              // offset: 0x38 ordinal: 0x4
} _IO_WORKITEM;

typedef VOID (*__anon_1444)(VOID *, VOID *, struct _IO_WORKITEM *);

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

typedef VOID (*__anon_1422)(ULONG, ULONG, VOID *);

// 0x4 bytes (sizeof)
typedef struct _MMSECURE_FLAGS {
  ULONG ReadOnly : 1; // offset: 0x0 ordinal: 0x0
  ULONG NoWrite : 1;  // offset: 0x0 ordinal: 0x1
  ULONG Spare : 10;   // offset: 0x0 ordinal: 0x2
} _MMSECURE_FLAGS;

// 0x8 bytes (sizeof)
typedef union __anon_1416 {
  struct _MMSECURE_FLAGS Flags; // offset: 0x0 ordinal: 0x0
  VOID *StartVa;                // offset: 0x0 ordinal: 0x1
} __anon_1416;

// 0x10 bytes (sizeof)
typedef struct _MMADDRESS_LIST {
  union __anon_1416 u1; // offset: 0x0 ordinal: 0x0
  VOID *EndVa;          // offset: 0x8 ordinal: 0x1
} _MMADDRESS_LIST;

// 0x10 bytes (sizeof)
typedef union __anon_1414 {
  struct _LIST_ENTRY List;        // offset: 0x0 ordinal: 0x0
  struct _MMADDRESS_LIST Secured; // offset: 0x0 ordinal: 0x1
} __anon_1414;

// 0xc bytes (sizeof)
typedef struct _OBJECT_REF_STACK_INFO {
  ULONG Sequence;   // offset: 0x0 ordinal: 0x0
  USHORT Index;     // offset: 0x4 ordinal: 0x1
  USHORT NumTraces; // offset: 0x6 ordinal: 0x2
  ULONG Tag;        // offset: 0x8 ordinal: 0x3
} _OBJECT_REF_STACK_INFO;

// 0x18 bytes (sizeof)
typedef struct _OBJECT_DIRECTORY_ENTRY {
  struct _OBJECT_DIRECTORY_ENTRY *ChainLink; // offset: 0x0 ordinal: 0x0
  VOID *Object;                              // offset: 0x8 ordinal: 0x1
  ULONG HashValue;                           // offset: 0x10 ordinal: 0x2
} _OBJECT_DIRECTORY_ENTRY;

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

// 0x10 bytes (sizeof)
typedef struct _TRACE_ENABLE_CONTEXT_EX {
  USHORT LoggerId;       // offset: 0x0 ordinal: 0x0
  UCHAR Level;           // offset: 0x2 ordinal: 0x1
  UCHAR InternalFlag;    // offset: 0x3 ordinal: 0x2
  ULONG EnableFlags;     // offset: 0x4 ordinal: 0x3
  ULONG EnableFlagsHigh; // offset: 0x8 ordinal: 0x4
  ULONG Reserved;        // offset: 0xc ordinal: 0x5
} _TRACE_ENABLE_CONTEXT_EX;

// 0x8 bytes (sizeof)
typedef struct _TRACE_ENABLE_CONTEXT {
  USHORT LoggerId;    // offset: 0x0 ordinal: 0x0
  UCHAR Level;        // offset: 0x2 ordinal: 0x1
  UCHAR InternalFlag; // offset: 0x3 ordinal: 0x2
  ULONG EnableFlags;  // offset: 0x4 ordinal: 0x3
} _TRACE_ENABLE_CONTEXT;

// 0x48 bytes (sizeof)
typedef struct _IOP_FILE_OBJECT_EXTENSION {
  ULONG FoExtFlags;                         // offset: 0x0 ordinal: 0x0
  VOID *FoExtPerTypeExtension[7];           // offset: 0x8 ordinal: 0x1
  enum _IOP_PRIORITY_HINT FoIoPriorityHint; // offset: 0x40 ordinal: 0x2
} _IOP_FILE_OBJECT_EXTENSION;

// 0x8 bytes (sizeof)
typedef struct _CLIENT_ID32 {
  ULONG UniqueProcess; // offset: 0x0 ordinal: 0x0
  ULONG UniqueThread;  // offset: 0x4 ordinal: 0x1
} _CLIENT_ID32;

// 0x10 bytes (sizeof)
typedef struct _OBJECT_DUMP_CONTROL {
  VOID *Stream; // offset: 0x0 ordinal: 0x0
  ULONG Detail; // offset: 0x8 ordinal: 0x1
} _OBJECT_DUMP_CONTROL;

typedef VOID (*__anon_1300)(VOID *, struct _OBJECT_DUMP_CONTROL *);

// 0x4 bytes (sizeof)
typedef struct __anon_1290 {
  ULONG Secure : 1; // offset: 0x0 ordinal: 0x0
} __anon_1290;

// 0x4 bytes (sizeof)
typedef union __anon_1289 {
  struct __anon_1290 s1; // offset: 0x0 ordinal: 0x0
} __anon_1289;

// 0x4 bytes (sizeof)
typedef struct __anon_1285 {
  ULONG WriteAccess : 1; // offset: 0x0 ordinal: 0x0
  ULONG AutoRelease : 1; // offset: 0x0 ordinal: 0x1
  ULONG ForceUnlink : 1; // offset: 0x0 ordinal: 0x2
} __anon_1285;

// 0x4 bytes (sizeof)
typedef union __anon_1279 {
  struct __anon_1285 s1; // offset: 0x0 ordinal: 0x0
} __anon_1279;

// 0x4 bytes (sizeof)
typedef struct __anon_1283 {
  ULONG Revoked : 1;      // offset: 0x0 ordinal: 0x0
  ULONG Impersonated : 1; // offset: 0x0 ordinal: 0x1
} __anon_1283;

// 0x4 bytes (sizeof)
typedef union __anon_1277 {
  struct __anon_1283 s1; // offset: 0x0 ordinal: 0x0
} __anon_1277;

// 0x4 bytes (sizeof)
typedef struct __anon_1263 {
  ULONG QueueType : 2;              // offset: 0x0 ordinal: 0x0
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
} __anon_1263;

// 0x4 bytes (sizeof)
typedef union __anon_1256 {
  struct __anon_1263 s1; // offset: 0x0 ordinal: 0x0
  ULONG State;           // offset: 0x0 ordinal: 0x1
} __anon_1256;

// 0x4 bytes (sizeof)
typedef struct __anon_1251 {
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
} __anon_1251;

// 0x4 bytes (sizeof)
typedef union __anon_1243 {
  struct __anon_1251 s1; // offset: 0x0 ordinal: 0x0
  ULONG State;           // offset: 0x0 ordinal: 0x1
} __anon_1243;

// 0x4 bytes (sizeof)
typedef struct __anon_1228 {
  ULONG Internal : 1; // offset: 0x0 ordinal: 0x0
  ULONG Secure : 1;   // offset: 0x0 ordinal: 0x1
} __anon_1228;

// 0x4 bytes (sizeof)
typedef union __anon_1229 {
  struct __anon_1228 s1; // offset: 0x0 ordinal: 0x0
} __anon_1229;

// 0x8 bytes (sizeof)
typedef struct _ALPC_MESSAGE_ATTRIBUTES {
  ULONG AllocatedAttributes; // offset: 0x0 ordinal: 0x0
  ULONG ValidAttributes;     // offset: 0x4 ordinal: 0x1
} _ALPC_MESSAGE_ATTRIBUTES;

// 0x4 bytes (sizeof)
typedef union __anon_1219 {
  struct __anon_1218 s2; // offset: 0x0 ordinal: 0x0
  ULONG ZeroInit;        // offset: 0x0 ordinal: 0x1
} __anon_1219;

// 0x4 bytes (sizeof)
typedef union __anon_1217 {
  struct __anon_1216 s1; // offset: 0x0 ordinal: 0x0
  ULONG Length;          // offset: 0x0 ordinal: 0x1
} __anon_1217;

// 0x18 bytes (sizeof)
typedef struct _PORT_MESSAGE32 {
  union __anon_1217 u1; // offset: 0x0 ordinal: 0x0
  union __anon_1219 u2; // offset: 0x4 ordinal: 0x1
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

// 0x20 bytes (sizeof)
typedef struct VACB_LEVEL_ALLOCATION_LIST {
  struct _LIST_ENTRY VacbLevelList; // offset: 0x0 ordinal: 0x0
  VOID *VacbLevelWithBcbListHeads;  // offset: 0x10 ordinal: 0x1
  ULONG VacbLevelsAllocated;        // offset: 0x18 ordinal: 0x2
} VACB_LEVEL_ALLOCATION_LIST;

// 0x4 bytes (sizeof)
typedef struct __anon_1181 {
  ULONG Reason; // offset: 0x0 ordinal: 0x0
} __anon_1181;

// 0x10 bytes (sizeof)
typedef struct _VACB_ARRAY_HEADER {
  ULONG VacbArrayIndex;     // offset: 0x0 ordinal: 0x0
  ULONG MappingCount;       // offset: 0x4 ordinal: 0x1
  ULONG HighestMappedIndex; // offset: 0x8 ordinal: 0x2
  ULONG Reserved;           // offset: 0xc ordinal: 0x3
} _VACB_ARRAY_HEADER;

// 0x4 bytes (sizeof)
typedef struct _PRIVATE_CACHE_MAP_FLAGS {
  ULONG DontUse : 16;         // offset: 0x0 ordinal: 0x0
  ULONG ReadAheadActive : 1;  // offset: 0x0 ordinal: 0x1
  ULONG ReadAheadEnabled : 1; // offset: 0x0 ordinal: 0x2
  ULONG PagePriority : 3;     // offset: 0x0 ordinal: 0x3
  ULONG Available : 11;       // offset: 0x0 ordinal: 0x4
} _PRIVATE_CACHE_MAP_FLAGS;

// 0xc bytes (sizeof)
typedef struct _KSYSTEM_TIME {
  ULONG LowPart;  // offset: 0x0 ordinal: 0x0
  LONG High1Time; // offset: 0x4 ordinal: 0x1
  LONG High2Time; // offset: 0x8 ordinal: 0x2
} _KSYSTEM_TIME;

// 0x10 bytes (sizeof)
typedef struct _CPU_INFO {
  ULONG Eax; // offset: 0x0 ordinal: 0x0
  ULONG Ebx; // offset: 0x4 ordinal: 0x1
  ULONG Ecx; // offset: 0x8 ordinal: 0x2
  ULONG Edx; // offset: 0xc ordinal: 0x3
} _CPU_INFO;

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

// 0x10 bytes (sizeof)
typedef struct _PNP_ASSIGN_RESOURCES_CONTEXT {
  ULONG IncludeFailedDevices;           // offset: 0x0 ordinal: 0x0
  ULONG DeviceCount;                    // offset: 0x4 ordinal: 0x1
  struct _DEVICE_OBJECT *DeviceList[1]; // offset: 0x8 ordinal: 0x2
} _PNP_ASSIGN_RESOURCES_CONTEXT;

// 0x10 bytes (sizeof)
typedef struct _RELATION_LIST_ENTRY {
  ULONG Count;                       // offset: 0x0 ordinal: 0x0
  ULONG MaxCount;                    // offset: 0x4 ordinal: 0x1
  struct _DEVICE_OBJECT *Devices[1]; // offset: 0x8 ordinal: 0x2
} _RELATION_LIST_ENTRY;

// 0x8 bytes (sizeof)
typedef struct __anon_1094 {
  ULONG NotificationCode; // offset: 0x0 ordinal: 0x0
  ULONG NotificationData; // offset: 0x4 ordinal: 0x1
} __anon_1094;

typedef ULONG (*__anon_1088)(VOID *);

typedef ULONG (*__anon_1087)(VOID *, enum PROFILE_DEPARTURE_STYLE);

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

// 0x18 bytes (sizeof)
typedef struct _RELATION_LIST {
  ULONG Count;                             // offset: 0x0 ordinal: 0x0
  ULONG TagCount;                          // offset: 0x4 ordinal: 0x1
  ULONG FirstLevel;                        // offset: 0x8 ordinal: 0x2
  ULONG MaxLevel;                          // offset: 0xc ordinal: 0x3
  struct _RELATION_LIST_ENTRY *Entries[1]; // offset: 0x10 ordinal: 0x4
} _RELATION_LIST;

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
typedef struct _DEVICE_RELATIONS {
  ULONG Count;                       // offset: 0x0 ordinal: 0x0
  struct _DEVICE_OBJECT *Objects[1]; // offset: 0x8 ordinal: 0x1
} _DEVICE_RELATIONS;

// 0x8 bytes (sizeof)
typedef union __anon_1055 {
  struct _DEVICE_NODE *LegacyDeviceNode;            // offset: 0x0 ordinal: 0x0
  struct _DEVICE_RELATIONS *PendingDeviceRelations; // offset: 0x0 ordinal: 0x1
  VOID *Information;                                // offset: 0x0 ordinal: 0x2
} __anon_1055;

// 0x4 bytes (sizeof)
typedef struct _CONTEXT32_UPDATE {
  ULONG NumberEntries; // offset: 0x0 ordinal: 0x0
} _CONTEXT32_UPDATE;

// 0x10 bytes (sizeof)
typedef struct _PCW_DATA {
  VOID *Data; // offset: 0x0 ordinal: 0x0
  ULONG Size; // offset: 0x8 ordinal: 0x1
} _PCW_DATA;

// 0x4 bytes (sizeof)
typedef struct __anon_1023 {
  ULONG FileOffset; // offset: 0x0 ordinal: 0x0
} __anon_1023;

// 0x4 bytes (sizeof)
typedef union __anon_1022 {
  ULONG UserData; // offset: 0x0 ordinal: 0x0
  ULONG Next;     // offset: 0x0 ordinal: 0x1
} __anon_1022;

// 0x4 bytes (sizeof)
typedef struct __anon_1021 {
  union __anon_1022 u; // offset: 0x0 ordinal: 0x0
} __anon_1021;

// 0x8 bytes (sizeof)
typedef struct __anon_1020 {
  ULONG Last;          // offset: 0x0 ordinal: 0x0
  union __anon_1022 u; // offset: 0x4 ordinal: 0x1
} __anon_1020;

// 0x8 bytes (sizeof)
typedef union __anon_1019 {
  struct __anon_1020 OldCell; // offset: 0x0 ordinal: 0x0
  struct __anon_1021 NewCell; // offset: 0x0 ordinal: 0x1
} __anon_1019;

// 0xc bytes (sizeof)
typedef struct _HCELL {
  LONG Size;           // offset: 0x0 ordinal: 0x0
  union __anon_1019 u; // offset: 0x4 ordinal: 0x1
} _HCELL;

// 0x18 bytes (sizeof)
typedef struct __anon_1009 {
  ULONG Action; // offset: 0x0 ordinal: 0x0
  VOID *Handle; // offset: 0x8 ordinal: 0x1
  LONG Status;  // offset: 0x10 ordinal: 0x2
} __anon_1009;

// 0xc bytes (sizeof)
typedef struct __anon_1007 {
  enum _CM_LOAD_FAILURE_TYPE Failure; // offset: 0x0 ordinal: 0x0
  LONG Status;                        // offset: 0x4 ordinal: 0x1
  ULONG Point;                        // offset: 0x8 ordinal: 0x2
} __anon_1007;

// 0x8 bytes (sizeof)
typedef struct _KTRANSACTION_HISTORY {
  enum __anon_1001 RecordType; // offset: 0x0 ordinal: 0x0
  ULONG Payload;               // offset: 0x4 ordinal: 0x1
} _KTRANSACTION_HISTORY;

// 0x8 bytes (sizeof)
typedef struct __anon_995 {
  ULONG idxRecord;    // offset: 0x0 ordinal: 0x0
  ULONG cidContainer; // offset: 0x4 ordinal: 0x1
} __anon_995;

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

typedef VOID (*__anon_1004)(struct _RTL_AVL_TABLE *, VOID *);

typedef VOID *(*__anon_1003)(struct _RTL_AVL_TABLE *, ULONG);

typedef enum _RTL_GENERIC_COMPARE_RESULTS (*__anon_1002)(
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

// 0x28 bytes (sizeof)
typedef struct _CM_WORKITEM {
  struct _LIST_ENTRY ListEntry;  // offset: 0x0 ordinal: 0x0
  ULONG Private;                 // offset: 0x10 ordinal: 0x1
  VOID (*WorkerRoutine)(VOID *); // offset: 0x18 ordinal: 0x2
  VOID *Parameter;               // offset: 0x20 ordinal: 0x3
} _CM_WORKITEM;

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

typedef VOID (*__anon_887)(VOID *, ULONG);

typedef VOID *(*__anon_886)(ULONG, UCHAR, ULONG);

// 0x4 bytes (sizeof)
typedef union __anon_862 {
  ULONG LongFlags2;               // offset: 0x0 ordinal: 0x0
  struct _MMVAD_FLAGS2 VadFlags2; // offset: 0x0 ordinal: 0x1
} __anon_862;

// 0x8 bytes (sizeof)
typedef struct _MI_EXTRA_IMAGE_INFORMATION {
  ULONG SizeOfHeaders; // offset: 0x0 ordinal: 0x0
  ULONG SizeOfImage;   // offset: 0x4 ordinal: 0x1
} _MI_EXTRA_IMAGE_INFORMATION;

// 0x4 bytes (sizeof)
typedef struct _SEGMENT_FLAGS {
  ULONG TotalNumberOfPtes4132 : 10;    // offset: 0x0 ordinal: 0x0
  ULONG ExtraSharedWowSubsections : 1; // offset: 0x0 ordinal: 0x1
  ULONG LargePages : 1;                // offset: 0x0 ordinal: 0x2
  ULONG WatchProto : 1;                // offset: 0x0 ordinal: 0x3
  ULONG DebugSymbolsLoaded : 1;        // offset: 0x0 ordinal: 0x4
  ULONG WriteCombined : 1;             // offset: 0x0 ordinal: 0x5
  ULONG NoCache : 1;                   // offset: 0x0 ordinal: 0x6
  ULONG FloppyMedia : 1;               // offset: 0x0 ordinal: 0x7
  ULONG DefaultProtectionMask : 5;     // offset: 0x0 ordinal: 0x8
  ULONG Binary32 : 1;                  // offset: 0x0 ordinal: 0x9
  ULONG ContainsDebug : 1;             // offset: 0x0 ordinal: 0xa
  ULONG Spare : 8;                     // offset: 0x0 ordinal: 0xb
} _SEGMENT_FLAGS;

// 0x4 bytes (sizeof)
typedef union __anon_827 {
  ULONG LongFlags;                            // offset: 0x0 ordinal: 0x0
  struct _MMSUBSECTION_FLAGS SubsectionFlags; // offset: 0x0 ordinal: 0x1
} __anon_827;

// 0x28 bytes (sizeof)
typedef struct _MMSUBSECTION_NODE {
  union __anon_827 u;                    // offset: 0x0 ordinal: 0x0
  ULONG StartingSector;                  // offset: 0x4 ordinal: 0x1
  ULONG NumberOfFullSectors;             // offset: 0x8 ordinal: 0x2
  union __anon_828 u1;                   // offset: 0x10 ordinal: 0x3
  struct _MMSUBSECTION_NODE *LeftChild;  // offset: 0x18 ordinal: 0x4
  struct _MMSUBSECTION_NODE *RightChild; // offset: 0x20 ordinal: 0x5
} _MMSUBSECTION_NODE;

// 0x4 bytes (sizeof)
typedef union __anon_817 {
  ULONG LongFlags;               // offset: 0x0 ordinal: 0x0
  struct _MMSECTION_FLAGS Flags; // offset: 0x0 ordinal: 0x1
} __anon_817;

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
  union {
    ULONG AffinityMask; // offset: 0x14 ordinal: 0x6
    USHORT Group;       // offset: 0x14 ordinal: 0x7
  };
  USHORT GroupIndex;             // offset: 0x16 ordinal: 0x8
  ULONG ConfigurationDataLength; // offset: 0x18 ordinal: 0x9
  ULONG IdentifierLength;        // offset: 0x1c ordinal: 0xa
  CHAR *Identifier;              // offset: 0x20 ordinal: 0xb
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

// 0x10 bytes (sizeof)
typedef struct _I386_LOADER_BLOCK {
  VOID *CommonDataArea; // offset: 0x0 ordinal: 0x0
  ULONG MachineType;    // offset: 0x8 ordinal: 0x1
  ULONG VirtualBias;    // offset: 0xc ordinal: 0x2
} _I386_LOADER_BLOCK;

// 0x10 bytes (sizeof)
typedef union __anon_769 {
  struct _I386_LOADER_BLOCK I386; // offset: 0x0 ordinal: 0x0
  struct _IA64_LOADER_BLOCK Ia64; // offset: 0x0 ordinal: 0x1
} __anon_769;

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
typedef struct __anon_737 {
  ULONG FilePointerIndex : 9; // offset: 0x0 ordinal: 0x0
  ULONG HardFault : 1;        // offset: 0x0 ordinal: 0x1
  ULONG Spare1 : 2;           // offset: 0x0 ordinal: 0x2
} __anon_737;

// 0x4 bytes (sizeof)
typedef struct __anon_736 {
  ULONG FilePointerIndex : 9; // offset: 0x0 ordinal: 0x0
  ULONG HardFault : 1;        // offset: 0x0 ordinal: 0x1
  ULONG Image : 1;            // offset: 0x0 ordinal: 0x2
  ULONG Spare0 : 1;           // offset: 0x0 ordinal: 0x3
} __anon_736;

// 0x4 bytes (sizeof)
typedef union _MM_PAGE_ACCESS_INFO_FLAGS {
  struct __anon_736 File;    // offset: 0x0 ordinal: 0x0
  struct __anon_737 Private; // offset: 0x0 ordinal: 0x1
} _MM_PAGE_ACCESS_INFO_FLAGS;

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

// 0x10 bytes (sizeof)
typedef struct _GENERIC_MAPPING {
  ULONG GenericRead;    // offset: 0x0 ordinal: 0x0
  ULONG GenericWrite;   // offset: 0x4 ordinal: 0x1
  ULONG GenericExecute; // offset: 0x8 ordinal: 0x2
  ULONG GenericAll;     // offset: 0xc ordinal: 0x3
} _GENERIC_MAPPING;

// 0xc bytes (sizeof)
typedef struct __anon_708 {
  ULONG DataSize;  // offset: 0x0 ordinal: 0x0
  ULONG Reserved1; // offset: 0x4 ordinal: 0x1
  ULONG Reserved2; // offset: 0x8 ordinal: 0x2
} __anon_708;

// 0xc bytes (sizeof)
typedef struct __anon_707 {
  ULONG Start;    // offset: 0x0 ordinal: 0x0
  ULONG Length;   // offset: 0x4 ordinal: 0x1
  ULONG Reserved; // offset: 0x8 ordinal: 0x2
} __anon_707;

// 0xc bytes (sizeof)
typedef struct __anon_706 {
  ULONG Channel;   // offset: 0x0 ordinal: 0x0
  ULONG Port;      // offset: 0x4 ordinal: 0x1
  ULONG Reserved1; // offset: 0x8 ordinal: 0x2
} __anon_706;

// 0xc bytes (sizeof)
typedef struct __anon_697 {
  ULONG Priority;  // offset: 0x0 ordinal: 0x0
  ULONG Reserved1; // offset: 0x4 ordinal: 0x1
  ULONG Reserved2; // offset: 0x8 ordinal: 0x2
} __anon_697;

// 0x10 bytes (sizeof)
typedef struct __anon_696 {
  ULONG Length;       // offset: 0x0 ordinal: 0x0
  ULONG MinBusNumber; // offset: 0x4 ordinal: 0x1
  ULONG MaxBusNumber; // offset: 0x8 ordinal: 0x2
  ULONG Reserved;     // offset: 0xc ordinal: 0x3
} __anon_696;

// 0x8 bytes (sizeof)
typedef struct __anon_694 {
  ULONG MinimumChannel; // offset: 0x0 ordinal: 0x0
  ULONG MaximumChannel; // offset: 0x4 ordinal: 0x1
} __anon_694;

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
typedef struct __anon_661 {
  enum _FS_FILTER_SECTION_SYNC_TYPE SyncType; // offset: 0x0 ordinal: 0x0
  ULONG PageProtection;                       // offset: 0x4 ordinal: 0x1
} __anon_661;

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
typedef struct __anon_581 {
  struct _POWER_SEQUENCE *PowerSequence; // offset: 0x0 ordinal: 0x0
} __anon_581;

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
  ULONG Reserved : 13;                     // offset: 0x4 ordinal: 0x15
  ULONG Address;                           // offset: 0x8 ordinal: 0x16
  ULONG UINumber;                          // offset: 0xc ordinal: 0x17
  enum _DEVICE_POWER_STATE DeviceState[7]; // offset: 0x10 ordinal: 0x18
  enum _SYSTEM_POWER_STATE SystemWake;     // offset: 0x2c ordinal: 0x19
  enum _DEVICE_POWER_STATE DeviceWake;     // offset: 0x30 ordinal: 0x1a
  ULONG D1Latency;                         // offset: 0x34 ordinal: 0x1b
  ULONG D2Latency;                         // offset: 0x38 ordinal: 0x1c
  ULONG D3Latency;                         // offset: 0x3c ordinal: 0x1d
} _DEVICE_CAPABILITIES;

// 0x8 bytes (sizeof)
typedef struct __anon_573 {
  struct _DEVICE_CAPABILITIES *Capabilities; // offset: 0x0 ordinal: 0x0
} __anon_573;

// 0x10 bytes (sizeof)
typedef struct _GUID {
  ULONG Data1;    // offset: 0x0 ordinal: 0x0
  USHORT Data2;   // offset: 0x4 ordinal: 0x1
  USHORT Data3;   // offset: 0x6 ordinal: 0x2
  UCHAR Data4[8]; // offset: 0x8 ordinal: 0x3
} _GUID;

// 0x20 bytes (sizeof)
typedef struct __anon_572 {
  struct _GUID *InterfaceType;  // offset: 0x0 ordinal: 0x0
  USHORT Size;                  // offset: 0x8 ordinal: 0x1
  USHORT Version;               // offset: 0xa ordinal: 0x2
  struct _INTERFACE *Interface; // offset: 0x10 ordinal: 0x3
  VOID *InterfaceSpecificData;  // offset: 0x18 ordinal: 0x4
} __anon_572;

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
typedef union _PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA {
  ULONG CapturedCpuShareWeight; // offset: 0x0 ordinal: 0x0
  ULONG CapturedTotalWeight;    // offset: 0x4 ordinal: 0x1
  LONGLONG CombinedData;        // offset: 0x0 ordinal: 0x2
} _PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA;

// 0x20 bytes (sizeof)
typedef struct __anon_582 {
  union {
    ULONG SystemContext; // offset: 0x0 ordinal: 0x0
    struct _SYSTEM_POWER_STATE_CONTEXT
        SystemPowerStateContext; // offset: 0x0 ordinal: 0x1
  };
  enum _POWER_STATE_TYPE Type;    // offset: 0x8 ordinal: 0x2
  union _POWER_STATE State;       // offset: 0x10 ordinal: 0x3
  enum POWER_ACTION ShutdownType; // offset: 0x18 ordinal: 0x4
} __anon_582;

// 0x10 bytes (sizeof)
typedef struct __anon_578 {
  enum DEVICE_TEXT_TYPE DeviceTextType; // offset: 0x0 ordinal: 0x0
  ULONG LocaleId;                       // offset: 0x8 ordinal: 0x1
} __anon_578;

// 0x20 bytes (sizeof)
typedef struct __anon_575 {
  ULONG WhichSpace; // offset: 0x0 ordinal: 0x0
  VOID *Buffer;     // offset: 0x8 ordinal: 0x1
  ULONG Offset;     // offset: 0x10 ordinal: 0x2
  ULONG Length;     // offset: 0x18 ordinal: 0x3
} __anon_575;

// 0x10 bytes (sizeof)
typedef struct __anon_567 {
  ULONG SecurityInformation; // offset: 0x0 ordinal: 0x0
  VOID *SecurityDescriptor;  // offset: 0x8 ordinal: 0x1
} __anon_567;

// 0x10 bytes (sizeof)
typedef struct __anon_566 {
  ULONG SecurityInformation; // offset: 0x0 ordinal: 0x0
  ULONG Length;              // offset: 0x8 ordinal: 0x1
} __anon_566;

// 0x20 bytes (sizeof)
typedef struct __anon_565 {
  ULONG OutputBufferLength; // offset: 0x0 ordinal: 0x0
  ULONG InputBufferLength;  // offset: 0x8 ordinal: 0x1
  ULONG IoControlCode;      // offset: 0x10 ordinal: 0x2
  VOID *Type3InputBuffer;   // offset: 0x18 ordinal: 0x3
} __anon_565;

// 0x20 bytes (sizeof)
typedef struct __anon_563 {
  ULONG OutputBufferLength; // offset: 0x0 ordinal: 0x0
  ULONG InputBufferLength;  // offset: 0x8 ordinal: 0x1
  ULONG FsControlCode;      // offset: 0x10 ordinal: 0x2
  VOID *Type3InputBuffer;   // offset: 0x18 ordinal: 0x3
} __anon_563;

// 0x10 bytes (sizeof)
typedef struct __anon_562 {
  ULONG Length;                         // offset: 0x0 ordinal: 0x0
  enum _FSINFOCLASS FsInformationClass; // offset: 0x8 ordinal: 0x1
} __anon_562;

// 0x4 bytes (sizeof)
typedef struct __anon_561 {
  ULONG Length; // offset: 0x0 ordinal: 0x0
} __anon_561;

// 0x20 bytes (sizeof)
typedef struct __anon_560 {
  ULONG Length;       // offset: 0x0 ordinal: 0x0
  VOID *EaList;       // offset: 0x8 ordinal: 0x1
  ULONG EaListLength; // offset: 0x10 ordinal: 0x2
  ULONG EaIndex;      // offset: 0x18 ordinal: 0x3
} __anon_560;

// 0x20 bytes (sizeof)
typedef struct __anon_559 {
  ULONG Length;                                      // offset: 0x0 ordinal: 0x0
  enum _FILE_INFORMATION_CLASS FileInformationClass; // offset: 0x8 ordinal: 0x1
  struct _FILE_OBJECT *FileObject; // offset: 0x10 ordinal: 0x2
  UCHAR ReplaceIfExists;           // offset: 0x18 ordinal: 0x3
  UCHAR AdvanceOnly;               // offset: 0x19 ordinal: 0x4
  union {
    ULONG ClusterCount; // offset: 0x18 ordinal: 0x5
    VOID *DeleteHandle; // offset: 0x18 ordinal: 0x6
  };
} __anon_559;

// 0x10 bytes (sizeof)
typedef struct __anon_558 {
  ULONG Length;                                      // offset: 0x0 ordinal: 0x0
  enum _FILE_INFORMATION_CLASS FileInformationClass; // offset: 0x8 ordinal: 0x1
} __anon_558;

// 0x10 bytes (sizeof)
typedef struct __anon_557 {
  ULONG Length;           // offset: 0x0 ordinal: 0x0
  ULONG CompletionFilter; // offset: 0x8 ordinal: 0x1
} __anon_557;

// 0x20 bytes (sizeof)
typedef struct __anon_556 {
  ULONG Length;                     // offset: 0x0 ordinal: 0x0
  struct _UNICODE_STRING *FileName; // offset: 0x8 ordinal: 0x1
  enum _FILE_INFORMATION_CLASS
      FileInformationClass; // offset: 0x10 ordinal: 0x2
  ULONG FileIndex;          // offset: 0x18 ordinal: 0x3
} __anon_556;

// 0x10 bytes (sizeof)
typedef struct _PO_DIAG_STACK_RECORD {
  ULONG StackDepth; // offset: 0x0 ordinal: 0x0
  VOID *Stack[1];   // offset: 0x8 ordinal: 0x1
} _PO_DIAG_STACK_RECORD;

// 0x8 bytes (sizeof)
typedef struct __anon_506 {
  ULONG IdleTime;    // offset: 0x0 ordinal: 0x0
  ULONG NonIdleTime; // offset: 0x4 ordinal: 0x1
} __anon_506;

// 0x8 bytes (sizeof)
typedef union __anon_478 {
  struct __anon_506 Disk; // offset: 0x0 ordinal: 0x0
} __anon_478;

// 0x58 bytes (sizeof)
typedef struct _DEVICE_OBJECT_POWER_EXTENSION {
  ULONG IdleCount;                       // offset: 0x0 ordinal: 0x0
  ULONG BusyCount;                       // offset: 0x4 ordinal: 0x1
  ULONG BusyReference;                   // offset: 0x8 ordinal: 0x2
  ULONG TotalBusyCount;                  // offset: 0xc ordinal: 0x3
  ULONG ConservationIdleTime;            // offset: 0x10 ordinal: 0x4
  ULONG PerformanceIdleTime;             // offset: 0x14 ordinal: 0x5
  struct _DEVICE_OBJECT *DeviceObject;   // offset: 0x18 ordinal: 0x6
  struct _LIST_ENTRY IdleList;           // offset: 0x20 ordinal: 0x7
  enum _POP_DEVICE_IDLE_TYPE IdleType;   // offset: 0x30 ordinal: 0x8
  enum _DEVICE_POWER_STATE IdleState;    // offset: 0x34 ordinal: 0x9
  enum _DEVICE_POWER_STATE CurrentState; // offset: 0x38 ordinal: 0xa
  struct _LIST_ENTRY Volume;             // offset: 0x40 ordinal: 0xb
  union __anon_478 Specific;             // offset: 0x50 ordinal: 0xc
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
typedef struct __anon_568 {
  struct _VPB *Vpb;                    // offset: 0x0 ordinal: 0x0
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x8 ordinal: 0x1
} __anon_568;

// 0x70 bytes (sizeof)
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
  struct _LIST_ENTRY DependentList;            // offset: 0x50 ordinal: 0xc
  struct _LIST_ENTRY ProviderList;             // offset: 0x60 ordinal: 0xd
} _DEVOBJ_EXTENSION;

// 0x8 bytes (sizeof)
typedef struct _IO_STATUS_BLOCK32 {
  LONG Status;       // offset: 0x0 ordinal: 0x0
  ULONG Information; // offset: 0x4 ordinal: 0x1
} _IO_STATUS_BLOCK32;

// 0x38 bytes (sizeof)
typedef struct _FAST_MUTEX {
  LONG Count;             // offset: 0x0 ordinal: 0x0
  struct _KTHREAD *Owner; // offset: 0x8 ordinal: 0x1
  ULONG Contention;       // offset: 0x10 ordinal: 0x2
  struct _KEVENT Event;   // offset: 0x18 ordinal: 0x3
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

// 0x4 bytes (sizeof)
typedef struct _SINGLE_LIST_ENTRY32 {
  ULONG Next; // offset: 0x0 ordinal: 0x0
} _SINGLE_LIST_ENTRY32;

typedef VOID (*__anon_346)(ULONG);

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
typedef union _KSTACK_COUNT {
  LONG Value;            // offset: 0x0 ordinal: 0x0
  ULONG State : 3;       // offset: 0x0 ordinal: 0x1
  ULONG StackCount : 29; // offset: 0x0 ordinal: 0x2
} _KSTACK_COUNT;

// 0x4 bytes (sizeof)
typedef union __anon_314 {
  ULONG AsULONG;          // offset: 0x0 ordinal: 0x0
  ULONG AllowScaling : 1; // offset: 0x0 ordinal: 0x1
  ULONG Disabled : 1;     // offset: 0x0 ordinal: 0x2
  ULONG HvMaxCState : 4;  // offset: 0x0 ordinal: 0x3
  ULONG Reserved : 26;    // offset: 0x0 ordinal: 0x4
} __anon_314;

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
typedef struct __anon_442 {
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
} __anon_442;

// 0x58 bytes (sizeof)
typedef union __anon_428 {
  struct __anon_442 Overlay; // offset: 0x0 ordinal: 0x0
  struct _KAPC Apc;          // offset: 0x0 ordinal: 0x1
  VOID *CompletionKey;       // offset: 0x0 ordinal: 0x2
} __anon_428;

typedef VOID (*__anon_336)(struct _KAPC *);

typedef VOID (*__anon_335)(struct _KAPC *, VOID (**)(VOID *, VOID *, VOID *),
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
typedef struct __anon_215 {
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
} __anon_215;

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
typedef union __anon_679 {
  struct _INITIAL_PRIVILEGE_SET InitialPrivilegeSet; // offset: 0x0 ordinal: 0x0
  struct _PRIVILEGE_SET PrivilegeSet;                // offset: 0x0 ordinal: 0x1
} __anon_679;

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
  union __anon_679 Privileges;           // offset: 0x50 ordinal: 0xc
  UCHAR AuditPrivileges;                 // offset: 0x7c ordinal: 0xd
  struct _UNICODE_STRING ObjectName;     // offset: 0x80 ordinal: 0xe
  struct _UNICODE_STRING ObjectTypeName; // offset: 0x90 ordinal: 0xf
} _ACCESS_STATE;

typedef LONG (*__anon_1303)(VOID *, VOID *, struct _ACCESS_STATE *, CHAR, ULONG,
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
typedef struct __anon_552 {
  struct _IO_SECURITY_CONTEXT *SecurityContext; // offset: 0x0 ordinal: 0x0
  ULONG Options;                                // offset: 0x8 ordinal: 0x1
  USHORT FileAttributes;                        // offset: 0x10 ordinal: 0x2
  USHORT ShareAccess;                           // offset: 0x12 ordinal: 0x3
  ULONG EaLength;                               // offset: 0x18 ordinal: 0x4
} __anon_552;

typedef LONG (*__anon_1305)(VOID *, UCHAR, struct _OBJECT_NAME_INFORMATION *,
                            ULONG, ULONG *, CHAR);

typedef LONG (*__anon_1304)(VOID *, enum _SECURITY_OPERATION_CODE, ULONG *,
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

// 0x400 bytes (sizeof)
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
} _RTL_USER_PROCESS_PARAMETERS;

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

// 0x10 bytes (sizeof)
typedef struct __anon_1660 {
  struct _GUID DiskId; // offset: 0x0 ordinal: 0x0
} __anon_1660;

// 0x10 bytes (sizeof)
typedef union __anon_1654 {
  struct __anon_1659 Mbr; // offset: 0x0 ordinal: 0x0
  struct __anon_1660 Gpt; // offset: 0x0 ordinal: 0x1
} __anon_1654;

// 0x20 bytes (sizeof)
typedef struct __anon_1098 {
  struct _GUID PowerSettingGuid; // offset: 0x0 ordinal: 0x0
  ULONG Flags;                   // offset: 0x10 ordinal: 0x1
  ULONG SessionId;               // offset: 0x14 ordinal: 0x2
  ULONG DataLength;              // offset: 0x18 ordinal: 0x3
  UCHAR Data[1];                 // offset: 0x1c ordinal: 0x4
} __anon_1098;

// 0x10 bytes (sizeof)
typedef struct __anon_1096 {
  struct _GUID BlockedDriverGuid; // offset: 0x0 ordinal: 0x0
} __anon_1096;

// 0x14 bytes (sizeof)
typedef struct __anon_1089 {
  struct _GUID ClassGuid;    // offset: 0x0 ordinal: 0x0
  WCHAR SymbolicLinkName[1]; // offset: 0x10 ordinal: 0x1
} __anon_1089;

// 0x20 bytes (sizeof)
typedef union __anon_1085 {
  struct __anon_1089 DeviceClass;                // offset: 0x0 ordinal: 0x0
  struct __anon_1090 TargetDevice;               // offset: 0x0 ordinal: 0x1
  struct __anon_1091 InstallDevice;              // offset: 0x0 ordinal: 0x2
  struct __anon_1092 CustomNotification;         // offset: 0x0 ordinal: 0x3
  struct __anon_1093 ProfileNotification;        // offset: 0x0 ordinal: 0x4
  struct __anon_1094 PowerNotification;          // offset: 0x0 ordinal: 0x5
  struct __anon_1095 VetoNotification;           // offset: 0x0 ordinal: 0x6
  struct __anon_1096 BlockedDriverNotification;  // offset: 0x0 ordinal: 0x7
  struct __anon_1097 InvalidIDNotification;      // offset: 0x0 ordinal: 0x8
  struct __anon_1098 PowerSettingNotification;   // offset: 0x0 ordinal: 0x9
  struct __anon_1091 PropertyChangeNotification; // offset: 0x0 ordinal: 0xa
} __anon_1085;

// 0x50 bytes (sizeof)
typedef struct _PLUGPLAY_EVENT_BLOCK {
  struct _GUID EventGuid;                      // offset: 0x0 ordinal: 0x0
  enum _PLUGPLAY_EVENT_CATEGORY EventCategory; // offset: 0x10 ordinal: 0x1
  ULONG *Result;                               // offset: 0x18 ordinal: 0x2
  ULONG Flags;                                 // offset: 0x20 ordinal: 0x3
  ULONG TotalSize;                             // offset: 0x24 ordinal: 0x4
  VOID *DeviceObject;                          // offset: 0x28 ordinal: 0x5
  union __anon_1085 u;                         // offset: 0x30 ordinal: 0x6
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

// 0xd8 bytes (sizeof)
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
} _AUX_ACCESS_DATA;

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

// 0x38 bytes (sizeof)
typedef struct _TP_TASK {
  struct _TP_TASK_CALLBACKS *Callbacks; // offset: 0x0 ordinal: 0x0
  ULONG NumaNode;                       // offset: 0x8 ordinal: 0x1
  UCHAR IdealProcessor;                 // offset: 0xc ordinal: 0x2
  struct _TP_NBQ_GUARD PostGuard;       // offset: 0x10 ordinal: 0x3
  VOID *NBQNode;                        // offset: 0x30 ordinal: 0x4
} _TP_TASK;

typedef VOID (*__anon_56)(struct _TP_TASK *, struct _TP_POOL *);

typedef VOID (*__anon_55)(struct _TP_CALLBACK_INSTANCE *, struct _TP_TASK *);

// 0x10 bytes (sizeof)
typedef struct _TP_TASK_CALLBACKS {
  VOID(*ExecuteCallback)
  (struct _TP_CALLBACK_INSTANCE *,
   struct _TP_TASK *); // offset: 0x0 ordinal: 0x0
  VOID(*Unposted)
  (struct _TP_TASK *, struct _TP_POOL *); // offset: 0x8 ordinal: 0x1
} _TP_TASK_CALLBACKS;

// 0x4 bytes (sizeof)
typedef struct __anon_38 {
  ULONG LongFunction : 1; // offset: 0x0 ordinal: 0x0
  ULONG Persistent : 1;   // offset: 0x0 ordinal: 0x1
  ULONG Private : 30;     // offset: 0x0 ordinal: 0x2
} __anon_38;

// 0x4 bytes (sizeof)
typedef union __anon_39 {
  ULONG Flags;        // offset: 0x0 ordinal: 0x0
  struct __anon_38 s; // offset: 0x0 ordinal: 0x1
} __anon_39;

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
  union __anon_39 u;                           // offset: 0x38 ordinal: 0x7
  enum _TP_CALLBACK_PRIORITY CallbackPriority; // offset: 0x3c ordinal: 0x8
  ULONG Size;                                  // offset: 0x40 ordinal: 0x9
} _TP_CALLBACK_ENVIRON_V3;

// 0x8 bytes (sizeof)
typedef struct __anon_32 {
  ULONG LowPart;  // offset: 0x0 ordinal: 0x0
  ULONG HighPart; // offset: 0x4 ordinal: 0x1
} __anon_32;

// 0x8 bytes (sizeof)
typedef struct _XSTATE_FEATURE {
  ULONG Offset; // offset: 0x0 ordinal: 0x0
  ULONG Size;   // offset: 0x4 ordinal: 0x1
} _XSTATE_FEATURE;

// 0x8 bytes (sizeof)
typedef struct __anon_29 {
  ULONG LowPart; // offset: 0x0 ordinal: 0x0
  LONG HighPart; // offset: 0x4 ordinal: 0x1
} __anon_29;

// 0x8 bytes (sizeof)
typedef union _LARGE_INTEGER {
  ULONG LowPart;      // offset: 0x0 ordinal: 0x0
  LONG HighPart;      // offset: 0x4 ordinal: 0x1
  struct __anon_29 u; // offset: 0x0 ordinal: 0x2
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

// 0xc bytes (sizeof)
typedef struct __anon_695 {
  ULONG Data[3]; // offset: 0x0 ordinal: 0x0
} __anon_695;

// 0x20 bytes (sizeof)
typedef struct _OBJECT_SYMBOLIC_LINK {
  union _LARGE_INTEGER CreationTime; // offset: 0x0 ordinal: 0x0
  struct _UNICODE_STRING LinkTarget; // offset: 0x8 ordinal: 0x1
  ULONG DosDeviceDriveIndex;         // offset: 0x18 ordinal: 0x2
} _OBJECT_SYMBOLIC_LINK;

typedef UCHAR (*__anon_1655)(union _LARGE_INTEGER);

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

// 0x10 bytes (sizeof)
typedef struct _ETW_LAST_ENABLE_INFO {
  union _LARGE_INTEGER EnableFlags; // offset: 0x0 ordinal: 0x0
  USHORT LoggerId;                  // offset: 0x8 ordinal: 0x1
  UCHAR Level;                      // offset: 0xa ordinal: 0x2
  UCHAR Enabled : 1;                // offset: 0xb ordinal: 0x3
  UCHAR InternalFlag : 7;           // offset: 0xb ordinal: 0x4
} _ETW_LAST_ENABLE_INFO;

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

// 0x48 bytes (sizeof)
typedef struct _WMI_BUFFER_HEADER {
  ULONG BufferSize;               // offset: 0x0 ordinal: 0x0
  ULONG SavedOffset;              // offset: 0x4 ordinal: 0x1
  ULONG CurrentOffset;            // offset: 0x8 ordinal: 0x2
  LONG ReferenceCount;            // offset: 0xc ordinal: 0x3
  union _LARGE_INTEGER TimeStamp; // offset: 0x10 ordinal: 0x4
  LONGLONG SequenceNumber;        // offset: 0x18 ordinal: 0x5
  union {
    ULONG Padding0[2];                     // offset: 0x20 ordinal: 0x6
    struct _SINGLE_LIST_ENTRY SlistEntry;  // offset: 0x20 ordinal: 0x7
    struct _WMI_BUFFER_HEADER *NextBuffer; // offset: 0x20 ordinal: 0x8
  };
  struct _ETW_BUFFER_CONTEXT ClientContext; // offset: 0x28 ordinal: 0x9
  enum _ETW_BUFFER_STATE State;             // offset: 0x2c ordinal: 0xa
  ULONG Offset;                             // offset: 0x30 ordinal: 0xb
  USHORT BufferFlag;                        // offset: 0x34 ordinal: 0xc
  USHORT BufferType;                        // offset: 0x36 ordinal: 0xd
  union {
    ULONG Padding1[4];                   // offset: 0x38 ordinal: 0xe
    struct _ETW_REF_CLOCK ReferenceTime; // offset: 0x38 ordinal: 0xf
    struct _LIST_ENTRY GlobalEntry;      // offset: 0x38 ordinal: 0x10
    VOID *Pointer0;                      // offset: 0x38 ordinal: 0x11
  };
  VOID *Pointer1; // offset: 0x40 ordinal: 0x12
} _WMI_BUFFER_HEADER;

// 0x8 bytes (sizeof)
typedef union __anon_1174 {
  union _LARGE_INTEGER FileOffset; // offset: 0x0 ordinal: 0x0
  USHORT ActiveCount;              // offset: 0x0 ordinal: 0x1
} __anon_1174;

typedef VOID (*__anon_1167)(VOID *, union _LARGE_INTEGER);

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
typedef struct __anon_1016 {
  struct _HBIN *Bin;        // offset: 0x0 ordinal: 0x0
  struct _HCELL *CellPoint; // offset: 0x8 ordinal: 0x1
} __anon_1016;

// 0x10 bytes (sizeof)
typedef struct __anon_1013 {
  ULONG Space;            // offset: 0x0 ordinal: 0x0
  ULONG MapPoint;         // offset: 0x4 ordinal: 0x1
  struct _HBIN *BinPoint; // offset: 0x8 ordinal: 0x2
} __anon_1013;

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

// 0x598 bytes (sizeof)
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
  VOID *HiveLoadFailure;          // offset: 0x48 ordinal: 0x9
  struct _HBASE_BLOCK *BaseBlock; // offset: 0x50 ordinal: 0xa
  struct _RTL_BITMAP DirtyVector; // offset: 0x58 ordinal: 0xb
  ULONG DirtyCount;               // offset: 0x68 ordinal: 0xc
  ULONG DirtyAlloc;               // offset: 0x6c ordinal: 0xd
  ULONG BaseBlockAlloc;           // offset: 0x70 ordinal: 0xe
  ULONG Cluster;                  // offset: 0x74 ordinal: 0xf
  UCHAR Flat;                     // offset: 0x78 ordinal: 0x10
  UCHAR ReadOnly;                 // offset: 0x79 ordinal: 0x11
  UCHAR DirtyFlag;                // offset: 0x7a ordinal: 0x12
  ULONG HvBinHeadersUse;          // offset: 0x7c ordinal: 0x13
  ULONG HvFreeCellsUse;           // offset: 0x80 ordinal: 0x14
  ULONG HvUsedCellsUse;           // offset: 0x84 ordinal: 0x15
  ULONG CmUsedCellsUse;           // offset: 0x88 ordinal: 0x16
  ULONG HiveFlags;                // offset: 0x8c ordinal: 0x17
  ULONG CurrentLog;               // offset: 0x90 ordinal: 0x18
  ULONG LogSize[2];               // offset: 0x94 ordinal: 0x19
  ULONG RefreshCount;             // offset: 0x9c ordinal: 0x1a
  ULONG StorageTypeCount;         // offset: 0xa0 ordinal: 0x1b
  ULONG Version;                  // offset: 0xa4 ordinal: 0x1c
  struct _DUAL Storage[2];        // offset: 0xa8 ordinal: 0x1d
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

typedef UCHAR (*__anon_890)(struct _HHIVE *, ULONG, ULONG *, VOID *, ULONG);

typedef UCHAR (*__anon_889)(struct _HHIVE *, ULONG, struct CMP_OFFSET_ARRAY *,
                            ULONG, ULONG *);

typedef UCHAR (*__anon_888)(struct _HHIVE *, ULONG, ULONG, ULONG);

typedef VOID (*__anon_885)(struct _HHIVE *, ULONG);

// 0xc bytes (sizeof)
typedef struct __anon_711 {
  union _LARGE_INTEGER Start; // offset: 0x0 ordinal: 0x0
  ULONG Length64;             // offset: 0x8 ordinal: 0x1
} __anon_711;

// 0xc bytes (sizeof)
typedef struct __anon_710 {
  union _LARGE_INTEGER Start; // offset: 0x0 ordinal: 0x0
  ULONG Length48;             // offset: 0x8 ordinal: 0x1
} __anon_710;

// 0xc bytes (sizeof)
typedef struct __anon_709 {
  union _LARGE_INTEGER Start; // offset: 0x0 ordinal: 0x0
  ULONG Length40;             // offset: 0x8 ordinal: 0x1
} __anon_709;

// 0xc bytes (sizeof)
typedef struct __anon_703 {
  union _LARGE_INTEGER Start; // offset: 0x0 ordinal: 0x0
  ULONG Length;               // offset: 0x8 ordinal: 0x1
} __anon_703;

// 0x18 bytes (sizeof)
typedef struct __anon_700 {
  ULONG Length64;                      // offset: 0x0 ordinal: 0x0
  ULONG Alignment64;                   // offset: 0x4 ordinal: 0x1
  union _LARGE_INTEGER MinimumAddress; // offset: 0x8 ordinal: 0x2
  union _LARGE_INTEGER MaximumAddress; // offset: 0x10 ordinal: 0x3
} __anon_700;

// 0x18 bytes (sizeof)
typedef struct __anon_699 {
  ULONG Length48;                      // offset: 0x0 ordinal: 0x0
  ULONG Alignment48;                   // offset: 0x4 ordinal: 0x1
  union _LARGE_INTEGER MinimumAddress; // offset: 0x8 ordinal: 0x2
  union _LARGE_INTEGER MaximumAddress; // offset: 0x10 ordinal: 0x3
} __anon_699;

// 0x18 bytes (sizeof)
typedef struct __anon_698 {
  ULONG Length40;                      // offset: 0x0 ordinal: 0x0
  ULONG Alignment40;                   // offset: 0x4 ordinal: 0x1
  union _LARGE_INTEGER MinimumAddress; // offset: 0x8 ordinal: 0x2
  union _LARGE_INTEGER MaximumAddress; // offset: 0x10 ordinal: 0x3
} __anon_698;

// 0x18 bytes (sizeof)
typedef struct __anon_692 {
  ULONG Length;                        // offset: 0x0 ordinal: 0x0
  ULONG Alignment;                     // offset: 0x4 ordinal: 0x1
  union _LARGE_INTEGER MinimumAddress; // offset: 0x8 ordinal: 0x2
  union _LARGE_INTEGER MaximumAddress; // offset: 0x10 ordinal: 0x3
} __anon_692;

// 0x18 bytes (sizeof)
typedef struct _MAILSLOT_CREATE_PARAMETERS {
  ULONG MailslotQuota;              // offset: 0x0 ordinal: 0x0
  ULONG MaximumMessageSize;         // offset: 0x4 ordinal: 0x1
  union _LARGE_INTEGER ReadTimeout; // offset: 0x8 ordinal: 0x2
  UCHAR TimeoutSpecified;           // offset: 0x10 ordinal: 0x3
} _MAILSLOT_CREATE_PARAMETERS;

// 0x20 bytes (sizeof)
typedef struct __anon_554 {
  struct _IO_SECURITY_CONTEXT *SecurityContext;   // offset: 0x0 ordinal: 0x0
  ULONG Options;                                  // offset: 0x8 ordinal: 0x1
  USHORT Reserved;                                // offset: 0x10 ordinal: 0x2
  USHORT ShareAccess;                             // offset: 0x12 ordinal: 0x3
  struct _MAILSLOT_CREATE_PARAMETERS *Parameters; // offset: 0x18 ordinal: 0x4
} __anon_554;

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
typedef struct __anon_553 {
  struct _IO_SECURITY_CONTEXT *SecurityContext;     // offset: 0x0 ordinal: 0x0
  ULONG Options;                                    // offset: 0x8 ordinal: 0x1
  USHORT Reserved;                                  // offset: 0x10 ordinal: 0x2
  USHORT ShareAccess;                               // offset: 0x12 ordinal: 0x3
  struct _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // offset: 0x18 ordinal: 0x4
} __anon_553;

// 0x18 bytes (sizeof)
typedef struct __anon_555 {
  ULONG Length;                    // offset: 0x0 ordinal: 0x0
  ULONG Key;                       // offset: 0x8 ordinal: 0x1
  union _LARGE_INTEGER ByteOffset; // offset: 0x10 ordinal: 0x2
} __anon_555;

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

typedef LONG (*__anon_1658)(LONG, union _LARGE_INTEGER *, struct _MDL *,
                            VOID *);

typedef LONG (*__anon_1656)(union _LARGE_INTEGER *, struct _MDL *);

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
  union __anon_1654 DiskInfo; // offset: 0x8c ordinal: 0x12
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

typedef LONG (*__anon_992)(struct _KENLISTMENT *, VOID *, VOID *, ULONG,
                           union _LARGE_INTEGER *, ULONG, VOID *);

typedef UCHAR (*__anon_891)(struct _HHIVE *, ULONG, union _LARGE_INTEGER *,
                            ULONG);

// 0x18 bytes (sizeof)
typedef struct __anon_564 {
  union _LARGE_INTEGER *Length;    // offset: 0x0 ordinal: 0x0
  ULONG Key;                       // offset: 0x8 ordinal: 0x1
  union _LARGE_INTEGER ByteOffset; // offset: 0x10 ordinal: 0x2
} __anon_564;

typedef UCHAR (*__anon_497)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            struct _MDL *, struct _DEVICE_OBJECT *);

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
typedef struct __anon_1012 {
  struct _CELL_DATA *List;      // offset: 0x0 ordinal: 0x0
  ULONG Index;                  // offset: 0x8 ordinal: 0x1
  ULONG Cell;                   // offset: 0xc ordinal: 0x2
  struct _CELL_DATA *CellPoint; // offset: 0x10 ordinal: 0x3
} __anon_1012;

// 0x20 bytes (sizeof)
typedef struct __anon_1011 {
  ULONG Cell;                   // offset: 0x0 ordinal: 0x0
  struct _CELL_DATA *CellPoint; // offset: 0x8 ordinal: 0x1
  VOID *RootPoint;              // offset: 0x10 ordinal: 0x2
  ULONG Index;                  // offset: 0x18 ordinal: 0x3
} __anon_1011;

// 0x160 bytes (sizeof)
typedef struct _HIVE_LOAD_FAILURE {
  struct _HHIVE *Hive;                        // offset: 0x0 ordinal: 0x0
  ULONG Index;                                // offset: 0x8 ordinal: 0x1
  ULONG RecoverableIndex;                     // offset: 0xc ordinal: 0x2
  struct __anon_1007 Locations[8];            // offset: 0x10 ordinal: 0x3
  struct __anon_1007 RecoverableLocations[8]; // offset: 0x70 ordinal: 0x4
  struct __anon_1009 RegistryIO;              // offset: 0xd0 ordinal: 0x5
  struct __anon_1010 CheckRegistry2;          // offset: 0xe8 ordinal: 0x6
  struct __anon_1011 CheckKey;                // offset: 0xf0 ordinal: 0x7
  struct __anon_1012 CheckValueList;          // offset: 0x110 ordinal: 0x8
  struct __anon_1013 CheckHive;               // offset: 0x128 ordinal: 0x9
  struct __anon_1013 CheckHive1;              // offset: 0x138 ordinal: 0xa
  struct __anon_1016 CheckBin;                // offset: 0x148 ordinal: 0xb
  struct __anon_1023 RecoverData;             // offset: 0x158 ordinal: 0xc
} _HIVE_LOAD_FAILURE;

typedef struct _CELL_DATA *(*__anon_884)(struct _HHIVE *, ULONG);

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
typedef struct __anon_570 {
  ULONG Length;                                // offset: 0x0 ordinal: 0x0
  VOID *StartSid;                              // offset: 0x8 ordinal: 0x1
  struct _FILE_GET_QUOTA_INFORMATION *SidList; // offset: 0x10 ordinal: 0x2
  ULONG SidListLength;                         // offset: 0x18 ordinal: 0x3
} __anon_570;

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
typedef struct LIST_ENTRY32 {
  ULONG Flink; // offset: 0x0 ordinal: 0x0
  ULONG Blink; // offset: 0x4 ordinal: 0x1
} LIST_ENTRY32;

// 0xfe4 bytes (sizeof)
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
  UCHAR SpareBytes[36];                 // offset: 0x1ac ordinal: 0x12
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
  union {
    struct _PROCESSOR_NUMBER
        CurrentIdealProcessor; // offset: 0xf74 ordinal: 0x34
    ULONG IdealProcessorValue; // offset: 0xf74 ordinal: 0x35
    UCHAR ReservedPad0;        // offset: 0xf74 ordinal: 0x36
  };
  UCHAR ReservedPad1;             // offset: 0xf75 ordinal: 0x37
  UCHAR ReservedPad2;             // offset: 0xf76 ordinal: 0x38
  UCHAR IdealProcessor;           // offset: 0xf77 ordinal: 0x39
  ULONG GuaranteedStackBytes;     // offset: 0xf78 ordinal: 0x3a
  ULONG ReservedForPerf;          // offset: 0xf7c ordinal: 0x3b
  ULONG ReservedForOle;           // offset: 0xf80 ordinal: 0x3c
  ULONG WaitingOnLoaderLock;      // offset: 0xf84 ordinal: 0x3d
  ULONG SavedPriorityState;       // offset: 0xf88 ordinal: 0x3e
  ULONG SoftPatchPtr1;            // offset: 0xf8c ordinal: 0x3f
  ULONG ThreadPoolData;           // offset: 0xf90 ordinal: 0x40
  ULONG TlsExpansionSlots;        // offset: 0xf94 ordinal: 0x41
  ULONG MuiGeneration;            // offset: 0xf98 ordinal: 0x42
  ULONG IsImpersonating;          // offset: 0xf9c ordinal: 0x43
  ULONG NlsCache;                 // offset: 0xfa0 ordinal: 0x44
  ULONG pShimData;                // offset: 0xfa4 ordinal: 0x45
  ULONG HeapVirtualAffinity;      // offset: 0xfa8 ordinal: 0x46
  ULONG CurrentTransactionHandle; // offset: 0xfac ordinal: 0x47
  ULONG ActiveFrame;              // offset: 0xfb0 ordinal: 0x48
  ULONG FlsData;                  // offset: 0xfb4 ordinal: 0x49
  ULONG PreferredLanguages;       // offset: 0xfb8 ordinal: 0x4a
  ULONG UserPrefLanguages;        // offset: 0xfbc ordinal: 0x4b
  ULONG MergedPrefLanguages;      // offset: 0xfc0 ordinal: 0x4c
  ULONG MuiImpersonation;         // offset: 0xfc4 ordinal: 0x4d
  union {
    USHORT CrossTebFlags;          // offset: 0xfc8 ordinal: 0x4e
    USHORT SpareCrossTebBits : 16; // offset: 0xfc8 ordinal: 0x4f
  };
  union {
    USHORT SameTebFlags;      // offset: 0xfca ordinal: 0x50
    USHORT SafeThunkCall : 1; // offset: 0xfca ordinal: 0x51
  };
  USHORT InDebugPrint : 1;         // offset: 0xfca ordinal: 0x52
  USHORT HasFiberData : 1;         // offset: 0xfca ordinal: 0x53
  USHORT SkipThreadAttach : 1;     // offset: 0xfca ordinal: 0x54
  USHORT WerInShipAssertCode : 1;  // offset: 0xfca ordinal: 0x55
  USHORT RanProcessInit : 1;       // offset: 0xfca ordinal: 0x56
  USHORT ClonedThread : 1;         // offset: 0xfca ordinal: 0x57
  USHORT SuppressDebugMsg : 1;     // offset: 0xfca ordinal: 0x58
  USHORT DisableUserStackWalk : 1; // offset: 0xfca ordinal: 0x59
  USHORT RtlExceptionAttached : 1; // offset: 0xfca ordinal: 0x5a
  USHORT InitialThread : 1;        // offset: 0xfca ordinal: 0x5b
  USHORT SpareSameTebBits : 5;     // offset: 0xfca ordinal: 0x5c
  ULONG TxnScopeEnterCallback;     // offset: 0xfcc ordinal: 0x5d
  ULONG TxnScopeExitCallback;      // offset: 0xfd0 ordinal: 0x5e
  ULONG TxnScopeContext;           // offset: 0xfd4 ordinal: 0x5f
  ULONG LockCount;                 // offset: 0xfd8 ordinal: 0x60
  ULONG SpareUlong0;               // offset: 0xfdc ordinal: 0x61
  ULONG ResourceRetValue;          // offset: 0xfe0 ordinal: 0x62
} _TEB32;

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

// 0x8168 bytes (sizeof)
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
  ULONG ABC_ACB_Skipped;                     // offset: 0x8038 ordinal: 0x12
  ULONG OutOfOrderReleases;                  // offset: 0x803c ordinal: 0x13
  ULONG NodesReleasedOutOfOrder;             // offset: 0x8040 ordinal: 0x14
  ULONG TotalReleases;                       // offset: 0x8044 ordinal: 0x15
  ULONG RootNodesDeleted;                    // offset: 0x8048 ordinal: 0x16
  ULONG ForgetHistoryCounter;                // offset: 0x804c ordinal: 0x17
  VOID *Instigator;                          // offset: 0x8050 ordinal: 0x18
  ULONG NumberOfParticipants;                // offset: 0x8058 ordinal: 0x19
  struct _VI_DEADLOCK_NODE *Participant[32]; // offset: 0x8060 ordinal: 0x1a
  LONG ChildrenCountWatermark;               // offset: 0x8160 ordinal: 0x1b
} _VI_DEADLOCK_GLOBALS;

// 0x38 bytes (sizeof)
typedef struct _PNP_DEVICE_ACTION_ENTRY {
  struct _LIST_ENTRY ListEntry;                // offset: 0x0 ordinal: 0x0
  struct _DEVICE_OBJECT *DeviceObject;         // offset: 0x10 ordinal: 0x1
  enum _PNP_DEVICE_ACTION_REQUEST RequestType; // offset: 0x18 ordinal: 0x2
  UCHAR ReorderingBarrier;                     // offset: 0x1c ordinal: 0x3
  ULONGLONG RequestArgument;                   // offset: 0x20 ordinal: 0x4
  struct _KEVENT *CompletionEvent;             // offset: 0x28 ordinal: 0x5
  LONG *CompletionStatus;                      // offset: 0x30 ordinal: 0x6
} _PNP_DEVICE_ACTION_ENTRY;

// 0x58 bytes (sizeof)
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
  ULONG Spare : 28;             // offset: 0x40 ordinal: 0xb
  VOID *CallingAddress;         // offset: 0x48 ordinal: 0xc
  VOID *CallersCaller;          // offset: 0x50 ordinal: 0xd
} _PTE_TRACKER;

// 0x38 bytes (sizeof)
typedef struct _RTLP_RANGE_LIST_ENTRY {
  ULONGLONG Start; // offset: 0x0 ordinal: 0x0
  ULONGLONG End;   // offset: 0x8 ordinal: 0x1
  union {
    struct __anon_1707 Allocated; // offset: 0x10 ordinal: 0x2
    struct __anon_1708 Merged;    // offset: 0x10 ordinal: 0x3
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

// 0x30 bytes (sizeof)
typedef struct _MMVIEW {
  ULONGLONG Entry;                   // offset: 0x0 ordinal: 0x0
  ULONGLONG Writable : 1;            // offset: 0x8 ordinal: 0x1
  struct _CONTROL_AREA *ControlArea; // offset: 0x8 ordinal: 0x2
  struct _LIST_ENTRY ViewLinks;      // offset: 0x10 ordinal: 0x3
  VOID *SessionViewVa;               // offset: 0x20 ordinal: 0x4
  ULONG SessionId;                   // offset: 0x28 ordinal: 0x5
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

// 0x58 bytes (sizeof)
typedef struct _PO_HIBER_PERF {
  ULONGLONG IoTicks;             // offset: 0x0 ordinal: 0x0
  ULONGLONG InitTicks;           // offset: 0x8 ordinal: 0x1
  ULONGLONG CopyTicks;           // offset: 0x10 ordinal: 0x2
  ULONGLONG ElapsedTicks;        // offset: 0x18 ordinal: 0x3
  ULONGLONG CompressTicks;       // offset: 0x20 ordinal: 0x4
  ULONGLONG ResumeAppTime;       // offset: 0x28 ordinal: 0x5
  ULONGLONG HiberFileResumeTime; // offset: 0x30 ordinal: 0x6
  ULONGLONG BytesCopied;         // offset: 0x38 ordinal: 0x7
  ULONGLONG PagesProcessed;      // offset: 0x40 ordinal: 0x8
  ULONG PagesWritten;            // offset: 0x48 ordinal: 0x9
  ULONG DumpCount;               // offset: 0x4c ordinal: 0xa
  ULONG FileRuns;                // offset: 0x50 ordinal: 0xb
} _PO_HIBER_PERF;

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

// 0x2f8 bytes (sizeof)
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
  struct _LIST_ENTRY Pending;            // offset: 0x2d0 ordinal: 0x9
  LONG Status;                           // offset: 0x2e0 ordinal: 0xa
  struct _DEVICE_OBJECT *FailedDevice;   // offset: 0x2e8 ordinal: 0xb
  UCHAR Waking;                          // offset: 0x2f0 ordinal: 0xc
  UCHAR Cancelled;                       // offset: 0x2f1 ordinal: 0xd
  UCHAR IgnoreErrors;                    // offset: 0x2f2 ordinal: 0xe
  UCHAR IgnoreNotImplemented;            // offset: 0x2f3 ordinal: 0xf
  UCHAR TimeRefreshLockAcquired;         // offset: 0x2f4 ordinal: 0x10
} _POP_DEVICE_SYS_STATE;

// 0x40 bytes (sizeof)
typedef struct _POP_SHUTDOWN_BUG_CHECK {
  VOID *ThreadHandle;   // offset: 0x0 ordinal: 0x0
  VOID *ThreadId;       // offset: 0x8 ordinal: 0x1
  VOID *ProcessId;      // offset: 0x10 ordinal: 0x2
  ULONG Code;           // offset: 0x18 ordinal: 0x3
  ULONGLONG Parameter1; // offset: 0x20 ordinal: 0x4
  ULONGLONG Parameter2; // offset: 0x28 ordinal: 0x5
  ULONGLONG Parameter3; // offset: 0x30 ordinal: 0x6
  ULONGLONG Parameter4; // offset: 0x38 ordinal: 0x7
} _POP_SHUTDOWN_BUG_CHECK;

// 0x28 bytes (sizeof)
typedef struct _PPM_PERF_STATE {
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
} _PPM_PERF_STATE;

typedef LONG (*__anon_1616)(ULONGLONG, ULONGLONG, ULONGLONG);

// 0x10 bytes (sizeof)
typedef struct _HEAP_ENTRY_EXTRA {
  USHORT AllocatorBackTraceIndex; // offset: 0x0 ordinal: 0x0
  USHORT TagIndex;                // offset: 0x2 ordinal: 0x1
  ULONGLONG Settable;             // offset: 0x8 ordinal: 0x2
  ULONGLONG ZeroInit;             // offset: 0x0 ordinal: 0x3
  ULONGLONG ZeroInit1;            // offset: 0x8 ordinal: 0x4
} _HEAP_ENTRY_EXTRA;

typedef LONG (*__anon_1606)(LONG, VOID *, VOID *, ULONGLONG, ULONG, VOID *);

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

// 0xf0 bytes (sizeof)
typedef struct _ETW_WMITRACE_WORK {
  ULONG LoggerId;        // offset: 0x0 ordinal: 0x0
  CHAR LoggerName[65];   // offset: 0x8 ordinal: 0x1
  CHAR FileName[129];    // offset: 0x49 ordinal: 0x2
  ULONG MaximumFileSize; // offset: 0xcc ordinal: 0x3
  ULONG MinBuffers;      // offset: 0xd0 ordinal: 0x4
  ULONG MaxBuffers;      // offset: 0xd4 ordinal: 0x5
  ULONG BufferSize;      // offset: 0xd8 ordinal: 0x6
  ULONG Mode;            // offset: 0xdc ordinal: 0x7
  ULONG FlushTimer;      // offset: 0xe0 ordinal: 0x8
  ULONGLONG MatchAny;    // offset: 0x8 ordinal: 0x9
  ULONGLONG MatchAll;    // offset: 0x10 ordinal: 0xa
  ULONG EnableProperty;  // offset: 0x18 ordinal: 0xb
  struct _GUID Guid;     // offset: 0x1c ordinal: 0xc
  UCHAR Level;           // offset: 0x2c ordinal: 0xd
  LONG Status;           // offset: 0xe8 ordinal: 0xe
} _ETW_WMITRACE_WORK;

// 0x38 bytes (sizeof)
typedef struct _POP_SYSTEM_IDLE {
  LONG AverageIdleness;              // offset: 0x0 ordinal: 0x0
  LONG LowestIdleness;               // offset: 0x4 ordinal: 0x1
  ULONG Time;                        // offset: 0x8 ordinal: 0x2
  ULONG Timeout;                     // offset: 0xc ordinal: 0x3
  ULONG LastUserInput;               // offset: 0x10 ordinal: 0x4
  struct POWER_ACTION_POLICY Action; // offset: 0x14 ordinal: 0x5
  enum _SYSTEM_POWER_STATE MinState; // offset: 0x20 ordinal: 0x6
  UCHAR SystemRequired;              // offset: 0x24 ordinal: 0x7
  UCHAR IdleWorker;                  // offset: 0x25 ordinal: 0x8
  UCHAR Sampling;                    // offset: 0x26 ordinal: 0x9
  ULONGLONG LastTick;                // offset: 0x28 ordinal: 0xa
  ULONG LastSystemRequiredTime;      // offset: 0x30 ordinal: 0xb
} _POP_SYSTEM_IDLE;

// 0x10 bytes (sizeof)
typedef struct _VF_AVL_TREE_NODE {
  VOID *p;             // offset: 0x0 ordinal: 0x0
  ULONGLONG RangeSize; // offset: 0x8 ordinal: 0x1
} _VF_AVL_TREE_NODE;

// 0x70 bytes (sizeof)
typedef struct _VF_AVL_TABLE {
  struct _RTL_AVL_TABLE RtlTable;         // offset: 0x0 ordinal: 0x0
  struct _VF_AVL_TREE_NODE *ReservedNode; // offset: 0x68 ordinal: 0x1
} _VF_AVL_TABLE;

// 0x40 bytes (sizeof)
typedef struct _VF_AVL_TREE {
  LONG Lock;                    // offset: 0x0 ordinal: 0x0
  VOID *NodeToFree;             // offset: 0x8 ordinal: 0x1
  ULONGLONG NodeRangeSize;      // offset: 0x10 ordinal: 0x2
  ULONGLONG NodeCount;          // offset: 0x18 ordinal: 0x3
  struct _VF_AVL_TABLE *Tables; // offset: 0x20 ordinal: 0x4
  ULONG TablesNo;               // offset: 0x28 ordinal: 0x5
  union __anon_1736 u1;         // offset: 0x2c ordinal: 0x6
} _VF_AVL_TREE;

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

typedef UCHAR (*__anon_1525)(VOID *, struct _RTL_RANGE *);

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
typedef struct _MEMORY_ALLOCATION_DESCRIPTOR {
  struct _LIST_ENTRY ListEntry;    // offset: 0x0 ordinal: 0x0
  enum _TYPE_OF_MEMORY MemoryType; // offset: 0x10 ordinal: 0x1
  ULONGLONG BasePage;              // offset: 0x18 ordinal: 0x2
  ULONGLONG PageCount;             // offset: 0x20 ordinal: 0x3
} _MEMORY_ALLOCATION_DESCRIPTOR;

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

// 0x1140 bytes (sizeof)
typedef struct _POOL_DESCRIPTOR {
  enum _POOL_TYPE PoolType; // offset: 0x0 ordinal: 0x0
  union {
    struct _KGUARDED_MUTEX PagedLock; // offset: 0x8 ordinal: 0x1
    ULONGLONG NonPagedLock;           // offset: 0x8 ordinal: 0x2
  };
  LONG RunningAllocs;                // offset: 0x40 ordinal: 0x3
  LONG RunningDeAllocs;              // offset: 0x44 ordinal: 0x4
  LONG TotalBigPages;                // offset: 0x48 ordinal: 0x5
  LONG ThreadsProcessingDeferrals;   // offset: 0x4c ordinal: 0x6
  ULONGLONG TotalBytes;              // offset: 0x50 ordinal: 0x7
  ULONG PoolIndex;                   // offset: 0x80 ordinal: 0x8
  LONG TotalPages;                   // offset: 0xc0 ordinal: 0x9
  VOID **PendingFrees;               // offset: 0x100 ordinal: 0xa
  LONG PendingFreeDepth;             // offset: 0x108 ordinal: 0xb
  struct _LIST_ENTRY ListHeads[256]; // offset: 0x140 ordinal: 0xc
} _POOL_DESCRIPTOR;

// 0x30 bytes (sizeof)
typedef struct _HEAP_UCR_DESCRIPTOR {
  struct _LIST_ENTRY ListEntry;    // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY SegmentEntry; // offset: 0x10 ordinal: 0x1
  VOID *Address;                   // offset: 0x20 ordinal: 0x2
  ULONGLONG Size;                  // offset: 0x28 ordinal: 0x3
} _HEAP_UCR_DESCRIPTOR;

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
typedef struct _OBJECT_HEADER_QUOTA_INFO {
  ULONG PagedPoolCharge;              // offset: 0x0 ordinal: 0x0
  ULONG NonPagedPoolCharge;           // offset: 0x4 ordinal: 0x1
  ULONG SecurityDescriptorCharge;     // offset: 0x8 ordinal: 0x2
  VOID *SecurityDescriptorQuotaBlock; // offset: 0x10 ordinal: 0x3
  ULONGLONG Reserved;                 // offset: 0x18 ordinal: 0x4
} _OBJECT_HEADER_QUOTA_INFO;

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

// 0x1b0 bytes (sizeof)
typedef struct _ETW_GUID_ENTRY {
  struct _LIST_ENTRY GuidList;    // offset: 0x0 ordinal: 0x0
  LONG RefCount;                  // offset: 0x10 ordinal: 0x1
  struct _GUID Guid;              // offset: 0x14 ordinal: 0x2
  struct _LIST_ENTRY RegListHead; // offset: 0x28 ordinal: 0x3
  VOID *SecurityDescriptor;       // offset: 0x38 ordinal: 0x4
  union {
    struct _ETW_LAST_ENABLE_INFO LastEnable; // offset: 0x40 ordinal: 0x5
    ULONGLONG MatchId;                       // offset: 0x40 ordinal: 0x6
  };
  struct _TRACE_ENABLE_INFO ProviderEnableInfo; // offset: 0x50 ordinal: 0x7
  struct _TRACE_ENABLE_INFO EnableInfo[8];      // offset: 0x70 ordinal: 0x8
  struct _EVENT_FILTER_HEADER *FilterData[8];   // offset: 0x170 ordinal: 0x9
} _ETW_GUID_ENTRY;

// 0x20 bytes (sizeof)
typedef struct _NBQUEUE_BLOCK {
  struct _SLIST_ENTRY SListEntry; // offset: 0x0 ordinal: 0x0
  ULONGLONG Next;                 // offset: 0x10 ordinal: 0x1
  ULONGLONG Data;                 // offset: 0x18 ordinal: 0x2
} _NBQUEUE_BLOCK;

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

typedef VOID (*__anon_1287)(struct _IO_MINI_COMPLETION_PACKET_USER *, VOID *);

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

// 0x300 bytes (sizeof)
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
  struct _ALPC_COMPLETION_LIST_STATE State; // offset: 0x80 ordinal: 0xa
  ULONG LastMessageId;                      // offset: 0x88 ordinal: 0xb
  ULONG LastCallbackId;                     // offset: 0x8c ordinal: 0xc
  ULONG PostCount;                          // offset: 0x100 ordinal: 0xd
  ULONG ReturnCount;                        // offset: 0x180 ordinal: 0xe
  ULONG LogSequenceNumber;                  // offset: 0x200 ordinal: 0xf
  struct _RTL_SRWLOCK UserLock;             // offset: 0x280 ordinal: 0x10
  ULONGLONG EndMagic;                       // offset: 0x288 ordinal: 0x11
} _ALPC_COMPLETION_LIST_HEADER;

// 0x30 bytes (sizeof)
typedef struct _ALPC_MESSAGE_ZONE {
  struct _MDL *Mdl;  // offset: 0x0 ordinal: 0x0
  VOID *UserVa;      // offset: 0x8 ordinal: 0x1
  VOID *UserLimit;   // offset: 0x10 ordinal: 0x2
  VOID *SystemVa;    // offset: 0x18 ordinal: 0x3
  VOID *SystemLimit; // offset: 0x20 ordinal: 0x4
  ULONGLONG Size;    // offset: 0x28 ordinal: 0x5
} _ALPC_MESSAGE_ZONE;

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

// 0x38 bytes (sizeof)
typedef struct _BLOB_TYPE {
  enum _BLOB_ID ResourceId;         // offset: 0x0 ordinal: 0x0
  ULONG PoolTag;                    // offset: 0x4 ordinal: 0x1
  ULONG Flags;                      // offset: 0x8 ordinal: 0x2
  ULONG CreatedObjects;             // offset: 0xc ordinal: 0x3
  ULONG DeletedObjects;             // offset: 0x10 ordinal: 0x4
  VOID (*DeleteProcedure)(VOID *);  // offset: 0x18 ordinal: 0x5
  LONG (*DestroyProcedure)(VOID *); // offset: 0x20 ordinal: 0x6
  ULONGLONG UsualSize;              // offset: 0x28 ordinal: 0x7
  ULONG LookasideIndex;             // offset: 0x30 ordinal: 0x8
} _BLOB_TYPE;

// 0x28 bytes (sizeof)
typedef struct _PORT_MESSAGE {
  union __anon_1217 u1; // offset: 0x0 ordinal: 0x0
  union __anon_1219 u2; // offset: 0x4 ordinal: 0x1
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

// 0xe0 bytes (sizeof)
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
  VOID *ContextInformation;           // offset: 0xc8 ordinal: 0x15
  ULONGLONG OriginalBase;             // offset: 0xd0 ordinal: 0x16
  union _LARGE_INTEGER LoadTime;      // offset: 0xd8 ordinal: 0x17
} _LDR_DATA_TABLE_ENTRY;

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

// 0x70 bytes (sizeof)
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
  ULONG AllocAndFreeOps;              // offset: 0x50 ordinal: 0x10
  ULONG InBlockDeccommits;            // offset: 0x54 ordinal: 0x11
  ULONGLONG InBlockDeccomitSize;      // offset: 0x58 ordinal: 0x12
  ULONGLONG HighWatermarkSize;        // offset: 0x60 ordinal: 0x13
  ULONGLONG LastPolledSize;           // offset: 0x68 ordinal: 0x14
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

// 0x68 bytes (sizeof)
typedef struct _PRIVATE_CACHE_MAP {
  union {
    SHORT NodeTypeCode;                    // offset: 0x0 ordinal: 0x0
    struct _PRIVATE_CACHE_MAP_FLAGS Flags; // offset: 0x0 ordinal: 0x1
    ULONG UlongFlags;                      // offset: 0x0 ordinal: 0x2
  };
  ULONG ReadAheadMask;                          // offset: 0x4 ordinal: 0x3
  struct _FILE_OBJECT *FileObject;              // offset: 0x8 ordinal: 0x4
  union _LARGE_INTEGER FileOffset1;             // offset: 0x10 ordinal: 0x5
  union _LARGE_INTEGER BeyondLastByte1;         // offset: 0x18 ordinal: 0x6
  union _LARGE_INTEGER FileOffset2;             // offset: 0x20 ordinal: 0x7
  union _LARGE_INTEGER BeyondLastByte2;         // offset: 0x28 ordinal: 0x8
  ULONG SequentialReadCount;                    // offset: 0x30 ordinal: 0x9
  ULONG ReadAheadLength;                        // offset: 0x34 ordinal: 0xa
  union _LARGE_INTEGER ReadAheadOffset;         // offset: 0x38 ordinal: 0xb
  union _LARGE_INTEGER ReadAheadBeyondLastByte; // offset: 0x40 ordinal: 0xc
  ULONGLONG ReadAheadSpinLock;                  // offset: 0x48 ordinal: 0xd
  struct _LIST_ENTRY PrivateLinks;              // offset: 0x50 ordinal: 0xe
  VOID *ReadAheadWorkItem;                      // offset: 0x60 ordinal: 0xf
} _PRIVATE_CACHE_MAP;

// 0x38 bytes (sizeof)
typedef struct _VOLUME_CACHE_MAP {
  SHORT NodeTypeCode;                     // offset: 0x0 ordinal: 0x0
  SHORT NodeByteCode;                     // offset: 0x2 ordinal: 0x1
  ULONG UseCount;                         // offset: 0x4 ordinal: 0x2
  struct _DEVICE_OBJECT *DeviceObject;    // offset: 0x8 ordinal: 0x3
  struct _LIST_ENTRY VolumeCacheMapLinks; // offset: 0x10 ordinal: 0x4
  ULONG Flags;                            // offset: 0x20 ordinal: 0x5
  ULONGLONG DirtyPages;                   // offset: 0x28 ordinal: 0x6
  ULONG PagesQueuedToDisk;                // offset: 0x30 ordinal: 0x7
} _VOLUME_CACHE_MAP;

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
    struct _PPC_DBGKD_CONTROL_SET PpcControlSet;     // offset: 0x0 ordinal: 0x5
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
typedef union __anon_1149 {
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
} __anon_1149;

// 0x34 bytes (sizeof)
typedef struct _DBGKD_MANIPULATE_STATE32 {
  ULONG ApiNumber;       // offset: 0x0 ordinal: 0x0
  USHORT ProcessorLevel; // offset: 0x4 ordinal: 0x1
  USHORT Processor;      // offset: 0x6 ordinal: 0x2
  LONG ReturnStatus;     // offset: 0x8 ordinal: 0x3
  union __anon_1149 u;   // offset: 0xc ordinal: 0x4
} _DBGKD_MANIPULATE_STATE32;

// 0x28 bytes (sizeof)
typedef union __anon_1126 {
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
} __anon_1126;

// 0x38 bytes (sizeof)
typedef struct _DBGKD_MANIPULATE_STATE64 {
  ULONG ApiNumber;       // offset: 0x0 ordinal: 0x0
  USHORT ProcessorLevel; // offset: 0x4 ordinal: 0x1
  USHORT Processor;      // offset: 0x6 ordinal: 0x2
  LONG ReturnStatus;     // offset: 0x8 ordinal: 0x3
  union __anon_1126 u;   // offset: 0x10 ordinal: 0x4
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

// 0x18 bytes (sizeof)
typedef struct _ETW_SESSION_PERF_COUNTERS {
  LONG BufferMemoryPagedPool;    // offset: 0x0 ordinal: 0x0
  LONG BufferMemoryNonPagedPool; // offset: 0x4 ordinal: 0x1
  ULONGLONG EventsLoggedCount;   // offset: 0x8 ordinal: 0x2
  LONG EventsLost;               // offset: 0x10 ordinal: 0x3
  LONG NumConsumers;             // offset: 0x14 ordinal: 0x4
} _ETW_SESSION_PERF_COUNTERS;

// 0x80 bytes (sizeof)
typedef struct _PCW_PROCESSOR_INFO {
  ULONGLONG IdleTime;        // offset: 0x0 ordinal: 0x0
  ULONGLONG AvailableTime;   // offset: 0x8 ordinal: 0x1
  ULONGLONG UserTime;        // offset: 0x10 ordinal: 0x2
  ULONGLONG KernelTime;      // offset: 0x18 ordinal: 0x3
  ULONG Interrupts;          // offset: 0x20 ordinal: 0x4
  ULONGLONG DpcTime;         // offset: 0x28 ordinal: 0x5
  ULONGLONG InterruptTime;   // offset: 0x30 ordinal: 0x6
  ULONG DpcCount;            // offset: 0x38 ordinal: 0x7
  ULONG DpcRate;             // offset: 0x3c ordinal: 0x8
  ULONGLONG C1Time;          // offset: 0x40 ordinal: 0x9
  ULONGLONG C2Time;          // offset: 0x48 ordinal: 0xa
  ULONGLONG C3Time;          // offset: 0x50 ordinal: 0xb
  ULONGLONG C1Transitions;   // offset: 0x58 ordinal: 0xc
  ULONGLONG C2Transitions;   // offset: 0x60 ordinal: 0xd
  ULONGLONG C3Transitions;   // offset: 0x68 ordinal: 0xe
  ULONG ParkingStatus;       // offset: 0x70 ordinal: 0xf
  ULONG CurrentFrequency;    // offset: 0x74 ordinal: 0x10
  ULONG PercentMaxFrequency; // offset: 0x78 ordinal: 0x11
  ULONG StateFlags;          // offset: 0x7c ordinal: 0x12
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

typedef LONG (*__anon_1032)(enum _PCW_CALLBACK_TYPE,
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

// 0x8 bytes (sizeof)
typedef union _CLS_LSN {
  struct __anon_995 offset; // offset: 0x0 ordinal: 0x0
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
  ULONGLONG Teb : 1;                 // offset: 0x0 ordinal: 0x1
  ULONGLONG Spare : 1;               // offset: 0x0 ordinal: 0x2
  ULONGLONG SequentialAccess : 1;    // offset: 0x0 ordinal: 0x3
  ULONGLONG LastSequentialTrim : 15; // offset: 0x0 ordinal: 0x4
  ULONGLONG Spare2 : 8;              // offset: 0x0 ordinal: 0x5
  ULONGLONG LargePageCreating : 1;   // offset: 0x0 ordinal: 0x6
  ULONGLONG Spare3 : 31;             // offset: 0x0 ordinal: 0x7
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
typedef union __anon_861 {
  ULONGLONG LongFlags3;           // offset: 0x0 ordinal: 0x0
  struct _MMVAD_FLAGS3 VadFlags3; // offset: 0x0 ordinal: 0x1
} __anon_861;

// 0x8 bytes (sizeof)
typedef union __anon_860 {
  ULONGLONG LongFlags;          // offset: 0x0 ordinal: 0x0
  struct _MMVAD_FLAGS VadFlags; // offset: 0x0 ordinal: 0x1
} __anon_860;

// 0x8 bytes (sizeof)
typedef union __anon_855 {
  ULONGLONG KeepForever; // offset: 0x0 ordinal: 0x0
} __anon_855;

// 0x8 bytes (sizeof)
typedef union _MM_STORE_KEY {
  ULONGLONG KeyLow : 60; // offset: 0x0 ordinal: 0x0
  ULONGLONG KeyHigh : 4; // offset: 0x0 ordinal: 0x1
  ULONGLONG EntireKey;   // offset: 0x0 ordinal: 0x2
} _MM_STORE_KEY;

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
  UCHAR ImageMappedFlat : 1;           // offset: 0x33 ordinal: 0x11
  UCHAR Reserved : 4;                  // offset: 0x33 ordinal: 0x12
  ULONG LoaderFlags;                   // offset: 0x34 ordinal: 0x13
  ULONG ImageFileSize;                 // offset: 0x38 ordinal: 0x14
  ULONG CheckSum;                      // offset: 0x3c ordinal: 0x15
} _SECTION_IMAGE_INFORMATION;

// 0x48 bytes (sizeof)
typedef struct _MI_SECTION_IMAGE_INFORMATION {
  struct _SECTION_IMAGE_INFORMATION
      ExportedImageInformation; // offset: 0x0 ordinal: 0x0
  struct _MI_EXTRA_IMAGE_INFORMATION
      InternalImageInformation; // offset: 0x40 ordinal: 0x1
} _MI_SECTION_IMAGE_INFORMATION;

// 0x8 bytes (sizeof)
typedef union __anon_841 {
  struct _MI_SECTION_IMAGE_INFORMATION
      *ImageInformation; // offset: 0x0 ordinal: 0x0
  VOID *FirstMappedVa;   // offset: 0x0 ordinal: 0x1
} __anon_841;

// 0x10 bytes (sizeof)
typedef struct _MMEXTEND_INFO {
  ULONGLONG CommittedSize; // offset: 0x0 ordinal: 0x0
  ULONG ReferenceCount;    // offset: 0x8 ordinal: 0x1
} _MMEXTEND_INFO;

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
typedef struct __anon_820 {
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
} __anon_820;

// 0x10 bytes (sizeof)
typedef union __anon_831 {
  struct __anon_820 e2; // offset: 0x0 ordinal: 0x0
} __anon_831;

// 0x8 bytes (sizeof)
typedef union __anon_814 {
  ULONGLONG PteFrame : 52;        // offset: 0x0 ordinal: 0x0
  ULONGLONG Unused : 3;           // offset: 0x0 ordinal: 0x1
  ULONGLONG PfnImageVerified : 1; // offset: 0x0 ordinal: 0x2
  ULONGLONG AweAllocation : 1;    // offset: 0x0 ordinal: 0x3
  ULONGLONG PrototypePte : 1;     // offset: 0x0 ordinal: 0x4
  ULONGLONG PageColor : 6;        // offset: 0x0 ordinal: 0x5
} __anon_814;

// 0x8 bytes (sizeof)
typedef union __anon_807 {
  ULONGLONG Flink;                        // offset: 0x0 ordinal: 0x0
  ULONG WsIndex;                          // offset: 0x0 ordinal: 0x1
  struct _KEVENT *Event;                  // offset: 0x0 ordinal: 0x2
  VOID *Next;                             // offset: 0x0 ordinal: 0x3
  VOID *VolatileNext;                     // offset: 0x0 ordinal: 0x4
  struct _KTHREAD *KernelStackOwner;      // offset: 0x0 ordinal: 0x5
  struct _SINGLE_LIST_ENTRY NextStackPfn; // offset: 0x0 ordinal: 0x6
} __anon_807;

// 0x28 bytes (sizeof)
typedef struct _MMPFNLIST {
  ULONGLONG Total;        // offset: 0x0 ordinal: 0x0
  enum _MMLISTS ListName; // offset: 0x8 ordinal: 0x1
  ULONGLONG Flink;        // offset: 0x10 ordinal: 0x2
  ULONGLONG Blink;        // offset: 0x18 ordinal: 0x3
  ULONGLONG Lock;         // offset: 0x20 ordinal: 0x4
} _MMPFNLIST;

// 0x70 bytes (sizeof)
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
  ULONGLONG UpdateCapsule;             // offset: 0x58 ordinal: 0xb
  ULONGLONG QueryCapsuleCapabilities;  // offset: 0x60 ordinal: 0xc
  ULONGLONG QueryVariableInfo;         // offset: 0x68 ordinal: 0xd
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
typedef union __anon_782 {
  struct _EFI_FIRMWARE_INFORMATION EfiInformation;   // offset: 0x0 ordinal: 0x0
  struct _PCAT_FIRMWARE_INFORMATION PcatInformation; // offset: 0x0 ordinal: 0x1
} __anon_782;

// 0x20 bytes (sizeof)
typedef struct _FIRMWARE_INFORMATION_LOADER_BLOCK {
  ULONG FirmwareTypeEfi : 1; // offset: 0x0 ordinal: 0x0
  ULONG Reserved : 31;       // offset: 0x0 ordinal: 0x1
  union __anon_782 u;        // offset: 0x8 ordinal: 0x2
} _FIRMWARE_INFORMATION_LOADER_BLOCK;

// 0x10 bytes (sizeof)
typedef struct _LOADER_PERFORMANCE_DATA {
  ULONGLONG StartTime; // offset: 0x0 ordinal: 0x0
  ULONGLONG EndTime;   // offset: 0x8 ordinal: 0x1
} _LOADER_PERFORMANCE_DATA;

// 0x48 bytes (sizeof)
typedef struct _TPM_BOOT_ENTROPY_LDR_RESULT {
  ULONGLONG Policy;                              // offset: 0x0 ordinal: 0x0
  enum _TPM_BOOT_ENTROPY_RESULT_CODE ResultCode; // offset: 0x8 ordinal: 0x1
  LONG ResultStatus;                             // offset: 0xc ordinal: 0x2
  ULONGLONG Time;                                // offset: 0x10 ordinal: 0x3
  ULONG EntropyLength;                           // offset: 0x18 ordinal: 0x4
  UCHAR EntropyData[40];                         // offset: 0x1c ordinal: 0x5
} _TPM_BOOT_ENTROPY_LDR_RESULT;

// 0x148 bytes (sizeof)
typedef struct _LOADER_PARAMETER_EXTENSION {
  ULONG Size;                              // offset: 0x0 ordinal: 0x0
  struct _PROFILE_PARAMETER_BLOCK Profile; // offset: 0x4 ordinal: 0x1
  VOID *EmInfFileImage;                    // offset: 0x18 ordinal: 0x2
  ULONG EmInfFileSize;                     // offset: 0x20 ordinal: 0x3
  VOID *TriageDumpBlock;                   // offset: 0x28 ordinal: 0x4
  ULONGLONG LoaderPagesSpanned;            // offset: 0x30 ordinal: 0x5
  struct _HEADLESS_LOADER_BLOCK
      *HeadlessLoaderBlock;                         // offset: 0x38 ordinal: 0x6
  struct _SMBIOS_TABLE_HEADER *SMBiosEPSHeader;     // offset: 0x40 ordinal: 0x7
  VOID *DrvDBImage;                                 // offset: 0x48 ordinal: 0x8
  ULONG DrvDBSize;                                  // offset: 0x50 ordinal: 0x9
  struct _NETWORK_LOADER_BLOCK *NetworkLoaderBlock; // offset: 0x58 ordinal: 0xa
  struct _LIST_ENTRY FirmwareDescriptorListHead;    // offset: 0x60 ordinal: 0xb
  VOID *AcpiTable;                                  // offset: 0x70 ordinal: 0xc
  ULONG AcpiTableSize;                              // offset: 0x78 ordinal: 0xd
  ULONG LastBootSucceeded : 1;                      // offset: 0x7c ordinal: 0xe
  ULONG LastBootShutdown : 1;                       // offset: 0x7c ordinal: 0xf
  ULONG IoPortAccessSupported : 1; // offset: 0x7c ordinal: 0x10
  ULONG Reserved : 29;             // offset: 0x7c ordinal: 0x11
  struct _LOADER_PERFORMANCE_DATA
      *LoaderPerformanceData; // offset: 0x80 ordinal: 0x12
  struct _LIST_ENTRY
      BootApplicationPersistentData;    // offset: 0x88 ordinal: 0x13
  VOID *WmdTestResult;                  // offset: 0x98 ordinal: 0x14
  struct _GUID BootIdentifier;          // offset: 0xa0 ordinal: 0x15
  ULONG ResumePages;                    // offset: 0xb0 ordinal: 0x16
  VOID *DumpHeader;                     // offset: 0xb8 ordinal: 0x17
  VOID *BgContext;                      // offset: 0xc0 ordinal: 0x18
  VOID *NumaLocalityInfo;               // offset: 0xc8 ordinal: 0x19
  VOID *NumaGroupAssignment;            // offset: 0xd0 ordinal: 0x1a
  struct _LIST_ENTRY AttachedHives;     // offset: 0xd8 ordinal: 0x1b
  ULONG MemoryCachingRequirementsCount; // offset: 0xe8 ordinal: 0x1c
  VOID *MemoryCachingRequirements;      // offset: 0xf0 ordinal: 0x1d
  struct _TPM_BOOT_ENTROPY_LDR_RESULT
      TpmBootEntropyResult;            // offset: 0xf8 ordinal: 0x1e
  ULONGLONG ProcessorCounterFrequency; // offset: 0x140 ordinal: 0x1f
} _LOADER_PARAMETER_EXTENSION;

// 0xf0 bytes (sizeof)
typedef struct _LOADER_PARAMETER_BLOCK {
  ULONG OsMajorVersion;                        // offset: 0x0 ordinal: 0x0
  ULONG OsMinorVersion;                        // offset: 0x4 ordinal: 0x1
  ULONG Size;                                  // offset: 0x8 ordinal: 0x2
  ULONG Reserved;                              // offset: 0xc ordinal: 0x3
  struct _LIST_ENTRY LoadOrderListHead;        // offset: 0x10 ordinal: 0x4
  struct _LIST_ENTRY MemoryDescriptorListHead; // offset: 0x20 ordinal: 0x5
  struct _LIST_ENTRY BootDriverListHead;       // offset: 0x30 ordinal: 0x6
  ULONGLONG KernelStack;                       // offset: 0x40 ordinal: 0x7
  ULONGLONG Prcb;                              // offset: 0x48 ordinal: 0x8
  ULONGLONG Process;                           // offset: 0x50 ordinal: 0x9
  ULONGLONG Thread;                            // offset: 0x58 ordinal: 0xa
  ULONG RegistryLength;                        // offset: 0x60 ordinal: 0xb
  VOID *RegistryBase;                          // offset: 0x68 ordinal: 0xc
  struct _CONFIGURATION_COMPONENT_DATA
      *ConfigurationRoot;          // offset: 0x70 ordinal: 0xd
  CHAR *ArcBootDeviceName;         // offset: 0x78 ordinal: 0xe
  CHAR *ArcHalDeviceName;          // offset: 0x80 ordinal: 0xf
  CHAR *NtBootPathName;            // offset: 0x88 ordinal: 0x10
  CHAR *NtHalPathName;             // offset: 0x90 ordinal: 0x11
  CHAR *LoadOptions;               // offset: 0x98 ordinal: 0x12
  struct _NLS_DATA_BLOCK *NlsData; // offset: 0xa0 ordinal: 0x13
  struct _ARC_DISK_INFORMATION
      *ArcDiskInformation;                       // offset: 0xa8 ordinal: 0x14
  VOID *OemFontFile;                             // offset: 0xb0 ordinal: 0x15
  struct _LOADER_PARAMETER_EXTENSION *Extension; // offset: 0xb8 ordinal: 0x16
  union __anon_769 u;                            // offset: 0xc0 ordinal: 0x17
  struct _FIRMWARE_INFORMATION_LOADER_BLOCK
      FirmwareInformation; // offset: 0xd0 ordinal: 0x18
} _LOADER_PARAMETER_BLOCK;

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
  ULONGLONG UsedPageTableEntries : 10; // offset: 0x0 ordinal: 0x5
  ULONGLONG InStore : 1;               // offset: 0x0 ordinal: 0x6
  ULONGLONG Reserved : 9;              // offset: 0x0 ordinal: 0x7
  ULONGLONG PageFileHigh : 32;         // offset: 0x0 ordinal: 0x8
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
typedef struct __anon_712 {
  USHORT Group;        // offset: 0x0 ordinal: 0x0
  USHORT MessageCount; // offset: 0x2 ordinal: 0x1
  ULONG Vector;        // offset: 0x4 ordinal: 0x2
  ULONGLONG Affinity;  // offset: 0x8 ordinal: 0x3
} __anon_712;

// 0x10 bytes (sizeof)
typedef struct __anon_704 {
  USHORT Level;       // offset: 0x0 ordinal: 0x0
  USHORT Group;       // offset: 0x2 ordinal: 0x1
  ULONG Vector;       // offset: 0x4 ordinal: 0x2
  ULONGLONG Affinity; // offset: 0x8 ordinal: 0x3
} __anon_704;

// 0x10 bytes (sizeof)
typedef struct __anon_705 {
  union {
    struct __anon_712 Raw;        // offset: 0x0 ordinal: 0x0
    struct __anon_704 Translated; // offset: 0x0 ordinal: 0x1
  };
} __anon_705;

// 0x10 bytes (sizeof)
typedef union __anon_701 {
  struct __anon_703 Generic;            // offset: 0x0 ordinal: 0x0
  struct __anon_703 Port;               // offset: 0x0 ordinal: 0x1
  struct __anon_704 Interrupt;          // offset: 0x0 ordinal: 0x2
  struct __anon_705 MessageInterrupt;   // offset: 0x0 ordinal: 0x3
  struct __anon_703 Memory;             // offset: 0x0 ordinal: 0x4
  struct __anon_706 Dma;                // offset: 0x0 ordinal: 0x5
  struct __anon_695 DevicePrivate;      // offset: 0x0 ordinal: 0x6
  struct __anon_707 BusNumber;          // offset: 0x0 ordinal: 0x7
  struct __anon_708 DeviceSpecificData; // offset: 0x0 ordinal: 0x8
  struct __anon_709 Memory40;           // offset: 0x0 ordinal: 0x9
  struct __anon_710 Memory48;           // offset: 0x0 ordinal: 0xa
  struct __anon_711 Memory64;           // offset: 0x0 ordinal: 0xb
} __anon_701;

// 0x14 bytes (sizeof)
typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR {
  UCHAR Type;             // offset: 0x0 ordinal: 0x0
  UCHAR ShareDisposition; // offset: 0x1 ordinal: 0x1
  USHORT Flags;           // offset: 0x2 ordinal: 0x2
  union __anon_701 u;     // offset: 0x4 ordinal: 0x3
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
typedef struct __anon_583 {
  struct _CM_RESOURCE_LIST *AllocatedResources; // offset: 0x0 ordinal: 0x0
  struct _CM_RESOURCE_LIST
      *AllocatedResourcesTranslated; // offset: 0x8 ordinal: 0x1
} __anon_583;

// 0x18 bytes (sizeof)
typedef struct __anon_693 {
  ULONG MinimumVector;               // offset: 0x0 ordinal: 0x0
  ULONG MaximumVector;               // offset: 0x4 ordinal: 0x1
  USHORT AffinityPolicy;             // offset: 0x8 ordinal: 0x2
  USHORT Group;                      // offset: 0xa ordinal: 0x3
  enum _IRQ_PRIORITY PriorityPolicy; // offset: 0xc ordinal: 0x4
  ULONGLONG TargetedProcessors;      // offset: 0x10 ordinal: 0x5
} __anon_693;

// 0x18 bytes (sizeof)
typedef union __anon_689 {
  struct __anon_692 Port;          // offset: 0x0 ordinal: 0x0
  struct __anon_692 Memory;        // offset: 0x0 ordinal: 0x1
  struct __anon_693 Interrupt;     // offset: 0x0 ordinal: 0x2
  struct __anon_694 Dma;           // offset: 0x0 ordinal: 0x3
  struct __anon_692 Generic;       // offset: 0x0 ordinal: 0x4
  struct __anon_695 DevicePrivate; // offset: 0x0 ordinal: 0x5
  struct __anon_696 BusNumber;     // offset: 0x0 ordinal: 0x6
  struct __anon_697 ConfigData;    // offset: 0x0 ordinal: 0x7
  struct __anon_698 Memory40;      // offset: 0x0 ordinal: 0x8
  struct __anon_699 Memory48;      // offset: 0x0 ordinal: 0x9
  struct __anon_700 Memory64;      // offset: 0x0 ordinal: 0xa
} __anon_689;

// 0x20 bytes (sizeof)
typedef struct _IO_RESOURCE_DESCRIPTOR {
  UCHAR Option;           // offset: 0x0 ordinal: 0x0
  UCHAR Type;             // offset: 0x1 ordinal: 0x1
  UCHAR ShareDisposition; // offset: 0x2 ordinal: 0x2
  UCHAR Spare1;           // offset: 0x3 ordinal: 0x3
  USHORT Flags;           // offset: 0x4 ordinal: 0x4
  USHORT Spare2;          // offset: 0x6 ordinal: 0x5
  union __anon_689 u;     // offset: 0x8 ordinal: 0x6
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
typedef union __anon_1556 {
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
} __anon_1556;

// 0x20 bytes (sizeof)
typedef struct _ARBITER_PARAMETERS {
  union __anon_1556 Parameters; // offset: 0x0 ordinal: 0x0
} _ARBITER_PARAMETERS;

typedef LONG (*__anon_1540)(VOID *, enum _ARBITER_ACTION,
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

typedef LONG (*__anon_1512)(struct _IO_RESOURCE_DESCRIPTOR *);

typedef LONG (*__anon_1510)(struct _IO_RESOURCE_DESCRIPTOR *, ULONGLONG,
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
typedef struct __anon_574 {
  struct _IO_RESOURCE_REQUIREMENTS_LIST
      *IoResourceRequirementList; // offset: 0x0 ordinal: 0x0
} __anon_574;

// 0x8 bytes (sizeof)
typedef struct _MMWSLE_FREE_ENTRY {
  ULONGLONG MustBeZero : 1;    // offset: 0x0 ordinal: 0x0
  ULONGLONG PreviousFree : 31; // offset: 0x0 ordinal: 0x1
  ULONGLONG NextFree : 32;     // offset: 0x0 ordinal: 0x2
} _MMWSLE_FREE_ENTRY;

// 0x8 bytes (sizeof)
typedef struct _MMWSLENTRY {
  ULONGLONG Valid : 1;              // offset: 0x0 ordinal: 0x0
  ULONGLONG Spare : 1;              // offset: 0x0 ordinal: 0x1
  ULONGLONG Hashed : 1;             // offset: 0x0 ordinal: 0x2
  ULONGLONG Direct : 1;             // offset: 0x0 ordinal: 0x3
  ULONGLONG Protection : 5;         // offset: 0x0 ordinal: 0x4
  ULONGLONG Age : 3;                // offset: 0x0 ordinal: 0x5
  ULONGLONG VirtualPageNumber : 52; // offset: 0x0 ordinal: 0x6
} _MMWSLENTRY;

// 0x8 bytes (sizeof)
typedef union __anon_666 {
  VOID *VirtualAddress;         // offset: 0x0 ordinal: 0x0
  ULONGLONG Long;               // offset: 0x0 ordinal: 0x1
  struct _MMWSLENTRY e1;        // offset: 0x0 ordinal: 0x2
  struct _MMWSLE_FREE_ENTRY e2; // offset: 0x0 ordinal: 0x3
} __anon_666;

// 0x8 bytes (sizeof)
typedef struct _MMWSLE {
  union __anon_666 u1; // offset: 0x0 ordinal: 0x0
} _MMWSLE;

// 0x50 bytes (sizeof)
typedef union __anon_1597 {
  struct _CELL_DATA CellData; // offset: 0x0 ordinal: 0x0
  ULONGLONG List[1];          // offset: 0x0 ordinal: 0x1
} __anon_1597;

// 0x58 bytes (sizeof)
typedef struct _CM_CACHED_VALUE_INDEX {
  ULONG CellIndex;        // offset: 0x0 ordinal: 0x0
  union __anon_1597 Data; // offset: 0x8 ordinal: 0x1
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
  ULONG NextAgingSlot;                          // offset: 0x24 ordinal: 0x7
  ULONG NumberOfCommittedPageTables;            // offset: 0x28 ordinal: 0x8
  ULONG VadBitMapHint;                          // offset: 0x2c ordinal: 0x9
  ULONG NonDirectCount;                         // offset: 0x30 ordinal: 0xa
  ULONG LastVadBit;                             // offset: 0x34 ordinal: 0xb
  ULONG MaximumLastVadBit;                      // offset: 0x38 ordinal: 0xc
  ULONG LastAllocationSizeHint;                 // offset: 0x3c ordinal: 0xd
  ULONG LastAllocationSize;                     // offset: 0x40 ordinal: 0xe
  struct _MMWSLE_NONDIRECT_HASH *NonDirectHash; // offset: 0x48 ordinal: 0xf
  struct _MMWSLE_HASH *HashTableStart;          // offset: 0x50 ordinal: 0x10
  struct _MMWSLE_HASH
      *HighestPermittedHashAddress;            // offset: 0x58 ordinal: 0x11
  ULONG MaximumUserPageTablePages;             // offset: 0x60 ordinal: 0x12
  ULONG MaximumUserPageDirectoryPages;         // offset: 0x64 ordinal: 0x13
  ULONG *CommittedPageTables;                  // offset: 0x68 ordinal: 0x14
  ULONG NumberOfCommittedPageDirectories;      // offset: 0x70 ordinal: 0x15
  ULONGLONG CommittedPageDirectories[128];     // offset: 0x78 ordinal: 0x16
  ULONG NumberOfCommittedPageDirectoryParents; // offset: 0x478 ordinal: 0x17
  ULONGLONG CommittedPageDirectoryParents[1];  // offset: 0x480 ordinal: 0x18
} _MMWSL;

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
  ULONG NextFreeTableEntry;     // offset: 0x8 ordinal: 0x7
} _HANDLE_TABLE_ENTRY;

// 0x40 bytes (sizeof)
typedef struct _PS_PER_CPU_QUOTA_CACHE_AWARE {
  struct _LIST_ENTRY SortedListEntry;  // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY IdleOnlyListHead; // offset: 0x10 ordinal: 0x1
  ULONGLONG CycleBaseAllowance;        // offset: 0x20 ordinal: 0x2
  LONGLONG CyclesRemaining;            // offset: 0x28 ordinal: 0x3
  ULONG CurrentGeneration;             // offset: 0x30 ordinal: 0x4
} _PS_PER_CPU_QUOTA_CACHE_AWARE;

// 0x10 bytes (sizeof)
typedef struct _OWNER_ENTRY {
  ULONGLONG OwnerThread;       // offset: 0x0 ordinal: 0x0
  ULONG IoPriorityBoosted : 1; // offset: 0x8 ordinal: 0x1
  ULONG OwnerReferenced : 1;   // offset: 0x8 ordinal: 0x2
  ULONG OwnerCount : 30;       // offset: 0x8 ordinal: 0x3
  ULONG TableSize;             // offset: 0x8 ordinal: 0x4
} _OWNER_ENTRY;

// 0x20 bytes (sizeof)
typedef struct __anon_584 {
  ULONGLONG ProviderId; // offset: 0x0 ordinal: 0x0
  VOID *DataPath;       // offset: 0x8 ordinal: 0x1
  ULONG BufferSize;     // offset: 0x10 ordinal: 0x2
  VOID *Buffer;         // offset: 0x18 ordinal: 0x3
} __anon_584;

// 0x20 bytes (sizeof)
typedef union __anon_530 {
  struct __anon_552 Create;                     // offset: 0x0 ordinal: 0x0
  struct __anon_553 CreatePipe;                 // offset: 0x0 ordinal: 0x1
  struct __anon_554 CreateMailslot;             // offset: 0x0 ordinal: 0x2
  struct __anon_555 Read;                       // offset: 0x0 ordinal: 0x3
  struct __anon_555 Write;                      // offset: 0x0 ordinal: 0x4
  struct __anon_556 QueryDirectory;             // offset: 0x0 ordinal: 0x5
  struct __anon_557 NotifyDirectory;            // offset: 0x0 ordinal: 0x6
  struct __anon_558 QueryFile;                  // offset: 0x0 ordinal: 0x7
  struct __anon_559 SetFile;                    // offset: 0x0 ordinal: 0x8
  struct __anon_560 QueryEa;                    // offset: 0x0 ordinal: 0x9
  struct __anon_561 SetEa;                      // offset: 0x0 ordinal: 0xa
  struct __anon_562 QueryVolume;                // offset: 0x0 ordinal: 0xb
  struct __anon_562 SetVolume;                  // offset: 0x0 ordinal: 0xc
  struct __anon_563 FileSystemControl;          // offset: 0x0 ordinal: 0xd
  struct __anon_564 LockControl;                // offset: 0x0 ordinal: 0xe
  struct __anon_565 DeviceIoControl;            // offset: 0x0 ordinal: 0xf
  struct __anon_566 QuerySecurity;              // offset: 0x0 ordinal: 0x10
  struct __anon_567 SetSecurity;                // offset: 0x0 ordinal: 0x11
  struct __anon_568 MountVolume;                // offset: 0x0 ordinal: 0x12
  struct __anon_568 VerifyVolume;               // offset: 0x0 ordinal: 0x13
  struct __anon_569 Scsi;                       // offset: 0x0 ordinal: 0x14
  struct __anon_570 QueryQuota;                 // offset: 0x0 ordinal: 0x15
  struct __anon_561 SetQuota;                   // offset: 0x0 ordinal: 0x16
  struct __anon_571 QueryDeviceRelations;       // offset: 0x0 ordinal: 0x17
  struct __anon_572 QueryInterface;             // offset: 0x0 ordinal: 0x18
  struct __anon_573 DeviceCapabilities;         // offset: 0x0 ordinal: 0x19
  struct __anon_574 FilterResourceRequirements; // offset: 0x0 ordinal: 0x1a
  struct __anon_575 ReadWriteConfig;            // offset: 0x0 ordinal: 0x1b
  struct __anon_576 SetLock;                    // offset: 0x0 ordinal: 0x1c
  struct __anon_577 QueryId;                    // offset: 0x0 ordinal: 0x1d
  struct __anon_578 QueryDeviceText;            // offset: 0x0 ordinal: 0x1e
  struct __anon_579 UsageNotification;          // offset: 0x0 ordinal: 0x1f
  struct __anon_580 WaitWake;                   // offset: 0x0 ordinal: 0x20
  struct __anon_581 PowerSequence;              // offset: 0x0 ordinal: 0x21
  struct __anon_582 Power;                      // offset: 0x0 ordinal: 0x22
  struct __anon_583 StartDevice;                // offset: 0x0 ordinal: 0x23
  struct __anon_584 WMI;                        // offset: 0x0 ordinal: 0x24
  struct __anon_585 Others;                     // offset: 0x0 ordinal: 0x25
} __anon_530;

// 0x28 bytes (sizeof)
typedef struct _MMADDRESS_NODE {
  union __anon_600 u1;                // offset: 0x0 ordinal: 0x0
  struct _MMADDRESS_NODE *LeftChild;  // offset: 0x8 ordinal: 0x1
  struct _MMADDRESS_NODE *RightChild; // offset: 0x10 ordinal: 0x2
  ULONGLONG StartingVpn;              // offset: 0x18 ordinal: 0x3
  ULONGLONG EndingVpn;                // offset: 0x20 ordinal: 0x4
} _MMADDRESS_NODE;

// 0x4080 bytes (sizeof)
typedef struct _PS_CPU_QUOTA_BLOCK {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 ordinal: 0x0
  ULONG SessionId;              // offset: 0x10 ordinal: 0x1
  ULONG CpuShareWeight;         // offset: 0x14 ordinal: 0x2
  union _PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA
      CapturedWeightData;                        // offset: 0x18 ordinal: 0x3
  ULONG DuplicateInputMarker : 1;                // offset: 0x20 ordinal: 0x4
  ULONG Reserved : 31;                           // offset: 0x20 ordinal: 0x5
  LONG MiscFlags;                                // offset: 0x20 ordinal: 0x6
  ULONGLONG BlockCurrentGenerationLock;          // offset: 0x0 ordinal: 0x7
  ULONGLONG CyclesAccumulated;                   // offset: 0x8 ordinal: 0x8
  ULONGLONG CycleCredit;                         // offset: 0x40 ordinal: 0x9
  ULONG BlockCurrentGeneration;                  // offset: 0x48 ordinal: 0xa
  ULONG CpuCyclePercent;                         // offset: 0x4c ordinal: 0xb
  UCHAR CyclesFinishedForCurrentGeneration;      // offset: 0x50 ordinal: 0xc
  struct _PS_PER_CPU_QUOTA_CACHE_AWARE Cpu[256]; // offset: 0x80 ordinal: 0xd
} _PS_CPU_QUOTA_BLOCK;

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

// 0x98 bytes (sizeof)
typedef struct _POP_THERMAL_ZONE_METRICS {
  struct _ERESOURCE MetricsResource;            // offset: 0x0 ordinal: 0x0
  ULONG ActiveCount;                            // offset: 0x68 ordinal: 0x1
  ULONG PassiveCount;                           // offset: 0x6c ordinal: 0x2
  union _LARGE_INTEGER LastActiveStartTick;     // offset: 0x70 ordinal: 0x3
  union _LARGE_INTEGER AverageActiveTime;       // offset: 0x78 ordinal: 0x4
  union _LARGE_INTEGER LastPassiveStartTick;    // offset: 0x80 ordinal: 0x5
  union _LARGE_INTEGER AveragePassiveTime;      // offset: 0x88 ordinal: 0x6
  union _LARGE_INTEGER StartTickSinceLastReset; // offset: 0x90 ordinal: 0x7
} _POP_THERMAL_ZONE_METRICS;

// 0x310 bytes (sizeof)
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
      ImpersonationLevel;    // offset: 0xbc ordinal: 0x16
  ULONG TokenFlags;          // offset: 0xc0 ordinal: 0x17
  UCHAR TokenInUse;          // offset: 0xc4 ordinal: 0x18
  ULONG IntegrityLevelIndex; // offset: 0xc8 ordinal: 0x19
  ULONG MandatoryPolicy;     // offset: 0xcc ordinal: 0x1a
  struct _SEP_LOGON_SESSION_REFERENCES
      *LogonSession;                       // offset: 0xd0 ordinal: 0x1b
  struct _LUID OriginatingLogonSession;    // offset: 0xd8 ordinal: 0x1c
  struct _SID_AND_ATTRIBUTES_HASH SidHash; // offset: 0xe0 ordinal: 0x1d
  struct _SID_AND_ATTRIBUTES_HASH
      RestrictedSidHash; // offset: 0x1f0 ordinal: 0x1e
  struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
      *pSecurityAttributes; // offset: 0x300 ordinal: 0x1f
  ULONGLONG VariablePart;   // offset: 0x308 ordinal: 0x20
} _TOKEN;

// 0x8 bytes (sizeof)
typedef struct __anon_660 {
  struct _ERESOURCE *ResourceToRelease; // offset: 0x0 ordinal: 0x0
} __anon_660;

// 0x10 bytes (sizeof)
typedef struct __anon_659 {
  union _LARGE_INTEGER *EndingOffset;    // offset: 0x0 ordinal: 0x0
  struct _ERESOURCE **ResourceToRelease; // offset: 0x8 ordinal: 0x1
} __anon_659;

// 0x28 bytes (sizeof)
typedef union _FS_FILTER_PARAMETERS {
  struct __anon_659 AcquireForModifiedPageWriter; // offset: 0x0 ordinal: 0x0
  struct __anon_660 ReleaseForModifiedPageWriter; // offset: 0x0 ordinal: 0x1
  struct __anon_661
      AcquireForSectionSynchronization;     // offset: 0x0 ordinal: 0x2
  struct __anon_662 NotifyStreamFileObject; // offset: 0x0 ordinal: 0x3
  struct __anon_663 Others;                 // offset: 0x0 ordinal: 0x4
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

typedef VOID (*__anon_535)(struct _FS_FILTER_CALLBACK_DATA *, LONG, VOID *);

typedef LONG (*__anon_534)(struct _FS_FILTER_CALLBACK_DATA *, VOID **);

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

typedef LONG (*__anon_494)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                           struct _ERESOURCE **, struct _DEVICE_OBJECT *);

typedef LONG (*__anon_500)(struct _FILE_OBJECT *, struct _ERESOURCE *,
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
typedef union __anon_760 {
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
} __anon_760;

// 0x8 bytes (sizeof)
typedef struct _MMPTE {
  union __anon_760 u; // offset: 0x0 ordinal: 0x0
} _MMPTE;

// 0x10 bytes (sizeof)
typedef struct _MI_SPECIAL_POOL_PTE_LIST {
  struct _MMPTE FreePteHead; // offset: 0x0 ordinal: 0x0
  struct _MMPTE FreePteTail; // offset: 0x8 ordinal: 0x1
} _MI_SPECIAL_POOL_PTE_LIST;

// 0x48 bytes (sizeof)
typedef struct _MI_SPECIAL_POOL {
  struct _MMPTE *PteBase;                    // offset: 0x0 ordinal: 0x0
  ULONGLONG Lock;                            // offset: 0x8 ordinal: 0x1
  struct _MI_SPECIAL_POOL_PTE_LIST Paged;    // offset: 0x10 ordinal: 0x2
  struct _MI_SPECIAL_POOL_PTE_LIST NonPaged; // offset: 0x20 ordinal: 0x3
  LONGLONG PagesInUse;                       // offset: 0x30 ordinal: 0x4
  struct _RTL_BITMAP SpecialPoolPdes;        // offset: 0x38 ordinal: 0x5
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
typedef union __anon_1418 {
  struct _MMBANKED_SECTION *Banked;    // offset: 0x0 ordinal: 0x0
  struct _MMEXTEND_INFO *ExtendedInfo; // offset: 0x0 ordinal: 0x1
} __anon_1418;

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
  union __anon_827 u;                    // offset: 0x28 ordinal: 0x7
  ULONG StartingSector;                  // offset: 0x2c ordinal: 0x8
  ULONG NumberOfFullSectors;             // offset: 0x30 ordinal: 0x9
  union __anon_828 u1;                   // offset: 0x38 ordinal: 0xa
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
  union __anon_827 u;        // offset: 0x28 ordinal: 0x6
  ULONG StartingSector;      // offset: 0x2c ordinal: 0x7
  ULONG NumberOfFullSectors; // offset: 0x30 ordinal: 0x8
} _SUBSECTION;

// 0x8 bytes (sizeof)
typedef union __anon_808 {
  ULONGLONG Blink;              // offset: 0x0 ordinal: 0x0
  struct _MMPTE *ImageProtoPte; // offset: 0x0 ordinal: 0x1
  ULONGLONG ShareCount;         // offset: 0x0 ordinal: 0x2
} __anon_808;

// 0x30 bytes (sizeof)
typedef struct _MMPFN {
  union __anon_807 u1; // offset: 0x0 ordinal: 0x0
  union __anon_808 u2; // offset: 0x8 ordinal: 0x1
  union {
    struct _MMPTE *PteAddress; // offset: 0x10 ordinal: 0x2
    VOID *VolatilePteAddress;  // offset: 0x10 ordinal: 0x3
    LONG Lock;                 // offset: 0x10 ordinal: 0x4
    ULONGLONG PteLong;         // offset: 0x10 ordinal: 0x5
  };
  union __anon_812 u3;         // offset: 0x18 ordinal: 0x6
  USHORT UsedPageTableEntries; // offset: 0x1c ordinal: 0x7
  UCHAR VaType;                // offset: 0x1e ordinal: 0x8
  UCHAR ViewCount;             // offset: 0x1f ordinal: 0x9
  union {
    struct _MMPTE OriginalPte; // offset: 0x20 ordinal: 0xa
    LONG AweReferenceCount;    // offset: 0x20 ordinal: 0xb
  };
  union __anon_814 u4; // offset: 0x28 ordinal: 0xc
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
typedef struct _EX_RUNDOWN_REF {
  union {
    ULONGLONG Count; // offset: 0x0 ordinal: 0x0
    VOID *Ptr;       // offset: 0x0 ordinal: 0x1
  };
} _EX_RUNDOWN_REF;

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

// 0x10 bytes (sizeof)
typedef struct _ETW_BUFFER_HANDLE {
  struct _WMI_BUFFER_HEADER *TraceBuffer; // offset: 0x0 ordinal: 0x0
  struct _EX_FAST_REF *BufferFastRef;     // offset: 0x8 ordinal: 0x1
} _ETW_BUFFER_HANDLE;

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

// 0x150 bytes (sizeof)
typedef struct _OBJECT_DIRECTORY {
  struct _OBJECT_DIRECTORY_ENTRY *HashBuckets[37]; // offset: 0x0 ordinal: 0x0
  struct _EX_PUSH_LOCK Lock;                       // offset: 0x128 ordinal: 0x1
  struct _DEVICE_MAP *DeviceMap;                   // offset: 0x130 ordinal: 0x2
  ULONG SessionId;                                 // offset: 0x138 ordinal: 0x3
  VOID *NamespaceEntry;                            // offset: 0x140 ordinal: 0x4
  ULONG Flags;                                     // offset: 0x148 ordinal: 0x5
} _OBJECT_DIRECTORY;

// 0x20 bytes (sizeof)
typedef struct _OBP_LOOKUP_CONTEXT {
  struct _OBJECT_DIRECTORY *Directory; // offset: 0x0 ordinal: 0x0
  VOID *Object;                        // offset: 0x8 ordinal: 0x1
  ULONG HashValue;                     // offset: 0x10 ordinal: 0x2
  USHORT HashIndex;                    // offset: 0x14 ordinal: 0x3
  UCHAR DirectoryLocked;               // offset: 0x16 ordinal: 0x4
  UCHAR LockedExclusive;               // offset: 0x17 ordinal: 0x5
  ULONG LockStateSignature;            // offset: 0x18 ordinal: 0x6
} _OBP_LOOKUP_CONTEXT;

// 0x20 bytes (sizeof)
typedef struct _OBJECT_HEADER_NAME_INFO {
  struct _OBJECT_DIRECTORY *Directory; // offset: 0x0 ordinal: 0x0
  struct _UNICODE_STRING Name;         // offset: 0x8 ordinal: 0x1
  LONG ReferenceCount;                 // offset: 0x18 ordinal: 0x2
} _OBJECT_HEADER_NAME_INFO;

// 0x40 bytes (sizeof)
typedef struct _DEVICE_MAP {
  struct _OBJECT_DIRECTORY *DosDevicesDirectory; // offset: 0x0 ordinal: 0x0
  struct _OBJECT_DIRECTORY
      *GlobalDosDevicesDirectory;  // offset: 0x8 ordinal: 0x1
  VOID *DosDevicesDirectoryHandle; // offset: 0x10 ordinal: 0x2
  ULONG ReferenceCount;            // offset: 0x18 ordinal: 0x3
  ULONG DriveMap;                  // offset: 0x1c ordinal: 0x4
  UCHAR DriveType[32];             // offset: 0x20 ordinal: 0x5
} _DEVICE_MAP;

// 0x38 bytes (sizeof)
typedef struct _OBJECT_HEADER {
  LONGLONG PointerCount; // offset: 0x0 ordinal: 0x0
  union {
    LONGLONG HandleCount; // offset: 0x8 ordinal: 0x1
    VOID *NextToFree;     // offset: 0x8 ordinal: 0x2
  };
  struct _EX_PUSH_LOCK Lock; // offset: 0x10 ordinal: 0x3
  UCHAR TypeIndex;           // offset: 0x18 ordinal: 0x4
  UCHAR TraceFlags;          // offset: 0x19 ordinal: 0x5
  UCHAR InfoMask;            // offset: 0x1a ordinal: 0x6
  UCHAR Flags;               // offset: 0x1b ordinal: 0x7
  union {
    struct _OBJECT_CREATE_INFORMATION
        *ObjectCreateInfo;   // offset: 0x20 ordinal: 0x8
    VOID *QuotaBlockCharged; // offset: 0x20 ordinal: 0x9
  };
  VOID *SecurityDescriptor; // offset: 0x28 ordinal: 0xa
  struct _QUAD Body;        // offset: 0x30 ordinal: 0xb
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
  SHORT Type;                                    // offset: 0x0 ordinal: 0x0
  SHORT Size;                                    // offset: 0x2 ordinal: 0x1
  struct _FILE_OBJECT *FileObject;               // offset: 0x8 ordinal: 0x2
  LONG FinalStatus;                              // offset: 0x10 ordinal: 0x3
  ULONGLONG Information;                         // offset: 0x18 ordinal: 0x4
  ULONG ParseCheck;                              // offset: 0x20 ordinal: 0x5
  struct _FILE_OBJECT *RelatedFileObject;        // offset: 0x28 ordinal: 0x6
  struct _OBJECT_ATTRIBUTES *OriginalAttributes; // offset: 0x30 ordinal: 0x7
  union _LARGE_INTEGER AllocationSize;           // offset: 0x38 ordinal: 0x8
  ULONG CreateOptions;                           // offset: 0x40 ordinal: 0x9
  USHORT FileAttributes;                         // offset: 0x44 ordinal: 0xa
  USHORT ShareAccess;                            // offset: 0x46 ordinal: 0xb
  VOID *EaBuffer;                                // offset: 0x48 ordinal: 0xc
  ULONG EaLength;                                // offset: 0x50 ordinal: 0xd
  ULONG Options;                                 // offset: 0x54 ordinal: 0xe
  ULONG Disposition;                             // offset: 0x58 ordinal: 0xf
  struct _FILE_BASIC_INFORMATION
      *BasicInformation; // offset: 0x60 ordinal: 0x10
  struct _FILE_NETWORK_OPEN_INFORMATION
      *NetworkInformation;                    // offset: 0x68 ordinal: 0x11
  enum _CREATE_FILE_TYPE CreateFileType;      // offset: 0x70 ordinal: 0x12
  VOID *MailslotOrPipeParameters;             // offset: 0x78 ordinal: 0x13
  UCHAR Override;                             // offset: 0x80 ordinal: 0x14
  UCHAR QueryOnly;                            // offset: 0x81 ordinal: 0x15
  UCHAR DeleteOnly;                           // offset: 0x82 ordinal: 0x16
  UCHAR FullAttributes;                       // offset: 0x83 ordinal: 0x17
  struct _DUMMY_FILE_OBJECT *LocalFileObject; // offset: 0x88 ordinal: 0x18
  ULONG InternalFlags;                        // offset: 0x90 ordinal: 0x19
  struct _IO_DRIVER_CREATE_CONTEXT
      DriverCreateContext; // offset: 0x98 ordinal: 0x1a
} _OPEN_PACKET;

// 0x18 bytes (sizeof)
typedef struct _ALPC_HANDLE_TABLE {
  struct _ALPC_HANDLE_ENTRY *Handles; // offset: 0x0 ordinal: 0x0
  ULONG TotalHandles;                 // offset: 0x8 ordinal: 0x1
  ULONG Flags;                        // offset: 0xc ordinal: 0x2
  struct _EX_PUSH_LOCK Lock;          // offset: 0x10 ordinal: 0x3
} _ALPC_HANDLE_TABLE;

// 0x40 bytes (sizeof)
typedef struct _ALPC_COMMUNICATION_INFO {
  struct _ALPC_PORT *ConnectionPort;          // offset: 0x0 ordinal: 0x0
  struct _ALPC_PORT *ServerCommunicationPort; // offset: 0x8 ordinal: 0x1
  struct _ALPC_PORT *ClientCommunicationPort; // offset: 0x10 ordinal: 0x2
  struct _LIST_ENTRY CommunicationList;       // offset: 0x18 ordinal: 0x3
  struct _ALPC_HANDLE_TABLE HandleTable;      // offset: 0x28 ordinal: 0x4
} _ALPC_COMMUNICATION_INFO;

// 0x20 bytes (sizeof)
typedef struct _BLOB {
  union {
    struct _LIST_ENTRY ResourceList;   // offset: 0x0 ordinal: 0x0
    struct _SLIST_ENTRY FreeListEntry; // offset: 0x0 ordinal: 0x1
  };
  union __anon_1226 u1;      // offset: 0x10 ordinal: 0x2
  UCHAR ResourceId;          // offset: 0x11 ordinal: 0x3
  SHORT CachedReferences;    // offset: 0x12 ordinal: 0x4
  LONG ReferenceCount;       // offset: 0x14 ordinal: 0x5
  struct _EX_PUSH_LOCK Lock; // offset: 0x18 ordinal: 0x6
} _BLOB;

// 0x1f0 bytes (sizeof)
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
  VOID *LogHandle;                            // offset: 0xf0 ordinal: 0x1a
  VOID(*FlushToLsnRoutine)
  (VOID *, union _LARGE_INTEGER); // offset: 0xf8 ordinal: 0x1b
  ULONG DirtyPageThreshold;       // offset: 0x100 ordinal: 0x1c
  ULONG LazyWritePassCount;       // offset: 0x104 ordinal: 0x1d
  struct _CACHE_UNINITIALIZE_EVENT
      *UninitializeEvent;                      // offset: 0x108 ordinal: 0x1e
  struct _KGUARDED_MUTEX BcbLock;              // offset: 0x110 ordinal: 0x1f
  union _LARGE_INTEGER LastUnmapBehindOffset;  // offset: 0x148 ordinal: 0x20
  struct _KEVENT Event;                        // offset: 0x150 ordinal: 0x21
  union _LARGE_INTEGER HighWaterMappingOffset; // offset: 0x168 ordinal: 0x22
  struct _PRIVATE_CACHE_MAP PrivateCacheMap;   // offset: 0x170 ordinal: 0x23
  VOID *WriteBehindWorkQueueEntry;             // offset: 0x1d8 ordinal: 0x24
  struct _VOLUME_CACHE_MAP *VolumeCacheMap;    // offset: 0x1e0 ordinal: 0x25
  ULONG ProcImagePathHash;                     // offset: 0x1e8 ordinal: 0x26
  ULONG WritesInProgress;                      // offset: 0x1ec ordinal: 0x27
} _SHARED_CACHE_MAP;

// 0x8 bytes (sizeof)
typedef struct __anon_1179 {
  struct _SHARED_CACHE_MAP *SharedCacheMap; // offset: 0x0 ordinal: 0x0
} __anon_1179;

// 0x8 bytes (sizeof)
typedef union __anon_1182 {
  struct __anon_1178 Read;         // offset: 0x0 ordinal: 0x0
  struct __anon_1179 Write;        // offset: 0x0 ordinal: 0x1
  struct __anon_1180 Event;        // offset: 0x0 ordinal: 0x2
  struct __anon_1181 Notification; // offset: 0x0 ordinal: 0x3
} __anon_1182;

// 0x20 bytes (sizeof)
typedef struct _WORK_QUEUE_ENTRY {
  struct _LIST_ENTRY WorkQueueLinks; // offset: 0x0 ordinal: 0x0
  union __anon_1182 Parameters;      // offset: 0x10 ordinal: 0x1
  UCHAR Function;                    // offset: 0x18 ordinal: 0x2
} _WORK_QUEUE_ENTRY;

// 0x30 bytes (sizeof)
typedef struct _VACB {
  VOID *BaseAddress;                        // offset: 0x0 ordinal: 0x0
  struct _SHARED_CACHE_MAP *SharedCacheMap; // offset: 0x8 ordinal: 0x1
  union __anon_1174 Overlay;                // offset: 0x10 ordinal: 0x2
  struct _LIST_ENTRY Links;                 // offset: 0x18 ordinal: 0x3
  struct _VACB_ARRAY_HEADER *ArrayHead;     // offset: 0x28 ordinal: 0x4
} _VACB;

// 0x18 bytes (sizeof)
typedef struct _CM_KEY_HASH_TABLE_ENTRY {
  struct _EX_PUSH_LOCK Lock;  // offset: 0x0 ordinal: 0x0
  struct _KTHREAD *Owner;     // offset: 0x8 ordinal: 0x1
  struct _CM_KEY_HASH *Entry; // offset: 0x10 ordinal: 0x2
} _CM_KEY_HASH_TABLE_ENTRY;

// 0xbe0 bytes (sizeof)
typedef struct _CMHIVE {
  struct _HHIVE Hive;                             // offset: 0x0 ordinal: 0x0
  VOID *FileHandles[6];                           // offset: 0x598 ordinal: 0x1
  struct _LIST_ENTRY NotifyList;                  // offset: 0x5c8 ordinal: 0x2
  struct _LIST_ENTRY HiveList;                    // offset: 0x5d8 ordinal: 0x3
  struct _LIST_ENTRY PreloadedHiveList;           // offset: 0x5e8 ordinal: 0x4
  struct _EX_RUNDOWN_REF HiveRundown;             // offset: 0x5f8 ordinal: 0x5
  struct _LIST_ENTRY ParseCacheEntries;           // offset: 0x600 ordinal: 0x6
  struct _CM_KEY_HASH_TABLE_ENTRY *KcbCacheTable; // offset: 0x610 ordinal: 0x7
  ULONG KcbCacheTableSize;                        // offset: 0x618 ordinal: 0x8
  ULONG Identity;                                 // offset: 0x61c ordinal: 0x9
  struct _FAST_MUTEX *HiveLock;                   // offset: 0x620 ordinal: 0xa
  struct _EX_PUSH_LOCK ViewLock;                  // offset: 0x628 ordinal: 0xb
  struct _KTHREAD *ViewLockOwner;                 // offset: 0x630 ordinal: 0xc
  ULONG ViewLockLast;                             // offset: 0x638 ordinal: 0xd
  ULONG ViewUnLockLast;                           // offset: 0x63c ordinal: 0xe
  struct _FAST_MUTEX *WriterLock;                 // offset: 0x640 ordinal: 0xf
  struct _ERESOURCE *FlusherLock;                 // offset: 0x648 ordinal: 0x10
  struct _RTL_BITMAP FlushDirtyVector;            // offset: 0x650 ordinal: 0x11
  struct CMP_OFFSET_ARRAY *FlushOffsetArray;      // offset: 0x660 ordinal: 0x12
  ULONG FlushOffsetArrayCount;                    // offset: 0x668 ordinal: 0x13
  ULONG FlushHiveTruncated;                       // offset: 0x66c ordinal: 0x14
  struct _FAST_MUTEX *FlushLock2;                 // offset: 0x670 ordinal: 0x15
  struct _EX_PUSH_LOCK SecurityLock;              // offset: 0x678 ordinal: 0x16
  struct _LIST_ENTRY MappedViewList;              // offset: 0x680 ordinal: 0x17
  struct _LIST_ENTRY PinnedViewList;              // offset: 0x690 ordinal: 0x18
  struct _LIST_ENTRY FlushedViewList;             // offset: 0x6a0 ordinal: 0x19
  USHORT MappedViewCount;                         // offset: 0x6b0 ordinal: 0x1a
  USHORT PinnedViewCount;                         // offset: 0x6b2 ordinal: 0x1b
  ULONG UseCount;                                 // offset: 0x6b4 ordinal: 0x1c
  ULONG ViewsPerHive;                             // offset: 0x6b8 ordinal: 0x1d
  struct _FILE_OBJECT *FileObject;                // offset: 0x6c0 ordinal: 0x1e
  ULONG LastShrinkHiveSize;                       // offset: 0x6c8 ordinal: 0x1f
  union _LARGE_INTEGER ActualFileSize;            // offset: 0x6d0 ordinal: 0x20
  struct _UNICODE_STRING FileFullPath;            // offset: 0x6d8 ordinal: 0x21
  struct _UNICODE_STRING FileUserName;            // offset: 0x6e8 ordinal: 0x22
  struct _UNICODE_STRING HiveRootPath;            // offset: 0x6f8 ordinal: 0x23
  ULONG SecurityCount;                            // offset: 0x708 ordinal: 0x24
  ULONG SecurityCacheSize;                        // offset: 0x70c ordinal: 0x25
  LONG SecurityHitHint;                           // offset: 0x710 ordinal: 0x26
  struct _CM_KEY_SECURITY_CACHE_ENTRY
      *SecurityCache;                          // offset: 0x718 ordinal: 0x27
  struct _LIST_ENTRY SecurityHash[64];         // offset: 0x720 ordinal: 0x28
  ULONG UnloadEventCount;                      // offset: 0xb20 ordinal: 0x29
  struct _KEVENT **UnloadEventArray;           // offset: 0xb28 ordinal: 0x2a
  struct _CM_KEY_CONTROL_BLOCK *RootKcb;       // offset: 0xb30 ordinal: 0x2b
  UCHAR Frozen;                                // offset: 0xb38 ordinal: 0x2c
  struct _CM_WORKITEM *UnloadWorkItem;         // offset: 0xb40 ordinal: 0x2d
  struct _CM_WORKITEM UnloadWorkItemHolder;    // offset: 0xb48 ordinal: 0x2e
  UCHAR GrowOnlyMode;                          // offset: 0xb70 ordinal: 0x2f
  ULONG GrowOffset;                            // offset: 0xb74 ordinal: 0x30
  struct _LIST_ENTRY KcbConvertListHead;       // offset: 0xb78 ordinal: 0x31
  struct _LIST_ENTRY KnodeConvertListHead;     // offset: 0xb88 ordinal: 0x32
  struct _CM_CELL_REMAP_BLOCK *CellRemapArray; // offset: 0xb98 ordinal: 0x33
  ULONG Flags;                                 // offset: 0xba0 ordinal: 0x34
  struct _LIST_ENTRY TrustClassEntry;          // offset: 0xba8 ordinal: 0x35
  ULONG FlushCount;                            // offset: 0xbb8 ordinal: 0x36
  struct _CM_RM *CmRm;                         // offset: 0xbc0 ordinal: 0x37
  ULONG CmRmInitFailPoint;                     // offset: 0xbc8 ordinal: 0x38
  LONG CmRmInitFailStatus;                     // offset: 0xbcc ordinal: 0x39
  struct _KTHREAD *CreatorOwner;               // offset: 0xbd0 ordinal: 0x3a
  struct _KTHREAD *RundownThread;              // offset: 0xbd8 ordinal: 0x3b
} _CMHIVE;

// 0x88 bytes (sizeof)
typedef struct _HIVE_LIST_ENTRY {
  USHORT *FileName;             // offset: 0x0 ordinal: 0x0
  USHORT *BaseName;             // offset: 0x8 ordinal: 0x1
  USHORT *RegRootName;          // offset: 0x10 ordinal: 0x2
  struct _CMHIVE *CmHive;       // offset: 0x18 ordinal: 0x3
  ULONG HHiveFlags;             // offset: 0x20 ordinal: 0x4
  ULONG CmHiveFlags;            // offset: 0x24 ordinal: 0x5
  ULONG CmKcbCacheSize;         // offset: 0x28 ordinal: 0x6
  struct _CMHIVE *CmHive2;      // offset: 0x30 ordinal: 0x7
  UCHAR HiveMounted;            // offset: 0x38 ordinal: 0x8
  UCHAR ThreadFinished;         // offset: 0x39 ordinal: 0x9
  UCHAR ThreadStarted;          // offset: 0x3a ordinal: 0xa
  UCHAR Allocate;               // offset: 0x3b ordinal: 0xb
  UCHAR WinPERequired;          // offset: 0x3c ordinal: 0xc
  struct _KEVENT StartEvent;    // offset: 0x40 ordinal: 0xd
  struct _KEVENT FinishedEvent; // offset: 0x58 ordinal: 0xe
  struct _KEVENT MountLock;     // offset: 0x70 ordinal: 0xf
} _HIVE_LIST_ENTRY;

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
  union __anon_857 u1;           // offset: 0x0 ordinal: 0x0
  struct _MMVAD *LeftChild;      // offset: 0x8 ordinal: 0x1
  struct _MMVAD *RightChild;     // offset: 0x10 ordinal: 0x2
  ULONGLONG StartingVpn;         // offset: 0x18 ordinal: 0x3
  ULONGLONG EndingVpn;           // offset: 0x20 ordinal: 0x4
  union __anon_860 u;            // offset: 0x28 ordinal: 0x5
  struct _EX_PUSH_LOCK PushLock; // offset: 0x30 ordinal: 0x6
  union __anon_861 u5;           // offset: 0x38 ordinal: 0x7
} _MMVAD_SHORT;

// 0x58 bytes (sizeof)
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
} _FSRTL_ADVANCED_FCB_HEADER;

// 0x20 bytes (sizeof)
typedef struct _ALPC_PROCESS_CONTEXT {
  struct _EX_PUSH_LOCK Lock;       // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY ViewListHead; // offset: 0x8 ordinal: 0x1
  ULONGLONG PagedPoolQuotaCache;   // offset: 0x18 ordinal: 0x2
} _ALPC_PROCESS_CONTEXT;

// 0x88 bytes (sizeof)
typedef struct _MMSUPPORT {
  struct _EX_PUSH_LOCK WorkingSetMutex;        // offset: 0x0 ordinal: 0x0
  struct _KGATE *ExitGate;                     // offset: 0x8 ordinal: 0x1
  VOID *AccessLog;                             // offset: 0x10 ordinal: 0x2
  struct _LIST_ENTRY WorkingSetExpansionLinks; // offset: 0x18 ordinal: 0x3
  ULONG AgeDistribution[7];                    // offset: 0x28 ordinal: 0x4
  ULONG MinimumWorkingSetSize;                 // offset: 0x44 ordinal: 0x5
  ULONG WorkingSetSize;                        // offset: 0x48 ordinal: 0x6
  ULONG WorkingSetPrivateSize;                 // offset: 0x4c ordinal: 0x7
  ULONG MaximumWorkingSetSize;                 // offset: 0x50 ordinal: 0x8
  ULONG ChargedWslePages;                      // offset: 0x54 ordinal: 0x9
  ULONG ActualWslePages;                       // offset: 0x58 ordinal: 0xa
  ULONG WorkingSetSizeOverhead;                // offset: 0x5c ordinal: 0xb
  ULONG PeakWorkingSetSize;                    // offset: 0x60 ordinal: 0xc
  ULONG HardFaultCount;                        // offset: 0x64 ordinal: 0xd
  struct _MMWSL *VmWorkingSetList;             // offset: 0x68 ordinal: 0xe
  USHORT NextPageColor;                        // offset: 0x70 ordinal: 0xf
  USHORT LastTrimStamp;                        // offset: 0x72 ordinal: 0x10
  ULONG PageFaultCount;                        // offset: 0x74 ordinal: 0x11
  ULONG RepurposeCount;                        // offset: 0x78 ordinal: 0x12
  ULONG Spare[2];                              // offset: 0x7c ordinal: 0x13
  struct _MMSUPPORT_FLAGS Flags;               // offset: 0x84 ordinal: 0x14
} _MMSUPPORT;

// 0x48 bytes (sizeof)
typedef struct _MI_SYSTEM_PTE_TYPE {
  struct _RTL_BITMAP Bitmap; // offset: 0x0 ordinal: 0x0
  ULONG Flags;               // offset: 0x10 ordinal: 0x1
  ULONG Hint;                // offset: 0x14 ordinal: 0x2
  struct _MMPTE *BasePte;    // offset: 0x18 ordinal: 0x3
  ULONG *FailureCount;       // offset: 0x20 ordinal: 0x4
  struct _MMSUPPORT *Vm;     // offset: 0x28 ordinal: 0x5
  LONG TotalSystemPtes;      // offset: 0x30 ordinal: 0x6
  LONG TotalFreeSystemPtes;  // offset: 0x34 ordinal: 0x7
  LONG CachedPteCount;       // offset: 0x38 ordinal: 0x8
  ULONG PteFailures;         // offset: 0x3c ordinal: 0x9
  union {
    ULONGLONG SpinLock;                  // offset: 0x40 ordinal: 0xa
    struct _KGUARDED_MUTEX *GlobalMutex; // offset: 0x40 ordinal: 0xb
  };
} _MI_SYSTEM_PTE_TYPE;

// 0x100 bytes (sizeof)
typedef struct _EX_PUSH_LOCK_CACHE_AWARE {
  struct _EX_PUSH_LOCK *Locks[32]; // offset: 0x0 ordinal: 0x0
} _EX_PUSH_LOCK_CACHE_AWARE;

// 0x10 bytes (sizeof)
typedef struct _IO_STATUS_BLOCK {
  union {
    LONG Status;   // offset: 0x0 ordinal: 0x0
    VOID *Pointer; // offset: 0x0 ordinal: 0x1
  };
  ULONGLONG Information; // offset: 0x8 ordinal: 0x2
} _IO_STATUS_BLOCK;

// 0x8 bytes (sizeof)
typedef union _ULARGE_INTEGER {
  ULONG LowPart;      // offset: 0x0 ordinal: 0x0
  ULONG HighPart;     // offset: 0x4 ordinal: 0x1
  struct __anon_32 u; // offset: 0x0 ordinal: 0x2
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

// 0x50 bytes (sizeof)
typedef struct _KERNEL_STACK_CONTROL {
  struct _KERNEL_STACK_SEGMENT Current;  // offset: 0x0 ordinal: 0x0
  struct _KERNEL_STACK_SEGMENT Previous; // offset: 0x28 ordinal: 0x1
} _KERNEL_STACK_CONTROL;

// 0x20 bytes (sizeof)
typedef struct _PROC_IDLE_STATE_BUCKET {
  ULONGLONG TotalTime; // offset: 0x0 ordinal: 0x0
  ULONGLONG MinTime;   // offset: 0x8 ordinal: 0x1
  ULONGLONG MaxTime;   // offset: 0x10 ordinal: 0x2
  ULONG Count;         // offset: 0x18 ordinal: 0x3
} _PROC_IDLE_STATE_BUCKET;

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

typedef VOID (*__anon_348)(ULONGLONG, ULONG);

typedef ULONG (*__anon_347)(ULONGLONG, ULONG, ULONG, ULONG, ULONG, ULONG *,
                            ULONG *);

typedef UCHAR (*__anon_344)(ULONG *, ULONGLONG, UCHAR);

// 0x228 bytes (sizeof)
typedef struct _PROC_IDLE_STATE_ACCOUNTING {
  ULONGLONG TotalTime;      // offset: 0x0 ordinal: 0x0
  ULONG IdleTransitions;    // offset: 0x8 ordinal: 0x1
  ULONG FailedTransitions;  // offset: 0xc ordinal: 0x2
  ULONG InvalidBucketIndex; // offset: 0x10 ordinal: 0x3
  ULONGLONG MinTime;        // offset: 0x18 ordinal: 0x4
  ULONGLONG MaxTime;        // offset: 0x20 ordinal: 0x5
  struct _PROC_IDLE_STATE_BUCKET
      IdleTimeBuckets[16]; // offset: 0x28 ordinal: 0x6
} _PROC_IDLE_STATE_ACCOUNTING;

typedef VOID *(*__anon_311)(enum _POOL_TYPE, ULONGLONG, ULONG);

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
  ULONGLONG Mask;        // offset: 0x0 ordinal: 0x0
  ULONGLONG Reserved[7]; // offset: 0x8 ordinal: 0x1
} _XSAVE_AREA_HEADER;

// 0x2c0 bytes (sizeof)
typedef struct _PROC_IDLE_ACCOUNTING {
  ULONG StateCount;                            // offset: 0x0 ordinal: 0x0
  ULONG TotalTransitions;                      // offset: 0x4 ordinal: 0x1
  ULONG ResetCount;                            // offset: 0x8 ordinal: 0x2
  ULONGLONG StartTime;                         // offset: 0x10 ordinal: 0x3
  ULONGLONG BucketLimits[16];                  // offset: 0x18 ordinal: 0x4
  struct _PROC_IDLE_STATE_ACCOUNTING State[1]; // offset: 0x98 ordinal: 0x5
} _PROC_IDLE_ACCOUNTING;

// 0x10 bytes (sizeof)
typedef struct _GROUP_AFFINITY {
  ULONGLONG Mask;     // offset: 0x0 ordinal: 0x0
  USHORT Group;       // offset: 0x8 ordinal: 0x1
  USHORT Reserved[3]; // offset: 0xa ordinal: 0x2
} _GROUP_AFFINITY;

// 0x10 bytes (sizeof)
typedef struct __anon_241 {
  ULONGLONG Depth : 16;     // offset: 0x0 ordinal: 0x0
  ULONGLONG Sequence : 48;  // offset: 0x0 ordinal: 0x1
  ULONGLONG HeaderType : 1; // offset: 0x8 ordinal: 0x2
  ULONGLONG Reserved : 3;   // offset: 0x8 ordinal: 0x3
  ULONGLONG NextEntry : 60; // offset: 0x8 ordinal: 0x4
} __anon_241;

// 0x10 bytes (sizeof)
typedef struct __anon_240 {
  ULONGLONG Depth : 16;     // offset: 0x0 ordinal: 0x0
  ULONGLONG Sequence : 48;  // offset: 0x0 ordinal: 0x1
  ULONGLONG HeaderType : 1; // offset: 0x8 ordinal: 0x2
  ULONGLONG Init : 1;       // offset: 0x8 ordinal: 0x3
  ULONGLONG Reserved : 2;   // offset: 0x8 ordinal: 0x4
  ULONGLONG NextEntry : 60; // offset: 0x8 ordinal: 0x5
} __anon_240;

// 0x10 bytes (sizeof)
typedef struct __anon_239 {
  ULONGLONG Depth : 16;     // offset: 0x0 ordinal: 0x0
  ULONGLONG Sequence : 9;   // offset: 0x0 ordinal: 0x1
  ULONGLONG NextEntry : 39; // offset: 0x0 ordinal: 0x2
  ULONGLONG HeaderType : 1; // offset: 0x8 ordinal: 0x3
  ULONGLONG Init : 1;       // offset: 0x8 ordinal: 0x4
  ULONGLONG Reserved : 59;  // offset: 0x8 ordinal: 0x5
  ULONGLONG Region : 3;     // offset: 0x8 ordinal: 0x6
} __anon_239;

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

// 0x20 bytes (sizeof)
typedef struct _KDPC_DATA {
  struct _LIST_ENTRY DpcListHead; // offset: 0x0 ordinal: 0x0
  ULONGLONG DpcLock;              // offset: 0x10 ordinal: 0x1
  LONG DpcQueueDepth;             // offset: 0x18 ordinal: 0x2
  ULONG DpcCount;                 // offset: 0x1c ordinal: 0x3
} _KDPC_DATA;

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

typedef LONG (*__anon_1511)(struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *,
                            ULONGLONG *, ULONGLONG *);

typedef LONG (*__anon_1509)(struct _IO_RESOURCE_DESCRIPTOR *, ULONGLONG *,
                            ULONGLONG *, ULONGLONG *, ULONGLONG *);

// 0x698 bytes (sizeof)
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
  (VOID *, struct _RTL_RANGE *);   // offset: 0x148 ordinal: 0x27
  WCHAR PdoDescriptionString[336]; // offset: 0x150 ordinal: 0x28
  CHAR PdoSymbolicNameString[672]; // offset: 0x3f0 ordinal: 0x29
  WCHAR PdoAddressString[1];       // offset: 0x690 ordinal: 0x2a
} _ARBITER_INSTANCE;

typedef LONG (*__anon_1524)(struct _ARBITER_INSTANCE *, ULONG,
                            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *,
                            struct _RTL_RANGE_LIST *);

typedef VOID (*__anon_1523)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_ALLOCATION_STATE *);

typedef UCHAR (*__anon_1522)(struct _ARBITER_INSTANCE *,
                             struct _ARBITER_ALLOCATION_STATE *);

typedef LONG (*__anon_1521)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_ALLOCATION_STATE *);

typedef LONG (*__anon_1520)(struct _ARBITER_INSTANCE *,
                            struct _CM_RESOURCE_LIST *);

typedef LONG (*__anon_1519)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_ADD_RESERVED_PARAMETERS *);

typedef LONG (*__anon_1518)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_QUERY_CONFLICT_PARAMETERS *);

typedef LONG (*__anon_1517)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_QUERY_ARBITRATE_PARAMETERS *);

typedef LONG (*__anon_1516)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_BOOT_ALLOCATION_PARAMETERS *);

typedef LONG (*__anon_1515)(struct _ARBITER_INSTANCE *);

typedef LONG (*__anon_1514)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_RETEST_ALLOCATION_PARAMETERS *);

typedef LONG (*__anon_1513)(struct _ARBITER_INSTANCE *,
                            struct _ARBITER_TEST_ALLOCATION_PARAMETERS *);

typedef LONG (*__anon_1202)(VOID *, VOID **, ULONGLONG *);

typedef VOID (*__anon_345)(ULONGLONG *);

// 0x10 bytes (sizeof)
typedef union _SLIST_HEADER {
  ULONGLONG Alignment;         // offset: 0x0 ordinal: 0x0
  ULONGLONG Region;            // offset: 0x8 ordinal: 0x1
  struct __anon_239 Header8;   // offset: 0x0 ordinal: 0x2
  struct __anon_240 Header16;  // offset: 0x0 ordinal: 0x3
  struct __anon_241 HeaderX64; // offset: 0x0 ordinal: 0x4
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

// 0x100 bytes (sizeof)
typedef struct _VF_TARGET_VERIFIED_DRIVER_DATA {
  struct _VF_SUSPECT_DRIVER_ENTRY
      *SuspectDriverEntry;                     // offset: 0x0 ordinal: 0x0
  VOID *WMICallback;                           // offset: 0x8 ordinal: 0x1
  struct _LIST_ENTRY EtwHandlesListHead;       // offset: 0x10 ordinal: 0x2
  union __anon_1581 u1;                        // offset: 0x20 ordinal: 0x3
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
} _VF_TARGET_VERIFIED_DRIVER_DATA;

// 0x30 bytes (sizeof)
typedef struct _VF_TARGET_DRIVER {
  struct _VF_AVL_TREE_NODE TreeNode; // offset: 0x0 ordinal: 0x0
  union __anon_1572 u1;              // offset: 0x10 ordinal: 0x1
  struct _VF_TARGET_VERIFIED_DRIVER_DATA
      *VerifiedData; // offset: 0x28 ordinal: 0x2
} _VF_TARGET_DRIVER;

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
  ULONG Pad0;                    // offset: 0x1c ordinal: 0x4
} _CACHED_KSTACK_LIST;

// 0xc0 bytes (sizeof)
typedef struct _KNODE {
  union _SLIST_HEADER PagedPoolSListHead;        // offset: 0x0 ordinal: 0x0
  union _SLIST_HEADER NonPagedPoolSListHead[3];  // offset: 0x10 ordinal: 0x1
  struct _GROUP_AFFINITY Affinity;               // offset: 0x40 ordinal: 0x2
  ULONG ProximityId;                             // offset: 0x50 ordinal: 0x3
  USHORT NodeNumber;                             // offset: 0x54 ordinal: 0x4
  USHORT PrimaryNodeNumber;                      // offset: 0x56 ordinal: 0x5
  UCHAR MaximumProcessors;                       // offset: 0x58 ordinal: 0x6
  UCHAR Color;                                   // offset: 0x59 ordinal: 0x7
  struct _flags Flags;                           // offset: 0x5a ordinal: 0x8
  UCHAR NodePad0;                                // offset: 0x5b ordinal: 0x9
  ULONG Seed;                                    // offset: 0x5c ordinal: 0xa
  ULONG MmShiftedColor;                          // offset: 0x60 ordinal: 0xb
  ULONGLONG FreeCount[2];                        // offset: 0x68 ordinal: 0xc
  ULONG Right;                                   // offset: 0x78 ordinal: 0xd
  ULONG Left;                                    // offset: 0x7c ordinal: 0xe
  struct _CACHED_KSTACK_LIST CachedKernelStacks; // offset: 0x80 ordinal: 0xf
  LONG ParkLock;                                 // offset: 0xa0 ordinal: 0x10
  ULONG NodePad1;                                // offset: 0xa4 ordinal: 0x11
} _KNODE;

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

typedef VOID (*__anon_312)(VOID *, struct _LOOKASIDE_LIST_EX *);

typedef VOID *(*__anon_310)(enum _POOL_TYPE, ULONGLONG, ULONG,
                            struct _LOOKASIDE_LIST_EX *);

// 0x28 bytes (sizeof)
typedef struct _KAFFINITY_EX {
  USHORT Count;        // offset: 0x0 ordinal: 0x0
  USHORT Size;         // offset: 0x2 ordinal: 0x1
  ULONG Reserved;      // offset: 0x4 ordinal: 0x2
  ULONGLONG Bitmap[4]; // offset: 0x8 ordinal: 0x3
} _KAFFINITY_EX;

// 0xb0 bytes (sizeof)
typedef struct _PPM_PERF_STATES {
  ULONG Count;                           // offset: 0x0 ordinal: 0x0
  ULONG MaxFrequency;                    // offset: 0x4 ordinal: 0x1
  ULONG PStateCap;                       // offset: 0x8 ordinal: 0x2
  ULONG TStateCap;                       // offset: 0xc ordinal: 0x3
  ULONG MaxPerfState;                    // offset: 0x10 ordinal: 0x4
  ULONG MinPerfState;                    // offset: 0x14 ordinal: 0x5
  ULONG LowestPState;                    // offset: 0x18 ordinal: 0x6
  ULONG IncreaseTime;                    // offset: 0x1c ordinal: 0x7
  ULONG DecreaseTime;                    // offset: 0x20 ordinal: 0x8
  UCHAR BusyAdjThreshold;                // offset: 0x24 ordinal: 0x9
  UCHAR Reserved;                        // offset: 0x25 ordinal: 0xa
  UCHAR ThrottleStatesOnly;              // offset: 0x26 ordinal: 0xb
  UCHAR PolicyType;                      // offset: 0x27 ordinal: 0xc
  ULONG TimerInterval;                   // offset: 0x28 ordinal: 0xd
  union __anon_1612 Flags;               // offset: 0x2c ordinal: 0xe
  struct _KAFFINITY_EX TargetProcessors; // offset: 0x30 ordinal: 0xf
  LONG(*PStateHandler)
  (ULONGLONG, ULONGLONG, ULONGLONG); // offset: 0x58 ordinal: 0x10
  ULONGLONG PStateContext;           // offset: 0x60 ordinal: 0x11
  LONG(*TStateHandler)
  (ULONGLONG, ULONGLONG, ULONGLONG); // offset: 0x68 ordinal: 0x12
  ULONGLONG TStateContext;           // offset: 0x70 ordinal: 0x13
  UCHAR(*FeedbackHandler)
  (ULONG *, ULONGLONG, UCHAR);              // offset: 0x78 ordinal: 0x14
  VOID (*GetFFHThrottleState)(ULONGLONG *); // offset: 0x80 ordinal: 0x15
  struct _PPM_PERF_STATE State[1];          // offset: 0x88 ordinal: 0x16
} _PPM_PERF_STATES;

// 0x80 bytes (sizeof)
typedef struct _ALIGNED_AFFINITY_SUMMARY {
  struct _KAFFINITY_EX CpuSet; // offset: 0x0 ordinal: 0x0
  struct _KAFFINITY_EX SMTSet; // offset: 0x28 ordinal: 0x1
} _ALIGNED_AFFINITY_SUMMARY;

// 0x78 bytes (sizeof)
typedef struct _THERMAL_INFORMATION_EX {
  ULONG ThermalStamp;              // offset: 0x0 ordinal: 0x0
  ULONG ThermalConstant1;          // offset: 0x4 ordinal: 0x1
  ULONG ThermalConstant2;          // offset: 0x8 ordinal: 0x2
  struct _KAFFINITY_EX Processors; // offset: 0x10 ordinal: 0x3
  ULONG SamplingPeriod;            // offset: 0x38 ordinal: 0x4
  ULONG CurrentTemperature;        // offset: 0x3c ordinal: 0x5
  ULONG PassiveTripPoint;          // offset: 0x40 ordinal: 0x6
  ULONG CriticalTripPoint;         // offset: 0x44 ordinal: 0x7
  UCHAR ActiveTripPointCount;      // offset: 0x48 ordinal: 0x8
  ULONG ActiveTripPoint[10];       // offset: 0x4c ordinal: 0x9
  ULONG S4TransitionTripPoint;     // offset: 0x74 ordinal: 0xa
} _THERMAL_INFORMATION_EX;

// 0x18 bytes (sizeof)
typedef struct _KAFFINITY_ENUMERATION_CONTEXT {
  struct _KAFFINITY_EX *Affinity; // offset: 0x0 ordinal: 0x0
  ULONGLONG CurrentMask;          // offset: 0x8 ordinal: 0x1
  USHORT CurrentIndex;            // offset: 0x10 ordinal: 0x2
} _KAFFINITY_ENUMERATION_CONTEXT;

// 0x1c8 bytes (sizeof)
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
  ULONGLONG MinimumWorkingSetSize;                // offset: 0xe0 ordinal: 0xe
  ULONGLONG MaximumWorkingSetSize;                // offset: 0xe8 ordinal: 0xf
  ULONG LimitFlags;                               // offset: 0xf0 ordinal: 0x10
  ULONG ActiveProcessLimit;                       // offset: 0xf4 ordinal: 0x11
  struct _KAFFINITY_EX Affinity;                  // offset: 0xf8 ordinal: 0x12
  UCHAR PriorityClass;                            // offset: 0x120 ordinal: 0x13
  struct _JOB_ACCESS_STATE *AccessState;          // offset: 0x128 ordinal: 0x14
  ULONG UIRestrictionsClass;                      // offset: 0x130 ordinal: 0x15
  ULONG EndOfJobTimeAction;                       // offset: 0x134 ordinal: 0x16
  VOID *CompletionPort;                           // offset: 0x138 ordinal: 0x17
  VOID *CompletionKey;                            // offset: 0x140 ordinal: 0x18
  ULONG SessionId;                                // offset: 0x148 ordinal: 0x19
  ULONG SchedulingClass;                          // offset: 0x14c ordinal: 0x1a
  ULONGLONG ReadOperationCount;                   // offset: 0x150 ordinal: 0x1b
  ULONGLONG WriteOperationCount;                  // offset: 0x158 ordinal: 0x1c
  ULONGLONG OtherOperationCount;                  // offset: 0x160 ordinal: 0x1d
  ULONGLONG ReadTransferCount;                    // offset: 0x168 ordinal: 0x1e
  ULONGLONG WriteTransferCount;                   // offset: 0x170 ordinal: 0x1f
  ULONGLONG OtherTransferCount;                   // offset: 0x178 ordinal: 0x20
  ULONGLONG ProcessMemoryLimit;                   // offset: 0x180 ordinal: 0x21
  ULONGLONG JobMemoryLimit;                       // offset: 0x188 ordinal: 0x22
  ULONGLONG PeakProcessMemoryUsed;                // offset: 0x190 ordinal: 0x23
  ULONGLONG PeakJobMemoryUsed;                    // offset: 0x198 ordinal: 0x24
  ULONGLONG CurrentJobMemoryUsed;                 // offset: 0x1a0 ordinal: 0x25
  struct _EX_PUSH_LOCK MemoryLimitsLock;          // offset: 0x1a8 ordinal: 0x26
  struct _LIST_ENTRY JobSetLinks;                 // offset: 0x1b0 ordinal: 0x27
  ULONG MemberLevel;                              // offset: 0x1c0 ordinal: 0x28
  ULONG JobFlags;                                 // offset: 0x1c4 ordinal: 0x29
} _EJOB;

// 0x60 bytes (sizeof)
typedef struct _PPM_IDLE_STATE {
  struct _KAFFINITY_EX DomainMembers; // offset: 0x0 ordinal: 0x0
  LONG (*IdleCheck)(VOID *);          // offset: 0x28 ordinal: 0x1
  VOID (*IdleHandler)(VOID *);        // offset: 0x30 ordinal: 0x2
  ULONGLONG HvConfig;                 // offset: 0x38 ordinal: 0x3
  VOID *Context;                      // offset: 0x40 ordinal: 0x4
  ULONG Latency;                      // offset: 0x48 ordinal: 0x5
  ULONG Power;                        // offset: 0x4c ordinal: 0x6
  ULONG TimeCheck;                    // offset: 0x50 ordinal: 0x7
  ULONG StateFlags;                   // offset: 0x54 ordinal: 0x8
  UCHAR PromotePercent;               // offset: 0x58 ordinal: 0x9
  UCHAR DemotePercent;                // offset: 0x59 ordinal: 0xa
  UCHAR PromotePercentBase;           // offset: 0x5a ordinal: 0xb
  UCHAR DemotePercentBase;            // offset: 0x5b ordinal: 0xc
  UCHAR StateType;                    // offset: 0x5c ordinal: 0xd
} _PPM_IDLE_STATE;

// 0xa0 bytes (sizeof)
typedef struct _PPM_IDLE_STATES {
  ULONG Count;                           // offset: 0x0 ordinal: 0x0
  union __anon_314 Flags;                // offset: 0x4 ordinal: 0x1
  ULONG TargetState;                     // offset: 0x8 ordinal: 0x2
  ULONG ActualState;                     // offset: 0xc ordinal: 0x3
  ULONG OldState;                        // offset: 0x10 ordinal: 0x4
  UCHAR NewlyUnparked;                   // offset: 0x14 ordinal: 0x5
  struct _KAFFINITY_EX TargetProcessors; // offset: 0x18 ordinal: 0x6
  struct _PPM_IDLE_STATE State[1];       // offset: 0x40 ordinal: 0x7
} _PPM_IDLE_STATES;

// 0x100 bytes (sizeof)
typedef struct _PROCESSOR_POWER_STATE {
  struct _PPM_IDLE_STATES *IdleStates;          // offset: 0x0 ordinal: 0x0
  ULONGLONG IdleTimeLast;                       // offset: 0x8 ordinal: 0x1
  ULONGLONG IdleTimeTotal;                      // offset: 0x10 ordinal: 0x2
  ULONGLONG IdleTimeEntry;                      // offset: 0x18 ordinal: 0x3
  struct _PROC_IDLE_ACCOUNTING *IdleAccounting; // offset: 0x20 ordinal: 0x4
  enum _PROC_HYPERVISOR_STATE Hypervisor;       // offset: 0x28 ordinal: 0x5
  ULONG PerfHistoryTotal;                       // offset: 0x2c ordinal: 0x6
  UCHAR ThermalConstraint;                      // offset: 0x30 ordinal: 0x7
  UCHAR PerfHistoryCount;                       // offset: 0x31 ordinal: 0x8
  UCHAR PerfHistorySlot;                        // offset: 0x32 ordinal: 0x9
  UCHAR Reserved;                               // offset: 0x33 ordinal: 0xa
  ULONG LastSysTime;                            // offset: 0x34 ordinal: 0xb
  ULONGLONG WmiDispatchPtr;                     // offset: 0x38 ordinal: 0xc
  LONG WmiInterfaceEnabled;                     // offset: 0x40 ordinal: 0xd
  struct _PPM_FFH_THROTTLE_STATE_INFO
      FFHThrottleStateInfo;                     // offset: 0x48 ordinal: 0xe
  struct _KDPC PerfActionDpc;                   // offset: 0x68 ordinal: 0xf
  LONG PerfActionMask;                          // offset: 0xa8 ordinal: 0x10
  struct _PROC_IDLE_SNAP IdleCheck;             // offset: 0xb0 ordinal: 0x11
  struct _PROC_IDLE_SNAP PerfCheck;             // offset: 0xc0 ordinal: 0x12
  struct _PROC_PERF_DOMAIN *Domain;             // offset: 0xd0 ordinal: 0x13
  struct _PROC_PERF_CONSTRAINT *PerfConstraint; // offset: 0xd8 ordinal: 0x14
  struct _PROC_PERF_LOAD *Load;                 // offset: 0xe0 ordinal: 0x15
  struct _PROC_HISTORY_ENTRY *PerfHistory;      // offset: 0xe8 ordinal: 0x16
  ULONG Utility;                                // offset: 0xf0 ordinal: 0x17
  ULONG OverUtilizedHistory;                    // offset: 0xf4 ordinal: 0x18
  ULONG AffinityCount;                          // offset: 0xf8 ordinal: 0x19
  ULONG AffinityHistory;                        // offset: 0xfc ordinal: 0x1a
} _PROCESSOR_POWER_STATE;

// 0x128 bytes (sizeof)
typedef struct PO_MEMORY_IMAGE {
  ULONG Signature;                         // offset: 0x0 ordinal: 0x0
  ULONG ImageType;                         // offset: 0x4 ordinal: 0x1
  ULONG CheckSum;                          // offset: 0x8 ordinal: 0x2
  ULONG LengthSelf;                        // offset: 0xc ordinal: 0x3
  ULONGLONG PageSelf;                      // offset: 0x10 ordinal: 0x4
  ULONG PageSize;                          // offset: 0x18 ordinal: 0x5
  union _LARGE_INTEGER SystemTime;         // offset: 0x20 ordinal: 0x6
  ULONGLONG InterruptTime;                 // offset: 0x28 ordinal: 0x7
  ULONG FeatureFlags;                      // offset: 0x30 ordinal: 0x8
  UCHAR HiberFlags;                        // offset: 0x34 ordinal: 0x9
  UCHAR spare[3];                          // offset: 0x35 ordinal: 0xa
  ULONG NoHiberPtes;                       // offset: 0x38 ordinal: 0xb
  ULONGLONG HiberVa;                       // offset: 0x40 ordinal: 0xc
  union _LARGE_INTEGER HiberPte;           // offset: 0x48 ordinal: 0xd
  ULONG NoFreePages;                       // offset: 0x50 ordinal: 0xe
  ULONG FreeMapCheck;                      // offset: 0x54 ordinal: 0xf
  ULONG WakeCheck;                         // offset: 0x58 ordinal: 0x10
  ULONGLONG FirstTablePage;                // offset: 0x60 ordinal: 0x11
  struct _PO_HIBER_PERF PerfInfo;          // offset: 0x68 ordinal: 0x12
  ULONG FirmwareRuntimeInformationPages;   // offset: 0xc0 ordinal: 0x13
  ULONGLONG FirmwareRuntimeInformation[1]; // offset: 0xc8 ordinal: 0x14
  ULONG NoBootLoaderLogPages;              // offset: 0xd0 ordinal: 0x15
  ULONGLONG BootLoaderLogPages[8];         // offset: 0xd8 ordinal: 0x16
  ULONG NotUsed;                           // offset: 0x118 ordinal: 0x17
  ULONG ResumeContextCheck;                // offset: 0x11c ordinal: 0x18
  ULONG ResumeContextPages;                // offset: 0x120 ordinal: 0x19
} PO_MEMORY_IMAGE;

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

// 0x10 bytes (sizeof)
typedef union _KGDTENTRY64 {
  USHORT LimitLow;         // offset: 0x0 ordinal: 0x0
  USHORT BaseLow;          // offset: 0x2 ordinal: 0x1
  struct __anon_214 Bytes; // offset: 0x4 ordinal: 0x2
  struct __anon_215 Bits;  // offset: 0x4 ordinal: 0x3
  ULONG BaseUpper;         // offset: 0x8 ordinal: 0x4
  ULONG MustBeZero;        // offset: 0xc ordinal: 0x5
  ULONGLONG Alignment;     // offset: 0x0 ordinal: 0x6
} _KGDTENTRY64;

// 0x160 bytes (sizeof)
typedef struct _KPROCESS {
  struct _DISPATCHER_HEADER Header;        // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY ProfileListHead;      // offset: 0x18 ordinal: 0x1
  ULONGLONG DirectoryTableBase;            // offset: 0x28 ordinal: 0x2
  struct _LIST_ENTRY ThreadListHead;       // offset: 0x30 ordinal: 0x3
  ULONGLONG ProcessLock;                   // offset: 0x40 ordinal: 0x4
  struct _KAFFINITY_EX Affinity;           // offset: 0x48 ordinal: 0x5
  struct _LIST_ENTRY ReadyListHead;        // offset: 0x70 ordinal: 0x6
  struct _SINGLE_LIST_ENTRY SwapListEntry; // offset: 0x80 ordinal: 0x7
  struct _KAFFINITY_EX ActiveProcessors;   // offset: 0x88 ordinal: 0x8
  LONG AutoAlignment : 1;                  // offset: 0xb0 ordinal: 0x9
  LONG DisableBoost : 1;                   // offset: 0xb0 ordinal: 0xa
  LONG DisableQuantum : 1;                 // offset: 0xb0 ordinal: 0xb
  ULONG ActiveGroupsMask : 4;              // offset: 0xb0 ordinal: 0xc
  LONG ReservedFlags : 25;                 // offset: 0xb0 ordinal: 0xd
  LONG ProcessFlags;                       // offset: 0xb0 ordinal: 0xe
  CHAR BasePriority;                       // offset: 0xb4 ordinal: 0xf
  CHAR QuantumReset;                       // offset: 0xb5 ordinal: 0x10
  UCHAR Visited;                           // offset: 0xb6 ordinal: 0x11
  UCHAR Unused3;                           // offset: 0xb7 ordinal: 0x12
  ULONG ThreadSeed[4];                     // offset: 0xb8 ordinal: 0x13
  USHORT IdealNode[4];                     // offset: 0xc8 ordinal: 0x14
  USHORT IdealGlobalNode;                  // offset: 0xd0 ordinal: 0x15
  union _KEXECUTE_OPTIONS Flags;           // offset: 0xd2 ordinal: 0x16
  UCHAR Unused1;                           // offset: 0xd3 ordinal: 0x17
  ULONG Unused2;                           // offset: 0xd4 ordinal: 0x18
  ULONG Unused4;                           // offset: 0xd8 ordinal: 0x19
  union _KSTACK_COUNT StackCount;          // offset: 0xdc ordinal: 0x1a
  struct _LIST_ENTRY ProcessListEntry;     // offset: 0xe0 ordinal: 0x1b
  ULONGLONG CycleTime;                     // offset: 0xf0 ordinal: 0x1c
  ULONG KernelTime;                        // offset: 0xf8 ordinal: 0x1d
  ULONG UserTime;                          // offset: 0xfc ordinal: 0x1e
  VOID *InstrumentationCallback;           // offset: 0x100 ordinal: 0x1f
  union _KGDTENTRY64 LdtSystemDescriptor;  // offset: 0x108 ordinal: 0x20
  VOID *LdtBaseAddress;                    // offset: 0x118 ordinal: 0x21
  struct _KGUARDED_MUTEX LdtProcessLock;   // offset: 0x120 ordinal: 0x22
  USHORT LdtFreeSelectorHint;              // offset: 0x158 ordinal: 0x23
  USHORT LdtTableLength;                   // offset: 0x15a ordinal: 0x24
} _KPROCESS;

// 0x30 bytes (sizeof)
typedef struct _KAPC_STATE {
  struct _LIST_ENTRY ApcListHead[2]; // offset: 0x0 ordinal: 0x0
  struct _KPROCESS *Process;         // offset: 0x20 ordinal: 0x1
  UCHAR KernelApcInProgress;         // offset: 0x28 ordinal: 0x2
  UCHAR KernelApcPending;            // offset: 0x29 ordinal: 0x3
  UCHAR UserApcPending;              // offset: 0x2a ordinal: 0x4
} _KAPC_STATE;

// 0x20 bytes (sizeof)
typedef struct _VI_VERIFIER_ISSUE {
  ULONGLONG IssueType;     // offset: 0x0 ordinal: 0x0
  VOID *Address;           // offset: 0x8 ordinal: 0x1
  ULONGLONG Parameters[2]; // offset: 0x10 ordinal: 0x2
} _VI_VERIFIER_ISSUE;

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

// 0x28 bytes (sizeof)
typedef struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR {
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry; // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY *ChainHead;                  // offset: 0x18 ordinal: 0x1
  ULONG BucketIndex;                              // offset: 0x20 ordinal: 0x2
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
  ULONG Number;                          // offset: 0x60 ordinal: 0x10
  UCHAR ShareVector;                     // offset: 0x64 ordinal: 0x11
  CHAR Pad[3];                           // offset: 0x65 ordinal: 0x12
  enum _KINTERRUPT_MODE Mode;            // offset: 0x68 ordinal: 0x13
  enum _KINTERRUPT_POLARITY Polarity;    // offset: 0x6c ordinal: 0x14
  ULONG ServiceCount;                    // offset: 0x70 ordinal: 0x15
  ULONG DispatchCount;                   // offset: 0x74 ordinal: 0x16
  ULONGLONG Rsvd1;                       // offset: 0x78 ordinal: 0x17
  struct _KTRAP_FRAME *TrapFrame;        // offset: 0x80 ordinal: 0x18
  VOID *Reserved;                        // offset: 0x88 ordinal: 0x19
  ULONG DispatchCode[4];                 // offset: 0x90 ordinal: 0x1a
} _KINTERRUPT;

typedef UCHAR (*__anon_1435)(struct _KINTERRUPT *, VOID *, ULONG);

typedef UCHAR (*__anon_1434)(struct _KINTERRUPT *, VOID *);

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

// 0x250 bytes (sizeof)
typedef struct _KSTACK_AREA {
  struct _KERNEL_STACK_CONTROL StackControl; // offset: 0x0 ordinal: 0x0
  struct _XSAVE_FORMAT NpxFrame;             // offset: 0x50 ordinal: 0x1
} _KSTACK_AREA;

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

// 0x540 bytes (sizeof)
typedef struct _RTL_UMS_CONTEXT {
  struct _SINGLE_LIST_ENTRY Link;             // offset: 0x0 ordinal: 0x0
  struct _CONTEXT Context;                    // offset: 0x10 ordinal: 0x1
  VOID *Teb;                                  // offset: 0x4e0 ordinal: 0x2
  VOID *UserContext;                          // offset: 0x4e8 ordinal: 0x3
  ULONG ScheduledThread : 1;                  // offset: 0x4f0 ordinal: 0x4
  ULONG HasQuantumReq : 1;                    // offset: 0x4f0 ordinal: 0x5
  ULONG HasAffinityReq : 1;                   // offset: 0x4f0 ordinal: 0x6
  ULONG HasPriorityReq : 1;                   // offset: 0x4f0 ordinal: 0x7
  ULONG Suspended : 1;                        // offset: 0x4f0 ordinal: 0x8
  ULONG VolatileContext : 1;                  // offset: 0x4f0 ordinal: 0x9
  ULONG Terminated : 1;                       // offset: 0x4f0 ordinal: 0xa
  ULONG DebugActive : 1;                      // offset: 0x4f0 ordinal: 0xb
  ULONG RunningOnSelfThread : 1;              // offset: 0x4f0 ordinal: 0xc
  ULONG DenyRunningOnSelfThread : 1;          // offset: 0x4f0 ordinal: 0xd
  ULONG ReservedFlags : 22;                   // offset: 0x4f0 ordinal: 0xe
  LONG Flags;                                 // offset: 0x4f0 ordinal: 0xf
  ULONGLONG KernelUpdateLock : 1;             // offset: 0x4f8 ordinal: 0x10
  ULONGLONG Reserved : 1;                     // offset: 0x4f8 ordinal: 0x11
  ULONGLONG PrimaryClientID : 62;             // offset: 0x4f8 ordinal: 0x12
  ULONGLONG ContextLock;                      // offset: 0x4f8 ordinal: 0x13
  ULONGLONG QuantumValue;                     // offset: 0x500 ordinal: 0x14
  struct _GROUP_AFFINITY AffinityMask;        // offset: 0x508 ordinal: 0x15
  LONG Priority;                              // offset: 0x518 ordinal: 0x16
  struct _RTL_UMS_CONTEXT *PrimaryUmsContext; // offset: 0x520 ordinal: 0x17
  ULONG SwitchCount;                          // offset: 0x528 ordinal: 0x18
  ULONG KernelYieldCount;                     // offset: 0x52c ordinal: 0x19
  ULONG MixedYieldCount;                      // offset: 0x530 ordinal: 0x1a
  ULONG YieldCount;                           // offset: 0x534 ordinal: 0x1b
} _RTL_UMS_CONTEXT;

// 0x98 bytes (sizeof)
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
  union {
    ULONG PrimaryFlags;              // offset: 0x88 ordinal: 0x9
    ULONG UmsContextHeaderReady : 1; // offset: 0x88 ordinal: 0xa
  };
  struct _KQUEUE *UmsAssociatedQueue;            // offset: 0x20 ordinal: 0xb
  struct _LIST_ENTRY *UmsQueueListEntry;         // offset: 0x28 ordinal: 0xc
  struct _KUMS_CONTEXT_HEADER *UmsContextHeader; // offset: 0x30 ordinal: 0xd
  struct _KGATE UmsWaitGate;                     // offset: 0x38 ordinal: 0xe
  VOID *StagingArea;                             // offset: 0x50 ordinal: 0xf
  union {
    LONG Flags;                         // offset: 0x58 ordinal: 0x10
    ULONG UmsForceQueueTermination : 1; // offset: 0x58 ordinal: 0x11
  };
  ULONG UmsAssociatedQueueUsed : 1;     // offset: 0x58 ordinal: 0x12
  ULONG UmsThreadParked : 1;            // offset: 0x58 ordinal: 0x13
  ULONG UmsPrimaryDeliveredContext : 1; // offset: 0x58 ordinal: 0x14
  USHORT TebSelector;                   // offset: 0x90 ordinal: 0x15
} _UMS_CONTROL_BLOCK;

// 0x5b0 bytes (sizeof)
typedef struct _KPROCESSOR_STATE {
  struct _KSPECIAL_REGISTERS SpecialRegisters; // offset: 0x0 ordinal: 0x0
  struct _CONTEXT ContextFrame;                // offset: 0xe0 ordinal: 0x1
} _KPROCESSOR_STATE;

// 0x110 bytes (sizeof)
typedef struct _POP_HIBER_CONTEXT {
  UCHAR WriteToFile;                          // offset: 0x0 ordinal: 0x0
  UCHAR ReserveLoaderMemory;                  // offset: 0x1 ordinal: 0x1
  UCHAR ReserveFreeMemory;                    // offset: 0x2 ordinal: 0x2
  UCHAR Reset;                                // offset: 0x3 ordinal: 0x3
  UCHAR HiberFlags;                           // offset: 0x4 ordinal: 0x4
  UCHAR WroteHiberFile;                       // offset: 0x5 ordinal: 0x5
  UCHAR MapFrozen;                            // offset: 0x6 ordinal: 0x6
  struct _RTL_BITMAP MemoryMap;               // offset: 0x8 ordinal: 0x7
  struct _RTL_BITMAP DiscardedMemoryPages;    // offset: 0x18 ordinal: 0x8
  struct _LIST_ENTRY ClonedRanges;            // offset: 0x28 ordinal: 0x9
  ULONG ClonedRangeCount;                     // offset: 0x38 ordinal: 0xa
  struct _LIST_ENTRY *NextCloneRange;         // offset: 0x40 ordinal: 0xb
  ULONGLONG NextPreserve;                     // offset: 0x48 ordinal: 0xc
  struct _MDL *LoaderMdl;                     // offset: 0x50 ordinal: 0xd
  struct _MDL *AllocatedMdl;                  // offset: 0x58 ordinal: 0xe
  ULONGLONG PagesOut;                         // offset: 0x60 ordinal: 0xf
  VOID *IoPages;                              // offset: 0x68 ordinal: 0x10
  ULONG IoPagesCount;                         // offset: 0x70 ordinal: 0x11
  VOID *CurrentMcb;                           // offset: 0x78 ordinal: 0x12
  struct _DUMP_STACK_CONTEXT *DumpStack;      // offset: 0x80 ordinal: 0x13
  struct _KPROCESSOR_STATE *WakeState;        // offset: 0x88 ordinal: 0x14
  ULONG PreferredIoWriteSize;                 // offset: 0x90 ordinal: 0x15
  ULONG IoProgress;                           // offset: 0x94 ordinal: 0x16
  ULONGLONG HiberVa;                          // offset: 0x98 ordinal: 0x17
  union _LARGE_INTEGER HiberPte;              // offset: 0xa0 ordinal: 0x18
  LONG Status;                                // offset: 0xa8 ordinal: 0x19
  struct PO_MEMORY_IMAGE *MemoryImage;        // offset: 0xb0 ordinal: 0x1a
  VOID *CompressionWorkspace;                 // offset: 0xb8 ordinal: 0x1b
  UCHAR *CompressedWriteBuffer;               // offset: 0xc0 ordinal: 0x1c
  ULONG CompressedWriteBufferSize;            // offset: 0xc8 ordinal: 0x1d
  ULONG MaxCompressedOutputSize;              // offset: 0xcc ordinal: 0x1e
  ULONG *PerformanceStats;                    // offset: 0xd0 ordinal: 0x1f
  VOID *CompressionBlock;                     // offset: 0xd8 ordinal: 0x20
  VOID *DmaIO;                                // offset: 0xe0 ordinal: 0x21
  VOID *TemporaryHeap;                        // offset: 0xe8 ordinal: 0x22
  struct _MDL *BootLoaderLogMdl;              // offset: 0xf0 ordinal: 0x23
  struct _MDL *FirmwareRuntimeInformationMdl; // offset: 0xf8 ordinal: 0x24
  VOID *ResumeContext;                        // offset: 0x100 ordinal: 0x25
  ULONG ResumeContextPages;                   // offset: 0x108 ordinal: 0x26
} _POP_HIBER_CONTEXT;

// 0xc0 bytes (sizeof)
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
  ULONGLONG ProgrammedRTCTime;                     // offset: 0x58 ordinal: 0x14
  UCHAR WakeOnRTC;                                 // offset: 0x60 ordinal: 0x15
  struct _DIAGNOSTIC_BUFFER *WakeTimerInfo;        // offset: 0x68 ordinal: 0x16
  struct SYSTEM_POWER_CAPABILITIES
      FilteredCapabilities; // offset: 0x70 ordinal: 0x17
} _POP_POWER_ACTION;

// 0x10 bytes (sizeof)
typedef struct _EXCEPTION_POINTERS {
  struct _EXCEPTION_RECORD *ExceptionRecord; // offset: 0x0 ordinal: 0x0
  struct _CONTEXT *ContextRecord;            // offset: 0x8 ordinal: 0x1
} _EXCEPTION_POINTERS;

typedef enum _EXCEPTION_DISPOSITION (*__anon_124)(struct _EXCEPTION_RECORD *,
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

// 0x70 bytes (sizeof)
typedef struct _RTL_ATOM_TABLE {
  ULONG Signature;                              // offset: 0x0 ordinal: 0x0
  struct _RTL_CRITICAL_SECTION CriticalSection; // offset: 0x8 ordinal: 0x1
  struct _RTL_HANDLE_TABLE RtlHandleTable;      // offset: 0x30 ordinal: 0x2
  ULONG NumberOfBuckets;                        // offset: 0x60 ordinal: 0x3
  struct _RTL_ATOM_TABLE_ENTRY *Buckets[1];     // offset: 0x68 ordinal: 0x4
} _RTL_ATOM_TABLE;

// 0x28 bytes (sizeof)
typedef union __anon_1204 {
  struct _RTL_CRITICAL_SECTION CriticalSection; // offset: 0x0 ordinal: 0x0
} __anon_1204;

// 0x28 bytes (sizeof)
typedef struct _HEAP_LOCK {
  union __anon_1204 Lock; // offset: 0x0 ordinal: 0x0
} _HEAP_LOCK;

// 0x208 bytes (sizeof)
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
      TuningParameters; // offset: 0x1f8 ordinal: 0x34
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

// 0x4e8 bytes (sizeof)
typedef struct _GDI_TEB_BATCH {
  ULONG Offset;      // offset: 0x0 ordinal: 0x0
  ULONGLONG HDC;     // offset: 0x8 ordinal: 0x1
  ULONG Buffer[310]; // offset: 0x10 ordinal: 0x2
} _GDI_TEB_BATCH;

// 0x10 bytes (sizeof)
typedef union __anon_854 {
  struct _IO_STATUS_BLOCK IoStatus; // offset: 0x0 ordinal: 0x0
} __anon_854;

typedef VOID (*__anon_503)(VOID *, struct _IO_STATUS_BLOCK *, ULONG);

// 0x10 bytes (sizeof)
typedef struct __anon_441 {
  union {
    VOID(*UserApcRoutine)
    (VOID *, struct _IO_STATUS_BLOCK *, ULONG); // offset: 0x0 ordinal: 0x0
    VOID *IssuingProcess;                       // offset: 0x0 ordinal: 0x1
  };
  VOID *UserApcContext; // offset: 0x8 ordinal: 0x2
} __anon_441;

// 0x10 bytes (sizeof)
typedef union __anon_427 {
  struct __anon_441 AsynchronousParameters; // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER AllocationSize;      // offset: 0x0 ordinal: 0x1
} __anon_427;

typedef UCHAR (*__anon_498)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            ULONG, ULONG, VOID *, struct _MDL **,
                            struct _IO_STATUS_BLOCK *,
                            struct _COMPRESSED_DATA_INFO *, ULONG,
                            struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_495)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            ULONG, ULONG, struct _MDL **,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_493)(struct _FILE_OBJECT *, UCHAR,
                            struct _FILE_NETWORK_OPEN_INFORMATION *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_490)(struct _FILE_OBJECT *, UCHAR, VOID *, ULONG, VOID *,
                            ULONG, ULONG, struct _IO_STATUS_BLOCK *,
                            struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_489)(struct _FILE_OBJECT *, VOID *, ULONG,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_485)(struct _FILE_OBJECT *, UCHAR,
                            struct _FILE_STANDARD_INFORMATION *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_484)(struct _FILE_OBJECT *, UCHAR,
                            struct _FILE_BASIC_INFORMATION *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_483)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            ULONG, UCHAR, ULONG, VOID *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_482)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            ULONG, UCHAR, ULONG, UCHAR,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

// 0xd0 bytes (sizeof)
typedef struct _IRP {
  SHORT Type;                         // offset: 0x0 ordinal: 0x0
  USHORT Size;                        // offset: 0x2 ordinal: 0x1
  struct _MDL *MdlAddress;            // offset: 0x8 ordinal: 0x2
  ULONG Flags;                        // offset: 0x10 ordinal: 0x3
  union __anon_426 AssociatedIrp;     // offset: 0x18 ordinal: 0x4
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
  union __anon_427 Overlay;           // offset: 0x58 ordinal: 0x11
  VOID(*CancelRoutine)
  (struct _DEVICE_OBJECT *, struct _IRP *); // offset: 0x68 ordinal: 0x12
  VOID *UserBuffer;                         // offset: 0x70 ordinal: 0x13
  union __anon_428 Tail;                    // offset: 0x78 ordinal: 0x14
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

// 0x200 bytes (sizeof)
typedef struct _IOV_FORCED_PENDING_TRACE {
  struct _IRP *Irp;        // offset: 0x0 ordinal: 0x0
  struct _ETHREAD *Thread; // offset: 0x8 ordinal: 0x1
  VOID *StackTrace[62];    // offset: 0x10 ordinal: 0x2
} _IOV_FORCED_PENDING_TRACE;

// 0x68 bytes (sizeof)
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

// 0x268 bytes (sizeof)
typedef struct _DEVICE_NODE {
  struct _DEVICE_NODE *Sibling;                // offset: 0x0 ordinal: 0x0
  struct _DEVICE_NODE *Child;                  // offset: 0x8 ordinal: 0x1
  struct _DEVICE_NODE *Parent;                 // offset: 0x10 ordinal: 0x2
  struct _DEVICE_NODE *LastChild;              // offset: 0x18 ordinal: 0x3
  struct _DEVICE_OBJECT *PhysicalDeviceObject; // offset: 0x20 ordinal: 0x4
  struct _UNICODE_STRING InstancePath;         // offset: 0x28 ordinal: 0x5
  struct _UNICODE_STRING ServiceName;          // offset: 0x38 ordinal: 0x6
  struct _IRP *PendingIrp;                     // offset: 0x48 ordinal: 0x7
  ULONG Level;                                 // offset: 0x50 ordinal: 0x8
  struct _PO_DEVICE_NOTIFY Notify;             // offset: 0x58 ordinal: 0x9
  struct _PO_IRP_MANAGER PoIrpManager;         // offset: 0xc0 ordinal: 0xa
  enum _PNP_DEVNODE_STATE State;               // offset: 0xe0 ordinal: 0xb
  enum _PNP_DEVNODE_STATE PreviousState;       // offset: 0xe4 ordinal: 0xc
  enum _PNP_DEVNODE_STATE StateHistory[20];    // offset: 0xe8 ordinal: 0xd
  ULONG StateHistoryEntry;                     // offset: 0x138 ordinal: 0xe
  LONG CompletionStatus;                       // offset: 0x13c ordinal: 0xf
  ULONG Flags;                                 // offset: 0x140 ordinal: 0x10
  ULONG UserFlags;                             // offset: 0x144 ordinal: 0x11
  ULONG Problem;                               // offset: 0x148 ordinal: 0x12
  struct _CM_RESOURCE_LIST *ResourceList;      // offset: 0x150 ordinal: 0x13
  struct _CM_RESOURCE_LIST
      *ResourceListTranslated;         // offset: 0x158 ordinal: 0x14
  struct _DEVICE_OBJECT *DuplicatePDO; // offset: 0x160 ordinal: 0x15
  struct _IO_RESOURCE_REQUIREMENTS_LIST
      *ResourceRequirements;               // offset: 0x168 ordinal: 0x16
  enum _INTERFACE_TYPE InterfaceType;      // offset: 0x170 ordinal: 0x17
  ULONG BusNumber;                         // offset: 0x174 ordinal: 0x18
  enum _INTERFACE_TYPE ChildInterfaceType; // offset: 0x178 ordinal: 0x19
  ULONG ChildBusNumber;                    // offset: 0x17c ordinal: 0x1a
  USHORT ChildBusTypeIndex;                // offset: 0x180 ordinal: 0x1b
  UCHAR RemovalPolicy;                     // offset: 0x182 ordinal: 0x1c
  UCHAR HardwareRemovalPolicy;             // offset: 0x183 ordinal: 0x1d
  struct _LIST_ENTRY TargetDeviceNotify;   // offset: 0x188 ordinal: 0x1e
  struct _LIST_ENTRY DeviceArbiterList;    // offset: 0x198 ordinal: 0x1f
  struct _LIST_ENTRY DeviceTranslatorList; // offset: 0x1a8 ordinal: 0x20
  USHORT NoTranslatorMask;                 // offset: 0x1b8 ordinal: 0x21
  USHORT QueryTranslatorMask;              // offset: 0x1ba ordinal: 0x22
  USHORT NoArbiterMask;                    // offset: 0x1bc ordinal: 0x23
  USHORT QueryArbiterMask;                 // offset: 0x1be ordinal: 0x24
  union __anon_1055 OverUsed1;             // offset: 0x1c0 ordinal: 0x25
  union __anon_1064 OverUsed2;             // offset: 0x1c8 ordinal: 0x26
  struct _CM_RESOURCE_LIST *BootResources; // offset: 0x1d0 ordinal: 0x27
  struct _CM_RESOURCE_LIST
      *BootResourcesTranslated;               // offset: 0x1d8 ordinal: 0x28
  ULONG CapabilityFlags;                      // offset: 0x1e0 ordinal: 0x29
  struct __anon_1065 DockInfo;                // offset: 0x1e8 ordinal: 0x2a
  ULONG DisableableDepends;                   // offset: 0x208 ordinal: 0x2b
  struct _LIST_ENTRY PendedSetInterfaceState; // offset: 0x210 ordinal: 0x2c
  struct _LIST_ENTRY LegacyBusListEntry;      // offset: 0x220 ordinal: 0x2d
  ULONG DriverUnloadRetryCount;               // offset: 0x230 ordinal: 0x2e
  struct _DEVICE_NODE *PreviousParent;        // offset: 0x238 ordinal: 0x2f
  ULONG DeletedChildren;                      // offset: 0x240 ordinal: 0x30
  ULONG NumaNodeIndex;                        // offset: 0x244 ordinal: 0x31
  struct _GUID ContainerID;                   // offset: 0x248 ordinal: 0x32
  UCHAR OverrideFlags;                        // offset: 0x258 ordinal: 0x33
  UCHAR RequiresUnloadedDriver;               // offset: 0x259 ordinal: 0x34
  struct _PENDING_RELATIONS_LIST_ENTRY
      *PendingEjectRelations; // offset: 0x260 ordinal: 0x35
} _DEVICE_NODE;

typedef LONG (*__anon_586)(struct _DEVICE_OBJECT *, struct _IRP *, VOID *);

// 0x48 bytes (sizeof)
typedef struct _IO_STACK_LOCATION {
  UCHAR MajorFunction;                 // offset: 0x0 ordinal: 0x0
  UCHAR MinorFunction;                 // offset: 0x1 ordinal: 0x1
  UCHAR Flags;                         // offset: 0x2 ordinal: 0x2
  UCHAR Control;                       // offset: 0x3 ordinal: 0x3
  union __anon_530 Parameters;         // offset: 0x8 ordinal: 0x4
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x28 ordinal: 0x5
  struct _FILE_OBJECT *FileObject;     // offset: 0x30 ordinal: 0x6
  LONG(*CompletionRoutine)
  (struct _DEVICE_OBJECT *, struct _IRP *, VOID *); // offset: 0x38 ordinal: 0x7
  VOID *Context;                                    // offset: 0x40 ordinal: 0x8
} _IO_STACK_LOCATION;

typedef UCHAR (*__anon_499)(struct _IRP *,
                            struct _FILE_NETWORK_OPEN_INFORMATION *,
                            struct _DEVICE_OBJECT *);

typedef LONG (*__anon_469)(struct _DEVICE_OBJECT *, struct _IRP *);

typedef enum _IO_ALLOCATION_ACTION (*__anon_444)(struct _DEVICE_OBJECT *,
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
typedef union __anon_409 {
  struct _LIST_ENTRY ListEntry;   // offset: 0x0 ordinal: 0x0
  struct _WAIT_CONTEXT_BLOCK Wcb; // offset: 0x0 ordinal: 0x1
} __anon_409;

typedef VOID (*__anon_437)(struct _DEVICE_OBJECT *, struct _IRP *);

typedef VOID (*__anon_67)(struct _TP_CALLBACK_INSTANCE *, struct _TP_DIRECT *,
                          VOID *, struct _IO_STATUS_BLOCK *);

// 0x10 bytes (sizeof)
typedef struct _TP_DIRECT {
  VOID(*Callback)
  (struct _TP_CALLBACK_INSTANCE *, struct _TP_DIRECT *, VOID *,
   struct _IO_STATUS_BLOCK *); // offset: 0x0 ordinal: 0x0
  ULONG NumaNode;              // offset: 0x8 ordinal: 0x1
  UCHAR IdealProcessor;        // offset: 0xc ordinal: 0x2
} _TP_DIRECT;

// 0x248 bytes (sizeof)
typedef struct _PEB32 {
  UCHAR InheritedAddressSpace;    // offset: 0x0 ordinal: 0x0
  UCHAR ReadImageFileExecOptions; // offset: 0x1 ordinal: 0x1
  UCHAR BeingDebugged;            // offset: 0x2 ordinal: 0x2
  union {
    UCHAR BitField;                // offset: 0x3 ordinal: 0x3
    UCHAR ImageUsesLargePages : 1; // offset: 0x3 ordinal: 0x4
  };
  UCHAR IsProtectedProcess : 1;           // offset: 0x3 ordinal: 0x5
  UCHAR IsLegacyProcess : 1;              // offset: 0x3 ordinal: 0x6
  UCHAR IsImageDynamicallyRelocated : 1;  // offset: 0x3 ordinal: 0x7
  UCHAR SkipPatchingUser32Forwarders : 1; // offset: 0x3 ordinal: 0x8
  UCHAR SpareBits : 3;                    // offset: 0x3 ordinal: 0x9
  ULONG Mutant;                           // offset: 0x4 ordinal: 0xa
  ULONG ImageBaseAddress;                 // offset: 0x8 ordinal: 0xb
  ULONG Ldr;                              // offset: 0xc ordinal: 0xc
  ULONG ProcessParameters;                // offset: 0x10 ordinal: 0xd
  ULONG SubSystemData;                    // offset: 0x14 ordinal: 0xe
  ULONG ProcessHeap;                      // offset: 0x18 ordinal: 0xf
  ULONG FastPebLock;                      // offset: 0x1c ordinal: 0x10
  ULONG AtlThunkSListPtr;                 // offset: 0x20 ordinal: 0x11
  ULONG IFEOKey;                          // offset: 0x24 ordinal: 0x12
  union {
    ULONG CrossProcessFlags; // offset: 0x28 ordinal: 0x13
    ULONG ProcessInJob : 1;  // offset: 0x28 ordinal: 0x14
  };
  ULONG ProcessInitializing : 1; // offset: 0x28 ordinal: 0x15
  ULONG ProcessUsingVEH : 1;     // offset: 0x28 ordinal: 0x16
  ULONG ProcessUsingVCH : 1;     // offset: 0x28 ordinal: 0x17
  ULONG ProcessUsingFTH : 1;     // offset: 0x28 ordinal: 0x18
  ULONG ReservedBits0 : 27;      // offset: 0x28 ordinal: 0x19
  union {
    ULONG KernelCallbackTable; // offset: 0x2c ordinal: 0x1a
    ULONG UserSharedInfoPtr;   // offset: 0x2c ordinal: 0x1b
  };
  ULONG SystemReserved[1];                     // offset: 0x30 ordinal: 0x1c
  ULONG AtlThunkSListPtr32;                    // offset: 0x34 ordinal: 0x1d
  ULONG ApiSetMap;                             // offset: 0x38 ordinal: 0x1e
  ULONG TlsExpansionCounter;                   // offset: 0x3c ordinal: 0x1f
  ULONG TlsBitmap;                             // offset: 0x40 ordinal: 0x20
  ULONG TlsBitmapBits[2];                      // offset: 0x44 ordinal: 0x21
  ULONG ReadOnlySharedMemoryBase;              // offset: 0x4c ordinal: 0x22
  ULONG HotpatchInformation;                   // offset: 0x50 ordinal: 0x23
  ULONG ReadOnlyStaticServerData;              // offset: 0x54 ordinal: 0x24
  ULONG AnsiCodePageData;                      // offset: 0x58 ordinal: 0x25
  ULONG OemCodePageData;                       // offset: 0x5c ordinal: 0x26
  ULONG UnicodeCaseTableData;                  // offset: 0x60 ordinal: 0x27
  ULONG NumberOfProcessors;                    // offset: 0x64 ordinal: 0x28
  ULONG NtGlobalFlag;                          // offset: 0x68 ordinal: 0x29
  union _LARGE_INTEGER CriticalSectionTimeout; // offset: 0x70 ordinal: 0x2a
  ULONG HeapSegmentReserve;                    // offset: 0x78 ordinal: 0x2b
  ULONG HeapSegmentCommit;                     // offset: 0x7c ordinal: 0x2c
  ULONG HeapDeCommitTotalFreeThreshold;        // offset: 0x80 ordinal: 0x2d
  ULONG HeapDeCommitFreeBlockThreshold;        // offset: 0x84 ordinal: 0x2e
  ULONG NumberOfHeaps;                         // offset: 0x88 ordinal: 0x2f
  ULONG MaximumNumberOfHeaps;                  // offset: 0x8c ordinal: 0x30
  ULONG ProcessHeaps;                          // offset: 0x90 ordinal: 0x31
  ULONG GdiSharedHandleTable;                  // offset: 0x94 ordinal: 0x32
  ULONG ProcessStarterHelper;                  // offset: 0x98 ordinal: 0x33
  ULONG GdiDCAttributeList;                    // offset: 0x9c ordinal: 0x34
  ULONG LoaderLock;                            // offset: 0xa0 ordinal: 0x35
  ULONG OSMajorVersion;                        // offset: 0xa4 ordinal: 0x36
  ULONG OSMinorVersion;                        // offset: 0xa8 ordinal: 0x37
  USHORT OSBuildNumber;                        // offset: 0xac ordinal: 0x38
  USHORT OSCSDVersion;                         // offset: 0xae ordinal: 0x39
  ULONG OSPlatformId;                          // offset: 0xb0 ordinal: 0x3a
  ULONG ImageSubsystem;                        // offset: 0xb4 ordinal: 0x3b
  ULONG ImageSubsystemMajorVersion;            // offset: 0xb8 ordinal: 0x3c
  ULONG ImageSubsystemMinorVersion;            // offset: 0xbc ordinal: 0x3d
  ULONG ActiveProcessAffinityMask;             // offset: 0xc0 ordinal: 0x3e
  ULONG GdiHandleBuffer[34];                   // offset: 0xc4 ordinal: 0x3f
  ULONG PostProcessInitRoutine;                // offset: 0x14c ordinal: 0x40
  ULONG TlsExpansionBitmap;                    // offset: 0x150 ordinal: 0x41
  ULONG TlsExpansionBitmapBits[32];            // offset: 0x154 ordinal: 0x42
  ULONG SessionId;                             // offset: 0x1d4 ordinal: 0x43
  union _ULARGE_INTEGER AppCompatFlags;        // offset: 0x1d8 ordinal: 0x44
  union _ULARGE_INTEGER AppCompatFlagsUser;    // offset: 0x1e0 ordinal: 0x45
  ULONG pShimData;                             // offset: 0x1e8 ordinal: 0x46
  ULONG AppCompatInfo;                         // offset: 0x1ec ordinal: 0x47
  struct _STRING32 CSDVersion;                 // offset: 0x1f0 ordinal: 0x48
  ULONG ActivationContextData;                 // offset: 0x1f8 ordinal: 0x49
  ULONG ProcessAssemblyStorageMap;             // offset: 0x1fc ordinal: 0x4a
  ULONG SystemDefaultActivationContextData;    // offset: 0x200 ordinal: 0x4b
  ULONG SystemAssemblyStorageMap;              // offset: 0x204 ordinal: 0x4c
  ULONG MinimumStackCommit;                    // offset: 0x208 ordinal: 0x4d
  ULONG FlsCallback;                           // offset: 0x20c ordinal: 0x4e
  struct LIST_ENTRY32 FlsListHead;             // offset: 0x210 ordinal: 0x4f
  ULONG FlsBitmap;                             // offset: 0x218 ordinal: 0x50
  ULONG FlsBitmapBits[4];                      // offset: 0x21c ordinal: 0x51
  ULONG FlsHighIndex;                          // offset: 0x22c ordinal: 0x52
  ULONG WerRegistrationData;                   // offset: 0x230 ordinal: 0x53
  ULONG WerShipAssertPtr;                      // offset: 0x234 ordinal: 0x54
  ULONG pContextData;                          // offset: 0x238 ordinal: 0x55
  ULONG pImageHeaderHash;                      // offset: 0x23c ordinal: 0x56
  union {
    ULONG TracingFlags;           // offset: 0x240 ordinal: 0x57
    ULONG HeapTracingEnabled : 1; // offset: 0x240 ordinal: 0x58
  };
  ULONG CritSecTracingEnabled : 1; // offset: 0x240 ordinal: 0x59
  ULONG SpareTracingBits : 30;     // offset: 0x240 ordinal: 0x5a
} _PEB32;

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

// 0x1e8 bytes (sizeof)
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
  union _LARGE_INTEGER InfoLastUpdateTime;  // offset: 0x148 ordinal: 0x10
  struct _POP_THERMAL_ZONE_METRICS Metrics; // offset: 0x150 ordinal: 0x11
} _POP_THERMAL_ZONE;

// 0x88 bytes (sizeof)
typedef struct _LAZY_WRITER {
  struct _KDPC ScanDpc;       // offset: 0x0 ordinal: 0x0
  struct _KTIMER ScanTimer;   // offset: 0x40 ordinal: 0x1
  UCHAR ScanActive;           // offset: 0x80 ordinal: 0x2
  UCHAR OtherWork;            // offset: 0x81 ordinal: 0x3
  UCHAR PendingTeardownScan;  // offset: 0x82 ordinal: 0x4
  UCHAR PendingPeriodicScan;  // offset: 0x83 ordinal: 0x5
  UCHAR PendingLowMemoryScan; // offset: 0x84 ordinal: 0x6
  UCHAR PendingPowerScan;     // offset: 0x85 ordinal: 0x7
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

// 0x2200 bytes (sizeof)
typedef struct _KTIMER_TABLE {
  struct _KTIMER *TimerExpiry[64];              // offset: 0x0 ordinal: 0x0
  struct _KTIMER_TABLE_ENTRY TimerEntries[256]; // offset: 0x200 ordinal: 0x1
} _KTIMER_TABLE;

// 0x380 bytes (sizeof)
typedef struct _PEB {
  UCHAR InheritedAddressSpace;    // offset: 0x0 ordinal: 0x0
  UCHAR ReadImageFileExecOptions; // offset: 0x1 ordinal: 0x1
  UCHAR BeingDebugged;            // offset: 0x2 ordinal: 0x2
  union {
    UCHAR BitField;                // offset: 0x3 ordinal: 0x3
    UCHAR ImageUsesLargePages : 1; // offset: 0x3 ordinal: 0x4
  };
  UCHAR IsProtectedProcess : 1;           // offset: 0x3 ordinal: 0x5
  UCHAR IsLegacyProcess : 1;              // offset: 0x3 ordinal: 0x6
  UCHAR IsImageDynamicallyRelocated : 1;  // offset: 0x3 ordinal: 0x7
  UCHAR SkipPatchingUser32Forwarders : 1; // offset: 0x3 ordinal: 0x8
  UCHAR SpareBits : 3;                    // offset: 0x3 ordinal: 0x9
  VOID *Mutant;                           // offset: 0x8 ordinal: 0xa
  VOID *ImageBaseAddress;                 // offset: 0x10 ordinal: 0xb
  struct _PEB_LDR_DATA *Ldr;              // offset: 0x18 ordinal: 0xc
  struct _RTL_USER_PROCESS_PARAMETERS
      *ProcessParameters;                    // offset: 0x20 ordinal: 0xd
  VOID *SubSystemData;                       // offset: 0x28 ordinal: 0xe
  VOID *ProcessHeap;                         // offset: 0x30 ordinal: 0xf
  struct _RTL_CRITICAL_SECTION *FastPebLock; // offset: 0x38 ordinal: 0x10
  VOID *AtlThunkSListPtr;                    // offset: 0x40 ordinal: 0x11
  VOID *IFEOKey;                             // offset: 0x48 ordinal: 0x12
  union {
    ULONG CrossProcessFlags; // offset: 0x50 ordinal: 0x13
    ULONG ProcessInJob : 1;  // offset: 0x50 ordinal: 0x14
  };
  ULONG ProcessInitializing : 1; // offset: 0x50 ordinal: 0x15
  ULONG ProcessUsingVEH : 1;     // offset: 0x50 ordinal: 0x16
  ULONG ProcessUsingVCH : 1;     // offset: 0x50 ordinal: 0x17
  ULONG ProcessUsingFTH : 1;     // offset: 0x50 ordinal: 0x18
  ULONG ReservedBits0 : 27;      // offset: 0x50 ordinal: 0x19
  union {
    VOID *KernelCallbackTable; // offset: 0x58 ordinal: 0x1a
    VOID *UserSharedInfoPtr;   // offset: 0x58 ordinal: 0x1b
  };
  ULONG SystemReserved[1];                     // offset: 0x60 ordinal: 0x1c
  ULONG AtlThunkSListPtr32;                    // offset: 0x64 ordinal: 0x1d
  VOID *ApiSetMap;                             // offset: 0x68 ordinal: 0x1e
  ULONG TlsExpansionCounter;                   // offset: 0x70 ordinal: 0x1f
  VOID *TlsBitmap;                             // offset: 0x78 ordinal: 0x20
  ULONG TlsBitmapBits[2];                      // offset: 0x80 ordinal: 0x21
  VOID *ReadOnlySharedMemoryBase;              // offset: 0x88 ordinal: 0x22
  VOID *HotpatchInformation;                   // offset: 0x90 ordinal: 0x23
  VOID **ReadOnlyStaticServerData;             // offset: 0x98 ordinal: 0x24
  VOID *AnsiCodePageData;                      // offset: 0xa0 ordinal: 0x25
  VOID *OemCodePageData;                       // offset: 0xa8 ordinal: 0x26
  VOID *UnicodeCaseTableData;                  // offset: 0xb0 ordinal: 0x27
  ULONG NumberOfProcessors;                    // offset: 0xb8 ordinal: 0x28
  ULONG NtGlobalFlag;                          // offset: 0xbc ordinal: 0x29
  union _LARGE_INTEGER CriticalSectionTimeout; // offset: 0xc0 ordinal: 0x2a
  ULONGLONG HeapSegmentReserve;                // offset: 0xc8 ordinal: 0x2b
  ULONGLONG HeapSegmentCommit;                 // offset: 0xd0 ordinal: 0x2c
  ULONGLONG HeapDeCommitTotalFreeThreshold;    // offset: 0xd8 ordinal: 0x2d
  ULONGLONG HeapDeCommitFreeBlockThreshold;    // offset: 0xe0 ordinal: 0x2e
  ULONG NumberOfHeaps;                         // offset: 0xe8 ordinal: 0x2f
  ULONG MaximumNumberOfHeaps;                  // offset: 0xec ordinal: 0x30
  VOID **ProcessHeaps;                         // offset: 0xf0 ordinal: 0x31
  VOID *GdiSharedHandleTable;                  // offset: 0xf8 ordinal: 0x32
  VOID *ProcessStarterHelper;                  // offset: 0x100 ordinal: 0x33
  ULONG GdiDCAttributeList;                    // offset: 0x108 ordinal: 0x34
  struct _RTL_CRITICAL_SECTION *LoaderLock;    // offset: 0x110 ordinal: 0x35
  ULONG OSMajorVersion;                        // offset: 0x118 ordinal: 0x36
  ULONG OSMinorVersion;                        // offset: 0x11c ordinal: 0x37
  USHORT OSBuildNumber;                        // offset: 0x120 ordinal: 0x38
  USHORT OSCSDVersion;                         // offset: 0x122 ordinal: 0x39
  ULONG OSPlatformId;                          // offset: 0x124 ordinal: 0x3a
  ULONG ImageSubsystem;                        // offset: 0x128 ordinal: 0x3b
  ULONG ImageSubsystemMajorVersion;            // offset: 0x12c ordinal: 0x3c
  ULONG ImageSubsystemMinorVersion;            // offset: 0x130 ordinal: 0x3d
  ULONGLONG ActiveProcessAffinityMask;         // offset: 0x138 ordinal: 0x3e
  ULONG GdiHandleBuffer[60];                   // offset: 0x140 ordinal: 0x3f
  VOID (*PostProcessInitRoutine)();            // offset: 0x230 ordinal: 0x40
  VOID *TlsExpansionBitmap;                    // offset: 0x238 ordinal: 0x41
  ULONG TlsExpansionBitmapBits[32];            // offset: 0x240 ordinal: 0x42
  ULONG SessionId;                             // offset: 0x2c0 ordinal: 0x43
  union _ULARGE_INTEGER AppCompatFlags;        // offset: 0x2c8 ordinal: 0x44
  union _ULARGE_INTEGER AppCompatFlagsUser;    // offset: 0x2d0 ordinal: 0x45
  VOID *pShimData;                             // offset: 0x2d8 ordinal: 0x46
  VOID *AppCompatInfo;                         // offset: 0x2e0 ordinal: 0x47
  struct _UNICODE_STRING CSDVersion;           // offset: 0x2e8 ordinal: 0x48
  struct _ACTIVATION_CONTEXT_DATA
      *ActivationContextData; // offset: 0x2f8 ordinal: 0x49
  struct _ASSEMBLY_STORAGE_MAP
      *ProcessAssemblyStorageMap; // offset: 0x300 ordinal: 0x4a
  struct _ACTIVATION_CONTEXT_DATA
      *SystemDefaultActivationContextData; // offset: 0x308 ordinal: 0x4b
  struct _ASSEMBLY_STORAGE_MAP
      *SystemAssemblyStorageMap;          // offset: 0x310 ordinal: 0x4c
  ULONGLONG MinimumStackCommit;           // offset: 0x318 ordinal: 0x4d
  struct _FLS_CALLBACK_INFO *FlsCallback; // offset: 0x320 ordinal: 0x4e
  struct _LIST_ENTRY FlsListHead;         // offset: 0x328 ordinal: 0x4f
  VOID *FlsBitmap;                        // offset: 0x338 ordinal: 0x50
  ULONG FlsBitmapBits[4];                 // offset: 0x340 ordinal: 0x51
  ULONG FlsHighIndex;                     // offset: 0x350 ordinal: 0x52
  VOID *WerRegistrationData;              // offset: 0x358 ordinal: 0x53
  VOID *WerShipAssertPtr;                 // offset: 0x360 ordinal: 0x54
  VOID *pContextData;                     // offset: 0x368 ordinal: 0x55
  VOID *pImageHeaderHash;                 // offset: 0x370 ordinal: 0x56
  union {
    ULONG TracingFlags;           // offset: 0x378 ordinal: 0x57
    ULONG HeapTracingEnabled : 1; // offset: 0x378 ordinal: 0x58
  };
  ULONG CritSecTracingEnabled : 1; // offset: 0x378 ordinal: 0x59
  ULONG SpareTracingBits : 30;     // offset: 0x378 ordinal: 0x5a
} _PEB;

// 0x4d0 bytes (sizeof)
typedef struct _EPROCESS {
  struct _KPROCESS Pcb;                      // offset: 0x0 ordinal: 0x0
  struct _EX_PUSH_LOCK ProcessLock;          // offset: 0x160 ordinal: 0x1
  union _LARGE_INTEGER CreateTime;           // offset: 0x168 ordinal: 0x2
  union _LARGE_INTEGER ExitTime;             // offset: 0x170 ordinal: 0x3
  struct _EX_RUNDOWN_REF RundownProtect;     // offset: 0x178 ordinal: 0x4
  VOID *UniqueProcessId;                     // offset: 0x180 ordinal: 0x5
  struct _LIST_ENTRY ActiveProcessLinks;     // offset: 0x188 ordinal: 0x6
  ULONGLONG ProcessQuotaUsage[2];            // offset: 0x198 ordinal: 0x7
  ULONGLONG ProcessQuotaPeak[2];             // offset: 0x1a8 ordinal: 0x8
  ULONGLONG CommitCharge;                    // offset: 0x1b8 ordinal: 0x9
  struct _EPROCESS_QUOTA_BLOCK *QuotaBlock;  // offset: 0x1c0 ordinal: 0xa
  struct _PS_CPU_QUOTA_BLOCK *CpuQuotaBlock; // offset: 0x1c8 ordinal: 0xb
  ULONGLONG PeakVirtualSize;                 // offset: 0x1d0 ordinal: 0xc
  ULONGLONG VirtualSize;                     // offset: 0x1d8 ordinal: 0xd
  struct _LIST_ENTRY SessionProcessLinks;    // offset: 0x1e0 ordinal: 0xe
  VOID *DebugPort;                           // offset: 0x1f0 ordinal: 0xf
  union {
    VOID *ExceptionPortData;          // offset: 0x1f8 ordinal: 0x10
    ULONGLONG ExceptionPortValue;     // offset: 0x1f8 ordinal: 0x11
    ULONGLONG ExceptionPortState : 3; // offset: 0x1f8 ordinal: 0x12
  };
  struct _HANDLE_TABLE *ObjectTable;          // offset: 0x200 ordinal: 0x13
  struct _EX_FAST_REF Token;                  // offset: 0x208 ordinal: 0x14
  ULONGLONG WorkingSetPage;                   // offset: 0x210 ordinal: 0x15
  struct _EX_PUSH_LOCK AddressCreationLock;   // offset: 0x218 ordinal: 0x16
  struct _ETHREAD *RotateInProgress;          // offset: 0x220 ordinal: 0x17
  struct _ETHREAD *ForkInProgress;            // offset: 0x228 ordinal: 0x18
  ULONGLONG HardwareTrigger;                  // offset: 0x230 ordinal: 0x19
  struct _MM_AVL_TABLE *PhysicalVadRoot;      // offset: 0x238 ordinal: 0x1a
  VOID *CloneRoot;                            // offset: 0x240 ordinal: 0x1b
  ULONGLONG NumberOfPrivatePages;             // offset: 0x248 ordinal: 0x1c
  ULONGLONG NumberOfLockedPages;              // offset: 0x250 ordinal: 0x1d
  VOID *Win32Process;                         // offset: 0x258 ordinal: 0x1e
  struct _EJOB *Job;                          // offset: 0x260 ordinal: 0x1f
  VOID *SectionObject;                        // offset: 0x268 ordinal: 0x20
  VOID *SectionBaseAddress;                   // offset: 0x270 ordinal: 0x21
  ULONG Cookie;                               // offset: 0x278 ordinal: 0x22
  ULONG UmsScheduledThreads;                  // offset: 0x27c ordinal: 0x23
  struct _PAGEFAULT_HISTORY *WorkingSetWatch; // offset: 0x280 ordinal: 0x24
  VOID *Win32WindowStation;                   // offset: 0x288 ordinal: 0x25
  VOID *InheritedFromUniqueProcessId;         // offset: 0x290 ordinal: 0x26
  VOID *LdtInformation;                       // offset: 0x298 ordinal: 0x27
  VOID *Spare;                                // offset: 0x2a0 ordinal: 0x28
  ULONGLONG ConsoleHostProcess;               // offset: 0x2a8 ordinal: 0x29
  VOID *DeviceMap;                            // offset: 0x2b0 ordinal: 0x2a
  VOID *EtwDataSource;                        // offset: 0x2b8 ordinal: 0x2b
  VOID *FreeTebHint;                          // offset: 0x2c0 ordinal: 0x2c
  VOID *FreeUmsTebHint;                       // offset: 0x2c8 ordinal: 0x2d
  union {
    struct _HARDWARE_PTE PageDirectoryPte; // offset: 0x2d0 ordinal: 0x2e
    ULONGLONG Filler;                      // offset: 0x2d0 ordinal: 0x2f
  };
  VOID *Session;                            // offset: 0x2d8 ordinal: 0x30
  UCHAR ImageFileName[15];                  // offset: 0x2e0 ordinal: 0x31
  UCHAR PriorityClass;                      // offset: 0x2ef ordinal: 0x32
  struct _LIST_ENTRY JobLinks;              // offset: 0x2f0 ordinal: 0x33
  VOID *LockedPagesList;                    // offset: 0x300 ordinal: 0x34
  struct _LIST_ENTRY ThreadListHead;        // offset: 0x308 ordinal: 0x35
  VOID *SecurityPort;                       // offset: 0x318 ordinal: 0x36
  VOID *Wow64Process;                       // offset: 0x320 ordinal: 0x37
  ULONG ActiveThreads;                      // offset: 0x328 ordinal: 0x38
  ULONG ImagePathHash;                      // offset: 0x32c ordinal: 0x39
  ULONG DefaultHardErrorProcessing;         // offset: 0x330 ordinal: 0x3a
  LONG LastThreadExitStatus;                // offset: 0x334 ordinal: 0x3b
  struct _PEB *Peb;                         // offset: 0x338 ordinal: 0x3c
  struct _EX_FAST_REF PrefetchTrace;        // offset: 0x340 ordinal: 0x3d
  union _LARGE_INTEGER ReadOperationCount;  // offset: 0x348 ordinal: 0x3e
  union _LARGE_INTEGER WriteOperationCount; // offset: 0x350 ordinal: 0x3f
  union _LARGE_INTEGER OtherOperationCount; // offset: 0x358 ordinal: 0x40
  union _LARGE_INTEGER ReadTransferCount;   // offset: 0x360 ordinal: 0x41
  union _LARGE_INTEGER WriteTransferCount;  // offset: 0x368 ordinal: 0x42
  union _LARGE_INTEGER OtherTransferCount;  // offset: 0x370 ordinal: 0x43
  ULONGLONG CommitChargeLimit;              // offset: 0x378 ordinal: 0x44
  ULONGLONG CommitChargePeak;               // offset: 0x380 ordinal: 0x45
  VOID *AweInfo;                            // offset: 0x388 ordinal: 0x46
  struct _SE_AUDIT_PROCESS_CREATION_INFO
      SeAuditProcessCreationInfo;    // offset: 0x390 ordinal: 0x47
  struct _MMSUPPORT Vm;              // offset: 0x398 ordinal: 0x48
  struct _LIST_ENTRY MmProcessLinks; // offset: 0x420 ordinal: 0x49
  VOID *HighestUserAddress;          // offset: 0x430 ordinal: 0x4a
  ULONG ModifiedPageCount;           // offset: 0x438 ordinal: 0x4b
  union {
    ULONG Flags2;                 // offset: 0x43c ordinal: 0x4c
    ULONG JobNotReallyActive : 1; // offset: 0x43c ordinal: 0x4d
  };
  ULONG AccountingFolded : 1;           // offset: 0x43c ordinal: 0x4e
  ULONG NewProcessReported : 1;         // offset: 0x43c ordinal: 0x4f
  ULONG ExitProcessReported : 1;        // offset: 0x43c ordinal: 0x50
  ULONG ReportCommitChanges : 1;        // offset: 0x43c ordinal: 0x51
  ULONG LastReportMemory : 1;           // offset: 0x43c ordinal: 0x52
  ULONG ReportPhysicalPageChanges : 1;  // offset: 0x43c ordinal: 0x53
  ULONG HandleTableRundown : 1;         // offset: 0x43c ordinal: 0x54
  ULONG NeedsHandleRundown : 1;         // offset: 0x43c ordinal: 0x55
  ULONG RefTraceEnabled : 1;            // offset: 0x43c ordinal: 0x56
  ULONG NumaAware : 1;                  // offset: 0x43c ordinal: 0x57
  ULONG ProtectedProcess : 1;           // offset: 0x43c ordinal: 0x58
  ULONG DefaultPagePriority : 3;        // offset: 0x43c ordinal: 0x59
  ULONG PrimaryTokenFrozen : 1;         // offset: 0x43c ordinal: 0x5a
  ULONG ProcessVerifierTarget : 1;      // offset: 0x43c ordinal: 0x5b
  ULONG StackRandomizationDisabled : 1; // offset: 0x43c ordinal: 0x5c
  ULONG AffinityPermanent : 1;          // offset: 0x43c ordinal: 0x5d
  ULONG AffinityUpdateEnable : 1;       // offset: 0x43c ordinal: 0x5e
  ULONG PropagateNode : 1;              // offset: 0x43c ordinal: 0x5f
  ULONG ExplicitAffinity : 1;           // offset: 0x43c ordinal: 0x60
  union {
    ULONG Flags;              // offset: 0x440 ordinal: 0x61
    ULONG CreateReported : 1; // offset: 0x440 ordinal: 0x62
  };
  ULONG NoDebugInherit : 1;                 // offset: 0x440 ordinal: 0x63
  ULONG ProcessExiting : 1;                 // offset: 0x440 ordinal: 0x64
  ULONG ProcessDelete : 1;                  // offset: 0x440 ordinal: 0x65
  ULONG Wow64SplitPages : 1;                // offset: 0x440 ordinal: 0x66
  ULONG VmDeleted : 1;                      // offset: 0x440 ordinal: 0x67
  ULONG OutswapEnabled : 1;                 // offset: 0x440 ordinal: 0x68
  ULONG Outswapped : 1;                     // offset: 0x440 ordinal: 0x69
  ULONG ForkFailed : 1;                     // offset: 0x440 ordinal: 0x6a
  ULONG Wow64VaSpace4Gb : 1;                // offset: 0x440 ordinal: 0x6b
  ULONG AddressSpaceInitialized : 2;        // offset: 0x440 ordinal: 0x6c
  ULONG SetTimerResolution : 1;             // offset: 0x440 ordinal: 0x6d
  ULONG BreakOnTermination : 1;             // offset: 0x440 ordinal: 0x6e
  ULONG DeprioritizeViews : 1;              // offset: 0x440 ordinal: 0x6f
  ULONG WriteWatch : 1;                     // offset: 0x440 ordinal: 0x70
  ULONG ProcessInSession : 1;               // offset: 0x440 ordinal: 0x71
  ULONG OverrideAddressSpace : 1;           // offset: 0x440 ordinal: 0x72
  ULONG HasAddressSpace : 1;                // offset: 0x440 ordinal: 0x73
  ULONG LaunchPrefetched : 1;               // offset: 0x440 ordinal: 0x74
  ULONG InjectInpageErrors : 1;             // offset: 0x440 ordinal: 0x75
  ULONG VmTopDown : 1;                      // offset: 0x440 ordinal: 0x76
  ULONG ImageNotifyDone : 1;                // offset: 0x440 ordinal: 0x77
  ULONG PdeUpdateNeeded : 1;                // offset: 0x440 ordinal: 0x78
  ULONG VdmAllowed : 1;                     // offset: 0x440 ordinal: 0x79
  ULONG CrossSessionCreate : 1;             // offset: 0x440 ordinal: 0x7a
  ULONG ProcessInserted : 1;                // offset: 0x440 ordinal: 0x7b
  ULONG DefaultIoPriority : 3;              // offset: 0x440 ordinal: 0x7c
  ULONG ProcessSelfDelete : 1;              // offset: 0x440 ordinal: 0x7d
  ULONG SetTimerResolutionLink : 1;         // offset: 0x440 ordinal: 0x7e
  LONG ExitStatus;                          // offset: 0x444 ordinal: 0x7f
  struct _MM_AVL_TABLE VadRoot;             // offset: 0x448 ordinal: 0x80
  struct _ALPC_PROCESS_CONTEXT AlpcContext; // offset: 0x488 ordinal: 0x81
  struct _LIST_ENTRY TimerResolutionLink;   // offset: 0x4a8 ordinal: 0x82
  ULONG RequestedTimerResolution;           // offset: 0x4b8 ordinal: 0x83
  ULONG ActiveThreadsHighWatermark;         // offset: 0x4bc ordinal: 0x84
  ULONG SmallestTimerResolution;            // offset: 0x4c0 ordinal: 0x85
  struct _PO_DIAG_STACK_RECORD
      *TimerResolutionStackRecord; // offset: 0x4c8 ordinal: 0x86
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
    ULONG SessionId;                     // offset: 0x20 ordinal: 0x5
    struct _ETW_REPLY_QUEUE *ReplyQueue; // offset: 0x20 ordinal: 0x6
    struct _ETW_REG_ENTRY *ReplySlot[4]; // offset: 0x20 ordinal: 0x7
  };
  union {
    struct _EPROCESS *Process; // offset: 0x40 ordinal: 0x8
    VOID *Callback;            // offset: 0x40 ordinal: 0x9
  };
  VOID *CallbackContext; // offset: 0x48 ordinal: 0xa
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

// 0x20 bytes (sizeof)
typedef struct _DIAGNOSTIC_CONTEXT {
  enum _REQUESTER_TYPE CallerType;     // offset: 0x0 ordinal: 0x0
  struct _EPROCESS *Process;           // offset: 0x8 ordinal: 0x1
  ULONG ServiceTag;                    // offset: 0x10 ordinal: 0x2
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x8 ordinal: 0x3
  ULONGLONG ReasonSize;                // offset: 0x18 ordinal: 0x4
} _DIAGNOSTIC_CONTEXT;

// 0x110 bytes (sizeof)
typedef struct _ETIMER {
  struct _KTIMER KeTimer;                  // offset: 0x0 ordinal: 0x0
  struct _KAPC TimerApc;                   // offset: 0x40 ordinal: 0x1
  struct _KDPC TimerDpc;                   // offset: 0x98 ordinal: 0x2
  struct _LIST_ENTRY ActiveTimerListEntry; // offset: 0xd8 ordinal: 0x3
  ULONGLONG Lock;                          // offset: 0xe8 ordinal: 0x4
  LONG Period;                             // offset: 0xf0 ordinal: 0x5
  UCHAR ApcAssociated;                     // offset: 0xf4 ordinal: 0x6
  struct _DIAGNOSTIC_CONTEXT *WakeReason;  // offset: 0xf8 ordinal: 0x7
  struct _LIST_ENTRY WakeTimerListEntry;   // offset: 0x100 ordinal: 0x8
} _ETIMER;

// 0x90 bytes (sizeof)
typedef struct _MMVAD_LONG {
  union __anon_857 u1;              // offset: 0x0 ordinal: 0x0
  struct _MMVAD *LeftChild;         // offset: 0x8 ordinal: 0x1
  struct _MMVAD *RightChild;        // offset: 0x10 ordinal: 0x2
  ULONGLONG StartingVpn;            // offset: 0x18 ordinal: 0x3
  ULONGLONG EndingVpn;              // offset: 0x20 ordinal: 0x4
  union __anon_860 u;               // offset: 0x28 ordinal: 0x5
  struct _EX_PUSH_LOCK PushLock;    // offset: 0x30 ordinal: 0x6
  union __anon_861 u5;              // offset: 0x38 ordinal: 0x7
  union __anon_862 u2;              // offset: 0x40 ordinal: 0x8
  struct _SUBSECTION *Subsection;   // offset: 0x48 ordinal: 0x9
  struct _MMPTE *FirstPrototypePte; // offset: 0x50 ordinal: 0xa
  struct _MMPTE *LastContiguousPte; // offset: 0x58 ordinal: 0xb
  struct _LIST_ENTRY ViewLinks;     // offset: 0x60 ordinal: 0xc
  struct _EPROCESS *VadsProcess;    // offset: 0x70 ordinal: 0xd
  union __anon_1414 u3;             // offset: 0x78 ordinal: 0xe
  union __anon_1418 u4;             // offset: 0x88 ordinal: 0xf
} _MMVAD_LONG;

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

// 0x88 bytes (sizeof)
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
  ULONG LoggerId;                                // offset: 0x58 ordinal: 0xb
  UCHAR ShutDownRequested;                       // offset: 0x5c ordinal: 0xc
  UCHAR NewBuffersLost;                          // offset: 0x5d ordinal: 0xd
  UCHAR Disconnected;                            // offset: 0x5e ordinal: 0xe
  struct _RTL_BITMAP ReservedBufferSpaceBitMap;  // offset: 0x60 ordinal: 0xf
  UCHAR *ReservedBufferSpace;                    // offset: 0x70 ordinal: 0x10
  ULONG ReservedBufferSpaceSize;                 // offset: 0x78 ordinal: 0x11
  ULONG UserPagesAllocated;                      // offset: 0x7c ordinal: 0x12
  ULONG UserPagesReused;                         // offset: 0x80 ordinal: 0x13
  UCHAR Wow;                                     // offset: 0x84 ordinal: 0x14
} _ETW_REALTIME_CONSUMER;

// 0x330 bytes (sizeof)
typedef struct _WMI_LOGGER_CONTEXT {
  ULONG LoggerId;                         // offset: 0x0 ordinal: 0x0
  ULONG BufferSize;                       // offset: 0x4 ordinal: 0x1
  ULONG MaximumEventSize;                 // offset: 0x8 ordinal: 0x2
  LONG CollectionOn;                      // offset: 0xc ordinal: 0x3
  ULONG LoggerMode;                       // offset: 0x10 ordinal: 0x4
  LONG AcceptNewEvents;                   // offset: 0x14 ordinal: 0x5
  LONGLONG (*GetCpuClock)();              // offset: 0x18 ordinal: 0x6
  union _LARGE_INTEGER StartTime;         // offset: 0x20 ordinal: 0x7
  VOID *LogFileHandle;                    // offset: 0x28 ordinal: 0x8
  struct _ETHREAD *LoggerThread;          // offset: 0x30 ordinal: 0x9
  LONG LoggerStatus;                      // offset: 0x38 ordinal: 0xa
  VOID *NBQHead;                          // offset: 0x40 ordinal: 0xb
  VOID *OverflowNBQHead;                  // offset: 0x48 ordinal: 0xc
  union _SLIST_HEADER QueueBlockFreeList; // offset: 0x50 ordinal: 0xd
  struct _LIST_ENTRY GlobalList;          // offset: 0x60 ordinal: 0xe
  union {
    struct _WMI_BUFFER_HEADER *BatchedBufferList; // offset: 0x70 ordinal: 0xf
    struct _EX_FAST_REF CurrentBuffer;            // offset: 0x70 ordinal: 0x10
  };
  struct _UNICODE_STRING LoggerName;     // offset: 0x78 ordinal: 0x11
  struct _UNICODE_STRING LogFileName;    // offset: 0x88 ordinal: 0x12
  struct _UNICODE_STRING LogFilePattern; // offset: 0x98 ordinal: 0x13
  struct _UNICODE_STRING NewLogFileName; // offset: 0xa8 ordinal: 0x14
  ULONG ClockType;                       // offset: 0xb8 ordinal: 0x15
  ULONG MaximumFileSize;                 // offset: 0xbc ordinal: 0x16
  ULONG LastFlushedBuffer;               // offset: 0xc0 ordinal: 0x17
  ULONG FlushTimer;                      // offset: 0xc4 ordinal: 0x18
  ULONG FlushThreshold;                  // offset: 0xc8 ordinal: 0x19
  union _LARGE_INTEGER ByteOffset;       // offset: 0xd0 ordinal: 0x1a
  ULONG MinimumBuffers;                  // offset: 0xd8 ordinal: 0x1b
  LONG BuffersAvailable;                 // offset: 0xdc ordinal: 0x1c
  LONG NumberOfBuffers;                  // offset: 0xe0 ordinal: 0x1d
  ULONG MaximumBuffers;                  // offset: 0xe4 ordinal: 0x1e
  ULONG EventsLost;                      // offset: 0xe8 ordinal: 0x1f
  ULONG BuffersWritten;                  // offset: 0xec ordinal: 0x20
  ULONG LogBuffersLost;                  // offset: 0xf0 ordinal: 0x21
  ULONG RealTimeBuffersDelivered;        // offset: 0xf4 ordinal: 0x22
  ULONG RealTimeBuffersLost;             // offset: 0xf8 ordinal: 0x23
  LONG *SequencePtr;                     // offset: 0x100 ordinal: 0x24
  ULONG LocalSequence;                   // offset: 0x108 ordinal: 0x25
  struct _GUID InstanceGuid;             // offset: 0x10c ordinal: 0x26
  LONG FileCounter;                      // offset: 0x11c ordinal: 0x27
  VOID(*BufferCallback)
  (struct _WMI_BUFFER_HEADER *, VOID *); // offset: 0x120 ordinal: 0x28
  enum _POOL_TYPE PoolType;              // offset: 0x128 ordinal: 0x29
  struct _ETW_REF_CLOCK ReferenceTime;   // offset: 0x130 ordinal: 0x2a
  struct _LIST_ENTRY Consumers;          // offset: 0x140 ordinal: 0x2b
  ULONG NumConsumers;                    // offset: 0x150 ordinal: 0x2c
  struct _ETW_REALTIME_CONSUMER
      *TransitionConsumer;                     // offset: 0x158 ordinal: 0x2d
  VOID *RealtimeLogfileHandle;                 // offset: 0x160 ordinal: 0x2e
  struct _UNICODE_STRING RealtimeLogfileName;  // offset: 0x168 ordinal: 0x2f
  union _LARGE_INTEGER RealtimeWriteOffset;    // offset: 0x178 ordinal: 0x30
  union _LARGE_INTEGER RealtimeReadOffset;     // offset: 0x180 ordinal: 0x31
  union _LARGE_INTEGER RealtimeLogfileSize;    // offset: 0x188 ordinal: 0x32
  ULONGLONG RealtimeLogfileUsage;              // offset: 0x190 ordinal: 0x33
  ULONGLONG RealtimeMaximumFileSize;           // offset: 0x198 ordinal: 0x34
  ULONG RealtimeBuffersSaved;                  // offset: 0x1a0 ordinal: 0x35
  struct _ETW_REF_CLOCK RealtimeReferenceTime; // offset: 0x1a8 ordinal: 0x36
  enum _ETW_RT_EVENT_LOSS NewRTEventsLost;     // offset: 0x1b8 ordinal: 0x37
  struct _KEVENT LoggerEvent;                  // offset: 0x1c0 ordinal: 0x38
  struct _KEVENT FlushEvent;                   // offset: 0x1d8 ordinal: 0x39
  struct _KTIMER FlushTimeOutTimer;            // offset: 0x1f0 ordinal: 0x3a
  struct _KDPC FlushDpc;                       // offset: 0x230 ordinal: 0x3b
  struct _KMUTANT LoggerMutex;                 // offset: 0x270 ordinal: 0x3c
  struct _EX_PUSH_LOCK LoggerLock;             // offset: 0x2a8 ordinal: 0x3d
  union {
    ULONGLONG BufferListSpinLock;            // offset: 0x2b0 ordinal: 0x3e
    struct _EX_PUSH_LOCK BufferListPushLock; // offset: 0x2b0 ordinal: 0x3f
  };
  struct _SECURITY_CLIENT_CONTEXT
      ClientSecurityContext;              // offset: 0x2b8 ordinal: 0x40
  struct _EX_FAST_REF SecurityDescriptor; // offset: 0x300 ordinal: 0x41
  LONGLONG BufferSequenceNumber;          // offset: 0x308 ordinal: 0x42
  union {
    ULONG Flags;          // offset: 0x310 ordinal: 0x43
    ULONG Persistent : 1; // offset: 0x310 ordinal: 0x44
  };
  ULONG AutoLogger : 1;                 // offset: 0x310 ordinal: 0x45
  ULONG FsReady : 1;                    // offset: 0x310 ordinal: 0x46
  ULONG RealTime : 1;                   // offset: 0x310 ordinal: 0x47
  ULONG Wow : 1;                        // offset: 0x310 ordinal: 0x48
  ULONG KernelTrace : 1;                // offset: 0x310 ordinal: 0x49
  ULONG NoMoreEnable : 1;               // offset: 0x310 ordinal: 0x4a
  ULONG StackTracing : 1;               // offset: 0x310 ordinal: 0x4b
  ULONG ErrorLogged : 1;                // offset: 0x310 ordinal: 0x4c
  ULONG RealtimeLoggerContextFreed : 1; // offset: 0x310 ordinal: 0x4d
  union {
    ULONG RequestFlag;       // offset: 0x314 ordinal: 0x4e
    ULONG RequestNewFie : 1; // offset: 0x314 ordinal: 0x4f
  };
  ULONG RequestUpdateFile : 1;         // offset: 0x314 ordinal: 0x50
  ULONG RequestFlush : 1;              // offset: 0x314 ordinal: 0x51
  ULONG RequestDisableRealtime : 1;    // offset: 0x314 ordinal: 0x52
  ULONG RequestDisconnectConsumer : 1; // offset: 0x314 ordinal: 0x53
  ULONG RequestConnectConsumer : 1;    // offset: 0x314 ordinal: 0x54
  struct _RTL_BITMAP HookIdMap;        // offset: 0x318 ordinal: 0x55
} _WMI_LOGGER_CONTEXT;

typedef UCHAR (*__anon_1306)(struct _EPROCESS *, VOID *, VOID *, CHAR);

typedef VOID (*__anon_1302)(struct _EPROCESS *, VOID *, ULONGLONG, ULONGLONG);

typedef LONG (*__anon_1301)(enum _OB_OPEN_REASON, CHAR, struct _EPROCESS *,
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
  UCHAR SupportsObjectCallbacks : 1;      // offset: 0x2 ordinal: 0x8
  ULONG ObjectTypeCode;                   // offset: 0x4 ordinal: 0x9
  ULONG InvalidAttributes;                // offset: 0x8 ordinal: 0xa
  struct _GENERIC_MAPPING GenericMapping; // offset: 0xc ordinal: 0xb
  ULONG ValidAccessMask;                  // offset: 0x1c ordinal: 0xc
  ULONG RetainAccess;                     // offset: 0x20 ordinal: 0xd
  enum _POOL_TYPE PoolType;               // offset: 0x24 ordinal: 0xe
  ULONG DefaultPagedPoolCharge;           // offset: 0x28 ordinal: 0xf
  ULONG DefaultNonPagedPoolCharge;        // offset: 0x2c ordinal: 0x10
  VOID(*DumpProcedure)
  (VOID *, struct _OBJECT_DUMP_CONTROL *); // offset: 0x30 ordinal: 0x11
  LONG(*OpenProcedure)
  (enum _OB_OPEN_REASON, CHAR, struct _EPROCESS *, VOID *, ULONG *,
   ULONG); // offset: 0x38 ordinal: 0x12
  VOID(*CloseProcedure)
  (struct _EPROCESS *, VOID *, ULONGLONG,
   ULONGLONG);                     // offset: 0x40 ordinal: 0x13
  VOID (*DeleteProcedure)(VOID *); // offset: 0x48 ordinal: 0x14
  LONG(*ParseProcedure)
  (VOID *, VOID *, struct _ACCESS_STATE *, CHAR, ULONG,
   struct _UNICODE_STRING *, struct _UNICODE_STRING *, VOID *,
   struct _SECURITY_QUALITY_OF_SERVICE *,
   VOID **); // offset: 0x50 ordinal: 0x15
  LONG(*SecurityProcedure)
  (VOID *, enum _SECURITY_OPERATION_CODE, ULONG *, VOID *, ULONG *, VOID **,
   enum _POOL_TYPE, struct _GENERIC_MAPPING *,
   CHAR); // offset: 0x58 ordinal: 0x16
  LONG(*QueryNameProcedure)
  (VOID *, UCHAR, struct _OBJECT_NAME_INFORMATION *, ULONG, ULONG *,
   CHAR); // offset: 0x60 ordinal: 0x17
  UCHAR(*OkayToCloseProcedure)
  (struct _EPROCESS *, VOID *, VOID *, CHAR); // offset: 0x68 ordinal: 0x18
} _OBJECT_TYPE_INITIALIZER;

// 0xd0 bytes (sizeof)
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
  struct _EX_PUSH_LOCK TypeLock;            // offset: 0xb0 ordinal: 0x9
  ULONG Key;                                // offset: 0xb8 ordinal: 0xa
  struct _LIST_ENTRY CallbackList;          // offset: 0xc0 ordinal: 0xb
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

// 0x10 bytes (sizeof)
typedef struct _KALPC_HANDLE_DATA {
  ULONG Flags;      // offset: 0x0 ordinal: 0x0
  ULONG ObjectType; // offset: 0x4 ordinal: 0x1
  struct _OB_DUPLICATE_OBJECT_STATE
      *DuplicateContext; // offset: 0x8 ordinal: 0x2
} _KALPC_HANDLE_DATA;

// 0x70 bytes (sizeof)
typedef struct _KALPC_SECURITY_DATA {
  struct _ALPC_HANDLE_TABLE *HandleTable;          // offset: 0x0 ordinal: 0x0
  VOID *ContextHandle;                             // offset: 0x8 ordinal: 0x1
  struct _EPROCESS *OwningProcess;                 // offset: 0x10 ordinal: 0x2
  struct _ALPC_PORT *OwnerPort;                    // offset: 0x18 ordinal: 0x3
  struct _SECURITY_CLIENT_CONTEXT DynamicSecurity; // offset: 0x20 ordinal: 0x4
  union __anon_1277 u1;                            // offset: 0x68 ordinal: 0x5
} _KALPC_SECURITY_DATA;

// 0x38 bytes (sizeof)
typedef struct _KALPC_MESSAGE_ATTRIBUTES {
  VOID *ClientContext;                       // offset: 0x0 ordinal: 0x0
  VOID *ServerContext;                       // offset: 0x8 ordinal: 0x1
  VOID *PortContext;                         // offset: 0x10 ordinal: 0x2
  VOID *CancelPortContext;                   // offset: 0x18 ordinal: 0x3
  struct _KALPC_SECURITY_DATA *SecurityData; // offset: 0x20 ordinal: 0x4
  struct _KALPC_VIEW *View;                  // offset: 0x28 ordinal: 0x5
  struct _KALPC_HANDLE_DATA *HandleData;     // offset: 0x30 ordinal: 0x6
} _KALPC_MESSAGE_ATTRIBUTES;

// 0x98 bytes (sizeof)
typedef struct _ALPC_COMPLETION_LIST {
  struct _LIST_ENTRY Entry;                    // offset: 0x0 ordinal: 0x0
  struct _EPROCESS *OwnerProcess;              // offset: 0x10 ordinal: 0x1
  struct _MDL *Mdl;                            // offset: 0x18 ordinal: 0x2
  VOID *UserVa;                                // offset: 0x20 ordinal: 0x3
  VOID *UserLimit;                             // offset: 0x28 ordinal: 0x4
  VOID *DataUserVa;                            // offset: 0x30 ordinal: 0x5
  VOID *SystemVa;                              // offset: 0x38 ordinal: 0x6
  ULONGLONG TotalSize;                         // offset: 0x40 ordinal: 0x7
  struct _ALPC_COMPLETION_LIST_HEADER *Header; // offset: 0x48 ordinal: 0x8
  VOID *List;                                  // offset: 0x50 ordinal: 0x9
  ULONGLONG ListSize;                          // offset: 0x58 ordinal: 0xa
  VOID *Bitmap;                                // offset: 0x60 ordinal: 0xb
  ULONGLONG BitmapSize;                        // offset: 0x68 ordinal: 0xc
  VOID *Data;                                  // offset: 0x70 ordinal: 0xd
  ULONGLONG DataSize;                          // offset: 0x78 ordinal: 0xe
  ULONG BitmapLimit;                           // offset: 0x80 ordinal: 0xf
  ULONG BitmapNextHint;                        // offset: 0x84 ordinal: 0x10
  ULONG ConcurrencyCount;                      // offset: 0x88 ordinal: 0x11
  ULONG AttributeFlags;                        // offset: 0x8c ordinal: 0x12
  ULONG AttributeSize;                         // offset: 0x90 ordinal: 0x13
} _ALPC_COMPLETION_LIST;

// 0x1a0 bytes (sizeof)
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
  struct _LIST_ENTRY MainQueue;                   // offset: 0x88 ordinal: 0x8
  struct _LIST_ENTRY PendingQueue;                // offset: 0x98 ordinal: 0x9
  struct _LIST_ENTRY LargeMessageQueue;           // offset: 0xa8 ordinal: 0xa
  struct _LIST_ENTRY WaitQueue;                   // offset: 0xb8 ordinal: 0xb
  union {
    struct _KSEMAPHORE *Semaphore; // offset: 0xc8 ordinal: 0xc
    struct _KEVENT *DummyEvent;    // offset: 0xc8 ordinal: 0xd
  };
  struct _ALPC_PORT_ATTRIBUTES PortAttributes;  // offset: 0xd0 ordinal: 0xe
  struct _EX_PUSH_LOCK Lock;                    // offset: 0x118 ordinal: 0xf
  struct _EX_PUSH_LOCK ResourceListLock;        // offset: 0x120 ordinal: 0x10
  struct _LIST_ENTRY ResourceListHead;          // offset: 0x128 ordinal: 0x11
  struct _ALPC_COMPLETION_LIST *CompletionList; // offset: 0x138 ordinal: 0x12
  struct _ALPC_MESSAGE_ZONE *MessageZone;       // offset: 0x140 ordinal: 0x13
  struct _CALLBACK_OBJECT *CallbackObject;      // offset: 0x148 ordinal: 0x14
  VOID *CallbackContext;                        // offset: 0x150 ordinal: 0x15
  struct _LIST_ENTRY CanceledQueue;             // offset: 0x158 ordinal: 0x16
  LONG SequenceNo;                              // offset: 0x168 ordinal: 0x17
  union __anon_1243 u1;                         // offset: 0x16c ordinal: 0x18
  struct _ALPC_PORT *TargetQueuePort;           // offset: 0x170 ordinal: 0x19
  struct _ALPC_PORT *TargetSequencePort;        // offset: 0x178 ordinal: 0x1a
  struct _KALPC_MESSAGE *CachedMessage;         // offset: 0x180 ordinal: 0x1b
  ULONG MainQueueLength;                        // offset: 0x188 ordinal: 0x1c
  ULONG PendingQueueLength;                     // offset: 0x18c ordinal: 0x1d
  ULONG LargeMessageQueueLength;                // offset: 0x190 ordinal: 0x1e
  ULONG CanceledQueueLength;                    // offset: 0x194 ordinal: 0x1f
  ULONG WaitQueueLength;                        // offset: 0x198 ordinal: 0x20
} _ALPC_PORT;

// 0x100 bytes (sizeof)
typedef struct _KALPC_MESSAGE {
  struct _LIST_ENTRY Entry;      // offset: 0x0 ordinal: 0x0
  VOID *ExtensionBuffer;         // offset: 0x10 ordinal: 0x1
  ULONGLONG ExtensionBufferSize; // offset: 0x18 ordinal: 0x2
  union {
    struct _EPROCESS *QuotaProcess; // offset: 0x20 ordinal: 0x3
    VOID *QuotaBlock;               // offset: 0x20 ordinal: 0x4
  };
  LONG SequenceNo;                       // offset: 0x28 ordinal: 0x5
  union __anon_1256 u1;                  // offset: 0x2c ordinal: 0x6
  struct _ALPC_PORT *CancelSequencePort; // offset: 0x30 ordinal: 0x7
  struct _ALPC_PORT *CancelQueuePort;    // offset: 0x38 ordinal: 0x8
  LONG CancelSequenceNo;                 // offset: 0x40 ordinal: 0x9
  struct _LIST_ENTRY CancelListEntry;    // offset: 0x48 ordinal: 0xa
  struct _ETHREAD *WaitingThread;        // offset: 0x58 ordinal: 0xb
  struct _KALPC_RESERVE *Reserve;        // offset: 0x60 ordinal: 0xc
  struct _ALPC_PORT *PortQueue;          // offset: 0x68 ordinal: 0xd
  struct _ALPC_PORT *OwnerPort;          // offset: 0x70 ordinal: 0xe
  struct _KALPC_MESSAGE_ATTRIBUTES
      MessageAttributes; // offset: 0x78 ordinal: 0xf
  VOID *DataUserVa;      // offset: 0xb0 ordinal: 0x10
  VOID *DataSystemVa;    // offset: 0xb8 ordinal: 0x11
  struct _ALPC_COMMUNICATION_INFO
      *CommunicationInfo;            // offset: 0xc0 ordinal: 0x12
  struct _ALPC_PORT *ConnectionPort; // offset: 0xc8 ordinal: 0x13
  struct _ETHREAD *ServerThread;     // offset: 0xd0 ordinal: 0x14
  struct _PORT_MESSAGE PortMessage;  // offset: 0xd8 ordinal: 0x15
} _KALPC_MESSAGE;

// 0x38 bytes (sizeof)
typedef struct _ALPC_DISPATCH_CONTEXT {
  struct _ALPC_PORT *PortObject;  // offset: 0x0 ordinal: 0x0
  struct _KALPC_MESSAGE *Message; // offset: 0x8 ordinal: 0x1
  struct _ALPC_COMMUNICATION_INFO
      *CommunicationInfo;        // offset: 0x10 ordinal: 0x2
  struct _ETHREAD *TargetThread; // offset: 0x18 ordinal: 0x3
  struct _ALPC_PORT *TargetPort; // offset: 0x20 ordinal: 0x4
  ULONG Flags;                   // offset: 0x28 ordinal: 0x5
  USHORT TotalLength;            // offset: 0x2c ordinal: 0x6
  USHORT Type;                   // offset: 0x2e ordinal: 0x7
  USHORT DataInfoOffset;         // offset: 0x30 ordinal: 0x8
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
typedef struct _KALPC_SECTION {
  VOID *SectionObject;                    // offset: 0x0 ordinal: 0x0
  ULONGLONG Size;                         // offset: 0x8 ordinal: 0x1
  struct _ALPC_HANDLE_TABLE *HandleTable; // offset: 0x10 ordinal: 0x2
  VOID *SectionHandle;                    // offset: 0x18 ordinal: 0x3
  struct _EPROCESS *OwnerProcess;         // offset: 0x20 ordinal: 0x4
  struct _ALPC_PORT *OwnerPort;           // offset: 0x28 ordinal: 0x5
  union __anon_1229 u1;                   // offset: 0x30 ordinal: 0x6
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
  union __anon_1289 u1;               // offset: 0x30 ordinal: 0x5
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
  union __anon_1279 u1;                    // offset: 0x48 ordinal: 0x8
  ULONG NumberOfOwnerMessages;             // offset: 0x4c ordinal: 0x9
  struct _LIST_ENTRY ProcessViewListEntry; // offset: 0x50 ordinal: 0xa
} _KALPC_VIEW;

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

// 0x78 bytes (sizeof)
typedef struct _MMVAD {
  union __anon_857 u1;           // offset: 0x0 ordinal: 0x0
  struct _MMVAD *LeftChild;      // offset: 0x8 ordinal: 0x1
  struct _MMVAD *RightChild;     // offset: 0x10 ordinal: 0x2
  ULONGLONG StartingVpn;         // offset: 0x18 ordinal: 0x3
  ULONGLONG EndingVpn;           // offset: 0x20 ordinal: 0x4
  union __anon_860 u;            // offset: 0x28 ordinal: 0x5
  struct _EX_PUSH_LOCK PushLock; // offset: 0x30 ordinal: 0x6
  union __anon_861 u5;           // offset: 0x38 ordinal: 0x7
  union __anon_862 u2;           // offset: 0x40 ordinal: 0x8
  union {
    struct _SUBSECTION *Subsection;        // offset: 0x48 ordinal: 0x9
    struct _MSUBSECTION *MappedSubsection; // offset: 0x48 ordinal: 0xa
  };
  struct _MMPTE *FirstPrototypePte; // offset: 0x50 ordinal: 0xb
  struct _MMPTE *LastContiguousPte; // offset: 0x58 ordinal: 0xc
  struct _LIST_ENTRY ViewLinks;     // offset: 0x60 ordinal: 0xd
  struct _EPROCESS *VadsProcess;    // offset: 0x70 ordinal: 0xe
} _MMVAD;

// 0x8 bytes (sizeof)
typedef union __anon_840 {
  ULONGLONG ImageCommitment;         // offset: 0x0 ordinal: 0x0
  struct _EPROCESS *CreatingProcess; // offset: 0x0 ordinal: 0x1
} __anon_840;

// 0x50 bytes (sizeof)
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
  union __anon_840 u1;              // offset: 0x30 ordinal: 0x8
  union __anon_841 u2;              // offset: 0x38 ordinal: 0x9
  struct _MMPTE *PrototypePte;      // offset: 0x40 ordinal: 0xa
  struct _MMPTE ThePtes[1];         // offset: 0x48 ordinal: 0xb
} _SEGMENT;

// 0x80 bytes (sizeof)
typedef struct _CONTROL_AREA {
  struct _SEGMENT *Segment;            // offset: 0x0 ordinal: 0x0
  struct _LIST_ENTRY DereferenceList;  // offset: 0x8 ordinal: 0x1
  ULONGLONG NumberOfSectionReferences; // offset: 0x18 ordinal: 0x2
  ULONGLONG NumberOfPfnReferences;     // offset: 0x20 ordinal: 0x3
  ULONGLONG NumberOfMappedViews;       // offset: 0x28 ordinal: 0x4
  ULONGLONG NumberOfUserReferences;    // offset: 0x30 ordinal: 0x5
  union __anon_817 u;                  // offset: 0x38 ordinal: 0x6
  ULONG FlushInProgressCount;          // offset: 0x3c ordinal: 0x7
  struct _EX_FAST_REF FilePointer;     // offset: 0x40 ordinal: 0x8
  LONG ControlAreaLock;                // offset: 0x48 ordinal: 0x9
  union {
    ULONG ModifiedWriteCount; // offset: 0x4c ordinal: 0xa
    ULONG StartingFrame;      // offset: 0x4c ordinal: 0xb
  };
  struct _MI_SECTION_CREATION_GATE
      *WaitingForDeletion;     // offset: 0x50 ordinal: 0xc
  union __anon_831 u2;         // offset: 0x58 ordinal: 0xd
  LONGLONG LockedPages;        // offset: 0x68 ordinal: 0xe
  struct _LIST_ENTRY ViewList; // offset: 0x70 ordinal: 0xf
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

// 0x68 bytes (sizeof)
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
  ULONG FirstFreeHandle;                           // offset: 0x48 ordinal: 0xa
  struct _HANDLE_TABLE_ENTRY *LastFreeHandleEntry; // offset: 0x50 ordinal: 0xb
  ULONG HandleCount;                               // offset: 0x58 ordinal: 0xc
  ULONG NextHandleNeedingPool;                     // offset: 0x5c ordinal: 0xd
  ULONG HandleCountHighWatermark;                  // offset: 0x60 ordinal: 0xe
} _HANDLE_TABLE;

typedef UCHAR (*__anon_488)(struct _FILE_OBJECT *, struct _EPROCESS *,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_487)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
                            union _LARGE_INTEGER *, struct _EPROCESS *, ULONG,
                            struct _IO_STATUS_BLOCK *, struct _DEVICE_OBJECT *);

typedef UCHAR (*__anon_486)(struct _FILE_OBJECT *, union _LARGE_INTEGER *,
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

// 0x68 bytes (sizeof)
typedef struct _PNP_DEVICE_COMPLETION_REQUEST {
  struct _LIST_ENTRY ListEntry;            // offset: 0x0 ordinal: 0x0
  struct _DEVICE_NODE *DeviceNode;         // offset: 0x10 ordinal: 0x1
  VOID *Context;                           // offset: 0x18 ordinal: 0x2
  enum _PNP_DEVNODE_STATE CompletionState; // offset: 0x20 ordinal: 0x3
  ULONG IrpPended;                         // offset: 0x24 ordinal: 0x4
  LONG Status;                             // offset: 0x28 ordinal: 0x5
  VOID *Information;                       // offset: 0x30 ordinal: 0x6
  struct _WORK_QUEUE_ITEM WorkItem;        // offset: 0x38 ordinal: 0x7
  struct _DRIVER_OBJECT *FailingDriver;    // offset: 0x58 ordinal: 0x8
  LONG ReferenceCount;                     // offset: 0x60 ordinal: 0x9
} _PNP_DEVICE_COMPLETION_REQUEST;

typedef LONG (*__anon_479)(struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *);

typedef VOID (*__anon_438)(struct _DRIVER_OBJECT *);

// 0x1f80 bytes (sizeof)
typedef struct _MM_SESSION_SPACE {
  LONG ReferenceCount;                            // offset: 0x0 ordinal: 0x0
  union __anon_1678 u;                            // offset: 0x4 ordinal: 0x1
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
  ULONG SessionPoolAllocationFailures[4];         // offset: 0x64 ordinal: 0xe
  struct _LIST_ENTRY ImageList;                   // offset: 0x78 ordinal: 0xf
  ULONG LocaleId;                                 // offset: 0x88 ordinal: 0x10
  ULONG AttachCount;                              // offset: 0x8c ordinal: 0x11
  struct _KGATE AttachGate;                       // offset: 0x90 ordinal: 0x12
  struct _LIST_ENTRY WsListEntry;                 // offset: 0xa8 ordinal: 0x13
  struct _GENERAL_LOOKASIDE Lookaside[21];        // offset: 0xc0 ordinal: 0x14
  struct _MMSESSION Session;                      // offset: 0xb40 ordinal: 0x15
  struct _MM_PAGED_POOL_INFO PagedPoolInfo;       // offset: 0xb98 ordinal: 0x16
  struct _MMSUPPORT Vm;                           // offset: 0xc00 ordinal: 0x17
  struct _MMWSLE *Wsle;                           // offset: 0xc88 ordinal: 0x18
  VOID (*DriverUnload)(struct _DRIVER_OBJECT *);  // offset: 0xc90 ordinal: 0x19
  struct _POOL_DESCRIPTOR PagedPool;              // offset: 0xcc0 ordinal: 0x1a
  struct _MMPTE PageDirectory;               // offset: 0x1e00 ordinal: 0x1b
  struct _KGUARDED_MUTEX SessionVaLock;      // offset: 0x1e08 ordinal: 0x1c
  struct _RTL_BITMAP DynamicVaBitMap;        // offset: 0x1e40 ordinal: 0x1d
  ULONG DynamicVaHint;                       // offset: 0x1e50 ordinal: 0x1e
  struct _MI_SPECIAL_POOL SpecialPool;       // offset: 0x1e58 ordinal: 0x1f
  struct _KGUARDED_MUTEX SessionPteLock;     // offset: 0x1ea0 ordinal: 0x20
  LONG PoolBigEntriesInUse;                  // offset: 0x1ed8 ordinal: 0x21
  ULONG PagedPoolPdeCount;                   // offset: 0x1edc ordinal: 0x22
  ULONG SpecialPoolPdeCount;                 // offset: 0x1ee0 ordinal: 0x23
  ULONG DynamicSessionPdeCount;              // offset: 0x1ee4 ordinal: 0x24
  struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;  // offset: 0x1ee8 ordinal: 0x25
  VOID *PoolTrackTableExpansion;             // offset: 0x1f30 ordinal: 0x26
  ULONGLONG PoolTrackTableExpansionSize;     // offset: 0x1f38 ordinal: 0x27
  VOID *PoolTrackBigPages;                   // offset: 0x1f40 ordinal: 0x28
  ULONGLONG PoolTrackBigPagesSize;           // offset: 0x1f48 ordinal: 0x29
  enum _IO_SESSION_STATE IoState;            // offset: 0x1f50 ordinal: 0x2a
  ULONG IoStateSequence;                     // offset: 0x1f54 ordinal: 0x2b
  struct _KEVENT IoNotificationEvent;        // offset: 0x1f58 ordinal: 0x2c
  struct _PS_CPU_QUOTA_BLOCK *CpuQuotaBlock; // offset: 0x1f70 ordinal: 0x2d
} _MM_SESSION_SPACE;

typedef LONG (*__anon_436)(struct _DRIVER_OBJECT *, struct _UNICODE_STRING *);

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
  union __anon_409 Queue;                // offset: 0x50 ordinal: 0xe
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
typedef struct __anon_871 {
  struct _MDL Mdl;   // offset: 0x0 ordinal: 0x0
  ULONGLONG Page[1]; // offset: 0x30 ordinal: 0x1
} __anon_871;

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
  struct __anon_871 MdlHack;        // offset: 0x30 ordinal: 0x8
} _MI_PAGEFILE_TRACES;

// 0xa0 bytes (sizeof)
typedef struct _MMMOD_WRITER_MDL_ENTRY {
  struct _LIST_ENTRY Links;          // offset: 0x0 ordinal: 0x0
  union __anon_854 u;                // offset: 0x10 ordinal: 0x1
  struct _IRP *Irp;                  // offset: 0x20 ordinal: 0x2
  union __anon_855 u1;               // offset: 0x28 ordinal: 0x3
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

// 0x90 bytes (sizeof)
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
  struct _RTL_BITMAP *EvictStoreBitmap;     // offset: 0x60 ordinal: 0xa
  ULONG BitmapHint;                         // offset: 0x68 ordinal: 0xb
  ULONG LastAllocationSize;                 // offset: 0x6c ordinal: 0xc
  ULONG ToBeEvictedCount;                   // offset: 0x70 ordinal: 0xd
  USHORT PageFileNumber : 4;                // offset: 0x74 ordinal: 0xe
  USHORT BootPartition : 1;                 // offset: 0x74 ordinal: 0xf
  USHORT Spare0 : 11;                       // offset: 0x74 ordinal: 0x10
  USHORT AdriftMdls : 1;                    // offset: 0x76 ordinal: 0x11
  USHORT Spare1 : 15;                       // offset: 0x76 ordinal: 0x12
  VOID *FileHandle;                         // offset: 0x78 ordinal: 0x13
  ULONGLONG Lock;                           // offset: 0x80 ordinal: 0x14
  struct _ETHREAD *LockOwner;               // offset: 0x88 ordinal: 0x15
} _MMPAGING_FILE;

// 0x1818 bytes (sizeof)
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
  UCHAR SpareBytes[24];                       // offset: 0x2d0 ordinal: 0x12
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
  union {
    struct _PROCESSOR_NUMBER
        CurrentIdealProcessor; // offset: 0x1744 ordinal: 0x34
    ULONG IdealProcessorValue; // offset: 0x1744 ordinal: 0x35
    UCHAR ReservedPad0;        // offset: 0x1744 ordinal: 0x36
  };
  UCHAR ReservedPad1;                    // offset: 0x1745 ordinal: 0x37
  UCHAR ReservedPad2;                    // offset: 0x1746 ordinal: 0x38
  UCHAR IdealProcessor;                  // offset: 0x1747 ordinal: 0x39
  ULONG GuaranteedStackBytes;            // offset: 0x1748 ordinal: 0x3a
  VOID *ReservedForPerf;                 // offset: 0x1750 ordinal: 0x3b
  VOID *ReservedForOle;                  // offset: 0x1758 ordinal: 0x3c
  ULONG WaitingOnLoaderLock;             // offset: 0x1760 ordinal: 0x3d
  VOID *SavedPriorityState;              // offset: 0x1768 ordinal: 0x3e
  ULONGLONG SoftPatchPtr1;               // offset: 0x1770 ordinal: 0x3f
  VOID *ThreadPoolData;                  // offset: 0x1778 ordinal: 0x40
  VOID **TlsExpansionSlots;              // offset: 0x1780 ordinal: 0x41
  VOID *DeallocationBStore;              // offset: 0x1788 ordinal: 0x42
  VOID *BStoreLimit;                     // offset: 0x1790 ordinal: 0x43
  ULONG MuiGeneration;                   // offset: 0x1798 ordinal: 0x44
  ULONG IsImpersonating;                 // offset: 0x179c ordinal: 0x45
  VOID *NlsCache;                        // offset: 0x17a0 ordinal: 0x46
  VOID *pShimData;                       // offset: 0x17a8 ordinal: 0x47
  ULONG HeapVirtualAffinity;             // offset: 0x17b0 ordinal: 0x48
  VOID *CurrentTransactionHandle;        // offset: 0x17b8 ordinal: 0x49
  struct _TEB_ACTIVE_FRAME *ActiveFrame; // offset: 0x17c0 ordinal: 0x4a
  VOID *FlsData;                         // offset: 0x17c8 ordinal: 0x4b
  VOID *PreferredLanguages;              // offset: 0x17d0 ordinal: 0x4c
  VOID *UserPrefLanguages;               // offset: 0x17d8 ordinal: 0x4d
  VOID *MergedPrefLanguages;             // offset: 0x17e0 ordinal: 0x4e
  ULONG MuiImpersonation;                // offset: 0x17e8 ordinal: 0x4f
  union {
    USHORT CrossTebFlags;          // offset: 0x17ec ordinal: 0x50
    USHORT SpareCrossTebBits : 16; // offset: 0x17ec ordinal: 0x51
  };
  union {
    USHORT SameTebFlags;      // offset: 0x17ee ordinal: 0x52
    USHORT SafeThunkCall : 1; // offset: 0x17ee ordinal: 0x53
  };
  USHORT InDebugPrint : 1;         // offset: 0x17ee ordinal: 0x54
  USHORT HasFiberData : 1;         // offset: 0x17ee ordinal: 0x55
  USHORT SkipThreadAttach : 1;     // offset: 0x17ee ordinal: 0x56
  USHORT WerInShipAssertCode : 1;  // offset: 0x17ee ordinal: 0x57
  USHORT RanProcessInit : 1;       // offset: 0x17ee ordinal: 0x58
  USHORT ClonedThread : 1;         // offset: 0x17ee ordinal: 0x59
  USHORT SuppressDebugMsg : 1;     // offset: 0x17ee ordinal: 0x5a
  USHORT DisableUserStackWalk : 1; // offset: 0x17ee ordinal: 0x5b
  USHORT RtlExceptionAttached : 1; // offset: 0x17ee ordinal: 0x5c
  USHORT InitialThread : 1;        // offset: 0x17ee ordinal: 0x5d
  USHORT SpareSameTebBits : 5;     // offset: 0x17ee ordinal: 0x5e
  VOID *TxnScopeEnterCallback;     // offset: 0x17f0 ordinal: 0x5f
  VOID *TxnScopeExitCallback;      // offset: 0x17f8 ordinal: 0x60
  VOID *TxnScopeContext;           // offset: 0x1800 ordinal: 0x61
  ULONG LockCount;                 // offset: 0x1808 ordinal: 0x62
  ULONG SpareUlong0;               // offset: 0x180c ordinal: 0x63
  VOID *ResourceRetValue;          // offset: 0x1810 ordinal: 0x64
} _TEB;

// 0x210 bytes (sizeof)
typedef struct _XSTATE_CONFIGURATION {
  ULONGLONG EnabledFeatures;           // offset: 0x0 ordinal: 0x0
  ULONG Size;                          // offset: 0x8 ordinal: 0x1
  ULONG OptimizedSave : 1;             // offset: 0xc ordinal: 0x2
  struct _XSTATE_FEATURE Features[64]; // offset: 0x10 ordinal: 0x3
} _XSTATE_CONFIGURATION;

// 0x4d00 bytes (sizeof)
typedef struct _KPRCB {
  ULONG MxCsr;                             // offset: 0x0 ordinal: 0x0
  UCHAR LegacyNumber;                      // offset: 0x4 ordinal: 0x1
  UCHAR ReservedMustBeZero;                // offset: 0x5 ordinal: 0x2
  UCHAR InterruptRequest;                  // offset: 0x6 ordinal: 0x3
  UCHAR IdleHalt;                          // offset: 0x7 ordinal: 0x4
  struct _KTHREAD *CurrentThread;          // offset: 0x8 ordinal: 0x5
  struct _KTHREAD *NextThread;             // offset: 0x10 ordinal: 0x6
  struct _KTHREAD *IdleThread;             // offset: 0x18 ordinal: 0x7
  UCHAR NestingLevel;                      // offset: 0x20 ordinal: 0x8
  UCHAR PrcbPad00[3];                      // offset: 0x21 ordinal: 0x9
  ULONG Number;                            // offset: 0x24 ordinal: 0xa
  ULONGLONG RspBase;                       // offset: 0x28 ordinal: 0xb
  ULONGLONG PrcbLock;                      // offset: 0x30 ordinal: 0xc
  ULONGLONG PrcbPad01;                     // offset: 0x38 ordinal: 0xd
  struct _KPROCESSOR_STATE ProcessorState; // offset: 0x40 ordinal: 0xe
  CHAR CpuType;                            // offset: 0x5f0 ordinal: 0xf
  CHAR CpuID;                              // offset: 0x5f1 ordinal: 0x10
  union {
    USHORT CpuStep;    // offset: 0x5f2 ordinal: 0x11
    UCHAR CpuStepping; // offset: 0x5f2 ordinal: 0x12
  };
  UCHAR CpuModel;                                // offset: 0x5f3 ordinal: 0x13
  ULONG MHz;                                     // offset: 0x5f4 ordinal: 0x14
  ULONGLONG HalReserved[8];                      // offset: 0x5f8 ordinal: 0x15
  USHORT MinorVersion;                           // offset: 0x638 ordinal: 0x16
  USHORT MajorVersion;                           // offset: 0x63a ordinal: 0x17
  UCHAR BuildType;                               // offset: 0x63c ordinal: 0x18
  UCHAR CpuVendor;                               // offset: 0x63d ordinal: 0x19
  UCHAR CoresPerPhysicalProcessor;               // offset: 0x63e ordinal: 0x1a
  UCHAR LogicalProcessorsPerCore;                // offset: 0x63f ordinal: 0x1b
  ULONG ApicMask;                                // offset: 0x640 ordinal: 0x1c
  ULONG CFlushSize;                              // offset: 0x644 ordinal: 0x1d
  VOID *AcpiReserved;                            // offset: 0x648 ordinal: 0x1e
  ULONG InitialApicId;                           // offset: 0x650 ordinal: 0x1f
  ULONG Stride;                                  // offset: 0x654 ordinal: 0x20
  USHORT Group;                                  // offset: 0x658 ordinal: 0x21
  ULONGLONG GroupSetMember;                      // offset: 0x660 ordinal: 0x22
  UCHAR GroupIndex;                              // offset: 0x668 ordinal: 0x23
  struct _KSPIN_LOCK_QUEUE LockQueue[17];        // offset: 0x670 ordinal: 0x24
  struct _PP_LOOKASIDE_LIST PPLookasideList[16]; // offset: 0x780 ordinal: 0x25
  struct _GENERAL_LOOKASIDE_POOL
      PPNPagedLookasideList[32]; // offset: 0x880 ordinal: 0x26
  struct _GENERAL_LOOKASIDE_POOL
      PPPagedLookasideList[32]; // offset: 0x1480 ordinal: 0x27
  LONG PacketBarrier;           // offset: 0x2080 ordinal: 0x28
  struct _SINGLE_LIST_ENTRY
      DeferredReadyListHead;                 // offset: 0x2088 ordinal: 0x29
  LONG MmPageFaultCount;                     // offset: 0x2090 ordinal: 0x2a
  LONG MmCopyOnWriteCount;                   // offset: 0x2094 ordinal: 0x2b
  LONG MmTransitionCount;                    // offset: 0x2098 ordinal: 0x2c
  LONG MmDemandZeroCount;                    // offset: 0x209c ordinal: 0x2d
  LONG MmPageReadCount;                      // offset: 0x20a0 ordinal: 0x2e
  LONG MmPageReadIoCount;                    // offset: 0x20a4 ordinal: 0x2f
  LONG MmDirtyPagesWriteCount;               // offset: 0x20a8 ordinal: 0x30
  LONG MmDirtyWriteIoCount;                  // offset: 0x20ac ordinal: 0x31
  LONG MmMappedPagesWriteCount;              // offset: 0x20b0 ordinal: 0x32
  LONG MmMappedWriteIoCount;                 // offset: 0x20b4 ordinal: 0x33
  ULONG KeSystemCalls;                       // offset: 0x20b8 ordinal: 0x34
  ULONG KeContextSwitches;                   // offset: 0x20bc ordinal: 0x35
  ULONG CcFastReadNoWait;                    // offset: 0x20c0 ordinal: 0x36
  ULONG CcFastReadWait;                      // offset: 0x20c4 ordinal: 0x37
  ULONG CcFastReadNotPossible;               // offset: 0x20c8 ordinal: 0x38
  ULONG CcCopyReadNoWait;                    // offset: 0x20cc ordinal: 0x39
  ULONG CcCopyReadWait;                      // offset: 0x20d0 ordinal: 0x3a
  ULONG CcCopyReadNoWaitMiss;                // offset: 0x20d4 ordinal: 0x3b
  LONG LookasideIrpFloat;                    // offset: 0x20d8 ordinal: 0x3c
  LONG IoReadOperationCount;                 // offset: 0x20dc ordinal: 0x3d
  LONG IoWriteOperationCount;                // offset: 0x20e0 ordinal: 0x3e
  LONG IoOtherOperationCount;                // offset: 0x20e4 ordinal: 0x3f
  union _LARGE_INTEGER IoReadTransferCount;  // offset: 0x20e8 ordinal: 0x40
  union _LARGE_INTEGER IoWriteTransferCount; // offset: 0x20f0 ordinal: 0x41
  union _LARGE_INTEGER IoOtherTransferCount; // offset: 0x20f8 ordinal: 0x42
  LONG TargetCount;                          // offset: 0x2100 ordinal: 0x43
  ULONG IpiFrozen;                           // offset: 0x2104 ordinal: 0x44
  struct _KDPC_DATA DpcData[2];              // offset: 0x2180 ordinal: 0x45
  VOID *DpcStack;                            // offset: 0x21c0 ordinal: 0x46
  LONG MaximumDpcQueueDepth;                 // offset: 0x21c8 ordinal: 0x47
  ULONG DpcRequestRate;                      // offset: 0x21cc ordinal: 0x48
  ULONG MinimumDpcRate;                      // offset: 0x21d0 ordinal: 0x49
  ULONG DpcLastCount;                        // offset: 0x21d4 ordinal: 0x4a
  UCHAR ThreadDpcEnable;                     // offset: 0x21d8 ordinal: 0x4b
  UCHAR QuantumEnd;                          // offset: 0x21d9 ordinal: 0x4c
  UCHAR DpcRoutineActive;                    // offset: 0x21da ordinal: 0x4d
  UCHAR IdleSchedule;                        // offset: 0x21db ordinal: 0x4e
  union {
    LONG DpcRequestSummary;  // offset: 0x21dc ordinal: 0x4f
    SHORT DpcRequestSlot[2]; // offset: 0x21dc ordinal: 0x50
    SHORT NormalDpcState;    // offset: 0x21dc ordinal: 0x51
  };
  USHORT DpcThreadActive : 1;      // offset: 0x21de ordinal: 0x52
  SHORT ThreadDpcState;            // offset: 0x21de ordinal: 0x53
  ULONG TimerHand;                 // offset: 0x21e0 ordinal: 0x54
  LONG MasterOffset;               // offset: 0x21e4 ordinal: 0x55
  ULONG LastTick;                  // offset: 0x21e8 ordinal: 0x56
  ULONG UnusedPad;                 // offset: 0x21ec ordinal: 0x57
  ULONGLONG PrcbPad50[2];          // offset: 0x21f0 ordinal: 0x58
  struct _KTIMER_TABLE TimerTable; // offset: 0x2200 ordinal: 0x59
  struct _KGATE DpcGate;           // offset: 0x4400 ordinal: 0x5a
  VOID *PrcbPad52;                 // offset: 0x4418 ordinal: 0x5b
  struct _KDPC CallDpc;            // offset: 0x4420 ordinal: 0x5c
  LONG ClockKeepAlive;             // offset: 0x4460 ordinal: 0x5d
  UCHAR ClockCheckSlot;            // offset: 0x4464 ordinal: 0x5e
  UCHAR ClockPollCycle;            // offset: 0x4465 ordinal: 0x5f
  USHORT NmiActive;                // offset: 0x4466 ordinal: 0x60
  LONG DpcWatchdogPeriod;          // offset: 0x4468 ordinal: 0x61
  LONG DpcWatchdogCount;           // offset: 0x446c ordinal: 0x62
  ULONGLONG TickOffset;            // offset: 0x4470 ordinal: 0x63
  LONG KeSpinLockOrdering;         // offset: 0x4478 ordinal: 0x64
  ULONG PrcbPad70;                 // offset: 0x447c ordinal: 0x65
  struct _LIST_ENTRY WaitListHead; // offset: 0x4480 ordinal: 0x66
  ULONGLONG WaitLock;              // offset: 0x4490 ordinal: 0x67
  ULONG ReadySummary;              // offset: 0x4498 ordinal: 0x68
  ULONG QueueIndex;                // offset: 0x449c ordinal: 0x69
  struct _KDPC TimerExpirationDpc; // offset: 0x44a0 ordinal: 0x6a
  ULONGLONG PrcbPad72[4];          // offset: 0x44e0 ordinal: 0x6b
  struct _LIST_ENTRY
      DispatcherReadyListHead[32];              // offset: 0x4500 ordinal: 0x6c
  ULONG InterruptCount;                         // offset: 0x4700 ordinal: 0x6d
  ULONG KernelTime;                             // offset: 0x4704 ordinal: 0x6e
  ULONG UserTime;                               // offset: 0x4708 ordinal: 0x6f
  ULONG DpcTime;                                // offset: 0x470c ordinal: 0x70
  ULONG InterruptTime;                          // offset: 0x4710 ordinal: 0x71
  ULONG AdjustDpcThreshold;                     // offset: 0x4714 ordinal: 0x72
  UCHAR DebuggerSavedIRQL;                      // offset: 0x4718 ordinal: 0x73
  UCHAR PrcbPad80[7];                           // offset: 0x4719 ordinal: 0x74
  ULONG DpcTimeCount;                           // offset: 0x4720 ordinal: 0x75
  ULONG DpcTimeLimit;                           // offset: 0x4724 ordinal: 0x76
  ULONG PeriodicCount;                          // offset: 0x4728 ordinal: 0x77
  ULONG PeriodicBias;                           // offset: 0x472c ordinal: 0x78
  ULONG AvailableTime;                          // offset: 0x4730 ordinal: 0x79
  ULONG KeExceptionDispatchCount;               // offset: 0x4734 ordinal: 0x7a
  struct _KNODE *ParentNode;                    // offset: 0x4738 ordinal: 0x7b
  ULONGLONG StartCycles;                        // offset: 0x4740 ordinal: 0x7c
  ULONGLONG PrcbPad82[3];                       // offset: 0x4748 ordinal: 0x7d
  LONG MmSpinLockOrdering;                      // offset: 0x4760 ordinal: 0x7e
  ULONG PageColor;                              // offset: 0x4764 ordinal: 0x7f
  ULONG NodeColor;                              // offset: 0x4768 ordinal: 0x80
  ULONG NodeShiftedColor;                       // offset: 0x476c ordinal: 0x81
  ULONG SecondaryColorMask;                     // offset: 0x4770 ordinal: 0x82
  ULONG PrcbPad83;                              // offset: 0x4774 ordinal: 0x83
  ULONGLONG CycleTime;                          // offset: 0x4778 ordinal: 0x84
  ULONG CcFastMdlReadNoWait;                    // offset: 0x4780 ordinal: 0x85
  ULONG CcFastMdlReadWait;                      // offset: 0x4784 ordinal: 0x86
  ULONG CcFastMdlReadNotPossible;               // offset: 0x4788 ordinal: 0x87
  ULONG CcMapDataNoWait;                        // offset: 0x478c ordinal: 0x88
  ULONG CcMapDataWait;                          // offset: 0x4790 ordinal: 0x89
  ULONG CcPinMappedDataCount;                   // offset: 0x4794 ordinal: 0x8a
  ULONG CcPinReadNoWait;                        // offset: 0x4798 ordinal: 0x8b
  ULONG CcPinReadWait;                          // offset: 0x479c ordinal: 0x8c
  ULONG CcMdlReadNoWait;                        // offset: 0x47a0 ordinal: 0x8d
  ULONG CcMdlReadWait;                          // offset: 0x47a4 ordinal: 0x8e
  ULONG CcLazyWriteHotSpots;                    // offset: 0x47a8 ordinal: 0x8f
  ULONG CcLazyWriteIos;                         // offset: 0x47ac ordinal: 0x90
  ULONG CcLazyWritePages;                       // offset: 0x47b0 ordinal: 0x91
  ULONG CcDataFlushes;                          // offset: 0x47b4 ordinal: 0x92
  ULONG CcDataPages;                            // offset: 0x47b8 ordinal: 0x93
  ULONG CcLostDelayedWrites;                    // offset: 0x47bc ordinal: 0x94
  ULONG CcFastReadResourceMiss;                 // offset: 0x47c0 ordinal: 0x95
  ULONG CcCopyReadWaitMiss;                     // offset: 0x47c4 ordinal: 0x96
  ULONG CcFastMdlReadResourceMiss;              // offset: 0x47c8 ordinal: 0x97
  ULONG CcMapDataNoWaitMiss;                    // offset: 0x47cc ordinal: 0x98
  ULONG CcMapDataWaitMiss;                      // offset: 0x47d0 ordinal: 0x99
  ULONG CcPinReadNoWaitMiss;                    // offset: 0x47d4 ordinal: 0x9a
  ULONG CcPinReadWaitMiss;                      // offset: 0x47d8 ordinal: 0x9b
  ULONG CcMdlReadNoWaitMiss;                    // offset: 0x47dc ordinal: 0x9c
  ULONG CcMdlReadWaitMiss;                      // offset: 0x47e0 ordinal: 0x9d
  ULONG CcReadAheadIos;                         // offset: 0x47e4 ordinal: 0x9e
  LONG MmCacheTransitionCount;                  // offset: 0x47e8 ordinal: 0x9f
  LONG MmCacheReadCount;                        // offset: 0x47ec ordinal: 0xa0
  LONG MmCacheIoCount;                          // offset: 0x47f0 ordinal: 0xa1
  ULONG PrcbPad91[1];                           // offset: 0x47f4 ordinal: 0xa2
  ULONGLONG RuntimeAccumulation;                // offset: 0x47f8 ordinal: 0xa3
  struct _PROCESSOR_POWER_STATE PowerState;     // offset: 0x4800 ordinal: 0xa4
  UCHAR PrcbPad92[16];                          // offset: 0x4900 ordinal: 0xa5
  ULONG KeAlignmentFixupCount;                  // offset: 0x4910 ordinal: 0xa6
  struct _KDPC DpcWatchdogDpc;                  // offset: 0x4918 ordinal: 0xa7
  struct _KTIMER DpcWatchdogTimer;              // offset: 0x4958 ordinal: 0xa8
  struct _CACHE_DESCRIPTOR Cache[5];            // offset: 0x4998 ordinal: 0xa9
  ULONG CacheCount;                             // offset: 0x49d4 ordinal: 0xaa
  ULONG CachedCommit;                           // offset: 0x49d8 ordinal: 0xab
  ULONG CachedResidentAvailable;                // offset: 0x49dc ordinal: 0xac
  VOID *HyperPte;                               // offset: 0x49e0 ordinal: 0xad
  VOID *WheaInfo;                               // offset: 0x49e8 ordinal: 0xae
  VOID *EtwSupport;                             // offset: 0x49f0 ordinal: 0xaf
  union _SLIST_HEADER InterruptObjectPool;      // offset: 0x4a00 ordinal: 0xb0
  union _SLIST_HEADER HypercallPageList;        // offset: 0x4a10 ordinal: 0xb1
  VOID *HypercallPageVirtual;                   // offset: 0x4a20 ordinal: 0xb2
  VOID *VirtualApicAssist;                      // offset: 0x4a28 ordinal: 0xb3
  ULONGLONG *StatisticsPage;                    // offset: 0x4a30 ordinal: 0xb4
  VOID *RateControl;                            // offset: 0x4a38 ordinal: 0xb5
  ULONGLONG CacheProcessorMask[5];              // offset: 0x4a40 ordinal: 0xb6
  struct _KAFFINITY_EX PackageProcessorSet;     // offset: 0x4a68 ordinal: 0xb7
  ULONGLONG CoreProcessorSet;                   // offset: 0x4a90 ordinal: 0xb8
  VOID *PebsIndexAddress;                       // offset: 0x4a98 ordinal: 0xb9
  ULONGLONG PrcbPad93[12];                      // offset: 0x4aa0 ordinal: 0xba
  ULONG SpinLockAcquireCount;                   // offset: 0x4b00 ordinal: 0xbb
  ULONG SpinLockContentionCount;                // offset: 0x4b04 ordinal: 0xbc
  ULONG SpinLockSpinCount;                      // offset: 0x4b08 ordinal: 0xbd
  ULONG IpiSendRequestBroadcastCount;           // offset: 0x4b0c ordinal: 0xbe
  ULONG IpiSendRequestRoutineCount;             // offset: 0x4b10 ordinal: 0xbf
  ULONG IpiSendSoftwareInterruptCount;          // offset: 0x4b14 ordinal: 0xc0
  ULONG ExInitializeResourceCount;              // offset: 0x4b18 ordinal: 0xc1
  ULONG ExReInitializeResourceCount;            // offset: 0x4b1c ordinal: 0xc2
  ULONG ExDeleteResourceCount;                  // offset: 0x4b20 ordinal: 0xc3
  ULONG ExecutiveResourceAcquiresCount;         // offset: 0x4b24 ordinal: 0xc4
  ULONG ExecutiveResourceContentionsCount;      // offset: 0x4b28 ordinal: 0xc5
  ULONG ExecutiveResourceReleaseExclusiveCount; // offset: 0x4b2c ordinal: 0xc6
  ULONG ExecutiveResourceReleaseSharedCount;    // offset: 0x4b30 ordinal: 0xc7
  ULONG ExecutiveResourceConvertsCount;         // offset: 0x4b34 ordinal: 0xc8
  ULONG ExAcqResExclusiveAttempts;              // offset: 0x4b38 ordinal: 0xc9
  ULONG ExAcqResExclusiveAcquiresExclusive;     // offset: 0x4b3c ordinal: 0xca
  ULONG ExAcqResExclusiveAcquiresExclusiveRecursive; // offset: 0x4b40 ordinal:
                                                     // 0xcb
  ULONG ExAcqResExclusiveWaits;                // offset: 0x4b44 ordinal: 0xcc
  ULONG ExAcqResExclusiveNotAcquires;          // offset: 0x4b48 ordinal: 0xcd
  ULONG ExAcqResSharedAttempts;                // offset: 0x4b4c ordinal: 0xce
  ULONG ExAcqResSharedAcquiresExclusive;       // offset: 0x4b50 ordinal: 0xcf
  ULONG ExAcqResSharedAcquiresShared;          // offset: 0x4b54 ordinal: 0xd0
  ULONG ExAcqResSharedAcquiresSharedRecursive; // offset: 0x4b58 ordinal: 0xd1
  ULONG ExAcqResSharedWaits;                   // offset: 0x4b5c ordinal: 0xd2
  ULONG ExAcqResSharedNotAcquires;             // offset: 0x4b60 ordinal: 0xd3
  ULONG ExAcqResSharedStarveExclusiveAttempts; // offset: 0x4b64 ordinal: 0xd4
  ULONG ExAcqResSharedStarveExclusiveAcquiresExclusive; // offset: 0x4b68
                                                        // ordinal: 0xd5
  ULONG ExAcqResSharedStarveExclusiveAcquiresShared; // offset: 0x4b6c ordinal:
                                                     // 0xd6
  ULONG ExAcqResSharedStarveExclusiveAcquiresSharedRecursive; // offset: 0x4b70
                                                              // ordinal: 0xd7
  ULONG ExAcqResSharedStarveExclusiveWaits; // offset: 0x4b74 ordinal: 0xd8
  ULONG
  ExAcqResSharedStarveExclusiveNotAcquires;     // offset: 0x4b78 ordinal: 0xd9
  ULONG ExAcqResSharedWaitForExclusiveAttempts; // offset: 0x4b7c ordinal: 0xda
  ULONG ExAcqResSharedWaitForExclusiveAcquiresExclusive; // offset: 0x4b80
                                                         // ordinal: 0xdb
  ULONG ExAcqResSharedWaitForExclusiveAcquiresShared; // offset: 0x4b84 ordinal:
                                                      // 0xdc
  ULONG ExAcqResSharedWaitForExclusiveAcquiresSharedRecursive; // offset: 0x4b88
                                                               // ordinal: 0xdd
  ULONG ExAcqResSharedWaitForExclusiveWaits; // offset: 0x4b8c ordinal: 0xde
  ULONG
  ExAcqResSharedWaitForExclusiveNotAcquires;  // offset: 0x4b90 ordinal: 0xdf
  ULONG ExSetResOwnerPointerExclusive;        // offset: 0x4b94 ordinal: 0xe0
  ULONG ExSetResOwnerPointerSharedNew;        // offset: 0x4b98 ordinal: 0xe1
  ULONG ExSetResOwnerPointerSharedOld;        // offset: 0x4b9c ordinal: 0xe2
  ULONG ExTryToAcqExclusiveAttempts;          // offset: 0x4ba0 ordinal: 0xe3
  ULONG ExTryToAcqExclusiveAcquires;          // offset: 0x4ba4 ordinal: 0xe4
  ULONG ExBoostExclusiveOwner;                // offset: 0x4ba8 ordinal: 0xe5
  ULONG ExBoostSharedOwners;                  // offset: 0x4bac ordinal: 0xe6
  ULONG ExEtwSynchTrackingNotificationsCount; // offset: 0x4bb0 ordinal: 0xe7
  ULONG ExEtwSynchTrackingNotificationsAccountedCount; // offset: 0x4bb4
                                                       // ordinal: 0xe8
  UCHAR VendorString[13];                    // offset: 0x4bb8 ordinal: 0xe9
  UCHAR PrcbPad10[3];                        // offset: 0x4bc5 ordinal: 0xea
  ULONG FeatureBits;                         // offset: 0x4bc8 ordinal: 0xeb
  union _LARGE_INTEGER UpdateSignature;      // offset: 0x4bd0 ordinal: 0xec
  struct _CONTEXT *Context;                  // offset: 0x4bd8 ordinal: 0xed
  ULONG ContextFlags;                        // offset: 0x4be0 ordinal: 0xee
  struct _XSAVE_AREA *ExtendedState;         // offset: 0x4be8 ordinal: 0xef
  struct _REQUEST_MAILBOX *Mailbox;          // offset: 0x4c00 ordinal: 0xf0
  struct _REQUEST_MAILBOX RequestMailbox[1]; // offset: 0x4c80 ordinal: 0xf1
} _KPRCB;

// 0x360 bytes (sizeof)
typedef struct _KTHREAD {
  struct _DISPATCHER_HEADER Header;          // offset: 0x0 ordinal: 0x0
  ULONGLONG CycleTime;                       // offset: 0x18 ordinal: 0x1
  ULONGLONG QuantumTarget;                   // offset: 0x20 ordinal: 0x2
  VOID *InitialStack;                        // offset: 0x28 ordinal: 0x3
  VOID *StackLimit;                          // offset: 0x30 ordinal: 0x4
  VOID *KernelStack;                         // offset: 0x38 ordinal: 0x5
  ULONGLONG ThreadLock;                      // offset: 0x40 ordinal: 0x6
  union _KWAIT_STATUS_REGISTER WaitRegister; // offset: 0x48 ordinal: 0x7
  UCHAR Running;                             // offset: 0x49 ordinal: 0x8
  UCHAR Alerted[2];                          // offset: 0x4a ordinal: 0x9
  ULONG KernelStackResident : 1;             // offset: 0x4c ordinal: 0xa
  ULONG ReadyTransition : 1;                 // offset: 0x4c ordinal: 0xb
  ULONG ProcessReadyQueue : 1;               // offset: 0x4c ordinal: 0xc
  ULONG WaitNext : 1;                        // offset: 0x4c ordinal: 0xd
  ULONG SystemAffinityActive : 1;            // offset: 0x4c ordinal: 0xe
  ULONG Alertable : 1;                       // offset: 0x4c ordinal: 0xf
  ULONG GdiFlushActive : 1;                  // offset: 0x4c ordinal: 0x10
  ULONG UserStackWalkActive : 1;             // offset: 0x4c ordinal: 0x11
  ULONG ApcInterruptRequest : 1;             // offset: 0x4c ordinal: 0x12
  ULONG ForceDeferSchedule : 1;              // offset: 0x4c ordinal: 0x13
  ULONG QuantumEndMigrate : 1;               // offset: 0x4c ordinal: 0x14
  ULONG UmsDirectedSwitchEnable : 1;         // offset: 0x4c ordinal: 0x15
  ULONG TimerActive : 1;                     // offset: 0x4c ordinal: 0x16
  ULONG Reserved : 19;                       // offset: 0x4c ordinal: 0x17
  LONG MiscFlags;                            // offset: 0x4c ordinal: 0x18
  union {
    struct _KAPC_STATE ApcState; // offset: 0x50 ordinal: 0x19
    UCHAR ApcStateFill[43];      // offset: 0x50 ordinal: 0x1a
  };
  CHAR Priority;                      // offset: 0x7b ordinal: 0x1b
  ULONG NextProcessor;                // offset: 0x7c ordinal: 0x1c
  ULONG DeferredProcessor;            // offset: 0x80 ordinal: 0x1d
  ULONGLONG ApcQueueLock;             // offset: 0x88 ordinal: 0x1e
  LONGLONG WaitStatus;                // offset: 0x90 ordinal: 0x1f
  struct _KWAIT_BLOCK *WaitBlockList; // offset: 0x98 ordinal: 0x20
  union {
    struct _LIST_ENTRY WaitListEntry;        // offset: 0xa0 ordinal: 0x21
    struct _SINGLE_LIST_ENTRY SwapListEntry; // offset: 0xa0 ordinal: 0x22
  };
  struct _KQUEUE *Queue;               // offset: 0xb0 ordinal: 0x23
  VOID *Teb;                           // offset: 0xb8 ordinal: 0x24
  struct _KTIMER Timer;                // offset: 0xc0 ordinal: 0x25
  ULONG AutoAlignment : 1;             // offset: 0x100 ordinal: 0x26
  ULONG DisableBoost : 1;              // offset: 0x100 ordinal: 0x27
  ULONG EtwStackTraceApc1Inserted : 1; // offset: 0x100 ordinal: 0x28
  ULONG EtwStackTraceApc2Inserted : 1; // offset: 0x100 ordinal: 0x29
  ULONG CalloutActive : 1;             // offset: 0x100 ordinal: 0x2a
  ULONG ApcQueueable : 1;              // offset: 0x100 ordinal: 0x2b
  ULONG EnableStackSwap : 1;           // offset: 0x100 ordinal: 0x2c
  ULONG GuiThread : 1;                 // offset: 0x100 ordinal: 0x2d
  ULONG UmsPerformingSyscall : 1;      // offset: 0x100 ordinal: 0x2e
  ULONG ReservedFlags : 23;            // offset: 0x100 ordinal: 0x2f
  LONG ThreadFlags;                    // offset: 0x100 ordinal: 0x30
  ULONG Spare0;                        // offset: 0x104 ordinal: 0x31
  union {
    struct _KWAIT_BLOCK WaitBlock[4]; // offset: 0x108 ordinal: 0x32
    UCHAR WaitBlockFill4[44];         // offset: 0x108 ordinal: 0x33
  };
  ULONG ContextSwitches;             // offset: 0x134 ordinal: 0x34
  UCHAR WaitBlockFill5[92];          // offset: 0x108 ordinal: 0x35
  UCHAR State;                       // offset: 0x164 ordinal: 0x36
  CHAR NpxState;                     // offset: 0x165 ordinal: 0x37
  UCHAR WaitIrql;                    // offset: 0x166 ordinal: 0x38
  CHAR WaitMode;                     // offset: 0x167 ordinal: 0x39
  UCHAR WaitBlockFill6[140];         // offset: 0x108 ordinal: 0x3a
  ULONG WaitTime;                    // offset: 0x194 ordinal: 0x3b
  UCHAR WaitBlockFill7[168];         // offset: 0x108 ordinal: 0x3c
  VOID *TebMappedLowVa;              // offset: 0x1b0 ordinal: 0x3d
  struct _UMS_CONTROL_BLOCK *Ucb;    // offset: 0x1b8 ordinal: 0x3e
  UCHAR WaitBlockFill8[188];         // offset: 0x108 ordinal: 0x3f
  SHORT KernelApcDisable;            // offset: 0x1c4 ordinal: 0x40
  SHORT SpecialApcDisable;           // offset: 0x1c6 ordinal: 0x41
  ULONG CombinedApcDisable;          // offset: 0x1c4 ordinal: 0x42
  struct _LIST_ENTRY QueueListEntry; // offset: 0x1c8 ordinal: 0x43
  struct _KTRAP_FRAME *TrapFrame;    // offset: 0x1d8 ordinal: 0x44
  VOID *FirstArgument;               // offset: 0x1e0 ordinal: 0x45
  union {
    VOID *CallbackStack;     // offset: 0x1e8 ordinal: 0x46
    ULONGLONG CallbackDepth; // offset: 0x1e8 ordinal: 0x47
  };
  UCHAR ApcStateIndex; // offset: 0x1f0 ordinal: 0x48
  CHAR BasePriority;   // offset: 0x1f1 ordinal: 0x49
  union {
    CHAR PriorityDecrement;    // offset: 0x1f2 ordinal: 0x4a
    UCHAR ForegroundBoost : 4; // offset: 0x1f2 ordinal: 0x4b
  };
  UCHAR UnusualBoost : 4;                 // offset: 0x1f2 ordinal: 0x4c
  UCHAR Preempted;                        // offset: 0x1f3 ordinal: 0x4d
  UCHAR AdjustReason;                     // offset: 0x1f4 ordinal: 0x4e
  CHAR AdjustIncrement;                   // offset: 0x1f5 ordinal: 0x4f
  CHAR PreviousMode;                      // offset: 0x1f6 ordinal: 0x50
  CHAR Saturation;                        // offset: 0x1f7 ordinal: 0x51
  ULONG SystemCallNumber;                 // offset: 0x1f8 ordinal: 0x52
  ULONG FreezeCount;                      // offset: 0x1fc ordinal: 0x53
  struct _GROUP_AFFINITY UserAffinity;    // offset: 0x200 ordinal: 0x54
  struct _KPROCESS *Process;              // offset: 0x210 ordinal: 0x55
  struct _GROUP_AFFINITY Affinity;        // offset: 0x218 ordinal: 0x56
  ULONG IdealProcessor;                   // offset: 0x228 ordinal: 0x57
  ULONG UserIdealProcessor;               // offset: 0x22c ordinal: 0x58
  struct _KAPC_STATE *ApcStatePointer[2]; // offset: 0x230 ordinal: 0x59
  union {
    struct _KAPC_STATE SavedApcState; // offset: 0x240 ordinal: 0x5a
    UCHAR SavedApcStateFill[43];      // offset: 0x240 ordinal: 0x5b
  };
  UCHAR WaitReason;          // offset: 0x26b ordinal: 0x5c
  CHAR SuspendCount;         // offset: 0x26c ordinal: 0x5d
  CHAR Spare1;               // offset: 0x26d ordinal: 0x5e
  UCHAR CodePatchInProgress; // offset: 0x26e ordinal: 0x5f
  VOID *Win32Thread;         // offset: 0x270 ordinal: 0x60
  VOID *StackBase;           // offset: 0x278 ordinal: 0x61
  union {
    struct _KAPC SuspendApc;  // offset: 0x280 ordinal: 0x62
    UCHAR SuspendApcFill0[1]; // offset: 0x280 ordinal: 0x63
  };
  UCHAR ResourceIndex;       // offset: 0x281 ordinal: 0x64
  UCHAR SuspendApcFill1[3];  // offset: 0x280 ordinal: 0x65
  UCHAR QuantumReset;        // offset: 0x283 ordinal: 0x66
  UCHAR SuspendApcFill2[4];  // offset: 0x280 ordinal: 0x67
  ULONG KernelTime;          // offset: 0x284 ordinal: 0x68
  UCHAR SuspendApcFill3[64]; // offset: 0x280 ordinal: 0x69
  struct _KPRCB *WaitPrcb;   // offset: 0x2c0 ordinal: 0x6a
  UCHAR SuspendApcFill4[72]; // offset: 0x280 ordinal: 0x6b
  VOID *LegoData;            // offset: 0x2c8 ordinal: 0x6c
  UCHAR SuspendApcFill5[83]; // offset: 0x280 ordinal: 0x6d
  UCHAR LargeStack;          // offset: 0x2d3 ordinal: 0x6e
  ULONG UserTime;            // offset: 0x2d4 ordinal: 0x6f
  union {
    struct _KSEMAPHORE SuspendSemaphore; // offset: 0x2d8 ordinal: 0x70
    UCHAR SuspendSemaphorefill[28];      // offset: 0x2d8 ordinal: 0x71
  };
  ULONG SListFaultCount;                    // offset: 0x2f4 ordinal: 0x72
  struct _LIST_ENTRY ThreadListEntry;       // offset: 0x2f8 ordinal: 0x73
  struct _LIST_ENTRY MutantListHead;        // offset: 0x308 ordinal: 0x74
  VOID *SListFaultAddress;                  // offset: 0x318 ordinal: 0x75
  LONGLONG ReadOperationCount;              // offset: 0x320 ordinal: 0x76
  LONGLONG WriteOperationCount;             // offset: 0x328 ordinal: 0x77
  LONGLONG OtherOperationCount;             // offset: 0x330 ordinal: 0x78
  LONGLONG ReadTransferCount;               // offset: 0x338 ordinal: 0x79
  LONGLONG WriteTransferCount;              // offset: 0x340 ordinal: 0x7a
  LONGLONG OtherTransferCount;              // offset: 0x348 ordinal: 0x7b
  struct _KTHREAD_COUNTERS *ThreadCounters; // offset: 0x350 ordinal: 0x7c
  struct _XSTATE_SAVE *XStateSave;          // offset: 0x358 ordinal: 0x7d
} _KTHREAD;

// 0x498 bytes (sizeof)
typedef struct _ETHREAD {
  struct _KTHREAD Tcb;             // offset: 0x0 ordinal: 0x0
  union _LARGE_INTEGER CreateTime; // offset: 0x360 ordinal: 0x1
  union {
    union _LARGE_INTEGER ExitTime;     // offset: 0x368 ordinal: 0x2
    struct _LIST_ENTRY KeyedWaitChain; // offset: 0x368 ordinal: 0x3
  };
  LONG ExitStatus; // offset: 0x378 ordinal: 0x4
  union {
    struct _LIST_ENTRY PostBlockList; // offset: 0x380 ordinal: 0x5
    VOID *ForwardLinkShadow;          // offset: 0x380 ordinal: 0x6
  };
  VOID *StartAddress; // offset: 0x388 ordinal: 0x7
  union {
    struct _TERMINATION_PORT *TerminationPort; // offset: 0x390 ordinal: 0x8
    struct _ETHREAD *ReaperLink;               // offset: 0x390 ordinal: 0x9
    VOID *KeyedWaitValue;                      // offset: 0x390 ordinal: 0xa
  };
  ULONGLONG ActiveTimerListLock;          // offset: 0x398 ordinal: 0xb
  struct _LIST_ENTRY ActiveTimerListHead; // offset: 0x3a0 ordinal: 0xc
  struct _CLIENT_ID Cid;                  // offset: 0x3b0 ordinal: 0xd
  union {
    struct _KSEMAPHORE KeyedWaitSemaphore; // offset: 0x3c0 ordinal: 0xe
    struct _KSEMAPHORE AlpcWaitSemaphore;  // offset: 0x3c0 ordinal: 0xf
  };
  union _PS_CLIENT_SECURITY_CONTEXT
      ClientSecurity;                    // offset: 0x3e0 ordinal: 0x10
  struct _LIST_ENTRY IrpList;            // offset: 0x3e8 ordinal: 0x11
  ULONGLONG TopLevelIrp;                 // offset: 0x3f8 ordinal: 0x12
  struct _DEVICE_OBJECT *DeviceToVerify; // offset: 0x400 ordinal: 0x13
  union _PSP_CPU_QUOTA_APC *CpuQuotaApc; // offset: 0x408 ordinal: 0x14
  VOID *Win32StartAddress;               // offset: 0x410 ordinal: 0x15
  VOID *LegacyPowerObject;               // offset: 0x418 ordinal: 0x16
  struct _LIST_ENTRY ThreadListEntry;    // offset: 0x420 ordinal: 0x17
  struct _EX_RUNDOWN_REF RundownProtect; // offset: 0x430 ordinal: 0x18
  struct _EX_PUSH_LOCK ThreadLock;       // offset: 0x438 ordinal: 0x19
  ULONG ReadClusterSize;                 // offset: 0x440 ordinal: 0x1a
  LONG MmLockOrdering;                   // offset: 0x444 ordinal: 0x1b
  union {
    ULONG CrossThreadFlags; // offset: 0x448 ordinal: 0x1c
    ULONG Terminated : 1;   // offset: 0x448 ordinal: 0x1d
  };
  ULONG ThreadInserted : 1;          // offset: 0x448 ordinal: 0x1e
  ULONG HideFromDebugger : 1;        // offset: 0x448 ordinal: 0x1f
  ULONG ActiveImpersonationInfo : 1; // offset: 0x448 ordinal: 0x20
  ULONG SystemThread : 1;            // offset: 0x448 ordinal: 0x21
  ULONG HardErrorsAreDisabled : 1;   // offset: 0x448 ordinal: 0x22
  ULONG BreakOnTermination : 1;      // offset: 0x448 ordinal: 0x23
  ULONG SkipCreationMsg : 1;         // offset: 0x448 ordinal: 0x24
  ULONG SkipTerminationMsg : 1;      // offset: 0x448 ordinal: 0x25
  ULONG CopyTokenOnOpen : 1;         // offset: 0x448 ordinal: 0x26
  ULONG ThreadIoPriority : 3;        // offset: 0x448 ordinal: 0x27
  ULONG ThreadPagePriority : 3;      // offset: 0x448 ordinal: 0x28
  ULONG RundownFail : 1;             // offset: 0x448 ordinal: 0x29
  ULONG NeedsWorkingSetAging : 1;    // offset: 0x448 ordinal: 0x2a
  union {
    ULONG SameThreadPassiveFlags; // offset: 0x44c ordinal: 0x2b
    ULONG ActiveExWorker : 1;     // offset: 0x44c ordinal: 0x2c
  };
  ULONG ExWorkerCanWaitUser : 1; // offset: 0x44c ordinal: 0x2d
  ULONG MemoryMaker : 1;         // offset: 0x44c ordinal: 0x2e
  ULONG ClonedThread : 1;        // offset: 0x44c ordinal: 0x2f
  ULONG KeyedEventInUse : 1;     // offset: 0x44c ordinal: 0x30
  ULONG RateApcState : 2;        // offset: 0x44c ordinal: 0x31
  ULONG SelfTerminate : 1;       // offset: 0x44c ordinal: 0x32
  union {
    ULONG SameThreadApcFlags; // offset: 0x450 ordinal: 0x33
    UCHAR Spare : 1;          // offset: 0x450 ordinal: 0x34
  };
  UCHAR StartAddressInvalid : 1;                // offset: 0x450 ordinal: 0x35
  UCHAR EtwPageFaultCalloutActive : 1;          // offset: 0x450 ordinal: 0x36
  UCHAR OwnsProcessWorkingSetExclusive : 1;     // offset: 0x450 ordinal: 0x37
  UCHAR OwnsProcessWorkingSetShared : 1;        // offset: 0x450 ordinal: 0x38
  UCHAR OwnsSystemCacheWorkingSetExclusive : 1; // offset: 0x450 ordinal: 0x39
  UCHAR OwnsSystemCacheWorkingSetShared : 1;    // offset: 0x450 ordinal: 0x3a
  UCHAR OwnsSessionWorkingSetExclusive : 1;     // offset: 0x450 ordinal: 0x3b
  UCHAR OwnsSessionWorkingSetShared : 1;        // offset: 0x451 ordinal: 0x3c
  UCHAR OwnsProcessAddressSpaceExclusive : 1;   // offset: 0x451 ordinal: 0x3d
  UCHAR OwnsProcessAddressSpaceShared : 1;      // offset: 0x451 ordinal: 0x3e
  UCHAR SuppressSymbolLoad : 1;                 // offset: 0x451 ordinal: 0x3f
  UCHAR Prefetching : 1;                        // offset: 0x451 ordinal: 0x40
  UCHAR OwnsDynamicMemoryShared : 1;            // offset: 0x451 ordinal: 0x41
  UCHAR OwnsChangeControlAreaExclusive : 1;     // offset: 0x451 ordinal: 0x42
  UCHAR OwnsChangeControlAreaShared : 1;        // offset: 0x451 ordinal: 0x43
  UCHAR OwnsPagedPoolWorkingSetExclusive : 1;   // offset: 0x452 ordinal: 0x44
  UCHAR OwnsPagedPoolWorkingSetShared : 1;      // offset: 0x452 ordinal: 0x45
  UCHAR OwnsSystemPtesWorkingSetExclusive : 1;  // offset: 0x452 ordinal: 0x46
  UCHAR OwnsSystemPtesWorkingSetShared : 1;     // offset: 0x452 ordinal: 0x47
  UCHAR TrimTrigger : 2;                        // offset: 0x452 ordinal: 0x48
  UCHAR Spare1 : 2;                             // offset: 0x452 ordinal: 0x49
  UCHAR PriorityRegionActive;                   // offset: 0x453 ordinal: 0x4a
  UCHAR CacheManagerActive;                     // offset: 0x454 ordinal: 0x4b
  UCHAR DisablePageFaultClustering;             // offset: 0x455 ordinal: 0x4c
  UCHAR ActiveFaultCount;                       // offset: 0x456 ordinal: 0x4d
  UCHAR LockOrderState;                         // offset: 0x457 ordinal: 0x4e
  ULONGLONG AlpcMessageId;                      // offset: 0x458 ordinal: 0x4f
  union {
    VOID *AlpcMessage;             // offset: 0x460 ordinal: 0x50
    ULONG AlpcReceiveAttributeSet; // offset: 0x460 ordinal: 0x51
  };
  struct _LIST_ENTRY AlpcWaitListEntry;         // offset: 0x468 ordinal: 0x52
  ULONG CacheManagerCount;                      // offset: 0x478 ordinal: 0x53
  ULONG IoBoostCount;                           // offset: 0x47c ordinal: 0x54
  ULONGLONG IrpListLock;                        // offset: 0x480 ordinal: 0x55
  VOID *ReservedForSynchTracking;               // offset: 0x488 ordinal: 0x56
  struct _SINGLE_LIST_ENTRY CmCallbackListHead; // offset: 0x490 ordinal: 0x57
} _ETHREAD;

// 0x30 bytes (sizeof)
typedef struct _PROC_PERF_CONSTRAINT {
  struct _KPRCB *Prcb;           // offset: 0x0 ordinal: 0x0
  ULONGLONG PerfContext;         // offset: 0x8 ordinal: 0x1
  ULONG PercentageCap;           // offset: 0x10 ordinal: 0x2
  ULONG ThermalCap;              // offset: 0x14 ordinal: 0x3
  ULONG TargetFrequency;         // offset: 0x18 ordinal: 0x4
  ULONG AcumulatedFullFrequency; // offset: 0x1c ordinal: 0x5
  ULONG AcumulatedZeroFrequency; // offset: 0x20 ordinal: 0x6
  ULONG FrequencyHistoryTotal;   // offset: 0x24 ordinal: 0x7
  ULONG AverageFrequency;        // offset: 0x28 ordinal: 0x8
} _PROC_PERF_CONSTRAINT;

// 0xb8 bytes (sizeof)
typedef struct _PROC_PERF_DOMAIN {
  struct _LIST_ENTRY Link;      // offset: 0x0 ordinal: 0x0
  struct _KPRCB *Master;        // offset: 0x10 ordinal: 0x1
  struct _KAFFINITY_EX Members; // offset: 0x18 ordinal: 0x2
  UCHAR(*FeedbackHandler)
  (ULONG *, ULONGLONG, UCHAR);              // offset: 0x40 ordinal: 0x3
  VOID (*GetFFHThrottleState)(ULONGLONG *); // offset: 0x48 ordinal: 0x4
  VOID (*BoostPolicyHandler)(ULONG);        // offset: 0x50 ordinal: 0x5
  ULONG(*PerfSelectionHandler)
  (ULONGLONG, ULONG, ULONG, ULONG, ULONG, ULONG *,
   ULONG *);                                // offset: 0x58 ordinal: 0x6
  VOID (*PerfHandler)(ULONGLONG, ULONG);    // offset: 0x60 ordinal: 0x7
  struct _PROC_PERF_CONSTRAINT *Processors; // offset: 0x68 ordinal: 0x8
  ULONGLONG PerfChangeTime;                 // offset: 0x70 ordinal: 0x9
  ULONG ProcessorCount;                     // offset: 0x78 ordinal: 0xa
  ULONG PreviousFrequencyMhz;               // offset: 0x7c ordinal: 0xb
  ULONG CurrentFrequencyMhz;                // offset: 0x80 ordinal: 0xc
  ULONG PreviousFrequency;                  // offset: 0x84 ordinal: 0xd
  ULONG CurrentFrequency;                   // offset: 0x88 ordinal: 0xe
  ULONG CurrentPerfContext;                 // offset: 0x8c ordinal: 0xf
  ULONG DesiredFrequency;                   // offset: 0x90 ordinal: 0x10
  ULONG MaxFrequency;                       // offset: 0x94 ordinal: 0x11
  ULONG MinPerfPercent;                     // offset: 0x98 ordinal: 0x12
  ULONG MinThrottlePercent;                 // offset: 0x9c ordinal: 0x13
  ULONG MaxPercent;                         // offset: 0xa0 ordinal: 0x14
  ULONG MinPercent;                         // offset: 0xa4 ordinal: 0x15
  ULONG ConstrainedMaxPercent;              // offset: 0xa8 ordinal: 0x16
  ULONG ConstrainedMinPercent;              // offset: 0xac ordinal: 0x17
  UCHAR Coordination;                       // offset: 0xb0 ordinal: 0x18
  LONG PerfChangeIntervalCount;             // offset: 0xb4 ordinal: 0x19
} _PROC_PERF_DOMAIN;

// 0x4e80 bytes (sizeof)
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

// 0x5f0 bytes (sizeof)
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
  ULONG AltArchitecturePad[1];               // offset: 0x2c4 ordinal: 0x16
  union _LARGE_INTEGER SystemExpirationDate; // offset: 0x2c8 ordinal: 0x17
  ULONG SuiteMask;                           // offset: 0x2d0 ordinal: 0x18
  UCHAR KdDebuggerEnabled;                   // offset: 0x2d4 ordinal: 0x19
  UCHAR NXSupportPolicy;                     // offset: 0x2d5 ordinal: 0x1a
  ULONG ActiveConsoleId;                     // offset: 0x2d8 ordinal: 0x1b
  ULONG DismountCount;                       // offset: 0x2dc ordinal: 0x1c
  ULONG ComPlusPackage;                      // offset: 0x2e0 ordinal: 0x1d
  ULONG LastSystemRITEventTickCount;         // offset: 0x2e4 ordinal: 0x1e
  ULONG NumberOfPhysicalPages;               // offset: 0x2e8 ordinal: 0x1f
  UCHAR SafeBootMode;                        // offset: 0x2ec ordinal: 0x20
  union {
    UCHAR TscQpcData;        // offset: 0x2ed ordinal: 0x21
    UCHAR TscQpcEnabled : 1; // offset: 0x2ed ordinal: 0x22
  };
  UCHAR TscQpcSpareFlag : 1; // offset: 0x2ed ordinal: 0x23
  UCHAR TscQpcShift : 6;     // offset: 0x2ed ordinal: 0x24
  UCHAR TscQpcPad[2];        // offset: 0x2ee ordinal: 0x25
  union {
    ULONG SharedDataFlags;         // offset: 0x2f0 ordinal: 0x26
    ULONG DbgErrorPortPresent : 1; // offset: 0x2f0 ordinal: 0x27
  };
  ULONG DbgElevationEnabled : 1;       // offset: 0x2f0 ordinal: 0x28
  ULONG DbgVirtEnabled : 1;            // offset: 0x2f0 ordinal: 0x29
  ULONG DbgInstallerDetectEnabled : 1; // offset: 0x2f0 ordinal: 0x2a
  ULONG DbgSystemDllRelocated : 1;     // offset: 0x2f0 ordinal: 0x2b
  ULONG DbgDynProcessorEnabled : 1;    // offset: 0x2f0 ordinal: 0x2c
  ULONG DbgSEHValidationEnabled : 1;   // offset: 0x2f0 ordinal: 0x2d
  ULONG SpareBits : 25;                // offset: 0x2f0 ordinal: 0x2e
  ULONG DataFlagsPad[1];               // offset: 0x2f4 ordinal: 0x2f
  ULONGLONG TestRetInstruction;        // offset: 0x2f8 ordinal: 0x30
  ULONG SystemCall;                    // offset: 0x300 ordinal: 0x31
  ULONG SystemCallReturn;              // offset: 0x304 ordinal: 0x32
  ULONGLONG SystemCallPad[3];          // offset: 0x308 ordinal: 0x33
  union {
    struct _KSYSTEM_TIME TickCount;    // offset: 0x320 ordinal: 0x34
    ULONGLONG TickCountQuad;           // offset: 0x320 ordinal: 0x35
    ULONG ReservedTickCountOverlay[3]; // offset: 0x320 ordinal: 0x36
  };
  ULONG TickCountPad[1];                      // offset: 0x32c ordinal: 0x37
  ULONG Cookie;                               // offset: 0x330 ordinal: 0x38
  ULONG CookiePad[1];                         // offset: 0x334 ordinal: 0x39
  LONGLONG ConsoleSessionForegroundProcessId; // offset: 0x338 ordinal: 0x3a
  ULONG Wow64SharedInformation[16];           // offset: 0x340 ordinal: 0x3b
  USHORT UserModeGlobalLogger[16];            // offset: 0x380 ordinal: 0x3c
  ULONG ImageFileExecutionOptions;            // offset: 0x3a0 ordinal: 0x3d
  ULONG LangGenerationCount;                  // offset: 0x3a4 ordinal: 0x3e
  ULONGLONG Reserved5;                        // offset: 0x3a8 ordinal: 0x3f
  ULONGLONG InterruptTimeBias;                // offset: 0x3b0 ordinal: 0x40
  ULONGLONG TscQpcBias;                       // offset: 0x3b8 ordinal: 0x41
  ULONG ActiveProcessorCount;                 // offset: 0x3c0 ordinal: 0x42
  USHORT ActiveGroupCount;                    // offset: 0x3c4 ordinal: 0x43
  USHORT Reserved4;                           // offset: 0x3c6 ordinal: 0x44
  ULONG AitSamplingValue;                     // offset: 0x3c8 ordinal: 0x45
  ULONG AppCompatFlag;                        // offset: 0x3cc ordinal: 0x46
  ULONGLONG SystemDllNativeRelocation;        // offset: 0x3d0 ordinal: 0x47
  ULONG SystemDllWowRelocation;               // offset: 0x3d8 ordinal: 0x48
  ULONG XStatePad[1];                         // offset: 0x3dc ordinal: 0x49
  struct _XSTATE_CONFIGURATION XState;        // offset: 0x3e0 ordinal: 0x4a
} _KUSER_SHARED_DATA;

// 0x10 bytes (sizeof)
typedef struct LIST_ENTRY64 {
  ULONGLONG Flink; // offset: 0x0 ordinal: 0x0
  ULONGLONG Blink; // offset: 0x8 ordinal: 0x1
} LIST_ENTRY64;

// 0x380 bytes (sizeof)
typedef struct _PEB64 {
  UCHAR InheritedAddressSpace;    // offset: 0x0 ordinal: 0x0
  UCHAR ReadImageFileExecOptions; // offset: 0x1 ordinal: 0x1
  UCHAR BeingDebugged;            // offset: 0x2 ordinal: 0x2
  union {
    UCHAR BitField;                // offset: 0x3 ordinal: 0x3
    UCHAR ImageUsesLargePages : 1; // offset: 0x3 ordinal: 0x4
  };
  UCHAR IsProtectedProcess : 1;           // offset: 0x3 ordinal: 0x5
  UCHAR IsLegacyProcess : 1;              // offset: 0x3 ordinal: 0x6
  UCHAR IsImageDynamicallyRelocated : 1;  // offset: 0x3 ordinal: 0x7
  UCHAR SkipPatchingUser32Forwarders : 1; // offset: 0x3 ordinal: 0x8
  UCHAR SpareBits : 3;                    // offset: 0x3 ordinal: 0x9
  ULONGLONG Mutant;                       // offset: 0x8 ordinal: 0xa
  ULONGLONG ImageBaseAddress;             // offset: 0x10 ordinal: 0xb
  ULONGLONG Ldr;                          // offset: 0x18 ordinal: 0xc
  ULONGLONG ProcessParameters;            // offset: 0x20 ordinal: 0xd
  ULONGLONG SubSystemData;                // offset: 0x28 ordinal: 0xe
  ULONGLONG ProcessHeap;                  // offset: 0x30 ordinal: 0xf
  ULONGLONG FastPebLock;                  // offset: 0x38 ordinal: 0x10
  ULONGLONG AtlThunkSListPtr;             // offset: 0x40 ordinal: 0x11
  ULONGLONG IFEOKey;                      // offset: 0x48 ordinal: 0x12
  union {
    ULONG CrossProcessFlags; // offset: 0x50 ordinal: 0x13
    ULONG ProcessInJob : 1;  // offset: 0x50 ordinal: 0x14
  };
  ULONG ProcessInitializing : 1; // offset: 0x50 ordinal: 0x15
  ULONG ProcessUsingVEH : 1;     // offset: 0x50 ordinal: 0x16
  ULONG ProcessUsingVCH : 1;     // offset: 0x50 ordinal: 0x17
  ULONG ProcessUsingFTH : 1;     // offset: 0x50 ordinal: 0x18
  ULONG ReservedBits0 : 27;      // offset: 0x50 ordinal: 0x19
  union {
    ULONGLONG KernelCallbackTable; // offset: 0x58 ordinal: 0x1a
    ULONGLONG UserSharedInfoPtr;   // offset: 0x58 ordinal: 0x1b
  };
  ULONG SystemReserved[1];                      // offset: 0x60 ordinal: 0x1c
  ULONG AtlThunkSListPtr32;                     // offset: 0x64 ordinal: 0x1d
  ULONGLONG ApiSetMap;                          // offset: 0x68 ordinal: 0x1e
  ULONG TlsExpansionCounter;                    // offset: 0x70 ordinal: 0x1f
  ULONGLONG TlsBitmap;                          // offset: 0x78 ordinal: 0x20
  ULONG TlsBitmapBits[2];                       // offset: 0x80 ordinal: 0x21
  ULONGLONG ReadOnlySharedMemoryBase;           // offset: 0x88 ordinal: 0x22
  ULONGLONG HotpatchInformation;                // offset: 0x90 ordinal: 0x23
  ULONGLONG ReadOnlyStaticServerData;           // offset: 0x98 ordinal: 0x24
  ULONGLONG AnsiCodePageData;                   // offset: 0xa0 ordinal: 0x25
  ULONGLONG OemCodePageData;                    // offset: 0xa8 ordinal: 0x26
  ULONGLONG UnicodeCaseTableData;               // offset: 0xb0 ordinal: 0x27
  ULONG NumberOfProcessors;                     // offset: 0xb8 ordinal: 0x28
  ULONG NtGlobalFlag;                           // offset: 0xbc ordinal: 0x29
  union _LARGE_INTEGER CriticalSectionTimeout;  // offset: 0xc0 ordinal: 0x2a
  ULONGLONG HeapSegmentReserve;                 // offset: 0xc8 ordinal: 0x2b
  ULONGLONG HeapSegmentCommit;                  // offset: 0xd0 ordinal: 0x2c
  ULONGLONG HeapDeCommitTotalFreeThreshold;     // offset: 0xd8 ordinal: 0x2d
  ULONGLONG HeapDeCommitFreeBlockThreshold;     // offset: 0xe0 ordinal: 0x2e
  ULONG NumberOfHeaps;                          // offset: 0xe8 ordinal: 0x2f
  ULONG MaximumNumberOfHeaps;                   // offset: 0xec ordinal: 0x30
  ULONGLONG ProcessHeaps;                       // offset: 0xf0 ordinal: 0x31
  ULONGLONG GdiSharedHandleTable;               // offset: 0xf8 ordinal: 0x32
  ULONGLONG ProcessStarterHelper;               // offset: 0x100 ordinal: 0x33
  ULONG GdiDCAttributeList;                     // offset: 0x108 ordinal: 0x34
  ULONGLONG LoaderLock;                         // offset: 0x110 ordinal: 0x35
  ULONG OSMajorVersion;                         // offset: 0x118 ordinal: 0x36
  ULONG OSMinorVersion;                         // offset: 0x11c ordinal: 0x37
  USHORT OSBuildNumber;                         // offset: 0x120 ordinal: 0x38
  USHORT OSCSDVersion;                          // offset: 0x122 ordinal: 0x39
  ULONG OSPlatformId;                           // offset: 0x124 ordinal: 0x3a
  ULONG ImageSubsystem;                         // offset: 0x128 ordinal: 0x3b
  ULONG ImageSubsystemMajorVersion;             // offset: 0x12c ordinal: 0x3c
  ULONG ImageSubsystemMinorVersion;             // offset: 0x130 ordinal: 0x3d
  ULONGLONG ActiveProcessAffinityMask;          // offset: 0x138 ordinal: 0x3e
  ULONG GdiHandleBuffer[60];                    // offset: 0x140 ordinal: 0x3f
  ULONGLONG PostProcessInitRoutine;             // offset: 0x230 ordinal: 0x40
  ULONGLONG TlsExpansionBitmap;                 // offset: 0x238 ordinal: 0x41
  ULONG TlsExpansionBitmapBits[32];             // offset: 0x240 ordinal: 0x42
  ULONG SessionId;                              // offset: 0x2c0 ordinal: 0x43
  union _ULARGE_INTEGER AppCompatFlags;         // offset: 0x2c8 ordinal: 0x44
  union _ULARGE_INTEGER AppCompatFlagsUser;     // offset: 0x2d0 ordinal: 0x45
  ULONGLONG pShimData;                          // offset: 0x2d8 ordinal: 0x46
  ULONGLONG AppCompatInfo;                      // offset: 0x2e0 ordinal: 0x47
  struct _STRING64 CSDVersion;                  // offset: 0x2e8 ordinal: 0x48
  ULONGLONG ActivationContextData;              // offset: 0x2f8 ordinal: 0x49
  ULONGLONG ProcessAssemblyStorageMap;          // offset: 0x300 ordinal: 0x4a
  ULONGLONG SystemDefaultActivationContextData; // offset: 0x308 ordinal: 0x4b
  ULONGLONG SystemAssemblyStorageMap;           // offset: 0x310 ordinal: 0x4c
  ULONGLONG MinimumStackCommit;                 // offset: 0x318 ordinal: 0x4d
  ULONGLONG FlsCallback;                        // offset: 0x320 ordinal: 0x4e
  struct LIST_ENTRY64 FlsListHead;              // offset: 0x328 ordinal: 0x4f
  ULONGLONG FlsBitmap;                          // offset: 0x338 ordinal: 0x50
  ULONG FlsBitmapBits[4];                       // offset: 0x340 ordinal: 0x51
  ULONG FlsHighIndex;                           // offset: 0x350 ordinal: 0x52
  ULONGLONG WerRegistrationData;                // offset: 0x358 ordinal: 0x53
  ULONGLONG WerShipAssertPtr;                   // offset: 0x360 ordinal: 0x54
  ULONGLONG pContextData;                       // offset: 0x368 ordinal: 0x55
  ULONGLONG pImageHeaderHash;                   // offset: 0x370 ordinal: 0x56
  union {
    ULONG TracingFlags;           // offset: 0x378 ordinal: 0x57
    ULONG HeapTracingEnabled : 1; // offset: 0x378 ordinal: 0x58
  };
  ULONG CritSecTracingEnabled : 1; // offset: 0x378 ordinal: 0x59
  ULONG SpareTracingBits : 30;     // offset: 0x378 ordinal: 0x5a
} _PEB64;

// 0x1818 bytes (sizeof)
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
  UCHAR SpareBytes[24];                    // offset: 0x2d0 ordinal: 0x12
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
  union {
    struct _PROCESSOR_NUMBER
        CurrentIdealProcessor; // offset: 0x1744 ordinal: 0x34
    ULONG IdealProcessorValue; // offset: 0x1744 ordinal: 0x35
    UCHAR ReservedPad0;        // offset: 0x1744 ordinal: 0x36
  };
  UCHAR ReservedPad1;                 // offset: 0x1745 ordinal: 0x37
  UCHAR ReservedPad2;                 // offset: 0x1746 ordinal: 0x38
  UCHAR IdealProcessor;               // offset: 0x1747 ordinal: 0x39
  ULONG GuaranteedStackBytes;         // offset: 0x1748 ordinal: 0x3a
  ULONGLONG ReservedForPerf;          // offset: 0x1750 ordinal: 0x3b
  ULONGLONG ReservedForOle;           // offset: 0x1758 ordinal: 0x3c
  ULONG WaitingOnLoaderLock;          // offset: 0x1760 ordinal: 0x3d
  ULONGLONG SavedPriorityState;       // offset: 0x1768 ordinal: 0x3e
  ULONGLONG SoftPatchPtr1;            // offset: 0x1770 ordinal: 0x3f
  ULONGLONG ThreadPoolData;           // offset: 0x1778 ordinal: 0x40
  ULONGLONG TlsExpansionSlots;        // offset: 0x1780 ordinal: 0x41
  ULONGLONG DeallocationBStore;       // offset: 0x1788 ordinal: 0x42
  ULONGLONG BStoreLimit;              // offset: 0x1790 ordinal: 0x43
  ULONG MuiGeneration;                // offset: 0x1798 ordinal: 0x44
  ULONG IsImpersonating;              // offset: 0x179c ordinal: 0x45
  ULONGLONG NlsCache;                 // offset: 0x17a0 ordinal: 0x46
  ULONGLONG pShimData;                // offset: 0x17a8 ordinal: 0x47
  ULONG HeapVirtualAffinity;          // offset: 0x17b0 ordinal: 0x48
  ULONGLONG CurrentTransactionHandle; // offset: 0x17b8 ordinal: 0x49
  ULONGLONG ActiveFrame;              // offset: 0x17c0 ordinal: 0x4a
  ULONGLONG FlsData;                  // offset: 0x17c8 ordinal: 0x4b
  ULONGLONG PreferredLanguages;       // offset: 0x17d0 ordinal: 0x4c
  ULONGLONG UserPrefLanguages;        // offset: 0x17d8 ordinal: 0x4d
  ULONGLONG MergedPrefLanguages;      // offset: 0x17e0 ordinal: 0x4e
  ULONG MuiImpersonation;             // offset: 0x17e8 ordinal: 0x4f
  union {
    USHORT CrossTebFlags;          // offset: 0x17ec ordinal: 0x50
    USHORT SpareCrossTebBits : 16; // offset: 0x17ec ordinal: 0x51
  };
  union {
    USHORT SameTebFlags;      // offset: 0x17ee ordinal: 0x52
    USHORT SafeThunkCall : 1; // offset: 0x17ee ordinal: 0x53
  };
  USHORT InDebugPrint : 1;         // offset: 0x17ee ordinal: 0x54
  USHORT HasFiberData : 1;         // offset: 0x17ee ordinal: 0x55
  USHORT SkipThreadAttach : 1;     // offset: 0x17ee ordinal: 0x56
  USHORT WerInShipAssertCode : 1;  // offset: 0x17ee ordinal: 0x57
  USHORT RanProcessInit : 1;       // offset: 0x17ee ordinal: 0x58
  USHORT ClonedThread : 1;         // offset: 0x17ee ordinal: 0x59
  USHORT SuppressDebugMsg : 1;     // offset: 0x17ee ordinal: 0x5a
  USHORT DisableUserStackWalk : 1; // offset: 0x17ee ordinal: 0x5b
  USHORT RtlExceptionAttached : 1; // offset: 0x17ee ordinal: 0x5c
  USHORT InitialThread : 1;        // offset: 0x17ee ordinal: 0x5d
  USHORT SpareSameTebBits : 5;     // offset: 0x17ee ordinal: 0x5e
  ULONGLONG TxnScopeEnterCallback; // offset: 0x17f0 ordinal: 0x5f
  ULONGLONG TxnScopeExitCallback;  // offset: 0x17f8 ordinal: 0x60
  ULONGLONG TxnScopeContext;       // offset: 0x1800 ordinal: 0x61
  ULONG LockCount;                 // offset: 0x1808 ordinal: 0x62
  ULONG SpareUlong0;               // offset: 0x180c ordinal: 0x63
  ULONGLONG ResourceRetValue;      // offset: 0x1810 ordinal: 0x64
} _TEB64;
