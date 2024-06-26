#include <stdint.h>

// 0x0 (0) bytes
struct _LDRP_LOAD_CONTEXT {};

// 0x0 (0) bytes
struct _VERIFIER_SHARED_EXPORT_THUNK {};

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
struct _ACTIVATION_CONTEXT_DATA {};

// 0x0 (0) bytes
struct _IOMMU_DMA_DOMAIN {};

// 0x0 (0) bytes
struct _ADAPTER_OBJECT {};

// 0x0 (0) bytes
struct _CALLBACK_OBJECT {};

// 0x0 (0) bytes
struct _SEGMENT_HEAP {};

typedef uint8_t UCHAR;

typedef uint64_t ULONGLONG;

typedef void VOID;

// 0x0 (0) bytes
struct _PCW_INSTANCE {};

// 0x0 (0) bytes
struct _PCW_BUFFER {};

// 0x0 (0) bytes
struct _PCW_REGISTRATION {};

// 0x0 (0) bytes
struct _KTMNOTIFICATION_PACKET {};

// 0x0 (0) bytes
struct _MI_ZERO_THREAD_CONTEXT {};

typedef uint16_t USHORT;

typedef uint32_t ULONG;

// 0x4 (4) bytes
struct _MMSECTION_FLAGS {
  ULONG BeingDeleted : 1;                     // offset: 0x0 (0)
  ULONG BeingCreated : 1;                     // offset: 0x0 (0)
  ULONG BeingPurged : 1;                      // offset: 0x0 (0)
  ULONG NoModifiedWriting : 1;                // offset: 0x0 (0)
  ULONG FailAllIo : 1;                        // offset: 0x0 (0)
  ULONG Image : 1;                            // offset: 0x0 (0)
  ULONG Based : 1;                            // offset: 0x0 (0)
  ULONG File : 1;                             // offset: 0x0 (0)
  ULONG AttemptingDelete : 1;                 // offset: 0x0 (0)
  ULONG PrefetchCreated : 1;                  // offset: 0x0 (0)
  ULONG PhysicalMemory : 1;                   // offset: 0x0 (0)
  ULONG ImageControlAreaOnRemovableMedia : 1; // offset: 0x0 (0)
  ULONG Reserve : 1;                          // offset: 0x0 (0)
  ULONG Commit : 1;                           // offset: 0x0 (0)
  ULONG NoChange : 1;                         // offset: 0x0 (0)
  ULONG WasPurged : 1;                        // offset: 0x0 (0)
  ULONG UserReference : 1;                    // offset: 0x0 (0)
  ULONG GlobalMemory : 1;                     // offset: 0x0 (0)
  ULONG DeleteOnClose : 1;                    // offset: 0x0 (0)
  ULONG FilePointerNull : 1;                  // offset: 0x0 (0)
  ULONG PreferredNode : 6;                    // offset: 0x0 (0)
  ULONG GlobalOnlyPerSession : 1;             // offset: 0x0 (0)
  ULONG UserWritable : 1;                     // offset: 0x0 (0)
  ULONG SystemVaAllocated : 1;                // offset: 0x0 (0)
  ULONG PreferredFsCompressionBoundary : 1;   // offset: 0x0 (0)
  ULONG UsingFileExtents : 1;                 // offset: 0x0 (0)
  ULONG PageSize64K : 1;                      // offset: 0x0 (0)
};

// 0x0 (0) bytes
struct _HAL_PMC_COUNTERS {};

// 0x0 (0) bytes
struct _ETW_SOFT_RESTART_CONTEXT {};

// 0x0 (0) bytes
struct _EX_TIMER {};

// 0x0 (0) bytes
struct _ETW_STACK_CACHE {};

// 0x0 (0) bytes
struct _ETW_PERFECT_HASH_FUNCTION {};

// 0x0 (0) bytes
struct _EX_WNF_SUBSCRIPTION {};

// 0x0 (0) bytes
struct _DBGKP_ERROR_PORT {};

// 0x0 (0) bytes
struct _WNF_SCOPE_MAP {};

// 0x0 (0) bytes
struct _CI_NGEN_PATHS {};

// 0x0 (0) bytes
struct _SCSI_REQUEST_BLOCK {};

// 0x0 (0) bytes
struct _JOB_NET_RATE_CONTROL {};

// 0x0 (0) bytes
struct _PSP_STORAGE {};

// 0x0 (0) bytes
struct _JOB_CPU_RATE_CONTROL {};

// 0x0 (0) bytes
struct _JOB_NOTIFICATION_INFORMATION {};

// 0x0 (0) bytes
struct _JOB_ACCESS_STATE {};

// 0x0 (0) bytes
struct _PO_PROCESS_ENERGY_CONTEXT {};

// 0x0 (0) bytes
struct _EPROCESS_QUOTA_BLOCK {};

// 0x0 (0) bytes
struct _PAGEFAULT_HISTORY {};

// 0x0 (0) bytes
struct _DEVICE_NODE_IOMMU_EXTENSION {};

// 0x4 (4) bytes
struct _ARBITER_ADD_RESERVED_PARAMETERS {
  struct _DEVICE_OBJECT *ReserveDevice; // offset: 0x0 (0)
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

typedef uint16_t WCHAR;

// 0xc (12) bytes
struct _RTL_SPLAY_LINKS {
  struct _RTL_SPLAY_LINKS *Parent;     // offset: 0x0 (0)
  struct _RTL_SPLAY_LINKS *LeftChild;  // offset: 0x4 (4)
  struct _RTL_SPLAY_LINKS *RightChild; // offset: 0x8 (8)
};

typedef int8_t CHAR;

// 0x4 (4) bytes
struct _LDRP_CSLIST {
  struct _SINGLE_LIST_ENTRY *Tail; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _SINGLE_LIST_ENTRY {
  struct _SINGLE_LIST_ENTRY *Next; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _EXT_IOMMU_DEVICE_ID_ACPI {
  const CHAR *ObjectName; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _ETW_BUFFER_QUEUE {
  struct _SINGLE_LIST_ENTRY *QueueTail; // offset: 0x0 (0)
  struct _SINGLE_LIST_ENTRY QueueEntry; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _KDPC_LIST {
  struct _SINGLE_LIST_ENTRY ListHead;   // offset: 0x0 (0)
  struct _SINGLE_LIST_ENTRY *LastEntry; // offset: 0x4 (4)
};

// 0x0 (0) bytes
struct _FLS_CALLBACK_INFO {};

// 0x0 (0) bytes
struct _ASSEMBLY_STORAGE_MAP {};

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
struct _TRIAGE_PNP_DEVICE_COMPLETION_REQUEST {
  struct _LIST_ENTRY ListEntry;           // offset: 0x0 (0)
  struct _TRIAGE_DEVICE_NODE *DeviceNode; // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _ARC_DISK_INFORMATION {
  struct _LIST_ENTRY DiskSignatures; // offset: 0x0 (0)
};

// 0xc (12) bytes
struct _DELAY_ACK_FO {
  struct _LIST_ENTRY Links;                // offset: 0x0 (0)
  struct _FILE_OBJECT *OriginalFileObject; // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _TRIAGE_PNP_DEVICE_COMPLETION_QUEUE {
  struct _LIST_ENTRY DispatchedList; // offset: 0x0 (0)
};

// 0x18 (24) bytes
struct _CM_KCB_LAYER_INFO {
  struct _LIST_ENTRY LayerListEntry;     // offset: 0x0 (0)
  struct _CM_KEY_CONTROL_BLOCK *Kcb;     // offset: 0x8 (8)
  struct _CM_KCB_LAYER_INFO *LowerLayer; // offset: 0xc (12)
  struct _LIST_ENTRY UpperLayerListHead; // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _MMWORKING_SET_EXPANSION_HEAD {
  struct _LIST_ENTRY ListHead; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _KWAIT_CHAIN {
  VOID *Head; // offset: 0x0 (0)
};

// 0xc (12) bytes
struct _NLS_DATA_BLOCK {
  VOID *AnsiCodePageData;     // offset: 0x0 (0)
  VOID *OemCodePageData;      // offset: 0x4 (4)
  VOID *UnicodeCaseTableData; // offset: 0x8 (8)
};

// 0xc (12) bytes
struct _HAL_LBR_ENTRY {
  VOID *FromAddress; // offset: 0x0 (0)
  VOID *ToAddress;   // offset: 0x4 (4)
  VOID *Reserved;    // offset: 0x8 (8)
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

// 0x8 (8) bytes
struct _OB_EXTENDED_USER_INFO {
  VOID *Context1; // offset: 0x0 (0)
  VOID *Context2; // offset: 0x4 (4)
};

// 0x4 (4) bytes
struct _ALPC_HANDLE_ENTRY {
  VOID *Object; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _CMSI_PROCESS_TUPLE {
  VOID *ProcessHandle;    // offset: 0x0 (0)
  VOID *ProcessReference; // offset: 0x4 (4)
};

// 0x4 (4) bytes
struct _CMSI_RW_LOCK {
  VOID *Reserved; // offset: 0x0 (0)
};

// 0xc (12) bytes
struct _CMP_VOLUME_MANAGER {
  struct _CMSI_RW_LOCK VolumeContextListLock; // offset: 0x0 (0)
  struct _LIST_ENTRY VolumeContextListHead;   // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _MI_RFG_PROTECTED_STACK {
  VOID *ControlStackBase;               // offset: 0x0 (0)
  struct _MMVAD_SHORT *ControlStackVad; // offset: 0x4 (4)
  VOID *OwnerThread;                    // offset: 0x8 (8)
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
struct _TERMINATION_PORT {
  struct _TERMINATION_PORT *Next; // offset: 0x0 (0)
  VOID *Port;                     // offset: 0x4 (4)
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
  VOID(*TimerRoutine)
  (struct _DEVICE_OBJECT *arg1, VOID *arg2); // offset: 0xc (12)
  VOID *Context;                             // offset: 0x10 (16)
  struct _DEVICE_OBJECT *DeviceObject;       // offset: 0x14 (20)
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
  VOID(*WorkerRoutine)
  (VOID *arg1, VOID *arg2, VOID *arg3, VOID *arg4); // offset: 0xc (12)
};

// 0x24 (36) bytes
struct _FAST_OWNER_ENTRY {
  VOID *Reserved[9]; // offset: 0x0 (0)
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
struct _TP_CALLBACK_INSTANCE {};

// 0x0 (0) bytes
struct _ACTIVATION_CONTEXT {};

// 0x0 (0) bytes
struct _TP_CLEANUP_GROUP {};

// 0x0 (0) bytes
struct _TP_POOL {};

typedef int32_t LONG;

// 0x4 (4) bytes
enum _CM_SHARE_DISPOSITION {

  CmResourceShareUndetermined = 0,
  CmResourceShareDeviceExclusive = 1,
  CmResourceShareDriverExclusive = 2,
  CmResourceShareShared = 3
};

// 0x4 (4) bytes
enum _ETW_HEADER_TYPE {

  EtwHeaderTypeNative = 0,
  EtwHeaderTypeMax = 1
};

// 0x4 (4) bytes
enum _MI_AVAILABLE_PAGE_WAIT_TYPES {

  AvailablePagesWaitLow = 0,
  AvailablePagesWaitHigh = 1,
  AvailablePagesWaitVeryHigh = 2,
  AvailablePagesWaitMaximum = 3
};

// 0x4 (4) bytes
enum _PO_MODERN_SLEEP_ACTION {

  PoModernSleepActionGlobalActivatorsVeto = 0,
  PoModernSleepActionNonBlockingPhases = 1,
  PoModernSleepActionForceIdle = 2,
  PoModernSleepActionMinimalBlockingNotificationClients = 3,
  PoModernSleepActionMax = 4
};

// 0x4 (4) bytes
enum _MI_MIRROR_BITMAP_TYPES {

  MirrorBitmapTypeNormal = 0,
  MirrorBitmapTypeInterlocked = 1,
  MirrorBitmapTypeMaximum = 2
};

// 0x4 (4) bytes
enum JOB_OBJECT_NET_RATE_CONTROL_FLAGS {

  JOB_OBJECT_NET_RATE_CONTROL_ENABLE = 1,
  JOB_OBJECT_NET_RATE_CONTROL_MAX_BANDWIDTH = 2,
  JOB_OBJECT_NET_RATE_CONTROL_DSCP_TAG = 4,
  JOB_OBJECT_NET_RATE_CONTROL_VALID_FLAGS = 7
};

// 0x4 (4) bytes
enum PDC_ACTIVITY_TYPE {

  PdcNetwork = 0,
  PdcSystem = 1,
  PdcTimer = 2,
  PdcAllNetworks = 3,
  PdcAnyNetwork = 4,
  PdcInvalidActivity = 5,
  PdcMaxActivity = 5
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
enum LSA_FOREST_TRUST_RECORD_TYPE {

  ForestTrustTopLevelName = 0,
  ForestTrustTopLevelNameEx = 1,
  ForestTrustDomainInfo = 2,
  ForestTrustRecordTypeLast = 2
};

// 0x4 (4) bytes
enum SLEEPSTUDY_SPM_SCENARIO_CS_EXIT {

  SpmScenarioStopReasonUnspecified = 16,
  SpmScenarioStopReasonCsExit = 17,
  SpmScenarioStopReasonMax = 18
};

// 0x4 (4) bytes
enum PDCCLIENTID {

  PDC_INVALID_CLIENT = 0,
  PDC_PLM_CLIENT = 1,
  PDC_NQM_CLIENT = 2,
  PDC_WNS_CLIENT = 3,
  PDC_DAM_CLIENT = 4,
  PDC_WCM_CLIENT = 5,
  PDC_NCSI_CLIENT = 7,
  PDC_DHCP_CLIENT = 8,
  PDC_TCPIP_CLIENT = 9,
  PDC_WU_CLIENT = 11,
  PDC_GP_CLIENT = 12,
  PDC_NCA_CLIENT = 14,
  PDC_BI_CLIENT = 15,
  PDC_MSCHED_CLIENT = 16,
  PDC_SUSPENDRESUME_CLIENT = 17,
  PDC_INTERNAL_CLIENT = 18,
  PDC_ACTIVATION_TEST_CLIENT = 19,
  PDC_PLM_PHASE_TEST_CLIENT = 20,
  PDC_DAM_PHASE_TEST_CLIENT = 21,
  PDC_LOW_POWER_PHASE_TEST_CLIENT = 22,
  PDC_RESILIENCY_NOTIFICATION_PHASE_TEST_CLIENT = 23,
  PDC_NQM_RESILIENCY_TEST_CLIENT = 24,
  PDC_DAM_RESILIENCY_TEST_CLIENT = 25,
  PDC_DAM_KM_TEST_CLIENT = 26,
  PDC_DAM_UM_TEST_CLIENT = 27,
  PDC_SINGLETON_TEST_CLIENT = 28,
  PDC_NETWORK_SERVICE_TEST_CLIENT = 29,
  PDC_NETWORK_SERVICE2_TEST_CLIENT = 30,
  PDC_SYSTEM_SERVICE_TEST_CLIENT = 31,
  PDC_ACTIV_NOTIF_DAM_RESIL_TEST_CLIENT = 32,
  PDC_ACTIV_NOTIF_NET_RESIL_TEST_CLIENT = 33,
  PDC_SHELL_CLIENT = 34,
  PDC_MAINTENANCE_CLIENT = 35,
  PDC_SYNC_CLIENT = 36,
  PDC_IDM_CLIENT = 37,
  PDC_CORTANA_VOICE_ACTIVATION_CLIENT = 38,
  PDC_TETHERING_CLIENT = 39,
  PDC_AUDIO_CLIENT = 40,
  PDC_LOCK_SCREEN = 41,
  PDC_LREC_CLIENT = 42,
  PDC_WP_BW_CLIENT = 43,
  PDC_WP_MEDIA_STREAMING_CLIENT = 44,
  PDC_WP_MAPS_CLIENT = 46,
  PDC_WP_SYNC_CLIENT = 47,
  PDC_SETTING_SYNC_CLIENT = 48,
  PDC_WP_EDM_CLIENT = 49,
  PDC_WP_WALLET_CLIENT = 50,
  PDC_WP_LOCATION_CLIENT = 51,
  PDC_WP_CM_CLIENT = 53,
  PDC_WP_DCP_CLIENT = 54,
  PDC_WP_WIFIAUTO_CLIENT = 55,
  PDC_BITLOCKER_CLIENT = 56,
  PDC_MDM_CERTINSTALLER_CLIENT = 57,
  PDC_WP_IM_CLIENT = 58,
  PDC_WP_MMS_CLIENT = 59,
  PDC_DEVICEENROLLER_CLIENT = 60,
  PDC_WP_WIFI_SCANNING_CLIENT = 61,
  PDC_WP_OMADM_CLIENT = 62,
  PDC_WP_TELEMETRY_CHECK_CLIENT = 63,
  PDC_WP_DIS_CLIENT = 64,
  PDC_BITS_CLIENT = 65,
  PDC_WP_VOIP_EXECUTION_CLIENT = 66,
  PDC_WP_RESERVED_CLIENT3 = 67,
  PDC_SLEEP_STUDY_CLIENT = 68,
  PDC_WP_AUTOTIMEUPDATE_CLIENT = 69,
  PDC_HYPERV_CLIENT = 70,
  PDC_KM_SIGNAL_CLIENT = 71,
  PDC_UM_SIGNAL_CLIENT = 72,
  PDC_DEVICE_HEALTH_ATTESTATION_CLIENT = 73,
  PDC_XB_SYSTEM_CLIENT = 74,
  PDC_XB_HOST_CLIENT = 75,
  PDC_PRINT_JOB_MANAGER_CLIENT = 76,
  PDC_TELEMETRY_CLIENT = 77,
  PDC_ERROR_REPORTING_CLIENT = 78,
  PDC_XBOX_NTM = 79,
  PDC_CBE_CLIENT = 80,
  PDC_FIND_MY_PHONE_CLIENT = 81,
  PDC_COMMAND_CHANNEL_CLIENT = 82,
  PDC_PPM_PROFILES_CLIENT = 83,
  PDC_WIFI_CALLING_CLIENT = 84,
  PDC_WU_REBOOT_CLIENT = 85,
  PDC_SYSMAIN_CLIENT = 86,
  PDC_XBOX_UPDATE_CLIENT = 87,
  PDC_CHAT_SERVICE_CLIENT = 88,
  PDC_FIND_MY_DEVICE_CLIENT = 89,
  PDC_NOTIFICATION_FORWARDING_AND_ACTION_CLIENT = 90,
  PDC_INSTALL_AGENT_CLIENT = 91,
  PDC_XBOX_WAKE_ON_VOICE = 92,
  PDC_PLM_AUDIO_CLIENT = 93,
  PDC_WP_BCKAUDIO_CLIENT = 94,
  PDC_WAKE_ON_LAN_CLIENT = 95,
  PDC_WP_CLOUD_MESSAGING_CLIENT = 96,
  PDC_DATA_MIGRATION_MANAGER = 97,
  PDC_EVENT_SOUND_MANAGER_CLIENT = 98,
  PDC_WWAN_DORMANCY_HINT_CLIENT = 99,
  PDC_HAM_CLIENT = 100,
  PDC_FILESHARINGSERVER_CLIENT = 101,
  PDC_DIRECTED_DRIPS_TASK_CLIENT = 102,
  PDC_DIRECTED_DRIPS_LPE_CLIENT = 103,
  PDC_DIRECTED_DRIPS_PLM_CLIENT = 104,
  PDC_HTTPSDATASOURCE_CLIENT = 105,
  PDC_TERMINALSERVER_CONNECTION_CLIENT = 106,
  PDC_TERMINALSERVER_SESSION_CLIENT = 107,
  PDC_ANYNETWORK_RESILIENCY_CLIENT = 108,
  PDC_DXG_ACTIVATION_CLIENT = 109,
  PDC_XBOX_NUI_CLIENT = 110,
  PDC_NUMBER_OF_CLIENTS = 111
};

// 0x4 (4) bytes
enum _PROCESS_TERMINATE_REQUEST_REASON {

  ProcessTerminateRequestReasonNone = 0,
  ProcessTerminateCommitFail = 1,
  ProcessTerminateWriteToExecuteMemory = 2,
  ProcessTerminateAttachedWriteToExecuteMemory = 3,
  ProcessTerminateRequestReasonMax = 4
};

// 0x4 (4) bytes
enum _ConnectionResourceConsumerDesc {

  ConnectionResourceConsumerDescIsUndefined = 0,
  ConnectionResourceConsumerDescIsDevice = 1,
  ConnectionResourceConsumerDescIsOpregion = 2,
  ConnectionResourceConsumerDescMax = 3
};

// 0x4 (4) bytes
enum _MI_VAD_ALLOCATION_CELL_TYPE {

  MiVadBottomUp = 0,
  MiVadStackPebTeb = 1,
  MiVadAllocationCellMaximum = 2
};

// 0x4 (4) bytes
enum _PPM_PERF_QOS_DISABLE_REASON {

  PpmPerfQosDisableInternal = 0,
  PpmPerfQosDisableNoProfile = 1,
  PpmPerfQosDisableNoPolicy = 2,
  PpmPerfQosDisableInsufficientPolicy = 3,
  PpmPerfQosDisableMaxOverride = 4,
  PpmPerfQosDisableLowLatency = 5,
  PpmPerfQosDisableSmtScheduler = 6,
  PpmPerfQosDisableNoHardwareSupport = 7,
  PpmPerfQosDisableGroupPolicy = 8,
  PpmPerfQosDisableMax = 9
};

// 0x4 (4) bytes
enum PDC_RESOURCE {

  PdcResourceNone = 0,
  PdcResourceSystemForeground = 1,
  PdcResourceUniversalApplications = 2,
  PdcResourceWin32 = 3,
  PdcResourceNetwork = 4,
  PdcResourceSystemBackground = 5,
  PdcResourceMax = 5
};

// 0x4 (4) bytes
enum _HV_EXT_EPF_MODE {

  HvExtEpfModeMin = 0,
  HvExtEpfModeNt = 0,
  HvExtEpfModeMax = 1
};

// 0x4 (4) bytes
enum _MI_CROSS_PARTITION_CHARGE_TYPE {

  MiCrossPartitionSectionResAvailCharge = 0,
  MiCrossPartitionSectionCommitCharge = 1,
  MiCrossPartitionPageCombineResAvailCharge = 2,
  MiCrossPartitionPageCombineCommitCharge = 3,
  MiCrossPartitionLargePageResAvailCharge = 4,
  MiCrossPartitionLargePageCommitCharge = 5,
  MiCrossPartitionPageCloneResAvailCharge = 6,
  MiCrossPartitionMaximumCharge = 7
};

// 0x4 (4) bytes
enum _PERFINFO_MM_STAT {

  PerfInfoMMStatNotUsed = 0,
  PerfInfoMMStatAggregatePageCombine = 1,
  PerfInfoMMStatIterationPageCombine = 2,
  PerfInfoMMStatMax = 3
};

// 0x4 (4) bytes
enum _MI_PARTITION_THREAD {

  MiZeroPageThreadSlot = 0,
  MiPartitionWorkingSetManagerSlot = 1,
  MiDereferenceSegmentThreadSlot = 2,
  MiModifiedPageWriterSlot = 3,
  MiMappedPageWriterSlot = 4,
  MiNumberOfPartitionThreads = 5
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
enum _MI_IO_PFN_TYPE {

  MiIoPfnProbes = 0,
  MiIoPfnMaps = 1,
  MiIoPfnUnmapped = 2,
  MiMaximumIoPfnType = 3
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
  TlgOutUTF8 = 35,
  TlgOutPKCS7_WITH_TYPE_INFO = 36,
  TlgOutCODE_POINTER = 37,
  _TlgOutMax = 38,
  _TlgOutChain = 128,
  _TlgOutTypeMask = 127
};

// 0x4 (4) bytes
enum _ADD_DRIVER_STAGE {

  ClassConfigFilters = 0,
  LowerDeviceFilters = 1,
  LowerClassFilters = 2,
  DeviceService = 3,
  UpperDeviceFilters = 4,
  UpperClassFilters = 5,
  MaximumAddStage = 6
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
enum _MI_VAD_64K_TYPES {

  MiVad64KPrivate = 0,
  MiVad64KShared = 1,
  MiVad64KTypes = 2
};

// 0x4 (4) bytes
enum _PO_CS_DEVICE_NOTIFICATION_TYPE {

  PoCsDeviceNotificationStorage = 0,
  PoCsDeviceNotificationWiFi = 1,
  PoCsDeviceNotificationMbn = 2,
  PoCsDeviceNotificationAudio = 3,
  PoCsDeviceNotificationEthernet = 4,
  PoCsDeviceNotificationMaximum = 5
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
enum _MI_SUBVAD_LISTS {

  MiSubVadPebTebAny = 0,
  MiSubVadRfg = 1,
  MiSubVadMaximum = 2
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
enum _ETW_GUID_TYPE {

  EtwTraceGuidType = 0,
  EtwNotificationGuidType = 1,
  EtwGroupGuidType = 2,
  EtwGuidTypeMax = 3
};

// 0x4 (4) bytes
enum _MI_KSTACK_TYPE {

  MiRegularKstack = 0,
  MiShortLivedKstack = 1,
  MiMaximumKstack = 2
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
  SharedNtdll32RtlpFreezeTimeBias = 8,
  Wow64SharedPageEntriesCount = 9
};

// 0x4 (4) bytes
enum _PO_HIBER_FORCE_DISABLE_REASON {

  PoHiberForceDisableReasonPolicy = 0,
  PoHiberForceDisableReasonGuardedHost = 1,
  PoHiberForceDisableReasonMax = 2
};

// 0x4 (4) bytes
enum _SYSTEM_PROCESS_CLASSIFICATION {

  SystemProcessClassificationNormal = 0,
  SystemProcessClassificationSystem = 1,
  SystemProcessClassificationSecureSystem = 2,
  SystemProcessClassificationMemCompression = 3,
  SystemProcessClassificationRegistry = 4,
  SystemProcessClassificationMaximum = 5
};

// 0x4 (4) bytes
enum _MI_NODE_NONPAGED_POOL_BITMAP {

  NonPagedPoolLargePdeNx = 0,
  NonPagedPoolSmallPde = 1,
  NonPagedPoolPerPage = 2
};

// 0x4 (4) bytes
enum _MI_DYNAMICBASE_BITMAP {

  DynamicBaseBitMap32 = 0,
  LastDynamicBaseBitMap = 1
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
enum _MI_SHARED_USER_PAGE_TYPES {

  MiSharedUserPageKernel = 0,
  MiSharedUserPageHypervisor = 1,
  MiSharedUserPageMaximum = 2
};

// 0x4 (4) bytes
enum _MEMORY_CACHING_TYPE_ORIG {

  MmFrameBufferCached = 2
};

// 0x4 (4) bytes
enum _KPROCESS_PPM_POLICY {

  ProcessPpmDefault = 0,
  ProcessPpmThrottle = 1,
  ProcessPpmSemiThrottle = 2,
  ProcessPpmNoThrottle = 3,
  ProcessPpmWindowMinimized = 4,
  ProcessPpmWindowOccluded = 5,
  ProcessPpmWindowVisible = 6,
  ProcessPpmWindowInFocus = 7,
  MaxProcessPpmPolicy = 8
};

// 0x4 (4) bytes
enum _KTHREAD_PPM_POLICY {

  ThreadPpmDefault = 0,
  ThreadPpmThrottle = 1,
  ThreadPpmSemiThrottle = 2,
  ThreadPpmNoThrottle = 3,
  MaxThreadPpmPolicy = 4
};

// 0x4 (4) bytes
enum _MODE {

  KernelMode = 0,
  UserMode = 1,
  MaximumMode = 2
};

// 0x4 (4) bytes
enum _ETW_STRING_TOKEN_TYPE {

  ETW_STRING_TOKEN_EXE = 0,
  ETW_STRING_TOKEN_PACKAGE_ID = 1,
  ETW_STRING_TOKEN_PKG_APP_ID = 2,
  ETW_STRING_TOKEN_MAX_COUNT = 3
};

// 0x4 (4) bytes
enum _WORKING_SET_TYPE {

  WorkingSetTypeUser = 0,
  WorkingSetTypeSession = 1,
  WorkingSetTypeSystemTypes = 2,
  WorkingSetTypeSystemCache = 2,
  WorkingSetTypePagedPool = 3,
  WorkingSetTypeSystemViews = 4,
  WorkingSetTypePagableMaximum = 4,
  WorkingSetTypeSystemPtes = 5,
  WorkingSetTypeKernelStacks = 6,
  WorkingSetTypeNonPagedPool = 7,
  WorkingSetTypeMaximum = 8
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
  PsProtectedSignerWinSystem = 7,
  PsProtectedSignerApp = 8,
  PsProtectedSignerMax = 9
};

// 0x4 (4) bytes
enum _MI_MEMORY_HIGHLOW {

  MiMemoryHigh = 0,
  MiMemoryLow = 1,
  MiMemoryHighLow = 2
};

// 0x4 (4) bytes
enum _PERFINFO_KERNELMEMORY_USAGE_TYPE {

  PerfInfoMemUsagePfnMetadata = 0,
  PerfInfoMemUsageMax = 1
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
enum _PROCESS_VA_TYPE {

  ProcessVAImage = 0,
  ProcessVASection = 1,
  ProcessVAPrivate = 2,
  ProcessVAMax = 3
};

// 0x4 (4) bytes
enum _MI_CFG_BITMAP_TYPE {

  CfgBitMapNative = 0,
  CfgBitMapMax = 1
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
enum _MI_WORKING_SET_TYPE {

  MiWorkingSetTypeSystemCache = 0,
  MiWorkingSetTypeSystemViews = 1,
  MiWorkingSetTypePartitionMaximum = 1,
  MiWorkingSetTypePagedPool = 2,
  MiWorkingSetTypePagableMaximum = 2,
  MiWorkingSetTypeSystemPtes = 3,
  MiWorkingSetTypeKernelStacks = 4,
  MiWorkingSetTypeNonPagedPool = 5,
  MiWorkingSetTypeMaximum = 6
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
enum _MI_ENCLAVE_TYPE {

  MiEnclaveNone = 0,
  MiEnclaveHardware = 1,
  MiEnclaveVsm = 2,
  MiEnclaveMax = 3
};

// 0x4 (4) bytes
enum _ETW_PERFECT_HASH_FUNCTION_TYPE {

  ETW_PHF_EVENT_ID = 0,
  ETW_PHF_STACK_WALK = 1,
  ETW_PHF_MAX_COUNT = 2
};

// 0x4 (4) bytes
enum _KTHREAD_TAG {

  KThreadTagNone = 0,
  KThreadTagMediaBuffering = 1,
  KThreadTagMax = 2
};

// 0x4 (4) bytes
enum _MM_POOL_PRIORITIES {

  MmHighPriority = 0,
  MmNormalPriority = 1,
  MmLowPriority = 2,
  MmMaximumPoolPriority = 3
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
enum _KHETERO_RUNNING_TYPE {

  KHeteroShortRunning = 0,
  KHeteroLongRunning = 1,
  KHeteroRunningTypeMax = 2
};

// 0x4 (4) bytes
enum _RTL_MEMORY_TYPE {

  MemoryTypePaged = 0,
  MemoryTypeNonPaged = 1,
  MemoryTypeLargePage = 2,
  MemoryTypeHugePage = 3,
  MemoryTypeMax = 4
};

// 0x4 (4) bytes
enum _PS_WAKE_REASON {

  PsWakeReasonUser = 0,
  PsWakeReasonExecutionRequired = 1,
  PsWakeReasonKernel = 2,
  PsWakeReasonInstrumentation = 3,
  PsWakeReasonPreserveProcess = 4,
  PsWakeReasonActivityReference = 5,
  PsWakeReasonWorkOnBehalf = 6,
  PsMaxWakeReasons = 7
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
  TlgInINTPTR = 7,
  TlgInUINTPTR = 8,
  TlgInPOINTER = 20,
  _TlgInCcount = 32,
  TlgInVcount = 64,
  _TlgInChain = 128,
  _TlgInCustom = 96,
  _TlgInTypeMask = 31,
  _TlgInCountMask = 96,
  _TlgInFlagMask = 224
};

// 0x4 (4) bytes
enum _POP_SLEEP_CHECKPOINT_STATUS {

  PopSleepCheckpointStatusDisabled = 0,
  PopSleepCheckpointStatusEnabledDueToDirtyShutdown = 1,
  PopSleepCheckpointStatusEnabledManually = 4,
  PopSleepCheckpointStatusEnabledMax = 7,
  PopSleepCheckpointStatusFailedNotEfiSystem = 8,
  PopSleepCheckpointStatusFailedInsufficientSpace = 9,
  PopSleepCheckpointStatusFailedOtherError = 15,
  PopSleepCheckpointStatusMax = 15
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
enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS {

  JOB_OBJECT_IO_RATE_CONTROL_ENABLE = 1,
  JOB_OBJECT_IO_RATE_CONTROL_STANDALONE_VOLUME = 2,
  JOB_OBJECT_IO_RATE_CONTROL_FORCE_UNIT_ACCESS_ALL = 4,
  JOB_OBJECT_IO_RATE_CONTROL_FORCE_UNIT_ACCESS_ON_SOFT_CAP = 8,
  JOB_OBJECT_IO_RATE_CONTROL_VALID_FLAGS = 15
};

// 0x4 (4) bytes
enum _MI_MEMORY_EVENT_TYPES {

  LowPagedPoolEvent = 0,
  HighPagedPoolEvent = 1,
  LowNonPagedPoolEvent = 2,
  HighNonPagedPoolEvent = 3,
  LowAvailablePagesEvent = 4,
  HighAvailablePagesEvent = 5,
  LowCommitEvent = 6,
  HighCommitEvent = 7,
  MaximumCommitEvent = 8,
  BadMemoryDetectedEvent = 9,
  PhysicalMemoryChangeEvent = 10,
  TotalNumberOfMemoryEvents = 11
};

// 0x4 (4) bytes
enum PDC_CS_PHASE {

  PdcNoCsPhase = 0,
  PdcConnectionPhase = 1,
  PdcShellPhase = 2,
  PdcPlmPhase = 3,
  PdcMaintenancePhase = 4,
  PdcDamPhase = 5,
  PdcLowPowerPhase = 6,
  PdcResiliencyNotificationPhase = 7,
  PdcResiliencyPhase = 8,
  PdcInvalidPhase = 9,
  PdcMaxPhase = 9
};

// 0x4 (4) bytes
enum _POP_SLEEP_CHECKPOINT {

  PopSleepCheckpointInvalid = 0,
  PopSleepCheckpointPowerTransitionStart = 1,
  PopSleepCheckpointSuspendAppsBefore = 2,
  PopSleepCheckpointSuspendAppsAfter = 3,
  PopSleepCheckpointSuspendServicesBefore = 4,
  PopSleepCheckpointSuspendServicesAfter = 5,
  PopSleepCheckpointNotifySuperfetchBefore = 6,
  PopSleepCheckpointNotifySuperfetchAfter = 7,
  PopSleepCheckpointNotifyCallbacksBefore = 8,
  PopSleepCheckpointNotifyCallbacksAfter = 9,
  PopSleepCheckpointSleepTransactionCommitted = 10,
  PopSleepCheckpointQueryDriversBefore = 11,
  PopSleepCheckpointQueryDriversAfter = 12,
  PopSleepCheckpointAllocatingHiberContext = 13,
  PopSleepCheckpointSuspendDriversBefore = 14,
  PopSleepCheckpointPreSleepNotification = 16,
  PopSleepCheckpointInterruptsDisabledBegin = 17,
  PopSleepCheckpointInvokeHandlerBefore = 18,
  PopSleepCheckpointSaveHiberContextBegin = 19,
  PopSleepCheckpointInitializeDumpStackFailed = 20,
  PopSleepCheckpointHiberWriteFailed = 21,
  PopSleepCheckpointHiberFileTooSmall = 22,
  PopSleepCheckpointSaveHiberContextFailed = 23,
  PopSleepCheckpointSaveHiberContextEnd = 24,
  PopSleepCheckpointHiberKernelHandoff = 25,
  PopSleepCheckpointInvokeHandlerAfter = 26,
  PopSleepCheckpointReadHiberfileBefore = 27,
  PopSleepCheckpointInitializeDumpStackForReadFailed = 28,
  PopSleepCheckpointHiberReadFailed = 29,
  PopSleepCheckpointChecksumFailure = 30,
  PopSleepCheckpointDecompressionFailed = 31,
  PopSleepCheckpointReadHiberfileAfter = 32,
  PopSleepCheckpointInterruptsDisabledEnd = 33,
  PopSleepCheckpointWakeDriversAfter = 36,
  PopSleepCheckpointResumeAppsBefore = 37,
  PopSleepCheckpointResumeAppsAfter = 38,
  PopSleepCheckpointResumeServicesBefore = 39,
  PopSleepCheckpointResumeServicesAfter = 40,
  PopSleepCheckpointPowerTransitionEnd = 41,
  PopSleepCheckpointMax = 42
};

// 0x4 (4) bytes
enum _MI_ALTERNATE_LOCK_VA_TYPE {

  AlternateLockVaTypeSystemPtes = 0,
  AlternateLockVaTypeNonPagedPool = 1,
  AlternateLockVaTypeUser = 2,
  AlternateLockVaTypeSystem = 3,
  AlternateLockVaTypeMaximum = 4
};

// 0x4 (4) bytes
enum _POWER_INFORMATION_LEVEL_INTERNAL {

  PowerInternalAcpiInterfaceRegister = 0,
  PowerInternalS0LowPowerIdleInfo = 1,
  PowerInternalReapplyBrightnessSettings = 2,
  PowerInternalUserAbsencePrediction = 3,
  PowerInternalUserAbsencePredictionCapability = 4,
  PowerInternalPoProcessorLatencyHint = 5,
  PowerInternalStandbyNetworkRequest = 6,
  PowerInternalDirtyTransitionInformation = 7,
  PowerInternalSetBackgroundTaskState = 8,
  PowerInternalTtmOpenTerminal = 9,
  PowerInformationInternalTtmFirst = 9,
  PowerInternalTtmCreateTerminal = 10,
  PowerInternalTtmEvacuateDevices = 11,
  PowerInternalTtmCreateTerminalEventQueue = 12,
  PowerInternalTtmGetTerminalEvent = 13,
  PowerInternalTtmSetDefaultDeviceAssignment = 14,
  PowerInternalTtmAssignDevice = 15,
  PowerInternalTtmSetDisplayState = 16,
  PowerInternalTtmSetDisplayTimeouts = 17,
  PowerInformationInternalTtmLast = 17,
  PowerInternalBootSessionStandbyActivationInformation = 18,
  PowerInternalSessionPowerState = 19,
  PowerInternalSessionTerminalInput = 20,
  PowerInternalSetWatchdog = 21,
  PowerInternalPhysicalPowerButtonPressInfoAtBoot = 22,
  PowerInternalExternalMonitorConnected = 23,
  PowerInternalHighPrecisionBrightnessSettings = 24,
  PowerInternalWinrtScreenToggle = 25,
  PowerInternalPpmQosDisable = 26,
  PowerInternalTransitionCheckpoint = 27,
  PowerInternalInputControllerState = 28,
  PowerInternalFirmwareResetReason = 29,
  PowerInternalPpmSchedulerQosSupport = 30,
  PowerInternalBootStatGet = 31,
  PowerInternalBootStatSet = 32,
  PowerInternalCallHasNotReturnedWatchdog = 33,
  PowerInternalBootStatCheckIntegrity = 34,
  PowerInternalBootStatRestoreDefaults = 35,
  PowerInternalHostEsStateUpdate = 36,
  PowerInternalGetPowerActionState = 37,
  PowerInternalBootStatUnlock = 38,
  PowerInternalWakeOnVoiceState = 39,
  PowerInternalDeepSleepBlock = 40,
  PowerInternalIsPoFxDevice = 41,
  PowerInformationInternalMaximum = 42
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
enum _MM_POOL_TYPES {

  MmNonPagedPool = 0,
  MmPagedPool = 1,
  MmSessionPagedPool = 2,
  MmMaximumPoolType = 3
};

// 0x4 (4) bytes
enum _RTLP_HP_MEMORY_TYPE {

  HeapMemoryPaged = 0,
  HeapMemoryNonPaged = 1,
  HeapMemoryLargePage = 2,
  HeapMemoryHugePage = 3,
  HeapMemoryTypeMax = 4
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
enum _FILE_OBJECT_EXTENSION_TYPE {

  FoExtTypeTransactionParams = 0,
  FoExtTypeInternal = 1,
  FoExtTypeIosbRange = 2,
  FoExtTypeGeneric = 3,
  FoExtTypeSfio = 4,
  FoExtTypeSymlink = 5,
  FoExtTypeOplockKey = 6,
  FoExtTypeSilo = 7,
  FoExtTypeMemoryPartitionInfo = 8,
  MaxFoExtTypes = 9
};

// 0x4 (4) bytes
enum _OBJECT_INFORMATION_CLASS {

  ObjectBasicInformation = 0,
  ObjectNameInformation = 1,
  ObjectTypeInformation = 2,
  ObjectTypesInformation = 3,
  ObjectHandleFlagInformation = 4,
  ObjectSessionInformation = 5,
  ObjectSessionObjectInformation = 6,
  MaxObjectInfoClass = 7
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
  JobObjectSiloRootDirectory = 37,
  JobObjectServerSiloBasicInformation = 38,
  JobObjectServerSiloUserSharedData = 39,
  JobObjectServerSiloInitialize = 40,
  JobObjectServerSiloRunningState = 41,
  JobObjectIoAttribution = 42,
  JobObjectMemoryPartitionInformation = 43,
  JobObjectContainerTelemetryId = 44,
  JobObjectSiloSystemRoot = 45,
  JobObjectEnergyTrackingState = 46,
  JobObjectThreadImpersonationInformation = 47,
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
  JobObjectReserved15Information = 37,
  JobObjectReserved16Information = 38,
  JobObjectReserved17Information = 39,
  JobObjectReserved18Information = 40,
  JobObjectReserved19Information = 41,
  JobObjectReserved20Information = 42,
  JobObjectReserved21Information = 43,
  JobObjectReserved22Information = 44,
  JobObjectReserved23Information = 45,
  JobObjectReserved24Information = 46,
  JobObjectReserved25Information = 47,
  MaxJobObjectInfoClass = 48
};

// 0x4 (4) bytes
enum _IO_RATE_CONTROL_TYPE {

  IoRateControlTypeCapMin = 0,
  IoRateControlTypeIopsCap = 0,
  IoRateControlTypeBandwidthCap = 1,
  IoRateControlTypeTimePercentCap = 2,
  IoRateControlTypeCapMax = 2,
  IoRateControlTypeReservationMin = 3,
  IoRateControlTypeIopsReservation = 3,
  IoRateControlTypeBandwidthReservation = 4,
  IoRateControlTypeTimePercentReservation = 5,
  IoRateControlTypeReservationMax = 5,
  IoRateControlTypeCriticalReservationMin = 6,
  IoRateControlTypeIopsCriticalReservation = 6,
  IoRateControlTypeBandwidthCriticalReservation = 7,
  IoRateControlTypeTimePercentCriticalReservation = 8,
  IoRateControlTypeCriticalReservationMax = 8,
  IoRateControlTypeSoftCapMin = 9,
  IoRateControlTypeIopsSoftCap = 9,
  IoRateControlTypeBandwidthSoftCap = 10,
  IoRateControlTypeTimePercentSoftCap = 11,
  IoRateControlTypeSoftCapMax = 11,
  IoRateControlTypeLimitExcessNotifyMin = 12,
  IoRateControlTypeIopsLimitExcessNotify = 12,
  IoRateControlTypeBandwidthLimitExcessNotify = 13,
  IoRateControlTypeTimePercentLimitExcessNotify = 14,
  IoRateControlTypeLimitExcessNotifyMax = 14,
  IoRateControlTypeMax = 15
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
  WrPhysicalFault = 39,
  MaximumWaitReason = 40
};

// 0x4 (4) bytes
enum _RTLP_HP_LOCK_TYPE {

  HeapLockPaged = 0,
  HeapLockNonPaged = 1,
  HeapLockTypeMax = 2
};

// 0x4 (4) bytes
enum RTLP_CSPARSE_BITMAP_STATE {

  CommitBitmapInvalid = 0,
  UserBitmapInvalid = 1,
  UserBitmapValid = 2
};

// 0x4 (4) bytes
enum _POWER_REQUEST_TYPE_INTERNAL {

  PowerRequestDisplayRequiredInternal = 0,
  PowerRequestSystemRequiredInternal = 1,
  PowerRequestAwayModeRequiredInternal = 2,
  PowerRequestExecutionRequiredInternal = 3,
  PowerRequestPerfBoostRequiredInternal = 4,
  PowerRequestActiveLockScreenInternal = 5,
  PowerRequestInternalInvalid = 6
};

// 0x4 (4) bytes
enum _POWER_REQUEST_TYPE {

  PowerRequestDisplayRequired = 0,
  PowerRequestSystemRequired = 1,
  PowerRequestAwayModeRequired = 2,
  PowerRequestExecutionRequired = 3
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
  CmpFailurePointAllocateCell = 11,
  CmpFailurePointMarkDirty = 12,
  CmpFailurePointForceMultiLevelMap = 13,
  CmpFailurePointAllocateKcb = 14,
  CmpFailurePointCreateKeyBody = 15,
  CmpFailurePointForcePoolAllocateKcb = 16,
  CmpFailurePointForceFreeKcb = 17,
  CmpFailurePointKeyEnumResumeContextVerification = 18,
  CmpFailurePointKeyEnumForceRetry = 19,
  CmpFailureInjectionPointCount = 20
};

// 0x4 (4) bytes
enum _EVENT_INFO_CLASS {

  EventProviderBinaryTrackInfo = 0,
  EventProviderSetReserved1 = 1,
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
  LockQueueUnusedSpare8 = 8,
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
enum _PS_MITIGATION_OPTION {

  PS_MITIGATION_OPTION_NX = 0,
  PS_MITIGATION_OPTION_SEHOP = 1,
  PS_MITIGATION_OPTION_FORCE_RELOCATE_IMAGES = 2,
  PS_MITIGATION_OPTION_HEAP_TERMINATE = 3,
  PS_MITIGATION_OPTION_BOTTOM_UP_ASLR = 4,
  PS_MITIGATION_OPTION_HIGH_ENTROPY_ASLR = 5,
  PS_MITIGATION_OPTION_STRICT_HANDLE_CHECKS = 6,
  PS_MITIGATION_OPTION_WIN32K_SYSTEM_CALL_DISABLE = 7,
  PS_MITIGATION_OPTION_EXTENSION_POINT_DISABLE = 8,
  PS_MITIGATION_OPTION_PROHIBIT_DYNAMIC_CODE = 9,
  PS_MITIGATION_OPTION_CONTROL_FLOW_GUARD = 10,
  PS_MITIGATION_OPTION_BLOCK_NON_MICROSOFT_BINARIES = 11,
  PS_MITIGATION_OPTION_FONT_DISABLE = 12,
  PS_MITIGATION_OPTION_IMAGE_LOAD_NO_REMOTE = 13,
  PS_MITIGATION_OPTION_IMAGE_LOAD_NO_LOW_LABEL = 14,
  PS_MITIGATION_OPTION_IMAGE_LOAD_PREFER_SYSTEM32 = 15,
  PS_MITIGATION_OPTION_RETURN_FLOW_GUARD = 16,
  PS_MITIGATION_OPTION_LOADER_INTEGRITY_CONTINUITY = 17,
  PS_MITIGATION_OPTION_STRICT_CONTROL_FLOW_GUARD = 18,
  PS_MITIGATION_OPTION_RESTRICT_SET_THREAD_CONTEXT = 19,
  PS_MITIGATION_OPTION_ROP_STACKPIVOT = 20,
  PS_MITIGATION_OPTION_ROP_CALLER_CHECK = 21,
  PS_MITIGATION_OPTION_ROP_SIMEXEC = 22,
  PS_MITIGATION_OPTION_EXPORT_ADDRESS_FILTER = 23,
  PS_MITIGATION_OPTION_EXPORT_ADDRESS_FILTER_PLUS = 24,
  PS_MITIGATION_OPTION_RESTRICT_CHILD_PROCESS_CREATION = 25,
  PS_MITIGATION_OPTION_IMPORT_ADDRESS_FILTER = 26,
  PS_MITIGATION_OPTION_MODULE_TAMPERING_PROTECTION = 27,
  PS_MITIGATION_OPTION_RESTRICT_INDIRECT_BRANCH_PREDICTION = 28
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
  LoadReasonEnclavePrimary = 7,
  LoadReasonEnclaveDependency = 8,
  LoadReasonUnknown = -1
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
  DebuggerStackLimits = 7,
  MaximumStackLimits = 8
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
enum _REQUESTER_TYPE {

  KernelRequester = 0,
  UserProcessRequester = 1,
  UserSharedServiceRequester = 2
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
  EtwNotificationTypeFilteredPrivateLogger = 11,
  EtwNotificationTypeMax = 12
};

// 0x4 (4) bytes
enum _EXQUEUEINDEX {

  ExPoolUntrusted = 0,
  IoPoolUntrusted = 1,
  ExPoolMax = 8
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
  ConfigureDeviceReset = 24,
  ClearDmaGuardProblem = 25
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
  PolicyImmediateDozeS4AdaptiveBudget = 13,
  PolicyImmediateDozeS4AdaptiveReserveNoWake = 14,
  PolicySystemInitiatedShutdown = 15,
  PolicyDeviceMax = 16
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
enum _MI_PFN_CACHE_ATTRIBUTE {

  MiNonCached = 0,
  MiCached = 1,
  MiWriteCombined = 2,
  MiNotMapped = 3
};

// 0x4 (4) bytes
enum _BOOT_ENTROPY_SOURCE_RESULT_CODE {

  BootEntropySourceStructureUninitialized = 0,
  BootEntropySourceDisabledByPolicy = 1,
  BootEntropySourceNotPresent = 2,
  BootEntropySourceError = 3,
  BootEntropySourceSuccess = 4
};

// 0x4 (4) bytes
enum _BOOT_ENTROPY_SOURCE_ID {

  BootEntropySourceNone = 0,
  BootEntropySourceSeedfile = 1,
  BootEntropySourceExternal = 2,
  BootEntropySourceTpm = 3,
  BootEntropySourceRdrand = 4,
  BootEntropySourceTime = 5,
  BootEntropySourceAcpiOem0 = 6,
  BootEntropySourceUefi = 7,
  BootEntropySourceCng = 8,
  BootMaxEntropySources = 8
};

// 0x4 (4) bytes
enum _DOMAIN_CONFIGURATION_ARCH {

  DomainConfigurationArm64 = 0,
  DomainConfigurationInvalid = 1
};

// 0x4 (4) bytes
enum _CONFIGURATION_TYPE {

  ArcSystem = 0,
  CentralProcessor = 1,
  FloatingPointProcessor = 2,
  PrimaryIcache = 3,
  PrimaryDcache = 4,
  SecondaryIcache = 5,
  SecondaryDcache = 6,
  SecondaryCache = 7,
  EisaAdapter = 8,
  TcAdapter = 9,
  ScsiAdapter = 10,
  DtiAdapter = 11,
  MultiFunctionAdapter = 12,
  DiskController = 13,
  TapeController = 14,
  CdromController = 15,
  WormController = 16,
  SerialController = 17,
  NetworkController = 18,
  DisplayController = 19,
  ParallelController = 20,
  PointerController = 21,
  KeyboardController = 22,
  AudioController = 23,
  OtherController = 24,
  DiskPeripheral = 25,
  FloppyDiskPeripheral = 26,
  TapePeripheral = 27,
  ModemPeripheral = 28,
  MonitorPeripheral = 29,
  PrinterPeripheral = 30,
  PointerPeripheral = 31,
  KeyboardPeripheral = 32,
  TerminalPeripheral = 33,
  OtherPeripheral = 34,
  LinePeripheral = 35,
  NetworkPeripheral = 36,
  SystemMemory = 37,
  DockingInformation = 38,
  RealModeIrqRoutingTable = 39,
  RealModePCIEnumeration = 40,
  MaximumType = 41
};

// 0x4 (4) bytes
enum _CONFIGURATION_CLASS {

  SystemClass = 0,
  ProcessorClass = 1,
  CacheClass = 2,
  AdapterClass = 3,
  ControllerClass = 4,
  PeripheralClass = 5,
  MemoryClass = 6,
  MaximumClass = 7
};

// 0x4 (4) bytes
enum _EXT_IOMMU_DEVICE_TYPE {

  EXT_IOMMU_DEVICE_TYPE_INVALID = 0,
  EXT_IOMMU_DEVICE_TYPE_PCI = 1,
  EXT_IOMMU_DEVICE_TYPE_ACPI = 2,
  EXT_IOMMU_DEVICE_TYPE_IOAPIC = 3,
  EXT_IOMMU_DEVICE_TYPE_LOGICAL = 4,
  EXT_IOMMU_DEVICE_TYPE_TEST = 5,
  EXT_IOMMU_DEVICE_TYPE_MAX = 6
};

// 0x4 (4) bytes
enum KD_CALLBACK_ACTION {

  KdConfigureDeviceAndContinue = 0,
  KdSkipDeviceAndContinue = 1,
  KdConfigureDeviceAndStop = 2,
  KdSkipDeviceAndStop = 3
};

// 0x4 (4) bytes
enum _PCI_BUSMASTER_RID_TYPE {

  BusmasterRidFromDeviceRid = 0,
  BusmasterRidFromBridgeRid = 1,
  BusmasterRidFromMultipleBridges = 2
};

// 0x4 (4) bytes
enum KD_NAMESPACE_ENUM {

  KdNameSpacePCI = 0,
  KdNameSpaceACPI = 1,
  KdNameSpaceAny = 2,
  KdNameSpaceNone = 3,
  KdNameSpaceMax = 4
};

// 0x4 (4) bytes
enum _HAL_PROCESSOR_STAT_TYPE {

  HalProcessorStatResidency = 0,
  HalProcessorStatCount = 1,
  HalProcessorStatMax = 2
};

// 0x4 (4) bytes
enum _HAL_CLOCK_TIMER_MODE {

  HalClockTimerModePeriodic = 0,
  HalClockTimerModeOneShot = 1,
  HalClockTimerModeMax = 2
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
  LoaderFirmwareKsr = 34,
  LoaderEnclaveKsr = 35,
  LoaderMaximum = 36
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
enum _WHEA_ERROR_SOURCE_STATE {

  WheaErrSrcStateStopped = 1,
  WheaErrSrcStateStarted = 2
};

// 0x4 (4) bytes
enum _SEP_CACHED_HANDLES_ENTRY_TYPE {

  SepCachedHandlesEntryLowbox = 0,
  SepCachedHandlesEntryBnoIsolation = 1
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
  heap_failure_invalid_allocation_type = 10,
  heap_failure_usage_after_free = 11,
  heap_failure_cross_heap_operation = 12,
  heap_failure_freelists_corruption = 13,
  heap_failure_listentry_corruption = 14,
  heap_failure_lfh_bitmap_mismatch = 15,
  heap_failure_segment_lfh_bitmap_corruption = 16,
  heap_failure_segment_lfh_double_free = 17,
  heap_failure_vs_subsegment_corruption = 18,
  heap_failure_null_heap = 19
};

// 0x4 (4) bytes
enum _RTLP_HP_ADDRESS_SPACE_TYPE {

  HeapAddressUser = 0,
  HeapAddressKernel = 1,
  HeapAddressSession = 2,
  HeapAddressTypeMax = 3
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
enum _PCW_CALLBACK_TYPE {

  PcwCallbackAddCounter = 0,
  PcwCallbackRemoveCounter = 1,
  PcwCallbackEnumerateInstances = 2,
  PcwCallbackCollectData = 3
};

// 0x4 (4) bytes
enum _CM_LOAD_FAILURE_TYPE {

  _None = 0,
  _CmCreateHive = 1,
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
  _CmpLoadHiveThread = 22,
  _CmpCheckLeaf = 23,
  _HvHiveStartFileBacked = 24,
  _HvStartHiveMemoryBacked = 25,
  _HvpEnlistFreeCells = 26,
  _HvpPerformLogFileRecovery = 27
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
  WheaErrSrcTypeGenericV2 = 12,
  WheaErrSrcTypeSCIGenericV2 = 13,
  WheaErrSrcTypeMax = 14
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
  EtwBufferStatePendingCompression = 4,
  EtwBufferStateCompressed = 5,
  EtwBufferStatePlaceholder = 6,
  EtwBufferStateMaximum = 7
};

// 0x4 (4) bytes
enum ETW_COMPRESSION_RESUMPTION_MODE {

  EtwCompressionModeRestart = 0,
  EtwCompressionModeNoDisable = 1,
  EtwCompressionModeNoRestart = 2
};

// 0x4 (4) bytes
enum _ETW_PERIODIC_TIMER_STATE {

  EtwpPeriodicTimerUnset = 0,
  EtwpPeriodicTimerSet = 1
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
enum _DEVICE_RELATION_LEVEL {

  RELATION_LEVEL_REMOVE_EJECT = 0,
  RELATION_LEVEL_DEPENDENT = 1,
  RELATION_LEVEL_DIRECT_DESCENDANT = 2
};

// 0x4 (4) bytes
enum _SERVERSILO_STATE {

  SERVERSILO_INITING = 0,
  SERVERSILO_STARTED = 1,
  SERVERSILO_SHUTTING_DOWN = 2,
  SERVERSILO_TERMINATING = 3,
  SERVERSILO_TERMINATED = 4
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
enum _IRQ_PRIORITY {

  IrqPriorityUndefined = 0,
  IrqPriorityLow = 1,
  IrqPriorityNormal = 2,
  IrqPriorityHigh = 3
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
  MiVaSystemPtesLarge = 14,
  MiVaKernelStacks = 15,
  MiVaMaximumType = 16
};

// 0x4 (4) bytes
enum PROFILE_DEPARTURE_STYLE {

  PDS_UPDATE_DEFAULT = 1,
  PDS_UPDATE_ON_REMOVE = 2,
  PDS_UPDATE_ON_INTERFACE = 3,
  PDS_UPDATE_ON_EJECT = 4
};

// 0x4 (4) bytes
enum _PNP_WATCHDOG_TYPE {

  PNP_EVENT_WORKER_WATCHDOG = 1,
  PNP_DEVICE_COMPLETION_QUEUE_WATCHDOG = 2,
  PNP_DELAYED_REMOVE_WORKER_WATCHDOG = 3
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
enum _DIRECTORY_NOTIFY_INFORMATION_CLASS {

  DirectoryNotifyInformation = 1,
  DirectoryNotifyExtendedInformation = 2
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
  FileDispositionInformationEx = 64,
  FileRenameInformationEx = 65,
  FileRenameInformationExBypassAccessCheck = 66,
  FileDesiredStorageClassInformation = 67,
  FileStatInformation = 68,
  FileMemoryPartitionInformation = 69,
  FileStatLxInformation = 70,
  FileCaseSensitiveInformation = 71,
  FileMaximumInformation = 72
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
struct POHANDLE__ {
  LONG unused; // offset: 0x0 (0)
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
enum HAL_APIC_DESTINATION_MODE {

  ApicDestinationModePhysical = 1,
  ApicDestinationModeLogicalFlat = 2,
  ApicDestinationModeLogicalClustered = 3,
  ApicDestinationModeUnknown = 4
};

// 0x4 (4) bytes
enum _PEP_WORK_TYPE {

  PepWorkActiveComplete = 0,
  PepWorkRequestIdleState = 1,
  PepWorkDevicePower = 2,
  PepWorkRequestPowerControl = 3,
  PepWorkDeviceIdle = 4,
  PepWorkCompleteIdleState = 5,
  PepWorkCompletePerfState = 6,
  PepWorkAcpiNotify = 7,
  PepWorkAcpiEvaluateControlMethodComplete = 8,
  PepWorkMax = 9
};

// 0x4 (4) bytes
enum _PNP_DEVNODE_QUERY_REBALANCE_VETO_REASON {

  DeviceQueryRebalanceSucceeded = 0,
  DeviceQueryStopFailed = 1,
  DeviceFailedGetNewResourceRequirement = 2,
  DeviceInUnexpectedState = 3,
  DeviceNotSupportQueryRebalance = 4
};

// 0x4 (4) bytes
enum _PNP_REBALANCE_FAILURE {

  RebalanceFailureNone = 0,
  RebalanceFailureDisabled = 1,
  RebalanceFailureNoMemory = 2,
  RebalanceFailureQueryStopUnexpectedVeto = 3,
  RebalanceFailureNoRequirements = 4,
  RebalanceFailureNoCandidates = 5,
  RebalanceFailureNoConfiguration = 6
};

// 0x4 (4) bytes
enum _PNP_REBALANCE_REASON {

  RebalanceReasonUnknown = 0,
  RebalanceReasonRequirementsChanged = 1,
  RebalanceReasonNewDevice = 2
};

// 0x4 (4) bytes
enum INTERRUPT_CONNECTION_TYPE {

  InterruptTypeControllerInput = 0,
  InterruptTypeXapicMessage = 1,
  InterruptTypeHypertransport = 2,
  InterruptTypeMessageRequest = 3
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
enum _HARDWARE_COUNTER_TYPE {

  PMCCounter = 0,
  MaxHardwareCounterType = 1
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
union _POWER_STATE {
  enum _SYSTEM_POWER_STATE SystemState; // offset: 0x0 (0)
  enum _DEVICE_POWER_STATE DeviceState; // offset: 0x0 (0)
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
enum _POWER_STATE_TYPE {

  SystemPowerState = 0,
  DevicePowerState = 1
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
enum _KHETERO_CPU_QOS {

  KHeteroCpuQosDefault = 0,
  KHeteroCpuQosHigh = 0,
  KHeteroCpuQosMedium = 1,
  KHeteroCpuQosLow = 2,
  KHeteroCpuQosMultimedia = 3,
  KHeteroCpuQosDynamic = 4,
  KHeteroCpuQosMax = 4
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

// 0x24 (36) bytes
struct _FAST_OWNER_ENTRY_INTERNAL {
  struct _LIST_ENTRY ListEntry;     // offset: 0x0 (0)
  UCHAR AbLockHandle;               // offset: 0x8 (8)
  UCHAR Disowned : 1;               // offset: 0x9 (9)
  UCHAR DynamicallyAllocated : 1;   // offset: 0x9 (9)
  UCHAR CallerExclusive : 1;        // offset: 0x9 (9)
  UCHAR IsSublistHead;              // offset: 0xa (10)
  UCHAR IsWaiting;                  // offset: 0xb (11)
  VOID *LockAddress;                // offset: 0xc (12)
  VOID *ThreadAddress;              // offset: 0x10 (16)
  struct _LIST_ENTRY SublistHead;   // offset: 0x14 (20)
  struct _LIST_ENTRY LockListEntry; // offset: 0x1c (28)
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
struct _MI_WSLE {
  union {
    struct {
      UCHAR Age : 4;        // offset: 0x0 (0)
      UCHAR Protection : 3; // offset: 0x0 (0)
      UCHAR Reserved : 1;   // offset: 0x0 (0)
    } e1;                   // offset: 0x0 (0)
    struct {
      UCHAR EntireWsle; // offset: 0x0 (0)
    } e2;               // offset: 0x0 (0)

  } u1; // offset: 0x0 (0)
};

// 0x2000 (8192) bytes
struct _MI_HYPER_SPACE {
  UCHAR VadBitmap[6144];             // offset: 0x0 (0)
  UCHAR PaddingToPageBoundary[2048]; // offset: 0x1800 (6144)
};

// 0x8 (8) bytes
struct _MAP_REGISTER_ENTRY {
  VOID *MapRegister;   // offset: 0x0 (0)
  UCHAR WriteToDevice; // offset: 0x4 (4)
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

// 0x1 (1) bytes
struct _MMPFNENTRY3 {
  UCHAR Priority : 3;           // offset: 0x0 (0)
  UCHAR OnProtectedStandby : 1; // offset: 0x0 (0)
  UCHAR InPageError : 1;        // offset: 0x0 (0)
  UCHAR SystemChargedPage : 1;  // offset: 0x0 (0)
  UCHAR RemovalRequested : 1;   // offset: 0x0 (0)
  UCHAR ParityError : 1;        // offset: 0x0 (0)
};

// 0x1 (1) bytes
struct _MMPFNENTRY1 {
  UCHAR PageLocation : 3;    // offset: 0x0 (0)
  UCHAR WriteInProgress : 1; // offset: 0x0 (0)
  UCHAR Modified : 1;        // offset: 0x0 (0)
  UCHAR ReadInProgress : 1;  // offset: 0x0 (0)
  UCHAR CacheAttribute : 2;  // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MMPAGE_FILE_EXPANSION_FLAGS {
  UCHAR PageFileNumber : 8;        // offset: 0x0 (0)
  UCHAR Spare1 : 8;                // offset: 0x1 (1)
  UCHAR Spare2 : 8;                // offset: 0x2 (2)
  UCHAR IgnoreCurrentCommit : 1;   // offset: 0x3 (3)
  UCHAR IncreaseMinimumSize : 1;   // offset: 0x3 (3)
  UCHAR AttemptForCantExtend : 1;  // offset: 0x3 (3)
  UCHAR UnusedSegmentDeletion : 1; // offset: 0x3 (3)
  UCHAR PageFileContract : 1;      // offset: 0x3 (3)
  UCHAR Spare3 : 3;                // offset: 0x3 (3)
};

// 0x14 (20) bytes
struct _MI_REBUILD_LARGE_PAGE_TIMER {
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x0 (0)
  UCHAR SecondsLeft;                // offset: 0x10 (16)
  UCHAR RebuildActive;              // offset: 0x11 (17)
  UCHAR NextPassDelta;              // offset: 0x12 (18)
  UCHAR LargeSubPagesActive;        // offset: 0x13 (19)
};

// 0x3 (3) bytes
struct _MI_RESTRICTED_MODWRITES {
  UCHAR MaximumClusterPages;  // offset: 0x0 (0)
  UCHAR ReducedClusterWrites; // offset: 0x1 (1)
  UCHAR ImposeDelay;          // offset: 0x2 (2)
};

// 0x1 (1) bytes
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS {
  UCHAR FRUId : 1;    // offset: 0x0 (0)
  UCHAR FRUText : 1;  // offset: 0x0 (0)
  UCHAR Reserved : 6; // offset: 0x0 (0)
  UCHAR AsUCHAR;      // offset: 0x0 (0)
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

// 0x2 (2) bytes
struct _ETW_SYSTEM_LOGGER {
  UCHAR LoggerId;  // offset: 0x0 (0)
  UCHAR ClockType; // offset: 0x1 (1)
};

// 0x8 (8) bytes
struct _VF_ADDRESS_RANGE {
  UCHAR *Start; // offset: 0x0 (0)
  UCHAR *End;   // offset: 0x4 (4)
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

// 0x8 (8) bytes
struct _PEP_WORK_DEVICE_IDLE {
  struct POHANDLE__ *DeviceHandle; // offset: 0x0 (0)
  UCHAR IgnoreIdleTimeout;         // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _PEP_WORK_DEVICE_POWER {
  struct POHANDLE__ *DeviceHandle; // offset: 0x0 (0)
  UCHAR PowerRequired;             // offset: 0x4 (4)
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

// 0x6 (6) bytes
struct _PROC_IDLE_POLICY {
  UCHAR PromotePercent;     // offset: 0x0 (0)
  UCHAR DemotePercent;      // offset: 0x1 (1)
  UCHAR PromotePercentBase; // offset: 0x2 (2)
  UCHAR DemotePercentBase;  // offset: 0x3 (3)
  UCHAR AllowScaling;       // offset: 0x4 (4)
  UCHAR ForceLightIdle;     // offset: 0x5 (5)
};

// 0x2024 (8228) bytes
struct _KiIoAccessMap {
  UCHAR DirectionMap[32]; // offset: 0x0 (0)
  UCHAR IoMap[8196];      // offset: 0x20 (32)
};

// 0x8 (8) bytes
struct _RTL_RB_TREE {
  struct _RTL_BALANCED_NODE *Root; // offset: 0x0 (0)
  union {
    UCHAR Encoded : 1;              // offset: 0x4 (4)
    struct _RTL_BALANCED_NODE *Min; // offset: 0x4 (4)
  };
};

// 0x4 (4) bytes
enum _NT_PRODUCT_TYPE {

  NtProductWinNt = 1,
  NtProductLanManNt = 2,
  NtProductServer = 3
};

// 0x8 (8) bytes
struct _MI_COMBINE_PAGE_LISTHEAD {
  struct _RTL_AVL_TREE Table; // offset: 0x0 (0)
  volatile LONG Lock;         // offset: 0x4 (4)
};

// 0x4 (4) bytes
struct _HEAP_FREE_ENTRY_EXTRA {
  USHORT TagIndex;           // offset: 0x0 (0)
  USHORT FreeBackTraceIndex; // offset: 0x2 (2)
};

// 0x2 (2) bytes
union _HAL_UNMASKED_INTERRUPT_FLAGS {
  USHORT SecondaryInterrupt : 1; // offset: 0x0 (0)
  USHORT Reserved : 15;          // offset: 0x0 (0)
  USHORT AsUSHORT;               // offset: 0x0 (0)
};

// 0x8040 (32832) bytes
struct _STACK_TABLE {
  USHORT NumStackTraces;                    // offset: 0x0 (0)
  USHORT TraceCapacity;                     // offset: 0x2 (2)
  struct _OBJECT_REF_TRACE *StackTrace[16]; // offset: 0x4 (4)
  USHORT StackTableHash[16381];             // offset: 0x44 (68)
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
  USHORT Reserved1;             // offset: 0xe (14)
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
  VOID(*TrackedOffsetCallback)
  (struct _IO_IRP_EXT_TRACK_OFFSET_HEADER *arg1,
   struct _IO_IRP_EXT_TRACK_OFFSET_HEADER *arg2,
   LONGLONG arg3); // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _SEGMENT_HEAP_EXTRA {
  USHORT AllocationTag;       // offset: 0x0 (0)
  UCHAR InterceptorIndex : 4; // offset: 0x2 (2)
  UCHAR UserFlags : 4;        // offset: 0x2 (2)
  UCHAR ExtraSizeInUnits;     // offset: 0x3 (3)
  VOID *Settable;             // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _PCW_COUNTER_DESCRIPTOR {
  USHORT Id;          // offset: 0x0 (0)
  USHORT StructIndex; // offset: 0x2 (2)
  USHORT Offset;      // offset: 0x4 (4)
  USHORT Size;        // offset: 0x6 (6)
};

// 0x2 (2) bytes
struct _HV_GET_BIN_CONTEXT {
  USHORT OutstandingReference : 1; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MMSUBSECTION_FLAGS {
  USHORT SubsectionAccessed : 1;  // offset: 0x0 (0)
  USHORT Protection : 5;          // offset: 0x0 (0)
  USHORT StartingSector4132 : 10; // offset: 0x0 (0)
  USHORT SubsectionStatic : 1;    // offset: 0x2 (2)
  USHORT GlobalMemory : 1;        // offset: 0x2 (2)
  USHORT Spare : 1;               // offset: 0x2 (2)
  USHORT OnDereferenceList : 1;   // offset: 0x2 (2)
  USHORT SectorEndOffset : 12;    // offset: 0x2 (2)
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
      UCHAR Unused : 1;                // offset: 0x2 (2)
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

// 0x8 (8) bytes
struct _UNICODE_STRING {
  USHORT Length;        // offset: 0x0 (0)
  USHORT MaximumLength; // offset: 0x2 (2)
  WCHAR *Buffer;        // offset: 0x4 (4)
};

// 0x2 (2) bytes
union _WHEA_REVISION {
  struct {
    UCHAR MinorRevision; // offset: 0x0 (0)
    UCHAR MajorRevision; // offset: 0x1 (1)
  };
  USHORT AsUSHORT; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _TXN_PARAMETER_BLOCK {
  USHORT Length;           // offset: 0x0 (0)
  USHORT TxFsContext;      // offset: 0x2 (2)
  VOID *TransactionObject; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _ETW_FILTER_STRING_TOKEN_ELEMENT {
  USHORT Length; // offset: 0x0 (0)
  WCHAR *String; // offset: 0x4 (4)
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

// 0xc (12) bytes
struct _ETW_FILTER_STRING_TOKEN {
  USHORT Count;                                      // offset: 0x0 (0)
  struct _ETW_FILTER_STRING_TOKEN_ELEMENT Tokens[1]; // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _INTERFACE {
  USHORT Size;                              // offset: 0x0 (0)
  USHORT Version;                           // offset: 0x2 (2)
  VOID *Context;                            // offset: 0x4 (4)
  VOID (*InterfaceReference)(VOID *arg1);   // offset: 0x8 (8)
  VOID (*InterfaceDereference)(VOID *arg1); // offset: 0xc (12)
};

// 0x4 (4) bytes
struct _MMSUPPORT_FLAGS {
  union {
    struct {
      UCHAR WorkingSetType : 3;        // offset: 0x0 (0)
      UCHAR Reserved0 : 3;             // offset: 0x0 (0)
      UCHAR MaximumWorkingSetHard : 1; // offset: 0x0 (0)
      UCHAR MinimumWorkingSetHard : 1; // offset: 0x0 (0)
      UCHAR SessionMaster : 1;         // offset: 0x1 (1)
      UCHAR TrimmerState : 2;          // offset: 0x1 (1)
      UCHAR Reserved : 1;              // offset: 0x1 (1)
      UCHAR PageStealers : 4;          // offset: 0x1 (1)
    };
    USHORT u1; // offset: 0x0 (0)
  };
  UCHAR MemoryPriority; // offset: 0x2 (2)
  union {
    struct {
      UCHAR WsleDeleted : 1;        // offset: 0x3 (3)
      UCHAR SvmEnabled : 1;         // offset: 0x3 (3)
      UCHAR ForceAge : 1;           // offset: 0x3 (3)
      UCHAR ForceTrim : 1;          // offset: 0x3 (3)
      UCHAR NewMaximum : 1;         // offset: 0x3 (3)
      UCHAR CommitReleaseState : 2; // offset: 0x3 (3)
    };
    UCHAR u2; // offset: 0x3 (3)
  };
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

// 0x34 (52) bytes
struct _ETW_PMC_SUPPORT {
  enum _KPROFILE_SOURCE Source[8];            // offset: 0x0 (0)
  volatile ULONG HookIdCount;                 // offset: 0x20 (32)
  USHORT HookId[4];                           // offset: 0x24 (36)
  volatile ULONG CountersCount;               // offset: 0x2c (44)
  struct _HAL_PMC_COUNTERS *ProcessorCtrs[1]; // offset: 0x30 (48)
};

// 0x8 (8) bytes
struct _STRING {
  USHORT Length;        // offset: 0x0 (0)
  USHORT MaximumLength; // offset: 0x2 (2)
  CHAR *Buffer;         // offset: 0x4 (4)
};

// 0x4 (4) bytes
struct _PROCESSOR_NUMBER {
  USHORT Group;   // offset: 0x0 (0)
  UCHAR Number;   // offset: 0x2 (2)
  UCHAR Reserved; // offset: 0x3 (3)
};

// 0xc (12) bytes
struct _SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR {
  enum _SEP_CACHED_HANDLES_ENTRY_TYPE DescriptorType; // offset: 0x0 (0)
  union {
    VOID *PackageSid;                       // offset: 0x4 (4)
    struct _UNICODE_STRING IsolationPrefix; // offset: 0x4 (4)
  };
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

// 0x18 (24) bytes
struct _SEP_SILOSTATE {
  struct _SEP_LOGON_SESSION_REFERENCES *SystemLogonSession; // offset: 0x0 (0)
  struct _SEP_LOGON_SESSION_REFERENCES
      *AnonymousLogonSession;             // offset: 0x4 (4)
  VOID *AnonymousLogonToken;              // offset: 0x8 (8)
  VOID *AnonymousLogonTokenNoEveryone;    // offset: 0xc (12)
  struct _UNICODE_STRING *UncSystemPaths; // offset: 0x10 (16)
  struct _CI_NGEN_PATHS *NgenPaths;       // offset: 0x14 (20)
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

// 0x10 (16) bytes
struct _CMP_DISCARD_AND_REPLACE_KCB_CONTEXT {
  struct _CM_KEY_CONTROL_BLOCK *BaseKcb; // offset: 0x0 (0)
  LONG PrepareStatus;                    // offset: 0x4 (4)
  struct _LIST_ENTRY ClonedKcbListHead;  // offset: 0x8 (8)
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
struct _ETW_COUNTERS {
  LONG GuidCount;    // offset: 0x0 (0)
  LONG PoolUsage[2]; // offset: 0x4 (4)
  LONG SessionCount; // offset: 0xc (12)
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
      UCHAR Timer2ComponentId; // offset: 0x2 (2)
      UCHAR Timer2RelativeId;  // offset: 0x3 (3)
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
      UCHAR ThreadType; // offset: 0x0 (0)
      union {
        UCHAR ThreadSpecControl; // offset: 0x1 (1)
        struct {
          UCHAR SpecControlIbrs : 1;     // offset: 0x1 (1)
          UCHAR SpecControlStibp : 1;    // offset: 0x1 (1)
          UCHAR SpecControlReserved : 6; // offset: 0x1 (1)
        };
      };
      union {
        UCHAR ThreadControlFlags; // offset: 0x2 (2)
        struct {
          UCHAR CycleProfiling : 1;   // offset: 0x2 (2)
          UCHAR CounterProfiling : 1; // offset: 0x2 (2)
          UCHAR GroupScheduling : 1;  // offset: 0x2 (2)
          UCHAR AffinitySet : 1;      // offset: 0x2 (2)
          UCHAR Tagged : 1;           // offset: 0x2 (2)
          UCHAR EnergyProfiling : 1;  // offset: 0x2 (2)
          UCHAR SchedulerAssist : 1;  // offset: 0x2 (2)
          UCHAR Instrumented : 1;     // offset: 0x2 (2)
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

// 0x2c (44) bytes
struct _MMDEREFERENCE_SEGMENT_HEADER {
  struct _KSEMAPHORE Semaphore;                   // offset: 0x0 (0)
  struct _LIST_ENTRY ControlAreaDeleteListHead;   // offset: 0x14 (20)
  struct _LIST_ENTRY UnusedSegmentDeleteListHead; // offset: 0x1c (28)
  struct _LIST_ENTRY PagefileExtensionListHead;   // offset: 0x24 (36)
};

// 0x10 (16) bytes
struct _KEVENT {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 (0)
};

// 0x18 (24) bytes
struct _KWAIT_CHAIN_ENTRY {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 (0)
  struct _KEVENT Event;         // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _MI_RESUME_WORKITEM {
  struct _KEVENT ResumeCompleteEvent; // offset: 0x0 (0)
  struct _WORK_QUEUE_ITEM WorkItem;   // offset: 0x10 (16)
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
struct _HIVE_WAIT_PACKET {
  struct _KEVENT WakeEvent;       // offset: 0x0 (0)
  LONG Status;                    // offset: 0x10 (16)
  struct _HIVE_WAIT_PACKET *Next; // offset: 0x14 (20)
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

// 0x40 (64) bytes
struct _MI_PARTITION_ZEROING {
  struct _KEVENT PageEvent;                          // offset: 0x0 (0)
  UCHAR ThreadActive;                                // offset: 0x10 (16)
  UCHAR ThreadPriorityStatic;                        // offset: 0x11 (17)
  LONG ZeroFreePageSlistMinimum;                     // offset: 0x14 (20)
  struct _WORK_QUEUE_ITEM RebalanceZeroFreeWorkItem; // offset: 0x18 (24)
  volatile LONG ThreadCount;                         // offset: 0x28 (40)
  struct _KGATE Gate;                                // offset: 0x2c (44)
  struct _MI_ZERO_THREAD_CONTEXT *ThreadContext;     // offset: 0x3c (60)
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

// 0x4 (4) bytes
union _MI_FLAGS {
  LONG EntireFlags;                       // offset: 0x0 (0)
  ULONG VerifierEnabled : 1;              // offset: 0x0 (0)
  ULONG KernelVerifierEnabled : 1;        // offset: 0x0 (0)
  ULONG LargePageKernel : 1;              // offset: 0x0 (0)
  ULONG StopOn4d : 1;                     // offset: 0x0 (0)
  ULONG InitializationPhase : 2;          // offset: 0x0 (0)
  ULONG PageKernelStacks : 1;             // offset: 0x0 (0)
  ULONG CheckZeroPages : 1;               // offset: 0x0 (0)
  ULONG ProcessorPrewalks : 1;            // offset: 0x0 (0)
  ULONG ProcessorPostwalks : 1;           // offset: 0x0 (0)
  ULONG CoverageBuild : 1;                // offset: 0x0 (0)
  ULONG AccessBitReplacementDisabled : 1; // offset: 0x0 (0)
  ULONG CheckExecute : 1;                 // offset: 0x0 (0)
  ULONG ProtectedPagesEnabled : 1;        // offset: 0x0 (0)
  ULONG SecureRelocations : 1;            // offset: 0x0 (0)
  ULONG StrongPageIdentity : 1;           // offset: 0x0 (0)
  ULONG StrongCodeGuarantees : 1;         // offset: 0x0 (0)
  ULONG HardCodeGuarantees : 1;           // offset: 0x0 (0)
  ULONG ExecutePagePrivilegeRequired : 1; // offset: 0x0 (0)
  ULONG SecureKernelCfgEnabled : 1;       // offset: 0x0 (0)
  ULONG FullHvci : 1;                     // offset: 0x0 (0)
  ULONG SlatKernelCodeProtected : 1;      // offset: 0x0 (0)
  ULONG BootDebuggerActive : 1;           // offset: 0x0 (0)
  ULONG ExceptionHandlingReady : 1;       // offset: 0x0 (0)
};

// 0x14 (20) bytes
struct _CALL_HASH_ENTRY {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 (0)
  VOID *CallersAddress;         // offset: 0x8 (8)
  VOID *CallersCaller;          // offset: 0xc (12)
  ULONG CallCount;              // offset: 0x10 (16)
};

// 0x4 (4) bytes
struct _OBJECT_HEADER_PADDING_INFO {
  ULONG PaddingAmount; // offset: 0x0 (0)
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

// 0x14 (20) bytes
struct _NB10 {
  ULONG Signature; // offset: 0x0 (0)
  ULONG Offset;    // offset: 0x4 (4)
  ULONG TimeStamp; // offset: 0x8 (8)
  ULONG Age;       // offset: 0xc (12)
  CHAR PdbName[1]; // offset: 0x10 (16)
};

// 0x18 (24) bytes
struct _HEAP_UCR_DESCRIPTOR {
  struct _LIST_ENTRY ListEntry;    // offset: 0x0 (0)
  struct _LIST_ENTRY SegmentEntry; // offset: 0x8 (8)
  VOID *Address;                   // offset: 0x10 (16)
  ULONG Size;                      // offset: 0x14 (20)
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
struct _MMVAD_FLAGS2 {
  ULONG FileOffset : 24;        // offset: 0x0 (0)
  ULONG Large : 1;              // offset: 0x0 (0)
  ULONG TrimBehind : 1;         // offset: 0x0 (0)
  ULONG Inherit : 1;            // offset: 0x0 (0)
  ULONG NoValidationNeeded : 1; // offset: 0x0 (0)
  ULONG PrivateDemandZero : 1;  // offset: 0x0 (0)
  ULONG Spare : 3;              // offset: 0x0 (0)
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
struct _MI_VAD_SEQUENTIAL_INFO {
  ULONG Length : 11; // offset: 0x0 (0)
  ULONG Vpn : 21;    // offset: 0x0 (0)
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

// 0x10 (16) bytes
struct _POOL_TRACKER_BIG_PAGES {
  volatile ULONG Va;    // offset: 0x0 (0)
  ULONG Key;            // offset: 0x4 (4)
  ULONG Pattern : 8;    // offset: 0x8 (8)
  ULONG PoolType : 12;  // offset: 0x8 (8)
  ULONG SlushSize : 12; // offset: 0x8 (8)
  ULONG NumberOfBytes;  // offset: 0xc (12)
};

// 0x204 (516) bytes
struct _CALL_PERFORMANCE_DATA {
  ULONG SpinLock;                   // offset: 0x0 (0)
  struct _LIST_ENTRY HashTable[64]; // offset: 0x4 (4)
};

// 0x4 (4) bytes
union _PPM_IDLE_SYNCHRONIZATION_STATE {
  LONG AsLong;        // offset: 0x0 (0)
  LONG RefCount : 24; // offset: 0x0 (0)
  ULONG State : 8;    // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _CM_FAST_LEAF_HINT {
  union {
    UCHAR Characters[4]; // offset: 0x0 (0)
    ULONG FullHint;      // offset: 0x0 (0)
  };
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

// 0x8 (8) bytes
struct _LEARNING_MODE_DATA {
  ULONG Settings;              // offset: 0x0 (0)
  UCHAR Enabled;               // offset: 0x4 (4)
  UCHAR PermissiveModeEnabled; // offset: 0x5 (5)
};

// 0x38 (56) bytes
struct _FAST_ERESOURCE_INTERNAL {
  struct _LIST_ENTRY SystemResourcesList; // offset: 0x0 (0)
  VOID *ReservedPointer;                  // offset: 0x8 (8)
  SHORT ActiveCount;                      // offset: 0xc (12)
  USHORT Flag;                            // offset: 0xe (14)
  struct _KWAIT_CHAIN SharedWaiters;      // offset: 0x10 (16)
  struct _KWAIT_CHAIN ExclusiveWaiters;   // offset: 0x14 (20)
  struct _LIST_ENTRY OwnerEntryListHead;  // offset: 0x18 (24)
  ULONG ActiveEntries;                    // offset: 0x20 (32)
  ULONG ContentionCount;                  // offset: 0x24 (36)
  ULONG NumberOfSharedWaiters;            // offset: 0x28 (40)
  ULONG NumberOfExclusiveWaiters;         // offset: 0x2c (44)
  union {
    VOID *Address;               // offset: 0x30 (48)
    ULONG CreatorBackTraceIndex; // offset: 0x30 (48)
  };
  ULONG SpinLock; // offset: 0x34 (52)
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

// 0x4 (4) bytes
union _PPM_COORDINATED_SYNCHRONIZATION {
  LONG AsLong;               // offset: 0x0 (0)
  ULONG EnterProcessor : 12; // offset: 0x0 (0)
  ULONG ExitProcessor : 12;  // offset: 0x0 (0)
  ULONG Transition : 2;      // offset: 0x0 (0)
  ULONG Entered : 1;         // offset: 0x0 (0)
  ULONG EntryPriority : 5;   // offset: 0x0 (0)
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

// 0x20 (32) bytes
struct _VI_TRACK_IRQL {
  VOID *Thread;        // offset: 0x0 (0)
  UCHAR OldIrql;       // offset: 0x4 (4)
  UCHAR NewIrql;       // offset: 0x5 (5)
  USHORT Processor;    // offset: 0x6 (6)
  ULONG TickCount;     // offset: 0x8 (8)
  VOID *StackTrace[5]; // offset: 0xc (12)
};

// 0x4 (4) bytes
struct _HEAP_GLOBAL_APPCOMPAT_FLAGS {
  ULONG SafeInputValidation : 1;  // offset: 0x0 (0)
  ULONG Padding : 1;              // offset: 0x0 (0)
  ULONG CommitLFHSubsegments : 1; // offset: 0x0 (0)
  ULONG AllocateHeapFromEnv : 1;  // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _TEB_ACTIVE_FRAME_CONTEXT {
  ULONG Flags;           // offset: 0x0 (0)
  const CHAR *FrameName; // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _VF_TRACKER {
  ULONG TrackerFlags; // offset: 0x0 (0)
  ULONG TrackerSize;  // offset: 0x4 (4)
  ULONG TrackerIndex; // offset: 0x8 (8)
  ULONG TraceDepth;   // offset: 0xc (12)
};

// 0xc (12) bytes
struct _IOP_IRP_EXTENSION_STATUS {
  ULONG Flags;      // offset: 0x0 (0)
  ULONG ActivityId; // offset: 0x4 (4)
  ULONG IoTracking; // offset: 0x8 (8)
};

// 0x4 (4) bytes
union _KSTACK_COUNT {
  LONG Value;            // offset: 0x0 (0)
  ULONG State : 3;       // offset: 0x0 (0)
  ULONG StackCount : 29; // offset: 0x0 (0)
};

// 0x90 (144) bytes
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
  volatile ULONG IATInExecutableSection;             // offset: 0x8c (140)
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

// 0x5c (92) bytes
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
  ULONG PollingPeriod;           // offset: 0x58 (88)
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

// 0x40 (64) bytes
struct _VF_POOL_TRACE {
  VOID *Address;           // offset: 0x0 (0)
  ULONG Size;              // offset: 0x4 (4)
  struct _ETHREAD *Thread; // offset: 0x8 (8)
  VOID *StackTrace[13];    // offset: 0xc (12)
};

// 0x14 (20) bytes
struct _RTL_RANGE_LIST {
  struct _LIST_ENTRY ListHead; // offset: 0x0 (0)
  ULONG Flags;                 // offset: 0x8 (8)
  ULONG Count;                 // offset: 0xc (12)
  ULONG Stamp;                 // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _VF_AVL_TREE_NODE {
  VOID *p;         // offset: 0x0 (0)
  ULONG RangeSize; // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _VF_AVL_TREE_NODE_EX {
  struct _VF_AVL_TREE_NODE Base; // offset: 0x0 (0)
  ULONG SessionId;               // offset: 0x8 (8)
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

// 0x4 (4) bytes
struct _MI_SYSTEM_REGION_ANCHOR {
  ULONG ReferenceCount : 31; // offset: 0x0 (0)
  ULONG BeingDeleted : 1;    // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MI_SYSTEM_REGION_REFERENCE {
  struct {
    union {
      struct _MI_SYSTEM_REGION_ANCHOR Anchor; // offset: 0x0 (0)
      ULONG EntireReference;                  // offset: 0x0 (0)
    };
  } u1; // offset: 0x0 (0)
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

// 0x8c (140) bytes
struct _SYSPTES_HEADER {
  struct _LIST_ENTRY ListHead[16]; // offset: 0x0 (0)
  ULONG Count;                     // offset: 0x80 (128)
  ULONG NumberOfEntries;           // offset: 0x84 (132)
  ULONG NumberOfEntriesPeak;       // offset: 0x88 (136)
};

// 0x20 (32) bytes
struct _MI_IO_CACHE_STATS {
  ULONG UnusedBlocks;                 // offset: 0x0 (0)
  ULONG ActiveCacheMatch;             // offset: 0x4 (4)
  ULONG ActiveCacheOverride;          // offset: 0x8 (8)
  ULONG UnmappedCacheFlush;           // offset: 0xc (12)
  ULONG UnmappedCacheMatch;           // offset: 0x10 (16)
  ULONG UnmappedCacheConflict;        // offset: 0x14 (20)
  ULONG PermanentIoAttributeConflict; // offset: 0x18 (24)
  ULONG PermanentIoNodeConflict;      // offset: 0x1c (28)
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

// 0x44 (68) bytes
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
  ULONG NoPageTablesAllowed;            // offset: 0x3c (60)
  ULONG EnclavePageFailed;              // offset: 0x40 (64)
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

// 0x40 (64) bytes
struct _MI_IO_PAGE_STATE {
  volatile LONG IoPfnLock;                // offset: 0x0 (0)
  struct _RTL_AVL_TREE IoPfnRoot[3];      // offset: 0x4 (4)
  struct _LIST_ENTRY UnusedCachedMaps;    // offset: 0x10 (16)
  ULONG OldestCacheFlushTimeStamp;        // offset: 0x18 (24)
  struct _MI_IO_CACHE_STATS IoCacheStats; // offset: 0x1c (28)
  struct _RTL_AVL_TREE InvariantIoSpace;  // offset: 0x3c (60)
};

// 0x14 (20) bytes
struct _MI_PAGELIST_STATE {
  volatile LONG ActiveSpinLock;              // offset: 0x0 (0)
  struct _RTL_AVL_TREE ActiveThreadTree;     // offset: 0x4 (4)
  volatile LONG ActiveZeroSpinLock;          // offset: 0x8 (8)
  struct _RTL_AVL_TREE ActiveZeroThreadTree; // offset: 0xc (12)
  ULONG NumberOfLargePageListHeads;          // offset: 0x10 (16)
};

// 0x4 (4) bytes
struct _KTB_FLUSH_VA {
  union {
    ULONG NumberOfEntries : 10; // offset: 0x0 (0)
    ULONG PageSize : 2;         // offset: 0x0 (0)
    VOID *Va;                   // offset: 0x0 (0)
    ULONG VaLong;               // offset: 0x0 (0)

  } u1; // offset: 0x0 (0)
};

// 0x38 (56) bytes
struct _VIRTUAL_EFI_RUNTIME_SERVICES {
  ULONG GetTime;                   // offset: 0x0 (0)
  ULONG SetTime;                   // offset: 0x4 (4)
  ULONG GetWakeupTime;             // offset: 0x8 (8)
  ULONG SetWakeupTime;             // offset: 0xc (12)
  ULONG SetVirtualAddressMap;      // offset: 0x10 (16)
  ULONG ConvertPointer;            // offset: 0x14 (20)
  ULONG GetVariable;               // offset: 0x18 (24)
  ULONG GetNextVariableName;       // offset: 0x1c (28)
  ULONG SetVariable;               // offset: 0x20 (32)
  ULONG GetNextHighMonotonicCount; // offset: 0x24 (36)
  ULONG ResetSystem;               // offset: 0x28 (40)
  ULONG UpdateCapsule;             // offset: 0x2c (44)
  ULONG QueryCapsuleCapabilities;  // offset: 0x30 (48)
  ULONG QueryVariableInfo;         // offset: 0x34 (52)
};

// 0x4 (4) bytes
struct _INPUT_MAPPING_ELEMENT {
  ULONG InputMappingId; // offset: 0x0 (0)
};

// 0xc (12) bytes
union _IOMMU_SVM_CAPABILITIES {
  ULONG AtsCapability : 1; // offset: 0x0 (0)
  ULONG PriCapability : 1; // offset: 0x0 (0)
  struct {
    ULONG PasidCapability : 1; // offset: 0x0 (0)
    struct {
      ULONG PasidMaxWidth : 5;           // offset: 0x0 (0)
      ULONG PasidExePerm : 1;            // offset: 0x0 (0)
      ULONG PasidPrivMode : 1;           // offset: 0x0 (0)
      ULONG AtsPageAlignedRequest : 1;   // offset: 0x0 (0)
      ULONG AtsGlobalInvalidate : 1;     // offset: 0x0 (0)
      ULONG AtsInvalidateQueueDepth : 5; // offset: 0x0 (0)
    } CapReg;                            // offset: 0x4 (4)
  };
  struct {
    ULONG Rsvd : 15; // offset: 0x8 (8)
  };
  ULONG AsULONG; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _HAL_HV_DMA_DOMAIN_INFO {
  ULONG DomainId; // offset: 0x0 (0)
  UCHAR IsStage1; // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _HAL_HV_SVM_DEVICE_CAPABILITIES {
  ULONG SvmSupported : 1;     // offset: 0x0 (0)
  ULONG PciExecute : 1;       // offset: 0x0 (0)
  ULONG NoExecute : 1;        // offset: 0x0 (0)
  ULONG Reserved : 28;        // offset: 0x0 (0)
  ULONG OverflowPossible : 1; // offset: 0x0 (0)
  ULONG PasidCount;           // offset: 0x4 (4)
  ULONG IommuIndex;           // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _HAL_HV_SVM_SYSTEM_CAPABILITIES {
  ULONG SvmSupported : 1;        // offset: 0x0 (0)
  ULONG GpaAlwaysValid : 1;      // offset: 0x0 (0)
  ULONG MaxPasidSpaceCount;      // offset: 0x4 (4)
  ULONG MaxPasidSpacePasidCount; // offset: 0x8 (8)
  ULONG MaxPrqSize;              // offset: 0xc (12)
  ULONG IommuCount;              // offset: 0x10 (16)
  ULONG MinIommuPasidCount;      // offset: 0x14 (20)
};

// 0x10 (16) bytes
struct _NETWORK_LOADER_BLOCK {
  UCHAR *DHCPServerACK;              // offset: 0x0 (0)
  ULONG DHCPServerACKLength;         // offset: 0x4 (4)
  UCHAR *BootServerReplyPacket;      // offset: 0x8 (8)
  ULONG BootServerReplyPacketLength; // offset: 0xc (12)
};

// 0x4 (4) bytes
struct _DEVICE_FLAGS {
  ULONG Failed : 1;     // offset: 0x0 (0)
  ULONG ReadOnly : 1;   // offset: 0x0 (0)
  ULONG Removable : 1;  // offset: 0x0 (0)
  ULONG ConsoleIn : 1;  // offset: 0x0 (0)
  ULONG ConsoleOut : 1; // offset: 0x0 (0)
  ULONG Input : 1;      // offset: 0x0 (0)
  ULONG Output : 1;     // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _PCAT_FIRMWARE_INFORMATION {
  ULONG PlaceHolder; // offset: 0x0 (0)
};

// 0x24 (36) bytes
struct _EFI_FIRMWARE_INFORMATION {
  ULONG FirmwareVersion; // offset: 0x0 (0)
  struct _VIRTUAL_EFI_RUNTIME_SERVICES
      *VirtualEfiRuntimeServices;          // offset: 0x4 (4)
  LONG SetVirtualAddressMapStatus;         // offset: 0x8 (8)
  ULONG MissedMappingsCount;               // offset: 0xc (12)
  struct _LIST_ENTRY FirmwareResourceList; // offset: 0x10 (16)
  VOID *EfiMemoryMap;                      // offset: 0x18 (24)
  ULONG EfiMemoryMapSize;                  // offset: 0x1c (28)
  ULONG EfiMemoryMapDescriptorSize;        // offset: 0x20 (32)
};

// 0x14 (20) bytes
struct _LOADER_HIVE_RECOVERY_INFO {
  ULONG Recovered : 1;          // offset: 0x0 (0)
  ULONG LegacyRecovery : 1;     // offset: 0x0 (0)
  ULONG SoftRebootConflict : 1; // offset: 0x0 (0)
  ULONG MostRecentLog : 3;      // offset: 0x0 (0)
  ULONG Spare : 27;             // offset: 0x4 (4)
  ULONG LogNextSequence;        // offset: 0x8 (8)
  ULONG LogMinimumSequence;     // offset: 0xc (12)
  ULONG LogCurrentOffset;       // offset: 0x10 (16)
};

// 0x14 (20) bytes
struct _LOADER_BUGCHECK_PARAMETERS {
  ULONG BugcheckCode;       // offset: 0x0 (0)
  ULONG BugcheckParameter1; // offset: 0x4 (4)
  ULONG BugcheckParameter2; // offset: 0x8 (8)
  ULONG BugcheckParameter3; // offset: 0xc (12)
  ULONG BugcheckParameter4; // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _PROFILE_PARAMETER_BLOCK {
  USHORT Status;       // offset: 0x0 (0)
  USHORT Reserved;     // offset: 0x2 (2)
  USHORT DockingState; // offset: 0x4 (4)
  USHORT Capabilities; // offset: 0x6 (6)
  ULONG DockID;        // offset: 0x8 (8)
  ULONG SerialNumber;  // offset: 0xc (12)
};

// 0x24 (36) bytes
struct _CONFIGURATION_COMPONENT {
  enum _CONFIGURATION_CLASS Class; // offset: 0x0 (0)
  enum _CONFIGURATION_TYPE Type;   // offset: 0x4 (4)
  struct _DEVICE_FLAGS Flags;      // offset: 0x8 (8)
  USHORT Version;                  // offset: 0xc (12)
  USHORT Revision;                 // offset: 0xe (14)
  ULONG Key;                       // offset: 0x10 (16)
  union {
    ULONG AffinityMask; // offset: 0x14 (20)
    struct {
      USHORT Group;      // offset: 0x14 (20)
      USHORT GroupIndex; // offset: 0x16 (22)
    };
  };
  ULONG ConfigurationDataLength; // offset: 0x18 (24)
  ULONG IdentifierLength;        // offset: 0x1c (28)
  CHAR *Identifier;              // offset: 0x20 (32)
};

// 0x34 (52) bytes
struct _CONFIGURATION_COMPONENT_DATA {
  struct _CONFIGURATION_COMPONENT_DATA *Parent;   // offset: 0x0 (0)
  struct _CONFIGURATION_COMPONENT_DATA *Child;    // offset: 0x4 (4)
  struct _CONFIGURATION_COMPONENT_DATA *Sibling;  // offset: 0x8 (8)
  struct _CONFIGURATION_COMPONENT ComponentEntry; // offset: 0xc (12)
  VOID *ConfigurationData;                        // offset: 0x30 (48)
};

// 0x20 (32) bytes
struct _SUPPORTED_RANGE {
  struct _SUPPORTED_RANGE *Next; // offset: 0x0 (0)
  ULONG SystemAddressSpace;      // offset: 0x4 (4)
  LONGLONG SystemBase;           // offset: 0x8 (8)
  LONGLONG Base;                 // offset: 0x10 (16)
  LONGLONG Limit;                // offset: 0x18 (24)
};

// 0x4 (4) bytes
struct _ARM_LOADER_BLOCK {
  ULONG PlaceHolder; // offset: 0x0 (0)
};

// 0xc (12) bytes
struct _I386_LOADER_BLOCK {
  VOID *CommonDataArea; // offset: 0x0 (0)
  ULONG MachineType;    // offset: 0x4 (4)
  ULONG VirtualBias;    // offset: 0x8 (8)
};

// 0xc (12) bytes
struct DEBUG_DEVICE_ADDRESS {
  UCHAR Type;  // offset: 0x0 (0)
  UCHAR Valid; // offset: 0x1 (1)
  union {
    UCHAR Reserved[2]; // offset: 0x2 (2)
    struct {
      UCHAR BitWidth;   // offset: 0x2 (2)
      UCHAR AccessSize; // offset: 0x3 (3)
    };
  };
  UCHAR *TranslatedAddress; // offset: 0x4 (4)
  ULONG Length;             // offset: 0x8 (8)
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

// 0x28 (40) bytes
struct _FIRMWARE_INFORMATION_LOADER_BLOCK {
  ULONG FirmwareTypeUefi : 1;                  // offset: 0x0 (0)
  ULONG EfiRuntimeUseIum : 1;                  // offset: 0x0 (0)
  ULONG EfiRuntimePageProtectionSupported : 1; // offset: 0x0 (0)
  ULONG Reserved : 29;                         // offset: 0x0 (0)
  union {
    struct _EFI_FIRMWARE_INFORMATION EfiInformation;   // offset: 0x4 (4)
    struct _PCAT_FIRMWARE_INFORMATION PcatInformation; // offset: 0x4 (4)

  } u; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _DEBUG_TRANSPORT_DATA {
  ULONG HwContextSize;    // offset: 0x0 (0)
  UCHAR UseSerialFraming; // offset: 0x4 (4)
};

// 0x1c (28) bytes
struct _HAL_UNMASKED_INTERRUPT_INFORMATION {
  USHORT Version;                            // offset: 0x0 (0)
  USHORT Size;                               // offset: 0x2 (2)
  union _HAL_UNMASKED_INTERRUPT_FLAGS Flags; // offset: 0x4 (4)
  enum _KINTERRUPT_MODE Mode;                // offset: 0x8 (8)
  enum _KINTERRUPT_POLARITY Polarity;        // offset: 0xc (12)
  ULONG Gsiv;                                // offset: 0x10 (16)
  USHORT PinNumber;                          // offset: 0x14 (20)
  VOID *DeviceHandle;                        // offset: 0x18 (24)
};

// 0xc (12) bytes
struct _PCI_BUSMASTER_DESCRIPTOR {
  enum _PCI_BUSMASTER_RID_TYPE Type; // offset: 0x0 (0)
  ULONG Segment;                     // offset: 0x4 (4)
  union {
    struct {
      UCHAR Bus;      // offset: 0x0 (0)
      UCHAR Device;   // offset: 0x1 (1)
      UCHAR Function; // offset: 0x2 (2)
      UCHAR Reserved; // offset: 0x3 (3)
    } DeviceRid;      // offset: 0x8 (8)
    struct {
      UCHAR Bus;      // offset: 0x0 (0)
      UCHAR Device;   // offset: 0x1 (1)
      UCHAR Function; // offset: 0x2 (2)
      UCHAR Reserved; // offset: 0x3 (3)
    } BridgeRid;      // offset: 0x8 (8)
    struct {
      UCHAR SecondaryBus;   // offset: 0x0 (0)
      UCHAR SubordinateBus; // offset: 0x1 (1)
    } MultipleBridges;      // offset: 0x8 (8)
  };
};

// 0x8 (8) bytes
struct _HAL_LOG_REGISTER_CONTEXT {
  VOID (*LogRoutine)(ULONG arg1, VOID *arg2, ULONG arg3); // offset: 0x0 (0)
  ULONG Flag;                                             // offset: 0x4 (4)
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

// 0x14 (20) bytes
struct _MEMORY_ALLOCATION_DESCRIPTOR {
  struct _LIST_ENTRY ListEntry;    // offset: 0x0 (0)
  enum _TYPE_OF_MEMORY MemoryType; // offset: 0x8 (8)
  ULONG BasePage;                  // offset: 0xc (12)
  ULONG PageCount;                 // offset: 0x10 (16)
};

// 0x18 (24) bytes
struct _VF_SUSPECT_DRIVER_ENTRY {
  struct _LIST_ENTRY Links;        // offset: 0x0 (0)
  ULONG Loads;                     // offset: 0x8 (8)
  ULONG Unloads;                   // offset: 0xc (12)
  struct _UNICODE_STRING BaseName; // offset: 0x10 (16)
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

// 0xc (12) bytes
struct _VF_BTS_RECORD {
  VOID *JumpedFrom;    // offset: 0x0 (0)
  VOID *JumpedTo;      // offset: 0x4 (4)
  ULONG Unused1 : 3;   // offset: 0x8 (8)
  ULONG Predicted : 4; // offset: 0x8 (8)
  ULONG Unused2 : 25;  // offset: 0x8 (8)
};

// 0xc (12) bytes
struct _OBJECT_REF_STACK_INFO {
  ULONG Sequence;   // offset: 0x0 (0)
  USHORT Index;     // offset: 0x4 (4)
  USHORT NumTraces; // offset: 0x6 (6)
  ULONG Tag;        // offset: 0x8 (8)
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

// 0xd4 (212) bytes
struct _PO_DEVICE_NOTIFY_ORDER {
  UCHAR Locked;                                // offset: 0x0 (0)
  struct _DEVICE_OBJECT **WarmEjectPdoPointer; // offset: 0x4 (4)
  struct _PO_NOTIFY_ORDER_LEVEL OrderLevel[5]; // offset: 0x8 (8)
  ULONG Flags;                                 // offset: 0xd0 (208)
};

// 0x108 (264) bytes
struct _POP_DEVICE_SYS_STATE {
  UCHAR IrpMinor;                        // offset: 0x0 (0)
  enum _SYSTEM_POWER_STATE SystemState;  // offset: 0x4 (4)
  ULONG SpinLock;                        // offset: 0x8 (8)
  struct _KTHREAD *Thread;               // offset: 0xc (12)
  struct _KEVENT *AbortEvent;            // offset: 0x10 (16)
  struct _KSEMAPHORE *ReadySemaphore;    // offset: 0x14 (20)
  struct _KSEMAPHORE *FinishedSemaphore; // offset: 0x18 (24)
  struct _PO_DEVICE_NOTIFY_ORDER Order;  // offset: 0x1c (28)
  struct _LIST_ENTRY Pending;            // offset: 0xf0 (240)
  LONG Status;                           // offset: 0xf8 (248)
  struct _DEVICE_OBJECT *FailedDevice;   // offset: 0xfc (252)
  UCHAR Waking;                          // offset: 0x100 (256)
  UCHAR Cancelled;                       // offset: 0x101 (257)
  UCHAR IgnoreErrors;                    // offset: 0x102 (258)
  UCHAR IgnoreNotImplemented;            // offset: 0x103 (259)
  UCHAR TimeRefreshLockAcquired;         // offset: 0x104 (260)
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

// 0x14 (20) bytes
struct _TRIAGE_9F_POWER {
  USHORT Signature;                                 // offset: 0x0 (0)
  USHORT Revision;                                  // offset: 0x2 (2)
  struct _LIST_ENTRY *IrpList;                      // offset: 0x4 (4)
  struct _LIST_ENTRY *ThreadList;                   // offset: 0x8 (8)
  struct _TRIAGE_EX_WORK_QUEUE *DelayedWorkQueue;   // offset: 0xc (12)
  struct _TRIAGE_EX_WORK_QUEUE *DelayedIoWorkQueue; // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _TRIAGE_9F_PNP {
  USHORT Signature; // offset: 0x0 (0)
  USHORT Revision;  // offset: 0x2 (2)
  struct _TRIAGE_PNP_DEVICE_COMPLETION_QUEUE
      *CompletionQueue;                             // offset: 0x4 (4)
  struct _TRIAGE_EX_WORK_QUEUE *DelayedWorkQueue;   // offset: 0x8 (8)
  struct _TRIAGE_EX_WORK_QUEUE *DelayedIoWorkQueue; // offset: 0xc (12)
};

// 0x14 (20) bytes
struct _LOCK_HEADER {
  struct _RTL_AVL_TREE LockTree;            // offset: 0x0 (0)
  struct _RTL_AVL_TREE LockMdlSwitchedTree; // offset: 0x4 (4)
  ULONG Count;                              // offset: 0x8 (8)
  ULONG Lock;                               // offset: 0xc (12)
  ULONG Valid;                              // offset: 0x10 (16)
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

// 0xc (12) bytes
struct _KSYSTEM_TIME {
  ULONG LowPart;  // offset: 0x0 (0)
  LONG High1Time; // offset: 0x4 (4)
  LONG High2Time; // offset: 0x8 (8)
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
    struct {
      ULONG PollInterval;             // offset: 0x0 (0)
      ULONG Vector;                   // offset: 0x4 (4)
      ULONG SwitchToPollingThreshold; // offset: 0x8 (8)
      ULONG SwitchToPollingWindow;    // offset: 0xc (12)
      ULONG ErrorThreshold;           // offset: 0x10 (16)
      ULONG ErrorThresholdWindow;     // offset: 0x14 (20)
    } Sea;                            // offset: 0x4 (4)
    struct {
      ULONG PollInterval;             // offset: 0x0 (0)
      ULONG Vector;                   // offset: 0x4 (4)
      ULONG SwitchToPollingThreshold; // offset: 0x8 (8)
      ULONG SwitchToPollingWindow;    // offset: 0xc (12)
      ULONG ErrorThreshold;           // offset: 0x10 (16)
      ULONG ErrorThresholdWindow;     // offset: 0x14 (20)
    } Sei;                            // offset: 0x4 (4)
    struct {
      ULONG PollInterval;             // offset: 0x0 (0)
      ULONG Vector;                   // offset: 0x4 (4)
      ULONG SwitchToPollingThreshold; // offset: 0x8 (8)
      ULONG SwitchToPollingWindow;    // offset: 0xc (12)
      ULONG ErrorThreshold;           // offset: 0x10 (16)
      ULONG ErrorThresholdWindow;     // offset: 0x14 (20)
    } Gsiv;                           // offset: 0x4 (4)

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

// 0x9c (156) bytes
struct _SEP_TOKEN_DIAG_TRACK_ENTRY {
  VOID *ProcessCid;        // offset: 0x0 (0)
  VOID *ThreadCid;         // offset: 0x4 (4)
  UCHAR ImageFileName[16]; // offset: 0x8 (8)
  ULONG CreateMethod;      // offset: 0x18 (24)
  ULONG CreateTrace[30];   // offset: 0x1c (28)
  LONG Count;              // offset: 0x94 (148)
  LONG CaptureCount;       // offset: 0x98 (152)
};

// 0x2c (44) bytes
struct _IOP_FILE_OBJECT_EXTENSION {
  ULONG FoExtFlags;                         // offset: 0x0 (0)
  VOID *FoExtPerTypeExtension[9];           // offset: 0x4 (4)
  enum _IOP_PRIORITY_HINT FoIoPriorityHint; // offset: 0x28 (40)
};

// 0xc (12) bytes
struct _REMOTE_PORT_VIEW {
  ULONG Length;   // offset: 0x0 (0)
  ULONG ViewSize; // offset: 0x4 (4)
  VOID *ViewBase; // offset: 0x8 (8)
};

// 0xc (12) bytes
struct _OB_EXTENDED_PARSE_PARAMETERS {
  USHORT Length;              // offset: 0x0 (0)
  ULONG RestrictedAccessMask; // offset: 0x4 (4)
  struct _EJOB *Silo;         // offset: 0x8 (8)
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

// 0x8 (8) bytes
struct _ALPC_WORK_ON_BEHALF_TICKET {
  ULONG ThreadId;              // offset: 0x0 (0)
  ULONG ThreadCreationTimeLow; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _KALPC_WORK_ON_BEHALF_DATA {
  struct _ALPC_WORK_ON_BEHALF_TICKET Ticket; // offset: 0x0 (0)
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

// 0x24 (36) bytes
struct _BLOB_TYPE {
  enum _BLOB_ID ResourceId;             // offset: 0x0 (0)
  ULONG PoolTag;                        // offset: 0x4 (4)
  ULONG LookasideIndex;                 // offset: 0x8 (8)
  ULONG Flags;                          // offset: 0xc (12)
  struct _BLOB_COUNTERS *Counters;      // offset: 0x10 (16)
  VOID (*CleanupProcedure)(VOID *arg1); // offset: 0x14 (20)
  VOID (*DeleteProcedure)(VOID *arg1);  // offset: 0x18 (24)
  LONG (*DestroyProcedure)(VOID *arg1); // offset: 0x1c (28)
  ULONG UsualSize;                      // offset: 0x20 (32)
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

// 0x8 (8) bytes
struct _RTLP_HP_PADDING_HEADER {
  ULONG PaddingSize; // offset: 0x0 (0)
  ULONG Spare;       // offset: 0x4 (4)
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

// 0x8 (8) bytes
struct _FAKE_HEAP_ENTRY {
  ULONG Size;         // offset: 0x0 (0)
  ULONG PreviousSize; // offset: 0x4 (4)
};

// 0x4 (4) bytes
struct _RTL_HP_VS_CONFIG {
  struct {
    ULONG PageAlignLargeAllocs : 1; // offset: 0x0 (0)
    ULONG FullDecommit : 1;         // offset: 0x0 (0)
  } Flags;                          // offset: 0x0 (0)
};

// 0x4 (4) bytes
union _RTL_RUN_ONCE {
  VOID *Ptr;       // offset: 0x0 (0)
  ULONG Value;     // offset: 0x0 (0)
  ULONG State : 2; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _RTLP_HP_METADATA_HEAP_CTX {
  struct _SEGMENT_HEAP *Heap;   // offset: 0x0 (0)
  union _RTL_RUN_ONCE InitOnce; // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _RTL_HP_LFH_CONFIG {
  ULONG MaxBlockSize;      // offset: 0x0 (0)
  ULONG MaxSubsegmentSize; // offset: 0x4 (4)
  struct {
    ULONG ForceEnable : 1; // offset: 0x0 (0)
  } Flags;                 // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _RTL_HP_SUB_ALLOCATOR_CONFIGS {
  struct _RTL_HP_LFH_CONFIG LfhConfigs; // offset: 0x0 (0)
  struct _RTL_HP_VS_CONFIG VsConfigs;   // offset: 0xc (12)
};

// 0x14 (20) bytes
struct _HEAP_SUBALLOCATOR_CALLBACKS {
  ULONG Allocate;      // offset: 0x0 (0)
  ULONG Free;          // offset: 0x4 (4)
  ULONG Commit;        // offset: 0x8 (8)
  ULONG Decommit;      // offset: 0xc (12)
  ULONG ExtendContext; // offset: 0x10 (16)
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

// 0x194 (404) bytes
struct _ASYNC_READ_THREAD_STATS {
  ULONG CurrentLoad[101]; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _VACB_ARRAY_HEADER {
  ULONG VacbArrayIndex;     // offset: 0x0 (0)
  ULONG MappingCount;       // offset: 0x4 (4)
  ULONG HighestMappedIndex; // offset: 0x8 (8)
  ULONG Reserved;           // offset: 0xc (12)
};

// 0x8 (8) bytes
struct _WRITE_BEHIND_THROUGHPUT {
  ULONG PagesYetToWrite; // offset: 0x0 (0)
  ULONG Throughput;      // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _SHARED_CACHE_MAP_LIST_CURSOR {
  struct _LIST_ENTRY SharedCacheMapLinks; // offset: 0x0 (0)
  ULONG Flags;                            // offset: 0x8 (8)
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
  ULONG SIrpBlocked : 1;          // offset: 0x0 (0)
  ULONG BlockFastResume : 1;      // offset: 0x0 (0)
  ULONG Reserved : 20;            // offset: 0x0 (0)
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

// 0x24 (36) bytes
struct _DEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT {
  ULONG Size;                // offset: 0x0 (0)
  ULONG Action;              // offset: 0x4 (4)
  ULONG Flags;               // offset: 0x8 (8)
  ULONG OperationStatus;     // offset: 0xc (12)
  ULONG ExtendedError;       // offset: 0x10 (16)
  ULONG TargetDetailedError; // offset: 0x14 (20)
  ULONG ReservedStatus;      // offset: 0x18 (24)
  ULONG OutputBlockOffset;   // offset: 0x1c (28)
  ULONG OutputBlockLength;   // offset: 0x20 (32)
};

// 0x1c (28) bytes
struct _DEVICE_DSM_DEFINITION {
  ULONG Action;                  // offset: 0x0 (0)
  UCHAR SingleRange;             // offset: 0x4 (4)
  ULONG ParameterBlockAlignment; // offset: 0x8 (8)
  ULONG ParameterBlockLength;    // offset: 0xc (12)
  UCHAR HasOutput;               // offset: 0x10 (16)
  ULONG OutputBlockAlignment;    // offset: 0x14 (20)
  ULONG OutputBlockLength;       // offset: 0x18 (24)
};

// 0x1c (28) bytes
struct _DEVICE_MANAGE_DATA_SET_ATTRIBUTES {
  ULONG Size;                 // offset: 0x0 (0)
  ULONG Action;               // offset: 0x4 (4)
  ULONG Flags;                // offset: 0x8 (8)
  ULONG ParameterBlockOffset; // offset: 0xc (12)
  ULONG ParameterBlockLength; // offset: 0x10 (16)
  ULONG DataSetRangesOffset;  // offset: 0x14 (20)
  ULONG DataSetRangesLength;  // offset: 0x18 (24)
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

// 0x10 (16) bytes
struct _THERMAL_ZONE_COUNTERS {
  ULONG Temperature;              // offset: 0x0 (0)
  ULONG ThrottleLimit;            // offset: 0x4 (4)
  ULONG ThrottleReasons;          // offset: 0x8 (8)
  ULONG TemperatureHighPrecision; // offset: 0xc (12)
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

enum KTMOH_CommitTransaction_Result {
  KTMOH_CommitTransaction_Result = 1,
  KTMOH_RollbackTransaction_Result = 2
};

// 0x8 (8) bytes
struct _KTRANSACTION_HISTORY {
  enum KTMOH_CommitTransaction_Result RecordType; // offset: 0x0 (0)
  ULONG Payload;                                  // offset: 0x4 (4)
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
  VOID(*FreeRoutine)
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

// 0x18 (24) bytes
struct _VF_AVL_TREE {
  ULONG NodeRangeSize;          // offset: 0x0 (0)
  volatile ULONG NodeCount;     // offset: 0x4 (4)
  struct _VF_AVL_TABLE *Tables; // offset: 0x8 (8)
  ULONG TablesNo;               // offset: 0xc (12)
  UCHAR UseSessionId;           // offset: 0x10 (16)
  union {
    ULONG NodeSize;     // offset: 0x14 (20)
    ULONG UseLookaside; // offset: 0x14 (20)

  } u1; // offset: 0x14 (20)
};

// 0x60 (96) bytes
struct _KTMOBJECT_NAMESPACE {
  struct _RTL_AVL_TABLE Table; // offset: 0x0 (0)
  struct _KMUTANT Mutex;       // offset: 0x38 (56)
  USHORT LinksOffset;          // offset: 0x58 (88)
  USHORT GuidOffset;           // offset: 0x5a (90)
  UCHAR Expired;               // offset: 0x5c (92)
};

// 0x10 (16) bytes
struct _CM_UOW_SET_VALUE_KEY_DATA {
  ULONG PreparedCell; // offset: 0x0 (0)
  ULONG OldValueCell; // offset: 0x4 (4)
  USHORT NameLength;  // offset: 0x8 (8)
  ULONG DataSize;     // offset: 0xc (12)
};

// 0x4 (4) bytes
struct _CM_UOW_SET_SD_DATA {
  ULONG SecurityCell; // offset: 0x0 (0)
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

// 0x4 (4) bytes
union _CM_TRANS_PTR {
  ULONG LightWeight : 1; // offset: 0x0 (0)
  VOID *TransPtr;        // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _CM_COMPONENT_HASH {
  ULONG Hash; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _CM_INDEX {
  ULONG Cell; // offset: 0x0 (0)
  union {
    struct _CM_FAST_LEAF_HINT NameHint; // offset: 0x4 (4)
    struct _CM_COMPONENT_HASH HashKey;  // offset: 0x4 (4)
  };
};

// 0xc (12) bytes
struct _CM_NAME_HASH {
  struct _CM_COMPONENT_HASH ConvKey; // offset: 0x0 (0)
  struct _CM_NAME_HASH *NextHash;    // offset: 0x4 (4)
  USHORT NameLength;                 // offset: 0x8 (8)
  WCHAR Name[1];                     // offset: 0xa (10)
};

// 0x10 (16) bytes
struct _CM_NAME_CONTROL_BLOCK {
  ULONG Compressed : 1; // offset: 0x0 (0)
  ULONG RefCount : 31;  // offset: 0x0 (0)
  union {
    struct _CM_NAME_HASH NameHash; // offset: 0x4 (4)
    struct {
      struct _CM_COMPONENT_HASH ConvKey; // offset: 0x4 (4)
      struct _CM_KEY_HASH *NextHash;     // offset: 0x8 (8)
      USHORT NameLength;                 // offset: 0xc (12)
      WCHAR Name[1];                     // offset: 0xe (14)
    };
  };
};

// 0x8 (8) bytes
struct _CM_INTENT_LOCK {
  ULONG OwnerCount;                // offset: 0x0 (0)
  struct _CM_KCB_UOW **OwnerTable; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _CACHED_CHILD_LIST {
  ULONG Count; // offset: 0x0 (0)
  union {
    ULONG ValueList;                       // offset: 0x4 (4)
    struct _CM_KEY_CONTROL_BLOCK *RealKcb; // offset: 0x4 (4)
  };
};

// 0x4 (4) bytes
struct _CM_PATH_HASH {
  ULONG Hash; // offset: 0x0 (0)
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

// 0xc (12) bytes
struct _CM_UOW_SET_VALUE_LIST_DATA {
  ULONG RefCount;               // offset: 0x0 (0)
  struct _CHILD_LIST ValueList; // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _HMAP_ENTRY {
  ULONG BlockOffset;         // offset: 0x0 (0)
  ULONG PermanentBinAddress; // offset: 0x4 (4)
  ULONG MemAlloc;            // offset: 0x8 (8)
};

// 0x1800 (6144) bytes
struct _HMAP_TABLE {
  struct _HMAP_ENTRY Table[512]; // offset: 0x0 (0)
};

// 0x1000 (4096) bytes
struct _HMAP_DIRECTORY {
  struct _HMAP_TABLE *Directory[1024]; // offset: 0x0 (0)
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

// 0xc (12) bytes
struct CMP_OFFSET_ARRAY {
  ULONG FileOffset; // offset: 0x0 (0)
  VOID *DataBuffer; // offset: 0x4 (4)
  ULONG DataLength; // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _HV_GET_CELL_CONTEXT {
  ULONG Cell;                            // offset: 0x0 (0)
  struct _HV_GET_BIN_CONTEXT BinContext; // offset: 0x4 (4)
};

// 0x28 (40) bytes
struct _HVP_VIEW_MAP {
  VOID *SectionReference;                   // offset: 0x0 (0)
  LONGLONG StorageEndFileOffset;            // offset: 0x8 (8)
  LONGLONG SectionEndFileOffset;            // offset: 0x10 (16)
  struct _CMSI_PROCESS_TUPLE *ProcessTuple; // offset: 0x18 (24)
  ULONG Flags;                              // offset: 0x1c (28)
  struct _RTL_RB_TREE ViewTree;             // offset: 0x20 (32)
};

// 0x4 (4) bytes
union _MM_STORE_KEY {
  ULONG KeyLow : 28; // offset: 0x0 (0)
  ULONG KeyHigh : 4; // offset: 0x0 (0)
  ULONG EntireKey;   // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MI_SUBSECTION_ENTRY1 {
  ULONG CrossPartitionReferences : 30; // offset: 0x0 (0)
  ULONG SubsectionMappedLarge : 2;     // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MI_STORE_INPAGE_COMPLETE_FLAGS {
  union {
    ULONG EntireFlags; // offset: 0x0 (0)
    struct {
      ULONG StoreFault : 1;          // offset: 0x0 (0)
      ULONG LowResourceFailure : 1;  // offset: 0x0 (0)
      ULONG Spare : 14;              // offset: 0x0 (0)
      ULONG RemainingPageCount : 16; // offset: 0x0 (0)
    };
  };
};

// 0x4 (4) bytes
struct _MMSECURE_FLAGS {
  ULONG ReadOnly : 1;            // offset: 0x0 (0)
  ULONG ReadWrite : 1;           // offset: 0x0 (0)
  ULONG SecNoChange : 1;         // offset: 0x0 (0)
  ULONG NoDelete : 1;            // offset: 0x0 (0)
  ULONG RequiresPteReversal : 1; // offset: 0x0 (0)
  ULONG ExclusiveSecure : 1;     // offset: 0x0 (0)
  ULONG UserModeOnly : 1;        // offset: 0x0 (0)
  ULONG NoInherit : 1;           // offset: 0x0 (0)
  ULONG Spare : 4;               // offset: 0x0 (0)
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
struct _MI_LARGEPAGE_IMAGE_INFO {
  UCHAR LargeImageBias;      // offset: 0x0 (0)
  UCHAR Spare[3];            // offset: 0x1 (1)
  ULONG ActualImageViewSize; // offset: 0x4 (4)
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
  ULONG PrivateMemory : 1;    // offset: 0x0 (0)
  ULONG PrivateFixup : 1;     // offset: 0x0 (0)
  ULONG Enclave : 1;          // offset: 0x0 (0)
  ULONG PageSize64K : 1;      // offset: 0x0 (0)
  ULONG RfgControlStack : 1;  // offset: 0x0 (0)
  ULONG Spare : 8;            // offset: 0x0 (0)
  ULONG NoChange : 1;         // offset: 0x0 (0)
  ULONG ManySubsections : 1;  // offset: 0x0 (0)
  ULONG DeleteInProgress : 1; // offset: 0x0 (0)
  ULONG LockContended : 1;    // offset: 0x0 (0)
  ULONG Lock : 1;             // offset: 0x0 (0)
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

// 0x4 (4) bytes
struct _MI_ACTIVE_PFN {
  union {
    struct {
      ULONG Tradable : 1;       // offset: 0x0 (0)
      ULONG NonPagedBuddy : 28; // offset: 0x0 (0)
    } Leaf;                     // offset: 0x0 (0)
    struct {
      ULONG Tradable : 1;       // offset: 0x0 (0)
      ULONG WsleAge : 3;        // offset: 0x0 (0)
      ULONG NonPagedBuddy : 28; // offset: 0x0 (0)
    } PageTable;                // offset: 0x0 (0)
    ULONG EntireActiveField;    // offset: 0x0 (0)
  };
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

// 0x1c (28) bytes
struct _MI_CONTROL_AREA_WAIT_BLOCK {
  struct _MI_CONTROL_AREA_WAIT_BLOCK *Next; // offset: 0x0 (0)
  ULONG WaitReason;                         // offset: 0x4 (4)
  ULONG WaitResponse;                       // offset: 0x8 (8)
  struct _KGATE Gate;                       // offset: 0xc (12)
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

// 0xc (12) bytes
struct _MI_FREE_LARGE_PAGE_LIST {
  struct _LIST_ENTRY ListHead; // offset: 0x0 (0)
  ULONG EntryCount;            // offset: 0x8 (8)
};

// 0x14 (20) bytes
struct _MI_AVAILABLE_PAGE_WAIT_STATES {
  struct _KEVENT Event; // offset: 0x0 (0)
  ULONG EventSets;      // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _MI_CROSS_PARTITION_CHARGES {
  ULONG CurrentCharges; // offset: 0x0 (0)
  ULONG ChargeFailures; // offset: 0x4 (4)
  ULONG ChargePeak;     // offset: 0x8 (8)
  ULONG ChargeMinimum;  // offset: 0xc (12)
};

// 0x10 (16) bytes
struct _PHYSICAL_MEMORY_DESCRIPTOR {
  ULONG NumberOfRuns;                 // offset: 0x0 (0)
  ULONG NumberOfPages;                // offset: 0x4 (4)
  struct _PHYSICAL_MEMORY_RUN Run[1]; // offset: 0x8 (8)
};

// 0x4 (4) bytes
struct _MI_PARTITION_FLAGS {
  ULONG BeingDeleted : 1;              // offset: 0x0 (0)
  ULONG PageListsInitialized : 1;      // offset: 0x0 (0)
  ULONG StoreReservedPagesCharged : 1; // offset: 0x0 (0)
  ULONG PureHoldingPartition : 1;      // offset: 0x0 (0)
};

// 0x80 (128) bytes
struct _MI_PARTITION_COMMIT {
  ULONG PeakCommitment;          // offset: 0x0 (0)
  ULONG TotalCommitLimitMaximum; // offset: 0x4 (4)
  volatile LONG Popups[2];       // offset: 0x8 (8)
  ULONG LowCommitThreshold;      // offset: 0x10 (16)
  ULONG HighCommitThreshold;     // offset: 0x14 (20)
  ULONG EventLock;               // offset: 0x18 (24)
  ULONG SystemCommitReserve;     // offset: 0x1c (28)
  volatile ULONG OverCommit;     // offset: 0x40 (64)
};

// 0x4 (4) bytes
struct _MI_CLONE_BLOCK_FLAGS {
  ULONG ActualCloneCommit : 27; // offset: 0x0 (0)
  ULONG CloneProtection : 5;    // offset: 0x0 (0)
};

// 0x14 (20) bytes
struct _MMPFNLIST {
  ULONG Total;            // offset: 0x0 (0)
  enum _MMLISTS ListName; // offset: 0x4 (4)
  ULONG Flink;            // offset: 0x8 (8)
  ULONG Blink;            // offset: 0xc (12)
  ULONG Lock;             // offset: 0x10 (16)
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
struct _RTL_CHASH_ENTRY {
  ULONG Key; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _RTL_CHASH_TABLE {
  struct _RTL_CHASH_ENTRY *Table; // offset: 0x0 (0)
  ULONG EntrySizeShift;           // offset: 0x4 (4)
  ULONG EntryMax;                 // offset: 0x8 (8)
  ULONG EntryCount;               // offset: 0xc (12)
};

// 0xc (12) bytes
struct _RTL_HASH_TABLE {
  ULONG EntryCount;                   // offset: 0x0 (0)
  ULONG MaskBitCount : 5;             // offset: 0x4 (4)
  ULONG BucketCount : 27;             // offset: 0x4 (4)
  struct _SINGLE_LIST_ENTRY *Buckets; // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _RTL_HASH_ENTRY {
  struct _SINGLE_LIST_ENTRY BucketLink; // offset: 0x0 (0)
  ULONG Key;                            // offset: 0x4 (4)
};

// 0x4 (4) bytes
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS {
  ULONG Primary : 1;              // offset: 0x0 (0)
  ULONG ContainmentWarning : 1;   // offset: 0x0 (0)
  ULONG Reset : 1;                // offset: 0x0 (0)
  ULONG ThresholdExceeded : 1;    // offset: 0x0 (0)
  ULONG ResourceNotAvailable : 1; // offset: 0x0 (0)
  ULONG LatentError : 1;          // offset: 0x0 (0)
  ULONG Propagated : 1;           // offset: 0x0 (0)
  ULONG Reserved : 25;            // offset: 0x0 (0)
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

// 0x14 (20) bytes
struct _IO_DRIVER_CREATE_CONTEXT {
  SHORT Size;                                 // offset: 0x0 (0)
  struct _ECP_LIST *ExtraCreateParameter;     // offset: 0x4 (4)
  VOID *DeviceObjectHint;                     // offset: 0x8 (8)
  struct _TXN_PARAMETER_BLOCK *TxnParameters; // offset: 0xc (12)
  struct _EJOB *SiloContext;                  // offset: 0x10 (16)
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

// 0x10 (16) bytes
struct _KERNEL_STACK_SEGMENT {
  ULONG StackBase;    // offset: 0x0 (0)
  ULONG StackLimit;   // offset: 0x4 (4)
  ULONG KernelStack;  // offset: 0x8 (8)
  ULONG InitialStack; // offset: 0xc (12)
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
struct _TOKEN_MANDATORY_POLICY {
  ULONG Policy; // offset: 0x0 (0)
};

// 0xc (12) bytes
struct _RTL_HASH_TABLE_ITERATOR {
  struct _RTL_HASH_TABLE *Hash;      // offset: 0x0 (0)
  struct _RTL_HASH_ENTRY *HashEntry; // offset: 0x4 (4)
  struct _SINGLE_LIST_ENTRY *Bucket; // offset: 0x8 (8)
};

// 0xc (12) bytes
struct _OBJECT_DIRECTORY_ENTRY {
  struct _OBJECT_DIRECTORY_ENTRY *ChainLink; // offset: 0x0 (0)
  VOID *Object;                              // offset: 0x4 (4)
  ULONG HashValue;                           // offset: 0x8 (8)
};

// 0x14 (20) bytes
struct _ETW_LBR_SUPPORT {
  ULONG LbrHandle;            // offset: 0x0 (0)
  ULONG LbrOptions;           // offset: 0x4 (4)
  volatile ULONG HookIdCount; // offset: 0x8 (8)
  USHORT HookId[4];           // offset: 0xc (12)
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

// 0x10 (16) bytes
struct _SEP_SID_VALUES_BLOCK {
  ULONG BlockLength;    // offset: 0x0 (0)
  LONG ReferenceCount;  // offset: 0x4 (4)
  ULONG SidCount;       // offset: 0x8 (8)
  ULONG SidValuesStart; // offset: 0xc (12)
};

// 0x10 (16) bytes
struct _FS_FILTER_SECTION_SYNC_OUTPUT {
  ULONG StructureSize;        // offset: 0x0 (0)
  ULONG SizeReturned;         // offset: 0x4 (4)
  ULONG Flags;                // offset: 0x8 (8)
  ULONG DesiredReadAlignment; // offset: 0xc (12)
};

// 0x8 (8) bytes
struct _HANDLE_TABLE_ENTRY_INFO {
  ULONG AuditMask;             // offset: 0x0 (0)
  ULONG MaxRelativeAccessMask; // offset: 0x4 (4)
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

// 0x48 (72) bytes
struct _MI_CACHED_PTES {
  struct _MI_CACHED_PTE Bins[8]; // offset: 0x0 (0)
  LONG CachedPteCount;           // offset: 0x40 (64)
};

// 0x38 (56) bytes
struct _DEVICE_MAP {
  struct _OBJECT_DIRECTORY *DosDevicesDirectory;       // offset: 0x0 (0)
  struct _OBJECT_DIRECTORY *GlobalDosDevicesDirectory; // offset: 0x4 (4)
  VOID *DosDevicesDirectoryHandle;                     // offset: 0x8 (8)
  volatile LONG ReferenceCount;                        // offset: 0xc (12)
  ULONG DriveMap;                                      // offset: 0x10 (16)
  UCHAR DriveType[32];                                 // offset: 0x14 (20)
  struct _EJOB *ServerSilo;                            // offset: 0x34 (52)
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
struct _MMPTE_HIGHLOW {
  ULONG LowPart;  // offset: 0x0 (0)
  ULONG HighPart; // offset: 0x4 (4)
};

// 0x248 (584) bytes
struct _SILO_USER_SHARED_DATA {
  ULONG ServiceSessionId;                     // offset: 0x0 (0)
  ULONG ActiveConsoleId;                      // offset: 0x4 (4)
  LONGLONG ConsoleSessionForegroundProcessId; // offset: 0x8 (8)
  enum _NT_PRODUCT_TYPE NtProductType;        // offset: 0x10 (16)
  ULONG SuiteMask;                            // offset: 0x14 (20)
  ULONG SharedUserSessionId;                  // offset: 0x18 (24)
  UCHAR IsMultiSessionSku;                    // offset: 0x1c (28)
  WCHAR NtSystemRoot[260];                    // offset: 0x1e (30)
  USHORT UserModeGlobalLogger[16];            // offset: 0x226 (550)
};

// 0x10 (16) bytes
struct _DEVICE_OBJECT_LIST_ENTRY {
  struct _DEVICE_OBJECT *DeviceObject;       // offset: 0x0 (0)
  enum _DEVICE_RELATION_LEVEL RelationLevel; // offset: 0x4 (4)
  ULONG Ordinal;                             // offset: 0x8 (8)
  ULONG Flags;                               // offset: 0xc (12)
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
  ULONG SecureDevice : 1;                  // offset: 0x4 (4)
  ULONG ChildOfVgaEnabledBridge : 1;       // offset: 0x4 (4)
  ULONG DecodeIoOnBoot : 1;                // offset: 0x4 (4)
  ULONG Reserved : 9;                      // offset: 0x4 (4)
  ULONG Address;                           // offset: 0x8 (8)
  ULONG UINumber;                          // offset: 0xc (12)
  enum _DEVICE_POWER_STATE DeviceState[7]; // offset: 0x10 (16)
  enum _SYSTEM_POWER_STATE SystemWake;     // offset: 0x2c (44)
  enum _DEVICE_POWER_STATE DeviceWake;     // offset: 0x30 (48)
  ULONG D1Latency;                         // offset: 0x34 (52)
  ULONG D2Latency;                         // offset: 0x38 (56)
  ULONG D3Latency;                         // offset: 0x3c (60)
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

// 0x80 (128) bytes
struct _HANDLE_TRACE_DEBUG_INFO {
  LONG RefCount;                            // offset: 0x0 (0)
  ULONG TableSize;                          // offset: 0x4 (4)
  ULONG BitMaskFlags;                       // offset: 0x8 (8)
  struct _FAST_MUTEX CloseCompactionLock;   // offset: 0xc (12)
  ULONG CurrentStackIndex;                  // offset: 0x2c (44)
  struct _HANDLE_TRACE_DB_ENTRY TraceDb[1]; // offset: 0x30 (48)
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
  ULONG SessionHeapInitialized : 1; // offset: 0x0 (0)
  ULONG SessionHeapDestroyed : 1;   // offset: 0x0 (0)
  ULONG Filler : 22;                // offset: 0x0 (0)
};

// 0x28 (40) bytes
struct _IO_MINI_COMPLETION_PACKET_USER {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 (0)
  ULONG PacketType;             // offset: 0x8 (8)
  VOID *KeyContext;             // offset: 0xc (12)
  VOID *ApcContext;             // offset: 0x10 (16)
  LONG IoStatus;                // offset: 0x14 (20)
  ULONG IoStatusInformation;    // offset: 0x18 (24)
  VOID(*MiniPacketCallback)
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

// 0x8 (8) bytes
struct _OWNER_ENTRY {
  ULONG OwnerThread; // offset: 0x0 (0)
  union {
    struct {
      ULONG IoPriorityBoosted : 1;    // offset: 0x4 (4)
      ULONG OwnerReferenced : 1;      // offset: 0x4 (4)
      ULONG IoQoSPriorityBoosted : 1; // offset: 0x4 (4)
      ULONG OwnerCount : 29;          // offset: 0x4 (4)
    };
    ULONG TableSize; // offset: 0x4 (4)
  };
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
      ULONG KernelSoftReboot : 1;      // offset: 0x0 (0)
      ULONG Reserved2 : 9;             // offset: 0x0 (0)
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

// 0x24 (36) bytes
struct _ETW_FILTER_PID {
  ULONG Count;   // offset: 0x0 (0)
  ULONG Pids[8]; // offset: 0x4 (4)
};

// 0x20 (32) bytes
struct _PERFINFO_GROUPMASK {
  ULONG Masks[8]; // offset: 0x0 (0)
};

// 0x174 (372) bytes
struct _ETW_SYSTEM_LOGGER_SETTINGS {
  struct _ETW_SYSTEM_LOGGER EtwpSystemLogger[8];  // offset: 0x0 (0)
  volatile ULONG EtwpActiveSystemLoggers;         // offset: 0x10 (16)
  struct _PERFINFO_GROUPMASK SiloGlobalGroupMask; // offset: 0x14 (20)
  struct _PERFINFO_GROUPMASK EtwpGroupMasks[10];  // offset: 0x34 (52)
};

// 0x4 (4) bytes
struct _MI_SESSION_DRIVER_UNLOAD {
  union {
    VOID (*Function)(struct _DRIVER_OBJECT *arg1); // offset: 0x0 (0)
    ULONG FunctionValue;                           // offset: 0x0 (0)
  };
};

// 0x1140 (4416) bytes
struct _POOL_DESCRIPTOR {
  enum _POOL_TYPE PoolType; // offset: 0x0 (0)
  union {
    struct _FAST_MUTEX PagedLock; // offset: 0x4 (4)
    ULONG NonPagedLock;           // offset: 0x4 (4)
  };
  volatile LONG RunningAllocs;              // offset: 0x40 (64)
  volatile ULONG PagesAllocated;            // offset: 0x44 (68)
  volatile ULONG BigPagesAllocated;         // offset: 0x48 (72)
  volatile ULONG BytesAllocated;            // offset: 0x4c (76)
  volatile LONG RunningDeallocs;            // offset: 0x80 (128)
  volatile ULONG PagesDeallocated;          // offset: 0x84 (132)
  volatile ULONG BigPagesDeallocated;       // offset: 0x88 (136)
  volatile ULONG BytesDeallocated;          // offset: 0x8c (140)
  ULONG PoolIndex;                          // offset: 0xc0 (192)
  enum _POOL_TYPE PoolTypeCopy;             // offset: 0xc4 (196)
  struct _SINGLE_LIST_ENTRY PendingFrees;   // offset: 0x100 (256)
  volatile LONG ThreadsProcessingDeferrals; // offset: 0x104 (260)
  volatile LONG PendingFreeDepth;           // offset: 0x108 (264)
  struct _LIST_ENTRY ListHeads[512];        // offset: 0x140 (320)
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
  VOID *SharedWaiters;            // offset: 0x10 (16)
  VOID *ExclusiveWaiters;         // offset: 0x14 (20)
  struct _OWNER_ENTRY OwnerEntry; // offset: 0x18 (24)
  ULONG ActiveEntries;            // offset: 0x20 (32)
  ULONG ContentionCount;          // offset: 0x24 (36)
  ULONG NumberOfSharedWaiters;    // offset: 0x28 (40)
  ULONG NumberOfExclusiveWaiters; // offset: 0x2c (44)
  union {
    VOID *Address;               // offset: 0x30 (48)
    ULONG CreatorBackTraceIndex; // offset: 0x30 (48)
  };
  ULONG SpinLock; // offset: 0x34 (52)
};

// 0x8 (8) bytes
struct _ACPI_METHOD_ARGUMENT_V1 {
  USHORT Type;       // offset: 0x0 (0)
  USHORT DataLength; // offset: 0x2 (2)
  union {
    ULONG Argument; // offset: 0x4 (4)
    UCHAR Data[1];  // offset: 0x4 (4)
  };
};

// 0x18 (24) bytes
struct DOCK_INTERFACE {
  USHORT Size;                              // offset: 0x0 (0)
  USHORT Version;                           // offset: 0x2 (2)
  VOID *Context;                            // offset: 0x4 (4)
  VOID (*InterfaceReference)(VOID *arg1);   // offset: 0x8 (8)
  VOID (*InterfaceDereference)(VOID *arg1); // offset: 0xc (12)
  ULONG(*ProfileDepartureSetMode)
  (VOID *arg1, enum PROFILE_DEPARTURE_STYLE arg2); // offset: 0x10 (16)
  ULONG (*ProfileDepartureUpdate)(VOID *arg1);     // offset: 0x14 (20)
};

// 0x20 (32) bytes
struct _DEVICE_OBJECT_LIST {
  ULONG Count;                                 // offset: 0x0 (0)
  ULONG MaxCount;                              // offset: 0x4 (4)
  ULONG TagCount;                              // offset: 0x8 (8)
  enum _PNP_DEVICE_DELETE_TYPE OperationCode;  // offset: 0xc (12)
  struct _DEVICE_OBJECT_LIST_ENTRY Devices[1]; // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _RELATION_LIST {
  struct _DEVICE_OBJECT_LIST *DeviceObjectList; // offset: 0x0 (0)
  UCHAR Sorted;                                 // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _JOBOBJECT_WAKE_FILTER {
  ULONG HighEdgeFilter; // offset: 0x0 (0)
  ULONG LowEdgeFilter;  // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _PO_DIAG_STACK_RECORD {
  ULONG StackDepth; // offset: 0x0 (0)
  VOID *Stack[1];   // offset: 0x4 (4)
};

// 0x2c (44) bytes
struct _MMSUPPORT_SHARED {
  volatile LONG WorkingSetLock;     // offset: 0x0 (0)
  LONG GoodCitizenWaiting;          // offset: 0x4 (4)
  ULONG ReleasedCommitDebt;         // offset: 0x8 (8)
  ULONG ResetPagesRepurposedCount;  // offset: 0xc (12)
  VOID *WsSwapSupport;              // offset: 0x10 (16)
  VOID *CommitReleaseContext;       // offset: 0x14 (20)
  volatile LONG WorkingSetCoreLock; // offset: 0x18 (24)
  VOID *AccessLog;                  // offset: 0x1c (28)
  volatile ULONG ChargedWslePages;  // offset: 0x20 (32)
  ULONG ActualWslePages;            // offset: 0x24 (36)
  VOID *ShadowMapping;              // offset: 0x28 (40)
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

// 0xc (12) bytes
struct _PS_PROPERTY_SET {
  struct _LIST_ENTRY ListHead; // offset: 0x0 (0)
  ULONG Lock;                  // offset: 0x8 (8)
};

// 0x4 (4) bytes
union _PS_CLIENT_SECURITY_CONTEXT {
  ULONG ImpersonationData;      // offset: 0x0 (0)
  VOID *ImpersonationToken;     // offset: 0x0 (0)
  ULONG ImpersonationLevel : 2; // offset: 0x0 (0)
  ULONG EffectiveOnly : 1;      // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _EX_RUNDOWN_REF {
  union {
    ULONG Count; // offset: 0x0 (0)
    VOID *Ptr;   // offset: 0x0 (0)
  };
};

// 0x10 (16) bytes
struct _EX_RUNDOWN_REF_CACHE_AWARE {
  struct _EX_RUNDOWN_REF *RunRefs; // offset: 0x0 (0)
  VOID *PoolToFree;                // offset: 0x4 (4)
  ULONG RunRefSize;                // offset: 0x8 (8)
  ULONG Number;                    // offset: 0xc (12)
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

// 0xc (12) bytes
struct _CM_KEY_HASH_TABLE_ENTRY {
  struct _EX_PUSH_LOCK Lock;  // offset: 0x0 (0)
  struct _KTHREAD *Owner;     // offset: 0x4 (4)
  struct _CM_KEY_HASH *Entry; // offset: 0x8 (8)
};

// 0xc (12) bytes
struct _EX_PUSH_LOCK_AUTO_EXPAND {
  struct _EX_PUSH_LOCK LocalLock;               // offset: 0x0 (0)
  struct _EX_PUSH_LOCK_AUTO_EXPAND_STATE State; // offset: 0x4 (4)
  ULONG Stats;                                  // offset: 0x8 (8)
};

// 0xb0 (176) bytes
struct _OBJECT_DIRECTORY {
  struct _OBJECT_DIRECTORY_ENTRY *HashBuckets[37]; // offset: 0x0 (0)
  struct _EX_PUSH_LOCK Lock;                       // offset: 0x94 (148)
  struct _DEVICE_MAP *DeviceMap;                   // offset: 0x98 (152)
  struct _OBJECT_DIRECTORY *ShadowDirectory;       // offset: 0x9c (156)
  VOID *NamespaceEntry;                            // offset: 0xa0 (160)
  VOID *SessionObject;                             // offset: 0xa4 (164)
  ULONG Flags;                                     // offset: 0xa8 (168)
  ULONG SessionId;                                 // offset: 0xac (172)
};

// 0x1c (28) bytes
struct _ETW_HASH_BUCKET {
  struct _LIST_ENTRY ListHead[3];  // offset: 0x0 (0)
  struct _EX_PUSH_LOCK BucketLock; // offset: 0x18 (24)
};

// 0x10 (16) bytes
struct _OB_HANDLE_REVOCATION_BLOCK {
  struct _LIST_ENTRY RevocationInfos; // offset: 0x0 (0)
  struct _EX_PUSH_LOCK Lock;          // offset: 0x8 (8)
  struct _EX_RUNDOWN_REF Rundown;     // offset: 0xc (12)
};

// 0x10 (16) bytes
struct _HANDLE_REVOCATION_INFO {
  struct _LIST_ENTRY ListEntry;                        // offset: 0x0 (0)
  struct _OB_HANDLE_REVOCATION_BLOCK *RevocationBlock; // offset: 0x8 (8)
  UCHAR AllowHandleRevocation;                         // offset: 0xc (12)
  UCHAR Padding1[3];                                   // offset: 0xd (13)
};

// 0x18 (24) bytes
struct _OBJECT_FOOTER {
  struct _HANDLE_REVOCATION_INFO HandleRevocationInfo; // offset: 0x0 (0)
  struct _OB_EXTENDED_USER_INFO ExtendedUserInfo;      // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _OBJECT_HEADER_EXTENDED_INFO {
  struct _OBJECT_FOOTER *Footer; // offset: 0x0 (0)
  ULONG Reserved;                // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _ETW_PRIV_HANDLE_DEMUX_TABLE {
  struct _RTL_RB_TREE Tree;  // offset: 0x0 (0)
  struct _EX_PUSH_LOCK Lock; // offset: 0x8 (8)
  USHORT SequenceNumber;     // offset: 0xc (12)
};

// 0x4 (4) bytes
struct _WNF_LOCK {
  struct _EX_PUSH_LOCK PushLock; // offset: 0x0 (0)
};

// 0x30 (48) bytes
struct _WNF_SILODRIVERSTATE {
  struct _WNF_SCOPE_MAP *ScopeMap;                   // offset: 0x0 (0)
  VOID *volatile PermanentNameStoreRootKey;          // offset: 0x4 (4)
  VOID *volatile PersistentNameStoreRootKey;         // offset: 0x8 (8)
  volatile LONGLONG PermanentNameSequenceNumber;     // offset: 0x10 (16)
  struct _WNF_LOCK PermanentNameSequenceNumberLock;  // offset: 0x18 (24)
  volatile LONGLONG PermanentNameSequenceNumberPool; // offset: 0x20 (32)
  volatile LONGLONG RuntimeNameSequenceNumber;       // offset: 0x28 (40)
};

// 0x130 (304) bytes
struct _OBJECT_NAMESPACE_LOOKUPTABLE {
  struct _LIST_ENTRY HashBuckets[37]; // offset: 0x0 (0)
  struct _EX_PUSH_LOCK Lock;          // offset: 0x128 (296)
  ULONG NumberOfPrivateSpaces;        // offset: 0x12c (300)
};

// 0x40 (64) bytes
struct _HANDLE_TABLE_FREE_LIST {
  struct _EX_PUSH_LOCK FreeListLock;               // offset: 0x0 (0)
  union _HANDLE_TABLE_ENTRY *FirstFreeHandleEntry; // offset: 0x4 (4)
  union _HANDLE_TABLE_ENTRY *LastFreeHandleEntry;  // offset: 0x8 (8)
  LONG HandleCount;                                // offset: 0xc (12)
  ULONG HighWaterMark;                             // offset: 0x10 (16)
};

// 0x8 (8) bytes
struct _POP_RW_LOCK {
  struct _EX_PUSH_LOCK Lock; // offset: 0x0 (0)
  struct _KTHREAD *Thread;   // offset: 0x4 (4)
};

// 0x14 (20) bytes
struct _MMSESSION {
  struct _EX_PUSH_LOCK SystemSpaceViewLock;         // offset: 0x0 (0)
  struct _EX_PUSH_LOCK *SystemSpaceViewLockPointer; // offset: 0x4 (4)
  struct _RTL_AVL_TREE ViewRoot;                    // offset: 0x8 (8)
  ULONG ViewCount;                                  // offset: 0xc (12)
  ULONG BitmapFailures;                             // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _ALPC_PROCESS_CONTEXT {
  struct _EX_PUSH_LOCK Lock;          // offset: 0x0 (0)
  struct _LIST_ENTRY ViewListHead;    // offset: 0x4 (4)
  volatile ULONG PagedPoolQuotaCache; // offset: 0xc (12)
};

// 0x18 (24) bytes
struct _PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE {
  struct POHANDLE__ *DeviceHandle;                  // offset: 0x0 (0)
  ULONG CompletionFlags;                            // offset: 0x4 (4)
  LONG MethodStatus;                                // offset: 0x8 (8)
  VOID *CompletionContext;                          // offset: 0xc (12)
  ULONG OutputArgumentSize;                         // offset: 0x10 (16)
  struct _ACPI_METHOD_ARGUMENT_V1 *OutputArguments; // offset: 0x14 (20)
};

// 0x8 (8) bytes
struct _PEP_WORK_ACPI_NOTIFY {
  struct POHANDLE__ *DeviceHandle; // offset: 0x0 (0)
  ULONG NotifyCode;                // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _PEP_WORK_COMPLETE_PERF_STATE {
  struct POHANDLE__ *DeviceHandle; // offset: 0x0 (0)
  ULONG Component;                 // offset: 0x4 (4)
  UCHAR Succeeded;                 // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _PEP_WORK_COMPLETE_IDLE_STATE {
  struct POHANDLE__ *DeviceHandle; // offset: 0x0 (0)
  ULONG Component;                 // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _PEP_WORK_IDLE_STATE {
  struct POHANDLE__ *DeviceHandle; // offset: 0x0 (0)
  ULONG Component;                 // offset: 0x4 (4)
  ULONG State;                     // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _PEP_WORK_ACTIVE_COMPLETE {
  struct POHANDLE__ *DeviceHandle; // offset: 0x0 (0)
  ULONG Component;                 // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _INTERRUPT_REMAPPING_INFO {
  ULONG IrtIndex : 30;       // offset: 0x0 (0)
  ULONG FlagHalInternal : 1; // offset: 0x0 (0)
  ULONG FlagTranslated : 1;  // offset: 0x0 (0)
  union {
    struct {
      ULONG MessageAddressHigh; // offset: 0x0 (0)
      ULONG MessageAddressLow;  // offset: 0x4 (4)
      USHORT MessageData;       // offset: 0x8 (8)
      USHORT Reserved;          // offset: 0xa (10)
    } Msi;                      // offset: 0x4 (4)

  } u; // offset: 0x4 (4)
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

// 0x10 (16) bytes
struct _GUID {
  ULONG Data1;    // offset: 0x0 (0)
  USHORT Data2;   // offset: 0x4 (4)
  USHORT Data3;   // offset: 0x6 (6)
  UCHAR Data4[8]; // offset: 0x8 (8)
};

// 0x1c (28) bytes
struct _PEP_WORK_POWER_CONTROL {
  struct POHANDLE__ *DeviceHandle; // offset: 0x0 (0)
  struct _GUID *PowerControlCode;  // offset: 0x4 (4)
  VOID *RequestContext;            // offset: 0x8 (8)
  VOID *InBuffer;                  // offset: 0xc (12)
  ULONG InBufferSize;              // offset: 0x10 (16)
  VOID *OutBuffer;                 // offset: 0x14 (20)
  ULONG OutBufferSize;             // offset: 0x18 (24)
};

// 0x20 (32) bytes
struct _PEP_WORK_INFORMATION {
  enum _PEP_WORK_TYPE WorkType; // offset: 0x0 (0)
  union {
    struct _PEP_WORK_ACTIVE_COMPLETE ActiveComplete;        // offset: 0x4 (4)
    struct _PEP_WORK_IDLE_STATE IdleState;                  // offset: 0x4 (4)
    struct _PEP_WORK_DEVICE_POWER DevicePower;              // offset: 0x4 (4)
    struct _PEP_WORK_POWER_CONTROL PowerControl;            // offset: 0x4 (4)
    struct _PEP_WORK_DEVICE_IDLE DeviceIdle;                // offset: 0x4 (4)
    struct _PEP_WORK_COMPLETE_IDLE_STATE CompleteIdleState; // offset: 0x4 (4)
    struct _PEP_WORK_COMPLETE_PERF_STATE CompletePerfState; // offset: 0x4 (4)
    struct _PEP_WORK_ACPI_NOTIFY AcpiNotify;                // offset: 0x4 (4)
    struct _PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE
        ControlMethodComplete; // offset: 0x4 (4)
  };
};

// 0x8 (8) bytes
struct _DEVICE_RELATIONS {
  ULONG Count;                       // offset: 0x0 (0)
  struct _DEVICE_OBJECT *Objects[1]; // offset: 0x4 (4)
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

// 0x18 (24) bytes
struct _CC_EXTERNAL_CACHE_INFO {
  VOID (*Callback)(VOID *arg1, ULONG arg2, ULONG arg3); // offset: 0x0 (0)
  struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;    // offset: 0x4 (4)
  struct _LIST_ENTRY Links;                             // offset: 0x10 (16)
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

// 0x14 (20) bytes
struct _KDEVICE_QUEUE {
  SHORT Type;                        // offset: 0x0 (0)
  SHORT Size;                        // offset: 0x2 (2)
  struct _LIST_ENTRY DeviceListHead; // offset: 0x4 (4)
  ULONG Lock;                        // offset: 0xc (12)
  UCHAR Busy;                        // offset: 0x10 (16)
};

// 0x3c (60) bytes
struct _PO_DEVICE_NOTIFY {
  struct _LIST_ENTRY Link;             // offset: 0x0 (0)
  struct _LIST_ENTRY PowerChildren;    // offset: 0x8 (8)
  struct _LIST_ENTRY PowerParents;     // offset: 0x10 (16)
  struct _DEVICE_OBJECT *TargetDevice; // offset: 0x18 (24)
  UCHAR OrderLevel;                    // offset: 0x1c (28)
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x20 (32)
  WCHAR *DeviceName;                   // offset: 0x24 (36)
  WCHAR *DriverName;                   // offset: 0x28 (40)
  ULONG ChildCount;                    // offset: 0x2c (44)
  ULONG ActiveChild;                   // offset: 0x30 (48)
  ULONG ParentCount;                   // offset: 0x34 (52)
  ULONG ActiveParent;                  // offset: 0x38 (56)
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

// 0x1c (28) bytes
struct _PROC_PERF_QOS_CLASS_POLICY {
  ULONG MaxPolicyPercent;              // offset: 0x0 (0)
  ULONG MaxEquivalentFrequencyPercent; // offset: 0x4 (4)
  ULONG MinPolicyPercent;              // offset: 0x8 (8)
  ULONG AutonomousActivityWindow;      // offset: 0xc (12)
  ULONG EnergyPerfPreference;          // offset: 0x10 (16)
  UCHAR ProvideGuidance;               // offset: 0x14 (20)
  UCHAR AllowThrottling;               // offset: 0x15 (21)
  UCHAR PerfBoostMode;                 // offset: 0x16 (22)
  UCHAR LatencyHintPerf;               // offset: 0x17 (23)
  UCHAR TrackDesiredCrossClass;        // offset: 0x18 (24)
};

// 0x4 (4) bytes
union _KLOCK_ENTRY_BOOST_BITMAP {
  ULONG AllFields;             // offset: 0x0 (0)
  ULONG AllBoosts : 17;        // offset: 0x0 (0)
  ULONG Reserved : 15;         // offset: 0x0 (0)
  USHORT CpuBoostsBitmap : 15; // offset: 0x0 (0)
  struct {
    USHORT IoBoost : 1;                     // offset: 0x0 (0)
    USHORT IoQoSBoost : 1;                  // offset: 0x2 (2)
    USHORT IoNormalPriorityWaiterCount : 8; // offset: 0x2 (2)
  };
  USHORT IoQoSWaiterCount : 7; // offset: 0x2 (2)
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
      ULONG RankBias : 1; // offset: 0x4 (4)
      ULONG Spare1 : 29;  // offset: 0x4 (4)
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
struct _RTL_CSPARSE_BITMAP {
  ULONG CommitDirectory;           // offset: 0x0 (0)
  ULONG *CommitBitmap;             // offset: 0x4 (4)
  ULONG *UserBitmap;               // offset: 0x8 (8)
  LONG BitCount;                   // offset: 0xc (12)
  ULONG BitmapLock;                // offset: 0x10 (16)
  ULONG DecommitPageIndex;         // offset: 0x14 (20)
  ULONG RtlpCSparseBitmapWakeLock; // offset: 0x18 (24)
  UCHAR LockType;                  // offset: 0x1c (28)
  UCHAR AddressSpace;              // offset: 0x1d (29)
  UCHAR MemType;                   // offset: 0x1e (30)
  UCHAR AllocAlignment;            // offset: 0x1f (31)
};

// 0x24 (36) bytes
struct _RTLP_HP_ALLOC_TRACKER {
  struct _RTL_CSPARSE_BITMAP AllocTrackerBitmap; // offset: 0x0 (0)
  ULONG BaseAddress;                             // offset: 0x20 (32)
};

// 0x28 (40) bytes
struct _RTL_SPARSE_ARRAY {
  struct _RTL_CSPARSE_BITMAP Bitmap; // offset: 0x0 (0)
  ULONG ElementCount;                // offset: 0x20 (32)
  ULONG ElementSizeShift;            // offset: 0x24 (36)
};

// 0x30 (48) bytes
struct _HEAP_VAMGR_VASPACE {
  enum _RTLP_HP_ADDRESS_SPACE_TYPE AddressSpaceType; // offset: 0x0 (0)
  ULONG BaseAddress;                                 // offset: 0x4 (4)
  struct _RTL_SPARSE_ARRAY VaRangeArray;             // offset: 0x8 (8)
};

// 0x1c (28) bytes
struct _HEAP_VAMGR_ALLOCATOR {
  ULONG TreeLock;                      // offset: 0x0 (0)
  struct _RTL_RB_TREE FreeRanges;      // offset: 0x4 (4)
  struct _HEAP_VAMGR_VASPACE *VaSpace; // offset: 0xc (12)
  VOID *PartitionHandle;               // offset: 0x10 (16)
  USHORT ChunksPerRegion;              // offset: 0x14 (20)
  USHORT RefCount;                     // offset: 0x16 (22)
  UCHAR AllocatorIndex;                // offset: 0x18 (24)
  UCHAR NumaNode;                      // offset: 0x19 (25)
  UCHAR LockType : 1;                  // offset: 0x1a (26)
  UCHAR MemoryType : 2;                // offset: 0x1a (26)
  UCHAR ConstrainedVA : 1;             // offset: 0x1a (26)
  UCHAR AllowFreeHead : 1;             // offset: 0x1a (26)
  UCHAR Spare0 : 3;                    // offset: 0x1a (26)
  UCHAR Spare1;                        // offset: 0x1b (27)
};

// 0x1c1c (7196) bytes
struct _HEAP_VAMGR_CTX {
  struct _HEAP_VAMGR_VASPACE VaSpace;           // offset: 0x0 (0)
  ULONG AllocatorLock;                          // offset: 0x30 (48)
  ULONG AllocatorCount;                         // offset: 0x34 (52)
  struct _HEAP_VAMGR_ALLOCATOR Allocators[255]; // offset: 0x38 (56)
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

// 0x20 (32) bytes
struct _MI_SUB64K_FREE_RANGES {
  struct _RTL_BITMAP BitMap;    // offset: 0x0 (0)
  struct _LIST_ENTRY ListEntry; // offset: 0x8 (8)
  struct _MMVAD_SHORT *Vad;     // offset: 0x10 (16)
  ULONG SetBits;                // offset: 0x14 (20)
  ULONG FullSetBits;            // offset: 0x18 (24)
  ULONG SubListIndex : 2;       // offset: 0x1c (28)
  ULONG Hint : 30;              // offset: 0x1c (28)
};

// 0x28 (40) bytes
struct _MI_VAD_EVENT_BLOCK {
  struct _MI_VAD_EVENT_BLOCK *Next; // offset: 0x0 (0)
  union {
    struct _KGATE Gate;                               // offset: 0x4 (4)
    struct _MMADDRESS_LIST SecureInfo;                // offset: 0x4 (4)
    struct _RTL_BITMAP BitMap;                        // offset: 0x4 (4)
    struct _MMINPAGE_SUPPORT *InPageSupport;          // offset: 0x4 (4)
    struct _MI_LARGEPAGE_IMAGE_INFO LargePage;        // offset: 0x4 (4)
    struct _ETHREAD *CreatingThread;                  // offset: 0x4 (4)
    struct _MI_SUB64K_FREE_RANGES PebTebRfg;          // offset: 0x4 (4)
    struct _MI_RFG_PROTECTED_STACK RfgProtectedStack; // offset: 0x4 (4)
    struct _MMVAD_SHORT *PlaceholderVad;              // offset: 0x4 (4)
  };
  ULONG WaitReason; // offset: 0x24 (36)
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

// 0x14 (20) bytes
struct _JOB_RATE_CONTROL_HEADER {
  VOID *RateControlQuotaReference;     // offset: 0x0 (0)
  struct _RTL_BITMAP OverQuotaHistory; // offset: 0x4 (4)
  UCHAR *BitMapBuffer;                 // offset: 0xc (12)
  ULONG BitMapBufferSize;              // offset: 0x10 (16)
};

// 0x20 (32) bytes
struct _POP_FX_DRIVER_CALLBACKS {
  VOID (*ComponentActive)(VOID *arg1, ULONG arg2); // offset: 0x0 (0)
  VOID (*ComponentIdle)(VOID *arg1, ULONG arg2);   // offset: 0x4 (4)
  VOID(*ComponentIdleState)
  (VOID *arg1, ULONG arg2, ULONG arg3);       // offset: 0x8 (8)
  VOID (*DevicePowerRequired)(VOID *arg1);    // offset: 0xc (12)
  VOID (*DevicePowerNotRequired)(VOID *arg1); // offset: 0x10 (16)
  LONG(*PowerControl)
  (VOID *arg1, struct _GUID *arg2, VOID *arg3, ULONG arg4, VOID *arg5,
   ULONG arg6, ULONG *arg7); // offset: 0x14 (20)
  VOID(*ComponentCriticalTransition)
  (VOID *arg1, ULONG arg2, UCHAR arg3); // offset: 0x18 (24)
  VOID(*DripsWatchdogCallback)
  (VOID *arg1, struct _DEVICE_OBJECT *arg2, ULONG arg3); // offset: 0x1c (28)
};

// 0x14 (20) bytes
struct _POP_FX_DRIPS_WATCHDOG_CONTEXT {
  struct _LIST_ENTRY Link;            // offset: 0x0 (0)
  ULONG ComponentIndex;               // offset: 0x8 (8)
  struct _DEVICE_NODE **ChildDevices; // offset: 0xc (12)
  ULONG ChildDeviceCount;             // offset: 0x10 (16)
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

// 0xc (12) bytes
struct _KHETERO_PROCESSOR_SET {
  ULONG IdealMask;     // offset: 0x0 (0)
  ULONG PreferredMask; // offset: 0x4 (4)
  ULONG AvailableMask; // offset: 0x8 (8)
};

// 0x8c (140) bytes
struct _KTRAP_FRAME {
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
  union {
    UCHAR NmiMsrIbrs; // offset: 0x46 (70)
    UCHAR Reserved1;  // offset: 0x46 (70)
  };
  UCHAR PreviousIrql;                                   // offset: 0x47 (71)
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
      VOID(*KernelRoutine)
      (struct _KAPC *arg1, VOID (**arg2)(VOID *arg1, VOID *arg2, VOID *arg3),
       VOID **arg3, VOID **arg4, VOID **arg5);    // offset: 0x14 (20)
      VOID (*RundownRoutine)(struct _KAPC *arg1); // offset: 0x18 (24)
      VOID(*NormalRoutine)
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

// 0x30 (48) bytes
struct _ETW_APC_ENTRY {
  union {
    struct _SINGLE_LIST_ENTRY SListEntry; // offset: 0x0 (0)
    struct _KAPC Apc;                     // offset: 0x0 (0)
  };
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

// 0x54 (84) bytes
struct _IOP_IRP_STACK_PROFILER {
  ULONG Profile[20]; // offset: 0x0 (0)
  ULONG TotalIrps;   // offset: 0x50 (80)
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
  VOID(*DeferredRoutine)
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
  VOID(*WorkRoutine)
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

// 0x4 (4) bytes
union _KPRCBFLAG {
  volatile LONG PrcbFlags;         // offset: 0x0 (0)
  ULONG BamQosLevel : 2;           // offset: 0x0 (0)
  ULONG PendingQosUpdate : 2;      // offset: 0x0 (0)
  ULONG CacheIsolationEnabled : 1; // offset: 0x0 (0)
  ULONG PrcbFlagsReserved : 27;    // offset: 0x0 (0)
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

// 0x14 (20) bytes
struct _MI_ACCESS_VIOLATION_RANGE {
  struct _RTL_BALANCED_NODE Node; // offset: 0x0 (0)
  VOID *Va;                       // offset: 0xc (12)
  VOID *EndVaInclusive;           // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _HEAP_VAMGR_RANGE {
  union {
    struct _RTL_BALANCED_NODE RbNode; // offset: 0x0 (0)
    struct _SINGLE_LIST_ENTRY Next;   // offset: 0x0 (0)
    struct {
      UCHAR Allocated : 1;  // offset: 0x0 (0)
      UCHAR Internal : 1;   // offset: 0x0 (0)
      UCHAR Standalone : 1; // offset: 0x0 (0)
      UCHAR Spare0 : 5;     // offset: 0x0 (0)
      UCHAR AllocatorIndex; // offset: 0x1 (1)
      ULONG OwnerCtx;       // offset: 0x4 (4)
      ULONG Spare1;         // offset: 0x8 (8)
    };
  };
  union {
    ULONG SizeInChunks; // offset: 0xc (12)
    struct {
      USHORT ChunkCount;     // offset: 0xc (12)
      USHORT PrevChunkCount; // offset: 0xe (14)
    };
    ULONG Signature; // offset: 0xc (12)
  };
};

// 0x28 (40) bytes
struct _MMVAD_SHORT {
  union {
    struct {
      struct _MMVAD_SHORT *NextVad; // offset: 0x0 (0)
      VOID *ExtraCreateInfo;        // offset: 0x4 (4)
    };
    struct _RTL_BALANCED_NODE VadNode; // offset: 0x0 (0)
  };
  ULONG StartingVpn;             // offset: 0xc (12)
  ULONG EndingVpn;               // offset: 0x10 (16)
  LONG ReferenceCount;           // offset: 0x14 (20)
  struct _EX_PUSH_LOCK PushLock; // offset: 0x18 (24)
  union {
    ULONG LongFlags;                // offset: 0x1c (28)
    struct _MMVAD_FLAGS VadFlags;   // offset: 0x1c (28)
    volatile ULONG VolatileVadLong; // offset: 0x1c (28)

  } u; // offset: 0x1c (28)
  union {
    ULONG LongFlags1;               // offset: 0x20 (32)
    struct _MMVAD_FLAGS1 VadFlags1; // offset: 0x20 (32)

  } u1;                                  // offset: 0x20 (32)
  struct _MI_VAD_EVENT_BLOCK *EventList; // offset: 0x24 (36)
};

// 0x10 (16) bytes
struct _MI_PROTOTYPE_PTES_NODE {
  struct _RTL_BALANCED_NODE Node; // offset: 0x0 (0)
  union {
    struct {
      ULONG AllocationType : 3; // offset: 0x0 (0)
      ULONG Inserted : 1;       // offset: 0x0 (0)
    } e1;                       // offset: 0xc (12)
    struct {
      ULONG PrototypePtesFlags; // offset: 0x0 (0)
    } e2;                       // offset: 0xc (12)

  } u1; // offset: 0xc (12)
};

// 0x1c (28) bytes
struct _MI_IMAGE_SECURITY_REFERENCE {
  struct _MI_PROTOTYPE_PTES_NODE ProtosNode;      // offset: 0x0 (0)
  VOID *DynamicRelocations;                       // offset: 0x10 (16)
  struct _IMAGE_SECURITY_CONTEXT SecurityContext; // offset: 0x14 (20)
  ULONG StrongImageReference;                     // offset: 0x18 (24)
};

// 0x20 (32) bytes
struct _MI_PAGEFILE_BITMAPS_CACHE_ENTRY {
  union {
    struct _RTL_BALANCED_NODE LengthTreeNode; // offset: 0x0 (0)
    struct _LIST_ENTRY FreeListEntry;         // offset: 0x0 (0)
  };
  struct _RTL_BALANCED_NODE LocationTreeNode; // offset: 0xc (12)
  ULONG StartingIndex;                        // offset: 0x18 (24)
  ULONG Length;                               // offset: 0x1c (28)
};

// 0x1c (28) bytes
struct _PS_IO_CONTROL_ENTRY {
  union {
    struct _RTL_BALANCED_NODE VolumeTreeNode; // offset: 0x0 (0)
    struct {
      struct _LIST_ENTRY FreeListEntry; // offset: 0x0 (0)
      ULONG ReservedForParentValue;     // offset: 0x8 (8)
    };
  };
  ULONG VolumeKey;                // offset: 0xc (12)
  struct _EX_RUNDOWN_REF Rundown; // offset: 0x10 (16)
  VOID *IoControl;                // offset: 0x14 (20)
  VOID *VolumeIoAttribution;      // offset: 0x18 (24)
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
          UCHAR IoQoSWaiter : 1;   // offset: 0xf (15)
          UCHAR Spare1 : 5;        // offset: 0xf (15)
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
  ULONG EntryLock;                             // offset: 0x28 (40)
  union _KLOCK_ENTRY_BOOST_BITMAP BoostBitmap; // offset: 0x2c (44)
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
struct _CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG {
  ULONG Size;             // offset: 0x0 (0)
  const WCHAR *TriggerId; // offset: 0x4 (4)
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
struct _SEP_CACHED_HANDLES_TABLE {
  struct _EX_PUSH_LOCK Lock;                 // offset: 0x0 (0)
  struct _RTL_DYNAMIC_HASH_TABLE *HashTable; // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _RTL_DYNAMIC_HASH_TABLE_ENTRY {
  struct _LIST_ENTRY Linkage; // offset: 0x0 (0)
  ULONG Signature;            // offset: 0x8 (8)
};

// 0x24 (36) bytes
struct _SEP_CACHED_HANDLES_ENTRY {
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry; // offset: 0x0 (0)
  LONG ReferenceCount;                            // offset: 0xc (12)
  struct _SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR
      EntryDescriptor; // offset: 0x10 (16)
  ULONG HandleCount;   // offset: 0x1c (28)
  VOID **Handles;      // offset: 0x20 (32)
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

// 0x3d0 (976) bytes
struct _HEAP_FAILURE_INFORMATION {
  ULONG Version;                                // offset: 0x0 (0)
  ULONG StructureSize;                          // offset: 0x4 (4)
  enum _HEAP_FAILURE_TYPE FailureType;          // offset: 0x8 (8)
  VOID *HeapAddress;                            // offset: 0xc (12)
  VOID *Address;                                // offset: 0x10 (16)
  VOID *Param1;                                 // offset: 0x14 (20)
  VOID *Param2;                                 // offset: 0x18 (24)
  VOID *Param3;                                 // offset: 0x1c (28)
  VOID *PreviousBlock;                          // offset: 0x20 (32)
  VOID *NextBlock;                              // offset: 0x24 (36)
  struct _FAKE_HEAP_ENTRY ExpectedDecodedEntry; // offset: 0x28 (40)
  VOID *StackTrace[32];                         // offset: 0x30 (48)
  UCHAR HeapMajorVersion;                       // offset: 0xb0 (176)
  UCHAR HeapMinorVersion;                       // offset: 0xb1 (177)
  struct _EXCEPTION_RECORD ExceptionRecord;     // offset: 0xb4 (180)
  struct _CONTEXT ContextRecord;                // offset: 0x104 (260)
};

// 0xc (12) bytes
struct _RTLP_HP_HEAP_GLOBALS {
  ULONG HeapKey;                                 // offset: 0x0 (0)
  ULONG LfhKey;                                  // offset: 0x4 (4)
  struct _HEAP_FAILURE_INFORMATION *FailureInfo; // offset: 0x8 (8)
};

// 0x1c6c (7276) bytes
struct _RTLP_HP_HEAP_MANAGER {
  struct _RTLP_HP_HEAP_GLOBALS *Globals;                // offset: 0x0 (0)
  struct _RTLP_HP_ALLOC_TRACKER AllocTracker;           // offset: 0x4 (4)
  struct _HEAP_VAMGR_CTX VaMgr;                         // offset: 0x28 (40)
  struct _RTLP_HP_METADATA_HEAP_CTX MetadataHeaps[3];   // offset: 0x1c44 (7236)
  struct _RTL_HP_SUB_ALLOCATOR_CONFIGS SubAllocConfigs; // offset: 0x1c5c (7260)
};

// 0x10 (16) bytes
struct _RTL_DRIVE_LETTER_CURDIR {
  USHORT Flags;           // offset: 0x0 (0)
  USHORT Length;          // offset: 0x2 (2)
  ULONG TimeStamp;        // offset: 0x4 (4)
  struct _STRING DosPath; // offset: 0x8 (8)
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

// 0xc (12) bytes
struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME {
  struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME *Previous; // offset: 0x0 (0)
  struct _ACTIVATION_CONTEXT *ActivationContext;        // offset: 0x4 (4)
  ULONG Flags;                                          // offset: 0x8 (8)
};

// 0x80 (128) bytes
struct _ACCESS_REASONS {
  ULONG Data[32]; // offset: 0x0 (0)
};

// 0x88 (136) bytes
struct _SID_AND_ATTRIBUTES_HASH {
  ULONG SidCount;                      // offset: 0x0 (0)
  struct _SID_AND_ATTRIBUTES *SidAttr; // offset: 0x4 (4)
  ULONG Hash[32];                      // offset: 0x8 (8)
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

// 0x6c (108) bytes
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
  struct _SEP_CACHED_HANDLES_TABLE CachedHandlesTable; // offset: 0x34 (52)
  struct _EX_PUSH_LOCK SharedDataLock;                 // offset: 0x3c (60)
  struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION
      *SharedClaimAttributes;                         // offset: 0x40 (64)
  struct _SEP_SID_VALUES_BLOCK *SharedSidValues;      // offset: 0x44 (68)
  struct _OB_HANDLE_REVOCATION_BLOCK RevocationBlock; // offset: 0x48 (72)
  struct _EJOB *ServerSilo;                           // offset: 0x58 (88)
  struct _LUID SiblingAuthId;                         // offset: 0x5c (92)
  struct _LIST_ENTRY TokenList;                       // offset: 0x64 (100)
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

// 0x14 (20) bytes
struct _CM_UOW_KEY_STATE_MODIFICATION {
  ULONG RefCount;           // offset: 0x0 (0)
  ULONG SubKeyListCount[2]; // offset: 0x4 (4)
  ULONG NewSubKeyList[2];   // offset: 0xc (12)
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
struct _ETW_DEBUGID_TRACKING_ENTRY {
  struct _LIST_ENTRY ListEntry; // offset: 0x0 (0)
  UCHAR ConsumersNotified;      // offset: 0x8 (8)
  UCHAR Spare[3];               // offset: 0x9 (9)
  ULONG DebugIdSize;            // offset: 0xc (12)
  union _CVDD DebugId;          // offset: 0x10 (16)
};

// 0x34 (52) bytes
struct _IO_WORKITEM {
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x0 (0)
  VOID(*Routine)
  (VOID *arg1, VOID *arg2, struct _IO_WORKITEM *arg3); // offset: 0x10 (16)
  VOID *IoObject;                                      // offset: 0x14 (20)
  VOID *Context;                                       // offset: 0x18 (24)
  struct _ETHREAD *WorkOnBehalfThread;                 // offset: 0x1c (28)
  ULONG Type;                                          // offset: 0x20 (32)
  struct _GUID ActivityId;                             // offset: 0x24 (36)
};

// 0x40 (64) bytes
struct _PNP_DEVICE_ACTION_ENTRY {
  struct _LIST_ENTRY ListEntry;                // offset: 0x0 (0)
  struct _DEVICE_OBJECT *DeviceObject;         // offset: 0x8 (8)
  enum _PNP_DEVICE_ACTION_REQUEST RequestType; // offset: 0xc (12)
  UCHAR ReorderingBarrier;                     // offset: 0x10 (16)
  ULONG RequestArgument;                       // offset: 0x14 (20)
  struct _KEVENT *CompletionEvent;             // offset: 0x18 (24)
  LONG *CompletionStatus;                      // offset: 0x1c (28)
  struct _GUID ActivityId;                     // offset: 0x20 (32)
  LONG RefCount;                               // offset: 0x30 (48)
  UCHAR Dequeued;                              // offset: 0x34 (52)
  struct _EX_PUSH_LOCK CancelLock;             // offset: 0x38 (56)
  UCHAR CancelRequested;                       // offset: 0x3c (60)
};

// 0x38 (56) bytes
struct _HEADLESS_LOADER_BLOCK {
  UCHAR UsedBiosSettings;   // offset: 0x0 (0)
  UCHAR DataBits;           // offset: 0x1 (1)
  UCHAR StopBits;           // offset: 0x2 (2)
  UCHAR Parity;             // offset: 0x3 (3)
  ULONG BaudRate;           // offset: 0x4 (4)
  ULONG PortNumber;         // offset: 0x8 (8)
  UCHAR *PortAddress;       // offset: 0xc (12)
  USHORT PciDeviceId;       // offset: 0x10 (16)
  USHORT PciVendorId;       // offset: 0x12 (18)
  UCHAR PciBusNumber;       // offset: 0x14 (20)
  USHORT PciBusSegment;     // offset: 0x16 (22)
  UCHAR PciSlotNumber;      // offset: 0x18 (24)
  UCHAR PciFunctionNumber;  // offset: 0x19 (25)
  ULONG PciFlags;           // offset: 0x1c (28)
  struct _GUID SystemGUID;  // offset: 0x20 (32)
  UCHAR IsMMIODevice;       // offset: 0x30 (48)
  UCHAR TerminalType;       // offset: 0x31 (49)
  UCHAR InterfaceType;      // offset: 0x32 (50)
  UCHAR RegisterBitWidth;   // offset: 0x33 (51)
  UCHAR RegisterAccessSize; // offset: 0x34 (52)
};

// 0x2c (44) bytes
struct _CMP_VOLUME_CONTEXT {
  struct _LIST_ENTRY VolumeContextListEntry; // offset: 0x0 (0)
  struct _CMP_VOLUME_MANAGER *VolumeManager; // offset: 0x8 (8)
  LONG RefCount;                             // offset: 0xc (12)
  struct _GUID VolumeGuid;                   // offset: 0x10 (16)
  VOID *VolumeFileObject;                    // offset: 0x20 (32)
  struct _CMSI_RW_LOCK VolumeContextLock;    // offset: 0x24 (36)
  UCHAR DeviceUsageNotificationSent;         // offset: 0x28 (40)
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

// 0x30 (48) bytes
struct _CM_KEY_BODY {
  ULONG Type;                                    // offset: 0x0 (0)
  struct _CM_KEY_CONTROL_BLOCK *KeyControlBlock; // offset: 0x4 (4)
  struct _CM_NOTIFY_BLOCK *NotifyBlock;          // offset: 0x8 (8)
  VOID *ProcessID;                               // offset: 0xc (12)
  struct _LIST_ENTRY KeyBodyList;                // offset: 0x10 (16)
  ULONG Flags : 16;                              // offset: 0x18 (24)
  ULONG HandleTags : 16;                         // offset: 0x18 (24)
  union _CM_TRANS_PTR Trans;                     // offset: 0x1c (28)
  struct _GUID *KtmUow;                          // offset: 0x20 (32)
  struct _LIST_ENTRY ContextListHead;            // offset: 0x24 (36)
  VOID *EnumerationResumeContext;                // offset: 0x2c (44)
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
struct _PERIODIC_CAPTURE_STATE_GUIDS {
  USHORT ProviderCount;    // offset: 0x0 (0)
  struct _GUID *Providers; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _DISALLOWED_GUIDS {
  USHORT Count;        // offset: 0x0 (0)
  struct _GUID *Guids; // offset: 0x4 (4)
};

// 0x28 (40) bytes
struct _ETW_DECODE_CONTROL_ENTRY {
  struct _ETW_DECODE_CONTROL_ENTRY *Next; // offset: 0x0 (0)
  struct _GUID Decode;                    // offset: 0x4 (4)
  struct _GUID Control;                   // offset: 0x14 (20)
  UCHAR ConsumersNotified;                // offset: 0x24 (36)
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

// 0x4e0 (1248) bytes
struct _GDI_TEB_BATCH {
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

// 0x6c (108) bytes
struct _OBP_SYSTEM_DOS_DEVICE_STATE {
  ULONG GlobalDeviceMap;      // offset: 0x0 (0)
  ULONG LocalDeviceCount[26]; // offset: 0x4 (4)
};

// 0x1a4 (420) bytes
struct _OBP_SILODRIVERSTATE {
  struct _DEVICE_MAP *SystemDeviceMap;                      // offset: 0x0 (0)
  struct _OBP_SYSTEM_DOS_DEVICE_STATE SystemDosDeviceState; // offset: 0x4 (4)
  struct _EX_PUSH_LOCK DeviceMapLock; // offset: 0x70 (112)
  struct _OBJECT_NAMESPACE_LOOKUPTABLE
      PrivateNamespaceLookupTable; // offset: 0x74 (116)
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
  VOID(*CleanupGroupCancelCallback)
  (VOID *arg1, VOID *arg2);                      // offset: 0xc (12)
  VOID *RaceDll;                                 // offset: 0x10 (16)
  struct _ACTIVATION_CONTEXT *ActivationContext; // offset: 0x14 (20)
  VOID(*FinalizationCallback)
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

// 0x108 (264) bytes
struct _MI_LARGE_PAGE_CANDIDATES {
  USHORT Hand;             // offset: 0x0 (0)
  USHORT ActiveEntryCount; // offset: 0x2 (2)
  UCHAR Overflowed;        // offset: 0x4 (4)
  ULONG PageFrames[64];    // offset: 0x8 (8)
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

// 0x38 (56) bytes
struct _FAST_ERESOURCE {
  VOID *Reserved1[3]; // offset: 0x0 (0)
  ULONG Reserved2;    // offset: 0xc (12)
  VOID *Reserved3[4]; // offset: 0x10 (16)
  ULONG Reserved4[4]; // offset: 0x20 (32)
  VOID *Reserved6[2]; // offset: 0x30 (48)
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

// 0x100 (256) bytes
struct _KNODE {
  ULONG IdleNonParkedCpuSet; // offset: 0x0 (0)
  ULONG IdleSmtSet;          // offset: 0x4 (4)
  ULONG IdleCpuSet;          // offset: 0x8 (8)
  ULONG DeepIdleSet;         // offset: 0x40 (64)
  ULONG IdleConstrainedSet;  // offset: 0x44 (68)
  ULONG NonParkedSet;        // offset: 0x48 (72)
  ULONG NonIsrTargetedSet;   // offset: 0x4c (76)
  LONG ParkLock;             // offset: 0x50 (80)
  ULONG Seed;                // offset: 0x54 (84)
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
  ULONG PpmConfiguredQosSets[4];               // offset: 0xe0 (224)
};

// 0x140 (320) bytes
struct _ENODE {
  struct _KNODE Ncb;                               // offset: 0x0 (0)
  struct _WORK_QUEUE_ITEM HotAddProcessorWorkItem; // offset: 0x100 (256)
};

// 0x1c0 (448) bytes
struct _EX_WORK_QUEUE {
  struct _KPRIQUEUE WorkPriQueue;        // offset: 0x0 (0)
  struct _EX_PARTITION *Partition;       // offset: 0x19c (412)
  struct _ENODE *Node;                   // offset: 0x1a0 (416)
  volatile ULONG WorkItemsProcessed;     // offset: 0x1a4 (420)
  ULONG WorkItemsProcessedLastPass;      // offset: 0x1a8 (424)
  volatile LONG ThreadCount;             // offset: 0x1ac (428)
  LONG MinThreads : 31;                  // offset: 0x1b0 (432)
  volatile ULONG TryFailed : 1;          // offset: 0x1b0 (432)
  LONG MaxThreads;                       // offset: 0x1b4 (436)
  enum _EXQUEUEINDEX QueueIndex;         // offset: 0x1b8 (440)
  struct _KEVENT *AllThreadsExitedEvent; // offset: 0x1bc (444)
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

// 0x40 (64) bytes
struct _MI_SYSTEM_TRIM_STATE {
  ULONG ExpansionLock;                    // offset: 0x0 (0)
  volatile LONG TrimInProgressCount;      // offset: 0x4 (4)
  struct _KEVENT PeriodicWorkingSetEvent; // offset: 0x8 (8)
  ULONG TrimAllPageFaultCount[3];         // offset: 0x18 (24)
};

// 0x4f0 (1264) bytes
struct _MI_POOL_STATE {
  ULONG MaximumNonPagedPoolThreshold;                 // offset: 0x0 (0)
  ULONG NonPagedPoolSListMaximum[3];                  // offset: 0x4 (4)
  volatile ULONG AllocatedNonPagedPool;               // offset: 0x10 (16)
  struct _SINGLE_LIST_ENTRY BadPoolHead;              // offset: 0x14 (20)
  ULONG HighEventSets;                                // offset: 0x18 (24)
  UCHAR HighEventSetsValid;                           // offset: 0x1c (28)
  ULONG PoolFailures[3][3];                           // offset: 0x20 (32)
  struct _MI_POOL_FAILURE_REASONS PoolFailureReasons; // offset: 0x44 (68)
  ULONG LowPagedPoolThreshold;                        // offset: 0x70 (112)
  ULONG HighPagedPoolThreshold;                       // offset: 0x74 (116)
  LONG SpecialPoolPdesMax;                            // offset: 0x78 (120)
  UCHAR NonPagedPoolNodes[1024];                      // offset: 0x7c (124)
  ULONG PagedPoolSListMaximum;                        // offset: 0x47c (1148)
  ULONG PreemptiveTrims[4];                           // offset: 0x480 (1152)
  ULONG SpecialPagesInUsePeak;                        // offset: 0x490 (1168)
  ULONG SpecialPoolRejected[6];                       // offset: 0x494 (1172)
  volatile ULONG SpecialPagesNonPaged;                // offset: 0x4ac (1196)
  volatile LONG SpecialPoolPdes;                      // offset: 0x4b0 (1200)
  ULONG SessionSpecialPoolPdesMax;                    // offset: 0x4b4 (1204)
  volatile LONG PermittedFaultsLock;                  // offset: 0x4b8 (1208)
  struct _RTL_AVL_TREE PermittedFaultsTree;           // offset: 0x4bc (1212)
  struct _MI_ACCESS_VIOLATION_RANGE
      PermittedFaultsInitialNode[2]; // offset: 0x4c0 (1216)
  ULONG TotalPagedPoolQuota;         // offset: 0x4e8 (1256)
  ULONG TotalNonPagedPoolQuota;      // offset: 0x4ec (1260)
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

// 0x144 (324) bytes
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
  UCHAR AudioActivity;                               // offset: 0x12d (301)
  UCHAR FullscreenVideoPlayback;                     // offset: 0x12e (302)
  ULONG EsBatteryThreshold;                          // offset: 0x130 (304)
  UCHAR EsAggressive;                                // offset: 0x134 (308)
  UCHAR EsUserAwaySetting;                           // offset: 0x135 (309)
  ULONG ConnectivityInStandby;                       // offset: 0x138 (312)
  ULONG DisconnectedStandbyMode;                     // offset: 0x13c (316)
  ULONG UserPresencePredictionEnabled;               // offset: 0x140 (320)
};

// 0xc (12) bytes
struct _MI_PAGE_COLORS {
  ULONG PageSize[3]; // offset: 0x0 (0)
};

// 0x14 (20) bytes
struct _PNP_REPLACE_PROCESSOR_LIST {
  ULONG *Affinity;      // offset: 0x0 (0)
  ULONG GroupCount;     // offset: 0x4 (4)
  ULONG AllocatedCount; // offset: 0x8 (8)
  ULONG Count;          // offset: 0xc (12)
  ULONG ApicIds[1];     // offset: 0x10 (16)
};

// 0xc (12) bytes
struct _HAL_DP_REPLACE_PARAMETERS {
  ULONG Flags;                                          // offset: 0x0 (0)
  struct _PNP_REPLACE_PROCESSOR_LIST *TargetProcessors; // offset: 0x4 (4)
  struct _PNP_REPLACE_PROCESSOR_LIST *SpareProcessors;  // offset: 0x8 (8)
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

// 0x28 (40) bytes
struct _MI_FREE_LARGE_PAGES {
  ULONG LargePageFreeCount[2];    // offset: 0x0 (0)
  ULONG LargePagesCount[2][2][1]; // offset: 0x8 (8)
  struct _MI_FREE_LARGE_PAGE_LIST
      *LargePageEntries[2][2][1]; // offset: 0x18 (24)
};

// 0x140 (320) bytes
struct _MI_NODE_INFORMATION {
  struct _MI_FREE_LARGE_PAGES FreeLargePages[2]; // offset: 0x0 (0)
  struct _MI_REBUILD_LARGE_PAGE_TIMER
      LargePageRebuildTimer;                     // offset: 0x50 (80)
  struct _RTL_BITMAP FreePageListHeadsBitmap[2]; // offset: 0x80 (128)
  ULONG FreePageListHeadsBitmapBuffer[16];       // offset: 0x90 (144)
  volatile ULONG FreeCount[2];                   // offset: 0xd0 (208)
  ULONG TotalPages[1];                           // offset: 0xd8 (216)
  ULONG TotalPagesEntireNode;                    // offset: 0xdc (220)
  ULONG MmShiftedColor;                          // offset: 0xe0 (224)
  ULONG Color;                                   // offset: 0xe4 (228)
  volatile ULONG ChannelFreeCount[1][2];         // offset: 0xe8 (232)
  struct {
    ULONG ChannelsHotCold : 1;            // offset: 0x0 (0)
    ULONG Spare : 31;                     // offset: 0x0 (0)
  } Flags;                                // offset: 0xf0 (240)
  struct _EX_PUSH_LOCK NodeLock;          // offset: 0xf4 (244)
  volatile UCHAR LargeListMoveInProgress; // offset: 0xf8 (248)
  UCHAR ChannelStatus;                    // offset: 0xf9 (249)
  UCHAR ChannelOrdering[1];               // offset: 0xfa (250)
  UCHAR LockedChannelOrdering[1];         // offset: 0xfb (251)
  UCHAR PowerAttribute[1];                // offset: 0xfc (252)
  ULONG LargePageLock;                    // offset: 0x100 (256)
  struct _MI_PAGE_COLORS PageColorTable;  // offset: 0x104 (260)
};

// 0xe4 (228) bytes
struct _MI_PARTITION_CORE {
  USHORT PartitionId; // offset: 0x0 (0)
  union {
    ULONG LongFlags;                  // offset: 0x4 (4)
    struct _MI_PARTITION_FLAGS Flags; // offset: 0x4 (4)

  } u;                                                // offset: 0x4 (4)
  ULONG Signature;                                    // offset: 0x8 (8)
  UCHAR MemoryConfigurationChanged;                   // offset: 0xc (12)
  struct _MI_NODE_INFORMATION *NodeInformation;       // offset: 0x10 (16)
  struct _RTL_AVL_TREE PageRoot;                      // offset: 0x14 (20)
  struct _PHYSICAL_MEMORY_DESCRIPTOR *MemoryNodeRuns; // offset: 0x18 (24)
  ULONG MemoryBlockReferences;                        // offset: 0x1c (28)
  struct _WORK_QUEUE_ITEM PfnUnmapWorkItem;           // offset: 0x20 (32)
  ULONG PfnUnmapCount;                                // offset: 0x30 (48)
  VOID *PfnUnmapWaitList;                             // offset: 0x34 (52)
  struct _PHYSICAL_MEMORY_DESCRIPTOR *MemoryRuns;     // offset: 0x38 (56)
  struct _KEVENT ExitEvent;                           // offset: 0x3c (60)
  VOID *SystemThreadHandles[5];                       // offset: 0x4c (76)
  struct _EPARTITION *PartitionObject;                // offset: 0x60 (96)
  struct _EX_PUSH_LOCK PartitionSystemThreadsLock;    // offset: 0x64 (100)
  struct _EX_PUSH_LOCK DynamicMemoryPushLock;         // offset: 0x68 (104)
  volatile LONG DynamicMemoryLock;                    // offset: 0x6c (108)
  UCHAR PfnUnmapActive;                               // offset: 0x70 (112)
  struct _KEVENT TemporaryMemoryEvent;                // offset: 0x74 (116)
  VOID *RootDirectory;                                // offset: 0x84 (132)
  VOID *KernelObjectsDirectory;                       // offset: 0x88 (136)
  struct _KEVENT *MemoryEvents[11];                   // offset: 0x8c (140)
  VOID *MemoryEventHandles[11];                       // offset: 0xb8 (184)
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

// 0xc (12) bytes
struct _KAFFINITY_EX {
  USHORT Count;    // offset: 0x0 (0)
  USHORT Size;     // offset: 0x2 (2)
  ULONG Reserved;  // offset: 0x4 (4)
  ULONG Bitmap[1]; // offset: 0x8 (8)
};

// 0xc (12) bytes
struct _KAFFINITY_ENUMERATION_CONTEXT {
  struct _KAFFINITY_EX *Affinity; // offset: 0x0 (0)
  ULONG CurrentMask;              // offset: 0x4 (4)
  USHORT CurrentIndex;            // offset: 0x8 (8)
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

// 0xa8 (168) bytes
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
      ULONG ChpeImage : 1;               // offset: 0x34 (52)
      ULONG ReservedFlags5 : 2;          // offset: 0x34 (52)
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
  ULONG DependentLoadFlags;                                // offset: 0xa0 (160)
  UCHAR SigningLevel;                                      // offset: 0xa4 (164)
};

// 0x20 (32) bytes
struct _OBJECT_SYMBOLIC_LINK {
  union _LARGE_INTEGER CreationTime; // offset: 0x0 (0)
  union {
    struct _UNICODE_STRING LinkTarget; // offset: 0x8 (8)
    struct {
      LONG(*Callback)
      (struct _OBJECT_SYMBOLIC_LINK *arg1, VOID *arg2,
       struct _UNICODE_STRING *arg3, VOID **arg4); // offset: 0x8 (8)
      VOID *CallbackContext;                       // offset: 0xc (12)
    };
  };
  ULONG DosDeviceDriveIndex; // offset: 0x10 (16)
  ULONG Flags;               // offset: 0x14 (20)
  ULONG AccessMask;          // offset: 0x18 (24)
};

// 0x28 (40) bytes
struct _MI_BAD_MEMORY_EVENT_ENTRY {
  ULONG BugCheckCode;                   // offset: 0x0 (0)
  LONG Active;                          // offset: 0x4 (4)
  ULONG Data;                           // offset: 0x8 (8)
  union _LARGE_INTEGER PhysicalAddress; // offset: 0x10 (16)
  struct _WORK_QUEUE_ITEM WorkItem;     // offset: 0x18 (24)
};

// 0xb0 (176) bytes
struct _MI_ERROR_STATE {
  struct _MI_BAD_MEMORY_EVENT_ENTRY BadMemoryEventEntry; // offset: 0x0 (0)
  ULONG PageOfInterest;                                  // offset: 0x28 (40)
  struct _MI_PROBE_RAISE_TRACKER ProbeRaises;            // offset: 0x2c (44)
  struct _MI_FORCED_COMMITS ForcedCommits;               // offset: 0x70 (112)
  ULONG WsleFailures[1];                                 // offset: 0x78 (120)
  ULONG PageHashErrors;                                  // offset: 0x7c (124)
  ULONG CheckZeroCount;                                  // offset: 0x80 (128)
  volatile LONG ZeroedPageSingleBitErrorsDetected;       // offset: 0x84 (132)
  volatile LONG BadPagesDetected;                        // offset: 0x88 (136)
  LONG ScrubPasses;                                      // offset: 0x8c (140)
  LONG ScrubBadPagesFound;                               // offset: 0x90 (144)
  ULONG UserViewFailures;                                // offset: 0x94 (148)
  ULONG UserViewCollisionFailures;                       // offset: 0x98 (152)
  ULONG UserAllocateFailures;                            // offset: 0x9c (156)
  ULONG UserAllocateCollisionFailures;                   // offset: 0xa0 (160)
  struct _MI_RESAVAIL_FAILURES ResavailFailures;         // offset: 0xa4 (164)
  UCHAR PendingBadPages;                                 // offset: 0xac (172)
  UCHAR InitFailure;                                     // offset: 0xad (173)
  UCHAR StopBadMaps;                                     // offset: 0xae (174)
};

// 0x20 (32) bytes
struct _DOMAIN_CONFIGURATION_ARM64 {
  union _LARGE_INTEGER Ttbr0; // offset: 0x0 (0)
  union _LARGE_INTEGER Ttbr1; // offset: 0x8 (8)
  ULONG Mair0;                // offset: 0x10 (16)
  ULONG Mair1;                // offset: 0x14 (20)
  UCHAR InputSize0;           // offset: 0x18 (24)
  UCHAR InputSize1;           // offset: 0x19 (25)
};

// 0x28 (40) bytes
struct _DOMAIN_CONFIGURATION {
  enum _DOMAIN_CONFIGURATION_ARCH Type;     // offset: 0x0 (0)
  struct _DOMAIN_CONFIGURATION_ARM64 Arm64; // offset: 0x8 (8)
};

// 0x50 (80) bytes
struct _LOADER_PARAMETER_CI_EXTENSION {
  ULONG CodeIntegrityOptions;                  // offset: 0x0 (0)
  ULONG UpgradeInProgress : 1;                 // offset: 0x4 (4)
  ULONG IsWinPE : 1;                           // offset: 0x4 (4)
  ULONG CustomKernelSignersAllowed : 1;        // offset: 0x4 (4)
  ULONG Reserved : 29;                         // offset: 0x4 (4)
  union _LARGE_INTEGER WhqlEnforcementDate;    // offset: 0x8 (8)
  ULONG RevocationListOffset;                  // offset: 0x10 (16)
  ULONG RevocationListSize;                    // offset: 0x14 (20)
  ULONG CodeIntegrityPolicyOffset;             // offset: 0x18 (24)
  ULONG CodeIntegrityPolicySize;               // offset: 0x1c (28)
  ULONG CodeIntegrityPolicyHashOffset;         // offset: 0x20 (32)
  ULONG CodeIntegrityPolicyHashSize;           // offset: 0x24 (36)
  ULONG CodeIntegrityPolicyOriginalHashOffset; // offset: 0x28 (40)
  ULONG CodeIntegrityPolicyOriginalHashSize;   // offset: 0x2c (44)
  LONG WeakCryptoPolicyLoadStatus;             // offset: 0x30 (48)
  ULONG WeakCryptoPolicyOffset;                // offset: 0x34 (52)
  ULONG WeakCryptoPolicySize;                  // offset: 0x38 (56)
  ULONG SecureBootPolicyOffset;                // offset: 0x3c (60)
  ULONG SecureBootPolicySize;                  // offset: 0x40 (64)
  ULONG Reserved2;                             // offset: 0x44 (68)
  UCHAR SerializedData[1];                     // offset: 0x48 (72)
};

// 0x20 (32) bytes
struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2 {
  ULONG Version;                         // offset: 0x0 (0)
  ULONG AbnormalResetOccurred;           // offset: 0x4 (4)
  ULONG OfflineMemoryDumpCapable;        // offset: 0x8 (8)
  union _LARGE_INTEGER ResetDataAddress; // offset: 0x10 (16)
  ULONG ResetDataSize;                   // offset: 0x18 (24)
};

// 0x20 (32) bytes
struct DEBUG_MEMORY_REQUIREMENTS {
  union _LARGE_INTEGER Start;  // offset: 0x0 (0)
  union _LARGE_INTEGER MaxEnd; // offset: 0x8 (8)
  VOID *VirtualAddress;        // offset: 0x10 (16)
  ULONG Length;                // offset: 0x14 (20)
  UCHAR Cached;                // offset: 0x18 (24)
  UCHAR Aligned;               // offset: 0x19 (25)
};

// 0xa8 (168) bytes
struct _DEBUG_DEVICE_DESCRIPTOR {
  ULONG Bus;       // offset: 0x0 (0)
  ULONG Slot;      // offset: 0x4 (4)
  USHORT Segment;  // offset: 0x8 (8)
  USHORT VendorID; // offset: 0xa (10)
  USHORT DeviceID; // offset: 0xc (12)
  UCHAR BaseClass; // offset: 0xe (14)
  UCHAR SubClass;  // offset: 0xf (15)
  UCHAR ProgIf;    // offset: 0x10 (16)
  union {
    UCHAR Flags; // offset: 0x11 (17)
    struct {
      UCHAR DbgHalScratchAllocated : 1; // offset: 0x11 (17)
      UCHAR DbgBarsMapped : 1;          // offset: 0x11 (17)
      UCHAR DbgScratchAllocated : 1;    // offset: 0x11 (17)
    };
  };
  UCHAR Initialized;                          // offset: 0x12 (18)
  UCHAR Configured;                           // offset: 0x13 (19)
  struct DEBUG_DEVICE_ADDRESS BaseAddress[6]; // offset: 0x14 (20)
  struct DEBUG_MEMORY_REQUIREMENTS Memory;    // offset: 0x60 (96)
  USHORT PortType;                            // offset: 0x80 (128)
  USHORT PortSubtype;                         // offset: 0x82 (130)
  VOID *OemData;                              // offset: 0x84 (132)
  ULONG OemDataLength;                        // offset: 0x88 (136)
  enum KD_NAMESPACE_ENUM NameSpace;           // offset: 0x8c (140)
  WCHAR *NameSpacePath;                       // offset: 0x90 (144)
  ULONG NameSpacePathLength;                  // offset: 0x94 (148)
  ULONG TransportType;                        // offset: 0x98 (152)
  struct _DEBUG_TRANSPORT_DATA TransportData; // offset: 0x9c (156)
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
  WCHAR *LoggerName;                          // offset: 0x38 (56)
  WCHAR *LogFileName;                         // offset: 0x3c (60)
  struct _RTL_TIME_ZONE_INFORMATION TimeZone; // offset: 0x40 (64)
  union _LARGE_INTEGER BootTime;              // offset: 0xf0 (240)
  union _LARGE_INTEGER PerfFreq;              // offset: 0xf8 (248)
  union _LARGE_INTEGER StartTime;             // offset: 0x100 (256)
  ULONG ReservedFlags;                        // offset: 0x108 (264)
  ULONG BuffersLost;                          // offset: 0x10c (268)
};

// 0x48 (72) bytes
struct _IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR {
  ULONG Version;                           // offset: 0x0 (0)
  ULONG Size;                              // offset: 0x4 (4)
  ULONG CryptoIndex;                       // offset: 0x8 (8)
  ULONG AlgorithmId;                       // offset: 0xc (12)
  ULONG DataUnitSize;                      // offset: 0x10 (16)
  ULONG KeySize;                           // offset: 0x14 (20)
  UCHAR KeyHash[32];                       // offset: 0x18 (24)
  VOID *KeyVirtualAddress;                 // offset: 0x38 (56)
  union _LARGE_INTEGER KeyPhysicalAddress; // offset: 0x40 (64)
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
struct _LOGGED_STREAM_CALLBACK_V1 {
  VOID *LogHandle; // offset: 0x0 (0)
  VOID(*FlushToLsnRoutine)
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
struct _ETW_REF_CLOCK {
  union _LARGE_INTEGER StartTime;      // offset: 0x0 (0)
  union _LARGE_INTEGER StartPerfClock; // offset: 0x8 (8)
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

// 0x30 (48) bytes
struct _SEP_RM_LSA_CONNECTION_STATE {
  VOID *LsaProcessHandle;                         // offset: 0x0 (0)
  VOID *LsaCommandPortHandle;                     // offset: 0x4 (4)
  VOID *SepRmThreadHandle;                        // offset: 0x8 (8)
  VOID *RmCommandPortHandle;                      // offset: 0xc (12)
  VOID *RmCommandServerPortHandle;                // offset: 0x10 (16)
  VOID *LsaCommandPortSectionHandle;              // offset: 0x14 (20)
  union _LARGE_INTEGER LsaCommandPortSectionSize; // offset: 0x18 (24)
  VOID *LsaViewPortMemory;                        // offset: 0x20 (32)
  VOID *RmViewPortMemory;                         // offset: 0x24 (36)
  LONG LsaCommandPortMemoryDelta;                 // offset: 0x28 (40)
  UCHAR LsaCommandPortActive;                     // offset: 0x2c (44)
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

// 0x10 (16) bytes
struct _PNP_RESOURCE_CONFLICT_TRACE_CONTEXT {
  UCHAR ResourceType;                               // offset: 0x0 (0)
  ULONG AlternativeCount;                           // offset: 0x4 (4)
  struct _IO_RESOURCE_DESCRIPTOR *ResourceRequests; // offset: 0x8 (8)
  VOID *ArbiterInstance;                            // offset: 0xc (12)
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

// 0x88 (136) bytes
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
  VOID *FileInformation;                                // offset: 0x48 (72)
  enum _CREATE_FILE_TYPE CreateFileType;                // offset: 0x4c (76)
  VOID *MailslotOrPipeParameters;                       // offset: 0x50 (80)
  UCHAR Override;                                       // offset: 0x54 (84)
  UCHAR QueryOnly;                                      // offset: 0x55 (85)
  UCHAR DeleteOnly;                                     // offset: 0x56 (86)
  UCHAR FullAttributes;                                 // offset: 0x57 (87)
  struct _DUMMY_FILE_OBJECT *LocalFileObject;           // offset: 0x58 (88)
  ULONG InternalFlags;                                  // offset: 0x5c (92)
  CHAR AccessMode;                                      // offset: 0x60 (96)
  struct _IO_DRIVER_CREATE_CONTEXT DriverCreateContext; // offset: 0x64 (100)
  enum _FILE_INFORMATION_CLASS FileInformationClass;    // offset: 0x78 (120)
  ULONG FileInformationLength;                          // offset: 0x7c (124)
  UCHAR FilterQuery;                                    // offset: 0x80 (128)
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
  LONG(*WriteRoutine)
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
  LONG(*ReadRoutine)
  (LONG arg1, union _LARGE_INTEGER *arg2,
   struct _MDL *arg3); // offset: 0x6c (108)
  LONG(*GetDriveTelemetryRoutine)
  (ULONG arg1, ULONG arg2, VOID *arg3, ULONG arg4); // offset: 0x70 (112)
  ULONG LogSectionTruncateSize;                     // offset: 0x74 (116)
  ULONG Parameters[16];                             // offset: 0x78 (120)
  VOID(*GetTransferSizesRoutine)
  (ULONG *arg1, ULONG *arg2); // offset: 0xb8 (184)
  VOID(*DumpNotifyRoutine)
  (enum _DUMP_EVENTS arg1, VOID *arg2, ULONG arg3); // offset: 0xbc (188)
};

// 0x100 (256) bytes
struct _DUMP_STACK_CONTEXT {
  struct _DUMP_INITIALIZATION_CONTEXT Init; // offset: 0x0 (0)
  union _LARGE_INTEGER PartitionOffset;     // offset: 0xc0 (192)
  union {
    VOID *DumpPointers; // offset: 0xc8 (200)
    VOID *StorageInfo;  // offset: 0xc8 (200)
  };
  UCHAR UseStorageInfo;                           // offset: 0xcc (204)
  ULONG PointersLength;                           // offset: 0xd0 (208)
  WCHAR *ModulePrefix;                            // offset: 0xd4 (212)
  struct _LIST_ENTRY DriverList;                  // offset: 0xd8 (216)
  struct _STRING InitMsg;                         // offset: 0xe0 (224)
  struct _STRING ProgMsg;                         // offset: 0xe8 (232)
  struct _STRING DoneMsg;                         // offset: 0xf0 (240)
  VOID *FileObject;                               // offset: 0xf8 (248)
  enum _DEVICE_USAGE_NOTIFICATION_TYPE UsageType; // offset: 0xfc (252)
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
        VOID(*UserApcRoutine)
        (VOID *arg1, struct _IO_STATUS_BLOCK *arg2,
         ULONG arg3);         // offset: 0x0 (0)
        VOID *IssuingProcess; // offset: 0x0 (0)
      };
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

// 0x24 (36) bytes
struct _WAITING_IRP {
  struct _LIST_ENTRY Links;                                 // offset: 0x0 (0)
  struct _IRP *Irp;                                         // offset: 0x8 (8)
  VOID (*CompletionRoutine)(VOID *arg1, struct _IRP *arg2); // offset: 0xc (12)
  VOID *Context;                                            // offset: 0x10 (16)
  struct _KEVENT *Event;                                    // offset: 0x14 (20)
  ULONG Information;                                        // offset: 0x18 (24)
  UCHAR BreakAllRH;                                         // offset: 0x1c (28)
  UCHAR OplockBreakNotify;                                  // offset: 0x1d (29)
  struct _FILE_OBJECT *FileObject;                          // offset: 0x20 (32)
};

// 0x100 (256) bytes
struct _IOV_FORCED_PENDING_TRACE {
  struct _IRP *Irp;        // offset: 0x0 (0)
  struct _ETHREAD *Thread; // offset: 0x4 (4)
  VOID *StackTrace[62];    // offset: 0x8 (8)
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

// 0x18 (24) bytes
struct _POP_IRP_WORKER_ENTRY {
  struct _LIST_ENTRY Link;       // offset: 0x0 (0)
  struct _ETHREAD *Thread;       // offset: 0x8 (8)
  struct _IRP *Irp;              // offset: 0xc (12)
  struct _DEVICE_OBJECT *Device; // offset: 0x10 (16)
  UCHAR Static;                  // offset: 0x14 (20)
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
    struct _IRP *Irp;                                  // offset: 0x0 (0)
    VOID *FileInformation;                             // offset: 0x4 (4)
    ULONG *Length;                                     // offset: 0x8 (8)
    enum _FILE_INFORMATION_CLASS FileInformationClass; // offset: 0xc (12)
    LONG CompletionStatus;                             // offset: 0x10 (16)
  } QueryOpen;                                         // offset: 0x0 (0)
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

// 0x40 (64) bytes
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
  LONG(*PreQueryOpen)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, VOID **arg2); // offset: 0x38 (56)
  VOID(*PostQueryOpen)
  (struct _FS_FILTER_CALLBACK_DATA *arg1, LONG arg2,
   VOID *arg3); // offset: 0x3c (60)
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
      ULONG Length;           // offset: 0x0 (0)
      ULONG CompletionFilter; // offset: 0x4 (4)
      enum _DIRECTORY_NOTIFY_INFORMATION_CLASS
          DirectoryNotifyInformationClass; // offset: 0x8 (8)
    } NotifyDirectoryEx;                   // offset: 0x4 (4)
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
  LONG(*CompletionRoutine)
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
      ULONG ZeroMapRegisters : 1;      // offset: 0xc (12)
      ULONG Reserved : 29;             // offset: 0xc (12)
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

// 0x8 (8) bytes
struct LIST_ENTRY32 {
  ULONG Flink; // offset: 0x0 (0)
  ULONG Blink; // offset: 0x4 (4)
};

// 0x18 (24) bytes
struct _ACTIVATION_CONTEXT_STACK32 {
  ULONG ActiveFrame;                  // offset: 0x0 (0)
  struct LIST_ENTRY32 FrameListCache; // offset: 0x4 (4)
  ULONG Flags;                        // offset: 0xc (12)
  ULONG NextCookieSequenceNumber;     // offset: 0x10 (16)
  ULONG StackId;                      // offset: 0x14 (20)
};

// 0x38 (56) bytes
struct _MI_TRIAGE_DUMP_DATA {
  ULONG BadPageCount;                     // offset: 0x0 (0)
  LONG BadPagesDetected;                  // offset: 0x4 (4)
  LONG ZeroedPageSingleBitErrorsDetected; // offset: 0x8 (8)
  LONG ScrubPasses;                       // offset: 0xc (12)
  LONG ScrubBadPagesFound;                // offset: 0x10 (16)
  ULONG PageHashErrors;                   // offset: 0x14 (20)
  ULONGLONG FeatureBits;                  // offset: 0x18 (24)
  ULONG TimeZoneId;                       // offset: 0x20 (32)
  union _MI_FLAGS Flags;                  // offset: 0x24 (36)
  VOID *VsmConnection;                    // offset: 0x28 (40)
  struct _EXCEPTION_REGISTRATION_RECORD
      *ExceptionChainTerminator; // offset: 0x2c (44)
  struct _EXCEPTION_REGISTRATION_RECORD
      ExceptionChainTerminatorRecord; // offset: 0x30 (48)
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

// 0xf0 (240) bytes
struct _ETW_WMITRACE_WORK {
  ULONG LoggerId;      // offset: 0x0 (0)
  ULONG SiloSessionId; // offset: 0x4 (4)
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

// 0x10 (16) bytes
struct _KTIMER2_COLLECTION {
  struct _RTL_RB_TREE Tree; // offset: 0x0 (0)
  ULONGLONG NextDueTime;    // offset: 0x8 (8)
};

// 0x28 (40) bytes
struct _CRITICAL_PROCESS_EXCEPTION_DATA {
  struct _GUID ReportId;             // offset: 0x0 (0)
  struct _UNICODE_STRING ModuleName; // offset: 0x10 (16)
  ULONG ModuleTimestamp;             // offset: 0x18 (24)
  ULONG ModuleSize;                  // offset: 0x1c (28)
  ULONGLONG Offset;                  // offset: 0x20 (32)
};

// 0x1f8 (504) bytes
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
  union _LARGE_INTEGER HibernateCompleteTimestamp; // offset: 0x48 (72)
  ULONG POSTTime;                                  // offset: 0x50 (80)
  ULONG ResumeBootMgrTime;                         // offset: 0x54 (84)
  ULONG BootmgrUserInputTime;                      // offset: 0x58 (88)
  ULONGLONG ResumeAppTicks;                        // offset: 0x60 (96)
  ULONGLONG ResumeAppStartTimestamp;               // offset: 0x68 (104)
  ULONGLONG ResumeLibraryInitTicks;                // offset: 0x70 (112)
  ULONGLONG ResumeInitTicks;                       // offset: 0x78 (120)
  ULONGLONG ResumeRestoreImageStartTimestamp;      // offset: 0x80 (128)
  ULONGLONG ResumeHiberFileTicks;                  // offset: 0x88 (136)
  ULONGLONG ResumeIoTicks;                         // offset: 0x90 (144)
  ULONGLONG ResumeDecompressTicks;                 // offset: 0x98 (152)
  ULONGLONG ResumeAllocateTicks;                   // offset: 0xa0 (160)
  ULONGLONG ResumeUserInOutTicks;                  // offset: 0xa8 (168)
  ULONGLONG ResumeMapTicks;                        // offset: 0xb0 (176)
  ULONGLONG ResumeUnmapTicks;                      // offset: 0xb8 (184)
  ULONGLONG ResumeChecksumTicks;                   // offset: 0xc0 (192)
  ULONGLONG ResumeChecksumIoTicks;                 // offset: 0xc8 (200)
  ULONGLONG ResumeKernelSwitchTimestamp;           // offset: 0xd0 (208)
  ULONGLONG CyclesPerMs;                           // offset: 0xd8 (216)
  ULONGLONG WriteLogDataTimestamp;                 // offset: 0xe0 (224)
  ULONGLONG KernelReturnFromHandler;               // offset: 0xe8 (232)
  ULONGLONG TimeStampCounterAtSwitchTime;          // offset: 0xf0 (240)
  ULONGLONG HalTscOffset;                          // offset: 0xf8 (248)
  ULONGLONG HvlTscOffset;                          // offset: 0x100 (256)
  ULONGLONG SleeperThreadEnd;                      // offset: 0x108 (264)
  ULONGLONG PostCmosUpdateTimestamp;               // offset: 0x110 (272)
  ULONGLONG KernelReturnSystemPowerStateTimestamp; // offset: 0x118 (280)
  ULONGLONG IoBoundedness;                         // offset: 0x120 (288)
  ULONGLONG KernelDecompressTicks;                 // offset: 0x128 (296)
  ULONGLONG KernelIoTicks;                         // offset: 0x130 (304)
  ULONGLONG KernelCopyTicks;                       // offset: 0x138 (312)
  ULONGLONG ReadCheckCount;                        // offset: 0x140 (320)
  ULONGLONG KernelInitTicks;                       // offset: 0x148 (328)
  ULONGLONG KernelResumeHiberFileTicks;            // offset: 0x150 (336)
  ULONGLONG KernelIoCpuTicks;                      // offset: 0x158 (344)
  ULONGLONG KernelSharedBufferTicks;               // offset: 0x160 (352)
  ULONGLONG KernelAnimationTicks;                  // offset: 0x168 (360)
  ULONGLONG KernelChecksumTicks;                   // offset: 0x170 (368)
  ULONGLONG KernelChecksumIoTicks;                 // offset: 0x178 (376)
  union _LARGE_INTEGER AnimationStart;             // offset: 0x180 (384)
  union _LARGE_INTEGER AnimationStop;              // offset: 0x188 (392)
  ULONG DeviceResumeTime;                          // offset: 0x190 (400)
  ULONGLONG SecurePagesProcessed;                  // offset: 0x198 (408)
  ULONGLONG BootPagesProcessed;                    // offset: 0x1a0 (416)
  ULONGLONG KernelPagesProcessed;                  // offset: 0x1a8 (424)
  ULONGLONG BootBytesWritten;                      // offset: 0x1b0 (432)
  ULONGLONG KernelBytesWritten;                    // offset: 0x1b8 (440)
  ULONGLONG BootPagesWritten;                      // offset: 0x1c0 (448)
  ULONGLONG KernelPagesWritten;                    // offset: 0x1c8 (456)
  ULONGLONG BytesWritten;                          // offset: 0x1d0 (464)
  ULONG PagesWritten;                              // offset: 0x1d8 (472)
  ULONG FileRuns;                                  // offset: 0x1dc (476)
  ULONG NoMultiStageResumeReason;                  // offset: 0x1e0 (480)
  ULONG MaxHuffRatio;                              // offset: 0x1e4 (484)
  ULONGLONG AdjustedTotalResumeTime;               // offset: 0x1e8 (488)
  ULONGLONG ResumeCompleteTimestamp;               // offset: 0x1f0 (496)
};

// 0x338 (824) bytes
struct PO_MEMORY_IMAGE {
  ULONG Signature;                                 // offset: 0x0 (0)
  ULONG ImageType;                                 // offset: 0x4 (4)
  ULONG CheckSum;                                  // offset: 0x8 (8)
  ULONG LengthSelf;                                // offset: 0xc (12)
  ULONG PageSelf;                                  // offset: 0x10 (16)
  ULONG PageSize;                                  // offset: 0x14 (20)
  union _LARGE_INTEGER SystemTime;                 // offset: 0x18 (24)
  ULONGLONG InterruptTime;                         // offset: 0x20 (32)
  ULONGLONG FeatureFlags;                          // offset: 0x28 (40)
  UCHAR HiberFlags;                                // offset: 0x30 (48)
  UCHAR spare[3];                                  // offset: 0x31 (49)
  ULONG NoHiberPtes;                               // offset: 0x34 (52)
  ULONG HiberVa;                                   // offset: 0x38 (56)
  ULONG NoFreePages;                               // offset: 0x3c (60)
  ULONG FreeMapCheck;                              // offset: 0x40 (64)
  ULONG WakeCheck;                                 // offset: 0x44 (68)
  ULONGLONG NumPagesForLoader;                     // offset: 0x48 (72)
  ULONG FirstBootRestorePage;                      // offset: 0x50 (80)
  ULONG FirstKernelRestorePage;                    // offset: 0x54 (84)
  ULONG FirstChecksumRestorePage;                  // offset: 0x58 (88)
  ULONGLONG NoChecksumEntries;                     // offset: 0x60 (96)
  struct _PO_HIBER_PERF PerfInfo;                  // offset: 0x68 (104)
  ULONG FirmwareRuntimeInformationPages;           // offset: 0x260 (608)
  ULONG FirmwareRuntimeInformation[1];             // offset: 0x264 (612)
  ULONG SpareUlong;                                // offset: 0x268 (616)
  ULONG NoBootLoaderLogPages;                      // offset: 0x26c (620)
  ULONG BootLoaderLogPages[24];                    // offset: 0x270 (624)
  ULONG NotUsed;                                   // offset: 0x2d0 (720)
  ULONG ResumeContextCheck;                        // offset: 0x2d4 (724)
  ULONG ResumeContextPages;                        // offset: 0x2d8 (728)
  UCHAR Hiberboot;                                 // offset: 0x2dc (732)
  UCHAR SecureLaunched;                            // offset: 0x2dd (733)
  UCHAR SecureBoot;                                // offset: 0x2de (734)
  ULONGLONG HvCr3;                                 // offset: 0x2e0 (736)
  ULONGLONG HvEntryPoint;                          // offset: 0x2e8 (744)
  ULONGLONG HvReservedTransitionAddress;           // offset: 0x2f0 (752)
  ULONGLONG HvReservedTransitionAddressSize;       // offset: 0x2f8 (760)
  ULONGLONG BootFlags;                             // offset: 0x300 (768)
  ULONGLONG RestoreProcessorStateRoutine;          // offset: 0x308 (776)
  ULONG HighestPhysicalPage;                       // offset: 0x310 (784)
  ULONG BitlockerKeyPfns[4];                       // offset: 0x314 (788)
  ULONG HardwareSignature;                         // offset: 0x324 (804)
  union _LARGE_INTEGER SMBiosTablePhysicalAddress; // offset: 0x328 (808)
  ULONG SMBiosTableLength;                         // offset: 0x330 (816)
  UCHAR SMBiosMajorVersion;                        // offset: 0x334 (820)
  UCHAR SMBiosMinorVersion;                        // offset: 0x335 (821)
  UCHAR HiberResumeXhciHandoffSkip;                // offset: 0x336 (822)
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

// 0x20 (32) bytes
struct _PS_TRUSTLET_TKSESSION_ID {
  ULONGLONG SessionId[4]; // offset: 0x0 (0)
};

// 0x8 (8) bytes
union _PS_INTERLOCKED_TIMER_DELAY_VALUES {
  ULONGLONG DelayMs : 30;            // offset: 0x0 (0)
  ULONGLONG CoalescingWindowMs : 30; // offset: 0x0 (0)
  ULONGLONG Reserved : 1;            // offset: 0x0 (0)
  ULONGLONG NewTimerWheel : 1;       // offset: 0x0 (0)
  ULONGLONG Retry : 1;               // offset: 0x0 (0)
  ULONGLONG Locked : 1;              // offset: 0x0 (0)
  ULONGLONG All;                     // offset: 0x0 (0)
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

// 0x10 (16) bytes
struct _MI_SYSTEM_CACHE_VIEW_ATTRIBUTES {
  ULONGLONG NumberOfPtes : 6;   // offset: 0x0 (0)
  ULONGLONG PartitionId : 10;   // offset: 0x0 (0)
  ULONGLONG Spare : 2;          // offset: 0x0 (0)
  ULONGLONG SectionOffset : 48; // offset: 0x8 (8)
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
  ULONGLONG RankNumber : 1;          // offset: 0x0 (0)
  ULONGLONG CardHandle : 1;          // offset: 0x0 (0)
  ULONGLONG ModuleHandle : 1;        // offset: 0x0 (0)
  ULONGLONG ExtendedRow : 1;         // offset: 0x0 (0)
  ULONGLONG BankGroup : 1;           // offset: 0x0 (0)
  ULONGLONG BankAddress : 1;         // offset: 0x0 (0)
  ULONGLONG ChipIdentification : 1;  // offset: 0x0 (0)
  ULONGLONG Reserved : 42;           // offset: 0x0 (0)
  ULONGLONG ValidBits;               // offset: 0x0 (0)
};

// 0x50 (80) bytes
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
  UCHAR Extended;                                       // offset: 0x49 (73)
  USHORT RankNumber;                                    // offset: 0x4a (74)
  USHORT CardHandle;                                    // offset: 0x4c (76)
  USHORT ModuleHandle;                                  // offset: 0x4e (78)
};

// 0x10 (16) bytes
struct _TraceLoggingMetadata_t {
  ULONG Signature; // offset: 0x0 (0)
  USHORT Size;     // offset: 0x4 (4)
  UCHAR Version;   // offset: 0x6 (6)
  UCHAR Flags;     // offset: 0x7 (7)
  ULONGLONG Magic; // offset: 0x8 (8)
};

// 0x160 (352) bytes
struct _POP_THERMAL_TELEMETRY_TRACKER {
  UCHAR AccountingDisabled;        // offset: 0x0 (0)
  ULONGLONG LastPassiveUpdateTime; // offset: 0x8 (8)
  ULONGLONG TotalPassiveTime[21];  // offset: 0x10 (16)
  ULONGLONG PassiveTimeSnap[21];   // offset: 0xb8 (184)
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
  LONG(*ArbiterHandler)
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

// 0x70 (112) bytes
struct _MI_SYSTEM_IMAGE_STATE {
  struct _LIST_ENTRY FixupList;                 // offset: 0x0 (0)
  struct _KMUTANT LoadLock;                     // offset: 0x8 (8)
  volatile LONG FixupLock;                      // offset: 0x28 (40)
  UCHAR FirstLoadEver;                          // offset: 0x2c (44)
  UCHAR LargePageAll;                           // offset: 0x2d (45)
  ULONG LastPage;                               // offset: 0x30 (48)
  struct _LIST_ENTRY LargePageList;             // offset: 0x34 (52)
  struct _LIST_ENTRY StrongCodeLoadFailureList; // offset: 0x3c (60)
  struct _KLDR_DATA_TABLE_ENTRY *BeingDeleted;  // offset: 0x44 (68)
  struct _EX_PUSH_LOCK MappingRangesPushLock;   // offset: 0x48 (72)
  struct _MI_DRIVER_VA *MappingRanges[2];       // offset: 0x4c (76)
  ULONG PageCount;                              // offset: 0x54 (84)
  struct _MM_SYSTEM_PAGE_COUNTS PageCounts;     // offset: 0x58 (88)
  struct _EX_PUSH_LOCK CollidedLock;            // offset: 0x68 (104)
  struct _RTL_AVL_TREE ImageTree;               // offset: 0x6c (108)
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

// 0x68 (104) bytes
struct _BOOT_ENTROPY_SOURCE_LDR_RESULT {
  enum _BOOT_ENTROPY_SOURCE_ID SourceId;            // offset: 0x0 (0)
  ULONGLONG Policy;                                 // offset: 0x8 (8)
  enum _BOOT_ENTROPY_SOURCE_RESULT_CODE ResultCode; // offset: 0x10 (16)
  LONG ResultStatus;                                // offset: 0x14 (20)
  ULONGLONG Time;                                   // offset: 0x18 (24)
  ULONG EntropyLength;                              // offset: 0x20 (32)
  UCHAR EntropyData[64];                            // offset: 0x24 (36)
};

// 0x798 (1944) bytes
struct _BOOT_ENTROPY_LDR_RESULT {
  ULONG maxEntropySources; // offset: 0x0 (0)
  struct _BOOT_ENTROPY_SOURCE_LDR_RESULT
      EntropySourceResult[8];      // offset: 0x8 (8)
  UCHAR SeedBytesForCng[48];       // offset: 0x348 (840)
  UCHAR RngBytesForNtoskrnl[1024]; // offset: 0x378 (888)
  UCHAR KdEntropy[32];             // offset: 0x778 (1912)
};

// 0x20 (32) bytes
struct _WHEA_RECOVERY_CONTEXT {
  struct {
    ULONG Address;        // offset: 0x0 (0)
    UCHAR Consumed;       // offset: 0x4 (4)
    USHORT ErrorCode;     // offset: 0x6 (6)
    UCHAR ErrorIpValid;   // offset: 0x8 (8)
    UCHAR RestartIpValid; // offset: 0x9 (9)
  } MemoryError;          // offset: 0x0 (0)
  ULONGLONG PartitionId;  // offset: 0x10 (16)
  ULONG VpIndex;          // offset: 0x18 (24)
};

// 0x30 (48) bytes
struct _LOADER_RESET_REASON {
  UCHAR Supplied; // offset: 0x0 (0)
  union {
    struct {
      UCHAR Pch;                // offset: 0x0 (0)
      UCHAR EmbeddedController; // offset: 0x1 (1)
      UCHAR Reserved[6];        // offset: 0x2 (2)
    } Component;                // offset: 0x8 (8)
    ULONGLONG AsULONG64;        // offset: 0x8 (8)
    UCHAR AsBytes[8];           // offset: 0x8 (8)

  } Basic;                 // offset: 0x8 (8)
  ULONG AdditionalInfo[8]; // offset: 0x10 (16)
};

// 0x10 (16) bytes
struct _LOADER_PERFORMANCE_DATA {
  ULONGLONG StartTime; // offset: 0x0 (0)
  ULONGLONG EndTime;   // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _SMBIOS3_TABLE_HEADER {
  UCHAR Signature[5];              // offset: 0x0 (0)
  UCHAR Checksum;                  // offset: 0x5 (5)
  UCHAR Length;                    // offset: 0x6 (6)
  UCHAR MajorVersion;              // offset: 0x7 (7)
  UCHAR MinorVersion;              // offset: 0x8 (8)
  UCHAR Docrev;                    // offset: 0x9 (9)
  UCHAR EntryPointRevision;        // offset: 0xa (10)
  UCHAR Reserved;                  // offset: 0xb (11)
  ULONG StructureTableMaximumSize; // offset: 0xc (12)
  ULONGLONG StructureTableAddress; // offset: 0x10 (16)
};

// 0x38 (56) bytes
struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION {
  ULONG HypervisorCrashdumpAreaPageCount; // offset: 0x0 (0)
  ULONGLONG HypervisorCrashdumpAreaSpa;   // offset: 0x8 (8)
  ULONGLONG HypervisorLaunchStatus;       // offset: 0x10 (16)
  ULONGLONG HypervisorLaunchStatusArg1;   // offset: 0x18 (24)
  ULONGLONG HypervisorLaunchStatusArg2;   // offset: 0x20 (32)
  ULONGLONG HypervisorLaunchStatusArg3;   // offset: 0x28 (40)
  ULONGLONG HypervisorLaunchStatusArg4;   // offset: 0x30 (48)
};

// 0x34 (52) bytes
struct _DMA_IOMMU_INTERFACE {
  ULONG Version; // offset: 0x0 (0)
  LONG(*CreateDomain)
  (UCHAR arg1, struct _IOMMU_DMA_DOMAIN **arg2);        // offset: 0x4 (4)
  LONG (*DeleteDomain)(struct _IOMMU_DMA_DOMAIN *arg1); // offset: 0x8 (8)
  LONG(*AttachDevice)
  (struct _IOMMU_DMA_DOMAIN *arg1, struct _DEVICE_OBJECT *arg2, ULONG arg3,
   ULONG arg4); // offset: 0xc (12)
  LONG(*DetachDevice)
  (struct _IOMMU_DMA_DOMAIN *arg1, struct _DEVICE_OBJECT *arg2,
   ULONG arg3); // offset: 0x10 (16)
  LONG(*ConfigureDomain)
  (struct _IOMMU_DMA_DOMAIN *arg1,
   struct _DOMAIN_CONFIGURATION *arg2);                // offset: 0x14 (20)
  LONG (*FlushDomain)(struct _IOMMU_DMA_DOMAIN *arg1); // offset: 0x18 (24)
  LONG(*FlushDomainByVaList)
  (struct _IOMMU_DMA_DOMAIN *arg1, UCHAR arg2, ULONG arg3,
   VOID *arg4); // offset: 0x1c (28)
  LONG(*QueryInputMappings)
  (struct _DEVICE_OBJECT *arg1, struct _INPUT_MAPPING_ELEMENT *arg2, ULONG arg3,
   ULONG *arg4); // offset: 0x20 (32)
  LONG(*MapLogicalRange)
  (struct _IOMMU_DMA_DOMAIN *arg1, ULONG arg2, struct _MDL *arg3,
   ULONGLONG arg4); // offset: 0x24 (36)
  LONG(*UnmapLogicalRange)
  (struct _IOMMU_DMA_DOMAIN *arg1, ULONGLONG arg2,
   ULONGLONG arg3); // offset: 0x28 (40)
  LONG(*MapIdentityRange)
  (struct _IOMMU_DMA_DOMAIN *arg1, ULONG arg2,
   struct _MDL *arg3); // offset: 0x2c (44)
  LONG(*UnmapIdentityRange)
  (struct _IOMMU_DMA_DOMAIN *arg1, struct _MDL *arg2); // offset: 0x30 (48)
};

// 0xb68 (2920) bytes
struct _LOADER_PARAMETER_EXTENSION {
  ULONG Size;                                             // offset: 0x0 (0)
  struct _PROFILE_PARAMETER_BLOCK Profile;                // offset: 0x4 (4)
  VOID *EmInfFileImage;                                   // offset: 0x14 (20)
  ULONG EmInfFileSize;                                    // offset: 0x18 (24)
  VOID *TriageDumpBlock;                                  // offset: 0x1c (28)
  struct _HEADLESS_LOADER_BLOCK *HeadlessLoaderBlock;     // offset: 0x20 (32)
  struct _SMBIOS3_TABLE_HEADER *SMBiosEPSHeader;          // offset: 0x24 (36)
  VOID *DrvDBImage;                                       // offset: 0x28 (40)
  ULONG DrvDBSize;                                        // offset: 0x2c (44)
  struct _NETWORK_LOADER_BLOCK *NetworkLoaderBlock;       // offset: 0x30 (48)
  UCHAR *HalpIRQLToTPR;                                   // offset: 0x34 (52)
  UCHAR *HalpVectorToIRQL;                                // offset: 0x38 (56)
  struct _LIST_ENTRY FirmwareDescriptorListHead;          // offset: 0x3c (60)
  VOID *AcpiTable;                                        // offset: 0x44 (68)
  ULONG AcpiTableSize;                                    // offset: 0x48 (72)
  ULONG LastBootSucceeded : 1;                            // offset: 0x4c (76)
  ULONG LastBootShutdown : 1;                             // offset: 0x4c (76)
  ULONG IoPortAccessSupported : 1;                        // offset: 0x4c (76)
  ULONG BootDebuggerActive : 1;                           // offset: 0x4c (76)
  ULONG StrongCodeGuarantees : 1;                         // offset: 0x4c (76)
  ULONG HardStrongCodeGuarantees : 1;                     // offset: 0x4c (76)
  ULONG SidSharingDisabled : 1;                           // offset: 0x4c (76)
  ULONG TpmInitialized : 1;                               // offset: 0x4c (76)
  ULONG VsmConfigured : 1;                                // offset: 0x4c (76)
  ULONG IumEnabled : 1;                                   // offset: 0x4c (76)
  ULONG IsSmbboot : 1;                                    // offset: 0x4c (76)
  ULONG BootLogEnabled : 1;                               // offset: 0x4c (76)
  ULONG FeatureSettings : 7;                              // offset: 0x4c (76)
  ULONG FeatureSimulations : 6;                           // offset: 0x4c (76)
  ULONG MicrocodeOptedOut : 1;                            // offset: 0x4c (76)
  ULONG XhciLegacyHandoffSkip : 1;                        // offset: 0x4c (76)
  ULONG Reserved : 5;                                     // offset: 0x4c (76)
  struct _LOADER_PERFORMANCE_DATA *LoaderPerformanceData; // offset: 0x50 (80)
  struct _LIST_ENTRY BootApplicationPersistentData;       // offset: 0x54 (84)
  VOID *WmdTestResult;                                    // offset: 0x5c (92)
  struct _GUID BootIdentifier;                            // offset: 0x60 (96)
  ULONG ResumePages;                                      // offset: 0x70 (112)
  VOID *DumpHeader;                                       // offset: 0x74 (116)
  VOID *BgContext;                                        // offset: 0x78 (120)
  VOID *NumaLocalityInfo;                                 // offset: 0x7c (124)
  VOID *NumaGroupAssignment;                              // offset: 0x80 (128)
  struct _LIST_ENTRY AttachedHives;                       // offset: 0x84 (132)
  ULONG MemoryCachingRequirementsCount;                   // offset: 0x8c (140)
  VOID *MemoryCachingRequirements;                        // offset: 0x90 (144)
  struct _BOOT_ENTROPY_LDR_RESULT BootEntropyResult;      // offset: 0x98 (152)
  ULONGLONG ProcessorCounterFrequency; // offset: 0x830 (2096)
  struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION
      HypervisorExtension;                   // offset: 0x838 (2104)
  struct _GUID HardwareConfigurationId;      // offset: 0x870 (2160)
  struct _LIST_ENTRY HalExtensionModuleList; // offset: 0x880 (2176)
  union _LARGE_INTEGER SystemTime;           // offset: 0x888 (2184)
  ULONGLONG TimeStampAtSystemTimeRead;       // offset: 0x890 (2192)
  union {
    ULONGLONG BootFlags; // offset: 0x898 (2200)
    struct {
      ULONGLONG DbgMenuOsSelection : 1; // offset: 0x898 (2200)
      ULONGLONG DbgHiberBoot : 1;       // offset: 0x898 (2200)
      ULONGLONG DbgSoftRestart : 1;     // offset: 0x898 (2200)
    };
  };
  union {
    ULONGLONG InternalBootFlags; // offset: 0x8a0 (2208)
    struct {
      ULONGLONG DbgUtcBootTime : 1;      // offset: 0x8a0 (2208)
      ULONGLONG DbgRtcBootTime : 1;      // offset: 0x8a0 (2208)
      ULONGLONG DbgNoLegacyServices : 1; // offset: 0x8a0 (2208)
    };
  };
  VOID *WfsFPData;                                       // offset: 0x8a8 (2216)
  ULONG WfsFPDataSize;                                   // offset: 0x8ac (2220)
  struct _LOADER_BUGCHECK_PARAMETERS BugcheckParameters; // offset: 0x8b0 (2224)
  VOID *ApiSetSchema;                                    // offset: 0x8c4 (2244)
  ULONG ApiSetSchemaSize;                                // offset: 0x8c8 (2248)
  struct _LIST_ENTRY ApiSetSchemaExtensions;             // offset: 0x8cc (2252)
  struct _UNICODE_STRING AcpiBiosVersion;                // offset: 0x8d4 (2260)
  struct _UNICODE_STRING SmbiosVersion;                  // offset: 0x8dc (2268)
  struct _UNICODE_STRING EfiVersion;                     // offset: 0x8e4 (2276)
  struct _DEBUG_DEVICE_DESCRIPTOR *KdDebugDevice;        // offset: 0x8ec (2284)
  struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2
      OfflineCrashdumpConfigurationTable;      // offset: 0x8f0 (2288)
  struct _UNICODE_STRING ManufacturingProfile; // offset: 0x910 (2320)
  VOID *BbtBuffer;                             // offset: 0x918 (2328)
  ULONGLONG XsaveAllowedFeatures;              // offset: 0x920 (2336)
  ULONG XsaveFlags;                            // offset: 0x928 (2344)
  VOID *BootOptions;                           // offset: 0x92c (2348)
  ULONG IumEnablement;                         // offset: 0x930 (2352)
  ULONG IumPolicy;                             // offset: 0x934 (2356)
  LONG IumStatus;                              // offset: 0x938 (2360)
  ULONG BootId;                                // offset: 0x93c (2364)
  struct _LOADER_PARAMETER_CI_EXTENSION
      *CodeIntegrityData;      // offset: 0x940 (2368)
  ULONG CodeIntegrityDataSize; // offset: 0x944 (2372)
  struct _LOADER_HIVE_RECOVERY_INFO
      SystemHiveRecoveryInfo;              // offset: 0x948 (2376)
  ULONG SoftRestartCount;                  // offset: 0x95c (2396)
  LONGLONG SoftRestartTime;                // offset: 0x960 (2400)
  ULONG MajorRelease;                      // offset: 0x968 (2408)
  ULONG Reserved1;                         // offset: 0x96c (2412)
  CHAR NtBuildLab[224];                    // offset: 0x970 (2416)
  CHAR NtBuildLabEx[224];                  // offset: 0xa50 (2640)
  struct _LOADER_RESET_REASON ResetReason; // offset: 0xb30 (2864)
  ULONG MaxPciBusNumber;                   // offset: 0xb60 (2912)
};

// 0xc8 (200) bytes
struct _LOADER_PARAMETER_BLOCK {
  ULONG OsMajorVersion;                                    // offset: 0x0 (0)
  ULONG OsMinorVersion;                                    // offset: 0x4 (4)
  ULONG Size;                                              // offset: 0x8 (8)
  ULONG OsLoaderSecurityVersion;                           // offset: 0xc (12)
  struct _LIST_ENTRY LoadOrderListHead;                    // offset: 0x10 (16)
  struct _LIST_ENTRY MemoryDescriptorListHead;             // offset: 0x18 (24)
  struct _LIST_ENTRY BootDriverListHead;                   // offset: 0x20 (32)
  struct _LIST_ENTRY EarlyLaunchListHead;                  // offset: 0x28 (40)
  struct _LIST_ENTRY CoreDriverListHead;                   // offset: 0x30 (48)
  struct _LIST_ENTRY CoreExtensionsDriverListHead;         // offset: 0x38 (56)
  struct _LIST_ENTRY TpmCoreDriverListHead;                // offset: 0x40 (64)
  ULONG KernelStack;                                       // offset: 0x48 (72)
  ULONG Prcb;                                              // offset: 0x4c (76)
  ULONG Process;                                           // offset: 0x50 (80)
  ULONG Thread;                                            // offset: 0x54 (84)
  ULONG KernelStackSize;                                   // offset: 0x58 (88)
  ULONG RegistryLength;                                    // offset: 0x5c (92)
  VOID *RegistryBase;                                      // offset: 0x60 (96)
  struct _CONFIGURATION_COMPONENT_DATA *ConfigurationRoot; // offset: 0x64 (100)
  CHAR *ArcBootDeviceName;                                 // offset: 0x68 (104)
  CHAR *ArcHalDeviceName;                                  // offset: 0x6c (108)
  CHAR *NtBootPathName;                                    // offset: 0x70 (112)
  CHAR *NtHalPathName;                                     // offset: 0x74 (116)
  CHAR *LoadOptions;                                       // offset: 0x78 (120)
  struct _NLS_DATA_BLOCK *NlsData;                         // offset: 0x7c (124)
  struct _ARC_DISK_INFORMATION *ArcDiskInformation;        // offset: 0x80 (128)
  struct _LOADER_PARAMETER_EXTENSION *Extension;           // offset: 0x84 (132)
  union {
    struct _I386_LOADER_BLOCK I386; // offset: 0x88 (136)
    struct _ARM_LOADER_BLOCK Arm;   // offset: 0x88 (136)

  } u; // offset: 0x88 (136)
  struct _FIRMWARE_INFORMATION_LOADER_BLOCK
      FirmwareInformation;     // offset: 0x94 (148)
  CHAR *OsBootstatPathName;    // offset: 0xbc (188)
  CHAR *ArcOSDataDeviceName;   // offset: 0xc0 (192)
  CHAR *ArcWindowsSysPartName; // offset: 0xc4 (196)
};

// 0x8 (8) bytes
struct _EXT_IOMMU_DEVICE_ID_TEST {
  ULONGLONG UniqueId; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _EXT_IOMMU_DEVICE_ID_PCI {
  union {
    ULONGLONG AsUINT64; // offset: 0x0 (0)
    struct {
      USHORT PciSegmentNumber;        // offset: 0x0 (0)
      USHORT PhantomFunctionBits : 2; // offset: 0x2 (2)
      USHORT BusRange : 1;            // offset: 0x2 (2)
      USHORT DevicePathLength : 5;    // offset: 0x2 (2)
      USHORT StartBusNumber : 8;      // offset: 0x2 (2)
      union {
        USHORT Bdf; // offset: 0x4 (4)
        struct {
          UCHAR SubordinateBus; // offset: 0x4 (4)
          UCHAR SecondaryBus;   // offset: 0x5 (5)
        };
      };
    };
  };
  USHORT *DevicePath; // offset: 0x8 (8)
};

// 0x8 (8) bytes
union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS {
  ULONGLONG ProcessorType : 1;      // offset: 0x0 (0)
  ULONGLONG InstructionSet : 1;     // offset: 0x0 (0)
  ULONGLONG ErrorType : 1;          // offset: 0x0 (0)
  ULONGLONG Operation : 1;          // offset: 0x0 (0)
  ULONGLONG Flags : 1;              // offset: 0x0 (0)
  ULONGLONG Level : 1;              // offset: 0x0 (0)
  ULONGLONG CPUVersion : 1;         // offset: 0x0 (0)
  ULONGLONG CPUBrandString : 1;     // offset: 0x0 (0)
  ULONGLONG ProcessorId : 1;        // offset: 0x0 (0)
  ULONGLONG TargetAddress : 1;      // offset: 0x0 (0)
  ULONGLONG RequesterId : 1;        // offset: 0x0 (0)
  ULONGLONG ResponderId : 1;        // offset: 0x0 (0)
  ULONGLONG InstructionPointer : 1; // offset: 0x0 (0)
  ULONGLONG Reserved : 51;          // offset: 0x0 (0)
  ULONGLONG ValidBits;              // offset: 0x0 (0)
};

// 0x18 (24) bytes
struct _EXT_IOMMU_DEVICE_ID {
  enum _EXT_IOMMU_DEVICE_TYPE DeviceType; // offset: 0x0 (0)
  union {
    struct _EXT_IOMMU_DEVICE_ID_PCI Pci;   // offset: 0x8 (8)
    struct _EXT_IOMMU_DEVICE_ID_ACPI Acpi; // offset: 0x8 (8)
    UCHAR IoApicId;                        // offset: 0x8 (8)
    ULONGLONG LogicalId;                   // offset: 0x8 (8)
    struct _EXT_IOMMU_DEVICE_ID_TEST Test; // offset: 0x8 (8)
  };
};

// 0x4c (76) bytes
struct _HAL_IOMMU_DISPATCH {
  UCHAR (*HalIommuSupportEnabled)(); // offset: 0x0 (0)
  LONG(*HalIommuGetConfiguration)
  (ULONG arg1, ULONG *arg2, ULONG *arg3, VOID **arg4); // offset: 0x4 (4)
  LONG(*HalIommuGetLibraryContext)
  (ULONG arg1, ULONG arg2, VOID **arg3); // offset: 0x8 (8)
  LONG(*HalIommuMapDevice)
  (VOID *arg1, struct _EXT_IOMMU_DEVICE_ID *arg2,
   union _IOMMU_SVM_CAPABILITIES *arg3, VOID **arg4); // offset: 0xc (12)
  LONG(*HalIommuEnableDevicePasid)
  (VOID *arg1, VOID *arg2);                                // offset: 0x10 (16)
  LONG (*HalIommuSetAddressSpace)(VOID *arg1, ULONG arg2); // offset: 0x14 (20)
  LONG(*HalIommuDisableDevicePasid)
  (VOID *arg1, VOID *arg2);                            // offset: 0x18 (24)
  LONG (*HalIommuUnmapDevice)(VOID *arg1, VOID *arg2); // offset: 0x1c (28)
  LONG (*HalIommuFreeLibraryContext)(VOID *arg1);      // offset: 0x20 (32)
  VOID(*HalIommuFlushTb)
  (VOID *arg1, ULONG arg2, struct _KTB_FLUSH_VA *arg3); // offset: 0x24 (36)
  VOID(*HalIommuFlushAllPasid)
  (VOID *arg1, ULONG arg2, struct _KTB_FLUSH_VA *arg3); // offset: 0x28 (40)
  UCHAR (*HalIommuProcessPageRequestQueue)(ULONG arg1); // offset: 0x2c (44)
  VOID (*HalIommuFaultRoutine)(ULONG arg1);             // offset: 0x30 (48)
  VOID *(*HalIommuReferenceAsid)(ULONG arg1);           // offset: 0x34 (52)
  VOID (*HalIommuDereferenceAsid)(ULONG arg1);          // offset: 0x38 (56)
  LONG(*HalIommuServicePageFault)
  (ULONG arg1, VOID *arg2, ULONG arg3); // offset: 0x3c (60)
  LONG(*HalIommuDevicePowerChange)
  (VOID *arg1, VOID *arg2, UCHAR arg3); // offset: 0x40 (64)
  LONG(*HalIommuBeginDeviceReset)
  (VOID *arg1, ULONG *arg2);                       // offset: 0x44 (68)
  LONG (*HalIommuFinalizeDeviceReset)(VOID *arg1); // offset: 0x48 (72)
};

// 0x20 (32) bytes
struct _HAL_CLOCK_TIMER_CONFIGURATION {
  union {
    UCHAR Flags; // offset: 0x0 (0)
    struct {
      UCHAR AlwaysOnTimer : 1;        // offset: 0x0 (0)
      UCHAR HighLatency : 1;          // offset: 0x0 (0)
      UCHAR PerCpuTimer : 1;          // offset: 0x0 (0)
      UCHAR DynamicTickSupported : 1; // offset: 0x0 (0)
    };
  };
  ULONG KnownType;        // offset: 0x4 (4)
  ULONG Capabilities;     // offset: 0x8 (8)
  ULONGLONG MaxIncrement; // offset: 0x10 (16)
  ULONG MinIncrement;     // offset: 0x18 (24)
};

// 0xc0 (192) bytes
struct _WHEA_PROCESSOR_GENERIC_ERROR_SECTION {
  union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS
      ValidBits;                // offset: 0x0 (0)
  UCHAR ProcessorType;          // offset: 0x8 (8)
  UCHAR InstructionSet;         // offset: 0x9 (9)
  UCHAR ErrorType;              // offset: 0xa (10)
  UCHAR Operation;              // offset: 0xb (11)
  UCHAR Flags;                  // offset: 0xc (12)
  UCHAR Level;                  // offset: 0xd (13)
  USHORT Reserved;              // offset: 0xe (14)
  ULONGLONG CPUVersion;         // offset: 0x10 (16)
  UCHAR CPUBrandString[128];    // offset: 0x18 (24)
  ULONGLONG ProcessorId;        // offset: 0x98 (152)
  ULONGLONG TargetAddress;      // offset: 0xa0 (160)
  ULONGLONG RequesterId;        // offset: 0xa8 (168)
  ULONGLONG ResponderId;        // offset: 0xb0 (176)
  ULONGLONG InstructionPointer; // offset: 0xb8 (184)
};

// 0x30 (48) bytes
struct _POOL_TRACKER_TABLE {
  volatile LONG Key;        // offset: 0x0 (0)
  ULONG NonPagedBytes;      // offset: 0x4 (4)
  ULONGLONG NonPagedAllocs; // offset: 0x8 (8)
  ULONGLONG NonPagedFrees;  // offset: 0x10 (16)
  ULONG PagedBytes;         // offset: 0x18 (24)
  ULONGLONG PagedAllocs;    // offset: 0x20 (32)
  ULONGLONG PagedFrees;     // offset: 0x28 (40)
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

// 0x50 (80) bytes
struct _WHEA_GENERIC_ERROR_DESCRIPTOR_V2 {
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
  UCHAR ReadAckAddressSpaceID;                 // offset: 0x34 (52)
  UCHAR ReadAckAddressBitWidth;                // offset: 0x35 (53)
  UCHAR ReadAckAddressBitOffset;               // offset: 0x36 (54)
  UCHAR ReadAckAddressAccessSize;              // offset: 0x37 (55)
  union _LARGE_INTEGER ReadAckAddress;         // offset: 0x38 (56)
  ULONGLONG ReadAckPreserveMask;               // offset: 0x40 (64)
  ULONGLONG ReadAckWriteMask;                  // offset: 0x48 (72)
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
    struct _WHEA_GENERIC_ERROR_DESCRIPTOR_V2
        GenErrDescriptorV2; // offset: 0x28 (40)

  } Info; // offset: 0x28 (40)
};

// 0x28 (40) bytes
struct _SEP_LUID_TO_INDEX_MAP_ENTRY {
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry; // offset: 0x0 (0)
  LONG ReferenceCount;                            // offset: 0xc (12)
  ULONGLONG Luid;                                 // offset: 0x10 (16)
  ULONGLONG IndexIntoGlobalSingletonTable;        // offset: 0x18 (24)
  UCHAR MarkedForDeletion;                        // offset: 0x20 (32)
};

// 0x18 (24) bytes
struct _SEP_TOKEN_PRIVILEGES {
  ULONGLONG Present;          // offset: 0x0 (0)
  ULONGLONG Enabled;          // offset: 0x8 (8)
  ULONGLONG EnabledByDefault; // offset: 0x10 (16)
};

// 0x2a8 (680) bytes
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
  struct _SEP_CACHED_HANDLES_ENTRY *LowboxHandlesEntry; // offset: 0x278 (632)
  struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION
      *pClaimAttributes;                              // offset: 0x27c (636)
  VOID *TrustLevelSid;                                // offset: 0x280 (640)
  struct _TOKEN *TrustLinkedToken;                    // offset: 0x284 (644)
  VOID *IntegrityLevelSidValue;                       // offset: 0x288 (648)
  struct _SEP_SID_VALUES_BLOCK *TokenSidValues;       // offset: 0x28c (652)
  struct _SEP_LUID_TO_INDEX_MAP_ENTRY *IndexEntry;    // offset: 0x290 (656)
  struct _SEP_TOKEN_DIAG_TRACK_ENTRY *DiagnosticInfo; // offset: 0x294 (660)
  struct _SEP_CACHED_HANDLES_ENTRY
      *BnoIsolationHandlesEntry; // offset: 0x298 (664)
  VOID *SessionObject;           // offset: 0x29c (668)
  ULONG VariablePart;            // offset: 0x2a0 (672)
};

// 0x8 (8) bytes
union _FILE_SEGMENT_ELEMENT {
  VOID *Buffer;        // offset: 0x0 (0)
  ULONGLONG Alignment; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _IO_ADAPTER_CRYPTO_PARAMETERS {
  ULONGLONG Tweak;                                         // offset: 0x0 (0)
  struct _IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR *KeyDescriptor; // offset: 0x8 (8)
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
  USHORT TypesAllocated;         // offset: 0x2 (2)
  UCHAR GenericExtension[4];     // offset: 0x4 (4)
  VOID *VerifierContext;         // offset: 0x8 (8)
  ULONG DiskIoAttributionHandle; // offset: 0xc (12)
  struct _GUID ActivityId;       // offset: 0x10 (16)
  union {
    union _LARGE_INTEGER Timestamp; // offset: 0x20 (32)
    ULONG ZeroingOffset;            // offset: 0x20 (32)
    struct {
      struct _IO_IRP_EXT_TRACK_OFFSET_HEADER
          *FsTrackOffsetBlob;   // offset: 0x20 (32)
      LONGLONG FsTrackedOffset; // offset: 0x24 (36)
    };
    struct _IO_ADAPTER_CRYPTO_PARAMETERS
        AdapterCryptoParameters; // offset: 0x20 (32)
  };
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
  LONG(*CommitRoutine)
  (VOID *arg1, VOID **arg2, ULONG *arg3);          // offset: 0xcc (204)
  union _RTL_RUN_ONCE StackTraceInitVar;           // offset: 0xd0 (208)
  VOID *FrontEndHeap;                              // offset: 0xd4 (212)
  USHORT FrontHeapLockCount;                       // offset: 0xd8 (216)
  UCHAR FrontEndHeapType;                          // offset: 0xda (218)
  UCHAR RequestedFrontEndHeapType;                 // offset: 0xdb (219)
  USHORT *FrontEndHeapUsageData;                   // offset: 0xdc (220)
  USHORT FrontEndHeapMaximumIndex;                 // offset: 0xe0 (224)
  volatile UCHAR FrontEndHeapStatusBitmap[257];    // offset: 0xe2 (226)
  struct _HEAP_COUNTERS Counters;                  // offset: 0x1e4 (484)
  struct _HEAP_TUNING_PARAMETERS TuningParameters; // offset: 0x240 (576)
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
  VOID(*FlushToLsnRoutine)
  (VOID *arg1, union _LARGE_INTEGER arg2); // offset: 0x4 (4)
  VOID(*QueryLogHandleInfoRoutine)
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
    ULONG FrequencyCap : 1;             // offset: 0x4 (4)
    ULONG ThreadPolicy : 1;             // offset: 0x4 (4)
    ULONG ShortThreadPolicy : 1;        // offset: 0x4 (4)
    ULONG IdleStateMax : 1;             // offset: 0x4 (4)
  };
  ULONG Spare : 18; // offset: 0x4 (4)
};

// 0xc0 (192) bytes
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
  ULONG PerfFrequencyCap[2];                          // offset: 0x2c (44)
  ULONG PerfBoostPolicy;                              // offset: 0x34 (52)
  ULONG PerfBoostMode;                                // offset: 0x38 (56)
  ULONG PerfReductionTolerance;                       // offset: 0x3c (60)
  ULONG EnergyPerfPreference;                         // offset: 0x40 (64)
  ULONG AutonomousActivityWindow;                     // offset: 0x44 (68)
  UCHAR AutonomousPreference;                         // offset: 0x48 (72)
  UCHAR LatencyHintPerf[2];                           // offset: 0x49 (73)
  UCHAR LatencyHintUnpark[2];                         // offset: 0x4b (75)
  UCHAR DutyCycling;                                  // offset: 0x4d (77)
  UCHAR ParkingPerfState[2];                          // offset: 0x4e (78)
  UCHAR DistributeUtility;                            // offset: 0x50 (80)
  UCHAR CoreParkingOverUtilizationThreshold;          // offset: 0x51 (81)
  UCHAR CoreParkingConcurrencyThreshold;              // offset: 0x52 (82)
  UCHAR CoreParkingHeadroomThreshold;                 // offset: 0x53 (83)
  UCHAR CoreParkingDistributionThreshold;             // offset: 0x54 (84)
  UCHAR CoreParkingDecreasePolicy;                    // offset: 0x55 (85)
  UCHAR CoreParkingIncreasePolicy;                    // offset: 0x56 (86)
  ULONG CoreParkingDecreaseTime;                      // offset: 0x58 (88)
  ULONG CoreParkingIncreaseTime;                      // offset: 0x5c (92)
  UCHAR CoreParkingMinCores[2];                       // offset: 0x60 (96)
  UCHAR CoreParkingMaxCores[2];                       // offset: 0x62 (98)
  UCHAR AllowScaling;                                 // offset: 0x64 (100)
  UCHAR IdleDisabled;                                 // offset: 0x65 (101)
  ULONG IdleTimeCheck;                                // offset: 0x68 (104)
  UCHAR IdleDemotePercent;                            // offset: 0x6c (108)
  UCHAR IdlePromotePercent;                           // offset: 0x6d (109)
  UCHAR IdleStateMax;                                 // offset: 0x6e (110)
  UCHAR HeteroDecreaseTime;                           // offset: 0x6f (111)
  UCHAR HeteroIncreaseTime;                           // offset: 0x70 (112)
  UCHAR HeteroDecreaseThreshold[32];                  // offset: 0x71 (113)
  UCHAR HeteroIncreaseThreshold[32];                  // offset: 0x91 (145)
  UCHAR Class0FloorPerformance;                       // offset: 0xb1 (177)
  UCHAR Class1InitialPerformance;                     // offset: 0xb2 (178)
  enum _KHETERO_CPU_POLICY ThreadPolicies[2];         // offset: 0xb4 (180)
};

// 0x1c8 (456) bytes
struct _POP_PPM_PROFILE {
  WCHAR *Name;                             // offset: 0x0 (0)
  UCHAR Id;                                // offset: 0x4 (4)
  struct _GUID Guid;                       // offset: 0x8 (8)
  ULONG Flags;                             // offset: 0x18 (24)
  UCHAR Priority;                          // offset: 0x1c (28)
  struct _PPM_ENGINE_SETTINGS Settings[2]; // offset: 0x20 (32)
  ULONGLONG StartTime;                     // offset: 0x1a0 (416)
  ULONGLONG Count;                         // offset: 0x1a8 (424)
  ULONGLONG MaxDuration;                   // offset: 0x1b0 (432)
  ULONGLONG MinDuration;                   // offset: 0x1b8 (440)
  ULONGLONG TotalDuration;                 // offset: 0x1c0 (448)
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

// 0x10 (16) bytes
struct _DEVICE_DATA_SET_RANGE {
  LONGLONG StartingOffset; // offset: 0x0 (0)
  ULONGLONG LengthInBytes; // offset: 0x8 (8)
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
  ULONGLONG AccessReenlightenmentControls : 1;   // offset: 0x0 (0)
  ULONGLONG AccessRootSchedulerReg : 1;          // offset: 0x0 (0)
  ULONGLONG Reserved1 : 17;                      // offset: 0x0 (0)
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
  ULONG FastHypercallOutputAvailable : 1;        // offset: 0xc (12)
  ULONG SvmFeaturesAvailable : 1;                // offset: 0xc (12)
  ULONG SintPollingModeAvailable : 1;            // offset: 0xc (12)
  ULONG HypercallMsrLockAvailable : 1;           // offset: 0xc (12)
  ULONG DirectSyntheticTimers : 1;               // offset: 0xc (12)
  ULONG RegisterPatAvailable : 1;                // offset: 0xc (12)
  ULONG RegisterBndcfgsAvailable : 1;            // offset: 0xc (12)
  ULONG WatchdogTimerAvailable : 1;              // offset: 0xc (12)
  ULONG SyntheticTimeUnhaltedTimerAvailable : 1; // offset: 0xc (12)
  ULONG DeviceDomainsAvailable : 1;              // offset: 0xc (12)
  ULONG S1DeviceDomainsAvailable : 1;            // offset: 0xc (12)
  ULONG Reserved1 : 6;                           // offset: 0xc (12)
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
  struct _NT_TIB32 NtTib;                              // offset: 0x0 (0)
  ULONG EnvironmentPointer;                            // offset: 0x1c (28)
  struct _CLIENT_ID32 ClientId;                        // offset: 0x20 (32)
  ULONG ActiveRpcHandle;                               // offset: 0x28 (40)
  ULONG ThreadLocalStoragePointer;                     // offset: 0x2c (44)
  ULONG ProcessEnvironmentBlock;                       // offset: 0x30 (48)
  ULONG LastErrorValue;                                // offset: 0x34 (52)
  ULONG CountOfOwnedCriticalSections;                  // offset: 0x38 (56)
  ULONG CsrClientThread;                               // offset: 0x3c (60)
  ULONG Win32ThreadInfo;                               // offset: 0x40 (64)
  ULONG User32Reserved[26];                            // offset: 0x44 (68)
  ULONG UserReserved[5];                               // offset: 0xac (172)
  ULONG WOW32Reserved;                                 // offset: 0xc0 (192)
  ULONG CurrentLocale;                                 // offset: 0xc4 (196)
  ULONG FpSoftwareStatusRegister;                      // offset: 0xc8 (200)
  ULONG ReservedForDebuggerInstrumentation[16];        // offset: 0xcc (204)
  ULONG SystemReserved1[26];                           // offset: 0x10c (268)
  CHAR PlaceholderCompatibilityMode;                   // offset: 0x174 (372)
  CHAR PlaceholderReserved[11];                        // offset: 0x175 (373)
  ULONG ProxiedProcessId;                              // offset: 0x180 (384)
  struct _ACTIVATION_CONTEXT_STACK32 _ActivationStack; // offset: 0x184 (388)
  UCHAR WorkingOnBehalfTicket[8];                      // offset: 0x19c (412)
  LONG ExceptionCode;                                  // offset: 0x1a4 (420)
  ULONG ActivationContextStackPointer;                 // offset: 0x1a8 (424)
  ULONG InstrumentationCallbackSp;                     // offset: 0x1ac (428)
  ULONG InstrumentationCallbackPreviousPc;             // offset: 0x1b0 (432)
  ULONG InstrumentationCallbackPreviousSp;             // offset: 0x1b4 (436)
  UCHAR InstrumentationCallbackDisabled;               // offset: 0x1b8 (440)
  UCHAR SpareBytes[23];                                // offset: 0x1b9 (441)
  ULONG TxFsContext;                                   // offset: 0x1d0 (464)
  struct _GDI_TEB_BATCH32 GdiTebBatch;                 // offset: 0x1d4 (468)
  struct _CLIENT_ID32 RealClientId;                    // offset: 0x6b4 (1716)
  ULONG GdiCachedProcessHandle;                        // offset: 0x6bc (1724)
  ULONG GdiClientPID;                                  // offset: 0x6c0 (1728)
  ULONG GdiClientTID;                                  // offset: 0x6c4 (1732)
  ULONG GdiThreadLocalInfo;                            // offset: 0x6c8 (1736)
  ULONG Win32ClientInfo[62];                           // offset: 0x6cc (1740)
  ULONG glDispatchTable[233];                          // offset: 0x7c4 (1988)
  ULONG glReserved1[29];                               // offset: 0xb68 (2920)
  ULONG glReserved2;                                   // offset: 0xbdc (3036)
  ULONG glSectionInfo;                                 // offset: 0xbe0 (3040)
  ULONG glSection;                                     // offset: 0xbe4 (3044)
  ULONG glTable;                                       // offset: 0xbe8 (3048)
  ULONG glCurrentRC;                                   // offset: 0xbec (3052)
  ULONG glContext;                                     // offset: 0xbf0 (3056)
  ULONG LastStatusValue;                               // offset: 0xbf4 (3060)
  struct _STRING32 StaticUnicodeString;                // offset: 0xbf8 (3064)
  WCHAR StaticUnicodeBuffer[261];                      // offset: 0xc00 (3072)
  ULONG DeallocationStack;                             // offset: 0xe0c (3596)
  ULONG TlsSlots[64];                                  // offset: 0xe10 (3600)
  struct LIST_ENTRY32 TlsLinks;                        // offset: 0xf10 (3856)
  ULONG Vdm;                                           // offset: 0xf18 (3864)
  ULONG ReservedForNtRpc;                              // offset: 0xf1c (3868)
  ULONG DbgSsReserved[2];                              // offset: 0xf20 (3872)
  ULONG HardErrorMode;                                 // offset: 0xf28 (3880)
  ULONG Instrumentation[9];                            // offset: 0xf2c (3884)
  struct _GUID ActivityId;                             // offset: 0xf50 (3920)
  ULONG SubProcessTag;                                 // offset: 0xf60 (3936)
  ULONG PerflibData;                                   // offset: 0xf64 (3940)
  ULONG EtwTraceData;                                  // offset: 0xf68 (3944)
  ULONG WinSockData;                                   // offset: 0xf6c (3948)
  ULONG GdiBatchCount;                                 // offset: 0xf70 (3952)
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
      USHORT SkipLoaderInit : 1;       // offset: 0xfca (4042)
      USHORT SpareSameTebBits : 1;     // offset: 0xfca (4042)
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
  LONG(*Callback)
  (enum _PCW_CALLBACK_TYPE arg1, union _PCW_CALLBACK_INFORMATION *arg2,
   VOID *arg3);          // offset: 0x10 (16)
  VOID *CallbackContext; // offset: 0x14 (20)
};

// 0x340 (832) bytes
struct tagSWITCH_CONTEXT_DATA {
  ULONGLONG ullOsMaxVersionTested; // offset: 0x0 (0)
  ULONG ulTargetPlatform;          // offset: 0x8 (8)
  ULONGLONG ullContextMinimum;     // offset: 0x10 (16)
  struct _GUID guPlatform;         // offset: 0x18 (24)
  struct _GUID guMinPlatform;      // offset: 0x28 (40)
  ULONG ulContextSource;           // offset: 0x38 (56)
  ULONG ulElementCount;            // offset: 0x3c (60)
  struct _GUID guElements[48];     // offset: 0x40 (64)
};

// 0x18 (24) bytes
struct tagSWITCH_CONTEXT_ATTRIBUTE {
  ULONGLONG ulContextUpdateCounter; // offset: 0x0 (0)
  LONG fAllowContextUpdate;         // offset: 0x8 (8)
  LONG fEnableTrace;                // offset: 0xc (12)
  ULONGLONG EtwHandle;              // offset: 0x10 (16)
};

// 0x358 (856) bytes
struct tagSWITCH_CONTEXT {
  struct tagSWITCH_CONTEXT_ATTRIBUTE Attribute; // offset: 0x0 (0)
  struct tagSWITCH_CONTEXT_DATA Data;           // offset: 0x18 (24)
};

// 0x8 (8) bytes
union _CLS_LSN {
  struct {
    ULONG idxRecord;    // offset: 0x0 (0)
    ULONG cidContainer; // offset: 0x4 (4)
  } offset;             // offset: 0x0 (0)
  ULONGLONG ullOffset;  // offset: 0x0 (0)
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

// 0x400 (1024) bytes
struct _HHIVE {
  ULONG Signature; // offset: 0x0 (0)
  struct _CELL_DATA *(*GetCellRoutine)(
      struct _HHIVE *arg1, ULONG arg2,
      struct _HV_GET_CELL_CONTEXT *arg3); // offset: 0x4 (4)
  VOID(*ReleaseCellRoutine)
  (struct _HHIVE *arg1, struct _HV_GET_CELL_CONTEXT *arg2); // offset: 0x8 (8)
  VOID *(*Allocate)(ULONG arg1, UCHAR arg2, ULONG arg3);    // offset: 0xc (12)
  VOID (*Free)(VOID *arg1, ULONG arg2);                     // offset: 0x10 (16)
  LONG(*FileWrite)
  (struct _HHIVE *arg1, ULONG arg2, struct CMP_OFFSET_ARRAY *arg3, ULONG arg4,
   ULONG arg5); // offset: 0x14 (20)
  LONG(*FileRead)
  (struct _HHIVE *arg1, ULONG arg2, ULONG arg3, VOID *arg4,
   ULONG arg5);                          // offset: 0x18 (24)
  VOID *HiveLoadFailure;                 // offset: 0x1c (28)
  struct _HBASE_BLOCK *BaseBlock;        // offset: 0x20 (32)
  struct _CMSI_RW_LOCK FlusherLock;      // offset: 0x24 (36)
  struct _CMSI_RW_LOCK WriterLock;       // offset: 0x28 (40)
  struct _RTL_BITMAP DirtyVector;        // offset: 0x2c (44)
  ULONG DirtyCount;                      // offset: 0x34 (52)
  ULONG DirtyAlloc;                      // offset: 0x38 (56)
  struct _RTL_BITMAP UnreconciledVector; // offset: 0x3c (60)
  ULONG UnreconciledCount;               // offset: 0x44 (68)
  ULONG BaseBlockAlloc;                  // offset: 0x48 (72)
  ULONG Cluster;                         // offset: 0x4c (76)
  UCHAR Flat : 1;                        // offset: 0x50 (80)
  UCHAR ReadOnly : 1;                    // offset: 0x50 (80)
  UCHAR Reserved : 6;                    // offset: 0x50 (80)
  UCHAR DirtyFlag;                       // offset: 0x51 (81)
  ULONG HvBinHeadersUse;                 // offset: 0x54 (84)
  ULONG HvFreeCellsUse;                  // offset: 0x58 (88)
  ULONG HvUsedCellsUse;                  // offset: 0x5c (92)
  ULONG CmUsedCellsUse;                  // offset: 0x60 (96)
  ULONG HiveFlags;                       // offset: 0x64 (100)
  ULONG CurrentLog;                      // offset: 0x68 (104)
  ULONG CurrentLogSequence;              // offset: 0x6c (108)
  ULONG CurrentLogMinimumSequence;       // offset: 0x70 (112)
  ULONG CurrentLogOffset;                // offset: 0x74 (116)
  ULONG MinimumLogSequence;              // offset: 0x78 (120)
  ULONG LogFileSizeCap;                  // offset: 0x7c (124)
  UCHAR LogDataPresent[2];               // offset: 0x80 (128)
  UCHAR PrimaryFileValid;                // offset: 0x82 (130)
  UCHAR BaseBlockDirty;                  // offset: 0x83 (131)
  union _LARGE_INTEGER LastLogSwapTime;  // offset: 0x88 (136)
  union {
    struct {
      USHORT FirstLogFile : 3;                // offset: 0x90 (144)
      USHORT SecondLogFile : 3;               // offset: 0x90 (144)
      USHORT HeaderRecovered : 1;             // offset: 0x90 (144)
      USHORT LegacyRecoveryIndicated : 1;     // offset: 0x90 (144)
      USHORT RecoveryInformationReserved : 8; // offset: 0x90 (144)
    };
    USHORT RecoveryInformation; // offset: 0x90 (144)
  };
  UCHAR LogEntriesRecovered[2]; // offset: 0x92 (146)
  ULONG RefreshCount;           // offset: 0x94 (148)
  ULONG StorageTypeCount;       // offset: 0x98 (152)
  ULONG Version;                // offset: 0x9c (156)
  struct _HVP_VIEW_MAP ViewMap; // offset: 0xa0 (160)
  struct _DUAL Storage[2];      // offset: 0xc8 (200)
};

// 0xc00 (3072) bytes
struct _CMHIVE {
  struct _HHIVE Hive;                                 // offset: 0x0 (0)
  VOID *FileHandles[6];                               // offset: 0x400 (1024)
  struct _LIST_ENTRY NotifyList;                      // offset: 0x418 (1048)
  struct _LIST_ENTRY HiveList;                        // offset: 0x420 (1056)
  struct _LIST_ENTRY PreloadedHiveList;               // offset: 0x428 (1064)
  struct _EX_RUNDOWN_REF HiveRundown;                 // offset: 0x430 (1072)
  struct _CM_KEY_HASH_TABLE_ENTRY *KcbCacheTable;     // offset: 0x434 (1076)
  ULONG KcbCacheTableSize;                            // offset: 0x438 (1080)
  struct _CM_KEY_HASH_TABLE_ENTRY *DeletedKcbTable;   // offset: 0x43c (1084)
  ULONG DeletedKcbTableSize;                          // offset: 0x440 (1088)
  ULONG Identity;                                     // offset: 0x444 (1092)
  struct _CMSI_RW_LOCK HiveLock;                      // offset: 0x448 (1096)
  struct _RTL_BITMAP FlushDirtyVector;                // offset: 0x44c (1100)
  ULONG FlushDirtyVectorSize;                         // offset: 0x454 (1108)
  UCHAR *FlushLogEntry;                               // offset: 0x458 (1112)
  ULONG FlushLogEntrySize;                            // offset: 0x45c (1116)
  ULONG FlushHiveTruncated;                           // offset: 0x460 (1120)
  UCHAR FlushBaseBlockDirty;                          // offset: 0x464 (1124)
  struct _RTL_BITMAP CapturedUnreconciledVector;      // offset: 0x468 (1128)
  ULONG CapturedUnreconciledVectorSize;               // offset: 0x470 (1136)
  struct CMP_OFFSET_ARRAY *UnreconciledOffsetArray;   // offset: 0x474 (1140)
  ULONG UnreconciledOffsetArrayCount;                 // offset: 0x478 (1144)
  struct _HBASE_BLOCK *UnreconciledBaseBlock;         // offset: 0x47c (1148)
  struct _EX_PUSH_LOCK SecurityLock;                  // offset: 0x480 (1152)
  ULONG LastShrinkHiveSize;                           // offset: 0x484 (1156)
  union _LARGE_INTEGER ActualFileSize;                // offset: 0x488 (1160)
  union _LARGE_INTEGER LogFileSizes[2];               // offset: 0x490 (1168)
  struct _UNICODE_STRING FileFullPath;                // offset: 0x4a0 (1184)
  struct _UNICODE_STRING FileUserName;                // offset: 0x4a8 (1192)
  struct _UNICODE_STRING HiveRootPath;                // offset: 0x4b0 (1200)
  ULONG SecurityCount;                                // offset: 0x4b8 (1208)
  ULONG SecurityCacheSize;                            // offset: 0x4bc (1212)
  LONG SecurityHitHint;                               // offset: 0x4c0 (1216)
  struct _CM_KEY_SECURITY_CACHE_ENTRY *SecurityCache; // offset: 0x4c4 (1220)
  struct _LIST_ENTRY SecurityHash[64];                // offset: 0x4c8 (1224)
  ULONG UnloadEventCount;                             // offset: 0x6c8 (1736)
  struct _KEVENT **UnloadEventArray;                  // offset: 0x6cc (1740)
  struct _CM_KEY_CONTROL_BLOCK *RootKcb;              // offset: 0x6d0 (1744)
  UCHAR Frozen;                                       // offset: 0x6d4 (1748)
  struct _CM_WORKITEM *UnloadWorkItem;                // offset: 0x6d8 (1752)
  struct _CM_WORKITEM UnloadWorkItemHolder;           // offset: 0x6dc (1756)
  struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;         // offset: 0x6f0 (1776)
  ULONG Flags;                                        // offset: 0x978 (2424)
  struct _LIST_ENTRY TrustClassEntry;                 // offset: 0x97c (2428)
  ULONGLONG DirtyTime;                                // offset: 0x988 (2440)
  ULONGLONG UnreconciledTime;                         // offset: 0x990 (2448)
  struct _CM_RM *CmRm;                                // offset: 0x998 (2456)
  ULONG CmRmInitFailPoint;                            // offset: 0x99c (2460)
  LONG CmRmInitFailStatus;                            // offset: 0x9a0 (2464)
  struct _KTHREAD *CreatorOwner;                      // offset: 0x9a4 (2468)
  struct _KTHREAD *RundownThread;                     // offset: 0x9a8 (2472)
  union _LARGE_INTEGER LastWriteTime;                 // offset: 0x9b0 (2480)
  struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;           // offset: 0x9b8 (2488)
  struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue;       // offset: 0x9c4 (2500)
  union {
    ULONG FlushFlags; // offset: 0x9d0 (2512)
    struct {
      ULONG FlushActive : 1;       // offset: 0x9d0 (2512)
      ULONG ReconcileActive : 1;   // offset: 0x9d0 (2512)
      ULONG PrimaryFilePurged : 1; // offset: 0x9d0 (2512)
      ULONG DiskFileBad : 1;       // offset: 0x9d0 (2512)
    };
  };
  ULONG PrimaryFileSizeBeforeLastFlush;         // offset: 0x9d4 (2516)
  volatile LONG ReferenceCount;                 // offset: 0x9d8 (2520)
  LONG UnloadHistoryIndex;                      // offset: 0x9dc (2524)
  ULONG UnloadHistory[128];                     // offset: 0x9e0 (2528)
  ULONG BootStart;                              // offset: 0xbe0 (3040)
  ULONG UnaccessedStart;                        // offset: 0xbe4 (3044)
  ULONG UnaccessedEnd;                          // offset: 0xbe8 (3048)
  ULONG LoadedKeyCount;                         // offset: 0xbec (3052)
  volatile ULONG HandleClosePending;            // offset: 0xbf0 (3056)
  struct _EX_PUSH_LOCK HandleClosePendingEvent; // offset: 0xbf4 (3060)
  UCHAR FinalFlushSucceeded;                    // offset: 0xbf8 (3064)
  struct _CMP_VOLUME_CONTEXT *VolumeContext;    // offset: 0xbfc (3068)
};

// 0x60 (96) bytes
struct _HIVE_LIST_ENTRY {
  WCHAR *FileName;                 // offset: 0x0 (0)
  WCHAR *BaseName;                 // offset: 0x4 (4)
  WCHAR *RegRootName;              // offset: 0x8 (8)
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

// 0x70 (112) bytes
struct _CM_TRANS {
  struct _LIST_ENTRY TransactionListEntry; // offset: 0x0 (0)
  struct _LIST_ENTRY KCBUoWListHead;       // offset: 0x8 (8)
  struct _LIST_ENTRY LazyCommitListEntry;  // offset: 0x10 (16)
  union {
    struct {
      ULONG Prepared : 1;          // offset: 0x18 (24)
      ULONG Aborted : 1;           // offset: 0x18 (24)
      ULONG Committed : 1;         // offset: 0x18 (24)
      ULONG Initializing : 1;      // offset: 0x18 (24)
      ULONG Invalid : 1;           // offset: 0x18 (24)
      ULONG UseReservation : 1;    // offset: 0x18 (24)
      ULONG TmCallbacksActive : 1; // offset: 0x18 (24)
      ULONG LightWeight : 1;       // offset: 0x18 (24)
      ULONG Freed1 : 1;            // offset: 0x18 (24)
      ULONG Freed2 : 1;            // offset: 0x18 (24)
      ULONG Spare1 : 2;            // offset: 0x18 (24)
      ULONG Freed : 1;             // offset: 0x18 (24)
      ULONG Spare : 19;            // offset: 0x18 (24)
    };
    ULONG TransState; // offset: 0x18 (24)
  };
  union _CM_TRANS_PTR Trans;                // offset: 0x1c (28)
  struct _CM_RM *CmRm;                      // offset: 0x20 (32)
  struct _KENLISTMENT *KtmEnlistmentObject; // offset: 0x24 (36)
  VOID *KtmEnlistmentHandle;                // offset: 0x28 (40)
  struct _GUID KtmUow;                      // offset: 0x2c (44)
  ULONGLONG StartLsn;                       // offset: 0x40 (64)
  ULONG HiveCount;                          // offset: 0x48 (72)
  struct _CMHIVE *HiveArray[8];             // offset: 0x4c (76)
};

// 0x40 (64) bytes
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
  struct _CM_KCB_UOW *ParentUoW;                 // offset: 0x2c (44)
  union {
    struct _CM_KEY_CONTROL_BLOCK *ChildKCB; // offset: 0x30 (48)
    ULONG VolatileKeyCell;                  // offset: 0x30 (48)
    struct {
      ULONG OldValueCell; // offset: 0x30 (48)
      ULONG NewValueCell; // offset: 0x34 (52)
    };
    ULONG UserFlags;                    // offset: 0x30 (48)
    union _LARGE_INTEGER LastWriteTime; // offset: 0x30 (48)
    struct {
      struct _CM_KEY_SECURITY_CACHE *TxCachedSecurity; // offset: 0x30 (48)
      ULONG TxSecurityCell;                            // offset: 0x34 (52)
    };
    struct {
      struct _CM_KEY_CONTROL_BLOCK *OldChildKCB; // offset: 0x30 (48)
      struct _CM_KEY_CONTROL_BLOCK *NewChildKCB; // offset: 0x34 (52)
    };
    struct {
      struct _CM_KEY_CONTROL_BLOCK *OtherChildKCB; // offset: 0x30 (48)
      ULONG ThisVolatileKeyCell;                   // offset: 0x34 (52)
    };
  };
  union {
    VOID *PrepareDataPointer;                              // offset: 0x38 (56)
    struct _CM_UOW_SET_SD_DATA *SecurityData;              // offset: 0x38 (56)
    struct _CM_UOW_KEY_STATE_MODIFICATION *ModifyKeysData; // offset: 0x38 (56)
    struct _CM_UOW_SET_VALUE_LIST_DATA *SetValueData;      // offset: 0x38 (56)
  };
  union {
    struct _CM_UOW_SET_VALUE_KEY_DATA *ValueData; // offset: 0x3c (60)
    struct _CMP_DISCARD_AND_REPLACE_KCB_CONTEXT
        *DiscardReplaceContext; // offset: 0x3c (60)
  };
};

// 0x10 (16) bytes
struct _CM_KEY_HASH {
  struct _CM_PATH_HASH ConvKey;  // offset: 0x0 (0)
  struct _CM_KEY_HASH *NextHash; // offset: 0x4 (4)
  struct _HHIVE *KeyHive;        // offset: 0x8 (8)
  ULONG KeyCell;                 // offset: 0xc (12)
};

// 0xb0 (176) bytes
struct _CM_KEY_CONTROL_BLOCK {
  ULONG RefCount;           // offset: 0x0 (0)
  ULONG ExtFlags : 16;      // offset: 0x4 (4)
  ULONG PrivateAlloc : 1;   // offset: 0x4 (4)
  ULONG Discarded : 1;      // offset: 0x4 (4)
  ULONG HiveUnloaded : 1;   // offset: 0x4 (4)
  ULONG Decommissioned : 1; // offset: 0x4 (4)
  ULONG SpareExtFlag : 1;   // offset: 0x4 (4)
  ULONG TotalLevels : 10;   // offset: 0x4 (4)
  union {
    struct _CM_KEY_HASH KeyHash; // offset: 0x8 (8)
    struct {
      struct _CM_PATH_HASH ConvKey;  // offset: 0x8 (8)
      struct _CM_KEY_HASH *NextHash; // offset: 0xc (12)
      struct _HHIVE *KeyHive;        // offset: 0x10 (16)
      ULONG KeyCell;                 // offset: 0x14 (20)
    };
  };
  struct _EX_PUSH_LOCK KcbPushlock; // offset: 0x18 (24)
  union {
    struct _KTHREAD *Owner; // offset: 0x1c (28)
    LONG SharedCount;       // offset: 0x1c (28)
  };
  UCHAR DelayedDeref : 1;                        // offset: 0x20 (32)
  UCHAR DelayedClose : 1;                        // offset: 0x20 (32)
  UCHAR Parking : 1;                             // offset: 0x20 (32)
  UCHAR LayerSemantics;                          // offset: 0x21 (33)
  SHORT LayerHeight;                             // offset: 0x22 (34)
  struct _CM_KEY_CONTROL_BLOCK *ParentKcb;       // offset: 0x24 (36)
  struct _CM_NAME_CONTROL_BLOCK *NameBlock;      // offset: 0x28 (40)
  struct _CM_KEY_SECURITY_CACHE *CachedSecurity; // offset: 0x2c (44)
  struct _CACHED_CHILD_LIST ValueCache;          // offset: 0x30 (48)
  union {
    struct _CM_INDEX_HINT_BLOCK *IndexHint; // offset: 0x38 (56)
    ULONG HashKey;                          // offset: 0x38 (56)
    ULONG SubKeyCount;                      // offset: 0x38 (56)
  };
  union {
    struct _LIST_ENTRY KeyBodyListHead; // offset: 0x3c (60)
    struct _LIST_ENTRY FreeListEntry;   // offset: 0x3c (60)
  };
  struct _CM_KEY_BODY *KeyBodyArray[4];  // offset: 0x44 (68)
  union _LARGE_INTEGER KcbLastWriteTime; // offset: 0x58 (88)
  USHORT KcbMaxNameLen;                  // offset: 0x60 (96)
  USHORT KcbMaxValueNameLen;             // offset: 0x62 (98)
  ULONG KcbMaxValueDataLen;              // offset: 0x64 (100)
  ULONG KcbUserFlags : 4;                // offset: 0x68 (104)
  ULONG KcbVirtControlFlags : 4;         // offset: 0x68 (104)
  ULONG KcbDebug : 8;                    // offset: 0x68 (104)
  ULONG Flags : 16;                      // offset: 0x68 (104)
  struct _CM_KCB_LAYER_INFO *LayerInfo;  // offset: 0x6c (108)
  struct _LIST_ENTRY KCBUoWListHead;     // offset: 0x70 (112)
  union {
    struct _LIST_ENTRY DelayQueueEntry; // offset: 0x78 (120)
    volatile UCHAR *Stolen;             // offset: 0x78 (120)
  };
  struct _CM_TRANS *TransKCBOwner;       // offset: 0x80 (128)
  struct _CM_INTENT_LOCK KCBLock;        // offset: 0x84 (132)
  struct _CM_INTENT_LOCK KeyLock;        // offset: 0x8c (140)
  struct _CHILD_LIST TransValueCache;    // offset: 0x94 (148)
  struct _CM_TRANS *TransValueListOwner; // offset: 0x9c (156)
  union {
    struct _UNICODE_STRING *FullKCBName; // offset: 0xa0 (160)
    struct {
      ULONG FullKCBNameStale : 1; // offset: 0xa0 (160)
      ULONG Reserved : 31;        // offset: 0xa0 (160)
    };
  };
  ULONGLONG SequenceNumber; // offset: 0xa8 (168)
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
  UCHAR AccessBits;                   // offset: 0xc (12)
  UCHAR LayerSemantics : 2;           // offset: 0xd (13)
  UCHAR Spare1 : 5;                   // offset: 0xd (13)
  UCHAR InheritClass : 1;             // offset: 0xd (13)
  USHORT Spare2;                      // offset: 0xe (14)
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

// 0x11c (284) bytes
struct _HIVE_LOAD_FAILURE {
  struct _HHIVE *Hive;     // offset: 0x0 (0)
  USHORT Index;            // offset: 0x4 (4)
  USHORT RecoverableIndex; // offset: 0x6 (6)
  struct {
    enum _CM_LOAD_FAILURE_TYPE Failure; // offset: 0x0 (0)
    LONG Status;                        // offset: 0x4 (4)
    ULONG Point;                        // offset: 0x8 (8)
  } Locations[8];                       // offset: 0x8 (8)
  struct {
    enum _CM_LOAD_FAILURE_TYPE Failure; // offset: 0x0 (0)
    LONG Status;                        // offset: 0x4 (4)
    ULONG Point;                        // offset: 0x8 (8)
  } RecoverableLocations[8];            // offset: 0x68 (104)
  struct {
    ULONG Action; // offset: 0x0 (0)
    VOID *Handle; // offset: 0x4 (4)
    LONG Status;  // offset: 0x8 (8)
  } RegistryIO;   // offset: 0xc8 (200)
  struct {
    VOID *CheckStack; // offset: 0x0 (0)
  } CheckRegistry2;   // offset: 0xd4 (212)
  struct {
    ULONG Cell;                   // offset: 0x0 (0)
    struct _CELL_DATA *CellPoint; // offset: 0x4 (4)
    VOID *RootPoint;              // offset: 0x8 (8)
    ULONG Index;                  // offset: 0xc (12)
  } CheckKey;                     // offset: 0xd8 (216)
  struct {
    struct _CELL_DATA *List;      // offset: 0x0 (0)
    ULONG Index;                  // offset: 0x4 (4)
    ULONG Cell;                   // offset: 0x8 (8)
    struct _CELL_DATA *CellPoint; // offset: 0xc (12)
  } CheckValueList;               // offset: 0xe8 (232)
  struct {
    ULONG Space;            // offset: 0x0 (0)
    ULONG MapPoint;         // offset: 0x4 (4)
    struct _HBIN *BinPoint; // offset: 0x8 (8)
  } CheckHive;              // offset: 0xf8 (248)
  struct {
    ULONG Space;            // offset: 0x0 (0)
    ULONG MapPoint;         // offset: 0x4 (4)
    struct _HBIN *BinPoint; // offset: 0x8 (8)
  } CheckHive1;             // offset: 0x104 (260)
  struct {
    struct _HBIN *Bin;        // offset: 0x0 (0)
    struct _HCELL *CellPoint; // offset: 0x4 (4)
  } CheckBin;                 // offset: 0x110 (272)
  struct {
    ULONG FileOffset; // offset: 0x0 (0)
  } RecoverData;      // offset: 0x118 (280)
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

// 0x34 (52) bytes
struct _MMPAGE_FILE_EXPANSION {
  struct _SEGMENT *Segment;           // offset: 0x0 (0)
  struct _LIST_ENTRY DereferenceList; // offset: 0x4 (4)
  struct _MI_PARTITION *Partition;    // offset: 0xc (12)
  ULONG RequestedExpansionSize;       // offset: 0x10 (16)
  ULONG ActualExpansion;              // offset: 0x14 (20)
  struct _KEVENT Event;               // offset: 0x18 (24)
  volatile LONG InProgress;           // offset: 0x28 (40)
  union {
    ULONG LongFlags;                           // offset: 0x2c (44)
    struct _MMPAGE_FILE_EXPANSION_FLAGS Flags; // offset: 0x2c (44)

  } u1;                        // offset: 0x2c (44)
  VOID **volatile ActiveEntry; // offset: 0x30 (48)
};
// 0x1d0 (464) bytes
struct _MI_PARTITION_MODWRITES {
  struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;     // offset: 0x0 (0)
  struct _MMPAGE_FILE_EXPANSION PageFileContract;         // offset: 0x34 (52)
  ULONG NumberOfMappedMdls;                               // offset: 0x68 (104)
  volatile LONG NumberOfMappedMdlsInUse;                  // offset: 0x6c (108)
  ULONG NumberOfMappedMdlsInUsePeak;                      // offset: 0x70 (112)
  struct _MMMOD_WRITER_LISTHEAD MappedFileHeader;         // offset: 0x74 (116)
  UCHAR NeedMappedMdl;                                    // offset: 0x8c (140)
  UCHAR NeedPageFileMdl;                                  // offset: 0x8d (141)
  UCHAR ModwriterActive;                                  // offset: 0x8e (142)
  UCHAR TransitionInserted;                               // offset: 0x8f (143)
  LONG LastModifiedWriteError;                            // offset: 0x90 (144)
  LONG LastMappedWriteError;                              // offset: 0x94 (148)
  volatile ULONG MappedFileWriteSucceeded;                // offset: 0x98 (152)
  ULONG MappedWriteBurstCount;                            // offset: 0x9c (156)
  ULONG LowPriorityModWritesOutstanding;                  // offset: 0xa0 (160)
  struct _KEVENT BoostModWriteIoPriorityEvent;            // offset: 0xa4 (164)
  LONG ModifiedWriterThreadPriority;                      // offset: 0xb4 (180)
  ULONG ModifiedPagesLowPriorityGoal;                     // offset: 0xb8 (184)
  struct _KEVENT ModifiedPageWriterEvent;                 // offset: 0xbc (188)
  struct _KEVENT ModifiedWriterExitedEvent;               // offset: 0xcc (204)
  volatile LONG WriteAllPagefilePages;                    // offset: 0xdc (220)
  volatile LONG WriteAllMappedPages;                      // offset: 0xe0 (224)
  struct _KEVENT MappedPageWriterEvent;                   // offset: 0xe4 (228)
  struct _MI_MODWRITE_DATA ModWriteData;                  // offset: 0xf8 (248)
  struct _KEVENT RescanPageFilesEvent;                    // offset: 0x128 (296)
  struct _MMMOD_WRITER_LISTHEAD PagingFileHeader;         // offset: 0x138 (312)
  struct _ETHREAD *ModifiedPageWriterThread;              // offset: 0x150 (336)
  struct _EX_RUNDOWN_REF ModifiedPageWriterRundown;       // offset: 0x154 (340)
  struct _WORK_QUEUE_ITEM PagefileScanWorkItem;           // offset: 0x158 (344)
  ULONG PagefileScanCount;                                // offset: 0x168 (360)
  volatile LONG ClusterRestrictionLock;                   // offset: 0x16c (364)
  struct _MI_RESTRICTED_MODWRITES ClusterRestrictions[2]; // offset: 0x170 (368)
  struct _KEVENT NotifyStoreMemoryConditions;             // offset: 0x178 (376)
  volatile UCHAR DelayMappedWrite;                        // offset: 0x188 (392)
  volatile ULONG PagefileReservationsEnabled;             // offset: 0x18c (396)
  struct _EX_PUSH_LOCK PageFileCreationLock;              // offset: 0x190 (400)
  struct _WORK_QUEUE_ITEM TrimPagefileWorkItem;           // offset: 0x194 (404)
  ULONGLONG LastTrimPagefileTime;                         // offset: 0x1a8 (424)
  struct _WORK_QUEUE_ITEM WsSwapPagefileContractWorkItem; // offset: 0x1b0 (432)
  volatile LONG WsSwapPageFileContractionInProgress;      // offset: 0x1c0 (448)
  struct _EX_PUSH_LOCK WorkingSetSwapLock;                // offset: 0x1c4 (452)
  volatile LONG WorkingSetInswapLock;                     // offset: 0x1c8 (456)
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
  VOID(*EnableCallback)
  (struct _GUID *arg1, ULONG arg2, UCHAR arg3, ULONGLONG arg4, ULONGLONG arg5,
   struct _EVENT_FILTER_DESCRIPTOR *arg6, VOID *arg7); // offset: 0x20 (32)
  VOID *CallbackContext;                               // offset: 0x24 (36)
  VOID (*AnnotationFunc)(void *arg1);                  // offset: 0x28 (40)
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

// 0xc (12) bytes
struct _ETW_HW_TRACE_EXT_INTERFACE {
  LONG(*StartProcessorTraceOnEachCore)
  (ULONGLONG arg1, VOID **arg2);                    // offset: 0x0 (0)
  LONG (*StopProcessorTraceOnEachCore)(VOID *arg1); // offset: 0x4 (4)
  LONG(*LogProcessorTraceOnCurrentCore)
  (VOID *arg1, VOID *arg2); // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _ETW_IPT_SUPPORT {
  VOID *IptHandle;     // offset: 0x0 (0)
  ULONGLONG IptOption; // offset: 0x8 (8)
  struct _ETW_HW_TRACE_EXT_INTERFACE
      *EtwHwTraceExtInterface; // offset: 0x10 (16)
  volatile ULONG HookIdCount;  // offset: 0x14 (20)
  USHORT HookId[4];            // offset: 0x18 (24)
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

// 0x18 (24) bytes
struct _EVENT_FILTER_HEADER {
  USHORT Id;            // offset: 0x0 (0)
  UCHAR Version;        // offset: 0x2 (2)
  UCHAR Reserved[5];    // offset: 0x3 (3)
  ULONGLONG InstanceId; // offset: 0x8 (8)
  ULONG Size;           // offset: 0x10 (16)
  ULONG NextOffset;     // offset: 0x14 (20)
};

// 0x18 (24) bytes
struct _EVENT_FILTER_LEVEL_KW {
  ULONGLONG MatchAnyKeyword; // offset: 0x0 (0)
  ULONGLONG MatchAllKeyword; // offset: 0x8 (8)
  UCHAR Level;               // offset: 0x10 (16)
  UCHAR FilterIn;            // offset: 0x11 (17)
};

// 0x28 (40) bytes
struct _ETW_FILTER_EVENT_NAME_DATA {
  UCHAR FilterIn;                   // offset: 0x0 (0)
  UCHAR Level;                      // offset: 0x1 (1)
  ULONGLONG MatchAnyKeyword;        // offset: 0x8 (8)
  ULONGLONG MatchAllKeyword;        // offset: 0x10 (16)
  struct _RTL_HASH_TABLE NameTable; // offset: 0x18 (24)
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

// 0x10 (16) bytes
struct _PO_FX_PERF_STATE {
  ULONGLONG Value; // offset: 0x0 (0)
  VOID *Context;   // offset: 0x8 (8)
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
  ULONGLONG Spare : 2;            // offset: 0x0 (0)
  ULONGLONG IoTracker : 1;        // offset: 0x0 (0)
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
  ULONGLONG reserved1 : 25;       // offset: 0x0 (0)
  ULONGLONG NoExecute : 1;        // offset: 0x0 (0)
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
      ULONGLONG reserved1 : 25;       // offset: 0x0 (0)
      ULONGLONG NoExecute : 1;        // offset: 0x0 (0)
    };
    struct {
      ULONG LowPart;  // offset: 0x0 (0)
      ULONG HighPart; // offset: 0x4 (4)
    };
  };
};

// 0x8 (8) bytes
union _ENERGY_STATE_DURATION {
  ULONGLONG Value; // offset: 0x0 (0)
  struct {
    ULONG LastChangeTime; // offset: 0x0 (0)
    ULONG Duration : 31;  // offset: 0x4 (4)
  };
  ULONG IsInState : 1; // offset: 0x4 (4)
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

// 0x18 (24) bytes
struct _MI_DRIVER_VA {
  struct _MI_DRIVER_VA *Next; // offset: 0x0 (0)
  struct _MMPTE *PointerPte;  // offset: 0x4 (4)
  struct _RTL_BITMAP BitMap;  // offset: 0x8 (8)
  ULONG Hint;                 // offset: 0x10 (16)
  ULONG Flags;                // offset: 0x14 (20)
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

// 0x48 (72) bytes
struct _MI_SHUTDOWN_STATE {
  UCHAR CrashDumpInitialized;            // offset: 0x0 (0)
  UCHAR ConnectedStandbyActive;          // offset: 0x1 (1)
  UCHAR ZeroPageFileAtShutdown;          // offset: 0x2 (2)
  ULONG SystemShutdown;                  // offset: 0x4 (4)
  LONG ShutdownFlushInProgress;          // offset: 0x8 (8)
  ULONG MirroringActive;                 // offset: 0xc (12)
  struct _MI_RESUME_WORKITEM ResumeItem; // offset: 0x10 (16)
  struct _ETHREAD *MirrorHoldsPfn;       // offset: 0x30 (48)
  struct _RTL_BITMAP MirrorBitMaps[2];   // offset: 0x34 (52)
  struct _MMPTE *CrashDumpPte;           // offset: 0x44 (68)
};

// 0x2c (44) bytes
struct _MI_PER_SESSION_PROTOS {
  union {
    struct _RTL_BALANCED_NODE SessionProtoNode; // offset: 0x0 (0)
    struct _SINGLE_LIST_ENTRY FreeList;         // offset: 0x0 (0)
    VOID *DriverAddress;                        // offset: 0x0 (0)
  };
  struct _MI_PROTOTYPE_PTES_NODE ProtosNode; // offset: 0xc (12)
  ULONG NumberOfPtes;                        // offset: 0x1c (28)
  union {
    ULONG SessionId;                // offset: 0x20 (32)
    struct _SUBSECTION *Subsection; // offset: 0x20 (32)
  };
  struct _MMPTE *SubsectionBase; // offset: 0x24 (36)
  union {
    ULONG ReferenceCount;     // offset: 0x28 (40)
    ULONG NumberOfPtesToFree; // offset: 0x28 (40)

  } u2; // offset: 0x28 (40)
};

// 0x28 (40) bytes
struct _SUBSECTION {
  struct _CONTROL_AREA *ControlArea;  // offset: 0x0 (0)
  struct _MMPTE *SubsectionBase;      // offset: 0x4 (4)
  struct _SUBSECTION *NextSubsection; // offset: 0x8 (8)
  union {
    struct _RTL_AVL_TREE GlobalPerSessionHead;            // offset: 0xc (12)
    struct _MI_CONTROL_AREA_WAIT_BLOCK *CreationWaitList; // offset: 0xc (12)
    struct _MI_PER_SESSION_PROTOS *SessionDriverProtos;   // offset: 0xc (12)
  };
  union {
    ULONG LongFlags;                            // offset: 0x10 (16)
    struct _MMSUBSECTION_FLAGS SubsectionFlags; // offset: 0x10 (16)

  } u;                       // offset: 0x10 (16)
  ULONG StartingSector;      // offset: 0x14 (20)
  ULONG NumberOfFullSectors; // offset: 0x18 (24)
  ULONG PtesInSubsection;    // offset: 0x1c (28)
  union {
    struct _MI_SUBSECTION_ENTRY1 e1; // offset: 0x20 (32)
    ULONG EntireField;               // offset: 0x20 (32)

  } u1;                        // offset: 0x20 (32)
  ULONG UnusedPtes : 30;       // offset: 0x24 (36)
  ULONG ExtentQueryNeeded : 1; // offset: 0x24 (36)
  ULONG DirtyPages : 1;        // offset: 0x24 (36)
};

// 0x54 (84) bytes
struct _MSUBSECTION {
  struct _SUBSECTION Core;                   // offset: 0x0 (0)
  struct _RTL_BALANCED_NODE SubsectionNode;  // offset: 0x28 (40)
  struct _LIST_ENTRY DereferenceList;        // offset: 0x34 (52)
  ULONG NumberOfMappedViews;                 // offset: 0x3c (60)
  ULONG NumberOfPfnReferences;               // offset: 0x40 (64)
  struct _MI_PROTOTYPE_PTES_NODE ProtosNode; // offset: 0x44 (68)
};

// 0x1c (28) bytes
struct _MMPFN {
  union {
    struct _LIST_ENTRY ListEntry;       // offset: 0x0 (0)
    struct _RTL_BALANCED_NODE TreeNode; // offset: 0x0 (0)
    struct {
      union {
        struct _SINGLE_LIST_ENTRY NextSlistPfn; // offset: 0x0 (0)
        VOID *Next;                             // offset: 0x0 (0)
        ULONG Flink;                            // offset: 0x0 (0)
        struct _MI_ACTIVE_PFN Active;           // offset: 0x0 (0)

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
      USHORT ReferenceCount;  // offset: 0x14 (20)
      struct _MMPFNENTRY1 e1; // offset: 0x16 (22)
    };
    struct {
      struct _MMPFNENTRY3 e3; // offset: 0x17 (23)
      struct {
        USHORT ReferenceCount; // offset: 0x0 (0)
      } e2;                    // offset: 0x14 (20)
    };
    struct {
      ULONG EntireField; // offset: 0x0 (0)
    } e4;                // offset: 0x14 (20)

  } u3; // offset: 0x14 (20)
  union {
    ULONG PteFrame : 24;    // offset: 0x18 (24)
    ULONG PageIdentity : 3; // offset: 0x18 (24)
    ULONG PrototypePte : 1; // offset: 0x18 (24)
    ULONG PageColor : 4;    // offset: 0x18 (24)
    ULONG EntireField;      // offset: 0x18 (24)

  } u4; // offset: 0x18 (24)
};

// 0x40 (64) bytes
struct _MI_COMMON_PAGE_STATE {
  struct _MMPFN *PageOfOnesPfn; // offset: 0x0 (0)
  ULONG PageOfOnes;             // offset: 0x4 (4)
  struct _MMPFN *DummyPagePfn;  // offset: 0x8 (8)
  ULONG DummyPage;              // offset: 0xc (12)
  ULONG PageOfZeroes;           // offset: 0x10 (16)
  VOID *ZeroMapping;            // offset: 0x14 (20)
  VOID *OnesMapping;            // offset: 0x18 (24)
  ULONGLONG ZeroCrc;            // offset: 0x20 (32)
  ULONGLONG OnesCrc;            // offset: 0x28 (40)
  ULONG BitmapGapFrames[2];     // offset: 0x30 (48)
  ULONG PfnGapFrames[2];        // offset: 0x38 (56)
};

// 0x8 (8) bytes
struct _MI_HARD_FAULT_STATE {
  struct _MMPFN *SwapPfn;                            // offset: 0x0 (0)
  struct _MI_STORE_INPAGE_COMPLETE_FLAGS StoreFlags; // offset: 0x4 (4)
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
    ULONG ImageCommitment;   // offset: 0x20 (32)
    ULONG CreatingProcessId; // offset: 0x20 (32)

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
          ULONG LargePage : 1;                 // offset: 0x4 (4)
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
  struct _EX_PUSH_LOCK FileObjectLock; // offset: 0x3c (60)
  volatile ULONGLONG LockedPages;      // offset: 0x40 (64)
  union {
    ULONG IoAttributionContext : 29; // offset: 0x48 (72)
    ULONG Spare : 3;                 // offset: 0x48 (72)
    ULONG ImageCrossPartitionCharge; // offset: 0x48 (72)
    ULONG CommittedPageCount : 20;   // offset: 0x48 (72)

  } u3; // offset: 0x48 (72)
};

// 0x140 (320) bytes
struct _MI_SECTION_STATE {
  volatile LONG SectionObjectPointersLock;         // offset: 0x0 (0)
  struct _RTL_AVL_TREE SectionBasedRoot;           // offset: 0x4 (4)
  struct _EX_PUSH_LOCK SectionBasedLock;           // offset: 0x8 (8)
  volatile ULONG UnusedSegmentPagedPool;           // offset: 0xc (12)
  ULONG DataSectionProtectionMask;                 // offset: 0x10 (16)
  VOID *HighSectionBase;                           // offset: 0x14 (20)
  struct _MSUBSECTION PhysicalSubsection;          // offset: 0x18 (24)
  struct _CONTROL_AREA PhysicalControlArea;        // offset: 0x70 (112)
  struct _MMPFNLIST PurgingExtentPages;            // offset: 0xc0 (192)
  struct _MMPFN *DanglingExtentPages;              // offset: 0xd4 (212)
  struct _WORK_QUEUE_ITEM DanglingExtentsWorkItem; // offset: 0xd8 (216)
  UCHAR DanglingExtentsWorkerActive;               // offset: 0xe8 (232)
  UCHAR PurgingExtentsNeedWatchdog;                // offset: 0xe9 (233)
  struct _RTL_AVL_TREE PrototypePtesTree;          // offset: 0xec (236)
  volatile LONG PrototypePtesTreeSpinLock;         // offset: 0xf0 (240)
  ULONG ImageBias;                                 // offset: 0xf4 (244)
  struct _EX_PUSH_LOCK RelocateBitmapsLock;        // offset: 0xf8 (248)
  struct _RTL_BITMAP ImageBitMap;                  // offset: 0xfc (252)
  VOID *ApiSetSection;                             // offset: 0x104 (260)
  VOID *ApiSetSchema;                              // offset: 0x108 (264)
  ULONG ApiSetSchemaSize;                          // offset: 0x10c (268)
  ULONG LostDataFiles;                             // offset: 0x110 (272)
  ULONG LostDataPages;                             // offset: 0x114 (276)
  ULONG ImageFailureReason;                        // offset: 0x118 (280)
  struct _SECTION *CfgBitMapSection32;             // offset: 0x11c (284)
  struct _CONTROL_AREA *CfgBitMapControlArea32;    // offset: 0x120 (288)
  ULONG ImageCfgFailure;                           // offset: 0x124 (292)
  ULONG ImageChecksumBreakpoint;                   // offset: 0x128 (296)
  ULONG ImageSizeBreakpoint;                       // offset: 0x12c (300)
  volatile LONG ImageValidationFailed;             // offset: 0x130 (304)
};

// 0x18 (24) bytes
struct _MI_PTE_CHAIN_HEAD {
  struct _MMPTE Flink;    // offset: 0x0 (0)
  struct _MMPTE Blink;    // offset: 0x8 (8)
  struct _MMPTE *PteBase; // offset: 0x10 (16)
};

// 0x40 (64) bytes
struct _MI_SPECIAL_POOL {
  ULONG Lock;                         // offset: 0x0 (0)
  struct _MI_PTE_CHAIN_HEAD Paged;    // offset: 0x8 (8)
  struct _MI_PTE_CHAIN_HEAD NonPaged; // offset: 0x20 (32)
  volatile ULONG PagesInUse;          // offset: 0x38 (56)
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
  volatile ULONG TotalSystemPtes;     // offset: 0x20 (32)
  ULONG Hint;                         // offset: 0x24 (36)
  ULONG LowestBitEverAllocated;       // offset: 0x28 (40)
  struct _MI_CACHED_PTES *CachedPtes; // offset: 0x2c (44)
  volatile ULONG TotalFreeSystemPtes; // offset: 0x30 (48)
};

// 0x18 (24) bytes
struct _MMWSL_INSTANCE {
  struct _MMPTE *NextPteToTrim;        // offset: 0x0 (0)
  struct _MMPTE *NextPteToAge;         // offset: 0x4 (4)
  struct _MMPTE *NextPteToAccessClear; // offset: 0x8 (8)
  ULONG LastAccessClearingRemainder;   // offset: 0xc (12)
  ULONG LastAgingRemainder;            // offset: 0x10 (16)
  ULONG LockedEntries;                 // offset: 0x14 (20)
};

// 0x2740 (10048) bytes
struct _MI_SYSTEM_VA_STATE {
  ULONG SystemTablesLock;                            // offset: 0x0 (0)
  ULONG SystemVaBias;                                // offset: 0x4 (4)
  ULONG SystemAvailableVaLow;                        // offset: 0x8 (8)
  ULONG VirtualBias;                                 // offset: 0xc (12)
  VOID *SystemRangeStart;                            // offset: 0x10 (16)
  UCHAR SystemCachePdeCount[1024];                   // offset: 0x14 (20)
  VOID *SystemCacheReverseMaps[1024];                // offset: 0x414 (1044)
  struct _MI_SYSTEM_REGION_REFERENCE VaRegion[1024]; // offset: 0x1414 (5140)
  ULONG TopLevelPteLockBits[128];                    // offset: 0x2414 (9236)
  ULONG TopLevelPteAlternateLockBits[4];             // offset: 0x2614 (9748)
  volatile LONG DeleteKvaLock;                       // offset: 0x2624 (9764)
  struct _MI_WSLE *WsleArrays[8];                    // offset: 0x2628 (9768)
  struct _MI_HYPER_SPACE *PagableHyperSpace;         // offset: 0x2648 (9800)
  VOID *HyperSpaceEnd;                               // offset: 0x264c (9804)
  struct _KEVENT FreeSystemCacheVa;                  // offset: 0x2650 (9808)
  ULONG SystemVaLock;                                // offset: 0x2660 (9824)
  ULONG SystemCacheViewLock;                         // offset: 0x2664 (9828)
  struct _MMWSL_INSTANCE SystemWorkingSetList[8];    // offset: 0x2668 (9832)
};

// 0x64 (100) bytes
struct _MMSUPPORT_INSTANCE {
  ULONG NextPageColor;                         // offset: 0x0 (0)
  ULONG PageFaultCount;                        // offset: 0x4 (4)
  ULONG TrimmedPageCount;                      // offset: 0x8 (8)
  struct _MMWSL_INSTANCE *VmWorkingSetList;    // offset: 0xc (12)
  struct _LIST_ENTRY WorkingSetExpansionLinks; // offset: 0x10 (16)
  ULONG AgeDistribution[8];                    // offset: 0x18 (24)
  struct _KGATE *ExitOutswapGate;              // offset: 0x38 (56)
  ULONG MinimumWorkingSetSize;                 // offset: 0x3c (60)
  ULONG WorkingSetLeafSize;                    // offset: 0x40 (64)
  ULONG WorkingSetLeafPrivateSize;             // offset: 0x44 (68)
  ULONG WorkingSetSize;                        // offset: 0x48 (72)
  ULONG WorkingSetPrivateSize;                 // offset: 0x4c (76)
  ULONG MaximumWorkingSetSize;                 // offset: 0x50 (80)
  ULONG PeakWorkingSetSize;                    // offset: 0x54 (84)
  ULONG HardFaultCount;                        // offset: 0x58 (88)
  USHORT LastTrimStamp;                        // offset: 0x5c (92)
  USHORT Unused0;                              // offset: 0x5e (94)
  struct _MMSUPPORT_FLAGS Flags;               // offset: 0x60 (96)
};

// 0x90 (144) bytes
struct _MMSUPPORT_FULL {
  struct _MMSUPPORT_INSTANCE Instance; // offset: 0x0 (0)
  struct _MMSUPPORT_SHARED Shared;     // offset: 0x64 (100)
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

// 0xa80 (2688) bytes
struct _MI_VISIBLE_STATE {
  struct _MI_SPECIAL_POOL SpecialPool;         // offset: 0x0 (0)
  struct _LIST_ENTRY SessionWsList;            // offset: 0x40 (64)
  struct _RTL_BITMAP *SessionIdBitmap;         // offset: 0x48 (72)
  struct _MM_PAGED_POOL_INFO PagedPoolInfo;    // offset: 0x4c (76)
  ULONG MaximumNonPagedPoolInPages;            // offset: 0x68 (104)
  ULONG SizeOfPagedPoolInPages;                // offset: 0x6c (108)
  struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;    // offset: 0x70 (112)
  volatile ULONG NonPagedPoolCommit;           // offset: 0xa4 (164)
  volatile ULONG SmallNonPagedPtesCommit;      // offset: 0xa8 (168)
  volatile ULONG BootCommit;                   // offset: 0xac (172)
  volatile ULONG MdlPagesAllocated;            // offset: 0xb0 (176)
  volatile ULONG SystemPageTableCommit;        // offset: 0xb4 (180)
  volatile ULONG SpecialPagesInUse;            // offset: 0xb8 (184)
  volatile ULONG ProcessCommit;                // offset: 0xbc (188)
  volatile LONG DriverCommit;                  // offset: 0xc0 (192)
  volatile ULONG PfnDatabaseCommit;            // offset: 0xc4 (196)
  struct _MMSUPPORT_FULL SystemWs[6];          // offset: 0x100 (256)
  struct _MMSUPPORT_SHARED SystemCacheShared;  // offset: 0x480 (1152)
  ULONG MapCacheFailures;                      // offset: 0x4ac (1196)
  ULONG PagefileHashPages;                     // offset: 0x4b0 (1200)
  struct _SYSPTES_HEADER PteHeader;            // offset: 0x4b4 (1204)
  struct _MI_SPECIAL_POOL *SessionSpecialPool; // offset: 0x540 (1344)
  ULONG SystemVaTypeCount[16];                 // offset: 0x544 (1348)
  UCHAR SystemVaType[1024];                    // offset: 0x584 (1412)
  ULONG SystemVaTypeCountFailures[16];         // offset: 0x984 (2436)
  ULONG SystemVaTypeCountLimit[16];            // offset: 0x9c4 (2500)
  ULONG SystemVaTypeCountPeak[16];             // offset: 0xa04 (2564)
  ULONG SystemAvailableVa;                     // offset: 0xa44 (2628)
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

// 0x8 (8) bytes
union _TIMELINE_BITMAP {
  ULONGLONG Value; // offset: 0x0 (0)
  struct {
    ULONG EndTime; // offset: 0x0 (0)
  };
  ULONG Bitmap; // offset: 0x4 (4)
};

// 0xa0 (160) bytes
struct _PROCESS_ENERGY_VALUES_EXTENSION {
  union {
    union _TIMELINE_BITMAP Timelines[14]; // offset: 0x0 (0)
    struct {
      union _TIMELINE_BITMAP CpuTimeline;                 // offset: 0x0 (0)
      union _TIMELINE_BITMAP DiskTimeline;                // offset: 0x8 (8)
      union _TIMELINE_BITMAP NetworkTimeline;             // offset: 0x10 (16)
      union _TIMELINE_BITMAP MBBTimeline;                 // offset: 0x18 (24)
      union _TIMELINE_BITMAP ForegroundTimeline;          // offset: 0x20 (32)
      union _TIMELINE_BITMAP DesktopVisibleTimeline;      // offset: 0x28 (40)
      union _TIMELINE_BITMAP CompositionRenderedTimeline; // offset: 0x30 (48)
      union _TIMELINE_BITMAP
          CompositionDirtyGeneratedTimeline; // offset: 0x38 (56)
      union _TIMELINE_BITMAP
          CompositionDirtyPropagatedTimeline;         // offset: 0x40 (64)
      union _TIMELINE_BITMAP InputTimeline;           // offset: 0x48 (72)
      union _TIMELINE_BITMAP AudioInTimeline;         // offset: 0x50 (80)
      union _TIMELINE_BITMAP AudioOutTimeline;        // offset: 0x58 (88)
      union _TIMELINE_BITMAP DisplayRequiredTimeline; // offset: 0x60 (96)
      union _TIMELINE_BITMAP KeyboardInputTimeline;   // offset: 0x68 (104)
    };
  };
  union {
    union _ENERGY_STATE_DURATION Durations[5]; // offset: 0x70 (112)
    struct {
      union _ENERGY_STATE_DURATION InputDuration;    // offset: 0x70 (112)
      union _ENERGY_STATE_DURATION AudioInDuration;  // offset: 0x78 (120)
      union _ENERGY_STATE_DURATION AudioOutDuration; // offset: 0x80 (128)
      union _ENERGY_STATE_DURATION
          DisplayRequiredDuration;                        // offset: 0x88 (136)
      union _ENERGY_STATE_DURATION PSMBackgroundDuration; // offset: 0x90 (144)
    };
  };
  ULONG KeyboardInput; // offset: 0x98 (152)
  ULONG MouseInput;    // offset: 0x9c (156)
};

// 0x8 (8) bytes
union _JOBOBJECT_ENERGY_TRACKING_STATE {
  ULONGLONG Value; // offset: 0x0 (0)
  struct {
    ULONG UpdateMask; // offset: 0x0 (0)
  };
  ULONG DesiredState; // offset: 0x4 (4)
};

// 0x58 (88) bytes
struct _EPROCESS_VALUES {
  ULONGLONG KernelTime;         // offset: 0x0 (0)
  ULONGLONG UserTime;           // offset: 0x8 (8)
  ULONGLONG ReadyTime;          // offset: 0x10 (16)
  ULONGLONG CycleTime;          // offset: 0x18 (24)
  ULONGLONG ContextSwitches;    // offset: 0x20 (32)
  LONGLONG ReadOperationCount;  // offset: 0x28 (40)
  LONGLONG WriteOperationCount; // offset: 0x30 (48)
  LONGLONG OtherOperationCount; // offset: 0x38 (56)
  LONGLONG ReadTransferCount;   // offset: 0x40 (64)
  LONGLONG WriteTransferCount;  // offset: 0x48 (72)
  LONGLONG OtherTransferCount;  // offset: 0x50 (80)
};

// 0x48 (72) bytes
struct _PS_JOB_WAKE_INFORMATION {
  ULONGLONG NotificationChannel; // offset: 0x0 (0)
  ULONGLONG WakeCounters[7];     // offset: 0x8 (8)
  ULONGLONG NoWakeCounter;       // offset: 0x40 (64)
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

// 0x30 (48) bytes
struct _PS_PROCESS_WAKE_INFORMATION {
  ULONGLONG NotificationChannel;            // offset: 0x0 (0)
  ULONG WakeCounters[7];                    // offset: 0x8 (8)
  struct _JOBOBJECT_WAKE_FILTER WakeFilter; // offset: 0x24 (36)
  ULONG NoWakeCounter;                      // offset: 0x2c (44)
};

// 0x18 (24) bytes
struct _POP_FX_IDLE_STATE {
  ULONGLONG TransitionLatency;    // offset: 0x0 (0)
  ULONGLONG ResidencyRequirement; // offset: 0x8 (8)
  ULONG NominalPower;             // offset: 0x10 (16)
};

// 0x38 (56) bytes
struct _PPM_VETO_ENTRY {
  struct _LIST_ENTRY Link;      // offset: 0x0 (0)
  ULONG VetoReason;             // offset: 0x8 (8)
  ULONG ReferenceCount;         // offset: 0xc (12)
  ULONGLONG HitCount;           // offset: 0x10 (16)
  ULONGLONG LastActivationTime; // offset: 0x18 (24)
  ULONGLONG TotalActiveTime;    // offset: 0x20 (32)
  ULONGLONG CsActivationTime;   // offset: 0x28 (40)
  ULONGLONG CsActiveTime;       // offset: 0x30 (48)
};

// 0x18 (24) bytes
struct _PPM_VETO_ACCOUNTING {
  volatile LONG VetoPresent;                    // offset: 0x0 (0)
  struct _LIST_ENTRY VetoListHead;              // offset: 0x4 (4)
  UCHAR CsAccountingBlocks;                     // offset: 0xc (12)
  UCHAR BlocksDrips;                            // offset: 0xd (13)
  ULONG PreallocatedVetoCount;                  // offset: 0x10 (16)
  struct _PPM_VETO_ENTRY *PreallocatedVetoList; // offset: 0x14 (20)
};

// 0xc0 (192) bytes
struct _PPM_PLATFORM_STATE {
  ULONGLONG LevelId;                                 // offset: 0x0 (0)
  ULONG Latency;                                     // offset: 0x8 (8)
  ULONG BreakEvenDuration;                           // offset: 0xc (12)
  struct _PPM_VETO_ACCOUNTING VetoAccounting;        // offset: 0x10 (16)
  UCHAR TransitionDebugger;                          // offset: 0x28 (40)
  UCHAR Platform;                                    // offset: 0x29 (41)
  ULONG DependencyListCount;                         // offset: 0x2c (44)
  struct _KAFFINITY_EX Processors;                   // offset: 0x30 (48)
  struct _UNICODE_STRING Name;                       // offset: 0x3c (60)
  struct _PPM_SELECTION_DEPENDENCY *DependencyLists; // offset: 0x44 (68)
  union _PPM_COORDINATED_SYNCHRONIZATION volatile Synchronization; // offset:
                                                                   // 0x48 (72)
  volatile ULONGLONG EnterTime; // offset: 0x50 (80)
  union {
    volatile LONG RefCount; // offset: 0x80 (128)
    UCHAR CacheAlign0[64];  // offset: 0x80 (128)
  };
};

// 0x44 (68) bytes
struct _PPM_IDLE_STATE {
  struct _KAFFINITY_EX DomainMembers;         // offset: 0x0 (0)
  struct _UNICODE_STRING Name;                // offset: 0xc (12)
  ULONG Latency;                              // offset: 0x14 (20)
  ULONG BreakEvenDuration;                    // offset: 0x18 (24)
  ULONG Power;                                // offset: 0x1c (28)
  ULONG StateFlags;                           // offset: 0x20 (32)
  struct _PPM_VETO_ACCOUNTING VetoAccounting; // offset: 0x24 (36)
  UCHAR StateType;                            // offset: 0x3c (60)
  UCHAR InterruptsEnabled;                    // offset: 0x3d (61)
  UCHAR Interruptible;                        // offset: 0x3e (62)
  UCHAR ContextRetained;                      // offset: 0x3f (63)
  UCHAR CacheCoherent;                        // offset: 0x40 (64)
  UCHAR WakesSpuriously;                      // offset: 0x41 (65)
  UCHAR PlatformOnly;                         // offset: 0x42 (66)
  UCHAR NoCState;                             // offset: 0x43 (67)
};

// 0x50 (80) bytes
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
  ULONGLONG HvDeviceId;       // offset: 0x38 (56)
  union {
    struct {
      union _LARGE_INTEGER Address; // offset: 0x0 (0)
      ULONG DataPayload;            // offset: 0x8 (8)
    } XapicMessage;                 // offset: 0x40 (64)
    struct {
      struct _INTERRUPT_HT_INTR_INFO IntrInfo; // offset: 0x0 (0)
    } Hypertransport;                          // offset: 0x40 (64)
    struct {
      union _LARGE_INTEGER Address; // offset: 0x0 (0)
      ULONG DataPayload;            // offset: 0x8 (8)
    } GenericMessage;               // offset: 0x40 (64)
    struct {
      enum HAL_APIC_DESTINATION_MODE DestinationMode; // offset: 0x0 (0)
    } MessageRequest;                                 // offset: 0x40 (64)
  };
};

// 0x58 (88) bytes
struct _INTERRUPT_CONNECTION_DATA {
  ULONG Count;                              // offset: 0x0 (0)
  struct _INTERRUPT_VECTOR_DATA Vectors[1]; // offset: 0x8 (8)
};

// 0x50 (80) bytes
struct _PNP_REBALANCE_TRACE_CONTEXT {
  ULONG DeviceCount;                       // offset: 0x0 (0)
  ULONG RebalancePhase;                    // offset: 0x4 (4)
  enum _PNP_REBALANCE_REASON Reason[2];    // offset: 0x8 (8)
  enum _PNP_REBALANCE_FAILURE Failure[2];  // offset: 0x10 (16)
  struct _DEVICE_NODE *SubtreeRoot;        // offset: 0x18 (24)
  UCHAR SubtreeIncludesRoot;               // offset: 0x1c (28)
  struct _DEVICE_NODE *TriggerRoot;        // offset: 0x20 (32)
  UCHAR RebalanceDueToDynamicPartitioning; // offset: 0x24 (36)
  ULONGLONG BeginTime;                     // offset: 0x28 (40)
  struct _DEVICE_NODE *VetoNode[2];        // offset: 0x30 (48)
  enum _PNP_DEVNODE_QUERY_REBALANCE_VETO_REASON
      VetoQueryRebalanceReason[2]; // offset: 0x38 (56)
  struct _PNP_RESOURCE_CONFLICT_TRACE_CONTEXT
      ConflictContext; // offset: 0x40 (64)
};

// 0x20 (32) bytes
struct _PROC_IDLE_STATE_BUCKET {
  ULONGLONG TotalTime; // offset: 0x0 (0)
  ULONGLONG MinTime;   // offset: 0x8 (8)
  ULONGLONG MaxTime;   // offset: 0x10 (16)
  ULONG Count;         // offset: 0x18 (24)
};

// 0x80 (128) bytes
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
  ULONGLONG NotClockOwnerCount;                   // offset: 0x70 (112)
  struct _PPM_VETO_ACCOUNTING *PreVetoAccounting; // offset: 0x78 (120)
};

// 0x3f0 (1008) bytes
struct _PLATFORM_IDLE_STATE_ACCOUNTING {
  ULONG CancelCount;                                    // offset: 0x0 (0)
  ULONG FailureCount;                                   // offset: 0x4 (4)
  ULONG SuccessCount;                                   // offset: 0x8 (8)
  ULONGLONG MaxTime;                                    // offset: 0x10 (16)
  ULONGLONG MinTime;                                    // offset: 0x18 (24)
  ULONGLONG TotalTime;                                  // offset: 0x20 (32)
  ULONG InvalidBucketIndex;                             // offset: 0x28 (40)
  struct _PPM_SELECTION_STATISTICS SelectionStatistics; // offset: 0x30 (48)
  struct _PROC_IDLE_STATE_BUCKET IdleTimeBuckets[26];   // offset: 0xb0 (176)
};

// 0x408 (1032) bytes
struct _PLATFORM_IDLE_ACCOUNTING {
  ULONG ResetCount;                                // offset: 0x0 (0)
  ULONG StateCount;                                // offset: 0x4 (4)
  ULONG DeepSleepCount;                            // offset: 0x8 (8)
  enum PPM_IDLE_BUCKET_TIME_TYPE TimeUnit;         // offset: 0xc (12)
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
  LONG(*IdlePreExecute)
  (VOID *arg1, ULONG arg2, ULONG arg3, ULONG arg4,
   ULONG *arg5); // offset: 0x14 (20)
  VOID(*IdleComplete)
  (VOID *arg1, ULONG arg2, ULONG arg3, ULONG arg4,
   ULONG *arg5); // offset: 0x18 (24)
  LONG(*QueryPlatformStateResidency)
  (VOID *arg1,
   struct _PROCESSOR_PLATFORM_STATE_RESIDENCIES *arg2); // offset: 0x1c (28)
  struct _PLATFORM_IDLE_ACCOUNTING *Accounting;         // offset: 0x20 (32)
  UCHAR DeepSleepEnabled;                               // offset: 0x24 (36)
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

// 0x18 (24) bytes
struct _POP_FX_LOG_ENTRY {
  ULONGLONG Timestamp;   // offset: 0x0 (0)
  UCHAR Operation;       // offset: 0x8 (8)
  UCHAR Component;       // offset: 0x9 (9)
  USHORT Processor;      // offset: 0xa (10)
  USHORT Process;        // offset: 0xc (12)
  USHORT Thread;         // offset: 0xe (14)
  ULONGLONG Information; // offset: 0x10 (16)
};

// 0x3e8 (1000) bytes
struct _PROC_IDLE_STATE_ACCOUNTING {
  ULONGLONG TotalTime;                                  // offset: 0x0 (0)
  ULONG CancelCount;                                    // offset: 0x8 (8)
  ULONG FailureCount;                                   // offset: 0xc (12)
  ULONG SuccessCount;                                   // offset: 0x10 (16)
  ULONG InvalidBucketIndex;                             // offset: 0x14 (20)
  ULONGLONG MinTime;                                    // offset: 0x18 (24)
  ULONGLONG MaxTime;                                    // offset: 0x20 (32)
  struct _PPM_SELECTION_STATISTICS SelectionStatistics; // offset: 0x28 (40)
  struct _PROC_IDLE_STATE_BUCKET IdleTimeBuckets[26];   // offset: 0xa8 (168)
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
  UCHAR IdleStateMax;             // offset: 0x2e (46)
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

// 0x78 (120) bytes
struct _POP_FX_ACCOUNTING {
  ULONG Lock;                             // offset: 0x0 (0)
  UCHAR Active;                           // offset: 0x4 (4)
  ULONG DripsRequiredState;               // offset: 0x8 (8)
  LONG Level;                             // offset: 0xc (12)
  LONGLONG ActiveStamp;                   // offset: 0x10 (16)
  ULONGLONG CsActiveTime;                 // offset: 0x18 (24)
  LONGLONG CriticalActiveTime;            // offset: 0x20 (32)
  ULONGLONG CriticalActiveTimeBuckets[5]; // offset: 0x28 (40)
  ULONGLONG CsActiveTimeBuckets[5];       // offset: 0x50 (80)
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

// 0x28 (40) bytes
struct _PERF_CONTROL_STATE_SELECTION {
  ULONGLONG SelectedState;        // offset: 0x0 (0)
  ULONG SelectedPercent;          // offset: 0x8 (8)
  ULONG SelectedFrequency;        // offset: 0xc (12)
  ULONG MinPercent;               // offset: 0x10 (16)
  ULONG MaxPercent;               // offset: 0x14 (20)
  ULONG TolerancePercent;         // offset: 0x18 (24)
  ULONG EppPercent;               // offset: 0x1c (28)
  ULONG AutonomousActivityWindow; // offset: 0x20 (32)
  UCHAR Autonomous;               // offset: 0x24 (36)
  UCHAR InheritFromDomain;        // offset: 0x25 (37)
};

// 0x100 (256) bytes
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
  UCHAR ShareRankOwner : 1;             // offset: 0x5c (92)
  UCHAR Spare1 : 2;                     // offset: 0x5c (92)
  UCHAR Depth;                          // offset: 0x5d (93)
  USHORT ReadySummary;                  // offset: 0x5e (94)
  ULONG Rank;                           // offset: 0x60 (96)
  volatile ULONG *ShareRank;            // offset: 0x64 (100)
  volatile ULONG OwnerShareRank;        // offset: 0x68 (104)
  struct _LIST_ENTRY ReadyListHead[16]; // offset: 0x6c (108)
  struct _RTL_RB_TREE ChildScbQueue;    // offset: 0xec (236)
  struct _KSCB *Parent;                 // offset: 0xf4 (244)
  struct _KSCB *Root;                   // offset: 0xf8 (248)
};

// 0xb0 (176) bytes
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
      ULONG AutoAlignment : 1;         // offset: 0x64 (100)
      ULONG DisableBoost : 1;          // offset: 0x64 (100)
      ULONG DisableQuantum : 1;        // offset: 0x64 (100)
      ULONG DeepFreeze : 1;            // offset: 0x64 (100)
      ULONG TimerVirtualization : 1;   // offset: 0x64 (100)
      ULONG CheckStackExtents : 1;     // offset: 0x64 (100)
      ULONG CacheIsolationEnabled : 1; // offset: 0x64 (100)
      ULONG PpmPolicy : 3;             // offset: 0x64 (100)
      ULONG ActiveGroupsMask : 1;      // offset: 0x64 (100)
      ULONG VaSpaceDeleted : 1;        // offset: 0x64 (100)
      ULONG ReservedFlags : 20;        // offset: 0x64 (100)
    };
    volatile LONG ProcessFlags; // offset: 0x64 (100)
  };
  CHAR BasePriority;                          // offset: 0x68 (104)
  CHAR QuantumReset;                          // offset: 0x69 (105)
  CHAR Visited;                               // offset: 0x6a (106)
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
  ULONG ReadyTime;                            // offset: 0xa4 (164)
  VOID *VdmTrapcHandler;                      // offset: 0xa8 (168)
  ULONG ProcessTimerDelay;                    // offset: 0xac (172)
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

// 0x180 (384) bytes
struct _KSCHEDULING_GROUP {
  struct _KSCHEDULING_GROUP_POLICY Policy;   // offset: 0x0 (0)
  ULONG RelativeWeight;                      // offset: 0x8 (8)
  ULONG ChildMinRate;                        // offset: 0xc (12)
  ULONG ChildMinWeight;                      // offset: 0x10 (16)
  ULONG ChildTotalWeight;                    // offset: 0x14 (20)
  ULONGLONG QueryHistoryTimeStamp;           // offset: 0x18 (24)
  LONGLONG NotificationCycles;               // offset: 0x20 (32)
  LONGLONG MaxQuotaLimitCycles;              // offset: 0x28 (40)
  volatile LONGLONG MaxQuotaCyclesRemaining; // offset: 0x30 (48)
  union {
    struct _LIST_ENTRY SchedulingGroupList; // offset: 0x38 (56)
    struct _LIST_ENTRY Sibling;             // offset: 0x38 (56)
  };
  struct _KDPC *NotificationDpc;     // offset: 0x40 (64)
  struct _LIST_ENTRY ChildList;      // offset: 0x44 (68)
  struct _KSCHEDULING_GROUP *Parent; // offset: 0x4c (76)
  struct _KSCB PerProcessor[1];      // offset: 0x80 (128)
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

// 0x410 (1040) bytes
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

// 0x150 (336) bytes
struct _PPM_IDLE_STATES {
  UCHAR InterfaceVersion;                      // offset: 0x0 (0)
  UCHAR IdleOverride;                          // offset: 0x1 (1)
  UCHAR EstimateIdleDuration;                  // offset: 0x2 (2)
  UCHAR ExitLatencyTraceEnabled;               // offset: 0x3 (3)
  UCHAR NonInterruptibleTransition;            // offset: 0x4 (4)
  UCHAR UnaccountedTransition;                 // offset: 0x5 (5)
  UCHAR IdleDurationLimited;                   // offset: 0x6 (6)
  UCHAR IdleCheckLimited;                      // offset: 0x7 (7)
  UCHAR StrictVetoBias;                        // offset: 0x8 (8)
  ULONG ExitLatencyCountdown;                  // offset: 0xc (12)
  ULONG TargetState;                           // offset: 0x10 (16)
  ULONG ActualState;                           // offset: 0x14 (20)
  ULONG OldState;                              // offset: 0x18 (24)
  ULONG OverrideIndex;                         // offset: 0x1c (28)
  ULONG ProcessorIdleCount;                    // offset: 0x20 (32)
  ULONG Type;                                  // offset: 0x24 (36)
  ULONGLONG LevelId;                           // offset: 0x28 (40)
  USHORT ReasonFlags;                          // offset: 0x30 (48)
  volatile ULONGLONG InitiateWakeStamp;        // offset: 0x38 (56)
  LONG PreviousStatus;                         // offset: 0x40 (64)
  ULONG PreviousCancelReason;                  // offset: 0x44 (68)
  struct _KAFFINITY_EX PrimaryProcessorMask;   // offset: 0x48 (72)
  struct _KAFFINITY_EX SecondaryProcessorMask; // offset: 0x54 (84)
  VOID(*IdlePrepare)
  (struct _PROCESSOR_IDLE_PREPARE_INFO *arg1); // offset: 0x60 (96)
  LONG(*IdlePreExecute)
  (VOID *arg1, ULONG arg2, ULONG arg3, ULONG arg4,
   ULONG *arg5); // offset: 0x64 (100)
  LONG(*IdleExecute)
  (VOID *arg1, ULONGLONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6,
   ULONG *arg7); // offset: 0x68 (104)
  ULONG(*IdlePreselect)
  (VOID *arg1, struct _PROCESSOR_IDLE_CONSTRAINTS *arg2); // offset: 0x6c (108)
  ULONG (*IdleTest)(VOID *arg1, ULONG arg2, ULONG arg3);  // offset: 0x70 (112)
  ULONG (*IdleAvailabilityCheck)(VOID *arg1, ULONG arg2); // offset: 0x74 (116)
  VOID(*IdleComplete)
  (VOID *arg1, ULONG arg2, ULONG arg3, ULONG arg4,
   ULONG *arg5);                                   // offset: 0x78 (120)
  VOID (*IdleCancel)(VOID *arg1, ULONG arg2);      // offset: 0x7c (124)
  UCHAR (*IdleIsHalted)(VOID *arg1);               // offset: 0x80 (128)
  UCHAR (*IdleInitiateWake)(VOID *arg1);           // offset: 0x84 (132)
  struct _PROCESSOR_IDLE_PREPARE_INFO PrepareInfo; // offset: 0x88 (136)
  struct _KAFFINITY_EX DeepIdleSnapshot;           // offset: 0xd8 (216)
  struct _PERFINFO_PPM_STATE_SELECTION *Tracing;   // offset: 0xe4 (228)
  struct _PERFINFO_PPM_STATE_SELECTION
      *CoordinatedTracing;                                // offset: 0xe8 (232)
  struct _PPM_SELECTION_MENU ProcessorMenu;               // offset: 0xec (236)
  struct _PPM_SELECTION_MENU CoordinatedMenu;             // offset: 0xf4 (244)
  struct _PPM_COORDINATED_SELECTION CoordinatedSelection; // offset: 0xfc (252)
  struct _PPM_IDLE_STATE State[1];                        // offset: 0x10c (268)
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

// 0x140 (320) bytes
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
  ULONG ReadyThreadCount;               // offset: 0x134 (308)
  ULONGLONG ReadyQueueExpectedRunTime;  // offset: 0x138 (312)
};

// 0xa8 (168) bytes
struct _ARBITER_INSTANCE {
  ULONG Signature;                                   // offset: 0x0 (0)
  struct _KEVENT *MutexEvent;                        // offset: 0x4 (4)
  WCHAR *Name;                                       // offset: 0x8 (8)
  WCHAR *OrderingName;                               // offset: 0xc (12)
  LONG ResourceType;                                 // offset: 0x10 (16)
  struct _RTL_RANGE_LIST *Allocation;                // offset: 0x14 (20)
  struct _RTL_RANGE_LIST *PossibleAllocation;        // offset: 0x18 (24)
  struct _ARBITER_ORDERING_LIST OrderingList;        // offset: 0x1c (28)
  struct _ARBITER_ORDERING_LIST ReservedList;        // offset: 0x24 (36)
  LONG ReferenceCount;                               // offset: 0x2c (44)
  struct _ARBITER_INTERFACE *Interface;              // offset: 0x30 (48)
  ULONG AllocationStackMaxSize;                      // offset: 0x34 (52)
  struct _ARBITER_ALLOCATION_STATE *AllocationStack; // offset: 0x38 (56)
  LONG(*UnpackRequirement)
  (struct _IO_RESOURCE_DESCRIPTOR *arg1, ULONGLONG *arg2, ULONGLONG *arg3,
   ULONGLONG *arg4, ULONGLONG *arg5); // offset: 0x3c (60)
  LONG(*PackResource)
  (struct _IO_RESOURCE_DESCRIPTOR *arg1, ULONGLONG arg2,
   struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *arg3); // offset: 0x40 (64)
  LONG(*UnpackResource)
  (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *arg1, ULONGLONG *arg2,
   ULONGLONG *arg3); // offset: 0x44 (68)
  LONG(*ScoreRequirement)
  (struct _IO_RESOURCE_DESCRIPTOR *arg1); // offset: 0x48 (72)
  LONG(*TestAllocation)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_TEST_ALLOCATION_PARAMETERS *arg2); // offset: 0x4c (76)
  LONG(*RetestAllocation)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_RETEST_ALLOCATION_PARAMETERS *arg2);     // offset: 0x50 (80)
  LONG (*CommitAllocation)(struct _ARBITER_INSTANCE *arg1); // offset: 0x54 (84)
  LONG(*RollbackAllocation)
  (struct _ARBITER_INSTANCE *arg1); // offset: 0x58 (88)
  LONG(*BootAllocation)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_BOOT_ALLOCATION_PARAMETERS *arg2); // offset: 0x5c (92)
  LONG(*QueryArbitrate)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_QUERY_ARBITRATE_PARAMETERS *arg2); // offset: 0x60 (96)
  LONG(*QueryConflict)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_QUERY_CONFLICT_PARAMETERS *arg2); // offset: 0x64 (100)
  LONG(*AddReserved)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ADD_RESERVED_PARAMETERS *arg2); // offset: 0x68 (104)
  LONG(*StartArbiter)
  (struct _ARBITER_INSTANCE *arg1,
   struct _CM_RESOURCE_LIST *arg2); // offset: 0x6c (108)
  LONG(*PreprocessEntry)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x70 (112)
  LONG(*AllocateEntry)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x74 (116)
  UCHAR(*GetNextAllocationRange)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x78 (120)
  UCHAR(*FindSuitableRange)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x7c (124)
  VOID(*AddAllocation)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x80 (128)
  VOID(*BacktrackAllocation)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x84 (132)
  UCHAR(*OverrideConflict)
  (struct _ARBITER_INSTANCE *arg1,
   struct _ARBITER_ALLOCATION_STATE *arg2); // offset: 0x88 (136)
  LONG(*InitializeRangeList)
  (struct _ARBITER_INSTANCE *arg1, ULONG arg2,
   struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *arg3,
   struct _RTL_RANGE_LIST *arg4);         // offset: 0x8c (140)
  UCHAR TransactionInProgress;            // offset: 0x90 (144)
  struct _KEVENT *TransactionEvent;       // offset: 0x94 (148)
  VOID *Extension;                        // offset: 0x98 (152)
  struct _DEVICE_OBJECT *BusDeviceObject; // offset: 0x9c (156)
  VOID *ConflictCallbackContext;          // offset: 0xa0 (160)
  UCHAR(*ConflictCallback)
  (VOID *arg1, struct _RTL_RANGE *arg2); // offset: 0xa4 (164)
};

// 0xf8 (248) bytes
struct _HAL_INTEL_ENLIGHTENMENT_INFORMATION {
  ULONG Enlightenments;                         // offset: 0x0 (0)
  ULONG HypervisorConnected;                    // offset: 0x4 (4)
  VOID (*EndOfInterrupt)();                     // offset: 0x8 (8)
  VOID (*ApicWriteIcr)(ULONG arg1, ULONG arg2); // offset: 0xc (12)
  ULONG Reserved0;                              // offset: 0x10 (16)
  ULONG SpinCountMask;                          // offset: 0x14 (20)
  VOID (*LongSpinWait)(ULONG arg1);             // offset: 0x18 (24)
  ULONGLONG (*GetReferenceTime)();              // offset: 0x1c (28)
  LONG(*SetSystemSleepProperty)
  (ULONG arg1, UCHAR arg2, UCHAR arg3); // offset: 0x20 (32)
  LONG (*EnterSleepState)(ULONG arg1);  // offset: 0x24 (36)
  LONG (*NotifyDebugDeviceAvailable)(); // offset: 0x28 (40)
  LONG(*MapDeviceInterrupt)
  (ULONGLONG arg1, VOID *arg2, struct _GROUP_AFFINITY *arg3,
   VOID *arg4);                                             // offset: 0x2c (44)
  LONG (*UnmapDeviceInterrupt)(ULONGLONG arg1, VOID *arg2); // offset: 0x30 (48)
  LONG(*RetargetDeviceInterrupt)
  (ULONGLONG arg1, VOID *arg2, VOID *arg3, struct _GROUP_AFFINITY *arg4,
   VOID *arg5); // offset: 0x34 (52)
  LONG(*SetHpetConfig)
  (union _LARGE_INTEGER arg1, ULONG arg2, ULONGLONG arg3, UCHAR arg4,
   VOID *arg5);                // offset: 0x38 (56)
  LONG (*NotifyHpetEnabled)(); // offset: 0x3c (60)
  LONG(*QueryAssociatedProcessors)
  (ULONG arg1, ULONG *arg2, ULONG *arg3); // offset: 0x40 (64)
  LONG(*ReadMultipleMsr)
  (ULONG arg1, ULONG arg2, ULONG *arg3, ULONGLONG *arg4); // offset: 0x44 (68)
  LONG(*WriteMultipleMsr)
  (ULONG arg1, ULONG arg2, ULONG *arg3, ULONGLONG *arg4); // offset: 0x48 (72)
  LONG(*ReadCpuid)
  (ULONG arg1, ULONG arg2, ULONG *arg3, ULONG *arg4, ULONG *arg5,
   ULONG *arg6);                             // offset: 0x4c (76)
  LONG (*LpWritebackInvalidate)(ULONG arg1); // offset: 0x50 (80)
  LONG(*GetMachineCheckContext)
  (ULONG arg1, ULONG *arg2, ULONGLONG *arg3, ULONG *arg4); // offset: 0x54 (84)
  LONG (*SuspendPartition)(ULONGLONG arg1);                // offset: 0x58 (88)
  LONG (*ResumePartition)(ULONGLONG arg1);                 // offset: 0x5c (92)
  LONG (*SetSystemMachineCheckProperty)(VOID *arg1);       // offset: 0x60 (96)
  LONG(*WheaErrorNotification)
  (struct _WHEA_RECOVERY_CONTEXT *arg1, UCHAR arg2,
   UCHAR arg3);                                      // offset: 0x64 (100)
  ULONG (*GetProcessorIndexFromVpIndex)(ULONG arg1); // offset: 0x68 (104)
  LONG(*SyntheticClusterIpi)
  (struct _KAFFINITY_EX *arg1, ULONG arg2);              // offset: 0x6c (108)
  UCHAR (*VpStartEnabled)();                             // offset: 0x70 (112)
  LONG (*StartVirtualProcessor)(ULONG arg1, VOID *arg2); // offset: 0x74 (116)
  LONG (*GetVpIndexFromApicId)(ULONG arg1, ULONG *arg2); // offset: 0x78 (120)
  LONG(*IumAccessPciDevice)
  (UCHAR arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6,
   ULONG arg7, VOID *arg8); // offset: 0x7c (124)
  ULONG(*IumEfiRuntimeService)
  (ULONG arg1, VOID *arg2, ULONGLONG arg3,
   ULONGLONG *arg4); // offset: 0x80 (128)
  VOID(*SvmGetSystemCapabilities)
  (struct _HAL_HV_SVM_SYSTEM_CAPABILITIES *arg1); // offset: 0x84 (132)
  LONG(*SvmGetDeviceCapabilities)
  (ULONG arg1,
   struct _HAL_HV_SVM_DEVICE_CAPABILITIES *arg2);      // offset: 0x88 (136)
  LONG (*SvmCreatePasidSpace)(ULONG arg1, ULONG arg2); // offset: 0x8c (140)
  LONG(*SvmSetPasidAddressSpace)
  (ULONG arg1, ULONG arg2, ULONGLONG arg3); // offset: 0x90 (144)
  VOID(*SvmFlushPasid)
  (ULONG arg1, ULONG arg2, ULONG arg3,
   struct _KTB_FLUSH_VA *arg4); // offset: 0x94 (148)
  LONG(*SvmAttachPasidSpace)
  (ULONG arg1, ULONG arg2, ULONG arg3, ULONG arg4); // offset: 0x98 (152)
  LONG (*SvmDetachPasidSpace)(ULONG arg1);          // offset: 0x9c (156)
  LONG (*SvmEnablePasid)(ULONG arg1, ULONG arg2);   // offset: 0xa0 (160)
  LONG (*SvmDisablePasid)(ULONG arg1, ULONG arg2);  // offset: 0xa4 (164)
  LONG(*SvmAcknowledgePageRequest)
  (ULONG arg1, VOID *arg2, ULONG *arg3); // offset: 0xa8 (168)
  LONG(*SvmCreatePrQueue)
  (ULONG arg1, ULONG arg2, union _LARGE_INTEGER arg3, ULONG arg4,
   ULONG arg5);                                        // offset: 0xac (172)
  LONG (*SvmDeletePrQueue)(ULONG arg1);                // offset: 0xb0 (176)
  LONG (*SvmClearPrqStalled)(ULONG arg1);              // offset: 0xb4 (180)
  LONG (*SvmSetDeviceEnabled)(ULONG arg1, UCHAR arg2); // offset: 0xb8 (184)
  LONG (*HvDebuggerPowerHandler)(UCHAR arg1);          // offset: 0xbc (188)
  LONG (*SetQpcBias)(ULONGLONG arg1);                  // offset: 0xc0 (192)
  ULONGLONG (*GetQpcBias)();                           // offset: 0xc4 (196)
  LONG(*RegisterDeviceId)
  (struct _EXT_IOMMU_DEVICE_ID *arg1, ULONGLONG arg2); // offset: 0xc8 (200)
  LONG (*UnregisterDeviceId)(ULONGLONG arg1);          // offset: 0xcc (204)
  LONG(*AllocateDeviceDomain)
  (struct _HAL_HV_DMA_DOMAIN_INFO *arg1); // offset: 0xd0 (208)
  LONG(*AttachDeviceDomain)
  (struct _EXT_IOMMU_DEVICE_ID *arg1,
   struct _HAL_HV_DMA_DOMAIN_INFO *arg2);     // offset: 0xd4 (212)
  LONG (*DetachDeviceDomain)(ULONGLONG arg1); // offset: 0xd8 (216)
  LONG(*DeleteDeviceDomain)
  (struct _HAL_HV_DMA_DOMAIN_INFO *arg1); // offset: 0xdc (220)
  LONG(*MapDeviceLogicalRange)
  (struct _HAL_HV_DMA_DOMAIN_INFO *arg1, ULONG arg2, ULONGLONG arg3,
   ULONG *arg4, ULONGLONG *arg5); // offset: 0xe0 (224)
  LONG(*UnmapDeviceLogicalRange)
  (struct _HAL_HV_DMA_DOMAIN_INFO *arg1, ULONGLONG arg2,
   ULONGLONG *arg3); // offset: 0xe4 (228)
  LONG(*MapDeviceSparsePages)
  (struct _HAL_HV_DMA_DOMAIN_INFO *arg1, ULONG arg2, ULONG *arg3,
   ULONGLONG *arg4); // offset: 0xe8 (232)
  LONG(*UnmapDeviceSparsePages)
  (struct _HAL_HV_DMA_DOMAIN_INFO *arg1, ULONG *arg2,
   ULONGLONG *arg3);                               // offset: 0xec (236)
  LONG (*GetDmaGuardEnabled)(UCHAR *arg1);         // offset: 0xf0 (240)
  LONG (*UpdateMicrocode)(VOID *arg1, ULONG arg2); // offset: 0xf4 (244)
};

// 0x40 (64) bytes
struct _ETW_SILO_TRACING_BLOCK {
  struct _EX_FAST_REF *ProcessorBuffers; // offset: 0x0 (0)
  ULONGLONG *EventsLoggedCount;          // offset: 0x4 (4)
};

// 0x28 (40) bytes
struct _PROC_FEEDBACK_COUNTER {
  union {
    VOID (*InstantaneousRead)(ULONG arg1, ULONG *arg2); // offset: 0x0 (0)
    VOID(*DifferentialRead)
    (ULONG arg1, UCHAR arg2, ULONGLONG *arg3,
     ULONGLONG *arg4); // offset: 0x0 (0)
  };
  ULONGLONG LastActualCount;    // offset: 0x8 (8)
  ULONGLONG LastReferenceCount; // offset: 0x10 (16)
  ULONG CachedValue;            // offset: 0x18 (24)
  UCHAR Affinitized;            // offset: 0x20 (32)
  UCHAR Differential;           // offset: 0x21 (33)
  UCHAR DiscardIdleTime;        // offset: 0x22 (34)
  UCHAR Scaling;                // offset: 0x23 (35)
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

// 0xe0 (224) bytes
struct _MI_HARDWARE_STATE {
  ULONG NodeMask;           // offset: 0x0 (0)
  ULONG NumaLastRangeIndex; // offset: 0x4 (4)
  UCHAR NumaTableCaptured;  // offset: 0x8 (8)
  UCHAR NodeShift;          // offset: 0x9 (9)
  UCHAR ChannelShift;       // offset: 0xa (10)
  USHORT *NodeGraph;        // offset: 0xc (12)
  struct _MI_SYSTEM_NODE_INFORMATION
      *SystemNodeInformation;                             // offset: 0x10 (16)
  struct _HAL_NODE_RANGE *NumaMemoryRanges;               // offset: 0x14 (20)
  struct _HAL_CHANNEL_MEMORY_RANGES *ChannelMemoryRanges; // offset: 0x18 (24)
  ULONG SecondLevelCacheSize;                             // offset: 0x1c (28)
  ULONG FirstLevelCacheSize;                              // offset: 0x20 (32)
  ULONG PhysicalAddressBits;                              // offset: 0x24 (36)
  ULONG TotalPagesAllowed;                                // offset: 0x28 (40)
  ULONG SecondaryColorMask;                               // offset: 0x2c (44)
  ULONG SecondaryColors;                                  // offset: 0x30 (48)
  ULONG LargePageColors[2];                               // offset: 0x34 (52)
  ULONG FlushTbForAttributeChange;                        // offset: 0x3c (60)
  ULONG FlushCacheForAttributeChange;                     // offset: 0x40 (64)
  ULONG FlushCacheForPageAttributeChange;                 // offset: 0x44 (68)
  ULONG CacheFlushPromoteThreshold;                       // offset: 0x48 (72)
  ULONG FlushTbThreshold;                                 // offset: 0x4c (76)
  enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4]
                                                      [4]; // offset: 0x50 (80)
  UCHAR AttributeChangeRequiresReZero;                     // offset: 0x90 (144)
  struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];           // offset: 0x98 (152)
  ULONG HighestPossiblePhysicalPage;                       // offset: 0xb8 (184)
  struct _RTL_AVL_TREE EnclaveRegions;                     // offset: 0xbc (188)
  VOID *EnclaveMetadataPage;                               // offset: 0xc0 (192)
  struct _RTL_BITMAP *EnclaveMetadataBitMap;               // offset: 0xc4 (196)
  struct _EX_PUSH_LOCK EnclaveMetadataEntryLock;           // offset: 0xc8 (200)
  volatile LONG EnclaveMetadataPageLock;                   // offset: 0xcc (204)
  ULONG VsmKernelPageCount;                                // offset: 0xd0 (208)
  ULONG ColorCount[2];                                     // offset: 0xd4 (212)
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

// 0x68 (104) bytes
struct _MI_PROCESS_STATE {
  VOID *SystemDllBase;                         // offset: 0x0 (0)
  ULONG ColorSeed;                             // offset: 0x4 (4)
  LONG RotatingUniprocessorNumber;             // offset: 0x8 (8)
  union _LARGE_INTEGER CriticalSectionTimeout; // offset: 0x10 (16)
  struct _LIST_ENTRY ProcessList;              // offset: 0x18 (24)
  struct _MMPTE *SharedUserDataPte[2];         // offset: 0x20 (32)
  VOID *HypervisorSharedVa;                    // offset: 0x28 (40)
  ULONG VadSecureCookie;                       // offset: 0x2c (44)
  ULONG PaeGroups;                             // offset: 0x30 (48)
  ULONG FreePaeEntries;                        // offset: 0x34 (52)
  struct _PAE_ENTRY FirstFreePae;              // offset: 0x38 (56)
  volatile LONG AllocatedPaePages;             // offset: 0x58 (88)
  ULONG PaeLock;                               // offset: 0x5c (92)
  union _SLIST_HEADER PaeEntrySList;           // offset: 0x60 (96)
};

// 0xb0 (176) bytes
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
  UCHAR SeSigningLevel;                          // offset: 0x18 (24)
  union _SLIST_HEADER PoolPageHeaders;           // offset: 0x20 (32)
  union _SLIST_HEADER PoolTrackers;              // offset: 0x28 (40)
  volatile ULONG CurrentPagedPoolAllocations;    // offset: 0x30 (48)
  volatile ULONG CurrentNonPagedPoolAllocations; // offset: 0x34 (52)
  ULONG PeakPagedPoolAllocations;                // offset: 0x38 (56)
  ULONG PeakNonPagedPoolAllocations;             // offset: 0x3c (60)
  volatile ULONG PagedBytes;                     // offset: 0x40 (64)
  volatile ULONG NonPagedBytes;                  // offset: 0x44 (68)
  ULONG PeakPagedBytes;                          // offset: 0x48 (72)
  ULONG PeakNonPagedBytes;                       // offset: 0x4c (76)
  ULONG RaiseIrqls;                              // offset: 0x50 (80)
  ULONG AcquireSpinLocks;                        // offset: 0x54 (84)
  ULONG SynchronizeExecutions;                   // offset: 0x58 (88)
  ULONG AllocationsWithNoTag;                    // offset: 0x5c (92)
  ULONG AllocationsFailed;                       // offset: 0x60 (96)
  ULONG AllocationsFailedDeliberately;           // offset: 0x64 (100)
  ULONG LockedBytes;                             // offset: 0x68 (104)
  ULONG PeakLockedBytes;                         // offset: 0x6c (108)
  ULONG MappedLockedBytes;                       // offset: 0x70 (112)
  ULONG PeakMappedLockedBytes;                   // offset: 0x74 (116)
  ULONG MappedIoSpaceBytes;                      // offset: 0x78 (120)
  ULONG PeakMappedIoSpaceBytes;                  // offset: 0x7c (124)
  ULONG PagesForMdlBytes;                        // offset: 0x80 (128)
  ULONG PeakPagesForMdlBytes;                    // offset: 0x84 (132)
  ULONG ContiguousMemoryBytes;                   // offset: 0x88 (136)
  ULONG PeakContiguousMemoryBytes;               // offset: 0x8c (140)
  struct _LIST_ENTRY ContiguousMemoryListHead;   // offset: 0x90 (144)
  volatile ULONG ExecutePoolTypes;               // offset: 0x98 (152)
  volatile ULONG ExecutePageProtections;         // offset: 0x9c (156)
  volatile ULONG ExecutePageMappings;            // offset: 0xa0 (160)
  volatile ULONG ExecuteWriteSections;           // offset: 0xa4 (164)
  volatile ULONG SectionAlignmentFailures;       // offset: 0xa8 (168)
  volatile ULONG IATInExecutableSection;         // offset: 0xac (172)
};

// 0x20 (32) bytes
struct _VF_TARGET_DRIVER {
  struct _VF_AVL_TREE_NODE_EX TreeNode; // offset: 0x0 (0)
  union {
    struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS
        AllSharedExportThunks; // offset: 0xc (12)
    struct {
      ULONG SnapSharedExportsFailed : 1; // offset: 0x0 (0)
      ULONG Spare : 31;                  // offset: 0x0 (0)
    } Flags;                             // offset: 0xc (12)

  } u1;                                                 // offset: 0xc (12)
  struct _VF_TARGET_VERIFIED_DRIVER_DATA *VerifiedData; // offset: 0x1c (28)
};

// 0x880 (2176) bytes
struct _MI_PARTITION_PAGE_LISTS {
  struct _MMPFNLIST *FreePagesByColor[2];                // offset: 0x0 (0)
  struct _MMPFNLIST ZeroedPageListHead;                  // offset: 0x40 (64)
  struct _MMPFNLIST FreePageListHead;                    // offset: 0x80 (128)
  struct _MMPFNLIST StandbyPageListHead;                 // offset: 0xc0 (192)
  struct _MMPFNLIST StandbyPageListByPriority[8];        // offset: 0x100 (256)
  struct _MMPFNLIST ModifiedPageListNoReservation;       // offset: 0x1c0 (448)
  struct _MMPFNLIST ModifiedPageListByReservation[16];   // offset: 0x200 (512)
  struct _MMPFNLIST MappedPageListHead[16];              // offset: 0x340 (832)
  struct _MMPFNLIST BadPageListHead;                     // offset: 0x480 (1152)
  struct _MMPFNLIST EnclavePageListHead;                 // offset: 0x4c0 (1216)
  union _SLIST_HEADER *FreePageSlist[2];                 // offset: 0x4d4 (1236)
  struct _MMPFNLIST *PageLocationList[8];                // offset: 0x4dc (1244)
  volatile ULONG StandbyRepurposedByPriority[8];         // offset: 0x4fc (1276)
  volatile ULONG TransitionSharedPages;                  // offset: 0x540 (1344)
  ULONG TransitionSharedPagesPeak[6];                    // offset: 0x544 (1348)
  struct _KEVENT MappedPageListHeadEvent[16];            // offset: 0x55c (1372)
  struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4]; // offset: 0x65c (1628)
  ULONG DecayHand;                                       // offset: 0x66c (1644)
  UCHAR StandbyListDiscard;                              // offset: 0x670 (1648)
  UCHAR FreeListDiscard;                                 // offset: 0x671 (1649)
  UCHAR LargePfnBitMapsReady;                            // offset: 0x672 (1650)
  ULONGLONG LastDecayHandUpdateTime;                     // offset: 0x678 (1656)
  struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;      // offset: 0x680 (1664)
  ULONG AvailableEventsLock;                             // offset: 0x6c0 (1728)
  struct _MI_AVAILABLE_PAGE_WAIT_STATES
      AvailablePageWaitStates[3];                      // offset: 0x6c4 (1732)
  VOID *MirrorListLocks;                               // offset: 0x700 (1792)
  volatile ULONG TransitionPrivatePages;               // offset: 0x740 (1856)
  struct _RTL_BITMAP LargePfnBitMap[1];                // offset: 0x744 (1860)
  struct _MI_FREE_LARGE_PAGE_LIST *LargePageListHeads; // offset: 0x74c (1868)
  struct _MI_LARGE_PAGE_CANDIDATES
      LargePageCandidates[1];                       // offset: 0x750 (1872)
  struct _WORK_QUEUE_ITEM RebuildLargePageWorkItem; // offset: 0x858 (2136)
  UCHAR RebuildLargePageActive;                     // offset: 0x868 (2152)
  volatile LONG LargePageRebuildLock;               // offset: 0x86c (2156)
  ULONG LowMemoryThreshold;                         // offset: 0x870 (2160)
  ULONG HighMemoryThreshold;                        // offset: 0x874 (2164)
};

// 0x50 (80) bytes
struct _ETW_STACK_TRACE_BLOCK {
  union _LARGE_INTEGER RelatedTimestamp; // offset: 0x0 (0)
  struct _ETHREAD *Thread;               // offset: 0x8 (8)
  struct _KDPC StackWalkDpc;             // offset: 0xc (12)
  union _SLIST_HEADER ApcListHead;       // offset: 0x30 (48)
  struct _ETW_APC_ENTRY *ApcEntry;       // offset: 0x38 (56)
  ULONG ApcEntryCount;                   // offset: 0x3c (60)
  LONG Flags;                            // offset: 0x40 (64)
  LONG ApcCount;                         // offset: 0x44 (68)
  LONG MaxApcCount;                      // offset: 0x48 (72)
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
    VOID(*FreeEx)
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
  struct _NPAGED_LOOKASIDE_LIST MdlTrackerLookaside; // offset: 0x0 (0)
  union _SLIST_HEADER DeadPteTrackerSListHead;       // offset: 0xc0 (192)
  ULONG PteTrackerLock;                              // offset: 0xc8 (200)
  struct _RTL_BITMAP PteTrackingBitmap;              // offset: 0xcc (204)
  struct _MI_CACHED_PTES *CachedPteHeads;            // offset: 0xd4 (212)
  struct _MI_CACHED_PTES *CachedKernelStackPteHeads; // offset: 0xd8 (216)
  struct _MI_SYSTEM_PTE_TYPE SystemViewPteInfo;      // offset: 0xdc (220)
  struct _MI_SYSTEM_PTE_TYPE KernelStackPteInfo;     // offset: 0x110 (272)
  ULONG StackGrowthFailures;                         // offset: 0x144 (324)
  UCHAR KernelStackPages;                            // offset: 0x148 (328)
  UCHAR TrackPtesAborted;                            // offset: 0x149 (329)
  UCHAR AdjustCounter;                               // offset: 0x14a (330)
  volatile LONG ReservedMappingLock;                 // offset: 0x14c (332)
  struct _RTL_AVL_TREE ReservedMappingTree;          // offset: 0x150 (336)
  struct _MMPFN *ReservedMappingPageTablePfns;       // offset: 0x154 (340)
  struct _RTL_AVL_TREE OutswappedKernelStackRoot;    // offset: 0x158 (344)
  volatile LONG OutswappedKernelStackLock;           // offset: 0x15c (348)
};

// 0x7000 (28672) bytes
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
  struct _MM_PAGED_POOL_INFO PagedPoolInfo;      // offset: 0x68 (104)
  struct _GENERAL_LOOKASIDE Lookaside[24];       // offset: 0xc0 (192)
  struct _MMSESSION Session;                     // offset: 0xcc0 (3264)
  struct _MMSUPPORT_FULL Vm;                     // offset: 0xd00 (3328)
  struct _MMWSL_INSTANCE WorkingSetList;         // offset: 0xdc0 (3520)
  VOID *HeapState;                               // offset: 0xdd8 (3544)
  struct _POOL_DESCRIPTOR PagedPool;             // offset: 0xe00 (3584)
  struct _MI_SESSION_DRIVER_UNLOAD DriverUnload; // offset: 0x1f40 (8000)
  ULONG TopLevelPteLockBits[128];                // offset: 0x1f44 (8004)
  struct _MMPTE PageTables[1024];                // offset: 0x2148 (8520)
  ULONG PagedPoolBitBuffer[32];                  // offset: 0x4148 (16712)
  struct _MI_SPECIAL_POOL SpecialPool;           // offset: 0x41c8 (16840)
  struct _EX_PUSH_LOCK SessionPteLock;           // offset: 0x4208 (16904)
  LONG PoolBigEntriesInUse;                      // offset: 0x420c (16908)
  ULONG PagedPoolPdeCount;                       // offset: 0x4210 (16912)
  ULONG SpecialPoolPdeCount;                     // offset: 0x4214 (16916)
  ULONG DynamicSessionPdeCount;                  // offset: 0x4218 (16920)
  struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;      // offset: 0x421c (16924)
  VOID *PoolTrackTableExpansion;                 // offset: 0x4250 (16976)
  ULONG PoolTrackTableExpansionSize;             // offset: 0x4254 (16980)
  VOID *PoolTrackBigPages;                       // offset: 0x4258 (16984)
  ULONG PoolTrackBigPagesSize;                   // offset: 0x425c (16988)
  struct _RTL_AVL_TREE PermittedFaultsTree;      // offset: 0x4260 (16992)
  enum _IO_SESSION_STATE IoState;                // offset: 0x4264 (16996)
  ULONG IoStateSequence;                         // offset: 0x4268 (17000)
  struct _KEVENT IoNotificationEvent;            // offset: 0x426c (17004)
  struct _EJOB *ServerSilo;                      // offset: 0x427c (17020)
  ULONGLONG CreateTime;                          // offset: 0x4280 (17024)
  UCHAR PoolTags[8192];                          // offset: 0x5000 (20480)
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
    VOID(*FreeEx)
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

// 0x280 (640) bytes
struct _CC_PARTITION {
  SHORT NodeTypeCode;                                      // offset: 0x0 (0)
  SHORT NodeByteSize;                                      // offset: 0x2 (2)
  struct _EPARTITION *PartitionObject;                     // offset: 0x4 (4)
  struct _LIST_ENTRY CleanSharedCacheMapList;              // offset: 0x8 (8)
  struct _LIST_ENTRY CleanSharedCacheMapWithLogHandleList; // offset: 0x10 (16)
  struct _SHARED_CACHE_MAP_LIST_CURSOR
      DirtySharedCacheMapList;                             // offset: 0x18 (24)
  struct _SHARED_CACHE_MAP_LIST_CURSOR LazyWriteCursor;    // offset: 0x24 (36)
  struct _LIST_ENTRY DirtySharedCacheMapWithLogHandleList; // offset: 0x30 (48)
  ULONG PrivateLock;                                       // offset: 0x40 (64)
  ULONG ConsecutiveWorklessLazyScanCount;                  // offset: 0x44 (68)
  UCHAR ForcedDisableLazywriteScan;                        // offset: 0x48 (72)
  ULONG WorkQueueLock;                                     // offset: 0x80 (128)
  ULONG NumberWorkerThreads;                               // offset: 0x84 (132)
  ULONG NumberActiveWorkerThreads;                         // offset: 0x88 (136)
  struct _LIST_ENTRY IdleWorkerThreadList;                 // offset: 0x8c (140)
  struct _LIST_ENTRY FastTeardownWorkQueue;                // offset: 0x94 (148)
  struct _LIST_ENTRY ExpressWorkQueue;                     // offset: 0x9c (156)
  struct _LIST_ENTRY RegularWorkQueue;                     // offset: 0xa4 (164)
  struct _LIST_ENTRY PostTickWorkQueue;                    // offset: 0xac (172)
  struct _LIST_ENTRY IdleExtraWriteBehindThreadList;       // offset: 0xb4 (180)
  ULONG ActiveExtraWriteBehindThreads;                     // offset: 0xbc (188)
  ULONG MaxExtraWriteBehindThreads;                        // offset: 0xc0 (192)
  UCHAR QueueThrottle;                                     // offset: 0xc4 (196)
  ULONG PostTickWorkItemCount;                             // offset: 0xc8 (200)
  ULONG ThreadsActiveBeforeThrottle;                       // offset: 0xcc (204)
  ULONG ExtraWBThreadsActiveBeforeThrottle;                // offset: 0xd0 (208)
  ULONG ExecutingWriteBehindWorkItems;                     // offset: 0xd4 (212)
  ULONG ExecutingHighPriorityWorkItem;                     // offset: 0xd8 (216)
  struct _KEVENT LowMemoryEvent;                           // offset: 0xdc (220)
  struct _KEVENT PowerEvent;                               // offset: 0xec (236)
  struct _KEVENT PeriodicEvent;                            // offset: 0xfc (252)
  struct _KEVENT WaitingForTeardownEvent;              // offset: 0x10c (268)
  struct _KEVENT CoalescingFlushEvent;                 // offset: 0x11c (284)
  ULONG PagesYetToWrite;                               // offset: 0x12c (300)
  struct _LAZY_WRITER LazyWriter;                      // offset: 0x130 (304)
  struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;   // offset: 0x180 (384)
  struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds;   // offset: 0x190 (400)
  struct _WRITE_BEHIND_THROUGHPUT *ThroughputStats;    // offset: 0x1b8 (440)
  LONG ThroughputTrend;                                // offset: 0x1bc (444)
  ULONGLONG AverageAvailablePages;                     // offset: 0x1c0 (448)
  ULONGLONG AverageDirtyPages;                         // offset: 0x1c8 (456)
  ULONGLONG PagesSkippedDueToHotSpot;                  // offset: 0x1d0 (464)
  union _LARGE_INTEGER PrevRegularQueueItemRunTime;    // offset: 0x1d8 (472)
  union _LARGE_INTEGER PrevExtraWBThreadCheckTime;     // offset: 0x1e0 (480)
  UCHAR AddExtraWriteBehindThreads;                    // offset: 0x1e8 (488)
  UCHAR RemoveExtraThreadPending;                      // offset: 0x1e9 (489)
  struct _LIST_ENTRY DeferredWrites;                   // offset: 0x1ec (492)
  ULONG DeferredWriteSpinLock;                         // offset: 0x200 (512)
  struct _LIST_ENTRY *IdleAsyncReadWorkerThreadList;   // offset: 0x204 (516)
  ULONG *NumberActiveAsyncReadWorkerThreads;           // offset: 0x208 (520)
  ULONG *NumberActiveCompleteAsyncReadWorkItems;       // offset: 0x20c (524)
  struct _LIST_ENTRY *AsyncReadWorkQueue;              // offset: 0x210 (528)
  struct _LIST_ENTRY *AsyncReadCompletionWorkQueue;    // offset: 0x214 (532)
  struct _KEVENT *NewAsyncReadRequestEvent;            // offset: 0x218 (536)
  struct _ASYNC_READ_THREAD_STATS *ReaderThreadsStats; // offset: 0x21c (540)
  struct _EX_PUSH_LOCK AsyncReadWorkQueueLock;         // offset: 0x220 (544)
  struct _LIST_ENTRY VacbFreeHighPriorityList;         // offset: 0x224 (548)
  ULONG NumberOfFreeHighPriorityVacbs;                 // offset: 0x22c (556)
  struct _ETHREAD *LowPriWorkerThread;                 // offset: 0x230 (560)
  struct _SHARED_CACHE_MAP *LowPriSharedCacheMap;      // offset: 0x234 (564)
  LONG LowPriOldCpuPriority;                           // offset: 0x238 (568)
  enum _IO_PRIORITY_HINT LowPriOldIoPriority;          // offset: 0x23c (572)
  struct _EX_PUSH_LOCK LowPriorityWorkerThreadLock;    // offset: 0x240 (576)
  ULONG MaxNumberOfWriteBehindThreads;                 // offset: 0x244 (580)
  UCHAR CoalescingState;                               // offset: 0x248 (584)
  UCHAR ActivePartition;                               // offset: 0x249 (585)
  UCHAR RundownPhase;                                  // offset: 0x24a (586)
  LONG RefCount;                                       // offset: 0x24c (588)
  struct _KEVENT ExitEvent;                            // offset: 0x250 (592)
  struct _KEVENT FinalDereferenceEvent;                // offset: 0x260 (608)
  VOID *LazyWriteScanThreadHandle;                     // offset: 0x270 (624)
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
  struct _CC_PARTITION *Partition;             // offset: 0x24 (36)
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
  struct _CC_PARTITION *Partition;                     // offset: 0x174 (372)
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

// 0x200 (512) bytes
struct _MI_PARTITION_SEGMENTS {
  volatile LONG SegmentListLock;                      // offset: 0x0 (0)
  ULONG DeleteOnCloseCount;                           // offset: 0x4 (4)
  volatile LONGLONG FsControlAreaCount;               // offset: 0x8 (8)
  volatile LONGLONG PfControlAreaCount;               // offset: 0x10 (16)
  volatile LONGLONG CloneHeaderCount;                 // offset: 0x18 (24)
  struct _KEVENT DeleteSubsectionCleanup;             // offset: 0x20 (32)
  struct _KEVENT UnusedSegmentCleanup;                // offset: 0x30 (48)
  ULONG SubsectionDeletePtes;                         // offset: 0x40 (64)
  struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend; // offset: 0x44 (68)
  struct _MMDEREFERENCE_SEGMENT_HEADER
      DereferenceSegmentHeader;                        // offset: 0x78 (120)
  struct _LIST_ENTRY DeleteOnCloseList;                // offset: 0xa4 (164)
  struct _KTIMER DeleteOnCloseTimer;                   // offset: 0xb0 (176)
  UCHAR DeleteOnCloseTimerActive;                      // offset: 0xd8 (216)
  UCHAR SegmentDereferenceThreadExists;                // offset: 0xd9 (217)
  ULONG UnusedSegmentPagedPool;                        // offset: 0xdc (220)
  struct _LIST_ENTRY UnusedSegmentList;                // offset: 0xe0 (224)
  struct _LIST_ENTRY UnusedSubsectionList;             // offset: 0xe8 (232)
  struct _LIST_ENTRY DeleteSubsectionList;             // offset: 0xf0 (240)
  struct _KEVENT ControlAreaDeleteEvent;               // offset: 0xf8 (248)
  struct _SINGLE_LIST_ENTRY ControlAreaDeleteList;     // offset: 0x108 (264)
  struct _MI_PTE_CHAIN_HEAD FreeSystemCache;           // offset: 0x110 (272)
  struct _KEVENT CloneDereferenceEvent;                // offset: 0x128 (296)
  union _SLIST_HEADER CloneProtosSListHead;            // offset: 0x138 (312)
  struct _EX_PUSH_LOCK SystemCacheInitLock;            // offset: 0x140 (320)
  ULONG PagefileExtensionWaiters;                      // offset: 0x144 (324)
  ULONG PagefileExtensionRequests;                     // offset: 0x148 (328)
  struct _KEVENT PagefileExtensionWaitEvent;           // offset: 0x14c (332)
  struct _MI_CROSS_PARTITION_CHARGES SharedCharges[7]; // offset: 0x15c (348)
  struct _KEVENT *SharedChargesDrainEvent;             // offset: 0x1cc (460)
  struct _KEVENT *ControlAreasDrainEvent;              // offset: 0x1d0 (464)
  struct _KEVENT *CloneHeaderDrainEvent;               // offset: 0x1d4 (468)
  struct _EX_RUNDOWN_REF_CACHE_AWARE
      *ProbeRundownReference; // offset: 0x1d8 (472)
};

// 0x80 (128) bytes
struct _PNP_WATCHDOG {
  ULONGLONG WatchdogStart;                     // offset: 0x0 (0)
  struct _KTIMER WatchdogTimer;                // offset: 0x8 (8)
  struct _KDPC WatchdogDpc;                    // offset: 0x30 (48)
  UCHAR WatchdogEnabled;                       // offset: 0x50 (80)
  UCHAR WatchdogSecondChance;                  // offset: 0x51 (81)
  struct _KEVENT WatchdogComplete;             // offset: 0x54 (84)
  struct _WORK_QUEUE_ITEM WatchdogWorkItem;    // offset: 0x64 (100)
  enum _PNP_WATCHDOG_TYPE WatchdogContextType; // offset: 0x74 (116)
  VOID *WatchdogContext;                       // offset: 0x78 (120)
};

// 0x48 (72) bytes
struct _PNP_DEVICE_COMPLETION_REQUEST {
  struct _LIST_ENTRY ListEntry;                            // offset: 0x0 (0)
  struct _DEVICE_NODE *DeviceNode;                         // offset: 0x8 (8)
  VOID *Context;                                           // offset: 0xc (12)
  enum _PNP_DEVNODE_STATE CompletionState;                 // offset: 0x10 (16)
  ULONG IrpPended;                                         // offset: 0x14 (20)
  LONG Status;                                             // offset: 0x18 (24)
  VOID *Information;                                       // offset: 0x1c (28)
  LONG ReferenceCount;                                     // offset: 0x20 (32)
  struct _FAST_MUTEX PnpDeviceCompletionQueueWatchdogLock; // offset: 0x24 (36)
  struct _PNP_WATCHDOG *Watchdog;                          // offset: 0x44 (68)
};

// 0x8c (140) bytes
struct _PNP_DEVICE_EVENT_ENTRY {
  struct _LIST_ENTRY ListEntry;           // offset: 0x0 (0)
  ULONG Argument;                         // offset: 0x8 (8)
  LONG ArgumentStatus;                    // offset: 0xc (12)
  struct _KEVENT *CallerEvent;            // offset: 0x10 (16)
  VOID (*Callback)(VOID *arg1);           // offset: 0x14 (20)
  VOID *Context;                          // offset: 0x18 (24)
  enum _PNP_VETO_TYPE *VetoType;          // offset: 0x1c (28)
  struct _UNICODE_STRING *VetoName;       // offset: 0x20 (32)
  ULONG RefCount;                         // offset: 0x24 (36)
  ULONG Lock;                             // offset: 0x28 (40)
  UCHAR Cancel;                           // offset: 0x2c (44)
  struct _PNP_DEVICE_EVENT_ENTRY *Parent; // offset: 0x30 (48)
  struct _GUID ActivityId;                // offset: 0x34 (52)
  struct _PNP_WATCHDOG *Watchdog;         // offset: 0x44 (68)
  struct _PLUGPLAY_EVENT_BLOCK Data;      // offset: 0x48 (72)
};

// 0x68 (104) bytes
struct _POP_FX_WORK_ORDER_WATCHDOG_INFO {
  struct _LIST_ENTRY Link;                       // offset: 0x0 (0)
  struct _KTIMER Timer;                          // offset: 0x8 (8)
  struct _KDPC Dpc;                              // offset: 0x30 (48)
  struct _POP_FX_WORK_ORDER *WorkOrder;          // offset: 0x50 (80)
  struct _PEP_WORK_INFORMATION *CurrentWorkInfo; // offset: 0x54 (84)
  ULONGLONG WatchdogStart;                       // offset: 0x58 (88)
  struct _KTHREAD *WorkerThread;                 // offset: 0x60 (96)
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
  UCHAR(*AcceptDeviceNotification)
  (ULONG arg1, VOID *arg2); // offset: 0x40 (64)
  UCHAR(*AcceptProcessorNotification)
  (struct PEPHANDLE__ *arg1, ULONG arg2, VOID *arg3);      // offset: 0x44 (68)
  UCHAR (*AcceptAcpiNotification)(ULONG arg1, VOID *arg2); // offset: 0x48 (72)
  ULONG WorkOrderCount;                                    // offset: 0x4c (76)
  struct _POP_FX_WORK_ORDER WorkOrders[1];                 // offset: 0x50 (80)
};

// 0x1840 (6208) bytes
struct _KTIMER_TABLE {
  struct _KTIMER *TimerExpiry[16];              // offset: 0x0 (0)
  struct _KTIMER_TABLE_ENTRY TimerEntries[256]; // offset: 0x40 (64)
};

// 0x470 (1136) bytes
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
      UCHAR IsLongPathAwareProcess : 1;       // offset: 0x3 (3)
    };
  };
  VOID *Mutant;                                           // offset: 0x4 (4)
  VOID *ImageBaseAddress;                                 // offset: 0x8 (8)
  struct _PEB_LDR_DATA *Ldr;                              // offset: 0xc (12)
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // offset: 0x10 (16)
  VOID *SubSystemData;                                    // offset: 0x14 (20)
  VOID *ProcessHeap;                                      // offset: 0x18 (24)
  struct _RTL_CRITICAL_SECTION *FastPebLock;              // offset: 0x1c (28)
  union _SLIST_HEADER *volatile AtlThunkSListPtr;         // offset: 0x20 (32)
  VOID *IFEOKey;                                          // offset: 0x24 (36)
  union {
    ULONG CrossProcessFlags; // offset: 0x28 (40)
    struct {
      ULONG ProcessInJob : 1;               // offset: 0x28 (40)
      ULONG ProcessInitializing : 1;        // offset: 0x28 (40)
      ULONG ProcessUsingVEH : 1;            // offset: 0x28 (40)
      ULONG ProcessUsingVCH : 1;            // offset: 0x28 (40)
      ULONG ProcessUsingFTH : 1;            // offset: 0x28 (40)
      ULONG ProcessPreviouslyThrottled : 1; // offset: 0x28 (40)
      ULONG ProcessCurrentlyThrottled : 1;  // offset: 0x28 (40)
      ULONG ReservedBits0 : 25;             // offset: 0x28 (40)
    };
  };
  union {
    VOID *KernelCallbackTable; // offset: 0x2c (44)
    VOID *UserSharedInfoPtr;   // offset: 0x2c (44)
  };
  ULONG SystemReserved;                                   // offset: 0x30 (48)
  union _SLIST_HEADER *volatile AtlThunkSListPtr32;       // offset: 0x34 (52)
  VOID *ApiSetMap;                                        // offset: 0x38 (56)
  ULONG TlsExpansionCounter;                              // offset: 0x3c (60)
  VOID *TlsBitmap;                                        // offset: 0x40 (64)
  ULONG TlsBitmapBits[2];                                 // offset: 0x44 (68)
  VOID *ReadOnlySharedMemoryBase;                         // offset: 0x4c (76)
  VOID *SharedData;                                       // offset: 0x50 (80)
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
  ULONGLONG CsrServerReadOnlySharedMemoryBase;  // offset: 0x248 (584)
  ULONG TppWorkerpListLock;                     // offset: 0x250 (592)
  struct _LIST_ENTRY TppWorkerpList;            // offset: 0x254 (596)
  VOID *WaitOnAddressHashTable[128];            // offset: 0x25c (604)
  VOID *TelemetryCoverageHeader;                // offset: 0x45c (1116)
  ULONG CloudFileFlags;                         // offset: 0x460 (1120)
  ULONG CloudFileDiagFlags;                     // offset: 0x464 (1124)
  CHAR PlaceholderCompatibilityMode;            // offset: 0x468 (1128)
  CHAR PlaceholderCompatibilityModeReserved[7]; // offset: 0x469 (1129)
};

// 0x400 (1024) bytes
struct _EPROCESS {
  struct _KPROCESS Pcb;                  // offset: 0x0 (0)
  struct _EX_PUSH_LOCK ProcessLock;      // offset: 0xb0 (176)
  VOID *UniqueProcessId;                 // offset: 0xb4 (180)
  struct _LIST_ENTRY ActiveProcessLinks; // offset: 0xb8 (184)
  struct _EX_RUNDOWN_REF RundownProtect; // offset: 0xc0 (192)
  VOID *VdmObjects;                      // offset: 0xc4 (196)
  union {
    ULONG Flags2; // offset: 0xc8 (200)
    struct {
      ULONG JobNotReallyActive : 1;              // offset: 0xc8 (200)
      ULONG AccountingFolded : 1;                // offset: 0xc8 (200)
      ULONG NewProcessReported : 1;              // offset: 0xc8 (200)
      ULONG ExitProcessReported : 1;             // offset: 0xc8 (200)
      ULONG ReportCommitChanges : 1;             // offset: 0xc8 (200)
      ULONG LastReportMemory : 1;                // offset: 0xc8 (200)
      ULONG ForceWakeCharge : 1;                 // offset: 0xc8 (200)
      ULONG CrossSessionCreate : 1;              // offset: 0xc8 (200)
      ULONG NeedsHandleRundown : 1;              // offset: 0xc8 (200)
      ULONG RefTraceEnabled : 1;                 // offset: 0xc8 (200)
      ULONG PicoCreated : 1;                     // offset: 0xc8 (200)
      ULONG EmptyJobEvaluated : 1;               // offset: 0xc8 (200)
      ULONG DefaultPagePriority : 3;             // offset: 0xc8 (200)
      ULONG PrimaryTokenFrozen : 1;              // offset: 0xc8 (200)
      ULONG ProcessVerifierTarget : 1;           // offset: 0xc8 (200)
      ULONG RestrictSetThreadContext : 1;        // offset: 0xc8 (200)
      ULONG AffinityPermanent : 1;               // offset: 0xc8 (200)
      ULONG AffinityUpdateEnable : 1;            // offset: 0xc8 (200)
      ULONG PropagateNode : 1;                   // offset: 0xc8 (200)
      ULONG ExplicitAffinity : 1;                // offset: 0xc8 (200)
      ULONG ProcessExecutionState : 2;           // offset: 0xc8 (200)
      ULONG EnableReadVmLogging : 1;             // offset: 0xc8 (200)
      ULONG EnableWriteVmLogging : 1;            // offset: 0xc8 (200)
      ULONG FatalAccessTerminationRequested : 1; // offset: 0xc8 (200)
      ULONG DisableSystemAllowedCpuSet : 1;      // offset: 0xc8 (200)
      ULONG ProcessStateChangeRequest : 2;       // offset: 0xc8 (200)
      ULONG ProcessStateChangeInProgress : 1;    // offset: 0xc8 (200)
      ULONG InPrivate : 1;                       // offset: 0xc8 (200)
    };
  };
  union {
    ULONG Flags; // offset: 0xcc (204)
    struct {
      ULONG CreateReported : 1;               // offset: 0xcc (204)
      ULONG NoDebugInherit : 1;               // offset: 0xcc (204)
      ULONG ProcessExiting : 1;               // offset: 0xcc (204)
      ULONG ProcessDelete : 1;                // offset: 0xcc (204)
      ULONG ManageExecutableMemoryWrites : 1; // offset: 0xcc (204)
      ULONG VmDeleted : 1;                    // offset: 0xcc (204)
      ULONG OutswapEnabled : 1;               // offset: 0xcc (204)
      ULONG Outswapped : 1;                   // offset: 0xcc (204)
      ULONG FailFastOnCommitFail : 1;         // offset: 0xcc (204)
      ULONG Wow64VaSpace4Gb : 1;              // offset: 0xcc (204)
      ULONG AddressSpaceInitialized : 2;      // offset: 0xcc (204)
      ULONG SetTimerResolution : 1;           // offset: 0xcc (204)
      ULONG BreakOnTermination : 1;           // offset: 0xcc (204)
      ULONG DeprioritizeViews : 1;            // offset: 0xcc (204)
      ULONG WriteWatch : 1;                   // offset: 0xcc (204)
      ULONG ProcessInSession : 1;             // offset: 0xcc (204)
      ULONG OverrideAddressSpace : 1;         // offset: 0xcc (204)
      ULONG HasAddressSpace : 1;              // offset: 0xcc (204)
      ULONG LaunchPrefetched : 1;             // offset: 0xcc (204)
      ULONG Background : 1;                   // offset: 0xcc (204)
      ULONG VmTopDown : 1;                    // offset: 0xcc (204)
      ULONG ImageNotifyDone : 1;              // offset: 0xcc (204)
      ULONG PdeUpdateNeeded : 1;              // offset: 0xcc (204)
      ULONG VdmAllowed : 1;                   // offset: 0xcc (204)
      ULONG ProcessRundown : 1;               // offset: 0xcc (204)
      ULONG ProcessInserted : 1;              // offset: 0xcc (204)
      ULONG DefaultIoPriority : 3;            // offset: 0xcc (204)
      ULONG ProcessSelfDelete : 1;            // offset: 0xcc (204)
      ULONG SetTimerResolutionLink : 1;       // offset: 0xcc (204)
    };
  };
  union _LARGE_INTEGER CreateTime;        // offset: 0xd0 (208)
  ULONG ProcessQuotaUsage[2];             // offset: 0xd8 (216)
  ULONG ProcessQuotaPeak[2];              // offset: 0xe0 (224)
  ULONG PeakVirtualSize;                  // offset: 0xe8 (232)
  ULONG VirtualSize;                      // offset: 0xec (236)
  struct _LIST_ENTRY SessionProcessLinks; // offset: 0xf0 (240)
  union {
    VOID *ExceptionPortData;      // offset: 0xf8 (248)
    ULONG ExceptionPortValue;     // offset: 0xf8 (248)
    ULONG ExceptionPortState : 3; // offset: 0xf8 (248)
  };
  struct _EX_FAST_REF Token;                    // offset: 0xfc (252)
  ULONG MmReserved;                             // offset: 0x100 (256)
  struct _EX_PUSH_LOCK AddressCreationLock;     // offset: 0x104 (260)
  struct _EX_PUSH_LOCK PageTableCommitmentLock; // offset: 0x108 (264)
  struct _ETHREAD *RotateInProgress;            // offset: 0x10c (268)
  struct _ETHREAD *ForkInProgress;              // offset: 0x110 (272)
  struct _EJOB *volatile CommitChargeJob;       // offset: 0x114 (276)
  struct _RTL_AVL_TREE CloneRoot;               // offset: 0x118 (280)
  volatile ULONG NumberOfPrivatePages;          // offset: 0x11c (284)
  volatile ULONG NumberOfLockedPages;           // offset: 0x120 (288)
  VOID *Win32Process;                           // offset: 0x124 (292)
  struct _EJOB *volatile Job;                   // offset: 0x128 (296)
  VOID *SectionObject;                          // offset: 0x12c (300)
  VOID *SectionBaseAddress;                     // offset: 0x130 (304)
  ULONG Cookie;                                 // offset: 0x134 (308)
  struct _PAGEFAULT_HISTORY *WorkingSetWatch;   // offset: 0x138 (312)
  VOID *Win32WindowStation;                     // offset: 0x13c (316)
  VOID *InheritedFromUniqueProcessId;           // offset: 0x140 (320)
  VOID *LdtInformation;                         // offset: 0x144 (324)
  volatile ULONG OwnerProcessId;                // offset: 0x148 (328)
  struct _PEB *Peb;                             // offset: 0x14c (332)
  struct _MM_SESSION_SPACE *Session;            // offset: 0x150 (336)
  VOID *AweInfo;                                // offset: 0x154 (340)
  struct _EPROCESS_QUOTA_BLOCK *QuotaBlock;     // offset: 0x158 (344)
  struct _HANDLE_TABLE *ObjectTable;            // offset: 0x15c (348)
  VOID *DebugPort;                              // offset: 0x160 (352)
  VOID *PaeTop;                                 // offset: 0x164 (356)
  VOID *DeviceMap;                              // offset: 0x168 (360)
  VOID *EtwDataSource;                          // offset: 0x16c (364)
  ULONGLONG PageDirectoryPte;                   // offset: 0x170 (368)
  struct _FILE_OBJECT *ImageFilePointer;        // offset: 0x178 (376)
  UCHAR ImageFileName[15];                      // offset: 0x17c (380)
  UCHAR PriorityClass;                          // offset: 0x18b (395)
  VOID *SecurityPort;                           // offset: 0x18c (396)
  struct _SE_AUDIT_PROCESS_CREATION_INFO
      SeAuditProcessCreationInfo;           // offset: 0x190 (400)
  struct _LIST_ENTRY JobLinks;              // offset: 0x194 (404)
  VOID *HighestUserAddress;                 // offset: 0x19c (412)
  struct _LIST_ENTRY ThreadListHead;        // offset: 0x1a0 (416)
  volatile ULONG ActiveThreads;             // offset: 0x1a8 (424)
  ULONG ImagePathHash;                      // offset: 0x1ac (428)
  ULONG DefaultHardErrorProcessing;         // offset: 0x1b0 (432)
  LONG LastThreadExitStatus;                // offset: 0x1b4 (436)
  struct _EX_FAST_REF PrefetchTrace;        // offset: 0x1b8 (440)
  VOID *LockedPagesList;                    // offset: 0x1bc (444)
  union _LARGE_INTEGER ReadOperationCount;  // offset: 0x1c0 (448)
  union _LARGE_INTEGER WriteOperationCount; // offset: 0x1c8 (456)
  union _LARGE_INTEGER OtherOperationCount; // offset: 0x1d0 (464)
  union _LARGE_INTEGER ReadTransferCount;   // offset: 0x1d8 (472)
  union _LARGE_INTEGER WriteTransferCount;  // offset: 0x1e0 (480)
  union _LARGE_INTEGER OtherTransferCount;  // offset: 0x1e8 (488)
  ULONG CommitChargeLimit;                  // offset: 0x1f0 (496)
  volatile ULONG CommitCharge;              // offset: 0x1f4 (500)
  volatile ULONG CommitChargePeak;          // offset: 0x1f8 (504)
  struct _MMSUPPORT_FULL Vm;                // offset: 0x1fc (508)
  struct _LIST_ENTRY MmProcessLinks;        // offset: 0x28c (652)
  ULONG ModifiedPageCount;                  // offset: 0x294 (660)
  LONG ExitStatus;                          // offset: 0x298 (664)
  struct _RTL_AVL_TREE VadRoot;             // offset: 0x29c (668)
  VOID *VadHint;                            // offset: 0x2a0 (672)
  ULONG VadCount;                           // offset: 0x2a4 (676)
  volatile ULONG VadPhysicalPages;          // offset: 0x2a8 (680)
  ULONG VadPhysicalPagesLimit;              // offset: 0x2ac (684)
  struct _ALPC_PROCESS_CONTEXT AlpcContext; // offset: 0x2b0 (688)
  struct _LIST_ENTRY TimerResolutionLink;   // offset: 0x2c0 (704)
  struct _PO_DIAG_STACK_RECORD
      *TimerResolutionStackRecord;     // offset: 0x2c8 (712)
  ULONG RequestedTimerResolution;      // offset: 0x2cc (716)
  ULONG SmallestTimerResolution;       // offset: 0x2d0 (720)
  union _LARGE_INTEGER ExitTime;       // offset: 0x2d8 (728)
  ULONG ActiveThreadsHighWatermark;    // offset: 0x2e0 (736)
  ULONG LargePrivateVadCount;          // offset: 0x2e4 (740)
  struct _EX_PUSH_LOCK ThreadListLock; // offset: 0x2e8 (744)
  VOID *WnfContext;                    // offset: 0x2ec (748)
  struct _EJOB *ServerSilo;            // offset: 0x2f0 (752)
  UCHAR SignatureLevel;                // offset: 0x2f4 (756)
  UCHAR SectionSignatureLevel;         // offset: 0x2f5 (757)
  struct _PS_PROTECTION Protection;    // offset: 0x2f6 (758)
  UCHAR HangCount : 4;                 // offset: 0x2f7 (759)
  UCHAR GhostCount : 4;                // offset: 0x2f7 (759)
  union {
    ULONG Flags3; // offset: 0x2f8 (760)
    struct {
      ULONG Minimal : 1;                // offset: 0x2f8 (760)
      ULONG ReplacingPageRoot : 1;      // offset: 0x2f8 (760)
      ULONG Crashed : 1;                // offset: 0x2f8 (760)
      ULONG JobVadsAreTracked : 1;      // offset: 0x2f8 (760)
      ULONG VadTrackingDisabled : 1;    // offset: 0x2f8 (760)
      ULONG AuxiliaryProcess : 1;       // offset: 0x2f8 (760)
      ULONG SubsystemProcess : 1;       // offset: 0x2f8 (760)
      ULONG IndirectCpuSets : 1;        // offset: 0x2f8 (760)
      ULONG RelinquishedCommit : 1;     // offset: 0x2f8 (760)
      ULONG HighGraphicsPriority : 1;   // offset: 0x2f8 (760)
      ULONG CommitFailLogged : 1;       // offset: 0x2f8 (760)
      ULONG ReserveFailLogged : 1;      // offset: 0x2f8 (760)
      ULONG SystemProcess : 1;          // offset: 0x2f8 (760)
      ULONG HideImageBaseAddresses : 1; // offset: 0x2f8 (760)
      ULONG AddressPolicyFrozen : 1;    // offset: 0x2f8 (760)
      ULONG ProcessFirstResume : 1;     // offset: 0x2f8 (760)
      ULONG ForegroundExternal : 1;     // offset: 0x2f8 (760)
      ULONG ForegroundSystem : 1;       // offset: 0x2f8 (760)
      ULONG HighMemoryPriority : 1;     // offset: 0x2f8 (760)
    };
  };
  LONG DeviceAsid;                                  // offset: 0x2fc (764)
  VOID *SvmData;                                    // offset: 0x300 (768)
  struct _EX_PUSH_LOCK SvmProcessLock;              // offset: 0x304 (772)
  ULONG SvmLock;                                    // offset: 0x308 (776)
  struct _LIST_ENTRY SvmProcessDeviceListHead;      // offset: 0x30c (780)
  ULONGLONG LastFreezeInterruptTime;                // offset: 0x318 (792)
  struct _PROCESS_DISK_COUNTERS *DiskCounters;      // offset: 0x320 (800)
  VOID *PicoContext;                                // offset: 0x324 (804)
  ULONG HighPriorityFaultsAllowed;                  // offset: 0x328 (808)
  VOID *InstrumentationCallback;                    // offset: 0x32c (812)
  struct _PO_PROCESS_ENERGY_CONTEXT *EnergyContext; // offset: 0x330 (816)
  VOID *VmContext;                                  // offset: 0x334 (820)
  ULONGLONG SequenceNumber;                         // offset: 0x338 (824)
  ULONGLONG CreateInterruptTime;                    // offset: 0x340 (832)
  ULONGLONG CreateUnbiasedInterruptTime;            // offset: 0x348 (840)
  ULONGLONG TotalUnbiasedFrozenTime;                // offset: 0x350 (848)
  ULONGLONG LastAppStateUpdateTime;                 // offset: 0x358 (856)
  ULONGLONG LastAppStateUptime : 61;                // offset: 0x360 (864)
  ULONGLONG LastAppState : 3;                       // offset: 0x360 (864)
  volatile ULONG SharedCommitCharge;                // offset: 0x368 (872)
  struct _EX_PUSH_LOCK SharedCommitLock;            // offset: 0x36c (876)
  struct _LIST_ENTRY SharedCommitLinks;             // offset: 0x370 (880)
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
  VOID *DiskIoAttribution; // offset: 0x380 (896)
  VOID *DxgProcess;        // offset: 0x384 (900)
  ULONG Win32KFilterSet;   // offset: 0x388 (904)
  union _PS_INTERLOCKED_TIMER_DELAY_VALUES volatile ProcessTimerDelay; // offset:
                                                                       // 0x390
                                                                       // (912)
  volatile ULONG KTimerSets;               // offset: 0x398 (920)
  volatile ULONG KTimer2Sets;              // offset: 0x39c (924)
  volatile ULONG ThreadTimerSets;          // offset: 0x3a0 (928)
  ULONG VirtualTimerListLock;              // offset: 0x3a4 (932)
  struct _LIST_ENTRY VirtualTimerListHead; // offset: 0x3a8 (936)
  union {
    struct _WNF_STATE_NAME WakeChannel;           // offset: 0x3b0 (944)
    struct _PS_PROCESS_WAKE_INFORMATION WakeInfo; // offset: 0x3b0 (944)
  };
  union {
    ULONG MitigationFlags; // offset: 0x3e0 (992)
    struct {
      ULONG ControlFlowGuardEnabled : 1;                  // offset: 0x0 (0)
      ULONG ControlFlowGuardExportSuppressionEnabled : 1; // offset: 0x0 (0)
      ULONG ControlFlowGuardStrict : 1;                   // offset: 0x0 (0)
      ULONG DisallowStrippedImages : 1;                   // offset: 0x0 (0)
      ULONG ForceRelocateImages : 1;                      // offset: 0x0 (0)
      ULONG HighEntropyASLREnabled : 1;                   // offset: 0x0 (0)
      ULONG StackRandomizationDisabled : 1;               // offset: 0x0 (0)
      ULONG ExtensionPointDisable : 1;                    // offset: 0x0 (0)
      ULONG DisableDynamicCode : 1;                       // offset: 0x0 (0)
      ULONG DisableDynamicCodeAllowOptOut : 1;            // offset: 0x0 (0)
      ULONG DisableDynamicCodeAllowRemoteDowngrade : 1;   // offset: 0x0 (0)
      ULONG AuditDisableDynamicCode : 1;                  // offset: 0x0 (0)
      ULONG DisallowWin32kSystemCalls : 1;                // offset: 0x0 (0)
      ULONG AuditDisallowWin32kSystemCalls : 1;           // offset: 0x0 (0)
      ULONG EnableFilteredWin32kAPIs : 1;                 // offset: 0x0 (0)
      ULONG AuditFilteredWin32kAPIs : 1;                  // offset: 0x0 (0)
      ULONG DisableNonSystemFonts : 1;                    // offset: 0x0 (0)
      ULONG AuditNonSystemFontLoading : 1;                // offset: 0x0 (0)
      ULONG PreferSystem32Images : 1;                     // offset: 0x0 (0)
      ULONG ProhibitRemoteImageMap : 1;                   // offset: 0x0 (0)
      ULONG AuditProhibitRemoteImageMap : 1;              // offset: 0x0 (0)
      ULONG ProhibitLowILImageMap : 1;                    // offset: 0x0 (0)
      ULONG AuditProhibitLowILImageMap : 1;               // offset: 0x0 (0)
      ULONG SignatureMitigationOptIn : 1;                 // offset: 0x0 (0)
      ULONG AuditBlockNonMicrosoftBinaries : 1;           // offset: 0x0 (0)
      ULONG AuditBlockNonMicrosoftBinariesAllowStore : 1; // offset: 0x0 (0)
      ULONG LoaderIntegrityContinuityEnabled : 1;         // offset: 0x0 (0)
      ULONG AuditLoaderIntegrityContinuity : 1;           // offset: 0x0 (0)
      ULONG EnableModuleTamperingProtection : 1;          // offset: 0x0 (0)
      ULONG EnableModuleTamperingProtectionNoInherit : 1; // offset: 0x0 (0)
      ULONG Reserved : 1;                                 // offset: 0x0 (0)
    } MitigationFlagsValues;                              // offset: 0x3e0 (992)
  };
  union {
    ULONG MitigationFlags2; // offset: 0x3e4 (996)
    struct {
      ULONG EnableExportAddressFilter : 1;     // offset: 0x0 (0)
      ULONG AuditExportAddressFilter : 1;      // offset: 0x0 (0)
      ULONG EnableExportAddressFilterPlus : 1; // offset: 0x0 (0)
      ULONG AuditExportAddressFilterPlus : 1;  // offset: 0x0 (0)
      ULONG EnableRopStackPivot : 1;           // offset: 0x0 (0)
      ULONG AuditRopStackPivot : 1;            // offset: 0x0 (0)
      ULONG EnableRopCallerCheck : 1;          // offset: 0x0 (0)
      ULONG AuditRopCallerCheck : 1;           // offset: 0x0 (0)
      ULONG EnableRopSimExec : 1;              // offset: 0x0 (0)
      ULONG AuditRopSimExec : 1;               // offset: 0x0 (0)
      ULONG EnableImportAddressFilter : 1;     // offset: 0x0 (0)
      ULONG AuditImportAddressFilter : 1;      // offset: 0x0 (0)
    } MitigationFlags2Values;                  // offset: 0x3e4 (996)
  };
  VOID *PartitionObject;        // offset: 0x3e8 (1000)
  ULONGLONG SecurityDomain;     // offset: 0x3f0 (1008)
  VOID *CoverageSamplerContext; // offset: 0x3f8 (1016)
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

// 0x4c (76) bytes
struct _MMVAD {
  struct _MMVAD_SHORT Core; // offset: 0x0 (0)
  union {
    ULONG LongFlags2;                        // offset: 0x28 (40)
    volatile struct _MMVAD_FLAGS2 VadFlags2; // offset: 0x28 (40)

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

// 0x20 (32) bytes
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
  union {
    struct _MI_SYSTEM_CACHE_VIEW_ATTRIBUTES
        SystemCacheAttributes; // offset: 0x10 (16)
    ULONGLONG SectionOffset;   // offset: 0x10 (16)
  };
};

// 0x103c (4156) bytes
struct _MI_SESSION_STATE {
  struct _MMSESSION SystemSession;        // offset: 0x0 (0)
  ULONG DetachTimeStamp;                  // offset: 0x14 (20)
  UCHAR CodePageEdited;                   // offset: 0x18 (24)
  ULONG *DynamicPoolBitBuffer;            // offset: 0x1c (28)
  LONG VaReferenceCount[1024];            // offset: 0x20 (32)
  ULONG *DynamicPtesBitBuffer;            // offset: 0x1020 (4128)
  struct _EX_PUSH_LOCK IdLock;            // offset: 0x1024 (4132)
  struct _EPROCESS *LeaderProcess;        // offset: 0x1028 (4136)
  struct _EX_PUSH_LOCK InitializeLock;    // offset: 0x102c (4140)
  struct _MMWSL_INSTANCE *WorkingSetList; // offset: 0x1030 (4144)
  VOID *SessionBase;                      // offset: 0x1034 (4148)
  VOID *SessionCore;                      // offset: 0x1038 (4152)
};

// 0x50 (80) bytes
struct _LOCK_TRACKER {
  struct _RTL_BALANCED_NODE LockTrackerNode; // offset: 0x0 (0)
  struct _MDL *Mdl;                          // offset: 0xc (12)
  VOID *StartVa;                             // offset: 0x10 (16)
  ULONG Count;                               // offset: 0x14 (20)
  ULONG Offset;                              // offset: 0x18 (24)
  ULONG Length;                              // offset: 0x1c (28)
  ULONG Who;                                 // offset: 0x20 (32)
  ULONG Hash;                                // offset: 0x24 (36)
  ULONG Page;                                // offset: 0x28 (40)
  VOID *StackTrace[8];                       // offset: 0x2c (44)
  struct _EPROCESS *Process;                 // offset: 0x4c (76)
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

// 0x58 (88) bytes
struct _OBJECT_TYPE_INITIALIZER {
  USHORT Length; // offset: 0x0 (0)
  union {
    USHORT ObjectTypeFlags; // offset: 0x2 (2)
    struct {
      UCHAR CaseInsensitive : 1;         // offset: 0x2 (2)
      UCHAR UnnamedObjectsOnly : 1;      // offset: 0x2 (2)
      UCHAR UseDefaultObject : 1;        // offset: 0x2 (2)
      UCHAR SecurityRequired : 1;        // offset: 0x2 (2)
      UCHAR MaintainHandleCount : 1;     // offset: 0x2 (2)
      UCHAR MaintainTypeList : 1;        // offset: 0x2 (2)
      UCHAR SupportsObjectCallbacks : 1; // offset: 0x2 (2)
      UCHAR CacheAligned : 1;            // offset: 0x2 (2)
      UCHAR UseExtendedParameters : 1;   // offset: 0x3 (3)
      UCHAR Reserved : 7;                // offset: 0x3 (3)
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
   ULONG *arg5, ULONG arg6); // offset: 0x34 (52)
  VOID(*CloseProcedure)
  (struct _EPROCESS *arg1, VOID *arg2, ULONG arg3,
   ULONG arg4);                        // offset: 0x38 (56)
  VOID (*DeleteProcedure)(VOID *arg1); // offset: 0x3c (60)
  union {
    LONG(*ParseProcedure)
    (VOID *arg1, VOID *arg2, struct _ACCESS_STATE *arg3, CHAR arg4, ULONG arg5,
     struct _UNICODE_STRING *arg6, struct _UNICODE_STRING *arg7, VOID *arg8,
     struct _SECURITY_QUALITY_OF_SERVICE *arg9,
     VOID **arg10); // offset: 0x40 (64)
    LONG(*ParseProcedureEx)
    (VOID *arg1, VOID *arg2, struct _ACCESS_STATE *arg3, CHAR arg4, ULONG arg5,
     struct _UNICODE_STRING *arg6, struct _UNICODE_STRING *arg7, VOID *arg8,
     struct _SECURITY_QUALITY_OF_SERVICE *arg9,
     struct _OB_EXTENDED_PARSE_PARAMETERS *arg10,
     VOID **arg11); // offset: 0x40 (64)
  };
  LONG(*SecurityProcedure)
  (VOID *arg1, enum _SECURITY_OPERATION_CODE arg2, ULONG *arg3, VOID *arg4,
   ULONG *arg5, VOID **arg6, enum _POOL_TYPE arg7,
   struct _GENERIC_MAPPING *arg8, CHAR arg9); // offset: 0x44 (68)
  LONG(*QueryNameProcedure)
  (VOID *arg1, UCHAR arg2, struct _OBJECT_NAME_INFORMATION *arg3, ULONG arg4,
   ULONG *arg5, CHAR arg6); // offset: 0x48 (72)
  UCHAR(*OkayToCloseProcedure)
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

// 0x1c (28) bytes
struct _OB_DUPLICATE_OBJECT_STATE {
  struct _EPROCESS *SourceProcess;            // offset: 0x0 (0)
  VOID *SourceHandle;                         // offset: 0x4 (4)
  VOID *Object;                               // offset: 0x8 (8)
  ULONG TargetAccess;                         // offset: 0xc (12)
  struct _HANDLE_TABLE_ENTRY_INFO ObjectInfo; // offset: 0x10 (16)
  ULONG HandleAttributes;                     // offset: 0x18 (24)
};

// 0x24 (36) bytes
struct _KALPC_HANDLE_DATA {
  ULONG ObjectType;                                   // offset: 0x0 (0)
  ULONG Count;                                        // offset: 0x4 (4)
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

// 0x28 (40) bytes
struct _KALPC_MESSAGE_ATTRIBUTES {
  VOID *ClientContext;                                // offset: 0x0 (0)
  VOID *ServerContext;                                // offset: 0x4 (4)
  VOID *PortContext;                                  // offset: 0x8 (8)
  VOID *CancelPortContext;                            // offset: 0xc (12)
  struct _KALPC_SECURITY_DATA *SecurityData;          // offset: 0x10 (16)
  struct _KALPC_VIEW *View;                           // offset: 0x14 (20)
  struct _KALPC_HANDLE_DATA *HandleData;              // offset: 0x18 (24)
  union _KALPC_DIRECT_EVENT DirectEvent;              // offset: 0x1c (28)
  struct _KALPC_WORK_ON_BEHALF_DATA WorkOnBehalfData; // offset: 0x20 (32)
};

// 0x98 (152) bytes
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
  VOID *DataUserVa;                                   // offset: 0x60 (96)
  struct _ALPC_COMMUNICATION_INFO *CommunicationInfo; // offset: 0x64 (100)
  struct _ALPC_PORT *ConnectionPort;                  // offset: 0x68 (104)
  struct _ETHREAD *ServerThread;                      // offset: 0x6c (108)
  VOID *WakeReference;                                // offset: 0x70 (112)
  VOID *WakeReference2;                               // offset: 0x74 (116)
  VOID *ExtensionBuffer;                              // offset: 0x78 (120)
  ULONG ExtensionBufferSize;                          // offset: 0x7c (124)
  struct _PORT_MESSAGE PortMessage;                   // offset: 0x80 (128)
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
      ULONG SystemSpace : 1; // offset: 0x0 (0)
    } s1;                    // offset: 0x24 (36)

  } u1;                                    // offset: 0x24 (36)
  ULONG NumberOfOwnerMessages;             // offset: 0x28 (40)
  struct _LIST_ENTRY ProcessViewListEntry; // offset: 0x2c (44)
};

// 0x50 (80) bytes
struct _WORK_QUEUE_ENTRY {
  struct _LIST_ENTRY WorkQueueLinks; // offset: 0x0 (0)
  union {
    struct {
      struct _FILE_OBJECT *FileObject; // offset: 0x0 (0)
      VOID *DiskIoAttribution;         // offset: 0x4 (4)
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
      struct _ETHREAD *IoIssuerThread;                // offset: 0x30 (48)
      VOID *DiskIoAttribution;                        // offset: 0x34 (52)
      CHAR RequestorMode;                             // offset: 0x38 (56)
      ULONG NestingLevel;                             // offset: 0x3c (60)
    } AsyncRead;                                      // offset: 0x8 (8)

  } Parameters;                    // offset: 0x8 (8)
  UCHAR Function;                  // offset: 0x48 (72)
  struct _CC_PARTITION *Partition; // offset: 0x4c (76)
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
  LONG(*NotificationRoutine)
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

// 0x40 (64) bytes
struct _EPARTITION {
  VOID *MmPartition;                        // offset: 0x0 (0)
  VOID *CcPartition;                        // offset: 0x4 (4)
  VOID *ExPartition;                        // offset: 0x8 (8)
  LONG HardReferenceCount;                  // offset: 0xc (12)
  LONG OpenHandleCount;                     // offset: 0x10 (16)
  struct _LIST_ENTRY ActivePartitionLinks;  // offset: 0x14 (20)
  struct _EPARTITION *ParentPartition;      // offset: 0x1c (28)
  struct _WORK_QUEUE_ITEM TeardownWorkItem; // offset: 0x20 (32)
  struct _EX_PUSH_LOCK TeardownLock;        // offset: 0x30 (48)
  struct _EPROCESS *SystemProcess;          // offset: 0x34 (52)
  VOID *SystemProcessHandle;                // offset: 0x38 (56)
  union {
    ULONG PartitionFlags;    // offset: 0x3c (60)
    ULONG PairedWithJob : 1; // offset: 0x3c (60)
  };
};

// 0x60 (96) bytes
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
  ULONG WritesOutstanding;                       // offset: 0x1c (28)
  volatile LONG EvictFlushLock;                  // offset: 0x20 (32)
  struct _ETHREAD *EvictionThread;               // offset: 0x24 (36)
  struct _KEVENT EvictEvent;                     // offset: 0x28 (40)
  union _SLIST_HEADER WriteSupportSListHead;     // offset: 0x38 (56)
  struct _KEVENT EvictFlushCompleteEvent;        // offset: 0x40 (64)
  struct _RTL_BITMAP *ModifiedWriteFailedBitmap; // offset: 0x50 (80)
  struct _EPROCESS *StoreProcess;                // offset: 0x54 (84)
  ULONG DeleteStoredPages;                       // offset: 0x58 (88)
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

// 0x48 (72) bytes
struct _MI_STANDBY_STATE {
  ULONG FirstDecayPage;                                // offset: 0x0 (0)
  union _SLIST_HEADER PfnDecayFreeSList;               // offset: 0x8 (8)
  struct _MM_PAGE_ACCESS_INFO_HEADER *PfnRepurposeLog; // offset: 0x10 (16)
  struct _KDPC AllocatePfnRepurposeDpc;                // offset: 0x14 (20)
  union _SLIST_HEADER PageHeatListSlist;               // offset: 0x38 (56)
  volatile LONG PageHeatListDisableAllocation;         // offset: 0x40 (64)
};

// 0x80 (128) bytes
struct _MI_ACCESS_LOG_STATE {
  struct _MM_PAGE_ACCESS_INFO_HEADER *volatile CcAccessLog; // offset: 0x0 (0)
  struct _WORK_QUEUE_ITEM DisableAccessLogging;             // offset: 0x4 (4)
  ULONG Enabled;                                            // offset: 0x14 (20)
  ULONG MinLoggingPriority;                                 // offset: 0x18 (24)
  ULONG AccessLoggingLock;                                  // offset: 0x40 (64)
};

// 0x58 (88) bytes
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
  struct _ETW_SILODRIVERSTATE *SiloState;       // offset: 0x54 (84)
};

// 0x370 (880) bytes
struct _WMI_LOGGER_CONTEXT {
  ULONG LoggerId;                                      // offset: 0x0 (0)
  ULONG BufferSize;                                    // offset: 0x4 (4)
  ULONG MaximumEventSize;                              // offset: 0x8 (8)
  ULONG LoggerMode;                                    // offset: 0xc (12)
  LONG AcceptNewEvents;                                // offset: 0x10 (16)
  ULONG EventMarker[1];                                // offset: 0x14 (20)
  ULONG ErrorMarker;                                   // offset: 0x18 (24)
  ULONG SizeMask;                                      // offset: 0x1c (28)
  LONGLONG (*GetCpuClock)();                           // offset: 0x20 (32)
  struct _ETHREAD *LoggerThread;                       // offset: 0x24 (36)
  LONG LoggerStatus;                                   // offset: 0x28 (40)
  ULONG FailureReason;                                 // offset: 0x2c (44)
  struct _ETW_BUFFER_QUEUE BufferQueue;                // offset: 0x30 (48)
  struct _ETW_BUFFER_QUEUE OverflowQueue;              // offset: 0x38 (56)
  struct _LIST_ENTRY GlobalList;                       // offset: 0x40 (64)
  struct _LIST_ENTRY DebugIdTrackingList;              // offset: 0x48 (72)
  struct _ETW_DECODE_CONTROL_ENTRY *DecodeControlList; // offset: 0x50 (80)
  ULONG DecodeControlCount;                            // offset: 0x54 (84)
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
      ULONG LastBranchTracing : 1;           // offset: 0x258 (600)
      ULONG SystemLoggerIndex : 8;           // offset: 0x258 (600)
      ULONG StackCaching : 1;                // offset: 0x258 (600)
      ULONG ProviderTracking : 1;            // offset: 0x258 (600)
      ULONG ProcessorTrace : 1;              // offset: 0x258 (600)
      ULONG SpareFlags2 : 5;                 // offset: 0x258 (600)
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
  struct _ETW_STACK_TRACE_BLOCK StackTraceBlock; // offset: 0x260 (608)
  struct _RTL_BITMAP HookIdMap;                  // offset: 0x2b0 (688)
  struct _ETW_STACK_CACHE *StackCache;           // offset: 0x2b8 (696)
  struct _ETW_PMC_SUPPORT *PmcData;              // offset: 0x2bc (700)
  struct _ETW_LBR_SUPPORT *LbrData;              // offset: 0x2c0 (704)
  struct _ETW_IPT_SUPPORT *IptData;              // offset: 0x2c4 (708)
  struct _LIST_ENTRY BinaryTrackingList;         // offset: 0x2c8 (712)
  struct _WMI_BUFFER_HEADER **ScratchArray;      // offset: 0x2d0 (720)
  struct _DISALLOWED_GUIDS DisallowedGuids;      // offset: 0x2d4 (724)
  LONGLONG RelativeTimerDueTime;                 // offset: 0x2e0 (736)
  struct _PERIODIC_CAPTURE_STATE_GUIDS
      PeriodicCaptureStateGuids;               // offset: 0x2e8 (744)
  struct _EX_TIMER *PeriodicCaptureStateTimer; // offset: 0x2f0 (752)
  enum _ETW_PERIODIC_TIMER_STATE
      PeriodicCaptureStateTimerState;                   // offset: 0x2f4 (756)
  struct _ETW_SOFT_RESTART_CONTEXT *SoftRestartContext; // offset: 0x2f8 (760)
  struct _ETW_SILODRIVERSTATE *SiloState;               // offset: 0x2fc (764)
  struct _WORK_QUEUE_ITEM CompressionWorkItem;          // offset: 0x300 (768)
  LONG CompressionWorkItemState;                        // offset: 0x310 (784)
  struct _EX_PUSH_LOCK CompressionLock;                 // offset: 0x314 (788)
  struct _WMI_BUFFER_HEADER *CompressionTarget;         // offset: 0x318 (792)
  VOID *CompressionWorkspace;                           // offset: 0x31c (796)
  LONG CompressionOn;                                   // offset: 0x320 (800)
  ULONG CompressionRatioGuess;                          // offset: 0x324 (804)
  ULONG PartialBufferCompressionLevel;                  // offset: 0x328 (808)
  enum ETW_COMPRESSION_RESUMPTION_MODE
      CompressionResumptionMode;               // offset: 0x32c (812)
  struct _SINGLE_LIST_ENTRY PlaceholderList;   // offset: 0x330 (816)
  struct _KDPC CompressionDpc;                 // offset: 0x334 (820)
  union _LARGE_INTEGER LastBufferSwitchTime;   // offset: 0x358 (856)
  union _LARGE_INTEGER BufferWriteDuration;    // offset: 0x360 (864)
  union _LARGE_INTEGER BufferCompressDuration; // offset: 0x368 (872)
};

// 0x10 (16) bytes
struct _DBGK_SILOSTATE {
  struct _EX_PUSH_LOCK ErrorPortLock;       // offset: 0x0 (0)
  struct _DBGKP_ERROR_PORT *ErrorPort;      // offset: 0x4 (4)
  struct _EPROCESS *ErrorProcess;           // offset: 0x8 (8)
  struct _KEVENT *ErrorPortRegisteredEvent; // offset: 0xc (12)
};

// 0x2a0 (672) bytes
struct _ESERVERSILO_GLOBALS {
  struct _OBP_SILODRIVERSTATE ObSiloState;            // offset: 0x0 (0)
  struct _SEP_SILOSTATE SeSiloState;                  // offset: 0x1a4 (420)
  struct _SEP_RM_LSA_CONNECTION_STATE SeRmSiloState;  // offset: 0x1c0 (448)
  struct _ETW_SILODRIVERSTATE *EtwSiloState;          // offset: 0x1f0 (496)
  struct _EPROCESS *MiSessionLeaderProcess;           // offset: 0x1f4 (500)
  struct _EPROCESS *ExpDefaultErrorPortProcess;       // offset: 0x1f8 (504)
  VOID *ExpDefaultErrorPort;                          // offset: 0x1fc (508)
  ULONG HardErrorState;                               // offset: 0x200 (512)
  struct _WNF_SILODRIVERSTATE WnfSiloState;           // offset: 0x208 (520)
  struct _DBGK_SILOSTATE DbgkSiloState;               // offset: 0x238 (568)
  struct _UNICODE_STRING PsProtectedCurrentDirectory; // offset: 0x248 (584)
  struct _UNICODE_STRING PsProtectedEnvironment;      // offset: 0x250 (592)
  VOID *ApiSetSection;                                // offset: 0x258 (600)
  VOID *ApiSetSchema;                                 // offset: 0x25c (604)
  UCHAR OneCoreForwardersEnabled;                     // offset: 0x260 (608)
  struct _UNICODE_STRING NtSystemRoot;                // offset: 0x264 (612)
  struct _UNICODE_STRING SiloRootDirectoryName;       // offset: 0x26c (620)
  struct _PSP_STORAGE *Storage;                       // offset: 0x274 (628)
  enum _SERVERSILO_STATE State;                       // offset: 0x278 (632)
  LONG ExitStatus;                                    // offset: 0x27c (636)
  struct _KEVENT *DeleteEvent;                        // offset: 0x280 (640)
  struct _SILO_USER_SHARED_DATA *UserSharedData;      // offset: 0x284 (644)
  VOID *UserSharedSection;                            // offset: 0x288 (648)
  struct _WORK_QUEUE_ITEM TerminateWorkItem;          // offset: 0x28c (652)
};

// 0x80 (128) bytes
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
    struct _HANDLE_TABLE_FREE_LIST FreeLists[1]; // offset: 0x40 (64)
    struct {
      UCHAR ActualEntry[20];                      // offset: 0x40 (64)
      struct _HANDLE_TRACE_DEBUG_INFO *DebugInfo; // offset: 0x54 (84)
    };
  };
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

// 0x68 (104) bytes
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
  UCHAR(*TranslateBusAddress)
  (struct _BUS_HANDLER *arg1, struct _BUS_HANDLER *arg2,
   union _LARGE_INTEGER arg3, ULONG *arg4,
   union _LARGE_INTEGER *arg5); // offset: 0x44 (68)
  VOID *Spare1;                 // offset: 0x48 (72)
  VOID *Spare2;                 // offset: 0x4c (76)
  VOID *Spare3;                 // offset: 0x50 (80)
  VOID *Spare4;                 // offset: 0x54 (84)
  VOID *Spare5;                 // offset: 0x58 (88)
  VOID *Spare6;                 // offset: 0x5c (92)
  VOID *Spare7;                 // offset: 0x60 (96)
  VOID *Spare8;                 // offset: 0x64 (100)
};

// 0x22c (556) bytes
struct HAL_PRIVATE_DISPATCH {
  ULONG Version; // offset: 0x0 (0)
  struct _BUS_HANDLER *(*HalHandlerForBus)(enum _INTERFACE_TYPE arg1,
                                           ULONG arg2); // offset: 0x4 (4)
  struct _BUS_HANDLER *(*HalHandlerForConfigSpace)(
      enum _BUS_DATA_TYPE arg1, ULONG arg2); // offset: 0x8 (8)
  VOID (*HalLocateHiberRanges)(VOID *arg1);  // offset: 0xc (12)
  LONG(*HalRegisterBusHandler)
  (enum _INTERFACE_TYPE arg1, enum _BUS_DATA_TYPE arg2, ULONG arg3,
   enum _INTERFACE_TYPE arg4, ULONG arg5, ULONG arg6,
   LONG (*arg7)(struct _BUS_HANDLER *arg1),
   struct _BUS_HANDLER **arg8);                            // offset: 0x10 (16)
  VOID (*HalSetWakeEnable)(UCHAR arg1);                    // offset: 0x14 (20)
  LONG (*HalSetWakeAlarm)(ULONGLONG arg1, ULONGLONG arg2); // offset: 0x18 (24)
  UCHAR(*HalPciTranslateBusAddress)
  (enum _INTERFACE_TYPE arg1, ULONG arg2, union _LARGE_INTEGER arg3,
   ULONG *arg4, union _LARGE_INTEGER *arg5); // offset: 0x1c (28)
  LONG(*HalPciAssignSlotResources)
  (struct _UNICODE_STRING *arg1, struct _UNICODE_STRING *arg2,
   struct _DRIVER_OBJECT *arg3, struct _DEVICE_OBJECT *arg4,
   enum _INTERFACE_TYPE arg5, ULONG arg6, ULONG arg7,
   struct _CM_RESOURCE_LIST **arg8); // offset: 0x20 (32)
  VOID (*HalHaltSystem)();           // offset: 0x24 (36)
  UCHAR(*HalFindBusAddressTranslation)
  (union _LARGE_INTEGER arg1, ULONG *arg2, union _LARGE_INTEGER *arg3,
   ULONG *arg4, UCHAR arg5);  // offset: 0x28 (40)
  UCHAR (*HalResetDisplay)(); // offset: 0x2c (44)
  LONG(*HalAllocateMapRegisters)
  (struct _ADAPTER_OBJECT *arg1, ULONG arg2, ULONG arg3,
   struct _MAP_REGISTER_ENTRY *arg4); // offset: 0x30 (48)
  LONG(*KdSetupPciDeviceForDebugging)
  (VOID *arg1, struct _DEBUG_DEVICE_DESCRIPTOR *arg2); // offset: 0x34 (52)
  LONG(*KdReleasePciDeviceForDebugging)
  (struct _DEBUG_DEVICE_DESCRIPTOR *arg1); // offset: 0x38 (56)
  VOID *(*KdGetAcpiTablePhase0)(struct _LOADER_PARAMETER_BLOCK *arg1,
                                ULONG arg2); // offset: 0x3c (60)
  VOID (*KdCheckPowerButton)();              // offset: 0x40 (64)
  UCHAR (*HalVectorToIDTEntry)(ULONG arg1);  // offset: 0x44 (68)
  VOID *(*KdMapPhysicalMemory64)(union _LARGE_INTEGER arg1, ULONG arg2,
                                 UCHAR arg3); // offset: 0x48 (72)
  VOID(*KdUnmapVirtualAddress)
  (VOID *arg1, ULONG arg2, UCHAR arg3); // offset: 0x4c (76)
  ULONG(*KdGetPciDataByOffset)
  (ULONG arg1, ULONG arg2, VOID *arg3, ULONG arg4,
   ULONG arg5); // offset: 0x50 (80)
  ULONG(*KdSetPciDataByOffset)
  (ULONG arg1, ULONG arg2, VOID *arg3, ULONG arg4,
   ULONG arg5); // offset: 0x54 (84)
  ULONG(*HalGetInterruptVectorOverride)
  (enum _INTERFACE_TYPE arg1, ULONG arg2, ULONG arg3, ULONG arg4, UCHAR *arg5,
   ULONG *arg6); // offset: 0x58 (88)
  LONG(*HalGetVectorInputOverride)
  (ULONG arg1, struct _GROUP_AFFINITY *arg2, ULONG *arg3,
   enum _KINTERRUPT_POLARITY *arg4,
   struct _INTERRUPT_REMAPPING_INFO *arg5); // offset: 0x5c (92)
  LONG (*HalLoadMicrocode)(VOID *arg1);     // offset: 0x60 (96)
  LONG (*HalUnloadMicrocode)();             // offset: 0x64 (100)
  LONG (*HalPostMicrocodeUpdate)();         // offset: 0x68 (104)
  LONG(*HalAllocateMessageTargetOverride)
  (struct _DEVICE_OBJECT *arg1, struct _GROUP_AFFINITY *arg2, ULONG arg3,
   enum _KINTERRUPT_MODE arg4, UCHAR arg5, ULONG *arg6, UCHAR *arg7,
   ULONG *arg8); // offset: 0x6c (108)
  VOID(*HalFreeMessageTargetOverride)
  (struct _DEVICE_OBJECT *arg1, ULONG arg2,
   struct _GROUP_AFFINITY *arg3); // offset: 0x70 (112)
  LONG(*HalDpReplaceBegin)
  (struct _HAL_DP_REPLACE_PARAMETERS *arg1, VOID **arg2); // offset: 0x74 (116)
  VOID (*HalDpReplaceTarget)(VOID *arg1);                 // offset: 0x78 (120)
  LONG (*HalDpReplaceControl)(ULONG arg1, VOID *arg2);    // offset: 0x7c (124)
  VOID (*HalDpReplaceEnd)(VOID *arg1);                    // offset: 0x80 (128)
  VOID (*HalPrepareForBugcheck)(ULONG arg1);              // offset: 0x84 (132)
  UCHAR(*HalQueryWakeTime)
  (ULONGLONG *arg1, ULONGLONG *arg2); // offset: 0x88 (136)
  VOID(*HalReportIdleStateUsage)
  (UCHAR arg1, struct _KAFFINITY_EX *arg2);               // offset: 0x8c (140)
  VOID (*HalTscSynchronization)(UCHAR arg1, ULONG *arg2); // offset: 0x90 (144)
  LONG(*HalWheaInitProcessorGenericSection)
  (struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *arg1,
   struct _WHEA_PROCESSOR_GENERIC_ERROR_SECTION *arg2); // offset: 0x94 (148)
  VOID(*HalStopLegacyUsbInterrupts)
  (enum _SYSTEM_POWER_STATE arg1); // offset: 0x98 (152)
  LONG(*HalReadWheaPhysicalMemory)
  (union _LARGE_INTEGER arg1, ULONG arg2, VOID *arg3); // offset: 0x9c (156)
  LONG(*HalWriteWheaPhysicalMemory)
  (union _LARGE_INTEGER arg1, ULONG arg2, VOID *arg3); // offset: 0xa0 (160)
  LONG (*HalDpMaskLevelTriggeredInterrupts)();         // offset: 0xa4 (164)
  LONG (*HalDpUnmaskLevelTriggeredInterrupts)();       // offset: 0xa8 (168)
  LONG(*HalDpGetInterruptReplayState)
  (VOID *arg1, VOID **arg2);                 // offset: 0xac (172)
  LONG (*HalDpReplayInterrupts)(VOID *arg1); // offset: 0xb0 (176)
  UCHAR (*HalQueryIoPortAccessSupported)();  // offset: 0xb4 (180)
  LONG(*KdSetupIntegratedDeviceForDebugging)
  (VOID *arg1, struct _DEBUG_DEVICE_DESCRIPTOR *arg2); // offset: 0xb8 (184)
  LONG(*KdReleaseIntegratedDeviceForDebugging)
  (struct _DEBUG_DEVICE_DESCRIPTOR *arg1); // offset: 0xbc (188)
  VOID(*HalGetEnlightenmentInformation)
  (struct _HAL_INTEL_ENLIGHTENMENT_INFORMATION *arg1); // offset: 0xc0 (192)
  VOID *(*HalAllocateEarlyPages)(struct _LOADER_PARAMETER_BLOCK *arg1,
                                 ULONG arg2, ULONGLONG *arg3,
                                 ULONG arg4); // offset: 0xc4 (196)
  VOID *(*HalMapEarlyPages)(ULONGLONG arg1, ULONG arg2,
                            ULONG arg3); // offset: 0xc8 (200)
  VOID *Dummy1;                          // offset: 0xcc (204)
  VOID *Dummy2;                          // offset: 0xd0 (208)
  VOID(*HalNotifyProcessorFreeze)
  (UCHAR arg1, UCHAR arg2);                       // offset: 0xd4 (212)
  LONG (*HalPrepareProcessorForIdle)(ULONG arg1); // offset: 0xd8 (216)
  VOID(*HalRegisterLogRoutine)
  (struct _HAL_LOG_REGISTER_CONTEXT *arg1);   // offset: 0xdc (220)
  VOID (*HalResumeProcessorFromIdle)();       // offset: 0xe0 (224)
  VOID *Dummy;                                // offset: 0xe4 (228)
  ULONG (*HalVectorToIDTEntryEx)(ULONG arg1); // offset: 0xe8 (232)
  LONG(*HalSecondaryInterruptQueryPrimaryInformation)
  (struct _INTERRUPT_VECTOR_DATA *arg1, ULONG *arg2); // offset: 0xec (236)
  LONG (*HalMaskInterrupt)(ULONG arg1, ULONG arg2);   // offset: 0xf0 (240)
  LONG (*HalUnmaskInterrupt)(ULONG arg1, ULONG arg2); // offset: 0xf4 (244)
  UCHAR(*HalIsInterruptTypeSecondary)
  (ULONG arg1, ULONG arg2); // offset: 0xf8 (248)
  LONG(*HalAllocateGsivForSecondaryInterrupt)
  (CHAR *arg1, USHORT arg2, ULONG *arg3); // offset: 0xfc (252)
  LONG(*HalAddInterruptRemapping)
  (ULONG arg1, ULONG arg2, struct _PCI_BUSMASTER_DESCRIPTOR *arg3, UCHAR arg4,
   struct _INTERRUPT_VECTOR_DATA *arg5, ULONG arg6); // offset: 0x100 (256)
  VOID(*HalRemoveInterruptRemapping)
  (ULONG arg1, ULONG arg2, struct _PCI_BUSMASTER_DESCRIPTOR *arg3, UCHAR arg4,
   struct _INTERRUPT_VECTOR_DATA *arg5, ULONG arg6); // offset: 0x104 (260)
  VOID (*HalSaveAndDisableHvEnlightenment)();        // offset: 0x108 (264)
  VOID (*HalRestoreHvEnlightenment)();               // offset: 0x10c (268)
  VOID(*HalFlushIoBuffersExternalCache)
  (struct _MDL *arg1, UCHAR arg2);           // offset: 0x110 (272)
  VOID (*HalFlushExternalCache)(UCHAR arg1); // offset: 0x114 (276)
  LONG(*HalPciEarlyRestore)
  (enum _SYSTEM_POWER_STATE arg1);                    // offset: 0x118 (280)
  LONG (*HalGetProcessorId)(ULONG arg1, ULONG *arg2); // offset: 0x11c (284)
  LONG(*HalAllocatePmcCounterSet)
  (ULONG arg1, enum _KPROFILE_SOURCE *arg2, ULONG arg3,
   struct _HAL_PMC_COUNTERS **arg4); // offset: 0x120 (288)
  VOID(*HalCollectPmcCounters)
  (struct _HAL_PMC_COUNTERS *arg1, ULONGLONG *arg2); // offset: 0x124 (292)
  VOID(*HalFreePmcCounterSet)
  (struct _HAL_PMC_COUNTERS *arg1); // offset: 0x128 (296)
  LONG(*HalProcessorHalt)
  (ULONG arg1, VOID *arg2, LONG (*arg3)(VOID *arg1)); // offset: 0x12c (300)
  ULONGLONG(*HalTimerQueryCycleCounter)
  (ULONGLONG *arg1);              // offset: 0x130 (304)
  VOID *Dummy3;                   // offset: 0x134 (308)
  VOID (*HalPciMarkHiberPhase)(); // offset: 0x138 (312)
  LONG(*HalQueryProcessorRestartEntryPoint)
  (union _LARGE_INTEGER *arg1);            // offset: 0x13c (316)
  LONG (*HalRequestInterrupt)(ULONG arg1); // offset: 0x140 (320)
  LONG(*HalEnumerateUnmaskedInterrupts)
  (UCHAR (*arg1)(VOID *arg1, struct _HAL_UNMASKED_INTERRUPT_INFORMATION *arg2),
   VOID *arg2,
   struct _HAL_UNMASKED_INTERRUPT_INFORMATION *arg3); // offset: 0x144 (324)
  VOID(*HalFlushAndInvalidatePageExternalCache)
  (union _LARGE_INTEGER arg1); // offset: 0x148 (328)
  LONG(*KdEnumerateDebuggingDevices)
  (VOID *arg1, struct _DEBUG_DEVICE_DESCRIPTOR *arg2,
   enum KD_CALLBACK_ACTION (*arg3)(
       struct _DEBUG_DEVICE_DESCRIPTOR *arg1)); // offset: 0x14c (332)
  VOID(*HalFlushIoRectangleExternalCache)
  (struct _MDL *arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5,
   UCHAR arg6);                             // offset: 0x150 (336)
  VOID (*HalPowerEarlyRestore)(ULONG arg1); // offset: 0x154 (340)
  LONG(*HalQueryCapsuleCapabilities)
  (VOID *arg1, ULONG arg2, ULONGLONG *arg3, ULONG *arg4); // offset: 0x158 (344)
  LONG(*HalUpdateCapsule)
  (VOID *arg1, ULONG arg2, union _LARGE_INTEGER arg3); // offset: 0x15c (348)
  UCHAR (*HalPciMultiStageResumeCapable)();            // offset: 0x160 (352)
  VOID (*HalDmaFreeCrashDumpRegisters)(ULONG arg1);    // offset: 0x164 (356)
  UCHAR (*HalAcpiAoacCapable)();                       // offset: 0x168 (360)
  LONG(*HalInterruptSetDestination)
  (struct _INTERRUPT_VECTOR_DATA *arg1, struct _GROUP_AFFINITY *arg2,
   ULONG *arg3); // offset: 0x16c (364)
  VOID(*HalGetClockConfiguration)
  (struct _HAL_CLOCK_TIMER_CONFIGURATION *arg1); // offset: 0x170 (368)
  VOID (*HalClockTimerActivate)(UCHAR arg1);     // offset: 0x174 (372)
  VOID (*HalClockTimerInitialize)();             // offset: 0x178 (376)
  VOID (*HalClockTimerStop)();                   // offset: 0x17c (380)
  LONG(*HalClockTimerArm)
  (enum _HAL_CLOCK_TIMER_MODE arg1, ULONGLONG arg2,
   ULONGLONG *arg3);                            // offset: 0x180 (384)
  UCHAR (*HalTimerOnlyClockInterruptPending)(); // offset: 0x184 (388)
  VOID *(*HalAcpiGetMultiNode)();               // offset: 0x188 (392)
  VOID *HalPowerSetRebootHandler;               // offset: 0x18c (396)
  VOID(*HalIommuRegisterDispatchTable)
  (struct _HAL_IOMMU_DISPATCH *arg1);                     // offset: 0x190 (400)
  VOID (*HalTimerWatchdogStart)();                        // offset: 0x194 (404)
  VOID (*HalTimerWatchdogResetCountdown)();               // offset: 0x198 (408)
  VOID (*HalTimerWatchdogStop)();                         // offset: 0x19c (412)
  UCHAR (*HalTimerWatchdogGeneratedLastReset)();          // offset: 0x1a0 (416)
  LONG (*HalTimerWatchdogTriggerSystemReset)(UCHAR arg1); // offset: 0x1a4 (420)
  LONG(*HalInterruptVectorDataToGsiv)
  (struct _INTERRUPT_VECTOR_DATA *arg1, ULONG *arg2); // offset: 0x1a8 (424)
  LONG(*HalInterruptGetHighestPriorityInterrupt)
  (ULONG *arg1, UCHAR *arg2);         // offset: 0x1ac (428)
  LONG (*HalProcessorOn)(ULONG arg1); // offset: 0x1b0 (432)
  LONG (*HalProcessorOff)();          // offset: 0x1b4 (436)
  LONG (*HalProcessorFreeze)();       // offset: 0x1b8 (440)
  LONG(*HalDmaLinkDeviceObjectByToken)
  (ULONG arg1, struct _DEVICE_OBJECT *arg2);   // offset: 0x1bc (444)
  LONG (*HalDmaCheckAdapterToken)(ULONG arg1); // offset: 0x1c0 (448)
  VOID *Dummy4;                                // offset: 0x1c4 (452)
  LONG(*HalTimerConvertPerformanceCounterToAuxiliaryCounter)
  (ULONGLONG arg1, ULONGLONG *arg2, ULONGLONG *arg3); // offset: 0x1c8 (456)
  LONG(*HalTimerConvertAuxiliaryCounterToPerformanceCounter)
  (ULONGLONG arg1, ULONGLONG *arg2, ULONGLONG *arg3); // offset: 0x1cc (460)
  LONG(*HalTimerQueryAuxiliaryCounterFrequency)
  (ULONGLONG *arg1); // offset: 0x1d0 (464)
  LONG(*HalConnectThermalInterrupt)
  (UCHAR (*arg1)(struct _KINTERRUPT *arg1, VOID *arg2)); // offset: 0x1d4 (468)
  UCHAR (*HalIsEFIRuntimeActive)();                      // offset: 0x1d8 (472)
  UCHAR (*HalTimerQueryAndResetRtcErrors)(UCHAR arg1);   // offset: 0x1dc (476)
  VOID (*HalAcpiLateRestore)();                          // offset: 0x1e0 (480)
  LONG (*KdWatchdogDelayExpiration)(ULONGLONG *arg1);    // offset: 0x1e4 (484)
  LONG(*HalGetProcessorStats)
  (enum _HAL_PROCESSOR_STAT_TYPE arg1, ULONG arg2, ULONG arg3,
   ULONG *arg4);                               // offset: 0x1e8 (488)
  ULONGLONG (*HalTimerWatchdogQueryDueTime)(); // offset: 0x1ec (492)
  LONG(*HalConnectSyntheticInterrupt)
  (UCHAR (*arg1)(struct _KINTERRUPT *arg1, VOID *arg2)); // offset: 0x1f0 (496)
  VOID (*HalPreprocessNmi)(ULONG arg1);                  // offset: 0x1f4 (500)
  LONG(*HalEnumerateEnvironmentVariablesWithFilter)
  (ULONG arg1, UCHAR (*arg2)(struct _GUID *arg1, const WCHAR *arg2), VOID *arg3,
   ULONG *arg4); // offset: 0x1f8 (504)
  LONG(*HalCaptureLastBranchRecordStack)
  (ULONG arg1, struct _HAL_LBR_ENTRY *arg2, ULONG *arg3); // offset: 0x1fc (508)
  UCHAR (*HalClearLastBranchRecordStack)();               // offset: 0x200 (512)
  LONG(*HalConfigureLastBranchRecord)
  (ULONG arg1, ULONG arg2); // offset: 0x204 (516)
  UCHAR(*HalGetLastBranchInformation)
  (ULONG *arg1, ULONG *arg2);                    // offset: 0x208 (520)
  VOID (*HalResumeLastBranchRecord)(UCHAR arg1); // offset: 0x20c (524)
  LONG(*HalStartLastBranchRecord)
  (ULONG arg1, ULONG *arg2);                   // offset: 0x210 (528)
  LONG (*HalStopLastBranchRecord)(ULONG arg1); // offset: 0x214 (532)
  LONG (*HalIommuBlockDevice)(VOID *arg1);     // offset: 0x218 (536)
  LONG(*HalIommuUnblockDevice)
  (struct _EXT_IOMMU_DEVICE_ID *arg1, VOID **arg2); // offset: 0x21c (540)
  LONG(*HalGetIommuInterface)
  (ULONG arg1, struct _DMA_IOMMU_INTERFACE *arg2); // offset: 0x220 (544)
  LONG(*HalRequestGenericErrorRecovery)
  (VOID *arg1, ULONG *arg2); // offset: 0x224 (548)
  LONG(*HalTimerQueryHostPerformanceCounter)
  (ULONGLONG *arg1); // offset: 0x228 (552)
};

// 0x80 (128) bytes
struct _VF_DRIVER_IO_CALLBACKS {
  LONG(*DriverInit)
  (struct _DRIVER_OBJECT *arg1,
   struct _UNICODE_STRING *arg2); // offset: 0x0 (0)
  VOID(*DriverStartIo)
  (struct _DEVICE_OBJECT *arg1, struct _IRP *arg2);  // offset: 0x4 (4)
  VOID (*DriverUnload)(struct _DRIVER_OBJECT *arg1); // offset: 0x8 (8)
  LONG(*AddDevice)
  (struct _DRIVER_OBJECT *arg1,
   struct _DEVICE_OBJECT *arg2); // offset: 0xc (12)
  LONG(*MajorFunction[28])
  (struct _DEVICE_OBJECT *arg1, struct _IRP *arg2); // offset: 0x10 (16)
};

// 0x28 (40) bytes
struct _DRIVER_EXTENSION {
  struct _DRIVER_OBJECT *DriverObject; // offset: 0x0 (0)
  LONG(*AddDevice)
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

// 0x1f8 (504) bytes
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
  VOID *DriverContext;                           // offset: 0x5c (92)
  struct _LIST_ENTRY AcpiLink;                   // offset: 0x60 (96)
  struct _UNICODE_STRING DeviceId;               // offset: 0x68 (104)
  struct _IO_REMOVE_LOCK RemoveLock;             // offset: 0x70 (112)
  struct _IO_REMOVE_LOCK AcpiRemoveLock;         // offset: 0x88 (136)
  struct _POP_FX_WORK_ORDER WorkOrder;           // offset: 0xa0 (160)
  ULONG IdleLock;                                // offset: 0xbc (188)
  struct _KTIMER IdleTimer;                      // offset: 0xc0 (192)
  struct _KDPC IdleDpc;                          // offset: 0xe8 (232)
  ULONGLONG IdleTimeout;                         // offset: 0x108 (264)
  ULONGLONG IdleStamp;                           // offset: 0x110 (272)
  struct _DEVICE_OBJECT *NextIrpDeviceObject[2]; // offset: 0x118 (280)
  union _POWER_STATE NextIrpPowerState[2];       // offset: 0x120 (288)
  VOID(*NextIrpCallerCompletion[2])
  (struct _DEVICE_OBJECT *arg1, UCHAR arg2, union _POWER_STATE arg3, VOID *arg4,
   struct _IO_STATUS_BLOCK *arg5); // offset: 0x128 (296)
  VOID *NextIrpCallerContext[2];   // offset: 0x130 (304)
  struct _KEVENT IrpCompleteEvent; // offset: 0x138 (312)
  UCHAR(*PowerOnDumpDeviceCallback)
  (struct _PEP_CRASHDUMP_INFORMATION *arg1);        // offset: 0x148 (328)
  struct _POP_FX_ACCOUNTING Accounting;             // offset: 0x150 (336)
  volatile ULONG Flags;                             // offset: 0x1c8 (456)
  ULONG ComponentCount;                             // offset: 0x1cc (460)
  struct _POP_FX_COMPONENT **Components;            // offset: 0x1d0 (464)
  ULONG LogEntries;                                 // offset: 0x1d4 (468)
  struct _POP_FX_LOG_ENTRY *Log;                    // offset: 0x1d8 (472)
  volatile LONG LogIndex;                           // offset: 0x1dc (476)
  struct _DRIVER_OBJECT *DripsWatchdogDriverObject; // offset: 0x1e0 (480)
  struct _POP_FX_DRIPS_WATCHDOG_CONTEXT
      DripsWatchdogContext; // offset: 0x1e4 (484)
};

// 0x110 (272) bytes
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
  struct _POP_FX_PERF_INFO *Performance;        // offset: 0x108 (264)
};

// 0x60 (96) bytes
struct _POP_FX_PERF_INFO {
  struct _POP_FX_COMPONENT *Component; // offset: 0x0 (0)
  struct _KEVENT CompletedEvent;       // offset: 0x4 (4)
  VOID(*ComponentPerfState)
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

// 0x1d4 (468) bytes
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
    WCHAR *SerialNumber;                      // offset: 0xc (12)
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
      *PendingEjectRelations;                            // offset: 0x1c4 (452)
  ULONG StateFlags;                                      // offset: 0x1c8 (456)
  struct _PNP_REBALANCE_TRACE_CONTEXT *RebalanceContext; // offset: 0x1cc (460)
  struct _DEVICE_NODE_IOMMU_EXTENSION *IommuExtension;   // offset: 0x1d0 (464)
};

// 0x98 (152) bytes
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
  LONG IrpSequenceID;                    // offset: 0x80 (128)
  union {
    struct {
      VOID(*CallerCompletion)
      (struct _DEVICE_OBJECT *arg1, UCHAR arg2, union _POWER_STATE arg3,
       VOID *arg4, struct _IO_STATUS_BLOCK *arg5); // offset: 0x0 (0)
      VOID *CallerContext;                         // offset: 0x4 (4)
      struct _DEVICE_OBJECT *CallerDevice;         // offset: 0x8 (8)
      UCHAR SystemWake;                            // offset: 0xc (12)
    } Device;                                      // offset: 0x84 (132)
    struct {
      struct _PO_DEVICE_NOTIFY *NotifyDevice; // offset: 0x0 (0)
      UCHAR FxDeviceActivated;                // offset: 0x4 (4)
    } System;                                 // offset: 0x84 (132)
  };
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

// 0xc00 (3072) bytes
struct _MI_VISIBLE_PARTITION {
  ULONG LowestPhysicalPage;                           // offset: 0x0 (0)
  ULONG HighestPhysicalPage;                          // offset: 0x4 (4)
  ULONG NumberOfPhysicalPages;                        // offset: 0x8 (8)
  volatile ULONG NumberOfPagingFiles;                 // offset: 0xc (12)
  UCHAR SystemCacheInitialized;                       // offset: 0x10 (16)
  struct _MMPAGING_FILE *PagingFile[16];              // offset: 0x14 (20)
  volatile ULONG AvailablePages;                      // offset: 0x80 (128)
  volatile ULONG ResidentAvailablePages;              // offset: 0xc0 (192)
  struct _MMSUPPORT_INSTANCE PartitionWs[1];          // offset: 0x100 (256)
  struct _MMWSL_INSTANCE PartitionWorkingSetLists[1]; // offset: 0x164 (356)
  volatile ULONG TotalCommittedPages;                 // offset: 0x17c (380)
  struct _MMPFNLIST ModifiedPageListHead;             // offset: 0x180 (384)
  struct _MMPFNLIST ModifiedNoWritePageListHead;      // offset: 0x1c0 (448)
  ULONG TotalCommitLimit;                             // offset: 0x1d4 (468)
  ULONG TotalPagesForPagingFile;                      // offset: 0x1d8 (472)
  ULONG VadPhysicalPages;                             // offset: 0x1dc (476)
  ULONG ProcessLockedFilePages;                       // offset: 0x1e0 (480)
  volatile ULONG SharedCommit;                        // offset: 0x1e4 (484)
  ULONG ChargeCommitmentFailures[4];                  // offset: 0x1e8 (488)
  volatile LONG PageFileTraceIndex;                   // offset: 0x1f8 (504)
  struct _MI_PAGEFILE_TRACES PageFileTraces[32];      // offset: 0x200 (512)
};

// 0x1b80 (7040) bytes
struct _MI_PARTITION {
  struct _MI_PARTITION_CORE Core;                // offset: 0x0 (0)
  struct _MI_PARTITION_MODWRITES Modwriter;      // offset: 0xe8 (232)
  struct _MI_PARTITION_STORES Store;             // offset: 0x2b8 (696)
  struct _MI_PARTITION_SEGMENTS Segments;        // offset: 0x340 (832)
  struct _MI_PARTITION_PAGE_LISTS PageLists;     // offset: 0x540 (1344)
  struct _MI_PARTITION_COMMIT Commit;            // offset: 0xdc0 (3520)
  struct _MI_PARTITION_ZEROING Zeroing;          // offset: 0xe40 (3648)
  struct _MI_PAGE_COMBINING_SUPPORT PageCombine; // offset: 0xe80 (3712)
  VOID *WorkingSetControl;                       // offset: 0xf58 (3928)
  struct _MMWORKING_SET_EXPANSION_HEAD
      WorkingSetExpansionHead;     // offset: 0xf5c (3932)
  struct _MI_VISIBLE_PARTITION Vp; // offset: 0xf80 (3968)
};

// 0x38 (56) bytes
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
  ULONG CrossPartitionDenials;                    // offset: 0x30 (48)
  UCHAR MultiplePartitionsExist;                  // offset: 0x34 (52)
};

// 0x4fc0 (20416) bytes
struct _MI_SYSTEM_INFORMATION {
  struct _MI_POOL_STATE Pools;                // offset: 0x0 (0)
  struct _MI_SECTION_STATE Sections;          // offset: 0x500 (1280)
  struct _MI_SYSTEM_IMAGE_STATE SystemImages; // offset: 0x640 (1600)
  struct _MI_SESSION_STATE Sessions;          // offset: 0x6b0 (1712)
  struct _MI_PROCESS_STATE Processes;         // offset: 0x16f0 (5872)
  struct _MI_HARDWARE_STATE Hardware;         // offset: 0x1758 (5976)
  struct _MI_SYSTEM_VA_STATE SystemVa;        // offset: 0x1840 (6208)
  struct _MI_COMBINE_STATE PageCombines;      // offset: 0x3f80 (16256)
  struct _MI_PAGELIST_STATE PageLists;        // offset: 0x3f98 (16280)
  struct _MI_PARTITION_STATE Partitions;      // offset: 0x3fb0 (16304)
  struct _MI_SHUTDOWN_STATE Shutdowns;        // offset: 0x3fe8 (16360)
  struct _MI_ERROR_STATE Errors;              // offset: 0x4030 (16432)
  struct _MI_ACCESS_LOG_STATE AccessLog;      // offset: 0x4100 (16640)
  struct _MI_DEBUGGER_STATE Debugger;         // offset: 0x4180 (16768)
  struct _MI_STANDBY_STATE Standby;           // offset: 0x4210 (16912)
  struct _MI_SYSTEM_PTE_STATE SystemPtes;     // offset: 0x4280 (17024)
  struct _MI_IO_PAGE_STATE IoPages;           // offset: 0x4400 (17408)
  struct _MI_PAGING_IO_STATE PagingIo;        // offset: 0x4440 (17472)
  struct _MI_COMMON_PAGE_STATE CommonPages;   // offset: 0x4478 (17528)
  struct _MI_SYSTEM_TRIM_STATE Trims;         // offset: 0x44c0 (17600)
  ULONG Cookie;                               // offset: 0x4500 (17664)
  VOID *volatile *BootRegistryRuns;           // offset: 0x4504 (17668)
  volatile LONG ZeroingDisabled;              // offset: 0x4508 (17672)
  UCHAR FullyInitialized;                     // offset: 0x450c (17676)
  UCHAR SafeBooted;                           // offset: 0x450d (17677)
  struct _RTL_BITMAP PfnBitMap;               // offset: 0x4510 (17680)
  struct _TlgProvider_t *TraceLogging;        // offset: 0x4518 (17688)
  struct _MI_VISIBLE_STATE Vs;                // offset: 0x4540 (17728)
};

// 0xa8 (168) bytes
struct _MMPAGING_FILE {
  ULONG Size;                                    // offset: 0x0 (0)
  ULONG MaximumSize;                             // offset: 0x4 (4)
  ULONG MinimumSize;                             // offset: 0x8 (8)
  ULONG FreeSpace;                               // offset: 0xc (12)
  ULONG PeakUsage;                               // offset: 0x10 (16)
  ULONG HighestPage;                             // offset: 0x14 (20)
  ULONG FreeReservationSpace;                    // offset: 0x18 (24)
  struct _FILE_OBJECT *File;                     // offset: 0x1c (28)
  struct _MMMOD_WRITER_MDL_ENTRY *Entry[2];      // offset: 0x20 (32)
  union _SLIST_HEADER PfnsToFree;                // offset: 0x28 (40)
  struct _UNICODE_STRING PageFileName;           // offset: 0x30 (48)
  struct _MI_PAGING_FILE_SPACE_BITMAPS *Bitmaps; // offset: 0x38 (56)
  ULONG AllocationBitmapHint;                    // offset: 0x3c (60)
  ULONG LargestAllocationCluster;                // offset: 0x40 (64)
  ULONG RefreshAllocationCluster;                // offset: 0x44 (68)
  ULONG LastRefreshAllocationCluster;            // offset: 0x48 (72)
  ULONG ReservedClusterSizeAggregate;            // offset: 0x4c (76)
  ULONG MaximumRunLengthInBitmaps;               // offset: 0x50 (80)
  struct _RTL_RB_TREE BitmapsCacheLengthTree;    // offset: 0x54 (84)
  struct _RTL_RB_TREE BitmapsCacheLocationTree;  // offset: 0x5c (92)
  struct _LIST_ENTRY BitmapsCacheFreeList;       // offset: 0x64 (100)
  struct _MI_PAGEFILE_BITMAPS_CACHE_ENTRY
      *BitmapsCacheEntries; // offset: 0x6c (108)
  union {
    ULONG ToBeEvictedCount; // offset: 0x70 (112)
    ULONG HybridPriority;   // offset: 0x70 (112)
  };
  USHORT PageFileNumber : 4;                // offset: 0x74 (116)
  USHORT WsSwapPagefile : 1;                // offset: 0x74 (116)
  USHORT NoReservations : 1;                // offset: 0x74 (116)
  USHORT VirtualStorePagefile : 1;          // offset: 0x74 (116)
  USHORT SwapSupported : 1;                 // offset: 0x74 (116)
  USHORT NodeInserted : 1;                  // offset: 0x74 (116)
  USHORT StackNotified : 1;                 // offset: 0x74 (116)
  USHORT BackedBySCM : 1;                   // offset: 0x74 (116)
  USHORT Spare0 : 4;                        // offset: 0x74 (116)
  UCHAR AdriftMdls : 1;                     // offset: 0x76 (118)
  UCHAR Spare1 : 7;                         // offset: 0x76 (118)
  UCHAR IgnoreReservations : 1;             // offset: 0x77 (119)
  UCHAR Spare2 : 7;                         // offset: 0x77 (119)
  ULONG PageHashPages;                      // offset: 0x78 (120)
  ULONG PageHashPagesPeak;                  // offset: 0x7c (124)
  ULONG *PageHash;                          // offset: 0x80 (128)
  VOID *FileHandle;                         // offset: 0x84 (132)
  ULONG Lock;                               // offset: 0x88 (136)
  struct _ETHREAD *LockOwner;               // offset: 0x8c (140)
  struct _RTL_AVL_TREE FlowThroughReadRoot; // offset: 0x90 (144)
  struct _MI_PARTITION *Partition;          // offset: 0x94 (148)
  struct _RTL_BALANCED_NODE FileObjectNode; // offset: 0x98 (152)
};

// 0x1c (28) bytes
struct _MMINPAGE_SUPPORT_FLOW_THROUGH {
  ULONG Page[1];                                  // offset: 0x0 (0)
  struct _MMINPAGE_SUPPORT *InitialInPageSupport; // offset: 0x4 (4)
  struct _MMPAGING_FILE *PagingFile;              // offset: 0x8 (8)
  ULONG PageFileOffset;                           // offset: 0xc (12)
  struct _RTL_BALANCED_NODE Node;                 // offset: 0x10 (16)
};

// 0x100 (256) bytes
struct _MMINPAGE_SUPPORT {
  struct _LIST_ENTRY ListEntry;     // offset: 0x0 (0)
  struct _LIST_ENTRY ListHead;      // offset: 0x8 (8)
  struct _KEVENT Event;             // offset: 0x10 (16)
  struct _KEVENT CollidedEvent;     // offset: 0x20 (32)
  struct _IO_STATUS_BLOCK IoStatus; // offset: 0x30 (48)
  union _LARGE_INTEGER ReadOffset;  // offset: 0x38 (56)
  union {
    struct _KAPC_STATE ApcState;                // offset: 0x40 (64)
    struct _MI_HARD_FAULT_STATE HardFaultState; // offset: 0x40 (64)

  } u2;                          // offset: 0x40 (64)
  struct _ETHREAD *Thread;       // offset: 0x58 (88)
  struct _MMPFN *LockedProtoPfn; // offset: 0x5c (92)
  struct _MMPTE PteContents;     // offset: 0x60 (96)
  volatile LONG WaitCount;       // offset: 0x68 (104)
  ULONG ByteCount;               // offset: 0x6c (108)
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
  VOID *Autoboost;              // offset: 0x80 (128)
  VOID *FaultingAddress;        // offset: 0x84 (132)
  struct _MMPTE *PointerPte;    // offset: 0x88 (136)
  struct _MMPTE *BasePte;       // offset: 0x8c (140)
  struct _MMPFN *Pfn;           // offset: 0x90 (144)
  struct _MDL *PrefetchMdl;     // offset: 0x94 (148)
  volatile LONGLONG ProbeCount; // offset: 0x98 (152)
  struct _MDL Mdl;              // offset: 0xa0 (160)
  union {
    ULONG Page[16];                                    // offset: 0xbc (188)
    struct _MMINPAGE_SUPPORT_FLOW_THROUGH FlowThrough; // offset: 0xbc (188)
  };
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

// 0x10 (16) bytes
struct _MMCLONE_HEADER {
  ULONG NumberOfPtes;                       // offset: 0x0 (0)
  volatile ULONG NumberOfProcessReferences; // offset: 0x4 (4)
  struct _MMCLONE_BLOCK *ClonePtes;         // offset: 0x8 (8)
  struct _MI_PARTITION *Partition;          // offset: 0xc (12)
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
  struct _SINGLE_LIST_ENTRY DeleteList;      // offset: 0x24 (36)
  ULONGLONG NestingLevel;                    // offset: 0x28 (40)
};

// 0x1000 (4096) bytes
struct _TEB {
  struct _NT_TIB NtTib;                              // offset: 0x0 (0)
  VOID *EnvironmentPointer;                          // offset: 0x1c (28)
  struct _CLIENT_ID ClientId;                        // offset: 0x20 (32)
  VOID *ActiveRpcHandle;                             // offset: 0x28 (40)
  VOID *ThreadLocalStoragePointer;                   // offset: 0x2c (44)
  struct _PEB *ProcessEnvironmentBlock;              // offset: 0x30 (48)
  ULONG LastErrorValue;                              // offset: 0x34 (52)
  ULONG CountOfOwnedCriticalSections;                // offset: 0x38 (56)
  VOID *CsrClientThread;                             // offset: 0x3c (60)
  VOID *Win32ThreadInfo;                             // offset: 0x40 (64)
  ULONG User32Reserved[26];                          // offset: 0x44 (68)
  ULONG UserReserved[5];                             // offset: 0xac (172)
  VOID *WOW32Reserved;                               // offset: 0xc0 (192)
  ULONG CurrentLocale;                               // offset: 0xc4 (196)
  ULONG FpSoftwareStatusRegister;                    // offset: 0xc8 (200)
  VOID *ReservedForDebuggerInstrumentation[16];      // offset: 0xcc (204)
  VOID *SystemReserved1[26];                         // offset: 0x10c (268)
  CHAR PlaceholderCompatibilityMode;                 // offset: 0x174 (372)
  CHAR PlaceholderReserved[11];                      // offset: 0x175 (373)
  ULONG ProxiedProcessId;                            // offset: 0x180 (384)
  struct _ACTIVATION_CONTEXT_STACK _ActivationStack; // offset: 0x184 (388)
  UCHAR WorkingOnBehalfTicket[8];                    // offset: 0x19c (412)
  LONG ExceptionCode;                                // offset: 0x1a4 (420)
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
      USHORT SkipLoaderInit : 1;       // offset: 0xfca (4042)
      USHORT SpareSameTebBits : 1;     // offset: 0xfca (4042)
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
  ULONGLONG EnabledFeatures;         // offset: 0x0 (0)
  ULONGLONG EnabledVolatileFeatures; // offset: 0x8 (8)
  ULONG Size;                        // offset: 0x10 (16)
  union {
    ULONG ControlFlags; // offset: 0x14 (20)
    struct {
      ULONG OptimizedSave : 1;     // offset: 0x14 (20)
      ULONG CompactionEnabled : 1; // offset: 0x14 (20)
    };
  };
  struct _XSTATE_FEATURE Features[64]; // offset: 0x18 (24)
  ULONGLONG EnabledSupervisorFeatures; // offset: 0x218 (536)
  ULONGLONG AlignedFeatures;           // offset: 0x220 (544)
  ULONG AllFeatureSize;                // offset: 0x228 (552)
  ULONG AllFeatures[64];               // offset: 0x22c (556)
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

// 0x138 (312) bytes
struct _POP_HIBER_CONTEXT {
  UCHAR Reset;                               // offset: 0x0 (0)
  UCHAR HiberFlags;                          // offset: 0x1 (1)
  UCHAR WroteHiberFile;                      // offset: 0x2 (2)
  UCHAR KernelPhaseVerificationActive;       // offset: 0x3 (3)
  volatile UCHAR InitializationFinished;     // offset: 0x4 (4)
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
  struct _MDL *FirmwareRuntimeInformationMdl;          // offset: 0x94 (148)
  VOID *FirmwareRuntimeInformationVa;                  // offset: 0x98 (152)
  VOID *ResumeContext;                                 // offset: 0x9c (156)
  ULONG ResumeContextPages;                            // offset: 0xa0 (160)
  ULONG ProcessorCount;                                // offset: 0xa4 (164)
  struct _POP_PER_PROCESSOR_CONTEXT *ProcessorContext; // offset: 0xa8 (168)
  CHAR *ProdConsBuffer;                                // offset: 0xac (172)
  ULONG ProdConsSize;                                  // offset: 0xb0 (176)
  ULONG MaxDataPages;                                  // offset: 0xb4 (180)
  VOID *ExtraBuffer;                                   // offset: 0xb8 (184)
  ULONG ExtraBufferSize;                               // offset: 0xbc (188)
  VOID *ExtraMapVa;                                    // offset: 0xc0 (192)
  ULONG BitlockerKeyPFN;                               // offset: 0xc4 (196)
  struct _POP_IO_INFO IoInfo;                          // offset: 0xc8 (200)
  USHORT *IoChecksums;                                 // offset: 0x128 (296)
  ULONG IoChecksumsSize;                               // offset: 0x12c (300)
  ULONG HardwareConfigurationSignature;                // offset: 0x130 (304)
  UCHAR SecureBoot;                                    // offset: 0x134 (308)
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
  struct _POP_DEVICE_SYS_STATE *DevState;          // offset: 0x34 (52)
  struct _POP_HIBER_CONTEXT *HiberContext;         // offset: 0x38 (56)
  ULONGLONG WakeTime;                              // offset: 0x40 (64)
  ULONGLONG SleepTime;                             // offset: 0x48 (72)
  ULONGLONG WakeFirstUnattendedTime;               // offset: 0x50 (80)
  enum SYSTEM_POWER_CONDITION WakeAlarmSignaled;   // offset: 0x58 (88)
  struct {
    ULONGLONG RequestedTime;                             // offset: 0x0 (0)
    ULONGLONG ProgrammedTime;                            // offset: 0x8 (8)
    struct _DIAGNOSTIC_BUFFER *TimerInfo;                // offset: 0x10 (16)
  } WakeAlarm[3];                                        // offset: 0x60 (96)
  UCHAR WakeAlarmPaused;                                 // offset: 0xa8 (168)
  ULONGLONG WakeAlarmLastTime;                           // offset: 0xb0 (176)
  ULONGLONG DozeDeferralStartTime;                       // offset: 0xb8 (184)
  struct SYSTEM_POWER_CAPABILITIES FilteredCapabilities; // offset: 0xc0 (192)
};

// 0x58 (88) bytes
struct _KTIMER2 {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 (0)
  union {
    struct _RTL_BALANCED_NODE RbNodes[2]; // offset: 0x10 (16)
    struct _LIST_ENTRY ListEntry;         // offset: 0x10 (16)
  };
  ULONGLONG DueTime[2];                                // offset: 0x28 (40)
  LONGLONG Period;                                     // offset: 0x38 (56)
  VOID (*Callback)(struct _KTIMER2 *arg1, VOID *arg2); // offset: 0x40 (64)
  VOID *CallbackContext;                               // offset: 0x44 (68)
  VOID (*DisableCallback)(VOID *arg1);                 // offset: 0x48 (72)
  VOID *DisableContext;                                // offset: 0x4c (76)
  UCHAR AbsoluteSystemTime;                            // offset: 0x50 (80)
  union {
    UCHAR TypeFlags; // offset: 0x51 (81)
    struct {
      UCHAR Unused : 1;         // offset: 0x51 (81)
      UCHAR IdleResilient : 1;  // offset: 0x51 (81)
      UCHAR HighResolution : 1; // offset: 0x51 (81)
      UCHAR NoWake : 1;         // offset: 0x51 (81)
      UCHAR Unused1 : 4;        // offset: 0x51 (81)
    };
  };
  UCHAR CollectionIndex[2]; // offset: 0x52 (82)
};

// 0xb8 (184) bytes
struct _EX_WORK_QUEUE_MANAGER {
  struct _EX_PARTITION *Partition; // offset: 0x0 (0)
  struct _ENODE *Node;             // offset: 0x4 (4)
  struct _KEVENT Event;            // offset: 0x8 (8)
  struct _KTIMER DeadlockTimer;    // offset: 0x18 (24)
  struct _KEVENT ReaperEvent;      // offset: 0x40 (64)
  struct _KTIMER2 ReaperTimer;     // offset: 0x50 (80)
  VOID *ThreadHandle;              // offset: 0xa8 (168)
  volatile ULONG ExitThread;       // offset: 0xac (172)
  ULONG ThreadSeed;                // offset: 0xb0 (176)
};

// 0x10 (16) bytes
struct _EX_PARTITION {
  struct _EPARTITION *PartitionObject;               // offset: 0x0 (0)
  struct _EX_WORK_QUEUE **volatile *WorkQueues;      // offset: 0x4 (4)
  struct _EX_WORK_QUEUE_MANAGER **WorkQueueManagers; // offset: 0x8 (8)
  volatile LONG QueueAllocationMask;                 // offset: 0xc (12)
};

// 0x2e8 (744) bytes
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
  ULONGLONG LastPassiveTime;                              // offset: 0x40 (64)
  ULONG SampleRate;                                       // offset: 0x48 (72)
  ULONG LastTemp;                                         // offset: 0x4c (76)
  struct _THERMAL_INFORMATION_EX Info;                    // offset: 0x50 (80)
  struct _THERMAL_POLICY Policy;                          // offset: 0xac (172)
  UCHAR PolicyDriver;                                     // offset: 0xc4 (196)
  ULONG PollingRate;                                      // offset: 0xc8 (200)
  ULONGLONG LastTemperatureTime;                          // offset: 0xd0 (208)
  ULONGLONG LastActiveStartTime;                          // offset: 0xd8 (216)
  ULONGLONG LastPassiveStartTime;                         // offset: 0xe0 (224)
  struct _WORK_QUEUE_ITEM WorkItem;                       // offset: 0xe8 (232)
  struct _KTIMER2 ZoneUpdateTimer;                        // offset: 0xf8 (248)
  struct _POP_RW_LOCK Lock;                               // offset: 0x150 (336)
  struct _KEVENT ZoneStopped;                             // offset: 0x158 (344)
  struct _KEVENT TemperatureUpdated;                      // offset: 0x168 (360)
  ULONG InstanceId;                                       // offset: 0x178 (376)
  struct _POP_THERMAL_TELEMETRY_TRACKER TelemetryTracker; // offset: 0x180 (384)
  struct _UNICODE_STRING Description;                     // offset: 0x2e0 (736)
};

// 0x10 (16) bytes
struct _TRUSTLET_COLLABORATION_ID {
  ULONGLONG Value[2]; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _TRUSTLET_MAILBOX_KEY {
  ULONGLONG SecretValue[2]; // offset: 0x0 (0)
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

// 0x30 (48) bytes
struct _ETW_FILTER_HEADER {
  LONG FilterFlags;                                        // offset: 0x0 (0)
  struct _ETW_FILTER_PID *PidFilter;                       // offset: 0x4 (4)
  struct _ETW_FILTER_STRING_TOKEN *ExeFilter;              // offset: 0x8 (8)
  struct _ETW_FILTER_STRING_TOKEN *PkgIdFilter;            // offset: 0xc (12)
  struct _ETW_FILTER_STRING_TOKEN *PkgAppIdFilter;         // offset: 0x10 (16)
  struct _ETW_PERFECT_HASH_FUNCTION *StackWalkIdFilter;    // offset: 0x14 (20)
  struct _ETW_FILTER_EVENT_NAME_DATA *StackWalkNameFilter; // offset: 0x18 (24)
  struct _EVENT_FILTER_LEVEL_KW *StackWalkLevelKwFilter;   // offset: 0x1c (28)
  struct _ETW_PERFECT_HASH_FUNCTION *EventIdFilter;        // offset: 0x20 (32)
  struct _ETW_PAYLOAD_FILTER *PayloadFilter;               // offset: 0x24 (36)
  struct _EVENT_FILTER_HEADER *ProviderSideFilter;         // offset: 0x28 (40)
  struct _ETW_FILTER_EVENT_NAME_DATA *EventNameFilter;     // offset: 0x2c (44)
};

// 0x168 (360) bytes
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
  struct _ETW_SILODRIVERSTATE *SiloState;       // offset: 0x15c (348)
  struct _EX_PUSH_LOCK Lock;                    // offset: 0x160 (352)
  struct _ETHREAD *LockOwner;                   // offset: 0x164 (356)
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
    USHORT Flags; // offset: 0x32 (50)
    struct {
      USHORT DbgKernelRegistration : 1;       // offset: 0x32 (50)
      USHORT DbgUserRegistration : 1;         // offset: 0x32 (50)
      USHORT DbgReplyRegistration : 1;        // offset: 0x32 (50)
      USHORT DbgClassicRegistration : 1;      // offset: 0x32 (50)
      USHORT DbgSessionSpaceRegistration : 1; // offset: 0x32 (50)
      USHORT DbgModernRegistration : 1;       // offset: 0x32 (50)
      USHORT DbgClosed : 1;                   // offset: 0x32 (50)
      USHORT DbgInserted : 1;                 // offset: 0x32 (50)
      USHORT DbgWow64 : 1;                    // offset: 0x32 (50)
      USHORT DbgUseDescriptorType : 1;        // offset: 0x32 (50)
      USHORT DbgDropProviderTraits : 1;       // offset: 0x32 (50)
    };
  };
  UCHAR EnableMask;                    // offset: 0x34 (52)
  UCHAR GroupEnableMask;               // offset: 0x35 (53)
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

// 0xa70 (2672) bytes
struct _ETW_SILODRIVERSTATE {
  struct _EJOB *Silo;                                     // offset: 0x0 (0)
  struct _ESERVERSILO_GLOBALS *SiloGlobals;               // offset: 0x4 (4)
  ULONG MaxLoggers;                                       // offset: 0x8 (8)
  struct _ETW_GUID_ENTRY EtwpSecurityProviderGuidEntry;   // offset: 0x10 (16)
  struct _EX_RUNDOWN_REF_CACHE_AWARE **EtwpLoggerRundown; // offset: 0x178 (376)
  struct _WMI_LOGGER_CONTEXT **EtwpLoggerContext;         // offset: 0x17c (380)
  struct _ETW_HASH_BUCKET EtwpGuidHashTable[64];          // offset: 0x180 (384)
  USHORT EtwpSecurityLoggers[8];        // offset: 0x880 (2176)
  UCHAR EtwpSecurityProviderEnableMask; // offset: 0x890 (2192)
  LONG EtwpShutdownInProgress;          // offset: 0x894 (2196)
  ULONG EtwpSecurityProviderPID;        // offset: 0x898 (2200)
  struct _ETW_PRIV_HANDLE_DEMUX_TABLE
      PrivHandleDemuxTable;                        // offset: 0x89c (2204)
  struct _ETW_COUNTERS EtwpCounters;               // offset: 0x8ac (2220)
  union _LARGE_INTEGER LogfileBytesWritten;        // offset: 0x8c0 (2240)
  struct _ETW_SILO_TRACING_BLOCK *ProcessorBlocks; // offset: 0x8c8 (2248)
  struct _EX_WNF_SUBSCRIPTION
      *ContainerRestoreWnfSubscription;   // offset: 0x8cc (2252)
  struct _GUID PartitionId;               // offset: 0x8d0 (2256)
  struct _GUID ParentId;                  // offset: 0x8e0 (2272)
  union _LARGE_INTEGER QpcOffsetFromRoot; // offset: 0x8f0 (2288)
  ULONG PartitionType;                    // offset: 0x8f8 (2296)
  struct _ETW_SYSTEM_LOGGER_SETTINGS
      SystemLoggerSettings; // offset: 0x8fc (2300)
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

// 0x118 (280) bytes
struct _PROC_PERF_CHECK {
  ULONGLONG LastActive;                           // offset: 0x0 (0)
  ULONGLONG LastTime;                             // offset: 0x8 (8)
  ULONGLONG LastStall;                            // offset: 0x10 (16)
  struct _PROC_PERF_CHECK_SNAP LastPerfCheckSnap; // offset: 0x18 (24)
  struct _PROC_PERF_CHECK_SNAP CurrentSnap;       // offset: 0x68 (104)
  struct _PROC_PERF_CHECK_SNAP LastDeliveredSnap; // offset: 0xb8 (184)
  ULONG LastDeliveredPerformance;                 // offset: 0x108 (264)
  ULONG LastDeliveredFrequency;                   // offset: 0x10c (268)
  UCHAR TaggedThreadPercent[2];                   // offset: 0x110 (272)
  UCHAR Class0FloorPerfSelection;                 // offset: 0x112 (274)
  UCHAR Class1MinimumPerfSelection;               // offset: 0x113 (275)
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
  UCHAR CounterDiscardsIdleTime;              // offset: 0x81 (129)
};

// 0x1a8 (424) bytes
struct _PROCESSOR_POWER_STATE {
  struct _PPM_IDLE_STATES *IdleStates;          // offset: 0x0 (0)
  struct _PROC_IDLE_ACCOUNTING *IdleAccounting; // offset: 0x4 (4)
  ULONGLONG IdleTimeLast;                       // offset: 0x8 (8)
  ULONGLONG IdleTimeTotal;                      // offset: 0x10 (16)
  volatile ULONGLONG IdleTimeEntry;             // offset: 0x18 (24)
  ULONGLONG IdleTimeExpiration;                 // offset: 0x20 (32)
  UCHAR NonInterruptibleTransition;             // offset: 0x28 (40)
  UCHAR PepWokenTransition;                     // offset: 0x29 (41)
  UCHAR EfficiencyClass;                        // offset: 0x2a (42)
  UCHAR SchedulingClass;                        // offset: 0x2b (43)
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
      FFHThrottleStateInfo;                             // offset: 0xd8 (216)
  struct _KDPC PerfActionDpc;                           // offset: 0xf8 (248)
  volatile LONG PerfActionMask;                         // offset: 0x118 (280)
  struct _PROC_IDLE_SNAP HvIdleCheck;                   // offset: 0x120 (288)
  struct _PROC_PERF_CHECK *PerfCheck;                   // offset: 0x130 (304)
  struct _PROC_PERF_DOMAIN *Domain;                     // offset: 0x134 (308)
  struct _PROC_PERF_CONSTRAINT *PerfConstraint;         // offset: 0x138 (312)
  struct _PPM_CONCURRENCY_ACCOUNTING *Concurrency;      // offset: 0x13c (316)
  struct _PPM_CONCURRENCY_ACCOUNTING *ClassConcurrency; // offset: 0x140 (320)
  struct _PROC_PERF_LOAD *Load;                         // offset: 0x144 (324)
  struct _PROC_PERF_HISTORY *PerfHistory;               // offset: 0x148 (328)
  UCHAR GuaranteedPerformancePercent;                   // offset: 0x14c (332)
  UCHAR HvTargetState;                                  // offset: 0x14d (333)
  UCHAR Parked;                                         // offset: 0x14e (334)
  UCHAR LongPriorQosPeriod;                             // offset: 0x14f (335)
  ULONG LatestPerformancePercent;                       // offset: 0x150 (336)
  ULONG AveragePerformancePercent;                      // offset: 0x154 (340)
  ULONG LatestAffinitizedPercent;                       // offset: 0x158 (344)
  ULONG RelativePerformance;                            // offset: 0x15c (348)
  ULONG Utility;                                        // offset: 0x160 (352)
  ULONG AffinitizedUtility;                             // offset: 0x164 (356)
  union {
    ULONGLONG SnapTimeLast;   // offset: 0x168 (360)
    ULONGLONG EnergyConsumed; // offset: 0x168 (360)
  };
  ULONGLONG ActiveTime;                    // offset: 0x170 (368)
  ULONGLONG TotalTime;                     // offset: 0x178 (376)
  struct _POP_FX_DEVICE *FxDevice;         // offset: 0x180 (384)
  ULONGLONG LastQosTranstionTsc;           // offset: 0x188 (392)
  ULONGLONG QosTransitionHysteresis;       // offset: 0x190 (400)
  enum _KHETERO_CPU_QOS RequestedQosClass; // offset: 0x198 (408)
  enum _KHETERO_CPU_QOS ResolvedQosClass;  // offset: 0x19c (412)
  ULONG QosEquivalencyMask;                // offset: 0x1a0 (416)
};

// 0x110 (272) bytes
struct _PROCESS_ENERGY_VALUES {
  ULONGLONG Cycles[4][2];      // offset: 0x0 (0)
  ULONGLONG DiskEnergy;        // offset: 0x40 (64)
  ULONGLONG NetworkTailEnergy; // offset: 0x48 (72)
  ULONGLONG MBBTailEnergy;     // offset: 0x50 (80)
  ULONGLONG NetworkTxRxBytes;  // offset: 0x58 (88)
  ULONGLONG MBBTxRxBytes;      // offset: 0x60 (96)
  union {
    union _ENERGY_STATE_DURATION Durations[3]; // offset: 0x68 (104)
    struct {
      union _ENERGY_STATE_DURATION ForegroundDuration;     // offset: 0x68 (104)
      union _ENERGY_STATE_DURATION DesktopVisibleDuration; // offset: 0x70 (112)
      union _ENERGY_STATE_DURATION PSMForegroundDuration;  // offset: 0x78 (120)
    };
  };
  ULONG CompositionRendered;          // offset: 0x80 (128)
  ULONG CompositionDirtyGenerated;    // offset: 0x84 (132)
  ULONG CompositionDirtyPropagated;   // offset: 0x88 (136)
  ULONG Reserved1;                    // offset: 0x8c (140)
  ULONGLONG AttributedCycles[4][2];   // offset: 0x90 (144)
  ULONGLONG WorkOnBehalfCycles[4][2]; // offset: 0xd0 (208)
};

// 0x1b0 (432) bytes
struct _PROCESS_EXTENDED_ENERGY_VALUES {
  struct _PROCESS_ENERGY_VALUES Base;                // offset: 0x0 (0)
  struct _PROCESS_ENERGY_VALUES_EXTENSION Extension; // offset: 0x110 (272)
};

// 0x3a0 (928) bytes
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
  struct _EJOB *EffectiveNetIoRateLimitJob;              // offset: 0x184 (388)
  struct _EJOB *EffectiveHeapAttributionJob;             // offset: 0x188 (392)
  ULONG EffectiveLimitFlags;                             // offset: 0x18c (396)
  ULONG EffectiveSchedulingClass;                        // offset: 0x190 (400)
  ULONG EffectiveFreezeCount;                            // offset: 0x194 (404)
  ULONG EffectiveBackgroundCount;                        // offset: 0x198 (408)
  ULONG EffectiveSwapCount;                              // offset: 0x19c (412)
  ULONG EffectiveNotificationLimitCount;                 // offset: 0x1a0 (416)
  UCHAR EffectivePriorityClass;                          // offset: 0x1a4 (420)
  UCHAR PriorityClass;                                   // offset: 0x1a5 (421)
  UCHAR NestingDepth;                                    // offset: 0x1a6 (422)
  UCHAR Reserved1[1];                                    // offset: 0x1a7 (423)
  ULONG CompletionFilter;                                // offset: 0x1a8 (424)
  union {
    struct _WNF_STATE_NAME WakeChannel;       // offset: 0x1b0 (432)
    struct _PS_JOB_WAKE_INFORMATION WakeInfo; // offset: 0x1b0 (432)
  };
  struct _JOBOBJECT_WAKE_FILTER WakeFilter;               // offset: 0x1f8 (504)
  ULONG LowEdgeLatchFilter;                               // offset: 0x200 (512)
  struct _EJOB *NotificationLink;                         // offset: 0x204 (516)
  ULONGLONG CurrentJobMemoryUsed;                         // offset: 0x208 (520)
  struct _JOB_NOTIFICATION_INFORMATION *NotificationInfo; // offset: 0x210 (528)
  VOID *NotificationInfoQuotaReference;                   // offset: 0x214 (532)
  struct _IO_MINI_COMPLETION_PACKET_USER
      *NotificationPacket;                      // offset: 0x218 (536)
  struct _JOB_CPU_RATE_CONTROL *CpuRateControl; // offset: 0x21c (540)
  VOID *EffectiveSchedulingGroup;               // offset: 0x220 (544)
  ULONGLONG ReadyTime;                          // offset: 0x228 (552)
  struct _EX_PUSH_LOCK MemoryLimitsLock;        // offset: 0x230 (560)
  struct _LIST_ENTRY SiblingJobLinks;           // offset: 0x234 (564)
  struct _LIST_ENTRY ChildJobListHead;          // offset: 0x23c (572)
  struct _EJOB *ParentJob;                      // offset: 0x244 (580)
  struct _EJOB *volatile RootJob;               // offset: 0x248 (584)
  struct _LIST_ENTRY IteratorListHead;          // offset: 0x24c (588)
  ULONG AncestorCount;                          // offset: 0x254 (596)
  union {
    struct _EJOB **Ancestors; // offset: 0x258 (600)
    VOID *SessionObject;      // offset: 0x258 (600)
  };
  struct _EPROCESS_VALUES Accounting;             // offset: 0x260 (608)
  ULONG ShadowActiveProcessCount;                 // offset: 0x2b8 (696)
  ULONG ActiveAuxiliaryProcessCount;              // offset: 0x2bc (700)
  ULONG SequenceNumber;                           // offset: 0x2c0 (704)
  ULONG JobId;                                    // offset: 0x2c4 (708)
  struct _GUID ContainerId;                       // offset: 0x2c8 (712)
  struct _GUID ContainerTelemetryId;              // offset: 0x2d8 (728)
  struct _ESERVERSILO_GLOBALS *ServerSiloGlobals; // offset: 0x2e8 (744)
  struct _PS_PROPERTY_SET PropertySet;            // offset: 0x2ec (748)
  struct _PSP_STORAGE *Storage;                   // offset: 0x2f8 (760)
  struct _JOB_NET_RATE_CONTROL *NetRateControl;   // offset: 0x2fc (764)
  union {
    ULONG JobFlags; // offset: 0x300 (768)
    struct {
      ULONG CloseDone : 1;                     // offset: 0x300 (768)
      ULONG MultiGroup : 1;                    // offset: 0x300 (768)
      ULONG OutstandingNotification : 1;       // offset: 0x300 (768)
      ULONG NotificationInProgress : 1;        // offset: 0x300 (768)
      ULONG UILimits : 1;                      // offset: 0x300 (768)
      ULONG CpuRateControlActive : 1;          // offset: 0x300 (768)
      ULONG OwnCpuRateControl : 1;             // offset: 0x300 (768)
      ULONG Terminating : 1;                   // offset: 0x300 (768)
      ULONG WorkingSetLock : 1;                // offset: 0x300 (768)
      ULONG JobFrozen : 1;                     // offset: 0x300 (768)
      ULONG Background : 1;                    // offset: 0x300 (768)
      ULONG WakeNotificationAllocated : 1;     // offset: 0x300 (768)
      ULONG WakeNotificationEnabled : 1;       // offset: 0x300 (768)
      ULONG WakeNotificationPending : 1;       // offset: 0x300 (768)
      ULONG LimitNotificationRequired : 1;     // offset: 0x300 (768)
      ULONG ZeroCountNotificationRequired : 1; // offset: 0x300 (768)
      ULONG CycleTimeNotificationRequired : 1; // offset: 0x300 (768)
      ULONG CycleTimeNotificationPending : 1;  // offset: 0x300 (768)
      ULONG TimersVirtualized : 1;             // offset: 0x300 (768)
      ULONG JobSwapped : 1;                    // offset: 0x300 (768)
      ULONG ViolationDetected : 1;             // offset: 0x300 (768)
      ULONG EmptyJobNotified : 1;              // offset: 0x300 (768)
      ULONG NoSystemCharge : 1;                // offset: 0x300 (768)
      ULONG DropNoWakeCharges : 1;             // offset: 0x300 (768)
      ULONG NoWakeChargePolicyDecided : 1;     // offset: 0x300 (768)
      ULONG NetRateControlActive : 1;          // offset: 0x300 (768)
      ULONG OwnNetRateControl : 1;             // offset: 0x300 (768)
      ULONG IoRateControlActive : 1;           // offset: 0x300 (768)
      ULONG OwnIoRateControl : 1;              // offset: 0x300 (768)
      ULONG DisallowNewProcesses : 1;          // offset: 0x300 (768)
      ULONG Silo : 1;                          // offset: 0x300 (768)
      ULONG ContainerTelemetryIdSet : 1;       // offset: 0x300 (768)
    };
  };
  union {
    ULONG JobFlags2; // offset: 0x304 (772)
    struct {
      ULONG ParentLocked : 1;                            // offset: 0x304 (772)
      ULONG EnableUsermodeSiloThreadImpersonation : 1;   // offset: 0x304 (772)
      ULONG DisallowUsermodeSiloThreadImpersonation : 1; // offset: 0x304 (772)
    };
  };
  struct _PROCESS_EXTENDED_ENERGY_VALUES *EnergyValues; // offset: 0x308 (776)
  volatile ULONG SharedCommitCharge;                    // offset: 0x30c (780)
  ULONG DiskIoAttributionUserRefCount;                  // offset: 0x310 (784)
  ULONG DiskIoAttributionRefCount;                      // offset: 0x314 (788)
  union {
    VOID *DiskIoAttributionContext;          // offset: 0x318 (792)
    struct _EJOB *DiskIoAttributionOwnerJob; // offset: 0x318 (792)
  };
  struct _JOB_RATE_CONTROL_HEADER IoRateControlHeader; // offset: 0x31c (796)
  struct _PS_IO_CONTROL_ENTRY GlobalIoControl;         // offset: 0x330 (816)
  volatile LONG IoControlStateLock;                    // offset: 0x34c (844)
  struct _RTL_RB_TREE VolumeIoControlTree;             // offset: 0x350 (848)
  ULONGLONG IoRateOverQuotaHistory;                    // offset: 0x358 (856)
  ULONG IoRateCurrentGeneration;                       // offset: 0x360 (864)
  ULONG IoRateLastQueryGeneration;                     // offset: 0x364 (868)
  ULONG IoRateGenerationLength;                        // offset: 0x368 (872)
  ULONG IoRateOverQuotaNotifySequenceId;               // offset: 0x36c (876)
  ULONGLONG LastThrottledIoTime;                       // offset: 0x370 (880)
  struct _EX_PUSH_LOCK IoControlLock;                  // offset: 0x378 (888)
  ULONG SiloHardReferenceCount;                        // offset: 0x37c (892)
  struct _WORK_QUEUE_ITEM RundownWorkItem;             // offset: 0x380 (896)
  VOID *PartitionObject;                               // offset: 0x390 (912)
  struct _EJOB *PartitionOwnerJob;                     // offset: 0x394 (916)
  union _JOBOBJECT_ENERGY_TRACKING_STATE
      EnergyTrackingState; // offset: 0x398 (920)
};

// 0xc8 (200) bytes
struct _THREAD_ENERGY_VALUES {
  ULONGLONG Cycles[4][2];             // offset: 0x0 (0)
  ULONGLONG AttributedCycles[4][2];   // offset: 0x40 (64)
  ULONGLONG WorkOnBehalfCycles[4][2]; // offset: 0x80 (128)
  union _TIMELINE_BITMAP CpuTimeline; // offset: 0xc0 (192)
};

// 0x5f00 (24320) bytes
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
  UCHAR TbFlushListActive;                       // offset: 0x4c3 (1219)
  VOID *volatile CachedStack;                    // offset: 0x4c4 (1220)
  ULONG NodeShiftedColor;                        // offset: 0x4c8 (1224)
  ULONG SecondaryColorMask;                      // offset: 0x4cc (1228)
  ULONG DpcTimeLimit;                            // offset: 0x4d0 (1232)
  VOID *MmFlushList;                             // offset: 0x4d4 (1236)
  union _KPRCBFLAG PrcbFlags;                    // offset: 0x4d8 (1240)
  VOID *SchedulerAssist;                         // offset: 0x4dc (1244)
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
  VOID(*volatileWorkerRoutine)
  (VOID *arg1, VOID *arg2, VOID *arg3, VOID *arg4); // offset: 0x2170 (8560)
  volatile ULONG IpiFrozen;                         // offset: 0x2174 (8564)
  UCHAR PrcbPad4[40];                               // offset: 0x2178 (8568)
  volatile ULONG RequestSummary;                    // offset: 0x21a0 (8608)
  volatile LONG TargetCount;                        // offset: 0x21a4 (8612)
  ULONGLONG LastNonHrTimerExpiration;               // offset: 0x21a8 (8616)
  ULONGLONG TrappedSecurityDomain;                  // offset: 0x21b0 (8624)
  union {
    USHORT BpbState; // offset: 0x21b8 (8632)
    struct {
      USHORT BpbIbrsPresent : 1;         // offset: 0x21b8 (8632)
      USHORT BpbStibpPresent : 1;        // offset: 0x21b8 (8632)
      USHORT BpbSmepPresent : 1;         // offset: 0x21b8 (8632)
      USHORT BpbSimulateSpecCtrl : 1;    // offset: 0x21b8 (8632)
      USHORT BpbSimulateIbpb : 1;        // offset: 0x21b8 (8632)
      USHORT BpbIbpbPresent : 1;         // offset: 0x21b8 (8632)
      USHORT BpbCpuIdle : 1;             // offset: 0x21b8 (8632)
      USHORT BpbClearSpecCtrlOnIdle : 1; // offset: 0x21b8 (8632)
      USHORT BpbHTDisabled : 1;          // offset: 0x21b8 (8632)
      USHORT BpbUserToUserOnly : 1;      // offset: 0x21b8 (8632)
      USHORT BpbReserved : 6;            // offset: 0x21b8 (8632)
    };
  };
  UCHAR BpbSpecCtrlValue;          // offset: 0x21ba (8634)
  UCHAR BpbCtxSwapSetValue;        // offset: 0x21bb (8635)
  UCHAR PrcbPad50[20];             // offset: 0x21bc (8636)
  ULONG InterruptLastCount;        // offset: 0x21d0 (8656)
  ULONG InterruptRate;             // offset: 0x21d4 (8660)
  ULONG DeviceInterrupts;          // offset: 0x21d8 (8664)
  VOID *IsrDpcStats;               // offset: 0x21dc (8668)
  struct _KDPC_DATA DpcData[2];    // offset: 0x21e0 (8672)
  VOID *DpcStack;                  // offset: 0x2210 (8720)
  LONG MaximumDpcQueueDepth;       // offset: 0x2214 (8724)
  ULONG DpcRequestRate;            // offset: 0x2218 (8728)
  ULONG MinimumDpcRate;            // offset: 0x221c (8732)
  ULONG DpcLastCount;              // offset: 0x2220 (8736)
  ULONG PrcbLock;                  // offset: 0x2224 (8740)
  struct _KGATE DpcGate;           // offset: 0x2228 (8744)
  UCHAR IdleState;                 // offset: 0x2238 (8760)
  volatile UCHAR QuantumEnd;       // offset: 0x2239 (8761)
  volatile UCHAR DpcRoutineActive; // offset: 0x223a (8762)
  volatile UCHAR IdleSchedule;     // offset: 0x223b (8763)
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
  ULONG DpcWatchdogProfileCumulativeDpcThreshold;  // offset: 0x3ad4 (15060)
  ULONG QueueIndex;                                // offset: 0x3ad8 (15064)
  struct _SINGLE_LIST_ENTRY DeferredReadyListHead; // offset: 0x3adc (15068)
  ULONG ReadySummary;                              // offset: 0x3ae0 (15072)
  LONG AffinitizedSelectionMask;                   // offset: 0x3ae4 (15076)
  ULONG WaitLock;                                  // offset: 0x3ae8 (15080)
  struct _LIST_ENTRY WaitListHead;                 // offset: 0x3aec (15084)
  ULONG ScbOffset;                                 // offset: 0x3af4 (15092)
  ULONG ReadyThreadCount;                          // offset: 0x3af8 (15096)
  ULONGLONG StartCycles;                           // offset: 0x3b00 (15104)
  ULONGLONG TaggedCyclesStart;                     // offset: 0x3b08 (15112)
  ULONGLONG TaggedCycles[2];                       // offset: 0x3b10 (15120)
  ULONGLONG GenerationTarget;                      // offset: 0x3b20 (15136)
  volatile ULONGLONG CycleTime;                    // offset: 0x3b28 (15144)
  ULONGLONG AffinitizedCycles;                     // offset: 0x3b30 (15152)
  ULONGLONG ImportantCycles;                       // offset: 0x3b38 (15160)
  ULONGLONG UnimportantCycles;                     // offset: 0x3b40 (15168)
  ULONGLONG ReadyQueueExpectedRunTime;             // offset: 0x3b48 (15176)
  volatile ULONG HighCycleTime;                    // offset: 0x3b50 (15184)
  ULONGLONG Cycles[4][2];                          // offset: 0x3b58 (15192)
  ULONG PrcbPad71[2];                              // offset: 0x3b98 (15256)
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
  struct _KDPC ForceIdleDpc;                       // offset: 0x3ed8 (16088)
  ULONG PrcbPad91[14];                             // offset: 0x3ef8 (16120)
  ULONG DpcWatchdogProfileSingleDpcThreshold;      // offset: 0x3f30 (16176)
  struct _KDPC DpcWatchdogDpc;                     // offset: 0x3f34 (16180)
  struct _KTIMER DpcWatchdogTimer;                 // offset: 0x3f58 (16216)
  union _SLIST_HEADER HypercallPageList;           // offset: 0x3f80 (16256)
  VOID *HypercallCachedPages;                      // offset: 0x3f88 (16264)
  VOID *VirtualApicAssist;                         // offset: 0x3f8c (16268)
  ULONGLONG *StatisticsPage;                       // offset: 0x3f90 (16272)
  struct _CACHE_DESCRIPTOR Cache[5];               // offset: 0x3f94 (16276)
  ULONG CacheCount;                                // offset: 0x3fd0 (16336)
  struct _KAFFINITY_EX PackageProcessorSet;        // offset: 0x3fd4 (16340)
  ULONG SharedReadyQueueMask;                      // offset: 0x3fe0 (16352)
  struct _KSHARED_READY_QUEUE *SharedReadyQueue;   // offset: 0x3fe4 (16356)
  ULONG SharedQueueScanOwner;                      // offset: 0x3fe8 (16360)
  ULONG CoreProcessorSet;                          // offset: 0x3fec (16364)
  ULONG ScanSiblingMask;                           // offset: 0x3ff0 (16368)
  ULONG LLCMask;                                   // offset: 0x3ff4 (16372)
  ULONG CacheProcessorMask[5];                     // offset: 0x3ff8 (16376)
  ULONG ScanSiblingIndex;                          // offset: 0x400c (16396)
  VOID *WheaInfo;                                  // offset: 0x4010 (16400)
  VOID *EtwSupport;                                // offset: 0x4014 (16404)
  union _SLIST_HEADER InterruptObjectPool;         // offset: 0x4018 (16408)
  VOID **DpcWatchdogProfile;                       // offset: 0x4020 (16416)
  VOID **DpcWatchdogProfileCurrentEmptyCapture;    // offset: 0x4024 (16420)
  ULONG PrcbPad92[1];                              // offset: 0x4028 (16424)
  ULONG PteBitCache;                               // offset: 0x402c (16428)
  ULONG PteBitOffset;                              // offset: 0x4030 (16432)
  ULONG PrcbPad93;                                 // offset: 0x4034 (16436)
  struct _PROCESSOR_PROFILE_CONTROL_AREA
      *ProcessorProfileControlArea;                 // offset: 0x4038 (16440)
  VOID *ProfileEventIndexAddress;                   // offset: 0x403c (16444)
  struct _KDPC TimerExpirationDpc;                  // offset: 0x4040 (16448)
  struct _SYNCH_COUNTERS SynchCounters;             // offset: 0x4060 (16480)
  struct _FILESYSTEM_DISK_COUNTERS FsCounters;      // offset: 0x4118 (16664)
  struct _CONTEXT *Context;                         // offset: 0x4128 (16680)
  ULONG ContextFlagsInit;                           // offset: 0x412c (16684)
  struct _XSAVE_AREA *ExtendedState;                // offset: 0x4130 (16688)
  struct _KENTROPY_TIMING_STATE EntropyTimingState; // offset: 0x4134 (16692)
  VOID *IsrStack;                                   // offset: 0x425c (16988)
  struct _KINTERRUPT *VectorToInterruptObject[208]; // offset: 0x4260 (16992)
  struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;     // offset: 0x45a0 (17824)
  struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;  // offset: 0x45a4 (17828)
  struct _KDPC AbDpc;                               // offset: 0x45a8 (17832)
  struct _IOP_IRP_STACK_PROFILER
      IoIrpStackProfilerCurrent; // offset: 0x45c8 (17864)
  struct _IOP_IRP_STACK_PROFILER
      IoIrpStackProfilerPrevious; // offset: 0x461c (17948)
  struct _KTIMER_EXPIRATION_TRACE
      TimerExpirationTrace[16];                       // offset: 0x4670 (18032)
  ULONG TimerExpirationTraceCount;                    // offset: 0x4770 (18288)
  VOID *ExSaPageArray;                                // offset: 0x4774 (18292)
  struct _XSAVE_AREA_HEADER *ExtendedSupervisorState; // offset: 0x4778 (18296)
  ULONG PrcbPad100[9];                                // offset: 0x477c (18300)
  struct _KSHARED_READY_QUEUE LocalSharedReadyQueue;  // offset: 0x47a0 (18336)
  struct _REQUEST_MAILBOX *Mailbox;                   // offset: 0x48e0 (18656)
  UCHAR PrcbPad[1532];                                // offset: 0x48e4 (18660)
  ULONG KernelDirectoryTableBase;                     // offset: 0x4ee0 (20192)
  ULONG EspBaseShadow;                                // offset: 0x4ee4 (20196)
  ULONG UserEspShadow;                                // offset: 0x4ee8 (20200)
  ULONG ShadowFlags;                                  // offset: 0x4eec (20204)
  ULONG UserDS;                                       // offset: 0x4ef0 (20208)
  ULONG UserES;                                       // offset: 0x4ef4 (20212)
  ULONG UserFS;                                       // offset: 0x4ef8 (20216)
  VOID *EspIretd;                                     // offset: 0x4efc (20220)
  ULONG RestoreSegOption;                             // offset: 0x4f00 (20224)
  ULONG SavedEsi;                                     // offset: 0x4f04 (20228)
  ULONG DbgLogs[512];                                 // offset: 0x4f08 (20232)
  ULONG DbgCount;                                     // offset: 0x5708 (22280)
  ULONG PrcbPadRemaingPage[501];                      // offset: 0x570c (22284)
  struct _REQUEST_MAILBOX RequestMailbox[1];          // offset: 0x5ee0 (24288)
};

// 0x350 (848) bytes
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
      ULONG BamQosLevel : 2;                  // offset: 0x5c (92)
      ULONG AutoAlignment : 1;                // offset: 0x5c (92)
      ULONG DisableBoost : 1;                 // offset: 0x5c (92)
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
      ULONG TerminateRequestReason : 2;       // offset: 0x5c (92)
      ULONG ProcessStackCountDecremented : 1; // offset: 0x5c (92)
      ULONG RestrictedGuiThread : 1;          // offset: 0x5c (92)
      ULONG VpBackingThread : 1;              // offset: 0x5c (92)
      ULONG ThreadFlagsSpare : 1;             // offset: 0x5c (92)
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
  ULONG ReadyTime; // offset: 0x170 (368)
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
  UCHAR AbAllocationRegionCount;                  // offset: 0x1e6 (486)
  CHAR SystemPriority;                            // offset: 0x1e7 (487)
  struct _KLOCK_ENTRY LockEntries[6];             // offset: 0x1e8 (488)
  struct _SINGLE_LIST_ENTRY PropagateBoostsEntry; // offset: 0x308 (776)
  struct _SINGLE_LIST_ENTRY IoSelfBoostsEntry;    // offset: 0x30c (780)
  UCHAR PriorityFloorCounts[16];                  // offset: 0x310 (784)
  ULONG PriorityFloorSummary;                     // offset: 0x320 (800)
  volatile LONG AbCompletedIoBoostCount;          // offset: 0x324 (804)
  volatile LONG AbCompletedIoQoSBoostCount;       // offset: 0x328 (808)
  volatile SHORT KeReferenceCount;                // offset: 0x32c (812)
  UCHAR AbOrphanedEntrySummary;                   // offset: 0x32e (814)
  UCHAR AbOwnedEntryCount;                        // offset: 0x32f (815)
  ULONG ForegroundLossTime;                       // offset: 0x330 (816)
  union {
    struct _LIST_ENTRY GlobalForegroundListEntry; // offset: 0x334 (820)
    struct {
      struct _SINGLE_LIST_ENTRY
          ForegroundDpcStackListEntry; // offset: 0x334 (820)
      ULONG InGlobalForegroundList;    // offset: 0x338 (824)
    };
  };
  struct _KSCB *QueuedScb;         // offset: 0x33c (828)
  ULONGLONG NpxState;              // offset: 0x340 (832)
  volatile ULONG ThreadTimerDelay; // offset: 0x348 (840)
  union {
    volatile LONG ThreadFlags2; // offset: 0x34c (844)
    struct {
      ULONG PpmPolicy : 2;             // offset: 0x34c (844)
      ULONG ThreadFlags2Reserved : 30; // offset: 0x34c (844)
    };
  };
};

// 0x480 (1152) bytes
struct _ETHREAD {
  struct _KTHREAD Tcb;             // offset: 0x0 (0)
  union _LARGE_INTEGER CreateTime; // offset: 0x350 (848)
  union {
    union _LARGE_INTEGER ExitTime;     // offset: 0x358 (856)
    struct _LIST_ENTRY KeyedWaitChain; // offset: 0x358 (856)
  };
  VOID *ChargeOnlySession; // offset: 0x360 (864)
  union {
    struct _LIST_ENTRY PostBlockList; // offset: 0x364 (868)
    struct {
      VOID *ForwardLinkShadow; // offset: 0x364 (868)
      VOID *StartAddress;      // offset: 0x368 (872)
    };
  };
  union {
    struct _TERMINATION_PORT *TerminationPort; // offset: 0x36c (876)
    struct _ETHREAD *ReaperLink;               // offset: 0x36c (876)
    VOID *KeyedWaitValue;                      // offset: 0x36c (876)
  };
  ULONG ActiveTimerListLock;              // offset: 0x370 (880)
  struct _LIST_ENTRY ActiveTimerListHead; // offset: 0x374 (884)
  struct _CLIENT_ID Cid;                  // offset: 0x37c (892)
  union {
    struct _KSEMAPHORE KeyedWaitSemaphore; // offset: 0x384 (900)
    struct _KSEMAPHORE AlpcWaitSemaphore;  // offset: 0x384 (900)
  };
  union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity; // offset: 0x398 (920)
  struct _LIST_ENTRY IrpList;                       // offset: 0x39c (924)
  ULONG TopLevelIrp;                                // offset: 0x3a4 (932)
  struct _DEVICE_OBJECT *DeviceToVerify;            // offset: 0x3a8 (936)
  VOID *Win32StartAddress;                          // offset: 0x3ac (940)
  VOID *LegacyPowerObject;                          // offset: 0x3b0 (944)
  struct _LIST_ENTRY ThreadListEntry;               // offset: 0x3b4 (948)
  struct _EX_RUNDOWN_REF RundownProtect;            // offset: 0x3bc (956)
  struct _EX_PUSH_LOCK ThreadLock;                  // offset: 0x3c0 (960)
  ULONG ReadClusterSize;                            // offset: 0x3c4 (964)
  volatile LONG MmLockOrdering;                     // offset: 0x3c8 (968)
  union {
    ULONG CrossThreadFlags; // offset: 0x3cc (972)
    struct {
      ULONG Terminated : 1;               // offset: 0x3cc (972)
      ULONG ThreadInserted : 1;           // offset: 0x3cc (972)
      ULONG HideFromDebugger : 1;         // offset: 0x3cc (972)
      ULONG ActiveImpersonationInfo : 1;  // offset: 0x3cc (972)
      ULONG HardErrorsAreDisabled : 1;    // offset: 0x3cc (972)
      ULONG BreakOnTermination : 1;       // offset: 0x3cc (972)
      ULONG SkipCreationMsg : 1;          // offset: 0x3cc (972)
      ULONG SkipTerminationMsg : 1;       // offset: 0x3cc (972)
      ULONG CopyTokenOnOpen : 1;          // offset: 0x3cc (972)
      ULONG ThreadIoPriority : 3;         // offset: 0x3cc (972)
      ULONG ThreadPagePriority : 3;       // offset: 0x3cc (972)
      ULONG RundownFail : 1;              // offset: 0x3cc (972)
      ULONG UmsForceQueueTermination : 1; // offset: 0x3cc (972)
      ULONG IndirectCpuSets : 1;          // offset: 0x3cc (972)
      ULONG DisableDynamicCodeOptOut : 1; // offset: 0x3cc (972)
      ULONG ExplicitCaseSensitivity : 1;  // offset: 0x3cc (972)
      ULONG PicoNotifyExit : 1;           // offset: 0x3cc (972)
      ULONG DbgWerUserReportActive : 1;   // offset: 0x3cc (972)
      ULONG ForcedSelfTrimActive : 1;     // offset: 0x3cc (972)
      ULONG SamplingCoverage : 1;         // offset: 0x3cc (972)
      ULONG ReservedCrossThreadFlags : 8; // offset: 0x3cc (972)
    };
  };
  union {
    ULONG SameThreadPassiveFlags; // offset: 0x3d0 (976)
    struct {
      ULONG ActiveExWorker : 1;                  // offset: 0x3d0 (976)
      ULONG MemoryMaker : 1;                     // offset: 0x3d0 (976)
      ULONG StoreLockThread : 2;                 // offset: 0x3d0 (976)
      ULONG ClonedThread : 1;                    // offset: 0x3d0 (976)
      ULONG KeyedEventInUse : 1;                 // offset: 0x3d0 (976)
      ULONG SelfTerminate : 1;                   // offset: 0x3d0 (976)
      ULONG RespectIoPriority : 1;               // offset: 0x3d0 (976)
      ULONG ActivePageLists : 1;                 // offset: 0x3d0 (976)
      ULONG SecureContext : 1;                   // offset: 0x3d0 (976)
      ULONG ZeroPageThread : 1;                  // offset: 0x3d0 (976)
      ULONG ReservedSameThreadPassiveFlags : 21; // offset: 0x3d0 (976)
    };
  };
  union {
    ULONG SameThreadApcFlags; // offset: 0x3d4 (980)
    struct {
      UCHAR OwnsProcessAddressSpaceExclusive : 1; // offset: 0x3d4 (980)
      UCHAR OwnsProcessAddressSpaceShared : 1;    // offset: 0x3d4 (980)
      UCHAR HardFaultBehavior : 1;                // offset: 0x3d4 (980)
      volatile UCHAR StartAddressInvalid : 1;     // offset: 0x3d4 (980)
      UCHAR EtwCalloutActive : 1;                 // offset: 0x3d4 (980)
      UCHAR SuppressSymbolLoad : 1;               // offset: 0x3d4 (980)
      UCHAR Prefetching : 1;                      // offset: 0x3d4 (980)
      UCHAR OwnsVadExclusive : 1;                 // offset: 0x3d4 (980)
      UCHAR SystemPagePriorityActive : 1;         // offset: 0x3d5 (981)
      UCHAR SystemPagePriority : 3;               // offset: 0x3d5 (981)
      UCHAR AllowWritesToExecutableMemory : 1;    // offset: 0x3d5 (981)
    };
  };
  UCHAR CacheManagerActive;         // offset: 0x3d8 (984)
  UCHAR DisablePageFaultClustering; // offset: 0x3d9 (985)
  UCHAR ActiveFaultCount;           // offset: 0x3da (986)
  UCHAR LockOrderState;             // offset: 0x3db (987)
  ULONG AlpcMessageId;              // offset: 0x3dc (988)
  union {
    VOID *AlpcMessage;             // offset: 0x3e0 (992)
    ULONG AlpcReceiveAttributeSet; // offset: 0x3e0 (992)
  };
  struct _LIST_ENTRY AlpcWaitListEntry;             // offset: 0x3e4 (996)
  LONG ExitStatus;                                  // offset: 0x3ec (1004)
  ULONG CacheManagerCount;                          // offset: 0x3f0 (1008)
  ULONG IoBoostCount;                               // offset: 0x3f4 (1012)
  ULONG IoQoSBoostCount;                            // offset: 0x3f8 (1016)
  ULONG IoQoSThrottleCount;                         // offset: 0x3fc (1020)
  struct _LIST_ENTRY BoostList;                     // offset: 0x400 (1024)
  struct _LIST_ENTRY DeboostList;                   // offset: 0x408 (1032)
  ULONG BoostListLock;                              // offset: 0x410 (1040)
  ULONG IrpListLock;                                // offset: 0x414 (1044)
  VOID *ReservedForSynchTracking;                   // offset: 0x418 (1048)
  struct _SINGLE_LIST_ENTRY CmCallbackListHead;     // offset: 0x41c (1052)
  struct _GUID *ActivityId;                         // offset: 0x420 (1056)
  struct _SINGLE_LIST_ENTRY SeLearningModeListHead; // offset: 0x424 (1060)
  VOID *VerifierContext;                            // offset: 0x428 (1064)
  ULONG KernelStackReference;                       // offset: 0x42c (1068)
  VOID *AdjustedClientToken;                        // offset: 0x430 (1072)
  VOID *WorkOnBehalfThread;                         // offset: 0x434 (1076)
  struct _PS_PROPERTY_SET PropertySet;              // offset: 0x438 (1080)
  VOID *PicoContext;                                // offset: 0x444 (1092)
  ULONG UserFsBase;                                 // offset: 0x448 (1096)
  ULONG UserGsBase;                                 // offset: 0x44c (1100)
  struct _THREAD_ENERGY_VALUES *EnergyValues;       // offset: 0x450 (1104)
  VOID *CmDbgInfo;                                  // offset: 0x454 (1108)
  union {
    ULONG SelectedCpuSets;          // offset: 0x458 (1112)
    ULONG *SelectedCpuSetsIndirect; // offset: 0x458 (1112)
  };
  struct _EJOB *Silo;                            // offset: 0x45c (1116)
  struct _UNICODE_STRING *ThreadName;            // offset: 0x460 (1120)
  ULONG LastExpectedRunTime;                     // offset: 0x464 (1124)
  struct _LIST_ENTRY OwnerEntryListHead;         // offset: 0x468 (1128)
  ULONG DisownedOwnerEntryListLock;              // offset: 0x470 (1136)
  struct _LIST_ENTRY DisownedOwnerEntryListHead; // offset: 0x474 (1140)
};

// 0xb0 (176) bytes
struct _KINTERRUPT {
  SHORT Type;                            // offset: 0x0 (0)
  SHORT Size;                            // offset: 0x2 (2)
  struct _LIST_ENTRY InterruptListEntry; // offset: 0x4 (4)
  UCHAR(*ServiceRoutine)
  (struct _KINTERRUPT *arg1, VOID *arg2); // offset: 0xc (12)
  UCHAR(*MessageServiceRoutine)
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
  struct _KTRAP_FRAME *TrapFrame;                     // offset: 0x54 (84)
  VOID *DisconnectData;                               // offset: 0x58 (88)
  struct _KTHREAD *volatile ServiceThread;            // offset: 0x5c (92)
  struct _INTERRUPT_CONNECTION_DATA *ConnectionData;  // offset: 0x60 (96)
  VOID *IntTrackEntry;                                // offset: 0x64 (100)
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

// 0x70 (112) bytes
struct _PROC_PERF_CONSTRAINT {
  struct _KPRCB *Prcb;                            // offset: 0x0 (0)
  ULONG PerfContext;                              // offset: 0x4 (4)
  ULONG PlatformCap;                              // offset: 0x8 (8)
  ULONG ThermalCap;                               // offset: 0xc (12)
  ULONG LimitReasons;                             // offset: 0x10 (16)
  ULONGLONG PlatformCapStartTime;                 // offset: 0x18 (24)
  ULONG ProcCap;                                  // offset: 0x20 (32)
  ULONG ProcFloor;                                // offset: 0x24 (36)
  ULONG TargetPercent;                            // offset: 0x28 (40)
  struct _PERF_CONTROL_STATE_SELECTION Selection; // offset: 0x30 (48)
  ULONG DomainSelectionGeneration;                // offset: 0x58 (88)
  ULONG PreviousFrequency;                        // offset: 0x5c (92)
  ULONG PreviousPercent;                          // offset: 0x60 (96)
  ULONG LatestFrequencyPercent;                   // offset: 0x64 (100)
  UCHAR Force;                                    // offset: 0x68 (104)
  UCHAR UseQosUpdateLock;                         // offset: 0x69 (105)
  ULONG QosUpdateLock;                            // offset: 0x6c (108)
};

// 0x1d8 (472) bytes
struct _PROC_PERF_DOMAIN {
  struct _LIST_ENTRY Link;                            // offset: 0x0 (0)
  struct _KPRCB *Master;                              // offset: 0x8 (8)
  struct _KAFFINITY_EX Members;                       // offset: 0xc (12)
  ULONG DomainContext;                                // offset: 0x18 (24)
  ULONG ProcessorCount;                               // offset: 0x1c (28)
  UCHAR EfficiencyClass;                              // offset: 0x20 (32)
  UCHAR NominalPerformanceClass;                      // offset: 0x21 (33)
  UCHAR HighestPerformanceClass;                      // offset: 0x22 (34)
  UCHAR Spare;                                        // offset: 0x23 (35)
  struct _PROC_PERF_CONSTRAINT *Processors;           // offset: 0x24 (36)
  VOID (*GetFFHThrottleState)(ULONGLONG *arg1);       // offset: 0x28 (40)
  VOID (*TimeWindowHandler)(ULONG arg1, ULONG arg2);  // offset: 0x2c (44)
  VOID (*BoostPolicyHandler)(ULONG arg1, ULONG arg2); // offset: 0x30 (48)
  VOID (*BoostModeHandler)(ULONG arg1, ULONG arg2);   // offset: 0x34 (52)
  VOID(*EnergyPerfPreferenceHandler)
  (ULONG arg1, ULONG arg2); // offset: 0x38 (56)
  VOID(*AutonomousActivityWindowHandler)
  (ULONG arg1, ULONG arg2);                              // offset: 0x3c (60)
  VOID (*AutonomousModeHandler)(ULONG arg1, ULONG arg2); // offset: 0x40 (64)
  VOID (*ReinitializeHandler)(ULONG arg1);               // offset: 0x44 (68)
  ULONG(*PerfSelectionHandler)
  (ULONG arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6,
   ULONG arg7, ULONG *arg8, ULONGLONG *arg9); // offset: 0x48 (72)
  VOID(*PerfControlHandler)
  (ULONG arg1, struct _PERF_CONTROL_STATE_SELECTION *arg2, UCHAR arg3,
   UCHAR arg4); // offset: 0x4c (76)
  VOID(*DomainPerfControlHandler)
  (ULONG arg1, struct _PERF_CONTROL_STATE_SELECTION *arg2, UCHAR arg3,
   UCHAR arg4);                                         // offset: 0x50 (80)
  ULONG MaxFrequency;                                   // offset: 0x54 (84)
  ULONG NominalFrequency;                               // offset: 0x58 (88)
  ULONG MaxPercent;                                     // offset: 0x5c (92)
  ULONG MinPerfPercent;                                 // offset: 0x60 (96)
  ULONG MinThrottlePercent;                             // offset: 0x64 (100)
  ULONGLONG MinimumRelativePerformance;                 // offset: 0x68 (104)
  ULONGLONG NominalRelativePerformance;                 // offset: 0x70 (112)
  UCHAR NominalRelativePerformancePercent;              // offset: 0x78 (120)
  UCHAR Coordination;                                   // offset: 0x79 (121)
  UCHAR HardPlatformCap;                                // offset: 0x7a (122)
  UCHAR AffinitizeControl;                              // offset: 0x7b (123)
  UCHAR EfficientThrottle;                              // offset: 0x7c (124)
  UCHAR AllowSchedulerDirectedPerfStates;               // offset: 0x7d (125)
  UCHAR InitiateAllProcessors;                          // offset: 0x7e (126)
  UCHAR AutonomousMode;                                 // offset: 0x7f (127)
  UCHAR ProvideGuidance;                                // offset: 0x80 (128)
  ULONG DesiredPercent;                                 // offset: 0x84 (132)
  ULONG GuaranteedPercent;                              // offset: 0x88 (136)
  struct _PROC_PERF_QOS_CLASS_POLICY QosPolicies[4];    // offset: 0x8c (140)
  ULONG QosDisableReasons[4];                           // offset: 0xfc (252)
  ULONG QosEquivalencyMasks[4];                         // offset: 0x10c (268)
  UCHAR QosSupported;                                   // offset: 0x11c (284)
  volatile ULONG SelectionGeneration;                   // offset: 0x120 (288)
  struct _PERF_CONTROL_STATE_SELECTION QosSelection[4]; // offset: 0x128 (296)
  ULONGLONG PerfChangeTime;                             // offset: 0x1c8 (456)
  ULONG PerfChangeIntervalCount;                        // offset: 0x1d0 (464)
  UCHAR Force;                                          // offset: 0x1d4 (468)
};

// 0x6020 (24608) bytes
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
  UCHAR VirtualizationFlags;         // offset: 0x2ed (749)
  UCHAR Reserved12[2];               // offset: 0x2ee (750)
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
      ULONG DbgMultiUsersInSessionSku : 1; // offset: 0x2f0 (752)
      ULONG DbgStateSeparationEnabled : 1; // offset: 0x2f0 (752)
      ULONG SpareBits : 21;                // offset: 0x2f0 (752)
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
  ULONG TelemetryCoverageRound;               // offset: 0x37c (892)
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
struct _PS_MITIGATION_AUDIT_OPTIONS_MAP {
  ULONGLONG Map[2]; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _PS_MITIGATION_OPTIONS_MAP {
  ULONGLONG Map[2]; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct LIST_ENTRY64 {
  ULONGLONG Flink; // offset: 0x0 (0)
  ULONGLONG Blink; // offset: 0x8 (8)
};

// 0x28 (40) bytes
struct _ACTIVATION_CONTEXT_STACK64 {
  ULONGLONG ActiveFrame;              // offset: 0x0 (0)
  struct LIST_ENTRY64 FrameListCache; // offset: 0x8 (8)
  ULONG Flags;                        // offset: 0x18 (24)
  ULONG NextCookieSequenceNumber;     // offset: 0x1c (28)
  ULONG StackId;                      // offset: 0x20 (32)
};

// 0x1838 (6200) bytes
struct _TEB64 {
  struct _NT_TIB64 NtTib;                              // offset: 0x0 (0)
  ULONGLONG EnvironmentPointer;                        // offset: 0x38 (56)
  struct _CLIENT_ID64 ClientId;                        // offset: 0x40 (64)
  ULONGLONG ActiveRpcHandle;                           // offset: 0x50 (80)
  ULONGLONG ThreadLocalStoragePointer;                 // offset: 0x58 (88)
  ULONGLONG ProcessEnvironmentBlock;                   // offset: 0x60 (96)
  ULONG LastErrorValue;                                // offset: 0x68 (104)
  ULONG CountOfOwnedCriticalSections;                  // offset: 0x6c (108)
  ULONGLONG CsrClientThread;                           // offset: 0x70 (112)
  ULONGLONG Win32ThreadInfo;                           // offset: 0x78 (120)
  ULONG User32Reserved[26];                            // offset: 0x80 (128)
  ULONG UserReserved[5];                               // offset: 0xe8 (232)
  ULONGLONG WOW32Reserved;                             // offset: 0x100 (256)
  ULONG CurrentLocale;                                 // offset: 0x108 (264)
  ULONG FpSoftwareStatusRegister;                      // offset: 0x10c (268)
  ULONGLONG ReservedForDebuggerInstrumentation[16];    // offset: 0x110 (272)
  ULONGLONG SystemReserved1[30];                       // offset: 0x190 (400)
  CHAR PlaceholderCompatibilityMode;                   // offset: 0x280 (640)
  CHAR PlaceholderReserved[11];                        // offset: 0x281 (641)
  ULONG ProxiedProcessId;                              // offset: 0x28c (652)
  struct _ACTIVATION_CONTEXT_STACK64 _ActivationStack; // offset: 0x290 (656)
  UCHAR WorkingOnBehalfTicket[8];                      // offset: 0x2b8 (696)
  LONG ExceptionCode;                                  // offset: 0x2c0 (704)
  UCHAR Padding0[4];                                   // offset: 0x2c4 (708)
  ULONGLONG ActivationContextStackPointer;             // offset: 0x2c8 (712)
  ULONGLONG InstrumentationCallbackSp;                 // offset: 0x2d0 (720)
  ULONGLONG InstrumentationCallbackPreviousPc;         // offset: 0x2d8 (728)
  ULONGLONG InstrumentationCallbackPreviousSp;         // offset: 0x2e0 (736)
  ULONG TxFsContext;                                   // offset: 0x2e8 (744)
  UCHAR InstrumentationCallbackDisabled;               // offset: 0x2ec (748)
  UCHAR Padding1[3];                                   // offset: 0x2ed (749)
  struct _GDI_TEB_BATCH64 GdiTebBatch;                 // offset: 0x2f0 (752)
  struct _CLIENT_ID64 RealClientId;                    // offset: 0x7d8 (2008)
  ULONGLONG GdiCachedProcessHandle;                    // offset: 0x7e8 (2024)
  ULONG GdiClientPID;                                  // offset: 0x7f0 (2032)
  ULONG GdiClientTID;                                  // offset: 0x7f4 (2036)
  ULONGLONG GdiThreadLocalInfo;                        // offset: 0x7f8 (2040)
  ULONGLONG Win32ClientInfo[62];                       // offset: 0x800 (2048)
  ULONGLONG glDispatchTable[233];                      // offset: 0x9f0 (2544)
  ULONGLONG glReserved1[29];                           // offset: 0x1138 (4408)
  ULONGLONG glReserved2;                               // offset: 0x1220 (4640)
  ULONGLONG glSectionInfo;                             // offset: 0x1228 (4648)
  ULONGLONG glSection;                                 // offset: 0x1230 (4656)
  ULONGLONG glTable;                                   // offset: 0x1238 (4664)
  ULONGLONG glCurrentRC;                               // offset: 0x1240 (4672)
  ULONGLONG glContext;                                 // offset: 0x1248 (4680)
  ULONG LastStatusValue;                               // offset: 0x1250 (4688)
  UCHAR Padding2[4];                                   // offset: 0x1254 (4692)
  struct _STRING64 StaticUnicodeString;                // offset: 0x1258 (4696)
  WCHAR StaticUnicodeBuffer[261];                      // offset: 0x1268 (4712)
  UCHAR Padding3[6];                                   // offset: 0x1472 (5234)
  ULONGLONG DeallocationStack;                         // offset: 0x1478 (5240)
  ULONGLONG TlsSlots[64];                              // offset: 0x1480 (5248)
  struct LIST_ENTRY64 TlsLinks;                        // offset: 0x1680 (5760)
  ULONGLONG Vdm;                                       // offset: 0x1690 (5776)
  ULONGLONG ReservedForNtRpc;                          // offset: 0x1698 (5784)
  ULONGLONG DbgSsReserved[2];                          // offset: 0x16a0 (5792)
  ULONG HardErrorMode;                                 // offset: 0x16b0 (5808)
  UCHAR Padding4[4];                                   // offset: 0x16b4 (5812)
  ULONGLONG Instrumentation[11];                       // offset: 0x16b8 (5816)
  struct _GUID ActivityId;                             // offset: 0x1710 (5904)
  ULONGLONG SubProcessTag;                             // offset: 0x1720 (5920)
  ULONGLONG PerflibData;                               // offset: 0x1728 (5928)
  ULONGLONG EtwTraceData;                              // offset: 0x1730 (5936)
  ULONGLONG WinSockData;                               // offset: 0x1738 (5944)
  ULONG GdiBatchCount;                                 // offset: 0x1740 (5952)
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
      USHORT SkipLoaderInit : 1;       // offset: 0x17ee (6126)
      USHORT SpareSameTebBits : 1;     // offset: 0x17ee (6126)
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
