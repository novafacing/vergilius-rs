#include <stdint.h>

// 0x0 (0) bytes
struct _ADAPTER_OBJECT

{};

// 0x0 (0) bytes
struct _ACTIVATION_CONTEXT_DATA

{};

// 0x0 (0) bytes
struct _HEAP_LOCAL_SEGMENT_INFO

{};

typedef int8_t CHAR;

// 0x0 (0) bytes
struct _KTMNOTIFICATION_PACKET

{};

typedef int64_t LONGLONG;

typedef uint32_t ULONG;

// 0x4 (4) bytes
struct _MMVAD_FLAGS2 {
  ULONG FileOffset : 24;     // offset: 0x0 (0)
  ULONG SecNoChange : 1;     // offset: 0x0 (0)
  ULONG OneSecured : 1;      // offset: 0x0 (0)
  ULONG MultipleSecured : 1; // offset: 0x0 (0)
  ULONG Spare : 1;           // offset: 0x0 (0)
  ULONG LongVad : 1;         // offset: 0x0 (0)
  ULONG ExtendableFile : 1;  // offset: 0x0 (0)
  ULONG Inherit : 1;         // offset: 0x0 (0)
  ULONG CopyOnWrite : 1;     // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MMSECTION_FLAGS {
  ULONG BeingDeleted : 1;            // offset: 0x0 (0)
  ULONG BeingCreated : 1;            // offset: 0x0 (0)
  ULONG BeingPurged : 1;             // offset: 0x0 (0)
  ULONG NoModifiedWriting : 1;       // offset: 0x0 (0)
  ULONG FailAllIo : 1;               // offset: 0x0 (0)
  ULONG Image : 1;                   // offset: 0x0 (0)
  ULONG Based : 1;                   // offset: 0x0 (0)
  ULONG File : 1;                    // offset: 0x0 (0)
  ULONG Networked : 1;               // offset: 0x0 (0)
  ULONG Rom : 1;                     // offset: 0x0 (0)
  ULONG PhysicalMemory : 1;          // offset: 0x0 (0)
  ULONG CopyOnWrite : 1;             // offset: 0x0 (0)
  ULONG Reserve : 1;                 // offset: 0x0 (0)
  ULONG Commit : 1;                  // offset: 0x0 (0)
  ULONG Accessed : 1;                // offset: 0x0 (0)
  ULONG WasPurged : 1;               // offset: 0x0 (0)
  ULONG UserReference : 1;           // offset: 0x0 (0)
  ULONG GlobalMemory : 1;            // offset: 0x0 (0)
  ULONG DeleteOnClose : 1;           // offset: 0x0 (0)
  ULONG FilePointerNull : 1;         // offset: 0x0 (0)
  ULONG GlobalOnlyPerSession : 1;    // offset: 0x0 (0)
  ULONG SetMappedFileIoComplete : 1; // offset: 0x0 (0)
  ULONG CollidedFlush : 1;           // offset: 0x0 (0)
  ULONG NoChange : 1;                // offset: 0x0 (0)
  ULONG Spare : 1;                   // offset: 0x0 (0)
  ULONG UserWritable : 1;            // offset: 0x0 (0)
  ULONG PreferredNode : 6;           // offset: 0x0 (0)
};

typedef int16_t SHORT;

// 0x0 (0) bytes
struct _SMBIOS_TABLE_HEADER

{};

// 0x0 (0) bytes
struct _SETUP_LOADER_BLOCK

{};

// 0x0 (0) bytes
struct _ECP_LIST

{};

// 0x0 (0) bytes
struct _SCSI_REQUEST_BLOCK

{};

// 0x0 (0) bytes
struct _FLS_CALLBACK_INFO

{};

// 0x0 (0) bytes
struct _ASSEMBLY_STORAGE_MAP

{};

// 0x0 (0) bytes
struct _JOB_ACCESS_STATE

{};

// 0x0 (0) bytes
struct _PAGEFAULT_HISTORY

{};

// 0x0 (0) bytes
struct _EPROCESS_QUOTA_BLOCK

{};

typedef uint16_t WCHAR;

// 0x4 (4) bytes
struct _ARBITER_ADD_RESERVED_PARAMETERS {
  struct _DEVICE_OBJECT *ReserveDevice; // offset: 0x0 (0)
};

// 0x0 (0) bytes
union _PSP_RATE_APC;

typedef int32_t LONG;

// 0x4 (4) bytes
enum _MI_DYNAMIC_MEMORY_LOCKTYPE {

  AlreadyHeld = 0,
  AcquiredShared = 1,
  UseSpinLock = 2,
  UseSpinLockRaiseIrql = 3
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
  MaxRegNtNotifyClass = 41
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
  SharedNtdll32RtlUserThreadStart = 8,
  SharedNtdll32pQueryProcessDebugInformationRemote = 9,
  SharedNtdll32EtwpNotificationThread = 10,
  SharedNtdll32BaseAddress = 11,
  Wow64SharedPageEntriesCount = 12
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
enum _MI_VAD_TYPE {

  VadNone = 0,
  VadDevicePhysicalMemory = 1,
  VadImageMap = 2,
  VadAwe = 3,
  VadWriteWatch = 4,
  VadLargePages = 5,
  VadRotatePhysical = 6,
  VadLargePageSection = 7
};

// 0x4 (4) bytes
enum ReplacesCorHdrNumericDefines {

  COMIMAGE_FLAGS_ILONLY = 1,
  COMIMAGE_FLAGS_32BITREQUIRED = 2,
  COMIMAGE_FLAGS_IL_LIBRARY = 4,
  COMIMAGE_FLAGS_STRONGNAMESIGNED = 8,
  COMIMAGE_FLAGS_NATIVE_ENTRYPOINT = 16,
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
  COR_VTABLE_FROM_UNMANAGED_RETAIN_APPDOMAIN = 8,
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
enum _MM_POOL_PRIORITIES {

  MmHighPriority = 0,
  MmNormalPriority = 1,
  MmLowPriority = 2,
  MmMaximumPoolPriority = 3
};

// 0x4 (4) bytes
enum _MEMORY_CACHING_TYPE_ORIG {

  MmFrameBufferCached = 2
};

// 0x4 (4) bytes
enum _PCI_HOTPLUG_SLOT_INTERRUPT {

  SlotInterruptPresenceDetect = 0,
  SlotInterruptLatchChange = 1,
  SlotInterruptAttentionButton = 2,
  SlotInterruptLinkStateChange = 3,
  SlotInterruptPowerFault = 4,
  SlotInterruptMaximum = 7
};

// 0x4 (4) bytes
enum _MM_POOL_TYPES {

  MmNonPagedPool = 0,
  MmPagedPool = 1,
  MmSessionPagedPool = 2,
  MmMaximumPoolType = 3
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
  MiVaSpecialPool = 7,
  MiVaSystemCache = 8,
  MiVaSystemPtes = 9,
  MiVaHal = 10,
  MiVaSessionGlobalSpace = 11,
  MiVaDriverImages = 12,
  MiVaMaximumType = 13
};

// 0x4 (4) bytes
enum _VI_CNT_INDEX_TYPE {

  VF_CNT_IRPS_TOTAL_COUNT = 0,
  VF_CNT_IRPS_NOT_A_TARGET = 1,
  VF_CNT_IRPS_KMODE = 2,
  VF_CNT_IRPS_SKIP_FLAGS = 3,
  VF_CNT_IRPS_ALREADY_HOOKED = 4,
  VF_CNT_IRPS_WILL_ATTEMPT_CANCEL = 5,
  VF_CNT_IRPS_WILL_NOT_CANCEL = 6,
  VF_CNT_REAL_RACE_FOR_COMPLETION = 7,
  VF_CNT_IRPS_COMPLETED_BY_DRIVER = 8,
  VF_CNT_IRPS_COMPLETED_BY_CANCEL = 9,
  VF_CNT_IRPS_NO_CANCEL_ROUTINE = 10,
  VF_CNT_IRPS_CANCEL_RETURNED_TRUE = 11,
  VF_CNT_IRPS_CANCEL_RETURNED_FALSE = 12,
  VF_CNT_IRP_CANCEL_ROUTINE_NO_CHECK = 13,
  VF_CNT_IRP_CANCEL_ROUTINE_NEVER = 14,
  VF_CNT_IRP_CANCEL_ROUTINE_SOMETIMES = 15,
  VF_CNT_EXTRA_ALLOCS = 16,
  VF_CNT_EXTRA_FREES = 17,
  VF_CNT_CALLS_TO_TIMER_DPC = 18,
  VF_CNT_CALLS_TO_CANCEL_WORKER = 19,
  VF_CNT_FREE_FROM_CANCEL_ROUTINE = 20,
  VF_CNT_FREE_FROM_COMPLETION_ROUTINE = 21,
  VF_CNT_ISSUES_LOGGED = 22,
  VF_CNT_CANCEL_AND_COMPLETE_DIFFERENT_THREADS = 23,
  VF_CNT_IRPS_TOO_MANY_UNDER_WATCH = 24,
  VF_CNT_MAX_INDEX = 25
};

// 0x4 (4) bytes
enum SYSTEM_POWER_CONDITION {

  PoAc = 0,
  PoDc = 1,
  PoHot = 2,
  PoConditionMaximum = 3
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
enum _DPFLTR_TYPE {

  DPFLTR_SYSTEM_ID = 0,
  DPFLTR_SMSS_ID = 1,
  DPFLTR_SETUP_ID = 2,
  DPFLTR_NTFS_ID = 3,
  DPFLTR_FSTUB_ID = 4,
  DPFLTR_CRASHDUMP_ID = 5,
  DPFLTR_CDAUDIO_ID = 6,
  DPFLTR_CDROM_ID = 7,
  DPFLTR_CLASSPNP_ID = 8,
  DPFLTR_DISK_ID = 9,
  DPFLTR_REDBOOK_ID = 10,
  DPFLTR_STORPROP_ID = 11,
  DPFLTR_SCSIPORT_ID = 12,
  DPFLTR_SCSIMINIPORT_ID = 13,
  DPFLTR_CONFIG_ID = 14,
  DPFLTR_I8042PRT_ID = 15,
  DPFLTR_SERMOUSE_ID = 16,
  DPFLTR_LSERMOUS_ID = 17,
  DPFLTR_KBDHID_ID = 18,
  DPFLTR_MOUHID_ID = 19,
  DPFLTR_KBDCLASS_ID = 20,
  DPFLTR_MOUCLASS_ID = 21,
  DPFLTR_TWOTRACK_ID = 22,
  DPFLTR_WMILIB_ID = 23,
  DPFLTR_ACPI_ID = 24,
  DPFLTR_AMLI_ID = 25,
  DPFLTR_HALIA64_ID = 26,
  DPFLTR_VIDEO_ID = 27,
  DPFLTR_SVCHOST_ID = 28,
  DPFLTR_VIDEOPRT_ID = 29,
  DPFLTR_TCPIP_ID = 30,
  DPFLTR_DMSYNTH_ID = 31,
  DPFLTR_NTOSPNP_ID = 32,
  DPFLTR_FASTFAT_ID = 33,
  DPFLTR_SAMSS_ID = 34,
  DPFLTR_PNPMGR_ID = 35,
  DPFLTR_NETAPI_ID = 36,
  DPFLTR_SCSERVER_ID = 37,
  DPFLTR_SCCLIENT_ID = 38,
  DPFLTR_SERIAL_ID = 39,
  DPFLTR_SERENUM_ID = 40,
  DPFLTR_UHCD_ID = 41,
  DPFLTR_RPCPROXY_ID = 42,
  DPFLTR_AUTOCHK_ID = 43,
  DPFLTR_DCOMSS_ID = 44,
  DPFLTR_UNIMODEM_ID = 45,
  DPFLTR_SIS_ID = 46,
  DPFLTR_FLTMGR_ID = 47,
  DPFLTR_WMICORE_ID = 48,
  DPFLTR_BURNENG_ID = 49,
  DPFLTR_IMAPI_ID = 50,
  DPFLTR_SXS_ID = 51,
  DPFLTR_FUSION_ID = 52,
  DPFLTR_IDLETASK_ID = 53,
  DPFLTR_SOFTPCI_ID = 54,
  DPFLTR_TAPE_ID = 55,
  DPFLTR_MCHGR_ID = 56,
  DPFLTR_IDEP_ID = 57,
  DPFLTR_PCIIDE_ID = 58,
  DPFLTR_FLOPPY_ID = 59,
  DPFLTR_FDC_ID = 60,
  DPFLTR_TERMSRV_ID = 61,
  DPFLTR_W32TIME_ID = 62,
  DPFLTR_PREFETCHER_ID = 63,
  DPFLTR_RSFILTER_ID = 64,
  DPFLTR_FCPORT_ID = 65,
  DPFLTR_PCI_ID = 66,
  DPFLTR_DMIO_ID = 67,
  DPFLTR_DMCONFIG_ID = 68,
  DPFLTR_DMADMIN_ID = 69,
  DPFLTR_WSOCKTRANSPORT_ID = 70,
  DPFLTR_VSS_ID = 71,
  DPFLTR_PNPMEM_ID = 72,
  DPFLTR_PROCESSOR_ID = 73,
  DPFLTR_DMSERVER_ID = 74,
  DPFLTR_SR_ID = 75,
  DPFLTR_INFINIBAND_ID = 76,
  DPFLTR_IHVDRIVER_ID = 77,
  DPFLTR_IHVVIDEO_ID = 78,
  DPFLTR_IHVAUDIO_ID = 79,
  DPFLTR_IHVNETWORK_ID = 80,
  DPFLTR_IHVSTREAMING_ID = 81,
  DPFLTR_IHVBUS_ID = 82,
  DPFLTR_HPS_ID = 83,
  DPFLTR_RTLTHREADPOOL_ID = 84,
  DPFLTR_LDR_ID = 85,
  DPFLTR_TCPIP6_ID = 86,
  DPFLTR_ISAPNP_ID = 87,
  DPFLTR_SHPC_ID = 88,
  DPFLTR_STORPORT_ID = 89,
  DPFLTR_STORMINIPORT_ID = 90,
  DPFLTR_PRINTSPOOLER_ID = 91,
  DPFLTR_VSSDYNDISK_ID = 92,
  DPFLTR_VERIFIER_ID = 93,
  DPFLTR_VDS_ID = 94,
  DPFLTR_VDSBAS_ID = 95,
  DPFLTR_VDSDYN_ID = 96,
  DPFLTR_VDSDYNDR_ID = 97,
  DPFLTR_VDSLDR_ID = 98,
  DPFLTR_VDSUTIL_ID = 99,
  DPFLTR_DFRGIFC_ID = 100,
  DPFLTR_DEFAULT_ID = 101,
  DPFLTR_MM_ID = 102,
  DPFLTR_DFSC_ID = 103,
  DPFLTR_WOW64_ID = 104,
  DPFLTR_ALPC_ID = 105,
  DPFLTR_WDI_ID = 106,
  DPFLTR_PERFLIB_ID = 107,
  DPFLTR_KTM_ID = 108,
  DPFLTR_IOSTRESS_ID = 109,
  DPFLTR_HEAP_ID = 110,
  DPFLTR_WHEA_ID = 111,
  DPFLTR_USERGDI_ID = 112,
  DPFLTR_MMCSS_ID = 113,
  DPFLTR_TPM_ID = 114,
  DPFLTR_THREADORDER_ID = 115,
  DPFLTR_ENVIRON_ID = 116,
  DPFLTR_EMS_ID = 117,
  DPFLTR_WDT_ID = 118,
  DPFLTR_FVEVOL_ID = 119,
  DPFLTR_NDIS_ID = 120,
  DPFLTR_NVCTRACE_ID = 121,
  DPFLTR_LUAFV_ID = 122,
  DPFLTR_APPCOMPAT_ID = 123,
  DPFLTR_USBSTOR_ID = 124,
  DPFLTR_SBP2PORT_ID = 125,
  DPFLTR_COVERAGE_ID = 126,
  DPFLTR_CACHEMGR_ID = 127,
  DPFLTR_MOUNTMGR_ID = 128,
  DPFLTR_CFR_ID = 129,
  DPFLTR_TXF_ID = 130,
  DPFLTR_KSECDD_ID = 131,
  DPFLTR_FLTREGRESS_ID = 132,
  DPFLTR_MPIO_ID = 133,
  DPFLTR_MSDSM_ID = 134,
  DPFLTR_UDFS_ID = 135,
  DPFLTR_PSHED_ID = 136,
  DPFLTR_STORVSP_ID = 137,
  DPFLTR_EXFAT_ID = 138,
  DPFLTR_ENDOFTABLE_ID = 139
};

// 0x4 (4) bytes
enum _PS_RESOURCE_TYPE {

  PsResourceNonPagedPool = 0,
  PsResourcePagedPool = 1,
  PsResourcePageFile = 2,
  PsResourceWorkingSet = 3,
  PsResourceCpuRate = 4,
  PsResourceMax = 5
};

// 0x4 (4) bytes
enum _WAIT_TYPE {

  WaitAll = 0,
  WaitAny = 1
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
  WrEventPair = 14,
  WrQueue = 15,
  WrLpcReceive = 16,
  WrLpcReply = 17,
  WrVirtualMemory = 18,
  WrPageOut = 19,
  WrRendezvous = 20,
  Spare2 = 21,
  Spare3 = 22,
  Spare4 = 23,
  Spare5 = 24,
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
  MaximumWaitReason = 37
};

// 0x4 (4) bytes
enum _ETW_GUID_TYPE {

  EtwTraceGuidType = 0,
  EtwNotificationGuidType = 1,
  EtwGuidTypeMax = 2
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
  heap_failure_listentry_corruption = 13
};

// 0x4 (4) bytes
enum _IO_PAGING_PRIORITY {

  IoPagingPriorityInvalid = 0,
  IoPagingPriorityNormal = 1,
  IoPagingPriorityHigh = 2,
  IoPagingPriorityReserved1 = 3,
  IoPagingPriorityReserved2 = 4
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
enum _PF_FILE_ACCESS_TYPE {

  PfFileAccessTypeRead = 0,
  PfFileAccessTypeWrite = 1,
  PfFileAccessTypeMax = 2
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
  LookasideScratchBufferList = 7,
  LookasideMaximumList = 8
};

// 0x4 (4) bytes
enum _EVENT_TYPE {

  NotificationEvent = 0,
  SynchronizationEvent = 1
};

// 0x4 (4) bytes
enum _KSPIN_LOCK_QUEUE_NUMBER {

  LockQueueDispatcherLock = 0,
  LockQueueExpansionLock = 1,
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
  LockQueueMaximumLock = 49
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
  PowerSettingChange = 10,
  MaxPlugEventCategory = 11
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
enum _VI_DEADLOCK_RESOURCE_TYPE {

  VfDeadlockUnknown = 0,
  VfDeadlockMutex = 1,
  VfDeadlockMutexAbandoned = 2,
  VfDeadlockFastMutex = 3,
  VfDeadlockFastMutexUnsafe = 4,
  VfDeadlockSpinLock = 5,
  VfDeadlockTypeMaximum = 6
};

// 0x4 (4) bytes
enum _ETW_PROVIDER_STATE {

  EtwProviderStateFree = 0,
  EtwProviderStateTransition = 1,
  EtwProviderStateActive = 2,
  EtwProviderStateMax = 3
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
  PolicyDeviceMemory = 3,
  PolicyInitiatePowerActionAPI = 4,
  PolicySetPowerStateAPI = 5,
  PolicyImmediateDozeS4 = 6,
  PolicySystemIdle = 7,
  PolicyDeviceMax = 8
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
  LoaderReserve = 24,
  LoaderXIPRom = 25,
  LoaderHALCachedMemory = 26,
  LoaderLargePageFiller = 27,
  LoaderErrorLogMemory = 28,
  LoaderMaximum = 29
};

// 0x4 (4) bytes
enum _KINTERRUPT_POLARITY {

  InterruptPolarityUnknown = 0,
  InterruptActiveHigh = 1,
  InterruptActiveLow = 2
};

// 0x4 (4) bytes
enum _KINTERRUPT_MODE {

  LevelSensitive = 0,
  Latched = 1
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
enum _ARBITER_REQUEST_SOURCE {

  ArbiterRequestUndefined = -1,
  ArbiterRequestLegacyReported = 0,
  ArbiterRequestHalReported = 1,
  ArbiterRequestLegacyAssigned = 2,
  ArbiterRequestPnpDetected = 3,
  ArbiterRequestPnpEnumerated = 4
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
enum _RTL_GENERIC_COMPARE_RESULTS {

  GenericLessThan = 0,
  GenericGreaterThan = 1,
  GenericEqual = 2
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
enum _WHEA_RAW_DATA_FORMAT {

  WheaRawDataFormatIPFSalRecord = 0,
  WheaRawDataFormatIA32MCA = 1,
  WheaRawDataFormatIntel64MCA = 2,
  WheaRawDataFormatAMD64MCA = 3,
  WheaRawDataFormatMemory = 4,
  WheaRawDataFormatPCIExpress = 5,
  WheaRawDataFormatNMIPort = 6,
  WheaRawDataFormatPCIXBus = 7,
  WheaRawDataFormatPCIXDevice = 8,
  WheaRawDataFormatGeneric = 9,
  WheaRawDataFormatMax = 10
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
enum WHEA_PCIEXPRESS_DEVICE_TYPE {

  WheaPciExpressEndpoint = 0,
  WheaPciExpressLegacyEndpoint = 1,
  WheaPciExpressRootPort = 4,
  WheaPciExpressUpstreamSwitchPort = 5,
  WheaPciExpressDownstreamSwitchPort = 6,
  WheaPciExpressToPciXBridge = 7,
  WheaPciXToExpressBridge = 8,
  WheaPciExpressRootComplexIntegratedEndpoint = 9,
  WheaPciExpressRootComplexEventCollector = 10
};

// 0x4 (4) bytes
enum _WHEA_ERROR_SEVERITY {

  WheaErrSevRecoverable = 0,
  WheaErrSevFatal = 1,
  WheaErrSevCorrected = 2,
  WheaErrSevNone = 3
};

// 0x4 (4) bytes
enum _MM_PAGE_ACCESS_TYPE {

  MmPteAccessType = 0,
  MmCcReadAheadType = 1,
  MmPfnRepurposeType = 2,
  MmMaximumPageAccessType = 3
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
enum _IO_PRIORITY_HINT {

  IoPriorityVeryLow = 0,
  IoPriorityLow = 1,
  IoPriorityNormal = 2,
  IoPriorityHigh = 3,
  IoPriorityCritical = 4,
  MaxIoPriorityTypes = 5
};

// 0x4 (4) bytes
enum _IRQ_PRIORITY {

  IrqPriorityUndefined = 0,
  IrqPriorityLow = 1,
  IrqPriorityNormal = 2,
  IrqPriorityHigh = 3
};

// 0x4 (4) bytes
enum _IRQ_DEVICE_POLICY {

  IrqPolicyMachineDefault = 0,
  IrqPolicyAllCloseProcessors = 1,
  IrqPolicyOneCloseProcessor = 2,
  IrqPolicyAllProcessorsInMachine = 3,
  IrqPolicySpecifiedProcessors = 4,
  IrqPolicySpreadMessagesAcrossAllProcessors = 5
};

// 0x4 (4) bytes
enum _SECURITY_IMPERSONATION_LEVEL {

  SecurityAnonymous = 0,
  SecurityIdentification = 1,
  SecurityImpersonation = 2,
  SecurityDelegation = 3
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
  MaximumInterfaceType = 17
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
  FileFsVolumeFlagsInformation = 10,
  FileFsMaximumInformation = 11
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
  FileMaximumInformation = 51
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
enum _EXCEPTION_DISPOSITION {

  ExceptionContinueExecution = 0,
  ExceptionContinueSearch = 1,
  ExceptionNestedException = 2,
  ExceptionCollidedUnwind = 3
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

typedef uint16_t USHORT;

typedef uint64_t ULONGLONG;

// 0x8 (8) bytes
struct _ALPC_COMPLETION_LIST_STATE {
  union {
    struct {
      volatile ULONGLONG Head : 24;              // offset: 0x0 (0)
      volatile ULONGLONG Tail : 24;              // offset: 0x0 (0)
      volatile ULONGLONG ActiveThreadCount : 16; // offset: 0x0 (0)
    } s1;                                        // offset: 0x0 (0)
    volatile ULONGLONG Value;                    // offset: 0x0 (0)

  } u1; // offset: 0x0 (0)
};

typedef uint8_t UCHAR;

// 0x1b (27) bytes
struct _TOKEN_AUDIT_POLICY {
  UCHAR PerUserPolicy[27]; // offset: 0x0 (0)
};

// 0x1c (28) bytes
struct _SEP_AUDIT_POLICY {
  struct _TOKEN_AUDIT_POLICY AdtTokenPolicy; // offset: 0x0 (0)
  UCHAR PolicySetStatus;                     // offset: 0x1b (27)
};

// 0x2 (2) bytes
struct _MMPFNENTRY {
  UCHAR PageLocation : 3;     // offset: 0x0 (0)
  UCHAR WriteInProgress : 1;  // offset: 0x0 (0)
  UCHAR Modified : 1;         // offset: 0x0 (0)
  UCHAR ReadInProgress : 1;   // offset: 0x0 (0)
  UCHAR CacheAttribute : 2;   // offset: 0x0 (0)
  UCHAR Priority : 3;         // offset: 0x1 (1)
  UCHAR Rom : 1;              // offset: 0x1 (1)
  UCHAR InPageError : 1;      // offset: 0x1 (1)
  UCHAR KernelStack : 1;      // offset: 0x1 (1)
  UCHAR RemovalRequested : 1; // offset: 0x1 (1)
  UCHAR ParityError : 1;      // offset: 0x1 (1)
};

// 0x8 (8) bytes
struct _VI_DEADLOCK_ADDRESS_RANGE {
  UCHAR *Start; // offset: 0x0 (0)
  UCHAR *End;   // offset: 0x4 (4)
};

// 0x1 (1) bytes
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS {
  UCHAR FRUId : 1;    // offset: 0x0 (0)
  UCHAR FRUText : 1;  // offset: 0x0 (0)
  UCHAR Reserved : 6; // offset: 0x0 (0)
  UCHAR AsUCHAR;      // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MMSUPPORT_FLAGS {
  UCHAR SessionSpace : 1;          // offset: 0x0 (0)
  UCHAR ModwriterAttached : 1;     // offset: 0x0 (0)
  UCHAR TrimHard : 1;              // offset: 0x0 (0)
  UCHAR MaximumWorkingSetHard : 1; // offset: 0x0 (0)
  UCHAR ForceTrim : 1;             // offset: 0x0 (0)
  UCHAR MinimumWorkingSetHard : 1; // offset: 0x0 (0)
  UCHAR SessionMaster : 1;         // offset: 0x0 (0)
  UCHAR TrimmerAttached : 1;       // offset: 0x0 (0)
  UCHAR TrimmerDetaching : 1;      // offset: 0x1 (1)
  UCHAR Reserved : 3;              // offset: 0x1 (1)
  UCHAR PageStealers : 4;          // offset: 0x1 (1)
  UCHAR MemoryPriority : 8;        // offset: 0x2 (2)
  UCHAR WsleDeleted : 1;           // offset: 0x3 (3)
  UCHAR VmExiting : 1;             // offset: 0x3 (3)
  UCHAR ExpansionFailed : 1;       // offset: 0x3 (3)
  UCHAR Available : 5;             // offset: 0x3 (3)
};

// 0x2024 (8228) bytes
struct _KiIoAccessMap {
  UCHAR DirectionMap[32]; // offset: 0x0 (0)
  UCHAR IoMap[8196];      // offset: 0x20 (32)
};

// 0x1 (1) bytes
struct _KEXECUTE_OPTIONS {
  UCHAR ExecuteDisable : 1;                  // offset: 0x0 (0)
  UCHAR ExecuteEnable : 1;                   // offset: 0x0 (0)
  UCHAR DisableThunkEmulation : 1;           // offset: 0x0 (0)
  UCHAR Permanent : 1;                       // offset: 0x0 (0)
  UCHAR ExecuteDispatchEnable : 1;           // offset: 0x0 (0)
  UCHAR ImageDispatchEnable : 1;             // offset: 0x0 (0)
  UCHAR DisableExceptionChainValidation : 1; // offset: 0x0 (0)
  UCHAR Spare : 1;                           // offset: 0x0 (0)
};

// 0x1 (1) bytes
struct _flags {
  UCHAR Removable : 1; // offset: 0x0 (0)
  UCHAR Fill : 7;      // offset: 0x0 (0)
};

// 0x6 (6) bytes
struct _SID_IDENTIFIER_AUTHORITY {
  UCHAR Value[6]; // offset: 0x0 (0)
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
struct _HEAP_FREE_ENTRY_EXTRA {
  USHORT TagIndex;           // offset: 0x0 (0)
  USHORT FreeBackTraceIndex; // offset: 0x2 (2)
};

// 0x10 (16) bytes
struct _RTL_ATOM_TABLE_ENTRY {
  struct _RTL_ATOM_TABLE_ENTRY *HashLink; // offset: 0x0 (0)
  USHORT HandleIndex;                     // offset: 0x4 (4)
  USHORT Atom;                            // offset: 0x6 (6)
  USHORT ReferenceCount;                  // offset: 0x8 (8)
  UCHAR Flags;                            // offset: 0xa (10)
  UCHAR NameLength;                       // offset: 0xb (11)
  WCHAR Name[1];                          // offset: 0xc (12)
};

// 0x8 (8) bytes
struct _ACL {
  UCHAR AclRevision; // offset: 0x0 (0)
  UCHAR Sbz1;        // offset: 0x1 (1)
  USHORT AclSize;    // offset: 0x2 (2)
  USHORT AceCount;   // offset: 0x4 (4)
  USHORT Sbz2;       // offset: 0x6 (6)
};

// 0x4 (4) bytes
struct _WMI_TRACE_PACKET {
  USHORT Size; // offset: 0x0 (0)
  union {
    USHORT HookId; // offset: 0x2 (2)
    struct {
      UCHAR Type;  // offset: 0x2 (2)
      UCHAR Group; // offset: 0x3 (3)
    };
  };
};

// 0x4 (4) bytes
struct _ETW_BUFFER_CONTEXT {
  UCHAR ProcessorNumber; // offset: 0x0 (0)
  UCHAR Alignment;       // offset: 0x1 (1)
  USHORT LoggerId;       // offset: 0x2 (2)
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

// 0x4 (4) bytes
struct _MMSUBSECTION_FLAGS {
  USHORT SubsectionAccessed : 1;  // offset: 0x0 (0)
  USHORT Protection : 5;          // offset: 0x0 (0)
  USHORT StartingSector4132 : 10; // offset: 0x0 (0)
  USHORT SubsectionStatic : 1;    // offset: 0x2 (2)
  USHORT GlobalMemory : 1;        // offset: 0x2 (2)
  USHORT DirtyPages : 1;          // offset: 0x2 (2)
  USHORT Spare : 1;               // offset: 0x2 (2)
  USHORT SectorEndOffset : 12;    // offset: 0x2 (2)
};

// 0x2 (2) bytes
union _WHEA_PCIXBUS_ID {
  struct {
    UCHAR BusNumber;  // offset: 0x0 (0)
    UCHAR BusSegment; // offset: 0x1 (1)
  };
  USHORT AsUSHORT; // offset: 0x0 (0)
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
struct _KIDTENTRY {
  USHORT Offset;         // offset: 0x0 (0)
  USHORT Selector;       // offset: 0x2 (2)
  USHORT Access;         // offset: 0x4 (4)
  USHORT ExtendedOffset; // offset: 0x6 (6)
};

// 0x8 (8) bytes
struct _STRING {
  USHORT Length;        // offset: 0x0 (0)
  USHORT MaximumLength; // offset: 0x2 (2)
  CHAR *Buffer;         // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _MI_COLOR_BASE {
  USHORT *ColorPointer; // offset: 0x0 (0)
  USHORT ColorMask;     // offset: 0x4 (4)
  USHORT ColorNode;     // offset: 0x6 (6)
};

// 0x8 (8) bytes
struct _UNICODE_STRING {
  USHORT Length;        // offset: 0x0 (0)
  USHORT MaximumLength; // offset: 0x2 (2)
  USHORT *Buffer;       // offset: 0x4 (4)
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
struct _SINGLE_LIST_ENTRY {
  struct _SINGLE_LIST_ENTRY *Next; // offset: 0x0 (0)
};

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

// 0x8 (8) bytes
struct _ARC_DISK_INFORMATION {
  struct _LIST_ENTRY DiskSignatures; // offset: 0x0 (0)
};

typedef void VOID;

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

// 0x24 (36) bytes
struct _VI_FAULT_TRACE {
  struct _ETHREAD *Thread; // offset: 0x0 (0)
  VOID *StackTrace[8];     // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _VF_TRACKER_STAMP {
  VOID *Thread;        // offset: 0x0 (0)
  UCHAR Flags : 8;     // offset: 0x4 (4)
  UCHAR OldIrql : 8;   // offset: 0x5 (5)
  UCHAR NewIrql : 8;   // offset: 0x6 (6)
  UCHAR Processor : 8; // offset: 0x7 (7)
};

// 0x4 (4) bytes
struct _ALPC_HANDLE_ENTRY {
  VOID *Object; // offset: 0x0 (0)
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

// 0xc (12) bytes
struct _NLS_DATA_BLOCK {
  VOID *AnsiCodePageData;     // offset: 0x0 (0)
  VOID *OemCodePageData;      // offset: 0x4 (4)
  VOID *UnicodeCaseTableData; // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _OBJECT_HEADER_CREATOR_INFO {
  struct _LIST_ENTRY TypeList;  // offset: 0x0 (0)
  VOID *CreatorUniqueProcess;   // offset: 0x8 (8)
  USHORT CreatorBackTraceIndex; // offset: 0xc (12)
  USHORT Reserved;              // offset: 0xe (14)
};

// 0x8 (8) bytes
struct _TXN_PARAMETER_BLOCK {
  USHORT Length;           // offset: 0x0 (0)
  USHORT TxFsContext;      // offset: 0x2 (2)
  VOID *TransactionObject; // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _IO_DRIVER_CREATE_CONTEXT {
  SHORT Size;                                 // offset: 0x0 (0)
  struct _ECP_LIST *ExtraCreateParameter;     // offset: 0x4 (4)
  VOID *DeviceObjectHint;                     // offset: 0x8 (8)
  struct _TXN_PARAMETER_BLOCK *TxnParameters; // offset: 0xc (12)
};

// 0x10 (16) bytes
struct _SECURITY_SUBJECT_CONTEXT {
  VOID *ClientToken;                                     // offset: 0x0 (0)
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // offset: 0x4 (4)
  VOID *PrimaryToken;                                    // offset: 0x8 (8)
  VOID *ProcessAuditId;                                  // offset: 0xc (12)
};

// 0x40 (64) bytes
struct _OBJECT_REF_TRACE {
  VOID *StackTrace[16]; // offset: 0x0 (0)
};

// 0x8040 (32832) bytes
struct _STACK_TABLE {
  USHORT NumStackTraces;                    // offset: 0x0 (0)
  USHORT TraceCapacity;                     // offset: 0x2 (2)
  struct _OBJECT_REF_TRACE *StackTrace[16]; // offset: 0x4 (4)
  USHORT StackTableHash[16381];             // offset: 0x44 (68)
};

// 0xc (12) bytes
struct _CURDIR {
  struct _UNICODE_STRING DosPath; // offset: 0x0 (0)
  VOID *Handle;                   // offset: 0x8 (8)
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

// 0x8 (8) bytes
struct _CLIENT_ID {
  VOID *UniqueProcess; // offset: 0x0 (0)
  VOID *UniqueThread;  // offset: 0x4 (4)
};

// 0x10 (16) bytes
struct _CACHE_MANAGER_CALLBACKS {
  UCHAR (*AcquireForLazyWrite)(VOID *arg1, UCHAR arg2); // offset: 0x0 (0)
  VOID (*ReleaseFromLazyWrite)(VOID *arg1);             // offset: 0x4 (4)
  UCHAR (*AcquireForReadAhead)(VOID *arg1, UCHAR arg2); // offset: 0x8 (8)
  VOID (*ReleaseFromReadAhead)(VOID *arg1);             // offset: 0xc (12)
};

// 0x10 (16) bytes
struct _WORK_QUEUE_ITEM {
  struct _LIST_ENTRY List;           // offset: 0x0 (0)
  VOID (*WorkerRoutine)(VOID *arg1); // offset: 0x8 (8)
  VOID *Parameter;                   // offset: 0xc (12)
};

// 0x10 (16) bytes
struct _CM_WORKITEM {
  struct _LIST_ENTRY ListEntry;      // offset: 0x0 (0)
  VOID (*WorkerRoutine)(VOID *arg1); // offset: 0x8 (8)
  VOID *Parameter;                   // offset: 0xc (12)
};

// 0x10 (16) bytes
struct _INTERFACE {
  USHORT Size;                              // offset: 0x0 (0)
  USHORT Version;                           // offset: 0x2 (2)
  VOID *Context;                            // offset: 0x4 (4)
  VOID (*InterfaceReference)(VOID *arg1);   // offset: 0x8 (8)
  VOID (*InterfaceDereference)(VOID *arg1); // offset: 0xc (12)
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

// 0x20 (32) bytes
struct _KDPC {
  UCHAR Type;                      // offset: 0x0 (0)
  UCHAR Importance;                // offset: 0x1 (1)
  volatile USHORT Number;          // offset: 0x2 (2)
  struct _LIST_ENTRY DpcListEntry; // offset: 0x4 (4)
  VOID (*DeferredRoutine)
  (struct _KDPC *arg1, VOID *arg2, VOID *arg3, VOID *arg4); // offset: 0xc (12)
  VOID *DeferredContext;                                    // offset: 0x10 (16)
  VOID *SystemArgument1;                                    // offset: 0x14 (20)
  VOID *SystemArgument2;                                    // offset: 0x18 (24)
  VOID *DpcData;                                            // offset: 0x1c (28)
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

// 0x8 (8) bytes
struct _TP_TASK_CALLBACKS {
  VOID (*ExecuteCallback)
  (struct _TP_CALLBACK_INSTANCE *arg1,
   struct _TP_TASK *arg2); // offset: 0x0 (0)
  VOID (*Unposted)
  (struct _TP_TASK *arg1, struct _TP_POOL *arg2); // offset: 0x4 (4)
};

// 0x4 (4) bytes
struct _TP_TASK {
  struct _TP_TASK_CALLBACKS *Callbacks; // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _QUAD {
  union {
    LONGLONG UseThisFieldToCopy; // offset: 0x0 (0)
    double DoNotUseThisField;    // offset: 0x0 (0)
  };
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

// 0x8 (8) bytes
struct _VACB_LEVEL_REFERENCE {
  LONG Reference;        // offset: 0x0 (0)
  LONG SpecialReference; // offset: 0x4 (4)
};

// 0x4 (4) bytes
struct _DBGKD_CONTINUE {
  LONG ContinueStatus; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _DISPATCHER_HEADER {
  union {
    struct {
      UCHAR Type; // offset: 0x0 (0)
      union {
        UCHAR Abandoned;  // offset: 0x1 (1)
        UCHAR Absolute;   // offset: 0x1 (1)
        UCHAR NpxIrql;    // offset: 0x1 (1)
        UCHAR Signalling; // offset: 0x1 (1)
      };
      union {
        UCHAR Size; // offset: 0x2 (2)
        UCHAR Hand; // offset: 0x2 (2)
      };
      union {
        UCHAR Inserted;    // offset: 0x3 (3)
        UCHAR DebugActive; // offset: 0x3 (3)
        UCHAR DpcActive;   // offset: 0x3 (3)
      };
    };
    volatile LONG Lock; // offset: 0x0 (0)
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

// 0x10 (16) bytes
struct _KGATE {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 (0)
};

// 0x14 (20) bytes
struct _MI_SECTION_CREATION_GATE {
  struct _MI_SECTION_CREATION_GATE *Next; // offset: 0x0 (0)
  struct _KGATE Gate;                     // offset: 0x4 (4)
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

// 0xc (12) bytes
struct _VF_BTS_RECORD {
  VOID *JumpedFrom;    // offset: 0x0 (0)
  VOID *JumpedTo;      // offset: 0x4 (4)
  ULONG Unused1 : 3;   // offset: 0x8 (8)
  ULONG Predicted : 4; // offset: 0x8 (8)
  ULONG Unused2 : 25;  // offset: 0x8 (8)
};

// 0x40e0 (16608) bytes
struct _VI_DEADLOCK_GLOBALS {
  LONGLONG TimeAcquire;                 // offset: 0x0 (0)
  LONGLONG TimeRelease;                 // offset: 0x8 (8)
  struct _LIST_ENTRY *ResourceDatabase; // offset: 0x10 (16)
  ULONG ResourceDatabaseCount;          // offset: 0x14 (20)
  struct _VI_DEADLOCK_ADDRESS_RANGE
      ResourceAddressRange[1023];     // offset: 0x18 (24)
  struct _LIST_ENTRY *ThreadDatabase; // offset: 0x2010 (8208)
  ULONG ThreadDatabaseCount;          // offset: 0x2014 (8212)
  struct _VI_DEADLOCK_ADDRESS_RANGE
      ThreadAddressRange[1023];              // offset: 0x2018 (8216)
  ULONG AllocationFailures;                  // offset: 0x4010 (16400)
  ULONG NodesTrimmedBasedOnAge;              // offset: 0x4014 (16404)
  ULONG NodesTrimmedBasedOnCount;            // offset: 0x4018 (16408)
  ULONG NodesSearched;                       // offset: 0x401c (16412)
  ULONG MaxNodesSearched;                    // offset: 0x4020 (16416)
  ULONG SequenceNumber;                      // offset: 0x4024 (16420)
  ULONG RecursionDepthLimit;                 // offset: 0x4028 (16424)
  ULONG SearchedNodesLimit;                  // offset: 0x402c (16428)
  ULONG DepthLimitHits;                      // offset: 0x4030 (16432)
  ULONG SearchLimitHits;                     // offset: 0x4034 (16436)
  ULONG ABC_ACB_Skipped;                     // offset: 0x4038 (16440)
  ULONG OutOfOrderReleases;                  // offset: 0x403c (16444)
  ULONG NodesReleasedOutOfOrder;             // offset: 0x4040 (16448)
  ULONG TotalReleases;                       // offset: 0x4044 (16452)
  ULONG RootNodesDeleted;                    // offset: 0x4048 (16456)
  ULONG ForgetHistoryCounter;                // offset: 0x404c (16460)
  VOID *Instigator;                          // offset: 0x4050 (16464)
  ULONG NumberOfParticipants;                // offset: 0x4054 (16468)
  struct _VI_DEADLOCK_NODE *Participant[32]; // offset: 0x4058 (16472)
  LONG ChildrenCountWatermark;               // offset: 0x40d8 (16600)
};

// 0x78 (120) bytes
struct _MM_DRIVER_VERIFIER_DATA {
  ULONG Level;                                    // offset: 0x0 (0)
  ULONG RaiseIrqls;                               // offset: 0x4 (4)
  ULONG AcquireSpinLocks;                         // offset: 0x8 (8)
  ULONG SynchronizeExecutions;                    // offset: 0xc (12)
  ULONG AllocationsAttempted;                     // offset: 0x10 (16)
  ULONG AllocationsSucceeded;                     // offset: 0x14 (20)
  volatile ULONG AllocationsSucceededSpecialPool; // offset: 0x18 (24)
  ULONG AllocationsWithNoTag;                     // offset: 0x1c (28)
  ULONG TrimRequests;                             // offset: 0x20 (32)
  ULONG Trims;                                    // offset: 0x24 (36)
  ULONG AllocationsFailed;                        // offset: 0x28 (40)
  ULONG AllocationsFailedDeliberately;            // offset: 0x2c (44)
  ULONG Loads;                                    // offset: 0x30 (48)
  ULONG Unloads;                                  // offset: 0x34 (52)
  ULONG UnTrackedPool;                            // offset: 0x38 (56)
  ULONG UserTrims;                                // offset: 0x3c (60)
  ULONG CurrentPagedPoolAllocations;              // offset: 0x40 (64)
  ULONG CurrentNonPagedPoolAllocations;           // offset: 0x44 (68)
  ULONG PeakPagedPoolAllocations;                 // offset: 0x48 (72)
  ULONG PeakNonPagedPoolAllocations;              // offset: 0x4c (76)
  ULONG PagedBytes;                               // offset: 0x50 (80)
  ULONG NonPagedBytes;                            // offset: 0x54 (84)
  ULONG PeakPagedBytes;                           // offset: 0x58 (88)
  ULONG PeakNonPagedBytes;                        // offset: 0x5c (92)
  ULONG BurstAllocationsFailedDeliberately;       // offset: 0x60 (96)
  ULONG SessionTrims;                             // offset: 0x64 (100)
  ULONG OptionChanges;                            // offset: 0x68 (104)
  ULONG VerifyMode;                               // offset: 0x6c (108)
  struct _UNICODE_STRING PreviousBucketName;      // offset: 0x70 (112)
};

// 0xc (12) bytes
struct _SHARED_CACHE_MAP_LIST_CURSOR {
  struct _LIST_ENTRY SharedCacheMapLinks; // offset: 0x0 (0)
  ULONG Flags;                            // offset: 0x8 (8)
};

// 0x4 (4) bytes
union EX_QUEUE_WORKER_INFO {
  ULONG QueueDisabled : 1;          // offset: 0x0 (0)
  ULONG MakeThreadsAsNecessary : 1; // offset: 0x0 (0)
  ULONG WaitMode : 1;               // offset: 0x0 (0)
  ULONG WorkerCount : 29;           // offset: 0x0 (0)
  LONG QueueWorkerInfo;             // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _MMPFNLIST {
  ULONG Total;            // offset: 0x0 (0)
  enum _MMLISTS ListName; // offset: 0x4 (4)
  ULONG Flink;            // offset: 0x8 (8)
  ULONG Blink;            // offset: 0xc (12)
};

// 0x30 (48) bytes
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
  ULONG Spare : 28;             // offset: 0x24 (36)
  VOID *CallingAddress;         // offset: 0x28 (40)
  VOID *CallersCaller;          // offset: 0x2c (44)
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

// 0x8 (8) bytes
struct _MMVIEW {
  ULONG Entry; // offset: 0x0 (0)
  union {
    ULONG Writable : 1;                // offset: 0x4 (4)
    struct _CONTROL_AREA *ControlArea; // offset: 0x4 (4)
  };
};

// 0x4 (4) bytes
struct _MM_SESSION_SPACE_FLAGS {
  ULONG Initialized : 1;          // offset: 0x0 (0)
  ULONG DeletePending : 1;        // offset: 0x0 (0)
  ULONG PoolInitialized : 1;      // offset: 0x0 (0)
  ULONG DynamicVaInitialized : 1; // offset: 0x0 (0)
  ULONG WsInitialized : 1;        // offset: 0x0 (0)
  ULONG PoolDestroyed : 1;        // offset: 0x0 (0)
  ULONG ObjectInitialized : 1;    // offset: 0x0 (0)
  ULONG Filler : 25;              // offset: 0x0 (0)
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

// 0x28 (40) bytes
struct _PO_NOTIFY_ORDER_LEVEL {
  ULONG DeviceCount;             // offset: 0x0 (0)
  ULONG ActiveCount;             // offset: 0x4 (4)
  struct _LIST_ENTRY WaitSleep;  // offset: 0x8 (8)
  struct _LIST_ENTRY ReadySleep; // offset: 0x10 (16)
  struct _LIST_ENTRY ReadyS0;    // offset: 0x18 (24)
  struct _LIST_ENTRY WaitS0;     // offset: 0x20 (32)
};

// 0x148 (328) bytes
struct _PO_DEVICE_NOTIFY_ORDER {
  UCHAR Locked;                                // offset: 0x0 (0)
  struct _DEVICE_OBJECT **WarmEjectPdoPointer; // offset: 0x4 (4)
  struct _PO_NOTIFY_ORDER_LEVEL OrderLevel[8]; // offset: 0x8 (8)
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
  UCHAR spare2[3];                                // offset: 0x12 (18)
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

// 0x50 (80) bytes
struct _POP_DISPLAY_RESUME_CONTEXT {
  struct _WORK_QUEUE_ITEM WorkItem; // offset: 0x0 (0)
  struct _ETHREAD *WorkerThread;    // offset: 0x10 (16)
  struct _KEVENT PrepareUIEvent;    // offset: 0x14 (20)
  struct _KEVENT PowerOnEvent;      // offset: 0x24 (36)
  struct _KEVENT DoneEvent;         // offset: 0x34 (52)
  ULONG WorkerQueued;               // offset: 0x44 (68)
  ULONG WorkerAbort;                // offset: 0x48 (72)
  ULONG NoResumeUI;                 // offset: 0x4c (76)
};

// 0x188 (392) bytes
struct _POP_DEVICE_SYS_STATE {
  UCHAR IrpMinor;                        // offset: 0x0 (0)
  enum _SYSTEM_POWER_STATE SystemState;  // offset: 0x4 (4)
  ULONG SpinLock;                        // offset: 0x8 (8)
  struct _KTHREAD *Thread;               // offset: 0xc (12)
  struct _KEVENT *AbortEvent;            // offset: 0x10 (16)
  struct _KSEMAPHORE *ReadySemaphore;    // offset: 0x14 (20)
  struct _KSEMAPHORE *FinishedSemaphore; // offset: 0x18 (24)
  UCHAR GetNewDeviceList;                // offset: 0x1c (28)
  struct _PO_DEVICE_NOTIFY_ORDER Order;  // offset: 0x20 (32)
  LONG NotifyGdiLevelForPowerOn;         // offset: 0x168 (360)
  LONG NotifyGdiLevelForResumeUI;        // offset: 0x16c (364)
  struct _LIST_ENTRY Pending;            // offset: 0x170 (368)
  LONG Status;                           // offset: 0x178 (376)
  struct _DEVICE_OBJECT *FailedDevice;   // offset: 0x17c (380)
  UCHAR Waking;                          // offset: 0x180 (384)
  UCHAR Cancelled;                       // offset: 0x181 (385)
  UCHAR IgnoreErrors;                    // offset: 0x182 (386)
  UCHAR IgnoreNotImplemented;            // offset: 0x183 (387)
  UCHAR TimeRefreshLockAcquired;         // offset: 0x184 (388)
};

// 0x20 (32) bytes
struct _POP_SHUTDOWN_BUG_CHECK {
  VOID *ThreadHandle; // offset: 0x0 (0)
  VOID *ThreadId;     // offset: 0x4 (4)
  VOID *ProcessId;    // offset: 0x8 (8)
  ULONG Code;         // offset: 0xc (12)
  ULONG Parameter1;   // offset: 0x10 (16)
  ULONG Parameter2;   // offset: 0x14 (20)
  ULONG Parameter3;   // offset: 0x18 (24)
  ULONG Parameter4;   // offset: 0x1c (28)
};

// 0x4 (4) bytes
struct _RTL_HANDLE_TABLE_ENTRY {
  union {
    ULONG Flags;                              // offset: 0x0 (0)
    struct _RTL_HANDLE_TABLE_ENTRY *NextFree; // offset: 0x0 (0)
  };
};

// 0x1c (28) bytes
struct _HEAP_DEBUGGING_INFORMATION {
  VOID *InterceptorFunction; // offset: 0x0 (0)
  USHORT InterceptorValue;   // offset: 0x4 (4)
  ULONG ExtendedOptions;     // offset: 0x8 (8)
  ULONG StackTraceDepth;     // offset: 0xc (12)
  ULONG MinTotalBlockSize;   // offset: 0x10 (16)
  ULONG MaxTotalBlockSize;   // offset: 0x14 (20)
  LONG (*HeapLeakEnumerationRoutine)
  (LONG arg1, VOID *arg2, VOID *arg3, ULONG arg4, ULONG arg5,
   VOID *arg6); // offset: 0x18 (24)
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
struct _POP_ACTION_TRIGGER {
  enum POP_POLICY_DEVICE_TYPE Type; // offset: 0x0 (0)
  ULONG Flags;                      // offset: 0x4 (4)
  struct _POP_TRIGGER_WAIT *Wait;   // offset: 0x8 (8)
  union {
    struct {
      ULONG Level; // offset: 0x0 (0)
    } Battery;     // offset: 0xc (12)
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
struct _KGUARDED_MUTEX {
  volatile LONG Count;    // offset: 0x0 (0)
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

// 0x38 (56) bytes
struct _MMSESSION {
  struct _KGUARDED_MUTEX SystemSpaceViewLock;         // offset: 0x0 (0)
  struct _KGUARDED_MUTEX *SystemSpaceViewLockPointer; // offset: 0x20 (32)
  struct _MMVIEW *SystemSpaceViewTable;               // offset: 0x24 (36)
  ULONG SystemSpaceHashSize;                          // offset: 0x28 (40)
  ULONG SystemSpaceHashEntries;                       // offset: 0x2c (44)
  ULONG SystemSpaceHashKey;                           // offset: 0x30 (48)
  ULONG BitmapFailures;                               // offset: 0x34 (52)
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
  volatile LONG Key;            // offset: 0x0 (0)
  volatile LONG NonPagedAllocs; // offset: 0x4 (4)
  volatile LONG NonPagedFrees;  // offset: 0x8 (8)
  ULONG NonPagedBytes;          // offset: 0xc (12)
  ULONG PagedAllocs;            // offset: 0x10 (16)
  ULONG PagedFrees;             // offset: 0x14 (20)
  ULONG PagedBytes;             // offset: 0x18 (24)
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
  UCHAR Processor;     // offset: 0x6 (6)
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

// 0x20 (32) bytes
struct _HIVE_LIST_ENTRY {
  USHORT *FileName;        // offset: 0x0 (0)
  USHORT *BaseName;        // offset: 0x4 (4)
  USHORT *RegRootName;     // offset: 0x8 (8)
  struct _CMHIVE *CmHive;  // offset: 0xc (12)
  ULONG HHiveFlags;        // offset: 0x10 (16)
  ULONG CmHiveFlags;       // offset: 0x14 (20)
  struct _CMHIVE *CmHive2; // offset: 0x18 (24)
  UCHAR ThreadFinished;    // offset: 0x1c (28)
  UCHAR ThreadStarted;     // offset: 0x1d (29)
  UCHAR Allocate;          // offset: 0x1e (30)
  UCHAR WinPERequired;     // offset: 0x1f (31)
};

// 0x1034 (4148) bytes
struct _POOL_DESCRIPTOR {
  enum _POOL_TYPE PoolType;                 // offset: 0x0 (0)
  ULONG PoolIndex;                          // offset: 0x4 (4)
  volatile LONG RunningAllocs;              // offset: 0x8 (8)
  volatile LONG RunningDeAllocs;            // offset: 0xc (12)
  volatile LONG TotalPages;                 // offset: 0x10 (16)
  volatile LONG TotalBigPages;              // offset: 0x14 (20)
  ULONG Threshold;                          // offset: 0x18 (24)
  VOID *LockAddress;                        // offset: 0x1c (28)
  VOID **volatile PendingFrees;             // offset: 0x20 (32)
  volatile LONG ThreadsProcessingDeferrals; // offset: 0x24 (36)
  volatile LONG PendingFreeDepth;           // offset: 0x28 (40)
  volatile ULONG TotalBytes;                // offset: 0x2c (44)
  ULONG Spare0;                             // offset: 0x30 (48)
  struct _LIST_ENTRY ListHeads[512];        // offset: 0x34 (52)
};

// 0x18 (24) bytes
struct _HEAP_UCR_DESCRIPTOR {
  struct _LIST_ENTRY ListEntry;    // offset: 0x0 (0)
  struct _LIST_ENTRY SegmentEntry; // offset: 0x8 (8)
  VOID *Address;                   // offset: 0x10 (16)
  ULONG Size;                      // offset: 0x14 (20)
};

// 0x4 (4) bytes
struct _MMSECURE_FLAGS {
  ULONG ReadOnly : 1; // offset: 0x0 (0)
  ULONG NoWrite : 1;  // offset: 0x0 (0)
  ULONG Spare : 10;   // offset: 0x0 (0)
};

// 0x8 (8) bytes
struct _MMADDRESS_LIST {
  union {
    struct _MMSECURE_FLAGS Flags; // offset: 0x0 (0)
    VOID *StartVa;                // offset: 0x0 (0)

  } u1;        // offset: 0x0 (0)
  VOID *EndVa; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _OBJECT_REF_STACK_INFO {
  ULONG Sequence;   // offset: 0x0 (0)
  USHORT Index;     // offset: 0x4 (4)
  USHORT NumTraces; // offset: 0x6 (6)
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
struct _THERMAL_INFORMATION_EX {
  ULONG ThermalStamp;          // offset: 0x0 (0)
  ULONG ThermalConstant1;      // offset: 0x4 (4)
  ULONG ThermalConstant2;      // offset: 0x8 (8)
  ULONG Processors;            // offset: 0xc (12)
  ULONG SamplingPeriod;        // offset: 0x10 (16)
  ULONG CurrentTemperature;    // offset: 0x14 (20)
  ULONG PassiveTripPoint;      // offset: 0x18 (24)
  ULONG CriticalTripPoint;     // offset: 0x1c (28)
  UCHAR ActiveTripPointCount;  // offset: 0x20 (32)
  ULONG ActiveTripPoint[10];   // offset: 0x24 (36)
  ULONG S4TransitionTripPoint; // offset: 0x4c (76)
};

// 0x6c (108) bytes
struct _VI_CANCEL_GLOBALS {
  ULONG CancelLock;  // offset: 0x0 (0)
  ULONG IssueLock;   // offset: 0x4 (4)
  LONG Counters[25]; // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _POOL_TRACKER_BIG_PAGES {
  VOID *Va;            // offset: 0x0 (0)
  ULONG Key;           // offset: 0x4 (4)
  ULONG PoolType;      // offset: 0x8 (8)
  ULONG NumberOfBytes; // offset: 0xc (12)
};

// 0x14 (20) bytes
struct _SYSPTES_HEADER {
  struct _LIST_ENTRY ListHead; // offset: 0x0 (0)
  ULONG Count;                 // offset: 0x8 (8)
  ULONG NumberOfEntries;       // offset: 0xc (12)
  ULONG NumberOfEntriesPeak;   // offset: 0x10 (16)
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
struct _SID_AND_ATTRIBUTES {
  VOID *Sid;        // offset: 0x0 (0)
  ULONG Attributes; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _ALPC_MESSAGE_ATTRIBUTES {
  ULONG AllocatedAttributes; // offset: 0x0 (0)
  ULONG ValidAttributes;     // offset: 0x4 (4)
};

// 0xc (12) bytes
struct _REMOTE_PORT_VIEW {
  ULONG Length;   // offset: 0x0 (0)
  ULONG ViewSize; // offset: 0x4 (4)
  VOID *ViewBase; // offset: 0x8 (8)
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

// 0x18 (24) bytes
struct _ALPC_MESSAGE_ZONE {
  struct _MDL *Mdl;  // offset: 0x0 (0)
  VOID *UserVa;      // offset: 0x4 (4)
  VOID *UserLimit;   // offset: 0x8 (8)
  VOID *SystemVa;    // offset: 0xc (12)
  VOID *SystemLimit; // offset: 0x10 (16)
  ULONG Size;        // offset: 0x14 (20)
};

// 0x24 (36) bytes
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
  struct _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY Entry[0]; // offset: 0x24 (36)
};

// 0xc (12) bytes
struct _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY {
  struct _SINGLE_LIST_ENTRY ListEntry;                 // offset: 0x0 (0)
  VOID *Packet;                                        // offset: 0x4 (4)
  struct _ALPC_COMPLETION_PACKET_LOOKASIDE *Lookaside; // offset: 0x8 (8)
};

// 0x24 (36) bytes
struct _BLOB_TYPE {
  enum _BLOB_ID ResourceId;             // offset: 0x0 (0)
  ULONG PoolTag;                        // offset: 0x4 (4)
  ULONG Flags;                          // offset: 0x8 (8)
  ULONG CreatedObjects;                 // offset: 0xc (12)
  ULONG DeletedObjects;                 // offset: 0x10 (16)
  VOID (*DeleteProcedure)(VOID *arg1);  // offset: 0x14 (20)
  LONG (*DestroyProcedure)(VOID *arg1); // offset: 0x18 (24)
  ULONG UsualSize;                      // offset: 0x1c (28)
  ULONG LookasideIndex;                 // offset: 0x20 (32)
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
struct _TRACE_ENABLE_CONTEXT_EX {
  USHORT LoggerId;       // offset: 0x0 (0)
  UCHAR Level;           // offset: 0x2 (2)
  UCHAR InternalFlag;    // offset: 0x3 (3)
  ULONG EnableFlags;     // offset: 0x4 (4)
  ULONG EnableFlagsHigh; // offset: 0x8 (8)
  ULONG Reserved;        // offset: 0xc (12)
};

// 0x8 (8) bytes
struct _TRACE_ENABLE_CONTEXT {
  USHORT LoggerId;    // offset: 0x0 (0)
  UCHAR Level;        // offset: 0x2 (2)
  UCHAR InternalFlag; // offset: 0x3 (3)
  ULONG EnableFlags;  // offset: 0x4 (4)
};

// 0x68 (104) bytes
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
  struct _LIST_ENTRY ForwarderLinks;                       // offset: 0x50 (80)
  struct _LIST_ENTRY ServiceTagLinks;                      // offset: 0x58 (88)
  struct _LIST_ENTRY StaticLinks;                          // offset: 0x60 (96)
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
struct _HEAP_TUNING_PARAMETERS {
  ULONG CommittThresholdShift;  // offset: 0x0 (0)
  ULONG MaxPreCommittThreshold; // offset: 0x4 (4)
};

// 0x48 (72) bytes
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
  ULONG CompactHeapCalls;         // offset: 0x38 (56)
  ULONG CompactedUCRs;            // offset: 0x3c (60)
  ULONG InBlockDeccommits;        // offset: 0x40 (64)
  ULONG InBlockDeccomitSize;      // offset: 0x44 (68)
};

// 0x10 (16) bytes
struct _VACB_ARRAY_HEADER {
  struct _LIST_ENTRY Links; // offset: 0x0 (0)
  ULONG MappingCount;       // offset: 0x8 (8)
  ULONG Reserved;           // offset: 0xc (12)
};

// 0x4 (4) bytes
struct _PRIVATE_CACHE_MAP_FLAGS {
  ULONG DontUse : 16;         // offset: 0x0 (0)
  ULONG ReadAheadActive : 1;  // offset: 0x0 (0)
  ULONG ReadAheadEnabled : 1; // offset: 0x0 (0)
  ULONG PagePriority : 3;     // offset: 0x0 (0)
  ULONG Available : 11;       // offset: 0x0 (0)
};

// 0x18 (24) bytes
struct _VOLUME_CACHE_MAP {
  SHORT NodeTypeCode;                     // offset: 0x0 (0)
  SHORT NodeByteCode;                     // offset: 0x2 (2)
  ULONG UseCount;                         // offset: 0x4 (4)
  struct _DEVICE_OBJECT *DeviceObject;    // offset: 0x8 (8)
  struct _LIST_ENTRY VolumeCacheMapLinks; // offset: 0xc (12)
  ULONG Flags;                            // offset: 0x14 (20)
};

// 0x10 (16) bytes
struct _POP_CPU_INFO {
  ULONG Eax; // offset: 0x0 (0)
  ULONG Ebx; // offset: 0x4 (4)
  ULONG Ecx; // offset: 0x8 (8)
  ULONG Edx; // offset: 0xc (12)
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

// 0xc (12) bytes
struct _PNP_ASSIGN_RESOURCES_CONTEXT {
  ULONG IncludeFailedDevices;           // offset: 0x0 (0)
  ULONG DeviceCount;                    // offset: 0x4 (4)
  struct _DEVICE_OBJECT *DeviceList[1]; // offset: 0x8 (8)
};

// 0x24 (36) bytes
struct _PO_DEVICE_NOTIFY {
  struct _LIST_ENTRY Link;             // offset: 0x0 (0)
  struct _DEVICE_OBJECT *TargetDevice; // offset: 0x8 (8)
  UCHAR OrderLevel;                    // offset: 0xc (12)
  struct _DEVICE_OBJECT *DeviceObject; // offset: 0x10 (16)
  USHORT *DeviceName;                  // offset: 0x14 (20)
  USHORT *DriverName;                  // offset: 0x18 (24)
  ULONG ChildCount;                    // offset: 0x1c (28)
  ULONG ActiveChild;                   // offset: 0x20 (32)
};

// 0x8 (8) bytes
struct _DEVICE_RELATIONS {
  ULONG Count;                       // offset: 0x0 (0)
  struct _DEVICE_OBJECT *Objects[1]; // offset: 0x4 (4)
};

// 0x2c (44) bytes
struct _PNP_DEVICE_COMPLETION_QUEUE {
  ULONG SpinLock;                        // offset: 0x0 (0)
  ULONG DispatchedCount;                 // offset: 0x4 (4)
  struct _LIST_ENTRY DispatchedList;     // offset: 0x8 (8)
  struct _KSEMAPHORE CompletedSemaphore; // offset: 0x10 (16)
  struct _LIST_ENTRY CompletedList;      // offset: 0x24 (36)
};

// 0x14 (20) bytes
struct _KERNEL_STACK_SEGMENT {
  ULONG StackBase;    // offset: 0x0 (0)
  ULONG StackLimit;   // offset: 0x4 (4)
  ULONG KernelStack;  // offset: 0x8 (8)
  ULONG InitialStack; // offset: 0xc (12)
  ULONG ActualLimit;  // offset: 0x10 (16)
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

// 0x8 (8) bytes
struct _KTRANSACTION_HISTORY {
  enum {

    KTMOH_CommitTransaction_Result = 1,
    KTMOH_RollbackTransaction_Result = 2
  } RecordType;  // offset: 0x0 (0)
  ULONG Payload; // offset: 0x4 (4)
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

// 0x60 (96) bytes
struct _KTMOBJECT_NAMESPACE {
  struct _RTL_AVL_TABLE Table; // offset: 0x0 (0)
  struct _KMUTANT Mutex;       // offset: 0x38 (56)
  USHORT LinksOffset;          // offset: 0x58 (88)
  USHORT GuidOffset;           // offset: 0x5a (90)
  UCHAR Expired;               // offset: 0x5c (92)
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
  UCHAR Compressed; // offset: 0x0 (0)
  USHORT RefCount;  // offset: 0x2 (2)
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

// 0x30 (48) bytes
struct _CM_VIEW_OF_FILE {
  struct _LIST_ENTRY MappedViewLinks;  // offset: 0x0 (0)
  struct _LIST_ENTRY PinnedViewLinks;  // offset: 0x8 (8)
  struct _LIST_ENTRY FlushedViewLinks; // offset: 0x10 (16)
  struct _CMHIVE *CmHive;              // offset: 0x18 (24)
  VOID *Bcb;                           // offset: 0x1c (28)
  VOID *ViewAddress;                   // offset: 0x20 (32)
  ULONG FileOffset;                    // offset: 0x24 (36)
  ULONG Size;                          // offset: 0x28 (40)
  ULONG UseCount;                      // offset: 0x2c (44)
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
struct _CM_KEY_REFERENCE {
  ULONG KeyCell;          // offset: 0x0 (0)
  struct _HHIVE *KeyHive; // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _CHILD_LIST {
  ULONG Count; // offset: 0x0 (0)
  ULONG List;  // offset: 0x4 (4)
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

// 0x4 (4) bytes
struct _MMVAD_FLAGS3 {
  ULONG PreferredNode : 6;       // offset: 0x0 (0)
  ULONG Teb : 1;                 // offset: 0x0 (0)
  ULONG Spare : 1;               // offset: 0x0 (0)
  ULONG SequentialAccess : 1;    // offset: 0x0 (0)
  ULONG LastSequentialTrim : 15; // offset: 0x0 (0)
  ULONG Spare2 : 8;              // offset: 0x0 (0)
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

// 0x8 (8) bytes
struct _MMPAGING_FILE_FREE_ENTRY {
  struct _SINGLE_LIST_ENTRY ListEntry; // offset: 0x0 (0)
  ULONG FreeBit;                       // offset: 0x4 (4)
};

// 0x8 (8) bytes
struct _MI_EXTRA_IMAGE_INFORMATION {
  ULONG SizeOfHeaders; // offset: 0x0 (0)
  VOID *ImageMerge;    // offset: 0x4 (4)
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
  union {
    UCHAR ImageFlags; // offset: 0x23 (35)
    struct {
      UCHAR ComPlusNativeReady : 1;        // offset: 0x23 (35)
      UCHAR ComPlusILOnly : 1;             // offset: 0x23 (35)
      UCHAR ImageDynamicallyRelocated : 1; // offset: 0x23 (35)
      UCHAR ImageMappedFlat : 1;           // offset: 0x23 (35)
      UCHAR Reserved : 4;                  // offset: 0x23 (35)
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
struct _SEGMENT_FLAGS {
  ULONG TotalNumberOfPtes4132 : 10;    // offset: 0x0 (0)
  ULONG ExtraSharedWowSubsections : 1; // offset: 0x0 (0)
  ULONG LargePages : 1;                // offset: 0x0 (0)
  ULONG WatchProto : 1;                // offset: 0x0 (0)
  ULONG DebugSymbolsLoaded : 1;        // offset: 0x0 (0)
  ULONG WriteCombined : 1;             // offset: 0x0 (0)
  ULONG NoCache : 1;                   // offset: 0x0 (0)
  ULONG FloppyMedia : 1;               // offset: 0x0 (0)
  ULONG DefaultProtectionMask : 5;     // offset: 0x0 (0)
  ULONG ContainsPxeSubsection : 1;     // offset: 0x0 (0)
  ULONG Binary32 : 1;                  // offset: 0x0 (0)
  ULONG Spare : 8;                     // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _IMAGE_SECURITY_CONTEXT {
  union {
    VOID *PageHashes; // offset: 0x0 (0)
    ULONG Value;      // offset: 0x0 (0)
    struct {
      ULONG SecurityBeingCreated : 1; // offset: 0x0 (0)
      ULONG SecurityMandatory : 1;    // offset: 0x0 (0)
      ULONG Unused : 1;               // offset: 0x0 (0)
      ULONG PageHashPointer : 29;     // offset: 0x0 (0)
    };
  };
};

// 0xc (12) bytes
struct _MI_IMAGE_SECURITY_REFERENCE {
  struct _IMAGE_SECURITY_CONTEXT SecurityContext; // offset: 0x0 (0)
  VOID *DynamicRelocations;                       // offset: 0x4 (4)
  volatile LONG ReferenceCount;                   // offset: 0x8 (8)
};

// 0x18 (24) bytes
struct _MMSUBSECTION_NODE {
  union {
    ULONG LongFlags;                            // offset: 0x0 (0)
    struct _MMSUBSECTION_FLAGS SubsectionFlags; // offset: 0x0 (0)

  } u;                       // offset: 0x0 (0)
  ULONG StartingSector;      // offset: 0x4 (4)
  ULONG NumberOfFullSectors; // offset: 0x8 (8)
  union {
    LONG Balance : 2;                  // offset: 0xc (12)
    struct _MMSUBSECTION_NODE *Parent; // offset: 0xc (12)

  } u1;                                  // offset: 0xc (12)
  struct _MMSUBSECTION_NODE *LeftChild;  // offset: 0x10 (16)
  struct _MMSUBSECTION_NODE *RightChild; // offset: 0x14 (20)
};

// 0x20 (32) bytes
struct _MM_SUBSECTION_AVL_TABLE {
  struct _MMSUBSECTION_NODE BalancedRoot; // offset: 0x0 (0)
  ULONG DepthOfTree : 5;                  // offset: 0x18 (24)
  ULONG Unused : 3;                       // offset: 0x18 (24)
  ULONG NumberGenericTableElements : 24;  // offset: 0x18 (24)
  VOID *NodeHint;                         // offset: 0x1c (28)
};

// 0x8c (140) bytes
struct _MMPTE_FLUSH_LIST {
  ULONG Count;        // offset: 0x0 (0)
  ULONG MaximumCount; // offset: 0x4 (4)
  VOID *FlushVa[33];  // offset: 0x8 (8)
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

// 0x10 (16) bytes
struct _EFI_FIRMWARE_INFORMATION {
  ULONG FirmwareVersion; // offset: 0x0 (0)
  struct _VIRTUAL_EFI_RUNTIME_SERVICES
      *VirtualEfiRuntimeServices;  // offset: 0x4 (4)
  LONG SetVirtualAddressMapStatus; // offset: 0x8 (8)
  ULONG MissedMappingsCount;       // offset: 0xc (12)
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
  ULONG AffinityMask;              // offset: 0x14 (20)
  ULONG ConfigurationDataLength;   // offset: 0x18 (24)
  ULONG IdentifierLength;          // offset: 0x1c (28)
  CHAR *Identifier;                // offset: 0x20 (32)
};

// 0x34 (52) bytes
struct _CONFIGURATION_COMPONENT_DATA {
  struct _CONFIGURATION_COMPONENT_DATA *Parent;   // offset: 0x0 (0)
  struct _CONFIGURATION_COMPONENT_DATA *Child;    // offset: 0x4 (4)
  struct _CONFIGURATION_COMPONENT_DATA *Sibling;  // offset: 0x8 (8)
  struct _CONFIGURATION_COMPONENT ComponentEntry; // offset: 0xc (12)
  VOID *ConfigurationData;                        // offset: 0x30 (48)
};

// 0x14 (20) bytes
struct _FIRMWARE_INFORMATION_LOADER_BLOCK {
  ULONG FirmwareTypeEfi : 1; // offset: 0x0 (0)
  ULONG Reserved : 31;       // offset: 0x0 (0)
  union {
    struct _EFI_FIRMWARE_INFORMATION EfiInformation;   // offset: 0x4 (4)
    struct _PCAT_FIRMWARE_INFORMATION PcatInformation; // offset: 0x4 (4)

  } u; // offset: 0x4 (4)
};

// 0x4 (4) bytes
struct _IA64_LOADER_BLOCK {
  ULONG PlaceHolder; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _ALPHA_LOADER_BLOCK {
  ULONG PlaceHolder; // offset: 0x0 (0)
};

// 0xc (12) bytes
struct _I386_LOADER_BLOCK {
  VOID *CommonDataArea; // offset: 0x0 (0)
  ULONG MachineType;    // offset: 0x4 (4)
  ULONG VirtualBias;    // offset: 0x8 (8)
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
  ULONG SubsectionAddressLow : 9;   // offset: 0x0 (0)
  ULONG Prototype : 1;              // offset: 0x0 (0)
  ULONG SubsectionAddressHigh : 21; // offset: 0x0 (0)
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
struct _MMPTE_TIMESTAMP {
  ULONG MustBeZero : 1;       // offset: 0x0 (0)
  ULONG PageFileLow : 4;      // offset: 0x0 (0)
  ULONG Protection : 5;       // offset: 0x0 (0)
  ULONG Prototype : 1;        // offset: 0x0 (0)
  ULONG Transition : 1;       // offset: 0x0 (0)
  ULONG GlobalTimeStamp : 20; // offset: 0x0 (0)
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
  ULONG ProtoAddressLow : 8;   // offset: 0x0 (0)
  ULONG ReadOnly : 1;          // offset: 0x0 (0)
  ULONG Prototype : 1;         // offset: 0x0 (0)
  ULONG ProtoAddressHigh : 21; // offset: 0x0 (0)
};

// 0x4 (4) bytes
struct _MMPTE_HARDWARE {
  ULONG Valid : 1;            // offset: 0x0 (0)
  ULONG Dirty1 : 1;           // offset: 0x0 (0)
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

// 0x4 (4) bytes
union _WHEA_ERROR_PACKET_FLAGS {
  ULONG PreviousError : 1;   // offset: 0x0 (0)
  ULONG CpuValid : 1;        // offset: 0x0 (0)
  ULONG HypervisorError : 1; // offset: 0x0 (0)
  ULONG Simulated : 1;       // offset: 0x0 (0)
  ULONG Reserved : 28;       // offset: 0x0 (0)
  ULONG AsULONG;             // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _WHEA_PCIXDEVICE_ID {
  USHORT VendorId;          // offset: 0x0 (0)
  USHORT DeviceId;          // offset: 0x2 (2)
  ULONG ClassCode : 24;     // offset: 0x4 (4)
  ULONG FunctionNumber : 8; // offset: 0x4 (4)
  ULONG DeviceNumber : 8;   // offset: 0x8 (8)
  ULONG BusNumber : 8;      // offset: 0x8 (8)
  ULONG SegmentNumber : 8;  // offset: 0x8 (8)
  ULONG Reserved1 : 8;      // offset: 0x8 (8)
  ULONG Reserved2;          // offset: 0xc (12)
};

// 0x4 (4) bytes
union _WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS {
  struct {
    USHORT BridgeSecondaryStatus; // offset: 0x0 (0)
    USHORT BridgeControl;         // offset: 0x2 (2)
  };
  ULONG AsULONG; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _WHEA_PCIEXPRESS_DEVICE_ID {
  USHORT VendorID;              // offset: 0x0 (0)
  USHORT DeviceID;              // offset: 0x2 (2)
  ULONG ClassCode : 24;         // offset: 0x4 (4)
  ULONG FunctionNumber : 8;     // offset: 0x4 (4)
  ULONG DeviceNumber : 8;       // offset: 0x8 (8)
  ULONG Segment : 16;           // offset: 0x8 (8)
  ULONG PrimaryBusNumber : 8;   // offset: 0x8 (8)
  ULONG SecondaryBusNumber : 8; // offset: 0xc (12)
  ULONG Reserved1 : 2;          // offset: 0xc (12)
  ULONG SlotNumber : 14;        // offset: 0xc (12)
  ULONG Reserved2 : 8;          // offset: 0xc (12)
};

// 0x4 (4) bytes
union _WHEA_PCIEXPRESS_COMMAND_STATUS {
  struct {
    USHORT Command; // offset: 0x0 (0)
    USHORT Status;  // offset: 0x2 (2)
  };
  ULONG AsULONG; // offset: 0x0 (0)
};

// 0x4 (4) bytes
union _WHEA_PCIEXPRESS_VERSION {
  struct {
    UCHAR MinorVersion; // offset: 0x0 (0)
    UCHAR MajorVersion; // offset: 0x1 (1)
  };
  struct {
    USHORT Reserved; // offset: 0x2 (2)
  };
  ULONG AsULONG; // offset: 0x0 (0)
};

// 0x4 (4) bytes
union _WHEA_NMI_ERROR_FLAGS {
  ULONG HypervisorError : 1; // offset: 0x0 (0)
  ULONG Reserved : 31;       // offset: 0x0 (0)
  ULONG AsULONG;             // offset: 0x0 (0)
};

// 0xc (12) bytes
struct _WHEA_NMI_ERROR {
  UCHAR Data[8];                     // offset: 0x0 (0)
  union _WHEA_NMI_ERROR_FLAGS Flags; // offset: 0x8 (8)
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

// 0x10 (16) bytes
struct _GUID {
  ULONG Data1;    // offset: 0x0 (0)
  USHORT Data2;   // offset: 0x4 (4)
  USHORT Data3;   // offset: 0x6 (6)
  UCHAR Data4[8]; // offset: 0x8 (8)
};

// 0x14 (20) bytes
struct _DEVPROPKEY {
  struct _GUID fmtid; // offset: 0x0 (0)
  ULONG pid;          // offset: 0x10 (16)
};

// 0x2c (44) bytes
struct _CM_KEY_BODY {
  ULONG Type;                                    // offset: 0x0 (0)
  struct _CM_KEY_CONTROL_BLOCK *KeyControlBlock; // offset: 0x4 (4)
  struct _CM_NOTIFY_BLOCK *NotifyBlock;          // offset: 0x8 (8)
  VOID *ProcessID;                               // offset: 0xc (12)
  struct _LIST_ENTRY KeyBodyList;                // offset: 0x10 (16)
  ULONG Flags;                                   // offset: 0x18 (24)
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

// 0x34 (52) bytes
struct _HEADLESS_LOADER_BLOCK {
  UCHAR UsedBiosSettings;  // offset: 0x0 (0)
  UCHAR DataBits;          // offset: 0x1 (1)
  UCHAR StopBits;          // offset: 0x2 (2)
  UCHAR Parity;            // offset: 0x3 (3)
  ULONG BaudRate;          // offset: 0x4 (4)
  ULONG PortNumber;        // offset: 0x8 (8)
  UCHAR *PortAddress;      // offset: 0xc (12)
  USHORT PciDeviceId;      // offset: 0x10 (16)
  USHORT PciVendorId;      // offset: 0x12 (18)
  UCHAR PciBusNumber;      // offset: 0x14 (20)
  USHORT PciBusSegment;    // offset: 0x16 (22)
  UCHAR PciSlotNumber;     // offset: 0x18 (24)
  UCHAR PciFunctionNumber; // offset: 0x19 (25)
  ULONG PciFlags;          // offset: 0x1c (28)
  struct _GUID SystemGUID; // offset: 0x20 (32)
  UCHAR IsMMIODevice;      // offset: 0x30 (48)
  UCHAR TerminalType;      // offset: 0x31 (49)
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

// 0x4 (4) bytes
union _WHEA_ERROR_RECORD_HEADER_VALIDBITS {
  ULONG Timestamp : 1;   // offset: 0x0 (0)
  ULONG PlatformId : 1;  // offset: 0x0 (0)
  ULONG PartitionId : 1; // offset: 0x0 (0)
  ULONG Reserved : 29;   // offset: 0x0 (0)
  ULONG AsULONG;         // offset: 0x0 (0)
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

// 0x28 (40) bytes
struct _POOL_HACKER {
  struct _POOL_HEADER Header; // offset: 0x0 (0)
  ULONG Contents[8];          // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _PERFINFO_GROUPMASK {
  ULONG Masks[8]; // offset: 0x0 (0)
};

// 0xc (12) bytes
struct _OBJECT_DIRECTORY_ENTRY {
  struct _OBJECT_DIRECTORY_ENTRY *ChainLink; // offset: 0x0 (0)
  VOID *Object;                              // offset: 0x4 (4)
  ULONG HashValue;                           // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _OBJECT_DUMP_CONTROL {
  VOID *Stream; // offset: 0x0 (0)
  ULONG Detail; // offset: 0x4 (4)
};

// 0x40 (64) bytes
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
      WCHAR DeviceIds[1]; // offset: 0x0 (0)
    } TargetDevice;       // offset: 0x24 (36)
    struct {
      WCHAR DeviceId[1]; // offset: 0x0 (0)
    } InstallDevice;     // offset: 0x24 (36)
    struct {
      VOID *NotificationStructure; // offset: 0x0 (0)
      WCHAR DeviceIds[1];          // offset: 0x4 (4)
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
      UCHAR PowerSettingChanged;     // offset: 0x10 (16)
      ULONG DataLength;              // offset: 0x14 (20)
      UCHAR Data[1];                 // offset: 0x18 (24)
    } PowerSettingNotification;      // offset: 0x24 (36)

  } u; // offset: 0x24 (36)
};

// 0x60 (96) bytes
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

// 0x10 (16) bytes
struct _IO_PRIORITY_INFO {
  ULONG Size;                        // offset: 0x0 (0)
  ULONG ThreadPriority;              // offset: 0x4 (4)
  ULONG PagePriority;                // offset: 0x8 (8)
  enum _IO_PRIORITY_HINT IoPriority; // offset: 0xc (12)
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
  ULONG LockedInWs : 1;         // offset: 0x0 (0)
  ULONG LockedInMemory : 1;     // offset: 0x0 (0)
  ULONG Protection : 5;         // offset: 0x0 (0)
  ULONG Hashed : 1;             // offset: 0x0 (0)
  ULONG Direct : 1;             // offset: 0x0 (0)
  ULONG Age : 2;                // offset: 0x0 (0)
  ULONG VirtualPageNumber : 20; // offset: 0x0 (0)
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

// 0x4 (4) bytes
struct _MMWSLE {
  union {
    VOID *VirtualAddress;         // offset: 0x0 (0)
    ULONG Long;                   // offset: 0x0 (0)
    struct _MMWSLENTRY e1;        // offset: 0x0 (0)
    struct _MMWSLE_FREE_ENTRY e2; // offset: 0x0 (0)

  } u1; // offset: 0x0 (0)
};

// 0x10 (16) bytes
struct _RTL_DRIVE_LETTER_CURDIR {
  USHORT Flags;           // offset: 0x0 (0)
  USHORT Length;          // offset: 0x2 (2)
  ULONG TimeStamp;        // offset: 0x4 (4)
  struct _STRING DosPath; // offset: 0x8 (8)
};

// 0x4 (4) bytes
struct _HANDLE_TABLE_ENTRY_INFO {
  ULONG AuditMask; // offset: 0x0 (0)
};

// 0x50 (80) bytes
struct _HANDLE_TRACE_DB_ENTRY {
  struct _CLIENT_ID ClientId; // offset: 0x0 (0)
  VOID *Handle;               // offset: 0x8 (8)
  ULONG Type;                 // offset: 0xc (12)
  VOID *StackTrace[16];       // offset: 0x10 (16)
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

// 0x18 (24) bytes
struct _RTL_CRITICAL_SECTION {
  struct _RTL_CRITICAL_SECTION_DEBUG *DebugInfo; // offset: 0x0 (0)
  LONG LockCount;                                // offset: 0x4 (4)
  LONG RecursionCount;                           // offset: 0x8 (8)
  VOID *OwningThread;                            // offset: 0xc (12)
  VOID *LockSemaphore;                           // offset: 0x10 (16)
  ULONG SpinCount;                               // offset: 0x14 (20)
};

// 0x18 (24) bytes
struct _HEAP_LOCK {
  union {
    struct _RTL_CRITICAL_SECTION CriticalSection; // offset: 0x0 (0)

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

// 0x294 (660) bytes
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
  volatile ULONG EnvironmentSize;                        // offset: 0x290 (656)
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

// 0x6b8 (1720) bytes
struct _MMWSL {
  ULONG FirstFree;                                  // offset: 0x0 (0)
  ULONG FirstDynamic;                               // offset: 0x4 (4)
  ULONG LastEntry;                                  // offset: 0x8 (8)
  ULONG NextSlot;                                   // offset: 0xc (12)
  struct _MMWSLE *Wsle;                             // offset: 0x10 (16)
  VOID *LowestPagableAddress;                       // offset: 0x14 (20)
  ULONG LastInitializedWsle;                        // offset: 0x18 (24)
  ULONG NextEstimationSlot;                         // offset: 0x1c (28)
  ULONG NextAgingSlot;                              // offset: 0x20 (32)
  ULONG EstimatedAvailable;                         // offset: 0x24 (36)
  ULONG GrowthSinceLastEstimate;                    // offset: 0x28 (40)
  ULONG NumberOfCommittedPageTables;                // offset: 0x2c (44)
  ULONG VadBitMapHint;                              // offset: 0x30 (48)
  ULONG NonDirectCount;                             // offset: 0x34 (52)
  ULONG LastVadBit;                                 // offset: 0x38 (56)
  ULONG MaximumLastVadBit;                          // offset: 0x3c (60)
  ULONG LastAllocationSizeHint;                     // offset: 0x40 (64)
  ULONG LastAllocationSize;                         // offset: 0x44 (68)
  struct _MMWSLE_NONDIRECT_HASH *NonDirectHash;     // offset: 0x48 (72)
  struct _MMWSLE_HASH *HashTableStart;              // offset: 0x4c (76)
  struct _MMWSLE_HASH *HighestPermittedHashAddress; // offset: 0x50 (80)
  VOID *HighestUserAddress;                         // offset: 0x54 (84)
  USHORT UsedPageTableEntries[768];                 // offset: 0x58 (88)
  ULONG CommittedPageTables[24];                    // offset: 0x658 (1624)
};

// 0x88 (136) bytes
struct _SID_AND_ATTRIBUTES_HASH {
  ULONG SidCount;                      // offset: 0x0 (0)
  struct _SID_AND_ATTRIBUTES *SidAttr; // offset: 0x4 (4)
  ULONG Hash[32];                      // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _OWNER_ENTRY {
  ULONG OwnerThread; // offset: 0x0 (0)
  union {
    LONG OwnerCount; // offset: 0x4 (4)
    ULONG TableSize; // offset: 0x4 (4)
  };
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

// 0x38 (56) bytes
struct _ERESOURCE {
  struct _LIST_ENTRY SystemResourcesList; // offset: 0x0 (0)
  struct _OWNER_ENTRY *OwnerTable;        // offset: 0x8 (8)
  SHORT ActiveCount;                      // offset: 0xc (12)
  USHORT Flag;                            // offset: 0xe (14)
  struct _KSEMAPHORE *SharedWaiters;      // offset: 0x10 (16)
  struct _KEVENT *ExclusiveWaiters;       // offset: 0x14 (20)
  struct _OWNER_ENTRY OwnerEntry;         // offset: 0x18 (24)
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
    ULONG Long;                        // offset: 0x0 (0)
    volatile ULONG VolatileLong;       // offset: 0x0 (0)
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

// 0x18 (24) bytes
struct _MI_SPECIAL_POOL {
  struct _MMPTE *PteBase;             // offset: 0x0 (0)
  struct _MMPTE FreePteHead;          // offset: 0x4 (4)
  struct _MMPTE FreePteTail;          // offset: 0x8 (8)
  volatile LONG PagesInUse;           // offset: 0xc (12)
  struct _RTL_BITMAP SpecialPoolPdes; // offset: 0x10 (16)
};

// 0x38 (56) bytes
struct _MM_PAGED_POOL_INFO {
  struct _KGUARDED_MUTEX Mutex;              // offset: 0x0 (0)
  struct _RTL_BITMAP PagedPoolAllocationMap; // offset: 0x20 (32)
  struct _MMPTE *FirstPteForPagedPool;       // offset: 0x28 (40)
  ULONG PagedPoolHint;                       // offset: 0x2c (44)
  volatile ULONG PagedPoolCommit;            // offset: 0x30 (48)
  volatile ULONG AllocatedPagedPool;         // offset: 0x34 (52)
};

// 0x20 (32) bytes
struct _MMBANKED_SECTION {
  ULONG BasePhysicalPage;  // offset: 0x0 (0)
  struct _MMPTE *BasedPte; // offset: 0x4 (4)
  ULONG BankSize;          // offset: 0x8 (8)
  ULONG BankShift;         // offset: 0xc (12)
  VOID (*BankedRoutine)
  (ULONG arg1, ULONG arg2, VOID *arg3); // offset: 0x10 (16)
  VOID *Context;                        // offset: 0x14 (20)
  struct _MMPTE *CurrentMappedPte;      // offset: 0x18 (24)
  struct _MMPTE BankTemplate[1];        // offset: 0x1c (28)
};

// 0x1c (28) bytes
struct _MI_PER_SESSION_PROTOS {
  union {
    LONG Balance : 2;                          // offset: 0x0 (0)
    struct _MMADDRESS_NODE *Parent;            // offset: 0x0 (0)
    struct _MI_PER_SESSION_PROTOS *NextToFree; // offset: 0x0 (0)

  } u1;                               // offset: 0x0 (0)
  struct _MMADDRESS_NODE *LeftChild;  // offset: 0x4 (4)
  struct _MMADDRESS_NODE *RightChild; // offset: 0x8 (8)
  union {
    ULONG SessionId;                // offset: 0xc (12)
    ULONG StartingVpn;              // offset: 0xc (12)
    struct _SUBSECTION *Subsection; // offset: 0xc (12)
  };
  ULONG EndingVpn;               // offset: 0x10 (16)
  struct _MMPTE *SubsectionBase; // offset: 0x14 (20)
  union {
    ULONG ReferenceCount;     // offset: 0x18 (24)
    ULONG NumberOfPtesToFree; // offset: 0x18 (24)

  } u2; // offset: 0x18 (24)
};

// 0x38 (56) bytes
struct _MSUBSECTION {
  struct _CONTROL_AREA *ControlArea; // offset: 0x0 (0)
  struct _MMPTE *SubsectionBase;     // offset: 0x4 (4)
  union {
    struct _SUBSECTION *NextSubsection;        // offset: 0x8 (8)
    struct _MSUBSECTION *NextMappedSubsection; // offset: 0x8 (8)
  };
  ULONG PtesInSubsection; // offset: 0xc (12)
  union {
    ULONG UnusedPtes;                           // offset: 0x10 (16)
    struct _MM_AVL_TABLE *GlobalPerSessionHead; // offset: 0x10 (16)
  };
  union {
    ULONG LongFlags;                            // offset: 0x14 (20)
    struct _MMSUBSECTION_FLAGS SubsectionFlags; // offset: 0x14 (20)

  } u;                       // offset: 0x14 (20)
  ULONG StartingSector;      // offset: 0x18 (24)
  ULONG NumberOfFullSectors; // offset: 0x1c (28)
  union {
    LONG Balance : 2;                  // offset: 0x20 (32)
    struct _MMSUBSECTION_NODE *Parent; // offset: 0x20 (32)

  } u1;                                  // offset: 0x20 (32)
  struct _MMSUBSECTION_NODE *LeftChild;  // offset: 0x24 (36)
  struct _MMSUBSECTION_NODE *RightChild; // offset: 0x28 (40)
  struct _LIST_ENTRY DereferenceList;    // offset: 0x2c (44)
  ULONG NumberOfMappedViews;             // offset: 0x34 (52)
};

// 0x20 (32) bytes
struct _SUBSECTION {
  struct _CONTROL_AREA *ControlArea;  // offset: 0x0 (0)
  struct _MMPTE *SubsectionBase;      // offset: 0x4 (4)
  struct _SUBSECTION *NextSubsection; // offset: 0x8 (8)
  ULONG PtesInSubsection;             // offset: 0xc (12)
  union {
    ULONG UnusedPtes;                           // offset: 0x10 (16)
    struct _MM_AVL_TABLE *GlobalPerSessionHead; // offset: 0x10 (16)
  };
  union {
    ULONG LongFlags;                            // offset: 0x14 (20)
    struct _MMSUBSECTION_FLAGS SubsectionFlags; // offset: 0x14 (20)

  } u;                       // offset: 0x14 (20)
  ULONG StartingSector;      // offset: 0x18 (24)
  ULONG NumberOfFullSectors; // offset: 0x1c (28)
};

// 0x18 (24) bytes
struct _MMPFN {
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
    ULONG Blink;                  // offset: 0x4 (4)
    struct _MMPTE *ImageProtoPte; // offset: 0x4 (4)
    ULONG ShareCount;             // offset: 0x4 (4)

  } u2; // offset: 0x4 (4)
  union {
    struct _MMPTE *PteAddress;         // offset: 0x8 (8)
    VOID *volatile VolatilePteAddress; // offset: 0x8 (8)
  };
  union {
    struct {
      USHORT ReferenceCount; // offset: 0xc (12)
      struct _MMPFNENTRY e1; // offset: 0xe (14)
    };
    struct {
      union {
        USHORT ReferenceCount;                 // offset: 0x0 (0)
        volatile SHORT VolatileReferenceCount; // offset: 0x0 (0)
      };
      USHORT ShortFlags; // offset: 0x2 (2)
    } e2;                // offset: 0xc (12)
    struct {
      USHORT ReferenceCount;      // offset: 0x0 (0)
      UCHAR ByteFlags;            // offset: 0x2 (2)
      UCHAR InterlockedByteFlags; // offset: 0x3 (3)
    } e3;                         // offset: 0xc (12)

  } u3; // offset: 0xc (12)
  union {
    struct _MMPTE OriginalPte;       // offset: 0x10 (16)
    volatile LONG AweReferenceCount; // offset: 0x10 (16)
  };
  union {
    ULONG PteFrame : 25;        // offset: 0x14 (20)
    ULONG PfnImageVerified : 1; // offset: 0x14 (20)
    ULONG AweAllocation : 1;    // offset: 0x14 (20)
    ULONG PrototypePte : 1;     // offset: 0x14 (20)
    ULONG PageColor : 4;        // offset: 0x14 (20)

  } u4; // offset: 0x14 (20)
};

// 0x14 (20) bytes
struct _POWER_CHANNEL_SUMMARY {
  ULONG Signature;               // offset: 0x0 (0)
  ULONG TotalCount;              // offset: 0x4 (4)
  ULONG D0Count;                 // offset: 0x8 (8)
  struct _LIST_ENTRY NotifyList; // offset: 0xc (12)
};

// 0x60 (96) bytes
struct _DEVICE_OBJECT_POWER_EXTENSION {
  volatile ULONG IdleCount;                          // offset: 0x0 (0)
  volatile ULONG BusyCount;                          // offset: 0x4 (4)
  ULONG TotalBusyCount;                              // offset: 0x8 (8)
  ULONG ConservationIdleTime;                        // offset: 0xc (12)
  ULONG PerformanceIdleTime;                         // offset: 0x10 (16)
  struct _DEVICE_OBJECT *DeviceObject;               // offset: 0x14 (20)
  struct _LIST_ENTRY IdleList;                       // offset: 0x18 (24)
  UCHAR DeviceType;                                  // offset: 0x20 (32)
  enum _DEVICE_POWER_STATE IdleState;                // offset: 0x24 (36)
  enum _DEVICE_POWER_STATE CurrentState;             // offset: 0x28 (40)
  struct _LIST_ENTRY NotifySourceList;               // offset: 0x2c (44)
  struct _LIST_ENTRY NotifyTargetList;               // offset: 0x34 (52)
  struct _POWER_CHANNEL_SUMMARY PowerChannelSummary; // offset: 0x3c (60)
  struct _LIST_ENTRY Volume;                         // offset: 0x50 (80)
  union {
    struct {
      ULONG IdleTime;    // offset: 0x0 (0)
      ULONG NonIdleTime; // offset: 0x4 (4)
    } Disk;              // offset: 0x58 (88)

  } Specific; // offset: 0x58 (88)
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

// 0x3c (60) bytes
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
  struct _LIST_ENTRY DependentList;            // offset: 0x2c (44)
  struct _LIST_ENTRY ProviderList;             // offset: 0x34 (52)
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
struct _EX_RUNDOWN_REF {
  union {
    ULONG Count; // offset: 0x0 (0)
    VOID *Ptr;   // offset: 0x0 (0)
  };
};

// 0x4 (4) bytes
union _PS_CLIENT_SECURITY_CONTEXT {
  ULONG ImpersonationData;      // offset: 0x0 (0)
  VOID *ImpersonationToken;     // offset: 0x0 (0)
  ULONG ImpersonationLevel : 2; // offset: 0x0 (0)
  ULONG EffectiveOnly : 1;      // offset: 0x0 (0)
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

// 0x10 (16) bytes
struct _ALPC_HANDLE_TABLE {
  ULONG Flags;                        // offset: 0x0 (0)
  struct _ALPC_HANDLE_ENTRY *Handles; // offset: 0x4 (4)
  ULONG TotalHandles;                 // offset: 0x8 (8)
  struct _EX_PUSH_LOCK Lock;          // offset: 0xc (12)
};

// 0x24 (36) bytes
struct _ALPC_COMMUNICATION_INFO {
  struct _ALPC_PORT *ConnectionPort;          // offset: 0x0 (0)
  struct _ALPC_PORT *ServerCommunicationPort; // offset: 0x4 (4)
  struct _ALPC_PORT *ClientCommunicationPort; // offset: 0x8 (8)
  struct _LIST_ENTRY CommunicationList;       // offset: 0xc (12)
  struct _ALPC_HANDLE_TABLE HandleTable;      // offset: 0x14 (20)
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

  } u1;                         // offset: 0x8 (8)
  UCHAR ResourceId;             // offset: 0x9 (9)
  SHORT CachedReferences;       // offset: 0xa (10)
  volatile LONG ReferenceCount; // offset: 0xc (12)
  struct _EX_PUSH_LOCK Lock;    // offset: 0x10 (16)
  ULONG Pad;                    // offset: 0x14 (20)
};

// 0x20 (32) bytes
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

  } u;                           // offset: 0x14 (20)
  struct _EX_PUSH_LOCK PushLock; // offset: 0x18 (24)
  union {
    ULONG LongFlags3;               // offset: 0x1c (28)
    struct _MMVAD_FLAGS3 VadFlags3; // offset: 0x1c (28)

  } u5; // offset: 0x1c (28)
};

// 0x30 (48) bytes
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

  } u;                           // offset: 0x14 (20)
  struct _EX_PUSH_LOCK PushLock; // offset: 0x18 (24)
  union {
    ULONG LongFlags3;               // offset: 0x1c (28)
    struct _MMVAD_FLAGS3 VadFlags3; // offset: 0x1c (28)

  } u5; // offset: 0x1c (28)
  union {
    ULONG LongFlags2;               // offset: 0x20 (32)
    struct _MMVAD_FLAGS2 VadFlags2; // offset: 0x20 (32)

  } u2; // offset: 0x20 (32)
  union {
    struct _SUBSECTION *Subsection;        // offset: 0x24 (36)
    struct _MSUBSECTION *MappedSubsection; // offset: 0x24 (36)
  };
  struct _MMPTE *FirstPrototypePte; // offset: 0x28 (40)
  struct _MMPTE *LastContiguousPte; // offset: 0x2c (44)
};

// 0xa8 (168) bytes
struct _OBJECT_DIRECTORY {
  struct _OBJECT_DIRECTORY_ENTRY *HashBuckets[37]; // offset: 0x0 (0)
  struct _EX_PUSH_LOCK Lock;                       // offset: 0x94 (148)
  struct _DEVICE_MAP *DeviceMap;                   // offset: 0x98 (152)
  ULONG SessionId;                                 // offset: 0x9c (156)
  VOID *NamespaceEntry;                            // offset: 0xa0 (160)
  ULONG Flags;                                     // offset: 0xa4 (164)
};

// 0x14 (20) bytes
struct _OBP_LOOKUP_CONTEXT {
  struct _OBJECT_DIRECTORY *Directory; // offset: 0x0 (0)
  VOID *Object;                        // offset: 0x4 (4)
  ULONG HashValue;                     // offset: 0x8 (8)
  USHORT HashIndex;                    // offset: 0xc (12)
  UCHAR DirectoryLocked;               // offset: 0xe (14)
  volatile ULONG LockStateSignature;   // offset: 0x10 (16)
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

// 0x10 (16) bytes
struct _ALPC_PROCESS_CONTEXT {
  struct _EX_PUSH_LOCK Lock;          // offset: 0x0 (0)
  struct _LIST_ENTRY ViewListHead;    // offset: 0x4 (4)
  volatile ULONG PagedPoolQuotaCache; // offset: 0xc (12)
};

// 0x48 (72) bytes
struct _MMSUPPORT {
  struct _LIST_ENTRY WorkingSetExpansionLinks; // offset: 0x0 (0)
  USHORT LastTrimStamp;                        // offset: 0x8 (8)
  USHORT NextPageColor;                        // offset: 0xa (10)
  struct _MMSUPPORT_FLAGS Flags;               // offset: 0xc (12)
  ULONG PageFaultCount;                        // offset: 0x10 (16)
  ULONG PeakWorkingSetSize;                    // offset: 0x14 (20)
  ULONG ChargedWslePages;                      // offset: 0x18 (24)
  ULONG MinimumWorkingSetSize;                 // offset: 0x1c (28)
  ULONG MaximumWorkingSetSize;                 // offset: 0x20 (32)
  struct _MMWSL *VmWorkingSetList;             // offset: 0x24 (36)
  ULONG Claim;                                 // offset: 0x28 (40)
  ULONG ActualWslePages;                       // offset: 0x2c (44)
  ULONG WorkingSetPrivateSize;                 // offset: 0x30 (48)
  ULONG WorkingSetSizeOverhead;                // offset: 0x34 (52)
  ULONG WorkingSetSize;                        // offset: 0x38 (56)
  struct _KGATE *ExitGate;                     // offset: 0x3c (60)
  struct _EX_PUSH_LOCK WorkingSetMutex;        // offset: 0x40 (64)
  VOID *AccessLog;                             // offset: 0x44 (68)
};

// 0x2c (44) bytes
struct _MI_SYSTEM_PTE_TYPE {
  struct _RTL_BITMAP Bitmap;           // offset: 0x0 (0)
  ULONG Hint;                          // offset: 0x8 (8)
  struct _MMPTE *BasePte;              // offset: 0xc (12)
  ULONG *FailureCount;                 // offset: 0x10 (16)
  struct _MMSUPPORT *Vm;               // offset: 0x14 (20)
  volatile LONG TotalSystemPtes;       // offset: 0x18 (24)
  volatile LONG TotalFreeSystemPtes;   // offset: 0x1c (28)
  volatile LONG CachedPteCount;        // offset: 0x20 (32)
  ULONG PteFailures;                   // offset: 0x24 (36)
  struct _KGUARDED_MUTEX *GlobalMutex; // offset: 0x28 (40)
};

// 0x80 (128) bytes
struct _EX_PUSH_LOCK_CACHE_AWARE {
  struct _EX_PUSH_LOCK *Locks[32]; // offset: 0x0 (0)
};

// 0x20 (32) bytes
struct _FAST_MUTEX {
  volatile LONG Count;    // offset: 0x0 (0)
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

// 0xc (12) bytes
struct _PPM_DIA_STATS {
  ULONG PerfLevel;    // offset: 0x0 (0)
  ULONG IdleTime;     // offset: 0x4 (4)
  ULONG TimeInterval; // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _PPM_IDLE_STATE {
  LONG (*IdleHandler)(VOID *arg1, ULONG arg2); // offset: 0x0 (0)
  VOID *Context;                               // offset: 0x4 (4)
  ULONG Latency;                               // offset: 0x8 (8)
  ULONG Power;                                 // offset: 0xc (12)
  ULONG TimeCheck;                             // offset: 0x10 (16)
  ULONG StateFlags;                            // offset: 0x14 (20)
  UCHAR PromotePercent;                        // offset: 0x18 (24)
  UCHAR DemotePercent;                         // offset: 0x19 (25)
  UCHAR PromotePercentBase;                    // offset: 0x1a (26)
  UCHAR DemotePercentBase;                     // offset: 0x1b (27)
  UCHAR StateType;                             // offset: 0x1c (28)
};

// 0x80 (128) bytes
struct _KPROCESS {
  struct _DISPATCHER_HEADER Header;        // offset: 0x0 (0)
  struct _LIST_ENTRY ProfileListHead;      // offset: 0x10 (16)
  ULONG DirectoryTableBase;                // offset: 0x18 (24)
  ULONG Unused0;                           // offset: 0x1c (28)
  struct _KGDTENTRY LdtDescriptor;         // offset: 0x20 (32)
  struct _KIDTENTRY Int21Descriptor;       // offset: 0x28 (40)
  USHORT IopmOffset;                       // offset: 0x30 (48)
  UCHAR Unused1;                           // offset: 0x32 (50)
  UCHAR Unused2;                           // offset: 0x33 (51)
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
      volatile LONG AutoAlignment : 1;  // offset: 0x60 (96)
      volatile LONG DisableBoost : 1;   // offset: 0x60 (96)
      volatile LONG DisableQuantum : 1; // offset: 0x60 (96)
      volatile LONG ReservedFlags : 29; // offset: 0x60 (96)
    };
    volatile LONG ProcessFlags; // offset: 0x60 (96)
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
  volatile ULONGLONG CycleTime;        // offset: 0x78 (120)
};

// 0x18 (24) bytes
struct _KAPC_STATE {
  struct _LIST_ENTRY ApcListHead[2]; // offset: 0x0 (0)
  struct _KPROCESS *Process;         // offset: 0x10 (16)
  UCHAR KernelApcInProgress;         // offset: 0x14 (20)
  UCHAR KernelApcPending;            // offset: 0x15 (21)
  UCHAR UserApcPending;              // offset: 0x16 (22)
};

// 0x8c (140) bytes
struct _KTRAP_FRAME {
  ULONG DbgEbp;                                         // offset: 0x0 (0)
  ULONG DbgEip;                                         // offset: 0x4 (4)
  ULONG DbgArgMark;                                     // offset: 0x8 (8)
  ULONG DbgArgPointer;                                  // offset: 0xc (12)
  USHORT TempSegCs;                                     // offset: 0x10 (16)
  UCHAR Logging;                                        // offset: 0x12 (18)
  UCHAR Reserved;                                       // offset: 0x13 (19)
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

// 0x1c (28) bytes
struct _KERNEL_STACK_CONTROL {
  union {
    struct _KTRAP_FRAME *PreviousTrapFrame; // offset: 0x0 (0)
    VOID *PreviousExceptionList;            // offset: 0x0 (0)
  };
  union {
    ULONG StackControlFlags; // offset: 0x4 (4)
    struct {
      ULONG PreviousLargeStack : 1;      // offset: 0x4 (4)
      ULONG PreviousSegmentsPresent : 1; // offset: 0x4 (4)
      ULONG ExpandCalloutStack : 1;      // offset: 0x4 (4)
    };
  };
  struct _KERNEL_STACK_SEGMENT Previous; // offset: 0x8 (8)
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

// 0x2c (44) bytes
struct _ETW_REPLY_QUEUE {
  struct _KQUEUE Queue; // offset: 0x0 (0)
  LONG EventsLost;      // offset: 0x28 (40)
};

// 0x3c (60) bytes
struct _PPM_IDLE_STATES {
  ULONG Type;  // offset: 0x0 (0)
  ULONG Count; // offset: 0x4 (4)
  union {
    ULONG AsULONG;          // offset: 0x8 (8)
    ULONG AllowScaling : 1; // offset: 0x8 (8)
    ULONG Disabled : 1;     // offset: 0x8 (8)
    ULONG Hypervisor : 2;   // offset: 0x8 (8)
    ULONG HvMaxCState : 4;  // offset: 0x8 (8)
    ULONG Reserved : 24;    // offset: 0x8 (8)

  } Flags;                         // offset: 0x8 (8)
  ULONG TargetState;               // offset: 0xc (12)
  ULONG ActualState;               // offset: 0x10 (16)
  ULONG OldState;                  // offset: 0x14 (20)
  ULONG TargetProcessors;          // offset: 0x18 (24)
  struct _PPM_IDLE_STATE State[1]; // offset: 0x1c (28)
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
  VOID (*KernelRoutine)
  (struct _KAPC *arg1, VOID (**arg2)(VOID *arg1, VOID *arg2, VOID *arg3),
   VOID **arg3, VOID **arg4, VOID **arg5);    // offset: 0x14 (20)
  VOID (*RundownRoutine)(struct _KAPC *arg1); // offset: 0x18 (24)
  VOID (*NormalRoutine)
  (VOID *arg1, VOID *arg2, VOID *arg3); // offset: 0x1c (28)
  VOID *NormalContext;                  // offset: 0x20 (32)
  VOID *SystemArgument1;                // offset: 0x24 (36)
  VOID *SystemArgument2;                // offset: 0x28 (40)
  CHAR ApcStateIndex;                   // offset: 0x2c (44)
  CHAR ApcMode;                         // offset: 0x2d (45)
  UCHAR Inserted;                       // offset: 0x2e (46)
};

// 0xc (12) bytes
struct _CACHE_DESCRIPTOR {
  UCHAR Level;                     // offset: 0x0 (0)
  UCHAR Associativity;             // offset: 0x1 (1)
  USHORT LineSize;                 // offset: 0x2 (2)
  ULONG Size;                      // offset: 0x4 (4)
  enum _PROCESSOR_CACHE_TYPE Type; // offset: 0x8 (8)
};

// 0x14 (20) bytes
struct _KDPC_DATA {
  struct _LIST_ENTRY DpcListHead; // offset: 0x0 (0)
  ULONG DpcLock;                  // offset: 0x8 (8)
  volatile LONG DpcQueueDepth;    // offset: 0xc (12)
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

// 0x44 (68) bytes
struct _RTL_ATOM_TABLE {
  ULONG Signature;                              // offset: 0x0 (0)
  struct _RTL_CRITICAL_SECTION CriticalSection; // offset: 0x4 (4)
  struct _RTL_HANDLE_TABLE RtlHandleTable;      // offset: 0x1c (28)
  ULONG NumberOfBuckets;                        // offset: 0x3c (60)
  struct _RTL_ATOM_TABLE_ENTRY *Buckets[1];     // offset: 0x40 (64)
};

// 0x10 (16) bytes
struct _VI_VERIFIER_ISSUE {
  ULONG IssueType;     // offset: 0x0 (0)
  VOID *Address;       // offset: 0x4 (4)
  ULONG Parameters[2]; // offset: 0x8 (8)
};

// 0x20 (32) bytes
struct _HEAP_SUBSEGMENT {
  struct _HEAP_LOCAL_SEGMENT_INFO *LocalInfo; // offset: 0x0 (0)
  struct _HEAP_USERDATA_HEADER *UserBlocks;   // offset: 0x4 (4)
  struct _INTERLOCK_SEQ AggregateExchg;       // offset: 0x8 (8)
  union {
    struct {
      USHORT BlockSize;    // offset: 0x10 (16)
      USHORT Flags;        // offset: 0x12 (18)
      USHORT BlockCount;   // offset: 0x14 (20)
      UCHAR SizeIndex;     // offset: 0x16 (22)
      UCHAR AffinityIndex; // offset: 0x17 (23)
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
  VOID *Reserved;  // offset: 0x4 (4)
  ULONG SizeIndex; // offset: 0x8 (8)
  ULONG Signature; // offset: 0xc (12)
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

// 0x34 (52) bytes
struct _SEP_LOGON_SESSION_REFERENCES {
  struct _SEP_LOGON_SESSION_REFERENCES *Next; // offset: 0x0 (0)
  struct _LUID LogonId;                       // offset: 0x4 (4)
  struct _LUID BuddyLogonId;                  // offset: 0xc (12)
  ULONG ReferenceCount;                       // offset: 0x14 (20)
  ULONG Flags;                                // offset: 0x18 (24)
  struct _DEVICE_MAP *pDeviceMap;             // offset: 0x1c (28)
  VOID *Token;                                // offset: 0x20 (32)
  struct _UNICODE_STRING AccountName;         // offset: 0x24 (36)
  struct _UNICODE_STRING AuthorityName;       // offset: 0x2c (44)
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

// 0x8 (8) bytes
struct _IO_STATUS_BLOCK {
  union {
    LONG Status;   // offset: 0x0 (0)
    VOID *Pointer; // offset: 0x0 (0)
  };
  ULONG Information; // offset: 0x4 (4)
};

// 0x4 (4) bytes
struct _TP_DIRECT {
  VOID (*Callback)
  (struct _TP_CALLBACK_INSTANCE *arg1, struct _TP_DIRECT *arg2, VOID *arg3,
   struct _IO_STATUS_BLOCK *arg4); // offset: 0x0 (0)
};

// 0x20 (32) bytes
struct _TP_CALLBACK_ENVIRON {
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
      ULONG Private : 31;     // offset: 0x0 (0)
    } s;                      // offset: 0x1c (28)

  } u; // offset: 0x1c (28)
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

// 0x20 (32) bytes
struct _OBJECT_SYMBOLIC_LINK {
  union _LARGE_INTEGER CreationTime;          // offset: 0x0 (0)
  struct _UNICODE_STRING LinkTarget;          // offset: 0x8 (8)
  struct _UNICODE_STRING LinkTargetRemaining; // offset: 0x10 (16)
  VOID *LinkTargetObject;                     // offset: 0x18 (24)
  ULONG DosDeviceDriveIndex;                  // offset: 0x1c (28)
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

// 0x10 (16) bytes
struct _ETW_LAST_ENABLE_INFO {
  union _LARGE_INTEGER EnableFlags; // offset: 0x0 (0)
  USHORT LoggerId;                  // offset: 0x8 (8)
  UCHAR Level;                      // offset: 0xa (10)
  UCHAR Enabled : 1;                // offset: 0xb (11)
  UCHAR InternalFlag : 7;           // offset: 0xb (11)
};

// 0x20 (32) bytes
struct _SYSTEM_TRACE_HEADER {
  union {
    ULONG Marker; // offset: 0x0 (0)
    struct {
      USHORT Version;   // offset: 0x0 (0)
      UCHAR HeaderType; // offset: 0x2 (2)
      UCHAR Flags;      // offset: 0x3 (3)
    };
  };
  union {
    ULONG Header;                    // offset: 0x4 (4)
    struct _WMI_TRACE_PACKET Packet; // offset: 0x4 (4)
  };
  ULONG ThreadId;                  // offset: 0x8 (8)
  ULONG ProcessId;                 // offset: 0xc (12)
  union _LARGE_INTEGER SystemTime; // offset: 0x10 (16)
  ULONG KernelTime;                // offset: 0x18 (24)
  ULONG UserTime;                  // offset: 0x1c (28)
};

// 0x10 (16) bytes
struct _ETW_REF_CLOCK {
  union _LARGE_INTEGER StartTime;      // offset: 0x0 (0)
  union _LARGE_INTEGER StartPerfClock; // offset: 0x8 (8)
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
  ULONG Reserved1[85];            // offset: 0xa8 (168)
  ULONG CheckSum;                 // offset: 0x1fc (508)
  ULONG Reserved2[882];           // offset: 0x200 (512)
  struct _GUID ThawTmId;          // offset: 0xfc8 (4040)
  struct _GUID ThawRmId;          // offset: 0xfd8 (4056)
  struct _GUID ThawLogId;         // offset: 0xfe8 (4072)
  ULONG BootType;                 // offset: 0xff8 (4088)
  ULONG BootRecover;              // offset: 0xffc (4092)
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
  VOID *ReadAheadWorkItem;                 // offset: 0x54 (84)
};

// 0x140 (320) bytes
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
  VOID (*FlushToLsnRoutine)
  (VOID *arg1, union _LARGE_INTEGER arg2);             // offset: 0xa4 (164)
  ULONG DirtyPageThreshold;                            // offset: 0xa8 (168)
  ULONG LazyWritePassCount;                            // offset: 0xac (172)
  struct _CACHE_UNINITIALIZE_EVENT *UninitializeEvent; // offset: 0xb0 (176)
  struct _VACB *NeedToZeroVacb;                        // offset: 0xb4 (180)
  ULONG BcbSpinLock;                                   // offset: 0xb8 (184)
  VOID *Reserved;                                      // offset: 0xbc (188)
  struct _KEVENT Event;                                // offset: 0xc0 (192)
  union _LARGE_INTEGER HighWaterMappingOffset;         // offset: 0xd0 (208)
  struct _PRIVATE_CACHE_MAP PrivateCacheMap;           // offset: 0xd8 (216)
  VOID *WriteBehindWorkQueueEntry;                     // offset: 0x130 (304)
  struct _VOLUME_CACHE_MAP *VolumeCacheMap;            // offset: 0x134 (308)
  ULONG ProcImagePathHash;                             // offset: 0x138 (312)
  ULONG MappedWritesInProgress;                        // offset: 0x13c (316)
};

// 0x18 (24) bytes
struct _WORK_QUEUE_ENTRY {
  struct _LIST_ENTRY WorkQueueLinks;          // offset: 0x0 (0)
  struct _LIST_ENTRY CoalescedWorkQueueLinks; // offset: 0x8 (8)
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

  } Parameters;   // offset: 0x10 (16)
  UCHAR Function; // offset: 0x14 (20)
};

// 0x20 (32) bytes
struct _VACB {
  VOID *BaseAddress;                        // offset: 0x0 (0)
  struct _SHARED_CACHE_MAP *SharedCacheMap; // offset: 0x4 (4)
  union {
    union _LARGE_INTEGER FileOffset; // offset: 0x8 (8)
    USHORT ActiveCount;              // offset: 0x8 (8)

  } Overlay;                            // offset: 0x8 (8)
  struct _LIST_ENTRY LruList;           // offset: 0x10 (16)
  struct _VACB_ARRAY_HEADER *ArrayHead; // offset: 0x18 (24)
};

// 0x10 (16) bytes
struct _ETW_KERNEL_TRACE_TIMESTAMP {
  union _LARGE_INTEGER KernelTraceTimeStamp[2]; // offset: 0x0 (0)
};

// 0x18 (24) bytes
struct _PERFINFO_HARDPAGEFAULT_INFORMATION {
  union _LARGE_INTEGER ReadOffset; // offset: 0x0 (0)
  VOID *VirtualAddress;            // offset: 0x8 (8)
  VOID *FileObject;                // offset: 0xc (12)
  ULONG ThreadId;                  // offset: 0x10 (16)
  ULONG ByteCount;                 // offset: 0x14 (20)
};

// 0x30 (48) bytes
struct _PF_HARD_FAULT_INFO {
  struct _ETW_KERNEL_TRACE_TIMESTAMP KernelTimeStamp; // offset: 0x0 (0)
  struct _PERFINFO_HARDPAGEFAULT_INFORMATION
      HardFaultEvent;                 // offset: 0x10 (16)
  union _LARGE_INTEGER IoTimeInTicks; // offset: 0x28 (40)
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
      union {
        struct {
          USHORT Reserved;     // offset: 0x0 (0)
          USHORT MessageCount; // offset: 0x2 (2)
          ULONG Vector;        // offset: 0x4 (4)
          ULONG Affinity;      // offset: 0x8 (8)
        } Raw;                 // offset: 0x0 (0)
        struct {
          ULONG Level;    // offset: 0x0 (0)
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
      ULONG MinimumVector;                    // offset: 0x0 (0)
      ULONG MaximumVector;                    // offset: 0x4 (4)
      enum _IRQ_DEVICE_POLICY AffinityPolicy; // offset: 0x8 (8)
      enum _IRQ_PRIORITY PriorityPolicy;      // offset: 0xc (12)
      ULONG TargetedProcessors;               // offset: 0x10 (16)
    } Interrupt;                              // offset: 0x8 (8)
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

// 0x2e8 (744) bytes
struct _HHIVE {
  ULONG Signature; // offset: 0x0 (0)
  struct _CELL_DATA *(*GetCellRoutine)(struct _HHIVE *arg1,
                                       ULONG arg2); // offset: 0x4 (4)
  VOID (*ReleaseCellRoutine)
  (struct _HHIVE *arg1, ULONG arg2);                     // offset: 0x8 (8)
  VOID *(*Allocate)(ULONG arg1, UCHAR arg2, ULONG arg3); // offset: 0xc (12)
  VOID (*Free)(VOID *arg1, ULONG arg2);                  // offset: 0x10 (16)
  UCHAR (*FileSetSize)
  (struct _HHIVE *arg1, ULONG arg2, ULONG arg3,
   ULONG arg4); // offset: 0x14 (20)
  UCHAR (*FileWrite)
  (struct _HHIVE *arg1, ULONG arg2, struct CMP_OFFSET_ARRAY *arg3, ULONG arg4,
   ULONG *arg5); // offset: 0x18 (24)
  UCHAR (*FileRead)
  (struct _HHIVE *arg1, ULONG arg2, ULONG *arg3, VOID *arg4,
   ULONG arg5); // offset: 0x1c (28)
  UCHAR (*FileFlush)
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
  UCHAR DirtyFlag;                // offset: 0x42 (66)
  ULONG HvBinHeadersUse;          // offset: 0x44 (68)
  ULONG HvFreeCellsUse;           // offset: 0x48 (72)
  ULONG HvUsedCellsUse;           // offset: 0x4c (76)
  ULONG CmUsedCellsUse;           // offset: 0x50 (80)
  ULONG HiveFlags;                // offset: 0x54 (84)
  ULONG CurrentLog;               // offset: 0x58 (88)
  ULONG LogSize[2];               // offset: 0x5c (92)
  ULONG RefreshCount;             // offset: 0x64 (100)
  ULONG StorageTypeCount;         // offset: 0x68 (104)
  ULONG Version;                  // offset: 0x6c (108)
  struct _DUAL Storage[2];        // offset: 0x70 (112)
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
    } Overlay;                                 // offset: 0x40 (64)
    struct _KAPC Apc;                          // offset: 0x40 (64)
    VOID *CompletionKey;                       // offset: 0x40 (64)

  } Tail; // offset: 0x40 (64)
};

// 0x100 (256) bytes
struct _IOV_FORCED_PENDING_TRACE {
  struct _IRP *Irp;     // offset: 0x0 (0)
  VOID *StackTrace[63]; // offset: 0x4 (4)
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

// 0x158 (344) bytes
struct _DEVICE_NODE {
  struct _DEVICE_NODE *Sibling;                     // offset: 0x0 (0)
  struct _DEVICE_NODE *Child;                       // offset: 0x4 (4)
  struct _DEVICE_NODE *Parent;                      // offset: 0x8 (8)
  struct _DEVICE_NODE *LastChild;                   // offset: 0xc (12)
  ULONG Level;                                      // offset: 0x10 (16)
  struct _PO_DEVICE_NOTIFY Notify;                  // offset: 0x14 (20)
  struct _PO_IRP_MANAGER PoIrpManager;              // offset: 0x38 (56)
  enum _PNP_DEVNODE_STATE State;                    // offset: 0x48 (72)
  enum _PNP_DEVNODE_STATE PreviousState;            // offset: 0x4c (76)
  enum _PNP_DEVNODE_STATE StateHistory[20];         // offset: 0x50 (80)
  ULONG StateHistoryEntry;                          // offset: 0xa0 (160)
  LONG CompletionStatus;                            // offset: 0xa4 (164)
  struct _IRP *PendingIrp;                          // offset: 0xa8 (168)
  ULONG Flags;                                      // offset: 0xac (172)
  ULONG UserFlags;                                  // offset: 0xb0 (176)
  ULONG Problem;                                    // offset: 0xb4 (180)
  struct _DEVICE_OBJECT *PhysicalDeviceObject;      // offset: 0xb8 (184)
  struct _CM_RESOURCE_LIST *ResourceList;           // offset: 0xbc (188)
  struct _CM_RESOURCE_LIST *ResourceListTranslated; // offset: 0xc0 (192)
  struct _UNICODE_STRING InstancePath;              // offset: 0xc4 (196)
  struct _UNICODE_STRING ServiceName;               // offset: 0xcc (204)
  struct _DEVICE_OBJECT *DuplicatePDO;              // offset: 0xd4 (212)
  struct _IO_RESOURCE_REQUIREMENTS_LIST
      *ResourceRequirements;               // offset: 0xd8 (216)
  enum _INTERFACE_TYPE InterfaceType;      // offset: 0xdc (220)
  ULONG BusNumber;                         // offset: 0xe0 (224)
  enum _INTERFACE_TYPE ChildInterfaceType; // offset: 0xe4 (228)
  ULONG ChildBusNumber;                    // offset: 0xe8 (232)
  USHORT ChildBusTypeIndex;                // offset: 0xec (236)
  UCHAR RemovalPolicy;                     // offset: 0xee (238)
  UCHAR HardwareRemovalPolicy;             // offset: 0xef (239)
  struct _LIST_ENTRY TargetDeviceNotify;   // offset: 0xf0 (240)
  struct _LIST_ENTRY DeviceArbiterList;    // offset: 0xf8 (248)
  struct _LIST_ENTRY DeviceTranslatorList; // offset: 0x100 (256)
  USHORT NoTranslatorMask;                 // offset: 0x108 (264)
  USHORT QueryTranslatorMask;              // offset: 0x10a (266)
  USHORT NoArbiterMask;                    // offset: 0x10c (268)
  USHORT QueryArbiterMask;                 // offset: 0x10e (270)
  union {
    struct _DEVICE_NODE *LegacyDeviceNode;            // offset: 0x110 (272)
    struct _DEVICE_RELATIONS *PendingDeviceRelations; // offset: 0x110 (272)
    VOID *Information;                                // offset: 0x110 (272)

  } OverUsed1; // offset: 0x110 (272)
  union {
    struct _DEVICE_NODE *NextResourceDeviceNode; // offset: 0x114 (276)

  } OverUsed2;                                       // offset: 0x114 (276)
  struct _CM_RESOURCE_LIST *BootResources;           // offset: 0x118 (280)
  struct _CM_RESOURCE_LIST *BootResourcesTranslated; // offset: 0x11c (284)
  ULONG CapabilityFlags;                             // offset: 0x120 (288)
  struct {
    enum PROFILE_STATUS DockStatus;           // offset: 0x0 (0)
    struct _LIST_ENTRY ListEntry;             // offset: 0x4 (4)
    USHORT *SerialNumber;                     // offset: 0xc (12)
  } DockInfo;                                 // offset: 0x124 (292)
  ULONG DisableableDepends;                   // offset: 0x134 (308)
  struct _LIST_ENTRY PendedSetInterfaceState; // offset: 0x138 (312)
  struct _LIST_ENTRY LegacyBusListEntry;      // offset: 0x140 (320)
  ULONG DriverUnloadRetryCount;               // offset: 0x148 (328)
  struct _DEVICE_NODE *PreviousParent;        // offset: 0x14c (332)
  ULONG DeletedChildren;                      // offset: 0x150 (336)
  ULONG NumaNodeIndex;                        // offset: 0x154 (340)
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

// 0x8 (8) bytes
struct LIST_ENTRY32 {
  ULONG Flink; // offset: 0x0 (0)
  ULONG Blink; // offset: 0x4 (4)
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

// 0x60 (96) bytes
struct _PO_HIBER_PERF {
  ULONGLONG IoTicks;             // offset: 0x0 (0)
  ULONGLONG InitTicks;           // offset: 0x8 (8)
  ULONGLONG CopyTicks;           // offset: 0x10 (16)
  ULONGLONG StartCount;          // offset: 0x18 (24)
  ULONG ElapsedTime;             // offset: 0x20 (32)
  ULONG IoTime;                  // offset: 0x24 (36)
  ULONG CopyTime;                // offset: 0x28 (40)
  ULONG InitTime;                // offset: 0x2c (44)
  ULONG PagesWritten;            // offset: 0x30 (48)
  ULONG PagesProcessed;          // offset: 0x34 (52)
  ULONG BytesCopied;             // offset: 0x38 (56)
  ULONG DumpCount;               // offset: 0x3c (60)
  ULONG FileRuns;                // offset: 0x40 (64)
  ULONGLONG ResumeAppStartTime;  // offset: 0x48 (72)
  ULONGLONG ResumeAppEndTime;    // offset: 0x50 (80)
  ULONGLONG HiberFileResumeTime; // offset: 0x58 (88)
};

// 0xf0 (240) bytes
struct PO_MEMORY_IMAGE {
  ULONG Signature;                       // offset: 0x0 (0)
  ULONG ImageType;                       // offset: 0x4 (4)
  ULONG CheckSum;                        // offset: 0x8 (8)
  ULONG LengthSelf;                      // offset: 0xc (12)
  ULONG PageSelf;                        // offset: 0x10 (16)
  ULONG PageSize;                        // offset: 0x14 (20)
  union _LARGE_INTEGER SystemTime;       // offset: 0x18 (24)
  ULONGLONG InterruptTime;               // offset: 0x20 (32)
  ULONG FeatureFlags;                    // offset: 0x28 (40)
  UCHAR HiberFlags;                      // offset: 0x2c (44)
  UCHAR spare[3];                        // offset: 0x2d (45)
  ULONG NoHiberPtes;                     // offset: 0x30 (48)
  ULONG HiberVa;                         // offset: 0x34 (52)
  union _LARGE_INTEGER HiberPte;         // offset: 0x38 (56)
  ULONG NoFreePages;                     // offset: 0x40 (64)
  ULONG FreeMapCheck;                    // offset: 0x44 (68)
  ULONG WakeCheck;                       // offset: 0x48 (72)
  ULONG TotalPages;                      // offset: 0x4c (76)
  ULONG FirstTablePage;                  // offset: 0x50 (80)
  ULONG LastFilePage;                    // offset: 0x54 (84)
  struct _PO_HIBER_PERF PerfInfo;        // offset: 0x58 (88)
  ULONG FirmwareRuntimeInformationPages; // offset: 0xb8 (184)
  ULONG FirmwareRuntimeInformation[1];   // offset: 0xbc (188)
  ULONG NoBootLoaderLogPages;            // offset: 0xc0 (192)
  ULONG BootLoaderLogPages[8];           // offset: 0xc4 (196)
  ULONG NotUsed;                         // offset: 0xe4 (228)
  ULONG ResumeContextCheck;              // offset: 0xe8 (232)
  ULONG ResumeContextPages;              // offset: 0xec (236)
};

// 0x100 (256) bytes
struct _POP_HIBER_CONTEXT {
  UCHAR WriteToFile;                          // offset: 0x0 (0)
  UCHAR ReserveLoaderMemory;                  // offset: 0x1 (1)
  UCHAR ReserveFreeMemory;                    // offset: 0x2 (2)
  UCHAR VerifyOnWake;                         // offset: 0x3 (3)
  UCHAR Reset;                                // offset: 0x4 (4)
  UCHAR HiberFlags;                           // offset: 0x5 (5)
  UCHAR WroteHiberFile;                       // offset: 0x6 (6)
  ULONG Lock;                                 // offset: 0x8 (8)
  UCHAR MapFrozen;                            // offset: 0xc (12)
  struct _RTL_BITMAP MemoryMap;               // offset: 0x10 (16)
  struct _RTL_BITMAP DiscardedMemoryPages;    // offset: 0x18 (24)
  struct _LIST_ENTRY ClonedRanges;            // offset: 0x20 (32)
  ULONG ClonedRangeCount;                     // offset: 0x28 (40)
  struct _LIST_ENTRY *NextCloneRange;         // offset: 0x2c (44)
  ULONG NextPreserve;                         // offset: 0x30 (48)
  struct _MDL *LoaderMdl;                     // offset: 0x34 (52)
  struct _MDL *AllocatedMdl;                  // offset: 0x38 (56)
  ULONGLONG PagesOut;                         // offset: 0x40 (64)
  VOID *IoPages;                              // offset: 0x48 (72)
  ULONG IoPagesCount;                         // offset: 0x4c (76)
  VOID *CurrentMcb;                           // offset: 0x50 (80)
  struct _DUMP_STACK_CONTEXT *DumpStack;      // offset: 0x54 (84)
  struct _KPROCESSOR_STATE *WakeState;        // offset: 0x58 (88)
  ULONG HiberVa;                              // offset: 0x5c (92)
  union _LARGE_INTEGER HiberPte;              // offset: 0x60 (96)
  LONG Status;                                // offset: 0x68 (104)
  struct PO_MEMORY_IMAGE *MemoryImage;        // offset: 0x6c (108)
  struct _PO_MEMORY_RANGE_ARRAY *TableHead;   // offset: 0x70 (112)
  UCHAR *CompressionWorkspace;                // offset: 0x74 (116)
  UCHAR *CompressedWriteBuffer;               // offset: 0x78 (120)
  ULONG *PerformanceStats;                    // offset: 0x7c (124)
  VOID *CompressionBlock;                     // offset: 0x80 (128)
  VOID *DmaIO;                                // offset: 0x84 (132)
  VOID *TemporaryHeap;                        // offset: 0x88 (136)
  struct _PO_HIBER_PERF PerfInfo;             // offset: 0x90 (144)
  struct _MDL *BootLoaderLogMdl;              // offset: 0xf0 (240)
  struct _MDL *FirmwareRuntimeInformationMdl; // offset: 0xf4 (244)
  VOID *ResumeContext;                        // offset: 0xf8 (248)
  ULONG ResumeContextPages;                   // offset: 0xfc (252)
};

// 0xa0 (160) bytes
struct _POP_POWER_ACTION {
  UCHAR Updates;                                            // offset: 0x0 (0)
  UCHAR State;                                              // offset: 0x1 (1)
  UCHAR Shutdown;                                           // offset: 0x2 (2)
  enum POWER_ACTION Action;                                 // offset: 0x4 (4)
  enum _SYSTEM_POWER_STATE LightestState;                   // offset: 0x8 (8)
  ULONG Flags;                                              // offset: 0xc (12)
  LONG Status;                                              // offset: 0x10 (16)
  enum POP_POLICY_DEVICE_TYPE DeviceType;                   // offset: 0x14 (20)
  ULONG DeviceTypeFlags;                                    // offset: 0x18 (24)
  UCHAR IrpMinor;                                           // offset: 0x1c (28)
  UCHAR Waking;                                             // offset: 0x1d (29)
  enum _SYSTEM_POWER_STATE SystemState;                     // offset: 0x20 (32)
  enum _SYSTEM_POWER_STATE NextSystemState;                 // offset: 0x24 (36)
  enum _SYSTEM_POWER_STATE EffectiveSystemState;            // offset: 0x28 (40)
  enum _SYSTEM_POWER_STATE CurrentSystemState;              // offset: 0x2c (44)
  struct _POP_SHUTDOWN_BUG_CHECK *ShutdownBugCode;          // offset: 0x30 (48)
  struct _POP_DEVICE_SYS_STATE *DevState;                   // offset: 0x34 (52)
  struct _POP_DISPLAY_RESUME_CONTEXT *DisplayResumeContext; // offset: 0x38 (56)
  struct _POP_HIBER_CONTEXT *HiberContext;                  // offset: 0x3c (60)
  ULONGLONG WakeTime;                                       // offset: 0x40 (64)
  ULONGLONG SleepTime;                                      // offset: 0x48 (72)
  struct SYSTEM_POWER_CAPABILITIES FilteredCapabilities;    // offset: 0x50 (80)
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

// 0x270 (624) bytes
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
  CHAR Number;                                        // offset: 0x34 (52)
  UCHAR ShareVector;                                  // offset: 0x35 (53)
  enum _KINTERRUPT_MODE Mode;                         // offset: 0x38 (56)
  enum _KINTERRUPT_POLARITY Polarity;                 // offset: 0x3c (60)
  ULONG ServiceCount;                                 // offset: 0x40 (64)
  ULONG DispatchCount;                                // offset: 0x44 (68)
  ULONGLONG Rsvd1;                                    // offset: 0x48 (72)
  ULONG DispatchCode[135];                            // offset: 0x50 (80)
};

// 0x18 (24) bytes
struct _SEP_TOKEN_PRIVILEGES {
  ULONGLONG Present;          // offset: 0x0 (0)
  ULONGLONG Enabled;          // offset: 0x8 (8)
  ULONGLONG EnabledByDefault; // offset: 0x10 (16)
};

// 0x1e8 (488) bytes
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
  ULONG SessionId;                                       // offset: 0x74 (116)
  ULONG UserAndGroupCount;                               // offset: 0x78 (120)
  ULONG RestrictedSidCount;                              // offset: 0x7c (124)
  ULONG VariableLength;                                  // offset: 0x80 (128)
  ULONG DynamicCharged;                                  // offset: 0x84 (132)
  ULONG DynamicAvailable;                                // offset: 0x88 (136)
  ULONG DefaultOwnerIndex;                               // offset: 0x8c (140)
  struct _SID_AND_ATTRIBUTES *UserAndGroups;             // offset: 0x90 (144)
  struct _SID_AND_ATTRIBUTES *RestrictedSids;            // offset: 0x94 (148)
  VOID *PrimaryGroup;                                    // offset: 0x98 (152)
  ULONG *DynamicPart;                                    // offset: 0x9c (156)
  struct _ACL *DefaultDacl;                              // offset: 0xa0 (160)
  enum _TOKEN_TYPE TokenType;                            // offset: 0xa4 (164)
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // offset: 0xa8 (168)
  ULONG TokenFlags;                                      // offset: 0xac (172)
  UCHAR TokenInUse;                                      // offset: 0xb0 (176)
  ULONG IntegrityLevelIndex;                             // offset: 0xb4 (180)
  ULONG MandatoryPolicy;                                 // offset: 0xb8 (184)
  struct _SECURITY_TOKEN_PROXY_DATA *ProxyData;          // offset: 0xbc (188)
  struct _SECURITY_TOKEN_AUDIT_DATA *AuditData;          // offset: 0xc0 (192)
  struct _SEP_LOGON_SESSION_REFERENCES *LogonSession;    // offset: 0xc4 (196)
  struct _LUID OriginatingLogonSession;                  // offset: 0xc8 (200)
  struct _SID_AND_ATTRIBUTES_HASH SidHash;               // offset: 0xd0 (208)
  struct _SID_AND_ATTRIBUTES_HASH RestrictedSidHash;     // offset: 0x158 (344)
  ULONG VariablePart;                                    // offset: 0x1e0 (480)
};

// 0x300 (768) bytes
struct _ALPC_COMPLETION_LIST_HEADER {
  ULONGLONG StartMagic;                     // offset: 0x0 (0)
  ULONG TotalSize;                          // offset: 0x8 (8)
  ULONG ListOffset;                         // offset: 0xc (12)
  ULONG ListSize;                           // offset: 0x10 (16)
  ULONG BitmapOffset;                       // offset: 0x14 (20)
  ULONG BitmapSize;                         // offset: 0x18 (24)
  ULONG DataOffset;                         // offset: 0x1c (28)
  ULONG DataSize;                           // offset: 0x20 (32)
  ULONG AttributeFlags;                     // offset: 0x24 (36)
  ULONG AttributeSize;                      // offset: 0x28 (40)
  struct _ALPC_COMPLETION_LIST_STATE State; // offset: 0x80 (128)
  volatile ULONG LastMessageId;             // offset: 0x88 (136)
  volatile ULONG LastCallbackId;            // offset: 0x8c (140)
  volatile ULONG PostCount;                 // offset: 0x100 (256)
  volatile ULONG ReturnCount;               // offset: 0x180 (384)
  volatile ULONG LogSequenceNumber;         // offset: 0x200 (512)
  struct _RTL_SRWLOCK UserLock;             // offset: 0x280 (640)
  ULONGLONG EndMagic;                       // offset: 0x288 (648)
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

// 0x158 (344) bytes
struct _ETW_GUID_ENTRY {
  struct _LIST_ENTRY GuidList;                  // offset: 0x0 (0)
  volatile LONG RefCount;                       // offset: 0x8 (8)
  struct _GUID Guid;                            // offset: 0xc (12)
  struct _LIST_ENTRY RegListHead;               // offset: 0x1c (28)
  VOID *SecurityDescriptor;                     // offset: 0x24 (36)
  struct _ETW_LAST_ENABLE_INFO LastEnable;      // offset: 0x28 (40)
  struct _TRACE_ENABLE_INFO ProviderEnableInfo; // offset: 0x38 (56)
  struct _TRACE_ENABLE_INFO EnableInfo[8];      // offset: 0x58 (88)
};

// 0x18 (24) bytes
struct _PERFINFO_TRACE_HEADER {
  union {
    ULONG Marker; // offset: 0x0 (0)
    struct {
      USHORT Version;   // offset: 0x0 (0)
      UCHAR HeaderType; // offset: 0x2 (2)
      UCHAR Flags;      // offset: 0x3 (3)
    };
  };
  union {
    ULONG Header;                    // offset: 0x4 (4)
    struct _WMI_TRACE_PACKET Packet; // offset: 0x4 (4)
  };
  union {
    ULONGLONG TS;                    // offset: 0x8 (8)
    union _LARGE_INTEGER SystemTime; // offset: 0x8 (8)
  };
  UCHAR Data[1]; // offset: 0x10 (16)
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
      ULONG BufferSize;             // offset: 0x0 (0)
      ULONG SavedOffset;            // offset: 0x4 (4)
      volatile ULONG CurrentOffset; // offset: 0x8 (8)
      volatile LONG ReferenceCount; // offset: 0xc (12)
      union {
        union _LARGE_INTEGER TimeStamp;      // offset: 0x10 (16)
        union _LARGE_INTEGER StartPerfClock; // offset: 0x10 (16)
      };
      LONGLONG SequenceNumber; // offset: 0x18 (24)
      union {
        ULONG Padding0[2];                     // offset: 0x20 (32)
        struct _SINGLE_LIST_ENTRY SlistEntry;  // offset: 0x20 (32)
        struct _WMI_BUFFER_HEADER *NextBuffer; // offset: 0x20 (32)
      };
      struct _ETW_BUFFER_CONTEXT ClientContext; // offset: 0x28 (40)
      union {
        enum _ETW_BUFFER_STATE State; // offset: 0x2c (44)
        ULONG Flags;                  // offset: 0x2c (44)
      };
    };
  };
  ULONG Offset;      // offset: 0x30 (48)
  USHORT BufferFlag; // offset: 0x34 (52)
  USHORT BufferType; // offset: 0x36 (54)
  union {
    ULONG Padding1[4];              // offset: 0x38 (56)
    union _LARGE_INTEGER StartTime; // offset: 0x38 (56)
    struct _LIST_ENTRY Entry;       // offset: 0x38 (56)
    struct {
      VOID *Padding2;                        // offset: 0x38 (56)
      struct _SINGLE_LIST_ENTRY GlobalEntry; // offset: 0x3c (60)
    };
    struct {
      VOID *Pointer0; // offset: 0x38 (56)
      VOID *Pointer1; // offset: 0x3c (60)
    };
  };
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

// 0x10 (16) bytes
struct _HEAP_FREE_ENTRY {
  union {
    struct {
      USHORT Size;         // offset: 0x0 (0)
      UCHAR Flags;         // offset: 0x2 (2)
      UCHAR SmallTagIndex; // offset: 0x3 (3)
    };
    struct {
      VOID *volatile SubSegmentCode; // offset: 0x0 (0)
      USHORT PreviousSize;           // offset: 0x4 (4)
      union {
        UCHAR SegmentOffset; // offset: 0x6 (6)
        UCHAR LFHFlags;      // offset: 0x6 (6)
      };
      UCHAR UnusedBytes; // offset: 0x7 (7)
    };
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
      ULONG Code1;  // offset: 0x0 (0)
      USHORT Code2; // offset: 0x4 (4)
      UCHAR Code3;  // offset: 0x6 (6)
      UCHAR Code4;  // offset: 0x7 (7)
    };
    ULONGLONG AgregateCode; // offset: 0x0 (0)
  };
  struct _LIST_ENTRY FreeList; // offset: 0x8 (8)
};

// 0x8 (8) bytes
struct _HEAP_ENTRY {
  union {
    struct {
      USHORT Size;         // offset: 0x0 (0)
      UCHAR Flags;         // offset: 0x2 (2)
      UCHAR SmallTagIndex; // offset: 0x3 (3)
    };
    struct {
      VOID *volatile SubSegmentCode; // offset: 0x0 (0)
      USHORT PreviousSize;           // offset: 0x4 (4)
      union {
        UCHAR SegmentOffset; // offset: 0x6 (6)
        UCHAR LFHFlags;      // offset: 0x6 (6)
      };
      UCHAR UnusedBytes; // offset: 0x7 (7)
    };
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
      ULONG Code1;  // offset: 0x0 (0)
      USHORT Code2; // offset: 0x4 (4)
      UCHAR Code3;  // offset: 0x6 (6)
      UCHAR Code4;  // offset: 0x7 (7)
    };
    ULONGLONG AgregateCode; // offset: 0x0 (0)
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

// 0x130 (304) bytes
struct _HEAP {
  struct _HEAP_ENTRY Entry;                        // offset: 0x0 (0)
  ULONG SegmentSignature;                          // offset: 0x8 (8)
  ULONG SegmentFlags;                              // offset: 0xc (12)
  struct _LIST_ENTRY SegmentListEntry;             // offset: 0x10 (16)
  struct _HEAP *Heap;                              // offset: 0x18 (24)
  VOID *BaseAddress;                               // offset: 0x1c (28)
  ULONG NumberOfPages;                             // offset: 0x20 (32)
  struct _HEAP_ENTRY *FirstEntry;                  // offset: 0x24 (36)
  struct _HEAP_ENTRY *LastValidEntry;              // offset: 0x28 (40)
  ULONG NumberOfUnCommittedPages;                  // offset: 0x2c (44)
  ULONG NumberOfUnCommittedRanges;                 // offset: 0x30 (48)
  USHORT SegmentAllocatorBackTraceIndex;           // offset: 0x34 (52)
  USHORT Reserved;                                 // offset: 0x36 (54)
  struct _LIST_ENTRY UCRSegmentList;               // offset: 0x38 (56)
  ULONG Flags;                                     // offset: 0x40 (64)
  ULONG ForceFlags;                                // offset: 0x44 (68)
  ULONG CompatibilityFlags;                        // offset: 0x48 (72)
  ULONG EncodeFlagMask;                            // offset: 0x4c (76)
  struct _HEAP_ENTRY Encoding;                     // offset: 0x50 (80)
  ULONG PointerKey;                                // offset: 0x58 (88)
  ULONG Interceptor;                               // offset: 0x5c (92)
  ULONG VirtualMemoryThreshold;                    // offset: 0x60 (96)
  ULONG Signature;                                 // offset: 0x64 (100)
  ULONG SegmentReserve;                            // offset: 0x68 (104)
  ULONG SegmentCommit;                             // offset: 0x6c (108)
  ULONG DeCommitFreeBlockThreshold;                // offset: 0x70 (112)
  ULONG DeCommitTotalFreeThreshold;                // offset: 0x74 (116)
  ULONG TotalFreeSize;                             // offset: 0x78 (120)
  ULONG MaximumAllocationSize;                     // offset: 0x7c (124)
  USHORT ProcessHeapsListIndex;                    // offset: 0x80 (128)
  USHORT HeaderValidateLength;                     // offset: 0x82 (130)
  VOID *HeaderValidateCopy;                        // offset: 0x84 (132)
  USHORT NextAvailableTagIndex;                    // offset: 0x88 (136)
  USHORT MaximumTagIndex;                          // offset: 0x8a (138)
  struct _HEAP_TAG_ENTRY *TagEntries;              // offset: 0x8c (140)
  struct _LIST_ENTRY UCRList;                      // offset: 0x90 (144)
  ULONG AlignRound;                                // offset: 0x98 (152)
  ULONG AlignMask;                                 // offset: 0x9c (156)
  struct _LIST_ENTRY VirtualAllocdBlocks;          // offset: 0xa0 (160)
  struct _LIST_ENTRY SegmentList;                  // offset: 0xa8 (168)
  USHORT AllocatorBackTraceIndex;                  // offset: 0xb0 (176)
  ULONG NonDedicatedListLength;                    // offset: 0xb4 (180)
  VOID *BlocksIndex;                               // offset: 0xb8 (184)
  VOID *UCRIndex;                                  // offset: 0xbc (188)
  struct _HEAP_PSEUDO_TAG_ENTRY *PseudoTagEntries; // offset: 0xc0 (192)
  struct _LIST_ENTRY FreeLists;                    // offset: 0xc4 (196)
  struct _HEAP_LOCK *LockVariable;                 // offset: 0xcc (204)
  LONG (*CommitRoutine)
  (VOID *arg1, VOID **arg2, ULONG *arg3);          // offset: 0xd0 (208)
  VOID *FrontEndHeap;                              // offset: 0xd4 (212)
  USHORT FrontHeapLockCount;                       // offset: 0xd8 (216)
  UCHAR FrontEndHeapType;                          // offset: 0xda (218)
  struct _HEAP_COUNTERS Counters;                  // offset: 0xdc (220)
  struct _HEAP_TUNING_PARAMETERS TuningParameters; // offset: 0x124 (292)
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
union _CLS_LSN {
  struct {
    ULONG idxRecord;    // offset: 0x0 (0)
    ULONG cidContainer; // offset: 0x4 (4)
  } offset;             // offset: 0x0 (0)
  ULONGLONG ullOffset;  // offset: 0x0 (0)
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
  struct _CMHIVE *HiveArray[8];             // offset: 0x48 (72)
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

// 0x90 (144) bytes
struct _CM_KEY_CONTROL_BLOCK {
  ULONG RefCount;               // offset: 0x0 (0)
  ULONG ExtFlags : 9;           // offset: 0x4 (4)
  ULONG PrivateAlloc : 1;       // offset: 0x4 (4)
  ULONG Delete : 1;             // offset: 0x4 (4)
  ULONG DelayedCloseIndex : 11; // offset: 0x4 (4)
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
  struct _LIST_ENTRY KCBUoWListHead;     // offset: 0x64 (100)
  struct _CM_TRANS *TransKCBOwner;       // offset: 0x6c (108)
  struct _CM_INTENT_LOCK KCBLock;        // offset: 0x70 (112)
  struct _CM_INTENT_LOCK KeyLock;        // offset: 0x78 (120)
  struct _CHILD_LIST TransValueCache;    // offset: 0x80 (128)
  struct _CM_TRANS *TransValueListOwner; // offset: 0x88 (136)
  struct _UNICODE_STRING *FullKCBName;   // offset: 0x8c (140)
};

// 0x5e0 (1504) bytes
struct _CMHIVE {
  struct _HHIVE Hive;                                 // offset: 0x0 (0)
  VOID *FileHandles[6];                               // offset: 0x2e8 (744)
  struct _LIST_ENTRY NotifyList;                      // offset: 0x300 (768)
  struct _LIST_ENTRY HiveList;                        // offset: 0x308 (776)
  struct _FAST_MUTEX *HiveLock;                       // offset: 0x310 (784)
  struct _EX_PUSH_LOCK ViewLock;                      // offset: 0x314 (788)
  struct _KTHREAD *ViewLockOwner;                     // offset: 0x318 (792)
  ULONG ViewLockLast;                                 // offset: 0x31c (796)
  ULONG ViewUnLockLast;                               // offset: 0x320 (800)
  struct _FAST_MUTEX *WriterLock;                     // offset: 0x324 (804)
  struct _EX_PUSH_LOCK FlusherLock;                   // offset: 0x328 (808)
  struct _EX_PUSH_LOCK SecurityLock;                  // offset: 0x32c (812)
  struct _LIST_ENTRY MappedViewList;                  // offset: 0x330 (816)
  struct _LIST_ENTRY PinnedViewList;                  // offset: 0x338 (824)
  struct _LIST_ENTRY FlushedViewList;                 // offset: 0x340 (832)
  USHORT MappedViewCount;                             // offset: 0x348 (840)
  USHORT PinnedViewCount;                             // offset: 0x34a (842)
  ULONG UseCount;                                     // offset: 0x34c (844)
  ULONG ViewsPerHive;                                 // offset: 0x350 (848)
  struct _FILE_OBJECT *FileObject;                    // offset: 0x354 (852)
  ULONG LastShrinkHiveSize;                           // offset: 0x358 (856)
  union _LARGE_INTEGER ActualFileSize;                // offset: 0x360 (864)
  struct _UNICODE_STRING FileFullPath;                // offset: 0x368 (872)
  struct _UNICODE_STRING FileUserName;                // offset: 0x370 (880)
  struct _UNICODE_STRING HiveRootPath;                // offset: 0x378 (888)
  ULONG SecurityCount;                                // offset: 0x380 (896)
  ULONG SecurityCacheSize;                            // offset: 0x384 (900)
  LONG SecurityHitHint;                               // offset: 0x388 (904)
  struct _CM_KEY_SECURITY_CACHE_ENTRY *SecurityCache; // offset: 0x38c (908)
  struct _LIST_ENTRY SecurityHash[64];                // offset: 0x390 (912)
  ULONG UnloadEventCount;                             // offset: 0x590 (1424)
  struct _KEVENT **UnloadEventArray;                  // offset: 0x594 (1428)
  struct _CM_KEY_CONTROL_BLOCK *RootKcb;              // offset: 0x598 (1432)
  UCHAR Frozen;                                       // offset: 0x59c (1436)
  struct _CM_WORKITEM *UnloadWorkItem;                // offset: 0x5a0 (1440)
  UCHAR GrowOnlyMode;                                 // offset: 0x5a4 (1444)
  ULONG GrowOffset;                                   // offset: 0x5a8 (1448)
  struct _LIST_ENTRY KcbConvertListHead;              // offset: 0x5ac (1452)
  struct _LIST_ENTRY KnodeConvertListHead;            // offset: 0x5b4 (1460)
  struct _CM_CELL_REMAP_BLOCK *CellRemapArray;        // offset: 0x5bc (1468)
  ULONG Flags;                                        // offset: 0x5c0 (1472)
  struct _LIST_ENTRY TrustClassEntry;                 // offset: 0x5c4 (1476)
  ULONG FlushCount;                                   // offset: 0x5cc (1484)
  struct _CM_RM *CmRm;                                // offset: 0x5d0 (1488)
  ULONG CmRmInitFailPoint;                            // offset: 0x5d4 (1492)
  LONG CmRmInitFailStatus;                            // offset: 0x5d8 (1496)
  struct _KTHREAD *CreatorOwner;                      // offset: 0x5dc (1500)
};

// 0x10 (16) bytes
struct _MMEXTEND_INFO {
  ULONGLONG CommittedSize; // offset: 0x0 (0)
  ULONG ReferenceCount;    // offset: 0x8 (8)
};

// 0x28 (40) bytes
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
  struct _EX_PUSH_LOCK SegmentLock;        // offset: 0x1c (28)
  struct _MSUBSECTION *LastSubsectionHint; // offset: 0x20 (32)
};

// 0x3c (60) bytes
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

  } u;                           // offset: 0x14 (20)
  struct _EX_PUSH_LOCK PushLock; // offset: 0x18 (24)
  union {
    ULONG LongFlags3;               // offset: 0x1c (28)
    struct _MMVAD_FLAGS3 VadFlags3; // offset: 0x1c (28)

  } u5; // offset: 0x1c (28)
  union {
    ULONG LongFlags2;               // offset: 0x20 (32)
    struct _MMVAD_FLAGS2 VadFlags2; // offset: 0x20 (32)

  } u2;                             // offset: 0x20 (32)
  struct _SUBSECTION *Subsection;   // offset: 0x24 (36)
  struct _MMPTE *FirstPrototypePte; // offset: 0x28 (40)
  struct _MMPTE *LastContiguousPte; // offset: 0x2c (44)
  union {
    struct _LIST_ENTRY List;        // offset: 0x30 (48)
    struct _MMADDRESS_LIST Secured; // offset: 0x30 (48)

  } u3; // offset: 0x30 (48)
  union {
    struct _MMBANKED_SECTION *Banked;    // offset: 0x38 (56)
    struct _MMEXTEND_INFO *ExtendedInfo; // offset: 0x38 (56)

  } u4; // offset: 0x38 (56)
};

// 0x10 (16) bytes
struct _LOADER_PERFORMANCE_DATA {
  ULONGLONG StartTime; // offset: 0x0 (0)
  ULONGLONG EndTime;   // offset: 0x8 (8)
};

// 0x84 (132) bytes
struct _LOADER_PARAMETER_EXTENSION {
  ULONG Size;                                             // offset: 0x0 (0)
  struct _PROFILE_PARAMETER_BLOCK Profile;                // offset: 0x4 (4)
  ULONG MajorVersion;                                     // offset: 0x14 (20)
  ULONG MinorVersion;                                     // offset: 0x18 (24)
  VOID *EmInfFileImage;                                   // offset: 0x1c (28)
  ULONG EmInfFileSize;                                    // offset: 0x20 (32)
  VOID *TriageDumpBlock;                                  // offset: 0x24 (36)
  ULONG LoaderPagesSpanned;                               // offset: 0x28 (40)
  struct _HEADLESS_LOADER_BLOCK *HeadlessLoaderBlock;     // offset: 0x2c (44)
  struct _SMBIOS_TABLE_HEADER *SMBiosEPSHeader;           // offset: 0x30 (48)
  VOID *DrvDBImage;                                       // offset: 0x34 (52)
  ULONG DrvDBSize;                                        // offset: 0x38 (56)
  struct _NETWORK_LOADER_BLOCK *NetworkLoaderBlock;       // offset: 0x3c (60)
  UCHAR *HalpIRQLToTPR;                                   // offset: 0x40 (64)
  UCHAR *HalpVectorToIRQL;                                // offset: 0x44 (68)
  struct _LIST_ENTRY FirmwareDescriptorListHead;          // offset: 0x48 (72)
  VOID *AcpiTable;                                        // offset: 0x50 (80)
  ULONG AcpiTableSize;                                    // offset: 0x54 (84)
  ULONG BootViaWinload : 1;                               // offset: 0x58 (88)
  ULONG Reserved : 31;                                    // offset: 0x58 (88)
  struct _LOADER_PERFORMANCE_DATA *LoaderPerformanceData; // offset: 0x5c (92)
  struct _LIST_ENTRY BootApplicationPersistentData;       // offset: 0x60 (96)
  VOID *WmdTestResult;                                    // offset: 0x68 (104)
  struct _GUID BootIdentifier;                            // offset: 0x6c (108)
  ULONG ResumePages;                                      // offset: 0x7c (124)
  VOID *DumpHeader;                                       // offset: 0x80 (128)
};

// 0x7c (124) bytes
struct _LOADER_PARAMETER_BLOCK {
  struct _LIST_ENTRY LoadOrderListHead;                    // offset: 0x0 (0)
  struct _LIST_ENTRY MemoryDescriptorListHead;             // offset: 0x8 (8)
  struct _LIST_ENTRY BootDriverListHead;                   // offset: 0x10 (16)
  ULONG KernelStack;                                       // offset: 0x18 (24)
  ULONG Prcb;                                              // offset: 0x1c (28)
  ULONG Process;                                           // offset: 0x20 (32)
  ULONG Thread;                                            // offset: 0x24 (36)
  ULONG RegistryLength;                                    // offset: 0x28 (40)
  VOID *RegistryBase;                                      // offset: 0x2c (44)
  struct _CONFIGURATION_COMPONENT_DATA *ConfigurationRoot; // offset: 0x30 (48)
  CHAR *ArcBootDeviceName;                                 // offset: 0x34 (52)
  CHAR *ArcHalDeviceName;                                  // offset: 0x38 (56)
  CHAR *NtBootPathName;                                    // offset: 0x3c (60)
  CHAR *NtHalPathName;                                     // offset: 0x40 (64)
  CHAR *LoadOptions;                                       // offset: 0x44 (68)
  struct _NLS_DATA_BLOCK *NlsData;                         // offset: 0x48 (72)
  struct _ARC_DISK_INFORMATION *ArcDiskInformation;        // offset: 0x4c (76)
  VOID *OemFontFile;                                       // offset: 0x50 (80)
  struct _SETUP_LOADER_BLOCK *SetupLoaderBlock;            // offset: 0x54 (84)
  struct _LOADER_PARAMETER_EXTENSION *Extension;           // offset: 0x58 (88)
  union {
    struct _I386_LOADER_BLOCK I386;   // offset: 0x5c (92)
    struct _ALPHA_LOADER_BLOCK Alpha; // offset: 0x5c (92)
    struct _IA64_LOADER_BLOCK Ia64;   // offset: 0x5c (92)

  } u; // offset: 0x5c (92)
  struct _FIRMWARE_INFORMATION_LOADER_BLOCK
      FirmwareInformation; // offset: 0x68 (104)
};

// 0x10 (16) bytes
struct WHEA_PCIXDEVICE_REGISTER_PAIR {
  ULONGLONG Register; // offset: 0x0 (0)
  ULONGLONG Data;     // offset: 0x8 (8)
};

// 0x8 (8) bytes
union _WHEA_PCIXDEVICE_ERROR_VALIDBITS {
  ULONGLONG ErrorStatus : 1;       // offset: 0x0 (0)
  ULONGLONG IdInfo : 1;            // offset: 0x0 (0)
  ULONGLONG MemoryNumber : 1;      // offset: 0x0 (0)
  ULONGLONG IoNumber : 1;          // offset: 0x0 (0)
  ULONGLONG RegisterDataPairs : 1; // offset: 0x0 (0)
  ULONGLONG Reserved : 59;         // offset: 0x0 (0)
  ULONGLONG ValidBits;             // offset: 0x0 (0)
};

// 0x8 (8) bytes
union _WHEA_PCIXBUS_COMMAND {
  ULONGLONG Command : 56;    // offset: 0x0 (0)
  ULONGLONG PCIXCommand : 1; // offset: 0x0 (0)
  ULONGLONG Reserved : 7;    // offset: 0x0 (0)
  ULONGLONG AsULONGLONG;     // offset: 0x0 (0)
};

// 0x8 (8) bytes
union _WHEA_PCIXBUS_ERROR_VALIDBITS {
  ULONGLONG ErrorStatus : 1; // offset: 0x0 (0)
  ULONGLONG ErrorType : 1;   // offset: 0x0 (0)
  ULONGLONG BusId : 1;       // offset: 0x0 (0)
  ULONGLONG BusAddress : 1;  // offset: 0x0 (0)
  ULONGLONG BusData : 1;     // offset: 0x0 (0)
  ULONGLONG BusCommand : 1;  // offset: 0x0 (0)
  ULONGLONG RequesterId : 1; // offset: 0x0 (0)
  ULONGLONG CompleterId : 1; // offset: 0x0 (0)
  ULONGLONG TargetId : 1;    // offset: 0x0 (0)
  ULONGLONG Reserved : 55;   // offset: 0x0 (0)
  ULONGLONG ValidBits;       // offset: 0x0 (0)
};

// 0x8 (8) bytes
union _WHEA_PCIEXPRESS_ERROR_VALIDBITS {
  ULONGLONG PortType : 1;            // offset: 0x0 (0)
  ULONGLONG Version : 1;             // offset: 0x0 (0)
  ULONGLONG CommandStatus : 1;       // offset: 0x0 (0)
  ULONGLONG DeviceId : 1;            // offset: 0x0 (0)
  ULONGLONG DeviceSerialNumber : 1;  // offset: 0x0 (0)
  ULONGLONG BridgeControlStatus : 1; // offset: 0x0 (0)
  ULONGLONG ExpressCapability : 1;   // offset: 0x0 (0)
  ULONGLONG AerInfo : 1;             // offset: 0x0 (0)
  ULONGLONG Reserved : 56;           // offset: 0x0 (0)
  ULONGLONG ValidBits;               // offset: 0x0 (0)
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

// 0x68 (104) bytes
struct _WHEA_PCIXDEVICE_ERROR {
  union _WHEA_PCIXDEVICE_ERROR_VALIDBITS ValidBits; // offset: 0x0 (0)
  union _WHEA_ERROR_STATUS ErrorStatus;             // offset: 0x8 (8)
  struct _WHEA_PCIXDEVICE_ID IdInfo;                // offset: 0x10 (16)
  ULONG MemoryNumber;                               // offset: 0x20 (32)
  ULONG IoNumber;                                   // offset: 0x24 (36)
  struct WHEA_PCIXDEVICE_REGISTER_PAIR
      RegisterDataPairs[4]; // offset: 0x28 (40)
};

// 0x8 (8) bytes
union _WHEA_MEMORY_ERROR_VALIDBITS {
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

// 0x8 (8) bytes
union _WHEA_GENERIC_PROCESSOR_ERROR_VALIDBITS {
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

// 0x48 (72) bytes
struct _WHEA_PCIXBUS_ERROR {
  union _WHEA_PCIXBUS_ERROR_VALIDBITS ValidBits; // offset: 0x0 (0)
  union _WHEA_ERROR_STATUS ErrorStatus;          // offset: 0x8 (8)
  USHORT ErrorType;                              // offset: 0x10 (16)
  union _WHEA_PCIXBUS_ID BusId;                  // offset: 0x12 (18)
  ULONG Reserved;                                // offset: 0x14 (20)
  ULONGLONG BusAddress;                          // offset: 0x18 (24)
  ULONGLONG BusData;                             // offset: 0x20 (32)
  union _WHEA_PCIXBUS_COMMAND BusCommand;        // offset: 0x28 (40)
  ULONGLONG RequesterId;                         // offset: 0x30 (48)
  ULONGLONG CompleterId;                         // offset: 0x38 (56)
  ULONGLONG TargetId;                            // offset: 0x40 (64)
};

// 0xd0 (208) bytes
struct _WHEA_PCIEXPRESS_ERROR {
  union _WHEA_PCIEXPRESS_ERROR_VALIDBITS ValidBits;    // offset: 0x0 (0)
  enum WHEA_PCIEXPRESS_DEVICE_TYPE PortType;           // offset: 0x8 (8)
  union _WHEA_PCIEXPRESS_VERSION Version;              // offset: 0xc (12)
  union _WHEA_PCIEXPRESS_COMMAND_STATUS CommandStatus; // offset: 0x10 (16)
  ULONG Reserved;                                      // offset: 0x14 (20)
  struct _WHEA_PCIEXPRESS_DEVICE_ID DeviceId;          // offset: 0x18 (24)
  ULONGLONG DeviceSerialNumber;                        // offset: 0x28 (40)
  union _WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS
      BridgeControlStatus;     // offset: 0x30 (48)
  UCHAR ExpressCapability[60]; // offset: 0x34 (52)
  UCHAR AerInfo[96];           // offset: 0x70 (112)
};

// 0x49 (73) bytes
struct _WHEA_MEMORY_ERROR {
  union _WHEA_MEMORY_ERROR_VALIDBITS ValidBits; // offset: 0x0 (0)
  union _WHEA_ERROR_STATUS ErrorStatus;         // offset: 0x8 (8)
  ULONGLONG PhysicalAddress;                    // offset: 0x10 (16)
  ULONGLONG PhysicalAddressMask;                // offset: 0x18 (24)
  USHORT Node;                                  // offset: 0x20 (32)
  USHORT Card;                                  // offset: 0x22 (34)
  USHORT Module;                                // offset: 0x24 (36)
  USHORT Bank;                                  // offset: 0x26 (38)
  USHORT Device;                                // offset: 0x28 (40)
  USHORT Row;                                   // offset: 0x2a (42)
  USHORT Column;                                // offset: 0x2c (44)
  USHORT BitPosition;                           // offset: 0x2e (46)
  ULONGLONG RequesterId;                        // offset: 0x30 (48)
  ULONGLONG ResponderId;                        // offset: 0x38 (56)
  ULONGLONG TargetId;                           // offset: 0x40 (64)
  UCHAR ErrorType;                              // offset: 0x48 (72)
};

// 0xc0 (192) bytes
struct _WHEA_GENERIC_PROCESSOR_ERROR {
  union _WHEA_GENERIC_PROCESSOR_ERROR_VALIDBITS ValidBits; // offset: 0x0 (0)
  UCHAR ProcessorType;                                     // offset: 0x8 (8)
  UCHAR InstructionSet;                                    // offset: 0x9 (9)
  UCHAR ErrorType;                                         // offset: 0xa (10)
  UCHAR Operation;                                         // offset: 0xb (11)
  UCHAR Flags;                                             // offset: 0xc (12)
  UCHAR Level;                                             // offset: 0xd (13)
  USHORT Reserved;                                         // offset: 0xe (14)
  ULONGLONG CPUVersion;                                    // offset: 0x10 (16)
  UCHAR CPUBrandString[128];                               // offset: 0x18 (24)
  ULONGLONG ProcessorId;                                   // offset: 0x98 (152)
  ULONGLONG TargetAddress;                                 // offset: 0xa0 (160)
  ULONGLONG RequesterId;                                   // offset: 0xa8 (168)
  ULONGLONG ResponderId;                                   // offset: 0xb0 (176)
  ULONGLONG InstructionPointer;                            // offset: 0xb8 (184)
};

// 0x119 (281) bytes
struct _WHEA_ERROR_PACKET {
  ULONG Signature;                              // offset: 0x0 (0)
  union _WHEA_ERROR_PACKET_FLAGS Flags;         // offset: 0x4 (4)
  ULONG Size;                                   // offset: 0x8 (8)
  ULONG RawDataLength;                          // offset: 0xc (12)
  ULONGLONG Reserved1;                          // offset: 0x10 (16)
  ULONGLONG Context;                            // offset: 0x18 (24)
  enum _WHEA_ERROR_TYPE ErrorType;              // offset: 0x20 (32)
  enum _WHEA_ERROR_SEVERITY ErrorSeverity;      // offset: 0x24 (36)
  ULONG ErrorSourceId;                          // offset: 0x28 (40)
  enum _WHEA_ERROR_SOURCE_TYPE ErrorSourceType; // offset: 0x2c (44)
  ULONG Reserved2;                              // offset: 0x30 (48)
  ULONG Version;                                // offset: 0x34 (52)
  ULONGLONG Cpu;                                // offset: 0x38 (56)
  union {
    struct _WHEA_GENERIC_PROCESSOR_ERROR ProcessorError; // offset: 0x40 (64)
    struct _WHEA_MEMORY_ERROR MemoryError;               // offset: 0x40 (64)
    struct _WHEA_NMI_ERROR NmiError;                     // offset: 0x40 (64)
    struct _WHEA_PCIEXPRESS_ERROR PciExpressError;       // offset: 0x40 (64)
    struct _WHEA_PCIXBUS_ERROR PciXBusError;             // offset: 0x40 (64)
    struct _WHEA_PCIXDEVICE_ERROR PciXDeviceError;       // offset: 0x40 (64)

  } u;                                      // offset: 0x40 (64)
  enum _WHEA_RAW_DATA_FORMAT RawDataFormat; // offset: 0x110 (272)
  ULONG RawDataOffset;                      // offset: 0x114 (276)
  UCHAR RawData[1];                         // offset: 0x118 (280)
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
  ULONGLONG Reserved : 8;               // offset: 0x0 (0)
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
struct _EVENT_DESCRIPTOR {
  USHORT Id;         // offset: 0x0 (0)
  UCHAR Version;     // offset: 0x2 (2)
  UCHAR Channel;     // offset: 0x3 (3)
  UCHAR Level;       // offset: 0x4 (4)
  UCHAR Opcode;      // offset: 0x5 (5)
  USHORT Task;       // offset: 0x6 (6)
  ULONGLONG Keyword; // offset: 0x8 (8)
};

// 0x10 (16) bytes
struct _EVENT_DATA_DESCRIPTOR {
  ULONGLONG Ptr;  // offset: 0x0 (0)
  ULONG Size;     // offset: 0x8 (8)
  ULONG Reserved; // offset: 0xc (12)
};

// 0x128 (296) bytes
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
  struct _JOB_ACCESS_STATE *AccessState;          // offset: 0xb0 (176)
  ULONG UIRestrictionsClass;                      // offset: 0xb4 (180)
  ULONG EndOfJobTimeAction;                       // offset: 0xb8 (184)
  VOID *CompletionPort;                           // offset: 0xbc (188)
  VOID *CompletionKey;                            // offset: 0xc0 (192)
  ULONG SessionId;                                // offset: 0xc4 (196)
  ULONG SchedulingClass;                          // offset: 0xc8 (200)
  ULONGLONG ReadOperationCount;                   // offset: 0xd0 (208)
  ULONGLONG WriteOperationCount;                  // offset: 0xd8 (216)
  ULONGLONG OtherOperationCount;                  // offset: 0xe0 (224)
  ULONGLONG ReadTransferCount;                    // offset: 0xe8 (232)
  ULONGLONG WriteTransferCount;                   // offset: 0xf0 (240)
  ULONGLONG OtherTransferCount;                   // offset: 0xf8 (248)
  ULONG ProcessMemoryLimit;                       // offset: 0x100 (256)
  ULONG JobMemoryLimit;                           // offset: 0x104 (260)
  ULONG PeakProcessMemoryUsed;                    // offset: 0x108 (264)
  ULONG PeakJobMemoryUsed;                        // offset: 0x10c (268)
  ULONG CurrentJobMemoryUsed;                     // offset: 0x110 (272)
  struct _EX_PUSH_LOCK MemoryLimitsLock;          // offset: 0x114 (276)
  struct _LIST_ENTRY JobSetLinks;                 // offset: 0x118 (280)
  ULONG MemberLevel;                              // offset: 0x120 (288)
  ULONG JobFlags;                                 // offset: 0x124 (292)
};

// 0x28 (40) bytes
struct _PPM_PERF_STATE {
  ULONG Frequency;        // offset: 0x0 (0)
  ULONG Power;            // offset: 0x4 (4)
  UCHAR PercentFrequency; // offset: 0x8 (8)
  UCHAR IncreaseLevel;    // offset: 0x9 (9)
  UCHAR DecreaseLevel;    // offset: 0xa (10)
  UCHAR Type;             // offset: 0xb (11)
  ULONGLONG Control;      // offset: 0x10 (16)
  ULONGLONG Status;       // offset: 0x18 (24)
  ULONG TotalHitCount;    // offset: 0x20 (32)
  ULONG DesiredCount;     // offset: 0x24 (36)
};

// 0x78 (120) bytes
struct _PPM_PERF_STATES {
  ULONG Count;              // offset: 0x0 (0)
  ULONG MaxFrequency;       // offset: 0x4 (4)
  ULONG PStateCap;          // offset: 0x8 (8)
  ULONG TStateCap;          // offset: 0xc (12)
  ULONG MaxPerfState;       // offset: 0x10 (16)
  ULONG MinPerfState;       // offset: 0x14 (20)
  ULONG LowestPState;       // offset: 0x18 (24)
  ULONG IncreaseTime;       // offset: 0x1c (28)
  ULONG DecreaseTime;       // offset: 0x20 (32)
  UCHAR BusyAdjThreshold;   // offset: 0x24 (36)
  UCHAR Reserved;           // offset: 0x25 (37)
  UCHAR ThrottleStatesOnly; // offset: 0x26 (38)
  UCHAR PolicyType;         // offset: 0x27 (39)
  ULONG TimerInterval;      // offset: 0x28 (40)
  union {
    ULONG AsULONG;                // offset: 0x2c (44)
    ULONG UsingHypervisor : 1;    // offset: 0x2c (44)
    ULONG NoDomainAccounting : 1; // offset: 0x2c (44)
    ULONG IncreasePolicy : 2;     // offset: 0x2c (44)
    ULONG DecreasePolicy : 2;     // offset: 0x2c (44)
    ULONG Reserved : 26;          // offset: 0x2c (44)

  } Flags;                // offset: 0x2c (44)
  ULONG TargetProcessors; // offset: 0x30 (48)
  LONG (*PStateHandler)
  (ULONG arg1, ULONGLONG arg2, ULONGLONG arg3); // offset: 0x34 (52)
  ULONG PStateContext;                          // offset: 0x38 (56)
  LONG (*TStateHandler)
  (ULONG arg1, ULONGLONG arg2, ULONGLONG arg3); // offset: 0x3c (60)
  ULONG TStateContext;                          // offset: 0x40 (64)
  ULONG (*FeedbackHandler)(UCHAR arg1);         // offset: 0x44 (68)
  struct _PPM_DIA_STATS *DiaStats;              // offset: 0x48 (72)
  ULONG DiaStatsCount;                          // offset: 0x4c (76)
  struct _PPM_PERF_STATE State[1];              // offset: 0x50 (80)
};

// 0x30 (48) bytes
struct PPM_IDLE_STATE_ACCOUNTING {
  ULONG IdleTransitions;    // offset: 0x0 (0)
  ULONG FailedTransitions;  // offset: 0x4 (4)
  ULONG InvalidBucketIndex; // offset: 0x8 (8)
  ULONGLONG TotalTime;      // offset: 0x10 (16)
  ULONG IdleTimeBuckets[6]; // offset: 0x18 (24)
};

// 0x48 (72) bytes
struct PPM_IDLE_ACCOUNTING {
  ULONG StateCount;                          // offset: 0x0 (0)
  ULONG TotalTransitions;                    // offset: 0x4 (4)
  ULONG ResetCount;                          // offset: 0x8 (8)
  ULONGLONG StartTime;                       // offset: 0x10 (16)
  struct PPM_IDLE_STATE_ACCOUNTING State[1]; // offset: 0x18 (24)
};

// 0x5ec (1516) bytes
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
  WCHAR PdoDescriptionString[336];       // offset: 0xa8 (168)
  CHAR PdoSymbolicNameString[672];       // offset: 0x348 (840)
  WCHAR PdoAddressString[1];             // offset: 0x5e8 (1512)
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

// 0x280 (640) bytes
struct _WMI_LOGGER_CONTEXT {
  union _LARGE_INTEGER StartTime;               // offset: 0x0 (0)
  VOID *LogFileHandle;                          // offset: 0x8 (8)
  struct _ETHREAD *LoggerThread;                // offset: 0xc (12)
  LONG LoggerStatus;                            // offset: 0x10 (16)
  ULONG LoggerId;                               // offset: 0x14 (20)
  VOID *NBQHead;                                // offset: 0x18 (24)
  VOID *OverflowNBQHead;                        // offset: 0x1c (28)
  union _SLIST_HEADER QueueBlockFreeList;       // offset: 0x20 (32)
  union _SLIST_HEADER GlobalList;               // offset: 0x28 (40)
  struct _WMI_BUFFER_HEADER *BatchedBufferList; // offset: 0x30 (48)
  struct _UNICODE_STRING LoggerName;            // offset: 0x34 (52)
  struct _UNICODE_STRING LogFileName;           // offset: 0x3c (60)
  struct _UNICODE_STRING LogFilePattern;        // offset: 0x44 (68)
  struct _UNICODE_STRING NewLogFileName;        // offset: 0x4c (76)
  ULONG ClockType;                              // offset: 0x54 (84)
  LONG CollectionOn;                            // offset: 0x58 (88)
  ULONG MaximumFileSize;                        // offset: 0x5c (92)
  ULONG LoggerMode;                             // offset: 0x60 (96)
  ULONG LastFlushedBuffer;                      // offset: 0x64 (100)
  ULONG FlushTimer;                             // offset: 0x68 (104)
  ULONG FlushThreshold;                         // offset: 0x6c (108)
  union _LARGE_INTEGER ByteOffset;              // offset: 0x70 (112)
  union _LARGE_INTEGER FlushTimeStamp;          // offset: 0x78 (120)
  ULONG MinimumBuffers;                         // offset: 0x80 (128)
  volatile LONG BuffersAvailable;               // offset: 0x84 (132)
  volatile LONG NumberOfBuffers;                // offset: 0x88 (136)
  ULONG MaximumBuffers;                         // offset: 0x8c (140)
  volatile ULONG EventsLost;                    // offset: 0x90 (144)
  ULONG BuffersWritten;                         // offset: 0x94 (148)
  ULONG LogBuffersLost;                         // offset: 0x98 (152)
  ULONG RealTimeBuffersDelivered;               // offset: 0x9c (156)
  ULONG RealTimeBuffersLost;                    // offset: 0xa0 (160)
  ULONG BufferSize;                             // offset: 0xa4 (164)
  ULONG MaximumEventSize;                       // offset: 0xa8 (168)
  LONG *SequencePtr;                            // offset: 0xac (172)
  ULONG LocalSequence;                          // offset: 0xb0 (176)
  struct _GUID InstanceGuid;                    // offset: 0xb4 (180)
  LONGLONG (*GetCpuClock)();                    // offset: 0xc4 (196)
  LONG FileCounter;                             // offset: 0xc8 (200)
  VOID (*volatileBufferCallback)
  (struct _WMI_BUFFER_HEADER *arg1, VOID *arg2);         // offset: 0xcc (204)
  enum _POOL_TYPE PoolType;                              // offset: 0xd0 (208)
  struct _ETW_REF_CLOCK ReferenceTime;                   // offset: 0xd8 (216)
  UCHAR RealtimeLoggerContextFreed;                      // offset: 0xe8 (232)
  struct _LIST_ENTRY Consumers;                          // offset: 0xec (236)
  ULONG NumConsumers;                                    // offset: 0xf4 (244)
  struct _LIST_ENTRY Connecting;                         // offset: 0xf8 (248)
  UCHAR NewConsumer;                                     // offset: 0x100 (256)
  VOID *RealtimeLogfileHandle;                           // offset: 0x104 (260)
  struct _UNICODE_STRING RealtimeLogfileName;            // offset: 0x108 (264)
  union _LARGE_INTEGER RealtimeWriteOffset;              // offset: 0x110 (272)
  union _LARGE_INTEGER RealtimeReadOffset;               // offset: 0x118 (280)
  union _LARGE_INTEGER RealtimeLogfileSize;              // offset: 0x120 (288)
  ULONGLONG RealtimeLogfileUsage;                        // offset: 0x128 (296)
  ULONGLONG RealtimeMaximumFileSize;                     // offset: 0x130 (304)
  ULONG RealtimeBuffersSaved;                            // offset: 0x138 (312)
  struct _ETW_REF_CLOCK RealtimeReferenceTime;           // offset: 0x140 (320)
  ULONG RealtimeDisconnectProcessId;                     // offset: 0x150 (336)
  ULONG RealtimeDisconnectConsumerId;                    // offset: 0x154 (340)
  enum _ETW_RT_EVENT_LOSS NewRTEventsLost;               // offset: 0x158 (344)
  struct _KEVENT LoggerEvent;                            // offset: 0x15c (348)
  struct _KEVENT FlushEvent;                             // offset: 0x16c (364)
  struct _KDPC FlushDpc;                                 // offset: 0x17c (380)
  struct _KMUTANT LoggerMutex;                           // offset: 0x19c (412)
  struct _EX_PUSH_LOCK LoggerLock;                       // offset: 0x1bc (444)
  struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext; // offset: 0x1c0 (448)
  struct _EX_FAST_REF SecurityDescriptor;                // offset: 0x1fc (508)
  struct _WMI_BUFFER_HEADER DummyBufferForMarker;        // offset: 0x200 (512)
  LONGLONG BufferSequenceNumber;                         // offset: 0x248 (584)
  LONG AcceptNewEvents;                                  // offset: 0x250 (592)
  union {
    ULONG Flags; // offset: 0x254 (596)
    struct {
      ULONG Persistent : 1;   // offset: 0x254 (596)
      ULONG AutoLogger : 1;   // offset: 0x254 (596)
      ULONG FsReady : 1;      // offset: 0x254 (596)
      ULONG RealTime : 1;     // offset: 0x254 (596)
      ULONG Wow : 1;          // offset: 0x254 (596)
      ULONG KernelTrace : 1;  // offset: 0x254 (596)
      ULONG NoMoreEnable : 1; // offset: 0x254 (596)
    };
  };
  union {
    ULONG RequestFlag; // offset: 0x258 (600)
    struct {
      ULONG RequestNewFie : 1;             // offset: 0x258 (600)
      ULONG RequestUpdateFile : 1;         // offset: 0x258 (600)
      ULONG RequestFlush : 1;              // offset: 0x258 (600)
      ULONG RequestDisableRealtime : 1;    // offset: 0x258 (600)
      ULONG RequestDisconnectConsumer : 1; // offset: 0x258 (600)
    };
  };
  USHORT StackTraceFilterHookCount; // offset: 0x25c (604)
  USHORT StackTraceFilter[16];      // offset: 0x25e (606)
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

// 0x8 (8) bytes
struct _PP_LOOKASIDE_LIST {
  struct _GENERAL_LOOKASIDE *P; // offset: 0x0 (0)
  struct _GENERAL_LOOKASIDE *L; // offset: 0x4 (4)
};

// 0x18 (24) bytes
struct _CACHED_KSTACK_LIST {
  union _SLIST_HEADER SListHead; // offset: 0x0 (0)
  LONG MinimumFree;              // offset: 0x8 (8)
  ULONG Misses;                  // offset: 0xc (12)
  ULONG MissesLast;              // offset: 0x10 (16)
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

// 0x80 (128) bytes
struct _KNODE {
  union _SLIST_HEADER PagedPoolSListHead;              // offset: 0x0 (0)
  union _SLIST_HEADER NonPagedPoolSListHead[3];        // offset: 0x8 (8)
  union _SLIST_HEADER PfnDereferenceSListHead;         // offset: 0x20 (32)
  ULONG ProcessorMask;                                 // offset: 0x28 (40)
  UCHAR Color;                                         // offset: 0x2c (44)
  UCHAR Seed;                                          // offset: 0x2d (45)
  UCHAR NodeNumber;                                    // offset: 0x2e (46)
  struct _flags Flags;                                 // offset: 0x2f (47)
  ULONG MmShiftedColor;                                // offset: 0x30 (48)
  ULONG FreeCount[2];                                  // offset: 0x34 (52)
  struct _SINGLE_LIST_ENTRY *volatile PfnDeferredList; // offset: 0x3c (60)
  struct _CACHED_KSTACK_LIST CachedKernelStacks;       // offset: 0x40 (64)
};

// 0x3b8 (952) bytes
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
  union {
    ULONG SharedDataFlags; // offset: 0x2f0 (752)
    struct {
      ULONG DbgErrorPortPresent : 1;       // offset: 0x2f0 (752)
      ULONG DbgElevationEnabled : 1;       // offset: 0x2f0 (752)
      ULONG DbgVirtEnabled : 1;            // offset: 0x2f0 (752)
      ULONG DbgInstallerDetectEnabled : 1; // offset: 0x2f0 (752)
      ULONG DbgSystemDllRelocated : 1;     // offset: 0x2f0 (752)
      ULONG DbgDynProcessorEnabled : 1;    // offset: 0x2f0 (752)
      ULONG DbgSEHValidationEnabled : 1;   // offset: 0x2f0 (752)
      ULONG SpareBits : 25;                // offset: 0x2f0 (752)
    };
  };
  ULONGLONG TestRetInstruction; // offset: 0x2f8 (760)
  ULONG SystemCall;             // offset: 0x300 (768)
  ULONG SystemCallReturn;       // offset: 0x304 (772)
  ULONGLONG SystemCallPad[3];   // offset: 0x308 (776)
  union {
    volatile struct _KSYSTEM_TIME TickCount; // offset: 0x320 (800)
    volatile ULONGLONG TickCountQuad;        // offset: 0x320 (800)
  };
  ULONG Cookie;                               // offset: 0x330 (816)
  LONGLONG ConsoleSessionForegroundProcessId; // offset: 0x338 (824)
  ULONG Wow64SharedInformation[16];           // offset: 0x340 (832)
  USHORT UserModeGlobalLogger[8];             // offset: 0x380 (896)
  ULONG HeapTracingPid[2];                    // offset: 0x390 (912)
  ULONG CritSecTracingPid[2];                 // offset: 0x398 (920)
  ULONG ImageFileExecutionOptions;            // offset: 0x3a0 (928)
  ULONG LangGenerationCount;                  // offset: 0x3a4 (932)
  union {
    ULONGLONG AffinityPad;         // offset: 0x3a8 (936)
    ULONG ActiveProcessorAffinity; // offset: 0x3a8 (936)
  };
  volatile ULONGLONG InterruptTimeBias; // offset: 0x3b0 (944)
};

// 0x10 (16) bytes
struct _KTIMER_TABLE_ENTRY {
  struct _LIST_ENTRY Entry;   // offset: 0x0 (0)
  union _ULARGE_INTEGER Time; // offset: 0x8 (8)
};

// 0x238 (568) bytes
struct _PEB {
  UCHAR InheritedAddressSpace;    // offset: 0x0 (0)
  UCHAR ReadImageFileExecOptions; // offset: 0x1 (1)
  UCHAR BeingDebugged;            // offset: 0x2 (2)
  union {
    UCHAR BitField; // offset: 0x3 (3)
    struct {
      UCHAR ImageUsesLargePages : 1;          // offset: 0x3 (3)
      UCHAR IsProtectedProcess : 1;           // offset: 0x3 (3)
      UCHAR IsLegacyProcess : 1;              // offset: 0x3 (3)
      UCHAR IsImageDynamicallyRelocated : 1;  // offset: 0x3 (3)
      UCHAR SkipPatchingUser32Forwarders : 1; // offset: 0x3 (3)
      UCHAR SpareBits : 3;                    // offset: 0x3 (3)
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
      ULONG ReservedBits0 : 28;      // offset: 0x28 (40)
    };
  };
  union {
    VOID *KernelCallbackTable; // offset: 0x2c (44)
    VOID *UserSharedInfoPtr;   // offset: 0x2c (44)
  };
  ULONG SystemReserved[1];                                // offset: 0x30 (48)
  ULONG SpareUlong;                                       // offset: 0x34 (52)
  ULONG SparePebPtr0;                                     // offset: 0x38 (56)
  ULONG TlsExpansionCounter;                              // offset: 0x3c (60)
  VOID *TlsBitmap;                                        // offset: 0x40 (64)
  ULONG TlsBitmapBits[2];                                 // offset: 0x44 (68)
  VOID *ReadOnlySharedMemoryBase;                         // offset: 0x4c (76)
  VOID *HotpatchInformation;                              // offset: 0x50 (80)
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
};

// 0xff8 (4088) bytes
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
  UCHAR SpareBytes1[36];                      // offset: 0x1ac (428)
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
  VOID *EtwLocalData;                         // offset: 0xf64 (3940)
  VOID *EtwTraceData;                         // offset: 0xf68 (3944)
  VOID *WinSockData;                          // offset: 0xf6c (3948)
  ULONG GdiBatchCount;                        // offset: 0xf70 (3952)
  UCHAR SpareBool0;                           // offset: 0xf74 (3956)
  UCHAR SpareBool1;                           // offset: 0xf75 (3957)
  UCHAR SpareBool2;                           // offset: 0xf76 (3958)
  UCHAR IdealProcessor;                       // offset: 0xf77 (3959)
  ULONG GuaranteedStackBytes;                 // offset: 0xf78 (3960)
  VOID *ReservedForPerf;                      // offset: 0xf7c (3964)
  VOID *ReservedForOle;                       // offset: 0xf80 (3968)
  ULONG WaitingOnLoaderLock;                  // offset: 0xf84 (3972)
  VOID *SavedPriorityState;                   // offset: 0xf88 (3976)
  ULONG SoftPatchPtr1;                        // offset: 0xf8c (3980)
  VOID *ThreadPoolData;                       // offset: 0xf90 (3984)
  VOID **TlsExpansionSlots;                   // offset: 0xf94 (3988)
  ULONG ImpersonationLocale;                  // offset: 0xf98 (3992)
  ULONG IsImpersonating;                      // offset: 0xf9c (3996)
  VOID *NlsCache;                             // offset: 0xfa0 (4000)
  VOID *pShimData;                            // offset: 0xfa4 (4004)
  ULONG HeapVirtualAffinity;                  // offset: 0xfa8 (4008)
  VOID *CurrentTransactionHandle;             // offset: 0xfac (4012)
  struct _TEB_ACTIVE_FRAME *ActiveFrame;      // offset: 0xfb0 (4016)
  VOID *FlsData;                              // offset: 0xfb4 (4020)
  VOID *PreferredLanguages;                   // offset: 0xfb8 (4024)
  VOID *UserPrefLanguages;                    // offset: 0xfbc (4028)
  VOID *MergedPrefLanguages;                  // offset: 0xfc0 (4032)
  ULONG MuiImpersonation;                     // offset: 0xfc4 (4036)
  union {
    volatile USHORT CrossTebFlags; // offset: 0xfc8 (4040)
    USHORT SpareCrossTebBits : 16; // offset: 0xfc8 (4040)
  };
  union {
    USHORT SameTebFlags; // offset: 0xfca (4042)
    struct {
      USHORT DbgSafeThunkCall : 1;        // offset: 0xfca (4042)
      USHORT DbgInDebugPrint : 1;         // offset: 0xfca (4042)
      USHORT DbgHasFiberData : 1;         // offset: 0xfca (4042)
      USHORT DbgSkipThreadAttach : 1;     // offset: 0xfca (4042)
      USHORT DbgWerInShipAssertCode : 1;  // offset: 0xfca (4042)
      USHORT DbgRanProcessInit : 1;       // offset: 0xfca (4042)
      USHORT DbgClonedThread : 1;         // offset: 0xfca (4042)
      USHORT DbgSuppressDebugMsg : 1;     // offset: 0xfca (4042)
      USHORT RtlDisableUserStackWalk : 1; // offset: 0xfca (4042)
      USHORT RtlExceptionAttached : 1;    // offset: 0xfca (4042)
      USHORT SpareSameTebBits : 6;        // offset: 0xfca (4042)
    };
  };
  VOID *TxnScopeEnterCallback;           // offset: 0xfcc (4044)
  VOID *TxnScopeExitCallback;            // offset: 0xfd0 (4048)
  VOID *TxnScopeContext;                 // offset: 0xfd4 (4052)
  ULONG LockCount;                       // offset: 0xfd8 (4056)
  ULONG ProcessRundown;                  // offset: 0xfdc (4060)
  ULONGLONG LastSwitchTime;              // offset: 0xfe0 (4064)
  ULONGLONG TotalSwitchOutTime;          // offset: 0xfe8 (4072)
  union _LARGE_INTEGER WaitReasonBitMap; // offset: 0xff0 (4080)
};

// 0x270 (624) bytes
struct _EPROCESS {
  struct _KPROCESS Pcb;                   // offset: 0x0 (0)
  struct _EX_PUSH_LOCK ProcessLock;       // offset: 0x80 (128)
  union _LARGE_INTEGER CreateTime;        // offset: 0x88 (136)
  union _LARGE_INTEGER ExitTime;          // offset: 0x90 (144)
  struct _EX_RUNDOWN_REF RundownProtect;  // offset: 0x98 (152)
  VOID *UniqueProcessId;                  // offset: 0x9c (156)
  struct _LIST_ENTRY ActiveProcessLinks;  // offset: 0xa0 (160)
  ULONG QuotaUsage[3];                    // offset: 0xa8 (168)
  ULONG QuotaPeak[3];                     // offset: 0xb4 (180)
  volatile ULONG CommitCharge;            // offset: 0xc0 (192)
  ULONG PeakVirtualSize;                  // offset: 0xc4 (196)
  ULONG VirtualSize;                      // offset: 0xc8 (200)
  struct _LIST_ENTRY SessionProcessLinks; // offset: 0xcc (204)
  VOID *DebugPort;                        // offset: 0xd4 (212)
  union {
    VOID *ExceptionPortData;      // offset: 0xd8 (216)
    ULONG ExceptionPortValue;     // offset: 0xd8 (216)
    ULONG ExceptionPortState : 3; // offset: 0xd8 (216)
  };
  struct _HANDLE_TABLE *ObjectTable;          // offset: 0xdc (220)
  struct _EX_FAST_REF Token;                  // offset: 0xe0 (224)
  ULONG WorkingSetPage;                       // offset: 0xe4 (228)
  struct _EX_PUSH_LOCK AddressCreationLock;   // offset: 0xe8 (232)
  struct _ETHREAD *RotateInProgress;          // offset: 0xec (236)
  struct _ETHREAD *ForkInProgress;            // offset: 0xf0 (240)
  ULONG HardwareTrigger;                      // offset: 0xf4 (244)
  struct _MM_AVL_TABLE *PhysicalVadRoot;      // offset: 0xf8 (248)
  VOID *CloneRoot;                            // offset: 0xfc (252)
  volatile ULONG NumberOfPrivatePages;        // offset: 0x100 (256)
  volatile ULONG NumberOfLockedPages;         // offset: 0x104 (260)
  VOID *Win32Process;                         // offset: 0x108 (264)
  struct _EJOB *Job;                          // offset: 0x10c (268)
  VOID *SectionObject;                        // offset: 0x110 (272)
  VOID *SectionBaseAddress;                   // offset: 0x114 (276)
  struct _EPROCESS_QUOTA_BLOCK *QuotaBlock;   // offset: 0x118 (280)
  struct _PAGEFAULT_HISTORY *WorkingSetWatch; // offset: 0x11c (284)
  VOID *Win32WindowStation;                   // offset: 0x120 (288)
  VOID *InheritedFromUniqueProcessId;         // offset: 0x124 (292)
  VOID *LdtInformation;                       // offset: 0x128 (296)
  VOID *Spare;                                // offset: 0x12c (300)
  VOID *VdmObjects;                           // offset: 0x130 (304)
  VOID *DeviceMap;                            // offset: 0x134 (308)
  VOID *EtwDataSource;                        // offset: 0x138 (312)
  VOID *FreeTebHint;                          // offset: 0x13c (316)
  union {
    struct _HARDWARE_PTE PageDirectoryPte; // offset: 0x140 (320)
    ULONGLONG Filler;                      // offset: 0x140 (320)
  };
  VOID *Session;                            // offset: 0x148 (328)
  UCHAR ImageFileName[16];                  // offset: 0x14c (332)
  struct _LIST_ENTRY JobLinks;              // offset: 0x15c (348)
  VOID *LockedPagesList;                    // offset: 0x164 (356)
  struct _LIST_ENTRY ThreadListHead;        // offset: 0x168 (360)
  VOID *SecurityPort;                       // offset: 0x170 (368)
  VOID *PaeTop;                             // offset: 0x174 (372)
  volatile ULONG ActiveThreads;             // offset: 0x178 (376)
  ULONG ImagePathHash;                      // offset: 0x17c (380)
  ULONG DefaultHardErrorProcessing;         // offset: 0x180 (384)
  LONG LastThreadExitStatus;                // offset: 0x184 (388)
  struct _PEB *Peb;                         // offset: 0x188 (392)
  struct _EX_FAST_REF PrefetchTrace;        // offset: 0x18c (396)
  union _LARGE_INTEGER ReadOperationCount;  // offset: 0x190 (400)
  union _LARGE_INTEGER WriteOperationCount; // offset: 0x198 (408)
  union _LARGE_INTEGER OtherOperationCount; // offset: 0x1a0 (416)
  union _LARGE_INTEGER ReadTransferCount;   // offset: 0x1a8 (424)
  union _LARGE_INTEGER WriteTransferCount;  // offset: 0x1b0 (432)
  union _LARGE_INTEGER OtherTransferCount;  // offset: 0x1b8 (440)
  ULONG CommitChargeLimit;                  // offset: 0x1c0 (448)
  volatile ULONG CommitChargePeak;          // offset: 0x1c4 (452)
  VOID *AweInfo;                            // offset: 0x1c8 (456)
  struct _SE_AUDIT_PROCESS_CREATION_INFO
      SeAuditProcessCreationInfo;    // offset: 0x1cc (460)
  struct _MMSUPPORT Vm;              // offset: 0x1d0 (464)
  struct _LIST_ENTRY MmProcessLinks; // offset: 0x218 (536)
  ULONG ModifiedPageCount;           // offset: 0x220 (544)
  union {
    ULONG Flags2; // offset: 0x224 (548)
    struct {
      ULONG JobNotReallyActive : 1;         // offset: 0x224 (548)
      ULONG AccountingFolded : 1;           // offset: 0x224 (548)
      ULONG NewProcessReported : 1;         // offset: 0x224 (548)
      ULONG ExitProcessReported : 1;        // offset: 0x224 (548)
      ULONG ReportCommitChanges : 1;        // offset: 0x224 (548)
      ULONG LastReportMemory : 1;           // offset: 0x224 (548)
      ULONG ReportPhysicalPageChanges : 1;  // offset: 0x224 (548)
      ULONG HandleTableRundown : 1;         // offset: 0x224 (548)
      ULONG NeedsHandleRundown : 1;         // offset: 0x224 (548)
      ULONG RefTraceEnabled : 1;            // offset: 0x224 (548)
      ULONG NumaAware : 1;                  // offset: 0x224 (548)
      ULONG ProtectedProcess : 1;           // offset: 0x224 (548)
      ULONG DefaultPagePriority : 3;        // offset: 0x224 (548)
      ULONG PrimaryTokenFrozen : 1;         // offset: 0x224 (548)
      ULONG ProcessVerifierTarget : 1;      // offset: 0x224 (548)
      ULONG StackRandomizationDisabled : 1; // offset: 0x224 (548)
      ULONG AffinityPermanent : 1;          // offset: 0x224 (548)
      ULONG AffinityUpdateEnable : 1;       // offset: 0x224 (548)
      ULONG CrossSessionCreate : 1;         // offset: 0x224 (548)
    };
  };
  union {
    ULONG Flags; // offset: 0x228 (552)
    struct {
      ULONG CreateReported : 1;          // offset: 0x228 (552)
      ULONG NoDebugInherit : 1;          // offset: 0x228 (552)
      ULONG ProcessExiting : 1;          // offset: 0x228 (552)
      ULONG ProcessDelete : 1;           // offset: 0x228 (552)
      ULONG Wow64SplitPages : 1;         // offset: 0x228 (552)
      ULONG VmDeleted : 1;               // offset: 0x228 (552)
      ULONG OutswapEnabled : 1;          // offset: 0x228 (552)
      ULONG Outswapped : 1;              // offset: 0x228 (552)
      ULONG ForkFailed : 1;              // offset: 0x228 (552)
      ULONG Wow64VaSpace4Gb : 1;         // offset: 0x228 (552)
      ULONG AddressSpaceInitialized : 2; // offset: 0x228 (552)
      ULONG SetTimerResolution : 1;      // offset: 0x228 (552)
      ULONG BreakOnTermination : 1;      // offset: 0x228 (552)
      ULONG DeprioritizeViews : 1;       // offset: 0x228 (552)
      ULONG WriteWatch : 1;              // offset: 0x228 (552)
      ULONG ProcessInSession : 1;        // offset: 0x228 (552)
      ULONG OverrideAddressSpace : 1;    // offset: 0x228 (552)
      ULONG HasAddressSpace : 1;         // offset: 0x228 (552)
      ULONG LaunchPrefetched : 1;        // offset: 0x228 (552)
      ULONG InjectInpageErrors : 1;      // offset: 0x228 (552)
      ULONG VmTopDown : 1;               // offset: 0x228 (552)
      ULONG ImageNotifyDone : 1;         // offset: 0x228 (552)
      ULONG PdeUpdateNeeded : 1;         // offset: 0x228 (552)
      ULONG VdmAllowed : 1;              // offset: 0x228 (552)
      ULONG SmapAllowed : 1;             // offset: 0x228 (552)
      ULONG ProcessInserted : 1;         // offset: 0x228 (552)
      ULONG DefaultIoPriority : 3;       // offset: 0x228 (552)
      ULONG ProcessSelfDelete : 1;       // offset: 0x228 (552)
      ULONG SpareProcessFlags : 1;       // offset: 0x228 (552)
    };
  };
  LONG ExitStatus; // offset: 0x22c (556)
  USHORT Spare7;   // offset: 0x230 (560)
  union {
    struct {
      UCHAR SubSystemMinorVersion; // offset: 0x232 (562)
      UCHAR SubSystemMajorVersion; // offset: 0x233 (563)
    };
    USHORT SubSystemVersion; // offset: 0x232 (562)
  };
  UCHAR PriorityClass;                      // offset: 0x234 (564)
  struct _MM_AVL_TABLE VadRoot;             // offset: 0x238 (568)
  ULONG Cookie;                             // offset: 0x258 (600)
  struct _ALPC_PROCESS_CONTEXT AlpcContext; // offset: 0x25c (604)
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

// 0x2c (44) bytes
struct _ETW_REG_ENTRY {
  struct _LIST_ENTRY RegList;        // offset: 0x0 (0)
  struct _ETW_GUID_ENTRY *GuidEntry; // offset: 0x8 (8)
  USHORT Index;                      // offset: 0xc (12)
  USHORT Flags;                      // offset: 0xe (14)
  UCHAR EnableMask;                  // offset: 0x10 (16)
  union {
    struct _ETW_REPLY_QUEUE *ReplyQueue; // offset: 0x14 (20)
    struct _ETW_REG_ENTRY *ReplySlot[4]; // offset: 0x14 (20)
  };
  union {
    struct _EPROCESS *Process; // offset: 0x24 (36)
    VOID *Callback;            // offset: 0x24 (36)
  };
  VOID *CallbackContext; // offset: 0x28 (40)
};

// 0x10 (16) bytes
struct _ETW_PROVIDER_TABLE_ENTRY {
  LONG RefCount;                   // offset: 0x0 (0)
  enum _ETW_PROVIDER_STATE State;  // offset: 0x4 (4)
  struct _ETW_REG_ENTRY *RegEntry; // offset: 0x8 (8)
  VOID *Caller;                    // offset: 0xc (12)
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

// 0x54 (84) bytes
struct _ALPC_COMPLETION_LIST {
  struct _LIST_ENTRY Entry;                    // offset: 0x0 (0)
  struct _EPROCESS *OwnerProcess;              // offset: 0x8 (8)
  struct _MDL *Mdl;                            // offset: 0xc (12)
  VOID *UserVa;                                // offset: 0x10 (16)
  VOID *UserLimit;                             // offset: 0x14 (20)
  VOID *DataUserVa;                            // offset: 0x18 (24)
  VOID *SystemVa;                              // offset: 0x1c (28)
  ULONG TotalSize;                             // offset: 0x20 (32)
  struct _ALPC_COMPLETION_LIST_HEADER *Header; // offset: 0x24 (36)
  VOID *List;                                  // offset: 0x28 (40)
  ULONG ListSize;                              // offset: 0x2c (44)
  VOID *Bitmap;                                // offset: 0x30 (48)
  ULONG BitmapSize;                            // offset: 0x34 (52)
  VOID *Data;                                  // offset: 0x38 (56)
  ULONG DataSize;                              // offset: 0x3c (60)
  ULONG BitmapLimit;                           // offset: 0x40 (64)
  ULONG BitmapNextHint;                        // offset: 0x44 (68)
  ULONG ConcurrencyCount;                      // offset: 0x48 (72)
  ULONG AttributeFlags;                        // offset: 0x4c (76)
  ULONG AttributeSize;                         // offset: 0x50 (80)
};

// 0x28 (40) bytes
struct _KALPC_SECTION {
  union {
    struct {
      ULONG Internal : 1; // offset: 0x0 (0)
      ULONG Secure : 1;   // offset: 0x0 (0)
    } s1;                 // offset: 0x0 (0)

  } u1;                                   // offset: 0x0 (0)
  VOID *SectionObject;                    // offset: 0x4 (4)
  ULONG Size;                             // offset: 0x8 (8)
  struct _ALPC_HANDLE_TABLE *HandleTable; // offset: 0xc (12)
  VOID *SectionHandle;                    // offset: 0x10 (16)
  struct _EPROCESS *OwnerProcess;         // offset: 0x14 (20)
  struct _ALPC_PORT *OwnerPort;           // offset: 0x18 (24)
  ULONG NumberOfRegions;                  // offset: 0x1c (28)
  struct _LIST_ENTRY RegionListHead;      // offset: 0x20 (32)
};

// 0x30 (48) bytes
struct _KALPC_REGION {
  union {
    struct {
      ULONG Secure : 1; // offset: 0x0 (0)
    } s1;               // offset: 0x0 (0)

  } u1;                               // offset: 0x0 (0)
  struct _LIST_ENTRY RegionListEntry; // offset: 0x4 (4)
  struct _KALPC_SECTION *Section;     // offset: 0xc (12)
  ULONG Offset;                       // offset: 0x10 (16)
  ULONG Size;                         // offset: 0x14 (20)
  ULONG ViewSize;                     // offset: 0x18 (24)
  struct _KALPC_VIEW *ReadOnlyView;   // offset: 0x1c (28)
  struct _KALPC_VIEW *ReadWriteView;  // offset: 0x20 (32)
  ULONG NumberOfViews;                // offset: 0x24 (36)
  struct _LIST_ENTRY ViewListHead;    // offset: 0x28 (40)
};

// 0x34 (52) bytes
struct _KALPC_VIEW {
  struct _LIST_ENTRY ViewListEntry; // offset: 0x0 (0)
  union {
    struct {
      ULONG WriteAccess : 1; // offset: 0x0 (0)
      ULONG AutoRelease : 1; // offset: 0x0 (0)
      ULONG ForceUnlink : 1; // offset: 0x0 (0)
    } s1;                    // offset: 0x8 (8)

  } u1;                                    // offset: 0x8 (8)
  struct _KALPC_REGION *Region;            // offset: 0xc (12)
  struct _ALPC_PORT *OwnerPort;            // offset: 0x10 (16)
  struct _EPROCESS *OwnerProcess;          // offset: 0x14 (20)
  VOID *Address;                           // offset: 0x18 (24)
  ULONG Size;                              // offset: 0x1c (28)
  VOID *SecureViewHandle;                  // offset: 0x20 (32)
  VOID *WriteAccessHandle;                 // offset: 0x24 (36)
  ULONG NumberOfOwnerMessages;             // offset: 0x28 (40)
  struct _LIST_ENTRY ProcessViewListEntry; // offset: 0x2c (44)
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

// 0x228 (552) bytes
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
  struct _MMPTE ThePtes[1];    // offset: 0x2c (44)
};

// 0x48 (72) bytes
struct _CONTROL_AREA {
  struct _SEGMENT *Segment;           // offset: 0x0 (0)
  struct _LIST_ENTRY DereferenceList; // offset: 0x4 (4)
  ULONG NumberOfSectionReferences;    // offset: 0xc (12)
  ULONG NumberOfPfnReferences;        // offset: 0x10 (16)
  ULONG NumberOfMappedViews;          // offset: 0x14 (20)
  ULONG NumberOfUserReferences;       // offset: 0x18 (24)
  union {
    ULONG LongFlags;               // offset: 0x1c (28)
    struct _MMSECTION_FLAGS Flags; // offset: 0x1c (28)

  } u; // offset: 0x1c (28)
  union {
    struct {
      USHORT ModifiedWriteCount;   // offset: 0x0 (0)
      USHORT FlushInProgressCount; // offset: 0x2 (2)
    } e2;                          // offset: 0x20 (32)

  } u1;                                                 // offset: 0x20 (32)
  struct _EX_FAST_REF FilePointer;                      // offset: 0x24 (36)
  volatile LONG ControlAreaLock;                        // offset: 0x28 (40)
  ULONG StartingFrame;                                  // offset: 0x2c (44)
  struct _MI_SECTION_CREATION_GATE *WaitingForDeletion; // offset: 0x30 (48)
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
          ULONG Unused : 14;                   // offset: 0x4 (4)
          ULONG BitMap64 : 1;                  // offset: 0x4 (4)
          ULONG ImageActive : 1;               // offset: 0x4 (4)
        };
      };
      union {
        struct _MM_SUBSECTION_AVL_TABLE *SubsectionRoot;  // offset: 0x8 (8)
        struct _MI_IMAGE_SECURITY_REFERENCE *SeImageStub; // offset: 0x8 (8)
      };
    } e2; // offset: 0x34 (52)

  } u2;                          // offset: 0x34 (52)
  volatile LONGLONG LockedPages; // offset: 0x40 (64)
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

// 0x10 (16) bytes
struct _OBJECT_HEADER_QUOTA_INFO {
  ULONG PagedPoolCharge;              // offset: 0x0 (0)
  ULONG NonPagedPoolCharge;           // offset: 0x4 (4)
  ULONG SecurityDescriptorCharge;     // offset: 0x8 (8)
  struct _EPROCESS *ExclusiveProcess; // offset: 0xc (12)
};

// 0x50 (80) bytes
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
  (struct _EPROCESS *arg1, VOID *arg2, ULONG arg3, ULONG arg4,
   ULONG arg5);                        // offset: 0x38 (56)
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
   CHAR arg4); // offset: 0x4c (76)
};

// 0x140 (320) bytes
struct _OBJECT_TYPE {
  struct _LIST_ENTRY TypeList;              // offset: 0x0 (0)
  struct _UNICODE_STRING Name;              // offset: 0x8 (8)
  VOID *DefaultObject;                      // offset: 0x10 (16)
  ULONG Index;                              // offset: 0x14 (20)
  ULONG TotalNumberOfObjects;               // offset: 0x18 (24)
  ULONG TotalNumberOfHandles;               // offset: 0x1c (28)
  ULONG HighWaterNumberOfObjects;           // offset: 0x20 (32)
  ULONG HighWaterNumberOfHandles;           // offset: 0x24 (36)
  struct _OBJECT_TYPE_INITIALIZER TypeInfo; // offset: 0x28 (40)
  struct _ERESOURCE Mutex;                  // offset: 0x78 (120)
  struct _EX_PUSH_LOCK TypeLock;            // offset: 0xb0 (176)
  ULONG Key;                                // offset: 0xb4 (180)
  struct _EX_PUSH_LOCK ObjectLocks[32];     // offset: 0xb8 (184)
  struct _LIST_ENTRY CallbackList;          // offset: 0x138 (312)
};

// 0x1c (28) bytes
struct _OB_DUPLICATE_OBJECT_STATE {
  struct _EPROCESS *SourceProcess;            // offset: 0x0 (0)
  VOID *SourceHandle;                         // offset: 0x4 (4)
  VOID *Object;                               // offset: 0x8 (8)
  struct _OBJECT_TYPE *ObjectType;            // offset: 0xc (12)
  ULONG TargetAccess;                         // offset: 0x10 (16)
  struct _HANDLE_TABLE_ENTRY_INFO ObjectInfo; // offset: 0x14 (20)
  ULONG HandleAttributes;                     // offset: 0x18 (24)
};

// 0xc (12) bytes
struct _KALPC_HANDLE_DATA {
  ULONG Flags;                                         // offset: 0x0 (0)
  ULONG ObjectType;                                    // offset: 0x4 (4)
  struct _OB_DUPLICATE_OBJECT_STATE *DuplicateContext; // offset: 0x8 (8)
};

// 0x1c (28) bytes
struct _KALPC_MESSAGE_ATTRIBUTES {
  VOID *ClientContext;                       // offset: 0x0 (0)
  VOID *ServerContext;                       // offset: 0x4 (4)
  VOID *PortContext;                         // offset: 0x8 (8)
  VOID *CancelPortContext;                   // offset: 0xc (12)
  struct _KALPC_SECURITY_DATA *SecurityData; // offset: 0x10 (16)
  struct _KALPC_VIEW *View;                  // offset: 0x14 (20)
  struct _KALPC_HANDLE_DATA *HandleData;     // offset: 0x18 (24)
};

// 0x90 (144) bytes
struct _KALPC_MESSAGE {
  struct _LIST_ENTRY Entry;  // offset: 0x0 (0)
  VOID *ExtensionBuffer;     // offset: 0x8 (8)
  ULONG ExtensionBufferSize; // offset: 0xc (12)
  union {
    struct _EPROCESS *QuotaProcess; // offset: 0x10 (16)
    VOID *QuotaBlock;               // offset: 0x10 (16)
  };
  LONG SequenceNo; // offset: 0x14 (20)
  union {
    struct {
      ULONG QueueType : 2;          // offset: 0x0 (0)
      ULONG QueuePortType : 4;      // offset: 0x0 (0)
      ULONG Canceled : 1;           // offset: 0x0 (0)
      ULONG Ready : 1;              // offset: 0x0 (0)
      ULONG ReleaseMessage : 1;     // offset: 0x0 (0)
      ULONG SharedQuota : 1;        // offset: 0x0 (0)
      ULONG ReplyWaitReply : 1;     // offset: 0x0 (0)
      ULONG OwnerPortReference : 1; // offset: 0x0 (0)
      ULONG ReserveReference : 1;   // offset: 0x0 (0)
      ULONG ReceiverReference : 1;  // offset: 0x0 (0)
    } s1;                           // offset: 0x18 (24)
    ULONG State;                    // offset: 0x18 (24)

  } u1;                                               // offset: 0x18 (24)
  struct _ALPC_PORT *CancelSequencePort;              // offset: 0x1c (28)
  struct _ALPC_PORT *CancelQueuePort;                 // offset: 0x20 (32)
  LONG CancelSequenceNo;                              // offset: 0x24 (36)
  struct _LIST_ENTRY CancelListEntry;                 // offset: 0x28 (40)
  struct _ETHREAD *WaitingThread;                     // offset: 0x30 (48)
  struct _KALPC_RESERVE *Reserve;                     // offset: 0x34 (52)
  struct _ALPC_PORT *volatile PortQueue;              // offset: 0x38 (56)
  struct _ALPC_PORT *OwnerPort;                       // offset: 0x3c (60)
  struct _HANDLE_TABLE_ENTRY *UniqueTableEntry;       // offset: 0x40 (64)
  struct _KALPC_MESSAGE_ATTRIBUTES MessageAttributes; // offset: 0x44 (68)
  VOID *DataUserVa;                                   // offset: 0x60 (96)
  VOID *DataSystemVa;                                 // offset: 0x64 (100)
  struct _ALPC_COMMUNICATION_INFO *CommunicationInfo; // offset: 0x68 (104)
  struct _ALPC_PORT *ConnectionPort;                  // offset: 0x6c (108)
  struct _ETHREAD *ServerThread;                      // offset: 0x70 (112)
  struct _PORT_MESSAGE PortMessage;                   // offset: 0x78 (120)
};

// 0x20 (32) bytes
struct _ALPC_DISPATCH_CONTEXT {
  struct _ALPC_PORT *PortObject;                      // offset: 0x0 (0)
  struct _KALPC_MESSAGE *Message;                     // offset: 0x4 (4)
  struct _ALPC_COMMUNICATION_INFO *CommunicationInfo; // offset: 0x8 (8)
  ULONG Flags;                                        // offset: 0xc (12)
  struct _ETHREAD *TargetThread;                      // offset: 0x10 (16)
  struct _ALPC_PORT *TargetPort;                      // offset: 0x14 (20)
  USHORT TotalLength;                                 // offset: 0x18 (24)
  USHORT Type;                                        // offset: 0x1a (26)
  USHORT DataInfoOffset;                              // offset: 0x1c (28)
};

// 0x14 (20) bytes
struct _KALPC_RESERVE {
  struct _ALPC_PORT *OwnerPort;           // offset: 0x0 (0)
  struct _ALPC_HANDLE_TABLE *HandleTable; // offset: 0x4 (4)
  VOID *Handle;                           // offset: 0x8 (8)
  struct _KALPC_MESSAGE *Message;         // offset: 0xc (12)
  volatile LONG Active;                   // offset: 0x10 (16)
};

// 0xf4 (244) bytes
struct _ALPC_PORT {
  struct _LIST_ENTRY PortListEntry;                   // offset: 0x0 (0)
  struct _ALPC_COMMUNICATION_INFO *CommunicationInfo; // offset: 0x8 (8)
  struct _EPROCESS *OwnerProcess;                     // offset: 0xc (12)
  ULONG SequenceNo;                                   // offset: 0x10 (16)
  VOID *CompletionPort;                               // offset: 0x14 (20)
  VOID *CompletionKey;                                // offset: 0x18 (24)
  struct _ALPC_COMPLETION_PACKET_LOOKASIDE
      *CompletionPacketLookaside;                 // offset: 0x1c (28)
  VOID *PortContext;                              // offset: 0x20 (32)
  struct _SECURITY_CLIENT_CONTEXT StaticSecurity; // offset: 0x24 (36)
  struct _LIST_ENTRY MainQueue;                   // offset: 0x60 (96)
  struct _LIST_ENTRY PendingQueue;                // offset: 0x68 (104)
  struct _LIST_ENTRY LargeMessageQueue;           // offset: 0x70 (112)
  struct _LIST_ENTRY WaitQueue;                   // offset: 0x78 (120)
  union {
    struct _KSEMAPHORE *Semaphore; // offset: 0x80 (128)
    struct _KEVENT *DummyEvent;    // offset: 0x80 (128)
  };
  struct _EX_PUSH_LOCK Lock;                    // offset: 0x84 (132)
  struct _ALPC_PORT_ATTRIBUTES PortAttributes;  // offset: 0x88 (136)
  struct _EX_PUSH_LOCK ResourceListLock;        // offset: 0xb4 (180)
  struct _LIST_ENTRY ResourceListHead;          // offset: 0xb8 (184)
  struct _ALPC_COMPLETION_LIST *CompletionList; // offset: 0xc0 (192)
  struct _ALPC_MESSAGE_ZONE *MessageZone;       // offset: 0xc4 (196)
  struct _LIST_ENTRY CanceledQueue;             // offset: 0xc8 (200)
  union {
    struct {
      ULONG Initialized : 1;         // offset: 0x0 (0)
      ULONG Type : 2;                // offset: 0x0 (0)
      ULONG ConnectionPending : 1;   // offset: 0x0 (0)
      ULONG ConnectionRefused : 1;   // offset: 0x0 (0)
      ULONG Disconnected : 1;        // offset: 0x0 (0)
      ULONG Closed : 1;              // offset: 0x0 (0)
      ULONG NoFlushOnClose : 1;      // offset: 0x0 (0)
      ULONG ReturnExtendedInfo : 1;  // offset: 0x0 (0)
      ULONG Waitable : 1;            // offset: 0x0 (0)
      ULONG DynamicSecurity : 1;     // offset: 0x0 (0)
      ULONG Wow64CompletionList : 1; // offset: 0x0 (0)
      ULONG Lpc : 1;                 // offset: 0x0 (0)
      ULONG LpcToLpc : 1;            // offset: 0x0 (0)
      ULONG HasCompletionList : 1;   // offset: 0x0 (0)
      ULONG HadCompletionList : 1;   // offset: 0x0 (0)
    } s1;                            // offset: 0xd0 (208)
    ULONG State;                     // offset: 0xd0 (208)

  } u1;                                  // offset: 0xd0 (208)
  struct _ALPC_PORT *TargetQueuePort;    // offset: 0xd4 (212)
  struct _ALPC_PORT *TargetSequencePort; // offset: 0xd8 (216)
  struct _KALPC_MESSAGE *Message;        // offset: 0xdc (220)
  ULONG MainQueueLength;                 // offset: 0xe0 (224)
  ULONG PendingQueueLength;              // offset: 0xe4 (228)
  ULONG LargeMessageQueueLength;         // offset: 0xe8 (232)
  ULONG CanceledQueueLength;             // offset: 0xec (236)
  ULONG WaitQueueLength;                 // offset: 0xf0 (240)
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

// 0x1c (28) bytes
struct _OBJECT_REF_INFO {
  struct _OBJECT_HEADER *ObjectHeader;        // offset: 0x0 (0)
  VOID *NextRef;                              // offset: 0x4 (4)
  UCHAR ImageFileName[16];                    // offset: 0x8 (8)
  USHORT NextPos;                             // offset: 0x18 (24)
  USHORT MaxStacks;                           // offset: 0x1a (26)
  struct _OBJECT_REF_STACK_INFO StackInfo[0]; // offset: 0x1c (28)
};

// 0x38 (56) bytes
struct _HANDLE_TABLE {
  ULONG TableCode;                            // offset: 0x0 (0)
  struct _EPROCESS *QuotaProcess;             // offset: 0x4 (4)
  VOID *UniqueProcessId;                      // offset: 0x8 (8)
  struct _EX_PUSH_LOCK HandleLock;            // offset: 0xc (12)
  struct _LIST_ENTRY HandleTableList;         // offset: 0x10 (16)
  struct _EX_PUSH_LOCK HandleContentionEvent; // offset: 0x18 (24)
  struct _HANDLE_TRACE_DEBUG_INFO *DebugInfo; // offset: 0x1c (28)
  LONG ExtraInfoPages;                        // offset: 0x20 (32)
  union {
    ULONG Flags;          // offset: 0x24 (36)
    UCHAR StrictFIFO : 1; // offset: 0x24 (36)
  };
  LONG FirstFreeHandle;                            // offset: 0x28 (40)
  struct _HANDLE_TABLE_ENTRY *LastFreeHandleEntry; // offset: 0x2c (44)
  LONG HandleCount;                                // offset: 0x30 (48)
  ULONG NextHandleNeedingPool;                     // offset: 0x34 (52)
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

// 0x1ec0 (7872) bytes
struct _MM_SESSION_SPACE {
  volatile LONG ReferenceCount; // offset: 0x0 (0)
  union {
    ULONG LongFlags;                      // offset: 0x4 (4)
    struct _MM_SESSION_SPACE_FLAGS Flags; // offset: 0x4 (4)

  } u;                                            // offset: 0x4 (4)
  ULONG SessionId;                                // offset: 0x8 (8)
  volatile LONG ProcessReferenceToSession;        // offset: 0xc (12)
  struct _LIST_ENTRY ProcessList;                 // offset: 0x10 (16)
  union _LARGE_INTEGER LastProcessSwappedOutTime; // offset: 0x18 (24)
  ULONG SessionPageDirectoryIndex;                // offset: 0x20 (32)
  volatile ULONG NonPagablePages;                 // offset: 0x24 (36)
  volatile ULONG CommittedPages;                  // offset: 0x28 (40)
  VOID *PagedPoolStart;                           // offset: 0x2c (44)
  VOID *PagedPoolEnd;                             // offset: 0x30 (48)
  VOID *SessionObject;                            // offset: 0x34 (52)
  VOID *SessionObjectHandle;                      // offset: 0x38 (56)
  volatile LONG ResidentProcessCount;             // offset: 0x3c (60)
  volatile LONG ImageLoadingCount;                // offset: 0x40 (64)
  ULONG SessionPoolAllocationFailures[4];         // offset: 0x44 (68)
  struct _LIST_ENTRY ImageList;                   // offset: 0x54 (84)
  ULONG LocaleId;                                 // offset: 0x5c (92)
  ULONG AttachCount;                              // offset: 0x60 (96)
  struct _KGATE AttachGate;                       // offset: 0x64 (100)
  struct _LIST_ENTRY WsListEntry;                 // offset: 0x74 (116)
  struct _GENERAL_LOOKASIDE Lookaside[25];        // offset: 0x80 (128)
  struct _MMSESSION Session;                      // offset: 0xd00 (3328)
  struct _MM_PAGED_POOL_INFO PagedPoolInfo;       // offset: 0xd38 (3384)
  struct _MMSUPPORT Vm;                           // offset: 0xd70 (3440)
  struct _MMWSLE *Wsle;                           // offset: 0xdb8 (3512)
  VOID (*volatileDriverUnload)
  (struct _DRIVER_OBJECT *arg1);            // offset: 0xdbc (3516)
  struct _POOL_DESCRIPTOR PagedPool;        // offset: 0xdc0 (3520)
  struct _MMPTE *PageTables;                // offset: 0x1df4 (7668)
  struct _MI_SPECIAL_POOL SpecialPool;      // offset: 0x1df8 (7672)
  struct _KGUARDED_MUTEX SessionPteLock;    // offset: 0x1e10 (7696)
  LONG PoolBigEntriesInUse;                 // offset: 0x1e30 (7728)
  ULONG PagedPoolPdeCount;                  // offset: 0x1e34 (7732)
  ULONG SpecialPoolPdeCount;                // offset: 0x1e38 (7736)
  ULONG DynamicSessionPdeCount;             // offset: 0x1e3c (7740)
  struct _MI_SYSTEM_PTE_TYPE SystemPteInfo; // offset: 0x1e40 (7744)
  VOID *PoolTrackTableExpansion;            // offset: 0x1e6c (7788)
  ULONG PoolTrackTableExpansionSize;        // offset: 0x1e70 (7792)
  VOID *PoolTrackBigPages;                  // offset: 0x1e74 (7796)
  ULONG PoolTrackBigPagesSize;              // offset: 0x1e78 (7800)
  struct _RTL_BITMAP SessionPoolPdes;       // offset: 0x1e7c (7804)
};

// 0x1c (28) bytes
struct _DRIVER_EXTENSION {
  struct _DRIVER_OBJECT *DriverObject; // offset: 0x0 (0)
  LONG (*AddDevice)
  (struct _DRIVER_OBJECT *arg1, struct _DEVICE_OBJECT *arg2); // offset: 0x4 (4)
  ULONG Count;                                                // offset: 0x8 (8)
  struct _UNICODE_STRING ServiceKeyName;              // offset: 0xc (12)
  struct _IO_CLIENT_EXTENSION *ClientDriverExtension; // offset: 0x14 (20)
  struct _FS_FILTER_CALLBACKS *FsFilterCallbacks;     // offset: 0x18 (24)
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

// 0x40 (64) bytes
struct _MI_PAGEFILE_TRACES {
  LONG Status;                      // offset: 0x0 (0)
  UCHAR Priority;                   // offset: 0x4 (4)
  UCHAR IrpPriority;                // offset: 0x5 (5)
  union _LARGE_INTEGER CurrentTime; // offset: 0x8 (8)
  ULONG AvailablePages;             // offset: 0x10 (16)
  ULONG ModifiedPagesTotal;         // offset: 0x14 (20)
  ULONG ModifiedPagefilePages;      // offset: 0x18 (24)
  ULONG ModifiedNoWritePages;       // offset: 0x1c (28)
  struct {
    struct _MDL Mdl; // offset: 0x0 (0)
    ULONG Page[1];   // offset: 0x1c (28)
  } MdlHack;         // offset: 0x20 (32)
};

// 0x60 (96) bytes
struct _MMMOD_WRITER_MDL_ENTRY {
  struct _LIST_ENTRY Links; // offset: 0x0 (0)
  union {
    struct _IO_STATUS_BLOCK IoStatus; // offset: 0x8 (8)

  } u;              // offset: 0x8 (8)
  struct _IRP *Irp; // offset: 0x10 (16)
  union {
    ULONG KeepForever; // offset: 0x14 (20)

  } u1;                              // offset: 0x14 (20)
  struct _MMPAGING_FILE *PagingFile; // offset: 0x18 (24)
  struct _FILE_OBJECT *File;         // offset: 0x1c (28)
  struct _CONTROL_AREA *ControlArea; // offset: 0x20 (32)
  struct _ERESOURCE *FileResource;   // offset: 0x24 (36)
  union _LARGE_INTEGER WriteOffset;  // offset: 0x28 (40)
  union _LARGE_INTEGER IssueTime;    // offset: 0x30 (48)
  struct _MDL *PointerMdl;           // offset: 0x38 (56)
  struct _MDL Mdl;                   // offset: 0x3c (60)
  ULONG Page[1];                     // offset: 0x58 (88)
};

// 0x50 (80) bytes
struct _MMPAGING_FILE {
  ULONG Size;                               // offset: 0x0 (0)
  ULONG MaximumSize;                        // offset: 0x4 (4)
  ULONG MinimumSize;                        // offset: 0x8 (8)
  ULONG FreeSpace;                          // offset: 0xc (12)
  ULONG PeakUsage;                          // offset: 0x10 (16)
  ULONG HighestPage;                        // offset: 0x14 (20)
  struct _FILE_OBJECT *File;                // offset: 0x18 (24)
  struct _MMMOD_WRITER_MDL_ENTRY *Entry[2]; // offset: 0x1c (28)
  struct _UNICODE_STRING PageFileName;      // offset: 0x24 (36)
  struct _RTL_BITMAP *volatile Bitmap;      // offset: 0x2c (44)
  ULONG BitmapHint;                         // offset: 0x30 (48)
  ULONG LastAllocationSize;                 // offset: 0x34 (52)
  USHORT PageFileNumber : 4;                // offset: 0x38 (56)
  USHORT BootPartition : 1;                 // offset: 0x38 (56)
  USHORT Spare0 : 11;                       // offset: 0x38 (56)
  USHORT AdriftMdls : 1;                    // offset: 0x3a (58)
  USHORT Spare1 : 15;                       // offset: 0x3a (58)
  VOID *FileHandle;                         // offset: 0x3c (60)
  union _SLIST_HEADER AvailableList;        // offset: 0x40 (64)
  union _SLIST_HEADER NeedProcessingList;   // offset: 0x48 (72)
};

// 0x28 (40) bytes
struct _KTIMER {
  struct _DISPATCHER_HEADER Header;  // offset: 0x0 (0)
  union _ULARGE_INTEGER DueTime;     // offset: 0x10 (16)
  struct _LIST_ENTRY TimerListEntry; // offset: 0x18 (24)
  struct _KDPC *Dpc;                 // offset: 0x20 (32)
  LONG Period;                       // offset: 0x24 (36)
};

// 0xd8 (216) bytes
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
  struct _IRP *Irp;                         // offset: 0x80 (128)
  struct _THERMAL_INFORMATION_EX Info;      // offset: 0x84 (132)
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

// 0x58 (88) bytes
struct _LAZY_WRITER {
  struct _LIST_ENTRY WorkQueue; // offset: 0x0 (0)
  struct _KDPC ScanDpc;         // offset: 0x8 (8)
  struct _KTIMER ScanTimer;     // offset: 0x28 (40)
  UCHAR ScanActive;             // offset: 0x50 (80)
  UCHAR OtherWork;              // offset: 0x51 (81)
  UCHAR PendingTeardown;        // offset: 0x52 (82)
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

// 0x1e0 (480) bytes
struct _KTHREAD {
  struct _DISPATCHER_HEADER Header; // offset: 0x0 (0)
  volatile ULONGLONG CycleTime;     // offset: 0x10 (16)
  volatile ULONG HighCycleTime;     // offset: 0x18 (24)
  ULONGLONG QuantumTarget;          // offset: 0x20 (32)
  VOID *InitialStack;               // offset: 0x28 (40)
  VOID *volatile StackLimit;        // offset: 0x2c (44)
  VOID *KernelStack;                // offset: 0x30 (48)
  ULONG ThreadLock;                 // offset: 0x34 (52)
  union {
    struct _KAPC_STATE ApcState; // offset: 0x38 (56)
    struct {
      UCHAR ApcStateFill[23]; // offset: 0x38 (56)
      CHAR Priority;          // offset: 0x4f (79)
    };
  };
  volatile USHORT NextProcessor;     // offset: 0x50 (80)
  volatile USHORT DeferredProcessor; // offset: 0x52 (82)
  ULONG ApcQueueLock;                // offset: 0x54 (84)
  ULONG ContextSwitches;             // offset: 0x58 (88)
  volatile UCHAR State;              // offset: 0x5c (92)
  UCHAR NpxState;                    // offset: 0x5d (93)
  UCHAR WaitIrql;                    // offset: 0x5e (94)
  CHAR WaitMode;                     // offset: 0x5f (95)
  LONG WaitStatus;                   // offset: 0x60 (96)
  union {
    struct _KWAIT_BLOCK *WaitBlockList; // offset: 0x64 (100)
    struct _KGATE *GateObject;          // offset: 0x64 (100)
  };
  union {
    struct {
      ULONG KernelStackResident : 1;  // offset: 0x68 (104)
      ULONG ReadyTransition : 1;      // offset: 0x68 (104)
      ULONG ProcessReadyQueue : 1;    // offset: 0x68 (104)
      ULONG WaitNext : 1;             // offset: 0x68 (104)
      ULONG SystemAffinityActive : 1; // offset: 0x68 (104)
      ULONG Alertable : 1;            // offset: 0x68 (104)
      ULONG GdiFlushActive : 1;       // offset: 0x68 (104)
      ULONG UserStackWalkActive : 1;  // offset: 0x68 (104)
      ULONG Reserved : 24;            // offset: 0x68 (104)
    };
    LONG MiscFlags; // offset: 0x68 (104)
  };
  UCHAR WaitReason;        // offset: 0x6c (108)
  volatile UCHAR SwapBusy; // offset: 0x6d (109)
  UCHAR Alerted[2];        // offset: 0x6e (110)
  union {
    struct _LIST_ENTRY WaitListEntry;        // offset: 0x70 (112)
    struct _SINGLE_LIST_ENTRY SwapListEntry; // offset: 0x70 (112)
  };
  struct _KQUEUE *Queue; // offset: 0x78 (120)
  ULONG WaitTime;        // offset: 0x7c (124)
  union {
    struct {
      SHORT KernelApcDisable;  // offset: 0x80 (128)
      SHORT SpecialApcDisable; // offset: 0x82 (130)
    };
    ULONG CombinedApcDisable; // offset: 0x80 (128)
  };
  VOID *Teb; // offset: 0x84 (132)
  union {
    struct _KTIMER Timer; // offset: 0x88 (136)
    UCHAR TimerFill[40];  // offset: 0x88 (136)
  };
  union {
    struct {
      volatile ULONG AutoAlignment : 1;             // offset: 0xb0 (176)
      volatile ULONG DisableBoost : 1;              // offset: 0xb0 (176)
      volatile ULONG EtwStackTraceApc1Inserted : 1; // offset: 0xb0 (176)
      volatile ULONG EtwStackTraceApc2Inserted : 1; // offset: 0xb0 (176)
      volatile ULONG CycleChargePending : 1;        // offset: 0xb0 (176)
      volatile ULONG CalloutActive : 1;             // offset: 0xb0 (176)
      volatile ULONG ApcQueueable : 1;              // offset: 0xb0 (176)
      volatile ULONG EnableStackSwap : 1;           // offset: 0xb0 (176)
      volatile ULONG GuiThread : 1;                 // offset: 0xb0 (176)
      volatile ULONG ReservedFlags : 23;            // offset: 0xb0 (176)
    };
    volatile LONG ThreadFlags; // offset: 0xb0 (176)
  };
  union {
    struct _KWAIT_BLOCK WaitBlock[4]; // offset: 0xb8 (184)
    struct {
      UCHAR WaitBlockFill0[23]; // offset: 0xb8 (184)
      UCHAR IdealProcessor;     // offset: 0xcf (207)
    };
    struct {
      UCHAR WaitBlockFill1[47]; // offset: 0xb8 (184)
      CHAR PreviousMode;        // offset: 0xe7 (231)
    };
    struct {
      UCHAR WaitBlockFill2[71]; // offset: 0xb8 (184)
      UCHAR ResourceIndex;      // offset: 0xff (255)
    };
    struct {
      UCHAR WaitBlockFill3[95]; // offset: 0xb8 (184)
      UCHAR LargeStack;         // offset: 0x117 (279)
    };
  };
  struct _LIST_ENTRY QueueListEntry; // offset: 0x118 (280)
  struct _KTRAP_FRAME *TrapFrame;    // offset: 0x120 (288)
  VOID *FirstArgument;               // offset: 0x124 (292)
  union {
    VOID *CallbackStack; // offset: 0x128 (296)
    ULONG CallbackDepth; // offset: 0x128 (296)
  };
  VOID *ServiceTable;                     // offset: 0x12c (300)
  UCHAR ApcStateIndex;                    // offset: 0x130 (304)
  CHAR BasePriority;                      // offset: 0x131 (305)
  CHAR PriorityDecrement;                 // offset: 0x132 (306)
  UCHAR Preempted;                        // offset: 0x133 (307)
  UCHAR AdjustReason;                     // offset: 0x134 (308)
  CHAR AdjustIncrement;                   // offset: 0x135 (309)
  UCHAR Spare01;                          // offset: 0x136 (310)
  CHAR Saturation;                        // offset: 0x137 (311)
  ULONG SystemCallNumber;                 // offset: 0x138 (312)
  ULONG FreezeCount;                      // offset: 0x13c (316)
  ULONG UserAffinity;                     // offset: 0x140 (320)
  struct _KPROCESS *Process;              // offset: 0x144 (324)
  volatile ULONG Affinity;                // offset: 0x148 (328)
  struct _KAPC_STATE *ApcStatePointer[2]; // offset: 0x14c (332)
  union {
    struct _KAPC_STATE SavedApcState; // offset: 0x154 (340)
    struct {
      UCHAR SavedApcStateFill[23]; // offset: 0x154 (340)
      UCHAR Spare02;               // offset: 0x16b (363)
    };
  };
  CHAR SuspendCount;          // offset: 0x16c (364)
  UCHAR UserIdealProcessor;   // offset: 0x16d (365)
  UCHAR Spare03;              // offset: 0x16e (366)
  UCHAR OtherPlatformFill;    // offset: 0x16f (367)
  VOID *volatile Win32Thread; // offset: 0x170 (368)
  VOID *StackBase;            // offset: 0x174 (372)
  union {
    struct _KAPC SuspendApc; // offset: 0x178 (376)
    struct {
      UCHAR SuspendApcFill0[1]; // offset: 0x178 (376)
      CHAR Spare04;             // offset: 0x179 (377)
    };
    struct {
      UCHAR SuspendApcFill1[3]; // offset: 0x178 (376)
      UCHAR QuantumReset;       // offset: 0x17b (379)
    };
    struct {
      UCHAR SuspendApcFill2[4]; // offset: 0x178 (376)
      ULONG KernelTime;         // offset: 0x17c (380)
    };
    struct {
      UCHAR SuspendApcFill3[36]; // offset: 0x178 (376)
      struct _KPRCB *WaitPrcb;   // offset: 0x19c (412)
    };
    struct {
      UCHAR SuspendApcFill4[40]; // offset: 0x178 (376)
      VOID *LegoData;            // offset: 0x1a0 (416)
    };
    struct {
      UCHAR SuspendApcFill5[47]; // offset: 0x178 (376)
      UCHAR PowerState;          // offset: 0x1a7 (423)
    };
  };
  ULONG UserTime; // offset: 0x1a8 (424)
  union {
    struct _KSEMAPHORE SuspendSemaphore; // offset: 0x1ac (428)
    UCHAR SuspendSemaphorefill[20];      // offset: 0x1ac (428)
  };
  ULONG SListFaultCount;              // offset: 0x1c0 (448)
  struct _LIST_ENTRY ThreadListEntry; // offset: 0x1c4 (452)
  struct _LIST_ENTRY MutantListHead;  // offset: 0x1cc (460)
  VOID *SListFaultAddress;            // offset: 0x1d4 (468)
  VOID *volatile MdlForLockedTeb;     // offset: 0x1d8 (472)
};

// 0x288 (648) bytes
struct _ETHREAD {
  struct _KTHREAD Tcb;             // offset: 0x0 (0)
  union _LARGE_INTEGER CreateTime; // offset: 0x1e0 (480)
  union {
    union _LARGE_INTEGER ExitTime;     // offset: 0x1e8 (488)
    struct _LIST_ENTRY KeyedWaitChain; // offset: 0x1e8 (488)
  };
  union {
    LONG ExitStatus; // offset: 0x1f0 (496)
    VOID *OfsChain;  // offset: 0x1f0 (496)
  };
  union {
    struct _LIST_ENTRY PostBlockList; // offset: 0x1f4 (500)
    struct {
      VOID *ForwardLinkShadow; // offset: 0x1f4 (500)
      VOID *StartAddress;      // offset: 0x1f8 (504)
    };
  };
  union {
    struct _TERMINATION_PORT *TerminationPort; // offset: 0x1fc (508)
    struct _ETHREAD *ReaperLink;               // offset: 0x1fc (508)
    VOID *KeyedWaitValue;                      // offset: 0x1fc (508)
    VOID *Win32StartParameter;                 // offset: 0x1fc (508)
  };
  ULONG ActiveTimerListLock;              // offset: 0x200 (512)
  struct _LIST_ENTRY ActiveTimerListHead; // offset: 0x204 (516)
  struct _CLIENT_ID Cid;                  // offset: 0x20c (524)
  union {
    struct _KSEMAPHORE KeyedWaitSemaphore; // offset: 0x214 (532)
    struct _KSEMAPHORE AlpcWaitSemaphore;  // offset: 0x214 (532)
  };
  union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity; // offset: 0x228 (552)
  struct _LIST_ENTRY IrpList;                       // offset: 0x22c (556)
  ULONG TopLevelIrp;                                // offset: 0x234 (564)
  struct _DEVICE_OBJECT *DeviceToVerify;            // offset: 0x238 (568)
  union _PSP_RATE_APC *RateControlApc;              // offset: 0x23c (572)
  VOID *Win32StartAddress;                          // offset: 0x240 (576)
  VOID *SparePtr0;                                  // offset: 0x244 (580)
  struct _LIST_ENTRY ThreadListEntry;               // offset: 0x248 (584)
  struct _EX_RUNDOWN_REF RundownProtect;            // offset: 0x250 (592)
  struct _EX_PUSH_LOCK ThreadLock;                  // offset: 0x254 (596)
  ULONG ReadClusterSize;                            // offset: 0x258 (600)
  volatile LONG MmLockOrdering;                     // offset: 0x25c (604)
  union {
    ULONG CrossThreadFlags; // offset: 0x260 (608)
    struct {
      ULONG Terminated : 1;              // offset: 0x260 (608)
      ULONG ThreadInserted : 1;          // offset: 0x260 (608)
      ULONG HideFromDebugger : 1;        // offset: 0x260 (608)
      ULONG ActiveImpersonationInfo : 1; // offset: 0x260 (608)
      ULONG SystemThread : 1;            // offset: 0x260 (608)
      ULONG HardErrorsAreDisabled : 1;   // offset: 0x260 (608)
      ULONG BreakOnTermination : 1;      // offset: 0x260 (608)
      ULONG SkipCreationMsg : 1;         // offset: 0x260 (608)
      ULONG SkipTerminationMsg : 1;      // offset: 0x260 (608)
      ULONG CopyTokenOnOpen : 1;         // offset: 0x260 (608)
      ULONG ThreadIoPriority : 3;        // offset: 0x260 (608)
      ULONG ThreadPagePriority : 3;      // offset: 0x260 (608)
      ULONG RundownFail : 1;             // offset: 0x260 (608)
    };
  };
  union {
    ULONG SameThreadPassiveFlags; // offset: 0x264 (612)
    struct {
      ULONG ActiveExWorker : 1;      // offset: 0x264 (612)
      ULONG ExWorkerCanWaitUser : 1; // offset: 0x264 (612)
      ULONG MemoryMaker : 1;         // offset: 0x264 (612)
      ULONG ClonedThread : 1;        // offset: 0x264 (612)
      ULONG KeyedEventInUse : 1;     // offset: 0x264 (612)
      ULONG RateApcState : 2;        // offset: 0x264 (612)
      ULONG SelfTerminate : 1;       // offset: 0x264 (612)
    };
  };
  union {
    ULONG SameThreadApcFlags; // offset: 0x268 (616)
    struct {
      UCHAR Spare : 1;                            // offset: 0x268 (616)
      volatile UCHAR StartAddressInvalid : 1;     // offset: 0x268 (616)
      UCHAR EtwPageFaultCalloutActive : 1;        // offset: 0x268 (616)
      UCHAR OwnsProcessWorkingSetExclusive : 1;   // offset: 0x268 (616)
      UCHAR OwnsProcessWorkingSetShared : 1;      // offset: 0x268 (616)
      UCHAR OwnsSystemWorkingSetExclusive : 1;    // offset: 0x268 (616)
      UCHAR OwnsSystemWorkingSetShared : 1;       // offset: 0x268 (616)
      UCHAR OwnsSessionWorkingSetExclusive : 1;   // offset: 0x268 (616)
      UCHAR OwnsSessionWorkingSetShared : 1;      // offset: 0x269 (617)
      UCHAR OwnsProcessAddressSpaceExclusive : 1; // offset: 0x269 (617)
      UCHAR OwnsProcessAddressSpaceShared : 1;    // offset: 0x269 (617)
      UCHAR SuppressSymbolLoad : 1;               // offset: 0x269 (617)
      UCHAR Prefetching : 1;                      // offset: 0x269 (617)
      UCHAR OwnsDynamicMemoryShared : 1;          // offset: 0x269 (617)
      UCHAR OwnsChangeControlAreaExclusive : 1;   // offset: 0x269 (617)
      UCHAR OwnsChangeControlAreaShared : 1;      // offset: 0x269 (617)
      UCHAR Spare1 : 8;                           // offset: 0x26a (618)
      UCHAR PriorityRegionActive;                 // offset: 0x26b (619)
    };
  };
  UCHAR CacheManagerActive;         // offset: 0x26c (620)
  UCHAR DisablePageFaultClustering; // offset: 0x26d (621)
  UCHAR ActiveFaultCount;           // offset: 0x26e (622)
  ULONG AlpcMessageId;              // offset: 0x270 (624)
  union {
    VOID *AlpcMessage;             // offset: 0x274 (628)
    ULONG AlpcReceiveAttributeSet; // offset: 0x274 (628)
  };
  struct _LIST_ENTRY AlpcWaitListEntry; // offset: 0x278 (632)
  ULONG CacheManagerCount;              // offset: 0x280 (640)
};

// 0xc8 (200) bytes
struct _PROCESSOR_POWER_STATE {
  struct _PPM_IDLE_STATES *IdleStates; // offset: 0x0 (0)
  ULONGLONG LastTimeCheck;             // offset: 0x8 (8)
  ULONGLONG IdleTimeAccumulated;       // offset: 0x10 (16)
  union {
    struct {
      ULONGLONG IdleTransitionTime; // offset: 0x0 (0)
    } Native;                       // offset: 0x18 (24)
    struct {
      ULONGLONG LastIdleCheck; // offset: 0x0 (0)
    } Hv;                      // offset: 0x18 (24)
  };
  struct PPM_IDLE_ACCOUNTING *IdleAccounting; // offset: 0x20 (32)
  struct _PPM_PERF_STATES *PerfStates;        // offset: 0x24 (36)
  ULONG LastKernelUserTime;                   // offset: 0x28 (40)
  ULONG LastIdleThreadKTime;                  // offset: 0x2c (44)
  ULONGLONG LastGlobalTimeHv;                 // offset: 0x30 (48)
  ULONGLONG LastProcessorTimeHv;              // offset: 0x38 (56)
  UCHAR ThermalConstraint;                    // offset: 0x40 (64)
  UCHAR LastBusyPercentage;                   // offset: 0x41 (65)
  union {
    USHORT AsUSHORT;                       // offset: 0x42 (66)
    USHORT PStateDomain : 1;               // offset: 0x42 (66)
    USHORT PStateDomainIdleAccounting : 1; // offset: 0x42 (66)
    USHORT Reserved : 14;                  // offset: 0x42 (66)

  } Flags;                            // offset: 0x42 (66)
  struct _KTIMER PerfTimer;           // offset: 0x48 (72)
  struct _KDPC PerfDpc;               // offset: 0x70 (112)
  ULONG LastSysTime;                  // offset: 0x90 (144)
  struct _KPRCB *PStateMaster;        // offset: 0x94 (148)
  ULONG PStateSet;                    // offset: 0x98 (152)
  ULONG CurrentPState;                // offset: 0x9c (156)
  ULONG DesiredPState;                // offset: 0xa0 (160)
  volatile ULONG PStateIdleStartTime; // offset: 0xa4 (164)
  ULONG PStateIdleTime;               // offset: 0xa8 (168)
  ULONG LastPStateIdleTime;           // offset: 0xac (172)
  ULONG PStateStartTime;              // offset: 0xb0 (176)
  ULONG DiaIndex;                     // offset: 0xb4 (180)
  ULONG Reserved0;                    // offset: 0xb8 (184)
  ULONG WmiDispatchPtr;               // offset: 0xbc (188)
  LONG WmiInterfaceEnabled;           // offset: 0xc0 (192)
};

// 0x2008 (8200) bytes
struct _KPRCB {
  USHORT MinorVersion;            // offset: 0x0 (0)
  USHORT MajorVersion;            // offset: 0x2 (2)
  struct _KTHREAD *CurrentThread; // offset: 0x4 (4)
  struct _KTHREAD *NextThread;    // offset: 0x8 (8)
  struct _KTHREAD *IdleThread;    // offset: 0xc (12)
  UCHAR Number;                   // offset: 0x10 (16)
  UCHAR NestingLevel;             // offset: 0x11 (17)
  USHORT BuildType;               // offset: 0x12 (18)
  ULONG SetMember;                // offset: 0x14 (20)
  CHAR CpuType;                   // offset: 0x18 (24)
  CHAR CpuID;                     // offset: 0x19 (25)
  union {
    USHORT CpuStep; // offset: 0x1a (26)
    struct {
      UCHAR CpuStepping; // offset: 0x1a (26)
      UCHAR CpuModel;    // offset: 0x1b (27)
    };
  };
  struct _KPROCESSOR_STATE ProcessorState;       // offset: 0x1c (28)
  ULONG KernelReserved[16];                      // offset: 0x33c (828)
  ULONG HalReserved[16];                         // offset: 0x37c (892)
  ULONG CFlushSize;                              // offset: 0x3bc (956)
  UCHAR CoresPerPhysicalProcessor;               // offset: 0x3c0 (960)
  UCHAR LogicalProcessorsPerCore;                // offset: 0x3c1 (961)
  UCHAR PrcbPad0[2];                             // offset: 0x3c2 (962)
  ULONG MHz;                                     // offset: 0x3c4 (964)
  UCHAR PrcbPad1[80];                            // offset: 0x3c8 (968)
  struct _KSPIN_LOCK_QUEUE LockQueue[49];        // offset: 0x418 (1048)
  struct _KTHREAD *NpxThread;                    // offset: 0x5a0 (1440)
  ULONG InterruptCount;                          // offset: 0x5a4 (1444)
  ULONG KernelTime;                              // offset: 0x5a8 (1448)
  ULONG UserTime;                                // offset: 0x5ac (1452)
  ULONG DpcTime;                                 // offset: 0x5b0 (1456)
  ULONG DpcTimeCount;                            // offset: 0x5b4 (1460)
  ULONG InterruptTime;                           // offset: 0x5b8 (1464)
  ULONG AdjustDpcThreshold;                      // offset: 0x5bc (1468)
  ULONG PageColor;                               // offset: 0x5c0 (1472)
  UCHAR SkipTick;                                // offset: 0x5c4 (1476)
  UCHAR DebuggerSavedIRQL;                       // offset: 0x5c5 (1477)
  UCHAR NodeColor;                               // offset: 0x5c6 (1478)
  UCHAR PollSlot;                                // offset: 0x5c7 (1479)
  ULONG NodeShiftedColor;                        // offset: 0x5c8 (1480)
  struct _KNODE *ParentNode;                     // offset: 0x5cc (1484)
  ULONG MultiThreadProcessorSet;                 // offset: 0x5d0 (1488)
  struct _KPRCB *MultiThreadSetMaster;           // offset: 0x5d4 (1492)
  ULONG SecondaryColorMask;                      // offset: 0x5d8 (1496)
  ULONG DpcTimeLimit;                            // offset: 0x5dc (1500)
  ULONG CcFastReadNoWait;                        // offset: 0x5e0 (1504)
  ULONG CcFastReadWait;                          // offset: 0x5e4 (1508)
  ULONG CcFastReadNotPossible;                   // offset: 0x5e8 (1512)
  ULONG CcCopyReadNoWait;                        // offset: 0x5ec (1516)
  ULONG CcCopyReadWait;                          // offset: 0x5f0 (1520)
  ULONG CcCopyReadNoWaitMiss;                    // offset: 0x5f4 (1524)
  volatile LONG MmSpinLockOrdering;              // offset: 0x5f8 (1528)
  volatile LONG IoReadOperationCount;            // offset: 0x5fc (1532)
  volatile LONG IoWriteOperationCount;           // offset: 0x600 (1536)
  volatile LONG IoOtherOperationCount;           // offset: 0x604 (1540)
  union _LARGE_INTEGER IoReadTransferCount;      // offset: 0x608 (1544)
  union _LARGE_INTEGER IoWriteTransferCount;     // offset: 0x610 (1552)
  union _LARGE_INTEGER IoOtherTransferCount;     // offset: 0x618 (1560)
  ULONG CcFastMdlReadNoWait;                     // offset: 0x620 (1568)
  ULONG CcFastMdlReadWait;                       // offset: 0x624 (1572)
  ULONG CcFastMdlReadNotPossible;                // offset: 0x628 (1576)
  ULONG CcMapDataNoWait;                         // offset: 0x62c (1580)
  ULONG CcMapDataWait;                           // offset: 0x630 (1584)
  ULONG CcPinMappedDataCount;                    // offset: 0x634 (1588)
  ULONG CcPinReadNoWait;                         // offset: 0x638 (1592)
  ULONG CcPinReadWait;                           // offset: 0x63c (1596)
  ULONG CcMdlReadNoWait;                         // offset: 0x640 (1600)
  ULONG CcMdlReadWait;                           // offset: 0x644 (1604)
  ULONG CcLazyWriteHotSpots;                     // offset: 0x648 (1608)
  ULONG CcLazyWriteIos;                          // offset: 0x64c (1612)
  ULONG CcLazyWritePages;                        // offset: 0x650 (1616)
  ULONG CcDataFlushes;                           // offset: 0x654 (1620)
  ULONG CcDataPages;                             // offset: 0x658 (1624)
  ULONG CcLostDelayedWrites;                     // offset: 0x65c (1628)
  ULONG CcFastReadResourceMiss;                  // offset: 0x660 (1632)
  ULONG CcCopyReadWaitMiss;                      // offset: 0x664 (1636)
  ULONG CcFastMdlReadResourceMiss;               // offset: 0x668 (1640)
  ULONG CcMapDataNoWaitMiss;                     // offset: 0x66c (1644)
  ULONG CcMapDataWaitMiss;                       // offset: 0x670 (1648)
  ULONG CcPinReadNoWaitMiss;                     // offset: 0x674 (1652)
  ULONG CcPinReadWaitMiss;                       // offset: 0x678 (1656)
  ULONG CcMdlReadNoWaitMiss;                     // offset: 0x67c (1660)
  ULONG CcMdlReadWaitMiss;                       // offset: 0x680 (1664)
  ULONG CcReadAheadIos;                          // offset: 0x684 (1668)
  ULONG KeAlignmentFixupCount;                   // offset: 0x688 (1672)
  ULONG KeExceptionDispatchCount;                // offset: 0x68c (1676)
  ULONG KeSystemCalls;                           // offset: 0x690 (1680)
  ULONG PrcbPad2[3];                             // offset: 0x694 (1684)
  struct _PP_LOOKASIDE_LIST PPLookasideList[16]; // offset: 0x6a0 (1696)
  struct _GENERAL_LOOKASIDE_POOL
      PPNPagedLookasideList[32]; // offset: 0x720 (1824)
  struct _GENERAL_LOOKASIDE_POOL
      PPPagedLookasideList[32];    // offset: 0x1020 (4128)
  volatile ULONG PacketBarrier;    // offset: 0x1920 (6432)
  volatile LONG ReverseStall;      // offset: 0x1924 (6436)
  VOID *IpiFrame;                  // offset: 0x1928 (6440)
  UCHAR PrcbPad3[52];              // offset: 0x192c (6444)
  VOID *volatile CurrentPacket[3]; // offset: 0x1960 (6496)
  volatile ULONG TargetSet;        // offset: 0x196c (6508)
  VOID (*volatileWorkerRoutine)
  (VOID *arg1, VOID *arg2, VOID *arg3, VOID *arg4); // offset: 0x1970 (6512)
  volatile ULONG IpiFrozen;                         // offset: 0x1974 (6516)
  UCHAR PrcbPad4[40];                               // offset: 0x1978 (6520)
  volatile ULONG RequestSummary;                    // offset: 0x19a0 (6560)
  struct _KPRCB *volatile SignalDone;               // offset: 0x19a4 (6564)
  UCHAR PrcbPad5[56];                               // offset: 0x19a8 (6568)
  struct _KDPC_DATA DpcData[2];                     // offset: 0x19e0 (6624)
  VOID *DpcStack;                                   // offset: 0x1a08 (6664)
  LONG MaximumDpcQueueDepth;                        // offset: 0x1a0c (6668)
  ULONG DpcRequestRate;                             // offset: 0x1a10 (6672)
  ULONG MinimumDpcRate;                             // offset: 0x1a14 (6676)
  volatile UCHAR DpcInterruptRequested;             // offset: 0x1a18 (6680)
  volatile UCHAR DpcThreadRequested;                // offset: 0x1a19 (6681)
  volatile UCHAR DpcRoutineActive;                  // offset: 0x1a1a (6682)
  volatile UCHAR DpcThreadActive;                   // offset: 0x1a1b (6683)
  ULONG PrcbLock;                                   // offset: 0x1a1c (6684)
  ULONG DpcLastCount;                               // offset: 0x1a20 (6688)
  volatile ULONG TimerHand;                         // offset: 0x1a24 (6692)
  volatile ULONG TimerRequest;                      // offset: 0x1a28 (6696)
  VOID *PrcbPad41;                                  // offset: 0x1a2c (6700)
  struct _KEVENT DpcEvent;                          // offset: 0x1a30 (6704)
  UCHAR ThreadDpcEnable;                            // offset: 0x1a40 (6720)
  volatile UCHAR QuantumEnd;                        // offset: 0x1a41 (6721)
  UCHAR PrcbPad50;                                  // offset: 0x1a42 (6722)
  volatile UCHAR IdleSchedule;                      // offset: 0x1a43 (6723)
  LONG DpcSetEventRequest;                          // offset: 0x1a44 (6724)
  LONG Sleeping;                                    // offset: 0x1a48 (6728)
  ULONG PeriodicCount;                              // offset: 0x1a4c (6732)
  ULONG PeriodicBias;                               // offset: 0x1a50 (6736)
  UCHAR PrcbPad51[6];                               // offset: 0x1a54 (6740)
  LONG TickOffset;                                  // offset: 0x1a5c (6748)
  struct _KDPC CallDpc;                             // offset: 0x1a60 (6752)
  LONG ClockKeepAlive;                              // offset: 0x1a80 (6784)
  UCHAR ClockCheckSlot;                             // offset: 0x1a84 (6788)
  UCHAR ClockPollCycle;                             // offset: 0x1a85 (6789)
  UCHAR PrcbPad6[2];                                // offset: 0x1a86 (6790)
  LONG DpcWatchdogPeriod;                           // offset: 0x1a88 (6792)
  LONG DpcWatchdogCount;                            // offset: 0x1a8c (6796)
  LONG ThreadWatchdogPeriod;                        // offset: 0x1a90 (6800)
  LONG ThreadWatchdogCount;                         // offset: 0x1a94 (6804)
  ULONG PrcbPad70[2];                               // offset: 0x1a98 (6808)
  struct _LIST_ENTRY WaitListHead;                  // offset: 0x1aa0 (6816)
  ULONG WaitLock;                                   // offset: 0x1aa8 (6824)
  ULONG ReadySummary;                               // offset: 0x1aac (6828)
  ULONG QueueIndex;                                 // offset: 0x1ab0 (6832)
  struct _SINGLE_LIST_ENTRY DeferredReadyListHead;  // offset: 0x1ab4 (6836)
  ULONGLONG StartCycles;                            // offset: 0x1ab8 (6840)
  ULONGLONG CycleTime;                              // offset: 0x1ac0 (6848)
  ULONGLONG PrcbPad71[3];                           // offset: 0x1ac8 (6856)
  struct _LIST_ENTRY DispatcherReadyListHead[32];   // offset: 0x1ae0 (6880)
  VOID *ChainedInterruptList;                       // offset: 0x1be0 (7136)
  LONG LookasideIrpFloat;                           // offset: 0x1be4 (7140)
  volatile LONG MmPageFaultCount;                   // offset: 0x1be8 (7144)
  volatile LONG MmCopyOnWriteCount;                 // offset: 0x1bec (7148)
  volatile LONG MmTransitionCount;                  // offset: 0x1bf0 (7152)
  volatile LONG MmCacheTransitionCount;             // offset: 0x1bf4 (7156)
  volatile LONG MmDemandZeroCount;                  // offset: 0x1bf8 (7160)
  volatile LONG MmPageReadCount;                    // offset: 0x1bfc (7164)
  volatile LONG MmPageReadIoCount;                  // offset: 0x1c00 (7168)
  volatile LONG MmCacheReadCount;                   // offset: 0x1c04 (7172)
  volatile LONG MmCacheIoCount;                     // offset: 0x1c08 (7176)
  volatile LONG MmDirtyPagesWriteCount;             // offset: 0x1c0c (7180)
  volatile LONG MmDirtyWriteIoCount;                // offset: 0x1c10 (7184)
  volatile LONG MmMappedPagesWriteCount;            // offset: 0x1c14 (7188)
  volatile LONG MmMappedWriteIoCount;               // offset: 0x1c18 (7192)
  volatile ULONG CachedCommit;                      // offset: 0x1c1c (7196)
  volatile ULONG CachedResidentAvailable;           // offset: 0x1c20 (7200)
  VOID *HyperPte;                                   // offset: 0x1c24 (7204)
  UCHAR CpuVendor;                                  // offset: 0x1c28 (7208)
  UCHAR PrcbPad8[3];                                // offset: 0x1c29 (7209)
  UCHAR VendorString[13];                           // offset: 0x1c2c (7212)
  UCHAR InitialApicId;                              // offset: 0x1c39 (7225)
  UCHAR LogicalProcessorsPerPhysicalProcessor;      // offset: 0x1c3a (7226)
  UCHAR PrcbPad9[5];                                // offset: 0x1c3b (7227)
  ULONG FeatureBits;                                // offset: 0x1c40 (7232)
  union _LARGE_INTEGER UpdateSignature;             // offset: 0x1c48 (7240)
  volatile ULONGLONG IsrTime;                       // offset: 0x1c50 (7248)
  ULONGLONG SpareField1;                            // offset: 0x1c58 (7256)
  struct _FX_SAVE_AREA NpxSaveArea;                 // offset: 0x1c60 (7264)
  struct _PROCESSOR_POWER_STATE PowerState;         // offset: 0x1e70 (7792)
  struct _KDPC DpcWatchdogDpc;                      // offset: 0x1f38 (7992)
  struct _KTIMER DpcWatchdogTimer;                  // offset: 0x1f58 (8024)
  VOID *WheaInfo;                                   // offset: 0x1f80 (8064)
  VOID *EtwSupport;                                 // offset: 0x1f84 (8068)
  union _SLIST_HEADER InterruptObjectPool;          // offset: 0x1f88 (8072)
  union _SLIST_HEADER HypercallPageList;            // offset: 0x1f90 (8080)
  VOID *HypercallPageVirtual;                       // offset: 0x1f98 (8088)
  VOID *VirtualApicAssist;                          // offset: 0x1f9c (8092)
  ULONGLONG *StatisticsPage;                        // offset: 0x1fa0 (8096)
  VOID *RateControl;                                // offset: 0x1fa4 (8100)
  struct _CACHE_DESCRIPTOR Cache[5];                // offset: 0x1fa8 (8104)
  ULONG CacheCount;                                 // offset: 0x1fe4 (8164)
  ULONG CacheProcessorMask[5];                      // offset: 0x1fe8 (8168)
  ULONG PackageProcessorSet;                        // offset: 0x1ffc (8188)
  ULONG CoreProcessorSet;                           // offset: 0x2000 (8192)
};

// 0x2128 (8488) bytes
struct _KPCR {
  union {
    struct _NT_TIB NtTib; // offset: 0x0 (0)
    struct {
      struct _EXCEPTION_REGISTRATION_RECORD
          *Used_ExceptionList; // offset: 0x0 (0)
      VOID *Used_StackBase;    // offset: 0x4 (4)
      VOID *Spare2;            // offset: 0x8 (8)
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

// 0x10 (16) bytes
struct LIST_ENTRY64 {
  ULONGLONG Flink; // offset: 0x0 (0)
  ULONGLONG Blink; // offset: 0x8 (8)
};
